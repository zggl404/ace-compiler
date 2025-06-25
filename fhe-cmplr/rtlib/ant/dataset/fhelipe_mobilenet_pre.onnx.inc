// external header files
#include "rt_ant/rt_ant.h"

typedef double float64_t;
typedef float float32_t;

extern float32_t _cst_0[10240];
extern float32_t _cst_1[10];
extern float32_t _cst_2[864];
extern float32_t _cst_3[32];
extern float32_t _cst_4[288];
extern float32_t _cst_5[1024];
extern float32_t _cst_6[288];
extern float32_t _cst_7[2048];
extern float32_t _cst_8[64];
extern float32_t _cst_9[576];
extern float32_t _cst_10[4096];
extern float32_t _cst_11[576];
extern float32_t _cst_12[8192];
extern float32_t _cst_13[128];
extern float32_t _cst_14[1152];
extern float32_t _cst_15[16384];
extern float32_t _cst_16[1152];
extern float32_t _cst_17[32768];
extern float32_t _cst_18[256];
extern float32_t _cst_19[2304];
extern float32_t _cst_20[65536];
extern float32_t _cst_21[2304];
extern float32_t _cst_22[65536];
extern float32_t _cst_23[2304];
extern float32_t _cst_24[65536];
extern float32_t _cst_25[2304];
extern float32_t _cst_26[65536];
extern float32_t _cst_27[2304];
extern float32_t _cst_28[65536];
extern float32_t _cst_29[2304];
extern float32_t _cst_30[131072];
extern float32_t _cst_31[512];
extern float32_t _cst_32[4608];
extern float32_t _cst_33[524288];
extern float32_t _cst_34[1024];
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
extern int64_t _cst_48[2];
extern int64_t _cst_49[2];
extern int32_t _cst_50[1];
extern float32_t _cst_51[1179648];
extern float32_t _cst_52[32768];
extern int32_t _cst_53[9];
extern float32_t _cst_54[32768];
extern int32_t _cst_55[1];
extern float32_t _cst_56[294912];
extern float32_t _cst_57[32768];
extern int32_t _cst_58[9];
extern float32_t _cst_59[32768];
extern int32_t _cst_60[1];
extern float32_t _cst_61[1048576];
extern float32_t _cst_62[32768];
extern int32_t _cst_63[4];
extern float32_t _cst_64[32768];
extern int32_t _cst_65[1];
extern float32_t _cst_66[294912];
extern float32_t _cst_67[32768];
extern int32_t _cst_68[9];
extern float32_t _cst_69[32768];
extern float32_t _cst_70[524288];
extern float32_t _cst_71[524288];
extern float32_t _cst_72[1048576];
extern int32_t _cst_73[1];
extern float32_t _cst_74[524288];
extern float32_t _cst_75[16384];
extern int32_t _cst_76[4];
extern float32_t _cst_77[16384];
extern float32_t _cst_78[16384];
extern int32_t _cst_79[1];
extern float32_t _cst_80[147456];
extern float32_t _cst_81[16384];
extern int32_t _cst_82[9];
extern int32_t _cst_83[1];
extern float32_t _cst_84[1048576];
extern float32_t _cst_85[16384];
extern int32_t _cst_86[8];
extern float32_t _cst_87[16384];
extern float32_t _cst_88[16384];
extern int32_t _cst_89[1];
extern float32_t _cst_90[147456];
extern float32_t _cst_91[16384];
extern int32_t _cst_92[9];
extern float32_t _cst_93[131072];
extern float32_t _cst_94[131072];
extern float32_t _cst_95[1048576];
extern int32_t _cst_96[1];
extern float32_t _cst_97[524288];
extern float32_t _cst_98[8192];
extern int32_t _cst_99[8];
extern float32_t _cst_100[8192];
extern float32_t _cst_101[8192];
extern int32_t _cst_102[1];
extern float32_t _cst_103[73728];
extern float32_t _cst_104[8192];
extern int32_t _cst_105[9];
extern int32_t _cst_106[1];
extern float32_t _cst_107[1048576];
extern float32_t _cst_108[8192];
extern int32_t _cst_109[8];
extern float32_t _cst_110[8192];
extern float32_t _cst_111[8192];
extern int32_t _cst_112[1];
extern float32_t _cst_113[73728];
extern float32_t _cst_114[8192];
extern int32_t _cst_115[9];
extern float32_t _cst_116[65536];
extern float32_t _cst_117[1048576];
extern int32_t _cst_118[1];
extern float32_t _cst_119[524288];
extern float32_t _cst_120[4096];
extern int32_t _cst_121[8];
extern float32_t _cst_122[4096];
extern float32_t _cst_123[4096];
extern int32_t _cst_124[1];
extern float32_t _cst_125[36864];
extern float32_t _cst_126[4096];
extern int32_t _cst_127[9];
extern int32_t _cst_128[1];
extern float32_t _cst_129[1048576];
extern float32_t _cst_130[4096];
extern int32_t _cst_131[16];
extern float32_t _cst_132[4096];
extern float32_t _cst_133[4096];
extern int32_t _cst_134[1];
extern float32_t _cst_135[36864];
extern float32_t _cst_136[4096];
extern int32_t _cst_137[9];
extern int32_t _cst_138[1];
extern float32_t _cst_139[1048576];
extern float32_t _cst_140[4096];
extern int32_t _cst_141[16];
extern float32_t _cst_142[4096];
extern float32_t _cst_143[4096];
extern int32_t _cst_144[1];
extern float32_t _cst_145[36864];
extern float32_t _cst_146[4096];
extern int32_t _cst_147[9];
extern int32_t _cst_148[1];
extern float32_t _cst_149[1048576];
extern float32_t _cst_150[4096];
extern int32_t _cst_151[16];
extern float32_t _cst_152[4096];
extern float32_t _cst_153[4096];
extern int32_t _cst_154[1];
extern float32_t _cst_155[36864];
extern float32_t _cst_156[4096];
extern int32_t _cst_157[9];
extern int32_t _cst_158[1];
extern float32_t _cst_159[1048576];
extern float32_t _cst_160[4096];
extern int32_t _cst_161[16];
extern float32_t _cst_162[4096];
extern float32_t _cst_163[4096];
extern int32_t _cst_164[1];
extern float32_t _cst_165[36864];
extern float32_t _cst_166[4096];
extern int32_t _cst_167[9];
extern int32_t _cst_168[1];
extern float32_t _cst_169[1048576];
extern float32_t _cst_170[4096];
extern int32_t _cst_171[16];
extern float32_t _cst_172[4096];
extern float32_t _cst_173[4096];
extern int32_t _cst_174[1];
extern float32_t _cst_175[36864];
extern float32_t _cst_176[4096];
extern int32_t _cst_177[9];
extern float32_t _cst_178[8192];
extern float32_t _cst_179[1048576];
extern int32_t _cst_180[1];
extern float32_t _cst_181[524288];
extern float32_t _cst_182[2048];
extern int32_t _cst_183[16];
extern float32_t _cst_184[2048];
extern float32_t _cst_185[2048];
extern int32_t _cst_186[1];
extern float32_t _cst_187[18432];
extern float32_t _cst_188[2048];
extern int32_t _cst_189[9];
extern int32_t _cst_190[1];
extern float32_t _cst_191[2097152];
extern float32_t _cst_192[4096];
extern int32_t _cst_193[16];
extern float32_t _cst_194[4096];
extern float32_t _cst_195[4096];
extern float32_t _cst_196[4096];
extern float32_t _cst_197[4096];
extern float32_t _cst_198[4096];
extern float32_t _cst_199[262144];
extern int32_t _cst_200[1];
extern float32_t _cst_201[10400];
extern int32_t _cst_202[2];
extern float32_t _cst_203[10];
float32_t _cst_204 = -1;
float32_t _cst_205 = -1;
float64_t _cst_206 = -3.809199432496630510769;
float32_t _cst_207 = -3.809199432496630510769;
float64_t _cst_208 = 2.460940868770910228136;
float32_t _cst_209 = 2.460940868770910228136;
float64_t _cst_210 = -1.430304794543664215212;
float32_t _cst_211 = -1.430304794543664215212;
float64_t _cst_212 = 2.944661935353764636858;
float32_t _cst_213 = 2.944661935353764636858;
float32_t _cst_214 = -1;
float32_t _cst_215 = -1;
float32_t _cst_216 = -1;
float32_t _cst_217 = -1;
float64_t _cst_218 = -0.0001600280537250875771867;
float32_t _cst_219 = -0.0001600280537250875771867;
float64_t _cst_220 = 0.003032478474127557870749;
float32_t _cst_221 = 0.003032478474127557870749;
float64_t _cst_222 = 0.1365828361194337536855;
float32_t _cst_223 = 0.1365828361194337536855;
float64_t _cst_224 = -0.02219735858216702675816;
float64_t _cst_225 = 0.5685231134608953462717;
float32_t _cst_226 = 0.5685231134608953462717;
float64_t _cst_227 = -0.5558785316215136829143;
float64_t _cst_228 = 1.614771079042867985009;
float32_t _cst_229 = 1.614771079042867985009;
float64_t _cst_230 = -0.6164083583294512891371;
float32_t _cst_231 = -1;
float32_t _cst_232 = -1;
float32_t _cst_233 = -1;
float32_t _cst_234 = -1;
float64_t _cst_235 = 0.0001111119162030077897477;
float32_t _cst_236 = 0.0001111119162030077897477;
float64_t _cst_237 = 0.006507995190210730772351;
float32_t _cst_238 = 0.006507995190210730772351;
float64_t _cst_239 = -0.0009371069270347270278171;
float32_t _cst_240 = -0.0009371069270347270278171;
float64_t _cst_241 = 0.1056744718173614761003;
float32_t _cst_242 = 0.1056744718173614761003;
float64_t _cst_243 = -0.03691063940349948585551;
float32_t _cst_244 = -0.03691063940349948585551;
float64_t _cst_245 = 0.6334139843709288841822;
float32_t _cst_246 = 0.6334139843709288841822;
float64_t _cst_247 = -0.2078597158810965850329;
float32_t _cst_248 = -0.2078597158810965850329;
float32_t _cst_249 = 0.5;
CIPHERTEXT App_relu(CIPHERTEXT input_ct0, CIPHERTEXT input_ct1, uint32_t mask_len);
CIPHERTEXT Rotate(CIPHERTEXT ciph, int32_t rot_idx);
CIPHERTEXT Relinearize(CIPHERTEXT3 ciph);

bool Main_graph() {
  CIPHERTEXT input_0;
  CIPHERTEXT input_dup_n0_1;
  int32_t bs_input_n0_2;
  CIPHERTEXT input_block_n0_3[9];
  CIPHERTEXT result_n1_4;
  int32_t num_grid_n1_5;
  CIPHERTEXT result_grid_n1_6;
  int32_t cap_block_n1_7;
  CIPHERTEXT input_dup_n1_8;
  int32_t bs_input_n1_9;
  CIPHERTEXT input_block_n1_10[9];
  CIPHERTEXT result_n2_11;
  int32_t num_grid_n2_12;
  CIPHERTEXT result_grid_n2_13;
  int32_t cap_block_n2_14;
  CIPHERTEXT input_dup_n2_15;
  int32_t bs_input_n2_16;
  CIPHERTEXT input_block_n2_17[4];
  CIPHERTEXT result_n3_18;
  int32_t num_grid_n3_19;
  CIPHERTEXT result_grid_n3_20;
  int32_t cap_block_n3_21;
  CIPHERTEXT input_dup_n3_22;
  int32_t bs_input_n3_23;
  CIPHERTEXT input_block_n3_24[9];
  CIPHERTEXT result_n4_25;
  int32_t num_grid_n4_26;
  CIPHERTEXT result_grid_n4_27;
  int32_t cap_block_n4_28;
  CIPHERTEXT orig_result4_29;
  CIPHERTEXT comb_row_result5_30;
  int32_t comb_row_index_n5_31;
  CIPHERTEXT comb_rc_result5_32;
  int32_t comb_rc_index_n5_33;
  CIPHERTEXT ss_result5_34;
  int32_t comb_cc_index_n5_35;
  CIPHERTEXT input_dup_n5_36;
  int32_t bs_input_n5_37;
  CIPHERTEXT input_block_n5_38[4];
  CIPHERTEXT result_n6_39;
  int32_t num_grid_n6_40;
  CIPHERTEXT result_grid_n6_41;
  int32_t cap_block_n6_42;
  CIPHERTEXT input_dup_n6_43;
  int32_t bs_input_n6_44;
  CIPHERTEXT input_block_n6_45[9];
  CIPHERTEXT result_n7_46;
  int32_t num_grid_n7_47;
  CIPHERTEXT result_grid_n7_48;
  int32_t cap_block_n7_49;
  CIPHERTEXT input_dup_n7_50;
  int32_t bs_input_n7_51;
  CIPHERTEXT input_block_n7_52[8];
  CIPHERTEXT result_n8_53;
  int32_t num_grid_n8_54;
  CIPHERTEXT result_grid_n8_55;
  int32_t cap_block_n8_56;
  CIPHERTEXT input_dup_n8_57;
  int32_t bs_input_n8_58;
  CIPHERTEXT input_block_n8_59[9];
  CIPHERTEXT result_n9_60;
  int32_t num_grid_n9_61;
  CIPHERTEXT result_grid_n9_62;
  int32_t cap_block_n9_63;
  CIPHERTEXT orig_result9_64;
  CIPHERTEXT comb_row_result10_65;
  int32_t comb_row_index_n10_66;
  CIPHERTEXT comb_rc_result10_67;
  int32_t comb_rc_index_n10_68;
  CIPHERTEXT ss_result10_69;
  int32_t comb_cc_index_n10_70;
  CIPHERTEXT input_dup_n10_71;
  int32_t bs_input_n10_72;
  CIPHERTEXT input_block_n10_73[8];
  CIPHERTEXT result_n11_74;
  int32_t num_grid_n11_75;
  CIPHERTEXT result_grid_n11_76;
  int32_t cap_block_n11_77;
  CIPHERTEXT input_dup_n11_78;
  int32_t bs_input_n11_79;
  CIPHERTEXT input_block_n11_80[9];
  CIPHERTEXT result_n12_81;
  int32_t num_grid_n12_82;
  CIPHERTEXT result_grid_n12_83;
  int32_t cap_block_n12_84;
  CIPHERTEXT input_dup_n12_85;
  int32_t bs_input_n12_86;
  CIPHERTEXT input_block_n12_87[8];
  CIPHERTEXT result_n13_88;
  int32_t num_grid_n13_89;
  CIPHERTEXT result_grid_n13_90;
  int32_t cap_block_n13_91;
  CIPHERTEXT input_dup_n13_92;
  int32_t bs_input_n13_93;
  CIPHERTEXT input_block_n13_94[9];
  CIPHERTEXT result_n14_95;
  int32_t num_grid_n14_96;
  CIPHERTEXT result_grid_n14_97;
  int32_t cap_block_n14_98;
  CIPHERTEXT orig_result14_99;
  CIPHERTEXT comb_dic_result15_100;
  int32_t comb_dic_index_n15_101;
  int32_t comb_dic_index_out_n15_102;
  int32_t comb_dic_index_in_n15_103;
  CIPHERTEXT ss_result15_104;
  int32_t comb_cc_index_n15_105;
  CIPHERTEXT input_dup_n15_106;
  int32_t bs_input_n15_107;
  CIPHERTEXT input_block_n15_108[8];
  CIPHERTEXT result_n16_109;
  int32_t num_grid_n16_110;
  CIPHERTEXT result_grid_n16_111;
  int32_t cap_block_n16_112;
  CIPHERTEXT input_dup_n16_113;
  int32_t bs_input_n16_114;
  CIPHERTEXT input_block_n16_115[9];
  CIPHERTEXT result_n17_116;
  int32_t num_grid_n17_117;
  CIPHERTEXT result_grid_n17_118;
  int32_t cap_block_n17_119;
  CIPHERTEXT input_dup_n17_120;
  int32_t bs_input_n17_121;
  CIPHERTEXT input_block_n17_122[16];
  CIPHERTEXT result_n18_123;
  int32_t num_grid_n18_124;
  CIPHERTEXT result_grid_n18_125;
  int32_t cap_block_n18_126;
  CIPHERTEXT input_dup_n18_127;
  int32_t bs_input_n18_128;
  CIPHERTEXT input_block_n18_129[9];
  CIPHERTEXT result_n19_130;
  int32_t num_grid_n19_131;
  CIPHERTEXT result_grid_n19_132;
  int32_t cap_block_n19_133;
  CIPHERTEXT input_dup_n19_134;
  int32_t bs_input_n19_135;
  CIPHERTEXT input_block_n19_136[16];
  CIPHERTEXT result_n20_137;
  int32_t num_grid_n20_138;
  CIPHERTEXT result_grid_n20_139;
  int32_t cap_block_n20_140;
  CIPHERTEXT input_dup_n20_141;
  int32_t bs_input_n20_142;
  CIPHERTEXT input_block_n20_143[9];
  CIPHERTEXT result_n21_144;
  int32_t num_grid_n21_145;
  CIPHERTEXT result_grid_n21_146;
  int32_t cap_block_n21_147;
  CIPHERTEXT input_dup_n21_148;
  int32_t bs_input_n21_149;
  CIPHERTEXT input_block_n21_150[16];
  CIPHERTEXT result_n22_151;
  int32_t num_grid_n22_152;
  CIPHERTEXT result_grid_n22_153;
  int32_t cap_block_n22_154;
  CIPHERTEXT input_dup_n22_155;
  int32_t bs_input_n22_156;
  CIPHERTEXT input_block_n22_157[9];
  CIPHERTEXT result_n23_158;
  int32_t num_grid_n23_159;
  CIPHERTEXT result_grid_n23_160;
  int32_t cap_block_n23_161;
  CIPHERTEXT input_dup_n23_162;
  int32_t bs_input_n23_163;
  CIPHERTEXT input_block_n23_164[16];
  CIPHERTEXT result_n24_165;
  int32_t num_grid_n24_166;
  CIPHERTEXT result_grid_n24_167;
  int32_t cap_block_n24_168;
  CIPHERTEXT input_dup_n24_169;
  int32_t bs_input_n24_170;
  CIPHERTEXT input_block_n24_171[9];
  CIPHERTEXT result_n25_172;
  int32_t num_grid_n25_173;
  CIPHERTEXT result_grid_n25_174;
  int32_t cap_block_n25_175;
  CIPHERTEXT input_dup_n25_176;
  int32_t bs_input_n25_177;
  CIPHERTEXT input_block_n25_178[16];
  CIPHERTEXT result_n26_179;
  int32_t num_grid_n26_180;
  CIPHERTEXT result_grid_n26_181;
  int32_t cap_block_n26_182;
  CIPHERTEXT input_dup_n26_183;
  int32_t bs_input_n26_184;
  CIPHERTEXT input_block_n26_185[9];
  CIPHERTEXT result_n27_186;
  int32_t num_grid_n27_187;
  CIPHERTEXT result_grid_n27_188;
  int32_t cap_block_n27_189;
  CIPHERTEXT orig_result27_190;
  CIPHERTEXT comb_dic_result28_191;
  int32_t comb_dic_index_n28_192;
  int32_t comb_dic_index_out_n28_193;
  int32_t comb_dic_index_in_n28_194;
  CIPHERTEXT ss_result28_195;
  int32_t comb_cc_index_n28_196;
  CIPHERTEXT input_dup_n28_197;
  int32_t bs_input_n28_198;
  CIPHERTEXT input_block_n28_199[16];
  CIPHERTEXT result_n29_200;
  int32_t num_grid_n29_201;
  CIPHERTEXT result_grid_n29_202;
  int32_t cap_block_n29_203;
  CIPHERTEXT input_dup_n29_204;
  int32_t bs_input_n29_205;
  CIPHERTEXT input_block_n29_206[9];
  CIPHERTEXT result_n30_207;
  int32_t num_grid_n30_208;
  CIPHERTEXT result_grid_n30_209;
  int32_t cap_block_n30_210;
  CIPHERTEXT input_dup_n30_211;
  int32_t bs_input_n30_212;
  CIPHERTEXT input_block_n30_213[16];
  CIPHERTEXT result_n31_214;
  int32_t num_grid_n31_215;
  CIPHERTEXT result_grid_n31_216;
  int32_t cap_block_n31_217;
  CIPHERTEXT tmp_row_add31_218;
  CIPHERTEXT orig_result31_219;
  CIPHERTEXT ss_result32_220;
  int32_t comb_cc_lf_index1_n32_221;
  int32_t comb_cc_lf_index2_n32_222;
  int32_t comb_cc_index_n32_223;
  CIPHERTEXT input_dup_n32_224;
  int32_t bs_input_n32_225;
  CIPHERTEXT input_block_n32_226[2];
  CIPHERTEXT gemm_result_n33_227;
  int32_t gs_n33_228;
  CIPHERTEXT block_result_229;
  int32_t bs_n33_230;
  CIPHERTEXT reduce_intra_231;
  int32_t ri_n33_232;
  CIPHERTEXT output_233;
  CIPHERTEXT _ckks_gen_tmp_89_234;
  CIPHERTEXT _ckks_gen_tmp_220_235;
  CIPHERTEXT _ckks_gen_tmp_355_236;
  CIPHERTEXT _ckks_gen_tmp_486_237;
  CIPHERTEXT _ckks_gen_tmp_558_238;
  CIPHERTEXT _ckks_gen_tmp_591_239;
  CIPHERTEXT _ckks_gen_tmp_624_240;
  CIPHERTEXT _ckks_gen_tmp_728_241;
  CIPHERTEXT _ckks_gen_tmp_772_242;
  CIPHERTEXT _ckks_gen_tmp_875_243;
  CIPHERTEXT _ckks_gen_tmp_1000_244;
  CIPHERTEXT _ckks_gen_tmp_1044_245;
  CIPHERTEXT _ckks_gen_tmp_1147_246;
  CIPHERTEXT _ckks_gen_tmp_1209_247;
  CIPHERTEXT _ckks_gen_tmp_1242_248;
  CIPHERTEXT _ckks_gen_tmp_1275_249;
  CIPHERTEXT _ckks_gen_tmp_1379_250;
  CIPHERTEXT _ckks_gen_tmp_1423_251;
  CIPHERTEXT _ckks_gen_tmp_1526_252;
  CIPHERTEXT _ckks_gen_tmp_1651_253;
  CIPHERTEXT _ckks_gen_tmp_1695_254;
  CIPHERTEXT _ckks_gen_tmp_1798_255;
  CIPHERTEXT _ckks_gen_tmp_1892_256;
  CIPHERTEXT _ckks_gen_tmp_1929_257;
  CIPHERTEXT _ckks_gen_tmp_2033_258;
  CIPHERTEXT _ckks_gen_tmp_2077_259;
  CIPHERTEXT _ckks_gen_tmp_2180_260;
  CIPHERTEXT _ckks_gen_tmp_2305_261;
  CIPHERTEXT _ckks_gen_tmp_2349_262;
  CIPHERTEXT _ckks_gen_tmp_2452_263;
  CIPHERTEXT _ckks_gen_tmp_2577_264;
  CIPHERTEXT _ckks_gen_tmp_2621_265;
  CIPHERTEXT _ckks_gen_tmp_2724_266;
  CIPHERTEXT _ckks_gen_tmp_2849_267;
  CIPHERTEXT _ckks_gen_tmp_2893_268;
  CIPHERTEXT _ckks_gen_tmp_2996_269;
  CIPHERTEXT _ckks_gen_tmp_3121_270;
  CIPHERTEXT _ckks_gen_tmp_3165_271;
  CIPHERTEXT _ckks_gen_tmp_3268_272;
  CIPHERTEXT _ckks_gen_tmp_3393_273;
  CIPHERTEXT _ckks_gen_tmp_3437_274;
  CIPHERTEXT _ckks_gen_tmp_3540_275;
  CIPHERTEXT _ckks_gen_tmp_3634_276;
  CIPHERTEXT _ckks_gen_tmp_3671_277;
  CIPHERTEXT _ckks_gen_tmp_3775_278;
  CIPHERTEXT _ckks_gen_tmp_3819_279;
  CIPHERTEXT _ckks_gen_tmp_3922_280;
  CIPHERTEXT _ckks_gen_tmp_4051_281;
  CIPHERTEXT _ckks_gen_tmp_4095_282;
  CIPHERTEXT _ckks_gen_tmp_4159_283;
  CIPHERTEXT _ckks_gen_tmp_4250_284;
  CIPHERTEXT _ckks_gen_tmp_4342_285;
  MODULUS* _pgen_modulus_286;
  uint32_t _pgen_num_q_287;
  uint32_t _pgen_rns_idx_288;
  CIPHERTEXT _pgen_tmp_0_289;
  CIPHERTEXT _pgen_tmp_1_290;
  CIPHERTEXT _pgen_tmp_2_291;
  CIPHERTEXT _pgen_tmp_3_292;
  CIPHERTEXT _pgen_tmp_4_293;
  CIPHERTEXT _pgen_tmp_5_294;
  PLAINTEXT _pgen_tmp_6_295;
  CIPHERTEXT _pgen_tmp_7_296;
  CIPHERTEXT _pgen_tmp_8_297;
  PLAINTEXT _pgen_tmp_9_298;
  PLAINTEXT _pgen_tmp_10_299;
  PLAINTEXT _pgen_tmp_11_300;
  CIPHERTEXT _pgen_tmp_12_301;
  CIPHERTEXT _pgen_tmp_13_302;
  PLAINTEXT _pgen_tmp_14_303;
  PLAINTEXT _pgen_tmp_15_304;
  PLAINTEXT _pgen_tmp_16_305;
  CIPHERTEXT _pgen_tmp_17_306;
  CIPHERTEXT _pgen_tmp_18_307;
  PLAINTEXT _pgen_tmp_19_308;
  PLAINTEXT _pgen_tmp_20_309;
  PLAINTEXT _pgen_tmp_21_310;
  CIPHERTEXT _pgen_tmp_22_311;
  CIPHERTEXT _pgen_tmp_23_312;
  PLAINTEXT _pgen_tmp_24_313;
  PLAINTEXT _pgen_tmp_25_314;
  PLAINTEXT _pgen_tmp_26_315;
  CIPHERTEXT _pgen_tmp_27_316;
  PLAINTEXT _pgen_tmp_28_317;
  CIPHERTEXT _pgen_tmp_29_318;
  PLAINTEXT _pgen_tmp_30_319;
  CIPHERTEXT _pgen_tmp_31_320;
  CIPHERTEXT _pgen_tmp_32_321;
  PLAINTEXT _pgen_tmp_33_322;
  CIPHERTEXT _pgen_tmp_34_323;
  CIPHERTEXT _pgen_tmp_35_324;
  PLAINTEXT _pgen_tmp_36_325;
  CIPHERTEXT _pgen_tmp_37_326;
  PLAINTEXT _pgen_tmp_38_327;
  CIPHERTEXT _pgen_tmp_39_328;
  PLAINTEXT _pgen_tmp_40_329;
  PLAINTEXT _pgen_tmp_41_330;
  CIPHERTEXT _pgen_tmp_42_331;
  PLAINTEXT _pgen_tmp_43_332;
  PLAINTEXT _pgen_tmp_44_333;
  CIPHERTEXT _pgen_tmp_45_334;
  CIPHERTEXT _pgen_tmp_46_335;
  PLAINTEXT _pgen_tmp_47_336;
  CIPHERTEXT _pgen_tmp_48_337;
  PLAINTEXT _pgen_tmp_49_338;
  CIPHERTEXT _pgen_tmp_50_339;
  PLAINTEXT _pgen_tmp_51_340;
  PLAINTEXT _pgen_tmp_52_341;
  CIPHERTEXT _pgen_tmp_53_342;
  PLAINTEXT _pgen_tmp_54_343;
  PLAINTEXT _pgen_tmp_55_344;
  CIPHERTEXT _pgen_tmp_56_345;
  PLAINTEXT _pgen_tmp_57_346;
  CIPHERTEXT _pgen_tmp_58_347;
  PLAINTEXT _pgen_tmp_59_348;
  CIPHERTEXT _pgen_tmp_60_349;
  CIPHERTEXT _pgen_tmp_61_350;
  PLAINTEXT _pgen_tmp_62_351;
  CIPHERTEXT _pgen_tmp_63_352;
  CIPHERTEXT _pgen_tmp_64_353;
  PLAINTEXT _pgen_tmp_65_354;
  CIPHERTEXT _pgen_tmp_66_355;
  PLAINTEXT _pgen_tmp_67_356;
  CIPHERTEXT _pgen_tmp_68_357;
  PLAINTEXT _pgen_tmp_69_358;
  PLAINTEXT _pgen_tmp_70_359;
  CIPHERTEXT _pgen_tmp_71_360;
  PLAINTEXT _pgen_tmp_72_361;
  PLAINTEXT _pgen_tmp_73_362;
  CIPHERTEXT _pgen_tmp_74_363;
  CIPHERTEXT _pgen_tmp_75_364;
  PLAINTEXT _pgen_tmp_76_365;
  CIPHERTEXT _pgen_tmp_77_366;
  PLAINTEXT _pgen_tmp_78_367;
  CIPHERTEXT _pgen_tmp_79_368;
  PLAINTEXT _pgen_tmp_80_369;
  PLAINTEXT _pgen_tmp_81_370;
  CIPHERTEXT _pgen_tmp_82_371;
  PLAINTEXT _pgen_tmp_83_372;
  PLAINTEXT _pgen_tmp_84_373;
  CIPHERTEXT _pgen_tmp_85_374;
  PLAINTEXT _pgen_tmp_86_375;
  CIPHERTEXT _pgen_tmp_87_376;
  CIPHERTEXT _pgen_tmp_88_377;
  PLAINTEXT _pgen_tmp_89_378;
  CIPHERTEXT _pgen_tmp_90_379;
  CIPHERTEXT _pgen_tmp_91_380;
  PLAINTEXT _pgen_tmp_92_381;
  CIPHERTEXT _pgen_tmp_93_382;
  PLAINTEXT _pgen_tmp_94_383;
  CIPHERTEXT _pgen_tmp_95_384;
  PLAINTEXT _pgen_tmp_96_385;
  PLAINTEXT _pgen_tmp_97_386;
  CIPHERTEXT _pgen_tmp_98_387;
  PLAINTEXT _pgen_tmp_99_388;
  PLAINTEXT _pgen_tmp_100_389;
  CIPHERTEXT _pgen_tmp_101_390;
  CIPHERTEXT _pgen_tmp_102_391;
  PLAINTEXT _pgen_tmp_103_392;
  CIPHERTEXT _pgen_tmp_104_393;
  PLAINTEXT _pgen_tmp_105_394;
  CIPHERTEXT _pgen_tmp_106_395;
  PLAINTEXT _pgen_tmp_107_396;
  PLAINTEXT _pgen_tmp_108_397;
  CIPHERTEXT _pgen_tmp_109_398;
  PLAINTEXT _pgen_tmp_110_399;
  PLAINTEXT _pgen_tmp_111_400;
  CIPHERTEXT _pgen_tmp_112_401;
  CIPHERTEXT _pgen_tmp_113_402;
  PLAINTEXT _pgen_tmp_114_403;
  CIPHERTEXT _pgen_tmp_115_404;
  PLAINTEXT _pgen_tmp_116_405;
  CIPHERTEXT _pgen_tmp_117_406;
  PLAINTEXT _pgen_tmp_118_407;
  PLAINTEXT _pgen_tmp_119_408;
  CIPHERTEXT _pgen_tmp_120_409;
  PLAINTEXT _pgen_tmp_121_410;
  PLAINTEXT _pgen_tmp_122_411;
  CIPHERTEXT _pgen_tmp_123_412;
  CIPHERTEXT _pgen_tmp_124_413;
  PLAINTEXT _pgen_tmp_125_414;
  CIPHERTEXT _pgen_tmp_126_415;
  PLAINTEXT _pgen_tmp_127_416;
  CIPHERTEXT _pgen_tmp_128_417;
  PLAINTEXT _pgen_tmp_129_418;
  PLAINTEXT _pgen_tmp_130_419;
  CIPHERTEXT _pgen_tmp_131_420;
  PLAINTEXT _pgen_tmp_132_421;
  PLAINTEXT _pgen_tmp_133_422;
  CIPHERTEXT _pgen_tmp_134_423;
  CIPHERTEXT _pgen_tmp_135_424;
  PLAINTEXT _pgen_tmp_136_425;
  CIPHERTEXT _pgen_tmp_137_426;
  PLAINTEXT _pgen_tmp_138_427;
  CIPHERTEXT _pgen_tmp_139_428;
  PLAINTEXT _pgen_tmp_140_429;
  PLAINTEXT _pgen_tmp_141_430;
  CIPHERTEXT _pgen_tmp_142_431;
  PLAINTEXT _pgen_tmp_143_432;
  PLAINTEXT _pgen_tmp_144_433;
  CIPHERTEXT _pgen_tmp_145_434;
  CIPHERTEXT _pgen_tmp_146_435;
  PLAINTEXT _pgen_tmp_147_436;
  CIPHERTEXT _pgen_tmp_148_437;
  PLAINTEXT _pgen_tmp_149_438;
  CIPHERTEXT _pgen_tmp_150_439;
  PLAINTEXT _pgen_tmp_151_440;
  PLAINTEXT _pgen_tmp_152_441;
  CIPHERTEXT _pgen_tmp_153_442;
  PLAINTEXT _pgen_tmp_154_443;
  PLAINTEXT _pgen_tmp_155_444;
  CIPHERTEXT _pgen_tmp_156_445;
  PLAINTEXT _pgen_tmp_157_446;
  CIPHERTEXT _pgen_tmp_158_447;
  CIPHERTEXT _pgen_tmp_159_448;
  PLAINTEXT _pgen_tmp_160_449;
  CIPHERTEXT _pgen_tmp_161_450;
  CIPHERTEXT _pgen_tmp_162_451;
  PLAINTEXT _pgen_tmp_163_452;
  CIPHERTEXT _pgen_tmp_164_453;
  PLAINTEXT _pgen_tmp_165_454;
  CIPHERTEXT _pgen_tmp_166_455;
  PLAINTEXT _pgen_tmp_167_456;
  PLAINTEXT _pgen_tmp_168_457;
  CIPHERTEXT _pgen_tmp_169_458;
  PLAINTEXT _pgen_tmp_170_459;
  CIPHERTEXT _pgen_tmp_171_460;
  PLAINTEXT _pgen_tmp_172_461;
  CIPHERTEXT _pgen_tmp_173_462;
  CIPHERTEXT _pgen_tmp_174_463;
  PLAINTEXT _pgen_tmp_175_464;
  CIPHERTEXT _pgen_tmp_176_465;
  PLAINTEXT _pgen_tmp_177_466;
  CIPHERTEXT _pgen_tmp_178_467;
  PLAINTEXT _pgen_tmp_179_468;
  CIPHERTEXT _pgen_tmp_180_469;
  PLAINTEXT _pgen_tmp_181_470;
  CIPHERTEXT _pgen_tmp_182_471;
  PLAINTEXT _pgen_tmp_183_472;
  CIPHERTEXT _pgen_tmp_184_473;
  PLAINTEXT _pgen_tmp_185_474;
  PLAINTEXT _pgen_tmp_186_475;
  CIPHERTEXT _pgen_tmp_187_476;
  PLAINTEXT _pgen_tmp_188_477;
  CIPHERTEXT _pgen_tmp_189_478;
  PLAINTEXT _pgen_tmp_190_479;
  CIPHERTEXT _pgen_tmp_191_480;
  PLAINTEXT _pgen_tmp_192_481;
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
  uint32_t  degree = Degree();
  input_0 = Get_input_data("input", 0);
  memset(&input_dup_n0_1, 0, sizeof(input_dup_n0_1));
  memset(&input_block_n0_3, 0, sizeof(input_block_n0_3));
  memset(&result_n1_4, 0, sizeof(result_n1_4));
  memset(&result_grid_n1_6, 0, sizeof(result_grid_n1_6));
  memset(&input_dup_n1_8, 0, sizeof(input_dup_n1_8));
  memset(&input_block_n1_10, 0, sizeof(input_block_n1_10));
  memset(&result_n2_11, 0, sizeof(result_n2_11));
  memset(&result_grid_n2_13, 0, sizeof(result_grid_n2_13));
  memset(&input_dup_n2_15, 0, sizeof(input_dup_n2_15));
  memset(&input_block_n2_17, 0, sizeof(input_block_n2_17));
  memset(&result_n3_18, 0, sizeof(result_n3_18));
  memset(&result_grid_n3_20, 0, sizeof(result_grid_n3_20));
  memset(&input_dup_n3_22, 0, sizeof(input_dup_n3_22));
  memset(&input_block_n3_24, 0, sizeof(input_block_n3_24));
  memset(&result_n4_25, 0, sizeof(result_n4_25));
  memset(&result_grid_n4_27, 0, sizeof(result_grid_n4_27));
  memset(&orig_result4_29, 0, sizeof(orig_result4_29));
  memset(&comb_row_result5_30, 0, sizeof(comb_row_result5_30));
  memset(&comb_rc_result5_32, 0, sizeof(comb_rc_result5_32));
  memset(&ss_result5_34, 0, sizeof(ss_result5_34));
  memset(&input_dup_n5_36, 0, sizeof(input_dup_n5_36));
  memset(&input_block_n5_38, 0, sizeof(input_block_n5_38));
  memset(&result_n6_39, 0, sizeof(result_n6_39));
  memset(&result_grid_n6_41, 0, sizeof(result_grid_n6_41));
  memset(&input_dup_n6_43, 0, sizeof(input_dup_n6_43));
  memset(&input_block_n6_45, 0, sizeof(input_block_n6_45));
  memset(&result_n7_46, 0, sizeof(result_n7_46));
  memset(&result_grid_n7_48, 0, sizeof(result_grid_n7_48));
  memset(&input_dup_n7_50, 0, sizeof(input_dup_n7_50));
  memset(&input_block_n7_52, 0, sizeof(input_block_n7_52));
  memset(&result_n8_53, 0, sizeof(result_n8_53));
  memset(&result_grid_n8_55, 0, sizeof(result_grid_n8_55));
  memset(&input_dup_n8_57, 0, sizeof(input_dup_n8_57));
  memset(&input_block_n8_59, 0, sizeof(input_block_n8_59));
  memset(&result_n9_60, 0, sizeof(result_n9_60));
  memset(&result_grid_n9_62, 0, sizeof(result_grid_n9_62));
  memset(&orig_result9_64, 0, sizeof(orig_result9_64));
  memset(&comb_row_result10_65, 0, sizeof(comb_row_result10_65));
  memset(&comb_rc_result10_67, 0, sizeof(comb_rc_result10_67));
  memset(&ss_result10_69, 0, sizeof(ss_result10_69));
  memset(&input_dup_n10_71, 0, sizeof(input_dup_n10_71));
  memset(&input_block_n10_73, 0, sizeof(input_block_n10_73));
  memset(&result_n11_74, 0, sizeof(result_n11_74));
  memset(&result_grid_n11_76, 0, sizeof(result_grid_n11_76));
  memset(&input_dup_n11_78, 0, sizeof(input_dup_n11_78));
  memset(&input_block_n11_80, 0, sizeof(input_block_n11_80));
  memset(&result_n12_81, 0, sizeof(result_n12_81));
  memset(&result_grid_n12_83, 0, sizeof(result_grid_n12_83));
  memset(&input_dup_n12_85, 0, sizeof(input_dup_n12_85));
  memset(&input_block_n12_87, 0, sizeof(input_block_n12_87));
  memset(&result_n13_88, 0, sizeof(result_n13_88));
  memset(&result_grid_n13_90, 0, sizeof(result_grid_n13_90));
  memset(&input_dup_n13_92, 0, sizeof(input_dup_n13_92));
  memset(&input_block_n13_94, 0, sizeof(input_block_n13_94));
  memset(&result_n14_95, 0, sizeof(result_n14_95));
  memset(&result_grid_n14_97, 0, sizeof(result_grid_n14_97));
  memset(&orig_result14_99, 0, sizeof(orig_result14_99));
  memset(&comb_dic_result15_100, 0, sizeof(comb_dic_result15_100));
  memset(&ss_result15_104, 0, sizeof(ss_result15_104));
  memset(&input_dup_n15_106, 0, sizeof(input_dup_n15_106));
  memset(&input_block_n15_108, 0, sizeof(input_block_n15_108));
  memset(&result_n16_109, 0, sizeof(result_n16_109));
  memset(&result_grid_n16_111, 0, sizeof(result_grid_n16_111));
  memset(&input_dup_n16_113, 0, sizeof(input_dup_n16_113));
  memset(&input_block_n16_115, 0, sizeof(input_block_n16_115));
  memset(&result_n17_116, 0, sizeof(result_n17_116));
  memset(&result_grid_n17_118, 0, sizeof(result_grid_n17_118));
  memset(&input_dup_n17_120, 0, sizeof(input_dup_n17_120));
  memset(&input_block_n17_122, 0, sizeof(input_block_n17_122));
  memset(&result_n18_123, 0, sizeof(result_n18_123));
  memset(&result_grid_n18_125, 0, sizeof(result_grid_n18_125));
  memset(&input_dup_n18_127, 0, sizeof(input_dup_n18_127));
  memset(&input_block_n18_129, 0, sizeof(input_block_n18_129));
  memset(&result_n19_130, 0, sizeof(result_n19_130));
  memset(&result_grid_n19_132, 0, sizeof(result_grid_n19_132));
  memset(&input_dup_n19_134, 0, sizeof(input_dup_n19_134));
  memset(&input_block_n19_136, 0, sizeof(input_block_n19_136));
  memset(&result_n20_137, 0, sizeof(result_n20_137));
  memset(&result_grid_n20_139, 0, sizeof(result_grid_n20_139));
  memset(&input_dup_n20_141, 0, sizeof(input_dup_n20_141));
  memset(&input_block_n20_143, 0, sizeof(input_block_n20_143));
  memset(&result_n21_144, 0, sizeof(result_n21_144));
  memset(&result_grid_n21_146, 0, sizeof(result_grid_n21_146));
  memset(&input_dup_n21_148, 0, sizeof(input_dup_n21_148));
  memset(&input_block_n21_150, 0, sizeof(input_block_n21_150));
  memset(&result_n22_151, 0, sizeof(result_n22_151));
  memset(&result_grid_n22_153, 0, sizeof(result_grid_n22_153));
  memset(&input_dup_n22_155, 0, sizeof(input_dup_n22_155));
  memset(&input_block_n22_157, 0, sizeof(input_block_n22_157));
  memset(&result_n23_158, 0, sizeof(result_n23_158));
  memset(&result_grid_n23_160, 0, sizeof(result_grid_n23_160));
  memset(&input_dup_n23_162, 0, sizeof(input_dup_n23_162));
  memset(&input_block_n23_164, 0, sizeof(input_block_n23_164));
  memset(&result_n24_165, 0, sizeof(result_n24_165));
  memset(&result_grid_n24_167, 0, sizeof(result_grid_n24_167));
  memset(&input_dup_n24_169, 0, sizeof(input_dup_n24_169));
  memset(&input_block_n24_171, 0, sizeof(input_block_n24_171));
  memset(&result_n25_172, 0, sizeof(result_n25_172));
  memset(&result_grid_n25_174, 0, sizeof(result_grid_n25_174));
  memset(&input_dup_n25_176, 0, sizeof(input_dup_n25_176));
  memset(&input_block_n25_178, 0, sizeof(input_block_n25_178));
  memset(&result_n26_179, 0, sizeof(result_n26_179));
  memset(&result_grid_n26_181, 0, sizeof(result_grid_n26_181));
  memset(&input_dup_n26_183, 0, sizeof(input_dup_n26_183));
  memset(&input_block_n26_185, 0, sizeof(input_block_n26_185));
  memset(&result_n27_186, 0, sizeof(result_n27_186));
  memset(&result_grid_n27_188, 0, sizeof(result_grid_n27_188));
  memset(&orig_result27_190, 0, sizeof(orig_result27_190));
  memset(&comb_dic_result28_191, 0, sizeof(comb_dic_result28_191));
  memset(&ss_result28_195, 0, sizeof(ss_result28_195));
  memset(&input_dup_n28_197, 0, sizeof(input_dup_n28_197));
  memset(&input_block_n28_199, 0, sizeof(input_block_n28_199));
  memset(&result_n29_200, 0, sizeof(result_n29_200));
  memset(&result_grid_n29_202, 0, sizeof(result_grid_n29_202));
  memset(&input_dup_n29_204, 0, sizeof(input_dup_n29_204));
  memset(&input_block_n29_206, 0, sizeof(input_block_n29_206));
  memset(&result_n30_207, 0, sizeof(result_n30_207));
  memset(&result_grid_n30_209, 0, sizeof(result_grid_n30_209));
  memset(&input_dup_n30_211, 0, sizeof(input_dup_n30_211));
  memset(&input_block_n30_213, 0, sizeof(input_block_n30_213));
  memset(&result_n31_214, 0, sizeof(result_n31_214));
  memset(&result_grid_n31_216, 0, sizeof(result_grid_n31_216));
  memset(&tmp_row_add31_218, 0, sizeof(tmp_row_add31_218));
  memset(&orig_result31_219, 0, sizeof(orig_result31_219));
  memset(&ss_result32_220, 0, sizeof(ss_result32_220));
  memset(&input_dup_n32_224, 0, sizeof(input_dup_n32_224));
  memset(&input_block_n32_226, 0, sizeof(input_block_n32_226));
  memset(&gemm_result_n33_227, 0, sizeof(gemm_result_n33_227));
  memset(&block_result_229, 0, sizeof(block_result_229));
  memset(&reduce_intra_231, 0, sizeof(reduce_intra_231));
  memset(&output_233, 0, sizeof(output_233));
  memset(&_ckks_gen_tmp_89_234, 0, sizeof(_ckks_gen_tmp_89_234));
  memset(&_ckks_gen_tmp_220_235, 0, sizeof(_ckks_gen_tmp_220_235));
  memset(&_ckks_gen_tmp_355_236, 0, sizeof(_ckks_gen_tmp_355_236));
  memset(&_ckks_gen_tmp_486_237, 0, sizeof(_ckks_gen_tmp_486_237));
  memset(&_ckks_gen_tmp_558_238, 0, sizeof(_ckks_gen_tmp_558_238));
  memset(&_ckks_gen_tmp_591_239, 0, sizeof(_ckks_gen_tmp_591_239));
  memset(&_ckks_gen_tmp_624_240, 0, sizeof(_ckks_gen_tmp_624_240));
  memset(&_ckks_gen_tmp_728_241, 0, sizeof(_ckks_gen_tmp_728_241));
  memset(&_ckks_gen_tmp_772_242, 0, sizeof(_ckks_gen_tmp_772_242));
  memset(&_ckks_gen_tmp_875_243, 0, sizeof(_ckks_gen_tmp_875_243));
  memset(&_ckks_gen_tmp_1000_244, 0, sizeof(_ckks_gen_tmp_1000_244));
  memset(&_ckks_gen_tmp_1044_245, 0, sizeof(_ckks_gen_tmp_1044_245));
  memset(&_ckks_gen_tmp_1147_246, 0, sizeof(_ckks_gen_tmp_1147_246));
  memset(&_ckks_gen_tmp_1209_247, 0, sizeof(_ckks_gen_tmp_1209_247));
  memset(&_ckks_gen_tmp_1242_248, 0, sizeof(_ckks_gen_tmp_1242_248));
  memset(&_ckks_gen_tmp_1275_249, 0, sizeof(_ckks_gen_tmp_1275_249));
  memset(&_ckks_gen_tmp_1379_250, 0, sizeof(_ckks_gen_tmp_1379_250));
  memset(&_ckks_gen_tmp_1423_251, 0, sizeof(_ckks_gen_tmp_1423_251));
  memset(&_ckks_gen_tmp_1526_252, 0, sizeof(_ckks_gen_tmp_1526_252));
  memset(&_ckks_gen_tmp_1651_253, 0, sizeof(_ckks_gen_tmp_1651_253));
  memset(&_ckks_gen_tmp_1695_254, 0, sizeof(_ckks_gen_tmp_1695_254));
  memset(&_ckks_gen_tmp_1798_255, 0, sizeof(_ckks_gen_tmp_1798_255));
  memset(&_ckks_gen_tmp_1892_256, 0, sizeof(_ckks_gen_tmp_1892_256));
  memset(&_ckks_gen_tmp_1929_257, 0, sizeof(_ckks_gen_tmp_1929_257));
  memset(&_ckks_gen_tmp_2033_258, 0, sizeof(_ckks_gen_tmp_2033_258));
  memset(&_ckks_gen_tmp_2077_259, 0, sizeof(_ckks_gen_tmp_2077_259));
  memset(&_ckks_gen_tmp_2180_260, 0, sizeof(_ckks_gen_tmp_2180_260));
  memset(&_ckks_gen_tmp_2305_261, 0, sizeof(_ckks_gen_tmp_2305_261));
  memset(&_ckks_gen_tmp_2349_262, 0, sizeof(_ckks_gen_tmp_2349_262));
  memset(&_ckks_gen_tmp_2452_263, 0, sizeof(_ckks_gen_tmp_2452_263));
  memset(&_ckks_gen_tmp_2577_264, 0, sizeof(_ckks_gen_tmp_2577_264));
  memset(&_ckks_gen_tmp_2621_265, 0, sizeof(_ckks_gen_tmp_2621_265));
  memset(&_ckks_gen_tmp_2724_266, 0, sizeof(_ckks_gen_tmp_2724_266));
  memset(&_ckks_gen_tmp_2849_267, 0, sizeof(_ckks_gen_tmp_2849_267));
  memset(&_ckks_gen_tmp_2893_268, 0, sizeof(_ckks_gen_tmp_2893_268));
  memset(&_ckks_gen_tmp_2996_269, 0, sizeof(_ckks_gen_tmp_2996_269));
  memset(&_ckks_gen_tmp_3121_270, 0, sizeof(_ckks_gen_tmp_3121_270));
  memset(&_ckks_gen_tmp_3165_271, 0, sizeof(_ckks_gen_tmp_3165_271));
  memset(&_ckks_gen_tmp_3268_272, 0, sizeof(_ckks_gen_tmp_3268_272));
  memset(&_ckks_gen_tmp_3393_273, 0, sizeof(_ckks_gen_tmp_3393_273));
  memset(&_ckks_gen_tmp_3437_274, 0, sizeof(_ckks_gen_tmp_3437_274));
  memset(&_ckks_gen_tmp_3540_275, 0, sizeof(_ckks_gen_tmp_3540_275));
  memset(&_ckks_gen_tmp_3634_276, 0, sizeof(_ckks_gen_tmp_3634_276));
  memset(&_ckks_gen_tmp_3671_277, 0, sizeof(_ckks_gen_tmp_3671_277));
  memset(&_ckks_gen_tmp_3775_278, 0, sizeof(_ckks_gen_tmp_3775_278));
  memset(&_ckks_gen_tmp_3819_279, 0, sizeof(_ckks_gen_tmp_3819_279));
  memset(&_ckks_gen_tmp_3922_280, 0, sizeof(_ckks_gen_tmp_3922_280));
  memset(&_ckks_gen_tmp_4051_281, 0, sizeof(_ckks_gen_tmp_4051_281));
  memset(&_ckks_gen_tmp_4095_282, 0, sizeof(_ckks_gen_tmp_4095_282));
  memset(&_ckks_gen_tmp_4159_283, 0, sizeof(_ckks_gen_tmp_4159_283));
  memset(&_ckks_gen_tmp_4250_284, 0, sizeof(_ckks_gen_tmp_4250_284));
  memset(&_ckks_gen_tmp_4342_285, 0, sizeof(_ckks_gen_tmp_4342_285));
  memset(&_pgen_tmp_0_289, 0, sizeof(_pgen_tmp_0_289));
  memset(&_pgen_tmp_1_290, 0, sizeof(_pgen_tmp_1_290));
  memset(&_pgen_tmp_2_291, 0, sizeof(_pgen_tmp_2_291));
  memset(&_pgen_tmp_3_292, 0, sizeof(_pgen_tmp_3_292));
  memset(&_pgen_tmp_4_293, 0, sizeof(_pgen_tmp_4_293));
  memset(&_pgen_tmp_5_294, 0, sizeof(_pgen_tmp_5_294));
  memset(&_pgen_tmp_6_295, 0, sizeof(_pgen_tmp_6_295));
  memset(&_pgen_tmp_7_296, 0, sizeof(_pgen_tmp_7_296));
  memset(&_pgen_tmp_8_297, 0, sizeof(_pgen_tmp_8_297));
  memset(&_pgen_tmp_9_298, 0, sizeof(_pgen_tmp_9_298));
  memset(&_pgen_tmp_10_299, 0, sizeof(_pgen_tmp_10_299));
  memset(&_pgen_tmp_11_300, 0, sizeof(_pgen_tmp_11_300));
  memset(&_pgen_tmp_12_301, 0, sizeof(_pgen_tmp_12_301));
  memset(&_pgen_tmp_13_302, 0, sizeof(_pgen_tmp_13_302));
  memset(&_pgen_tmp_14_303, 0, sizeof(_pgen_tmp_14_303));
  memset(&_pgen_tmp_15_304, 0, sizeof(_pgen_tmp_15_304));
  memset(&_pgen_tmp_16_305, 0, sizeof(_pgen_tmp_16_305));
  memset(&_pgen_tmp_17_306, 0, sizeof(_pgen_tmp_17_306));
  memset(&_pgen_tmp_18_307, 0, sizeof(_pgen_tmp_18_307));
  memset(&_pgen_tmp_19_308, 0, sizeof(_pgen_tmp_19_308));
  memset(&_pgen_tmp_20_309, 0, sizeof(_pgen_tmp_20_309));
  memset(&_pgen_tmp_21_310, 0, sizeof(_pgen_tmp_21_310));
  memset(&_pgen_tmp_22_311, 0, sizeof(_pgen_tmp_22_311));
  memset(&_pgen_tmp_23_312, 0, sizeof(_pgen_tmp_23_312));
  memset(&_pgen_tmp_24_313, 0, sizeof(_pgen_tmp_24_313));
  memset(&_pgen_tmp_25_314, 0, sizeof(_pgen_tmp_25_314));
  memset(&_pgen_tmp_26_315, 0, sizeof(_pgen_tmp_26_315));
  memset(&_pgen_tmp_27_316, 0, sizeof(_pgen_tmp_27_316));
  memset(&_pgen_tmp_28_317, 0, sizeof(_pgen_tmp_28_317));
  memset(&_pgen_tmp_29_318, 0, sizeof(_pgen_tmp_29_318));
  memset(&_pgen_tmp_30_319, 0, sizeof(_pgen_tmp_30_319));
  memset(&_pgen_tmp_31_320, 0, sizeof(_pgen_tmp_31_320));
  memset(&_pgen_tmp_32_321, 0, sizeof(_pgen_tmp_32_321));
  memset(&_pgen_tmp_33_322, 0, sizeof(_pgen_tmp_33_322));
  memset(&_pgen_tmp_34_323, 0, sizeof(_pgen_tmp_34_323));
  memset(&_pgen_tmp_35_324, 0, sizeof(_pgen_tmp_35_324));
  memset(&_pgen_tmp_36_325, 0, sizeof(_pgen_tmp_36_325));
  memset(&_pgen_tmp_37_326, 0, sizeof(_pgen_tmp_37_326));
  memset(&_pgen_tmp_38_327, 0, sizeof(_pgen_tmp_38_327));
  memset(&_pgen_tmp_39_328, 0, sizeof(_pgen_tmp_39_328));
  memset(&_pgen_tmp_40_329, 0, sizeof(_pgen_tmp_40_329));
  memset(&_pgen_tmp_41_330, 0, sizeof(_pgen_tmp_41_330));
  memset(&_pgen_tmp_42_331, 0, sizeof(_pgen_tmp_42_331));
  memset(&_pgen_tmp_43_332, 0, sizeof(_pgen_tmp_43_332));
  memset(&_pgen_tmp_44_333, 0, sizeof(_pgen_tmp_44_333));
  memset(&_pgen_tmp_45_334, 0, sizeof(_pgen_tmp_45_334));
  memset(&_pgen_tmp_46_335, 0, sizeof(_pgen_tmp_46_335));
  memset(&_pgen_tmp_47_336, 0, sizeof(_pgen_tmp_47_336));
  memset(&_pgen_tmp_48_337, 0, sizeof(_pgen_tmp_48_337));
  memset(&_pgen_tmp_49_338, 0, sizeof(_pgen_tmp_49_338));
  memset(&_pgen_tmp_50_339, 0, sizeof(_pgen_tmp_50_339));
  memset(&_pgen_tmp_51_340, 0, sizeof(_pgen_tmp_51_340));
  memset(&_pgen_tmp_52_341, 0, sizeof(_pgen_tmp_52_341));
  memset(&_pgen_tmp_53_342, 0, sizeof(_pgen_tmp_53_342));
  memset(&_pgen_tmp_54_343, 0, sizeof(_pgen_tmp_54_343));
  memset(&_pgen_tmp_55_344, 0, sizeof(_pgen_tmp_55_344));
  memset(&_pgen_tmp_56_345, 0, sizeof(_pgen_tmp_56_345));
  memset(&_pgen_tmp_57_346, 0, sizeof(_pgen_tmp_57_346));
  memset(&_pgen_tmp_58_347, 0, sizeof(_pgen_tmp_58_347));
  memset(&_pgen_tmp_59_348, 0, sizeof(_pgen_tmp_59_348));
  memset(&_pgen_tmp_60_349, 0, sizeof(_pgen_tmp_60_349));
  memset(&_pgen_tmp_61_350, 0, sizeof(_pgen_tmp_61_350));
  memset(&_pgen_tmp_62_351, 0, sizeof(_pgen_tmp_62_351));
  memset(&_pgen_tmp_63_352, 0, sizeof(_pgen_tmp_63_352));
  memset(&_pgen_tmp_64_353, 0, sizeof(_pgen_tmp_64_353));
  memset(&_pgen_tmp_65_354, 0, sizeof(_pgen_tmp_65_354));
  memset(&_pgen_tmp_66_355, 0, sizeof(_pgen_tmp_66_355));
  memset(&_pgen_tmp_67_356, 0, sizeof(_pgen_tmp_67_356));
  memset(&_pgen_tmp_68_357, 0, sizeof(_pgen_tmp_68_357));
  memset(&_pgen_tmp_69_358, 0, sizeof(_pgen_tmp_69_358));
  memset(&_pgen_tmp_70_359, 0, sizeof(_pgen_tmp_70_359));
  memset(&_pgen_tmp_71_360, 0, sizeof(_pgen_tmp_71_360));
  memset(&_pgen_tmp_72_361, 0, sizeof(_pgen_tmp_72_361));
  memset(&_pgen_tmp_73_362, 0, sizeof(_pgen_tmp_73_362));
  memset(&_pgen_tmp_74_363, 0, sizeof(_pgen_tmp_74_363));
  memset(&_pgen_tmp_75_364, 0, sizeof(_pgen_tmp_75_364));
  memset(&_pgen_tmp_76_365, 0, sizeof(_pgen_tmp_76_365));
  memset(&_pgen_tmp_77_366, 0, sizeof(_pgen_tmp_77_366));
  memset(&_pgen_tmp_78_367, 0, sizeof(_pgen_tmp_78_367));
  memset(&_pgen_tmp_79_368, 0, sizeof(_pgen_tmp_79_368));
  memset(&_pgen_tmp_80_369, 0, sizeof(_pgen_tmp_80_369));
  memset(&_pgen_tmp_81_370, 0, sizeof(_pgen_tmp_81_370));
  memset(&_pgen_tmp_82_371, 0, sizeof(_pgen_tmp_82_371));
  memset(&_pgen_tmp_83_372, 0, sizeof(_pgen_tmp_83_372));
  memset(&_pgen_tmp_84_373, 0, sizeof(_pgen_tmp_84_373));
  memset(&_pgen_tmp_85_374, 0, sizeof(_pgen_tmp_85_374));
  memset(&_pgen_tmp_86_375, 0, sizeof(_pgen_tmp_86_375));
  memset(&_pgen_tmp_87_376, 0, sizeof(_pgen_tmp_87_376));
  memset(&_pgen_tmp_88_377, 0, sizeof(_pgen_tmp_88_377));
  memset(&_pgen_tmp_89_378, 0, sizeof(_pgen_tmp_89_378));
  memset(&_pgen_tmp_90_379, 0, sizeof(_pgen_tmp_90_379));
  memset(&_pgen_tmp_91_380, 0, sizeof(_pgen_tmp_91_380));
  memset(&_pgen_tmp_92_381, 0, sizeof(_pgen_tmp_92_381));
  memset(&_pgen_tmp_93_382, 0, sizeof(_pgen_tmp_93_382));
  memset(&_pgen_tmp_94_383, 0, sizeof(_pgen_tmp_94_383));
  memset(&_pgen_tmp_95_384, 0, sizeof(_pgen_tmp_95_384));
  memset(&_pgen_tmp_96_385, 0, sizeof(_pgen_tmp_96_385));
  memset(&_pgen_tmp_97_386, 0, sizeof(_pgen_tmp_97_386));
  memset(&_pgen_tmp_98_387, 0, sizeof(_pgen_tmp_98_387));
  memset(&_pgen_tmp_99_388, 0, sizeof(_pgen_tmp_99_388));
  memset(&_pgen_tmp_100_389, 0, sizeof(_pgen_tmp_100_389));
  memset(&_pgen_tmp_101_390, 0, sizeof(_pgen_tmp_101_390));
  memset(&_pgen_tmp_102_391, 0, sizeof(_pgen_tmp_102_391));
  memset(&_pgen_tmp_103_392, 0, sizeof(_pgen_tmp_103_392));
  memset(&_pgen_tmp_104_393, 0, sizeof(_pgen_tmp_104_393));
  memset(&_pgen_tmp_105_394, 0, sizeof(_pgen_tmp_105_394));
  memset(&_pgen_tmp_106_395, 0, sizeof(_pgen_tmp_106_395));
  memset(&_pgen_tmp_107_396, 0, sizeof(_pgen_tmp_107_396));
  memset(&_pgen_tmp_108_397, 0, sizeof(_pgen_tmp_108_397));
  memset(&_pgen_tmp_109_398, 0, sizeof(_pgen_tmp_109_398));
  memset(&_pgen_tmp_110_399, 0, sizeof(_pgen_tmp_110_399));
  memset(&_pgen_tmp_111_400, 0, sizeof(_pgen_tmp_111_400));
  memset(&_pgen_tmp_112_401, 0, sizeof(_pgen_tmp_112_401));
  memset(&_pgen_tmp_113_402, 0, sizeof(_pgen_tmp_113_402));
  memset(&_pgen_tmp_114_403, 0, sizeof(_pgen_tmp_114_403));
  memset(&_pgen_tmp_115_404, 0, sizeof(_pgen_tmp_115_404));
  memset(&_pgen_tmp_116_405, 0, sizeof(_pgen_tmp_116_405));
  memset(&_pgen_tmp_117_406, 0, sizeof(_pgen_tmp_117_406));
  memset(&_pgen_tmp_118_407, 0, sizeof(_pgen_tmp_118_407));
  memset(&_pgen_tmp_119_408, 0, sizeof(_pgen_tmp_119_408));
  memset(&_pgen_tmp_120_409, 0, sizeof(_pgen_tmp_120_409));
  memset(&_pgen_tmp_121_410, 0, sizeof(_pgen_tmp_121_410));
  memset(&_pgen_tmp_122_411, 0, sizeof(_pgen_tmp_122_411));
  memset(&_pgen_tmp_123_412, 0, sizeof(_pgen_tmp_123_412));
  memset(&_pgen_tmp_124_413, 0, sizeof(_pgen_tmp_124_413));
  memset(&_pgen_tmp_125_414, 0, sizeof(_pgen_tmp_125_414));
  memset(&_pgen_tmp_126_415, 0, sizeof(_pgen_tmp_126_415));
  memset(&_pgen_tmp_127_416, 0, sizeof(_pgen_tmp_127_416));
  memset(&_pgen_tmp_128_417, 0, sizeof(_pgen_tmp_128_417));
  memset(&_pgen_tmp_129_418, 0, sizeof(_pgen_tmp_129_418));
  memset(&_pgen_tmp_130_419, 0, sizeof(_pgen_tmp_130_419));
  memset(&_pgen_tmp_131_420, 0, sizeof(_pgen_tmp_131_420));
  memset(&_pgen_tmp_132_421, 0, sizeof(_pgen_tmp_132_421));
  memset(&_pgen_tmp_133_422, 0, sizeof(_pgen_tmp_133_422));
  memset(&_pgen_tmp_134_423, 0, sizeof(_pgen_tmp_134_423));
  memset(&_pgen_tmp_135_424, 0, sizeof(_pgen_tmp_135_424));
  memset(&_pgen_tmp_136_425, 0, sizeof(_pgen_tmp_136_425));
  memset(&_pgen_tmp_137_426, 0, sizeof(_pgen_tmp_137_426));
  memset(&_pgen_tmp_138_427, 0, sizeof(_pgen_tmp_138_427));
  memset(&_pgen_tmp_139_428, 0, sizeof(_pgen_tmp_139_428));
  memset(&_pgen_tmp_140_429, 0, sizeof(_pgen_tmp_140_429));
  memset(&_pgen_tmp_141_430, 0, sizeof(_pgen_tmp_141_430));
  memset(&_pgen_tmp_142_431, 0, sizeof(_pgen_tmp_142_431));
  memset(&_pgen_tmp_143_432, 0, sizeof(_pgen_tmp_143_432));
  memset(&_pgen_tmp_144_433, 0, sizeof(_pgen_tmp_144_433));
  memset(&_pgen_tmp_145_434, 0, sizeof(_pgen_tmp_145_434));
  memset(&_pgen_tmp_146_435, 0, sizeof(_pgen_tmp_146_435));
  memset(&_pgen_tmp_147_436, 0, sizeof(_pgen_tmp_147_436));
  memset(&_pgen_tmp_148_437, 0, sizeof(_pgen_tmp_148_437));
  memset(&_pgen_tmp_149_438, 0, sizeof(_pgen_tmp_149_438));
  memset(&_pgen_tmp_150_439, 0, sizeof(_pgen_tmp_150_439));
  memset(&_pgen_tmp_151_440, 0, sizeof(_pgen_tmp_151_440));
  memset(&_pgen_tmp_152_441, 0, sizeof(_pgen_tmp_152_441));
  memset(&_pgen_tmp_153_442, 0, sizeof(_pgen_tmp_153_442));
  memset(&_pgen_tmp_154_443, 0, sizeof(_pgen_tmp_154_443));
  memset(&_pgen_tmp_155_444, 0, sizeof(_pgen_tmp_155_444));
  memset(&_pgen_tmp_156_445, 0, sizeof(_pgen_tmp_156_445));
  memset(&_pgen_tmp_157_446, 0, sizeof(_pgen_tmp_157_446));
  memset(&_pgen_tmp_158_447, 0, sizeof(_pgen_tmp_158_447));
  memset(&_pgen_tmp_159_448, 0, sizeof(_pgen_tmp_159_448));
  memset(&_pgen_tmp_160_449, 0, sizeof(_pgen_tmp_160_449));
  memset(&_pgen_tmp_161_450, 0, sizeof(_pgen_tmp_161_450));
  memset(&_pgen_tmp_162_451, 0, sizeof(_pgen_tmp_162_451));
  memset(&_pgen_tmp_163_452, 0, sizeof(_pgen_tmp_163_452));
  memset(&_pgen_tmp_164_453, 0, sizeof(_pgen_tmp_164_453));
  memset(&_pgen_tmp_165_454, 0, sizeof(_pgen_tmp_165_454));
  memset(&_pgen_tmp_166_455, 0, sizeof(_pgen_tmp_166_455));
  memset(&_pgen_tmp_167_456, 0, sizeof(_pgen_tmp_167_456));
  memset(&_pgen_tmp_168_457, 0, sizeof(_pgen_tmp_168_457));
  memset(&_pgen_tmp_169_458, 0, sizeof(_pgen_tmp_169_458));
  memset(&_pgen_tmp_170_459, 0, sizeof(_pgen_tmp_170_459));
  memset(&_pgen_tmp_171_460, 0, sizeof(_pgen_tmp_171_460));
  memset(&_pgen_tmp_172_461, 0, sizeof(_pgen_tmp_172_461));
  memset(&_pgen_tmp_173_462, 0, sizeof(_pgen_tmp_173_462));
  memset(&_pgen_tmp_174_463, 0, sizeof(_pgen_tmp_174_463));
  memset(&_pgen_tmp_175_464, 0, sizeof(_pgen_tmp_175_464));
  memset(&_pgen_tmp_176_465, 0, sizeof(_pgen_tmp_176_465));
  memset(&_pgen_tmp_177_466, 0, sizeof(_pgen_tmp_177_466));
  memset(&_pgen_tmp_178_467, 0, sizeof(_pgen_tmp_178_467));
  memset(&_pgen_tmp_179_468, 0, sizeof(_pgen_tmp_179_468));
  memset(&_pgen_tmp_180_469, 0, sizeof(_pgen_tmp_180_469));
  memset(&_pgen_tmp_181_470, 0, sizeof(_pgen_tmp_181_470));
  memset(&_pgen_tmp_182_471, 0, sizeof(_pgen_tmp_182_471));
  memset(&_pgen_tmp_183_472, 0, sizeof(_pgen_tmp_183_472));
  memset(&_pgen_tmp_184_473, 0, sizeof(_pgen_tmp_184_473));
  memset(&_pgen_tmp_185_474, 0, sizeof(_pgen_tmp_185_474));
  memset(&_pgen_tmp_186_475, 0, sizeof(_pgen_tmp_186_475));
  memset(&_pgen_tmp_187_476, 0, sizeof(_pgen_tmp_187_476));
  memset(&_pgen_tmp_188_477, 0, sizeof(_pgen_tmp_188_477));
  memset(&_pgen_tmp_189_478, 0, sizeof(_pgen_tmp_189_478));
  memset(&_pgen_tmp_190_479, 0, sizeof(_pgen_tmp_190_479));
  memset(&_pgen_tmp_191_480, 0, sizeof(_pgen_tmp_191_480));
  memset(&_pgen_tmp_192_481, 0, sizeof(_pgen_tmp_192_481));
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
  // /conv1/Conv
  // pragma: 65536, 1027, 33
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435456, &input_0);
  Free_poly_data(&input_0._c1_poly);
  Free_poly_data(&input_0._c0_poly);
  // BlockingRot replicate=8
  _preg_268435615 = Rotate(_preg_268435456, -4096);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_0_289, &_preg_268435456, &_preg_268435615);
  CMPLR_TM_END(12, 0);
  _preg_268435616 = Rotate(_preg_268435456, -8192);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_1_290, &_pgen_tmp_0_289, &_preg_268435616);
  CMPLR_TM_END(12, 0);
  _preg_268435617 = Rotate(_preg_268435456, -12288);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_2_291, &_pgen_tmp_1_290, &_preg_268435617);
  CMPLR_TM_END(12, 0);
  _preg_268435618 = Rotate(_preg_268435456, -16384);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_3_292, &_pgen_tmp_2_291, &_preg_268435618);
  CMPLR_TM_END(12, 0);
  _preg_268435619 = Rotate(_preg_268435456, -20480);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_4_293, &_pgen_tmp_3_292, &_preg_268435619);
  CMPLR_TM_END(12, 0);
  _preg_268435620 = Rotate(_preg_268435456, -24576);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_5_294, &_pgen_tmp_4_293, &_preg_268435620);
  CMPLR_TM_END(12, 0);
  _preg_268435621 = Rotate(_preg_268435456, -28672);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n0_1, &_pgen_tmp_5_294, &_preg_268435621);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&input_dup_n0_1._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_0_289._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435456._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435615._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_0_289._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435456._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435615._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_1_290._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_0_289._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435616._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_1_290._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_0_289._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435616._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_2_291._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_1_290._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435617._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_2_291._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_1_290._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435617._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_3_292._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_2_291._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435618._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_3_292._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_2_291._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435618._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_4_293._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_3_292._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435619._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_4_293._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_3_292._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435619._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_5_294._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_4_293._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435620._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_5_294._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_4_293._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435620._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&input_dup_n0_1._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_5_294._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435621._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&input_dup_n0_1._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_5_294._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435621._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_preg_268435615._c1_poly);
  Free_poly_data(&_preg_268435615._c0_poly);
  Free_poly_data(&_preg_268435456._c1_poly);
  Free_poly_data(&_preg_268435456._c0_poly);
  Free_poly_data(&_preg_268435616._c1_poly);
  Free_poly_data(&_preg_268435616._c0_poly);
  Free_poly_data(&_pgen_tmp_0_289._c1_poly);
  Free_poly_data(&_pgen_tmp_0_289._c0_poly);
  Free_poly_data(&_preg_268435617._c1_poly);
  Free_poly_data(&_preg_268435617._c0_poly);
  Free_poly_data(&_pgen_tmp_1_290._c1_poly);
  Free_poly_data(&_pgen_tmp_1_290._c0_poly);
  Free_poly_data(&_preg_268435618._c1_poly);
  Free_poly_data(&_preg_268435618._c0_poly);
  Free_poly_data(&_pgen_tmp_2_291._c1_poly);
  Free_poly_data(&_pgen_tmp_2_291._c0_poly);
  Free_poly_data(&_preg_268435619._c1_poly);
  Free_poly_data(&_preg_268435619._c0_poly);
  Free_poly_data(&_pgen_tmp_3_292._c1_poly);
  Free_poly_data(&_pgen_tmp_3_292._c0_poly);
  Free_poly_data(&_preg_268435620._c1_poly);
  Free_poly_data(&_preg_268435620._c0_poly);
  Free_poly_data(&_pgen_tmp_4_293._c1_poly);
  Free_poly_data(&_pgen_tmp_4_293._c0_poly);
  Free_poly_data(&_preg_268435621._c1_poly);
  Free_poly_data(&_preg_268435621._c0_poly);
  Free_poly_data(&_pgen_tmp_5_294._c1_poly);
  Free_poly_data(&_pgen_tmp_5_294._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=9
  for (bs_input_n0_2 = 0; bs_input_n0_2 < 9; bs_input_n0_2 = bs_input_n0_2 + 1) {
    _preg_268435622 = Rotate(input_dup_n0_1, _cst_53[bs_input_n0_2]);
    Copy_ciph(&input_block_n0_3[bs_input_n0_2], &_preg_268435622);
    Free_poly_data(&_preg_268435622._c1_poly);
    Free_poly_data(&_preg_268435622._c0_poly);
  }
  Free_poly_data(&input_dup_n0_1._c1_poly);
  Free_poly_data(&input_dup_n0_1._c0_poly);
  Zero_ciph(&result_n1_4);
  for (num_grid_n1_5 = 0; num_grid_n1_5 < 4; num_grid_n1_5 = num_grid_n1_5 + 1) {
    Zero_ciph(&result_grid_n1_6);
    for (cap_block_n1_7 = 0; cap_block_n1_7 < 9; cap_block_n1_7 = cap_block_n1_7 + 1) {
      _ckks_gen_tmp_89_234 = input_block_n0_3[cap_block_n1_7];
      Pt_from_msg_ofst(&_pgen_tmp_6_295, 0/* cst_51 */, ((cap_block_n1_7 + (num_grid_n1_5 * 9))) * (32768), 32768, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_7_296, &_ckks_gen_tmp_89_234, &_pgen_tmp_6_295);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n1_6, &result_grid_n1_6, &_pgen_tmp_7_296);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n1_6._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_7_296._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_89_234._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_6_295._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_7_296._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_89_234._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_6_295._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n1_6._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n1_6._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_7_296._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n1_6._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n1_6._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_7_296._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435623 = Rotate(result_grid_n1_6, num_grid_n1_5 * 1024);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n1_4, &result_n1_4, &_preg_268435623);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n1_4._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n1_4._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n1_4._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435623._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n1_4._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n1_4._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435623._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435623._c1_poly);
    Free_poly_data(&_preg_268435623._c0_poly);
  }
  Free_ciph_poly(input_block_n0_3, 9);
  Free_poly_data(&_pgen_tmp_6_295._poly);
  Free_poly_data(&_pgen_tmp_7_296._c1_poly);
  Free_poly_data(&_pgen_tmp_7_296._c0_poly);
  Free_poly_data(&result_grid_n1_6._c1_poly);
  Free_poly_data(&result_grid_n1_6._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n1_4, &result_n1_4);
  Rescale(&result_n1_4._c0_poly, &result_n1_4._c0_poly);
  Rescale(&result_n1_4._c1_poly, &result_n1_4._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_9_298, 1 /* cst_54 */, 32768, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_8_297, &result_n1_4, &_pgen_tmp_9_298);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_8_297._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_8_297._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n1_4._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_9_298._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_8_297._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n1_4._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_9_298._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_9_298._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435457, &_pgen_tmp_8_297);
  Rescale(&_preg_268435457._c0_poly, &_pgen_tmp_8_297._c0_poly);
  Rescale(&_preg_268435457._c1_poly, &_pgen_tmp_8_297._c1_poly);
  Free_poly_data(&_pgen_tmp_8_297._c1_poly);
  Free_poly_data(&_pgen_tmp_8_297._c0_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_10_299, 2 /* cst_52 */, 32768, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n1_4, &_preg_268435457, &_pgen_tmp_10_299);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n1_4._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n1_4._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435457._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_10_299._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n1_4._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&_preg_268435457._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_10_299._poly);
  Free_poly_data(&_preg_268435457._c1_poly);
  Free_poly_data(&_preg_268435457._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435458, &result_n1_4);
  Free_poly_data(&result_n1_4._c1_poly);
  Free_poly_data(&result_n1_4._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 33
  // /relu/Relu
  // pragma: 65536, 1033, 39
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435459, &_preg_268435458, 14);
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
  // /layers/layers.0/conv1/Conv
  // pragma: 65536, 1027, 40
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435462, &_preg_268435461);
  Free_poly_data(&_preg_268435461._c1_poly);
  Free_poly_data(&_preg_268435461._c0_poly);
  // BlockingRot replicate=1
  Copy_ciph(&input_dup_n1_8, &_preg_268435462);
  Free_poly_data(&_preg_268435462._c1_poly);
  Free_poly_data(&_preg_268435462._c0_poly);
  // BlockingRot HRot=bs=9
  for (bs_input_n1_9 = 0; bs_input_n1_9 < 9; bs_input_n1_9 = bs_input_n1_9 + 1) {
    _preg_268435624 = Rotate(input_dup_n1_8, _cst_58[bs_input_n1_9]);
    Copy_ciph(&input_block_n1_10[bs_input_n1_9], &_preg_268435624);
    Free_poly_data(&_preg_268435624._c1_poly);
    Free_poly_data(&_preg_268435624._c0_poly);
  }
  Free_poly_data(&input_dup_n1_8._c1_poly);
  Free_poly_data(&input_dup_n1_8._c0_poly);
  Zero_ciph(&result_n2_11);
  for (num_grid_n2_12 = 0; num_grid_n2_12 < 1; num_grid_n2_12 = num_grid_n2_12 + 1) {
    Zero_ciph(&result_grid_n2_13);
    for (cap_block_n2_14 = 0; cap_block_n2_14 < 9; cap_block_n2_14 = cap_block_n2_14 + 1) {
      _ckks_gen_tmp_220_235 = input_block_n1_10[cap_block_n2_14];
      Pt_from_msg_ofst(&_pgen_tmp_11_300, 3/* cst_56 */, ((cap_block_n2_14 + (num_grid_n2_12 * 9))) * (32768), 32768, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_12_301, &_ckks_gen_tmp_220_235, &_pgen_tmp_11_300);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n2_13, &result_grid_n2_13, &_pgen_tmp_12_301);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n2_13._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_12_301._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_220_235._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_11_300._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_12_301._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_220_235._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_11_300._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n2_13._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n2_13._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_12_301._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n2_13._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n2_13._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_12_301._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435625 = Rotate(result_grid_n2_13, num_grid_n2_12 * 1024);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n2_11, &result_n2_11, &_preg_268435625);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n2_11._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n2_11._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n2_11._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435625._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n2_11._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n2_11._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435625._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435625._c1_poly);
    Free_poly_data(&_preg_268435625._c0_poly);
  }
  Free_ciph_poly(input_block_n1_10, 9);
  Free_poly_data(&_pgen_tmp_11_300._poly);
  Free_poly_data(&_pgen_tmp_12_301._c1_poly);
  Free_poly_data(&_pgen_tmp_12_301._c0_poly);
  Free_poly_data(&result_grid_n2_13._c1_poly);
  Free_poly_data(&result_grid_n2_13._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n2_11, &result_n2_11);
  Rescale(&result_n2_11._c0_poly, &result_n2_11._c0_poly);
  Rescale(&result_n2_11._c1_poly, &result_n2_11._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_14_303, 4 /* cst_59 */, 32768, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_13_302, &result_n2_11, &_pgen_tmp_14_303);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_13_302._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_13_302._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n2_11._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_14_303._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_13_302._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n2_11._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_14_303._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_14_303._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435463, &_pgen_tmp_13_302);
  Rescale(&_preg_268435463._c0_poly, &_pgen_tmp_13_302._c0_poly);
  Rescale(&_preg_268435463._c1_poly, &_pgen_tmp_13_302._c1_poly);
  Free_poly_data(&_pgen_tmp_13_302._c1_poly);
  Free_poly_data(&_pgen_tmp_13_302._c0_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_15_304, 5 /* cst_57 */, 32768, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n2_11, &_preg_268435463, &_pgen_tmp_15_304);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n2_11._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n2_11._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435463._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_15_304._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n2_11._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&_preg_268435463._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_15_304._poly);
  Free_poly_data(&_preg_268435463._c1_poly);
  Free_poly_data(&_preg_268435463._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435464, &result_n2_11);
  Free_poly_data(&result_n2_11._c1_poly);
  Free_poly_data(&result_n2_11._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 40
  // /layers/layers.0/relu1/Relu
  // pragma: 65536, 1033, 41
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435465, &_preg_268435464, 14);
  Free_poly_data(&_preg_268435464._c1_poly);
  Free_poly_data(&_preg_268435464._c0_poly);
  _preg_268435466 = App_relu(_preg_268435465, _preg_268435465, 32768);
  Free_poly_data(&_preg_268435465._c1_poly);
  Free_poly_data(&_preg_268435465._c0_poly);
  Copy_ciph(&_preg_268435467, &_preg_268435466);
  Free_poly_data(&_preg_268435466._c1_poly);
  Free_poly_data(&_preg_268435466._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 41
  // /layers/layers.0/conv2/Conv
  // pragma: 65536, 1027, 42
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435468, &_preg_268435467);
  Free_poly_data(&_preg_268435467._c1_poly);
  Free_poly_data(&_preg_268435467._c0_poly);
  // BlockingRot replicate=2
  _preg_268435626 = Rotate(_preg_268435468, -32768);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n2_15, &_preg_268435468, &_preg_268435626);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&input_dup_n2_15._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&input_dup_n2_15._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435468._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435626._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&input_dup_n2_15._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435468._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435626._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_preg_268435626._c1_poly);
  Free_poly_data(&_preg_268435626._c0_poly);
  Free_poly_data(&_preg_268435468._c1_poly);
  Free_poly_data(&_preg_268435468._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=4
  for (bs_input_n2_16 = 0; bs_input_n2_16 < 4; bs_input_n2_16 = bs_input_n2_16 + 1) {
    _preg_268435627 = Rotate(input_dup_n2_15, _cst_63[bs_input_n2_16]);
    Copy_ciph(&input_block_n2_17[bs_input_n2_16], &_preg_268435627);
    Free_poly_data(&_preg_268435627._c1_poly);
    Free_poly_data(&_preg_268435627._c0_poly);
  }
  Free_poly_data(&input_dup_n2_15._c1_poly);
  Free_poly_data(&input_dup_n2_15._c0_poly);
  Zero_ciph(&result_n3_18);
  for (num_grid_n3_19 = 0; num_grid_n3_19 < 8; num_grid_n3_19 = num_grid_n3_19 + 1) {
    Zero_ciph(&result_grid_n3_20);
    for (cap_block_n3_21 = 0; cap_block_n3_21 < 4; cap_block_n3_21 = cap_block_n3_21 + 1) {
      _ckks_gen_tmp_355_236 = input_block_n2_17[cap_block_n3_21];
      Pt_from_msg_ofst(&_pgen_tmp_16_305, 6/* cst_61 */, ((cap_block_n3_21 + (num_grid_n3_19 * 4))) * (32768), 32768, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_17_306, &_ckks_gen_tmp_355_236, &_pgen_tmp_16_305);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n3_20, &result_grid_n3_20, &_pgen_tmp_17_306);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n3_20._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_17_306._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_355_236._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_16_305._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_17_306._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_355_236._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_16_305._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n3_20._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n3_20._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_17_306._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n3_20._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n3_20._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_17_306._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435628 = Rotate(result_grid_n3_20, num_grid_n3_19 * 4096);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n3_18, &result_n3_18, &_preg_268435628);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n3_18._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n3_18._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n3_18._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435628._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n3_18._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n3_18._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435628._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435628._c1_poly);
    Free_poly_data(&_preg_268435628._c0_poly);
  }
  Free_ciph_poly(input_block_n2_17, 4);
  Free_poly_data(&_pgen_tmp_16_305._poly);
  Free_poly_data(&_pgen_tmp_17_306._c1_poly);
  Free_poly_data(&_pgen_tmp_17_306._c0_poly);
  Free_poly_data(&result_grid_n3_20._c1_poly);
  Free_poly_data(&result_grid_n3_20._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n3_18, &result_n3_18);
  Rescale(&result_n3_18._c0_poly, &result_n3_18._c0_poly);
  Rescale(&result_n3_18._c1_poly, &result_n3_18._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_19_308, 7 /* cst_64 */, 32768, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_18_307, &result_n3_18, &_pgen_tmp_19_308);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_18_307._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_18_307._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n3_18._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_19_308._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_18_307._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n3_18._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_19_308._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_19_308._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435469, &_pgen_tmp_18_307);
  Rescale(&_preg_268435469._c0_poly, &_pgen_tmp_18_307._c0_poly);
  Rescale(&_preg_268435469._c1_poly, &_pgen_tmp_18_307._c1_poly);
  Free_poly_data(&_pgen_tmp_18_307._c1_poly);
  Free_poly_data(&_pgen_tmp_18_307._c0_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_20_309, 8 /* cst_62 */, 32768, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n3_18, &_preg_268435469, &_pgen_tmp_20_309);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n3_18._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n3_18._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435469._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_20_309._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n3_18._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&_preg_268435469._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_20_309._poly);
  Free_poly_data(&_preg_268435469._c1_poly);
  Free_poly_data(&_preg_268435469._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435470, &result_n3_18);
  Free_poly_data(&result_n3_18._c1_poly);
  Free_poly_data(&result_n3_18._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 42
  // /layers/layers.0/relu2/Relu
  // pragma: 65536, 1033, 43
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435471, &_preg_268435470, 17);
  Free_poly_data(&_preg_268435470._c1_poly);
  Free_poly_data(&_preg_268435470._c0_poly);
  _preg_268435472 = App_relu(_preg_268435471, _preg_268435471, 32768);
  Free_poly_data(&_preg_268435471._c1_poly);
  Free_poly_data(&_preg_268435471._c0_poly);
  Copy_ciph(&_preg_268435473, &_preg_268435472);
  Free_poly_data(&_preg_268435472._c1_poly);
  Free_poly_data(&_preg_268435472._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 43
  // /layers/layers.1/conv1/Conv
  // pragma: 65536, 1027, 44
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435474, &_preg_268435473);
  Free_poly_data(&_preg_268435473._c1_poly);
  Free_poly_data(&_preg_268435473._c0_poly);
  // BlockingRot replicate=1
  Copy_ciph(&input_dup_n3_22, &_preg_268435474);
  Free_poly_data(&_preg_268435474._c1_poly);
  Free_poly_data(&_preg_268435474._c0_poly);
  // BlockingRot HRot=bs=9
  for (bs_input_n3_23 = 0; bs_input_n3_23 < 9; bs_input_n3_23 = bs_input_n3_23 + 1) {
    _preg_268435629 = Rotate(input_dup_n3_22, _cst_68[bs_input_n3_23]);
    Copy_ciph(&input_block_n3_24[bs_input_n3_23], &_preg_268435629);
    Free_poly_data(&_preg_268435629._c1_poly);
    Free_poly_data(&_preg_268435629._c0_poly);
  }
  Free_poly_data(&input_dup_n3_22._c1_poly);
  Free_poly_data(&input_dup_n3_22._c0_poly);
  Zero_ciph(&result_n4_25);
  for (num_grid_n4_26 = 0; num_grid_n4_26 < 1; num_grid_n4_26 = num_grid_n4_26 + 1) {
    Zero_ciph(&result_grid_n4_27);
    for (cap_block_n4_28 = 0; cap_block_n4_28 < 9; cap_block_n4_28 = cap_block_n4_28 + 1) {
      _ckks_gen_tmp_486_237 = input_block_n3_24[cap_block_n4_28];
      Pt_from_msg_ofst(&_pgen_tmp_21_310, 9/* cst_66 */, ((cap_block_n4_28 + (num_grid_n4_26 * 9))) * (32768), 32768, 1, 6);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_22_311, &_ckks_gen_tmp_486_237, &_pgen_tmp_21_310);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n4_27, &result_grid_n4_27, &_pgen_tmp_22_311);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n4_27._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_22_311._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_486_237._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_21_310._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_22_311._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_486_237._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_21_310._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n4_27._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n4_27._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_22_311._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n4_27._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n4_27._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_22_311._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435630 = Rotate(result_grid_n4_27, num_grid_n4_26 * 1024);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n4_25, &result_n4_25, &_preg_268435630);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n4_25._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n4_25._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n4_25._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435630._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n4_25._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n4_25._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435630._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435630._c1_poly);
    Free_poly_data(&_preg_268435630._c0_poly);
  }
  Free_ciph_poly(input_block_n3_24, 9);
  Free_poly_data(&_pgen_tmp_21_310._poly);
  Free_poly_data(&_pgen_tmp_22_311._c1_poly);
  Free_poly_data(&_pgen_tmp_22_311._c0_poly);
  Free_poly_data(&result_grid_n4_27._c1_poly);
  Free_poly_data(&result_grid_n4_27._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n4_25, &result_n4_25);
  Rescale(&result_n4_25._c0_poly, &result_n4_25._c0_poly);
  Rescale(&result_n4_25._c1_poly, &result_n4_25._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_24_313, 10 /* cst_69 */, 32768, 1, 5);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_23_312, &result_n4_25, &_pgen_tmp_24_313);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_23_312._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_23_312._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n4_25._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_24_313._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_23_312._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n4_25._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_24_313._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_24_313._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435475, &_pgen_tmp_23_312);
  Rescale(&_preg_268435475._c0_poly, &_pgen_tmp_23_312._c0_poly);
  Rescale(&_preg_268435475._c1_poly, &_pgen_tmp_23_312._c1_poly);
  Free_poly_data(&_pgen_tmp_23_312._c1_poly);
  Free_poly_data(&_pgen_tmp_23_312._c0_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_25_314, 11 /* cst_67 */, 32768, 1, 4);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n4_25, &_preg_268435475, &_pgen_tmp_25_314);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n4_25._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n4_25._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435475._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_25_314._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n4_25._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&_preg_268435475._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_25_314._poly);
  Free_poly_data(&_preg_268435475._c1_poly);
  Free_poly_data(&_preg_268435475._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435476, &result_n4_25);
  Free_poly_data(&result_n4_25._c1_poly);
  Free_poly_data(&result_n4_25._c0_poly);
  Copy_ciph(&orig_result4_29, &_preg_268435476);
  Free_poly_data(&_preg_268435476._c1_poly);
  Free_poly_data(&_preg_268435476._c0_poly);
  Zero_ciph(&comb_row_result5_30);
  for (comb_row_index_n5_31 = 0; comb_row_index_n5_31 < 16; comb_row_index_n5_31 = comb_row_index_n5_31 + 1) {
    _preg_268435631 = Rotate(orig_result4_29, comb_row_index_n5_31 * 1);
    Copy_ciph(&_ckks_gen_tmp_558_238, &_preg_268435631);
    Pt_from_msg_ofst(&_pgen_tmp_26_315, 12/* cst_70 */, (comb_row_index_n5_31) * (32768), 32768, 1, 4);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_27_316, &_ckks_gen_tmp_558_238, &_pgen_tmp_26_315);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&comb_row_result5_30, &comb_row_result5_30, &_pgen_tmp_27_316);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&comb_row_result5_30._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_27_316._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_558_238._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_26_315._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_27_316._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_558_238._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_26_315._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&comb_row_result5_30._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&comb_row_result5_30._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_27_316._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&comb_row_result5_30._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&comb_row_result5_30._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_27_316._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435631._c1_poly);
    Free_poly_data(&_preg_268435631._c0_poly);
  }
  Free_poly_data(&orig_result4_29._c1_poly);
  Free_poly_data(&orig_result4_29._c0_poly);
  Free_poly_data(&_pgen_tmp_26_315._poly);
  Free_poly_data(&_ckks_gen_tmp_558_238._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_558_238._c0_poly);
  Free_poly_data(&_pgen_tmp_27_316._c1_poly);
  Free_poly_data(&_pgen_tmp_27_316._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&comb_row_result5_30, &comb_row_result5_30);
  Rescale(&comb_row_result5_30._c0_poly, &comb_row_result5_30._c0_poly);
  Rescale(&comb_row_result5_30._c1_poly, &comb_row_result5_30._c1_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&comb_rc_result5_32);
  for (comb_rc_index_n5_33 = 0; comb_rc_index_n5_33 < 16; comb_rc_index_n5_33 = comb_rc_index_n5_33 + 1) {
    _preg_268435632 = Rotate(comb_row_result5_30, comb_rc_index_n5_33 * 48);
    Copy_ciph(&_ckks_gen_tmp_591_239, &_preg_268435632);
    Pt_from_msg_ofst(&_pgen_tmp_28_317, 13/* cst_71 */, (comb_rc_index_n5_33) * (32768), 32768, 1, 3);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_29_318, &_ckks_gen_tmp_591_239, &_pgen_tmp_28_317);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&comb_rc_result5_32, &comb_rc_result5_32, &_pgen_tmp_29_318);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&comb_rc_result5_32._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_29_318._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_591_239._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_28_317._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_29_318._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_591_239._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_28_317._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&comb_rc_result5_32._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&comb_rc_result5_32._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_29_318._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&comb_rc_result5_32._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&comb_rc_result5_32._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_29_318._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435632._c1_poly);
    Free_poly_data(&_preg_268435632._c0_poly);
  }
  Free_poly_data(&comb_row_result5_30._c1_poly);
  Free_poly_data(&comb_row_result5_30._c0_poly);
  Free_poly_data(&_pgen_tmp_28_317._poly);
  Free_poly_data(&_ckks_gen_tmp_591_239._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_591_239._c0_poly);
  Free_poly_data(&_pgen_tmp_29_318._c1_poly);
  Free_poly_data(&_pgen_tmp_29_318._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&comb_rc_result5_32, &comb_rc_result5_32);
  Rescale(&comb_rc_result5_32._c0_poly, &comb_rc_result5_32._c0_poly);
  Rescale(&comb_rc_result5_32._c1_poly, &comb_rc_result5_32._c1_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&ss_result5_34);
  for (comb_cc_index_n5_35 = 0; comb_cc_index_n5_35 < 32; comb_cc_index_n5_35 = comb_cc_index_n5_35 + 1) {
    _preg_268435633 = Rotate(comb_rc_result5_32, comb_cc_index_n5_35 * 768);
    Copy_ciph(&_ckks_gen_tmp_624_240, &_preg_268435633);
    Pt_from_msg_ofst(&_pgen_tmp_30_319, 14/* cst_72 */, (comb_cc_index_n5_35) * (32768), 32768, 1, 2);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_31_320, &_ckks_gen_tmp_624_240, &_pgen_tmp_30_319);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&ss_result5_34, &ss_result5_34, &_pgen_tmp_31_320);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&ss_result5_34._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_31_320._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_624_240._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_30_319._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_31_320._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_624_240._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_30_319._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&ss_result5_34._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&ss_result5_34._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_31_320._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&ss_result5_34._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&ss_result5_34._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_31_320._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435633._c1_poly);
    Free_poly_data(&_preg_268435633._c0_poly);
  }
  Free_poly_data(&comb_rc_result5_32._c1_poly);
  Free_poly_data(&comb_rc_result5_32._c0_poly);
  Free_poly_data(&_pgen_tmp_30_319._poly);
  Free_poly_data(&_ckks_gen_tmp_624_240._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_624_240._c0_poly);
  Free_poly_data(&_pgen_tmp_31_320._c1_poly);
  Free_poly_data(&_pgen_tmp_31_320._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&ss_result5_34, &ss_result5_34);
  Rescale(&ss_result5_34._c0_poly, &ss_result5_34._c0_poly);
  Rescale(&ss_result5_34._c1_poly, &ss_result5_34._c1_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&_preg_268435477, &ss_result5_34);
  Free_poly_data(&ss_result5_34._c1_poly);
  Free_poly_data(&ss_result5_34._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 44
  // /layers/layers.1/relu1/Relu
  // pragma: 65536, 1033, 45
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435478, &_preg_268435477, 14);
  Free_poly_data(&_preg_268435477._c1_poly);
  Free_poly_data(&_preg_268435477._c0_poly);
  _preg_268435479 = App_relu(_preg_268435478, _preg_268435478, 8192);
  Free_poly_data(&_preg_268435478._c1_poly);
  Free_poly_data(&_preg_268435478._c0_poly);
  Copy_ciph(&_preg_268435480, &_preg_268435479);
  Free_poly_data(&_preg_268435479._c1_poly);
  Free_poly_data(&_preg_268435479._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 45
  // /layers/layers.1/conv2/Conv
  // pragma: 65536, 1027, 46
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435481, &_preg_268435480);
  Free_poly_data(&_preg_268435480._c1_poly);
  Free_poly_data(&_preg_268435480._c0_poly);
  // BlockingRot replicate=3
  _preg_268435634 = Rotate(_preg_268435481, -8192);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_32_321, &_preg_268435481, &_preg_268435634);
  CMPLR_TM_END(12, 0);
  _preg_268435635 = Rotate(_preg_268435481, -16384);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n5_36, &_pgen_tmp_32_321, &_preg_268435635);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&input_dup_n5_36._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_32_321._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435481._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435634._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_32_321._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435481._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435634._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&input_dup_n5_36._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_32_321._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435635._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&input_dup_n5_36._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_32_321._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435635._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_preg_268435634._c1_poly);
  Free_poly_data(&_preg_268435634._c0_poly);
  Free_poly_data(&_preg_268435481._c1_poly);
  Free_poly_data(&_preg_268435481._c0_poly);
  Free_poly_data(&_preg_268435635._c1_poly);
  Free_poly_data(&_preg_268435635._c0_poly);
  Free_poly_data(&_pgen_tmp_32_321._c1_poly);
  Free_poly_data(&_pgen_tmp_32_321._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=4
  for (bs_input_n5_37 = 0; bs_input_n5_37 < 4; bs_input_n5_37 = bs_input_n5_37 + 1) {
    _preg_268435636 = Rotate(input_dup_n5_36, _cst_76[bs_input_n5_37]);
    Copy_ciph(&input_block_n5_38[bs_input_n5_37], &_preg_268435636);
    Free_poly_data(&_preg_268435636._c1_poly);
    Free_poly_data(&_preg_268435636._c0_poly);
  }
  Free_poly_data(&input_dup_n5_36._c1_poly);
  Free_poly_data(&input_dup_n5_36._c0_poly);
  Zero_ciph(&result_n6_39);
  for (num_grid_n6_40 = 0; num_grid_n6_40 < 8; num_grid_n6_40 = num_grid_n6_40 + 1) {
    Zero_ciph(&result_grid_n6_41);
    for (cap_block_n6_42 = 0; cap_block_n6_42 < 4; cap_block_n6_42 = cap_block_n6_42 + 1) {
      _ckks_gen_tmp_728_241 = input_block_n5_38[cap_block_n6_42];
      Pt_from_msg_ofst(&_pgen_tmp_33_322, 15/* cst_74 */, ((cap_block_n6_42 + (num_grid_n6_40 * 4))) * (16384), 16384, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_34_323, &_ckks_gen_tmp_728_241, &_pgen_tmp_33_322);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n6_41, &result_grid_n6_41, &_pgen_tmp_34_323);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n6_41._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_34_323._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_728_241._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_33_322._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_34_323._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_728_241._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_33_322._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n6_41._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n6_41._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_34_323._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n6_41._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n6_41._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_34_323._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435637 = Rotate(result_grid_n6_41, num_grid_n6_40 * 1024);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n6_39, &result_n6_39, &_preg_268435637);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n6_39._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n6_39._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n6_39._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435637._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n6_39._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n6_39._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435637._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435637._c1_poly);
    Free_poly_data(&_preg_268435637._c0_poly);
  }
  Free_ciph_poly(input_block_n5_38, 4);
  Free_poly_data(&_pgen_tmp_33_322._poly);
  Free_poly_data(&_pgen_tmp_34_323._c1_poly);
  Free_poly_data(&_pgen_tmp_34_323._c0_poly);
  Free_poly_data(&result_grid_n6_41._c1_poly);
  Free_poly_data(&result_grid_n6_41._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n6_39, &result_n6_39);
  Rescale(&result_n6_39._c0_poly, &result_n6_39._c0_poly);
  Rescale(&result_n6_39._c1_poly, &result_n6_39._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_36_325, 16 /* cst_77 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_35_324, &result_n6_39, &_pgen_tmp_36_325);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_35_324._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_35_324._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n6_39._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_36_325._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_35_324._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n6_39._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_36_325._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_36_325._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435482, &_pgen_tmp_35_324);
  Rescale(&_preg_268435482._c0_poly, &_pgen_tmp_35_324._c0_poly);
  Rescale(&_preg_268435482._c1_poly, &_pgen_tmp_35_324._c1_poly);
  Free_poly_data(&_pgen_tmp_35_324._c1_poly);
  Free_poly_data(&_pgen_tmp_35_324._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435638 = Rotate(result_n6_39, -16384);
  Copy_ciph(&_ckks_gen_tmp_772_242, &_preg_268435638);
  Free_poly_data(&_preg_268435638._c1_poly);
  Free_poly_data(&_preg_268435638._c0_poly);
  Pt_from_msg(&_pgen_tmp_38_327, 17 /* cst_78 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_37_326, &_ckks_gen_tmp_772_242, &_pgen_tmp_38_327);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_37_326._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_37_326._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_772_242._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_38_327._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_37_326._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_772_242._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_38_327._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_38_327._poly);
  Free_poly_data(&_ckks_gen_tmp_772_242._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_772_242._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_39_328, &_pgen_tmp_37_326);
  Rescale(&_pgen_tmp_39_328._c0_poly, &_pgen_tmp_37_326._c0_poly);
  Rescale(&_pgen_tmp_39_328._c1_poly, &_pgen_tmp_37_326._c1_poly);
  Free_poly_data(&_pgen_tmp_37_326._c1_poly);
  Free_poly_data(&_pgen_tmp_37_326._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435482, &_preg_268435482, &_pgen_tmp_39_328);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_preg_268435482._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&_preg_268435482._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435482._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_39_328._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_preg_268435482._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435482._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_39_328._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_39_328._c1_poly);
  Free_poly_data(&_pgen_tmp_39_328._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_40_329, 18 /* cst_75 */, 16384, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n6_39, &_preg_268435482, &_pgen_tmp_40_329);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n6_39._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n6_39._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435482._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_40_329._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n6_39._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&_preg_268435482._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_40_329._poly);
  Free_poly_data(&_preg_268435482._c1_poly);
  Free_poly_data(&_preg_268435482._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435483, &result_n6_39);
  Free_poly_data(&result_n6_39._c1_poly);
  Free_poly_data(&result_n6_39._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 46
  // /layers/layers.1/relu2/Relu
  // pragma: 65536, 1033, 47
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435484, &_preg_268435483, 13);
  Free_poly_data(&_preg_268435483._c1_poly);
  Free_poly_data(&_preg_268435483._c0_poly);
  _preg_268435485 = App_relu(_preg_268435484, _preg_268435484, 16384);
  Free_poly_data(&_preg_268435484._c1_poly);
  Free_poly_data(&_preg_268435484._c0_poly);
  Copy_ciph(&_preg_268435486, &_preg_268435485);
  Free_poly_data(&_preg_268435485._c1_poly);
  Free_poly_data(&_preg_268435485._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 47
  // /layers/layers.2/conv1/Conv
  // pragma: 65536, 1027, 48
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435487, &_preg_268435486);
  Free_poly_data(&_preg_268435486._c1_poly);
  Free_poly_data(&_preg_268435486._c0_poly);
  // BlockingRot replicate=1
  Copy_ciph(&input_dup_n6_43, &_preg_268435487);
  Free_poly_data(&_preg_268435487._c1_poly);
  Free_poly_data(&_preg_268435487._c0_poly);
  // BlockingRot HRot=bs=9
  for (bs_input_n6_44 = 0; bs_input_n6_44 < 9; bs_input_n6_44 = bs_input_n6_44 + 1) {
    _preg_268435639 = Rotate(input_dup_n6_43, _cst_82[bs_input_n6_44]);
    Copy_ciph(&input_block_n6_45[bs_input_n6_44], &_preg_268435639);
    Free_poly_data(&_preg_268435639._c1_poly);
    Free_poly_data(&_preg_268435639._c0_poly);
  }
  Free_poly_data(&input_dup_n6_43._c1_poly);
  Free_poly_data(&input_dup_n6_43._c0_poly);
  Zero_ciph(&result_n7_46);
  for (num_grid_n7_47 = 0; num_grid_n7_47 < 1; num_grid_n7_47 = num_grid_n7_47 + 1) {
    Zero_ciph(&result_grid_n7_48);
    for (cap_block_n7_49 = 0; cap_block_n7_49 < 9; cap_block_n7_49 = cap_block_n7_49 + 1) {
      _ckks_gen_tmp_875_243 = input_block_n6_45[cap_block_n7_49];
      Pt_from_msg_ofst(&_pgen_tmp_41_330, 19/* cst_80 */, ((cap_block_n7_49 + (num_grid_n7_47 * 9))) * (16384), 16384, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_42_331, &_ckks_gen_tmp_875_243, &_pgen_tmp_41_330);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n7_48, &result_grid_n7_48, &_pgen_tmp_42_331);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n7_48._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_42_331._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_875_243._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_41_330._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_42_331._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_875_243._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_41_330._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n7_48._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n7_48._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_42_331._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n7_48._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n7_48._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_42_331._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435640 = Rotate(result_grid_n7_48, num_grid_n7_47 * 256);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n7_46, &result_n7_46, &_preg_268435640);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n7_46._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n7_46._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n7_46._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435640._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n7_46._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n7_46._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435640._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435640._c1_poly);
    Free_poly_data(&_preg_268435640._c0_poly);
  }
  Free_ciph_poly(input_block_n6_45, 9);
  Free_poly_data(&_pgen_tmp_41_330._poly);
  Free_poly_data(&_pgen_tmp_42_331._c1_poly);
  Free_poly_data(&_pgen_tmp_42_331._c0_poly);
  Free_poly_data(&result_grid_n7_48._c1_poly);
  Free_poly_data(&result_grid_n7_48._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n7_46, &result_n7_46);
  Rescale(&result_n7_46._c0_poly, &result_n7_46._c0_poly);
  Rescale(&result_n7_46._c1_poly, &result_n7_46._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_43_332, 20 /* cst_81 */, 16384, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n7_46, &result_n7_46, &_pgen_tmp_43_332);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n7_46._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n7_46._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n7_46._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_43_332._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n7_46._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&result_n7_46._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_43_332._poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435488, &result_n7_46);
  Free_poly_data(&result_n7_46._c1_poly);
  Free_poly_data(&result_n7_46._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 48
  // /layers/layers.2/relu1/Relu
  // pragma: 65536, 1033, 49
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435489, &_preg_268435488, 14);
  Free_poly_data(&_preg_268435488._c1_poly);
  Free_poly_data(&_preg_268435488._c0_poly);
  _preg_268435490 = App_relu(_preg_268435489, _preg_268435489, 16384);
  Free_poly_data(&_preg_268435489._c1_poly);
  Free_poly_data(&_preg_268435489._c0_poly);
  Copy_ciph(&_preg_268435491, &_preg_268435490);
  Free_poly_data(&_preg_268435490._c1_poly);
  Free_poly_data(&_preg_268435490._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 49
  // /layers/layers.2/conv2/Conv
  // pragma: 65536, 1027, 50
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435492, &_preg_268435491);
  Free_poly_data(&_preg_268435491._c1_poly);
  Free_poly_data(&_preg_268435491._c0_poly);
  // BlockingRot replicate=2
  _preg_268435641 = Rotate(_preg_268435492, -16384);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n7_50, &_preg_268435492, &_preg_268435641);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&input_dup_n7_50._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&input_dup_n7_50._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435492._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435641._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&input_dup_n7_50._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435492._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435641._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_preg_268435641._c1_poly);
  Free_poly_data(&_preg_268435641._c0_poly);
  Free_poly_data(&_preg_268435492._c1_poly);
  Free_poly_data(&_preg_268435492._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=8
  for (bs_input_n7_51 = 0; bs_input_n7_51 < 8; bs_input_n7_51 = bs_input_n7_51 + 1) {
    _preg_268435642 = Rotate(input_dup_n7_50, _cst_86[bs_input_n7_51]);
    Copy_ciph(&input_block_n7_52[bs_input_n7_51], &_preg_268435642);
    Free_poly_data(&_preg_268435642._c1_poly);
    Free_poly_data(&_preg_268435642._c0_poly);
  }
  Free_poly_data(&input_dup_n7_50._c1_poly);
  Free_poly_data(&input_dup_n7_50._c0_poly);
  Zero_ciph(&result_n8_53);
  for (num_grid_n8_54 = 0; num_grid_n8_54 < 8; num_grid_n8_54 = num_grid_n8_54 + 1) {
    Zero_ciph(&result_grid_n8_55);
    for (cap_block_n8_56 = 0; cap_block_n8_56 < 8; cap_block_n8_56 = cap_block_n8_56 + 1) {
      _ckks_gen_tmp_1000_244 = input_block_n7_52[cap_block_n8_56];
      Pt_from_msg_ofst(&_pgen_tmp_44_333, 21/* cst_84 */, ((cap_block_n8_56 + (num_grid_n8_54 * 8))) * (16384), 16384, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_45_334, &_ckks_gen_tmp_1000_244, &_pgen_tmp_44_333);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n8_55, &result_grid_n8_55, &_pgen_tmp_45_334);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n8_55._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_45_334._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1000_244._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_44_333._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_45_334._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1000_244._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_44_333._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n8_55._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n8_55._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_45_334._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n8_55._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n8_55._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_45_334._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435643 = Rotate(result_grid_n8_55, num_grid_n8_54 * 2048);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n8_53, &result_n8_53, &_preg_268435643);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n8_53._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n8_53._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n8_53._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435643._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n8_53._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n8_53._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435643._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435643._c1_poly);
    Free_poly_data(&_preg_268435643._c0_poly);
  }
  Free_ciph_poly(input_block_n7_52, 8);
  Free_poly_data(&_pgen_tmp_44_333._poly);
  Free_poly_data(&_pgen_tmp_45_334._c1_poly);
  Free_poly_data(&_pgen_tmp_45_334._c0_poly);
  Free_poly_data(&result_grid_n8_55._c1_poly);
  Free_poly_data(&result_grid_n8_55._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n8_53, &result_n8_53);
  Rescale(&result_n8_53._c0_poly, &result_n8_53._c0_poly);
  Rescale(&result_n8_53._c1_poly, &result_n8_53._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_47_336, 22 /* cst_87 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_46_335, &result_n8_53, &_pgen_tmp_47_336);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_46_335._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_46_335._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n8_53._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_47_336._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_46_335._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n8_53._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_47_336._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_47_336._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435493, &_pgen_tmp_46_335);
  Rescale(&_preg_268435493._c0_poly, &_pgen_tmp_46_335._c0_poly);
  Rescale(&_preg_268435493._c1_poly, &_pgen_tmp_46_335._c1_poly);
  Free_poly_data(&_pgen_tmp_46_335._c1_poly);
  Free_poly_data(&_pgen_tmp_46_335._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435644 = Rotate(result_n8_53, -16384);
  Copy_ciph(&_ckks_gen_tmp_1044_245, &_preg_268435644);
  Free_poly_data(&_preg_268435644._c1_poly);
  Free_poly_data(&_preg_268435644._c0_poly);
  Pt_from_msg(&_pgen_tmp_49_338, 23 /* cst_88 */, 16384, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_48_337, &_ckks_gen_tmp_1044_245, &_pgen_tmp_49_338);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_48_337._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_48_337._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1044_245._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_49_338._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_48_337._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1044_245._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_49_338._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_49_338._poly);
  Free_poly_data(&_ckks_gen_tmp_1044_245._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1044_245._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_50_339, &_pgen_tmp_48_337);
  Rescale(&_pgen_tmp_50_339._c0_poly, &_pgen_tmp_48_337._c0_poly);
  Rescale(&_pgen_tmp_50_339._c1_poly, &_pgen_tmp_48_337._c1_poly);
  Free_poly_data(&_pgen_tmp_48_337._c1_poly);
  Free_poly_data(&_pgen_tmp_48_337._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435493, &_preg_268435493, &_pgen_tmp_50_339);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_preg_268435493._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&_preg_268435493._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435493._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_50_339._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_preg_268435493._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435493._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_50_339._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_50_339._c1_poly);
  Free_poly_data(&_pgen_tmp_50_339._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_51_340, 24 /* cst_85 */, 16384, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n8_53, &_preg_268435493, &_pgen_tmp_51_340);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n8_53._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n8_53._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435493._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_51_340._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n8_53._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&_preg_268435493._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_51_340._poly);
  Free_poly_data(&_preg_268435493._c1_poly);
  Free_poly_data(&_preg_268435493._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435494, &result_n8_53);
  Free_poly_data(&result_n8_53._c1_poly);
  Free_poly_data(&result_n8_53._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 50
  // /layers/layers.2/relu2/Relu
  // pragma: 65536, 1033, 51
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435495, &_preg_268435494, 16);
  Free_poly_data(&_preg_268435494._c1_poly);
  Free_poly_data(&_preg_268435494._c0_poly);
  _preg_268435496 = App_relu(_preg_268435495, _preg_268435495, 16384);
  Free_poly_data(&_preg_268435495._c1_poly);
  Free_poly_data(&_preg_268435495._c0_poly);
  Copy_ciph(&_preg_268435497, &_preg_268435496);
  Free_poly_data(&_preg_268435496._c1_poly);
  Free_poly_data(&_preg_268435496._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 51
  // /layers/layers.3/conv1/Conv
  // pragma: 65536, 1027, 52
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435498, &_preg_268435497);
  Free_poly_data(&_preg_268435497._c1_poly);
  Free_poly_data(&_preg_268435497._c0_poly);
  // BlockingRot replicate=1
  Copy_ciph(&input_dup_n8_57, &_preg_268435498);
  Free_poly_data(&_preg_268435498._c1_poly);
  Free_poly_data(&_preg_268435498._c0_poly);
  // BlockingRot HRot=bs=9
  for (bs_input_n8_58 = 0; bs_input_n8_58 < 9; bs_input_n8_58 = bs_input_n8_58 + 1) {
    _preg_268435645 = Rotate(input_dup_n8_57, _cst_92[bs_input_n8_58]);
    Copy_ciph(&input_block_n8_59[bs_input_n8_58], &_preg_268435645);
    Free_poly_data(&_preg_268435645._c1_poly);
    Free_poly_data(&_preg_268435645._c0_poly);
  }
  Free_poly_data(&input_dup_n8_57._c1_poly);
  Free_poly_data(&input_dup_n8_57._c0_poly);
  Zero_ciph(&result_n9_60);
  for (num_grid_n9_61 = 0; num_grid_n9_61 < 1; num_grid_n9_61 = num_grid_n9_61 + 1) {
    Zero_ciph(&result_grid_n9_62);
    for (cap_block_n9_63 = 0; cap_block_n9_63 < 9; cap_block_n9_63 = cap_block_n9_63 + 1) {
      _ckks_gen_tmp_1147_246 = input_block_n8_59[cap_block_n9_63];
      Pt_from_msg_ofst(&_pgen_tmp_52_341, 25/* cst_90 */, ((cap_block_n9_63 + (num_grid_n9_61 * 9))) * (16384), 16384, 1, 5);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_53_342, &_ckks_gen_tmp_1147_246, &_pgen_tmp_52_341);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n9_62, &result_grid_n9_62, &_pgen_tmp_53_342);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n9_62._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_53_342._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1147_246._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_52_341._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_53_342._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1147_246._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_52_341._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n9_62._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n9_62._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_53_342._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n9_62._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n9_62._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_53_342._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435646 = Rotate(result_grid_n9_62, num_grid_n9_61 * 256);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n9_60, &result_n9_60, &_preg_268435646);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n9_60._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n9_60._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n9_60._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435646._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n9_60._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n9_60._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435646._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435646._c1_poly);
    Free_poly_data(&_preg_268435646._c0_poly);
  }
  Free_ciph_poly(input_block_n8_59, 9);
  Free_poly_data(&_pgen_tmp_52_341._poly);
  Free_poly_data(&_pgen_tmp_53_342._c1_poly);
  Free_poly_data(&_pgen_tmp_53_342._c0_poly);
  Free_poly_data(&result_grid_n9_62._c1_poly);
  Free_poly_data(&result_grid_n9_62._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n9_60, &result_n9_60);
  Rescale(&result_n9_60._c0_poly, &result_n9_60._c0_poly);
  Rescale(&result_n9_60._c1_poly, &result_n9_60._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_54_343, 26 /* cst_91 */, 16384, 1, 4);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n9_60, &result_n9_60, &_pgen_tmp_54_343);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n9_60._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n9_60._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n9_60._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_54_343._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n9_60._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&result_n9_60._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_54_343._poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435499, &result_n9_60);
  Free_poly_data(&result_n9_60._c1_poly);
  Free_poly_data(&result_n9_60._c0_poly);
  Copy_ciph(&orig_result9_64, &_preg_268435499);
  Free_poly_data(&_preg_268435499._c1_poly);
  Free_poly_data(&_preg_268435499._c0_poly);
  Zero_ciph(&comb_row_result10_65);
  for (comb_row_index_n10_66 = 0; comb_row_index_n10_66 < 8; comb_row_index_n10_66 = comb_row_index_n10_66 + 1) {
    _preg_268435647 = Rotate(orig_result9_64, comb_row_index_n10_66 * 1);
    Copy_ciph(&_ckks_gen_tmp_1209_247, &_preg_268435647);
    Pt_from_msg_ofst(&_pgen_tmp_55_344, 27/* cst_93 */, (comb_row_index_n10_66) * (16384), 16384, 1, 4);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_56_345, &_ckks_gen_tmp_1209_247, &_pgen_tmp_55_344);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&comb_row_result10_65, &comb_row_result10_65, &_pgen_tmp_56_345);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&comb_row_result10_65._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_56_345._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1209_247._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_55_344._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_56_345._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1209_247._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_55_344._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&comb_row_result10_65._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&comb_row_result10_65._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_56_345._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&comb_row_result10_65._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&comb_row_result10_65._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_56_345._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435647._c1_poly);
    Free_poly_data(&_preg_268435647._c0_poly);
  }
  Free_poly_data(&orig_result9_64._c1_poly);
  Free_poly_data(&orig_result9_64._c0_poly);
  Free_poly_data(&_pgen_tmp_55_344._poly);
  Free_poly_data(&_ckks_gen_tmp_1209_247._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1209_247._c0_poly);
  Free_poly_data(&_pgen_tmp_56_345._c1_poly);
  Free_poly_data(&_pgen_tmp_56_345._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&comb_row_result10_65, &comb_row_result10_65);
  Rescale(&comb_row_result10_65._c0_poly, &comb_row_result10_65._c0_poly);
  Rescale(&comb_row_result10_65._c1_poly, &comb_row_result10_65._c1_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&comb_rc_result10_67);
  for (comb_rc_index_n10_68 = 0; comb_rc_index_n10_68 < 8; comb_rc_index_n10_68 = comb_rc_index_n10_68 + 1) {
    _preg_268435648 = Rotate(comb_row_result10_65, comb_rc_index_n10_68 * 24);
    Copy_ciph(&_ckks_gen_tmp_1242_248, &_preg_268435648);
    Pt_from_msg_ofst(&_pgen_tmp_57_346, 28/* cst_94 */, (comb_rc_index_n10_68) * (16384), 16384, 1, 3);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_58_347, &_ckks_gen_tmp_1242_248, &_pgen_tmp_57_346);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&comb_rc_result10_67, &comb_rc_result10_67, &_pgen_tmp_58_347);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&comb_rc_result10_67._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_58_347._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1242_248._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_57_346._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_58_347._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1242_248._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_57_346._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&comb_rc_result10_67._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&comb_rc_result10_67._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_58_347._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&comb_rc_result10_67._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&comb_rc_result10_67._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_58_347._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435648._c1_poly);
    Free_poly_data(&_preg_268435648._c0_poly);
  }
  Free_poly_data(&comb_row_result10_65._c1_poly);
  Free_poly_data(&comb_row_result10_65._c0_poly);
  Free_poly_data(&_pgen_tmp_57_346._poly);
  Free_poly_data(&_ckks_gen_tmp_1242_248._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1242_248._c0_poly);
  Free_poly_data(&_pgen_tmp_58_347._c1_poly);
  Free_poly_data(&_pgen_tmp_58_347._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&comb_rc_result10_67, &comb_rc_result10_67);
  Rescale(&comb_rc_result10_67._c0_poly, &comb_rc_result10_67._c0_poly);
  Rescale(&comb_rc_result10_67._c1_poly, &comb_rc_result10_67._c1_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&ss_result10_69);
  for (comb_cc_index_n10_70 = 0; comb_cc_index_n10_70 < 64; comb_cc_index_n10_70 = comb_cc_index_n10_70 + 1) {
    _preg_268435649 = Rotate(comb_rc_result10_67, comb_cc_index_n10_70 * 192);
    Copy_ciph(&_ckks_gen_tmp_1275_249, &_preg_268435649);
    Pt_from_msg_ofst(&_pgen_tmp_59_348, 29/* cst_95 */, (comb_cc_index_n10_70) * (16384), 16384, 1, 2);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_60_349, &_ckks_gen_tmp_1275_249, &_pgen_tmp_59_348);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&ss_result10_69, &ss_result10_69, &_pgen_tmp_60_349);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&ss_result10_69._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_60_349._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1275_249._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_59_348._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_60_349._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1275_249._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_59_348._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&ss_result10_69._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&ss_result10_69._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_60_349._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&ss_result10_69._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&ss_result10_69._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_60_349._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435649._c1_poly);
    Free_poly_data(&_preg_268435649._c0_poly);
  }
  Free_poly_data(&comb_rc_result10_67._c1_poly);
  Free_poly_data(&comb_rc_result10_67._c0_poly);
  Free_poly_data(&_pgen_tmp_59_348._poly);
  Free_poly_data(&_ckks_gen_tmp_1275_249._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1275_249._c0_poly);
  Free_poly_data(&_pgen_tmp_60_349._c1_poly);
  Free_poly_data(&_pgen_tmp_60_349._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&ss_result10_69, &ss_result10_69);
  Rescale(&ss_result10_69._c0_poly, &ss_result10_69._c0_poly);
  Rescale(&ss_result10_69._c1_poly, &ss_result10_69._c1_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&_preg_268435500, &ss_result10_69);
  Free_poly_data(&ss_result10_69._c1_poly);
  Free_poly_data(&ss_result10_69._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 52
  // /layers/layers.3/relu1/Relu
  // pragma: 65536, 1033, 53
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435501, &_preg_268435500, 14);
  Free_poly_data(&_preg_268435500._c1_poly);
  Free_poly_data(&_preg_268435500._c0_poly);
  _preg_268435502 = App_relu(_preg_268435501, _preg_268435501, 4096);
  Free_poly_data(&_preg_268435501._c1_poly);
  Free_poly_data(&_preg_268435501._c0_poly);
  Copy_ciph(&_preg_268435503, &_preg_268435502);
  Free_poly_data(&_preg_268435502._c1_poly);
  Free_poly_data(&_preg_268435502._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 53
  // /layers/layers.3/conv2/Conv
  // pragma: 65536, 1027, 54
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435504, &_preg_268435503);
  Free_poly_data(&_preg_268435503._c1_poly);
  Free_poly_data(&_preg_268435503._c0_poly);
  // BlockingRot replicate=3
  _preg_268435650 = Rotate(_preg_268435504, -4096);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_61_350, &_preg_268435504, &_preg_268435650);
  CMPLR_TM_END(12, 0);
  _preg_268435651 = Rotate(_preg_268435504, -8192);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n10_71, &_pgen_tmp_61_350, &_preg_268435651);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&input_dup_n10_71._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_61_350._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435504._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435650._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_61_350._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435504._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435650._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&input_dup_n10_71._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_61_350._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435651._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&input_dup_n10_71._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_61_350._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435651._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_preg_268435650._c1_poly);
  Free_poly_data(&_preg_268435650._c0_poly);
  Free_poly_data(&_preg_268435504._c1_poly);
  Free_poly_data(&_preg_268435504._c0_poly);
  Free_poly_data(&_preg_268435651._c1_poly);
  Free_poly_data(&_preg_268435651._c0_poly);
  Free_poly_data(&_pgen_tmp_61_350._c1_poly);
  Free_poly_data(&_pgen_tmp_61_350._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=8
  for (bs_input_n10_72 = 0; bs_input_n10_72 < 8; bs_input_n10_72 = bs_input_n10_72 + 1) {
    _preg_268435652 = Rotate(input_dup_n10_71, _cst_99[bs_input_n10_72]);
    Copy_ciph(&input_block_n10_73[bs_input_n10_72], &_preg_268435652);
    Free_poly_data(&_preg_268435652._c1_poly);
    Free_poly_data(&_preg_268435652._c0_poly);
  }
  Free_poly_data(&input_dup_n10_71._c1_poly);
  Free_poly_data(&input_dup_n10_71._c0_poly);
  Zero_ciph(&result_n11_74);
  for (num_grid_n11_75 = 0; num_grid_n11_75 < 8; num_grid_n11_75 = num_grid_n11_75 + 1) {
    Zero_ciph(&result_grid_n11_76);
    for (cap_block_n11_77 = 0; cap_block_n11_77 < 8; cap_block_n11_77 = cap_block_n11_77 + 1) {
      _ckks_gen_tmp_1379_250 = input_block_n10_73[cap_block_n11_77];
      Pt_from_msg_ofst(&_pgen_tmp_62_351, 30/* cst_97 */, ((cap_block_n11_77 + (num_grid_n11_75 * 8))) * (8192), 8192, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_63_352, &_ckks_gen_tmp_1379_250, &_pgen_tmp_62_351);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n11_76, &result_grid_n11_76, &_pgen_tmp_63_352);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n11_76._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_63_352._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1379_250._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_62_351._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_63_352._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1379_250._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_62_351._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n11_76._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n11_76._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_63_352._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n11_76._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n11_76._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_63_352._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435653 = Rotate(result_grid_n11_76, num_grid_n11_75 * 512);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n11_74, &result_n11_74, &_preg_268435653);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n11_74._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n11_74._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n11_74._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435653._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n11_74._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n11_74._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435653._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435653._c1_poly);
    Free_poly_data(&_preg_268435653._c0_poly);
  }
  Free_ciph_poly(input_block_n10_73, 8);
  Free_poly_data(&_pgen_tmp_62_351._poly);
  Free_poly_data(&_pgen_tmp_63_352._c1_poly);
  Free_poly_data(&_pgen_tmp_63_352._c0_poly);
  Free_poly_data(&result_grid_n11_76._c1_poly);
  Free_poly_data(&result_grid_n11_76._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n11_74, &result_n11_74);
  Rescale(&result_n11_74._c0_poly, &result_n11_74._c0_poly);
  Rescale(&result_n11_74._c1_poly, &result_n11_74._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_65_354, 31 /* cst_100 */, 8192, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_64_353, &result_n11_74, &_pgen_tmp_65_354);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_64_353._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_64_353._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n11_74._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_65_354._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_64_353._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n11_74._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_65_354._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_65_354._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435505, &_pgen_tmp_64_353);
  Rescale(&_preg_268435505._c0_poly, &_pgen_tmp_64_353._c0_poly);
  Rescale(&_preg_268435505._c1_poly, &_pgen_tmp_64_353._c1_poly);
  Free_poly_data(&_pgen_tmp_64_353._c1_poly);
  Free_poly_data(&_pgen_tmp_64_353._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435654 = Rotate(result_n11_74, -8192);
  Copy_ciph(&_ckks_gen_tmp_1423_251, &_preg_268435654);
  Free_poly_data(&_preg_268435654._c1_poly);
  Free_poly_data(&_preg_268435654._c0_poly);
  Pt_from_msg(&_pgen_tmp_67_356, 32 /* cst_101 */, 8192, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_66_355, &_ckks_gen_tmp_1423_251, &_pgen_tmp_67_356);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_66_355._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_66_355._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1423_251._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_67_356._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_66_355._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1423_251._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_67_356._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_67_356._poly);
  Free_poly_data(&_ckks_gen_tmp_1423_251._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1423_251._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_68_357, &_pgen_tmp_66_355);
  Rescale(&_pgen_tmp_68_357._c0_poly, &_pgen_tmp_66_355._c0_poly);
  Rescale(&_pgen_tmp_68_357._c1_poly, &_pgen_tmp_66_355._c1_poly);
  Free_poly_data(&_pgen_tmp_66_355._c1_poly);
  Free_poly_data(&_pgen_tmp_66_355._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435505, &_preg_268435505, &_pgen_tmp_68_357);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_preg_268435505._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&_preg_268435505._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435505._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_68_357._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_preg_268435505._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435505._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_68_357._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_68_357._c1_poly);
  Free_poly_data(&_pgen_tmp_68_357._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_69_358, 33 /* cst_98 */, 8192, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n11_74, &_preg_268435505, &_pgen_tmp_69_358);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n11_74._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n11_74._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435505._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_69_358._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n11_74._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&_preg_268435505._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_69_358._poly);
  Free_poly_data(&_preg_268435505._c1_poly);
  Free_poly_data(&_preg_268435505._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435506, &result_n11_74);
  Free_poly_data(&result_n11_74._c1_poly);
  Free_poly_data(&result_n11_74._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 54
  // /layers/layers.3/relu2/Relu
  // pragma: 65536, 1033, 55
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435507, &_preg_268435506, 13);
  Free_poly_data(&_preg_268435506._c1_poly);
  Free_poly_data(&_preg_268435506._c0_poly);
  _preg_268435508 = App_relu(_preg_268435507, _preg_268435507, 8192);
  Free_poly_data(&_preg_268435507._c1_poly);
  Free_poly_data(&_preg_268435507._c0_poly);
  Copy_ciph(&_preg_268435509, &_preg_268435508);
  Free_poly_data(&_preg_268435508._c1_poly);
  Free_poly_data(&_preg_268435508._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 55
  // /layers/layers.4/conv1/Conv
  // pragma: 65536, 1027, 56
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435510, &_preg_268435509);
  Free_poly_data(&_preg_268435509._c1_poly);
  Free_poly_data(&_preg_268435509._c0_poly);
  // BlockingRot replicate=1
  Copy_ciph(&input_dup_n11_78, &_preg_268435510);
  Free_poly_data(&_preg_268435510._c1_poly);
  Free_poly_data(&_preg_268435510._c0_poly);
  // BlockingRot HRot=bs=9
  for (bs_input_n11_79 = 0; bs_input_n11_79 < 9; bs_input_n11_79 = bs_input_n11_79 + 1) {
    _preg_268435655 = Rotate(input_dup_n11_78, _cst_105[bs_input_n11_79]);
    Copy_ciph(&input_block_n11_80[bs_input_n11_79], &_preg_268435655);
    Free_poly_data(&_preg_268435655._c1_poly);
    Free_poly_data(&_preg_268435655._c0_poly);
  }
  Free_poly_data(&input_dup_n11_78._c1_poly);
  Free_poly_data(&input_dup_n11_78._c0_poly);
  Zero_ciph(&result_n12_81);
  for (num_grid_n12_82 = 0; num_grid_n12_82 < 1; num_grid_n12_82 = num_grid_n12_82 + 1) {
    Zero_ciph(&result_grid_n12_83);
    for (cap_block_n12_84 = 0; cap_block_n12_84 < 9; cap_block_n12_84 = cap_block_n12_84 + 1) {
      _ckks_gen_tmp_1526_252 = input_block_n11_80[cap_block_n12_84];
      Pt_from_msg_ofst(&_pgen_tmp_70_359, 34/* cst_103 */, ((cap_block_n12_84 + (num_grid_n12_82 * 9))) * (8192), 8192, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_71_360, &_ckks_gen_tmp_1526_252, &_pgen_tmp_70_359);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n12_83, &result_grid_n12_83, &_pgen_tmp_71_360);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n12_83._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_71_360._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1526_252._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_70_359._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_71_360._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1526_252._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_70_359._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n12_83._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n12_83._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_71_360._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n12_83._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n12_83._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_71_360._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435656 = Rotate(result_grid_n12_83, num_grid_n12_82 * 64);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n12_81, &result_n12_81, &_preg_268435656);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n12_81._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n12_81._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n12_81._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435656._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n12_81._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n12_81._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435656._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435656._c1_poly);
    Free_poly_data(&_preg_268435656._c0_poly);
  }
  Free_ciph_poly(input_block_n11_80, 9);
  Free_poly_data(&_pgen_tmp_70_359._poly);
  Free_poly_data(&_pgen_tmp_71_360._c1_poly);
  Free_poly_data(&_pgen_tmp_71_360._c0_poly);
  Free_poly_data(&result_grid_n12_83._c1_poly);
  Free_poly_data(&result_grid_n12_83._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n12_81, &result_n12_81);
  Rescale(&result_n12_81._c0_poly, &result_n12_81._c0_poly);
  Rescale(&result_n12_81._c1_poly, &result_n12_81._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_72_361, 35 /* cst_104 */, 8192, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n12_81, &result_n12_81, &_pgen_tmp_72_361);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n12_81._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n12_81._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n12_81._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_72_361._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n12_81._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&result_n12_81._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_72_361._poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435511, &result_n12_81);
  Free_poly_data(&result_n12_81._c1_poly);
  Free_poly_data(&result_n12_81._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 56
  // /layers/layers.4/relu1/Relu
  // pragma: 65536, 1033, 57
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435512, &_preg_268435511, 14);
  Free_poly_data(&_preg_268435511._c1_poly);
  Free_poly_data(&_preg_268435511._c0_poly);
  _preg_268435513 = App_relu(_preg_268435512, _preg_268435512, 8192);
  Free_poly_data(&_preg_268435512._c1_poly);
  Free_poly_data(&_preg_268435512._c0_poly);
  Copy_ciph(&_preg_268435514, &_preg_268435513);
  Free_poly_data(&_preg_268435513._c1_poly);
  Free_poly_data(&_preg_268435513._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 57
  // /layers/layers.4/conv2/Conv
  // pragma: 65536, 1027, 58
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435515, &_preg_268435514);
  Free_poly_data(&_preg_268435514._c1_poly);
  Free_poly_data(&_preg_268435514._c0_poly);
  // BlockingRot replicate=2
  _preg_268435657 = Rotate(_preg_268435515, -8192);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n12_85, &_preg_268435515, &_preg_268435657);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&input_dup_n12_85._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&input_dup_n12_85._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435515._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435657._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&input_dup_n12_85._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435515._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435657._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_preg_268435657._c1_poly);
  Free_poly_data(&_preg_268435657._c0_poly);
  Free_poly_data(&_preg_268435515._c1_poly);
  Free_poly_data(&_preg_268435515._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=8
  for (bs_input_n12_86 = 0; bs_input_n12_86 < 8; bs_input_n12_86 = bs_input_n12_86 + 1) {
    _preg_268435658 = Rotate(input_dup_n12_85, _cst_109[bs_input_n12_86]);
    Copy_ciph(&input_block_n12_87[bs_input_n12_86], &_preg_268435658);
    Free_poly_data(&_preg_268435658._c1_poly);
    Free_poly_data(&_preg_268435658._c0_poly);
  }
  Free_poly_data(&input_dup_n12_85._c1_poly);
  Free_poly_data(&input_dup_n12_85._c0_poly);
  Zero_ciph(&result_n13_88);
  for (num_grid_n13_89 = 0; num_grid_n13_89 < 16; num_grid_n13_89 = num_grid_n13_89 + 1) {
    Zero_ciph(&result_grid_n13_90);
    for (cap_block_n13_91 = 0; cap_block_n13_91 < 8; cap_block_n13_91 = cap_block_n13_91 + 1) {
      _ckks_gen_tmp_1651_253 = input_block_n12_87[cap_block_n13_91];
      Pt_from_msg_ofst(&_pgen_tmp_73_362, 36/* cst_107 */, ((cap_block_n13_91 + (num_grid_n13_89 * 8))) * (8192), 8192, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_74_363, &_ckks_gen_tmp_1651_253, &_pgen_tmp_73_362);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n13_90, &result_grid_n13_90, &_pgen_tmp_74_363);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n13_90._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_74_363._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1651_253._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_73_362._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_74_363._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1651_253._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_73_362._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n13_90._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n13_90._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_74_363._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n13_90._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n13_90._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_74_363._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435659 = Rotate(result_grid_n13_90, num_grid_n13_89 * 512);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n13_88, &result_n13_88, &_preg_268435659);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n13_88._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n13_88._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n13_88._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435659._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n13_88._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n13_88._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435659._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435659._c1_poly);
    Free_poly_data(&_preg_268435659._c0_poly);
  }
  Free_ciph_poly(input_block_n12_87, 8);
  Free_poly_data(&_pgen_tmp_73_362._poly);
  Free_poly_data(&_pgen_tmp_74_363._c1_poly);
  Free_poly_data(&_pgen_tmp_74_363._c0_poly);
  Free_poly_data(&result_grid_n13_90._c1_poly);
  Free_poly_data(&result_grid_n13_90._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n13_88, &result_n13_88);
  Rescale(&result_n13_88._c0_poly, &result_n13_88._c0_poly);
  Rescale(&result_n13_88._c1_poly, &result_n13_88._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_76_365, 37 /* cst_110 */, 8192, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_75_364, &result_n13_88, &_pgen_tmp_76_365);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_75_364._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_75_364._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n13_88._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_76_365._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_75_364._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n13_88._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_76_365._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_76_365._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435516, &_pgen_tmp_75_364);
  Rescale(&_preg_268435516._c0_poly, &_pgen_tmp_75_364._c0_poly);
  Rescale(&_preg_268435516._c1_poly, &_pgen_tmp_75_364._c1_poly);
  Free_poly_data(&_pgen_tmp_75_364._c1_poly);
  Free_poly_data(&_pgen_tmp_75_364._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435660 = Rotate(result_n13_88, -8192);
  Copy_ciph(&_ckks_gen_tmp_1695_254, &_preg_268435660);
  Free_poly_data(&_preg_268435660._c1_poly);
  Free_poly_data(&_preg_268435660._c0_poly);
  Pt_from_msg(&_pgen_tmp_78_367, 38 /* cst_111 */, 8192, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_77_366, &_ckks_gen_tmp_1695_254, &_pgen_tmp_78_367);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_77_366._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_77_366._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1695_254._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_78_367._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_77_366._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1695_254._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_78_367._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_78_367._poly);
  Free_poly_data(&_ckks_gen_tmp_1695_254._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1695_254._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_79_368, &_pgen_tmp_77_366);
  Rescale(&_pgen_tmp_79_368._c0_poly, &_pgen_tmp_77_366._c0_poly);
  Rescale(&_pgen_tmp_79_368._c1_poly, &_pgen_tmp_77_366._c1_poly);
  Free_poly_data(&_pgen_tmp_77_366._c1_poly);
  Free_poly_data(&_pgen_tmp_77_366._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435516, &_preg_268435516, &_pgen_tmp_79_368);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_preg_268435516._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&_preg_268435516._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435516._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_79_368._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_preg_268435516._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435516._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_79_368._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_79_368._c1_poly);
  Free_poly_data(&_pgen_tmp_79_368._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_80_369, 39 /* cst_108 */, 8192, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n13_88, &_preg_268435516, &_pgen_tmp_80_369);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n13_88._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n13_88._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435516._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_80_369._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n13_88._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&_preg_268435516._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_80_369._poly);
  Free_poly_data(&_preg_268435516._c1_poly);
  Free_poly_data(&_preg_268435516._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435517, &result_n13_88);
  Free_poly_data(&result_n13_88._c1_poly);
  Free_poly_data(&result_n13_88._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 58
  // /layers/layers.4/relu2/Relu
  // pragma: 65536, 1033, 59
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435518, &_preg_268435517, 15);
  Free_poly_data(&_preg_268435517._c1_poly);
  Free_poly_data(&_preg_268435517._c0_poly);
  _preg_268435519 = App_relu(_preg_268435518, _preg_268435518, 8192);
  Free_poly_data(&_preg_268435518._c1_poly);
  Free_poly_data(&_preg_268435518._c0_poly);
  Copy_ciph(&_preg_268435520, &_preg_268435519);
  Free_poly_data(&_preg_268435519._c1_poly);
  Free_poly_data(&_preg_268435519._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 59
  // /layers/layers.5/conv1/Conv
  // pragma: 65536, 1027, 60
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435521, &_preg_268435520);
  Free_poly_data(&_preg_268435520._c1_poly);
  Free_poly_data(&_preg_268435520._c0_poly);
  // BlockingRot replicate=1
  Copy_ciph(&input_dup_n13_92, &_preg_268435521);
  Free_poly_data(&_preg_268435521._c1_poly);
  Free_poly_data(&_preg_268435521._c0_poly);
  // BlockingRot HRot=bs=9
  for (bs_input_n13_93 = 0; bs_input_n13_93 < 9; bs_input_n13_93 = bs_input_n13_93 + 1) {
    _preg_268435661 = Rotate(input_dup_n13_92, _cst_115[bs_input_n13_93]);
    Copy_ciph(&input_block_n13_94[bs_input_n13_93], &_preg_268435661);
    Free_poly_data(&_preg_268435661._c1_poly);
    Free_poly_data(&_preg_268435661._c0_poly);
  }
  Free_poly_data(&input_dup_n13_92._c1_poly);
  Free_poly_data(&input_dup_n13_92._c0_poly);
  Zero_ciph(&result_n14_95);
  for (num_grid_n14_96 = 0; num_grid_n14_96 < 1; num_grid_n14_96 = num_grid_n14_96 + 1) {
    Zero_ciph(&result_grid_n14_97);
    for (cap_block_n14_98 = 0; cap_block_n14_98 < 9; cap_block_n14_98 = cap_block_n14_98 + 1) {
      _ckks_gen_tmp_1798_255 = input_block_n13_94[cap_block_n14_98];
      Pt_from_msg_ofst(&_pgen_tmp_81_370, 40/* cst_113 */, ((cap_block_n14_98 + (num_grid_n14_96 * 9))) * (8192), 8192, 1, 4);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_82_371, &_ckks_gen_tmp_1798_255, &_pgen_tmp_81_370);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n14_97, &result_grid_n14_97, &_pgen_tmp_82_371);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n14_97._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_82_371._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1798_255._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_81_370._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_82_371._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1798_255._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_81_370._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n14_97._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n14_97._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_82_371._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n14_97._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n14_97._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_82_371._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435662 = Rotate(result_grid_n14_97, num_grid_n14_96 * 64);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n14_95, &result_n14_95, &_preg_268435662);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n14_95._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n14_95._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n14_95._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435662._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n14_95._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n14_95._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435662._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435662._c1_poly);
    Free_poly_data(&_preg_268435662._c0_poly);
  }
  Free_ciph_poly(input_block_n13_94, 9);
  Free_poly_data(&_pgen_tmp_81_370._poly);
  Free_poly_data(&_pgen_tmp_82_371._c1_poly);
  Free_poly_data(&_pgen_tmp_82_371._c0_poly);
  Free_poly_data(&result_grid_n14_97._c1_poly);
  Free_poly_data(&result_grid_n14_97._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n14_95, &result_n14_95);
  Rescale(&result_n14_95._c0_poly, &result_n14_95._c0_poly);
  Rescale(&result_n14_95._c1_poly, &result_n14_95._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_83_372, 41 /* cst_114 */, 8192, 1, 3);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n14_95, &result_n14_95, &_pgen_tmp_83_372);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n14_95._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n14_95._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n14_95._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_83_372._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n14_95._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&result_n14_95._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_83_372._poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435522, &result_n14_95);
  Free_poly_data(&result_n14_95._c1_poly);
  Free_poly_data(&result_n14_95._c0_poly);
  Copy_ciph(&orig_result14_99, &_preg_268435522);
  Free_poly_data(&_preg_268435522._c1_poly);
  Free_poly_data(&_preg_268435522._c0_poly);
  Zero_ciph(&comb_dic_result15_100);
  for (comb_dic_index_n15_101 = 0; comb_dic_index_n15_101 < 1; comb_dic_index_n15_101 = comb_dic_index_n15_101 + 1) {
    _preg_268435663 = Rotate(orig_result14_99, 1 << comb_dic_index_n15_101);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&orig_result14_99, &orig_result14_99, &_preg_268435663);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&orig_result14_99._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&orig_result14_99._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&orig_result14_99._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435663._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&orig_result14_99._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&orig_result14_99._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435663._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435663._c1_poly);
    Free_poly_data(&_preg_268435663._c0_poly);
  }
  for (comb_dic_index_out_n15_102 = 0; comb_dic_index_out_n15_102 < 4; comb_dic_index_out_n15_102 = comb_dic_index_out_n15_102 + 1) {
    for (comb_dic_index_in_n15_103 = 0; comb_dic_index_in_n15_103 < 2; comb_dic_index_in_n15_103 = comb_dic_index_in_n15_103 + 1) {
      _preg_268435664 = Rotate(orig_result14_99, (comb_dic_index_out_n15_102 * 12) + (comb_dic_index_in_n15_103 * 2));
      Copy_ciph(&_ckks_gen_tmp_1892_256, &_preg_268435664);
      Pt_from_msg_ofst(&_pgen_tmp_84_373, 42/* cst_116 */, (((comb_dic_index_out_n15_102 * 2) + comb_dic_index_in_n15_103)) * (8192), 8192, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_85_374, &_ckks_gen_tmp_1892_256, &_pgen_tmp_84_373);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_dic_result15_100, &comb_dic_result15_100, &_pgen_tmp_85_374);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&comb_dic_result15_100._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_85_374._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1892_256._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_84_373._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_85_374._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1892_256._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_84_373._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&comb_dic_result15_100._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&comb_dic_result15_100._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_85_374._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&comb_dic_result15_100._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&comb_dic_result15_100._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_85_374._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435664._c1_poly);
      Free_poly_data(&_preg_268435664._c0_poly);
    }
  }
  Free_poly_data(&orig_result14_99._c1_poly);
  Free_poly_data(&orig_result14_99._c0_poly);
  Free_poly_data(&_pgen_tmp_84_373._poly);
  Free_poly_data(&_ckks_gen_tmp_1892_256._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1892_256._c0_poly);
  Free_poly_data(&_pgen_tmp_85_374._c1_poly);
  Free_poly_data(&_pgen_tmp_85_374._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&comb_dic_result15_100, &comb_dic_result15_100);
  Rescale(&comb_dic_result15_100._c0_poly, &comb_dic_result15_100._c0_poly);
  Rescale(&comb_dic_result15_100._c1_poly, &comb_dic_result15_100._c1_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&ss_result15_104);
  for (comb_cc_index_n15_105 = 0; comb_cc_index_n15_105 < 128; comb_cc_index_n15_105 = comb_cc_index_n15_105 + 1) {
    _preg_268435665 = Rotate(comb_dic_result15_100, comb_cc_index_n15_105 * 48);
    Copy_ciph(&_ckks_gen_tmp_1929_257, &_preg_268435665);
    Pt_from_msg_ofst(&_pgen_tmp_86_375, 43/* cst_117 */, (comb_cc_index_n15_105) * (8192), 8192, 1, 2);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_87_376, &_ckks_gen_tmp_1929_257, &_pgen_tmp_86_375);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&ss_result15_104, &ss_result15_104, &_pgen_tmp_87_376);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&ss_result15_104._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_87_376._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1929_257._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_86_375._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_87_376._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_1929_257._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_86_375._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&ss_result15_104._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&ss_result15_104._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_87_376._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&ss_result15_104._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&ss_result15_104._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_87_376._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435665._c1_poly);
    Free_poly_data(&_preg_268435665._c0_poly);
  }
  Free_poly_data(&comb_dic_result15_100._c1_poly);
  Free_poly_data(&comb_dic_result15_100._c0_poly);
  Free_poly_data(&_pgen_tmp_86_375._poly);
  Free_poly_data(&_ckks_gen_tmp_1929_257._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1929_257._c0_poly);
  Free_poly_data(&_pgen_tmp_87_376._c1_poly);
  Free_poly_data(&_pgen_tmp_87_376._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&ss_result15_104, &ss_result15_104);
  Rescale(&ss_result15_104._c0_poly, &ss_result15_104._c0_poly);
  Rescale(&ss_result15_104._c1_poly, &ss_result15_104._c1_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&_preg_268435523, &ss_result15_104);
  Free_poly_data(&ss_result15_104._c1_poly);
  Free_poly_data(&ss_result15_104._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 60
  // /layers/layers.5/relu1/Relu
  // pragma: 65536, 1033, 61
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435524, &_preg_268435523, 14);
  Free_poly_data(&_preg_268435523._c1_poly);
  Free_poly_data(&_preg_268435523._c0_poly);
  _preg_268435525 = App_relu(_preg_268435524, _preg_268435524, 2048);
  Free_poly_data(&_preg_268435524._c1_poly);
  Free_poly_data(&_preg_268435524._c0_poly);
  Copy_ciph(&_preg_268435526, &_preg_268435525);
  Free_poly_data(&_preg_268435525._c1_poly);
  Free_poly_data(&_preg_268435525._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 61
  // /layers/layers.5/conv2/Conv
  // pragma: 65536, 1027, 62
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435527, &_preg_268435526);
  Free_poly_data(&_preg_268435526._c1_poly);
  Free_poly_data(&_preg_268435526._c0_poly);
  // BlockingRot replicate=3
  _preg_268435666 = Rotate(_preg_268435527, -2048);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_88_377, &_preg_268435527, &_preg_268435666);
  CMPLR_TM_END(12, 0);
  _preg_268435667 = Rotate(_preg_268435527, -4096);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n15_106, &_pgen_tmp_88_377, &_preg_268435667);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&input_dup_n15_106._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_88_377._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435527._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435666._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_88_377._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435527._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435666._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&input_dup_n15_106._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_88_377._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435667._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&input_dup_n15_106._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_88_377._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435667._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_preg_268435666._c1_poly);
  Free_poly_data(&_preg_268435666._c0_poly);
  Free_poly_data(&_preg_268435527._c1_poly);
  Free_poly_data(&_preg_268435527._c0_poly);
  Free_poly_data(&_preg_268435667._c1_poly);
  Free_poly_data(&_preg_268435667._c0_poly);
  Free_poly_data(&_pgen_tmp_88_377._c1_poly);
  Free_poly_data(&_pgen_tmp_88_377._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=8
  for (bs_input_n15_107 = 0; bs_input_n15_107 < 8; bs_input_n15_107 = bs_input_n15_107 + 1) {
    _preg_268435668 = Rotate(input_dup_n15_106, _cst_121[bs_input_n15_107]);
    Copy_ciph(&input_block_n15_108[bs_input_n15_107], &_preg_268435668);
    Free_poly_data(&_preg_268435668._c1_poly);
    Free_poly_data(&_preg_268435668._c0_poly);
  }
  Free_poly_data(&input_dup_n15_106._c1_poly);
  Free_poly_data(&input_dup_n15_106._c0_poly);
  Zero_ciph(&result_n16_109);
  for (num_grid_n16_110 = 0; num_grid_n16_110 < 16; num_grid_n16_110 = num_grid_n16_110 + 1) {
    Zero_ciph(&result_grid_n16_111);
    for (cap_block_n16_112 = 0; cap_block_n16_112 < 8; cap_block_n16_112 = cap_block_n16_112 + 1) {
      _ckks_gen_tmp_2033_258 = input_block_n15_108[cap_block_n16_112];
      Pt_from_msg_ofst(&_pgen_tmp_89_378, 44/* cst_119 */, ((cap_block_n16_112 + (num_grid_n16_110 * 8))) * (4096), 4096, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_90_379, &_ckks_gen_tmp_2033_258, &_pgen_tmp_89_378);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n16_111, &result_grid_n16_111, &_pgen_tmp_90_379);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n16_111._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_90_379._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2033_258._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_89_378._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_90_379._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2033_258._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_89_378._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n16_111._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n16_111._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_90_379._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n16_111._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n16_111._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_90_379._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435669 = Rotate(result_grid_n16_111, num_grid_n16_110 * 128);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n16_109, &result_n16_109, &_preg_268435669);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n16_109._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n16_109._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n16_109._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435669._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n16_109._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n16_109._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435669._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435669._c1_poly);
    Free_poly_data(&_preg_268435669._c0_poly);
  }
  Free_ciph_poly(input_block_n15_108, 8);
  Free_poly_data(&_pgen_tmp_89_378._poly);
  Free_poly_data(&_pgen_tmp_90_379._c1_poly);
  Free_poly_data(&_pgen_tmp_90_379._c0_poly);
  Free_poly_data(&result_grid_n16_111._c1_poly);
  Free_poly_data(&result_grid_n16_111._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n16_109, &result_n16_109);
  Rescale(&result_n16_109._c0_poly, &result_n16_109._c0_poly);
  Rescale(&result_n16_109._c1_poly, &result_n16_109._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_92_381, 45 /* cst_122 */, 4096, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_91_380, &result_n16_109, &_pgen_tmp_92_381);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_91_380._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_91_380._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n16_109._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_92_381._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_91_380._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n16_109._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_92_381._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_92_381._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435528, &_pgen_tmp_91_380);
  Rescale(&_preg_268435528._c0_poly, &_pgen_tmp_91_380._c0_poly);
  Rescale(&_preg_268435528._c1_poly, &_pgen_tmp_91_380._c1_poly);
  Free_poly_data(&_pgen_tmp_91_380._c1_poly);
  Free_poly_data(&_pgen_tmp_91_380._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435670 = Rotate(result_n16_109, -4096);
  Copy_ciph(&_ckks_gen_tmp_2077_259, &_preg_268435670);
  Free_poly_data(&_preg_268435670._c1_poly);
  Free_poly_data(&_preg_268435670._c0_poly);
  Pt_from_msg(&_pgen_tmp_94_383, 46 /* cst_123 */, 4096, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_93_382, &_ckks_gen_tmp_2077_259, &_pgen_tmp_94_383);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_93_382._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_93_382._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2077_259._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_94_383._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_93_382._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2077_259._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_94_383._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_94_383._poly);
  Free_poly_data(&_ckks_gen_tmp_2077_259._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2077_259._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_95_384, &_pgen_tmp_93_382);
  Rescale(&_pgen_tmp_95_384._c0_poly, &_pgen_tmp_93_382._c0_poly);
  Rescale(&_pgen_tmp_95_384._c1_poly, &_pgen_tmp_93_382._c1_poly);
  Free_poly_data(&_pgen_tmp_93_382._c1_poly);
  Free_poly_data(&_pgen_tmp_93_382._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435528, &_preg_268435528, &_pgen_tmp_95_384);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_preg_268435528._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&_preg_268435528._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435528._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_95_384._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_preg_268435528._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435528._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_95_384._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_95_384._c1_poly);
  Free_poly_data(&_pgen_tmp_95_384._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_96_385, 47 /* cst_120 */, 4096, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n16_109, &_preg_268435528, &_pgen_tmp_96_385);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n16_109._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n16_109._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435528._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_96_385._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n16_109._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&_preg_268435528._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_96_385._poly);
  Free_poly_data(&_preg_268435528._c1_poly);
  Free_poly_data(&_preg_268435528._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435529, &result_n16_109);
  Free_poly_data(&result_n16_109._c1_poly);
  Free_poly_data(&result_n16_109._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 62
  // /layers/layers.5/relu2/Relu
  // pragma: 65536, 1033, 63
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435530, &_preg_268435529, 13);
  Free_poly_data(&_preg_268435529._c1_poly);
  Free_poly_data(&_preg_268435529._c0_poly);
  _preg_268435531 = App_relu(_preg_268435530, _preg_268435530, 4096);
  Free_poly_data(&_preg_268435530._c1_poly);
  Free_poly_data(&_preg_268435530._c0_poly);
  Copy_ciph(&_preg_268435532, &_preg_268435531);
  Free_poly_data(&_preg_268435531._c1_poly);
  Free_poly_data(&_preg_268435531._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 63
  // /layers/layers.6/conv1/Conv
  // pragma: 65536, 1027, 64
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435533, &_preg_268435532);
  Free_poly_data(&_preg_268435532._c1_poly);
  Free_poly_data(&_preg_268435532._c0_poly);
  // BlockingRot replicate=1
  Copy_ciph(&input_dup_n16_113, &_preg_268435533);
  Free_poly_data(&_preg_268435533._c1_poly);
  Free_poly_data(&_preg_268435533._c0_poly);
  // BlockingRot HRot=bs=9
  for (bs_input_n16_114 = 0; bs_input_n16_114 < 9; bs_input_n16_114 = bs_input_n16_114 + 1) {
    _preg_268435671 = Rotate(input_dup_n16_113, _cst_127[bs_input_n16_114]);
    Copy_ciph(&input_block_n16_115[bs_input_n16_114], &_preg_268435671);
    Free_poly_data(&_preg_268435671._c1_poly);
    Free_poly_data(&_preg_268435671._c0_poly);
  }
  Free_poly_data(&input_dup_n16_113._c1_poly);
  Free_poly_data(&input_dup_n16_113._c0_poly);
  Zero_ciph(&result_n17_116);
  for (num_grid_n17_117 = 0; num_grid_n17_117 < 1; num_grid_n17_117 = num_grid_n17_117 + 1) {
    Zero_ciph(&result_grid_n17_118);
    for (cap_block_n17_119 = 0; cap_block_n17_119 < 9; cap_block_n17_119 = cap_block_n17_119 + 1) {
      _ckks_gen_tmp_2180_260 = input_block_n16_115[cap_block_n17_119];
      Pt_from_msg_ofst(&_pgen_tmp_97_386, 48/* cst_125 */, ((cap_block_n17_119 + (num_grid_n17_117 * 9))) * (4096), 4096, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_98_387, &_ckks_gen_tmp_2180_260, &_pgen_tmp_97_386);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n17_118, &result_grid_n17_118, &_pgen_tmp_98_387);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n17_118._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_98_387._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2180_260._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_97_386._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_98_387._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2180_260._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_97_386._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n17_118._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n17_118._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_98_387._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n17_118._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n17_118._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_98_387._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435672 = Rotate(result_grid_n17_118, num_grid_n17_117 * 16);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n17_116, &result_n17_116, &_preg_268435672);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n17_116._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n17_116._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n17_116._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435672._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n17_116._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n17_116._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435672._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435672._c1_poly);
    Free_poly_data(&_preg_268435672._c0_poly);
  }
  Free_ciph_poly(input_block_n16_115, 9);
  Free_poly_data(&_pgen_tmp_97_386._poly);
  Free_poly_data(&_pgen_tmp_98_387._c1_poly);
  Free_poly_data(&_pgen_tmp_98_387._c0_poly);
  Free_poly_data(&result_grid_n17_118._c1_poly);
  Free_poly_data(&result_grid_n17_118._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n17_116, &result_n17_116);
  Rescale(&result_n17_116._c0_poly, &result_n17_116._c0_poly);
  Rescale(&result_n17_116._c1_poly, &result_n17_116._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_99_388, 49 /* cst_126 */, 4096, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n17_116, &result_n17_116, &_pgen_tmp_99_388);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n17_116._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n17_116._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n17_116._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_99_388._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n17_116._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&result_n17_116._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_99_388._poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435534, &result_n17_116);
  Free_poly_data(&result_n17_116._c1_poly);
  Free_poly_data(&result_n17_116._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 64
  // /layers/layers.6/relu1/Relu
  // pragma: 65536, 1033, 65
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435535, &_preg_268435534, 14);
  Free_poly_data(&_preg_268435534._c1_poly);
  Free_poly_data(&_preg_268435534._c0_poly);
  _preg_268435536 = App_relu(_preg_268435535, _preg_268435535, 4096);
  Free_poly_data(&_preg_268435535._c1_poly);
  Free_poly_data(&_preg_268435535._c0_poly);
  Copy_ciph(&_preg_268435537, &_preg_268435536);
  Free_poly_data(&_preg_268435536._c1_poly);
  Free_poly_data(&_preg_268435536._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 65
  // /layers/layers.6/conv2/Conv
  // pragma: 65536, 1027, 66
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435538, &_preg_268435537);
  Free_poly_data(&_preg_268435537._c1_poly);
  Free_poly_data(&_preg_268435537._c0_poly);
  // BlockingRot replicate=2
  _preg_268435673 = Rotate(_preg_268435538, -4096);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n17_120, &_preg_268435538, &_preg_268435673);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&input_dup_n17_120._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&input_dup_n17_120._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435538._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435673._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&input_dup_n17_120._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435538._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435673._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_preg_268435673._c1_poly);
  Free_poly_data(&_preg_268435673._c0_poly);
  Free_poly_data(&_preg_268435538._c1_poly);
  Free_poly_data(&_preg_268435538._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=16
  for (bs_input_n17_121 = 0; bs_input_n17_121 < 16; bs_input_n17_121 = bs_input_n17_121 + 1) {
    _preg_268435674 = Rotate(input_dup_n17_120, _cst_131[bs_input_n17_121]);
    Copy_ciph(&input_block_n17_122[bs_input_n17_121], &_preg_268435674);
    Free_poly_data(&_preg_268435674._c1_poly);
    Free_poly_data(&_preg_268435674._c0_poly);
  }
  Free_poly_data(&input_dup_n17_120._c1_poly);
  Free_poly_data(&input_dup_n17_120._c0_poly);
  Zero_ciph(&result_n18_123);
  for (num_grid_n18_124 = 0; num_grid_n18_124 < 16; num_grid_n18_124 = num_grid_n18_124 + 1) {
    Zero_ciph(&result_grid_n18_125);
    for (cap_block_n18_126 = 0; cap_block_n18_126 < 16; cap_block_n18_126 = cap_block_n18_126 + 1) {
      _ckks_gen_tmp_2305_261 = input_block_n17_122[cap_block_n18_126];
      Pt_from_msg_ofst(&_pgen_tmp_100_389, 50/* cst_129 */, ((cap_block_n18_126 + (num_grid_n18_124 * 16))) * (4096), 4096, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_101_390, &_ckks_gen_tmp_2305_261, &_pgen_tmp_100_389);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n18_125, &result_grid_n18_125, &_pgen_tmp_101_390);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n18_125._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_101_390._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2305_261._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_100_389._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_101_390._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2305_261._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_100_389._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n18_125._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n18_125._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_101_390._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n18_125._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n18_125._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_101_390._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435675 = Rotate(result_grid_n18_125, num_grid_n18_124 * 256);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n18_123, &result_n18_123, &_preg_268435675);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n18_123._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n18_123._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n18_123._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435675._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n18_123._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n18_123._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435675._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435675._c1_poly);
    Free_poly_data(&_preg_268435675._c0_poly);
  }
  Free_ciph_poly(input_block_n17_122, 16);
  Free_poly_data(&_pgen_tmp_100_389._poly);
  Free_poly_data(&_pgen_tmp_101_390._c1_poly);
  Free_poly_data(&_pgen_tmp_101_390._c0_poly);
  Free_poly_data(&result_grid_n18_125._c1_poly);
  Free_poly_data(&result_grid_n18_125._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n18_123, &result_n18_123);
  Rescale(&result_n18_123._c0_poly, &result_n18_123._c0_poly);
  Rescale(&result_n18_123._c1_poly, &result_n18_123._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_103_392, 51 /* cst_132 */, 4096, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_102_391, &result_n18_123, &_pgen_tmp_103_392);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_102_391._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_102_391._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n18_123._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_103_392._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_102_391._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n18_123._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_103_392._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_103_392._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435539, &_pgen_tmp_102_391);
  Rescale(&_preg_268435539._c0_poly, &_pgen_tmp_102_391._c0_poly);
  Rescale(&_preg_268435539._c1_poly, &_pgen_tmp_102_391._c1_poly);
  Free_poly_data(&_pgen_tmp_102_391._c1_poly);
  Free_poly_data(&_pgen_tmp_102_391._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435676 = Rotate(result_n18_123, -4096);
  Copy_ciph(&_ckks_gen_tmp_2349_262, &_preg_268435676);
  Free_poly_data(&_preg_268435676._c1_poly);
  Free_poly_data(&_preg_268435676._c0_poly);
  Pt_from_msg(&_pgen_tmp_105_394, 52 /* cst_133 */, 4096, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_104_393, &_ckks_gen_tmp_2349_262, &_pgen_tmp_105_394);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_104_393._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_104_393._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2349_262._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_105_394._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_104_393._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2349_262._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_105_394._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_105_394._poly);
  Free_poly_data(&_ckks_gen_tmp_2349_262._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2349_262._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_106_395, &_pgen_tmp_104_393);
  Rescale(&_pgen_tmp_106_395._c0_poly, &_pgen_tmp_104_393._c0_poly);
  Rescale(&_pgen_tmp_106_395._c1_poly, &_pgen_tmp_104_393._c1_poly);
  Free_poly_data(&_pgen_tmp_104_393._c1_poly);
  Free_poly_data(&_pgen_tmp_104_393._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435539, &_preg_268435539, &_pgen_tmp_106_395);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_preg_268435539._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&_preg_268435539._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435539._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_106_395._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_preg_268435539._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435539._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_106_395._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_106_395._c1_poly);
  Free_poly_data(&_pgen_tmp_106_395._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_107_396, 53 /* cst_130 */, 4096, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n18_123, &_preg_268435539, &_pgen_tmp_107_396);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n18_123._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n18_123._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435539._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_107_396._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n18_123._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&_preg_268435539._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_107_396._poly);
  Free_poly_data(&_preg_268435539._c1_poly);
  Free_poly_data(&_preg_268435539._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435540, &result_n18_123);
  Free_poly_data(&result_n18_123._c1_poly);
  Free_poly_data(&result_n18_123._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 66
  // /layers/layers.6/relu2/Relu
  // pragma: 65536, 1033, 67
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435541, &_preg_268435540, 13);
  Free_poly_data(&_preg_268435540._c1_poly);
  Free_poly_data(&_preg_268435540._c0_poly);
  _preg_268435542 = App_relu(_preg_268435541, _preg_268435541, 4096);
  Free_poly_data(&_preg_268435541._c1_poly);
  Free_poly_data(&_preg_268435541._c0_poly);
  Copy_ciph(&_preg_268435543, &_preg_268435542);
  Free_poly_data(&_preg_268435542._c1_poly);
  Free_poly_data(&_preg_268435542._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 67
  // /layers/layers.7/conv1/Conv
  // pragma: 65536, 1027, 68
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435544, &_preg_268435543);
  Free_poly_data(&_preg_268435543._c1_poly);
  Free_poly_data(&_preg_268435543._c0_poly);
  // BlockingRot replicate=1
  Copy_ciph(&input_dup_n18_127, &_preg_268435544);
  Free_poly_data(&_preg_268435544._c1_poly);
  Free_poly_data(&_preg_268435544._c0_poly);
  // BlockingRot HRot=bs=9
  for (bs_input_n18_128 = 0; bs_input_n18_128 < 9; bs_input_n18_128 = bs_input_n18_128 + 1) {
    _preg_268435677 = Rotate(input_dup_n18_127, _cst_137[bs_input_n18_128]);
    Copy_ciph(&input_block_n18_129[bs_input_n18_128], &_preg_268435677);
    Free_poly_data(&_preg_268435677._c1_poly);
    Free_poly_data(&_preg_268435677._c0_poly);
  }
  Free_poly_data(&input_dup_n18_127._c1_poly);
  Free_poly_data(&input_dup_n18_127._c0_poly);
  Zero_ciph(&result_n19_130);
  for (num_grid_n19_131 = 0; num_grid_n19_131 < 1; num_grid_n19_131 = num_grid_n19_131 + 1) {
    Zero_ciph(&result_grid_n19_132);
    for (cap_block_n19_133 = 0; cap_block_n19_133 < 9; cap_block_n19_133 = cap_block_n19_133 + 1) {
      _ckks_gen_tmp_2452_263 = input_block_n18_129[cap_block_n19_133];
      Pt_from_msg_ofst(&_pgen_tmp_108_397, 54/* cst_135 */, ((cap_block_n19_133 + (num_grid_n19_131 * 9))) * (4096), 4096, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_109_398, &_ckks_gen_tmp_2452_263, &_pgen_tmp_108_397);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n19_132, &result_grid_n19_132, &_pgen_tmp_109_398);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n19_132._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_109_398._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2452_263._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_108_397._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_109_398._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2452_263._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_108_397._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n19_132._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n19_132._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_109_398._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n19_132._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n19_132._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_109_398._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435678 = Rotate(result_grid_n19_132, num_grid_n19_131 * 16);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n19_130, &result_n19_130, &_preg_268435678);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n19_130._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n19_130._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n19_130._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435678._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n19_130._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n19_130._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435678._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435678._c1_poly);
    Free_poly_data(&_preg_268435678._c0_poly);
  }
  Free_ciph_poly(input_block_n18_129, 9);
  Free_poly_data(&_pgen_tmp_108_397._poly);
  Free_poly_data(&_pgen_tmp_109_398._c1_poly);
  Free_poly_data(&_pgen_tmp_109_398._c0_poly);
  Free_poly_data(&result_grid_n19_132._c1_poly);
  Free_poly_data(&result_grid_n19_132._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n19_130, &result_n19_130);
  Rescale(&result_n19_130._c0_poly, &result_n19_130._c0_poly);
  Rescale(&result_n19_130._c1_poly, &result_n19_130._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_110_399, 55 /* cst_136 */, 4096, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n19_130, &result_n19_130, &_pgen_tmp_110_399);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n19_130._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n19_130._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n19_130._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_110_399._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n19_130._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&result_n19_130._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_110_399._poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435545, &result_n19_130);
  Free_poly_data(&result_n19_130._c1_poly);
  Free_poly_data(&result_n19_130._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 68
  // /layers/layers.7/relu1/Relu
  // pragma: 65536, 1033, 69
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435546, &_preg_268435545, 14);
  Free_poly_data(&_preg_268435545._c1_poly);
  Free_poly_data(&_preg_268435545._c0_poly);
  _preg_268435547 = App_relu(_preg_268435546, _preg_268435546, 4096);
  Free_poly_data(&_preg_268435546._c1_poly);
  Free_poly_data(&_preg_268435546._c0_poly);
  Copy_ciph(&_preg_268435548, &_preg_268435547);
  Free_poly_data(&_preg_268435547._c1_poly);
  Free_poly_data(&_preg_268435547._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 69
  // /layers/layers.7/conv2/Conv
  // pragma: 65536, 1027, 70
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435549, &_preg_268435548);
  Free_poly_data(&_preg_268435548._c1_poly);
  Free_poly_data(&_preg_268435548._c0_poly);
  // BlockingRot replicate=2
  _preg_268435679 = Rotate(_preg_268435549, -4096);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n19_134, &_preg_268435549, &_preg_268435679);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&input_dup_n19_134._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&input_dup_n19_134._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435549._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435679._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&input_dup_n19_134._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435549._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435679._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_preg_268435679._c1_poly);
  Free_poly_data(&_preg_268435679._c0_poly);
  Free_poly_data(&_preg_268435549._c1_poly);
  Free_poly_data(&_preg_268435549._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=16
  for (bs_input_n19_135 = 0; bs_input_n19_135 < 16; bs_input_n19_135 = bs_input_n19_135 + 1) {
    _preg_268435680 = Rotate(input_dup_n19_134, _cst_141[bs_input_n19_135]);
    Copy_ciph(&input_block_n19_136[bs_input_n19_135], &_preg_268435680);
    Free_poly_data(&_preg_268435680._c1_poly);
    Free_poly_data(&_preg_268435680._c0_poly);
  }
  Free_poly_data(&input_dup_n19_134._c1_poly);
  Free_poly_data(&input_dup_n19_134._c0_poly);
  Zero_ciph(&result_n20_137);
  for (num_grid_n20_138 = 0; num_grid_n20_138 < 16; num_grid_n20_138 = num_grid_n20_138 + 1) {
    Zero_ciph(&result_grid_n20_139);
    for (cap_block_n20_140 = 0; cap_block_n20_140 < 16; cap_block_n20_140 = cap_block_n20_140 + 1) {
      _ckks_gen_tmp_2577_264 = input_block_n19_136[cap_block_n20_140];
      Pt_from_msg_ofst(&_pgen_tmp_111_400, 56/* cst_139 */, ((cap_block_n20_140 + (num_grid_n20_138 * 16))) * (4096), 4096, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_112_401, &_ckks_gen_tmp_2577_264, &_pgen_tmp_111_400);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n20_139, &result_grid_n20_139, &_pgen_tmp_112_401);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n20_139._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_112_401._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2577_264._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_111_400._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_112_401._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2577_264._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_111_400._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n20_139._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n20_139._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_112_401._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n20_139._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n20_139._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_112_401._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435681 = Rotate(result_grid_n20_139, num_grid_n20_138 * 256);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n20_137, &result_n20_137, &_preg_268435681);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n20_137._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n20_137._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n20_137._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435681._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n20_137._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n20_137._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435681._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435681._c1_poly);
    Free_poly_data(&_preg_268435681._c0_poly);
  }
  Free_ciph_poly(input_block_n19_136, 16);
  Free_poly_data(&_pgen_tmp_111_400._poly);
  Free_poly_data(&_pgen_tmp_112_401._c1_poly);
  Free_poly_data(&_pgen_tmp_112_401._c0_poly);
  Free_poly_data(&result_grid_n20_139._c1_poly);
  Free_poly_data(&result_grid_n20_139._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n20_137, &result_n20_137);
  Rescale(&result_n20_137._c0_poly, &result_n20_137._c0_poly);
  Rescale(&result_n20_137._c1_poly, &result_n20_137._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_114_403, 57 /* cst_142 */, 4096, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_113_402, &result_n20_137, &_pgen_tmp_114_403);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_113_402._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_113_402._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n20_137._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_114_403._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_113_402._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n20_137._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_114_403._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_114_403._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435550, &_pgen_tmp_113_402);
  Rescale(&_preg_268435550._c0_poly, &_pgen_tmp_113_402._c0_poly);
  Rescale(&_preg_268435550._c1_poly, &_pgen_tmp_113_402._c1_poly);
  Free_poly_data(&_pgen_tmp_113_402._c1_poly);
  Free_poly_data(&_pgen_tmp_113_402._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435682 = Rotate(result_n20_137, -4096);
  Copy_ciph(&_ckks_gen_tmp_2621_265, &_preg_268435682);
  Free_poly_data(&_preg_268435682._c1_poly);
  Free_poly_data(&_preg_268435682._c0_poly);
  Pt_from_msg(&_pgen_tmp_116_405, 58 /* cst_143 */, 4096, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_115_404, &_ckks_gen_tmp_2621_265, &_pgen_tmp_116_405);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_115_404._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_115_404._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2621_265._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_116_405._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_115_404._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2621_265._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_116_405._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_116_405._poly);
  Free_poly_data(&_ckks_gen_tmp_2621_265._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2621_265._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_117_406, &_pgen_tmp_115_404);
  Rescale(&_pgen_tmp_117_406._c0_poly, &_pgen_tmp_115_404._c0_poly);
  Rescale(&_pgen_tmp_117_406._c1_poly, &_pgen_tmp_115_404._c1_poly);
  Free_poly_data(&_pgen_tmp_115_404._c1_poly);
  Free_poly_data(&_pgen_tmp_115_404._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435550, &_preg_268435550, &_pgen_tmp_117_406);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_preg_268435550._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&_preg_268435550._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435550._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_117_406._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_preg_268435550._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435550._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_117_406._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_117_406._c1_poly);
  Free_poly_data(&_pgen_tmp_117_406._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_118_407, 59 /* cst_140 */, 4096, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n20_137, &_preg_268435550, &_pgen_tmp_118_407);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n20_137._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n20_137._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435550._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_118_407._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n20_137._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&_preg_268435550._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_118_407._poly);
  Free_poly_data(&_preg_268435550._c1_poly);
  Free_poly_data(&_preg_268435550._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435551, &result_n20_137);
  Free_poly_data(&result_n20_137._c1_poly);
  Free_poly_data(&result_n20_137._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 70
  // /layers/layers.7/relu2/Relu
  // pragma: 65536, 1033, 71
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435552, &_preg_268435551, 13);
  Free_poly_data(&_preg_268435551._c1_poly);
  Free_poly_data(&_preg_268435551._c0_poly);
  _preg_268435553 = App_relu(_preg_268435552, _preg_268435552, 4096);
  Free_poly_data(&_preg_268435552._c1_poly);
  Free_poly_data(&_preg_268435552._c0_poly);
  Copy_ciph(&_preg_268435554, &_preg_268435553);
  Free_poly_data(&_preg_268435553._c1_poly);
  Free_poly_data(&_preg_268435553._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 71
  // /layers/layers.8/conv1/Conv
  // pragma: 65536, 1027, 72
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435555, &_preg_268435554);
  Free_poly_data(&_preg_268435554._c1_poly);
  Free_poly_data(&_preg_268435554._c0_poly);
  // BlockingRot replicate=1
  Copy_ciph(&input_dup_n20_141, &_preg_268435555);
  Free_poly_data(&_preg_268435555._c1_poly);
  Free_poly_data(&_preg_268435555._c0_poly);
  // BlockingRot HRot=bs=9
  for (bs_input_n20_142 = 0; bs_input_n20_142 < 9; bs_input_n20_142 = bs_input_n20_142 + 1) {
    _preg_268435683 = Rotate(input_dup_n20_141, _cst_147[bs_input_n20_142]);
    Copy_ciph(&input_block_n20_143[bs_input_n20_142], &_preg_268435683);
    Free_poly_data(&_preg_268435683._c1_poly);
    Free_poly_data(&_preg_268435683._c0_poly);
  }
  Free_poly_data(&input_dup_n20_141._c1_poly);
  Free_poly_data(&input_dup_n20_141._c0_poly);
  Zero_ciph(&result_n21_144);
  for (num_grid_n21_145 = 0; num_grid_n21_145 < 1; num_grid_n21_145 = num_grid_n21_145 + 1) {
    Zero_ciph(&result_grid_n21_146);
    for (cap_block_n21_147 = 0; cap_block_n21_147 < 9; cap_block_n21_147 = cap_block_n21_147 + 1) {
      _ckks_gen_tmp_2724_266 = input_block_n20_143[cap_block_n21_147];
      Pt_from_msg_ofst(&_pgen_tmp_119_408, 60/* cst_145 */, ((cap_block_n21_147 + (num_grid_n21_145 * 9))) * (4096), 4096, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_120_409, &_ckks_gen_tmp_2724_266, &_pgen_tmp_119_408);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n21_146, &result_grid_n21_146, &_pgen_tmp_120_409);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n21_146._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_120_409._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2724_266._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_119_408._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_120_409._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2724_266._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_119_408._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n21_146._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n21_146._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_120_409._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n21_146._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n21_146._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_120_409._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435684 = Rotate(result_grid_n21_146, num_grid_n21_145 * 16);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n21_144, &result_n21_144, &_preg_268435684);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n21_144._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n21_144._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n21_144._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435684._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n21_144._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n21_144._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435684._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435684._c1_poly);
    Free_poly_data(&_preg_268435684._c0_poly);
  }
  Free_ciph_poly(input_block_n20_143, 9);
  Free_poly_data(&_pgen_tmp_119_408._poly);
  Free_poly_data(&_pgen_tmp_120_409._c1_poly);
  Free_poly_data(&_pgen_tmp_120_409._c0_poly);
  Free_poly_data(&result_grid_n21_146._c1_poly);
  Free_poly_data(&result_grid_n21_146._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n21_144, &result_n21_144);
  Rescale(&result_n21_144._c0_poly, &result_n21_144._c0_poly);
  Rescale(&result_n21_144._c1_poly, &result_n21_144._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_121_410, 61 /* cst_146 */, 4096, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n21_144, &result_n21_144, &_pgen_tmp_121_410);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n21_144._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n21_144._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n21_144._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_121_410._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n21_144._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&result_n21_144._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_121_410._poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435556, &result_n21_144);
  Free_poly_data(&result_n21_144._c1_poly);
  Free_poly_data(&result_n21_144._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 72
  // /layers/layers.8/relu1/Relu
  // pragma: 65536, 1033, 73
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435557, &_preg_268435556, 14);
  Free_poly_data(&_preg_268435556._c1_poly);
  Free_poly_data(&_preg_268435556._c0_poly);
  _preg_268435558 = App_relu(_preg_268435557, _preg_268435557, 4096);
  Free_poly_data(&_preg_268435557._c1_poly);
  Free_poly_data(&_preg_268435557._c0_poly);
  Copy_ciph(&_preg_268435559, &_preg_268435558);
  Free_poly_data(&_preg_268435558._c1_poly);
  Free_poly_data(&_preg_268435558._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 73
  // /layers/layers.8/conv2/Conv
  // pragma: 65536, 1027, 74
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435560, &_preg_268435559);
  Free_poly_data(&_preg_268435559._c1_poly);
  Free_poly_data(&_preg_268435559._c0_poly);
  // BlockingRot replicate=2
  _preg_268435685 = Rotate(_preg_268435560, -4096);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n21_148, &_preg_268435560, &_preg_268435685);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&input_dup_n21_148._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&input_dup_n21_148._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435560._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435685._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&input_dup_n21_148._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435560._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435685._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_preg_268435685._c1_poly);
  Free_poly_data(&_preg_268435685._c0_poly);
  Free_poly_data(&_preg_268435560._c1_poly);
  Free_poly_data(&_preg_268435560._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=16
  for (bs_input_n21_149 = 0; bs_input_n21_149 < 16; bs_input_n21_149 = bs_input_n21_149 + 1) {
    _preg_268435686 = Rotate(input_dup_n21_148, _cst_151[bs_input_n21_149]);
    Copy_ciph(&input_block_n21_150[bs_input_n21_149], &_preg_268435686);
    Free_poly_data(&_preg_268435686._c1_poly);
    Free_poly_data(&_preg_268435686._c0_poly);
  }
  Free_poly_data(&input_dup_n21_148._c1_poly);
  Free_poly_data(&input_dup_n21_148._c0_poly);
  Zero_ciph(&result_n22_151);
  for (num_grid_n22_152 = 0; num_grid_n22_152 < 16; num_grid_n22_152 = num_grid_n22_152 + 1) {
    Zero_ciph(&result_grid_n22_153);
    for (cap_block_n22_154 = 0; cap_block_n22_154 < 16; cap_block_n22_154 = cap_block_n22_154 + 1) {
      _ckks_gen_tmp_2849_267 = input_block_n21_150[cap_block_n22_154];
      Pt_from_msg_ofst(&_pgen_tmp_122_411, 62/* cst_149 */, ((cap_block_n22_154 + (num_grid_n22_152 * 16))) * (4096), 4096, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_123_412, &_ckks_gen_tmp_2849_267, &_pgen_tmp_122_411);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n22_153, &result_grid_n22_153, &_pgen_tmp_123_412);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n22_153._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_123_412._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2849_267._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_122_411._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_123_412._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2849_267._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_122_411._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n22_153._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n22_153._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_123_412._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n22_153._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n22_153._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_123_412._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435687 = Rotate(result_grid_n22_153, num_grid_n22_152 * 256);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n22_151, &result_n22_151, &_preg_268435687);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n22_151._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n22_151._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n22_151._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435687._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n22_151._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n22_151._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435687._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435687._c1_poly);
    Free_poly_data(&_preg_268435687._c0_poly);
  }
  Free_ciph_poly(input_block_n21_150, 16);
  Free_poly_data(&_pgen_tmp_122_411._poly);
  Free_poly_data(&_pgen_tmp_123_412._c1_poly);
  Free_poly_data(&_pgen_tmp_123_412._c0_poly);
  Free_poly_data(&result_grid_n22_153._c1_poly);
  Free_poly_data(&result_grid_n22_153._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n22_151, &result_n22_151);
  Rescale(&result_n22_151._c0_poly, &result_n22_151._c0_poly);
  Rescale(&result_n22_151._c1_poly, &result_n22_151._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_125_414, 63 /* cst_152 */, 4096, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_124_413, &result_n22_151, &_pgen_tmp_125_414);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_124_413._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_124_413._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n22_151._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_125_414._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_124_413._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n22_151._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_125_414._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_125_414._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435561, &_pgen_tmp_124_413);
  Rescale(&_preg_268435561._c0_poly, &_pgen_tmp_124_413._c0_poly);
  Rescale(&_preg_268435561._c1_poly, &_pgen_tmp_124_413._c1_poly);
  Free_poly_data(&_pgen_tmp_124_413._c1_poly);
  Free_poly_data(&_pgen_tmp_124_413._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435688 = Rotate(result_n22_151, -4096);
  Copy_ciph(&_ckks_gen_tmp_2893_268, &_preg_268435688);
  Free_poly_data(&_preg_268435688._c1_poly);
  Free_poly_data(&_preg_268435688._c0_poly);
  Pt_from_msg(&_pgen_tmp_127_416, 64 /* cst_153 */, 4096, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_126_415, &_ckks_gen_tmp_2893_268, &_pgen_tmp_127_416);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_126_415._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_126_415._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2893_268._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_127_416._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_126_415._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2893_268._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_127_416._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_127_416._poly);
  Free_poly_data(&_ckks_gen_tmp_2893_268._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2893_268._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_128_417, &_pgen_tmp_126_415);
  Rescale(&_pgen_tmp_128_417._c0_poly, &_pgen_tmp_126_415._c0_poly);
  Rescale(&_pgen_tmp_128_417._c1_poly, &_pgen_tmp_126_415._c1_poly);
  Free_poly_data(&_pgen_tmp_126_415._c1_poly);
  Free_poly_data(&_pgen_tmp_126_415._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435561, &_preg_268435561, &_pgen_tmp_128_417);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_preg_268435561._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&_preg_268435561._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435561._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_128_417._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_preg_268435561._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435561._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_128_417._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_128_417._c1_poly);
  Free_poly_data(&_pgen_tmp_128_417._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_129_418, 65 /* cst_150 */, 4096, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n22_151, &_preg_268435561, &_pgen_tmp_129_418);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n22_151._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n22_151._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435561._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_129_418._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n22_151._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&_preg_268435561._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_129_418._poly);
  Free_poly_data(&_preg_268435561._c1_poly);
  Free_poly_data(&_preg_268435561._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435562, &result_n22_151);
  Free_poly_data(&result_n22_151._c1_poly);
  Free_poly_data(&result_n22_151._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 74
  // /layers/layers.8/relu2/Relu
  // pragma: 65536, 1033, 75
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435563, &_preg_268435562, 13);
  Free_poly_data(&_preg_268435562._c1_poly);
  Free_poly_data(&_preg_268435562._c0_poly);
  _preg_268435564 = App_relu(_preg_268435563, _preg_268435563, 4096);
  Free_poly_data(&_preg_268435563._c1_poly);
  Free_poly_data(&_preg_268435563._c0_poly);
  Copy_ciph(&_preg_268435565, &_preg_268435564);
  Free_poly_data(&_preg_268435564._c1_poly);
  Free_poly_data(&_preg_268435564._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 75
  // /layers/layers.9/conv1/Conv
  // pragma: 65536, 1027, 76
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435566, &_preg_268435565);
  Free_poly_data(&_preg_268435565._c1_poly);
  Free_poly_data(&_preg_268435565._c0_poly);
  // BlockingRot replicate=1
  Copy_ciph(&input_dup_n22_155, &_preg_268435566);
  Free_poly_data(&_preg_268435566._c1_poly);
  Free_poly_data(&_preg_268435566._c0_poly);
  // BlockingRot HRot=bs=9
  for (bs_input_n22_156 = 0; bs_input_n22_156 < 9; bs_input_n22_156 = bs_input_n22_156 + 1) {
    _preg_268435689 = Rotate(input_dup_n22_155, _cst_157[bs_input_n22_156]);
    Copy_ciph(&input_block_n22_157[bs_input_n22_156], &_preg_268435689);
    Free_poly_data(&_preg_268435689._c1_poly);
    Free_poly_data(&_preg_268435689._c0_poly);
  }
  Free_poly_data(&input_dup_n22_155._c1_poly);
  Free_poly_data(&input_dup_n22_155._c0_poly);
  Zero_ciph(&result_n23_158);
  for (num_grid_n23_159 = 0; num_grid_n23_159 < 1; num_grid_n23_159 = num_grid_n23_159 + 1) {
    Zero_ciph(&result_grid_n23_160);
    for (cap_block_n23_161 = 0; cap_block_n23_161 < 9; cap_block_n23_161 = cap_block_n23_161 + 1) {
      _ckks_gen_tmp_2996_269 = input_block_n22_157[cap_block_n23_161];
      Pt_from_msg_ofst(&_pgen_tmp_130_419, 66/* cst_155 */, ((cap_block_n23_161 + (num_grid_n23_159 * 9))) * (4096), 4096, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_131_420, &_ckks_gen_tmp_2996_269, &_pgen_tmp_130_419);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n23_160, &result_grid_n23_160, &_pgen_tmp_131_420);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n23_160._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_131_420._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2996_269._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_130_419._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_131_420._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_2996_269._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_130_419._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n23_160._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n23_160._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_131_420._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n23_160._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n23_160._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_131_420._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435690 = Rotate(result_grid_n23_160, num_grid_n23_159 * 16);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n23_158, &result_n23_158, &_preg_268435690);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n23_158._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n23_158._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n23_158._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435690._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n23_158._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n23_158._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435690._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435690._c1_poly);
    Free_poly_data(&_preg_268435690._c0_poly);
  }
  Free_ciph_poly(input_block_n22_157, 9);
  Free_poly_data(&_pgen_tmp_130_419._poly);
  Free_poly_data(&_pgen_tmp_131_420._c1_poly);
  Free_poly_data(&_pgen_tmp_131_420._c0_poly);
  Free_poly_data(&result_grid_n23_160._c1_poly);
  Free_poly_data(&result_grid_n23_160._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n23_158, &result_n23_158);
  Rescale(&result_n23_158._c0_poly, &result_n23_158._c0_poly);
  Rescale(&result_n23_158._c1_poly, &result_n23_158._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_132_421, 67 /* cst_156 */, 4096, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n23_158, &result_n23_158, &_pgen_tmp_132_421);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n23_158._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n23_158._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n23_158._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_132_421._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n23_158._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&result_n23_158._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_132_421._poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435567, &result_n23_158);
  Free_poly_data(&result_n23_158._c1_poly);
  Free_poly_data(&result_n23_158._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 76
  // /layers/layers.9/relu1/Relu
  // pragma: 65536, 1033, 77
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435568, &_preg_268435567, 14);
  Free_poly_data(&_preg_268435567._c1_poly);
  Free_poly_data(&_preg_268435567._c0_poly);
  _preg_268435569 = App_relu(_preg_268435568, _preg_268435568, 4096);
  Free_poly_data(&_preg_268435568._c1_poly);
  Free_poly_data(&_preg_268435568._c0_poly);
  Copy_ciph(&_preg_268435570, &_preg_268435569);
  Free_poly_data(&_preg_268435569._c1_poly);
  Free_poly_data(&_preg_268435569._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 77
  // /layers/layers.9/conv2/Conv
  // pragma: 65536, 1027, 78
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435571, &_preg_268435570);
  Free_poly_data(&_preg_268435570._c1_poly);
  Free_poly_data(&_preg_268435570._c0_poly);
  // BlockingRot replicate=2
  _preg_268435691 = Rotate(_preg_268435571, -4096);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n23_162, &_preg_268435571, &_preg_268435691);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&input_dup_n23_162._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&input_dup_n23_162._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435571._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435691._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&input_dup_n23_162._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435571._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435691._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_preg_268435691._c1_poly);
  Free_poly_data(&_preg_268435691._c0_poly);
  Free_poly_data(&_preg_268435571._c1_poly);
  Free_poly_data(&_preg_268435571._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=16
  for (bs_input_n23_163 = 0; bs_input_n23_163 < 16; bs_input_n23_163 = bs_input_n23_163 + 1) {
    _preg_268435692 = Rotate(input_dup_n23_162, _cst_161[bs_input_n23_163]);
    Copy_ciph(&input_block_n23_164[bs_input_n23_163], &_preg_268435692);
    Free_poly_data(&_preg_268435692._c1_poly);
    Free_poly_data(&_preg_268435692._c0_poly);
  }
  Free_poly_data(&input_dup_n23_162._c1_poly);
  Free_poly_data(&input_dup_n23_162._c0_poly);
  Zero_ciph(&result_n24_165);
  for (num_grid_n24_166 = 0; num_grid_n24_166 < 16; num_grid_n24_166 = num_grid_n24_166 + 1) {
    Zero_ciph(&result_grid_n24_167);
    for (cap_block_n24_168 = 0; cap_block_n24_168 < 16; cap_block_n24_168 = cap_block_n24_168 + 1) {
      _ckks_gen_tmp_3121_270 = input_block_n23_164[cap_block_n24_168];
      Pt_from_msg_ofst(&_pgen_tmp_133_422, 68/* cst_159 */, ((cap_block_n24_168 + (num_grid_n24_166 * 16))) * (4096), 4096, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_134_423, &_ckks_gen_tmp_3121_270, &_pgen_tmp_133_422);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n24_167, &result_grid_n24_167, &_pgen_tmp_134_423);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n24_167._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_134_423._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_3121_270._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_133_422._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_134_423._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_3121_270._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_133_422._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n24_167._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n24_167._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_134_423._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n24_167._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n24_167._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_134_423._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435693 = Rotate(result_grid_n24_167, num_grid_n24_166 * 256);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n24_165, &result_n24_165, &_preg_268435693);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n24_165._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n24_165._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n24_165._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435693._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n24_165._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n24_165._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435693._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435693._c1_poly);
    Free_poly_data(&_preg_268435693._c0_poly);
  }
  Free_ciph_poly(input_block_n23_164, 16);
  Free_poly_data(&_pgen_tmp_133_422._poly);
  Free_poly_data(&_pgen_tmp_134_423._c1_poly);
  Free_poly_data(&_pgen_tmp_134_423._c0_poly);
  Free_poly_data(&result_grid_n24_167._c1_poly);
  Free_poly_data(&result_grid_n24_167._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n24_165, &result_n24_165);
  Rescale(&result_n24_165._c0_poly, &result_n24_165._c0_poly);
  Rescale(&result_n24_165._c1_poly, &result_n24_165._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_136_425, 69 /* cst_162 */, 4096, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_135_424, &result_n24_165, &_pgen_tmp_136_425);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_135_424._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_135_424._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n24_165._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_136_425._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_135_424._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n24_165._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_136_425._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_136_425._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435572, &_pgen_tmp_135_424);
  Rescale(&_preg_268435572._c0_poly, &_pgen_tmp_135_424._c0_poly);
  Rescale(&_preg_268435572._c1_poly, &_pgen_tmp_135_424._c1_poly);
  Free_poly_data(&_pgen_tmp_135_424._c1_poly);
  Free_poly_data(&_pgen_tmp_135_424._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435694 = Rotate(result_n24_165, -4096);
  Copy_ciph(&_ckks_gen_tmp_3165_271, &_preg_268435694);
  Free_poly_data(&_preg_268435694._c1_poly);
  Free_poly_data(&_preg_268435694._c0_poly);
  Pt_from_msg(&_pgen_tmp_138_427, 70 /* cst_163 */, 4096, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_137_426, &_ckks_gen_tmp_3165_271, &_pgen_tmp_138_427);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_137_426._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_137_426._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_3165_271._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_138_427._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_137_426._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_3165_271._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_138_427._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_138_427._poly);
  Free_poly_data(&_ckks_gen_tmp_3165_271._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3165_271._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_139_428, &_pgen_tmp_137_426);
  Rescale(&_pgen_tmp_139_428._c0_poly, &_pgen_tmp_137_426._c0_poly);
  Rescale(&_pgen_tmp_139_428._c1_poly, &_pgen_tmp_137_426._c1_poly);
  Free_poly_data(&_pgen_tmp_137_426._c1_poly);
  Free_poly_data(&_pgen_tmp_137_426._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435572, &_preg_268435572, &_pgen_tmp_139_428);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_preg_268435572._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&_preg_268435572._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435572._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_139_428._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_preg_268435572._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435572._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_139_428._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_139_428._c1_poly);
  Free_poly_data(&_pgen_tmp_139_428._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_140_429, 71 /* cst_160 */, 4096, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n24_165, &_preg_268435572, &_pgen_tmp_140_429);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n24_165._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n24_165._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435572._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_140_429._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n24_165._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&_preg_268435572._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_140_429._poly);
  Free_poly_data(&_preg_268435572._c1_poly);
  Free_poly_data(&_preg_268435572._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435573, &result_n24_165);
  Free_poly_data(&result_n24_165._c1_poly);
  Free_poly_data(&result_n24_165._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 78
  // /layers/layers.9/relu2/Relu
  // pragma: 65536, 1033, 79
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435574, &_preg_268435573, 13);
  Free_poly_data(&_preg_268435573._c1_poly);
  Free_poly_data(&_preg_268435573._c0_poly);
  _preg_268435575 = App_relu(_preg_268435574, _preg_268435574, 4096);
  Free_poly_data(&_preg_268435574._c1_poly);
  Free_poly_data(&_preg_268435574._c0_poly);
  Copy_ciph(&_preg_268435576, &_preg_268435575);
  Free_poly_data(&_preg_268435575._c1_poly);
  Free_poly_data(&_preg_268435575._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 79
  // /layers/layers.10/conv1/Conv
  // pragma: 65536, 1027, 80
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435577, &_preg_268435576);
  Free_poly_data(&_preg_268435576._c1_poly);
  Free_poly_data(&_preg_268435576._c0_poly);
  // BlockingRot replicate=1
  Copy_ciph(&input_dup_n24_169, &_preg_268435577);
  Free_poly_data(&_preg_268435577._c1_poly);
  Free_poly_data(&_preg_268435577._c0_poly);
  // BlockingRot HRot=bs=9
  for (bs_input_n24_170 = 0; bs_input_n24_170 < 9; bs_input_n24_170 = bs_input_n24_170 + 1) {
    _preg_268435695 = Rotate(input_dup_n24_169, _cst_167[bs_input_n24_170]);
    Copy_ciph(&input_block_n24_171[bs_input_n24_170], &_preg_268435695);
    Free_poly_data(&_preg_268435695._c1_poly);
    Free_poly_data(&_preg_268435695._c0_poly);
  }
  Free_poly_data(&input_dup_n24_169._c1_poly);
  Free_poly_data(&input_dup_n24_169._c0_poly);
  Zero_ciph(&result_n25_172);
  for (num_grid_n25_173 = 0; num_grid_n25_173 < 1; num_grid_n25_173 = num_grid_n25_173 + 1) {
    Zero_ciph(&result_grid_n25_174);
    for (cap_block_n25_175 = 0; cap_block_n25_175 < 9; cap_block_n25_175 = cap_block_n25_175 + 1) {
      _ckks_gen_tmp_3268_272 = input_block_n24_171[cap_block_n25_175];
      Pt_from_msg_ofst(&_pgen_tmp_141_430, 72/* cst_165 */, ((cap_block_n25_175 + (num_grid_n25_173 * 9))) * (4096), 4096, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_142_431, &_ckks_gen_tmp_3268_272, &_pgen_tmp_141_430);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n25_174, &result_grid_n25_174, &_pgen_tmp_142_431);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n25_174._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_142_431._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_3268_272._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_141_430._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_142_431._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_3268_272._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_141_430._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n25_174._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n25_174._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_142_431._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n25_174._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n25_174._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_142_431._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435696 = Rotate(result_grid_n25_174, num_grid_n25_173 * 16);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n25_172, &result_n25_172, &_preg_268435696);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n25_172._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n25_172._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n25_172._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435696._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n25_172._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n25_172._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435696._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435696._c1_poly);
    Free_poly_data(&_preg_268435696._c0_poly);
  }
  Free_ciph_poly(input_block_n24_171, 9);
  Free_poly_data(&_pgen_tmp_141_430._poly);
  Free_poly_data(&_pgen_tmp_142_431._c1_poly);
  Free_poly_data(&_pgen_tmp_142_431._c0_poly);
  Free_poly_data(&result_grid_n25_174._c1_poly);
  Free_poly_data(&result_grid_n25_174._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n25_172, &result_n25_172);
  Rescale(&result_n25_172._c0_poly, &result_n25_172._c0_poly);
  Rescale(&result_n25_172._c1_poly, &result_n25_172._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_143_432, 73 /* cst_166 */, 4096, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n25_172, &result_n25_172, &_pgen_tmp_143_432);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n25_172._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n25_172._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n25_172._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_143_432._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n25_172._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&result_n25_172._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_143_432._poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435578, &result_n25_172);
  Free_poly_data(&result_n25_172._c1_poly);
  Free_poly_data(&result_n25_172._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 80
  // /layers/layers.10/relu1/Relu
  // pragma: 65536, 1033, 81
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435579, &_preg_268435578, 14);
  Free_poly_data(&_preg_268435578._c1_poly);
  Free_poly_data(&_preg_268435578._c0_poly);
  _preg_268435580 = App_relu(_preg_268435579, _preg_268435579, 4096);
  Free_poly_data(&_preg_268435579._c1_poly);
  Free_poly_data(&_preg_268435579._c0_poly);
  Copy_ciph(&_preg_268435581, &_preg_268435580);
  Free_poly_data(&_preg_268435580._c1_poly);
  Free_poly_data(&_preg_268435580._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 81
  // /layers/layers.10/conv2/Conv
  // pragma: 65536, 1027, 82
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435582, &_preg_268435581);
  Free_poly_data(&_preg_268435581._c1_poly);
  Free_poly_data(&_preg_268435581._c0_poly);
  // BlockingRot replicate=2
  _preg_268435697 = Rotate(_preg_268435582, -4096);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n25_176, &_preg_268435582, &_preg_268435697);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&input_dup_n25_176._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&input_dup_n25_176._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435582._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435697._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&input_dup_n25_176._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435582._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435697._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_preg_268435697._c1_poly);
  Free_poly_data(&_preg_268435697._c0_poly);
  Free_poly_data(&_preg_268435582._c1_poly);
  Free_poly_data(&_preg_268435582._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=16
  for (bs_input_n25_177 = 0; bs_input_n25_177 < 16; bs_input_n25_177 = bs_input_n25_177 + 1) {
    _preg_268435698 = Rotate(input_dup_n25_176, _cst_171[bs_input_n25_177]);
    Copy_ciph(&input_block_n25_178[bs_input_n25_177], &_preg_268435698);
    Free_poly_data(&_preg_268435698._c1_poly);
    Free_poly_data(&_preg_268435698._c0_poly);
  }
  Free_poly_data(&input_dup_n25_176._c1_poly);
  Free_poly_data(&input_dup_n25_176._c0_poly);
  Zero_ciph(&result_n26_179);
  for (num_grid_n26_180 = 0; num_grid_n26_180 < 16; num_grid_n26_180 = num_grid_n26_180 + 1) {
    Zero_ciph(&result_grid_n26_181);
    for (cap_block_n26_182 = 0; cap_block_n26_182 < 16; cap_block_n26_182 = cap_block_n26_182 + 1) {
      _ckks_gen_tmp_3393_273 = input_block_n25_178[cap_block_n26_182];
      Pt_from_msg_ofst(&_pgen_tmp_144_433, 74/* cst_169 */, ((cap_block_n26_182 + (num_grid_n26_180 * 16))) * (4096), 4096, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_145_434, &_ckks_gen_tmp_3393_273, &_pgen_tmp_144_433);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n26_181, &result_grid_n26_181, &_pgen_tmp_145_434);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n26_181._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_145_434._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_3393_273._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_144_433._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_145_434._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_3393_273._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_144_433._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n26_181._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n26_181._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_145_434._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n26_181._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n26_181._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_145_434._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435699 = Rotate(result_grid_n26_181, num_grid_n26_180 * 256);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n26_179, &result_n26_179, &_preg_268435699);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n26_179._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n26_179._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n26_179._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435699._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n26_179._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n26_179._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435699._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435699._c1_poly);
    Free_poly_data(&_preg_268435699._c0_poly);
  }
  Free_ciph_poly(input_block_n25_178, 16);
  Free_poly_data(&_pgen_tmp_144_433._poly);
  Free_poly_data(&_pgen_tmp_145_434._c1_poly);
  Free_poly_data(&_pgen_tmp_145_434._c0_poly);
  Free_poly_data(&result_grid_n26_181._c1_poly);
  Free_poly_data(&result_grid_n26_181._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n26_179, &result_n26_179);
  Rescale(&result_n26_179._c0_poly, &result_n26_179._c0_poly);
  Rescale(&result_n26_179._c1_poly, &result_n26_179._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_147_436, 75 /* cst_172 */, 4096, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_146_435, &result_n26_179, &_pgen_tmp_147_436);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_146_435._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_146_435._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n26_179._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_147_436._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_146_435._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n26_179._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_147_436._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_147_436._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435583, &_pgen_tmp_146_435);
  Rescale(&_preg_268435583._c0_poly, &_pgen_tmp_146_435._c0_poly);
  Rescale(&_preg_268435583._c1_poly, &_pgen_tmp_146_435._c1_poly);
  Free_poly_data(&_pgen_tmp_146_435._c1_poly);
  Free_poly_data(&_pgen_tmp_146_435._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435700 = Rotate(result_n26_179, -4096);
  Copy_ciph(&_ckks_gen_tmp_3437_274, &_preg_268435700);
  Free_poly_data(&_preg_268435700._c1_poly);
  Free_poly_data(&_preg_268435700._c0_poly);
  Pt_from_msg(&_pgen_tmp_149_438, 76 /* cst_173 */, 4096, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_148_437, &_ckks_gen_tmp_3437_274, &_pgen_tmp_149_438);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_148_437._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_148_437._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_3437_274._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_149_438._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_148_437._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_3437_274._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_149_438._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_149_438._poly);
  Free_poly_data(&_ckks_gen_tmp_3437_274._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3437_274._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_150_439, &_pgen_tmp_148_437);
  Rescale(&_pgen_tmp_150_439._c0_poly, &_pgen_tmp_148_437._c0_poly);
  Rescale(&_pgen_tmp_150_439._c1_poly, &_pgen_tmp_148_437._c1_poly);
  Free_poly_data(&_pgen_tmp_148_437._c1_poly);
  Free_poly_data(&_pgen_tmp_148_437._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435583, &_preg_268435583, &_pgen_tmp_150_439);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_preg_268435583._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&_preg_268435583._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435583._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_150_439._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_preg_268435583._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435583._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_150_439._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_150_439._c1_poly);
  Free_poly_data(&_pgen_tmp_150_439._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_151_440, 77 /* cst_170 */, 4096, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n26_179, &_preg_268435583, &_pgen_tmp_151_440);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n26_179._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n26_179._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435583._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_151_440._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n26_179._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&_preg_268435583._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_151_440._poly);
  Free_poly_data(&_preg_268435583._c1_poly);
  Free_poly_data(&_preg_268435583._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435584, &result_n26_179);
  Free_poly_data(&result_n26_179._c1_poly);
  Free_poly_data(&result_n26_179._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 82
  // /layers/layers.10/relu2/Relu
  // pragma: 65536, 1033, 83
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435585, &_preg_268435584, 15);
  Free_poly_data(&_preg_268435584._c1_poly);
  Free_poly_data(&_preg_268435584._c0_poly);
  _preg_268435586 = App_relu(_preg_268435585, _preg_268435585, 4096);
  Free_poly_data(&_preg_268435585._c1_poly);
  Free_poly_data(&_preg_268435585._c0_poly);
  Copy_ciph(&_preg_268435587, &_preg_268435586);
  Free_poly_data(&_preg_268435586._c1_poly);
  Free_poly_data(&_preg_268435586._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 83
  // /layers/layers.11/conv1/Conv
  // pragma: 65536, 1027, 84
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435588, &_preg_268435587);
  Free_poly_data(&_preg_268435587._c1_poly);
  Free_poly_data(&_preg_268435587._c0_poly);
  // BlockingRot replicate=1
  Copy_ciph(&input_dup_n26_183, &_preg_268435588);
  Free_poly_data(&_preg_268435588._c1_poly);
  Free_poly_data(&_preg_268435588._c0_poly);
  // BlockingRot HRot=bs=9
  for (bs_input_n26_184 = 0; bs_input_n26_184 < 9; bs_input_n26_184 = bs_input_n26_184 + 1) {
    _preg_268435701 = Rotate(input_dup_n26_183, _cst_177[bs_input_n26_184]);
    Copy_ciph(&input_block_n26_185[bs_input_n26_184], &_preg_268435701);
    Free_poly_data(&_preg_268435701._c1_poly);
    Free_poly_data(&_preg_268435701._c0_poly);
  }
  Free_poly_data(&input_dup_n26_183._c1_poly);
  Free_poly_data(&input_dup_n26_183._c0_poly);
  Zero_ciph(&result_n27_186);
  for (num_grid_n27_187 = 0; num_grid_n27_187 < 1; num_grid_n27_187 = num_grid_n27_187 + 1) {
    Zero_ciph(&result_grid_n27_188);
    for (cap_block_n27_189 = 0; cap_block_n27_189 < 9; cap_block_n27_189 = cap_block_n27_189 + 1) {
      _ckks_gen_tmp_3540_275 = input_block_n26_185[cap_block_n27_189];
      Pt_from_msg_ofst(&_pgen_tmp_152_441, 78/* cst_175 */, ((cap_block_n27_189 + (num_grid_n27_187 * 9))) * (4096), 4096, 1, 4);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_153_442, &_ckks_gen_tmp_3540_275, &_pgen_tmp_152_441);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n27_188, &result_grid_n27_188, &_pgen_tmp_153_442);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n27_188._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_153_442._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_3540_275._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_152_441._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_153_442._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_3540_275._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_152_441._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n27_188._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n27_188._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_153_442._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n27_188._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n27_188._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_153_442._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435702 = Rotate(result_grid_n27_188, num_grid_n27_187 * 16);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n27_186, &result_n27_186, &_preg_268435702);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n27_186._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n27_186._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n27_186._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435702._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n27_186._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n27_186._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435702._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435702._c1_poly);
    Free_poly_data(&_preg_268435702._c0_poly);
  }
  Free_ciph_poly(input_block_n26_185, 9);
  Free_poly_data(&_pgen_tmp_152_441._poly);
  Free_poly_data(&_pgen_tmp_153_442._c1_poly);
  Free_poly_data(&_pgen_tmp_153_442._c0_poly);
  Free_poly_data(&result_grid_n27_188._c1_poly);
  Free_poly_data(&result_grid_n27_188._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n27_186, &result_n27_186);
  Rescale(&result_n27_186._c0_poly, &result_n27_186._c0_poly);
  Rescale(&result_n27_186._c1_poly, &result_n27_186._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_154_443, 79 /* cst_176 */, 4096, 1, 3);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n27_186, &result_n27_186, &_pgen_tmp_154_443);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n27_186._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n27_186._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n27_186._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_154_443._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n27_186._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&result_n27_186._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_154_443._poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435589, &result_n27_186);
  Free_poly_data(&result_n27_186._c1_poly);
  Free_poly_data(&result_n27_186._c0_poly);
  Copy_ciph(&orig_result27_190, &_preg_268435589);
  Free_poly_data(&_preg_268435589._c1_poly);
  Free_poly_data(&_preg_268435589._c0_poly);
  Zero_ciph(&comb_dic_result28_191);
  for (comb_dic_index_n28_192 = 0; comb_dic_index_n28_192 < 1; comb_dic_index_n28_192 = comb_dic_index_n28_192 + 1) {
    _preg_268435703 = Rotate(orig_result27_190, 1 << comb_dic_index_n28_192);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&orig_result27_190, &orig_result27_190, &_preg_268435703);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&orig_result27_190._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&orig_result27_190._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&orig_result27_190._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435703._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&orig_result27_190._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&orig_result27_190._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435703._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435703._c1_poly);
    Free_poly_data(&_preg_268435703._c0_poly);
  }
  for (comb_dic_index_out_n28_193 = 0; comb_dic_index_out_n28_193 < 2; comb_dic_index_out_n28_193 = comb_dic_index_out_n28_193 + 1) {
    for (comb_dic_index_in_n28_194 = 0; comb_dic_index_in_n28_194 < 1; comb_dic_index_in_n28_194 = comb_dic_index_in_n28_194 + 1) {
      _preg_268435704 = Rotate(orig_result27_190, (comb_dic_index_out_n28_193 * 6) + (comb_dic_index_in_n28_194 * 2));
      Copy_ciph(&_ckks_gen_tmp_3634_276, &_preg_268435704);
      Pt_from_msg_ofst(&_pgen_tmp_155_444, 80/* cst_178 */, (((comb_dic_index_out_n28_193 * 1) + comb_dic_index_in_n28_194)) * (4096), 4096, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_156_445, &_ckks_gen_tmp_3634_276, &_pgen_tmp_155_444);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_dic_result28_191, &comb_dic_result28_191, &_pgen_tmp_156_445);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&comb_dic_result28_191._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_156_445._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_3634_276._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_155_444._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_156_445._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_3634_276._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_155_444._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&comb_dic_result28_191._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&comb_dic_result28_191._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_156_445._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&comb_dic_result28_191._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&comb_dic_result28_191._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_156_445._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435704._c1_poly);
      Free_poly_data(&_preg_268435704._c0_poly);
    }
  }
  Free_poly_data(&orig_result27_190._c1_poly);
  Free_poly_data(&orig_result27_190._c0_poly);
  Free_poly_data(&_pgen_tmp_155_444._poly);
  Free_poly_data(&_ckks_gen_tmp_3634_276._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3634_276._c0_poly);
  Free_poly_data(&_pgen_tmp_156_445._c1_poly);
  Free_poly_data(&_pgen_tmp_156_445._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&comb_dic_result28_191, &comb_dic_result28_191);
  Rescale(&comb_dic_result28_191._c0_poly, &comb_dic_result28_191._c0_poly);
  Rescale(&comb_dic_result28_191._c1_poly, &comb_dic_result28_191._c1_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&ss_result28_195);
  for (comb_cc_index_n28_196 = 0; comb_cc_index_n28_196 < 256; comb_cc_index_n28_196 = comb_cc_index_n28_196 + 1) {
    _preg_268435705 = Rotate(comb_dic_result28_191, comb_cc_index_n28_196 * 12);
    Copy_ciph(&_ckks_gen_tmp_3671_277, &_preg_268435705);
    Pt_from_msg_ofst(&_pgen_tmp_157_446, 81/* cst_179 */, (comb_cc_index_n28_196) * (4096), 4096, 1, 2);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_158_447, &_ckks_gen_tmp_3671_277, &_pgen_tmp_157_446);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&ss_result28_195, &ss_result28_195, &_pgen_tmp_158_447);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&ss_result28_195._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_158_447._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_3671_277._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_157_446._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_158_447._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_3671_277._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_157_446._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&ss_result28_195._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&ss_result28_195._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_158_447._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&ss_result28_195._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&ss_result28_195._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_158_447._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435705._c1_poly);
    Free_poly_data(&_preg_268435705._c0_poly);
  }
  Free_poly_data(&comb_dic_result28_191._c1_poly);
  Free_poly_data(&comb_dic_result28_191._c0_poly);
  Free_poly_data(&_pgen_tmp_157_446._poly);
  Free_poly_data(&_ckks_gen_tmp_3671_277._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3671_277._c0_poly);
  Free_poly_data(&_pgen_tmp_158_447._c1_poly);
  Free_poly_data(&_pgen_tmp_158_447._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&ss_result28_195, &ss_result28_195);
  Rescale(&ss_result28_195._c0_poly, &ss_result28_195._c0_poly);
  Rescale(&ss_result28_195._c1_poly, &ss_result28_195._c1_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&_preg_268435590, &ss_result28_195);
  Free_poly_data(&ss_result28_195._c1_poly);
  Free_poly_data(&ss_result28_195._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 84
  // /layers/layers.11/relu1/Relu
  // pragma: 65536, 1033, 85
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435591, &_preg_268435590, 14);
  Free_poly_data(&_preg_268435590._c1_poly);
  Free_poly_data(&_preg_268435590._c0_poly);
  _preg_268435592 = App_relu(_preg_268435591, _preg_268435591, 1024);
  Free_poly_data(&_preg_268435591._c1_poly);
  Free_poly_data(&_preg_268435591._c0_poly);
  Copy_ciph(&_preg_268435593, &_preg_268435592);
  Free_poly_data(&_preg_268435592._c1_poly);
  Free_poly_data(&_preg_268435592._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 85
  // /layers/layers.11/conv2/Conv
  // pragma: 65536, 1027, 86
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435594, &_preg_268435593);
  Free_poly_data(&_preg_268435593._c1_poly);
  Free_poly_data(&_preg_268435593._c0_poly);
  // BlockingRot replicate=3
  _preg_268435706 = Rotate(_preg_268435594, -1024);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_159_448, &_preg_268435594, &_preg_268435706);
  CMPLR_TM_END(12, 0);
  _preg_268435707 = Rotate(_preg_268435594, -2048);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n28_197, &_pgen_tmp_159_448, &_preg_268435707);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&input_dup_n28_197._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_159_448._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435594._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435706._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_159_448._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435594._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435706._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&input_dup_n28_197._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_159_448._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435707._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&input_dup_n28_197._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_159_448._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435707._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_preg_268435706._c1_poly);
  Free_poly_data(&_preg_268435706._c0_poly);
  Free_poly_data(&_preg_268435594._c1_poly);
  Free_poly_data(&_preg_268435594._c0_poly);
  Free_poly_data(&_preg_268435707._c1_poly);
  Free_poly_data(&_preg_268435707._c0_poly);
  Free_poly_data(&_pgen_tmp_159_448._c1_poly);
  Free_poly_data(&_pgen_tmp_159_448._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=16
  for (bs_input_n28_198 = 0; bs_input_n28_198 < 16; bs_input_n28_198 = bs_input_n28_198 + 1) {
    _preg_268435708 = Rotate(input_dup_n28_197, _cst_183[bs_input_n28_198]);
    Copy_ciph(&input_block_n28_199[bs_input_n28_198], &_preg_268435708);
    Free_poly_data(&_preg_268435708._c1_poly);
    Free_poly_data(&_preg_268435708._c0_poly);
  }
  Free_poly_data(&input_dup_n28_197._c1_poly);
  Free_poly_data(&input_dup_n28_197._c0_poly);
  Zero_ciph(&result_n29_200);
  for (num_grid_n29_201 = 0; num_grid_n29_201 < 16; num_grid_n29_201 = num_grid_n29_201 + 1) {
    Zero_ciph(&result_grid_n29_202);
    for (cap_block_n29_203 = 0; cap_block_n29_203 < 16; cap_block_n29_203 = cap_block_n29_203 + 1) {
      _ckks_gen_tmp_3775_278 = input_block_n28_199[cap_block_n29_203];
      Pt_from_msg_ofst(&_pgen_tmp_160_449, 82/* cst_181 */, ((cap_block_n29_203 + (num_grid_n29_201 * 16))) * (2048), 2048, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_161_450, &_ckks_gen_tmp_3775_278, &_pgen_tmp_160_449);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n29_202, &result_grid_n29_202, &_pgen_tmp_161_450);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n29_202._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_161_450._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_3775_278._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_160_449._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_161_450._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_3775_278._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_160_449._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n29_202._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n29_202._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_161_450._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n29_202._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n29_202._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_161_450._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435709 = Rotate(result_grid_n29_202, num_grid_n29_201 * 64);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n29_200, &result_n29_200, &_preg_268435709);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n29_200._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n29_200._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n29_200._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435709._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n29_200._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n29_200._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435709._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435709._c1_poly);
    Free_poly_data(&_preg_268435709._c0_poly);
  }
  Free_ciph_poly(input_block_n28_199, 16);
  Free_poly_data(&_pgen_tmp_160_449._poly);
  Free_poly_data(&_pgen_tmp_161_450._c1_poly);
  Free_poly_data(&_pgen_tmp_161_450._c0_poly);
  Free_poly_data(&result_grid_n29_202._c1_poly);
  Free_poly_data(&result_grid_n29_202._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n29_200, &result_n29_200);
  Rescale(&result_n29_200._c0_poly, &result_n29_200._c0_poly);
  Rescale(&result_n29_200._c1_poly, &result_n29_200._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_163_452, 83 /* cst_184 */, 2048, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_162_451, &result_n29_200, &_pgen_tmp_163_452);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_162_451._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_162_451._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n29_200._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_163_452._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_162_451._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n29_200._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_163_452._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_163_452._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435595, &_pgen_tmp_162_451);
  Rescale(&_preg_268435595._c0_poly, &_pgen_tmp_162_451._c0_poly);
  Rescale(&_preg_268435595._c1_poly, &_pgen_tmp_162_451._c1_poly);
  Free_poly_data(&_pgen_tmp_162_451._c1_poly);
  Free_poly_data(&_pgen_tmp_162_451._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435710 = Rotate(result_n29_200, -2048);
  Copy_ciph(&_ckks_gen_tmp_3819_279, &_preg_268435710);
  Free_poly_data(&_preg_268435710._c1_poly);
  Free_poly_data(&_preg_268435710._c0_poly);
  Pt_from_msg(&_pgen_tmp_165_454, 84 /* cst_185 */, 2048, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_164_453, &_ckks_gen_tmp_3819_279, &_pgen_tmp_165_454);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_164_453._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_164_453._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_3819_279._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_165_454._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_164_453._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_3819_279._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_165_454._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_165_454._poly);
  Free_poly_data(&_ckks_gen_tmp_3819_279._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3819_279._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_166_455, &_pgen_tmp_164_453);
  Rescale(&_pgen_tmp_166_455._c0_poly, &_pgen_tmp_164_453._c0_poly);
  Rescale(&_pgen_tmp_166_455._c1_poly, &_pgen_tmp_164_453._c1_poly);
  Free_poly_data(&_pgen_tmp_164_453._c1_poly);
  Free_poly_data(&_pgen_tmp_164_453._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435595, &_preg_268435595, &_pgen_tmp_166_455);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_preg_268435595._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&_preg_268435595._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435595._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_166_455._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_preg_268435595._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435595._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_166_455._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_166_455._c1_poly);
  Free_poly_data(&_pgen_tmp_166_455._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_167_456, 85 /* cst_182 */, 2048, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n29_200, &_preg_268435595, &_pgen_tmp_167_456);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n29_200._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n29_200._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435595._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_167_456._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n29_200._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&_preg_268435595._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_167_456._poly);
  Free_poly_data(&_preg_268435595._c1_poly);
  Free_poly_data(&_preg_268435595._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435596, &result_n29_200);
  Free_poly_data(&result_n29_200._c1_poly);
  Free_poly_data(&result_n29_200._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 86
  // /layers/layers.11/relu2/Relu
  // pragma: 65536, 1033, 87
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435597, &_preg_268435596, 13);
  Free_poly_data(&_preg_268435596._c1_poly);
  Free_poly_data(&_preg_268435596._c0_poly);
  _preg_268435598 = App_relu(_preg_268435597, _preg_268435597, 2048);
  Free_poly_data(&_preg_268435597._c1_poly);
  Free_poly_data(&_preg_268435597._c0_poly);
  Copy_ciph(&_preg_268435599, &_preg_268435598);
  Free_poly_data(&_preg_268435598._c1_poly);
  Free_poly_data(&_preg_268435598._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 87
  // /layers/layers.12/conv1/Conv
  // pragma: 65536, 1027, 88
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435600, &_preg_268435599);
  Free_poly_data(&_preg_268435599._c1_poly);
  Free_poly_data(&_preg_268435599._c0_poly);
  // BlockingRot replicate=1
  Copy_ciph(&input_dup_n29_204, &_preg_268435600);
  Free_poly_data(&_preg_268435600._c1_poly);
  Free_poly_data(&_preg_268435600._c0_poly);
  // BlockingRot HRot=bs=9
  for (bs_input_n29_205 = 0; bs_input_n29_205 < 9; bs_input_n29_205 = bs_input_n29_205 + 1) {
    _preg_268435711 = Rotate(input_dup_n29_204, _cst_189[bs_input_n29_205]);
    Copy_ciph(&input_block_n29_206[bs_input_n29_205], &_preg_268435711);
    Free_poly_data(&_preg_268435711._c1_poly);
    Free_poly_data(&_preg_268435711._c0_poly);
  }
  Free_poly_data(&input_dup_n29_204._c1_poly);
  Free_poly_data(&input_dup_n29_204._c0_poly);
  Zero_ciph(&result_n30_207);
  for (num_grid_n30_208 = 0; num_grid_n30_208 < 1; num_grid_n30_208 = num_grid_n30_208 + 1) {
    Zero_ciph(&result_grid_n30_209);
    for (cap_block_n30_210 = 0; cap_block_n30_210 < 9; cap_block_n30_210 = cap_block_n30_210 + 1) {
      _ckks_gen_tmp_3922_280 = input_block_n29_206[cap_block_n30_210];
      Pt_from_msg_ofst(&_pgen_tmp_168_457, 86/* cst_187 */, ((cap_block_n30_210 + (num_grid_n30_208 * 9))) * (2048), 2048, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_169_458, &_ckks_gen_tmp_3922_280, &_pgen_tmp_168_457);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n30_209, &result_grid_n30_209, &_pgen_tmp_169_458);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n30_209._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_169_458._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_3922_280._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_168_457._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_169_458._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_3922_280._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_168_457._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n30_209._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n30_209._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_169_458._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n30_209._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n30_209._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_169_458._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435712 = Rotate(result_grid_n30_209, num_grid_n30_208 * 4);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n30_207, &result_n30_207, &_preg_268435712);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n30_207._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n30_207._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n30_207._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435712._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n30_207._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n30_207._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435712._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435712._c1_poly);
    Free_poly_data(&_preg_268435712._c0_poly);
  }
  Free_ciph_poly(input_block_n29_206, 9);
  Free_poly_data(&_pgen_tmp_168_457._poly);
  Free_poly_data(&_pgen_tmp_169_458._c1_poly);
  Free_poly_data(&_pgen_tmp_169_458._c0_poly);
  Free_poly_data(&result_grid_n30_209._c1_poly);
  Free_poly_data(&result_grid_n30_209._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n30_207, &result_n30_207);
  Rescale(&result_n30_207._c0_poly, &result_n30_207._c0_poly);
  Rescale(&result_n30_207._c1_poly, &result_n30_207._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_170_459, 87 /* cst_188 */, 2048, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n30_207, &result_n30_207, &_pgen_tmp_170_459);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n30_207._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n30_207._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n30_207._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_170_459._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n30_207._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&result_n30_207._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_170_459._poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435601, &result_n30_207);
  Free_poly_data(&result_n30_207._c1_poly);
  Free_poly_data(&result_n30_207._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 88
  // /layers/layers.12/relu1/Relu
  // pragma: 65536, 1033, 89
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435602, &_preg_268435601, 14);
  Free_poly_data(&_preg_268435601._c1_poly);
  Free_poly_data(&_preg_268435601._c0_poly);
  _preg_268435603 = App_relu(_preg_268435602, _preg_268435602, 2048);
  Free_poly_data(&_preg_268435602._c1_poly);
  Free_poly_data(&_preg_268435602._c0_poly);
  Copy_ciph(&_preg_268435604, &_preg_268435603);
  Free_poly_data(&_preg_268435603._c1_poly);
  Free_poly_data(&_preg_268435603._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 89
  // /layers/layers.12/conv2/Conv
  // pragma: 65536, 1027, 90
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435605, &_preg_268435604);
  Free_poly_data(&_preg_268435604._c1_poly);
  Free_poly_data(&_preg_268435604._c0_poly);
  // BlockingRot replicate=3
  _preg_268435713 = Rotate(_preg_268435605, -2048);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_171_460, &_preg_268435605, &_preg_268435713);
  CMPLR_TM_END(12, 0);
  _preg_268435714 = Rotate(_preg_268435605, -4096);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n30_211, &_pgen_tmp_171_460, &_preg_268435714);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&input_dup_n30_211._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_171_460._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435605._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435713._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_171_460._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435605._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435713._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&input_dup_n30_211._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_171_460._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435714._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&input_dup_n30_211._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_171_460._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435714._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_preg_268435713._c1_poly);
  Free_poly_data(&_preg_268435713._c0_poly);
  Free_poly_data(&_preg_268435605._c1_poly);
  Free_poly_data(&_preg_268435605._c0_poly);
  Free_poly_data(&_preg_268435714._c1_poly);
  Free_poly_data(&_preg_268435714._c0_poly);
  Free_poly_data(&_pgen_tmp_171_460._c1_poly);
  Free_poly_data(&_pgen_tmp_171_460._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=16
  for (bs_input_n30_212 = 0; bs_input_n30_212 < 16; bs_input_n30_212 = bs_input_n30_212 + 1) {
    _preg_268435715 = Rotate(input_dup_n30_211, _cst_193[bs_input_n30_212]);
    Copy_ciph(&input_block_n30_213[bs_input_n30_212], &_preg_268435715);
    Free_poly_data(&_preg_268435715._c1_poly);
    Free_poly_data(&_preg_268435715._c0_poly);
  }
  Free_poly_data(&input_dup_n30_211._c1_poly);
  Free_poly_data(&input_dup_n30_211._c0_poly);
  Zero_ciph(&result_n31_214);
  for (num_grid_n31_215 = 0; num_grid_n31_215 < 32; num_grid_n31_215 = num_grid_n31_215 + 1) {
    Zero_ciph(&result_grid_n31_216);
    for (cap_block_n31_217 = 0; cap_block_n31_217 < 16; cap_block_n31_217 = cap_block_n31_217 + 1) {
      _ckks_gen_tmp_4051_281 = input_block_n30_213[cap_block_n31_217];
      Pt_from_msg_ofst(&_pgen_tmp_172_461, 88/* cst_191 */, ((cap_block_n31_217 + (num_grid_n31_215 * 16))) * (4096), 4096, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_173_462, &_ckks_gen_tmp_4051_281, &_pgen_tmp_172_461);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n31_216, &result_grid_n31_216, &_pgen_tmp_173_462);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&result_grid_n31_216._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_173_462._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_4051_281._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_172_461._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_173_462._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_4051_281._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_172_461._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n31_216._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n31_216._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_173_462._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&result_grid_n31_216._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_grid_n31_216._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_173_462._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435716 = Rotate(result_grid_n31_216, num_grid_n31_215 * 64);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n31_214, &result_n31_214, &_preg_268435716);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&result_n31_214._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&result_n31_214._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n31_214._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435716._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&result_n31_214._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n31_214._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435716._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435716._c1_poly);
    Free_poly_data(&_preg_268435716._c0_poly);
  }
  Free_ciph_poly(input_block_n30_213, 16);
  Free_poly_data(&_pgen_tmp_172_461._poly);
  Free_poly_data(&_pgen_tmp_173_462._c1_poly);
  Free_poly_data(&_pgen_tmp_173_462._c0_poly);
  Free_poly_data(&result_grid_n31_216._c1_poly);
  Free_poly_data(&result_grid_n31_216._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n31_214, &result_n31_214);
  Rescale(&result_n31_214._c0_poly, &result_n31_214._c0_poly);
  Rescale(&result_n31_214._c1_poly, &result_n31_214._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_175_464, 89 /* cst_194 */, 4096, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_174_463, &result_n31_214, &_pgen_tmp_175_464);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_174_463._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_174_463._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n31_214._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_175_464._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_174_463._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&result_n31_214._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_175_464._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_175_464._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435606, &_pgen_tmp_174_463);
  Rescale(&_preg_268435606._c0_poly, &_pgen_tmp_174_463._c0_poly);
  Rescale(&_preg_268435606._c1_poly, &_pgen_tmp_174_463._c1_poly);
  Free_poly_data(&_pgen_tmp_174_463._c1_poly);
  Free_poly_data(&_pgen_tmp_174_463._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435717 = Rotate(result_n31_214, -4096);
  Copy_ciph(&_ckks_gen_tmp_4095_282, &_preg_268435717);
  Free_poly_data(&_preg_268435717._c1_poly);
  Free_poly_data(&_preg_268435717._c0_poly);
  Pt_from_msg(&_pgen_tmp_177_466, 90 /* cst_195 */, 4096, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_176_465, &_ckks_gen_tmp_4095_282, &_pgen_tmp_177_466);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_176_465._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_176_465._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_4095_282._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_177_466._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_176_465._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_4095_282._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_177_466._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_177_466._poly);
  Free_poly_data(&_ckks_gen_tmp_4095_282._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_4095_282._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_178_467, &_pgen_tmp_176_465);
  Rescale(&_pgen_tmp_178_467._c0_poly, &_pgen_tmp_176_465._c0_poly);
  Rescale(&_pgen_tmp_178_467._c1_poly, &_pgen_tmp_176_465._c1_poly);
  Free_poly_data(&_pgen_tmp_176_465._c1_poly);
  Free_poly_data(&_pgen_tmp_176_465._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435606, &_preg_268435606, &_pgen_tmp_178_467);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_preg_268435606._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&_preg_268435606._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435606._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_178_467._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_preg_268435606._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435606._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_178_467._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_178_467._c1_poly);
  Free_poly_data(&_pgen_tmp_178_467._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_179_468, 91 /* cst_192 */, 4096, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n31_214, &_preg_268435606, &_pgen_tmp_179_468);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&result_n31_214._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&result_n31_214._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435606._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_179_468._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&result_n31_214._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&_preg_268435606._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_179_468._poly);
  Free_poly_data(&_preg_268435606._c1_poly);
  Free_poly_data(&_preg_268435606._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435607, &result_n31_214);
  Free_poly_data(&result_n31_214._c1_poly);
  Free_poly_data(&result_n31_214._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 90
  // /layers/layers.12/relu2/Relu
  // pragma: 65536, 1033, 91
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435608, &_preg_268435607, 18);
  Free_poly_data(&_preg_268435607._c1_poly);
  Free_poly_data(&_preg_268435607._c0_poly);
  _preg_268435609 = App_relu(_preg_268435608, _preg_268435608, 4096);
  Free_poly_data(&_preg_268435608._c1_poly);
  Free_poly_data(&_preg_268435608._c0_poly);
  Copy_ciph(&_preg_268435610, &_preg_268435609);
  Free_poly_data(&_preg_268435609._c1_poly);
  Free_poly_data(&_preg_268435609._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 91
  // /AveragePool
  // pragma: 65536, 1026, 92
  CMPLR_TM_START(3, 0);
  Copy_ciph(&_preg_268435611, &_preg_268435610);
  Free_poly_data(&_preg_268435610._c1_poly);
  Free_poly_data(&_preg_268435610._c0_poly);
  _preg_268435718 = Rotate(_preg_268435611, 2);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&tmp_row_add31_218, &_preg_268435611, &_preg_268435718);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&tmp_row_add31_218._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&tmp_row_add31_218._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435611._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435718._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&tmp_row_add31_218._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435611._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435718._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_preg_268435718._c1_poly);
  Free_poly_data(&_preg_268435718._c0_poly);
  Free_poly_data(&_preg_268435611._c1_poly);
  Free_poly_data(&_preg_268435611._c0_poly);
  CMPLR_TM_END(12, 0);
  _preg_268435719 = Rotate(tmp_row_add31_218, 1);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_ckks_gen_tmp_4159_283, &tmp_row_add31_218, &_preg_268435719);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_ckks_gen_tmp_4159_283._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&_ckks_gen_tmp_4159_283._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&tmp_row_add31_218._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435719._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&_ckks_gen_tmp_4159_283._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&tmp_row_add31_218._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435719._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_preg_268435719._c1_poly);
  Free_poly_data(&_preg_268435719._c0_poly);
  Free_poly_data(&tmp_row_add31_218._c1_poly);
  Free_poly_data(&tmp_row_add31_218._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_181_470, 92 /* cst_196 */, 4096, 1, 7);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_180_469, &_ckks_gen_tmp_4159_283, &_pgen_tmp_181_470);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_180_469._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_180_469._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_4159_283._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_181_470._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_180_469._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_4159_283._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_181_470._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_181_470._poly);
  Free_poly_data(&_ckks_gen_tmp_4159_283._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_4159_283._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435612, &_pgen_tmp_180_469);
  Rescale(&_preg_268435612._c0_poly, &_pgen_tmp_180_469._c0_poly);
  Rescale(&_preg_268435612._c1_poly, &_pgen_tmp_180_469._c1_poly);
  Free_poly_data(&_pgen_tmp_180_469._c1_poly);
  Free_poly_data(&_pgen_tmp_180_469._c0_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&orig_result31_219, &_preg_268435612);
  Free_poly_data(&_preg_268435612._c1_poly);
  Free_poly_data(&_preg_268435612._c0_poly);
  Pt_from_msg(&_pgen_tmp_183_472, 93 /* cst_197 */, 4096, 1, 6);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_182_471, &orig_result31_219, &_pgen_tmp_183_472);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_182_471._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_182_471._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&orig_result31_219._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_183_472._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_182_471._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&orig_result31_219._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_183_472._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_183_472._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&orig_result31_219, &_pgen_tmp_182_471);
  Rescale(&orig_result31_219._c0_poly, &_pgen_tmp_182_471._c0_poly);
  Rescale(&orig_result31_219._c1_poly, &_pgen_tmp_182_471._c1_poly);
  Free_poly_data(&_pgen_tmp_182_471._c1_poly);
  Free_poly_data(&_pgen_tmp_182_471._c0_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&ss_result32_220);
  for (comb_cc_lf_index1_n32_221 = 0; comb_cc_lf_index1_n32_221 < 2; comb_cc_lf_index1_n32_221 = comb_cc_lf_index1_n32_221 + 1) {
    _preg_268435720 = Rotate(orig_result31_219, (1 << comb_cc_lf_index1_n32_221) * 3);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&orig_result31_219, &orig_result31_219, &_preg_268435720);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&orig_result31_219._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&orig_result31_219._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&orig_result31_219._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435720._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&orig_result31_219._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&orig_result31_219._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435720._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435720._c1_poly);
    Free_poly_data(&_preg_268435720._c0_poly);
  }
  Pt_from_msg(&_pgen_tmp_185_474, 94 /* cst_198 */, 4096, 1, 5);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_184_473, &orig_result31_219, &_pgen_tmp_185_474);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_184_473._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_184_473._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&orig_result31_219._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_185_474._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_184_473._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&orig_result31_219._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_185_474._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_185_474._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&orig_result31_219, &_pgen_tmp_184_473);
  Rescale(&orig_result31_219._c0_poly, &_pgen_tmp_184_473._c0_poly);
  Rescale(&orig_result31_219._c1_poly, &_pgen_tmp_184_473._c1_poly);
  Free_poly_data(&_pgen_tmp_184_473._c1_poly);
  Free_poly_data(&_pgen_tmp_184_473._c0_poly);
  CMPLR_TM_END(19, 0);
  for (comb_cc_lf_index2_n32_222 = 0; comb_cc_lf_index2_n32_222 < 2; comb_cc_lf_index2_n32_222 = comb_cc_lf_index2_n32_222 + 1) {
    _preg_268435721 = Rotate(orig_result31_219, (1 << comb_cc_lf_index2_n32_222) * 12);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&orig_result31_219, &orig_result31_219, &_preg_268435721);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&orig_result31_219._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&orig_result31_219._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&orig_result31_219._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435721._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&orig_result31_219._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&orig_result31_219._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435721._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435721._c1_poly);
    Free_poly_data(&_preg_268435721._c0_poly);
  }
  for (comb_cc_index_n32_223 = 0; comb_cc_index_n32_223 < 64; comb_cc_index_n32_223 = comb_cc_index_n32_223 + 1) {
    _preg_268435722 = Rotate(orig_result31_219, comb_cc_index_n32_223 * 48);
    Copy_ciph(&_ckks_gen_tmp_4250_284, &_preg_268435722);
    Pt_from_msg_ofst(&_pgen_tmp_186_475, 95/* cst_199 */, (comb_cc_index_n32_223) * (4096), 4096, 1, 4);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_187_476, &_ckks_gen_tmp_4250_284, &_pgen_tmp_186_475);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&ss_result32_220, &ss_result32_220, &_pgen_tmp_187_476);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&ss_result32_220._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_187_476._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_4250_284._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_186_475._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_187_476._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_4250_284._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_186_475._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&ss_result32_220._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&ss_result32_220._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_187_476._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&ss_result32_220._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&ss_result32_220._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_187_476._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435722._c1_poly);
    Free_poly_data(&_preg_268435722._c0_poly);
  }
  Free_poly_data(&orig_result31_219._c1_poly);
  Free_poly_data(&orig_result31_219._c0_poly);
  Free_poly_data(&_pgen_tmp_186_475._poly);
  Free_poly_data(&_ckks_gen_tmp_4250_284._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_4250_284._c0_poly);
  Free_poly_data(&_pgen_tmp_187_476._c1_poly);
  Free_poly_data(&_pgen_tmp_187_476._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&ss_result32_220, &ss_result32_220);
  Rescale(&ss_result32_220._c0_poly, &ss_result32_220._c0_poly);
  Rescale(&ss_result32_220._c1_poly, &ss_result32_220._c1_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&_preg_268435613, &ss_result32_220);
  Free_poly_data(&ss_result32_220._c1_poly);
  Free_poly_data(&ss_result32_220._c0_poly);
  CMPLR_TM_END(3, 0);
  // pragma: 65537, 1026, 92
  // /Flatten
  // pragma: 65536, 1028, 93
  CMPLR_TM_START(6, 0);
  Copy_ciph(&_preg_268435614, &_preg_268435613);
  Free_poly_data(&_preg_268435613._c1_poly);
  Free_poly_data(&_preg_268435613._c0_poly);
  CMPLR_TM_END(6, 0);
  // pragma: 65537, 1028, 93
  // /linear/Gemm
  // pragma: 65536, 1029, 95
  CMPLR_TM_START(7, 0);
  // BlockingRot replicate=2
  _preg_268435723 = Rotate(_preg_268435614, -1030);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n32_224, &_preg_268435614, &_preg_268435723);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&input_dup_n32_224._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&input_dup_n32_224._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435614._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435723._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modadd(Coeffs(&input_dup_n32_224._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435614._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435723._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_preg_268435723._c1_poly);
  Free_poly_data(&_preg_268435723._c0_poly);
  Free_poly_data(&_preg_268435614._c1_poly);
  Free_poly_data(&_preg_268435614._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=2
  for (bs_input_n32_225 = 0; bs_input_n32_225 < 2; bs_input_n32_225 = bs_input_n32_225 + 1) {
    _preg_268435724 = Rotate(input_dup_n32_224, _cst_202[bs_input_n32_225]);
    Copy_ciph(&input_block_n32_226[bs_input_n32_225], &_preg_268435724);
    Free_poly_data(&_preg_268435724._c1_poly);
    Free_poly_data(&_preg_268435724._c0_poly);
  }
  Free_poly_data(&input_dup_n32_224._c1_poly);
  Free_poly_data(&input_dup_n32_224._c0_poly);
  Zero_ciph(&gemm_result_n33_227);
  // IMRA Metakernel: gs=5
  for (gs_n33_228 = 0; gs_n33_228 < 5; gs_n33_228 = gs_n33_228 + 1) {
    Zero_ciph(&block_result_229);
    for (bs_n33_230 = 0; bs_n33_230 < 2; bs_n33_230 = bs_n33_230 + 1) {
      _ckks_gen_tmp_4342_285 = input_block_n32_226[bs_n33_230];
      Pt_from_msg_ofst(&_pgen_tmp_188_477, 96/* cst_201 */, ((bs_n33_230 + (gs_n33_228 * 2))) * (1040), 1040, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_189_478, &_ckks_gen_tmp_4342_285, &_pgen_tmp_188_477);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&block_result_229, &block_result_229, &_pgen_tmp_189_478);
      _pgen_modulus_286 = Q_modulus();
      _pgen_num_q_287 = Poly_level(&block_result_229._c0_poly);
      for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_189_478._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_4342_285._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_188_477._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_189_478._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_ckks_gen_tmp_4342_285._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_188_477._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&block_result_229._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&block_result_229._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_189_478._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        Hw_modadd(Coeffs(&block_result_229._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&block_result_229._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_189_478._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
        _pgen_modulus_286 = _pgen_modulus_286 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435725 = Rotate(block_result_229, gs_n33_228 * 2);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&gemm_result_n33_227, &gemm_result_n33_227, &_preg_268435725);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&gemm_result_n33_227._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&gemm_result_n33_227._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&gemm_result_n33_227._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435725._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&gemm_result_n33_227._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&gemm_result_n33_227._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435725._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435725._c1_poly);
    Free_poly_data(&_preg_268435725._c0_poly);
  }
  Free_ciph_poly(input_block_n32_226, 2);
  Free_poly_data(&_pgen_tmp_188_477._poly);
  Free_poly_data(&_pgen_tmp_189_478._c1_poly);
  Free_poly_data(&_pgen_tmp_189_478._c0_poly);
  Free_poly_data(&block_result_229._c1_poly);
  Free_poly_data(&block_result_229._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&gemm_result_n33_227, &gemm_result_n33_227);
  Rescale(&gemm_result_n33_227._c0_poly, &gemm_result_n33_227._c0_poly);
  Rescale(&gemm_result_n33_227._c1_poly, &gemm_result_n33_227._c1_poly);
  CMPLR_TM_END(19, 0);
  // gemm result reduce->Ps=1
  // gemm result reduce->(kp/np)=103
  Copy_ciph(&reduce_intra_231, &gemm_result_n33_227);
  for (ri_n33_232 = 1; ri_n33_232 < 103; ri_n33_232 = ri_n33_232 + 1) {
    _preg_268435726 = Rotate(gemm_result_n33_227, ri_n33_232 * 10);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&reduce_intra_231, &reduce_intra_231, &_preg_268435726);
    _pgen_modulus_286 = Q_modulus();
    _pgen_num_q_287 = Poly_level(&reduce_intra_231._c0_poly);
    for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
      Hw_modadd(Coeffs(&reduce_intra_231._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&reduce_intra_231._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435726._c0_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      Hw_modadd(Coeffs(&reduce_intra_231._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&reduce_intra_231._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_preg_268435726._c1_poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
      _pgen_modulus_286 = _pgen_modulus_286 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435726._c1_poly);
    Free_poly_data(&_preg_268435726._c0_poly);
  }
  Free_poly_data(&gemm_result_n33_227._c1_poly);
  Free_poly_data(&gemm_result_n33_227._c0_poly);
  // gemm add bias
  Pt_from_msg(&_pgen_tmp_190_479, 97 /* cst_1 */, 10, 1, 2);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&reduce_intra_231, &reduce_intra_231, &_pgen_tmp_190_479);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&reduce_intra_231._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modadd(Coeffs(&reduce_intra_231._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&reduce_intra_231._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_190_479._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Set_coeffs(&reduce_intra_231._c1_poly, _pgen_rns_idx_288, degree, Coeffs(&reduce_intra_231._c1_poly, _pgen_rns_idx_288, degree));
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_190_479._poly);
  CMPLR_TM_END(13, 0);
  Pt_from_msg(&_pgen_tmp_192_481, 98 /* cst_203 */, 10, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_191_480, &reduce_intra_231, &_pgen_tmp_192_481);
  _pgen_modulus_286 = Q_modulus();
  _pgen_num_q_287 = Poly_level(&_pgen_tmp_191_480._c0_poly);
  for (_pgen_rns_idx_288 = 0; _pgen_rns_idx_288 < _pgen_num_q_287; _pgen_rns_idx_288 = _pgen_rns_idx_288 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_191_480._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&reduce_intra_231._c0_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_192_481._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_191_480._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&reduce_intra_231._c1_poly, _pgen_rns_idx_288, degree), Coeffs(&_pgen_tmp_192_481._poly, _pgen_rns_idx_288, degree), _pgen_modulus_286, degree);
    _pgen_modulus_286 = _pgen_modulus_286 + 1;
  }
  Free_poly_data(&_pgen_tmp_192_481._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&reduce_intra_231, &_pgen_tmp_191_480);
  Rescale(&reduce_intra_231._c0_poly, &_pgen_tmp_191_480._c0_poly);
  Rescale(&reduce_intra_231._c1_poly, &_pgen_tmp_191_480._c1_poly);
  Free_poly_data(&_pgen_tmp_191_480._c1_poly);
  Free_poly_data(&_pgen_tmp_191_480._c0_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&output_233, &reduce_intra_231);
  Free_poly_data(&reduce_intra_231._c1_poly);
  Free_poly_data(&reduce_intra_231._c0_poly);
  CMPLR_TM_END(7, 0);
  // pragma: 65537, 1029, 95
  Set_output_data("output", 0, &output_233);
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
  Encode_float(&_pgen_tmp_5_35, &_cst_204, 1, Sc_degree(&_pgen_tmp_4_34), Level(&_pgen_tmp_4_34));
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
  Encode_float(&_pgen_tmp_11_41, &_cst_205, 1, Sc_degree(&_pgen_tmp_10_40), Level(&_pgen_tmp_10_40));
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
  Encode_float(&_pgen_tmp_43_73, &_cst_214, 1, Sc_degree(&_pgen_tmp_42_72), Level(&_pgen_tmp_42_72));
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
  Encode_float(&_pgen_tmp_50_80, &_cst_215, 1, 1, Level(&_relu_tmp58_7));
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
  Encode_float(&_pgen_tmp_57_87, &_cst_216, 1, Sc_degree(&_pgen_tmp_56_86), Level(&_pgen_tmp_56_86));
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
  Encode_float(&_pgen_tmp_63_93, &_cst_217, 1, Sc_degree(&_pgen_tmp_62_92), Level(&_pgen_tmp_62_92));
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
  Encode_double(&_pgen_tmp_81_111, &_cst_224, 1, 1, Level(&_relu_tmp80_11));
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
  Encode_double(&_pgen_tmp_93_123, &_cst_227, 1, 1, Level(&_relu_tmp80_11));
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
  Encode_double(&_pgen_tmp_103_133, &_cst_230, 1, 1, Level(&_relu_tmp80_11));
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
  Encode_float(&_pgen_tmp_115_145, &_cst_231, 1, Sc_degree(&_pgen_tmp_114_144), Level(&_pgen_tmp_114_144));
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
  Encode_float(&_pgen_tmp_122_152, &_cst_232, 1, 1, Level(&_relu_tmp155_16));
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
  Encode_float(&_pgen_tmp_129_159, &_cst_233, 1, Sc_degree(&_pgen_tmp_128_158), Level(&_pgen_tmp_128_158));
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
  Encode_float(&_pgen_tmp_135_165, &_cst_234, 1, Sc_degree(&_pgen_tmp_134_164), Level(&_pgen_tmp_134_164));
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
    LIB_ANT, 65536, 0, 32, 3, 60, 56, 3, 192, 542, 
    { -32768, -28672, -24576, -20480, -16384, -12288, -8192, -4096,
      -2048, -1030, -1024, -33, -32, -31, -17, -16,
      -15, -9, -8, -7, -5, -4, -3, -2,
      -1, 0, 1, 2, 3, 4, 5, 6,
      7, 8, 9, 10, 11, 12, 13, 14,
      15, 16, 17, 20, 24, 26, 28, 30,
      31, 32, 33, 36, 38, 40, 44, 48,
      50, 52, 56, 60, 64, 70, 72, 80,
      84, 90, 96, 100, 108, 110, 112, 120,
      128, 130, 132, 140, 144, 150, 156, 160,
      168, 170, 176, 180, 190, 192, 200, 204,
      208, 210, 216, 220, 224, 228, 230, 240,
      250, 252, 256, 260, 264, 270, 276, 280,
      288, 290, 300, 310, 312, 320, 324, 330,
      336, 340, 348, 350, 360, 370, 372, 380,
      384, 390, 396, 400, 408, 410, 420, 430,
      432, 440, 444, 448, 450, 456, 460, 468,
      470, 480, 490, 492, 500, 504, 510, 512,
      516, 520, 528, 530, 540, 550, 552, 560,
      564, 570, 576, 580, 588, 590, 600, 610,
      612, 620, 624, 630, 636, 640, 648, 650,
      660, 670, 672, 680, 684, 690, 696, 700,
      704, 708, 710, 720, 730, 732, 740, 744,
      750, 756, 760, 768, 770, 780, 790, 792,
      800, 804, 810, 816, 820, 828, 830, 832,
      840, 850, 852, 860, 864, 870, 876, 880,
      888, 890, 896, 900, 910, 912, 920, 924,
      930, 936, 940, 948, 950, 960, 970, 972,
      980, 984, 990, 996, 1000, 1008, 1010, 1020,
      1024, 1032, 1044, 1056, 1068, 1080, 1088, 1092,
      1104, 1116, 1128, 1140, 1152, 1164, 1176, 1188,
      1200, 1212, 1216, 1224, 1236, 1248, 1260, 1272,
      1280, 1284, 1296, 1308, 1320, 1332, 1344, 1356,
      1368, 1380, 1392, 1404, 1408, 1416, 1428, 1440,
      1452, 1464, 1472, 1476, 1488, 1500, 1512, 1524,
      1536, 1548, 1560, 1572, 1584, 1596, 1600, 1608,
      1620, 1632, 1644, 1656, 1664, 1668, 1680, 1692,
      1704, 1716, 1728, 1740, 1752, 1764, 1776, 1788,
      1792, 1800, 1812, 1824, 1836, 1848, 1856, 1860,
      1872, 1884, 1896, 1908, 1920, 1932, 1944, 1956,
      1968, 1980, 1984, 1992, 2004, 2016, 2028, 2040,
      2048, 2052, 2064, 2076, 2088, 2100, 2112, 2124,
      2136, 2148, 2160, 2172, 2184, 2196, 2208, 2220,
      2232, 2244, 2256, 2268, 2280, 2292, 2304, 2316,
      2328, 2340, 2352, 2364, 2376, 2388, 2400, 2412,
      2424, 2436, 2448, 2460, 2472, 2484, 2496, 2508,
      2520, 2532, 2544, 2556, 2560, 2568, 2580, 2592,
      2604, 2616, 2628, 2640, 2652, 2664, 2676, 2688,
      2700, 2712, 2724, 2736, 2748, 2760, 2772, 2784,
      2796, 2808, 2816, 2820, 2832, 2844, 2856, 2868,
      2880, 2892, 2904, 2916, 2928, 2940, 2952, 2964,
      2976, 2988, 3000, 3012, 3024, 3036, 3048, 3060,
      3072, 3120, 3168, 3216, 3264, 3312, 3328, 3360,
      3408, 3456, 3504, 3552, 3584, 3600, 3648, 3696,
      3744, 3792, 3840, 3888, 3936, 3984, 4032, 4080,
      4096, 4128, 4176, 4224, 4272, 4320, 4368, 4416,
      4464, 4512, 4560, 4608, 4656, 4704, 4752, 4800,
      4848, 4896, 4944, 4992, 5040, 5088, 5120, 5136,
      5184, 5232, 5280, 5328, 5376, 5424, 5472, 5520,
      5568, 5616, 5632, 5664, 5712, 5760, 5808, 5856,
      5904, 5952, 6000, 6048, 6096, 6144, 6336, 6528,
      6656, 6720, 6912, 7104, 7168, 7296, 7488, 7680,
      7872, 8064, 8192, 8256, 8448, 8640, 8832, 9024,
      9216, 9408, 9600, 9792, 9984, 10176, 10240, 10368,
      10560, 10752, 10944, 11136, 11328, 11520, 11712, 11904,
      12096, 12288, 13056, 13824, 14336, 14592, 15360, 16128,
      16384, 16896, 17664, 18432, 19200, 19968, 20480, 20736,
      21504, 22272, 23040, 23808, 24576, 28672 }
  };
  return &parm;
}

RT_DATA_INFO* Get_rt_data_info() {
  static RT_DATA_INFO info = {
    "/app/release/fhelipe_mobilenet.bin",
    "XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX",
    DE_MSG_F32
  };
  return &info;
}

int32_t _cst_53[9] = {
  -33, -32, -31, -1, 0, 1, 31, 32,
  33
};
int32_t _cst_58[9] = {
  -33, -32, -31, -1, 0, 1, 31, 32,
  33
};
int32_t _cst_63[4] = {
  0, 1024, 2048, 3072
};
int32_t _cst_68[9] = {
  -33, -32, -31, -1, 0, 1, 31, 32,
  33
};
int32_t _cst_76[4] = {
  0, 256, 512, 768
};
int32_t _cst_82[9] = {
  -17, -16, -15, -1, 0, 1, 15, 16,
  17
};
int32_t _cst_86[8] = {
  0, 256, 512, 768, 1024, 1280, 1536, 1792
};
int32_t _cst_92[9] = {
  -17, -16, -15, -1, 0, 1, 15, 16,
  17
};
int32_t _cst_99[8] = {
  0, 64, 128, 192, 256, 320, 384, 448
};
int32_t _cst_105[9] = {
  -9, -8, -7, -1, 0, 1, 7, 8,
  9
};
int32_t _cst_109[8] = {
  0, 64, 128, 192, 256, 320, 384, 448
};
int32_t _cst_115[9] = {
  -9, -8, -7, -1, 0, 1, 7, 8,
  9
};
int32_t _cst_121[8] = {
  0, 16, 32, 48, 64, 80, 96, 112
};
int32_t _cst_127[9] = {
  -5, -4, -3, -1, 0, 1, 3, 4,
  5
};
int32_t _cst_131[16] = {
  0, 16, 32, 48, 64, 80, 96, 112,
  128, 144, 160, 176, 192, 208, 224, 240
};
int32_t _cst_137[9] = {
  -5, -4, -3, -1, 0, 1, 3, 4,
  5
};
int32_t _cst_141[16] = {
  0, 16, 32, 48, 64, 80, 96, 112,
  128, 144, 160, 176, 192, 208, 224, 240
};
int32_t _cst_147[9] = {
  -5, -4, -3, -1, 0, 1, 3, 4,
  5
};
int32_t _cst_151[16] = {
  0, 16, 32, 48, 64, 80, 96, 112,
  128, 144, 160, 176, 192, 208, 224, 240
};
int32_t _cst_157[9] = {
  -5, -4, -3, -1, 0, 1, 3, 4,
  5
};
int32_t _cst_161[16] = {
  0, 16, 32, 48, 64, 80, 96, 112,
  128, 144, 160, 176, 192, 208, 224, 240
};
int32_t _cst_167[9] = {
  -5, -4, -3, -1, 0, 1, 3, 4,
  5
};
int32_t _cst_171[16] = {
  0, 16, 32, 48, 64, 80, 96, 112,
  128, 144, 160, 176, 192, 208, 224, 240
};
int32_t _cst_177[9] = {
  -5, -4, -3, -1, 0, 1, 3, 4,
  5
};
int32_t _cst_183[16] = {
  0, 4, 8, 12, 16, 20, 24, 28,
  32, 36, 40, 44, 48, 52, 56, 60
};
int32_t _cst_189[9] = {
  -3, -2, -1, -1, 0, 1, 1, 2,
  3
};
int32_t _cst_193[16] = {
  0, 4, 8, 12, 16, 20, 24, 28,
  32, 36, 40, 44, 48, 52, 56, 60
};
int32_t _cst_202[2] = {
  0, 1
};
