// external header files
#include "rt_phantom/rt_phantom.h"

typedef double float64_t;
typedef float float32_t;

extern float32_t _cst_0[16][16][3][3];
extern float32_t _cst_1[16];
extern int32_t _cst_2[1];
extern float32_t _cst_3[144][16384];
extern float32_t _cst_4[16384];
extern int32_t _cst_5[9];
extern float32_t _cst_6[16384];

bool Main_graph() {
  CIPHERTEXT input_0;
  CIPHERTEXT input_dup_n0_1;
  int32_t bs_input_n0_2;
  CIPHERTEXT input_block_n0_3[9];
  CIPHERTEXT result_n1_4;
  int32_t num_grid_n1_5;
  CIPHERTEXT result_grid_n1_6;
  int32_t cap_block_n1_7;
  CIPHERTEXT output_8;
  CIPHERTEXT _ckks_gen_tmp_58_9;
  CIPHERTEXT _preg_268435456;
  CIPHERTEXT _preg_268435457;
  CIPHERTEXT _preg_268435458;
  PLAINTEXT _preg_268435459;
  CIPHERTEXT _preg_268435460;
  CIPHERTEXT _preg_268435461;
  PLAINTEXT _preg_268435462;
  CIPHERTEXT _preg_268435463;
  PLAINTEXT _preg_268435464;
  input_0 = Get_input_data("input", 0);
  // /conv/Conv
  // pragma: 65536, 1027, 33
  Copy_ciph(&_preg_268435456, &input_0);
  Free_ciph(&input_0);
  // BlockingRot replicate=1
  Copy_ciph(&input_dup_n0_1, &_preg_268435456);
  Free_ciph(&_preg_268435456);
  // BlockingRot HRot=bs=9
  for (bs_input_n0_2 = 0; bs_input_n0_2 < 9; bs_input_n0_2 = bs_input_n0_2 + 1) {
    Rotate_ciph(&_preg_268435458, &input_dup_n0_1, _cst_5[bs_input_n0_2]);
    Copy_ciph(&input_block_n0_3[bs_input_n0_2], &_preg_268435458);
  }
  Free_ciph(&input_dup_n0_1);
  Free_ciph(&_preg_268435458);
  Zero_ciph(&result_n1_4);
  for (num_grid_n1_5 = 0; num_grid_n1_5 < 16; num_grid_n1_5 = num_grid_n1_5 + 1) {
    Zero_ciph(&result_grid_n1_6);
    for (cap_block_n1_7 = 0; cap_block_n1_7 < 9; cap_block_n1_7 = cap_block_n1_7 + 1) {
      _ckks_gen_tmp_58_9 = input_block_n0_3[cap_block_n1_7];
      _preg_268435459 = *(PLAIN)Pt_from_msg(&_preg_268435459, (cap_block_n1_7 + (num_grid_n1_5 * 9)) + 0 /* cst_3_0 */, 16384, 1, 3);
      Mul_plain(&_preg_268435460, &_ckks_gen_tmp_58_9, &_preg_268435459);
      Add_ciph(&result_grid_n1_6, &result_grid_n1_6, &_preg_268435460);
    }
    Rotate_ciph(&_preg_268435461, &result_grid_n1_6, (num_grid_n1_5 * 1024));
    Add_ciph(&result_n1_4, &result_n1_4, &_preg_268435461);
  }
  Free_ciph_array(input_block_n0_3, 9);
  Free_plain(&_preg_268435459);
  Free_ciph(&_preg_268435460);
  Free_ciph(&result_grid_n1_6);
  Free_ciph(&_preg_268435461);
  Rescale_ciph(&result_n1_4, &result_n1_4);
  _preg_268435462 = *(PLAIN)Pt_from_msg(&_preg_268435462, 144 /* cst_6 */, 16384, 1, 2);
  Mul_plain(&_preg_268435463, &result_n1_4, &_preg_268435462);
  Free_plain(&_preg_268435462);
  Rescale_ciph(&_preg_268435457, &_preg_268435463);
  Free_ciph(&_preg_268435463);
  _preg_268435464 = *(PLAIN)Pt_from_msg(&_preg_268435464, 145 /* cst_4 */, 16384, 1, 1);
  Add_plain(&result_n1_4, &_preg_268435457, &_preg_268435464);
  Free_plain(&_preg_268435464);
  Free_ciph(&_preg_268435457);
  Copy_ciph(&output_8, &result_n1_4);
  Free_ciph(&result_n1_4);
  // pragma: 65537, 1027, 33
  Set_output_data("output", 0, &output_8);
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

CKKS_PARAMS* Get_context_params() {
  static CKKS_PARAMS parm = {
    LIB_PHANTOM, 65536, 0, 2, 3, 60, 56, 2, 192, 24, 
    { -33, -32, -31, -1, 0, 1, 31, 32,
      33, 1024, 2048, 3072, 4096, 5120, 6144, 7168,
      8192, 9216, 10240, 11264, 12288, 13312, 14336, 15360 }
  };
  return &parm;
}

// In offline encoding scenery, data file type will be changed. Below impl need to be changed also? 
RT_DATA_INFO* Get_rt_data_info() {
  static RT_DATA_INFO info = {
    "/tmp/conv_16x16x32x3.bin",
    "XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX",
    DE_MSG_F32
  };
  return &info;
}

bool Need_bts() {
  return false;
}

int32_t _cst_5[9] = {
  -33, -32, -31, -1, 0, 1, 31, 32,
  33
};
