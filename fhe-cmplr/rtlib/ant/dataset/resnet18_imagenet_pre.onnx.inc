// external header files
#include "rt_ant/rt_ant.h"

typedef double float64_t;
typedef float float32_t;

extern float32_t _cst_0[512000];
extern float32_t _cst_1[1000];
extern float32_t _cst_2[9408];
extern float32_t _cst_3[64];
extern float32_t _cst_4[36864];
extern float32_t _cst_5[64];
extern float32_t _cst_6[36864];
extern float32_t _cst_7[64];
extern float32_t _cst_8[36864];
extern float32_t _cst_9[64];
extern float32_t _cst_10[36864];
extern float32_t _cst_11[64];
extern float32_t _cst_12[8192];
extern float32_t _cst_13[128];
extern float32_t _cst_14[73728];
extern float32_t _cst_15[128];
extern float32_t _cst_16[147456];
extern float32_t _cst_17[128];
extern float32_t _cst_18[147456];
extern float32_t _cst_19[128];
extern float32_t _cst_20[147456];
extern float32_t _cst_21[128];
extern float32_t _cst_22[32768];
extern float32_t _cst_23[256];
extern float32_t _cst_24[294912];
extern float32_t _cst_25[256];
extern float32_t _cst_26[589824];
extern float32_t _cst_27[256];
extern float32_t _cst_28[589824];
extern float32_t _cst_29[256];
extern float32_t _cst_30[589824];
extern float32_t _cst_31[256];
extern float32_t _cst_32[131072];
extern float32_t _cst_33[512];
extern float32_t _cst_34[1179648];
extern float32_t _cst_35[512];
extern float32_t _cst_36[2359296];
extern float32_t _cst_37[512];
extern float32_t _cst_38[2359296];
extern float32_t _cst_39[512];
extern float32_t _cst_40[2359296];
extern float32_t _cst_41[512];
extern float32_t _cst_42[9408];
extern float32_t _cst_43[802816];
extern float32_t _cst_44[802816];
extern float32_t _cst_45[1];
extern int64_t _cst_46[2];
extern int64_t _cst_47[2];
extern int64_t _cst_48[2];
extern float32_t _cst_49[36864];
extern float32_t _cst_50[200704];
extern float32_t _cst_51[200704];
extern float32_t _cst_52[8];
extern float32_t _cst_53[36864];
extern float32_t _cst_54[200704];
extern float32_t _cst_55[200704];
extern float32_t _cst_56[8];
extern float32_t _cst_57[36864];
extern float32_t _cst_58[200704];
extern float32_t _cst_59[200704];
extern float32_t _cst_60[8];
extern float32_t _cst_61[36864];
extern float32_t _cst_62[200704];
extern float32_t _cst_63[200704];
extern float32_t _cst_64[8];
extern float32_t _cst_65[8192];
extern float32_t _cst_66[100352];
extern float32_t _cst_67[100352];
extern float32_t _cst_68[8];
extern int64_t _cst_69[2];
extern int64_t _cst_70[2];
extern int64_t _cst_71[2];
extern float32_t _cst_72[73728];
extern float32_t _cst_73[100352];
extern float32_t _cst_74[100352];
extern float32_t _cst_75[8];
extern int64_t _cst_76[2];
extern int64_t _cst_77[2];
extern int64_t _cst_78[2];
extern float32_t _cst_79[147456];
extern float32_t _cst_80[100352];
extern float32_t _cst_81[100352];
extern float32_t _cst_82[32];
extern float32_t _cst_83[147456];
extern float32_t _cst_84[100352];
extern float32_t _cst_85[100352];
extern float32_t _cst_86[32];
extern float32_t _cst_87[147456];
extern float32_t _cst_88[100352];
extern float32_t _cst_89[100352];
extern float32_t _cst_90[32];
extern float32_t _cst_91[32768];
extern float32_t _cst_92[50176];
extern float32_t _cst_93[50176];
extern float32_t _cst_94[32];
extern int64_t _cst_95[2];
extern int64_t _cst_96[2];
extern int64_t _cst_97[2];
extern float32_t _cst_98[294912];
extern float32_t _cst_99[50176];
extern float32_t _cst_100[50176];
extern float32_t _cst_101[32];
extern int64_t _cst_102[2];
extern int64_t _cst_103[2];
extern int64_t _cst_104[2];
extern float32_t _cst_105[589824];
extern float32_t _cst_106[50176];
extern float32_t _cst_107[50176];
extern float32_t _cst_108[128];
extern float32_t _cst_109[589824];
extern float32_t _cst_110[50176];
extern float32_t _cst_111[50176];
extern float32_t _cst_112[128];
extern float32_t _cst_113[589824];
extern float32_t _cst_114[50176];
extern float32_t _cst_115[50176];
extern float32_t _cst_116[128];
extern float32_t _cst_117[131072];
extern float32_t _cst_118[25088];
extern float32_t _cst_119[128];
extern int64_t _cst_120[2];
extern int64_t _cst_121[2];
extern int64_t _cst_122[2];
extern float32_t _cst_123[1179648];
extern float32_t _cst_124[25088];
extern float32_t _cst_125[128];
extern int64_t _cst_126[2];
extern int64_t _cst_127[2];
extern int64_t _cst_128[2];
extern float32_t _cst_129[18];
extern float32_t _cst_130[2];
extern int64_t _cst_131[2];
extern int64_t _cst_132[2];
extern int64_t _cst_133[2];
extern int64_t _cst_134[2];
extern int64_t _cst_135[2];
extern int64_t _cst_136[2];
extern float32_t _cst_137[248672256];
extern int32_t _cst_138[1];
extern float32_t _cst_139[1295168];
extern float32_t _cst_140[26432];
extern int32_t _cst_141[49];
extern float32_t _cst_142[1404928];
extern float32_t _cst_143[351232];
extern int32_t _cst_144[1];
extern float32_t _cst_145[225792];
extern float32_t _cst_146[25088];
extern int32_t _cst_147[9];
extern float32_t _cst_148[702464];
extern float32_t _cst_149[351232];
extern float32_t _cst_150[6272];
extern float32_t _cst_151[115605504];
extern int32_t _cst_152[1];
extern float32_t _cst_153[1806336];
extern float32_t _cst_154[25088];
extern int32_t _cst_155[9];
extern float32_t _cst_156[200704];
extern float32_t _cst_157[200704];
extern float32_t _cst_158[115605504];
extern int32_t _cst_159[1];
extern float32_t _cst_160[1806336];
extern float32_t _cst_161[25088];
extern int32_t _cst_162[9];
extern float32_t _cst_163[200704];
extern float32_t _cst_164[200704];
extern float32_t _cst_165[115605504];
extern int32_t _cst_166[1];
extern float32_t _cst_167[1806336];
extern float32_t _cst_168[25088];
extern int32_t _cst_169[9];
extern float32_t _cst_170[200704];
extern float32_t _cst_171[200704];
extern float32_t _cst_172[115605504];
extern int32_t _cst_173[1];
extern float32_t _cst_174[1806336];
extern float32_t _cst_175[25088];
extern int32_t _cst_176[9];
extern float32_t _cst_177[200704];
extern float32_t _cst_178[200704];
extern float32_t _cst_179[25690112];
extern int32_t _cst_180[1];
extern float32_t _cst_181[200704];
extern float32_t _cst_182[25088];
extern int32_t _cst_183[1];
extern float32_t _cst_184[200704];
extern float32_t _cst_185[200704];
extern float32_t _cst_186[351232];
extern float32_t _cst_187[175616];
extern float32_t _cst_188[50176];
extern float32_t _cst_189[231211008];
extern int32_t _cst_190[1];
extern float32_t _cst_191[1806336];
extern float32_t _cst_192[25088];
extern int32_t _cst_193[9];
extern float32_t _cst_194[200704];
extern float32_t _cst_195[200704];
extern float32_t _cst_196[351232];
extern float32_t _cst_197[175616];
extern float32_t _cst_198[50176];
extern float32_t _cst_199[115605504];
extern int32_t _cst_200[1];
extern float32_t _cst_201[7225344];
extern float32_t _cst_202[25088];
extern int32_t _cst_203[9];
extern float32_t _cst_204[802816];
extern float32_t _cst_205[802816];
extern float32_t _cst_206[115605504];
extern int32_t _cst_207[1];
extern float32_t _cst_208[7225344];
extern float32_t _cst_209[25088];
extern int32_t _cst_210[9];
extern float32_t _cst_211[802816];
extern float32_t _cst_212[802816];
extern float32_t _cst_213[115605504];
extern int32_t _cst_214[1];
extern float32_t _cst_215[7225344];
extern float32_t _cst_216[25088];
extern int32_t _cst_217[9];
extern float32_t _cst_218[802816];
extern float32_t _cst_219[802816];
extern float32_t _cst_220[25690112];
extern int32_t _cst_221[1];
extern float32_t _cst_222[802816];
extern float32_t _cst_223[25088];
extern int32_t _cst_224[1];
extern float32_t _cst_225[802816];
extern float32_t _cst_226[802816];
extern float32_t _cst_227[175616];
extern float32_t _cst_228[100352];
extern float32_t _cst_229[200704];
extern float32_t _cst_230[231211008];
extern int32_t _cst_231[1];
extern float32_t _cst_232[7225344];
extern float32_t _cst_233[25088];
extern int32_t _cst_234[9];
extern float32_t _cst_235[802816];
extern float32_t _cst_236[802816];
extern float32_t _cst_237[175616];
extern float32_t _cst_238[100352];
extern float32_t _cst_239[200704];
extern float32_t _cst_240[115605504];
extern int32_t _cst_241[1];
extern float32_t _cst_242[28901376];
extern float32_t _cst_243[25088];
extern int32_t _cst_244[9];
extern float32_t _cst_245[3211264];
extern float32_t _cst_246[3211264];
extern float32_t _cst_247[115605504];
extern int32_t _cst_248[1];
extern float32_t _cst_249[28901376];
extern float32_t _cst_250[25088];
extern int32_t _cst_251[9];
extern float32_t _cst_252[3211264];
extern float32_t _cst_253[3211264];
extern float32_t _cst_254[115605504];
extern int32_t _cst_255[1];
extern float32_t _cst_256[28901376];
extern float32_t _cst_257[25088];
extern int32_t _cst_258[9];
extern float32_t _cst_259[3211264];
extern float32_t _cst_260[3211264];
extern float32_t _cst_261[25690112];
extern int32_t _cst_262[1];
extern float32_t _cst_263[3211264];
extern float32_t _cst_264[25088];
extern int32_t _cst_265[1];
extern float32_t _cst_266[3211264];
extern float32_t _cst_267[3211264];
extern float32_t _cst_268[702464];
extern float32_t _cst_269[802816];
extern float32_t _cst_270[231211008];
extern int32_t _cst_271[1];
extern float32_t _cst_272[28901376];
extern float32_t _cst_273[25088];
extern int32_t _cst_274[9];
extern float32_t _cst_275[3211264];
extern float32_t _cst_276[3211264];
extern float32_t _cst_277[702464];
extern float32_t _cst_278[802816];
extern int32_t _cst_279[1];
extern float32_t _cst_280[115605504];
extern float32_t _cst_281[25088];
extern int32_t _cst_282[9];
extern float32_t _cst_283[12845056];
extern float32_t _cst_284[12845056];
extern int32_t _cst_285[1];
extern float32_t _cst_286[115605504];
extern float32_t _cst_287[25088];
extern int32_t _cst_288[9];
extern float32_t _cst_289[12845056];
extern float32_t _cst_290[12845056];
extern int32_t _cst_291[1];
extern float32_t _cst_292[115605504];
extern float32_t _cst_293[25088];
extern int32_t _cst_294[9];
extern float32_t _cst_295[12845056];
extern float32_t _cst_296[12845056];
float32_t _cst_297 = 0.02040816326530612244846;
extern float32_t _cst_298[25088];
extern float32_t _cst_299[275968];
extern int32_t _cst_300[1];
extern float32_t _cst_301[557056];
extern int32_t _cst_302[8];
extern float32_t _cst_303[1000];
float32_t _cst_304 = -1;
float32_t _cst_305 = -1;
float64_t _cst_306 = -3.809199432496630510769;
float32_t _cst_307 = -3.809199432496630510769;
float64_t _cst_308 = 2.460940868770910228136;
float32_t _cst_309 = 2.460940868770910228136;
float64_t _cst_310 = -1.430304794543664215212;
float32_t _cst_311 = -1.430304794543664215212;
float64_t _cst_312 = 2.944661935353764636858;
float32_t _cst_313 = 2.944661935353764636858;
float32_t _cst_314 = -1;
float32_t _cst_315 = -1;
float32_t _cst_316 = -1;
float32_t _cst_317 = -1;
float64_t _cst_318 = -0.0001600280537250875771867;
float32_t _cst_319 = -0.0001600280537250875771867;
float64_t _cst_320 = 0.003032478474127557870749;
float32_t _cst_321 = 0.003032478474127557870749;
float64_t _cst_322 = 0.1365828361194337536855;
float32_t _cst_323 = 0.1365828361194337536855;
float64_t _cst_324 = -0.02219735858216702675816;
float64_t _cst_325 = 0.5685231134608953462717;
float32_t _cst_326 = 0.5685231134608953462717;
float64_t _cst_327 = -0.5558785316215136829143;
float64_t _cst_328 = 1.614771079042867985009;
float32_t _cst_329 = 1.614771079042867985009;
float64_t _cst_330 = -0.6164083583294512891371;
float32_t _cst_331 = -1;
float32_t _cst_332 = -1;
float32_t _cst_333 = -1;
float32_t _cst_334 = -1;
float64_t _cst_335 = 0.0001111119162030077897477;
float32_t _cst_336 = 0.0001111119162030077897477;
float64_t _cst_337 = 0.006507995190210730772351;
float32_t _cst_338 = 0.006507995190210730772351;
float64_t _cst_339 = -0.0009371069270347270278171;
float32_t _cst_340 = -0.0009371069270347270278171;
float64_t _cst_341 = 0.1056744718173614761003;
float32_t _cst_342 = 0.1056744718173614761003;
float64_t _cst_343 = -0.03691063940349948585551;
float32_t _cst_344 = -0.03691063940349948585551;
float64_t _cst_345 = 0.6334139843709288841822;
float32_t _cst_346 = 0.6334139843709288841822;
float64_t _cst_347 = -0.2078597158810965850329;
float32_t _cst_348 = -0.2078597158810965850329;
float32_t _cst_349 = 0.5;
float32_t _cst_350 = 0.01000000000000000020817;
float32_t _cst_351 = 0.01000000000000000020817;
float32_t _cst_352 = 0.01000000000000000020817;
float32_t _cst_353 = 0.01000000000000000020817;
float32_t _cst_354 = 0.01000000000000000020817;
float32_t _cst_355 = 0.01000000000000000020817;
float32_t _cst_356 = 0.01000000000000000020817;
float32_t _cst_357 = 0.01000000000000000020817;
float32_t _cst_358 = 0.01000000000000000020817;
float32_t _cst_359 = 0.01000000000000000020817;
float32_t _cst_360 = 0.01000000000000000020817;
float32_t _cst_361 = 0.01000000000000000020817;
float32_t _cst_362 = 0.01000000000000000020817;
float32_t _cst_363 = 0.01000000000000000020817;
float32_t _cst_364 = 0.01000000000000000020817;
float32_t _cst_365 = 0.01000000000000000020817;
float32_t _cst_366 = 0.01000000000000000020817;
CIPHERTEXT App_relu(CIPHERTEXT input_ct0, CIPHERTEXT input_ct1, uint32_t mask_len);
CIPHERTEXT Rotate(CIPHERTEXT ciph, int32_t rot_idx);
CIPHERTEXT Relinearize(CIPHERTEXT3 ciph);

bool Main_graph() {
  CIPHERTEXT input_0[6];
  CIPHERTEXT VS_out_conv1_1[128];
  CIPHERTEXT VS_out_conv_halo1_2[128];
  int32_t mesh_y_n1_3;
  int32_t mesh_z_n1_4;
  CIPHERTEXT input_dup_n20_5;
  int32_t bs_input_n20_6;
  CIPHERTEXT input_block_n20_7[49];
  int32_t mesh_x_n1_8;
  CIPHERTEXT result_n21_9;
  int32_t num_grid_n21_10;
  CIPHERTEXT result_grid_n21_11;
  int32_t cap_block_n21_12;
  int32_t siv_n1_13;
  CIPHERTEXT x_row21_14;
  CIPHERTEXT comb_row_result22_15;
  int32_t comb_row_lf_index_n22_16;
  int32_t comb_row_index_n22_17;
  CIPHERTEXT comb_rc_result22_18;
  int32_t comb_rc_lf_index_n22_19;
  int32_t comb_rc_index_n22_20;
  int32_t reshardm_n1_21;
  CIPHERTEXT output_reshard1_22[32];
  CIPHERTEXT VS_out_relu1_23[32];
  int32_t mesh_y_n1_24;
  int32_t mesh_z_n1_25;
  CIPHERTEXT VS_out_avp1_26[32];
  int32_t mesh_y_n1_27;
  int32_t mesh_z_n1_28;
  CIPHERTEXT input_dup_n22_29;
  int32_t bs_input_n22_30;
  CIPHERTEXT input_block_n22_31[9];
  CIPHERTEXT result_n23_32;
  int32_t num_grid_n23_33;
  CIPHERTEXT result_grid_n23_34;
  int32_t cap_block_n23_35;
  CIPHERTEXT orig_result23_36;
  CIPHERTEXT comb_row_result24_37;
  int32_t comb_row_lf_index_n24_38;
  int32_t comb_row_index_n24_39;
  CIPHERTEXT comb_rc_result24_40;
  int32_t comb_rc_lf_index_n24_41;
  int32_t comb_rc_index_n24_42;
  CIPHERTEXT ss_result24_43;
  int32_t comb_cc_index_n24_44;
  int32_t reshardm_n1_45;
  CIPHERTEXT output_reshard1_46[8];
  CIPHERTEXT VS_out_conv2_47[8];
  CIPHERTEXT VS_out_conv_halo2_48[8];
  int32_t mesh_y_n2_49;
  int32_t mesh_z_n2_50;
  CIPHERTEXT input_dup_n24_51;
  int32_t bs_input_n24_52;
  CIPHERTEXT input_block_n24_53[9];
  int32_t mesh_x_n2_54;
  CIPHERTEXT result_n25_55;
  int32_t num_grid_n25_56;
  CIPHERTEXT result_grid_n25_57;
  int32_t cap_block_n25_58;
  CIPHERTEXT VS_out_relu2_59[8];
  int32_t mesh_y_n2_60;
  int32_t mesh_z_n2_61;
  CIPHERTEXT VS_out_conv3_62[8];
  CIPHERTEXT VS_out_conv_halo3_63[8];
  int32_t mesh_y_n3_64;
  int32_t mesh_z_n3_65;
  CIPHERTEXT input_dup_n25_66;
  int32_t bs_input_n25_67;
  CIPHERTEXT input_block_n25_68[9];
  int32_t mesh_x_n3_69;
  CIPHERTEXT result_n26_70;
  int32_t num_grid_n26_71;
  CIPHERTEXT result_grid_n26_72;
  int32_t cap_block_n26_73;
  CIPHERTEXT VS_out_add3_74[8];
  int32_t mesh_y_n3_75;
  int32_t mesh_z_n3_76;
  CIPHERTEXT VS_out_relu3_77[8];
  int32_t mesh_y_n3_78;
  int32_t mesh_z_n3_79;
  CIPHERTEXT VS_out_conv4_80[8];
  CIPHERTEXT VS_out_conv_halo4_81[8];
  int32_t mesh_y_n4_82;
  int32_t mesh_z_n4_83;
  CIPHERTEXT input_dup_n26_84;
  int32_t bs_input_n26_85;
  CIPHERTEXT input_block_n26_86[9];
  int32_t mesh_x_n4_87;
  CIPHERTEXT result_n27_88;
  int32_t num_grid_n27_89;
  CIPHERTEXT result_grid_n27_90;
  int32_t cap_block_n27_91;
  CIPHERTEXT VS_out_relu4_92[8];
  int32_t mesh_y_n4_93;
  int32_t mesh_z_n4_94;
  CIPHERTEXT VS_out_conv5_95[8];
  CIPHERTEXT VS_out_conv_halo5_96[8];
  int32_t mesh_y_n5_97;
  int32_t mesh_z_n5_98;
  CIPHERTEXT input_dup_n27_99;
  int32_t bs_input_n27_100;
  CIPHERTEXT input_block_n27_101[9];
  int32_t mesh_x_n5_102;
  CIPHERTEXT result_n28_103;
  int32_t num_grid_n28_104;
  CIPHERTEXT result_grid_n28_105;
  int32_t cap_block_n28_106;
  CIPHERTEXT VS_out_add5_107[8];
  int32_t mesh_y_n5_108;
  int32_t mesh_z_n5_109;
  CIPHERTEXT VS_out_relu5_110[8];
  int32_t mesh_y_n5_111;
  int32_t mesh_z_n5_112;
  CIPHERTEXT VS_out_conv6_113[16];
  CIPHERTEXT VS_out_conv_halo6_114[16];
  int32_t mesh_y_n6_115;
  int32_t mesh_z_n6_116;
  CIPHERTEXT input_dup_n28_117;
  int32_t bs_input_n28_118;
  CIPHERTEXT input_block_n28_119[1];
  int32_t mesh_x_n6_120;
  CIPHERTEXT result_n29_121;
  int32_t num_grid_n29_122;
  CIPHERTEXT result_grid_n29_123;
  int32_t cap_block_n29_124;
  int32_t siv_n6_125;
  CIPHERTEXT orig_result29_126;
  CIPHERTEXT comb_row_result30_127;
  int32_t comb_row_lf_index_n30_128;
  int32_t comb_row_index_n30_129;
  CIPHERTEXT comb_rc_result30_130;
  int32_t comb_rc_lf_index_n30_131;
  int32_t comb_rc_index_n30_132;
  CIPHERTEXT ss_result30_133;
  int32_t comb_cc_lf_index_n30_134;
  int32_t comb_cc_index_n30_135;
  int32_t reshardm_n6_136;
  CIPHERTEXT output_reshard6_137[4];
  CIPHERTEXT VS_out_conv7_138[16];
  CIPHERTEXT VS_out_conv_halo7_139[16];
  int32_t mesh_y_n7_140;
  int32_t mesh_z_n7_141;
  CIPHERTEXT input_dup_n30_142;
  int32_t bs_input_n30_143;
  CIPHERTEXT input_block_n30_144[9];
  int32_t mesh_x_n7_145;
  CIPHERTEXT result_n31_146;
  int32_t num_grid_n31_147;
  CIPHERTEXT result_grid_n31_148;
  int32_t cap_block_n31_149;
  int32_t siv_n7_150;
  CIPHERTEXT orig_result31_151;
  CIPHERTEXT comb_row_result32_152;
  int32_t comb_row_lf_index_n32_153;
  int32_t comb_row_index_n32_154;
  CIPHERTEXT comb_rc_result32_155;
  int32_t comb_rc_lf_index_n32_156;
  int32_t comb_rc_index_n32_157;
  CIPHERTEXT ss_result32_158;
  int32_t comb_cc_lf_index_n32_159;
  int32_t comb_cc_index_n32_160;
  int32_t reshardm_n7_161;
  CIPHERTEXT output_reshard7_162[4];
  CIPHERTEXT VS_out_relu7_163[4];
  int32_t mesh_y_n7_164;
  int32_t mesh_z_n7_165;
  CIPHERTEXT VS_out_conv8_166[4];
  CIPHERTEXT VS_out_conv_halo8_167[4];
  int32_t mesh_y_n8_168;
  int32_t mesh_z_n8_169;
  CIPHERTEXT input_dup_n32_170;
  int32_t bs_input_n32_171;
  CIPHERTEXT input_block_n32_172[9];
  int32_t mesh_x_n8_173;
  CIPHERTEXT result_n33_174;
  int32_t num_grid_n33_175;
  CIPHERTEXT result_grid_n33_176;
  int32_t cap_block_n33_177;
  CIPHERTEXT VS_out_add8_178[4];
  int32_t mesh_y_n8_179;
  int32_t mesh_z_n8_180;
  CIPHERTEXT VS_out_relu8_181[4];
  int32_t mesh_y_n8_182;
  int32_t mesh_z_n8_183;
  CIPHERTEXT VS_out_conv9_184[4];
  CIPHERTEXT VS_out_conv_halo9_185[4];
  int32_t mesh_y_n9_186;
  int32_t mesh_z_n9_187;
  CIPHERTEXT input_dup_n33_188;
  int32_t bs_input_n33_189;
  CIPHERTEXT input_block_n33_190[9];
  int32_t mesh_x_n9_191;
  CIPHERTEXT result_n34_192;
  int32_t num_grid_n34_193;
  CIPHERTEXT result_grid_n34_194;
  int32_t cap_block_n34_195;
  CIPHERTEXT VS_out_relu9_196[4];
  int32_t mesh_y_n9_197;
  int32_t mesh_z_n9_198;
  CIPHERTEXT VS_out_conv10_199[4];
  CIPHERTEXT VS_out_conv_halo10_200[4];
  int32_t mesh_y_n10_201;
  int32_t mesh_z_n10_202;
  CIPHERTEXT input_dup_n34_203;
  int32_t bs_input_n34_204;
  CIPHERTEXT input_block_n34_205[9];
  int32_t mesh_x_n10_206;
  CIPHERTEXT result_n35_207;
  int32_t num_grid_n35_208;
  CIPHERTEXT result_grid_n35_209;
  int32_t cap_block_n35_210;
  CIPHERTEXT VS_out_add10_211[4];
  int32_t mesh_y_n10_212;
  int32_t mesh_z_n10_213;
  CIPHERTEXT VS_out_relu10_214[4];
  int32_t mesh_y_n10_215;
  int32_t mesh_z_n10_216;
  CIPHERTEXT VS_out_conv11_217[8];
  CIPHERTEXT VS_out_conv_halo11_218[8];
  int32_t mesh_y_n11_219;
  int32_t mesh_z_n11_220;
  CIPHERTEXT input_dup_n35_221;
  int32_t bs_input_n35_222;
  CIPHERTEXT input_block_n35_223[1];
  int32_t mesh_x_n11_224;
  CIPHERTEXT result_n36_225;
  int32_t num_grid_n36_226;
  CIPHERTEXT result_grid_n36_227;
  int32_t cap_block_n36_228;
  int32_t siv_n11_229;
  CIPHERTEXT orig_result36_230;
  CIPHERTEXT comb_row_result37_231;
  int32_t comb_row_lf_index_n37_232;
  int32_t comb_row_index_n37_233;
  CIPHERTEXT comb_rc_result37_234;
  int32_t comb_rc_lf_index_n37_235;
  int32_t comb_rc_index_n37_236;
  CIPHERTEXT ss_result37_237;
  int32_t comb_cc_lf_index_n37_238;
  int32_t comb_cc_index_n37_239;
  int32_t reshardm_n11_240;
  CIPHERTEXT output_reshard11_241[2];
  CIPHERTEXT VS_out_conv12_242[8];
  CIPHERTEXT VS_out_conv_halo12_243[8];
  int32_t mesh_y_n12_244;
  int32_t mesh_z_n12_245;
  CIPHERTEXT input_dup_n37_246;
  int32_t bs_input_n37_247;
  CIPHERTEXT input_block_n37_248[9];
  int32_t mesh_x_n12_249;
  CIPHERTEXT result_n38_250;
  int32_t num_grid_n38_251;
  CIPHERTEXT result_grid_n38_252;
  int32_t cap_block_n38_253;
  int32_t siv_n12_254;
  CIPHERTEXT orig_result38_255;
  CIPHERTEXT comb_row_result39_256;
  int32_t comb_row_lf_index_n39_257;
  int32_t comb_row_index_n39_258;
  CIPHERTEXT comb_rc_result39_259;
  int32_t comb_rc_lf_index_n39_260;
  int32_t comb_rc_index_n39_261;
  CIPHERTEXT ss_result39_262;
  int32_t comb_cc_lf_index_n39_263;
  int32_t comb_cc_index_n39_264;
  int32_t reshardm_n12_265;
  CIPHERTEXT output_reshard12_266[2];
  CIPHERTEXT VS_out_relu12_267[2];
  int32_t mesh_y_n12_268;
  int32_t mesh_z_n12_269;
  CIPHERTEXT VS_out_conv13_270[2];
  CIPHERTEXT VS_out_conv_halo13_271[2];
  int32_t mesh_y_n13_272;
  int32_t mesh_z_n13_273;
  CIPHERTEXT input_dup_n39_274;
  int32_t bs_input_n39_275;
  CIPHERTEXT input_block_n39_276[9];
  int32_t mesh_x_n13_277;
  CIPHERTEXT result_n40_278;
  int32_t num_grid_n40_279;
  CIPHERTEXT result_grid_n40_280;
  int32_t cap_block_n40_281;
  CIPHERTEXT VS_out_add13_282[2];
  int32_t mesh_y_n13_283;
  int32_t mesh_z_n13_284;
  CIPHERTEXT VS_out_relu13_285[2];
  int32_t mesh_y_n13_286;
  int32_t mesh_z_n13_287;
  CIPHERTEXT VS_out_conv14_288[2];
  CIPHERTEXT VS_out_conv_halo14_289[2];
  int32_t mesh_y_n14_290;
  int32_t mesh_z_n14_291;
  CIPHERTEXT input_dup_n40_292;
  int32_t bs_input_n40_293;
  CIPHERTEXT input_block_n40_294[9];
  int32_t mesh_x_n14_295;
  CIPHERTEXT result_n41_296;
  int32_t num_grid_n41_297;
  CIPHERTEXT result_grid_n41_298;
  int32_t cap_block_n41_299;
  CIPHERTEXT VS_out_relu14_300[2];
  int32_t mesh_y_n14_301;
  int32_t mesh_z_n14_302;
  CIPHERTEXT VS_out_conv15_303[2];
  CIPHERTEXT VS_out_conv_halo15_304[2];
  int32_t mesh_y_n15_305;
  int32_t mesh_z_n15_306;
  CIPHERTEXT input_dup_n41_307;
  int32_t bs_input_n41_308;
  CIPHERTEXT input_block_n41_309[9];
  int32_t mesh_x_n15_310;
  CIPHERTEXT result_n42_311;
  int32_t num_grid_n42_312;
  CIPHERTEXT result_grid_n42_313;
  int32_t cap_block_n42_314;
  CIPHERTEXT VS_out_add15_315[2];
  int32_t mesh_y_n15_316;
  int32_t mesh_z_n15_317;
  CIPHERTEXT VS_out_relu15_318[2];
  int32_t mesh_y_n15_319;
  int32_t mesh_z_n15_320;
  CIPHERTEXT VS_out_conv16_321[4];
  CIPHERTEXT VS_out_conv_halo16_322[4];
  int32_t mesh_y_n16_323;
  int32_t mesh_z_n16_324;
  CIPHERTEXT input_dup_n42_325;
  int32_t bs_input_n42_326;
  CIPHERTEXT input_block_n42_327[1];
  int32_t mesh_x_n16_328;
  CIPHERTEXT result_n43_329;
  int32_t num_grid_n43_330;
  CIPHERTEXT result_grid_n43_331;
  int32_t cap_block_n43_332;
  int32_t siv_n16_333;
  CIPHERTEXT orig_result43_334;
  CIPHERTEXT comb_dic_result44_335;
  int32_t comb_dic_index_n44_336;
  int32_t comb_dic_index_out_n44_337;
  int32_t comb_dic_index_in_n44_338;
  CIPHERTEXT ss_result44_339;
  int32_t comb_cc_lf_index_n44_340;
  int32_t comb_cc_index_n44_341;
  int32_t reshard1_n16_342;
  CIPHERTEXT output_reshard16_343;
  CIPHERTEXT VS_out_conv17_344[4];
  CIPHERTEXT VS_out_conv_halo17_345[4];
  int32_t mesh_y_n17_346;
  int32_t mesh_z_n17_347;
  CIPHERTEXT input_dup_n44_348;
  int32_t bs_input_n44_349;
  CIPHERTEXT input_block_n44_350[9];
  int32_t mesh_x_n17_351;
  CIPHERTEXT result_n45_352;
  int32_t num_grid_n45_353;
  CIPHERTEXT result_grid_n45_354;
  int32_t cap_block_n45_355;
  int32_t siv_n17_356;
  CIPHERTEXT orig_result45_357;
  CIPHERTEXT comb_dic_result46_358;
  int32_t comb_dic_index_n46_359;
  int32_t comb_dic_index_out_n46_360;
  int32_t comb_dic_index_in_n46_361;
  CIPHERTEXT ss_result46_362;
  int32_t comb_cc_lf_index_n46_363;
  int32_t comb_cc_index_n46_364;
  int32_t reshard1_n17_365;
  CIPHERTEXT output_reshard17_366;
  CIPHERTEXT input_dup_n46_367;
  int32_t bs_input_n46_368;
  CIPHERTEXT input_block_n46_369[9];
  CIPHERTEXT result_n47_370;
  int32_t num_grid_n47_371;
  CIPHERTEXT result_grid_n47_372;
  int32_t cap_block_n47_373;
  CIPHERTEXT input_dup_n47_374;
  int32_t bs_input_n47_375;
  CIPHERTEXT input_block_n47_376[9];
  CIPHERTEXT result_n48_377;
  int32_t num_grid_n48_378;
  CIPHERTEXT result_grid_n48_379;
  int32_t cap_block_n48_380;
  CIPHERTEXT input_dup_n48_381;
  int32_t bs_input_n48_382;
  CIPHERTEXT input_block_n48_383[9];
  CIPHERTEXT result_n49_384;
  int32_t num_grid_n49_385;
  CIPHERTEXT result_grid_n49_386;
  int32_t cap_block_n49_387;
  int32_t gap_sum_index_n49_388;
  CIPHERTEXT gap_result49_389;
  CIPHERTEXT orig_result49_390;
  CIPHERTEXT ss_result50_391;
  int32_t comb_cc_lf_index_n50_392;
  int32_t comb_cc_index_n50_393;
  CIPHERTEXT input_dup_n50_394;
  int32_t bs_input_n50_395;
  CIPHERTEXT input_block_n50_396[8];
  CIPHERTEXT gemm_result_n51_397;
  int32_t gs_n51_398;
  CIPHERTEXT block_result_399;
  int32_t bs_n51_400;
  CIPHERTEXT reduce_intra_401;
  int32_t ri_n51_402;
  CIPHERTEXT output_403;
  CIPHERTEXT _ckks_gen_tmp_102_404;
  CIPHERTEXT _ckks_gen_tmp_221_405;
  CIPHERTEXT _ckks_gen_tmp_274_406;
  CIPHERTEXT _ckks_gen_tmp_504_407;
  CIPHERTEXT _ckks_gen_tmp_584_408;
  CIPHERTEXT _ckks_gen_tmp_637_409;
  CIPHERTEXT _ckks_gen_tmp_850_410;
  CIPHERTEXT _ckks_gen_tmp_1115_411;
  CIPHERTEXT _ckks_gen_tmp_1445_412;
  CIPHERTEXT _ckks_gen_tmp_1710_413;
  CIPHERTEXT _ckks_gen_tmp_2040_414;
  CIPHERTEXT _ckks_gen_tmp_2187_415;
  CIPHERTEXT _ckks_gen_tmp_2240_416;
  CIPHERTEXT _ckks_gen_tmp_2293_417;
  CIPHERTEXT _ckks_gen_tmp_2468_418;
  CIPHERTEXT _ckks_gen_tmp_2615_419;
  CIPHERTEXT _ckks_gen_tmp_2668_420;
  CIPHERTEXT _ckks_gen_tmp_2721_421;
  CIPHERTEXT _ckks_gen_tmp_2963_422;
  CIPHERTEXT _ckks_gen_tmp_3293_423;
  CIPHERTEXT _ckks_gen_tmp_3558_424;
  CIPHERTEXT _ckks_gen_tmp_3888_425;
  CIPHERTEXT _ckks_gen_tmp_4035_426;
  CIPHERTEXT _ckks_gen_tmp_4088_427;
  CIPHERTEXT _ckks_gen_tmp_4141_428;
  CIPHERTEXT _ckks_gen_tmp_4316_429;
  CIPHERTEXT _ckks_gen_tmp_4463_430;
  CIPHERTEXT _ckks_gen_tmp_4516_431;
  CIPHERTEXT _ckks_gen_tmp_4569_432;
  CIPHERTEXT _ckks_gen_tmp_4811_433;
  CIPHERTEXT _ckks_gen_tmp_5141_434;
  CIPHERTEXT _ckks_gen_tmp_5406_435;
  CIPHERTEXT _ckks_gen_tmp_5736_436;
  CIPHERTEXT _ckks_gen_tmp_5897_437;
  CIPHERTEXT _ckks_gen_tmp_5954_438;
  CIPHERTEXT _ckks_gen_tmp_6118_439;
  CIPHERTEXT _ckks_gen_tmp_6279_440;
  CIPHERTEXT _ckks_gen_tmp_6336_441;
  CIPHERTEXT _ckks_gen_tmp_6481_442;
  CIPHERTEXT _ckks_gen_tmp_6649_443;
  CIPHERTEXT _ckks_gen_tmp_6804_444;
  CIPHERTEXT _ckks_gen_tmp_6996_445;
  CIPHERTEXT _ckks_gen_tmp_7148_446;
  int32_t rescale_iv_447;
  int32_t rescale_iv_448;
  int32_t rescale_iv_449;
  int32_t rescale_iv_450;
  int32_t rescale_iv_451;
  int32_t rescale_iv_452;
  int32_t rescale_iv_453;
  int32_t rescale_iv_454;
  int32_t rescale_iv_455;
  int32_t rescale_iv_456;
  int32_t rescale_iv_457;
  int32_t rescale_iv_458;
  int32_t rescale_iv_459;
  int32_t rescale_iv_460;
  int32_t rescale_iv_461;
  int32_t rescale_iv_462;
  int32_t rescale_iv_463;
  int32_t rescale_iv_464;
  int32_t rescale_iv_465;
  int32_t rescale_iv_466;
  int32_t rescale_iv_467;
  int32_t rescale_iv_468;
  int32_t rescale_iv_469;
  int32_t rescale_iv_470;
  int32_t rescale_iv_471;
  MODULUS* _pgen_modulus_472;
  uint32_t _pgen_num_q_473;
  uint32_t _pgen_rns_idx_474;
  PLAINTEXT _pgen_tmp_0_475;
  CIPHERTEXT _pgen_tmp_1_476;
  PLAINTEXT _pgen_tmp_2_477;
  CIPHERTEXT _pgen_tmp_3_478;
  CIPHERTEXT _pgen_tmp_4_479;
  CIPHERTEXT _pgen_tmp_5_480;
  CIPHERTEXT _pgen_tmp_6_481;
  CIPHERTEXT _pgen_tmp_7_482;
  PLAINTEXT _pgen_tmp_8_483;
  CIPHERTEXT _pgen_tmp_9_484;
  CIPHERTEXT _pgen_tmp_10_485;
  PLAINTEXT _pgen_tmp_11_486;
  CIPHERTEXT _pgen_tmp_12_487;
  CIPHERTEXT _pgen_tmp_13_488;
  CIPHERTEXT _pgen_tmp_14_489;
  CIPHERTEXT _pgen_tmp_15_490;
  CIPHERTEXT _pgen_tmp_16_491;
  CIPHERTEXT _pgen_tmp_17_492;
  CIPHERTEXT _pgen_tmp_18_493;
  CIPHERTEXT _pgen_tmp_19_494;
  CIPHERTEXT _pgen_tmp_20_495;
  CIPHERTEXT _pgen_tmp_21_496;
  CIPHERTEXT _pgen_tmp_22_497;
  PLAINTEXT _pgen_tmp_23_498;
  CIPHERTEXT _pgen_tmp_24_499;
  CIPHERTEXT _pgen_tmp_25_500;
  CIPHERTEXT _pgen_tmp_26_501;
  PLAINTEXT _pgen_tmp_27_502;
  CIPHERTEXT _pgen_tmp_28_503;
  PLAINTEXT _pgen_tmp_29_504;
  CIPHERTEXT _pgen_tmp_30_505;
  PLAINTEXT _pgen_tmp_31_506;
  CIPHERTEXT _pgen_tmp_32_507;
  CIPHERTEXT _pgen_tmp_33_508;
  PLAINTEXT _pgen_tmp_34_509;
  CIPHERTEXT _pgen_tmp_35_510;
  CIPHERTEXT _pgen_tmp_36_511;
  PLAINTEXT _pgen_tmp_37_512;
  CIPHERTEXT _pgen_tmp_38_513;
  CIPHERTEXT _pgen_tmp_39_514;
  CIPHERTEXT _pgen_tmp_40_515;
  CIPHERTEXT _pgen_tmp_41_516;
  CIPHERTEXT _pgen_tmp_42_517;
  CIPHERTEXT _pgen_tmp_43_518;
  CIPHERTEXT _pgen_tmp_44_519;
  CIPHERTEXT _pgen_tmp_45_520;
  CIPHERTEXT _pgen_tmp_46_521;
  PLAINTEXT _pgen_tmp_47_522;
  CIPHERTEXT _pgen_tmp_48_523;
  CIPHERTEXT _pgen_tmp_49_524;
  CIPHERTEXT _pgen_tmp_50_525;
  PLAINTEXT _pgen_tmp_51_526;
  CIPHERTEXT _pgen_tmp_52_527;
  CIPHERTEXT _pgen_tmp_53_528;
  PLAINTEXT _pgen_tmp_54_529;
  CIPHERTEXT _pgen_tmp_55_530;
  PLAINTEXT _pgen_tmp_56_531;
  CIPHERTEXT _pgen_tmp_57_532;
  CIPHERTEXT _pgen_tmp_58_533;
  CIPHERTEXT _pgen_tmp_59_534;
  CIPHERTEXT _pgen_tmp_60_535;
  CIPHERTEXT _pgen_tmp_61_536;
  PLAINTEXT _pgen_tmp_62_537;
  CIPHERTEXT _pgen_tmp_63_538;
  CIPHERTEXT _pgen_tmp_64_539;
  CIPHERTEXT _pgen_tmp_65_540;
  PLAINTEXT _pgen_tmp_66_541;
  CIPHERTEXT _pgen_tmp_67_542;
  CIPHERTEXT _pgen_tmp_68_543;
  CIPHERTEXT _pgen_tmp_69_544;
  PLAINTEXT _pgen_tmp_70_545;
  CIPHERTEXT _pgen_tmp_71_546;
  CIPHERTEXT _pgen_tmp_72_547;
  PLAINTEXT _pgen_tmp_73_548;
  CIPHERTEXT _pgen_tmp_74_549;
  PLAINTEXT _pgen_tmp_75_550;
  CIPHERTEXT _pgen_tmp_76_551;
  CIPHERTEXT _pgen_tmp_77_552;
  CIPHERTEXT _pgen_tmp_78_553;
  CIPHERTEXT _pgen_tmp_79_554;
  CIPHERTEXT _pgen_tmp_80_555;
  CIPHERTEXT _pgen_tmp_81_556;
  CIPHERTEXT _pgen_tmp_82_557;
  CIPHERTEXT _pgen_tmp_83_558;
  CIPHERTEXT _pgen_tmp_84_559;
  CIPHERTEXT _pgen_tmp_85_560;
  PLAINTEXT _pgen_tmp_86_561;
  CIPHERTEXT _pgen_tmp_87_562;
  CIPHERTEXT _pgen_tmp_88_563;
  CIPHERTEXT _pgen_tmp_89_564;
  PLAINTEXT _pgen_tmp_90_565;
  CIPHERTEXT _pgen_tmp_91_566;
  CIPHERTEXT _pgen_tmp_92_567;
  CIPHERTEXT _pgen_tmp_93_568;
  PLAINTEXT _pgen_tmp_94_569;
  CIPHERTEXT _pgen_tmp_95_570;
  CIPHERTEXT _pgen_tmp_96_571;
  PLAINTEXT _pgen_tmp_97_572;
  CIPHERTEXT _pgen_tmp_98_573;
  PLAINTEXT _pgen_tmp_99_574;
  CIPHERTEXT _pgen_tmp_100_575;
  CIPHERTEXT _pgen_tmp_101_576;
  CIPHERTEXT _pgen_tmp_102_577;
  CIPHERTEXT _pgen_tmp_103_578;
  CIPHERTEXT _pgen_tmp_104_579;
  PLAINTEXT _pgen_tmp_105_580;
  CIPHERTEXT _pgen_tmp_106_581;
  CIPHERTEXT _pgen_tmp_107_582;
  CIPHERTEXT _pgen_tmp_108_583;
  PLAINTEXT _pgen_tmp_109_584;
  CIPHERTEXT _pgen_tmp_110_585;
  CIPHERTEXT _pgen_tmp_111_586;
  CIPHERTEXT _pgen_tmp_112_587;
  PLAINTEXT _pgen_tmp_113_588;
  CIPHERTEXT _pgen_tmp_114_589;
  CIPHERTEXT _pgen_tmp_115_590;
  PLAINTEXT _pgen_tmp_116_591;
  CIPHERTEXT _pgen_tmp_117_592;
  PLAINTEXT _pgen_tmp_118_593;
  CIPHERTEXT _pgen_tmp_119_594;
  CIPHERTEXT _pgen_tmp_120_595;
  CIPHERTEXT _pgen_tmp_121_596;
  CIPHERTEXT _pgen_tmp_122_597;
  CIPHERTEXT _pgen_tmp_123_598;
  CIPHERTEXT _pgen_tmp_124_599;
  CIPHERTEXT _pgen_tmp_125_600;
  CIPHERTEXT _pgen_tmp_126_601;
  CIPHERTEXT _pgen_tmp_127_602;
  CIPHERTEXT _pgen_tmp_128_603;
  PLAINTEXT _pgen_tmp_129_604;
  CIPHERTEXT _pgen_tmp_130_605;
  CIPHERTEXT _pgen_tmp_131_606;
  CIPHERTEXT _pgen_tmp_132_607;
  PLAINTEXT _pgen_tmp_133_608;
  CIPHERTEXT _pgen_tmp_134_609;
  CIPHERTEXT _pgen_tmp_135_610;
  CIPHERTEXT _pgen_tmp_136_611;
  PLAINTEXT _pgen_tmp_137_612;
  CIPHERTEXT _pgen_tmp_138_613;
  CIPHERTEXT _pgen_tmp_139_614;
  PLAINTEXT _pgen_tmp_140_615;
  CIPHERTEXT _pgen_tmp_141_616;
  PLAINTEXT _pgen_tmp_142_617;
  CIPHERTEXT _pgen_tmp_143_618;
  CIPHERTEXT _pgen_tmp_144_619;
  CIPHERTEXT _pgen_tmp_145_620;
  CIPHERTEXT _pgen_tmp_146_621;
  PLAINTEXT _pgen_tmp_147_622;
  CIPHERTEXT _pgen_tmp_148_623;
  CIPHERTEXT _pgen_tmp_149_624;
  PLAINTEXT _pgen_tmp_150_625;
  CIPHERTEXT _pgen_tmp_151_626;
  CIPHERTEXT _pgen_tmp_152_627;
  PLAINTEXT _pgen_tmp_153_628;
  CIPHERTEXT _pgen_tmp_154_629;
  CIPHERTEXT _pgen_tmp_155_630;
  CIPHERTEXT _pgen_tmp_156_631;
  CIPHERTEXT _pgen_tmp_157_632;
  CIPHERTEXT _pgen_tmp_158_633;
  CIPHERTEXT _pgen_tmp_159_634;
  CIPHERTEXT _pgen_tmp_160_635;
  CIPHERTEXT _pgen_tmp_161_636;
  CIPHERTEXT _pgen_tmp_162_637;
  CIPHERTEXT _pgen_tmp_163_638;
  PLAINTEXT _pgen_tmp_164_639;
  CIPHERTEXT _pgen_tmp_165_640;
  CIPHERTEXT _pgen_tmp_166_641;
  CIPHERTEXT _pgen_tmp_167_642;
  PLAINTEXT _pgen_tmp_168_643;
  CIPHERTEXT _pgen_tmp_169_644;
  CIPHERTEXT _pgen_tmp_170_645;
  PLAINTEXT _pgen_tmp_171_646;
  CIPHERTEXT _pgen_tmp_172_647;
  PLAINTEXT _pgen_tmp_173_648;
  CIPHERTEXT _pgen_tmp_174_649;
  CIPHERTEXT _pgen_tmp_175_650;
  CIPHERTEXT _pgen_tmp_176_651;
  CIPHERTEXT _pgen_tmp_177_652;
  PLAINTEXT _pgen_tmp_178_653;
  CIPHERTEXT _pgen_tmp_179_654;
  CIPHERTEXT _pgen_tmp_180_655;
  PLAINTEXT _pgen_tmp_181_656;
  CIPHERTEXT _pgen_tmp_182_657;
  CIPHERTEXT _pgen_tmp_183_658;
  PLAINTEXT _pgen_tmp_184_659;
  CIPHERTEXT _pgen_tmp_185_660;
  CIPHERTEXT _pgen_tmp_186_661;
  CIPHERTEXT _pgen_tmp_187_662;
  CIPHERTEXT _pgen_tmp_188_663;
  CIPHERTEXT _pgen_tmp_189_664;
  CIPHERTEXT _pgen_tmp_190_665;
  CIPHERTEXT _pgen_tmp_191_666;
  CIPHERTEXT _pgen_tmp_192_667;
  CIPHERTEXT _pgen_tmp_193_668;
  CIPHERTEXT _pgen_tmp_194_669;
  CIPHERTEXT _pgen_tmp_195_670;
  PLAINTEXT _pgen_tmp_196_671;
  CIPHERTEXT _pgen_tmp_197_672;
  CIPHERTEXT _pgen_tmp_198_673;
  CIPHERTEXT _pgen_tmp_199_674;
  PLAINTEXT _pgen_tmp_200_675;
  CIPHERTEXT _pgen_tmp_201_676;
  CIPHERTEXT _pgen_tmp_202_677;
  CIPHERTEXT _pgen_tmp_203_678;
  PLAINTEXT _pgen_tmp_204_679;
  CIPHERTEXT _pgen_tmp_205_680;
  CIPHERTEXT _pgen_tmp_206_681;
  PLAINTEXT _pgen_tmp_207_682;
  CIPHERTEXT _pgen_tmp_208_683;
  PLAINTEXT _pgen_tmp_209_684;
  CIPHERTEXT _pgen_tmp_210_685;
  CIPHERTEXT _pgen_tmp_211_686;
  CIPHERTEXT _pgen_tmp_212_687;
  CIPHERTEXT _pgen_tmp_213_688;
  CIPHERTEXT _pgen_tmp_214_689;
  CIPHERTEXT _pgen_tmp_215_690;
  CIPHERTEXT _pgen_tmp_216_691;
  CIPHERTEXT _pgen_tmp_217_692;
  CIPHERTEXT _pgen_tmp_218_693;
  CIPHERTEXT _pgen_tmp_219_694;
  PLAINTEXT _pgen_tmp_220_695;
  CIPHERTEXT _pgen_tmp_221_696;
  CIPHERTEXT _pgen_tmp_222_697;
  CIPHERTEXT _pgen_tmp_223_698;
  PLAINTEXT _pgen_tmp_224_699;
  CIPHERTEXT _pgen_tmp_225_700;
  CIPHERTEXT _pgen_tmp_226_701;
  CIPHERTEXT _pgen_tmp_227_702;
  PLAINTEXT _pgen_tmp_228_703;
  CIPHERTEXT _pgen_tmp_229_704;
  CIPHERTEXT _pgen_tmp_230_705;
  PLAINTEXT _pgen_tmp_231_706;
  CIPHERTEXT _pgen_tmp_232_707;
  PLAINTEXT _pgen_tmp_233_708;
  CIPHERTEXT _pgen_tmp_234_709;
  CIPHERTEXT _pgen_tmp_235_710;
  CIPHERTEXT _pgen_tmp_236_711;
  CIPHERTEXT _pgen_tmp_237_712;
  CIPHERTEXT _pgen_tmp_238_713;
  PLAINTEXT _pgen_tmp_239_714;
  CIPHERTEXT _pgen_tmp_240_715;
  CIPHERTEXT _pgen_tmp_241_716;
  CIPHERTEXT _pgen_tmp_242_717;
  PLAINTEXT _pgen_tmp_243_718;
  CIPHERTEXT _pgen_tmp_244_719;
  CIPHERTEXT _pgen_tmp_245_720;
  CIPHERTEXT _pgen_tmp_246_721;
  PLAINTEXT _pgen_tmp_247_722;
  CIPHERTEXT _pgen_tmp_248_723;
  CIPHERTEXT _pgen_tmp_249_724;
  PLAINTEXT _pgen_tmp_250_725;
  CIPHERTEXT _pgen_tmp_251_726;
  PLAINTEXT _pgen_tmp_252_727;
  CIPHERTEXT _pgen_tmp_253_728;
  CIPHERTEXT _pgen_tmp_254_729;
  CIPHERTEXT _pgen_tmp_255_730;
  CIPHERTEXT _pgen_tmp_256_731;
  CIPHERTEXT _pgen_tmp_257_732;
  CIPHERTEXT _pgen_tmp_258_733;
  CIPHERTEXT _pgen_tmp_259_734;
  CIPHERTEXT _pgen_tmp_260_735;
  CIPHERTEXT _pgen_tmp_261_736;
  CIPHERTEXT _pgen_tmp_262_737;
  PLAINTEXT _pgen_tmp_263_738;
  CIPHERTEXT _pgen_tmp_264_739;
  CIPHERTEXT _pgen_tmp_265_740;
  CIPHERTEXT _pgen_tmp_266_741;
  PLAINTEXT _pgen_tmp_267_742;
  CIPHERTEXT _pgen_tmp_268_743;
  CIPHERTEXT _pgen_tmp_269_744;
  CIPHERTEXT _pgen_tmp_270_745;
  PLAINTEXT _pgen_tmp_271_746;
  CIPHERTEXT _pgen_tmp_272_747;
  CIPHERTEXT _pgen_tmp_273_748;
  PLAINTEXT _pgen_tmp_274_749;
  CIPHERTEXT _pgen_tmp_275_750;
  PLAINTEXT _pgen_tmp_276_751;
  CIPHERTEXT _pgen_tmp_277_752;
  CIPHERTEXT _pgen_tmp_278_753;
  CIPHERTEXT _pgen_tmp_279_754;
  CIPHERTEXT _pgen_tmp_280_755;
  PLAINTEXT _pgen_tmp_281_756;
  CIPHERTEXT _pgen_tmp_282_757;
  CIPHERTEXT _pgen_tmp_283_758;
  PLAINTEXT _pgen_tmp_284_759;
  CIPHERTEXT _pgen_tmp_285_760;
  CIPHERTEXT _pgen_tmp_286_761;
  PLAINTEXT _pgen_tmp_287_762;
  CIPHERTEXT _pgen_tmp_288_763;
  CIPHERTEXT _pgen_tmp_289_764;
  CIPHERTEXT _pgen_tmp_290_765;
  CIPHERTEXT _pgen_tmp_291_766;
  CIPHERTEXT _pgen_tmp_292_767;
  CIPHERTEXT _pgen_tmp_293_768;
  CIPHERTEXT _pgen_tmp_294_769;
  CIPHERTEXT _pgen_tmp_295_770;
  CIPHERTEXT _pgen_tmp_296_771;
  CIPHERTEXT _pgen_tmp_297_772;
  PLAINTEXT _pgen_tmp_298_773;
  CIPHERTEXT _pgen_tmp_299_774;
  CIPHERTEXT _pgen_tmp_300_775;
  CIPHERTEXT _pgen_tmp_301_776;
  PLAINTEXT _pgen_tmp_302_777;
  CIPHERTEXT _pgen_tmp_303_778;
  CIPHERTEXT _pgen_tmp_304_779;
  PLAINTEXT _pgen_tmp_305_780;
  CIPHERTEXT _pgen_tmp_306_781;
  PLAINTEXT _pgen_tmp_307_782;
  CIPHERTEXT _pgen_tmp_308_783;
  CIPHERTEXT _pgen_tmp_309_784;
  CIPHERTEXT _pgen_tmp_310_785;
  CIPHERTEXT _pgen_tmp_311_786;
  PLAINTEXT _pgen_tmp_312_787;
  CIPHERTEXT _pgen_tmp_313_788;
  CIPHERTEXT _pgen_tmp_314_789;
  PLAINTEXT _pgen_tmp_315_790;
  CIPHERTEXT _pgen_tmp_316_791;
  CIPHERTEXT _pgen_tmp_317_792;
  PLAINTEXT _pgen_tmp_318_793;
  CIPHERTEXT _pgen_tmp_319_794;
  CIPHERTEXT _pgen_tmp_320_795;
  CIPHERTEXT _pgen_tmp_321_796;
  CIPHERTEXT _pgen_tmp_322_797;
  CIPHERTEXT _pgen_tmp_323_798;
  CIPHERTEXT _pgen_tmp_324_799;
  CIPHERTEXT _pgen_tmp_325_800;
  CIPHERTEXT _pgen_tmp_326_801;
  CIPHERTEXT _pgen_tmp_327_802;
  CIPHERTEXT _pgen_tmp_328_803;
  CIPHERTEXT _pgen_tmp_329_804;
  PLAINTEXT _pgen_tmp_330_805;
  CIPHERTEXT _pgen_tmp_331_806;
  CIPHERTEXT _pgen_tmp_332_807;
  CIPHERTEXT _pgen_tmp_333_808;
  PLAINTEXT _pgen_tmp_334_809;
  CIPHERTEXT _pgen_tmp_335_810;
  CIPHERTEXT _pgen_tmp_336_811;
  CIPHERTEXT _pgen_tmp_337_812;
  PLAINTEXT _pgen_tmp_338_813;
  CIPHERTEXT _pgen_tmp_339_814;
  CIPHERTEXT _pgen_tmp_340_815;
  PLAINTEXT _pgen_tmp_341_816;
  CIPHERTEXT _pgen_tmp_342_817;
  PLAINTEXT _pgen_tmp_343_818;
  CIPHERTEXT _pgen_tmp_344_819;
  CIPHERTEXT _pgen_tmp_345_820;
  CIPHERTEXT _pgen_tmp_346_821;
  CIPHERTEXT _pgen_tmp_347_822;
  CIPHERTEXT _pgen_tmp_348_823;
  CIPHERTEXT _pgen_tmp_349_824;
  CIPHERTEXT _pgen_tmp_350_825;
  CIPHERTEXT _pgen_tmp_351_826;
  CIPHERTEXT _pgen_tmp_352_827;
  CIPHERTEXT _pgen_tmp_353_828;
  PLAINTEXT _pgen_tmp_354_829;
  CIPHERTEXT _pgen_tmp_355_830;
  CIPHERTEXT _pgen_tmp_356_831;
  CIPHERTEXT _pgen_tmp_357_832;
  PLAINTEXT _pgen_tmp_358_833;
  CIPHERTEXT _pgen_tmp_359_834;
  CIPHERTEXT _pgen_tmp_360_835;
  CIPHERTEXT _pgen_tmp_361_836;
  PLAINTEXT _pgen_tmp_362_837;
  CIPHERTEXT _pgen_tmp_363_838;
  CIPHERTEXT _pgen_tmp_364_839;
  PLAINTEXT _pgen_tmp_365_840;
  CIPHERTEXT _pgen_tmp_366_841;
  PLAINTEXT _pgen_tmp_367_842;
  CIPHERTEXT _pgen_tmp_368_843;
  CIPHERTEXT _pgen_tmp_369_844;
  CIPHERTEXT _pgen_tmp_370_845;
  CIPHERTEXT _pgen_tmp_371_846;
  CIPHERTEXT _pgen_tmp_372_847;
  PLAINTEXT _pgen_tmp_373_848;
  CIPHERTEXT _pgen_tmp_374_849;
  CIPHERTEXT _pgen_tmp_375_850;
  CIPHERTEXT _pgen_tmp_376_851;
  PLAINTEXT _pgen_tmp_377_852;
  CIPHERTEXT _pgen_tmp_378_853;
  CIPHERTEXT _pgen_tmp_379_854;
  CIPHERTEXT _pgen_tmp_380_855;
  PLAINTEXT _pgen_tmp_381_856;
  CIPHERTEXT _pgen_tmp_382_857;
  CIPHERTEXT _pgen_tmp_383_858;
  PLAINTEXT _pgen_tmp_384_859;
  CIPHERTEXT _pgen_tmp_385_860;
  PLAINTEXT _pgen_tmp_386_861;
  CIPHERTEXT _pgen_tmp_387_862;
  CIPHERTEXT _pgen_tmp_388_863;
  CIPHERTEXT _pgen_tmp_389_864;
  CIPHERTEXT _pgen_tmp_390_865;
  CIPHERTEXT _pgen_tmp_391_866;
  CIPHERTEXT _pgen_tmp_392_867;
  CIPHERTEXT _pgen_tmp_393_868;
  CIPHERTEXT _pgen_tmp_394_869;
  CIPHERTEXT _pgen_tmp_395_870;
  CIPHERTEXT _pgen_tmp_396_871;
  PLAINTEXT _pgen_tmp_397_872;
  CIPHERTEXT _pgen_tmp_398_873;
  CIPHERTEXT _pgen_tmp_399_874;
  CIPHERTEXT _pgen_tmp_400_875;
  PLAINTEXT _pgen_tmp_401_876;
  CIPHERTEXT _pgen_tmp_402_877;
  CIPHERTEXT _pgen_tmp_403_878;
  CIPHERTEXT _pgen_tmp_404_879;
  PLAINTEXT _pgen_tmp_405_880;
  CIPHERTEXT _pgen_tmp_406_881;
  CIPHERTEXT _pgen_tmp_407_882;
  PLAINTEXT _pgen_tmp_408_883;
  CIPHERTEXT _pgen_tmp_409_884;
  PLAINTEXT _pgen_tmp_410_885;
  CIPHERTEXT _pgen_tmp_411_886;
  CIPHERTEXT _pgen_tmp_412_887;
  CIPHERTEXT _pgen_tmp_413_888;
  CIPHERTEXT _pgen_tmp_414_889;
  PLAINTEXT _pgen_tmp_415_890;
  CIPHERTEXT _pgen_tmp_416_891;
  CIPHERTEXT _pgen_tmp_417_892;
  PLAINTEXT _pgen_tmp_418_893;
  CIPHERTEXT _pgen_tmp_419_894;
  CIPHERTEXT _pgen_tmp_420_895;
  CIPHERTEXT _pgen_tmp_421_896;
  CIPHERTEXT _pgen_tmp_422_897;
  CIPHERTEXT _pgen_tmp_423_898;
  CIPHERTEXT _pgen_tmp_424_899;
  CIPHERTEXT _pgen_tmp_425_900;
  CIPHERTEXT _pgen_tmp_426_901;
  CIPHERTEXT _pgen_tmp_427_902;
  PLAINTEXT _pgen_tmp_428_903;
  CIPHERTEXT _pgen_tmp_429_904;
  CIPHERTEXT _pgen_tmp_430_905;
  CIPHERTEXT _pgen_tmp_431_906;
  PLAINTEXT _pgen_tmp_432_907;
  CIPHERTEXT _pgen_tmp_433_908;
  CIPHERTEXT _pgen_tmp_434_909;
  PLAINTEXT _pgen_tmp_435_910;
  CIPHERTEXT _pgen_tmp_436_911;
  PLAINTEXT _pgen_tmp_437_912;
  CIPHERTEXT _pgen_tmp_438_913;
  CIPHERTEXT _pgen_tmp_439_914;
  CIPHERTEXT _pgen_tmp_440_915;
  CIPHERTEXT _pgen_tmp_441_916;
  PLAINTEXT _pgen_tmp_442_917;
  CIPHERTEXT _pgen_tmp_443_918;
  CIPHERTEXT _pgen_tmp_444_919;
  PLAINTEXT _pgen_tmp_445_920;
  CIPHERTEXT _pgen_tmp_446_921;
  CIPHERTEXT _pgen_tmp_447_922;
  CIPHERTEXT _pgen_tmp_448_923;
  CIPHERTEXT _pgen_tmp_449_924;
  CIPHERTEXT _pgen_tmp_450_925;
  CIPHERTEXT _pgen_tmp_451_926;
  CIPHERTEXT _pgen_tmp_452_927;
  CIPHERTEXT _pgen_tmp_453_928;
  CIPHERTEXT _pgen_tmp_454_929;
  CIPHERTEXT _pgen_tmp_455_930;
  PLAINTEXT _pgen_tmp_456_931;
  PLAINTEXT _pgen_tmp_457_932;
  CIPHERTEXT _pgen_tmp_458_933;
  CIPHERTEXT _pgen_tmp_459_934;
  CIPHERTEXT _pgen_tmp_460_935;
  PLAINTEXT _pgen_tmp_461_936;
  CIPHERTEXT _pgen_tmp_462_937;
  CIPHERTEXT _pgen_tmp_463_938;
  PLAINTEXT _pgen_tmp_464_939;
  CIPHERTEXT _pgen_tmp_465_940;
  PLAINTEXT _pgen_tmp_466_941;
  CIPHERTEXT _pgen_tmp_467_942;
  PLAINTEXT _pgen_tmp_468_943;
  PLAINTEXT _pgen_tmp_469_944;
  CIPHERTEXT _pgen_tmp_470_945;
  CIPHERTEXT _pgen_tmp_471_946;
  CIPHERTEXT _pgen_tmp_472_947;
  PLAINTEXT _pgen_tmp_473_948;
  CIPHERTEXT _pgen_tmp_474_949;
  CIPHERTEXT _pgen_tmp_475_950;
  PLAINTEXT _pgen_tmp_476_951;
  CIPHERTEXT _pgen_tmp_477_952;
  PLAINTEXT _pgen_tmp_478_953;
  CIPHERTEXT _pgen_tmp_479_954;
  PLAINTEXT _pgen_tmp_480_955;
  PLAINTEXT _pgen_tmp_481_956;
  CIPHERTEXT _pgen_tmp_482_957;
  CIPHERTEXT _pgen_tmp_483_958;
  CIPHERTEXT _pgen_tmp_484_959;
  PLAINTEXT _pgen_tmp_485_960;
  CIPHERTEXT _pgen_tmp_486_961;
  CIPHERTEXT _pgen_tmp_487_962;
  PLAINTEXT _pgen_tmp_488_963;
  CIPHERTEXT _pgen_tmp_489_964;
  PLAINTEXT _pgen_tmp_490_965;
  CIPHERTEXT _pgen_tmp_491_966;
  PLAINTEXT _pgen_tmp_492_967;
  CIPHERTEXT _pgen_tmp_493_968;
  PLAINTEXT _pgen_tmp_494_969;
  CIPHERTEXT _pgen_tmp_495_970;
  PLAINTEXT _pgen_tmp_496_971;
  PLAINTEXT _pgen_tmp_497_972;
  CIPHERTEXT _pgen_tmp_498_973;
  CIPHERTEXT _pgen_tmp_499_974;
  CIPHERTEXT _pgen_tmp_500_975;
  CIPHERTEXT _pgen_tmp_501_976;
  CIPHERTEXT _pgen_tmp_502_977;
  CIPHERTEXT _pgen_tmp_503_978;
  CIPHERTEXT _pgen_tmp_504_979;
  CIPHERTEXT _pgen_tmp_505_980;
  CIPHERTEXT _pgen_tmp_506_981;
  CIPHERTEXT _pgen_tmp_507_982;
  CIPHERTEXT _pgen_tmp_508_983;
  CIPHERTEXT _pgen_tmp_509_984;
  CIPHERTEXT _pgen_tmp_510_985;
  CIPHERTEXT _pgen_tmp_511_986;
  CIPHERTEXT _pgen_tmp_512_987;
  CIPHERTEXT _pgen_tmp_513_988;
  PLAINTEXT _pgen_tmp_514_989;
  CIPHERTEXT _pgen_tmp_515_990;
  PLAINTEXT _pgen_tmp_516_991;
  CIPHERTEXT _pgen_tmp_517_992;
  PLAINTEXT _pgen_tmp_518_993;
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
  uint32_t  degree = Degree();
  for (int input_idx = 0; input_idx < 6; ++input_idx) {
    input_0[input_idx] = Get_input_data("input", input_idx);
  }
  memset(&VS_out_conv1_1, 0, sizeof(VS_out_conv1_1));
  memset(&VS_out_conv_halo1_2, 0, sizeof(VS_out_conv_halo1_2));
  memset(&input_dup_n20_5, 0, sizeof(input_dup_n20_5));
  memset(&input_block_n20_7, 0, sizeof(input_block_n20_7));
  memset(&result_n21_9, 0, sizeof(result_n21_9));
  memset(&result_grid_n21_11, 0, sizeof(result_grid_n21_11));
  memset(&x_row21_14, 0, sizeof(x_row21_14));
  memset(&comb_row_result22_15, 0, sizeof(comb_row_result22_15));
  memset(&comb_rc_result22_18, 0, sizeof(comb_rc_result22_18));
  memset(&output_reshard1_22, 0, sizeof(output_reshard1_22));
  memset(&VS_out_relu1_23, 0, sizeof(VS_out_relu1_23));
  memset(&VS_out_avp1_26, 0, sizeof(VS_out_avp1_26));
  memset(&input_dup_n22_29, 0, sizeof(input_dup_n22_29));
  memset(&input_block_n22_31, 0, sizeof(input_block_n22_31));
  memset(&result_n23_32, 0, sizeof(result_n23_32));
  memset(&result_grid_n23_34, 0, sizeof(result_grid_n23_34));
  memset(&orig_result23_36, 0, sizeof(orig_result23_36));
  memset(&comb_row_result24_37, 0, sizeof(comb_row_result24_37));
  memset(&comb_rc_result24_40, 0, sizeof(comb_rc_result24_40));
  memset(&ss_result24_43, 0, sizeof(ss_result24_43));
  memset(&output_reshard1_46, 0, sizeof(output_reshard1_46));
  memset(&VS_out_conv2_47, 0, sizeof(VS_out_conv2_47));
  memset(&VS_out_conv_halo2_48, 0, sizeof(VS_out_conv_halo2_48));
  memset(&input_dup_n24_51, 0, sizeof(input_dup_n24_51));
  memset(&input_block_n24_53, 0, sizeof(input_block_n24_53));
  memset(&result_n25_55, 0, sizeof(result_n25_55));
  memset(&result_grid_n25_57, 0, sizeof(result_grid_n25_57));
  memset(&VS_out_relu2_59, 0, sizeof(VS_out_relu2_59));
  memset(&VS_out_conv3_62, 0, sizeof(VS_out_conv3_62));
  memset(&VS_out_conv_halo3_63, 0, sizeof(VS_out_conv_halo3_63));
  memset(&input_dup_n25_66, 0, sizeof(input_dup_n25_66));
  memset(&input_block_n25_68, 0, sizeof(input_block_n25_68));
  memset(&result_n26_70, 0, sizeof(result_n26_70));
  memset(&result_grid_n26_72, 0, sizeof(result_grid_n26_72));
  memset(&VS_out_add3_74, 0, sizeof(VS_out_add3_74));
  memset(&VS_out_relu3_77, 0, sizeof(VS_out_relu3_77));
  memset(&VS_out_conv4_80, 0, sizeof(VS_out_conv4_80));
  memset(&VS_out_conv_halo4_81, 0, sizeof(VS_out_conv_halo4_81));
  memset(&input_dup_n26_84, 0, sizeof(input_dup_n26_84));
  memset(&input_block_n26_86, 0, sizeof(input_block_n26_86));
  memset(&result_n27_88, 0, sizeof(result_n27_88));
  memset(&result_grid_n27_90, 0, sizeof(result_grid_n27_90));
  memset(&VS_out_relu4_92, 0, sizeof(VS_out_relu4_92));
  memset(&VS_out_conv5_95, 0, sizeof(VS_out_conv5_95));
  memset(&VS_out_conv_halo5_96, 0, sizeof(VS_out_conv_halo5_96));
  memset(&input_dup_n27_99, 0, sizeof(input_dup_n27_99));
  memset(&input_block_n27_101, 0, sizeof(input_block_n27_101));
  memset(&result_n28_103, 0, sizeof(result_n28_103));
  memset(&result_grid_n28_105, 0, sizeof(result_grid_n28_105));
  memset(&VS_out_add5_107, 0, sizeof(VS_out_add5_107));
  memset(&VS_out_relu5_110, 0, sizeof(VS_out_relu5_110));
  memset(&VS_out_conv6_113, 0, sizeof(VS_out_conv6_113));
  memset(&VS_out_conv_halo6_114, 0, sizeof(VS_out_conv_halo6_114));
  memset(&input_dup_n28_117, 0, sizeof(input_dup_n28_117));
  memset(&input_block_n28_119, 0, sizeof(input_block_n28_119));
  memset(&result_n29_121, 0, sizeof(result_n29_121));
  memset(&result_grid_n29_123, 0, sizeof(result_grid_n29_123));
  memset(&orig_result29_126, 0, sizeof(orig_result29_126));
  memset(&comb_row_result30_127, 0, sizeof(comb_row_result30_127));
  memset(&comb_rc_result30_130, 0, sizeof(comb_rc_result30_130));
  memset(&ss_result30_133, 0, sizeof(ss_result30_133));
  memset(&output_reshard6_137, 0, sizeof(output_reshard6_137));
  memset(&VS_out_conv7_138, 0, sizeof(VS_out_conv7_138));
  memset(&VS_out_conv_halo7_139, 0, sizeof(VS_out_conv_halo7_139));
  memset(&input_dup_n30_142, 0, sizeof(input_dup_n30_142));
  memset(&input_block_n30_144, 0, sizeof(input_block_n30_144));
  memset(&result_n31_146, 0, sizeof(result_n31_146));
  memset(&result_grid_n31_148, 0, sizeof(result_grid_n31_148));
  memset(&orig_result31_151, 0, sizeof(orig_result31_151));
  memset(&comb_row_result32_152, 0, sizeof(comb_row_result32_152));
  memset(&comb_rc_result32_155, 0, sizeof(comb_rc_result32_155));
  memset(&ss_result32_158, 0, sizeof(ss_result32_158));
  memset(&output_reshard7_162, 0, sizeof(output_reshard7_162));
  memset(&VS_out_relu7_163, 0, sizeof(VS_out_relu7_163));
  memset(&VS_out_conv8_166, 0, sizeof(VS_out_conv8_166));
  memset(&VS_out_conv_halo8_167, 0, sizeof(VS_out_conv_halo8_167));
  memset(&input_dup_n32_170, 0, sizeof(input_dup_n32_170));
  memset(&input_block_n32_172, 0, sizeof(input_block_n32_172));
  memset(&result_n33_174, 0, sizeof(result_n33_174));
  memset(&result_grid_n33_176, 0, sizeof(result_grid_n33_176));
  memset(&VS_out_add8_178, 0, sizeof(VS_out_add8_178));
  memset(&VS_out_relu8_181, 0, sizeof(VS_out_relu8_181));
  memset(&VS_out_conv9_184, 0, sizeof(VS_out_conv9_184));
  memset(&VS_out_conv_halo9_185, 0, sizeof(VS_out_conv_halo9_185));
  memset(&input_dup_n33_188, 0, sizeof(input_dup_n33_188));
  memset(&input_block_n33_190, 0, sizeof(input_block_n33_190));
  memset(&result_n34_192, 0, sizeof(result_n34_192));
  memset(&result_grid_n34_194, 0, sizeof(result_grid_n34_194));
  memset(&VS_out_relu9_196, 0, sizeof(VS_out_relu9_196));
  memset(&VS_out_conv10_199, 0, sizeof(VS_out_conv10_199));
  memset(&VS_out_conv_halo10_200, 0, sizeof(VS_out_conv_halo10_200));
  memset(&input_dup_n34_203, 0, sizeof(input_dup_n34_203));
  memset(&input_block_n34_205, 0, sizeof(input_block_n34_205));
  memset(&result_n35_207, 0, sizeof(result_n35_207));
  memset(&result_grid_n35_209, 0, sizeof(result_grid_n35_209));
  memset(&VS_out_add10_211, 0, sizeof(VS_out_add10_211));
  memset(&VS_out_relu10_214, 0, sizeof(VS_out_relu10_214));
  memset(&VS_out_conv11_217, 0, sizeof(VS_out_conv11_217));
  memset(&VS_out_conv_halo11_218, 0, sizeof(VS_out_conv_halo11_218));
  memset(&input_dup_n35_221, 0, sizeof(input_dup_n35_221));
  memset(&input_block_n35_223, 0, sizeof(input_block_n35_223));
  memset(&result_n36_225, 0, sizeof(result_n36_225));
  memset(&result_grid_n36_227, 0, sizeof(result_grid_n36_227));
  memset(&orig_result36_230, 0, sizeof(orig_result36_230));
  memset(&comb_row_result37_231, 0, sizeof(comb_row_result37_231));
  memset(&comb_rc_result37_234, 0, sizeof(comb_rc_result37_234));
  memset(&ss_result37_237, 0, sizeof(ss_result37_237));
  memset(&output_reshard11_241, 0, sizeof(output_reshard11_241));
  memset(&VS_out_conv12_242, 0, sizeof(VS_out_conv12_242));
  memset(&VS_out_conv_halo12_243, 0, sizeof(VS_out_conv_halo12_243));
  memset(&input_dup_n37_246, 0, sizeof(input_dup_n37_246));
  memset(&input_block_n37_248, 0, sizeof(input_block_n37_248));
  memset(&result_n38_250, 0, sizeof(result_n38_250));
  memset(&result_grid_n38_252, 0, sizeof(result_grid_n38_252));
  memset(&orig_result38_255, 0, sizeof(orig_result38_255));
  memset(&comb_row_result39_256, 0, sizeof(comb_row_result39_256));
  memset(&comb_rc_result39_259, 0, sizeof(comb_rc_result39_259));
  memset(&ss_result39_262, 0, sizeof(ss_result39_262));
  memset(&output_reshard12_266, 0, sizeof(output_reshard12_266));
  memset(&VS_out_relu12_267, 0, sizeof(VS_out_relu12_267));
  memset(&VS_out_conv13_270, 0, sizeof(VS_out_conv13_270));
  memset(&VS_out_conv_halo13_271, 0, sizeof(VS_out_conv_halo13_271));
  memset(&input_dup_n39_274, 0, sizeof(input_dup_n39_274));
  memset(&input_block_n39_276, 0, sizeof(input_block_n39_276));
  memset(&result_n40_278, 0, sizeof(result_n40_278));
  memset(&result_grid_n40_280, 0, sizeof(result_grid_n40_280));
  memset(&VS_out_add13_282, 0, sizeof(VS_out_add13_282));
  memset(&VS_out_relu13_285, 0, sizeof(VS_out_relu13_285));
  memset(&VS_out_conv14_288, 0, sizeof(VS_out_conv14_288));
  memset(&VS_out_conv_halo14_289, 0, sizeof(VS_out_conv_halo14_289));
  memset(&input_dup_n40_292, 0, sizeof(input_dup_n40_292));
  memset(&input_block_n40_294, 0, sizeof(input_block_n40_294));
  memset(&result_n41_296, 0, sizeof(result_n41_296));
  memset(&result_grid_n41_298, 0, sizeof(result_grid_n41_298));
  memset(&VS_out_relu14_300, 0, sizeof(VS_out_relu14_300));
  memset(&VS_out_conv15_303, 0, sizeof(VS_out_conv15_303));
  memset(&VS_out_conv_halo15_304, 0, sizeof(VS_out_conv_halo15_304));
  memset(&input_dup_n41_307, 0, sizeof(input_dup_n41_307));
  memset(&input_block_n41_309, 0, sizeof(input_block_n41_309));
  memset(&result_n42_311, 0, sizeof(result_n42_311));
  memset(&result_grid_n42_313, 0, sizeof(result_grid_n42_313));
  memset(&VS_out_add15_315, 0, sizeof(VS_out_add15_315));
  memset(&VS_out_relu15_318, 0, sizeof(VS_out_relu15_318));
  memset(&VS_out_conv16_321, 0, sizeof(VS_out_conv16_321));
  memset(&VS_out_conv_halo16_322, 0, sizeof(VS_out_conv_halo16_322));
  memset(&input_dup_n42_325, 0, sizeof(input_dup_n42_325));
  memset(&input_block_n42_327, 0, sizeof(input_block_n42_327));
  memset(&result_n43_329, 0, sizeof(result_n43_329));
  memset(&result_grid_n43_331, 0, sizeof(result_grid_n43_331));
  memset(&orig_result43_334, 0, sizeof(orig_result43_334));
  memset(&comb_dic_result44_335, 0, sizeof(comb_dic_result44_335));
  memset(&ss_result44_339, 0, sizeof(ss_result44_339));
  memset(&output_reshard16_343, 0, sizeof(output_reshard16_343));
  memset(&VS_out_conv17_344, 0, sizeof(VS_out_conv17_344));
  memset(&VS_out_conv_halo17_345, 0, sizeof(VS_out_conv_halo17_345));
  memset(&input_dup_n44_348, 0, sizeof(input_dup_n44_348));
  memset(&input_block_n44_350, 0, sizeof(input_block_n44_350));
  memset(&result_n45_352, 0, sizeof(result_n45_352));
  memset(&result_grid_n45_354, 0, sizeof(result_grid_n45_354));
  memset(&orig_result45_357, 0, sizeof(orig_result45_357));
  memset(&comb_dic_result46_358, 0, sizeof(comb_dic_result46_358));
  memset(&ss_result46_362, 0, sizeof(ss_result46_362));
  memset(&output_reshard17_366, 0, sizeof(output_reshard17_366));
  memset(&input_dup_n46_367, 0, sizeof(input_dup_n46_367));
  memset(&input_block_n46_369, 0, sizeof(input_block_n46_369));
  memset(&result_n47_370, 0, sizeof(result_n47_370));
  memset(&result_grid_n47_372, 0, sizeof(result_grid_n47_372));
  memset(&input_dup_n47_374, 0, sizeof(input_dup_n47_374));
  memset(&input_block_n47_376, 0, sizeof(input_block_n47_376));
  memset(&result_n48_377, 0, sizeof(result_n48_377));
  memset(&result_grid_n48_379, 0, sizeof(result_grid_n48_379));
  memset(&input_dup_n48_381, 0, sizeof(input_dup_n48_381));
  memset(&input_block_n48_383, 0, sizeof(input_block_n48_383));
  memset(&result_n49_384, 0, sizeof(result_n49_384));
  memset(&result_grid_n49_386, 0, sizeof(result_grid_n49_386));
  memset(&gap_result49_389, 0, sizeof(gap_result49_389));
  memset(&orig_result49_390, 0, sizeof(orig_result49_390));
  memset(&ss_result50_391, 0, sizeof(ss_result50_391));
  memset(&input_dup_n50_394, 0, sizeof(input_dup_n50_394));
  memset(&input_block_n50_396, 0, sizeof(input_block_n50_396));
  memset(&gemm_result_n51_397, 0, sizeof(gemm_result_n51_397));
  memset(&block_result_399, 0, sizeof(block_result_399));
  memset(&reduce_intra_401, 0, sizeof(reduce_intra_401));
  memset(&output_403, 0, sizeof(output_403));
  memset(&_ckks_gen_tmp_102_404, 0, sizeof(_ckks_gen_tmp_102_404));
  memset(&_ckks_gen_tmp_221_405, 0, sizeof(_ckks_gen_tmp_221_405));
  memset(&_ckks_gen_tmp_274_406, 0, sizeof(_ckks_gen_tmp_274_406));
  memset(&_ckks_gen_tmp_504_407, 0, sizeof(_ckks_gen_tmp_504_407));
  memset(&_ckks_gen_tmp_584_408, 0, sizeof(_ckks_gen_tmp_584_408));
  memset(&_ckks_gen_tmp_637_409, 0, sizeof(_ckks_gen_tmp_637_409));
  memset(&_ckks_gen_tmp_850_410, 0, sizeof(_ckks_gen_tmp_850_410));
  memset(&_ckks_gen_tmp_1115_411, 0, sizeof(_ckks_gen_tmp_1115_411));
  memset(&_ckks_gen_tmp_1445_412, 0, sizeof(_ckks_gen_tmp_1445_412));
  memset(&_ckks_gen_tmp_1710_413, 0, sizeof(_ckks_gen_tmp_1710_413));
  memset(&_ckks_gen_tmp_2040_414, 0, sizeof(_ckks_gen_tmp_2040_414));
  memset(&_ckks_gen_tmp_2187_415, 0, sizeof(_ckks_gen_tmp_2187_415));
  memset(&_ckks_gen_tmp_2240_416, 0, sizeof(_ckks_gen_tmp_2240_416));
  memset(&_ckks_gen_tmp_2293_417, 0, sizeof(_ckks_gen_tmp_2293_417));
  memset(&_ckks_gen_tmp_2468_418, 0, sizeof(_ckks_gen_tmp_2468_418));
  memset(&_ckks_gen_tmp_2615_419, 0, sizeof(_ckks_gen_tmp_2615_419));
  memset(&_ckks_gen_tmp_2668_420, 0, sizeof(_ckks_gen_tmp_2668_420));
  memset(&_ckks_gen_tmp_2721_421, 0, sizeof(_ckks_gen_tmp_2721_421));
  memset(&_ckks_gen_tmp_2963_422, 0, sizeof(_ckks_gen_tmp_2963_422));
  memset(&_ckks_gen_tmp_3293_423, 0, sizeof(_ckks_gen_tmp_3293_423));
  memset(&_ckks_gen_tmp_3558_424, 0, sizeof(_ckks_gen_tmp_3558_424));
  memset(&_ckks_gen_tmp_3888_425, 0, sizeof(_ckks_gen_tmp_3888_425));
  memset(&_ckks_gen_tmp_4035_426, 0, sizeof(_ckks_gen_tmp_4035_426));
  memset(&_ckks_gen_tmp_4088_427, 0, sizeof(_ckks_gen_tmp_4088_427));
  memset(&_ckks_gen_tmp_4141_428, 0, sizeof(_ckks_gen_tmp_4141_428));
  memset(&_ckks_gen_tmp_4316_429, 0, sizeof(_ckks_gen_tmp_4316_429));
  memset(&_ckks_gen_tmp_4463_430, 0, sizeof(_ckks_gen_tmp_4463_430));
  memset(&_ckks_gen_tmp_4516_431, 0, sizeof(_ckks_gen_tmp_4516_431));
  memset(&_ckks_gen_tmp_4569_432, 0, sizeof(_ckks_gen_tmp_4569_432));
  memset(&_ckks_gen_tmp_4811_433, 0, sizeof(_ckks_gen_tmp_4811_433));
  memset(&_ckks_gen_tmp_5141_434, 0, sizeof(_ckks_gen_tmp_5141_434));
  memset(&_ckks_gen_tmp_5406_435, 0, sizeof(_ckks_gen_tmp_5406_435));
  memset(&_ckks_gen_tmp_5736_436, 0, sizeof(_ckks_gen_tmp_5736_436));
  memset(&_ckks_gen_tmp_5897_437, 0, sizeof(_ckks_gen_tmp_5897_437));
  memset(&_ckks_gen_tmp_5954_438, 0, sizeof(_ckks_gen_tmp_5954_438));
  memset(&_ckks_gen_tmp_6118_439, 0, sizeof(_ckks_gen_tmp_6118_439));
  memset(&_ckks_gen_tmp_6279_440, 0, sizeof(_ckks_gen_tmp_6279_440));
  memset(&_ckks_gen_tmp_6336_441, 0, sizeof(_ckks_gen_tmp_6336_441));
  memset(&_ckks_gen_tmp_6481_442, 0, sizeof(_ckks_gen_tmp_6481_442));
  memset(&_ckks_gen_tmp_6649_443, 0, sizeof(_ckks_gen_tmp_6649_443));
  memset(&_ckks_gen_tmp_6804_444, 0, sizeof(_ckks_gen_tmp_6804_444));
  memset(&_ckks_gen_tmp_6996_445, 0, sizeof(_ckks_gen_tmp_6996_445));
  memset(&_ckks_gen_tmp_7148_446, 0, sizeof(_ckks_gen_tmp_7148_446));
  memset(&_pgen_tmp_0_475, 0, sizeof(_pgen_tmp_0_475));
  memset(&_pgen_tmp_1_476, 0, sizeof(_pgen_tmp_1_476));
  memset(&_pgen_tmp_2_477, 0, sizeof(_pgen_tmp_2_477));
  memset(&_pgen_tmp_3_478, 0, sizeof(_pgen_tmp_3_478));
  memset(&_pgen_tmp_4_479, 0, sizeof(_pgen_tmp_4_479));
  memset(&_pgen_tmp_5_480, 0, sizeof(_pgen_tmp_5_480));
  memset(&_pgen_tmp_6_481, 0, sizeof(_pgen_tmp_6_481));
  memset(&_pgen_tmp_7_482, 0, sizeof(_pgen_tmp_7_482));
  memset(&_pgen_tmp_8_483, 0, sizeof(_pgen_tmp_8_483));
  memset(&_pgen_tmp_9_484, 0, sizeof(_pgen_tmp_9_484));
  memset(&_pgen_tmp_10_485, 0, sizeof(_pgen_tmp_10_485));
  memset(&_pgen_tmp_11_486, 0, sizeof(_pgen_tmp_11_486));
  memset(&_pgen_tmp_12_487, 0, sizeof(_pgen_tmp_12_487));
  memset(&_pgen_tmp_13_488, 0, sizeof(_pgen_tmp_13_488));
  memset(&_pgen_tmp_14_489, 0, sizeof(_pgen_tmp_14_489));
  memset(&_pgen_tmp_15_490, 0, sizeof(_pgen_tmp_15_490));
  memset(&_pgen_tmp_16_491, 0, sizeof(_pgen_tmp_16_491));
  memset(&_pgen_tmp_17_492, 0, sizeof(_pgen_tmp_17_492));
  memset(&_pgen_tmp_18_493, 0, sizeof(_pgen_tmp_18_493));
  memset(&_pgen_tmp_19_494, 0, sizeof(_pgen_tmp_19_494));
  memset(&_pgen_tmp_20_495, 0, sizeof(_pgen_tmp_20_495));
  memset(&_pgen_tmp_21_496, 0, sizeof(_pgen_tmp_21_496));
  memset(&_pgen_tmp_22_497, 0, sizeof(_pgen_tmp_22_497));
  memset(&_pgen_tmp_23_498, 0, sizeof(_pgen_tmp_23_498));
  memset(&_pgen_tmp_24_499, 0, sizeof(_pgen_tmp_24_499));
  memset(&_pgen_tmp_25_500, 0, sizeof(_pgen_tmp_25_500));
  memset(&_pgen_tmp_26_501, 0, sizeof(_pgen_tmp_26_501));
  memset(&_pgen_tmp_27_502, 0, sizeof(_pgen_tmp_27_502));
  memset(&_pgen_tmp_28_503, 0, sizeof(_pgen_tmp_28_503));
  memset(&_pgen_tmp_29_504, 0, sizeof(_pgen_tmp_29_504));
  memset(&_pgen_tmp_30_505, 0, sizeof(_pgen_tmp_30_505));
  memset(&_pgen_tmp_31_506, 0, sizeof(_pgen_tmp_31_506));
  memset(&_pgen_tmp_32_507, 0, sizeof(_pgen_tmp_32_507));
  memset(&_pgen_tmp_33_508, 0, sizeof(_pgen_tmp_33_508));
  memset(&_pgen_tmp_34_509, 0, sizeof(_pgen_tmp_34_509));
  memset(&_pgen_tmp_35_510, 0, sizeof(_pgen_tmp_35_510));
  memset(&_pgen_tmp_36_511, 0, sizeof(_pgen_tmp_36_511));
  memset(&_pgen_tmp_37_512, 0, sizeof(_pgen_tmp_37_512));
  memset(&_pgen_tmp_38_513, 0, sizeof(_pgen_tmp_38_513));
  memset(&_pgen_tmp_39_514, 0, sizeof(_pgen_tmp_39_514));
  memset(&_pgen_tmp_40_515, 0, sizeof(_pgen_tmp_40_515));
  memset(&_pgen_tmp_41_516, 0, sizeof(_pgen_tmp_41_516));
  memset(&_pgen_tmp_42_517, 0, sizeof(_pgen_tmp_42_517));
  memset(&_pgen_tmp_43_518, 0, sizeof(_pgen_tmp_43_518));
  memset(&_pgen_tmp_44_519, 0, sizeof(_pgen_tmp_44_519));
  memset(&_pgen_tmp_45_520, 0, sizeof(_pgen_tmp_45_520));
  memset(&_pgen_tmp_46_521, 0, sizeof(_pgen_tmp_46_521));
  memset(&_pgen_tmp_47_522, 0, sizeof(_pgen_tmp_47_522));
  memset(&_pgen_tmp_48_523, 0, sizeof(_pgen_tmp_48_523));
  memset(&_pgen_tmp_49_524, 0, sizeof(_pgen_tmp_49_524));
  memset(&_pgen_tmp_50_525, 0, sizeof(_pgen_tmp_50_525));
  memset(&_pgen_tmp_51_526, 0, sizeof(_pgen_tmp_51_526));
  memset(&_pgen_tmp_52_527, 0, sizeof(_pgen_tmp_52_527));
  memset(&_pgen_tmp_53_528, 0, sizeof(_pgen_tmp_53_528));
  memset(&_pgen_tmp_54_529, 0, sizeof(_pgen_tmp_54_529));
  memset(&_pgen_tmp_55_530, 0, sizeof(_pgen_tmp_55_530));
  memset(&_pgen_tmp_56_531, 0, sizeof(_pgen_tmp_56_531));
  memset(&_pgen_tmp_57_532, 0, sizeof(_pgen_tmp_57_532));
  memset(&_pgen_tmp_58_533, 0, sizeof(_pgen_tmp_58_533));
  memset(&_pgen_tmp_59_534, 0, sizeof(_pgen_tmp_59_534));
  memset(&_pgen_tmp_60_535, 0, sizeof(_pgen_tmp_60_535));
  memset(&_pgen_tmp_61_536, 0, sizeof(_pgen_tmp_61_536));
  memset(&_pgen_tmp_62_537, 0, sizeof(_pgen_tmp_62_537));
  memset(&_pgen_tmp_63_538, 0, sizeof(_pgen_tmp_63_538));
  memset(&_pgen_tmp_64_539, 0, sizeof(_pgen_tmp_64_539));
  memset(&_pgen_tmp_65_540, 0, sizeof(_pgen_tmp_65_540));
  memset(&_pgen_tmp_66_541, 0, sizeof(_pgen_tmp_66_541));
  memset(&_pgen_tmp_67_542, 0, sizeof(_pgen_tmp_67_542));
  memset(&_pgen_tmp_68_543, 0, sizeof(_pgen_tmp_68_543));
  memset(&_pgen_tmp_69_544, 0, sizeof(_pgen_tmp_69_544));
  memset(&_pgen_tmp_70_545, 0, sizeof(_pgen_tmp_70_545));
  memset(&_pgen_tmp_71_546, 0, sizeof(_pgen_tmp_71_546));
  memset(&_pgen_tmp_72_547, 0, sizeof(_pgen_tmp_72_547));
  memset(&_pgen_tmp_73_548, 0, sizeof(_pgen_tmp_73_548));
  memset(&_pgen_tmp_74_549, 0, sizeof(_pgen_tmp_74_549));
  memset(&_pgen_tmp_75_550, 0, sizeof(_pgen_tmp_75_550));
  memset(&_pgen_tmp_76_551, 0, sizeof(_pgen_tmp_76_551));
  memset(&_pgen_tmp_77_552, 0, sizeof(_pgen_tmp_77_552));
  memset(&_pgen_tmp_78_553, 0, sizeof(_pgen_tmp_78_553));
  memset(&_pgen_tmp_79_554, 0, sizeof(_pgen_tmp_79_554));
  memset(&_pgen_tmp_80_555, 0, sizeof(_pgen_tmp_80_555));
  memset(&_pgen_tmp_81_556, 0, sizeof(_pgen_tmp_81_556));
  memset(&_pgen_tmp_82_557, 0, sizeof(_pgen_tmp_82_557));
  memset(&_pgen_tmp_83_558, 0, sizeof(_pgen_tmp_83_558));
  memset(&_pgen_tmp_84_559, 0, sizeof(_pgen_tmp_84_559));
  memset(&_pgen_tmp_85_560, 0, sizeof(_pgen_tmp_85_560));
  memset(&_pgen_tmp_86_561, 0, sizeof(_pgen_tmp_86_561));
  memset(&_pgen_tmp_87_562, 0, sizeof(_pgen_tmp_87_562));
  memset(&_pgen_tmp_88_563, 0, sizeof(_pgen_tmp_88_563));
  memset(&_pgen_tmp_89_564, 0, sizeof(_pgen_tmp_89_564));
  memset(&_pgen_tmp_90_565, 0, sizeof(_pgen_tmp_90_565));
  memset(&_pgen_tmp_91_566, 0, sizeof(_pgen_tmp_91_566));
  memset(&_pgen_tmp_92_567, 0, sizeof(_pgen_tmp_92_567));
  memset(&_pgen_tmp_93_568, 0, sizeof(_pgen_tmp_93_568));
  memset(&_pgen_tmp_94_569, 0, sizeof(_pgen_tmp_94_569));
  memset(&_pgen_tmp_95_570, 0, sizeof(_pgen_tmp_95_570));
  memset(&_pgen_tmp_96_571, 0, sizeof(_pgen_tmp_96_571));
  memset(&_pgen_tmp_97_572, 0, sizeof(_pgen_tmp_97_572));
  memset(&_pgen_tmp_98_573, 0, sizeof(_pgen_tmp_98_573));
  memset(&_pgen_tmp_99_574, 0, sizeof(_pgen_tmp_99_574));
  memset(&_pgen_tmp_100_575, 0, sizeof(_pgen_tmp_100_575));
  memset(&_pgen_tmp_101_576, 0, sizeof(_pgen_tmp_101_576));
  memset(&_pgen_tmp_102_577, 0, sizeof(_pgen_tmp_102_577));
  memset(&_pgen_tmp_103_578, 0, sizeof(_pgen_tmp_103_578));
  memset(&_pgen_tmp_104_579, 0, sizeof(_pgen_tmp_104_579));
  memset(&_pgen_tmp_105_580, 0, sizeof(_pgen_tmp_105_580));
  memset(&_pgen_tmp_106_581, 0, sizeof(_pgen_tmp_106_581));
  memset(&_pgen_tmp_107_582, 0, sizeof(_pgen_tmp_107_582));
  memset(&_pgen_tmp_108_583, 0, sizeof(_pgen_tmp_108_583));
  memset(&_pgen_tmp_109_584, 0, sizeof(_pgen_tmp_109_584));
  memset(&_pgen_tmp_110_585, 0, sizeof(_pgen_tmp_110_585));
  memset(&_pgen_tmp_111_586, 0, sizeof(_pgen_tmp_111_586));
  memset(&_pgen_tmp_112_587, 0, sizeof(_pgen_tmp_112_587));
  memset(&_pgen_tmp_113_588, 0, sizeof(_pgen_tmp_113_588));
  memset(&_pgen_tmp_114_589, 0, sizeof(_pgen_tmp_114_589));
  memset(&_pgen_tmp_115_590, 0, sizeof(_pgen_tmp_115_590));
  memset(&_pgen_tmp_116_591, 0, sizeof(_pgen_tmp_116_591));
  memset(&_pgen_tmp_117_592, 0, sizeof(_pgen_tmp_117_592));
  memset(&_pgen_tmp_118_593, 0, sizeof(_pgen_tmp_118_593));
  memset(&_pgen_tmp_119_594, 0, sizeof(_pgen_tmp_119_594));
  memset(&_pgen_tmp_120_595, 0, sizeof(_pgen_tmp_120_595));
  memset(&_pgen_tmp_121_596, 0, sizeof(_pgen_tmp_121_596));
  memset(&_pgen_tmp_122_597, 0, sizeof(_pgen_tmp_122_597));
  memset(&_pgen_tmp_123_598, 0, sizeof(_pgen_tmp_123_598));
  memset(&_pgen_tmp_124_599, 0, sizeof(_pgen_tmp_124_599));
  memset(&_pgen_tmp_125_600, 0, sizeof(_pgen_tmp_125_600));
  memset(&_pgen_tmp_126_601, 0, sizeof(_pgen_tmp_126_601));
  memset(&_pgen_tmp_127_602, 0, sizeof(_pgen_tmp_127_602));
  memset(&_pgen_tmp_128_603, 0, sizeof(_pgen_tmp_128_603));
  memset(&_pgen_tmp_129_604, 0, sizeof(_pgen_tmp_129_604));
  memset(&_pgen_tmp_130_605, 0, sizeof(_pgen_tmp_130_605));
  memset(&_pgen_tmp_131_606, 0, sizeof(_pgen_tmp_131_606));
  memset(&_pgen_tmp_132_607, 0, sizeof(_pgen_tmp_132_607));
  memset(&_pgen_tmp_133_608, 0, sizeof(_pgen_tmp_133_608));
  memset(&_pgen_tmp_134_609, 0, sizeof(_pgen_tmp_134_609));
  memset(&_pgen_tmp_135_610, 0, sizeof(_pgen_tmp_135_610));
  memset(&_pgen_tmp_136_611, 0, sizeof(_pgen_tmp_136_611));
  memset(&_pgen_tmp_137_612, 0, sizeof(_pgen_tmp_137_612));
  memset(&_pgen_tmp_138_613, 0, sizeof(_pgen_tmp_138_613));
  memset(&_pgen_tmp_139_614, 0, sizeof(_pgen_tmp_139_614));
  memset(&_pgen_tmp_140_615, 0, sizeof(_pgen_tmp_140_615));
  memset(&_pgen_tmp_141_616, 0, sizeof(_pgen_tmp_141_616));
  memset(&_pgen_tmp_142_617, 0, sizeof(_pgen_tmp_142_617));
  memset(&_pgen_tmp_143_618, 0, sizeof(_pgen_tmp_143_618));
  memset(&_pgen_tmp_144_619, 0, sizeof(_pgen_tmp_144_619));
  memset(&_pgen_tmp_145_620, 0, sizeof(_pgen_tmp_145_620));
  memset(&_pgen_tmp_146_621, 0, sizeof(_pgen_tmp_146_621));
  memset(&_pgen_tmp_147_622, 0, sizeof(_pgen_tmp_147_622));
  memset(&_pgen_tmp_148_623, 0, sizeof(_pgen_tmp_148_623));
  memset(&_pgen_tmp_149_624, 0, sizeof(_pgen_tmp_149_624));
  memset(&_pgen_tmp_150_625, 0, sizeof(_pgen_tmp_150_625));
  memset(&_pgen_tmp_151_626, 0, sizeof(_pgen_tmp_151_626));
  memset(&_pgen_tmp_152_627, 0, sizeof(_pgen_tmp_152_627));
  memset(&_pgen_tmp_153_628, 0, sizeof(_pgen_tmp_153_628));
  memset(&_pgen_tmp_154_629, 0, sizeof(_pgen_tmp_154_629));
  memset(&_pgen_tmp_155_630, 0, sizeof(_pgen_tmp_155_630));
  memset(&_pgen_tmp_156_631, 0, sizeof(_pgen_tmp_156_631));
  memset(&_pgen_tmp_157_632, 0, sizeof(_pgen_tmp_157_632));
  memset(&_pgen_tmp_158_633, 0, sizeof(_pgen_tmp_158_633));
  memset(&_pgen_tmp_159_634, 0, sizeof(_pgen_tmp_159_634));
  memset(&_pgen_tmp_160_635, 0, sizeof(_pgen_tmp_160_635));
  memset(&_pgen_tmp_161_636, 0, sizeof(_pgen_tmp_161_636));
  memset(&_pgen_tmp_162_637, 0, sizeof(_pgen_tmp_162_637));
  memset(&_pgen_tmp_163_638, 0, sizeof(_pgen_tmp_163_638));
  memset(&_pgen_tmp_164_639, 0, sizeof(_pgen_tmp_164_639));
  memset(&_pgen_tmp_165_640, 0, sizeof(_pgen_tmp_165_640));
  memset(&_pgen_tmp_166_641, 0, sizeof(_pgen_tmp_166_641));
  memset(&_pgen_tmp_167_642, 0, sizeof(_pgen_tmp_167_642));
  memset(&_pgen_tmp_168_643, 0, sizeof(_pgen_tmp_168_643));
  memset(&_pgen_tmp_169_644, 0, sizeof(_pgen_tmp_169_644));
  memset(&_pgen_tmp_170_645, 0, sizeof(_pgen_tmp_170_645));
  memset(&_pgen_tmp_171_646, 0, sizeof(_pgen_tmp_171_646));
  memset(&_pgen_tmp_172_647, 0, sizeof(_pgen_tmp_172_647));
  memset(&_pgen_tmp_173_648, 0, sizeof(_pgen_tmp_173_648));
  memset(&_pgen_tmp_174_649, 0, sizeof(_pgen_tmp_174_649));
  memset(&_pgen_tmp_175_650, 0, sizeof(_pgen_tmp_175_650));
  memset(&_pgen_tmp_176_651, 0, sizeof(_pgen_tmp_176_651));
  memset(&_pgen_tmp_177_652, 0, sizeof(_pgen_tmp_177_652));
  memset(&_pgen_tmp_178_653, 0, sizeof(_pgen_tmp_178_653));
  memset(&_pgen_tmp_179_654, 0, sizeof(_pgen_tmp_179_654));
  memset(&_pgen_tmp_180_655, 0, sizeof(_pgen_tmp_180_655));
  memset(&_pgen_tmp_181_656, 0, sizeof(_pgen_tmp_181_656));
  memset(&_pgen_tmp_182_657, 0, sizeof(_pgen_tmp_182_657));
  memset(&_pgen_tmp_183_658, 0, sizeof(_pgen_tmp_183_658));
  memset(&_pgen_tmp_184_659, 0, sizeof(_pgen_tmp_184_659));
  memset(&_pgen_tmp_185_660, 0, sizeof(_pgen_tmp_185_660));
  memset(&_pgen_tmp_186_661, 0, sizeof(_pgen_tmp_186_661));
  memset(&_pgen_tmp_187_662, 0, sizeof(_pgen_tmp_187_662));
  memset(&_pgen_tmp_188_663, 0, sizeof(_pgen_tmp_188_663));
  memset(&_pgen_tmp_189_664, 0, sizeof(_pgen_tmp_189_664));
  memset(&_pgen_tmp_190_665, 0, sizeof(_pgen_tmp_190_665));
  memset(&_pgen_tmp_191_666, 0, sizeof(_pgen_tmp_191_666));
  memset(&_pgen_tmp_192_667, 0, sizeof(_pgen_tmp_192_667));
  memset(&_pgen_tmp_193_668, 0, sizeof(_pgen_tmp_193_668));
  memset(&_pgen_tmp_194_669, 0, sizeof(_pgen_tmp_194_669));
  memset(&_pgen_tmp_195_670, 0, sizeof(_pgen_tmp_195_670));
  memset(&_pgen_tmp_196_671, 0, sizeof(_pgen_tmp_196_671));
  memset(&_pgen_tmp_197_672, 0, sizeof(_pgen_tmp_197_672));
  memset(&_pgen_tmp_198_673, 0, sizeof(_pgen_tmp_198_673));
  memset(&_pgen_tmp_199_674, 0, sizeof(_pgen_tmp_199_674));
  memset(&_pgen_tmp_200_675, 0, sizeof(_pgen_tmp_200_675));
  memset(&_pgen_tmp_201_676, 0, sizeof(_pgen_tmp_201_676));
  memset(&_pgen_tmp_202_677, 0, sizeof(_pgen_tmp_202_677));
  memset(&_pgen_tmp_203_678, 0, sizeof(_pgen_tmp_203_678));
  memset(&_pgen_tmp_204_679, 0, sizeof(_pgen_tmp_204_679));
  memset(&_pgen_tmp_205_680, 0, sizeof(_pgen_tmp_205_680));
  memset(&_pgen_tmp_206_681, 0, sizeof(_pgen_tmp_206_681));
  memset(&_pgen_tmp_207_682, 0, sizeof(_pgen_tmp_207_682));
  memset(&_pgen_tmp_208_683, 0, sizeof(_pgen_tmp_208_683));
  memset(&_pgen_tmp_209_684, 0, sizeof(_pgen_tmp_209_684));
  memset(&_pgen_tmp_210_685, 0, sizeof(_pgen_tmp_210_685));
  memset(&_pgen_tmp_211_686, 0, sizeof(_pgen_tmp_211_686));
  memset(&_pgen_tmp_212_687, 0, sizeof(_pgen_tmp_212_687));
  memset(&_pgen_tmp_213_688, 0, sizeof(_pgen_tmp_213_688));
  memset(&_pgen_tmp_214_689, 0, sizeof(_pgen_tmp_214_689));
  memset(&_pgen_tmp_215_690, 0, sizeof(_pgen_tmp_215_690));
  memset(&_pgen_tmp_216_691, 0, sizeof(_pgen_tmp_216_691));
  memset(&_pgen_tmp_217_692, 0, sizeof(_pgen_tmp_217_692));
  memset(&_pgen_tmp_218_693, 0, sizeof(_pgen_tmp_218_693));
  memset(&_pgen_tmp_219_694, 0, sizeof(_pgen_tmp_219_694));
  memset(&_pgen_tmp_220_695, 0, sizeof(_pgen_tmp_220_695));
  memset(&_pgen_tmp_221_696, 0, sizeof(_pgen_tmp_221_696));
  memset(&_pgen_tmp_222_697, 0, sizeof(_pgen_tmp_222_697));
  memset(&_pgen_tmp_223_698, 0, sizeof(_pgen_tmp_223_698));
  memset(&_pgen_tmp_224_699, 0, sizeof(_pgen_tmp_224_699));
  memset(&_pgen_tmp_225_700, 0, sizeof(_pgen_tmp_225_700));
  memset(&_pgen_tmp_226_701, 0, sizeof(_pgen_tmp_226_701));
  memset(&_pgen_tmp_227_702, 0, sizeof(_pgen_tmp_227_702));
  memset(&_pgen_tmp_228_703, 0, sizeof(_pgen_tmp_228_703));
  memset(&_pgen_tmp_229_704, 0, sizeof(_pgen_tmp_229_704));
  memset(&_pgen_tmp_230_705, 0, sizeof(_pgen_tmp_230_705));
  memset(&_pgen_tmp_231_706, 0, sizeof(_pgen_tmp_231_706));
  memset(&_pgen_tmp_232_707, 0, sizeof(_pgen_tmp_232_707));
  memset(&_pgen_tmp_233_708, 0, sizeof(_pgen_tmp_233_708));
  memset(&_pgen_tmp_234_709, 0, sizeof(_pgen_tmp_234_709));
  memset(&_pgen_tmp_235_710, 0, sizeof(_pgen_tmp_235_710));
  memset(&_pgen_tmp_236_711, 0, sizeof(_pgen_tmp_236_711));
  memset(&_pgen_tmp_237_712, 0, sizeof(_pgen_tmp_237_712));
  memset(&_pgen_tmp_238_713, 0, sizeof(_pgen_tmp_238_713));
  memset(&_pgen_tmp_239_714, 0, sizeof(_pgen_tmp_239_714));
  memset(&_pgen_tmp_240_715, 0, sizeof(_pgen_tmp_240_715));
  memset(&_pgen_tmp_241_716, 0, sizeof(_pgen_tmp_241_716));
  memset(&_pgen_tmp_242_717, 0, sizeof(_pgen_tmp_242_717));
  memset(&_pgen_tmp_243_718, 0, sizeof(_pgen_tmp_243_718));
  memset(&_pgen_tmp_244_719, 0, sizeof(_pgen_tmp_244_719));
  memset(&_pgen_tmp_245_720, 0, sizeof(_pgen_tmp_245_720));
  memset(&_pgen_tmp_246_721, 0, sizeof(_pgen_tmp_246_721));
  memset(&_pgen_tmp_247_722, 0, sizeof(_pgen_tmp_247_722));
  memset(&_pgen_tmp_248_723, 0, sizeof(_pgen_tmp_248_723));
  memset(&_pgen_tmp_249_724, 0, sizeof(_pgen_tmp_249_724));
  memset(&_pgen_tmp_250_725, 0, sizeof(_pgen_tmp_250_725));
  memset(&_pgen_tmp_251_726, 0, sizeof(_pgen_tmp_251_726));
  memset(&_pgen_tmp_252_727, 0, sizeof(_pgen_tmp_252_727));
  memset(&_pgen_tmp_253_728, 0, sizeof(_pgen_tmp_253_728));
  memset(&_pgen_tmp_254_729, 0, sizeof(_pgen_tmp_254_729));
  memset(&_pgen_tmp_255_730, 0, sizeof(_pgen_tmp_255_730));
  memset(&_pgen_tmp_256_731, 0, sizeof(_pgen_tmp_256_731));
  memset(&_pgen_tmp_257_732, 0, sizeof(_pgen_tmp_257_732));
  memset(&_pgen_tmp_258_733, 0, sizeof(_pgen_tmp_258_733));
  memset(&_pgen_tmp_259_734, 0, sizeof(_pgen_tmp_259_734));
  memset(&_pgen_tmp_260_735, 0, sizeof(_pgen_tmp_260_735));
  memset(&_pgen_tmp_261_736, 0, sizeof(_pgen_tmp_261_736));
  memset(&_pgen_tmp_262_737, 0, sizeof(_pgen_tmp_262_737));
  memset(&_pgen_tmp_263_738, 0, sizeof(_pgen_tmp_263_738));
  memset(&_pgen_tmp_264_739, 0, sizeof(_pgen_tmp_264_739));
  memset(&_pgen_tmp_265_740, 0, sizeof(_pgen_tmp_265_740));
  memset(&_pgen_tmp_266_741, 0, sizeof(_pgen_tmp_266_741));
  memset(&_pgen_tmp_267_742, 0, sizeof(_pgen_tmp_267_742));
  memset(&_pgen_tmp_268_743, 0, sizeof(_pgen_tmp_268_743));
  memset(&_pgen_tmp_269_744, 0, sizeof(_pgen_tmp_269_744));
  memset(&_pgen_tmp_270_745, 0, sizeof(_pgen_tmp_270_745));
  memset(&_pgen_tmp_271_746, 0, sizeof(_pgen_tmp_271_746));
  memset(&_pgen_tmp_272_747, 0, sizeof(_pgen_tmp_272_747));
  memset(&_pgen_tmp_273_748, 0, sizeof(_pgen_tmp_273_748));
  memset(&_pgen_tmp_274_749, 0, sizeof(_pgen_tmp_274_749));
  memset(&_pgen_tmp_275_750, 0, sizeof(_pgen_tmp_275_750));
  memset(&_pgen_tmp_276_751, 0, sizeof(_pgen_tmp_276_751));
  memset(&_pgen_tmp_277_752, 0, sizeof(_pgen_tmp_277_752));
  memset(&_pgen_tmp_278_753, 0, sizeof(_pgen_tmp_278_753));
  memset(&_pgen_tmp_279_754, 0, sizeof(_pgen_tmp_279_754));
  memset(&_pgen_tmp_280_755, 0, sizeof(_pgen_tmp_280_755));
  memset(&_pgen_tmp_281_756, 0, sizeof(_pgen_tmp_281_756));
  memset(&_pgen_tmp_282_757, 0, sizeof(_pgen_tmp_282_757));
  memset(&_pgen_tmp_283_758, 0, sizeof(_pgen_tmp_283_758));
  memset(&_pgen_tmp_284_759, 0, sizeof(_pgen_tmp_284_759));
  memset(&_pgen_tmp_285_760, 0, sizeof(_pgen_tmp_285_760));
  memset(&_pgen_tmp_286_761, 0, sizeof(_pgen_tmp_286_761));
  memset(&_pgen_tmp_287_762, 0, sizeof(_pgen_tmp_287_762));
  memset(&_pgen_tmp_288_763, 0, sizeof(_pgen_tmp_288_763));
  memset(&_pgen_tmp_289_764, 0, sizeof(_pgen_tmp_289_764));
  memset(&_pgen_tmp_290_765, 0, sizeof(_pgen_tmp_290_765));
  memset(&_pgen_tmp_291_766, 0, sizeof(_pgen_tmp_291_766));
  memset(&_pgen_tmp_292_767, 0, sizeof(_pgen_tmp_292_767));
  memset(&_pgen_tmp_293_768, 0, sizeof(_pgen_tmp_293_768));
  memset(&_pgen_tmp_294_769, 0, sizeof(_pgen_tmp_294_769));
  memset(&_pgen_tmp_295_770, 0, sizeof(_pgen_tmp_295_770));
  memset(&_pgen_tmp_296_771, 0, sizeof(_pgen_tmp_296_771));
  memset(&_pgen_tmp_297_772, 0, sizeof(_pgen_tmp_297_772));
  memset(&_pgen_tmp_298_773, 0, sizeof(_pgen_tmp_298_773));
  memset(&_pgen_tmp_299_774, 0, sizeof(_pgen_tmp_299_774));
  memset(&_pgen_tmp_300_775, 0, sizeof(_pgen_tmp_300_775));
  memset(&_pgen_tmp_301_776, 0, sizeof(_pgen_tmp_301_776));
  memset(&_pgen_tmp_302_777, 0, sizeof(_pgen_tmp_302_777));
  memset(&_pgen_tmp_303_778, 0, sizeof(_pgen_tmp_303_778));
  memset(&_pgen_tmp_304_779, 0, sizeof(_pgen_tmp_304_779));
  memset(&_pgen_tmp_305_780, 0, sizeof(_pgen_tmp_305_780));
  memset(&_pgen_tmp_306_781, 0, sizeof(_pgen_tmp_306_781));
  memset(&_pgen_tmp_307_782, 0, sizeof(_pgen_tmp_307_782));
  memset(&_pgen_tmp_308_783, 0, sizeof(_pgen_tmp_308_783));
  memset(&_pgen_tmp_309_784, 0, sizeof(_pgen_tmp_309_784));
  memset(&_pgen_tmp_310_785, 0, sizeof(_pgen_tmp_310_785));
  memset(&_pgen_tmp_311_786, 0, sizeof(_pgen_tmp_311_786));
  memset(&_pgen_tmp_312_787, 0, sizeof(_pgen_tmp_312_787));
  memset(&_pgen_tmp_313_788, 0, sizeof(_pgen_tmp_313_788));
  memset(&_pgen_tmp_314_789, 0, sizeof(_pgen_tmp_314_789));
  memset(&_pgen_tmp_315_790, 0, sizeof(_pgen_tmp_315_790));
  memset(&_pgen_tmp_316_791, 0, sizeof(_pgen_tmp_316_791));
  memset(&_pgen_tmp_317_792, 0, sizeof(_pgen_tmp_317_792));
  memset(&_pgen_tmp_318_793, 0, sizeof(_pgen_tmp_318_793));
  memset(&_pgen_tmp_319_794, 0, sizeof(_pgen_tmp_319_794));
  memset(&_pgen_tmp_320_795, 0, sizeof(_pgen_tmp_320_795));
  memset(&_pgen_tmp_321_796, 0, sizeof(_pgen_tmp_321_796));
  memset(&_pgen_tmp_322_797, 0, sizeof(_pgen_tmp_322_797));
  memset(&_pgen_tmp_323_798, 0, sizeof(_pgen_tmp_323_798));
  memset(&_pgen_tmp_324_799, 0, sizeof(_pgen_tmp_324_799));
  memset(&_pgen_tmp_325_800, 0, sizeof(_pgen_tmp_325_800));
  memset(&_pgen_tmp_326_801, 0, sizeof(_pgen_tmp_326_801));
  memset(&_pgen_tmp_327_802, 0, sizeof(_pgen_tmp_327_802));
  memset(&_pgen_tmp_328_803, 0, sizeof(_pgen_tmp_328_803));
  memset(&_pgen_tmp_329_804, 0, sizeof(_pgen_tmp_329_804));
  memset(&_pgen_tmp_330_805, 0, sizeof(_pgen_tmp_330_805));
  memset(&_pgen_tmp_331_806, 0, sizeof(_pgen_tmp_331_806));
  memset(&_pgen_tmp_332_807, 0, sizeof(_pgen_tmp_332_807));
  memset(&_pgen_tmp_333_808, 0, sizeof(_pgen_tmp_333_808));
  memset(&_pgen_tmp_334_809, 0, sizeof(_pgen_tmp_334_809));
  memset(&_pgen_tmp_335_810, 0, sizeof(_pgen_tmp_335_810));
  memset(&_pgen_tmp_336_811, 0, sizeof(_pgen_tmp_336_811));
  memset(&_pgen_tmp_337_812, 0, sizeof(_pgen_tmp_337_812));
  memset(&_pgen_tmp_338_813, 0, sizeof(_pgen_tmp_338_813));
  memset(&_pgen_tmp_339_814, 0, sizeof(_pgen_tmp_339_814));
  memset(&_pgen_tmp_340_815, 0, sizeof(_pgen_tmp_340_815));
  memset(&_pgen_tmp_341_816, 0, sizeof(_pgen_tmp_341_816));
  memset(&_pgen_tmp_342_817, 0, sizeof(_pgen_tmp_342_817));
  memset(&_pgen_tmp_343_818, 0, sizeof(_pgen_tmp_343_818));
  memset(&_pgen_tmp_344_819, 0, sizeof(_pgen_tmp_344_819));
  memset(&_pgen_tmp_345_820, 0, sizeof(_pgen_tmp_345_820));
  memset(&_pgen_tmp_346_821, 0, sizeof(_pgen_tmp_346_821));
  memset(&_pgen_tmp_347_822, 0, sizeof(_pgen_tmp_347_822));
  memset(&_pgen_tmp_348_823, 0, sizeof(_pgen_tmp_348_823));
  memset(&_pgen_tmp_349_824, 0, sizeof(_pgen_tmp_349_824));
  memset(&_pgen_tmp_350_825, 0, sizeof(_pgen_tmp_350_825));
  memset(&_pgen_tmp_351_826, 0, sizeof(_pgen_tmp_351_826));
  memset(&_pgen_tmp_352_827, 0, sizeof(_pgen_tmp_352_827));
  memset(&_pgen_tmp_353_828, 0, sizeof(_pgen_tmp_353_828));
  memset(&_pgen_tmp_354_829, 0, sizeof(_pgen_tmp_354_829));
  memset(&_pgen_tmp_355_830, 0, sizeof(_pgen_tmp_355_830));
  memset(&_pgen_tmp_356_831, 0, sizeof(_pgen_tmp_356_831));
  memset(&_pgen_tmp_357_832, 0, sizeof(_pgen_tmp_357_832));
  memset(&_pgen_tmp_358_833, 0, sizeof(_pgen_tmp_358_833));
  memset(&_pgen_tmp_359_834, 0, sizeof(_pgen_tmp_359_834));
  memset(&_pgen_tmp_360_835, 0, sizeof(_pgen_tmp_360_835));
  memset(&_pgen_tmp_361_836, 0, sizeof(_pgen_tmp_361_836));
  memset(&_pgen_tmp_362_837, 0, sizeof(_pgen_tmp_362_837));
  memset(&_pgen_tmp_363_838, 0, sizeof(_pgen_tmp_363_838));
  memset(&_pgen_tmp_364_839, 0, sizeof(_pgen_tmp_364_839));
  memset(&_pgen_tmp_365_840, 0, sizeof(_pgen_tmp_365_840));
  memset(&_pgen_tmp_366_841, 0, sizeof(_pgen_tmp_366_841));
  memset(&_pgen_tmp_367_842, 0, sizeof(_pgen_tmp_367_842));
  memset(&_pgen_tmp_368_843, 0, sizeof(_pgen_tmp_368_843));
  memset(&_pgen_tmp_369_844, 0, sizeof(_pgen_tmp_369_844));
  memset(&_pgen_tmp_370_845, 0, sizeof(_pgen_tmp_370_845));
  memset(&_pgen_tmp_371_846, 0, sizeof(_pgen_tmp_371_846));
  memset(&_pgen_tmp_372_847, 0, sizeof(_pgen_tmp_372_847));
  memset(&_pgen_tmp_373_848, 0, sizeof(_pgen_tmp_373_848));
  memset(&_pgen_tmp_374_849, 0, sizeof(_pgen_tmp_374_849));
  memset(&_pgen_tmp_375_850, 0, sizeof(_pgen_tmp_375_850));
  memset(&_pgen_tmp_376_851, 0, sizeof(_pgen_tmp_376_851));
  memset(&_pgen_tmp_377_852, 0, sizeof(_pgen_tmp_377_852));
  memset(&_pgen_tmp_378_853, 0, sizeof(_pgen_tmp_378_853));
  memset(&_pgen_tmp_379_854, 0, sizeof(_pgen_tmp_379_854));
  memset(&_pgen_tmp_380_855, 0, sizeof(_pgen_tmp_380_855));
  memset(&_pgen_tmp_381_856, 0, sizeof(_pgen_tmp_381_856));
  memset(&_pgen_tmp_382_857, 0, sizeof(_pgen_tmp_382_857));
  memset(&_pgen_tmp_383_858, 0, sizeof(_pgen_tmp_383_858));
  memset(&_pgen_tmp_384_859, 0, sizeof(_pgen_tmp_384_859));
  memset(&_pgen_tmp_385_860, 0, sizeof(_pgen_tmp_385_860));
  memset(&_pgen_tmp_386_861, 0, sizeof(_pgen_tmp_386_861));
  memset(&_pgen_tmp_387_862, 0, sizeof(_pgen_tmp_387_862));
  memset(&_pgen_tmp_388_863, 0, sizeof(_pgen_tmp_388_863));
  memset(&_pgen_tmp_389_864, 0, sizeof(_pgen_tmp_389_864));
  memset(&_pgen_tmp_390_865, 0, sizeof(_pgen_tmp_390_865));
  memset(&_pgen_tmp_391_866, 0, sizeof(_pgen_tmp_391_866));
  memset(&_pgen_tmp_392_867, 0, sizeof(_pgen_tmp_392_867));
  memset(&_pgen_tmp_393_868, 0, sizeof(_pgen_tmp_393_868));
  memset(&_pgen_tmp_394_869, 0, sizeof(_pgen_tmp_394_869));
  memset(&_pgen_tmp_395_870, 0, sizeof(_pgen_tmp_395_870));
  memset(&_pgen_tmp_396_871, 0, sizeof(_pgen_tmp_396_871));
  memset(&_pgen_tmp_397_872, 0, sizeof(_pgen_tmp_397_872));
  memset(&_pgen_tmp_398_873, 0, sizeof(_pgen_tmp_398_873));
  memset(&_pgen_tmp_399_874, 0, sizeof(_pgen_tmp_399_874));
  memset(&_pgen_tmp_400_875, 0, sizeof(_pgen_tmp_400_875));
  memset(&_pgen_tmp_401_876, 0, sizeof(_pgen_tmp_401_876));
  memset(&_pgen_tmp_402_877, 0, sizeof(_pgen_tmp_402_877));
  memset(&_pgen_tmp_403_878, 0, sizeof(_pgen_tmp_403_878));
  memset(&_pgen_tmp_404_879, 0, sizeof(_pgen_tmp_404_879));
  memset(&_pgen_tmp_405_880, 0, sizeof(_pgen_tmp_405_880));
  memset(&_pgen_tmp_406_881, 0, sizeof(_pgen_tmp_406_881));
  memset(&_pgen_tmp_407_882, 0, sizeof(_pgen_tmp_407_882));
  memset(&_pgen_tmp_408_883, 0, sizeof(_pgen_tmp_408_883));
  memset(&_pgen_tmp_409_884, 0, sizeof(_pgen_tmp_409_884));
  memset(&_pgen_tmp_410_885, 0, sizeof(_pgen_tmp_410_885));
  memset(&_pgen_tmp_411_886, 0, sizeof(_pgen_tmp_411_886));
  memset(&_pgen_tmp_412_887, 0, sizeof(_pgen_tmp_412_887));
  memset(&_pgen_tmp_413_888, 0, sizeof(_pgen_tmp_413_888));
  memset(&_pgen_tmp_414_889, 0, sizeof(_pgen_tmp_414_889));
  memset(&_pgen_tmp_415_890, 0, sizeof(_pgen_tmp_415_890));
  memset(&_pgen_tmp_416_891, 0, sizeof(_pgen_tmp_416_891));
  memset(&_pgen_tmp_417_892, 0, sizeof(_pgen_tmp_417_892));
  memset(&_pgen_tmp_418_893, 0, sizeof(_pgen_tmp_418_893));
  memset(&_pgen_tmp_419_894, 0, sizeof(_pgen_tmp_419_894));
  memset(&_pgen_tmp_420_895, 0, sizeof(_pgen_tmp_420_895));
  memset(&_pgen_tmp_421_896, 0, sizeof(_pgen_tmp_421_896));
  memset(&_pgen_tmp_422_897, 0, sizeof(_pgen_tmp_422_897));
  memset(&_pgen_tmp_423_898, 0, sizeof(_pgen_tmp_423_898));
  memset(&_pgen_tmp_424_899, 0, sizeof(_pgen_tmp_424_899));
  memset(&_pgen_tmp_425_900, 0, sizeof(_pgen_tmp_425_900));
  memset(&_pgen_tmp_426_901, 0, sizeof(_pgen_tmp_426_901));
  memset(&_pgen_tmp_427_902, 0, sizeof(_pgen_tmp_427_902));
  memset(&_pgen_tmp_428_903, 0, sizeof(_pgen_tmp_428_903));
  memset(&_pgen_tmp_429_904, 0, sizeof(_pgen_tmp_429_904));
  memset(&_pgen_tmp_430_905, 0, sizeof(_pgen_tmp_430_905));
  memset(&_pgen_tmp_431_906, 0, sizeof(_pgen_tmp_431_906));
  memset(&_pgen_tmp_432_907, 0, sizeof(_pgen_tmp_432_907));
  memset(&_pgen_tmp_433_908, 0, sizeof(_pgen_tmp_433_908));
  memset(&_pgen_tmp_434_909, 0, sizeof(_pgen_tmp_434_909));
  memset(&_pgen_tmp_435_910, 0, sizeof(_pgen_tmp_435_910));
  memset(&_pgen_tmp_436_911, 0, sizeof(_pgen_tmp_436_911));
  memset(&_pgen_tmp_437_912, 0, sizeof(_pgen_tmp_437_912));
  memset(&_pgen_tmp_438_913, 0, sizeof(_pgen_tmp_438_913));
  memset(&_pgen_tmp_439_914, 0, sizeof(_pgen_tmp_439_914));
  memset(&_pgen_tmp_440_915, 0, sizeof(_pgen_tmp_440_915));
  memset(&_pgen_tmp_441_916, 0, sizeof(_pgen_tmp_441_916));
  memset(&_pgen_tmp_442_917, 0, sizeof(_pgen_tmp_442_917));
  memset(&_pgen_tmp_443_918, 0, sizeof(_pgen_tmp_443_918));
  memset(&_pgen_tmp_444_919, 0, sizeof(_pgen_tmp_444_919));
  memset(&_pgen_tmp_445_920, 0, sizeof(_pgen_tmp_445_920));
  memset(&_pgen_tmp_446_921, 0, sizeof(_pgen_tmp_446_921));
  memset(&_pgen_tmp_447_922, 0, sizeof(_pgen_tmp_447_922));
  memset(&_pgen_tmp_448_923, 0, sizeof(_pgen_tmp_448_923));
  memset(&_pgen_tmp_449_924, 0, sizeof(_pgen_tmp_449_924));
  memset(&_pgen_tmp_450_925, 0, sizeof(_pgen_tmp_450_925));
  memset(&_pgen_tmp_451_926, 0, sizeof(_pgen_tmp_451_926));
  memset(&_pgen_tmp_452_927, 0, sizeof(_pgen_tmp_452_927));
  memset(&_pgen_tmp_453_928, 0, sizeof(_pgen_tmp_453_928));
  memset(&_pgen_tmp_454_929, 0, sizeof(_pgen_tmp_454_929));
  memset(&_pgen_tmp_455_930, 0, sizeof(_pgen_tmp_455_930));
  memset(&_pgen_tmp_456_931, 0, sizeof(_pgen_tmp_456_931));
  memset(&_pgen_tmp_457_932, 0, sizeof(_pgen_tmp_457_932));
  memset(&_pgen_tmp_458_933, 0, sizeof(_pgen_tmp_458_933));
  memset(&_pgen_tmp_459_934, 0, sizeof(_pgen_tmp_459_934));
  memset(&_pgen_tmp_460_935, 0, sizeof(_pgen_tmp_460_935));
  memset(&_pgen_tmp_461_936, 0, sizeof(_pgen_tmp_461_936));
  memset(&_pgen_tmp_462_937, 0, sizeof(_pgen_tmp_462_937));
  memset(&_pgen_tmp_463_938, 0, sizeof(_pgen_tmp_463_938));
  memset(&_pgen_tmp_464_939, 0, sizeof(_pgen_tmp_464_939));
  memset(&_pgen_tmp_465_940, 0, sizeof(_pgen_tmp_465_940));
  memset(&_pgen_tmp_466_941, 0, sizeof(_pgen_tmp_466_941));
  memset(&_pgen_tmp_467_942, 0, sizeof(_pgen_tmp_467_942));
  memset(&_pgen_tmp_468_943, 0, sizeof(_pgen_tmp_468_943));
  memset(&_pgen_tmp_469_944, 0, sizeof(_pgen_tmp_469_944));
  memset(&_pgen_tmp_470_945, 0, sizeof(_pgen_tmp_470_945));
  memset(&_pgen_tmp_471_946, 0, sizeof(_pgen_tmp_471_946));
  memset(&_pgen_tmp_472_947, 0, sizeof(_pgen_tmp_472_947));
  memset(&_pgen_tmp_473_948, 0, sizeof(_pgen_tmp_473_948));
  memset(&_pgen_tmp_474_949, 0, sizeof(_pgen_tmp_474_949));
  memset(&_pgen_tmp_475_950, 0, sizeof(_pgen_tmp_475_950));
  memset(&_pgen_tmp_476_951, 0, sizeof(_pgen_tmp_476_951));
  memset(&_pgen_tmp_477_952, 0, sizeof(_pgen_tmp_477_952));
  memset(&_pgen_tmp_478_953, 0, sizeof(_pgen_tmp_478_953));
  memset(&_pgen_tmp_479_954, 0, sizeof(_pgen_tmp_479_954));
  memset(&_pgen_tmp_480_955, 0, sizeof(_pgen_tmp_480_955));
  memset(&_pgen_tmp_481_956, 0, sizeof(_pgen_tmp_481_956));
  memset(&_pgen_tmp_482_957, 0, sizeof(_pgen_tmp_482_957));
  memset(&_pgen_tmp_483_958, 0, sizeof(_pgen_tmp_483_958));
  memset(&_pgen_tmp_484_959, 0, sizeof(_pgen_tmp_484_959));
  memset(&_pgen_tmp_485_960, 0, sizeof(_pgen_tmp_485_960));
  memset(&_pgen_tmp_486_961, 0, sizeof(_pgen_tmp_486_961));
  memset(&_pgen_tmp_487_962, 0, sizeof(_pgen_tmp_487_962));
  memset(&_pgen_tmp_488_963, 0, sizeof(_pgen_tmp_488_963));
  memset(&_pgen_tmp_489_964, 0, sizeof(_pgen_tmp_489_964));
  memset(&_pgen_tmp_490_965, 0, sizeof(_pgen_tmp_490_965));
  memset(&_pgen_tmp_491_966, 0, sizeof(_pgen_tmp_491_966));
  memset(&_pgen_tmp_492_967, 0, sizeof(_pgen_tmp_492_967));
  memset(&_pgen_tmp_493_968, 0, sizeof(_pgen_tmp_493_968));
  memset(&_pgen_tmp_494_969, 0, sizeof(_pgen_tmp_494_969));
  memset(&_pgen_tmp_495_970, 0, sizeof(_pgen_tmp_495_970));
  memset(&_pgen_tmp_496_971, 0, sizeof(_pgen_tmp_496_971));
  memset(&_pgen_tmp_497_972, 0, sizeof(_pgen_tmp_497_972));
  memset(&_pgen_tmp_498_973, 0, sizeof(_pgen_tmp_498_973));
  memset(&_pgen_tmp_499_974, 0, sizeof(_pgen_tmp_499_974));
  memset(&_pgen_tmp_500_975, 0, sizeof(_pgen_tmp_500_975));
  memset(&_pgen_tmp_501_976, 0, sizeof(_pgen_tmp_501_976));
  memset(&_pgen_tmp_502_977, 0, sizeof(_pgen_tmp_502_977));
  memset(&_pgen_tmp_503_978, 0, sizeof(_pgen_tmp_503_978));
  memset(&_pgen_tmp_504_979, 0, sizeof(_pgen_tmp_504_979));
  memset(&_pgen_tmp_505_980, 0, sizeof(_pgen_tmp_505_980));
  memset(&_pgen_tmp_506_981, 0, sizeof(_pgen_tmp_506_981));
  memset(&_pgen_tmp_507_982, 0, sizeof(_pgen_tmp_507_982));
  memset(&_pgen_tmp_508_983, 0, sizeof(_pgen_tmp_508_983));
  memset(&_pgen_tmp_509_984, 0, sizeof(_pgen_tmp_509_984));
  memset(&_pgen_tmp_510_985, 0, sizeof(_pgen_tmp_510_985));
  memset(&_pgen_tmp_511_986, 0, sizeof(_pgen_tmp_511_986));
  memset(&_pgen_tmp_512_987, 0, sizeof(_pgen_tmp_512_987));
  memset(&_pgen_tmp_513_988, 0, sizeof(_pgen_tmp_513_988));
  memset(&_pgen_tmp_514_989, 0, sizeof(_pgen_tmp_514_989));
  memset(&_pgen_tmp_515_990, 0, sizeof(_pgen_tmp_515_990));
  memset(&_pgen_tmp_516_991, 0, sizeof(_pgen_tmp_516_991));
  memset(&_pgen_tmp_517_992, 0, sizeof(_pgen_tmp_517_992));
  memset(&_pgen_tmp_518_993, 0, sizeof(_pgen_tmp_518_993));
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
  // Conv_0
  // pragma: 65536, 1027, 33
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv1_1, 0, sizeof(VS_out_conv1_1));
  memset(&VS_out_conv_halo1_2, 0, sizeof(VS_out_conv_halo1_2));
  for (mesh_y_n1_3 = 0; mesh_y_n1_3 < 3; mesh_y_n1_3 = mesh_y_n1_3 + 1) {
    for (mesh_z_n1_4 = 0; mesh_z_n1_4 < 2; mesh_z_n1_4 = mesh_z_n1_4 + 1) {
      Copy_ciph(&_preg_268435456, &input_0[((mesh_y_n1_3 * 2) + mesh_z_n1_4)]);
      Copy_ciph(&input_dup_n20_5, &_preg_268435456);
      for (bs_input_n20_6 = 0; bs_input_n20_6 < 49; bs_input_n20_6 = bs_input_n20_6 + 1) {
        _preg_268435542 = Rotate(input_dup_n20_5, _cst_141[bs_input_n20_6]);
        Copy_ciph(&input_block_n20_7[bs_input_n20_6], &_preg_268435542);
        Free_poly_data(&_preg_268435542._c1_poly);
        Free_poly_data(&_preg_268435542._c0_poly);
      }
      for (mesh_x_n1_8 = 0; mesh_x_n1_8 < 64; mesh_x_n1_8 = mesh_x_n1_8 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=49
        Zero_ciph(&result_n21_9);
        for (num_grid_n21_10 = 0; num_grid_n21_10 < 1; num_grid_n21_10 = num_grid_n21_10 + 1) {
          Zero_ciph(&result_grid_n21_11);
          for (cap_block_n21_12 = 0; cap_block_n21_12 < 49; cap_block_n21_12 = cap_block_n21_12 + 1) {
            _ckks_gen_tmp_102_404 = input_block_n20_7[cap_block_n21_12];
            Pt_from_msg_ofst(&_pgen_tmp_0_475, 0/* cst_137 */, (((((mesh_x_n1_8 * 3) + mesh_y_n1_3) * 49) + (cap_block_n21_12 + (num_grid_n21_10 * 49)))) * (26432), 26432, 1, 4);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_1_476, &_ckks_gen_tmp_102_404, &_pgen_tmp_0_475);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n21_11, &result_grid_n21_11, &_pgen_tmp_1_476);
            _pgen_modulus_472 = Q_modulus();
            _pgen_num_q_473 = Poly_level(&result_grid_n21_11._c0_poly);
            for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_1_476._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_102_404._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_0_475._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_1_476._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_102_404._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_0_475._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n21_11._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n21_11._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_1_476._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n21_11._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n21_11._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_1_476._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              _pgen_modulus_472 = _pgen_modulus_472 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          _preg_268435543 = Rotate(result_grid_n21_11, num_grid_n21_10 * 26432);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n21_9, &result_n21_9, &_preg_268435543);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&result_n21_9._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modadd(Coeffs(&result_n21_9._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n21_9._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435543._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n21_9._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n21_9._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435543._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435543._c1_poly);
          Free_poly_data(&_preg_268435543._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_2_477, 1 /* cst_140 */, 26432, 2, 4);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n21_9, &result_n21_9, &_pgen_tmp_2_477);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&result_n21_9._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&result_n21_9._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n21_9._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_2_477._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Set_coeffs(&result_n21_9._c1_poly, _pgen_rns_idx_474, degree, Coeffs(&result_n21_9._c1_poly, _pgen_rns_idx_474, degree));
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_4_479 = VS_out_conv1_1[((mesh_x_n1_8 * 2) + mesh_z_n1_4)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_3_478, &_pgen_tmp_4_479, &result_n21_9);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&_pgen_tmp_3_478._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_3_478._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_4_479._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n21_9._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_3_478._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_4_479._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n21_9._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv1_1[((mesh_x_n1_8 * 2) + mesh_z_n1_4)], &_pgen_tmp_3_478);
      }
    }
  }
  Free_ciph_poly(input_0, 6);
  Free_poly_data(&_preg_268435456._c1_poly);
  Free_poly_data(&_preg_268435456._c0_poly);
  Free_poly_data(&input_dup_n20_5._c1_poly);
  Free_poly_data(&input_dup_n20_5._c0_poly);
  Free_ciph_poly(input_block_n20_7, 49);
  Free_poly_data(&_pgen_tmp_0_475._poly);
  Free_poly_data(&_pgen_tmp_1_476._c1_poly);
  Free_poly_data(&_pgen_tmp_1_476._c0_poly);
  Free_poly_data(&result_grid_n21_11._c1_poly);
  Free_poly_data(&result_grid_n21_11._c0_poly);
  Free_poly_data(&_pgen_tmp_2_477._poly);
  Free_poly_data(&result_n21_9._c1_poly);
  Free_poly_data(&result_n21_9._c0_poly);
  Free_poly_data(&_pgen_tmp_3_478._c1_poly);
  Free_poly_data(&_pgen_tmp_3_478._c0_poly);
  for (rescale_iv_447 = 0; rescale_iv_447 < 128; rescale_iv_447 = rescale_iv_447 + 1) {
    _pgen_tmp_5_480 = VS_out_conv1_1[rescale_iv_447];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_6_481, &_pgen_tmp_5_480);
    Rescale(&_pgen_tmp_6_481._c0_poly, &_pgen_tmp_5_480._c0_poly);
    Rescale(&_pgen_tmp_6_481._c1_poly, &_pgen_tmp_5_480._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv1_1[rescale_iv_447], &_pgen_tmp_6_481);
  }
  Free_poly_data(&_pgen_tmp_6_481._c1_poly);
  Free_poly_data(&_pgen_tmp_6_481._c0_poly);
  for (siv_n1_13 = 0; siv_n1_13 < 128; siv_n1_13 = siv_n1_13 + 1) {
    _pgen_tmp_7_482 = VS_out_conv1_1[siv_n1_13];
    _preg_268435544 = Rotate(_pgen_tmp_7_482, 672);
    Copy_ciph(&x_row21_14, &_preg_268435544);
    Zero_ciph(&comb_row_result22_15);
    for (comb_row_lf_index_n22_16 = 0; comb_row_lf_index_n22_16 < 1; comb_row_lf_index_n22_16 = comb_row_lf_index_n22_16 + 1) {
      _preg_268435545 = Rotate(x_row21_14, 1 << comb_row_lf_index_n22_16);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&x_row21_14, &x_row21_14, &_preg_268435545);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&x_row21_14._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&x_row21_14._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&x_row21_14._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435545._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&x_row21_14._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&x_row21_14._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435545._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435545._c1_poly);
      Free_poly_data(&_preg_268435545._c0_poly);
    }
    for (comb_row_index_n22_17 = 0; comb_row_index_n22_17 < 56; comb_row_index_n22_17 = comb_row_index_n22_17 + 1) {
      _preg_268435546 = Rotate(x_row21_14, comb_row_index_n22_17 * 2);
      Copy_ciph(&_ckks_gen_tmp_221_405, &_preg_268435546);
      Pt_from_msg_ofst(&_pgen_tmp_8_483, 2/* cst_142 */, (comb_row_index_n22_17) * (25088), 25088, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_9_484, &_ckks_gen_tmp_221_405, &_pgen_tmp_8_483);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_row_result22_15, &comb_row_result22_15, &_pgen_tmp_9_484);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&comb_row_result22_15._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_9_484._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_221_405._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_8_483._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_9_484._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_221_405._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_8_483._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_row_result22_15._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result22_15._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_9_484._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_row_result22_15._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result22_15._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_9_484._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435546._c1_poly);
      Free_poly_data(&_preg_268435546._c0_poly);
    }
    Zero_ciph(&comb_rc_result22_18);
    for (comb_rc_lf_index_n22_19 = 0; comb_rc_lf_index_n22_19 < 2; comb_rc_lf_index_n22_19 = comb_rc_lf_index_n22_19 + 1) {
      _preg_268435547 = Rotate(comb_row_result22_15, (1 << comb_rc_lf_index_n22_19) * 336);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_row_result22_15, &comb_row_result22_15, &_preg_268435547);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&comb_row_result22_15._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&comb_row_result22_15._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result22_15._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435547._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_row_result22_15._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result22_15._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435547._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435547._c1_poly);
      Free_poly_data(&_preg_268435547._c0_poly);
    }
    for (comb_rc_index_n22_20 = 0; comb_rc_index_n22_20 < 14; comb_rc_index_n22_20 = comb_rc_index_n22_20 + 1) {
      _preg_268435548 = Rotate(comb_row_result22_15, comb_rc_index_n22_20 * 1344);
      Copy_ciph(&_ckks_gen_tmp_274_406, &_preg_268435548);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_10_485, &_ckks_gen_tmp_274_406);
      Rescale(&_pgen_tmp_10_485._c0_poly, &_ckks_gen_tmp_274_406._c0_poly);
      Rescale(&_pgen_tmp_10_485._c1_poly, &_ckks_gen_tmp_274_406._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg_ofst(&_pgen_tmp_11_486, 3/* cst_143 */, (comb_rc_index_n22_20) * (25088), 25088, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_12_487, &_pgen_tmp_10_485, &_pgen_tmp_11_486);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_rc_result22_18, &comb_rc_result22_18, &_pgen_tmp_12_487);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&comb_rc_result22_18._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_12_487._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_10_485._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_11_486._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_12_487._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_10_485._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_11_486._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_rc_result22_18._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_rc_result22_18._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_12_487._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_rc_result22_18._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_rc_result22_18._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_12_487._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435548._c1_poly);
      Free_poly_data(&_preg_268435548._c0_poly);
    }
    Copy_ciph(&VS_out_conv_halo1_2[siv_n1_13], &comb_rc_result22_18);
    Free_poly_data(&_preg_268435544._c1_poly);
    Free_poly_data(&_preg_268435544._c0_poly);
  }
  Free_ciph_poly(VS_out_conv1_1, 128);
  Free_poly_data(&x_row21_14._c1_poly);
  Free_poly_data(&x_row21_14._c0_poly);
  Free_poly_data(&_pgen_tmp_8_483._poly);
  Free_poly_data(&_ckks_gen_tmp_221_405._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_221_405._c0_poly);
  Free_poly_data(&_pgen_tmp_9_484._c1_poly);
  Free_poly_data(&_pgen_tmp_9_484._c0_poly);
  Free_poly_data(&comb_row_result22_15._c1_poly);
  Free_poly_data(&comb_row_result22_15._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_274_406._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_274_406._c0_poly);
  Free_poly_data(&_pgen_tmp_11_486._poly);
  Free_poly_data(&_pgen_tmp_10_485._c1_poly);
  Free_poly_data(&_pgen_tmp_10_485._c0_poly);
  Free_poly_data(&_pgen_tmp_12_487._c1_poly);
  Free_poly_data(&_pgen_tmp_12_487._c0_poly);
  Free_poly_data(&comb_rc_result22_18._c1_poly);
  Free_poly_data(&comb_rc_result22_18._c0_poly);
  for (rescale_iv_448 = 0; rescale_iv_448 < 128; rescale_iv_448 = rescale_iv_448 + 1) {
    _pgen_tmp_13_488 = VS_out_conv_halo1_2[rescale_iv_448];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_14_489, &_pgen_tmp_13_488);
    Rescale(&_pgen_tmp_14_489._c0_poly, &_pgen_tmp_13_488._c0_poly);
    Rescale(&_pgen_tmp_14_489._c1_poly, &_pgen_tmp_13_488._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv_halo1_2[rescale_iv_448], &_pgen_tmp_14_489);
  }
  Free_poly_data(&_pgen_tmp_14_489._c1_poly);
  Free_poly_data(&_pgen_tmp_14_489._c0_poly);
  for (reshardm_n1_21 = 0; reshardm_n1_21 < 32; reshardm_n1_21 = reshardm_n1_21 + 1) {
    _pgen_tmp_16_491 = VS_out_conv_halo1_2[(reshardm_n1_21 * 4)];
    _pgen_tmp_17_492 = VS_out_conv_halo1_2[((reshardm_n1_21 * 4) + 1)];
    _preg_268435549 = Rotate(_pgen_tmp_17_492, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_18_493, &_pgen_tmp_16_491, &_preg_268435549);
    CMPLR_TM_END(12, 0);
    _pgen_tmp_20_495 = VS_out_conv_halo1_2[((reshardm_n1_21 * 4) + 2)];
    _pgen_tmp_21_496 = VS_out_conv_halo1_2[((reshardm_n1_21 * 4) + 3)];
    _preg_268435550 = Rotate(_pgen_tmp_21_496, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_19_494, &_pgen_tmp_20_495, &_preg_268435550);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&_pgen_tmp_19_494._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_19_494._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_20_495._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435550._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_19_494._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_20_495._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435550._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    _preg_268435551 = Rotate(_pgen_tmp_19_494, -12544);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_15_490, &_pgen_tmp_18_493, &_preg_268435551);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&_pgen_tmp_15_490._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_18_493._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_16_491._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435549._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_18_493._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_16_491._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435549._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_15_490._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_18_493._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435551._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_15_490._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_18_493._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435551._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    Copy_ciph(&output_reshard1_22[reshardm_n1_21], &_pgen_tmp_15_490);
    Free_poly_data(&_preg_268435549._c1_poly);
    Free_poly_data(&_preg_268435549._c0_poly);
    Free_poly_data(&_preg_268435550._c1_poly);
    Free_poly_data(&_preg_268435550._c0_poly);
    Free_poly_data(&_preg_268435551._c1_poly);
    Free_poly_data(&_preg_268435551._c0_poly);
  }
  Free_ciph_poly(VS_out_conv_halo1_2, 128);
  Free_poly_data(&_pgen_tmp_19_494._c1_poly);
  Free_poly_data(&_pgen_tmp_19_494._c0_poly);
  Free_poly_data(&_pgen_tmp_18_493._c1_poly);
  Free_poly_data(&_pgen_tmp_18_493._c0_poly);
  Free_poly_data(&_pgen_tmp_15_490._c1_poly);
  Free_poly_data(&_pgen_tmp_15_490._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 33
  // Relu_1
  // pragma: 65536, 1033, 39
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu1_23, 0, sizeof(VS_out_relu1_23));
  for (mesh_y_n1_24 = 0; mesh_y_n1_24 < 32; mesh_y_n1_24 = mesh_y_n1_24 + 1) {
    for (mesh_z_n1_25 = 0; mesh_z_n1_25 < 1; mesh_z_n1_25 = mesh_z_n1_25 + 1) {
      _pgen_tmp_22_497 = output_reshard1_22[((mesh_y_n1_24 * 1) + mesh_z_n1_25)];
      Bootstrap(&_preg_268435457, &_pgen_tmp_22_497, 19);
      Encode_float(&_pgen_tmp_23_498, &_cst_350, 1, 1, Level(&_preg_268435457));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435459, &_preg_268435457, &_pgen_tmp_23_498);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_preg_268435459._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_preg_268435459._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435457._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_23_498._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_preg_268435459._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435457._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_23_498._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_24_499, &_preg_268435459);
      Rescale(&_pgen_tmp_24_499._c0_poly, &_preg_268435459._c0_poly);
      Rescale(&_pgen_tmp_24_499._c1_poly, &_preg_268435459._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435458 = App_relu(_preg_268435457, _pgen_tmp_24_499, 25088);
      _pgen_tmp_26_501 = VS_out_relu1_23[((mesh_y_n1_24 * 1) + mesh_z_n1_25)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_25_500, &_pgen_tmp_26_501, &_preg_268435458);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_pgen_tmp_25_500._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_25_500._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_26_501._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435458._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_25_500._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_26_501._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435458._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu1_23[((mesh_y_n1_24 * 1) + mesh_z_n1_25)], &_pgen_tmp_25_500);
    }
  }
  Free_ciph_poly(output_reshard1_22, 32);
  Free_poly_data(&_pgen_tmp_23_498._poly);
  Free_poly_data(&_preg_268435459._c1_poly);
  Free_poly_data(&_preg_268435459._c0_poly);
  Free_poly_data(&_pgen_tmp_24_499._c1_poly);
  Free_poly_data(&_pgen_tmp_24_499._c0_poly);
  Free_poly_data(&_preg_268435457._c1_poly);
  Free_poly_data(&_preg_268435457._c0_poly);
  Free_poly_data(&_preg_268435458._c1_poly);
  Free_poly_data(&_preg_268435458._c0_poly);
  Free_poly_data(&_pgen_tmp_25_500._c1_poly);
  Free_poly_data(&_pgen_tmp_25_500._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 39
  // AveragePool_3
  // pragma: 65536, 1026, 40
  CMPLR_TM_START(3, 0);
  memset(&VS_out_avp1_26, 0, sizeof(VS_out_avp1_26));
  for (mesh_y_n1_27 = 0; mesh_y_n1_27 < 32; mesh_y_n1_27 = mesh_y_n1_27 + 1) {
    for (mesh_z_n1_28 = 0; mesh_z_n1_28 < 1; mesh_z_n1_28 = mesh_z_n1_28 + 1) {
      Copy_ciph(&_preg_268435460, &VS_out_relu1_23[((mesh_y_n1_27 * 1) + mesh_z_n1_28)]);
      // BlockingRot replicate=1
      Copy_ciph(&input_dup_n22_29, &_preg_268435460);
      // BlockingRot HRot=bs=9
      for (bs_input_n22_30 = 0; bs_input_n22_30 < 9; bs_input_n22_30 = bs_input_n22_30 + 1) {
        _preg_268435552 = Rotate(input_dup_n22_29, _cst_147[bs_input_n22_30]);
        Copy_ciph(&input_block_n22_31[bs_input_n22_30], &_preg_268435552);
        Free_poly_data(&_preg_268435552._c1_poly);
        Free_poly_data(&_preg_268435552._c0_poly);
      }
      Zero_ciph(&result_n23_32);
      for (num_grid_n23_33 = 0; num_grid_n23_33 < 1; num_grid_n23_33 = num_grid_n23_33 + 1) {
        Zero_ciph(&result_grid_n23_34);
        for (cap_block_n23_35 = 0; cap_block_n23_35 < 9; cap_block_n23_35 = cap_block_n23_35 + 1) {
          _ckks_gen_tmp_504_407 = input_block_n22_31[cap_block_n23_35];
          Pt_from_msg_ofst(&_pgen_tmp_27_502, 4/* cst_145 */, ((cap_block_n23_35 + (num_grid_n23_33 * 9))) * (25088), 25088, 1, 7);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_28_503, &_ckks_gen_tmp_504_407, &_pgen_tmp_27_502);
          CMPLR_TM_END(17, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_grid_n23_34, &result_grid_n23_34, &_pgen_tmp_28_503);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&result_grid_n23_34._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_28_503._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_504_407._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_27_502._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_28_503._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_504_407._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_27_502._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_grid_n23_34._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n23_34._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_28_503._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_grid_n23_34._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n23_34._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_28_503._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(12, 0);
        }
        _preg_268435553 = Rotate(result_grid_n23_34, num_grid_n23_33 * 12544);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&result_n23_32, &result_n23_32, &_preg_268435553);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&result_n23_32._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&result_n23_32._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n23_32._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435553._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&result_n23_32._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n23_32._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435553._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435553._c1_poly);
        Free_poly_data(&_preg_268435553._c0_poly);
      }
      Pt_from_msg(&_pgen_tmp_29_504, 5 /* cst_146 */, 25088, 2, 7);
      CMPLR_TM_START(13, 0);
      Init_ciph_same_scale_plain(&result_n23_32, &result_n23_32, &_pgen_tmp_29_504);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&result_n23_32._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&result_n23_32._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n23_32._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_29_504._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Set_coeffs(&result_n23_32._c1_poly, _pgen_rns_idx_474, degree, Coeffs(&result_n23_32._c1_poly, _pgen_rns_idx_474, degree));
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(13, 0);
      Copy_ciph(&_preg_268435461, &result_n23_32);
      Copy_ciph(&orig_result23_36, &_preg_268435461);
      Zero_ciph(&comb_row_result24_37);
      for (comb_row_lf_index_n24_38 = 0; comb_row_lf_index_n24_38 < 1; comb_row_lf_index_n24_38 = comb_row_lf_index_n24_38 + 1) {
        _preg_268435554 = Rotate(orig_result23_36, 1 << comb_row_lf_index_n24_38);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&orig_result23_36, &orig_result23_36, &_preg_268435554);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&orig_result23_36._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&orig_result23_36._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&orig_result23_36._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435554._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&orig_result23_36._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&orig_result23_36._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435554._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435554._c1_poly);
        Free_poly_data(&_preg_268435554._c0_poly);
      }
      for (comb_row_index_n24_39 = 0; comb_row_index_n24_39 < 28; comb_row_index_n24_39 = comb_row_index_n24_39 + 1) {
        _preg_268435555 = Rotate(orig_result23_36, comb_row_index_n24_39 * 2);
        Copy_ciph(&_ckks_gen_tmp_584_408, &_preg_268435555);
        CMPLR_TM_START(19, 0);
        Init_ciph_down_scale(&_pgen_tmp_30_505, &_ckks_gen_tmp_584_408);
        Rescale(&_pgen_tmp_30_505._c0_poly, &_ckks_gen_tmp_584_408._c0_poly);
        Rescale(&_pgen_tmp_30_505._c1_poly, &_ckks_gen_tmp_584_408._c1_poly);
        CMPLR_TM_END(19, 0);
        Pt_from_msg_ofst(&_pgen_tmp_31_506, 6/* cst_148 */, (comb_row_index_n24_39) * (25088), 25088, 1, 6);
        CMPLR_TM_START(17, 0);
        Init_ciph_up_scale_plain(&_pgen_tmp_32_507, &_pgen_tmp_30_505, &_pgen_tmp_31_506);
        CMPLR_TM_END(17, 0);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_row_result24_37, &comb_row_result24_37, &_pgen_tmp_32_507);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&comb_row_result24_37._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modmul(Coeffs(&_pgen_tmp_32_507._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_30_505._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_31_506._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modmul(Coeffs(&_pgen_tmp_32_507._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_30_505._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_31_506._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&comb_row_result24_37._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result24_37._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_32_507._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&comb_row_result24_37._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result24_37._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_32_507._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435555._c1_poly);
        Free_poly_data(&_preg_268435555._c0_poly);
      }
      Zero_ciph(&comb_rc_result24_40);
      for (comb_rc_lf_index_n24_41 = 0; comb_rc_lf_index_n24_41 < 2; comb_rc_lf_index_n24_41 = comb_rc_lf_index_n24_41 + 1) {
        _preg_268435556 = Rotate(comb_row_result24_37, (1 << comb_rc_lf_index_n24_41) * 168);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_row_result24_37, &comb_row_result24_37, &_preg_268435556);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&comb_row_result24_37._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&comb_row_result24_37._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result24_37._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435556._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&comb_row_result24_37._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result24_37._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435556._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435556._c1_poly);
        Free_poly_data(&_preg_268435556._c0_poly);
      }
      for (comb_rc_index_n24_42 = 0; comb_rc_index_n24_42 < 14; comb_rc_index_n24_42 = comb_rc_index_n24_42 + 1) {
        _preg_268435557 = Rotate(comb_row_result24_37, comb_rc_index_n24_42 * 672);
        Copy_ciph(&_ckks_gen_tmp_637_409, &_preg_268435557);
        CMPLR_TM_START(19, 0);
        Init_ciph_down_scale(&_pgen_tmp_33_508, &_ckks_gen_tmp_637_409);
        Rescale(&_pgen_tmp_33_508._c0_poly, &_ckks_gen_tmp_637_409._c0_poly);
        Rescale(&_pgen_tmp_33_508._c1_poly, &_ckks_gen_tmp_637_409._c1_poly);
        CMPLR_TM_END(19, 0);
        Pt_from_msg_ofst(&_pgen_tmp_34_509, 7/* cst_149 */, (comb_rc_index_n24_42) * (25088), 25088, 1, 5);
        CMPLR_TM_START(17, 0);
        Init_ciph_up_scale_plain(&_pgen_tmp_35_510, &_pgen_tmp_33_508, &_pgen_tmp_34_509);
        CMPLR_TM_END(17, 0);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_rc_result24_40, &comb_rc_result24_40, &_pgen_tmp_35_510);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&comb_rc_result24_40._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modmul(Coeffs(&_pgen_tmp_35_510._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_33_508._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_34_509._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modmul(Coeffs(&_pgen_tmp_35_510._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_33_508._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_34_509._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&comb_rc_result24_40._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_rc_result24_40._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_35_510._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&comb_rc_result24_40._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_rc_result24_40._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_35_510._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435557._c1_poly);
        Free_poly_data(&_preg_268435557._c0_poly);
      }
      Zero_ciph(&ss_result24_43);
      for (comb_cc_index_n24_44 = 0; comb_cc_index_n24_44 < 1; comb_cc_index_n24_44 = comb_cc_index_n24_44 + 1) {
        _preg_268435558 = Rotate(comb_rc_result24_40, (1 << comb_cc_index_n24_44) * 9408);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_rc_result24_40, &comb_rc_result24_40, &_preg_268435558);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&comb_rc_result24_40._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&comb_rc_result24_40._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_rc_result24_40._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435558._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&comb_rc_result24_40._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_rc_result24_40._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435558._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435558._c1_poly);
        Free_poly_data(&_preg_268435558._c0_poly);
      }
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_36_511, &comb_rc_result24_40);
      Rescale(&_pgen_tmp_36_511._c0_poly, &comb_rc_result24_40._c0_poly);
      Rescale(&_pgen_tmp_36_511._c1_poly, &comb_rc_result24_40._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg(&_pgen_tmp_37_512, 8 /* cst_150 */, 6272, 1, 4);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&comb_rc_result24_40, &_pgen_tmp_36_511, &_pgen_tmp_37_512);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&comb_rc_result24_40._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&comb_rc_result24_40._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_36_511._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_37_512._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&comb_rc_result24_40._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_36_511._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_37_512._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(17, 0);
      Copy_ciph(&ss_result24_43, &comb_rc_result24_40);
      Copy_ciph(&VS_out_avp1_26[((mesh_y_n1_27 * 1) + mesh_z_n1_28)], &ss_result24_43);
    }
  }
  Free_ciph_poly(VS_out_relu1_23, 32);
  Free_poly_data(&_preg_268435460._c1_poly);
  Free_poly_data(&_preg_268435460._c0_poly);
  Free_poly_data(&input_dup_n22_29._c1_poly);
  Free_poly_data(&input_dup_n22_29._c0_poly);
  Free_ciph_poly(input_block_n22_31, 9);
  Free_poly_data(&_pgen_tmp_27_502._poly);
  Free_poly_data(&_pgen_tmp_28_503._c1_poly);
  Free_poly_data(&_pgen_tmp_28_503._c0_poly);
  Free_poly_data(&result_grid_n23_34._c1_poly);
  Free_poly_data(&result_grid_n23_34._c0_poly);
  Free_poly_data(&_pgen_tmp_29_504._poly);
  Free_poly_data(&result_n23_32._c1_poly);
  Free_poly_data(&result_n23_32._c0_poly);
  Free_poly_data(&_preg_268435461._c1_poly);
  Free_poly_data(&_preg_268435461._c0_poly);
  Free_poly_data(&orig_result23_36._c1_poly);
  Free_poly_data(&orig_result23_36._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_584_408._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_584_408._c0_poly);
  Free_poly_data(&_pgen_tmp_31_506._poly);
  Free_poly_data(&_pgen_tmp_30_505._c1_poly);
  Free_poly_data(&_pgen_tmp_30_505._c0_poly);
  Free_poly_data(&_pgen_tmp_32_507._c1_poly);
  Free_poly_data(&_pgen_tmp_32_507._c0_poly);
  Free_poly_data(&comb_row_result24_37._c1_poly);
  Free_poly_data(&comb_row_result24_37._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_637_409._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_637_409._c0_poly);
  Free_poly_data(&_pgen_tmp_34_509._poly);
  Free_poly_data(&_pgen_tmp_33_508._c1_poly);
  Free_poly_data(&_pgen_tmp_33_508._c0_poly);
  Free_poly_data(&_pgen_tmp_35_510._c1_poly);
  Free_poly_data(&_pgen_tmp_35_510._c0_poly);
  Free_poly_data(&_pgen_tmp_37_512._poly);
  Free_poly_data(&_pgen_tmp_36_511._c1_poly);
  Free_poly_data(&_pgen_tmp_36_511._c0_poly);
  Free_poly_data(&comb_rc_result24_40._c1_poly);
  Free_poly_data(&comb_rc_result24_40._c0_poly);
  Free_poly_data(&ss_result24_43._c1_poly);
  Free_poly_data(&ss_result24_43._c0_poly);
  for (rescale_iv_449 = 0; rescale_iv_449 < 32; rescale_iv_449 = rescale_iv_449 + 1) {
    _pgen_tmp_38_513 = VS_out_avp1_26[rescale_iv_449];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_39_514, &_pgen_tmp_38_513);
    Rescale(&_pgen_tmp_39_514._c0_poly, &_pgen_tmp_38_513._c0_poly);
    Rescale(&_pgen_tmp_39_514._c1_poly, &_pgen_tmp_38_513._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_avp1_26[rescale_iv_449], &_pgen_tmp_39_514);
  }
  Free_poly_data(&_pgen_tmp_39_514._c1_poly);
  Free_poly_data(&_pgen_tmp_39_514._c0_poly);
  for (reshardm_n1_45 = 0; reshardm_n1_45 < 8; reshardm_n1_45 = reshardm_n1_45 + 1) {
    _pgen_tmp_41_516 = VS_out_avp1_26[(reshardm_n1_45 * 4)];
    _pgen_tmp_42_517 = VS_out_avp1_26[((reshardm_n1_45 * 4) + 1)];
    _preg_268435559 = Rotate(_pgen_tmp_42_517, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_43_518, &_pgen_tmp_41_516, &_preg_268435559);
    CMPLR_TM_END(12, 0);
    _pgen_tmp_45_520 = VS_out_avp1_26[((reshardm_n1_45 * 4) + 2)];
    _pgen_tmp_46_521 = VS_out_avp1_26[((reshardm_n1_45 * 4) + 3)];
    _preg_268435560 = Rotate(_pgen_tmp_46_521, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_44_519, &_pgen_tmp_45_520, &_preg_268435560);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&_pgen_tmp_44_519._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_44_519._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_45_520._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435560._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_44_519._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_45_520._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435560._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    _preg_268435561 = Rotate(_pgen_tmp_44_519, -12544);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_40_515, &_pgen_tmp_43_518, &_preg_268435561);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&_pgen_tmp_40_515._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_43_518._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_41_516._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435559._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_43_518._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_41_516._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435559._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_40_515._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_43_518._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435561._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_40_515._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_43_518._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435561._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    Copy_ciph(&output_reshard1_46[reshardm_n1_45], &_pgen_tmp_40_515);
    Free_poly_data(&_preg_268435559._c1_poly);
    Free_poly_data(&_preg_268435559._c0_poly);
    Free_poly_data(&_preg_268435560._c1_poly);
    Free_poly_data(&_preg_268435560._c0_poly);
    Free_poly_data(&_preg_268435561._c1_poly);
    Free_poly_data(&_preg_268435561._c0_poly);
  }
  Free_ciph_poly(VS_out_avp1_26, 32);
  Free_poly_data(&_pgen_tmp_44_519._c1_poly);
  Free_poly_data(&_pgen_tmp_44_519._c0_poly);
  Free_poly_data(&_pgen_tmp_43_518._c1_poly);
  Free_poly_data(&_pgen_tmp_43_518._c0_poly);
  Free_poly_data(&_pgen_tmp_40_515._c1_poly);
  Free_poly_data(&_pgen_tmp_40_515._c0_poly);
  CMPLR_TM_END(3, 0);
  // pragma: 65537, 1026, 40
  // Conv_4
  // pragma: 65536, 1027, 42
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv2_47, 0, sizeof(VS_out_conv2_47));
  memset(&VS_out_conv_halo2_48, 0, sizeof(VS_out_conv_halo2_48));
  Free_ciph_poly(VS_out_conv_halo2_48, 8);
  for (mesh_y_n2_49 = 0; mesh_y_n2_49 < 8; mesh_y_n2_49 = mesh_y_n2_49 + 1) {
    for (mesh_z_n2_50 = 0; mesh_z_n2_50 < 1; mesh_z_n2_50 = mesh_z_n2_50 + 1) {
      Copy_ciph(&_preg_268435462, &output_reshard1_46[((mesh_y_n2_49 * 1) + mesh_z_n2_50)]);
      Copy_ciph(&input_dup_n24_51, &_preg_268435462);
      for (bs_input_n24_52 = 0; bs_input_n24_52 < 9; bs_input_n24_52 = bs_input_n24_52 + 1) {
        _preg_268435562 = Rotate(input_dup_n24_51, _cst_155[bs_input_n24_52]);
        Copy_ciph(&input_block_n24_53[bs_input_n24_52], &_preg_268435562);
        Free_poly_data(&_preg_268435562._c1_poly);
        Free_poly_data(&_preg_268435562._c0_poly);
      }
      for (mesh_x_n2_54 = 0; mesh_x_n2_54 < 8; mesh_x_n2_54 = mesh_x_n2_54 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=9
        Zero_ciph(&result_n25_55);
        for (num_grid_n25_56 = 0; num_grid_n25_56 < 8; num_grid_n25_56 = num_grid_n25_56 + 1) {
          Zero_ciph(&result_grid_n25_57);
          for (cap_block_n25_58 = 0; cap_block_n25_58 < 9; cap_block_n25_58 = cap_block_n25_58 + 1) {
            _ckks_gen_tmp_850_410 = input_block_n24_53[cap_block_n25_58];
            Pt_from_msg_ofst(&_pgen_tmp_47_522, 9/* cst_151 */, (((((mesh_x_n2_54 * 8) + mesh_y_n2_49) * 72) + (cap_block_n25_58 + (num_grid_n25_56 * 9)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_48_523, &_ckks_gen_tmp_850_410, &_pgen_tmp_47_522);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n25_57, &result_grid_n25_57, &_pgen_tmp_48_523);
            _pgen_modulus_472 = Q_modulus();
            _pgen_num_q_473 = Poly_level(&result_grid_n25_57._c0_poly);
            for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_48_523._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_850_410._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_47_522._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_48_523._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_850_410._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_47_522._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n25_57._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n25_57._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_48_523._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n25_57._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n25_57._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_48_523._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              _pgen_modulus_472 = _pgen_modulus_472 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_50_525, &result_grid_n25_57);
          Rescale(&_pgen_tmp_50_525._c0_poly, &result_grid_n25_57._c0_poly);
          Rescale(&_pgen_tmp_50_525._c1_poly, &result_grid_n25_57._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_51_526, 10/* cst_156 */, (num_grid_n25_56) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_49_524, &_pgen_tmp_50_525, &_pgen_tmp_51_526);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_49_524._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_49_524._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_50_525._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_51_526._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_49_524._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_50_525._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_51_526._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435563 = Rotate(_pgen_tmp_49_524, -25088 + (num_grid_n25_56 * 3136));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_53_528, &result_grid_n25_57);
          Rescale(&_pgen_tmp_53_528._c0_poly, &result_grid_n25_57._c0_poly);
          Rescale(&_pgen_tmp_53_528._c1_poly, &result_grid_n25_57._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_54_529, 11/* cst_157 */, (num_grid_n25_56) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_52_527, &_pgen_tmp_53_528, &_pgen_tmp_54_529);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_52_527._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_52_527._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_53_528._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_54_529._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_52_527._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_53_528._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_54_529._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435564 = Rotate(_pgen_tmp_52_527, num_grid_n25_56 * 3136);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_55_530, &_preg_268435563, &_preg_268435564);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n25_55, &result_n25_55, &_pgen_tmp_55_530);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&result_n25_55._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_55_530._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435563._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435564._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_55_530._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435563._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435564._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n25_55._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n25_55._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_55_530._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n25_55._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n25_55._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_55_530._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435563._c1_poly);
          Free_poly_data(&_preg_268435563._c0_poly);
          Free_poly_data(&_preg_268435564._c1_poly);
          Free_poly_data(&_preg_268435564._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_56_531, 12 /* cst_154 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n25_55, &result_n25_55, &_pgen_tmp_56_531);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&result_n25_55._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&result_n25_55._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n25_55._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_56_531._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Set_coeffs(&result_n25_55._c1_poly, _pgen_rns_idx_474, degree, Coeffs(&result_n25_55._c1_poly, _pgen_rns_idx_474, degree));
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_58_533 = VS_out_conv2_47[((mesh_x_n2_54 * 1) + mesh_z_n2_50)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_57_532, &_pgen_tmp_58_533, &result_n25_55);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&_pgen_tmp_57_532._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_57_532._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_58_533._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n25_55._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_57_532._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_58_533._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n25_55._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv2_47[((mesh_x_n2_54 * 1) + mesh_z_n2_50)], &_pgen_tmp_57_532);
      }
    }
  }
  Free_poly_data(&_preg_268435462._c1_poly);
  Free_poly_data(&_preg_268435462._c0_poly);
  Free_poly_data(&input_dup_n24_51._c1_poly);
  Free_poly_data(&input_dup_n24_51._c0_poly);
  Free_ciph_poly(input_block_n24_53, 9);
  Free_poly_data(&_pgen_tmp_47_522._poly);
  Free_poly_data(&_pgen_tmp_48_523._c1_poly);
  Free_poly_data(&_pgen_tmp_48_523._c0_poly);
  Free_poly_data(&_pgen_tmp_51_526._poly);
  Free_poly_data(&_pgen_tmp_50_525._c1_poly);
  Free_poly_data(&_pgen_tmp_50_525._c0_poly);
  Free_poly_data(&_pgen_tmp_49_524._c1_poly);
  Free_poly_data(&_pgen_tmp_49_524._c0_poly);
  Free_poly_data(&result_grid_n25_57._c1_poly);
  Free_poly_data(&result_grid_n25_57._c0_poly);
  Free_poly_data(&_pgen_tmp_54_529._poly);
  Free_poly_data(&_pgen_tmp_53_528._c1_poly);
  Free_poly_data(&_pgen_tmp_53_528._c0_poly);
  Free_poly_data(&_pgen_tmp_52_527._c1_poly);
  Free_poly_data(&_pgen_tmp_52_527._c0_poly);
  Free_poly_data(&_pgen_tmp_55_530._c1_poly);
  Free_poly_data(&_pgen_tmp_55_530._c0_poly);
  Free_poly_data(&_pgen_tmp_56_531._poly);
  Free_poly_data(&result_n25_55._c1_poly);
  Free_poly_data(&result_n25_55._c0_poly);
  Free_poly_data(&_pgen_tmp_57_532._c1_poly);
  Free_poly_data(&_pgen_tmp_57_532._c0_poly);
  for (rescale_iv_450 = 0; rescale_iv_450 < 8; rescale_iv_450 = rescale_iv_450 + 1) {
    _pgen_tmp_59_534 = VS_out_conv2_47[rescale_iv_450];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_60_535, &_pgen_tmp_59_534);
    Rescale(&_pgen_tmp_60_535._c0_poly, &_pgen_tmp_59_534._c0_poly);
    Rescale(&_pgen_tmp_60_535._c1_poly, &_pgen_tmp_59_534._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv2_47[rescale_iv_450], &_pgen_tmp_60_535);
  }
  Free_poly_data(&_pgen_tmp_60_535._c1_poly);
  Free_poly_data(&_pgen_tmp_60_535._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 42
  // Relu_5
  // pragma: 65536, 1033, 43
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu2_59, 0, sizeof(VS_out_relu2_59));
  for (mesh_y_n2_60 = 0; mesh_y_n2_60 < 8; mesh_y_n2_60 = mesh_y_n2_60 + 1) {
    for (mesh_z_n2_61 = 0; mesh_z_n2_61 < 1; mesh_z_n2_61 = mesh_z_n2_61 + 1) {
      _pgen_tmp_61_536 = VS_out_conv2_47[((mesh_y_n2_60 * 1) + mesh_z_n2_61)];
      Bootstrap(&_preg_268435463, &_pgen_tmp_61_536, 15);
      Encode_float(&_pgen_tmp_62_537, &_cst_351, 1, 1, Level(&_preg_268435463));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435465, &_preg_268435463, &_pgen_tmp_62_537);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_preg_268435465._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_preg_268435465._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435463._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_62_537._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_preg_268435465._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435463._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_62_537._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_63_538, &_preg_268435465);
      Rescale(&_pgen_tmp_63_538._c0_poly, &_preg_268435465._c0_poly);
      Rescale(&_pgen_tmp_63_538._c1_poly, &_preg_268435465._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435464 = App_relu(_preg_268435463, _pgen_tmp_63_538, 25088);
      _pgen_tmp_65_540 = VS_out_relu2_59[((mesh_y_n2_60 * 1) + mesh_z_n2_61)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_64_539, &_pgen_tmp_65_540, &_preg_268435464);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_pgen_tmp_64_539._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_64_539._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_65_540._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435464._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_64_539._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_65_540._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435464._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu2_59[((mesh_y_n2_60 * 1) + mesh_z_n2_61)], &_pgen_tmp_64_539);
    }
  }
  Free_ciph_poly(VS_out_conv2_47, 8);
  Free_poly_data(&_pgen_tmp_62_537._poly);
  Free_poly_data(&_preg_268435465._c1_poly);
  Free_poly_data(&_preg_268435465._c0_poly);
  Free_poly_data(&_pgen_tmp_63_538._c1_poly);
  Free_poly_data(&_pgen_tmp_63_538._c0_poly);
  Free_poly_data(&_preg_268435463._c1_poly);
  Free_poly_data(&_preg_268435463._c0_poly);
  Free_poly_data(&_preg_268435464._c1_poly);
  Free_poly_data(&_preg_268435464._c0_poly);
  Free_poly_data(&_pgen_tmp_64_539._c1_poly);
  Free_poly_data(&_pgen_tmp_64_539._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 43
  // Conv_6
  // pragma: 65536, 1027, 44
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv3_62, 0, sizeof(VS_out_conv3_62));
  memset(&VS_out_conv_halo3_63, 0, sizeof(VS_out_conv_halo3_63));
  Free_ciph_poly(VS_out_conv_halo3_63, 8);
  for (mesh_y_n3_64 = 0; mesh_y_n3_64 < 8; mesh_y_n3_64 = mesh_y_n3_64 + 1) {
    for (mesh_z_n3_65 = 0; mesh_z_n3_65 < 1; mesh_z_n3_65 = mesh_z_n3_65 + 1) {
      Copy_ciph(&_preg_268435466, &VS_out_relu2_59[((mesh_y_n3_64 * 1) + mesh_z_n3_65)]);
      Copy_ciph(&input_dup_n25_66, &_preg_268435466);
      for (bs_input_n25_67 = 0; bs_input_n25_67 < 9; bs_input_n25_67 = bs_input_n25_67 + 1) {
        _preg_268435565 = Rotate(input_dup_n25_66, _cst_162[bs_input_n25_67]);
        Copy_ciph(&input_block_n25_68[bs_input_n25_67], &_preg_268435565);
        Free_poly_data(&_preg_268435565._c1_poly);
        Free_poly_data(&_preg_268435565._c0_poly);
      }
      for (mesh_x_n3_69 = 0; mesh_x_n3_69 < 8; mesh_x_n3_69 = mesh_x_n3_69 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=9
        Zero_ciph(&result_n26_70);
        for (num_grid_n26_71 = 0; num_grid_n26_71 < 8; num_grid_n26_71 = num_grid_n26_71 + 1) {
          Zero_ciph(&result_grid_n26_72);
          for (cap_block_n26_73 = 0; cap_block_n26_73 < 9; cap_block_n26_73 = cap_block_n26_73 + 1) {
            _ckks_gen_tmp_1115_411 = input_block_n25_68[cap_block_n26_73];
            Pt_from_msg_ofst(&_pgen_tmp_66_541, 13/* cst_158 */, (((((mesh_x_n3_69 * 8) + mesh_y_n3_64) * 72) + (cap_block_n26_73 + (num_grid_n26_71 * 9)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_67_542, &_ckks_gen_tmp_1115_411, &_pgen_tmp_66_541);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n26_72, &result_grid_n26_72, &_pgen_tmp_67_542);
            _pgen_modulus_472 = Q_modulus();
            _pgen_num_q_473 = Poly_level(&result_grid_n26_72._c0_poly);
            for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_67_542._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_1115_411._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_66_541._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_67_542._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_1115_411._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_66_541._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n26_72._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n26_72._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_67_542._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n26_72._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n26_72._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_67_542._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              _pgen_modulus_472 = _pgen_modulus_472 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_69_544, &result_grid_n26_72);
          Rescale(&_pgen_tmp_69_544._c0_poly, &result_grid_n26_72._c0_poly);
          Rescale(&_pgen_tmp_69_544._c1_poly, &result_grid_n26_72._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_70_545, 14/* cst_163 */, (num_grid_n26_71) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_68_543, &_pgen_tmp_69_544, &_pgen_tmp_70_545);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_68_543._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_68_543._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_69_544._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_70_545._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_68_543._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_69_544._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_70_545._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435566 = Rotate(_pgen_tmp_68_543, -25088 + (num_grid_n26_71 * 3136));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_72_547, &result_grid_n26_72);
          Rescale(&_pgen_tmp_72_547._c0_poly, &result_grid_n26_72._c0_poly);
          Rescale(&_pgen_tmp_72_547._c1_poly, &result_grid_n26_72._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_73_548, 15/* cst_164 */, (num_grid_n26_71) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_71_546, &_pgen_tmp_72_547, &_pgen_tmp_73_548);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_71_546._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_71_546._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_72_547._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_73_548._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_71_546._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_72_547._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_73_548._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435567 = Rotate(_pgen_tmp_71_546, num_grid_n26_71 * 3136);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_74_549, &_preg_268435566, &_preg_268435567);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n26_70, &result_n26_70, &_pgen_tmp_74_549);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&result_n26_70._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_74_549._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435566._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435567._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_74_549._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435566._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435567._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n26_70._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n26_70._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_74_549._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n26_70._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n26_70._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_74_549._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435566._c1_poly);
          Free_poly_data(&_preg_268435566._c0_poly);
          Free_poly_data(&_preg_268435567._c1_poly);
          Free_poly_data(&_preg_268435567._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_75_550, 16 /* cst_161 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n26_70, &result_n26_70, &_pgen_tmp_75_550);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&result_n26_70._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&result_n26_70._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n26_70._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_75_550._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Set_coeffs(&result_n26_70._c1_poly, _pgen_rns_idx_474, degree, Coeffs(&result_n26_70._c1_poly, _pgen_rns_idx_474, degree));
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_77_552 = VS_out_conv3_62[((mesh_x_n3_69 * 1) + mesh_z_n3_65)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_76_551, &_pgen_tmp_77_552, &result_n26_70);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&_pgen_tmp_76_551._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_76_551._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_77_552._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n26_70._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_76_551._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_77_552._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n26_70._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv3_62[((mesh_x_n3_69 * 1) + mesh_z_n3_65)], &_pgen_tmp_76_551);
      }
    }
  }
  Free_ciph_poly(VS_out_relu2_59, 8);
  Free_poly_data(&_preg_268435466._c1_poly);
  Free_poly_data(&_preg_268435466._c0_poly);
  Free_poly_data(&input_dup_n25_66._c1_poly);
  Free_poly_data(&input_dup_n25_66._c0_poly);
  Free_ciph_poly(input_block_n25_68, 9);
  Free_poly_data(&_pgen_tmp_66_541._poly);
  Free_poly_data(&_pgen_tmp_67_542._c1_poly);
  Free_poly_data(&_pgen_tmp_67_542._c0_poly);
  Free_poly_data(&_pgen_tmp_70_545._poly);
  Free_poly_data(&_pgen_tmp_69_544._c1_poly);
  Free_poly_data(&_pgen_tmp_69_544._c0_poly);
  Free_poly_data(&_pgen_tmp_68_543._c1_poly);
  Free_poly_data(&_pgen_tmp_68_543._c0_poly);
  Free_poly_data(&result_grid_n26_72._c1_poly);
  Free_poly_data(&result_grid_n26_72._c0_poly);
  Free_poly_data(&_pgen_tmp_73_548._poly);
  Free_poly_data(&_pgen_tmp_72_547._c1_poly);
  Free_poly_data(&_pgen_tmp_72_547._c0_poly);
  Free_poly_data(&_pgen_tmp_71_546._c1_poly);
  Free_poly_data(&_pgen_tmp_71_546._c0_poly);
  Free_poly_data(&_pgen_tmp_74_549._c1_poly);
  Free_poly_data(&_pgen_tmp_74_549._c0_poly);
  Free_poly_data(&_pgen_tmp_75_550._poly);
  Free_poly_data(&result_n26_70._c1_poly);
  Free_poly_data(&result_n26_70._c0_poly);
  Free_poly_data(&_pgen_tmp_76_551._c1_poly);
  Free_poly_data(&_pgen_tmp_76_551._c0_poly);
  for (rescale_iv_451 = 0; rescale_iv_451 < 8; rescale_iv_451 = rescale_iv_451 + 1) {
    _pgen_tmp_78_553 = VS_out_conv3_62[rescale_iv_451];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_79_554, &_pgen_tmp_78_553);
    Rescale(&_pgen_tmp_79_554._c0_poly, &_pgen_tmp_78_553._c0_poly);
    Rescale(&_pgen_tmp_79_554._c1_poly, &_pgen_tmp_78_553._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv3_62[rescale_iv_451], &_pgen_tmp_79_554);
  }
  Free_poly_data(&_pgen_tmp_79_554._c1_poly);
  Free_poly_data(&_pgen_tmp_79_554._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 44
  // Add_7
  // pragma: 65536, 1025, 45
  CMPLR_TM_START(2, 0);
  memset(&VS_out_add3_74, 0, sizeof(VS_out_add3_74));
  for (mesh_y_n3_75 = 0; mesh_y_n3_75 < 8; mesh_y_n3_75 = mesh_y_n3_75 + 1) {
    for (mesh_z_n3_76 = 0; mesh_z_n3_76 < 1; mesh_z_n3_76 = mesh_z_n3_76 + 1) {
      _pgen_tmp_81_556 = VS_out_add3_74[((mesh_y_n3_75 * 1) + mesh_z_n3_76)];
      _pgen_tmp_82_557 = VS_out_conv3_62[((mesh_y_n3_75 * 1) + mesh_z_n3_76)];
      _pgen_tmp_83_558 = output_reshard1_46[((mesh_y_n3_75 * 1) + mesh_z_n3_76)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_84_559, &_pgen_tmp_82_557, &_pgen_tmp_83_558);
      CMPLR_TM_END(12, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_80_555, &_pgen_tmp_81_556, &_pgen_tmp_84_559);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_pgen_tmp_80_555._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_84_559._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_82_557._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_83_558._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_84_559._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_82_557._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_83_558._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_80_555._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_81_556._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_84_559._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_80_555._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_81_556._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_84_559._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_add3_74[((mesh_y_n3_75 * 1) + mesh_z_n3_76)], &_pgen_tmp_80_555);
    }
  }
  Free_ciph_poly(VS_out_conv3_62, 8);
  Free_ciph_poly(output_reshard1_46, 8);
  Free_poly_data(&_pgen_tmp_84_559._c1_poly);
  Free_poly_data(&_pgen_tmp_84_559._c0_poly);
  Free_poly_data(&_pgen_tmp_80_555._c1_poly);
  Free_poly_data(&_pgen_tmp_80_555._c0_poly);
  CMPLR_TM_END(2, 0);
  // pragma: 65537, 1025, 45
  // Relu_8
  // pragma: 65536, 1033, 46
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu3_77, 0, sizeof(VS_out_relu3_77));
  for (mesh_y_n3_78 = 0; mesh_y_n3_78 < 8; mesh_y_n3_78 = mesh_y_n3_78 + 1) {
    for (mesh_z_n3_79 = 0; mesh_z_n3_79 < 1; mesh_z_n3_79 = mesh_z_n3_79 + 1) {
      _pgen_tmp_85_560 = VS_out_add3_74[((mesh_y_n3_78 * 1) + mesh_z_n3_79)];
      Bootstrap(&_preg_268435467, &_pgen_tmp_85_560, 15);
      Encode_float(&_pgen_tmp_86_561, &_cst_352, 1, 1, Level(&_preg_268435467));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435469, &_preg_268435467, &_pgen_tmp_86_561);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_preg_268435469._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_preg_268435469._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435467._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_86_561._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_preg_268435469._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435467._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_86_561._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_87_562, &_preg_268435469);
      Rescale(&_pgen_tmp_87_562._c0_poly, &_preg_268435469._c0_poly);
      Rescale(&_pgen_tmp_87_562._c1_poly, &_preg_268435469._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435468 = App_relu(_preg_268435467, _pgen_tmp_87_562, 25088);
      _pgen_tmp_89_564 = VS_out_relu3_77[((mesh_y_n3_78 * 1) + mesh_z_n3_79)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_88_563, &_pgen_tmp_89_564, &_preg_268435468);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_pgen_tmp_88_563._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_88_563._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_89_564._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435468._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_88_563._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_89_564._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435468._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu3_77[((mesh_y_n3_78 * 1) + mesh_z_n3_79)], &_pgen_tmp_88_563);
    }
  }
  Free_ciph_poly(VS_out_add3_74, 8);
  Free_poly_data(&_pgen_tmp_86_561._poly);
  Free_poly_data(&_preg_268435469._c1_poly);
  Free_poly_data(&_preg_268435469._c0_poly);
  Free_poly_data(&_pgen_tmp_87_562._c1_poly);
  Free_poly_data(&_pgen_tmp_87_562._c0_poly);
  Free_poly_data(&_preg_268435467._c1_poly);
  Free_poly_data(&_preg_268435467._c0_poly);
  Free_poly_data(&_preg_268435468._c1_poly);
  Free_poly_data(&_preg_268435468._c0_poly);
  Free_poly_data(&_pgen_tmp_88_563._c1_poly);
  Free_poly_data(&_pgen_tmp_88_563._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 46
  // Conv_9
  // pragma: 65536, 1027, 47
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv4_80, 0, sizeof(VS_out_conv4_80));
  memset(&VS_out_conv_halo4_81, 0, sizeof(VS_out_conv_halo4_81));
  Free_ciph_poly(VS_out_conv_halo4_81, 8);
  for (mesh_y_n4_82 = 0; mesh_y_n4_82 < 8; mesh_y_n4_82 = mesh_y_n4_82 + 1) {
    for (mesh_z_n4_83 = 0; mesh_z_n4_83 < 1; mesh_z_n4_83 = mesh_z_n4_83 + 1) {
      Copy_ciph(&_preg_268435470, &VS_out_relu3_77[((mesh_y_n4_82 * 1) + mesh_z_n4_83)]);
      Copy_ciph(&input_dup_n26_84, &_preg_268435470);
      for (bs_input_n26_85 = 0; bs_input_n26_85 < 9; bs_input_n26_85 = bs_input_n26_85 + 1) {
        _preg_268435568 = Rotate(input_dup_n26_84, _cst_169[bs_input_n26_85]);
        Copy_ciph(&input_block_n26_86[bs_input_n26_85], &_preg_268435568);
        Free_poly_data(&_preg_268435568._c1_poly);
        Free_poly_data(&_preg_268435568._c0_poly);
      }
      for (mesh_x_n4_87 = 0; mesh_x_n4_87 < 8; mesh_x_n4_87 = mesh_x_n4_87 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=9
        Zero_ciph(&result_n27_88);
        for (num_grid_n27_89 = 0; num_grid_n27_89 < 8; num_grid_n27_89 = num_grid_n27_89 + 1) {
          Zero_ciph(&result_grid_n27_90);
          for (cap_block_n27_91 = 0; cap_block_n27_91 < 9; cap_block_n27_91 = cap_block_n27_91 + 1) {
            _ckks_gen_tmp_1445_412 = input_block_n26_86[cap_block_n27_91];
            Pt_from_msg_ofst(&_pgen_tmp_90_565, 17/* cst_165 */, (((((mesh_x_n4_87 * 8) + mesh_y_n4_82) * 72) + (cap_block_n27_91 + (num_grid_n27_89 * 9)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_91_566, &_ckks_gen_tmp_1445_412, &_pgen_tmp_90_565);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n27_90, &result_grid_n27_90, &_pgen_tmp_91_566);
            _pgen_modulus_472 = Q_modulus();
            _pgen_num_q_473 = Poly_level(&result_grid_n27_90._c0_poly);
            for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_91_566._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_1445_412._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_90_565._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_91_566._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_1445_412._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_90_565._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n27_90._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n27_90._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_91_566._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n27_90._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n27_90._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_91_566._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              _pgen_modulus_472 = _pgen_modulus_472 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_93_568, &result_grid_n27_90);
          Rescale(&_pgen_tmp_93_568._c0_poly, &result_grid_n27_90._c0_poly);
          Rescale(&_pgen_tmp_93_568._c1_poly, &result_grid_n27_90._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_94_569, 18/* cst_170 */, (num_grid_n27_89) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_92_567, &_pgen_tmp_93_568, &_pgen_tmp_94_569);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_92_567._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_92_567._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_93_568._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_94_569._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_92_567._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_93_568._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_94_569._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435569 = Rotate(_pgen_tmp_92_567, -25088 + (num_grid_n27_89 * 3136));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_96_571, &result_grid_n27_90);
          Rescale(&_pgen_tmp_96_571._c0_poly, &result_grid_n27_90._c0_poly);
          Rescale(&_pgen_tmp_96_571._c1_poly, &result_grid_n27_90._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_97_572, 19/* cst_171 */, (num_grid_n27_89) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_95_570, &_pgen_tmp_96_571, &_pgen_tmp_97_572);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_95_570._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_95_570._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_96_571._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_97_572._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_95_570._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_96_571._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_97_572._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435570 = Rotate(_pgen_tmp_95_570, num_grid_n27_89 * 3136);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_98_573, &_preg_268435569, &_preg_268435570);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n27_88, &result_n27_88, &_pgen_tmp_98_573);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&result_n27_88._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_98_573._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435569._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435570._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_98_573._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435569._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435570._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n27_88._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n27_88._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_98_573._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n27_88._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n27_88._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_98_573._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435569._c1_poly);
          Free_poly_data(&_preg_268435569._c0_poly);
          Free_poly_data(&_preg_268435570._c1_poly);
          Free_poly_data(&_preg_268435570._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_99_574, 20 /* cst_168 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n27_88, &result_n27_88, &_pgen_tmp_99_574);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&result_n27_88._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&result_n27_88._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n27_88._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_99_574._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Set_coeffs(&result_n27_88._c1_poly, _pgen_rns_idx_474, degree, Coeffs(&result_n27_88._c1_poly, _pgen_rns_idx_474, degree));
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_101_576 = VS_out_conv4_80[((mesh_x_n4_87 * 1) + mesh_z_n4_83)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_100_575, &_pgen_tmp_101_576, &result_n27_88);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&_pgen_tmp_100_575._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_100_575._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_101_576._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n27_88._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_100_575._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_101_576._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n27_88._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv4_80[((mesh_x_n4_87 * 1) + mesh_z_n4_83)], &_pgen_tmp_100_575);
      }
    }
  }
  Free_poly_data(&_preg_268435470._c1_poly);
  Free_poly_data(&_preg_268435470._c0_poly);
  Free_poly_data(&input_dup_n26_84._c1_poly);
  Free_poly_data(&input_dup_n26_84._c0_poly);
  Free_ciph_poly(input_block_n26_86, 9);
  Free_poly_data(&_pgen_tmp_90_565._poly);
  Free_poly_data(&_pgen_tmp_91_566._c1_poly);
  Free_poly_data(&_pgen_tmp_91_566._c0_poly);
  Free_poly_data(&_pgen_tmp_94_569._poly);
  Free_poly_data(&_pgen_tmp_93_568._c1_poly);
  Free_poly_data(&_pgen_tmp_93_568._c0_poly);
  Free_poly_data(&_pgen_tmp_92_567._c1_poly);
  Free_poly_data(&_pgen_tmp_92_567._c0_poly);
  Free_poly_data(&result_grid_n27_90._c1_poly);
  Free_poly_data(&result_grid_n27_90._c0_poly);
  Free_poly_data(&_pgen_tmp_97_572._poly);
  Free_poly_data(&_pgen_tmp_96_571._c1_poly);
  Free_poly_data(&_pgen_tmp_96_571._c0_poly);
  Free_poly_data(&_pgen_tmp_95_570._c1_poly);
  Free_poly_data(&_pgen_tmp_95_570._c0_poly);
  Free_poly_data(&_pgen_tmp_98_573._c1_poly);
  Free_poly_data(&_pgen_tmp_98_573._c0_poly);
  Free_poly_data(&_pgen_tmp_99_574._poly);
  Free_poly_data(&result_n27_88._c1_poly);
  Free_poly_data(&result_n27_88._c0_poly);
  Free_poly_data(&_pgen_tmp_100_575._c1_poly);
  Free_poly_data(&_pgen_tmp_100_575._c0_poly);
  for (rescale_iv_452 = 0; rescale_iv_452 < 8; rescale_iv_452 = rescale_iv_452 + 1) {
    _pgen_tmp_102_577 = VS_out_conv4_80[rescale_iv_452];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_103_578, &_pgen_tmp_102_577);
    Rescale(&_pgen_tmp_103_578._c0_poly, &_pgen_tmp_102_577._c0_poly);
    Rescale(&_pgen_tmp_103_578._c1_poly, &_pgen_tmp_102_577._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv4_80[rescale_iv_452], &_pgen_tmp_103_578);
  }
  Free_poly_data(&_pgen_tmp_103_578._c1_poly);
  Free_poly_data(&_pgen_tmp_103_578._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 47
  // Relu_10
  // pragma: 65536, 1033, 48
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu4_92, 0, sizeof(VS_out_relu4_92));
  for (mesh_y_n4_93 = 0; mesh_y_n4_93 < 8; mesh_y_n4_93 = mesh_y_n4_93 + 1) {
    for (mesh_z_n4_94 = 0; mesh_z_n4_94 < 1; mesh_z_n4_94 = mesh_z_n4_94 + 1) {
      _pgen_tmp_104_579 = VS_out_conv4_80[((mesh_y_n4_93 * 1) + mesh_z_n4_94)];
      Bootstrap(&_preg_268435471, &_pgen_tmp_104_579, 15);
      Encode_float(&_pgen_tmp_105_580, &_cst_353, 1, 1, Level(&_preg_268435471));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435473, &_preg_268435471, &_pgen_tmp_105_580);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_preg_268435473._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_preg_268435473._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435471._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_105_580._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_preg_268435473._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435471._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_105_580._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_106_581, &_preg_268435473);
      Rescale(&_pgen_tmp_106_581._c0_poly, &_preg_268435473._c0_poly);
      Rescale(&_pgen_tmp_106_581._c1_poly, &_preg_268435473._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435472 = App_relu(_preg_268435471, _pgen_tmp_106_581, 25088);
      _pgen_tmp_108_583 = VS_out_relu4_92[((mesh_y_n4_93 * 1) + mesh_z_n4_94)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_107_582, &_pgen_tmp_108_583, &_preg_268435472);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_pgen_tmp_107_582._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_107_582._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_108_583._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435472._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_107_582._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_108_583._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435472._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu4_92[((mesh_y_n4_93 * 1) + mesh_z_n4_94)], &_pgen_tmp_107_582);
    }
  }
  Free_ciph_poly(VS_out_conv4_80, 8);
  Free_poly_data(&_pgen_tmp_105_580._poly);
  Free_poly_data(&_preg_268435473._c1_poly);
  Free_poly_data(&_preg_268435473._c0_poly);
  Free_poly_data(&_pgen_tmp_106_581._c1_poly);
  Free_poly_data(&_pgen_tmp_106_581._c0_poly);
  Free_poly_data(&_preg_268435471._c1_poly);
  Free_poly_data(&_preg_268435471._c0_poly);
  Free_poly_data(&_preg_268435472._c1_poly);
  Free_poly_data(&_preg_268435472._c0_poly);
  Free_poly_data(&_pgen_tmp_107_582._c1_poly);
  Free_poly_data(&_pgen_tmp_107_582._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 48
  // Conv_11
  // pragma: 65536, 1027, 49
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv5_95, 0, sizeof(VS_out_conv5_95));
  memset(&VS_out_conv_halo5_96, 0, sizeof(VS_out_conv_halo5_96));
  Free_ciph_poly(VS_out_conv_halo5_96, 8);
  for (mesh_y_n5_97 = 0; mesh_y_n5_97 < 8; mesh_y_n5_97 = mesh_y_n5_97 + 1) {
    for (mesh_z_n5_98 = 0; mesh_z_n5_98 < 1; mesh_z_n5_98 = mesh_z_n5_98 + 1) {
      Copy_ciph(&_preg_268435474, &VS_out_relu4_92[((mesh_y_n5_97 * 1) + mesh_z_n5_98)]);
      Copy_ciph(&input_dup_n27_99, &_preg_268435474);
      for (bs_input_n27_100 = 0; bs_input_n27_100 < 9; bs_input_n27_100 = bs_input_n27_100 + 1) {
        _preg_268435571 = Rotate(input_dup_n27_99, _cst_176[bs_input_n27_100]);
        Copy_ciph(&input_block_n27_101[bs_input_n27_100], &_preg_268435571);
        Free_poly_data(&_preg_268435571._c1_poly);
        Free_poly_data(&_preg_268435571._c0_poly);
      }
      for (mesh_x_n5_102 = 0; mesh_x_n5_102 < 8; mesh_x_n5_102 = mesh_x_n5_102 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=9
        Zero_ciph(&result_n28_103);
        for (num_grid_n28_104 = 0; num_grid_n28_104 < 8; num_grid_n28_104 = num_grid_n28_104 + 1) {
          Zero_ciph(&result_grid_n28_105);
          for (cap_block_n28_106 = 0; cap_block_n28_106 < 9; cap_block_n28_106 = cap_block_n28_106 + 1) {
            _ckks_gen_tmp_1710_413 = input_block_n27_101[cap_block_n28_106];
            Pt_from_msg_ofst(&_pgen_tmp_109_584, 21/* cst_172 */, (((((mesh_x_n5_102 * 8) + mesh_y_n5_97) * 72) + (cap_block_n28_106 + (num_grid_n28_104 * 9)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_110_585, &_ckks_gen_tmp_1710_413, &_pgen_tmp_109_584);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n28_105, &result_grid_n28_105, &_pgen_tmp_110_585);
            _pgen_modulus_472 = Q_modulus();
            _pgen_num_q_473 = Poly_level(&result_grid_n28_105._c0_poly);
            for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_110_585._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_1710_413._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_109_584._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_110_585._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_1710_413._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_109_584._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n28_105._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n28_105._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_110_585._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n28_105._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n28_105._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_110_585._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              _pgen_modulus_472 = _pgen_modulus_472 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_112_587, &result_grid_n28_105);
          Rescale(&_pgen_tmp_112_587._c0_poly, &result_grid_n28_105._c0_poly);
          Rescale(&_pgen_tmp_112_587._c1_poly, &result_grid_n28_105._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_113_588, 22/* cst_177 */, (num_grid_n28_104) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_111_586, &_pgen_tmp_112_587, &_pgen_tmp_113_588);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_111_586._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_111_586._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_112_587._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_113_588._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_111_586._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_112_587._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_113_588._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435572 = Rotate(_pgen_tmp_111_586, -25088 + (num_grid_n28_104 * 3136));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_115_590, &result_grid_n28_105);
          Rescale(&_pgen_tmp_115_590._c0_poly, &result_grid_n28_105._c0_poly);
          Rescale(&_pgen_tmp_115_590._c1_poly, &result_grid_n28_105._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_116_591, 23/* cst_178 */, (num_grid_n28_104) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_114_589, &_pgen_tmp_115_590, &_pgen_tmp_116_591);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_114_589._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_114_589._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_115_590._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_116_591._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_114_589._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_115_590._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_116_591._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435573 = Rotate(_pgen_tmp_114_589, num_grid_n28_104 * 3136);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_117_592, &_preg_268435572, &_preg_268435573);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n28_103, &result_n28_103, &_pgen_tmp_117_592);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&result_n28_103._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_117_592._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435572._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435573._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_117_592._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435572._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435573._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n28_103._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n28_103._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_117_592._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n28_103._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n28_103._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_117_592._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435572._c1_poly);
          Free_poly_data(&_preg_268435572._c0_poly);
          Free_poly_data(&_preg_268435573._c1_poly);
          Free_poly_data(&_preg_268435573._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_118_593, 24 /* cst_175 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n28_103, &result_n28_103, &_pgen_tmp_118_593);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&result_n28_103._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&result_n28_103._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n28_103._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_118_593._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Set_coeffs(&result_n28_103._c1_poly, _pgen_rns_idx_474, degree, Coeffs(&result_n28_103._c1_poly, _pgen_rns_idx_474, degree));
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_120_595 = VS_out_conv5_95[((mesh_x_n5_102 * 1) + mesh_z_n5_98)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_119_594, &_pgen_tmp_120_595, &result_n28_103);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&_pgen_tmp_119_594._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_119_594._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_120_595._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n28_103._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_119_594._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_120_595._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n28_103._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv5_95[((mesh_x_n5_102 * 1) + mesh_z_n5_98)], &_pgen_tmp_119_594);
      }
    }
  }
  Free_ciph_poly(VS_out_relu4_92, 8);
  Free_poly_data(&_preg_268435474._c1_poly);
  Free_poly_data(&_preg_268435474._c0_poly);
  Free_poly_data(&input_dup_n27_99._c1_poly);
  Free_poly_data(&input_dup_n27_99._c0_poly);
  Free_ciph_poly(input_block_n27_101, 9);
  Free_poly_data(&_pgen_tmp_109_584._poly);
  Free_poly_data(&_pgen_tmp_110_585._c1_poly);
  Free_poly_data(&_pgen_tmp_110_585._c0_poly);
  Free_poly_data(&_pgen_tmp_113_588._poly);
  Free_poly_data(&_pgen_tmp_112_587._c1_poly);
  Free_poly_data(&_pgen_tmp_112_587._c0_poly);
  Free_poly_data(&_pgen_tmp_111_586._c1_poly);
  Free_poly_data(&_pgen_tmp_111_586._c0_poly);
  Free_poly_data(&result_grid_n28_105._c1_poly);
  Free_poly_data(&result_grid_n28_105._c0_poly);
  Free_poly_data(&_pgen_tmp_116_591._poly);
  Free_poly_data(&_pgen_tmp_115_590._c1_poly);
  Free_poly_data(&_pgen_tmp_115_590._c0_poly);
  Free_poly_data(&_pgen_tmp_114_589._c1_poly);
  Free_poly_data(&_pgen_tmp_114_589._c0_poly);
  Free_poly_data(&_pgen_tmp_117_592._c1_poly);
  Free_poly_data(&_pgen_tmp_117_592._c0_poly);
  Free_poly_data(&_pgen_tmp_118_593._poly);
  Free_poly_data(&result_n28_103._c1_poly);
  Free_poly_data(&result_n28_103._c0_poly);
  Free_poly_data(&_pgen_tmp_119_594._c1_poly);
  Free_poly_data(&_pgen_tmp_119_594._c0_poly);
  for (rescale_iv_453 = 0; rescale_iv_453 < 8; rescale_iv_453 = rescale_iv_453 + 1) {
    _pgen_tmp_121_596 = VS_out_conv5_95[rescale_iv_453];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_122_597, &_pgen_tmp_121_596);
    Rescale(&_pgen_tmp_122_597._c0_poly, &_pgen_tmp_121_596._c0_poly);
    Rescale(&_pgen_tmp_122_597._c1_poly, &_pgen_tmp_121_596._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv5_95[rescale_iv_453], &_pgen_tmp_122_597);
  }
  Free_poly_data(&_pgen_tmp_122_597._c1_poly);
  Free_poly_data(&_pgen_tmp_122_597._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 49
  // Add_12
  // pragma: 65536, 1025, 50
  CMPLR_TM_START(2, 0);
  memset(&VS_out_add5_107, 0, sizeof(VS_out_add5_107));
  for (mesh_y_n5_108 = 0; mesh_y_n5_108 < 8; mesh_y_n5_108 = mesh_y_n5_108 + 1) {
    for (mesh_z_n5_109 = 0; mesh_z_n5_109 < 1; mesh_z_n5_109 = mesh_z_n5_109 + 1) {
      _pgen_tmp_124_599 = VS_out_add5_107[((mesh_y_n5_108 * 1) + mesh_z_n5_109)];
      _pgen_tmp_125_600 = VS_out_conv5_95[((mesh_y_n5_108 * 1) + mesh_z_n5_109)];
      _pgen_tmp_126_601 = VS_out_relu3_77[((mesh_y_n5_108 * 1) + mesh_z_n5_109)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_127_602, &_pgen_tmp_125_600, &_pgen_tmp_126_601);
      CMPLR_TM_END(12, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_123_598, &_pgen_tmp_124_599, &_pgen_tmp_127_602);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_pgen_tmp_123_598._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_127_602._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_125_600._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_126_601._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_127_602._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_125_600._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_126_601._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_123_598._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_124_599._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_127_602._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_123_598._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_124_599._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_127_602._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_add5_107[((mesh_y_n5_108 * 1) + mesh_z_n5_109)], &_pgen_tmp_123_598);
    }
  }
  Free_ciph_poly(VS_out_conv5_95, 8);
  Free_ciph_poly(VS_out_relu3_77, 8);
  Free_poly_data(&_pgen_tmp_127_602._c1_poly);
  Free_poly_data(&_pgen_tmp_127_602._c0_poly);
  Free_poly_data(&_pgen_tmp_123_598._c1_poly);
  Free_poly_data(&_pgen_tmp_123_598._c0_poly);
  CMPLR_TM_END(2, 0);
  // pragma: 65537, 1025, 50
  // Relu_13
  // pragma: 65536, 1033, 51
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu5_110, 0, sizeof(VS_out_relu5_110));
  for (mesh_y_n5_111 = 0; mesh_y_n5_111 < 8; mesh_y_n5_111 = mesh_y_n5_111 + 1) {
    for (mesh_z_n5_112 = 0; mesh_z_n5_112 < 1; mesh_z_n5_112 = mesh_z_n5_112 + 1) {
      _pgen_tmp_128_603 = VS_out_add5_107[((mesh_y_n5_111 * 1) + mesh_z_n5_112)];
      Bootstrap(&_preg_268435475, &_pgen_tmp_128_603, 18);
      Encode_float(&_pgen_tmp_129_604, &_cst_354, 1, 1, Level(&_preg_268435475));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435477, &_preg_268435475, &_pgen_tmp_129_604);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_preg_268435477._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_preg_268435477._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435475._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_129_604._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_preg_268435477._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435475._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_129_604._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_130_605, &_preg_268435477);
      Rescale(&_pgen_tmp_130_605._c0_poly, &_preg_268435477._c0_poly);
      Rescale(&_pgen_tmp_130_605._c1_poly, &_preg_268435477._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435476 = App_relu(_preg_268435475, _pgen_tmp_130_605, 25088);
      _pgen_tmp_132_607 = VS_out_relu5_110[((mesh_y_n5_111 * 1) + mesh_z_n5_112)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_131_606, &_pgen_tmp_132_607, &_preg_268435476);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_pgen_tmp_131_606._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_131_606._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_132_607._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435476._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_131_606._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_132_607._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435476._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu5_110[((mesh_y_n5_111 * 1) + mesh_z_n5_112)], &_pgen_tmp_131_606);
    }
  }
  Free_ciph_poly(VS_out_add5_107, 8);
  Free_poly_data(&_pgen_tmp_129_604._poly);
  Free_poly_data(&_preg_268435477._c1_poly);
  Free_poly_data(&_preg_268435477._c0_poly);
  Free_poly_data(&_pgen_tmp_130_605._c1_poly);
  Free_poly_data(&_pgen_tmp_130_605._c0_poly);
  Free_poly_data(&_preg_268435475._c1_poly);
  Free_poly_data(&_preg_268435475._c0_poly);
  Free_poly_data(&_preg_268435476._c1_poly);
  Free_poly_data(&_preg_268435476._c0_poly);
  Free_poly_data(&_pgen_tmp_131_606._c1_poly);
  Free_poly_data(&_pgen_tmp_131_606._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 51
  // Conv_14
  // pragma: 65536, 1027, 52
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv6_113, 0, sizeof(VS_out_conv6_113));
  memset(&VS_out_conv_halo6_114, 0, sizeof(VS_out_conv_halo6_114));
  for (mesh_y_n6_115 = 0; mesh_y_n6_115 < 8; mesh_y_n6_115 = mesh_y_n6_115 + 1) {
    for (mesh_z_n6_116 = 0; mesh_z_n6_116 < 1; mesh_z_n6_116 = mesh_z_n6_116 + 1) {
      Copy_ciph(&_preg_268435478, &VS_out_relu5_110[((mesh_y_n6_115 * 1) + mesh_z_n6_116)]);
      Copy_ciph(&input_dup_n28_117, &_preg_268435478);
      for (bs_input_n28_118 = 0; bs_input_n28_118 < 1; bs_input_n28_118 = bs_input_n28_118 + 1) {
        _preg_268435574 = Rotate(input_dup_n28_117, _cst_183[bs_input_n28_118]);
        Copy_ciph(&input_block_n28_119[bs_input_n28_118], &_preg_268435574);
        Free_poly_data(&_preg_268435574._c1_poly);
        Free_poly_data(&_preg_268435574._c0_poly);
      }
      for (mesh_x_n6_120 = 0; mesh_x_n6_120 < 16; mesh_x_n6_120 = mesh_x_n6_120 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n29_121);
        for (num_grid_n29_122 = 0; num_grid_n29_122 < 8; num_grid_n29_122 = num_grid_n29_122 + 1) {
          Zero_ciph(&result_grid_n29_123);
          for (cap_block_n29_124 = 0; cap_block_n29_124 < 1; cap_block_n29_124 = cap_block_n29_124 + 1) {
            _ckks_gen_tmp_2040_414 = input_block_n28_119[cap_block_n29_124];
            Pt_from_msg_ofst(&_pgen_tmp_133_608, 25/* cst_179 */, (((((mesh_x_n6_120 * 8) + mesh_y_n6_115) * 8) + (cap_block_n29_124 + (num_grid_n29_122 * 1)))) * (25088), 25088, 1, 6);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_134_609, &_ckks_gen_tmp_2040_414, &_pgen_tmp_133_608);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n29_123, &result_grid_n29_123, &_pgen_tmp_134_609);
            _pgen_modulus_472 = Q_modulus();
            _pgen_num_q_473 = Poly_level(&result_grid_n29_123._c0_poly);
            for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_134_609._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_2040_414._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_133_608._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_134_609._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_2040_414._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_133_608._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n29_123._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n29_123._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_134_609._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n29_123._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n29_123._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_134_609._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              _pgen_modulus_472 = _pgen_modulus_472 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_136_611, &result_grid_n29_123);
          Rescale(&_pgen_tmp_136_611._c0_poly, &result_grid_n29_123._c0_poly);
          Rescale(&_pgen_tmp_136_611._c1_poly, &result_grid_n29_123._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_137_612, 26/* cst_184 */, (num_grid_n29_122) * (25088), 25088, 1, 5);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_135_610, &_pgen_tmp_136_611, &_pgen_tmp_137_612);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_135_610._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_135_610._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_136_611._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_137_612._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_135_610._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_136_611._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_137_612._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435575 = Rotate(_pgen_tmp_135_610, -25088 + (num_grid_n29_122 * 3136));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_139_614, &result_grid_n29_123);
          Rescale(&_pgen_tmp_139_614._c0_poly, &result_grid_n29_123._c0_poly);
          Rescale(&_pgen_tmp_139_614._c1_poly, &result_grid_n29_123._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_140_615, 27/* cst_185 */, (num_grid_n29_122) * (25088), 25088, 1, 5);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_138_613, &_pgen_tmp_139_614, &_pgen_tmp_140_615);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_138_613._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_138_613._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_139_614._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_140_615._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_138_613._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_139_614._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_140_615._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435576 = Rotate(_pgen_tmp_138_613, num_grid_n29_122 * 3136);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_141_616, &_preg_268435575, &_preg_268435576);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n29_121, &result_n29_121, &_pgen_tmp_141_616);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&result_n29_121._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_141_616._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435575._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435576._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_141_616._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435575._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435576._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n29_121._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n29_121._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_141_616._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n29_121._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n29_121._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_141_616._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435575._c1_poly);
          Free_poly_data(&_preg_268435575._c0_poly);
          Free_poly_data(&_preg_268435576._c1_poly);
          Free_poly_data(&_preg_268435576._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_142_617, 28 /* cst_182 */, 25088, 2, 5);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n29_121, &result_n29_121, &_pgen_tmp_142_617);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&result_n29_121._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&result_n29_121._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n29_121._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_142_617._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Set_coeffs(&result_n29_121._c1_poly, _pgen_rns_idx_474, degree, Coeffs(&result_n29_121._c1_poly, _pgen_rns_idx_474, degree));
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_144_619 = VS_out_conv6_113[((mesh_x_n6_120 * 1) + mesh_z_n6_116)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_143_618, &_pgen_tmp_144_619, &result_n29_121);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&_pgen_tmp_143_618._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_143_618._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_144_619._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n29_121._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_143_618._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_144_619._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n29_121._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv6_113[((mesh_x_n6_120 * 1) + mesh_z_n6_116)], &_pgen_tmp_143_618);
      }
    }
  }
  Free_poly_data(&_preg_268435478._c1_poly);
  Free_poly_data(&_preg_268435478._c0_poly);
  Free_poly_data(&input_dup_n28_117._c1_poly);
  Free_poly_data(&input_dup_n28_117._c0_poly);
  Free_ciph_poly(input_block_n28_119, 1);
  Free_poly_data(&_pgen_tmp_133_608._poly);
  Free_poly_data(&_pgen_tmp_134_609._c1_poly);
  Free_poly_data(&_pgen_tmp_134_609._c0_poly);
  Free_poly_data(&_pgen_tmp_137_612._poly);
  Free_poly_data(&_pgen_tmp_136_611._c1_poly);
  Free_poly_data(&_pgen_tmp_136_611._c0_poly);
  Free_poly_data(&_pgen_tmp_135_610._c1_poly);
  Free_poly_data(&_pgen_tmp_135_610._c0_poly);
  Free_poly_data(&result_grid_n29_123._c1_poly);
  Free_poly_data(&result_grid_n29_123._c0_poly);
  Free_poly_data(&_pgen_tmp_140_615._poly);
  Free_poly_data(&_pgen_tmp_139_614._c1_poly);
  Free_poly_data(&_pgen_tmp_139_614._c0_poly);
  Free_poly_data(&_pgen_tmp_138_613._c1_poly);
  Free_poly_data(&_pgen_tmp_138_613._c0_poly);
  Free_poly_data(&_pgen_tmp_141_616._c1_poly);
  Free_poly_data(&_pgen_tmp_141_616._c0_poly);
  Free_poly_data(&_pgen_tmp_142_617._poly);
  Free_poly_data(&result_n29_121._c1_poly);
  Free_poly_data(&result_n29_121._c0_poly);
  Free_poly_data(&_pgen_tmp_143_618._c1_poly);
  Free_poly_data(&_pgen_tmp_143_618._c0_poly);
  for (rescale_iv_454 = 0; rescale_iv_454 < 16; rescale_iv_454 = rescale_iv_454 + 1) {
    _pgen_tmp_145_620 = VS_out_conv6_113[rescale_iv_454];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_146_621, &_pgen_tmp_145_620);
    Rescale(&_pgen_tmp_146_621._c0_poly, &_pgen_tmp_145_620._c0_poly);
    Rescale(&_pgen_tmp_146_621._c1_poly, &_pgen_tmp_145_620._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv6_113[rescale_iv_454], &_pgen_tmp_146_621);
  }
  Free_poly_data(&_pgen_tmp_146_621._c1_poly);
  Free_poly_data(&_pgen_tmp_146_621._c0_poly);
  for (siv_n6_125 = 0; siv_n6_125 < 16; siv_n6_125 = siv_n6_125 + 1) {
    orig_result29_126 = VS_out_conv6_113[siv_n6_125];
    Zero_ciph(&comb_row_result30_127);
    for (comb_row_lf_index_n30_128 = 0; comb_row_lf_index_n30_128 < 1; comb_row_lf_index_n30_128 = comb_row_lf_index_n30_128 + 1) {
      _preg_268435577 = Rotate(orig_result29_126, 1 << comb_row_lf_index_n30_128);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&orig_result29_126, &orig_result29_126, &_preg_268435577);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&orig_result29_126._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&orig_result29_126._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&orig_result29_126._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435577._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&orig_result29_126._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&orig_result29_126._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435577._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435577._c1_poly);
      Free_poly_data(&_preg_268435577._c0_poly);
    }
    for (comb_row_index_n30_129 = 0; comb_row_index_n30_129 < 14; comb_row_index_n30_129 = comb_row_index_n30_129 + 1) {
      _preg_268435578 = Rotate(orig_result29_126, comb_row_index_n30_129 * 2);
      Copy_ciph(&_ckks_gen_tmp_2187_415, &_preg_268435578);
      Pt_from_msg_ofst(&_pgen_tmp_147_622, 29/* cst_186 */, (comb_row_index_n30_129) * (25088), 25088, 1, 4);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_148_623, &_ckks_gen_tmp_2187_415, &_pgen_tmp_147_622);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_row_result30_127, &comb_row_result30_127, &_pgen_tmp_148_623);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&comb_row_result30_127._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_148_623._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_2187_415._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_147_622._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_148_623._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_2187_415._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_147_622._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_row_result30_127._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result30_127._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_148_623._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_row_result30_127._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result30_127._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_148_623._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435578._c1_poly);
      Free_poly_data(&_preg_268435578._c0_poly);
    }
    Zero_ciph(&comb_rc_result30_130);
    for (comb_rc_lf_index_n30_131 = 0; comb_rc_lf_index_n30_131 < 2; comb_rc_lf_index_n30_131 = comb_rc_lf_index_n30_131 + 1) {
      _preg_268435579 = Rotate(comb_row_result30_127, (1 << comb_rc_lf_index_n30_131) * 84);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_row_result30_127, &comb_row_result30_127, &_preg_268435579);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&comb_row_result30_127._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&comb_row_result30_127._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result30_127._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435579._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_row_result30_127._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result30_127._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435579._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435579._c1_poly);
      Free_poly_data(&_preg_268435579._c0_poly);
    }
    for (comb_rc_index_n30_132 = 0; comb_rc_index_n30_132 < 7; comb_rc_index_n30_132 = comb_rc_index_n30_132 + 1) {
      _preg_268435580 = Rotate(comb_row_result30_127, comb_rc_index_n30_132 * 336);
      Copy_ciph(&_ckks_gen_tmp_2240_416, &_preg_268435580);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_149_624, &_ckks_gen_tmp_2240_416);
      Rescale(&_pgen_tmp_149_624._c0_poly, &_ckks_gen_tmp_2240_416._c0_poly);
      Rescale(&_pgen_tmp_149_624._c1_poly, &_ckks_gen_tmp_2240_416._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg_ofst(&_pgen_tmp_150_625, 30/* cst_187 */, (comb_rc_index_n30_132) * (25088), 25088, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_151_626, &_pgen_tmp_149_624, &_pgen_tmp_150_625);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_rc_result30_130, &comb_rc_result30_130, &_pgen_tmp_151_626);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&comb_rc_result30_130._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_151_626._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_149_624._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_150_625._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_151_626._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_149_624._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_150_625._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_rc_result30_130._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_rc_result30_130._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_151_626._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_rc_result30_130._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_rc_result30_130._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_151_626._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435580._c1_poly);
      Free_poly_data(&_preg_268435580._c0_poly);
    }
    Zero_ciph(&ss_result30_133);
    for (comb_cc_lf_index_n30_134 = 0; comb_cc_lf_index_n30_134 < 2; comb_cc_lf_index_n30_134 = comb_cc_lf_index_n30_134 + 1) {
      _preg_268435581 = Rotate(comb_rc_result30_130, (1 << comb_cc_lf_index_n30_134) * 2352);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_rc_result30_130, &comb_rc_result30_130, &_preg_268435581);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&comb_rc_result30_130._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&comb_rc_result30_130._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_rc_result30_130._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435581._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_rc_result30_130._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_rc_result30_130._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435581._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435581._c1_poly);
      Free_poly_data(&_preg_268435581._c0_poly);
    }
    for (comb_cc_index_n30_135 = 0; comb_cc_index_n30_135 < 2; comb_cc_index_n30_135 = comb_cc_index_n30_135 + 1) {
      _preg_268435582 = Rotate(comb_rc_result30_130, comb_cc_index_n30_135 * 9408);
      Copy_ciph(&_ckks_gen_tmp_2293_417, &_preg_268435582);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_152_627, &_ckks_gen_tmp_2293_417);
      Rescale(&_pgen_tmp_152_627._c0_poly, &_ckks_gen_tmp_2293_417._c0_poly);
      Rescale(&_pgen_tmp_152_627._c1_poly, &_ckks_gen_tmp_2293_417._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg_ofst(&_pgen_tmp_153_628, 31/* cst_188 */, (comb_cc_index_n30_135) * (25088), 25088, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_154_629, &_pgen_tmp_152_627, &_pgen_tmp_153_628);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&ss_result30_133, &ss_result30_133, &_pgen_tmp_154_629);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&ss_result30_133._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_154_629._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_152_627._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_153_628._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_154_629._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_152_627._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_153_628._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&ss_result30_133._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&ss_result30_133._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_154_629._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&ss_result30_133._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&ss_result30_133._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_154_629._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435582._c1_poly);
      Free_poly_data(&_preg_268435582._c0_poly);
    }
    Copy_ciph(&VS_out_conv_halo6_114[siv_n6_125], &ss_result30_133);
  }
  Free_ciph_poly(VS_out_conv6_113, 16);
  Free_poly_data(&_pgen_tmp_147_622._poly);
  Free_poly_data(&_ckks_gen_tmp_2187_415._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2187_415._c0_poly);
  Free_poly_data(&_pgen_tmp_148_623._c1_poly);
  Free_poly_data(&_pgen_tmp_148_623._c0_poly);
  Free_poly_data(&comb_row_result30_127._c1_poly);
  Free_poly_data(&comb_row_result30_127._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_2240_416._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2240_416._c0_poly);
  Free_poly_data(&_pgen_tmp_150_625._poly);
  Free_poly_data(&_pgen_tmp_149_624._c1_poly);
  Free_poly_data(&_pgen_tmp_149_624._c0_poly);
  Free_poly_data(&_pgen_tmp_151_626._c1_poly);
  Free_poly_data(&_pgen_tmp_151_626._c0_poly);
  Free_poly_data(&comb_rc_result30_130._c1_poly);
  Free_poly_data(&comb_rc_result30_130._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_2293_417._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2293_417._c0_poly);
  Free_poly_data(&_pgen_tmp_153_628._poly);
  Free_poly_data(&_pgen_tmp_152_627._c1_poly);
  Free_poly_data(&_pgen_tmp_152_627._c0_poly);
  Free_poly_data(&_pgen_tmp_154_629._c1_poly);
  Free_poly_data(&_pgen_tmp_154_629._c0_poly);
  Free_poly_data(&ss_result30_133._c1_poly);
  Free_poly_data(&ss_result30_133._c0_poly);
  for (rescale_iv_455 = 0; rescale_iv_455 < 16; rescale_iv_455 = rescale_iv_455 + 1) {
    _pgen_tmp_155_630 = VS_out_conv_halo6_114[rescale_iv_455];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_156_631, &_pgen_tmp_155_630);
    Rescale(&_pgen_tmp_156_631._c0_poly, &_pgen_tmp_155_630._c0_poly);
    Rescale(&_pgen_tmp_156_631._c1_poly, &_pgen_tmp_155_630._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv_halo6_114[rescale_iv_455], &_pgen_tmp_156_631);
  }
  Free_poly_data(&_pgen_tmp_156_631._c1_poly);
  Free_poly_data(&_pgen_tmp_156_631._c0_poly);
  for (reshardm_n6_136 = 0; reshardm_n6_136 < 4; reshardm_n6_136 = reshardm_n6_136 + 1) {
    _pgen_tmp_158_633 = VS_out_conv_halo6_114[(reshardm_n6_136 * 4)];
    _pgen_tmp_159_634 = VS_out_conv_halo6_114[((reshardm_n6_136 * 4) + 1)];
    _preg_268435583 = Rotate(_pgen_tmp_159_634, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_160_635, &_pgen_tmp_158_633, &_preg_268435583);
    CMPLR_TM_END(12, 0);
    _pgen_tmp_162_637 = VS_out_conv_halo6_114[((reshardm_n6_136 * 4) + 2)];
    _pgen_tmp_163_638 = VS_out_conv_halo6_114[((reshardm_n6_136 * 4) + 3)];
    _preg_268435584 = Rotate(_pgen_tmp_163_638, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_161_636, &_pgen_tmp_162_637, &_preg_268435584);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&_pgen_tmp_161_636._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_161_636._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_162_637._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435584._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_161_636._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_162_637._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435584._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    _preg_268435585 = Rotate(_pgen_tmp_161_636, -12544);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_157_632, &_pgen_tmp_160_635, &_preg_268435585);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&_pgen_tmp_157_632._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_160_635._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_158_633._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435583._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_160_635._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_158_633._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435583._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_157_632._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_160_635._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435585._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_157_632._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_160_635._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435585._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    Copy_ciph(&output_reshard6_137[reshardm_n6_136], &_pgen_tmp_157_632);
    Free_poly_data(&_preg_268435583._c1_poly);
    Free_poly_data(&_preg_268435583._c0_poly);
    Free_poly_data(&_preg_268435584._c1_poly);
    Free_poly_data(&_preg_268435584._c0_poly);
    Free_poly_data(&_preg_268435585._c1_poly);
    Free_poly_data(&_preg_268435585._c0_poly);
  }
  Free_ciph_poly(VS_out_conv_halo6_114, 16);
  Free_poly_data(&_pgen_tmp_161_636._c1_poly);
  Free_poly_data(&_pgen_tmp_161_636._c0_poly);
  Free_poly_data(&_pgen_tmp_160_635._c1_poly);
  Free_poly_data(&_pgen_tmp_160_635._c0_poly);
  Free_poly_data(&_pgen_tmp_157_632._c1_poly);
  Free_poly_data(&_pgen_tmp_157_632._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 52
  // Conv_15
  // pragma: 65536, 1027, 53
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv7_138, 0, sizeof(VS_out_conv7_138));
  memset(&VS_out_conv_halo7_139, 0, sizeof(VS_out_conv_halo7_139));
  for (mesh_y_n7_140 = 0; mesh_y_n7_140 < 8; mesh_y_n7_140 = mesh_y_n7_140 + 1) {
    for (mesh_z_n7_141 = 0; mesh_z_n7_141 < 1; mesh_z_n7_141 = mesh_z_n7_141 + 1) {
      Copy_ciph(&_preg_268435479, &VS_out_relu5_110[((mesh_y_n7_140 * 1) + mesh_z_n7_141)]);
      Copy_ciph(&input_dup_n30_142, &_preg_268435479);
      for (bs_input_n30_143 = 0; bs_input_n30_143 < 9; bs_input_n30_143 = bs_input_n30_143 + 1) {
        _preg_268435586 = Rotate(input_dup_n30_142, _cst_193[bs_input_n30_143]);
        Copy_ciph(&input_block_n30_144[bs_input_n30_143], &_preg_268435586);
        Free_poly_data(&_preg_268435586._c1_poly);
        Free_poly_data(&_preg_268435586._c0_poly);
      }
      for (mesh_x_n7_145 = 0; mesh_x_n7_145 < 16; mesh_x_n7_145 = mesh_x_n7_145 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=9
        Zero_ciph(&result_n31_146);
        for (num_grid_n31_147 = 0; num_grid_n31_147 < 8; num_grid_n31_147 = num_grid_n31_147 + 1) {
          Zero_ciph(&result_grid_n31_148);
          for (cap_block_n31_149 = 0; cap_block_n31_149 < 9; cap_block_n31_149 = cap_block_n31_149 + 1) {
            _ckks_gen_tmp_2468_418 = input_block_n30_144[cap_block_n31_149];
            Pt_from_msg_ofst(&_pgen_tmp_164_639, 32/* cst_189 */, (((((mesh_x_n7_145 * 8) + mesh_y_n7_140) * 72) + (cap_block_n31_149 + (num_grid_n31_147 * 9)))) * (25088), 25088, 1, 6);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_165_640, &_ckks_gen_tmp_2468_418, &_pgen_tmp_164_639);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n31_148, &result_grid_n31_148, &_pgen_tmp_165_640);
            _pgen_modulus_472 = Q_modulus();
            _pgen_num_q_473 = Poly_level(&result_grid_n31_148._c0_poly);
            for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_165_640._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_2468_418._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_164_639._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_165_640._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_2468_418._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_164_639._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n31_148._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n31_148._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_165_640._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n31_148._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n31_148._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_165_640._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              _pgen_modulus_472 = _pgen_modulus_472 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_167_642, &result_grid_n31_148);
          Rescale(&_pgen_tmp_167_642._c0_poly, &result_grid_n31_148._c0_poly);
          Rescale(&_pgen_tmp_167_642._c1_poly, &result_grid_n31_148._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_168_643, 33/* cst_194 */, (num_grid_n31_147) * (25088), 25088, 1, 5);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_166_641, &_pgen_tmp_167_642, &_pgen_tmp_168_643);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_166_641._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_166_641._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_167_642._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_168_643._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_166_641._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_167_642._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_168_643._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435587 = Rotate(_pgen_tmp_166_641, -25088 + (num_grid_n31_147 * 3136));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_170_645, &result_grid_n31_148);
          Rescale(&_pgen_tmp_170_645._c0_poly, &result_grid_n31_148._c0_poly);
          Rescale(&_pgen_tmp_170_645._c1_poly, &result_grid_n31_148._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_171_646, 34/* cst_195 */, (num_grid_n31_147) * (25088), 25088, 1, 5);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_169_644, &_pgen_tmp_170_645, &_pgen_tmp_171_646);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_169_644._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_169_644._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_170_645._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_171_646._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_169_644._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_170_645._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_171_646._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435588 = Rotate(_pgen_tmp_169_644, num_grid_n31_147 * 3136);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_172_647, &_preg_268435587, &_preg_268435588);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n31_146, &result_n31_146, &_pgen_tmp_172_647);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&result_n31_146._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_172_647._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435587._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435588._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_172_647._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435587._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435588._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n31_146._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n31_146._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_172_647._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n31_146._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n31_146._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_172_647._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435587._c1_poly);
          Free_poly_data(&_preg_268435587._c0_poly);
          Free_poly_data(&_preg_268435588._c1_poly);
          Free_poly_data(&_preg_268435588._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_173_648, 35 /* cst_192 */, 25088, 2, 5);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n31_146, &result_n31_146, &_pgen_tmp_173_648);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&result_n31_146._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&result_n31_146._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n31_146._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_173_648._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Set_coeffs(&result_n31_146._c1_poly, _pgen_rns_idx_474, degree, Coeffs(&result_n31_146._c1_poly, _pgen_rns_idx_474, degree));
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_175_650 = VS_out_conv7_138[((mesh_x_n7_145 * 1) + mesh_z_n7_141)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_174_649, &_pgen_tmp_175_650, &result_n31_146);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&_pgen_tmp_174_649._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_174_649._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_175_650._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n31_146._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_174_649._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_175_650._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n31_146._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv7_138[((mesh_x_n7_145 * 1) + mesh_z_n7_141)], &_pgen_tmp_174_649);
      }
    }
  }
  Free_ciph_poly(VS_out_relu5_110, 8);
  Free_poly_data(&_preg_268435479._c1_poly);
  Free_poly_data(&_preg_268435479._c0_poly);
  Free_poly_data(&input_dup_n30_142._c1_poly);
  Free_poly_data(&input_dup_n30_142._c0_poly);
  Free_ciph_poly(input_block_n30_144, 9);
  Free_poly_data(&_pgen_tmp_164_639._poly);
  Free_poly_data(&_pgen_tmp_165_640._c1_poly);
  Free_poly_data(&_pgen_tmp_165_640._c0_poly);
  Free_poly_data(&_pgen_tmp_168_643._poly);
  Free_poly_data(&_pgen_tmp_167_642._c1_poly);
  Free_poly_data(&_pgen_tmp_167_642._c0_poly);
  Free_poly_data(&_pgen_tmp_166_641._c1_poly);
  Free_poly_data(&_pgen_tmp_166_641._c0_poly);
  Free_poly_data(&result_grid_n31_148._c1_poly);
  Free_poly_data(&result_grid_n31_148._c0_poly);
  Free_poly_data(&_pgen_tmp_171_646._poly);
  Free_poly_data(&_pgen_tmp_170_645._c1_poly);
  Free_poly_data(&_pgen_tmp_170_645._c0_poly);
  Free_poly_data(&_pgen_tmp_169_644._c1_poly);
  Free_poly_data(&_pgen_tmp_169_644._c0_poly);
  Free_poly_data(&_pgen_tmp_172_647._c1_poly);
  Free_poly_data(&_pgen_tmp_172_647._c0_poly);
  Free_poly_data(&_pgen_tmp_173_648._poly);
  Free_poly_data(&result_n31_146._c1_poly);
  Free_poly_data(&result_n31_146._c0_poly);
  Free_poly_data(&_pgen_tmp_174_649._c1_poly);
  Free_poly_data(&_pgen_tmp_174_649._c0_poly);
  for (rescale_iv_456 = 0; rescale_iv_456 < 16; rescale_iv_456 = rescale_iv_456 + 1) {
    _pgen_tmp_176_651 = VS_out_conv7_138[rescale_iv_456];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_177_652, &_pgen_tmp_176_651);
    Rescale(&_pgen_tmp_177_652._c0_poly, &_pgen_tmp_176_651._c0_poly);
    Rescale(&_pgen_tmp_177_652._c1_poly, &_pgen_tmp_176_651._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv7_138[rescale_iv_456], &_pgen_tmp_177_652);
  }
  Free_poly_data(&_pgen_tmp_177_652._c1_poly);
  Free_poly_data(&_pgen_tmp_177_652._c0_poly);
  for (siv_n7_150 = 0; siv_n7_150 < 16; siv_n7_150 = siv_n7_150 + 1) {
    orig_result31_151 = VS_out_conv7_138[siv_n7_150];
    Zero_ciph(&comb_row_result32_152);
    for (comb_row_lf_index_n32_153 = 0; comb_row_lf_index_n32_153 < 1; comb_row_lf_index_n32_153 = comb_row_lf_index_n32_153 + 1) {
      _preg_268435589 = Rotate(orig_result31_151, 1 << comb_row_lf_index_n32_153);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&orig_result31_151, &orig_result31_151, &_preg_268435589);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&orig_result31_151._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&orig_result31_151._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&orig_result31_151._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435589._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&orig_result31_151._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&orig_result31_151._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435589._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435589._c1_poly);
      Free_poly_data(&_preg_268435589._c0_poly);
    }
    for (comb_row_index_n32_154 = 0; comb_row_index_n32_154 < 14; comb_row_index_n32_154 = comb_row_index_n32_154 + 1) {
      _preg_268435590 = Rotate(orig_result31_151, comb_row_index_n32_154 * 2);
      Copy_ciph(&_ckks_gen_tmp_2615_419, &_preg_268435590);
      Pt_from_msg_ofst(&_pgen_tmp_178_653, 36/* cst_196 */, (comb_row_index_n32_154) * (25088), 25088, 1, 4);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_179_654, &_ckks_gen_tmp_2615_419, &_pgen_tmp_178_653);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_row_result32_152, &comb_row_result32_152, &_pgen_tmp_179_654);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&comb_row_result32_152._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_179_654._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_2615_419._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_178_653._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_179_654._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_2615_419._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_178_653._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_row_result32_152._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result32_152._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_179_654._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_row_result32_152._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result32_152._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_179_654._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435590._c1_poly);
      Free_poly_data(&_preg_268435590._c0_poly);
    }
    Zero_ciph(&comb_rc_result32_155);
    for (comb_rc_lf_index_n32_156 = 0; comb_rc_lf_index_n32_156 < 2; comb_rc_lf_index_n32_156 = comb_rc_lf_index_n32_156 + 1) {
      _preg_268435591 = Rotate(comb_row_result32_152, (1 << comb_rc_lf_index_n32_156) * 84);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_row_result32_152, &comb_row_result32_152, &_preg_268435591);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&comb_row_result32_152._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&comb_row_result32_152._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result32_152._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435591._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_row_result32_152._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result32_152._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435591._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435591._c1_poly);
      Free_poly_data(&_preg_268435591._c0_poly);
    }
    for (comb_rc_index_n32_157 = 0; comb_rc_index_n32_157 < 7; comb_rc_index_n32_157 = comb_rc_index_n32_157 + 1) {
      _preg_268435592 = Rotate(comb_row_result32_152, comb_rc_index_n32_157 * 336);
      Copy_ciph(&_ckks_gen_tmp_2668_420, &_preg_268435592);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_180_655, &_ckks_gen_tmp_2668_420);
      Rescale(&_pgen_tmp_180_655._c0_poly, &_ckks_gen_tmp_2668_420._c0_poly);
      Rescale(&_pgen_tmp_180_655._c1_poly, &_ckks_gen_tmp_2668_420._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg_ofst(&_pgen_tmp_181_656, 37/* cst_197 */, (comb_rc_index_n32_157) * (25088), 25088, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_182_657, &_pgen_tmp_180_655, &_pgen_tmp_181_656);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_rc_result32_155, &comb_rc_result32_155, &_pgen_tmp_182_657);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&comb_rc_result32_155._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_182_657._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_180_655._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_181_656._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_182_657._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_180_655._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_181_656._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_rc_result32_155._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_rc_result32_155._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_182_657._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_rc_result32_155._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_rc_result32_155._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_182_657._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435592._c1_poly);
      Free_poly_data(&_preg_268435592._c0_poly);
    }
    Zero_ciph(&ss_result32_158);
    for (comb_cc_lf_index_n32_159 = 0; comb_cc_lf_index_n32_159 < 2; comb_cc_lf_index_n32_159 = comb_cc_lf_index_n32_159 + 1) {
      _preg_268435593 = Rotate(comb_rc_result32_155, (1 << comb_cc_lf_index_n32_159) * 2352);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_rc_result32_155, &comb_rc_result32_155, &_preg_268435593);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&comb_rc_result32_155._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&comb_rc_result32_155._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_rc_result32_155._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435593._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_rc_result32_155._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_rc_result32_155._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435593._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435593._c1_poly);
      Free_poly_data(&_preg_268435593._c0_poly);
    }
    for (comb_cc_index_n32_160 = 0; comb_cc_index_n32_160 < 2; comb_cc_index_n32_160 = comb_cc_index_n32_160 + 1) {
      _preg_268435594 = Rotate(comb_rc_result32_155, comb_cc_index_n32_160 * 9408);
      Copy_ciph(&_ckks_gen_tmp_2721_421, &_preg_268435594);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_183_658, &_ckks_gen_tmp_2721_421);
      Rescale(&_pgen_tmp_183_658._c0_poly, &_ckks_gen_tmp_2721_421._c0_poly);
      Rescale(&_pgen_tmp_183_658._c1_poly, &_ckks_gen_tmp_2721_421._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg_ofst(&_pgen_tmp_184_659, 38/* cst_198 */, (comb_cc_index_n32_160) * (25088), 25088, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_185_660, &_pgen_tmp_183_658, &_pgen_tmp_184_659);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&ss_result32_158, &ss_result32_158, &_pgen_tmp_185_660);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&ss_result32_158._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_185_660._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_183_658._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_184_659._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_185_660._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_183_658._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_184_659._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&ss_result32_158._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&ss_result32_158._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_185_660._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&ss_result32_158._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&ss_result32_158._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_185_660._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435594._c1_poly);
      Free_poly_data(&_preg_268435594._c0_poly);
    }
    Copy_ciph(&VS_out_conv_halo7_139[siv_n7_150], &ss_result32_158);
  }
  Free_ciph_poly(VS_out_conv7_138, 16);
  Free_poly_data(&_pgen_tmp_178_653._poly);
  Free_poly_data(&_ckks_gen_tmp_2615_419._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2615_419._c0_poly);
  Free_poly_data(&_pgen_tmp_179_654._c1_poly);
  Free_poly_data(&_pgen_tmp_179_654._c0_poly);
  Free_poly_data(&comb_row_result32_152._c1_poly);
  Free_poly_data(&comb_row_result32_152._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_2668_420._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2668_420._c0_poly);
  Free_poly_data(&_pgen_tmp_181_656._poly);
  Free_poly_data(&_pgen_tmp_180_655._c1_poly);
  Free_poly_data(&_pgen_tmp_180_655._c0_poly);
  Free_poly_data(&_pgen_tmp_182_657._c1_poly);
  Free_poly_data(&_pgen_tmp_182_657._c0_poly);
  Free_poly_data(&comb_rc_result32_155._c1_poly);
  Free_poly_data(&comb_rc_result32_155._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_2721_421._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2721_421._c0_poly);
  Free_poly_data(&_pgen_tmp_184_659._poly);
  Free_poly_data(&_pgen_tmp_183_658._c1_poly);
  Free_poly_data(&_pgen_tmp_183_658._c0_poly);
  Free_poly_data(&_pgen_tmp_185_660._c1_poly);
  Free_poly_data(&_pgen_tmp_185_660._c0_poly);
  Free_poly_data(&ss_result32_158._c1_poly);
  Free_poly_data(&ss_result32_158._c0_poly);
  for (rescale_iv_457 = 0; rescale_iv_457 < 16; rescale_iv_457 = rescale_iv_457 + 1) {
    _pgen_tmp_186_661 = VS_out_conv_halo7_139[rescale_iv_457];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_187_662, &_pgen_tmp_186_661);
    Rescale(&_pgen_tmp_187_662._c0_poly, &_pgen_tmp_186_661._c0_poly);
    Rescale(&_pgen_tmp_187_662._c1_poly, &_pgen_tmp_186_661._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv_halo7_139[rescale_iv_457], &_pgen_tmp_187_662);
  }
  Free_poly_data(&_pgen_tmp_187_662._c1_poly);
  Free_poly_data(&_pgen_tmp_187_662._c0_poly);
  for (reshardm_n7_161 = 0; reshardm_n7_161 < 4; reshardm_n7_161 = reshardm_n7_161 + 1) {
    _pgen_tmp_189_664 = VS_out_conv_halo7_139[(reshardm_n7_161 * 4)];
    _pgen_tmp_190_665 = VS_out_conv_halo7_139[((reshardm_n7_161 * 4) + 1)];
    _preg_268435595 = Rotate(_pgen_tmp_190_665, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_191_666, &_pgen_tmp_189_664, &_preg_268435595);
    CMPLR_TM_END(12, 0);
    _pgen_tmp_193_668 = VS_out_conv_halo7_139[((reshardm_n7_161 * 4) + 2)];
    _pgen_tmp_194_669 = VS_out_conv_halo7_139[((reshardm_n7_161 * 4) + 3)];
    _preg_268435596 = Rotate(_pgen_tmp_194_669, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_192_667, &_pgen_tmp_193_668, &_preg_268435596);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&_pgen_tmp_192_667._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_192_667._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_193_668._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435596._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_192_667._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_193_668._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435596._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    _preg_268435597 = Rotate(_pgen_tmp_192_667, -12544);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_188_663, &_pgen_tmp_191_666, &_preg_268435597);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&_pgen_tmp_188_663._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_191_666._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_189_664._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435595._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_191_666._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_189_664._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435595._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_188_663._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_191_666._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435597._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_188_663._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_191_666._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435597._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    Copy_ciph(&output_reshard7_162[reshardm_n7_161], &_pgen_tmp_188_663);
    Free_poly_data(&_preg_268435595._c1_poly);
    Free_poly_data(&_preg_268435595._c0_poly);
    Free_poly_data(&_preg_268435596._c1_poly);
    Free_poly_data(&_preg_268435596._c0_poly);
    Free_poly_data(&_preg_268435597._c1_poly);
    Free_poly_data(&_preg_268435597._c0_poly);
  }
  Free_ciph_poly(VS_out_conv_halo7_139, 16);
  Free_poly_data(&_pgen_tmp_192_667._c1_poly);
  Free_poly_data(&_pgen_tmp_192_667._c0_poly);
  Free_poly_data(&_pgen_tmp_191_666._c1_poly);
  Free_poly_data(&_pgen_tmp_191_666._c0_poly);
  Free_poly_data(&_pgen_tmp_188_663._c1_poly);
  Free_poly_data(&_pgen_tmp_188_663._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 53
  // Relu_16
  // pragma: 65536, 1033, 54
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu7_163, 0, sizeof(VS_out_relu7_163));
  for (mesh_y_n7_164 = 0; mesh_y_n7_164 < 4; mesh_y_n7_164 = mesh_y_n7_164 + 1) {
    for (mesh_z_n7_165 = 0; mesh_z_n7_165 < 1; mesh_z_n7_165 = mesh_z_n7_165 + 1) {
      _pgen_tmp_195_670 = output_reshard7_162[((mesh_y_n7_164 * 1) + mesh_z_n7_165)];
      Bootstrap(&_preg_268435480, &_pgen_tmp_195_670, 15);
      Encode_float(&_pgen_tmp_196_671, &_cst_355, 1, 1, Level(&_preg_268435480));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435482, &_preg_268435480, &_pgen_tmp_196_671);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_preg_268435482._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_preg_268435482._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435480._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_196_671._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_preg_268435482._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435480._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_196_671._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_197_672, &_preg_268435482);
      Rescale(&_pgen_tmp_197_672._c0_poly, &_preg_268435482._c0_poly);
      Rescale(&_pgen_tmp_197_672._c1_poly, &_preg_268435482._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435481 = App_relu(_preg_268435480, _pgen_tmp_197_672, 25088);
      _pgen_tmp_199_674 = VS_out_relu7_163[((mesh_y_n7_164 * 1) + mesh_z_n7_165)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_198_673, &_pgen_tmp_199_674, &_preg_268435481);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_pgen_tmp_198_673._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_198_673._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_199_674._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435481._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_198_673._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_199_674._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435481._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu7_163[((mesh_y_n7_164 * 1) + mesh_z_n7_165)], &_pgen_tmp_198_673);
    }
  }
  Free_ciph_poly(output_reshard7_162, 4);
  Free_poly_data(&_pgen_tmp_196_671._poly);
  Free_poly_data(&_preg_268435482._c1_poly);
  Free_poly_data(&_preg_268435482._c0_poly);
  Free_poly_data(&_pgen_tmp_197_672._c1_poly);
  Free_poly_data(&_pgen_tmp_197_672._c0_poly);
  Free_poly_data(&_preg_268435480._c1_poly);
  Free_poly_data(&_preg_268435480._c0_poly);
  Free_poly_data(&_preg_268435481._c1_poly);
  Free_poly_data(&_preg_268435481._c0_poly);
  Free_poly_data(&_pgen_tmp_198_673._c1_poly);
  Free_poly_data(&_pgen_tmp_198_673._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 54
  // Conv_17
  // pragma: 65536, 1027, 55
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv8_166, 0, sizeof(VS_out_conv8_166));
  memset(&VS_out_conv_halo8_167, 0, sizeof(VS_out_conv_halo8_167));
  Free_ciph_poly(VS_out_conv_halo8_167, 4);
  for (mesh_y_n8_168 = 0; mesh_y_n8_168 < 4; mesh_y_n8_168 = mesh_y_n8_168 + 1) {
    for (mesh_z_n8_169 = 0; mesh_z_n8_169 < 1; mesh_z_n8_169 = mesh_z_n8_169 + 1) {
      Copy_ciph(&_preg_268435483, &VS_out_relu7_163[((mesh_y_n8_168 * 1) + mesh_z_n8_169)]);
      Copy_ciph(&input_dup_n32_170, &_preg_268435483);
      for (bs_input_n32_171 = 0; bs_input_n32_171 < 9; bs_input_n32_171 = bs_input_n32_171 + 1) {
        _preg_268435598 = Rotate(input_dup_n32_170, _cst_203[bs_input_n32_171]);
        Copy_ciph(&input_block_n32_172[bs_input_n32_171], &_preg_268435598);
        Free_poly_data(&_preg_268435598._c1_poly);
        Free_poly_data(&_preg_268435598._c0_poly);
      }
      for (mesh_x_n8_173 = 0; mesh_x_n8_173 < 4; mesh_x_n8_173 = mesh_x_n8_173 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=9
        Zero_ciph(&result_n33_174);
        for (num_grid_n33_175 = 0; num_grid_n33_175 < 32; num_grid_n33_175 = num_grid_n33_175 + 1) {
          Zero_ciph(&result_grid_n33_176);
          for (cap_block_n33_177 = 0; cap_block_n33_177 < 9; cap_block_n33_177 = cap_block_n33_177 + 1) {
            _ckks_gen_tmp_2963_422 = input_block_n32_172[cap_block_n33_177];
            Pt_from_msg_ofst(&_pgen_tmp_200_675, 39/* cst_199 */, (((((mesh_x_n8_173 * 4) + mesh_y_n8_168) * 288) + (cap_block_n33_177 + (num_grid_n33_175 * 9)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_201_676, &_ckks_gen_tmp_2963_422, &_pgen_tmp_200_675);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n33_176, &result_grid_n33_176, &_pgen_tmp_201_676);
            _pgen_modulus_472 = Q_modulus();
            _pgen_num_q_473 = Poly_level(&result_grid_n33_176._c0_poly);
            for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_201_676._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_2963_422._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_200_675._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_201_676._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_2963_422._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_200_675._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n33_176._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n33_176._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_201_676._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n33_176._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n33_176._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_201_676._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              _pgen_modulus_472 = _pgen_modulus_472 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_203_678, &result_grid_n33_176);
          Rescale(&_pgen_tmp_203_678._c0_poly, &result_grid_n33_176._c0_poly);
          Rescale(&_pgen_tmp_203_678._c1_poly, &result_grid_n33_176._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_204_679, 40/* cst_204 */, (num_grid_n33_175) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_202_677, &_pgen_tmp_203_678, &_pgen_tmp_204_679);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_202_677._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_202_677._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_203_678._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_204_679._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_202_677._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_203_678._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_204_679._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435599 = Rotate(_pgen_tmp_202_677, -25088 + (num_grid_n33_175 * 784));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_206_681, &result_grid_n33_176);
          Rescale(&_pgen_tmp_206_681._c0_poly, &result_grid_n33_176._c0_poly);
          Rescale(&_pgen_tmp_206_681._c1_poly, &result_grid_n33_176._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_207_682, 41/* cst_205 */, (num_grid_n33_175) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_205_680, &_pgen_tmp_206_681, &_pgen_tmp_207_682);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_205_680._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_205_680._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_206_681._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_207_682._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_205_680._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_206_681._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_207_682._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435600 = Rotate(_pgen_tmp_205_680, num_grid_n33_175 * 784);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_208_683, &_preg_268435599, &_preg_268435600);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n33_174, &result_n33_174, &_pgen_tmp_208_683);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&result_n33_174._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_208_683._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435599._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435600._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_208_683._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435599._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435600._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n33_174._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n33_174._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_208_683._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n33_174._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n33_174._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_208_683._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435599._c1_poly);
          Free_poly_data(&_preg_268435599._c0_poly);
          Free_poly_data(&_preg_268435600._c1_poly);
          Free_poly_data(&_preg_268435600._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_209_684, 42 /* cst_202 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n33_174, &result_n33_174, &_pgen_tmp_209_684);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&result_n33_174._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&result_n33_174._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n33_174._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_209_684._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Set_coeffs(&result_n33_174._c1_poly, _pgen_rns_idx_474, degree, Coeffs(&result_n33_174._c1_poly, _pgen_rns_idx_474, degree));
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_211_686 = VS_out_conv8_166[((mesh_x_n8_173 * 1) + mesh_z_n8_169)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_210_685, &_pgen_tmp_211_686, &result_n33_174);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&_pgen_tmp_210_685._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_210_685._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_211_686._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n33_174._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_210_685._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_211_686._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n33_174._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv8_166[((mesh_x_n8_173 * 1) + mesh_z_n8_169)], &_pgen_tmp_210_685);
      }
    }
  }
  Free_ciph_poly(VS_out_relu7_163, 4);
  Free_poly_data(&_preg_268435483._c1_poly);
  Free_poly_data(&_preg_268435483._c0_poly);
  Free_poly_data(&input_dup_n32_170._c1_poly);
  Free_poly_data(&input_dup_n32_170._c0_poly);
  Free_ciph_poly(input_block_n32_172, 9);
  Free_poly_data(&_pgen_tmp_200_675._poly);
  Free_poly_data(&_pgen_tmp_201_676._c1_poly);
  Free_poly_data(&_pgen_tmp_201_676._c0_poly);
  Free_poly_data(&_pgen_tmp_204_679._poly);
  Free_poly_data(&_pgen_tmp_203_678._c1_poly);
  Free_poly_data(&_pgen_tmp_203_678._c0_poly);
  Free_poly_data(&_pgen_tmp_202_677._c1_poly);
  Free_poly_data(&_pgen_tmp_202_677._c0_poly);
  Free_poly_data(&result_grid_n33_176._c1_poly);
  Free_poly_data(&result_grid_n33_176._c0_poly);
  Free_poly_data(&_pgen_tmp_207_682._poly);
  Free_poly_data(&_pgen_tmp_206_681._c1_poly);
  Free_poly_data(&_pgen_tmp_206_681._c0_poly);
  Free_poly_data(&_pgen_tmp_205_680._c1_poly);
  Free_poly_data(&_pgen_tmp_205_680._c0_poly);
  Free_poly_data(&_pgen_tmp_208_683._c1_poly);
  Free_poly_data(&_pgen_tmp_208_683._c0_poly);
  Free_poly_data(&_pgen_tmp_209_684._poly);
  Free_poly_data(&result_n33_174._c1_poly);
  Free_poly_data(&result_n33_174._c0_poly);
  Free_poly_data(&_pgen_tmp_210_685._c1_poly);
  Free_poly_data(&_pgen_tmp_210_685._c0_poly);
  for (rescale_iv_458 = 0; rescale_iv_458 < 4; rescale_iv_458 = rescale_iv_458 + 1) {
    _pgen_tmp_212_687 = VS_out_conv8_166[rescale_iv_458];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_213_688, &_pgen_tmp_212_687);
    Rescale(&_pgen_tmp_213_688._c0_poly, &_pgen_tmp_212_687._c0_poly);
    Rescale(&_pgen_tmp_213_688._c1_poly, &_pgen_tmp_212_687._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv8_166[rescale_iv_458], &_pgen_tmp_213_688);
  }
  Free_poly_data(&_pgen_tmp_213_688._c1_poly);
  Free_poly_data(&_pgen_tmp_213_688._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 55
  // Add_18
  // pragma: 65536, 1025, 56
  CMPLR_TM_START(2, 0);
  memset(&VS_out_add8_178, 0, sizeof(VS_out_add8_178));
  for (mesh_y_n8_179 = 0; mesh_y_n8_179 < 4; mesh_y_n8_179 = mesh_y_n8_179 + 1) {
    for (mesh_z_n8_180 = 0; mesh_z_n8_180 < 1; mesh_z_n8_180 = mesh_z_n8_180 + 1) {
      _pgen_tmp_215_690 = VS_out_add8_178[((mesh_y_n8_179 * 1) + mesh_z_n8_180)];
      _pgen_tmp_216_691 = VS_out_conv8_166[((mesh_y_n8_179 * 1) + mesh_z_n8_180)];
      _pgen_tmp_217_692 = output_reshard6_137[((mesh_y_n8_179 * 1) + mesh_z_n8_180)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_218_693, &_pgen_tmp_216_691, &_pgen_tmp_217_692);
      CMPLR_TM_END(12, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_214_689, &_pgen_tmp_215_690, &_pgen_tmp_218_693);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_pgen_tmp_214_689._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_218_693._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_216_691._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_217_692._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_218_693._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_216_691._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_217_692._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_214_689._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_215_690._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_218_693._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_214_689._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_215_690._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_218_693._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_add8_178[((mesh_y_n8_179 * 1) + mesh_z_n8_180)], &_pgen_tmp_214_689);
    }
  }
  Free_ciph_poly(VS_out_conv8_166, 4);
  Free_ciph_poly(output_reshard6_137, 4);
  Free_poly_data(&_pgen_tmp_218_693._c1_poly);
  Free_poly_data(&_pgen_tmp_218_693._c0_poly);
  Free_poly_data(&_pgen_tmp_214_689._c1_poly);
  Free_poly_data(&_pgen_tmp_214_689._c0_poly);
  CMPLR_TM_END(2, 0);
  // pragma: 65537, 1025, 56
  // Relu_19
  // pragma: 65536, 1033, 57
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu8_181, 0, sizeof(VS_out_relu8_181));
  for (mesh_y_n8_182 = 0; mesh_y_n8_182 < 4; mesh_y_n8_182 = mesh_y_n8_182 + 1) {
    for (mesh_z_n8_183 = 0; mesh_z_n8_183 < 1; mesh_z_n8_183 = mesh_z_n8_183 + 1) {
      _pgen_tmp_219_694 = VS_out_add8_178[((mesh_y_n8_182 * 1) + mesh_z_n8_183)];
      Bootstrap(&_preg_268435484, &_pgen_tmp_219_694, 15);
      Encode_float(&_pgen_tmp_220_695, &_cst_356, 1, 1, Level(&_preg_268435484));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435486, &_preg_268435484, &_pgen_tmp_220_695);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_preg_268435486._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_preg_268435486._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435484._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_220_695._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_preg_268435486._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435484._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_220_695._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_221_696, &_preg_268435486);
      Rescale(&_pgen_tmp_221_696._c0_poly, &_preg_268435486._c0_poly);
      Rescale(&_pgen_tmp_221_696._c1_poly, &_preg_268435486._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435485 = App_relu(_preg_268435484, _pgen_tmp_221_696, 25088);
      _pgen_tmp_223_698 = VS_out_relu8_181[((mesh_y_n8_182 * 1) + mesh_z_n8_183)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_222_697, &_pgen_tmp_223_698, &_preg_268435485);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_pgen_tmp_222_697._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_222_697._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_223_698._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435485._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_222_697._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_223_698._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435485._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu8_181[((mesh_y_n8_182 * 1) + mesh_z_n8_183)], &_pgen_tmp_222_697);
    }
  }
  Free_ciph_poly(VS_out_add8_178, 4);
  Free_poly_data(&_pgen_tmp_220_695._poly);
  Free_poly_data(&_preg_268435486._c1_poly);
  Free_poly_data(&_preg_268435486._c0_poly);
  Free_poly_data(&_pgen_tmp_221_696._c1_poly);
  Free_poly_data(&_pgen_tmp_221_696._c0_poly);
  Free_poly_data(&_preg_268435484._c1_poly);
  Free_poly_data(&_preg_268435484._c0_poly);
  Free_poly_data(&_preg_268435485._c1_poly);
  Free_poly_data(&_preg_268435485._c0_poly);
  Free_poly_data(&_pgen_tmp_222_697._c1_poly);
  Free_poly_data(&_pgen_tmp_222_697._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 57
  // Conv_20
  // pragma: 65536, 1027, 58
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv9_184, 0, sizeof(VS_out_conv9_184));
  memset(&VS_out_conv_halo9_185, 0, sizeof(VS_out_conv_halo9_185));
  Free_ciph_poly(VS_out_conv_halo9_185, 4);
  for (mesh_y_n9_186 = 0; mesh_y_n9_186 < 4; mesh_y_n9_186 = mesh_y_n9_186 + 1) {
    for (mesh_z_n9_187 = 0; mesh_z_n9_187 < 1; mesh_z_n9_187 = mesh_z_n9_187 + 1) {
      Copy_ciph(&_preg_268435487, &VS_out_relu8_181[((mesh_y_n9_186 * 1) + mesh_z_n9_187)]);
      Copy_ciph(&input_dup_n33_188, &_preg_268435487);
      for (bs_input_n33_189 = 0; bs_input_n33_189 < 9; bs_input_n33_189 = bs_input_n33_189 + 1) {
        _preg_268435601 = Rotate(input_dup_n33_188, _cst_210[bs_input_n33_189]);
        Copy_ciph(&input_block_n33_190[bs_input_n33_189], &_preg_268435601);
        Free_poly_data(&_preg_268435601._c1_poly);
        Free_poly_data(&_preg_268435601._c0_poly);
      }
      for (mesh_x_n9_191 = 0; mesh_x_n9_191 < 4; mesh_x_n9_191 = mesh_x_n9_191 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=9
        Zero_ciph(&result_n34_192);
        for (num_grid_n34_193 = 0; num_grid_n34_193 < 32; num_grid_n34_193 = num_grid_n34_193 + 1) {
          Zero_ciph(&result_grid_n34_194);
          for (cap_block_n34_195 = 0; cap_block_n34_195 < 9; cap_block_n34_195 = cap_block_n34_195 + 1) {
            _ckks_gen_tmp_3293_423 = input_block_n33_190[cap_block_n34_195];
            Pt_from_msg_ofst(&_pgen_tmp_224_699, 43/* cst_206 */, (((((mesh_x_n9_191 * 4) + mesh_y_n9_186) * 288) + (cap_block_n34_195 + (num_grid_n34_193 * 9)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_225_700, &_ckks_gen_tmp_3293_423, &_pgen_tmp_224_699);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n34_194, &result_grid_n34_194, &_pgen_tmp_225_700);
            _pgen_modulus_472 = Q_modulus();
            _pgen_num_q_473 = Poly_level(&result_grid_n34_194._c0_poly);
            for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_225_700._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_3293_423._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_224_699._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_225_700._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_3293_423._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_224_699._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n34_194._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n34_194._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_225_700._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n34_194._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n34_194._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_225_700._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              _pgen_modulus_472 = _pgen_modulus_472 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_227_702, &result_grid_n34_194);
          Rescale(&_pgen_tmp_227_702._c0_poly, &result_grid_n34_194._c0_poly);
          Rescale(&_pgen_tmp_227_702._c1_poly, &result_grid_n34_194._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_228_703, 44/* cst_211 */, (num_grid_n34_193) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_226_701, &_pgen_tmp_227_702, &_pgen_tmp_228_703);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_226_701._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_226_701._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_227_702._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_228_703._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_226_701._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_227_702._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_228_703._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435602 = Rotate(_pgen_tmp_226_701, -25088 + (num_grid_n34_193 * 784));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_230_705, &result_grid_n34_194);
          Rescale(&_pgen_tmp_230_705._c0_poly, &result_grid_n34_194._c0_poly);
          Rescale(&_pgen_tmp_230_705._c1_poly, &result_grid_n34_194._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_231_706, 45/* cst_212 */, (num_grid_n34_193) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_229_704, &_pgen_tmp_230_705, &_pgen_tmp_231_706);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_229_704._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_229_704._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_230_705._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_231_706._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_229_704._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_230_705._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_231_706._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435603 = Rotate(_pgen_tmp_229_704, num_grid_n34_193 * 784);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_232_707, &_preg_268435602, &_preg_268435603);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n34_192, &result_n34_192, &_pgen_tmp_232_707);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&result_n34_192._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_232_707._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435602._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435603._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_232_707._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435602._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435603._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n34_192._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n34_192._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_232_707._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n34_192._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n34_192._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_232_707._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435602._c1_poly);
          Free_poly_data(&_preg_268435602._c0_poly);
          Free_poly_data(&_preg_268435603._c1_poly);
          Free_poly_data(&_preg_268435603._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_233_708, 46 /* cst_209 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n34_192, &result_n34_192, &_pgen_tmp_233_708);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&result_n34_192._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&result_n34_192._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n34_192._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_233_708._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Set_coeffs(&result_n34_192._c1_poly, _pgen_rns_idx_474, degree, Coeffs(&result_n34_192._c1_poly, _pgen_rns_idx_474, degree));
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_235_710 = VS_out_conv9_184[((mesh_x_n9_191 * 1) + mesh_z_n9_187)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_234_709, &_pgen_tmp_235_710, &result_n34_192);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&_pgen_tmp_234_709._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_234_709._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_235_710._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n34_192._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_234_709._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_235_710._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n34_192._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv9_184[((mesh_x_n9_191 * 1) + mesh_z_n9_187)], &_pgen_tmp_234_709);
      }
    }
  }
  Free_poly_data(&_preg_268435487._c1_poly);
  Free_poly_data(&_preg_268435487._c0_poly);
  Free_poly_data(&input_dup_n33_188._c1_poly);
  Free_poly_data(&input_dup_n33_188._c0_poly);
  Free_ciph_poly(input_block_n33_190, 9);
  Free_poly_data(&_pgen_tmp_224_699._poly);
  Free_poly_data(&_pgen_tmp_225_700._c1_poly);
  Free_poly_data(&_pgen_tmp_225_700._c0_poly);
  Free_poly_data(&_pgen_tmp_228_703._poly);
  Free_poly_data(&_pgen_tmp_227_702._c1_poly);
  Free_poly_data(&_pgen_tmp_227_702._c0_poly);
  Free_poly_data(&_pgen_tmp_226_701._c1_poly);
  Free_poly_data(&_pgen_tmp_226_701._c0_poly);
  Free_poly_data(&result_grid_n34_194._c1_poly);
  Free_poly_data(&result_grid_n34_194._c0_poly);
  Free_poly_data(&_pgen_tmp_231_706._poly);
  Free_poly_data(&_pgen_tmp_230_705._c1_poly);
  Free_poly_data(&_pgen_tmp_230_705._c0_poly);
  Free_poly_data(&_pgen_tmp_229_704._c1_poly);
  Free_poly_data(&_pgen_tmp_229_704._c0_poly);
  Free_poly_data(&_pgen_tmp_232_707._c1_poly);
  Free_poly_data(&_pgen_tmp_232_707._c0_poly);
  Free_poly_data(&_pgen_tmp_233_708._poly);
  Free_poly_data(&result_n34_192._c1_poly);
  Free_poly_data(&result_n34_192._c0_poly);
  Free_poly_data(&_pgen_tmp_234_709._c1_poly);
  Free_poly_data(&_pgen_tmp_234_709._c0_poly);
  for (rescale_iv_459 = 0; rescale_iv_459 < 4; rescale_iv_459 = rescale_iv_459 + 1) {
    _pgen_tmp_236_711 = VS_out_conv9_184[rescale_iv_459];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_237_712, &_pgen_tmp_236_711);
    Rescale(&_pgen_tmp_237_712._c0_poly, &_pgen_tmp_236_711._c0_poly);
    Rescale(&_pgen_tmp_237_712._c1_poly, &_pgen_tmp_236_711._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv9_184[rescale_iv_459], &_pgen_tmp_237_712);
  }
  Free_poly_data(&_pgen_tmp_237_712._c1_poly);
  Free_poly_data(&_pgen_tmp_237_712._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 58
  // Relu_21
  // pragma: 65536, 1033, 59
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu9_196, 0, sizeof(VS_out_relu9_196));
  for (mesh_y_n9_197 = 0; mesh_y_n9_197 < 4; mesh_y_n9_197 = mesh_y_n9_197 + 1) {
    for (mesh_z_n9_198 = 0; mesh_z_n9_198 < 1; mesh_z_n9_198 = mesh_z_n9_198 + 1) {
      _pgen_tmp_238_713 = VS_out_conv9_184[((mesh_y_n9_197 * 1) + mesh_z_n9_198)];
      Bootstrap(&_preg_268435488, &_pgen_tmp_238_713, 15);
      Encode_float(&_pgen_tmp_239_714, &_cst_357, 1, 1, Level(&_preg_268435488));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435490, &_preg_268435488, &_pgen_tmp_239_714);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_preg_268435490._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_preg_268435490._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435488._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_239_714._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_preg_268435490._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435488._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_239_714._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_240_715, &_preg_268435490);
      Rescale(&_pgen_tmp_240_715._c0_poly, &_preg_268435490._c0_poly);
      Rescale(&_pgen_tmp_240_715._c1_poly, &_preg_268435490._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435489 = App_relu(_preg_268435488, _pgen_tmp_240_715, 25088);
      _pgen_tmp_242_717 = VS_out_relu9_196[((mesh_y_n9_197 * 1) + mesh_z_n9_198)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_241_716, &_pgen_tmp_242_717, &_preg_268435489);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_pgen_tmp_241_716._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_241_716._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_242_717._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435489._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_241_716._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_242_717._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435489._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu9_196[((mesh_y_n9_197 * 1) + mesh_z_n9_198)], &_pgen_tmp_241_716);
    }
  }
  Free_ciph_poly(VS_out_conv9_184, 4);
  Free_poly_data(&_pgen_tmp_239_714._poly);
  Free_poly_data(&_preg_268435490._c1_poly);
  Free_poly_data(&_preg_268435490._c0_poly);
  Free_poly_data(&_pgen_tmp_240_715._c1_poly);
  Free_poly_data(&_pgen_tmp_240_715._c0_poly);
  Free_poly_data(&_preg_268435488._c1_poly);
  Free_poly_data(&_preg_268435488._c0_poly);
  Free_poly_data(&_preg_268435489._c1_poly);
  Free_poly_data(&_preg_268435489._c0_poly);
  Free_poly_data(&_pgen_tmp_241_716._c1_poly);
  Free_poly_data(&_pgen_tmp_241_716._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 59
  // Conv_22
  // pragma: 65536, 1027, 60
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv10_199, 0, sizeof(VS_out_conv10_199));
  memset(&VS_out_conv_halo10_200, 0, sizeof(VS_out_conv_halo10_200));
  Free_ciph_poly(VS_out_conv_halo10_200, 4);
  for (mesh_y_n10_201 = 0; mesh_y_n10_201 < 4; mesh_y_n10_201 = mesh_y_n10_201 + 1) {
    for (mesh_z_n10_202 = 0; mesh_z_n10_202 < 1; mesh_z_n10_202 = mesh_z_n10_202 + 1) {
      Copy_ciph(&_preg_268435491, &VS_out_relu9_196[((mesh_y_n10_201 * 1) + mesh_z_n10_202)]);
      Copy_ciph(&input_dup_n34_203, &_preg_268435491);
      for (bs_input_n34_204 = 0; bs_input_n34_204 < 9; bs_input_n34_204 = bs_input_n34_204 + 1) {
        _preg_268435604 = Rotate(input_dup_n34_203, _cst_217[bs_input_n34_204]);
        Copy_ciph(&input_block_n34_205[bs_input_n34_204], &_preg_268435604);
        Free_poly_data(&_preg_268435604._c1_poly);
        Free_poly_data(&_preg_268435604._c0_poly);
      }
      for (mesh_x_n10_206 = 0; mesh_x_n10_206 < 4; mesh_x_n10_206 = mesh_x_n10_206 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=9
        Zero_ciph(&result_n35_207);
        for (num_grid_n35_208 = 0; num_grid_n35_208 < 32; num_grid_n35_208 = num_grid_n35_208 + 1) {
          Zero_ciph(&result_grid_n35_209);
          for (cap_block_n35_210 = 0; cap_block_n35_210 < 9; cap_block_n35_210 = cap_block_n35_210 + 1) {
            _ckks_gen_tmp_3558_424 = input_block_n34_205[cap_block_n35_210];
            Pt_from_msg_ofst(&_pgen_tmp_243_718, 47/* cst_213 */, (((((mesh_x_n10_206 * 4) + mesh_y_n10_201) * 288) + (cap_block_n35_210 + (num_grid_n35_208 * 9)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_244_719, &_ckks_gen_tmp_3558_424, &_pgen_tmp_243_718);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n35_209, &result_grid_n35_209, &_pgen_tmp_244_719);
            _pgen_modulus_472 = Q_modulus();
            _pgen_num_q_473 = Poly_level(&result_grid_n35_209._c0_poly);
            for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_244_719._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_3558_424._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_243_718._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_244_719._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_3558_424._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_243_718._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n35_209._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n35_209._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_244_719._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n35_209._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n35_209._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_244_719._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              _pgen_modulus_472 = _pgen_modulus_472 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_246_721, &result_grid_n35_209);
          Rescale(&_pgen_tmp_246_721._c0_poly, &result_grid_n35_209._c0_poly);
          Rescale(&_pgen_tmp_246_721._c1_poly, &result_grid_n35_209._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_247_722, 48/* cst_218 */, (num_grid_n35_208) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_245_720, &_pgen_tmp_246_721, &_pgen_tmp_247_722);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_245_720._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_245_720._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_246_721._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_247_722._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_245_720._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_246_721._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_247_722._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435605 = Rotate(_pgen_tmp_245_720, -25088 + (num_grid_n35_208 * 784));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_249_724, &result_grid_n35_209);
          Rescale(&_pgen_tmp_249_724._c0_poly, &result_grid_n35_209._c0_poly);
          Rescale(&_pgen_tmp_249_724._c1_poly, &result_grid_n35_209._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_250_725, 49/* cst_219 */, (num_grid_n35_208) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_248_723, &_pgen_tmp_249_724, &_pgen_tmp_250_725);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_248_723._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_248_723._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_249_724._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_250_725._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_248_723._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_249_724._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_250_725._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435606 = Rotate(_pgen_tmp_248_723, num_grid_n35_208 * 784);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_251_726, &_preg_268435605, &_preg_268435606);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n35_207, &result_n35_207, &_pgen_tmp_251_726);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&result_n35_207._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_251_726._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435605._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435606._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_251_726._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435605._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435606._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n35_207._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n35_207._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_251_726._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n35_207._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n35_207._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_251_726._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435605._c1_poly);
          Free_poly_data(&_preg_268435605._c0_poly);
          Free_poly_data(&_preg_268435606._c1_poly);
          Free_poly_data(&_preg_268435606._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_252_727, 50 /* cst_216 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n35_207, &result_n35_207, &_pgen_tmp_252_727);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&result_n35_207._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&result_n35_207._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n35_207._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_252_727._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Set_coeffs(&result_n35_207._c1_poly, _pgen_rns_idx_474, degree, Coeffs(&result_n35_207._c1_poly, _pgen_rns_idx_474, degree));
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_254_729 = VS_out_conv10_199[((mesh_x_n10_206 * 1) + mesh_z_n10_202)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_253_728, &_pgen_tmp_254_729, &result_n35_207);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&_pgen_tmp_253_728._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_253_728._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_254_729._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n35_207._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_253_728._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_254_729._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n35_207._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv10_199[((mesh_x_n10_206 * 1) + mesh_z_n10_202)], &_pgen_tmp_253_728);
      }
    }
  }
  Free_ciph_poly(VS_out_relu9_196, 4);
  Free_poly_data(&_preg_268435491._c1_poly);
  Free_poly_data(&_preg_268435491._c0_poly);
  Free_poly_data(&input_dup_n34_203._c1_poly);
  Free_poly_data(&input_dup_n34_203._c0_poly);
  Free_ciph_poly(input_block_n34_205, 9);
  Free_poly_data(&_pgen_tmp_243_718._poly);
  Free_poly_data(&_pgen_tmp_244_719._c1_poly);
  Free_poly_data(&_pgen_tmp_244_719._c0_poly);
  Free_poly_data(&_pgen_tmp_247_722._poly);
  Free_poly_data(&_pgen_tmp_246_721._c1_poly);
  Free_poly_data(&_pgen_tmp_246_721._c0_poly);
  Free_poly_data(&_pgen_tmp_245_720._c1_poly);
  Free_poly_data(&_pgen_tmp_245_720._c0_poly);
  Free_poly_data(&result_grid_n35_209._c1_poly);
  Free_poly_data(&result_grid_n35_209._c0_poly);
  Free_poly_data(&_pgen_tmp_250_725._poly);
  Free_poly_data(&_pgen_tmp_249_724._c1_poly);
  Free_poly_data(&_pgen_tmp_249_724._c0_poly);
  Free_poly_data(&_pgen_tmp_248_723._c1_poly);
  Free_poly_data(&_pgen_tmp_248_723._c0_poly);
  Free_poly_data(&_pgen_tmp_251_726._c1_poly);
  Free_poly_data(&_pgen_tmp_251_726._c0_poly);
  Free_poly_data(&_pgen_tmp_252_727._poly);
  Free_poly_data(&result_n35_207._c1_poly);
  Free_poly_data(&result_n35_207._c0_poly);
  Free_poly_data(&_pgen_tmp_253_728._c1_poly);
  Free_poly_data(&_pgen_tmp_253_728._c0_poly);
  for (rescale_iv_460 = 0; rescale_iv_460 < 4; rescale_iv_460 = rescale_iv_460 + 1) {
    _pgen_tmp_255_730 = VS_out_conv10_199[rescale_iv_460];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_256_731, &_pgen_tmp_255_730);
    Rescale(&_pgen_tmp_256_731._c0_poly, &_pgen_tmp_255_730._c0_poly);
    Rescale(&_pgen_tmp_256_731._c1_poly, &_pgen_tmp_255_730._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv10_199[rescale_iv_460], &_pgen_tmp_256_731);
  }
  Free_poly_data(&_pgen_tmp_256_731._c1_poly);
  Free_poly_data(&_pgen_tmp_256_731._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 60
  // Add_23
  // pragma: 65536, 1025, 61
  CMPLR_TM_START(2, 0);
  memset(&VS_out_add10_211, 0, sizeof(VS_out_add10_211));
  for (mesh_y_n10_212 = 0; mesh_y_n10_212 < 4; mesh_y_n10_212 = mesh_y_n10_212 + 1) {
    for (mesh_z_n10_213 = 0; mesh_z_n10_213 < 1; mesh_z_n10_213 = mesh_z_n10_213 + 1) {
      _pgen_tmp_258_733 = VS_out_add10_211[((mesh_y_n10_212 * 1) + mesh_z_n10_213)];
      _pgen_tmp_259_734 = VS_out_conv10_199[((mesh_y_n10_212 * 1) + mesh_z_n10_213)];
      _pgen_tmp_260_735 = VS_out_relu8_181[((mesh_y_n10_212 * 1) + mesh_z_n10_213)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_261_736, &_pgen_tmp_259_734, &_pgen_tmp_260_735);
      CMPLR_TM_END(12, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_257_732, &_pgen_tmp_258_733, &_pgen_tmp_261_736);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_pgen_tmp_257_732._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_261_736._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_259_734._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_260_735._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_261_736._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_259_734._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_260_735._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_257_732._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_258_733._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_261_736._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_257_732._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_258_733._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_261_736._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_add10_211[((mesh_y_n10_212 * 1) + mesh_z_n10_213)], &_pgen_tmp_257_732);
    }
  }
  Free_ciph_poly(VS_out_conv10_199, 4);
  Free_ciph_poly(VS_out_relu8_181, 4);
  Free_poly_data(&_pgen_tmp_261_736._c1_poly);
  Free_poly_data(&_pgen_tmp_261_736._c0_poly);
  Free_poly_data(&_pgen_tmp_257_732._c1_poly);
  Free_poly_data(&_pgen_tmp_257_732._c0_poly);
  CMPLR_TM_END(2, 0);
  // pragma: 65537, 1025, 61
  // Relu_24
  // pragma: 65536, 1033, 62
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu10_214, 0, sizeof(VS_out_relu10_214));
  for (mesh_y_n10_215 = 0; mesh_y_n10_215 < 4; mesh_y_n10_215 = mesh_y_n10_215 + 1) {
    for (mesh_z_n10_216 = 0; mesh_z_n10_216 < 1; mesh_z_n10_216 = mesh_z_n10_216 + 1) {
      _pgen_tmp_262_737 = VS_out_add10_211[((mesh_y_n10_215 * 1) + mesh_z_n10_216)];
      Bootstrap(&_preg_268435492, &_pgen_tmp_262_737, 18);
      Encode_float(&_pgen_tmp_263_738, &_cst_358, 1, 1, Level(&_preg_268435492));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435494, &_preg_268435492, &_pgen_tmp_263_738);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_preg_268435494._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_preg_268435494._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435492._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_263_738._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_preg_268435494._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435492._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_263_738._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_264_739, &_preg_268435494);
      Rescale(&_pgen_tmp_264_739._c0_poly, &_preg_268435494._c0_poly);
      Rescale(&_pgen_tmp_264_739._c1_poly, &_preg_268435494._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435493 = App_relu(_preg_268435492, _pgen_tmp_264_739, 25088);
      _pgen_tmp_266_741 = VS_out_relu10_214[((mesh_y_n10_215 * 1) + mesh_z_n10_216)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_265_740, &_pgen_tmp_266_741, &_preg_268435493);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_pgen_tmp_265_740._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_265_740._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_266_741._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435493._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_265_740._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_266_741._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435493._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu10_214[((mesh_y_n10_215 * 1) + mesh_z_n10_216)], &_pgen_tmp_265_740);
    }
  }
  Free_ciph_poly(VS_out_add10_211, 4);
  Free_poly_data(&_pgen_tmp_263_738._poly);
  Free_poly_data(&_preg_268435494._c1_poly);
  Free_poly_data(&_preg_268435494._c0_poly);
  Free_poly_data(&_pgen_tmp_264_739._c1_poly);
  Free_poly_data(&_pgen_tmp_264_739._c0_poly);
  Free_poly_data(&_preg_268435492._c1_poly);
  Free_poly_data(&_preg_268435492._c0_poly);
  Free_poly_data(&_preg_268435493._c1_poly);
  Free_poly_data(&_preg_268435493._c0_poly);
  Free_poly_data(&_pgen_tmp_265_740._c1_poly);
  Free_poly_data(&_pgen_tmp_265_740._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 62
  // Conv_25
  // pragma: 65536, 1027, 63
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv11_217, 0, sizeof(VS_out_conv11_217));
  memset(&VS_out_conv_halo11_218, 0, sizeof(VS_out_conv_halo11_218));
  for (mesh_y_n11_219 = 0; mesh_y_n11_219 < 4; mesh_y_n11_219 = mesh_y_n11_219 + 1) {
    for (mesh_z_n11_220 = 0; mesh_z_n11_220 < 1; mesh_z_n11_220 = mesh_z_n11_220 + 1) {
      Copy_ciph(&_preg_268435495, &VS_out_relu10_214[((mesh_y_n11_219 * 1) + mesh_z_n11_220)]);
      Copy_ciph(&input_dup_n35_221, &_preg_268435495);
      for (bs_input_n35_222 = 0; bs_input_n35_222 < 1; bs_input_n35_222 = bs_input_n35_222 + 1) {
        _preg_268435607 = Rotate(input_dup_n35_221, _cst_224[bs_input_n35_222]);
        Copy_ciph(&input_block_n35_223[bs_input_n35_222], &_preg_268435607);
        Free_poly_data(&_preg_268435607._c1_poly);
        Free_poly_data(&_preg_268435607._c0_poly);
      }
      for (mesh_x_n11_224 = 0; mesh_x_n11_224 < 8; mesh_x_n11_224 = mesh_x_n11_224 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n36_225);
        for (num_grid_n36_226 = 0; num_grid_n36_226 < 32; num_grid_n36_226 = num_grid_n36_226 + 1) {
          Zero_ciph(&result_grid_n36_227);
          for (cap_block_n36_228 = 0; cap_block_n36_228 < 1; cap_block_n36_228 = cap_block_n36_228 + 1) {
            _ckks_gen_tmp_3888_425 = input_block_n35_223[cap_block_n36_228];
            Pt_from_msg_ofst(&_pgen_tmp_267_742, 51/* cst_220 */, (((((mesh_x_n11_224 * 4) + mesh_y_n11_219) * 32) + (cap_block_n36_228 + (num_grid_n36_226 * 1)))) * (25088), 25088, 1, 6);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_268_743, &_ckks_gen_tmp_3888_425, &_pgen_tmp_267_742);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n36_227, &result_grid_n36_227, &_pgen_tmp_268_743);
            _pgen_modulus_472 = Q_modulus();
            _pgen_num_q_473 = Poly_level(&result_grid_n36_227._c0_poly);
            for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_268_743._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_3888_425._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_267_742._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_268_743._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_3888_425._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_267_742._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n36_227._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n36_227._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_268_743._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n36_227._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n36_227._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_268_743._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              _pgen_modulus_472 = _pgen_modulus_472 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_270_745, &result_grid_n36_227);
          Rescale(&_pgen_tmp_270_745._c0_poly, &result_grid_n36_227._c0_poly);
          Rescale(&_pgen_tmp_270_745._c1_poly, &result_grid_n36_227._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_271_746, 52/* cst_225 */, (num_grid_n36_226) * (25088), 25088, 1, 5);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_269_744, &_pgen_tmp_270_745, &_pgen_tmp_271_746);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_269_744._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_269_744._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_270_745._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_271_746._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_269_744._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_270_745._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_271_746._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435608 = Rotate(_pgen_tmp_269_744, -25088 + (num_grid_n36_226 * 784));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_273_748, &result_grid_n36_227);
          Rescale(&_pgen_tmp_273_748._c0_poly, &result_grid_n36_227._c0_poly);
          Rescale(&_pgen_tmp_273_748._c1_poly, &result_grid_n36_227._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_274_749, 53/* cst_226 */, (num_grid_n36_226) * (25088), 25088, 1, 5);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_272_747, &_pgen_tmp_273_748, &_pgen_tmp_274_749);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_272_747._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_272_747._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_273_748._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_274_749._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_272_747._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_273_748._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_274_749._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435609 = Rotate(_pgen_tmp_272_747, num_grid_n36_226 * 784);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_275_750, &_preg_268435608, &_preg_268435609);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n36_225, &result_n36_225, &_pgen_tmp_275_750);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&result_n36_225._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_275_750._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435608._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435609._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_275_750._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435608._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435609._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n36_225._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n36_225._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_275_750._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n36_225._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n36_225._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_275_750._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435608._c1_poly);
          Free_poly_data(&_preg_268435608._c0_poly);
          Free_poly_data(&_preg_268435609._c1_poly);
          Free_poly_data(&_preg_268435609._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_276_751, 54 /* cst_223 */, 25088, 2, 5);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n36_225, &result_n36_225, &_pgen_tmp_276_751);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&result_n36_225._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&result_n36_225._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n36_225._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_276_751._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Set_coeffs(&result_n36_225._c1_poly, _pgen_rns_idx_474, degree, Coeffs(&result_n36_225._c1_poly, _pgen_rns_idx_474, degree));
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_278_753 = VS_out_conv11_217[((mesh_x_n11_224 * 1) + mesh_z_n11_220)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_277_752, &_pgen_tmp_278_753, &result_n36_225);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&_pgen_tmp_277_752._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_277_752._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_278_753._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n36_225._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_277_752._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_278_753._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n36_225._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv11_217[((mesh_x_n11_224 * 1) + mesh_z_n11_220)], &_pgen_tmp_277_752);
      }
    }
  }
  Free_poly_data(&_preg_268435495._c1_poly);
  Free_poly_data(&_preg_268435495._c0_poly);
  Free_poly_data(&input_dup_n35_221._c1_poly);
  Free_poly_data(&input_dup_n35_221._c0_poly);
  Free_ciph_poly(input_block_n35_223, 1);
  Free_poly_data(&_pgen_tmp_267_742._poly);
  Free_poly_data(&_pgen_tmp_268_743._c1_poly);
  Free_poly_data(&_pgen_tmp_268_743._c0_poly);
  Free_poly_data(&_pgen_tmp_271_746._poly);
  Free_poly_data(&_pgen_tmp_270_745._c1_poly);
  Free_poly_data(&_pgen_tmp_270_745._c0_poly);
  Free_poly_data(&_pgen_tmp_269_744._c1_poly);
  Free_poly_data(&_pgen_tmp_269_744._c0_poly);
  Free_poly_data(&result_grid_n36_227._c1_poly);
  Free_poly_data(&result_grid_n36_227._c0_poly);
  Free_poly_data(&_pgen_tmp_274_749._poly);
  Free_poly_data(&_pgen_tmp_273_748._c1_poly);
  Free_poly_data(&_pgen_tmp_273_748._c0_poly);
  Free_poly_data(&_pgen_tmp_272_747._c1_poly);
  Free_poly_data(&_pgen_tmp_272_747._c0_poly);
  Free_poly_data(&_pgen_tmp_275_750._c1_poly);
  Free_poly_data(&_pgen_tmp_275_750._c0_poly);
  Free_poly_data(&_pgen_tmp_276_751._poly);
  Free_poly_data(&result_n36_225._c1_poly);
  Free_poly_data(&result_n36_225._c0_poly);
  Free_poly_data(&_pgen_tmp_277_752._c1_poly);
  Free_poly_data(&_pgen_tmp_277_752._c0_poly);
  for (rescale_iv_461 = 0; rescale_iv_461 < 8; rescale_iv_461 = rescale_iv_461 + 1) {
    _pgen_tmp_279_754 = VS_out_conv11_217[rescale_iv_461];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_280_755, &_pgen_tmp_279_754);
    Rescale(&_pgen_tmp_280_755._c0_poly, &_pgen_tmp_279_754._c0_poly);
    Rescale(&_pgen_tmp_280_755._c1_poly, &_pgen_tmp_279_754._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv11_217[rescale_iv_461], &_pgen_tmp_280_755);
  }
  Free_poly_data(&_pgen_tmp_280_755._c1_poly);
  Free_poly_data(&_pgen_tmp_280_755._c0_poly);
  for (siv_n11_229 = 0; siv_n11_229 < 8; siv_n11_229 = siv_n11_229 + 1) {
    orig_result36_230 = VS_out_conv11_217[siv_n11_229];
    Zero_ciph(&comb_row_result37_231);
    for (comb_row_lf_index_n37_232 = 0; comb_row_lf_index_n37_232 < 1; comb_row_lf_index_n37_232 = comb_row_lf_index_n37_232 + 1) {
      _preg_268435610 = Rotate(orig_result36_230, 1 << comb_row_lf_index_n37_232);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&orig_result36_230, &orig_result36_230, &_preg_268435610);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&orig_result36_230._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&orig_result36_230._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&orig_result36_230._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435610._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&orig_result36_230._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&orig_result36_230._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435610._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435610._c1_poly);
      Free_poly_data(&_preg_268435610._c0_poly);
    }
    for (comb_row_index_n37_233 = 0; comb_row_index_n37_233 < 7; comb_row_index_n37_233 = comb_row_index_n37_233 + 1) {
      _preg_268435611 = Rotate(orig_result36_230, comb_row_index_n37_233 * 2);
      Copy_ciph(&_ckks_gen_tmp_4035_426, &_preg_268435611);
      Pt_from_msg_ofst(&_pgen_tmp_281_756, 55/* cst_227 */, (comb_row_index_n37_233) * (25088), 25088, 1, 4);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_282_757, &_ckks_gen_tmp_4035_426, &_pgen_tmp_281_756);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_row_result37_231, &comb_row_result37_231, &_pgen_tmp_282_757);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&comb_row_result37_231._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_282_757._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_4035_426._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_281_756._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_282_757._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_4035_426._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_281_756._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_row_result37_231._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result37_231._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_282_757._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_row_result37_231._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result37_231._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_282_757._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435611._c1_poly);
      Free_poly_data(&_preg_268435611._c0_poly);
    }
    Zero_ciph(&comb_rc_result37_234);
    for (comb_rc_lf_index_n37_235 = 0; comb_rc_lf_index_n37_235 < 2; comb_rc_lf_index_n37_235 = comb_rc_lf_index_n37_235 + 1) {
      _preg_268435612 = Rotate(comb_row_result37_231, (1 << comb_rc_lf_index_n37_235) * 42);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_row_result37_231, &comb_row_result37_231, &_preg_268435612);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&comb_row_result37_231._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&comb_row_result37_231._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result37_231._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435612._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_row_result37_231._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result37_231._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435612._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435612._c1_poly);
      Free_poly_data(&_preg_268435612._c0_poly);
    }
    for (comb_rc_index_n37_236 = 0; comb_rc_index_n37_236 < 4; comb_rc_index_n37_236 = comb_rc_index_n37_236 + 1) {
      _preg_268435613 = Rotate(comb_row_result37_231, comb_rc_index_n37_236 * 168);
      Copy_ciph(&_ckks_gen_tmp_4088_427, &_preg_268435613);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_283_758, &_ckks_gen_tmp_4088_427);
      Rescale(&_pgen_tmp_283_758._c0_poly, &_ckks_gen_tmp_4088_427._c0_poly);
      Rescale(&_pgen_tmp_283_758._c1_poly, &_ckks_gen_tmp_4088_427._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg_ofst(&_pgen_tmp_284_759, 56/* cst_228 */, (comb_rc_index_n37_236) * (25088), 25088, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_285_760, &_pgen_tmp_283_758, &_pgen_tmp_284_759);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_rc_result37_234, &comb_rc_result37_234, &_pgen_tmp_285_760);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&comb_rc_result37_234._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_285_760._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_283_758._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_284_759._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_285_760._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_283_758._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_284_759._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_rc_result37_234._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_rc_result37_234._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_285_760._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_rc_result37_234._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_rc_result37_234._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_285_760._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435613._c1_poly);
      Free_poly_data(&_preg_268435613._c0_poly);
    }
    Zero_ciph(&ss_result37_237);
    for (comb_cc_lf_index_n37_238 = 0; comb_cc_lf_index_n37_238 < 2; comb_cc_lf_index_n37_238 = comb_cc_lf_index_n37_238 + 1) {
      _preg_268435614 = Rotate(comb_rc_result37_234, (1 << comb_cc_lf_index_n37_238) * 588);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_rc_result37_234, &comb_rc_result37_234, &_preg_268435614);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&comb_rc_result37_234._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&comb_rc_result37_234._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_rc_result37_234._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435614._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_rc_result37_234._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_rc_result37_234._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435614._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435614._c1_poly);
      Free_poly_data(&_preg_268435614._c0_poly);
    }
    for (comb_cc_index_n37_239 = 0; comb_cc_index_n37_239 < 8; comb_cc_index_n37_239 = comb_cc_index_n37_239 + 1) {
      _preg_268435615 = Rotate(comb_rc_result37_234, comb_cc_index_n37_239 * 2352);
      Copy_ciph(&_ckks_gen_tmp_4141_428, &_preg_268435615);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_286_761, &_ckks_gen_tmp_4141_428);
      Rescale(&_pgen_tmp_286_761._c0_poly, &_ckks_gen_tmp_4141_428._c0_poly);
      Rescale(&_pgen_tmp_286_761._c1_poly, &_ckks_gen_tmp_4141_428._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg_ofst(&_pgen_tmp_287_762, 57/* cst_229 */, (comb_cc_index_n37_239) * (25088), 25088, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_288_763, &_pgen_tmp_286_761, &_pgen_tmp_287_762);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&ss_result37_237, &ss_result37_237, &_pgen_tmp_288_763);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&ss_result37_237._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_288_763._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_286_761._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_287_762._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_288_763._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_286_761._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_287_762._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&ss_result37_237._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&ss_result37_237._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_288_763._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&ss_result37_237._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&ss_result37_237._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_288_763._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435615._c1_poly);
      Free_poly_data(&_preg_268435615._c0_poly);
    }
    Copy_ciph(&VS_out_conv_halo11_218[siv_n11_229], &ss_result37_237);
  }
  Free_ciph_poly(VS_out_conv11_217, 8);
  Free_poly_data(&_pgen_tmp_281_756._poly);
  Free_poly_data(&_ckks_gen_tmp_4035_426._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_4035_426._c0_poly);
  Free_poly_data(&_pgen_tmp_282_757._c1_poly);
  Free_poly_data(&_pgen_tmp_282_757._c0_poly);
  Free_poly_data(&comb_row_result37_231._c1_poly);
  Free_poly_data(&comb_row_result37_231._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_4088_427._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_4088_427._c0_poly);
  Free_poly_data(&_pgen_tmp_284_759._poly);
  Free_poly_data(&_pgen_tmp_283_758._c1_poly);
  Free_poly_data(&_pgen_tmp_283_758._c0_poly);
  Free_poly_data(&_pgen_tmp_285_760._c1_poly);
  Free_poly_data(&_pgen_tmp_285_760._c0_poly);
  Free_poly_data(&comb_rc_result37_234._c1_poly);
  Free_poly_data(&comb_rc_result37_234._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_4141_428._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_4141_428._c0_poly);
  Free_poly_data(&_pgen_tmp_287_762._poly);
  Free_poly_data(&_pgen_tmp_286_761._c1_poly);
  Free_poly_data(&_pgen_tmp_286_761._c0_poly);
  Free_poly_data(&_pgen_tmp_288_763._c1_poly);
  Free_poly_data(&_pgen_tmp_288_763._c0_poly);
  Free_poly_data(&ss_result37_237._c1_poly);
  Free_poly_data(&ss_result37_237._c0_poly);
  for (rescale_iv_462 = 0; rescale_iv_462 < 8; rescale_iv_462 = rescale_iv_462 + 1) {
    _pgen_tmp_289_764 = VS_out_conv_halo11_218[rescale_iv_462];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_290_765, &_pgen_tmp_289_764);
    Rescale(&_pgen_tmp_290_765._c0_poly, &_pgen_tmp_289_764._c0_poly);
    Rescale(&_pgen_tmp_290_765._c1_poly, &_pgen_tmp_289_764._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv_halo11_218[rescale_iv_462], &_pgen_tmp_290_765);
  }
  Free_poly_data(&_pgen_tmp_290_765._c1_poly);
  Free_poly_data(&_pgen_tmp_290_765._c0_poly);
  for (reshardm_n11_240 = 0; reshardm_n11_240 < 2; reshardm_n11_240 = reshardm_n11_240 + 1) {
    _pgen_tmp_292_767 = VS_out_conv_halo11_218[(reshardm_n11_240 * 4)];
    _pgen_tmp_293_768 = VS_out_conv_halo11_218[((reshardm_n11_240 * 4) + 1)];
    _preg_268435616 = Rotate(_pgen_tmp_293_768, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_294_769, &_pgen_tmp_292_767, &_preg_268435616);
    CMPLR_TM_END(12, 0);
    _pgen_tmp_296_771 = VS_out_conv_halo11_218[((reshardm_n11_240 * 4) + 2)];
    _pgen_tmp_297_772 = VS_out_conv_halo11_218[((reshardm_n11_240 * 4) + 3)];
    _preg_268435617 = Rotate(_pgen_tmp_297_772, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_295_770, &_pgen_tmp_296_771, &_preg_268435617);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&_pgen_tmp_295_770._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_295_770._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_296_771._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435617._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_295_770._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_296_771._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435617._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    _preg_268435618 = Rotate(_pgen_tmp_295_770, -12544);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_291_766, &_pgen_tmp_294_769, &_preg_268435618);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&_pgen_tmp_291_766._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_294_769._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_292_767._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435616._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_294_769._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_292_767._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435616._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_291_766._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_294_769._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435618._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_291_766._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_294_769._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435618._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    Copy_ciph(&output_reshard11_241[reshardm_n11_240], &_pgen_tmp_291_766);
    Free_poly_data(&_preg_268435616._c1_poly);
    Free_poly_data(&_preg_268435616._c0_poly);
    Free_poly_data(&_preg_268435617._c1_poly);
    Free_poly_data(&_preg_268435617._c0_poly);
    Free_poly_data(&_preg_268435618._c1_poly);
    Free_poly_data(&_preg_268435618._c0_poly);
  }
  Free_ciph_poly(VS_out_conv_halo11_218, 8);
  Free_poly_data(&_pgen_tmp_295_770._c1_poly);
  Free_poly_data(&_pgen_tmp_295_770._c0_poly);
  Free_poly_data(&_pgen_tmp_294_769._c1_poly);
  Free_poly_data(&_pgen_tmp_294_769._c0_poly);
  Free_poly_data(&_pgen_tmp_291_766._c1_poly);
  Free_poly_data(&_pgen_tmp_291_766._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 63
  // Conv_26
  // pragma: 65536, 1027, 64
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv12_242, 0, sizeof(VS_out_conv12_242));
  memset(&VS_out_conv_halo12_243, 0, sizeof(VS_out_conv_halo12_243));
  for (mesh_y_n12_244 = 0; mesh_y_n12_244 < 4; mesh_y_n12_244 = mesh_y_n12_244 + 1) {
    for (mesh_z_n12_245 = 0; mesh_z_n12_245 < 1; mesh_z_n12_245 = mesh_z_n12_245 + 1) {
      Copy_ciph(&_preg_268435496, &VS_out_relu10_214[((mesh_y_n12_244 * 1) + mesh_z_n12_245)]);
      Copy_ciph(&input_dup_n37_246, &_preg_268435496);
      for (bs_input_n37_247 = 0; bs_input_n37_247 < 9; bs_input_n37_247 = bs_input_n37_247 + 1) {
        _preg_268435619 = Rotate(input_dup_n37_246, _cst_234[bs_input_n37_247]);
        Copy_ciph(&input_block_n37_248[bs_input_n37_247], &_preg_268435619);
        Free_poly_data(&_preg_268435619._c1_poly);
        Free_poly_data(&_preg_268435619._c0_poly);
      }
      for (mesh_x_n12_249 = 0; mesh_x_n12_249 < 8; mesh_x_n12_249 = mesh_x_n12_249 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=9
        Zero_ciph(&result_n38_250);
        for (num_grid_n38_251 = 0; num_grid_n38_251 < 32; num_grid_n38_251 = num_grid_n38_251 + 1) {
          Zero_ciph(&result_grid_n38_252);
          for (cap_block_n38_253 = 0; cap_block_n38_253 < 9; cap_block_n38_253 = cap_block_n38_253 + 1) {
            _ckks_gen_tmp_4316_429 = input_block_n37_248[cap_block_n38_253];
            Pt_from_msg_ofst(&_pgen_tmp_298_773, 58/* cst_230 */, (((((mesh_x_n12_249 * 4) + mesh_y_n12_244) * 288) + (cap_block_n38_253 + (num_grid_n38_251 * 9)))) * (25088), 25088, 1, 6);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_299_774, &_ckks_gen_tmp_4316_429, &_pgen_tmp_298_773);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n38_252, &result_grid_n38_252, &_pgen_tmp_299_774);
            _pgen_modulus_472 = Q_modulus();
            _pgen_num_q_473 = Poly_level(&result_grid_n38_252._c0_poly);
            for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_299_774._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_4316_429._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_298_773._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_299_774._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_4316_429._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_298_773._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n38_252._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n38_252._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_299_774._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n38_252._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n38_252._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_299_774._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              _pgen_modulus_472 = _pgen_modulus_472 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_301_776, &result_grid_n38_252);
          Rescale(&_pgen_tmp_301_776._c0_poly, &result_grid_n38_252._c0_poly);
          Rescale(&_pgen_tmp_301_776._c1_poly, &result_grid_n38_252._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_302_777, 59/* cst_235 */, (num_grid_n38_251) * (25088), 25088, 1, 5);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_300_775, &_pgen_tmp_301_776, &_pgen_tmp_302_777);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_300_775._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_300_775._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_301_776._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_302_777._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_300_775._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_301_776._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_302_777._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435620 = Rotate(_pgen_tmp_300_775, -25088 + (num_grid_n38_251 * 784));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_304_779, &result_grid_n38_252);
          Rescale(&_pgen_tmp_304_779._c0_poly, &result_grid_n38_252._c0_poly);
          Rescale(&_pgen_tmp_304_779._c1_poly, &result_grid_n38_252._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_305_780, 60/* cst_236 */, (num_grid_n38_251) * (25088), 25088, 1, 5);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_303_778, &_pgen_tmp_304_779, &_pgen_tmp_305_780);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_303_778._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_303_778._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_304_779._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_305_780._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_303_778._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_304_779._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_305_780._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435621 = Rotate(_pgen_tmp_303_778, num_grid_n38_251 * 784);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_306_781, &_preg_268435620, &_preg_268435621);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n38_250, &result_n38_250, &_pgen_tmp_306_781);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&result_n38_250._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_306_781._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435620._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435621._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_306_781._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435620._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435621._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n38_250._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n38_250._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_306_781._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n38_250._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n38_250._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_306_781._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435620._c1_poly);
          Free_poly_data(&_preg_268435620._c0_poly);
          Free_poly_data(&_preg_268435621._c1_poly);
          Free_poly_data(&_preg_268435621._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_307_782, 61 /* cst_233 */, 25088, 2, 5);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n38_250, &result_n38_250, &_pgen_tmp_307_782);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&result_n38_250._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&result_n38_250._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n38_250._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_307_782._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Set_coeffs(&result_n38_250._c1_poly, _pgen_rns_idx_474, degree, Coeffs(&result_n38_250._c1_poly, _pgen_rns_idx_474, degree));
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_309_784 = VS_out_conv12_242[((mesh_x_n12_249 * 1) + mesh_z_n12_245)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_308_783, &_pgen_tmp_309_784, &result_n38_250);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&_pgen_tmp_308_783._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_308_783._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_309_784._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n38_250._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_308_783._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_309_784._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n38_250._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv12_242[((mesh_x_n12_249 * 1) + mesh_z_n12_245)], &_pgen_tmp_308_783);
      }
    }
  }
  Free_ciph_poly(VS_out_relu10_214, 4);
  Free_poly_data(&_preg_268435496._c1_poly);
  Free_poly_data(&_preg_268435496._c0_poly);
  Free_poly_data(&input_dup_n37_246._c1_poly);
  Free_poly_data(&input_dup_n37_246._c0_poly);
  Free_ciph_poly(input_block_n37_248, 9);
  Free_poly_data(&_pgen_tmp_298_773._poly);
  Free_poly_data(&_pgen_tmp_299_774._c1_poly);
  Free_poly_data(&_pgen_tmp_299_774._c0_poly);
  Free_poly_data(&_pgen_tmp_302_777._poly);
  Free_poly_data(&_pgen_tmp_301_776._c1_poly);
  Free_poly_data(&_pgen_tmp_301_776._c0_poly);
  Free_poly_data(&_pgen_tmp_300_775._c1_poly);
  Free_poly_data(&_pgen_tmp_300_775._c0_poly);
  Free_poly_data(&result_grid_n38_252._c1_poly);
  Free_poly_data(&result_grid_n38_252._c0_poly);
  Free_poly_data(&_pgen_tmp_305_780._poly);
  Free_poly_data(&_pgen_tmp_304_779._c1_poly);
  Free_poly_data(&_pgen_tmp_304_779._c0_poly);
  Free_poly_data(&_pgen_tmp_303_778._c1_poly);
  Free_poly_data(&_pgen_tmp_303_778._c0_poly);
  Free_poly_data(&_pgen_tmp_306_781._c1_poly);
  Free_poly_data(&_pgen_tmp_306_781._c0_poly);
  Free_poly_data(&_pgen_tmp_307_782._poly);
  Free_poly_data(&result_n38_250._c1_poly);
  Free_poly_data(&result_n38_250._c0_poly);
  Free_poly_data(&_pgen_tmp_308_783._c1_poly);
  Free_poly_data(&_pgen_tmp_308_783._c0_poly);
  for (rescale_iv_463 = 0; rescale_iv_463 < 8; rescale_iv_463 = rescale_iv_463 + 1) {
    _pgen_tmp_310_785 = VS_out_conv12_242[rescale_iv_463];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_311_786, &_pgen_tmp_310_785);
    Rescale(&_pgen_tmp_311_786._c0_poly, &_pgen_tmp_310_785._c0_poly);
    Rescale(&_pgen_tmp_311_786._c1_poly, &_pgen_tmp_310_785._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv12_242[rescale_iv_463], &_pgen_tmp_311_786);
  }
  Free_poly_data(&_pgen_tmp_311_786._c1_poly);
  Free_poly_data(&_pgen_tmp_311_786._c0_poly);
  for (siv_n12_254 = 0; siv_n12_254 < 8; siv_n12_254 = siv_n12_254 + 1) {
    orig_result38_255 = VS_out_conv12_242[siv_n12_254];
    Zero_ciph(&comb_row_result39_256);
    for (comb_row_lf_index_n39_257 = 0; comb_row_lf_index_n39_257 < 1; comb_row_lf_index_n39_257 = comb_row_lf_index_n39_257 + 1) {
      _preg_268435622 = Rotate(orig_result38_255, 1 << comb_row_lf_index_n39_257);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&orig_result38_255, &orig_result38_255, &_preg_268435622);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&orig_result38_255._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&orig_result38_255._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&orig_result38_255._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435622._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&orig_result38_255._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&orig_result38_255._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435622._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435622._c1_poly);
      Free_poly_data(&_preg_268435622._c0_poly);
    }
    for (comb_row_index_n39_258 = 0; comb_row_index_n39_258 < 7; comb_row_index_n39_258 = comb_row_index_n39_258 + 1) {
      _preg_268435623 = Rotate(orig_result38_255, comb_row_index_n39_258 * 2);
      Copy_ciph(&_ckks_gen_tmp_4463_430, &_preg_268435623);
      Pt_from_msg_ofst(&_pgen_tmp_312_787, 62/* cst_237 */, (comb_row_index_n39_258) * (25088), 25088, 1, 4);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_313_788, &_ckks_gen_tmp_4463_430, &_pgen_tmp_312_787);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_row_result39_256, &comb_row_result39_256, &_pgen_tmp_313_788);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&comb_row_result39_256._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_313_788._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_4463_430._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_312_787._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_313_788._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_4463_430._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_312_787._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_row_result39_256._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result39_256._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_313_788._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_row_result39_256._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result39_256._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_313_788._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435623._c1_poly);
      Free_poly_data(&_preg_268435623._c0_poly);
    }
    Zero_ciph(&comb_rc_result39_259);
    for (comb_rc_lf_index_n39_260 = 0; comb_rc_lf_index_n39_260 < 2; comb_rc_lf_index_n39_260 = comb_rc_lf_index_n39_260 + 1) {
      _preg_268435624 = Rotate(comb_row_result39_256, (1 << comb_rc_lf_index_n39_260) * 42);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_row_result39_256, &comb_row_result39_256, &_preg_268435624);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&comb_row_result39_256._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&comb_row_result39_256._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result39_256._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435624._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_row_result39_256._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_row_result39_256._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435624._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435624._c1_poly);
      Free_poly_data(&_preg_268435624._c0_poly);
    }
    for (comb_rc_index_n39_261 = 0; comb_rc_index_n39_261 < 4; comb_rc_index_n39_261 = comb_rc_index_n39_261 + 1) {
      _preg_268435625 = Rotate(comb_row_result39_256, comb_rc_index_n39_261 * 168);
      Copy_ciph(&_ckks_gen_tmp_4516_431, &_preg_268435625);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_314_789, &_ckks_gen_tmp_4516_431);
      Rescale(&_pgen_tmp_314_789._c0_poly, &_ckks_gen_tmp_4516_431._c0_poly);
      Rescale(&_pgen_tmp_314_789._c1_poly, &_ckks_gen_tmp_4516_431._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg_ofst(&_pgen_tmp_315_790, 63/* cst_238 */, (comb_rc_index_n39_261) * (25088), 25088, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_316_791, &_pgen_tmp_314_789, &_pgen_tmp_315_790);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_rc_result39_259, &comb_rc_result39_259, &_pgen_tmp_316_791);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&comb_rc_result39_259._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_316_791._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_314_789._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_315_790._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_316_791._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_314_789._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_315_790._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_rc_result39_259._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_rc_result39_259._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_316_791._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_rc_result39_259._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_rc_result39_259._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_316_791._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435625._c1_poly);
      Free_poly_data(&_preg_268435625._c0_poly);
    }
    Zero_ciph(&ss_result39_262);
    for (comb_cc_lf_index_n39_263 = 0; comb_cc_lf_index_n39_263 < 2; comb_cc_lf_index_n39_263 = comb_cc_lf_index_n39_263 + 1) {
      _preg_268435626 = Rotate(comb_rc_result39_259, (1 << comb_cc_lf_index_n39_263) * 588);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_rc_result39_259, &comb_rc_result39_259, &_preg_268435626);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&comb_rc_result39_259._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&comb_rc_result39_259._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_rc_result39_259._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435626._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_rc_result39_259._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_rc_result39_259._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435626._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435626._c1_poly);
      Free_poly_data(&_preg_268435626._c0_poly);
    }
    for (comb_cc_index_n39_264 = 0; comb_cc_index_n39_264 < 8; comb_cc_index_n39_264 = comb_cc_index_n39_264 + 1) {
      _preg_268435627 = Rotate(comb_rc_result39_259, comb_cc_index_n39_264 * 2352);
      Copy_ciph(&_ckks_gen_tmp_4569_432, &_preg_268435627);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_317_792, &_ckks_gen_tmp_4569_432);
      Rescale(&_pgen_tmp_317_792._c0_poly, &_ckks_gen_tmp_4569_432._c0_poly);
      Rescale(&_pgen_tmp_317_792._c1_poly, &_ckks_gen_tmp_4569_432._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg_ofst(&_pgen_tmp_318_793, 64/* cst_239 */, (comb_cc_index_n39_264) * (25088), 25088, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_319_794, &_pgen_tmp_317_792, &_pgen_tmp_318_793);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&ss_result39_262, &ss_result39_262, &_pgen_tmp_319_794);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&ss_result39_262._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_319_794._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_317_792._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_318_793._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_319_794._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_317_792._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_318_793._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&ss_result39_262._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&ss_result39_262._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_319_794._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&ss_result39_262._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&ss_result39_262._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_319_794._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435627._c1_poly);
      Free_poly_data(&_preg_268435627._c0_poly);
    }
    Copy_ciph(&VS_out_conv_halo12_243[siv_n12_254], &ss_result39_262);
  }
  Free_ciph_poly(VS_out_conv12_242, 8);
  Free_poly_data(&_pgen_tmp_312_787._poly);
  Free_poly_data(&_ckks_gen_tmp_4463_430._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_4463_430._c0_poly);
  Free_poly_data(&_pgen_tmp_313_788._c1_poly);
  Free_poly_data(&_pgen_tmp_313_788._c0_poly);
  Free_poly_data(&comb_row_result39_256._c1_poly);
  Free_poly_data(&comb_row_result39_256._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_4516_431._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_4516_431._c0_poly);
  Free_poly_data(&_pgen_tmp_315_790._poly);
  Free_poly_data(&_pgen_tmp_314_789._c1_poly);
  Free_poly_data(&_pgen_tmp_314_789._c0_poly);
  Free_poly_data(&_pgen_tmp_316_791._c1_poly);
  Free_poly_data(&_pgen_tmp_316_791._c0_poly);
  Free_poly_data(&comb_rc_result39_259._c1_poly);
  Free_poly_data(&comb_rc_result39_259._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_4569_432._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_4569_432._c0_poly);
  Free_poly_data(&_pgen_tmp_318_793._poly);
  Free_poly_data(&_pgen_tmp_317_792._c1_poly);
  Free_poly_data(&_pgen_tmp_317_792._c0_poly);
  Free_poly_data(&_pgen_tmp_319_794._c1_poly);
  Free_poly_data(&_pgen_tmp_319_794._c0_poly);
  Free_poly_data(&ss_result39_262._c1_poly);
  Free_poly_data(&ss_result39_262._c0_poly);
  for (rescale_iv_464 = 0; rescale_iv_464 < 8; rescale_iv_464 = rescale_iv_464 + 1) {
    _pgen_tmp_320_795 = VS_out_conv_halo12_243[rescale_iv_464];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_321_796, &_pgen_tmp_320_795);
    Rescale(&_pgen_tmp_321_796._c0_poly, &_pgen_tmp_320_795._c0_poly);
    Rescale(&_pgen_tmp_321_796._c1_poly, &_pgen_tmp_320_795._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv_halo12_243[rescale_iv_464], &_pgen_tmp_321_796);
  }
  Free_poly_data(&_pgen_tmp_321_796._c1_poly);
  Free_poly_data(&_pgen_tmp_321_796._c0_poly);
  for (reshardm_n12_265 = 0; reshardm_n12_265 < 2; reshardm_n12_265 = reshardm_n12_265 + 1) {
    _pgen_tmp_323_798 = VS_out_conv_halo12_243[(reshardm_n12_265 * 4)];
    _pgen_tmp_324_799 = VS_out_conv_halo12_243[((reshardm_n12_265 * 4) + 1)];
    _preg_268435628 = Rotate(_pgen_tmp_324_799, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_325_800, &_pgen_tmp_323_798, &_preg_268435628);
    CMPLR_TM_END(12, 0);
    _pgen_tmp_327_802 = VS_out_conv_halo12_243[((reshardm_n12_265 * 4) + 2)];
    _pgen_tmp_328_803 = VS_out_conv_halo12_243[((reshardm_n12_265 * 4) + 3)];
    _preg_268435629 = Rotate(_pgen_tmp_328_803, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_326_801, &_pgen_tmp_327_802, &_preg_268435629);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&_pgen_tmp_326_801._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_326_801._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_327_802._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435629._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_326_801._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_327_802._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435629._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    _preg_268435630 = Rotate(_pgen_tmp_326_801, -12544);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_322_797, &_pgen_tmp_325_800, &_preg_268435630);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&_pgen_tmp_322_797._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_325_800._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_323_798._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435628._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_325_800._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_323_798._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435628._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_322_797._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_325_800._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435630._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_322_797._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_325_800._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435630._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    Copy_ciph(&output_reshard12_266[reshardm_n12_265], &_pgen_tmp_322_797);
    Free_poly_data(&_preg_268435628._c1_poly);
    Free_poly_data(&_preg_268435628._c0_poly);
    Free_poly_data(&_preg_268435629._c1_poly);
    Free_poly_data(&_preg_268435629._c0_poly);
    Free_poly_data(&_preg_268435630._c1_poly);
    Free_poly_data(&_preg_268435630._c0_poly);
  }
  Free_ciph_poly(VS_out_conv_halo12_243, 8);
  Free_poly_data(&_pgen_tmp_326_801._c1_poly);
  Free_poly_data(&_pgen_tmp_326_801._c0_poly);
  Free_poly_data(&_pgen_tmp_325_800._c1_poly);
  Free_poly_data(&_pgen_tmp_325_800._c0_poly);
  Free_poly_data(&_pgen_tmp_322_797._c1_poly);
  Free_poly_data(&_pgen_tmp_322_797._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 64
  // Relu_27
  // pragma: 65536, 1033, 65
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu12_267, 0, sizeof(VS_out_relu12_267));
  for (mesh_y_n12_268 = 0; mesh_y_n12_268 < 2; mesh_y_n12_268 = mesh_y_n12_268 + 1) {
    for (mesh_z_n12_269 = 0; mesh_z_n12_269 < 1; mesh_z_n12_269 = mesh_z_n12_269 + 1) {
      _pgen_tmp_329_804 = output_reshard12_266[((mesh_y_n12_268 * 1) + mesh_z_n12_269)];
      Bootstrap(&_preg_268435497, &_pgen_tmp_329_804, 15);
      Encode_float(&_pgen_tmp_330_805, &_cst_359, 1, 1, Level(&_preg_268435497));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435499, &_preg_268435497, &_pgen_tmp_330_805);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_preg_268435499._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_preg_268435499._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435497._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_330_805._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_preg_268435499._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435497._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_330_805._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_331_806, &_preg_268435499);
      Rescale(&_pgen_tmp_331_806._c0_poly, &_preg_268435499._c0_poly);
      Rescale(&_pgen_tmp_331_806._c1_poly, &_preg_268435499._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435498 = App_relu(_preg_268435497, _pgen_tmp_331_806, 25088);
      _pgen_tmp_333_808 = VS_out_relu12_267[((mesh_y_n12_268 * 1) + mesh_z_n12_269)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_332_807, &_pgen_tmp_333_808, &_preg_268435498);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_pgen_tmp_332_807._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_332_807._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_333_808._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435498._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_332_807._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_333_808._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435498._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu12_267[((mesh_y_n12_268 * 1) + mesh_z_n12_269)], &_pgen_tmp_332_807);
    }
  }
  Free_ciph_poly(output_reshard12_266, 2);
  Free_poly_data(&_pgen_tmp_330_805._poly);
  Free_poly_data(&_preg_268435499._c1_poly);
  Free_poly_data(&_preg_268435499._c0_poly);
  Free_poly_data(&_pgen_tmp_331_806._c1_poly);
  Free_poly_data(&_pgen_tmp_331_806._c0_poly);
  Free_poly_data(&_preg_268435497._c1_poly);
  Free_poly_data(&_preg_268435497._c0_poly);
  Free_poly_data(&_preg_268435498._c1_poly);
  Free_poly_data(&_preg_268435498._c0_poly);
  Free_poly_data(&_pgen_tmp_332_807._c1_poly);
  Free_poly_data(&_pgen_tmp_332_807._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 65
  // Conv_28
  // pragma: 65536, 1027, 66
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv13_270, 0, sizeof(VS_out_conv13_270));
  memset(&VS_out_conv_halo13_271, 0, sizeof(VS_out_conv_halo13_271));
  Free_ciph_poly(VS_out_conv_halo13_271, 2);
  for (mesh_y_n13_272 = 0; mesh_y_n13_272 < 2; mesh_y_n13_272 = mesh_y_n13_272 + 1) {
    for (mesh_z_n13_273 = 0; mesh_z_n13_273 < 1; mesh_z_n13_273 = mesh_z_n13_273 + 1) {
      Copy_ciph(&_preg_268435500, &VS_out_relu12_267[((mesh_y_n13_272 * 1) + mesh_z_n13_273)]);
      Copy_ciph(&input_dup_n39_274, &_preg_268435500);
      for (bs_input_n39_275 = 0; bs_input_n39_275 < 9; bs_input_n39_275 = bs_input_n39_275 + 1) {
        _preg_268435631 = Rotate(input_dup_n39_274, _cst_244[bs_input_n39_275]);
        Copy_ciph(&input_block_n39_276[bs_input_n39_275], &_preg_268435631);
        Free_poly_data(&_preg_268435631._c1_poly);
        Free_poly_data(&_preg_268435631._c0_poly);
      }
      for (mesh_x_n13_277 = 0; mesh_x_n13_277 < 2; mesh_x_n13_277 = mesh_x_n13_277 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=9
        Zero_ciph(&result_n40_278);
        for (num_grid_n40_279 = 0; num_grid_n40_279 < 128; num_grid_n40_279 = num_grid_n40_279 + 1) {
          Zero_ciph(&result_grid_n40_280);
          for (cap_block_n40_281 = 0; cap_block_n40_281 < 9; cap_block_n40_281 = cap_block_n40_281 + 1) {
            _ckks_gen_tmp_4811_433 = input_block_n39_276[cap_block_n40_281];
            Pt_from_msg_ofst(&_pgen_tmp_334_809, 65/* cst_240 */, (((((mesh_x_n13_277 * 2) + mesh_y_n13_272) * 1152) + (cap_block_n40_281 + (num_grid_n40_279 * 9)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_335_810, &_ckks_gen_tmp_4811_433, &_pgen_tmp_334_809);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n40_280, &result_grid_n40_280, &_pgen_tmp_335_810);
            _pgen_modulus_472 = Q_modulus();
            _pgen_num_q_473 = Poly_level(&result_grid_n40_280._c0_poly);
            for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_335_810._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_4811_433._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_334_809._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_335_810._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_4811_433._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_334_809._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n40_280._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n40_280._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_335_810._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n40_280._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n40_280._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_335_810._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              _pgen_modulus_472 = _pgen_modulus_472 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_337_812, &result_grid_n40_280);
          Rescale(&_pgen_tmp_337_812._c0_poly, &result_grid_n40_280._c0_poly);
          Rescale(&_pgen_tmp_337_812._c1_poly, &result_grid_n40_280._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_338_813, 66/* cst_245 */, (num_grid_n40_279) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_336_811, &_pgen_tmp_337_812, &_pgen_tmp_338_813);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_336_811._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_336_811._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_337_812._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_338_813._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_336_811._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_337_812._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_338_813._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435632 = Rotate(_pgen_tmp_336_811, -25088 + (num_grid_n40_279 * 196));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_340_815, &result_grid_n40_280);
          Rescale(&_pgen_tmp_340_815._c0_poly, &result_grid_n40_280._c0_poly);
          Rescale(&_pgen_tmp_340_815._c1_poly, &result_grid_n40_280._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_341_816, 67/* cst_246 */, (num_grid_n40_279) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_339_814, &_pgen_tmp_340_815, &_pgen_tmp_341_816);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_339_814._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_339_814._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_340_815._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_341_816._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_339_814._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_340_815._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_341_816._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435633 = Rotate(_pgen_tmp_339_814, num_grid_n40_279 * 196);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_342_817, &_preg_268435632, &_preg_268435633);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n40_278, &result_n40_278, &_pgen_tmp_342_817);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&result_n40_278._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_342_817._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435632._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435633._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_342_817._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435632._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435633._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n40_278._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n40_278._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_342_817._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n40_278._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n40_278._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_342_817._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435632._c1_poly);
          Free_poly_data(&_preg_268435632._c0_poly);
          Free_poly_data(&_preg_268435633._c1_poly);
          Free_poly_data(&_preg_268435633._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_343_818, 68 /* cst_243 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n40_278, &result_n40_278, &_pgen_tmp_343_818);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&result_n40_278._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&result_n40_278._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n40_278._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_343_818._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Set_coeffs(&result_n40_278._c1_poly, _pgen_rns_idx_474, degree, Coeffs(&result_n40_278._c1_poly, _pgen_rns_idx_474, degree));
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_345_820 = VS_out_conv13_270[((mesh_x_n13_277 * 1) + mesh_z_n13_273)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_344_819, &_pgen_tmp_345_820, &result_n40_278);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&_pgen_tmp_344_819._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_344_819._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_345_820._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n40_278._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_344_819._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_345_820._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n40_278._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv13_270[((mesh_x_n13_277 * 1) + mesh_z_n13_273)], &_pgen_tmp_344_819);
      }
    }
  }
  Free_ciph_poly(VS_out_relu12_267, 2);
  Free_poly_data(&_preg_268435500._c1_poly);
  Free_poly_data(&_preg_268435500._c0_poly);
  Free_poly_data(&input_dup_n39_274._c1_poly);
  Free_poly_data(&input_dup_n39_274._c0_poly);
  Free_ciph_poly(input_block_n39_276, 9);
  Free_poly_data(&_pgen_tmp_334_809._poly);
  Free_poly_data(&_pgen_tmp_335_810._c1_poly);
  Free_poly_data(&_pgen_tmp_335_810._c0_poly);
  Free_poly_data(&_pgen_tmp_338_813._poly);
  Free_poly_data(&_pgen_tmp_337_812._c1_poly);
  Free_poly_data(&_pgen_tmp_337_812._c0_poly);
  Free_poly_data(&_pgen_tmp_336_811._c1_poly);
  Free_poly_data(&_pgen_tmp_336_811._c0_poly);
  Free_poly_data(&result_grid_n40_280._c1_poly);
  Free_poly_data(&result_grid_n40_280._c0_poly);
  Free_poly_data(&_pgen_tmp_341_816._poly);
  Free_poly_data(&_pgen_tmp_340_815._c1_poly);
  Free_poly_data(&_pgen_tmp_340_815._c0_poly);
  Free_poly_data(&_pgen_tmp_339_814._c1_poly);
  Free_poly_data(&_pgen_tmp_339_814._c0_poly);
  Free_poly_data(&_pgen_tmp_342_817._c1_poly);
  Free_poly_data(&_pgen_tmp_342_817._c0_poly);
  Free_poly_data(&_pgen_tmp_343_818._poly);
  Free_poly_data(&result_n40_278._c1_poly);
  Free_poly_data(&result_n40_278._c0_poly);
  Free_poly_data(&_pgen_tmp_344_819._c1_poly);
  Free_poly_data(&_pgen_tmp_344_819._c0_poly);
  for (rescale_iv_465 = 0; rescale_iv_465 < 2; rescale_iv_465 = rescale_iv_465 + 1) {
    _pgen_tmp_346_821 = VS_out_conv13_270[rescale_iv_465];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_347_822, &_pgen_tmp_346_821);
    Rescale(&_pgen_tmp_347_822._c0_poly, &_pgen_tmp_346_821._c0_poly);
    Rescale(&_pgen_tmp_347_822._c1_poly, &_pgen_tmp_346_821._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv13_270[rescale_iv_465], &_pgen_tmp_347_822);
  }
  Free_poly_data(&_pgen_tmp_347_822._c1_poly);
  Free_poly_data(&_pgen_tmp_347_822._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 66
  // Add_29
  // pragma: 65536, 1025, 67
  CMPLR_TM_START(2, 0);
  memset(&VS_out_add13_282, 0, sizeof(VS_out_add13_282));
  for (mesh_y_n13_283 = 0; mesh_y_n13_283 < 2; mesh_y_n13_283 = mesh_y_n13_283 + 1) {
    for (mesh_z_n13_284 = 0; mesh_z_n13_284 < 1; mesh_z_n13_284 = mesh_z_n13_284 + 1) {
      _pgen_tmp_349_824 = VS_out_add13_282[((mesh_y_n13_283 * 1) + mesh_z_n13_284)];
      _pgen_tmp_350_825 = VS_out_conv13_270[((mesh_y_n13_283 * 1) + mesh_z_n13_284)];
      _pgen_tmp_351_826 = output_reshard11_241[((mesh_y_n13_283 * 1) + mesh_z_n13_284)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_352_827, &_pgen_tmp_350_825, &_pgen_tmp_351_826);
      CMPLR_TM_END(12, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_348_823, &_pgen_tmp_349_824, &_pgen_tmp_352_827);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_pgen_tmp_348_823._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_352_827._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_350_825._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_351_826._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_352_827._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_350_825._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_351_826._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_348_823._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_349_824._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_352_827._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_348_823._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_349_824._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_352_827._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_add13_282[((mesh_y_n13_283 * 1) + mesh_z_n13_284)], &_pgen_tmp_348_823);
    }
  }
  Free_ciph_poly(VS_out_conv13_270, 2);
  Free_ciph_poly(output_reshard11_241, 2);
  Free_poly_data(&_pgen_tmp_352_827._c1_poly);
  Free_poly_data(&_pgen_tmp_352_827._c0_poly);
  Free_poly_data(&_pgen_tmp_348_823._c1_poly);
  Free_poly_data(&_pgen_tmp_348_823._c0_poly);
  CMPLR_TM_END(2, 0);
  // pragma: 65537, 1025, 67
  // Relu_30
  // pragma: 65536, 1033, 68
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu13_285, 0, sizeof(VS_out_relu13_285));
  for (mesh_y_n13_286 = 0; mesh_y_n13_286 < 2; mesh_y_n13_286 = mesh_y_n13_286 + 1) {
    for (mesh_z_n13_287 = 0; mesh_z_n13_287 < 1; mesh_z_n13_287 = mesh_z_n13_287 + 1) {
      _pgen_tmp_353_828 = VS_out_add13_282[((mesh_y_n13_286 * 1) + mesh_z_n13_287)];
      Bootstrap(&_preg_268435501, &_pgen_tmp_353_828, 15);
      Encode_float(&_pgen_tmp_354_829, &_cst_360, 1, 1, Level(&_preg_268435501));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435503, &_preg_268435501, &_pgen_tmp_354_829);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_preg_268435503._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_preg_268435503._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435501._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_354_829._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_preg_268435503._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435501._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_354_829._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_355_830, &_preg_268435503);
      Rescale(&_pgen_tmp_355_830._c0_poly, &_preg_268435503._c0_poly);
      Rescale(&_pgen_tmp_355_830._c1_poly, &_preg_268435503._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435502 = App_relu(_preg_268435501, _pgen_tmp_355_830, 25088);
      _pgen_tmp_357_832 = VS_out_relu13_285[((mesh_y_n13_286 * 1) + mesh_z_n13_287)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_356_831, &_pgen_tmp_357_832, &_preg_268435502);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_pgen_tmp_356_831._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_356_831._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_357_832._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435502._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_356_831._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_357_832._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435502._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu13_285[((mesh_y_n13_286 * 1) + mesh_z_n13_287)], &_pgen_tmp_356_831);
    }
  }
  Free_ciph_poly(VS_out_add13_282, 2);
  Free_poly_data(&_pgen_tmp_354_829._poly);
  Free_poly_data(&_preg_268435503._c1_poly);
  Free_poly_data(&_preg_268435503._c0_poly);
  Free_poly_data(&_pgen_tmp_355_830._c1_poly);
  Free_poly_data(&_pgen_tmp_355_830._c0_poly);
  Free_poly_data(&_preg_268435501._c1_poly);
  Free_poly_data(&_preg_268435501._c0_poly);
  Free_poly_data(&_preg_268435502._c1_poly);
  Free_poly_data(&_preg_268435502._c0_poly);
  Free_poly_data(&_pgen_tmp_356_831._c1_poly);
  Free_poly_data(&_pgen_tmp_356_831._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 68
  // Conv_31
  // pragma: 65536, 1027, 69
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv14_288, 0, sizeof(VS_out_conv14_288));
  memset(&VS_out_conv_halo14_289, 0, sizeof(VS_out_conv_halo14_289));
  Free_ciph_poly(VS_out_conv_halo14_289, 2);
  for (mesh_y_n14_290 = 0; mesh_y_n14_290 < 2; mesh_y_n14_290 = mesh_y_n14_290 + 1) {
    for (mesh_z_n14_291 = 0; mesh_z_n14_291 < 1; mesh_z_n14_291 = mesh_z_n14_291 + 1) {
      Copy_ciph(&_preg_268435504, &VS_out_relu13_285[((mesh_y_n14_290 * 1) + mesh_z_n14_291)]);
      Copy_ciph(&input_dup_n40_292, &_preg_268435504);
      for (bs_input_n40_293 = 0; bs_input_n40_293 < 9; bs_input_n40_293 = bs_input_n40_293 + 1) {
        _preg_268435634 = Rotate(input_dup_n40_292, _cst_251[bs_input_n40_293]);
        Copy_ciph(&input_block_n40_294[bs_input_n40_293], &_preg_268435634);
        Free_poly_data(&_preg_268435634._c1_poly);
        Free_poly_data(&_preg_268435634._c0_poly);
      }
      for (mesh_x_n14_295 = 0; mesh_x_n14_295 < 2; mesh_x_n14_295 = mesh_x_n14_295 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=9
        Zero_ciph(&result_n41_296);
        for (num_grid_n41_297 = 0; num_grid_n41_297 < 128; num_grid_n41_297 = num_grid_n41_297 + 1) {
          Zero_ciph(&result_grid_n41_298);
          for (cap_block_n41_299 = 0; cap_block_n41_299 < 9; cap_block_n41_299 = cap_block_n41_299 + 1) {
            _ckks_gen_tmp_5141_434 = input_block_n40_294[cap_block_n41_299];
            Pt_from_msg_ofst(&_pgen_tmp_358_833, 69/* cst_247 */, (((((mesh_x_n14_295 * 2) + mesh_y_n14_290) * 1152) + (cap_block_n41_299 + (num_grid_n41_297 * 9)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_359_834, &_ckks_gen_tmp_5141_434, &_pgen_tmp_358_833);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n41_298, &result_grid_n41_298, &_pgen_tmp_359_834);
            _pgen_modulus_472 = Q_modulus();
            _pgen_num_q_473 = Poly_level(&result_grid_n41_298._c0_poly);
            for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_359_834._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_5141_434._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_358_833._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_359_834._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_5141_434._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_358_833._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n41_298._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n41_298._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_359_834._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n41_298._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n41_298._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_359_834._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              _pgen_modulus_472 = _pgen_modulus_472 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_361_836, &result_grid_n41_298);
          Rescale(&_pgen_tmp_361_836._c0_poly, &result_grid_n41_298._c0_poly);
          Rescale(&_pgen_tmp_361_836._c1_poly, &result_grid_n41_298._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_362_837, 70/* cst_252 */, (num_grid_n41_297) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_360_835, &_pgen_tmp_361_836, &_pgen_tmp_362_837);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_360_835._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_360_835._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_361_836._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_362_837._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_360_835._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_361_836._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_362_837._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435635 = Rotate(_pgen_tmp_360_835, -25088 + (num_grid_n41_297 * 196));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_364_839, &result_grid_n41_298);
          Rescale(&_pgen_tmp_364_839._c0_poly, &result_grid_n41_298._c0_poly);
          Rescale(&_pgen_tmp_364_839._c1_poly, &result_grid_n41_298._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_365_840, 71/* cst_253 */, (num_grid_n41_297) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_363_838, &_pgen_tmp_364_839, &_pgen_tmp_365_840);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_363_838._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_363_838._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_364_839._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_365_840._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_363_838._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_364_839._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_365_840._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435636 = Rotate(_pgen_tmp_363_838, num_grid_n41_297 * 196);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_366_841, &_preg_268435635, &_preg_268435636);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n41_296, &result_n41_296, &_pgen_tmp_366_841);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&result_n41_296._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_366_841._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435635._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435636._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_366_841._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435635._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435636._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n41_296._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n41_296._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_366_841._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n41_296._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n41_296._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_366_841._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435635._c1_poly);
          Free_poly_data(&_preg_268435635._c0_poly);
          Free_poly_data(&_preg_268435636._c1_poly);
          Free_poly_data(&_preg_268435636._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_367_842, 72 /* cst_250 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n41_296, &result_n41_296, &_pgen_tmp_367_842);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&result_n41_296._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&result_n41_296._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n41_296._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_367_842._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Set_coeffs(&result_n41_296._c1_poly, _pgen_rns_idx_474, degree, Coeffs(&result_n41_296._c1_poly, _pgen_rns_idx_474, degree));
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_369_844 = VS_out_conv14_288[((mesh_x_n14_295 * 1) + mesh_z_n14_291)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_368_843, &_pgen_tmp_369_844, &result_n41_296);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&_pgen_tmp_368_843._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_368_843._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_369_844._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n41_296._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_368_843._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_369_844._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n41_296._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv14_288[((mesh_x_n14_295 * 1) + mesh_z_n14_291)], &_pgen_tmp_368_843);
      }
    }
  }
  Free_poly_data(&_preg_268435504._c1_poly);
  Free_poly_data(&_preg_268435504._c0_poly);
  Free_poly_data(&input_dup_n40_292._c1_poly);
  Free_poly_data(&input_dup_n40_292._c0_poly);
  Free_ciph_poly(input_block_n40_294, 9);
  Free_poly_data(&_pgen_tmp_358_833._poly);
  Free_poly_data(&_pgen_tmp_359_834._c1_poly);
  Free_poly_data(&_pgen_tmp_359_834._c0_poly);
  Free_poly_data(&_pgen_tmp_362_837._poly);
  Free_poly_data(&_pgen_tmp_361_836._c1_poly);
  Free_poly_data(&_pgen_tmp_361_836._c0_poly);
  Free_poly_data(&_pgen_tmp_360_835._c1_poly);
  Free_poly_data(&_pgen_tmp_360_835._c0_poly);
  Free_poly_data(&result_grid_n41_298._c1_poly);
  Free_poly_data(&result_grid_n41_298._c0_poly);
  Free_poly_data(&_pgen_tmp_365_840._poly);
  Free_poly_data(&_pgen_tmp_364_839._c1_poly);
  Free_poly_data(&_pgen_tmp_364_839._c0_poly);
  Free_poly_data(&_pgen_tmp_363_838._c1_poly);
  Free_poly_data(&_pgen_tmp_363_838._c0_poly);
  Free_poly_data(&_pgen_tmp_366_841._c1_poly);
  Free_poly_data(&_pgen_tmp_366_841._c0_poly);
  Free_poly_data(&_pgen_tmp_367_842._poly);
  Free_poly_data(&result_n41_296._c1_poly);
  Free_poly_data(&result_n41_296._c0_poly);
  Free_poly_data(&_pgen_tmp_368_843._c1_poly);
  Free_poly_data(&_pgen_tmp_368_843._c0_poly);
  for (rescale_iv_466 = 0; rescale_iv_466 < 2; rescale_iv_466 = rescale_iv_466 + 1) {
    _pgen_tmp_370_845 = VS_out_conv14_288[rescale_iv_466];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_371_846, &_pgen_tmp_370_845);
    Rescale(&_pgen_tmp_371_846._c0_poly, &_pgen_tmp_370_845._c0_poly);
    Rescale(&_pgen_tmp_371_846._c1_poly, &_pgen_tmp_370_845._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv14_288[rescale_iv_466], &_pgen_tmp_371_846);
  }
  Free_poly_data(&_pgen_tmp_371_846._c1_poly);
  Free_poly_data(&_pgen_tmp_371_846._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 69
  // Relu_32
  // pragma: 65536, 1033, 70
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu14_300, 0, sizeof(VS_out_relu14_300));
  for (mesh_y_n14_301 = 0; mesh_y_n14_301 < 2; mesh_y_n14_301 = mesh_y_n14_301 + 1) {
    for (mesh_z_n14_302 = 0; mesh_z_n14_302 < 1; mesh_z_n14_302 = mesh_z_n14_302 + 1) {
      _pgen_tmp_372_847 = VS_out_conv14_288[((mesh_y_n14_301 * 1) + mesh_z_n14_302)];
      Bootstrap(&_preg_268435505, &_pgen_tmp_372_847, 15);
      Encode_float(&_pgen_tmp_373_848, &_cst_361, 1, 1, Level(&_preg_268435505));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435507, &_preg_268435505, &_pgen_tmp_373_848);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_preg_268435507._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_preg_268435507._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435505._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_373_848._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_preg_268435507._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435505._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_373_848._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_374_849, &_preg_268435507);
      Rescale(&_pgen_tmp_374_849._c0_poly, &_preg_268435507._c0_poly);
      Rescale(&_pgen_tmp_374_849._c1_poly, &_preg_268435507._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435506 = App_relu(_preg_268435505, _pgen_tmp_374_849, 25088);
      _pgen_tmp_376_851 = VS_out_relu14_300[((mesh_y_n14_301 * 1) + mesh_z_n14_302)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_375_850, &_pgen_tmp_376_851, &_preg_268435506);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_pgen_tmp_375_850._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_375_850._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_376_851._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435506._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_375_850._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_376_851._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435506._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu14_300[((mesh_y_n14_301 * 1) + mesh_z_n14_302)], &_pgen_tmp_375_850);
    }
  }
  Free_ciph_poly(VS_out_conv14_288, 2);
  Free_poly_data(&_pgen_tmp_373_848._poly);
  Free_poly_data(&_preg_268435507._c1_poly);
  Free_poly_data(&_preg_268435507._c0_poly);
  Free_poly_data(&_pgen_tmp_374_849._c1_poly);
  Free_poly_data(&_pgen_tmp_374_849._c0_poly);
  Free_poly_data(&_preg_268435505._c1_poly);
  Free_poly_data(&_preg_268435505._c0_poly);
  Free_poly_data(&_preg_268435506._c1_poly);
  Free_poly_data(&_preg_268435506._c0_poly);
  Free_poly_data(&_pgen_tmp_375_850._c1_poly);
  Free_poly_data(&_pgen_tmp_375_850._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 70
  // Conv_33
  // pragma: 65536, 1027, 71
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv15_303, 0, sizeof(VS_out_conv15_303));
  memset(&VS_out_conv_halo15_304, 0, sizeof(VS_out_conv_halo15_304));
  Free_ciph_poly(VS_out_conv_halo15_304, 2);
  for (mesh_y_n15_305 = 0; mesh_y_n15_305 < 2; mesh_y_n15_305 = mesh_y_n15_305 + 1) {
    for (mesh_z_n15_306 = 0; mesh_z_n15_306 < 1; mesh_z_n15_306 = mesh_z_n15_306 + 1) {
      Copy_ciph(&_preg_268435508, &VS_out_relu14_300[((mesh_y_n15_305 * 1) + mesh_z_n15_306)]);
      Copy_ciph(&input_dup_n41_307, &_preg_268435508);
      for (bs_input_n41_308 = 0; bs_input_n41_308 < 9; bs_input_n41_308 = bs_input_n41_308 + 1) {
        _preg_268435637 = Rotate(input_dup_n41_307, _cst_258[bs_input_n41_308]);
        Copy_ciph(&input_block_n41_309[bs_input_n41_308], &_preg_268435637);
        Free_poly_data(&_preg_268435637._c1_poly);
        Free_poly_data(&_preg_268435637._c0_poly);
      }
      for (mesh_x_n15_310 = 0; mesh_x_n15_310 < 2; mesh_x_n15_310 = mesh_x_n15_310 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=9
        Zero_ciph(&result_n42_311);
        for (num_grid_n42_312 = 0; num_grid_n42_312 < 128; num_grid_n42_312 = num_grid_n42_312 + 1) {
          Zero_ciph(&result_grid_n42_313);
          for (cap_block_n42_314 = 0; cap_block_n42_314 < 9; cap_block_n42_314 = cap_block_n42_314 + 1) {
            _ckks_gen_tmp_5406_435 = input_block_n41_309[cap_block_n42_314];
            Pt_from_msg_ofst(&_pgen_tmp_377_852, 73/* cst_254 */, (((((mesh_x_n15_310 * 2) + mesh_y_n15_305) * 1152) + (cap_block_n42_314 + (num_grid_n42_312 * 9)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_378_853, &_ckks_gen_tmp_5406_435, &_pgen_tmp_377_852);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n42_313, &result_grid_n42_313, &_pgen_tmp_378_853);
            _pgen_modulus_472 = Q_modulus();
            _pgen_num_q_473 = Poly_level(&result_grid_n42_313._c0_poly);
            for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_378_853._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_5406_435._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_377_852._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_378_853._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_5406_435._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_377_852._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n42_313._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n42_313._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_378_853._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n42_313._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n42_313._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_378_853._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              _pgen_modulus_472 = _pgen_modulus_472 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_380_855, &result_grid_n42_313);
          Rescale(&_pgen_tmp_380_855._c0_poly, &result_grid_n42_313._c0_poly);
          Rescale(&_pgen_tmp_380_855._c1_poly, &result_grid_n42_313._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_381_856, 74/* cst_259 */, (num_grid_n42_312) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_379_854, &_pgen_tmp_380_855, &_pgen_tmp_381_856);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_379_854._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_379_854._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_380_855._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_381_856._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_379_854._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_380_855._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_381_856._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435638 = Rotate(_pgen_tmp_379_854, -25088 + (num_grid_n42_312 * 196));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_383_858, &result_grid_n42_313);
          Rescale(&_pgen_tmp_383_858._c0_poly, &result_grid_n42_313._c0_poly);
          Rescale(&_pgen_tmp_383_858._c1_poly, &result_grid_n42_313._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_384_859, 75/* cst_260 */, (num_grid_n42_312) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_382_857, &_pgen_tmp_383_858, &_pgen_tmp_384_859);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_382_857._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_382_857._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_383_858._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_384_859._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_382_857._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_383_858._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_384_859._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435639 = Rotate(_pgen_tmp_382_857, num_grid_n42_312 * 196);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_385_860, &_preg_268435638, &_preg_268435639);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n42_311, &result_n42_311, &_pgen_tmp_385_860);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&result_n42_311._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_385_860._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435638._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435639._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_385_860._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435638._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435639._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n42_311._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n42_311._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_385_860._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n42_311._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n42_311._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_385_860._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435638._c1_poly);
          Free_poly_data(&_preg_268435638._c0_poly);
          Free_poly_data(&_preg_268435639._c1_poly);
          Free_poly_data(&_preg_268435639._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_386_861, 76 /* cst_257 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n42_311, &result_n42_311, &_pgen_tmp_386_861);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&result_n42_311._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&result_n42_311._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n42_311._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_386_861._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Set_coeffs(&result_n42_311._c1_poly, _pgen_rns_idx_474, degree, Coeffs(&result_n42_311._c1_poly, _pgen_rns_idx_474, degree));
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_388_863 = VS_out_conv15_303[((mesh_x_n15_310 * 1) + mesh_z_n15_306)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_387_862, &_pgen_tmp_388_863, &result_n42_311);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&_pgen_tmp_387_862._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_387_862._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_388_863._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n42_311._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_387_862._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_388_863._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n42_311._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv15_303[((mesh_x_n15_310 * 1) + mesh_z_n15_306)], &_pgen_tmp_387_862);
      }
    }
  }
  Free_ciph_poly(VS_out_relu14_300, 2);
  Free_poly_data(&_preg_268435508._c1_poly);
  Free_poly_data(&_preg_268435508._c0_poly);
  Free_poly_data(&input_dup_n41_307._c1_poly);
  Free_poly_data(&input_dup_n41_307._c0_poly);
  Free_ciph_poly(input_block_n41_309, 9);
  Free_poly_data(&_pgen_tmp_377_852._poly);
  Free_poly_data(&_pgen_tmp_378_853._c1_poly);
  Free_poly_data(&_pgen_tmp_378_853._c0_poly);
  Free_poly_data(&_pgen_tmp_381_856._poly);
  Free_poly_data(&_pgen_tmp_380_855._c1_poly);
  Free_poly_data(&_pgen_tmp_380_855._c0_poly);
  Free_poly_data(&_pgen_tmp_379_854._c1_poly);
  Free_poly_data(&_pgen_tmp_379_854._c0_poly);
  Free_poly_data(&result_grid_n42_313._c1_poly);
  Free_poly_data(&result_grid_n42_313._c0_poly);
  Free_poly_data(&_pgen_tmp_384_859._poly);
  Free_poly_data(&_pgen_tmp_383_858._c1_poly);
  Free_poly_data(&_pgen_tmp_383_858._c0_poly);
  Free_poly_data(&_pgen_tmp_382_857._c1_poly);
  Free_poly_data(&_pgen_tmp_382_857._c0_poly);
  Free_poly_data(&_pgen_tmp_385_860._c1_poly);
  Free_poly_data(&_pgen_tmp_385_860._c0_poly);
  Free_poly_data(&_pgen_tmp_386_861._poly);
  Free_poly_data(&result_n42_311._c1_poly);
  Free_poly_data(&result_n42_311._c0_poly);
  Free_poly_data(&_pgen_tmp_387_862._c1_poly);
  Free_poly_data(&_pgen_tmp_387_862._c0_poly);
  for (rescale_iv_467 = 0; rescale_iv_467 < 2; rescale_iv_467 = rescale_iv_467 + 1) {
    _pgen_tmp_389_864 = VS_out_conv15_303[rescale_iv_467];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_390_865, &_pgen_tmp_389_864);
    Rescale(&_pgen_tmp_390_865._c0_poly, &_pgen_tmp_389_864._c0_poly);
    Rescale(&_pgen_tmp_390_865._c1_poly, &_pgen_tmp_389_864._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv15_303[rescale_iv_467], &_pgen_tmp_390_865);
  }
  Free_poly_data(&_pgen_tmp_390_865._c1_poly);
  Free_poly_data(&_pgen_tmp_390_865._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 71
  // Add_34
  // pragma: 65536, 1025, 72
  CMPLR_TM_START(2, 0);
  memset(&VS_out_add15_315, 0, sizeof(VS_out_add15_315));
  for (mesh_y_n15_316 = 0; mesh_y_n15_316 < 2; mesh_y_n15_316 = mesh_y_n15_316 + 1) {
    for (mesh_z_n15_317 = 0; mesh_z_n15_317 < 1; mesh_z_n15_317 = mesh_z_n15_317 + 1) {
      _pgen_tmp_392_867 = VS_out_add15_315[((mesh_y_n15_316 * 1) + mesh_z_n15_317)];
      _pgen_tmp_393_868 = VS_out_conv15_303[((mesh_y_n15_316 * 1) + mesh_z_n15_317)];
      _pgen_tmp_394_869 = VS_out_relu13_285[((mesh_y_n15_316 * 1) + mesh_z_n15_317)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_395_870, &_pgen_tmp_393_868, &_pgen_tmp_394_869);
      CMPLR_TM_END(12, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_391_866, &_pgen_tmp_392_867, &_pgen_tmp_395_870);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_pgen_tmp_391_866._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_395_870._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_393_868._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_394_869._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_395_870._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_393_868._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_394_869._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_391_866._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_392_867._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_395_870._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_391_866._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_392_867._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_395_870._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_add15_315[((mesh_y_n15_316 * 1) + mesh_z_n15_317)], &_pgen_tmp_391_866);
    }
  }
  Free_ciph_poly(VS_out_conv15_303, 2);
  Free_ciph_poly(VS_out_relu13_285, 2);
  Free_poly_data(&_pgen_tmp_395_870._c1_poly);
  Free_poly_data(&_pgen_tmp_395_870._c0_poly);
  Free_poly_data(&_pgen_tmp_391_866._c1_poly);
  Free_poly_data(&_pgen_tmp_391_866._c0_poly);
  CMPLR_TM_END(2, 0);
  // pragma: 65537, 1025, 72
  // Relu_35
  // pragma: 65536, 1033, 73
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu15_318, 0, sizeof(VS_out_relu15_318));
  for (mesh_y_n15_319 = 0; mesh_y_n15_319 < 2; mesh_y_n15_319 = mesh_y_n15_319 + 1) {
    for (mesh_z_n15_320 = 0; mesh_z_n15_320 < 1; mesh_z_n15_320 = mesh_z_n15_320 + 1) {
      _pgen_tmp_396_871 = VS_out_add15_315[((mesh_y_n15_319 * 1) + mesh_z_n15_320)];
      Bootstrap(&_preg_268435509, &_pgen_tmp_396_871, 17);
      Encode_float(&_pgen_tmp_397_872, &_cst_362, 1, 1, Level(&_preg_268435509));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435511, &_preg_268435509, &_pgen_tmp_397_872);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_preg_268435511._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_preg_268435511._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435509._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_397_872._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_preg_268435511._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435509._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_397_872._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_398_873, &_preg_268435511);
      Rescale(&_pgen_tmp_398_873._c0_poly, &_preg_268435511._c0_poly);
      Rescale(&_pgen_tmp_398_873._c1_poly, &_preg_268435511._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435510 = App_relu(_preg_268435509, _pgen_tmp_398_873, 25088);
      _pgen_tmp_400_875 = VS_out_relu15_318[((mesh_y_n15_319 * 1) + mesh_z_n15_320)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_399_874, &_pgen_tmp_400_875, &_preg_268435510);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&_pgen_tmp_399_874._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_399_874._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_400_875._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435510._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_399_874._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_400_875._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435510._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu15_318[((mesh_y_n15_319 * 1) + mesh_z_n15_320)], &_pgen_tmp_399_874);
    }
  }
  Free_ciph_poly(VS_out_add15_315, 2);
  Free_poly_data(&_pgen_tmp_397_872._poly);
  Free_poly_data(&_preg_268435511._c1_poly);
  Free_poly_data(&_preg_268435511._c0_poly);
  Free_poly_data(&_pgen_tmp_398_873._c1_poly);
  Free_poly_data(&_pgen_tmp_398_873._c0_poly);
  Free_poly_data(&_preg_268435509._c1_poly);
  Free_poly_data(&_preg_268435509._c0_poly);
  Free_poly_data(&_preg_268435510._c1_poly);
  Free_poly_data(&_preg_268435510._c0_poly);
  Free_poly_data(&_pgen_tmp_399_874._c1_poly);
  Free_poly_data(&_pgen_tmp_399_874._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 73
  // Conv_36
  // pragma: 65536, 1027, 74
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv16_321, 0, sizeof(VS_out_conv16_321));
  memset(&VS_out_conv_halo16_322, 0, sizeof(VS_out_conv_halo16_322));
  for (mesh_y_n16_323 = 0; mesh_y_n16_323 < 2; mesh_y_n16_323 = mesh_y_n16_323 + 1) {
    for (mesh_z_n16_324 = 0; mesh_z_n16_324 < 1; mesh_z_n16_324 = mesh_z_n16_324 + 1) {
      Copy_ciph(&_preg_268435512, &VS_out_relu15_318[((mesh_y_n16_323 * 1) + mesh_z_n16_324)]);
      Copy_ciph(&input_dup_n42_325, &_preg_268435512);
      for (bs_input_n42_326 = 0; bs_input_n42_326 < 1; bs_input_n42_326 = bs_input_n42_326 + 1) {
        _preg_268435640 = Rotate(input_dup_n42_325, _cst_265[bs_input_n42_326]);
        Copy_ciph(&input_block_n42_327[bs_input_n42_326], &_preg_268435640);
        Free_poly_data(&_preg_268435640._c1_poly);
        Free_poly_data(&_preg_268435640._c0_poly);
      }
      for (mesh_x_n16_328 = 0; mesh_x_n16_328 < 4; mesh_x_n16_328 = mesh_x_n16_328 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n43_329);
        for (num_grid_n43_330 = 0; num_grid_n43_330 < 128; num_grid_n43_330 = num_grid_n43_330 + 1) {
          Zero_ciph(&result_grid_n43_331);
          for (cap_block_n43_332 = 0; cap_block_n43_332 < 1; cap_block_n43_332 = cap_block_n43_332 + 1) {
            _ckks_gen_tmp_5736_436 = input_block_n42_327[cap_block_n43_332];
            Pt_from_msg_ofst(&_pgen_tmp_401_876, 77/* cst_261 */, (((((mesh_x_n16_328 * 2) + mesh_y_n16_323) * 128) + (cap_block_n43_332 + (num_grid_n43_330 * 1)))) * (25088), 25088, 1, 5);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_402_877, &_ckks_gen_tmp_5736_436, &_pgen_tmp_401_876);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n43_331, &result_grid_n43_331, &_pgen_tmp_402_877);
            _pgen_modulus_472 = Q_modulus();
            _pgen_num_q_473 = Poly_level(&result_grid_n43_331._c0_poly);
            for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_402_877._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_5736_436._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_401_876._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_402_877._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_5736_436._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_401_876._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n43_331._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n43_331._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_402_877._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n43_331._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n43_331._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_402_877._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              _pgen_modulus_472 = _pgen_modulus_472 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_404_879, &result_grid_n43_331);
          Rescale(&_pgen_tmp_404_879._c0_poly, &result_grid_n43_331._c0_poly);
          Rescale(&_pgen_tmp_404_879._c1_poly, &result_grid_n43_331._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_405_880, 78/* cst_266 */, (num_grid_n43_330) * (25088), 25088, 1, 4);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_403_878, &_pgen_tmp_404_879, &_pgen_tmp_405_880);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_403_878._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_403_878._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_404_879._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_405_880._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_403_878._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_404_879._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_405_880._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435641 = Rotate(_pgen_tmp_403_878, -25088 + (num_grid_n43_330 * 196));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_407_882, &result_grid_n43_331);
          Rescale(&_pgen_tmp_407_882._c0_poly, &result_grid_n43_331._c0_poly);
          Rescale(&_pgen_tmp_407_882._c1_poly, &result_grid_n43_331._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_408_883, 79/* cst_267 */, (num_grid_n43_330) * (25088), 25088, 1, 4);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_406_881, &_pgen_tmp_407_882, &_pgen_tmp_408_883);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_406_881._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_406_881._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_407_882._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_408_883._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_406_881._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_407_882._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_408_883._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435642 = Rotate(_pgen_tmp_406_881, num_grid_n43_330 * 196);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_409_884, &_preg_268435641, &_preg_268435642);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n43_329, &result_n43_329, &_pgen_tmp_409_884);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&result_n43_329._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_409_884._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435641._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435642._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_409_884._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435641._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435642._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n43_329._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n43_329._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_409_884._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n43_329._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n43_329._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_409_884._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435641._c1_poly);
          Free_poly_data(&_preg_268435641._c0_poly);
          Free_poly_data(&_preg_268435642._c1_poly);
          Free_poly_data(&_preg_268435642._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_410_885, 80 /* cst_264 */, 25088, 2, 4);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n43_329, &result_n43_329, &_pgen_tmp_410_885);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&result_n43_329._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&result_n43_329._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n43_329._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_410_885._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Set_coeffs(&result_n43_329._c1_poly, _pgen_rns_idx_474, degree, Coeffs(&result_n43_329._c1_poly, _pgen_rns_idx_474, degree));
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_412_887 = VS_out_conv16_321[((mesh_x_n16_328 * 1) + mesh_z_n16_324)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_411_886, &_pgen_tmp_412_887, &result_n43_329);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&_pgen_tmp_411_886._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_411_886._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_412_887._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n43_329._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_411_886._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_412_887._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n43_329._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv16_321[((mesh_x_n16_328 * 1) + mesh_z_n16_324)], &_pgen_tmp_411_886);
      }
    }
  }
  Free_poly_data(&_preg_268435512._c1_poly);
  Free_poly_data(&_preg_268435512._c0_poly);
  Free_poly_data(&input_dup_n42_325._c1_poly);
  Free_poly_data(&input_dup_n42_325._c0_poly);
  Free_ciph_poly(input_block_n42_327, 1);
  Free_poly_data(&_pgen_tmp_401_876._poly);
  Free_poly_data(&_pgen_tmp_402_877._c1_poly);
  Free_poly_data(&_pgen_tmp_402_877._c0_poly);
  Free_poly_data(&_pgen_tmp_405_880._poly);
  Free_poly_data(&_pgen_tmp_404_879._c1_poly);
  Free_poly_data(&_pgen_tmp_404_879._c0_poly);
  Free_poly_data(&_pgen_tmp_403_878._c1_poly);
  Free_poly_data(&_pgen_tmp_403_878._c0_poly);
  Free_poly_data(&result_grid_n43_331._c1_poly);
  Free_poly_data(&result_grid_n43_331._c0_poly);
  Free_poly_data(&_pgen_tmp_408_883._poly);
  Free_poly_data(&_pgen_tmp_407_882._c1_poly);
  Free_poly_data(&_pgen_tmp_407_882._c0_poly);
  Free_poly_data(&_pgen_tmp_406_881._c1_poly);
  Free_poly_data(&_pgen_tmp_406_881._c0_poly);
  Free_poly_data(&_pgen_tmp_409_884._c1_poly);
  Free_poly_data(&_pgen_tmp_409_884._c0_poly);
  Free_poly_data(&_pgen_tmp_410_885._poly);
  Free_poly_data(&result_n43_329._c1_poly);
  Free_poly_data(&result_n43_329._c0_poly);
  Free_poly_data(&_pgen_tmp_411_886._c1_poly);
  Free_poly_data(&_pgen_tmp_411_886._c0_poly);
  for (rescale_iv_468 = 0; rescale_iv_468 < 4; rescale_iv_468 = rescale_iv_468 + 1) {
    _pgen_tmp_413_888 = VS_out_conv16_321[rescale_iv_468];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_414_889, &_pgen_tmp_413_888);
    Rescale(&_pgen_tmp_414_889._c0_poly, &_pgen_tmp_413_888._c0_poly);
    Rescale(&_pgen_tmp_414_889._c1_poly, &_pgen_tmp_413_888._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv16_321[rescale_iv_468], &_pgen_tmp_414_889);
  }
  Free_poly_data(&_pgen_tmp_414_889._c1_poly);
  Free_poly_data(&_pgen_tmp_414_889._c0_poly);
  for (siv_n16_333 = 0; siv_n16_333 < 4; siv_n16_333 = siv_n16_333 + 1) {
    orig_result43_334 = VS_out_conv16_321[siv_n16_333];
    Zero_ciph(&comb_dic_result44_335);
    for (comb_dic_index_n44_336 = 0; comb_dic_index_n44_336 < 1; comb_dic_index_n44_336 = comb_dic_index_n44_336 + 1) {
      _preg_268435643 = Rotate(orig_result43_334, 1 << comb_dic_index_n44_336);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&orig_result43_334, &orig_result43_334, &_preg_268435643);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&orig_result43_334._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&orig_result43_334._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&orig_result43_334._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435643._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&orig_result43_334._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&orig_result43_334._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435643._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435643._c1_poly);
      Free_poly_data(&_preg_268435643._c0_poly);
    }
    for (comb_dic_index_out_n44_337 = 0; comb_dic_index_out_n44_337 < 7; comb_dic_index_out_n44_337 = comb_dic_index_out_n44_337 + 1) {
      for (comb_dic_index_in_n44_338 = 0; comb_dic_index_in_n44_338 < 4; comb_dic_index_in_n44_338 = comb_dic_index_in_n44_338 + 1) {
        _preg_268435644 = Rotate(orig_result43_334, (comb_dic_index_out_n44_337 * 21) + (comb_dic_index_in_n44_338 * 2));
        Copy_ciph(&_ckks_gen_tmp_5897_437, &_preg_268435644);
        Pt_from_msg_ofst(&_pgen_tmp_415_890, 81/* cst_268 */, (((comb_dic_index_out_n44_337 * 4) + comb_dic_index_in_n44_338)) * (25088), 25088, 1, 3);
        CMPLR_TM_START(17, 0);
        Init_ciph_up_scale_plain(&_pgen_tmp_416_891, &_ckks_gen_tmp_5897_437, &_pgen_tmp_415_890);
        CMPLR_TM_END(17, 0);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_dic_result44_335, &comb_dic_result44_335, &_pgen_tmp_416_891);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&comb_dic_result44_335._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modmul(Coeffs(&_pgen_tmp_416_891._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_5897_437._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_415_890._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modmul(Coeffs(&_pgen_tmp_416_891._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_5897_437._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_415_890._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&comb_dic_result44_335._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_dic_result44_335._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_416_891._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&comb_dic_result44_335._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_dic_result44_335._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_416_891._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435644._c1_poly);
        Free_poly_data(&_preg_268435644._c0_poly);
      }
    }
    Zero_ciph(&ss_result44_339);
    for (comb_cc_lf_index_n44_340 = 0; comb_cc_lf_index_n44_340 < 2; comb_cc_lf_index_n44_340 = comb_cc_lf_index_n44_340 + 1) {
      _preg_268435645 = Rotate(comb_dic_result44_335, (1 << comb_cc_lf_index_n44_340) * 147);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_dic_result44_335, &comb_dic_result44_335, &_preg_268435645);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&comb_dic_result44_335._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&comb_dic_result44_335._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_dic_result44_335._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435645._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_dic_result44_335._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_dic_result44_335._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435645._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435645._c1_poly);
      Free_poly_data(&_preg_268435645._c0_poly);
    }
    for (comb_cc_index_n44_341 = 0; comb_cc_index_n44_341 < 32; comb_cc_index_n44_341 = comb_cc_index_n44_341 + 1) {
      _preg_268435646 = Rotate(comb_dic_result44_335, comb_cc_index_n44_341 * 588);
      Copy_ciph(&_ckks_gen_tmp_5954_438, &_preg_268435646);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_417_892, &_ckks_gen_tmp_5954_438);
      Rescale(&_pgen_tmp_417_892._c0_poly, &_ckks_gen_tmp_5954_438._c0_poly);
      Rescale(&_pgen_tmp_417_892._c1_poly, &_ckks_gen_tmp_5954_438._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg_ofst(&_pgen_tmp_418_893, 82/* cst_269 */, (comb_cc_index_n44_341) * (25088), 25088, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_419_894, &_pgen_tmp_417_892, &_pgen_tmp_418_893);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&ss_result44_339, &ss_result44_339, &_pgen_tmp_419_894);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&ss_result44_339._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_419_894._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_417_892._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_418_893._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_419_894._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_417_892._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_418_893._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&ss_result44_339._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&ss_result44_339._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_419_894._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&ss_result44_339._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&ss_result44_339._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_419_894._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435646._c1_poly);
      Free_poly_data(&_preg_268435646._c0_poly);
    }
    Copy_ciph(&VS_out_conv_halo16_322[siv_n16_333], &ss_result44_339);
  }
  Free_ciph_poly(VS_out_conv16_321, 4);
  Free_poly_data(&_pgen_tmp_415_890._poly);
  Free_poly_data(&_ckks_gen_tmp_5897_437._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_5897_437._c0_poly);
  Free_poly_data(&_pgen_tmp_416_891._c1_poly);
  Free_poly_data(&_pgen_tmp_416_891._c0_poly);
  Free_poly_data(&comb_dic_result44_335._c1_poly);
  Free_poly_data(&comb_dic_result44_335._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_5954_438._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_5954_438._c0_poly);
  Free_poly_data(&_pgen_tmp_418_893._poly);
  Free_poly_data(&_pgen_tmp_417_892._c1_poly);
  Free_poly_data(&_pgen_tmp_417_892._c0_poly);
  Free_poly_data(&_pgen_tmp_419_894._c1_poly);
  Free_poly_data(&_pgen_tmp_419_894._c0_poly);
  Free_poly_data(&ss_result44_339._c1_poly);
  Free_poly_data(&ss_result44_339._c0_poly);
  for (rescale_iv_469 = 0; rescale_iv_469 < 4; rescale_iv_469 = rescale_iv_469 + 1) {
    _pgen_tmp_420_895 = VS_out_conv_halo16_322[rescale_iv_469];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_421_896, &_pgen_tmp_420_895);
    Rescale(&_pgen_tmp_421_896._c0_poly, &_pgen_tmp_420_895._c0_poly);
    Rescale(&_pgen_tmp_421_896._c1_poly, &_pgen_tmp_420_895._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv_halo16_322[rescale_iv_469], &_pgen_tmp_421_896);
  }
  Free_poly_data(&_pgen_tmp_421_896._c1_poly);
  Free_poly_data(&_pgen_tmp_421_896._c0_poly);
  for (reshard1_n16_342 = 0; reshard1_n16_342 < 1; reshard1_n16_342 = reshard1_n16_342 + 1) {
    _pgen_tmp_422_897 = VS_out_conv_halo16_322[reshard1_n16_342];
    _pgen_tmp_423_898 = VS_out_conv_halo16_322[(reshard1_n16_342 + 1)];
    _preg_268435647 = Rotate(_pgen_tmp_423_898, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_424_899, &_pgen_tmp_422_897, &_preg_268435647);
    CMPLR_TM_END(12, 0);
    _pgen_tmp_426_901 = VS_out_conv_halo16_322[(reshard1_n16_342 + 2)];
    _pgen_tmp_427_902 = VS_out_conv_halo16_322[(reshard1_n16_342 + 3)];
    _preg_268435648 = Rotate(_pgen_tmp_427_902, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_425_900, &_pgen_tmp_426_901, &_preg_268435648);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&_pgen_tmp_425_900._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_425_900._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_426_901._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435648._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_425_900._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_426_901._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435648._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    _preg_268435649 = Rotate(_pgen_tmp_425_900, -12544);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&output_reshard16_343, &_pgen_tmp_424_899, &_preg_268435649);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&output_reshard16_343._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_424_899._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_422_897._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435647._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_424_899._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_422_897._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435647._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&output_reshard16_343._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_424_899._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435649._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&output_reshard16_343._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_424_899._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435649._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435647._c1_poly);
    Free_poly_data(&_preg_268435647._c0_poly);
    Free_poly_data(&_preg_268435648._c1_poly);
    Free_poly_data(&_preg_268435648._c0_poly);
    Free_poly_data(&_preg_268435649._c1_poly);
    Free_poly_data(&_preg_268435649._c0_poly);
  }
  Free_ciph_poly(VS_out_conv_halo16_322, 4);
  Free_poly_data(&_pgen_tmp_425_900._c1_poly);
  Free_poly_data(&_pgen_tmp_425_900._c0_poly);
  Free_poly_data(&_pgen_tmp_424_899._c1_poly);
  Free_poly_data(&_pgen_tmp_424_899._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 74
  // Conv_37
  // pragma: 65536, 1027, 75
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv17_344, 0, sizeof(VS_out_conv17_344));
  memset(&VS_out_conv_halo17_345, 0, sizeof(VS_out_conv_halo17_345));
  for (mesh_y_n17_346 = 0; mesh_y_n17_346 < 2; mesh_y_n17_346 = mesh_y_n17_346 + 1) {
    for (mesh_z_n17_347 = 0; mesh_z_n17_347 < 1; mesh_z_n17_347 = mesh_z_n17_347 + 1) {
      Copy_ciph(&_preg_268435513, &VS_out_relu15_318[((mesh_y_n17_346 * 1) + mesh_z_n17_347)]);
      Copy_ciph(&input_dup_n44_348, &_preg_268435513);
      for (bs_input_n44_349 = 0; bs_input_n44_349 < 9; bs_input_n44_349 = bs_input_n44_349 + 1) {
        _preg_268435650 = Rotate(input_dup_n44_348, _cst_274[bs_input_n44_349]);
        Copy_ciph(&input_block_n44_350[bs_input_n44_349], &_preg_268435650);
        Free_poly_data(&_preg_268435650._c1_poly);
        Free_poly_data(&_preg_268435650._c0_poly);
      }
      for (mesh_x_n17_351 = 0; mesh_x_n17_351 < 4; mesh_x_n17_351 = mesh_x_n17_351 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=9
        Zero_ciph(&result_n45_352);
        for (num_grid_n45_353 = 0; num_grid_n45_353 < 128; num_grid_n45_353 = num_grid_n45_353 + 1) {
          Zero_ciph(&result_grid_n45_354);
          for (cap_block_n45_355 = 0; cap_block_n45_355 < 9; cap_block_n45_355 = cap_block_n45_355 + 1) {
            _ckks_gen_tmp_6118_439 = input_block_n44_350[cap_block_n45_355];
            Pt_from_msg_ofst(&_pgen_tmp_428_903, 83/* cst_270 */, (((((mesh_x_n17_351 * 2) + mesh_y_n17_346) * 1152) + (cap_block_n45_355 + (num_grid_n45_353 * 9)))) * (25088), 25088, 1, 5);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_429_904, &_ckks_gen_tmp_6118_439, &_pgen_tmp_428_903);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n45_354, &result_grid_n45_354, &_pgen_tmp_429_904);
            _pgen_modulus_472 = Q_modulus();
            _pgen_num_q_473 = Poly_level(&result_grid_n45_354._c0_poly);
            for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_429_904._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_6118_439._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_428_903._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_429_904._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_6118_439._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_428_903._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n45_354._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n45_354._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_429_904._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              Hw_modadd(Coeffs(&result_grid_n45_354._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n45_354._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_429_904._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
              _pgen_modulus_472 = _pgen_modulus_472 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_431_906, &result_grid_n45_354);
          Rescale(&_pgen_tmp_431_906._c0_poly, &result_grid_n45_354._c0_poly);
          Rescale(&_pgen_tmp_431_906._c1_poly, &result_grid_n45_354._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_432_907, 84/* cst_275 */, (num_grid_n45_353) * (25088), 25088, 1, 4);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_430_905, &_pgen_tmp_431_906, &_pgen_tmp_432_907);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_430_905._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_430_905._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_431_906._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_432_907._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_430_905._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_431_906._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_432_907._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435651 = Rotate(_pgen_tmp_430_905, -25088 + (num_grid_n45_353 * 196));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_434_909, &result_grid_n45_354);
          Rescale(&_pgen_tmp_434_909._c0_poly, &result_grid_n45_354._c0_poly);
          Rescale(&_pgen_tmp_434_909._c1_poly, &result_grid_n45_354._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_435_910, 85/* cst_276 */, (num_grid_n45_353) * (25088), 25088, 1, 4);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_433_908, &_pgen_tmp_434_909, &_pgen_tmp_435_910);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&_pgen_tmp_433_908._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_433_908._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_434_909._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_435_910._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_433_908._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_434_909._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_435_910._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435652 = Rotate(_pgen_tmp_433_908, num_grid_n45_353 * 196);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_436_911, &_preg_268435651, &_preg_268435652);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n45_352, &result_n45_352, &_pgen_tmp_436_911);
          _pgen_modulus_472 = Q_modulus();
          _pgen_num_q_473 = Poly_level(&result_n45_352._c0_poly);
          for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_436_911._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435651._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435652._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_436_911._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435651._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435652._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n45_352._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n45_352._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_436_911._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            Hw_modadd(Coeffs(&result_n45_352._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n45_352._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_436_911._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
            _pgen_modulus_472 = _pgen_modulus_472 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435651._c1_poly);
          Free_poly_data(&_preg_268435651._c0_poly);
          Free_poly_data(&_preg_268435652._c1_poly);
          Free_poly_data(&_preg_268435652._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_437_912, 86 /* cst_273 */, 25088, 2, 4);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n45_352, &result_n45_352, &_pgen_tmp_437_912);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&result_n45_352._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&result_n45_352._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n45_352._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_437_912._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Set_coeffs(&result_n45_352._c1_poly, _pgen_rns_idx_474, degree, Coeffs(&result_n45_352._c1_poly, _pgen_rns_idx_474, degree));
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_439_914 = VS_out_conv17_344[((mesh_x_n17_351 * 1) + mesh_z_n17_347)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_438_913, &_pgen_tmp_439_914, &result_n45_352);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&_pgen_tmp_438_913._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_438_913._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_439_914._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n45_352._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_438_913._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_439_914._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n45_352._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv17_344[((mesh_x_n17_351 * 1) + mesh_z_n17_347)], &_pgen_tmp_438_913);
      }
    }
  }
  Free_ciph_poly(VS_out_relu15_318, 2);
  Free_poly_data(&_preg_268435513._c1_poly);
  Free_poly_data(&_preg_268435513._c0_poly);
  Free_poly_data(&input_dup_n44_348._c1_poly);
  Free_poly_data(&input_dup_n44_348._c0_poly);
  Free_ciph_poly(input_block_n44_350, 9);
  Free_poly_data(&_pgen_tmp_428_903._poly);
  Free_poly_data(&_pgen_tmp_429_904._c1_poly);
  Free_poly_data(&_pgen_tmp_429_904._c0_poly);
  Free_poly_data(&_pgen_tmp_432_907._poly);
  Free_poly_data(&_pgen_tmp_431_906._c1_poly);
  Free_poly_data(&_pgen_tmp_431_906._c0_poly);
  Free_poly_data(&_pgen_tmp_430_905._c1_poly);
  Free_poly_data(&_pgen_tmp_430_905._c0_poly);
  Free_poly_data(&result_grid_n45_354._c1_poly);
  Free_poly_data(&result_grid_n45_354._c0_poly);
  Free_poly_data(&_pgen_tmp_435_910._poly);
  Free_poly_data(&_pgen_tmp_434_909._c1_poly);
  Free_poly_data(&_pgen_tmp_434_909._c0_poly);
  Free_poly_data(&_pgen_tmp_433_908._c1_poly);
  Free_poly_data(&_pgen_tmp_433_908._c0_poly);
  Free_poly_data(&_pgen_tmp_436_911._c1_poly);
  Free_poly_data(&_pgen_tmp_436_911._c0_poly);
  Free_poly_data(&_pgen_tmp_437_912._poly);
  Free_poly_data(&result_n45_352._c1_poly);
  Free_poly_data(&result_n45_352._c0_poly);
  Free_poly_data(&_pgen_tmp_438_913._c1_poly);
  Free_poly_data(&_pgen_tmp_438_913._c0_poly);
  for (rescale_iv_470 = 0; rescale_iv_470 < 4; rescale_iv_470 = rescale_iv_470 + 1) {
    _pgen_tmp_440_915 = VS_out_conv17_344[rescale_iv_470];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_441_916, &_pgen_tmp_440_915);
    Rescale(&_pgen_tmp_441_916._c0_poly, &_pgen_tmp_440_915._c0_poly);
    Rescale(&_pgen_tmp_441_916._c1_poly, &_pgen_tmp_440_915._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv17_344[rescale_iv_470], &_pgen_tmp_441_916);
  }
  Free_poly_data(&_pgen_tmp_441_916._c1_poly);
  Free_poly_data(&_pgen_tmp_441_916._c0_poly);
  for (siv_n17_356 = 0; siv_n17_356 < 4; siv_n17_356 = siv_n17_356 + 1) {
    orig_result45_357 = VS_out_conv17_344[siv_n17_356];
    Zero_ciph(&comb_dic_result46_358);
    for (comb_dic_index_n46_359 = 0; comb_dic_index_n46_359 < 1; comb_dic_index_n46_359 = comb_dic_index_n46_359 + 1) {
      _preg_268435653 = Rotate(orig_result45_357, 1 << comb_dic_index_n46_359);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&orig_result45_357, &orig_result45_357, &_preg_268435653);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&orig_result45_357._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&orig_result45_357._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&orig_result45_357._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435653._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&orig_result45_357._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&orig_result45_357._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435653._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435653._c1_poly);
      Free_poly_data(&_preg_268435653._c0_poly);
    }
    for (comb_dic_index_out_n46_360 = 0; comb_dic_index_out_n46_360 < 7; comb_dic_index_out_n46_360 = comb_dic_index_out_n46_360 + 1) {
      for (comb_dic_index_in_n46_361 = 0; comb_dic_index_in_n46_361 < 4; comb_dic_index_in_n46_361 = comb_dic_index_in_n46_361 + 1) {
        _preg_268435654 = Rotate(orig_result45_357, (comb_dic_index_out_n46_360 * 21) + (comb_dic_index_in_n46_361 * 2));
        Copy_ciph(&_ckks_gen_tmp_6279_440, &_preg_268435654);
        Pt_from_msg_ofst(&_pgen_tmp_442_917, 87/* cst_277 */, (((comb_dic_index_out_n46_360 * 4) + comb_dic_index_in_n46_361)) * (25088), 25088, 1, 3);
        CMPLR_TM_START(17, 0);
        Init_ciph_up_scale_plain(&_pgen_tmp_443_918, &_ckks_gen_tmp_6279_440, &_pgen_tmp_442_917);
        CMPLR_TM_END(17, 0);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_dic_result46_358, &comb_dic_result46_358, &_pgen_tmp_443_918);
        _pgen_modulus_472 = Q_modulus();
        _pgen_num_q_473 = Poly_level(&comb_dic_result46_358._c0_poly);
        for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
          Hw_modmul(Coeffs(&_pgen_tmp_443_918._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_6279_440._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_442_917._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modmul(Coeffs(&_pgen_tmp_443_918._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_6279_440._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_442_917._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&comb_dic_result46_358._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_dic_result46_358._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_443_918._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          Hw_modadd(Coeffs(&comb_dic_result46_358._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_dic_result46_358._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_443_918._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
          _pgen_modulus_472 = _pgen_modulus_472 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435654._c1_poly);
        Free_poly_data(&_preg_268435654._c0_poly);
      }
    }
    Zero_ciph(&ss_result46_362);
    for (comb_cc_lf_index_n46_363 = 0; comb_cc_lf_index_n46_363 < 2; comb_cc_lf_index_n46_363 = comb_cc_lf_index_n46_363 + 1) {
      _preg_268435655 = Rotate(comb_dic_result46_358, (1 << comb_cc_lf_index_n46_363) * 147);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_dic_result46_358, &comb_dic_result46_358, &_preg_268435655);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&comb_dic_result46_358._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modadd(Coeffs(&comb_dic_result46_358._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_dic_result46_358._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435655._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&comb_dic_result46_358._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&comb_dic_result46_358._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435655._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435655._c1_poly);
      Free_poly_data(&_preg_268435655._c0_poly);
    }
    for (comb_cc_index_n46_364 = 0; comb_cc_index_n46_364 < 32; comb_cc_index_n46_364 = comb_cc_index_n46_364 + 1) {
      _preg_268435656 = Rotate(comb_dic_result46_358, comb_cc_index_n46_364 * 588);
      Copy_ciph(&_ckks_gen_tmp_6336_441, &_preg_268435656);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_444_919, &_ckks_gen_tmp_6336_441);
      Rescale(&_pgen_tmp_444_919._c0_poly, &_ckks_gen_tmp_6336_441._c0_poly);
      Rescale(&_pgen_tmp_444_919._c1_poly, &_ckks_gen_tmp_6336_441._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg_ofst(&_pgen_tmp_445_920, 88/* cst_278 */, (comb_cc_index_n46_364) * (25088), 25088, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_446_921, &_pgen_tmp_444_919, &_pgen_tmp_445_920);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&ss_result46_362, &ss_result46_362, &_pgen_tmp_446_921);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&ss_result46_362._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_446_921._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_444_919._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_445_920._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_446_921._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_444_919._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_445_920._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&ss_result46_362._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&ss_result46_362._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_446_921._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&ss_result46_362._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&ss_result46_362._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_446_921._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435656._c1_poly);
      Free_poly_data(&_preg_268435656._c0_poly);
    }
    Copy_ciph(&VS_out_conv_halo17_345[siv_n17_356], &ss_result46_362);
  }
  Free_ciph_poly(VS_out_conv17_344, 4);
  Free_poly_data(&_pgen_tmp_442_917._poly);
  Free_poly_data(&_ckks_gen_tmp_6279_440._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_6279_440._c0_poly);
  Free_poly_data(&_pgen_tmp_443_918._c1_poly);
  Free_poly_data(&_pgen_tmp_443_918._c0_poly);
  Free_poly_data(&comb_dic_result46_358._c1_poly);
  Free_poly_data(&comb_dic_result46_358._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_6336_441._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_6336_441._c0_poly);
  Free_poly_data(&_pgen_tmp_445_920._poly);
  Free_poly_data(&_pgen_tmp_444_919._c1_poly);
  Free_poly_data(&_pgen_tmp_444_919._c0_poly);
  Free_poly_data(&_pgen_tmp_446_921._c1_poly);
  Free_poly_data(&_pgen_tmp_446_921._c0_poly);
  Free_poly_data(&ss_result46_362._c1_poly);
  Free_poly_data(&ss_result46_362._c0_poly);
  for (rescale_iv_471 = 0; rescale_iv_471 < 4; rescale_iv_471 = rescale_iv_471 + 1) {
    _pgen_tmp_447_922 = VS_out_conv_halo17_345[rescale_iv_471];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_448_923, &_pgen_tmp_447_922);
    Rescale(&_pgen_tmp_448_923._c0_poly, &_pgen_tmp_447_922._c0_poly);
    Rescale(&_pgen_tmp_448_923._c1_poly, &_pgen_tmp_447_922._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv_halo17_345[rescale_iv_471], &_pgen_tmp_448_923);
  }
  Free_poly_data(&_pgen_tmp_448_923._c1_poly);
  Free_poly_data(&_pgen_tmp_448_923._c0_poly);
  for (reshard1_n17_365 = 0; reshard1_n17_365 < 1; reshard1_n17_365 = reshard1_n17_365 + 1) {
    _pgen_tmp_449_924 = VS_out_conv_halo17_345[reshard1_n17_365];
    _pgen_tmp_450_925 = VS_out_conv_halo17_345[(reshard1_n17_365 + 1)];
    _preg_268435657 = Rotate(_pgen_tmp_450_925, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_451_926, &_pgen_tmp_449_924, &_preg_268435657);
    CMPLR_TM_END(12, 0);
    _pgen_tmp_453_928 = VS_out_conv_halo17_345[(reshard1_n17_365 + 2)];
    _pgen_tmp_454_929 = VS_out_conv_halo17_345[(reshard1_n17_365 + 3)];
    _preg_268435658 = Rotate(_pgen_tmp_454_929, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_452_927, &_pgen_tmp_453_928, &_preg_268435658);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&_pgen_tmp_452_927._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_452_927._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_453_928._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435658._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_452_927._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_453_928._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435658._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    _preg_268435659 = Rotate(_pgen_tmp_452_927, -12544);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&output_reshard17_366, &_pgen_tmp_451_926, &_preg_268435659);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&output_reshard17_366._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_451_926._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_449_924._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435657._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_451_926._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_449_924._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435657._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&output_reshard17_366._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_451_926._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435659._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&output_reshard17_366._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_451_926._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435659._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435657._c1_poly);
    Free_poly_data(&_preg_268435657._c0_poly);
    Free_poly_data(&_preg_268435658._c1_poly);
    Free_poly_data(&_preg_268435658._c0_poly);
    Free_poly_data(&_preg_268435659._c1_poly);
    Free_poly_data(&_preg_268435659._c0_poly);
  }
  Free_ciph_poly(VS_out_conv_halo17_345, 4);
  Free_poly_data(&_pgen_tmp_452_927._c1_poly);
  Free_poly_data(&_pgen_tmp_452_927._c0_poly);
  Free_poly_data(&_pgen_tmp_451_926._c1_poly);
  Free_poly_data(&_pgen_tmp_451_926._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 75
  // Relu_38
  // pragma: 65536, 1033, 76
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435514, &output_reshard17_366, 15);
  Free_poly_data(&output_reshard17_366._c1_poly);
  Free_poly_data(&output_reshard17_366._c0_poly);
  Encode_float(&_pgen_tmp_456_931, &_cst_363, 1, 1, Level(&_preg_268435514));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_455_930, &_preg_268435514, &_pgen_tmp_456_931);
  _pgen_modulus_472 = Q_modulus();
  _pgen_num_q_473 = Poly_level(&_pgen_tmp_455_930._c0_poly);
  for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_455_930._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435514._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_456_931._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_455_930._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435514._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_456_931._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    _pgen_modulus_472 = _pgen_modulus_472 + 1;
  }
  Free_poly_data(&_pgen_tmp_456_931._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435516, &_pgen_tmp_455_930);
  Rescale(&_preg_268435516._c0_poly, &_pgen_tmp_455_930._c0_poly);
  Rescale(&_preg_268435516._c1_poly, &_pgen_tmp_455_930._c1_poly);
  Free_poly_data(&_pgen_tmp_455_930._c1_poly);
  Free_poly_data(&_pgen_tmp_455_930._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435515 = App_relu(_preg_268435514, _preg_268435516, 25088);
  Free_poly_data(&_preg_268435516._c1_poly);
  Free_poly_data(&_preg_268435516._c0_poly);
  Free_poly_data(&_preg_268435514._c1_poly);
  Free_poly_data(&_preg_268435514._c0_poly);
  Copy_ciph(&_preg_268435517, &_preg_268435515);
  Free_poly_data(&_preg_268435515._c1_poly);
  Free_poly_data(&_preg_268435515._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 76
  // Conv_39
  // pragma: 65536, 1027, 77
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435518, &_preg_268435517);
  Free_poly_data(&_preg_268435517._c1_poly);
  Free_poly_data(&_preg_268435517._c0_poly);
  // BlockingRot replicate=1
  Copy_ciph(&input_dup_n46_367, &_preg_268435518);
  Free_poly_data(&_preg_268435518._c1_poly);
  Free_poly_data(&_preg_268435518._c0_poly);
  // BlockingRot HRot=bs=9
  for (bs_input_n46_368 = 0; bs_input_n46_368 < 9; bs_input_n46_368 = bs_input_n46_368 + 1) {
    _preg_268435660 = Rotate(input_dup_n46_367, _cst_282[bs_input_n46_368]);
    Copy_ciph(&input_block_n46_369[bs_input_n46_368], &_preg_268435660);
    Free_poly_data(&_preg_268435660._c1_poly);
    Free_poly_data(&_preg_268435660._c0_poly);
  }
  Free_poly_data(&input_dup_n46_367._c1_poly);
  Free_poly_data(&input_dup_n46_367._c0_poly);
  Zero_ciph(&result_n47_370);
  for (num_grid_n47_371 = 0; num_grid_n47_371 < 512; num_grid_n47_371 = num_grid_n47_371 + 1) {
    Zero_ciph(&result_grid_n47_372);
    for (cap_block_n47_373 = 0; cap_block_n47_373 < 9; cap_block_n47_373 = cap_block_n47_373 + 1) {
      _ckks_gen_tmp_6481_442 = input_block_n46_369[cap_block_n47_373];
      Pt_from_msg_ofst(&_pgen_tmp_457_932, 89/* cst_280 */, ((cap_block_n47_373 + (num_grid_n47_371 * 9))) * (25088), 25088, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_458_933, &_ckks_gen_tmp_6481_442, &_pgen_tmp_457_932);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n47_372, &result_grid_n47_372, &_pgen_tmp_458_933);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&result_grid_n47_372._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_458_933._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_6481_442._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_457_932._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_458_933._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_6481_442._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_457_932._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&result_grid_n47_372._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n47_372._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_458_933._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&result_grid_n47_372._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n47_372._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_458_933._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_460_935, &result_grid_n47_372);
    Rescale(&_pgen_tmp_460_935._c0_poly, &result_grid_n47_372._c0_poly);
    Rescale(&_pgen_tmp_460_935._c1_poly, &result_grid_n47_372._c1_poly);
    CMPLR_TM_END(19, 0);
    Pt_from_msg_ofst(&_pgen_tmp_461_936, 90/* cst_283 */, (num_grid_n47_371) * (25088), 25088, 1, 2);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_459_934, &_pgen_tmp_460_935, &_pgen_tmp_461_936);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&_pgen_tmp_459_934._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_459_934._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_460_935._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_461_936._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_459_934._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_460_935._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_461_936._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(17, 0);
    _preg_268435661 = Rotate(_pgen_tmp_459_934, -25088 + (num_grid_n47_371 * 49));
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_463_938, &result_grid_n47_372);
    Rescale(&_pgen_tmp_463_938._c0_poly, &result_grid_n47_372._c0_poly);
    Rescale(&_pgen_tmp_463_938._c1_poly, &result_grid_n47_372._c1_poly);
    CMPLR_TM_END(19, 0);
    Pt_from_msg_ofst(&_pgen_tmp_464_939, 91/* cst_284 */, (num_grid_n47_371) * (25088), 25088, 1, 2);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_462_937, &_pgen_tmp_463_938, &_pgen_tmp_464_939);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&_pgen_tmp_462_937._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_462_937._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_463_938._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_464_939._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_462_937._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_463_938._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_464_939._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(17, 0);
    _preg_268435662 = Rotate(_pgen_tmp_462_937, num_grid_n47_371 * 49);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_465_940, &_preg_268435661, &_preg_268435662);
    CMPLR_TM_END(12, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n47_370, &result_n47_370, &_pgen_tmp_465_940);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&result_n47_370._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_465_940._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435661._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435662._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_465_940._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435661._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435662._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&result_n47_370._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n47_370._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_465_940._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&result_n47_370._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n47_370._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_465_940._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435661._c1_poly);
    Free_poly_data(&_preg_268435661._c0_poly);
    Free_poly_data(&_preg_268435662._c1_poly);
    Free_poly_data(&_preg_268435662._c0_poly);
  }
  Free_ciph_poly(input_block_n46_369, 9);
  Free_poly_data(&_pgen_tmp_457_932._poly);
  Free_poly_data(&_pgen_tmp_458_933._c1_poly);
  Free_poly_data(&_pgen_tmp_458_933._c0_poly);
  Free_poly_data(&_pgen_tmp_461_936._poly);
  Free_poly_data(&_pgen_tmp_460_935._c1_poly);
  Free_poly_data(&_pgen_tmp_460_935._c0_poly);
  Free_poly_data(&_pgen_tmp_459_934._c1_poly);
  Free_poly_data(&_pgen_tmp_459_934._c0_poly);
  Free_poly_data(&result_grid_n47_372._c1_poly);
  Free_poly_data(&result_grid_n47_372._c0_poly);
  Free_poly_data(&_pgen_tmp_464_939._poly);
  Free_poly_data(&_pgen_tmp_463_938._c1_poly);
  Free_poly_data(&_pgen_tmp_463_938._c0_poly);
  Free_poly_data(&_pgen_tmp_462_937._c1_poly);
  Free_poly_data(&_pgen_tmp_462_937._c0_poly);
  Free_poly_data(&_pgen_tmp_465_940._c1_poly);
  Free_poly_data(&_pgen_tmp_465_940._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n47_370, &result_n47_370);
  Rescale(&result_n47_370._c0_poly, &result_n47_370._c0_poly);
  Rescale(&result_n47_370._c1_poly, &result_n47_370._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_466_941, 92 /* cst_281 */, 25088, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n47_370, &result_n47_370, &_pgen_tmp_466_941);
  _pgen_modulus_472 = Q_modulus();
  _pgen_num_q_473 = Poly_level(&result_n47_370._c0_poly);
  for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
    Hw_modadd(Coeffs(&result_n47_370._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n47_370._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_466_941._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Set_coeffs(&result_n47_370._c1_poly, _pgen_rns_idx_474, degree, Coeffs(&result_n47_370._c1_poly, _pgen_rns_idx_474, degree));
    _pgen_modulus_472 = _pgen_modulus_472 + 1;
  }
  Free_poly_data(&_pgen_tmp_466_941._poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435519, &result_n47_370);
  Free_poly_data(&result_n47_370._c1_poly);
  Free_poly_data(&result_n47_370._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 77
  // Add_40
  // pragma: 65536, 1025, 78
  CMPLR_TM_START(2, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435520, &_preg_268435519, &output_reshard16_343);
  _pgen_modulus_472 = Q_modulus();
  _pgen_num_q_473 = Poly_level(&_preg_268435520._c0_poly);
  for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
    Hw_modadd(Coeffs(&_preg_268435520._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435519._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&output_reshard16_343._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_preg_268435520._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435519._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&output_reshard16_343._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    _pgen_modulus_472 = _pgen_modulus_472 + 1;
  }
  Free_poly_data(&output_reshard16_343._c1_poly);
  Free_poly_data(&output_reshard16_343._c0_poly);
  Free_poly_data(&_preg_268435519._c1_poly);
  Free_poly_data(&_preg_268435519._c0_poly);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_END(2, 0);
  // pragma: 65537, 1025, 78
  // Relu_41
  // pragma: 65536, 1033, 79
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435521, &_preg_268435520, 15);
  Free_poly_data(&_preg_268435520._c1_poly);
  Free_poly_data(&_preg_268435520._c0_poly);
  Encode_float(&_pgen_tmp_468_943, &_cst_364, 1, 1, Level(&_preg_268435521));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_467_942, &_preg_268435521, &_pgen_tmp_468_943);
  _pgen_modulus_472 = Q_modulus();
  _pgen_num_q_473 = Poly_level(&_pgen_tmp_467_942._c0_poly);
  for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_467_942._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435521._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_468_943._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_467_942._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435521._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_468_943._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    _pgen_modulus_472 = _pgen_modulus_472 + 1;
  }
  Free_poly_data(&_pgen_tmp_468_943._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435523, &_pgen_tmp_467_942);
  Rescale(&_preg_268435523._c0_poly, &_pgen_tmp_467_942._c0_poly);
  Rescale(&_preg_268435523._c1_poly, &_pgen_tmp_467_942._c1_poly);
  Free_poly_data(&_pgen_tmp_467_942._c1_poly);
  Free_poly_data(&_pgen_tmp_467_942._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435522 = App_relu(_preg_268435521, _preg_268435523, 25088);
  Free_poly_data(&_preg_268435523._c1_poly);
  Free_poly_data(&_preg_268435523._c0_poly);
  Free_poly_data(&_preg_268435521._c1_poly);
  Free_poly_data(&_preg_268435521._c0_poly);
  Copy_ciph(&_preg_268435524, &_preg_268435522);
  Free_poly_data(&_preg_268435522._c1_poly);
  Free_poly_data(&_preg_268435522._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 79
  // Conv_42
  // pragma: 65536, 1027, 80
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435525, &_preg_268435524);
  // BlockingRot replicate=1
  Copy_ciph(&input_dup_n47_374, &_preg_268435525);
  Free_poly_data(&_preg_268435525._c1_poly);
  Free_poly_data(&_preg_268435525._c0_poly);
  // BlockingRot HRot=bs=9
  for (bs_input_n47_375 = 0; bs_input_n47_375 < 9; bs_input_n47_375 = bs_input_n47_375 + 1) {
    _preg_268435663 = Rotate(input_dup_n47_374, _cst_288[bs_input_n47_375]);
    Copy_ciph(&input_block_n47_376[bs_input_n47_375], &_preg_268435663);
    Free_poly_data(&_preg_268435663._c1_poly);
    Free_poly_data(&_preg_268435663._c0_poly);
  }
  Free_poly_data(&input_dup_n47_374._c1_poly);
  Free_poly_data(&input_dup_n47_374._c0_poly);
  Zero_ciph(&result_n48_377);
  for (num_grid_n48_378 = 0; num_grid_n48_378 < 512; num_grid_n48_378 = num_grid_n48_378 + 1) {
    Zero_ciph(&result_grid_n48_379);
    for (cap_block_n48_380 = 0; cap_block_n48_380 < 9; cap_block_n48_380 = cap_block_n48_380 + 1) {
      _ckks_gen_tmp_6649_443 = input_block_n47_376[cap_block_n48_380];
      Pt_from_msg_ofst(&_pgen_tmp_469_944, 93/* cst_286 */, ((cap_block_n48_380 + (num_grid_n48_378 * 9))) * (25088), 25088, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_470_945, &_ckks_gen_tmp_6649_443, &_pgen_tmp_469_944);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n48_379, &result_grid_n48_379, &_pgen_tmp_470_945);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&result_grid_n48_379._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_470_945._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_6649_443._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_469_944._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_470_945._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_6649_443._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_469_944._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&result_grid_n48_379._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n48_379._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_470_945._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&result_grid_n48_379._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n48_379._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_470_945._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_472_947, &result_grid_n48_379);
    Rescale(&_pgen_tmp_472_947._c0_poly, &result_grid_n48_379._c0_poly);
    Rescale(&_pgen_tmp_472_947._c1_poly, &result_grid_n48_379._c1_poly);
    CMPLR_TM_END(19, 0);
    Pt_from_msg_ofst(&_pgen_tmp_473_948, 94/* cst_289 */, (num_grid_n48_378) * (25088), 25088, 1, 2);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_471_946, &_pgen_tmp_472_947, &_pgen_tmp_473_948);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&_pgen_tmp_471_946._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_471_946._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_472_947._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_473_948._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_471_946._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_472_947._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_473_948._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(17, 0);
    _preg_268435664 = Rotate(_pgen_tmp_471_946, -25088 + (num_grid_n48_378 * 49));
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_475_950, &result_grid_n48_379);
    Rescale(&_pgen_tmp_475_950._c0_poly, &result_grid_n48_379._c0_poly);
    Rescale(&_pgen_tmp_475_950._c1_poly, &result_grid_n48_379._c1_poly);
    CMPLR_TM_END(19, 0);
    Pt_from_msg_ofst(&_pgen_tmp_476_951, 95/* cst_290 */, (num_grid_n48_378) * (25088), 25088, 1, 2);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_474_949, &_pgen_tmp_475_950, &_pgen_tmp_476_951);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&_pgen_tmp_474_949._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_474_949._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_475_950._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_476_951._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_474_949._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_475_950._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_476_951._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(17, 0);
    _preg_268435665 = Rotate(_pgen_tmp_474_949, num_grid_n48_378 * 49);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_477_952, &_preg_268435664, &_preg_268435665);
    CMPLR_TM_END(12, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n48_377, &result_n48_377, &_pgen_tmp_477_952);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&result_n48_377._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_477_952._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435664._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435665._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_477_952._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435664._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435665._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&result_n48_377._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n48_377._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_477_952._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&result_n48_377._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n48_377._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_477_952._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435664._c1_poly);
    Free_poly_data(&_preg_268435664._c0_poly);
    Free_poly_data(&_preg_268435665._c1_poly);
    Free_poly_data(&_preg_268435665._c0_poly);
  }
  Free_ciph_poly(input_block_n47_376, 9);
  Free_poly_data(&_pgen_tmp_469_944._poly);
  Free_poly_data(&_pgen_tmp_470_945._c1_poly);
  Free_poly_data(&_pgen_tmp_470_945._c0_poly);
  Free_poly_data(&_pgen_tmp_473_948._poly);
  Free_poly_data(&_pgen_tmp_472_947._c1_poly);
  Free_poly_data(&_pgen_tmp_472_947._c0_poly);
  Free_poly_data(&_pgen_tmp_471_946._c1_poly);
  Free_poly_data(&_pgen_tmp_471_946._c0_poly);
  Free_poly_data(&result_grid_n48_379._c1_poly);
  Free_poly_data(&result_grid_n48_379._c0_poly);
  Free_poly_data(&_pgen_tmp_476_951._poly);
  Free_poly_data(&_pgen_tmp_475_950._c1_poly);
  Free_poly_data(&_pgen_tmp_475_950._c0_poly);
  Free_poly_data(&_pgen_tmp_474_949._c1_poly);
  Free_poly_data(&_pgen_tmp_474_949._c0_poly);
  Free_poly_data(&_pgen_tmp_477_952._c1_poly);
  Free_poly_data(&_pgen_tmp_477_952._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n48_377, &result_n48_377);
  Rescale(&result_n48_377._c0_poly, &result_n48_377._c0_poly);
  Rescale(&result_n48_377._c1_poly, &result_n48_377._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_478_953, 96 /* cst_287 */, 25088, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n48_377, &result_n48_377, &_pgen_tmp_478_953);
  _pgen_modulus_472 = Q_modulus();
  _pgen_num_q_473 = Poly_level(&result_n48_377._c0_poly);
  for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
    Hw_modadd(Coeffs(&result_n48_377._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n48_377._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_478_953._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Set_coeffs(&result_n48_377._c1_poly, _pgen_rns_idx_474, degree, Coeffs(&result_n48_377._c1_poly, _pgen_rns_idx_474, degree));
    _pgen_modulus_472 = _pgen_modulus_472 + 1;
  }
  Free_poly_data(&_pgen_tmp_478_953._poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435526, &result_n48_377);
  Free_poly_data(&result_n48_377._c1_poly);
  Free_poly_data(&result_n48_377._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 80
  // Relu_43
  // pragma: 65536, 1033, 81
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435527, &_preg_268435526, 15);
  Free_poly_data(&_preg_268435526._c1_poly);
  Free_poly_data(&_preg_268435526._c0_poly);
  Encode_float(&_pgen_tmp_480_955, &_cst_365, 1, 1, Level(&_preg_268435527));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_479_954, &_preg_268435527, &_pgen_tmp_480_955);
  _pgen_modulus_472 = Q_modulus();
  _pgen_num_q_473 = Poly_level(&_pgen_tmp_479_954._c0_poly);
  for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_479_954._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435527._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_480_955._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_479_954._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435527._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_480_955._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    _pgen_modulus_472 = _pgen_modulus_472 + 1;
  }
  Free_poly_data(&_pgen_tmp_480_955._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435529, &_pgen_tmp_479_954);
  Rescale(&_preg_268435529._c0_poly, &_pgen_tmp_479_954._c0_poly);
  Rescale(&_preg_268435529._c1_poly, &_pgen_tmp_479_954._c1_poly);
  Free_poly_data(&_pgen_tmp_479_954._c1_poly);
  Free_poly_data(&_pgen_tmp_479_954._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435528 = App_relu(_preg_268435527, _preg_268435529, 25088);
  Free_poly_data(&_preg_268435529._c1_poly);
  Free_poly_data(&_preg_268435529._c0_poly);
  Free_poly_data(&_preg_268435527._c1_poly);
  Free_poly_data(&_preg_268435527._c0_poly);
  Copy_ciph(&_preg_268435530, &_preg_268435528);
  Free_poly_data(&_preg_268435528._c1_poly);
  Free_poly_data(&_preg_268435528._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 81
  // Conv_44
  // pragma: 65536, 1027, 82
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435531, &_preg_268435530);
  Free_poly_data(&_preg_268435530._c1_poly);
  Free_poly_data(&_preg_268435530._c0_poly);
  // BlockingRot replicate=1
  Copy_ciph(&input_dup_n48_381, &_preg_268435531);
  Free_poly_data(&_preg_268435531._c1_poly);
  Free_poly_data(&_preg_268435531._c0_poly);
  // BlockingRot HRot=bs=9
  for (bs_input_n48_382 = 0; bs_input_n48_382 < 9; bs_input_n48_382 = bs_input_n48_382 + 1) {
    _preg_268435666 = Rotate(input_dup_n48_381, _cst_294[bs_input_n48_382]);
    Copy_ciph(&input_block_n48_383[bs_input_n48_382], &_preg_268435666);
    Free_poly_data(&_preg_268435666._c1_poly);
    Free_poly_data(&_preg_268435666._c0_poly);
  }
  Free_poly_data(&input_dup_n48_381._c1_poly);
  Free_poly_data(&input_dup_n48_381._c0_poly);
  Zero_ciph(&result_n49_384);
  for (num_grid_n49_385 = 0; num_grid_n49_385 < 512; num_grid_n49_385 = num_grid_n49_385 + 1) {
    Zero_ciph(&result_grid_n49_386);
    for (cap_block_n49_387 = 0; cap_block_n49_387 < 9; cap_block_n49_387 = cap_block_n49_387 + 1) {
      _ckks_gen_tmp_6804_444 = input_block_n48_383[cap_block_n49_387];
      Pt_from_msg_ofst(&_pgen_tmp_481_956, 97/* cst_292 */, ((cap_block_n49_387 + (num_grid_n49_385 * 9))) * (25088), 25088, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_482_957, &_ckks_gen_tmp_6804_444, &_pgen_tmp_481_956);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n49_386, &result_grid_n49_386, &_pgen_tmp_482_957);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&result_grid_n49_386._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_482_957._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_6804_444._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_481_956._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_482_957._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_6804_444._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_481_956._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&result_grid_n49_386._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n49_386._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_482_957._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&result_grid_n49_386._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_grid_n49_386._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_482_957._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_484_959, &result_grid_n49_386);
    Rescale(&_pgen_tmp_484_959._c0_poly, &result_grid_n49_386._c0_poly);
    Rescale(&_pgen_tmp_484_959._c1_poly, &result_grid_n49_386._c1_poly);
    CMPLR_TM_END(19, 0);
    Pt_from_msg_ofst(&_pgen_tmp_485_960, 98/* cst_295 */, (num_grid_n49_385) * (25088), 25088, 1, 2);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_483_958, &_pgen_tmp_484_959, &_pgen_tmp_485_960);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&_pgen_tmp_483_958._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_483_958._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_484_959._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_485_960._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_483_958._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_484_959._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_485_960._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(17, 0);
    _preg_268435667 = Rotate(_pgen_tmp_483_958, -25088 + (num_grid_n49_385 * 49));
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_487_962, &result_grid_n49_386);
    Rescale(&_pgen_tmp_487_962._c0_poly, &result_grid_n49_386._c0_poly);
    Rescale(&_pgen_tmp_487_962._c1_poly, &result_grid_n49_386._c1_poly);
    CMPLR_TM_END(19, 0);
    Pt_from_msg_ofst(&_pgen_tmp_488_963, 99/* cst_296 */, (num_grid_n49_385) * (25088), 25088, 1, 2);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_486_961, &_pgen_tmp_487_962, &_pgen_tmp_488_963);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&_pgen_tmp_486_961._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_486_961._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_487_962._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_488_963._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_486_961._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_487_962._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_488_963._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(17, 0);
    _preg_268435668 = Rotate(_pgen_tmp_486_961, num_grid_n49_385 * 49);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_489_964, &_preg_268435667, &_preg_268435668);
    CMPLR_TM_END(12, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n49_384, &result_n49_384, &_pgen_tmp_489_964);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&result_n49_384._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_489_964._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435667._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435668._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_489_964._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435667._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435668._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&result_n49_384._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n49_384._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_489_964._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&result_n49_384._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n49_384._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_489_964._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435667._c1_poly);
    Free_poly_data(&_preg_268435667._c0_poly);
    Free_poly_data(&_preg_268435668._c1_poly);
    Free_poly_data(&_preg_268435668._c0_poly);
  }
  Free_ciph_poly(input_block_n48_383, 9);
  Free_poly_data(&_pgen_tmp_481_956._poly);
  Free_poly_data(&_pgen_tmp_482_957._c1_poly);
  Free_poly_data(&_pgen_tmp_482_957._c0_poly);
  Free_poly_data(&_pgen_tmp_485_960._poly);
  Free_poly_data(&_pgen_tmp_484_959._c1_poly);
  Free_poly_data(&_pgen_tmp_484_959._c0_poly);
  Free_poly_data(&_pgen_tmp_483_958._c1_poly);
  Free_poly_data(&_pgen_tmp_483_958._c0_poly);
  Free_poly_data(&result_grid_n49_386._c1_poly);
  Free_poly_data(&result_grid_n49_386._c0_poly);
  Free_poly_data(&_pgen_tmp_488_963._poly);
  Free_poly_data(&_pgen_tmp_487_962._c1_poly);
  Free_poly_data(&_pgen_tmp_487_962._c0_poly);
  Free_poly_data(&_pgen_tmp_486_961._c1_poly);
  Free_poly_data(&_pgen_tmp_486_961._c0_poly);
  Free_poly_data(&_pgen_tmp_489_964._c1_poly);
  Free_poly_data(&_pgen_tmp_489_964._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n49_384, &result_n49_384);
  Rescale(&result_n49_384._c0_poly, &result_n49_384._c0_poly);
  Rescale(&result_n49_384._c1_poly, &result_n49_384._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_490_965, 100 /* cst_293 */, 25088, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n49_384, &result_n49_384, &_pgen_tmp_490_965);
  _pgen_modulus_472 = Q_modulus();
  _pgen_num_q_473 = Poly_level(&result_n49_384._c0_poly);
  for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
    Hw_modadd(Coeffs(&result_n49_384._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&result_n49_384._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_490_965._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Set_coeffs(&result_n49_384._c1_poly, _pgen_rns_idx_474, degree, Coeffs(&result_n49_384._c1_poly, _pgen_rns_idx_474, degree));
    _pgen_modulus_472 = _pgen_modulus_472 + 1;
  }
  Free_poly_data(&_pgen_tmp_490_965._poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435532, &result_n49_384);
  Free_poly_data(&result_n49_384._c1_poly);
  Free_poly_data(&result_n49_384._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 82
  // Add_45
  // pragma: 65536, 1025, 83
  CMPLR_TM_START(2, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435533, &_preg_268435532, &_preg_268435524);
  _pgen_modulus_472 = Q_modulus();
  _pgen_num_q_473 = Poly_level(&_preg_268435533._c0_poly);
  for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
    Hw_modadd(Coeffs(&_preg_268435533._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435532._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435524._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_preg_268435533._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435532._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435524._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    _pgen_modulus_472 = _pgen_modulus_472 + 1;
  }
  Free_poly_data(&_preg_268435524._c1_poly);
  Free_poly_data(&_preg_268435524._c0_poly);
  Free_poly_data(&_preg_268435532._c1_poly);
  Free_poly_data(&_preg_268435532._c0_poly);
  CMPLR_TM_END(12, 0);
  CMPLR_TM_END(2, 0);
  // pragma: 65537, 1025, 83
  // Relu_46
  // pragma: 65536, 1033, 84
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435534, &_preg_268435533, 18);
  Free_poly_data(&_preg_268435533._c1_poly);
  Free_poly_data(&_preg_268435533._c0_poly);
  Encode_float(&_pgen_tmp_492_967, &_cst_366, 1, 1, Level(&_preg_268435534));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_491_966, &_preg_268435534, &_pgen_tmp_492_967);
  _pgen_modulus_472 = Q_modulus();
  _pgen_num_q_473 = Poly_level(&_pgen_tmp_491_966._c0_poly);
  for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_491_966._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435534._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_492_967._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_491_966._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435534._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_492_967._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    _pgen_modulus_472 = _pgen_modulus_472 + 1;
  }
  Free_poly_data(&_pgen_tmp_492_967._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435536, &_pgen_tmp_491_966);
  Rescale(&_preg_268435536._c0_poly, &_pgen_tmp_491_966._c0_poly);
  Rescale(&_preg_268435536._c1_poly, &_pgen_tmp_491_966._c1_poly);
  Free_poly_data(&_pgen_tmp_491_966._c1_poly);
  Free_poly_data(&_pgen_tmp_491_966._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435535 = App_relu(_preg_268435534, _preg_268435536, 25088);
  Free_poly_data(&_preg_268435536._c1_poly);
  Free_poly_data(&_preg_268435536._c0_poly);
  Free_poly_data(&_preg_268435534._c1_poly);
  Free_poly_data(&_preg_268435534._c0_poly);
  Copy_ciph(&_preg_268435537, &_preg_268435535);
  Free_poly_data(&_preg_268435535._c1_poly);
  Free_poly_data(&_preg_268435535._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 84
  // GlobalAveragePool_47
  // pragma: 65536, 1030, 85
  CMPLR_TM_START(8, 0);
  Copy_ciph(&_preg_268435538, &_preg_268435537);
  Free_poly_data(&_preg_268435537._c1_poly);
  Free_poly_data(&_preg_268435537._c0_poly);
  for (gap_sum_index_n49_388 = 0; gap_sum_index_n49_388 < 5; gap_sum_index_n49_388 = gap_sum_index_n49_388 + 1) {
    _preg_268435669 = Rotate(_preg_268435538, 1 << gap_sum_index_n49_388);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_preg_268435538, &_preg_268435538, &_preg_268435669);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&_preg_268435538._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&_preg_268435538._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435538._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435669._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&_preg_268435538._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435538._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435669._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435669._c1_poly);
    Free_poly_data(&_preg_268435669._c0_poly);
  }
  Encode_float(&_pgen_tmp_494_969, &_cst_297, 1, 1, Level(&_preg_268435538));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_493_968, &_preg_268435538, &_pgen_tmp_494_969);
  _pgen_modulus_472 = Q_modulus();
  _pgen_num_q_473 = Poly_level(&_pgen_tmp_493_968._c0_poly);
  for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_493_968._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435538._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_494_969._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_493_968._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435538._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_494_969._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    _pgen_modulus_472 = _pgen_modulus_472 + 1;
  }
  Free_poly_data(&_pgen_tmp_494_969._poly);
  Free_poly_data(&_preg_268435538._c1_poly);
  Free_poly_data(&_preg_268435538._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&gap_result49_389, &_pgen_tmp_493_968);
  Rescale(&gap_result49_389._c0_poly, &_pgen_tmp_493_968._c0_poly);
  Rescale(&gap_result49_389._c1_poly, &_pgen_tmp_493_968._c1_poly);
  Free_poly_data(&_pgen_tmp_493_968._c1_poly);
  Free_poly_data(&_pgen_tmp_493_968._c0_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&_preg_268435539, &gap_result49_389);
  Free_poly_data(&gap_result49_389._c1_poly);
  Free_poly_data(&gap_result49_389._c0_poly);
  Copy_ciph(&orig_result49_390, &_preg_268435539);
  Free_poly_data(&_preg_268435539._c1_poly);
  Free_poly_data(&_preg_268435539._c0_poly);
  Pt_from_msg(&_pgen_tmp_496_971, 101 /* cst_298 */, 25088, 1, 5);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_495_970, &orig_result49_390, &_pgen_tmp_496_971);
  _pgen_modulus_472 = Q_modulus();
  _pgen_num_q_473 = Poly_level(&_pgen_tmp_495_970._c0_poly);
  for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_495_970._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&orig_result49_390._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_496_971._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_495_970._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&orig_result49_390._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_496_971._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    _pgen_modulus_472 = _pgen_modulus_472 + 1;
  }
  Free_poly_data(&_pgen_tmp_496_971._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&orig_result49_390, &_pgen_tmp_495_970);
  Rescale(&orig_result49_390._c0_poly, &_pgen_tmp_495_970._c0_poly);
  Rescale(&orig_result49_390._c1_poly, &_pgen_tmp_495_970._c1_poly);
  Free_poly_data(&_pgen_tmp_495_970._c1_poly);
  Free_poly_data(&_pgen_tmp_495_970._c0_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&ss_result50_391);
  for (comb_cc_lf_index_n50_392 = 0; comb_cc_lf_index_n50_392 < 5; comb_cc_lf_index_n50_392 = comb_cc_lf_index_n50_392 + 1) {
    _preg_268435670 = Rotate(orig_result49_390, (1 << comb_cc_lf_index_n50_392) * 48);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&orig_result49_390, &orig_result49_390, &_preg_268435670);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&orig_result49_390._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&orig_result49_390._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&orig_result49_390._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435670._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&orig_result49_390._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&orig_result49_390._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435670._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435670._c1_poly);
    Free_poly_data(&_preg_268435670._c0_poly);
  }
  for (comb_cc_index_n50_393 = 0; comb_cc_index_n50_393 < 11; comb_cc_index_n50_393 = comb_cc_index_n50_393 + 1) {
    _preg_268435671 = Rotate(orig_result49_390, comb_cc_index_n50_393 * 3087);
    Copy_ciph(&_ckks_gen_tmp_6996_445, &_preg_268435671);
    Pt_from_msg_ofst(&_pgen_tmp_497_972, 102/* cst_299 */, (comb_cc_index_n50_393) * (25088), 25088, 1, 4);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_498_973, &_ckks_gen_tmp_6996_445, &_pgen_tmp_497_972);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&ss_result50_391, &ss_result50_391, &_pgen_tmp_498_973);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&ss_result50_391._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_498_973._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_6996_445._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_497_972._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_498_973._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_6996_445._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_497_972._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&ss_result50_391._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&ss_result50_391._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_498_973._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&ss_result50_391._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&ss_result50_391._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_498_973._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435671._c1_poly);
    Free_poly_data(&_preg_268435671._c0_poly);
  }
  Free_poly_data(&orig_result49_390._c1_poly);
  Free_poly_data(&orig_result49_390._c0_poly);
  Free_poly_data(&_pgen_tmp_497_972._poly);
  Free_poly_data(&_ckks_gen_tmp_6996_445._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_6996_445._c0_poly);
  Free_poly_data(&_pgen_tmp_498_973._c1_poly);
  Free_poly_data(&_pgen_tmp_498_973._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&ss_result50_391, &ss_result50_391);
  Rescale(&ss_result50_391._c0_poly, &ss_result50_391._c0_poly);
  Rescale(&ss_result50_391._c1_poly, &ss_result50_391._c1_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&_preg_268435540, &ss_result50_391);
  Free_poly_data(&ss_result50_391._c1_poly);
  Free_poly_data(&ss_result50_391._c0_poly);
  CMPLR_TM_END(8, 0);
  // pragma: 65537, 1030, 85
  // Flatten_48
  // pragma: 65536, 1028, 86
  CMPLR_TM_START(6, 0);
  Copy_ciph(&_preg_268435541, &_preg_268435540);
  Free_poly_data(&_preg_268435540._c1_poly);
  Free_poly_data(&_preg_268435540._c0_poly);
  CMPLR_TM_END(6, 0);
  // pragma: 65537, 1028, 86
  // Gemm_49
  // pragma: 65536, 1029, 88
  CMPLR_TM_START(7, 0);
  // BlockingRot replicate=17
  _preg_268435672 = Rotate(_preg_268435541, -512);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_499_974, &_preg_268435541, &_preg_268435672);
  CMPLR_TM_END(12, 0);
  _preg_268435673 = Rotate(_preg_268435541, -1024);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_500_975, &_pgen_tmp_499_974, &_preg_268435673);
  CMPLR_TM_END(12, 0);
  _preg_268435674 = Rotate(_preg_268435541, -1536);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_501_976, &_pgen_tmp_500_975, &_preg_268435674);
  CMPLR_TM_END(12, 0);
  _preg_268435675 = Rotate(_preg_268435541, -2048);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_502_977, &_pgen_tmp_501_976, &_preg_268435675);
  CMPLR_TM_END(12, 0);
  _preg_268435676 = Rotate(_preg_268435541, -2560);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_503_978, &_pgen_tmp_502_977, &_preg_268435676);
  CMPLR_TM_END(12, 0);
  _preg_268435677 = Rotate(_preg_268435541, -3072);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_504_979, &_pgen_tmp_503_978, &_preg_268435677);
  CMPLR_TM_END(12, 0);
  _preg_268435678 = Rotate(_preg_268435541, -3584);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_505_980, &_pgen_tmp_504_979, &_preg_268435678);
  CMPLR_TM_END(12, 0);
  _preg_268435679 = Rotate(_preg_268435541, -4096);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_506_981, &_pgen_tmp_505_980, &_preg_268435679);
  CMPLR_TM_END(12, 0);
  _preg_268435680 = Rotate(_preg_268435541, -4608);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_507_982, &_pgen_tmp_506_981, &_preg_268435680);
  CMPLR_TM_END(12, 0);
  _preg_268435681 = Rotate(_preg_268435541, -5120);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_508_983, &_pgen_tmp_507_982, &_preg_268435681);
  CMPLR_TM_END(12, 0);
  _preg_268435682 = Rotate(_preg_268435541, -5632);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_509_984, &_pgen_tmp_508_983, &_preg_268435682);
  CMPLR_TM_END(12, 0);
  _preg_268435683 = Rotate(_preg_268435541, -6144);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_510_985, &_pgen_tmp_509_984, &_preg_268435683);
  CMPLR_TM_END(12, 0);
  _preg_268435684 = Rotate(_preg_268435541, -6656);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_511_986, &_pgen_tmp_510_985, &_preg_268435684);
  CMPLR_TM_END(12, 0);
  _preg_268435685 = Rotate(_preg_268435541, -7168);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_512_987, &_pgen_tmp_511_986, &_preg_268435685);
  CMPLR_TM_END(12, 0);
  _preg_268435686 = Rotate(_preg_268435541, -7680);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_513_988, &_pgen_tmp_512_987, &_preg_268435686);
  CMPLR_TM_END(12, 0);
  _preg_268435687 = Rotate(_preg_268435541, -8192);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n50_394, &_pgen_tmp_513_988, &_preg_268435687);
  _pgen_modulus_472 = Q_modulus();
  _pgen_num_q_473 = Poly_level(&input_dup_n50_394._c0_poly);
  for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_499_974._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435541._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435672._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_499_974._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435541._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435672._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_500_975._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_499_974._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435673._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_500_975._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_499_974._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435673._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_501_976._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_500_975._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435674._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_501_976._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_500_975._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435674._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_502_977._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_501_976._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435675._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_502_977._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_501_976._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435675._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_503_978._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_502_977._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435676._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_503_978._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_502_977._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435676._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_504_979._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_503_978._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435677._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_504_979._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_503_978._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435677._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_505_980._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_504_979._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435678._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_505_980._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_504_979._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435678._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_506_981._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_505_980._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435679._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_506_981._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_505_980._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435679._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_507_982._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_506_981._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435680._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_507_982._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_506_981._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435680._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_508_983._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_507_982._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435681._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_508_983._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_507_982._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435681._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_509_984._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_508_983._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435682._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_509_984._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_508_983._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435682._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_510_985._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_509_984._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435683._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_510_985._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_509_984._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435683._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_511_986._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_510_985._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435684._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_511_986._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_510_985._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435684._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_512_987._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_511_986._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435685._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_512_987._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_511_986._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435685._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_513_988._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_512_987._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435686._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_513_988._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_512_987._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435686._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&input_dup_n50_394._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_513_988._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435687._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modadd(Coeffs(&input_dup_n50_394._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_513_988._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435687._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    _pgen_modulus_472 = _pgen_modulus_472 + 1;
  }
  Free_poly_data(&_preg_268435672._c1_poly);
  Free_poly_data(&_preg_268435672._c0_poly);
  Free_poly_data(&_preg_268435541._c1_poly);
  Free_poly_data(&_preg_268435541._c0_poly);
  Free_poly_data(&_preg_268435673._c1_poly);
  Free_poly_data(&_preg_268435673._c0_poly);
  Free_poly_data(&_pgen_tmp_499_974._c1_poly);
  Free_poly_data(&_pgen_tmp_499_974._c0_poly);
  Free_poly_data(&_preg_268435674._c1_poly);
  Free_poly_data(&_preg_268435674._c0_poly);
  Free_poly_data(&_pgen_tmp_500_975._c1_poly);
  Free_poly_data(&_pgen_tmp_500_975._c0_poly);
  Free_poly_data(&_preg_268435675._c1_poly);
  Free_poly_data(&_preg_268435675._c0_poly);
  Free_poly_data(&_pgen_tmp_501_976._c1_poly);
  Free_poly_data(&_pgen_tmp_501_976._c0_poly);
  Free_poly_data(&_preg_268435676._c1_poly);
  Free_poly_data(&_preg_268435676._c0_poly);
  Free_poly_data(&_pgen_tmp_502_977._c1_poly);
  Free_poly_data(&_pgen_tmp_502_977._c0_poly);
  Free_poly_data(&_preg_268435677._c1_poly);
  Free_poly_data(&_preg_268435677._c0_poly);
  Free_poly_data(&_pgen_tmp_503_978._c1_poly);
  Free_poly_data(&_pgen_tmp_503_978._c0_poly);
  Free_poly_data(&_preg_268435678._c1_poly);
  Free_poly_data(&_preg_268435678._c0_poly);
  Free_poly_data(&_pgen_tmp_504_979._c1_poly);
  Free_poly_data(&_pgen_tmp_504_979._c0_poly);
  Free_poly_data(&_preg_268435679._c1_poly);
  Free_poly_data(&_preg_268435679._c0_poly);
  Free_poly_data(&_pgen_tmp_505_980._c1_poly);
  Free_poly_data(&_pgen_tmp_505_980._c0_poly);
  Free_poly_data(&_preg_268435680._c1_poly);
  Free_poly_data(&_preg_268435680._c0_poly);
  Free_poly_data(&_pgen_tmp_506_981._c1_poly);
  Free_poly_data(&_pgen_tmp_506_981._c0_poly);
  Free_poly_data(&_preg_268435681._c1_poly);
  Free_poly_data(&_preg_268435681._c0_poly);
  Free_poly_data(&_pgen_tmp_507_982._c1_poly);
  Free_poly_data(&_pgen_tmp_507_982._c0_poly);
  Free_poly_data(&_preg_268435682._c1_poly);
  Free_poly_data(&_preg_268435682._c0_poly);
  Free_poly_data(&_pgen_tmp_508_983._c1_poly);
  Free_poly_data(&_pgen_tmp_508_983._c0_poly);
  Free_poly_data(&_preg_268435683._c1_poly);
  Free_poly_data(&_preg_268435683._c0_poly);
  Free_poly_data(&_pgen_tmp_509_984._c1_poly);
  Free_poly_data(&_pgen_tmp_509_984._c0_poly);
  Free_poly_data(&_preg_268435684._c1_poly);
  Free_poly_data(&_preg_268435684._c0_poly);
  Free_poly_data(&_pgen_tmp_510_985._c1_poly);
  Free_poly_data(&_pgen_tmp_510_985._c0_poly);
  Free_poly_data(&_preg_268435685._c1_poly);
  Free_poly_data(&_preg_268435685._c0_poly);
  Free_poly_data(&_pgen_tmp_511_986._c1_poly);
  Free_poly_data(&_pgen_tmp_511_986._c0_poly);
  Free_poly_data(&_preg_268435686._c1_poly);
  Free_poly_data(&_preg_268435686._c0_poly);
  Free_poly_data(&_pgen_tmp_512_987._c1_poly);
  Free_poly_data(&_pgen_tmp_512_987._c0_poly);
  Free_poly_data(&_preg_268435687._c1_poly);
  Free_poly_data(&_preg_268435687._c0_poly);
  Free_poly_data(&_pgen_tmp_513_988._c1_poly);
  Free_poly_data(&_pgen_tmp_513_988._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=8
  for (bs_input_n50_395 = 0; bs_input_n50_395 < 8; bs_input_n50_395 = bs_input_n50_395 + 1) {
    _preg_268435688 = Rotate(input_dup_n50_394, _cst_302[bs_input_n50_395]);
    Copy_ciph(&input_block_n50_396[bs_input_n50_395], &_preg_268435688);
    Free_poly_data(&_preg_268435688._c1_poly);
    Free_poly_data(&_preg_268435688._c0_poly);
  }
  Free_poly_data(&input_dup_n50_394._c1_poly);
  Free_poly_data(&input_dup_n50_394._c0_poly);
  Zero_ciph(&gemm_result_n51_397);
  // IMRA Metakernel: gs=8
  for (gs_n51_398 = 0; gs_n51_398 < 8; gs_n51_398 = gs_n51_398 + 1) {
    Zero_ciph(&block_result_399);
    for (bs_n51_400 = 0; bs_n51_400 < 8; bs_n51_400 = bs_n51_400 + 1) {
      _ckks_gen_tmp_7148_446 = input_block_n50_396[bs_n51_400];
      Pt_from_msg_ofst(&_pgen_tmp_514_989, 103/* cst_301 */, ((bs_n51_400 + (gs_n51_398 * 8))) * (8704), 8704, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_515_990, &_ckks_gen_tmp_7148_446, &_pgen_tmp_514_989);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&block_result_399, &block_result_399, &_pgen_tmp_515_990);
      _pgen_modulus_472 = Q_modulus();
      _pgen_num_q_473 = Poly_level(&block_result_399._c0_poly);
      for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_515_990._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_7148_446._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_514_989._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_515_990._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_ckks_gen_tmp_7148_446._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_514_989._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&block_result_399._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&block_result_399._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_515_990._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        Hw_modadd(Coeffs(&block_result_399._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&block_result_399._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_515_990._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
        _pgen_modulus_472 = _pgen_modulus_472 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435689 = Rotate(block_result_399, gs_n51_398 * 8);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&gemm_result_n51_397, &gemm_result_n51_397, &_preg_268435689);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&gemm_result_n51_397._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&gemm_result_n51_397._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&gemm_result_n51_397._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435689._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&gemm_result_n51_397._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&gemm_result_n51_397._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435689._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435689._c1_poly);
    Free_poly_data(&_preg_268435689._c0_poly);
  }
  Free_ciph_poly(input_block_n50_396, 8);
  Free_poly_data(&_pgen_tmp_514_989._poly);
  Free_poly_data(&_pgen_tmp_515_990._c1_poly);
  Free_poly_data(&_pgen_tmp_515_990._c0_poly);
  Free_poly_data(&block_result_399._c1_poly);
  Free_poly_data(&block_result_399._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&gemm_result_n51_397, &gemm_result_n51_397);
  Rescale(&gemm_result_n51_397._c0_poly, &gemm_result_n51_397._c0_poly);
  Rescale(&gemm_result_n51_397._c1_poly, &gemm_result_n51_397._c1_poly);
  CMPLR_TM_END(19, 0);
  // gemm result reduce->Ps=8
  Copy_ciph(&reduce_intra_401, &gemm_result_n51_397);
  for (ri_n51_402 = 1; ri_n51_402 < 8; ri_n51_402 = ri_n51_402 + 1) {
    _preg_268435690 = Rotate(gemm_result_n51_397, ri_n51_402 * 1088);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&reduce_intra_401, &reduce_intra_401, &_preg_268435690);
    _pgen_modulus_472 = Q_modulus();
    _pgen_num_q_473 = Poly_level(&reduce_intra_401._c0_poly);
    for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
      Hw_modadd(Coeffs(&reduce_intra_401._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&reduce_intra_401._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435690._c0_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      Hw_modadd(Coeffs(&reduce_intra_401._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&reduce_intra_401._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_preg_268435690._c1_poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
      _pgen_modulus_472 = _pgen_modulus_472 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435690._c1_poly);
    Free_poly_data(&_preg_268435690._c0_poly);
  }
  Free_poly_data(&gemm_result_n51_397._c1_poly);
  Free_poly_data(&gemm_result_n51_397._c0_poly);
  // gemm result reduce->(kp/np)=0
  // gemm add bias
  Pt_from_msg(&_pgen_tmp_516_991, 104 /* cst_1 */, 1000, 1, 2);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&reduce_intra_401, &reduce_intra_401, &_pgen_tmp_516_991);
  _pgen_modulus_472 = Q_modulus();
  _pgen_num_q_473 = Poly_level(&reduce_intra_401._c0_poly);
  for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
    Hw_modadd(Coeffs(&reduce_intra_401._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&reduce_intra_401._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_516_991._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Set_coeffs(&reduce_intra_401._c1_poly, _pgen_rns_idx_474, degree, Coeffs(&reduce_intra_401._c1_poly, _pgen_rns_idx_474, degree));
    _pgen_modulus_472 = _pgen_modulus_472 + 1;
  }
  Free_poly_data(&_pgen_tmp_516_991._poly);
  CMPLR_TM_END(13, 0);
  Pt_from_msg(&_pgen_tmp_518_993, 105 /* cst_303 */, 1000, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_517_992, &reduce_intra_401, &_pgen_tmp_518_993);
  _pgen_modulus_472 = Q_modulus();
  _pgen_num_q_473 = Poly_level(&_pgen_tmp_517_992._c0_poly);
  for (_pgen_rns_idx_474 = 0; _pgen_rns_idx_474 < _pgen_num_q_473; _pgen_rns_idx_474 = _pgen_rns_idx_474 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_517_992._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&reduce_intra_401._c0_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_518_993._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_517_992._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&reduce_intra_401._c1_poly, _pgen_rns_idx_474, degree), Coeffs(&_pgen_tmp_518_993._poly, _pgen_rns_idx_474, degree), _pgen_modulus_472, degree);
    _pgen_modulus_472 = _pgen_modulus_472 + 1;
  }
  Free_poly_data(&_pgen_tmp_518_993._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&reduce_intra_401, &_pgen_tmp_517_992);
  Rescale(&reduce_intra_401._c0_poly, &_pgen_tmp_517_992._c0_poly);
  Rescale(&reduce_intra_401._c1_poly, &_pgen_tmp_517_992._c1_poly);
  Free_poly_data(&_pgen_tmp_517_992._c1_poly);
  Free_poly_data(&_pgen_tmp_517_992._c0_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&output_403, &reduce_intra_401);
  Free_poly_data(&reduce_intra_401._c1_poly);
  Free_poly_data(&reduce_intra_401._c0_poly);
  CMPLR_TM_END(7, 0);
  // pragma: 65537, 1029, 88
  Set_output_data("output", 0, &output_403);
  return true;
}

int Get_input_count() {
  return 1;
}

DATA_SCHEME* Get_encode_scheme(int idx) {
  static MAP_DESC desc_0[] = {
    { NORMAL, 25088, 0, 672, 1},
    { NORMAL, 25088, 25088, 672, 1},
    { NORMAL, 25088, 50176, 672, 1},
    { NORMAL, 25088, 75264, 672, 1},
    { NORMAL, 25088, 100352, 672, 1},
    { NORMAL, 25088, 125440, 672, 1},
  };
  static DATA_SCHEME scheme_0 = {
    "input", {1, 3, 224, 224}, 6, desc_0
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
  Encode_float(&_pgen_tmp_5_35, &_cst_304, 1, Sc_degree(&_pgen_tmp_4_34), Level(&_pgen_tmp_4_34));
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
  Encode_float(&_pgen_tmp_11_41, &_cst_305, 1, Sc_degree(&_pgen_tmp_10_40), Level(&_pgen_tmp_10_40));
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
  Encode_float(&_pgen_tmp_43_73, &_cst_314, 1, Sc_degree(&_pgen_tmp_42_72), Level(&_pgen_tmp_42_72));
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
  Encode_float(&_pgen_tmp_50_80, &_cst_315, 1, 1, Level(&_relu_tmp58_7));
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
  Encode_float(&_pgen_tmp_57_87, &_cst_316, 1, Sc_degree(&_pgen_tmp_56_86), Level(&_pgen_tmp_56_86));
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
  Encode_float(&_pgen_tmp_63_93, &_cst_317, 1, Sc_degree(&_pgen_tmp_62_92), Level(&_pgen_tmp_62_92));
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
  Encode_double(&_pgen_tmp_81_111, &_cst_324, 1, 1, Level(&_relu_tmp80_11));
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
  Encode_double(&_pgen_tmp_93_123, &_cst_327, 1, 1, Level(&_relu_tmp80_11));
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
  Encode_double(&_pgen_tmp_103_133, &_cst_330, 1, 1, Level(&_relu_tmp80_11));
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
  Encode_float(&_pgen_tmp_115_145, &_cst_331, 1, Sc_degree(&_pgen_tmp_114_144), Level(&_pgen_tmp_114_144));
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
  Encode_float(&_pgen_tmp_122_152, &_cst_332, 1, 1, Level(&_relu_tmp155_16));
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
  Encode_float(&_pgen_tmp_129_159, &_cst_333, 1, Sc_degree(&_pgen_tmp_128_158), Level(&_pgen_tmp_128_158));
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
  Encode_float(&_pgen_tmp_135_165, &_cst_334, 1, Sc_degree(&_pgen_tmp_134_164), Level(&_pgen_tmp_134_164));
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
    LIB_ANT, 65536, 0, 33, 4, 60, 56, 3, 192, 1215, 
    { -25088, -25039, -24990, -24941, -24892, -24843, -24794, -24745,
      -24696, -24647, -24598, -24549, -24500, -24451, -24402, -24353,
      -24304, -24255, -24206, -24157, -24108, -24059, -24010, -23961,
      -23912, -23863, -23814, -23765, -23716, -23667, -23618, -23569,
      -23520, -23471, -23422, -23373, -23324, -23275, -23226, -23177,
      -23128, -23079, -23030, -22981, -22932, -22883, -22834, -22785,
      -22736, -22687, -22638, -22589, -22540, -22491, -22442, -22393,
      -22344, -22295, -22246, -22197, -22148, -22099, -22050, -22001,
      -21952, -21903, -21854, -21805, -21756, -21707, -21658, -21609,
      -21560, -21511, -21462, -21413, -21364, -21315, -21266, -21217,
      -21168, -21119, -21070, -21021, -20972, -20923, -20874, -20825,
      -20776, -20727, -20678, -20629, -20580, -20531, -20482, -20433,
      -20384, -20335, -20286, -20237, -20188, -20139, -20090, -20041,
      -19992, -19943, -19894, -19845, -19796, -19747, -19698, -19649,
      -19600, -19551, -19502, -19453, -19404, -19355, -19306, -19257,
      -19208, -19159, -19110, -19061, -19012, -18963, -18914, -18865,
      -18816, -18767, -18718, -18669, -18620, -18571, -18522, -18473,
      -18424, -18375, -18326, -18277, -18228, -18179, -18130, -18081,
      -18032, -17983, -17934, -17885, -17836, -17787, -17738, -17689,
      -17640, -17591, -17542, -17493, -17444, -17395, -17346, -17297,
      -17248, -17199, -17150, -17101, -17052, -17003, -16954, -16905,
      -16856, -16807, -16758, -16709, -16660, -16611, -16562, -16513,
      -16464, -16415, -16366, -16317, -16268, -16219, -16170, -16121,
      -16072, -16023, -15974, -15925, -15876, -15827, -15778, -15729,
      -15680, -15631, -15582, -15533, -15484, -15435, -15386, -15337,
      -15288, -15239, -15190, -15141, -15092, -15043, -14994, -14945,
      -14896, -14847, -14798, -14749, -14700, -14651, -14602, -14553,
      -14504, -14455, -14406, -14357, -14308, -14259, -14210, -14161,
      -14112, -14063, -14014, -13965, -13916, -13867, -13818, -13769,
      -13720, -13671, -13622, -13573, -13524, -13475, -13426, -13377,
      -13328, -13279, -13230, -13181, -13132, -13083, -13034, -12985,
      -12936, -12887, -12838, -12789, -12740, -12691, -12642, -12593,
      -12544, -12495, -12446, -12397, -12348, -12299, -12250, -12201,
      -12152, -12103, -12054, -12005, -11956, -11907, -11858, -11809,
      -11760, -11711, -11662, -11613, -11564, -11515, -11466, -11417,
      -11368, -11319, -11270, -11221, -11172, -11123, -11074, -11025,
      -10976, -10927, -10878, -10829, -10780, -10731, -10682, -10633,
      -10584, -10535, -10486, -10437, -10388, -10339, -10290, -10241,
      -10192, -10143, -10094, -10045, -9996, -9947, -9898, -9849,
      -9800, -9751, -9702, -9653, -9604, -9555, -9506, -9457,
      -9408, -9359, -9310, -9261, -9212, -9163, -9114, -9065,
      -9016, -8967, -8918, -8869, -8820, -8771, -8722, -8673,
      -8624, -8575, -8526, -8477, -8428, -8379, -8330, -8281,
      -8232, -8192, -8183, -8134, -8085, -8036, -7987, -7938,
      -7889, -7840, -7791, -7742, -7693, -7680, -7644, -7595,
      -7546, -7497, -7448, -7399, -7350, -7301, -7252, -7203,
      -7168, -7154, -7105, -7056, -7007, -6958, -6909, -6860,
      -6811, -6762, -6713, -6664, -6656, -6615, -6566, -6517,
      -6468, -6419, -6370, -6321, -6272, -6223, -6174, -6144,
      -6125, -6076, -6027, -5978, -5929, -5880, -5831, -5782,
      -5733, -5684, -5635, -5632, -5586, -5537, -5488, -5439,
      -5390, -5341, -5292, -5243, -5194, -5145, -5120, -5096,
      -5047, -4998, -4949, -4900, -4851, -4802, -4753, -4704,
      -4655, -4608, -4606, -4557, -4508, -4459, -4410, -4361,
      -4312, -4263, -4214, -4165, -4116, -4096, -4067, -4018,
      -3969, -3920, -3871, -3822, -3773, -3724, -3675, -3626,
      -3584, -3577, -3528, -3479, -3430, -3381, -3332, -3283,
      -3234, -3185, -3136, -3087, -3072, -3038, -2989, -2940,
      -2891, -2842, -2793, -2744, -2695, -2646, -2597, -2560,
      -2548, -2499, -2450, -2401, -2352, -2303, -2254, -2205,
      -2156, -2107, -2058, -2048, -2009, -1960, -1911, -1862,
      -1813, -1764, -1715, -1666, -1617, -1568, -1536, -1519,
      -1470, -1421, -1372, -1323, -1274, -1225, -1176, -1127,
      -1078, -1029, -1024, -980, -931, -882, -833, -784,
      -735, -686, -675, -674, -673, -672, -671, -670,
      -669, -637, -588, -539, -512, -490, -451, -450,
      -449, -448, -447, -446, -445, -441, -392, -343,
      -294, -245, -227, -226, -225, -224, -223, -222,
      -221, -196, -147, -113, -112, -111, -98, -57,
      -56, -55, -49, -29, -28, -27, -15, -14,
      -13, -8, -7, -6, -3, -2, -1, 0,
      1, 2, 3, 4, 5, 6, 7, 8,
      10, 12, 13, 14, 15, 16, 18, 20,
      21, 22, 23, 24, 25, 26, 27, 28,
      29, 30, 32, 34, 36, 38, 40, 42,
      44, 46, 48, 49, 50, 52, 54, 55,
      56, 57, 58, 60, 62, 63, 64, 65,
      66, 67, 68, 69, 70, 72, 74, 76,
      78, 80, 82, 84, 86, 88, 90, 92,
      94, 96, 98, 100, 102, 104, 105, 106,
      107, 108, 109, 110, 111, 112, 113, 126,
      128, 130, 132, 147, 168, 192, 196, 221,
      222, 223, 224, 225, 226, 227, 245, 294,
      336, 343, 384, 392, 441, 445, 446, 447,
      448, 449, 450, 451, 490, 504, 539, 588,
      637, 669, 670, 671, 672, 673, 674, 675,
      686, 735, 768, 784, 833, 882, 931, 980,
      1008, 1029, 1078, 1088, 1127, 1176, 1225, 1274,
      1323, 1344, 1372, 1421, 1470, 1519, 1568, 1617,
      1666, 1680, 1715, 1764, 1813, 1862, 1911, 1960,
      2009, 2016, 2058, 2107, 2156, 2176, 2205, 2254,
      2303, 2352, 2401, 2450, 2499, 2548, 2597, 2646,
      2688, 2695, 2744, 2793, 2842, 2891, 2940, 2989,
      3038, 3087, 3136, 3185, 3234, 3264, 3283, 3332,
      3360, 3381, 3430, 3479, 3528, 3577, 3626, 3675,
      3724, 3773, 3822, 3871, 3920, 3969, 4018, 4032,
      4067, 4116, 4165, 4214, 4263, 4312, 4352, 4361,
      4410, 4459, 4508, 4557, 4606, 4655, 4704, 4753,
      4802, 4851, 4900, 4949, 4998, 5047, 5096, 5145,
      5194, 5243, 5292, 5341, 5376, 5390, 5439, 5440,
      5488, 5537, 5586, 5635, 5684, 5733, 5782, 5831,
      5880, 5929, 5978, 6027, 6048, 6076, 6125, 6174,
      6223, 6272, 6321, 6370, 6419, 6468, 6517, 6528,
      6566, 6615, 6664, 6713, 6720, 6762, 6811, 6860,
      6909, 6958, 7007, 7056, 7105, 7154, 7203, 7252,
      7301, 7350, 7392, 7399, 7448, 7497, 7546, 7595,
      7616, 7644, 7693, 7742, 7791, 7840, 7889, 7938,
      7987, 8036, 8064, 8085, 8134, 8183, 8232, 8281,
      8330, 8379, 8428, 8477, 8526, 8575, 8624, 8673,
      8722, 8736, 8771, 8820, 8869, 8918, 8967, 9016,
      9065, 9114, 9163, 9212, 9261, 9310, 9359, 9408,
      9457, 9506, 9555, 9604, 9653, 9702, 9751, 9800,
      9849, 9898, 9947, 9996, 10045, 10094, 10143, 10192,
      10241, 10290, 10339, 10388, 10437, 10486, 10535, 10584,
      10633, 10682, 10731, 10752, 10780, 10829, 10878, 10927,
      10976, 11025, 11074, 11123, 11172, 11221, 11270, 11319,
      11368, 11417, 11466, 11515, 11564, 11613, 11662, 11711,
      11760, 11809, 11858, 11907, 11956, 12005, 12054, 12096,
      12103, 12152, 12201, 12250, 12299, 12348, 12397, 12446,
      12495, 12544, 12593, 12642, 12691, 12740, 12789, 12838,
      12887, 12936, 12985, 13034, 13083, 13132, 13181, 13230,
      13279, 13328, 13377, 13426, 13440, 13475, 13524, 13573,
      13622, 13671, 13720, 13769, 13818, 13867, 13916, 13965,
      14014, 14063, 14112, 14161, 14210, 14259, 14308, 14357,
      14406, 14455, 14504, 14553, 14602, 14651, 14700, 14749,
      14784, 14798, 14847, 14896, 14945, 14994, 15043, 15092,
      15141, 15190, 15239, 15288, 15337, 15386, 15435, 15484,
      15533, 15582, 15631, 15680, 15729, 15778, 15827, 15876,
      15925, 15974, 16023, 16072, 16121, 16128, 16170, 16219,
      16268, 16317, 16366, 16415, 16464, 16513, 16562, 16611,
      16660, 16709, 16758, 16807, 16856, 16905, 16954, 17003,
      17052, 17101, 17150, 17199, 17248, 17297, 17346, 17395,
      17444, 17472, 17493, 17542, 17591, 17640, 17689, 17738,
      17787, 17836, 17885, 17934, 17983, 18032, 18081, 18130,
      18179, 18228, 18277, 18326, 18375, 18424, 18473, 18522,
      18571, 18620, 18669, 18718, 18767, 18816, 18865, 18914,
      18963, 19012, 19061, 19110, 19159, 19208, 19257, 19306,
      19355, 19404, 19453, 19502, 19551, 19600, 19649, 19698,
      19747, 19796, 19845, 19894, 19943, 19992, 20041, 20090,
      20139, 20188, 20237, 20286, 20335, 20384, 20433, 20482,
      20531, 20580, 20629, 20678, 20727, 20776, 20825, 20874,
      20923, 20972, 21021, 21070, 21119, 21168, 21217, 21266,
      21315, 21364, 21413, 21462, 21511, 21560, 21609, 21658,
      21707, 21756, 21805, 21854, 21903, 21952, 22001, 22050,
      22099, 22148, 22197, 22246, 22295, 22344, 22393, 22442,
      22491, 22540, 22589, 22638, 22687, 22736, 22785, 22834,
      22883, 22932, 22981, 23030, 23079, 23128, 23177, 23226,
      23275, 23324, 23373, 23422, 23471, 23520, 23569, 23618,
      23667, 23716, 23765, 23814, 23863, 23912, 23961, 24010,
      24059, 24108, 24157, 24206, 24255, 24304, 24353, 24402,
      24451, 24500, 24549, 24598, 24647, 24696, 24745, 24794,
      24843, 24892, 24941, 24990, 25039, 27783, 30870 }
  };
  return &parm;
}

RT_DATA_INFO* Get_rt_data_info() {
  static RT_DATA_INFO info = {
    "/app/release/resnet18_imagenet.0325.bin",
    "XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX",
    DE_MSG_F32
  };
  return &info;
}

int32_t _cst_141[49] = {
  -675, -674, -673, -672, -671, -670, -669, -451,
  -450, -449, -448, -447, -446, -445, -227, -226,
  -225, -224, -223, -222, -221, -3, -2, -1,
  0, 1, 2, 3, 221, 222, 223, 224,
  225, 226, 227, 445, 446, 447, 448, 449,
  450, 451, 669, 670, 671, 672, 673, 674,
  675
};
int32_t _cst_147[9] = {
  -113, -112, -111, -1, 0, 1, 111, 112,
  113
};
int32_t _cst_155[9] = {
  -57, -56, -55, -1, 0, 1, 55, 56,
  57
};
int32_t _cst_162[9] = {
  -57, -56, -55, -1, 0, 1, 55, 56,
  57
};
int32_t _cst_169[9] = {
  -57, -56, -55, -1, 0, 1, 55, 56,
  57
};
int32_t _cst_176[9] = {
  -57, -56, -55, -1, 0, 1, 55, 56,
  57
};
int32_t _cst_183[1] = {
  0
};
int32_t _cst_193[9] = {
  -57, -56, -55, -1, 0, 1, 55, 56,
  57
};
int32_t _cst_203[9] = {
  -29, -28, -27, -1, 0, 1, 27, 28,
  29
};
int32_t _cst_210[9] = {
  -29, -28, -27, -1, 0, 1, 27, 28,
  29
};
int32_t _cst_217[9] = {
  -29, -28, -27, -1, 0, 1, 27, 28,
  29
};
int32_t _cst_224[1] = {
  0
};
int32_t _cst_234[9] = {
  -29, -28, -27, -1, 0, 1, 27, 28,
  29
};
int32_t _cst_244[9] = {
  -15, -14, -13, -1, 0, 1, 13, 14,
  15
};
int32_t _cst_251[9] = {
  -15, -14, -13, -1, 0, 1, 13, 14,
  15
};
int32_t _cst_258[9] = {
  -15, -14, -13, -1, 0, 1, 13, 14,
  15
};
int32_t _cst_265[1] = {
  0
};
int32_t _cst_274[9] = {
  -15, -14, -13, -1, 0, 1, 13, 14,
  15
};
int32_t _cst_282[9] = {
  -8, -7, -6, -1, 0, 1, 6, 7,
  8
};
int32_t _cst_288[9] = {
  -8, -7, -6, -1, 0, 1, 6, 7,
  8
};
int32_t _cst_294[9] = {
  -8, -7, -6, -1, 0, 1, 6, 7,
  8
};
int32_t _cst_302[8] = {
  0, 1, 2, 3, 4, 5, 6, 7
};
