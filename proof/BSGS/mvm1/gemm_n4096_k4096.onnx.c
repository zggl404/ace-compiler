// external header files
#include "rt_ant/rt_ant.h"
#include <math.h>

typedef double float64_t;
typedef float float32_t;

extern float32_t _cst_0[4096][4096];
extern float32_t _cst_1[4096];
extern float32_t _cst_2[4096][8192];
extern int32_t _cst_3[64];
extern float32_t _cst_4[4096];
CIPHERTEXT Rotate(CIPHERTEXT ciph, int32_t rot_idx);


int num_rot = 0;
// inplace MulAdd
// tmp = a * b
// c = c + tmp
void CKKS_mul_add(CIPHERTEXT *c, CIPHERTEXT *a, PLAINTEXT *b, uint32_t degree)
{
    CIPHERTEXT tmp;
    MODULUS* _pgen_modulus_10;
    uint32_t _pgen_num_q_11;
    uint32_t _pgen_rns_idx_12;

    memset(&tmp, 0, sizeof(tmp));
    Init_ciph_up_scale_plain(&tmp, a, b);
    Init_ciph_same_scale(c, c, &tmp);
      
    _pgen_modulus_10 = Q_modulus();
    _pgen_num_q_11 = Poly_level(&(c->_c0_poly));
    for (_pgen_rns_idx_12 = 0; _pgen_rns_idx_12 < _pgen_num_q_11; _pgen_rns_idx_12 = _pgen_rns_idx_12 + 1) {
        Hw_modmul(Coeffs(&tmp._c0_poly, _pgen_rns_idx_12, degree), Coeffs(&(a->_c0_poly), _pgen_rns_idx_12, degree), Coeffs(&(b->_poly), _pgen_rns_idx_12, degree), _pgen_modulus_10, degree);
        Hw_modmul(Coeffs(&tmp._c1_poly, _pgen_rns_idx_12, degree), Coeffs(&(a->_c1_poly), _pgen_rns_idx_12, degree), Coeffs(&(b->_poly), _pgen_rns_idx_12, degree), _pgen_modulus_10, degree);
        Hw_modadd(Coeffs(&(c->_c0_poly), _pgen_rns_idx_12, degree), Coeffs(&(c->_c0_poly), _pgen_rns_idx_12, degree), Coeffs(&tmp._c0_poly, _pgen_rns_idx_12, degree), _pgen_modulus_10, degree);
        Hw_modadd(Coeffs(&(c->_c1_poly), _pgen_rns_idx_12, degree), Coeffs(&(c->_c1_poly), _pgen_rns_idx_12, degree), Coeffs(&tmp._c1_poly, _pgen_rns_idx_12, degree), _pgen_modulus_10, degree);
        _pgen_modulus_10 = _pgen_modulus_10 + 1;
    }   
}

void CKKS_add(CIPHERTEXT *c, CIPHERTEXT *a, CIPHERTEXT *b, uint32_t degree)
{
  Init_ciph_same_scale(c, a, b);
  MODULUS* _pgen_modulus_10;
  uint32_t _pgen_num_q_11;
  uint32_t _pgen_rns_idx_12;

  _pgen_modulus_10 = Q_modulus();
  _pgen_num_q_11 = Poly_level(&(c->_c0_poly));

  for (_pgen_rns_idx_12 = 0; _pgen_rns_idx_12 < _pgen_num_q_11; _pgen_rns_idx_12 = _pgen_rns_idx_12 + 1) {
    Hw_modadd(Coeffs(&(c->_c0_poly), _pgen_rns_idx_12, degree), Coeffs(&(a->_c0_poly), _pgen_rns_idx_12, degree), Coeffs(&(b->_c0_poly), _pgen_rns_idx_12, degree), _pgen_modulus_10, degree);
    Hw_modadd(Coeffs(&(c->_c1_poly), _pgen_rns_idx_12, degree), Coeffs(&(a->_c1_poly), _pgen_rns_idx_12, degree), Coeffs(&(b->_c1_poly), _pgen_rns_idx_12, degree), _pgen_modulus_10, degree);
    _pgen_modulus_10 = _pgen_modulus_10 + 1;
  }
}

// helib paper: sqrt
int baby(int d){
    // sqrt
    if (d==4096)
        return 64;
    else if (d == 32768)
        return 128;
    return 1;
}


bool Main_graph() {
  CIPHERTEXT input_0;
  CIPHERTEXT input_dup_n0_1;
  int32_t bs_input_n0_2;
  CIPHERTEXT input_block_n0_3[64];
  CIPHERTEXT gemm_result_n1_4;
  int32_t gs_n1_5;
  CIPHERTEXT block_result_6;
  CIPHERTEXT block_result_6_rot;
  CIPHERTEXT block_result_6_dup;
  int32_t bs_n1_7;
  CIPHERTEXT output_8;
  CIPHERTEXT _ckks_gen_tmp_61_9;
  MODULUS* _pgen_modulus_10;
  uint32_t _pgen_num_q_11;
  uint32_t _pgen_rns_idx_12;
  PLAINTEXT _pgen_tmp_0_13;
  CIPHERTEXT _pgen_tmp_1_14;
  PLAINTEXT _pgen_tmp_2_15;
  CIPHERTEXT _pgen_tmp_3_16;
  PLAINTEXT _pgen_tmp_4_17;
  CIPHERTEXT _preg_268435456;
  CIPHERTEXT _preg_268435457;
  CIPHERTEXT _preg_268435458;
  uint32_t  degree = Degree();
  input_0 = Get_input_data("input", 0);
  memset(&input_dup_n0_1, 0, sizeof(input_dup_n0_1));
  memset(&input_block_n0_3, 0, sizeof(input_block_n0_3));
  memset(&gemm_result_n1_4, 0, sizeof(gemm_result_n1_4));
  memset(&block_result_6, 0, sizeof(block_result_6));
  memset(&block_result_6_rot, 0, sizeof(block_result_6_rot));
  memset(&block_result_6_dup, 0, sizeof(block_result_6_dup));
  memset(&output_8, 0, sizeof(output_8));
  memset(&_ckks_gen_tmp_61_9, 0, sizeof(_ckks_gen_tmp_61_9));
  memset(&_pgen_tmp_0_13, 0, sizeof(_pgen_tmp_0_13));
  memset(&_pgen_tmp_1_14, 0, sizeof(_pgen_tmp_1_14));
  memset(&_pgen_tmp_2_15, 0, sizeof(_pgen_tmp_2_15));
  memset(&_pgen_tmp_3_16, 0, sizeof(_pgen_tmp_3_16));
  memset(&_pgen_tmp_4_17, 0, sizeof(_pgen_tmp_4_17));
  memset(&_preg_268435456, 0, sizeof(_preg_268435456));
  memset(&_preg_268435457, 0, sizeof(_preg_268435457));
  memset(&_preg_268435458, 0, sizeof(_preg_268435458));
  

  // dup
  _preg_268435456 = Rotate(input_0, -4096);
  CKKS_add(&input_dup_n0_1, &input_0, &_preg_268435456, degree);

  int D = 4096;
  int n1 = baby(D);
  int n2 = D/n1;

  for (int i = 0; i < n1; i++) {
    _preg_268435457 = Rotate(input_dup_n0_1, _cst_3[i]);
    Copy_ciph(&input_block_n0_3[i], &_preg_268435457);
  }
  
  Zero_ciph(&gemm_result_n1_4);
  // bsgs: refer to 
  // HElib https://github.com/homenc/HElib/blob/master/src/matmul.cpp
  for (int j = 0; j < n2; j++) {
    Zero_ciph(&block_result_6);
    for (int i = 0; i < n1; i++) {
      _ckks_gen_tmp_61_9 = input_block_n0_3[i];
      Pt_from_msg_ofst(&_pgen_tmp_0_13, 0/* cst_2 */, ((i + (j * 64))) * (8192), 4096, 1, 3);
      CKKS_mul_add(&block_result_6, &_ckks_gen_tmp_61_9, &_pgen_tmp_0_13, degree);

    }
    block_result_6_rot = Rotate(block_result_6, -D);
    CKKS_add(&block_result_6_dup, &block_result_6, &block_result_6_rot, degree);
    _preg_268435458 = Rotate(block_result_6_dup, j * n1);
    CKKS_add(&gemm_result_n1_4, &gemm_result_n1_4, &_preg_268435458, degree);
  }

  Init_ciph_down_scale(&gemm_result_n1_4, &gemm_result_n1_4);
  Rescale(&gemm_result_n1_4._c0_poly, &gemm_result_n1_4._c0_poly);
  Rescale(&gemm_result_n1_4._c1_poly, &gemm_result_n1_4._c1_poly);
  
  // gemm add bias
  Pt_from_msg(&_pgen_tmp_2_15, 1 /* cst_1 */, 4096, 1, 2);
  Init_ciph_same_scale_plain(&gemm_result_n1_4, &gemm_result_n1_4, &_pgen_tmp_2_15);
  _pgen_modulus_10 = Q_modulus();
  _pgen_num_q_11 = Poly_level(&gemm_result_n1_4._c0_poly);
  for (_pgen_rns_idx_12 = 0; _pgen_rns_idx_12 < _pgen_num_q_11; _pgen_rns_idx_12 = _pgen_rns_idx_12 + 1) {
    Hw_modadd(Coeffs(&gemm_result_n1_4._c0_poly, _pgen_rns_idx_12, degree), Coeffs(&gemm_result_n1_4._c0_poly, _pgen_rns_idx_12, degree), Coeffs(&_pgen_tmp_2_15._poly, _pgen_rns_idx_12, degree), _pgen_modulus_10, degree);
    Set_coeffs(&gemm_result_n1_4._c1_poly, _pgen_rns_idx_12, degree, Coeffs(&gemm_result_n1_4._c1_poly, _pgen_rns_idx_12, degree));
    _pgen_modulus_10 = _pgen_modulus_10 + 1;
  }

  Pt_from_msg(&_pgen_tmp_4_17, 2 /* cst_4 */, 4096, 1, 2);
  Init_ciph_up_scale_plain(&_pgen_tmp_3_16, &gemm_result_n1_4, &_pgen_tmp_4_17);
  _pgen_modulus_10 = Q_modulus();
  _pgen_num_q_11 = Poly_level(&_pgen_tmp_3_16._c0_poly);
  for (_pgen_rns_idx_12 = 0; _pgen_rns_idx_12 < _pgen_num_q_11; _pgen_rns_idx_12 = _pgen_rns_idx_12 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_3_16._c0_poly, _pgen_rns_idx_12, degree), Coeffs(&gemm_result_n1_4._c0_poly, _pgen_rns_idx_12, degree), Coeffs(&_pgen_tmp_4_17._poly, _pgen_rns_idx_12, degree), _pgen_modulus_10, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_3_16._c1_poly, _pgen_rns_idx_12, degree), Coeffs(&gemm_result_n1_4._c1_poly, _pgen_rns_idx_12, degree), Coeffs(&_pgen_tmp_4_17._poly, _pgen_rns_idx_12, degree), _pgen_modulus_10, degree);
    _pgen_modulus_10 = _pgen_modulus_10 + 1;
  }
  Init_ciph_down_scale(&gemm_result_n1_4, &_pgen_tmp_3_16);
  Rescale(&gemm_result_n1_4._c0_poly, &_pgen_tmp_3_16._c0_poly);
  Rescale(&gemm_result_n1_4._c1_poly, &_pgen_tmp_3_16._c1_poly);
  Copy_ciph(&output_8, &gemm_result_n1_4);
  // pragma: 65537, 1029, 33
  Set_output_data("output", 0, &output_8);
  printf("BSGS-gemv_4096x4096: num_rot=%d\n", num_rot);
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
  num_rot++;
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
    LIB_ANT, 65536, 0, 2, 3, 60, 55, 2, 192, 128, 
    { -4096, 0, 1, 2, 3, 4, 5, 6,
      7, 8, 9, 10, 11, 12, 13, 14,
      15, 16, 17, 18, 19, 20, 21, 22,
      23, 24, 25, 26, 27, 28, 29, 30,
      31, 32, 33, 34, 35, 36, 37, 38,
      39, 40, 41, 42, 43, 44, 45, 46,
      47, 48, 49, 50, 51, 52, 53, 54,
      55, 56, 57, 58, 59, 60, 61, 62,
      63, 64, 128, 192, 256, 320, 384, 448,
      512, 576, 640, 704, 768, 832, 896, 960,
      1024, 1088, 1152, 1216, 1280, 1344, 1408, 1472,
      1536, 1600, 1664, 1728, 1792, 1856, 1920, 1984,
      2048, 2112, 2176, 2240, 2304, 2368, 2432, 2496,
      2560, 2624, 2688, 2752, 2816, 2880, 2944, 3008,
      3072, 3136, 3200, 3264, 3328, 3392, 3456, 3520,
      3584, 3648, 3712, 3776, 3840, 3904, 3968, 4032 }
  };
  return &parm;
}

RT_DATA_INFO* Get_rt_data_info() {
  static RT_DATA_INFO info = {
    "weight",
    "XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX",
    DE_MSG_F32
  };
  return &info;
}

int32_t _cst_3[64] = {
  0, 1, 2, 3, 4, 5, 6, 7,
  8, 9, 10, 11, 12, 13, 14, 15,
  16, 17, 18, 19, 20, 21, 22, 23,
  24, 25, 26, 27, 28, 29, 30, 31,
  32, 33, 34, 35, 36, 37, 38, 39,
  40, 41, 42, 43, 44, 45, 46, 47,
  48, 49, 50, 51, 52, 53, 54, 55,
  56, 57, 58, 59, 60, 61, 62, 63
};
