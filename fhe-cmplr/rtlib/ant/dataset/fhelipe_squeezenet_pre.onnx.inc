// external header files
#include "rt_ant/rt_ant.h"

typedef double float64_t;
typedef float float32_t;

extern float32_t _cst_0[65536];
extern float32_t _cst_1[256];
extern float32_t _cst_2[2560];
extern float32_t _cst_3[10];
extern float32_t _cst_4[96];
extern float32_t _cst_5[32];
extern float32_t _cst_6[512];
extern float32_t _cst_7[16];
extern float32_t _cst_8[256];
extern float32_t _cst_9[2304];
extern float32_t _cst_10[512];
extern float32_t _cst_11[256];
extern float32_t _cst_12[2304];
extern float32_t _cst_13[1024];
extern float32_t _cst_14[1024];
extern float32_t _cst_15[9216];
extern float32_t _cst_16[2048];
extern float32_t _cst_17[2048];
extern float32_t _cst_18[64];
extern float32_t _cst_19[18432];
extern float32_t _cst_20[4096];
extern float32_t _cst_21[2048];
extern float32_t _cst_22[18432];
extern float32_t _cst_23[4096];
extern float32_t _cst_24[2048];
extern float32_t _cst_25[18432];
extern float32_t _cst_26[8192];
extern float32_t _cst_27[8192];
extern float32_t _cst_28[128];
extern float32_t _cst_29[73728];
extern float32_t _cst_30[16384];
extern float32_t _cst_31[8192];
extern float32_t _cst_32[73728];
extern int64_t _cst_33[2];
extern int64_t _cst_34[2];
extern int64_t _cst_35[2];
extern int64_t _cst_36[2];
extern int64_t _cst_37[2];
extern int64_t _cst_38[2];
extern int64_t _cst_39[2];
extern int64_t _cst_40[2];
extern int64_t _cst_41[2];
extern int64_t _cst_42[2];
extern int64_t _cst_43[2];
extern int64_t _cst_44[2];
extern int64_t _cst_45[2];
extern int64_t _cst_46[2];
extern int64_t _cst_47[2];
extern int32_t _cst_48[1];
extern float32_t _cst_49[131072];
extern float32_t _cst_50[32768];
extern int32_t _cst_51[1];
extern float32_t _cst_52[32768];
extern int32_t _cst_53[1];
extern float32_t _cst_54[524288];
extern float32_t _cst_55[16384];
extern int32_t _cst_56[1];
extern int32_t _cst_57[1];
extern float32_t _cst_58[262144];
extern float32_t _cst_59[16384];
extern int32_t _cst_60[1];
extern float32_t _cst_61[16384];
extern float32_t _cst_62[16384];
extern int32_t _cst_63[1];
extern float32_t _cst_64[2359296];
extern float32_t _cst_65[16384];
extern int32_t _cst_66[9];
extern float32_t _cst_67[16384];
extern float32_t _cst_68[16384];
extern int32_t _cst_69[1];
extern float32_t _cst_70[524288];
extern float32_t _cst_71[16384];
extern int32_t _cst_72[1];
extern int32_t _cst_73[1];
extern float32_t _cst_74[262144];
extern float32_t _cst_75[16384];
extern int32_t _cst_76[1];
extern float32_t _cst_77[16384];
extern float32_t _cst_78[16384];
extern int32_t _cst_79[1];
extern float32_t _cst_80[2359296];
extern float32_t _cst_81[16384];
extern int32_t _cst_82[9];
extern float32_t _cst_83[16384];
extern float32_t _cst_84[16384];
extern int32_t _cst_85[1];
extern float32_t _cst_86[1048576];
extern float32_t _cst_87[32768];
extern int32_t _cst_88[4];
extern float32_t _cst_89[32768];
extern int32_t _cst_90[1];
extern float32_t _cst_91[1048576];
extern float32_t _cst_92[32768];
extern int32_t _cst_93[4];
extern float32_t _cst_94[32768];
extern float32_t _cst_95[32768];
extern float32_t _cst_96[524288];
extern float32_t _cst_97[524288];
extern float32_t _cst_98[1048576];
extern int32_t _cst_99[1];
extern float32_t _cst_100[9437184];
extern float32_t _cst_101[32768];
extern int32_t _cst_102[9];
extern float32_t _cst_103[32768];
extern float32_t _cst_104[32768];
extern float32_t _cst_105[524288];
extern float32_t _cst_106[524288];
extern float32_t _cst_107[1048576];
extern int32_t _cst_108[1];
extern float32_t _cst_109[524288];
extern float32_t _cst_110[8192];
extern int32_t _cst_111[1];
extern int32_t _cst_112[1];
extern float32_t _cst_113[524288];
extern float32_t _cst_114[16384];
extern int32_t _cst_115[4];
extern float32_t _cst_116[16384];
extern float32_t _cst_117[16384];
extern int32_t _cst_118[1];
extern float32_t _cst_119[4718592];
extern float32_t _cst_120[16384];
extern int32_t _cst_121[9];
extern float32_t _cst_122[16384];
extern float32_t _cst_123[16384];
extern int32_t _cst_124[1];
extern float32_t _cst_125[1048576];
extern float32_t _cst_126[8192];
extern int32_t _cst_127[1];
extern int32_t _cst_128[1];
extern float32_t _cst_129[524288];
extern float32_t _cst_130[16384];
extern int32_t _cst_131[4];
extern float32_t _cst_132[16384];
extern float32_t _cst_133[16384];
extern int32_t _cst_134[1];
extern float32_t _cst_135[4718592];
extern float32_t _cst_136[16384];
extern int32_t _cst_137[9];
extern float32_t _cst_138[16384];
extern float32_t _cst_139[16384];
extern int32_t _cst_140[1];
extern float32_t _cst_141[1048576];
extern float32_t _cst_142[8192];
extern int32_t _cst_143[1];
extern int32_t _cst_144[1];
extern float32_t _cst_145[524288];
extern float32_t _cst_146[16384];
extern int32_t _cst_147[4];
extern float32_t _cst_148[16384];
extern float32_t _cst_149[16384];
extern int32_t _cst_150[1];
extern float32_t _cst_151[4718592];
extern float32_t _cst_152[16384];
extern int32_t _cst_153[9];
extern float32_t _cst_154[16384];
extern float32_t _cst_155[16384];
extern int32_t _cst_156[1];
extern float32_t _cst_157[2097152];
extern float32_t _cst_158[16384];
extern int32_t _cst_159[1];
extern int32_t _cst_160[1];
extern float32_t _cst_161[2097152];
extern float32_t _cst_162[32768];
extern int32_t _cst_163[8];
extern float32_t _cst_164[32768];
extern float32_t _cst_165[32768];
extern float32_t _cst_166[262144];
extern float32_t _cst_167[262144];
extern float32_t _cst_168[4194304];
extern int32_t _cst_169[1];
extern float32_t _cst_170[18874368];
extern float32_t _cst_171[32768];
extern int32_t _cst_172[9];
extern float32_t _cst_173[32768];
extern float32_t _cst_174[32768];
extern float32_t _cst_175[262144];
extern float32_t _cst_176[262144];
extern float32_t _cst_177[4194304];
extern int32_t _cst_178[1];
extern float32_t _cst_179[1048576];
extern float32_t _cst_180[4096];
extern int32_t _cst_181[1];
extern int32_t _cst_182[1];
extern float32_t _cst_183[524288];
extern float32_t _cst_184[8192];
extern int32_t _cst_185[8];
extern float32_t _cst_186[8192];
extern float32_t _cst_187[8192];
extern int32_t _cst_188[1];
extern float32_t _cst_189[5898240];
extern float32_t _cst_190[8192];
extern int32_t _cst_191[9];
extern float32_t _cst_192[8192];
extern float32_t _cst_193[8192];
extern int32_t _cst_194[1];
extern float32_t _cst_195[4194304];
extern float32_t _cst_196[16384];
extern int32_t _cst_197[16];
extern float32_t _cst_198[16384];
extern float32_t _cst_199[16384];
float32_t _cst_200 = 0.015625;
extern float32_t _cst_201[16384];
extern float32_t _cst_202[65536];
extern int32_t _cst_203[1];
extern float32_t _cst_204[2700];
extern int32_t _cst_205[2];
extern float32_t _cst_206[10];
float32_t _cst_207 = -1;
float32_t _cst_208 = -1;
float64_t _cst_209 = -3.809199432496630510769;
float32_t _cst_210 = -3.809199432496630510769;
float64_t _cst_211 = 2.460940868770910228136;
float32_t _cst_212 = 2.460940868770910228136;
float64_t _cst_213 = -1.430304794543664215212;
float32_t _cst_214 = -1.430304794543664215212;
float64_t _cst_215 = 2.944661935353764636858;
float32_t _cst_216 = 2.944661935353764636858;
float32_t _cst_217 = -1;
float32_t _cst_218 = -1;
float32_t _cst_219 = -1;
float32_t _cst_220 = -1;
float64_t _cst_221 = -0.0001600280537250875771867;
float32_t _cst_222 = -0.0001600280537250875771867;
float64_t _cst_223 = 0.003032478474127557870749;
float32_t _cst_224 = 0.003032478474127557870749;
float64_t _cst_225 = 0.1365828361194337536855;
float32_t _cst_226 = 0.1365828361194337536855;
float64_t _cst_227 = -0.02219735858216702675816;
float64_t _cst_228 = 0.5685231134608953462717;
float32_t _cst_229 = 0.5685231134608953462717;
float64_t _cst_230 = -0.5558785316215136829143;
float64_t _cst_231 = 1.614771079042867985009;
float32_t _cst_232 = 1.614771079042867985009;
float64_t _cst_233 = -0.6164083583294512891371;
float32_t _cst_234 = -1;
float32_t _cst_235 = -1;
float32_t _cst_236 = -1;
float32_t _cst_237 = -1;
float64_t _cst_238 = 0.0001111119162030077897477;
float32_t _cst_239 = 0.0001111119162030077897477;
float64_t _cst_240 = 0.006507995190210730772351;
float32_t _cst_241 = 0.006507995190210730772351;
float64_t _cst_242 = -0.0009371069270347270278171;
float32_t _cst_243 = -0.0009371069270347270278171;
float64_t _cst_244 = 0.1056744718173614761003;
float32_t _cst_245 = 0.1056744718173614761003;
float64_t _cst_246 = -0.03691063940349948585551;
float32_t _cst_247 = -0.03691063940349948585551;
float64_t _cst_248 = 0.6334139843709288841822;
float32_t _cst_249 = 0.6334139843709288841822;
float64_t _cst_250 = -0.2078597158810965850329;
float32_t _cst_251 = -0.2078597158810965850329;
float32_t _cst_252 = 0.5;
CIPHERTEXT App_relu(CIPHERTEXT input_ct0, CIPHERTEXT input_ct1, uint32_t mask_len);
CIPHERTEXT Rotate(CIPHERTEXT ciph, int32_t rot_idx);
CIPHERTEXT Relinearize(CIPHERTEXT3 ciph);

bool Main_graph() {
  CIPHERTEXT input_0;
  CIPHERTEXT input_dup_n0_1;
  int32_t bs_input_n0_2;
  CIPHERTEXT input_block_n0_3[1];
  CIPHERTEXT result_n1_4;
  int32_t num_grid_n1_5;
  CIPHERTEXT result_grid_n1_6;
  int32_t cap_block_n1_7;
  CIPHERTEXT tmp_result_n2_8;
  CIPHERTEXT input_dup_n2_9;
  int32_t index_cin_n2_10;
  int32_t index_khw_n2_11;
  CIPHERTEXT input_dup_n2_12;
  int32_t bs_input_n2_13;
  CIPHERTEXT input_block_n2_14[1];
  CIPHERTEXT result_n3_15;
  int32_t num_grid_n3_16;
  CIPHERTEXT result_grid_n3_17;
  int32_t cap_block_n3_18;
  CIPHERTEXT input_dup_n3_19;
  int32_t bs_input_n3_20;
  CIPHERTEXT input_block_n3_21[9];
  CIPHERTEXT result_n4_22;
  int32_t num_grid_n4_23;
  CIPHERTEXT result_grid_n4_24;
  int32_t cap_block_n4_25;
  CIPHERTEXT tmp_result_n5_26;
  CIPHERTEXT input_dup_n5_27;
  int32_t index_cin_n5_28;
  int32_t index_khw_n5_29;
  CIPHERTEXT input_dup_n5_30;
  int32_t bs_input_n5_31;
  CIPHERTEXT input_block_n5_32[1];
  CIPHERTEXT result_n6_33;
  int32_t num_grid_n6_34;
  CIPHERTEXT result_grid_n6_35;
  int32_t cap_block_n6_36;
  CIPHERTEXT input_dup_n6_37;
  int32_t bs_input_n6_38;
  CIPHERTEXT input_block_n6_39[9];
  CIPHERTEXT result_n7_40;
  int32_t num_grid_n7_41;
  CIPHERTEXT result_grid_n7_42;
  int32_t cap_block_n7_43;
  CIPHERTEXT input_dup_n7_44;
  int32_t bs_input_n7_45;
  CIPHERTEXT input_block_n7_46[4];
  CIPHERTEXT result_n8_47;
  int32_t num_grid_n8_48;
  CIPHERTEXT result_grid_n8_49;
  int32_t cap_block_n8_50;
  CIPHERTEXT input_dup_n8_51;
  int32_t bs_input_n8_52;
  CIPHERTEXT input_block_n8_53[4];
  CIPHERTEXT result_n9_54;
  int32_t num_grid_n9_55;
  CIPHERTEXT result_grid_n9_56;
  int32_t cap_block_n9_57;
  CIPHERTEXT tmp_row_add9_58;
  CIPHERTEXT orig_result9_59;
  CIPHERTEXT comb_row_result10_60;
  int32_t comb_row_index_n10_61;
  CIPHERTEXT comb_rc_result10_62;
  int32_t comb_rc_index_n10_63;
  CIPHERTEXT ss_result10_64;
  int32_t comb_cc_index_n10_65;
  CIPHERTEXT input_dup_n10_66;
  int32_t bs_input_n10_67;
  CIPHERTEXT input_block_n10_68[9];
  CIPHERTEXT result_n11_69;
  int32_t num_grid_n11_70;
  CIPHERTEXT result_grid_n11_71;
  int32_t cap_block_n11_72;
  CIPHERTEXT tmp_row_add11_73;
  CIPHERTEXT orig_result11_74;
  CIPHERTEXT comb_row_result12_75;
  int32_t comb_row_index_n12_76;
  CIPHERTEXT comb_rc_result12_77;
  int32_t comb_rc_index_n12_78;
  CIPHERTEXT ss_result12_79;
  int32_t comb_cc_index_n12_80;
  CIPHERTEXT tmp_result_n13_81;
  CIPHERTEXT input_dup_n13_82;
  int32_t index_cin_n13_83;
  int32_t index_khw_n13_84;
  CIPHERTEXT input_dup_n13_85;
  int32_t bs_input_n13_86;
  CIPHERTEXT input_block_n13_87[4];
  CIPHERTEXT result_n14_88;
  int32_t num_grid_n14_89;
  CIPHERTEXT result_grid_n14_90;
  int32_t cap_block_n14_91;
  CIPHERTEXT input_dup_n14_92;
  int32_t bs_input_n14_93;
  CIPHERTEXT input_block_n14_94[9];
  CIPHERTEXT result_n15_95;
  int32_t num_grid_n15_96;
  CIPHERTEXT result_grid_n15_97;
  int32_t cap_block_n15_98;
  CIPHERTEXT tmp_result_n16_99;
  CIPHERTEXT input_dup_n16_100;
  int32_t index_cin_n16_101;
  int32_t index_khw_n16_102;
  CIPHERTEXT input_dup_n16_103;
  int32_t bs_input_n16_104;
  CIPHERTEXT input_block_n16_105[4];
  CIPHERTEXT result_n17_106;
  int32_t num_grid_n17_107;
  CIPHERTEXT result_grid_n17_108;
  int32_t cap_block_n17_109;
  CIPHERTEXT input_dup_n17_110;
  int32_t bs_input_n17_111;
  CIPHERTEXT input_block_n17_112[9];
  CIPHERTEXT result_n18_113;
  int32_t num_grid_n18_114;
  CIPHERTEXT result_grid_n18_115;
  int32_t cap_block_n18_116;
  CIPHERTEXT tmp_result_n19_117;
  CIPHERTEXT input_dup_n19_118;
  int32_t index_cin_n19_119;
  int32_t index_khw_n19_120;
  CIPHERTEXT input_dup_n19_121;
  int32_t bs_input_n19_122;
  CIPHERTEXT input_block_n19_123[4];
  CIPHERTEXT result_n20_124;
  int32_t num_grid_n20_125;
  CIPHERTEXT result_grid_n20_126;
  int32_t cap_block_n20_127;
  CIPHERTEXT input_dup_n20_128;
  int32_t bs_input_n20_129;
  CIPHERTEXT input_block_n20_130[9];
  CIPHERTEXT result_n21_131;
  int32_t num_grid_n21_132;
  CIPHERTEXT result_grid_n21_133;
  int32_t cap_block_n21_134;
  CIPHERTEXT tmp_result_n22_135;
  CIPHERTEXT input_dup_n22_136;
  int32_t index_cin_n22_137;
  int32_t index_khw_n22_138;
  CIPHERTEXT input_dup_n22_139;
  int32_t bs_input_n22_140;
  CIPHERTEXT input_block_n22_141[8];
  CIPHERTEXT result_n23_142;
  int32_t num_grid_n23_143;
  CIPHERTEXT result_grid_n23_144;
  int32_t cap_block_n23_145;
  CIPHERTEXT tmp_row_add23_146;
  CIPHERTEXT orig_result23_147;
  CIPHERTEXT comb_row_result24_148;
  int32_t comb_row_index_n24_149;
  CIPHERTEXT comb_rc_result24_150;
  int32_t comb_rc_index_n24_151;
  CIPHERTEXT ss_result24_152;
  int32_t comb_cc_index_n24_153;
  CIPHERTEXT input_dup_n24_154;
  int32_t bs_input_n24_155;
  CIPHERTEXT input_block_n24_156[9];
  CIPHERTEXT result_n25_157;
  int32_t num_grid_n25_158;
  CIPHERTEXT result_grid_n25_159;
  int32_t cap_block_n25_160;
  CIPHERTEXT tmp_row_add25_161;
  CIPHERTEXT orig_result25_162;
  CIPHERTEXT comb_row_result26_163;
  int32_t comb_row_index_n26_164;
  CIPHERTEXT comb_rc_result26_165;
  int32_t comb_rc_index_n26_166;
  CIPHERTEXT ss_result26_167;
  int32_t comb_cc_index_n26_168;
  CIPHERTEXT tmp_result_n27_169;
  CIPHERTEXT input_dup_n27_170;
  int32_t index_cin_n27_171;
  int32_t index_khw_n27_172;
  CIPHERTEXT input_dup_n27_173;
  int32_t bs_input_n27_174;
  CIPHERTEXT input_block_n27_175[8];
  CIPHERTEXT result_n28_176;
  int32_t num_grid_n28_177;
  CIPHERTEXT result_grid_n28_178;
  int32_t cap_block_n28_179;
  CIPHERTEXT input_dup_n28_180;
  int32_t bs_input_n28_181;
  CIPHERTEXT input_block_n28_182[9];
  CIPHERTEXT result_n29_183;
  int32_t num_grid_n29_184;
  CIPHERTEXT result_grid_n29_185;
  int32_t cap_block_n29_186;
  int32_t num_block_collecitve_data_n29_187;
  int32_t num_block_collecitve_gap_n29_188;
  CIPHERTEXT input_dup_n29_189;
  int32_t bs_input_n29_190;
  CIPHERTEXT input_block_n29_191[16];
  CIPHERTEXT result_n30_192;
  int32_t num_grid_n30_193;
  CIPHERTEXT result_grid_n30_194;
  int32_t cap_block_n30_195;
  int32_t gap_sum_index_n30_196;
  CIPHERTEXT gap_result30_197;
  CIPHERTEXT orig_result30_198;
  CIPHERTEXT ss_result31_199;
  int32_t comb_cc_lf_index_n31_200;
  int32_t comb_cc_index_n31_201;
  CIPHERTEXT input_dup_n31_202;
  int32_t bs_input_n31_203;
  CIPHERTEXT input_block_n31_204[2];
  CIPHERTEXT gemm_result_n32_205;
  int32_t gs_n32_206;
  CIPHERTEXT block_result_207;
  int32_t bs_n32_208;
  CIPHERTEXT reduce_intra_209;
  int32_t ri_n32_210;
  CIPHERTEXT output_211;
  CIPHERTEXT _ckks_gen_tmp_89_212;
  CIPHERTEXT _ckks_gen_tmp_201_213;
  CIPHERTEXT _ckks_gen_tmp_315_214;
  CIPHERTEXT _ckks_gen_tmp_359_215;
  CIPHERTEXT _ckks_gen_tmp_444_216;
  CIPHERTEXT _ckks_gen_tmp_488_217;
  CIPHERTEXT _ckks_gen_tmp_587_218;
  CIPHERTEXT _ckks_gen_tmp_701_219;
  CIPHERTEXT _ckks_gen_tmp_745_220;
  CIPHERTEXT _ckks_gen_tmp_830_221;
  CIPHERTEXT _ckks_gen_tmp_874_222;
  CIPHERTEXT _ckks_gen_tmp_996_223;
  CIPHERTEXT _ckks_gen_tmp_1131_224;
  CIPHERTEXT _ckks_gen_tmp_1205_225;
  CIPHERTEXT _ckks_gen_tmp_1236_226;
  CIPHERTEXT _ckks_gen_tmp_1269_227;
  CIPHERTEXT _ckks_gen_tmp_1302_228;
  CIPHERTEXT _ckks_gen_tmp_1380_229;
  CIPHERTEXT _ckks_gen_tmp_1454_230;
  CIPHERTEXT _ckks_gen_tmp_1485_231;
  CIPHERTEXT _ckks_gen_tmp_1518_232;
  CIPHERTEXT _ckks_gen_tmp_1551_233;
  CIPHERTEXT _ckks_gen_tmp_1647_234;
  CIPHERTEXT _ckks_gen_tmp_1769_235;
  CIPHERTEXT _ckks_gen_tmp_1813_236;
  CIPHERTEXT _ckks_gen_tmp_1902_237;
  CIPHERTEXT _ckks_gen_tmp_1946_238;
  CIPHERTEXT _ckks_gen_tmp_2045_239;
  CIPHERTEXT _ckks_gen_tmp_2167_240;
  CIPHERTEXT _ckks_gen_tmp_2211_241;
  CIPHERTEXT _ckks_gen_tmp_2300_242;
  CIPHERTEXT _ckks_gen_tmp_2344_243;
  CIPHERTEXT _ckks_gen_tmp_2443_244;
  CIPHERTEXT _ckks_gen_tmp_2565_245;
  CIPHERTEXT _ckks_gen_tmp_2609_246;
  CIPHERTEXT _ckks_gen_tmp_2698_247;
  CIPHERTEXT _ckks_gen_tmp_2742_248;
  CIPHERTEXT _ckks_gen_tmp_2841_249;
  CIPHERTEXT _ckks_gen_tmp_2963_250;
  CIPHERTEXT _ckks_gen_tmp_3037_251;
  CIPHERTEXT _ckks_gen_tmp_3068_252;
  CIPHERTEXT _ckks_gen_tmp_3101_253;
  CIPHERTEXT _ckks_gen_tmp_3134_254;
  CIPHERTEXT _ckks_gen_tmp_3216_255;
  CIPHERTEXT _ckks_gen_tmp_3290_256;
  CIPHERTEXT _ckks_gen_tmp_3321_257;
  CIPHERTEXT _ckks_gen_tmp_3354_258;
  CIPHERTEXT _ckks_gen_tmp_3387_259;
  CIPHERTEXT _ckks_gen_tmp_3483_260;
  CIPHERTEXT _ckks_gen_tmp_3605_261;
  CIPHERTEXT _ckks_gen_tmp_3649_262;
  CIPHERTEXT _ckks_gen_tmp_3754_263;
  CIPHERTEXT _ckks_gen_tmp_3810_264;
  CIPHERTEXT _ckks_gen_tmp_3840_265;
  CIPHERTEXT _ckks_gen_tmp_3856_266;
  CIPHERTEXT _ckks_gen_tmp_3978_267;
  CIPHERTEXT _ckks_gen_tmp_4022_268;
  CIPHERTEXT _ckks_gen_tmp_4149_269;
  CIPHERTEXT _ckks_gen_tmp_4241_270;
  MODULUS* _pgen_modulus_271;
  uint32_t _pgen_num_q_272;
  uint32_t _pgen_rns_idx_273;
  CIPHERTEXT _pgen_tmp_0_274;
  CIPHERTEXT _pgen_tmp_1_275;
  CIPHERTEXT _pgen_tmp_2_276;
  CIPHERTEXT _pgen_tmp_3_277;
  CIPHERTEXT _pgen_tmp_4_278;
  CIPHERTEXT _pgen_tmp_5_279;
  PLAINTEXT _pgen_tmp_6_280;
  CIPHERTEXT _pgen_tmp_7_281;
  CIPHERTEXT _pgen_tmp_8_282;
  PLAINTEXT _pgen_tmp_9_283;
  PLAINTEXT _pgen_tmp_10_284;
  PLAINTEXT _pgen_tmp_11_285;
  CIPHERTEXT _pgen_tmp_12_286;
  PLAINTEXT _pgen_tmp_13_287;
  PLAINTEXT _pgen_tmp_14_288;
  CIPHERTEXT _pgen_tmp_15_289;
  CIPHERTEXT _pgen_tmp_16_290;
  PLAINTEXT _pgen_tmp_17_291;
  CIPHERTEXT _pgen_tmp_18_292;
  PLAINTEXT _pgen_tmp_19_293;
  CIPHERTEXT _pgen_tmp_20_294;
  PLAINTEXT _pgen_tmp_21_295;
  PLAINTEXT _pgen_tmp_22_296;
  CIPHERTEXT _pgen_tmp_23_297;
  CIPHERTEXT _pgen_tmp_24_298;
  PLAINTEXT _pgen_tmp_25_299;
  CIPHERTEXT _pgen_tmp_26_300;
  PLAINTEXT _pgen_tmp_27_301;
  CIPHERTEXT _pgen_tmp_28_302;
  PLAINTEXT _pgen_tmp_29_303;
  PLAINTEXT _pgen_tmp_30_304;
  CIPHERTEXT _pgen_tmp_31_305;
  PLAINTEXT _pgen_tmp_32_306;
  PLAINTEXT _pgen_tmp_33_307;
  CIPHERTEXT _pgen_tmp_34_308;
  CIPHERTEXT _pgen_tmp_35_309;
  PLAINTEXT _pgen_tmp_36_310;
  CIPHERTEXT _pgen_tmp_37_311;
  PLAINTEXT _pgen_tmp_38_312;
  CIPHERTEXT _pgen_tmp_39_313;
  PLAINTEXT _pgen_tmp_40_314;
  PLAINTEXT _pgen_tmp_41_315;
  CIPHERTEXT _pgen_tmp_42_316;
  CIPHERTEXT _pgen_tmp_43_317;
  PLAINTEXT _pgen_tmp_44_318;
  CIPHERTEXT _pgen_tmp_45_319;
  PLAINTEXT _pgen_tmp_46_320;
  CIPHERTEXT _pgen_tmp_47_321;
  PLAINTEXT _pgen_tmp_48_322;
  PLAINTEXT _pgen_tmp_49_323;
  CIPHERTEXT _pgen_tmp_50_324;
  CIPHERTEXT _pgen_tmp_51_325;
  PLAINTEXT _pgen_tmp_52_326;
  PLAINTEXT _pgen_tmp_53_327;
  PLAINTEXT _pgen_tmp_54_328;
  CIPHERTEXT _pgen_tmp_55_329;
  CIPHERTEXT _pgen_tmp_56_330;
  PLAINTEXT _pgen_tmp_57_331;
  PLAINTEXT _pgen_tmp_58_332;
  CIPHERTEXT _pgen_tmp_59_333;
  PLAINTEXT _pgen_tmp_60_334;
  PLAINTEXT _pgen_tmp_61_335;
  CIPHERTEXT _pgen_tmp_62_336;
  PLAINTEXT _pgen_tmp_63_337;
  CIPHERTEXT _pgen_tmp_64_338;
  PLAINTEXT _pgen_tmp_65_339;
  CIPHERTEXT _pgen_tmp_66_340;
  PLAINTEXT _pgen_tmp_67_341;
  CIPHERTEXT _pgen_tmp_68_342;
  CIPHERTEXT _pgen_tmp_69_343;
  PLAINTEXT _pgen_tmp_70_344;
  PLAINTEXT _pgen_tmp_71_345;
  CIPHERTEXT _pgen_tmp_72_346;
  PLAINTEXT _pgen_tmp_73_347;
  PLAINTEXT _pgen_tmp_74_348;
  CIPHERTEXT _pgen_tmp_75_349;
  PLAINTEXT _pgen_tmp_76_350;
  CIPHERTEXT _pgen_tmp_77_351;
  PLAINTEXT _pgen_tmp_78_352;
  CIPHERTEXT _pgen_tmp_79_353;
  PLAINTEXT _pgen_tmp_80_354;
  CIPHERTEXT _pgen_tmp_81_355;
  PLAINTEXT _pgen_tmp_82_356;
  CIPHERTEXT _pgen_tmp_83_357;
  PLAINTEXT _pgen_tmp_84_358;
  CIPHERTEXT _pgen_tmp_85_359;
  CIPHERTEXT _pgen_tmp_86_360;
  PLAINTEXT _pgen_tmp_87_361;
  CIPHERTEXT _pgen_tmp_88_362;
  PLAINTEXT _pgen_tmp_89_363;
  CIPHERTEXT _pgen_tmp_90_364;
  PLAINTEXT _pgen_tmp_91_365;
  PLAINTEXT _pgen_tmp_92_366;
  CIPHERTEXT _pgen_tmp_93_367;
  CIPHERTEXT _pgen_tmp_94_368;
  PLAINTEXT _pgen_tmp_95_369;
  CIPHERTEXT _pgen_tmp_96_370;
  PLAINTEXT _pgen_tmp_97_371;
  CIPHERTEXT _pgen_tmp_98_372;
  PLAINTEXT _pgen_tmp_99_373;
  PLAINTEXT _pgen_tmp_100_374;
  CIPHERTEXT _pgen_tmp_101_375;
  PLAINTEXT _pgen_tmp_102_376;
  CIPHERTEXT _pgen_tmp_103_377;
  PLAINTEXT _pgen_tmp_104_378;
  CIPHERTEXT _pgen_tmp_105_379;
  CIPHERTEXT _pgen_tmp_106_380;
  PLAINTEXT _pgen_tmp_107_381;
  CIPHERTEXT _pgen_tmp_108_382;
  PLAINTEXT _pgen_tmp_109_383;
  CIPHERTEXT _pgen_tmp_110_384;
  PLAINTEXT _pgen_tmp_111_385;
  PLAINTEXT _pgen_tmp_112_386;
  CIPHERTEXT _pgen_tmp_113_387;
  CIPHERTEXT _pgen_tmp_114_388;
  PLAINTEXT _pgen_tmp_115_389;
  CIPHERTEXT _pgen_tmp_116_390;
  PLAINTEXT _pgen_tmp_117_391;
  CIPHERTEXT _pgen_tmp_118_392;
  PLAINTEXT _pgen_tmp_119_393;
  PLAINTEXT _pgen_tmp_120_394;
  CIPHERTEXT _pgen_tmp_121_395;
  PLAINTEXT _pgen_tmp_122_396;
  CIPHERTEXT _pgen_tmp_123_397;
  PLAINTEXT _pgen_tmp_124_398;
  CIPHERTEXT _pgen_tmp_125_399;
  CIPHERTEXT _pgen_tmp_126_400;
  PLAINTEXT _pgen_tmp_127_401;
  CIPHERTEXT _pgen_tmp_128_402;
  PLAINTEXT _pgen_tmp_129_403;
  CIPHERTEXT _pgen_tmp_130_404;
  PLAINTEXT _pgen_tmp_131_405;
  PLAINTEXT _pgen_tmp_132_406;
  CIPHERTEXT _pgen_tmp_133_407;
  CIPHERTEXT _pgen_tmp_134_408;
  PLAINTEXT _pgen_tmp_135_409;
  CIPHERTEXT _pgen_tmp_136_410;
  PLAINTEXT _pgen_tmp_137_411;
  CIPHERTEXT _pgen_tmp_138_412;
  PLAINTEXT _pgen_tmp_139_413;
  PLAINTEXT _pgen_tmp_140_414;
  CIPHERTEXT _pgen_tmp_141_415;
  PLAINTEXT _pgen_tmp_142_416;
  CIPHERTEXT _pgen_tmp_143_417;
  PLAINTEXT _pgen_tmp_144_418;
  CIPHERTEXT _pgen_tmp_145_419;
  CIPHERTEXT _pgen_tmp_146_420;
  PLAINTEXT _pgen_tmp_147_421;
  PLAINTEXT _pgen_tmp_148_422;
  CIPHERTEXT _pgen_tmp_149_423;
  PLAINTEXT _pgen_tmp_150_424;
  PLAINTEXT _pgen_tmp_151_425;
  CIPHERTEXT _pgen_tmp_152_426;
  PLAINTEXT _pgen_tmp_153_427;
  CIPHERTEXT _pgen_tmp_154_428;
  PLAINTEXT _pgen_tmp_155_429;
  CIPHERTEXT _pgen_tmp_156_430;
  PLAINTEXT _pgen_tmp_157_431;
  CIPHERTEXT _pgen_tmp_158_432;
  CIPHERTEXT _pgen_tmp_159_433;
  PLAINTEXT _pgen_tmp_160_434;
  PLAINTEXT _pgen_tmp_161_435;
  CIPHERTEXT _pgen_tmp_162_436;
  PLAINTEXT _pgen_tmp_163_437;
  PLAINTEXT _pgen_tmp_164_438;
  CIPHERTEXT _pgen_tmp_165_439;
  PLAINTEXT _pgen_tmp_166_440;
  CIPHERTEXT _pgen_tmp_167_441;
  PLAINTEXT _pgen_tmp_168_442;
  CIPHERTEXT _pgen_tmp_169_443;
  PLAINTEXT _pgen_tmp_170_444;
  CIPHERTEXT _pgen_tmp_171_445;
  PLAINTEXT _pgen_tmp_172_446;
  CIPHERTEXT _pgen_tmp_173_447;
  PLAINTEXT _pgen_tmp_174_448;
  CIPHERTEXT _pgen_tmp_175_449;
  CIPHERTEXT _pgen_tmp_176_450;
  PLAINTEXT _pgen_tmp_177_451;
  CIPHERTEXT _pgen_tmp_178_452;
  PLAINTEXT _pgen_tmp_179_453;
  CIPHERTEXT _pgen_tmp_180_454;
  PLAINTEXT _pgen_tmp_181_455;
  CIPHERTEXT _pgen_tmp_182_456;
  CIPHERTEXT _pgen_tmp_183_457;
  CIPHERTEXT _pgen_tmp_184_458;
  CIPHERTEXT _pgen_tmp_185_459;
  PLAINTEXT _pgen_tmp_186_460;
  CIPHERTEXT _pgen_tmp_187_461;
  CIPHERTEXT _pgen_tmp_188_462;
  PLAINTEXT _pgen_tmp_189_463;
  CIPHERTEXT _pgen_tmp_190_464;
  PLAINTEXT _pgen_tmp_191_465;
  CIPHERTEXT _pgen_tmp_192_466;
  CIPHERTEXT _pgen_tmp_193_467;
  PLAINTEXT _pgen_tmp_194_468;
  CIPHERTEXT _pgen_tmp_195_469;
  CIPHERTEXT _pgen_tmp_196_470;
  PLAINTEXT _pgen_tmp_197_471;
  CIPHERTEXT _pgen_tmp_198_472;
  PLAINTEXT _pgen_tmp_199_473;
  PLAINTEXT _pgen_tmp_200_474;
  CIPHERTEXT _pgen_tmp_201_475;
  CIPHERTEXT _pgen_tmp_202_476;
  PLAINTEXT _pgen_tmp_203_477;
  CIPHERTEXT _pgen_tmp_204_478;
  PLAINTEXT _pgen_tmp_205_479;
  CIPHERTEXT _pgen_tmp_206_480;
  PLAINTEXT _pgen_tmp_207_481;
  CIPHERTEXT _pgen_tmp_208_482;
  PLAINTEXT _pgen_tmp_209_483;
  CIPHERTEXT _pgen_tmp_210_484;
  PLAINTEXT _pgen_tmp_211_485;
  PLAINTEXT _pgen_tmp_212_486;
  CIPHERTEXT _pgen_tmp_213_487;
  PLAINTEXT _pgen_tmp_214_488;
  CIPHERTEXT _pgen_tmp_215_489;
  PLAINTEXT _pgen_tmp_216_490;
  CIPHERTEXT _pgen_tmp_217_491;
  PLAINTEXT _pgen_tmp_218_492;
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
  CIPHERTEXT _preg_268435487;
  CIPHERTEXT _preg_268435488;
  CIPHERTEXT _preg_268435489;
  CIPHERTEXT _preg_268435490;
  CIPHERTEXT _preg_268435491;
  CIPHERTEXT _preg_268435492;
  CIPHERTEXT _preg_268435493;
  CIPHERTEXT _preg_268435494;
  CIPHERTEXT _preg_268435495;
  CIPHERTEXT _preg_268435496;
  CIPHERTEXT _preg_268435497;
  CIPHERTEXT _preg_268435498;
  CIPHERTEXT _preg_268435499;
  CIPHERTEXT _preg_268435500;
  CIPHERTEXT _preg_268435501;
  CIPHERTEXT _preg_268435502;
  CIPHERTEXT _preg_268435503;
  CIPHERTEXT _preg_268435504;
  CIPHERTEXT _preg_268435505;
  CIPHERTEXT _preg_268435506;
  CIPHERTEXT _preg_268435507;
  CIPHERTEXT _preg_268435508;
  CIPHERTEXT _preg_268435509;
  CIPHERTEXT _preg_268435510;
  CIPHERTEXT _preg_268435511;
  CIPHERTEXT _preg_268435512;
  CIPHERTEXT _preg_268435513;
  CIPHERTEXT _preg_268435514;
  CIPHERTEXT _preg_268435515;
  CIPHERTEXT _preg_268435516;
  CIPHERTEXT _preg_268435517;
  CIPHERTEXT _preg_268435518;
  CIPHERTEXT _preg_268435519;
  CIPHERTEXT _preg_268435520;
  CIPHERTEXT _preg_268435521;
  CIPHERTEXT _preg_268435522;
  CIPHERTEXT _preg_268435523;
  CIPHERTEXT _preg_268435524;
  CIPHERTEXT _preg_268435525;
  CIPHERTEXT _preg_268435526;
  CIPHERTEXT _preg_268435527;
  CIPHERTEXT _preg_268435528;
  CIPHERTEXT _preg_268435529;
  CIPHERTEXT _preg_268435530;
  CIPHERTEXT _preg_268435531;
  CIPHERTEXT _preg_268435532;
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
  CIPHERTEXT _preg_268435548;
  CIPHERTEXT _preg_268435549;
  CIPHERTEXT _preg_268435550;
  CIPHERTEXT _preg_268435551;
  CIPHERTEXT _preg_268435552;
  CIPHERTEXT _preg_268435553;
  CIPHERTEXT _preg_268435554;
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
  CIPHERTEXT _preg_268435568;
  CIPHERTEXT _preg_268435569;
  CIPHERTEXT _preg_268435570;
  CIPHERTEXT _preg_268435571;
  CIPHERTEXT _preg_268435572;
  CIPHERTEXT _preg_268435573;
  CIPHERTEXT _preg_268435574;
  CIPHERTEXT _preg_268435575;
  CIPHERTEXT _preg_268435576;
  CIPHERTEXT _preg_268435577;
  CIPHERTEXT _preg_268435578;
  CIPHERTEXT _preg_268435579;
  CIPHERTEXT _preg_268435580;
  CIPHERTEXT _preg_268435581;
  CIPHERTEXT _preg_268435582;
  CIPHERTEXT _preg_268435583;
  CIPHERTEXT _preg_268435584;
  CIPHERTEXT _preg_268435585;
  CIPHERTEXT _preg_268435586;
  CIPHERTEXT _preg_268435587;
  CIPHERTEXT _preg_268435588;
  CIPHERTEXT _preg_268435589;
  CIPHERTEXT _preg_268435590;
  CIPHERTEXT _preg_268435591;
  CIPHERTEXT _preg_268435592;
  CIPHERTEXT _preg_268435593;
  CIPHERTEXT _preg_268435594;
  CIPHERTEXT _preg_268435595;
  CIPHERTEXT _preg_268435596;
  CIPHERTEXT _preg_268435597;
  CIPHERTEXT _preg_268435598;
  CIPHERTEXT _preg_268435599;
  CIPHERTEXT _preg_268435600;
  CIPHERTEXT _preg_268435601;
  CIPHERTEXT _preg_268435602;
  CIPHERTEXT _preg_268435603;
  CIPHERTEXT _preg_268435604;
  CIPHERTEXT _preg_268435605;
  CIPHERTEXT _preg_268435606;
  CIPHERTEXT _preg_268435607;
  CIPHERTEXT _preg_268435608;
  CIPHERTEXT _preg_268435609;
  CIPHERTEXT _preg_268435610;
  CIPHERTEXT _preg_268435611;
  CIPHERTEXT _preg_268435612;
  CIPHERTEXT _preg_268435613;
  CIPHERTEXT _preg_268435614;
  CIPHERTEXT _preg_268435615;
  CIPHERTEXT _preg_268435616;
  CIPHERTEXT _preg_268435617;
  CIPHERTEXT _preg_268435618;
  CIPHERTEXT _preg_268435619;
  CIPHERTEXT _preg_268435620;
  CIPHERTEXT _preg_268435621;
  CIPHERTEXT _preg_268435622;
  CIPHERTEXT _preg_268435623;
  CIPHERTEXT _preg_268435624;
  CIPHERTEXT _preg_268435625;
  CIPHERTEXT _preg_268435626;
  CIPHERTEXT _preg_268435627;
  CIPHERTEXT _preg_268435628;
  CIPHERTEXT _preg_268435629;
  CIPHERTEXT _preg_268435630;
  CIPHERTEXT _preg_268435631;
  CIPHERTEXT _preg_268435632;
  CIPHERTEXT _preg_268435633;
  CIPHERTEXT _preg_268435634;
  CIPHERTEXT _preg_268435635;
  CIPHERTEXT _preg_268435636;
  CIPHERTEXT _preg_268435637;
  CIPHERTEXT _preg_268435638;
  CIPHERTEXT _preg_268435639;
  CIPHERTEXT _preg_268435640;
  CIPHERTEXT _preg_268435641;
  CIPHERTEXT _preg_268435642;
  CIPHERTEXT _preg_268435643;
  CIPHERTEXT _preg_268435644;
  CIPHERTEXT _preg_268435645;
  CIPHERTEXT _preg_268435646;
  CIPHERTEXT _preg_268435647;
  CIPHERTEXT _preg_268435648;
  CIPHERTEXT _preg_268435649;
  CIPHERTEXT _preg_268435650;
  CIPHERTEXT _preg_268435651;
  CIPHERTEXT _preg_268435652;
  CIPHERTEXT _preg_268435653;
  CIPHERTEXT _preg_268435654;
  CIPHERTEXT _preg_268435655;
  CIPHERTEXT _preg_268435656;
  CIPHERTEXT _preg_268435657;
  CIPHERTEXT _preg_268435658;
  CIPHERTEXT _preg_268435659;
  CIPHERTEXT _preg_268435660;
  CIPHERTEXT _preg_268435661;
  CIPHERTEXT _preg_268435662;
  CIPHERTEXT _preg_268435663;
  CIPHERTEXT _preg_268435664;
  CIPHERTEXT _preg_268435665;
  CIPHERTEXT _preg_268435666;
  CIPHERTEXT _preg_268435667;
  CIPHERTEXT _preg_268435668;
  CIPHERTEXT _preg_268435669;
  CIPHERTEXT _preg_268435670;
  CIPHERTEXT _preg_268435671;
  CIPHERTEXT _preg_268435672;
  CIPHERTEXT _preg_268435673;
  CIPHERTEXT _preg_268435674;
  CIPHERTEXT _preg_268435675;
  CIPHERTEXT _preg_268435676;
  CIPHERTEXT _preg_268435677;
  CIPHERTEXT _preg_268435678;
  CIPHERTEXT _preg_268435679;
  CIPHERTEXT _preg_268435680;
  CIPHERTEXT _preg_268435681;
  CIPHERTEXT _preg_268435682;
  CIPHERTEXT _preg_268435683;
  CIPHERTEXT _preg_268435684;
  CIPHERTEXT _preg_268435685;
  CIPHERTEXT _preg_268435686;
  CIPHERTEXT _preg_268435687;
  CIPHERTEXT _preg_268435688;
  CIPHERTEXT _preg_268435689;
  CIPHERTEXT _preg_268435690;
  CIPHERTEXT _preg_268435691;
  CIPHERTEXT _preg_268435692;
  CIPHERTEXT _preg_268435693;
  CIPHERTEXT _preg_268435694;
  CIPHERTEXT _preg_268435695;
  CIPHERTEXT _preg_268435696;
  CIPHERTEXT _preg_268435697;
  CIPHERTEXT _preg_268435698;
  CIPHERTEXT _preg_268435699;
  CIPHERTEXT _preg_268435700;
  CIPHERTEXT _preg_268435701;
  CIPHERTEXT _preg_268435702;
  CIPHERTEXT _preg_268435703;
  CIPHERTEXT _preg_268435704;
  CIPHERTEXT _preg_268435705;
  CIPHERTEXT _preg_268435706;
  CIPHERTEXT _preg_268435707;
  CIPHERTEXT _preg_268435708;
  CIPHERTEXT _preg_268435709;
  CIPHERTEXT _preg_268435710;
  CIPHERTEXT _preg_268435711;
  CIPHERTEXT _preg_268435712;
  CIPHERTEXT _preg_268435713;
  CIPHERTEXT _preg_268435714;
  CIPHERTEXT _preg_268435715;
  CIPHERTEXT _preg_268435716;
  CIPHERTEXT _preg_268435717;
  CIPHERTEXT _preg_268435718;
  CIPHERTEXT _preg_268435719;
  CIPHERTEXT _preg_268435720;
  CIPHERTEXT _preg_268435721;
  CIPHERTEXT _preg_268435722;
  CIPHERTEXT _preg_268435723;
  CIPHERTEXT _preg_268435724;
  CIPHERTEXT _preg_268435725;
  CIPHERTEXT _preg_268435726;
  CIPHERTEXT _preg_268435727;
  CIPHERTEXT _preg_268435728;
  CIPHERTEXT _preg_268435729;
  CIPHERTEXT _preg_268435730;
  CIPHERTEXT _preg_268435731;
  CIPHERTEXT _preg_268435732;
  CIPHERTEXT _preg_268435733;
  CIPHERTEXT _preg_268435734;
  CIPHERTEXT _preg_268435735;
  CIPHERTEXT _preg_268435736;
  CIPHERTEXT _preg_268435737;
  uint32_t  degree = Degree();
  input_0 = Get_input_data("input", 0);
  memset(&input_dup_n0_1, 0, sizeof(input_dup_n0_1));
  memset(&input_block_n0_3, 0, sizeof(input_block_n0_3));
  memset(&result_n1_4, 0, sizeof(result_n1_4));
  memset(&result_grid_n1_6, 0, sizeof(result_grid_n1_6));
  memset(&tmp_result_n2_8, 0, sizeof(tmp_result_n2_8));
  memset(&input_dup_n2_9, 0, sizeof(input_dup_n2_9));
  memset(&input_dup_n2_12, 0, sizeof(input_dup_n2_12));
  memset(&input_block_n2_14, 0, sizeof(input_block_n2_14));
  memset(&result_n3_15, 0, sizeof(result_n3_15));
  memset(&result_grid_n3_17, 0, sizeof(result_grid_n3_17));
  memset(&input_dup_n3_19, 0, sizeof(input_dup_n3_19));
  memset(&input_block_n3_21, 0, sizeof(input_block_n3_21));
  memset(&result_n4_22, 0, sizeof(result_n4_22));
  memset(&result_grid_n4_24, 0, sizeof(result_grid_n4_24));
  memset(&tmp_result_n5_26, 0, sizeof(tmp_result_n5_26));
  memset(&input_dup_n5_27, 0, sizeof(input_dup_n5_27));
  memset(&input_dup_n5_30, 0, sizeof(input_dup_n5_30));
  memset(&input_block_n5_32, 0, sizeof(input_block_n5_32));
  memset(&result_n6_33, 0, sizeof(result_n6_33));
  memset(&result_grid_n6_35, 0, sizeof(result_grid_n6_35));
  memset(&input_dup_n6_37, 0, sizeof(input_dup_n6_37));
  memset(&input_block_n6_39, 0, sizeof(input_block_n6_39));
  memset(&result_n7_40, 0, sizeof(result_n7_40));
  memset(&result_grid_n7_42, 0, sizeof(result_grid_n7_42));
  memset(&input_dup_n7_44, 0, sizeof(input_dup_n7_44));
  memset(&input_block_n7_46, 0, sizeof(input_block_n7_46));
  memset(&result_n8_47, 0, sizeof(result_n8_47));
  memset(&result_grid_n8_49, 0, sizeof(result_grid_n8_49));
  memset(&input_dup_n8_51, 0, sizeof(input_dup_n8_51));
  memset(&input_block_n8_53, 0, sizeof(input_block_n8_53));
  memset(&result_n9_54, 0, sizeof(result_n9_54));
  memset(&result_grid_n9_56, 0, sizeof(result_grid_n9_56));
  memset(&tmp_row_add9_58, 0, sizeof(tmp_row_add9_58));
  memset(&orig_result9_59, 0, sizeof(orig_result9_59));
  memset(&comb_row_result10_60, 0, sizeof(comb_row_result10_60));
  memset(&comb_rc_result10_62, 0, sizeof(comb_rc_result10_62));
  memset(&ss_result10_64, 0, sizeof(ss_result10_64));
  memset(&input_dup_n10_66, 0, sizeof(input_dup_n10_66));
  memset(&input_block_n10_68, 0, sizeof(input_block_n10_68));
  memset(&result_n11_69, 0, sizeof(result_n11_69));
  memset(&result_grid_n11_71, 0, sizeof(result_grid_n11_71));
  memset(&tmp_row_add11_73, 0, sizeof(tmp_row_add11_73));
  memset(&orig_result11_74, 0, sizeof(orig_result11_74));
  memset(&comb_row_result12_75, 0, sizeof(comb_row_result12_75));
  memset(&comb_rc_result12_77, 0, sizeof(comb_rc_result12_77));
  memset(&ss_result12_79, 0, sizeof(ss_result12_79));
  memset(&tmp_result_n13_81, 0, sizeof(tmp_result_n13_81));
  memset(&input_dup_n13_82, 0, sizeof(input_dup_n13_82));
  memset(&input_dup_n13_85, 0, sizeof(input_dup_n13_85));
  memset(&input_block_n13_87, 0, sizeof(input_block_n13_87));
  memset(&result_n14_88, 0, sizeof(result_n14_88));
  memset(&result_grid_n14_90, 0, sizeof(result_grid_n14_90));
  memset(&input_dup_n14_92, 0, sizeof(input_dup_n14_92));
  memset(&input_block_n14_94, 0, sizeof(input_block_n14_94));
  memset(&result_n15_95, 0, sizeof(result_n15_95));
  memset(&result_grid_n15_97, 0, sizeof(result_grid_n15_97));
  memset(&tmp_result_n16_99, 0, sizeof(tmp_result_n16_99));
  memset(&input_dup_n16_100, 0, sizeof(input_dup_n16_100));
  memset(&input_dup_n16_103, 0, sizeof(input_dup_n16_103));
  memset(&input_block_n16_105, 0, sizeof(input_block_n16_105));
  memset(&result_n17_106, 0, sizeof(result_n17_106));
  memset(&result_grid_n17_108, 0, sizeof(result_grid_n17_108));
  memset(&input_dup_n17_110, 0, sizeof(input_dup_n17_110));
  memset(&input_block_n17_112, 0, sizeof(input_block_n17_112));
  memset(&result_n18_113, 0, sizeof(result_n18_113));
  memset(&result_grid_n18_115, 0, sizeof(result_grid_n18_115));
  memset(&tmp_result_n19_117, 0, sizeof(tmp_result_n19_117));
  memset(&input_dup_n19_118, 0, sizeof(input_dup_n19_118));
  memset(&input_dup_n19_121, 0, sizeof(input_dup_n19_121));
  memset(&input_block_n19_123, 0, sizeof(input_block_n19_123));
  memset(&result_n20_124, 0, sizeof(result_n20_124));
  memset(&result_grid_n20_126, 0, sizeof(result_grid_n20_126));
  memset(&input_dup_n20_128, 0, sizeof(input_dup_n20_128));
  memset(&input_block_n20_130, 0, sizeof(input_block_n20_130));
  memset(&result_n21_131, 0, sizeof(result_n21_131));
  memset(&result_grid_n21_133, 0, sizeof(result_grid_n21_133));
  memset(&tmp_result_n22_135, 0, sizeof(tmp_result_n22_135));
  memset(&input_dup_n22_136, 0, sizeof(input_dup_n22_136));
  memset(&input_dup_n22_139, 0, sizeof(input_dup_n22_139));
  memset(&input_block_n22_141, 0, sizeof(input_block_n22_141));
  memset(&result_n23_142, 0, sizeof(result_n23_142));
  memset(&result_grid_n23_144, 0, sizeof(result_grid_n23_144));
  memset(&tmp_row_add23_146, 0, sizeof(tmp_row_add23_146));
  memset(&orig_result23_147, 0, sizeof(orig_result23_147));
  memset(&comb_row_result24_148, 0, sizeof(comb_row_result24_148));
  memset(&comb_rc_result24_150, 0, sizeof(comb_rc_result24_150));
  memset(&ss_result24_152, 0, sizeof(ss_result24_152));
  memset(&input_dup_n24_154, 0, sizeof(input_dup_n24_154));
  memset(&input_block_n24_156, 0, sizeof(input_block_n24_156));
  memset(&result_n25_157, 0, sizeof(result_n25_157));
  memset(&result_grid_n25_159, 0, sizeof(result_grid_n25_159));
  memset(&tmp_row_add25_161, 0, sizeof(tmp_row_add25_161));
  memset(&orig_result25_162, 0, sizeof(orig_result25_162));
  memset(&comb_row_result26_163, 0, sizeof(comb_row_result26_163));
  memset(&comb_rc_result26_165, 0, sizeof(comb_rc_result26_165));
  memset(&ss_result26_167, 0, sizeof(ss_result26_167));
  memset(&tmp_result_n27_169, 0, sizeof(tmp_result_n27_169));
  memset(&input_dup_n27_170, 0, sizeof(input_dup_n27_170));
  memset(&input_dup_n27_173, 0, sizeof(input_dup_n27_173));
  memset(&input_block_n27_175, 0, sizeof(input_block_n27_175));
  memset(&result_n28_176, 0, sizeof(result_n28_176));
  memset(&result_grid_n28_178, 0, sizeof(result_grid_n28_178));
  memset(&input_dup_n28_180, 0, sizeof(input_dup_n28_180));
  memset(&input_block_n28_182, 0, sizeof(input_block_n28_182));
  memset(&result_n29_183, 0, sizeof(result_n29_183));
  memset(&result_grid_n29_185, 0, sizeof(result_grid_n29_185));
  memset(&input_dup_n29_189, 0, sizeof(input_dup_n29_189));
  memset(&input_block_n29_191, 0, sizeof(input_block_n29_191));
  memset(&result_n30_192, 0, sizeof(result_n30_192));
  memset(&result_grid_n30_194, 0, sizeof(result_grid_n30_194));
  memset(&gap_result30_197, 0, sizeof(gap_result30_197));
  memset(&orig_result30_198, 0, sizeof(orig_result30_198));
  memset(&ss_result31_199, 0, sizeof(ss_result31_199));
  memset(&input_dup_n31_202, 0, sizeof(input_dup_n31_202));
  memset(&input_block_n31_204, 0, sizeof(input_block_n31_204));
  memset(&gemm_result_n32_205, 0, sizeof(gemm_result_n32_205));
  memset(&block_result_207, 0, sizeof(block_result_207));
  memset(&reduce_intra_209, 0, sizeof(reduce_intra_209));
  memset(&output_211, 0, sizeof(output_211));
  memset(&_ckks_gen_tmp_89_212, 0, sizeof(_ckks_gen_tmp_89_212));
  memset(&_ckks_gen_tmp_201_213, 0, sizeof(_ckks_gen_tmp_201_213));
  memset(&_ckks_gen_tmp_315_214, 0, sizeof(_ckks_gen_tmp_315_214));
  memset(&_ckks_gen_tmp_359_215, 0, sizeof(_ckks_gen_tmp_359_215));
  memset(&_ckks_gen_tmp_444_216, 0, sizeof(_ckks_gen_tmp_444_216));
  memset(&_ckks_gen_tmp_488_217, 0, sizeof(_ckks_gen_tmp_488_217));
  memset(&_ckks_gen_tmp_587_218, 0, sizeof(_ckks_gen_tmp_587_218));
  memset(&_ckks_gen_tmp_701_219, 0, sizeof(_ckks_gen_tmp_701_219));
  memset(&_ckks_gen_tmp_745_220, 0, sizeof(_ckks_gen_tmp_745_220));
  memset(&_ckks_gen_tmp_830_221, 0, sizeof(_ckks_gen_tmp_830_221));
  memset(&_ckks_gen_tmp_874_222, 0, sizeof(_ckks_gen_tmp_874_222));
  memset(&_ckks_gen_tmp_996_223, 0, sizeof(_ckks_gen_tmp_996_223));
  memset(&_ckks_gen_tmp_1131_224, 0, sizeof(_ckks_gen_tmp_1131_224));
  memset(&_ckks_gen_tmp_1205_225, 0, sizeof(_ckks_gen_tmp_1205_225));
  memset(&_ckks_gen_tmp_1236_226, 0, sizeof(_ckks_gen_tmp_1236_226));
  memset(&_ckks_gen_tmp_1269_227, 0, sizeof(_ckks_gen_tmp_1269_227));
  memset(&_ckks_gen_tmp_1302_228, 0, sizeof(_ckks_gen_tmp_1302_228));
  memset(&_ckks_gen_tmp_1380_229, 0, sizeof(_ckks_gen_tmp_1380_229));
  memset(&_ckks_gen_tmp_1454_230, 0, sizeof(_ckks_gen_tmp_1454_230));
  memset(&_ckks_gen_tmp_1485_231, 0, sizeof(_ckks_gen_tmp_1485_231));
  memset(&_ckks_gen_tmp_1518_232, 0, sizeof(_ckks_gen_tmp_1518_232));
  memset(&_ckks_gen_tmp_1551_233, 0, sizeof(_ckks_gen_tmp_1551_233));
  memset(&_ckks_gen_tmp_1647_234, 0, sizeof(_ckks_gen_tmp_1647_234));
  memset(&_ckks_gen_tmp_1769_235, 0, sizeof(_ckks_gen_tmp_1769_235));
  memset(&_ckks_gen_tmp_1813_236, 0, sizeof(_ckks_gen_tmp_1813_236));
  memset(&_ckks_gen_tmp_1902_237, 0, sizeof(_ckks_gen_tmp_1902_237));
  memset(&_ckks_gen_tmp_1946_238, 0, sizeof(_ckks_gen_tmp_1946_238));
  memset(&_ckks_gen_tmp_2045_239, 0, sizeof(_ckks_gen_tmp_2045_239));
  memset(&_ckks_gen_tmp_2167_240, 0, sizeof(_ckks_gen_tmp_2167_240));
  memset(&_ckks_gen_tmp_2211_241, 0, sizeof(_ckks_gen_tmp_2211_241));
  memset(&_ckks_gen_tmp_2300_242, 0, sizeof(_ckks_gen_tmp_2300_242));
  memset(&_ckks_gen_tmp_2344_243, 0, sizeof(_ckks_gen_tmp_2344_243));
  memset(&_ckks_gen_tmp_2443_244, 0, sizeof(_ckks_gen_tmp_2443_244));
  memset(&_ckks_gen_tmp_2565_245, 0, sizeof(_ckks_gen_tmp_2565_245));
  memset(&_ckks_gen_tmp_2609_246, 0, sizeof(_ckks_gen_tmp_2609_246));
  memset(&_ckks_gen_tmp_2698_247, 0, sizeof(_ckks_gen_tmp_2698_247));
  memset(&_ckks_gen_tmp_2742_248, 0, sizeof(_ckks_gen_tmp_2742_248));
  memset(&_ckks_gen_tmp_2841_249, 0, sizeof(_ckks_gen_tmp_2841_249));
  memset(&_ckks_gen_tmp_2963_250, 0, sizeof(_ckks_gen_tmp_2963_250));
  memset(&_ckks_gen_tmp_3037_251, 0, sizeof(_ckks_gen_tmp_3037_251));
  memset(&_ckks_gen_tmp_3068_252, 0, sizeof(_ckks_gen_tmp_3068_252));
  memset(&_ckks_gen_tmp_3101_253, 0, sizeof(_ckks_gen_tmp_3101_253));
  memset(&_ckks_gen_tmp_3134_254, 0, sizeof(_ckks_gen_tmp_3134_254));
  memset(&_ckks_gen_tmp_3216_255, 0, sizeof(_ckks_gen_tmp_3216_255));
  memset(&_ckks_gen_tmp_3290_256, 0, sizeof(_ckks_gen_tmp_3290_256));
  memset(&_ckks_gen_tmp_3321_257, 0, sizeof(_ckks_gen_tmp_3321_257));
  memset(&_ckks_gen_tmp_3354_258, 0, sizeof(_ckks_gen_tmp_3354_258));
  memset(&_ckks_gen_tmp_3387_259, 0, sizeof(_ckks_gen_tmp_3387_259));
  memset(&_ckks_gen_tmp_3483_260, 0, sizeof(_ckks_gen_tmp_3483_260));
  memset(&_ckks_gen_tmp_3605_261, 0, sizeof(_ckks_gen_tmp_3605_261));
  memset(&_ckks_gen_tmp_3649_262, 0, sizeof(_ckks_gen_tmp_3649_262));
  memset(&_ckks_gen_tmp_3754_263, 0, sizeof(_ckks_gen_tmp_3754_263));
  memset(&_ckks_gen_tmp_3810_264, 0, sizeof(_ckks_gen_tmp_3810_264));
  memset(&_ckks_gen_tmp_3840_265, 0, sizeof(_ckks_gen_tmp_3840_265));
  memset(&_ckks_gen_tmp_3856_266, 0, sizeof(_ckks_gen_tmp_3856_266));
  memset(&_ckks_gen_tmp_3978_267, 0, sizeof(_ckks_gen_tmp_3978_267));
  memset(&_ckks_gen_tmp_4022_268, 0, sizeof(_ckks_gen_tmp_4022_268));
  memset(&_ckks_gen_tmp_4149_269, 0, sizeof(_ckks_gen_tmp_4149_269));
  memset(&_ckks_gen_tmp_4241_270, 0, sizeof(_ckks_gen_tmp_4241_270));
  memset(&_pgen_tmp_0_274, 0, sizeof(_pgen_tmp_0_274));
  memset(&_pgen_tmp_1_275, 0, sizeof(_pgen_tmp_1_275));
  memset(&_pgen_tmp_2_276, 0, sizeof(_pgen_tmp_2_276));
  memset(&_pgen_tmp_3_277, 0, sizeof(_pgen_tmp_3_277));
  memset(&_pgen_tmp_4_278, 0, sizeof(_pgen_tmp_4_278));
  memset(&_pgen_tmp_5_279, 0, sizeof(_pgen_tmp_5_279));
  memset(&_pgen_tmp_6_280, 0, sizeof(_pgen_tmp_6_280));
  memset(&_pgen_tmp_7_281, 0, sizeof(_pgen_tmp_7_281));
  memset(&_pgen_tmp_8_282, 0, sizeof(_pgen_tmp_8_282));
  memset(&_pgen_tmp_9_283, 0, sizeof(_pgen_tmp_9_283));
  memset(&_pgen_tmp_10_284, 0, sizeof(_pgen_tmp_10_284));
  memset(&_pgen_tmp_11_285, 0, sizeof(_pgen_tmp_11_285));
  memset(&_pgen_tmp_12_286, 0, sizeof(_pgen_tmp_12_286));
  memset(&_pgen_tmp_13_287, 0, sizeof(_pgen_tmp_13_287));
  memset(&_pgen_tmp_14_288, 0, sizeof(_pgen_tmp_14_288));
  memset(&_pgen_tmp_15_289, 0, sizeof(_pgen_tmp_15_289));
  memset(&_pgen_tmp_16_290, 0, sizeof(_pgen_tmp_16_290));
  memset(&_pgen_tmp_17_291, 0, sizeof(_pgen_tmp_17_291));
  memset(&_pgen_tmp_18_292, 0, sizeof(_pgen_tmp_18_292));
  memset(&_pgen_tmp_19_293, 0, sizeof(_pgen_tmp_19_293));
  memset(&_pgen_tmp_20_294, 0, sizeof(_pgen_tmp_20_294));
  memset(&_pgen_tmp_21_295, 0, sizeof(_pgen_tmp_21_295));
  memset(&_pgen_tmp_22_296, 0, sizeof(_pgen_tmp_22_296));
  memset(&_pgen_tmp_23_297, 0, sizeof(_pgen_tmp_23_297));
  memset(&_pgen_tmp_24_298, 0, sizeof(_pgen_tmp_24_298));
  memset(&_pgen_tmp_25_299, 0, sizeof(_pgen_tmp_25_299));
  memset(&_pgen_tmp_26_300, 0, sizeof(_pgen_tmp_26_300));
  memset(&_pgen_tmp_27_301, 0, sizeof(_pgen_tmp_27_301));
  memset(&_pgen_tmp_28_302, 0, sizeof(_pgen_tmp_28_302));
  memset(&_pgen_tmp_29_303, 0, sizeof(_pgen_tmp_29_303));
  memset(&_pgen_tmp_30_304, 0, sizeof(_pgen_tmp_30_304));
  memset(&_pgen_tmp_31_305, 0, sizeof(_pgen_tmp_31_305));
  memset(&_pgen_tmp_32_306, 0, sizeof(_pgen_tmp_32_306));
  memset(&_pgen_tmp_33_307, 0, sizeof(_pgen_tmp_33_307));
  memset(&_pgen_tmp_34_308, 0, sizeof(_pgen_tmp_34_308));
  memset(&_pgen_tmp_35_309, 0, sizeof(_pgen_tmp_35_309));
  memset(&_pgen_tmp_36_310, 0, sizeof(_pgen_tmp_36_310));
  memset(&_pgen_tmp_37_311, 0, sizeof(_pgen_tmp_37_311));
  memset(&_pgen_tmp_38_312, 0, sizeof(_pgen_tmp_38_312));
  memset(&_pgen_tmp_39_313, 0, sizeof(_pgen_tmp_39_313));
  memset(&_pgen_tmp_40_314, 0, sizeof(_pgen_tmp_40_314));
  memset(&_pgen_tmp_41_315, 0, sizeof(_pgen_tmp_41_315));
  memset(&_pgen_tmp_42_316, 0, sizeof(_pgen_tmp_42_316));
  memset(&_pgen_tmp_43_317, 0, sizeof(_pgen_tmp_43_317));
  memset(&_pgen_tmp_44_318, 0, sizeof(_pgen_tmp_44_318));
  memset(&_pgen_tmp_45_319, 0, sizeof(_pgen_tmp_45_319));
  memset(&_pgen_tmp_46_320, 0, sizeof(_pgen_tmp_46_320));
  memset(&_pgen_tmp_47_321, 0, sizeof(_pgen_tmp_47_321));
  memset(&_pgen_tmp_48_322, 0, sizeof(_pgen_tmp_48_322));
  memset(&_pgen_tmp_49_323, 0, sizeof(_pgen_tmp_49_323));
  memset(&_pgen_tmp_50_324, 0, sizeof(_pgen_tmp_50_324));
  memset(&_pgen_tmp_51_325, 0, sizeof(_pgen_tmp_51_325));
  memset(&_pgen_tmp_52_326, 0, sizeof(_pgen_tmp_52_326));
  memset(&_pgen_tmp_53_327, 0, sizeof(_pgen_tmp_53_327));
  memset(&_pgen_tmp_54_328, 0, sizeof(_pgen_tmp_54_328));
  memset(&_pgen_tmp_55_329, 0, sizeof(_pgen_tmp_55_329));
  memset(&_pgen_tmp_56_330, 0, sizeof(_pgen_tmp_56_330));
  memset(&_pgen_tmp_57_331, 0, sizeof(_pgen_tmp_57_331));
  memset(&_pgen_tmp_58_332, 0, sizeof(_pgen_tmp_58_332));
  memset(&_pgen_tmp_59_333, 0, sizeof(_pgen_tmp_59_333));
  memset(&_pgen_tmp_60_334, 0, sizeof(_pgen_tmp_60_334));
  memset(&_pgen_tmp_61_335, 0, sizeof(_pgen_tmp_61_335));
  memset(&_pgen_tmp_62_336, 0, sizeof(_pgen_tmp_62_336));
  memset(&_pgen_tmp_63_337, 0, sizeof(_pgen_tmp_63_337));
  memset(&_pgen_tmp_64_338, 0, sizeof(_pgen_tmp_64_338));
  memset(&_pgen_tmp_65_339, 0, sizeof(_pgen_tmp_65_339));
  memset(&_pgen_tmp_66_340, 0, sizeof(_pgen_tmp_66_340));
  memset(&_pgen_tmp_67_341, 0, sizeof(_pgen_tmp_67_341));
  memset(&_pgen_tmp_68_342, 0, sizeof(_pgen_tmp_68_342));
  memset(&_pgen_tmp_69_343, 0, sizeof(_pgen_tmp_69_343));
  memset(&_pgen_tmp_70_344, 0, sizeof(_pgen_tmp_70_344));
  memset(&_pgen_tmp_71_345, 0, sizeof(_pgen_tmp_71_345));
  memset(&_pgen_tmp_72_346, 0, sizeof(_pgen_tmp_72_346));
  memset(&_pgen_tmp_73_347, 0, sizeof(_pgen_tmp_73_347));
  memset(&_pgen_tmp_74_348, 0, sizeof(_pgen_tmp_74_348));
  memset(&_pgen_tmp_75_349, 0, sizeof(_pgen_tmp_75_349));
  memset(&_pgen_tmp_76_350, 0, sizeof(_pgen_tmp_76_350));
  memset(&_pgen_tmp_77_351, 0, sizeof(_pgen_tmp_77_351));
  memset(&_pgen_tmp_78_352, 0, sizeof(_pgen_tmp_78_352));
  memset(&_pgen_tmp_79_353, 0, sizeof(_pgen_tmp_79_353));
  memset(&_pgen_tmp_80_354, 0, sizeof(_pgen_tmp_80_354));
  memset(&_pgen_tmp_81_355, 0, sizeof(_pgen_tmp_81_355));
  memset(&_pgen_tmp_82_356, 0, sizeof(_pgen_tmp_82_356));
  memset(&_pgen_tmp_83_357, 0, sizeof(_pgen_tmp_83_357));
  memset(&_pgen_tmp_84_358, 0, sizeof(_pgen_tmp_84_358));
  memset(&_pgen_tmp_85_359, 0, sizeof(_pgen_tmp_85_359));
  memset(&_pgen_tmp_86_360, 0, sizeof(_pgen_tmp_86_360));
  memset(&_pgen_tmp_87_361, 0, sizeof(_pgen_tmp_87_361));
  memset(&_pgen_tmp_88_362, 0, sizeof(_pgen_tmp_88_362));
  memset(&_pgen_tmp_89_363, 0, sizeof(_pgen_tmp_89_363));
  memset(&_pgen_tmp_90_364, 0, sizeof(_pgen_tmp_90_364));
  memset(&_pgen_tmp_91_365, 0, sizeof(_pgen_tmp_91_365));
  memset(&_pgen_tmp_92_366, 0, sizeof(_pgen_tmp_92_366));
  memset(&_pgen_tmp_93_367, 0, sizeof(_pgen_tmp_93_367));
  memset(&_pgen_tmp_94_368, 0, sizeof(_pgen_tmp_94_368));
  memset(&_pgen_tmp_95_369, 0, sizeof(_pgen_tmp_95_369));
  memset(&_pgen_tmp_96_370, 0, sizeof(_pgen_tmp_96_370));
  memset(&_pgen_tmp_97_371, 0, sizeof(_pgen_tmp_97_371));
  memset(&_pgen_tmp_98_372, 0, sizeof(_pgen_tmp_98_372));
  memset(&_pgen_tmp_99_373, 0, sizeof(_pgen_tmp_99_373));
  memset(&_pgen_tmp_100_374, 0, sizeof(_pgen_tmp_100_374));
  memset(&_pgen_tmp_101_375, 0, sizeof(_pgen_tmp_101_375));
  memset(&_pgen_tmp_102_376, 0, sizeof(_pgen_tmp_102_376));
  memset(&_pgen_tmp_103_377, 0, sizeof(_pgen_tmp_103_377));
  memset(&_pgen_tmp_104_378, 0, sizeof(_pgen_tmp_104_378));
  memset(&_pgen_tmp_105_379, 0, sizeof(_pgen_tmp_105_379));
  memset(&_pgen_tmp_106_380, 0, sizeof(_pgen_tmp_106_380));
  memset(&_pgen_tmp_107_381, 0, sizeof(_pgen_tmp_107_381));
  memset(&_pgen_tmp_108_382, 0, sizeof(_pgen_tmp_108_382));
  memset(&_pgen_tmp_109_383, 0, sizeof(_pgen_tmp_109_383));
  memset(&_pgen_tmp_110_384, 0, sizeof(_pgen_tmp_110_384));
  memset(&_pgen_tmp_111_385, 0, sizeof(_pgen_tmp_111_385));
  memset(&_pgen_tmp_112_386, 0, sizeof(_pgen_tmp_112_386));
  memset(&_pgen_tmp_113_387, 0, sizeof(_pgen_tmp_113_387));
  memset(&_pgen_tmp_114_388, 0, sizeof(_pgen_tmp_114_388));
  memset(&_pgen_tmp_115_389, 0, sizeof(_pgen_tmp_115_389));
  memset(&_pgen_tmp_116_390, 0, sizeof(_pgen_tmp_116_390));
  memset(&_pgen_tmp_117_391, 0, sizeof(_pgen_tmp_117_391));
  memset(&_pgen_tmp_118_392, 0, sizeof(_pgen_tmp_118_392));
  memset(&_pgen_tmp_119_393, 0, sizeof(_pgen_tmp_119_393));
  memset(&_pgen_tmp_120_394, 0, sizeof(_pgen_tmp_120_394));
  memset(&_pgen_tmp_121_395, 0, sizeof(_pgen_tmp_121_395));
  memset(&_pgen_tmp_122_396, 0, sizeof(_pgen_tmp_122_396));
  memset(&_pgen_tmp_123_397, 0, sizeof(_pgen_tmp_123_397));
  memset(&_pgen_tmp_124_398, 0, sizeof(_pgen_tmp_124_398));
  memset(&_pgen_tmp_125_399, 0, sizeof(_pgen_tmp_125_399));
  memset(&_pgen_tmp_126_400, 0, sizeof(_pgen_tmp_126_400));
  memset(&_pgen_tmp_127_401, 0, sizeof(_pgen_tmp_127_401));
  memset(&_pgen_tmp_128_402, 0, sizeof(_pgen_tmp_128_402));
  memset(&_pgen_tmp_129_403, 0, sizeof(_pgen_tmp_129_403));
  memset(&_pgen_tmp_130_404, 0, sizeof(_pgen_tmp_130_404));
  memset(&_pgen_tmp_131_405, 0, sizeof(_pgen_tmp_131_405));
  memset(&_pgen_tmp_132_406, 0, sizeof(_pgen_tmp_132_406));
  memset(&_pgen_tmp_133_407, 0, sizeof(_pgen_tmp_133_407));
  memset(&_pgen_tmp_134_408, 0, sizeof(_pgen_tmp_134_408));
  memset(&_pgen_tmp_135_409, 0, sizeof(_pgen_tmp_135_409));
  memset(&_pgen_tmp_136_410, 0, sizeof(_pgen_tmp_136_410));
  memset(&_pgen_tmp_137_411, 0, sizeof(_pgen_tmp_137_411));
  memset(&_pgen_tmp_138_412, 0, sizeof(_pgen_tmp_138_412));
  memset(&_pgen_tmp_139_413, 0, sizeof(_pgen_tmp_139_413));
  memset(&_pgen_tmp_140_414, 0, sizeof(_pgen_tmp_140_414));
  memset(&_pgen_tmp_141_415, 0, sizeof(_pgen_tmp_141_415));
  memset(&_pgen_tmp_142_416, 0, sizeof(_pgen_tmp_142_416));
  memset(&_pgen_tmp_143_417, 0, sizeof(_pgen_tmp_143_417));
  memset(&_pgen_tmp_144_418, 0, sizeof(_pgen_tmp_144_418));
  memset(&_pgen_tmp_145_419, 0, sizeof(_pgen_tmp_145_419));
  memset(&_pgen_tmp_146_420, 0, sizeof(_pgen_tmp_146_420));
  memset(&_pgen_tmp_147_421, 0, sizeof(_pgen_tmp_147_421));
  memset(&_pgen_tmp_148_422, 0, sizeof(_pgen_tmp_148_422));
  memset(&_pgen_tmp_149_423, 0, sizeof(_pgen_tmp_149_423));
  memset(&_pgen_tmp_150_424, 0, sizeof(_pgen_tmp_150_424));
  memset(&_pgen_tmp_151_425, 0, sizeof(_pgen_tmp_151_425));
  memset(&_pgen_tmp_152_426, 0, sizeof(_pgen_tmp_152_426));
  memset(&_pgen_tmp_153_427, 0, sizeof(_pgen_tmp_153_427));
  memset(&_pgen_tmp_154_428, 0, sizeof(_pgen_tmp_154_428));
  memset(&_pgen_tmp_155_429, 0, sizeof(_pgen_tmp_155_429));
  memset(&_pgen_tmp_156_430, 0, sizeof(_pgen_tmp_156_430));
  memset(&_pgen_tmp_157_431, 0, sizeof(_pgen_tmp_157_431));
  memset(&_pgen_tmp_158_432, 0, sizeof(_pgen_tmp_158_432));
  memset(&_pgen_tmp_159_433, 0, sizeof(_pgen_tmp_159_433));
  memset(&_pgen_tmp_160_434, 0, sizeof(_pgen_tmp_160_434));
  memset(&_pgen_tmp_161_435, 0, sizeof(_pgen_tmp_161_435));
  memset(&_pgen_tmp_162_436, 0, sizeof(_pgen_tmp_162_436));
  memset(&_pgen_tmp_163_437, 0, sizeof(_pgen_tmp_163_437));
  memset(&_pgen_tmp_164_438, 0, sizeof(_pgen_tmp_164_438));
  memset(&_pgen_tmp_165_439, 0, sizeof(_pgen_tmp_165_439));
  memset(&_pgen_tmp_166_440, 0, sizeof(_pgen_tmp_166_440));
  memset(&_pgen_tmp_167_441, 0, sizeof(_pgen_tmp_167_441));
  memset(&_pgen_tmp_168_442, 0, sizeof(_pgen_tmp_168_442));
  memset(&_pgen_tmp_169_443, 0, sizeof(_pgen_tmp_169_443));
  memset(&_pgen_tmp_170_444, 0, sizeof(_pgen_tmp_170_444));
  memset(&_pgen_tmp_171_445, 0, sizeof(_pgen_tmp_171_445));
  memset(&_pgen_tmp_172_446, 0, sizeof(_pgen_tmp_172_446));
  memset(&_pgen_tmp_173_447, 0, sizeof(_pgen_tmp_173_447));
  memset(&_pgen_tmp_174_448, 0, sizeof(_pgen_tmp_174_448));
  memset(&_pgen_tmp_175_449, 0, sizeof(_pgen_tmp_175_449));
  memset(&_pgen_tmp_176_450, 0, sizeof(_pgen_tmp_176_450));
  memset(&_pgen_tmp_177_451, 0, sizeof(_pgen_tmp_177_451));
  memset(&_pgen_tmp_178_452, 0, sizeof(_pgen_tmp_178_452));
  memset(&_pgen_tmp_179_453, 0, sizeof(_pgen_tmp_179_453));
  memset(&_pgen_tmp_180_454, 0, sizeof(_pgen_tmp_180_454));
  memset(&_pgen_tmp_181_455, 0, sizeof(_pgen_tmp_181_455));
  memset(&_pgen_tmp_182_456, 0, sizeof(_pgen_tmp_182_456));
  memset(&_pgen_tmp_183_457, 0, sizeof(_pgen_tmp_183_457));
  memset(&_pgen_tmp_184_458, 0, sizeof(_pgen_tmp_184_458));
  memset(&_pgen_tmp_185_459, 0, sizeof(_pgen_tmp_185_459));
  memset(&_pgen_tmp_186_460, 0, sizeof(_pgen_tmp_186_460));
  memset(&_pgen_tmp_187_461, 0, sizeof(_pgen_tmp_187_461));
  memset(&_pgen_tmp_188_462, 0, sizeof(_pgen_tmp_188_462));
  memset(&_pgen_tmp_189_463, 0, sizeof(_pgen_tmp_189_463));
  memset(&_pgen_tmp_190_464, 0, sizeof(_pgen_tmp_190_464));
  memset(&_pgen_tmp_191_465, 0, sizeof(_pgen_tmp_191_465));
  memset(&_pgen_tmp_192_466, 0, sizeof(_pgen_tmp_192_466));
  memset(&_pgen_tmp_193_467, 0, sizeof(_pgen_tmp_193_467));
  memset(&_pgen_tmp_194_468, 0, sizeof(_pgen_tmp_194_468));
  memset(&_pgen_tmp_195_469, 0, sizeof(_pgen_tmp_195_469));
  memset(&_pgen_tmp_196_470, 0, sizeof(_pgen_tmp_196_470));
  memset(&_pgen_tmp_197_471, 0, sizeof(_pgen_tmp_197_471));
  memset(&_pgen_tmp_198_472, 0, sizeof(_pgen_tmp_198_472));
  memset(&_pgen_tmp_199_473, 0, sizeof(_pgen_tmp_199_473));
  memset(&_pgen_tmp_200_474, 0, sizeof(_pgen_tmp_200_474));
  memset(&_pgen_tmp_201_475, 0, sizeof(_pgen_tmp_201_475));
  memset(&_pgen_tmp_202_476, 0, sizeof(_pgen_tmp_202_476));
  memset(&_pgen_tmp_203_477, 0, sizeof(_pgen_tmp_203_477));
  memset(&_pgen_tmp_204_478, 0, sizeof(_pgen_tmp_204_478));
  memset(&_pgen_tmp_205_479, 0, sizeof(_pgen_tmp_205_479));
  memset(&_pgen_tmp_206_480, 0, sizeof(_pgen_tmp_206_480));
  memset(&_pgen_tmp_207_481, 0, sizeof(_pgen_tmp_207_481));
  memset(&_pgen_tmp_208_482, 0, sizeof(_pgen_tmp_208_482));
  memset(&_pgen_tmp_209_483, 0, sizeof(_pgen_tmp_209_483));
  memset(&_pgen_tmp_210_484, 0, sizeof(_pgen_tmp_210_484));
  memset(&_pgen_tmp_211_485, 0, sizeof(_pgen_tmp_211_485));
  memset(&_pgen_tmp_212_486, 0, sizeof(_pgen_tmp_212_486));
  memset(&_pgen_tmp_213_487, 0, sizeof(_pgen_tmp_213_487));
  memset(&_pgen_tmp_214_488, 0, sizeof(_pgen_tmp_214_488));
  memset(&_pgen_tmp_215_489, 0, sizeof(_pgen_tmp_215_489));
  memset(&_pgen_tmp_216_490, 0, sizeof(_pgen_tmp_216_490));
  memset(&_pgen_tmp_217_491, 0, sizeof(_pgen_tmp_217_491));
  memset(&_pgen_tmp_218_492, 0, sizeof(_pgen_tmp_218_492));
  memset(&_preg_268435456, 0, sizeof(_preg_268435456));
  memset(&_preg_268435457, 0, sizeof(_preg_268435457));
  memset(&_preg_268435458, 0, sizeof(_preg_268435458));
  memset(&_preg_268435459, 0, sizeof(_preg_268435459));
  memset(&_preg_268435460, 0, sizeof(_preg_268435460));
  memset(&_preg_268435461, 0, sizeof(_preg_268435461));
  memset(&_preg_268435462, 0, sizeof(_preg_268435462));
  memset(&_preg_268435463, 0, sizeof(_preg_268435463));
  memset(&_preg_268435464, 0, sizeof(_preg_268435464));
  memset(&_preg_268435465, 0, sizeof(_preg_268435465));
  memset(&_preg_268435466, 0, sizeof(_preg_268435466));
  memset(&_preg_268435467, 0, sizeof(_preg_268435467));
  memset(&_preg_268435468, 0, sizeof(_preg_268435468));
  memset(&_preg_268435469, 0, sizeof(_preg_268435469));
  memset(&_preg_268435470, 0, sizeof(_preg_268435470));
  memset(&_preg_268435471, 0, sizeof(_preg_268435471));
  memset(&_preg_268435472, 0, sizeof(_preg_268435472));
  memset(&_preg_268435473, 0, sizeof(_preg_268435473));
  memset(&_preg_268435474, 0, sizeof(_preg_268435474));
  memset(&_preg_268435475, 0, sizeof(_preg_268435475));
  memset(&_preg_268435476, 0, sizeof(_preg_268435476));
  memset(&_preg_268435477, 0, sizeof(_preg_268435477));
  memset(&_preg_268435478, 0, sizeof(_preg_268435478));
  memset(&_preg_268435479, 0, sizeof(_preg_268435479));
  memset(&_preg_268435480, 0, sizeof(_preg_268435480));
  memset(&_preg_268435481, 0, sizeof(_preg_268435481));
  memset(&_preg_268435482, 0, sizeof(_preg_268435482));
  memset(&_preg_268435483, 0, sizeof(_preg_268435483));
  memset(&_preg_268435484, 0, sizeof(_preg_268435484));
  memset(&_preg_268435485, 0, sizeof(_preg_268435485));
  memset(&_preg_268435486, 0, sizeof(_preg_268435486));
  memset(&_preg_268435487, 0, sizeof(_preg_268435487));
  memset(&_preg_268435488, 0, sizeof(_preg_268435488));
  memset(&_preg_268435489, 0, sizeof(_preg_268435489));
  memset(&_preg_268435490, 0, sizeof(_preg_268435490));
  memset(&_preg_268435491, 0, sizeof(_preg_268435491));
  memset(&_preg_268435492, 0, sizeof(_preg_268435492));
  memset(&_preg_268435493, 0, sizeof(_preg_268435493));
  memset(&_preg_268435494, 0, sizeof(_preg_268435494));
  memset(&_preg_268435495, 0, sizeof(_preg_268435495));
  memset(&_preg_268435496, 0, sizeof(_preg_268435496));
  memset(&_preg_268435497, 0, sizeof(_preg_268435497));
  memset(&_preg_268435498, 0, sizeof(_preg_268435498));
  memset(&_preg_268435499, 0, sizeof(_preg_268435499));
  memset(&_preg_268435500, 0, sizeof(_preg_268435500));
  memset(&_preg_268435501, 0, sizeof(_preg_268435501));
  memset(&_preg_268435502, 0, sizeof(_preg_268435502));
  memset(&_preg_268435503, 0, sizeof(_preg_268435503));
  memset(&_preg_268435504, 0, sizeof(_preg_268435504));
  memset(&_preg_268435505, 0, sizeof(_preg_268435505));
  memset(&_preg_268435506, 0, sizeof(_preg_268435506));
  memset(&_preg_268435507, 0, sizeof(_preg_268435507));
  memset(&_preg_268435508, 0, sizeof(_preg_268435508));
  memset(&_preg_268435509, 0, sizeof(_preg_268435509));
  memset(&_preg_268435510, 0, sizeof(_preg_268435510));
  memset(&_preg_268435511, 0, sizeof(_preg_268435511));
  memset(&_preg_268435512, 0, sizeof(_preg_268435512));
  memset(&_preg_268435513, 0, sizeof(_preg_268435513));
  memset(&_preg_268435514, 0, sizeof(_preg_268435514));
  memset(&_preg_268435515, 0, sizeof(_preg_268435515));
  memset(&_preg_268435516, 0, sizeof(_preg_268435516));
  memset(&_preg_268435517, 0, sizeof(_preg_268435517));
  memset(&_preg_268435518, 0, sizeof(_preg_268435518));
  memset(&_preg_268435519, 0, sizeof(_preg_268435519));
  memset(&_preg_268435520, 0, sizeof(_preg_268435520));
  memset(&_preg_268435521, 0, sizeof(_preg_268435521));
  memset(&_preg_268435522, 0, sizeof(_preg_268435522));
  memset(&_preg_268435523, 0, sizeof(_preg_268435523));
  memset(&_preg_268435524, 0, sizeof(_preg_268435524));
  memset(&_preg_268435525, 0, sizeof(_preg_268435525));
  memset(&_preg_268435526, 0, sizeof(_preg_268435526));
  memset(&_preg_268435527, 0, sizeof(_preg_268435527));
  memset(&_preg_268435528, 0, sizeof(_preg_268435528));
  memset(&_preg_268435529, 0, sizeof(_preg_268435529));
  memset(&_preg_268435530, 0, sizeof(_preg_268435530));
  memset(&_preg_268435531, 0, sizeof(_preg_268435531));
  memset(&_preg_268435532, 0, sizeof(_preg_268435532));
  memset(&_preg_268435533, 0, sizeof(_preg_268435533));
  memset(&_preg_268435534, 0, sizeof(_preg_268435534));
  memset(&_preg_268435535, 0, sizeof(_preg_268435535));
  memset(&_preg_268435536, 0, sizeof(_preg_268435536));
  memset(&_preg_268435537, 0, sizeof(_preg_268435537));
  memset(&_preg_268435538, 0, sizeof(_preg_268435538));
  memset(&_preg_268435539, 0, sizeof(_preg_268435539));
  memset(&_preg_268435540, 0, sizeof(_preg_268435540));
  memset(&_preg_268435541, 0, sizeof(_preg_268435541));
  memset(&_preg_268435542, 0, sizeof(_preg_268435542));
  memset(&_preg_268435543, 0, sizeof(_preg_268435543));
  memset(&_preg_268435544, 0, sizeof(_preg_268435544));
  memset(&_preg_268435545, 0, sizeof(_preg_268435545));
  memset(&_preg_268435546, 0, sizeof(_preg_268435546));
  memset(&_preg_268435547, 0, sizeof(_preg_268435547));
  memset(&_preg_268435548, 0, sizeof(_preg_268435548));
  memset(&_preg_268435549, 0, sizeof(_preg_268435549));
  memset(&_preg_268435550, 0, sizeof(_preg_268435550));
  memset(&_preg_268435551, 0, sizeof(_preg_268435551));
  memset(&_preg_268435552, 0, sizeof(_preg_268435552));
  memset(&_preg_268435553, 0, sizeof(_preg_268435553));
  memset(&_preg_268435554, 0, sizeof(_preg_268435554));
  memset(&_preg_268435555, 0, sizeof(_preg_268435555));
  memset(&_preg_268435556, 0, sizeof(_preg_268435556));
  memset(&_preg_268435557, 0, sizeof(_preg_268435557));
  memset(&_preg_268435558, 0, sizeof(_preg_268435558));
  memset(&_preg_268435559, 0, sizeof(_preg_268435559));
  memset(&_preg_268435560, 0, sizeof(_preg_268435560));
  memset(&_preg_268435561, 0, sizeof(_preg_268435561));
  memset(&_preg_268435562, 0, sizeof(_preg_268435562));
  memset(&_preg_268435563, 0, sizeof(_preg_268435563));
  memset(&_preg_268435564, 0, sizeof(_preg_268435564));
  memset(&_preg_268435565, 0, sizeof(_preg_268435565));
  memset(&_preg_268435566, 0, sizeof(_preg_268435566));
  memset(&_preg_268435567, 0, sizeof(_preg_268435567));
  memset(&_preg_268435568, 0, sizeof(_preg_268435568));
  memset(&_preg_268435569, 0, sizeof(_preg_268435569));
  memset(&_preg_268435570, 0, sizeof(_preg_268435570));
  memset(&_preg_268435571, 0, sizeof(_preg_268435571));
  memset(&_preg_268435572, 0, sizeof(_preg_268435572));
  memset(&_preg_268435573, 0, sizeof(_preg_268435573));
  memset(&_preg_268435574, 0, sizeof(_preg_268435574));
  memset(&_preg_268435575, 0, sizeof(_preg_268435575));
  memset(&_preg_268435576, 0, sizeof(_preg_268435576));
  memset(&_preg_268435577, 0, sizeof(_preg_268435577));
  memset(&_preg_268435578, 0, sizeof(_preg_268435578));
  memset(&_preg_268435579, 0, sizeof(_preg_268435579));
  memset(&_preg_268435580, 0, sizeof(_preg_268435580));
  memset(&_preg_268435581, 0, sizeof(_preg_268435581));
  memset(&_preg_268435582, 0, sizeof(_preg_268435582));
  memset(&_preg_268435583, 0, sizeof(_preg_268435583));
  memset(&_preg_268435584, 0, sizeof(_preg_268435584));
  memset(&_preg_268435585, 0, sizeof(_preg_268435585));
  memset(&_preg_268435586, 0, sizeof(_preg_268435586));
  memset(&_preg_268435587, 0, sizeof(_preg_268435587));
  memset(&_preg_268435588, 0, sizeof(_preg_268435588));
  memset(&_preg_268435589, 0, sizeof(_preg_268435589));
  memset(&_preg_268435590, 0, sizeof(_preg_268435590));
  memset(&_preg_268435591, 0, sizeof(_preg_268435591));
  memset(&_preg_268435592, 0, sizeof(_preg_268435592));
  memset(&_preg_268435593, 0, sizeof(_preg_268435593));
  memset(&_preg_268435594, 0, sizeof(_preg_268435594));
  memset(&_preg_268435595, 0, sizeof(_preg_268435595));
  memset(&_preg_268435596, 0, sizeof(_preg_268435596));
  memset(&_preg_268435597, 0, sizeof(_preg_268435597));
  memset(&_preg_268435598, 0, sizeof(_preg_268435598));
  memset(&_preg_268435599, 0, sizeof(_preg_268435599));
  memset(&_preg_268435600, 0, sizeof(_preg_268435600));
  memset(&_preg_268435601, 0, sizeof(_preg_268435601));
  memset(&_preg_268435602, 0, sizeof(_preg_268435602));
  memset(&_preg_268435603, 0, sizeof(_preg_268435603));
  memset(&_preg_268435604, 0, sizeof(_preg_268435604));
  memset(&_preg_268435605, 0, sizeof(_preg_268435605));
  memset(&_preg_268435606, 0, sizeof(_preg_268435606));
  memset(&_preg_268435607, 0, sizeof(_preg_268435607));
  memset(&_preg_268435608, 0, sizeof(_preg_268435608));
  memset(&_preg_268435609, 0, sizeof(_preg_268435609));
  memset(&_preg_268435610, 0, sizeof(_preg_268435610));
  memset(&_preg_268435611, 0, sizeof(_preg_268435611));
  memset(&_preg_268435612, 0, sizeof(_preg_268435612));
  memset(&_preg_268435613, 0, sizeof(_preg_268435613));
  memset(&_preg_268435614, 0, sizeof(_preg_268435614));
  memset(&_preg_268435615, 0, sizeof(_preg_268435615));
  memset(&_preg_268435616, 0, sizeof(_preg_268435616));
  memset(&_preg_268435617, 0, sizeof(_preg_268435617));
  memset(&_preg_268435618, 0, sizeof(_preg_268435618));
  memset(&_preg_268435619, 0, sizeof(_preg_268435619));
  memset(&_preg_268435620, 0, sizeof(_preg_268435620));
  memset(&_preg_268435621, 0, sizeof(_preg_268435621));
  memset(&_preg_268435622, 0, sizeof(_preg_268435622));
  memset(&_preg_268435623, 0, sizeof(_preg_268435623));
  memset(&_preg_268435624, 0, sizeof(_preg_268435624));
  memset(&_preg_268435625, 0, sizeof(_preg_268435625));
  memset(&_preg_268435626, 0, sizeof(_preg_268435626));
  memset(&_preg_268435627, 0, sizeof(_preg_268435627));
  memset(&_preg_268435628, 0, sizeof(_preg_268435628));
  memset(&_preg_268435629, 0, sizeof(_preg_268435629));
  memset(&_preg_268435630, 0, sizeof(_preg_268435630));
  memset(&_preg_268435631, 0, sizeof(_preg_268435631));
  memset(&_preg_268435632, 0, sizeof(_preg_268435632));
  memset(&_preg_268435633, 0, sizeof(_preg_268435633));
  memset(&_preg_268435634, 0, sizeof(_preg_268435634));
  memset(&_preg_268435635, 0, sizeof(_preg_268435635));
  memset(&_preg_268435636, 0, sizeof(_preg_268435636));
  memset(&_preg_268435637, 0, sizeof(_preg_268435637));
  memset(&_preg_268435638, 0, sizeof(_preg_268435638));
  memset(&_preg_268435639, 0, sizeof(_preg_268435639));
  memset(&_preg_268435640, 0, sizeof(_preg_268435640));
  memset(&_preg_268435641, 0, sizeof(_preg_268435641));
  memset(&_preg_268435642, 0, sizeof(_preg_268435642));
  memset(&_preg_268435643, 0, sizeof(_preg_268435643));
  memset(&_preg_268435644, 0, sizeof(_preg_268435644));
  memset(&_preg_268435645, 0, sizeof(_preg_268435645));
  memset(&_preg_268435646, 0, sizeof(_preg_268435646));
  memset(&_preg_268435647, 0, sizeof(_preg_268435647));
  memset(&_preg_268435648, 0, sizeof(_preg_268435648));
  memset(&_preg_268435649, 0, sizeof(_preg_268435649));
  memset(&_preg_268435650, 0, sizeof(_preg_268435650));
  memset(&_preg_268435651, 0, sizeof(_preg_268435651));
  memset(&_preg_268435652, 0, sizeof(_preg_268435652));
  memset(&_preg_268435653, 0, sizeof(_preg_268435653));
  memset(&_preg_268435654, 0, sizeof(_preg_268435654));
  memset(&_preg_268435655, 0, sizeof(_preg_268435655));
  memset(&_preg_268435656, 0, sizeof(_preg_268435656));
  memset(&_preg_268435657, 0, sizeof(_preg_268435657));
  memset(&_preg_268435658, 0, sizeof(_preg_268435658));
  memset(&_preg_268435659, 0, sizeof(_preg_268435659));
  memset(&_preg_268435660, 0, sizeof(_preg_268435660));
  memset(&_preg_268435661, 0, sizeof(_preg_268435661));
  memset(&_preg_268435662, 0, sizeof(_preg_268435662));
  memset(&_preg_268435663, 0, sizeof(_preg_268435663));
  memset(&_preg_268435664, 0, sizeof(_preg_268435664));
  memset(&_preg_268435665, 0, sizeof(_preg_268435665));
  memset(&_preg_268435666, 0, sizeof(_preg_268435666));
  memset(&_preg_268435667, 0, sizeof(_preg_268435667));
  memset(&_preg_268435668, 0, sizeof(_preg_268435668));
  memset(&_preg_268435669, 0, sizeof(_preg_268435669));
  memset(&_preg_268435670, 0, sizeof(_preg_268435670));
  memset(&_preg_268435671, 0, sizeof(_preg_268435671));
  memset(&_preg_268435672, 0, sizeof(_preg_268435672));
  memset(&_preg_268435673, 0, sizeof(_preg_268435673));
  memset(&_preg_268435674, 0, sizeof(_preg_268435674));
  memset(&_preg_268435675, 0, sizeof(_preg_268435675));
  memset(&_preg_268435676, 0, sizeof(_preg_268435676));
  memset(&_preg_268435677, 0, sizeof(_preg_268435677));
  memset(&_preg_268435678, 0, sizeof(_preg_268435678));
  memset(&_preg_268435679, 0, sizeof(_preg_268435679));
  memset(&_preg_268435680, 0, sizeof(_preg_268435680));
  memset(&_preg_268435681, 0, sizeof(_preg_268435681));
  memset(&_preg_268435682, 0, sizeof(_preg_268435682));
  memset(&_preg_268435683, 0, sizeof(_preg_268435683));
  memset(&_preg_268435684, 0, sizeof(_preg_268435684));
  memset(&_preg_268435685, 0, sizeof(_preg_268435685));
  memset(&_preg_268435686, 0, sizeof(_preg_268435686));
  memset(&_preg_268435687, 0, sizeof(_preg_268435687));
  memset(&_preg_268435688, 0, sizeof(_preg_268435688));
  memset(&_preg_268435689, 0, sizeof(_preg_268435689));
  memset(&_preg_268435690, 0, sizeof(_preg_268435690));
  memset(&_preg_268435691, 0, sizeof(_preg_268435691));
  memset(&_preg_268435692, 0, sizeof(_preg_268435692));
  memset(&_preg_268435693, 0, sizeof(_preg_268435693));
  memset(&_preg_268435694, 0, sizeof(_preg_268435694));
  memset(&_preg_268435695, 0, sizeof(_preg_268435695));
  memset(&_preg_268435696, 0, sizeof(_preg_268435696));
  memset(&_preg_268435697, 0, sizeof(_preg_268435697));
  memset(&_preg_268435698, 0, sizeof(_preg_268435698));
  memset(&_preg_268435699, 0, sizeof(_preg_268435699));
  memset(&_preg_268435700, 0, sizeof(_preg_268435700));
  memset(&_preg_268435701, 0, sizeof(_preg_268435701));
  memset(&_preg_268435702, 0, sizeof(_preg_268435702));
  memset(&_preg_268435703, 0, sizeof(_preg_268435703));
  memset(&_preg_268435704, 0, sizeof(_preg_268435704));
  memset(&_preg_268435705, 0, sizeof(_preg_268435705));
  memset(&_preg_268435706, 0, sizeof(_preg_268435706));
  memset(&_preg_268435707, 0, sizeof(_preg_268435707));
  memset(&_preg_268435708, 0, sizeof(_preg_268435708));
  memset(&_preg_268435709, 0, sizeof(_preg_268435709));
  memset(&_preg_268435710, 0, sizeof(_preg_268435710));
  memset(&_preg_268435711, 0, sizeof(_preg_268435711));
  memset(&_preg_268435712, 0, sizeof(_preg_268435712));
  memset(&_preg_268435713, 0, sizeof(_preg_268435713));
  memset(&_preg_268435714, 0, sizeof(_preg_268435714));
  memset(&_preg_268435715, 0, sizeof(_preg_268435715));
  memset(&_preg_268435716, 0, sizeof(_preg_268435716));
  memset(&_preg_268435717, 0, sizeof(_preg_268435717));
  memset(&_preg_268435718, 0, sizeof(_preg_268435718));
  memset(&_preg_268435719, 0, sizeof(_preg_268435719));
  memset(&_preg_268435720, 0, sizeof(_preg_268435720));
  memset(&_preg_268435721, 0, sizeof(_preg_268435721));
  memset(&_preg_268435722, 0, sizeof(_preg_268435722));
  memset(&_preg_268435723, 0, sizeof(_preg_268435723));
  memset(&_preg_268435724, 0, sizeof(_preg_268435724));
  memset(&_preg_268435725, 0, sizeof(_preg_268435725));
  memset(&_preg_268435726, 0, sizeof(_preg_268435726));
  memset(&_preg_268435727, 0, sizeof(_preg_268435727));
  memset(&_preg_268435728, 0, sizeof(_preg_268435728));
  memset(&_preg_268435729, 0, sizeof(_preg_268435729));
  memset(&_preg_268435730, 0, sizeof(_preg_268435730));
  memset(&_preg_268435731, 0, sizeof(_preg_268435731));
  memset(&_preg_268435732, 0, sizeof(_preg_268435732));
  memset(&_preg_268435733, 0, sizeof(_preg_268435733));
  memset(&_preg_268435734, 0, sizeof(_preg_268435734));
  memset(&_preg_268435735, 0, sizeof(_preg_268435735));
  memset(&_preg_268435736, 0, sizeof(_preg_268435736));
  memset(&_preg_268435737, 0, sizeof(_preg_268435737));
  // /conv1/conv1.0/Conv
  // pragma: 65536, 1027, 33
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435456, &input_0);
  Free_poly_data(&input_0._c1_poly);
  Free_poly_data(&input_0._c0_poly);
  // BlockingRot replicate=8
  _preg_268435605 = Rotate(_preg_268435456, -4096);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_0_274, &_preg_268435456, &_preg_268435605);
  CMPLR_TM_END(12, 0);
  _preg_268435606 = Rotate(_preg_268435456, -8192);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_1_275, &_pgen_tmp_0_274, &_preg_268435606);
  CMPLR_TM_END(12, 0);
  _preg_268435607 = Rotate(_preg_268435456, -12288);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_2_276, &_pgen_tmp_1_275, &_preg_268435607);
  CMPLR_TM_END(12, 0);
  _preg_268435608 = Rotate(_preg_268435456, -16384);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_3_277, &_pgen_tmp_2_276, &_preg_268435608);
  CMPLR_TM_END(12, 0);
  _preg_268435609 = Rotate(_preg_268435456, -20480);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_4_278, &_pgen_tmp_3_277, &_preg_268435609);
  CMPLR_TM_END(12, 0);
  _preg_268435610 = Rotate(_preg_268435456, -24576);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_5_279, &_pgen_tmp_4_278, &_preg_268435610);
  CMPLR_TM_END(12, 0);
  _preg_268435611 = Rotate(_preg_268435456, -28672);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n0_1, &_pgen_tmp_5_279, &_preg_268435611);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&input_dup_n0_1._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_0_274._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435456._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435605._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_0_274._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435456._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435605._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_1_275._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_0_274._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435606._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_1_275._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_0_274._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435606._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_2_276._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_1_275._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435607._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_2_276._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_1_275._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435607._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_3_277._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_2_276._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435608._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_3_277._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_2_276._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435608._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_4_278._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_3_277._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435609._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_4_278._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_3_277._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435609._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_5_279._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_4_278._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435610._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_5_279._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_4_278._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435610._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n0_1._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_5_279._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435611._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n0_1._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_5_279._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435611._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435605._c1_poly);
  Free_poly_data(&_preg_268435605._c0_poly);
  Free_poly_data(&_preg_268435456._c1_poly);
  Free_poly_data(&_preg_268435456._c0_poly);
  Free_poly_data(&_preg_268435606._c1_poly);
  Free_poly_data(&_preg_268435606._c0_poly);
  Free_poly_data(&_pgen_tmp_0_274._c1_poly);
  Free_poly_data(&_pgen_tmp_0_274._c0_poly);
  Free_poly_data(&_preg_268435607._c1_poly);
  Free_poly_data(&_preg_268435607._c0_poly);
  Free_poly_data(&_pgen_tmp_1_275._c1_poly);
  Free_poly_data(&_pgen_tmp_1_275._c0_poly);
  Free_poly_data(&_preg_268435608._c1_poly);
  Free_poly_data(&_preg_268435608._c0_poly);
  Free_poly_data(&_pgen_tmp_2_276._c1_poly);
  Free_poly_data(&_pgen_tmp_2_276._c0_poly);
  Free_poly_data(&_preg_268435609._c1_poly);
  Free_poly_data(&_preg_268435609._c0_poly);
  Free_poly_data(&_pgen_tmp_3_277._c1_poly);
  Free_poly_data(&_pgen_tmp_3_277._c0_poly);
  Free_poly_data(&_preg_268435610._c1_poly);
  Free_poly_data(&_preg_268435610._c0_poly);
  Free_poly_data(&_pgen_tmp_4_278._c1_poly);
  Free_poly_data(&_pgen_tmp_4_278._c0_poly);
  Free_poly_data(&_preg_268435611._c1_poly);
  Free_poly_data(&_preg_268435611._c0_poly);
  Free_poly_data(&_pgen_tmp_5_279._c1_poly);
  Free_poly_data(&_pgen_tmp_5_279._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=1
  for (bs_input_n0_2 = 0; bs_input_n0_2 < 1; bs_input_n0_2 = bs_input_n0_2 + 1) {
    _preg_268435612 = Rotate(input_dup_n0_1, _cst_51[bs_input_n0_2]);
    Copy_ciph(&input_block_n0_3[bs_input_n0_2], &_preg_268435612);
    Free_poly_data(&_preg_268435612._c1_poly);
    Free_poly_data(&_preg_268435612._c0_poly);
  }
  Free_poly_data(&input_dup_n0_1._c1_poly);
  Free_poly_data(&input_dup_n0_1._c0_poly);
  Zero_ciph(&result_n1_4);
  for (num_grid_n1_5 = 0; num_grid_n1_5 < 4; num_grid_n1_5 = num_grid_n1_5 + 1) {
    Zero_ciph(&result_grid_n1_6);
    for (cap_block_n1_7 = 0; cap_block_n1_7 < 1; cap_block_n1_7 = cap_block_n1_7 + 1) {
      _ckks_gen_tmp_89_212 = input_block_n0_3[cap_block_n1_7];
      Pt_from_msg_ofst(&_pgen_tmp_6_280, 0/* cst_49 */, ((cap_block_n1_7 + (num_grid_n1_5 * 1))) * (32768), 32768, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_7_281, &_ckks_gen_tmp_89_212, &_pgen_tmp_6_280);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n1_6, &result_grid_n1_6, &_pgen_tmp_7_281);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&result_grid_n1_6._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_7_281._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_89_212._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_6_280._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_7_281._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_89_212._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_6_280._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n1_6._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n1_6._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_7_281._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n1_6._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n1_6._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_7_281._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435613 = Rotate(result_grid_n1_6, num_grid_n1_5 * 1024);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n1_4, &result_n1_4, &_preg_268435613);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&result_n1_4._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&result_n1_4._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n1_4._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435613._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&result_n1_4._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n1_4._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435613._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435613._c1_poly);
    Free_poly_data(&_preg_268435613._c0_poly);
  }
  Free_ciph_poly(input_block_n0_3, 1);
  Free_poly_data(&_pgen_tmp_6_280._poly);
  Free_poly_data(&_pgen_tmp_7_281._c1_poly);
  Free_poly_data(&_pgen_tmp_7_281._c0_poly);
  Free_poly_data(&result_grid_n1_6._c1_poly);
  Free_poly_data(&result_grid_n1_6._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n1_4, &result_n1_4);
  Rescale(&result_n1_4._c0_poly, &result_n1_4._c0_poly);
  Rescale(&result_n1_4._c1_poly, &result_n1_4._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_9_283, 1 /* cst_52 */, 32768, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_8_282, &result_n1_4, &_pgen_tmp_9_283);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_8_282._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_8_282._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n1_4._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_9_283._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_8_282._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n1_4._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_9_283._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_9_283._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435457, &_pgen_tmp_8_282);
  Rescale(&_preg_268435457._c0_poly, &_pgen_tmp_8_282._c0_poly);
  Rescale(&_preg_268435457._c1_poly, &_pgen_tmp_8_282._c1_poly);
  Free_poly_data(&_pgen_tmp_8_282._c1_poly);
  Free_poly_data(&_pgen_tmp_8_282._c0_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_10_284, 2 /* cst_50 */, 32768, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n1_4, &_preg_268435457, &_pgen_tmp_10_284);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&result_n1_4._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&result_n1_4._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435457._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_10_284._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&result_n1_4._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&_preg_268435457._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_10_284._poly);
  Free_poly_data(&_preg_268435457._c1_poly);
  Free_poly_data(&_preg_268435457._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435458, &result_n1_4);
  Free_poly_data(&result_n1_4._c1_poly);
  Free_poly_data(&result_n1_4._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 33
  // /conv1/conv1.2/Relu
  // pragma: 65536, 1033, 39
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435459, &_preg_268435458, 13);
  Free_poly_data(&_preg_268435458._c1_poly);
  Free_poly_data(&_preg_268435458._c0_poly);
  _preg_268435460 = App_relu(_preg_268435459, _preg_268435459, 32768);
  Free_poly_data(&_preg_268435459._c1_poly);
  Free_poly_data(&_preg_268435459._c0_poly);
  Copy_ciph(&_preg_268435461, &_preg_268435460);
  Free_poly_data(&_preg_268435460._c1_poly);
  Free_poly_data(&_preg_268435460._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 39
  // /fire2/squeeze/squeeze.0/Conv
  // pragma: 65536, 1027, 40
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435462, &_preg_268435461);
  Free_poly_data(&_preg_268435461._c1_poly);
  Free_poly_data(&_preg_268435461._c0_poly);
  Zero_ciph(&tmp_result_n2_8);
  Copy_ciph(&input_dup_n2_9, &_preg_268435462);
  Free_poly_data(&_preg_268435462._c1_poly);
  Free_poly_data(&_preg_268435462._c0_poly);
  for (index_cin_n2_10 = 0; index_cin_n2_10 < 32; index_cin_n2_10 = index_cin_n2_10 + 1) {
    for (index_khw_n2_11 = 0; index_khw_n2_11 < 1; index_khw_n2_11 = index_khw_n2_11 + 1) {
      _preg_268435614 = Rotate(input_dup_n2_9, _cst_56[index_khw_n2_11]);
      Copy_ciph(&_ckks_gen_tmp_201_213, &_preg_268435614);
      Pt_from_msg_ofst(&_pgen_tmp_11_285, 3/* cst_54 */, ((index_khw_n2_11 + (index_cin_n2_10 * 1))) * (16384), 16384, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_12_286, &_ckks_gen_tmp_201_213, &_pgen_tmp_11_285);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&tmp_result_n2_8, &tmp_result_n2_8, &_pgen_tmp_12_286);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&tmp_result_n2_8._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_12_286._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_201_213._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_11_285._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_12_286._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_201_213._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_11_285._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&tmp_result_n2_8._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_result_n2_8._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_12_286._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&tmp_result_n2_8._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_result_n2_8._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_12_286._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435614._c1_poly);
      Free_poly_data(&_preg_268435614._c0_poly);
    }
    _preg_268435615 = Rotate(input_dup_n2_9, 1024);
    Copy_ciph(&input_dup_n2_9, &_preg_268435615);
    Free_poly_data(&_preg_268435615._c1_poly);
    Free_poly_data(&_preg_268435615._c0_poly);
  }
  Free_poly_data(&_pgen_tmp_11_285._poly);
  Free_poly_data(&_ckks_gen_tmp_201_213._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_201_213._c0_poly);
  Free_poly_data(&_pgen_tmp_12_286._c1_poly);
  Free_poly_data(&_pgen_tmp_12_286._c0_poly);
  Free_poly_data(&input_dup_n2_9._c1_poly);
  Free_poly_data(&input_dup_n2_9._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&tmp_result_n2_8, &tmp_result_n2_8);
  Rescale(&tmp_result_n2_8._c0_poly, &tmp_result_n2_8._c0_poly);
  Rescale(&tmp_result_n2_8._c1_poly, &tmp_result_n2_8._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_13_287, 4 /* cst_55 */, 16384, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&tmp_result_n2_8, &tmp_result_n2_8, &_pgen_tmp_13_287);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&tmp_result_n2_8._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&tmp_result_n2_8._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_result_n2_8._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_13_287._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&tmp_result_n2_8._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&tmp_result_n2_8._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_13_287._poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435463, &tmp_result_n2_8);
  Free_poly_data(&tmp_result_n2_8._c1_poly);
  Free_poly_data(&tmp_result_n2_8._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 40
  // /fire2/squeeze/squeeze.2/Relu
  // pragma: 65536, 1033, 41
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435464, &_preg_268435463, 14);
  Free_poly_data(&_preg_268435463._c1_poly);
  Free_poly_data(&_preg_268435463._c0_poly);
  _preg_268435465 = App_relu(_preg_268435464, _preg_268435464, 16384);
  Free_poly_data(&_preg_268435464._c1_poly);
  Free_poly_data(&_preg_268435464._c0_poly);
  Copy_ciph(&_preg_268435466, &_preg_268435465);
  Free_poly_data(&_preg_268435465._c1_poly);
  Free_poly_data(&_preg_268435465._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 41
  // /fire2/expand1/expand1.0/Conv
  // pragma: 65536, 1027, 42
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435467, &_preg_268435466);
  // BlockingRot replicate=1
  Copy_ciph(&input_dup_n2_12, &_preg_268435467);
  Free_poly_data(&_preg_268435467._c1_poly);
  Free_poly_data(&_preg_268435467._c0_poly);
  // BlockingRot HRot=bs=1
  for (bs_input_n2_13 = 0; bs_input_n2_13 < 1; bs_input_n2_13 = bs_input_n2_13 + 1) {
    _preg_268435616 = Rotate(input_dup_n2_12, _cst_60[bs_input_n2_13]);
    Copy_ciph(&input_block_n2_14[bs_input_n2_13], &_preg_268435616);
    Free_poly_data(&_preg_268435616._c1_poly);
    Free_poly_data(&_preg_268435616._c0_poly);
  }
  Free_poly_data(&input_dup_n2_12._c1_poly);
  Free_poly_data(&input_dup_n2_12._c0_poly);
  Zero_ciph(&result_n3_15);
  for (num_grid_n3_16 = 0; num_grid_n3_16 < 16; num_grid_n3_16 = num_grid_n3_16 + 1) {
    Zero_ciph(&result_grid_n3_17);
    for (cap_block_n3_18 = 0; cap_block_n3_18 < 1; cap_block_n3_18 = cap_block_n3_18 + 1) {
      _ckks_gen_tmp_315_214 = input_block_n2_14[cap_block_n3_18];
      Pt_from_msg_ofst(&_pgen_tmp_14_288, 5/* cst_58 */, ((cap_block_n3_18 + (num_grid_n3_16 * 1))) * (16384), 16384, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_15_289, &_ckks_gen_tmp_315_214, &_pgen_tmp_14_288);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n3_17, &result_grid_n3_17, &_pgen_tmp_15_289);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&result_grid_n3_17._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_15_289._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_315_214._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_14_288._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_15_289._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_315_214._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_14_288._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n3_17._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n3_17._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_15_289._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n3_17._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n3_17._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_15_289._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435617 = Rotate(result_grid_n3_17, num_grid_n3_16 * 1024);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n3_15, &result_n3_15, &_preg_268435617);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&result_n3_15._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&result_n3_15._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n3_15._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435617._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&result_n3_15._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n3_15._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435617._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435617._c1_poly);
    Free_poly_data(&_preg_268435617._c0_poly);
  }
  Free_ciph_poly(input_block_n2_14, 1);
  Free_poly_data(&_pgen_tmp_14_288._poly);
  Free_poly_data(&_pgen_tmp_15_289._c1_poly);
  Free_poly_data(&_pgen_tmp_15_289._c0_poly);
  Free_poly_data(&result_grid_n3_17._c1_poly);
  Free_poly_data(&result_grid_n3_17._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n3_15, &result_n3_15);
  Rescale(&result_n3_15._c0_poly, &result_n3_15._c0_poly);
  Rescale(&result_n3_15._c1_poly, &result_n3_15._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_17_291, 6 /* cst_61 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_16_290, &result_n3_15, &_pgen_tmp_17_291);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_16_290._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_16_290._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n3_15._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_17_291._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_16_290._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n3_15._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_17_291._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_17_291._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435468, &_pgen_tmp_16_290);
  Rescale(&_preg_268435468._c0_poly, &_pgen_tmp_16_290._c0_poly);
  Rescale(&_preg_268435468._c1_poly, &_pgen_tmp_16_290._c1_poly);
  Free_poly_data(&_pgen_tmp_16_290._c1_poly);
  Free_poly_data(&_pgen_tmp_16_290._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435618 = Rotate(result_n3_15, -16384);
  Copy_ciph(&_ckks_gen_tmp_359_215, &_preg_268435618);
  Free_poly_data(&_preg_268435618._c1_poly);
  Free_poly_data(&_preg_268435618._c0_poly);
  Pt_from_msg(&_pgen_tmp_19_293, 7 /* cst_62 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_18_292, &_ckks_gen_tmp_359_215, &_pgen_tmp_19_293);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_18_292._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_18_292._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_359_215._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_19_293._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_18_292._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_359_215._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_19_293._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_19_293._poly);
  Free_poly_data(&_ckks_gen_tmp_359_215._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_359_215._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_20_294, &_pgen_tmp_18_292);
  Rescale(&_pgen_tmp_20_294._c0_poly, &_pgen_tmp_18_292._c0_poly);
  Rescale(&_pgen_tmp_20_294._c1_poly, &_pgen_tmp_18_292._c1_poly);
  Free_poly_data(&_pgen_tmp_18_292._c1_poly);
  Free_poly_data(&_pgen_tmp_18_292._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435468, &_preg_268435468, &_pgen_tmp_20_294);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_preg_268435468._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_preg_268435468._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435468._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_20_294._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_preg_268435468._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435468._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_20_294._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_20_294._c1_poly);
  Free_poly_data(&_pgen_tmp_20_294._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_21_295, 8 /* cst_59 */, 16384, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n3_15, &_preg_268435468, &_pgen_tmp_21_295);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&result_n3_15._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&result_n3_15._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435468._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_21_295._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&result_n3_15._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&_preg_268435468._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_21_295._poly);
  Free_poly_data(&_preg_268435468._c1_poly);
  Free_poly_data(&_preg_268435468._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435469, &result_n3_15);
  Free_poly_data(&result_n3_15._c1_poly);
  Free_poly_data(&result_n3_15._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 42
  // /fire2/expand2/expand2.0/Conv
  // pragma: 65536, 1027, 43
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435470, &_preg_268435466);
  Free_poly_data(&_preg_268435466._c1_poly);
  Free_poly_data(&_preg_268435466._c0_poly);
  // BlockingRot replicate=1
  Copy_ciph(&input_dup_n3_19, &_preg_268435470);
  Free_poly_data(&_preg_268435470._c1_poly);
  Free_poly_data(&_preg_268435470._c0_poly);
  // BlockingRot HRot=bs=9
  for (bs_input_n3_20 = 0; bs_input_n3_20 < 9; bs_input_n3_20 = bs_input_n3_20 + 1) {
    _preg_268435619 = Rotate(input_dup_n3_19, _cst_66[bs_input_n3_20]);
    Copy_ciph(&input_block_n3_21[bs_input_n3_20], &_preg_268435619);
    Free_poly_data(&_preg_268435619._c1_poly);
    Free_poly_data(&_preg_268435619._c0_poly);
  }
  Free_poly_data(&input_dup_n3_19._c1_poly);
  Free_poly_data(&input_dup_n3_19._c0_poly);
  Zero_ciph(&result_n4_22);
  for (num_grid_n4_23 = 0; num_grid_n4_23 < 16; num_grid_n4_23 = num_grid_n4_23 + 1) {
    Zero_ciph(&result_grid_n4_24);
    for (cap_block_n4_25 = 0; cap_block_n4_25 < 9; cap_block_n4_25 = cap_block_n4_25 + 1) {
      _ckks_gen_tmp_444_216 = input_block_n3_21[cap_block_n4_25];
      Pt_from_msg_ofst(&_pgen_tmp_22_296, 9/* cst_64 */, ((cap_block_n4_25 + (num_grid_n4_23 * 9))) * (16384), 16384, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_23_297, &_ckks_gen_tmp_444_216, &_pgen_tmp_22_296);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n4_24, &result_grid_n4_24, &_pgen_tmp_23_297);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&result_grid_n4_24._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_23_297._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_444_216._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_22_296._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_23_297._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_444_216._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_22_296._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n4_24._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n4_24._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_23_297._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n4_24._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n4_24._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_23_297._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435620 = Rotate(result_grid_n4_24, num_grid_n4_23 * 1024);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n4_22, &result_n4_22, &_preg_268435620);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&result_n4_22._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&result_n4_22._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n4_22._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435620._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&result_n4_22._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n4_22._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435620._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435620._c1_poly);
    Free_poly_data(&_preg_268435620._c0_poly);
  }
  Free_ciph_poly(input_block_n3_21, 9);
  Free_poly_data(&_pgen_tmp_22_296._poly);
  Free_poly_data(&_pgen_tmp_23_297._c1_poly);
  Free_poly_data(&_pgen_tmp_23_297._c0_poly);
  Free_poly_data(&result_grid_n4_24._c1_poly);
  Free_poly_data(&result_grid_n4_24._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n4_22, &result_n4_22);
  Rescale(&result_n4_22._c0_poly, &result_n4_22._c0_poly);
  Rescale(&result_n4_22._c1_poly, &result_n4_22._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_25_299, 10 /* cst_67 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_24_298, &result_n4_22, &_pgen_tmp_25_299);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_24_298._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_24_298._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n4_22._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_25_299._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_24_298._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n4_22._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_25_299._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_25_299._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435471, &_pgen_tmp_24_298);
  Rescale(&_preg_268435471._c0_poly, &_pgen_tmp_24_298._c0_poly);
  Rescale(&_preg_268435471._c1_poly, &_pgen_tmp_24_298._c1_poly);
  Free_poly_data(&_pgen_tmp_24_298._c1_poly);
  Free_poly_data(&_pgen_tmp_24_298._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435621 = Rotate(result_n4_22, -16384);
  Copy_ciph(&_ckks_gen_tmp_488_217, &_preg_268435621);
  Free_poly_data(&_preg_268435621._c1_poly);
  Free_poly_data(&_preg_268435621._c0_poly);
  Pt_from_msg(&_pgen_tmp_27_301, 11 /* cst_68 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_26_300, &_ckks_gen_tmp_488_217, &_pgen_tmp_27_301);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_26_300._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_26_300._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_488_217._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_27_301._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_26_300._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_488_217._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_27_301._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_27_301._poly);
  Free_poly_data(&_ckks_gen_tmp_488_217._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_488_217._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_28_302, &_pgen_tmp_26_300);
  Rescale(&_pgen_tmp_28_302._c0_poly, &_pgen_tmp_26_300._c0_poly);
  Rescale(&_pgen_tmp_28_302._c1_poly, &_pgen_tmp_26_300._c1_poly);
  Free_poly_data(&_pgen_tmp_26_300._c1_poly);
  Free_poly_data(&_pgen_tmp_26_300._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435471, &_preg_268435471, &_pgen_tmp_28_302);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_preg_268435471._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_preg_268435471._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435471._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_28_302._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_preg_268435471._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435471._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_28_302._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_28_302._c1_poly);
  Free_poly_data(&_pgen_tmp_28_302._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_29_303, 12 /* cst_65 */, 16384, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n4_22, &_preg_268435471, &_pgen_tmp_29_303);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&result_n4_22._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&result_n4_22._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435471._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_29_303._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&result_n4_22._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&_preg_268435471._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_29_303._poly);
  Free_poly_data(&_preg_268435471._c1_poly);
  Free_poly_data(&_preg_268435471._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435472, &result_n4_22);
  Free_poly_data(&result_n4_22._c1_poly);
  Free_poly_data(&result_n4_22._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 43
  // /fire2/Concat
  // pragma: 65536, 1045, 44
  CMPLR_TM_START(4, 0);
  _preg_268435622 = Rotate(_preg_268435472, -16384);
  Free_poly_data(&_preg_268435472._c1_poly);
  Free_poly_data(&_preg_268435472._c0_poly);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435473, &_preg_268435469, &_preg_268435622);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_preg_268435473._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_preg_268435473._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435469._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435622._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_preg_268435473._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435469._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435622._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435622._c1_poly);
  Free_poly_data(&_preg_268435622._c0_poly);
  Free_poly_data(&_preg_268435469._c1_poly);
  Free_poly_data(&_preg_268435469._c0_poly);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_END(4, 0);
  // pragma: 65537, 1045, 44
  // /fire2/relu/Relu
  // pragma: 65536, 1033, 46
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435474, &_preg_268435473, 13);
  Free_poly_data(&_preg_268435473._c1_poly);
  Free_poly_data(&_preg_268435473._c0_poly);
  _preg_268435475 = App_relu(_preg_268435474, _preg_268435474, 32768);
  Free_poly_data(&_preg_268435474._c1_poly);
  Free_poly_data(&_preg_268435474._c0_poly);
  Copy_ciph(&_preg_268435476, &_preg_268435475);
  Free_poly_data(&_preg_268435475._c1_poly);
  Free_poly_data(&_preg_268435475._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 46
  // /fire3/squeeze/squeeze.0/Conv
  // pragma: 65536, 1027, 47
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435477, &_preg_268435476);
  Free_poly_data(&_preg_268435476._c1_poly);
  Free_poly_data(&_preg_268435476._c0_poly);
  Zero_ciph(&tmp_result_n5_26);
  Copy_ciph(&input_dup_n5_27, &_preg_268435477);
  Free_poly_data(&_preg_268435477._c1_poly);
  Free_poly_data(&_preg_268435477._c0_poly);
  for (index_cin_n5_28 = 0; index_cin_n5_28 < 32; index_cin_n5_28 = index_cin_n5_28 + 1) {
    for (index_khw_n5_29 = 0; index_khw_n5_29 < 1; index_khw_n5_29 = index_khw_n5_29 + 1) {
      _preg_268435623 = Rotate(input_dup_n5_27, _cst_72[index_khw_n5_29]);
      Copy_ciph(&_ckks_gen_tmp_587_218, &_preg_268435623);
      Pt_from_msg_ofst(&_pgen_tmp_30_304, 13/* cst_70 */, ((index_khw_n5_29 + (index_cin_n5_28 * 1))) * (16384), 16384, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_31_305, &_ckks_gen_tmp_587_218, &_pgen_tmp_30_304);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&tmp_result_n5_26, &tmp_result_n5_26, &_pgen_tmp_31_305);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&tmp_result_n5_26._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_31_305._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_587_218._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_30_304._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_31_305._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_587_218._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_30_304._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&tmp_result_n5_26._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_result_n5_26._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_31_305._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&tmp_result_n5_26._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_result_n5_26._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_31_305._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435623._c1_poly);
      Free_poly_data(&_preg_268435623._c0_poly);
    }
    _preg_268435624 = Rotate(input_dup_n5_27, 1024);
    Copy_ciph(&input_dup_n5_27, &_preg_268435624);
    Free_poly_data(&_preg_268435624._c1_poly);
    Free_poly_data(&_preg_268435624._c0_poly);
  }
  Free_poly_data(&_pgen_tmp_30_304._poly);
  Free_poly_data(&_ckks_gen_tmp_587_218._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_587_218._c0_poly);
  Free_poly_data(&_pgen_tmp_31_305._c1_poly);
  Free_poly_data(&_pgen_tmp_31_305._c0_poly);
  Free_poly_data(&input_dup_n5_27._c1_poly);
  Free_poly_data(&input_dup_n5_27._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&tmp_result_n5_26, &tmp_result_n5_26);
  Rescale(&tmp_result_n5_26._c0_poly, &tmp_result_n5_26._c0_poly);
  Rescale(&tmp_result_n5_26._c1_poly, &tmp_result_n5_26._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_32_306, 14 /* cst_71 */, 16384, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&tmp_result_n5_26, &tmp_result_n5_26, &_pgen_tmp_32_306);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&tmp_result_n5_26._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&tmp_result_n5_26._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_result_n5_26._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_32_306._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&tmp_result_n5_26._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&tmp_result_n5_26._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_32_306._poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435478, &tmp_result_n5_26);
  Free_poly_data(&tmp_result_n5_26._c1_poly);
  Free_poly_data(&tmp_result_n5_26._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 47
  // /fire3/squeeze/squeeze.2/Relu
  // pragma: 65536, 1033, 48
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435479, &_preg_268435478, 14);
  Free_poly_data(&_preg_268435478._c1_poly);
  Free_poly_data(&_preg_268435478._c0_poly);
  _preg_268435480 = App_relu(_preg_268435479, _preg_268435479, 16384);
  Free_poly_data(&_preg_268435479._c1_poly);
  Free_poly_data(&_preg_268435479._c0_poly);
  Copy_ciph(&_preg_268435481, &_preg_268435480);
  Free_poly_data(&_preg_268435480._c1_poly);
  Free_poly_data(&_preg_268435480._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 48
  // /fire3/expand1/expand1.0/Conv
  // pragma: 65536, 1027, 49
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435482, &_preg_268435481);
  // BlockingRot replicate=1
  Copy_ciph(&input_dup_n5_30, &_preg_268435482);
  Free_poly_data(&_preg_268435482._c1_poly);
  Free_poly_data(&_preg_268435482._c0_poly);
  // BlockingRot HRot=bs=1
  for (bs_input_n5_31 = 0; bs_input_n5_31 < 1; bs_input_n5_31 = bs_input_n5_31 + 1) {
    _preg_268435625 = Rotate(input_dup_n5_30, _cst_76[bs_input_n5_31]);
    Copy_ciph(&input_block_n5_32[bs_input_n5_31], &_preg_268435625);
    Free_poly_data(&_preg_268435625._c1_poly);
    Free_poly_data(&_preg_268435625._c0_poly);
  }
  Free_poly_data(&input_dup_n5_30._c1_poly);
  Free_poly_data(&input_dup_n5_30._c0_poly);
  Zero_ciph(&result_n6_33);
  for (num_grid_n6_34 = 0; num_grid_n6_34 < 16; num_grid_n6_34 = num_grid_n6_34 + 1) {
    Zero_ciph(&result_grid_n6_35);
    for (cap_block_n6_36 = 0; cap_block_n6_36 < 1; cap_block_n6_36 = cap_block_n6_36 + 1) {
      _ckks_gen_tmp_701_219 = input_block_n5_32[cap_block_n6_36];
      Pt_from_msg_ofst(&_pgen_tmp_33_307, 15/* cst_74 */, ((cap_block_n6_36 + (num_grid_n6_34 * 1))) * (16384), 16384, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_34_308, &_ckks_gen_tmp_701_219, &_pgen_tmp_33_307);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n6_35, &result_grid_n6_35, &_pgen_tmp_34_308);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&result_grid_n6_35._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_34_308._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_701_219._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_33_307._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_34_308._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_701_219._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_33_307._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n6_35._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n6_35._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_34_308._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n6_35._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n6_35._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_34_308._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435626 = Rotate(result_grid_n6_35, num_grid_n6_34 * 1024);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n6_33, &result_n6_33, &_preg_268435626);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&result_n6_33._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&result_n6_33._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n6_33._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435626._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&result_n6_33._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n6_33._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435626._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435626._c1_poly);
    Free_poly_data(&_preg_268435626._c0_poly);
  }
  Free_ciph_poly(input_block_n5_32, 1);
  Free_poly_data(&_pgen_tmp_33_307._poly);
  Free_poly_data(&_pgen_tmp_34_308._c1_poly);
  Free_poly_data(&_pgen_tmp_34_308._c0_poly);
  Free_poly_data(&result_grid_n6_35._c1_poly);
  Free_poly_data(&result_grid_n6_35._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n6_33, &result_n6_33);
  Rescale(&result_n6_33._c0_poly, &result_n6_33._c0_poly);
  Rescale(&result_n6_33._c1_poly, &result_n6_33._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_36_310, 16 /* cst_77 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_35_309, &result_n6_33, &_pgen_tmp_36_310);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_35_309._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_35_309._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n6_33._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_36_310._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_35_309._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n6_33._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_36_310._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_36_310._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435483, &_pgen_tmp_35_309);
  Rescale(&_preg_268435483._c0_poly, &_pgen_tmp_35_309._c0_poly);
  Rescale(&_preg_268435483._c1_poly, &_pgen_tmp_35_309._c1_poly);
  Free_poly_data(&_pgen_tmp_35_309._c1_poly);
  Free_poly_data(&_pgen_tmp_35_309._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435627 = Rotate(result_n6_33, -16384);
  Copy_ciph(&_ckks_gen_tmp_745_220, &_preg_268435627);
  Free_poly_data(&_preg_268435627._c1_poly);
  Free_poly_data(&_preg_268435627._c0_poly);
  Pt_from_msg(&_pgen_tmp_38_312, 17 /* cst_78 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_37_311, &_ckks_gen_tmp_745_220, &_pgen_tmp_38_312);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_37_311._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_37_311._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_745_220._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_38_312._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_37_311._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_745_220._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_38_312._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_38_312._poly);
  Free_poly_data(&_ckks_gen_tmp_745_220._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_745_220._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_39_313, &_pgen_tmp_37_311);
  Rescale(&_pgen_tmp_39_313._c0_poly, &_pgen_tmp_37_311._c0_poly);
  Rescale(&_pgen_tmp_39_313._c1_poly, &_pgen_tmp_37_311._c1_poly);
  Free_poly_data(&_pgen_tmp_37_311._c1_poly);
  Free_poly_data(&_pgen_tmp_37_311._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435483, &_preg_268435483, &_pgen_tmp_39_313);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_preg_268435483._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_preg_268435483._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435483._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_39_313._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_preg_268435483._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435483._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_39_313._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_39_313._c1_poly);
  Free_poly_data(&_pgen_tmp_39_313._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_40_314, 18 /* cst_75 */, 16384, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n6_33, &_preg_268435483, &_pgen_tmp_40_314);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&result_n6_33._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&result_n6_33._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435483._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_40_314._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&result_n6_33._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&_preg_268435483._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_40_314._poly);
  Free_poly_data(&_preg_268435483._c1_poly);
  Free_poly_data(&_preg_268435483._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435484, &result_n6_33);
  Free_poly_data(&result_n6_33._c1_poly);
  Free_poly_data(&result_n6_33._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 49
  // /fire3/expand2/expand2.0/Conv
  // pragma: 65536, 1027, 50
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435485, &_preg_268435481);
  Free_poly_data(&_preg_268435481._c1_poly);
  Free_poly_data(&_preg_268435481._c0_poly);
  // BlockingRot replicate=1
  Copy_ciph(&input_dup_n6_37, &_preg_268435485);
  Free_poly_data(&_preg_268435485._c1_poly);
  Free_poly_data(&_preg_268435485._c0_poly);
  // BlockingRot HRot=bs=9
  for (bs_input_n6_38 = 0; bs_input_n6_38 < 9; bs_input_n6_38 = bs_input_n6_38 + 1) {
    _preg_268435628 = Rotate(input_dup_n6_37, _cst_82[bs_input_n6_38]);
    Copy_ciph(&input_block_n6_39[bs_input_n6_38], &_preg_268435628);
    Free_poly_data(&_preg_268435628._c1_poly);
    Free_poly_data(&_preg_268435628._c0_poly);
  }
  Free_poly_data(&input_dup_n6_37._c1_poly);
  Free_poly_data(&input_dup_n6_37._c0_poly);
  Zero_ciph(&result_n7_40);
  for (num_grid_n7_41 = 0; num_grid_n7_41 < 16; num_grid_n7_41 = num_grid_n7_41 + 1) {
    Zero_ciph(&result_grid_n7_42);
    for (cap_block_n7_43 = 0; cap_block_n7_43 < 9; cap_block_n7_43 = cap_block_n7_43 + 1) {
      _ckks_gen_tmp_830_221 = input_block_n6_39[cap_block_n7_43];
      Pt_from_msg_ofst(&_pgen_tmp_41_315, 19/* cst_80 */, ((cap_block_n7_43 + (num_grid_n7_41 * 9))) * (16384), 16384, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_42_316, &_ckks_gen_tmp_830_221, &_pgen_tmp_41_315);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n7_42, &result_grid_n7_42, &_pgen_tmp_42_316);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&result_grid_n7_42._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_42_316._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_830_221._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_41_315._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_42_316._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_830_221._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_41_315._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n7_42._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n7_42._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_42_316._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n7_42._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n7_42._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_42_316._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435629 = Rotate(result_grid_n7_42, num_grid_n7_41 * 1024);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n7_40, &result_n7_40, &_preg_268435629);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&result_n7_40._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&result_n7_40._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n7_40._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435629._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&result_n7_40._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n7_40._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435629._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435629._c1_poly);
    Free_poly_data(&_preg_268435629._c0_poly);
  }
  Free_ciph_poly(input_block_n6_39, 9);
  Free_poly_data(&_pgen_tmp_41_315._poly);
  Free_poly_data(&_pgen_tmp_42_316._c1_poly);
  Free_poly_data(&_pgen_tmp_42_316._c0_poly);
  Free_poly_data(&result_grid_n7_42._c1_poly);
  Free_poly_data(&result_grid_n7_42._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n7_40, &result_n7_40);
  Rescale(&result_n7_40._c0_poly, &result_n7_40._c0_poly);
  Rescale(&result_n7_40._c1_poly, &result_n7_40._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_44_318, 20 /* cst_83 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_43_317, &result_n7_40, &_pgen_tmp_44_318);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_43_317._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_43_317._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n7_40._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_44_318._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_43_317._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n7_40._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_44_318._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_44_318._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435486, &_pgen_tmp_43_317);
  Rescale(&_preg_268435486._c0_poly, &_pgen_tmp_43_317._c0_poly);
  Rescale(&_preg_268435486._c1_poly, &_pgen_tmp_43_317._c1_poly);
  Free_poly_data(&_pgen_tmp_43_317._c1_poly);
  Free_poly_data(&_pgen_tmp_43_317._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435630 = Rotate(result_n7_40, -16384);
  Copy_ciph(&_ckks_gen_tmp_874_222, &_preg_268435630);
  Free_poly_data(&_preg_268435630._c1_poly);
  Free_poly_data(&_preg_268435630._c0_poly);
  Pt_from_msg(&_pgen_tmp_46_320, 21 /* cst_84 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_45_319, &_ckks_gen_tmp_874_222, &_pgen_tmp_46_320);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_45_319._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_45_319._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_874_222._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_46_320._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_45_319._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_874_222._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_46_320._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_46_320._poly);
  Free_poly_data(&_ckks_gen_tmp_874_222._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_874_222._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_47_321, &_pgen_tmp_45_319);
  Rescale(&_pgen_tmp_47_321._c0_poly, &_pgen_tmp_45_319._c0_poly);
  Rescale(&_pgen_tmp_47_321._c1_poly, &_pgen_tmp_45_319._c1_poly);
  Free_poly_data(&_pgen_tmp_45_319._c1_poly);
  Free_poly_data(&_pgen_tmp_45_319._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435486, &_preg_268435486, &_pgen_tmp_47_321);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_preg_268435486._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_preg_268435486._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435486._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_47_321._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_preg_268435486._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435486._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_47_321._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_47_321._c1_poly);
  Free_poly_data(&_pgen_tmp_47_321._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_48_322, 22 /* cst_81 */, 16384, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n7_40, &_preg_268435486, &_pgen_tmp_48_322);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&result_n7_40._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&result_n7_40._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435486._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_48_322._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&result_n7_40._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&_preg_268435486._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_48_322._poly);
  Free_poly_data(&_preg_268435486._c1_poly);
  Free_poly_data(&_preg_268435486._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435487, &result_n7_40);
  Free_poly_data(&result_n7_40._c1_poly);
  Free_poly_data(&result_n7_40._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 50
  // /fire3/Concat
  // pragma: 65536, 1045, 51
  CMPLR_TM_START(4, 0);
  _preg_268435631 = Rotate(_preg_268435487, -16384);
  Free_poly_data(&_preg_268435487._c1_poly);
  Free_poly_data(&_preg_268435487._c0_poly);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435488, &_preg_268435484, &_preg_268435631);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_preg_268435488._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_preg_268435488._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435484._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435631._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_preg_268435488._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435484._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435631._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435631._c1_poly);
  Free_poly_data(&_preg_268435631._c0_poly);
  Free_poly_data(&_preg_268435484._c1_poly);
  Free_poly_data(&_preg_268435484._c0_poly);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_END(4, 0);
  // pragma: 65537, 1045, 51
  // /fire3/relu/Relu
  // pragma: 65536, 1033, 52
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435489, &_preg_268435488, 14);
  Free_poly_data(&_preg_268435488._c1_poly);
  Free_poly_data(&_preg_268435488._c0_poly);
  _preg_268435490 = App_relu(_preg_268435489, _preg_268435489, 32768);
  Free_poly_data(&_preg_268435489._c1_poly);
  Free_poly_data(&_preg_268435489._c0_poly);
  Copy_ciph(&_preg_268435491, &_preg_268435490);
  Free_poly_data(&_preg_268435490._c1_poly);
  Free_poly_data(&_preg_268435490._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 52
  // /fire4/squeeze/squeeze.0/Conv
  // pragma: 65536, 1027, 53
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435492, &_preg_268435491);
  Free_poly_data(&_preg_268435491._c1_poly);
  Free_poly_data(&_preg_268435491._c0_poly);
  // BlockingRot replicate=2
  _preg_268435632 = Rotate(_preg_268435492, -32768);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n7_44, &_preg_268435492, &_preg_268435632);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&input_dup_n7_44._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&input_dup_n7_44._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435492._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435632._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n7_44._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435492._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435632._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435632._c1_poly);
  Free_poly_data(&_preg_268435632._c0_poly);
  Free_poly_data(&_preg_268435492._c1_poly);
  Free_poly_data(&_preg_268435492._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=4
  for (bs_input_n7_45 = 0; bs_input_n7_45 < 4; bs_input_n7_45 = bs_input_n7_45 + 1) {
    _preg_268435633 = Rotate(input_dup_n7_44, _cst_88[bs_input_n7_45]);
    Copy_ciph(&input_block_n7_46[bs_input_n7_45], &_preg_268435633);
    Free_poly_data(&_preg_268435633._c1_poly);
    Free_poly_data(&_preg_268435633._c0_poly);
  }
  Free_poly_data(&input_dup_n7_44._c1_poly);
  Free_poly_data(&input_dup_n7_44._c0_poly);
  Zero_ciph(&result_n8_47);
  for (num_grid_n8_48 = 0; num_grid_n8_48 < 8; num_grid_n8_48 = num_grid_n8_48 + 1) {
    Zero_ciph(&result_grid_n8_49);
    for (cap_block_n8_50 = 0; cap_block_n8_50 < 4; cap_block_n8_50 = cap_block_n8_50 + 1) {
      _ckks_gen_tmp_996_223 = input_block_n7_46[cap_block_n8_50];
      Pt_from_msg_ofst(&_pgen_tmp_49_323, 23/* cst_86 */, ((cap_block_n8_50 + (num_grid_n8_48 * 4))) * (32768), 32768, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_50_324, &_ckks_gen_tmp_996_223, &_pgen_tmp_49_323);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n8_49, &result_grid_n8_49, &_pgen_tmp_50_324);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&result_grid_n8_49._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_50_324._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_996_223._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_49_323._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_50_324._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_996_223._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_49_323._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n8_49._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n8_49._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_50_324._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n8_49._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n8_49._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_50_324._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435634 = Rotate(result_grid_n8_49, num_grid_n8_48 * 4096);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n8_47, &result_n8_47, &_preg_268435634);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&result_n8_47._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&result_n8_47._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n8_47._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435634._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&result_n8_47._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n8_47._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435634._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435634._c1_poly);
    Free_poly_data(&_preg_268435634._c0_poly);
  }
  Free_ciph_poly(input_block_n7_46, 4);
  Free_poly_data(&_pgen_tmp_49_323._poly);
  Free_poly_data(&_pgen_tmp_50_324._c1_poly);
  Free_poly_data(&_pgen_tmp_50_324._c0_poly);
  Free_poly_data(&result_grid_n8_49._c1_poly);
  Free_poly_data(&result_grid_n8_49._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n8_47, &result_n8_47);
  Rescale(&result_n8_47._c0_poly, &result_n8_47._c0_poly);
  Rescale(&result_n8_47._c1_poly, &result_n8_47._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_52_326, 24 /* cst_89 */, 32768, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_51_325, &result_n8_47, &_pgen_tmp_52_326);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_51_325._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_51_325._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n8_47._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_52_326._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_51_325._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n8_47._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_52_326._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_52_326._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435493, &_pgen_tmp_51_325);
  Rescale(&_preg_268435493._c0_poly, &_pgen_tmp_51_325._c0_poly);
  Rescale(&_preg_268435493._c1_poly, &_pgen_tmp_51_325._c1_poly);
  Free_poly_data(&_pgen_tmp_51_325._c1_poly);
  Free_poly_data(&_pgen_tmp_51_325._c0_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_53_327, 25 /* cst_87 */, 32768, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n8_47, &_preg_268435493, &_pgen_tmp_53_327);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&result_n8_47._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&result_n8_47._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435493._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_53_327._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&result_n8_47._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&_preg_268435493._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_53_327._poly);
  Free_poly_data(&_preg_268435493._c1_poly);
  Free_poly_data(&_preg_268435493._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435494, &result_n8_47);
  Free_poly_data(&result_n8_47._c1_poly);
  Free_poly_data(&result_n8_47._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 53
  // /fire4/squeeze/squeeze.2/Relu
  // pragma: 65536, 1033, 54
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435495, &_preg_268435494, 18);
  Free_poly_data(&_preg_268435494._c1_poly);
  Free_poly_data(&_preg_268435494._c0_poly);
  _preg_268435496 = App_relu(_preg_268435495, _preg_268435495, 32768);
  Free_poly_data(&_preg_268435495._c1_poly);
  Free_poly_data(&_preg_268435495._c0_poly);
  Copy_ciph(&_preg_268435497, &_preg_268435496);
  Free_poly_data(&_preg_268435496._c1_poly);
  Free_poly_data(&_preg_268435496._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 54
  // /fire4/expand1/expand1.0/Conv
  // pragma: 65536, 1027, 55
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435498, &_preg_268435497);
  // BlockingRot replicate=2
  _preg_268435635 = Rotate(_preg_268435498, -32768);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n8_51, &_preg_268435498, &_preg_268435635);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&input_dup_n8_51._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&input_dup_n8_51._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435498._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435635._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n8_51._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435498._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435635._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435635._c1_poly);
  Free_poly_data(&_preg_268435635._c0_poly);
  Free_poly_data(&_preg_268435498._c1_poly);
  Free_poly_data(&_preg_268435498._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=4
  for (bs_input_n8_52 = 0; bs_input_n8_52 < 4; bs_input_n8_52 = bs_input_n8_52 + 1) {
    _preg_268435636 = Rotate(input_dup_n8_51, _cst_93[bs_input_n8_52]);
    Copy_ciph(&input_block_n8_53[bs_input_n8_52], &_preg_268435636);
    Free_poly_data(&_preg_268435636._c1_poly);
    Free_poly_data(&_preg_268435636._c0_poly);
  }
  Free_poly_data(&input_dup_n8_51._c1_poly);
  Free_poly_data(&input_dup_n8_51._c0_poly);
  Zero_ciph(&result_n9_54);
  for (num_grid_n9_55 = 0; num_grid_n9_55 < 8; num_grid_n9_55 = num_grid_n9_55 + 1) {
    Zero_ciph(&result_grid_n9_56);
    for (cap_block_n9_57 = 0; cap_block_n9_57 < 4; cap_block_n9_57 = cap_block_n9_57 + 1) {
      _ckks_gen_tmp_1131_224 = input_block_n8_53[cap_block_n9_57];
      Pt_from_msg_ofst(&_pgen_tmp_54_328, 26/* cst_91 */, ((cap_block_n9_57 + (num_grid_n9_55 * 4))) * (32768), 32768, 1, 7);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_55_329, &_ckks_gen_tmp_1131_224, &_pgen_tmp_54_328);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n9_56, &result_grid_n9_56, &_pgen_tmp_55_329);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&result_grid_n9_56._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_55_329._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1131_224._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_54_328._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_55_329._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1131_224._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_54_328._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n9_56._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n9_56._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_55_329._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n9_56._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n9_56._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_55_329._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435637 = Rotate(result_grid_n9_56, num_grid_n9_55 * 4096);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n9_54, &result_n9_54, &_preg_268435637);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&result_n9_54._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&result_n9_54._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n9_54._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435637._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&result_n9_54._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n9_54._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435637._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435637._c1_poly);
    Free_poly_data(&_preg_268435637._c0_poly);
  }
  Free_ciph_poly(input_block_n8_53, 4);
  Free_poly_data(&_pgen_tmp_54_328._poly);
  Free_poly_data(&_pgen_tmp_55_329._c1_poly);
  Free_poly_data(&_pgen_tmp_55_329._c0_poly);
  Free_poly_data(&result_grid_n9_56._c1_poly);
  Free_poly_data(&result_grid_n9_56._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n9_54, &result_n9_54);
  Rescale(&result_n9_54._c0_poly, &result_n9_54._c0_poly);
  Rescale(&result_n9_54._c1_poly, &result_n9_54._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_57_331, 27 /* cst_94 */, 32768, 1, 6);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_56_330, &result_n9_54, &_pgen_tmp_57_331);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_56_330._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_56_330._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n9_54._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_57_331._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_56_330._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n9_54._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_57_331._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_57_331._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435499, &_pgen_tmp_56_330);
  Rescale(&_preg_268435499._c0_poly, &_pgen_tmp_56_330._c0_poly);
  Rescale(&_preg_268435499._c1_poly, &_pgen_tmp_56_330._c1_poly);
  Free_poly_data(&_pgen_tmp_56_330._c1_poly);
  Free_poly_data(&_pgen_tmp_56_330._c0_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_58_332, 28 /* cst_92 */, 32768, 1, 5);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n9_54, &_preg_268435499, &_pgen_tmp_58_332);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&result_n9_54._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&result_n9_54._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435499._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_58_332._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&result_n9_54._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&_preg_268435499._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_58_332._poly);
  Free_poly_data(&_preg_268435499._c1_poly);
  Free_poly_data(&_preg_268435499._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435500, &result_n9_54);
  Free_poly_data(&result_n9_54._c1_poly);
  Free_poly_data(&result_n9_54._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 55
  // /fire4/expand1/expand1.2/AveragePool
  // pragma: 65536, 1026, 56
  CMPLR_TM_START(3, 0);
  Copy_ciph(&_preg_268435501, &_preg_268435500);
  Free_poly_data(&_preg_268435500._c1_poly);
  Free_poly_data(&_preg_268435500._c0_poly);
  _preg_268435638 = Rotate(_preg_268435501, 32);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&tmp_row_add9_58, &_preg_268435501, &_preg_268435638);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&tmp_row_add9_58._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&tmp_row_add9_58._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435501._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435638._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&tmp_row_add9_58._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435501._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435638._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435638._c1_poly);
  Free_poly_data(&_preg_268435638._c0_poly);
  Free_poly_data(&_preg_268435501._c1_poly);
  Free_poly_data(&_preg_268435501._c0_poly);
  CMPLR_TM_END(12, 0);
  _preg_268435639 = Rotate(tmp_row_add9_58, 1);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_ckks_gen_tmp_1205_225, &tmp_row_add9_58, &_preg_268435639);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_ckks_gen_tmp_1205_225._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_ckks_gen_tmp_1205_225._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_row_add9_58._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435639._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_ckks_gen_tmp_1205_225._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_row_add9_58._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435639._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435639._c1_poly);
  Free_poly_data(&_preg_268435639._c0_poly);
  Free_poly_data(&tmp_row_add9_58._c1_poly);
  Free_poly_data(&tmp_row_add9_58._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_60_334, 29 /* cst_95 */, 32768, 1, 5);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_59_333, &_ckks_gen_tmp_1205_225, &_pgen_tmp_60_334);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_59_333._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_59_333._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1205_225._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_60_334._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_59_333._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1205_225._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_60_334._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_60_334._poly);
  Free_poly_data(&_ckks_gen_tmp_1205_225._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1205_225._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435502, &_pgen_tmp_59_333);
  Rescale(&_preg_268435502._c0_poly, &_pgen_tmp_59_333._c0_poly);
  Rescale(&_preg_268435502._c1_poly, &_pgen_tmp_59_333._c1_poly);
  Free_poly_data(&_pgen_tmp_59_333._c1_poly);
  Free_poly_data(&_pgen_tmp_59_333._c0_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&orig_result9_59, &_preg_268435502);
  Free_poly_data(&_preg_268435502._c1_poly);
  Free_poly_data(&_preg_268435502._c0_poly);
  Zero_ciph(&comb_row_result10_60);
  for (comb_row_index_n10_61 = 0; comb_row_index_n10_61 < 16; comb_row_index_n10_61 = comb_row_index_n10_61 + 1) {
    _preg_268435640 = Rotate(orig_result9_59, comb_row_index_n10_61 * 1);
    Copy_ciph(&_ckks_gen_tmp_1236_226, &_preg_268435640);
    Pt_from_msg_ofst(&_pgen_tmp_61_335, 30/* cst_96 */, (comb_row_index_n10_61) * (32768), 32768, 1, 4);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_62_336, &_ckks_gen_tmp_1236_226, &_pgen_tmp_61_335);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&comb_row_result10_60, &comb_row_result10_60, &_pgen_tmp_62_336);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&comb_row_result10_60._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_62_336._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1236_226._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_61_335._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_62_336._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1236_226._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_61_335._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&comb_row_result10_60._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&comb_row_result10_60._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_62_336._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&comb_row_result10_60._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&comb_row_result10_60._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_62_336._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435640._c1_poly);
    Free_poly_data(&_preg_268435640._c0_poly);
  }
  Free_poly_data(&orig_result9_59._c1_poly);
  Free_poly_data(&orig_result9_59._c0_poly);
  Free_poly_data(&_pgen_tmp_61_335._poly);
  Free_poly_data(&_ckks_gen_tmp_1236_226._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1236_226._c0_poly);
  Free_poly_data(&_pgen_tmp_62_336._c1_poly);
  Free_poly_data(&_pgen_tmp_62_336._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&comb_row_result10_60, &comb_row_result10_60);
  Rescale(&comb_row_result10_60._c0_poly, &comb_row_result10_60._c0_poly);
  Rescale(&comb_row_result10_60._c1_poly, &comb_row_result10_60._c1_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&comb_rc_result10_62);
  for (comb_rc_index_n10_63 = 0; comb_rc_index_n10_63 < 16; comb_rc_index_n10_63 = comb_rc_index_n10_63 + 1) {
    _preg_268435641 = Rotate(comb_row_result10_60, comb_rc_index_n10_63 * 48);
    Copy_ciph(&_ckks_gen_tmp_1269_227, &_preg_268435641);
    Pt_from_msg_ofst(&_pgen_tmp_63_337, 31/* cst_97 */, (comb_rc_index_n10_63) * (32768), 32768, 1, 3);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_64_338, &_ckks_gen_tmp_1269_227, &_pgen_tmp_63_337);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&comb_rc_result10_62, &comb_rc_result10_62, &_pgen_tmp_64_338);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&comb_rc_result10_62._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_64_338._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1269_227._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_63_337._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_64_338._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1269_227._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_63_337._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&comb_rc_result10_62._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&comb_rc_result10_62._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_64_338._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&comb_rc_result10_62._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&comb_rc_result10_62._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_64_338._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435641._c1_poly);
    Free_poly_data(&_preg_268435641._c0_poly);
  }
  Free_poly_data(&comb_row_result10_60._c1_poly);
  Free_poly_data(&comb_row_result10_60._c0_poly);
  Free_poly_data(&_pgen_tmp_63_337._poly);
  Free_poly_data(&_ckks_gen_tmp_1269_227._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1269_227._c0_poly);
  Free_poly_data(&_pgen_tmp_64_338._c1_poly);
  Free_poly_data(&_pgen_tmp_64_338._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&comb_rc_result10_62, &comb_rc_result10_62);
  Rescale(&comb_rc_result10_62._c0_poly, &comb_rc_result10_62._c0_poly);
  Rescale(&comb_rc_result10_62._c1_poly, &comb_rc_result10_62._c1_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&ss_result10_64);
  for (comb_cc_index_n10_65 = 0; comb_cc_index_n10_65 < 32; comb_cc_index_n10_65 = comb_cc_index_n10_65 + 1) {
    _preg_268435642 = Rotate(comb_rc_result10_62, comb_cc_index_n10_65 * 768);
    Copy_ciph(&_ckks_gen_tmp_1302_228, &_preg_268435642);
    Pt_from_msg_ofst(&_pgen_tmp_65_339, 32/* cst_98 */, (comb_cc_index_n10_65) * (32768), 32768, 1, 2);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_66_340, &_ckks_gen_tmp_1302_228, &_pgen_tmp_65_339);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&ss_result10_64, &ss_result10_64, &_pgen_tmp_66_340);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&ss_result10_64._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_66_340._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1302_228._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_65_339._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_66_340._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1302_228._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_65_339._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&ss_result10_64._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&ss_result10_64._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_66_340._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&ss_result10_64._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&ss_result10_64._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_66_340._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435642._c1_poly);
    Free_poly_data(&_preg_268435642._c0_poly);
  }
  Free_poly_data(&comb_rc_result10_62._c1_poly);
  Free_poly_data(&comb_rc_result10_62._c0_poly);
  Free_poly_data(&_pgen_tmp_65_339._poly);
  Free_poly_data(&_ckks_gen_tmp_1302_228._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1302_228._c0_poly);
  Free_poly_data(&_pgen_tmp_66_340._c1_poly);
  Free_poly_data(&_pgen_tmp_66_340._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&ss_result10_64, &ss_result10_64);
  Rescale(&ss_result10_64._c0_poly, &ss_result10_64._c0_poly);
  Rescale(&ss_result10_64._c1_poly, &ss_result10_64._c1_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&_preg_268435503, &ss_result10_64);
  Free_poly_data(&ss_result10_64._c1_poly);
  Free_poly_data(&ss_result10_64._c0_poly);
  CMPLR_TM_END(3, 0);
  // pragma: 65537, 1026, 56
  // /fire4/expand2/expand2.0/Conv
  // pragma: 65536, 1027, 57
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435504, &_preg_268435497);
  Free_poly_data(&_preg_268435497._c1_poly);
  Free_poly_data(&_preg_268435497._c0_poly);
  // BlockingRot replicate=1
  Copy_ciph(&input_dup_n10_66, &_preg_268435504);
  Free_poly_data(&_preg_268435504._c1_poly);
  Free_poly_data(&_preg_268435504._c0_poly);
  // BlockingRot HRot=bs=9
  for (bs_input_n10_67 = 0; bs_input_n10_67 < 9; bs_input_n10_67 = bs_input_n10_67 + 1) {
    _preg_268435643 = Rotate(input_dup_n10_66, _cst_102[bs_input_n10_67]);
    Copy_ciph(&input_block_n10_68[bs_input_n10_67], &_preg_268435643);
    Free_poly_data(&_preg_268435643._c1_poly);
    Free_poly_data(&_preg_268435643._c0_poly);
  }
  Free_poly_data(&input_dup_n10_66._c1_poly);
  Free_poly_data(&input_dup_n10_66._c0_poly);
  Zero_ciph(&result_n11_69);
  for (num_grid_n11_70 = 0; num_grid_n11_70 < 32; num_grid_n11_70 = num_grid_n11_70 + 1) {
    Zero_ciph(&result_grid_n11_71);
    for (cap_block_n11_72 = 0; cap_block_n11_72 < 9; cap_block_n11_72 = cap_block_n11_72 + 1) {
      _ckks_gen_tmp_1380_229 = input_block_n10_68[cap_block_n11_72];
      Pt_from_msg_ofst(&_pgen_tmp_67_341, 33/* cst_100 */, ((cap_block_n11_72 + (num_grid_n11_70 * 9))) * (32768), 32768, 1, 7);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_68_342, &_ckks_gen_tmp_1380_229, &_pgen_tmp_67_341);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n11_71, &result_grid_n11_71, &_pgen_tmp_68_342);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&result_grid_n11_71._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_68_342._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1380_229._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_67_341._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_68_342._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1380_229._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_67_341._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n11_71._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n11_71._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_68_342._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n11_71._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n11_71._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_68_342._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435644 = Rotate(result_grid_n11_71, num_grid_n11_70 * 1024);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n11_69, &result_n11_69, &_preg_268435644);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&result_n11_69._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&result_n11_69._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n11_69._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435644._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&result_n11_69._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n11_69._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435644._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435644._c1_poly);
    Free_poly_data(&_preg_268435644._c0_poly);
  }
  Free_ciph_poly(input_block_n10_68, 9);
  Free_poly_data(&_pgen_tmp_67_341._poly);
  Free_poly_data(&_pgen_tmp_68_342._c1_poly);
  Free_poly_data(&_pgen_tmp_68_342._c0_poly);
  Free_poly_data(&result_grid_n11_71._c1_poly);
  Free_poly_data(&result_grid_n11_71._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n11_69, &result_n11_69);
  Rescale(&result_n11_69._c0_poly, &result_n11_69._c0_poly);
  Rescale(&result_n11_69._c1_poly, &result_n11_69._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_70_344, 34 /* cst_103 */, 32768, 1, 6);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_69_343, &result_n11_69, &_pgen_tmp_70_344);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_69_343._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_69_343._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n11_69._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_70_344._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_69_343._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n11_69._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_70_344._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_70_344._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435505, &_pgen_tmp_69_343);
  Rescale(&_preg_268435505._c0_poly, &_pgen_tmp_69_343._c0_poly);
  Rescale(&_preg_268435505._c1_poly, &_pgen_tmp_69_343._c1_poly);
  Free_poly_data(&_pgen_tmp_69_343._c1_poly);
  Free_poly_data(&_pgen_tmp_69_343._c0_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_71_345, 35 /* cst_101 */, 32768, 1, 5);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n11_69, &_preg_268435505, &_pgen_tmp_71_345);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&result_n11_69._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&result_n11_69._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435505._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_71_345._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&result_n11_69._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&_preg_268435505._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_71_345._poly);
  Free_poly_data(&_preg_268435505._c1_poly);
  Free_poly_data(&_preg_268435505._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435506, &result_n11_69);
  Free_poly_data(&result_n11_69._c1_poly);
  Free_poly_data(&result_n11_69._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 57
  // /fire4/expand2/expand2.2/AveragePool
  // pragma: 65536, 1026, 58
  CMPLR_TM_START(3, 0);
  Copy_ciph(&_preg_268435507, &_preg_268435506);
  Free_poly_data(&_preg_268435506._c1_poly);
  Free_poly_data(&_preg_268435506._c0_poly);
  _preg_268435645 = Rotate(_preg_268435507, 32);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&tmp_row_add11_73, &_preg_268435507, &_preg_268435645);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&tmp_row_add11_73._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&tmp_row_add11_73._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435507._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435645._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&tmp_row_add11_73._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435507._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435645._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435645._c1_poly);
  Free_poly_data(&_preg_268435645._c0_poly);
  Free_poly_data(&_preg_268435507._c1_poly);
  Free_poly_data(&_preg_268435507._c0_poly);
  CMPLR_TM_END(12, 0);
  _preg_268435646 = Rotate(tmp_row_add11_73, 1);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_ckks_gen_tmp_1454_230, &tmp_row_add11_73, &_preg_268435646);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_ckks_gen_tmp_1454_230._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_ckks_gen_tmp_1454_230._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_row_add11_73._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435646._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_ckks_gen_tmp_1454_230._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_row_add11_73._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435646._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435646._c1_poly);
  Free_poly_data(&_preg_268435646._c0_poly);
  Free_poly_data(&tmp_row_add11_73._c1_poly);
  Free_poly_data(&tmp_row_add11_73._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_73_347, 36 /* cst_104 */, 32768, 1, 5);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_72_346, &_ckks_gen_tmp_1454_230, &_pgen_tmp_73_347);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_72_346._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_72_346._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1454_230._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_73_347._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_72_346._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1454_230._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_73_347._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_73_347._poly);
  Free_poly_data(&_ckks_gen_tmp_1454_230._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1454_230._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435508, &_pgen_tmp_72_346);
  Rescale(&_preg_268435508._c0_poly, &_pgen_tmp_72_346._c0_poly);
  Rescale(&_preg_268435508._c1_poly, &_pgen_tmp_72_346._c1_poly);
  Free_poly_data(&_pgen_tmp_72_346._c1_poly);
  Free_poly_data(&_pgen_tmp_72_346._c0_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&orig_result11_74, &_preg_268435508);
  Free_poly_data(&_preg_268435508._c1_poly);
  Free_poly_data(&_preg_268435508._c0_poly);
  Zero_ciph(&comb_row_result12_75);
  for (comb_row_index_n12_76 = 0; comb_row_index_n12_76 < 16; comb_row_index_n12_76 = comb_row_index_n12_76 + 1) {
    _preg_268435647 = Rotate(orig_result11_74, comb_row_index_n12_76 * 1);
    Copy_ciph(&_ckks_gen_tmp_1485_231, &_preg_268435647);
    Pt_from_msg_ofst(&_pgen_tmp_74_348, 37/* cst_105 */, (comb_row_index_n12_76) * (32768), 32768, 1, 4);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_75_349, &_ckks_gen_tmp_1485_231, &_pgen_tmp_74_348);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&comb_row_result12_75, &comb_row_result12_75, &_pgen_tmp_75_349);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&comb_row_result12_75._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_75_349._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1485_231._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_74_348._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_75_349._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1485_231._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_74_348._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&comb_row_result12_75._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&comb_row_result12_75._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_75_349._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&comb_row_result12_75._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&comb_row_result12_75._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_75_349._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435647._c1_poly);
    Free_poly_data(&_preg_268435647._c0_poly);
  }
  Free_poly_data(&orig_result11_74._c1_poly);
  Free_poly_data(&orig_result11_74._c0_poly);
  Free_poly_data(&_pgen_tmp_74_348._poly);
  Free_poly_data(&_ckks_gen_tmp_1485_231._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1485_231._c0_poly);
  Free_poly_data(&_pgen_tmp_75_349._c1_poly);
  Free_poly_data(&_pgen_tmp_75_349._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&comb_row_result12_75, &comb_row_result12_75);
  Rescale(&comb_row_result12_75._c0_poly, &comb_row_result12_75._c0_poly);
  Rescale(&comb_row_result12_75._c1_poly, &comb_row_result12_75._c1_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&comb_rc_result12_77);
  for (comb_rc_index_n12_78 = 0; comb_rc_index_n12_78 < 16; comb_rc_index_n12_78 = comb_rc_index_n12_78 + 1) {
    _preg_268435648 = Rotate(comb_row_result12_75, comb_rc_index_n12_78 * 48);
    Copy_ciph(&_ckks_gen_tmp_1518_232, &_preg_268435648);
    Pt_from_msg_ofst(&_pgen_tmp_76_350, 38/* cst_106 */, (comb_rc_index_n12_78) * (32768), 32768, 1, 3);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_77_351, &_ckks_gen_tmp_1518_232, &_pgen_tmp_76_350);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&comb_rc_result12_77, &comb_rc_result12_77, &_pgen_tmp_77_351);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&comb_rc_result12_77._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_77_351._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1518_232._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_76_350._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_77_351._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1518_232._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_76_350._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&comb_rc_result12_77._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&comb_rc_result12_77._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_77_351._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&comb_rc_result12_77._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&comb_rc_result12_77._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_77_351._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435648._c1_poly);
    Free_poly_data(&_preg_268435648._c0_poly);
  }
  Free_poly_data(&comb_row_result12_75._c1_poly);
  Free_poly_data(&comb_row_result12_75._c0_poly);
  Free_poly_data(&_pgen_tmp_76_350._poly);
  Free_poly_data(&_ckks_gen_tmp_1518_232._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1518_232._c0_poly);
  Free_poly_data(&_pgen_tmp_77_351._c1_poly);
  Free_poly_data(&_pgen_tmp_77_351._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&comb_rc_result12_77, &comb_rc_result12_77);
  Rescale(&comb_rc_result12_77._c0_poly, &comb_rc_result12_77._c0_poly);
  Rescale(&comb_rc_result12_77._c1_poly, &comb_rc_result12_77._c1_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&ss_result12_79);
  for (comb_cc_index_n12_80 = 0; comb_cc_index_n12_80 < 32; comb_cc_index_n12_80 = comb_cc_index_n12_80 + 1) {
    _preg_268435649 = Rotate(comb_rc_result12_77, comb_cc_index_n12_80 * 768);
    Copy_ciph(&_ckks_gen_tmp_1551_233, &_preg_268435649);
    Pt_from_msg_ofst(&_pgen_tmp_78_352, 39/* cst_107 */, (comb_cc_index_n12_80) * (32768), 32768, 1, 2);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_79_353, &_ckks_gen_tmp_1551_233, &_pgen_tmp_78_352);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&ss_result12_79, &ss_result12_79, &_pgen_tmp_79_353);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&ss_result12_79._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_79_353._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1551_233._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_78_352._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_79_353._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1551_233._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_78_352._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&ss_result12_79._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&ss_result12_79._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_79_353._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&ss_result12_79._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&ss_result12_79._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_79_353._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435649._c1_poly);
    Free_poly_data(&_preg_268435649._c0_poly);
  }
  Free_poly_data(&comb_rc_result12_77._c1_poly);
  Free_poly_data(&comb_rc_result12_77._c0_poly);
  Free_poly_data(&_pgen_tmp_78_352._poly);
  Free_poly_data(&_ckks_gen_tmp_1551_233._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1551_233._c0_poly);
  Free_poly_data(&_pgen_tmp_79_353._c1_poly);
  Free_poly_data(&_pgen_tmp_79_353._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&ss_result12_79, &ss_result12_79);
  Rescale(&ss_result12_79._c0_poly, &ss_result12_79._c0_poly);
  Rescale(&ss_result12_79._c1_poly, &ss_result12_79._c1_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&_preg_268435509, &ss_result12_79);
  Free_poly_data(&ss_result12_79._c1_poly);
  Free_poly_data(&ss_result12_79._c0_poly);
  CMPLR_TM_END(3, 0);
  // pragma: 65537, 1026, 58
  // /fire4/Concat
  // pragma: 65536, 1045, 59
  CMPLR_TM_START(4, 0);
  _preg_268435650 = Rotate(_preg_268435509, -8192);
  Free_poly_data(&_preg_268435509._c1_poly);
  Free_poly_data(&_preg_268435509._c0_poly);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435510, &_preg_268435503, &_preg_268435650);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_preg_268435510._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_preg_268435510._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435503._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435650._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_preg_268435510._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435503._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435650._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435650._c1_poly);
  Free_poly_data(&_preg_268435650._c0_poly);
  Free_poly_data(&_preg_268435503._c1_poly);
  Free_poly_data(&_preg_268435503._c0_poly);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_END(4, 0);
  // pragma: 65537, 1045, 59
  // /fire4/relu/Relu
  // pragma: 65536, 1033, 60
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435511, &_preg_268435510, 13);
  Free_poly_data(&_preg_268435510._c1_poly);
  Free_poly_data(&_preg_268435510._c0_poly);
  _preg_268435512 = App_relu(_preg_268435511, _preg_268435511, 16384);
  Free_poly_data(&_preg_268435511._c1_poly);
  Free_poly_data(&_preg_268435511._c0_poly);
  Copy_ciph(&_preg_268435513, &_preg_268435512);
  Free_poly_data(&_preg_268435512._c1_poly);
  Free_poly_data(&_preg_268435512._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 60
  // /fire5/squeeze/squeeze.0/Conv
  // pragma: 65536, 1027, 61
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435514, &_preg_268435513);
  Free_poly_data(&_preg_268435513._c1_poly);
  Free_poly_data(&_preg_268435513._c0_poly);
  Zero_ciph(&tmp_result_n13_81);
  _preg_268435651 = Rotate(_preg_268435514, -16384);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n13_82, &_preg_268435514, &_preg_268435651);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&input_dup_n13_82._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&input_dup_n13_82._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435514._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435651._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n13_82._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435514._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435651._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435651._c1_poly);
  Free_poly_data(&_preg_268435651._c0_poly);
  Free_poly_data(&_preg_268435514._c1_poly);
  Free_poly_data(&_preg_268435514._c0_poly);
  CMPLR_TM_END(12, 0);
  for (index_cin_n13_83 = 0; index_cin_n13_83 < 64; index_cin_n13_83 = index_cin_n13_83 + 1) {
    for (index_khw_n13_84 = 0; index_khw_n13_84 < 1; index_khw_n13_84 = index_khw_n13_84 + 1) {
      _preg_268435652 = Rotate(input_dup_n13_82, _cst_111[index_khw_n13_84]);
      Copy_ciph(&_ckks_gen_tmp_1647_234, &_preg_268435652);
      Pt_from_msg_ofst(&_pgen_tmp_80_354, 40/* cst_109 */, ((index_khw_n13_84 + (index_cin_n13_83 * 1))) * (8192), 8192, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_81_355, &_ckks_gen_tmp_1647_234, &_pgen_tmp_80_354);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&tmp_result_n13_81, &tmp_result_n13_81, &_pgen_tmp_81_355);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&tmp_result_n13_81._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_81_355._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1647_234._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_80_354._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_81_355._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1647_234._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_80_354._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&tmp_result_n13_81._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_result_n13_81._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_81_355._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&tmp_result_n13_81._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_result_n13_81._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_81_355._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435652._c1_poly);
      Free_poly_data(&_preg_268435652._c0_poly);
    }
    _preg_268435653 = Rotate(input_dup_n13_82, 256);
    Copy_ciph(&input_dup_n13_82, &_preg_268435653);
    Free_poly_data(&_preg_268435653._c1_poly);
    Free_poly_data(&_preg_268435653._c0_poly);
  }
  Free_poly_data(&_pgen_tmp_80_354._poly);
  Free_poly_data(&_ckks_gen_tmp_1647_234._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1647_234._c0_poly);
  Free_poly_data(&_pgen_tmp_81_355._c1_poly);
  Free_poly_data(&_pgen_tmp_81_355._c0_poly);
  Free_poly_data(&input_dup_n13_82._c1_poly);
  Free_poly_data(&input_dup_n13_82._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&tmp_result_n13_81, &tmp_result_n13_81);
  Rescale(&tmp_result_n13_81._c0_poly, &tmp_result_n13_81._c0_poly);
  Rescale(&tmp_result_n13_81._c1_poly, &tmp_result_n13_81._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_82_356, 41 /* cst_110 */, 8192, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&tmp_result_n13_81, &tmp_result_n13_81, &_pgen_tmp_82_356);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&tmp_result_n13_81._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&tmp_result_n13_81._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_result_n13_81._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_82_356._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&tmp_result_n13_81._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&tmp_result_n13_81._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_82_356._poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435515, &tmp_result_n13_81);
  Free_poly_data(&tmp_result_n13_81._c1_poly);
  Free_poly_data(&tmp_result_n13_81._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 61
  // /fire5/squeeze/squeeze.2/Relu
  // pragma: 65536, 1033, 62
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435516, &_preg_268435515, 14);
  Free_poly_data(&_preg_268435515._c1_poly);
  Free_poly_data(&_preg_268435515._c0_poly);
  _preg_268435517 = App_relu(_preg_268435516, _preg_268435516, 8192);
  Free_poly_data(&_preg_268435516._c1_poly);
  Free_poly_data(&_preg_268435516._c0_poly);
  Copy_ciph(&_preg_268435518, &_preg_268435517);
  Free_poly_data(&_preg_268435517._c1_poly);
  Free_poly_data(&_preg_268435517._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 62
  // /fire5/expand1/expand1.0/Conv
  // pragma: 65536, 1027, 63
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435519, &_preg_268435518);
  // BlockingRot replicate=3
  _preg_268435654 = Rotate(_preg_268435519, -8192);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_83_357, &_preg_268435519, &_preg_268435654);
  CMPLR_TM_END(12, 0);
  _preg_268435655 = Rotate(_preg_268435519, -16384);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n13_85, &_pgen_tmp_83_357, &_preg_268435655);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&input_dup_n13_85._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_83_357._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435519._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435654._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_83_357._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435519._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435654._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n13_85._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_83_357._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435655._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n13_85._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_83_357._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435655._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435654._c1_poly);
  Free_poly_data(&_preg_268435654._c0_poly);
  Free_poly_data(&_preg_268435519._c1_poly);
  Free_poly_data(&_preg_268435519._c0_poly);
  Free_poly_data(&_preg_268435655._c1_poly);
  Free_poly_data(&_preg_268435655._c0_poly);
  Free_poly_data(&_pgen_tmp_83_357._c1_poly);
  Free_poly_data(&_pgen_tmp_83_357._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=4
  for (bs_input_n13_86 = 0; bs_input_n13_86 < 4; bs_input_n13_86 = bs_input_n13_86 + 1) {
    _preg_268435656 = Rotate(input_dup_n13_85, _cst_115[bs_input_n13_86]);
    Copy_ciph(&input_block_n13_87[bs_input_n13_86], &_preg_268435656);
    Free_poly_data(&_preg_268435656._c1_poly);
    Free_poly_data(&_preg_268435656._c0_poly);
  }
  Free_poly_data(&input_dup_n13_85._c1_poly);
  Free_poly_data(&input_dup_n13_85._c0_poly);
  Zero_ciph(&result_n14_88);
  for (num_grid_n14_89 = 0; num_grid_n14_89 < 8; num_grid_n14_89 = num_grid_n14_89 + 1) {
    Zero_ciph(&result_grid_n14_90);
    for (cap_block_n14_91 = 0; cap_block_n14_91 < 4; cap_block_n14_91 = cap_block_n14_91 + 1) {
      _ckks_gen_tmp_1769_235 = input_block_n13_87[cap_block_n14_91];
      Pt_from_msg_ofst(&_pgen_tmp_84_358, 42/* cst_113 */, ((cap_block_n14_91 + (num_grid_n14_89 * 4))) * (16384), 16384, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_85_359, &_ckks_gen_tmp_1769_235, &_pgen_tmp_84_358);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n14_90, &result_grid_n14_90, &_pgen_tmp_85_359);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&result_grid_n14_90._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_85_359._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1769_235._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_84_358._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_85_359._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1769_235._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_84_358._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n14_90._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n14_90._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_85_359._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n14_90._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n14_90._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_85_359._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435657 = Rotate(result_grid_n14_90, num_grid_n14_89 * 1024);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n14_88, &result_n14_88, &_preg_268435657);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&result_n14_88._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&result_n14_88._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n14_88._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435657._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&result_n14_88._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n14_88._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435657._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435657._c1_poly);
    Free_poly_data(&_preg_268435657._c0_poly);
  }
  Free_ciph_poly(input_block_n13_87, 4);
  Free_poly_data(&_pgen_tmp_84_358._poly);
  Free_poly_data(&_pgen_tmp_85_359._c1_poly);
  Free_poly_data(&_pgen_tmp_85_359._c0_poly);
  Free_poly_data(&result_grid_n14_90._c1_poly);
  Free_poly_data(&result_grid_n14_90._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n14_88, &result_n14_88);
  Rescale(&result_n14_88._c0_poly, &result_n14_88._c0_poly);
  Rescale(&result_n14_88._c1_poly, &result_n14_88._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_87_361, 43 /* cst_116 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_86_360, &result_n14_88, &_pgen_tmp_87_361);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_86_360._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_86_360._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n14_88._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_87_361._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_86_360._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n14_88._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_87_361._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_87_361._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435520, &_pgen_tmp_86_360);
  Rescale(&_preg_268435520._c0_poly, &_pgen_tmp_86_360._c0_poly);
  Rescale(&_preg_268435520._c1_poly, &_pgen_tmp_86_360._c1_poly);
  Free_poly_data(&_pgen_tmp_86_360._c1_poly);
  Free_poly_data(&_pgen_tmp_86_360._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435658 = Rotate(result_n14_88, -16384);
  Copy_ciph(&_ckks_gen_tmp_1813_236, &_preg_268435658);
  Free_poly_data(&_preg_268435658._c1_poly);
  Free_poly_data(&_preg_268435658._c0_poly);
  Pt_from_msg(&_pgen_tmp_89_363, 44 /* cst_117 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_88_362, &_ckks_gen_tmp_1813_236, &_pgen_tmp_89_363);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_88_362._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_88_362._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1813_236._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_89_363._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_88_362._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1813_236._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_89_363._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_89_363._poly);
  Free_poly_data(&_ckks_gen_tmp_1813_236._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1813_236._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_90_364, &_pgen_tmp_88_362);
  Rescale(&_pgen_tmp_90_364._c0_poly, &_pgen_tmp_88_362._c0_poly);
  Rescale(&_pgen_tmp_90_364._c1_poly, &_pgen_tmp_88_362._c1_poly);
  Free_poly_data(&_pgen_tmp_88_362._c1_poly);
  Free_poly_data(&_pgen_tmp_88_362._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435520, &_preg_268435520, &_pgen_tmp_90_364);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_preg_268435520._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_preg_268435520._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435520._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_90_364._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_preg_268435520._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435520._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_90_364._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_90_364._c1_poly);
  Free_poly_data(&_pgen_tmp_90_364._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_91_365, 45 /* cst_114 */, 16384, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n14_88, &_preg_268435520, &_pgen_tmp_91_365);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&result_n14_88._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&result_n14_88._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435520._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_91_365._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&result_n14_88._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&_preg_268435520._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_91_365._poly);
  Free_poly_data(&_preg_268435520._c1_poly);
  Free_poly_data(&_preg_268435520._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435521, &result_n14_88);
  Free_poly_data(&result_n14_88._c1_poly);
  Free_poly_data(&result_n14_88._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 63
  // /fire5/expand2/expand2.0/Conv
  // pragma: 65536, 1027, 64
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435522, &_preg_268435518);
  Free_poly_data(&_preg_268435518._c1_poly);
  Free_poly_data(&_preg_268435518._c0_poly);
  // BlockingRot replicate=2
  _preg_268435659 = Rotate(_preg_268435522, -8192);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n14_92, &_preg_268435522, &_preg_268435659);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&input_dup_n14_92._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&input_dup_n14_92._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435522._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435659._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n14_92._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435522._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435659._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435659._c1_poly);
  Free_poly_data(&_preg_268435659._c0_poly);
  Free_poly_data(&_preg_268435522._c1_poly);
  Free_poly_data(&_preg_268435522._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=9
  for (bs_input_n14_93 = 0; bs_input_n14_93 < 9; bs_input_n14_93 = bs_input_n14_93 + 1) {
    _preg_268435660 = Rotate(input_dup_n14_92, _cst_121[bs_input_n14_93]);
    Copy_ciph(&input_block_n14_94[bs_input_n14_93], &_preg_268435660);
    Free_poly_data(&_preg_268435660._c1_poly);
    Free_poly_data(&_preg_268435660._c0_poly);
  }
  Free_poly_data(&input_dup_n14_92._c1_poly);
  Free_poly_data(&input_dup_n14_92._c0_poly);
  Zero_ciph(&result_n15_95);
  for (num_grid_n15_96 = 0; num_grid_n15_96 < 32; num_grid_n15_96 = num_grid_n15_96 + 1) {
    Zero_ciph(&result_grid_n15_97);
    for (cap_block_n15_98 = 0; cap_block_n15_98 < 9; cap_block_n15_98 = cap_block_n15_98 + 1) {
      _ckks_gen_tmp_1902_237 = input_block_n14_94[cap_block_n15_98];
      Pt_from_msg_ofst(&_pgen_tmp_92_366, 46/* cst_119 */, ((cap_block_n15_98 + (num_grid_n15_96 * 9))) * (16384), 16384, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_93_367, &_ckks_gen_tmp_1902_237, &_pgen_tmp_92_366);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n15_97, &result_grid_n15_97, &_pgen_tmp_93_367);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&result_grid_n15_97._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_93_367._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1902_237._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_92_366._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_93_367._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1902_237._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_92_366._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n15_97._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n15_97._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_93_367._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n15_97._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n15_97._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_93_367._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435661 = Rotate(result_grid_n15_97, num_grid_n15_96 * 256);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n15_95, &result_n15_95, &_preg_268435661);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&result_n15_95._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&result_n15_95._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n15_95._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435661._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&result_n15_95._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n15_95._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435661._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435661._c1_poly);
    Free_poly_data(&_preg_268435661._c0_poly);
  }
  Free_ciph_poly(input_block_n14_94, 9);
  Free_poly_data(&_pgen_tmp_92_366._poly);
  Free_poly_data(&_pgen_tmp_93_367._c1_poly);
  Free_poly_data(&_pgen_tmp_93_367._c0_poly);
  Free_poly_data(&result_grid_n15_97._c1_poly);
  Free_poly_data(&result_grid_n15_97._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n15_95, &result_n15_95);
  Rescale(&result_n15_95._c0_poly, &result_n15_95._c0_poly);
  Rescale(&result_n15_95._c1_poly, &result_n15_95._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_95_369, 47 /* cst_122 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_94_368, &result_n15_95, &_pgen_tmp_95_369);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_94_368._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_94_368._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n15_95._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_95_369._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_94_368._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n15_95._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_95_369._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_95_369._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435523, &_pgen_tmp_94_368);
  Rescale(&_preg_268435523._c0_poly, &_pgen_tmp_94_368._c0_poly);
  Rescale(&_preg_268435523._c1_poly, &_pgen_tmp_94_368._c1_poly);
  Free_poly_data(&_pgen_tmp_94_368._c1_poly);
  Free_poly_data(&_pgen_tmp_94_368._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435662 = Rotate(result_n15_95, -16384);
  Copy_ciph(&_ckks_gen_tmp_1946_238, &_preg_268435662);
  Free_poly_data(&_preg_268435662._c1_poly);
  Free_poly_data(&_preg_268435662._c0_poly);
  Pt_from_msg(&_pgen_tmp_97_371, 48 /* cst_123 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_96_370, &_ckks_gen_tmp_1946_238, &_pgen_tmp_97_371);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_96_370._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_96_370._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1946_238._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_97_371._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_96_370._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_1946_238._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_97_371._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_97_371._poly);
  Free_poly_data(&_ckks_gen_tmp_1946_238._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1946_238._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_98_372, &_pgen_tmp_96_370);
  Rescale(&_pgen_tmp_98_372._c0_poly, &_pgen_tmp_96_370._c0_poly);
  Rescale(&_pgen_tmp_98_372._c1_poly, &_pgen_tmp_96_370._c1_poly);
  Free_poly_data(&_pgen_tmp_96_370._c1_poly);
  Free_poly_data(&_pgen_tmp_96_370._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435523, &_preg_268435523, &_pgen_tmp_98_372);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_preg_268435523._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_preg_268435523._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435523._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_98_372._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_preg_268435523._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435523._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_98_372._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_98_372._c1_poly);
  Free_poly_data(&_pgen_tmp_98_372._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_99_373, 49 /* cst_120 */, 16384, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n15_95, &_preg_268435523, &_pgen_tmp_99_373);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&result_n15_95._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&result_n15_95._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435523._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_99_373._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&result_n15_95._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&_preg_268435523._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_99_373._poly);
  Free_poly_data(&_preg_268435523._c1_poly);
  Free_poly_data(&_preg_268435523._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435524, &result_n15_95);
  Free_poly_data(&result_n15_95._c1_poly);
  Free_poly_data(&result_n15_95._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 64
  // /fire5/Concat
  // pragma: 65536, 1045, 65
  CMPLR_TM_START(4, 0);
  _preg_268435663 = Rotate(_preg_268435524, -16384);
  Free_poly_data(&_preg_268435524._c1_poly);
  Free_poly_data(&_preg_268435524._c0_poly);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435525, &_preg_268435521, &_preg_268435663);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_preg_268435525._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_preg_268435525._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435521._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435663._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_preg_268435525._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435521._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435663._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435663._c1_poly);
  Free_poly_data(&_preg_268435663._c0_poly);
  Free_poly_data(&_preg_268435521._c1_poly);
  Free_poly_data(&_preg_268435521._c0_poly);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_END(4, 0);
  // pragma: 65537, 1045, 65
  // /fire5/relu/Relu
  // pragma: 65536, 1033, 66
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435526, &_preg_268435525, 13);
  Free_poly_data(&_preg_268435525._c1_poly);
  Free_poly_data(&_preg_268435525._c0_poly);
  _preg_268435527 = App_relu(_preg_268435526, _preg_268435526, 32768);
  Free_poly_data(&_preg_268435526._c1_poly);
  Free_poly_data(&_preg_268435526._c0_poly);
  Copy_ciph(&_preg_268435528, &_preg_268435527);
  Free_poly_data(&_preg_268435527._c1_poly);
  Free_poly_data(&_preg_268435527._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 66
  // /fire6/squeeze/squeeze.0/Conv
  // pragma: 65536, 1027, 67
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435529, &_preg_268435528);
  Free_poly_data(&_preg_268435528._c1_poly);
  Free_poly_data(&_preg_268435528._c0_poly);
  Zero_ciph(&tmp_result_n16_99);
  Copy_ciph(&input_dup_n16_100, &_preg_268435529);
  Free_poly_data(&_preg_268435529._c1_poly);
  Free_poly_data(&_preg_268435529._c0_poly);
  for (index_cin_n16_101 = 0; index_cin_n16_101 < 128; index_cin_n16_101 = index_cin_n16_101 + 1) {
    for (index_khw_n16_102 = 0; index_khw_n16_102 < 1; index_khw_n16_102 = index_khw_n16_102 + 1) {
      _preg_268435664 = Rotate(input_dup_n16_100, _cst_127[index_khw_n16_102]);
      Copy_ciph(&_ckks_gen_tmp_2045_239, &_preg_268435664);
      Pt_from_msg_ofst(&_pgen_tmp_100_374, 50/* cst_125 */, ((index_khw_n16_102 + (index_cin_n16_101 * 1))) * (8192), 8192, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_101_375, &_ckks_gen_tmp_2045_239, &_pgen_tmp_100_374);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&tmp_result_n16_99, &tmp_result_n16_99, &_pgen_tmp_101_375);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&tmp_result_n16_99._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_101_375._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2045_239._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_100_374._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_101_375._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2045_239._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_100_374._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&tmp_result_n16_99._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_result_n16_99._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_101_375._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&tmp_result_n16_99._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_result_n16_99._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_101_375._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435664._c1_poly);
      Free_poly_data(&_preg_268435664._c0_poly);
    }
    _preg_268435665 = Rotate(input_dup_n16_100, 256);
    Copy_ciph(&input_dup_n16_100, &_preg_268435665);
    Free_poly_data(&_preg_268435665._c1_poly);
    Free_poly_data(&_preg_268435665._c0_poly);
  }
  Free_poly_data(&_pgen_tmp_100_374._poly);
  Free_poly_data(&_ckks_gen_tmp_2045_239._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2045_239._c0_poly);
  Free_poly_data(&_pgen_tmp_101_375._c1_poly);
  Free_poly_data(&_pgen_tmp_101_375._c0_poly);
  Free_poly_data(&input_dup_n16_100._c1_poly);
  Free_poly_data(&input_dup_n16_100._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&tmp_result_n16_99, &tmp_result_n16_99);
  Rescale(&tmp_result_n16_99._c0_poly, &tmp_result_n16_99._c0_poly);
  Rescale(&tmp_result_n16_99._c1_poly, &tmp_result_n16_99._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_102_376, 51 /* cst_126 */, 8192, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&tmp_result_n16_99, &tmp_result_n16_99, &_pgen_tmp_102_376);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&tmp_result_n16_99._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&tmp_result_n16_99._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_result_n16_99._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_102_376._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&tmp_result_n16_99._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&tmp_result_n16_99._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_102_376._poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435530, &tmp_result_n16_99);
  Free_poly_data(&tmp_result_n16_99._c1_poly);
  Free_poly_data(&tmp_result_n16_99._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 67
  // /fire6/squeeze/squeeze.2/Relu
  // pragma: 65536, 1033, 68
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435531, &_preg_268435530, 14);
  Free_poly_data(&_preg_268435530._c1_poly);
  Free_poly_data(&_preg_268435530._c0_poly);
  _preg_268435532 = App_relu(_preg_268435531, _preg_268435531, 8192);
  Free_poly_data(&_preg_268435531._c1_poly);
  Free_poly_data(&_preg_268435531._c0_poly);
  Copy_ciph(&_preg_268435533, &_preg_268435532);
  Free_poly_data(&_preg_268435532._c1_poly);
  Free_poly_data(&_preg_268435532._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 68
  // /fire6/expand1/expand1.0/Conv
  // pragma: 65536, 1027, 69
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435534, &_preg_268435533);
  // BlockingRot replicate=3
  _preg_268435666 = Rotate(_preg_268435534, -8192);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_103_377, &_preg_268435534, &_preg_268435666);
  CMPLR_TM_END(12, 0);
  _preg_268435667 = Rotate(_preg_268435534, -16384);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n16_103, &_pgen_tmp_103_377, &_preg_268435667);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&input_dup_n16_103._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_103_377._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435534._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435666._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_103_377._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435534._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435666._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n16_103._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_103_377._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435667._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n16_103._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_103_377._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435667._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435666._c1_poly);
  Free_poly_data(&_preg_268435666._c0_poly);
  Free_poly_data(&_preg_268435534._c1_poly);
  Free_poly_data(&_preg_268435534._c0_poly);
  Free_poly_data(&_preg_268435667._c1_poly);
  Free_poly_data(&_preg_268435667._c0_poly);
  Free_poly_data(&_pgen_tmp_103_377._c1_poly);
  Free_poly_data(&_pgen_tmp_103_377._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=4
  for (bs_input_n16_104 = 0; bs_input_n16_104 < 4; bs_input_n16_104 = bs_input_n16_104 + 1) {
    _preg_268435668 = Rotate(input_dup_n16_103, _cst_131[bs_input_n16_104]);
    Copy_ciph(&input_block_n16_105[bs_input_n16_104], &_preg_268435668);
    Free_poly_data(&_preg_268435668._c1_poly);
    Free_poly_data(&_preg_268435668._c0_poly);
  }
  Free_poly_data(&input_dup_n16_103._c1_poly);
  Free_poly_data(&input_dup_n16_103._c0_poly);
  Zero_ciph(&result_n17_106);
  for (num_grid_n17_107 = 0; num_grid_n17_107 < 8; num_grid_n17_107 = num_grid_n17_107 + 1) {
    Zero_ciph(&result_grid_n17_108);
    for (cap_block_n17_109 = 0; cap_block_n17_109 < 4; cap_block_n17_109 = cap_block_n17_109 + 1) {
      _ckks_gen_tmp_2167_240 = input_block_n16_105[cap_block_n17_109];
      Pt_from_msg_ofst(&_pgen_tmp_104_378, 52/* cst_129 */, ((cap_block_n17_109 + (num_grid_n17_107 * 4))) * (16384), 16384, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_105_379, &_ckks_gen_tmp_2167_240, &_pgen_tmp_104_378);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n17_108, &result_grid_n17_108, &_pgen_tmp_105_379);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&result_grid_n17_108._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_105_379._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2167_240._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_104_378._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_105_379._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2167_240._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_104_378._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n17_108._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n17_108._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_105_379._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n17_108._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n17_108._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_105_379._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435669 = Rotate(result_grid_n17_108, num_grid_n17_107 * 1024);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n17_106, &result_n17_106, &_preg_268435669);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&result_n17_106._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&result_n17_106._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n17_106._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435669._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&result_n17_106._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n17_106._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435669._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435669._c1_poly);
    Free_poly_data(&_preg_268435669._c0_poly);
  }
  Free_ciph_poly(input_block_n16_105, 4);
  Free_poly_data(&_pgen_tmp_104_378._poly);
  Free_poly_data(&_pgen_tmp_105_379._c1_poly);
  Free_poly_data(&_pgen_tmp_105_379._c0_poly);
  Free_poly_data(&result_grid_n17_108._c1_poly);
  Free_poly_data(&result_grid_n17_108._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n17_106, &result_n17_106);
  Rescale(&result_n17_106._c0_poly, &result_n17_106._c0_poly);
  Rescale(&result_n17_106._c1_poly, &result_n17_106._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_107_381, 53 /* cst_132 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_106_380, &result_n17_106, &_pgen_tmp_107_381);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_106_380._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_106_380._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n17_106._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_107_381._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_106_380._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n17_106._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_107_381._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_107_381._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435535, &_pgen_tmp_106_380);
  Rescale(&_preg_268435535._c0_poly, &_pgen_tmp_106_380._c0_poly);
  Rescale(&_preg_268435535._c1_poly, &_pgen_tmp_106_380._c1_poly);
  Free_poly_data(&_pgen_tmp_106_380._c1_poly);
  Free_poly_data(&_pgen_tmp_106_380._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435670 = Rotate(result_n17_106, -16384);
  Copy_ciph(&_ckks_gen_tmp_2211_241, &_preg_268435670);
  Free_poly_data(&_preg_268435670._c1_poly);
  Free_poly_data(&_preg_268435670._c0_poly);
  Pt_from_msg(&_pgen_tmp_109_383, 54 /* cst_133 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_108_382, &_ckks_gen_tmp_2211_241, &_pgen_tmp_109_383);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_108_382._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_108_382._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2211_241._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_109_383._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_108_382._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2211_241._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_109_383._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_109_383._poly);
  Free_poly_data(&_ckks_gen_tmp_2211_241._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2211_241._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_110_384, &_pgen_tmp_108_382);
  Rescale(&_pgen_tmp_110_384._c0_poly, &_pgen_tmp_108_382._c0_poly);
  Rescale(&_pgen_tmp_110_384._c1_poly, &_pgen_tmp_108_382._c1_poly);
  Free_poly_data(&_pgen_tmp_108_382._c1_poly);
  Free_poly_data(&_pgen_tmp_108_382._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435535, &_preg_268435535, &_pgen_tmp_110_384);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_preg_268435535._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_preg_268435535._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435535._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_110_384._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_preg_268435535._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435535._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_110_384._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_110_384._c1_poly);
  Free_poly_data(&_pgen_tmp_110_384._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_111_385, 55 /* cst_130 */, 16384, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n17_106, &_preg_268435535, &_pgen_tmp_111_385);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&result_n17_106._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&result_n17_106._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435535._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_111_385._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&result_n17_106._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&_preg_268435535._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_111_385._poly);
  Free_poly_data(&_preg_268435535._c1_poly);
  Free_poly_data(&_preg_268435535._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435536, &result_n17_106);
  Free_poly_data(&result_n17_106._c1_poly);
  Free_poly_data(&result_n17_106._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 69
  // /fire6/expand2/expand2.0/Conv
  // pragma: 65536, 1027, 70
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435537, &_preg_268435533);
  Free_poly_data(&_preg_268435533._c1_poly);
  Free_poly_data(&_preg_268435533._c0_poly);
  // BlockingRot replicate=2
  _preg_268435671 = Rotate(_preg_268435537, -8192);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n17_110, &_preg_268435537, &_preg_268435671);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&input_dup_n17_110._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&input_dup_n17_110._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435537._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435671._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n17_110._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435537._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435671._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435671._c1_poly);
  Free_poly_data(&_preg_268435671._c0_poly);
  Free_poly_data(&_preg_268435537._c1_poly);
  Free_poly_data(&_preg_268435537._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=9
  for (bs_input_n17_111 = 0; bs_input_n17_111 < 9; bs_input_n17_111 = bs_input_n17_111 + 1) {
    _preg_268435672 = Rotate(input_dup_n17_110, _cst_137[bs_input_n17_111]);
    Copy_ciph(&input_block_n17_112[bs_input_n17_111], &_preg_268435672);
    Free_poly_data(&_preg_268435672._c1_poly);
    Free_poly_data(&_preg_268435672._c0_poly);
  }
  Free_poly_data(&input_dup_n17_110._c1_poly);
  Free_poly_data(&input_dup_n17_110._c0_poly);
  Zero_ciph(&result_n18_113);
  for (num_grid_n18_114 = 0; num_grid_n18_114 < 32; num_grid_n18_114 = num_grid_n18_114 + 1) {
    Zero_ciph(&result_grid_n18_115);
    for (cap_block_n18_116 = 0; cap_block_n18_116 < 9; cap_block_n18_116 = cap_block_n18_116 + 1) {
      _ckks_gen_tmp_2300_242 = input_block_n17_112[cap_block_n18_116];
      Pt_from_msg_ofst(&_pgen_tmp_112_386, 56/* cst_135 */, ((cap_block_n18_116 + (num_grid_n18_114 * 9))) * (16384), 16384, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_113_387, &_ckks_gen_tmp_2300_242, &_pgen_tmp_112_386);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n18_115, &result_grid_n18_115, &_pgen_tmp_113_387);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&result_grid_n18_115._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_113_387._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2300_242._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_112_386._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_113_387._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2300_242._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_112_386._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n18_115._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n18_115._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_113_387._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n18_115._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n18_115._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_113_387._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435673 = Rotate(result_grid_n18_115, num_grid_n18_114 * 256);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n18_113, &result_n18_113, &_preg_268435673);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&result_n18_113._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&result_n18_113._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n18_113._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435673._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&result_n18_113._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n18_113._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435673._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435673._c1_poly);
    Free_poly_data(&_preg_268435673._c0_poly);
  }
  Free_ciph_poly(input_block_n17_112, 9);
  Free_poly_data(&_pgen_tmp_112_386._poly);
  Free_poly_data(&_pgen_tmp_113_387._c1_poly);
  Free_poly_data(&_pgen_tmp_113_387._c0_poly);
  Free_poly_data(&result_grid_n18_115._c1_poly);
  Free_poly_data(&result_grid_n18_115._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n18_113, &result_n18_113);
  Rescale(&result_n18_113._c0_poly, &result_n18_113._c0_poly);
  Rescale(&result_n18_113._c1_poly, &result_n18_113._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_115_389, 57 /* cst_138 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_114_388, &result_n18_113, &_pgen_tmp_115_389);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_114_388._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_114_388._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n18_113._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_115_389._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_114_388._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n18_113._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_115_389._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_115_389._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435538, &_pgen_tmp_114_388);
  Rescale(&_preg_268435538._c0_poly, &_pgen_tmp_114_388._c0_poly);
  Rescale(&_preg_268435538._c1_poly, &_pgen_tmp_114_388._c1_poly);
  Free_poly_data(&_pgen_tmp_114_388._c1_poly);
  Free_poly_data(&_pgen_tmp_114_388._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435674 = Rotate(result_n18_113, -16384);
  Copy_ciph(&_ckks_gen_tmp_2344_243, &_preg_268435674);
  Free_poly_data(&_preg_268435674._c1_poly);
  Free_poly_data(&_preg_268435674._c0_poly);
  Pt_from_msg(&_pgen_tmp_117_391, 58 /* cst_139 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_116_390, &_ckks_gen_tmp_2344_243, &_pgen_tmp_117_391);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_116_390._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_116_390._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2344_243._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_117_391._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_116_390._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2344_243._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_117_391._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_117_391._poly);
  Free_poly_data(&_ckks_gen_tmp_2344_243._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2344_243._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_118_392, &_pgen_tmp_116_390);
  Rescale(&_pgen_tmp_118_392._c0_poly, &_pgen_tmp_116_390._c0_poly);
  Rescale(&_pgen_tmp_118_392._c1_poly, &_pgen_tmp_116_390._c1_poly);
  Free_poly_data(&_pgen_tmp_116_390._c1_poly);
  Free_poly_data(&_pgen_tmp_116_390._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435538, &_preg_268435538, &_pgen_tmp_118_392);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_preg_268435538._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_preg_268435538._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435538._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_118_392._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_preg_268435538._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435538._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_118_392._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_118_392._c1_poly);
  Free_poly_data(&_pgen_tmp_118_392._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_119_393, 59 /* cst_136 */, 16384, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n18_113, &_preg_268435538, &_pgen_tmp_119_393);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&result_n18_113._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&result_n18_113._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435538._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_119_393._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&result_n18_113._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&_preg_268435538._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_119_393._poly);
  Free_poly_data(&_preg_268435538._c1_poly);
  Free_poly_data(&_preg_268435538._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435539, &result_n18_113);
  Free_poly_data(&result_n18_113._c1_poly);
  Free_poly_data(&result_n18_113._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 70
  // /fire6/Concat
  // pragma: 65536, 1045, 71
  CMPLR_TM_START(4, 0);
  _preg_268435675 = Rotate(_preg_268435539, -16384);
  Free_poly_data(&_preg_268435539._c1_poly);
  Free_poly_data(&_preg_268435539._c0_poly);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435540, &_preg_268435536, &_preg_268435675);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_preg_268435540._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_preg_268435540._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435536._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435675._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_preg_268435540._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435536._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435675._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435675._c1_poly);
  Free_poly_data(&_preg_268435675._c0_poly);
  Free_poly_data(&_preg_268435536._c1_poly);
  Free_poly_data(&_preg_268435536._c0_poly);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_END(4, 0);
  // pragma: 65537, 1045, 71
  // /fire6/relu/Relu
  // pragma: 65536, 1033, 72
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435541, &_preg_268435540, 13);
  Free_poly_data(&_preg_268435540._c1_poly);
  Free_poly_data(&_preg_268435540._c0_poly);
  _preg_268435542 = App_relu(_preg_268435541, _preg_268435541, 32768);
  Free_poly_data(&_preg_268435541._c1_poly);
  Free_poly_data(&_preg_268435541._c0_poly);
  Copy_ciph(&_preg_268435543, &_preg_268435542);
  Free_poly_data(&_preg_268435542._c1_poly);
  Free_poly_data(&_preg_268435542._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 72
  // /fire7/squeeze/squeeze.0/Conv
  // pragma: 65536, 1027, 73
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435544, &_preg_268435543);
  Free_poly_data(&_preg_268435543._c1_poly);
  Free_poly_data(&_preg_268435543._c0_poly);
  Zero_ciph(&tmp_result_n19_117);
  Copy_ciph(&input_dup_n19_118, &_preg_268435544);
  Free_poly_data(&_preg_268435544._c1_poly);
  Free_poly_data(&_preg_268435544._c0_poly);
  for (index_cin_n19_119 = 0; index_cin_n19_119 < 128; index_cin_n19_119 = index_cin_n19_119 + 1) {
    for (index_khw_n19_120 = 0; index_khw_n19_120 < 1; index_khw_n19_120 = index_khw_n19_120 + 1) {
      _preg_268435676 = Rotate(input_dup_n19_118, _cst_143[index_khw_n19_120]);
      Copy_ciph(&_ckks_gen_tmp_2443_244, &_preg_268435676);
      Pt_from_msg_ofst(&_pgen_tmp_120_394, 60/* cst_141 */, ((index_khw_n19_120 + (index_cin_n19_119 * 1))) * (8192), 8192, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_121_395, &_ckks_gen_tmp_2443_244, &_pgen_tmp_120_394);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&tmp_result_n19_117, &tmp_result_n19_117, &_pgen_tmp_121_395);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&tmp_result_n19_117._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_121_395._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2443_244._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_120_394._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_121_395._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2443_244._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_120_394._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&tmp_result_n19_117._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_result_n19_117._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_121_395._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&tmp_result_n19_117._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_result_n19_117._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_121_395._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435676._c1_poly);
      Free_poly_data(&_preg_268435676._c0_poly);
    }
    _preg_268435677 = Rotate(input_dup_n19_118, 256);
    Copy_ciph(&input_dup_n19_118, &_preg_268435677);
    Free_poly_data(&_preg_268435677._c1_poly);
    Free_poly_data(&_preg_268435677._c0_poly);
  }
  Free_poly_data(&_pgen_tmp_120_394._poly);
  Free_poly_data(&_ckks_gen_tmp_2443_244._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2443_244._c0_poly);
  Free_poly_data(&_pgen_tmp_121_395._c1_poly);
  Free_poly_data(&_pgen_tmp_121_395._c0_poly);
  Free_poly_data(&input_dup_n19_118._c1_poly);
  Free_poly_data(&input_dup_n19_118._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&tmp_result_n19_117, &tmp_result_n19_117);
  Rescale(&tmp_result_n19_117._c0_poly, &tmp_result_n19_117._c0_poly);
  Rescale(&tmp_result_n19_117._c1_poly, &tmp_result_n19_117._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_122_396, 61 /* cst_142 */, 8192, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&tmp_result_n19_117, &tmp_result_n19_117, &_pgen_tmp_122_396);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&tmp_result_n19_117._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&tmp_result_n19_117._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_result_n19_117._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_122_396._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&tmp_result_n19_117._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&tmp_result_n19_117._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_122_396._poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435545, &tmp_result_n19_117);
  Free_poly_data(&tmp_result_n19_117._c1_poly);
  Free_poly_data(&tmp_result_n19_117._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 73
  // /fire7/squeeze/squeeze.2/Relu
  // pragma: 65536, 1033, 74
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435546, &_preg_268435545, 14);
  Free_poly_data(&_preg_268435545._c1_poly);
  Free_poly_data(&_preg_268435545._c0_poly);
  _preg_268435547 = App_relu(_preg_268435546, _preg_268435546, 8192);
  Free_poly_data(&_preg_268435546._c1_poly);
  Free_poly_data(&_preg_268435546._c0_poly);
  Copy_ciph(&_preg_268435548, &_preg_268435547);
  Free_poly_data(&_preg_268435547._c1_poly);
  Free_poly_data(&_preg_268435547._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 74
  // /fire7/expand1/expand1.0/Conv
  // pragma: 65536, 1027, 75
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435549, &_preg_268435548);
  // BlockingRot replicate=3
  _preg_268435678 = Rotate(_preg_268435549, -8192);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_123_397, &_preg_268435549, &_preg_268435678);
  CMPLR_TM_END(12, 0);
  _preg_268435679 = Rotate(_preg_268435549, -16384);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n19_121, &_pgen_tmp_123_397, &_preg_268435679);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&input_dup_n19_121._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_123_397._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435549._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435678._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_123_397._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435549._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435678._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n19_121._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_123_397._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435679._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n19_121._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_123_397._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435679._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435678._c1_poly);
  Free_poly_data(&_preg_268435678._c0_poly);
  Free_poly_data(&_preg_268435549._c1_poly);
  Free_poly_data(&_preg_268435549._c0_poly);
  Free_poly_data(&_preg_268435679._c1_poly);
  Free_poly_data(&_preg_268435679._c0_poly);
  Free_poly_data(&_pgen_tmp_123_397._c1_poly);
  Free_poly_data(&_pgen_tmp_123_397._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=4
  for (bs_input_n19_122 = 0; bs_input_n19_122 < 4; bs_input_n19_122 = bs_input_n19_122 + 1) {
    _preg_268435680 = Rotate(input_dup_n19_121, _cst_147[bs_input_n19_122]);
    Copy_ciph(&input_block_n19_123[bs_input_n19_122], &_preg_268435680);
    Free_poly_data(&_preg_268435680._c1_poly);
    Free_poly_data(&_preg_268435680._c0_poly);
  }
  Free_poly_data(&input_dup_n19_121._c1_poly);
  Free_poly_data(&input_dup_n19_121._c0_poly);
  Zero_ciph(&result_n20_124);
  for (num_grid_n20_125 = 0; num_grid_n20_125 < 8; num_grid_n20_125 = num_grid_n20_125 + 1) {
    Zero_ciph(&result_grid_n20_126);
    for (cap_block_n20_127 = 0; cap_block_n20_127 < 4; cap_block_n20_127 = cap_block_n20_127 + 1) {
      _ckks_gen_tmp_2565_245 = input_block_n19_123[cap_block_n20_127];
      Pt_from_msg_ofst(&_pgen_tmp_124_398, 62/* cst_145 */, ((cap_block_n20_127 + (num_grid_n20_125 * 4))) * (16384), 16384, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_125_399, &_ckks_gen_tmp_2565_245, &_pgen_tmp_124_398);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n20_126, &result_grid_n20_126, &_pgen_tmp_125_399);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&result_grid_n20_126._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_125_399._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2565_245._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_124_398._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_125_399._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2565_245._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_124_398._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n20_126._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n20_126._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_125_399._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n20_126._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n20_126._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_125_399._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435681 = Rotate(result_grid_n20_126, num_grid_n20_125 * 1024);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n20_124, &result_n20_124, &_preg_268435681);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&result_n20_124._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&result_n20_124._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n20_124._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435681._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&result_n20_124._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n20_124._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435681._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435681._c1_poly);
    Free_poly_data(&_preg_268435681._c0_poly);
  }
  Free_ciph_poly(input_block_n19_123, 4);
  Free_poly_data(&_pgen_tmp_124_398._poly);
  Free_poly_data(&_pgen_tmp_125_399._c1_poly);
  Free_poly_data(&_pgen_tmp_125_399._c0_poly);
  Free_poly_data(&result_grid_n20_126._c1_poly);
  Free_poly_data(&result_grid_n20_126._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n20_124, &result_n20_124);
  Rescale(&result_n20_124._c0_poly, &result_n20_124._c0_poly);
  Rescale(&result_n20_124._c1_poly, &result_n20_124._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_127_401, 63 /* cst_148 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_126_400, &result_n20_124, &_pgen_tmp_127_401);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_126_400._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_126_400._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n20_124._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_127_401._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_126_400._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n20_124._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_127_401._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_127_401._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435550, &_pgen_tmp_126_400);
  Rescale(&_preg_268435550._c0_poly, &_pgen_tmp_126_400._c0_poly);
  Rescale(&_preg_268435550._c1_poly, &_pgen_tmp_126_400._c1_poly);
  Free_poly_data(&_pgen_tmp_126_400._c1_poly);
  Free_poly_data(&_pgen_tmp_126_400._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435682 = Rotate(result_n20_124, -16384);
  Copy_ciph(&_ckks_gen_tmp_2609_246, &_preg_268435682);
  Free_poly_data(&_preg_268435682._c1_poly);
  Free_poly_data(&_preg_268435682._c0_poly);
  Pt_from_msg(&_pgen_tmp_129_403, 64 /* cst_149 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_128_402, &_ckks_gen_tmp_2609_246, &_pgen_tmp_129_403);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_128_402._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_128_402._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2609_246._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_129_403._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_128_402._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2609_246._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_129_403._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_129_403._poly);
  Free_poly_data(&_ckks_gen_tmp_2609_246._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2609_246._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_130_404, &_pgen_tmp_128_402);
  Rescale(&_pgen_tmp_130_404._c0_poly, &_pgen_tmp_128_402._c0_poly);
  Rescale(&_pgen_tmp_130_404._c1_poly, &_pgen_tmp_128_402._c1_poly);
  Free_poly_data(&_pgen_tmp_128_402._c1_poly);
  Free_poly_data(&_pgen_tmp_128_402._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435550, &_preg_268435550, &_pgen_tmp_130_404);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_preg_268435550._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_preg_268435550._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435550._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_130_404._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_preg_268435550._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435550._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_130_404._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_130_404._c1_poly);
  Free_poly_data(&_pgen_tmp_130_404._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_131_405, 65 /* cst_146 */, 16384, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n20_124, &_preg_268435550, &_pgen_tmp_131_405);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&result_n20_124._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&result_n20_124._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435550._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_131_405._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&result_n20_124._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&_preg_268435550._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_131_405._poly);
  Free_poly_data(&_preg_268435550._c1_poly);
  Free_poly_data(&_preg_268435550._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435551, &result_n20_124);
  Free_poly_data(&result_n20_124._c1_poly);
  Free_poly_data(&result_n20_124._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 75
  // /fire7/expand2/expand2.0/Conv
  // pragma: 65536, 1027, 76
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435552, &_preg_268435548);
  Free_poly_data(&_preg_268435548._c1_poly);
  Free_poly_data(&_preg_268435548._c0_poly);
  // BlockingRot replicate=2
  _preg_268435683 = Rotate(_preg_268435552, -8192);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n20_128, &_preg_268435552, &_preg_268435683);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&input_dup_n20_128._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&input_dup_n20_128._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435552._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435683._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n20_128._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435552._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435683._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435683._c1_poly);
  Free_poly_data(&_preg_268435683._c0_poly);
  Free_poly_data(&_preg_268435552._c1_poly);
  Free_poly_data(&_preg_268435552._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=9
  for (bs_input_n20_129 = 0; bs_input_n20_129 < 9; bs_input_n20_129 = bs_input_n20_129 + 1) {
    _preg_268435684 = Rotate(input_dup_n20_128, _cst_153[bs_input_n20_129]);
    Copy_ciph(&input_block_n20_130[bs_input_n20_129], &_preg_268435684);
    Free_poly_data(&_preg_268435684._c1_poly);
    Free_poly_data(&_preg_268435684._c0_poly);
  }
  Free_poly_data(&input_dup_n20_128._c1_poly);
  Free_poly_data(&input_dup_n20_128._c0_poly);
  Zero_ciph(&result_n21_131);
  for (num_grid_n21_132 = 0; num_grid_n21_132 < 32; num_grid_n21_132 = num_grid_n21_132 + 1) {
    Zero_ciph(&result_grid_n21_133);
    for (cap_block_n21_134 = 0; cap_block_n21_134 < 9; cap_block_n21_134 = cap_block_n21_134 + 1) {
      _ckks_gen_tmp_2698_247 = input_block_n20_130[cap_block_n21_134];
      Pt_from_msg_ofst(&_pgen_tmp_132_406, 66/* cst_151 */, ((cap_block_n21_134 + (num_grid_n21_132 * 9))) * (16384), 16384, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_133_407, &_ckks_gen_tmp_2698_247, &_pgen_tmp_132_406);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n21_133, &result_grid_n21_133, &_pgen_tmp_133_407);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&result_grid_n21_133._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_133_407._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2698_247._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_132_406._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_133_407._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2698_247._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_132_406._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n21_133._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n21_133._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_133_407._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n21_133._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n21_133._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_133_407._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435685 = Rotate(result_grid_n21_133, num_grid_n21_132 * 256);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n21_131, &result_n21_131, &_preg_268435685);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&result_n21_131._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&result_n21_131._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n21_131._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435685._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&result_n21_131._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n21_131._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435685._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435685._c1_poly);
    Free_poly_data(&_preg_268435685._c0_poly);
  }
  Free_ciph_poly(input_block_n20_130, 9);
  Free_poly_data(&_pgen_tmp_132_406._poly);
  Free_poly_data(&_pgen_tmp_133_407._c1_poly);
  Free_poly_data(&_pgen_tmp_133_407._c0_poly);
  Free_poly_data(&result_grid_n21_133._c1_poly);
  Free_poly_data(&result_grid_n21_133._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n21_131, &result_n21_131);
  Rescale(&result_n21_131._c0_poly, &result_n21_131._c0_poly);
  Rescale(&result_n21_131._c1_poly, &result_n21_131._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_135_409, 67 /* cst_154 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_134_408, &result_n21_131, &_pgen_tmp_135_409);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_134_408._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_134_408._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n21_131._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_135_409._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_134_408._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n21_131._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_135_409._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_135_409._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435553, &_pgen_tmp_134_408);
  Rescale(&_preg_268435553._c0_poly, &_pgen_tmp_134_408._c0_poly);
  Rescale(&_preg_268435553._c1_poly, &_pgen_tmp_134_408._c1_poly);
  Free_poly_data(&_pgen_tmp_134_408._c1_poly);
  Free_poly_data(&_pgen_tmp_134_408._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435686 = Rotate(result_n21_131, -16384);
  Copy_ciph(&_ckks_gen_tmp_2742_248, &_preg_268435686);
  Free_poly_data(&_preg_268435686._c1_poly);
  Free_poly_data(&_preg_268435686._c0_poly);
  Pt_from_msg(&_pgen_tmp_137_411, 68 /* cst_155 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_136_410, &_ckks_gen_tmp_2742_248, &_pgen_tmp_137_411);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_136_410._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_136_410._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2742_248._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_137_411._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_136_410._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2742_248._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_137_411._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_137_411._poly);
  Free_poly_data(&_ckks_gen_tmp_2742_248._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2742_248._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_138_412, &_pgen_tmp_136_410);
  Rescale(&_pgen_tmp_138_412._c0_poly, &_pgen_tmp_136_410._c0_poly);
  Rescale(&_pgen_tmp_138_412._c1_poly, &_pgen_tmp_136_410._c1_poly);
  Free_poly_data(&_pgen_tmp_136_410._c1_poly);
  Free_poly_data(&_pgen_tmp_136_410._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435553, &_preg_268435553, &_pgen_tmp_138_412);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_preg_268435553._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_preg_268435553._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435553._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_138_412._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_preg_268435553._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435553._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_138_412._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_138_412._c1_poly);
  Free_poly_data(&_pgen_tmp_138_412._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_139_413, 69 /* cst_152 */, 16384, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n21_131, &_preg_268435553, &_pgen_tmp_139_413);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&result_n21_131._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&result_n21_131._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435553._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_139_413._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&result_n21_131._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&_preg_268435553._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_139_413._poly);
  Free_poly_data(&_preg_268435553._c1_poly);
  Free_poly_data(&_preg_268435553._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435554, &result_n21_131);
  Free_poly_data(&result_n21_131._c1_poly);
  Free_poly_data(&result_n21_131._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 76
  // /fire7/Concat
  // pragma: 65536, 1045, 77
  CMPLR_TM_START(4, 0);
  _preg_268435687 = Rotate(_preg_268435554, -16384);
  Free_poly_data(&_preg_268435554._c1_poly);
  Free_poly_data(&_preg_268435554._c0_poly);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435555, &_preg_268435551, &_preg_268435687);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_preg_268435555._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_preg_268435555._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435551._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435687._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_preg_268435555._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435551._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435687._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435687._c1_poly);
  Free_poly_data(&_preg_268435687._c0_poly);
  Free_poly_data(&_preg_268435551._c1_poly);
  Free_poly_data(&_preg_268435551._c0_poly);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_END(4, 0);
  // pragma: 65537, 1045, 77
  // /fire7/relu/Relu
  // pragma: 65536, 1033, 78
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435556, &_preg_268435555, 13);
  Free_poly_data(&_preg_268435555._c1_poly);
  Free_poly_data(&_preg_268435555._c0_poly);
  _preg_268435557 = App_relu(_preg_268435556, _preg_268435556, 32768);
  Free_poly_data(&_preg_268435556._c1_poly);
  Free_poly_data(&_preg_268435556._c0_poly);
  Copy_ciph(&_preg_268435558, &_preg_268435557);
  Free_poly_data(&_preg_268435557._c1_poly);
  Free_poly_data(&_preg_268435557._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 78
  // /fire8/squeeze/squeeze.0/Conv
  // pragma: 65536, 1027, 79
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435559, &_preg_268435558);
  Free_poly_data(&_preg_268435558._c1_poly);
  Free_poly_data(&_preg_268435558._c0_poly);
  Zero_ciph(&tmp_result_n22_135);
  Copy_ciph(&input_dup_n22_136, &_preg_268435559);
  Free_poly_data(&_preg_268435559._c1_poly);
  Free_poly_data(&_preg_268435559._c0_poly);
  for (index_cin_n22_137 = 0; index_cin_n22_137 < 128; index_cin_n22_137 = index_cin_n22_137 + 1) {
    for (index_khw_n22_138 = 0; index_khw_n22_138 < 1; index_khw_n22_138 = index_khw_n22_138 + 1) {
      _preg_268435688 = Rotate(input_dup_n22_136, _cst_159[index_khw_n22_138]);
      Copy_ciph(&_ckks_gen_tmp_2841_249, &_preg_268435688);
      Pt_from_msg_ofst(&_pgen_tmp_140_414, 70/* cst_157 */, ((index_khw_n22_138 + (index_cin_n22_137 * 1))) * (16384), 16384, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_141_415, &_ckks_gen_tmp_2841_249, &_pgen_tmp_140_414);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&tmp_result_n22_135, &tmp_result_n22_135, &_pgen_tmp_141_415);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&tmp_result_n22_135._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_141_415._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2841_249._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_140_414._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_141_415._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2841_249._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_140_414._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&tmp_result_n22_135._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_result_n22_135._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_141_415._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&tmp_result_n22_135._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_result_n22_135._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_141_415._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435688._c1_poly);
      Free_poly_data(&_preg_268435688._c0_poly);
    }
    _preg_268435689 = Rotate(input_dup_n22_136, 256);
    Copy_ciph(&input_dup_n22_136, &_preg_268435689);
    Free_poly_data(&_preg_268435689._c1_poly);
    Free_poly_data(&_preg_268435689._c0_poly);
  }
  Free_poly_data(&_pgen_tmp_140_414._poly);
  Free_poly_data(&_ckks_gen_tmp_2841_249._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2841_249._c0_poly);
  Free_poly_data(&_pgen_tmp_141_415._c1_poly);
  Free_poly_data(&_pgen_tmp_141_415._c0_poly);
  Free_poly_data(&input_dup_n22_136._c1_poly);
  Free_poly_data(&input_dup_n22_136._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&tmp_result_n22_135, &tmp_result_n22_135);
  Rescale(&tmp_result_n22_135._c0_poly, &tmp_result_n22_135._c0_poly);
  Rescale(&tmp_result_n22_135._c1_poly, &tmp_result_n22_135._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_142_416, 71 /* cst_158 */, 16384, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&tmp_result_n22_135, &tmp_result_n22_135, &_pgen_tmp_142_416);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&tmp_result_n22_135._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&tmp_result_n22_135._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_result_n22_135._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_142_416._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&tmp_result_n22_135._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&tmp_result_n22_135._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_142_416._poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435560, &tmp_result_n22_135);
  Free_poly_data(&tmp_result_n22_135._c1_poly);
  Free_poly_data(&tmp_result_n22_135._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 79
  // /fire8/squeeze/squeeze.2/Relu
  // pragma: 65536, 1033, 80
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435561, &_preg_268435560, 18);
  Free_poly_data(&_preg_268435560._c1_poly);
  Free_poly_data(&_preg_268435560._c0_poly);
  _preg_268435562 = App_relu(_preg_268435561, _preg_268435561, 16384);
  Free_poly_data(&_preg_268435561._c1_poly);
  Free_poly_data(&_preg_268435561._c0_poly);
  Copy_ciph(&_preg_268435563, &_preg_268435562);
  Free_poly_data(&_preg_268435562._c1_poly);
  Free_poly_data(&_preg_268435562._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 80
  // /fire8/expand1/expand1.0/Conv
  // pragma: 65536, 1027, 81
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435564, &_preg_268435563);
  // BlockingRot replicate=3
  _preg_268435690 = Rotate(_preg_268435564, -16384);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_143_417, &_preg_268435564, &_preg_268435690);
  CMPLR_TM_END(12, 0);
  _preg_268435691 = Rotate(_preg_268435564, -32768);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n22_139, &_pgen_tmp_143_417, &_preg_268435691);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&input_dup_n22_139._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_143_417._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435564._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435690._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_143_417._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435564._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435690._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n22_139._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_143_417._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435691._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n22_139._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_143_417._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435691._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435690._c1_poly);
  Free_poly_data(&_preg_268435690._c0_poly);
  Free_poly_data(&_preg_268435564._c1_poly);
  Free_poly_data(&_preg_268435564._c0_poly);
  Free_poly_data(&_preg_268435691._c1_poly);
  Free_poly_data(&_preg_268435691._c0_poly);
  Free_poly_data(&_pgen_tmp_143_417._c1_poly);
  Free_poly_data(&_pgen_tmp_143_417._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=8
  for (bs_input_n22_140 = 0; bs_input_n22_140 < 8; bs_input_n22_140 = bs_input_n22_140 + 1) {
    _preg_268435692 = Rotate(input_dup_n22_139, _cst_163[bs_input_n22_140]);
    Copy_ciph(&input_block_n22_141[bs_input_n22_140], &_preg_268435692);
    Free_poly_data(&_preg_268435692._c1_poly);
    Free_poly_data(&_preg_268435692._c0_poly);
  }
  Free_poly_data(&input_dup_n22_139._c1_poly);
  Free_poly_data(&input_dup_n22_139._c0_poly);
  Zero_ciph(&result_n23_142);
  for (num_grid_n23_143 = 0; num_grid_n23_143 < 8; num_grid_n23_143 = num_grid_n23_143 + 1) {
    Zero_ciph(&result_grid_n23_144);
    for (cap_block_n23_145 = 0; cap_block_n23_145 < 8; cap_block_n23_145 = cap_block_n23_145 + 1) {
      _ckks_gen_tmp_2963_250 = input_block_n22_141[cap_block_n23_145];
      Pt_from_msg_ofst(&_pgen_tmp_144_418, 72/* cst_161 */, ((cap_block_n23_145 + (num_grid_n23_143 * 8))) * (32768), 32768, 1, 7);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_145_419, &_ckks_gen_tmp_2963_250, &_pgen_tmp_144_418);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n23_144, &result_grid_n23_144, &_pgen_tmp_145_419);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&result_grid_n23_144._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_145_419._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2963_250._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_144_418._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_145_419._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_2963_250._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_144_418._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n23_144._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n23_144._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_145_419._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n23_144._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n23_144._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_145_419._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435693 = Rotate(result_grid_n23_144, num_grid_n23_143 * 2048);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n23_142, &result_n23_142, &_preg_268435693);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&result_n23_142._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&result_n23_142._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n23_142._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435693._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&result_n23_142._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n23_142._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435693._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435693._c1_poly);
    Free_poly_data(&_preg_268435693._c0_poly);
  }
  Free_ciph_poly(input_block_n22_141, 8);
  Free_poly_data(&_pgen_tmp_144_418._poly);
  Free_poly_data(&_pgen_tmp_145_419._c1_poly);
  Free_poly_data(&_pgen_tmp_145_419._c0_poly);
  Free_poly_data(&result_grid_n23_144._c1_poly);
  Free_poly_data(&result_grid_n23_144._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n23_142, &result_n23_142);
  Rescale(&result_n23_142._c0_poly, &result_n23_142._c0_poly);
  Rescale(&result_n23_142._c1_poly, &result_n23_142._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_147_421, 73 /* cst_164 */, 32768, 1, 6);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_146_420, &result_n23_142, &_pgen_tmp_147_421);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_146_420._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_146_420._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n23_142._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_147_421._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_146_420._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n23_142._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_147_421._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_147_421._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435565, &_pgen_tmp_146_420);
  Rescale(&_preg_268435565._c0_poly, &_pgen_tmp_146_420._c0_poly);
  Rescale(&_preg_268435565._c1_poly, &_pgen_tmp_146_420._c1_poly);
  Free_poly_data(&_pgen_tmp_146_420._c1_poly);
  Free_poly_data(&_pgen_tmp_146_420._c0_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_148_422, 74 /* cst_162 */, 32768, 1, 5);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n23_142, &_preg_268435565, &_pgen_tmp_148_422);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&result_n23_142._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&result_n23_142._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435565._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_148_422._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&result_n23_142._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&_preg_268435565._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_148_422._poly);
  Free_poly_data(&_preg_268435565._c1_poly);
  Free_poly_data(&_preg_268435565._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435566, &result_n23_142);
  Free_poly_data(&result_n23_142._c1_poly);
  Free_poly_data(&result_n23_142._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 81
  // /fire8/expand1/expand1.2/AveragePool
  // pragma: 65536, 1026, 82
  CMPLR_TM_START(3, 0);
  Copy_ciph(&_preg_268435567, &_preg_268435566);
  Free_poly_data(&_preg_268435566._c1_poly);
  Free_poly_data(&_preg_268435566._c0_poly);
  _preg_268435694 = Rotate(_preg_268435567, 16);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&tmp_row_add23_146, &_preg_268435567, &_preg_268435694);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&tmp_row_add23_146._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&tmp_row_add23_146._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435567._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435694._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&tmp_row_add23_146._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435567._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435694._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435694._c1_poly);
  Free_poly_data(&_preg_268435694._c0_poly);
  Free_poly_data(&_preg_268435567._c1_poly);
  Free_poly_data(&_preg_268435567._c0_poly);
  CMPLR_TM_END(12, 0);
  _preg_268435695 = Rotate(tmp_row_add23_146, 1);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_ckks_gen_tmp_3037_251, &tmp_row_add23_146, &_preg_268435695);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_ckks_gen_tmp_3037_251._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_ckks_gen_tmp_3037_251._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_row_add23_146._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435695._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_ckks_gen_tmp_3037_251._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_row_add23_146._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435695._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435695._c1_poly);
  Free_poly_data(&_preg_268435695._c0_poly);
  Free_poly_data(&tmp_row_add23_146._c1_poly);
  Free_poly_data(&tmp_row_add23_146._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_150_424, 75 /* cst_165 */, 32768, 1, 5);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_149_423, &_ckks_gen_tmp_3037_251, &_pgen_tmp_150_424);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_149_423._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_149_423._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3037_251._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_150_424._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_149_423._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3037_251._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_150_424._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_150_424._poly);
  Free_poly_data(&_ckks_gen_tmp_3037_251._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3037_251._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435568, &_pgen_tmp_149_423);
  Rescale(&_preg_268435568._c0_poly, &_pgen_tmp_149_423._c0_poly);
  Rescale(&_preg_268435568._c1_poly, &_pgen_tmp_149_423._c1_poly);
  Free_poly_data(&_pgen_tmp_149_423._c1_poly);
  Free_poly_data(&_pgen_tmp_149_423._c0_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&orig_result23_147, &_preg_268435568);
  Free_poly_data(&_preg_268435568._c1_poly);
  Free_poly_data(&_preg_268435568._c0_poly);
  Zero_ciph(&comb_row_result24_148);
  for (comb_row_index_n24_149 = 0; comb_row_index_n24_149 < 8; comb_row_index_n24_149 = comb_row_index_n24_149 + 1) {
    _preg_268435696 = Rotate(orig_result23_147, comb_row_index_n24_149 * 1);
    Copy_ciph(&_ckks_gen_tmp_3068_252, &_preg_268435696);
    Pt_from_msg_ofst(&_pgen_tmp_151_425, 76/* cst_166 */, (comb_row_index_n24_149) * (32768), 32768, 1, 4);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_152_426, &_ckks_gen_tmp_3068_252, &_pgen_tmp_151_425);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&comb_row_result24_148, &comb_row_result24_148, &_pgen_tmp_152_426);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&comb_row_result24_148._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_152_426._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3068_252._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_151_425._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_152_426._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3068_252._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_151_425._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&comb_row_result24_148._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&comb_row_result24_148._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_152_426._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&comb_row_result24_148._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&comb_row_result24_148._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_152_426._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435696._c1_poly);
    Free_poly_data(&_preg_268435696._c0_poly);
  }
  Free_poly_data(&orig_result23_147._c1_poly);
  Free_poly_data(&orig_result23_147._c0_poly);
  Free_poly_data(&_pgen_tmp_151_425._poly);
  Free_poly_data(&_ckks_gen_tmp_3068_252._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3068_252._c0_poly);
  Free_poly_data(&_pgen_tmp_152_426._c1_poly);
  Free_poly_data(&_pgen_tmp_152_426._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&comb_row_result24_148, &comb_row_result24_148);
  Rescale(&comb_row_result24_148._c0_poly, &comb_row_result24_148._c0_poly);
  Rescale(&comb_row_result24_148._c1_poly, &comb_row_result24_148._c1_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&comb_rc_result24_150);
  for (comb_rc_index_n24_151 = 0; comb_rc_index_n24_151 < 8; comb_rc_index_n24_151 = comb_rc_index_n24_151 + 1) {
    _preg_268435697 = Rotate(comb_row_result24_148, comb_rc_index_n24_151 * 24);
    Copy_ciph(&_ckks_gen_tmp_3101_253, &_preg_268435697);
    Pt_from_msg_ofst(&_pgen_tmp_153_427, 77/* cst_167 */, (comb_rc_index_n24_151) * (32768), 32768, 1, 3);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_154_428, &_ckks_gen_tmp_3101_253, &_pgen_tmp_153_427);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&comb_rc_result24_150, &comb_rc_result24_150, &_pgen_tmp_154_428);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&comb_rc_result24_150._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_154_428._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3101_253._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_153_427._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_154_428._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3101_253._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_153_427._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&comb_rc_result24_150._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&comb_rc_result24_150._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_154_428._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&comb_rc_result24_150._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&comb_rc_result24_150._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_154_428._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435697._c1_poly);
    Free_poly_data(&_preg_268435697._c0_poly);
  }
  Free_poly_data(&comb_row_result24_148._c1_poly);
  Free_poly_data(&comb_row_result24_148._c0_poly);
  Free_poly_data(&_pgen_tmp_153_427._poly);
  Free_poly_data(&_ckks_gen_tmp_3101_253._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3101_253._c0_poly);
  Free_poly_data(&_pgen_tmp_154_428._c1_poly);
  Free_poly_data(&_pgen_tmp_154_428._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&comb_rc_result24_150, &comb_rc_result24_150);
  Rescale(&comb_rc_result24_150._c0_poly, &comb_rc_result24_150._c0_poly);
  Rescale(&comb_rc_result24_150._c1_poly, &comb_rc_result24_150._c1_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&ss_result24_152);
  for (comb_cc_index_n24_153 = 0; comb_cc_index_n24_153 < 128; comb_cc_index_n24_153 = comb_cc_index_n24_153 + 1) {
    _preg_268435698 = Rotate(comb_rc_result24_150, comb_cc_index_n24_153 * 192);
    Copy_ciph(&_ckks_gen_tmp_3134_254, &_preg_268435698);
    Pt_from_msg_ofst(&_pgen_tmp_155_429, 78/* cst_168 */, (comb_cc_index_n24_153) * (32768), 32768, 1, 2);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_156_430, &_ckks_gen_tmp_3134_254, &_pgen_tmp_155_429);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&ss_result24_152, &ss_result24_152, &_pgen_tmp_156_430);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&ss_result24_152._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_156_430._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3134_254._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_155_429._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_156_430._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3134_254._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_155_429._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&ss_result24_152._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&ss_result24_152._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_156_430._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&ss_result24_152._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&ss_result24_152._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_156_430._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435698._c1_poly);
    Free_poly_data(&_preg_268435698._c0_poly);
  }
  Free_poly_data(&comb_rc_result24_150._c1_poly);
  Free_poly_data(&comb_rc_result24_150._c0_poly);
  Free_poly_data(&_pgen_tmp_155_429._poly);
  Free_poly_data(&_ckks_gen_tmp_3134_254._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3134_254._c0_poly);
  Free_poly_data(&_pgen_tmp_156_430._c1_poly);
  Free_poly_data(&_pgen_tmp_156_430._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&ss_result24_152, &ss_result24_152);
  Rescale(&ss_result24_152._c0_poly, &ss_result24_152._c0_poly);
  Rescale(&ss_result24_152._c1_poly, &ss_result24_152._c1_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&_preg_268435569, &ss_result24_152);
  Free_poly_data(&ss_result24_152._c1_poly);
  Free_poly_data(&ss_result24_152._c0_poly);
  CMPLR_TM_END(3, 0);
  // pragma: 65537, 1026, 82
  // /fire8/expand2/expand2.0/Conv
  // pragma: 65536, 1027, 83
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435570, &_preg_268435563);
  Free_poly_data(&_preg_268435563._c1_poly);
  Free_poly_data(&_preg_268435563._c0_poly);
  // BlockingRot replicate=2
  _preg_268435699 = Rotate(_preg_268435570, -16384);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n24_154, &_preg_268435570, &_preg_268435699);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&input_dup_n24_154._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&input_dup_n24_154._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435570._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435699._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n24_154._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435570._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435699._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435699._c1_poly);
  Free_poly_data(&_preg_268435699._c0_poly);
  Free_poly_data(&_preg_268435570._c1_poly);
  Free_poly_data(&_preg_268435570._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=9
  for (bs_input_n24_155 = 0; bs_input_n24_155 < 9; bs_input_n24_155 = bs_input_n24_155 + 1) {
    _preg_268435700 = Rotate(input_dup_n24_154, _cst_172[bs_input_n24_155]);
    Copy_ciph(&input_block_n24_156[bs_input_n24_155], &_preg_268435700);
    Free_poly_data(&_preg_268435700._c1_poly);
    Free_poly_data(&_preg_268435700._c0_poly);
  }
  Free_poly_data(&input_dup_n24_154._c1_poly);
  Free_poly_data(&input_dup_n24_154._c0_poly);
  Zero_ciph(&result_n25_157);
  for (num_grid_n25_158 = 0; num_grid_n25_158 < 64; num_grid_n25_158 = num_grid_n25_158 + 1) {
    Zero_ciph(&result_grid_n25_159);
    for (cap_block_n25_160 = 0; cap_block_n25_160 < 9; cap_block_n25_160 = cap_block_n25_160 + 1) {
      _ckks_gen_tmp_3216_255 = input_block_n24_156[cap_block_n25_160];
      Pt_from_msg_ofst(&_pgen_tmp_157_431, 79/* cst_170 */, ((cap_block_n25_160 + (num_grid_n25_158 * 9))) * (32768), 32768, 1, 7);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_158_432, &_ckks_gen_tmp_3216_255, &_pgen_tmp_157_431);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n25_159, &result_grid_n25_159, &_pgen_tmp_158_432);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&result_grid_n25_159._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_158_432._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3216_255._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_157_431._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_158_432._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3216_255._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_157_431._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n25_159._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n25_159._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_158_432._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n25_159._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n25_159._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_158_432._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435701 = Rotate(result_grid_n25_159, num_grid_n25_158 * 256);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n25_157, &result_n25_157, &_preg_268435701);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&result_n25_157._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&result_n25_157._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n25_157._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435701._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&result_n25_157._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n25_157._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435701._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435701._c1_poly);
    Free_poly_data(&_preg_268435701._c0_poly);
  }
  Free_ciph_poly(input_block_n24_156, 9);
  Free_poly_data(&_pgen_tmp_157_431._poly);
  Free_poly_data(&_pgen_tmp_158_432._c1_poly);
  Free_poly_data(&_pgen_tmp_158_432._c0_poly);
  Free_poly_data(&result_grid_n25_159._c1_poly);
  Free_poly_data(&result_grid_n25_159._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n25_157, &result_n25_157);
  Rescale(&result_n25_157._c0_poly, &result_n25_157._c0_poly);
  Rescale(&result_n25_157._c1_poly, &result_n25_157._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_160_434, 80 /* cst_173 */, 32768, 1, 6);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_159_433, &result_n25_157, &_pgen_tmp_160_434);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_159_433._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_159_433._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n25_157._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_160_434._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_159_433._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n25_157._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_160_434._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_160_434._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435571, &_pgen_tmp_159_433);
  Rescale(&_preg_268435571._c0_poly, &_pgen_tmp_159_433._c0_poly);
  Rescale(&_preg_268435571._c1_poly, &_pgen_tmp_159_433._c1_poly);
  Free_poly_data(&_pgen_tmp_159_433._c1_poly);
  Free_poly_data(&_pgen_tmp_159_433._c0_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_161_435, 81 /* cst_171 */, 32768, 1, 5);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n25_157, &_preg_268435571, &_pgen_tmp_161_435);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&result_n25_157._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&result_n25_157._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435571._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_161_435._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&result_n25_157._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&_preg_268435571._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_161_435._poly);
  Free_poly_data(&_preg_268435571._c1_poly);
  Free_poly_data(&_preg_268435571._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435572, &result_n25_157);
  Free_poly_data(&result_n25_157._c1_poly);
  Free_poly_data(&result_n25_157._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 83
  // /fire8/expand2/expand2.2/AveragePool
  // pragma: 65536, 1026, 84
  CMPLR_TM_START(3, 0);
  Copy_ciph(&_preg_268435573, &_preg_268435572);
  Free_poly_data(&_preg_268435572._c1_poly);
  Free_poly_data(&_preg_268435572._c0_poly);
  _preg_268435702 = Rotate(_preg_268435573, 16);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&tmp_row_add25_161, &_preg_268435573, &_preg_268435702);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&tmp_row_add25_161._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&tmp_row_add25_161._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435573._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435702._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&tmp_row_add25_161._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435573._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435702._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435702._c1_poly);
  Free_poly_data(&_preg_268435702._c0_poly);
  Free_poly_data(&_preg_268435573._c1_poly);
  Free_poly_data(&_preg_268435573._c0_poly);
  CMPLR_TM_END(12, 0);
  _preg_268435703 = Rotate(tmp_row_add25_161, 1);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_ckks_gen_tmp_3290_256, &tmp_row_add25_161, &_preg_268435703);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_ckks_gen_tmp_3290_256._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_ckks_gen_tmp_3290_256._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_row_add25_161._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435703._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_ckks_gen_tmp_3290_256._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_row_add25_161._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435703._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435703._c1_poly);
  Free_poly_data(&_preg_268435703._c0_poly);
  Free_poly_data(&tmp_row_add25_161._c1_poly);
  Free_poly_data(&tmp_row_add25_161._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_163_437, 82 /* cst_174 */, 32768, 1, 5);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_162_436, &_ckks_gen_tmp_3290_256, &_pgen_tmp_163_437);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_162_436._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_162_436._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3290_256._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_163_437._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_162_436._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3290_256._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_163_437._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_163_437._poly);
  Free_poly_data(&_ckks_gen_tmp_3290_256._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3290_256._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435574, &_pgen_tmp_162_436);
  Rescale(&_preg_268435574._c0_poly, &_pgen_tmp_162_436._c0_poly);
  Rescale(&_preg_268435574._c1_poly, &_pgen_tmp_162_436._c1_poly);
  Free_poly_data(&_pgen_tmp_162_436._c1_poly);
  Free_poly_data(&_pgen_tmp_162_436._c0_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&orig_result25_162, &_preg_268435574);
  Free_poly_data(&_preg_268435574._c1_poly);
  Free_poly_data(&_preg_268435574._c0_poly);
  Zero_ciph(&comb_row_result26_163);
  for (comb_row_index_n26_164 = 0; comb_row_index_n26_164 < 8; comb_row_index_n26_164 = comb_row_index_n26_164 + 1) {
    _preg_268435704 = Rotate(orig_result25_162, comb_row_index_n26_164 * 1);
    Copy_ciph(&_ckks_gen_tmp_3321_257, &_preg_268435704);
    Pt_from_msg_ofst(&_pgen_tmp_164_438, 83/* cst_175 */, (comb_row_index_n26_164) * (32768), 32768, 1, 4);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_165_439, &_ckks_gen_tmp_3321_257, &_pgen_tmp_164_438);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&comb_row_result26_163, &comb_row_result26_163, &_pgen_tmp_165_439);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&comb_row_result26_163._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_165_439._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3321_257._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_164_438._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_165_439._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3321_257._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_164_438._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&comb_row_result26_163._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&comb_row_result26_163._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_165_439._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&comb_row_result26_163._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&comb_row_result26_163._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_165_439._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435704._c1_poly);
    Free_poly_data(&_preg_268435704._c0_poly);
  }
  Free_poly_data(&orig_result25_162._c1_poly);
  Free_poly_data(&orig_result25_162._c0_poly);
  Free_poly_data(&_pgen_tmp_164_438._poly);
  Free_poly_data(&_ckks_gen_tmp_3321_257._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3321_257._c0_poly);
  Free_poly_data(&_pgen_tmp_165_439._c1_poly);
  Free_poly_data(&_pgen_tmp_165_439._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&comb_row_result26_163, &comb_row_result26_163);
  Rescale(&comb_row_result26_163._c0_poly, &comb_row_result26_163._c0_poly);
  Rescale(&comb_row_result26_163._c1_poly, &comb_row_result26_163._c1_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&comb_rc_result26_165);
  for (comb_rc_index_n26_166 = 0; comb_rc_index_n26_166 < 8; comb_rc_index_n26_166 = comb_rc_index_n26_166 + 1) {
    _preg_268435705 = Rotate(comb_row_result26_163, comb_rc_index_n26_166 * 24);
    Copy_ciph(&_ckks_gen_tmp_3354_258, &_preg_268435705);
    Pt_from_msg_ofst(&_pgen_tmp_166_440, 84/* cst_176 */, (comb_rc_index_n26_166) * (32768), 32768, 1, 3);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_167_441, &_ckks_gen_tmp_3354_258, &_pgen_tmp_166_440);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&comb_rc_result26_165, &comb_rc_result26_165, &_pgen_tmp_167_441);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&comb_rc_result26_165._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_167_441._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3354_258._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_166_440._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_167_441._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3354_258._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_166_440._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&comb_rc_result26_165._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&comb_rc_result26_165._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_167_441._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&comb_rc_result26_165._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&comb_rc_result26_165._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_167_441._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435705._c1_poly);
    Free_poly_data(&_preg_268435705._c0_poly);
  }
  Free_poly_data(&comb_row_result26_163._c1_poly);
  Free_poly_data(&comb_row_result26_163._c0_poly);
  Free_poly_data(&_pgen_tmp_166_440._poly);
  Free_poly_data(&_ckks_gen_tmp_3354_258._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3354_258._c0_poly);
  Free_poly_data(&_pgen_tmp_167_441._c1_poly);
  Free_poly_data(&_pgen_tmp_167_441._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&comb_rc_result26_165, &comb_rc_result26_165);
  Rescale(&comb_rc_result26_165._c0_poly, &comb_rc_result26_165._c0_poly);
  Rescale(&comb_rc_result26_165._c1_poly, &comb_rc_result26_165._c1_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&ss_result26_167);
  for (comb_cc_index_n26_168 = 0; comb_cc_index_n26_168 < 128; comb_cc_index_n26_168 = comb_cc_index_n26_168 + 1) {
    _preg_268435706 = Rotate(comb_rc_result26_165, comb_cc_index_n26_168 * 192);
    Copy_ciph(&_ckks_gen_tmp_3387_259, &_preg_268435706);
    Pt_from_msg_ofst(&_pgen_tmp_168_442, 85/* cst_177 */, (comb_cc_index_n26_168) * (32768), 32768, 1, 2);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_169_443, &_ckks_gen_tmp_3387_259, &_pgen_tmp_168_442);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&ss_result26_167, &ss_result26_167, &_pgen_tmp_169_443);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&ss_result26_167._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_169_443._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3387_259._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_168_442._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_169_443._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3387_259._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_168_442._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&ss_result26_167._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&ss_result26_167._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_169_443._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&ss_result26_167._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&ss_result26_167._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_169_443._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435706._c1_poly);
    Free_poly_data(&_preg_268435706._c0_poly);
  }
  Free_poly_data(&comb_rc_result26_165._c1_poly);
  Free_poly_data(&comb_rc_result26_165._c0_poly);
  Free_poly_data(&_pgen_tmp_168_442._poly);
  Free_poly_data(&_ckks_gen_tmp_3387_259._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3387_259._c0_poly);
  Free_poly_data(&_pgen_tmp_169_443._c1_poly);
  Free_poly_data(&_pgen_tmp_169_443._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&ss_result26_167, &ss_result26_167);
  Rescale(&ss_result26_167._c0_poly, &ss_result26_167._c0_poly);
  Rescale(&ss_result26_167._c1_poly, &ss_result26_167._c1_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&_preg_268435575, &ss_result26_167);
  Free_poly_data(&ss_result26_167._c1_poly);
  Free_poly_data(&ss_result26_167._c0_poly);
  CMPLR_TM_END(3, 0);
  // pragma: 65537, 1026, 84
  // /fire8/Concat
  // pragma: 65536, 1045, 85
  CMPLR_TM_START(4, 0);
  _preg_268435707 = Rotate(_preg_268435575, -8192);
  Free_poly_data(&_preg_268435575._c1_poly);
  Free_poly_data(&_preg_268435575._c0_poly);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435576, &_preg_268435569, &_preg_268435707);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_preg_268435576._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_preg_268435576._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435569._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435707._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_preg_268435576._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435569._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435707._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435707._c1_poly);
  Free_poly_data(&_preg_268435707._c0_poly);
  Free_poly_data(&_preg_268435569._c1_poly);
  Free_poly_data(&_preg_268435569._c0_poly);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_END(4, 0);
  // pragma: 65537, 1045, 85
  // /fire8/relu/Relu
  // pragma: 65536, 1033, 86
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435577, &_preg_268435576, 13);
  Free_poly_data(&_preg_268435576._c1_poly);
  Free_poly_data(&_preg_268435576._c0_poly);
  _preg_268435578 = App_relu(_preg_268435577, _preg_268435577, 16384);
  Free_poly_data(&_preg_268435577._c1_poly);
  Free_poly_data(&_preg_268435577._c0_poly);
  Copy_ciph(&_preg_268435579, &_preg_268435578);
  Free_poly_data(&_preg_268435578._c1_poly);
  Free_poly_data(&_preg_268435578._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 86
  // /fire9/squeeze/squeeze.0/Conv
  // pragma: 65536, 1027, 87
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435580, &_preg_268435579);
  Free_poly_data(&_preg_268435579._c1_poly);
  Free_poly_data(&_preg_268435579._c0_poly);
  Zero_ciph(&tmp_result_n27_169);
  _preg_268435708 = Rotate(_preg_268435580, -16384);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n27_170, &_preg_268435580, &_preg_268435708);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&input_dup_n27_170._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&input_dup_n27_170._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435580._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435708._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n27_170._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435580._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435708._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435708._c1_poly);
  Free_poly_data(&_preg_268435708._c0_poly);
  Free_poly_data(&_preg_268435580._c1_poly);
  Free_poly_data(&_preg_268435580._c0_poly);
  CMPLR_TM_END(12, 0);
  for (index_cin_n27_171 = 0; index_cin_n27_171 < 256; index_cin_n27_171 = index_cin_n27_171 + 1) {
    for (index_khw_n27_172 = 0; index_khw_n27_172 < 1; index_khw_n27_172 = index_khw_n27_172 + 1) {
      _preg_268435709 = Rotate(input_dup_n27_170, _cst_181[index_khw_n27_172]);
      Copy_ciph(&_ckks_gen_tmp_3483_260, &_preg_268435709);
      Pt_from_msg_ofst(&_pgen_tmp_170_444, 86/* cst_179 */, ((index_khw_n27_172 + (index_cin_n27_171 * 1))) * (4096), 4096, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_171_445, &_ckks_gen_tmp_3483_260, &_pgen_tmp_170_444);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&tmp_result_n27_169, &tmp_result_n27_169, &_pgen_tmp_171_445);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&tmp_result_n27_169._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_171_445._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3483_260._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_170_444._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_171_445._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3483_260._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_170_444._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&tmp_result_n27_169._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_result_n27_169._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_171_445._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&tmp_result_n27_169._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_result_n27_169._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_171_445._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435709._c1_poly);
      Free_poly_data(&_preg_268435709._c0_poly);
    }
    _preg_268435710 = Rotate(input_dup_n27_170, 64);
    Copy_ciph(&input_dup_n27_170, &_preg_268435710);
    Free_poly_data(&_preg_268435710._c1_poly);
    Free_poly_data(&_preg_268435710._c0_poly);
  }
  Free_poly_data(&_pgen_tmp_170_444._poly);
  Free_poly_data(&_ckks_gen_tmp_3483_260._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3483_260._c0_poly);
  Free_poly_data(&_pgen_tmp_171_445._c1_poly);
  Free_poly_data(&_pgen_tmp_171_445._c0_poly);
  Free_poly_data(&input_dup_n27_170._c1_poly);
  Free_poly_data(&input_dup_n27_170._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&tmp_result_n27_169, &tmp_result_n27_169);
  Rescale(&tmp_result_n27_169._c0_poly, &tmp_result_n27_169._c0_poly);
  Rescale(&tmp_result_n27_169._c1_poly, &tmp_result_n27_169._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_172_446, 87 /* cst_180 */, 4096, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&tmp_result_n27_169, &tmp_result_n27_169, &_pgen_tmp_172_446);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&tmp_result_n27_169._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&tmp_result_n27_169._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&tmp_result_n27_169._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_172_446._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&tmp_result_n27_169._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&tmp_result_n27_169._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_172_446._poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435581, &tmp_result_n27_169);
  Free_poly_data(&tmp_result_n27_169._c1_poly);
  Free_poly_data(&tmp_result_n27_169._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 87
  // /fire9/squeeze/squeeze.2/Relu
  // pragma: 65536, 1033, 88
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435582, &_preg_268435581, 14);
  Free_poly_data(&_preg_268435581._c1_poly);
  Free_poly_data(&_preg_268435581._c0_poly);
  _preg_268435583 = App_relu(_preg_268435582, _preg_268435582, 4096);
  Free_poly_data(&_preg_268435582._c1_poly);
  Free_poly_data(&_preg_268435582._c0_poly);
  Copy_ciph(&_preg_268435584, &_preg_268435583);
  Free_poly_data(&_preg_268435583._c1_poly);
  Free_poly_data(&_preg_268435583._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 88
  // /fire9/expand1/expand1.0/Conv
  // pragma: 65536, 1027, 89
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435585, &_preg_268435584);
  // BlockingRot replicate=3
  _preg_268435711 = Rotate(_preg_268435585, -4096);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_173_447, &_preg_268435585, &_preg_268435711);
  CMPLR_TM_END(12, 0);
  _preg_268435712 = Rotate(_preg_268435585, -8192);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n27_173, &_pgen_tmp_173_447, &_preg_268435712);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&input_dup_n27_173._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_173_447._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435585._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435711._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_173_447._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435585._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435711._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n27_173._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_173_447._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435712._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n27_173._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_173_447._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435712._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435711._c1_poly);
  Free_poly_data(&_preg_268435711._c0_poly);
  Free_poly_data(&_preg_268435585._c1_poly);
  Free_poly_data(&_preg_268435585._c0_poly);
  Free_poly_data(&_preg_268435712._c1_poly);
  Free_poly_data(&_preg_268435712._c0_poly);
  Free_poly_data(&_pgen_tmp_173_447._c1_poly);
  Free_poly_data(&_pgen_tmp_173_447._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=8
  for (bs_input_n27_174 = 0; bs_input_n27_174 < 8; bs_input_n27_174 = bs_input_n27_174 + 1) {
    _preg_268435713 = Rotate(input_dup_n27_173, _cst_185[bs_input_n27_174]);
    Copy_ciph(&input_block_n27_175[bs_input_n27_174], &_preg_268435713);
    Free_poly_data(&_preg_268435713._c1_poly);
    Free_poly_data(&_preg_268435713._c0_poly);
  }
  Free_poly_data(&input_dup_n27_173._c1_poly);
  Free_poly_data(&input_dup_n27_173._c0_poly);
  Zero_ciph(&result_n28_176);
  for (num_grid_n28_177 = 0; num_grid_n28_177 < 8; num_grid_n28_177 = num_grid_n28_177 + 1) {
    Zero_ciph(&result_grid_n28_178);
    for (cap_block_n28_179 = 0; cap_block_n28_179 < 8; cap_block_n28_179 = cap_block_n28_179 + 1) {
      _ckks_gen_tmp_3605_261 = input_block_n27_175[cap_block_n28_179];
      Pt_from_msg_ofst(&_pgen_tmp_174_448, 88/* cst_183 */, ((cap_block_n28_179 + (num_grid_n28_177 * 8))) * (8192), 8192, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_175_449, &_ckks_gen_tmp_3605_261, &_pgen_tmp_174_448);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n28_178, &result_grid_n28_178, &_pgen_tmp_175_449);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&result_grid_n28_178._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_175_449._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3605_261._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_174_448._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_175_449._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3605_261._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_174_448._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n28_178._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n28_178._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_175_449._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n28_178._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n28_178._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_175_449._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435714 = Rotate(result_grid_n28_178, num_grid_n28_177 * 512);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n28_176, &result_n28_176, &_preg_268435714);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&result_n28_176._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&result_n28_176._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n28_176._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435714._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&result_n28_176._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n28_176._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435714._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435714._c1_poly);
    Free_poly_data(&_preg_268435714._c0_poly);
  }
  Free_ciph_poly(input_block_n27_175, 8);
  Free_poly_data(&_pgen_tmp_174_448._poly);
  Free_poly_data(&_pgen_tmp_175_449._c1_poly);
  Free_poly_data(&_pgen_tmp_175_449._c0_poly);
  Free_poly_data(&result_grid_n28_178._c1_poly);
  Free_poly_data(&result_grid_n28_178._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n28_176, &result_n28_176);
  Rescale(&result_n28_176._c0_poly, &result_n28_176._c0_poly);
  Rescale(&result_n28_176._c1_poly, &result_n28_176._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_177_451, 89 /* cst_186 */, 8192, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_176_450, &result_n28_176, &_pgen_tmp_177_451);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_176_450._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_176_450._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n28_176._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_177_451._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_176_450._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n28_176._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_177_451._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_177_451._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435586, &_pgen_tmp_176_450);
  Rescale(&_preg_268435586._c0_poly, &_pgen_tmp_176_450._c0_poly);
  Rescale(&_preg_268435586._c1_poly, &_pgen_tmp_176_450._c1_poly);
  Free_poly_data(&_pgen_tmp_176_450._c1_poly);
  Free_poly_data(&_pgen_tmp_176_450._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435715 = Rotate(result_n28_176, -8192);
  Copy_ciph(&_ckks_gen_tmp_3649_262, &_preg_268435715);
  Free_poly_data(&_preg_268435715._c1_poly);
  Free_poly_data(&_preg_268435715._c0_poly);
  Pt_from_msg(&_pgen_tmp_179_453, 90 /* cst_187 */, 8192, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_178_452, &_ckks_gen_tmp_3649_262, &_pgen_tmp_179_453);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_178_452._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_178_452._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3649_262._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_179_453._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_178_452._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3649_262._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_179_453._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_179_453._poly);
  Free_poly_data(&_ckks_gen_tmp_3649_262._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3649_262._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_180_454, &_pgen_tmp_178_452);
  Rescale(&_pgen_tmp_180_454._c0_poly, &_pgen_tmp_178_452._c0_poly);
  Rescale(&_pgen_tmp_180_454._c1_poly, &_pgen_tmp_178_452._c1_poly);
  Free_poly_data(&_pgen_tmp_178_452._c1_poly);
  Free_poly_data(&_pgen_tmp_178_452._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435586, &_preg_268435586, &_pgen_tmp_180_454);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_preg_268435586._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_preg_268435586._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435586._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_180_454._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_preg_268435586._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435586._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_180_454._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_180_454._c1_poly);
  Free_poly_data(&_pgen_tmp_180_454._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_181_455, 91 /* cst_184 */, 8192, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n28_176, &_preg_268435586, &_pgen_tmp_181_455);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&result_n28_176._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&result_n28_176._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435586._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_181_455._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&result_n28_176._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&_preg_268435586._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_181_455._poly);
  Free_poly_data(&_preg_268435586._c1_poly);
  Free_poly_data(&_preg_268435586._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435587, &result_n28_176);
  Free_poly_data(&result_n28_176._c1_poly);
  Free_poly_data(&result_n28_176._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 89
  // /fire9/expand2/expand2.0/Conv
  // pragma: 65536, 1027, 90
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435588, &_preg_268435584);
  Free_poly_data(&_preg_268435584._c1_poly);
  Free_poly_data(&_preg_268435584._c0_poly);
  // BlockingRot replicate=6
  _preg_268435716 = Rotate(_preg_268435588, -4096);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_182_456, &_preg_268435588, &_preg_268435716);
  CMPLR_TM_END(12, 0);
  _preg_268435717 = Rotate(_preg_268435588, -8192);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_183_457, &_pgen_tmp_182_456, &_preg_268435717);
  CMPLR_TM_END(12, 0);
  _preg_268435718 = Rotate(_preg_268435588, -12288);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_184_458, &_pgen_tmp_183_457, &_preg_268435718);
  CMPLR_TM_END(12, 0);
  _preg_268435719 = Rotate(_preg_268435588, -16384);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_185_459, &_pgen_tmp_184_458, &_preg_268435719);
  CMPLR_TM_END(12, 0);
  _preg_268435720 = Rotate(_preg_268435588, -20480);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n28_180, &_pgen_tmp_185_459, &_preg_268435720);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&input_dup_n28_180._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_182_456._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435588._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435716._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_182_456._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435588._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435716._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_183_457._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_182_456._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435717._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_183_457._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_182_456._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435717._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_184_458._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_183_457._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435718._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_184_458._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_183_457._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435718._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_185_459._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_184_458._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435719._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_185_459._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_184_458._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435719._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n28_180._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_185_459._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435720._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n28_180._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_185_459._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435720._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435716._c1_poly);
  Free_poly_data(&_preg_268435716._c0_poly);
  Free_poly_data(&_preg_268435588._c1_poly);
  Free_poly_data(&_preg_268435588._c0_poly);
  Free_poly_data(&_preg_268435717._c1_poly);
  Free_poly_data(&_preg_268435717._c0_poly);
  Free_poly_data(&_pgen_tmp_182_456._c1_poly);
  Free_poly_data(&_pgen_tmp_182_456._c0_poly);
  Free_poly_data(&_preg_268435718._c1_poly);
  Free_poly_data(&_preg_268435718._c0_poly);
  Free_poly_data(&_pgen_tmp_183_457._c1_poly);
  Free_poly_data(&_pgen_tmp_183_457._c0_poly);
  Free_poly_data(&_preg_268435719._c1_poly);
  Free_poly_data(&_preg_268435719._c0_poly);
  Free_poly_data(&_pgen_tmp_184_458._c1_poly);
  Free_poly_data(&_pgen_tmp_184_458._c0_poly);
  Free_poly_data(&_preg_268435720._c1_poly);
  Free_poly_data(&_preg_268435720._c0_poly);
  Free_poly_data(&_pgen_tmp_185_459._c1_poly);
  Free_poly_data(&_pgen_tmp_185_459._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=9
  for (bs_input_n28_181 = 0; bs_input_n28_181 < 9; bs_input_n28_181 = bs_input_n28_181 + 1) {
    _preg_268435721 = Rotate(input_dup_n28_180, _cst_191[bs_input_n28_181]);
    Copy_ciph(&input_block_n28_182[bs_input_n28_181], &_preg_268435721);
    Free_poly_data(&_preg_268435721._c1_poly);
    Free_poly_data(&_preg_268435721._c0_poly);
  }
  Free_poly_data(&input_dup_n28_180._c1_poly);
  Free_poly_data(&input_dup_n28_180._c0_poly);
  Zero_ciph(&result_n29_183);
  for (num_grid_n29_184 = 0; num_grid_n29_184 < 32; num_grid_n29_184 = num_grid_n29_184 + 1) {
    Zero_ciph(&result_grid_n29_185);
    for (cap_block_n29_186 = 0; cap_block_n29_186 < 9; cap_block_n29_186 = cap_block_n29_186 + 1) {
      _ckks_gen_tmp_3754_263 = input_block_n28_182[cap_block_n29_186];
      Pt_from_msg_ofst(&_pgen_tmp_186_460, 92/* cst_189 */, ((cap_block_n29_186 + (num_grid_n29_184 * 9))) * (20480), 20480, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_187_461, &_ckks_gen_tmp_3754_263, &_pgen_tmp_186_460);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n29_185, &result_grid_n29_185, &_pgen_tmp_187_461);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&result_grid_n29_185._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_187_461._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3754_263._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_186_460._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_187_461._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3754_263._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_186_460._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n29_185._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n29_185._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_187_461._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n29_185._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n29_185._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_187_461._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435722 = Rotate(result_grid_n29_185, num_grid_n29_184 * 64);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n29_183, &result_n29_183, &_preg_268435722);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&result_n29_183._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&result_n29_183._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n29_183._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435722._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&result_n29_183._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n29_183._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435722._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435722._c1_poly);
    Free_poly_data(&_preg_268435722._c0_poly);
  }
  Free_ciph_poly(input_block_n28_182, 9);
  Free_poly_data(&_pgen_tmp_186_460._poly);
  Free_poly_data(&_pgen_tmp_187_461._c1_poly);
  Free_poly_data(&_pgen_tmp_187_461._c0_poly);
  Free_poly_data(&result_grid_n29_185._c1_poly);
  Free_poly_data(&result_grid_n29_185._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n29_183, &result_n29_183);
  Rescale(&result_n29_183._c0_poly, &result_n29_183._c0_poly);
  Rescale(&result_n29_183._c1_poly, &result_n29_183._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_189_463, 93 /* cst_192 */, 8192, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_188_462, &result_n29_183, &_pgen_tmp_189_463);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_188_462._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_188_462._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n29_183._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_189_463._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_188_462._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n29_183._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_189_463._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_189_463._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435589, &_pgen_tmp_188_462);
  Rescale(&_preg_268435589._c0_poly, &_pgen_tmp_188_462._c0_poly);
  Rescale(&_preg_268435589._c1_poly, &_pgen_tmp_188_462._c1_poly);
  Free_poly_data(&_pgen_tmp_188_462._c1_poly);
  Free_poly_data(&_pgen_tmp_188_462._c0_poly);
  CMPLR_TM_END(19, 0);
  for (num_block_collecitve_data_n29_187 = 1; num_block_collecitve_data_n29_187 < 2; num_block_collecitve_data_n29_187 = num_block_collecitve_data_n29_187 + 1) {
    _preg_268435723 = Rotate(result_n29_183, num_block_collecitve_data_n29_187 * 10240);
    Copy_ciph(&_ckks_gen_tmp_3810_264, &_preg_268435723);
    Pt_from_msg(&_pgen_tmp_191_465, 94 /* cst_192 */, 8192, 1, 2);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_190_464, &_ckks_gen_tmp_3810_264, &_pgen_tmp_191_465);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&_pgen_tmp_190_464._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_190_464._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3810_264._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_191_465._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_190_464._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3810_264._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_191_465._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_192_466, &_pgen_tmp_190_464);
    Rescale(&_pgen_tmp_192_466._c0_poly, &_pgen_tmp_190_464._c0_poly);
    Rescale(&_pgen_tmp_192_466._c1_poly, &_pgen_tmp_190_464._c1_poly);
    CMPLR_TM_END(19, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_preg_268435589, &_preg_268435589, &_pgen_tmp_192_466);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&_preg_268435589._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&_preg_268435589._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435589._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_192_466._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&_preg_268435589._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435589._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_192_466._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435723._c1_poly);
    Free_poly_data(&_preg_268435723._c0_poly);
  }
  Free_poly_data(&_pgen_tmp_191_465._poly);
  Free_poly_data(&_ckks_gen_tmp_3810_264._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3810_264._c0_poly);
  Free_poly_data(&_pgen_tmp_190_464._c1_poly);
  Free_poly_data(&_pgen_tmp_190_464._c0_poly);
  Free_poly_data(&_pgen_tmp_192_466._c1_poly);
  Free_poly_data(&_pgen_tmp_192_466._c0_poly);
  for (num_block_collecitve_gap_n29_188 = 0; num_block_collecitve_gap_n29_188 < 1; num_block_collecitve_gap_n29_188 = num_block_collecitve_gap_n29_188 + 1) {
    _preg_268435724 = Rotate(result_n29_183, (num_block_collecitve_gap_n29_188 * 10240) + 2048);
    Copy_ciph(&_ckks_gen_tmp_3840_265, &_preg_268435724);
    Pt_from_msg(&_pgen_tmp_194_468, 95 /* cst_193 */, 8192, 1, 2);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_193_467, &_ckks_gen_tmp_3840_265, &_pgen_tmp_194_468);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&_pgen_tmp_193_467._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_193_467._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3840_265._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_194_468._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_193_467._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3840_265._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_194_468._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_195_469, &_pgen_tmp_193_467);
    Rescale(&_pgen_tmp_195_469._c0_poly, &_pgen_tmp_193_467._c0_poly);
    Rescale(&_pgen_tmp_195_469._c1_poly, &_pgen_tmp_193_467._c1_poly);
    CMPLR_TM_END(19, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_preg_268435589, &_preg_268435589, &_pgen_tmp_195_469);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&_preg_268435589._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&_preg_268435589._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435589._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_195_469._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&_preg_268435589._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435589._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_195_469._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435724._c1_poly);
    Free_poly_data(&_preg_268435724._c0_poly);
  }
  Free_poly_data(&_pgen_tmp_194_468._poly);
  Free_poly_data(&_ckks_gen_tmp_3840_265._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3840_265._c0_poly);
  Free_poly_data(&_pgen_tmp_193_467._c1_poly);
  Free_poly_data(&_pgen_tmp_193_467._c0_poly);
  Free_poly_data(&_pgen_tmp_195_469._c1_poly);
  Free_poly_data(&_pgen_tmp_195_469._c0_poly);
  _preg_268435725 = Rotate(result_n29_183, -8192);
  Copy_ciph(&_ckks_gen_tmp_3856_266, &_preg_268435725);
  Free_poly_data(&_preg_268435725._c1_poly);
  Free_poly_data(&_preg_268435725._c0_poly);
  Pt_from_msg(&_pgen_tmp_197_471, 96 /* cst_193 */, 8192, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_196_470, &_ckks_gen_tmp_3856_266, &_pgen_tmp_197_471);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_196_470._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_196_470._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3856_266._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_197_471._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_196_470._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3856_266._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_197_471._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_197_471._poly);
  Free_poly_data(&_ckks_gen_tmp_3856_266._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3856_266._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_198_472, &_pgen_tmp_196_470);
  Rescale(&_pgen_tmp_198_472._c0_poly, &_pgen_tmp_196_470._c0_poly);
  Rescale(&_pgen_tmp_198_472._c1_poly, &_pgen_tmp_196_470._c1_poly);
  Free_poly_data(&_pgen_tmp_196_470._c1_poly);
  Free_poly_data(&_pgen_tmp_196_470._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435589, &_preg_268435589, &_pgen_tmp_198_472);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_preg_268435589._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_preg_268435589._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435589._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_198_472._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_preg_268435589._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435589._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_198_472._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_198_472._c1_poly);
  Free_poly_data(&_pgen_tmp_198_472._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_199_473, 97 /* cst_190 */, 8192, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n29_183, &_preg_268435589, &_pgen_tmp_199_473);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&result_n29_183._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&result_n29_183._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435589._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_199_473._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&result_n29_183._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&_preg_268435589._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_199_473._poly);
  Free_poly_data(&_preg_268435589._c1_poly);
  Free_poly_data(&_preg_268435589._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435590, &result_n29_183);
  Free_poly_data(&result_n29_183._c1_poly);
  Free_poly_data(&result_n29_183._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 90
  // /fire9/Concat
  // pragma: 65536, 1045, 91
  CMPLR_TM_START(4, 0);
  _preg_268435726 = Rotate(_preg_268435590, -8192);
  Free_poly_data(&_preg_268435590._c1_poly);
  Free_poly_data(&_preg_268435590._c0_poly);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435591, &_preg_268435587, &_preg_268435726);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_preg_268435591._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_preg_268435591._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435587._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435726._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_preg_268435591._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435587._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435726._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435726._c1_poly);
  Free_poly_data(&_preg_268435726._c0_poly);
  Free_poly_data(&_preg_268435587._c1_poly);
  Free_poly_data(&_preg_268435587._c0_poly);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_END(4, 0);
  // pragma: 65537, 1045, 91
  // /fire9/relu/Relu
  // pragma: 65536, 1033, 92
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435592, &_preg_268435591, 14);
  Free_poly_data(&_preg_268435591._c1_poly);
  Free_poly_data(&_preg_268435591._c0_poly);
  _preg_268435593 = App_relu(_preg_268435592, _preg_268435592, 16384);
  Free_poly_data(&_preg_268435592._c1_poly);
  Free_poly_data(&_preg_268435592._c0_poly);
  Copy_ciph(&_preg_268435594, &_preg_268435593);
  Free_poly_data(&_preg_268435593._c1_poly);
  Free_poly_data(&_preg_268435593._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 92
  // /conv10/conv10.0/Conv
  // pragma: 65536, 1027, 93
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435595, &_preg_268435594);
  Free_poly_data(&_preg_268435594._c1_poly);
  Free_poly_data(&_preg_268435594._c0_poly);
  // BlockingRot replicate=2
  _preg_268435727 = Rotate(_preg_268435595, -16384);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n29_189, &_preg_268435595, &_preg_268435727);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&input_dup_n29_189._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&input_dup_n29_189._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435595._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435727._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n29_189._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435595._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435727._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435727._c1_poly);
  Free_poly_data(&_preg_268435727._c0_poly);
  Free_poly_data(&_preg_268435595._c1_poly);
  Free_poly_data(&_preg_268435595._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=16
  for (bs_input_n29_190 = 0; bs_input_n29_190 < 16; bs_input_n29_190 = bs_input_n29_190 + 1) {
    _preg_268435728 = Rotate(input_dup_n29_189, _cst_197[bs_input_n29_190]);
    Copy_ciph(&input_block_n29_191[bs_input_n29_190], &_preg_268435728);
    Free_poly_data(&_preg_268435728._c1_poly);
    Free_poly_data(&_preg_268435728._c0_poly);
  }
  Free_poly_data(&input_dup_n29_189._c1_poly);
  Free_poly_data(&input_dup_n29_189._c0_poly);
  Zero_ciph(&result_n30_192);
  for (num_grid_n30_193 = 0; num_grid_n30_193 < 16; num_grid_n30_193 = num_grid_n30_193 + 1) {
    Zero_ciph(&result_grid_n30_194);
    for (cap_block_n30_195 = 0; cap_block_n30_195 < 16; cap_block_n30_195 = cap_block_n30_195 + 1) {
      _ckks_gen_tmp_3978_267 = input_block_n29_191[cap_block_n30_195];
      Pt_from_msg_ofst(&_pgen_tmp_200_474, 98/* cst_195 */, ((cap_block_n30_195 + (num_grid_n30_193 * 16))) * (16384), 16384, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_201_475, &_ckks_gen_tmp_3978_267, &_pgen_tmp_200_474);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n30_194, &result_grid_n30_194, &_pgen_tmp_201_475);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&result_grid_n30_194._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_201_475._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3978_267._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_200_474._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_201_475._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_3978_267._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_200_474._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n30_194._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n30_194._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_201_475._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&result_grid_n30_194._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_grid_n30_194._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_201_475._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435729 = Rotate(result_grid_n30_194, num_grid_n30_193 * 1024);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n30_192, &result_n30_192, &_preg_268435729);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&result_n30_192._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&result_n30_192._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n30_192._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435729._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&result_n30_192._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n30_192._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435729._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435729._c1_poly);
    Free_poly_data(&_preg_268435729._c0_poly);
  }
  Free_ciph_poly(input_block_n29_191, 16);
  Free_poly_data(&_pgen_tmp_200_474._poly);
  Free_poly_data(&_pgen_tmp_201_475._c1_poly);
  Free_poly_data(&_pgen_tmp_201_475._c0_poly);
  Free_poly_data(&result_grid_n30_194._c1_poly);
  Free_poly_data(&result_grid_n30_194._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n30_192, &result_n30_192);
  Rescale(&result_n30_192._c0_poly, &result_n30_192._c0_poly);
  Rescale(&result_n30_192._c1_poly, &result_n30_192._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_203_477, 99 /* cst_198 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_202_476, &result_n30_192, &_pgen_tmp_203_477);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_202_476._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_202_476._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n30_192._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_203_477._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_202_476._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&result_n30_192._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_203_477._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_203_477._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435596, &_pgen_tmp_202_476);
  Rescale(&_preg_268435596._c0_poly, &_pgen_tmp_202_476._c0_poly);
  Rescale(&_preg_268435596._c1_poly, &_pgen_tmp_202_476._c1_poly);
  Free_poly_data(&_pgen_tmp_202_476._c1_poly);
  Free_poly_data(&_pgen_tmp_202_476._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435730 = Rotate(result_n30_192, -16384);
  Copy_ciph(&_ckks_gen_tmp_4022_268, &_preg_268435730);
  Free_poly_data(&_preg_268435730._c1_poly);
  Free_poly_data(&_preg_268435730._c0_poly);
  Pt_from_msg(&_pgen_tmp_205_479, 100 /* cst_199 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_204_478, &_ckks_gen_tmp_4022_268, &_pgen_tmp_205_479);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_204_478._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_204_478._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_4022_268._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_205_479._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_204_478._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_4022_268._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_205_479._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_205_479._poly);
  Free_poly_data(&_ckks_gen_tmp_4022_268._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_4022_268._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_206_480, &_pgen_tmp_204_478);
  Rescale(&_pgen_tmp_206_480._c0_poly, &_pgen_tmp_204_478._c0_poly);
  Rescale(&_pgen_tmp_206_480._c1_poly, &_pgen_tmp_204_478._c1_poly);
  Free_poly_data(&_pgen_tmp_204_478._c1_poly);
  Free_poly_data(&_pgen_tmp_204_478._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435596, &_preg_268435596, &_pgen_tmp_206_480);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_preg_268435596._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&_preg_268435596._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435596._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_206_480._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&_preg_268435596._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435596._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_206_480._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_206_480._c1_poly);
  Free_poly_data(&_pgen_tmp_206_480._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_207_481, 101 /* cst_196 */, 16384, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n30_192, &_preg_268435596, &_pgen_tmp_207_481);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&result_n30_192._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&result_n30_192._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435596._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_207_481._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&result_n30_192._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&_preg_268435596._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_207_481._poly);
  Free_poly_data(&_preg_268435596._c1_poly);
  Free_poly_data(&_preg_268435596._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435597, &result_n30_192);
  Free_poly_data(&result_n30_192._c1_poly);
  Free_poly_data(&result_n30_192._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 93
  // /conv10/conv10.2/Relu
  // pragma: 65536, 1033, 94
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435598, &_preg_268435597, 17);
  Free_poly_data(&_preg_268435597._c1_poly);
  Free_poly_data(&_preg_268435597._c0_poly);
  _preg_268435599 = App_relu(_preg_268435598, _preg_268435598, 16384);
  Free_poly_data(&_preg_268435598._c1_poly);
  Free_poly_data(&_preg_268435598._c0_poly);
  Copy_ciph(&_preg_268435600, &_preg_268435599);
  Free_poly_data(&_preg_268435599._c1_poly);
  Free_poly_data(&_preg_268435599._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 94
  // /avg_pool/GlobalAveragePool
  // pragma: 65536, 1030, 95
  CMPLR_TM_START(8, 0);
  Copy_ciph(&_preg_268435601, &_preg_268435600);
  Free_poly_data(&_preg_268435600._c1_poly);
  Free_poly_data(&_preg_268435600._c0_poly);
  for (gap_sum_index_n30_196 = 0; gap_sum_index_n30_196 < 6; gap_sum_index_n30_196 = gap_sum_index_n30_196 + 1) {
    _preg_268435731 = Rotate(_preg_268435601, 1 << gap_sum_index_n30_196);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_preg_268435601, &_preg_268435601, &_preg_268435731);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&_preg_268435601._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&_preg_268435601._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435601._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435731._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&_preg_268435601._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435601._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435731._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435731._c1_poly);
    Free_poly_data(&_preg_268435731._c0_poly);
  }
  Encode_float(&_pgen_tmp_209_483, &_cst_200, 1, 1, Level(&_preg_268435601));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_208_482, &_preg_268435601, &_pgen_tmp_209_483);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_208_482._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_208_482._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435601._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_209_483._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_208_482._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435601._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_209_483._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_209_483._poly);
  Free_poly_data(&_preg_268435601._c1_poly);
  Free_poly_data(&_preg_268435601._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&gap_result30_197, &_pgen_tmp_208_482);
  Rescale(&gap_result30_197._c0_poly, &_pgen_tmp_208_482._c0_poly);
  Rescale(&gap_result30_197._c1_poly, &_pgen_tmp_208_482._c1_poly);
  Free_poly_data(&_pgen_tmp_208_482._c1_poly);
  Free_poly_data(&_pgen_tmp_208_482._c0_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&_preg_268435602, &gap_result30_197);
  Free_poly_data(&gap_result30_197._c1_poly);
  Free_poly_data(&gap_result30_197._c0_poly);
  Copy_ciph(&orig_result30_198, &_preg_268435602);
  Free_poly_data(&_preg_268435602._c1_poly);
  Free_poly_data(&_preg_268435602._c0_poly);
  Pt_from_msg(&_pgen_tmp_211_485, 102 /* cst_201 */, 16384, 1, 5);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_210_484, &orig_result30_198, &_pgen_tmp_211_485);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_210_484._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_210_484._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&orig_result30_198._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_211_485._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_210_484._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&orig_result30_198._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_211_485._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_211_485._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&orig_result30_198, &_pgen_tmp_210_484);
  Rescale(&orig_result30_198._c0_poly, &_pgen_tmp_210_484._c0_poly);
  Rescale(&orig_result30_198._c1_poly, &_pgen_tmp_210_484._c1_poly);
  Free_poly_data(&_pgen_tmp_210_484._c1_poly);
  Free_poly_data(&_pgen_tmp_210_484._c0_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&ss_result31_199);
  for (comb_cc_lf_index_n31_200 = 0; comb_cc_lf_index_n31_200 < 6; comb_cc_lf_index_n31_200 = comb_cc_lf_index_n31_200 + 1) {
    _preg_268435732 = Rotate(orig_result30_198, (1 << comb_cc_lf_index_n31_200) * 63);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&orig_result30_198, &orig_result30_198, &_preg_268435732);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&orig_result30_198._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&orig_result30_198._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&orig_result30_198._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435732._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&orig_result30_198._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&orig_result30_198._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435732._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435732._c1_poly);
    Free_poly_data(&_preg_268435732._c0_poly);
  }
  for (comb_cc_index_n31_201 = 0; comb_cc_index_n31_201 < 4; comb_cc_index_n31_201 = comb_cc_index_n31_201 + 1) {
    _preg_268435733 = Rotate(orig_result30_198, comb_cc_index_n31_201 * 4032);
    Copy_ciph(&_ckks_gen_tmp_4149_269, &_preg_268435733);
    Pt_from_msg_ofst(&_pgen_tmp_212_486, 103/* cst_202 */, (comb_cc_index_n31_201) * (16384), 16384, 1, 4);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_213_487, &_ckks_gen_tmp_4149_269, &_pgen_tmp_212_486);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&ss_result31_199, &ss_result31_199, &_pgen_tmp_213_487);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&ss_result31_199._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_213_487._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_4149_269._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_212_486._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_213_487._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_4149_269._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_212_486._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&ss_result31_199._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&ss_result31_199._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_213_487._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&ss_result31_199._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&ss_result31_199._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_213_487._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435733._c1_poly);
    Free_poly_data(&_preg_268435733._c0_poly);
  }
  Free_poly_data(&orig_result30_198._c1_poly);
  Free_poly_data(&orig_result30_198._c0_poly);
  Free_poly_data(&_pgen_tmp_212_486._poly);
  Free_poly_data(&_ckks_gen_tmp_4149_269._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_4149_269._c0_poly);
  Free_poly_data(&_pgen_tmp_213_487._c1_poly);
  Free_poly_data(&_pgen_tmp_213_487._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&ss_result31_199, &ss_result31_199);
  Rescale(&ss_result31_199._c0_poly, &ss_result31_199._c0_poly);
  Rescale(&ss_result31_199._c1_poly, &ss_result31_199._c1_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&_preg_268435603, &ss_result31_199);
  Free_poly_data(&ss_result31_199._c1_poly);
  Free_poly_data(&ss_result31_199._c0_poly);
  CMPLR_TM_END(8, 0);
  // pragma: 65537, 1030, 95
  // /Flatten
  // pragma: 65536, 1028, 96
  CMPLR_TM_START(6, 0);
  Copy_ciph(&_preg_268435604, &_preg_268435603);
  Free_poly_data(&_preg_268435603._c1_poly);
  Free_poly_data(&_preg_268435603._c0_poly);
  CMPLR_TM_END(6, 0);
  // pragma: 65537, 1028, 96
  // /fc/Gemm
  // pragma: 65536, 1029, 97
  CMPLR_TM_START(7, 0);
  // BlockingRot replicate=2
  _preg_268435734 = Rotate(_preg_268435604, -260);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n31_202, &_preg_268435604, &_preg_268435734);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&input_dup_n31_202._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&input_dup_n31_202._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435604._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435734._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modadd(Coeffs(&input_dup_n31_202._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435604._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435734._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_preg_268435734._c1_poly);
  Free_poly_data(&_preg_268435734._c0_poly);
  Free_poly_data(&_preg_268435604._c1_poly);
  Free_poly_data(&_preg_268435604._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=2
  for (bs_input_n31_203 = 0; bs_input_n31_203 < 2; bs_input_n31_203 = bs_input_n31_203 + 1) {
    _preg_268435735 = Rotate(input_dup_n31_202, _cst_205[bs_input_n31_203]);
    Copy_ciph(&input_block_n31_204[bs_input_n31_203], &_preg_268435735);
    Free_poly_data(&_preg_268435735._c1_poly);
    Free_poly_data(&_preg_268435735._c0_poly);
  }
  Free_poly_data(&input_dup_n31_202._c1_poly);
  Free_poly_data(&input_dup_n31_202._c0_poly);
  Zero_ciph(&gemm_result_n32_205);
  // IMRA Metakernel: gs=5
  for (gs_n32_206 = 0; gs_n32_206 < 5; gs_n32_206 = gs_n32_206 + 1) {
    Zero_ciph(&block_result_207);
    for (bs_n32_208 = 0; bs_n32_208 < 2; bs_n32_208 = bs_n32_208 + 1) {
      _ckks_gen_tmp_4241_270 = input_block_n31_204[bs_n32_208];
      Pt_from_msg_ofst(&_pgen_tmp_214_488, 104/* cst_204 */, ((bs_n32_208 + (gs_n32_206 * 2))) * (270), 270, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_215_489, &_ckks_gen_tmp_4241_270, &_pgen_tmp_214_488);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&block_result_207, &block_result_207, &_pgen_tmp_215_489);
      _pgen_modulus_271 = Q_modulus();
      _pgen_num_q_272 = Poly_level(&block_result_207._c0_poly);
      for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_215_489._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_4241_270._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_214_488._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_215_489._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_ckks_gen_tmp_4241_270._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_214_488._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&block_result_207._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&block_result_207._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_215_489._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        Hw_modadd(Coeffs(&block_result_207._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&block_result_207._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_215_489._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
        _pgen_modulus_271 = _pgen_modulus_271 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435736 = Rotate(block_result_207, gs_n32_206 * 2);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&gemm_result_n32_205, &gemm_result_n32_205, &_preg_268435736);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&gemm_result_n32_205._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&gemm_result_n32_205._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&gemm_result_n32_205._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435736._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&gemm_result_n32_205._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&gemm_result_n32_205._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435736._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435736._c1_poly);
    Free_poly_data(&_preg_268435736._c0_poly);
  }
  Free_ciph_poly(input_block_n31_204, 2);
  Free_poly_data(&_pgen_tmp_214_488._poly);
  Free_poly_data(&_pgen_tmp_215_489._c1_poly);
  Free_poly_data(&_pgen_tmp_215_489._c0_poly);
  Free_poly_data(&block_result_207._c1_poly);
  Free_poly_data(&block_result_207._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&gemm_result_n32_205, &gemm_result_n32_205);
  Rescale(&gemm_result_n32_205._c0_poly, &gemm_result_n32_205._c0_poly);
  Rescale(&gemm_result_n32_205._c1_poly, &gemm_result_n32_205._c1_poly);
  CMPLR_TM_END(19, 0);
  // gemm result reduce->Ps=1
  // gemm result reduce->(kp/np)=26
  Copy_ciph(&reduce_intra_209, &gemm_result_n32_205);
  for (ri_n32_210 = 1; ri_n32_210 < 26; ri_n32_210 = ri_n32_210 + 1) {
    _preg_268435737 = Rotate(gemm_result_n32_205, ri_n32_210 * 10);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&reduce_intra_209, &reduce_intra_209, &_preg_268435737);
    _pgen_modulus_271 = Q_modulus();
    _pgen_num_q_272 = Poly_level(&reduce_intra_209._c0_poly);
    for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
      Hw_modadd(Coeffs(&reduce_intra_209._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&reduce_intra_209._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435737._c0_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      Hw_modadd(Coeffs(&reduce_intra_209._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&reduce_intra_209._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_preg_268435737._c1_poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
      _pgen_modulus_271 = _pgen_modulus_271 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435737._c1_poly);
    Free_poly_data(&_preg_268435737._c0_poly);
  }
  Free_poly_data(&gemm_result_n32_205._c1_poly);
  Free_poly_data(&gemm_result_n32_205._c0_poly);
  // gemm add bias
  Pt_from_msg(&_pgen_tmp_216_490, 105 /* cst_3 */, 10, 1, 2);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&reduce_intra_209, &reduce_intra_209, &_pgen_tmp_216_490);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&reduce_intra_209._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modadd(Coeffs(&reduce_intra_209._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&reduce_intra_209._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_216_490._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Set_coeffs(&reduce_intra_209._c1_poly, _pgen_rns_idx_273, degree, Coeffs(&reduce_intra_209._c1_poly, _pgen_rns_idx_273, degree));
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_216_490._poly);
  CMPLR_TM_END(13, 0);
  Pt_from_msg(&_pgen_tmp_218_492, 106 /* cst_206 */, 10, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_217_491, &reduce_intra_209, &_pgen_tmp_218_492);
  _pgen_modulus_271 = Q_modulus();
  _pgen_num_q_272 = Poly_level(&_pgen_tmp_217_491._c0_poly);
  for (_pgen_rns_idx_273 = 0; _pgen_rns_idx_273 < _pgen_num_q_272; _pgen_rns_idx_273 = _pgen_rns_idx_273 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_217_491._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&reduce_intra_209._c0_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_218_492._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_217_491._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&reduce_intra_209._c1_poly, _pgen_rns_idx_273, degree), Coeffs(&_pgen_tmp_218_492._poly, _pgen_rns_idx_273, degree), _pgen_modulus_271, degree);
    _pgen_modulus_271 = _pgen_modulus_271 + 1;
  }
  Free_poly_data(&_pgen_tmp_218_492._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&reduce_intra_209, &_pgen_tmp_217_491);
  Rescale(&reduce_intra_209._c0_poly, &_pgen_tmp_217_491._c0_poly);
  Rescale(&reduce_intra_209._c1_poly, &_pgen_tmp_217_491._c1_poly);
  Free_poly_data(&_pgen_tmp_217_491._c1_poly);
  Free_poly_data(&_pgen_tmp_217_491._c0_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&output_211, &reduce_intra_209);
  Free_poly_data(&reduce_intra_209._c1_poly);
  Free_poly_data(&reduce_intra_209._c0_poly);
  CMPLR_TM_END(7, 0);
  // pragma: 65537, 1029, 97
  Set_output_data("output", 0, &output_211);
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
  CIPHERTEXT3 _pgen_tmp_0_27;
  MODULUS* _pgen_modulus_28;
  uint32_t _pgen_num_q_29;
  uint32_t _pgen_rns_idx_30;
  POLYNOMIAL _pgen_tmp_1_31;
  POLYNOMIAL _pgen_tmp_2_32;
  CIPHERTEXT3 _pgen_tmp_3_33;
  CIPHERTEXT _pgen_tmp_4_34;
  PLAINTEXT _pgen_tmp_5_35;
  CIPHERTEXT3 _pgen_tmp_6_36;
  POLYNOMIAL _pgen_tmp_7_37;
  POLYNOMIAL _pgen_tmp_8_38;
  CIPHERTEXT3 _pgen_tmp_9_39;
  CIPHERTEXT _pgen_tmp_10_40;
  PLAINTEXT _pgen_tmp_11_41;
  CIPHERTEXT3 _pgen_tmp_12_42;
  CIPHERTEXT3 _pgen_tmp_13_43;
  CIPHERTEXT _pgen_tmp_14_44;
  PLAINTEXT _pgen_tmp_15_45;
  CIPHERTEXT _pgen_tmp_16_46;
  POLYNOMIAL _pgen_tmp_17_47;
  POLYNOMIAL _pgen_tmp_18_48;
  CIPHERTEXT3 _pgen_tmp_19_49;
  CIPHERTEXT _pgen_tmp_20_50;
  PLAINTEXT _pgen_tmp_21_51;
  CIPHERTEXT _pgen_tmp_22_52;
  CIPHERTEXT _pgen_tmp_23_53;
  POLYNOMIAL _pgen_tmp_24_54;
  POLYNOMIAL _pgen_tmp_25_55;
  CIPHERTEXT3 _pgen_tmp_26_56;
  CIPHERTEXT3 _pgen_tmp_27_57;
  CIPHERTEXT _pgen_tmp_28_58;
  PLAINTEXT _pgen_tmp_29_59;
  CIPHERTEXT _pgen_tmp_30_60;
  POLYNOMIAL _pgen_tmp_31_61;
  POLYNOMIAL _pgen_tmp_32_62;
  CIPHERTEXT3 _pgen_tmp_33_63;
  CIPHERTEXT _pgen_tmp_34_64;
  PLAINTEXT _pgen_tmp_35_65;
  CIPHERTEXT _pgen_tmp_36_66;
  CIPHERTEXT _pgen_tmp_37_67;
  CIPHERTEXT3 _pgen_tmp_38_68;
  POLYNOMIAL _pgen_tmp_39_69;
  POLYNOMIAL _pgen_tmp_40_70;
  CIPHERTEXT3 _pgen_tmp_41_71;
  CIPHERTEXT _pgen_tmp_42_72;
  PLAINTEXT _pgen_tmp_43_73;
  CIPHERTEXT3 _pgen_tmp_44_74;
  POLYNOMIAL _pgen_tmp_45_75;
  POLYNOMIAL _pgen_tmp_46_76;
  CIPHERTEXT3 _pgen_tmp_47_77;
  CIPHERTEXT _pgen_tmp_48_78;
  CIPHERTEXT _pgen_tmp_49_79;
  PLAINTEXT _pgen_tmp_50_80;
  CIPHERTEXT _pgen_tmp_51_81;
  CIPHERTEXT3 _pgen_tmp_52_82;
  POLYNOMIAL _pgen_tmp_53_83;
  POLYNOMIAL _pgen_tmp_54_84;
  CIPHERTEXT3 _pgen_tmp_55_85;
  CIPHERTEXT _pgen_tmp_56_86;
  PLAINTEXT _pgen_tmp_57_87;
  CIPHERTEXT3 _pgen_tmp_58_88;
  POLYNOMIAL _pgen_tmp_59_89;
  POLYNOMIAL _pgen_tmp_60_90;
  CIPHERTEXT3 _pgen_tmp_61_91;
  CIPHERTEXT _pgen_tmp_62_92;
  PLAINTEXT _pgen_tmp_63_93;
  CIPHERTEXT3 _pgen_tmp_64_94;
  CIPHERTEXT3 _pgen_tmp_65_95;
  CIPHERTEXT3 _pgen_tmp_66_96;
  CIPHERTEXT _pgen_tmp_67_97;
  PLAINTEXT _pgen_tmp_68_98;
  CIPHERTEXT _pgen_tmp_69_99;
  POLYNOMIAL _pgen_tmp_70_100;
  POLYNOMIAL _pgen_tmp_71_101;
  CIPHERTEXT3 _pgen_tmp_72_102;
  CIPHERTEXT _pgen_tmp_73_103;
  PLAINTEXT _pgen_tmp_74_104;
  CIPHERTEXT _pgen_tmp_75_105;
  CIPHERTEXT _pgen_tmp_76_106;
  POLYNOMIAL _pgen_tmp_77_107;
  POLYNOMIAL _pgen_tmp_78_108;
  CIPHERTEXT3 _pgen_tmp_79_109;
  CIPHERTEXT _pgen_tmp_80_110;
  PLAINTEXT _pgen_tmp_81_111;
  CIPHERTEXT _pgen_tmp_82_112;
  CIPHERTEXT _pgen_tmp_83_113;
  PLAINTEXT _pgen_tmp_84_114;
  CIPHERTEXT _pgen_tmp_85_115;
  CIPHERTEXT _pgen_tmp_86_116;
  CIPHERTEXT _pgen_tmp_87_117;
  POLYNOMIAL _pgen_tmp_88_118;
  POLYNOMIAL _pgen_tmp_89_119;
  CIPHERTEXT3 _pgen_tmp_90_120;
  CIPHERTEXT3 _pgen_tmp_91_121;
  CIPHERTEXT _pgen_tmp_92_122;
  PLAINTEXT _pgen_tmp_93_123;
  CIPHERTEXT _pgen_tmp_94_124;
  CIPHERTEXT _pgen_tmp_95_125;
  PLAINTEXT _pgen_tmp_96_126;
  CIPHERTEXT _pgen_tmp_97_127;
  CIPHERTEXT _pgen_tmp_98_128;
  POLYNOMIAL _pgen_tmp_99_129;
  POLYNOMIAL _pgen_tmp_100_130;
  CIPHERTEXT3 _pgen_tmp_101_131;
  CIPHERTEXT _pgen_tmp_102_132;
  PLAINTEXT _pgen_tmp_103_133;
  CIPHERTEXT _pgen_tmp_104_134;
  CIPHERTEXT _pgen_tmp_105_135;
  PLAINTEXT _pgen_tmp_106_136;
  CIPHERTEXT _pgen_tmp_107_137;
  CIPHERTEXT _pgen_tmp_108_138;
  CIPHERTEXT _pgen_tmp_109_139;
  CIPHERTEXT3 _pgen_tmp_110_140;
  POLYNOMIAL _pgen_tmp_111_141;
  POLYNOMIAL _pgen_tmp_112_142;
  CIPHERTEXT3 _pgen_tmp_113_143;
  CIPHERTEXT _pgen_tmp_114_144;
  PLAINTEXT _pgen_tmp_115_145;
  CIPHERTEXT3 _pgen_tmp_116_146;
  POLYNOMIAL _pgen_tmp_117_147;
  POLYNOMIAL _pgen_tmp_118_148;
  CIPHERTEXT3 _pgen_tmp_119_149;
  CIPHERTEXT _pgen_tmp_120_150;
  CIPHERTEXT _pgen_tmp_121_151;
  PLAINTEXT _pgen_tmp_122_152;
  CIPHERTEXT _pgen_tmp_123_153;
  CIPHERTEXT3 _pgen_tmp_124_154;
  POLYNOMIAL _pgen_tmp_125_155;
  POLYNOMIAL _pgen_tmp_126_156;
  CIPHERTEXT3 _pgen_tmp_127_157;
  CIPHERTEXT _pgen_tmp_128_158;
  PLAINTEXT _pgen_tmp_129_159;
  CIPHERTEXT3 _pgen_tmp_130_160;
  POLYNOMIAL _pgen_tmp_131_161;
  POLYNOMIAL _pgen_tmp_132_162;
  CIPHERTEXT3 _pgen_tmp_133_163;
  CIPHERTEXT _pgen_tmp_134_164;
  PLAINTEXT _pgen_tmp_135_165;
  CIPHERTEXT3 _pgen_tmp_136_166;
  CIPHERTEXT3 _pgen_tmp_137_167;
  CIPHERTEXT3 _pgen_tmp_138_168;
  CIPHERTEXT _pgen_tmp_139_169;
  PLAINTEXT _pgen_tmp_140_170;
  CIPHERTEXT _pgen_tmp_141_171;
  POLYNOMIAL _pgen_tmp_142_172;
  POLYNOMIAL _pgen_tmp_143_173;
  CIPHERTEXT3 _pgen_tmp_144_174;
  POLYNOMIAL _pgen_tmp_145_175;
  POLYNOMIAL _pgen_tmp_146_176;
  CIPHERTEXT3 _pgen_tmp_147_177;
  CIPHERTEXT3 _pgen_tmp_148_178;
  CIPHERTEXT _pgen_tmp_149_179;
  PLAINTEXT _pgen_tmp_150_180;
  CIPHERTEXT _pgen_tmp_151_181;
  POLYNOMIAL _pgen_tmp_152_182;
  POLYNOMIAL _pgen_tmp_153_183;
  CIPHERTEXT3 _pgen_tmp_154_184;
  CIPHERTEXT3 _pgen_tmp_155_185;
  CIPHERTEXT _pgen_tmp_156_186;
  PLAINTEXT _pgen_tmp_157_187;
  CIPHERTEXT _pgen_tmp_158_188;
  POLYNOMIAL _pgen_tmp_159_189;
  POLYNOMIAL _pgen_tmp_160_190;
  CIPHERTEXT3 _pgen_tmp_161_191;
  CIPHERTEXT _pgen_tmp_162_192;
  CIPHERTEXT _pgen_tmp_163_193;
  POLYNOMIAL _pgen_tmp_164_194;
  POLYNOMIAL _pgen_tmp_165_195;
  CIPHERTEXT3 _pgen_tmp_166_196;
  CIPHERTEXT3 _pgen_tmp_167_197;
  CIPHERTEXT3 _pgen_tmp_168_198;
  CIPHERTEXT _pgen_tmp_169_199;
  PLAINTEXT _pgen_tmp_170_200;
  CIPHERTEXT _pgen_tmp_171_201;
  POLYNOMIAL _pgen_tmp_172_202;
  POLYNOMIAL _pgen_tmp_173_203;
  CIPHERTEXT3 _pgen_tmp_174_204;
  CIPHERTEXT3 _pgen_tmp_175_205;
  CIPHERTEXT _pgen_tmp_176_206;
  PLAINTEXT _pgen_tmp_177_207;
  CIPHERTEXT _pgen_tmp_178_208;
  POLYNOMIAL _pgen_tmp_179_209;
  POLYNOMIAL _pgen_tmp_180_210;
  CIPHERTEXT3 _pgen_tmp_181_211;
  CIPHERTEXT _pgen_tmp_182_212;
  POLYNOMIAL _pgen_tmp_183_213;
  POLYNOMIAL _pgen_tmp_184_214;
  CIPHERTEXT3 _pgen_tmp_185_215;
  CIPHERTEXT3 _pgen_tmp_186_216;
  CIPHERTEXT _pgen_tmp_187_217;
  PLAINTEXT _pgen_tmp_188_218;
  CIPHERTEXT _pgen_tmp_189_219;
  POLYNOMIAL _pgen_tmp_190_220;
  POLYNOMIAL _pgen_tmp_191_221;
  CIPHERTEXT3 _pgen_tmp_192_222;
  CIPHERTEXT3 _pgen_tmp_193_223;
  CIPHERTEXT _pgen_tmp_194_224;
  PLAINTEXT _pgen_tmp_195_225;
  CIPHERTEXT _pgen_tmp_196_226;
  POLYNOMIAL _pgen_tmp_197_227;
  POLYNOMIAL _pgen_tmp_198_228;
  CIPHERTEXT3 _pgen_tmp_199_229;
  CIPHERTEXT _pgen_tmp_200_230;
  CIPHERTEXT _pgen_tmp_201_231;
  CIPHERTEXT _pgen_tmp_202_232;
  PLAINTEXT _pgen_tmp_203_233;
  CIPHERTEXT _pgen_tmp_204_234;
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
  uint32_t  degree = Degree();
  memset(&_relu_tmp8_3, 0, sizeof(_relu_tmp8_3));
  memset(&_relu_tmp14_4, 0, sizeof(_relu_tmp14_4));
  memset(&_relu_tmp18_5, 0, sizeof(_relu_tmp18_5));
  memset(&_relu_tmp24_6, 0, sizeof(_relu_tmp24_6));
  memset(&_relu_tmp58_7, 0, sizeof(_relu_tmp58_7));
  memset(&_relu_tmp62_8, 0, sizeof(_relu_tmp62_8));
  memset(&_relu_tmp68_9, 0, sizeof(_relu_tmp68_9));
  memset(&_relu_tmp72_10, 0, sizeof(_relu_tmp72_10));
  memset(&_relu_tmp80_11, 0, sizeof(_relu_tmp80_11));
  memset(&_relu_tmp84_12, 0, sizeof(_relu_tmp84_12));
  memset(&_relu_tmp90_13, 0, sizeof(_relu_tmp90_13));
  memset(&_relu_tmp94_14, 0, sizeof(_relu_tmp94_14));
  memset(&_relu_tmp100_15, 0, sizeof(_relu_tmp100_15));
  memset(&_relu_tmp155_16, 0, sizeof(_relu_tmp155_16));
  memset(&_relu_tmp159_17, 0, sizeof(_relu_tmp159_17));
  memset(&_relu_tmp165_18, 0, sizeof(_relu_tmp165_18));
  memset(&_relu_tmp169_19, 0, sizeof(_relu_tmp169_19));
  memset(&_relu_tmp177_20, 0, sizeof(_relu_tmp177_20));
  memset(&_relu_tmp181_21, 0, sizeof(_relu_tmp181_21));
  memset(&_relu_tmp187_22, 0, sizeof(_relu_tmp187_22));
  memset(&_relu_tmp191_23, 0, sizeof(_relu_tmp191_23));
  memset(&_relu_tmp197_24, 0, sizeof(_relu_tmp197_24));
  memset(&_relu_tmp266_25, 0, sizeof(_relu_tmp266_25));
  memset(&_relu_tmp274_26, 0, sizeof(_relu_tmp274_26));
  memset(&_pgen_tmp_0_27, 0, sizeof(_pgen_tmp_0_27));
  memset(&_pgen_tmp_1_31, 0, sizeof(_pgen_tmp_1_31));
  memset(&_pgen_tmp_2_32, 0, sizeof(_pgen_tmp_2_32));
  memset(&_pgen_tmp_3_33, 0, sizeof(_pgen_tmp_3_33));
  memset(&_pgen_tmp_4_34, 0, sizeof(_pgen_tmp_4_34));
  memset(&_pgen_tmp_5_35, 0, sizeof(_pgen_tmp_5_35));
  memset(&_pgen_tmp_6_36, 0, sizeof(_pgen_tmp_6_36));
  memset(&_pgen_tmp_7_37, 0, sizeof(_pgen_tmp_7_37));
  memset(&_pgen_tmp_8_38, 0, sizeof(_pgen_tmp_8_38));
  memset(&_pgen_tmp_9_39, 0, sizeof(_pgen_tmp_9_39));
  memset(&_pgen_tmp_10_40, 0, sizeof(_pgen_tmp_10_40));
  memset(&_pgen_tmp_11_41, 0, sizeof(_pgen_tmp_11_41));
  memset(&_pgen_tmp_12_42, 0, sizeof(_pgen_tmp_12_42));
  memset(&_pgen_tmp_13_43, 0, sizeof(_pgen_tmp_13_43));
  memset(&_pgen_tmp_14_44, 0, sizeof(_pgen_tmp_14_44));
  memset(&_pgen_tmp_15_45, 0, sizeof(_pgen_tmp_15_45));
  memset(&_pgen_tmp_16_46, 0, sizeof(_pgen_tmp_16_46));
  memset(&_pgen_tmp_17_47, 0, sizeof(_pgen_tmp_17_47));
  memset(&_pgen_tmp_18_48, 0, sizeof(_pgen_tmp_18_48));
  memset(&_pgen_tmp_19_49, 0, sizeof(_pgen_tmp_19_49));
  memset(&_pgen_tmp_20_50, 0, sizeof(_pgen_tmp_20_50));
  memset(&_pgen_tmp_21_51, 0, sizeof(_pgen_tmp_21_51));
  memset(&_pgen_tmp_22_52, 0, sizeof(_pgen_tmp_22_52));
  memset(&_pgen_tmp_23_53, 0, sizeof(_pgen_tmp_23_53));
  memset(&_pgen_tmp_24_54, 0, sizeof(_pgen_tmp_24_54));
  memset(&_pgen_tmp_25_55, 0, sizeof(_pgen_tmp_25_55));
  memset(&_pgen_tmp_26_56, 0, sizeof(_pgen_tmp_26_56));
  memset(&_pgen_tmp_27_57, 0, sizeof(_pgen_tmp_27_57));
  memset(&_pgen_tmp_28_58, 0, sizeof(_pgen_tmp_28_58));
  memset(&_pgen_tmp_29_59, 0, sizeof(_pgen_tmp_29_59));
  memset(&_pgen_tmp_30_60, 0, sizeof(_pgen_tmp_30_60));
  memset(&_pgen_tmp_31_61, 0, sizeof(_pgen_tmp_31_61));
  memset(&_pgen_tmp_32_62, 0, sizeof(_pgen_tmp_32_62));
  memset(&_pgen_tmp_33_63, 0, sizeof(_pgen_tmp_33_63));
  memset(&_pgen_tmp_34_64, 0, sizeof(_pgen_tmp_34_64));
  memset(&_pgen_tmp_35_65, 0, sizeof(_pgen_tmp_35_65));
  memset(&_pgen_tmp_36_66, 0, sizeof(_pgen_tmp_36_66));
  memset(&_pgen_tmp_37_67, 0, sizeof(_pgen_tmp_37_67));
  memset(&_pgen_tmp_38_68, 0, sizeof(_pgen_tmp_38_68));
  memset(&_pgen_tmp_39_69, 0, sizeof(_pgen_tmp_39_69));
  memset(&_pgen_tmp_40_70, 0, sizeof(_pgen_tmp_40_70));
  memset(&_pgen_tmp_41_71, 0, sizeof(_pgen_tmp_41_71));
  memset(&_pgen_tmp_42_72, 0, sizeof(_pgen_tmp_42_72));
  memset(&_pgen_tmp_43_73, 0, sizeof(_pgen_tmp_43_73));
  memset(&_pgen_tmp_44_74, 0, sizeof(_pgen_tmp_44_74));
  memset(&_pgen_tmp_45_75, 0, sizeof(_pgen_tmp_45_75));
  memset(&_pgen_tmp_46_76, 0, sizeof(_pgen_tmp_46_76));
  memset(&_pgen_tmp_47_77, 0, sizeof(_pgen_tmp_47_77));
  memset(&_pgen_tmp_48_78, 0, sizeof(_pgen_tmp_48_78));
  memset(&_pgen_tmp_49_79, 0, sizeof(_pgen_tmp_49_79));
  memset(&_pgen_tmp_50_80, 0, sizeof(_pgen_tmp_50_80));
  memset(&_pgen_tmp_51_81, 0, sizeof(_pgen_tmp_51_81));
  memset(&_pgen_tmp_52_82, 0, sizeof(_pgen_tmp_52_82));
  memset(&_pgen_tmp_53_83, 0, sizeof(_pgen_tmp_53_83));
  memset(&_pgen_tmp_54_84, 0, sizeof(_pgen_tmp_54_84));
  memset(&_pgen_tmp_55_85, 0, sizeof(_pgen_tmp_55_85));
  memset(&_pgen_tmp_56_86, 0, sizeof(_pgen_tmp_56_86));
  memset(&_pgen_tmp_57_87, 0, sizeof(_pgen_tmp_57_87));
  memset(&_pgen_tmp_58_88, 0, sizeof(_pgen_tmp_58_88));
  memset(&_pgen_tmp_59_89, 0, sizeof(_pgen_tmp_59_89));
  memset(&_pgen_tmp_60_90, 0, sizeof(_pgen_tmp_60_90));
  memset(&_pgen_tmp_61_91, 0, sizeof(_pgen_tmp_61_91));
  memset(&_pgen_tmp_62_92, 0, sizeof(_pgen_tmp_62_92));
  memset(&_pgen_tmp_63_93, 0, sizeof(_pgen_tmp_63_93));
  memset(&_pgen_tmp_64_94, 0, sizeof(_pgen_tmp_64_94));
  memset(&_pgen_tmp_65_95, 0, sizeof(_pgen_tmp_65_95));
  memset(&_pgen_tmp_66_96, 0, sizeof(_pgen_tmp_66_96));
  memset(&_pgen_tmp_67_97, 0, sizeof(_pgen_tmp_67_97));
  memset(&_pgen_tmp_68_98, 0, sizeof(_pgen_tmp_68_98));
  memset(&_pgen_tmp_69_99, 0, sizeof(_pgen_tmp_69_99));
  memset(&_pgen_tmp_70_100, 0, sizeof(_pgen_tmp_70_100));
  memset(&_pgen_tmp_71_101, 0, sizeof(_pgen_tmp_71_101));
  memset(&_pgen_tmp_72_102, 0, sizeof(_pgen_tmp_72_102));
  memset(&_pgen_tmp_73_103, 0, sizeof(_pgen_tmp_73_103));
  memset(&_pgen_tmp_74_104, 0, sizeof(_pgen_tmp_74_104));
  memset(&_pgen_tmp_75_105, 0, sizeof(_pgen_tmp_75_105));
  memset(&_pgen_tmp_76_106, 0, sizeof(_pgen_tmp_76_106));
  memset(&_pgen_tmp_77_107, 0, sizeof(_pgen_tmp_77_107));
  memset(&_pgen_tmp_78_108, 0, sizeof(_pgen_tmp_78_108));
  memset(&_pgen_tmp_79_109, 0, sizeof(_pgen_tmp_79_109));
  memset(&_pgen_tmp_80_110, 0, sizeof(_pgen_tmp_80_110));
  memset(&_pgen_tmp_81_111, 0, sizeof(_pgen_tmp_81_111));
  memset(&_pgen_tmp_82_112, 0, sizeof(_pgen_tmp_82_112));
  memset(&_pgen_tmp_83_113, 0, sizeof(_pgen_tmp_83_113));
  memset(&_pgen_tmp_84_114, 0, sizeof(_pgen_tmp_84_114));
  memset(&_pgen_tmp_85_115, 0, sizeof(_pgen_tmp_85_115));
  memset(&_pgen_tmp_86_116, 0, sizeof(_pgen_tmp_86_116));
  memset(&_pgen_tmp_87_117, 0, sizeof(_pgen_tmp_87_117));
  memset(&_pgen_tmp_88_118, 0, sizeof(_pgen_tmp_88_118));
  memset(&_pgen_tmp_89_119, 0, sizeof(_pgen_tmp_89_119));
  memset(&_pgen_tmp_90_120, 0, sizeof(_pgen_tmp_90_120));
  memset(&_pgen_tmp_91_121, 0, sizeof(_pgen_tmp_91_121));
  memset(&_pgen_tmp_92_122, 0, sizeof(_pgen_tmp_92_122));
  memset(&_pgen_tmp_93_123, 0, sizeof(_pgen_tmp_93_123));
  memset(&_pgen_tmp_94_124, 0, sizeof(_pgen_tmp_94_124));
  memset(&_pgen_tmp_95_125, 0, sizeof(_pgen_tmp_95_125));
  memset(&_pgen_tmp_96_126, 0, sizeof(_pgen_tmp_96_126));
  memset(&_pgen_tmp_97_127, 0, sizeof(_pgen_tmp_97_127));
  memset(&_pgen_tmp_98_128, 0, sizeof(_pgen_tmp_98_128));
  memset(&_pgen_tmp_99_129, 0, sizeof(_pgen_tmp_99_129));
  memset(&_pgen_tmp_100_130, 0, sizeof(_pgen_tmp_100_130));
  memset(&_pgen_tmp_101_131, 0, sizeof(_pgen_tmp_101_131));
  memset(&_pgen_tmp_102_132, 0, sizeof(_pgen_tmp_102_132));
  memset(&_pgen_tmp_103_133, 0, sizeof(_pgen_tmp_103_133));
  memset(&_pgen_tmp_104_134, 0, sizeof(_pgen_tmp_104_134));
  memset(&_pgen_tmp_105_135, 0, sizeof(_pgen_tmp_105_135));
  memset(&_pgen_tmp_106_136, 0, sizeof(_pgen_tmp_106_136));
  memset(&_pgen_tmp_107_137, 0, sizeof(_pgen_tmp_107_137));
  memset(&_pgen_tmp_108_138, 0, sizeof(_pgen_tmp_108_138));
  memset(&_pgen_tmp_109_139, 0, sizeof(_pgen_tmp_109_139));
  memset(&_pgen_tmp_110_140, 0, sizeof(_pgen_tmp_110_140));
  memset(&_pgen_tmp_111_141, 0, sizeof(_pgen_tmp_111_141));
  memset(&_pgen_tmp_112_142, 0, sizeof(_pgen_tmp_112_142));
  memset(&_pgen_tmp_113_143, 0, sizeof(_pgen_tmp_113_143));
  memset(&_pgen_tmp_114_144, 0, sizeof(_pgen_tmp_114_144));
  memset(&_pgen_tmp_115_145, 0, sizeof(_pgen_tmp_115_145));
  memset(&_pgen_tmp_116_146, 0, sizeof(_pgen_tmp_116_146));
  memset(&_pgen_tmp_117_147, 0, sizeof(_pgen_tmp_117_147));
  memset(&_pgen_tmp_118_148, 0, sizeof(_pgen_tmp_118_148));
  memset(&_pgen_tmp_119_149, 0, sizeof(_pgen_tmp_119_149));
  memset(&_pgen_tmp_120_150, 0, sizeof(_pgen_tmp_120_150));
  memset(&_pgen_tmp_121_151, 0, sizeof(_pgen_tmp_121_151));
  memset(&_pgen_tmp_122_152, 0, sizeof(_pgen_tmp_122_152));
  memset(&_pgen_tmp_123_153, 0, sizeof(_pgen_tmp_123_153));
  memset(&_pgen_tmp_124_154, 0, sizeof(_pgen_tmp_124_154));
  memset(&_pgen_tmp_125_155, 0, sizeof(_pgen_tmp_125_155));
  memset(&_pgen_tmp_126_156, 0, sizeof(_pgen_tmp_126_156));
  memset(&_pgen_tmp_127_157, 0, sizeof(_pgen_tmp_127_157));
  memset(&_pgen_tmp_128_158, 0, sizeof(_pgen_tmp_128_158));
  memset(&_pgen_tmp_129_159, 0, sizeof(_pgen_tmp_129_159));
  memset(&_pgen_tmp_130_160, 0, sizeof(_pgen_tmp_130_160));
  memset(&_pgen_tmp_131_161, 0, sizeof(_pgen_tmp_131_161));
  memset(&_pgen_tmp_132_162, 0, sizeof(_pgen_tmp_132_162));
  memset(&_pgen_tmp_133_163, 0, sizeof(_pgen_tmp_133_163));
  memset(&_pgen_tmp_134_164, 0, sizeof(_pgen_tmp_134_164));
  memset(&_pgen_tmp_135_165, 0, sizeof(_pgen_tmp_135_165));
  memset(&_pgen_tmp_136_166, 0, sizeof(_pgen_tmp_136_166));
  memset(&_pgen_tmp_137_167, 0, sizeof(_pgen_tmp_137_167));
  memset(&_pgen_tmp_138_168, 0, sizeof(_pgen_tmp_138_168));
  memset(&_pgen_tmp_139_169, 0, sizeof(_pgen_tmp_139_169));
  memset(&_pgen_tmp_140_170, 0, sizeof(_pgen_tmp_140_170));
  memset(&_pgen_tmp_141_171, 0, sizeof(_pgen_tmp_141_171));
  memset(&_pgen_tmp_142_172, 0, sizeof(_pgen_tmp_142_172));
  memset(&_pgen_tmp_143_173, 0, sizeof(_pgen_tmp_143_173));
  memset(&_pgen_tmp_144_174, 0, sizeof(_pgen_tmp_144_174));
  memset(&_pgen_tmp_145_175, 0, sizeof(_pgen_tmp_145_175));
  memset(&_pgen_tmp_146_176, 0, sizeof(_pgen_tmp_146_176));
  memset(&_pgen_tmp_147_177, 0, sizeof(_pgen_tmp_147_177));
  memset(&_pgen_tmp_148_178, 0, sizeof(_pgen_tmp_148_178));
  memset(&_pgen_tmp_149_179, 0, sizeof(_pgen_tmp_149_179));
  memset(&_pgen_tmp_150_180, 0, sizeof(_pgen_tmp_150_180));
  memset(&_pgen_tmp_151_181, 0, sizeof(_pgen_tmp_151_181));
  memset(&_pgen_tmp_152_182, 0, sizeof(_pgen_tmp_152_182));
  memset(&_pgen_tmp_153_183, 0, sizeof(_pgen_tmp_153_183));
  memset(&_pgen_tmp_154_184, 0, sizeof(_pgen_tmp_154_184));
  memset(&_pgen_tmp_155_185, 0, sizeof(_pgen_tmp_155_185));
  memset(&_pgen_tmp_156_186, 0, sizeof(_pgen_tmp_156_186));
  memset(&_pgen_tmp_157_187, 0, sizeof(_pgen_tmp_157_187));
  memset(&_pgen_tmp_158_188, 0, sizeof(_pgen_tmp_158_188));
  memset(&_pgen_tmp_159_189, 0, sizeof(_pgen_tmp_159_189));
  memset(&_pgen_tmp_160_190, 0, sizeof(_pgen_tmp_160_190));
  memset(&_pgen_tmp_161_191, 0, sizeof(_pgen_tmp_161_191));
  memset(&_pgen_tmp_162_192, 0, sizeof(_pgen_tmp_162_192));
  memset(&_pgen_tmp_163_193, 0, sizeof(_pgen_tmp_163_193));
  memset(&_pgen_tmp_164_194, 0, sizeof(_pgen_tmp_164_194));
  memset(&_pgen_tmp_165_195, 0, sizeof(_pgen_tmp_165_195));
  memset(&_pgen_tmp_166_196, 0, sizeof(_pgen_tmp_166_196));
  memset(&_pgen_tmp_167_197, 0, sizeof(_pgen_tmp_167_197));
  memset(&_pgen_tmp_168_198, 0, sizeof(_pgen_tmp_168_198));
  memset(&_pgen_tmp_169_199, 0, sizeof(_pgen_tmp_169_199));
  memset(&_pgen_tmp_170_200, 0, sizeof(_pgen_tmp_170_200));
  memset(&_pgen_tmp_171_201, 0, sizeof(_pgen_tmp_171_201));
  memset(&_pgen_tmp_172_202, 0, sizeof(_pgen_tmp_172_202));
  memset(&_pgen_tmp_173_203, 0, sizeof(_pgen_tmp_173_203));
  memset(&_pgen_tmp_174_204, 0, sizeof(_pgen_tmp_174_204));
  memset(&_pgen_tmp_175_205, 0, sizeof(_pgen_tmp_175_205));
  memset(&_pgen_tmp_176_206, 0, sizeof(_pgen_tmp_176_206));
  memset(&_pgen_tmp_177_207, 0, sizeof(_pgen_tmp_177_207));
  memset(&_pgen_tmp_178_208, 0, sizeof(_pgen_tmp_178_208));
  memset(&_pgen_tmp_179_209, 0, sizeof(_pgen_tmp_179_209));
  memset(&_pgen_tmp_180_210, 0, sizeof(_pgen_tmp_180_210));
  memset(&_pgen_tmp_181_211, 0, sizeof(_pgen_tmp_181_211));
  memset(&_pgen_tmp_182_212, 0, sizeof(_pgen_tmp_182_212));
  memset(&_pgen_tmp_183_213, 0, sizeof(_pgen_tmp_183_213));
  memset(&_pgen_tmp_184_214, 0, sizeof(_pgen_tmp_184_214));
  memset(&_pgen_tmp_185_215, 0, sizeof(_pgen_tmp_185_215));
  memset(&_pgen_tmp_186_216, 0, sizeof(_pgen_tmp_186_216));
  memset(&_pgen_tmp_187_217, 0, sizeof(_pgen_tmp_187_217));
  memset(&_pgen_tmp_188_218, 0, sizeof(_pgen_tmp_188_218));
  memset(&_pgen_tmp_189_219, 0, sizeof(_pgen_tmp_189_219));
  memset(&_pgen_tmp_190_220, 0, sizeof(_pgen_tmp_190_220));
  memset(&_pgen_tmp_191_221, 0, sizeof(_pgen_tmp_191_221));
  memset(&_pgen_tmp_192_222, 0, sizeof(_pgen_tmp_192_222));
  memset(&_pgen_tmp_193_223, 0, sizeof(_pgen_tmp_193_223));
  memset(&_pgen_tmp_194_224, 0, sizeof(_pgen_tmp_194_224));
  memset(&_pgen_tmp_195_225, 0, sizeof(_pgen_tmp_195_225));
  memset(&_pgen_tmp_196_226, 0, sizeof(_pgen_tmp_196_226));
  memset(&_pgen_tmp_197_227, 0, sizeof(_pgen_tmp_197_227));
  memset(&_pgen_tmp_198_228, 0, sizeof(_pgen_tmp_198_228));
  memset(&_pgen_tmp_199_229, 0, sizeof(_pgen_tmp_199_229));
  memset(&_pgen_tmp_200_230, 0, sizeof(_pgen_tmp_200_230));
  memset(&_pgen_tmp_201_231, 0, sizeof(_pgen_tmp_201_231));
  memset(&_pgen_tmp_202_232, 0, sizeof(_pgen_tmp_202_232));
  memset(&_pgen_tmp_203_233, 0, sizeof(_pgen_tmp_203_233));
  memset(&_pgen_tmp_204_234, 0, sizeof(_pgen_tmp_204_234));
  memset(&_preg_268435456, 0, sizeof(_preg_268435456));
  memset(&_preg_268435457, 0, sizeof(_preg_268435457));
  memset(&_preg_268435458, 0, sizeof(_preg_268435458));
  memset(&_preg_268435459, 0, sizeof(_preg_268435459));
  memset(&_preg_268435460, 0, sizeof(_preg_268435460));
  memset(&_preg_268435461, 0, sizeof(_preg_268435461));
  memset(&_preg_268435462, 0, sizeof(_preg_268435462));
  memset(&_preg_268435463, 0, sizeof(_preg_268435463));
  memset(&_preg_268435464, 0, sizeof(_preg_268435464));
  memset(&_preg_268435465, 0, sizeof(_preg_268435465));
  memset(&_preg_268435466, 0, sizeof(_preg_268435466));
  memset(&_preg_268435467, 0, sizeof(_preg_268435467));
  memset(&_preg_268435468, 0, sizeof(_preg_268435468));
  memset(&_preg_268435469, 0, sizeof(_preg_268435469));
  memset(&_preg_268435470, 0, sizeof(_preg_268435470));
  memset(&_preg_268435471, 0, sizeof(_preg_268435471));
  memset(&_preg_268435472, 0, sizeof(_preg_268435472));
  memset(&_preg_268435473, 0, sizeof(_preg_268435473));
  memset(&_preg_268435474, 0, sizeof(_preg_268435474));
  memset(&_preg_268435475, 0, sizeof(_preg_268435475));
  memset(&_preg_268435476, 0, sizeof(_preg_268435476));
  memset(&_preg_268435477, 0, sizeof(_preg_268435477));
  memset(&_preg_268435478, 0, sizeof(_preg_268435478));
  memset(&_preg_268435479, 0, sizeof(_preg_268435479));
  memset(&_preg_268435480, 0, sizeof(_preg_268435480));
  memset(&_preg_268435481, 0, sizeof(_preg_268435481));
  memset(&_preg_268435482, 0, sizeof(_preg_268435482));
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_0_27, &input_ct1_1, &input_ct1_1);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_0_27._c0_poly);
  Init_poly_by_size(&_pgen_tmp_1_31, 1, 0);
  Init_poly_by_size(&_pgen_tmp_2_32, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_1_31, 0, degree), Coeffs(&input_ct1_1._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct1_1._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_2_32, 0, degree), Coeffs(&input_ct1_1._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct1_1._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_0_27._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct1_1._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct1_1._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_0_27._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_1_31, 0, degree), Coeffs(&_pgen_tmp_2_32, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_0_27._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct1_1._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct1_1._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_1_31);
  Free_poly_data(&_pgen_tmp_2_32);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_3_33, &_pgen_tmp_0_27);
  Rescale(&_pgen_tmp_3_33._c0_poly, &_pgen_tmp_0_27._c0_poly);
  Rescale(&_pgen_tmp_3_33._c1_poly, &_pgen_tmp_0_27._c1_poly);
  Rescale(&_pgen_tmp_3_33._c2_poly, &_pgen_tmp_0_27._c2_poly);
  Free_poly_data(&_pgen_tmp_0_27._c2_poly);
  Free_poly_data(&_pgen_tmp_0_27._c1_poly);
  Free_poly_data(&_pgen_tmp_0_27._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435456 = Relinearize(_pgen_tmp_3_33);
  Free_poly_data(&_pgen_tmp_3_33._c2_poly);
  Free_poly_data(&_pgen_tmp_3_33._c1_poly);
  Free_poly_data(&_pgen_tmp_3_33._c0_poly);
  Copy_ciph(&_relu_tmp8_3, &_preg_268435456);
  Free_poly_data(&_preg_268435456._c1_poly);
  Free_poly_data(&_preg_268435456._c0_poly);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_4_34, &_relu_tmp8_3, &_relu_tmp8_3);
  CMPLR_TM_END(12, 0);
  Encode_float(&_pgen_tmp_5_35, &_cst_207, 1, Sc_degree(&_pgen_tmp_4_34), Level(&_pgen_tmp_4_34));
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&_relu_tmp14_4, &_pgen_tmp_4_34, &_pgen_tmp_5_35);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_relu_tmp14_4._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_4_34._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp8_3._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp8_3._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_4_34._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp8_3._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp8_3._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_relu_tmp14_4._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_4_34._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_5_35._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Set_coeffs(&_relu_tmp14_4._c1_poly, _pgen_rns_idx_30, degree, Coeffs(&_pgen_tmp_4_34._c1_poly, _pgen_rns_idx_30, degree));
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_relu_tmp8_3._c1_poly);
  Free_poly_data(&_relu_tmp8_3._c0_poly);
  Free_poly_data(&_pgen_tmp_5_35._poly);
  Free_poly_data(&_pgen_tmp_4_34._c1_poly);
  Free_poly_data(&_pgen_tmp_4_34._c0_poly);
  CMPLR_TM_END(13, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_6_36, &_relu_tmp14_4, &_relu_tmp14_4);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_6_36._c0_poly);
  Init_poly_by_size(&_pgen_tmp_7_37, 1, 0);
  Init_poly_by_size(&_pgen_tmp_8_38, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_7_37, 0, degree), Coeffs(&_relu_tmp14_4._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp14_4._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_8_38, 0, degree), Coeffs(&_relu_tmp14_4._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp14_4._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_6_36._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp14_4._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp14_4._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_6_36._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_7_37, 0, degree), Coeffs(&_pgen_tmp_8_38, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_6_36._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp14_4._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp14_4._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_7_37);
  Free_poly_data(&_pgen_tmp_8_38);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_9_39, &_pgen_tmp_6_36);
  Rescale(&_pgen_tmp_9_39._c0_poly, &_pgen_tmp_6_36._c0_poly);
  Rescale(&_pgen_tmp_9_39._c1_poly, &_pgen_tmp_6_36._c1_poly);
  Rescale(&_pgen_tmp_9_39._c2_poly, &_pgen_tmp_6_36._c2_poly);
  Free_poly_data(&_pgen_tmp_6_36._c2_poly);
  Free_poly_data(&_pgen_tmp_6_36._c1_poly);
  Free_poly_data(&_pgen_tmp_6_36._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435457 = Relinearize(_pgen_tmp_9_39);
  Free_poly_data(&_pgen_tmp_9_39._c2_poly);
  Free_poly_data(&_pgen_tmp_9_39._c1_poly);
  Free_poly_data(&_pgen_tmp_9_39._c0_poly);
  Copy_ciph(&_relu_tmp18_5, &_preg_268435457);
  Free_poly_data(&_preg_268435457._c1_poly);
  Free_poly_data(&_preg_268435457._c0_poly);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_10_40, &_relu_tmp18_5, &_relu_tmp18_5);
  CMPLR_TM_END(12, 0);
  Encode_float(&_pgen_tmp_11_41, &_cst_208, 1, Sc_degree(&_pgen_tmp_10_40), Level(&_pgen_tmp_10_40));
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&_relu_tmp24_6, &_pgen_tmp_10_40, &_pgen_tmp_11_41);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_relu_tmp24_6._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_10_40._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp18_5._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp18_5._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_10_40._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp18_5._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp18_5._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_relu_tmp24_6._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_10_40._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_11_41._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Set_coeffs(&_relu_tmp24_6._c1_poly, _pgen_rns_idx_30, degree, Coeffs(&_pgen_tmp_10_40._c1_poly, _pgen_rns_idx_30, degree));
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_relu_tmp18_5._c1_poly);
  Free_poly_data(&_relu_tmp18_5._c0_poly);
  Free_poly_data(&_pgen_tmp_11_41._poly);
  Free_poly_data(&_pgen_tmp_10_40._c1_poly);
  Free_poly_data(&_pgen_tmp_10_40._c0_poly);
  CMPLR_TM_END(13, 0);
  Encode_float_mask(&_pgen_tmp_15_45, -3.809199432496630510769, mask_len_2, 1, Level(&input_ct1_1));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_14_44, &input_ct1_1, &_pgen_tmp_15_45);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_14_44._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_14_44._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct1_1._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_15_45._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_14_44._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct1_1._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_15_45._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_15_45._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_16_46, &_pgen_tmp_14_44);
  Rescale(&_pgen_tmp_16_46._c0_poly, &_pgen_tmp_14_44._c0_poly);
  Rescale(&_pgen_tmp_16_46._c1_poly, &_pgen_tmp_14_44._c1_poly);
  Free_poly_data(&_pgen_tmp_14_44._c1_poly);
  Free_poly_data(&_pgen_tmp_14_44._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_13_43, &_relu_tmp14_4, &_pgen_tmp_16_46);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_13_43._c0_poly);
  Init_poly_by_size(&_pgen_tmp_17_47, 1, 0);
  Init_poly_by_size(&_pgen_tmp_18_48, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_17_47, 0, degree), Coeffs(&_relu_tmp14_4._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_16_46._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_18_48, 0, degree), Coeffs(&_relu_tmp14_4._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_16_46._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_13_43._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp14_4._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_16_46._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_13_43._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_17_47, 0, degree), Coeffs(&_pgen_tmp_18_48, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_13_43._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp14_4._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_16_46._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_16_46._c1_poly);
  Free_poly_data(&_pgen_tmp_16_46._c0_poly);
  Free_poly_data(&_pgen_tmp_17_47);
  Free_poly_data(&_pgen_tmp_18_48);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_19_49, &_pgen_tmp_13_43);
  Rescale(&_pgen_tmp_19_49._c0_poly, &_pgen_tmp_13_43._c0_poly);
  Rescale(&_pgen_tmp_19_49._c1_poly, &_pgen_tmp_13_43._c1_poly);
  Rescale(&_pgen_tmp_19_49._c2_poly, &_pgen_tmp_13_43._c2_poly);
  Free_poly_data(&_pgen_tmp_13_43._c2_poly);
  Free_poly_data(&_pgen_tmp_13_43._c1_poly);
  Free_poly_data(&_pgen_tmp_13_43._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435458 = Relinearize(_pgen_tmp_19_49);
  Free_poly_data(&_pgen_tmp_19_49._c2_poly);
  Free_poly_data(&_pgen_tmp_19_49._c1_poly);
  Free_poly_data(&_pgen_tmp_19_49._c0_poly);
  Encode_float_mask(&_pgen_tmp_21_51, 2.460940868770910228136, mask_len_2, 1, Level(&input_ct1_1));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_20_50, &input_ct1_1, &_pgen_tmp_21_51);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_20_50._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_20_50._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct1_1._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_21_51._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_20_50._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct1_1._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_21_51._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_21_51._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_22_52, &_pgen_tmp_20_50);
  Rescale(&_pgen_tmp_22_52._c0_poly, &_pgen_tmp_20_50._c0_poly);
  Rescale(&_pgen_tmp_22_52._c1_poly, &_pgen_tmp_20_50._c1_poly);
  Free_poly_data(&_pgen_tmp_20_50._c1_poly);
  Free_poly_data(&_pgen_tmp_20_50._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_23_53, &_preg_268435458, &_pgen_tmp_22_52);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_12_42, &_relu_tmp24_6, &_pgen_tmp_23_53);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_12_42._c0_poly);
  Init_poly_by_size(&_pgen_tmp_24_54, 1, 0);
  Init_poly_by_size(&_pgen_tmp_25_55, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_23_53._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435458._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_22_52._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_23_53._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435458._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_22_52._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_24_54, 0, degree), Coeffs(&_relu_tmp24_6._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_23_53._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_25_55, 0, degree), Coeffs(&_relu_tmp24_6._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_23_53._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_12_42._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp24_6._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_23_53._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_12_42._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_24_54, 0, degree), Coeffs(&_pgen_tmp_25_55, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_12_42._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp24_6._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_23_53._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_22_52._c1_poly);
  Free_poly_data(&_pgen_tmp_22_52._c0_poly);
  Free_poly_data(&_preg_268435458._c1_poly);
  Free_poly_data(&_preg_268435458._c0_poly);
  Free_poly_data(&_pgen_tmp_23_53._c1_poly);
  Free_poly_data(&_pgen_tmp_23_53._c0_poly);
  Free_poly_data(&_relu_tmp24_6._c1_poly);
  Free_poly_data(&_relu_tmp24_6._c0_poly);
  Free_poly_data(&_pgen_tmp_24_54);
  Free_poly_data(&_pgen_tmp_25_55);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_26_56, &_pgen_tmp_12_42);
  Rescale(&_pgen_tmp_26_56._c0_poly, &_pgen_tmp_12_42._c0_poly);
  Rescale(&_pgen_tmp_26_56._c1_poly, &_pgen_tmp_12_42._c1_poly);
  Rescale(&_pgen_tmp_26_56._c2_poly, &_pgen_tmp_12_42._c2_poly);
  Free_poly_data(&_pgen_tmp_12_42._c2_poly);
  Free_poly_data(&_pgen_tmp_12_42._c1_poly);
  Free_poly_data(&_pgen_tmp_12_42._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435459 = Relinearize(_pgen_tmp_26_56);
  Free_poly_data(&_pgen_tmp_26_56._c2_poly);
  Free_poly_data(&_pgen_tmp_26_56._c1_poly);
  Free_poly_data(&_pgen_tmp_26_56._c0_poly);
  Encode_float_mask(&_pgen_tmp_29_59, -1.430304794543664215212, mask_len_2, 1, Level(&input_ct1_1));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_28_58, &input_ct1_1, &_pgen_tmp_29_59);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_28_58._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_28_58._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct1_1._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_29_59._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_28_58._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct1_1._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_29_59._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_29_59._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_30_60, &_pgen_tmp_28_58);
  Rescale(&_pgen_tmp_30_60._c0_poly, &_pgen_tmp_28_58._c0_poly);
  Rescale(&_pgen_tmp_30_60._c1_poly, &_pgen_tmp_28_58._c1_poly);
  Free_poly_data(&_pgen_tmp_28_58._c1_poly);
  Free_poly_data(&_pgen_tmp_28_58._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_27_57, &_relu_tmp14_4, &_pgen_tmp_30_60);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_27_57._c0_poly);
  Init_poly_by_size(&_pgen_tmp_31_61, 1, 0);
  Init_poly_by_size(&_pgen_tmp_32_62, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_31_61, 0, degree), Coeffs(&_relu_tmp14_4._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_30_60._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_32_62, 0, degree), Coeffs(&_relu_tmp14_4._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_30_60._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_27_57._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp14_4._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_30_60._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_27_57._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_31_61, 0, degree), Coeffs(&_pgen_tmp_32_62, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_27_57._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp14_4._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_30_60._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_30_60._c1_poly);
  Free_poly_data(&_pgen_tmp_30_60._c0_poly);
  Free_poly_data(&_relu_tmp14_4._c1_poly);
  Free_poly_data(&_relu_tmp14_4._c0_poly);
  Free_poly_data(&_pgen_tmp_31_61);
  Free_poly_data(&_pgen_tmp_32_62);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_33_63, &_pgen_tmp_27_57);
  Rescale(&_pgen_tmp_33_63._c0_poly, &_pgen_tmp_27_57._c0_poly);
  Rescale(&_pgen_tmp_33_63._c1_poly, &_pgen_tmp_27_57._c1_poly);
  Rescale(&_pgen_tmp_33_63._c2_poly, &_pgen_tmp_27_57._c2_poly);
  Free_poly_data(&_pgen_tmp_27_57._c2_poly);
  Free_poly_data(&_pgen_tmp_27_57._c1_poly);
  Free_poly_data(&_pgen_tmp_27_57._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435460 = Relinearize(_pgen_tmp_33_63);
  Free_poly_data(&_pgen_tmp_33_63._c2_poly);
  Free_poly_data(&_pgen_tmp_33_63._c1_poly);
  Free_poly_data(&_pgen_tmp_33_63._c0_poly);
  Encode_float_mask(&_pgen_tmp_35_65, 2.944661935353764636858, mask_len_2, 1, Level(&input_ct1_1));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_34_64, &input_ct1_1, &_pgen_tmp_35_65);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_34_64._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_34_64._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct1_1._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_35_65._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_34_64._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct1_1._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_35_65._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_35_65._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_36_66, &_pgen_tmp_34_64);
  Rescale(&_pgen_tmp_36_66._c0_poly, &_pgen_tmp_34_64._c0_poly);
  Rescale(&_pgen_tmp_36_66._c1_poly, &_pgen_tmp_34_64._c1_poly);
  Free_poly_data(&_pgen_tmp_34_64._c1_poly);
  Free_poly_data(&_pgen_tmp_34_64._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_37_67, &_preg_268435460, &_pgen_tmp_36_66);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_relu_tmp58_7, &_preg_268435459, &_pgen_tmp_37_67);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_relu_tmp58_7._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_37_67._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435460._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_36_66._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_37_67._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435460._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_36_66._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_relu_tmp58_7._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435459._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_37_67._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_relu_tmp58_7._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435459._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_37_67._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_36_66._c1_poly);
  Free_poly_data(&_pgen_tmp_36_66._c0_poly);
  Free_poly_data(&_preg_268435460._c1_poly);
  Free_poly_data(&_preg_268435460._c0_poly);
  Free_poly_data(&_pgen_tmp_37_67._c1_poly);
  Free_poly_data(&_pgen_tmp_37_67._c0_poly);
  Free_poly_data(&_preg_268435459._c1_poly);
  Free_poly_data(&_preg_268435459._c0_poly);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_38_68, &_relu_tmp58_7, &_relu_tmp58_7);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_38_68._c0_poly);
  Init_poly_by_size(&_pgen_tmp_39_69, 1, 0);
  Init_poly_by_size(&_pgen_tmp_40_70, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_39_69, 0, degree), Coeffs(&_relu_tmp58_7._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp58_7._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_40_70, 0, degree), Coeffs(&_relu_tmp58_7._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp58_7._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_38_68._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp58_7._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp58_7._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_38_68._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_39_69, 0, degree), Coeffs(&_pgen_tmp_40_70, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_38_68._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp58_7._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp58_7._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_39_69);
  Free_poly_data(&_pgen_tmp_40_70);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_41_71, &_pgen_tmp_38_68);
  Rescale(&_pgen_tmp_41_71._c0_poly, &_pgen_tmp_38_68._c0_poly);
  Rescale(&_pgen_tmp_41_71._c1_poly, &_pgen_tmp_38_68._c1_poly);
  Rescale(&_pgen_tmp_41_71._c2_poly, &_pgen_tmp_38_68._c2_poly);
  Free_poly_data(&_pgen_tmp_38_68._c2_poly);
  Free_poly_data(&_pgen_tmp_38_68._c1_poly);
  Free_poly_data(&_pgen_tmp_38_68._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435461 = Relinearize(_pgen_tmp_41_71);
  Free_poly_data(&_pgen_tmp_41_71._c2_poly);
  Free_poly_data(&_pgen_tmp_41_71._c1_poly);
  Free_poly_data(&_pgen_tmp_41_71._c0_poly);
  Copy_ciph(&_relu_tmp62_8, &_preg_268435461);
  Free_poly_data(&_preg_268435461._c1_poly);
  Free_poly_data(&_preg_268435461._c0_poly);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_42_72, &_relu_tmp62_8, &_relu_tmp62_8);
  CMPLR_TM_END(12, 0);
  Encode_float(&_pgen_tmp_43_73, &_cst_217, 1, Sc_degree(&_pgen_tmp_42_72), Level(&_pgen_tmp_42_72));
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&_relu_tmp68_9, &_pgen_tmp_42_72, &_pgen_tmp_43_73);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_relu_tmp68_9._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_42_72._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp62_8._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp62_8._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_42_72._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp62_8._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp62_8._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_relu_tmp68_9._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_42_72._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_43_73._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Set_coeffs(&_relu_tmp68_9._c1_poly, _pgen_rns_idx_30, degree, Coeffs(&_pgen_tmp_42_72._c1_poly, _pgen_rns_idx_30, degree));
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_relu_tmp62_8._c1_poly);
  Free_poly_data(&_relu_tmp62_8._c0_poly);
  Free_poly_data(&_pgen_tmp_43_73._poly);
  Free_poly_data(&_pgen_tmp_42_72._c1_poly);
  Free_poly_data(&_pgen_tmp_42_72._c0_poly);
  CMPLR_TM_END(13, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_44_74, &_relu_tmp58_7, &_relu_tmp68_9);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_44_74._c0_poly);
  Init_poly_by_size(&_pgen_tmp_45_75, 1, 0);
  Init_poly_by_size(&_pgen_tmp_46_76, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_45_75, 0, degree), Coeffs(&_relu_tmp58_7._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp68_9._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_46_76, 0, degree), Coeffs(&_relu_tmp58_7._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp68_9._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_44_74._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp58_7._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp68_9._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_44_74._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_45_75, 0, degree), Coeffs(&_pgen_tmp_46_76, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_44_74._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp58_7._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp68_9._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_45_75);
  Free_poly_data(&_pgen_tmp_46_76);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_47_77, &_pgen_tmp_44_74);
  Rescale(&_pgen_tmp_47_77._c0_poly, &_pgen_tmp_44_74._c0_poly);
  Rescale(&_pgen_tmp_47_77._c1_poly, &_pgen_tmp_44_74._c1_poly);
  Rescale(&_pgen_tmp_47_77._c2_poly, &_pgen_tmp_44_74._c2_poly);
  Free_poly_data(&_pgen_tmp_44_74._c2_poly);
  Free_poly_data(&_pgen_tmp_44_74._c1_poly);
  Free_poly_data(&_pgen_tmp_44_74._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435462 = Relinearize(_pgen_tmp_47_77);
  Free_poly_data(&_pgen_tmp_47_77._c2_poly);
  Free_poly_data(&_pgen_tmp_47_77._c1_poly);
  Free_poly_data(&_pgen_tmp_47_77._c0_poly);
  Copy_ciph(&_relu_tmp72_10, &_preg_268435462);
  Free_poly_data(&_preg_268435462._c1_poly);
  Free_poly_data(&_preg_268435462._c0_poly);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_48_78, &_relu_tmp72_10, &_relu_tmp72_10);
  CMPLR_TM_END(12, 0);
  Encode_float(&_pgen_tmp_50_80, &_cst_218, 1, 1, Level(&_relu_tmp58_7));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_49_79, &_relu_tmp58_7, &_pgen_tmp_50_80);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_49_79._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_49_79._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp58_7._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_50_80._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_49_79._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp58_7._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_50_80._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_50_80._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_51_81, &_pgen_tmp_49_79);
  Rescale(&_pgen_tmp_51_81._c0_poly, &_pgen_tmp_49_79._c0_poly);
  Rescale(&_pgen_tmp_51_81._c1_poly, &_pgen_tmp_49_79._c1_poly);
  Free_poly_data(&_pgen_tmp_49_79._c1_poly);
  Free_poly_data(&_pgen_tmp_49_79._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_relu_tmp80_11, &_pgen_tmp_48_78, &_pgen_tmp_51_81);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_relu_tmp80_11._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_48_78._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp72_10._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp72_10._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_48_78._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp72_10._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp72_10._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_relu_tmp80_11._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_48_78._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_51_81._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_relu_tmp80_11._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_48_78._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_51_81._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_relu_tmp72_10._c1_poly);
  Free_poly_data(&_relu_tmp72_10._c0_poly);
  Free_poly_data(&_pgen_tmp_51_81._c1_poly);
  Free_poly_data(&_pgen_tmp_51_81._c0_poly);
  Free_poly_data(&_pgen_tmp_48_78._c1_poly);
  Free_poly_data(&_pgen_tmp_48_78._c0_poly);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_52_82, &_relu_tmp68_9, &_relu_tmp68_9);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_52_82._c0_poly);
  Init_poly_by_size(&_pgen_tmp_53_83, 1, 0);
  Init_poly_by_size(&_pgen_tmp_54_84, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_53_83, 0, degree), Coeffs(&_relu_tmp68_9._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp68_9._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_54_84, 0, degree), Coeffs(&_relu_tmp68_9._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp68_9._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_52_82._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp68_9._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp68_9._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_52_82._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_53_83, 0, degree), Coeffs(&_pgen_tmp_54_84, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_52_82._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp68_9._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp68_9._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_53_83);
  Free_poly_data(&_pgen_tmp_54_84);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_55_85, &_pgen_tmp_52_82);
  Rescale(&_pgen_tmp_55_85._c0_poly, &_pgen_tmp_52_82._c0_poly);
  Rescale(&_pgen_tmp_55_85._c1_poly, &_pgen_tmp_52_82._c1_poly);
  Rescale(&_pgen_tmp_55_85._c2_poly, &_pgen_tmp_52_82._c2_poly);
  Free_poly_data(&_pgen_tmp_52_82._c2_poly);
  Free_poly_data(&_pgen_tmp_52_82._c1_poly);
  Free_poly_data(&_pgen_tmp_52_82._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435463 = Relinearize(_pgen_tmp_55_85);
  Free_poly_data(&_pgen_tmp_55_85._c2_poly);
  Free_poly_data(&_pgen_tmp_55_85._c1_poly);
  Free_poly_data(&_pgen_tmp_55_85._c0_poly);
  Copy_ciph(&_relu_tmp84_12, &_preg_268435463);
  Free_poly_data(&_preg_268435463._c1_poly);
  Free_poly_data(&_preg_268435463._c0_poly);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_56_86, &_relu_tmp84_12, &_relu_tmp84_12);
  CMPLR_TM_END(12, 0);
  Encode_float(&_pgen_tmp_57_87, &_cst_219, 1, Sc_degree(&_pgen_tmp_56_86), Level(&_pgen_tmp_56_86));
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&_relu_tmp90_13, &_pgen_tmp_56_86, &_pgen_tmp_57_87);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_relu_tmp90_13._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_56_86._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp84_12._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp84_12._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_56_86._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp84_12._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp84_12._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_relu_tmp90_13._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_56_86._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_57_87._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Set_coeffs(&_relu_tmp90_13._c1_poly, _pgen_rns_idx_30, degree, Coeffs(&_pgen_tmp_56_86._c1_poly, _pgen_rns_idx_30, degree));
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_relu_tmp84_12._c1_poly);
  Free_poly_data(&_relu_tmp84_12._c0_poly);
  Free_poly_data(&_pgen_tmp_57_87._poly);
  Free_poly_data(&_pgen_tmp_56_86._c1_poly);
  Free_poly_data(&_pgen_tmp_56_86._c0_poly);
  CMPLR_TM_END(13, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_58_88, &_relu_tmp90_13, &_relu_tmp90_13);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_58_88._c0_poly);
  Init_poly_by_size(&_pgen_tmp_59_89, 1, 0);
  Init_poly_by_size(&_pgen_tmp_60_90, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_59_89, 0, degree), Coeffs(&_relu_tmp90_13._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp90_13._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_60_90, 0, degree), Coeffs(&_relu_tmp90_13._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp90_13._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_58_88._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp90_13._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp90_13._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_58_88._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_59_89, 0, degree), Coeffs(&_pgen_tmp_60_90, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_58_88._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp90_13._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp90_13._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_59_89);
  Free_poly_data(&_pgen_tmp_60_90);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_61_91, &_pgen_tmp_58_88);
  Rescale(&_pgen_tmp_61_91._c0_poly, &_pgen_tmp_58_88._c0_poly);
  Rescale(&_pgen_tmp_61_91._c1_poly, &_pgen_tmp_58_88._c1_poly);
  Rescale(&_pgen_tmp_61_91._c2_poly, &_pgen_tmp_58_88._c2_poly);
  Free_poly_data(&_pgen_tmp_58_88._c2_poly);
  Free_poly_data(&_pgen_tmp_58_88._c1_poly);
  Free_poly_data(&_pgen_tmp_58_88._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435464 = Relinearize(_pgen_tmp_61_91);
  Free_poly_data(&_pgen_tmp_61_91._c2_poly);
  Free_poly_data(&_pgen_tmp_61_91._c1_poly);
  Free_poly_data(&_pgen_tmp_61_91._c0_poly);
  Copy_ciph(&_relu_tmp94_14, &_preg_268435464);
  Free_poly_data(&_preg_268435464._c1_poly);
  Free_poly_data(&_preg_268435464._c0_poly);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_62_92, &_relu_tmp94_14, &_relu_tmp94_14);
  CMPLR_TM_END(12, 0);
  Encode_float(&_pgen_tmp_63_93, &_cst_220, 1, Sc_degree(&_pgen_tmp_62_92), Level(&_pgen_tmp_62_92));
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&_relu_tmp100_15, &_pgen_tmp_62_92, &_pgen_tmp_63_93);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_relu_tmp100_15._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_62_92._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp94_14._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp94_14._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_62_92._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp94_14._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp94_14._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_relu_tmp100_15._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_62_92._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_63_93._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Set_coeffs(&_relu_tmp100_15._c1_poly, _pgen_rns_idx_30, degree, Coeffs(&_pgen_tmp_62_92._c1_poly, _pgen_rns_idx_30, degree));
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_relu_tmp94_14._c1_poly);
  Free_poly_data(&_relu_tmp94_14._c0_poly);
  Free_poly_data(&_pgen_tmp_63_93._poly);
  Free_poly_data(&_pgen_tmp_62_92._c1_poly);
  Free_poly_data(&_pgen_tmp_62_92._c0_poly);
  CMPLR_TM_END(13, 0);
  Encode_float_mask(&_pgen_tmp_68_98, -0.0001600280537250875771867, mask_len_2, 1, Level(&_relu_tmp58_7));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_67_97, &_relu_tmp58_7, &_pgen_tmp_68_98);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_67_97._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_67_97._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp58_7._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_68_98._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_67_97._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp58_7._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_68_98._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_68_98._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_69_99, &_pgen_tmp_67_97);
  Rescale(&_pgen_tmp_69_99._c0_poly, &_pgen_tmp_67_97._c0_poly);
  Rescale(&_pgen_tmp_69_99._c1_poly, &_pgen_tmp_67_97._c1_poly);
  Free_poly_data(&_pgen_tmp_67_97._c1_poly);
  Free_poly_data(&_pgen_tmp_67_97._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_66_96, &_relu_tmp68_9, &_pgen_tmp_69_99);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_66_96._c0_poly);
  Init_poly_by_size(&_pgen_tmp_70_100, 1, 0);
  Init_poly_by_size(&_pgen_tmp_71_101, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_70_100, 0, degree), Coeffs(&_relu_tmp68_9._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_69_99._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_71_101, 0, degree), Coeffs(&_relu_tmp68_9._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_69_99._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_66_96._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp68_9._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_69_99._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_66_96._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_70_100, 0, degree), Coeffs(&_pgen_tmp_71_101, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_66_96._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp68_9._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_69_99._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_69_99._c1_poly);
  Free_poly_data(&_pgen_tmp_69_99._c0_poly);
  Free_poly_data(&_relu_tmp68_9._c1_poly);
  Free_poly_data(&_relu_tmp68_9._c0_poly);
  Free_poly_data(&_pgen_tmp_70_100);
  Free_poly_data(&_pgen_tmp_71_101);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_72_102, &_pgen_tmp_66_96);
  Rescale(&_pgen_tmp_72_102._c0_poly, &_pgen_tmp_66_96._c0_poly);
  Rescale(&_pgen_tmp_72_102._c1_poly, &_pgen_tmp_66_96._c1_poly);
  Rescale(&_pgen_tmp_72_102._c2_poly, &_pgen_tmp_66_96._c2_poly);
  Free_poly_data(&_pgen_tmp_66_96._c2_poly);
  Free_poly_data(&_pgen_tmp_66_96._c1_poly);
  Free_poly_data(&_pgen_tmp_66_96._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435465 = Relinearize(_pgen_tmp_72_102);
  Free_poly_data(&_pgen_tmp_72_102._c2_poly);
  Free_poly_data(&_pgen_tmp_72_102._c1_poly);
  Free_poly_data(&_pgen_tmp_72_102._c0_poly);
  Encode_float_mask(&_pgen_tmp_74_104, 0.003032478474127557870749, mask_len_2, 1, Level(&_relu_tmp58_7));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_73_103, &_relu_tmp58_7, &_pgen_tmp_74_104);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_73_103._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_73_103._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp58_7._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_74_104._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_73_103._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp58_7._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_74_104._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_74_104._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_75_105, &_pgen_tmp_73_103);
  Rescale(&_pgen_tmp_75_105._c0_poly, &_pgen_tmp_73_103._c0_poly);
  Rescale(&_pgen_tmp_75_105._c1_poly, &_pgen_tmp_73_103._c1_poly);
  Free_poly_data(&_pgen_tmp_73_103._c1_poly);
  Free_poly_data(&_pgen_tmp_73_103._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_76_106, &_preg_268435465, &_pgen_tmp_75_105);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_65_95, &_relu_tmp90_13, &_pgen_tmp_76_106);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_65_95._c0_poly);
  Init_poly_by_size(&_pgen_tmp_77_107, 1, 0);
  Init_poly_by_size(&_pgen_tmp_78_108, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_76_106._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435465._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_75_105._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_76_106._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435465._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_75_105._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_77_107, 0, degree), Coeffs(&_relu_tmp90_13._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_76_106._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_78_108, 0, degree), Coeffs(&_relu_tmp90_13._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_76_106._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_65_95._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp90_13._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_76_106._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_65_95._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_77_107, 0, degree), Coeffs(&_pgen_tmp_78_108, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_65_95._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp90_13._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_76_106._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_75_105._c1_poly);
  Free_poly_data(&_pgen_tmp_75_105._c0_poly);
  Free_poly_data(&_preg_268435465._c1_poly);
  Free_poly_data(&_preg_268435465._c0_poly);
  Free_poly_data(&_pgen_tmp_76_106._c1_poly);
  Free_poly_data(&_pgen_tmp_76_106._c0_poly);
  Free_poly_data(&_pgen_tmp_77_107);
  Free_poly_data(&_pgen_tmp_78_108);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_79_109, &_pgen_tmp_65_95);
  Rescale(&_pgen_tmp_79_109._c0_poly, &_pgen_tmp_65_95._c0_poly);
  Rescale(&_pgen_tmp_79_109._c1_poly, &_pgen_tmp_65_95._c1_poly);
  Rescale(&_pgen_tmp_79_109._c2_poly, &_pgen_tmp_65_95._c2_poly);
  Free_poly_data(&_pgen_tmp_65_95._c2_poly);
  Free_poly_data(&_pgen_tmp_65_95._c1_poly);
  Free_poly_data(&_pgen_tmp_65_95._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435466 = Relinearize(_pgen_tmp_79_109);
  Free_poly_data(&_pgen_tmp_79_109._c2_poly);
  Free_poly_data(&_pgen_tmp_79_109._c1_poly);
  Free_poly_data(&_pgen_tmp_79_109._c0_poly);
  Encode_double(&_pgen_tmp_81_111, &_cst_227, 1, 1, Level(&_relu_tmp80_11));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_80_110, &_relu_tmp80_11, &_pgen_tmp_81_111);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_80_110._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_80_110._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp80_11._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_81_111._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_80_110._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp80_11._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_81_111._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_81_111._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_82_112, &_pgen_tmp_80_110);
  Rescale(&_pgen_tmp_82_112._c0_poly, &_pgen_tmp_80_110._c0_poly);
  Rescale(&_pgen_tmp_82_112._c1_poly, &_pgen_tmp_80_110._c1_poly);
  Free_poly_data(&_pgen_tmp_80_110._c1_poly);
  Free_poly_data(&_pgen_tmp_80_110._c0_poly);
  CMPLR_TM_END(19, 0);
  Encode_float_mask(&_pgen_tmp_84_114, 0.1365828361194337536855, mask_len_2, 1, Level(&_relu_tmp58_7));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_83_113, &_relu_tmp58_7, &_pgen_tmp_84_114);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_83_113._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_83_113._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp58_7._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_84_114._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_83_113._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp58_7._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_84_114._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_84_114._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_85_115, &_pgen_tmp_83_113);
  Rescale(&_pgen_tmp_85_115._c0_poly, &_pgen_tmp_83_113._c0_poly);
  Rescale(&_pgen_tmp_85_115._c1_poly, &_pgen_tmp_83_113._c1_poly);
  Free_poly_data(&_pgen_tmp_83_113._c1_poly);
  Free_poly_data(&_pgen_tmp_83_113._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_86_116, &_pgen_tmp_82_112, &_pgen_tmp_85_115);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_87_117, &_preg_268435466, &_pgen_tmp_86_116);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_64_94, &_relu_tmp100_15, &_pgen_tmp_87_117);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_64_94._c0_poly);
  Init_poly_by_size(&_pgen_tmp_88_118, 1, 0);
  Init_poly_by_size(&_pgen_tmp_89_119, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_86_116._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_82_112._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_85_115._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_86_116._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_82_112._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_85_115._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_87_117._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435466._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_86_116._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_87_117._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435466._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_86_116._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_88_118, 0, degree), Coeffs(&_relu_tmp100_15._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_87_117._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_89_119, 0, degree), Coeffs(&_relu_tmp100_15._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_87_117._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_64_94._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp100_15._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_87_117._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_64_94._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_88_118, 0, degree), Coeffs(&_pgen_tmp_89_119, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_64_94._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp100_15._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_87_117._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_85_115._c1_poly);
  Free_poly_data(&_pgen_tmp_85_115._c0_poly);
  Free_poly_data(&_pgen_tmp_82_112._c1_poly);
  Free_poly_data(&_pgen_tmp_82_112._c0_poly);
  Free_poly_data(&_pgen_tmp_86_116._c1_poly);
  Free_poly_data(&_pgen_tmp_86_116._c0_poly);
  Free_poly_data(&_preg_268435466._c1_poly);
  Free_poly_data(&_preg_268435466._c0_poly);
  Free_poly_data(&_pgen_tmp_87_117._c1_poly);
  Free_poly_data(&_pgen_tmp_87_117._c0_poly);
  Free_poly_data(&_relu_tmp100_15._c1_poly);
  Free_poly_data(&_relu_tmp100_15._c0_poly);
  Free_poly_data(&_pgen_tmp_88_118);
  Free_poly_data(&_pgen_tmp_89_119);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_90_120, &_pgen_tmp_64_94);
  Rescale(&_pgen_tmp_90_120._c0_poly, &_pgen_tmp_64_94._c0_poly);
  Rescale(&_pgen_tmp_90_120._c1_poly, &_pgen_tmp_64_94._c1_poly);
  Rescale(&_pgen_tmp_90_120._c2_poly, &_pgen_tmp_64_94._c2_poly);
  Free_poly_data(&_pgen_tmp_64_94._c2_poly);
  Free_poly_data(&_pgen_tmp_64_94._c1_poly);
  Free_poly_data(&_pgen_tmp_64_94._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435467 = Relinearize(_pgen_tmp_90_120);
  Free_poly_data(&_pgen_tmp_90_120._c2_poly);
  Free_poly_data(&_pgen_tmp_90_120._c1_poly);
  Free_poly_data(&_pgen_tmp_90_120._c0_poly);
  Encode_double(&_pgen_tmp_93_123, &_cst_230, 1, 1, Level(&_relu_tmp80_11));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_92_122, &_relu_tmp80_11, &_pgen_tmp_93_123);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_92_122._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_92_122._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp80_11._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_93_123._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_92_122._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp80_11._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_93_123._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_93_123._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_94_124, &_pgen_tmp_92_122);
  Rescale(&_pgen_tmp_94_124._c0_poly, &_pgen_tmp_92_122._c0_poly);
  Rescale(&_pgen_tmp_94_124._c1_poly, &_pgen_tmp_92_122._c1_poly);
  Free_poly_data(&_pgen_tmp_92_122._c1_poly);
  Free_poly_data(&_pgen_tmp_92_122._c0_poly);
  CMPLR_TM_END(19, 0);
  Encode_float_mask(&_pgen_tmp_96_126, 0.5685231134608953462717, mask_len_2, 1, Level(&_relu_tmp58_7));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_95_125, &_relu_tmp58_7, &_pgen_tmp_96_126);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_95_125._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_95_125._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp58_7._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_96_126._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_95_125._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp58_7._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_96_126._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_96_126._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_97_127, &_pgen_tmp_95_125);
  Rescale(&_pgen_tmp_97_127._c0_poly, &_pgen_tmp_95_125._c0_poly);
  Rescale(&_pgen_tmp_97_127._c1_poly, &_pgen_tmp_95_125._c1_poly);
  Free_poly_data(&_pgen_tmp_95_125._c1_poly);
  Free_poly_data(&_pgen_tmp_95_125._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_98_128, &_pgen_tmp_94_124, &_pgen_tmp_97_127);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_91_121, &_relu_tmp90_13, &_pgen_tmp_98_128);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_91_121._c0_poly);
  Init_poly_by_size(&_pgen_tmp_99_129, 1, 0);
  Init_poly_by_size(&_pgen_tmp_100_130, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_98_128._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_94_124._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_97_127._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_98_128._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_94_124._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_97_127._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_99_129, 0, degree), Coeffs(&_relu_tmp90_13._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_98_128._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_100_130, 0, degree), Coeffs(&_relu_tmp90_13._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_98_128._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_91_121._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp90_13._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_98_128._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_91_121._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_99_129, 0, degree), Coeffs(&_pgen_tmp_100_130, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_91_121._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp90_13._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_98_128._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_97_127._c1_poly);
  Free_poly_data(&_pgen_tmp_97_127._c0_poly);
  Free_poly_data(&_pgen_tmp_94_124._c1_poly);
  Free_poly_data(&_pgen_tmp_94_124._c0_poly);
  Free_poly_data(&_pgen_tmp_98_128._c1_poly);
  Free_poly_data(&_pgen_tmp_98_128._c0_poly);
  Free_poly_data(&_relu_tmp90_13._c1_poly);
  Free_poly_data(&_relu_tmp90_13._c0_poly);
  Free_poly_data(&_pgen_tmp_99_129);
  Free_poly_data(&_pgen_tmp_100_130);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_101_131, &_pgen_tmp_91_121);
  Rescale(&_pgen_tmp_101_131._c0_poly, &_pgen_tmp_91_121._c0_poly);
  Rescale(&_pgen_tmp_101_131._c1_poly, &_pgen_tmp_91_121._c1_poly);
  Rescale(&_pgen_tmp_101_131._c2_poly, &_pgen_tmp_91_121._c2_poly);
  Free_poly_data(&_pgen_tmp_91_121._c2_poly);
  Free_poly_data(&_pgen_tmp_91_121._c1_poly);
  Free_poly_data(&_pgen_tmp_91_121._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435468 = Relinearize(_pgen_tmp_101_131);
  Free_poly_data(&_pgen_tmp_101_131._c2_poly);
  Free_poly_data(&_pgen_tmp_101_131._c1_poly);
  Free_poly_data(&_pgen_tmp_101_131._c0_poly);
  Encode_double(&_pgen_tmp_103_133, &_cst_233, 1, 1, Level(&_relu_tmp80_11));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_102_132, &_relu_tmp80_11, &_pgen_tmp_103_133);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_102_132._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_102_132._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp80_11._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_103_133._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_102_132._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp80_11._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_103_133._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_103_133._poly);
  Free_poly_data(&_relu_tmp80_11._c1_poly);
  Free_poly_data(&_relu_tmp80_11._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_104_134, &_pgen_tmp_102_132);
  Rescale(&_pgen_tmp_104_134._c0_poly, &_pgen_tmp_102_132._c0_poly);
  Rescale(&_pgen_tmp_104_134._c1_poly, &_pgen_tmp_102_132._c1_poly);
  Free_poly_data(&_pgen_tmp_102_132._c1_poly);
  Free_poly_data(&_pgen_tmp_102_132._c0_poly);
  CMPLR_TM_END(19, 0);
  Encode_float_mask(&_pgen_tmp_106_136, 1.614771079042867985009, mask_len_2, 1, Level(&_relu_tmp58_7));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_105_135, &_relu_tmp58_7, &_pgen_tmp_106_136);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_105_135._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_105_135._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp58_7._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_106_136._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_105_135._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp58_7._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_106_136._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_106_136._poly);
  Free_poly_data(&_relu_tmp58_7._c1_poly);
  Free_poly_data(&_relu_tmp58_7._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_107_137, &_pgen_tmp_105_135);
  Rescale(&_pgen_tmp_107_137._c0_poly, &_pgen_tmp_105_135._c0_poly);
  Rescale(&_pgen_tmp_107_137._c1_poly, &_pgen_tmp_105_135._c1_poly);
  Free_poly_data(&_pgen_tmp_105_135._c1_poly);
  Free_poly_data(&_pgen_tmp_105_135._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_108_138, &_pgen_tmp_104_134, &_pgen_tmp_107_137);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_109_139, &_preg_268435468, &_pgen_tmp_108_138);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_relu_tmp155_16, &_preg_268435467, &_pgen_tmp_109_139);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_relu_tmp155_16._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_108_138._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_104_134._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_107_137._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_108_138._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_104_134._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_107_137._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_109_139._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435468._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_108_138._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_109_139._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435468._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_108_138._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_relu_tmp155_16._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435467._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_109_139._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_relu_tmp155_16._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435467._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_109_139._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_107_137._c1_poly);
  Free_poly_data(&_pgen_tmp_107_137._c0_poly);
  Free_poly_data(&_pgen_tmp_104_134._c1_poly);
  Free_poly_data(&_pgen_tmp_104_134._c0_poly);
  Free_poly_data(&_pgen_tmp_108_138._c1_poly);
  Free_poly_data(&_pgen_tmp_108_138._c0_poly);
  Free_poly_data(&_preg_268435468._c1_poly);
  Free_poly_data(&_preg_268435468._c0_poly);
  Free_poly_data(&_pgen_tmp_109_139._c1_poly);
  Free_poly_data(&_pgen_tmp_109_139._c0_poly);
  Free_poly_data(&_preg_268435467._c1_poly);
  Free_poly_data(&_preg_268435467._c0_poly);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_110_140, &_relu_tmp155_16, &_relu_tmp155_16);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_110_140._c0_poly);
  Init_poly_by_size(&_pgen_tmp_111_141, 1, 0);
  Init_poly_by_size(&_pgen_tmp_112_142, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_111_141, 0, degree), Coeffs(&_relu_tmp155_16._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp155_16._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_112_142, 0, degree), Coeffs(&_relu_tmp155_16._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp155_16._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_110_140._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp155_16._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp155_16._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_110_140._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_111_141, 0, degree), Coeffs(&_pgen_tmp_112_142, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_110_140._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp155_16._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp155_16._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_111_141);
  Free_poly_data(&_pgen_tmp_112_142);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_113_143, &_pgen_tmp_110_140);
  Rescale(&_pgen_tmp_113_143._c0_poly, &_pgen_tmp_110_140._c0_poly);
  Rescale(&_pgen_tmp_113_143._c1_poly, &_pgen_tmp_110_140._c1_poly);
  Rescale(&_pgen_tmp_113_143._c2_poly, &_pgen_tmp_110_140._c2_poly);
  Free_poly_data(&_pgen_tmp_110_140._c2_poly);
  Free_poly_data(&_pgen_tmp_110_140._c1_poly);
  Free_poly_data(&_pgen_tmp_110_140._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435469 = Relinearize(_pgen_tmp_113_143);
  Free_poly_data(&_pgen_tmp_113_143._c2_poly);
  Free_poly_data(&_pgen_tmp_113_143._c1_poly);
  Free_poly_data(&_pgen_tmp_113_143._c0_poly);
  Copy_ciph(&_relu_tmp159_17, &_preg_268435469);
  Free_poly_data(&_preg_268435469._c1_poly);
  Free_poly_data(&_preg_268435469._c0_poly);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_114_144, &_relu_tmp159_17, &_relu_tmp159_17);
  CMPLR_TM_END(12, 0);
  Encode_float(&_pgen_tmp_115_145, &_cst_234, 1, Sc_degree(&_pgen_tmp_114_144), Level(&_pgen_tmp_114_144));
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&_relu_tmp165_18, &_pgen_tmp_114_144, &_pgen_tmp_115_145);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_relu_tmp165_18._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_114_144._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp159_17._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp159_17._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_114_144._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp159_17._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp159_17._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_relu_tmp165_18._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_114_144._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_115_145._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Set_coeffs(&_relu_tmp165_18._c1_poly, _pgen_rns_idx_30, degree, Coeffs(&_pgen_tmp_114_144._c1_poly, _pgen_rns_idx_30, degree));
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_relu_tmp159_17._c1_poly);
  Free_poly_data(&_relu_tmp159_17._c0_poly);
  Free_poly_data(&_pgen_tmp_115_145._poly);
  Free_poly_data(&_pgen_tmp_114_144._c1_poly);
  Free_poly_data(&_pgen_tmp_114_144._c0_poly);
  CMPLR_TM_END(13, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_116_146, &_relu_tmp155_16, &_relu_tmp165_18);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_116_146._c0_poly);
  Init_poly_by_size(&_pgen_tmp_117_147, 1, 0);
  Init_poly_by_size(&_pgen_tmp_118_148, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_117_147, 0, degree), Coeffs(&_relu_tmp155_16._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp165_18._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_118_148, 0, degree), Coeffs(&_relu_tmp155_16._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp165_18._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_116_146._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp155_16._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp165_18._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_116_146._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_117_147, 0, degree), Coeffs(&_pgen_tmp_118_148, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_116_146._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp155_16._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp165_18._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_117_147);
  Free_poly_data(&_pgen_tmp_118_148);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_119_149, &_pgen_tmp_116_146);
  Rescale(&_pgen_tmp_119_149._c0_poly, &_pgen_tmp_116_146._c0_poly);
  Rescale(&_pgen_tmp_119_149._c1_poly, &_pgen_tmp_116_146._c1_poly);
  Rescale(&_pgen_tmp_119_149._c2_poly, &_pgen_tmp_116_146._c2_poly);
  Free_poly_data(&_pgen_tmp_116_146._c2_poly);
  Free_poly_data(&_pgen_tmp_116_146._c1_poly);
  Free_poly_data(&_pgen_tmp_116_146._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435470 = Relinearize(_pgen_tmp_119_149);
  Free_poly_data(&_pgen_tmp_119_149._c2_poly);
  Free_poly_data(&_pgen_tmp_119_149._c1_poly);
  Free_poly_data(&_pgen_tmp_119_149._c0_poly);
  Copy_ciph(&_relu_tmp169_19, &_preg_268435470);
  Free_poly_data(&_preg_268435470._c1_poly);
  Free_poly_data(&_preg_268435470._c0_poly);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_120_150, &_relu_tmp169_19, &_relu_tmp169_19);
  CMPLR_TM_END(12, 0);
  Encode_float(&_pgen_tmp_122_152, &_cst_235, 1, 1, Level(&_relu_tmp155_16));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_121_151, &_relu_tmp155_16, &_pgen_tmp_122_152);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_121_151._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_121_151._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp155_16._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_122_152._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_121_151._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp155_16._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_122_152._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_122_152._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_123_153, &_pgen_tmp_121_151);
  Rescale(&_pgen_tmp_123_153._c0_poly, &_pgen_tmp_121_151._c0_poly);
  Rescale(&_pgen_tmp_123_153._c1_poly, &_pgen_tmp_121_151._c1_poly);
  Free_poly_data(&_pgen_tmp_121_151._c1_poly);
  Free_poly_data(&_pgen_tmp_121_151._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_relu_tmp177_20, &_pgen_tmp_120_150, &_pgen_tmp_123_153);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_relu_tmp177_20._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_120_150._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp169_19._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp169_19._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_120_150._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp169_19._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp169_19._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_relu_tmp177_20._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_120_150._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_123_153._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_relu_tmp177_20._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_120_150._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_123_153._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_relu_tmp169_19._c1_poly);
  Free_poly_data(&_relu_tmp169_19._c0_poly);
  Free_poly_data(&_pgen_tmp_123_153._c1_poly);
  Free_poly_data(&_pgen_tmp_123_153._c0_poly);
  Free_poly_data(&_pgen_tmp_120_150._c1_poly);
  Free_poly_data(&_pgen_tmp_120_150._c0_poly);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_124_154, &_relu_tmp165_18, &_relu_tmp165_18);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_124_154._c0_poly);
  Init_poly_by_size(&_pgen_tmp_125_155, 1, 0);
  Init_poly_by_size(&_pgen_tmp_126_156, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_125_155, 0, degree), Coeffs(&_relu_tmp165_18._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp165_18._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_126_156, 0, degree), Coeffs(&_relu_tmp165_18._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp165_18._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_124_154._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp165_18._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp165_18._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_124_154._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_125_155, 0, degree), Coeffs(&_pgen_tmp_126_156, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_124_154._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp165_18._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp165_18._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_relu_tmp165_18._c1_poly);
  Free_poly_data(&_relu_tmp165_18._c0_poly);
  Free_poly_data(&_pgen_tmp_125_155);
  Free_poly_data(&_pgen_tmp_126_156);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_127_157, &_pgen_tmp_124_154);
  Rescale(&_pgen_tmp_127_157._c0_poly, &_pgen_tmp_124_154._c0_poly);
  Rescale(&_pgen_tmp_127_157._c1_poly, &_pgen_tmp_124_154._c1_poly);
  Rescale(&_pgen_tmp_127_157._c2_poly, &_pgen_tmp_124_154._c2_poly);
  Free_poly_data(&_pgen_tmp_124_154._c2_poly);
  Free_poly_data(&_pgen_tmp_124_154._c1_poly);
  Free_poly_data(&_pgen_tmp_124_154._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435471 = Relinearize(_pgen_tmp_127_157);
  Free_poly_data(&_pgen_tmp_127_157._c2_poly);
  Free_poly_data(&_pgen_tmp_127_157._c1_poly);
  Free_poly_data(&_pgen_tmp_127_157._c0_poly);
  Copy_ciph(&_relu_tmp181_21, &_preg_268435471);
  Free_poly_data(&_preg_268435471._c1_poly);
  Free_poly_data(&_preg_268435471._c0_poly);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_128_158, &_relu_tmp181_21, &_relu_tmp181_21);
  CMPLR_TM_END(12, 0);
  Encode_float(&_pgen_tmp_129_159, &_cst_236, 1, Sc_degree(&_pgen_tmp_128_158), Level(&_pgen_tmp_128_158));
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&_relu_tmp187_22, &_pgen_tmp_128_158, &_pgen_tmp_129_159);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_relu_tmp187_22._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_128_158._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp181_21._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp181_21._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_128_158._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp181_21._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp181_21._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_relu_tmp187_22._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_128_158._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_129_159._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Set_coeffs(&_relu_tmp187_22._c1_poly, _pgen_rns_idx_30, degree, Coeffs(&_pgen_tmp_128_158._c1_poly, _pgen_rns_idx_30, degree));
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_relu_tmp181_21._c1_poly);
  Free_poly_data(&_relu_tmp181_21._c0_poly);
  Free_poly_data(&_pgen_tmp_129_159._poly);
  Free_poly_data(&_pgen_tmp_128_158._c1_poly);
  Free_poly_data(&_pgen_tmp_128_158._c0_poly);
  CMPLR_TM_END(13, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_130_160, &_relu_tmp187_22, &_relu_tmp187_22);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_130_160._c0_poly);
  Init_poly_by_size(&_pgen_tmp_131_161, 1, 0);
  Init_poly_by_size(&_pgen_tmp_132_162, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_131_161, 0, degree), Coeffs(&_relu_tmp187_22._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp187_22._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_132_162, 0, degree), Coeffs(&_relu_tmp187_22._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp187_22._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_130_160._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp187_22._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp187_22._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_130_160._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_131_161, 0, degree), Coeffs(&_pgen_tmp_132_162, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_130_160._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp187_22._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp187_22._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_131_161);
  Free_poly_data(&_pgen_tmp_132_162);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_133_163, &_pgen_tmp_130_160);
  Rescale(&_pgen_tmp_133_163._c0_poly, &_pgen_tmp_130_160._c0_poly);
  Rescale(&_pgen_tmp_133_163._c1_poly, &_pgen_tmp_130_160._c1_poly);
  Rescale(&_pgen_tmp_133_163._c2_poly, &_pgen_tmp_130_160._c2_poly);
  Free_poly_data(&_pgen_tmp_130_160._c2_poly);
  Free_poly_data(&_pgen_tmp_130_160._c1_poly);
  Free_poly_data(&_pgen_tmp_130_160._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435472 = Relinearize(_pgen_tmp_133_163);
  Free_poly_data(&_pgen_tmp_133_163._c2_poly);
  Free_poly_data(&_pgen_tmp_133_163._c1_poly);
  Free_poly_data(&_pgen_tmp_133_163._c0_poly);
  Copy_ciph(&_relu_tmp191_23, &_preg_268435472);
  Free_poly_data(&_preg_268435472._c1_poly);
  Free_poly_data(&_preg_268435472._c0_poly);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_134_164, &_relu_tmp191_23, &_relu_tmp191_23);
  CMPLR_TM_END(12, 0);
  Encode_float(&_pgen_tmp_135_165, &_cst_237, 1, Sc_degree(&_pgen_tmp_134_164), Level(&_pgen_tmp_134_164));
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&_relu_tmp197_24, &_pgen_tmp_134_164, &_pgen_tmp_135_165);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_relu_tmp197_24._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_134_164._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp191_23._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp191_23._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_134_164._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp191_23._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp191_23._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_relu_tmp197_24._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_134_164._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_135_165._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Set_coeffs(&_relu_tmp197_24._c1_poly, _pgen_rns_idx_30, degree, Coeffs(&_pgen_tmp_134_164._c1_poly, _pgen_rns_idx_30, degree));
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_relu_tmp191_23._c1_poly);
  Free_poly_data(&_relu_tmp191_23._c0_poly);
  Free_poly_data(&_pgen_tmp_135_165._poly);
  Free_poly_data(&_pgen_tmp_134_164._c1_poly);
  Free_poly_data(&_pgen_tmp_134_164._c0_poly);
  CMPLR_TM_END(13, 0);
  Encode_float_mask(&_pgen_tmp_140_170, 0.0001111119162030077897477, mask_len_2, 1, Level(&_relu_tmp155_16));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_139_169, &_relu_tmp155_16, &_pgen_tmp_140_170);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_139_169._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_139_169._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp155_16._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_140_170._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_139_169._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp155_16._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_140_170._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_140_170._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_141_171, &_pgen_tmp_139_169);
  Rescale(&_pgen_tmp_141_171._c0_poly, &_pgen_tmp_139_169._c0_poly);
  Rescale(&_pgen_tmp_141_171._c1_poly, &_pgen_tmp_139_169._c1_poly);
  Free_poly_data(&_pgen_tmp_139_169._c1_poly);
  Free_poly_data(&_pgen_tmp_139_169._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_138_168, &input_ct0_0, &_pgen_tmp_141_171);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_138_168._c0_poly);
  Init_poly_by_size(&_pgen_tmp_142_172, 1, 0);
  Init_poly_by_size(&_pgen_tmp_143_173, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_142_172, 0, degree), Coeffs(&input_ct0_0._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_141_171._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_143_173, 0, degree), Coeffs(&input_ct0_0._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_141_171._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_138_168._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct0_0._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_141_171._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_138_168._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_142_172, 0, degree), Coeffs(&_pgen_tmp_143_173, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_138_168._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct0_0._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_141_171._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_141_171._c1_poly);
  Free_poly_data(&_pgen_tmp_141_171._c0_poly);
  Free_poly_data(&_pgen_tmp_142_172);
  Free_poly_data(&_pgen_tmp_143_173);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_144_174, &_pgen_tmp_138_168);
  Rescale(&_pgen_tmp_144_174._c0_poly, &_pgen_tmp_138_168._c0_poly);
  Rescale(&_pgen_tmp_144_174._c1_poly, &_pgen_tmp_138_168._c1_poly);
  Rescale(&_pgen_tmp_144_174._c2_poly, &_pgen_tmp_138_168._c2_poly);
  Free_poly_data(&_pgen_tmp_138_168._c2_poly);
  Free_poly_data(&_pgen_tmp_138_168._c1_poly);
  Free_poly_data(&_pgen_tmp_138_168._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435473 = Relinearize(_pgen_tmp_144_174);
  Free_poly_data(&_pgen_tmp_144_174._c2_poly);
  Free_poly_data(&_pgen_tmp_144_174._c1_poly);
  Free_poly_data(&_pgen_tmp_144_174._c0_poly);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_137_167, &_relu_tmp187_22, &_preg_268435473);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_137_167._c0_poly);
  Init_poly_by_size(&_pgen_tmp_145_175, 1, 0);
  Init_poly_by_size(&_pgen_tmp_146_176, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_145_175, 0, degree), Coeffs(&_relu_tmp187_22._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435473._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_146_176, 0, degree), Coeffs(&_relu_tmp187_22._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435473._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_137_167._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp187_22._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435473._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_137_167._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_145_175, 0, degree), Coeffs(&_pgen_tmp_146_176, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_137_167._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp187_22._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435473._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_preg_268435473._c1_poly);
  Free_poly_data(&_preg_268435473._c0_poly);
  Free_poly_data(&_pgen_tmp_145_175);
  Free_poly_data(&_pgen_tmp_146_176);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_147_177, &_pgen_tmp_137_167);
  Rescale(&_pgen_tmp_147_177._c0_poly, &_pgen_tmp_137_167._c0_poly);
  Rescale(&_pgen_tmp_147_177._c1_poly, &_pgen_tmp_137_167._c1_poly);
  Rescale(&_pgen_tmp_147_177._c2_poly, &_pgen_tmp_137_167._c2_poly);
  Free_poly_data(&_pgen_tmp_137_167._c2_poly);
  Free_poly_data(&_pgen_tmp_137_167._c1_poly);
  Free_poly_data(&_pgen_tmp_137_167._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435474 = Relinearize(_pgen_tmp_147_177);
  Free_poly_data(&_pgen_tmp_147_177._c2_poly);
  Free_poly_data(&_pgen_tmp_147_177._c1_poly);
  Free_poly_data(&_pgen_tmp_147_177._c0_poly);
  Encode_float_mask(&_pgen_tmp_150_180, -0.0009371069270347270278171, mask_len_2, 1, Level(&input_ct0_0));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_149_179, &input_ct0_0, &_pgen_tmp_150_180);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_149_179._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_149_179._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct0_0._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_150_180._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_149_179._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct0_0._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_150_180._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_150_180._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_151_181, &_pgen_tmp_149_179);
  Rescale(&_pgen_tmp_151_181._c0_poly, &_pgen_tmp_149_179._c0_poly);
  Rescale(&_pgen_tmp_151_181._c1_poly, &_pgen_tmp_149_179._c1_poly);
  Free_poly_data(&_pgen_tmp_149_179._c1_poly);
  Free_poly_data(&_pgen_tmp_149_179._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_148_178, &_relu_tmp177_20, &_pgen_tmp_151_181);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_148_178._c0_poly);
  Init_poly_by_size(&_pgen_tmp_152_182, 1, 0);
  Init_poly_by_size(&_pgen_tmp_153_183, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_152_182, 0, degree), Coeffs(&_relu_tmp177_20._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_151_181._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_153_183, 0, degree), Coeffs(&_relu_tmp177_20._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_151_181._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_148_178._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp177_20._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_151_181._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_148_178._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_152_182, 0, degree), Coeffs(&_pgen_tmp_153_183, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_148_178._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp177_20._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_151_181._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_151_181._c1_poly);
  Free_poly_data(&_pgen_tmp_151_181._c0_poly);
  Free_poly_data(&_pgen_tmp_152_182);
  Free_poly_data(&_pgen_tmp_153_183);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_154_184, &_pgen_tmp_148_178);
  Rescale(&_pgen_tmp_154_184._c0_poly, &_pgen_tmp_148_178._c0_poly);
  Rescale(&_pgen_tmp_154_184._c1_poly, &_pgen_tmp_148_178._c1_poly);
  Rescale(&_pgen_tmp_154_184._c2_poly, &_pgen_tmp_148_178._c2_poly);
  Free_poly_data(&_pgen_tmp_148_178._c2_poly);
  Free_poly_data(&_pgen_tmp_148_178._c1_poly);
  Free_poly_data(&_pgen_tmp_148_178._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435475 = Relinearize(_pgen_tmp_154_184);
  Free_poly_data(&_pgen_tmp_154_184._c2_poly);
  Free_poly_data(&_pgen_tmp_154_184._c1_poly);
  Free_poly_data(&_pgen_tmp_154_184._c0_poly);
  Encode_float_mask(&_pgen_tmp_157_187, 0.006507995190210730772351, mask_len_2, 1, Level(&_relu_tmp155_16));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_156_186, &_relu_tmp155_16, &_pgen_tmp_157_187);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_156_186._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_156_186._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp155_16._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_157_187._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_156_186._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp155_16._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_157_187._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_157_187._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_158_188, &_pgen_tmp_156_186);
  Rescale(&_pgen_tmp_158_188._c0_poly, &_pgen_tmp_156_186._c0_poly);
  Rescale(&_pgen_tmp_158_188._c1_poly, &_pgen_tmp_156_186._c1_poly);
  Free_poly_data(&_pgen_tmp_156_186._c1_poly);
  Free_poly_data(&_pgen_tmp_156_186._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_155_185, &input_ct0_0, &_pgen_tmp_158_188);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_155_185._c0_poly);
  Init_poly_by_size(&_pgen_tmp_159_189, 1, 0);
  Init_poly_by_size(&_pgen_tmp_160_190, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_159_189, 0, degree), Coeffs(&input_ct0_0._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_158_188._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_160_190, 0, degree), Coeffs(&input_ct0_0._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_158_188._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_155_185._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct0_0._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_158_188._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_155_185._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_159_189, 0, degree), Coeffs(&_pgen_tmp_160_190, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_155_185._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct0_0._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_158_188._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_158_188._c1_poly);
  Free_poly_data(&_pgen_tmp_158_188._c0_poly);
  Free_poly_data(&_pgen_tmp_159_189);
  Free_poly_data(&_pgen_tmp_160_190);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_161_191, &_pgen_tmp_155_185);
  Rescale(&_pgen_tmp_161_191._c0_poly, &_pgen_tmp_155_185._c0_poly);
  Rescale(&_pgen_tmp_161_191._c1_poly, &_pgen_tmp_155_185._c1_poly);
  Rescale(&_pgen_tmp_161_191._c2_poly, &_pgen_tmp_155_185._c2_poly);
  Free_poly_data(&_pgen_tmp_155_185._c2_poly);
  Free_poly_data(&_pgen_tmp_155_185._c1_poly);
  Free_poly_data(&_pgen_tmp_155_185._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435476 = Relinearize(_pgen_tmp_161_191);
  Free_poly_data(&_pgen_tmp_161_191._c2_poly);
  Free_poly_data(&_pgen_tmp_161_191._c1_poly);
  Free_poly_data(&_pgen_tmp_161_191._c0_poly);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_162_192, &_preg_268435475, &_preg_268435476);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_163_193, &_preg_268435474, &_pgen_tmp_162_192);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_136_166, &_relu_tmp197_24, &_pgen_tmp_163_193);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_136_166._c0_poly);
  Init_poly_by_size(&_pgen_tmp_164_194, 1, 0);
  Init_poly_by_size(&_pgen_tmp_165_195, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_162_192._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435475._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435476._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_162_192._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435475._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435476._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_163_193._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435474._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_162_192._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_163_193._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435474._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_162_192._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_164_194, 0, degree), Coeffs(&_relu_tmp197_24._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_163_193._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_165_195, 0, degree), Coeffs(&_relu_tmp197_24._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_163_193._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_136_166._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp197_24._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_163_193._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_136_166._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_164_194, 0, degree), Coeffs(&_pgen_tmp_165_195, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_136_166._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp197_24._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_163_193._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_preg_268435476._c1_poly);
  Free_poly_data(&_preg_268435476._c0_poly);
  Free_poly_data(&_preg_268435475._c1_poly);
  Free_poly_data(&_preg_268435475._c0_poly);
  Free_poly_data(&_pgen_tmp_162_192._c1_poly);
  Free_poly_data(&_pgen_tmp_162_192._c0_poly);
  Free_poly_data(&_preg_268435474._c1_poly);
  Free_poly_data(&_preg_268435474._c0_poly);
  Free_poly_data(&_pgen_tmp_163_193._c1_poly);
  Free_poly_data(&_pgen_tmp_163_193._c0_poly);
  Free_poly_data(&_relu_tmp197_24._c1_poly);
  Free_poly_data(&_relu_tmp197_24._c0_poly);
  Free_poly_data(&_pgen_tmp_164_194);
  Free_poly_data(&_pgen_tmp_165_195);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_166_196, &_pgen_tmp_136_166);
  Rescale(&_pgen_tmp_166_196._c0_poly, &_pgen_tmp_136_166._c0_poly);
  Rescale(&_pgen_tmp_166_196._c1_poly, &_pgen_tmp_136_166._c1_poly);
  Rescale(&_pgen_tmp_166_196._c2_poly, &_pgen_tmp_136_166._c2_poly);
  Free_poly_data(&_pgen_tmp_136_166._c2_poly);
  Free_poly_data(&_pgen_tmp_136_166._c1_poly);
  Free_poly_data(&_pgen_tmp_136_166._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435477 = Relinearize(_pgen_tmp_166_196);
  Free_poly_data(&_pgen_tmp_166_196._c2_poly);
  Free_poly_data(&_pgen_tmp_166_196._c1_poly);
  Free_poly_data(&_pgen_tmp_166_196._c0_poly);
  Encode_float_mask(&_pgen_tmp_170_200, -0.03691063940349948585551, mask_len_2, 1, Level(&input_ct0_0));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_169_199, &input_ct0_0, &_pgen_tmp_170_200);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_169_199._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_169_199._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct0_0._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_170_200._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_169_199._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct0_0._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_170_200._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_170_200._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_171_201, &_pgen_tmp_169_199);
  Rescale(&_pgen_tmp_171_201._c0_poly, &_pgen_tmp_169_199._c0_poly);
  Rescale(&_pgen_tmp_171_201._c1_poly, &_pgen_tmp_169_199._c1_poly);
  Free_poly_data(&_pgen_tmp_169_199._c1_poly);
  Free_poly_data(&_pgen_tmp_169_199._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_168_198, &_relu_tmp177_20, &_pgen_tmp_171_201);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_168_198._c0_poly);
  Init_poly_by_size(&_pgen_tmp_172_202, 1, 0);
  Init_poly_by_size(&_pgen_tmp_173_203, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_172_202, 0, degree), Coeffs(&_relu_tmp177_20._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_171_201._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_173_203, 0, degree), Coeffs(&_relu_tmp177_20._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_171_201._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_168_198._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp177_20._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_171_201._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_168_198._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_172_202, 0, degree), Coeffs(&_pgen_tmp_173_203, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_168_198._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp177_20._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_171_201._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_171_201._c1_poly);
  Free_poly_data(&_pgen_tmp_171_201._c0_poly);
  Free_poly_data(&_pgen_tmp_172_202);
  Free_poly_data(&_pgen_tmp_173_203);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_174_204, &_pgen_tmp_168_198);
  Rescale(&_pgen_tmp_174_204._c0_poly, &_pgen_tmp_168_198._c0_poly);
  Rescale(&_pgen_tmp_174_204._c1_poly, &_pgen_tmp_168_198._c1_poly);
  Rescale(&_pgen_tmp_174_204._c2_poly, &_pgen_tmp_168_198._c2_poly);
  Free_poly_data(&_pgen_tmp_168_198._c2_poly);
  Free_poly_data(&_pgen_tmp_168_198._c1_poly);
  Free_poly_data(&_pgen_tmp_168_198._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435478 = Relinearize(_pgen_tmp_174_204);
  Free_poly_data(&_pgen_tmp_174_204._c2_poly);
  Free_poly_data(&_pgen_tmp_174_204._c1_poly);
  Free_poly_data(&_pgen_tmp_174_204._c0_poly);
  Encode_float_mask(&_pgen_tmp_177_207, 0.1056744718173614761003, mask_len_2, 1, Level(&_relu_tmp155_16));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_176_206, &_relu_tmp155_16, &_pgen_tmp_177_207);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_176_206._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_176_206._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp155_16._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_177_207._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_176_206._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp155_16._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_177_207._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_177_207._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_178_208, &_pgen_tmp_176_206);
  Rescale(&_pgen_tmp_178_208._c0_poly, &_pgen_tmp_176_206._c0_poly);
  Rescale(&_pgen_tmp_178_208._c1_poly, &_pgen_tmp_176_206._c1_poly);
  Free_poly_data(&_pgen_tmp_176_206._c1_poly);
  Free_poly_data(&_pgen_tmp_176_206._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_175_205, &input_ct0_0, &_pgen_tmp_178_208);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_175_205._c0_poly);
  Init_poly_by_size(&_pgen_tmp_179_209, 1, 0);
  Init_poly_by_size(&_pgen_tmp_180_210, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_179_209, 0, degree), Coeffs(&input_ct0_0._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_178_208._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_180_210, 0, degree), Coeffs(&input_ct0_0._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_178_208._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_175_205._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct0_0._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_178_208._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_175_205._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_179_209, 0, degree), Coeffs(&_pgen_tmp_180_210, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_175_205._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct0_0._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_178_208._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_178_208._c1_poly);
  Free_poly_data(&_pgen_tmp_178_208._c0_poly);
  Free_poly_data(&_pgen_tmp_179_209);
  Free_poly_data(&_pgen_tmp_180_210);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_181_211, &_pgen_tmp_175_205);
  Rescale(&_pgen_tmp_181_211._c0_poly, &_pgen_tmp_175_205._c0_poly);
  Rescale(&_pgen_tmp_181_211._c1_poly, &_pgen_tmp_175_205._c1_poly);
  Rescale(&_pgen_tmp_181_211._c2_poly, &_pgen_tmp_175_205._c2_poly);
  Free_poly_data(&_pgen_tmp_175_205._c2_poly);
  Free_poly_data(&_pgen_tmp_175_205._c1_poly);
  Free_poly_data(&_pgen_tmp_175_205._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435479 = Relinearize(_pgen_tmp_181_211);
  Free_poly_data(&_pgen_tmp_181_211._c2_poly);
  Free_poly_data(&_pgen_tmp_181_211._c1_poly);
  Free_poly_data(&_pgen_tmp_181_211._c0_poly);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_182_212, &_preg_268435478, &_preg_268435479);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_167_197, &_relu_tmp187_22, &_pgen_tmp_182_212);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_167_197._c0_poly);
  Init_poly_by_size(&_pgen_tmp_183_213, 1, 0);
  Init_poly_by_size(&_pgen_tmp_184_214, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_182_212._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435478._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435479._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_182_212._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435478._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435479._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_183_213, 0, degree), Coeffs(&_relu_tmp187_22._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_182_212._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_184_214, 0, degree), Coeffs(&_relu_tmp187_22._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_182_212._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_167_197._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp187_22._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_182_212._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_167_197._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_183_213, 0, degree), Coeffs(&_pgen_tmp_184_214, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_167_197._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp187_22._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_182_212._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_preg_268435479._c1_poly);
  Free_poly_data(&_preg_268435479._c0_poly);
  Free_poly_data(&_preg_268435478._c1_poly);
  Free_poly_data(&_preg_268435478._c0_poly);
  Free_poly_data(&_pgen_tmp_182_212._c1_poly);
  Free_poly_data(&_pgen_tmp_182_212._c0_poly);
  Free_poly_data(&_relu_tmp187_22._c1_poly);
  Free_poly_data(&_relu_tmp187_22._c0_poly);
  Free_poly_data(&_pgen_tmp_183_213);
  Free_poly_data(&_pgen_tmp_184_214);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_185_215, &_pgen_tmp_167_197);
  Rescale(&_pgen_tmp_185_215._c0_poly, &_pgen_tmp_167_197._c0_poly);
  Rescale(&_pgen_tmp_185_215._c1_poly, &_pgen_tmp_167_197._c1_poly);
  Rescale(&_pgen_tmp_185_215._c2_poly, &_pgen_tmp_167_197._c2_poly);
  Free_poly_data(&_pgen_tmp_167_197._c2_poly);
  Free_poly_data(&_pgen_tmp_167_197._c1_poly);
  Free_poly_data(&_pgen_tmp_167_197._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435480 = Relinearize(_pgen_tmp_185_215);
  Free_poly_data(&_pgen_tmp_185_215._c2_poly);
  Free_poly_data(&_pgen_tmp_185_215._c1_poly);
  Free_poly_data(&_pgen_tmp_185_215._c0_poly);
  Encode_float_mask(&_pgen_tmp_188_218, -0.2078597158810965850329, mask_len_2, 1, Level(&input_ct0_0));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_187_217, &input_ct0_0, &_pgen_tmp_188_218);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_187_217._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_187_217._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct0_0._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_188_218._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_187_217._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct0_0._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_188_218._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_188_218._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_189_219, &_pgen_tmp_187_217);
  Rescale(&_pgen_tmp_189_219._c0_poly, &_pgen_tmp_187_217._c0_poly);
  Rescale(&_pgen_tmp_189_219._c1_poly, &_pgen_tmp_187_217._c1_poly);
  Free_poly_data(&_pgen_tmp_187_217._c1_poly);
  Free_poly_data(&_pgen_tmp_187_217._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_186_216, &_relu_tmp177_20, &_pgen_tmp_189_219);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_186_216._c0_poly);
  Init_poly_by_size(&_pgen_tmp_190_220, 1, 0);
  Init_poly_by_size(&_pgen_tmp_191_221, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_190_220, 0, degree), Coeffs(&_relu_tmp177_20._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_189_219._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_191_221, 0, degree), Coeffs(&_relu_tmp177_20._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_189_219._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_186_216._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp177_20._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_189_219._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_186_216._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_190_220, 0, degree), Coeffs(&_pgen_tmp_191_221, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_186_216._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp177_20._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_189_219._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_189_219._c1_poly);
  Free_poly_data(&_pgen_tmp_189_219._c0_poly);
  Free_poly_data(&_relu_tmp177_20._c1_poly);
  Free_poly_data(&_relu_tmp177_20._c0_poly);
  Free_poly_data(&_pgen_tmp_190_220);
  Free_poly_data(&_pgen_tmp_191_221);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_192_222, &_pgen_tmp_186_216);
  Rescale(&_pgen_tmp_192_222._c0_poly, &_pgen_tmp_186_216._c0_poly);
  Rescale(&_pgen_tmp_192_222._c1_poly, &_pgen_tmp_186_216._c1_poly);
  Rescale(&_pgen_tmp_192_222._c2_poly, &_pgen_tmp_186_216._c2_poly);
  Free_poly_data(&_pgen_tmp_186_216._c2_poly);
  Free_poly_data(&_pgen_tmp_186_216._c1_poly);
  Free_poly_data(&_pgen_tmp_186_216._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435481 = Relinearize(_pgen_tmp_192_222);
  Free_poly_data(&_pgen_tmp_192_222._c2_poly);
  Free_poly_data(&_pgen_tmp_192_222._c1_poly);
  Free_poly_data(&_pgen_tmp_192_222._c0_poly);
  Encode_float_mask(&_pgen_tmp_195_225, 0.6334139843709288841822, mask_len_2, 1, Level(&_relu_tmp155_16));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_194_224, &_relu_tmp155_16, &_pgen_tmp_195_225);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_194_224._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_194_224._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp155_16._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_195_225._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_194_224._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp155_16._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_195_225._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_195_225._poly);
  Free_poly_data(&_relu_tmp155_16._c1_poly);
  Free_poly_data(&_relu_tmp155_16._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_196_226, &_pgen_tmp_194_224);
  Rescale(&_pgen_tmp_196_226._c0_poly, &_pgen_tmp_194_224._c0_poly);
  Rescale(&_pgen_tmp_196_226._c1_poly, &_pgen_tmp_194_224._c1_poly);
  Free_poly_data(&_pgen_tmp_194_224._c1_poly);
  Free_poly_data(&_pgen_tmp_194_224._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(16, 0);
  Init_ciph3_up_scale(&_pgen_tmp_193_223, &input_ct0_0, &_pgen_tmp_196_226);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_193_223._c0_poly);
  Init_poly_by_size(&_pgen_tmp_197_227, 1, 0);
  Init_poly_by_size(&_pgen_tmp_198_228, 1, 0);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_197_227, 0, degree), Coeffs(&input_ct0_0._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_196_226._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_198_228, 0, degree), Coeffs(&input_ct0_0._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_196_226._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_193_223._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct0_0._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_196_226._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_193_223._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_197_227, 0, degree), Coeffs(&_pgen_tmp_198_228, 0, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_193_223._c2_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct0_0._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_196_226._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_196_226._c1_poly);
  Free_poly_data(&_pgen_tmp_196_226._c0_poly);
  Free_poly_data(&_pgen_tmp_197_227);
  Free_poly_data(&_pgen_tmp_198_228);
  CMPLR_TM_END(16, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph3_down_scale(&_pgen_tmp_199_229, &_pgen_tmp_193_223);
  Rescale(&_pgen_tmp_199_229._c0_poly, &_pgen_tmp_193_223._c0_poly);
  Rescale(&_pgen_tmp_199_229._c1_poly, &_pgen_tmp_193_223._c1_poly);
  Rescale(&_pgen_tmp_199_229._c2_poly, &_pgen_tmp_193_223._c2_poly);
  Free_poly_data(&_pgen_tmp_193_223._c2_poly);
  Free_poly_data(&_pgen_tmp_193_223._c1_poly);
  Free_poly_data(&_pgen_tmp_193_223._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435482 = Relinearize(_pgen_tmp_199_229);
  Free_poly_data(&_pgen_tmp_199_229._c2_poly);
  Free_poly_data(&_pgen_tmp_199_229._c1_poly);
  Free_poly_data(&_pgen_tmp_199_229._c0_poly);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_200_230, &_preg_268435481, &_preg_268435482);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_201_231, &_preg_268435480, &_pgen_tmp_200_230);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_relu_tmp266_25, &_preg_268435477, &_pgen_tmp_201_231);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_relu_tmp266_25._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_200_230._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435481._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435482._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_200_230._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435481._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435482._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_201_231._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435480._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_200_230._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_201_231._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435480._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_200_230._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_relu_tmp266_25._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435477._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_201_231._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_relu_tmp266_25._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_preg_268435477._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_201_231._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_preg_268435482._c1_poly);
  Free_poly_data(&_preg_268435482._c0_poly);
  Free_poly_data(&_preg_268435481._c1_poly);
  Free_poly_data(&_preg_268435481._c0_poly);
  Free_poly_data(&_pgen_tmp_200_230._c1_poly);
  Free_poly_data(&_pgen_tmp_200_230._c0_poly);
  Free_poly_data(&_preg_268435480._c1_poly);
  Free_poly_data(&_preg_268435480._c0_poly);
  Free_poly_data(&_pgen_tmp_201_231._c1_poly);
  Free_poly_data(&_pgen_tmp_201_231._c0_poly);
  Free_poly_data(&_preg_268435477._c1_poly);
  Free_poly_data(&_preg_268435477._c0_poly);
  CMPLR_TM_END(12, 0);
  Encode_float_mask(&_pgen_tmp_203_233, 0.5, mask_len_2, 1, Level(&input_ct0_0));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_202_232, &input_ct0_0, &_pgen_tmp_203_233);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_pgen_tmp_202_232._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_202_232._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct0_0._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_203_233._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_202_232._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&input_ct0_0._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_203_233._poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_203_233._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_204_234, &_pgen_tmp_202_232);
  Rescale(&_pgen_tmp_204_234._c0_poly, &_pgen_tmp_202_232._c0_poly);
  Rescale(&_pgen_tmp_204_234._c1_poly, &_pgen_tmp_202_232._c1_poly);
  Free_poly_data(&_pgen_tmp_202_232._c1_poly);
  Free_poly_data(&_pgen_tmp_202_232._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_relu_tmp274_26, &_relu_tmp266_25, &_pgen_tmp_204_234);
  _pgen_modulus_28 = Q_modulus();
  _pgen_num_q_29 = Poly_level(&_relu_tmp274_26._c0_poly);
  for (_pgen_rns_idx_30 = 0; _pgen_rns_idx_30 < _pgen_num_q_29; _pgen_rns_idx_30 = _pgen_rns_idx_30 + 1) {
    Hw_modadd(Coeffs(&_relu_tmp274_26._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp266_25._c0_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_204_234._c0_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    Hw_modadd(Coeffs(&_relu_tmp274_26._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_relu_tmp266_25._c1_poly, _pgen_rns_idx_30, degree), Coeffs(&_pgen_tmp_204_234._c1_poly, _pgen_rns_idx_30, degree), _pgen_modulus_28, degree);
    _pgen_modulus_28 = _pgen_modulus_28 + 1;
  }
  Free_poly_data(&_pgen_tmp_204_234._c1_poly);
  Free_poly_data(&_pgen_tmp_204_234._c0_poly);
  Free_poly_data(&_relu_tmp266_25._c1_poly);
  Free_poly_data(&_relu_tmp266_25._c0_poly);
  CMPLR_TM_END(12, 0);
  return _relu_tmp274_26;
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

CIPHERTEXT Relinearize(CIPHERTEXT3 ciph_0) {
  RTLIB_TM_START(18, rtm);
  CIPHERTEXT _pgen_relin_res_1;
  POLYNOMIAL _pgen_swk_c0_2;
  POLYNOMIAL _pgen_swk_c1_3;
  POLYNOMIAL _pgen_ext_4;
  POLYNOMIAL _pgen_tmp_poly_5;
  POLYNOMIAL _pgen_mod_down_c0_6;
  POLYNOMIAL _pgen_mod_down_c1_7;
  SWITCH_KEY* _pgen_swk_8;
  uint32_t _pgen_part_idx_9;
  POLYNOMIAL _pgen_key0_10;
  POLYNOMIAL _pgen_key1_11;
  MODULUS* _pgen_modulus_12;
  uint32_t _pgen_num_q_13;
  uint32_t _pgen_rns_idx_14;
  uint32_t _pgen_num_p_15;
  uint32_t _pgen_p_ofst_16;
  uint32_t _pgen_p_idx_17;
  uint32_t _pgen_key_p_ofst_18;
  uint32_t _pgen_key_p_idx_19;
  uint32_t  degree = Degree();
  memset(&_pgen_relin_res_1, 0, sizeof(_pgen_relin_res_1));
  memset(&_pgen_swk_c0_2, 0, sizeof(_pgen_swk_c0_2));
  memset(&_pgen_swk_c1_3, 0, sizeof(_pgen_swk_c1_3));
  memset(&_pgen_ext_4, 0, sizeof(_pgen_ext_4));
  memset(&_pgen_tmp_poly_5, 0, sizeof(_pgen_tmp_poly_5));
  memset(&_pgen_mod_down_c0_6, 0, sizeof(_pgen_mod_down_c0_6));
  memset(&_pgen_mod_down_c1_7, 0, sizeof(_pgen_mod_down_c1_7));
  memset(&_pgen_key0_10, 0, sizeof(_pgen_key0_10));
  memset(&_pgen_key1_11, 0, sizeof(_pgen_key1_11));
  Init_ciph_same_scale_ciph3(&_pgen_relin_res_1, &ciph_0);
  Init_poly_by_size(&_pgen_swk_c0_2, Poly_level(&ciph_0._c2_poly), 1);
  Init_poly_by_size(&_pgen_swk_c1_3, Poly_level(&ciph_0._c2_poly), 1);
  Init_poly_by_size(&_pgen_ext_4, Poly_level(&ciph_0._c2_poly), 1);
  Init_poly_by_size(&_pgen_tmp_poly_5, 1, 0);
  Init_poly_by_size(&_pgen_mod_down_c0_6, Poly_level(&ciph_0._c0_poly), 0);
  Init_poly_by_size(&_pgen_mod_down_c1_7, Poly_level(&ciph_0._c2_poly), 0);
  _pgen_swk_8 = Swk(0, 0);
  for (_pgen_part_idx_9 = 0; _pgen_part_idx_9 < Num_decomp(&ciph_0._c2_poly); _pgen_part_idx_9 = _pgen_part_idx_9 + 1) {
    Decomp_modup(&_pgen_ext_4, &ciph_0._c2_poly, _pgen_part_idx_9);
    Set_pk0(&_pgen_key0_10, _pgen_swk_8, _pgen_part_idx_9);
    Set_pk1(&_pgen_key1_11, _pgen_swk_8, _pgen_part_idx_9);
    _pgen_modulus_12 = Q_modulus();
    _pgen_num_q_13 = Poly_level(&_pgen_ext_4);
    for (_pgen_rns_idx_14 = 0; _pgen_rns_idx_14 < _pgen_num_q_13; _pgen_rns_idx_14 = _pgen_rns_idx_14 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_poly_5, 0, degree), Coeffs(&_pgen_key0_10, _pgen_rns_idx_14, degree), Coeffs(&_pgen_ext_4, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
      Hw_modadd(Coeffs(&_pgen_swk_c0_2, _pgen_rns_idx_14, degree), Coeffs(&_pgen_swk_c0_2, _pgen_rns_idx_14, degree), Coeffs(&_pgen_tmp_poly_5, 0, degree), _pgen_modulus_12, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_poly_5, 0, degree), Coeffs(&_pgen_key1_11, _pgen_rns_idx_14, degree), Coeffs(&_pgen_ext_4, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
      Hw_modadd(Coeffs(&_pgen_swk_c1_3, _pgen_rns_idx_14, degree), Coeffs(&_pgen_swk_c1_3, _pgen_rns_idx_14, degree), Coeffs(&_pgen_tmp_poly_5, 0, degree), _pgen_modulus_12, degree);
      _pgen_modulus_12 = _pgen_modulus_12 + 1;
    }
    _pgen_modulus_12 = P_modulus();
    _pgen_num_p_15 = Num_p(&_pgen_ext_4);
    _pgen_p_ofst_16 = Num_alloc(&_pgen_ext_4) - _pgen_num_p_15;
    _pgen_key_p_ofst_18 = Poly_level(&_pgen_key0_10);
    for (_pgen_rns_idx_14 = 0; _pgen_rns_idx_14 < _pgen_num_p_15; _pgen_rns_idx_14 = _pgen_rns_idx_14 + 1) {
      _pgen_p_idx_17 = _pgen_rns_idx_14 + _pgen_p_ofst_16;
      _pgen_key_p_idx_19 = _pgen_rns_idx_14 + _pgen_key_p_ofst_18;
      Hw_modmul(Coeffs(&_pgen_tmp_poly_5, 0, degree), Coeffs(&_pgen_key0_10, _pgen_key_p_idx_19, degree), Coeffs(&_pgen_ext_4, _pgen_p_idx_17, degree), _pgen_modulus_12, degree);
      Hw_modadd(Coeffs(&_pgen_swk_c0_2, _pgen_p_idx_17, degree), Coeffs(&_pgen_swk_c0_2, _pgen_p_idx_17, degree), Coeffs(&_pgen_tmp_poly_5, 0, degree), _pgen_modulus_12, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_poly_5, 0, degree), Coeffs(&_pgen_key1_11, _pgen_key_p_idx_19, degree), Coeffs(&_pgen_ext_4, _pgen_p_idx_17, degree), _pgen_modulus_12, degree);
      Hw_modadd(Coeffs(&_pgen_swk_c1_3, _pgen_p_idx_17, degree), Coeffs(&_pgen_swk_c1_3, _pgen_p_idx_17, degree), Coeffs(&_pgen_tmp_poly_5, 0, degree), _pgen_modulus_12, degree);
      _pgen_modulus_12 = _pgen_modulus_12 + 1;
    }
  }
  Mod_down(&_pgen_mod_down_c0_6, &_pgen_swk_c0_2);
  Mod_down(&_pgen_mod_down_c1_7, &_pgen_swk_c1_3);
  _pgen_modulus_12 = Q_modulus();
  _pgen_num_q_13 = Poly_level(&ciph_0._c0_poly);
  for (_pgen_rns_idx_14 = 0; _pgen_rns_idx_14 < _pgen_num_q_13; _pgen_rns_idx_14 = _pgen_rns_idx_14 + 1) {
    Hw_modadd(Coeffs(&_pgen_relin_res_1._c0_poly, _pgen_rns_idx_14, degree), Coeffs(&_pgen_mod_down_c0_6, _pgen_rns_idx_14, degree), Coeffs(&ciph_0._c0_poly, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
    Hw_modadd(Coeffs(&_pgen_relin_res_1._c1_poly, _pgen_rns_idx_14, degree), Coeffs(&_pgen_mod_down_c1_7, _pgen_rns_idx_14, degree), Coeffs(&ciph_0._c1_poly, _pgen_rns_idx_14, degree), _pgen_modulus_12, degree);
    _pgen_modulus_12 = _pgen_modulus_12 + 1;
  }
  Free_poly_data(&_pgen_swk_c0_2);
  Free_poly_data(&_pgen_swk_c1_3);
  Free_poly_data(&_pgen_ext_4);
  Free_poly_data(&_pgen_tmp_poly_5);
  Free_poly_data(&_pgen_mod_down_c0_6);
  Free_poly_data(&_pgen_mod_down_c1_7);
  RTLIB_TM_END(18, rtm);
  return _pgen_relin_res_1;
}

CKKS_PARAMS* Get_context_params() {
  static CKKS_PARAMS parm = {
    LIB_ANT, 65536, 0, 32, 3, 60, 56, 3, 192, 283, 
    { -32768, -28672, -24576, -20480, -16384, -12288, -8192, -4096,
      -260, -33, -32, -31, -17, -16, -15, -9,
      -8, -7, -1, 0, 1, 2, 3, 4,
      5, 6, 7, 8, 9, 10, 11, 12,
      13, 14, 15, 16, 17, 20, 24, 30,
      31, 32, 33, 40, 48, 50, 60, 63,
      64, 70, 72, 80, 90, 96, 100, 110,
      120, 126, 128, 130, 140, 144, 150, 160,
      168, 170, 180, 190, 192, 200, 210, 220,
      230, 240, 250, 252, 256, 288, 320, 336,
      384, 432, 448, 480, 504, 512, 528, 576,
      624, 640, 672, 704, 720, 768, 832, 896,
      960, 1008, 1024, 1088, 1152, 1216, 1280, 1344,
      1408, 1472, 1536, 1600, 1664, 1728, 1792, 1856,
      1920, 1984, 2016, 2048, 2112, 2304, 2496, 2560,
      2688, 2816, 2880, 3072, 3264, 3328, 3456, 3584,
      3648, 3840, 4032, 4096, 4224, 4352, 4416, 4608,
      4800, 4864, 4992, 5120, 5184, 5376, 5568, 5632,
      5760, 5888, 5952, 6144, 6336, 6400, 6528, 6656,
      6720, 6912, 7104, 7168, 7296, 7424, 7488, 7680,
      7872, 7936, 8064, 8192, 8256, 8448, 8640, 8704,
      8832, 8960, 9024, 9216, 9408, 9472, 9600, 9728,
      9792, 9984, 10176, 10240, 10368, 10496, 10560, 10752,
      10944, 11008, 11136, 11264, 11328, 11520, 11712, 11776,
      11904, 12032, 12096, 12288, 12480, 12544, 12672, 12800,
      12864, 13056, 13248, 13312, 13440, 13568, 13632, 13824,
      14016, 14080, 14208, 14336, 14400, 14592, 14784, 14848,
      14976, 15104, 15168, 15360, 15552, 15616, 15744, 15872,
      15936, 16128, 16320, 16384, 16512, 16704, 16896, 17088,
      17280, 17408, 17472, 17664, 17856, 18048, 18240, 18432,
      18624, 18816, 19008, 19200, 19392, 19456, 19584, 19776,
      19968, 20160, 20352, 20480, 20544, 20736, 20928, 21120,
      21312, 21504, 21696, 21888, 22080, 22272, 22464, 22528,
      22656, 22848, 23040, 23232, 23424, 23552, 23616, 23808,
      24000, 24192, 24384, 24576, 25600, 26624, 27648, 28672,
      29696, 30720, 31744 }
  };
  return &parm;
}

RT_DATA_INFO* Get_rt_data_info() {
  static RT_DATA_INFO info = {
    "/app/release/fhelipe_squeezenet.bin",
    "XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX",
    DE_MSG_F32
  };
  return &info;
}

int32_t _cst_51[1] = {
  0
};
int32_t _cst_56[1] = {
  0
};
int32_t _cst_60[1] = {
  0
};
int32_t _cst_66[9] = {
  -33, -32, -31, -1, 0, 1, 31, 32,
  33
};
int32_t _cst_72[1] = {
  0
};
int32_t _cst_76[1] = {
  0
};
int32_t _cst_82[9] = {
  -33, -32, -31, -1, 0, 1, 31, 32,
  33
};
int32_t _cst_88[4] = {
  0, 1024, 2048, 3072
};
int32_t _cst_93[4] = {
  0, 1024, 2048, 3072
};
int32_t _cst_102[9] = {
  -33, -32, -31, -1, 0, 1, 31, 32,
  33
};
int32_t _cst_111[1] = {
  0
};
int32_t _cst_115[4] = {
  0, 256, 512, 768
};
int32_t _cst_121[9] = {
  -17, -16, -15, -1, 0, 1, 15, 16,
  17
};
int32_t _cst_127[1] = {
  0
};
int32_t _cst_131[4] = {
  0, 256, 512, 768
};
int32_t _cst_137[9] = {
  -17, -16, -15, -1, 0, 1, 15, 16,
  17
};
int32_t _cst_143[1] = {
  0
};
int32_t _cst_147[4] = {
  0, 256, 512, 768
};
int32_t _cst_153[9] = {
  -17, -16, -15, -1, 0, 1, 15, 16,
  17
};
int32_t _cst_159[1] = {
  0
};
int32_t _cst_163[8] = {
  0, 256, 512, 768, 1024, 1280, 1536, 1792
};
int32_t _cst_172[9] = {
  -17, -16, -15, -1, 0, 1, 15, 16,
  17
};
int32_t _cst_181[1] = {
  0
};
int32_t _cst_185[8] = {
  0, 64, 128, 192, 256, 320, 384, 448
};
int32_t _cst_191[9] = {
  -9, -8, -7, -1, 0, 1, 7, 8,
  9
};
int32_t _cst_197[16] = {
  0, 64, 128, 192, 256, 320, 384, 448,
  512, 576, 640, 704, 768, 832, 896, 960
};
int32_t _cst_205[2] = {
  0, 1
};
