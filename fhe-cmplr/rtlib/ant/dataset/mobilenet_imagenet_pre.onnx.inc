// external header files
#include "rt_ant/rt_ant.h"

typedef double float64_t;
typedef float float32_t;

extern float32_t _cst_0[1024000];
extern float32_t _cst_1[1000];
extern float32_t _cst_2[864];
extern float32_t _cst_3[32];
extern float32_t _cst_4[288];
extern float32_t _cst_5[2048];
extern float32_t _cst_6[64];
extern float32_t _cst_7[576];
extern float32_t _cst_8[8192];
extern float32_t _cst_9[128];
extern float32_t _cst_10[1152];
extern float32_t _cst_11[16384];
extern float32_t _cst_12[1152];
extern float32_t _cst_13[32768];
extern float32_t _cst_14[256];
extern float32_t _cst_15[2304];
extern float32_t _cst_16[65536];
extern float32_t _cst_17[2304];
extern float32_t _cst_18[131072];
extern float32_t _cst_19[512];
extern float32_t _cst_20[4608];
extern float32_t _cst_21[262144];
extern float32_t _cst_22[4608];
extern float32_t _cst_23[262144];
extern float32_t _cst_24[4608];
extern float32_t _cst_25[262144];
extern float32_t _cst_26[4608];
extern float32_t _cst_27[262144];
extern float32_t _cst_28[4608];
extern float32_t _cst_29[262144];
extern float32_t _cst_30[4608];
extern float32_t _cst_31[524288];
extern float32_t _cst_32[1024];
extern float32_t _cst_33[9216];
extern float32_t _cst_34[1048576];
extern int64_t _cst_35[2];
extern float32_t _cst_36[864];
extern float32_t _cst_37[401408];
extern float32_t _cst_38[401408];
extern float32_t _cst_39[1];
extern int64_t _cst_40[2];
extern int64_t _cst_41[2];
extern int64_t _cst_42[2];
extern float32_t _cst_43[288];
extern float32_t _cst_44[401408];
extern float32_t _cst_45[401408];
extern float32_t _cst_46[2];
extern float32_t _cst_47[2048];
extern float32_t _cst_48[802816];
extern float32_t _cst_49[802816];
extern float32_t _cst_50[2];
extern float32_t _cst_51[576];
extern float32_t _cst_52[200704];
extern float32_t _cst_53[200704];
extern float32_t _cst_54[2];
extern int64_t _cst_55[2];
extern int64_t _cst_56[2];
extern int64_t _cst_57[2];
extern float32_t _cst_58[8192];
extern float32_t _cst_59[401408];
extern float32_t _cst_60[401408];
extern float32_t _cst_61[8];
extern float32_t _cst_62[1152];
extern float32_t _cst_63[401408];
extern float32_t _cst_64[401408];
extern float32_t _cst_65[8];
extern float32_t _cst_66[16384];
extern float32_t _cst_67[401408];
extern float32_t _cst_68[401408];
extern float32_t _cst_69[8];
extern float32_t _cst_70[1152];
extern float32_t _cst_71[100352];
extern float32_t _cst_72[100352];
extern float32_t _cst_73[8];
extern int64_t _cst_74[2];
extern int64_t _cst_75[2];
extern int64_t _cst_76[2];
extern float32_t _cst_77[32768];
extern float32_t _cst_78[200704];
extern float32_t _cst_79[200704];
extern float32_t _cst_80[32];
extern float32_t _cst_81[2304];
extern float32_t _cst_82[200704];
extern float32_t _cst_83[200704];
extern float32_t _cst_84[32];
extern float32_t _cst_85[65536];
extern float32_t _cst_86[200704];
extern float32_t _cst_87[200704];
extern float32_t _cst_88[32];
extern float32_t _cst_89[2304];
extern float32_t _cst_90[50176];
extern float32_t _cst_91[50176];
extern float32_t _cst_92[32];
extern int64_t _cst_93[2];
extern int64_t _cst_94[2];
extern int64_t _cst_95[2];
extern float32_t _cst_96[131072];
extern float32_t _cst_97[100352];
extern float32_t _cst_98[100352];
extern float32_t _cst_99[128];
extern float32_t _cst_100[4608];
extern float32_t _cst_101[100352];
extern float32_t _cst_102[100352];
extern float32_t _cst_103[128];
extern float32_t _cst_104[262144];
extern float32_t _cst_105[100352];
extern float32_t _cst_106[100352];
extern float32_t _cst_107[128];
extern float32_t _cst_108[4608];
extern float32_t _cst_109[100352];
extern float32_t _cst_110[100352];
extern float32_t _cst_111[128];
extern float32_t _cst_112[262144];
extern float32_t _cst_113[100352];
extern float32_t _cst_114[100352];
extern float32_t _cst_115[128];
extern float32_t _cst_116[4608];
extern float32_t _cst_117[100352];
extern float32_t _cst_118[100352];
extern float32_t _cst_119[128];
extern float32_t _cst_120[262144];
extern float32_t _cst_121[100352];
extern float32_t _cst_122[100352];
extern float32_t _cst_123[128];
extern float32_t _cst_124[4608];
extern float32_t _cst_125[100352];
extern float32_t _cst_126[100352];
extern float32_t _cst_127[128];
extern float32_t _cst_128[262144];
extern float32_t _cst_129[100352];
extern float32_t _cst_130[100352];
extern float32_t _cst_131[128];
extern float32_t _cst_132[4608];
extern float32_t _cst_133[100352];
extern float32_t _cst_134[100352];
extern float32_t _cst_135[128];
extern float32_t _cst_136[262144];
extern float32_t _cst_137[100352];
extern float32_t _cst_138[100352];
extern float32_t _cst_139[128];
extern float32_t _cst_140[4608];
extern float32_t _cst_141[25088];
extern float32_t _cst_142[128];
extern int64_t _cst_143[2];
extern int64_t _cst_144[2];
extern int64_t _cst_145[2];
extern float32_t _cst_146[524288];
extern float32_t _cst_147[50176];
extern float32_t _cst_148[50176];
extern float32_t _cst_149[512];
extern float32_t _cst_150[9216];
extern float32_t _cst_151[50176];
extern float32_t _cst_152[50176];
extern float32_t _cst_153[512];
extern float32_t _cst_154[1048576];
extern float32_t _cst_155[50176];
extern float32_t _cst_156[50176];
extern float32_t _cst_157[512];
extern int64_t _cst_158[2];
extern int64_t _cst_159[2];
extern int64_t _cst_160[2];
extern float32_t _cst_161[22063104];
extern int32_t _cst_162[1];
extern float32_t _cst_163[229824];
extern float32_t _cst_164[25536];
extern int32_t _cst_165[9];
extern float32_t _cst_166[1404928];
extern float32_t _cst_167[351232];
extern float32_t _cst_168[3612672];
extern int32_t _cst_169[1];
extern float32_t _cst_170[225792];
extern float32_t _cst_171[25088];
extern int32_t _cst_172[9];
extern float32_t _cst_173[25690112];
extern int32_t _cst_174[1];
extern float32_t _cst_175[50176];
extern float32_t _cst_176[25088];
extern int32_t _cst_177[1];
extern float32_t _cst_178[50176];
extern float32_t _cst_179[50176];
extern float32_t _cst_180[7225344];
extern int32_t _cst_181[1];
extern float32_t _cst_182[225792];
extern float32_t _cst_183[25088];
extern int32_t _cst_184[9];
extern float32_t _cst_185[702464];
extern float32_t _cst_186[351232];
extern float32_t _cst_187[6272];
extern float32_t _cst_188[25690112];
extern int32_t _cst_189[1];
extern float32_t _cst_190[200704];
extern float32_t _cst_191[25088];
extern int32_t _cst_192[1];
extern float32_t _cst_193[200704];
extern float32_t _cst_194[200704];
extern float32_t _cst_195[3612672];
extern int32_t _cst_196[1];
extern float32_t _cst_197[225792];
extern float32_t _cst_198[25088];
extern int32_t _cst_199[9];
extern float32_t _cst_200[51380224];
extern int32_t _cst_201[1];
extern float32_t _cst_202[200704];
extern float32_t _cst_203[25088];
extern int32_t _cst_204[1];
extern float32_t _cst_205[200704];
extern float32_t _cst_206[200704];
extern float32_t _cst_207[3612672];
extern int32_t _cst_208[1];
extern float32_t _cst_209[225792];
extern float32_t _cst_210[25088];
extern int32_t _cst_211[9];
extern float32_t _cst_212[351232];
extern float32_t _cst_213[175616];
extern float32_t _cst_214[50176];
extern float32_t _cst_215[25690112];
extern int32_t _cst_216[1];
extern float32_t _cst_217[802816];
extern float32_t _cst_218[25088];
extern int32_t _cst_219[1];
extern float32_t _cst_220[802816];
extern float32_t _cst_221[802816];
extern float32_t _cst_222[1806336];
extern int32_t _cst_223[1];
extern float32_t _cst_224[225792];
extern float32_t _cst_225[25088];
extern int32_t _cst_226[9];
extern float32_t _cst_227[51380224];
extern int32_t _cst_228[1];
extern float32_t _cst_229[802816];
extern float32_t _cst_230[25088];
extern int32_t _cst_231[1];
extern float32_t _cst_232[802816];
extern float32_t _cst_233[802816];
extern float32_t _cst_234[1806336];
extern int32_t _cst_235[1];
extern float32_t _cst_236[225792];
extern float32_t _cst_237[25088];
extern int32_t _cst_238[9];
extern float32_t _cst_239[175616];
extern float32_t _cst_240[100352];
extern float32_t _cst_241[200704];
extern float32_t _cst_242[25690112];
extern int32_t _cst_243[1];
extern float32_t _cst_244[3211264];
extern float32_t _cst_245[25088];
extern int32_t _cst_246[1];
extern float32_t _cst_247[3211264];
extern float32_t _cst_248[3211264];
extern float32_t _cst_249[903168];
extern int32_t _cst_250[1];
extern float32_t _cst_251[225792];
extern float32_t _cst_252[25088];
extern int32_t _cst_253[9];
extern float32_t _cst_254[51380224];
extern int32_t _cst_255[1];
extern float32_t _cst_256[3211264];
extern float32_t _cst_257[25088];
extern int32_t _cst_258[1];
extern float32_t _cst_259[3211264];
extern float32_t _cst_260[3211264];
extern float32_t _cst_261[903168];
extern int32_t _cst_262[1];
extern float32_t _cst_263[225792];
extern float32_t _cst_264[25088];
extern int32_t _cst_265[9];
extern float32_t _cst_266[51380224];
extern int32_t _cst_267[1];
extern float32_t _cst_268[3211264];
extern float32_t _cst_269[25088];
extern int32_t _cst_270[1];
extern float32_t _cst_271[3211264];
extern float32_t _cst_272[3211264];
extern float32_t _cst_273[903168];
extern int32_t _cst_274[1];
extern float32_t _cst_275[225792];
extern float32_t _cst_276[25088];
extern int32_t _cst_277[9];
extern float32_t _cst_278[51380224];
extern int32_t _cst_279[1];
extern float32_t _cst_280[3211264];
extern float32_t _cst_281[25088];
extern int32_t _cst_282[1];
extern float32_t _cst_283[3211264];
extern float32_t _cst_284[3211264];
extern float32_t _cst_285[903168];
extern int32_t _cst_286[1];
extern float32_t _cst_287[225792];
extern float32_t _cst_288[25088];
extern int32_t _cst_289[9];
extern float32_t _cst_290[51380224];
extern int32_t _cst_291[1];
extern float32_t _cst_292[3211264];
extern float32_t _cst_293[25088];
extern int32_t _cst_294[1];
extern float32_t _cst_295[3211264];
extern float32_t _cst_296[3211264];
extern float32_t _cst_297[903168];
extern int32_t _cst_298[1];
extern float32_t _cst_299[225792];
extern float32_t _cst_300[25088];
extern int32_t _cst_301[9];
extern float32_t _cst_302[51380224];
extern int32_t _cst_303[1];
extern float32_t _cst_304[3211264];
extern float32_t _cst_305[25088];
extern int32_t _cst_306[1];
extern float32_t _cst_307[3211264];
extern float32_t _cst_308[3211264];
extern float32_t _cst_309[903168];
extern int32_t _cst_310[1];
extern float32_t _cst_311[225792];
extern float32_t _cst_312[25088];
extern int32_t _cst_313[9];
extern float32_t _cst_314[702464];
extern float32_t _cst_315[802816];
extern float32_t _cst_316[25690112];
extern int32_t _cst_317[1];
extern float32_t _cst_318[12845056];
extern float32_t _cst_319[25088];
extern int32_t _cst_320[1];
extern float32_t _cst_321[12845056];
extern float32_t _cst_322[12845056];
extern float32_t _cst_323[451584];
extern int32_t _cst_324[1];
extern float32_t _cst_325[225792];
extern float32_t _cst_326[25088];
extern int32_t _cst_327[9];
extern float32_t _cst_328[51380224];
extern int32_t _cst_329[1];
extern float32_t _cst_330[12845056];
extern float32_t _cst_331[25088];
extern int32_t _cst_332[1];
extern float32_t _cst_333[12845056];
extern float32_t _cst_334[12845056];
float32_t _cst_335 = 0.02040816326530612244846;
extern float32_t _cst_336[25088];
extern float32_t _cst_337[275968];
extern int32_t _cst_338[1];
extern float32_t _cst_339[1179648];
extern int32_t _cst_340[8];
extern float32_t _cst_341[1000];
float32_t _cst_342 = -1;
float32_t _cst_343 = -1;
float64_t _cst_344 = -3.809199432496630510769;
float32_t _cst_345 = -3.809199432496630510769;
float64_t _cst_346 = 2.460940868770910228136;
float32_t _cst_347 = 2.460940868770910228136;
float64_t _cst_348 = -1.430304794543664215212;
float32_t _cst_349 = -1.430304794543664215212;
float64_t _cst_350 = 2.944661935353764636858;
float32_t _cst_351 = 2.944661935353764636858;
float32_t _cst_352 = -1;
float32_t _cst_353 = -1;
float32_t _cst_354 = -1;
float32_t _cst_355 = -1;
float64_t _cst_356 = -0.0001600280537250875771867;
float32_t _cst_357 = -0.0001600280537250875771867;
float64_t _cst_358 = 0.003032478474127557870749;
float32_t _cst_359 = 0.003032478474127557870749;
float64_t _cst_360 = 0.1365828361194337536855;
float32_t _cst_361 = 0.1365828361194337536855;
float64_t _cst_362 = -0.02219735858216702675816;
float64_t _cst_363 = 0.5685231134608953462717;
float32_t _cst_364 = 0.5685231134608953462717;
float64_t _cst_365 = -0.5558785316215136829143;
float64_t _cst_366 = 1.614771079042867985009;
float32_t _cst_367 = 1.614771079042867985009;
float64_t _cst_368 = -0.6164083583294512891371;
float32_t _cst_369 = -1;
float32_t _cst_370 = -1;
float32_t _cst_371 = -1;
float32_t _cst_372 = -1;
float64_t _cst_373 = 0.0001111119162030077897477;
float32_t _cst_374 = 0.0001111119162030077897477;
float64_t _cst_375 = 0.006507995190210730772351;
float32_t _cst_376 = 0.006507995190210730772351;
float64_t _cst_377 = -0.0009371069270347270278171;
float32_t _cst_378 = -0.0009371069270347270278171;
float64_t _cst_379 = 0.1056744718173614761003;
float32_t _cst_380 = 0.1056744718173614761003;
float64_t _cst_381 = -0.03691063940349948585551;
float32_t _cst_382 = -0.03691063940349948585551;
float64_t _cst_383 = 0.6334139843709288841822;
float32_t _cst_384 = 0.6334139843709288841822;
float64_t _cst_385 = -0.2078597158810965850329;
float32_t _cst_386 = -0.2078597158810965850329;
float32_t _cst_387 = 0.5;
float32_t _cst_388 = 0.01000000000000000020817;
float32_t _cst_389 = 0.01000000000000000020817;
float32_t _cst_390 = 0.01000000000000000020817;
float32_t _cst_391 = 0.01000000000000000020817;
float32_t _cst_392 = 0.01000000000000000020817;
float32_t _cst_393 = 0.01000000000000000020817;
float32_t _cst_394 = 0.01000000000000000020817;
float32_t _cst_395 = 0.01000000000000000020817;
float32_t _cst_396 = 0.01000000000000000020817;
float32_t _cst_397 = 0.01000000000000000020817;
float32_t _cst_398 = 0.01000000000000000020817;
float32_t _cst_399 = 0.01000000000000000020817;
float32_t _cst_400 = 0.01000000000000000020817;
float32_t _cst_401 = 0.01000000000000000020817;
float32_t _cst_402 = 0.01000000000000000020817;
float32_t _cst_403 = 0.01000000000000000020817;
float32_t _cst_404 = 0.01000000000000000020817;
float32_t _cst_405 = 0.01000000000000000020817;
float32_t _cst_406 = 0.01000000000000000020817;
float32_t _cst_407 = 0.01000000000000000020817;
float32_t _cst_408 = 0.01000000000000000020817;
float32_t _cst_409 = 0.01000000000000000020817;
float32_t _cst_410 = 0.01000000000000000020817;
float32_t _cst_411 = 0.01000000000000000020817;
float32_t _cst_412 = 0.01000000000000000020817;
float32_t _cst_413 = 0.01000000000000000020817;
float32_t _cst_414 = 0.01000000000000000020817;
CIPHERTEXT App_relu(CIPHERTEXT input_ct0, CIPHERTEXT input_ct1, uint32_t mask_len);
CIPHERTEXT Rotate(CIPHERTEXT ciph, int32_t rot_idx);
CIPHERTEXT Relinearize(CIPHERTEXT3 ciph);

bool Main_graph() {
  CIPHERTEXT input_0[6];
  CIPHERTEXT VS_out_conv1_1[64];
  CIPHERTEXT VS_out_conv_halo1_2[64];
  int32_t mesh_y_n1_3;
  int32_t mesh_z_n1_4;
  CIPHERTEXT input_dup_n27_5;
  int32_t bs_input_n27_6;
  CIPHERTEXT input_block_n27_7[9];
  int32_t mesh_x_n1_8;
  CIPHERTEXT result_n28_9;
  int32_t num_grid_n28_10;
  CIPHERTEXT result_grid_n28_11;
  int32_t cap_block_n28_12;
  int32_t siv_n1_13;
  CIPHERTEXT x_row28_14;
  CIPHERTEXT comb_row_result29_15;
  int32_t comb_row_lf_index_n29_16;
  int32_t comb_row_index_n29_17;
  CIPHERTEXT comb_rc_result29_18;
  int32_t comb_rc_lf_index_n29_19;
  int32_t comb_rc_index_n29_20;
  int32_t reshardm_n1_21;
  CIPHERTEXT output_reshard1_22[16];
  CIPHERTEXT VS_out_relu1_23[16];
  int32_t mesh_y_n1_24;
  int32_t mesh_z_n1_25;
  CIPHERTEXT VS_out_conv2_26[16];
  CIPHERTEXT VS_out_conv_halo2_27[16];
  int32_t mesh_y_n2_28;
  int32_t mesh_z_n2_29;
  int32_t mesh_x_n2_30;
  CIPHERTEXT input_dup_n29_31;
  int32_t bs_input_n29_32;
  CIPHERTEXT input_block_n29_33[9];
  CIPHERTEXT result_n30_34;
  int32_t num_grid_n30_35;
  CIPHERTEXT result_grid_n30_36;
  int32_t cap_block_n30_37;
  CIPHERTEXT VS_out_relu2_38[16];
  int32_t mesh_y_n2_39;
  int32_t mesh_z_n2_40;
  CIPHERTEXT VS_out_conv3_41[32];
  CIPHERTEXT VS_out_conv_halo3_42[32];
  int32_t mesh_y_n3_43;
  int32_t mesh_z_n3_44;
  CIPHERTEXT input_dup_n30_45;
  int32_t bs_input_n30_46;
  CIPHERTEXT input_block_n30_47[1];
  int32_t mesh_x_n3_48;
  CIPHERTEXT result_n31_49;
  int32_t num_grid_n31_50;
  CIPHERTEXT result_grid_n31_51;
  int32_t cap_block_n31_52;
  CIPHERTEXT VS_out_relu3_53[32];
  int32_t mesh_y_n3_54;
  int32_t mesh_z_n3_55;
  CIPHERTEXT VS_out_conv4_56[32];
  CIPHERTEXT VS_out_conv_halo4_57[32];
  int32_t mesh_y_n4_58;
  int32_t mesh_z_n4_59;
  int32_t mesh_x_n4_60;
  CIPHERTEXT input_dup_n31_61;
  int32_t bs_input_n31_62;
  CIPHERTEXT input_block_n31_63[9];
  CIPHERTEXT result_n32_64;
  int32_t num_grid_n32_65;
  CIPHERTEXT result_grid_n32_66;
  int32_t cap_block_n32_67;
  int32_t siv_n4_68;
  CIPHERTEXT orig_result32_69;
  CIPHERTEXT comb_row_result33_70;
  int32_t comb_row_lf_index_n33_71;
  int32_t comb_row_index_n33_72;
  CIPHERTEXT comb_rc_result33_73;
  int32_t comb_rc_lf_index_n33_74;
  int32_t comb_rc_index_n33_75;
  CIPHERTEXT ss_result33_76;
  int32_t comb_cc_index_n33_77;
  int32_t reshardm_n4_78;
  CIPHERTEXT output_reshard4_79[8];
  CIPHERTEXT VS_out_relu4_80[8];
  int32_t mesh_y_n4_81;
  int32_t mesh_z_n4_82;
  CIPHERTEXT VS_out_conv5_83[16];
  CIPHERTEXT VS_out_conv_halo5_84[16];
  int32_t mesh_y_n5_85;
  int32_t mesh_z_n5_86;
  CIPHERTEXT input_dup_n33_87;
  int32_t bs_input_n33_88;
  CIPHERTEXT input_block_n33_89[1];
  int32_t mesh_x_n5_90;
  CIPHERTEXT result_n34_91;
  int32_t num_grid_n34_92;
  CIPHERTEXT result_grid_n34_93;
  int32_t cap_block_n34_94;
  CIPHERTEXT VS_out_relu5_95[16];
  int32_t mesh_y_n5_96;
  int32_t mesh_z_n5_97;
  CIPHERTEXT VS_out_conv6_98[16];
  CIPHERTEXT VS_out_conv_halo6_99[16];
  int32_t mesh_y_n6_100;
  int32_t mesh_z_n6_101;
  int32_t mesh_x_n6_102;
  CIPHERTEXT input_dup_n34_103;
  int32_t bs_input_n34_104;
  CIPHERTEXT input_block_n34_105[9];
  CIPHERTEXT result_n35_106;
  int32_t num_grid_n35_107;
  CIPHERTEXT result_grid_n35_108;
  int32_t cap_block_n35_109;
  CIPHERTEXT VS_out_relu6_110[16];
  int32_t mesh_y_n6_111;
  int32_t mesh_z_n6_112;
  CIPHERTEXT VS_out_conv7_113[16];
  CIPHERTEXT VS_out_conv_halo7_114[16];
  int32_t mesh_y_n7_115;
  int32_t mesh_z_n7_116;
  CIPHERTEXT input_dup_n35_117;
  int32_t bs_input_n35_118;
  CIPHERTEXT input_block_n35_119[1];
  int32_t mesh_x_n7_120;
  CIPHERTEXT result_n36_121;
  int32_t num_grid_n36_122;
  CIPHERTEXT result_grid_n36_123;
  int32_t cap_block_n36_124;
  CIPHERTEXT VS_out_relu7_125[16];
  int32_t mesh_y_n7_126;
  int32_t mesh_z_n7_127;
  CIPHERTEXT VS_out_conv8_128[16];
  CIPHERTEXT VS_out_conv_halo8_129[16];
  int32_t mesh_y_n8_130;
  int32_t mesh_z_n8_131;
  int32_t mesh_x_n8_132;
  CIPHERTEXT input_dup_n36_133;
  int32_t bs_input_n36_134;
  CIPHERTEXT input_block_n36_135[9];
  CIPHERTEXT result_n37_136;
  int32_t num_grid_n37_137;
  CIPHERTEXT result_grid_n37_138;
  int32_t cap_block_n37_139;
  int32_t siv_n8_140;
  CIPHERTEXT orig_result37_141;
  CIPHERTEXT comb_row_result38_142;
  int32_t comb_row_lf_index_n38_143;
  int32_t comb_row_index_n38_144;
  CIPHERTEXT comb_rc_result38_145;
  int32_t comb_rc_lf_index_n38_146;
  int32_t comb_rc_index_n38_147;
  CIPHERTEXT ss_result38_148;
  int32_t comb_cc_lf_index_n38_149;
  int32_t comb_cc_index_n38_150;
  int32_t reshardm_n8_151;
  CIPHERTEXT output_reshard8_152[4];
  CIPHERTEXT VS_out_relu8_153[4];
  int32_t mesh_y_n8_154;
  int32_t mesh_z_n8_155;
  CIPHERTEXT VS_out_conv9_156[8];
  CIPHERTEXT VS_out_conv_halo9_157[8];
  int32_t mesh_y_n9_158;
  int32_t mesh_z_n9_159;
  CIPHERTEXT input_dup_n38_160;
  int32_t bs_input_n38_161;
  CIPHERTEXT input_block_n38_162[1];
  int32_t mesh_x_n9_163;
  CIPHERTEXT result_n39_164;
  int32_t num_grid_n39_165;
  CIPHERTEXT result_grid_n39_166;
  int32_t cap_block_n39_167;
  CIPHERTEXT VS_out_relu9_168[8];
  int32_t mesh_y_n9_169;
  int32_t mesh_z_n9_170;
  CIPHERTEXT VS_out_conv10_171[8];
  CIPHERTEXT VS_out_conv_halo10_172[8];
  int32_t mesh_y_n10_173;
  int32_t mesh_z_n10_174;
  int32_t mesh_x_n10_175;
  CIPHERTEXT input_dup_n39_176;
  int32_t bs_input_n39_177;
  CIPHERTEXT input_block_n39_178[9];
  CIPHERTEXT result_n40_179;
  int32_t num_grid_n40_180;
  CIPHERTEXT result_grid_n40_181;
  int32_t cap_block_n40_182;
  CIPHERTEXT VS_out_relu10_183[8];
  int32_t mesh_y_n10_184;
  int32_t mesh_z_n10_185;
  CIPHERTEXT VS_out_conv11_186[8];
  CIPHERTEXT VS_out_conv_halo11_187[8];
  int32_t mesh_y_n11_188;
  int32_t mesh_z_n11_189;
  CIPHERTEXT input_dup_n40_190;
  int32_t bs_input_n40_191;
  CIPHERTEXT input_block_n40_192[1];
  int32_t mesh_x_n11_193;
  CIPHERTEXT result_n41_194;
  int32_t num_grid_n41_195;
  CIPHERTEXT result_grid_n41_196;
  int32_t cap_block_n41_197;
  CIPHERTEXT VS_out_relu11_198[8];
  int32_t mesh_y_n11_199;
  int32_t mesh_z_n11_200;
  CIPHERTEXT VS_out_conv12_201[8];
  CIPHERTEXT VS_out_conv_halo12_202[8];
  int32_t mesh_y_n12_203;
  int32_t mesh_z_n12_204;
  int32_t mesh_x_n12_205;
  CIPHERTEXT input_dup_n41_206;
  int32_t bs_input_n41_207;
  CIPHERTEXT input_block_n41_208[9];
  CIPHERTEXT result_n42_209;
  int32_t num_grid_n42_210;
  CIPHERTEXT result_grid_n42_211;
  int32_t cap_block_n42_212;
  int32_t siv_n12_213;
  CIPHERTEXT orig_result42_214;
  CIPHERTEXT comb_row_result43_215;
  int32_t comb_row_lf_index_n43_216;
  int32_t comb_row_index_n43_217;
  CIPHERTEXT comb_rc_result43_218;
  int32_t comb_rc_lf_index_n43_219;
  int32_t comb_rc_index_n43_220;
  CIPHERTEXT ss_result43_221;
  int32_t comb_cc_lf_index_n43_222;
  int32_t comb_cc_index_n43_223;
  int32_t reshardm_n12_224;
  CIPHERTEXT output_reshard12_225[2];
  CIPHERTEXT VS_out_relu12_226[2];
  int32_t mesh_y_n12_227;
  int32_t mesh_z_n12_228;
  CIPHERTEXT VS_out_conv13_229[4];
  CIPHERTEXT VS_out_conv_halo13_230[4];
  int32_t mesh_y_n13_231;
  int32_t mesh_z_n13_232;
  CIPHERTEXT input_dup_n43_233;
  int32_t bs_input_n43_234;
  CIPHERTEXT input_block_n43_235[1];
  int32_t mesh_x_n13_236;
  CIPHERTEXT result_n44_237;
  int32_t num_grid_n44_238;
  CIPHERTEXT result_grid_n44_239;
  int32_t cap_block_n44_240;
  CIPHERTEXT VS_out_relu13_241[4];
  int32_t mesh_y_n13_242;
  int32_t mesh_z_n13_243;
  CIPHERTEXT VS_out_conv14_244[4];
  CIPHERTEXT VS_out_conv_halo14_245[4];
  int32_t mesh_y_n14_246;
  int32_t mesh_z_n14_247;
  int32_t mesh_x_n14_248;
  CIPHERTEXT input_dup_n44_249;
  int32_t bs_input_n44_250;
  CIPHERTEXT input_block_n44_251[9];
  CIPHERTEXT result_n45_252;
  int32_t num_grid_n45_253;
  CIPHERTEXT result_grid_n45_254;
  int32_t cap_block_n45_255;
  CIPHERTEXT VS_out_relu14_256[4];
  int32_t mesh_y_n14_257;
  int32_t mesh_z_n14_258;
  CIPHERTEXT VS_out_conv15_259[4];
  CIPHERTEXT VS_out_conv_halo15_260[4];
  int32_t mesh_y_n15_261;
  int32_t mesh_z_n15_262;
  CIPHERTEXT input_dup_n45_263;
  int32_t bs_input_n45_264;
  CIPHERTEXT input_block_n45_265[1];
  int32_t mesh_x_n15_266;
  CIPHERTEXT result_n46_267;
  int32_t num_grid_n46_268;
  CIPHERTEXT result_grid_n46_269;
  int32_t cap_block_n46_270;
  CIPHERTEXT VS_out_relu15_271[4];
  int32_t mesh_y_n15_272;
  int32_t mesh_z_n15_273;
  CIPHERTEXT VS_out_conv16_274[4];
  CIPHERTEXT VS_out_conv_halo16_275[4];
  int32_t mesh_y_n16_276;
  int32_t mesh_z_n16_277;
  int32_t mesh_x_n16_278;
  CIPHERTEXT input_dup_n46_279;
  int32_t bs_input_n46_280;
  CIPHERTEXT input_block_n46_281[9];
  CIPHERTEXT result_n47_282;
  int32_t num_grid_n47_283;
  CIPHERTEXT result_grid_n47_284;
  int32_t cap_block_n47_285;
  CIPHERTEXT VS_out_relu16_286[4];
  int32_t mesh_y_n16_287;
  int32_t mesh_z_n16_288;
  CIPHERTEXT VS_out_conv17_289[4];
  CIPHERTEXT VS_out_conv_halo17_290[4];
  int32_t mesh_y_n17_291;
  int32_t mesh_z_n17_292;
  CIPHERTEXT input_dup_n47_293;
  int32_t bs_input_n47_294;
  CIPHERTEXT input_block_n47_295[1];
  int32_t mesh_x_n17_296;
  CIPHERTEXT result_n48_297;
  int32_t num_grid_n48_298;
  CIPHERTEXT result_grid_n48_299;
  int32_t cap_block_n48_300;
  CIPHERTEXT VS_out_relu17_301[4];
  int32_t mesh_y_n17_302;
  int32_t mesh_z_n17_303;
  CIPHERTEXT VS_out_conv18_304[4];
  CIPHERTEXT VS_out_conv_halo18_305[4];
  int32_t mesh_y_n18_306;
  int32_t mesh_z_n18_307;
  int32_t mesh_x_n18_308;
  CIPHERTEXT input_dup_n48_309;
  int32_t bs_input_n48_310;
  CIPHERTEXT input_block_n48_311[9];
  CIPHERTEXT result_n49_312;
  int32_t num_grid_n49_313;
  CIPHERTEXT result_grid_n49_314;
  int32_t cap_block_n49_315;
  CIPHERTEXT VS_out_relu18_316[4];
  int32_t mesh_y_n18_317;
  int32_t mesh_z_n18_318;
  CIPHERTEXT VS_out_conv19_319[4];
  CIPHERTEXT VS_out_conv_halo19_320[4];
  int32_t mesh_y_n19_321;
  int32_t mesh_z_n19_322;
  CIPHERTEXT input_dup_n49_323;
  int32_t bs_input_n49_324;
  CIPHERTEXT input_block_n49_325[1];
  int32_t mesh_x_n19_326;
  CIPHERTEXT result_n50_327;
  int32_t num_grid_n50_328;
  CIPHERTEXT result_grid_n50_329;
  int32_t cap_block_n50_330;
  CIPHERTEXT VS_out_relu19_331[4];
  int32_t mesh_y_n19_332;
  int32_t mesh_z_n19_333;
  CIPHERTEXT VS_out_conv20_334[4];
  CIPHERTEXT VS_out_conv_halo20_335[4];
  int32_t mesh_y_n20_336;
  int32_t mesh_z_n20_337;
  int32_t mesh_x_n20_338;
  CIPHERTEXT input_dup_n50_339;
  int32_t bs_input_n50_340;
  CIPHERTEXT input_block_n50_341[9];
  CIPHERTEXT result_n51_342;
  int32_t num_grid_n51_343;
  CIPHERTEXT result_grid_n51_344;
  int32_t cap_block_n51_345;
  CIPHERTEXT VS_out_relu20_346[4];
  int32_t mesh_y_n20_347;
  int32_t mesh_z_n20_348;
  CIPHERTEXT VS_out_conv21_349[4];
  CIPHERTEXT VS_out_conv_halo21_350[4];
  int32_t mesh_y_n21_351;
  int32_t mesh_z_n21_352;
  CIPHERTEXT input_dup_n51_353;
  int32_t bs_input_n51_354;
  CIPHERTEXT input_block_n51_355[1];
  int32_t mesh_x_n21_356;
  CIPHERTEXT result_n52_357;
  int32_t num_grid_n52_358;
  CIPHERTEXT result_grid_n52_359;
  int32_t cap_block_n52_360;
  CIPHERTEXT VS_out_relu21_361[4];
  int32_t mesh_y_n21_362;
  int32_t mesh_z_n21_363;
  CIPHERTEXT VS_out_conv22_364[4];
  CIPHERTEXT VS_out_conv_halo22_365[4];
  int32_t mesh_y_n22_366;
  int32_t mesh_z_n22_367;
  int32_t mesh_x_n22_368;
  CIPHERTEXT input_dup_n52_369;
  int32_t bs_input_n52_370;
  CIPHERTEXT input_block_n52_371[9];
  CIPHERTEXT result_n53_372;
  int32_t num_grid_n53_373;
  CIPHERTEXT result_grid_n53_374;
  int32_t cap_block_n53_375;
  CIPHERTEXT VS_out_relu22_376[4];
  int32_t mesh_y_n22_377;
  int32_t mesh_z_n22_378;
  CIPHERTEXT VS_out_conv23_379[4];
  CIPHERTEXT VS_out_conv_halo23_380[4];
  int32_t mesh_y_n23_381;
  int32_t mesh_z_n23_382;
  CIPHERTEXT input_dup_n53_383;
  int32_t bs_input_n53_384;
  CIPHERTEXT input_block_n53_385[1];
  int32_t mesh_x_n23_386;
  CIPHERTEXT result_n54_387;
  int32_t num_grid_n54_388;
  CIPHERTEXT result_grid_n54_389;
  int32_t cap_block_n54_390;
  CIPHERTEXT VS_out_relu23_391[4];
  int32_t mesh_y_n23_392;
  int32_t mesh_z_n23_393;
  CIPHERTEXT VS_out_conv24_394[4];
  CIPHERTEXT VS_out_conv_halo24_395[4];
  int32_t mesh_y_n24_396;
  int32_t mesh_z_n24_397;
  int32_t mesh_x_n24_398;
  CIPHERTEXT input_dup_n54_399;
  int32_t bs_input_n54_400;
  CIPHERTEXT input_block_n54_401[9];
  CIPHERTEXT result_n55_402;
  int32_t num_grid_n55_403;
  CIPHERTEXT result_grid_n55_404;
  int32_t cap_block_n55_405;
  int32_t siv_n24_406;
  CIPHERTEXT orig_result55_407;
  CIPHERTEXT comb_dic_result56_408;
  int32_t comb_dic_index_n56_409;
  int32_t comb_dic_index_out_n56_410;
  int32_t comb_dic_index_in_n56_411;
  CIPHERTEXT ss_result56_412;
  int32_t comb_cc_lf_index_n56_413;
  int32_t comb_cc_index_n56_414;
  int32_t reshard1_n24_415;
  CIPHERTEXT output_reshard24_416;
  CIPHERTEXT VS_out_conv25_417[2];
  CIPHERTEXT VS_out_conv_halo25_418[2];
  int32_t mesh_y_n25_419;
  int32_t mesh_z_n25_420;
  CIPHERTEXT input_dup_n56_421;
  int32_t bs_input_n56_422;
  CIPHERTEXT input_block_n56_423[1];
  int32_t mesh_x_n25_424;
  CIPHERTEXT result_n57_425;
  int32_t num_grid_n57_426;
  CIPHERTEXT result_grid_n57_427;
  int32_t cap_block_n57_428;
  CIPHERTEXT VS_out_relu25_429[2];
  int32_t mesh_y_n25_430;
  int32_t mesh_z_n25_431;
  CIPHERTEXT VS_out_conv26_432[2];
  CIPHERTEXT VS_out_conv_halo26_433[2];
  int32_t mesh_y_n26_434;
  int32_t mesh_z_n26_435;
  int32_t mesh_x_n26_436;
  CIPHERTEXT input_dup_n57_437;
  int32_t bs_input_n57_438;
  CIPHERTEXT input_block_n57_439[9];
  CIPHERTEXT result_n58_440;
  int32_t num_grid_n58_441;
  CIPHERTEXT result_grid_n58_442;
  int32_t cap_block_n58_443;
  CIPHERTEXT VS_out_relu26_444[2];
  int32_t mesh_y_n26_445;
  int32_t mesh_z_n26_446;
  CIPHERTEXT VS_out_conv27_447[2];
  CIPHERTEXT VS_out_conv_halo27_448[2];
  int32_t mesh_y_n27_449;
  int32_t mesh_z_n27_450;
  CIPHERTEXT input_dup_n58_451;
  int32_t bs_input_n58_452;
  CIPHERTEXT input_block_n58_453[1];
  int32_t mesh_x_n27_454;
  CIPHERTEXT result_n59_455;
  int32_t num_grid_n59_456;
  CIPHERTEXT result_grid_n59_457;
  int32_t cap_block_n59_458;
  CIPHERTEXT VS_out_relu27_459[2];
  int32_t mesh_y_n27_460;
  int32_t mesh_z_n27_461;
  CIPHERTEXT VS_out_gap27_462[2];
  int32_t mesh_y_n27_463;
  int32_t mesh_z_n27_464;
  int32_t gap_sum_index_n59_465;
  CIPHERTEXT gap_result59_466;
  CIPHERTEXT orig_result59_467;
  CIPHERTEXT ss_result60_468;
  int32_t comb_cc_lf_index_n60_469;
  int32_t comb_cc_index_n60_470;
  CIPHERTEXT input_dup_n60_471;
  int32_t bs_input_n60_472;
  CIPHERTEXT input_block_n60_473[8];
  CIPHERTEXT gemm_result_n61_474;
  int32_t gs_n61_475;
  CIPHERTEXT block_result_476;
  int32_t bs_n61_477;
  CIPHERTEXT reduce_intra_478;
  int32_t ri_n61_479;
  CIPHERTEXT output_480;
  CIPHERTEXT _ckks_gen_tmp_102_481;
  CIPHERTEXT _ckks_gen_tmp_221_482;
  CIPHERTEXT _ckks_gen_tmp_274_483;
  CIPHERTEXT _ckks_gen_tmp_516_484;
  CIPHERTEXT _ckks_gen_tmp_751_485;
  CIPHERTEXT _ckks_gen_tmp_1016_486;
  CIPHERTEXT _ckks_gen_tmp_1133_487;
  CIPHERTEXT _ckks_gen_tmp_1186_488;
  CIPHERTEXT _ckks_gen_tmp_1462_489;
  CIPHERTEXT _ckks_gen_tmp_1727_490;
  CIPHERTEXT _ckks_gen_tmp_1962_491;
  CIPHERTEXT _ckks_gen_tmp_2227_492;
  CIPHERTEXT _ckks_gen_tmp_2344_493;
  CIPHERTEXT _ckks_gen_tmp_2397_494;
  CIPHERTEXT _ckks_gen_tmp_2450_495;
  CIPHERTEXT _ckks_gen_tmp_2692_496;
  CIPHERTEXT _ckks_gen_tmp_2957_497;
  CIPHERTEXT _ckks_gen_tmp_3192_498;
  CIPHERTEXT _ckks_gen_tmp_3457_499;
  CIPHERTEXT _ckks_gen_tmp_3574_500;
  CIPHERTEXT _ckks_gen_tmp_3627_501;
  CIPHERTEXT _ckks_gen_tmp_3680_502;
  CIPHERTEXT _ckks_gen_tmp_3922_503;
  CIPHERTEXT _ckks_gen_tmp_4187_504;
  CIPHERTEXT _ckks_gen_tmp_4422_505;
  CIPHERTEXT _ckks_gen_tmp_4687_506;
  CIPHERTEXT _ckks_gen_tmp_4922_507;
  CIPHERTEXT _ckks_gen_tmp_5187_508;
  CIPHERTEXT _ckks_gen_tmp_5422_509;
  CIPHERTEXT _ckks_gen_tmp_5687_510;
  CIPHERTEXT _ckks_gen_tmp_5922_511;
  CIPHERTEXT _ckks_gen_tmp_6187_512;
  CIPHERTEXT _ckks_gen_tmp_6422_513;
  CIPHERTEXT _ckks_gen_tmp_6687_514;
  CIPHERTEXT _ckks_gen_tmp_6818_515;
  CIPHERTEXT _ckks_gen_tmp_6875_516;
  CIPHERTEXT _ckks_gen_tmp_7054_517;
  CIPHERTEXT _ckks_gen_tmp_7319_518;
  CIPHERTEXT _ckks_gen_tmp_7554_519;
  CIPHERTEXT _ckks_gen_tmp_7831_520;
  CIPHERTEXT _ckks_gen_tmp_7972_521;
  int32_t rescale_iv_522;
  int32_t rescale_iv_523;
  int32_t rescale_iv_524;
  int32_t rescale_iv_525;
  int32_t rescale_iv_526;
  int32_t rescale_iv_527;
  int32_t rescale_iv_528;
  int32_t rescale_iv_529;
  int32_t rescale_iv_530;
  int32_t rescale_iv_531;
  int32_t rescale_iv_532;
  int32_t rescale_iv_533;
  int32_t rescale_iv_534;
  int32_t rescale_iv_535;
  int32_t rescale_iv_536;
  int32_t rescale_iv_537;
  int32_t rescale_iv_538;
  int32_t rescale_iv_539;
  int32_t rescale_iv_540;
  int32_t rescale_iv_541;
  int32_t rescale_iv_542;
  int32_t rescale_iv_543;
  int32_t rescale_iv_544;
  int32_t rescale_iv_545;
  int32_t rescale_iv_546;
  int32_t rescale_iv_547;
  int32_t rescale_iv_548;
  int32_t rescale_iv_549;
  int32_t rescale_iv_550;
  int32_t rescale_iv_551;
  int32_t rescale_iv_552;
  int32_t rescale_iv_553;
  int32_t rescale_iv_554;
  MODULUS* _pgen_modulus_555;
  uint32_t _pgen_num_q_556;
  uint32_t _pgen_rns_idx_557;
  PLAINTEXT _pgen_tmp_0_558;
  CIPHERTEXT _pgen_tmp_1_559;
  PLAINTEXT _pgen_tmp_2_560;
  CIPHERTEXT _pgen_tmp_3_561;
  CIPHERTEXT _pgen_tmp_4_562;
  CIPHERTEXT _pgen_tmp_5_563;
  CIPHERTEXT _pgen_tmp_6_564;
  CIPHERTEXT _pgen_tmp_7_565;
  PLAINTEXT _pgen_tmp_8_566;
  CIPHERTEXT _pgen_tmp_9_567;
  CIPHERTEXT _pgen_tmp_10_568;
  PLAINTEXT _pgen_tmp_11_569;
  CIPHERTEXT _pgen_tmp_12_570;
  CIPHERTEXT _pgen_tmp_13_571;
  CIPHERTEXT _pgen_tmp_14_572;
  CIPHERTEXT _pgen_tmp_15_573;
  CIPHERTEXT _pgen_tmp_16_574;
  CIPHERTEXT _pgen_tmp_17_575;
  CIPHERTEXT _pgen_tmp_18_576;
  CIPHERTEXT _pgen_tmp_19_577;
  CIPHERTEXT _pgen_tmp_20_578;
  CIPHERTEXT _pgen_tmp_21_579;
  CIPHERTEXT _pgen_tmp_22_580;
  PLAINTEXT _pgen_tmp_23_581;
  CIPHERTEXT _pgen_tmp_24_582;
  CIPHERTEXT _pgen_tmp_25_583;
  CIPHERTEXT _pgen_tmp_26_584;
  PLAINTEXT _pgen_tmp_27_585;
  CIPHERTEXT _pgen_tmp_28_586;
  PLAINTEXT _pgen_tmp_29_587;
  CIPHERTEXT _pgen_tmp_30_588;
  CIPHERTEXT _pgen_tmp_31_589;
  CIPHERTEXT _pgen_tmp_32_590;
  CIPHERTEXT _pgen_tmp_33_591;
  CIPHERTEXT _pgen_tmp_34_592;
  PLAINTEXT _pgen_tmp_35_593;
  CIPHERTEXT _pgen_tmp_36_594;
  CIPHERTEXT _pgen_tmp_37_595;
  CIPHERTEXT _pgen_tmp_38_596;
  PLAINTEXT _pgen_tmp_39_597;
  CIPHERTEXT _pgen_tmp_40_598;
  CIPHERTEXT _pgen_tmp_41_599;
  CIPHERTEXT _pgen_tmp_42_600;
  PLAINTEXT _pgen_tmp_43_601;
  CIPHERTEXT _pgen_tmp_44_602;
  CIPHERTEXT _pgen_tmp_45_603;
  PLAINTEXT _pgen_tmp_46_604;
  CIPHERTEXT _pgen_tmp_47_605;
  PLAINTEXT _pgen_tmp_48_606;
  CIPHERTEXT _pgen_tmp_49_607;
  CIPHERTEXT _pgen_tmp_50_608;
  CIPHERTEXT _pgen_tmp_51_609;
  CIPHERTEXT _pgen_tmp_52_610;
  CIPHERTEXT _pgen_tmp_53_611;
  PLAINTEXT _pgen_tmp_54_612;
  CIPHERTEXT _pgen_tmp_55_613;
  CIPHERTEXT _pgen_tmp_56_614;
  CIPHERTEXT _pgen_tmp_57_615;
  PLAINTEXT _pgen_tmp_58_616;
  CIPHERTEXT _pgen_tmp_59_617;
  PLAINTEXT _pgen_tmp_60_618;
  CIPHERTEXT _pgen_tmp_61_619;
  CIPHERTEXT _pgen_tmp_62_620;
  CIPHERTEXT _pgen_tmp_63_621;
  CIPHERTEXT _pgen_tmp_64_622;
  PLAINTEXT _pgen_tmp_65_623;
  CIPHERTEXT _pgen_tmp_66_624;
  CIPHERTEXT _pgen_tmp_67_625;
  PLAINTEXT _pgen_tmp_68_626;
  CIPHERTEXT _pgen_tmp_69_627;
  CIPHERTEXT _pgen_tmp_70_628;
  PLAINTEXT _pgen_tmp_71_629;
  CIPHERTEXT _pgen_tmp_72_630;
  CIPHERTEXT _pgen_tmp_73_631;
  CIPHERTEXT _pgen_tmp_74_632;
  CIPHERTEXT _pgen_tmp_75_633;
  CIPHERTEXT _pgen_tmp_76_634;
  CIPHERTEXT _pgen_tmp_77_635;
  CIPHERTEXT _pgen_tmp_78_636;
  CIPHERTEXT _pgen_tmp_79_637;
  CIPHERTEXT _pgen_tmp_80_638;
  CIPHERTEXT _pgen_tmp_81_639;
  PLAINTEXT _pgen_tmp_82_640;
  CIPHERTEXT _pgen_tmp_83_641;
  CIPHERTEXT _pgen_tmp_84_642;
  CIPHERTEXT _pgen_tmp_85_643;
  PLAINTEXT _pgen_tmp_86_644;
  CIPHERTEXT _pgen_tmp_87_645;
  CIPHERTEXT _pgen_tmp_88_646;
  CIPHERTEXT _pgen_tmp_89_647;
  PLAINTEXT _pgen_tmp_90_648;
  CIPHERTEXT _pgen_tmp_91_649;
  CIPHERTEXT _pgen_tmp_92_650;
  PLAINTEXT _pgen_tmp_93_651;
  CIPHERTEXT _pgen_tmp_94_652;
  PLAINTEXT _pgen_tmp_95_653;
  CIPHERTEXT _pgen_tmp_96_654;
  CIPHERTEXT _pgen_tmp_97_655;
  CIPHERTEXT _pgen_tmp_98_656;
  CIPHERTEXT _pgen_tmp_99_657;
  CIPHERTEXT _pgen_tmp_100_658;
  PLAINTEXT _pgen_tmp_101_659;
  CIPHERTEXT _pgen_tmp_102_660;
  CIPHERTEXT _pgen_tmp_103_661;
  CIPHERTEXT _pgen_tmp_104_662;
  PLAINTEXT _pgen_tmp_105_663;
  CIPHERTEXT _pgen_tmp_106_664;
  PLAINTEXT _pgen_tmp_107_665;
  CIPHERTEXT _pgen_tmp_108_666;
  CIPHERTEXT _pgen_tmp_109_667;
  CIPHERTEXT _pgen_tmp_110_668;
  CIPHERTEXT _pgen_tmp_111_669;
  CIPHERTEXT _pgen_tmp_112_670;
  PLAINTEXT _pgen_tmp_113_671;
  CIPHERTEXT _pgen_tmp_114_672;
  CIPHERTEXT _pgen_tmp_115_673;
  CIPHERTEXT _pgen_tmp_116_674;
  PLAINTEXT _pgen_tmp_117_675;
  CIPHERTEXT _pgen_tmp_118_676;
  CIPHERTEXT _pgen_tmp_119_677;
  CIPHERTEXT _pgen_tmp_120_678;
  PLAINTEXT _pgen_tmp_121_679;
  CIPHERTEXT _pgen_tmp_122_680;
  CIPHERTEXT _pgen_tmp_123_681;
  PLAINTEXT _pgen_tmp_124_682;
  CIPHERTEXT _pgen_tmp_125_683;
  PLAINTEXT _pgen_tmp_126_684;
  CIPHERTEXT _pgen_tmp_127_685;
  CIPHERTEXT _pgen_tmp_128_686;
  CIPHERTEXT _pgen_tmp_129_687;
  CIPHERTEXT _pgen_tmp_130_688;
  CIPHERTEXT _pgen_tmp_131_689;
  PLAINTEXT _pgen_tmp_132_690;
  CIPHERTEXT _pgen_tmp_133_691;
  CIPHERTEXT _pgen_tmp_134_692;
  CIPHERTEXT _pgen_tmp_135_693;
  PLAINTEXT _pgen_tmp_136_694;
  CIPHERTEXT _pgen_tmp_137_695;
  PLAINTEXT _pgen_tmp_138_696;
  CIPHERTEXT _pgen_tmp_139_697;
  CIPHERTEXT _pgen_tmp_140_698;
  CIPHERTEXT _pgen_tmp_141_699;
  CIPHERTEXT _pgen_tmp_142_700;
  PLAINTEXT _pgen_tmp_143_701;
  CIPHERTEXT _pgen_tmp_144_702;
  CIPHERTEXT _pgen_tmp_145_703;
  PLAINTEXT _pgen_tmp_146_704;
  CIPHERTEXT _pgen_tmp_147_705;
  CIPHERTEXT _pgen_tmp_148_706;
  PLAINTEXT _pgen_tmp_149_707;
  CIPHERTEXT _pgen_tmp_150_708;
  CIPHERTEXT _pgen_tmp_151_709;
  CIPHERTEXT _pgen_tmp_152_710;
  CIPHERTEXT _pgen_tmp_153_711;
  CIPHERTEXT _pgen_tmp_154_712;
  CIPHERTEXT _pgen_tmp_155_713;
  CIPHERTEXT _pgen_tmp_156_714;
  CIPHERTEXT _pgen_tmp_157_715;
  CIPHERTEXT _pgen_tmp_158_716;
  CIPHERTEXT _pgen_tmp_159_717;
  CIPHERTEXT _pgen_tmp_160_718;
  PLAINTEXT _pgen_tmp_161_719;
  CIPHERTEXT _pgen_tmp_162_720;
  CIPHERTEXT _pgen_tmp_163_721;
  CIPHERTEXT _pgen_tmp_164_722;
  PLAINTEXT _pgen_tmp_165_723;
  CIPHERTEXT _pgen_tmp_166_724;
  CIPHERTEXT _pgen_tmp_167_725;
  CIPHERTEXT _pgen_tmp_168_726;
  PLAINTEXT _pgen_tmp_169_727;
  CIPHERTEXT _pgen_tmp_170_728;
  CIPHERTEXT _pgen_tmp_171_729;
  PLAINTEXT _pgen_tmp_172_730;
  CIPHERTEXT _pgen_tmp_173_731;
  PLAINTEXT _pgen_tmp_174_732;
  CIPHERTEXT _pgen_tmp_175_733;
  CIPHERTEXT _pgen_tmp_176_734;
  CIPHERTEXT _pgen_tmp_177_735;
  CIPHERTEXT _pgen_tmp_178_736;
  CIPHERTEXT _pgen_tmp_179_737;
  PLAINTEXT _pgen_tmp_180_738;
  CIPHERTEXT _pgen_tmp_181_739;
  CIPHERTEXT _pgen_tmp_182_740;
  CIPHERTEXT _pgen_tmp_183_741;
  PLAINTEXT _pgen_tmp_184_742;
  CIPHERTEXT _pgen_tmp_185_743;
  PLAINTEXT _pgen_tmp_186_744;
  CIPHERTEXT _pgen_tmp_187_745;
  CIPHERTEXT _pgen_tmp_188_746;
  CIPHERTEXT _pgen_tmp_189_747;
  CIPHERTEXT _pgen_tmp_190_748;
  CIPHERTEXT _pgen_tmp_191_749;
  PLAINTEXT _pgen_tmp_192_750;
  CIPHERTEXT _pgen_tmp_193_751;
  CIPHERTEXT _pgen_tmp_194_752;
  CIPHERTEXT _pgen_tmp_195_753;
  PLAINTEXT _pgen_tmp_196_754;
  CIPHERTEXT _pgen_tmp_197_755;
  CIPHERTEXT _pgen_tmp_198_756;
  CIPHERTEXT _pgen_tmp_199_757;
  PLAINTEXT _pgen_tmp_200_758;
  CIPHERTEXT _pgen_tmp_201_759;
  CIPHERTEXT _pgen_tmp_202_760;
  PLAINTEXT _pgen_tmp_203_761;
  CIPHERTEXT _pgen_tmp_204_762;
  PLAINTEXT _pgen_tmp_205_763;
  CIPHERTEXT _pgen_tmp_206_764;
  CIPHERTEXT _pgen_tmp_207_765;
  CIPHERTEXT _pgen_tmp_208_766;
  CIPHERTEXT _pgen_tmp_209_767;
  CIPHERTEXT _pgen_tmp_210_768;
  PLAINTEXT _pgen_tmp_211_769;
  CIPHERTEXT _pgen_tmp_212_770;
  CIPHERTEXT _pgen_tmp_213_771;
  CIPHERTEXT _pgen_tmp_214_772;
  PLAINTEXT _pgen_tmp_215_773;
  CIPHERTEXT _pgen_tmp_216_774;
  PLAINTEXT _pgen_tmp_217_775;
  CIPHERTEXT _pgen_tmp_218_776;
  CIPHERTEXT _pgen_tmp_219_777;
  CIPHERTEXT _pgen_tmp_220_778;
  CIPHERTEXT _pgen_tmp_221_779;
  PLAINTEXT _pgen_tmp_222_780;
  CIPHERTEXT _pgen_tmp_223_781;
  CIPHERTEXT _pgen_tmp_224_782;
  PLAINTEXT _pgen_tmp_225_783;
  CIPHERTEXT _pgen_tmp_226_784;
  CIPHERTEXT _pgen_tmp_227_785;
  PLAINTEXT _pgen_tmp_228_786;
  CIPHERTEXT _pgen_tmp_229_787;
  CIPHERTEXT _pgen_tmp_230_788;
  CIPHERTEXT _pgen_tmp_231_789;
  CIPHERTEXT _pgen_tmp_232_790;
  CIPHERTEXT _pgen_tmp_233_791;
  CIPHERTEXT _pgen_tmp_234_792;
  CIPHERTEXT _pgen_tmp_235_793;
  CIPHERTEXT _pgen_tmp_236_794;
  CIPHERTEXT _pgen_tmp_237_795;
  CIPHERTEXT _pgen_tmp_238_796;
  CIPHERTEXT _pgen_tmp_239_797;
  PLAINTEXT _pgen_tmp_240_798;
  CIPHERTEXT _pgen_tmp_241_799;
  CIPHERTEXT _pgen_tmp_242_800;
  CIPHERTEXT _pgen_tmp_243_801;
  PLAINTEXT _pgen_tmp_244_802;
  CIPHERTEXT _pgen_tmp_245_803;
  CIPHERTEXT _pgen_tmp_246_804;
  CIPHERTEXT _pgen_tmp_247_805;
  PLAINTEXT _pgen_tmp_248_806;
  CIPHERTEXT _pgen_tmp_249_807;
  CIPHERTEXT _pgen_tmp_250_808;
  PLAINTEXT _pgen_tmp_251_809;
  CIPHERTEXT _pgen_tmp_252_810;
  PLAINTEXT _pgen_tmp_253_811;
  CIPHERTEXT _pgen_tmp_254_812;
  CIPHERTEXT _pgen_tmp_255_813;
  CIPHERTEXT _pgen_tmp_256_814;
  CIPHERTEXT _pgen_tmp_257_815;
  CIPHERTEXT _pgen_tmp_258_816;
  PLAINTEXT _pgen_tmp_259_817;
  CIPHERTEXT _pgen_tmp_260_818;
  CIPHERTEXT _pgen_tmp_261_819;
  CIPHERTEXT _pgen_tmp_262_820;
  PLAINTEXT _pgen_tmp_263_821;
  CIPHERTEXT _pgen_tmp_264_822;
  PLAINTEXT _pgen_tmp_265_823;
  CIPHERTEXT _pgen_tmp_266_824;
  CIPHERTEXT _pgen_tmp_267_825;
  CIPHERTEXT _pgen_tmp_268_826;
  CIPHERTEXT _pgen_tmp_269_827;
  CIPHERTEXT _pgen_tmp_270_828;
  PLAINTEXT _pgen_tmp_271_829;
  CIPHERTEXT _pgen_tmp_272_830;
  CIPHERTEXT _pgen_tmp_273_831;
  CIPHERTEXT _pgen_tmp_274_832;
  PLAINTEXT _pgen_tmp_275_833;
  CIPHERTEXT _pgen_tmp_276_834;
  CIPHERTEXT _pgen_tmp_277_835;
  CIPHERTEXT _pgen_tmp_278_836;
  PLAINTEXT _pgen_tmp_279_837;
  CIPHERTEXT _pgen_tmp_280_838;
  CIPHERTEXT _pgen_tmp_281_839;
  PLAINTEXT _pgen_tmp_282_840;
  CIPHERTEXT _pgen_tmp_283_841;
  PLAINTEXT _pgen_tmp_284_842;
  CIPHERTEXT _pgen_tmp_285_843;
  CIPHERTEXT _pgen_tmp_286_844;
  CIPHERTEXT _pgen_tmp_287_845;
  CIPHERTEXT _pgen_tmp_288_846;
  CIPHERTEXT _pgen_tmp_289_847;
  PLAINTEXT _pgen_tmp_290_848;
  CIPHERTEXT _pgen_tmp_291_849;
  CIPHERTEXT _pgen_tmp_292_850;
  CIPHERTEXT _pgen_tmp_293_851;
  PLAINTEXT _pgen_tmp_294_852;
  CIPHERTEXT _pgen_tmp_295_853;
  PLAINTEXT _pgen_tmp_296_854;
  CIPHERTEXT _pgen_tmp_297_855;
  CIPHERTEXT _pgen_tmp_298_856;
  CIPHERTEXT _pgen_tmp_299_857;
  CIPHERTEXT _pgen_tmp_300_858;
  CIPHERTEXT _pgen_tmp_301_859;
  PLAINTEXT _pgen_tmp_302_860;
  CIPHERTEXT _pgen_tmp_303_861;
  CIPHERTEXT _pgen_tmp_304_862;
  CIPHERTEXT _pgen_tmp_305_863;
  PLAINTEXT _pgen_tmp_306_864;
  CIPHERTEXT _pgen_tmp_307_865;
  CIPHERTEXT _pgen_tmp_308_866;
  CIPHERTEXT _pgen_tmp_309_867;
  PLAINTEXT _pgen_tmp_310_868;
  CIPHERTEXT _pgen_tmp_311_869;
  CIPHERTEXT _pgen_tmp_312_870;
  PLAINTEXT _pgen_tmp_313_871;
  CIPHERTEXT _pgen_tmp_314_872;
  PLAINTEXT _pgen_tmp_315_873;
  CIPHERTEXT _pgen_tmp_316_874;
  CIPHERTEXT _pgen_tmp_317_875;
  CIPHERTEXT _pgen_tmp_318_876;
  CIPHERTEXT _pgen_tmp_319_877;
  CIPHERTEXT _pgen_tmp_320_878;
  PLAINTEXT _pgen_tmp_321_879;
  CIPHERTEXT _pgen_tmp_322_880;
  CIPHERTEXT _pgen_tmp_323_881;
  CIPHERTEXT _pgen_tmp_324_882;
  PLAINTEXT _pgen_tmp_325_883;
  CIPHERTEXT _pgen_tmp_326_884;
  PLAINTEXT _pgen_tmp_327_885;
  CIPHERTEXT _pgen_tmp_328_886;
  CIPHERTEXT _pgen_tmp_329_887;
  CIPHERTEXT _pgen_tmp_330_888;
  CIPHERTEXT _pgen_tmp_331_889;
  CIPHERTEXT _pgen_tmp_332_890;
  PLAINTEXT _pgen_tmp_333_891;
  CIPHERTEXT _pgen_tmp_334_892;
  CIPHERTEXT _pgen_tmp_335_893;
  CIPHERTEXT _pgen_tmp_336_894;
  PLAINTEXT _pgen_tmp_337_895;
  CIPHERTEXT _pgen_tmp_338_896;
  CIPHERTEXT _pgen_tmp_339_897;
  CIPHERTEXT _pgen_tmp_340_898;
  PLAINTEXT _pgen_tmp_341_899;
  CIPHERTEXT _pgen_tmp_342_900;
  CIPHERTEXT _pgen_tmp_343_901;
  PLAINTEXT _pgen_tmp_344_902;
  CIPHERTEXT _pgen_tmp_345_903;
  PLAINTEXT _pgen_tmp_346_904;
  CIPHERTEXT _pgen_tmp_347_905;
  CIPHERTEXT _pgen_tmp_348_906;
  CIPHERTEXT _pgen_tmp_349_907;
  CIPHERTEXT _pgen_tmp_350_908;
  CIPHERTEXT _pgen_tmp_351_909;
  PLAINTEXT _pgen_tmp_352_910;
  CIPHERTEXT _pgen_tmp_353_911;
  CIPHERTEXT _pgen_tmp_354_912;
  CIPHERTEXT _pgen_tmp_355_913;
  PLAINTEXT _pgen_tmp_356_914;
  CIPHERTEXT _pgen_tmp_357_915;
  PLAINTEXT _pgen_tmp_358_916;
  CIPHERTEXT _pgen_tmp_359_917;
  CIPHERTEXT _pgen_tmp_360_918;
  CIPHERTEXT _pgen_tmp_361_919;
  CIPHERTEXT _pgen_tmp_362_920;
  CIPHERTEXT _pgen_tmp_363_921;
  PLAINTEXT _pgen_tmp_364_922;
  CIPHERTEXT _pgen_tmp_365_923;
  CIPHERTEXT _pgen_tmp_366_924;
  CIPHERTEXT _pgen_tmp_367_925;
  PLAINTEXT _pgen_tmp_368_926;
  CIPHERTEXT _pgen_tmp_369_927;
  CIPHERTEXT _pgen_tmp_370_928;
  CIPHERTEXT _pgen_tmp_371_929;
  PLAINTEXT _pgen_tmp_372_930;
  CIPHERTEXT _pgen_tmp_373_931;
  CIPHERTEXT _pgen_tmp_374_932;
  PLAINTEXT _pgen_tmp_375_933;
  CIPHERTEXT _pgen_tmp_376_934;
  PLAINTEXT _pgen_tmp_377_935;
  CIPHERTEXT _pgen_tmp_378_936;
  CIPHERTEXT _pgen_tmp_379_937;
  CIPHERTEXT _pgen_tmp_380_938;
  CIPHERTEXT _pgen_tmp_381_939;
  CIPHERTEXT _pgen_tmp_382_940;
  PLAINTEXT _pgen_tmp_383_941;
  CIPHERTEXT _pgen_tmp_384_942;
  CIPHERTEXT _pgen_tmp_385_943;
  CIPHERTEXT _pgen_tmp_386_944;
  PLAINTEXT _pgen_tmp_387_945;
  CIPHERTEXT _pgen_tmp_388_946;
  PLAINTEXT _pgen_tmp_389_947;
  CIPHERTEXT _pgen_tmp_390_948;
  CIPHERTEXT _pgen_tmp_391_949;
  CIPHERTEXT _pgen_tmp_392_950;
  CIPHERTEXT _pgen_tmp_393_951;
  CIPHERTEXT _pgen_tmp_394_952;
  PLAINTEXT _pgen_tmp_395_953;
  CIPHERTEXT _pgen_tmp_396_954;
  CIPHERTEXT _pgen_tmp_397_955;
  CIPHERTEXT _pgen_tmp_398_956;
  PLAINTEXT _pgen_tmp_399_957;
  CIPHERTEXT _pgen_tmp_400_958;
  CIPHERTEXT _pgen_tmp_401_959;
  CIPHERTEXT _pgen_tmp_402_960;
  PLAINTEXT _pgen_tmp_403_961;
  CIPHERTEXT _pgen_tmp_404_962;
  CIPHERTEXT _pgen_tmp_405_963;
  PLAINTEXT _pgen_tmp_406_964;
  CIPHERTEXT _pgen_tmp_407_965;
  PLAINTEXT _pgen_tmp_408_966;
  CIPHERTEXT _pgen_tmp_409_967;
  CIPHERTEXT _pgen_tmp_410_968;
  CIPHERTEXT _pgen_tmp_411_969;
  CIPHERTEXT _pgen_tmp_412_970;
  CIPHERTEXT _pgen_tmp_413_971;
  PLAINTEXT _pgen_tmp_414_972;
  CIPHERTEXT _pgen_tmp_415_973;
  CIPHERTEXT _pgen_tmp_416_974;
  CIPHERTEXT _pgen_tmp_417_975;
  PLAINTEXT _pgen_tmp_418_976;
  CIPHERTEXT _pgen_tmp_419_977;
  PLAINTEXT _pgen_tmp_420_978;
  CIPHERTEXT _pgen_tmp_421_979;
  CIPHERTEXT _pgen_tmp_422_980;
  CIPHERTEXT _pgen_tmp_423_981;
  CIPHERTEXT _pgen_tmp_424_982;
  PLAINTEXT _pgen_tmp_425_983;
  CIPHERTEXT _pgen_tmp_426_984;
  CIPHERTEXT _pgen_tmp_427_985;
  PLAINTEXT _pgen_tmp_428_986;
  CIPHERTEXT _pgen_tmp_429_987;
  CIPHERTEXT _pgen_tmp_430_988;
  CIPHERTEXT _pgen_tmp_431_989;
  CIPHERTEXT _pgen_tmp_432_990;
  CIPHERTEXT _pgen_tmp_433_991;
  CIPHERTEXT _pgen_tmp_434_992;
  CIPHERTEXT _pgen_tmp_435_993;
  CIPHERTEXT _pgen_tmp_436_994;
  CIPHERTEXT _pgen_tmp_437_995;
  CIPHERTEXT _pgen_tmp_438_996;
  PLAINTEXT _pgen_tmp_439_997;
  PLAINTEXT _pgen_tmp_440_998;
  CIPHERTEXT _pgen_tmp_441_999;
  CIPHERTEXT _pgen_tmp_442_1000;
  CIPHERTEXT _pgen_tmp_443_1001;
  PLAINTEXT _pgen_tmp_444_1002;
  CIPHERTEXT _pgen_tmp_445_1003;
  CIPHERTEXT _pgen_tmp_446_1004;
  PLAINTEXT _pgen_tmp_447_1005;
  CIPHERTEXT _pgen_tmp_448_1006;
  PLAINTEXT _pgen_tmp_449_1007;
  CIPHERTEXT _pgen_tmp_450_1008;
  CIPHERTEXT _pgen_tmp_451_1009;
  CIPHERTEXT _pgen_tmp_452_1010;
  CIPHERTEXT _pgen_tmp_453_1011;
  CIPHERTEXT _pgen_tmp_454_1012;
  PLAINTEXT _pgen_tmp_455_1013;
  CIPHERTEXT _pgen_tmp_456_1014;
  CIPHERTEXT _pgen_tmp_457_1015;
  CIPHERTEXT _pgen_tmp_458_1016;
  PLAINTEXT _pgen_tmp_459_1017;
  CIPHERTEXT _pgen_tmp_460_1018;
  PLAINTEXT _pgen_tmp_461_1019;
  CIPHERTEXT _pgen_tmp_462_1020;
  CIPHERTEXT _pgen_tmp_463_1021;
  CIPHERTEXT _pgen_tmp_464_1022;
  CIPHERTEXT _pgen_tmp_465_1023;
  CIPHERTEXT _pgen_tmp_466_1024;
  PLAINTEXT _pgen_tmp_467_1025;
  CIPHERTEXT _pgen_tmp_468_1026;
  CIPHERTEXT _pgen_tmp_469_1027;
  CIPHERTEXT _pgen_tmp_470_1028;
  PLAINTEXT _pgen_tmp_471_1029;
  CIPHERTEXT _pgen_tmp_472_1030;
  CIPHERTEXT _pgen_tmp_473_1031;
  CIPHERTEXT _pgen_tmp_474_1032;
  PLAINTEXT _pgen_tmp_475_1033;
  CIPHERTEXT _pgen_tmp_476_1034;
  CIPHERTEXT _pgen_tmp_477_1035;
  PLAINTEXT _pgen_tmp_478_1036;
  CIPHERTEXT _pgen_tmp_479_1037;
  PLAINTEXT _pgen_tmp_480_1038;
  CIPHERTEXT _pgen_tmp_481_1039;
  CIPHERTEXT _pgen_tmp_482_1040;
  CIPHERTEXT _pgen_tmp_483_1041;
  CIPHERTEXT _pgen_tmp_484_1042;
  CIPHERTEXT _pgen_tmp_485_1043;
  PLAINTEXT _pgen_tmp_486_1044;
  CIPHERTEXT _pgen_tmp_487_1045;
  CIPHERTEXT _pgen_tmp_488_1046;
  CIPHERTEXT _pgen_tmp_489_1047;
  PLAINTEXT _pgen_tmp_490_1048;
  CIPHERTEXT _pgen_tmp_491_1049;
  PLAINTEXT _pgen_tmp_492_1050;
  CIPHERTEXT _pgen_tmp_493_1051;
  PLAINTEXT _pgen_tmp_494_1052;
  CIPHERTEXT _pgen_tmp_495_1053;
  CIPHERTEXT _pgen_tmp_496_1054;
  CIPHERTEXT _pgen_tmp_497_1055;
  CIPHERTEXT _pgen_tmp_498_1056;
  CIPHERTEXT _pgen_tmp_499_1057;
  CIPHERTEXT _pgen_tmp_500_1058;
  CIPHERTEXT _pgen_tmp_501_1059;
  CIPHERTEXT _pgen_tmp_502_1060;
  CIPHERTEXT _pgen_tmp_503_1061;
  CIPHERTEXT _pgen_tmp_504_1062;
  CIPHERTEXT _pgen_tmp_505_1063;
  CIPHERTEXT _pgen_tmp_506_1064;
  PLAINTEXT _pgen_tmp_507_1065;
  CIPHERTEXT _pgen_tmp_508_1066;
  PLAINTEXT _pgen_tmp_509_1067;
  CIPHERTEXT _pgen_tmp_510_1068;
  PLAINTEXT _pgen_tmp_511_1069;
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
  uint32_t  degree = Degree();
  for (int input_idx = 0; input_idx < 6; ++input_idx) {
    input_0[input_idx] = Get_input_data("input", input_idx);
  }
  memset(&VS_out_conv1_1, 0, sizeof(VS_out_conv1_1));
  memset(&VS_out_conv_halo1_2, 0, sizeof(VS_out_conv_halo1_2));
  memset(&input_dup_n27_5, 0, sizeof(input_dup_n27_5));
  memset(&input_block_n27_7, 0, sizeof(input_block_n27_7));
  memset(&result_n28_9, 0, sizeof(result_n28_9));
  memset(&result_grid_n28_11, 0, sizeof(result_grid_n28_11));
  memset(&x_row28_14, 0, sizeof(x_row28_14));
  memset(&comb_row_result29_15, 0, sizeof(comb_row_result29_15));
  memset(&comb_rc_result29_18, 0, sizeof(comb_rc_result29_18));
  memset(&output_reshard1_22, 0, sizeof(output_reshard1_22));
  memset(&VS_out_relu1_23, 0, sizeof(VS_out_relu1_23));
  memset(&VS_out_conv2_26, 0, sizeof(VS_out_conv2_26));
  memset(&VS_out_conv_halo2_27, 0, sizeof(VS_out_conv_halo2_27));
  memset(&input_dup_n29_31, 0, sizeof(input_dup_n29_31));
  memset(&input_block_n29_33, 0, sizeof(input_block_n29_33));
  memset(&result_n30_34, 0, sizeof(result_n30_34));
  memset(&result_grid_n30_36, 0, sizeof(result_grid_n30_36));
  memset(&VS_out_relu2_38, 0, sizeof(VS_out_relu2_38));
  memset(&VS_out_conv3_41, 0, sizeof(VS_out_conv3_41));
  memset(&VS_out_conv_halo3_42, 0, sizeof(VS_out_conv_halo3_42));
  memset(&input_dup_n30_45, 0, sizeof(input_dup_n30_45));
  memset(&input_block_n30_47, 0, sizeof(input_block_n30_47));
  memset(&result_n31_49, 0, sizeof(result_n31_49));
  memset(&result_grid_n31_51, 0, sizeof(result_grid_n31_51));
  memset(&VS_out_relu3_53, 0, sizeof(VS_out_relu3_53));
  memset(&VS_out_conv4_56, 0, sizeof(VS_out_conv4_56));
  memset(&VS_out_conv_halo4_57, 0, sizeof(VS_out_conv_halo4_57));
  memset(&input_dup_n31_61, 0, sizeof(input_dup_n31_61));
  memset(&input_block_n31_63, 0, sizeof(input_block_n31_63));
  memset(&result_n32_64, 0, sizeof(result_n32_64));
  memset(&result_grid_n32_66, 0, sizeof(result_grid_n32_66));
  memset(&orig_result32_69, 0, sizeof(orig_result32_69));
  memset(&comb_row_result33_70, 0, sizeof(comb_row_result33_70));
  memset(&comb_rc_result33_73, 0, sizeof(comb_rc_result33_73));
  memset(&ss_result33_76, 0, sizeof(ss_result33_76));
  memset(&output_reshard4_79, 0, sizeof(output_reshard4_79));
  memset(&VS_out_relu4_80, 0, sizeof(VS_out_relu4_80));
  memset(&VS_out_conv5_83, 0, sizeof(VS_out_conv5_83));
  memset(&VS_out_conv_halo5_84, 0, sizeof(VS_out_conv_halo5_84));
  memset(&input_dup_n33_87, 0, sizeof(input_dup_n33_87));
  memset(&input_block_n33_89, 0, sizeof(input_block_n33_89));
  memset(&result_n34_91, 0, sizeof(result_n34_91));
  memset(&result_grid_n34_93, 0, sizeof(result_grid_n34_93));
  memset(&VS_out_relu5_95, 0, sizeof(VS_out_relu5_95));
  memset(&VS_out_conv6_98, 0, sizeof(VS_out_conv6_98));
  memset(&VS_out_conv_halo6_99, 0, sizeof(VS_out_conv_halo6_99));
  memset(&input_dup_n34_103, 0, sizeof(input_dup_n34_103));
  memset(&input_block_n34_105, 0, sizeof(input_block_n34_105));
  memset(&result_n35_106, 0, sizeof(result_n35_106));
  memset(&result_grid_n35_108, 0, sizeof(result_grid_n35_108));
  memset(&VS_out_relu6_110, 0, sizeof(VS_out_relu6_110));
  memset(&VS_out_conv7_113, 0, sizeof(VS_out_conv7_113));
  memset(&VS_out_conv_halo7_114, 0, sizeof(VS_out_conv_halo7_114));
  memset(&input_dup_n35_117, 0, sizeof(input_dup_n35_117));
  memset(&input_block_n35_119, 0, sizeof(input_block_n35_119));
  memset(&result_n36_121, 0, sizeof(result_n36_121));
  memset(&result_grid_n36_123, 0, sizeof(result_grid_n36_123));
  memset(&VS_out_relu7_125, 0, sizeof(VS_out_relu7_125));
  memset(&VS_out_conv8_128, 0, sizeof(VS_out_conv8_128));
  memset(&VS_out_conv_halo8_129, 0, sizeof(VS_out_conv_halo8_129));
  memset(&input_dup_n36_133, 0, sizeof(input_dup_n36_133));
  memset(&input_block_n36_135, 0, sizeof(input_block_n36_135));
  memset(&result_n37_136, 0, sizeof(result_n37_136));
  memset(&result_grid_n37_138, 0, sizeof(result_grid_n37_138));
  memset(&orig_result37_141, 0, sizeof(orig_result37_141));
  memset(&comb_row_result38_142, 0, sizeof(comb_row_result38_142));
  memset(&comb_rc_result38_145, 0, sizeof(comb_rc_result38_145));
  memset(&ss_result38_148, 0, sizeof(ss_result38_148));
  memset(&output_reshard8_152, 0, sizeof(output_reshard8_152));
  memset(&VS_out_relu8_153, 0, sizeof(VS_out_relu8_153));
  memset(&VS_out_conv9_156, 0, sizeof(VS_out_conv9_156));
  memset(&VS_out_conv_halo9_157, 0, sizeof(VS_out_conv_halo9_157));
  memset(&input_dup_n38_160, 0, sizeof(input_dup_n38_160));
  memset(&input_block_n38_162, 0, sizeof(input_block_n38_162));
  memset(&result_n39_164, 0, sizeof(result_n39_164));
  memset(&result_grid_n39_166, 0, sizeof(result_grid_n39_166));
  memset(&VS_out_relu9_168, 0, sizeof(VS_out_relu9_168));
  memset(&VS_out_conv10_171, 0, sizeof(VS_out_conv10_171));
  memset(&VS_out_conv_halo10_172, 0, sizeof(VS_out_conv_halo10_172));
  memset(&input_dup_n39_176, 0, sizeof(input_dup_n39_176));
  memset(&input_block_n39_178, 0, sizeof(input_block_n39_178));
  memset(&result_n40_179, 0, sizeof(result_n40_179));
  memset(&result_grid_n40_181, 0, sizeof(result_grid_n40_181));
  memset(&VS_out_relu10_183, 0, sizeof(VS_out_relu10_183));
  memset(&VS_out_conv11_186, 0, sizeof(VS_out_conv11_186));
  memset(&VS_out_conv_halo11_187, 0, sizeof(VS_out_conv_halo11_187));
  memset(&input_dup_n40_190, 0, sizeof(input_dup_n40_190));
  memset(&input_block_n40_192, 0, sizeof(input_block_n40_192));
  memset(&result_n41_194, 0, sizeof(result_n41_194));
  memset(&result_grid_n41_196, 0, sizeof(result_grid_n41_196));
  memset(&VS_out_relu11_198, 0, sizeof(VS_out_relu11_198));
  memset(&VS_out_conv12_201, 0, sizeof(VS_out_conv12_201));
  memset(&VS_out_conv_halo12_202, 0, sizeof(VS_out_conv_halo12_202));
  memset(&input_dup_n41_206, 0, sizeof(input_dup_n41_206));
  memset(&input_block_n41_208, 0, sizeof(input_block_n41_208));
  memset(&result_n42_209, 0, sizeof(result_n42_209));
  memset(&result_grid_n42_211, 0, sizeof(result_grid_n42_211));
  memset(&orig_result42_214, 0, sizeof(orig_result42_214));
  memset(&comb_row_result43_215, 0, sizeof(comb_row_result43_215));
  memset(&comb_rc_result43_218, 0, sizeof(comb_rc_result43_218));
  memset(&ss_result43_221, 0, sizeof(ss_result43_221));
  memset(&output_reshard12_225, 0, sizeof(output_reshard12_225));
  memset(&VS_out_relu12_226, 0, sizeof(VS_out_relu12_226));
  memset(&VS_out_conv13_229, 0, sizeof(VS_out_conv13_229));
  memset(&VS_out_conv_halo13_230, 0, sizeof(VS_out_conv_halo13_230));
  memset(&input_dup_n43_233, 0, sizeof(input_dup_n43_233));
  memset(&input_block_n43_235, 0, sizeof(input_block_n43_235));
  memset(&result_n44_237, 0, sizeof(result_n44_237));
  memset(&result_grid_n44_239, 0, sizeof(result_grid_n44_239));
  memset(&VS_out_relu13_241, 0, sizeof(VS_out_relu13_241));
  memset(&VS_out_conv14_244, 0, sizeof(VS_out_conv14_244));
  memset(&VS_out_conv_halo14_245, 0, sizeof(VS_out_conv_halo14_245));
  memset(&input_dup_n44_249, 0, sizeof(input_dup_n44_249));
  memset(&input_block_n44_251, 0, sizeof(input_block_n44_251));
  memset(&result_n45_252, 0, sizeof(result_n45_252));
  memset(&result_grid_n45_254, 0, sizeof(result_grid_n45_254));
  memset(&VS_out_relu14_256, 0, sizeof(VS_out_relu14_256));
  memset(&VS_out_conv15_259, 0, sizeof(VS_out_conv15_259));
  memset(&VS_out_conv_halo15_260, 0, sizeof(VS_out_conv_halo15_260));
  memset(&input_dup_n45_263, 0, sizeof(input_dup_n45_263));
  memset(&input_block_n45_265, 0, sizeof(input_block_n45_265));
  memset(&result_n46_267, 0, sizeof(result_n46_267));
  memset(&result_grid_n46_269, 0, sizeof(result_grid_n46_269));
  memset(&VS_out_relu15_271, 0, sizeof(VS_out_relu15_271));
  memset(&VS_out_conv16_274, 0, sizeof(VS_out_conv16_274));
  memset(&VS_out_conv_halo16_275, 0, sizeof(VS_out_conv_halo16_275));
  memset(&input_dup_n46_279, 0, sizeof(input_dup_n46_279));
  memset(&input_block_n46_281, 0, sizeof(input_block_n46_281));
  memset(&result_n47_282, 0, sizeof(result_n47_282));
  memset(&result_grid_n47_284, 0, sizeof(result_grid_n47_284));
  memset(&VS_out_relu16_286, 0, sizeof(VS_out_relu16_286));
  memset(&VS_out_conv17_289, 0, sizeof(VS_out_conv17_289));
  memset(&VS_out_conv_halo17_290, 0, sizeof(VS_out_conv_halo17_290));
  memset(&input_dup_n47_293, 0, sizeof(input_dup_n47_293));
  memset(&input_block_n47_295, 0, sizeof(input_block_n47_295));
  memset(&result_n48_297, 0, sizeof(result_n48_297));
  memset(&result_grid_n48_299, 0, sizeof(result_grid_n48_299));
  memset(&VS_out_relu17_301, 0, sizeof(VS_out_relu17_301));
  memset(&VS_out_conv18_304, 0, sizeof(VS_out_conv18_304));
  memset(&VS_out_conv_halo18_305, 0, sizeof(VS_out_conv_halo18_305));
  memset(&input_dup_n48_309, 0, sizeof(input_dup_n48_309));
  memset(&input_block_n48_311, 0, sizeof(input_block_n48_311));
  memset(&result_n49_312, 0, sizeof(result_n49_312));
  memset(&result_grid_n49_314, 0, sizeof(result_grid_n49_314));
  memset(&VS_out_relu18_316, 0, sizeof(VS_out_relu18_316));
  memset(&VS_out_conv19_319, 0, sizeof(VS_out_conv19_319));
  memset(&VS_out_conv_halo19_320, 0, sizeof(VS_out_conv_halo19_320));
  memset(&input_dup_n49_323, 0, sizeof(input_dup_n49_323));
  memset(&input_block_n49_325, 0, sizeof(input_block_n49_325));
  memset(&result_n50_327, 0, sizeof(result_n50_327));
  memset(&result_grid_n50_329, 0, sizeof(result_grid_n50_329));
  memset(&VS_out_relu19_331, 0, sizeof(VS_out_relu19_331));
  memset(&VS_out_conv20_334, 0, sizeof(VS_out_conv20_334));
  memset(&VS_out_conv_halo20_335, 0, sizeof(VS_out_conv_halo20_335));
  memset(&input_dup_n50_339, 0, sizeof(input_dup_n50_339));
  memset(&input_block_n50_341, 0, sizeof(input_block_n50_341));
  memset(&result_n51_342, 0, sizeof(result_n51_342));
  memset(&result_grid_n51_344, 0, sizeof(result_grid_n51_344));
  memset(&VS_out_relu20_346, 0, sizeof(VS_out_relu20_346));
  memset(&VS_out_conv21_349, 0, sizeof(VS_out_conv21_349));
  memset(&VS_out_conv_halo21_350, 0, sizeof(VS_out_conv_halo21_350));
  memset(&input_dup_n51_353, 0, sizeof(input_dup_n51_353));
  memset(&input_block_n51_355, 0, sizeof(input_block_n51_355));
  memset(&result_n52_357, 0, sizeof(result_n52_357));
  memset(&result_grid_n52_359, 0, sizeof(result_grid_n52_359));
  memset(&VS_out_relu21_361, 0, sizeof(VS_out_relu21_361));
  memset(&VS_out_conv22_364, 0, sizeof(VS_out_conv22_364));
  memset(&VS_out_conv_halo22_365, 0, sizeof(VS_out_conv_halo22_365));
  memset(&input_dup_n52_369, 0, sizeof(input_dup_n52_369));
  memset(&input_block_n52_371, 0, sizeof(input_block_n52_371));
  memset(&result_n53_372, 0, sizeof(result_n53_372));
  memset(&result_grid_n53_374, 0, sizeof(result_grid_n53_374));
  memset(&VS_out_relu22_376, 0, sizeof(VS_out_relu22_376));
  memset(&VS_out_conv23_379, 0, sizeof(VS_out_conv23_379));
  memset(&VS_out_conv_halo23_380, 0, sizeof(VS_out_conv_halo23_380));
  memset(&input_dup_n53_383, 0, sizeof(input_dup_n53_383));
  memset(&input_block_n53_385, 0, sizeof(input_block_n53_385));
  memset(&result_n54_387, 0, sizeof(result_n54_387));
  memset(&result_grid_n54_389, 0, sizeof(result_grid_n54_389));
  memset(&VS_out_relu23_391, 0, sizeof(VS_out_relu23_391));
  memset(&VS_out_conv24_394, 0, sizeof(VS_out_conv24_394));
  memset(&VS_out_conv_halo24_395, 0, sizeof(VS_out_conv_halo24_395));
  memset(&input_dup_n54_399, 0, sizeof(input_dup_n54_399));
  memset(&input_block_n54_401, 0, sizeof(input_block_n54_401));
  memset(&result_n55_402, 0, sizeof(result_n55_402));
  memset(&result_grid_n55_404, 0, sizeof(result_grid_n55_404));
  memset(&orig_result55_407, 0, sizeof(orig_result55_407));
  memset(&comb_dic_result56_408, 0, sizeof(comb_dic_result56_408));
  memset(&ss_result56_412, 0, sizeof(ss_result56_412));
  memset(&output_reshard24_416, 0, sizeof(output_reshard24_416));
  memset(&VS_out_conv25_417, 0, sizeof(VS_out_conv25_417));
  memset(&VS_out_conv_halo25_418, 0, sizeof(VS_out_conv_halo25_418));
  memset(&input_dup_n56_421, 0, sizeof(input_dup_n56_421));
  memset(&input_block_n56_423, 0, sizeof(input_block_n56_423));
  memset(&result_n57_425, 0, sizeof(result_n57_425));
  memset(&result_grid_n57_427, 0, sizeof(result_grid_n57_427));
  memset(&VS_out_relu25_429, 0, sizeof(VS_out_relu25_429));
  memset(&VS_out_conv26_432, 0, sizeof(VS_out_conv26_432));
  memset(&VS_out_conv_halo26_433, 0, sizeof(VS_out_conv_halo26_433));
  memset(&input_dup_n57_437, 0, sizeof(input_dup_n57_437));
  memset(&input_block_n57_439, 0, sizeof(input_block_n57_439));
  memset(&result_n58_440, 0, sizeof(result_n58_440));
  memset(&result_grid_n58_442, 0, sizeof(result_grid_n58_442));
  memset(&VS_out_relu26_444, 0, sizeof(VS_out_relu26_444));
  memset(&VS_out_conv27_447, 0, sizeof(VS_out_conv27_447));
  memset(&VS_out_conv_halo27_448, 0, sizeof(VS_out_conv_halo27_448));
  memset(&input_dup_n58_451, 0, sizeof(input_dup_n58_451));
  memset(&input_block_n58_453, 0, sizeof(input_block_n58_453));
  memset(&result_n59_455, 0, sizeof(result_n59_455));
  memset(&result_grid_n59_457, 0, sizeof(result_grid_n59_457));
  memset(&VS_out_relu27_459, 0, sizeof(VS_out_relu27_459));
  memset(&VS_out_gap27_462, 0, sizeof(VS_out_gap27_462));
  memset(&gap_result59_466, 0, sizeof(gap_result59_466));
  memset(&orig_result59_467, 0, sizeof(orig_result59_467));
  memset(&ss_result60_468, 0, sizeof(ss_result60_468));
  memset(&input_dup_n60_471, 0, sizeof(input_dup_n60_471));
  memset(&input_block_n60_473, 0, sizeof(input_block_n60_473));
  memset(&gemm_result_n61_474, 0, sizeof(gemm_result_n61_474));
  memset(&block_result_476, 0, sizeof(block_result_476));
  memset(&reduce_intra_478, 0, sizeof(reduce_intra_478));
  memset(&output_480, 0, sizeof(output_480));
  memset(&_ckks_gen_tmp_102_481, 0, sizeof(_ckks_gen_tmp_102_481));
  memset(&_ckks_gen_tmp_221_482, 0, sizeof(_ckks_gen_tmp_221_482));
  memset(&_ckks_gen_tmp_274_483, 0, sizeof(_ckks_gen_tmp_274_483));
  memset(&_ckks_gen_tmp_516_484, 0, sizeof(_ckks_gen_tmp_516_484));
  memset(&_ckks_gen_tmp_751_485, 0, sizeof(_ckks_gen_tmp_751_485));
  memset(&_ckks_gen_tmp_1016_486, 0, sizeof(_ckks_gen_tmp_1016_486));
  memset(&_ckks_gen_tmp_1133_487, 0, sizeof(_ckks_gen_tmp_1133_487));
  memset(&_ckks_gen_tmp_1186_488, 0, sizeof(_ckks_gen_tmp_1186_488));
  memset(&_ckks_gen_tmp_1462_489, 0, sizeof(_ckks_gen_tmp_1462_489));
  memset(&_ckks_gen_tmp_1727_490, 0, sizeof(_ckks_gen_tmp_1727_490));
  memset(&_ckks_gen_tmp_1962_491, 0, sizeof(_ckks_gen_tmp_1962_491));
  memset(&_ckks_gen_tmp_2227_492, 0, sizeof(_ckks_gen_tmp_2227_492));
  memset(&_ckks_gen_tmp_2344_493, 0, sizeof(_ckks_gen_tmp_2344_493));
  memset(&_ckks_gen_tmp_2397_494, 0, sizeof(_ckks_gen_tmp_2397_494));
  memset(&_ckks_gen_tmp_2450_495, 0, sizeof(_ckks_gen_tmp_2450_495));
  memset(&_ckks_gen_tmp_2692_496, 0, sizeof(_ckks_gen_tmp_2692_496));
  memset(&_ckks_gen_tmp_2957_497, 0, sizeof(_ckks_gen_tmp_2957_497));
  memset(&_ckks_gen_tmp_3192_498, 0, sizeof(_ckks_gen_tmp_3192_498));
  memset(&_ckks_gen_tmp_3457_499, 0, sizeof(_ckks_gen_tmp_3457_499));
  memset(&_ckks_gen_tmp_3574_500, 0, sizeof(_ckks_gen_tmp_3574_500));
  memset(&_ckks_gen_tmp_3627_501, 0, sizeof(_ckks_gen_tmp_3627_501));
  memset(&_ckks_gen_tmp_3680_502, 0, sizeof(_ckks_gen_tmp_3680_502));
  memset(&_ckks_gen_tmp_3922_503, 0, sizeof(_ckks_gen_tmp_3922_503));
  memset(&_ckks_gen_tmp_4187_504, 0, sizeof(_ckks_gen_tmp_4187_504));
  memset(&_ckks_gen_tmp_4422_505, 0, sizeof(_ckks_gen_tmp_4422_505));
  memset(&_ckks_gen_tmp_4687_506, 0, sizeof(_ckks_gen_tmp_4687_506));
  memset(&_ckks_gen_tmp_4922_507, 0, sizeof(_ckks_gen_tmp_4922_507));
  memset(&_ckks_gen_tmp_5187_508, 0, sizeof(_ckks_gen_tmp_5187_508));
  memset(&_ckks_gen_tmp_5422_509, 0, sizeof(_ckks_gen_tmp_5422_509));
  memset(&_ckks_gen_tmp_5687_510, 0, sizeof(_ckks_gen_tmp_5687_510));
  memset(&_ckks_gen_tmp_5922_511, 0, sizeof(_ckks_gen_tmp_5922_511));
  memset(&_ckks_gen_tmp_6187_512, 0, sizeof(_ckks_gen_tmp_6187_512));
  memset(&_ckks_gen_tmp_6422_513, 0, sizeof(_ckks_gen_tmp_6422_513));
  memset(&_ckks_gen_tmp_6687_514, 0, sizeof(_ckks_gen_tmp_6687_514));
  memset(&_ckks_gen_tmp_6818_515, 0, sizeof(_ckks_gen_tmp_6818_515));
  memset(&_ckks_gen_tmp_6875_516, 0, sizeof(_ckks_gen_tmp_6875_516));
  memset(&_ckks_gen_tmp_7054_517, 0, sizeof(_ckks_gen_tmp_7054_517));
  memset(&_ckks_gen_tmp_7319_518, 0, sizeof(_ckks_gen_tmp_7319_518));
  memset(&_ckks_gen_tmp_7554_519, 0, sizeof(_ckks_gen_tmp_7554_519));
  memset(&_ckks_gen_tmp_7831_520, 0, sizeof(_ckks_gen_tmp_7831_520));
  memset(&_ckks_gen_tmp_7972_521, 0, sizeof(_ckks_gen_tmp_7972_521));
  memset(&_pgen_tmp_0_558, 0, sizeof(_pgen_tmp_0_558));
  memset(&_pgen_tmp_1_559, 0, sizeof(_pgen_tmp_1_559));
  memset(&_pgen_tmp_2_560, 0, sizeof(_pgen_tmp_2_560));
  memset(&_pgen_tmp_3_561, 0, sizeof(_pgen_tmp_3_561));
  memset(&_pgen_tmp_4_562, 0, sizeof(_pgen_tmp_4_562));
  memset(&_pgen_tmp_5_563, 0, sizeof(_pgen_tmp_5_563));
  memset(&_pgen_tmp_6_564, 0, sizeof(_pgen_tmp_6_564));
  memset(&_pgen_tmp_7_565, 0, sizeof(_pgen_tmp_7_565));
  memset(&_pgen_tmp_8_566, 0, sizeof(_pgen_tmp_8_566));
  memset(&_pgen_tmp_9_567, 0, sizeof(_pgen_tmp_9_567));
  memset(&_pgen_tmp_10_568, 0, sizeof(_pgen_tmp_10_568));
  memset(&_pgen_tmp_11_569, 0, sizeof(_pgen_tmp_11_569));
  memset(&_pgen_tmp_12_570, 0, sizeof(_pgen_tmp_12_570));
  memset(&_pgen_tmp_13_571, 0, sizeof(_pgen_tmp_13_571));
  memset(&_pgen_tmp_14_572, 0, sizeof(_pgen_tmp_14_572));
  memset(&_pgen_tmp_15_573, 0, sizeof(_pgen_tmp_15_573));
  memset(&_pgen_tmp_16_574, 0, sizeof(_pgen_tmp_16_574));
  memset(&_pgen_tmp_17_575, 0, sizeof(_pgen_tmp_17_575));
  memset(&_pgen_tmp_18_576, 0, sizeof(_pgen_tmp_18_576));
  memset(&_pgen_tmp_19_577, 0, sizeof(_pgen_tmp_19_577));
  memset(&_pgen_tmp_20_578, 0, sizeof(_pgen_tmp_20_578));
  memset(&_pgen_tmp_21_579, 0, sizeof(_pgen_tmp_21_579));
  memset(&_pgen_tmp_22_580, 0, sizeof(_pgen_tmp_22_580));
  memset(&_pgen_tmp_23_581, 0, sizeof(_pgen_tmp_23_581));
  memset(&_pgen_tmp_24_582, 0, sizeof(_pgen_tmp_24_582));
  memset(&_pgen_tmp_25_583, 0, sizeof(_pgen_tmp_25_583));
  memset(&_pgen_tmp_26_584, 0, sizeof(_pgen_tmp_26_584));
  memset(&_pgen_tmp_27_585, 0, sizeof(_pgen_tmp_27_585));
  memset(&_pgen_tmp_28_586, 0, sizeof(_pgen_tmp_28_586));
  memset(&_pgen_tmp_29_587, 0, sizeof(_pgen_tmp_29_587));
  memset(&_pgen_tmp_30_588, 0, sizeof(_pgen_tmp_30_588));
  memset(&_pgen_tmp_31_589, 0, sizeof(_pgen_tmp_31_589));
  memset(&_pgen_tmp_32_590, 0, sizeof(_pgen_tmp_32_590));
  memset(&_pgen_tmp_33_591, 0, sizeof(_pgen_tmp_33_591));
  memset(&_pgen_tmp_34_592, 0, sizeof(_pgen_tmp_34_592));
  memset(&_pgen_tmp_35_593, 0, sizeof(_pgen_tmp_35_593));
  memset(&_pgen_tmp_36_594, 0, sizeof(_pgen_tmp_36_594));
  memset(&_pgen_tmp_37_595, 0, sizeof(_pgen_tmp_37_595));
  memset(&_pgen_tmp_38_596, 0, sizeof(_pgen_tmp_38_596));
  memset(&_pgen_tmp_39_597, 0, sizeof(_pgen_tmp_39_597));
  memset(&_pgen_tmp_40_598, 0, sizeof(_pgen_tmp_40_598));
  memset(&_pgen_tmp_41_599, 0, sizeof(_pgen_tmp_41_599));
  memset(&_pgen_tmp_42_600, 0, sizeof(_pgen_tmp_42_600));
  memset(&_pgen_tmp_43_601, 0, sizeof(_pgen_tmp_43_601));
  memset(&_pgen_tmp_44_602, 0, sizeof(_pgen_tmp_44_602));
  memset(&_pgen_tmp_45_603, 0, sizeof(_pgen_tmp_45_603));
  memset(&_pgen_tmp_46_604, 0, sizeof(_pgen_tmp_46_604));
  memset(&_pgen_tmp_47_605, 0, sizeof(_pgen_tmp_47_605));
  memset(&_pgen_tmp_48_606, 0, sizeof(_pgen_tmp_48_606));
  memset(&_pgen_tmp_49_607, 0, sizeof(_pgen_tmp_49_607));
  memset(&_pgen_tmp_50_608, 0, sizeof(_pgen_tmp_50_608));
  memset(&_pgen_tmp_51_609, 0, sizeof(_pgen_tmp_51_609));
  memset(&_pgen_tmp_52_610, 0, sizeof(_pgen_tmp_52_610));
  memset(&_pgen_tmp_53_611, 0, sizeof(_pgen_tmp_53_611));
  memset(&_pgen_tmp_54_612, 0, sizeof(_pgen_tmp_54_612));
  memset(&_pgen_tmp_55_613, 0, sizeof(_pgen_tmp_55_613));
  memset(&_pgen_tmp_56_614, 0, sizeof(_pgen_tmp_56_614));
  memset(&_pgen_tmp_57_615, 0, sizeof(_pgen_tmp_57_615));
  memset(&_pgen_tmp_58_616, 0, sizeof(_pgen_tmp_58_616));
  memset(&_pgen_tmp_59_617, 0, sizeof(_pgen_tmp_59_617));
  memset(&_pgen_tmp_60_618, 0, sizeof(_pgen_tmp_60_618));
  memset(&_pgen_tmp_61_619, 0, sizeof(_pgen_tmp_61_619));
  memset(&_pgen_tmp_62_620, 0, sizeof(_pgen_tmp_62_620));
  memset(&_pgen_tmp_63_621, 0, sizeof(_pgen_tmp_63_621));
  memset(&_pgen_tmp_64_622, 0, sizeof(_pgen_tmp_64_622));
  memset(&_pgen_tmp_65_623, 0, sizeof(_pgen_tmp_65_623));
  memset(&_pgen_tmp_66_624, 0, sizeof(_pgen_tmp_66_624));
  memset(&_pgen_tmp_67_625, 0, sizeof(_pgen_tmp_67_625));
  memset(&_pgen_tmp_68_626, 0, sizeof(_pgen_tmp_68_626));
  memset(&_pgen_tmp_69_627, 0, sizeof(_pgen_tmp_69_627));
  memset(&_pgen_tmp_70_628, 0, sizeof(_pgen_tmp_70_628));
  memset(&_pgen_tmp_71_629, 0, sizeof(_pgen_tmp_71_629));
  memset(&_pgen_tmp_72_630, 0, sizeof(_pgen_tmp_72_630));
  memset(&_pgen_tmp_73_631, 0, sizeof(_pgen_tmp_73_631));
  memset(&_pgen_tmp_74_632, 0, sizeof(_pgen_tmp_74_632));
  memset(&_pgen_tmp_75_633, 0, sizeof(_pgen_tmp_75_633));
  memset(&_pgen_tmp_76_634, 0, sizeof(_pgen_tmp_76_634));
  memset(&_pgen_tmp_77_635, 0, sizeof(_pgen_tmp_77_635));
  memset(&_pgen_tmp_78_636, 0, sizeof(_pgen_tmp_78_636));
  memset(&_pgen_tmp_79_637, 0, sizeof(_pgen_tmp_79_637));
  memset(&_pgen_tmp_80_638, 0, sizeof(_pgen_tmp_80_638));
  memset(&_pgen_tmp_81_639, 0, sizeof(_pgen_tmp_81_639));
  memset(&_pgen_tmp_82_640, 0, sizeof(_pgen_tmp_82_640));
  memset(&_pgen_tmp_83_641, 0, sizeof(_pgen_tmp_83_641));
  memset(&_pgen_tmp_84_642, 0, sizeof(_pgen_tmp_84_642));
  memset(&_pgen_tmp_85_643, 0, sizeof(_pgen_tmp_85_643));
  memset(&_pgen_tmp_86_644, 0, sizeof(_pgen_tmp_86_644));
  memset(&_pgen_tmp_87_645, 0, sizeof(_pgen_tmp_87_645));
  memset(&_pgen_tmp_88_646, 0, sizeof(_pgen_tmp_88_646));
  memset(&_pgen_tmp_89_647, 0, sizeof(_pgen_tmp_89_647));
  memset(&_pgen_tmp_90_648, 0, sizeof(_pgen_tmp_90_648));
  memset(&_pgen_tmp_91_649, 0, sizeof(_pgen_tmp_91_649));
  memset(&_pgen_tmp_92_650, 0, sizeof(_pgen_tmp_92_650));
  memset(&_pgen_tmp_93_651, 0, sizeof(_pgen_tmp_93_651));
  memset(&_pgen_tmp_94_652, 0, sizeof(_pgen_tmp_94_652));
  memset(&_pgen_tmp_95_653, 0, sizeof(_pgen_tmp_95_653));
  memset(&_pgen_tmp_96_654, 0, sizeof(_pgen_tmp_96_654));
  memset(&_pgen_tmp_97_655, 0, sizeof(_pgen_tmp_97_655));
  memset(&_pgen_tmp_98_656, 0, sizeof(_pgen_tmp_98_656));
  memset(&_pgen_tmp_99_657, 0, sizeof(_pgen_tmp_99_657));
  memset(&_pgen_tmp_100_658, 0, sizeof(_pgen_tmp_100_658));
  memset(&_pgen_tmp_101_659, 0, sizeof(_pgen_tmp_101_659));
  memset(&_pgen_tmp_102_660, 0, sizeof(_pgen_tmp_102_660));
  memset(&_pgen_tmp_103_661, 0, sizeof(_pgen_tmp_103_661));
  memset(&_pgen_tmp_104_662, 0, sizeof(_pgen_tmp_104_662));
  memset(&_pgen_tmp_105_663, 0, sizeof(_pgen_tmp_105_663));
  memset(&_pgen_tmp_106_664, 0, sizeof(_pgen_tmp_106_664));
  memset(&_pgen_tmp_107_665, 0, sizeof(_pgen_tmp_107_665));
  memset(&_pgen_tmp_108_666, 0, sizeof(_pgen_tmp_108_666));
  memset(&_pgen_tmp_109_667, 0, sizeof(_pgen_tmp_109_667));
  memset(&_pgen_tmp_110_668, 0, sizeof(_pgen_tmp_110_668));
  memset(&_pgen_tmp_111_669, 0, sizeof(_pgen_tmp_111_669));
  memset(&_pgen_tmp_112_670, 0, sizeof(_pgen_tmp_112_670));
  memset(&_pgen_tmp_113_671, 0, sizeof(_pgen_tmp_113_671));
  memset(&_pgen_tmp_114_672, 0, sizeof(_pgen_tmp_114_672));
  memset(&_pgen_tmp_115_673, 0, sizeof(_pgen_tmp_115_673));
  memset(&_pgen_tmp_116_674, 0, sizeof(_pgen_tmp_116_674));
  memset(&_pgen_tmp_117_675, 0, sizeof(_pgen_tmp_117_675));
  memset(&_pgen_tmp_118_676, 0, sizeof(_pgen_tmp_118_676));
  memset(&_pgen_tmp_119_677, 0, sizeof(_pgen_tmp_119_677));
  memset(&_pgen_tmp_120_678, 0, sizeof(_pgen_tmp_120_678));
  memset(&_pgen_tmp_121_679, 0, sizeof(_pgen_tmp_121_679));
  memset(&_pgen_tmp_122_680, 0, sizeof(_pgen_tmp_122_680));
  memset(&_pgen_tmp_123_681, 0, sizeof(_pgen_tmp_123_681));
  memset(&_pgen_tmp_124_682, 0, sizeof(_pgen_tmp_124_682));
  memset(&_pgen_tmp_125_683, 0, sizeof(_pgen_tmp_125_683));
  memset(&_pgen_tmp_126_684, 0, sizeof(_pgen_tmp_126_684));
  memset(&_pgen_tmp_127_685, 0, sizeof(_pgen_tmp_127_685));
  memset(&_pgen_tmp_128_686, 0, sizeof(_pgen_tmp_128_686));
  memset(&_pgen_tmp_129_687, 0, sizeof(_pgen_tmp_129_687));
  memset(&_pgen_tmp_130_688, 0, sizeof(_pgen_tmp_130_688));
  memset(&_pgen_tmp_131_689, 0, sizeof(_pgen_tmp_131_689));
  memset(&_pgen_tmp_132_690, 0, sizeof(_pgen_tmp_132_690));
  memset(&_pgen_tmp_133_691, 0, sizeof(_pgen_tmp_133_691));
  memset(&_pgen_tmp_134_692, 0, sizeof(_pgen_tmp_134_692));
  memset(&_pgen_tmp_135_693, 0, sizeof(_pgen_tmp_135_693));
  memset(&_pgen_tmp_136_694, 0, sizeof(_pgen_tmp_136_694));
  memset(&_pgen_tmp_137_695, 0, sizeof(_pgen_tmp_137_695));
  memset(&_pgen_tmp_138_696, 0, sizeof(_pgen_tmp_138_696));
  memset(&_pgen_tmp_139_697, 0, sizeof(_pgen_tmp_139_697));
  memset(&_pgen_tmp_140_698, 0, sizeof(_pgen_tmp_140_698));
  memset(&_pgen_tmp_141_699, 0, sizeof(_pgen_tmp_141_699));
  memset(&_pgen_tmp_142_700, 0, sizeof(_pgen_tmp_142_700));
  memset(&_pgen_tmp_143_701, 0, sizeof(_pgen_tmp_143_701));
  memset(&_pgen_tmp_144_702, 0, sizeof(_pgen_tmp_144_702));
  memset(&_pgen_tmp_145_703, 0, sizeof(_pgen_tmp_145_703));
  memset(&_pgen_tmp_146_704, 0, sizeof(_pgen_tmp_146_704));
  memset(&_pgen_tmp_147_705, 0, sizeof(_pgen_tmp_147_705));
  memset(&_pgen_tmp_148_706, 0, sizeof(_pgen_tmp_148_706));
  memset(&_pgen_tmp_149_707, 0, sizeof(_pgen_tmp_149_707));
  memset(&_pgen_tmp_150_708, 0, sizeof(_pgen_tmp_150_708));
  memset(&_pgen_tmp_151_709, 0, sizeof(_pgen_tmp_151_709));
  memset(&_pgen_tmp_152_710, 0, sizeof(_pgen_tmp_152_710));
  memset(&_pgen_tmp_153_711, 0, sizeof(_pgen_tmp_153_711));
  memset(&_pgen_tmp_154_712, 0, sizeof(_pgen_tmp_154_712));
  memset(&_pgen_tmp_155_713, 0, sizeof(_pgen_tmp_155_713));
  memset(&_pgen_tmp_156_714, 0, sizeof(_pgen_tmp_156_714));
  memset(&_pgen_tmp_157_715, 0, sizeof(_pgen_tmp_157_715));
  memset(&_pgen_tmp_158_716, 0, sizeof(_pgen_tmp_158_716));
  memset(&_pgen_tmp_159_717, 0, sizeof(_pgen_tmp_159_717));
  memset(&_pgen_tmp_160_718, 0, sizeof(_pgen_tmp_160_718));
  memset(&_pgen_tmp_161_719, 0, sizeof(_pgen_tmp_161_719));
  memset(&_pgen_tmp_162_720, 0, sizeof(_pgen_tmp_162_720));
  memset(&_pgen_tmp_163_721, 0, sizeof(_pgen_tmp_163_721));
  memset(&_pgen_tmp_164_722, 0, sizeof(_pgen_tmp_164_722));
  memset(&_pgen_tmp_165_723, 0, sizeof(_pgen_tmp_165_723));
  memset(&_pgen_tmp_166_724, 0, sizeof(_pgen_tmp_166_724));
  memset(&_pgen_tmp_167_725, 0, sizeof(_pgen_tmp_167_725));
  memset(&_pgen_tmp_168_726, 0, sizeof(_pgen_tmp_168_726));
  memset(&_pgen_tmp_169_727, 0, sizeof(_pgen_tmp_169_727));
  memset(&_pgen_tmp_170_728, 0, sizeof(_pgen_tmp_170_728));
  memset(&_pgen_tmp_171_729, 0, sizeof(_pgen_tmp_171_729));
  memset(&_pgen_tmp_172_730, 0, sizeof(_pgen_tmp_172_730));
  memset(&_pgen_tmp_173_731, 0, sizeof(_pgen_tmp_173_731));
  memset(&_pgen_tmp_174_732, 0, sizeof(_pgen_tmp_174_732));
  memset(&_pgen_tmp_175_733, 0, sizeof(_pgen_tmp_175_733));
  memset(&_pgen_tmp_176_734, 0, sizeof(_pgen_tmp_176_734));
  memset(&_pgen_tmp_177_735, 0, sizeof(_pgen_tmp_177_735));
  memset(&_pgen_tmp_178_736, 0, sizeof(_pgen_tmp_178_736));
  memset(&_pgen_tmp_179_737, 0, sizeof(_pgen_tmp_179_737));
  memset(&_pgen_tmp_180_738, 0, sizeof(_pgen_tmp_180_738));
  memset(&_pgen_tmp_181_739, 0, sizeof(_pgen_tmp_181_739));
  memset(&_pgen_tmp_182_740, 0, sizeof(_pgen_tmp_182_740));
  memset(&_pgen_tmp_183_741, 0, sizeof(_pgen_tmp_183_741));
  memset(&_pgen_tmp_184_742, 0, sizeof(_pgen_tmp_184_742));
  memset(&_pgen_tmp_185_743, 0, sizeof(_pgen_tmp_185_743));
  memset(&_pgen_tmp_186_744, 0, sizeof(_pgen_tmp_186_744));
  memset(&_pgen_tmp_187_745, 0, sizeof(_pgen_tmp_187_745));
  memset(&_pgen_tmp_188_746, 0, sizeof(_pgen_tmp_188_746));
  memset(&_pgen_tmp_189_747, 0, sizeof(_pgen_tmp_189_747));
  memset(&_pgen_tmp_190_748, 0, sizeof(_pgen_tmp_190_748));
  memset(&_pgen_tmp_191_749, 0, sizeof(_pgen_tmp_191_749));
  memset(&_pgen_tmp_192_750, 0, sizeof(_pgen_tmp_192_750));
  memset(&_pgen_tmp_193_751, 0, sizeof(_pgen_tmp_193_751));
  memset(&_pgen_tmp_194_752, 0, sizeof(_pgen_tmp_194_752));
  memset(&_pgen_tmp_195_753, 0, sizeof(_pgen_tmp_195_753));
  memset(&_pgen_tmp_196_754, 0, sizeof(_pgen_tmp_196_754));
  memset(&_pgen_tmp_197_755, 0, sizeof(_pgen_tmp_197_755));
  memset(&_pgen_tmp_198_756, 0, sizeof(_pgen_tmp_198_756));
  memset(&_pgen_tmp_199_757, 0, sizeof(_pgen_tmp_199_757));
  memset(&_pgen_tmp_200_758, 0, sizeof(_pgen_tmp_200_758));
  memset(&_pgen_tmp_201_759, 0, sizeof(_pgen_tmp_201_759));
  memset(&_pgen_tmp_202_760, 0, sizeof(_pgen_tmp_202_760));
  memset(&_pgen_tmp_203_761, 0, sizeof(_pgen_tmp_203_761));
  memset(&_pgen_tmp_204_762, 0, sizeof(_pgen_tmp_204_762));
  memset(&_pgen_tmp_205_763, 0, sizeof(_pgen_tmp_205_763));
  memset(&_pgen_tmp_206_764, 0, sizeof(_pgen_tmp_206_764));
  memset(&_pgen_tmp_207_765, 0, sizeof(_pgen_tmp_207_765));
  memset(&_pgen_tmp_208_766, 0, sizeof(_pgen_tmp_208_766));
  memset(&_pgen_tmp_209_767, 0, sizeof(_pgen_tmp_209_767));
  memset(&_pgen_tmp_210_768, 0, sizeof(_pgen_tmp_210_768));
  memset(&_pgen_tmp_211_769, 0, sizeof(_pgen_tmp_211_769));
  memset(&_pgen_tmp_212_770, 0, sizeof(_pgen_tmp_212_770));
  memset(&_pgen_tmp_213_771, 0, sizeof(_pgen_tmp_213_771));
  memset(&_pgen_tmp_214_772, 0, sizeof(_pgen_tmp_214_772));
  memset(&_pgen_tmp_215_773, 0, sizeof(_pgen_tmp_215_773));
  memset(&_pgen_tmp_216_774, 0, sizeof(_pgen_tmp_216_774));
  memset(&_pgen_tmp_217_775, 0, sizeof(_pgen_tmp_217_775));
  memset(&_pgen_tmp_218_776, 0, sizeof(_pgen_tmp_218_776));
  memset(&_pgen_tmp_219_777, 0, sizeof(_pgen_tmp_219_777));
  memset(&_pgen_tmp_220_778, 0, sizeof(_pgen_tmp_220_778));
  memset(&_pgen_tmp_221_779, 0, sizeof(_pgen_tmp_221_779));
  memset(&_pgen_tmp_222_780, 0, sizeof(_pgen_tmp_222_780));
  memset(&_pgen_tmp_223_781, 0, sizeof(_pgen_tmp_223_781));
  memset(&_pgen_tmp_224_782, 0, sizeof(_pgen_tmp_224_782));
  memset(&_pgen_tmp_225_783, 0, sizeof(_pgen_tmp_225_783));
  memset(&_pgen_tmp_226_784, 0, sizeof(_pgen_tmp_226_784));
  memset(&_pgen_tmp_227_785, 0, sizeof(_pgen_tmp_227_785));
  memset(&_pgen_tmp_228_786, 0, sizeof(_pgen_tmp_228_786));
  memset(&_pgen_tmp_229_787, 0, sizeof(_pgen_tmp_229_787));
  memset(&_pgen_tmp_230_788, 0, sizeof(_pgen_tmp_230_788));
  memset(&_pgen_tmp_231_789, 0, sizeof(_pgen_tmp_231_789));
  memset(&_pgen_tmp_232_790, 0, sizeof(_pgen_tmp_232_790));
  memset(&_pgen_tmp_233_791, 0, sizeof(_pgen_tmp_233_791));
  memset(&_pgen_tmp_234_792, 0, sizeof(_pgen_tmp_234_792));
  memset(&_pgen_tmp_235_793, 0, sizeof(_pgen_tmp_235_793));
  memset(&_pgen_tmp_236_794, 0, sizeof(_pgen_tmp_236_794));
  memset(&_pgen_tmp_237_795, 0, sizeof(_pgen_tmp_237_795));
  memset(&_pgen_tmp_238_796, 0, sizeof(_pgen_tmp_238_796));
  memset(&_pgen_tmp_239_797, 0, sizeof(_pgen_tmp_239_797));
  memset(&_pgen_tmp_240_798, 0, sizeof(_pgen_tmp_240_798));
  memset(&_pgen_tmp_241_799, 0, sizeof(_pgen_tmp_241_799));
  memset(&_pgen_tmp_242_800, 0, sizeof(_pgen_tmp_242_800));
  memset(&_pgen_tmp_243_801, 0, sizeof(_pgen_tmp_243_801));
  memset(&_pgen_tmp_244_802, 0, sizeof(_pgen_tmp_244_802));
  memset(&_pgen_tmp_245_803, 0, sizeof(_pgen_tmp_245_803));
  memset(&_pgen_tmp_246_804, 0, sizeof(_pgen_tmp_246_804));
  memset(&_pgen_tmp_247_805, 0, sizeof(_pgen_tmp_247_805));
  memset(&_pgen_tmp_248_806, 0, sizeof(_pgen_tmp_248_806));
  memset(&_pgen_tmp_249_807, 0, sizeof(_pgen_tmp_249_807));
  memset(&_pgen_tmp_250_808, 0, sizeof(_pgen_tmp_250_808));
  memset(&_pgen_tmp_251_809, 0, sizeof(_pgen_tmp_251_809));
  memset(&_pgen_tmp_252_810, 0, sizeof(_pgen_tmp_252_810));
  memset(&_pgen_tmp_253_811, 0, sizeof(_pgen_tmp_253_811));
  memset(&_pgen_tmp_254_812, 0, sizeof(_pgen_tmp_254_812));
  memset(&_pgen_tmp_255_813, 0, sizeof(_pgen_tmp_255_813));
  memset(&_pgen_tmp_256_814, 0, sizeof(_pgen_tmp_256_814));
  memset(&_pgen_tmp_257_815, 0, sizeof(_pgen_tmp_257_815));
  memset(&_pgen_tmp_258_816, 0, sizeof(_pgen_tmp_258_816));
  memset(&_pgen_tmp_259_817, 0, sizeof(_pgen_tmp_259_817));
  memset(&_pgen_tmp_260_818, 0, sizeof(_pgen_tmp_260_818));
  memset(&_pgen_tmp_261_819, 0, sizeof(_pgen_tmp_261_819));
  memset(&_pgen_tmp_262_820, 0, sizeof(_pgen_tmp_262_820));
  memset(&_pgen_tmp_263_821, 0, sizeof(_pgen_tmp_263_821));
  memset(&_pgen_tmp_264_822, 0, sizeof(_pgen_tmp_264_822));
  memset(&_pgen_tmp_265_823, 0, sizeof(_pgen_tmp_265_823));
  memset(&_pgen_tmp_266_824, 0, sizeof(_pgen_tmp_266_824));
  memset(&_pgen_tmp_267_825, 0, sizeof(_pgen_tmp_267_825));
  memset(&_pgen_tmp_268_826, 0, sizeof(_pgen_tmp_268_826));
  memset(&_pgen_tmp_269_827, 0, sizeof(_pgen_tmp_269_827));
  memset(&_pgen_tmp_270_828, 0, sizeof(_pgen_tmp_270_828));
  memset(&_pgen_tmp_271_829, 0, sizeof(_pgen_tmp_271_829));
  memset(&_pgen_tmp_272_830, 0, sizeof(_pgen_tmp_272_830));
  memset(&_pgen_tmp_273_831, 0, sizeof(_pgen_tmp_273_831));
  memset(&_pgen_tmp_274_832, 0, sizeof(_pgen_tmp_274_832));
  memset(&_pgen_tmp_275_833, 0, sizeof(_pgen_tmp_275_833));
  memset(&_pgen_tmp_276_834, 0, sizeof(_pgen_tmp_276_834));
  memset(&_pgen_tmp_277_835, 0, sizeof(_pgen_tmp_277_835));
  memset(&_pgen_tmp_278_836, 0, sizeof(_pgen_tmp_278_836));
  memset(&_pgen_tmp_279_837, 0, sizeof(_pgen_tmp_279_837));
  memset(&_pgen_tmp_280_838, 0, sizeof(_pgen_tmp_280_838));
  memset(&_pgen_tmp_281_839, 0, sizeof(_pgen_tmp_281_839));
  memset(&_pgen_tmp_282_840, 0, sizeof(_pgen_tmp_282_840));
  memset(&_pgen_tmp_283_841, 0, sizeof(_pgen_tmp_283_841));
  memset(&_pgen_tmp_284_842, 0, sizeof(_pgen_tmp_284_842));
  memset(&_pgen_tmp_285_843, 0, sizeof(_pgen_tmp_285_843));
  memset(&_pgen_tmp_286_844, 0, sizeof(_pgen_tmp_286_844));
  memset(&_pgen_tmp_287_845, 0, sizeof(_pgen_tmp_287_845));
  memset(&_pgen_tmp_288_846, 0, sizeof(_pgen_tmp_288_846));
  memset(&_pgen_tmp_289_847, 0, sizeof(_pgen_tmp_289_847));
  memset(&_pgen_tmp_290_848, 0, sizeof(_pgen_tmp_290_848));
  memset(&_pgen_tmp_291_849, 0, sizeof(_pgen_tmp_291_849));
  memset(&_pgen_tmp_292_850, 0, sizeof(_pgen_tmp_292_850));
  memset(&_pgen_tmp_293_851, 0, sizeof(_pgen_tmp_293_851));
  memset(&_pgen_tmp_294_852, 0, sizeof(_pgen_tmp_294_852));
  memset(&_pgen_tmp_295_853, 0, sizeof(_pgen_tmp_295_853));
  memset(&_pgen_tmp_296_854, 0, sizeof(_pgen_tmp_296_854));
  memset(&_pgen_tmp_297_855, 0, sizeof(_pgen_tmp_297_855));
  memset(&_pgen_tmp_298_856, 0, sizeof(_pgen_tmp_298_856));
  memset(&_pgen_tmp_299_857, 0, sizeof(_pgen_tmp_299_857));
  memset(&_pgen_tmp_300_858, 0, sizeof(_pgen_tmp_300_858));
  memset(&_pgen_tmp_301_859, 0, sizeof(_pgen_tmp_301_859));
  memset(&_pgen_tmp_302_860, 0, sizeof(_pgen_tmp_302_860));
  memset(&_pgen_tmp_303_861, 0, sizeof(_pgen_tmp_303_861));
  memset(&_pgen_tmp_304_862, 0, sizeof(_pgen_tmp_304_862));
  memset(&_pgen_tmp_305_863, 0, sizeof(_pgen_tmp_305_863));
  memset(&_pgen_tmp_306_864, 0, sizeof(_pgen_tmp_306_864));
  memset(&_pgen_tmp_307_865, 0, sizeof(_pgen_tmp_307_865));
  memset(&_pgen_tmp_308_866, 0, sizeof(_pgen_tmp_308_866));
  memset(&_pgen_tmp_309_867, 0, sizeof(_pgen_tmp_309_867));
  memset(&_pgen_tmp_310_868, 0, sizeof(_pgen_tmp_310_868));
  memset(&_pgen_tmp_311_869, 0, sizeof(_pgen_tmp_311_869));
  memset(&_pgen_tmp_312_870, 0, sizeof(_pgen_tmp_312_870));
  memset(&_pgen_tmp_313_871, 0, sizeof(_pgen_tmp_313_871));
  memset(&_pgen_tmp_314_872, 0, sizeof(_pgen_tmp_314_872));
  memset(&_pgen_tmp_315_873, 0, sizeof(_pgen_tmp_315_873));
  memset(&_pgen_tmp_316_874, 0, sizeof(_pgen_tmp_316_874));
  memset(&_pgen_tmp_317_875, 0, sizeof(_pgen_tmp_317_875));
  memset(&_pgen_tmp_318_876, 0, sizeof(_pgen_tmp_318_876));
  memset(&_pgen_tmp_319_877, 0, sizeof(_pgen_tmp_319_877));
  memset(&_pgen_tmp_320_878, 0, sizeof(_pgen_tmp_320_878));
  memset(&_pgen_tmp_321_879, 0, sizeof(_pgen_tmp_321_879));
  memset(&_pgen_tmp_322_880, 0, sizeof(_pgen_tmp_322_880));
  memset(&_pgen_tmp_323_881, 0, sizeof(_pgen_tmp_323_881));
  memset(&_pgen_tmp_324_882, 0, sizeof(_pgen_tmp_324_882));
  memset(&_pgen_tmp_325_883, 0, sizeof(_pgen_tmp_325_883));
  memset(&_pgen_tmp_326_884, 0, sizeof(_pgen_tmp_326_884));
  memset(&_pgen_tmp_327_885, 0, sizeof(_pgen_tmp_327_885));
  memset(&_pgen_tmp_328_886, 0, sizeof(_pgen_tmp_328_886));
  memset(&_pgen_tmp_329_887, 0, sizeof(_pgen_tmp_329_887));
  memset(&_pgen_tmp_330_888, 0, sizeof(_pgen_tmp_330_888));
  memset(&_pgen_tmp_331_889, 0, sizeof(_pgen_tmp_331_889));
  memset(&_pgen_tmp_332_890, 0, sizeof(_pgen_tmp_332_890));
  memset(&_pgen_tmp_333_891, 0, sizeof(_pgen_tmp_333_891));
  memset(&_pgen_tmp_334_892, 0, sizeof(_pgen_tmp_334_892));
  memset(&_pgen_tmp_335_893, 0, sizeof(_pgen_tmp_335_893));
  memset(&_pgen_tmp_336_894, 0, sizeof(_pgen_tmp_336_894));
  memset(&_pgen_tmp_337_895, 0, sizeof(_pgen_tmp_337_895));
  memset(&_pgen_tmp_338_896, 0, sizeof(_pgen_tmp_338_896));
  memset(&_pgen_tmp_339_897, 0, sizeof(_pgen_tmp_339_897));
  memset(&_pgen_tmp_340_898, 0, sizeof(_pgen_tmp_340_898));
  memset(&_pgen_tmp_341_899, 0, sizeof(_pgen_tmp_341_899));
  memset(&_pgen_tmp_342_900, 0, sizeof(_pgen_tmp_342_900));
  memset(&_pgen_tmp_343_901, 0, sizeof(_pgen_tmp_343_901));
  memset(&_pgen_tmp_344_902, 0, sizeof(_pgen_tmp_344_902));
  memset(&_pgen_tmp_345_903, 0, sizeof(_pgen_tmp_345_903));
  memset(&_pgen_tmp_346_904, 0, sizeof(_pgen_tmp_346_904));
  memset(&_pgen_tmp_347_905, 0, sizeof(_pgen_tmp_347_905));
  memset(&_pgen_tmp_348_906, 0, sizeof(_pgen_tmp_348_906));
  memset(&_pgen_tmp_349_907, 0, sizeof(_pgen_tmp_349_907));
  memset(&_pgen_tmp_350_908, 0, sizeof(_pgen_tmp_350_908));
  memset(&_pgen_tmp_351_909, 0, sizeof(_pgen_tmp_351_909));
  memset(&_pgen_tmp_352_910, 0, sizeof(_pgen_tmp_352_910));
  memset(&_pgen_tmp_353_911, 0, sizeof(_pgen_tmp_353_911));
  memset(&_pgen_tmp_354_912, 0, sizeof(_pgen_tmp_354_912));
  memset(&_pgen_tmp_355_913, 0, sizeof(_pgen_tmp_355_913));
  memset(&_pgen_tmp_356_914, 0, sizeof(_pgen_tmp_356_914));
  memset(&_pgen_tmp_357_915, 0, sizeof(_pgen_tmp_357_915));
  memset(&_pgen_tmp_358_916, 0, sizeof(_pgen_tmp_358_916));
  memset(&_pgen_tmp_359_917, 0, sizeof(_pgen_tmp_359_917));
  memset(&_pgen_tmp_360_918, 0, sizeof(_pgen_tmp_360_918));
  memset(&_pgen_tmp_361_919, 0, sizeof(_pgen_tmp_361_919));
  memset(&_pgen_tmp_362_920, 0, sizeof(_pgen_tmp_362_920));
  memset(&_pgen_tmp_363_921, 0, sizeof(_pgen_tmp_363_921));
  memset(&_pgen_tmp_364_922, 0, sizeof(_pgen_tmp_364_922));
  memset(&_pgen_tmp_365_923, 0, sizeof(_pgen_tmp_365_923));
  memset(&_pgen_tmp_366_924, 0, sizeof(_pgen_tmp_366_924));
  memset(&_pgen_tmp_367_925, 0, sizeof(_pgen_tmp_367_925));
  memset(&_pgen_tmp_368_926, 0, sizeof(_pgen_tmp_368_926));
  memset(&_pgen_tmp_369_927, 0, sizeof(_pgen_tmp_369_927));
  memset(&_pgen_tmp_370_928, 0, sizeof(_pgen_tmp_370_928));
  memset(&_pgen_tmp_371_929, 0, sizeof(_pgen_tmp_371_929));
  memset(&_pgen_tmp_372_930, 0, sizeof(_pgen_tmp_372_930));
  memset(&_pgen_tmp_373_931, 0, sizeof(_pgen_tmp_373_931));
  memset(&_pgen_tmp_374_932, 0, sizeof(_pgen_tmp_374_932));
  memset(&_pgen_tmp_375_933, 0, sizeof(_pgen_tmp_375_933));
  memset(&_pgen_tmp_376_934, 0, sizeof(_pgen_tmp_376_934));
  memset(&_pgen_tmp_377_935, 0, sizeof(_pgen_tmp_377_935));
  memset(&_pgen_tmp_378_936, 0, sizeof(_pgen_tmp_378_936));
  memset(&_pgen_tmp_379_937, 0, sizeof(_pgen_tmp_379_937));
  memset(&_pgen_tmp_380_938, 0, sizeof(_pgen_tmp_380_938));
  memset(&_pgen_tmp_381_939, 0, sizeof(_pgen_tmp_381_939));
  memset(&_pgen_tmp_382_940, 0, sizeof(_pgen_tmp_382_940));
  memset(&_pgen_tmp_383_941, 0, sizeof(_pgen_tmp_383_941));
  memset(&_pgen_tmp_384_942, 0, sizeof(_pgen_tmp_384_942));
  memset(&_pgen_tmp_385_943, 0, sizeof(_pgen_tmp_385_943));
  memset(&_pgen_tmp_386_944, 0, sizeof(_pgen_tmp_386_944));
  memset(&_pgen_tmp_387_945, 0, sizeof(_pgen_tmp_387_945));
  memset(&_pgen_tmp_388_946, 0, sizeof(_pgen_tmp_388_946));
  memset(&_pgen_tmp_389_947, 0, sizeof(_pgen_tmp_389_947));
  memset(&_pgen_tmp_390_948, 0, sizeof(_pgen_tmp_390_948));
  memset(&_pgen_tmp_391_949, 0, sizeof(_pgen_tmp_391_949));
  memset(&_pgen_tmp_392_950, 0, sizeof(_pgen_tmp_392_950));
  memset(&_pgen_tmp_393_951, 0, sizeof(_pgen_tmp_393_951));
  memset(&_pgen_tmp_394_952, 0, sizeof(_pgen_tmp_394_952));
  memset(&_pgen_tmp_395_953, 0, sizeof(_pgen_tmp_395_953));
  memset(&_pgen_tmp_396_954, 0, sizeof(_pgen_tmp_396_954));
  memset(&_pgen_tmp_397_955, 0, sizeof(_pgen_tmp_397_955));
  memset(&_pgen_tmp_398_956, 0, sizeof(_pgen_tmp_398_956));
  memset(&_pgen_tmp_399_957, 0, sizeof(_pgen_tmp_399_957));
  memset(&_pgen_tmp_400_958, 0, sizeof(_pgen_tmp_400_958));
  memset(&_pgen_tmp_401_959, 0, sizeof(_pgen_tmp_401_959));
  memset(&_pgen_tmp_402_960, 0, sizeof(_pgen_tmp_402_960));
  memset(&_pgen_tmp_403_961, 0, sizeof(_pgen_tmp_403_961));
  memset(&_pgen_tmp_404_962, 0, sizeof(_pgen_tmp_404_962));
  memset(&_pgen_tmp_405_963, 0, sizeof(_pgen_tmp_405_963));
  memset(&_pgen_tmp_406_964, 0, sizeof(_pgen_tmp_406_964));
  memset(&_pgen_tmp_407_965, 0, sizeof(_pgen_tmp_407_965));
  memset(&_pgen_tmp_408_966, 0, sizeof(_pgen_tmp_408_966));
  memset(&_pgen_tmp_409_967, 0, sizeof(_pgen_tmp_409_967));
  memset(&_pgen_tmp_410_968, 0, sizeof(_pgen_tmp_410_968));
  memset(&_pgen_tmp_411_969, 0, sizeof(_pgen_tmp_411_969));
  memset(&_pgen_tmp_412_970, 0, sizeof(_pgen_tmp_412_970));
  memset(&_pgen_tmp_413_971, 0, sizeof(_pgen_tmp_413_971));
  memset(&_pgen_tmp_414_972, 0, sizeof(_pgen_tmp_414_972));
  memset(&_pgen_tmp_415_973, 0, sizeof(_pgen_tmp_415_973));
  memset(&_pgen_tmp_416_974, 0, sizeof(_pgen_tmp_416_974));
  memset(&_pgen_tmp_417_975, 0, sizeof(_pgen_tmp_417_975));
  memset(&_pgen_tmp_418_976, 0, sizeof(_pgen_tmp_418_976));
  memset(&_pgen_tmp_419_977, 0, sizeof(_pgen_tmp_419_977));
  memset(&_pgen_tmp_420_978, 0, sizeof(_pgen_tmp_420_978));
  memset(&_pgen_tmp_421_979, 0, sizeof(_pgen_tmp_421_979));
  memset(&_pgen_tmp_422_980, 0, sizeof(_pgen_tmp_422_980));
  memset(&_pgen_tmp_423_981, 0, sizeof(_pgen_tmp_423_981));
  memset(&_pgen_tmp_424_982, 0, sizeof(_pgen_tmp_424_982));
  memset(&_pgen_tmp_425_983, 0, sizeof(_pgen_tmp_425_983));
  memset(&_pgen_tmp_426_984, 0, sizeof(_pgen_tmp_426_984));
  memset(&_pgen_tmp_427_985, 0, sizeof(_pgen_tmp_427_985));
  memset(&_pgen_tmp_428_986, 0, sizeof(_pgen_tmp_428_986));
  memset(&_pgen_tmp_429_987, 0, sizeof(_pgen_tmp_429_987));
  memset(&_pgen_tmp_430_988, 0, sizeof(_pgen_tmp_430_988));
  memset(&_pgen_tmp_431_989, 0, sizeof(_pgen_tmp_431_989));
  memset(&_pgen_tmp_432_990, 0, sizeof(_pgen_tmp_432_990));
  memset(&_pgen_tmp_433_991, 0, sizeof(_pgen_tmp_433_991));
  memset(&_pgen_tmp_434_992, 0, sizeof(_pgen_tmp_434_992));
  memset(&_pgen_tmp_435_993, 0, sizeof(_pgen_tmp_435_993));
  memset(&_pgen_tmp_436_994, 0, sizeof(_pgen_tmp_436_994));
  memset(&_pgen_tmp_437_995, 0, sizeof(_pgen_tmp_437_995));
  memset(&_pgen_tmp_438_996, 0, sizeof(_pgen_tmp_438_996));
  memset(&_pgen_tmp_439_997, 0, sizeof(_pgen_tmp_439_997));
  memset(&_pgen_tmp_440_998, 0, sizeof(_pgen_tmp_440_998));
  memset(&_pgen_tmp_441_999, 0, sizeof(_pgen_tmp_441_999));
  memset(&_pgen_tmp_442_1000, 0, sizeof(_pgen_tmp_442_1000));
  memset(&_pgen_tmp_443_1001, 0, sizeof(_pgen_tmp_443_1001));
  memset(&_pgen_tmp_444_1002, 0, sizeof(_pgen_tmp_444_1002));
  memset(&_pgen_tmp_445_1003, 0, sizeof(_pgen_tmp_445_1003));
  memset(&_pgen_tmp_446_1004, 0, sizeof(_pgen_tmp_446_1004));
  memset(&_pgen_tmp_447_1005, 0, sizeof(_pgen_tmp_447_1005));
  memset(&_pgen_tmp_448_1006, 0, sizeof(_pgen_tmp_448_1006));
  memset(&_pgen_tmp_449_1007, 0, sizeof(_pgen_tmp_449_1007));
  memset(&_pgen_tmp_450_1008, 0, sizeof(_pgen_tmp_450_1008));
  memset(&_pgen_tmp_451_1009, 0, sizeof(_pgen_tmp_451_1009));
  memset(&_pgen_tmp_452_1010, 0, sizeof(_pgen_tmp_452_1010));
  memset(&_pgen_tmp_453_1011, 0, sizeof(_pgen_tmp_453_1011));
  memset(&_pgen_tmp_454_1012, 0, sizeof(_pgen_tmp_454_1012));
  memset(&_pgen_tmp_455_1013, 0, sizeof(_pgen_tmp_455_1013));
  memset(&_pgen_tmp_456_1014, 0, sizeof(_pgen_tmp_456_1014));
  memset(&_pgen_tmp_457_1015, 0, sizeof(_pgen_tmp_457_1015));
  memset(&_pgen_tmp_458_1016, 0, sizeof(_pgen_tmp_458_1016));
  memset(&_pgen_tmp_459_1017, 0, sizeof(_pgen_tmp_459_1017));
  memset(&_pgen_tmp_460_1018, 0, sizeof(_pgen_tmp_460_1018));
  memset(&_pgen_tmp_461_1019, 0, sizeof(_pgen_tmp_461_1019));
  memset(&_pgen_tmp_462_1020, 0, sizeof(_pgen_tmp_462_1020));
  memset(&_pgen_tmp_463_1021, 0, sizeof(_pgen_tmp_463_1021));
  memset(&_pgen_tmp_464_1022, 0, sizeof(_pgen_tmp_464_1022));
  memset(&_pgen_tmp_465_1023, 0, sizeof(_pgen_tmp_465_1023));
  memset(&_pgen_tmp_466_1024, 0, sizeof(_pgen_tmp_466_1024));
  memset(&_pgen_tmp_467_1025, 0, sizeof(_pgen_tmp_467_1025));
  memset(&_pgen_tmp_468_1026, 0, sizeof(_pgen_tmp_468_1026));
  memset(&_pgen_tmp_469_1027, 0, sizeof(_pgen_tmp_469_1027));
  memset(&_pgen_tmp_470_1028, 0, sizeof(_pgen_tmp_470_1028));
  memset(&_pgen_tmp_471_1029, 0, sizeof(_pgen_tmp_471_1029));
  memset(&_pgen_tmp_472_1030, 0, sizeof(_pgen_tmp_472_1030));
  memset(&_pgen_tmp_473_1031, 0, sizeof(_pgen_tmp_473_1031));
  memset(&_pgen_tmp_474_1032, 0, sizeof(_pgen_tmp_474_1032));
  memset(&_pgen_tmp_475_1033, 0, sizeof(_pgen_tmp_475_1033));
  memset(&_pgen_tmp_476_1034, 0, sizeof(_pgen_tmp_476_1034));
  memset(&_pgen_tmp_477_1035, 0, sizeof(_pgen_tmp_477_1035));
  memset(&_pgen_tmp_478_1036, 0, sizeof(_pgen_tmp_478_1036));
  memset(&_pgen_tmp_479_1037, 0, sizeof(_pgen_tmp_479_1037));
  memset(&_pgen_tmp_480_1038, 0, sizeof(_pgen_tmp_480_1038));
  memset(&_pgen_tmp_481_1039, 0, sizeof(_pgen_tmp_481_1039));
  memset(&_pgen_tmp_482_1040, 0, sizeof(_pgen_tmp_482_1040));
  memset(&_pgen_tmp_483_1041, 0, sizeof(_pgen_tmp_483_1041));
  memset(&_pgen_tmp_484_1042, 0, sizeof(_pgen_tmp_484_1042));
  memset(&_pgen_tmp_485_1043, 0, sizeof(_pgen_tmp_485_1043));
  memset(&_pgen_tmp_486_1044, 0, sizeof(_pgen_tmp_486_1044));
  memset(&_pgen_tmp_487_1045, 0, sizeof(_pgen_tmp_487_1045));
  memset(&_pgen_tmp_488_1046, 0, sizeof(_pgen_tmp_488_1046));
  memset(&_pgen_tmp_489_1047, 0, sizeof(_pgen_tmp_489_1047));
  memset(&_pgen_tmp_490_1048, 0, sizeof(_pgen_tmp_490_1048));
  memset(&_pgen_tmp_491_1049, 0, sizeof(_pgen_tmp_491_1049));
  memset(&_pgen_tmp_492_1050, 0, sizeof(_pgen_tmp_492_1050));
  memset(&_pgen_tmp_493_1051, 0, sizeof(_pgen_tmp_493_1051));
  memset(&_pgen_tmp_494_1052, 0, sizeof(_pgen_tmp_494_1052));
  memset(&_pgen_tmp_495_1053, 0, sizeof(_pgen_tmp_495_1053));
  memset(&_pgen_tmp_496_1054, 0, sizeof(_pgen_tmp_496_1054));
  memset(&_pgen_tmp_497_1055, 0, sizeof(_pgen_tmp_497_1055));
  memset(&_pgen_tmp_498_1056, 0, sizeof(_pgen_tmp_498_1056));
  memset(&_pgen_tmp_499_1057, 0, sizeof(_pgen_tmp_499_1057));
  memset(&_pgen_tmp_500_1058, 0, sizeof(_pgen_tmp_500_1058));
  memset(&_pgen_tmp_501_1059, 0, sizeof(_pgen_tmp_501_1059));
  memset(&_pgen_tmp_502_1060, 0, sizeof(_pgen_tmp_502_1060));
  memset(&_pgen_tmp_503_1061, 0, sizeof(_pgen_tmp_503_1061));
  memset(&_pgen_tmp_504_1062, 0, sizeof(_pgen_tmp_504_1062));
  memset(&_pgen_tmp_505_1063, 0, sizeof(_pgen_tmp_505_1063));
  memset(&_pgen_tmp_506_1064, 0, sizeof(_pgen_tmp_506_1064));
  memset(&_pgen_tmp_507_1065, 0, sizeof(_pgen_tmp_507_1065));
  memset(&_pgen_tmp_508_1066, 0, sizeof(_pgen_tmp_508_1066));
  memset(&_pgen_tmp_509_1067, 0, sizeof(_pgen_tmp_509_1067));
  memset(&_pgen_tmp_510_1068, 0, sizeof(_pgen_tmp_510_1068));
  memset(&_pgen_tmp_511_1069, 0, sizeof(_pgen_tmp_511_1069));
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
  // Conv_0
  // pragma: 65536, 1027, 33
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv1_1, 0, sizeof(VS_out_conv1_1));
  memset(&VS_out_conv_halo1_2, 0, sizeof(VS_out_conv_halo1_2));
  for (mesh_y_n1_3 = 0; mesh_y_n1_3 < 3; mesh_y_n1_3 = mesh_y_n1_3 + 1) {
    for (mesh_z_n1_4 = 0; mesh_z_n1_4 < 2; mesh_z_n1_4 = mesh_z_n1_4 + 1) {
      Copy_ciph(&_preg_268435456, &input_0[((mesh_y_n1_3 * 2) + mesh_z_n1_4)]);
      Copy_ciph(&input_dup_n27_5, &_preg_268435456);
      for (bs_input_n27_6 = 0; bs_input_n27_6 < 9; bs_input_n27_6 = bs_input_n27_6 + 1) {
        _preg_268435570 = Rotate(input_dup_n27_5, _cst_165[bs_input_n27_6]);
        Copy_ciph(&input_block_n27_7[bs_input_n27_6], &_preg_268435570);
        Free_poly_data(&_preg_268435570._c1_poly);
        Free_poly_data(&_preg_268435570._c0_poly);
      }
      for (mesh_x_n1_8 = 0; mesh_x_n1_8 < 32; mesh_x_n1_8 = mesh_x_n1_8 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=9
        Zero_ciph(&result_n28_9);
        for (num_grid_n28_10 = 0; num_grid_n28_10 < 1; num_grid_n28_10 = num_grid_n28_10 + 1) {
          Zero_ciph(&result_grid_n28_11);
          for (cap_block_n28_12 = 0; cap_block_n28_12 < 9; cap_block_n28_12 = cap_block_n28_12 + 1) {
            _ckks_gen_tmp_102_481 = input_block_n27_7[cap_block_n28_12];
            Pt_from_msg_ofst(&_pgen_tmp_0_558, 0/* cst_161 */, (((((mesh_x_n1_8 * 3) + mesh_y_n1_3) * 9) + (cap_block_n28_12 + (num_grid_n28_10 * 9)))) * (25536), 25536, 1, 4);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_1_559, &_ckks_gen_tmp_102_481, &_pgen_tmp_0_558);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n28_11, &result_grid_n28_11, &_pgen_tmp_1_559);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n28_11._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_1_559._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_102_481._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_0_558._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_1_559._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_102_481._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_0_558._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n28_11._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n28_11._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_1_559._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n28_11._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n28_11._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_1_559._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          _preg_268435571 = Rotate(result_grid_n28_11, num_grid_n28_10 * 25536);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n28_9, &result_n28_9, &_preg_268435571);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n28_9._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&result_n28_9._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n28_9._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435571._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n28_9._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n28_9._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435571._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435571._c1_poly);
          Free_poly_data(&_preg_268435571._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_2_560, 1 /* cst_164 */, 25536, 2, 4);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n28_9, &result_n28_9, &_pgen_tmp_2_560);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n28_9._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n28_9._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n28_9._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_2_560._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n28_9._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n28_9._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_4_562 = VS_out_conv1_1[((mesh_x_n1_8 * 2) + mesh_z_n1_4)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_3_561, &_pgen_tmp_4_562, &result_n28_9);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_3_561._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_3_561._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_4_562._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n28_9._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_3_561._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_4_562._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n28_9._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv1_1[((mesh_x_n1_8 * 2) + mesh_z_n1_4)], &_pgen_tmp_3_561);
      }
    }
  }
  Free_ciph_poly(input_0, 6);
  Free_poly_data(&_preg_268435456._c1_poly);
  Free_poly_data(&_preg_268435456._c0_poly);
  Free_poly_data(&input_dup_n27_5._c1_poly);
  Free_poly_data(&input_dup_n27_5._c0_poly);
  Free_ciph_poly(input_block_n27_7, 9);
  Free_poly_data(&_pgen_tmp_0_558._poly);
  Free_poly_data(&_pgen_tmp_1_559._c1_poly);
  Free_poly_data(&_pgen_tmp_1_559._c0_poly);
  Free_poly_data(&result_grid_n28_11._c1_poly);
  Free_poly_data(&result_grid_n28_11._c0_poly);
  Free_poly_data(&_pgen_tmp_2_560._poly);
  Free_poly_data(&result_n28_9._c1_poly);
  Free_poly_data(&result_n28_9._c0_poly);
  Free_poly_data(&_pgen_tmp_3_561._c1_poly);
  Free_poly_data(&_pgen_tmp_3_561._c0_poly);
  for (rescale_iv_522 = 0; rescale_iv_522 < 64; rescale_iv_522 = rescale_iv_522 + 1) {
    _pgen_tmp_5_563 = VS_out_conv1_1[rescale_iv_522];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_6_564, &_pgen_tmp_5_563);
    Rescale(&_pgen_tmp_6_564._c0_poly, &_pgen_tmp_5_563._c0_poly);
    Rescale(&_pgen_tmp_6_564._c1_poly, &_pgen_tmp_5_563._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv1_1[rescale_iv_522], &_pgen_tmp_6_564);
  }
  Free_poly_data(&_pgen_tmp_6_564._c1_poly);
  Free_poly_data(&_pgen_tmp_6_564._c0_poly);
  for (siv_n1_13 = 0; siv_n1_13 < 64; siv_n1_13 = siv_n1_13 + 1) {
    _pgen_tmp_7_565 = VS_out_conv1_1[siv_n1_13];
    _preg_268435572 = Rotate(_pgen_tmp_7_565, 224);
    Copy_ciph(&x_row28_14, &_preg_268435572);
    Zero_ciph(&comb_row_result29_15);
    for (comb_row_lf_index_n29_16 = 0; comb_row_lf_index_n29_16 < 1; comb_row_lf_index_n29_16 = comb_row_lf_index_n29_16 + 1) {
      _preg_268435573 = Rotate(x_row28_14, 1 << comb_row_lf_index_n29_16);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&x_row28_14, &x_row28_14, &_preg_268435573);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&x_row28_14._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&x_row28_14._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&x_row28_14._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435573._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&x_row28_14._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&x_row28_14._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435573._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435573._c1_poly);
      Free_poly_data(&_preg_268435573._c0_poly);
    }
    for (comb_row_index_n29_17 = 0; comb_row_index_n29_17 < 56; comb_row_index_n29_17 = comb_row_index_n29_17 + 1) {
      _preg_268435574 = Rotate(x_row28_14, comb_row_index_n29_17 * 2);
      Copy_ciph(&_ckks_gen_tmp_221_482, &_preg_268435574);
      Pt_from_msg_ofst(&_pgen_tmp_8_566, 2/* cst_166 */, (comb_row_index_n29_17) * (25088), 25088, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_9_567, &_ckks_gen_tmp_221_482, &_pgen_tmp_8_566);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_row_result29_15, &comb_row_result29_15, &_pgen_tmp_9_567);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&comb_row_result29_15._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_9_567._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_221_482._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_8_566._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_9_567._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_221_482._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_8_566._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_row_result29_15._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_row_result29_15._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_9_567._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_row_result29_15._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_row_result29_15._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_9_567._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435574._c1_poly);
      Free_poly_data(&_preg_268435574._c0_poly);
    }
    Zero_ciph(&comb_rc_result29_18);
    for (comb_rc_lf_index_n29_19 = 0; comb_rc_lf_index_n29_19 < 2; comb_rc_lf_index_n29_19 = comb_rc_lf_index_n29_19 + 1) {
      _preg_268435575 = Rotate(comb_row_result29_15, (1 << comb_rc_lf_index_n29_19) * 336);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_row_result29_15, &comb_row_result29_15, &_preg_268435575);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&comb_row_result29_15._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&comb_row_result29_15._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_row_result29_15._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435575._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_row_result29_15._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_row_result29_15._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435575._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435575._c1_poly);
      Free_poly_data(&_preg_268435575._c0_poly);
    }
    for (comb_rc_index_n29_20 = 0; comb_rc_index_n29_20 < 14; comb_rc_index_n29_20 = comb_rc_index_n29_20 + 1) {
      _preg_268435576 = Rotate(comb_row_result29_15, comb_rc_index_n29_20 * 1344);
      Copy_ciph(&_ckks_gen_tmp_274_483, &_preg_268435576);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_10_568, &_ckks_gen_tmp_274_483);
      Rescale(&_pgen_tmp_10_568._c0_poly, &_ckks_gen_tmp_274_483._c0_poly);
      Rescale(&_pgen_tmp_10_568._c1_poly, &_ckks_gen_tmp_274_483._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg_ofst(&_pgen_tmp_11_569, 3/* cst_167 */, (comb_rc_index_n29_20) * (25088), 25088, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_12_570, &_pgen_tmp_10_568, &_pgen_tmp_11_569);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_rc_result29_18, &comb_rc_result29_18, &_pgen_tmp_12_570);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&comb_rc_result29_18._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_12_570._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_10_568._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_11_569._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_12_570._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_10_568._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_11_569._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_rc_result29_18._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_rc_result29_18._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_12_570._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_rc_result29_18._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_rc_result29_18._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_12_570._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435576._c1_poly);
      Free_poly_data(&_preg_268435576._c0_poly);
    }
    Copy_ciph(&VS_out_conv_halo1_2[siv_n1_13], &comb_rc_result29_18);
    Free_poly_data(&_preg_268435572._c1_poly);
    Free_poly_data(&_preg_268435572._c0_poly);
  }
  Free_ciph_poly(VS_out_conv1_1, 64);
  Free_poly_data(&x_row28_14._c1_poly);
  Free_poly_data(&x_row28_14._c0_poly);
  Free_poly_data(&_pgen_tmp_8_566._poly);
  Free_poly_data(&_ckks_gen_tmp_221_482._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_221_482._c0_poly);
  Free_poly_data(&_pgen_tmp_9_567._c1_poly);
  Free_poly_data(&_pgen_tmp_9_567._c0_poly);
  Free_poly_data(&comb_row_result29_15._c1_poly);
  Free_poly_data(&comb_row_result29_15._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_274_483._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_274_483._c0_poly);
  Free_poly_data(&_pgen_tmp_11_569._poly);
  Free_poly_data(&_pgen_tmp_10_568._c1_poly);
  Free_poly_data(&_pgen_tmp_10_568._c0_poly);
  Free_poly_data(&_pgen_tmp_12_570._c1_poly);
  Free_poly_data(&_pgen_tmp_12_570._c0_poly);
  Free_poly_data(&comb_rc_result29_18._c1_poly);
  Free_poly_data(&comb_rc_result29_18._c0_poly);
  for (rescale_iv_523 = 0; rescale_iv_523 < 64; rescale_iv_523 = rescale_iv_523 + 1) {
    _pgen_tmp_13_571 = VS_out_conv_halo1_2[rescale_iv_523];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_14_572, &_pgen_tmp_13_571);
    Rescale(&_pgen_tmp_14_572._c0_poly, &_pgen_tmp_13_571._c0_poly);
    Rescale(&_pgen_tmp_14_572._c1_poly, &_pgen_tmp_13_571._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv_halo1_2[rescale_iv_523], &_pgen_tmp_14_572);
  }
  Free_poly_data(&_pgen_tmp_14_572._c1_poly);
  Free_poly_data(&_pgen_tmp_14_572._c0_poly);
  for (reshardm_n1_21 = 0; reshardm_n1_21 < 16; reshardm_n1_21 = reshardm_n1_21 + 1) {
    _pgen_tmp_16_574 = VS_out_conv_halo1_2[(reshardm_n1_21 * 4)];
    _pgen_tmp_17_575 = VS_out_conv_halo1_2[((reshardm_n1_21 * 4) + 1)];
    _preg_268435577 = Rotate(_pgen_tmp_17_575, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_18_576, &_pgen_tmp_16_574, &_preg_268435577);
    CMPLR_TM_END(12, 0);
    _pgen_tmp_20_578 = VS_out_conv_halo1_2[((reshardm_n1_21 * 4) + 2)];
    _pgen_tmp_21_579 = VS_out_conv_halo1_2[((reshardm_n1_21 * 4) + 3)];
    _preg_268435578 = Rotate(_pgen_tmp_21_579, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_19_577, &_pgen_tmp_20_578, &_preg_268435578);
    _pgen_modulus_555 = Q_modulus();
    _pgen_num_q_556 = Poly_level(&_pgen_tmp_19_577._c0_poly);
    for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_19_577._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_20_578._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435578._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_19_577._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_20_578._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435578._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      _pgen_modulus_555 = _pgen_modulus_555 + 1;
    }
    CMPLR_TM_END(12, 0);
    _preg_268435579 = Rotate(_pgen_tmp_19_577, -12544);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_15_573, &_pgen_tmp_18_576, &_preg_268435579);
    _pgen_modulus_555 = Q_modulus();
    _pgen_num_q_556 = Poly_level(&_pgen_tmp_15_573._c0_poly);
    for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_18_576._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_16_574._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435577._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_18_576._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_16_574._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435577._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_15_573._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_18_576._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435579._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_15_573._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_18_576._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435579._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      _pgen_modulus_555 = _pgen_modulus_555 + 1;
    }
    CMPLR_TM_END(12, 0);
    Copy_ciph(&output_reshard1_22[reshardm_n1_21], &_pgen_tmp_15_573);
    Free_poly_data(&_preg_268435577._c1_poly);
    Free_poly_data(&_preg_268435577._c0_poly);
    Free_poly_data(&_preg_268435578._c1_poly);
    Free_poly_data(&_preg_268435578._c0_poly);
    Free_poly_data(&_preg_268435579._c1_poly);
    Free_poly_data(&_preg_268435579._c0_poly);
  }
  Free_ciph_poly(VS_out_conv_halo1_2, 64);
  Free_poly_data(&_pgen_tmp_19_577._c1_poly);
  Free_poly_data(&_pgen_tmp_19_577._c0_poly);
  Free_poly_data(&_pgen_tmp_18_576._c1_poly);
  Free_poly_data(&_pgen_tmp_18_576._c0_poly);
  Free_poly_data(&_pgen_tmp_15_573._c1_poly);
  Free_poly_data(&_pgen_tmp_15_573._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 33
  // Relu_1
  // pragma: 65536, 1033, 39
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu1_23, 0, sizeof(VS_out_relu1_23));
  for (mesh_y_n1_24 = 0; mesh_y_n1_24 < 16; mesh_y_n1_24 = mesh_y_n1_24 + 1) {
    for (mesh_z_n1_25 = 0; mesh_z_n1_25 < 1; mesh_z_n1_25 = mesh_z_n1_25 + 1) {
      _pgen_tmp_22_580 = output_reshard1_22[((mesh_y_n1_24 * 1) + mesh_z_n1_25)];
      Bootstrap(&_preg_268435457, &_pgen_tmp_22_580, 14);
      Encode_float(&_pgen_tmp_23_581, &_cst_388, 1, 1, Level(&_preg_268435457));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435459, &_preg_268435457, &_pgen_tmp_23_581);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435459._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435459._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435457._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_23_581._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435459._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435457._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_23_581._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_24_582, &_preg_268435459);
      Rescale(&_pgen_tmp_24_582._c0_poly, &_preg_268435459._c0_poly);
      Rescale(&_pgen_tmp_24_582._c1_poly, &_preg_268435459._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435458 = App_relu(_preg_268435457, _pgen_tmp_24_582, 25088);
      _pgen_tmp_26_584 = VS_out_relu1_23[((mesh_y_n1_24 * 1) + mesh_z_n1_25)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_25_583, &_pgen_tmp_26_584, &_preg_268435458);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_25_583._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_25_583._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_26_584._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435458._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_25_583._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_26_584._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435458._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu1_23[((mesh_y_n1_24 * 1) + mesh_z_n1_25)], &_pgen_tmp_25_583);
    }
  }
  Free_ciph_poly(output_reshard1_22, 16);
  Free_poly_data(&_pgen_tmp_23_581._poly);
  Free_poly_data(&_preg_268435459._c1_poly);
  Free_poly_data(&_preg_268435459._c0_poly);
  Free_poly_data(&_pgen_tmp_24_582._c1_poly);
  Free_poly_data(&_pgen_tmp_24_582._c0_poly);
  Free_poly_data(&_preg_268435457._c1_poly);
  Free_poly_data(&_preg_268435457._c0_poly);
  Free_poly_data(&_preg_268435458._c1_poly);
  Free_poly_data(&_preg_268435458._c0_poly);
  Free_poly_data(&_pgen_tmp_25_583._c1_poly);
  Free_poly_data(&_pgen_tmp_25_583._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 39
  // Conv_2
  // pragma: 65536, 1027, 40
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv2_26, 0, sizeof(VS_out_conv2_26));
  memset(&VS_out_conv_halo2_27, 0, sizeof(VS_out_conv_halo2_27));
  Free_ciph_poly(VS_out_conv_halo2_27, 16);
  for (mesh_y_n2_28 = 0; mesh_y_n2_28 < 1; mesh_y_n2_28 = mesh_y_n2_28 + 1) {
    for (mesh_z_n2_29 = 0; mesh_z_n2_29 < 1; mesh_z_n2_29 = mesh_z_n2_29 + 1) {
      for (mesh_x_n2_30 = 0; mesh_x_n2_30 < 16; mesh_x_n2_30 = mesh_x_n2_30 + 1) {
        Copy_ciph(&_preg_268435460, &VS_out_relu1_23[((mesh_x_n2_30 * 1) + mesh_z_n2_29)]);
        // BlockingRot replicate=1
        Copy_ciph(&input_dup_n29_31, &_preg_268435460);
        // BlockingRot HRot=bs=9
        for (bs_input_n29_32 = 0; bs_input_n29_32 < 9; bs_input_n29_32 = bs_input_n29_32 + 1) {
          _preg_268435580 = Rotate(input_dup_n29_31, _cst_172[bs_input_n29_32]);
          Copy_ciph(&input_block_n29_33[bs_input_n29_32], &_preg_268435580);
          Free_poly_data(&_preg_268435580._c1_poly);
          Free_poly_data(&_preg_268435580._c0_poly);
        }
        Zero_ciph(&result_n30_34);
        for (num_grid_n30_35 = 0; num_grid_n30_35 < 1; num_grid_n30_35 = num_grid_n30_35 + 1) {
          Zero_ciph(&result_grid_n30_36);
          for (cap_block_n30_37 = 0; cap_block_n30_37 < 9; cap_block_n30_37 = cap_block_n30_37 + 1) {
            _ckks_gen_tmp_516_484 = input_block_n29_33[cap_block_n30_37];
            Pt_from_msg_ofst(&_pgen_tmp_27_585, 4/* cst_168 */, (((((mesh_x_n2_30 * 1) + mesh_y_n2_28) * 9) + (cap_block_n30_37 + (num_grid_n30_35 * 9)))) * (25088), 25088, 1, 2);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_28_586, &_ckks_gen_tmp_516_484, &_pgen_tmp_27_585);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n30_36, &result_grid_n30_36, &_pgen_tmp_28_586);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n30_36._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_28_586._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_516_484._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_27_585._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_28_586._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_516_484._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_27_585._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n30_36._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n30_36._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_28_586._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n30_36._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n30_36._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_28_586._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          _preg_268435581 = Rotate(result_grid_n30_36, num_grid_n30_35 * 12544);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n30_34, &result_n30_34, &_preg_268435581);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n30_34._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&result_n30_34._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n30_34._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435581._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n30_34._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n30_34._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435581._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435581._c1_poly);
          Free_poly_data(&_preg_268435581._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_29_587, 5 /* cst_171 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n30_34, &result_n30_34, &_pgen_tmp_29_587);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n30_34._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n30_34._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n30_34._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_29_587._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n30_34._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n30_34._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_31_589 = VS_out_conv2_26[((mesh_x_n2_30 * 1) + mesh_z_n2_29)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_30_588, &_pgen_tmp_31_589, &result_n30_34);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_30_588._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_30_588._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_31_589._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n30_34._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_30_588._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_31_589._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n30_34._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv2_26[((mesh_x_n2_30 * 1) + mesh_z_n2_29)], &_pgen_tmp_30_588);
      }
    }
  }
  Free_ciph_poly(VS_out_relu1_23, 16);
  Free_poly_data(&_preg_268435460._c1_poly);
  Free_poly_data(&_preg_268435460._c0_poly);
  Free_poly_data(&input_dup_n29_31._c1_poly);
  Free_poly_data(&input_dup_n29_31._c0_poly);
  Free_ciph_poly(input_block_n29_33, 9);
  Free_poly_data(&_pgen_tmp_27_585._poly);
  Free_poly_data(&_pgen_tmp_28_586._c1_poly);
  Free_poly_data(&_pgen_tmp_28_586._c0_poly);
  Free_poly_data(&result_grid_n30_36._c1_poly);
  Free_poly_data(&result_grid_n30_36._c0_poly);
  Free_poly_data(&_pgen_tmp_29_587._poly);
  Free_poly_data(&result_n30_34._c1_poly);
  Free_poly_data(&result_n30_34._c0_poly);
  Free_poly_data(&_pgen_tmp_30_588._c1_poly);
  Free_poly_data(&_pgen_tmp_30_588._c0_poly);
  for (rescale_iv_524 = 0; rescale_iv_524 < 16; rescale_iv_524 = rescale_iv_524 + 1) {
    _pgen_tmp_32_590 = VS_out_conv2_26[rescale_iv_524];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_33_591, &_pgen_tmp_32_590);
    Rescale(&_pgen_tmp_33_591._c0_poly, &_pgen_tmp_32_590._c0_poly);
    Rescale(&_pgen_tmp_33_591._c1_poly, &_pgen_tmp_32_590._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv2_26[rescale_iv_524], &_pgen_tmp_33_591);
  }
  Free_poly_data(&_pgen_tmp_33_591._c1_poly);
  Free_poly_data(&_pgen_tmp_33_591._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 40
  // Relu_3
  // pragma: 65536, 1033, 41
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu2_38, 0, sizeof(VS_out_relu2_38));
  for (mesh_y_n2_39 = 0; mesh_y_n2_39 < 16; mesh_y_n2_39 = mesh_y_n2_39 + 1) {
    for (mesh_z_n2_40 = 0; mesh_z_n2_40 < 1; mesh_z_n2_40 = mesh_z_n2_40 + 1) {
      _pgen_tmp_34_592 = VS_out_conv2_26[((mesh_y_n2_39 * 1) + mesh_z_n2_40)];
      Bootstrap(&_preg_268435461, &_pgen_tmp_34_592, 15);
      Encode_float(&_pgen_tmp_35_593, &_cst_389, 1, 1, Level(&_preg_268435461));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435463, &_preg_268435461, &_pgen_tmp_35_593);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435463._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435463._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435461._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_35_593._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435463._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435461._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_35_593._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_36_594, &_preg_268435463);
      Rescale(&_pgen_tmp_36_594._c0_poly, &_preg_268435463._c0_poly);
      Rescale(&_pgen_tmp_36_594._c1_poly, &_preg_268435463._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435462 = App_relu(_preg_268435461, _pgen_tmp_36_594, 25088);
      _pgen_tmp_38_596 = VS_out_relu2_38[((mesh_y_n2_39 * 1) + mesh_z_n2_40)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_37_595, &_pgen_tmp_38_596, &_preg_268435462);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_37_595._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_37_595._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_38_596._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435462._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_37_595._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_38_596._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435462._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu2_38[((mesh_y_n2_39 * 1) + mesh_z_n2_40)], &_pgen_tmp_37_595);
    }
  }
  Free_ciph_poly(VS_out_conv2_26, 16);
  Free_poly_data(&_pgen_tmp_35_593._poly);
  Free_poly_data(&_preg_268435463._c1_poly);
  Free_poly_data(&_preg_268435463._c0_poly);
  Free_poly_data(&_pgen_tmp_36_594._c1_poly);
  Free_poly_data(&_pgen_tmp_36_594._c0_poly);
  Free_poly_data(&_preg_268435461._c1_poly);
  Free_poly_data(&_preg_268435461._c0_poly);
  Free_poly_data(&_preg_268435462._c1_poly);
  Free_poly_data(&_preg_268435462._c0_poly);
  Free_poly_data(&_pgen_tmp_37_595._c1_poly);
  Free_poly_data(&_pgen_tmp_37_595._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 41
  // Conv_4
  // pragma: 65536, 1027, 42
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv3_41, 0, sizeof(VS_out_conv3_41));
  memset(&VS_out_conv_halo3_42, 0, sizeof(VS_out_conv_halo3_42));
  Free_ciph_poly(VS_out_conv_halo3_42, 32);
  for (mesh_y_n3_43 = 0; mesh_y_n3_43 < 16; mesh_y_n3_43 = mesh_y_n3_43 + 1) {
    for (mesh_z_n3_44 = 0; mesh_z_n3_44 < 1; mesh_z_n3_44 = mesh_z_n3_44 + 1) {
      Copy_ciph(&_preg_268435464, &VS_out_relu2_38[((mesh_y_n3_43 * 1) + mesh_z_n3_44)]);
      Copy_ciph(&input_dup_n30_45, &_preg_268435464);
      for (bs_input_n30_46 = 0; bs_input_n30_46 < 1; bs_input_n30_46 = bs_input_n30_46 + 1) {
        _preg_268435582 = Rotate(input_dup_n30_45, _cst_177[bs_input_n30_46]);
        Copy_ciph(&input_block_n30_47[bs_input_n30_46], &_preg_268435582);
        Free_poly_data(&_preg_268435582._c1_poly);
        Free_poly_data(&_preg_268435582._c0_poly);
      }
      for (mesh_x_n3_48 = 0; mesh_x_n3_48 < 32; mesh_x_n3_48 = mesh_x_n3_48 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n31_49);
        for (num_grid_n31_50 = 0; num_grid_n31_50 < 2; num_grid_n31_50 = num_grid_n31_50 + 1) {
          Zero_ciph(&result_grid_n31_51);
          for (cap_block_n31_52 = 0; cap_block_n31_52 < 1; cap_block_n31_52 = cap_block_n31_52 + 1) {
            _ckks_gen_tmp_751_485 = input_block_n30_47[cap_block_n31_52];
            Pt_from_msg_ofst(&_pgen_tmp_39_597, 6/* cst_173 */, (((((mesh_x_n3_48 * 16) + mesh_y_n3_43) * 2) + (cap_block_n31_52 + (num_grid_n31_50 * 1)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_40_598, &_ckks_gen_tmp_751_485, &_pgen_tmp_39_597);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n31_51, &result_grid_n31_51, &_pgen_tmp_40_598);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n31_51._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_40_598._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_751_485._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_39_597._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_40_598._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_751_485._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_39_597._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n31_51._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n31_51._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_40_598._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n31_51._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n31_51._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_40_598._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_42_600, &result_grid_n31_51);
          Rescale(&_pgen_tmp_42_600._c0_poly, &result_grid_n31_51._c0_poly);
          Rescale(&_pgen_tmp_42_600._c1_poly, &result_grid_n31_51._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_43_601, 7/* cst_178 */, (num_grid_n31_50) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_41_599, &_pgen_tmp_42_600, &_pgen_tmp_43_601);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_41_599._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_41_599._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_42_600._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_43_601._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_41_599._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_42_600._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_43_601._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435583 = Rotate(_pgen_tmp_41_599, -25088 + (num_grid_n31_50 * 12544));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_45_603, &result_grid_n31_51);
          Rescale(&_pgen_tmp_45_603._c0_poly, &result_grid_n31_51._c0_poly);
          Rescale(&_pgen_tmp_45_603._c1_poly, &result_grid_n31_51._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_46_604, 8/* cst_179 */, (num_grid_n31_50) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_44_602, &_pgen_tmp_45_603, &_pgen_tmp_46_604);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_44_602._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_44_602._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_45_603._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_46_604._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_44_602._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_45_603._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_46_604._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435584 = Rotate(_pgen_tmp_44_602, num_grid_n31_50 * 12544);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_47_605, &_preg_268435583, &_preg_268435584);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n31_49, &result_n31_49, &_pgen_tmp_47_605);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n31_49._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_47_605._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435583._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435584._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_47_605._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435583._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435584._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n31_49._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n31_49._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_47_605._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n31_49._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n31_49._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_47_605._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435583._c1_poly);
          Free_poly_data(&_preg_268435583._c0_poly);
          Free_poly_data(&_preg_268435584._c1_poly);
          Free_poly_data(&_preg_268435584._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_48_606, 9 /* cst_176 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n31_49, &result_n31_49, &_pgen_tmp_48_606);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n31_49._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n31_49._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n31_49._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_48_606._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n31_49._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n31_49._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_50_608 = VS_out_conv3_41[((mesh_x_n3_48 * 1) + mesh_z_n3_44)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_49_607, &_pgen_tmp_50_608, &result_n31_49);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_49_607._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_49_607._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_50_608._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n31_49._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_49_607._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_50_608._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n31_49._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv3_41[((mesh_x_n3_48 * 1) + mesh_z_n3_44)], &_pgen_tmp_49_607);
      }
    }
  }
  Free_ciph_poly(VS_out_relu2_38, 16);
  Free_poly_data(&_preg_268435464._c1_poly);
  Free_poly_data(&_preg_268435464._c0_poly);
  Free_poly_data(&input_dup_n30_45._c1_poly);
  Free_poly_data(&input_dup_n30_45._c0_poly);
  Free_ciph_poly(input_block_n30_47, 1);
  Free_poly_data(&_pgen_tmp_39_597._poly);
  Free_poly_data(&_pgen_tmp_40_598._c1_poly);
  Free_poly_data(&_pgen_tmp_40_598._c0_poly);
  Free_poly_data(&_pgen_tmp_43_601._poly);
  Free_poly_data(&_pgen_tmp_42_600._c1_poly);
  Free_poly_data(&_pgen_tmp_42_600._c0_poly);
  Free_poly_data(&_pgen_tmp_41_599._c1_poly);
  Free_poly_data(&_pgen_tmp_41_599._c0_poly);
  Free_poly_data(&result_grid_n31_51._c1_poly);
  Free_poly_data(&result_grid_n31_51._c0_poly);
  Free_poly_data(&_pgen_tmp_46_604._poly);
  Free_poly_data(&_pgen_tmp_45_603._c1_poly);
  Free_poly_data(&_pgen_tmp_45_603._c0_poly);
  Free_poly_data(&_pgen_tmp_44_602._c1_poly);
  Free_poly_data(&_pgen_tmp_44_602._c0_poly);
  Free_poly_data(&_pgen_tmp_47_605._c1_poly);
  Free_poly_data(&_pgen_tmp_47_605._c0_poly);
  Free_poly_data(&_pgen_tmp_48_606._poly);
  Free_poly_data(&result_n31_49._c1_poly);
  Free_poly_data(&result_n31_49._c0_poly);
  Free_poly_data(&_pgen_tmp_49_607._c1_poly);
  Free_poly_data(&_pgen_tmp_49_607._c0_poly);
  for (rescale_iv_525 = 0; rescale_iv_525 < 32; rescale_iv_525 = rescale_iv_525 + 1) {
    _pgen_tmp_51_609 = VS_out_conv3_41[rescale_iv_525];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_52_610, &_pgen_tmp_51_609);
    Rescale(&_pgen_tmp_52_610._c0_poly, &_pgen_tmp_51_609._c0_poly);
    Rescale(&_pgen_tmp_52_610._c1_poly, &_pgen_tmp_51_609._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv3_41[rescale_iv_525], &_pgen_tmp_52_610);
  }
  Free_poly_data(&_pgen_tmp_52_610._c1_poly);
  Free_poly_data(&_pgen_tmp_52_610._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 42
  // Relu_5
  // pragma: 65536, 1033, 43
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu3_53, 0, sizeof(VS_out_relu3_53));
  for (mesh_y_n3_54 = 0; mesh_y_n3_54 < 32; mesh_y_n3_54 = mesh_y_n3_54 + 1) {
    for (mesh_z_n3_55 = 0; mesh_z_n3_55 < 1; mesh_z_n3_55 = mesh_z_n3_55 + 1) {
      _pgen_tmp_53_611 = VS_out_conv3_41[((mesh_y_n3_54 * 1) + mesh_z_n3_55)];
      Bootstrap(&_preg_268435465, &_pgen_tmp_53_611, 17);
      Encode_float(&_pgen_tmp_54_612, &_cst_390, 1, 1, Level(&_preg_268435465));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435467, &_preg_268435465, &_pgen_tmp_54_612);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435467._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435467._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435465._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_54_612._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435467._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435465._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_54_612._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_55_613, &_preg_268435467);
      Rescale(&_pgen_tmp_55_613._c0_poly, &_preg_268435467._c0_poly);
      Rescale(&_pgen_tmp_55_613._c1_poly, &_preg_268435467._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435466 = App_relu(_preg_268435465, _pgen_tmp_55_613, 25088);
      _pgen_tmp_57_615 = VS_out_relu3_53[((mesh_y_n3_54 * 1) + mesh_z_n3_55)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_56_614, &_pgen_tmp_57_615, &_preg_268435466);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_56_614._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_56_614._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_57_615._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435466._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_56_614._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_57_615._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435466._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu3_53[((mesh_y_n3_54 * 1) + mesh_z_n3_55)], &_pgen_tmp_56_614);
    }
  }
  Free_ciph_poly(VS_out_conv3_41, 32);
  Free_poly_data(&_pgen_tmp_54_612._poly);
  Free_poly_data(&_preg_268435467._c1_poly);
  Free_poly_data(&_preg_268435467._c0_poly);
  Free_poly_data(&_pgen_tmp_55_613._c1_poly);
  Free_poly_data(&_pgen_tmp_55_613._c0_poly);
  Free_poly_data(&_preg_268435465._c1_poly);
  Free_poly_data(&_preg_268435465._c0_poly);
  Free_poly_data(&_preg_268435466._c1_poly);
  Free_poly_data(&_preg_268435466._c0_poly);
  Free_poly_data(&_pgen_tmp_56_614._c1_poly);
  Free_poly_data(&_pgen_tmp_56_614._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 43
  // Conv_6
  // pragma: 65536, 1027, 44
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv4_56, 0, sizeof(VS_out_conv4_56));
  memset(&VS_out_conv_halo4_57, 0, sizeof(VS_out_conv_halo4_57));
  for (mesh_y_n4_58 = 0; mesh_y_n4_58 < 1; mesh_y_n4_58 = mesh_y_n4_58 + 1) {
    for (mesh_z_n4_59 = 0; mesh_z_n4_59 < 1; mesh_z_n4_59 = mesh_z_n4_59 + 1) {
      for (mesh_x_n4_60 = 0; mesh_x_n4_60 < 32; mesh_x_n4_60 = mesh_x_n4_60 + 1) {
        Copy_ciph(&_preg_268435468, &VS_out_relu3_53[((mesh_x_n4_60 * 1) + mesh_z_n4_59)]);
        // BlockingRot replicate=1
        Copy_ciph(&input_dup_n31_61, &_preg_268435468);
        // BlockingRot HRot=bs=9
        for (bs_input_n31_62 = 0; bs_input_n31_62 < 9; bs_input_n31_62 = bs_input_n31_62 + 1) {
          _preg_268435585 = Rotate(input_dup_n31_61, _cst_184[bs_input_n31_62]);
          Copy_ciph(&input_block_n31_63[bs_input_n31_62], &_preg_268435585);
          Free_poly_data(&_preg_268435585._c1_poly);
          Free_poly_data(&_preg_268435585._c0_poly);
        }
        Zero_ciph(&result_n32_64);
        for (num_grid_n32_65 = 0; num_grid_n32_65 < 1; num_grid_n32_65 = num_grid_n32_65 + 1) {
          Zero_ciph(&result_grid_n32_66);
          for (cap_block_n32_67 = 0; cap_block_n32_67 < 9; cap_block_n32_67 = cap_block_n32_67 + 1) {
            _ckks_gen_tmp_1016_486 = input_block_n31_63[cap_block_n32_67];
            Pt_from_msg_ofst(&_pgen_tmp_58_616, 10/* cst_180 */, (((((mesh_x_n4_60 * 1) + mesh_y_n4_58) * 9) + (cap_block_n32_67 + (num_grid_n32_65 * 9)))) * (25088), 25088, 1, 5);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_59_617, &_ckks_gen_tmp_1016_486, &_pgen_tmp_58_616);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n32_66, &result_grid_n32_66, &_pgen_tmp_59_617);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n32_66._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_59_617._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_1016_486._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_58_616._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_59_617._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_1016_486._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_58_616._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n32_66._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n32_66._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_59_617._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n32_66._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n32_66._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_59_617._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          _preg_268435586 = Rotate(result_grid_n32_66, num_grid_n32_65 * 12544);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n32_64, &result_n32_64, &_preg_268435586);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n32_64._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&result_n32_64._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n32_64._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435586._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n32_64._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n32_64._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435586._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435586._c1_poly);
          Free_poly_data(&_preg_268435586._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_60_618, 11 /* cst_183 */, 25088, 2, 5);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n32_64, &result_n32_64, &_pgen_tmp_60_618);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n32_64._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n32_64._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n32_64._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_60_618._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n32_64._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n32_64._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_62_620 = VS_out_conv4_56[((mesh_x_n4_60 * 1) + mesh_z_n4_59)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_61_619, &_pgen_tmp_62_620, &result_n32_64);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_61_619._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_61_619._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_62_620._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n32_64._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_61_619._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_62_620._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n32_64._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv4_56[((mesh_x_n4_60 * 1) + mesh_z_n4_59)], &_pgen_tmp_61_619);
      }
    }
  }
  Free_ciph_poly(VS_out_relu3_53, 32);
  Free_poly_data(&_preg_268435468._c1_poly);
  Free_poly_data(&_preg_268435468._c0_poly);
  Free_poly_data(&input_dup_n31_61._c1_poly);
  Free_poly_data(&input_dup_n31_61._c0_poly);
  Free_ciph_poly(input_block_n31_63, 9);
  Free_poly_data(&_pgen_tmp_58_616._poly);
  Free_poly_data(&_pgen_tmp_59_617._c1_poly);
  Free_poly_data(&_pgen_tmp_59_617._c0_poly);
  Free_poly_data(&result_grid_n32_66._c1_poly);
  Free_poly_data(&result_grid_n32_66._c0_poly);
  Free_poly_data(&_pgen_tmp_60_618._poly);
  Free_poly_data(&result_n32_64._c1_poly);
  Free_poly_data(&result_n32_64._c0_poly);
  Free_poly_data(&_pgen_tmp_61_619._c1_poly);
  Free_poly_data(&_pgen_tmp_61_619._c0_poly);
  for (rescale_iv_526 = 0; rescale_iv_526 < 32; rescale_iv_526 = rescale_iv_526 + 1) {
    _pgen_tmp_63_621 = VS_out_conv4_56[rescale_iv_526];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_64_622, &_pgen_tmp_63_621);
    Rescale(&_pgen_tmp_64_622._c0_poly, &_pgen_tmp_63_621._c0_poly);
    Rescale(&_pgen_tmp_64_622._c1_poly, &_pgen_tmp_63_621._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv4_56[rescale_iv_526], &_pgen_tmp_64_622);
  }
  Free_poly_data(&_pgen_tmp_64_622._c1_poly);
  Free_poly_data(&_pgen_tmp_64_622._c0_poly);
  for (siv_n4_68 = 0; siv_n4_68 < 32; siv_n4_68 = siv_n4_68 + 1) {
    orig_result32_69 = VS_out_conv4_56[siv_n4_68];
    Zero_ciph(&comb_row_result33_70);
    for (comb_row_lf_index_n33_71 = 0; comb_row_lf_index_n33_71 < 1; comb_row_lf_index_n33_71 = comb_row_lf_index_n33_71 + 1) {
      _preg_268435587 = Rotate(orig_result32_69, 1 << comb_row_lf_index_n33_71);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&orig_result32_69, &orig_result32_69, &_preg_268435587);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&orig_result32_69._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&orig_result32_69._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&orig_result32_69._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435587._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&orig_result32_69._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&orig_result32_69._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435587._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435587._c1_poly);
      Free_poly_data(&_preg_268435587._c0_poly);
    }
    for (comb_row_index_n33_72 = 0; comb_row_index_n33_72 < 28; comb_row_index_n33_72 = comb_row_index_n33_72 + 1) {
      _preg_268435588 = Rotate(orig_result32_69, comb_row_index_n33_72 * 2);
      Copy_ciph(&_ckks_gen_tmp_1133_487, &_preg_268435588);
      Pt_from_msg_ofst(&_pgen_tmp_65_623, 12/* cst_185 */, (comb_row_index_n33_72) * (25088), 25088, 1, 4);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_66_624, &_ckks_gen_tmp_1133_487, &_pgen_tmp_65_623);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_row_result33_70, &comb_row_result33_70, &_pgen_tmp_66_624);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&comb_row_result33_70._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_66_624._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_1133_487._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_65_623._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_66_624._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_1133_487._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_65_623._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_row_result33_70._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_row_result33_70._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_66_624._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_row_result33_70._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_row_result33_70._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_66_624._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435588._c1_poly);
      Free_poly_data(&_preg_268435588._c0_poly);
    }
    Zero_ciph(&comb_rc_result33_73);
    for (comb_rc_lf_index_n33_74 = 0; comb_rc_lf_index_n33_74 < 2; comb_rc_lf_index_n33_74 = comb_rc_lf_index_n33_74 + 1) {
      _preg_268435589 = Rotate(comb_row_result33_70, (1 << comb_rc_lf_index_n33_74) * 168);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_row_result33_70, &comb_row_result33_70, &_preg_268435589);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&comb_row_result33_70._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&comb_row_result33_70._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_row_result33_70._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435589._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_row_result33_70._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_row_result33_70._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435589._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435589._c1_poly);
      Free_poly_data(&_preg_268435589._c0_poly);
    }
    for (comb_rc_index_n33_75 = 0; comb_rc_index_n33_75 < 14; comb_rc_index_n33_75 = comb_rc_index_n33_75 + 1) {
      _preg_268435590 = Rotate(comb_row_result33_70, comb_rc_index_n33_75 * 672);
      Copy_ciph(&_ckks_gen_tmp_1186_488, &_preg_268435590);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_67_625, &_ckks_gen_tmp_1186_488);
      Rescale(&_pgen_tmp_67_625._c0_poly, &_ckks_gen_tmp_1186_488._c0_poly);
      Rescale(&_pgen_tmp_67_625._c1_poly, &_ckks_gen_tmp_1186_488._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg_ofst(&_pgen_tmp_68_626, 13/* cst_186 */, (comb_rc_index_n33_75) * (25088), 25088, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_69_627, &_pgen_tmp_67_625, &_pgen_tmp_68_626);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_rc_result33_73, &comb_rc_result33_73, &_pgen_tmp_69_627);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&comb_rc_result33_73._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_69_627._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_67_625._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_68_626._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_69_627._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_67_625._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_68_626._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_rc_result33_73._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_rc_result33_73._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_69_627._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_rc_result33_73._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_rc_result33_73._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_69_627._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435590._c1_poly);
      Free_poly_data(&_preg_268435590._c0_poly);
    }
    Zero_ciph(&ss_result33_76);
    for (comb_cc_index_n33_77 = 0; comb_cc_index_n33_77 < 1; comb_cc_index_n33_77 = comb_cc_index_n33_77 + 1) {
      _preg_268435591 = Rotate(comb_rc_result33_73, (1 << comb_cc_index_n33_77) * 9408);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_rc_result33_73, &comb_rc_result33_73, &_preg_268435591);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&comb_rc_result33_73._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&comb_rc_result33_73._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_rc_result33_73._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435591._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_rc_result33_73._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_rc_result33_73._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435591._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435591._c1_poly);
      Free_poly_data(&_preg_268435591._c0_poly);
    }
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_70_628, &comb_rc_result33_73);
    Rescale(&_pgen_tmp_70_628._c0_poly, &comb_rc_result33_73._c0_poly);
    Rescale(&_pgen_tmp_70_628._c1_poly, &comb_rc_result33_73._c1_poly);
    CMPLR_TM_END(19, 0);
    Pt_from_msg(&_pgen_tmp_71_629, 14 /* cst_187 */, 6272, 1, 2);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&comb_rc_result33_73, &_pgen_tmp_70_628, &_pgen_tmp_71_629);
    _pgen_modulus_555 = Q_modulus();
    _pgen_num_q_556 = Poly_level(&comb_rc_result33_73._c0_poly);
    for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
      Hw_modmul(Coeffs(&comb_rc_result33_73._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_70_628._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_71_629._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modmul(Coeffs(&comb_rc_result33_73._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_70_628._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_71_629._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      _pgen_modulus_555 = _pgen_modulus_555 + 1;
    }
    CMPLR_TM_END(17, 0);
    Copy_ciph(&ss_result33_76, &comb_rc_result33_73);
    Copy_ciph(&VS_out_conv_halo4_57[siv_n4_68], &ss_result33_76);
  }
  Free_ciph_poly(VS_out_conv4_56, 32);
  Free_poly_data(&_pgen_tmp_65_623._poly);
  Free_poly_data(&_ckks_gen_tmp_1133_487._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1133_487._c0_poly);
  Free_poly_data(&_pgen_tmp_66_624._c1_poly);
  Free_poly_data(&_pgen_tmp_66_624._c0_poly);
  Free_poly_data(&comb_row_result33_70._c1_poly);
  Free_poly_data(&comb_row_result33_70._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_1186_488._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1186_488._c0_poly);
  Free_poly_data(&_pgen_tmp_68_626._poly);
  Free_poly_data(&_pgen_tmp_67_625._c1_poly);
  Free_poly_data(&_pgen_tmp_67_625._c0_poly);
  Free_poly_data(&_pgen_tmp_69_627._c1_poly);
  Free_poly_data(&_pgen_tmp_69_627._c0_poly);
  Free_poly_data(&_pgen_tmp_71_629._poly);
  Free_poly_data(&_pgen_tmp_70_628._c1_poly);
  Free_poly_data(&_pgen_tmp_70_628._c0_poly);
  Free_poly_data(&comb_rc_result33_73._c1_poly);
  Free_poly_data(&comb_rc_result33_73._c0_poly);
  Free_poly_data(&ss_result33_76._c1_poly);
  Free_poly_data(&ss_result33_76._c0_poly);
  for (rescale_iv_527 = 0; rescale_iv_527 < 32; rescale_iv_527 = rescale_iv_527 + 1) {
    _pgen_tmp_72_630 = VS_out_conv_halo4_57[rescale_iv_527];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_73_631, &_pgen_tmp_72_630);
    Rescale(&_pgen_tmp_73_631._c0_poly, &_pgen_tmp_72_630._c0_poly);
    Rescale(&_pgen_tmp_73_631._c1_poly, &_pgen_tmp_72_630._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv_halo4_57[rescale_iv_527], &_pgen_tmp_73_631);
  }
  Free_poly_data(&_pgen_tmp_73_631._c1_poly);
  Free_poly_data(&_pgen_tmp_73_631._c0_poly);
  for (reshardm_n4_78 = 0; reshardm_n4_78 < 8; reshardm_n4_78 = reshardm_n4_78 + 1) {
    _pgen_tmp_75_633 = VS_out_conv_halo4_57[(reshardm_n4_78 * 4)];
    _pgen_tmp_76_634 = VS_out_conv_halo4_57[((reshardm_n4_78 * 4) + 1)];
    _preg_268435592 = Rotate(_pgen_tmp_76_634, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_77_635, &_pgen_tmp_75_633, &_preg_268435592);
    CMPLR_TM_END(12, 0);
    _pgen_tmp_79_637 = VS_out_conv_halo4_57[((reshardm_n4_78 * 4) + 2)];
    _pgen_tmp_80_638 = VS_out_conv_halo4_57[((reshardm_n4_78 * 4) + 3)];
    _preg_268435593 = Rotate(_pgen_tmp_80_638, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_78_636, &_pgen_tmp_79_637, &_preg_268435593);
    _pgen_modulus_555 = Q_modulus();
    _pgen_num_q_556 = Poly_level(&_pgen_tmp_78_636._c0_poly);
    for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_78_636._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_79_637._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435593._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_78_636._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_79_637._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435593._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      _pgen_modulus_555 = _pgen_modulus_555 + 1;
    }
    CMPLR_TM_END(12, 0);
    _preg_268435594 = Rotate(_pgen_tmp_78_636, -12544);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_74_632, &_pgen_tmp_77_635, &_preg_268435594);
    _pgen_modulus_555 = Q_modulus();
    _pgen_num_q_556 = Poly_level(&_pgen_tmp_74_632._c0_poly);
    for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_77_635._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_75_633._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435592._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_77_635._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_75_633._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435592._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_74_632._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_77_635._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435594._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_74_632._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_77_635._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435594._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      _pgen_modulus_555 = _pgen_modulus_555 + 1;
    }
    CMPLR_TM_END(12, 0);
    Copy_ciph(&output_reshard4_79[reshardm_n4_78], &_pgen_tmp_74_632);
    Free_poly_data(&_preg_268435592._c1_poly);
    Free_poly_data(&_preg_268435592._c0_poly);
    Free_poly_data(&_preg_268435593._c1_poly);
    Free_poly_data(&_preg_268435593._c0_poly);
    Free_poly_data(&_preg_268435594._c1_poly);
    Free_poly_data(&_preg_268435594._c0_poly);
  }
  Free_ciph_poly(VS_out_conv_halo4_57, 32);
  Free_poly_data(&_pgen_tmp_78_636._c1_poly);
  Free_poly_data(&_pgen_tmp_78_636._c0_poly);
  Free_poly_data(&_pgen_tmp_77_635._c1_poly);
  Free_poly_data(&_pgen_tmp_77_635._c0_poly);
  Free_poly_data(&_pgen_tmp_74_632._c1_poly);
  Free_poly_data(&_pgen_tmp_74_632._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 44
  // Relu_7
  // pragma: 65536, 1033, 45
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu4_80, 0, sizeof(VS_out_relu4_80));
  for (mesh_y_n4_81 = 0; mesh_y_n4_81 < 8; mesh_y_n4_81 = mesh_y_n4_81 + 1) {
    for (mesh_z_n4_82 = 0; mesh_z_n4_82 < 1; mesh_z_n4_82 = mesh_z_n4_82 + 1) {
      _pgen_tmp_81_639 = output_reshard4_79[((mesh_y_n4_81 * 1) + mesh_z_n4_82)];
      Bootstrap(&_preg_268435469, &_pgen_tmp_81_639, 15);
      Encode_float(&_pgen_tmp_82_640, &_cst_391, 1, 1, Level(&_preg_268435469));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435471, &_preg_268435469, &_pgen_tmp_82_640);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435471._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435471._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435469._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_82_640._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435471._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435469._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_82_640._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_83_641, &_preg_268435471);
      Rescale(&_pgen_tmp_83_641._c0_poly, &_preg_268435471._c0_poly);
      Rescale(&_pgen_tmp_83_641._c1_poly, &_preg_268435471._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435470 = App_relu(_preg_268435469, _pgen_tmp_83_641, 25088);
      _pgen_tmp_85_643 = VS_out_relu4_80[((mesh_y_n4_81 * 1) + mesh_z_n4_82)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_84_642, &_pgen_tmp_85_643, &_preg_268435470);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_84_642._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_84_642._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_85_643._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435470._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_84_642._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_85_643._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435470._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu4_80[((mesh_y_n4_81 * 1) + mesh_z_n4_82)], &_pgen_tmp_84_642);
    }
  }
  Free_ciph_poly(output_reshard4_79, 8);
  Free_poly_data(&_pgen_tmp_82_640._poly);
  Free_poly_data(&_preg_268435471._c1_poly);
  Free_poly_data(&_preg_268435471._c0_poly);
  Free_poly_data(&_pgen_tmp_83_641._c1_poly);
  Free_poly_data(&_pgen_tmp_83_641._c0_poly);
  Free_poly_data(&_preg_268435469._c1_poly);
  Free_poly_data(&_preg_268435469._c0_poly);
  Free_poly_data(&_preg_268435470._c1_poly);
  Free_poly_data(&_preg_268435470._c0_poly);
  Free_poly_data(&_pgen_tmp_84_642._c1_poly);
  Free_poly_data(&_pgen_tmp_84_642._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 45
  // Conv_8
  // pragma: 65536, 1027, 46
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv5_83, 0, sizeof(VS_out_conv5_83));
  memset(&VS_out_conv_halo5_84, 0, sizeof(VS_out_conv_halo5_84));
  Free_ciph_poly(VS_out_conv_halo5_84, 16);
  for (mesh_y_n5_85 = 0; mesh_y_n5_85 < 8; mesh_y_n5_85 = mesh_y_n5_85 + 1) {
    for (mesh_z_n5_86 = 0; mesh_z_n5_86 < 1; mesh_z_n5_86 = mesh_z_n5_86 + 1) {
      Copy_ciph(&_preg_268435472, &VS_out_relu4_80[((mesh_y_n5_85 * 1) + mesh_z_n5_86)]);
      Copy_ciph(&input_dup_n33_87, &_preg_268435472);
      for (bs_input_n33_88 = 0; bs_input_n33_88 < 1; bs_input_n33_88 = bs_input_n33_88 + 1) {
        _preg_268435595 = Rotate(input_dup_n33_87, _cst_192[bs_input_n33_88]);
        Copy_ciph(&input_block_n33_89[bs_input_n33_88], &_preg_268435595);
        Free_poly_data(&_preg_268435595._c1_poly);
        Free_poly_data(&_preg_268435595._c0_poly);
      }
      for (mesh_x_n5_90 = 0; mesh_x_n5_90 < 16; mesh_x_n5_90 = mesh_x_n5_90 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n34_91);
        for (num_grid_n34_92 = 0; num_grid_n34_92 < 8; num_grid_n34_92 = num_grid_n34_92 + 1) {
          Zero_ciph(&result_grid_n34_93);
          for (cap_block_n34_94 = 0; cap_block_n34_94 < 1; cap_block_n34_94 = cap_block_n34_94 + 1) {
            _ckks_gen_tmp_1462_489 = input_block_n33_89[cap_block_n34_94];
            Pt_from_msg_ofst(&_pgen_tmp_86_644, 15/* cst_188 */, (((((mesh_x_n5_90 * 8) + mesh_y_n5_85) * 8) + (cap_block_n34_94 + (num_grid_n34_92 * 1)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_87_645, &_ckks_gen_tmp_1462_489, &_pgen_tmp_86_644);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n34_93, &result_grid_n34_93, &_pgen_tmp_87_645);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n34_93._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_87_645._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_1462_489._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_86_644._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_87_645._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_1462_489._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_86_644._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n34_93._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n34_93._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_87_645._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n34_93._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n34_93._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_87_645._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_89_647, &result_grid_n34_93);
          Rescale(&_pgen_tmp_89_647._c0_poly, &result_grid_n34_93._c0_poly);
          Rescale(&_pgen_tmp_89_647._c1_poly, &result_grid_n34_93._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_90_648, 16/* cst_193 */, (num_grid_n34_92) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_88_646, &_pgen_tmp_89_647, &_pgen_tmp_90_648);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_88_646._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_88_646._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_89_647._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_90_648._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_88_646._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_89_647._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_90_648._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435596 = Rotate(_pgen_tmp_88_646, -25088 + (num_grid_n34_92 * 3136));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_92_650, &result_grid_n34_93);
          Rescale(&_pgen_tmp_92_650._c0_poly, &result_grid_n34_93._c0_poly);
          Rescale(&_pgen_tmp_92_650._c1_poly, &result_grid_n34_93._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_93_651, 17/* cst_194 */, (num_grid_n34_92) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_91_649, &_pgen_tmp_92_650, &_pgen_tmp_93_651);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_91_649._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_91_649._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_92_650._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_93_651._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_91_649._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_92_650._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_93_651._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435597 = Rotate(_pgen_tmp_91_649, num_grid_n34_92 * 3136);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_94_652, &_preg_268435596, &_preg_268435597);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n34_91, &result_n34_91, &_pgen_tmp_94_652);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n34_91._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_94_652._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435596._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435597._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_94_652._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435596._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435597._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n34_91._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n34_91._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_94_652._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n34_91._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n34_91._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_94_652._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435596._c1_poly);
          Free_poly_data(&_preg_268435596._c0_poly);
          Free_poly_data(&_preg_268435597._c1_poly);
          Free_poly_data(&_preg_268435597._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_95_653, 18 /* cst_191 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n34_91, &result_n34_91, &_pgen_tmp_95_653);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n34_91._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n34_91._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n34_91._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_95_653._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n34_91._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n34_91._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_97_655 = VS_out_conv5_83[((mesh_x_n5_90 * 1) + mesh_z_n5_86)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_96_654, &_pgen_tmp_97_655, &result_n34_91);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_96_654._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_96_654._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_97_655._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n34_91._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_96_654._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_97_655._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n34_91._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv5_83[((mesh_x_n5_90 * 1) + mesh_z_n5_86)], &_pgen_tmp_96_654);
      }
    }
  }
  Free_ciph_poly(VS_out_relu4_80, 8);
  Free_poly_data(&_preg_268435472._c1_poly);
  Free_poly_data(&_preg_268435472._c0_poly);
  Free_poly_data(&input_dup_n33_87._c1_poly);
  Free_poly_data(&input_dup_n33_87._c0_poly);
  Free_ciph_poly(input_block_n33_89, 1);
  Free_poly_data(&_pgen_tmp_86_644._poly);
  Free_poly_data(&_pgen_tmp_87_645._c1_poly);
  Free_poly_data(&_pgen_tmp_87_645._c0_poly);
  Free_poly_data(&_pgen_tmp_90_648._poly);
  Free_poly_data(&_pgen_tmp_89_647._c1_poly);
  Free_poly_data(&_pgen_tmp_89_647._c0_poly);
  Free_poly_data(&_pgen_tmp_88_646._c1_poly);
  Free_poly_data(&_pgen_tmp_88_646._c0_poly);
  Free_poly_data(&result_grid_n34_93._c1_poly);
  Free_poly_data(&result_grid_n34_93._c0_poly);
  Free_poly_data(&_pgen_tmp_93_651._poly);
  Free_poly_data(&_pgen_tmp_92_650._c1_poly);
  Free_poly_data(&_pgen_tmp_92_650._c0_poly);
  Free_poly_data(&_pgen_tmp_91_649._c1_poly);
  Free_poly_data(&_pgen_tmp_91_649._c0_poly);
  Free_poly_data(&_pgen_tmp_94_652._c1_poly);
  Free_poly_data(&_pgen_tmp_94_652._c0_poly);
  Free_poly_data(&_pgen_tmp_95_653._poly);
  Free_poly_data(&result_n34_91._c1_poly);
  Free_poly_data(&result_n34_91._c0_poly);
  Free_poly_data(&_pgen_tmp_96_654._c1_poly);
  Free_poly_data(&_pgen_tmp_96_654._c0_poly);
  for (rescale_iv_528 = 0; rescale_iv_528 < 16; rescale_iv_528 = rescale_iv_528 + 1) {
    _pgen_tmp_98_656 = VS_out_conv5_83[rescale_iv_528];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_99_657, &_pgen_tmp_98_656);
    Rescale(&_pgen_tmp_99_657._c0_poly, &_pgen_tmp_98_656._c0_poly);
    Rescale(&_pgen_tmp_99_657._c1_poly, &_pgen_tmp_98_656._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv5_83[rescale_iv_528], &_pgen_tmp_99_657);
  }
  Free_poly_data(&_pgen_tmp_99_657._c1_poly);
  Free_poly_data(&_pgen_tmp_99_657._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 46
  // Relu_9
  // pragma: 65536, 1033, 47
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu5_95, 0, sizeof(VS_out_relu5_95));
  for (mesh_y_n5_96 = 0; mesh_y_n5_96 < 16; mesh_y_n5_96 = mesh_y_n5_96 + 1) {
    for (mesh_z_n5_97 = 0; mesh_z_n5_97 < 1; mesh_z_n5_97 = mesh_z_n5_97 + 1) {
      _pgen_tmp_100_658 = VS_out_conv5_83[((mesh_y_n5_96 * 1) + mesh_z_n5_97)];
      Bootstrap(&_preg_268435473, &_pgen_tmp_100_658, 14);
      Encode_float(&_pgen_tmp_101_659, &_cst_392, 1, 1, Level(&_preg_268435473));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435475, &_preg_268435473, &_pgen_tmp_101_659);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435475._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435475._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435473._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_101_659._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435475._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435473._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_101_659._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_102_660, &_preg_268435475);
      Rescale(&_pgen_tmp_102_660._c0_poly, &_preg_268435475._c0_poly);
      Rescale(&_pgen_tmp_102_660._c1_poly, &_preg_268435475._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435474 = App_relu(_preg_268435473, _pgen_tmp_102_660, 25088);
      _pgen_tmp_104_662 = VS_out_relu5_95[((mesh_y_n5_96 * 1) + mesh_z_n5_97)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_103_661, &_pgen_tmp_104_662, &_preg_268435474);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_103_661._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_103_661._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_104_662._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435474._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_103_661._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_104_662._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435474._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu5_95[((mesh_y_n5_96 * 1) + mesh_z_n5_97)], &_pgen_tmp_103_661);
    }
  }
  Free_ciph_poly(VS_out_conv5_83, 16);
  Free_poly_data(&_pgen_tmp_101_659._poly);
  Free_poly_data(&_preg_268435475._c1_poly);
  Free_poly_data(&_preg_268435475._c0_poly);
  Free_poly_data(&_pgen_tmp_102_660._c1_poly);
  Free_poly_data(&_pgen_tmp_102_660._c0_poly);
  Free_poly_data(&_preg_268435473._c1_poly);
  Free_poly_data(&_preg_268435473._c0_poly);
  Free_poly_data(&_preg_268435474._c1_poly);
  Free_poly_data(&_preg_268435474._c0_poly);
  Free_poly_data(&_pgen_tmp_103_661._c1_poly);
  Free_poly_data(&_pgen_tmp_103_661._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 47
  // Conv_10
  // pragma: 65536, 1027, 48
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv6_98, 0, sizeof(VS_out_conv6_98));
  memset(&VS_out_conv_halo6_99, 0, sizeof(VS_out_conv_halo6_99));
  Free_ciph_poly(VS_out_conv_halo6_99, 16);
  for (mesh_y_n6_100 = 0; mesh_y_n6_100 < 1; mesh_y_n6_100 = mesh_y_n6_100 + 1) {
    for (mesh_z_n6_101 = 0; mesh_z_n6_101 < 1; mesh_z_n6_101 = mesh_z_n6_101 + 1) {
      for (mesh_x_n6_102 = 0; mesh_x_n6_102 < 16; mesh_x_n6_102 = mesh_x_n6_102 + 1) {
        Copy_ciph(&_preg_268435476, &VS_out_relu5_95[((mesh_x_n6_102 * 1) + mesh_z_n6_101)]);
        // BlockingRot replicate=1
        Copy_ciph(&input_dup_n34_103, &_preg_268435476);
        // BlockingRot HRot=bs=9
        for (bs_input_n34_104 = 0; bs_input_n34_104 < 9; bs_input_n34_104 = bs_input_n34_104 + 1) {
          _preg_268435598 = Rotate(input_dup_n34_103, _cst_199[bs_input_n34_104]);
          Copy_ciph(&input_block_n34_105[bs_input_n34_104], &_preg_268435598);
          Free_poly_data(&_preg_268435598._c1_poly);
          Free_poly_data(&_preg_268435598._c0_poly);
        }
        Zero_ciph(&result_n35_106);
        for (num_grid_n35_107 = 0; num_grid_n35_107 < 1; num_grid_n35_107 = num_grid_n35_107 + 1) {
          Zero_ciph(&result_grid_n35_108);
          for (cap_block_n35_109 = 0; cap_block_n35_109 < 9; cap_block_n35_109 = cap_block_n35_109 + 1) {
            _ckks_gen_tmp_1727_490 = input_block_n34_105[cap_block_n35_109];
            Pt_from_msg_ofst(&_pgen_tmp_105_663, 19/* cst_195 */, (((((mesh_x_n6_102 * 1) + mesh_y_n6_100) * 9) + (cap_block_n35_109 + (num_grid_n35_107 * 9)))) * (25088), 25088, 1, 2);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_106_664, &_ckks_gen_tmp_1727_490, &_pgen_tmp_105_663);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n35_108, &result_grid_n35_108, &_pgen_tmp_106_664);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n35_108._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_106_664._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_1727_490._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_105_663._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_106_664._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_1727_490._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_105_663._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n35_108._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n35_108._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_106_664._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n35_108._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n35_108._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_106_664._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          _preg_268435599 = Rotate(result_grid_n35_108, num_grid_n35_107 * 3136);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n35_106, &result_n35_106, &_preg_268435599);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n35_106._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&result_n35_106._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n35_106._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435599._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n35_106._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n35_106._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435599._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435599._c1_poly);
          Free_poly_data(&_preg_268435599._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_107_665, 20 /* cst_198 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n35_106, &result_n35_106, &_pgen_tmp_107_665);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n35_106._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n35_106._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n35_106._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_107_665._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n35_106._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n35_106._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_109_667 = VS_out_conv6_98[((mesh_x_n6_102 * 1) + mesh_z_n6_101)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_108_666, &_pgen_tmp_109_667, &result_n35_106);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_108_666._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_108_666._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_109_667._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n35_106._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_108_666._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_109_667._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n35_106._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv6_98[((mesh_x_n6_102 * 1) + mesh_z_n6_101)], &_pgen_tmp_108_666);
      }
    }
  }
  Free_ciph_poly(VS_out_relu5_95, 16);
  Free_poly_data(&_preg_268435476._c1_poly);
  Free_poly_data(&_preg_268435476._c0_poly);
  Free_poly_data(&input_dup_n34_103._c1_poly);
  Free_poly_data(&input_dup_n34_103._c0_poly);
  Free_ciph_poly(input_block_n34_105, 9);
  Free_poly_data(&_pgen_tmp_105_663._poly);
  Free_poly_data(&_pgen_tmp_106_664._c1_poly);
  Free_poly_data(&_pgen_tmp_106_664._c0_poly);
  Free_poly_data(&result_grid_n35_108._c1_poly);
  Free_poly_data(&result_grid_n35_108._c0_poly);
  Free_poly_data(&_pgen_tmp_107_665._poly);
  Free_poly_data(&result_n35_106._c1_poly);
  Free_poly_data(&result_n35_106._c0_poly);
  Free_poly_data(&_pgen_tmp_108_666._c1_poly);
  Free_poly_data(&_pgen_tmp_108_666._c0_poly);
  for (rescale_iv_529 = 0; rescale_iv_529 < 16; rescale_iv_529 = rescale_iv_529 + 1) {
    _pgen_tmp_110_668 = VS_out_conv6_98[rescale_iv_529];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_111_669, &_pgen_tmp_110_668);
    Rescale(&_pgen_tmp_111_669._c0_poly, &_pgen_tmp_110_668._c0_poly);
    Rescale(&_pgen_tmp_111_669._c1_poly, &_pgen_tmp_110_668._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv6_98[rescale_iv_529], &_pgen_tmp_111_669);
  }
  Free_poly_data(&_pgen_tmp_111_669._c1_poly);
  Free_poly_data(&_pgen_tmp_111_669._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 48
  // Relu_11
  // pragma: 65536, 1033, 49
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu6_110, 0, sizeof(VS_out_relu6_110));
  for (mesh_y_n6_111 = 0; mesh_y_n6_111 < 16; mesh_y_n6_111 = mesh_y_n6_111 + 1) {
    for (mesh_z_n6_112 = 0; mesh_z_n6_112 < 1; mesh_z_n6_112 = mesh_z_n6_112 + 1) {
      _pgen_tmp_112_670 = VS_out_conv6_98[((mesh_y_n6_111 * 1) + mesh_z_n6_112)];
      Bootstrap(&_preg_268435477, &_pgen_tmp_112_670, 15);
      Encode_float(&_pgen_tmp_113_671, &_cst_393, 1, 1, Level(&_preg_268435477));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435479, &_preg_268435477, &_pgen_tmp_113_671);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435479._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435479._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435477._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_113_671._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435479._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435477._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_113_671._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_114_672, &_preg_268435479);
      Rescale(&_pgen_tmp_114_672._c0_poly, &_preg_268435479._c0_poly);
      Rescale(&_pgen_tmp_114_672._c1_poly, &_preg_268435479._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435478 = App_relu(_preg_268435477, _pgen_tmp_114_672, 25088);
      _pgen_tmp_116_674 = VS_out_relu6_110[((mesh_y_n6_111 * 1) + mesh_z_n6_112)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_115_673, &_pgen_tmp_116_674, &_preg_268435478);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_115_673._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_115_673._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_116_674._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435478._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_115_673._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_116_674._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435478._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu6_110[((mesh_y_n6_111 * 1) + mesh_z_n6_112)], &_pgen_tmp_115_673);
    }
  }
  Free_ciph_poly(VS_out_conv6_98, 16);
  Free_poly_data(&_pgen_tmp_113_671._poly);
  Free_poly_data(&_preg_268435479._c1_poly);
  Free_poly_data(&_preg_268435479._c0_poly);
  Free_poly_data(&_pgen_tmp_114_672._c1_poly);
  Free_poly_data(&_pgen_tmp_114_672._c0_poly);
  Free_poly_data(&_preg_268435477._c1_poly);
  Free_poly_data(&_preg_268435477._c0_poly);
  Free_poly_data(&_preg_268435478._c1_poly);
  Free_poly_data(&_preg_268435478._c0_poly);
  Free_poly_data(&_pgen_tmp_115_673._c1_poly);
  Free_poly_data(&_pgen_tmp_115_673._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 49
  // Conv_12
  // pragma: 65536, 1027, 50
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv7_113, 0, sizeof(VS_out_conv7_113));
  memset(&VS_out_conv_halo7_114, 0, sizeof(VS_out_conv_halo7_114));
  Free_ciph_poly(VS_out_conv_halo7_114, 16);
  for (mesh_y_n7_115 = 0; mesh_y_n7_115 < 16; mesh_y_n7_115 = mesh_y_n7_115 + 1) {
    for (mesh_z_n7_116 = 0; mesh_z_n7_116 < 1; mesh_z_n7_116 = mesh_z_n7_116 + 1) {
      Copy_ciph(&_preg_268435480, &VS_out_relu6_110[((mesh_y_n7_115 * 1) + mesh_z_n7_116)]);
      Copy_ciph(&input_dup_n35_117, &_preg_268435480);
      for (bs_input_n35_118 = 0; bs_input_n35_118 < 1; bs_input_n35_118 = bs_input_n35_118 + 1) {
        _preg_268435600 = Rotate(input_dup_n35_117, _cst_204[bs_input_n35_118]);
        Copy_ciph(&input_block_n35_119[bs_input_n35_118], &_preg_268435600);
        Free_poly_data(&_preg_268435600._c1_poly);
        Free_poly_data(&_preg_268435600._c0_poly);
      }
      for (mesh_x_n7_120 = 0; mesh_x_n7_120 < 16; mesh_x_n7_120 = mesh_x_n7_120 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n36_121);
        for (num_grid_n36_122 = 0; num_grid_n36_122 < 8; num_grid_n36_122 = num_grid_n36_122 + 1) {
          Zero_ciph(&result_grid_n36_123);
          for (cap_block_n36_124 = 0; cap_block_n36_124 < 1; cap_block_n36_124 = cap_block_n36_124 + 1) {
            _ckks_gen_tmp_1962_491 = input_block_n35_119[cap_block_n36_124];
            Pt_from_msg_ofst(&_pgen_tmp_117_675, 21/* cst_200 */, (((((mesh_x_n7_120 * 16) + mesh_y_n7_115) * 8) + (cap_block_n36_124 + (num_grid_n36_122 * 1)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_118_676, &_ckks_gen_tmp_1962_491, &_pgen_tmp_117_675);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n36_123, &result_grid_n36_123, &_pgen_tmp_118_676);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n36_123._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_118_676._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_1962_491._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_117_675._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_118_676._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_1962_491._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_117_675._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n36_123._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n36_123._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_118_676._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n36_123._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n36_123._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_118_676._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_120_678, &result_grid_n36_123);
          Rescale(&_pgen_tmp_120_678._c0_poly, &result_grid_n36_123._c0_poly);
          Rescale(&_pgen_tmp_120_678._c1_poly, &result_grid_n36_123._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_121_679, 22/* cst_205 */, (num_grid_n36_122) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_119_677, &_pgen_tmp_120_678, &_pgen_tmp_121_679);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_119_677._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_119_677._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_120_678._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_121_679._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_119_677._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_120_678._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_121_679._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435601 = Rotate(_pgen_tmp_119_677, -25088 + (num_grid_n36_122 * 3136));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_123_681, &result_grid_n36_123);
          Rescale(&_pgen_tmp_123_681._c0_poly, &result_grid_n36_123._c0_poly);
          Rescale(&_pgen_tmp_123_681._c1_poly, &result_grid_n36_123._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_124_682, 23/* cst_206 */, (num_grid_n36_122) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_122_680, &_pgen_tmp_123_681, &_pgen_tmp_124_682);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_122_680._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_122_680._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_123_681._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_124_682._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_122_680._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_123_681._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_124_682._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435602 = Rotate(_pgen_tmp_122_680, num_grid_n36_122 * 3136);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_125_683, &_preg_268435601, &_preg_268435602);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n36_121, &result_n36_121, &_pgen_tmp_125_683);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n36_121._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_125_683._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435601._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435602._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_125_683._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435601._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435602._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n36_121._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n36_121._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_125_683._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n36_121._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n36_121._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_125_683._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435601._c1_poly);
          Free_poly_data(&_preg_268435601._c0_poly);
          Free_poly_data(&_preg_268435602._c1_poly);
          Free_poly_data(&_preg_268435602._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_126_684, 24 /* cst_203 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n36_121, &result_n36_121, &_pgen_tmp_126_684);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n36_121._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n36_121._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n36_121._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_126_684._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n36_121._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n36_121._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_128_686 = VS_out_conv7_113[((mesh_x_n7_120 * 1) + mesh_z_n7_116)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_127_685, &_pgen_tmp_128_686, &result_n36_121);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_127_685._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_127_685._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_128_686._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n36_121._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_127_685._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_128_686._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n36_121._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv7_113[((mesh_x_n7_120 * 1) + mesh_z_n7_116)], &_pgen_tmp_127_685);
      }
    }
  }
  Free_ciph_poly(VS_out_relu6_110, 16);
  Free_poly_data(&_preg_268435480._c1_poly);
  Free_poly_data(&_preg_268435480._c0_poly);
  Free_poly_data(&input_dup_n35_117._c1_poly);
  Free_poly_data(&input_dup_n35_117._c0_poly);
  Free_ciph_poly(input_block_n35_119, 1);
  Free_poly_data(&_pgen_tmp_117_675._poly);
  Free_poly_data(&_pgen_tmp_118_676._c1_poly);
  Free_poly_data(&_pgen_tmp_118_676._c0_poly);
  Free_poly_data(&_pgen_tmp_121_679._poly);
  Free_poly_data(&_pgen_tmp_120_678._c1_poly);
  Free_poly_data(&_pgen_tmp_120_678._c0_poly);
  Free_poly_data(&_pgen_tmp_119_677._c1_poly);
  Free_poly_data(&_pgen_tmp_119_677._c0_poly);
  Free_poly_data(&result_grid_n36_123._c1_poly);
  Free_poly_data(&result_grid_n36_123._c0_poly);
  Free_poly_data(&_pgen_tmp_124_682._poly);
  Free_poly_data(&_pgen_tmp_123_681._c1_poly);
  Free_poly_data(&_pgen_tmp_123_681._c0_poly);
  Free_poly_data(&_pgen_tmp_122_680._c1_poly);
  Free_poly_data(&_pgen_tmp_122_680._c0_poly);
  Free_poly_data(&_pgen_tmp_125_683._c1_poly);
  Free_poly_data(&_pgen_tmp_125_683._c0_poly);
  Free_poly_data(&_pgen_tmp_126_684._poly);
  Free_poly_data(&result_n36_121._c1_poly);
  Free_poly_data(&result_n36_121._c0_poly);
  Free_poly_data(&_pgen_tmp_127_685._c1_poly);
  Free_poly_data(&_pgen_tmp_127_685._c0_poly);
  for (rescale_iv_530 = 0; rescale_iv_530 < 16; rescale_iv_530 = rescale_iv_530 + 1) {
    _pgen_tmp_129_687 = VS_out_conv7_113[rescale_iv_530];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_130_688, &_pgen_tmp_129_687);
    Rescale(&_pgen_tmp_130_688._c0_poly, &_pgen_tmp_129_687._c0_poly);
    Rescale(&_pgen_tmp_130_688._c1_poly, &_pgen_tmp_129_687._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv7_113[rescale_iv_530], &_pgen_tmp_130_688);
  }
  Free_poly_data(&_pgen_tmp_130_688._c1_poly);
  Free_poly_data(&_pgen_tmp_130_688._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 50
  // Relu_13
  // pragma: 65536, 1033, 51
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu7_125, 0, sizeof(VS_out_relu7_125));
  for (mesh_y_n7_126 = 0; mesh_y_n7_126 < 16; mesh_y_n7_126 = mesh_y_n7_126 + 1) {
    for (mesh_z_n7_127 = 0; mesh_z_n7_127 < 1; mesh_z_n7_127 = mesh_z_n7_127 + 1) {
      _pgen_tmp_131_689 = VS_out_conv7_113[((mesh_y_n7_126 * 1) + mesh_z_n7_127)];
      Bootstrap(&_preg_268435481, &_pgen_tmp_131_689, 17);
      Encode_float(&_pgen_tmp_132_690, &_cst_394, 1, 1, Level(&_preg_268435481));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435483, &_preg_268435481, &_pgen_tmp_132_690);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435483._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435483._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435481._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_132_690._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435483._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435481._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_132_690._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_133_691, &_preg_268435483);
      Rescale(&_pgen_tmp_133_691._c0_poly, &_preg_268435483._c0_poly);
      Rescale(&_pgen_tmp_133_691._c1_poly, &_preg_268435483._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435482 = App_relu(_preg_268435481, _pgen_tmp_133_691, 25088);
      _pgen_tmp_135_693 = VS_out_relu7_125[((mesh_y_n7_126 * 1) + mesh_z_n7_127)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_134_692, &_pgen_tmp_135_693, &_preg_268435482);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_134_692._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_134_692._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_135_693._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435482._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_134_692._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_135_693._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435482._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu7_125[((mesh_y_n7_126 * 1) + mesh_z_n7_127)], &_pgen_tmp_134_692);
    }
  }
  Free_ciph_poly(VS_out_conv7_113, 16);
  Free_poly_data(&_pgen_tmp_132_690._poly);
  Free_poly_data(&_preg_268435483._c1_poly);
  Free_poly_data(&_preg_268435483._c0_poly);
  Free_poly_data(&_pgen_tmp_133_691._c1_poly);
  Free_poly_data(&_pgen_tmp_133_691._c0_poly);
  Free_poly_data(&_preg_268435481._c1_poly);
  Free_poly_data(&_preg_268435481._c0_poly);
  Free_poly_data(&_preg_268435482._c1_poly);
  Free_poly_data(&_preg_268435482._c0_poly);
  Free_poly_data(&_pgen_tmp_134_692._c1_poly);
  Free_poly_data(&_pgen_tmp_134_692._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 51
  // Conv_14
  // pragma: 65536, 1027, 52
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv8_128, 0, sizeof(VS_out_conv8_128));
  memset(&VS_out_conv_halo8_129, 0, sizeof(VS_out_conv_halo8_129));
  for (mesh_y_n8_130 = 0; mesh_y_n8_130 < 1; mesh_y_n8_130 = mesh_y_n8_130 + 1) {
    for (mesh_z_n8_131 = 0; mesh_z_n8_131 < 1; mesh_z_n8_131 = mesh_z_n8_131 + 1) {
      for (mesh_x_n8_132 = 0; mesh_x_n8_132 < 16; mesh_x_n8_132 = mesh_x_n8_132 + 1) {
        Copy_ciph(&_preg_268435484, &VS_out_relu7_125[((mesh_x_n8_132 * 1) + mesh_z_n8_131)]);
        // BlockingRot replicate=1
        Copy_ciph(&input_dup_n36_133, &_preg_268435484);
        // BlockingRot HRot=bs=9
        for (bs_input_n36_134 = 0; bs_input_n36_134 < 9; bs_input_n36_134 = bs_input_n36_134 + 1) {
          _preg_268435603 = Rotate(input_dup_n36_133, _cst_211[bs_input_n36_134]);
          Copy_ciph(&input_block_n36_135[bs_input_n36_134], &_preg_268435603);
          Free_poly_data(&_preg_268435603._c1_poly);
          Free_poly_data(&_preg_268435603._c0_poly);
        }
        Zero_ciph(&result_n37_136);
        for (num_grid_n37_137 = 0; num_grid_n37_137 < 1; num_grid_n37_137 = num_grid_n37_137 + 1) {
          Zero_ciph(&result_grid_n37_138);
          for (cap_block_n37_139 = 0; cap_block_n37_139 < 9; cap_block_n37_139 = cap_block_n37_139 + 1) {
            _ckks_gen_tmp_2227_492 = input_block_n36_135[cap_block_n37_139];
            Pt_from_msg_ofst(&_pgen_tmp_136_694, 25/* cst_207 */, (((((mesh_x_n8_132 * 1) + mesh_y_n8_130) * 9) + (cap_block_n37_139 + (num_grid_n37_137 * 9)))) * (25088), 25088, 1, 5);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_137_695, &_ckks_gen_tmp_2227_492, &_pgen_tmp_136_694);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n37_138, &result_grid_n37_138, &_pgen_tmp_137_695);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n37_138._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_137_695._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_2227_492._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_136_694._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_137_695._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_2227_492._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_136_694._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n37_138._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n37_138._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_137_695._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n37_138._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n37_138._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_137_695._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          _preg_268435604 = Rotate(result_grid_n37_138, num_grid_n37_137 * 3136);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n37_136, &result_n37_136, &_preg_268435604);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n37_136._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&result_n37_136._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n37_136._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435604._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n37_136._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n37_136._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435604._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435604._c1_poly);
          Free_poly_data(&_preg_268435604._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_138_696, 26 /* cst_210 */, 25088, 2, 5);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n37_136, &result_n37_136, &_pgen_tmp_138_696);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n37_136._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n37_136._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n37_136._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_138_696._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n37_136._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n37_136._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_140_698 = VS_out_conv8_128[((mesh_x_n8_132 * 1) + mesh_z_n8_131)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_139_697, &_pgen_tmp_140_698, &result_n37_136);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_139_697._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_139_697._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_140_698._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n37_136._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_139_697._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_140_698._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n37_136._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv8_128[((mesh_x_n8_132 * 1) + mesh_z_n8_131)], &_pgen_tmp_139_697);
      }
    }
  }
  Free_ciph_poly(VS_out_relu7_125, 16);
  Free_poly_data(&_preg_268435484._c1_poly);
  Free_poly_data(&_preg_268435484._c0_poly);
  Free_poly_data(&input_dup_n36_133._c1_poly);
  Free_poly_data(&input_dup_n36_133._c0_poly);
  Free_ciph_poly(input_block_n36_135, 9);
  Free_poly_data(&_pgen_tmp_136_694._poly);
  Free_poly_data(&_pgen_tmp_137_695._c1_poly);
  Free_poly_data(&_pgen_tmp_137_695._c0_poly);
  Free_poly_data(&result_grid_n37_138._c1_poly);
  Free_poly_data(&result_grid_n37_138._c0_poly);
  Free_poly_data(&_pgen_tmp_138_696._poly);
  Free_poly_data(&result_n37_136._c1_poly);
  Free_poly_data(&result_n37_136._c0_poly);
  Free_poly_data(&_pgen_tmp_139_697._c1_poly);
  Free_poly_data(&_pgen_tmp_139_697._c0_poly);
  for (rescale_iv_531 = 0; rescale_iv_531 < 16; rescale_iv_531 = rescale_iv_531 + 1) {
    _pgen_tmp_141_699 = VS_out_conv8_128[rescale_iv_531];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_142_700, &_pgen_tmp_141_699);
    Rescale(&_pgen_tmp_142_700._c0_poly, &_pgen_tmp_141_699._c0_poly);
    Rescale(&_pgen_tmp_142_700._c1_poly, &_pgen_tmp_141_699._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv8_128[rescale_iv_531], &_pgen_tmp_142_700);
  }
  Free_poly_data(&_pgen_tmp_142_700._c1_poly);
  Free_poly_data(&_pgen_tmp_142_700._c0_poly);
  for (siv_n8_140 = 0; siv_n8_140 < 16; siv_n8_140 = siv_n8_140 + 1) {
    orig_result37_141 = VS_out_conv8_128[siv_n8_140];
    Zero_ciph(&comb_row_result38_142);
    for (comb_row_lf_index_n38_143 = 0; comb_row_lf_index_n38_143 < 1; comb_row_lf_index_n38_143 = comb_row_lf_index_n38_143 + 1) {
      _preg_268435605 = Rotate(orig_result37_141, 1 << comb_row_lf_index_n38_143);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&orig_result37_141, &orig_result37_141, &_preg_268435605);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&orig_result37_141._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&orig_result37_141._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&orig_result37_141._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435605._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&orig_result37_141._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&orig_result37_141._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435605._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435605._c1_poly);
      Free_poly_data(&_preg_268435605._c0_poly);
    }
    for (comb_row_index_n38_144 = 0; comb_row_index_n38_144 < 14; comb_row_index_n38_144 = comb_row_index_n38_144 + 1) {
      _preg_268435606 = Rotate(orig_result37_141, comb_row_index_n38_144 * 2);
      Copy_ciph(&_ckks_gen_tmp_2344_493, &_preg_268435606);
      Pt_from_msg_ofst(&_pgen_tmp_143_701, 27/* cst_212 */, (comb_row_index_n38_144) * (25088), 25088, 1, 4);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_144_702, &_ckks_gen_tmp_2344_493, &_pgen_tmp_143_701);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_row_result38_142, &comb_row_result38_142, &_pgen_tmp_144_702);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&comb_row_result38_142._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_144_702._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_2344_493._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_143_701._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_144_702._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_2344_493._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_143_701._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_row_result38_142._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_row_result38_142._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_144_702._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_row_result38_142._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_row_result38_142._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_144_702._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435606._c1_poly);
      Free_poly_data(&_preg_268435606._c0_poly);
    }
    Zero_ciph(&comb_rc_result38_145);
    for (comb_rc_lf_index_n38_146 = 0; comb_rc_lf_index_n38_146 < 2; comb_rc_lf_index_n38_146 = comb_rc_lf_index_n38_146 + 1) {
      _preg_268435607 = Rotate(comb_row_result38_142, (1 << comb_rc_lf_index_n38_146) * 84);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_row_result38_142, &comb_row_result38_142, &_preg_268435607);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&comb_row_result38_142._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&comb_row_result38_142._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_row_result38_142._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435607._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_row_result38_142._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_row_result38_142._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435607._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435607._c1_poly);
      Free_poly_data(&_preg_268435607._c0_poly);
    }
    for (comb_rc_index_n38_147 = 0; comb_rc_index_n38_147 < 7; comb_rc_index_n38_147 = comb_rc_index_n38_147 + 1) {
      _preg_268435608 = Rotate(comb_row_result38_142, comb_rc_index_n38_147 * 336);
      Copy_ciph(&_ckks_gen_tmp_2397_494, &_preg_268435608);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_145_703, &_ckks_gen_tmp_2397_494);
      Rescale(&_pgen_tmp_145_703._c0_poly, &_ckks_gen_tmp_2397_494._c0_poly);
      Rescale(&_pgen_tmp_145_703._c1_poly, &_ckks_gen_tmp_2397_494._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg_ofst(&_pgen_tmp_146_704, 28/* cst_213 */, (comb_rc_index_n38_147) * (25088), 25088, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_147_705, &_pgen_tmp_145_703, &_pgen_tmp_146_704);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_rc_result38_145, &comb_rc_result38_145, &_pgen_tmp_147_705);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&comb_rc_result38_145._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_147_705._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_145_703._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_146_704._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_147_705._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_145_703._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_146_704._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_rc_result38_145._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_rc_result38_145._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_147_705._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_rc_result38_145._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_rc_result38_145._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_147_705._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435608._c1_poly);
      Free_poly_data(&_preg_268435608._c0_poly);
    }
    Zero_ciph(&ss_result38_148);
    for (comb_cc_lf_index_n38_149 = 0; comb_cc_lf_index_n38_149 < 2; comb_cc_lf_index_n38_149 = comb_cc_lf_index_n38_149 + 1) {
      _preg_268435609 = Rotate(comb_rc_result38_145, (1 << comb_cc_lf_index_n38_149) * 2352);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_rc_result38_145, &comb_rc_result38_145, &_preg_268435609);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&comb_rc_result38_145._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&comb_rc_result38_145._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_rc_result38_145._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435609._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_rc_result38_145._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_rc_result38_145._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435609._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435609._c1_poly);
      Free_poly_data(&_preg_268435609._c0_poly);
    }
    for (comb_cc_index_n38_150 = 0; comb_cc_index_n38_150 < 2; comb_cc_index_n38_150 = comb_cc_index_n38_150 + 1) {
      _preg_268435610 = Rotate(comb_rc_result38_145, comb_cc_index_n38_150 * 9408);
      Copy_ciph(&_ckks_gen_tmp_2450_495, &_preg_268435610);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_148_706, &_ckks_gen_tmp_2450_495);
      Rescale(&_pgen_tmp_148_706._c0_poly, &_ckks_gen_tmp_2450_495._c0_poly);
      Rescale(&_pgen_tmp_148_706._c1_poly, &_ckks_gen_tmp_2450_495._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg_ofst(&_pgen_tmp_149_707, 29/* cst_214 */, (comb_cc_index_n38_150) * (25088), 25088, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_150_708, &_pgen_tmp_148_706, &_pgen_tmp_149_707);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&ss_result38_148, &ss_result38_148, &_pgen_tmp_150_708);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&ss_result38_148._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_150_708._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_148_706._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_149_707._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_150_708._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_148_706._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_149_707._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&ss_result38_148._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&ss_result38_148._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_150_708._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&ss_result38_148._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&ss_result38_148._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_150_708._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435610._c1_poly);
      Free_poly_data(&_preg_268435610._c0_poly);
    }
    Copy_ciph(&VS_out_conv_halo8_129[siv_n8_140], &ss_result38_148);
  }
  Free_ciph_poly(VS_out_conv8_128, 16);
  Free_poly_data(&_pgen_tmp_143_701._poly);
  Free_poly_data(&_ckks_gen_tmp_2344_493._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2344_493._c0_poly);
  Free_poly_data(&_pgen_tmp_144_702._c1_poly);
  Free_poly_data(&_pgen_tmp_144_702._c0_poly);
  Free_poly_data(&comb_row_result38_142._c1_poly);
  Free_poly_data(&comb_row_result38_142._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_2397_494._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2397_494._c0_poly);
  Free_poly_data(&_pgen_tmp_146_704._poly);
  Free_poly_data(&_pgen_tmp_145_703._c1_poly);
  Free_poly_data(&_pgen_tmp_145_703._c0_poly);
  Free_poly_data(&_pgen_tmp_147_705._c1_poly);
  Free_poly_data(&_pgen_tmp_147_705._c0_poly);
  Free_poly_data(&comb_rc_result38_145._c1_poly);
  Free_poly_data(&comb_rc_result38_145._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_2450_495._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2450_495._c0_poly);
  Free_poly_data(&_pgen_tmp_149_707._poly);
  Free_poly_data(&_pgen_tmp_148_706._c1_poly);
  Free_poly_data(&_pgen_tmp_148_706._c0_poly);
  Free_poly_data(&_pgen_tmp_150_708._c1_poly);
  Free_poly_data(&_pgen_tmp_150_708._c0_poly);
  Free_poly_data(&ss_result38_148._c1_poly);
  Free_poly_data(&ss_result38_148._c0_poly);
  for (rescale_iv_532 = 0; rescale_iv_532 < 16; rescale_iv_532 = rescale_iv_532 + 1) {
    _pgen_tmp_151_709 = VS_out_conv_halo8_129[rescale_iv_532];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_152_710, &_pgen_tmp_151_709);
    Rescale(&_pgen_tmp_152_710._c0_poly, &_pgen_tmp_151_709._c0_poly);
    Rescale(&_pgen_tmp_152_710._c1_poly, &_pgen_tmp_151_709._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv_halo8_129[rescale_iv_532], &_pgen_tmp_152_710);
  }
  Free_poly_data(&_pgen_tmp_152_710._c1_poly);
  Free_poly_data(&_pgen_tmp_152_710._c0_poly);
  for (reshardm_n8_151 = 0; reshardm_n8_151 < 4; reshardm_n8_151 = reshardm_n8_151 + 1) {
    _pgen_tmp_154_712 = VS_out_conv_halo8_129[(reshardm_n8_151 * 4)];
    _pgen_tmp_155_713 = VS_out_conv_halo8_129[((reshardm_n8_151 * 4) + 1)];
    _preg_268435611 = Rotate(_pgen_tmp_155_713, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_156_714, &_pgen_tmp_154_712, &_preg_268435611);
    CMPLR_TM_END(12, 0);
    _pgen_tmp_158_716 = VS_out_conv_halo8_129[((reshardm_n8_151 * 4) + 2)];
    _pgen_tmp_159_717 = VS_out_conv_halo8_129[((reshardm_n8_151 * 4) + 3)];
    _preg_268435612 = Rotate(_pgen_tmp_159_717, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_157_715, &_pgen_tmp_158_716, &_preg_268435612);
    _pgen_modulus_555 = Q_modulus();
    _pgen_num_q_556 = Poly_level(&_pgen_tmp_157_715._c0_poly);
    for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_157_715._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_158_716._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435612._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_157_715._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_158_716._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435612._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      _pgen_modulus_555 = _pgen_modulus_555 + 1;
    }
    CMPLR_TM_END(12, 0);
    _preg_268435613 = Rotate(_pgen_tmp_157_715, -12544);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_153_711, &_pgen_tmp_156_714, &_preg_268435613);
    _pgen_modulus_555 = Q_modulus();
    _pgen_num_q_556 = Poly_level(&_pgen_tmp_153_711._c0_poly);
    for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_156_714._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_154_712._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435611._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_156_714._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_154_712._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435611._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_153_711._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_156_714._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435613._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_153_711._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_156_714._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435613._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      _pgen_modulus_555 = _pgen_modulus_555 + 1;
    }
    CMPLR_TM_END(12, 0);
    Copy_ciph(&output_reshard8_152[reshardm_n8_151], &_pgen_tmp_153_711);
    Free_poly_data(&_preg_268435611._c1_poly);
    Free_poly_data(&_preg_268435611._c0_poly);
    Free_poly_data(&_preg_268435612._c1_poly);
    Free_poly_data(&_preg_268435612._c0_poly);
    Free_poly_data(&_preg_268435613._c1_poly);
    Free_poly_data(&_preg_268435613._c0_poly);
  }
  Free_ciph_poly(VS_out_conv_halo8_129, 16);
  Free_poly_data(&_pgen_tmp_157_715._c1_poly);
  Free_poly_data(&_pgen_tmp_157_715._c0_poly);
  Free_poly_data(&_pgen_tmp_156_714._c1_poly);
  Free_poly_data(&_pgen_tmp_156_714._c0_poly);
  Free_poly_data(&_pgen_tmp_153_711._c1_poly);
  Free_poly_data(&_pgen_tmp_153_711._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 52
  // Relu_15
  // pragma: 65536, 1033, 53
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu8_153, 0, sizeof(VS_out_relu8_153));
  for (mesh_y_n8_154 = 0; mesh_y_n8_154 < 4; mesh_y_n8_154 = mesh_y_n8_154 + 1) {
    for (mesh_z_n8_155 = 0; mesh_z_n8_155 < 1; mesh_z_n8_155 = mesh_z_n8_155 + 1) {
      _pgen_tmp_160_718 = output_reshard8_152[((mesh_y_n8_154 * 1) + mesh_z_n8_155)];
      Bootstrap(&_preg_268435485, &_pgen_tmp_160_718, 15);
      Encode_float(&_pgen_tmp_161_719, &_cst_395, 1, 1, Level(&_preg_268435485));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435487, &_preg_268435485, &_pgen_tmp_161_719);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435487._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435487._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435485._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_161_719._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435487._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435485._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_161_719._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_162_720, &_preg_268435487);
      Rescale(&_pgen_tmp_162_720._c0_poly, &_preg_268435487._c0_poly);
      Rescale(&_pgen_tmp_162_720._c1_poly, &_preg_268435487._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435486 = App_relu(_preg_268435485, _pgen_tmp_162_720, 25088);
      _pgen_tmp_164_722 = VS_out_relu8_153[((mesh_y_n8_154 * 1) + mesh_z_n8_155)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_163_721, &_pgen_tmp_164_722, &_preg_268435486);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_163_721._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_163_721._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_164_722._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435486._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_163_721._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_164_722._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435486._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu8_153[((mesh_y_n8_154 * 1) + mesh_z_n8_155)], &_pgen_tmp_163_721);
    }
  }
  Free_ciph_poly(output_reshard8_152, 4);
  Free_poly_data(&_pgen_tmp_161_719._poly);
  Free_poly_data(&_preg_268435487._c1_poly);
  Free_poly_data(&_preg_268435487._c0_poly);
  Free_poly_data(&_pgen_tmp_162_720._c1_poly);
  Free_poly_data(&_pgen_tmp_162_720._c0_poly);
  Free_poly_data(&_preg_268435485._c1_poly);
  Free_poly_data(&_preg_268435485._c0_poly);
  Free_poly_data(&_preg_268435486._c1_poly);
  Free_poly_data(&_preg_268435486._c0_poly);
  Free_poly_data(&_pgen_tmp_163_721._c1_poly);
  Free_poly_data(&_pgen_tmp_163_721._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 53
  // Conv_16
  // pragma: 65536, 1027, 54
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv9_156, 0, sizeof(VS_out_conv9_156));
  memset(&VS_out_conv_halo9_157, 0, sizeof(VS_out_conv_halo9_157));
  Free_ciph_poly(VS_out_conv_halo9_157, 8);
  for (mesh_y_n9_158 = 0; mesh_y_n9_158 < 4; mesh_y_n9_158 = mesh_y_n9_158 + 1) {
    for (mesh_z_n9_159 = 0; mesh_z_n9_159 < 1; mesh_z_n9_159 = mesh_z_n9_159 + 1) {
      Copy_ciph(&_preg_268435488, &VS_out_relu8_153[((mesh_y_n9_158 * 1) + mesh_z_n9_159)]);
      Copy_ciph(&input_dup_n38_160, &_preg_268435488);
      for (bs_input_n38_161 = 0; bs_input_n38_161 < 1; bs_input_n38_161 = bs_input_n38_161 + 1) {
        _preg_268435614 = Rotate(input_dup_n38_160, _cst_219[bs_input_n38_161]);
        Copy_ciph(&input_block_n38_162[bs_input_n38_161], &_preg_268435614);
        Free_poly_data(&_preg_268435614._c1_poly);
        Free_poly_data(&_preg_268435614._c0_poly);
      }
      for (mesh_x_n9_163 = 0; mesh_x_n9_163 < 8; mesh_x_n9_163 = mesh_x_n9_163 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n39_164);
        for (num_grid_n39_165 = 0; num_grid_n39_165 < 32; num_grid_n39_165 = num_grid_n39_165 + 1) {
          Zero_ciph(&result_grid_n39_166);
          for (cap_block_n39_167 = 0; cap_block_n39_167 < 1; cap_block_n39_167 = cap_block_n39_167 + 1) {
            _ckks_gen_tmp_2692_496 = input_block_n38_162[cap_block_n39_167];
            Pt_from_msg_ofst(&_pgen_tmp_165_723, 30/* cst_215 */, (((((mesh_x_n9_163 * 4) + mesh_y_n9_158) * 32) + (cap_block_n39_167 + (num_grid_n39_165 * 1)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_166_724, &_ckks_gen_tmp_2692_496, &_pgen_tmp_165_723);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n39_166, &result_grid_n39_166, &_pgen_tmp_166_724);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n39_166._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_166_724._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_2692_496._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_165_723._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_166_724._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_2692_496._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_165_723._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n39_166._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n39_166._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_166_724._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n39_166._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n39_166._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_166_724._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_168_726, &result_grid_n39_166);
          Rescale(&_pgen_tmp_168_726._c0_poly, &result_grid_n39_166._c0_poly);
          Rescale(&_pgen_tmp_168_726._c1_poly, &result_grid_n39_166._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_169_727, 31/* cst_220 */, (num_grid_n39_165) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_167_725, &_pgen_tmp_168_726, &_pgen_tmp_169_727);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_167_725._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_167_725._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_168_726._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_169_727._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_167_725._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_168_726._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_169_727._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435615 = Rotate(_pgen_tmp_167_725, -25088 + (num_grid_n39_165 * 784));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_171_729, &result_grid_n39_166);
          Rescale(&_pgen_tmp_171_729._c0_poly, &result_grid_n39_166._c0_poly);
          Rescale(&_pgen_tmp_171_729._c1_poly, &result_grid_n39_166._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_172_730, 32/* cst_221 */, (num_grid_n39_165) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_170_728, &_pgen_tmp_171_729, &_pgen_tmp_172_730);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_170_728._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_170_728._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_171_729._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_172_730._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_170_728._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_171_729._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_172_730._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435616 = Rotate(_pgen_tmp_170_728, num_grid_n39_165 * 784);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_173_731, &_preg_268435615, &_preg_268435616);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n39_164, &result_n39_164, &_pgen_tmp_173_731);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n39_164._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_173_731._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435615._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435616._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_173_731._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435615._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435616._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n39_164._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n39_164._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_173_731._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n39_164._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n39_164._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_173_731._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435615._c1_poly);
          Free_poly_data(&_preg_268435615._c0_poly);
          Free_poly_data(&_preg_268435616._c1_poly);
          Free_poly_data(&_preg_268435616._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_174_732, 33 /* cst_218 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n39_164, &result_n39_164, &_pgen_tmp_174_732);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n39_164._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n39_164._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n39_164._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_174_732._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n39_164._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n39_164._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_176_734 = VS_out_conv9_156[((mesh_x_n9_163 * 1) + mesh_z_n9_159)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_175_733, &_pgen_tmp_176_734, &result_n39_164);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_175_733._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_175_733._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_176_734._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n39_164._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_175_733._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_176_734._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n39_164._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv9_156[((mesh_x_n9_163 * 1) + mesh_z_n9_159)], &_pgen_tmp_175_733);
      }
    }
  }
  Free_ciph_poly(VS_out_relu8_153, 4);
  Free_poly_data(&_preg_268435488._c1_poly);
  Free_poly_data(&_preg_268435488._c0_poly);
  Free_poly_data(&input_dup_n38_160._c1_poly);
  Free_poly_data(&input_dup_n38_160._c0_poly);
  Free_ciph_poly(input_block_n38_162, 1);
  Free_poly_data(&_pgen_tmp_165_723._poly);
  Free_poly_data(&_pgen_tmp_166_724._c1_poly);
  Free_poly_data(&_pgen_tmp_166_724._c0_poly);
  Free_poly_data(&_pgen_tmp_169_727._poly);
  Free_poly_data(&_pgen_tmp_168_726._c1_poly);
  Free_poly_data(&_pgen_tmp_168_726._c0_poly);
  Free_poly_data(&_pgen_tmp_167_725._c1_poly);
  Free_poly_data(&_pgen_tmp_167_725._c0_poly);
  Free_poly_data(&result_grid_n39_166._c1_poly);
  Free_poly_data(&result_grid_n39_166._c0_poly);
  Free_poly_data(&_pgen_tmp_172_730._poly);
  Free_poly_data(&_pgen_tmp_171_729._c1_poly);
  Free_poly_data(&_pgen_tmp_171_729._c0_poly);
  Free_poly_data(&_pgen_tmp_170_728._c1_poly);
  Free_poly_data(&_pgen_tmp_170_728._c0_poly);
  Free_poly_data(&_pgen_tmp_173_731._c1_poly);
  Free_poly_data(&_pgen_tmp_173_731._c0_poly);
  Free_poly_data(&_pgen_tmp_174_732._poly);
  Free_poly_data(&result_n39_164._c1_poly);
  Free_poly_data(&result_n39_164._c0_poly);
  Free_poly_data(&_pgen_tmp_175_733._c1_poly);
  Free_poly_data(&_pgen_tmp_175_733._c0_poly);
  for (rescale_iv_533 = 0; rescale_iv_533 < 8; rescale_iv_533 = rescale_iv_533 + 1) {
    _pgen_tmp_177_735 = VS_out_conv9_156[rescale_iv_533];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_178_736, &_pgen_tmp_177_735);
    Rescale(&_pgen_tmp_178_736._c0_poly, &_pgen_tmp_177_735._c0_poly);
    Rescale(&_pgen_tmp_178_736._c1_poly, &_pgen_tmp_177_735._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv9_156[rescale_iv_533], &_pgen_tmp_178_736);
  }
  Free_poly_data(&_pgen_tmp_178_736._c1_poly);
  Free_poly_data(&_pgen_tmp_178_736._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 54
  // Relu_17
  // pragma: 65536, 1033, 55
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu9_168, 0, sizeof(VS_out_relu9_168));
  for (mesh_y_n9_169 = 0; mesh_y_n9_169 < 8; mesh_y_n9_169 = mesh_y_n9_169 + 1) {
    for (mesh_z_n9_170 = 0; mesh_z_n9_170 < 1; mesh_z_n9_170 = mesh_z_n9_170 + 1) {
      _pgen_tmp_179_737 = VS_out_conv9_156[((mesh_y_n9_169 * 1) + mesh_z_n9_170)];
      Bootstrap(&_preg_268435489, &_pgen_tmp_179_737, 14);
      Encode_float(&_pgen_tmp_180_738, &_cst_396, 1, 1, Level(&_preg_268435489));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435491, &_preg_268435489, &_pgen_tmp_180_738);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435491._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435491._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435489._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_180_738._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435491._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435489._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_180_738._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_181_739, &_preg_268435491);
      Rescale(&_pgen_tmp_181_739._c0_poly, &_preg_268435491._c0_poly);
      Rescale(&_pgen_tmp_181_739._c1_poly, &_preg_268435491._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435490 = App_relu(_preg_268435489, _pgen_tmp_181_739, 25088);
      _pgen_tmp_183_741 = VS_out_relu9_168[((mesh_y_n9_169 * 1) + mesh_z_n9_170)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_182_740, &_pgen_tmp_183_741, &_preg_268435490);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_182_740._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_182_740._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_183_741._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435490._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_182_740._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_183_741._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435490._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu9_168[((mesh_y_n9_169 * 1) + mesh_z_n9_170)], &_pgen_tmp_182_740);
    }
  }
  Free_ciph_poly(VS_out_conv9_156, 8);
  Free_poly_data(&_pgen_tmp_180_738._poly);
  Free_poly_data(&_preg_268435491._c1_poly);
  Free_poly_data(&_preg_268435491._c0_poly);
  Free_poly_data(&_pgen_tmp_181_739._c1_poly);
  Free_poly_data(&_pgen_tmp_181_739._c0_poly);
  Free_poly_data(&_preg_268435489._c1_poly);
  Free_poly_data(&_preg_268435489._c0_poly);
  Free_poly_data(&_preg_268435490._c1_poly);
  Free_poly_data(&_preg_268435490._c0_poly);
  Free_poly_data(&_pgen_tmp_182_740._c1_poly);
  Free_poly_data(&_pgen_tmp_182_740._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 55
  // Conv_18
  // pragma: 65536, 1027, 56
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv10_171, 0, sizeof(VS_out_conv10_171));
  memset(&VS_out_conv_halo10_172, 0, sizeof(VS_out_conv_halo10_172));
  Free_ciph_poly(VS_out_conv_halo10_172, 8);
  for (mesh_y_n10_173 = 0; mesh_y_n10_173 < 1; mesh_y_n10_173 = mesh_y_n10_173 + 1) {
    for (mesh_z_n10_174 = 0; mesh_z_n10_174 < 1; mesh_z_n10_174 = mesh_z_n10_174 + 1) {
      for (mesh_x_n10_175 = 0; mesh_x_n10_175 < 8; mesh_x_n10_175 = mesh_x_n10_175 + 1) {
        Copy_ciph(&_preg_268435492, &VS_out_relu9_168[((mesh_x_n10_175 * 1) + mesh_z_n10_174)]);
        // BlockingRot replicate=1
        Copy_ciph(&input_dup_n39_176, &_preg_268435492);
        // BlockingRot HRot=bs=9
        for (bs_input_n39_177 = 0; bs_input_n39_177 < 9; bs_input_n39_177 = bs_input_n39_177 + 1) {
          _preg_268435617 = Rotate(input_dup_n39_176, _cst_226[bs_input_n39_177]);
          Copy_ciph(&input_block_n39_178[bs_input_n39_177], &_preg_268435617);
          Free_poly_data(&_preg_268435617._c1_poly);
          Free_poly_data(&_preg_268435617._c0_poly);
        }
        Zero_ciph(&result_n40_179);
        for (num_grid_n40_180 = 0; num_grid_n40_180 < 1; num_grid_n40_180 = num_grid_n40_180 + 1) {
          Zero_ciph(&result_grid_n40_181);
          for (cap_block_n40_182 = 0; cap_block_n40_182 < 9; cap_block_n40_182 = cap_block_n40_182 + 1) {
            _ckks_gen_tmp_2957_497 = input_block_n39_178[cap_block_n40_182];
            Pt_from_msg_ofst(&_pgen_tmp_184_742, 34/* cst_222 */, (((((mesh_x_n10_175 * 1) + mesh_y_n10_173) * 9) + (cap_block_n40_182 + (num_grid_n40_180 * 9)))) * (25088), 25088, 1, 2);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_185_743, &_ckks_gen_tmp_2957_497, &_pgen_tmp_184_742);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n40_181, &result_grid_n40_181, &_pgen_tmp_185_743);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n40_181._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_185_743._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_2957_497._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_184_742._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_185_743._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_2957_497._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_184_742._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n40_181._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n40_181._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_185_743._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n40_181._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n40_181._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_185_743._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          _preg_268435618 = Rotate(result_grid_n40_181, num_grid_n40_180 * 784);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n40_179, &result_n40_179, &_preg_268435618);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n40_179._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&result_n40_179._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n40_179._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435618._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n40_179._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n40_179._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435618._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435618._c1_poly);
          Free_poly_data(&_preg_268435618._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_186_744, 35 /* cst_225 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n40_179, &result_n40_179, &_pgen_tmp_186_744);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n40_179._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n40_179._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n40_179._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_186_744._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n40_179._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n40_179._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_188_746 = VS_out_conv10_171[((mesh_x_n10_175 * 1) + mesh_z_n10_174)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_187_745, &_pgen_tmp_188_746, &result_n40_179);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_187_745._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_187_745._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_188_746._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n40_179._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_187_745._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_188_746._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n40_179._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv10_171[((mesh_x_n10_175 * 1) + mesh_z_n10_174)], &_pgen_tmp_187_745);
      }
    }
  }
  Free_ciph_poly(VS_out_relu9_168, 8);
  Free_poly_data(&_preg_268435492._c1_poly);
  Free_poly_data(&_preg_268435492._c0_poly);
  Free_poly_data(&input_dup_n39_176._c1_poly);
  Free_poly_data(&input_dup_n39_176._c0_poly);
  Free_ciph_poly(input_block_n39_178, 9);
  Free_poly_data(&_pgen_tmp_184_742._poly);
  Free_poly_data(&_pgen_tmp_185_743._c1_poly);
  Free_poly_data(&_pgen_tmp_185_743._c0_poly);
  Free_poly_data(&result_grid_n40_181._c1_poly);
  Free_poly_data(&result_grid_n40_181._c0_poly);
  Free_poly_data(&_pgen_tmp_186_744._poly);
  Free_poly_data(&result_n40_179._c1_poly);
  Free_poly_data(&result_n40_179._c0_poly);
  Free_poly_data(&_pgen_tmp_187_745._c1_poly);
  Free_poly_data(&_pgen_tmp_187_745._c0_poly);
  for (rescale_iv_534 = 0; rescale_iv_534 < 8; rescale_iv_534 = rescale_iv_534 + 1) {
    _pgen_tmp_189_747 = VS_out_conv10_171[rescale_iv_534];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_190_748, &_pgen_tmp_189_747);
    Rescale(&_pgen_tmp_190_748._c0_poly, &_pgen_tmp_189_747._c0_poly);
    Rescale(&_pgen_tmp_190_748._c1_poly, &_pgen_tmp_189_747._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv10_171[rescale_iv_534], &_pgen_tmp_190_748);
  }
  Free_poly_data(&_pgen_tmp_190_748._c1_poly);
  Free_poly_data(&_pgen_tmp_190_748._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 56
  // Relu_19
  // pragma: 65536, 1033, 57
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu10_183, 0, sizeof(VS_out_relu10_183));
  for (mesh_y_n10_184 = 0; mesh_y_n10_184 < 8; mesh_y_n10_184 = mesh_y_n10_184 + 1) {
    for (mesh_z_n10_185 = 0; mesh_z_n10_185 < 1; mesh_z_n10_185 = mesh_z_n10_185 + 1) {
      _pgen_tmp_191_749 = VS_out_conv10_171[((mesh_y_n10_184 * 1) + mesh_z_n10_185)];
      Bootstrap(&_preg_268435493, &_pgen_tmp_191_749, 15);
      Encode_float(&_pgen_tmp_192_750, &_cst_397, 1, 1, Level(&_preg_268435493));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435495, &_preg_268435493, &_pgen_tmp_192_750);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435495._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435495._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435493._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_192_750._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435495._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435493._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_192_750._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_193_751, &_preg_268435495);
      Rescale(&_pgen_tmp_193_751._c0_poly, &_preg_268435495._c0_poly);
      Rescale(&_pgen_tmp_193_751._c1_poly, &_preg_268435495._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435494 = App_relu(_preg_268435493, _pgen_tmp_193_751, 25088);
      _pgen_tmp_195_753 = VS_out_relu10_183[((mesh_y_n10_184 * 1) + mesh_z_n10_185)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_194_752, &_pgen_tmp_195_753, &_preg_268435494);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_194_752._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_194_752._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_195_753._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435494._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_194_752._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_195_753._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435494._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu10_183[((mesh_y_n10_184 * 1) + mesh_z_n10_185)], &_pgen_tmp_194_752);
    }
  }
  Free_ciph_poly(VS_out_conv10_171, 8);
  Free_poly_data(&_pgen_tmp_192_750._poly);
  Free_poly_data(&_preg_268435495._c1_poly);
  Free_poly_data(&_preg_268435495._c0_poly);
  Free_poly_data(&_pgen_tmp_193_751._c1_poly);
  Free_poly_data(&_pgen_tmp_193_751._c0_poly);
  Free_poly_data(&_preg_268435493._c1_poly);
  Free_poly_data(&_preg_268435493._c0_poly);
  Free_poly_data(&_preg_268435494._c1_poly);
  Free_poly_data(&_preg_268435494._c0_poly);
  Free_poly_data(&_pgen_tmp_194_752._c1_poly);
  Free_poly_data(&_pgen_tmp_194_752._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 57
  // Conv_20
  // pragma: 65536, 1027, 58
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv11_186, 0, sizeof(VS_out_conv11_186));
  memset(&VS_out_conv_halo11_187, 0, sizeof(VS_out_conv_halo11_187));
  Free_ciph_poly(VS_out_conv_halo11_187, 8);
  for (mesh_y_n11_188 = 0; mesh_y_n11_188 < 8; mesh_y_n11_188 = mesh_y_n11_188 + 1) {
    for (mesh_z_n11_189 = 0; mesh_z_n11_189 < 1; mesh_z_n11_189 = mesh_z_n11_189 + 1) {
      Copy_ciph(&_preg_268435496, &VS_out_relu10_183[((mesh_y_n11_188 * 1) + mesh_z_n11_189)]);
      Copy_ciph(&input_dup_n40_190, &_preg_268435496);
      for (bs_input_n40_191 = 0; bs_input_n40_191 < 1; bs_input_n40_191 = bs_input_n40_191 + 1) {
        _preg_268435619 = Rotate(input_dup_n40_190, _cst_231[bs_input_n40_191]);
        Copy_ciph(&input_block_n40_192[bs_input_n40_191], &_preg_268435619);
        Free_poly_data(&_preg_268435619._c1_poly);
        Free_poly_data(&_preg_268435619._c0_poly);
      }
      for (mesh_x_n11_193 = 0; mesh_x_n11_193 < 8; mesh_x_n11_193 = mesh_x_n11_193 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n41_194);
        for (num_grid_n41_195 = 0; num_grid_n41_195 < 32; num_grid_n41_195 = num_grid_n41_195 + 1) {
          Zero_ciph(&result_grid_n41_196);
          for (cap_block_n41_197 = 0; cap_block_n41_197 < 1; cap_block_n41_197 = cap_block_n41_197 + 1) {
            _ckks_gen_tmp_3192_498 = input_block_n40_192[cap_block_n41_197];
            Pt_from_msg_ofst(&_pgen_tmp_196_754, 36/* cst_227 */, (((((mesh_x_n11_193 * 8) + mesh_y_n11_188) * 32) + (cap_block_n41_197 + (num_grid_n41_195 * 1)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_197_755, &_ckks_gen_tmp_3192_498, &_pgen_tmp_196_754);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n41_196, &result_grid_n41_196, &_pgen_tmp_197_755);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n41_196._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_197_755._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_3192_498._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_196_754._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_197_755._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_3192_498._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_196_754._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n41_196._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n41_196._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_197_755._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n41_196._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n41_196._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_197_755._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_199_757, &result_grid_n41_196);
          Rescale(&_pgen_tmp_199_757._c0_poly, &result_grid_n41_196._c0_poly);
          Rescale(&_pgen_tmp_199_757._c1_poly, &result_grid_n41_196._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_200_758, 37/* cst_232 */, (num_grid_n41_195) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_198_756, &_pgen_tmp_199_757, &_pgen_tmp_200_758);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_198_756._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_198_756._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_199_757._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_200_758._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_198_756._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_199_757._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_200_758._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435620 = Rotate(_pgen_tmp_198_756, -25088 + (num_grid_n41_195 * 784));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_202_760, &result_grid_n41_196);
          Rescale(&_pgen_tmp_202_760._c0_poly, &result_grid_n41_196._c0_poly);
          Rescale(&_pgen_tmp_202_760._c1_poly, &result_grid_n41_196._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_203_761, 38/* cst_233 */, (num_grid_n41_195) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_201_759, &_pgen_tmp_202_760, &_pgen_tmp_203_761);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_201_759._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_201_759._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_202_760._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_203_761._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_201_759._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_202_760._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_203_761._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435621 = Rotate(_pgen_tmp_201_759, num_grid_n41_195 * 784);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_204_762, &_preg_268435620, &_preg_268435621);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n41_194, &result_n41_194, &_pgen_tmp_204_762);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n41_194._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_204_762._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435620._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435621._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_204_762._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435620._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435621._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n41_194._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n41_194._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_204_762._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n41_194._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n41_194._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_204_762._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435620._c1_poly);
          Free_poly_data(&_preg_268435620._c0_poly);
          Free_poly_data(&_preg_268435621._c1_poly);
          Free_poly_data(&_preg_268435621._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_205_763, 39 /* cst_230 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n41_194, &result_n41_194, &_pgen_tmp_205_763);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n41_194._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n41_194._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n41_194._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_205_763._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n41_194._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n41_194._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_207_765 = VS_out_conv11_186[((mesh_x_n11_193 * 1) + mesh_z_n11_189)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_206_764, &_pgen_tmp_207_765, &result_n41_194);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_206_764._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_206_764._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_207_765._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n41_194._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_206_764._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_207_765._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n41_194._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv11_186[((mesh_x_n11_193 * 1) + mesh_z_n11_189)], &_pgen_tmp_206_764);
      }
    }
  }
  Free_ciph_poly(VS_out_relu10_183, 8);
  Free_poly_data(&_preg_268435496._c1_poly);
  Free_poly_data(&_preg_268435496._c0_poly);
  Free_poly_data(&input_dup_n40_190._c1_poly);
  Free_poly_data(&input_dup_n40_190._c0_poly);
  Free_ciph_poly(input_block_n40_192, 1);
  Free_poly_data(&_pgen_tmp_196_754._poly);
  Free_poly_data(&_pgen_tmp_197_755._c1_poly);
  Free_poly_data(&_pgen_tmp_197_755._c0_poly);
  Free_poly_data(&_pgen_tmp_200_758._poly);
  Free_poly_data(&_pgen_tmp_199_757._c1_poly);
  Free_poly_data(&_pgen_tmp_199_757._c0_poly);
  Free_poly_data(&_pgen_tmp_198_756._c1_poly);
  Free_poly_data(&_pgen_tmp_198_756._c0_poly);
  Free_poly_data(&result_grid_n41_196._c1_poly);
  Free_poly_data(&result_grid_n41_196._c0_poly);
  Free_poly_data(&_pgen_tmp_203_761._poly);
  Free_poly_data(&_pgen_tmp_202_760._c1_poly);
  Free_poly_data(&_pgen_tmp_202_760._c0_poly);
  Free_poly_data(&_pgen_tmp_201_759._c1_poly);
  Free_poly_data(&_pgen_tmp_201_759._c0_poly);
  Free_poly_data(&_pgen_tmp_204_762._c1_poly);
  Free_poly_data(&_pgen_tmp_204_762._c0_poly);
  Free_poly_data(&_pgen_tmp_205_763._poly);
  Free_poly_data(&result_n41_194._c1_poly);
  Free_poly_data(&result_n41_194._c0_poly);
  Free_poly_data(&_pgen_tmp_206_764._c1_poly);
  Free_poly_data(&_pgen_tmp_206_764._c0_poly);
  for (rescale_iv_535 = 0; rescale_iv_535 < 8; rescale_iv_535 = rescale_iv_535 + 1) {
    _pgen_tmp_208_766 = VS_out_conv11_186[rescale_iv_535];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_209_767, &_pgen_tmp_208_766);
    Rescale(&_pgen_tmp_209_767._c0_poly, &_pgen_tmp_208_766._c0_poly);
    Rescale(&_pgen_tmp_209_767._c1_poly, &_pgen_tmp_208_766._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv11_186[rescale_iv_535], &_pgen_tmp_209_767);
  }
  Free_poly_data(&_pgen_tmp_209_767._c1_poly);
  Free_poly_data(&_pgen_tmp_209_767._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 58
  // Relu_21
  // pragma: 65536, 1033, 59
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu11_198, 0, sizeof(VS_out_relu11_198));
  for (mesh_y_n11_199 = 0; mesh_y_n11_199 < 8; mesh_y_n11_199 = mesh_y_n11_199 + 1) {
    for (mesh_z_n11_200 = 0; mesh_z_n11_200 < 1; mesh_z_n11_200 = mesh_z_n11_200 + 1) {
      _pgen_tmp_210_768 = VS_out_conv11_186[((mesh_y_n11_199 * 1) + mesh_z_n11_200)];
      Bootstrap(&_preg_268435497, &_pgen_tmp_210_768, 17);
      Encode_float(&_pgen_tmp_211_769, &_cst_398, 1, 1, Level(&_preg_268435497));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435499, &_preg_268435497, &_pgen_tmp_211_769);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435499._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435499._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435497._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_211_769._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435499._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435497._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_211_769._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_212_770, &_preg_268435499);
      Rescale(&_pgen_tmp_212_770._c0_poly, &_preg_268435499._c0_poly);
      Rescale(&_pgen_tmp_212_770._c1_poly, &_preg_268435499._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435498 = App_relu(_preg_268435497, _pgen_tmp_212_770, 25088);
      _pgen_tmp_214_772 = VS_out_relu11_198[((mesh_y_n11_199 * 1) + mesh_z_n11_200)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_213_771, &_pgen_tmp_214_772, &_preg_268435498);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_213_771._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_213_771._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_214_772._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435498._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_213_771._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_214_772._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435498._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu11_198[((mesh_y_n11_199 * 1) + mesh_z_n11_200)], &_pgen_tmp_213_771);
    }
  }
  Free_ciph_poly(VS_out_conv11_186, 8);
  Free_poly_data(&_pgen_tmp_211_769._poly);
  Free_poly_data(&_preg_268435499._c1_poly);
  Free_poly_data(&_preg_268435499._c0_poly);
  Free_poly_data(&_pgen_tmp_212_770._c1_poly);
  Free_poly_data(&_pgen_tmp_212_770._c0_poly);
  Free_poly_data(&_preg_268435497._c1_poly);
  Free_poly_data(&_preg_268435497._c0_poly);
  Free_poly_data(&_preg_268435498._c1_poly);
  Free_poly_data(&_preg_268435498._c0_poly);
  Free_poly_data(&_pgen_tmp_213_771._c1_poly);
  Free_poly_data(&_pgen_tmp_213_771._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 59
  // Conv_22
  // pragma: 65536, 1027, 60
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv12_201, 0, sizeof(VS_out_conv12_201));
  memset(&VS_out_conv_halo12_202, 0, sizeof(VS_out_conv_halo12_202));
  for (mesh_y_n12_203 = 0; mesh_y_n12_203 < 1; mesh_y_n12_203 = mesh_y_n12_203 + 1) {
    for (mesh_z_n12_204 = 0; mesh_z_n12_204 < 1; mesh_z_n12_204 = mesh_z_n12_204 + 1) {
      for (mesh_x_n12_205 = 0; mesh_x_n12_205 < 8; mesh_x_n12_205 = mesh_x_n12_205 + 1) {
        Copy_ciph(&_preg_268435500, &VS_out_relu11_198[((mesh_x_n12_205 * 1) + mesh_z_n12_204)]);
        // BlockingRot replicate=1
        Copy_ciph(&input_dup_n41_206, &_preg_268435500);
        // BlockingRot HRot=bs=9
        for (bs_input_n41_207 = 0; bs_input_n41_207 < 9; bs_input_n41_207 = bs_input_n41_207 + 1) {
          _preg_268435622 = Rotate(input_dup_n41_206, _cst_238[bs_input_n41_207]);
          Copy_ciph(&input_block_n41_208[bs_input_n41_207], &_preg_268435622);
          Free_poly_data(&_preg_268435622._c1_poly);
          Free_poly_data(&_preg_268435622._c0_poly);
        }
        Zero_ciph(&result_n42_209);
        for (num_grid_n42_210 = 0; num_grid_n42_210 < 1; num_grid_n42_210 = num_grid_n42_210 + 1) {
          Zero_ciph(&result_grid_n42_211);
          for (cap_block_n42_212 = 0; cap_block_n42_212 < 9; cap_block_n42_212 = cap_block_n42_212 + 1) {
            _ckks_gen_tmp_3457_499 = input_block_n41_208[cap_block_n42_212];
            Pt_from_msg_ofst(&_pgen_tmp_215_773, 40/* cst_234 */, (((((mesh_x_n12_205 * 1) + mesh_y_n12_203) * 9) + (cap_block_n42_212 + (num_grid_n42_210 * 9)))) * (25088), 25088, 1, 5);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_216_774, &_ckks_gen_tmp_3457_499, &_pgen_tmp_215_773);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n42_211, &result_grid_n42_211, &_pgen_tmp_216_774);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n42_211._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_216_774._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_3457_499._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_215_773._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_216_774._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_3457_499._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_215_773._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n42_211._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n42_211._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_216_774._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n42_211._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n42_211._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_216_774._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          _preg_268435623 = Rotate(result_grid_n42_211, num_grid_n42_210 * 784);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n42_209, &result_n42_209, &_preg_268435623);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n42_209._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&result_n42_209._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n42_209._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435623._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n42_209._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n42_209._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435623._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435623._c1_poly);
          Free_poly_data(&_preg_268435623._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_217_775, 41 /* cst_237 */, 25088, 2, 5);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n42_209, &result_n42_209, &_pgen_tmp_217_775);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n42_209._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n42_209._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n42_209._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_217_775._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n42_209._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n42_209._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_219_777 = VS_out_conv12_201[((mesh_x_n12_205 * 1) + mesh_z_n12_204)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_218_776, &_pgen_tmp_219_777, &result_n42_209);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_218_776._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_218_776._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_219_777._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n42_209._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_218_776._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_219_777._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n42_209._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv12_201[((mesh_x_n12_205 * 1) + mesh_z_n12_204)], &_pgen_tmp_218_776);
      }
    }
  }
  Free_ciph_poly(VS_out_relu11_198, 8);
  Free_poly_data(&_preg_268435500._c1_poly);
  Free_poly_data(&_preg_268435500._c0_poly);
  Free_poly_data(&input_dup_n41_206._c1_poly);
  Free_poly_data(&input_dup_n41_206._c0_poly);
  Free_ciph_poly(input_block_n41_208, 9);
  Free_poly_data(&_pgen_tmp_215_773._poly);
  Free_poly_data(&_pgen_tmp_216_774._c1_poly);
  Free_poly_data(&_pgen_tmp_216_774._c0_poly);
  Free_poly_data(&result_grid_n42_211._c1_poly);
  Free_poly_data(&result_grid_n42_211._c0_poly);
  Free_poly_data(&_pgen_tmp_217_775._poly);
  Free_poly_data(&result_n42_209._c1_poly);
  Free_poly_data(&result_n42_209._c0_poly);
  Free_poly_data(&_pgen_tmp_218_776._c1_poly);
  Free_poly_data(&_pgen_tmp_218_776._c0_poly);
  for (rescale_iv_536 = 0; rescale_iv_536 < 8; rescale_iv_536 = rescale_iv_536 + 1) {
    _pgen_tmp_220_778 = VS_out_conv12_201[rescale_iv_536];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_221_779, &_pgen_tmp_220_778);
    Rescale(&_pgen_tmp_221_779._c0_poly, &_pgen_tmp_220_778._c0_poly);
    Rescale(&_pgen_tmp_221_779._c1_poly, &_pgen_tmp_220_778._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv12_201[rescale_iv_536], &_pgen_tmp_221_779);
  }
  Free_poly_data(&_pgen_tmp_221_779._c1_poly);
  Free_poly_data(&_pgen_tmp_221_779._c0_poly);
  for (siv_n12_213 = 0; siv_n12_213 < 8; siv_n12_213 = siv_n12_213 + 1) {
    orig_result42_214 = VS_out_conv12_201[siv_n12_213];
    Zero_ciph(&comb_row_result43_215);
    for (comb_row_lf_index_n43_216 = 0; comb_row_lf_index_n43_216 < 1; comb_row_lf_index_n43_216 = comb_row_lf_index_n43_216 + 1) {
      _preg_268435624 = Rotate(orig_result42_214, 1 << comb_row_lf_index_n43_216);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&orig_result42_214, &orig_result42_214, &_preg_268435624);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&orig_result42_214._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&orig_result42_214._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&orig_result42_214._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435624._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&orig_result42_214._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&orig_result42_214._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435624._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435624._c1_poly);
      Free_poly_data(&_preg_268435624._c0_poly);
    }
    for (comb_row_index_n43_217 = 0; comb_row_index_n43_217 < 7; comb_row_index_n43_217 = comb_row_index_n43_217 + 1) {
      _preg_268435625 = Rotate(orig_result42_214, comb_row_index_n43_217 * 2);
      Copy_ciph(&_ckks_gen_tmp_3574_500, &_preg_268435625);
      Pt_from_msg_ofst(&_pgen_tmp_222_780, 42/* cst_239 */, (comb_row_index_n43_217) * (25088), 25088, 1, 4);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_223_781, &_ckks_gen_tmp_3574_500, &_pgen_tmp_222_780);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_row_result43_215, &comb_row_result43_215, &_pgen_tmp_223_781);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&comb_row_result43_215._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_223_781._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_3574_500._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_222_780._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_223_781._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_3574_500._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_222_780._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_row_result43_215._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_row_result43_215._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_223_781._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_row_result43_215._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_row_result43_215._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_223_781._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435625._c1_poly);
      Free_poly_data(&_preg_268435625._c0_poly);
    }
    Zero_ciph(&comb_rc_result43_218);
    for (comb_rc_lf_index_n43_219 = 0; comb_rc_lf_index_n43_219 < 2; comb_rc_lf_index_n43_219 = comb_rc_lf_index_n43_219 + 1) {
      _preg_268435626 = Rotate(comb_row_result43_215, (1 << comb_rc_lf_index_n43_219) * 42);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_row_result43_215, &comb_row_result43_215, &_preg_268435626);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&comb_row_result43_215._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&comb_row_result43_215._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_row_result43_215._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435626._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_row_result43_215._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_row_result43_215._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435626._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435626._c1_poly);
      Free_poly_data(&_preg_268435626._c0_poly);
    }
    for (comb_rc_index_n43_220 = 0; comb_rc_index_n43_220 < 4; comb_rc_index_n43_220 = comb_rc_index_n43_220 + 1) {
      _preg_268435627 = Rotate(comb_row_result43_215, comb_rc_index_n43_220 * 168);
      Copy_ciph(&_ckks_gen_tmp_3627_501, &_preg_268435627);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_224_782, &_ckks_gen_tmp_3627_501);
      Rescale(&_pgen_tmp_224_782._c0_poly, &_ckks_gen_tmp_3627_501._c0_poly);
      Rescale(&_pgen_tmp_224_782._c1_poly, &_ckks_gen_tmp_3627_501._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg_ofst(&_pgen_tmp_225_783, 43/* cst_240 */, (comb_rc_index_n43_220) * (25088), 25088, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_226_784, &_pgen_tmp_224_782, &_pgen_tmp_225_783);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_rc_result43_218, &comb_rc_result43_218, &_pgen_tmp_226_784);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&comb_rc_result43_218._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_226_784._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_224_782._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_225_783._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_226_784._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_224_782._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_225_783._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_rc_result43_218._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_rc_result43_218._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_226_784._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_rc_result43_218._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_rc_result43_218._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_226_784._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435627._c1_poly);
      Free_poly_data(&_preg_268435627._c0_poly);
    }
    Zero_ciph(&ss_result43_221);
    for (comb_cc_lf_index_n43_222 = 0; comb_cc_lf_index_n43_222 < 2; comb_cc_lf_index_n43_222 = comb_cc_lf_index_n43_222 + 1) {
      _preg_268435628 = Rotate(comb_rc_result43_218, (1 << comb_cc_lf_index_n43_222) * 588);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_rc_result43_218, &comb_rc_result43_218, &_preg_268435628);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&comb_rc_result43_218._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&comb_rc_result43_218._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_rc_result43_218._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435628._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_rc_result43_218._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_rc_result43_218._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435628._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435628._c1_poly);
      Free_poly_data(&_preg_268435628._c0_poly);
    }
    for (comb_cc_index_n43_223 = 0; comb_cc_index_n43_223 < 8; comb_cc_index_n43_223 = comb_cc_index_n43_223 + 1) {
      _preg_268435629 = Rotate(comb_rc_result43_218, comb_cc_index_n43_223 * 2352);
      Copy_ciph(&_ckks_gen_tmp_3680_502, &_preg_268435629);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_227_785, &_ckks_gen_tmp_3680_502);
      Rescale(&_pgen_tmp_227_785._c0_poly, &_ckks_gen_tmp_3680_502._c0_poly);
      Rescale(&_pgen_tmp_227_785._c1_poly, &_ckks_gen_tmp_3680_502._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg_ofst(&_pgen_tmp_228_786, 44/* cst_241 */, (comb_cc_index_n43_223) * (25088), 25088, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_229_787, &_pgen_tmp_227_785, &_pgen_tmp_228_786);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&ss_result43_221, &ss_result43_221, &_pgen_tmp_229_787);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&ss_result43_221._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_229_787._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_227_785._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_228_786._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_229_787._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_227_785._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_228_786._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&ss_result43_221._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&ss_result43_221._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_229_787._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&ss_result43_221._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&ss_result43_221._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_229_787._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435629._c1_poly);
      Free_poly_data(&_preg_268435629._c0_poly);
    }
    Copy_ciph(&VS_out_conv_halo12_202[siv_n12_213], &ss_result43_221);
  }
  Free_ciph_poly(VS_out_conv12_201, 8);
  Free_poly_data(&_pgen_tmp_222_780._poly);
  Free_poly_data(&_ckks_gen_tmp_3574_500._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3574_500._c0_poly);
  Free_poly_data(&_pgen_tmp_223_781._c1_poly);
  Free_poly_data(&_pgen_tmp_223_781._c0_poly);
  Free_poly_data(&comb_row_result43_215._c1_poly);
  Free_poly_data(&comb_row_result43_215._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_3627_501._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3627_501._c0_poly);
  Free_poly_data(&_pgen_tmp_225_783._poly);
  Free_poly_data(&_pgen_tmp_224_782._c1_poly);
  Free_poly_data(&_pgen_tmp_224_782._c0_poly);
  Free_poly_data(&_pgen_tmp_226_784._c1_poly);
  Free_poly_data(&_pgen_tmp_226_784._c0_poly);
  Free_poly_data(&comb_rc_result43_218._c1_poly);
  Free_poly_data(&comb_rc_result43_218._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_3680_502._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3680_502._c0_poly);
  Free_poly_data(&_pgen_tmp_228_786._poly);
  Free_poly_data(&_pgen_tmp_227_785._c1_poly);
  Free_poly_data(&_pgen_tmp_227_785._c0_poly);
  Free_poly_data(&_pgen_tmp_229_787._c1_poly);
  Free_poly_data(&_pgen_tmp_229_787._c0_poly);
  Free_poly_data(&ss_result43_221._c1_poly);
  Free_poly_data(&ss_result43_221._c0_poly);
  for (rescale_iv_537 = 0; rescale_iv_537 < 8; rescale_iv_537 = rescale_iv_537 + 1) {
    _pgen_tmp_230_788 = VS_out_conv_halo12_202[rescale_iv_537];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_231_789, &_pgen_tmp_230_788);
    Rescale(&_pgen_tmp_231_789._c0_poly, &_pgen_tmp_230_788._c0_poly);
    Rescale(&_pgen_tmp_231_789._c1_poly, &_pgen_tmp_230_788._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv_halo12_202[rescale_iv_537], &_pgen_tmp_231_789);
  }
  Free_poly_data(&_pgen_tmp_231_789._c1_poly);
  Free_poly_data(&_pgen_tmp_231_789._c0_poly);
  for (reshardm_n12_224 = 0; reshardm_n12_224 < 2; reshardm_n12_224 = reshardm_n12_224 + 1) {
    _pgen_tmp_233_791 = VS_out_conv_halo12_202[(reshardm_n12_224 * 4)];
    _pgen_tmp_234_792 = VS_out_conv_halo12_202[((reshardm_n12_224 * 4) + 1)];
    _preg_268435630 = Rotate(_pgen_tmp_234_792, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_235_793, &_pgen_tmp_233_791, &_preg_268435630);
    CMPLR_TM_END(12, 0);
    _pgen_tmp_237_795 = VS_out_conv_halo12_202[((reshardm_n12_224 * 4) + 2)];
    _pgen_tmp_238_796 = VS_out_conv_halo12_202[((reshardm_n12_224 * 4) + 3)];
    _preg_268435631 = Rotate(_pgen_tmp_238_796, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_236_794, &_pgen_tmp_237_795, &_preg_268435631);
    _pgen_modulus_555 = Q_modulus();
    _pgen_num_q_556 = Poly_level(&_pgen_tmp_236_794._c0_poly);
    for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_236_794._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_237_795._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435631._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_236_794._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_237_795._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435631._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      _pgen_modulus_555 = _pgen_modulus_555 + 1;
    }
    CMPLR_TM_END(12, 0);
    _preg_268435632 = Rotate(_pgen_tmp_236_794, -12544);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_232_790, &_pgen_tmp_235_793, &_preg_268435632);
    _pgen_modulus_555 = Q_modulus();
    _pgen_num_q_556 = Poly_level(&_pgen_tmp_232_790._c0_poly);
    for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_235_793._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_233_791._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435630._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_235_793._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_233_791._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435630._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_232_790._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_235_793._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435632._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_232_790._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_235_793._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435632._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      _pgen_modulus_555 = _pgen_modulus_555 + 1;
    }
    CMPLR_TM_END(12, 0);
    Copy_ciph(&output_reshard12_225[reshardm_n12_224], &_pgen_tmp_232_790);
    Free_poly_data(&_preg_268435630._c1_poly);
    Free_poly_data(&_preg_268435630._c0_poly);
    Free_poly_data(&_preg_268435631._c1_poly);
    Free_poly_data(&_preg_268435631._c0_poly);
    Free_poly_data(&_preg_268435632._c1_poly);
    Free_poly_data(&_preg_268435632._c0_poly);
  }
  Free_ciph_poly(VS_out_conv_halo12_202, 8);
  Free_poly_data(&_pgen_tmp_236_794._c1_poly);
  Free_poly_data(&_pgen_tmp_236_794._c0_poly);
  Free_poly_data(&_pgen_tmp_235_793._c1_poly);
  Free_poly_data(&_pgen_tmp_235_793._c0_poly);
  Free_poly_data(&_pgen_tmp_232_790._c1_poly);
  Free_poly_data(&_pgen_tmp_232_790._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 60
  // Relu_23
  // pragma: 65536, 1033, 61
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu12_226, 0, sizeof(VS_out_relu12_226));
  for (mesh_y_n12_227 = 0; mesh_y_n12_227 < 2; mesh_y_n12_227 = mesh_y_n12_227 + 1) {
    for (mesh_z_n12_228 = 0; mesh_z_n12_228 < 1; mesh_z_n12_228 = mesh_z_n12_228 + 1) {
      _pgen_tmp_239_797 = output_reshard12_225[((mesh_y_n12_227 * 1) + mesh_z_n12_228)];
      Bootstrap(&_preg_268435501, &_pgen_tmp_239_797, 15);
      Encode_float(&_pgen_tmp_240_798, &_cst_399, 1, 1, Level(&_preg_268435501));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435503, &_preg_268435501, &_pgen_tmp_240_798);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435503._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435503._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435501._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_240_798._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435503._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435501._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_240_798._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_241_799, &_preg_268435503);
      Rescale(&_pgen_tmp_241_799._c0_poly, &_preg_268435503._c0_poly);
      Rescale(&_pgen_tmp_241_799._c1_poly, &_preg_268435503._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435502 = App_relu(_preg_268435501, _pgen_tmp_241_799, 25088);
      _pgen_tmp_243_801 = VS_out_relu12_226[((mesh_y_n12_227 * 1) + mesh_z_n12_228)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_242_800, &_pgen_tmp_243_801, &_preg_268435502);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_242_800._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_242_800._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_243_801._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435502._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_242_800._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_243_801._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435502._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu12_226[((mesh_y_n12_227 * 1) + mesh_z_n12_228)], &_pgen_tmp_242_800);
    }
  }
  Free_ciph_poly(output_reshard12_225, 2);
  Free_poly_data(&_pgen_tmp_240_798._poly);
  Free_poly_data(&_preg_268435503._c1_poly);
  Free_poly_data(&_preg_268435503._c0_poly);
  Free_poly_data(&_pgen_tmp_241_799._c1_poly);
  Free_poly_data(&_pgen_tmp_241_799._c0_poly);
  Free_poly_data(&_preg_268435501._c1_poly);
  Free_poly_data(&_preg_268435501._c0_poly);
  Free_poly_data(&_preg_268435502._c1_poly);
  Free_poly_data(&_preg_268435502._c0_poly);
  Free_poly_data(&_pgen_tmp_242_800._c1_poly);
  Free_poly_data(&_pgen_tmp_242_800._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 61
  // Conv_24
  // pragma: 65536, 1027, 62
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv13_229, 0, sizeof(VS_out_conv13_229));
  memset(&VS_out_conv_halo13_230, 0, sizeof(VS_out_conv_halo13_230));
  Free_ciph_poly(VS_out_conv_halo13_230, 4);
  for (mesh_y_n13_231 = 0; mesh_y_n13_231 < 2; mesh_y_n13_231 = mesh_y_n13_231 + 1) {
    for (mesh_z_n13_232 = 0; mesh_z_n13_232 < 1; mesh_z_n13_232 = mesh_z_n13_232 + 1) {
      Copy_ciph(&_preg_268435504, &VS_out_relu12_226[((mesh_y_n13_231 * 1) + mesh_z_n13_232)]);
      Copy_ciph(&input_dup_n43_233, &_preg_268435504);
      for (bs_input_n43_234 = 0; bs_input_n43_234 < 1; bs_input_n43_234 = bs_input_n43_234 + 1) {
        _preg_268435633 = Rotate(input_dup_n43_233, _cst_246[bs_input_n43_234]);
        Copy_ciph(&input_block_n43_235[bs_input_n43_234], &_preg_268435633);
        Free_poly_data(&_preg_268435633._c1_poly);
        Free_poly_data(&_preg_268435633._c0_poly);
      }
      for (mesh_x_n13_236 = 0; mesh_x_n13_236 < 4; mesh_x_n13_236 = mesh_x_n13_236 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n44_237);
        for (num_grid_n44_238 = 0; num_grid_n44_238 < 128; num_grid_n44_238 = num_grid_n44_238 + 1) {
          Zero_ciph(&result_grid_n44_239);
          for (cap_block_n44_240 = 0; cap_block_n44_240 < 1; cap_block_n44_240 = cap_block_n44_240 + 1) {
            _ckks_gen_tmp_3922_503 = input_block_n43_235[cap_block_n44_240];
            Pt_from_msg_ofst(&_pgen_tmp_244_802, 45/* cst_242 */, (((((mesh_x_n13_236 * 2) + mesh_y_n13_231) * 128) + (cap_block_n44_240 + (num_grid_n44_238 * 1)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_245_803, &_ckks_gen_tmp_3922_503, &_pgen_tmp_244_802);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n44_239, &result_grid_n44_239, &_pgen_tmp_245_803);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n44_239._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_245_803._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_3922_503._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_244_802._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_245_803._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_3922_503._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_244_802._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n44_239._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n44_239._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_245_803._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n44_239._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n44_239._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_245_803._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_247_805, &result_grid_n44_239);
          Rescale(&_pgen_tmp_247_805._c0_poly, &result_grid_n44_239._c0_poly);
          Rescale(&_pgen_tmp_247_805._c1_poly, &result_grid_n44_239._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_248_806, 46/* cst_247 */, (num_grid_n44_238) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_246_804, &_pgen_tmp_247_805, &_pgen_tmp_248_806);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_246_804._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_246_804._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_247_805._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_248_806._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_246_804._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_247_805._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_248_806._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435634 = Rotate(_pgen_tmp_246_804, -25088 + (num_grid_n44_238 * 196));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_250_808, &result_grid_n44_239);
          Rescale(&_pgen_tmp_250_808._c0_poly, &result_grid_n44_239._c0_poly);
          Rescale(&_pgen_tmp_250_808._c1_poly, &result_grid_n44_239._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_251_809, 47/* cst_248 */, (num_grid_n44_238) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_249_807, &_pgen_tmp_250_808, &_pgen_tmp_251_809);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_249_807._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_249_807._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_250_808._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_251_809._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_249_807._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_250_808._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_251_809._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435635 = Rotate(_pgen_tmp_249_807, num_grid_n44_238 * 196);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_252_810, &_preg_268435634, &_preg_268435635);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n44_237, &result_n44_237, &_pgen_tmp_252_810);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n44_237._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_252_810._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435634._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435635._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_252_810._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435634._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435635._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n44_237._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n44_237._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_252_810._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n44_237._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n44_237._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_252_810._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435634._c1_poly);
          Free_poly_data(&_preg_268435634._c0_poly);
          Free_poly_data(&_preg_268435635._c1_poly);
          Free_poly_data(&_preg_268435635._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_253_811, 48 /* cst_245 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n44_237, &result_n44_237, &_pgen_tmp_253_811);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n44_237._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n44_237._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n44_237._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_253_811._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n44_237._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n44_237._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_255_813 = VS_out_conv13_229[((mesh_x_n13_236 * 1) + mesh_z_n13_232)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_254_812, &_pgen_tmp_255_813, &result_n44_237);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_254_812._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_254_812._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_255_813._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n44_237._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_254_812._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_255_813._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n44_237._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv13_229[((mesh_x_n13_236 * 1) + mesh_z_n13_232)], &_pgen_tmp_254_812);
      }
    }
  }
  Free_ciph_poly(VS_out_relu12_226, 2);
  Free_poly_data(&_preg_268435504._c1_poly);
  Free_poly_data(&_preg_268435504._c0_poly);
  Free_poly_data(&input_dup_n43_233._c1_poly);
  Free_poly_data(&input_dup_n43_233._c0_poly);
  Free_ciph_poly(input_block_n43_235, 1);
  Free_poly_data(&_pgen_tmp_244_802._poly);
  Free_poly_data(&_pgen_tmp_245_803._c1_poly);
  Free_poly_data(&_pgen_tmp_245_803._c0_poly);
  Free_poly_data(&_pgen_tmp_248_806._poly);
  Free_poly_data(&_pgen_tmp_247_805._c1_poly);
  Free_poly_data(&_pgen_tmp_247_805._c0_poly);
  Free_poly_data(&_pgen_tmp_246_804._c1_poly);
  Free_poly_data(&_pgen_tmp_246_804._c0_poly);
  Free_poly_data(&result_grid_n44_239._c1_poly);
  Free_poly_data(&result_grid_n44_239._c0_poly);
  Free_poly_data(&_pgen_tmp_251_809._poly);
  Free_poly_data(&_pgen_tmp_250_808._c1_poly);
  Free_poly_data(&_pgen_tmp_250_808._c0_poly);
  Free_poly_data(&_pgen_tmp_249_807._c1_poly);
  Free_poly_data(&_pgen_tmp_249_807._c0_poly);
  Free_poly_data(&_pgen_tmp_252_810._c1_poly);
  Free_poly_data(&_pgen_tmp_252_810._c0_poly);
  Free_poly_data(&_pgen_tmp_253_811._poly);
  Free_poly_data(&result_n44_237._c1_poly);
  Free_poly_data(&result_n44_237._c0_poly);
  Free_poly_data(&_pgen_tmp_254_812._c1_poly);
  Free_poly_data(&_pgen_tmp_254_812._c0_poly);
  for (rescale_iv_538 = 0; rescale_iv_538 < 4; rescale_iv_538 = rescale_iv_538 + 1) {
    _pgen_tmp_256_814 = VS_out_conv13_229[rescale_iv_538];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_257_815, &_pgen_tmp_256_814);
    Rescale(&_pgen_tmp_257_815._c0_poly, &_pgen_tmp_256_814._c0_poly);
    Rescale(&_pgen_tmp_257_815._c1_poly, &_pgen_tmp_256_814._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv13_229[rescale_iv_538], &_pgen_tmp_257_815);
  }
  Free_poly_data(&_pgen_tmp_257_815._c1_poly);
  Free_poly_data(&_pgen_tmp_257_815._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 62
  // Relu_25
  // pragma: 65536, 1033, 63
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu13_241, 0, sizeof(VS_out_relu13_241));
  for (mesh_y_n13_242 = 0; mesh_y_n13_242 < 4; mesh_y_n13_242 = mesh_y_n13_242 + 1) {
    for (mesh_z_n13_243 = 0; mesh_z_n13_243 < 1; mesh_z_n13_243 = mesh_z_n13_243 + 1) {
      _pgen_tmp_258_816 = VS_out_conv13_229[((mesh_y_n13_242 * 1) + mesh_z_n13_243)];
      Bootstrap(&_preg_268435505, &_pgen_tmp_258_816, 14);
      Encode_float(&_pgen_tmp_259_817, &_cst_400, 1, 1, Level(&_preg_268435505));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435507, &_preg_268435505, &_pgen_tmp_259_817);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435507._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435507._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435505._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_259_817._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435507._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435505._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_259_817._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_260_818, &_preg_268435507);
      Rescale(&_pgen_tmp_260_818._c0_poly, &_preg_268435507._c0_poly);
      Rescale(&_pgen_tmp_260_818._c1_poly, &_preg_268435507._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435506 = App_relu(_preg_268435505, _pgen_tmp_260_818, 25088);
      _pgen_tmp_262_820 = VS_out_relu13_241[((mesh_y_n13_242 * 1) + mesh_z_n13_243)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_261_819, &_pgen_tmp_262_820, &_preg_268435506);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_261_819._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_261_819._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_262_820._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435506._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_261_819._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_262_820._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435506._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu13_241[((mesh_y_n13_242 * 1) + mesh_z_n13_243)], &_pgen_tmp_261_819);
    }
  }
  Free_ciph_poly(VS_out_conv13_229, 4);
  Free_poly_data(&_pgen_tmp_259_817._poly);
  Free_poly_data(&_preg_268435507._c1_poly);
  Free_poly_data(&_preg_268435507._c0_poly);
  Free_poly_data(&_pgen_tmp_260_818._c1_poly);
  Free_poly_data(&_pgen_tmp_260_818._c0_poly);
  Free_poly_data(&_preg_268435505._c1_poly);
  Free_poly_data(&_preg_268435505._c0_poly);
  Free_poly_data(&_preg_268435506._c1_poly);
  Free_poly_data(&_preg_268435506._c0_poly);
  Free_poly_data(&_pgen_tmp_261_819._c1_poly);
  Free_poly_data(&_pgen_tmp_261_819._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 63
  // Conv_26
  // pragma: 65536, 1027, 64
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv14_244, 0, sizeof(VS_out_conv14_244));
  memset(&VS_out_conv_halo14_245, 0, sizeof(VS_out_conv_halo14_245));
  Free_ciph_poly(VS_out_conv_halo14_245, 4);
  for (mesh_y_n14_246 = 0; mesh_y_n14_246 < 1; mesh_y_n14_246 = mesh_y_n14_246 + 1) {
    for (mesh_z_n14_247 = 0; mesh_z_n14_247 < 1; mesh_z_n14_247 = mesh_z_n14_247 + 1) {
      for (mesh_x_n14_248 = 0; mesh_x_n14_248 < 4; mesh_x_n14_248 = mesh_x_n14_248 + 1) {
        Copy_ciph(&_preg_268435508, &VS_out_relu13_241[((mesh_x_n14_248 * 1) + mesh_z_n14_247)]);
        // BlockingRot replicate=1
        Copy_ciph(&input_dup_n44_249, &_preg_268435508);
        // BlockingRot HRot=bs=9
        for (bs_input_n44_250 = 0; bs_input_n44_250 < 9; bs_input_n44_250 = bs_input_n44_250 + 1) {
          _preg_268435636 = Rotate(input_dup_n44_249, _cst_253[bs_input_n44_250]);
          Copy_ciph(&input_block_n44_251[bs_input_n44_250], &_preg_268435636);
          Free_poly_data(&_preg_268435636._c1_poly);
          Free_poly_data(&_preg_268435636._c0_poly);
        }
        Zero_ciph(&result_n45_252);
        for (num_grid_n45_253 = 0; num_grid_n45_253 < 1; num_grid_n45_253 = num_grid_n45_253 + 1) {
          Zero_ciph(&result_grid_n45_254);
          for (cap_block_n45_255 = 0; cap_block_n45_255 < 9; cap_block_n45_255 = cap_block_n45_255 + 1) {
            _ckks_gen_tmp_4187_504 = input_block_n44_251[cap_block_n45_255];
            Pt_from_msg_ofst(&_pgen_tmp_263_821, 49/* cst_249 */, (((((mesh_x_n14_248 * 1) + mesh_y_n14_246) * 9) + (cap_block_n45_255 + (num_grid_n45_253 * 9)))) * (25088), 25088, 1, 2);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_264_822, &_ckks_gen_tmp_4187_504, &_pgen_tmp_263_821);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n45_254, &result_grid_n45_254, &_pgen_tmp_264_822);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n45_254._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_264_822._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_4187_504._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_263_821._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_264_822._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_4187_504._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_263_821._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n45_254._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n45_254._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_264_822._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n45_254._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n45_254._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_264_822._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          _preg_268435637 = Rotate(result_grid_n45_254, num_grid_n45_253 * 196);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n45_252, &result_n45_252, &_preg_268435637);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n45_252._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&result_n45_252._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n45_252._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435637._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n45_252._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n45_252._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435637._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435637._c1_poly);
          Free_poly_data(&_preg_268435637._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_265_823, 50 /* cst_252 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n45_252, &result_n45_252, &_pgen_tmp_265_823);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n45_252._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n45_252._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n45_252._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_265_823._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n45_252._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n45_252._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_267_825 = VS_out_conv14_244[((mesh_x_n14_248 * 1) + mesh_z_n14_247)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_266_824, &_pgen_tmp_267_825, &result_n45_252);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_266_824._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_266_824._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_267_825._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n45_252._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_266_824._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_267_825._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n45_252._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv14_244[((mesh_x_n14_248 * 1) + mesh_z_n14_247)], &_pgen_tmp_266_824);
      }
    }
  }
  Free_ciph_poly(VS_out_relu13_241, 4);
  Free_poly_data(&_preg_268435508._c1_poly);
  Free_poly_data(&_preg_268435508._c0_poly);
  Free_poly_data(&input_dup_n44_249._c1_poly);
  Free_poly_data(&input_dup_n44_249._c0_poly);
  Free_ciph_poly(input_block_n44_251, 9);
  Free_poly_data(&_pgen_tmp_263_821._poly);
  Free_poly_data(&_pgen_tmp_264_822._c1_poly);
  Free_poly_data(&_pgen_tmp_264_822._c0_poly);
  Free_poly_data(&result_grid_n45_254._c1_poly);
  Free_poly_data(&result_grid_n45_254._c0_poly);
  Free_poly_data(&_pgen_tmp_265_823._poly);
  Free_poly_data(&result_n45_252._c1_poly);
  Free_poly_data(&result_n45_252._c0_poly);
  Free_poly_data(&_pgen_tmp_266_824._c1_poly);
  Free_poly_data(&_pgen_tmp_266_824._c0_poly);
  for (rescale_iv_539 = 0; rescale_iv_539 < 4; rescale_iv_539 = rescale_iv_539 + 1) {
    _pgen_tmp_268_826 = VS_out_conv14_244[rescale_iv_539];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_269_827, &_pgen_tmp_268_826);
    Rescale(&_pgen_tmp_269_827._c0_poly, &_pgen_tmp_268_826._c0_poly);
    Rescale(&_pgen_tmp_269_827._c1_poly, &_pgen_tmp_268_826._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv14_244[rescale_iv_539], &_pgen_tmp_269_827);
  }
  Free_poly_data(&_pgen_tmp_269_827._c1_poly);
  Free_poly_data(&_pgen_tmp_269_827._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 64
  // Relu_27
  // pragma: 65536, 1033, 65
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu14_256, 0, sizeof(VS_out_relu14_256));
  for (mesh_y_n14_257 = 0; mesh_y_n14_257 < 4; mesh_y_n14_257 = mesh_y_n14_257 + 1) {
    for (mesh_z_n14_258 = 0; mesh_z_n14_258 < 1; mesh_z_n14_258 = mesh_z_n14_258 + 1) {
      _pgen_tmp_270_828 = VS_out_conv14_244[((mesh_y_n14_257 * 1) + mesh_z_n14_258)];
      Bootstrap(&_preg_268435509, &_pgen_tmp_270_828, 15);
      Encode_float(&_pgen_tmp_271_829, &_cst_401, 1, 1, Level(&_preg_268435509));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435511, &_preg_268435509, &_pgen_tmp_271_829);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435511._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435511._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435509._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_271_829._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435511._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435509._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_271_829._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_272_830, &_preg_268435511);
      Rescale(&_pgen_tmp_272_830._c0_poly, &_preg_268435511._c0_poly);
      Rescale(&_pgen_tmp_272_830._c1_poly, &_preg_268435511._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435510 = App_relu(_preg_268435509, _pgen_tmp_272_830, 25088);
      _pgen_tmp_274_832 = VS_out_relu14_256[((mesh_y_n14_257 * 1) + mesh_z_n14_258)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_273_831, &_pgen_tmp_274_832, &_preg_268435510);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_273_831._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_273_831._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_274_832._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435510._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_273_831._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_274_832._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435510._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu14_256[((mesh_y_n14_257 * 1) + mesh_z_n14_258)], &_pgen_tmp_273_831);
    }
  }
  Free_ciph_poly(VS_out_conv14_244, 4);
  Free_poly_data(&_pgen_tmp_271_829._poly);
  Free_poly_data(&_preg_268435511._c1_poly);
  Free_poly_data(&_preg_268435511._c0_poly);
  Free_poly_data(&_pgen_tmp_272_830._c1_poly);
  Free_poly_data(&_pgen_tmp_272_830._c0_poly);
  Free_poly_data(&_preg_268435509._c1_poly);
  Free_poly_data(&_preg_268435509._c0_poly);
  Free_poly_data(&_preg_268435510._c1_poly);
  Free_poly_data(&_preg_268435510._c0_poly);
  Free_poly_data(&_pgen_tmp_273_831._c1_poly);
  Free_poly_data(&_pgen_tmp_273_831._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 65
  // Conv_28
  // pragma: 65536, 1027, 66
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv15_259, 0, sizeof(VS_out_conv15_259));
  memset(&VS_out_conv_halo15_260, 0, sizeof(VS_out_conv_halo15_260));
  Free_ciph_poly(VS_out_conv_halo15_260, 4);
  for (mesh_y_n15_261 = 0; mesh_y_n15_261 < 4; mesh_y_n15_261 = mesh_y_n15_261 + 1) {
    for (mesh_z_n15_262 = 0; mesh_z_n15_262 < 1; mesh_z_n15_262 = mesh_z_n15_262 + 1) {
      Copy_ciph(&_preg_268435512, &VS_out_relu14_256[((mesh_y_n15_261 * 1) + mesh_z_n15_262)]);
      Copy_ciph(&input_dup_n45_263, &_preg_268435512);
      for (bs_input_n45_264 = 0; bs_input_n45_264 < 1; bs_input_n45_264 = bs_input_n45_264 + 1) {
        _preg_268435638 = Rotate(input_dup_n45_263, _cst_258[bs_input_n45_264]);
        Copy_ciph(&input_block_n45_265[bs_input_n45_264], &_preg_268435638);
        Free_poly_data(&_preg_268435638._c1_poly);
        Free_poly_data(&_preg_268435638._c0_poly);
      }
      for (mesh_x_n15_266 = 0; mesh_x_n15_266 < 4; mesh_x_n15_266 = mesh_x_n15_266 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n46_267);
        for (num_grid_n46_268 = 0; num_grid_n46_268 < 128; num_grid_n46_268 = num_grid_n46_268 + 1) {
          Zero_ciph(&result_grid_n46_269);
          for (cap_block_n46_270 = 0; cap_block_n46_270 < 1; cap_block_n46_270 = cap_block_n46_270 + 1) {
            _ckks_gen_tmp_4422_505 = input_block_n45_265[cap_block_n46_270];
            Pt_from_msg_ofst(&_pgen_tmp_275_833, 51/* cst_254 */, (((((mesh_x_n15_266 * 4) + mesh_y_n15_261) * 128) + (cap_block_n46_270 + (num_grid_n46_268 * 1)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_276_834, &_ckks_gen_tmp_4422_505, &_pgen_tmp_275_833);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n46_269, &result_grid_n46_269, &_pgen_tmp_276_834);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n46_269._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_276_834._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_4422_505._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_275_833._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_276_834._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_4422_505._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_275_833._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n46_269._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n46_269._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_276_834._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n46_269._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n46_269._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_276_834._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_278_836, &result_grid_n46_269);
          Rescale(&_pgen_tmp_278_836._c0_poly, &result_grid_n46_269._c0_poly);
          Rescale(&_pgen_tmp_278_836._c1_poly, &result_grid_n46_269._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_279_837, 52/* cst_259 */, (num_grid_n46_268) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_277_835, &_pgen_tmp_278_836, &_pgen_tmp_279_837);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_277_835._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_277_835._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_278_836._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_279_837._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_277_835._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_278_836._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_279_837._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435639 = Rotate(_pgen_tmp_277_835, -25088 + (num_grid_n46_268 * 196));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_281_839, &result_grid_n46_269);
          Rescale(&_pgen_tmp_281_839._c0_poly, &result_grid_n46_269._c0_poly);
          Rescale(&_pgen_tmp_281_839._c1_poly, &result_grid_n46_269._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_282_840, 53/* cst_260 */, (num_grid_n46_268) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_280_838, &_pgen_tmp_281_839, &_pgen_tmp_282_840);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_280_838._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_280_838._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_281_839._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_282_840._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_280_838._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_281_839._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_282_840._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435640 = Rotate(_pgen_tmp_280_838, num_grid_n46_268 * 196);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_283_841, &_preg_268435639, &_preg_268435640);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n46_267, &result_n46_267, &_pgen_tmp_283_841);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n46_267._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_283_841._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435639._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435640._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_283_841._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435639._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435640._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n46_267._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n46_267._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_283_841._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n46_267._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n46_267._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_283_841._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435639._c1_poly);
          Free_poly_data(&_preg_268435639._c0_poly);
          Free_poly_data(&_preg_268435640._c1_poly);
          Free_poly_data(&_preg_268435640._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_284_842, 54 /* cst_257 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n46_267, &result_n46_267, &_pgen_tmp_284_842);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n46_267._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n46_267._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n46_267._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_284_842._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n46_267._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n46_267._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_286_844 = VS_out_conv15_259[((mesh_x_n15_266 * 1) + mesh_z_n15_262)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_285_843, &_pgen_tmp_286_844, &result_n46_267);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_285_843._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_285_843._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_286_844._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n46_267._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_285_843._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_286_844._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n46_267._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv15_259[((mesh_x_n15_266 * 1) + mesh_z_n15_262)], &_pgen_tmp_285_843);
      }
    }
  }
  Free_ciph_poly(VS_out_relu14_256, 4);
  Free_poly_data(&_preg_268435512._c1_poly);
  Free_poly_data(&_preg_268435512._c0_poly);
  Free_poly_data(&input_dup_n45_263._c1_poly);
  Free_poly_data(&input_dup_n45_263._c0_poly);
  Free_ciph_poly(input_block_n45_265, 1);
  Free_poly_data(&_pgen_tmp_275_833._poly);
  Free_poly_data(&_pgen_tmp_276_834._c1_poly);
  Free_poly_data(&_pgen_tmp_276_834._c0_poly);
  Free_poly_data(&_pgen_tmp_279_837._poly);
  Free_poly_data(&_pgen_tmp_278_836._c1_poly);
  Free_poly_data(&_pgen_tmp_278_836._c0_poly);
  Free_poly_data(&_pgen_tmp_277_835._c1_poly);
  Free_poly_data(&_pgen_tmp_277_835._c0_poly);
  Free_poly_data(&result_grid_n46_269._c1_poly);
  Free_poly_data(&result_grid_n46_269._c0_poly);
  Free_poly_data(&_pgen_tmp_282_840._poly);
  Free_poly_data(&_pgen_tmp_281_839._c1_poly);
  Free_poly_data(&_pgen_tmp_281_839._c0_poly);
  Free_poly_data(&_pgen_tmp_280_838._c1_poly);
  Free_poly_data(&_pgen_tmp_280_838._c0_poly);
  Free_poly_data(&_pgen_tmp_283_841._c1_poly);
  Free_poly_data(&_pgen_tmp_283_841._c0_poly);
  Free_poly_data(&_pgen_tmp_284_842._poly);
  Free_poly_data(&result_n46_267._c1_poly);
  Free_poly_data(&result_n46_267._c0_poly);
  Free_poly_data(&_pgen_tmp_285_843._c1_poly);
  Free_poly_data(&_pgen_tmp_285_843._c0_poly);
  for (rescale_iv_540 = 0; rescale_iv_540 < 4; rescale_iv_540 = rescale_iv_540 + 1) {
    _pgen_tmp_287_845 = VS_out_conv15_259[rescale_iv_540];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_288_846, &_pgen_tmp_287_845);
    Rescale(&_pgen_tmp_288_846._c0_poly, &_pgen_tmp_287_845._c0_poly);
    Rescale(&_pgen_tmp_288_846._c1_poly, &_pgen_tmp_287_845._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv15_259[rescale_iv_540], &_pgen_tmp_288_846);
  }
  Free_poly_data(&_pgen_tmp_288_846._c1_poly);
  Free_poly_data(&_pgen_tmp_288_846._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 66
  // Relu_29
  // pragma: 65536, 1033, 67
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu15_271, 0, sizeof(VS_out_relu15_271));
  for (mesh_y_n15_272 = 0; mesh_y_n15_272 < 4; mesh_y_n15_272 = mesh_y_n15_272 + 1) {
    for (mesh_z_n15_273 = 0; mesh_z_n15_273 < 1; mesh_z_n15_273 = mesh_z_n15_273 + 1) {
      _pgen_tmp_289_847 = VS_out_conv15_259[((mesh_y_n15_272 * 1) + mesh_z_n15_273)];
      Bootstrap(&_preg_268435513, &_pgen_tmp_289_847, 14);
      Encode_float(&_pgen_tmp_290_848, &_cst_402, 1, 1, Level(&_preg_268435513));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435515, &_preg_268435513, &_pgen_tmp_290_848);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435515._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435515._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435513._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_290_848._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435515._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435513._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_290_848._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_291_849, &_preg_268435515);
      Rescale(&_pgen_tmp_291_849._c0_poly, &_preg_268435515._c0_poly);
      Rescale(&_pgen_tmp_291_849._c1_poly, &_preg_268435515._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435514 = App_relu(_preg_268435513, _pgen_tmp_291_849, 25088);
      _pgen_tmp_293_851 = VS_out_relu15_271[((mesh_y_n15_272 * 1) + mesh_z_n15_273)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_292_850, &_pgen_tmp_293_851, &_preg_268435514);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_292_850._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_292_850._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_293_851._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435514._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_292_850._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_293_851._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435514._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu15_271[((mesh_y_n15_272 * 1) + mesh_z_n15_273)], &_pgen_tmp_292_850);
    }
  }
  Free_ciph_poly(VS_out_conv15_259, 4);
  Free_poly_data(&_pgen_tmp_290_848._poly);
  Free_poly_data(&_preg_268435515._c1_poly);
  Free_poly_data(&_preg_268435515._c0_poly);
  Free_poly_data(&_pgen_tmp_291_849._c1_poly);
  Free_poly_data(&_pgen_tmp_291_849._c0_poly);
  Free_poly_data(&_preg_268435513._c1_poly);
  Free_poly_data(&_preg_268435513._c0_poly);
  Free_poly_data(&_preg_268435514._c1_poly);
  Free_poly_data(&_preg_268435514._c0_poly);
  Free_poly_data(&_pgen_tmp_292_850._c1_poly);
  Free_poly_data(&_pgen_tmp_292_850._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 67
  // Conv_30
  // pragma: 65536, 1027, 68
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv16_274, 0, sizeof(VS_out_conv16_274));
  memset(&VS_out_conv_halo16_275, 0, sizeof(VS_out_conv_halo16_275));
  Free_ciph_poly(VS_out_conv_halo16_275, 4);
  for (mesh_y_n16_276 = 0; mesh_y_n16_276 < 1; mesh_y_n16_276 = mesh_y_n16_276 + 1) {
    for (mesh_z_n16_277 = 0; mesh_z_n16_277 < 1; mesh_z_n16_277 = mesh_z_n16_277 + 1) {
      for (mesh_x_n16_278 = 0; mesh_x_n16_278 < 4; mesh_x_n16_278 = mesh_x_n16_278 + 1) {
        Copy_ciph(&_preg_268435516, &VS_out_relu15_271[((mesh_x_n16_278 * 1) + mesh_z_n16_277)]);
        // BlockingRot replicate=1
        Copy_ciph(&input_dup_n46_279, &_preg_268435516);
        // BlockingRot HRot=bs=9
        for (bs_input_n46_280 = 0; bs_input_n46_280 < 9; bs_input_n46_280 = bs_input_n46_280 + 1) {
          _preg_268435641 = Rotate(input_dup_n46_279, _cst_265[bs_input_n46_280]);
          Copy_ciph(&input_block_n46_281[bs_input_n46_280], &_preg_268435641);
          Free_poly_data(&_preg_268435641._c1_poly);
          Free_poly_data(&_preg_268435641._c0_poly);
        }
        Zero_ciph(&result_n47_282);
        for (num_grid_n47_283 = 0; num_grid_n47_283 < 1; num_grid_n47_283 = num_grid_n47_283 + 1) {
          Zero_ciph(&result_grid_n47_284);
          for (cap_block_n47_285 = 0; cap_block_n47_285 < 9; cap_block_n47_285 = cap_block_n47_285 + 1) {
            _ckks_gen_tmp_4687_506 = input_block_n46_281[cap_block_n47_285];
            Pt_from_msg_ofst(&_pgen_tmp_294_852, 55/* cst_261 */, (((((mesh_x_n16_278 * 1) + mesh_y_n16_276) * 9) + (cap_block_n47_285 + (num_grid_n47_283 * 9)))) * (25088), 25088, 1, 2);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_295_853, &_ckks_gen_tmp_4687_506, &_pgen_tmp_294_852);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n47_284, &result_grid_n47_284, &_pgen_tmp_295_853);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n47_284._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_295_853._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_4687_506._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_294_852._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_295_853._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_4687_506._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_294_852._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n47_284._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n47_284._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_295_853._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n47_284._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n47_284._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_295_853._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          _preg_268435642 = Rotate(result_grid_n47_284, num_grid_n47_283 * 196);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n47_282, &result_n47_282, &_preg_268435642);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n47_282._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&result_n47_282._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n47_282._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435642._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n47_282._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n47_282._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435642._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435642._c1_poly);
          Free_poly_data(&_preg_268435642._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_296_854, 56 /* cst_264 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n47_282, &result_n47_282, &_pgen_tmp_296_854);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n47_282._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n47_282._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n47_282._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_296_854._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n47_282._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n47_282._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_298_856 = VS_out_conv16_274[((mesh_x_n16_278 * 1) + mesh_z_n16_277)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_297_855, &_pgen_tmp_298_856, &result_n47_282);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_297_855._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_297_855._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_298_856._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n47_282._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_297_855._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_298_856._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n47_282._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv16_274[((mesh_x_n16_278 * 1) + mesh_z_n16_277)], &_pgen_tmp_297_855);
      }
    }
  }
  Free_ciph_poly(VS_out_relu15_271, 4);
  Free_poly_data(&_preg_268435516._c1_poly);
  Free_poly_data(&_preg_268435516._c0_poly);
  Free_poly_data(&input_dup_n46_279._c1_poly);
  Free_poly_data(&input_dup_n46_279._c0_poly);
  Free_ciph_poly(input_block_n46_281, 9);
  Free_poly_data(&_pgen_tmp_294_852._poly);
  Free_poly_data(&_pgen_tmp_295_853._c1_poly);
  Free_poly_data(&_pgen_tmp_295_853._c0_poly);
  Free_poly_data(&result_grid_n47_284._c1_poly);
  Free_poly_data(&result_grid_n47_284._c0_poly);
  Free_poly_data(&_pgen_tmp_296_854._poly);
  Free_poly_data(&result_n47_282._c1_poly);
  Free_poly_data(&result_n47_282._c0_poly);
  Free_poly_data(&_pgen_tmp_297_855._c1_poly);
  Free_poly_data(&_pgen_tmp_297_855._c0_poly);
  for (rescale_iv_541 = 0; rescale_iv_541 < 4; rescale_iv_541 = rescale_iv_541 + 1) {
    _pgen_tmp_299_857 = VS_out_conv16_274[rescale_iv_541];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_300_858, &_pgen_tmp_299_857);
    Rescale(&_pgen_tmp_300_858._c0_poly, &_pgen_tmp_299_857._c0_poly);
    Rescale(&_pgen_tmp_300_858._c1_poly, &_pgen_tmp_299_857._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv16_274[rescale_iv_541], &_pgen_tmp_300_858);
  }
  Free_poly_data(&_pgen_tmp_300_858._c1_poly);
  Free_poly_data(&_pgen_tmp_300_858._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 68
  // Relu_31
  // pragma: 65536, 1033, 69
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu16_286, 0, sizeof(VS_out_relu16_286));
  for (mesh_y_n16_287 = 0; mesh_y_n16_287 < 4; mesh_y_n16_287 = mesh_y_n16_287 + 1) {
    for (mesh_z_n16_288 = 0; mesh_z_n16_288 < 1; mesh_z_n16_288 = mesh_z_n16_288 + 1) {
      _pgen_tmp_301_859 = VS_out_conv16_274[((mesh_y_n16_287 * 1) + mesh_z_n16_288)];
      Bootstrap(&_preg_268435517, &_pgen_tmp_301_859, 15);
      Encode_float(&_pgen_tmp_302_860, &_cst_403, 1, 1, Level(&_preg_268435517));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435519, &_preg_268435517, &_pgen_tmp_302_860);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435519._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435519._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435517._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_302_860._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435519._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435517._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_302_860._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_303_861, &_preg_268435519);
      Rescale(&_pgen_tmp_303_861._c0_poly, &_preg_268435519._c0_poly);
      Rescale(&_pgen_tmp_303_861._c1_poly, &_preg_268435519._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435518 = App_relu(_preg_268435517, _pgen_tmp_303_861, 25088);
      _pgen_tmp_305_863 = VS_out_relu16_286[((mesh_y_n16_287 * 1) + mesh_z_n16_288)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_304_862, &_pgen_tmp_305_863, &_preg_268435518);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_304_862._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_304_862._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_305_863._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435518._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_304_862._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_305_863._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435518._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu16_286[((mesh_y_n16_287 * 1) + mesh_z_n16_288)], &_pgen_tmp_304_862);
    }
  }
  Free_ciph_poly(VS_out_conv16_274, 4);
  Free_poly_data(&_pgen_tmp_302_860._poly);
  Free_poly_data(&_preg_268435519._c1_poly);
  Free_poly_data(&_preg_268435519._c0_poly);
  Free_poly_data(&_pgen_tmp_303_861._c1_poly);
  Free_poly_data(&_pgen_tmp_303_861._c0_poly);
  Free_poly_data(&_preg_268435517._c1_poly);
  Free_poly_data(&_preg_268435517._c0_poly);
  Free_poly_data(&_preg_268435518._c1_poly);
  Free_poly_data(&_preg_268435518._c0_poly);
  Free_poly_data(&_pgen_tmp_304_862._c1_poly);
  Free_poly_data(&_pgen_tmp_304_862._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 69
  // Conv_32
  // pragma: 65536, 1027, 70
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv17_289, 0, sizeof(VS_out_conv17_289));
  memset(&VS_out_conv_halo17_290, 0, sizeof(VS_out_conv_halo17_290));
  Free_ciph_poly(VS_out_conv_halo17_290, 4);
  for (mesh_y_n17_291 = 0; mesh_y_n17_291 < 4; mesh_y_n17_291 = mesh_y_n17_291 + 1) {
    for (mesh_z_n17_292 = 0; mesh_z_n17_292 < 1; mesh_z_n17_292 = mesh_z_n17_292 + 1) {
      Copy_ciph(&_preg_268435520, &VS_out_relu16_286[((mesh_y_n17_291 * 1) + mesh_z_n17_292)]);
      Copy_ciph(&input_dup_n47_293, &_preg_268435520);
      for (bs_input_n47_294 = 0; bs_input_n47_294 < 1; bs_input_n47_294 = bs_input_n47_294 + 1) {
        _preg_268435643 = Rotate(input_dup_n47_293, _cst_270[bs_input_n47_294]);
        Copy_ciph(&input_block_n47_295[bs_input_n47_294], &_preg_268435643);
        Free_poly_data(&_preg_268435643._c1_poly);
        Free_poly_data(&_preg_268435643._c0_poly);
      }
      for (mesh_x_n17_296 = 0; mesh_x_n17_296 < 4; mesh_x_n17_296 = mesh_x_n17_296 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n48_297);
        for (num_grid_n48_298 = 0; num_grid_n48_298 < 128; num_grid_n48_298 = num_grid_n48_298 + 1) {
          Zero_ciph(&result_grid_n48_299);
          for (cap_block_n48_300 = 0; cap_block_n48_300 < 1; cap_block_n48_300 = cap_block_n48_300 + 1) {
            _ckks_gen_tmp_4922_507 = input_block_n47_295[cap_block_n48_300];
            Pt_from_msg_ofst(&_pgen_tmp_306_864, 57/* cst_266 */, (((((mesh_x_n17_296 * 4) + mesh_y_n17_291) * 128) + (cap_block_n48_300 + (num_grid_n48_298 * 1)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_307_865, &_ckks_gen_tmp_4922_507, &_pgen_tmp_306_864);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n48_299, &result_grid_n48_299, &_pgen_tmp_307_865);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n48_299._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_307_865._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_4922_507._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_306_864._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_307_865._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_4922_507._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_306_864._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n48_299._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n48_299._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_307_865._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n48_299._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n48_299._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_307_865._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_309_867, &result_grid_n48_299);
          Rescale(&_pgen_tmp_309_867._c0_poly, &result_grid_n48_299._c0_poly);
          Rescale(&_pgen_tmp_309_867._c1_poly, &result_grid_n48_299._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_310_868, 58/* cst_271 */, (num_grid_n48_298) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_308_866, &_pgen_tmp_309_867, &_pgen_tmp_310_868);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_308_866._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_308_866._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_309_867._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_310_868._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_308_866._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_309_867._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_310_868._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435644 = Rotate(_pgen_tmp_308_866, -25088 + (num_grid_n48_298 * 196));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_312_870, &result_grid_n48_299);
          Rescale(&_pgen_tmp_312_870._c0_poly, &result_grid_n48_299._c0_poly);
          Rescale(&_pgen_tmp_312_870._c1_poly, &result_grid_n48_299._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_313_871, 59/* cst_272 */, (num_grid_n48_298) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_311_869, &_pgen_tmp_312_870, &_pgen_tmp_313_871);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_311_869._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_311_869._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_312_870._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_313_871._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_311_869._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_312_870._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_313_871._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435645 = Rotate(_pgen_tmp_311_869, num_grid_n48_298 * 196);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_314_872, &_preg_268435644, &_preg_268435645);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n48_297, &result_n48_297, &_pgen_tmp_314_872);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n48_297._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_314_872._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435644._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435645._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_314_872._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435644._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435645._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n48_297._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n48_297._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_314_872._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n48_297._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n48_297._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_314_872._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435644._c1_poly);
          Free_poly_data(&_preg_268435644._c0_poly);
          Free_poly_data(&_preg_268435645._c1_poly);
          Free_poly_data(&_preg_268435645._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_315_873, 60 /* cst_269 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n48_297, &result_n48_297, &_pgen_tmp_315_873);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n48_297._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n48_297._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n48_297._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_315_873._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n48_297._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n48_297._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_317_875 = VS_out_conv17_289[((mesh_x_n17_296 * 1) + mesh_z_n17_292)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_316_874, &_pgen_tmp_317_875, &result_n48_297);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_316_874._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_316_874._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_317_875._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n48_297._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_316_874._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_317_875._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n48_297._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv17_289[((mesh_x_n17_296 * 1) + mesh_z_n17_292)], &_pgen_tmp_316_874);
      }
    }
  }
  Free_ciph_poly(VS_out_relu16_286, 4);
  Free_poly_data(&_preg_268435520._c1_poly);
  Free_poly_data(&_preg_268435520._c0_poly);
  Free_poly_data(&input_dup_n47_293._c1_poly);
  Free_poly_data(&input_dup_n47_293._c0_poly);
  Free_ciph_poly(input_block_n47_295, 1);
  Free_poly_data(&_pgen_tmp_306_864._poly);
  Free_poly_data(&_pgen_tmp_307_865._c1_poly);
  Free_poly_data(&_pgen_tmp_307_865._c0_poly);
  Free_poly_data(&_pgen_tmp_310_868._poly);
  Free_poly_data(&_pgen_tmp_309_867._c1_poly);
  Free_poly_data(&_pgen_tmp_309_867._c0_poly);
  Free_poly_data(&_pgen_tmp_308_866._c1_poly);
  Free_poly_data(&_pgen_tmp_308_866._c0_poly);
  Free_poly_data(&result_grid_n48_299._c1_poly);
  Free_poly_data(&result_grid_n48_299._c0_poly);
  Free_poly_data(&_pgen_tmp_313_871._poly);
  Free_poly_data(&_pgen_tmp_312_870._c1_poly);
  Free_poly_data(&_pgen_tmp_312_870._c0_poly);
  Free_poly_data(&_pgen_tmp_311_869._c1_poly);
  Free_poly_data(&_pgen_tmp_311_869._c0_poly);
  Free_poly_data(&_pgen_tmp_314_872._c1_poly);
  Free_poly_data(&_pgen_tmp_314_872._c0_poly);
  Free_poly_data(&_pgen_tmp_315_873._poly);
  Free_poly_data(&result_n48_297._c1_poly);
  Free_poly_data(&result_n48_297._c0_poly);
  Free_poly_data(&_pgen_tmp_316_874._c1_poly);
  Free_poly_data(&_pgen_tmp_316_874._c0_poly);
  for (rescale_iv_542 = 0; rescale_iv_542 < 4; rescale_iv_542 = rescale_iv_542 + 1) {
    _pgen_tmp_318_876 = VS_out_conv17_289[rescale_iv_542];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_319_877, &_pgen_tmp_318_876);
    Rescale(&_pgen_tmp_319_877._c0_poly, &_pgen_tmp_318_876._c0_poly);
    Rescale(&_pgen_tmp_319_877._c1_poly, &_pgen_tmp_318_876._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv17_289[rescale_iv_542], &_pgen_tmp_319_877);
  }
  Free_poly_data(&_pgen_tmp_319_877._c1_poly);
  Free_poly_data(&_pgen_tmp_319_877._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 70
  // Relu_33
  // pragma: 65536, 1033, 71
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu17_301, 0, sizeof(VS_out_relu17_301));
  for (mesh_y_n17_302 = 0; mesh_y_n17_302 < 4; mesh_y_n17_302 = mesh_y_n17_302 + 1) {
    for (mesh_z_n17_303 = 0; mesh_z_n17_303 < 1; mesh_z_n17_303 = mesh_z_n17_303 + 1) {
      _pgen_tmp_320_878 = VS_out_conv17_289[((mesh_y_n17_302 * 1) + mesh_z_n17_303)];
      Bootstrap(&_preg_268435521, &_pgen_tmp_320_878, 14);
      Encode_float(&_pgen_tmp_321_879, &_cst_404, 1, 1, Level(&_preg_268435521));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435523, &_preg_268435521, &_pgen_tmp_321_879);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435523._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435523._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435521._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_321_879._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435523._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435521._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_321_879._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_322_880, &_preg_268435523);
      Rescale(&_pgen_tmp_322_880._c0_poly, &_preg_268435523._c0_poly);
      Rescale(&_pgen_tmp_322_880._c1_poly, &_preg_268435523._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435522 = App_relu(_preg_268435521, _pgen_tmp_322_880, 25088);
      _pgen_tmp_324_882 = VS_out_relu17_301[((mesh_y_n17_302 * 1) + mesh_z_n17_303)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_323_881, &_pgen_tmp_324_882, &_preg_268435522);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_323_881._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_323_881._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_324_882._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435522._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_323_881._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_324_882._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435522._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu17_301[((mesh_y_n17_302 * 1) + mesh_z_n17_303)], &_pgen_tmp_323_881);
    }
  }
  Free_ciph_poly(VS_out_conv17_289, 4);
  Free_poly_data(&_pgen_tmp_321_879._poly);
  Free_poly_data(&_preg_268435523._c1_poly);
  Free_poly_data(&_preg_268435523._c0_poly);
  Free_poly_data(&_pgen_tmp_322_880._c1_poly);
  Free_poly_data(&_pgen_tmp_322_880._c0_poly);
  Free_poly_data(&_preg_268435521._c1_poly);
  Free_poly_data(&_preg_268435521._c0_poly);
  Free_poly_data(&_preg_268435522._c1_poly);
  Free_poly_data(&_preg_268435522._c0_poly);
  Free_poly_data(&_pgen_tmp_323_881._c1_poly);
  Free_poly_data(&_pgen_tmp_323_881._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 71
  // Conv_34
  // pragma: 65536, 1027, 72
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv18_304, 0, sizeof(VS_out_conv18_304));
  memset(&VS_out_conv_halo18_305, 0, sizeof(VS_out_conv_halo18_305));
  Free_ciph_poly(VS_out_conv_halo18_305, 4);
  for (mesh_y_n18_306 = 0; mesh_y_n18_306 < 1; mesh_y_n18_306 = mesh_y_n18_306 + 1) {
    for (mesh_z_n18_307 = 0; mesh_z_n18_307 < 1; mesh_z_n18_307 = mesh_z_n18_307 + 1) {
      for (mesh_x_n18_308 = 0; mesh_x_n18_308 < 4; mesh_x_n18_308 = mesh_x_n18_308 + 1) {
        Copy_ciph(&_preg_268435524, &VS_out_relu17_301[((mesh_x_n18_308 * 1) + mesh_z_n18_307)]);
        // BlockingRot replicate=1
        Copy_ciph(&input_dup_n48_309, &_preg_268435524);
        // BlockingRot HRot=bs=9
        for (bs_input_n48_310 = 0; bs_input_n48_310 < 9; bs_input_n48_310 = bs_input_n48_310 + 1) {
          _preg_268435646 = Rotate(input_dup_n48_309, _cst_277[bs_input_n48_310]);
          Copy_ciph(&input_block_n48_311[bs_input_n48_310], &_preg_268435646);
          Free_poly_data(&_preg_268435646._c1_poly);
          Free_poly_data(&_preg_268435646._c0_poly);
        }
        Zero_ciph(&result_n49_312);
        for (num_grid_n49_313 = 0; num_grid_n49_313 < 1; num_grid_n49_313 = num_grid_n49_313 + 1) {
          Zero_ciph(&result_grid_n49_314);
          for (cap_block_n49_315 = 0; cap_block_n49_315 < 9; cap_block_n49_315 = cap_block_n49_315 + 1) {
            _ckks_gen_tmp_5187_508 = input_block_n48_311[cap_block_n49_315];
            Pt_from_msg_ofst(&_pgen_tmp_325_883, 61/* cst_273 */, (((((mesh_x_n18_308 * 1) + mesh_y_n18_306) * 9) + (cap_block_n49_315 + (num_grid_n49_313 * 9)))) * (25088), 25088, 1, 2);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_326_884, &_ckks_gen_tmp_5187_508, &_pgen_tmp_325_883);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n49_314, &result_grid_n49_314, &_pgen_tmp_326_884);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n49_314._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_326_884._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_5187_508._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_325_883._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_326_884._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_5187_508._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_325_883._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n49_314._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n49_314._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_326_884._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n49_314._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n49_314._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_326_884._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          _preg_268435647 = Rotate(result_grid_n49_314, num_grid_n49_313 * 196);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n49_312, &result_n49_312, &_preg_268435647);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n49_312._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&result_n49_312._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n49_312._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435647._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n49_312._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n49_312._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435647._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435647._c1_poly);
          Free_poly_data(&_preg_268435647._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_327_885, 62 /* cst_276 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n49_312, &result_n49_312, &_pgen_tmp_327_885);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n49_312._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n49_312._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n49_312._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_327_885._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n49_312._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n49_312._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_329_887 = VS_out_conv18_304[((mesh_x_n18_308 * 1) + mesh_z_n18_307)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_328_886, &_pgen_tmp_329_887, &result_n49_312);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_328_886._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_328_886._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_329_887._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n49_312._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_328_886._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_329_887._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n49_312._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv18_304[((mesh_x_n18_308 * 1) + mesh_z_n18_307)], &_pgen_tmp_328_886);
      }
    }
  }
  Free_ciph_poly(VS_out_relu17_301, 4);
  Free_poly_data(&_preg_268435524._c1_poly);
  Free_poly_data(&_preg_268435524._c0_poly);
  Free_poly_data(&input_dup_n48_309._c1_poly);
  Free_poly_data(&input_dup_n48_309._c0_poly);
  Free_ciph_poly(input_block_n48_311, 9);
  Free_poly_data(&_pgen_tmp_325_883._poly);
  Free_poly_data(&_pgen_tmp_326_884._c1_poly);
  Free_poly_data(&_pgen_tmp_326_884._c0_poly);
  Free_poly_data(&result_grid_n49_314._c1_poly);
  Free_poly_data(&result_grid_n49_314._c0_poly);
  Free_poly_data(&_pgen_tmp_327_885._poly);
  Free_poly_data(&result_n49_312._c1_poly);
  Free_poly_data(&result_n49_312._c0_poly);
  Free_poly_data(&_pgen_tmp_328_886._c1_poly);
  Free_poly_data(&_pgen_tmp_328_886._c0_poly);
  for (rescale_iv_543 = 0; rescale_iv_543 < 4; rescale_iv_543 = rescale_iv_543 + 1) {
    _pgen_tmp_330_888 = VS_out_conv18_304[rescale_iv_543];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_331_889, &_pgen_tmp_330_888);
    Rescale(&_pgen_tmp_331_889._c0_poly, &_pgen_tmp_330_888._c0_poly);
    Rescale(&_pgen_tmp_331_889._c1_poly, &_pgen_tmp_330_888._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv18_304[rescale_iv_543], &_pgen_tmp_331_889);
  }
  Free_poly_data(&_pgen_tmp_331_889._c1_poly);
  Free_poly_data(&_pgen_tmp_331_889._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 72
  // Relu_35
  // pragma: 65536, 1033, 73
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu18_316, 0, sizeof(VS_out_relu18_316));
  for (mesh_y_n18_317 = 0; mesh_y_n18_317 < 4; mesh_y_n18_317 = mesh_y_n18_317 + 1) {
    for (mesh_z_n18_318 = 0; mesh_z_n18_318 < 1; mesh_z_n18_318 = mesh_z_n18_318 + 1) {
      _pgen_tmp_332_890 = VS_out_conv18_304[((mesh_y_n18_317 * 1) + mesh_z_n18_318)];
      Bootstrap(&_preg_268435525, &_pgen_tmp_332_890, 15);
      Encode_float(&_pgen_tmp_333_891, &_cst_405, 1, 1, Level(&_preg_268435525));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435527, &_preg_268435525, &_pgen_tmp_333_891);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435527._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435527._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435525._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_333_891._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435527._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435525._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_333_891._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_334_892, &_preg_268435527);
      Rescale(&_pgen_tmp_334_892._c0_poly, &_preg_268435527._c0_poly);
      Rescale(&_pgen_tmp_334_892._c1_poly, &_preg_268435527._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435526 = App_relu(_preg_268435525, _pgen_tmp_334_892, 25088);
      _pgen_tmp_336_894 = VS_out_relu18_316[((mesh_y_n18_317 * 1) + mesh_z_n18_318)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_335_893, &_pgen_tmp_336_894, &_preg_268435526);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_335_893._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_335_893._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_336_894._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435526._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_335_893._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_336_894._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435526._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu18_316[((mesh_y_n18_317 * 1) + mesh_z_n18_318)], &_pgen_tmp_335_893);
    }
  }
  Free_ciph_poly(VS_out_conv18_304, 4);
  Free_poly_data(&_pgen_tmp_333_891._poly);
  Free_poly_data(&_preg_268435527._c1_poly);
  Free_poly_data(&_preg_268435527._c0_poly);
  Free_poly_data(&_pgen_tmp_334_892._c1_poly);
  Free_poly_data(&_pgen_tmp_334_892._c0_poly);
  Free_poly_data(&_preg_268435525._c1_poly);
  Free_poly_data(&_preg_268435525._c0_poly);
  Free_poly_data(&_preg_268435526._c1_poly);
  Free_poly_data(&_preg_268435526._c0_poly);
  Free_poly_data(&_pgen_tmp_335_893._c1_poly);
  Free_poly_data(&_pgen_tmp_335_893._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 73
  // Conv_36
  // pragma: 65536, 1027, 74
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv19_319, 0, sizeof(VS_out_conv19_319));
  memset(&VS_out_conv_halo19_320, 0, sizeof(VS_out_conv_halo19_320));
  Free_ciph_poly(VS_out_conv_halo19_320, 4);
  for (mesh_y_n19_321 = 0; mesh_y_n19_321 < 4; mesh_y_n19_321 = mesh_y_n19_321 + 1) {
    for (mesh_z_n19_322 = 0; mesh_z_n19_322 < 1; mesh_z_n19_322 = mesh_z_n19_322 + 1) {
      Copy_ciph(&_preg_268435528, &VS_out_relu18_316[((mesh_y_n19_321 * 1) + mesh_z_n19_322)]);
      Copy_ciph(&input_dup_n49_323, &_preg_268435528);
      for (bs_input_n49_324 = 0; bs_input_n49_324 < 1; bs_input_n49_324 = bs_input_n49_324 + 1) {
        _preg_268435648 = Rotate(input_dup_n49_323, _cst_282[bs_input_n49_324]);
        Copy_ciph(&input_block_n49_325[bs_input_n49_324], &_preg_268435648);
        Free_poly_data(&_preg_268435648._c1_poly);
        Free_poly_data(&_preg_268435648._c0_poly);
      }
      for (mesh_x_n19_326 = 0; mesh_x_n19_326 < 4; mesh_x_n19_326 = mesh_x_n19_326 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n50_327);
        for (num_grid_n50_328 = 0; num_grid_n50_328 < 128; num_grid_n50_328 = num_grid_n50_328 + 1) {
          Zero_ciph(&result_grid_n50_329);
          for (cap_block_n50_330 = 0; cap_block_n50_330 < 1; cap_block_n50_330 = cap_block_n50_330 + 1) {
            _ckks_gen_tmp_5422_509 = input_block_n49_325[cap_block_n50_330];
            Pt_from_msg_ofst(&_pgen_tmp_337_895, 63/* cst_278 */, (((((mesh_x_n19_326 * 4) + mesh_y_n19_321) * 128) + (cap_block_n50_330 + (num_grid_n50_328 * 1)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_338_896, &_ckks_gen_tmp_5422_509, &_pgen_tmp_337_895);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n50_329, &result_grid_n50_329, &_pgen_tmp_338_896);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n50_329._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_338_896._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_5422_509._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_337_895._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_338_896._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_5422_509._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_337_895._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n50_329._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n50_329._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_338_896._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n50_329._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n50_329._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_338_896._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_340_898, &result_grid_n50_329);
          Rescale(&_pgen_tmp_340_898._c0_poly, &result_grid_n50_329._c0_poly);
          Rescale(&_pgen_tmp_340_898._c1_poly, &result_grid_n50_329._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_341_899, 64/* cst_283 */, (num_grid_n50_328) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_339_897, &_pgen_tmp_340_898, &_pgen_tmp_341_899);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_339_897._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_339_897._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_340_898._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_341_899._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_339_897._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_340_898._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_341_899._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435649 = Rotate(_pgen_tmp_339_897, -25088 + (num_grid_n50_328 * 196));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_343_901, &result_grid_n50_329);
          Rescale(&_pgen_tmp_343_901._c0_poly, &result_grid_n50_329._c0_poly);
          Rescale(&_pgen_tmp_343_901._c1_poly, &result_grid_n50_329._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_344_902, 65/* cst_284 */, (num_grid_n50_328) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_342_900, &_pgen_tmp_343_901, &_pgen_tmp_344_902);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_342_900._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_342_900._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_343_901._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_344_902._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_342_900._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_343_901._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_344_902._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435650 = Rotate(_pgen_tmp_342_900, num_grid_n50_328 * 196);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_345_903, &_preg_268435649, &_preg_268435650);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n50_327, &result_n50_327, &_pgen_tmp_345_903);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n50_327._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_345_903._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435649._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435650._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_345_903._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435649._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435650._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n50_327._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n50_327._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_345_903._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n50_327._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n50_327._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_345_903._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435649._c1_poly);
          Free_poly_data(&_preg_268435649._c0_poly);
          Free_poly_data(&_preg_268435650._c1_poly);
          Free_poly_data(&_preg_268435650._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_346_904, 66 /* cst_281 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n50_327, &result_n50_327, &_pgen_tmp_346_904);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n50_327._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n50_327._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n50_327._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_346_904._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n50_327._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n50_327._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_348_906 = VS_out_conv19_319[((mesh_x_n19_326 * 1) + mesh_z_n19_322)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_347_905, &_pgen_tmp_348_906, &result_n50_327);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_347_905._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_347_905._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_348_906._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n50_327._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_347_905._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_348_906._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n50_327._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv19_319[((mesh_x_n19_326 * 1) + mesh_z_n19_322)], &_pgen_tmp_347_905);
      }
    }
  }
  Free_ciph_poly(VS_out_relu18_316, 4);
  Free_poly_data(&_preg_268435528._c1_poly);
  Free_poly_data(&_preg_268435528._c0_poly);
  Free_poly_data(&input_dup_n49_323._c1_poly);
  Free_poly_data(&input_dup_n49_323._c0_poly);
  Free_ciph_poly(input_block_n49_325, 1);
  Free_poly_data(&_pgen_tmp_337_895._poly);
  Free_poly_data(&_pgen_tmp_338_896._c1_poly);
  Free_poly_data(&_pgen_tmp_338_896._c0_poly);
  Free_poly_data(&_pgen_tmp_341_899._poly);
  Free_poly_data(&_pgen_tmp_340_898._c1_poly);
  Free_poly_data(&_pgen_tmp_340_898._c0_poly);
  Free_poly_data(&_pgen_tmp_339_897._c1_poly);
  Free_poly_data(&_pgen_tmp_339_897._c0_poly);
  Free_poly_data(&result_grid_n50_329._c1_poly);
  Free_poly_data(&result_grid_n50_329._c0_poly);
  Free_poly_data(&_pgen_tmp_344_902._poly);
  Free_poly_data(&_pgen_tmp_343_901._c1_poly);
  Free_poly_data(&_pgen_tmp_343_901._c0_poly);
  Free_poly_data(&_pgen_tmp_342_900._c1_poly);
  Free_poly_data(&_pgen_tmp_342_900._c0_poly);
  Free_poly_data(&_pgen_tmp_345_903._c1_poly);
  Free_poly_data(&_pgen_tmp_345_903._c0_poly);
  Free_poly_data(&_pgen_tmp_346_904._poly);
  Free_poly_data(&result_n50_327._c1_poly);
  Free_poly_data(&result_n50_327._c0_poly);
  Free_poly_data(&_pgen_tmp_347_905._c1_poly);
  Free_poly_data(&_pgen_tmp_347_905._c0_poly);
  for (rescale_iv_544 = 0; rescale_iv_544 < 4; rescale_iv_544 = rescale_iv_544 + 1) {
    _pgen_tmp_349_907 = VS_out_conv19_319[rescale_iv_544];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_350_908, &_pgen_tmp_349_907);
    Rescale(&_pgen_tmp_350_908._c0_poly, &_pgen_tmp_349_907._c0_poly);
    Rescale(&_pgen_tmp_350_908._c1_poly, &_pgen_tmp_349_907._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv19_319[rescale_iv_544], &_pgen_tmp_350_908);
  }
  Free_poly_data(&_pgen_tmp_350_908._c1_poly);
  Free_poly_data(&_pgen_tmp_350_908._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 74
  // Relu_37
  // pragma: 65536, 1033, 75
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu19_331, 0, sizeof(VS_out_relu19_331));
  for (mesh_y_n19_332 = 0; mesh_y_n19_332 < 4; mesh_y_n19_332 = mesh_y_n19_332 + 1) {
    for (mesh_z_n19_333 = 0; mesh_z_n19_333 < 1; mesh_z_n19_333 = mesh_z_n19_333 + 1) {
      _pgen_tmp_351_909 = VS_out_conv19_319[((mesh_y_n19_332 * 1) + mesh_z_n19_333)];
      Bootstrap(&_preg_268435529, &_pgen_tmp_351_909, 14);
      Encode_float(&_pgen_tmp_352_910, &_cst_406, 1, 1, Level(&_preg_268435529));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435531, &_preg_268435529, &_pgen_tmp_352_910);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435531._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435531._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435529._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_352_910._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435531._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435529._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_352_910._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_353_911, &_preg_268435531);
      Rescale(&_pgen_tmp_353_911._c0_poly, &_preg_268435531._c0_poly);
      Rescale(&_pgen_tmp_353_911._c1_poly, &_preg_268435531._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435530 = App_relu(_preg_268435529, _pgen_tmp_353_911, 25088);
      _pgen_tmp_355_913 = VS_out_relu19_331[((mesh_y_n19_332 * 1) + mesh_z_n19_333)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_354_912, &_pgen_tmp_355_913, &_preg_268435530);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_354_912._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_354_912._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_355_913._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435530._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_354_912._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_355_913._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435530._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu19_331[((mesh_y_n19_332 * 1) + mesh_z_n19_333)], &_pgen_tmp_354_912);
    }
  }
  Free_ciph_poly(VS_out_conv19_319, 4);
  Free_poly_data(&_pgen_tmp_352_910._poly);
  Free_poly_data(&_preg_268435531._c1_poly);
  Free_poly_data(&_preg_268435531._c0_poly);
  Free_poly_data(&_pgen_tmp_353_911._c1_poly);
  Free_poly_data(&_pgen_tmp_353_911._c0_poly);
  Free_poly_data(&_preg_268435529._c1_poly);
  Free_poly_data(&_preg_268435529._c0_poly);
  Free_poly_data(&_preg_268435530._c1_poly);
  Free_poly_data(&_preg_268435530._c0_poly);
  Free_poly_data(&_pgen_tmp_354_912._c1_poly);
  Free_poly_data(&_pgen_tmp_354_912._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 75
  // Conv_38
  // pragma: 65536, 1027, 76
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv20_334, 0, sizeof(VS_out_conv20_334));
  memset(&VS_out_conv_halo20_335, 0, sizeof(VS_out_conv_halo20_335));
  Free_ciph_poly(VS_out_conv_halo20_335, 4);
  for (mesh_y_n20_336 = 0; mesh_y_n20_336 < 1; mesh_y_n20_336 = mesh_y_n20_336 + 1) {
    for (mesh_z_n20_337 = 0; mesh_z_n20_337 < 1; mesh_z_n20_337 = mesh_z_n20_337 + 1) {
      for (mesh_x_n20_338 = 0; mesh_x_n20_338 < 4; mesh_x_n20_338 = mesh_x_n20_338 + 1) {
        Copy_ciph(&_preg_268435532, &VS_out_relu19_331[((mesh_x_n20_338 * 1) + mesh_z_n20_337)]);
        // BlockingRot replicate=1
        Copy_ciph(&input_dup_n50_339, &_preg_268435532);
        // BlockingRot HRot=bs=9
        for (bs_input_n50_340 = 0; bs_input_n50_340 < 9; bs_input_n50_340 = bs_input_n50_340 + 1) {
          _preg_268435651 = Rotate(input_dup_n50_339, _cst_289[bs_input_n50_340]);
          Copy_ciph(&input_block_n50_341[bs_input_n50_340], &_preg_268435651);
          Free_poly_data(&_preg_268435651._c1_poly);
          Free_poly_data(&_preg_268435651._c0_poly);
        }
        Zero_ciph(&result_n51_342);
        for (num_grid_n51_343 = 0; num_grid_n51_343 < 1; num_grid_n51_343 = num_grid_n51_343 + 1) {
          Zero_ciph(&result_grid_n51_344);
          for (cap_block_n51_345 = 0; cap_block_n51_345 < 9; cap_block_n51_345 = cap_block_n51_345 + 1) {
            _ckks_gen_tmp_5687_510 = input_block_n50_341[cap_block_n51_345];
            Pt_from_msg_ofst(&_pgen_tmp_356_914, 67/* cst_285 */, (((((mesh_x_n20_338 * 1) + mesh_y_n20_336) * 9) + (cap_block_n51_345 + (num_grid_n51_343 * 9)))) * (25088), 25088, 1, 2);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_357_915, &_ckks_gen_tmp_5687_510, &_pgen_tmp_356_914);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n51_344, &result_grid_n51_344, &_pgen_tmp_357_915);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n51_344._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_357_915._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_5687_510._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_356_914._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_357_915._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_5687_510._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_356_914._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n51_344._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n51_344._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_357_915._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n51_344._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n51_344._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_357_915._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          _preg_268435652 = Rotate(result_grid_n51_344, num_grid_n51_343 * 196);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n51_342, &result_n51_342, &_preg_268435652);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n51_342._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&result_n51_342._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n51_342._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435652._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n51_342._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n51_342._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435652._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435652._c1_poly);
          Free_poly_data(&_preg_268435652._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_358_916, 68 /* cst_288 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n51_342, &result_n51_342, &_pgen_tmp_358_916);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n51_342._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n51_342._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n51_342._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_358_916._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n51_342._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n51_342._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_360_918 = VS_out_conv20_334[((mesh_x_n20_338 * 1) + mesh_z_n20_337)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_359_917, &_pgen_tmp_360_918, &result_n51_342);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_359_917._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_359_917._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_360_918._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n51_342._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_359_917._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_360_918._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n51_342._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv20_334[((mesh_x_n20_338 * 1) + mesh_z_n20_337)], &_pgen_tmp_359_917);
      }
    }
  }
  Free_ciph_poly(VS_out_relu19_331, 4);
  Free_poly_data(&_preg_268435532._c1_poly);
  Free_poly_data(&_preg_268435532._c0_poly);
  Free_poly_data(&input_dup_n50_339._c1_poly);
  Free_poly_data(&input_dup_n50_339._c0_poly);
  Free_ciph_poly(input_block_n50_341, 9);
  Free_poly_data(&_pgen_tmp_356_914._poly);
  Free_poly_data(&_pgen_tmp_357_915._c1_poly);
  Free_poly_data(&_pgen_tmp_357_915._c0_poly);
  Free_poly_data(&result_grid_n51_344._c1_poly);
  Free_poly_data(&result_grid_n51_344._c0_poly);
  Free_poly_data(&_pgen_tmp_358_916._poly);
  Free_poly_data(&result_n51_342._c1_poly);
  Free_poly_data(&result_n51_342._c0_poly);
  Free_poly_data(&_pgen_tmp_359_917._c1_poly);
  Free_poly_data(&_pgen_tmp_359_917._c0_poly);
  for (rescale_iv_545 = 0; rescale_iv_545 < 4; rescale_iv_545 = rescale_iv_545 + 1) {
    _pgen_tmp_361_919 = VS_out_conv20_334[rescale_iv_545];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_362_920, &_pgen_tmp_361_919);
    Rescale(&_pgen_tmp_362_920._c0_poly, &_pgen_tmp_361_919._c0_poly);
    Rescale(&_pgen_tmp_362_920._c1_poly, &_pgen_tmp_361_919._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv20_334[rescale_iv_545], &_pgen_tmp_362_920);
  }
  Free_poly_data(&_pgen_tmp_362_920._c1_poly);
  Free_poly_data(&_pgen_tmp_362_920._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 76
  // Relu_39
  // pragma: 65536, 1033, 77
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu20_346, 0, sizeof(VS_out_relu20_346));
  for (mesh_y_n20_347 = 0; mesh_y_n20_347 < 4; mesh_y_n20_347 = mesh_y_n20_347 + 1) {
    for (mesh_z_n20_348 = 0; mesh_z_n20_348 < 1; mesh_z_n20_348 = mesh_z_n20_348 + 1) {
      _pgen_tmp_363_921 = VS_out_conv20_334[((mesh_y_n20_347 * 1) + mesh_z_n20_348)];
      Bootstrap(&_preg_268435533, &_pgen_tmp_363_921, 15);
      Encode_float(&_pgen_tmp_364_922, &_cst_407, 1, 1, Level(&_preg_268435533));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435535, &_preg_268435533, &_pgen_tmp_364_922);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435535._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435535._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435533._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_364_922._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435535._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435533._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_364_922._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_365_923, &_preg_268435535);
      Rescale(&_pgen_tmp_365_923._c0_poly, &_preg_268435535._c0_poly);
      Rescale(&_pgen_tmp_365_923._c1_poly, &_preg_268435535._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435534 = App_relu(_preg_268435533, _pgen_tmp_365_923, 25088);
      _pgen_tmp_367_925 = VS_out_relu20_346[((mesh_y_n20_347 * 1) + mesh_z_n20_348)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_366_924, &_pgen_tmp_367_925, &_preg_268435534);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_366_924._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_366_924._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_367_925._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435534._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_366_924._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_367_925._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435534._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu20_346[((mesh_y_n20_347 * 1) + mesh_z_n20_348)], &_pgen_tmp_366_924);
    }
  }
  Free_ciph_poly(VS_out_conv20_334, 4);
  Free_poly_data(&_pgen_tmp_364_922._poly);
  Free_poly_data(&_preg_268435535._c1_poly);
  Free_poly_data(&_preg_268435535._c0_poly);
  Free_poly_data(&_pgen_tmp_365_923._c1_poly);
  Free_poly_data(&_pgen_tmp_365_923._c0_poly);
  Free_poly_data(&_preg_268435533._c1_poly);
  Free_poly_data(&_preg_268435533._c0_poly);
  Free_poly_data(&_preg_268435534._c1_poly);
  Free_poly_data(&_preg_268435534._c0_poly);
  Free_poly_data(&_pgen_tmp_366_924._c1_poly);
  Free_poly_data(&_pgen_tmp_366_924._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 77
  // Conv_40
  // pragma: 65536, 1027, 78
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv21_349, 0, sizeof(VS_out_conv21_349));
  memset(&VS_out_conv_halo21_350, 0, sizeof(VS_out_conv_halo21_350));
  Free_ciph_poly(VS_out_conv_halo21_350, 4);
  for (mesh_y_n21_351 = 0; mesh_y_n21_351 < 4; mesh_y_n21_351 = mesh_y_n21_351 + 1) {
    for (mesh_z_n21_352 = 0; mesh_z_n21_352 < 1; mesh_z_n21_352 = mesh_z_n21_352 + 1) {
      Copy_ciph(&_preg_268435536, &VS_out_relu20_346[((mesh_y_n21_351 * 1) + mesh_z_n21_352)]);
      Copy_ciph(&input_dup_n51_353, &_preg_268435536);
      for (bs_input_n51_354 = 0; bs_input_n51_354 < 1; bs_input_n51_354 = bs_input_n51_354 + 1) {
        _preg_268435653 = Rotate(input_dup_n51_353, _cst_294[bs_input_n51_354]);
        Copy_ciph(&input_block_n51_355[bs_input_n51_354], &_preg_268435653);
        Free_poly_data(&_preg_268435653._c1_poly);
        Free_poly_data(&_preg_268435653._c0_poly);
      }
      for (mesh_x_n21_356 = 0; mesh_x_n21_356 < 4; mesh_x_n21_356 = mesh_x_n21_356 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n52_357);
        for (num_grid_n52_358 = 0; num_grid_n52_358 < 128; num_grid_n52_358 = num_grid_n52_358 + 1) {
          Zero_ciph(&result_grid_n52_359);
          for (cap_block_n52_360 = 0; cap_block_n52_360 < 1; cap_block_n52_360 = cap_block_n52_360 + 1) {
            _ckks_gen_tmp_5922_511 = input_block_n51_355[cap_block_n52_360];
            Pt_from_msg_ofst(&_pgen_tmp_368_926, 69/* cst_290 */, (((((mesh_x_n21_356 * 4) + mesh_y_n21_351) * 128) + (cap_block_n52_360 + (num_grid_n52_358 * 1)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_369_927, &_ckks_gen_tmp_5922_511, &_pgen_tmp_368_926);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n52_359, &result_grid_n52_359, &_pgen_tmp_369_927);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n52_359._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_369_927._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_5922_511._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_368_926._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_369_927._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_5922_511._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_368_926._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n52_359._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n52_359._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_369_927._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n52_359._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n52_359._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_369_927._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_371_929, &result_grid_n52_359);
          Rescale(&_pgen_tmp_371_929._c0_poly, &result_grid_n52_359._c0_poly);
          Rescale(&_pgen_tmp_371_929._c1_poly, &result_grid_n52_359._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_372_930, 70/* cst_295 */, (num_grid_n52_358) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_370_928, &_pgen_tmp_371_929, &_pgen_tmp_372_930);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_370_928._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_370_928._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_371_929._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_372_930._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_370_928._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_371_929._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_372_930._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435654 = Rotate(_pgen_tmp_370_928, -25088 + (num_grid_n52_358 * 196));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_374_932, &result_grid_n52_359);
          Rescale(&_pgen_tmp_374_932._c0_poly, &result_grid_n52_359._c0_poly);
          Rescale(&_pgen_tmp_374_932._c1_poly, &result_grid_n52_359._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_375_933, 71/* cst_296 */, (num_grid_n52_358) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_373_931, &_pgen_tmp_374_932, &_pgen_tmp_375_933);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_373_931._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_373_931._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_374_932._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_375_933._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_373_931._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_374_932._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_375_933._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435655 = Rotate(_pgen_tmp_373_931, num_grid_n52_358 * 196);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_376_934, &_preg_268435654, &_preg_268435655);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n52_357, &result_n52_357, &_pgen_tmp_376_934);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n52_357._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_376_934._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435654._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435655._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_376_934._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435654._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435655._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n52_357._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n52_357._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_376_934._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n52_357._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n52_357._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_376_934._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435654._c1_poly);
          Free_poly_data(&_preg_268435654._c0_poly);
          Free_poly_data(&_preg_268435655._c1_poly);
          Free_poly_data(&_preg_268435655._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_377_935, 72 /* cst_293 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n52_357, &result_n52_357, &_pgen_tmp_377_935);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n52_357._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n52_357._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n52_357._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_377_935._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n52_357._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n52_357._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_379_937 = VS_out_conv21_349[((mesh_x_n21_356 * 1) + mesh_z_n21_352)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_378_936, &_pgen_tmp_379_937, &result_n52_357);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_378_936._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_378_936._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_379_937._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n52_357._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_378_936._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_379_937._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n52_357._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv21_349[((mesh_x_n21_356 * 1) + mesh_z_n21_352)], &_pgen_tmp_378_936);
      }
    }
  }
  Free_ciph_poly(VS_out_relu20_346, 4);
  Free_poly_data(&_preg_268435536._c1_poly);
  Free_poly_data(&_preg_268435536._c0_poly);
  Free_poly_data(&input_dup_n51_353._c1_poly);
  Free_poly_data(&input_dup_n51_353._c0_poly);
  Free_ciph_poly(input_block_n51_355, 1);
  Free_poly_data(&_pgen_tmp_368_926._poly);
  Free_poly_data(&_pgen_tmp_369_927._c1_poly);
  Free_poly_data(&_pgen_tmp_369_927._c0_poly);
  Free_poly_data(&_pgen_tmp_372_930._poly);
  Free_poly_data(&_pgen_tmp_371_929._c1_poly);
  Free_poly_data(&_pgen_tmp_371_929._c0_poly);
  Free_poly_data(&_pgen_tmp_370_928._c1_poly);
  Free_poly_data(&_pgen_tmp_370_928._c0_poly);
  Free_poly_data(&result_grid_n52_359._c1_poly);
  Free_poly_data(&result_grid_n52_359._c0_poly);
  Free_poly_data(&_pgen_tmp_375_933._poly);
  Free_poly_data(&_pgen_tmp_374_932._c1_poly);
  Free_poly_data(&_pgen_tmp_374_932._c0_poly);
  Free_poly_data(&_pgen_tmp_373_931._c1_poly);
  Free_poly_data(&_pgen_tmp_373_931._c0_poly);
  Free_poly_data(&_pgen_tmp_376_934._c1_poly);
  Free_poly_data(&_pgen_tmp_376_934._c0_poly);
  Free_poly_data(&_pgen_tmp_377_935._poly);
  Free_poly_data(&result_n52_357._c1_poly);
  Free_poly_data(&result_n52_357._c0_poly);
  Free_poly_data(&_pgen_tmp_378_936._c1_poly);
  Free_poly_data(&_pgen_tmp_378_936._c0_poly);
  for (rescale_iv_546 = 0; rescale_iv_546 < 4; rescale_iv_546 = rescale_iv_546 + 1) {
    _pgen_tmp_380_938 = VS_out_conv21_349[rescale_iv_546];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_381_939, &_pgen_tmp_380_938);
    Rescale(&_pgen_tmp_381_939._c0_poly, &_pgen_tmp_380_938._c0_poly);
    Rescale(&_pgen_tmp_381_939._c1_poly, &_pgen_tmp_380_938._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv21_349[rescale_iv_546], &_pgen_tmp_381_939);
  }
  Free_poly_data(&_pgen_tmp_381_939._c1_poly);
  Free_poly_data(&_pgen_tmp_381_939._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 78
  // Relu_41
  // pragma: 65536, 1033, 79
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu21_361, 0, sizeof(VS_out_relu21_361));
  for (mesh_y_n21_362 = 0; mesh_y_n21_362 < 4; mesh_y_n21_362 = mesh_y_n21_362 + 1) {
    for (mesh_z_n21_363 = 0; mesh_z_n21_363 < 1; mesh_z_n21_363 = mesh_z_n21_363 + 1) {
      _pgen_tmp_382_940 = VS_out_conv21_349[((mesh_y_n21_362 * 1) + mesh_z_n21_363)];
      Bootstrap(&_preg_268435537, &_pgen_tmp_382_940, 14);
      Encode_float(&_pgen_tmp_383_941, &_cst_408, 1, 1, Level(&_preg_268435537));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435539, &_preg_268435537, &_pgen_tmp_383_941);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435539._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435539._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435537._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_383_941._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435539._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435537._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_383_941._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_384_942, &_preg_268435539);
      Rescale(&_pgen_tmp_384_942._c0_poly, &_preg_268435539._c0_poly);
      Rescale(&_pgen_tmp_384_942._c1_poly, &_preg_268435539._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435538 = App_relu(_preg_268435537, _pgen_tmp_384_942, 25088);
      _pgen_tmp_386_944 = VS_out_relu21_361[((mesh_y_n21_362 * 1) + mesh_z_n21_363)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_385_943, &_pgen_tmp_386_944, &_preg_268435538);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_385_943._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_385_943._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_386_944._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435538._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_385_943._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_386_944._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435538._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu21_361[((mesh_y_n21_362 * 1) + mesh_z_n21_363)], &_pgen_tmp_385_943);
    }
  }
  Free_ciph_poly(VS_out_conv21_349, 4);
  Free_poly_data(&_pgen_tmp_383_941._poly);
  Free_poly_data(&_preg_268435539._c1_poly);
  Free_poly_data(&_preg_268435539._c0_poly);
  Free_poly_data(&_pgen_tmp_384_942._c1_poly);
  Free_poly_data(&_pgen_tmp_384_942._c0_poly);
  Free_poly_data(&_preg_268435537._c1_poly);
  Free_poly_data(&_preg_268435537._c0_poly);
  Free_poly_data(&_preg_268435538._c1_poly);
  Free_poly_data(&_preg_268435538._c0_poly);
  Free_poly_data(&_pgen_tmp_385_943._c1_poly);
  Free_poly_data(&_pgen_tmp_385_943._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 79
  // Conv_42
  // pragma: 65536, 1027, 80
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv22_364, 0, sizeof(VS_out_conv22_364));
  memset(&VS_out_conv_halo22_365, 0, sizeof(VS_out_conv_halo22_365));
  Free_ciph_poly(VS_out_conv_halo22_365, 4);
  for (mesh_y_n22_366 = 0; mesh_y_n22_366 < 1; mesh_y_n22_366 = mesh_y_n22_366 + 1) {
    for (mesh_z_n22_367 = 0; mesh_z_n22_367 < 1; mesh_z_n22_367 = mesh_z_n22_367 + 1) {
      for (mesh_x_n22_368 = 0; mesh_x_n22_368 < 4; mesh_x_n22_368 = mesh_x_n22_368 + 1) {
        Copy_ciph(&_preg_268435540, &VS_out_relu21_361[((mesh_x_n22_368 * 1) + mesh_z_n22_367)]);
        // BlockingRot replicate=1
        Copy_ciph(&input_dup_n52_369, &_preg_268435540);
        // BlockingRot HRot=bs=9
        for (bs_input_n52_370 = 0; bs_input_n52_370 < 9; bs_input_n52_370 = bs_input_n52_370 + 1) {
          _preg_268435656 = Rotate(input_dup_n52_369, _cst_301[bs_input_n52_370]);
          Copy_ciph(&input_block_n52_371[bs_input_n52_370], &_preg_268435656);
          Free_poly_data(&_preg_268435656._c1_poly);
          Free_poly_data(&_preg_268435656._c0_poly);
        }
        Zero_ciph(&result_n53_372);
        for (num_grid_n53_373 = 0; num_grid_n53_373 < 1; num_grid_n53_373 = num_grid_n53_373 + 1) {
          Zero_ciph(&result_grid_n53_374);
          for (cap_block_n53_375 = 0; cap_block_n53_375 < 9; cap_block_n53_375 = cap_block_n53_375 + 1) {
            _ckks_gen_tmp_6187_512 = input_block_n52_371[cap_block_n53_375];
            Pt_from_msg_ofst(&_pgen_tmp_387_945, 73/* cst_297 */, (((((mesh_x_n22_368 * 1) + mesh_y_n22_366) * 9) + (cap_block_n53_375 + (num_grid_n53_373 * 9)))) * (25088), 25088, 1, 2);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_388_946, &_ckks_gen_tmp_6187_512, &_pgen_tmp_387_945);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n53_374, &result_grid_n53_374, &_pgen_tmp_388_946);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n53_374._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_388_946._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_6187_512._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_387_945._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_388_946._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_6187_512._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_387_945._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n53_374._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n53_374._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_388_946._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n53_374._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n53_374._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_388_946._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          _preg_268435657 = Rotate(result_grid_n53_374, num_grid_n53_373 * 196);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n53_372, &result_n53_372, &_preg_268435657);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n53_372._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&result_n53_372._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n53_372._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435657._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n53_372._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n53_372._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435657._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435657._c1_poly);
          Free_poly_data(&_preg_268435657._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_389_947, 74 /* cst_300 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n53_372, &result_n53_372, &_pgen_tmp_389_947);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n53_372._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n53_372._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n53_372._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_389_947._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n53_372._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n53_372._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_391_949 = VS_out_conv22_364[((mesh_x_n22_368 * 1) + mesh_z_n22_367)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_390_948, &_pgen_tmp_391_949, &result_n53_372);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_390_948._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_390_948._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_391_949._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n53_372._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_390_948._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_391_949._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n53_372._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv22_364[((mesh_x_n22_368 * 1) + mesh_z_n22_367)], &_pgen_tmp_390_948);
      }
    }
  }
  Free_ciph_poly(VS_out_relu21_361, 4);
  Free_poly_data(&_preg_268435540._c1_poly);
  Free_poly_data(&_preg_268435540._c0_poly);
  Free_poly_data(&input_dup_n52_369._c1_poly);
  Free_poly_data(&input_dup_n52_369._c0_poly);
  Free_ciph_poly(input_block_n52_371, 9);
  Free_poly_data(&_pgen_tmp_387_945._poly);
  Free_poly_data(&_pgen_tmp_388_946._c1_poly);
  Free_poly_data(&_pgen_tmp_388_946._c0_poly);
  Free_poly_data(&result_grid_n53_374._c1_poly);
  Free_poly_data(&result_grid_n53_374._c0_poly);
  Free_poly_data(&_pgen_tmp_389_947._poly);
  Free_poly_data(&result_n53_372._c1_poly);
  Free_poly_data(&result_n53_372._c0_poly);
  Free_poly_data(&_pgen_tmp_390_948._c1_poly);
  Free_poly_data(&_pgen_tmp_390_948._c0_poly);
  for (rescale_iv_547 = 0; rescale_iv_547 < 4; rescale_iv_547 = rescale_iv_547 + 1) {
    _pgen_tmp_392_950 = VS_out_conv22_364[rescale_iv_547];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_393_951, &_pgen_tmp_392_950);
    Rescale(&_pgen_tmp_393_951._c0_poly, &_pgen_tmp_392_950._c0_poly);
    Rescale(&_pgen_tmp_393_951._c1_poly, &_pgen_tmp_392_950._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv22_364[rescale_iv_547], &_pgen_tmp_393_951);
  }
  Free_poly_data(&_pgen_tmp_393_951._c1_poly);
  Free_poly_data(&_pgen_tmp_393_951._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 80
  // Relu_43
  // pragma: 65536, 1033, 81
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu22_376, 0, sizeof(VS_out_relu22_376));
  for (mesh_y_n22_377 = 0; mesh_y_n22_377 < 4; mesh_y_n22_377 = mesh_y_n22_377 + 1) {
    for (mesh_z_n22_378 = 0; mesh_z_n22_378 < 1; mesh_z_n22_378 = mesh_z_n22_378 + 1) {
      _pgen_tmp_394_952 = VS_out_conv22_364[((mesh_y_n22_377 * 1) + mesh_z_n22_378)];
      Bootstrap(&_preg_268435541, &_pgen_tmp_394_952, 15);
      Encode_float(&_pgen_tmp_395_953, &_cst_409, 1, 1, Level(&_preg_268435541));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435543, &_preg_268435541, &_pgen_tmp_395_953);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435543._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435543._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435541._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_395_953._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435543._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435541._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_395_953._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_396_954, &_preg_268435543);
      Rescale(&_pgen_tmp_396_954._c0_poly, &_preg_268435543._c0_poly);
      Rescale(&_pgen_tmp_396_954._c1_poly, &_preg_268435543._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435542 = App_relu(_preg_268435541, _pgen_tmp_396_954, 25088);
      _pgen_tmp_398_956 = VS_out_relu22_376[((mesh_y_n22_377 * 1) + mesh_z_n22_378)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_397_955, &_pgen_tmp_398_956, &_preg_268435542);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_397_955._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_397_955._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_398_956._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435542._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_397_955._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_398_956._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435542._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu22_376[((mesh_y_n22_377 * 1) + mesh_z_n22_378)], &_pgen_tmp_397_955);
    }
  }
  Free_ciph_poly(VS_out_conv22_364, 4);
  Free_poly_data(&_pgen_tmp_395_953._poly);
  Free_poly_data(&_preg_268435543._c1_poly);
  Free_poly_data(&_preg_268435543._c0_poly);
  Free_poly_data(&_pgen_tmp_396_954._c1_poly);
  Free_poly_data(&_pgen_tmp_396_954._c0_poly);
  Free_poly_data(&_preg_268435541._c1_poly);
  Free_poly_data(&_preg_268435541._c0_poly);
  Free_poly_data(&_preg_268435542._c1_poly);
  Free_poly_data(&_preg_268435542._c0_poly);
  Free_poly_data(&_pgen_tmp_397_955._c1_poly);
  Free_poly_data(&_pgen_tmp_397_955._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 81
  // Conv_44
  // pragma: 65536, 1027, 82
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv23_379, 0, sizeof(VS_out_conv23_379));
  memset(&VS_out_conv_halo23_380, 0, sizeof(VS_out_conv_halo23_380));
  Free_ciph_poly(VS_out_conv_halo23_380, 4);
  for (mesh_y_n23_381 = 0; mesh_y_n23_381 < 4; mesh_y_n23_381 = mesh_y_n23_381 + 1) {
    for (mesh_z_n23_382 = 0; mesh_z_n23_382 < 1; mesh_z_n23_382 = mesh_z_n23_382 + 1) {
      Copy_ciph(&_preg_268435544, &VS_out_relu22_376[((mesh_y_n23_381 * 1) + mesh_z_n23_382)]);
      Copy_ciph(&input_dup_n53_383, &_preg_268435544);
      for (bs_input_n53_384 = 0; bs_input_n53_384 < 1; bs_input_n53_384 = bs_input_n53_384 + 1) {
        _preg_268435658 = Rotate(input_dup_n53_383, _cst_306[bs_input_n53_384]);
        Copy_ciph(&input_block_n53_385[bs_input_n53_384], &_preg_268435658);
        Free_poly_data(&_preg_268435658._c1_poly);
        Free_poly_data(&_preg_268435658._c0_poly);
      }
      for (mesh_x_n23_386 = 0; mesh_x_n23_386 < 4; mesh_x_n23_386 = mesh_x_n23_386 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n54_387);
        for (num_grid_n54_388 = 0; num_grid_n54_388 < 128; num_grid_n54_388 = num_grid_n54_388 + 1) {
          Zero_ciph(&result_grid_n54_389);
          for (cap_block_n54_390 = 0; cap_block_n54_390 < 1; cap_block_n54_390 = cap_block_n54_390 + 1) {
            _ckks_gen_tmp_6422_513 = input_block_n53_385[cap_block_n54_390];
            Pt_from_msg_ofst(&_pgen_tmp_399_957, 75/* cst_302 */, (((((mesh_x_n23_386 * 4) + mesh_y_n23_381) * 128) + (cap_block_n54_390 + (num_grid_n54_388 * 1)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_400_958, &_ckks_gen_tmp_6422_513, &_pgen_tmp_399_957);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n54_389, &result_grid_n54_389, &_pgen_tmp_400_958);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n54_389._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_400_958._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_6422_513._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_399_957._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_400_958._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_6422_513._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_399_957._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n54_389._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n54_389._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_400_958._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n54_389._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n54_389._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_400_958._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_402_960, &result_grid_n54_389);
          Rescale(&_pgen_tmp_402_960._c0_poly, &result_grid_n54_389._c0_poly);
          Rescale(&_pgen_tmp_402_960._c1_poly, &result_grid_n54_389._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_403_961, 76/* cst_307 */, (num_grid_n54_388) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_401_959, &_pgen_tmp_402_960, &_pgen_tmp_403_961);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_401_959._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_401_959._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_402_960._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_403_961._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_401_959._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_402_960._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_403_961._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435659 = Rotate(_pgen_tmp_401_959, -25088 + (num_grid_n54_388 * 196));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_405_963, &result_grid_n54_389);
          Rescale(&_pgen_tmp_405_963._c0_poly, &result_grid_n54_389._c0_poly);
          Rescale(&_pgen_tmp_405_963._c1_poly, &result_grid_n54_389._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_406_964, 77/* cst_308 */, (num_grid_n54_388) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_404_962, &_pgen_tmp_405_963, &_pgen_tmp_406_964);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_404_962._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_404_962._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_405_963._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_406_964._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_404_962._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_405_963._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_406_964._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435660 = Rotate(_pgen_tmp_404_962, num_grid_n54_388 * 196);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_407_965, &_preg_268435659, &_preg_268435660);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n54_387, &result_n54_387, &_pgen_tmp_407_965);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n54_387._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_407_965._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435659._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435660._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_407_965._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435659._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435660._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n54_387._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n54_387._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_407_965._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n54_387._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n54_387._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_407_965._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435659._c1_poly);
          Free_poly_data(&_preg_268435659._c0_poly);
          Free_poly_data(&_preg_268435660._c1_poly);
          Free_poly_data(&_preg_268435660._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_408_966, 78 /* cst_305 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n54_387, &result_n54_387, &_pgen_tmp_408_966);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n54_387._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n54_387._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n54_387._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_408_966._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n54_387._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n54_387._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_410_968 = VS_out_conv23_379[((mesh_x_n23_386 * 1) + mesh_z_n23_382)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_409_967, &_pgen_tmp_410_968, &result_n54_387);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_409_967._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_409_967._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_410_968._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n54_387._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_409_967._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_410_968._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n54_387._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv23_379[((mesh_x_n23_386 * 1) + mesh_z_n23_382)], &_pgen_tmp_409_967);
      }
    }
  }
  Free_ciph_poly(VS_out_relu22_376, 4);
  Free_poly_data(&_preg_268435544._c1_poly);
  Free_poly_data(&_preg_268435544._c0_poly);
  Free_poly_data(&input_dup_n53_383._c1_poly);
  Free_poly_data(&input_dup_n53_383._c0_poly);
  Free_ciph_poly(input_block_n53_385, 1);
  Free_poly_data(&_pgen_tmp_399_957._poly);
  Free_poly_data(&_pgen_tmp_400_958._c1_poly);
  Free_poly_data(&_pgen_tmp_400_958._c0_poly);
  Free_poly_data(&_pgen_tmp_403_961._poly);
  Free_poly_data(&_pgen_tmp_402_960._c1_poly);
  Free_poly_data(&_pgen_tmp_402_960._c0_poly);
  Free_poly_data(&_pgen_tmp_401_959._c1_poly);
  Free_poly_data(&_pgen_tmp_401_959._c0_poly);
  Free_poly_data(&result_grid_n54_389._c1_poly);
  Free_poly_data(&result_grid_n54_389._c0_poly);
  Free_poly_data(&_pgen_tmp_406_964._poly);
  Free_poly_data(&_pgen_tmp_405_963._c1_poly);
  Free_poly_data(&_pgen_tmp_405_963._c0_poly);
  Free_poly_data(&_pgen_tmp_404_962._c1_poly);
  Free_poly_data(&_pgen_tmp_404_962._c0_poly);
  Free_poly_data(&_pgen_tmp_407_965._c1_poly);
  Free_poly_data(&_pgen_tmp_407_965._c0_poly);
  Free_poly_data(&_pgen_tmp_408_966._poly);
  Free_poly_data(&result_n54_387._c1_poly);
  Free_poly_data(&result_n54_387._c0_poly);
  Free_poly_data(&_pgen_tmp_409_967._c1_poly);
  Free_poly_data(&_pgen_tmp_409_967._c0_poly);
  for (rescale_iv_548 = 0; rescale_iv_548 < 4; rescale_iv_548 = rescale_iv_548 + 1) {
    _pgen_tmp_411_969 = VS_out_conv23_379[rescale_iv_548];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_412_970, &_pgen_tmp_411_969);
    Rescale(&_pgen_tmp_412_970._c0_poly, &_pgen_tmp_411_969._c0_poly);
    Rescale(&_pgen_tmp_412_970._c1_poly, &_pgen_tmp_411_969._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv23_379[rescale_iv_548], &_pgen_tmp_412_970);
  }
  Free_poly_data(&_pgen_tmp_412_970._c1_poly);
  Free_poly_data(&_pgen_tmp_412_970._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 82
  // Relu_45
  // pragma: 65536, 1033, 83
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu23_391, 0, sizeof(VS_out_relu23_391));
  for (mesh_y_n23_392 = 0; mesh_y_n23_392 < 4; mesh_y_n23_392 = mesh_y_n23_392 + 1) {
    for (mesh_z_n23_393 = 0; mesh_z_n23_393 < 1; mesh_z_n23_393 = mesh_z_n23_393 + 1) {
      _pgen_tmp_413_971 = VS_out_conv23_379[((mesh_y_n23_392 * 1) + mesh_z_n23_393)];
      Bootstrap(&_preg_268435545, &_pgen_tmp_413_971, 16);
      Encode_float(&_pgen_tmp_414_972, &_cst_410, 1, 1, Level(&_preg_268435545));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435547, &_preg_268435545, &_pgen_tmp_414_972);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435547._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435547._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435545._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_414_972._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435547._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435545._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_414_972._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_415_973, &_preg_268435547);
      Rescale(&_pgen_tmp_415_973._c0_poly, &_preg_268435547._c0_poly);
      Rescale(&_pgen_tmp_415_973._c1_poly, &_preg_268435547._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435546 = App_relu(_preg_268435545, _pgen_tmp_415_973, 25088);
      _pgen_tmp_417_975 = VS_out_relu23_391[((mesh_y_n23_392 * 1) + mesh_z_n23_393)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_416_974, &_pgen_tmp_417_975, &_preg_268435546);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_416_974._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_416_974._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_417_975._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435546._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_416_974._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_417_975._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435546._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu23_391[((mesh_y_n23_392 * 1) + mesh_z_n23_393)], &_pgen_tmp_416_974);
    }
  }
  Free_ciph_poly(VS_out_conv23_379, 4);
  Free_poly_data(&_pgen_tmp_414_972._poly);
  Free_poly_data(&_preg_268435547._c1_poly);
  Free_poly_data(&_preg_268435547._c0_poly);
  Free_poly_data(&_pgen_tmp_415_973._c1_poly);
  Free_poly_data(&_pgen_tmp_415_973._c0_poly);
  Free_poly_data(&_preg_268435545._c1_poly);
  Free_poly_data(&_preg_268435545._c0_poly);
  Free_poly_data(&_preg_268435546._c1_poly);
  Free_poly_data(&_preg_268435546._c0_poly);
  Free_poly_data(&_pgen_tmp_416_974._c1_poly);
  Free_poly_data(&_pgen_tmp_416_974._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 83
  // Conv_46
  // pragma: 65536, 1027, 84
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv24_394, 0, sizeof(VS_out_conv24_394));
  memset(&VS_out_conv_halo24_395, 0, sizeof(VS_out_conv_halo24_395));
  for (mesh_y_n24_396 = 0; mesh_y_n24_396 < 1; mesh_y_n24_396 = mesh_y_n24_396 + 1) {
    for (mesh_z_n24_397 = 0; mesh_z_n24_397 < 1; mesh_z_n24_397 = mesh_z_n24_397 + 1) {
      for (mesh_x_n24_398 = 0; mesh_x_n24_398 < 4; mesh_x_n24_398 = mesh_x_n24_398 + 1) {
        Copy_ciph(&_preg_268435548, &VS_out_relu23_391[((mesh_x_n24_398 * 1) + mesh_z_n24_397)]);
        // BlockingRot replicate=1
        Copy_ciph(&input_dup_n54_399, &_preg_268435548);
        // BlockingRot HRot=bs=9
        for (bs_input_n54_400 = 0; bs_input_n54_400 < 9; bs_input_n54_400 = bs_input_n54_400 + 1) {
          _preg_268435661 = Rotate(input_dup_n54_399, _cst_313[bs_input_n54_400]);
          Copy_ciph(&input_block_n54_401[bs_input_n54_400], &_preg_268435661);
          Free_poly_data(&_preg_268435661._c1_poly);
          Free_poly_data(&_preg_268435661._c0_poly);
        }
        Zero_ciph(&result_n55_402);
        for (num_grid_n55_403 = 0; num_grid_n55_403 < 1; num_grid_n55_403 = num_grid_n55_403 + 1) {
          Zero_ciph(&result_grid_n55_404);
          for (cap_block_n55_405 = 0; cap_block_n55_405 < 9; cap_block_n55_405 = cap_block_n55_405 + 1) {
            _ckks_gen_tmp_6687_514 = input_block_n54_401[cap_block_n55_405];
            Pt_from_msg_ofst(&_pgen_tmp_418_976, 79/* cst_309 */, (((((mesh_x_n24_398 * 1) + mesh_y_n24_396) * 9) + (cap_block_n55_405 + (num_grid_n55_403 * 9)))) * (25088), 25088, 1, 4);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_419_977, &_ckks_gen_tmp_6687_514, &_pgen_tmp_418_976);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n55_404, &result_grid_n55_404, &_pgen_tmp_419_977);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n55_404._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_419_977._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_6687_514._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_418_976._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_419_977._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_6687_514._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_418_976._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n55_404._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n55_404._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_419_977._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n55_404._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n55_404._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_419_977._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          _preg_268435662 = Rotate(result_grid_n55_404, num_grid_n55_403 * 196);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n55_402, &result_n55_402, &_preg_268435662);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n55_402._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&result_n55_402._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n55_402._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435662._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n55_402._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n55_402._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435662._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435662._c1_poly);
          Free_poly_data(&_preg_268435662._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_420_978, 80 /* cst_312 */, 25088, 2, 4);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n55_402, &result_n55_402, &_pgen_tmp_420_978);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n55_402._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n55_402._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n55_402._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_420_978._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n55_402._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n55_402._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_422_980 = VS_out_conv24_394[((mesh_x_n24_398 * 1) + mesh_z_n24_397)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_421_979, &_pgen_tmp_422_980, &result_n55_402);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_421_979._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_421_979._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_422_980._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n55_402._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_421_979._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_422_980._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n55_402._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv24_394[((mesh_x_n24_398 * 1) + mesh_z_n24_397)], &_pgen_tmp_421_979);
      }
    }
  }
  Free_ciph_poly(VS_out_relu23_391, 4);
  Free_poly_data(&_preg_268435548._c1_poly);
  Free_poly_data(&_preg_268435548._c0_poly);
  Free_poly_data(&input_dup_n54_399._c1_poly);
  Free_poly_data(&input_dup_n54_399._c0_poly);
  Free_ciph_poly(input_block_n54_401, 9);
  Free_poly_data(&_pgen_tmp_418_976._poly);
  Free_poly_data(&_pgen_tmp_419_977._c1_poly);
  Free_poly_data(&_pgen_tmp_419_977._c0_poly);
  Free_poly_data(&result_grid_n55_404._c1_poly);
  Free_poly_data(&result_grid_n55_404._c0_poly);
  Free_poly_data(&_pgen_tmp_420_978._poly);
  Free_poly_data(&result_n55_402._c1_poly);
  Free_poly_data(&result_n55_402._c0_poly);
  Free_poly_data(&_pgen_tmp_421_979._c1_poly);
  Free_poly_data(&_pgen_tmp_421_979._c0_poly);
  for (rescale_iv_549 = 0; rescale_iv_549 < 4; rescale_iv_549 = rescale_iv_549 + 1) {
    _pgen_tmp_423_981 = VS_out_conv24_394[rescale_iv_549];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_424_982, &_pgen_tmp_423_981);
    Rescale(&_pgen_tmp_424_982._c0_poly, &_pgen_tmp_423_981._c0_poly);
    Rescale(&_pgen_tmp_424_982._c1_poly, &_pgen_tmp_423_981._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv24_394[rescale_iv_549], &_pgen_tmp_424_982);
  }
  Free_poly_data(&_pgen_tmp_424_982._c1_poly);
  Free_poly_data(&_pgen_tmp_424_982._c0_poly);
  for (siv_n24_406 = 0; siv_n24_406 < 4; siv_n24_406 = siv_n24_406 + 1) {
    orig_result55_407 = VS_out_conv24_394[siv_n24_406];
    Zero_ciph(&comb_dic_result56_408);
    for (comb_dic_index_n56_409 = 0; comb_dic_index_n56_409 < 1; comb_dic_index_n56_409 = comb_dic_index_n56_409 + 1) {
      _preg_268435663 = Rotate(orig_result55_407, 1 << comb_dic_index_n56_409);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&orig_result55_407, &orig_result55_407, &_preg_268435663);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&orig_result55_407._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&orig_result55_407._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&orig_result55_407._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435663._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&orig_result55_407._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&orig_result55_407._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435663._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435663._c1_poly);
      Free_poly_data(&_preg_268435663._c0_poly);
    }
    for (comb_dic_index_out_n56_410 = 0; comb_dic_index_out_n56_410 < 7; comb_dic_index_out_n56_410 = comb_dic_index_out_n56_410 + 1) {
      for (comb_dic_index_in_n56_411 = 0; comb_dic_index_in_n56_411 < 4; comb_dic_index_in_n56_411 = comb_dic_index_in_n56_411 + 1) {
        _preg_268435664 = Rotate(orig_result55_407, (comb_dic_index_out_n56_410 * 21) + (comb_dic_index_in_n56_411 * 2));
        Copy_ciph(&_ckks_gen_tmp_6818_515, &_preg_268435664);
        Pt_from_msg_ofst(&_pgen_tmp_425_983, 81/* cst_314 */, (((comb_dic_index_out_n56_410 * 4) + comb_dic_index_in_n56_411)) * (25088), 25088, 1, 3);
        CMPLR_TM_START(17, 0);
        Init_ciph_up_scale_plain(&_pgen_tmp_426_984, &_ckks_gen_tmp_6818_515, &_pgen_tmp_425_983);
        CMPLR_TM_END(17, 0);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_dic_result56_408, &comb_dic_result56_408, &_pgen_tmp_426_984);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&comb_dic_result56_408._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modmul(Coeffs(&_pgen_tmp_426_984._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_6818_515._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_425_983._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modmul(Coeffs(&_pgen_tmp_426_984._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_6818_515._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_425_983._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&comb_dic_result56_408._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_dic_result56_408._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_426_984._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&comb_dic_result56_408._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_dic_result56_408._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_426_984._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435664._c1_poly);
        Free_poly_data(&_preg_268435664._c0_poly);
      }
    }
    Zero_ciph(&ss_result56_412);
    for (comb_cc_lf_index_n56_413 = 0; comb_cc_lf_index_n56_413 < 2; comb_cc_lf_index_n56_413 = comb_cc_lf_index_n56_413 + 1) {
      _preg_268435665 = Rotate(comb_dic_result56_408, (1 << comb_cc_lf_index_n56_413) * 147);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_dic_result56_408, &comb_dic_result56_408, &_preg_268435665);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&comb_dic_result56_408._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&comb_dic_result56_408._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_dic_result56_408._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435665._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&comb_dic_result56_408._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&comb_dic_result56_408._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435665._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435665._c1_poly);
      Free_poly_data(&_preg_268435665._c0_poly);
    }
    for (comb_cc_index_n56_414 = 0; comb_cc_index_n56_414 < 32; comb_cc_index_n56_414 = comb_cc_index_n56_414 + 1) {
      _preg_268435666 = Rotate(comb_dic_result56_408, comb_cc_index_n56_414 * 588);
      Copy_ciph(&_ckks_gen_tmp_6875_516, &_preg_268435666);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_427_985, &_ckks_gen_tmp_6875_516);
      Rescale(&_pgen_tmp_427_985._c0_poly, &_ckks_gen_tmp_6875_516._c0_poly);
      Rescale(&_pgen_tmp_427_985._c1_poly, &_ckks_gen_tmp_6875_516._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg_ofst(&_pgen_tmp_428_986, 82/* cst_315 */, (comb_cc_index_n56_414) * (25088), 25088, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_429_987, &_pgen_tmp_427_985, &_pgen_tmp_428_986);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&ss_result56_412, &ss_result56_412, &_pgen_tmp_429_987);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&ss_result56_412._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_429_987._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_427_985._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_428_986._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_429_987._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_427_985._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_428_986._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&ss_result56_412._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&ss_result56_412._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_429_987._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&ss_result56_412._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&ss_result56_412._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_429_987._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435666._c1_poly);
      Free_poly_data(&_preg_268435666._c0_poly);
    }
    Copy_ciph(&VS_out_conv_halo24_395[siv_n24_406], &ss_result56_412);
  }
  Free_ciph_poly(VS_out_conv24_394, 4);
  Free_poly_data(&_pgen_tmp_425_983._poly);
  Free_poly_data(&_ckks_gen_tmp_6818_515._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_6818_515._c0_poly);
  Free_poly_data(&_pgen_tmp_426_984._c1_poly);
  Free_poly_data(&_pgen_tmp_426_984._c0_poly);
  Free_poly_data(&comb_dic_result56_408._c1_poly);
  Free_poly_data(&comb_dic_result56_408._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_6875_516._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_6875_516._c0_poly);
  Free_poly_data(&_pgen_tmp_428_986._poly);
  Free_poly_data(&_pgen_tmp_427_985._c1_poly);
  Free_poly_data(&_pgen_tmp_427_985._c0_poly);
  Free_poly_data(&_pgen_tmp_429_987._c1_poly);
  Free_poly_data(&_pgen_tmp_429_987._c0_poly);
  Free_poly_data(&ss_result56_412._c1_poly);
  Free_poly_data(&ss_result56_412._c0_poly);
  for (rescale_iv_550 = 0; rescale_iv_550 < 4; rescale_iv_550 = rescale_iv_550 + 1) {
    _pgen_tmp_430_988 = VS_out_conv_halo24_395[rescale_iv_550];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_431_989, &_pgen_tmp_430_988);
    Rescale(&_pgen_tmp_431_989._c0_poly, &_pgen_tmp_430_988._c0_poly);
    Rescale(&_pgen_tmp_431_989._c1_poly, &_pgen_tmp_430_988._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv_halo24_395[rescale_iv_550], &_pgen_tmp_431_989);
  }
  Free_poly_data(&_pgen_tmp_431_989._c1_poly);
  Free_poly_data(&_pgen_tmp_431_989._c0_poly);
  for (reshard1_n24_415 = 0; reshard1_n24_415 < 1; reshard1_n24_415 = reshard1_n24_415 + 1) {
    _pgen_tmp_432_990 = VS_out_conv_halo24_395[reshard1_n24_415];
    _pgen_tmp_433_991 = VS_out_conv_halo24_395[(reshard1_n24_415 + 1)];
    _preg_268435667 = Rotate(_pgen_tmp_433_991, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_434_992, &_pgen_tmp_432_990, &_preg_268435667);
    CMPLR_TM_END(12, 0);
    _pgen_tmp_436_994 = VS_out_conv_halo24_395[(reshard1_n24_415 + 2)];
    _pgen_tmp_437_995 = VS_out_conv_halo24_395[(reshard1_n24_415 + 3)];
    _preg_268435668 = Rotate(_pgen_tmp_437_995, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_435_993, &_pgen_tmp_436_994, &_preg_268435668);
    _pgen_modulus_555 = Q_modulus();
    _pgen_num_q_556 = Poly_level(&_pgen_tmp_435_993._c0_poly);
    for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_435_993._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_436_994._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435668._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_435_993._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_436_994._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435668._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      _pgen_modulus_555 = _pgen_modulus_555 + 1;
    }
    CMPLR_TM_END(12, 0);
    _preg_268435669 = Rotate(_pgen_tmp_435_993, -12544);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&output_reshard24_416, &_pgen_tmp_434_992, &_preg_268435669);
    _pgen_modulus_555 = Q_modulus();
    _pgen_num_q_556 = Poly_level(&output_reshard24_416._c0_poly);
    for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_434_992._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_432_990._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435667._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_434_992._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_432_990._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435667._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modadd(Coeffs(&output_reshard24_416._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_434_992._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435669._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modadd(Coeffs(&output_reshard24_416._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_434_992._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435669._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      _pgen_modulus_555 = _pgen_modulus_555 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435667._c1_poly);
    Free_poly_data(&_preg_268435667._c0_poly);
    Free_poly_data(&_preg_268435668._c1_poly);
    Free_poly_data(&_preg_268435668._c0_poly);
    Free_poly_data(&_preg_268435669._c1_poly);
    Free_poly_data(&_preg_268435669._c0_poly);
  }
  Free_ciph_poly(VS_out_conv_halo24_395, 4);
  Free_poly_data(&_pgen_tmp_435_993._c1_poly);
  Free_poly_data(&_pgen_tmp_435_993._c0_poly);
  Free_poly_data(&_pgen_tmp_434_992._c1_poly);
  Free_poly_data(&_pgen_tmp_434_992._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 84
  // Relu_47
  // pragma: 65536, 1033, 85
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435549, &output_reshard24_416, 15);
  Free_poly_data(&output_reshard24_416._c1_poly);
  Free_poly_data(&output_reshard24_416._c0_poly);
  Encode_float(&_pgen_tmp_439_997, &_cst_411, 1, 1, Level(&_preg_268435549));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_438_996, &_preg_268435549, &_pgen_tmp_439_997);
  _pgen_modulus_555 = Q_modulus();
  _pgen_num_q_556 = Poly_level(&_pgen_tmp_438_996._c0_poly);
  for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_438_996._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435549._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_439_997._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_438_996._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435549._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_439_997._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    _pgen_modulus_555 = _pgen_modulus_555 + 1;
  }
  Free_poly_data(&_pgen_tmp_439_997._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435551, &_pgen_tmp_438_996);
  Rescale(&_preg_268435551._c0_poly, &_pgen_tmp_438_996._c0_poly);
  Rescale(&_preg_268435551._c1_poly, &_pgen_tmp_438_996._c1_poly);
  Free_poly_data(&_pgen_tmp_438_996._c1_poly);
  Free_poly_data(&_pgen_tmp_438_996._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435550 = App_relu(_preg_268435549, _preg_268435551, 25088);
  Free_poly_data(&_preg_268435551._c1_poly);
  Free_poly_data(&_preg_268435551._c0_poly);
  Free_poly_data(&_preg_268435549._c1_poly);
  Free_poly_data(&_preg_268435549._c0_poly);
  Copy_ciph(&_preg_268435552, &_preg_268435550);
  Free_poly_data(&_preg_268435550._c1_poly);
  Free_poly_data(&_preg_268435550._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 85
  // Conv_48
  // pragma: 65536, 1027, 86
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv25_417, 0, sizeof(VS_out_conv25_417));
  memset(&VS_out_conv_halo25_418, 0, sizeof(VS_out_conv_halo25_418));
  Free_ciph_poly(VS_out_conv_halo25_418, 2);
  for (mesh_y_n25_419 = 0; mesh_y_n25_419 < 1; mesh_y_n25_419 = mesh_y_n25_419 + 1) {
    for (mesh_z_n25_420 = 0; mesh_z_n25_420 < 1; mesh_z_n25_420 = mesh_z_n25_420 + 1) {
      Copy_ciph(&_preg_268435553, &_preg_268435552);
      Copy_ciph(&input_dup_n56_421, &_preg_268435553);
      for (bs_input_n56_422 = 0; bs_input_n56_422 < 1; bs_input_n56_422 = bs_input_n56_422 + 1) {
        _preg_268435670 = Rotate(input_dup_n56_421, _cst_320[bs_input_n56_422]);
        Copy_ciph(&input_block_n56_423[bs_input_n56_422], &_preg_268435670);
        Free_poly_data(&_preg_268435670._c1_poly);
        Free_poly_data(&_preg_268435670._c0_poly);
      }
      for (mesh_x_n25_424 = 0; mesh_x_n25_424 < 2; mesh_x_n25_424 = mesh_x_n25_424 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n57_425);
        for (num_grid_n57_426 = 0; num_grid_n57_426 < 512; num_grid_n57_426 = num_grid_n57_426 + 1) {
          Zero_ciph(&result_grid_n57_427);
          for (cap_block_n57_428 = 0; cap_block_n57_428 < 1; cap_block_n57_428 = cap_block_n57_428 + 1) {
            _ckks_gen_tmp_7054_517 = input_block_n56_423[cap_block_n57_428];
            Pt_from_msg_ofst(&_pgen_tmp_440_998, 83/* cst_316 */, (((((mesh_x_n25_424 * 1) + mesh_y_n25_419) * 512) + (cap_block_n57_428 + (num_grid_n57_426 * 1)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_441_999, &_ckks_gen_tmp_7054_517, &_pgen_tmp_440_998);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n57_427, &result_grid_n57_427, &_pgen_tmp_441_999);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n57_427._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_441_999._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_7054_517._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_440_998._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_441_999._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_7054_517._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_440_998._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n57_427._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n57_427._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_441_999._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n57_427._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n57_427._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_441_999._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_443_1001, &result_grid_n57_427);
          Rescale(&_pgen_tmp_443_1001._c0_poly, &result_grid_n57_427._c0_poly);
          Rescale(&_pgen_tmp_443_1001._c1_poly, &result_grid_n57_427._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_444_1002, 84/* cst_321 */, (num_grid_n57_426) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_442_1000, &_pgen_tmp_443_1001, &_pgen_tmp_444_1002);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_442_1000._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_442_1000._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_443_1001._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_444_1002._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_442_1000._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_443_1001._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_444_1002._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435671 = Rotate(_pgen_tmp_442_1000, -25088 + (num_grid_n57_426 * 49));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_446_1004, &result_grid_n57_427);
          Rescale(&_pgen_tmp_446_1004._c0_poly, &result_grid_n57_427._c0_poly);
          Rescale(&_pgen_tmp_446_1004._c1_poly, &result_grid_n57_427._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_447_1005, 85/* cst_322 */, (num_grid_n57_426) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_445_1003, &_pgen_tmp_446_1004, &_pgen_tmp_447_1005);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_445_1003._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_445_1003._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_446_1004._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_447_1005._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_445_1003._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_446_1004._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_447_1005._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435672 = Rotate(_pgen_tmp_445_1003, num_grid_n57_426 * 49);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_448_1006, &_preg_268435671, &_preg_268435672);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n57_425, &result_n57_425, &_pgen_tmp_448_1006);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n57_425._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_448_1006._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435671._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435672._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_448_1006._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435671._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435672._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n57_425._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n57_425._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_448_1006._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n57_425._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n57_425._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_448_1006._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435671._c1_poly);
          Free_poly_data(&_preg_268435671._c0_poly);
          Free_poly_data(&_preg_268435672._c1_poly);
          Free_poly_data(&_preg_268435672._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_449_1007, 86 /* cst_319 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n57_425, &result_n57_425, &_pgen_tmp_449_1007);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n57_425._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n57_425._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n57_425._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_449_1007._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n57_425._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n57_425._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_451_1009 = VS_out_conv25_417[((mesh_x_n25_424 * 1) + mesh_z_n25_420)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_450_1008, &_pgen_tmp_451_1009, &result_n57_425);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_450_1008._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_450_1008._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_451_1009._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n57_425._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_450_1008._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_451_1009._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n57_425._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv25_417[((mesh_x_n25_424 * 1) + mesh_z_n25_420)], &_pgen_tmp_450_1008);
      }
    }
  }
  Free_poly_data(&_preg_268435552._c1_poly);
  Free_poly_data(&_preg_268435552._c0_poly);
  Free_poly_data(&_preg_268435553._c1_poly);
  Free_poly_data(&_preg_268435553._c0_poly);
  Free_poly_data(&input_dup_n56_421._c1_poly);
  Free_poly_data(&input_dup_n56_421._c0_poly);
  Free_ciph_poly(input_block_n56_423, 1);
  Free_poly_data(&_pgen_tmp_440_998._poly);
  Free_poly_data(&_pgen_tmp_441_999._c1_poly);
  Free_poly_data(&_pgen_tmp_441_999._c0_poly);
  Free_poly_data(&_pgen_tmp_444_1002._poly);
  Free_poly_data(&_pgen_tmp_443_1001._c1_poly);
  Free_poly_data(&_pgen_tmp_443_1001._c0_poly);
  Free_poly_data(&_pgen_tmp_442_1000._c1_poly);
  Free_poly_data(&_pgen_tmp_442_1000._c0_poly);
  Free_poly_data(&result_grid_n57_427._c1_poly);
  Free_poly_data(&result_grid_n57_427._c0_poly);
  Free_poly_data(&_pgen_tmp_447_1005._poly);
  Free_poly_data(&_pgen_tmp_446_1004._c1_poly);
  Free_poly_data(&_pgen_tmp_446_1004._c0_poly);
  Free_poly_data(&_pgen_tmp_445_1003._c1_poly);
  Free_poly_data(&_pgen_tmp_445_1003._c0_poly);
  Free_poly_data(&_pgen_tmp_448_1006._c1_poly);
  Free_poly_data(&_pgen_tmp_448_1006._c0_poly);
  Free_poly_data(&_pgen_tmp_449_1007._poly);
  Free_poly_data(&result_n57_425._c1_poly);
  Free_poly_data(&result_n57_425._c0_poly);
  Free_poly_data(&_pgen_tmp_450_1008._c1_poly);
  Free_poly_data(&_pgen_tmp_450_1008._c0_poly);
  for (rescale_iv_551 = 0; rescale_iv_551 < 2; rescale_iv_551 = rescale_iv_551 + 1) {
    _pgen_tmp_452_1010 = VS_out_conv25_417[rescale_iv_551];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_453_1011, &_pgen_tmp_452_1010);
    Rescale(&_pgen_tmp_453_1011._c0_poly, &_pgen_tmp_452_1010._c0_poly);
    Rescale(&_pgen_tmp_453_1011._c1_poly, &_pgen_tmp_452_1010._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv25_417[rescale_iv_551], &_pgen_tmp_453_1011);
  }
  Free_poly_data(&_pgen_tmp_453_1011._c1_poly);
  Free_poly_data(&_pgen_tmp_453_1011._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 86
  // Relu_49
  // pragma: 65536, 1033, 87
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu25_429, 0, sizeof(VS_out_relu25_429));
  for (mesh_y_n25_430 = 0; mesh_y_n25_430 < 2; mesh_y_n25_430 = mesh_y_n25_430 + 1) {
    for (mesh_z_n25_431 = 0; mesh_z_n25_431 < 1; mesh_z_n25_431 = mesh_z_n25_431 + 1) {
      _pgen_tmp_454_1012 = VS_out_conv25_417[((mesh_y_n25_430 * 1) + mesh_z_n25_431)];
      Bootstrap(&_preg_268435554, &_pgen_tmp_454_1012, 14);
      Encode_float(&_pgen_tmp_455_1013, &_cst_412, 1, 1, Level(&_preg_268435554));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435556, &_preg_268435554, &_pgen_tmp_455_1013);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435556._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435556._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435554._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_455_1013._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435556._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435554._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_455_1013._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_456_1014, &_preg_268435556);
      Rescale(&_pgen_tmp_456_1014._c0_poly, &_preg_268435556._c0_poly);
      Rescale(&_pgen_tmp_456_1014._c1_poly, &_preg_268435556._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435555 = App_relu(_preg_268435554, _pgen_tmp_456_1014, 25088);
      _pgen_tmp_458_1016 = VS_out_relu25_429[((mesh_y_n25_430 * 1) + mesh_z_n25_431)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_457_1015, &_pgen_tmp_458_1016, &_preg_268435555);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_457_1015._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_457_1015._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_458_1016._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435555._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_457_1015._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_458_1016._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435555._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu25_429[((mesh_y_n25_430 * 1) + mesh_z_n25_431)], &_pgen_tmp_457_1015);
    }
  }
  Free_ciph_poly(VS_out_conv25_417, 2);
  Free_poly_data(&_pgen_tmp_455_1013._poly);
  Free_poly_data(&_preg_268435556._c1_poly);
  Free_poly_data(&_preg_268435556._c0_poly);
  Free_poly_data(&_pgen_tmp_456_1014._c1_poly);
  Free_poly_data(&_pgen_tmp_456_1014._c0_poly);
  Free_poly_data(&_preg_268435554._c1_poly);
  Free_poly_data(&_preg_268435554._c0_poly);
  Free_poly_data(&_preg_268435555._c1_poly);
  Free_poly_data(&_preg_268435555._c0_poly);
  Free_poly_data(&_pgen_tmp_457_1015._c1_poly);
  Free_poly_data(&_pgen_tmp_457_1015._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 87
  // Conv_50
  // pragma: 65536, 1027, 88
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv26_432, 0, sizeof(VS_out_conv26_432));
  memset(&VS_out_conv_halo26_433, 0, sizeof(VS_out_conv_halo26_433));
  Free_ciph_poly(VS_out_conv_halo26_433, 2);
  for (mesh_y_n26_434 = 0; mesh_y_n26_434 < 1; mesh_y_n26_434 = mesh_y_n26_434 + 1) {
    for (mesh_z_n26_435 = 0; mesh_z_n26_435 < 1; mesh_z_n26_435 = mesh_z_n26_435 + 1) {
      for (mesh_x_n26_436 = 0; mesh_x_n26_436 < 2; mesh_x_n26_436 = mesh_x_n26_436 + 1) {
        Copy_ciph(&_preg_268435557, &VS_out_relu25_429[((mesh_x_n26_436 * 1) + mesh_z_n26_435)]);
        // BlockingRot replicate=1
        Copy_ciph(&input_dup_n57_437, &_preg_268435557);
        // BlockingRot HRot=bs=9
        for (bs_input_n57_438 = 0; bs_input_n57_438 < 9; bs_input_n57_438 = bs_input_n57_438 + 1) {
          _preg_268435673 = Rotate(input_dup_n57_437, _cst_327[bs_input_n57_438]);
          Copy_ciph(&input_block_n57_439[bs_input_n57_438], &_preg_268435673);
          Free_poly_data(&_preg_268435673._c1_poly);
          Free_poly_data(&_preg_268435673._c0_poly);
        }
        Zero_ciph(&result_n58_440);
        for (num_grid_n58_441 = 0; num_grid_n58_441 < 1; num_grid_n58_441 = num_grid_n58_441 + 1) {
          Zero_ciph(&result_grid_n58_442);
          for (cap_block_n58_443 = 0; cap_block_n58_443 < 9; cap_block_n58_443 = cap_block_n58_443 + 1) {
            _ckks_gen_tmp_7319_518 = input_block_n57_439[cap_block_n58_443];
            Pt_from_msg_ofst(&_pgen_tmp_459_1017, 87/* cst_323 */, (((((mesh_x_n26_436 * 1) + mesh_y_n26_434) * 9) + (cap_block_n58_443 + (num_grid_n58_441 * 9)))) * (25088), 25088, 1, 2);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_460_1018, &_ckks_gen_tmp_7319_518, &_pgen_tmp_459_1017);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n58_442, &result_grid_n58_442, &_pgen_tmp_460_1018);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n58_442._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_460_1018._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_7319_518._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_459_1017._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_460_1018._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_7319_518._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_459_1017._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n58_442._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n58_442._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_460_1018._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n58_442._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n58_442._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_460_1018._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          _preg_268435674 = Rotate(result_grid_n58_442, num_grid_n58_441 * 49);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n58_440, &result_n58_440, &_preg_268435674);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n58_440._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&result_n58_440._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n58_440._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435674._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n58_440._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n58_440._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435674._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435674._c1_poly);
          Free_poly_data(&_preg_268435674._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_461_1019, 88 /* cst_326 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n58_440, &result_n58_440, &_pgen_tmp_461_1019);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n58_440._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n58_440._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n58_440._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_461_1019._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n58_440._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n58_440._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_463_1021 = VS_out_conv26_432[((mesh_x_n26_436 * 1) + mesh_z_n26_435)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_462_1020, &_pgen_tmp_463_1021, &result_n58_440);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_462_1020._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_462_1020._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_463_1021._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n58_440._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_462_1020._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_463_1021._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n58_440._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv26_432[((mesh_x_n26_436 * 1) + mesh_z_n26_435)], &_pgen_tmp_462_1020);
      }
    }
  }
  Free_ciph_poly(VS_out_relu25_429, 2);
  Free_poly_data(&_preg_268435557._c1_poly);
  Free_poly_data(&_preg_268435557._c0_poly);
  Free_poly_data(&input_dup_n57_437._c1_poly);
  Free_poly_data(&input_dup_n57_437._c0_poly);
  Free_ciph_poly(input_block_n57_439, 9);
  Free_poly_data(&_pgen_tmp_459_1017._poly);
  Free_poly_data(&_pgen_tmp_460_1018._c1_poly);
  Free_poly_data(&_pgen_tmp_460_1018._c0_poly);
  Free_poly_data(&result_grid_n58_442._c1_poly);
  Free_poly_data(&result_grid_n58_442._c0_poly);
  Free_poly_data(&_pgen_tmp_461_1019._poly);
  Free_poly_data(&result_n58_440._c1_poly);
  Free_poly_data(&result_n58_440._c0_poly);
  Free_poly_data(&_pgen_tmp_462_1020._c1_poly);
  Free_poly_data(&_pgen_tmp_462_1020._c0_poly);
  for (rescale_iv_552 = 0; rescale_iv_552 < 2; rescale_iv_552 = rescale_iv_552 + 1) {
    _pgen_tmp_464_1022 = VS_out_conv26_432[rescale_iv_552];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_465_1023, &_pgen_tmp_464_1022);
    Rescale(&_pgen_tmp_465_1023._c0_poly, &_pgen_tmp_464_1022._c0_poly);
    Rescale(&_pgen_tmp_465_1023._c1_poly, &_pgen_tmp_464_1022._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv26_432[rescale_iv_552], &_pgen_tmp_465_1023);
  }
  Free_poly_data(&_pgen_tmp_465_1023._c1_poly);
  Free_poly_data(&_pgen_tmp_465_1023._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 88
  // Relu_51
  // pragma: 65536, 1033, 89
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu26_444, 0, sizeof(VS_out_relu26_444));
  for (mesh_y_n26_445 = 0; mesh_y_n26_445 < 2; mesh_y_n26_445 = mesh_y_n26_445 + 1) {
    for (mesh_z_n26_446 = 0; mesh_z_n26_446 < 1; mesh_z_n26_446 = mesh_z_n26_446 + 1) {
      _pgen_tmp_466_1024 = VS_out_conv26_432[((mesh_y_n26_445 * 1) + mesh_z_n26_446)];
      Bootstrap(&_preg_268435558, &_pgen_tmp_466_1024, 15);
      Encode_float(&_pgen_tmp_467_1025, &_cst_413, 1, 1, Level(&_preg_268435558));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435560, &_preg_268435558, &_pgen_tmp_467_1025);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435560._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435560._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435558._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_467_1025._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435560._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435558._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_467_1025._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_468_1026, &_preg_268435560);
      Rescale(&_pgen_tmp_468_1026._c0_poly, &_preg_268435560._c0_poly);
      Rescale(&_pgen_tmp_468_1026._c1_poly, &_preg_268435560._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435559 = App_relu(_preg_268435558, _pgen_tmp_468_1026, 25088);
      _pgen_tmp_470_1028 = VS_out_relu26_444[((mesh_y_n26_445 * 1) + mesh_z_n26_446)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_469_1027, &_pgen_tmp_470_1028, &_preg_268435559);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_469_1027._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_469_1027._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_470_1028._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435559._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_469_1027._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_470_1028._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435559._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu26_444[((mesh_y_n26_445 * 1) + mesh_z_n26_446)], &_pgen_tmp_469_1027);
    }
  }
  Free_ciph_poly(VS_out_conv26_432, 2);
  Free_poly_data(&_pgen_tmp_467_1025._poly);
  Free_poly_data(&_preg_268435560._c1_poly);
  Free_poly_data(&_preg_268435560._c0_poly);
  Free_poly_data(&_pgen_tmp_468_1026._c1_poly);
  Free_poly_data(&_pgen_tmp_468_1026._c0_poly);
  Free_poly_data(&_preg_268435558._c1_poly);
  Free_poly_data(&_preg_268435558._c0_poly);
  Free_poly_data(&_preg_268435559._c1_poly);
  Free_poly_data(&_preg_268435559._c0_poly);
  Free_poly_data(&_pgen_tmp_469_1027._c1_poly);
  Free_poly_data(&_pgen_tmp_469_1027._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 89
  // Conv_52
  // pragma: 65536, 1027, 90
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv27_447, 0, sizeof(VS_out_conv27_447));
  memset(&VS_out_conv_halo27_448, 0, sizeof(VS_out_conv_halo27_448));
  Free_ciph_poly(VS_out_conv_halo27_448, 2);
  for (mesh_y_n27_449 = 0; mesh_y_n27_449 < 2; mesh_y_n27_449 = mesh_y_n27_449 + 1) {
    for (mesh_z_n27_450 = 0; mesh_z_n27_450 < 1; mesh_z_n27_450 = mesh_z_n27_450 + 1) {
      Copy_ciph(&_preg_268435561, &VS_out_relu26_444[((mesh_y_n27_449 * 1) + mesh_z_n27_450)]);
      Copy_ciph(&input_dup_n58_451, &_preg_268435561);
      for (bs_input_n58_452 = 0; bs_input_n58_452 < 1; bs_input_n58_452 = bs_input_n58_452 + 1) {
        _preg_268435675 = Rotate(input_dup_n58_451, _cst_332[bs_input_n58_452]);
        Copy_ciph(&input_block_n58_453[bs_input_n58_452], &_preg_268435675);
        Free_poly_data(&_preg_268435675._c1_poly);
        Free_poly_data(&_preg_268435675._c0_poly);
      }
      for (mesh_x_n27_454 = 0; mesh_x_n27_454 < 2; mesh_x_n27_454 = mesh_x_n27_454 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n59_455);
        for (num_grid_n59_456 = 0; num_grid_n59_456 < 512; num_grid_n59_456 = num_grid_n59_456 + 1) {
          Zero_ciph(&result_grid_n59_457);
          for (cap_block_n59_458 = 0; cap_block_n59_458 < 1; cap_block_n59_458 = cap_block_n59_458 + 1) {
            _ckks_gen_tmp_7554_519 = input_block_n58_453[cap_block_n59_458];
            Pt_from_msg_ofst(&_pgen_tmp_471_1029, 89/* cst_328 */, (((((mesh_x_n27_454 * 2) + mesh_y_n27_449) * 512) + (cap_block_n59_458 + (num_grid_n59_456 * 1)))) * (25088), 25088, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_472_1030, &_ckks_gen_tmp_7554_519, &_pgen_tmp_471_1029);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n59_457, &result_grid_n59_457, &_pgen_tmp_472_1030);
            _pgen_modulus_555 = Q_modulus();
            _pgen_num_q_556 = Poly_level(&result_grid_n59_457._c0_poly);
            for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_472_1030._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_7554_519._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_471_1029._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_472_1030._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_7554_519._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_471_1029._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n59_457._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n59_457._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_472_1030._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              Hw_modadd(Coeffs(&result_grid_n59_457._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_grid_n59_457._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_472_1030._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
              _pgen_modulus_555 = _pgen_modulus_555 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_474_1032, &result_grid_n59_457);
          Rescale(&_pgen_tmp_474_1032._c0_poly, &result_grid_n59_457._c0_poly);
          Rescale(&_pgen_tmp_474_1032._c1_poly, &result_grid_n59_457._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_475_1033, 90/* cst_333 */, (num_grid_n59_456) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_473_1031, &_pgen_tmp_474_1032, &_pgen_tmp_475_1033);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_473_1031._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_473_1031._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_474_1032._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_475_1033._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_473_1031._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_474_1032._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_475_1033._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435676 = Rotate(_pgen_tmp_473_1031, -25088 + (num_grid_n59_456 * 49));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_477_1035, &result_grid_n59_457);
          Rescale(&_pgen_tmp_477_1035._c0_poly, &result_grid_n59_457._c0_poly);
          Rescale(&_pgen_tmp_477_1035._c1_poly, &result_grid_n59_457._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_478_1036, 91/* cst_334 */, (num_grid_n59_456) * (25088), 25088, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_476_1034, &_pgen_tmp_477_1035, &_pgen_tmp_478_1036);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&_pgen_tmp_476_1034._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_476_1034._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_477_1035._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_478_1036._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_476_1034._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_477_1035._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_478_1036._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435677 = Rotate(_pgen_tmp_476_1034, num_grid_n59_456 * 49);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_479_1037, &_preg_268435676, &_preg_268435677);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n59_455, &result_n59_455, &_pgen_tmp_479_1037);
          _pgen_modulus_555 = Q_modulus();
          _pgen_num_q_556 = Poly_level(&result_n59_455._c0_poly);
          for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_479_1037._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435676._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435677._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_479_1037._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435676._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435677._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n59_455._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n59_455._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_479_1037._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            Hw_modadd(Coeffs(&result_n59_455._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n59_455._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_479_1037._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
            _pgen_modulus_555 = _pgen_modulus_555 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435676._c1_poly);
          Free_poly_data(&_preg_268435676._c0_poly);
          Free_poly_data(&_preg_268435677._c1_poly);
          Free_poly_data(&_preg_268435677._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_480_1038, 92 /* cst_331 */, 25088, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n59_455, &result_n59_455, &_pgen_tmp_480_1038);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&result_n59_455._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&result_n59_455._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n59_455._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_480_1038._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Set_coeffs(&result_n59_455._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&result_n59_455._c1_poly, _pgen_rns_idx_557, degree));
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_482_1040 = VS_out_conv27_447[((mesh_x_n27_454 * 1) + mesh_z_n27_450)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_481_1039, &_pgen_tmp_482_1040, &result_n59_455);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_pgen_tmp_481_1039._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_481_1039._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_482_1040._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n59_455._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_481_1039._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_482_1040._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&result_n59_455._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv27_447[((mesh_x_n27_454 * 1) + mesh_z_n27_450)], &_pgen_tmp_481_1039);
      }
    }
  }
  Free_ciph_poly(VS_out_relu26_444, 2);
  Free_poly_data(&_preg_268435561._c1_poly);
  Free_poly_data(&_preg_268435561._c0_poly);
  Free_poly_data(&input_dup_n58_451._c1_poly);
  Free_poly_data(&input_dup_n58_451._c0_poly);
  Free_ciph_poly(input_block_n58_453, 1);
  Free_poly_data(&_pgen_tmp_471_1029._poly);
  Free_poly_data(&_pgen_tmp_472_1030._c1_poly);
  Free_poly_data(&_pgen_tmp_472_1030._c0_poly);
  Free_poly_data(&_pgen_tmp_475_1033._poly);
  Free_poly_data(&_pgen_tmp_474_1032._c1_poly);
  Free_poly_data(&_pgen_tmp_474_1032._c0_poly);
  Free_poly_data(&_pgen_tmp_473_1031._c1_poly);
  Free_poly_data(&_pgen_tmp_473_1031._c0_poly);
  Free_poly_data(&result_grid_n59_457._c1_poly);
  Free_poly_data(&result_grid_n59_457._c0_poly);
  Free_poly_data(&_pgen_tmp_478_1036._poly);
  Free_poly_data(&_pgen_tmp_477_1035._c1_poly);
  Free_poly_data(&_pgen_tmp_477_1035._c0_poly);
  Free_poly_data(&_pgen_tmp_476_1034._c1_poly);
  Free_poly_data(&_pgen_tmp_476_1034._c0_poly);
  Free_poly_data(&_pgen_tmp_479_1037._c1_poly);
  Free_poly_data(&_pgen_tmp_479_1037._c0_poly);
  Free_poly_data(&_pgen_tmp_480_1038._poly);
  Free_poly_data(&result_n59_455._c1_poly);
  Free_poly_data(&result_n59_455._c0_poly);
  Free_poly_data(&_pgen_tmp_481_1039._c1_poly);
  Free_poly_data(&_pgen_tmp_481_1039._c0_poly);
  for (rescale_iv_553 = 0; rescale_iv_553 < 2; rescale_iv_553 = rescale_iv_553 + 1) {
    _pgen_tmp_483_1041 = VS_out_conv27_447[rescale_iv_553];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_484_1042, &_pgen_tmp_483_1041);
    Rescale(&_pgen_tmp_484_1042._c0_poly, &_pgen_tmp_483_1041._c0_poly);
    Rescale(&_pgen_tmp_484_1042._c1_poly, &_pgen_tmp_483_1041._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv27_447[rescale_iv_553], &_pgen_tmp_484_1042);
  }
  Free_poly_data(&_pgen_tmp_484_1042._c1_poly);
  Free_poly_data(&_pgen_tmp_484_1042._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 90
  // Relu_53
  // pragma: 65536, 1033, 91
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu27_459, 0, sizeof(VS_out_relu27_459));
  for (mesh_y_n27_460 = 0; mesh_y_n27_460 < 2; mesh_y_n27_460 = mesh_y_n27_460 + 1) {
    for (mesh_z_n27_461 = 0; mesh_z_n27_461 < 1; mesh_z_n27_461 = mesh_z_n27_461 + 1) {
      _pgen_tmp_485_1043 = VS_out_conv27_447[((mesh_y_n27_460 * 1) + mesh_z_n27_461)];
      Bootstrap(&_preg_268435562, &_pgen_tmp_485_1043, 18);
      Encode_float(&_pgen_tmp_486_1044, &_cst_414, 1, 1, Level(&_preg_268435562));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435564, &_preg_268435562, &_pgen_tmp_486_1044);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_preg_268435564._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_preg_268435564._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435562._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_486_1044._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_preg_268435564._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435562._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_486_1044._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_487_1045, &_preg_268435564);
      Rescale(&_pgen_tmp_487_1045._c0_poly, &_preg_268435564._c0_poly);
      Rescale(&_pgen_tmp_487_1045._c1_poly, &_preg_268435564._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435563 = App_relu(_preg_268435562, _pgen_tmp_487_1045, 25088);
      _pgen_tmp_489_1047 = VS_out_relu27_459[((mesh_y_n27_460 * 1) + mesh_z_n27_461)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_488_1046, &_pgen_tmp_489_1047, &_preg_268435563);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&_pgen_tmp_488_1046._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_488_1046._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_489_1047._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435563._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_488_1046._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_489_1047._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435563._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu27_459[((mesh_y_n27_460 * 1) + mesh_z_n27_461)], &_pgen_tmp_488_1046);
    }
  }
  Free_ciph_poly(VS_out_conv27_447, 2);
  Free_poly_data(&_pgen_tmp_486_1044._poly);
  Free_poly_data(&_preg_268435564._c1_poly);
  Free_poly_data(&_preg_268435564._c0_poly);
  Free_poly_data(&_pgen_tmp_487_1045._c1_poly);
  Free_poly_data(&_pgen_tmp_487_1045._c0_poly);
  Free_poly_data(&_preg_268435562._c1_poly);
  Free_poly_data(&_preg_268435562._c0_poly);
  Free_poly_data(&_preg_268435563._c1_poly);
  Free_poly_data(&_preg_268435563._c0_poly);
  Free_poly_data(&_pgen_tmp_488_1046._c1_poly);
  Free_poly_data(&_pgen_tmp_488_1046._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 91
  // GlobalAveragePool_54
  // pragma: 65536, 1030, 92
  CMPLR_TM_START(8, 0);
  memset(&VS_out_gap27_462, 0, sizeof(VS_out_gap27_462));
  for (mesh_y_n27_463 = 0; mesh_y_n27_463 < 2; mesh_y_n27_463 = mesh_y_n27_463 + 1) {
    for (mesh_z_n27_464 = 0; mesh_z_n27_464 < 1; mesh_z_n27_464 = mesh_z_n27_464 + 1) {
      Copy_ciph(&_preg_268435565, &VS_out_relu27_459[((mesh_y_n27_463 * 1) + mesh_z_n27_464)]);
      for (gap_sum_index_n59_465 = 0; gap_sum_index_n59_465 < 5; gap_sum_index_n59_465 = gap_sum_index_n59_465 + 1) {
        _preg_268435678 = Rotate(_preg_268435565, 1 << gap_sum_index_n59_465);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_preg_268435565, &_preg_268435565, &_preg_268435678);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&_preg_268435565._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&_preg_268435565._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435565._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435678._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&_preg_268435565._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435565._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435678._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435678._c1_poly);
        Free_poly_data(&_preg_268435678._c0_poly);
      }
      Encode_float(&_pgen_tmp_490_1048, &_cst_335, 1, 1, Level(&_preg_268435565));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&gap_result59_466, &_preg_268435565, &_pgen_tmp_490_1048);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&gap_result59_466._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&gap_result59_466._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435565._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_490_1048._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&gap_result59_466._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435565._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_490_1048._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      Copy_ciph(&_preg_268435566, &gap_result59_466);
      Copy_ciph(&orig_result59_467, &_preg_268435566);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_491_1049, &orig_result59_467);
      Rescale(&_pgen_tmp_491_1049._c0_poly, &orig_result59_467._c0_poly);
      Rescale(&_pgen_tmp_491_1049._c1_poly, &orig_result59_467._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg(&_pgen_tmp_492_1050, 93 /* cst_336 */, 25088, 1, 5);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&orig_result59_467, &_pgen_tmp_491_1049, &_pgen_tmp_492_1050);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&orig_result59_467._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&orig_result59_467._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_491_1049._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_492_1050._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&orig_result59_467._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_491_1049._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_492_1050._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(17, 0);
      Zero_ciph(&ss_result60_468);
      for (comb_cc_lf_index_n60_469 = 0; comb_cc_lf_index_n60_469 < 5; comb_cc_lf_index_n60_469 = comb_cc_lf_index_n60_469 + 1) {
        _preg_268435679 = Rotate(orig_result59_467, (1 << comb_cc_lf_index_n60_469) * 48);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&orig_result59_467, &orig_result59_467, &_preg_268435679);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&orig_result59_467._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modadd(Coeffs(&orig_result59_467._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&orig_result59_467._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435679._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&orig_result59_467._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&orig_result59_467._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435679._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435679._c1_poly);
        Free_poly_data(&_preg_268435679._c0_poly);
      }
      for (comb_cc_index_n60_470 = 0; comb_cc_index_n60_470 < 11; comb_cc_index_n60_470 = comb_cc_index_n60_470 + 1) {
        _preg_268435680 = Rotate(orig_result59_467, comb_cc_index_n60_470 * 3087);
        Copy_ciph(&_ckks_gen_tmp_7831_520, &_preg_268435680);
        CMPLR_TM_START(19, 0);
        Init_ciph_down_scale(&_pgen_tmp_493_1051, &_ckks_gen_tmp_7831_520);
        Rescale(&_pgen_tmp_493_1051._c0_poly, &_ckks_gen_tmp_7831_520._c0_poly);
        Rescale(&_pgen_tmp_493_1051._c1_poly, &_ckks_gen_tmp_7831_520._c1_poly);
        CMPLR_TM_END(19, 0);
        Pt_from_msg_ofst(&_pgen_tmp_494_1052, 94/* cst_337 */, (comb_cc_index_n60_470) * (25088), 25088, 1, 4);
        CMPLR_TM_START(17, 0);
        Init_ciph_up_scale_plain(&_pgen_tmp_495_1053, &_pgen_tmp_493_1051, &_pgen_tmp_494_1052);
        CMPLR_TM_END(17, 0);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&ss_result60_468, &ss_result60_468, &_pgen_tmp_495_1053);
        _pgen_modulus_555 = Q_modulus();
        _pgen_num_q_556 = Poly_level(&ss_result60_468._c0_poly);
        for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
          Hw_modmul(Coeffs(&_pgen_tmp_495_1053._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_493_1051._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_494_1052._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modmul(Coeffs(&_pgen_tmp_495_1053._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_493_1051._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_494_1052._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&ss_result60_468._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&ss_result60_468._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_495_1053._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          Hw_modadd(Coeffs(&ss_result60_468._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&ss_result60_468._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_495_1053._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
          _pgen_modulus_555 = _pgen_modulus_555 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435680._c1_poly);
        Free_poly_data(&_preg_268435680._c0_poly);
      }
      Copy_ciph(&VS_out_gap27_462[((mesh_y_n27_463 * 1) + mesh_z_n27_464)], &ss_result60_468);
    }
  }
  Free_ciph_poly(VS_out_relu27_459, 2);
  Free_poly_data(&_pgen_tmp_490_1048._poly);
  Free_poly_data(&_preg_268435565._c1_poly);
  Free_poly_data(&_preg_268435565._c0_poly);
  Free_poly_data(&gap_result59_466._c1_poly);
  Free_poly_data(&gap_result59_466._c0_poly);
  Free_poly_data(&_preg_268435566._c1_poly);
  Free_poly_data(&_preg_268435566._c0_poly);
  Free_poly_data(&_pgen_tmp_492_1050._poly);
  Free_poly_data(&_pgen_tmp_491_1049._c1_poly);
  Free_poly_data(&_pgen_tmp_491_1049._c0_poly);
  Free_poly_data(&orig_result59_467._c1_poly);
  Free_poly_data(&orig_result59_467._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_7831_520._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_7831_520._c0_poly);
  Free_poly_data(&_pgen_tmp_494_1052._poly);
  Free_poly_data(&_pgen_tmp_493_1051._c1_poly);
  Free_poly_data(&_pgen_tmp_493_1051._c0_poly);
  Free_poly_data(&_pgen_tmp_495_1053._c1_poly);
  Free_poly_data(&_pgen_tmp_495_1053._c0_poly);
  Free_poly_data(&ss_result60_468._c1_poly);
  Free_poly_data(&ss_result60_468._c0_poly);
  for (rescale_iv_554 = 0; rescale_iv_554 < 2; rescale_iv_554 = rescale_iv_554 + 1) {
    _pgen_tmp_496_1054 = VS_out_gap27_462[rescale_iv_554];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_497_1055, &_pgen_tmp_496_1054);
    Rescale(&_pgen_tmp_497_1055._c0_poly, &_pgen_tmp_496_1054._c0_poly);
    Rescale(&_pgen_tmp_497_1055._c1_poly, &_pgen_tmp_496_1054._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_gap27_462[rescale_iv_554], &_pgen_tmp_497_1055);
  }
  Free_poly_data(&_pgen_tmp_497_1055._c1_poly);
  Free_poly_data(&_pgen_tmp_497_1055._c0_poly);
  _pgen_tmp_498_1056 = VS_out_gap27_462[0];
  _pgen_tmp_499_1057 = VS_out_gap27_462[1];
  _preg_268435681 = Rotate(_pgen_tmp_499_1057, -512);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435567, &_pgen_tmp_498_1056, &_preg_268435681);
  _pgen_modulus_555 = Q_modulus();
  _pgen_num_q_556 = Poly_level(&_preg_268435567._c0_poly);
  for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
    Hw_modadd(Coeffs(&_preg_268435567._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_498_1056._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435681._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    Hw_modadd(Coeffs(&_preg_268435567._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_498_1056._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435681._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    _pgen_modulus_555 = _pgen_modulus_555 + 1;
  }
  Free_poly_data(&_preg_268435681._c1_poly);
  Free_poly_data(&_preg_268435681._c0_poly);
  CMPLR_TM_END(12, 0);
  Copy_ciph(&_preg_268435568, &_preg_268435567);
  Free_poly_data(&_preg_268435567._c1_poly);
  Free_poly_data(&_preg_268435567._c0_poly);
  CMPLR_TM_END(8, 0);
  // pragma: 65537, 1030, 92
  // Reshape_55
  // pragma: 65536, 1034, 93
  CMPLR_TM_START(6, 0);
  Copy_ciph(&_preg_268435569, &_preg_268435568);
  Free_poly_data(&_preg_268435568._c1_poly);
  Free_poly_data(&_preg_268435568._c0_poly);
  CMPLR_TM_END(6, 0);
  // pragma: 65537, 1034, 93
  // Gemm_56
  // pragma: 65536, 1029, 94
  CMPLR_TM_START(7, 0);
  // BlockingRot replicate=9
  _preg_268435682 = Rotate(_preg_268435569, -1024);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_500_1058, &_preg_268435569, &_preg_268435682);
  CMPLR_TM_END(12, 0);
  _preg_268435683 = Rotate(_preg_268435569, -2048);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_501_1059, &_pgen_tmp_500_1058, &_preg_268435683);
  CMPLR_TM_END(12, 0);
  _preg_268435684 = Rotate(_preg_268435569, -3072);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_502_1060, &_pgen_tmp_501_1059, &_preg_268435684);
  CMPLR_TM_END(12, 0);
  _preg_268435685 = Rotate(_preg_268435569, -4096);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_503_1061, &_pgen_tmp_502_1060, &_preg_268435685);
  CMPLR_TM_END(12, 0);
  _preg_268435686 = Rotate(_preg_268435569, -5120);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_504_1062, &_pgen_tmp_503_1061, &_preg_268435686);
  CMPLR_TM_END(12, 0);
  _preg_268435687 = Rotate(_preg_268435569, -6144);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_505_1063, &_pgen_tmp_504_1062, &_preg_268435687);
  CMPLR_TM_END(12, 0);
  _preg_268435688 = Rotate(_preg_268435569, -7168);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_506_1064, &_pgen_tmp_505_1063, &_preg_268435688);
  CMPLR_TM_END(12, 0);
  _preg_268435689 = Rotate(_preg_268435569, -8192);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n60_471, &_pgen_tmp_506_1064, &_preg_268435689);
  _pgen_modulus_555 = Q_modulus();
  _pgen_num_q_556 = Poly_level(&input_dup_n60_471._c0_poly);
  for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_500_1058._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435569._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435682._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_500_1058._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435569._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435682._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_501_1059._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_500_1058._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435683._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_501_1059._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_500_1058._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435683._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_502_1060._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_501_1059._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435684._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_502_1060._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_501_1059._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435684._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_503_1061._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_502_1060._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435685._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_503_1061._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_502_1060._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435685._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_504_1062._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_503_1061._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435686._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_504_1062._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_503_1061._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435686._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_505_1063._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_504_1062._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435687._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_505_1063._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_504_1062._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435687._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_506_1064._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_505_1063._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435688._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_506_1064._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_505_1063._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435688._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    Hw_modadd(Coeffs(&input_dup_n60_471._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_506_1064._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435689._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    Hw_modadd(Coeffs(&input_dup_n60_471._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_506_1064._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435689._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    _pgen_modulus_555 = _pgen_modulus_555 + 1;
  }
  Free_poly_data(&_preg_268435682._c1_poly);
  Free_poly_data(&_preg_268435682._c0_poly);
  Free_poly_data(&_preg_268435569._c1_poly);
  Free_poly_data(&_preg_268435569._c0_poly);
  Free_poly_data(&_preg_268435683._c1_poly);
  Free_poly_data(&_preg_268435683._c0_poly);
  Free_poly_data(&_pgen_tmp_500_1058._c1_poly);
  Free_poly_data(&_pgen_tmp_500_1058._c0_poly);
  Free_poly_data(&_preg_268435684._c1_poly);
  Free_poly_data(&_preg_268435684._c0_poly);
  Free_poly_data(&_pgen_tmp_501_1059._c1_poly);
  Free_poly_data(&_pgen_tmp_501_1059._c0_poly);
  Free_poly_data(&_preg_268435685._c1_poly);
  Free_poly_data(&_preg_268435685._c0_poly);
  Free_poly_data(&_pgen_tmp_502_1060._c1_poly);
  Free_poly_data(&_pgen_tmp_502_1060._c0_poly);
  Free_poly_data(&_preg_268435686._c1_poly);
  Free_poly_data(&_preg_268435686._c0_poly);
  Free_poly_data(&_pgen_tmp_503_1061._c1_poly);
  Free_poly_data(&_pgen_tmp_503_1061._c0_poly);
  Free_poly_data(&_preg_268435687._c1_poly);
  Free_poly_data(&_preg_268435687._c0_poly);
  Free_poly_data(&_pgen_tmp_504_1062._c1_poly);
  Free_poly_data(&_pgen_tmp_504_1062._c0_poly);
  Free_poly_data(&_preg_268435688._c1_poly);
  Free_poly_data(&_preg_268435688._c0_poly);
  Free_poly_data(&_pgen_tmp_505_1063._c1_poly);
  Free_poly_data(&_pgen_tmp_505_1063._c0_poly);
  Free_poly_data(&_preg_268435689._c1_poly);
  Free_poly_data(&_preg_268435689._c0_poly);
  Free_poly_data(&_pgen_tmp_506_1064._c1_poly);
  Free_poly_data(&_pgen_tmp_506_1064._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=8
  for (bs_input_n60_472 = 0; bs_input_n60_472 < 8; bs_input_n60_472 = bs_input_n60_472 + 1) {
    _preg_268435690 = Rotate(input_dup_n60_471, _cst_340[bs_input_n60_472]);
    Copy_ciph(&input_block_n60_473[bs_input_n60_472], &_preg_268435690);
    Free_poly_data(&_preg_268435690._c1_poly);
    Free_poly_data(&_preg_268435690._c0_poly);
  }
  Free_poly_data(&input_dup_n60_471._c1_poly);
  Free_poly_data(&input_dup_n60_471._c0_poly);
  Zero_ciph(&gemm_result_n61_474);
  // IMRA Metakernel: gs=16
  for (gs_n61_475 = 0; gs_n61_475 < 16; gs_n61_475 = gs_n61_475 + 1) {
    Zero_ciph(&block_result_476);
    for (bs_n61_477 = 0; bs_n61_477 < 8; bs_n61_477 = bs_n61_477 + 1) {
      _ckks_gen_tmp_7972_521 = input_block_n60_473[bs_n61_477];
      Pt_from_msg_ofst(&_pgen_tmp_507_1065, 95/* cst_339 */, ((bs_n61_477 + (gs_n61_475 * 8))) * (9216), 9216, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_508_1066, &_ckks_gen_tmp_7972_521, &_pgen_tmp_507_1065);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&block_result_476, &block_result_476, &_pgen_tmp_508_1066);
      _pgen_modulus_555 = Q_modulus();
      _pgen_num_q_556 = Poly_level(&block_result_476._c0_poly);
      for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_508_1066._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_7972_521._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_507_1065._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_508_1066._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_ckks_gen_tmp_7972_521._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_507_1065._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&block_result_476._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&block_result_476._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_508_1066._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        Hw_modadd(Coeffs(&block_result_476._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&block_result_476._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_508_1066._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
        _pgen_modulus_555 = _pgen_modulus_555 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435691 = Rotate(block_result_476, gs_n61_475 * 8);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&gemm_result_n61_474, &gemm_result_n61_474, &_preg_268435691);
    _pgen_modulus_555 = Q_modulus();
    _pgen_num_q_556 = Poly_level(&gemm_result_n61_474._c0_poly);
    for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
      Hw_modadd(Coeffs(&gemm_result_n61_474._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&gemm_result_n61_474._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435691._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modadd(Coeffs(&gemm_result_n61_474._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&gemm_result_n61_474._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435691._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      _pgen_modulus_555 = _pgen_modulus_555 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435691._c1_poly);
    Free_poly_data(&_preg_268435691._c0_poly);
  }
  Free_ciph_poly(input_block_n60_473, 8);
  Free_poly_data(&_pgen_tmp_507_1065._poly);
  Free_poly_data(&_pgen_tmp_508_1066._c1_poly);
  Free_poly_data(&_pgen_tmp_508_1066._c0_poly);
  Free_poly_data(&block_result_476._c1_poly);
  Free_poly_data(&block_result_476._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&gemm_result_n61_474, &gemm_result_n61_474);
  Rescale(&gemm_result_n61_474._c0_poly, &gemm_result_n61_474._c0_poly);
  Rescale(&gemm_result_n61_474._c1_poly, &gemm_result_n61_474._c1_poly);
  CMPLR_TM_END(19, 0);
  // gemm result reduce->Ps=8
  Copy_ciph(&reduce_intra_478, &gemm_result_n61_474);
  for (ri_n61_479 = 1; ri_n61_479 < 8; ri_n61_479 = ri_n61_479 + 1) {
    _preg_268435692 = Rotate(gemm_result_n61_474, ri_n61_479 * 1152);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&reduce_intra_478, &reduce_intra_478, &_preg_268435692);
    _pgen_modulus_555 = Q_modulus();
    _pgen_num_q_556 = Poly_level(&reduce_intra_478._c0_poly);
    for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
      Hw_modadd(Coeffs(&reduce_intra_478._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&reduce_intra_478._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435692._c0_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      Hw_modadd(Coeffs(&reduce_intra_478._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&reduce_intra_478._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_preg_268435692._c1_poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
      _pgen_modulus_555 = _pgen_modulus_555 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435692._c1_poly);
    Free_poly_data(&_preg_268435692._c0_poly);
  }
  Free_poly_data(&gemm_result_n61_474._c1_poly);
  Free_poly_data(&gemm_result_n61_474._c0_poly);
  // gemm result reduce->(kp/np)=1
  // gemm add bias
  Pt_from_msg(&_pgen_tmp_509_1067, 96 /* cst_1 */, 1000, 1, 2);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&reduce_intra_478, &reduce_intra_478, &_pgen_tmp_509_1067);
  _pgen_modulus_555 = Q_modulus();
  _pgen_num_q_556 = Poly_level(&reduce_intra_478._c0_poly);
  for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
    Hw_modadd(Coeffs(&reduce_intra_478._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&reduce_intra_478._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_509_1067._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    Set_coeffs(&reduce_intra_478._c1_poly, _pgen_rns_idx_557, degree, Coeffs(&reduce_intra_478._c1_poly, _pgen_rns_idx_557, degree));
    _pgen_modulus_555 = _pgen_modulus_555 + 1;
  }
  Free_poly_data(&_pgen_tmp_509_1067._poly);
  CMPLR_TM_END(13, 0);
  Pt_from_msg(&_pgen_tmp_511_1069, 97 /* cst_341 */, 1000, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_510_1068, &reduce_intra_478, &_pgen_tmp_511_1069);
  _pgen_modulus_555 = Q_modulus();
  _pgen_num_q_556 = Poly_level(&_pgen_tmp_510_1068._c0_poly);
  for (_pgen_rns_idx_557 = 0; _pgen_rns_idx_557 < _pgen_num_q_556; _pgen_rns_idx_557 = _pgen_rns_idx_557 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_510_1068._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&reduce_intra_478._c0_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_511_1069._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_510_1068._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&reduce_intra_478._c1_poly, _pgen_rns_idx_557, degree), Coeffs(&_pgen_tmp_511_1069._poly, _pgen_rns_idx_557, degree), _pgen_modulus_555, degree);
    _pgen_modulus_555 = _pgen_modulus_555 + 1;
  }
  Free_poly_data(&_pgen_tmp_511_1069._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&reduce_intra_478, &_pgen_tmp_510_1068);
  Rescale(&reduce_intra_478._c0_poly, &_pgen_tmp_510_1068._c0_poly);
  Rescale(&reduce_intra_478._c1_poly, &_pgen_tmp_510_1068._c1_poly);
  Free_poly_data(&_pgen_tmp_510_1068._c1_poly);
  Free_poly_data(&_pgen_tmp_510_1068._c0_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&output_480, &reduce_intra_478);
  Free_poly_data(&reduce_intra_478._c1_poly);
  Free_poly_data(&reduce_intra_478._c0_poly);
  CMPLR_TM_END(7, 0);
  // pragma: 65537, 1029, 94
  Set_output_data("output", 0, &output_480);
  return true;
}

int Get_input_count() {
  return 1;
}

DATA_SCHEME* Get_encode_scheme(int idx) {
  static MAP_DESC desc_0[] = {
    { NORMAL, 25088, 0, 224, 1},
    { NORMAL, 25088, 25088, 224, 1},
    { NORMAL, 25088, 50176, 224, 1},
    { NORMAL, 25088, 75264, 224, 1},
    { NORMAL, 25088, 100352, 224, 1},
    { NORMAL, 25088, 125440, 224, 1},
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
  Encode_float(&_pgen_tmp_5_35, &_cst_342, 1, Sc_degree(&_pgen_tmp_4_34), Level(&_pgen_tmp_4_34));
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
  Encode_float(&_pgen_tmp_11_41, &_cst_343, 1, Sc_degree(&_pgen_tmp_10_40), Level(&_pgen_tmp_10_40));
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
  Encode_float(&_pgen_tmp_43_73, &_cst_352, 1, Sc_degree(&_pgen_tmp_42_72), Level(&_pgen_tmp_42_72));
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
  Encode_float(&_pgen_tmp_50_80, &_cst_353, 1, 1, Level(&_relu_tmp58_7));
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
  Encode_float(&_pgen_tmp_57_87, &_cst_354, 1, Sc_degree(&_pgen_tmp_56_86), Level(&_pgen_tmp_56_86));
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
  Encode_float(&_pgen_tmp_63_93, &_cst_355, 1, Sc_degree(&_pgen_tmp_62_92), Level(&_pgen_tmp_62_92));
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
  Encode_double(&_pgen_tmp_81_111, &_cst_362, 1, 1, Level(&_relu_tmp80_11));
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
  Encode_double(&_pgen_tmp_93_123, &_cst_365, 1, 1, Level(&_relu_tmp80_11));
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
  Encode_double(&_pgen_tmp_103_133, &_cst_368, 1, 1, Level(&_relu_tmp80_11));
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
  Encode_float(&_pgen_tmp_115_145, &_cst_369, 1, Sc_degree(&_pgen_tmp_114_144), Level(&_pgen_tmp_114_144));
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
  Encode_float(&_pgen_tmp_122_152, &_cst_370, 1, 1, Level(&_relu_tmp155_16));
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
  Encode_float(&_pgen_tmp_129_159, &_cst_371, 1, Sc_degree(&_pgen_tmp_128_158), Level(&_pgen_tmp_128_158));
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
  Encode_float(&_pgen_tmp_135_165, &_cst_372, 1, Sc_degree(&_pgen_tmp_134_164), Level(&_pgen_tmp_134_164));
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
    LIB_ANT, 65536, 0, 32, 4, 60, 56, 3, 192, 1171, 
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
      -7889, -7840, -7791, -7742, -7693, -7644, -7595, -7546,
      -7497, -7448, -7399, -7350, -7301, -7252, -7203, -7168,
      -7154, -7105, -7056, -7007, -6958, -6909, -6860, -6811,
      -6762, -6713, -6664, -6615, -6566, -6517, -6468, -6419,
      -6370, -6321, -6272, -6223, -6174, -6144, -6125, -6076,
      -6027, -5978, -5929, -5880, -5831, -5782, -5733, -5684,
      -5635, -5586, -5537, -5488, -5439, -5390, -5341, -5292,
      -5243, -5194, -5145, -5120, -5096, -5047, -4998, -4949,
      -4900, -4851, -4802, -4753, -4704, -4655, -4606, -4557,
      -4508, -4459, -4410, -4361, -4312, -4263, -4214, -4165,
      -4116, -4096, -4067, -4018, -3969, -3920, -3871, -3822,
      -3773, -3724, -3675, -3626, -3577, -3528, -3479, -3430,
      -3381, -3332, -3283, -3234, -3185, -3136, -3087, -3072,
      -3038, -2989, -2940, -2891, -2842, -2793, -2744, -2695,
      -2646, -2597, -2548, -2499, -2450, -2401, -2352, -2303,
      -2254, -2205, -2156, -2107, -2058, -2048, -2009, -1960,
      -1911, -1862, -1813, -1764, -1715, -1666, -1617, -1568,
      -1519, -1470, -1421, -1372, -1323, -1274, -1225, -1176,
      -1127, -1078, -1029, -1024, -980, -931, -882, -833,
      -784, -735, -686, -637, -588, -539, -512, -490,
      -441, -392, -343, -294, -245, -225, -224, -223,
      -196, -147, -113, -112, -111, -98, -57, -56,
      -55, -49, -29, -28, -27, -15, -14, -13,
      -8, -7, -6, -1, 0, 1, 2, 3,
      4, 5, 6, 7, 8, 10, 12, 13,
      14, 15, 16, 18, 20, 21, 22, 23,
      24, 25, 26, 27, 28, 29, 30, 32,
      34, 36, 38, 40, 42, 44, 46, 48,
      49, 50, 52, 54, 55, 56, 57, 58,
      60, 62, 63, 64, 65, 66, 67, 68,
      69, 70, 72, 74, 76, 78, 80, 82,
      84, 86, 88, 90, 92, 94, 96, 98,
      100, 102, 104, 105, 106, 107, 108, 109,
      110, 111, 112, 113, 120, 126, 128, 130,
      132, 147, 168, 192, 196, 223, 224, 225,
      245, 294, 336, 343, 384, 392, 441, 490,
      504, 539, 588, 637, 672, 686, 735, 768,
      784, 833, 882, 931, 980, 1008, 1029, 1078,
      1127, 1152, 1176, 1225, 1274, 1323, 1344, 1372,
      1421, 1470, 1519, 1568, 1617, 1666, 1680, 1715,
      1764, 1813, 1862, 1911, 1960, 2009, 2016, 2058,
      2107, 2156, 2205, 2254, 2303, 2304, 2352, 2401,
      2450, 2499, 2548, 2597, 2646, 2688, 2695, 2744,
      2793, 2842, 2891, 2940, 2989, 3038, 3087, 3136,
      3185, 3234, 3283, 3332, 3360, 3381, 3430, 3456,
      3479, 3528, 3577, 3626, 3675, 3724, 3773, 3822,
      3871, 3920, 3969, 4018, 4032, 4067, 4116, 4165,
      4214, 4263, 4312, 4361, 4410, 4459, 4508, 4557,
      4606, 4608, 4655, 4704, 4753, 4802, 4851, 4900,
      4949, 4998, 5047, 5096, 5145, 5194, 5243, 5292,
      5341, 5376, 5390, 5439, 5488, 5537, 5586, 5635,
      5684, 5733, 5760, 5782, 5831, 5880, 5929, 5978,
      6027, 6048, 6076, 6125, 6174, 6223, 6272, 6321,
      6370, 6419, 6468, 6517, 6566, 6615, 6664, 6713,
      6720, 6762, 6811, 6860, 6909, 6912, 6958, 7007,
      7056, 7105, 7154, 7203, 7252, 7301, 7350, 7392,
      7399, 7448, 7497, 7546, 7595, 7644, 7693, 7742,
      7791, 7840, 7889, 7938, 7987, 8036, 8064, 8085,
      8134, 8183, 8232, 8281, 8330, 8379, 8428, 8477,
      8526, 8575, 8624, 8673, 8722, 8736, 8771, 8820,
      8869, 8918, 8967, 9016, 9065, 9114, 9163, 9212,
      9261, 9310, 9359, 9408, 9457, 9506, 9555, 9604,
      9653, 9702, 9751, 9800, 9849, 9898, 9947, 9996,
      10045, 10094, 10143, 10192, 10241, 10290, 10339, 10388,
      10437, 10486, 10535, 10584, 10633, 10682, 10731, 10752,
      10780, 10829, 10878, 10927, 10976, 11025, 11074, 11123,
      11172, 11221, 11270, 11319, 11368, 11417, 11466, 11515,
      11564, 11613, 11662, 11711, 11760, 11809, 11858, 11907,
      11956, 12005, 12054, 12096, 12103, 12152, 12201, 12250,
      12299, 12348, 12397, 12446, 12495, 12544, 12593, 12642,
      12691, 12740, 12789, 12838, 12887, 12936, 12985, 13034,
      13083, 13132, 13181, 13230, 13279, 13328, 13377, 13426,
      13440, 13475, 13524, 13573, 13622, 13671, 13720, 13769,
      13818, 13867, 13916, 13965, 14014, 14063, 14112, 14161,
      14210, 14259, 14308, 14357, 14406, 14455, 14504, 14553,
      14602, 14651, 14700, 14749, 14784, 14798, 14847, 14896,
      14945, 14994, 15043, 15092, 15141, 15190, 15239, 15288,
      15337, 15386, 15435, 15484, 15533, 15582, 15631, 15680,
      15729, 15778, 15827, 15876, 15925, 15974, 16023, 16072,
      16121, 16128, 16170, 16219, 16268, 16317, 16366, 16415,
      16464, 16513, 16562, 16611, 16660, 16709, 16758, 16807,
      16856, 16905, 16954, 17003, 17052, 17101, 17150, 17199,
      17248, 17297, 17346, 17395, 17444, 17472, 17493, 17542,
      17591, 17640, 17689, 17738, 17787, 17836, 17885, 17934,
      17983, 18032, 18081, 18130, 18179, 18228, 18277, 18326,
      18375, 18424, 18473, 18522, 18571, 18620, 18669, 18718,
      18767, 18816, 18865, 18914, 18963, 19012, 19061, 19110,
      19159, 19208, 19257, 19306, 19355, 19404, 19453, 19502,
      19551, 19600, 19649, 19698, 19747, 19796, 19845, 19894,
      19943, 19992, 20041, 20090, 20139, 20188, 20237, 20286,
      20335, 20384, 20433, 20482, 20531, 20580, 20629, 20678,
      20727, 20776, 20825, 20874, 20923, 20972, 21021, 21070,
      21119, 21168, 21217, 21266, 21315, 21364, 21413, 21462,
      21511, 21560, 21609, 21658, 21707, 21756, 21805, 21854,
      21903, 21952, 22001, 22050, 22099, 22148, 22197, 22246,
      22295, 22344, 22393, 22442, 22491, 22540, 22589, 22638,
      22687, 22736, 22785, 22834, 22883, 22932, 22981, 23030,
      23079, 23128, 23177, 23226, 23275, 23324, 23373, 23422,
      23471, 23520, 23569, 23618, 23667, 23716, 23765, 23814,
      23863, 23912, 23961, 24010, 24059, 24108, 24157, 24206,
      24255, 24304, 24353, 24402, 24451, 24500, 24549, 24598,
      24647, 24696, 24745, 24794, 24843, 24892, 24941, 24990,
      25039, 27783, 30870 }
  };
  return &parm;
}

RT_DATA_INFO* Get_rt_data_info() {
  static RT_DATA_INFO info = {
    "/app/release/mobilenet_imagenet.0325.bin",
    "XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX",
    DE_MSG_F32
  };
  return &info;
}

int32_t _cst_165[9] = {
  -225, -224, -223, -1, 0, 1, 223, 224,
  225
};
int32_t _cst_172[9] = {
  -113, -112, -111, -1, 0, 1, 111, 112,
  113
};
int32_t _cst_177[1] = {
  0
};
int32_t _cst_184[9] = {
  -113, -112, -111, -1, 0, 1, 111, 112,
  113
};
int32_t _cst_192[1] = {
  0
};
int32_t _cst_199[9] = {
  -57, -56, -55, -1, 0, 1, 55, 56,
  57
};
int32_t _cst_204[1] = {
  0
};
int32_t _cst_211[9] = {
  -57, -56, -55, -1, 0, 1, 55, 56,
  57
};
int32_t _cst_219[1] = {
  0
};
int32_t _cst_226[9] = {
  -29, -28, -27, -1, 0, 1, 27, 28,
  29
};
int32_t _cst_231[1] = {
  0
};
int32_t _cst_238[9] = {
  -29, -28, -27, -1, 0, 1, 27, 28,
  29
};
int32_t _cst_246[1] = {
  0
};
int32_t _cst_253[9] = {
  -15, -14, -13, -1, 0, 1, 13, 14,
  15
};
int32_t _cst_258[1] = {
  0
};
int32_t _cst_265[9] = {
  -15, -14, -13, -1, 0, 1, 13, 14,
  15
};
int32_t _cst_270[1] = {
  0
};
int32_t _cst_277[9] = {
  -15, -14, -13, -1, 0, 1, 13, 14,
  15
};
int32_t _cst_282[1] = {
  0
};
int32_t _cst_289[9] = {
  -15, -14, -13, -1, 0, 1, 13, 14,
  15
};
int32_t _cst_294[1] = {
  0
};
int32_t _cst_301[9] = {
  -15, -14, -13, -1, 0, 1, 13, 14,
  15
};
int32_t _cst_306[1] = {
  0
};
int32_t _cst_313[9] = {
  -15, -14, -13, -1, 0, 1, 13, 14,
  15
};
int32_t _cst_320[1] = {
  0
};
int32_t _cst_327[9] = {
  -8, -7, -6, -1, 0, 1, 6, 7,
  8
};
int32_t _cst_332[1] = {
  0
};
int32_t _cst_340[8] = {
  0, 1, 2, 3, 4, 5, 6, 7
};
