// external header files
#include "rt_ant/rt_ant.h"

typedef double float64_t;
typedef float float32_t;

extern float32_t _cst_0[4096][4096];
extern float32_t _cst_1[4096];
extern int32_t _cst_2[1];
extern float32_t _cst_3[1024][20480];
extern int32_t _cst_4[32];
extern float32_t _cst_5[4096];
CIPHERTEXT Rotate(CIPHERTEXT ciph, int32_t rot_idx);

bool Main_graph() {
  CIPHERTEXT input_0;
  CIPHERTEXT input_dup_n0_1;
  int32_t bs_input_n0_2;
  CIPHERTEXT input_block_n0_3[32];
  CIPHERTEXT gemm_result_n1_4;
  int32_t gs_n1_5;
  CIPHERTEXT block_result_6;
  int32_t bs_n1_7;
  CIPHERTEXT reduce_intra_8;
  int32_t ri_n1_9;
  CIPHERTEXT output_10;
  CIPHERTEXT _ckks_gen_tmp_78_11;
  MODULUS* _pgen_modulus_12;
  uint32_t _pgen_num_q_13;
  uint32_t _pgen_rns_idx_14;
  CIPHERTEXT _pgen_tmp_0_15;
  CIPHERTEXT _pgen_tmp_1_16;
  CIPHERTEXT _pgen_tmp_2_17;
  PLAINTEXT _pgen_tmp_3_18;
  CIPHERTEXT _pgen_tmp_4_19;
  PLAINTEXT _pgen_tmp_5_20;
  CIPHERTEXT _pgen_tmp_6_21;
  PLAINTEXT _pgen_tmp_7_22;
  CIPHERTEXT _preg_268435456;
  CIPHERTEXT _preg_268435457;
  CIPHERTEXT _preg_268435458;
  CIPHERTEXT _preg_268435459;
  CIPHERTEXT _preg_268435460;
  CIPHERTEXT _preg_268435461;
  CIPHERTEXT _preg_268435462;
  CIPHERTEXT _preg_268435463;
  uint32_t  degree = Degree();
  input_0 = Get_input_data("input", 0);
  memset(&input_dup_n0_1, 0, sizeof(input_dup_n0_1));
  memset(&input_block_n0_3, 0, sizeof(input_block_n0_3));
  memset(&gemm_result_n1_4, 0, sizeof(gemm_result_n1_4));
  memset(&block_result_6, 0, sizeof(block_result_6));
  memset(&reduce_intra_8, 0, sizeof(reduce_intra_8));
  memset(&output_10, 0, sizeof(output_10));
  memset(&_ckks_gen_tmp_78_11, 0, sizeof(_ckks_gen_tmp_78_11));
  memset(&_pgen_tmp_0_15, 0, sizeof(_pgen_tmp_0_15));
  memset(&_pgen_tmp_1_16, 0, sizeof(_pgen_tmp_1_16));
  memset(&_pgen_tmp_2_17, 0, sizeof(_pgen_tmp_2_17));
  memset(&_pgen_tmp_3_18, 0, sizeof(_pgen_tmp_3_18));
  memset(&_pgen_tmp_4_19, 0, sizeof(_pgen_tmp_4_19));
  memset(&_pgen_tmp_5_20, 0, sizeof(_pgen_tmp_5_20));
  memset(&_pgen_tmp_6_21, 0, sizeof(_pgen_tmp_6_21));
  memset(&_pgen_tmp_7_22, 0, sizeof(_pgen_tmp_7_22));
  memset(&_preg_268435456, 0, sizeof(_preg_268435456));
  memset(&_preg_268435457, 0, sizeof(_preg_268435457));
  memset(&_preg_268435458, 0, sizeof(_preg_268435458));
  memset(&_preg_268435459, 0, sizeof(_preg_268435459));
  memset(&_preg_268435460, 0, sizeof(_preg_268435460));
  memset(&_preg_268435461, 0, sizeof(_preg_268435461));
  memset(&_preg_268435462, 0, sizeof(_preg_268435462));
  memset(&_preg_268435463, 0, sizeof(_preg_268435463));
  // /Flatten
  // pragma: 65536, 1028, 33
  Copy_ciph(&_preg_268435456, &input_0);
  // pragma: 65537, 1028, 33
  // /fc/Gemm
  // pragma: 65536, 1029, 35
  // BlockingRot replicate=5
  _preg_268435457 = Rotate(_preg_268435456, -4096);
  Init_ciph_same_scale(&_pgen_tmp_0_15, &_preg_268435456, &_preg_268435457);
  _preg_268435458 = Rotate(_preg_268435456, -8192);
  Init_ciph_same_scale(&_pgen_tmp_1_16, &_pgen_tmp_0_15, &_preg_268435458);
  _preg_268435459 = Rotate(_preg_268435456, -12288);
  Init_ciph_same_scale(&_pgen_tmp_2_17, &_pgen_tmp_1_16, &_preg_268435459);
  _preg_268435460 = Rotate(_preg_268435456, -16384);
  Init_ciph_same_scale(&input_dup_n0_1, &_pgen_tmp_2_17, &_preg_268435460);
  _pgen_modulus_12 = Q_modulus();
  _pgen_num_q_13 = Poly_level(&input_dup_n0_1._c0_poly);
  for (_pgen_rns_idx_14 = 0; _pgen_rns_idx_14 < _pgen_num_q_13; _pgen_rns_idx_14 = _pgen_rns_idx_14 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_0_15._c0_poly, _pgen_rns_idx_14, degree), Coeffs(&_preg_268435456._c0_poly, _pgen_rns_idx_14, degree), Coeffs(&_preg_268435457._c0_poly, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_0_15._c1_poly, _pgen_rns_idx_14, degree), Coeffs(&_preg_268435456._c1_poly, _pgen_rns_idx_14, degree), Coeffs(&_preg_268435457._c1_poly, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_1_16._c0_poly, _pgen_rns_idx_14, degree), Coeffs(&_pgen_tmp_0_15._c0_poly, _pgen_rns_idx_14, degree), Coeffs(&_preg_268435458._c0_poly, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_1_16._c1_poly, _pgen_rns_idx_14, degree), Coeffs(&_pgen_tmp_0_15._c1_poly, _pgen_rns_idx_14, degree), Coeffs(&_preg_268435458._c1_poly, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_2_17._c0_poly, _pgen_rns_idx_14, degree), Coeffs(&_pgen_tmp_1_16._c0_poly, _pgen_rns_idx_14, degree), Coeffs(&_preg_268435459._c0_poly, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_2_17._c1_poly, _pgen_rns_idx_14, degree), Coeffs(&_pgen_tmp_1_16._c1_poly, _pgen_rns_idx_14, degree), Coeffs(&_preg_268435459._c1_poly, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
    Hw_modadd(Coeffs(&input_dup_n0_1._c0_poly, _pgen_rns_idx_14, degree), Coeffs(&_pgen_tmp_2_17._c0_poly, _pgen_rns_idx_14, degree), Coeffs(&_preg_268435460._c0_poly, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
    Hw_modadd(Coeffs(&input_dup_n0_1._c1_poly, _pgen_rns_idx_14, degree), Coeffs(&_pgen_tmp_2_17._c1_poly, _pgen_rns_idx_14, degree), Coeffs(&_preg_268435460._c1_poly, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
    _pgen_modulus_12 = _pgen_modulus_12 + 1;
  }
  // BlockingRot HRot=bs=32
  for (bs_input_n0_2 = 0; bs_input_n0_2 < 32; bs_input_n0_2 = bs_input_n0_2 + 1) {
    _preg_268435461 = Rotate(input_dup_n0_1, _cst_4[bs_input_n0_2]);
    Copy_ciph(&input_block_n0_3[bs_input_n0_2], &_preg_268435461);
  }
  Zero_ciph(&gemm_result_n1_4);
  // IMRA Metakernel: gs=32
  for (gs_n1_5 = 0; gs_n1_5 < 32; gs_n1_5 = gs_n1_5 + 1) {
    Zero_ciph(&block_result_6);
    for (bs_n1_7 = 0; bs_n1_7 < 32; bs_n1_7 = bs_n1_7 + 1) {
      _ckks_gen_tmp_78_11 = input_block_n0_3[bs_n1_7];
      Pt_from_msg_ofst(&_pgen_tmp_3_18, 0/* cst_3 */, ((bs_n1_7 + (gs_n1_5 * 32))) * (20480), 20480, 1, 3);
      Init_ciph_up_scale_plain(&_pgen_tmp_4_19, &_ckks_gen_tmp_78_11, &_pgen_tmp_3_18);
      Init_ciph_same_scale(&block_result_6, &block_result_6, &_pgen_tmp_4_19);
      _pgen_modulus_12 = Q_modulus();
      _pgen_num_q_13 = Poly_level(&block_result_6._c0_poly);
      for (_pgen_rns_idx_14 = 0; _pgen_rns_idx_14 < _pgen_num_q_13; _pgen_rns_idx_14 = _pgen_rns_idx_14 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_4_19._c0_poly, _pgen_rns_idx_14, degree), Coeffs(&_ckks_gen_tmp_78_11._c0_poly, _pgen_rns_idx_14, degree), Coeffs(&_pgen_tmp_3_18._poly, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_4_19._c1_poly, _pgen_rns_idx_14, degree), Coeffs(&_ckks_gen_tmp_78_11._c1_poly, _pgen_rns_idx_14, degree), Coeffs(&_pgen_tmp_3_18._poly, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
        Hw_modadd(Coeffs(&block_result_6._c0_poly, _pgen_rns_idx_14, degree), Coeffs(&block_result_6._c0_poly, _pgen_rns_idx_14, degree), Coeffs(&_pgen_tmp_4_19._c0_poly, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
        Hw_modadd(Coeffs(&block_result_6._c1_poly, _pgen_rns_idx_14, degree), Coeffs(&block_result_6._c1_poly, _pgen_rns_idx_14, degree), Coeffs(&_pgen_tmp_4_19._c1_poly, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
        _pgen_modulus_12 = _pgen_modulus_12 + 1;
      }
    }
    _preg_268435462 = Rotate(block_result_6, gs_n1_5 * 32);
    Init_ciph_same_scale(&gemm_result_n1_4, &gemm_result_n1_4, &_preg_268435462);
    _pgen_modulus_12 = Q_modulus();
    _pgen_num_q_13 = Poly_level(&gemm_result_n1_4._c0_poly);
    for (_pgen_rns_idx_14 = 0; _pgen_rns_idx_14 < _pgen_num_q_13; _pgen_rns_idx_14 = _pgen_rns_idx_14 + 1) {
      Hw_modadd(Coeffs(&gemm_result_n1_4._c0_poly, _pgen_rns_idx_14, degree), Coeffs(&gemm_result_n1_4._c0_poly, _pgen_rns_idx_14, degree), Coeffs(&_preg_268435462._c0_poly, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
      Hw_modadd(Coeffs(&gemm_result_n1_4._c1_poly, _pgen_rns_idx_14, degree), Coeffs(&gemm_result_n1_4._c1_poly, _pgen_rns_idx_14, degree), Coeffs(&_preg_268435462._c1_poly, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
      _pgen_modulus_12 = _pgen_modulus_12 + 1;
    }
  }
  Init_ciph_down_scale(&gemm_result_n1_4, &gemm_result_n1_4);
  Rescale(&gemm_result_n1_4._c0_poly, &gemm_result_n1_4._c0_poly);
  Rescale(&gemm_result_n1_4._c1_poly, &gemm_result_n1_4._c1_poly);
  // gemm result reduce->Ps=4
  Copy_ciph(&reduce_intra_8, &gemm_result_n1_4);
  for (ri_n1_9 = 1; ri_n1_9 < 4; ri_n1_9 = ri_n1_9 + 1) {
    _preg_268435463 = Rotate(gemm_result_n1_4, ri_n1_9 * 5120);
    Init_ciph_same_scale(&reduce_intra_8, &reduce_intra_8, &_preg_268435463);
    _pgen_modulus_12 = Q_modulus();
    _pgen_num_q_13 = Poly_level(&reduce_intra_8._c0_poly);
    for (_pgen_rns_idx_14 = 0; _pgen_rns_idx_14 < _pgen_num_q_13; _pgen_rns_idx_14 = _pgen_rns_idx_14 + 1) {
      Hw_modadd(Coeffs(&reduce_intra_8._c0_poly, _pgen_rns_idx_14, degree), Coeffs(&reduce_intra_8._c0_poly, _pgen_rns_idx_14, degree), Coeffs(&_preg_268435463._c0_poly, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
      Hw_modadd(Coeffs(&reduce_intra_8._c1_poly, _pgen_rns_idx_14, degree), Coeffs(&reduce_intra_8._c1_poly, _pgen_rns_idx_14, degree), Coeffs(&_preg_268435463._c1_poly, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
      _pgen_modulus_12 = _pgen_modulus_12 + 1;
    }
  }
  // gemm result reduce->(kp/np)=1
  // gemm add bias
  Pt_from_msg(&_pgen_tmp_5_20, 1 /* cst_1 */, 4096, 1, 2);
  Init_ciph_same_scale_plain(&reduce_intra_8, &reduce_intra_8, &_pgen_tmp_5_20);
  _pgen_modulus_12 = Q_modulus();
  _pgen_num_q_13 = Poly_level(&reduce_intra_8._c0_poly);
  for (_pgen_rns_idx_14 = 0; _pgen_rns_idx_14 < _pgen_num_q_13; _pgen_rns_idx_14 = _pgen_rns_idx_14 + 1) {
    Hw_modadd(Coeffs(&reduce_intra_8._c0_poly, _pgen_rns_idx_14, degree), Coeffs(&reduce_intra_8._c0_poly, _pgen_rns_idx_14, degree), Coeffs(&_pgen_tmp_5_20._poly, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
    Set_coeffs(&reduce_intra_8._c1_poly, _pgen_rns_idx_14, degree, Coeffs(&reduce_intra_8._c1_poly, _pgen_rns_idx_14, degree));
    _pgen_modulus_12 = _pgen_modulus_12 + 1;
  }
  Pt_from_msg(&_pgen_tmp_7_22, 2 /* cst_5 */, 4096, 1, 2);
  Init_ciph_up_scale_plain(&_pgen_tmp_6_21, &reduce_intra_8, &_pgen_tmp_7_22);
  _pgen_modulus_12 = Q_modulus();
  _pgen_num_q_13 = Poly_level(&_pgen_tmp_6_21._c0_poly);
  for (_pgen_rns_idx_14 = 0; _pgen_rns_idx_14 < _pgen_num_q_13; _pgen_rns_idx_14 = _pgen_rns_idx_14 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_6_21._c0_poly, _pgen_rns_idx_14, degree), Coeffs(&reduce_intra_8._c0_poly, _pgen_rns_idx_14, degree), Coeffs(&_pgen_tmp_7_22._poly, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_6_21._c1_poly, _pgen_rns_idx_14, degree), Coeffs(&reduce_intra_8._c1_poly, _pgen_rns_idx_14, degree), Coeffs(&_pgen_tmp_7_22._poly, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
    _pgen_modulus_12 = _pgen_modulus_12 + 1;
  }
  Init_ciph_down_scale(&reduce_intra_8, &_pgen_tmp_6_21);
  Rescale(&reduce_intra_8._c0_poly, &_pgen_tmp_6_21._c0_poly);
  Rescale(&reduce_intra_8._c1_poly, &_pgen_tmp_6_21._c1_poly);
  Copy_ciph(&output_10, &reduce_intra_8);
  // pragma: 65537, 1029, 35
  Set_output_data("output", 0, &output_10);
  return true;
}

int Get_input_count() {
  return 1;
}

DATA_SCHEME* Get_encode_scheme(int idx) {
  static MAP_DESC desc_0[] = {
    {NORMAL, 0, 0, 0, 0}
  };
  static DATA_SCHEME scheme_0 = {
    "input", {0, 0, 0, 0}, 1, desc_0
  };
  static DATA_SCHEME* scheme[] = { &scheme_0 };
  return scheme[idx];
}

int Get_output_count() {
  return 1;
}

DATA_SCHEME* Get_decode_scheme(int idx) {
  static MAP_DESC desc_0[] = {
    {NORMAL, 0, 0, 0, 0}
  };
  static DATA_SCHEME scheme = {
    "output", {0, 0, 0, 0}, 1, desc_0
  };
  return &scheme;
}

CIPHERTEXT Rotate(CIPHERTEXT ciph_0, int32_t rot_idx_1) {
  RTLIB_TM_START(20, rtm);
  CIPHERTEXT _pgen_rot_res_2;
  POLYNOMIAL _pgen_swk_c0_3;
  POLYNOMIAL _pgen_swk_c1_4;
  POLYNOMIAL _pgen_ext_5;
  POLYNOMIAL _pgen_tmp_poly_6;
  POLYNOMIAL _pgen_mod_down_c0_7;
  POLYNOMIAL _pgen_mod_down_c1_8;
  SWITCH_KEY* _pgen_swk_9;
  uint32_t _pgen_part_idx_10;
  POLYNOMIAL _pgen_key0_11;
  POLYNOMIAL _pgen_key1_12;
  MODULUS* _pgen_modulus_13;
  uint32_t _pgen_num_q_14;
  uint32_t _pgen_rns_idx_15;
  uint32_t _pgen_num_p_16;
  uint32_t _pgen_p_ofst_17;
  uint32_t _pgen_p_idx_18;
  uint32_t _pgen_key_p_ofst_19;
  uint32_t _pgen_key_p_idx_20;
  int64_t* _pgen_order_21;
  uint32_t  degree = Degree();
  memset(&_pgen_rot_res_2, 0, sizeof(_pgen_rot_res_2));
  memset(&_pgen_swk_c0_3, 0, sizeof(_pgen_swk_c0_3));
  memset(&_pgen_swk_c1_4, 0, sizeof(_pgen_swk_c1_4));
  memset(&_pgen_ext_5, 0, sizeof(_pgen_ext_5));
  memset(&_pgen_tmp_poly_6, 0, sizeof(_pgen_tmp_poly_6));
  memset(&_pgen_mod_down_c0_7, 0, sizeof(_pgen_mod_down_c0_7));
  memset(&_pgen_mod_down_c1_8, 0, sizeof(_pgen_mod_down_c1_8));
  memset(&_pgen_key0_11, 0, sizeof(_pgen_key0_11));
  memset(&_pgen_key1_12, 0, sizeof(_pgen_key1_12));
  Init_ciph_same_scale(&_pgen_rot_res_2, &ciph_0, 0);
  Init_poly_by_size(&_pgen_swk_c0_3, Poly_level(&ciph_0._c1_poly), 1);
  Init_poly_by_size(&_pgen_swk_c1_4, Poly_level(&ciph_0._c1_poly), 1);
  Init_poly_by_size(&_pgen_ext_5, Poly_level(&ciph_0._c1_poly), 1);
  Init_poly_by_size(&_pgen_tmp_poly_6, 1, 0);
  Init_poly_by_size(&_pgen_mod_down_c0_7, Poly_level(&ciph_0._c0_poly), 0);
  Init_poly_by_size(&_pgen_mod_down_c1_8, Poly_level(&ciph_0._c1_poly), 0);
  _pgen_swk_9 = Swk(1, rot_idx_1);
  for (_pgen_part_idx_10 = 0; _pgen_part_idx_10 < Num_decomp(&ciph_0._c1_poly); _pgen_part_idx_10 = _pgen_part_idx_10 + 1) {
    Decomp_modup(&_pgen_ext_5, &ciph_0._c1_poly, _pgen_part_idx_10);
    Set_pk0(&_pgen_key0_11, _pgen_swk_9, _pgen_part_idx_10);
    Set_pk1(&_pgen_key1_12, _pgen_swk_9, _pgen_part_idx_10);
    _pgen_modulus_13 = Q_modulus();
    _pgen_num_q_14 = Poly_level(&_pgen_ext_5);
    for (_pgen_rns_idx_15 = 0; _pgen_rns_idx_15 < _pgen_num_q_14; _pgen_rns_idx_15 = _pgen_rns_idx_15 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_poly_6, 0, degree), Coeffs(&_pgen_key0_11, _pgen_rns_idx_15, degree), Coeffs(&_pgen_ext_5, _pgen_rns_idx_15, degree), _pgen_modulus_13, degree);
      Hw_modadd(Coeffs(&_pgen_swk_c0_3, _pgen_rns_idx_15, degree), Coeffs(&_pgen_swk_c0_3, _pgen_rns_idx_15, degree), Coeffs(&_pgen_tmp_poly_6, 0, degree), _pgen_modulus_13, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_poly_6, 0, degree), Coeffs(&_pgen_key1_12, _pgen_rns_idx_15, degree), Coeffs(&_pgen_ext_5, _pgen_rns_idx_15, degree), _pgen_modulus_13, degree);
      Hw_modadd(Coeffs(&_pgen_swk_c1_4, _pgen_rns_idx_15, degree), Coeffs(&_pgen_swk_c1_4, _pgen_rns_idx_15, degree), Coeffs(&_pgen_tmp_poly_6, 0, degree), _pgen_modulus_13, degree);
      _pgen_modulus_13 = _pgen_modulus_13 + 1;
    }
    _pgen_modulus_13 = P_modulus();
    _pgen_num_p_16 = Num_p(&_pgen_ext_5);
    _pgen_p_ofst_17 = Num_alloc(&_pgen_ext_5) - _pgen_num_p_16;
    _pgen_key_p_ofst_19 = Poly_level(&_pgen_key0_11);
    for (_pgen_rns_idx_15 = 0; _pgen_rns_idx_15 < _pgen_num_p_16; _pgen_rns_idx_15 = _pgen_rns_idx_15 + 1) {
      _pgen_p_idx_18 = _pgen_rns_idx_15 + _pgen_p_ofst_17;
      _pgen_key_p_idx_20 = _pgen_rns_idx_15 + _pgen_key_p_ofst_19;
      Hw_modmul(Coeffs(&_pgen_tmp_poly_6, 0, degree), Coeffs(&_pgen_key0_11, _pgen_key_p_idx_20, degree), Coeffs(&_pgen_ext_5, _pgen_p_idx_18, degree), _pgen_modulus_13, degree);
      Hw_modadd(Coeffs(&_pgen_swk_c0_3, _pgen_p_idx_18, degree), Coeffs(&_pgen_swk_c0_3, _pgen_p_idx_18, degree), Coeffs(&_pgen_tmp_poly_6, 0, degree), _pgen_modulus_13, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_poly_6, 0, degree), Coeffs(&_pgen_key1_12, _pgen_key_p_idx_20, degree), Coeffs(&_pgen_ext_5, _pgen_p_idx_18, degree), _pgen_modulus_13, degree);
      Hw_modadd(Coeffs(&_pgen_swk_c1_4, _pgen_p_idx_18, degree), Coeffs(&_pgen_swk_c1_4, _pgen_p_idx_18, degree), Coeffs(&_pgen_tmp_poly_6, 0, degree), _pgen_modulus_13, degree);
      _pgen_modulus_13 = _pgen_modulus_13 + 1;
    }
  }
  Mod_down(&_pgen_mod_down_c0_7, &_pgen_swk_c0_3);
  Mod_down(&_pgen_mod_down_c1_8, &_pgen_swk_c1_4);
  _pgen_modulus_13 = Q_modulus();
  _pgen_num_q_14 = Poly_level(&_pgen_mod_down_c0_7);
  for (_pgen_rns_idx_15 = 0; _pgen_rns_idx_15 < _pgen_num_q_14; _pgen_rns_idx_15 = _pgen_rns_idx_15 + 1) {
    Hw_modadd(Coeffs(&_pgen_mod_down_c0_7, _pgen_rns_idx_15, degree), Coeffs(&_pgen_mod_down_c0_7, _pgen_rns_idx_15, degree), Coeffs(&ciph_0._c0_poly, _pgen_rns_idx_15, degree), _pgen_modulus_13, degree);
    _pgen_modulus_13 = _pgen_modulus_13 + 1;
  }
  _pgen_order_21 = Auto_order(rot_idx_1);
  _pgen_modulus_13 = Q_modulus();
  _pgen_num_q_14 = Poly_level(&_pgen_mod_down_c0_7);
  for (_pgen_rns_idx_15 = 0; _pgen_rns_idx_15 < _pgen_num_q_14; _pgen_rns_idx_15 = _pgen_rns_idx_15 + 1) {
    Hw_rotate(Coeffs(&_pgen_rot_res_2._c0_poly, _pgen_rns_idx_15, degree), Coeffs(&_pgen_mod_down_c0_7, _pgen_rns_idx_15, degree), _pgen_order_21, _pgen_modulus_13, degree);
    Hw_rotate(Coeffs(&_pgen_rot_res_2._c1_poly, _pgen_rns_idx_15, degree), Coeffs(&_pgen_mod_down_c1_8, _pgen_rns_idx_15, degree), _pgen_order_21, _pgen_modulus_13, degree);
    _pgen_modulus_13 = _pgen_modulus_13 + 1;
  }
  Free_poly_data(&_pgen_swk_c0_3);
  Free_poly_data(&_pgen_swk_c1_4);
  Free_poly_data(&_pgen_ext_5);
  Free_poly_data(&_pgen_tmp_poly_6);
  Free_poly_data(&_pgen_mod_down_c0_7);
  Free_poly_data(&_pgen_mod_down_c1_8);
  RTLIB_TM_END(20, rtm);
  return _pgen_rot_res_2;
}

CKKS_PARAMS* Get_context_params() {
  static CKKS_PARAMS parm = {
    LIB_ANT, 65536, 0, 2, 3, 60, 56, 2, 192, 70, 
    { -16384, -12288, -8192, -4096, 0, 1, 2, 3,
      4, 5, 6, 7, 8, 9, 10, 11,
      12, 13, 14, 15, 16, 17, 18, 19,
      20, 21, 22, 23, 24, 25, 26, 27,
      28, 29, 30, 31, 32, 64, 96, 128,
      160, 192, 224, 256, 288, 320, 352, 384,
      416, 448, 480, 512, 544, 576, 608, 640,
      672, 704, 736, 768, 800, 832, 864, 896,
      928, 960, 992, 5120, 10240, 15360 }
  };
  return &parm;
}

RT_DATA_INFO* Get_rt_data_info() {
  static RT_DATA_INFO info = {
    "/tmp/resnet20_cifar10.bin",
    "XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX",
    DE_MSG_F32
  };
  return &info;
}

int32_t _cst_4[32] = {
  0, 1, 2, 3, 4, 5, 6, 7,
  8, 9, 10, 11, 12, 13, 14, 15,
  16, 17, 18, 19, 20, 21, 22, 23,
  24, 25, 26, 27, 28, 29, 30, 31
};
