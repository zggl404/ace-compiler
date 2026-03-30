// external header files
#include "rt_cheddar/rt_cheddar.h"

typedef double float64_t;
typedef float float32_t;

extern float32_t _cst_0[6][3][5][5];
extern float32_t _cst_1[6];
extern float32_t _cst_2[16][6][5][5];
extern float32_t _cst_3[16];
extern float32_t _cst_4[120][400];
extern float32_t _cst_5[120];
extern float32_t _cst_6[84][120];
extern float32_t _cst_7[84];
extern float32_t _cst_8[10][84];
extern float32_t _cst_9[10];
extern int64_t _cst_10[2];
extern int64_t _cst_11[2];
extern int64_t _cst_12[2];
extern int64_t _cst_13[2];
extern int64_t _cst_14[2];
extern int64_t _cst_15[2];
extern int64_t _cst_16[2];
extern int64_t _cst_17[2];
extern int64_t _cst_18[2];
extern int64_t _cst_19[2];
extern int64_t _cst_20[2];
extern int64_t _cst_21[2];
extern int32_t _cst_22[1];
extern float32_t _cst_23[75][6144];
extern float32_t _cst_24[6144];
extern int32_t _cst_25[25];
extern float32_t _cst_26[6144];
extern float32_t _cst_27[6144];
extern float32_t _cst_28[28][6144];
extern float32_t _cst_29[6][6144];
extern float32_t _cst_30[4704];
extern float32_t _cst_31[14][4704];
extern float32_t _cst_32[14][4704];
extern float32_t _cst_33[6][4704];
extern int32_t _cst_34[1];
extern float32_t _cst_35[200][3136];
extern float32_t _cst_36[3136];
extern int32_t _cst_37[25];
extern float32_t _cst_38[3136];
extern float32_t _cst_39[3136];
extern float32_t _cst_40[10][3136];
extern float32_t _cst_41[16][3136];
extern float32_t _cst_42[1600];
extern float32_t _cst_43[15][1600];
extern float32_t _cst_44[16][1600];
extern int32_t _cst_45[1];
extern float32_t _cst_46[20][3000];
extern int32_t _cst_47[4];
extern float32_t _cst_48[120];
extern float32_t _cst_49[20][840];
extern int32_t _cst_50[4];
extern float32_t _cst_51[84];
extern float32_t _cst_52[10][100];
extern int32_t _cst_53[2];
extern float32_t _cst_54[10];
float32_t _cst_55 = -1;
float32_t _cst_56 = -1;
float64_t _cst_57 = -3.809199432496630510769;
float32_t _cst_58 = -3.809199432496630510769;
float64_t _cst_59 = 2.460940868770910228136;
float32_t _cst_60 = 2.460940868770910228136;
float64_t _cst_61 = -1.430304794543664215212;
float32_t _cst_62 = -1.430304794543664215212;
float64_t _cst_63 = 2.944661935353764636858;
float32_t _cst_64 = 2.944661935353764636858;
float32_t _cst_65 = -1;
float32_t _cst_66 = -1;
float32_t _cst_67 = -1;
float32_t _cst_68 = -1;
float64_t _cst_69 = -0.0001600280537250875771867;
float32_t _cst_70 = -0.0001600280537250875771867;
float64_t _cst_71 = 0.003032478474127557870749;
float32_t _cst_72 = 0.003032478474127557870749;
float64_t _cst_73 = 0.1365828361194337536855;
float32_t _cst_74 = 0.1365828361194337536855;
float64_t _cst_75 = -0.02219735858216702675816;
float64_t _cst_76 = 0.5685231134608953462717;
float32_t _cst_77 = 0.5685231134608953462717;
float64_t _cst_78 = -0.5558785316215136829143;
float64_t _cst_79 = 1.614771079042867985009;
float32_t _cst_80 = 1.614771079042867985009;
float64_t _cst_81 = -0.6164083583294512891371;
float32_t _cst_82 = -1;
float32_t _cst_83 = -1;
float32_t _cst_84 = -1;
float32_t _cst_85 = -1;
float64_t _cst_86 = 0.0001111119162030077897477;
float32_t _cst_87 = 0.0001111119162030077897477;
float64_t _cst_88 = 0.006507995190210730772351;
float32_t _cst_89 = 0.006507995190210730772351;
float64_t _cst_90 = -0.0009371069270347270278171;
float32_t _cst_91 = -0.0009371069270347270278171;
float64_t _cst_92 = 0.1056744718173614761003;
float32_t _cst_93 = 0.1056744718173614761003;
float64_t _cst_94 = -0.03691063940349948585551;
float32_t _cst_95 = -0.03691063940349948585551;
float64_t _cst_96 = 0.6334139843709288841822;
float32_t _cst_97 = 0.6334139843709288841822;
float64_t _cst_98 = -0.2078597158810965850329;
float32_t _cst_99 = -0.2078597158810965850329;
float32_t _cst_100 = 0.5;
CIPHERTEXT App_relu(CIPHERTEXT input_ct0, CIPHERTEXT input_ct1, uint32_t mask_len);

bool Main_graph() {
  CIPHERTEXT input_0;
  CIPHERTEXT input_dup_n0_1;
  int32_t bs_input_n0_2;
  CIPHERTEXT input_block_n0_3[25];
  CIPHERTEXT result_n1_4;
  int32_t num_grid_n1_5;
  CIPHERTEXT result_grid_n1_6;
  int32_t cap_block_n1_7;
  CIPHERTEXT orig_result1_8;
  CIPHERTEXT rolled_result2_9;
  CIPHERTEXT comb_rc_result2_10;
  int32_t comb_rc_index_n2_11;
  CIPHERTEXT ss_result2_12;
  int32_t comb_cc_index_n2_13;
  CIPHERTEXT tmp_row_add2_14;
  CIPHERTEXT orig_result2_15;
  CIPHERTEXT comb_row_result3_16;
  int32_t comb_row_index_n3_17;
  CIPHERTEXT comb_rc_result3_18;
  int32_t comb_rc_index_n3_19;
  CIPHERTEXT ss_result3_20;
  int32_t comb_cc_index_n3_21;
  CIPHERTEXT input_dup_n3_22;
  int32_t bs_input_n3_23;
  CIPHERTEXT input_block_n3_24[25];
  CIPHERTEXT result_n4_25;
  int32_t num_grid_n4_26;
  CIPHERTEXT result_grid_n4_27;
  int32_t cap_block_n4_28;
  CIPHERTEXT orig_result4_29;
  CIPHERTEXT rolled_result5_30;
  CIPHERTEXT comb_rc_result5_31;
  int32_t comb_rc_index_n5_32;
  CIPHERTEXT ss_result5_33;
  int32_t comb_cc_index_n5_34;
  CIPHERTEXT tmp_row_add5_35;
  CIPHERTEXT orig_result5_36;
  CIPHERTEXT comb_dic_result6_37;
  int32_t comb_dic_index_n6_38;
  int32_t comb_dic_index_out_n6_39;
  int32_t comb_dic_index_in_n6_40;
  CIPHERTEXT ss_result6_41;
  int32_t comb_cc_index_n6_42;
  CIPHERTEXT input_dup_n6_43;
  int32_t bs_input_n6_44;
  CIPHERTEXT input_block_n6_45[4];
  CIPHERTEXT gemm_result_n7_46;
  int32_t gs_n7_47;
  CIPHERTEXT block_result_48;
  int32_t bs_n7_49;
  CIPHERTEXT reduce_intra_50;
  int32_t ri_n7_51;
  CIPHERTEXT reduce_intra_52;
  int32_t ri_n7_53;
  CIPHERTEXT input_dup_n7_54;
  int32_t bs_input_n7_55;
  CIPHERTEXT input_block_n7_56[4];
  CIPHERTEXT gemm_result_n8_57;
  int32_t gs_n8_58;
  CIPHERTEXT block_result_59;
  int32_t bs_n8_60;
  CIPHERTEXT reduce_intra_61;
  int32_t ri_n8_62;
  CIPHERTEXT input_dup_n8_63;
  int32_t bs_input_n8_64;
  CIPHERTEXT input_block_n8_65[2];
  CIPHERTEXT gemm_result_n9_66;
  int32_t gs_n9_67;
  CIPHERTEXT block_result_68;
  int32_t bs_n9_69;
  CIPHERTEXT reduce_intra_70;
  int32_t ri_n9_71;
  CIPHERTEXT output_72;
  CIPHERTEXT _ckks_gen_tmp_62_73;
  CIPHERTEXT _ckks_gen_tmp_106_74;
  CIPHERTEXT _ckks_gen_tmp_154_75;
  CIPHERTEXT _ckks_gen_tmp_187_76;
  CIPHERTEXT _ckks_gen_tmp_232_77;
  CIPHERTEXT _ckks_gen_tmp_263_78;
  CIPHERTEXT _ckks_gen_tmp_296_79;
  CIPHERTEXT _ckks_gen_tmp_329_80;
  CIPHERTEXT _ckks_gen_tmp_405_81;
  CIPHERTEXT _ckks_gen_tmp_449_82;
  CIPHERTEXT _ckks_gen_tmp_497_83;
  CIPHERTEXT _ckks_gen_tmp_530_84;
  CIPHERTEXT _ckks_gen_tmp_575_85;
  CIPHERTEXT _ckks_gen_tmp_638_86;
  CIPHERTEXT _ckks_gen_tmp_675_87;
  CIPHERTEXT _ckks_gen_tmp_779_88;
  CIPHERTEXT _ckks_gen_tmp_966_89;
  CIPHERTEXT _ckks_gen_tmp_1111_90;
  CIPHERTEXT _preg_268435456;
  CIPHERTEXT _preg_268435457;
  CIPHERTEXT _preg_268435458;
  CIPHERTEXT _preg_268435459;
  CIPHERTEXT _preg_268435460;
  CIPHERTEXT _preg_268435461;
  CIPHERTEXT _preg_268435462;
  CIPHERTEXT _preg_268435463;
  CIPHERTEXT _preg_268435464;
  CIPHERTEXT _preg_268435465;
  CIPHERTEXT _preg_268435466;
  CIPHERTEXT _preg_268435467;
  CIPHERTEXT _preg_268435468;
  CIPHERTEXT _preg_268435469;
  CIPHERTEXT _preg_268435470;
  CIPHERTEXT _preg_268435471;
  CIPHERTEXT _preg_268435472;
  CIPHERTEXT _preg_268435473;
  CIPHERTEXT _preg_268435474;
  CIPHERTEXT _preg_268435475;
  CIPHERTEXT _preg_268435476;
  CIPHERTEXT _preg_268435477;
  CIPHERTEXT _preg_268435478;
  CIPHERTEXT _preg_268435479;
  CIPHERTEXT _preg_268435480;
  CIPHERTEXT _preg_268435481;
  CIPHERTEXT _preg_268435482;
  CIPHERTEXT _preg_268435483;
  CIPHERTEXT _preg_268435484;
  CIPHERTEXT _preg_268435485;
  CIPHERTEXT _preg_268435486;
  PLAINTEXT _preg_268435487;
  CIPHERTEXT _preg_268435488;
  CIPHERTEXT _preg_268435489;
  PLAINTEXT _preg_268435490;
  CIPHERTEXT _preg_268435491;
  PLAINTEXT _preg_268435492;
  CIPHERTEXT _preg_268435493;
  CIPHERTEXT _preg_268435494;
  PLAINTEXT _preg_268435495;
  PLAINTEXT _preg_268435496;
  CIPHERTEXT _preg_268435497;
  PLAINTEXT _preg_268435498;
  CIPHERTEXT _preg_268435499;
  CIPHERTEXT _preg_268435500;
  CIPHERTEXT _preg_268435501;
  PLAINTEXT _preg_268435502;
  CIPHERTEXT _preg_268435503;
  PLAINTEXT _preg_268435504;
  CIPHERTEXT _preg_268435505;
  PLAINTEXT _preg_268435506;
  CIPHERTEXT _preg_268435507;
  PLAINTEXT _preg_268435508;
  CIPHERTEXT _preg_268435509;
  CIPHERTEXT _preg_268435510;
  CIPHERTEXT _preg_268435511;
  PLAINTEXT _preg_268435512;
  CIPHERTEXT _preg_268435513;
  CIPHERTEXT _preg_268435514;
  PLAINTEXT _preg_268435515;
  CIPHERTEXT _preg_268435516;
  PLAINTEXT _preg_268435517;
  CIPHERTEXT _preg_268435518;
  CIPHERTEXT _preg_268435519;
  PLAINTEXT _preg_268435520;
  PLAINTEXT _preg_268435521;
  CIPHERTEXT _preg_268435522;
  PLAINTEXT _preg_268435523;
  CIPHERTEXT _preg_268435524;
  CIPHERTEXT _preg_268435525;
  CIPHERTEXT _preg_268435526;
  PLAINTEXT _preg_268435527;
  CIPHERTEXT _preg_268435528;
  CIPHERTEXT _preg_268435529;
  PLAINTEXT _preg_268435530;
  CIPHERTEXT _preg_268435531;
  PLAINTEXT _preg_268435532;
  CIPHERTEXT _preg_268435533;
  CIPHERTEXT _preg_268435534;
  CIPHERTEXT _preg_268435535;
  CIPHERTEXT _preg_268435536;
  CIPHERTEXT _preg_268435537;
  CIPHERTEXT _preg_268435538;
  CIPHERTEXT _preg_268435539;
  CIPHERTEXT _preg_268435540;
  CIPHERTEXT _preg_268435541;
  CIPHERTEXT _preg_268435542;
  CIPHERTEXT _preg_268435543;
  CIPHERTEXT _preg_268435544;
  CIPHERTEXT _preg_268435545;
  CIPHERTEXT _preg_268435546;
  CIPHERTEXT _preg_268435547;
  PLAINTEXT _preg_268435548;
  CIPHERTEXT _preg_268435549;
  CIPHERTEXT _preg_268435550;
  CIPHERTEXT _preg_268435551;
  CIPHERTEXT _preg_268435552;
  PLAINTEXT _preg_268435553;
  PLAINTEXT _preg_268435554;
  CIPHERTEXT _preg_268435555;
  CIPHERTEXT _preg_268435556;
  CIPHERTEXT _preg_268435557;
  CIPHERTEXT _preg_268435558;
  CIPHERTEXT _preg_268435559;
  CIPHERTEXT _preg_268435560;
  CIPHERTEXT _preg_268435561;
  CIPHERTEXT _preg_268435562;
  CIPHERTEXT _preg_268435563;
  CIPHERTEXT _preg_268435564;
  CIPHERTEXT _preg_268435565;
  CIPHERTEXT _preg_268435566;
  CIPHERTEXT _preg_268435567;
  PLAINTEXT _preg_268435568;
  CIPHERTEXT _preg_268435569;
  CIPHERTEXT _preg_268435570;
  CIPHERTEXT _preg_268435571;
  PLAINTEXT _preg_268435572;
  PLAINTEXT _preg_268435573;
  CIPHERTEXT _preg_268435574;
  CIPHERTEXT _preg_268435575;
  CIPHERTEXT _preg_268435576;
  PLAINTEXT _preg_268435577;
  CIPHERTEXT _preg_268435578;
  CIPHERTEXT _preg_268435579;
  CIPHERTEXT _preg_268435580;
  PLAINTEXT _preg_268435581;
  PLAINTEXT _preg_268435582;
  CIPHERTEXT _preg_268435583;
  input_0 = Get_input_data("input", 0);
  // /conv1/Conv
  // pragma: 65536, 1027, 33
  Copy_ciph(&_preg_268435456, &input_0);
  Free_ciph(&input_0);
  // BlockingRot replicate=2
  Rotate_ciph(&_preg_268435485, &_preg_268435456, -3072);
  Add_ciph(&input_dup_n0_1, &_preg_268435456, &_preg_268435485);
  Free_ciph(&_preg_268435485);
  Free_ciph(&_preg_268435456);
  // BlockingRot HRot=bs=25
  for (bs_input_n0_2 = 0; bs_input_n0_2 < 25; bs_input_n0_2 = bs_input_n0_2 + 1) {
    Rotate_ciph(&_preg_268435486, &input_dup_n0_1, _cst_25[bs_input_n0_2]);
    Copy_ciph(&input_block_n0_3[bs_input_n0_2], &_preg_268435486);
  }
  Free_ciph(&input_dup_n0_1);
  Free_ciph(&_preg_268435486);
  Zero_ciph(&result_n1_4);
  for (num_grid_n1_5 = 0; num_grid_n1_5 < 3; num_grid_n1_5 = num_grid_n1_5 + 1) {
    Zero_ciph(&result_grid_n1_6);
    for (cap_block_n1_7 = 0; cap_block_n1_7 < 25; cap_block_n1_7 = cap_block_n1_7 + 1) {
      _ckks_gen_tmp_62_73 = input_block_n0_3[cap_block_n1_7];
      _preg_268435487 = *(PLAIN)Pt_from_msg(&_preg_268435487, (cap_block_n1_7 + (num_grid_n1_5 * 25)) + 0 /* cst_23_0 */, 6144, 1, 24);
      Mul_plain(&_preg_268435488, &_ckks_gen_tmp_62_73, &_preg_268435487);
      Add_ciph(&result_grid_n1_6, &result_grid_n1_6, &_preg_268435488);
    }
    Rotate_ciph(&_preg_268435489, &result_grid_n1_6, (num_grid_n1_5 * 1024));
    Add_ciph(&result_n1_4, &result_n1_4, &_preg_268435489);
  }
  Free_ciph_array(input_block_n0_3, 25);
  Free_plain(&_preg_268435487);
  Free_ciph(&_preg_268435488);
  Free_ciph(&result_grid_n1_6);
  Free_ciph(&_preg_268435489);
  Rescale_ciph(&result_n1_4, &result_n1_4);
  _preg_268435490 = *(PLAIN)Pt_from_msg(&_preg_268435490, 75 /* cst_26 */, 6144, 1, 23);
  Mul_plain(&_preg_268435491, &result_n1_4, &_preg_268435490);
  Free_plain(&_preg_268435490);
  Rescale_ciph(&_preg_268435457, &_preg_268435491);
  Free_ciph(&_preg_268435491);
  Rotate_ciph(&_ckks_gen_tmp_106_74, &result_n1_4, -6144);
  _preg_268435492 = *(PLAIN)Pt_from_msg(&_preg_268435492, 76 /* cst_27 */, 6144, 1, 23);
  Mul_plain(&_preg_268435493, &_ckks_gen_tmp_106_74, &_preg_268435492);
  Free_plain(&_preg_268435492);
  Free_ciph(&_ckks_gen_tmp_106_74);
  Rescale_ciph(&_preg_268435494, &_preg_268435493);
  Free_ciph(&_preg_268435493);
  Add_ciph(&_preg_268435457, &_preg_268435457, &_preg_268435494);
  Free_ciph(&_preg_268435494);
  _preg_268435495 = *(PLAIN)Pt_from_msg(&_preg_268435495, 77 /* cst_24 */, 6144, 1, 22);
  Add_plain(&result_n1_4, &_preg_268435457, &_preg_268435495);
  Free_plain(&_preg_268435495);
  Free_ciph(&_preg_268435457);
  Copy_ciph(&_preg_268435458, &result_n1_4);
  Free_ciph(&result_n1_4);
  Copy_ciph(&orig_result1_8, &_preg_268435458);
  Free_ciph(&_preg_268435458);
  Rotate_ciph(&rolled_result2_9, &orig_result1_8, 66);
  Free_ciph(&orig_result1_8);
  Zero_ciph(&comb_rc_result2_10);
  for (comb_rc_index_n2_11 = 0; comb_rc_index_n2_11 < 28; comb_rc_index_n2_11 = comb_rc_index_n2_11 + 1) {
    Rotate_ciph(&_ckks_gen_tmp_154_75, &rolled_result2_9, (comb_rc_index_n2_11 * 4));
    _preg_268435496 = *(PLAIN)Pt_from_msg(&_preg_268435496, comb_rc_index_n2_11 + 78 /* cst_28_0 */, 6144, 1, 22);
    Mul_plain(&_preg_268435497, &_ckks_gen_tmp_154_75, &_preg_268435496);
    Add_ciph(&comb_rc_result2_10, &comb_rc_result2_10, &_preg_268435497);
  }
  Free_ciph(&rolled_result2_9);
  Free_plain(&_preg_268435496);
  Free_ciph(&_ckks_gen_tmp_154_75);
  Free_ciph(&_preg_268435497);
  Rescale_ciph(&comb_rc_result2_10, &comb_rc_result2_10);
  Zero_ciph(&ss_result2_12);
  for (comb_cc_index_n2_13 = 0; comb_cc_index_n2_13 < 6; comb_cc_index_n2_13 = comb_cc_index_n2_13 + 1) {
    Rotate_ciph(&_ckks_gen_tmp_187_76, &comb_rc_result2_10, (comb_cc_index_n2_13 * 240));
    _preg_268435498 = *(PLAIN)Pt_from_msg(&_preg_268435498, comb_cc_index_n2_13 + 106 /* cst_29_0 */, 6144, 1, 21);
    Mul_plain(&_preg_268435499, &_ckks_gen_tmp_187_76, &_preg_268435498);
    Add_ciph(&ss_result2_12, &ss_result2_12, &_preg_268435499);
  }
  Free_ciph(&comb_rc_result2_10);
  Free_plain(&_preg_268435498);
  Free_ciph(&_ckks_gen_tmp_187_76);
  Free_ciph(&_preg_268435499);
  Rescale_ciph(&ss_result2_12, &ss_result2_12);
  Copy_ciph(&_preg_268435459, &ss_result2_12);
  Free_ciph(&ss_result2_12);
  // pragma: 65537, 1027, 33
  // /Relu
  // pragma: 65536, 1033, 39
  Copy_ciph(&_preg_268435460, &_preg_268435459);
  Free_ciph(&_preg_268435459);
  _preg_268435461 = App_relu(_preg_268435460, _preg_268435460, 4704);
  Free_ciph(&_preg_268435460);
  Copy_ciph(&_preg_268435462, &_preg_268435461);
  Free_ciph(&_preg_268435461);
  // pragma: 65537, 1033, 39
  // /pool/MaxPool
  // pragma: 65536, 1031, 40
  Copy_ciph(&_preg_268435463, &_preg_268435462);
  Free_ciph(&_preg_268435462);
  Rotate_ciph(&_preg_268435500, &_preg_268435463, 28);
  Add_ciph(&tmp_row_add2_14, &_preg_268435463, &_preg_268435500);
  Free_ciph(&_preg_268435500);
  Free_ciph(&_preg_268435463);
  Rotate_ciph(&_preg_268435501, &tmp_row_add2_14, 1);
  Add_ciph(&_ckks_gen_tmp_232_77, &tmp_row_add2_14, &_preg_268435501);
  Free_ciph(&_preg_268435501);
  Free_ciph(&tmp_row_add2_14);
  _preg_268435502 = *(PLAIN)Pt_from_msg(&_preg_268435502, 112 /* cst_30 */, 4704, 1, 9);
  Mul_plain(&_preg_268435503, &_ckks_gen_tmp_232_77, &_preg_268435502);
  Free_plain(&_preg_268435502);
  Free_ciph(&_ckks_gen_tmp_232_77);
  Rescale_ciph(&_preg_268435464, &_preg_268435503);
  Free_ciph(&_preg_268435503);
  Copy_ciph(&orig_result2_15, &_preg_268435464);
  Free_ciph(&_preg_268435464);
  Zero_ciph(&comb_row_result3_16);
  for (comb_row_index_n3_17 = 0; comb_row_index_n3_17 < 14; comb_row_index_n3_17 = comb_row_index_n3_17 + 1) {
    Rotate_ciph(&_ckks_gen_tmp_263_78, &orig_result2_15, (comb_row_index_n3_17 * 1));
    _preg_268435504 = *(PLAIN)Pt_from_msg(&_preg_268435504, comb_row_index_n3_17 + 113 /* cst_31_0 */, 4704, 1, 8);
    Mul_plain(&_preg_268435505, &_ckks_gen_tmp_263_78, &_preg_268435504);
    Add_ciph(&comb_row_result3_16, &comb_row_result3_16, &_preg_268435505);
  }
  Free_ciph(&orig_result2_15);
  Free_plain(&_preg_268435504);
  Free_ciph(&_ckks_gen_tmp_263_78);
  Free_ciph(&_preg_268435505);
  Rescale_ciph(&comb_row_result3_16, &comb_row_result3_16);
  Zero_ciph(&comb_rc_result3_18);
  for (comb_rc_index_n3_19 = 0; comb_rc_index_n3_19 < 14; comb_rc_index_n3_19 = comb_rc_index_n3_19 + 1) {
    Rotate_ciph(&_ckks_gen_tmp_296_79, &comb_row_result3_16, (comb_rc_index_n3_19 * 42));
    _preg_268435506 = *(PLAIN)Pt_from_msg(&_preg_268435506, comb_rc_index_n3_19 + 127 /* cst_32_0 */, 4704, 1, 7);
    Mul_plain(&_preg_268435507, &_ckks_gen_tmp_296_79, &_preg_268435506);
    Add_ciph(&comb_rc_result3_18, &comb_rc_result3_18, &_preg_268435507);
  }
  Free_ciph(&comb_row_result3_16);
  Free_plain(&_preg_268435506);
  Free_ciph(&_ckks_gen_tmp_296_79);
  Free_ciph(&_preg_268435507);
  Rescale_ciph(&comb_rc_result3_18, &comb_rc_result3_18);
  Zero_ciph(&ss_result3_20);
  for (comb_cc_index_n3_21 = 0; comb_cc_index_n3_21 < 6; comb_cc_index_n3_21 = comb_cc_index_n3_21 + 1) {
    Rotate_ciph(&_ckks_gen_tmp_329_80, &comb_rc_result3_18, (comb_cc_index_n3_21 * 588));
    _preg_268435508 = *(PLAIN)Pt_from_msg(&_preg_268435508, comb_cc_index_n3_21 + 141 /* cst_33_0 */, 4704, 1, 6);
    Mul_plain(&_preg_268435509, &_ckks_gen_tmp_329_80, &_preg_268435508);
    Add_ciph(&ss_result3_20, &ss_result3_20, &_preg_268435509);
  }
  Free_ciph(&comb_rc_result3_18);
  Free_plain(&_preg_268435508);
  Free_ciph(&_ckks_gen_tmp_329_80);
  Free_ciph(&_preg_268435509);
  Rescale_ciph(&ss_result3_20, &ss_result3_20);
  Copy_ciph(&_preg_268435465, &ss_result3_20);
  Free_ciph(&ss_result3_20);
  // pragma: 65537, 1031, 40
  // /conv2/Conv
  // pragma: 65536, 1027, 42
  Copy_ciph(&_preg_268435466, &_preg_268435465);
  Free_ciph(&_preg_268435465);
  // BlockingRot replicate=2
  Rotate_ciph(&_preg_268435510, &_preg_268435466, -1568);
  Add_ciph(&input_dup_n3_22, &_preg_268435466, &_preg_268435510);
  Free_ciph(&_preg_268435510);
  Free_ciph(&_preg_268435466);
  // BlockingRot HRot=bs=25
  for (bs_input_n3_23 = 0; bs_input_n3_23 < 25; bs_input_n3_23 = bs_input_n3_23 + 1) {
    Rotate_ciph(&_preg_268435511, &input_dup_n3_22, _cst_37[bs_input_n3_23]);
    Copy_ciph(&input_block_n3_24[bs_input_n3_23], &_preg_268435511);
  }
  Free_ciph(&input_dup_n3_22);
  Free_ciph(&_preg_268435511);
  Zero_ciph(&result_n4_25);
  for (num_grid_n4_26 = 0; num_grid_n4_26 < 8; num_grid_n4_26 = num_grid_n4_26 + 1) {
    Zero_ciph(&result_grid_n4_27);
    for (cap_block_n4_28 = 0; cap_block_n4_28 < 25; cap_block_n4_28 = cap_block_n4_28 + 1) {
      _ckks_gen_tmp_405_81 = input_block_n3_24[cap_block_n4_28];
      _preg_268435512 = *(PLAIN)Pt_from_msg(&_preg_268435512, (cap_block_n4_28 + (num_grid_n4_26 * 25)) + 147 /* cst_35_0 */, 3136, 1, 5);
      Mul_plain(&_preg_268435513, &_ckks_gen_tmp_405_81, &_preg_268435512);
      Add_ciph(&result_grid_n4_27, &result_grid_n4_27, &_preg_268435513);
    }
    Rotate_ciph(&_preg_268435514, &result_grid_n4_27, (num_grid_n4_26 * 196));
    Add_ciph(&result_n4_25, &result_n4_25, &_preg_268435514);
  }
  Free_ciph_array(input_block_n3_24, 25);
  Free_plain(&_preg_268435512);
  Free_ciph(&_preg_268435513);
  Free_ciph(&result_grid_n4_27);
  Free_ciph(&_preg_268435514);
  Rescale_ciph(&result_n4_25, &result_n4_25);
  _preg_268435515 = *(PLAIN)Pt_from_msg(&_preg_268435515, 347 /* cst_38 */, 3136, 1, 4);
  Mul_plain(&_preg_268435516, &result_n4_25, &_preg_268435515);
  Free_plain(&_preg_268435515);
  Rescale_ciph(&_preg_268435467, &_preg_268435516);
  Free_ciph(&_preg_268435516);
  Rotate_ciph(&_ckks_gen_tmp_449_82, &result_n4_25, -3136);
  _preg_268435517 = *(PLAIN)Pt_from_msg(&_preg_268435517, 348 /* cst_39 */, 3136, 1, 4);
  Mul_plain(&_preg_268435518, &_ckks_gen_tmp_449_82, &_preg_268435517);
  Free_plain(&_preg_268435517);
  Free_ciph(&_ckks_gen_tmp_449_82);
  Rescale_ciph(&_preg_268435519, &_preg_268435518);
  Free_ciph(&_preg_268435518);
  Add_ciph(&_preg_268435467, &_preg_268435467, &_preg_268435519);
  Free_ciph(&_preg_268435519);
  _preg_268435520 = *(PLAIN)Pt_from_msg(&_preg_268435520, 349 /* cst_36 */, 3136, 1, 3);
  Add_plain(&result_n4_25, &_preg_268435467, &_preg_268435520);
  Free_plain(&_preg_268435520);
  Free_ciph(&_preg_268435467);
  Copy_ciph(&_preg_268435468, &result_n4_25);
  Free_ciph(&result_n4_25);
  Copy_ciph(&orig_result4_29, &_preg_268435468);
  Free_ciph(&_preg_268435468);
  Rotate_ciph(&rolled_result5_30, &orig_result4_29, 30);
  Free_ciph(&orig_result4_29);
  Zero_ciph(&comb_rc_result5_31);
  for (comb_rc_index_n5_32 = 0; comb_rc_index_n5_32 < 10; comb_rc_index_n5_32 = comb_rc_index_n5_32 + 1) {
    Rotate_ciph(&_ckks_gen_tmp_497_83, &rolled_result5_30, (comb_rc_index_n5_32 * 4));
    _preg_268435521 = *(PLAIN)Pt_from_msg(&_preg_268435521, comb_rc_index_n5_32 + 350 /* cst_40_0 */, 3136, 1, 3);
    Mul_plain(&_preg_268435522, &_ckks_gen_tmp_497_83, &_preg_268435521);
    Add_ciph(&comb_rc_result5_31, &comb_rc_result5_31, &_preg_268435522);
  }
  Free_ciph(&rolled_result5_30);
  Free_plain(&_preg_268435521);
  Free_ciph(&_ckks_gen_tmp_497_83);
  Free_ciph(&_preg_268435522);
  Rescale_ciph(&comb_rc_result5_31, &comb_rc_result5_31);
  Zero_ciph(&ss_result5_33);
  for (comb_cc_index_n5_34 = 0; comb_cc_index_n5_34 < 16; comb_cc_index_n5_34 = comb_cc_index_n5_34 + 1) {
    Rotate_ciph(&_ckks_gen_tmp_530_84, &comb_rc_result5_31, (comb_cc_index_n5_34 * 96));
    _preg_268435523 = *(PLAIN)Pt_from_msg(&_preg_268435523, comb_cc_index_n5_34 + 360 /* cst_41_0 */, 3136, 1, 2);
    Mul_plain(&_preg_268435524, &_ckks_gen_tmp_530_84, &_preg_268435523);
    Add_ciph(&ss_result5_33, &ss_result5_33, &_preg_268435524);
  }
  Free_ciph(&comb_rc_result5_31);
  Free_plain(&_preg_268435523);
  Free_ciph(&_ckks_gen_tmp_530_84);
  Free_ciph(&_preg_268435524);
  Rescale_ciph(&ss_result5_33, &ss_result5_33);
  Copy_ciph(&_preg_268435469, &ss_result5_33);
  Free_ciph(&ss_result5_33);
  // pragma: 65537, 1027, 42
  // /Relu_1
  // pragma: 65536, 1033, 43
  Bootstrap(&_preg_268435470, &_preg_268435469, 17, 16384);
  Free_ciph(&_preg_268435469);
  _preg_268435471 = App_relu(_preg_268435470, _preg_268435470, 1600);
  Free_ciph(&_preg_268435470);
  Copy_ciph(&_preg_268435472, &_preg_268435471);
  Free_ciph(&_preg_268435471);
  // pragma: 65537, 1033, 43
  // /pool_1/MaxPool
  // pragma: 65536, 1031, 44
  Copy_ciph(&_preg_268435473, &_preg_268435472);
  Free_ciph(&_preg_268435472);
  Rotate_ciph(&_preg_268435525, &_preg_268435473, 10);
  Add_ciph(&tmp_row_add5_35, &_preg_268435473, &_preg_268435525);
  Free_ciph(&_preg_268435525);
  Free_ciph(&_preg_268435473);
  Rotate_ciph(&_preg_268435526, &tmp_row_add5_35, 1);
  Add_ciph(&_ckks_gen_tmp_575_85, &tmp_row_add5_35, &_preg_268435526);
  Free_ciph(&_preg_268435526);
  Free_ciph(&tmp_row_add5_35);
  _preg_268435527 = *(PLAIN)Pt_from_msg(&_preg_268435527, 376 /* cst_42 */, 1600, 1, 6);
  Mul_plain(&_preg_268435528, &_ckks_gen_tmp_575_85, &_preg_268435527);
  Free_plain(&_preg_268435527);
  Free_ciph(&_ckks_gen_tmp_575_85);
  Rescale_ciph(&_preg_268435474, &_preg_268435528);
  Free_ciph(&_preg_268435528);
  Copy_ciph(&orig_result5_36, &_preg_268435474);
  Free_ciph(&_preg_268435474);
  Zero_ciph(&comb_dic_result6_37);
  for (comb_dic_index_n6_38 = 0; comb_dic_index_n6_38 < 1; comb_dic_index_n6_38 = comb_dic_index_n6_38 + 1) {
    Rotate_ciph(&_preg_268435529, &orig_result5_36, (1 << comb_dic_index_n6_38));
    Add_ciph(&orig_result5_36, &orig_result5_36, &_preg_268435529);
  }
  Free_ciph(&_preg_268435529);
  for (comb_dic_index_out_n6_39 = 0; comb_dic_index_out_n6_39 < 5; comb_dic_index_out_n6_39 = comb_dic_index_out_n6_39 + 1) {
    for (comb_dic_index_in_n6_40 = 0; comb_dic_index_in_n6_40 < 3; comb_dic_index_in_n6_40 = comb_dic_index_in_n6_40 + 1) {
      Rotate_ciph(&_ckks_gen_tmp_638_86, &orig_result5_36, ((comb_dic_index_out_n6_39 * 15) + (comb_dic_index_in_n6_40 * 2)));
      _preg_268435530 = *(PLAIN)Pt_from_msg(&_preg_268435530, ((comb_dic_index_out_n6_39 * 3) + comb_dic_index_in_n6_40) + 377 /* cst_43_0 */, 1600, 1, 5);
      Mul_plain(&_preg_268435531, &_ckks_gen_tmp_638_86, &_preg_268435530);
      Add_ciph(&comb_dic_result6_37, &comb_dic_result6_37, &_preg_268435531);
    }
  }
  Free_ciph(&orig_result5_36);
  Free_plain(&_preg_268435530);
  Free_ciph(&_ckks_gen_tmp_638_86);
  Free_ciph(&_preg_268435531);
  Rescale_ciph(&comb_dic_result6_37, &comb_dic_result6_37);
  Zero_ciph(&ss_result6_41);
  for (comb_cc_index_n6_42 = 0; comb_cc_index_n6_42 < 16; comb_cc_index_n6_42 = comb_cc_index_n6_42 + 1) {
    Rotate_ciph(&_ckks_gen_tmp_675_87, &comb_dic_result6_37, (comb_cc_index_n6_42 * 75));
    _preg_268435532 = *(PLAIN)Pt_from_msg(&_preg_268435532, comb_cc_index_n6_42 + 392 /* cst_44_0 */, 1600, 1, 4);
    Mul_plain(&_preg_268435533, &_ckks_gen_tmp_675_87, &_preg_268435532);
    Add_ciph(&ss_result6_41, &ss_result6_41, &_preg_268435533);
  }
  Free_ciph(&comb_dic_result6_37);
  Free_plain(&_preg_268435532);
  Free_ciph(&_ckks_gen_tmp_675_87);
  Free_ciph(&_preg_268435533);
  Rescale_ciph(&ss_result6_41, &ss_result6_41);
  Copy_ciph(&_preg_268435475, &ss_result6_41);
  Free_ciph(&ss_result6_41);
  // pragma: 65537, 1031, 44
  // /Flatten
  // pragma: 65536, 1028, 45
  Copy_ciph(&_preg_268435476, &_preg_268435475);
  Free_ciph(&_preg_268435475);
  // pragma: 65537, 1028, 45
  // /fc1/Gemm
  // pragma: 65536, 1029, 47
  // BlockingRot replicate=8
  Rotate_ciph(&_preg_268435534, &_preg_268435476, -480);
  Add_ciph(&_preg_268435535, &_preg_268435476, &_preg_268435534);
  Free_ciph(&_preg_268435534);
  Rotate_ciph(&_preg_268435536, &_preg_268435476, -960);
  Add_ciph(&_preg_268435537, &_preg_268435535, &_preg_268435536);
  Free_ciph(&_preg_268435536);
  Free_ciph(&_preg_268435535);
  Rotate_ciph(&_preg_268435538, &_preg_268435476, -1440);
  Add_ciph(&_preg_268435539, &_preg_268435537, &_preg_268435538);
  Free_ciph(&_preg_268435538);
  Free_ciph(&_preg_268435537);
  Rotate_ciph(&_preg_268435540, &_preg_268435476, -1920);
  Add_ciph(&_preg_268435541, &_preg_268435539, &_preg_268435540);
  Free_ciph(&_preg_268435540);
  Free_ciph(&_preg_268435539);
  Rotate_ciph(&_preg_268435542, &_preg_268435476, -2400);
  Add_ciph(&_preg_268435543, &_preg_268435541, &_preg_268435542);
  Free_ciph(&_preg_268435542);
  Free_ciph(&_preg_268435541);
  Rotate_ciph(&_preg_268435544, &_preg_268435476, -2880);
  Add_ciph(&_preg_268435545, &_preg_268435543, &_preg_268435544);
  Free_ciph(&_preg_268435544);
  Free_ciph(&_preg_268435543);
  Rotate_ciph(&_preg_268435546, &_preg_268435476, -3360);
  Free_ciph(&_preg_268435476);
  Add_ciph(&input_dup_n6_43, &_preg_268435545, &_preg_268435546);
  Free_ciph(&_preg_268435546);
  Free_ciph(&_preg_268435545);
  // BlockingRot HRot=bs=4
  for (bs_input_n6_44 = 0; bs_input_n6_44 < 4; bs_input_n6_44 = bs_input_n6_44 + 1) {
    Rotate_ciph(&_preg_268435547, &input_dup_n6_43, _cst_47[bs_input_n6_44]);
    Copy_ciph(&input_block_n6_45[bs_input_n6_44], &_preg_268435547);
  }
  Free_ciph(&input_dup_n6_43);
  Free_ciph(&_preg_268435547);
  Zero_ciph(&gemm_result_n7_46);
  // IMRA Metakernel: gs=5
  for (gs_n7_47 = 0; gs_n7_47 < 5; gs_n7_47 = gs_n7_47 + 1) {
    Zero_ciph(&block_result_48);
    for (bs_n7_49 = 0; bs_n7_49 < 4; bs_n7_49 = bs_n7_49 + 1) {
      _ckks_gen_tmp_779_88 = input_block_n6_45[bs_n7_49];
      _preg_268435548 = *(PLAIN)Pt_from_msg(&_preg_268435548, (bs_n7_49 + (gs_n7_47 * 4)) + 408 /* cst_46_0 */, 3000, 1, 3);
      Mul_plain(&_preg_268435549, &_ckks_gen_tmp_779_88, &_preg_268435548);
      Add_ciph(&block_result_48, &block_result_48, &_preg_268435549);
    }
    Rotate_ciph(&_preg_268435550, &block_result_48, (gs_n7_47 * 4));
    Add_ciph(&gemm_result_n7_46, &gemm_result_n7_46, &_preg_268435550);
  }
  Free_ciph_array(input_block_n6_45, 4);
  Free_plain(&_preg_268435548);
  Free_ciph(&_preg_268435549);
  Free_ciph(&block_result_48);
  Free_ciph(&_preg_268435550);
  Rescale_ciph(&gemm_result_n7_46, &gemm_result_n7_46);
  // gemm result reduce->Ps=6
  Copy_ciph(&reduce_intra_50, &gemm_result_n7_46);
  for (ri_n7_51 = 1; ri_n7_51 < 6; ri_n7_51 = ri_n7_51 + 1) {
    Rotate_ciph(&_preg_268435551, &gemm_result_n7_46, (ri_n7_51 * 500));
    Add_ciph(&reduce_intra_50, &reduce_intra_50, &_preg_268435551);
  }
  Free_ciph(&gemm_result_n7_46);
  Free_ciph(&_preg_268435551);
  // gemm result reduce->(kp/np)=4
  Copy_ciph(&reduce_intra_52, &reduce_intra_50);
  Free_ciph(&reduce_intra_50);
  for (ri_n7_53 = 0; ri_n7_53 < 2; ri_n7_53 = ri_n7_53 + 1) {
    Rotate_ciph(&_preg_268435552, &reduce_intra_52, ((1 << ri_n7_53) * 120));
    Add_ciph(&reduce_intra_52, &reduce_intra_52, &_preg_268435552);
  }
  Free_ciph(&_preg_268435552);
  // gemm add bias
  _preg_268435553 = *(PLAIN)Pt_from_msg(&_preg_268435553, 428 /* cst_5 */, 120, 1, 2);
  Add_plain(&reduce_intra_52, &reduce_intra_52, &_preg_268435553);
  Free_plain(&_preg_268435553);
  _preg_268435554 = *(PLAIN)Pt_from_msg(&_preg_268435554, 429 /* cst_48 */, 120, 1, 2);
  Mul_plain(&_preg_268435555, &reduce_intra_52, &_preg_268435554);
  Free_plain(&_preg_268435554);
  Rescale_ciph(&reduce_intra_52, &_preg_268435555);
  Free_ciph(&_preg_268435555);
  Copy_ciph(&_preg_268435477, &reduce_intra_52);
  Free_ciph(&reduce_intra_52);
  // pragma: 65537, 1029, 47
  // /Relu_2
  // pragma: 65536, 1033, 52
  Bootstrap(&_preg_268435478, &_preg_268435477, 14, 16384);
  Free_ciph(&_preg_268435477);
  _preg_268435479 = App_relu(_preg_268435478, _preg_268435478, 120);
  Free_ciph(&_preg_268435478);
  Copy_ciph(&_preg_268435480, &_preg_268435479);
  Free_ciph(&_preg_268435479);
  // pragma: 65537, 1033, 52
  // /fc2/Gemm
  // pragma: 65536, 1029, 53
  // BlockingRot replicate=7
  Rotate_ciph(&_preg_268435556, &_preg_268435480, -120);
  Add_ciph(&_preg_268435557, &_preg_268435480, &_preg_268435556);
  Free_ciph(&_preg_268435556);
  Rotate_ciph(&_preg_268435558, &_preg_268435480, -240);
  Add_ciph(&_preg_268435559, &_preg_268435557, &_preg_268435558);
  Free_ciph(&_preg_268435558);
  Free_ciph(&_preg_268435557);
  Rotate_ciph(&_preg_268435560, &_preg_268435480, -360);
  Add_ciph(&_preg_268435561, &_preg_268435559, &_preg_268435560);
  Free_ciph(&_preg_268435560);
  Free_ciph(&_preg_268435559);
  Rotate_ciph(&_preg_268435562, &_preg_268435480, -480);
  Add_ciph(&_preg_268435563, &_preg_268435561, &_preg_268435562);
  Free_ciph(&_preg_268435562);
  Free_ciph(&_preg_268435561);
  Rotate_ciph(&_preg_268435564, &_preg_268435480, -600);
  Add_ciph(&_preg_268435565, &_preg_268435563, &_preg_268435564);
  Free_ciph(&_preg_268435564);
  Free_ciph(&_preg_268435563);
  Rotate_ciph(&_preg_268435566, &_preg_268435480, -720);
  Free_ciph(&_preg_268435480);
  Add_ciph(&input_dup_n7_54, &_preg_268435565, &_preg_268435566);
  Free_ciph(&_preg_268435566);
  Free_ciph(&_preg_268435565);
  // BlockingRot HRot=bs=4
  for (bs_input_n7_55 = 0; bs_input_n7_55 < 4; bs_input_n7_55 = bs_input_n7_55 + 1) {
    Rotate_ciph(&_preg_268435567, &input_dup_n7_54, _cst_50[bs_input_n7_55]);
    Copy_ciph(&input_block_n7_56[bs_input_n7_55], &_preg_268435567);
  }
  Free_ciph(&input_dup_n7_54);
  Free_ciph(&_preg_268435567);
  Zero_ciph(&gemm_result_n8_57);
  // IMRA Metakernel: gs=5
  for (gs_n8_58 = 0; gs_n8_58 < 5; gs_n8_58 = gs_n8_58 + 1) {
    Zero_ciph(&block_result_59);
    for (bs_n8_60 = 0; bs_n8_60 < 4; bs_n8_60 = bs_n8_60 + 1) {
      _ckks_gen_tmp_966_89 = input_block_n7_56[bs_n8_60];
      _preg_268435568 = *(PLAIN)Pt_from_msg(&_preg_268435568, (bs_n8_60 + (gs_n8_58 * 4)) + 430 /* cst_49_0 */, 840, 1, 3);
      Mul_plain(&_preg_268435569, &_ckks_gen_tmp_966_89, &_preg_268435568);
      Add_ciph(&block_result_59, &block_result_59, &_preg_268435569);
    }
    Rotate_ciph(&_preg_268435570, &block_result_59, (gs_n8_58 * 4));
    Add_ciph(&gemm_result_n8_57, &gemm_result_n8_57, &_preg_268435570);
  }
  Free_ciph_array(input_block_n7_56, 4);
  Free_plain(&_preg_268435568);
  Free_ciph(&_preg_268435569);
  Free_ciph(&block_result_59);
  Free_ciph(&_preg_268435570);
  Rescale_ciph(&gemm_result_n8_57, &gemm_result_n8_57);
  // gemm result reduce->Ps=6
  Copy_ciph(&reduce_intra_61, &gemm_result_n8_57);
  for (ri_n8_62 = 1; ri_n8_62 < 6; ri_n8_62 = ri_n8_62 + 1) {
    Rotate_ciph(&_preg_268435571, &gemm_result_n8_57, (ri_n8_62 * 140));
    Add_ciph(&reduce_intra_61, &reduce_intra_61, &_preg_268435571);
  }
  Free_ciph(&gemm_result_n8_57);
  Free_ciph(&_preg_268435571);
  // gemm result reduce->(kp/np)=1
  // gemm add bias
  _preg_268435572 = *(PLAIN)Pt_from_msg(&_preg_268435572, 450 /* cst_7 */, 84, 1, 2);
  Add_plain(&reduce_intra_61, &reduce_intra_61, &_preg_268435572);
  Free_plain(&_preg_268435572);
  _preg_268435573 = *(PLAIN)Pt_from_msg(&_preg_268435573, 451 /* cst_51 */, 84, 1, 2);
  Mul_plain(&_preg_268435574, &reduce_intra_61, &_preg_268435573);
  Free_plain(&_preg_268435573);
  Rescale_ciph(&reduce_intra_61, &_preg_268435574);
  Free_ciph(&_preg_268435574);
  Copy_ciph(&_preg_268435481, &reduce_intra_61);
  Free_ciph(&reduce_intra_61);
  // pragma: 65537, 1029, 53
  // /Relu_3
  // pragma: 65536, 1033, 54
  Bootstrap(&_preg_268435482, &_preg_268435481, 14, 16384);
  Free_ciph(&_preg_268435481);
  _preg_268435483 = App_relu(_preg_268435482, _preg_268435482, 84);
  Free_ciph(&_preg_268435482);
  Copy_ciph(&_preg_268435484, &_preg_268435483);
  Free_ciph(&_preg_268435483);
  // pragma: 65537, 1033, 54
  // /fc3/Gemm
  // pragma: 65536, 1029, 55
  // BlockingRot replicate=2
  Rotate_ciph(&_preg_268435575, &_preg_268435484, -90);
  Add_ciph(&input_dup_n8_63, &_preg_268435484, &_preg_268435575);
  Free_ciph(&_preg_268435575);
  Free_ciph(&_preg_268435484);
  // BlockingRot HRot=bs=2
  for (bs_input_n8_64 = 0; bs_input_n8_64 < 2; bs_input_n8_64 = bs_input_n8_64 + 1) {
    Rotate_ciph(&_preg_268435576, &input_dup_n8_63, _cst_53[bs_input_n8_64]);
    Copy_ciph(&input_block_n8_65[bs_input_n8_64], &_preg_268435576);
  }
  Free_ciph(&input_dup_n8_63);
  Free_ciph(&_preg_268435576);
  Zero_ciph(&gemm_result_n9_66);
  // IMRA Metakernel: gs=5
  for (gs_n9_67 = 0; gs_n9_67 < 5; gs_n9_67 = gs_n9_67 + 1) {
    Zero_ciph(&block_result_68);
    for (bs_n9_69 = 0; bs_n9_69 < 2; bs_n9_69 = bs_n9_69 + 1) {
      _ckks_gen_tmp_1111_90 = input_block_n8_65[bs_n9_69];
      _preg_268435577 = *(PLAIN)Pt_from_msg(&_preg_268435577, (bs_n9_69 + (gs_n9_67 * 2)) + 452 /* cst_52_0 */, 100, 1, 3);
      Mul_plain(&_preg_268435578, &_ckks_gen_tmp_1111_90, &_preg_268435577);
      Add_ciph(&block_result_68, &block_result_68, &_preg_268435578);
    }
    Rotate_ciph(&_preg_268435579, &block_result_68, (gs_n9_67 * 2));
    Add_ciph(&gemm_result_n9_66, &gemm_result_n9_66, &_preg_268435579);
  }
  Free_ciph_array(input_block_n8_65, 2);
  Free_plain(&_preg_268435577);
  Free_ciph(&_preg_268435578);
  Free_ciph(&block_result_68);
  Free_ciph(&_preg_268435579);
  Rescale_ciph(&gemm_result_n9_66, &gemm_result_n9_66);
  // gemm result reduce->Ps=1
  // gemm result reduce->(kp/np)=9
  Copy_ciph(&reduce_intra_70, &gemm_result_n9_66);
  for (ri_n9_71 = 1; ri_n9_71 < 9; ri_n9_71 = ri_n9_71 + 1) {
    Rotate_ciph(&_preg_268435580, &gemm_result_n9_66, (ri_n9_71 * 10));
    Add_ciph(&reduce_intra_70, &reduce_intra_70, &_preg_268435580);
  }
  Free_ciph(&gemm_result_n9_66);
  Free_ciph(&_preg_268435580);
  // gemm add bias
  _preg_268435581 = *(PLAIN)Pt_from_msg(&_preg_268435581, 462 /* cst_9 */, 10, 1, 2);
  Add_plain(&reduce_intra_70, &reduce_intra_70, &_preg_268435581);
  Free_plain(&_preg_268435581);
  _preg_268435582 = *(PLAIN)Pt_from_msg(&_preg_268435582, 463 /* cst_54 */, 10, 1, 2);
  Mul_plain(&_preg_268435583, &reduce_intra_70, &_preg_268435582);
  Free_plain(&_preg_268435582);
  Rescale_ciph(&reduce_intra_70, &_preg_268435583);
  Free_ciph(&_preg_268435583);
  Copy_ciph(&output_72, &reduce_intra_70);
  Free_ciph(&reduce_intra_70);
  // pragma: 65537, 1029, 55
  Set_output_data("output", 0, &output_72);
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

CIPHERTEXT App_relu(CIPHERTEXT input_ct0_0, CIPHERTEXT input_ct1_1, uint32_t mask_len_2) {
  CIPHERTEXT _relu_tmp8_3;
  CIPHERTEXT _relu_tmp14_4;
  CIPHERTEXT _relu_tmp18_5;
  CIPHERTEXT _relu_tmp24_6;
  CIPHERTEXT _relu_tmp58_7;
  CIPHERTEXT _relu_tmp62_8;
  CIPHERTEXT _relu_tmp68_9;
  CIPHERTEXT _relu_tmp72_10;
  CIPHERTEXT _relu_tmp80_11;
  CIPHERTEXT _relu_tmp84_12;
  CIPHERTEXT _relu_tmp90_13;
  CIPHERTEXT _relu_tmp94_14;
  CIPHERTEXT _relu_tmp100_15;
  CIPHERTEXT _relu_tmp155_16;
  CIPHERTEXT _relu_tmp159_17;
  CIPHERTEXT _relu_tmp165_18;
  CIPHERTEXT _relu_tmp169_19;
  CIPHERTEXT _relu_tmp177_20;
  CIPHERTEXT _relu_tmp181_21;
  CIPHERTEXT _relu_tmp187_22;
  CIPHERTEXT _relu_tmp191_23;
  CIPHERTEXT _relu_tmp197_24;
  CIPHERTEXT _relu_tmp266_25;
  CIPHERTEXT _relu_tmp274_26;
  CIPHERTEXT3 _preg_268435456;
  CIPHERTEXT3 _preg_268435457;
  CIPHERTEXT _preg_268435458;
  CIPHERTEXT3 _preg_268435459;
  CIPHERTEXT3 _preg_268435460;
  CIPHERTEXT _preg_268435461;
  LEVEL_T _preg_268435462;
  PLAINTEXT _preg_268435463;
  CIPHERTEXT _preg_268435464;
  CIPHERTEXT _preg_268435465;
  CIPHERTEXT3 _preg_268435466;
  CIPHERTEXT3 _preg_268435467;
  CIPHERTEXT _preg_268435468;
  LEVEL_T _preg_268435469;
  PLAINTEXT _preg_268435470;
  CIPHERTEXT _preg_268435471;
  CIPHERTEXT _preg_268435472;
  CIPHERTEXT _preg_268435473;
  CIPHERTEXT3 _preg_268435474;
  CIPHERTEXT3 _preg_268435475;
  CIPHERTEXT _preg_268435476;
  LEVEL_T _preg_268435477;
  PLAINTEXT _preg_268435478;
  CIPHERTEXT _preg_268435479;
  CIPHERTEXT _preg_268435480;
  CIPHERTEXT3 _preg_268435481;
  CIPHERTEXT3 _preg_268435482;
  CIPHERTEXT _preg_268435483;
  LEVEL_T _preg_268435484;
  PLAINTEXT _preg_268435485;
  CIPHERTEXT _preg_268435486;
  CIPHERTEXT _preg_268435487;
  CIPHERTEXT _preg_268435488;
  CIPHERTEXT3 _preg_268435489;
  CIPHERTEXT3 _preg_268435490;
  CIPHERTEXT _preg_268435491;
  CIPHERTEXT3 _preg_268435492;
  CIPHERTEXT3 _preg_268435493;
  CIPHERTEXT _preg_268435494;
  CIPHERTEXT _preg_268435495;
  CIPHERTEXT _preg_268435496;
  CIPHERTEXT3 _preg_268435497;
  CIPHERTEXT3 _preg_268435498;
  CIPHERTEXT _preg_268435499;
  CIPHERTEXT3 _preg_268435500;
  CIPHERTEXT3 _preg_268435501;
  CIPHERTEXT _preg_268435502;
  LEVEL_T _preg_268435503;
  PLAINTEXT _preg_268435504;
  CIPHERTEXT _preg_268435505;
  CIPHERTEXT _preg_268435506;
  CIPHERTEXT3 _preg_268435507;
  CIPHERTEXT3 _preg_268435508;
  CIPHERTEXT _preg_268435509;
  LEVEL_T _preg_268435510;
  PLAINTEXT _preg_268435511;
  CIPHERTEXT _preg_268435512;
  CIPHERTEXT _preg_268435513;
  CIPHERTEXT _preg_268435514;
  CIPHERTEXT3 _preg_268435515;
  CIPHERTEXT3 _preg_268435516;
  CIPHERTEXT _preg_268435517;
  CIPHERTEXT _preg_268435518;
  CIPHERTEXT _preg_268435519;
  LEVEL_T _preg_268435520;
  PLAINTEXT _preg_268435521;
  CIPHERTEXT _preg_268435522;
  CIPHERTEXT _preg_268435523;
  CIPHERTEXT _preg_268435524;
  CIPHERTEXT _preg_268435525;
  CIPHERTEXT3 _preg_268435526;
  CIPHERTEXT3 _preg_268435527;
  CIPHERTEXT _preg_268435528;
  CIPHERTEXT _preg_268435529;
  CIPHERTEXT _preg_268435530;
  LEVEL_T _preg_268435531;
  PLAINTEXT _preg_268435532;
  CIPHERTEXT _preg_268435533;
  CIPHERTEXT _preg_268435534;
  CIPHERTEXT _preg_268435535;
  CIPHERTEXT3 _preg_268435536;
  CIPHERTEXT3 _preg_268435537;
  CIPHERTEXT _preg_268435538;
  CIPHERTEXT _preg_268435539;
  CIPHERTEXT _preg_268435540;
  LEVEL_T _preg_268435541;
  PLAINTEXT _preg_268435542;
  CIPHERTEXT _preg_268435543;
  CIPHERTEXT _preg_268435544;
  CIPHERTEXT _preg_268435545;
  CIPHERTEXT _preg_268435546;
  CIPHERTEXT3 _preg_268435547;
  CIPHERTEXT3 _preg_268435548;
  CIPHERTEXT _preg_268435549;
  CIPHERTEXT3 _preg_268435550;
  CIPHERTEXT3 _preg_268435551;
  CIPHERTEXT _preg_268435552;
  CIPHERTEXT _preg_268435553;
  CIPHERTEXT _preg_268435554;
  CIPHERTEXT3 _preg_268435555;
  CIPHERTEXT3 _preg_268435556;
  CIPHERTEXT _preg_268435557;
  CIPHERTEXT3 _preg_268435558;
  CIPHERTEXT3 _preg_268435559;
  CIPHERTEXT _preg_268435560;
  LEVEL_T _preg_268435561;
  PLAINTEXT _preg_268435562;
  CIPHERTEXT _preg_268435563;
  CIPHERTEXT _preg_268435564;
  CIPHERTEXT3 _preg_268435565;
  CIPHERTEXT3 _preg_268435566;
  CIPHERTEXT _preg_268435567;
  CIPHERTEXT3 _preg_268435568;
  CIPHERTEXT3 _preg_268435569;
  CIPHERTEXT _preg_268435570;
  LEVEL_T _preg_268435571;
  PLAINTEXT _preg_268435572;
  CIPHERTEXT _preg_268435573;
  CIPHERTEXT _preg_268435574;
  CIPHERTEXT3 _preg_268435575;
  CIPHERTEXT3 _preg_268435576;
  CIPHERTEXT _preg_268435577;
  LEVEL_T _preg_268435578;
  PLAINTEXT _preg_268435579;
  CIPHERTEXT _preg_268435580;
  CIPHERTEXT _preg_268435581;
  CIPHERTEXT3 _preg_268435582;
  CIPHERTEXT3 _preg_268435583;
  CIPHERTEXT _preg_268435584;
  CIPHERTEXT _preg_268435585;
  CIPHERTEXT _preg_268435586;
  CIPHERTEXT3 _preg_268435587;
  CIPHERTEXT3 _preg_268435588;
  CIPHERTEXT _preg_268435589;
  LEVEL_T _preg_268435590;
  PLAINTEXT _preg_268435591;
  CIPHERTEXT _preg_268435592;
  CIPHERTEXT _preg_268435593;
  CIPHERTEXT3 _preg_268435594;
  CIPHERTEXT3 _preg_268435595;
  CIPHERTEXT _preg_268435596;
  LEVEL_T _preg_268435597;
  PLAINTEXT _preg_268435598;
  CIPHERTEXT _preg_268435599;
  CIPHERTEXT _preg_268435600;
  CIPHERTEXT3 _preg_268435601;
  CIPHERTEXT3 _preg_268435602;
  CIPHERTEXT _preg_268435603;
  CIPHERTEXT _preg_268435604;
  CIPHERTEXT3 _preg_268435605;
  CIPHERTEXT3 _preg_268435606;
  CIPHERTEXT _preg_268435607;
  LEVEL_T _preg_268435608;
  PLAINTEXT _preg_268435609;
  CIPHERTEXT _preg_268435610;
  CIPHERTEXT _preg_268435611;
  CIPHERTEXT3 _preg_268435612;
  CIPHERTEXT3 _preg_268435613;
  CIPHERTEXT _preg_268435614;
  LEVEL_T _preg_268435615;
  PLAINTEXT _preg_268435616;
  CIPHERTEXT _preg_268435617;
  CIPHERTEXT _preg_268435618;
  CIPHERTEXT3 _preg_268435619;
  CIPHERTEXT3 _preg_268435620;
  CIPHERTEXT _preg_268435621;
  CIPHERTEXT _preg_268435622;
  CIPHERTEXT _preg_268435623;
  LEVEL_T _preg_268435624;
  PLAINTEXT _preg_268435625;
  CIPHERTEXT _preg_268435626;
  CIPHERTEXT _preg_268435627;
  Mul_ciph(&_preg_268435456, &input_ct1_1, &input_ct1_1);
  Rescale_ciph(&_preg_268435457, &_preg_268435456);
  Free_ciph(&_preg_268435456);
  Relin(&_relu_tmp8_3, &_preg_268435457);
  Free_ciph(&_preg_268435457);
  Add_ciph(&_preg_268435458, &_relu_tmp8_3, &_relu_tmp8_3);
  Free_ciph(&_relu_tmp8_3);
  Add_scalar(&_relu_tmp14_4, &_preg_268435458, -1);
  Free_ciph(&_preg_268435458);
  Mul_ciph(&_preg_268435459, &_relu_tmp14_4, &_relu_tmp14_4);
  Rescale_ciph(&_preg_268435460, &_preg_268435459);
  Free_ciph(&_preg_268435459);
  Relin(&_relu_tmp18_5, &_preg_268435460);
  Free_ciph(&_preg_268435460);
  Add_ciph(&_preg_268435461, &_relu_tmp18_5, &_relu_tmp18_5);
  Free_ciph(&_relu_tmp18_5);
  Add_scalar(&_relu_tmp24_6, &_preg_268435461, -1);
  Free_ciph(&_preg_268435461);
  _preg_268435462 = Level(&input_ct1_1);
  Encode_float_mask(&_preg_268435463, -3.809199432496630510769, mask_len_2, 1, _preg_268435462);
  Mul_plain(&_preg_268435464, &input_ct1_1, &_preg_268435463);
  Free_plain(&_preg_268435463);
  Rescale_ciph(&_preg_268435465, &_preg_268435464);
  Free_ciph(&_preg_268435464);
  Mul_ciph(&_preg_268435466, &_relu_tmp14_4, &_preg_268435465);
  Free_ciph(&_preg_268435465);
  Rescale_ciph(&_preg_268435467, &_preg_268435466);
  Free_ciph(&_preg_268435466);
  Relin(&_preg_268435468, &_preg_268435467);
  Free_ciph(&_preg_268435467);
  _preg_268435469 = Level(&input_ct1_1);
  Encode_float_mask(&_preg_268435470, 2.460940868770910228136, mask_len_2, 1, _preg_268435469);
  Mul_plain(&_preg_268435471, &input_ct1_1, &_preg_268435470);
  Free_plain(&_preg_268435470);
  Rescale_ciph(&_preg_268435472, &_preg_268435471);
  Free_ciph(&_preg_268435471);
  Add_ciph(&_preg_268435473, &_preg_268435468, &_preg_268435472);
  Free_ciph(&_preg_268435472);
  Free_ciph(&_preg_268435468);
  Mul_ciph(&_preg_268435474, &_relu_tmp24_6, &_preg_268435473);
  Free_ciph(&_preg_268435473);
  Free_ciph(&_relu_tmp24_6);
  Rescale_ciph(&_preg_268435475, &_preg_268435474);
  Free_ciph(&_preg_268435474);
  Relin(&_preg_268435476, &_preg_268435475);
  Free_ciph(&_preg_268435475);
  _preg_268435477 = Level(&input_ct1_1);
  Encode_float_mask(&_preg_268435478, -1.430304794543664215212, mask_len_2, 1, _preg_268435477);
  Mul_plain(&_preg_268435479, &input_ct1_1, &_preg_268435478);
  Free_plain(&_preg_268435478);
  Rescale_ciph(&_preg_268435480, &_preg_268435479);
  Free_ciph(&_preg_268435479);
  Mul_ciph(&_preg_268435481, &_relu_tmp14_4, &_preg_268435480);
  Free_ciph(&_preg_268435480);
  Free_ciph(&_relu_tmp14_4);
  Rescale_ciph(&_preg_268435482, &_preg_268435481);
  Free_ciph(&_preg_268435481);
  Relin(&_preg_268435483, &_preg_268435482);
  Free_ciph(&_preg_268435482);
  _preg_268435484 = Level(&input_ct1_1);
  Encode_float_mask(&_preg_268435485, 2.944661935353764636858, mask_len_2, 1, _preg_268435484);
  Mul_plain(&_preg_268435486, &input_ct1_1, &_preg_268435485);
  Free_plain(&_preg_268435485);
  Rescale_ciph(&_preg_268435487, &_preg_268435486);
  Free_ciph(&_preg_268435486);
  Add_ciph(&_preg_268435488, &_preg_268435483, &_preg_268435487);
  Free_ciph(&_preg_268435487);
  Free_ciph(&_preg_268435483);
  Add_ciph(&_relu_tmp58_7, &_preg_268435476, &_preg_268435488);
  Free_ciph(&_preg_268435488);
  Free_ciph(&_preg_268435476);
  Mul_ciph(&_preg_268435489, &_relu_tmp58_7, &_relu_tmp58_7);
  Rescale_ciph(&_preg_268435490, &_preg_268435489);
  Free_ciph(&_preg_268435489);
  Relin(&_relu_tmp62_8, &_preg_268435490);
  Free_ciph(&_preg_268435490);
  Add_ciph(&_preg_268435491, &_relu_tmp62_8, &_relu_tmp62_8);
  Free_ciph(&_relu_tmp62_8);
  Add_scalar(&_relu_tmp68_9, &_preg_268435491, -1);
  Free_ciph(&_preg_268435491);
  Mul_ciph(&_preg_268435492, &_relu_tmp58_7, &_relu_tmp68_9);
  Rescale_ciph(&_preg_268435493, &_preg_268435492);
  Free_ciph(&_preg_268435492);
  Relin(&_relu_tmp72_10, &_preg_268435493);
  Free_ciph(&_preg_268435493);
  Add_ciph(&_preg_268435494, &_relu_tmp72_10, &_relu_tmp72_10);
  Free_ciph(&_relu_tmp72_10);
  Mul_scalar(&_preg_268435495, &_relu_tmp58_7, -1);
  Rescale_ciph(&_preg_268435496, &_preg_268435495);
  Free_ciph(&_preg_268435495);
  Add_ciph(&_relu_tmp80_11, &_preg_268435494, &_preg_268435496);
  Free_ciph(&_preg_268435496);
  Free_ciph(&_preg_268435494);
  Mul_ciph(&_preg_268435497, &_relu_tmp68_9, &_relu_tmp68_9);
  Rescale_ciph(&_preg_268435498, &_preg_268435497);
  Free_ciph(&_preg_268435497);
  Relin(&_relu_tmp84_12, &_preg_268435498);
  Free_ciph(&_preg_268435498);
  Add_ciph(&_preg_268435499, &_relu_tmp84_12, &_relu_tmp84_12);
  Free_ciph(&_relu_tmp84_12);
  Add_scalar(&_relu_tmp90_13, &_preg_268435499, -1);
  Free_ciph(&_preg_268435499);
  Mul_ciph(&_preg_268435500, &_relu_tmp90_13, &_relu_tmp90_13);
  Rescale_ciph(&_preg_268435501, &_preg_268435500);
  Free_ciph(&_preg_268435500);
  Relin(&_relu_tmp94_14, &_preg_268435501);
  Free_ciph(&_preg_268435501);
  Add_ciph(&_preg_268435502, &_relu_tmp94_14, &_relu_tmp94_14);
  Free_ciph(&_relu_tmp94_14);
  Add_scalar(&_relu_tmp100_15, &_preg_268435502, -1);
  Free_ciph(&_preg_268435502);
  _preg_268435503 = Level(&_relu_tmp58_7);
  Encode_float_mask(&_preg_268435504, -0.0001600280537250875771867, mask_len_2, 1, _preg_268435503);
  Mul_plain(&_preg_268435505, &_relu_tmp58_7, &_preg_268435504);
  Free_plain(&_preg_268435504);
  Rescale_ciph(&_preg_268435506, &_preg_268435505);
  Free_ciph(&_preg_268435505);
  Mul_ciph(&_preg_268435507, &_relu_tmp68_9, &_preg_268435506);
  Free_ciph(&_preg_268435506);
  Free_ciph(&_relu_tmp68_9);
  Rescale_ciph(&_preg_268435508, &_preg_268435507);
  Free_ciph(&_preg_268435507);
  Relin(&_preg_268435509, &_preg_268435508);
  Free_ciph(&_preg_268435508);
  _preg_268435510 = Level(&_relu_tmp58_7);
  Encode_float_mask(&_preg_268435511, 0.003032478474127557870749, mask_len_2, 1, _preg_268435510);
  Mul_plain(&_preg_268435512, &_relu_tmp58_7, &_preg_268435511);
  Free_plain(&_preg_268435511);
  Rescale_ciph(&_preg_268435513, &_preg_268435512);
  Free_ciph(&_preg_268435512);
  Add_ciph(&_preg_268435514, &_preg_268435509, &_preg_268435513);
  Free_ciph(&_preg_268435513);
  Free_ciph(&_preg_268435509);
  Mul_ciph(&_preg_268435515, &_relu_tmp90_13, &_preg_268435514);
  Free_ciph(&_preg_268435514);
  Rescale_ciph(&_preg_268435516, &_preg_268435515);
  Free_ciph(&_preg_268435515);
  Relin(&_preg_268435517, &_preg_268435516);
  Free_ciph(&_preg_268435516);
  Mul_scalar(&_preg_268435518, &_relu_tmp80_11, -0.02219735858216702675816);
  Rescale_ciph(&_preg_268435519, &_preg_268435518);
  Free_ciph(&_preg_268435518);
  _preg_268435520 = Level(&_relu_tmp58_7);
  Encode_float_mask(&_preg_268435521, 0.1365828361194337536855, mask_len_2, 1, _preg_268435520);
  Mul_plain(&_preg_268435522, &_relu_tmp58_7, &_preg_268435521);
  Free_plain(&_preg_268435521);
  Rescale_ciph(&_preg_268435523, &_preg_268435522);
  Free_ciph(&_preg_268435522);
  Add_ciph(&_preg_268435524, &_preg_268435519, &_preg_268435523);
  Free_ciph(&_preg_268435523);
  Free_ciph(&_preg_268435519);
  Add_ciph(&_preg_268435525, &_preg_268435517, &_preg_268435524);
  Free_ciph(&_preg_268435524);
  Free_ciph(&_preg_268435517);
  Mul_ciph(&_preg_268435526, &_relu_tmp100_15, &_preg_268435525);
  Free_ciph(&_preg_268435525);
  Free_ciph(&_relu_tmp100_15);
  Rescale_ciph(&_preg_268435527, &_preg_268435526);
  Free_ciph(&_preg_268435526);
  Relin(&_preg_268435528, &_preg_268435527);
  Free_ciph(&_preg_268435527);
  Mul_scalar(&_preg_268435529, &_relu_tmp80_11, -0.5558785316215136829143);
  Rescale_ciph(&_preg_268435530, &_preg_268435529);
  Free_ciph(&_preg_268435529);
  _preg_268435531 = Level(&_relu_tmp58_7);
  Encode_float_mask(&_preg_268435532, 0.5685231134608953462717, mask_len_2, 1, _preg_268435531);
  Mul_plain(&_preg_268435533, &_relu_tmp58_7, &_preg_268435532);
  Free_plain(&_preg_268435532);
  Rescale_ciph(&_preg_268435534, &_preg_268435533);
  Free_ciph(&_preg_268435533);
  Add_ciph(&_preg_268435535, &_preg_268435530, &_preg_268435534);
  Free_ciph(&_preg_268435534);
  Free_ciph(&_preg_268435530);
  Mul_ciph(&_preg_268435536, &_relu_tmp90_13, &_preg_268435535);
  Free_ciph(&_preg_268435535);
  Free_ciph(&_relu_tmp90_13);
  Rescale_ciph(&_preg_268435537, &_preg_268435536);
  Free_ciph(&_preg_268435536);
  Relin(&_preg_268435538, &_preg_268435537);
  Free_ciph(&_preg_268435537);
  Mul_scalar(&_preg_268435539, &_relu_tmp80_11, -0.6164083583294512891371);
  Free_ciph(&_relu_tmp80_11);
  Rescale_ciph(&_preg_268435540, &_preg_268435539);
  Free_ciph(&_preg_268435539);
  _preg_268435541 = Level(&_relu_tmp58_7);
  Encode_float_mask(&_preg_268435542, 1.614771079042867985009, mask_len_2, 1, _preg_268435541);
  Mul_plain(&_preg_268435543, &_relu_tmp58_7, &_preg_268435542);
  Free_plain(&_preg_268435542);
  Free_ciph(&_relu_tmp58_7);
  Rescale_ciph(&_preg_268435544, &_preg_268435543);
  Free_ciph(&_preg_268435543);
  Add_ciph(&_preg_268435545, &_preg_268435540, &_preg_268435544);
  Free_ciph(&_preg_268435544);
  Free_ciph(&_preg_268435540);
  Add_ciph(&_preg_268435546, &_preg_268435538, &_preg_268435545);
  Free_ciph(&_preg_268435545);
  Free_ciph(&_preg_268435538);
  Add_ciph(&_relu_tmp155_16, &_preg_268435528, &_preg_268435546);
  Free_ciph(&_preg_268435546);
  Free_ciph(&_preg_268435528);
  Mul_ciph(&_preg_268435547, &_relu_tmp155_16, &_relu_tmp155_16);
  Rescale_ciph(&_preg_268435548, &_preg_268435547);
  Free_ciph(&_preg_268435547);
  Relin(&_relu_tmp159_17, &_preg_268435548);
  Free_ciph(&_preg_268435548);
  Add_ciph(&_preg_268435549, &_relu_tmp159_17, &_relu_tmp159_17);
  Free_ciph(&_relu_tmp159_17);
  Add_scalar(&_relu_tmp165_18, &_preg_268435549, -1);
  Free_ciph(&_preg_268435549);
  Mul_ciph(&_preg_268435550, &_relu_tmp155_16, &_relu_tmp165_18);
  Rescale_ciph(&_preg_268435551, &_preg_268435550);
  Free_ciph(&_preg_268435550);
  Relin(&_relu_tmp169_19, &_preg_268435551);
  Free_ciph(&_preg_268435551);
  Add_ciph(&_preg_268435552, &_relu_tmp169_19, &_relu_tmp169_19);
  Free_ciph(&_relu_tmp169_19);
  Mul_scalar(&_preg_268435553, &_relu_tmp155_16, -1);
  Rescale_ciph(&_preg_268435554, &_preg_268435553);
  Free_ciph(&_preg_268435553);
  Add_ciph(&_relu_tmp177_20, &_preg_268435552, &_preg_268435554);
  Free_ciph(&_preg_268435554);
  Free_ciph(&_preg_268435552);
  Mul_ciph(&_preg_268435555, &_relu_tmp165_18, &_relu_tmp165_18);
  Free_ciph(&_relu_tmp165_18);
  Rescale_ciph(&_preg_268435556, &_preg_268435555);
  Free_ciph(&_preg_268435555);
  Relin(&_relu_tmp181_21, &_preg_268435556);
  Free_ciph(&_preg_268435556);
  Add_ciph(&_preg_268435557, &_relu_tmp181_21, &_relu_tmp181_21);
  Free_ciph(&_relu_tmp181_21);
  Add_scalar(&_relu_tmp187_22, &_preg_268435557, -1);
  Free_ciph(&_preg_268435557);
  Mul_ciph(&_preg_268435558, &_relu_tmp187_22, &_relu_tmp187_22);
  Rescale_ciph(&_preg_268435559, &_preg_268435558);
  Free_ciph(&_preg_268435558);
  Relin(&_relu_tmp191_23, &_preg_268435559);
  Free_ciph(&_preg_268435559);
  Add_ciph(&_preg_268435560, &_relu_tmp191_23, &_relu_tmp191_23);
  Free_ciph(&_relu_tmp191_23);
  Add_scalar(&_relu_tmp197_24, &_preg_268435560, -1);
  Free_ciph(&_preg_268435560);
  _preg_268435561 = Level(&_relu_tmp155_16);
  Encode_float_mask(&_preg_268435562, 0.0001111119162030077897477, mask_len_2, 1, _preg_268435561);
  Mul_plain(&_preg_268435563, &_relu_tmp155_16, &_preg_268435562);
  Free_plain(&_preg_268435562);
  Rescale_ciph(&_preg_268435564, &_preg_268435563);
  Free_ciph(&_preg_268435563);
  Mul_ciph(&_preg_268435565, &input_ct0_0, &_preg_268435564);
  Free_ciph(&_preg_268435564);
  Rescale_ciph(&_preg_268435566, &_preg_268435565);
  Free_ciph(&_preg_268435565);
  Relin(&_preg_268435567, &_preg_268435566);
  Free_ciph(&_preg_268435566);
  Mul_ciph(&_preg_268435568, &_relu_tmp187_22, &_preg_268435567);
  Free_ciph(&_preg_268435567);
  Rescale_ciph(&_preg_268435569, &_preg_268435568);
  Free_ciph(&_preg_268435568);
  Relin(&_preg_268435570, &_preg_268435569);
  Free_ciph(&_preg_268435569);
  _preg_268435571 = Level(&input_ct0_0);
  Encode_float_mask(&_preg_268435572, -0.0009371069270347270278171, mask_len_2, 1, _preg_268435571);
  Mul_plain(&_preg_268435573, &input_ct0_0, &_preg_268435572);
  Free_plain(&_preg_268435572);
  Rescale_ciph(&_preg_268435574, &_preg_268435573);
  Free_ciph(&_preg_268435573);
  Mul_ciph(&_preg_268435575, &_relu_tmp177_20, &_preg_268435574);
  Free_ciph(&_preg_268435574);
  Rescale_ciph(&_preg_268435576, &_preg_268435575);
  Free_ciph(&_preg_268435575);
  Relin(&_preg_268435577, &_preg_268435576);
  Free_ciph(&_preg_268435576);
  _preg_268435578 = Level(&_relu_tmp155_16);
  Encode_float_mask(&_preg_268435579, 0.006507995190210730772351, mask_len_2, 1, _preg_268435578);
  Mul_plain(&_preg_268435580, &_relu_tmp155_16, &_preg_268435579);
  Free_plain(&_preg_268435579);
  Rescale_ciph(&_preg_268435581, &_preg_268435580);
  Free_ciph(&_preg_268435580);
  Mul_ciph(&_preg_268435582, &input_ct0_0, &_preg_268435581);
  Free_ciph(&_preg_268435581);
  Rescale_ciph(&_preg_268435583, &_preg_268435582);
  Free_ciph(&_preg_268435582);
  Relin(&_preg_268435584, &_preg_268435583);
  Free_ciph(&_preg_268435583);
  Add_ciph(&_preg_268435585, &_preg_268435577, &_preg_268435584);
  Free_ciph(&_preg_268435584);
  Free_ciph(&_preg_268435577);
  Add_ciph(&_preg_268435586, &_preg_268435570, &_preg_268435585);
  Free_ciph(&_preg_268435585);
  Free_ciph(&_preg_268435570);
  Mul_ciph(&_preg_268435587, &_relu_tmp197_24, &_preg_268435586);
  Free_ciph(&_preg_268435586);
  Free_ciph(&_relu_tmp197_24);
  Rescale_ciph(&_preg_268435588, &_preg_268435587);
  Free_ciph(&_preg_268435587);
  Relin(&_preg_268435589, &_preg_268435588);
  Free_ciph(&_preg_268435588);
  _preg_268435590 = Level(&input_ct0_0);
  Encode_float_mask(&_preg_268435591, -0.03691063940349948585551, mask_len_2, 1, _preg_268435590);
  Mul_plain(&_preg_268435592, &input_ct0_0, &_preg_268435591);
  Free_plain(&_preg_268435591);
  Rescale_ciph(&_preg_268435593, &_preg_268435592);
  Free_ciph(&_preg_268435592);
  Mul_ciph(&_preg_268435594, &_relu_tmp177_20, &_preg_268435593);
  Free_ciph(&_preg_268435593);
  Rescale_ciph(&_preg_268435595, &_preg_268435594);
  Free_ciph(&_preg_268435594);
  Relin(&_preg_268435596, &_preg_268435595);
  Free_ciph(&_preg_268435595);
  _preg_268435597 = Level(&_relu_tmp155_16);
  Encode_float_mask(&_preg_268435598, 0.1056744718173614761003, mask_len_2, 1, _preg_268435597);
  Mul_plain(&_preg_268435599, &_relu_tmp155_16, &_preg_268435598);
  Free_plain(&_preg_268435598);
  Rescale_ciph(&_preg_268435600, &_preg_268435599);
  Free_ciph(&_preg_268435599);
  Mul_ciph(&_preg_268435601, &input_ct0_0, &_preg_268435600);
  Free_ciph(&_preg_268435600);
  Rescale_ciph(&_preg_268435602, &_preg_268435601);
  Free_ciph(&_preg_268435601);
  Relin(&_preg_268435603, &_preg_268435602);
  Free_ciph(&_preg_268435602);
  Add_ciph(&_preg_268435604, &_preg_268435596, &_preg_268435603);
  Free_ciph(&_preg_268435603);
  Free_ciph(&_preg_268435596);
  Mul_ciph(&_preg_268435605, &_relu_tmp187_22, &_preg_268435604);
  Free_ciph(&_preg_268435604);
  Free_ciph(&_relu_tmp187_22);
  Rescale_ciph(&_preg_268435606, &_preg_268435605);
  Free_ciph(&_preg_268435605);
  Relin(&_preg_268435607, &_preg_268435606);
  Free_ciph(&_preg_268435606);
  _preg_268435608 = Level(&input_ct0_0);
  Encode_float_mask(&_preg_268435609, -0.2078597158810965850329, mask_len_2, 1, _preg_268435608);
  Mul_plain(&_preg_268435610, &input_ct0_0, &_preg_268435609);
  Free_plain(&_preg_268435609);
  Rescale_ciph(&_preg_268435611, &_preg_268435610);
  Free_ciph(&_preg_268435610);
  Mul_ciph(&_preg_268435612, &_relu_tmp177_20, &_preg_268435611);
  Free_ciph(&_preg_268435611);
  Free_ciph(&_relu_tmp177_20);
  Rescale_ciph(&_preg_268435613, &_preg_268435612);
  Free_ciph(&_preg_268435612);
  Relin(&_preg_268435614, &_preg_268435613);
  Free_ciph(&_preg_268435613);
  _preg_268435615 = Level(&_relu_tmp155_16);
  Encode_float_mask(&_preg_268435616, 0.6334139843709288841822, mask_len_2, 1, _preg_268435615);
  Mul_plain(&_preg_268435617, &_relu_tmp155_16, &_preg_268435616);
  Free_plain(&_preg_268435616);
  Free_ciph(&_relu_tmp155_16);
  Rescale_ciph(&_preg_268435618, &_preg_268435617);
  Free_ciph(&_preg_268435617);
  Mul_ciph(&_preg_268435619, &input_ct0_0, &_preg_268435618);
  Free_ciph(&_preg_268435618);
  Rescale_ciph(&_preg_268435620, &_preg_268435619);
  Free_ciph(&_preg_268435619);
  Relin(&_preg_268435621, &_preg_268435620);
  Free_ciph(&_preg_268435620);
  Add_ciph(&_preg_268435622, &_preg_268435614, &_preg_268435621);
  Free_ciph(&_preg_268435621);
  Free_ciph(&_preg_268435614);
  Add_ciph(&_preg_268435623, &_preg_268435607, &_preg_268435622);
  Free_ciph(&_preg_268435622);
  Free_ciph(&_preg_268435607);
  Add_ciph(&_relu_tmp266_25, &_preg_268435589, &_preg_268435623);
  Free_ciph(&_preg_268435623);
  Free_ciph(&_preg_268435589);
  _preg_268435624 = Level(&input_ct0_0);
  Encode_float_mask(&_preg_268435625, 0.5, mask_len_2, 1, _preg_268435624);
  Mul_plain(&_preg_268435626, &input_ct0_0, &_preg_268435625);
  Free_plain(&_preg_268435625);
  Rescale_ciph(&_preg_268435627, &_preg_268435626);
  Free_ciph(&_preg_268435626);
  Add_ciph(&_relu_tmp274_26, &_relu_tmp266_25, &_preg_268435627);
  Free_ciph(&_preg_268435627);
  Free_ciph(&_relu_tmp266_25);
  return _relu_tmp274_26;
}

CKKS_PARAMS* Get_context_params() {
  static CKKS_PARAMS parm = {
    LIB_CHEDDAR, 65536, 0, 31, 24, 60, 40, 3, 192, 162, 
    { -6144, -3360, -3136, -3072, -2880, -2400, -1920, -1568,
      -1440, -960, -720, -600, -480, -360, -240, -120,
      -90, -66, -65, -64, -63, -62, -34, -33,
      -32, -31, -30, -29, -28, -27, -26, -16,
      -15, -14, -13, -12, -2, -1, 0, 1,
      2, 3, 4, 5, 6, 7, 8, 9,
      10, 11, 12, 13, 14, 15, 16, 17,
      19, 20, 24, 26, 27, 28, 29, 30,
      31, 32, 33, 34, 36, 40, 42, 44,
      45, 47, 48, 49, 50, 52, 56, 60,
      62, 63, 64, 65, 66, 68, 70, 72,
      75, 76, 80, 84, 88, 92, 96, 100,
      104, 108, 120, 126, 140, 150, 168, 192,
      196, 210, 225, 240, 252, 280, 288, 294,
      300, 336, 375, 378, 384, 392, 420, 450,
      462, 480, 500, 504, 525, 546, 560, 576,
      588, 600, 672, 675, 700, 720, 750, 768,
      784, 825, 864, 900, 960, 975, 980, 1000,
      1024, 1050, 1056, 1125, 1152, 1176, 1200, 1248,
      1344, 1372, 1440, 1500, 1764, 2000, 2048, 2352,
      2500, 2940 }
  };
  return &parm;
}

// In offline encoding scenery, data file type will be changed. Below impl need to be changed also? 
RT_DATA_INFO* Get_rt_data_info() {
  static RT_DATA_INFO info = {
    "/tmp/lenet.bin",
    "XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX",
    DE_MSG_F32
  };
  return &info;
}

bool Need_bts() {
  return true;
}

int32_t _cst_25[25] = {
  -66, -65, -64, -63, -62, -34, -33, -32,
  -31, -30, -2, -1, 0, 1, 2, 30,
  31, 32, 33, 34, 62, 63, 64, 65,
  66
};
int32_t _cst_37[25] = {
  -30, -29, -28, -27, -26, -16, -15, -14,
  -13, -12, -2, -1, 0, 1, 2, 12,
  13, 14, 15, 16, 26, 27, 28, 29,
  30
};
int32_t _cst_47[4] = {
  0, 1, 2, 3
};
int32_t _cst_50[4] = {
  0, 1, 2, 3
};
int32_t _cst_53[2] = {
  0, 1
};
