
#include "rt_phantom/phantom_api.h"
#include "rt_phantom/rt_phantom.h"
#include "common/common.h"
#include "common/error.h"
#include "common/io_api.h"
#include "common/pt_mgr.h"
#include "common/rt_api.h"
#include "common/rtlib_timing.h"
#include "boot/Bootstrapper.cuh"

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstdint>
#include <string>

using namespace phantom;
using namespace phantom::arith;
using namespace phantom::util;

#ifdef ENABLE_PERFORMANCE_STATS
#include <unordered_map>

std::unordered_map<std::string, OperationStats> operation_stats;
#endif
class PHANTOM_CONTEXT
{
    using Ciphertext = PhantomCiphertext;
    using Plaintext = PhantomPlaintext;

public:
    const PhantomSecretKey &Secret_key() const { return *_sk; }
    const PhantomPublicKey &Public_key() const { return *_pk; }
    const PhantomRelinKey &Relin_key() const { return *_rlk; }
    const PhantomGaloisKey &Rotate_key() const { return *_rtk; }

    static PHANTOM_CONTEXT *Context()
    {
        IS_TRUE(Instance != nullptr, "instance not initialized");
        return Instance;
    }

    static void Init_context()
    {
        IS_TRUE(Instance == nullptr, "instance already initialized");
        Instance = new PHANTOM_CONTEXT();
    }

    static void Fini_context()
    {
        IS_TRUE(Instance != nullptr, "instance not initialized");
        delete Instance;
        Instance = nullptr;
#ifdef ENABLE_PERFORMANCE_STATS
        Print_performance_stats();
#endif
    }

public:
    int Normalize_bootstrap_slot(int slot) const
    {
        if (slot <= 0 || static_cast<uint64_t>(slot) >= _slot_count)
        {
            return static_cast<int>(_slot_count);
        }
        if ((slot & (slot - 1)) != 0)
        {
            return static_cast<int>(_slot_count);
        }
        return slot;
    }

    void Match_bootstrap_output_level(Ciphertext *res, int level)
    {
        int target_level = Chain_index_for_level(level);
        if (level != 0 && target_level > res->chain_index())
        {
            _evaluator->evaluator.mod_switch_to_inplace(*res, target_level);
        }
    }

    int Chain_depth(const Ciphertext *ct) const
    {
        return _ctx->get_context_data(ct->params_id()).chain_depth();
    }

    uint32_t Runtime_level(uint32_t level) const
    {
        return level + (_rboot_level_config ? 1 : 0);
    }

    int Chain_index_for_level(uint32_t level) const
    {
        return _num_prime_parts - Runtime_level(level);
    }

    int Chain_index_for_runtime_level(uint32_t level) const
    {
        return _num_prime_parts - level;
    }

    std::unique_ptr<Bootstrapper> Create_relu_bootstrapper(int logn)
    {
        long boundary_K = 25;
        long deg = 59;
        long scale_factor = 2;
        long inverse_deg = 127;
        long loge = 10;
        int log_slot_count = 15;
        auto bootstrapper = std::make_unique<Bootstrapper>(
            loge, logn, log_slot_count, _bootstrap_mul_depth,
            std::pow(2.0, _scaling_mod_size), boundary_K, deg, scale_factor,
            inverse_deg, _evaluator.get(), true);
        bootstrapper->prepare_mod_polynomial();
        bootstrapper->slot_vec.push_back(logn);
        bootstrapper->generate_LT_coefficient_3();
        return bootstrapper;
    }

    Bootstrapper *Relu_bootstrapper_for_slot(int slot)
    {
        switch (slot)
        {
        case 16384:
            IS_TRUE(_relu_bootstrapper_16384 != nullptr,
                    "relu bootstrapper for slot 16384 not initialized");
            return _relu_bootstrapper_16384.get();
        case 8192:
            IS_TRUE(_relu_bootstrapper_8192 != nullptr,
                    "relu bootstrapper for slot 8192 not initialized");
            return _relu_bootstrapper_8192.get();
        case 4096:
            IS_TRUE(_relu_bootstrapper_4096 != nullptr,
                    "relu bootstrapper for slot 4096 not initialized");
            return _relu_bootstrapper_4096.get();
        case 32768:
            IS_TRUE(_relu_bootstrapper_32768 != nullptr,
                    "relu bootstrapper for slot 32768 not initialized");
            return _relu_bootstrapper_32768.get();
        default:
            IS_TRUE(false, "Unsupported slot size for bootstrap_with_relu");
            return nullptr;
        }
    }

    void Prepare_relu_bootstrappers()
    {
        _relu_bootstrapper_32768 = Create_relu_bootstrapper(15);
        _relu_bootstrapper_16384 = Create_relu_bootstrapper(14);
        _relu_bootstrapper_8192 = Create_relu_bootstrapper(13);
        _relu_bootstrapper_4096 = Create_relu_bootstrapper(12);
    }

    void Prepare_input(TENSOR *input, const char *name)
    {
        size_t len = TENSOR_SIZE(input);
        std::vector<double> vec(input->_vals, input->_vals + len);
        Plaintext pt;
        int chain_index = Chain_index_for_runtime_level(_runtime_input_level);
        double encode_scale = std::pow(2.0, _scaling_mod_size);
        _evaluator->encoder.encode(vec, chain_index, encode_scale, pt);
        Ciphertext *ct = new Ciphertext;
        _evaluator->encryptor.encrypt(pt, *ct);
        Io_set_input(name, 0, ct);
    }
    void Set_output_data(const char *name, size_t idx, Ciphertext *ct)
    {
        Io_set_output(name, idx, new Ciphertext(*ct));
    }

    Ciphertext Get_input_data(const char *name, size_t idx)
    {
        Ciphertext *data = (Ciphertext *)Io_get_input(name, idx);
        IS_TRUE(data != nullptr, "not find data");
        return *data;
    }

    double *Handle_output(const char *name, size_t idx)
    {
        Ciphertext *data = (Ciphertext *)Io_get_output(name, idx);
        IS_TRUE(data != nullptr, "not find data");
        Plaintext pt;
        _evaluator->decryptor.decrypt(*data, pt);
        std::vector<double> vec;
        _evaluator->encoder.decode(pt, vec);
        double *msg = (double *)malloc(sizeof(double) * vec.size());
        memcpy(msg, vec.data(), sizeof(double) * vec.size());
        return msg;
    }

    void Encode_float(Plaintext *pt, float *input, size_t len, SCALE_T scale,
                      LEVEL_T level)
    {
        std::vector<double> vec(input, input + len);
        double encode_scale = std::pow(2.0, _scaling_mod_size * scale);
        int chain_index = Chain_index_for_level(level);
        _evaluator->encoder.encode(vec, chain_index, encode_scale, *pt);
    }

    void Encode_float_cst_lvl(Plaintext *pt, float *input, size_t len,
                              SCALE_T scale, int level)
    {
        std::vector<double> vec(input, input + len);
        auto &context_data = _ctx->get_context_data(level);

        _encoder->encode(*_ctx, vec,
                         std::pow(2.0, _scaling_mod_size * scale), *pt, context_data.chain_index());
    }

    void Encode_float_mask(Plaintext *pt, float input, size_t len, SCALE_T scale,
                           LEVEL_T level)
    {
        std::vector<double> vec(len, input);
        double encode_scale = std::pow(2.0, _scaling_mod_size * scale);
        int chain_index = Chain_index_for_level(level);
        _evaluator->encoder.encode(vec, chain_index, encode_scale, *pt);
    }

    void Encode_float_mask_runtime_level(Plaintext *pt, float input, size_t len,
                                         SCALE_T scale, LEVEL_T level)
    {
        std::vector<double> vec(len, input);
        double encode_scale = std::pow(2.0, _scaling_mod_size * scale);
        int chain_index = Chain_index_for_runtime_level(level);
        _evaluator->encoder.encode(vec, chain_index, encode_scale, *pt);
    }
    void Encode_float_mask_cst_lvl(Plaintext *pt, float input, size_t len,
                                   SCALE_T scale, int level)
    {
        std::vector<double> vec(len, input);
        auto &context_data = _ctx->get_context_data(level);
        _encoder->encode(*_ctx, vec,
                         std::pow(2.0, _scaling_mod_size * scale), *pt, context_data.chain_index());
    }

    void Decrypt(Ciphertext *ct, std::vector<double> &vec)
    {
        Plaintext pt;
        _evaluator->decryptor.decrypt(*ct, pt);
        _evaluator->encoder.decode(pt, vec);
    }

    void Decode(Plaintext *pt, std::vector<double> &vec)
    {
        _evaluator->encoder.decode(*pt, vec);
    }

public:
    void Equal_level(CIPHERTEXT &op1, CIPHERTEXT &op2)
    {
        auto level_1 = op1.chain_index();
        auto level_2 = op2.chain_index();
        if (level_1 != level_2)
        {
            if (level_1 < level_2)
            {
                _evaluator->evaluator.mod_switch_to_inplace(op1, level_2);
            }
            else
            {
                _evaluator->evaluator.mod_switch_to_inplace(op2, level_1);
            }
        }
    }
    void Equal_level(CIPHERTEXT &op1, PLAINTEXT &op2)
    {
        auto level_1 = op1.chain_index();
        auto level_2 = op2.chain_index();
        if (level_1 != level_2)
        {
            if (level_1 < level_2)
            {
                _evaluator->evaluator.mod_switch_to_inplace(op1, level_2);
            }
            else
            {
                _evaluator->evaluator.mod_switch_to_inplace(op2, level_1);
            }
        }
    }

    void Add(Ciphertext *op1, Ciphertext *op2, Ciphertext *res)
    {
        Ciphertext final_op1 = *op1;
        Ciphertext final_op2 = *op2;
        Equal_level(final_op1, final_op2);
        _evaluator->evaluator.add(final_op1, final_op2, *res);
    }

    void Add(Ciphertext *op1, Plaintext *op2, Ciphertext *res)
    {
        Ciphertext final_op1 = *op1;
        Plaintext final_op2 = *op2;
        Equal_level(final_op1, final_op2);
        _evaluator->evaluator.add_plain(final_op1, final_op2, *res);
    }
    void Add_const(const Ciphertext *op1, double op2, Ciphertext *res)
    {
        Plaintext pt;
        _evaluator->encoder.encode(op2, op1->chain_index(), op1->scale(), pt);
        if (res == op1)
        {
            _evaluator->evaluator.add_plain_inplace(*res, pt);
        }
        else
        {
            _evaluator->evaluator.add_plain(*op1, pt, *res);
        }
    }

    void Mul(Ciphertext *op1, Ciphertext *op2, Ciphertext *res)
    {
        Ciphertext final_op1 = *op1;
        Ciphertext final_op2 = *op2;
        Equal_level(final_op1, final_op2);
        _evaluator->evaluator.multiply(final_op1, final_op2, *res);
    }

    void Mul(Ciphertext *op1, Plaintext *op2, Ciphertext *res)
    {
        Ciphertext final_op1 = *op1;
        Plaintext final_op2 = *op2;
        Equal_level(final_op1, final_op2);
        _evaluator->evaluator.multiply_plain(final_op1, final_op2, *res);
    }
    void Mul_const(const Ciphertext *op1, double op2, Ciphertext *res)
    {
        Plaintext pt;
        _evaluator->encoder.encode(op2, op1->chain_index(), op1->scale(), pt);
        if (res == op1)
        {
            _evaluator->evaluator.multiply_plain_inplace(*res, pt);
        }
        else
        {
            _evaluator->evaluator.multiply_plain(*op1, pt, *res);
        }
    }
    void Rotate(const Ciphertext *op1, int step, Ciphertext *res)
    {
        if (step < 0)
        {
            step = _slot_count + step;
        }
        if (res == op1)
        {

            _evaluator->evaluator.rotate_vector_inplace(*res, step, *_rtk);
        }
        else
        {
            _evaluator->evaluator.rotate_vector(*const_cast<Ciphertext *>(op1), step, *_rtk, *res);
        }
    }

    void Rescale(const Ciphertext *op1, Ciphertext *res)
    {
        if (res == op1)
        {
            _evaluator->evaluator.rescale_to_next_inplace(*res);
        }
        else
        {
            _evaluator->evaluator.rescale_to_next(*op1, *res);
        }
    }

    void Mod_switch(const Ciphertext *op1, Ciphertext *res)
    {
        if (res == op1)
        {
            _evaluator->evaluator.mod_switch_to_next_inplace(*res);
        }
        else
        {
            _evaluator->evaluator.mod_switch_to_inplace(*res, op1->chain_index());
        }
    }

    void Relin(const Ciphertext *op1, Ciphertext *res)
    {
        if (res == op1)
        {

            _evaluator->evaluator.relinearize_inplace(*res, *_rlk);
        }
        else
        {
            _evaluator->evaluator.relinearize(*op1, *_rlk, *res);
        }
    }

    void Bootstrap(Ciphertext *op1, Ciphertext *res, int level, int slot)
    {
        _evaluator->evaluator.mod_switch_to_inplace(*op1, _num_prime_parts - 1);

        int effective_slot = Normalize_bootstrap_slot(slot);

        Ciphertext *bootstrap_input = op1;

        Ciphertext cyclic_input;
        bool cyclic_input_used = false;
        if (effective_slot > 0 && static_cast<uint64_t>(effective_slot) < _slot_count)
        {
            cyclic_input = *bootstrap_input;
            Ciphertext rotated_input = *bootstrap_input;
            for (uint64_t offset = effective_slot; offset < _slot_count; offset += effective_slot)
            {
                Rotate(&rotated_input, effective_slot, &rotated_input);
                Add(&cyclic_input, &rotated_input, &cyclic_input);
            }
            rotated_input.release();
            bootstrap_input = &cyclic_input;
            cyclic_input_used = true;
        }

        Ciphertext in_place_input;
        bool in_place_bootstrap = res == op1;
        if (in_place_bootstrap)
        {
            in_place_input = *bootstrap_input;
            bootstrap_input = &in_place_input;
        }

        res->release();
        switch (effective_slot)
        {
        case 16384:
            _bootstrapper_16384->bootstrap_real_3(*res, *bootstrap_input);
            break;
        case 8192:
            _bootstrapper_8192->bootstrap_real_3(*res, *bootstrap_input);
            break;
        case 4096:
            _bootstrapper_4096->bootstrap_real_3(*res, *bootstrap_input);
            break;
        case 32768:
            _bootstrapper_32768->bootstrap_real_3(*res, *bootstrap_input);
            break;
        default:
            IS_TRUE(false, "Unsupported slot size for bootstrap");
            break;
        }

        if (in_place_bootstrap)
        {
            in_place_input.release();
        }

        if (cyclic_input_used)
        {
            cyclic_input.release();
        }

        Match_bootstrap_output_level(res, level);
    }

    void Bootstrap_with_relu(Ciphertext *op1, Ciphertext *res, int level,
                             int slot, double relu_value_range)
    {
        int effective_slot = Normalize_bootstrap_slot(slot);
        bool sparse_slots = static_cast<uint64_t>(effective_slot) < _slot_count;
        bool needs_range_scale = relu_value_range > 1.0;
        bool needs_mask = sparse_slots || needs_range_scale;

        Ciphertext normalized_input;
        Ciphertext *bootstrap_input = op1;
        if (needs_mask)
        {
            float mask_value =
                static_cast<float>(needs_range_scale ? 1.0 / relu_value_range : 1.0);
            Plaintext input_mask;
            Encode_float_mask_runtime_level(
                &input_mask, mask_value, static_cast<size_t>(effective_slot), 1,
                Level(bootstrap_input));
            Ciphertext masked_input;
            Mul(bootstrap_input, &input_mask, &masked_input);
            Rescale(&masked_input, &normalized_input);
            masked_input.release();
            input_mask.release();
            bootstrap_input = &normalized_input;
        }

        Ciphertext cyclic_input;
        bool cyclic_input_used = false;
        if (sparse_slots)
        {
            cyclic_input = *bootstrap_input;
            Ciphertext rotated_input = *bootstrap_input;
            for (uint64_t offset = effective_slot; offset < _slot_count; offset += effective_slot)
            {
                Rotate(&rotated_input, effective_slot, &rotated_input);
                Add(&cyclic_input, &rotated_input, &cyclic_input);
            }
            rotated_input.release();
            bootstrap_input = &cyclic_input;
            cyclic_input_used = true;
        }

        Ciphertext in_place_input;
        bool in_place_bootstrap = res == op1;
        if (in_place_bootstrap)
        {
            in_place_input = *bootstrap_input;
            bootstrap_input = &in_place_input;
        }

        res->release();
        Relu_bootstrapper_for_slot(effective_slot)->slim_bootstrap(*res,
                                                                   *bootstrap_input);

        if (in_place_bootstrap)
        {
            in_place_input.release();
        }

        if (cyclic_input_used)
        {
            cyclic_input.release();
        }

        if (needs_mask)
        {
            float mask_value =
                static_cast<float>(needs_range_scale ? relu_value_range : 1.0);
            Plaintext output_mask;
            Encode_float_mask_runtime_level(
                &output_mask, mask_value, static_cast<size_t>(effective_slot), 1,
                Level(res));
            Ciphertext masked_output;
            Mul(res, &output_mask, &masked_output);
            Rescale(&masked_output, res);
            masked_output.release();
            output_mask.release();
        }

        Match_bootstrap_output_level(res, level);
    }
    void Free_ciph(Ciphertext *ct)
    {
        ct->release();
    }
    void Free_plain(Plaintext *pt)
    {
        pt->release();
    }
    void Free_ciph_array(Ciphertext *ct, size_t size)
    {
        for (size_t i = 0; i < size; ++i)
        {
            ct[i].release();
        }
    }
    void Init_context_with_bootstrap()
    {
        IS_TRUE(Instance == nullptr, "_install already created");

        CKKS_PARAMS *prog_param = Get_context_params();
        IS_TRUE(prog_param->_provider == LIB_PHANTOM, "provider is not PHANTOM");
        _slot_count = prog_param->_poly_degree / 2;
        EncryptionParameters parms(scheme_type::ckks);
        uint32_t degree = prog_param->_poly_degree;
        parms.set_poly_modulus_degree(degree);

        _rboot_level_config = true;
        _runtime_input_level =
            prog_param->_input_level + (_rboot_level_config ? 1 : 0);
        _bootstrap_mul_depth =
            prog_param->_mul_depth + (_rboot_level_config ? 1 : 0);

        uint32_t _bts_required_level = _rboot_level_config ? 19 : 14;
        IS_TRUE(_bootstrap_mul_depth >= _bts_required_level,
                "bootstrap mul depth is smaller than required level");
        uint32_t _bts_remaining_level =
            _bootstrap_mul_depth - _bts_required_level;
        std::vector<int> bits;
        bits.push_back(prog_param->_first_mod_size);
        for (uint32_t i = 0; i < _bts_remaining_level; ++i)
        {
            bits.push_back(prog_param->_scaling_mod_size);
        }
        for (uint32_t i = 0; i < _bts_required_level; ++i)
        {
            bits.push_back(prog_param->_first_mod_size);
        }
        constexpr size_t special_modulus_size = 4;
        for (size_t i = 0; i < special_modulus_size; i++)
        {
            bits.push_back(prog_param->_first_mod_size);
        }
        parms.set_coeff_modulus(phantom::arith::CoeffModulus::Create(degree, bits));
        parms.set_secret_key_hamming_weight(192);
        parms.set_special_modulus_size(special_modulus_size);
        _num_prime_parts = bits.size() - special_modulus_size + 1;
        phantom::arith::sec_level_type sec = phantom::arith::sec_level_type::tc128;
        switch (prog_param->_sec_level)
        {
        case 128:
            sec = phantom::arith::sec_level_type::tc128;
            break;
        case 192:
            sec = phantom::arith::sec_level_type::tc192;
            break;
        case 256:
            sec = phantom::arith::sec_level_type::tc256;
            break;
        default:
            sec = phantom::arith::sec_level_type::none;
            break;
        }
        if (degree < 4096 && sec != phantom::arith::sec_level_type::none)
        {
            DEV_WARN("WARNING: degree %d too small, reset security level to none\n",
                     degree);
            sec = phantom::arith::sec_level_type::none;
        }
        _scaling_mod_size = prog_param->_scaling_mod_size;
        _ctx = std::make_unique<PhantomContext>(parms);
        _sk = std::make_unique<PhantomSecretKey>(*_ctx);
        _pk = std::make_unique<PhantomPublicKey>(_sk->gen_publickey(*_ctx));
        _rlk = std::make_unique<PhantomRelinKey>(_sk->gen_relinkey(*_ctx));
        _rtk = std::make_unique<PhantomGaloisKey>();
        _encoder = std::make_unique<PhantomCKKSEncoder>(*_ctx);
        _evaluator = std::make_unique<CKKSEvaluator>(_ctx.get(), _pk.get(), _sk.get(),
                                                     _encoder.get(), _rlk.get(), _rtk.get(),
                                                     std::pow(2.0, _scaling_mod_size));

        long boundary_K = 25;
        long deg = 59;
        long scale_factor = 2;
        long inverse_deg = 1;

        long loge = 10;

        int log_slot_count = 15;
        _bootstrapper_32768 = std::make_unique<Bootstrapper>(
            loge, 15, log_slot_count, _bootstrap_mul_depth, std::pow(2.0, _scaling_mod_size),
            boundary_K, deg, scale_factor, inverse_deg, _evaluator.get());
        _bootstrapper_16384 = std::make_unique<Bootstrapper>(
            loge, 14, log_slot_count, _bootstrap_mul_depth, std::pow(2.0, _scaling_mod_size),
            boundary_K, deg, scale_factor, inverse_deg, _evaluator.get());
        _bootstrapper_8192 = std::make_unique<Bootstrapper>(
            loge, 13, log_slot_count, _bootstrap_mul_depth, std::pow(2.0, _scaling_mod_size),
            boundary_K, deg, scale_factor, inverse_deg, _evaluator.get());
        _bootstrapper_4096 = std::make_unique<Bootstrapper>(
            loge, 12, log_slot_count, _bootstrap_mul_depth, std::pow(2.0, _scaling_mod_size),
            boundary_K, deg, scale_factor, inverse_deg, _evaluator.get());

        _bootstrapper_32768->prepare_mod_polynomial();
        _bootstrapper_16384->prepare_mod_polynomial();
        _bootstrapper_8192->prepare_mod_polynomial();
        _bootstrapper_4096->prepare_mod_polynomial();

        vector<int> gal_steps_vector;
        gal_steps_vector.push_back(0);
        for (int i = 0; i < log_slot_count; i++)
        {
            gal_steps_vector.push_back((1 << i));
        }

        _bootstrapper_32768->addLeftRotKeys_Linear_to_vector_3(gal_steps_vector);
        _bootstrapper_16384->addLeftRotKeys_Linear_to_vector_3(gal_steps_vector);
        _bootstrapper_8192->addLeftRotKeys_Linear_to_vector_3(gal_steps_vector);
        _bootstrapper_4096->addLeftRotKeys_Linear_to_vector_3(gal_steps_vector);

        _evaluator->decryptor.create_galois_keys_from_steps(gal_steps_vector, *(_evaluator.get()->galois_keys));
        // log2(32768) = 15, log2(16384) = 14, log2(8192) = 13, log2(4096) = 12
        _bootstrapper_32768->slot_vec.push_back(15);
        _bootstrapper_16384->slot_vec.push_back(14);
        _bootstrapper_8192->slot_vec.push_back(13);
        _bootstrapper_4096->slot_vec.push_back(12);

        _bootstrapper_32768->generate_LT_coefficient_3();
        _bootstrapper_16384->generate_LT_coefficient_3();
        _bootstrapper_8192->generate_LT_coefficient_3();
        _bootstrapper_4096->generate_LT_coefficient_3();
        Prepare_relu_bootstrappers();
        printf(
            "ckks_param: _provider = %d, _poly_degree = %d, _sec_level = %ld, "
            "mul_depth = %ld, _first_mod_size = %ld, _scaling_mod_size = %ld, "
            "_num_q_parts = %ld, _num_rot_idx = %ld, _num_prime_parts = %ld, "
            "rboot_level_config = %d, runtime_input_level = %u, "
            "bootstrap_mul_depth = %u, bts_required_level = %u\n",
            prog_param->_provider, prog_param->_poly_degree, prog_param->_sec_level,
            prog_param->_mul_depth, prog_param->_first_mod_size,
            prog_param->_scaling_mod_size, prog_param->_num_q_parts,
            prog_param->_num_rot_idx, _num_prime_parts,
            _rboot_level_config ? 1 : 0, _runtime_input_level,
            _bootstrap_mul_depth, _bts_required_level);
    }
    void Init_context_without_bootstrap()
    {
        IS_TRUE(Instance == nullptr, "_install already created");

        CKKS_PARAMS *prog_param = Get_context_params();
        IS_TRUE(prog_param->_provider == LIB_PHANTOM, "provider is not PHANTOM");
        _rboot_level_config = false;
        _runtime_input_level = prog_param->_input_level;
        _bootstrap_mul_depth = prog_param->_mul_depth;

        EncryptionParameters parms(scheme_type::ckks);
        uint32_t degree = prog_param->_poly_degree;
        parms.set_poly_modulus_degree(degree);
        std::vector<int> bits;
        bits.push_back(prog_param->_first_mod_size);
        for (uint32_t i = 0; i < prog_param->_mul_depth; ++i)
        {
            bits.push_back(prog_param->_scaling_mod_size);
        }
        bits.push_back(prog_param->_first_mod_size);
        parms.set_coeff_modulus(phantom::arith::CoeffModulus::Create(degree, bits));
        parms.set_secret_key_hamming_weight(prog_param->_hamming_weight);
        // parms.set_sparse_slots(degree/2);
        _num_prime_parts = bits.size();
        phantom::arith::sec_level_type sec = phantom::arith::sec_level_type::tc128;
        switch (prog_param->_sec_level)
        {
        case 128:
            sec = phantom::arith::sec_level_type::tc128;
            break;
        case 192:
            sec = phantom::arith::sec_level_type::tc192;
            break;
        case 256:
            sec = phantom::arith::sec_level_type::tc256;
            break;
        default:
            sec = phantom::arith::sec_level_type::none;
            break;
        }
        if (degree < 4096 && sec != phantom::arith::sec_level_type::none)
        {
            DEV_WARN("WARNING: degree %d too small, reset security level to none\n",
                     degree);
            sec = phantom::arith::sec_level_type::none;
        }

        _ctx = std::make_unique<PhantomContext>(parms);
        _sk = std::make_unique<PhantomSecretKey>(*_ctx);
        _pk = std::make_unique<PhantomPublicKey>(_sk->gen_publickey(*_ctx));
        _rlk = std::make_unique<PhantomRelinKey>(_sk->gen_relinkey(*_ctx));
        _rtk = std::make_unique<PhantomGaloisKey>();
        _encoder = std::make_unique<PhantomCKKSEncoder>(*_ctx);
        _evaluator = std::make_unique<CKKSEvaluator>(_ctx.get(), _pk.get(), _sk.get(), _encoder.get(), _rlk.get(), _rtk.get(),
                                                     prog_param->_scaling_mod_size);
        _scaling_mod_size = prog_param->_scaling_mod_size;

        vector<int> rotation_keys(prog_param->_rot_idxs, prog_param->_rot_idxs + prog_param->_num_rot_idx);
        vector<int> gal_steps_vector;
        for (auto rot : rotation_keys)
        {
            if (find(gal_steps_vector.begin(), gal_steps_vector.end(), rot) == gal_steps_vector.end())
                gal_steps_vector.push_back(rot);
        }

        _evaluator->decryptor.create_galois_keys_from_steps(gal_steps_vector, *(_evaluator.get()->galois_keys));
    }
    SCALE_T Scale(const Ciphertext *op)
    {
        return (uint64_t)std::log2(op->scale()) / _scaling_mod_size;
    }

    LEVEL_T Level(const Ciphertext *op) { return op->coeff_modulus_size(); }

private:
    PHANTOM_CONTEXT(const PHANTOM_CONTEXT &) = delete;
    PHANTOM_CONTEXT &operator=(const PHANTOM_CONTEXT &) = delete;

    PHANTOM_CONTEXT();
    ~PHANTOM_CONTEXT();

    static PHANTOM_CONTEXT *Instance;

private:
    std::unique_ptr<PhantomContext> _ctx;
    std::unique_ptr<PhantomSecretKey> _sk;
    std::unique_ptr<PhantomPublicKey> _pk;
    std::unique_ptr<PhantomRelinKey> _rlk;
    std::unique_ptr<PhantomGaloisKey> _rtk;
    std::unique_ptr<PhantomCKKSEncoder> _encoder;
    std::unique_ptr<CKKSEvaluator> _evaluator;
    std::unique_ptr<Bootstrapper> _bootstrapper_32768;
    std::unique_ptr<Bootstrapper> _bootstrapper_16384;
    std::unique_ptr<Bootstrapper> _bootstrapper_8192;
    std::unique_ptr<Bootstrapper> _bootstrapper_4096;
    std::unique_ptr<Bootstrapper> _relu_bootstrapper_32768;
    std::unique_ptr<Bootstrapper> _relu_bootstrapper_16384;
    std::unique_ptr<Bootstrapper> _relu_bootstrapper_8192;
    std::unique_ptr<Bootstrapper> _relu_bootstrapper_4096;

    uint64_t _scaling_mod_size;
    uint64_t _num_prime_parts;
    uint64_t _slot_count;
    bool _rboot_level_config = false;
    uint32_t _runtime_input_level = 0;
    uint32_t _bootstrap_mul_depth = 0;
};

PHANTOM_CONTEXT *PHANTOM_CONTEXT::Instance = nullptr;

PHANTOM_CONTEXT::PHANTOM_CONTEXT()
{
    CKKS_PARAMS *prog_param = Get_context_params();
    if (Need_bts())
    {
        Init_context_with_bootstrap();
    }
    else
    {
        Init_context_without_bootstrap();
    }
}

PHANTOM_CONTEXT::~PHANTOM_CONTEXT()
{
}

// Vendor-specific RT API
void Prepare_context()
{
    Init_rtlib_timing();
    Io_init();
    PHANTOM_CONTEXT::Init_context();
    RT_DATA_INFO *data_info = Get_rt_data_info();
    if (data_info != nullptr)
    {
        Pt_mgr_init(data_info->_file_name);
    }
}

void Finalize_context()
{
    if (Get_rt_data_info() != nullptr)
    {
        Pt_mgr_fini();
    }
    PHANTOM_CONTEXT::Fini_context();
    Io_fini();
}
void Prepare_input(TENSOR *input, const char *name)
{
    PHANTOM_CONTEXT::Context()->Prepare_input(input, name);
}

void Prepare_input_dup(TENSOR *input, const char *name)
{
    PHANTOM_CONTEXT::Context()->Prepare_input(input, name);
}

double *Handle_output(const char *name)
{
    return PHANTOM_CONTEXT::Context()->Handle_output(name, 0);
}

// Encode/Decode API
void Phantom_set_output_data(const char *name, size_t idx, CIPHER data)
{
    PHANTOM_CONTEXT::Context()->Set_output_data(name, idx, data);
}

CIPHERTEXT Phantom_get_input_data(const char *name, size_t idx)
{
    return PHANTOM_CONTEXT::Context()->Get_input_data(name, idx);
}

void Phantom_encode_float(PLAIN pt, float *input, size_t len, SCALE_T scale,
                          LEVEL_T level)
{
    PHANTOM_CONTEXT::Context()->Encode_float(pt, input, len, scale, level);
}

void Phantom_decode_float(PLAIN pt, std::vector<double> &output)
{
    PHANTOM_CONTEXT::Context()->Decode(pt, output);
}

void Phantom_encode_float_cst_lvl(PLAIN pt, float *input, size_t len,
                                  SCALE_T scale, int level)
{
    PHANTOM_CONTEXT::Context()->Encode_float_cst_lvl(pt, input, len, scale, level);
}
void Phantom_encode_float_mask(PLAIN pt, float input, size_t len, SCALE_T scale,
                               LEVEL_T level)
{
    PHANTOM_CONTEXT::Context()->Encode_float_mask(pt, input, len, scale, level);
}

void Phantom_encode_float_mask_cst_lvl(PLAIN pt, float input, size_t len,
                                       SCALE_T scale, int level)
{
    PHANTOM_CONTEXT::Context()->Encode_float_mask_cst_lvl(pt, input, len, scale,
                                                          level);
}

// Evaluation API
void Phantom_add_ciph(CIPHER res, CIPHER op1, CIPHER op2)
{
    if (op1->size() == 0)
    {
        // special handling for accumulation
        *res = *op2;
        return;
    }

    PHANTOM_CONTEXT::Context()->Add(op1, op2, res);
}

void Phantom_add_plain(CIPHER res, CIPHER op1, PLAIN op2)
{
    PHANTOM_CONTEXT::Context()->Add(op1, op2, res);
}
void Phantom_add_const(CIPHER res, CIPHER op1, double op2)
{
    PHANTOM_CONTEXT::Context()->Add_const(op1, op2, res);
}
void Phantom_mul_ciph(CIPHER res, CIPHER op1, CIPHER op2)
{

    PHANTOM_CONTEXT::Context()->Mul(op1, op2, res);
}
void Phantom_mul_ciph_const(CIPHER res, CIPHER op1, double op2)
{
    PHANTOM_CONTEXT::Context()->Mul_const(op1, op2, res);
}
void Phantom_mul_plain(CIPHER res, CIPHER op1, PLAIN op2)
{
    PHANTOM_CONTEXT::Context()->Mul(op1, op2, res);
}

void Phantom_rotate(CIPHER res, CIPHER op, int step)
{
    PHANTOM_CONTEXT::Context()->Rotate(op, step, res);
}

void Phantom_rescale(CIPHER res, CIPHER op)
{
    PHANTOM_CONTEXT::Context()->Rescale(op, res);
}

void Phantom_mod_switch(CIPHER res, CIPHER op)
{
    PHANTOM_CONTEXT::Context()->Mod_switch(op, res);
}

void Phantom_relin(CIPHER res, CIPHER3 op)
{
    PHANTOM_CONTEXT::Context()->Relin(op, res);
}
void Phantom_bootstrap(CIPHER res, CIPHER op, int level, int slot)
{
    PHANTOM_CONTEXT::Context()->Bootstrap(op, res, level, slot);
}
void Phantom_bootstrap_with_relu(CIPHER res, CIPHER op, int level, int slot,
                                 double relu_value_range)
{
    PHANTOM_CONTEXT::Context()->Bootstrap_with_relu(op, res, level, slot,
                                                    relu_value_range);
}

void Phantom_free_ciph(CIPHER ct)
{
    PHANTOM_CONTEXT::Context()->Free_ciph(ct);
}
void Phantom_free_plain(PLAIN pt)
{
    PHANTOM_CONTEXT::Context()->Free_plain(pt);
}
void Phantom_free_ciph_array(CIPHER ct, size_t size)
{
    PHANTOM_CONTEXT::Context()->Free_ciph_array(ct, size);
}
void Phantom_copy(CIPHER res, CIPHER op) { *res = *op; }

void Phantom_zero(CIPHER res) { res->zero_ciph(); }

SCALE_T Phantom_scale(CIPHER res) { return PHANTOM_CONTEXT::Context()->Scale(res); }

LEVEL_T Phantom_level(CIPHER res) { return PHANTOM_CONTEXT::Context()->Level(res); }

// Debug API
void Dump_ciph(CIPHER ct, size_t start, size_t len)
{
    std::vector<double> vec;
    PHANTOM_CONTEXT::Context()->Decrypt(ct, vec);
    size_t max = std::min(vec.size(), start + len);
    for (size_t i = start; i < max; ++i)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

void Dump_plain(PLAIN pt, size_t start, size_t len)
{
    std::vector<double> vec;
    PHANTOM_CONTEXT::Context()->Decode(pt, vec);
    size_t max = std::min(vec.size(), start + len);
    for (size_t i = start; i < max; ++i)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

void Dump_cipher_msg(const char *name, CIPHER ct, uint32_t len)
{
    std::cout << "[" << name << "]: ";
    Dump_ciph(ct, 16, len);
}

void Dump_plain_msg(const char *name, PLAIN pt, uint32_t len)
{
    std::cout << "[" << name << "]: ";
    Dump_plain(pt, 16, len);
}

double *Get_msg(CIPHER ct)
{
    std::vector<double> vec;
    PHANTOM_CONTEXT::Context()->Decrypt(ct, vec);
    double *msg = (double *)malloc(sizeof(double) * vec.size());
    memcpy(msg, vec.data(), sizeof(double) * vec.size());
    return msg;
}

double *Get_msg_from_plain(PLAIN pt)
{
    std::vector<double> vec;
    PHANTOM_CONTEXT::Context()->Decode(pt, vec);
    double *msg = (double *)malloc(sizeof(double) * vec.size());
    memcpy(msg, vec.data(), sizeof(double) * vec.size());
    return msg;
}
