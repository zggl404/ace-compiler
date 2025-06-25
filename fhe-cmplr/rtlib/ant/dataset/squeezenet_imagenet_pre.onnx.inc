// external header files
#include "rt_ant/rt_ant.h"

typedef double float64_t;
typedef float float32_t;

extern float32_t _cst_0[262144];
extern float32_t _cst_1[512];
extern float32_t _cst_2[512000];
extern float32_t _cst_3[1000];
extern float32_t _cst_4[14112];
extern float32_t _cst_5[96];
extern float32_t _cst_6[1536];
extern float32_t _cst_7[16];
extern float32_t _cst_8[1024];
extern float32_t _cst_9[64];
extern float32_t _cst_10[9216];
extern float32_t _cst_11[2048];
extern float32_t _cst_12[1024];
extern float32_t _cst_13[9216];
extern float32_t _cst_14[4096];
extern float32_t _cst_15[32];
extern float32_t _cst_16[4096];
extern float32_t _cst_17[128];
extern float32_t _cst_18[36864];
extern float32_t _cst_19[8192];
extern float32_t _cst_20[4096];
extern float32_t _cst_21[36864];
extern float32_t _cst_22[16384];
extern float32_t _cst_23[12288];
extern float32_t _cst_24[192];
extern float32_t _cst_25[110592];
extern float32_t _cst_26[24576];
extern float32_t _cst_27[12288];
extern float32_t _cst_28[110592];
extern float32_t _cst_29[24576];
extern float32_t _cst_30[16384];
extern float32_t _cst_31[256];
extern float32_t _cst_32[147456];
extern float32_t _cst_33[32768];
extern float32_t _cst_34[16384];
extern float32_t _cst_35[147456];
extern int64_t _cst_36[2];
extern float32_t _cst_37[14112];
extern float32_t _cst_38[1204224];
extern float32_t _cst_39[1204224];
extern float32_t _cst_40[1];
extern int64_t _cst_41[2];
extern int64_t _cst_42[2];
extern int64_t _cst_43[2];
extern float32_t _cst_44[1536];
extern float32_t _cst_45[48400];
extern float32_t _cst_46[48400];
extern float32_t _cst_47[8];
extern float32_t _cst_48[1024];
extern float32_t _cst_49[193600];
extern float32_t _cst_50[193600];
extern float32_t _cst_51[8];
extern float32_t _cst_52[9216];
extern float32_t _cst_53[193600];
extern float32_t _cst_54[193600];
extern float32_t _cst_55[8];
extern float32_t _cst_56[2048];
extern float32_t _cst_57[48400];
extern float32_t _cst_58[48400];
extern float32_t _cst_59[8];
extern float32_t _cst_60[1024];
extern float32_t _cst_61[193600];
extern float32_t _cst_62[193600];
extern float32_t _cst_63[8];
extern float32_t _cst_64[9216];
extern float32_t _cst_65[193600];
extern float32_t _cst_66[193600];
extern float32_t _cst_67[8];
extern float32_t _cst_68[4096];
extern float32_t _cst_69[96800];
extern float32_t _cst_70[96800];
extern float32_t _cst_71[8];
extern float32_t _cst_72[4096];
extern float32_t _cst_73[387200];
extern float32_t _cst_74[387200];
extern float32_t _cst_75[8];
extern float32_t _cst_76[36864];
extern float32_t _cst_77[387200];
extern float32_t _cst_78[387200];
extern float32_t _cst_79[8];
extern float32_t _cst_80[8192];
extern float32_t _cst_81[23328];
extern float32_t _cst_82[32];
extern float32_t _cst_83[4096];
extern float32_t _cst_84[93312];
extern float32_t _cst_85[93312];
extern float32_t _cst_86[32];
extern float32_t _cst_87[36864];
extern float32_t _cst_88[93312];
extern float32_t _cst_89[93312];
extern float32_t _cst_90[32];
extern float32_t _cst_91[16384];
extern float32_t _cst_92[46656];
extern float32_t _cst_93[46656];
extern float32_t _cst_94[32];
extern float32_t _cst_95[12288];
extern float32_t _cst_96[139968];
extern float32_t _cst_97[139968];
extern float32_t _cst_98[32];
extern float32_t _cst_99[110592];
extern float32_t _cst_100[139968];
extern float32_t _cst_101[139968];
extern float32_t _cst_102[32];
extern float32_t _cst_103[24576];
extern float32_t _cst_104[46656];
extern float32_t _cst_105[46656];
extern float32_t _cst_106[32];
extern float32_t _cst_107[12288];
extern float32_t _cst_108[139968];
extern float32_t _cst_109[139968];
extern float32_t _cst_110[32];
extern float32_t _cst_111[110592];
extern float32_t _cst_112[139968];
extern float32_t _cst_113[139968];
extern float32_t _cst_114[32];
extern float32_t _cst_115[24576];
extern float32_t _cst_116[46656];
extern float32_t _cst_117[46656];
extern float32_t _cst_118[32];
extern float32_t _cst_119[16384];
extern float32_t _cst_120[186624];
extern float32_t _cst_121[186624];
extern float32_t _cst_122[32];
extern float32_t _cst_123[147456];
extern float32_t _cst_124[186624];
extern float32_t _cst_125[186624];
extern float32_t _cst_126[32];
extern float32_t _cst_127[32768];
extern float32_t _cst_128[10816];
extern float32_t _cst_129[64];
extern float32_t _cst_130[16384];
extern float32_t _cst_131[43264];
extern float32_t _cst_132[43264];
extern float32_t _cst_133[128];
extern float32_t _cst_134[147456];
extern float32_t _cst_135[43264];
extern float32_t _cst_136[43264];
extern float32_t _cst_137[128];
extern float32_t _cst_138[262144];
extern float32_t _cst_139[86528];
extern float32_t _cst_140[86528];
extern float32_t _cst_141[128];
extern int64_t _cst_142[2];
extern int64_t _cst_143[2];
extern int64_t _cst_144[2];
extern int64_t _cst_145[2];
extern int64_t _cst_146[2];
extern int64_t _cst_147[2];
extern int64_t _cst_148[2];
extern int64_t _cst_149[2];
extern int64_t _cst_150[2];
extern int64_t _cst_151[2];
extern int64_t _cst_152[2];
extern int64_t _cst_153[2];
extern int64_t _cst_154[2];
extern int64_t _cst_155[2];
extern int64_t _cst_156[2];
extern int64_t _cst_157[2];
extern int64_t _cst_158[2];
extern int64_t _cst_159[2];
extern float32_t _cst_160[373008384];
extern int32_t _cst_161[1];
extern float32_t _cst_162[1295168];
extern float32_t _cst_163[26432];
extern int32_t _cst_164[49];
extern float32_t _cst_165[1404928];
extern float32_t _cst_166[351232];
extern float32_t _cst_167[25088];
extern float32_t _cst_168[702464];
extern float32_t _cst_169[351232];
extern float32_t _cst_170[6272];
extern float32_t _cst_171[4646400];
extern int32_t _cst_172[1];
extern float32_t _cst_173[193600];
extern float32_t _cst_174[24200];
extern int32_t _cst_175[1];
extern float32_t _cst_176[193600];
extern float32_t _cst_177[193600];
extern float32_t _cst_178[3097600];
extern int32_t _cst_179[1];
extern float32_t _cst_180[193600];
extern float32_t _cst_181[24200];
extern int32_t _cst_182[1];
extern float32_t _cst_183[193600];
extern float32_t _cst_184[193600];
extern float32_t _cst_185[27878400];
extern int32_t _cst_186[1];
extern float32_t _cst_187[1742400];
extern float32_t _cst_188[24200];
extern int32_t _cst_189[9];
extern float32_t _cst_190[193600];
extern float32_t _cst_191[193600];
extern float32_t _cst_192[6195200];
extern int32_t _cst_193[1];
extern float32_t _cst_194[193600];
extern float32_t _cst_195[24200];
extern int32_t _cst_196[1];
extern float32_t _cst_197[193600];
extern float32_t _cst_198[193600];
extern float32_t _cst_199[3097600];
extern int32_t _cst_200[1];
extern float32_t _cst_201[193600];
extern float32_t _cst_202[24200];
extern int32_t _cst_203[1];
extern float32_t _cst_204[193600];
extern float32_t _cst_205[193600];
extern float32_t _cst_206[27878400];
extern int32_t _cst_207[1];
extern float32_t _cst_208[1742400];
extern float32_t _cst_209[24200];
extern int32_t _cst_210[9];
extern float32_t _cst_211[193600];
extern float32_t _cst_212[193600];
extern float32_t _cst_213[12390400];
extern int32_t _cst_214[1];
extern float32_t _cst_215[193600];
extern float32_t _cst_216[24200];
extern int32_t _cst_217[1];
extern float32_t _cst_218[193600];
extern float32_t _cst_219[193600];
extern float32_t _cst_220[12390400];
extern int32_t _cst_221[1];
extern float32_t _cst_222[193600];
extern float32_t _cst_223[24200];
extern int32_t _cst_224[1];
extern float32_t _cst_225[193600];
extern float32_t _cst_226[193600];
extern float32_t _cst_227[24200];
extern float32_t _cst_228[653400];
extern float32_t _cst_229[653400];
extern float32_t _cst_230[48400];
extern float32_t _cst_231[111513600];
extern int32_t _cst_232[1];
extern float32_t _cst_233[1742400];
extern float32_t _cst_234[24200];
extern int32_t _cst_235[9];
extern float32_t _cst_236[193600];
extern float32_t _cst_237[193600];
extern float32_t _cst_238[24200];
extern float32_t _cst_239[653400];
extern float32_t _cst_240[653400];
extern float32_t _cst_241[48400];
extern float32_t _cst_242[5971968];
extern int32_t _cst_243[1];
extern float32_t _cst_244[746496];
extern float32_t _cst_245[23328];
extern int32_t _cst_246[1];
extern float32_t _cst_247[746496];
extern float32_t _cst_248[746496];
extern float32_t _cst_249[2985984];
extern int32_t _cst_250[1];
extern float32_t _cst_251[746496];
extern float32_t _cst_252[23328];
extern int32_t _cst_253[1];
extern float32_t _cst_254[746496];
extern float32_t _cst_255[746496];
extern float32_t _cst_256[26873856];
extern int32_t _cst_257[1];
extern float32_t _cst_258[6718464];
extern float32_t _cst_259[23328];
extern int32_t _cst_260[9];
extern float32_t _cst_261[746496];
extern float32_t _cst_262[746496];
extern float32_t _cst_263[11943936];
extern int32_t _cst_264[1];
extern float32_t _cst_265[746496];
extern float32_t _cst_266[23328];
extern int32_t _cst_267[1];
extern float32_t _cst_268[746496];
extern float32_t _cst_269[746496];
extern float32_t _cst_270[8957952];
extern int32_t _cst_271[1];
extern float32_t _cst_272[746496];
extern float32_t _cst_273[23328];
extern int32_t _cst_274[1];
extern float32_t _cst_275[746496];
extern float32_t _cst_276[746496];
extern float32_t _cst_277[80621568];
extern int32_t _cst_278[1];
extern float32_t _cst_279[6718464];
extern float32_t _cst_280[23328];
extern int32_t _cst_281[9];
extern float32_t _cst_282[746496];
extern float32_t _cst_283[746496];
extern float32_t _cst_284[17915904];
extern int32_t _cst_285[1];
extern float32_t _cst_286[746496];
extern float32_t _cst_287[23328];
extern int32_t _cst_288[1];
extern float32_t _cst_289[746496];
extern float32_t _cst_290[746496];
extern float32_t _cst_291[8957952];
extern int32_t _cst_292[1];
extern float32_t _cst_293[746496];
extern float32_t _cst_294[23328];
extern int32_t _cst_295[1];
extern float32_t _cst_296[746496];
extern float32_t _cst_297[746496];
extern float32_t _cst_298[80621568];
extern int32_t _cst_299[1];
extern float32_t _cst_300[6718464];
extern float32_t _cst_301[23328];
extern int32_t _cst_302[9];
extern float32_t _cst_303[746496];
extern float32_t _cst_304[746496];
extern float32_t _cst_305[17915904];
extern int32_t _cst_306[1];
extern float32_t _cst_307[746496];
extern float32_t _cst_308[23328];
extern int32_t _cst_309[1];
extern float32_t _cst_310[746496];
extern float32_t _cst_311[746496];
extern float32_t _cst_312[11943936];
extern int32_t _cst_313[1];
extern float32_t _cst_314[746496];
extern float32_t _cst_315[23328];
extern int32_t _cst_316[1];
extern float32_t _cst_317[746496];
extern float32_t _cst_318[746496];
extern float32_t _cst_319[23328];
extern float32_t _cst_320[303264];
extern float32_t _cst_321[303264];
extern float32_t _cst_322[186624];
extern float32_t _cst_323[107495424];
extern int32_t _cst_324[1];
extern float32_t _cst_325[6718464];
extern float32_t _cst_326[23328];
extern int32_t _cst_327[9];
extern float32_t _cst_328[746496];
extern float32_t _cst_329[746496];
extern float32_t _cst_330[23328];
extern float32_t _cst_331[303264];
extern float32_t _cst_332[303264];
extern float32_t _cst_333[186624];
extern float32_t _cst_334[5537792];
extern int32_t _cst_335[1];
extern float32_t _cst_336[1384448];
extern float32_t _cst_337[10816];
extern int32_t _cst_338[1];
extern float32_t _cst_339[2768896];
extern int32_t _cst_340[1];
extern float32_t _cst_341[1384448];
extern float32_t _cst_342[21632];
extern int32_t _cst_343[1];
extern float32_t _cst_344[1384448];
extern float32_t _cst_345[1384448];
extern float32_t _cst_346[24920064];
extern int32_t _cst_347[1];
extern float32_t _cst_348[12460032];
extern float32_t _cst_349[21632];
extern int32_t _cst_350[9];
extern float32_t _cst_351[1384448];
extern float32_t _cst_352[1384448];
extern float32_t _cst_353[44302336];
extern int32_t _cst_354[1];
extern float32_t _cst_355[2768896];
extern float32_t _cst_356[21632];
extern int32_t _cst_357[1];
extern float32_t _cst_358[2768896];
extern float32_t _cst_359[2768896];
float32_t _cst_360 = 0.005917159763313609467373;
extern float32_t _cst_361[21632];
extern float32_t _cst_362[128];
extern int32_t _cst_363[1];
extern float32_t _cst_364[557056];
extern int32_t _cst_365[8];
extern float32_t _cst_366[1000];
float32_t _cst_367 = -1;
float32_t _cst_368 = -1;
float64_t _cst_369 = -3.809199432496630510769;
float32_t _cst_370 = -3.809199432496630510769;
float64_t _cst_371 = 2.460940868770910228136;
float32_t _cst_372 = 2.460940868770910228136;
float64_t _cst_373 = -1.430304794543664215212;
float32_t _cst_374 = -1.430304794543664215212;
float64_t _cst_375 = 2.944661935353764636858;
float32_t _cst_376 = 2.944661935353764636858;
float32_t _cst_377 = -1;
float32_t _cst_378 = -1;
float32_t _cst_379 = -1;
float32_t _cst_380 = -1;
float64_t _cst_381 = -0.0001600280537250875771867;
float32_t _cst_382 = -0.0001600280537250875771867;
float64_t _cst_383 = 0.003032478474127557870749;
float32_t _cst_384 = 0.003032478474127557870749;
float64_t _cst_385 = 0.1365828361194337536855;
float32_t _cst_386 = 0.1365828361194337536855;
float64_t _cst_387 = -0.02219735858216702675816;
float64_t _cst_388 = 0.5685231134608953462717;
float32_t _cst_389 = 0.5685231134608953462717;
float64_t _cst_390 = -0.5558785316215136829143;
float64_t _cst_391 = 1.614771079042867985009;
float32_t _cst_392 = 1.614771079042867985009;
float64_t _cst_393 = -0.6164083583294512891371;
float32_t _cst_394 = -1;
float32_t _cst_395 = -1;
float32_t _cst_396 = -1;
float32_t _cst_397 = -1;
float64_t _cst_398 = 0.0001111119162030077897477;
float32_t _cst_399 = 0.0001111119162030077897477;
float64_t _cst_400 = 0.006507995190210730772351;
float32_t _cst_401 = 0.006507995190210730772351;
float64_t _cst_402 = -0.0009371069270347270278171;
float32_t _cst_403 = -0.0009371069270347270278171;
float64_t _cst_404 = 0.1056744718173614761003;
float32_t _cst_405 = 0.1056744718173614761003;
float64_t _cst_406 = -0.03691063940349948585551;
float32_t _cst_407 = -0.03691063940349948585551;
float64_t _cst_408 = 0.6334139843709288841822;
float32_t _cst_409 = 0.6334139843709288841822;
float64_t _cst_410 = -0.2078597158810965850329;
float32_t _cst_411 = -0.2078597158810965850329;
float32_t _cst_412 = 0.5;
float32_t _cst_413 = 0.01000000000000000020817;
float32_t _cst_414 = 0.01000000000000000020817;
float32_t _cst_415 = 0.01000000000000000020817;
float32_t _cst_416 = 0.01000000000000000020817;
float32_t _cst_417 = 0.01000000000000000020817;
float32_t _cst_418 = 0.01000000000000000020817;
float32_t _cst_419 = 0.01000000000000000020817;
float32_t _cst_420 = 0.01000000000000000020817;
float32_t _cst_421 = 0.01000000000000000020817;
float32_t _cst_422 = 0.01000000000000000020817;
float32_t _cst_423 = 0.01000000000000000020817;
float32_t _cst_424 = 0.01000000000000000020817;
float32_t _cst_425 = 0.01000000000000000020817;
float32_t _cst_426 = 0.01000000000000000020817;
float32_t _cst_427 = 0.01000000000000000020817;
float32_t _cst_428 = 0.01000000000000000020817;
float32_t _cst_429 = 0.01000000000000000020817;
float32_t _cst_430 = 0.01000000000000000020817;
CIPHERTEXT App_relu(CIPHERTEXT input_ct0, CIPHERTEXT input_ct1, uint32_t mask_len);
CIPHERTEXT Rotate(CIPHERTEXT ciph, int32_t rot_idx);
CIPHERTEXT Relinearize(CIPHERTEXT3 ciph);

bool Main_graph() {
  CIPHERTEXT input_0[6];
  CIPHERTEXT VS_out_conv1_1[192];
  CIPHERTEXT VS_out_conv_halo1_2[192];
  int32_t mesh_y_n1_3;
  int32_t mesh_z_n1_4;
  CIPHERTEXT input_dup_n34_5;
  int32_t bs_input_n34_6;
  CIPHERTEXT input_block_n34_7[49];
  int32_t mesh_x_n1_8;
  CIPHERTEXT result_n35_9;
  int32_t num_grid_n35_10;
  CIPHERTEXT result_grid_n35_11;
  int32_t cap_block_n35_12;
  int32_t siv_n1_13;
  CIPHERTEXT x_row35_14;
  CIPHERTEXT comb_row_result36_15;
  int32_t comb_row_lf_index_n36_16;
  int32_t comb_row_index_n36_17;
  CIPHERTEXT comb_rc_result36_18;
  int32_t comb_rc_lf_index_n36_19;
  int32_t comb_rc_index_n36_20;
  int32_t reshardm_n1_21;
  CIPHERTEXT output_reshard1_22[48];
  CIPHERTEXT VS_out_relu1_23[48];
  int32_t mesh_y_n1_24;
  int32_t mesh_z_n1_25;
  CIPHERTEXT VS_out_avp1_26[48];
  int32_t mesh_y_n1_27;
  int32_t mesh_z_n1_28;
  CIPHERTEXT tmp_row_add36_29;
  CIPHERTEXT orig_result36_30;
  CIPHERTEXT comb_row_result37_31;
  int32_t comb_row_lf_index_n37_32;
  int32_t comb_row_index_n37_33;
  CIPHERTEXT comb_rc_result37_34;
  int32_t comb_rc_lf_index_n37_35;
  int32_t comb_rc_index_n37_36;
  CIPHERTEXT ss_result37_37;
  int32_t comb_cc_index_n37_38;
  int32_t reshardm_n1_39;
  CIPHERTEXT output_reshard1_40[12];
  CIPHERTEXT VS_out_conv2_41[2];
  CIPHERTEXT VS_out_conv_halo2_42[2];
  int32_t mesh_y_n2_43;
  int32_t mesh_z_n2_44;
  CIPHERTEXT input_dup_n37_45;
  int32_t bs_input_n37_46;
  CIPHERTEXT input_block_n37_47[1];
  int32_t mesh_x_n2_48;
  CIPHERTEXT result_n38_49;
  int32_t num_grid_n38_50;
  CIPHERTEXT result_grid_n38_51;
  int32_t cap_block_n38_52;
  CIPHERTEXT VS_out_relu2_53[2];
  int32_t mesh_y_n2_54;
  int32_t mesh_z_n2_55;
  CIPHERTEXT VS_out_conv3_56[8];
  CIPHERTEXT VS_out_conv_halo3_57[8];
  int32_t mesh_y_n3_58;
  int32_t mesh_z_n3_59;
  CIPHERTEXT input_dup_n38_60;
  int32_t bs_input_n38_61;
  CIPHERTEXT input_block_n38_62[1];
  int32_t mesh_x_n3_63;
  CIPHERTEXT result_n39_64;
  int32_t num_grid_n39_65;
  CIPHERTEXT result_grid_n39_66;
  int32_t cap_block_n39_67;
  CIPHERTEXT VS_out_conv4_68[8];
  CIPHERTEXT VS_out_conv_halo4_69[8];
  int32_t mesh_y_n4_70;
  int32_t mesh_z_n4_71;
  CIPHERTEXT input_dup_n39_72;
  int32_t bs_input_n39_73;
  CIPHERTEXT input_block_n39_74[9];
  int32_t mesh_x_n4_75;
  CIPHERTEXT result_n40_76;
  int32_t num_grid_n40_77;
  CIPHERTEXT result_grid_n40_78;
  int32_t cap_block_n40_79;
  int32_t concat_op0_n5_80;
  CIPHERTEXT VS_out_cocat5_81[16];
  int32_t concat_op1_n5_82;
  CIPHERTEXT VS_out_relu5_83[16];
  int32_t mesh_y_n5_84;
  int32_t mesh_z_n5_85;
  CIPHERTEXT VS_out_conv6_86[2];
  CIPHERTEXT VS_out_conv_halo6_87[2];
  int32_t mesh_y_n6_88;
  int32_t mesh_z_n6_89;
  CIPHERTEXT input_dup_n40_90;
  int32_t bs_input_n40_91;
  CIPHERTEXT input_block_n40_92[1];
  int32_t mesh_x_n6_93;
  CIPHERTEXT result_n41_94;
  int32_t num_grid_n41_95;
  CIPHERTEXT result_grid_n41_96;
  int32_t cap_block_n41_97;
  CIPHERTEXT VS_out_relu6_98[2];
  int32_t mesh_y_n6_99;
  int32_t mesh_z_n6_100;
  CIPHERTEXT VS_out_conv7_101[8];
  CIPHERTEXT VS_out_conv_halo7_102[8];
  int32_t mesh_y_n7_103;
  int32_t mesh_z_n7_104;
  CIPHERTEXT input_dup_n41_105;
  int32_t bs_input_n41_106;
  CIPHERTEXT input_block_n41_107[1];
  int32_t mesh_x_n7_108;
  CIPHERTEXT result_n42_109;
  int32_t num_grid_n42_110;
  CIPHERTEXT result_grid_n42_111;
  int32_t cap_block_n42_112;
  CIPHERTEXT VS_out_conv8_113[8];
  CIPHERTEXT VS_out_conv_halo8_114[8];
  int32_t mesh_y_n8_115;
  int32_t mesh_z_n8_116;
  CIPHERTEXT input_dup_n42_117;
  int32_t bs_input_n42_118;
  CIPHERTEXT input_block_n42_119[9];
  int32_t mesh_x_n8_120;
  CIPHERTEXT result_n43_121;
  int32_t num_grid_n43_122;
  CIPHERTEXT result_grid_n43_123;
  int32_t cap_block_n43_124;
  int32_t concat_op0_n9_125;
  CIPHERTEXT VS_out_cocat9_126[16];
  int32_t concat_op1_n9_127;
  CIPHERTEXT VS_out_relu9_128[16];
  int32_t mesh_y_n9_129;
  int32_t mesh_z_n9_130;
  CIPHERTEXT VS_out_conv10_131[4];
  CIPHERTEXT VS_out_conv_halo10_132[4];
  int32_t mesh_y_n10_133;
  int32_t mesh_z_n10_134;
  CIPHERTEXT input_dup_n43_135;
  int32_t bs_input_n43_136;
  CIPHERTEXT input_block_n43_137[1];
  int32_t mesh_x_n10_138;
  CIPHERTEXT result_n44_139;
  int32_t num_grid_n44_140;
  CIPHERTEXT result_grid_n44_141;
  int32_t cap_block_n44_142;
  CIPHERTEXT VS_out_relu10_143[4];
  int32_t mesh_y_n10_144;
  int32_t mesh_z_n10_145;
  CIPHERTEXT VS_out_conv11_146[16];
  CIPHERTEXT VS_out_conv_halo11_147[16];
  int32_t mesh_y_n11_148;
  int32_t mesh_z_n11_149;
  CIPHERTEXT input_dup_n44_150;
  int32_t bs_input_n44_151;
  CIPHERTEXT input_block_n44_152[1];
  int32_t mesh_x_n11_153;
  CIPHERTEXT result_n45_154;
  int32_t num_grid_n45_155;
  CIPHERTEXT result_grid_n45_156;
  int32_t cap_block_n45_157;
  CIPHERTEXT VS_out_avp11_158[16];
  int32_t mesh_y_n11_159;
  int32_t mesh_z_n11_160;
  CIPHERTEXT tmp_row_add45_161;
  CIPHERTEXT orig_result45_162;
  CIPHERTEXT comb_row_result46_163;
  int32_t comb_row_index_n46_164;
  CIPHERTEXT comb_rc_result46_165;
  int32_t comb_rc_index_n46_166;
  CIPHERTEXT ss_result46_167;
  int32_t comb_cc_lf_index_n46_168;
  int32_t comb_cc_index_n46_169;
  int32_t reshardm_n11_170;
  CIPHERTEXT output_reshard11_171[4];
  CIPHERTEXT VS_out_conv12_172[16];
  CIPHERTEXT VS_out_conv_halo12_173[16];
  int32_t mesh_y_n12_174;
  int32_t mesh_z_n12_175;
  CIPHERTEXT input_dup_n46_176;
  int32_t bs_input_n46_177;
  CIPHERTEXT input_block_n46_178[9];
  int32_t mesh_x_n12_179;
  CIPHERTEXT result_n47_180;
  int32_t num_grid_n47_181;
  CIPHERTEXT result_grid_n47_182;
  int32_t cap_block_n47_183;
  CIPHERTEXT VS_out_avp12_184[16];
  int32_t mesh_y_n12_185;
  int32_t mesh_z_n12_186;
  CIPHERTEXT tmp_row_add47_187;
  CIPHERTEXT orig_result47_188;
  CIPHERTEXT comb_row_result48_189;
  int32_t comb_row_index_n48_190;
  CIPHERTEXT comb_rc_result48_191;
  int32_t comb_rc_index_n48_192;
  CIPHERTEXT ss_result48_193;
  int32_t comb_cc_lf_index_n48_194;
  int32_t comb_cc_index_n48_195;
  int32_t reshardm_n12_196;
  CIPHERTEXT output_reshard12_197[4];
  int32_t concat_op0_n13_198;
  CIPHERTEXT VS_out_cocat13_199[8];
  int32_t concat_op1_n13_200;
  CIPHERTEXT VS_out_relu13_201[8];
  int32_t mesh_y_n13_202;
  int32_t mesh_z_n13_203;
  CIPHERTEXT VS_out_conv14_204[1];
  CIPHERTEXT VS_out_conv_halo14_205[1];
  int32_t mesh_y_n14_206;
  int32_t mesh_z_n14_207;
  CIPHERTEXT input_dup_n48_208;
  int32_t bs_input_n48_209;
  CIPHERTEXT input_block_n48_210[1];
  int32_t mesh_x_n14_211;
  CIPHERTEXT result_n49_212;
  int32_t num_grid_n49_213;
  CIPHERTEXT result_grid_n49_214;
  int32_t cap_block_n49_215;
  CIPHERTEXT VS_out_conv15_216[4];
  CIPHERTEXT VS_out_conv_halo15_217[4];
  int32_t mesh_y_n15_218;
  int32_t mesh_z_n15_219;
  CIPHERTEXT input_dup_n49_220;
  int32_t bs_input_n49_221;
  CIPHERTEXT input_block_n49_222[1];
  int32_t mesh_x_n15_223;
  CIPHERTEXT result_n50_224;
  int32_t num_grid_n50_225;
  CIPHERTEXT result_grid_n50_226;
  int32_t cap_block_n50_227;
  CIPHERTEXT VS_out_conv16_228[4];
  CIPHERTEXT VS_out_conv_halo16_229[4];
  int32_t mesh_y_n16_230;
  int32_t mesh_z_n16_231;
  CIPHERTEXT input_dup_n50_232;
  int32_t bs_input_n50_233;
  CIPHERTEXT input_block_n50_234[9];
  int32_t mesh_x_n16_235;
  CIPHERTEXT result_n51_236;
  int32_t num_grid_n51_237;
  CIPHERTEXT result_grid_n51_238;
  int32_t cap_block_n51_239;
  int32_t concat_op0_n17_240;
  CIPHERTEXT VS_out_cocat17_241[8];
  int32_t concat_op1_n17_242;
  CIPHERTEXT VS_out_relu17_243[8];
  int32_t mesh_y_n17_244;
  int32_t mesh_z_n17_245;
  CIPHERTEXT VS_out_conv18_246[2];
  CIPHERTEXT VS_out_conv_halo18_247[2];
  int32_t mesh_y_n18_248;
  int32_t mesh_z_n18_249;
  CIPHERTEXT input_dup_n51_250;
  int32_t bs_input_n51_251;
  CIPHERTEXT input_block_n51_252[1];
  int32_t mesh_x_n18_253;
  CIPHERTEXT result_n52_254;
  int32_t num_grid_n52_255;
  CIPHERTEXT result_grid_n52_256;
  int32_t cap_block_n52_257;
  CIPHERTEXT VS_out_relu18_258[2];
  int32_t mesh_y_n18_259;
  int32_t mesh_z_n18_260;
  CIPHERTEXT VS_out_conv19_261[6];
  CIPHERTEXT VS_out_conv_halo19_262[6];
  int32_t mesh_y_n19_263;
  int32_t mesh_z_n19_264;
  CIPHERTEXT input_dup_n52_265;
  int32_t bs_input_n52_266;
  CIPHERTEXT input_block_n52_267[1];
  int32_t mesh_x_n19_268;
  CIPHERTEXT result_n53_269;
  int32_t num_grid_n53_270;
  CIPHERTEXT result_grid_n53_271;
  int32_t cap_block_n53_272;
  CIPHERTEXT VS_out_conv20_273[6];
  CIPHERTEXT VS_out_conv_halo20_274[6];
  int32_t mesh_y_n20_275;
  int32_t mesh_z_n20_276;
  CIPHERTEXT input_dup_n53_277;
  int32_t bs_input_n53_278;
  CIPHERTEXT input_block_n53_279[9];
  int32_t mesh_x_n20_280;
  CIPHERTEXT result_n54_281;
  int32_t num_grid_n54_282;
  CIPHERTEXT result_grid_n54_283;
  int32_t cap_block_n54_284;
  int32_t concat_op0_n21_285;
  CIPHERTEXT VS_out_cocat21_286[12];
  int32_t concat_op1_n21_287;
  CIPHERTEXT VS_out_relu21_288[12];
  int32_t mesh_y_n21_289;
  int32_t mesh_z_n21_290;
  CIPHERTEXT VS_out_conv22_291[2];
  CIPHERTEXT VS_out_conv_halo22_292[2];
  int32_t mesh_y_n22_293;
  int32_t mesh_z_n22_294;
  CIPHERTEXT input_dup_n54_295;
  int32_t bs_input_n54_296;
  CIPHERTEXT input_block_n54_297[1];
  int32_t mesh_x_n22_298;
  CIPHERTEXT result_n55_299;
  int32_t num_grid_n55_300;
  CIPHERTEXT result_grid_n55_301;
  int32_t cap_block_n55_302;
  CIPHERTEXT VS_out_relu22_303[2];
  int32_t mesh_y_n22_304;
  int32_t mesh_z_n22_305;
  CIPHERTEXT VS_out_conv23_306[6];
  CIPHERTEXT VS_out_conv_halo23_307[6];
  int32_t mesh_y_n23_308;
  int32_t mesh_z_n23_309;
  CIPHERTEXT input_dup_n55_310;
  int32_t bs_input_n55_311;
  CIPHERTEXT input_block_n55_312[1];
  int32_t mesh_x_n23_313;
  CIPHERTEXT result_n56_314;
  int32_t num_grid_n56_315;
  CIPHERTEXT result_grid_n56_316;
  int32_t cap_block_n56_317;
  CIPHERTEXT VS_out_conv24_318[6];
  CIPHERTEXT VS_out_conv_halo24_319[6];
  int32_t mesh_y_n24_320;
  int32_t mesh_z_n24_321;
  CIPHERTEXT input_dup_n56_322;
  int32_t bs_input_n56_323;
  CIPHERTEXT input_block_n56_324[9];
  int32_t mesh_x_n24_325;
  CIPHERTEXT result_n57_326;
  int32_t num_grid_n57_327;
  CIPHERTEXT result_grid_n57_328;
  int32_t cap_block_n57_329;
  int32_t concat_op0_n25_330;
  CIPHERTEXT VS_out_cocat25_331[12];
  int32_t concat_op1_n25_332;
  CIPHERTEXT VS_out_relu25_333[12];
  int32_t mesh_y_n25_334;
  int32_t mesh_z_n25_335;
  CIPHERTEXT VS_out_conv26_336[2];
  CIPHERTEXT VS_out_conv_halo26_337[2];
  int32_t mesh_y_n26_338;
  int32_t mesh_z_n26_339;
  CIPHERTEXT input_dup_n57_340;
  int32_t bs_input_n57_341;
  CIPHERTEXT input_block_n57_342[1];
  int32_t mesh_x_n26_343;
  CIPHERTEXT result_n58_344;
  int32_t num_grid_n58_345;
  CIPHERTEXT result_grid_n58_346;
  int32_t cap_block_n58_347;
  CIPHERTEXT VS_out_relu26_348[2];
  int32_t mesh_y_n26_349;
  int32_t mesh_z_n26_350;
  CIPHERTEXT VS_out_conv27_351[8];
  CIPHERTEXT VS_out_conv_halo27_352[8];
  int32_t mesh_y_n27_353;
  int32_t mesh_z_n27_354;
  CIPHERTEXT input_dup_n58_355;
  int32_t bs_input_n58_356;
  CIPHERTEXT input_block_n58_357[1];
  int32_t mesh_x_n27_358;
  CIPHERTEXT result_n59_359;
  int32_t num_grid_n59_360;
  CIPHERTEXT result_grid_n59_361;
  int32_t cap_block_n59_362;
  CIPHERTEXT VS_out_avp27_363[8];
  int32_t mesh_y_n27_364;
  int32_t mesh_z_n27_365;
  CIPHERTEXT tmp_row_add59_366;
  CIPHERTEXT orig_result59_367;
  CIPHERTEXT comb_row_result60_368;
  int32_t comb_row_index_n60_369;
  CIPHERTEXT comb_rc_result60_370;
  int32_t comb_rc_index_n60_371;
  CIPHERTEXT ss_result60_372;
  int32_t comb_cc_lf_index_n60_373;
  int32_t comb_cc_index_n60_374;
  int32_t reshardm_n27_375;
  CIPHERTEXT output_reshard27_376[2];
  CIPHERTEXT VS_out_conv28_377[8];
  CIPHERTEXT VS_out_conv_halo28_378[8];
  int32_t mesh_y_n28_379;
  int32_t mesh_z_n28_380;
  CIPHERTEXT input_dup_n60_381;
  int32_t bs_input_n60_382;
  CIPHERTEXT input_block_n60_383[9];
  int32_t mesh_x_n28_384;
  CIPHERTEXT result_n61_385;
  int32_t num_grid_n61_386;
  CIPHERTEXT result_grid_n61_387;
  int32_t cap_block_n61_388;
  CIPHERTEXT VS_out_avp28_389[8];
  int32_t mesh_y_n28_390;
  int32_t mesh_z_n28_391;
  CIPHERTEXT tmp_row_add61_392;
  CIPHERTEXT orig_result61_393;
  CIPHERTEXT comb_row_result62_394;
  int32_t comb_row_index_n62_395;
  CIPHERTEXT comb_rc_result62_396;
  int32_t comb_rc_index_n62_397;
  CIPHERTEXT ss_result62_398;
  int32_t comb_cc_lf_index_n62_399;
  int32_t comb_cc_index_n62_400;
  int32_t reshardm_n28_401;
  CIPHERTEXT output_reshard28_402[2];
  int32_t concat_op0_n29_403;
  CIPHERTEXT VS_out_cocat29_404[4];
  int32_t concat_op1_n29_405;
  CIPHERTEXT VS_out_relu29_406[4];
  int32_t mesh_y_n29_407;
  int32_t mesh_z_n29_408;
  CIPHERTEXT VS_out_conv30_409[1];
  CIPHERTEXT VS_out_conv_halo30_410[1];
  int32_t mesh_y_n30_411;
  int32_t mesh_z_n30_412;
  int32_t mesh_x_n30_413;
  CIPHERTEXT tmp_result_n63_414;
  CIPHERTEXT input_dup_n63_415;
  int32_t index_cin_n63_416;
  int32_t index_khw_n63_417;
  CIPHERTEXT VS_out_conv31_418[2];
  CIPHERTEXT VS_out_conv_halo31_419[2];
  int32_t mesh_y_n31_420;
  int32_t mesh_z_n31_421;
  CIPHERTEXT input_dup_n63_422;
  int32_t bs_input_n63_423;
  CIPHERTEXT input_block_n63_424[1];
  int32_t mesh_x_n31_425;
  CIPHERTEXT result_n64_426;
  int32_t num_grid_n64_427;
  CIPHERTEXT result_grid_n64_428;
  int32_t cap_block_n64_429;
  CIPHERTEXT VS_out_conv32_430[2];
  CIPHERTEXT VS_out_conv_halo32_431[2];
  int32_t mesh_y_n32_432;
  int32_t mesh_z_n32_433;
  CIPHERTEXT input_dup_n64_434;
  int32_t bs_input_n64_435;
  CIPHERTEXT input_block_n64_436[9];
  int32_t mesh_x_n32_437;
  CIPHERTEXT result_n65_438;
  int32_t num_grid_n65_439;
  CIPHERTEXT result_grid_n65_440;
  int32_t cap_block_n65_441;
  int32_t concat_op0_n33_442;
  CIPHERTEXT VS_out_cocat33_443[4];
  int32_t concat_op1_n33_444;
  CIPHERTEXT VS_out_relu33_445[4];
  int32_t mesh_y_n33_446;
  int32_t mesh_z_n33_447;
  CIPHERTEXT VS_out_conv34_448[4];
  CIPHERTEXT VS_out_conv_halo34_449[4];
  int32_t mesh_y_n34_450;
  int32_t mesh_z_n34_451;
  CIPHERTEXT input_dup_n65_452;
  int32_t bs_input_n65_453;
  CIPHERTEXT input_block_n65_454[1];
  int32_t mesh_x_n34_455;
  CIPHERTEXT result_n66_456;
  int32_t num_grid_n66_457;
  CIPHERTEXT result_grid_n66_458;
  int32_t cap_block_n66_459;
  CIPHERTEXT VS_out_relu34_460[4];
  int32_t mesh_y_n34_461;
  int32_t mesh_z_n34_462;
  CIPHERTEXT VS_out_gap34_463[3];
  int32_t mesh_y_n34_464;
  int32_t mesh_z_n34_465;
  int32_t gap_sum_index_n66_466;
  CIPHERTEXT gap_result66_467;
  CIPHERTEXT orig_result66_468;
  CIPHERTEXT ss_result67_469;
  int32_t comb_cc_index_n67_470;
  CIPHERTEXT input_dup_n67_471;
  int32_t bs_input_n67_472;
  CIPHERTEXT input_block_n67_473[8];
  CIPHERTEXT gemm_result_n68_474;
  int32_t gs_n68_475;
  CIPHERTEXT block_result_476;
  int32_t bs_n68_477;
  CIPHERTEXT reduce_intra_478;
  int32_t ri_n68_479;
  CIPHERTEXT output_480;
  CIPHERTEXT _ckks_gen_tmp_102_481;
  CIPHERTEXT _ckks_gen_tmp_221_482;
  CIPHERTEXT _ckks_gen_tmp_274_483;
  CIPHERTEXT _ckks_gen_tmp_465_484;
  CIPHERTEXT _ckks_gen_tmp_514_485;
  CIPHERTEXT _ckks_gen_tmp_567_486;
  CIPHERTEXT _ckks_gen_tmp_780_487;
  CIPHERTEXT _ckks_gen_tmp_1045_488;
  CIPHERTEXT _ckks_gen_tmp_1243_489;
  CIPHERTEXT _ckks_gen_tmp_1557_490;
  CIPHERTEXT _ckks_gen_tmp_1822_491;
  CIPHERTEXT _ckks_gen_tmp_2020_492;
  CIPHERTEXT _ckks_gen_tmp_2334_493;
  CIPHERTEXT _ckks_gen_tmp_2599_494;
  CIPHERTEXT _ckks_gen_tmp_2746_495;
  CIPHERTEXT _ckks_gen_tmp_2777_496;
  CIPHERTEXT _ckks_gen_tmp_2810_497;
  CIPHERTEXT _ckks_gen_tmp_2863_498;
  CIPHERTEXT _ckks_gen_tmp_3042_499;
  CIPHERTEXT _ckks_gen_tmp_3189_500;
  CIPHERTEXT _ckks_gen_tmp_3220_501;
  CIPHERTEXT _ckks_gen_tmp_3253_502;
  CIPHERTEXT _ckks_gen_tmp_3306_503;
  CIPHERTEXT _ckks_gen_tmp_3601_504;
  CIPHERTEXT _ckks_gen_tmp_3821_505;
  CIPHERTEXT _ckks_gen_tmp_4012_506;
  CIPHERTEXT _ckks_gen_tmp_4326_507;
  CIPHERTEXT _ckks_gen_tmp_4591_508;
  CIPHERTEXT _ckks_gen_tmp_4789_509;
  CIPHERTEXT _ckks_gen_tmp_5103_510;
  CIPHERTEXT _ckks_gen_tmp_5368_511;
  CIPHERTEXT _ckks_gen_tmp_5566_512;
  CIPHERTEXT _ckks_gen_tmp_5880_513;
  CIPHERTEXT _ckks_gen_tmp_6145_514;
  CIPHERTEXT _ckks_gen_tmp_6292_515;
  CIPHERTEXT _ckks_gen_tmp_6323_516;
  CIPHERTEXT _ckks_gen_tmp_6356_517;
  CIPHERTEXT _ckks_gen_tmp_6409_518;
  CIPHERTEXT _ckks_gen_tmp_6588_519;
  CIPHERTEXT _ckks_gen_tmp_6735_520;
  CIPHERTEXT _ckks_gen_tmp_6766_521;
  CIPHERTEXT _ckks_gen_tmp_6799_522;
  CIPHERTEXT _ckks_gen_tmp_6852_523;
  CIPHERTEXT _ckks_gen_tmp_7128_524;
  CIPHERTEXT _ckks_gen_tmp_7307_525;
  CIPHERTEXT _ckks_gen_tmp_7502_526;
  CIPHERTEXT _ckks_gen_tmp_7816_527;
  CIPHERTEXT _ckks_gen_tmp_8254_528;
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
  int32_t rescale_iv_555;
  int32_t rescale_iv_556;
  int32_t rescale_iv_557;
  int32_t rescale_iv_558;
  int32_t rescale_iv_559;
  int32_t rescale_iv_560;
  int32_t rescale_iv_561;
  MODULUS* _pgen_modulus_562;
  uint32_t _pgen_num_q_563;
  uint32_t _pgen_rns_idx_564;
  PLAINTEXT _pgen_tmp_0_565;
  CIPHERTEXT _pgen_tmp_1_566;
  PLAINTEXT _pgen_tmp_2_567;
  CIPHERTEXT _pgen_tmp_3_568;
  CIPHERTEXT _pgen_tmp_4_569;
  CIPHERTEXT _pgen_tmp_5_570;
  CIPHERTEXT _pgen_tmp_6_571;
  CIPHERTEXT _pgen_tmp_7_572;
  PLAINTEXT _pgen_tmp_8_573;
  CIPHERTEXT _pgen_tmp_9_574;
  CIPHERTEXT _pgen_tmp_10_575;
  PLAINTEXT _pgen_tmp_11_576;
  CIPHERTEXT _pgen_tmp_12_577;
  CIPHERTEXT _pgen_tmp_13_578;
  CIPHERTEXT _pgen_tmp_14_579;
  CIPHERTEXT _pgen_tmp_15_580;
  CIPHERTEXT _pgen_tmp_16_581;
  CIPHERTEXT _pgen_tmp_17_582;
  CIPHERTEXT _pgen_tmp_18_583;
  CIPHERTEXT _pgen_tmp_19_584;
  CIPHERTEXT _pgen_tmp_20_585;
  CIPHERTEXT _pgen_tmp_21_586;
  CIPHERTEXT _pgen_tmp_22_587;
  PLAINTEXT _pgen_tmp_23_588;
  CIPHERTEXT _pgen_tmp_24_589;
  CIPHERTEXT _pgen_tmp_25_590;
  CIPHERTEXT _pgen_tmp_26_591;
  PLAINTEXT _pgen_tmp_27_592;
  CIPHERTEXT _pgen_tmp_28_593;
  PLAINTEXT _pgen_tmp_29_594;
  CIPHERTEXT _pgen_tmp_30_595;
  CIPHERTEXT _pgen_tmp_31_596;
  PLAINTEXT _pgen_tmp_32_597;
  CIPHERTEXT _pgen_tmp_33_598;
  CIPHERTEXT _pgen_tmp_34_599;
  PLAINTEXT _pgen_tmp_35_600;
  CIPHERTEXT _pgen_tmp_36_601;
  CIPHERTEXT _pgen_tmp_37_602;
  CIPHERTEXT _pgen_tmp_38_603;
  CIPHERTEXT _pgen_tmp_39_604;
  CIPHERTEXT _pgen_tmp_40_605;
  CIPHERTEXT _pgen_tmp_41_606;
  CIPHERTEXT _pgen_tmp_42_607;
  CIPHERTEXT _pgen_tmp_43_608;
  CIPHERTEXT _pgen_tmp_44_609;
  PLAINTEXT _pgen_tmp_45_610;
  CIPHERTEXT _pgen_tmp_46_611;
  CIPHERTEXT _pgen_tmp_47_612;
  CIPHERTEXT _pgen_tmp_48_613;
  PLAINTEXT _pgen_tmp_49_614;
  CIPHERTEXT _pgen_tmp_50_615;
  CIPHERTEXT _pgen_tmp_51_616;
  PLAINTEXT _pgen_tmp_52_617;
  CIPHERTEXT _pgen_tmp_53_618;
  PLAINTEXT _pgen_tmp_54_619;
  CIPHERTEXT _pgen_tmp_55_620;
  CIPHERTEXT _pgen_tmp_56_621;
  CIPHERTEXT _pgen_tmp_57_622;
  CIPHERTEXT _pgen_tmp_58_623;
  CIPHERTEXT _pgen_tmp_59_624;
  PLAINTEXT _pgen_tmp_60_625;
  CIPHERTEXT _pgen_tmp_61_626;
  CIPHERTEXT _pgen_tmp_62_627;
  CIPHERTEXT _pgen_tmp_63_628;
  PLAINTEXT _pgen_tmp_64_629;
  CIPHERTEXT _pgen_tmp_65_630;
  CIPHERTEXT _pgen_tmp_66_631;
  CIPHERTEXT _pgen_tmp_67_632;
  PLAINTEXT _pgen_tmp_68_633;
  CIPHERTEXT _pgen_tmp_69_634;
  CIPHERTEXT _pgen_tmp_70_635;
  PLAINTEXT _pgen_tmp_71_636;
  CIPHERTEXT _pgen_tmp_72_637;
  PLAINTEXT _pgen_tmp_73_638;
  CIPHERTEXT _pgen_tmp_74_639;
  CIPHERTEXT _pgen_tmp_75_640;
  CIPHERTEXT _pgen_tmp_76_641;
  CIPHERTEXT _pgen_tmp_77_642;
  PLAINTEXT _pgen_tmp_78_643;
  CIPHERTEXT _pgen_tmp_79_644;
  CIPHERTEXT _pgen_tmp_80_645;
  CIPHERTEXT _pgen_tmp_81_646;
  PLAINTEXT _pgen_tmp_82_647;
  CIPHERTEXT _pgen_tmp_83_648;
  CIPHERTEXT _pgen_tmp_84_649;
  PLAINTEXT _pgen_tmp_85_650;
  CIPHERTEXT _pgen_tmp_86_651;
  PLAINTEXT _pgen_tmp_87_652;
  CIPHERTEXT _pgen_tmp_88_653;
  CIPHERTEXT _pgen_tmp_89_654;
  CIPHERTEXT _pgen_tmp_90_655;
  CIPHERTEXT _pgen_tmp_91_656;
  CIPHERTEXT _pgen_tmp_92_657;
  CIPHERTEXT _pgen_tmp_93_658;
  CIPHERTEXT _pgen_tmp_94_659;
  PLAINTEXT _pgen_tmp_95_660;
  CIPHERTEXT _pgen_tmp_96_661;
  CIPHERTEXT _pgen_tmp_97_662;
  CIPHERTEXT _pgen_tmp_98_663;
  PLAINTEXT _pgen_tmp_99_664;
  CIPHERTEXT _pgen_tmp_100_665;
  CIPHERTEXT _pgen_tmp_101_666;
  CIPHERTEXT _pgen_tmp_102_667;
  PLAINTEXT _pgen_tmp_103_668;
  CIPHERTEXT _pgen_tmp_104_669;
  CIPHERTEXT _pgen_tmp_105_670;
  PLAINTEXT _pgen_tmp_106_671;
  CIPHERTEXT _pgen_tmp_107_672;
  PLAINTEXT _pgen_tmp_108_673;
  CIPHERTEXT _pgen_tmp_109_674;
  CIPHERTEXT _pgen_tmp_110_675;
  CIPHERTEXT _pgen_tmp_111_676;
  CIPHERTEXT _pgen_tmp_112_677;
  CIPHERTEXT _pgen_tmp_113_678;
  PLAINTEXT _pgen_tmp_114_679;
  CIPHERTEXT _pgen_tmp_115_680;
  CIPHERTEXT _pgen_tmp_116_681;
  CIPHERTEXT _pgen_tmp_117_682;
  PLAINTEXT _pgen_tmp_118_683;
  CIPHERTEXT _pgen_tmp_119_684;
  CIPHERTEXT _pgen_tmp_120_685;
  CIPHERTEXT _pgen_tmp_121_686;
  PLAINTEXT _pgen_tmp_122_687;
  CIPHERTEXT _pgen_tmp_123_688;
  CIPHERTEXT _pgen_tmp_124_689;
  PLAINTEXT _pgen_tmp_125_690;
  CIPHERTEXT _pgen_tmp_126_691;
  PLAINTEXT _pgen_tmp_127_692;
  CIPHERTEXT _pgen_tmp_128_693;
  CIPHERTEXT _pgen_tmp_129_694;
  CIPHERTEXT _pgen_tmp_130_695;
  CIPHERTEXT _pgen_tmp_131_696;
  PLAINTEXT _pgen_tmp_132_697;
  CIPHERTEXT _pgen_tmp_133_698;
  CIPHERTEXT _pgen_tmp_134_699;
  CIPHERTEXT _pgen_tmp_135_700;
  PLAINTEXT _pgen_tmp_136_701;
  CIPHERTEXT _pgen_tmp_137_702;
  CIPHERTEXT _pgen_tmp_138_703;
  PLAINTEXT _pgen_tmp_139_704;
  CIPHERTEXT _pgen_tmp_140_705;
  PLAINTEXT _pgen_tmp_141_706;
  CIPHERTEXT _pgen_tmp_142_707;
  CIPHERTEXT _pgen_tmp_143_708;
  CIPHERTEXT _pgen_tmp_144_709;
  CIPHERTEXT _pgen_tmp_145_710;
  CIPHERTEXT _pgen_tmp_146_711;
  CIPHERTEXT _pgen_tmp_147_712;
  CIPHERTEXT _pgen_tmp_148_713;
  PLAINTEXT _pgen_tmp_149_714;
  CIPHERTEXT _pgen_tmp_150_715;
  CIPHERTEXT _pgen_tmp_151_716;
  CIPHERTEXT _pgen_tmp_152_717;
  PLAINTEXT _pgen_tmp_153_718;
  CIPHERTEXT _pgen_tmp_154_719;
  CIPHERTEXT _pgen_tmp_155_720;
  CIPHERTEXT _pgen_tmp_156_721;
  PLAINTEXT _pgen_tmp_157_722;
  CIPHERTEXT _pgen_tmp_158_723;
  CIPHERTEXT _pgen_tmp_159_724;
  PLAINTEXT _pgen_tmp_160_725;
  CIPHERTEXT _pgen_tmp_161_726;
  PLAINTEXT _pgen_tmp_162_727;
  CIPHERTEXT _pgen_tmp_163_728;
  CIPHERTEXT _pgen_tmp_164_729;
  CIPHERTEXT _pgen_tmp_165_730;
  CIPHERTEXT _pgen_tmp_166_731;
  CIPHERTEXT _pgen_tmp_167_732;
  PLAINTEXT _pgen_tmp_168_733;
  CIPHERTEXT _pgen_tmp_169_734;
  CIPHERTEXT _pgen_tmp_170_735;
  CIPHERTEXT _pgen_tmp_171_736;
  PLAINTEXT _pgen_tmp_172_737;
  CIPHERTEXT _pgen_tmp_173_738;
  CIPHERTEXT _pgen_tmp_174_739;
  CIPHERTEXT _pgen_tmp_175_740;
  PLAINTEXT _pgen_tmp_176_741;
  CIPHERTEXT _pgen_tmp_177_742;
  CIPHERTEXT _pgen_tmp_178_743;
  PLAINTEXT _pgen_tmp_179_744;
  CIPHERTEXT _pgen_tmp_180_745;
  PLAINTEXT _pgen_tmp_181_746;
  CIPHERTEXT _pgen_tmp_182_747;
  CIPHERTEXT _pgen_tmp_183_748;
  CIPHERTEXT _pgen_tmp_184_749;
  CIPHERTEXT _pgen_tmp_185_750;
  PLAINTEXT _pgen_tmp_186_751;
  CIPHERTEXT _pgen_tmp_187_752;
  PLAINTEXT _pgen_tmp_188_753;
  CIPHERTEXT _pgen_tmp_189_754;
  CIPHERTEXT _pgen_tmp_190_755;
  PLAINTEXT _pgen_tmp_191_756;
  CIPHERTEXT _pgen_tmp_192_757;
  CIPHERTEXT _pgen_tmp_193_758;
  PLAINTEXT _pgen_tmp_194_759;
  CIPHERTEXT _pgen_tmp_195_760;
  CIPHERTEXT _pgen_tmp_196_761;
  CIPHERTEXT _pgen_tmp_197_762;
  CIPHERTEXT _pgen_tmp_198_763;
  CIPHERTEXT _pgen_tmp_199_764;
  CIPHERTEXT _pgen_tmp_200_765;
  CIPHERTEXT _pgen_tmp_201_766;
  CIPHERTEXT _pgen_tmp_202_767;
  CIPHERTEXT _pgen_tmp_203_768;
  CIPHERTEXT _pgen_tmp_204_769;
  PLAINTEXT _pgen_tmp_205_770;
  CIPHERTEXT _pgen_tmp_206_771;
  CIPHERTEXT _pgen_tmp_207_772;
  CIPHERTEXT _pgen_tmp_208_773;
  PLAINTEXT _pgen_tmp_209_774;
  CIPHERTEXT _pgen_tmp_210_775;
  CIPHERTEXT _pgen_tmp_211_776;
  PLAINTEXT _pgen_tmp_212_777;
  CIPHERTEXT _pgen_tmp_213_778;
  PLAINTEXT _pgen_tmp_214_779;
  CIPHERTEXT _pgen_tmp_215_780;
  CIPHERTEXT _pgen_tmp_216_781;
  CIPHERTEXT _pgen_tmp_217_782;
  CIPHERTEXT _pgen_tmp_218_783;
  PLAINTEXT _pgen_tmp_219_784;
  CIPHERTEXT _pgen_tmp_220_785;
  PLAINTEXT _pgen_tmp_221_786;
  CIPHERTEXT _pgen_tmp_222_787;
  CIPHERTEXT _pgen_tmp_223_788;
  PLAINTEXT _pgen_tmp_224_789;
  CIPHERTEXT _pgen_tmp_225_790;
  CIPHERTEXT _pgen_tmp_226_791;
  PLAINTEXT _pgen_tmp_227_792;
  CIPHERTEXT _pgen_tmp_228_793;
  CIPHERTEXT _pgen_tmp_229_794;
  CIPHERTEXT _pgen_tmp_230_795;
  CIPHERTEXT _pgen_tmp_231_796;
  CIPHERTEXT _pgen_tmp_232_797;
  CIPHERTEXT _pgen_tmp_233_798;
  CIPHERTEXT _pgen_tmp_234_799;
  CIPHERTEXT _pgen_tmp_235_800;
  CIPHERTEXT _pgen_tmp_236_801;
  CIPHERTEXT _pgen_tmp_237_802;
  CIPHERTEXT _pgen_tmp_238_803;
  CIPHERTEXT _pgen_tmp_239_804;
  CIPHERTEXT _pgen_tmp_240_805;
  PLAINTEXT _pgen_tmp_241_806;
  CIPHERTEXT _pgen_tmp_242_807;
  CIPHERTEXT _pgen_tmp_243_808;
  CIPHERTEXT _pgen_tmp_244_809;
  PLAINTEXT _pgen_tmp_245_810;
  CIPHERTEXT _pgen_tmp_246_811;
  CIPHERTEXT _pgen_tmp_247_812;
  CIPHERTEXT _pgen_tmp_248_813;
  PLAINTEXT _pgen_tmp_249_814;
  CIPHERTEXT _pgen_tmp_250_815;
  CIPHERTEXT _pgen_tmp_251_816;
  PLAINTEXT _pgen_tmp_252_817;
  CIPHERTEXT _pgen_tmp_253_818;
  PLAINTEXT _pgen_tmp_254_819;
  CIPHERTEXT _pgen_tmp_255_820;
  CIPHERTEXT _pgen_tmp_256_821;
  CIPHERTEXT _pgen_tmp_257_822;
  CIPHERTEXT _pgen_tmp_258_823;
  CIPHERTEXT _pgen_tmp_259_824;
  PLAINTEXT _pgen_tmp_260_825;
  PLAINTEXT _pgen_tmp_261_826;
  CIPHERTEXT _pgen_tmp_262_827;
  CIPHERTEXT _pgen_tmp_263_828;
  CIPHERTEXT _pgen_tmp_264_829;
  PLAINTEXT _pgen_tmp_265_830;
  CIPHERTEXT _pgen_tmp_266_831;
  CIPHERTEXT _pgen_tmp_267_832;
  PLAINTEXT _pgen_tmp_268_833;
  CIPHERTEXT _pgen_tmp_269_834;
  PLAINTEXT _pgen_tmp_270_835;
  CIPHERTEXT _pgen_tmp_271_836;
  CIPHERTEXT _pgen_tmp_272_837;
  CIPHERTEXT _pgen_tmp_273_838;
  CIPHERTEXT _pgen_tmp_274_839;
  PLAINTEXT _pgen_tmp_275_840;
  CIPHERTEXT _pgen_tmp_276_841;
  CIPHERTEXT _pgen_tmp_277_842;
  CIPHERTEXT _pgen_tmp_278_843;
  PLAINTEXT _pgen_tmp_279_844;
  CIPHERTEXT _pgen_tmp_280_845;
  CIPHERTEXT _pgen_tmp_281_846;
  PLAINTEXT _pgen_tmp_282_847;
  CIPHERTEXT _pgen_tmp_283_848;
  PLAINTEXT _pgen_tmp_284_849;
  CIPHERTEXT _pgen_tmp_285_850;
  CIPHERTEXT _pgen_tmp_286_851;
  CIPHERTEXT _pgen_tmp_287_852;
  CIPHERTEXT _pgen_tmp_288_853;
  CIPHERTEXT _pgen_tmp_289_854;
  CIPHERTEXT _pgen_tmp_290_855;
  CIPHERTEXT _pgen_tmp_291_856;
  PLAINTEXT _pgen_tmp_292_857;
  CIPHERTEXT _pgen_tmp_293_858;
  CIPHERTEXT _pgen_tmp_294_859;
  CIPHERTEXT _pgen_tmp_295_860;
  PLAINTEXT _pgen_tmp_296_861;
  CIPHERTEXT _pgen_tmp_297_862;
  CIPHERTEXT _pgen_tmp_298_863;
  CIPHERTEXT _pgen_tmp_299_864;
  PLAINTEXT _pgen_tmp_300_865;
  CIPHERTEXT _pgen_tmp_301_866;
  CIPHERTEXT _pgen_tmp_302_867;
  PLAINTEXT _pgen_tmp_303_868;
  CIPHERTEXT _pgen_tmp_304_869;
  PLAINTEXT _pgen_tmp_305_870;
  CIPHERTEXT _pgen_tmp_306_871;
  CIPHERTEXT _pgen_tmp_307_872;
  CIPHERTEXT _pgen_tmp_308_873;
  CIPHERTEXT _pgen_tmp_309_874;
  CIPHERTEXT _pgen_tmp_310_875;
  PLAINTEXT _pgen_tmp_311_876;
  CIPHERTEXT _pgen_tmp_312_877;
  CIPHERTEXT _pgen_tmp_313_878;
  CIPHERTEXT _pgen_tmp_314_879;
  PLAINTEXT _pgen_tmp_315_880;
  CIPHERTEXT _pgen_tmp_316_881;
  CIPHERTEXT _pgen_tmp_317_882;
  CIPHERTEXT _pgen_tmp_318_883;
  PLAINTEXT _pgen_tmp_319_884;
  CIPHERTEXT _pgen_tmp_320_885;
  CIPHERTEXT _pgen_tmp_321_886;
  PLAINTEXT _pgen_tmp_322_887;
  CIPHERTEXT _pgen_tmp_323_888;
  PLAINTEXT _pgen_tmp_324_889;
  CIPHERTEXT _pgen_tmp_325_890;
  CIPHERTEXT _pgen_tmp_326_891;
  CIPHERTEXT _pgen_tmp_327_892;
  CIPHERTEXT _pgen_tmp_328_893;
  PLAINTEXT _pgen_tmp_329_894;
  CIPHERTEXT _pgen_tmp_330_895;
  CIPHERTEXT _pgen_tmp_331_896;
  CIPHERTEXT _pgen_tmp_332_897;
  PLAINTEXT _pgen_tmp_333_898;
  CIPHERTEXT _pgen_tmp_334_899;
  CIPHERTEXT _pgen_tmp_335_900;
  PLAINTEXT _pgen_tmp_336_901;
  CIPHERTEXT _pgen_tmp_337_902;
  PLAINTEXT _pgen_tmp_338_903;
  CIPHERTEXT _pgen_tmp_339_904;
  CIPHERTEXT _pgen_tmp_340_905;
  CIPHERTEXT _pgen_tmp_341_906;
  CIPHERTEXT _pgen_tmp_342_907;
  CIPHERTEXT _pgen_tmp_343_908;
  CIPHERTEXT _pgen_tmp_344_909;
  CIPHERTEXT _pgen_tmp_345_910;
  PLAINTEXT _pgen_tmp_346_911;
  CIPHERTEXT _pgen_tmp_347_912;
  CIPHERTEXT _pgen_tmp_348_913;
  CIPHERTEXT _pgen_tmp_349_914;
  PLAINTEXT _pgen_tmp_350_915;
  CIPHERTEXT _pgen_tmp_351_916;
  CIPHERTEXT _pgen_tmp_352_917;
  CIPHERTEXT _pgen_tmp_353_918;
  PLAINTEXT _pgen_tmp_354_919;
  CIPHERTEXT _pgen_tmp_355_920;
  CIPHERTEXT _pgen_tmp_356_921;
  PLAINTEXT _pgen_tmp_357_922;
  CIPHERTEXT _pgen_tmp_358_923;
  PLAINTEXT _pgen_tmp_359_924;
  CIPHERTEXT _pgen_tmp_360_925;
  CIPHERTEXT _pgen_tmp_361_926;
  CIPHERTEXT _pgen_tmp_362_927;
  CIPHERTEXT _pgen_tmp_363_928;
  CIPHERTEXT _pgen_tmp_364_929;
  PLAINTEXT _pgen_tmp_365_930;
  CIPHERTEXT _pgen_tmp_366_931;
  CIPHERTEXT _pgen_tmp_367_932;
  CIPHERTEXT _pgen_tmp_368_933;
  PLAINTEXT _pgen_tmp_369_934;
  CIPHERTEXT _pgen_tmp_370_935;
  CIPHERTEXT _pgen_tmp_371_936;
  CIPHERTEXT _pgen_tmp_372_937;
  PLAINTEXT _pgen_tmp_373_938;
  CIPHERTEXT _pgen_tmp_374_939;
  CIPHERTEXT _pgen_tmp_375_940;
  PLAINTEXT _pgen_tmp_376_941;
  CIPHERTEXT _pgen_tmp_377_942;
  PLAINTEXT _pgen_tmp_378_943;
  CIPHERTEXT _pgen_tmp_379_944;
  CIPHERTEXT _pgen_tmp_380_945;
  CIPHERTEXT _pgen_tmp_381_946;
  CIPHERTEXT _pgen_tmp_382_947;
  PLAINTEXT _pgen_tmp_383_948;
  CIPHERTEXT _pgen_tmp_384_949;
  CIPHERTEXT _pgen_tmp_385_950;
  CIPHERTEXT _pgen_tmp_386_951;
  PLAINTEXT _pgen_tmp_387_952;
  CIPHERTEXT _pgen_tmp_388_953;
  CIPHERTEXT _pgen_tmp_389_954;
  PLAINTEXT _pgen_tmp_390_955;
  CIPHERTEXT _pgen_tmp_391_956;
  PLAINTEXT _pgen_tmp_392_957;
  CIPHERTEXT _pgen_tmp_393_958;
  CIPHERTEXT _pgen_tmp_394_959;
  CIPHERTEXT _pgen_tmp_395_960;
  CIPHERTEXT _pgen_tmp_396_961;
  CIPHERTEXT _pgen_tmp_397_962;
  CIPHERTEXT _pgen_tmp_398_963;
  CIPHERTEXT _pgen_tmp_399_964;
  PLAINTEXT _pgen_tmp_400_965;
  CIPHERTEXT _pgen_tmp_401_966;
  CIPHERTEXT _pgen_tmp_402_967;
  CIPHERTEXT _pgen_tmp_403_968;
  PLAINTEXT _pgen_tmp_404_969;
  CIPHERTEXT _pgen_tmp_405_970;
  CIPHERTEXT _pgen_tmp_406_971;
  CIPHERTEXT _pgen_tmp_407_972;
  PLAINTEXT _pgen_tmp_408_973;
  CIPHERTEXT _pgen_tmp_409_974;
  CIPHERTEXT _pgen_tmp_410_975;
  PLAINTEXT _pgen_tmp_411_976;
  CIPHERTEXT _pgen_tmp_412_977;
  PLAINTEXT _pgen_tmp_413_978;
  CIPHERTEXT _pgen_tmp_414_979;
  CIPHERTEXT _pgen_tmp_415_980;
  CIPHERTEXT _pgen_tmp_416_981;
  CIPHERTEXT _pgen_tmp_417_982;
  CIPHERTEXT _pgen_tmp_418_983;
  PLAINTEXT _pgen_tmp_419_984;
  CIPHERTEXT _pgen_tmp_420_985;
  CIPHERTEXT _pgen_tmp_421_986;
  CIPHERTEXT _pgen_tmp_422_987;
  PLAINTEXT _pgen_tmp_423_988;
  CIPHERTEXT _pgen_tmp_424_989;
  CIPHERTEXT _pgen_tmp_425_990;
  CIPHERTEXT _pgen_tmp_426_991;
  PLAINTEXT _pgen_tmp_427_992;
  CIPHERTEXT _pgen_tmp_428_993;
  CIPHERTEXT _pgen_tmp_429_994;
  PLAINTEXT _pgen_tmp_430_995;
  CIPHERTEXT _pgen_tmp_431_996;
  PLAINTEXT _pgen_tmp_432_997;
  CIPHERTEXT _pgen_tmp_433_998;
  CIPHERTEXT _pgen_tmp_434_999;
  CIPHERTEXT _pgen_tmp_435_1000;
  CIPHERTEXT _pgen_tmp_436_1001;
  PLAINTEXT _pgen_tmp_437_1002;
  CIPHERTEXT _pgen_tmp_438_1003;
  PLAINTEXT _pgen_tmp_439_1004;
  CIPHERTEXT _pgen_tmp_440_1005;
  CIPHERTEXT _pgen_tmp_441_1006;
  PLAINTEXT _pgen_tmp_442_1007;
  CIPHERTEXT _pgen_tmp_443_1008;
  CIPHERTEXT _pgen_tmp_444_1009;
  PLAINTEXT _pgen_tmp_445_1010;
  CIPHERTEXT _pgen_tmp_446_1011;
  CIPHERTEXT _pgen_tmp_447_1012;
  CIPHERTEXT _pgen_tmp_448_1013;
  CIPHERTEXT _pgen_tmp_449_1014;
  CIPHERTEXT _pgen_tmp_450_1015;
  CIPHERTEXT _pgen_tmp_451_1016;
  CIPHERTEXT _pgen_tmp_452_1017;
  CIPHERTEXT _pgen_tmp_453_1018;
  CIPHERTEXT _pgen_tmp_454_1019;
  CIPHERTEXT _pgen_tmp_455_1020;
  PLAINTEXT _pgen_tmp_456_1021;
  CIPHERTEXT _pgen_tmp_457_1022;
  CIPHERTEXT _pgen_tmp_458_1023;
  CIPHERTEXT _pgen_tmp_459_1024;
  PLAINTEXT _pgen_tmp_460_1025;
  CIPHERTEXT _pgen_tmp_461_1026;
  CIPHERTEXT _pgen_tmp_462_1027;
  PLAINTEXT _pgen_tmp_463_1028;
  CIPHERTEXT _pgen_tmp_464_1029;
  PLAINTEXT _pgen_tmp_465_1030;
  CIPHERTEXT _pgen_tmp_466_1031;
  CIPHERTEXT _pgen_tmp_467_1032;
  CIPHERTEXT _pgen_tmp_468_1033;
  CIPHERTEXT _pgen_tmp_469_1034;
  PLAINTEXT _pgen_tmp_470_1035;
  CIPHERTEXT _pgen_tmp_471_1036;
  PLAINTEXT _pgen_tmp_472_1037;
  CIPHERTEXT _pgen_tmp_473_1038;
  CIPHERTEXT _pgen_tmp_474_1039;
  PLAINTEXT _pgen_tmp_475_1040;
  CIPHERTEXT _pgen_tmp_476_1041;
  CIPHERTEXT _pgen_tmp_477_1042;
  PLAINTEXT _pgen_tmp_478_1043;
  CIPHERTEXT _pgen_tmp_479_1044;
  CIPHERTEXT _pgen_tmp_480_1045;
  CIPHERTEXT _pgen_tmp_481_1046;
  CIPHERTEXT _pgen_tmp_482_1047;
  CIPHERTEXT _pgen_tmp_483_1048;
  CIPHERTEXT _pgen_tmp_484_1049;
  CIPHERTEXT _pgen_tmp_485_1050;
  CIPHERTEXT _pgen_tmp_486_1051;
  CIPHERTEXT _pgen_tmp_487_1052;
  CIPHERTEXT _pgen_tmp_488_1053;
  CIPHERTEXT _pgen_tmp_489_1054;
  CIPHERTEXT _pgen_tmp_490_1055;
  CIPHERTEXT _pgen_tmp_491_1056;
  PLAINTEXT _pgen_tmp_492_1057;
  CIPHERTEXT _pgen_tmp_493_1058;
  CIPHERTEXT _pgen_tmp_494_1059;
  CIPHERTEXT _pgen_tmp_495_1060;
  PLAINTEXT _pgen_tmp_496_1061;
  CIPHERTEXT _pgen_tmp_497_1062;
  PLAINTEXT _pgen_tmp_498_1063;
  CIPHERTEXT _pgen_tmp_499_1064;
  CIPHERTEXT _pgen_tmp_500_1065;
  CIPHERTEXT _pgen_tmp_501_1066;
  CIPHERTEXT _pgen_tmp_502_1067;
  CIPHERTEXT _pgen_tmp_503_1068;
  PLAINTEXT _pgen_tmp_504_1069;
  PLAINTEXT _pgen_tmp_505_1070;
  CIPHERTEXT _pgen_tmp_506_1071;
  CIPHERTEXT _pgen_tmp_507_1072;
  CIPHERTEXT _pgen_tmp_508_1073;
  PLAINTEXT _pgen_tmp_509_1074;
  CIPHERTEXT _pgen_tmp_510_1075;
  CIPHERTEXT _pgen_tmp_511_1076;
  PLAINTEXT _pgen_tmp_512_1077;
  CIPHERTEXT _pgen_tmp_513_1078;
  PLAINTEXT _pgen_tmp_514_1079;
  CIPHERTEXT _pgen_tmp_515_1080;
  CIPHERTEXT _pgen_tmp_516_1081;
  CIPHERTEXT _pgen_tmp_517_1082;
  CIPHERTEXT _pgen_tmp_518_1083;
  PLAINTEXT _pgen_tmp_519_1084;
  CIPHERTEXT _pgen_tmp_520_1085;
  CIPHERTEXT _pgen_tmp_521_1086;
  CIPHERTEXT _pgen_tmp_522_1087;
  PLAINTEXT _pgen_tmp_523_1088;
  CIPHERTEXT _pgen_tmp_524_1089;
  CIPHERTEXT _pgen_tmp_525_1090;
  PLAINTEXT _pgen_tmp_526_1091;
  CIPHERTEXT _pgen_tmp_527_1092;
  PLAINTEXT _pgen_tmp_528_1093;
  CIPHERTEXT _pgen_tmp_529_1094;
  CIPHERTEXT _pgen_tmp_530_1095;
  CIPHERTEXT _pgen_tmp_531_1096;
  CIPHERTEXT _pgen_tmp_532_1097;
  CIPHERTEXT _pgen_tmp_533_1098;
  CIPHERTEXT _pgen_tmp_534_1099;
  CIPHERTEXT _pgen_tmp_535_1100;
  PLAINTEXT _pgen_tmp_536_1101;
  CIPHERTEXT _pgen_tmp_537_1102;
  CIPHERTEXT _pgen_tmp_538_1103;
  CIPHERTEXT _pgen_tmp_539_1104;
  PLAINTEXT _pgen_tmp_540_1105;
  CIPHERTEXT _pgen_tmp_541_1106;
  CIPHERTEXT _pgen_tmp_542_1107;
  CIPHERTEXT _pgen_tmp_543_1108;
  PLAINTEXT _pgen_tmp_544_1109;
  CIPHERTEXT _pgen_tmp_545_1110;
  CIPHERTEXT _pgen_tmp_546_1111;
  PLAINTEXT _pgen_tmp_547_1112;
  CIPHERTEXT _pgen_tmp_548_1113;
  PLAINTEXT _pgen_tmp_549_1114;
  CIPHERTEXT _pgen_tmp_550_1115;
  CIPHERTEXT _pgen_tmp_551_1116;
  CIPHERTEXT _pgen_tmp_552_1117;
  CIPHERTEXT _pgen_tmp_553_1118;
  CIPHERTEXT _pgen_tmp_554_1119;
  PLAINTEXT _pgen_tmp_555_1120;
  CIPHERTEXT _pgen_tmp_556_1121;
  CIPHERTEXT _pgen_tmp_557_1122;
  CIPHERTEXT _pgen_tmp_558_1123;
  PLAINTEXT _pgen_tmp_559_1124;
  CIPHERTEXT _pgen_tmp_560_1125;
  PLAINTEXT _pgen_tmp_561_1126;
  CIPHERTEXT _pgen_tmp_562_1127;
  PLAINTEXT _pgen_tmp_563_1128;
  CIPHERTEXT _pgen_tmp_564_1129;
  CIPHERTEXT _pgen_tmp_565_1130;
  CIPHERTEXT _pgen_tmp_566_1131;
  CIPHERTEXT _pgen_tmp_567_1132;
  CIPHERTEXT _pgen_tmp_568_1133;
  CIPHERTEXT _pgen_tmp_569_1134;
  CIPHERTEXT _pgen_tmp_570_1135;
  CIPHERTEXT _pgen_tmp_571_1136;
  CIPHERTEXT _pgen_tmp_572_1137;
  CIPHERTEXT _pgen_tmp_573_1138;
  CIPHERTEXT _pgen_tmp_574_1139;
  CIPHERTEXT _pgen_tmp_575_1140;
  CIPHERTEXT _pgen_tmp_576_1141;
  CIPHERTEXT _pgen_tmp_577_1142;
  CIPHERTEXT _pgen_tmp_578_1143;
  CIPHERTEXT _pgen_tmp_579_1144;
  CIPHERTEXT _pgen_tmp_580_1145;
  CIPHERTEXT _pgen_tmp_581_1146;
  CIPHERTEXT _pgen_tmp_582_1147;
  CIPHERTEXT _pgen_tmp_583_1148;
  CIPHERTEXT _pgen_tmp_584_1149;
  PLAINTEXT _pgen_tmp_585_1150;
  CIPHERTEXT _pgen_tmp_586_1151;
  PLAINTEXT _pgen_tmp_587_1152;
  CIPHERTEXT _pgen_tmp_588_1153;
  PLAINTEXT _pgen_tmp_589_1154;
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
  uint32_t  degree = Degree();
  for (int input_idx = 0; input_idx < 6; ++input_idx) {
    input_0[input_idx] = Get_input_data("input", input_idx);
  }
  memset(&VS_out_conv1_1, 0, sizeof(VS_out_conv1_1));
  memset(&VS_out_conv_halo1_2, 0, sizeof(VS_out_conv_halo1_2));
  memset(&input_dup_n34_5, 0, sizeof(input_dup_n34_5));
  memset(&input_block_n34_7, 0, sizeof(input_block_n34_7));
  memset(&result_n35_9, 0, sizeof(result_n35_9));
  memset(&result_grid_n35_11, 0, sizeof(result_grid_n35_11));
  memset(&x_row35_14, 0, sizeof(x_row35_14));
  memset(&comb_row_result36_15, 0, sizeof(comb_row_result36_15));
  memset(&comb_rc_result36_18, 0, sizeof(comb_rc_result36_18));
  memset(&output_reshard1_22, 0, sizeof(output_reshard1_22));
  memset(&VS_out_relu1_23, 0, sizeof(VS_out_relu1_23));
  memset(&VS_out_avp1_26, 0, sizeof(VS_out_avp1_26));
  memset(&tmp_row_add36_29, 0, sizeof(tmp_row_add36_29));
  memset(&orig_result36_30, 0, sizeof(orig_result36_30));
  memset(&comb_row_result37_31, 0, sizeof(comb_row_result37_31));
  memset(&comb_rc_result37_34, 0, sizeof(comb_rc_result37_34));
  memset(&ss_result37_37, 0, sizeof(ss_result37_37));
  memset(&output_reshard1_40, 0, sizeof(output_reshard1_40));
  memset(&VS_out_conv2_41, 0, sizeof(VS_out_conv2_41));
  memset(&VS_out_conv_halo2_42, 0, sizeof(VS_out_conv_halo2_42));
  memset(&input_dup_n37_45, 0, sizeof(input_dup_n37_45));
  memset(&input_block_n37_47, 0, sizeof(input_block_n37_47));
  memset(&result_n38_49, 0, sizeof(result_n38_49));
  memset(&result_grid_n38_51, 0, sizeof(result_grid_n38_51));
  memset(&VS_out_relu2_53, 0, sizeof(VS_out_relu2_53));
  memset(&VS_out_conv3_56, 0, sizeof(VS_out_conv3_56));
  memset(&VS_out_conv_halo3_57, 0, sizeof(VS_out_conv_halo3_57));
  memset(&input_dup_n38_60, 0, sizeof(input_dup_n38_60));
  memset(&input_block_n38_62, 0, sizeof(input_block_n38_62));
  memset(&result_n39_64, 0, sizeof(result_n39_64));
  memset(&result_grid_n39_66, 0, sizeof(result_grid_n39_66));
  memset(&VS_out_conv4_68, 0, sizeof(VS_out_conv4_68));
  memset(&VS_out_conv_halo4_69, 0, sizeof(VS_out_conv_halo4_69));
  memset(&input_dup_n39_72, 0, sizeof(input_dup_n39_72));
  memset(&input_block_n39_74, 0, sizeof(input_block_n39_74));
  memset(&result_n40_76, 0, sizeof(result_n40_76));
  memset(&result_grid_n40_78, 0, sizeof(result_grid_n40_78));
  memset(&VS_out_cocat5_81, 0, sizeof(VS_out_cocat5_81));
  memset(&VS_out_relu5_83, 0, sizeof(VS_out_relu5_83));
  memset(&VS_out_conv6_86, 0, sizeof(VS_out_conv6_86));
  memset(&VS_out_conv_halo6_87, 0, sizeof(VS_out_conv_halo6_87));
  memset(&input_dup_n40_90, 0, sizeof(input_dup_n40_90));
  memset(&input_block_n40_92, 0, sizeof(input_block_n40_92));
  memset(&result_n41_94, 0, sizeof(result_n41_94));
  memset(&result_grid_n41_96, 0, sizeof(result_grid_n41_96));
  memset(&VS_out_relu6_98, 0, sizeof(VS_out_relu6_98));
  memset(&VS_out_conv7_101, 0, sizeof(VS_out_conv7_101));
  memset(&VS_out_conv_halo7_102, 0, sizeof(VS_out_conv_halo7_102));
  memset(&input_dup_n41_105, 0, sizeof(input_dup_n41_105));
  memset(&input_block_n41_107, 0, sizeof(input_block_n41_107));
  memset(&result_n42_109, 0, sizeof(result_n42_109));
  memset(&result_grid_n42_111, 0, sizeof(result_grid_n42_111));
  memset(&VS_out_conv8_113, 0, sizeof(VS_out_conv8_113));
  memset(&VS_out_conv_halo8_114, 0, sizeof(VS_out_conv_halo8_114));
  memset(&input_dup_n42_117, 0, sizeof(input_dup_n42_117));
  memset(&input_block_n42_119, 0, sizeof(input_block_n42_119));
  memset(&result_n43_121, 0, sizeof(result_n43_121));
  memset(&result_grid_n43_123, 0, sizeof(result_grid_n43_123));
  memset(&VS_out_cocat9_126, 0, sizeof(VS_out_cocat9_126));
  memset(&VS_out_relu9_128, 0, sizeof(VS_out_relu9_128));
  memset(&VS_out_conv10_131, 0, sizeof(VS_out_conv10_131));
  memset(&VS_out_conv_halo10_132, 0, sizeof(VS_out_conv_halo10_132));
  memset(&input_dup_n43_135, 0, sizeof(input_dup_n43_135));
  memset(&input_block_n43_137, 0, sizeof(input_block_n43_137));
  memset(&result_n44_139, 0, sizeof(result_n44_139));
  memset(&result_grid_n44_141, 0, sizeof(result_grid_n44_141));
  memset(&VS_out_relu10_143, 0, sizeof(VS_out_relu10_143));
  memset(&VS_out_conv11_146, 0, sizeof(VS_out_conv11_146));
  memset(&VS_out_conv_halo11_147, 0, sizeof(VS_out_conv_halo11_147));
  memset(&input_dup_n44_150, 0, sizeof(input_dup_n44_150));
  memset(&input_block_n44_152, 0, sizeof(input_block_n44_152));
  memset(&result_n45_154, 0, sizeof(result_n45_154));
  memset(&result_grid_n45_156, 0, sizeof(result_grid_n45_156));
  memset(&VS_out_avp11_158, 0, sizeof(VS_out_avp11_158));
  memset(&tmp_row_add45_161, 0, sizeof(tmp_row_add45_161));
  memset(&orig_result45_162, 0, sizeof(orig_result45_162));
  memset(&comb_row_result46_163, 0, sizeof(comb_row_result46_163));
  memset(&comb_rc_result46_165, 0, sizeof(comb_rc_result46_165));
  memset(&ss_result46_167, 0, sizeof(ss_result46_167));
  memset(&output_reshard11_171, 0, sizeof(output_reshard11_171));
  memset(&VS_out_conv12_172, 0, sizeof(VS_out_conv12_172));
  memset(&VS_out_conv_halo12_173, 0, sizeof(VS_out_conv_halo12_173));
  memset(&input_dup_n46_176, 0, sizeof(input_dup_n46_176));
  memset(&input_block_n46_178, 0, sizeof(input_block_n46_178));
  memset(&result_n47_180, 0, sizeof(result_n47_180));
  memset(&result_grid_n47_182, 0, sizeof(result_grid_n47_182));
  memset(&VS_out_avp12_184, 0, sizeof(VS_out_avp12_184));
  memset(&tmp_row_add47_187, 0, sizeof(tmp_row_add47_187));
  memset(&orig_result47_188, 0, sizeof(orig_result47_188));
  memset(&comb_row_result48_189, 0, sizeof(comb_row_result48_189));
  memset(&comb_rc_result48_191, 0, sizeof(comb_rc_result48_191));
  memset(&ss_result48_193, 0, sizeof(ss_result48_193));
  memset(&output_reshard12_197, 0, sizeof(output_reshard12_197));
  memset(&VS_out_cocat13_199, 0, sizeof(VS_out_cocat13_199));
  memset(&VS_out_relu13_201, 0, sizeof(VS_out_relu13_201));
  memset(&VS_out_conv14_204, 0, sizeof(VS_out_conv14_204));
  memset(&VS_out_conv_halo14_205, 0, sizeof(VS_out_conv_halo14_205));
  memset(&input_dup_n48_208, 0, sizeof(input_dup_n48_208));
  memset(&input_block_n48_210, 0, sizeof(input_block_n48_210));
  memset(&result_n49_212, 0, sizeof(result_n49_212));
  memset(&result_grid_n49_214, 0, sizeof(result_grid_n49_214));
  memset(&VS_out_conv15_216, 0, sizeof(VS_out_conv15_216));
  memset(&VS_out_conv_halo15_217, 0, sizeof(VS_out_conv_halo15_217));
  memset(&input_dup_n49_220, 0, sizeof(input_dup_n49_220));
  memset(&input_block_n49_222, 0, sizeof(input_block_n49_222));
  memset(&result_n50_224, 0, sizeof(result_n50_224));
  memset(&result_grid_n50_226, 0, sizeof(result_grid_n50_226));
  memset(&VS_out_conv16_228, 0, sizeof(VS_out_conv16_228));
  memset(&VS_out_conv_halo16_229, 0, sizeof(VS_out_conv_halo16_229));
  memset(&input_dup_n50_232, 0, sizeof(input_dup_n50_232));
  memset(&input_block_n50_234, 0, sizeof(input_block_n50_234));
  memset(&result_n51_236, 0, sizeof(result_n51_236));
  memset(&result_grid_n51_238, 0, sizeof(result_grid_n51_238));
  memset(&VS_out_cocat17_241, 0, sizeof(VS_out_cocat17_241));
  memset(&VS_out_relu17_243, 0, sizeof(VS_out_relu17_243));
  memset(&VS_out_conv18_246, 0, sizeof(VS_out_conv18_246));
  memset(&VS_out_conv_halo18_247, 0, sizeof(VS_out_conv_halo18_247));
  memset(&input_dup_n51_250, 0, sizeof(input_dup_n51_250));
  memset(&input_block_n51_252, 0, sizeof(input_block_n51_252));
  memset(&result_n52_254, 0, sizeof(result_n52_254));
  memset(&result_grid_n52_256, 0, sizeof(result_grid_n52_256));
  memset(&VS_out_relu18_258, 0, sizeof(VS_out_relu18_258));
  memset(&VS_out_conv19_261, 0, sizeof(VS_out_conv19_261));
  memset(&VS_out_conv_halo19_262, 0, sizeof(VS_out_conv_halo19_262));
  memset(&input_dup_n52_265, 0, sizeof(input_dup_n52_265));
  memset(&input_block_n52_267, 0, sizeof(input_block_n52_267));
  memset(&result_n53_269, 0, sizeof(result_n53_269));
  memset(&result_grid_n53_271, 0, sizeof(result_grid_n53_271));
  memset(&VS_out_conv20_273, 0, sizeof(VS_out_conv20_273));
  memset(&VS_out_conv_halo20_274, 0, sizeof(VS_out_conv_halo20_274));
  memset(&input_dup_n53_277, 0, sizeof(input_dup_n53_277));
  memset(&input_block_n53_279, 0, sizeof(input_block_n53_279));
  memset(&result_n54_281, 0, sizeof(result_n54_281));
  memset(&result_grid_n54_283, 0, sizeof(result_grid_n54_283));
  memset(&VS_out_cocat21_286, 0, sizeof(VS_out_cocat21_286));
  memset(&VS_out_relu21_288, 0, sizeof(VS_out_relu21_288));
  memset(&VS_out_conv22_291, 0, sizeof(VS_out_conv22_291));
  memset(&VS_out_conv_halo22_292, 0, sizeof(VS_out_conv_halo22_292));
  memset(&input_dup_n54_295, 0, sizeof(input_dup_n54_295));
  memset(&input_block_n54_297, 0, sizeof(input_block_n54_297));
  memset(&result_n55_299, 0, sizeof(result_n55_299));
  memset(&result_grid_n55_301, 0, sizeof(result_grid_n55_301));
  memset(&VS_out_relu22_303, 0, sizeof(VS_out_relu22_303));
  memset(&VS_out_conv23_306, 0, sizeof(VS_out_conv23_306));
  memset(&VS_out_conv_halo23_307, 0, sizeof(VS_out_conv_halo23_307));
  memset(&input_dup_n55_310, 0, sizeof(input_dup_n55_310));
  memset(&input_block_n55_312, 0, sizeof(input_block_n55_312));
  memset(&result_n56_314, 0, sizeof(result_n56_314));
  memset(&result_grid_n56_316, 0, sizeof(result_grid_n56_316));
  memset(&VS_out_conv24_318, 0, sizeof(VS_out_conv24_318));
  memset(&VS_out_conv_halo24_319, 0, sizeof(VS_out_conv_halo24_319));
  memset(&input_dup_n56_322, 0, sizeof(input_dup_n56_322));
  memset(&input_block_n56_324, 0, sizeof(input_block_n56_324));
  memset(&result_n57_326, 0, sizeof(result_n57_326));
  memset(&result_grid_n57_328, 0, sizeof(result_grid_n57_328));
  memset(&VS_out_cocat25_331, 0, sizeof(VS_out_cocat25_331));
  memset(&VS_out_relu25_333, 0, sizeof(VS_out_relu25_333));
  memset(&VS_out_conv26_336, 0, sizeof(VS_out_conv26_336));
  memset(&VS_out_conv_halo26_337, 0, sizeof(VS_out_conv_halo26_337));
  memset(&input_dup_n57_340, 0, sizeof(input_dup_n57_340));
  memset(&input_block_n57_342, 0, sizeof(input_block_n57_342));
  memset(&result_n58_344, 0, sizeof(result_n58_344));
  memset(&result_grid_n58_346, 0, sizeof(result_grid_n58_346));
  memset(&VS_out_relu26_348, 0, sizeof(VS_out_relu26_348));
  memset(&VS_out_conv27_351, 0, sizeof(VS_out_conv27_351));
  memset(&VS_out_conv_halo27_352, 0, sizeof(VS_out_conv_halo27_352));
  memset(&input_dup_n58_355, 0, sizeof(input_dup_n58_355));
  memset(&input_block_n58_357, 0, sizeof(input_block_n58_357));
  memset(&result_n59_359, 0, sizeof(result_n59_359));
  memset(&result_grid_n59_361, 0, sizeof(result_grid_n59_361));
  memset(&VS_out_avp27_363, 0, sizeof(VS_out_avp27_363));
  memset(&tmp_row_add59_366, 0, sizeof(tmp_row_add59_366));
  memset(&orig_result59_367, 0, sizeof(orig_result59_367));
  memset(&comb_row_result60_368, 0, sizeof(comb_row_result60_368));
  memset(&comb_rc_result60_370, 0, sizeof(comb_rc_result60_370));
  memset(&ss_result60_372, 0, sizeof(ss_result60_372));
  memset(&output_reshard27_376, 0, sizeof(output_reshard27_376));
  memset(&VS_out_conv28_377, 0, sizeof(VS_out_conv28_377));
  memset(&VS_out_conv_halo28_378, 0, sizeof(VS_out_conv_halo28_378));
  memset(&input_dup_n60_381, 0, sizeof(input_dup_n60_381));
  memset(&input_block_n60_383, 0, sizeof(input_block_n60_383));
  memset(&result_n61_385, 0, sizeof(result_n61_385));
  memset(&result_grid_n61_387, 0, sizeof(result_grid_n61_387));
  memset(&VS_out_avp28_389, 0, sizeof(VS_out_avp28_389));
  memset(&tmp_row_add61_392, 0, sizeof(tmp_row_add61_392));
  memset(&orig_result61_393, 0, sizeof(orig_result61_393));
  memset(&comb_row_result62_394, 0, sizeof(comb_row_result62_394));
  memset(&comb_rc_result62_396, 0, sizeof(comb_rc_result62_396));
  memset(&ss_result62_398, 0, sizeof(ss_result62_398));
  memset(&output_reshard28_402, 0, sizeof(output_reshard28_402));
  memset(&VS_out_cocat29_404, 0, sizeof(VS_out_cocat29_404));
  memset(&VS_out_relu29_406, 0, sizeof(VS_out_relu29_406));
  memset(&VS_out_conv30_409, 0, sizeof(VS_out_conv30_409));
  memset(&VS_out_conv_halo30_410, 0, sizeof(VS_out_conv_halo30_410));
  memset(&tmp_result_n63_414, 0, sizeof(tmp_result_n63_414));
  memset(&input_dup_n63_415, 0, sizeof(input_dup_n63_415));
  memset(&VS_out_conv31_418, 0, sizeof(VS_out_conv31_418));
  memset(&VS_out_conv_halo31_419, 0, sizeof(VS_out_conv_halo31_419));
  memset(&input_dup_n63_422, 0, sizeof(input_dup_n63_422));
  memset(&input_block_n63_424, 0, sizeof(input_block_n63_424));
  memset(&result_n64_426, 0, sizeof(result_n64_426));
  memset(&result_grid_n64_428, 0, sizeof(result_grid_n64_428));
  memset(&VS_out_conv32_430, 0, sizeof(VS_out_conv32_430));
  memset(&VS_out_conv_halo32_431, 0, sizeof(VS_out_conv_halo32_431));
  memset(&input_dup_n64_434, 0, sizeof(input_dup_n64_434));
  memset(&input_block_n64_436, 0, sizeof(input_block_n64_436));
  memset(&result_n65_438, 0, sizeof(result_n65_438));
  memset(&result_grid_n65_440, 0, sizeof(result_grid_n65_440));
  memset(&VS_out_cocat33_443, 0, sizeof(VS_out_cocat33_443));
  memset(&VS_out_relu33_445, 0, sizeof(VS_out_relu33_445));
  memset(&VS_out_conv34_448, 0, sizeof(VS_out_conv34_448));
  memset(&VS_out_conv_halo34_449, 0, sizeof(VS_out_conv_halo34_449));
  memset(&input_dup_n65_452, 0, sizeof(input_dup_n65_452));
  memset(&input_block_n65_454, 0, sizeof(input_block_n65_454));
  memset(&result_n66_456, 0, sizeof(result_n66_456));
  memset(&result_grid_n66_458, 0, sizeof(result_grid_n66_458));
  memset(&VS_out_relu34_460, 0, sizeof(VS_out_relu34_460));
  memset(&VS_out_gap34_463, 0, sizeof(VS_out_gap34_463));
  memset(&gap_result66_467, 0, sizeof(gap_result66_467));
  memset(&orig_result66_468, 0, sizeof(orig_result66_468));
  memset(&ss_result67_469, 0, sizeof(ss_result67_469));
  memset(&input_dup_n67_471, 0, sizeof(input_dup_n67_471));
  memset(&input_block_n67_473, 0, sizeof(input_block_n67_473));
  memset(&gemm_result_n68_474, 0, sizeof(gemm_result_n68_474));
  memset(&block_result_476, 0, sizeof(block_result_476));
  memset(&reduce_intra_478, 0, sizeof(reduce_intra_478));
  memset(&output_480, 0, sizeof(output_480));
  memset(&_ckks_gen_tmp_102_481, 0, sizeof(_ckks_gen_tmp_102_481));
  memset(&_ckks_gen_tmp_221_482, 0, sizeof(_ckks_gen_tmp_221_482));
  memset(&_ckks_gen_tmp_274_483, 0, sizeof(_ckks_gen_tmp_274_483));
  memset(&_ckks_gen_tmp_465_484, 0, sizeof(_ckks_gen_tmp_465_484));
  memset(&_ckks_gen_tmp_514_485, 0, sizeof(_ckks_gen_tmp_514_485));
  memset(&_ckks_gen_tmp_567_486, 0, sizeof(_ckks_gen_tmp_567_486));
  memset(&_ckks_gen_tmp_780_487, 0, sizeof(_ckks_gen_tmp_780_487));
  memset(&_ckks_gen_tmp_1045_488, 0, sizeof(_ckks_gen_tmp_1045_488));
  memset(&_ckks_gen_tmp_1243_489, 0, sizeof(_ckks_gen_tmp_1243_489));
  memset(&_ckks_gen_tmp_1557_490, 0, sizeof(_ckks_gen_tmp_1557_490));
  memset(&_ckks_gen_tmp_1822_491, 0, sizeof(_ckks_gen_tmp_1822_491));
  memset(&_ckks_gen_tmp_2020_492, 0, sizeof(_ckks_gen_tmp_2020_492));
  memset(&_ckks_gen_tmp_2334_493, 0, sizeof(_ckks_gen_tmp_2334_493));
  memset(&_ckks_gen_tmp_2599_494, 0, sizeof(_ckks_gen_tmp_2599_494));
  memset(&_ckks_gen_tmp_2746_495, 0, sizeof(_ckks_gen_tmp_2746_495));
  memset(&_ckks_gen_tmp_2777_496, 0, sizeof(_ckks_gen_tmp_2777_496));
  memset(&_ckks_gen_tmp_2810_497, 0, sizeof(_ckks_gen_tmp_2810_497));
  memset(&_ckks_gen_tmp_2863_498, 0, sizeof(_ckks_gen_tmp_2863_498));
  memset(&_ckks_gen_tmp_3042_499, 0, sizeof(_ckks_gen_tmp_3042_499));
  memset(&_ckks_gen_tmp_3189_500, 0, sizeof(_ckks_gen_tmp_3189_500));
  memset(&_ckks_gen_tmp_3220_501, 0, sizeof(_ckks_gen_tmp_3220_501));
  memset(&_ckks_gen_tmp_3253_502, 0, sizeof(_ckks_gen_tmp_3253_502));
  memset(&_ckks_gen_tmp_3306_503, 0, sizeof(_ckks_gen_tmp_3306_503));
  memset(&_ckks_gen_tmp_3601_504, 0, sizeof(_ckks_gen_tmp_3601_504));
  memset(&_ckks_gen_tmp_3821_505, 0, sizeof(_ckks_gen_tmp_3821_505));
  memset(&_ckks_gen_tmp_4012_506, 0, sizeof(_ckks_gen_tmp_4012_506));
  memset(&_ckks_gen_tmp_4326_507, 0, sizeof(_ckks_gen_tmp_4326_507));
  memset(&_ckks_gen_tmp_4591_508, 0, sizeof(_ckks_gen_tmp_4591_508));
  memset(&_ckks_gen_tmp_4789_509, 0, sizeof(_ckks_gen_tmp_4789_509));
  memset(&_ckks_gen_tmp_5103_510, 0, sizeof(_ckks_gen_tmp_5103_510));
  memset(&_ckks_gen_tmp_5368_511, 0, sizeof(_ckks_gen_tmp_5368_511));
  memset(&_ckks_gen_tmp_5566_512, 0, sizeof(_ckks_gen_tmp_5566_512));
  memset(&_ckks_gen_tmp_5880_513, 0, sizeof(_ckks_gen_tmp_5880_513));
  memset(&_ckks_gen_tmp_6145_514, 0, sizeof(_ckks_gen_tmp_6145_514));
  memset(&_ckks_gen_tmp_6292_515, 0, sizeof(_ckks_gen_tmp_6292_515));
  memset(&_ckks_gen_tmp_6323_516, 0, sizeof(_ckks_gen_tmp_6323_516));
  memset(&_ckks_gen_tmp_6356_517, 0, sizeof(_ckks_gen_tmp_6356_517));
  memset(&_ckks_gen_tmp_6409_518, 0, sizeof(_ckks_gen_tmp_6409_518));
  memset(&_ckks_gen_tmp_6588_519, 0, sizeof(_ckks_gen_tmp_6588_519));
  memset(&_ckks_gen_tmp_6735_520, 0, sizeof(_ckks_gen_tmp_6735_520));
  memset(&_ckks_gen_tmp_6766_521, 0, sizeof(_ckks_gen_tmp_6766_521));
  memset(&_ckks_gen_tmp_6799_522, 0, sizeof(_ckks_gen_tmp_6799_522));
  memset(&_ckks_gen_tmp_6852_523, 0, sizeof(_ckks_gen_tmp_6852_523));
  memset(&_ckks_gen_tmp_7128_524, 0, sizeof(_ckks_gen_tmp_7128_524));
  memset(&_ckks_gen_tmp_7307_525, 0, sizeof(_ckks_gen_tmp_7307_525));
  memset(&_ckks_gen_tmp_7502_526, 0, sizeof(_ckks_gen_tmp_7502_526));
  memset(&_ckks_gen_tmp_7816_527, 0, sizeof(_ckks_gen_tmp_7816_527));
  memset(&_ckks_gen_tmp_8254_528, 0, sizeof(_ckks_gen_tmp_8254_528));
  memset(&_pgen_tmp_0_565, 0, sizeof(_pgen_tmp_0_565));
  memset(&_pgen_tmp_1_566, 0, sizeof(_pgen_tmp_1_566));
  memset(&_pgen_tmp_2_567, 0, sizeof(_pgen_tmp_2_567));
  memset(&_pgen_tmp_3_568, 0, sizeof(_pgen_tmp_3_568));
  memset(&_pgen_tmp_4_569, 0, sizeof(_pgen_tmp_4_569));
  memset(&_pgen_tmp_5_570, 0, sizeof(_pgen_tmp_5_570));
  memset(&_pgen_tmp_6_571, 0, sizeof(_pgen_tmp_6_571));
  memset(&_pgen_tmp_7_572, 0, sizeof(_pgen_tmp_7_572));
  memset(&_pgen_tmp_8_573, 0, sizeof(_pgen_tmp_8_573));
  memset(&_pgen_tmp_9_574, 0, sizeof(_pgen_tmp_9_574));
  memset(&_pgen_tmp_10_575, 0, sizeof(_pgen_tmp_10_575));
  memset(&_pgen_tmp_11_576, 0, sizeof(_pgen_tmp_11_576));
  memset(&_pgen_tmp_12_577, 0, sizeof(_pgen_tmp_12_577));
  memset(&_pgen_tmp_13_578, 0, sizeof(_pgen_tmp_13_578));
  memset(&_pgen_tmp_14_579, 0, sizeof(_pgen_tmp_14_579));
  memset(&_pgen_tmp_15_580, 0, sizeof(_pgen_tmp_15_580));
  memset(&_pgen_tmp_16_581, 0, sizeof(_pgen_tmp_16_581));
  memset(&_pgen_tmp_17_582, 0, sizeof(_pgen_tmp_17_582));
  memset(&_pgen_tmp_18_583, 0, sizeof(_pgen_tmp_18_583));
  memset(&_pgen_tmp_19_584, 0, sizeof(_pgen_tmp_19_584));
  memset(&_pgen_tmp_20_585, 0, sizeof(_pgen_tmp_20_585));
  memset(&_pgen_tmp_21_586, 0, sizeof(_pgen_tmp_21_586));
  memset(&_pgen_tmp_22_587, 0, sizeof(_pgen_tmp_22_587));
  memset(&_pgen_tmp_23_588, 0, sizeof(_pgen_tmp_23_588));
  memset(&_pgen_tmp_24_589, 0, sizeof(_pgen_tmp_24_589));
  memset(&_pgen_tmp_25_590, 0, sizeof(_pgen_tmp_25_590));
  memset(&_pgen_tmp_26_591, 0, sizeof(_pgen_tmp_26_591));
  memset(&_pgen_tmp_27_592, 0, sizeof(_pgen_tmp_27_592));
  memset(&_pgen_tmp_28_593, 0, sizeof(_pgen_tmp_28_593));
  memset(&_pgen_tmp_29_594, 0, sizeof(_pgen_tmp_29_594));
  memset(&_pgen_tmp_30_595, 0, sizeof(_pgen_tmp_30_595));
  memset(&_pgen_tmp_31_596, 0, sizeof(_pgen_tmp_31_596));
  memset(&_pgen_tmp_32_597, 0, sizeof(_pgen_tmp_32_597));
  memset(&_pgen_tmp_33_598, 0, sizeof(_pgen_tmp_33_598));
  memset(&_pgen_tmp_34_599, 0, sizeof(_pgen_tmp_34_599));
  memset(&_pgen_tmp_35_600, 0, sizeof(_pgen_tmp_35_600));
  memset(&_pgen_tmp_36_601, 0, sizeof(_pgen_tmp_36_601));
  memset(&_pgen_tmp_37_602, 0, sizeof(_pgen_tmp_37_602));
  memset(&_pgen_tmp_38_603, 0, sizeof(_pgen_tmp_38_603));
  memset(&_pgen_tmp_39_604, 0, sizeof(_pgen_tmp_39_604));
  memset(&_pgen_tmp_40_605, 0, sizeof(_pgen_tmp_40_605));
  memset(&_pgen_tmp_41_606, 0, sizeof(_pgen_tmp_41_606));
  memset(&_pgen_tmp_42_607, 0, sizeof(_pgen_tmp_42_607));
  memset(&_pgen_tmp_43_608, 0, sizeof(_pgen_tmp_43_608));
  memset(&_pgen_tmp_44_609, 0, sizeof(_pgen_tmp_44_609));
  memset(&_pgen_tmp_45_610, 0, sizeof(_pgen_tmp_45_610));
  memset(&_pgen_tmp_46_611, 0, sizeof(_pgen_tmp_46_611));
  memset(&_pgen_tmp_47_612, 0, sizeof(_pgen_tmp_47_612));
  memset(&_pgen_tmp_48_613, 0, sizeof(_pgen_tmp_48_613));
  memset(&_pgen_tmp_49_614, 0, sizeof(_pgen_tmp_49_614));
  memset(&_pgen_tmp_50_615, 0, sizeof(_pgen_tmp_50_615));
  memset(&_pgen_tmp_51_616, 0, sizeof(_pgen_tmp_51_616));
  memset(&_pgen_tmp_52_617, 0, sizeof(_pgen_tmp_52_617));
  memset(&_pgen_tmp_53_618, 0, sizeof(_pgen_tmp_53_618));
  memset(&_pgen_tmp_54_619, 0, sizeof(_pgen_tmp_54_619));
  memset(&_pgen_tmp_55_620, 0, sizeof(_pgen_tmp_55_620));
  memset(&_pgen_tmp_56_621, 0, sizeof(_pgen_tmp_56_621));
  memset(&_pgen_tmp_57_622, 0, sizeof(_pgen_tmp_57_622));
  memset(&_pgen_tmp_58_623, 0, sizeof(_pgen_tmp_58_623));
  memset(&_pgen_tmp_59_624, 0, sizeof(_pgen_tmp_59_624));
  memset(&_pgen_tmp_60_625, 0, sizeof(_pgen_tmp_60_625));
  memset(&_pgen_tmp_61_626, 0, sizeof(_pgen_tmp_61_626));
  memset(&_pgen_tmp_62_627, 0, sizeof(_pgen_tmp_62_627));
  memset(&_pgen_tmp_63_628, 0, sizeof(_pgen_tmp_63_628));
  memset(&_pgen_tmp_64_629, 0, sizeof(_pgen_tmp_64_629));
  memset(&_pgen_tmp_65_630, 0, sizeof(_pgen_tmp_65_630));
  memset(&_pgen_tmp_66_631, 0, sizeof(_pgen_tmp_66_631));
  memset(&_pgen_tmp_67_632, 0, sizeof(_pgen_tmp_67_632));
  memset(&_pgen_tmp_68_633, 0, sizeof(_pgen_tmp_68_633));
  memset(&_pgen_tmp_69_634, 0, sizeof(_pgen_tmp_69_634));
  memset(&_pgen_tmp_70_635, 0, sizeof(_pgen_tmp_70_635));
  memset(&_pgen_tmp_71_636, 0, sizeof(_pgen_tmp_71_636));
  memset(&_pgen_tmp_72_637, 0, sizeof(_pgen_tmp_72_637));
  memset(&_pgen_tmp_73_638, 0, sizeof(_pgen_tmp_73_638));
  memset(&_pgen_tmp_74_639, 0, sizeof(_pgen_tmp_74_639));
  memset(&_pgen_tmp_75_640, 0, sizeof(_pgen_tmp_75_640));
  memset(&_pgen_tmp_76_641, 0, sizeof(_pgen_tmp_76_641));
  memset(&_pgen_tmp_77_642, 0, sizeof(_pgen_tmp_77_642));
  memset(&_pgen_tmp_78_643, 0, sizeof(_pgen_tmp_78_643));
  memset(&_pgen_tmp_79_644, 0, sizeof(_pgen_tmp_79_644));
  memset(&_pgen_tmp_80_645, 0, sizeof(_pgen_tmp_80_645));
  memset(&_pgen_tmp_81_646, 0, sizeof(_pgen_tmp_81_646));
  memset(&_pgen_tmp_82_647, 0, sizeof(_pgen_tmp_82_647));
  memset(&_pgen_tmp_83_648, 0, sizeof(_pgen_tmp_83_648));
  memset(&_pgen_tmp_84_649, 0, sizeof(_pgen_tmp_84_649));
  memset(&_pgen_tmp_85_650, 0, sizeof(_pgen_tmp_85_650));
  memset(&_pgen_tmp_86_651, 0, sizeof(_pgen_tmp_86_651));
  memset(&_pgen_tmp_87_652, 0, sizeof(_pgen_tmp_87_652));
  memset(&_pgen_tmp_88_653, 0, sizeof(_pgen_tmp_88_653));
  memset(&_pgen_tmp_89_654, 0, sizeof(_pgen_tmp_89_654));
  memset(&_pgen_tmp_90_655, 0, sizeof(_pgen_tmp_90_655));
  memset(&_pgen_tmp_91_656, 0, sizeof(_pgen_tmp_91_656));
  memset(&_pgen_tmp_92_657, 0, sizeof(_pgen_tmp_92_657));
  memset(&_pgen_tmp_93_658, 0, sizeof(_pgen_tmp_93_658));
  memset(&_pgen_tmp_94_659, 0, sizeof(_pgen_tmp_94_659));
  memset(&_pgen_tmp_95_660, 0, sizeof(_pgen_tmp_95_660));
  memset(&_pgen_tmp_96_661, 0, sizeof(_pgen_tmp_96_661));
  memset(&_pgen_tmp_97_662, 0, sizeof(_pgen_tmp_97_662));
  memset(&_pgen_tmp_98_663, 0, sizeof(_pgen_tmp_98_663));
  memset(&_pgen_tmp_99_664, 0, sizeof(_pgen_tmp_99_664));
  memset(&_pgen_tmp_100_665, 0, sizeof(_pgen_tmp_100_665));
  memset(&_pgen_tmp_101_666, 0, sizeof(_pgen_tmp_101_666));
  memset(&_pgen_tmp_102_667, 0, sizeof(_pgen_tmp_102_667));
  memset(&_pgen_tmp_103_668, 0, sizeof(_pgen_tmp_103_668));
  memset(&_pgen_tmp_104_669, 0, sizeof(_pgen_tmp_104_669));
  memset(&_pgen_tmp_105_670, 0, sizeof(_pgen_tmp_105_670));
  memset(&_pgen_tmp_106_671, 0, sizeof(_pgen_tmp_106_671));
  memset(&_pgen_tmp_107_672, 0, sizeof(_pgen_tmp_107_672));
  memset(&_pgen_tmp_108_673, 0, sizeof(_pgen_tmp_108_673));
  memset(&_pgen_tmp_109_674, 0, sizeof(_pgen_tmp_109_674));
  memset(&_pgen_tmp_110_675, 0, sizeof(_pgen_tmp_110_675));
  memset(&_pgen_tmp_111_676, 0, sizeof(_pgen_tmp_111_676));
  memset(&_pgen_tmp_112_677, 0, sizeof(_pgen_tmp_112_677));
  memset(&_pgen_tmp_113_678, 0, sizeof(_pgen_tmp_113_678));
  memset(&_pgen_tmp_114_679, 0, sizeof(_pgen_tmp_114_679));
  memset(&_pgen_tmp_115_680, 0, sizeof(_pgen_tmp_115_680));
  memset(&_pgen_tmp_116_681, 0, sizeof(_pgen_tmp_116_681));
  memset(&_pgen_tmp_117_682, 0, sizeof(_pgen_tmp_117_682));
  memset(&_pgen_tmp_118_683, 0, sizeof(_pgen_tmp_118_683));
  memset(&_pgen_tmp_119_684, 0, sizeof(_pgen_tmp_119_684));
  memset(&_pgen_tmp_120_685, 0, sizeof(_pgen_tmp_120_685));
  memset(&_pgen_tmp_121_686, 0, sizeof(_pgen_tmp_121_686));
  memset(&_pgen_tmp_122_687, 0, sizeof(_pgen_tmp_122_687));
  memset(&_pgen_tmp_123_688, 0, sizeof(_pgen_tmp_123_688));
  memset(&_pgen_tmp_124_689, 0, sizeof(_pgen_tmp_124_689));
  memset(&_pgen_tmp_125_690, 0, sizeof(_pgen_tmp_125_690));
  memset(&_pgen_tmp_126_691, 0, sizeof(_pgen_tmp_126_691));
  memset(&_pgen_tmp_127_692, 0, sizeof(_pgen_tmp_127_692));
  memset(&_pgen_tmp_128_693, 0, sizeof(_pgen_tmp_128_693));
  memset(&_pgen_tmp_129_694, 0, sizeof(_pgen_tmp_129_694));
  memset(&_pgen_tmp_130_695, 0, sizeof(_pgen_tmp_130_695));
  memset(&_pgen_tmp_131_696, 0, sizeof(_pgen_tmp_131_696));
  memset(&_pgen_tmp_132_697, 0, sizeof(_pgen_tmp_132_697));
  memset(&_pgen_tmp_133_698, 0, sizeof(_pgen_tmp_133_698));
  memset(&_pgen_tmp_134_699, 0, sizeof(_pgen_tmp_134_699));
  memset(&_pgen_tmp_135_700, 0, sizeof(_pgen_tmp_135_700));
  memset(&_pgen_tmp_136_701, 0, sizeof(_pgen_tmp_136_701));
  memset(&_pgen_tmp_137_702, 0, sizeof(_pgen_tmp_137_702));
  memset(&_pgen_tmp_138_703, 0, sizeof(_pgen_tmp_138_703));
  memset(&_pgen_tmp_139_704, 0, sizeof(_pgen_tmp_139_704));
  memset(&_pgen_tmp_140_705, 0, sizeof(_pgen_tmp_140_705));
  memset(&_pgen_tmp_141_706, 0, sizeof(_pgen_tmp_141_706));
  memset(&_pgen_tmp_142_707, 0, sizeof(_pgen_tmp_142_707));
  memset(&_pgen_tmp_143_708, 0, sizeof(_pgen_tmp_143_708));
  memset(&_pgen_tmp_144_709, 0, sizeof(_pgen_tmp_144_709));
  memset(&_pgen_tmp_145_710, 0, sizeof(_pgen_tmp_145_710));
  memset(&_pgen_tmp_146_711, 0, sizeof(_pgen_tmp_146_711));
  memset(&_pgen_tmp_147_712, 0, sizeof(_pgen_tmp_147_712));
  memset(&_pgen_tmp_148_713, 0, sizeof(_pgen_tmp_148_713));
  memset(&_pgen_tmp_149_714, 0, sizeof(_pgen_tmp_149_714));
  memset(&_pgen_tmp_150_715, 0, sizeof(_pgen_tmp_150_715));
  memset(&_pgen_tmp_151_716, 0, sizeof(_pgen_tmp_151_716));
  memset(&_pgen_tmp_152_717, 0, sizeof(_pgen_tmp_152_717));
  memset(&_pgen_tmp_153_718, 0, sizeof(_pgen_tmp_153_718));
  memset(&_pgen_tmp_154_719, 0, sizeof(_pgen_tmp_154_719));
  memset(&_pgen_tmp_155_720, 0, sizeof(_pgen_tmp_155_720));
  memset(&_pgen_tmp_156_721, 0, sizeof(_pgen_tmp_156_721));
  memset(&_pgen_tmp_157_722, 0, sizeof(_pgen_tmp_157_722));
  memset(&_pgen_tmp_158_723, 0, sizeof(_pgen_tmp_158_723));
  memset(&_pgen_tmp_159_724, 0, sizeof(_pgen_tmp_159_724));
  memset(&_pgen_tmp_160_725, 0, sizeof(_pgen_tmp_160_725));
  memset(&_pgen_tmp_161_726, 0, sizeof(_pgen_tmp_161_726));
  memset(&_pgen_tmp_162_727, 0, sizeof(_pgen_tmp_162_727));
  memset(&_pgen_tmp_163_728, 0, sizeof(_pgen_tmp_163_728));
  memset(&_pgen_tmp_164_729, 0, sizeof(_pgen_tmp_164_729));
  memset(&_pgen_tmp_165_730, 0, sizeof(_pgen_tmp_165_730));
  memset(&_pgen_tmp_166_731, 0, sizeof(_pgen_tmp_166_731));
  memset(&_pgen_tmp_167_732, 0, sizeof(_pgen_tmp_167_732));
  memset(&_pgen_tmp_168_733, 0, sizeof(_pgen_tmp_168_733));
  memset(&_pgen_tmp_169_734, 0, sizeof(_pgen_tmp_169_734));
  memset(&_pgen_tmp_170_735, 0, sizeof(_pgen_tmp_170_735));
  memset(&_pgen_tmp_171_736, 0, sizeof(_pgen_tmp_171_736));
  memset(&_pgen_tmp_172_737, 0, sizeof(_pgen_tmp_172_737));
  memset(&_pgen_tmp_173_738, 0, sizeof(_pgen_tmp_173_738));
  memset(&_pgen_tmp_174_739, 0, sizeof(_pgen_tmp_174_739));
  memset(&_pgen_tmp_175_740, 0, sizeof(_pgen_tmp_175_740));
  memset(&_pgen_tmp_176_741, 0, sizeof(_pgen_tmp_176_741));
  memset(&_pgen_tmp_177_742, 0, sizeof(_pgen_tmp_177_742));
  memset(&_pgen_tmp_178_743, 0, sizeof(_pgen_tmp_178_743));
  memset(&_pgen_tmp_179_744, 0, sizeof(_pgen_tmp_179_744));
  memset(&_pgen_tmp_180_745, 0, sizeof(_pgen_tmp_180_745));
  memset(&_pgen_tmp_181_746, 0, sizeof(_pgen_tmp_181_746));
  memset(&_pgen_tmp_182_747, 0, sizeof(_pgen_tmp_182_747));
  memset(&_pgen_tmp_183_748, 0, sizeof(_pgen_tmp_183_748));
  memset(&_pgen_tmp_184_749, 0, sizeof(_pgen_tmp_184_749));
  memset(&_pgen_tmp_185_750, 0, sizeof(_pgen_tmp_185_750));
  memset(&_pgen_tmp_186_751, 0, sizeof(_pgen_tmp_186_751));
  memset(&_pgen_tmp_187_752, 0, sizeof(_pgen_tmp_187_752));
  memset(&_pgen_tmp_188_753, 0, sizeof(_pgen_tmp_188_753));
  memset(&_pgen_tmp_189_754, 0, sizeof(_pgen_tmp_189_754));
  memset(&_pgen_tmp_190_755, 0, sizeof(_pgen_tmp_190_755));
  memset(&_pgen_tmp_191_756, 0, sizeof(_pgen_tmp_191_756));
  memset(&_pgen_tmp_192_757, 0, sizeof(_pgen_tmp_192_757));
  memset(&_pgen_tmp_193_758, 0, sizeof(_pgen_tmp_193_758));
  memset(&_pgen_tmp_194_759, 0, sizeof(_pgen_tmp_194_759));
  memset(&_pgen_tmp_195_760, 0, sizeof(_pgen_tmp_195_760));
  memset(&_pgen_tmp_196_761, 0, sizeof(_pgen_tmp_196_761));
  memset(&_pgen_tmp_197_762, 0, sizeof(_pgen_tmp_197_762));
  memset(&_pgen_tmp_198_763, 0, sizeof(_pgen_tmp_198_763));
  memset(&_pgen_tmp_199_764, 0, sizeof(_pgen_tmp_199_764));
  memset(&_pgen_tmp_200_765, 0, sizeof(_pgen_tmp_200_765));
  memset(&_pgen_tmp_201_766, 0, sizeof(_pgen_tmp_201_766));
  memset(&_pgen_tmp_202_767, 0, sizeof(_pgen_tmp_202_767));
  memset(&_pgen_tmp_203_768, 0, sizeof(_pgen_tmp_203_768));
  memset(&_pgen_tmp_204_769, 0, sizeof(_pgen_tmp_204_769));
  memset(&_pgen_tmp_205_770, 0, sizeof(_pgen_tmp_205_770));
  memset(&_pgen_tmp_206_771, 0, sizeof(_pgen_tmp_206_771));
  memset(&_pgen_tmp_207_772, 0, sizeof(_pgen_tmp_207_772));
  memset(&_pgen_tmp_208_773, 0, sizeof(_pgen_tmp_208_773));
  memset(&_pgen_tmp_209_774, 0, sizeof(_pgen_tmp_209_774));
  memset(&_pgen_tmp_210_775, 0, sizeof(_pgen_tmp_210_775));
  memset(&_pgen_tmp_211_776, 0, sizeof(_pgen_tmp_211_776));
  memset(&_pgen_tmp_212_777, 0, sizeof(_pgen_tmp_212_777));
  memset(&_pgen_tmp_213_778, 0, sizeof(_pgen_tmp_213_778));
  memset(&_pgen_tmp_214_779, 0, sizeof(_pgen_tmp_214_779));
  memset(&_pgen_tmp_215_780, 0, sizeof(_pgen_tmp_215_780));
  memset(&_pgen_tmp_216_781, 0, sizeof(_pgen_tmp_216_781));
  memset(&_pgen_tmp_217_782, 0, sizeof(_pgen_tmp_217_782));
  memset(&_pgen_tmp_218_783, 0, sizeof(_pgen_tmp_218_783));
  memset(&_pgen_tmp_219_784, 0, sizeof(_pgen_tmp_219_784));
  memset(&_pgen_tmp_220_785, 0, sizeof(_pgen_tmp_220_785));
  memset(&_pgen_tmp_221_786, 0, sizeof(_pgen_tmp_221_786));
  memset(&_pgen_tmp_222_787, 0, sizeof(_pgen_tmp_222_787));
  memset(&_pgen_tmp_223_788, 0, sizeof(_pgen_tmp_223_788));
  memset(&_pgen_tmp_224_789, 0, sizeof(_pgen_tmp_224_789));
  memset(&_pgen_tmp_225_790, 0, sizeof(_pgen_tmp_225_790));
  memset(&_pgen_tmp_226_791, 0, sizeof(_pgen_tmp_226_791));
  memset(&_pgen_tmp_227_792, 0, sizeof(_pgen_tmp_227_792));
  memset(&_pgen_tmp_228_793, 0, sizeof(_pgen_tmp_228_793));
  memset(&_pgen_tmp_229_794, 0, sizeof(_pgen_tmp_229_794));
  memset(&_pgen_tmp_230_795, 0, sizeof(_pgen_tmp_230_795));
  memset(&_pgen_tmp_231_796, 0, sizeof(_pgen_tmp_231_796));
  memset(&_pgen_tmp_232_797, 0, sizeof(_pgen_tmp_232_797));
  memset(&_pgen_tmp_233_798, 0, sizeof(_pgen_tmp_233_798));
  memset(&_pgen_tmp_234_799, 0, sizeof(_pgen_tmp_234_799));
  memset(&_pgen_tmp_235_800, 0, sizeof(_pgen_tmp_235_800));
  memset(&_pgen_tmp_236_801, 0, sizeof(_pgen_tmp_236_801));
  memset(&_pgen_tmp_237_802, 0, sizeof(_pgen_tmp_237_802));
  memset(&_pgen_tmp_238_803, 0, sizeof(_pgen_tmp_238_803));
  memset(&_pgen_tmp_239_804, 0, sizeof(_pgen_tmp_239_804));
  memset(&_pgen_tmp_240_805, 0, sizeof(_pgen_tmp_240_805));
  memset(&_pgen_tmp_241_806, 0, sizeof(_pgen_tmp_241_806));
  memset(&_pgen_tmp_242_807, 0, sizeof(_pgen_tmp_242_807));
  memset(&_pgen_tmp_243_808, 0, sizeof(_pgen_tmp_243_808));
  memset(&_pgen_tmp_244_809, 0, sizeof(_pgen_tmp_244_809));
  memset(&_pgen_tmp_245_810, 0, sizeof(_pgen_tmp_245_810));
  memset(&_pgen_tmp_246_811, 0, sizeof(_pgen_tmp_246_811));
  memset(&_pgen_tmp_247_812, 0, sizeof(_pgen_tmp_247_812));
  memset(&_pgen_tmp_248_813, 0, sizeof(_pgen_tmp_248_813));
  memset(&_pgen_tmp_249_814, 0, sizeof(_pgen_tmp_249_814));
  memset(&_pgen_tmp_250_815, 0, sizeof(_pgen_tmp_250_815));
  memset(&_pgen_tmp_251_816, 0, sizeof(_pgen_tmp_251_816));
  memset(&_pgen_tmp_252_817, 0, sizeof(_pgen_tmp_252_817));
  memset(&_pgen_tmp_253_818, 0, sizeof(_pgen_tmp_253_818));
  memset(&_pgen_tmp_254_819, 0, sizeof(_pgen_tmp_254_819));
  memset(&_pgen_tmp_255_820, 0, sizeof(_pgen_tmp_255_820));
  memset(&_pgen_tmp_256_821, 0, sizeof(_pgen_tmp_256_821));
  memset(&_pgen_tmp_257_822, 0, sizeof(_pgen_tmp_257_822));
  memset(&_pgen_tmp_258_823, 0, sizeof(_pgen_tmp_258_823));
  memset(&_pgen_tmp_259_824, 0, sizeof(_pgen_tmp_259_824));
  memset(&_pgen_tmp_260_825, 0, sizeof(_pgen_tmp_260_825));
  memset(&_pgen_tmp_261_826, 0, sizeof(_pgen_tmp_261_826));
  memset(&_pgen_tmp_262_827, 0, sizeof(_pgen_tmp_262_827));
  memset(&_pgen_tmp_263_828, 0, sizeof(_pgen_tmp_263_828));
  memset(&_pgen_tmp_264_829, 0, sizeof(_pgen_tmp_264_829));
  memset(&_pgen_tmp_265_830, 0, sizeof(_pgen_tmp_265_830));
  memset(&_pgen_tmp_266_831, 0, sizeof(_pgen_tmp_266_831));
  memset(&_pgen_tmp_267_832, 0, sizeof(_pgen_tmp_267_832));
  memset(&_pgen_tmp_268_833, 0, sizeof(_pgen_tmp_268_833));
  memset(&_pgen_tmp_269_834, 0, sizeof(_pgen_tmp_269_834));
  memset(&_pgen_tmp_270_835, 0, sizeof(_pgen_tmp_270_835));
  memset(&_pgen_tmp_271_836, 0, sizeof(_pgen_tmp_271_836));
  memset(&_pgen_tmp_272_837, 0, sizeof(_pgen_tmp_272_837));
  memset(&_pgen_tmp_273_838, 0, sizeof(_pgen_tmp_273_838));
  memset(&_pgen_tmp_274_839, 0, sizeof(_pgen_tmp_274_839));
  memset(&_pgen_tmp_275_840, 0, sizeof(_pgen_tmp_275_840));
  memset(&_pgen_tmp_276_841, 0, sizeof(_pgen_tmp_276_841));
  memset(&_pgen_tmp_277_842, 0, sizeof(_pgen_tmp_277_842));
  memset(&_pgen_tmp_278_843, 0, sizeof(_pgen_tmp_278_843));
  memset(&_pgen_tmp_279_844, 0, sizeof(_pgen_tmp_279_844));
  memset(&_pgen_tmp_280_845, 0, sizeof(_pgen_tmp_280_845));
  memset(&_pgen_tmp_281_846, 0, sizeof(_pgen_tmp_281_846));
  memset(&_pgen_tmp_282_847, 0, sizeof(_pgen_tmp_282_847));
  memset(&_pgen_tmp_283_848, 0, sizeof(_pgen_tmp_283_848));
  memset(&_pgen_tmp_284_849, 0, sizeof(_pgen_tmp_284_849));
  memset(&_pgen_tmp_285_850, 0, sizeof(_pgen_tmp_285_850));
  memset(&_pgen_tmp_286_851, 0, sizeof(_pgen_tmp_286_851));
  memset(&_pgen_tmp_287_852, 0, sizeof(_pgen_tmp_287_852));
  memset(&_pgen_tmp_288_853, 0, sizeof(_pgen_tmp_288_853));
  memset(&_pgen_tmp_289_854, 0, sizeof(_pgen_tmp_289_854));
  memset(&_pgen_tmp_290_855, 0, sizeof(_pgen_tmp_290_855));
  memset(&_pgen_tmp_291_856, 0, sizeof(_pgen_tmp_291_856));
  memset(&_pgen_tmp_292_857, 0, sizeof(_pgen_tmp_292_857));
  memset(&_pgen_tmp_293_858, 0, sizeof(_pgen_tmp_293_858));
  memset(&_pgen_tmp_294_859, 0, sizeof(_pgen_tmp_294_859));
  memset(&_pgen_tmp_295_860, 0, sizeof(_pgen_tmp_295_860));
  memset(&_pgen_tmp_296_861, 0, sizeof(_pgen_tmp_296_861));
  memset(&_pgen_tmp_297_862, 0, sizeof(_pgen_tmp_297_862));
  memset(&_pgen_tmp_298_863, 0, sizeof(_pgen_tmp_298_863));
  memset(&_pgen_tmp_299_864, 0, sizeof(_pgen_tmp_299_864));
  memset(&_pgen_tmp_300_865, 0, sizeof(_pgen_tmp_300_865));
  memset(&_pgen_tmp_301_866, 0, sizeof(_pgen_tmp_301_866));
  memset(&_pgen_tmp_302_867, 0, sizeof(_pgen_tmp_302_867));
  memset(&_pgen_tmp_303_868, 0, sizeof(_pgen_tmp_303_868));
  memset(&_pgen_tmp_304_869, 0, sizeof(_pgen_tmp_304_869));
  memset(&_pgen_tmp_305_870, 0, sizeof(_pgen_tmp_305_870));
  memset(&_pgen_tmp_306_871, 0, sizeof(_pgen_tmp_306_871));
  memset(&_pgen_tmp_307_872, 0, sizeof(_pgen_tmp_307_872));
  memset(&_pgen_tmp_308_873, 0, sizeof(_pgen_tmp_308_873));
  memset(&_pgen_tmp_309_874, 0, sizeof(_pgen_tmp_309_874));
  memset(&_pgen_tmp_310_875, 0, sizeof(_pgen_tmp_310_875));
  memset(&_pgen_tmp_311_876, 0, sizeof(_pgen_tmp_311_876));
  memset(&_pgen_tmp_312_877, 0, sizeof(_pgen_tmp_312_877));
  memset(&_pgen_tmp_313_878, 0, sizeof(_pgen_tmp_313_878));
  memset(&_pgen_tmp_314_879, 0, sizeof(_pgen_tmp_314_879));
  memset(&_pgen_tmp_315_880, 0, sizeof(_pgen_tmp_315_880));
  memset(&_pgen_tmp_316_881, 0, sizeof(_pgen_tmp_316_881));
  memset(&_pgen_tmp_317_882, 0, sizeof(_pgen_tmp_317_882));
  memset(&_pgen_tmp_318_883, 0, sizeof(_pgen_tmp_318_883));
  memset(&_pgen_tmp_319_884, 0, sizeof(_pgen_tmp_319_884));
  memset(&_pgen_tmp_320_885, 0, sizeof(_pgen_tmp_320_885));
  memset(&_pgen_tmp_321_886, 0, sizeof(_pgen_tmp_321_886));
  memset(&_pgen_tmp_322_887, 0, sizeof(_pgen_tmp_322_887));
  memset(&_pgen_tmp_323_888, 0, sizeof(_pgen_tmp_323_888));
  memset(&_pgen_tmp_324_889, 0, sizeof(_pgen_tmp_324_889));
  memset(&_pgen_tmp_325_890, 0, sizeof(_pgen_tmp_325_890));
  memset(&_pgen_tmp_326_891, 0, sizeof(_pgen_tmp_326_891));
  memset(&_pgen_tmp_327_892, 0, sizeof(_pgen_tmp_327_892));
  memset(&_pgen_tmp_328_893, 0, sizeof(_pgen_tmp_328_893));
  memset(&_pgen_tmp_329_894, 0, sizeof(_pgen_tmp_329_894));
  memset(&_pgen_tmp_330_895, 0, sizeof(_pgen_tmp_330_895));
  memset(&_pgen_tmp_331_896, 0, sizeof(_pgen_tmp_331_896));
  memset(&_pgen_tmp_332_897, 0, sizeof(_pgen_tmp_332_897));
  memset(&_pgen_tmp_333_898, 0, sizeof(_pgen_tmp_333_898));
  memset(&_pgen_tmp_334_899, 0, sizeof(_pgen_tmp_334_899));
  memset(&_pgen_tmp_335_900, 0, sizeof(_pgen_tmp_335_900));
  memset(&_pgen_tmp_336_901, 0, sizeof(_pgen_tmp_336_901));
  memset(&_pgen_tmp_337_902, 0, sizeof(_pgen_tmp_337_902));
  memset(&_pgen_tmp_338_903, 0, sizeof(_pgen_tmp_338_903));
  memset(&_pgen_tmp_339_904, 0, sizeof(_pgen_tmp_339_904));
  memset(&_pgen_tmp_340_905, 0, sizeof(_pgen_tmp_340_905));
  memset(&_pgen_tmp_341_906, 0, sizeof(_pgen_tmp_341_906));
  memset(&_pgen_tmp_342_907, 0, sizeof(_pgen_tmp_342_907));
  memset(&_pgen_tmp_343_908, 0, sizeof(_pgen_tmp_343_908));
  memset(&_pgen_tmp_344_909, 0, sizeof(_pgen_tmp_344_909));
  memset(&_pgen_tmp_345_910, 0, sizeof(_pgen_tmp_345_910));
  memset(&_pgen_tmp_346_911, 0, sizeof(_pgen_tmp_346_911));
  memset(&_pgen_tmp_347_912, 0, sizeof(_pgen_tmp_347_912));
  memset(&_pgen_tmp_348_913, 0, sizeof(_pgen_tmp_348_913));
  memset(&_pgen_tmp_349_914, 0, sizeof(_pgen_tmp_349_914));
  memset(&_pgen_tmp_350_915, 0, sizeof(_pgen_tmp_350_915));
  memset(&_pgen_tmp_351_916, 0, sizeof(_pgen_tmp_351_916));
  memset(&_pgen_tmp_352_917, 0, sizeof(_pgen_tmp_352_917));
  memset(&_pgen_tmp_353_918, 0, sizeof(_pgen_tmp_353_918));
  memset(&_pgen_tmp_354_919, 0, sizeof(_pgen_tmp_354_919));
  memset(&_pgen_tmp_355_920, 0, sizeof(_pgen_tmp_355_920));
  memset(&_pgen_tmp_356_921, 0, sizeof(_pgen_tmp_356_921));
  memset(&_pgen_tmp_357_922, 0, sizeof(_pgen_tmp_357_922));
  memset(&_pgen_tmp_358_923, 0, sizeof(_pgen_tmp_358_923));
  memset(&_pgen_tmp_359_924, 0, sizeof(_pgen_tmp_359_924));
  memset(&_pgen_tmp_360_925, 0, sizeof(_pgen_tmp_360_925));
  memset(&_pgen_tmp_361_926, 0, sizeof(_pgen_tmp_361_926));
  memset(&_pgen_tmp_362_927, 0, sizeof(_pgen_tmp_362_927));
  memset(&_pgen_tmp_363_928, 0, sizeof(_pgen_tmp_363_928));
  memset(&_pgen_tmp_364_929, 0, sizeof(_pgen_tmp_364_929));
  memset(&_pgen_tmp_365_930, 0, sizeof(_pgen_tmp_365_930));
  memset(&_pgen_tmp_366_931, 0, sizeof(_pgen_tmp_366_931));
  memset(&_pgen_tmp_367_932, 0, sizeof(_pgen_tmp_367_932));
  memset(&_pgen_tmp_368_933, 0, sizeof(_pgen_tmp_368_933));
  memset(&_pgen_tmp_369_934, 0, sizeof(_pgen_tmp_369_934));
  memset(&_pgen_tmp_370_935, 0, sizeof(_pgen_tmp_370_935));
  memset(&_pgen_tmp_371_936, 0, sizeof(_pgen_tmp_371_936));
  memset(&_pgen_tmp_372_937, 0, sizeof(_pgen_tmp_372_937));
  memset(&_pgen_tmp_373_938, 0, sizeof(_pgen_tmp_373_938));
  memset(&_pgen_tmp_374_939, 0, sizeof(_pgen_tmp_374_939));
  memset(&_pgen_tmp_375_940, 0, sizeof(_pgen_tmp_375_940));
  memset(&_pgen_tmp_376_941, 0, sizeof(_pgen_tmp_376_941));
  memset(&_pgen_tmp_377_942, 0, sizeof(_pgen_tmp_377_942));
  memset(&_pgen_tmp_378_943, 0, sizeof(_pgen_tmp_378_943));
  memset(&_pgen_tmp_379_944, 0, sizeof(_pgen_tmp_379_944));
  memset(&_pgen_tmp_380_945, 0, sizeof(_pgen_tmp_380_945));
  memset(&_pgen_tmp_381_946, 0, sizeof(_pgen_tmp_381_946));
  memset(&_pgen_tmp_382_947, 0, sizeof(_pgen_tmp_382_947));
  memset(&_pgen_tmp_383_948, 0, sizeof(_pgen_tmp_383_948));
  memset(&_pgen_tmp_384_949, 0, sizeof(_pgen_tmp_384_949));
  memset(&_pgen_tmp_385_950, 0, sizeof(_pgen_tmp_385_950));
  memset(&_pgen_tmp_386_951, 0, sizeof(_pgen_tmp_386_951));
  memset(&_pgen_tmp_387_952, 0, sizeof(_pgen_tmp_387_952));
  memset(&_pgen_tmp_388_953, 0, sizeof(_pgen_tmp_388_953));
  memset(&_pgen_tmp_389_954, 0, sizeof(_pgen_tmp_389_954));
  memset(&_pgen_tmp_390_955, 0, sizeof(_pgen_tmp_390_955));
  memset(&_pgen_tmp_391_956, 0, sizeof(_pgen_tmp_391_956));
  memset(&_pgen_tmp_392_957, 0, sizeof(_pgen_tmp_392_957));
  memset(&_pgen_tmp_393_958, 0, sizeof(_pgen_tmp_393_958));
  memset(&_pgen_tmp_394_959, 0, sizeof(_pgen_tmp_394_959));
  memset(&_pgen_tmp_395_960, 0, sizeof(_pgen_tmp_395_960));
  memset(&_pgen_tmp_396_961, 0, sizeof(_pgen_tmp_396_961));
  memset(&_pgen_tmp_397_962, 0, sizeof(_pgen_tmp_397_962));
  memset(&_pgen_tmp_398_963, 0, sizeof(_pgen_tmp_398_963));
  memset(&_pgen_tmp_399_964, 0, sizeof(_pgen_tmp_399_964));
  memset(&_pgen_tmp_400_965, 0, sizeof(_pgen_tmp_400_965));
  memset(&_pgen_tmp_401_966, 0, sizeof(_pgen_tmp_401_966));
  memset(&_pgen_tmp_402_967, 0, sizeof(_pgen_tmp_402_967));
  memset(&_pgen_tmp_403_968, 0, sizeof(_pgen_tmp_403_968));
  memset(&_pgen_tmp_404_969, 0, sizeof(_pgen_tmp_404_969));
  memset(&_pgen_tmp_405_970, 0, sizeof(_pgen_tmp_405_970));
  memset(&_pgen_tmp_406_971, 0, sizeof(_pgen_tmp_406_971));
  memset(&_pgen_tmp_407_972, 0, sizeof(_pgen_tmp_407_972));
  memset(&_pgen_tmp_408_973, 0, sizeof(_pgen_tmp_408_973));
  memset(&_pgen_tmp_409_974, 0, sizeof(_pgen_tmp_409_974));
  memset(&_pgen_tmp_410_975, 0, sizeof(_pgen_tmp_410_975));
  memset(&_pgen_tmp_411_976, 0, sizeof(_pgen_tmp_411_976));
  memset(&_pgen_tmp_412_977, 0, sizeof(_pgen_tmp_412_977));
  memset(&_pgen_tmp_413_978, 0, sizeof(_pgen_tmp_413_978));
  memset(&_pgen_tmp_414_979, 0, sizeof(_pgen_tmp_414_979));
  memset(&_pgen_tmp_415_980, 0, sizeof(_pgen_tmp_415_980));
  memset(&_pgen_tmp_416_981, 0, sizeof(_pgen_tmp_416_981));
  memset(&_pgen_tmp_417_982, 0, sizeof(_pgen_tmp_417_982));
  memset(&_pgen_tmp_418_983, 0, sizeof(_pgen_tmp_418_983));
  memset(&_pgen_tmp_419_984, 0, sizeof(_pgen_tmp_419_984));
  memset(&_pgen_tmp_420_985, 0, sizeof(_pgen_tmp_420_985));
  memset(&_pgen_tmp_421_986, 0, sizeof(_pgen_tmp_421_986));
  memset(&_pgen_tmp_422_987, 0, sizeof(_pgen_tmp_422_987));
  memset(&_pgen_tmp_423_988, 0, sizeof(_pgen_tmp_423_988));
  memset(&_pgen_tmp_424_989, 0, sizeof(_pgen_tmp_424_989));
  memset(&_pgen_tmp_425_990, 0, sizeof(_pgen_tmp_425_990));
  memset(&_pgen_tmp_426_991, 0, sizeof(_pgen_tmp_426_991));
  memset(&_pgen_tmp_427_992, 0, sizeof(_pgen_tmp_427_992));
  memset(&_pgen_tmp_428_993, 0, sizeof(_pgen_tmp_428_993));
  memset(&_pgen_tmp_429_994, 0, sizeof(_pgen_tmp_429_994));
  memset(&_pgen_tmp_430_995, 0, sizeof(_pgen_tmp_430_995));
  memset(&_pgen_tmp_431_996, 0, sizeof(_pgen_tmp_431_996));
  memset(&_pgen_tmp_432_997, 0, sizeof(_pgen_tmp_432_997));
  memset(&_pgen_tmp_433_998, 0, sizeof(_pgen_tmp_433_998));
  memset(&_pgen_tmp_434_999, 0, sizeof(_pgen_tmp_434_999));
  memset(&_pgen_tmp_435_1000, 0, sizeof(_pgen_tmp_435_1000));
  memset(&_pgen_tmp_436_1001, 0, sizeof(_pgen_tmp_436_1001));
  memset(&_pgen_tmp_437_1002, 0, sizeof(_pgen_tmp_437_1002));
  memset(&_pgen_tmp_438_1003, 0, sizeof(_pgen_tmp_438_1003));
  memset(&_pgen_tmp_439_1004, 0, sizeof(_pgen_tmp_439_1004));
  memset(&_pgen_tmp_440_1005, 0, sizeof(_pgen_tmp_440_1005));
  memset(&_pgen_tmp_441_1006, 0, sizeof(_pgen_tmp_441_1006));
  memset(&_pgen_tmp_442_1007, 0, sizeof(_pgen_tmp_442_1007));
  memset(&_pgen_tmp_443_1008, 0, sizeof(_pgen_tmp_443_1008));
  memset(&_pgen_tmp_444_1009, 0, sizeof(_pgen_tmp_444_1009));
  memset(&_pgen_tmp_445_1010, 0, sizeof(_pgen_tmp_445_1010));
  memset(&_pgen_tmp_446_1011, 0, sizeof(_pgen_tmp_446_1011));
  memset(&_pgen_tmp_447_1012, 0, sizeof(_pgen_tmp_447_1012));
  memset(&_pgen_tmp_448_1013, 0, sizeof(_pgen_tmp_448_1013));
  memset(&_pgen_tmp_449_1014, 0, sizeof(_pgen_tmp_449_1014));
  memset(&_pgen_tmp_450_1015, 0, sizeof(_pgen_tmp_450_1015));
  memset(&_pgen_tmp_451_1016, 0, sizeof(_pgen_tmp_451_1016));
  memset(&_pgen_tmp_452_1017, 0, sizeof(_pgen_tmp_452_1017));
  memset(&_pgen_tmp_453_1018, 0, sizeof(_pgen_tmp_453_1018));
  memset(&_pgen_tmp_454_1019, 0, sizeof(_pgen_tmp_454_1019));
  memset(&_pgen_tmp_455_1020, 0, sizeof(_pgen_tmp_455_1020));
  memset(&_pgen_tmp_456_1021, 0, sizeof(_pgen_tmp_456_1021));
  memset(&_pgen_tmp_457_1022, 0, sizeof(_pgen_tmp_457_1022));
  memset(&_pgen_tmp_458_1023, 0, sizeof(_pgen_tmp_458_1023));
  memset(&_pgen_tmp_459_1024, 0, sizeof(_pgen_tmp_459_1024));
  memset(&_pgen_tmp_460_1025, 0, sizeof(_pgen_tmp_460_1025));
  memset(&_pgen_tmp_461_1026, 0, sizeof(_pgen_tmp_461_1026));
  memset(&_pgen_tmp_462_1027, 0, sizeof(_pgen_tmp_462_1027));
  memset(&_pgen_tmp_463_1028, 0, sizeof(_pgen_tmp_463_1028));
  memset(&_pgen_tmp_464_1029, 0, sizeof(_pgen_tmp_464_1029));
  memset(&_pgen_tmp_465_1030, 0, sizeof(_pgen_tmp_465_1030));
  memset(&_pgen_tmp_466_1031, 0, sizeof(_pgen_tmp_466_1031));
  memset(&_pgen_tmp_467_1032, 0, sizeof(_pgen_tmp_467_1032));
  memset(&_pgen_tmp_468_1033, 0, sizeof(_pgen_tmp_468_1033));
  memset(&_pgen_tmp_469_1034, 0, sizeof(_pgen_tmp_469_1034));
  memset(&_pgen_tmp_470_1035, 0, sizeof(_pgen_tmp_470_1035));
  memset(&_pgen_tmp_471_1036, 0, sizeof(_pgen_tmp_471_1036));
  memset(&_pgen_tmp_472_1037, 0, sizeof(_pgen_tmp_472_1037));
  memset(&_pgen_tmp_473_1038, 0, sizeof(_pgen_tmp_473_1038));
  memset(&_pgen_tmp_474_1039, 0, sizeof(_pgen_tmp_474_1039));
  memset(&_pgen_tmp_475_1040, 0, sizeof(_pgen_tmp_475_1040));
  memset(&_pgen_tmp_476_1041, 0, sizeof(_pgen_tmp_476_1041));
  memset(&_pgen_tmp_477_1042, 0, sizeof(_pgen_tmp_477_1042));
  memset(&_pgen_tmp_478_1043, 0, sizeof(_pgen_tmp_478_1043));
  memset(&_pgen_tmp_479_1044, 0, sizeof(_pgen_tmp_479_1044));
  memset(&_pgen_tmp_480_1045, 0, sizeof(_pgen_tmp_480_1045));
  memset(&_pgen_tmp_481_1046, 0, sizeof(_pgen_tmp_481_1046));
  memset(&_pgen_tmp_482_1047, 0, sizeof(_pgen_tmp_482_1047));
  memset(&_pgen_tmp_483_1048, 0, sizeof(_pgen_tmp_483_1048));
  memset(&_pgen_tmp_484_1049, 0, sizeof(_pgen_tmp_484_1049));
  memset(&_pgen_tmp_485_1050, 0, sizeof(_pgen_tmp_485_1050));
  memset(&_pgen_tmp_486_1051, 0, sizeof(_pgen_tmp_486_1051));
  memset(&_pgen_tmp_487_1052, 0, sizeof(_pgen_tmp_487_1052));
  memset(&_pgen_tmp_488_1053, 0, sizeof(_pgen_tmp_488_1053));
  memset(&_pgen_tmp_489_1054, 0, sizeof(_pgen_tmp_489_1054));
  memset(&_pgen_tmp_490_1055, 0, sizeof(_pgen_tmp_490_1055));
  memset(&_pgen_tmp_491_1056, 0, sizeof(_pgen_tmp_491_1056));
  memset(&_pgen_tmp_492_1057, 0, sizeof(_pgen_tmp_492_1057));
  memset(&_pgen_tmp_493_1058, 0, sizeof(_pgen_tmp_493_1058));
  memset(&_pgen_tmp_494_1059, 0, sizeof(_pgen_tmp_494_1059));
  memset(&_pgen_tmp_495_1060, 0, sizeof(_pgen_tmp_495_1060));
  memset(&_pgen_tmp_496_1061, 0, sizeof(_pgen_tmp_496_1061));
  memset(&_pgen_tmp_497_1062, 0, sizeof(_pgen_tmp_497_1062));
  memset(&_pgen_tmp_498_1063, 0, sizeof(_pgen_tmp_498_1063));
  memset(&_pgen_tmp_499_1064, 0, sizeof(_pgen_tmp_499_1064));
  memset(&_pgen_tmp_500_1065, 0, sizeof(_pgen_tmp_500_1065));
  memset(&_pgen_tmp_501_1066, 0, sizeof(_pgen_tmp_501_1066));
  memset(&_pgen_tmp_502_1067, 0, sizeof(_pgen_tmp_502_1067));
  memset(&_pgen_tmp_503_1068, 0, sizeof(_pgen_tmp_503_1068));
  memset(&_pgen_tmp_504_1069, 0, sizeof(_pgen_tmp_504_1069));
  memset(&_pgen_tmp_505_1070, 0, sizeof(_pgen_tmp_505_1070));
  memset(&_pgen_tmp_506_1071, 0, sizeof(_pgen_tmp_506_1071));
  memset(&_pgen_tmp_507_1072, 0, sizeof(_pgen_tmp_507_1072));
  memset(&_pgen_tmp_508_1073, 0, sizeof(_pgen_tmp_508_1073));
  memset(&_pgen_tmp_509_1074, 0, sizeof(_pgen_tmp_509_1074));
  memset(&_pgen_tmp_510_1075, 0, sizeof(_pgen_tmp_510_1075));
  memset(&_pgen_tmp_511_1076, 0, sizeof(_pgen_tmp_511_1076));
  memset(&_pgen_tmp_512_1077, 0, sizeof(_pgen_tmp_512_1077));
  memset(&_pgen_tmp_513_1078, 0, sizeof(_pgen_tmp_513_1078));
  memset(&_pgen_tmp_514_1079, 0, sizeof(_pgen_tmp_514_1079));
  memset(&_pgen_tmp_515_1080, 0, sizeof(_pgen_tmp_515_1080));
  memset(&_pgen_tmp_516_1081, 0, sizeof(_pgen_tmp_516_1081));
  memset(&_pgen_tmp_517_1082, 0, sizeof(_pgen_tmp_517_1082));
  memset(&_pgen_tmp_518_1083, 0, sizeof(_pgen_tmp_518_1083));
  memset(&_pgen_tmp_519_1084, 0, sizeof(_pgen_tmp_519_1084));
  memset(&_pgen_tmp_520_1085, 0, sizeof(_pgen_tmp_520_1085));
  memset(&_pgen_tmp_521_1086, 0, sizeof(_pgen_tmp_521_1086));
  memset(&_pgen_tmp_522_1087, 0, sizeof(_pgen_tmp_522_1087));
  memset(&_pgen_tmp_523_1088, 0, sizeof(_pgen_tmp_523_1088));
  memset(&_pgen_tmp_524_1089, 0, sizeof(_pgen_tmp_524_1089));
  memset(&_pgen_tmp_525_1090, 0, sizeof(_pgen_tmp_525_1090));
  memset(&_pgen_tmp_526_1091, 0, sizeof(_pgen_tmp_526_1091));
  memset(&_pgen_tmp_527_1092, 0, sizeof(_pgen_tmp_527_1092));
  memset(&_pgen_tmp_528_1093, 0, sizeof(_pgen_tmp_528_1093));
  memset(&_pgen_tmp_529_1094, 0, sizeof(_pgen_tmp_529_1094));
  memset(&_pgen_tmp_530_1095, 0, sizeof(_pgen_tmp_530_1095));
  memset(&_pgen_tmp_531_1096, 0, sizeof(_pgen_tmp_531_1096));
  memset(&_pgen_tmp_532_1097, 0, sizeof(_pgen_tmp_532_1097));
  memset(&_pgen_tmp_533_1098, 0, sizeof(_pgen_tmp_533_1098));
  memset(&_pgen_tmp_534_1099, 0, sizeof(_pgen_tmp_534_1099));
  memset(&_pgen_tmp_535_1100, 0, sizeof(_pgen_tmp_535_1100));
  memset(&_pgen_tmp_536_1101, 0, sizeof(_pgen_tmp_536_1101));
  memset(&_pgen_tmp_537_1102, 0, sizeof(_pgen_tmp_537_1102));
  memset(&_pgen_tmp_538_1103, 0, sizeof(_pgen_tmp_538_1103));
  memset(&_pgen_tmp_539_1104, 0, sizeof(_pgen_tmp_539_1104));
  memset(&_pgen_tmp_540_1105, 0, sizeof(_pgen_tmp_540_1105));
  memset(&_pgen_tmp_541_1106, 0, sizeof(_pgen_tmp_541_1106));
  memset(&_pgen_tmp_542_1107, 0, sizeof(_pgen_tmp_542_1107));
  memset(&_pgen_tmp_543_1108, 0, sizeof(_pgen_tmp_543_1108));
  memset(&_pgen_tmp_544_1109, 0, sizeof(_pgen_tmp_544_1109));
  memset(&_pgen_tmp_545_1110, 0, sizeof(_pgen_tmp_545_1110));
  memset(&_pgen_tmp_546_1111, 0, sizeof(_pgen_tmp_546_1111));
  memset(&_pgen_tmp_547_1112, 0, sizeof(_pgen_tmp_547_1112));
  memset(&_pgen_tmp_548_1113, 0, sizeof(_pgen_tmp_548_1113));
  memset(&_pgen_tmp_549_1114, 0, sizeof(_pgen_tmp_549_1114));
  memset(&_pgen_tmp_550_1115, 0, sizeof(_pgen_tmp_550_1115));
  memset(&_pgen_tmp_551_1116, 0, sizeof(_pgen_tmp_551_1116));
  memset(&_pgen_tmp_552_1117, 0, sizeof(_pgen_tmp_552_1117));
  memset(&_pgen_tmp_553_1118, 0, sizeof(_pgen_tmp_553_1118));
  memset(&_pgen_tmp_554_1119, 0, sizeof(_pgen_tmp_554_1119));
  memset(&_pgen_tmp_555_1120, 0, sizeof(_pgen_tmp_555_1120));
  memset(&_pgen_tmp_556_1121, 0, sizeof(_pgen_tmp_556_1121));
  memset(&_pgen_tmp_557_1122, 0, sizeof(_pgen_tmp_557_1122));
  memset(&_pgen_tmp_558_1123, 0, sizeof(_pgen_tmp_558_1123));
  memset(&_pgen_tmp_559_1124, 0, sizeof(_pgen_tmp_559_1124));
  memset(&_pgen_tmp_560_1125, 0, sizeof(_pgen_tmp_560_1125));
  memset(&_pgen_tmp_561_1126, 0, sizeof(_pgen_tmp_561_1126));
  memset(&_pgen_tmp_562_1127, 0, sizeof(_pgen_tmp_562_1127));
  memset(&_pgen_tmp_563_1128, 0, sizeof(_pgen_tmp_563_1128));
  memset(&_pgen_tmp_564_1129, 0, sizeof(_pgen_tmp_564_1129));
  memset(&_pgen_tmp_565_1130, 0, sizeof(_pgen_tmp_565_1130));
  memset(&_pgen_tmp_566_1131, 0, sizeof(_pgen_tmp_566_1131));
  memset(&_pgen_tmp_567_1132, 0, sizeof(_pgen_tmp_567_1132));
  memset(&_pgen_tmp_568_1133, 0, sizeof(_pgen_tmp_568_1133));
  memset(&_pgen_tmp_569_1134, 0, sizeof(_pgen_tmp_569_1134));
  memset(&_pgen_tmp_570_1135, 0, sizeof(_pgen_tmp_570_1135));
  memset(&_pgen_tmp_571_1136, 0, sizeof(_pgen_tmp_571_1136));
  memset(&_pgen_tmp_572_1137, 0, sizeof(_pgen_tmp_572_1137));
  memset(&_pgen_tmp_573_1138, 0, sizeof(_pgen_tmp_573_1138));
  memset(&_pgen_tmp_574_1139, 0, sizeof(_pgen_tmp_574_1139));
  memset(&_pgen_tmp_575_1140, 0, sizeof(_pgen_tmp_575_1140));
  memset(&_pgen_tmp_576_1141, 0, sizeof(_pgen_tmp_576_1141));
  memset(&_pgen_tmp_577_1142, 0, sizeof(_pgen_tmp_577_1142));
  memset(&_pgen_tmp_578_1143, 0, sizeof(_pgen_tmp_578_1143));
  memset(&_pgen_tmp_579_1144, 0, sizeof(_pgen_tmp_579_1144));
  memset(&_pgen_tmp_580_1145, 0, sizeof(_pgen_tmp_580_1145));
  memset(&_pgen_tmp_581_1146, 0, sizeof(_pgen_tmp_581_1146));
  memset(&_pgen_tmp_582_1147, 0, sizeof(_pgen_tmp_582_1147));
  memset(&_pgen_tmp_583_1148, 0, sizeof(_pgen_tmp_583_1148));
  memset(&_pgen_tmp_584_1149, 0, sizeof(_pgen_tmp_584_1149));
  memset(&_pgen_tmp_585_1150, 0, sizeof(_pgen_tmp_585_1150));
  memset(&_pgen_tmp_586_1151, 0, sizeof(_pgen_tmp_586_1151));
  memset(&_pgen_tmp_587_1152, 0, sizeof(_pgen_tmp_587_1152));
  memset(&_pgen_tmp_588_1153, 0, sizeof(_pgen_tmp_588_1153));
  memset(&_pgen_tmp_589_1154, 0, sizeof(_pgen_tmp_589_1154));
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
  // Conv_0
  // pragma: 65536, 1027, 33
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv1_1, 0, sizeof(VS_out_conv1_1));
  memset(&VS_out_conv_halo1_2, 0, sizeof(VS_out_conv_halo1_2));
  for (mesh_y_n1_3 = 0; mesh_y_n1_3 < 3; mesh_y_n1_3 = mesh_y_n1_3 + 1) {
    for (mesh_z_n1_4 = 0; mesh_z_n1_4 < 2; mesh_z_n1_4 = mesh_z_n1_4 + 1) {
      Copy_ciph(&_preg_268435456, &input_0[((mesh_y_n1_3 * 2) + mesh_z_n1_4)]);
      Copy_ciph(&input_dup_n34_5, &_preg_268435456);
      for (bs_input_n34_6 = 0; bs_input_n34_6 < 49; bs_input_n34_6 = bs_input_n34_6 + 1) {
        _preg_268435557 = Rotate(input_dup_n34_5, _cst_164[bs_input_n34_6]);
        Copy_ciph(&input_block_n34_7[bs_input_n34_6], &_preg_268435557);
        Free_poly_data(&_preg_268435557._c1_poly);
        Free_poly_data(&_preg_268435557._c0_poly);
      }
      for (mesh_x_n1_8 = 0; mesh_x_n1_8 < 96; mesh_x_n1_8 = mesh_x_n1_8 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=49
        Zero_ciph(&result_n35_9);
        for (num_grid_n35_10 = 0; num_grid_n35_10 < 1; num_grid_n35_10 = num_grid_n35_10 + 1) {
          Zero_ciph(&result_grid_n35_11);
          for (cap_block_n35_12 = 0; cap_block_n35_12 < 49; cap_block_n35_12 = cap_block_n35_12 + 1) {
            _ckks_gen_tmp_102_481 = input_block_n34_7[cap_block_n35_12];
            Pt_from_msg_ofst(&_pgen_tmp_0_565, 0/* cst_160 */, (((((mesh_x_n1_8 * 3) + mesh_y_n1_3) * 49) + (cap_block_n35_12 + (num_grid_n35_10 * 49)))) * (26432), 26432, 1, 4);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_1_566, &_ckks_gen_tmp_102_481, &_pgen_tmp_0_565);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n35_11, &result_grid_n35_11, &_pgen_tmp_1_566);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n35_11._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_1_566._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_102_481._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_0_565._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_1_566._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_102_481._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_0_565._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n35_11._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n35_11._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_1_566._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n35_11._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n35_11._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_1_566._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          _preg_268435558 = Rotate(result_grid_n35_11, num_grid_n35_10 * 26432);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n35_9, &result_n35_9, &_preg_268435558);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n35_9._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&result_n35_9._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n35_9._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435558._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n35_9._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n35_9._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435558._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435558._c1_poly);
          Free_poly_data(&_preg_268435558._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_2_567, 1 /* cst_163 */, 26432, 2, 4);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n35_9, &result_n35_9, &_pgen_tmp_2_567);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n35_9._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n35_9._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n35_9._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_2_567._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n35_9._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n35_9._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_4_569 = VS_out_conv1_1[((mesh_x_n1_8 * 2) + mesh_z_n1_4)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_3_568, &_pgen_tmp_4_569, &result_n35_9);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_3_568._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_3_568._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_4_569._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n35_9._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_3_568._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_4_569._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n35_9._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv1_1[((mesh_x_n1_8 * 2) + mesh_z_n1_4)], &_pgen_tmp_3_568);
      }
    }
  }
  Free_ciph_poly(input_0, 6);
  Free_poly_data(&_preg_268435456._c1_poly);
  Free_poly_data(&_preg_268435456._c0_poly);
  Free_poly_data(&input_dup_n34_5._c1_poly);
  Free_poly_data(&input_dup_n34_5._c0_poly);
  Free_ciph_poly(input_block_n34_7, 49);
  Free_poly_data(&_pgen_tmp_0_565._poly);
  Free_poly_data(&_pgen_tmp_1_566._c1_poly);
  Free_poly_data(&_pgen_tmp_1_566._c0_poly);
  Free_poly_data(&result_grid_n35_11._c1_poly);
  Free_poly_data(&result_grid_n35_11._c0_poly);
  Free_poly_data(&_pgen_tmp_2_567._poly);
  Free_poly_data(&result_n35_9._c1_poly);
  Free_poly_data(&result_n35_9._c0_poly);
  Free_poly_data(&_pgen_tmp_3_568._c1_poly);
  Free_poly_data(&_pgen_tmp_3_568._c0_poly);
  for (rescale_iv_529 = 0; rescale_iv_529 < 192; rescale_iv_529 = rescale_iv_529 + 1) {
    _pgen_tmp_5_570 = VS_out_conv1_1[rescale_iv_529];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_6_571, &_pgen_tmp_5_570);
    Rescale(&_pgen_tmp_6_571._c0_poly, &_pgen_tmp_5_570._c0_poly);
    Rescale(&_pgen_tmp_6_571._c1_poly, &_pgen_tmp_5_570._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv1_1[rescale_iv_529], &_pgen_tmp_6_571);
  }
  Free_poly_data(&_pgen_tmp_6_571._c1_poly);
  Free_poly_data(&_pgen_tmp_6_571._c0_poly);
  for (siv_n1_13 = 0; siv_n1_13 < 192; siv_n1_13 = siv_n1_13 + 1) {
    _pgen_tmp_7_572 = VS_out_conv1_1[siv_n1_13];
    _preg_268435559 = Rotate(_pgen_tmp_7_572, 672);
    Copy_ciph(&x_row35_14, &_preg_268435559);
    Zero_ciph(&comb_row_result36_15);
    for (comb_row_lf_index_n36_16 = 0; comb_row_lf_index_n36_16 < 1; comb_row_lf_index_n36_16 = comb_row_lf_index_n36_16 + 1) {
      _preg_268435560 = Rotate(x_row35_14, 1 << comb_row_lf_index_n36_16);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&x_row35_14, &x_row35_14, &_preg_268435560);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&x_row35_14._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&x_row35_14._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&x_row35_14._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435560._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&x_row35_14._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&x_row35_14._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435560._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435560._c1_poly);
      Free_poly_data(&_preg_268435560._c0_poly);
    }
    for (comb_row_index_n36_17 = 0; comb_row_index_n36_17 < 56; comb_row_index_n36_17 = comb_row_index_n36_17 + 1) {
      _preg_268435561 = Rotate(x_row35_14, comb_row_index_n36_17 * 2);
      Copy_ciph(&_ckks_gen_tmp_221_482, &_preg_268435561);
      Pt_from_msg_ofst(&_pgen_tmp_8_573, 2/* cst_165 */, (comb_row_index_n36_17) * (25088), 25088, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_9_574, &_ckks_gen_tmp_221_482, &_pgen_tmp_8_573);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_row_result36_15, &comb_row_result36_15, &_pgen_tmp_9_574);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&comb_row_result36_15._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_9_574._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_221_482._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_8_573._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_9_574._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_221_482._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_8_573._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&comb_row_result36_15._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_row_result36_15._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_9_574._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&comb_row_result36_15._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_row_result36_15._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_9_574._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435561._c1_poly);
      Free_poly_data(&_preg_268435561._c0_poly);
    }
    Zero_ciph(&comb_rc_result36_18);
    for (comb_rc_lf_index_n36_19 = 0; comb_rc_lf_index_n36_19 < 2; comb_rc_lf_index_n36_19 = comb_rc_lf_index_n36_19 + 1) {
      _preg_268435562 = Rotate(comb_row_result36_15, (1 << comb_rc_lf_index_n36_19) * 336);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_row_result36_15, &comb_row_result36_15, &_preg_268435562);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&comb_row_result36_15._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&comb_row_result36_15._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_row_result36_15._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435562._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&comb_row_result36_15._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_row_result36_15._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435562._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435562._c1_poly);
      Free_poly_data(&_preg_268435562._c0_poly);
    }
    for (comb_rc_index_n36_20 = 0; comb_rc_index_n36_20 < 14; comb_rc_index_n36_20 = comb_rc_index_n36_20 + 1) {
      _preg_268435563 = Rotate(comb_row_result36_15, comb_rc_index_n36_20 * 1344);
      Copy_ciph(&_ckks_gen_tmp_274_483, &_preg_268435563);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_10_575, &_ckks_gen_tmp_274_483);
      Rescale(&_pgen_tmp_10_575._c0_poly, &_ckks_gen_tmp_274_483._c0_poly);
      Rescale(&_pgen_tmp_10_575._c1_poly, &_ckks_gen_tmp_274_483._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg_ofst(&_pgen_tmp_11_576, 3/* cst_166 */, (comb_rc_index_n36_20) * (25088), 25088, 1, 2);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_12_577, &_pgen_tmp_10_575, &_pgen_tmp_11_576);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_rc_result36_18, &comb_rc_result36_18, &_pgen_tmp_12_577);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&comb_rc_result36_18._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_12_577._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_10_575._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_11_576._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_12_577._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_10_575._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_11_576._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&comb_rc_result36_18._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_rc_result36_18._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_12_577._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&comb_rc_result36_18._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_rc_result36_18._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_12_577._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435563._c1_poly);
      Free_poly_data(&_preg_268435563._c0_poly);
    }
    Copy_ciph(&VS_out_conv_halo1_2[siv_n1_13], &comb_rc_result36_18);
    Free_poly_data(&_preg_268435559._c1_poly);
    Free_poly_data(&_preg_268435559._c0_poly);
  }
  Free_ciph_poly(VS_out_conv1_1, 192);
  Free_poly_data(&x_row35_14._c1_poly);
  Free_poly_data(&x_row35_14._c0_poly);
  Free_poly_data(&_pgen_tmp_8_573._poly);
  Free_poly_data(&_ckks_gen_tmp_221_482._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_221_482._c0_poly);
  Free_poly_data(&_pgen_tmp_9_574._c1_poly);
  Free_poly_data(&_pgen_tmp_9_574._c0_poly);
  Free_poly_data(&comb_row_result36_15._c1_poly);
  Free_poly_data(&comb_row_result36_15._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_274_483._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_274_483._c0_poly);
  Free_poly_data(&_pgen_tmp_11_576._poly);
  Free_poly_data(&_pgen_tmp_10_575._c1_poly);
  Free_poly_data(&_pgen_tmp_10_575._c0_poly);
  Free_poly_data(&_pgen_tmp_12_577._c1_poly);
  Free_poly_data(&_pgen_tmp_12_577._c0_poly);
  Free_poly_data(&comb_rc_result36_18._c1_poly);
  Free_poly_data(&comb_rc_result36_18._c0_poly);
  for (rescale_iv_530 = 0; rescale_iv_530 < 192; rescale_iv_530 = rescale_iv_530 + 1) {
    _pgen_tmp_13_578 = VS_out_conv_halo1_2[rescale_iv_530];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_14_579, &_pgen_tmp_13_578);
    Rescale(&_pgen_tmp_14_579._c0_poly, &_pgen_tmp_13_578._c0_poly);
    Rescale(&_pgen_tmp_14_579._c1_poly, &_pgen_tmp_13_578._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv_halo1_2[rescale_iv_530], &_pgen_tmp_14_579);
  }
  Free_poly_data(&_pgen_tmp_14_579._c1_poly);
  Free_poly_data(&_pgen_tmp_14_579._c0_poly);
  for (reshardm_n1_21 = 0; reshardm_n1_21 < 48; reshardm_n1_21 = reshardm_n1_21 + 1) {
    _pgen_tmp_16_581 = VS_out_conv_halo1_2[(reshardm_n1_21 * 4)];
    _pgen_tmp_17_582 = VS_out_conv_halo1_2[((reshardm_n1_21 * 4) + 1)];
    _preg_268435564 = Rotate(_pgen_tmp_17_582, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_18_583, &_pgen_tmp_16_581, &_preg_268435564);
    CMPLR_TM_END(12, 0);
    _pgen_tmp_20_585 = VS_out_conv_halo1_2[((reshardm_n1_21 * 4) + 2)];
    _pgen_tmp_21_586 = VS_out_conv_halo1_2[((reshardm_n1_21 * 4) + 3)];
    _preg_268435565 = Rotate(_pgen_tmp_21_586, -6272);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_19_584, &_pgen_tmp_20_585, &_preg_268435565);
    _pgen_modulus_562 = Q_modulus();
    _pgen_num_q_563 = Poly_level(&_pgen_tmp_19_584._c0_poly);
    for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_19_584._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_20_585._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435565._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_19_584._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_20_585._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435565._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      _pgen_modulus_562 = _pgen_modulus_562 + 1;
    }
    CMPLR_TM_END(12, 0);
    _preg_268435566 = Rotate(_pgen_tmp_19_584, -12544);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_15_580, &_pgen_tmp_18_583, &_preg_268435566);
    _pgen_modulus_562 = Q_modulus();
    _pgen_num_q_563 = Poly_level(&_pgen_tmp_15_580._c0_poly);
    for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_18_583._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_16_581._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435564._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_18_583._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_16_581._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435564._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_15_580._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_18_583._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435566._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_15_580._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_18_583._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435566._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      _pgen_modulus_562 = _pgen_modulus_562 + 1;
    }
    CMPLR_TM_END(12, 0);
    Copy_ciph(&output_reshard1_22[reshardm_n1_21], &_pgen_tmp_15_580);
    Free_poly_data(&_preg_268435564._c1_poly);
    Free_poly_data(&_preg_268435564._c0_poly);
    Free_poly_data(&_preg_268435565._c1_poly);
    Free_poly_data(&_preg_268435565._c0_poly);
    Free_poly_data(&_preg_268435566._c1_poly);
    Free_poly_data(&_preg_268435566._c0_poly);
  }
  Free_ciph_poly(VS_out_conv_halo1_2, 192);
  Free_poly_data(&_pgen_tmp_19_584._c1_poly);
  Free_poly_data(&_pgen_tmp_19_584._c0_poly);
  Free_poly_data(&_pgen_tmp_18_583._c1_poly);
  Free_poly_data(&_pgen_tmp_18_583._c0_poly);
  Free_poly_data(&_pgen_tmp_15_580._c1_poly);
  Free_poly_data(&_pgen_tmp_15_580._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 33
  // Relu_1
  // pragma: 65536, 1033, 39
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu1_23, 0, sizeof(VS_out_relu1_23));
  for (mesh_y_n1_24 = 0; mesh_y_n1_24 < 48; mesh_y_n1_24 = mesh_y_n1_24 + 1) {
    for (mesh_z_n1_25 = 0; mesh_z_n1_25 < 1; mesh_z_n1_25 = mesh_z_n1_25 + 1) {
      _pgen_tmp_22_587 = output_reshard1_22[((mesh_y_n1_24 * 1) + mesh_z_n1_25)];
      Bootstrap(&_preg_268435457, &_pgen_tmp_22_587, 19);
      Encode_float(&_pgen_tmp_23_588, &_cst_413, 1, 1, Level(&_preg_268435457));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435459, &_preg_268435457, &_pgen_tmp_23_588);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_preg_268435459._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_preg_268435459._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435457._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_23_588._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_preg_268435459._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435457._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_23_588._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_24_589, &_preg_268435459);
      Rescale(&_pgen_tmp_24_589._c0_poly, &_preg_268435459._c0_poly);
      Rescale(&_pgen_tmp_24_589._c1_poly, &_preg_268435459._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435458 = App_relu(_preg_268435457, _pgen_tmp_24_589, 25088);
      _pgen_tmp_26_591 = VS_out_relu1_23[((mesh_y_n1_24 * 1) + mesh_z_n1_25)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_25_590, &_pgen_tmp_26_591, &_preg_268435458);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_pgen_tmp_25_590._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_25_590._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_26_591._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435458._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_25_590._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_26_591._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435458._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu1_23[((mesh_y_n1_24 * 1) + mesh_z_n1_25)], &_pgen_tmp_25_590);
    }
  }
  Free_ciph_poly(output_reshard1_22, 48);
  Free_poly_data(&_pgen_tmp_23_588._poly);
  Free_poly_data(&_preg_268435459._c1_poly);
  Free_poly_data(&_preg_268435459._c0_poly);
  Free_poly_data(&_pgen_tmp_24_589._c1_poly);
  Free_poly_data(&_pgen_tmp_24_589._c0_poly);
  Free_poly_data(&_preg_268435457._c1_poly);
  Free_poly_data(&_preg_268435457._c0_poly);
  Free_poly_data(&_preg_268435458._c1_poly);
  Free_poly_data(&_preg_268435458._c0_poly);
  Free_poly_data(&_pgen_tmp_25_590._c1_poly);
  Free_poly_data(&_pgen_tmp_25_590._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 39
  // MaxPool_2
  // pragma: 65536, 1031, 40
  CMPLR_TM_START(3, 0);
  memset(&VS_out_avp1_26, 0, sizeof(VS_out_avp1_26));
  for (mesh_y_n1_27 = 0; mesh_y_n1_27 < 48; mesh_y_n1_27 = mesh_y_n1_27 + 1) {
    for (mesh_z_n1_28 = 0; mesh_z_n1_28 < 1; mesh_z_n1_28 = mesh_z_n1_28 + 1) {
      Copy_ciph(&_preg_268435460, &VS_out_relu1_23[((mesh_y_n1_27 * 1) + mesh_z_n1_28)]);
      _preg_268435567 = Rotate(_preg_268435460, 112);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&tmp_row_add36_29, &_preg_268435460, &_preg_268435567);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&tmp_row_add36_29._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&tmp_row_add36_29._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435460._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435567._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&tmp_row_add36_29._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435460._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435567._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      _preg_268435568 = Rotate(tmp_row_add36_29, 1);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_ckks_gen_tmp_465_484, &tmp_row_add36_29, &_preg_268435568);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_ckks_gen_tmp_465_484._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&_ckks_gen_tmp_465_484._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&tmp_row_add36_29._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435568._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&_ckks_gen_tmp_465_484._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&tmp_row_add36_29._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435568._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Pt_from_msg(&_pgen_tmp_27_592, 4 /* cst_167 */, 25088, 1, 7);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435461, &_ckks_gen_tmp_465_484, &_pgen_tmp_27_592);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_preg_268435461._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_preg_268435461._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_465_484._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_27_592._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_preg_268435461._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_465_484._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_27_592._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      Copy_ciph(&orig_result36_30, &_preg_268435461);
      Zero_ciph(&comb_row_result37_31);
      for (comb_row_lf_index_n37_32 = 0; comb_row_lf_index_n37_32 < 1; comb_row_lf_index_n37_32 = comb_row_lf_index_n37_32 + 1) {
        _preg_268435569 = Rotate(orig_result36_30, 1 << comb_row_lf_index_n37_32);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&orig_result36_30, &orig_result36_30, &_preg_268435569);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&orig_result36_30._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&orig_result36_30._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&orig_result36_30._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435569._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&orig_result36_30._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&orig_result36_30._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435569._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435569._c1_poly);
        Free_poly_data(&_preg_268435569._c0_poly);
      }
      for (comb_row_index_n37_33 = 0; comb_row_index_n37_33 < 28; comb_row_index_n37_33 = comb_row_index_n37_33 + 1) {
        _preg_268435570 = Rotate(orig_result36_30, comb_row_index_n37_33 * 2);
        Copy_ciph(&_ckks_gen_tmp_514_485, &_preg_268435570);
        CMPLR_TM_START(19, 0);
        Init_ciph_down_scale(&_pgen_tmp_28_593, &_ckks_gen_tmp_514_485);
        Rescale(&_pgen_tmp_28_593._c0_poly, &_ckks_gen_tmp_514_485._c0_poly);
        Rescale(&_pgen_tmp_28_593._c1_poly, &_ckks_gen_tmp_514_485._c1_poly);
        CMPLR_TM_END(19, 0);
        Pt_from_msg_ofst(&_pgen_tmp_29_594, 5/* cst_168 */, (comb_row_index_n37_33) * (25088), 25088, 1, 6);
        CMPLR_TM_START(17, 0);
        Init_ciph_up_scale_plain(&_pgen_tmp_30_595, &_pgen_tmp_28_593, &_pgen_tmp_29_594);
        CMPLR_TM_END(17, 0);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_row_result37_31, &comb_row_result37_31, &_pgen_tmp_30_595);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&comb_row_result37_31._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modmul(Coeffs(&_pgen_tmp_30_595._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_28_593._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_29_594._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modmul(Coeffs(&_pgen_tmp_30_595._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_28_593._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_29_594._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_row_result37_31._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_row_result37_31._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_30_595._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_row_result37_31._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_row_result37_31._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_30_595._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435570._c1_poly);
        Free_poly_data(&_preg_268435570._c0_poly);
      }
      Zero_ciph(&comb_rc_result37_34);
      for (comb_rc_lf_index_n37_35 = 0; comb_rc_lf_index_n37_35 < 2; comb_rc_lf_index_n37_35 = comb_rc_lf_index_n37_35 + 1) {
        _preg_268435571 = Rotate(comb_row_result37_31, (1 << comb_rc_lf_index_n37_35) * 168);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_row_result37_31, &comb_row_result37_31, &_preg_268435571);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&comb_row_result37_31._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&comb_row_result37_31._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_row_result37_31._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435571._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_row_result37_31._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_row_result37_31._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435571._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435571._c1_poly);
        Free_poly_data(&_preg_268435571._c0_poly);
      }
      for (comb_rc_index_n37_36 = 0; comb_rc_index_n37_36 < 14; comb_rc_index_n37_36 = comb_rc_index_n37_36 + 1) {
        _preg_268435572 = Rotate(comb_row_result37_31, comb_rc_index_n37_36 * 672);
        Copy_ciph(&_ckks_gen_tmp_567_486, &_preg_268435572);
        CMPLR_TM_START(19, 0);
        Init_ciph_down_scale(&_pgen_tmp_31_596, &_ckks_gen_tmp_567_486);
        Rescale(&_pgen_tmp_31_596._c0_poly, &_ckks_gen_tmp_567_486._c0_poly);
        Rescale(&_pgen_tmp_31_596._c1_poly, &_ckks_gen_tmp_567_486._c1_poly);
        CMPLR_TM_END(19, 0);
        Pt_from_msg_ofst(&_pgen_tmp_32_597, 6/* cst_169 */, (comb_rc_index_n37_36) * (25088), 25088, 1, 5);
        CMPLR_TM_START(17, 0);
        Init_ciph_up_scale_plain(&_pgen_tmp_33_598, &_pgen_tmp_31_596, &_pgen_tmp_32_597);
        CMPLR_TM_END(17, 0);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_rc_result37_34, &comb_rc_result37_34, &_pgen_tmp_33_598);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&comb_rc_result37_34._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modmul(Coeffs(&_pgen_tmp_33_598._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_31_596._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_32_597._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modmul(Coeffs(&_pgen_tmp_33_598._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_31_596._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_32_597._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_rc_result37_34._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_rc_result37_34._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_33_598._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_rc_result37_34._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_rc_result37_34._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_33_598._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435572._c1_poly);
        Free_poly_data(&_preg_268435572._c0_poly);
      }
      Zero_ciph(&ss_result37_37);
      for (comb_cc_index_n37_38 = 0; comb_cc_index_n37_38 < 1; comb_cc_index_n37_38 = comb_cc_index_n37_38 + 1) {
        _preg_268435573 = Rotate(comb_rc_result37_34, (1 << comb_cc_index_n37_38) * 9408);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_rc_result37_34, &comb_rc_result37_34, &_preg_268435573);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&comb_rc_result37_34._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&comb_rc_result37_34._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_rc_result37_34._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435573._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_rc_result37_34._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_rc_result37_34._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435573._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435573._c1_poly);
        Free_poly_data(&_preg_268435573._c0_poly);
      }
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_34_599, &comb_rc_result37_34);
      Rescale(&_pgen_tmp_34_599._c0_poly, &comb_rc_result37_34._c0_poly);
      Rescale(&_pgen_tmp_34_599._c1_poly, &comb_rc_result37_34._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg(&_pgen_tmp_35_600, 7 /* cst_170 */, 6272, 1, 4);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&comb_rc_result37_34, &_pgen_tmp_34_599, &_pgen_tmp_35_600);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&comb_rc_result37_34._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&comb_rc_result37_34._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_34_599._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_35_600._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&comb_rc_result37_34._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_34_599._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_35_600._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      Copy_ciph(&ss_result37_37, &comb_rc_result37_34);
      Copy_ciph(&VS_out_avp1_26[((mesh_y_n1_27 * 1) + mesh_z_n1_28)], &ss_result37_37);
      Free_poly_data(&_preg_268435567._c1_poly);
      Free_poly_data(&_preg_268435567._c0_poly);
      Free_poly_data(&_preg_268435568._c1_poly);
      Free_poly_data(&_preg_268435568._c0_poly);
    }
  }
  Free_ciph_poly(VS_out_relu1_23, 48);
  Free_poly_data(&_preg_268435460._c1_poly);
  Free_poly_data(&_preg_268435460._c0_poly);
  Free_poly_data(&tmp_row_add36_29._c1_poly);
  Free_poly_data(&tmp_row_add36_29._c0_poly);
  Free_poly_data(&_pgen_tmp_27_592._poly);
  Free_poly_data(&_ckks_gen_tmp_465_484._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_465_484._c0_poly);
  Free_poly_data(&_preg_268435461._c1_poly);
  Free_poly_data(&_preg_268435461._c0_poly);
  Free_poly_data(&orig_result36_30._c1_poly);
  Free_poly_data(&orig_result36_30._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_514_485._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_514_485._c0_poly);
  Free_poly_data(&_pgen_tmp_29_594._poly);
  Free_poly_data(&_pgen_tmp_28_593._c1_poly);
  Free_poly_data(&_pgen_tmp_28_593._c0_poly);
  Free_poly_data(&_pgen_tmp_30_595._c1_poly);
  Free_poly_data(&_pgen_tmp_30_595._c0_poly);
  Free_poly_data(&comb_row_result37_31._c1_poly);
  Free_poly_data(&comb_row_result37_31._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_567_486._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_567_486._c0_poly);
  Free_poly_data(&_pgen_tmp_32_597._poly);
  Free_poly_data(&_pgen_tmp_31_596._c1_poly);
  Free_poly_data(&_pgen_tmp_31_596._c0_poly);
  Free_poly_data(&_pgen_tmp_33_598._c1_poly);
  Free_poly_data(&_pgen_tmp_33_598._c0_poly);
  Free_poly_data(&_pgen_tmp_35_600._poly);
  Free_poly_data(&_pgen_tmp_34_599._c1_poly);
  Free_poly_data(&_pgen_tmp_34_599._c0_poly);
  Free_poly_data(&comb_rc_result37_34._c1_poly);
  Free_poly_data(&comb_rc_result37_34._c0_poly);
  Free_poly_data(&ss_result37_37._c1_poly);
  Free_poly_data(&ss_result37_37._c0_poly);
  for (rescale_iv_531 = 0; rescale_iv_531 < 48; rescale_iv_531 = rescale_iv_531 + 1) {
    _pgen_tmp_36_601 = VS_out_avp1_26[rescale_iv_531];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_37_602, &_pgen_tmp_36_601);
    Rescale(&_pgen_tmp_37_602._c0_poly, &_pgen_tmp_36_601._c0_poly);
    Rescale(&_pgen_tmp_37_602._c1_poly, &_pgen_tmp_36_601._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_avp1_26[rescale_iv_531], &_pgen_tmp_37_602);
  }
  Free_poly_data(&_pgen_tmp_37_602._c1_poly);
  Free_poly_data(&_pgen_tmp_37_602._c0_poly);
  for (reshardm_n1_39 = 0; reshardm_n1_39 < 12; reshardm_n1_39 = reshardm_n1_39 + 1) {
    _pgen_tmp_39_604 = VS_out_avp1_26[(reshardm_n1_39 * 4)];
    _pgen_tmp_40_605 = VS_out_avp1_26[((reshardm_n1_39 * 4) + 1)];
    _preg_268435574 = Rotate(_pgen_tmp_40_605, -6050);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_41_606, &_pgen_tmp_39_604, &_preg_268435574);
    CMPLR_TM_END(12, 0);
    _pgen_tmp_43_608 = VS_out_avp1_26[((reshardm_n1_39 * 4) + 2)];
    _pgen_tmp_44_609 = VS_out_avp1_26[((reshardm_n1_39 * 4) + 3)];
    _preg_268435575 = Rotate(_pgen_tmp_44_609, -6050);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_42_607, &_pgen_tmp_43_608, &_preg_268435575);
    _pgen_modulus_562 = Q_modulus();
    _pgen_num_q_563 = Poly_level(&_pgen_tmp_42_607._c0_poly);
    for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_42_607._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_43_608._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435575._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_42_607._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_43_608._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435575._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      _pgen_modulus_562 = _pgen_modulus_562 + 1;
    }
    CMPLR_TM_END(12, 0);
    _preg_268435576 = Rotate(_pgen_tmp_42_607, -12100);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_38_603, &_pgen_tmp_41_606, &_preg_268435576);
    _pgen_modulus_562 = Q_modulus();
    _pgen_num_q_563 = Poly_level(&_pgen_tmp_38_603._c0_poly);
    for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_41_606._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_39_604._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435574._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_41_606._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_39_604._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435574._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_38_603._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_41_606._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435576._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_38_603._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_41_606._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435576._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      _pgen_modulus_562 = _pgen_modulus_562 + 1;
    }
    CMPLR_TM_END(12, 0);
    Copy_ciph(&output_reshard1_40[reshardm_n1_39], &_pgen_tmp_38_603);
    Free_poly_data(&_preg_268435574._c1_poly);
    Free_poly_data(&_preg_268435574._c0_poly);
    Free_poly_data(&_preg_268435575._c1_poly);
    Free_poly_data(&_preg_268435575._c0_poly);
    Free_poly_data(&_preg_268435576._c1_poly);
    Free_poly_data(&_preg_268435576._c0_poly);
  }
  Free_ciph_poly(VS_out_avp1_26, 48);
  Free_poly_data(&_pgen_tmp_42_607._c1_poly);
  Free_poly_data(&_pgen_tmp_42_607._c0_poly);
  Free_poly_data(&_pgen_tmp_41_606._c1_poly);
  Free_poly_data(&_pgen_tmp_41_606._c0_poly);
  Free_poly_data(&_pgen_tmp_38_603._c1_poly);
  Free_poly_data(&_pgen_tmp_38_603._c0_poly);
  CMPLR_TM_END(3, 0);
  // pragma: 65537, 1031, 40
  // Conv_3
  // pragma: 65536, 1027, 42
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv2_41, 0, sizeof(VS_out_conv2_41));
  memset(&VS_out_conv_halo2_42, 0, sizeof(VS_out_conv_halo2_42));
  Free_ciph_poly(VS_out_conv_halo2_42, 2);
  for (mesh_y_n2_43 = 0; mesh_y_n2_43 < 12; mesh_y_n2_43 = mesh_y_n2_43 + 1) {
    for (mesh_z_n2_44 = 0; mesh_z_n2_44 < 1; mesh_z_n2_44 = mesh_z_n2_44 + 1) {
      Copy_ciph(&_preg_268435462, &output_reshard1_40[((mesh_y_n2_43 * 1) + mesh_z_n2_44)]);
      Copy_ciph(&input_dup_n37_45, &_preg_268435462);
      for (bs_input_n37_46 = 0; bs_input_n37_46 < 1; bs_input_n37_46 = bs_input_n37_46 + 1) {
        _preg_268435577 = Rotate(input_dup_n37_45, _cst_175[bs_input_n37_46]);
        Copy_ciph(&input_block_n37_47[bs_input_n37_46], &_preg_268435577);
        Free_poly_data(&_preg_268435577._c1_poly);
        Free_poly_data(&_preg_268435577._c0_poly);
      }
      for (mesh_x_n2_48 = 0; mesh_x_n2_48 < 2; mesh_x_n2_48 = mesh_x_n2_48 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n38_49);
        for (num_grid_n38_50 = 0; num_grid_n38_50 < 8; num_grid_n38_50 = num_grid_n38_50 + 1) {
          Zero_ciph(&result_grid_n38_51);
          for (cap_block_n38_52 = 0; cap_block_n38_52 < 1; cap_block_n38_52 = cap_block_n38_52 + 1) {
            _ckks_gen_tmp_780_487 = input_block_n37_47[cap_block_n38_52];
            Pt_from_msg_ofst(&_pgen_tmp_45_610, 8/* cst_171 */, (((((mesh_x_n2_48 * 12) + mesh_y_n2_43) * 8) + (cap_block_n38_52 + (num_grid_n38_50 * 1)))) * (24200), 24200, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_46_611, &_ckks_gen_tmp_780_487, &_pgen_tmp_45_610);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n38_51, &result_grid_n38_51, &_pgen_tmp_46_611);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n38_51._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_46_611._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_780_487._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_45_610._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_46_611._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_780_487._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_45_610._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n38_51._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n38_51._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_46_611._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n38_51._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n38_51._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_46_611._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_48_613, &result_grid_n38_51);
          Rescale(&_pgen_tmp_48_613._c0_poly, &result_grid_n38_51._c0_poly);
          Rescale(&_pgen_tmp_48_613._c1_poly, &result_grid_n38_51._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_49_614, 9/* cst_176 */, (num_grid_n38_50) * (24200), 24200, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_47_612, &_pgen_tmp_48_613, &_pgen_tmp_49_614);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_47_612._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_47_612._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_48_613._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_49_614._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_47_612._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_48_613._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_49_614._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435578 = Rotate(_pgen_tmp_47_612, -24200 + (num_grid_n38_50 * 3025));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_51_616, &result_grid_n38_51);
          Rescale(&_pgen_tmp_51_616._c0_poly, &result_grid_n38_51._c0_poly);
          Rescale(&_pgen_tmp_51_616._c1_poly, &result_grid_n38_51._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_52_617, 10/* cst_177 */, (num_grid_n38_50) * (24200), 24200, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_50_615, &_pgen_tmp_51_616, &_pgen_tmp_52_617);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_50_615._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_50_615._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_51_616._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_52_617._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_50_615._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_51_616._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_52_617._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435579 = Rotate(_pgen_tmp_50_615, num_grid_n38_50 * 3025);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_53_618, &_preg_268435578, &_preg_268435579);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n38_49, &result_n38_49, &_pgen_tmp_53_618);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n38_49._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_53_618._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435578._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435579._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_53_618._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435578._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435579._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n38_49._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n38_49._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_53_618._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n38_49._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n38_49._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_53_618._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435578._c1_poly);
          Free_poly_data(&_preg_268435578._c0_poly);
          Free_poly_data(&_preg_268435579._c1_poly);
          Free_poly_data(&_preg_268435579._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_54_619, 11 /* cst_174 */, 24200, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n38_49, &result_n38_49, &_pgen_tmp_54_619);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n38_49._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n38_49._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n38_49._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_54_619._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n38_49._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n38_49._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_56_621 = VS_out_conv2_41[((mesh_x_n2_48 * 1) + mesh_z_n2_44)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_55_620, &_pgen_tmp_56_621, &result_n38_49);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_55_620._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_55_620._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_56_621._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n38_49._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_55_620._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_56_621._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n38_49._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv2_41[((mesh_x_n2_48 * 1) + mesh_z_n2_44)], &_pgen_tmp_55_620);
      }
    }
  }
  Free_ciph_poly(output_reshard1_40, 12);
  Free_poly_data(&_preg_268435462._c1_poly);
  Free_poly_data(&_preg_268435462._c0_poly);
  Free_poly_data(&input_dup_n37_45._c1_poly);
  Free_poly_data(&input_dup_n37_45._c0_poly);
  Free_ciph_poly(input_block_n37_47, 1);
  Free_poly_data(&_pgen_tmp_45_610._poly);
  Free_poly_data(&_pgen_tmp_46_611._c1_poly);
  Free_poly_data(&_pgen_tmp_46_611._c0_poly);
  Free_poly_data(&_pgen_tmp_49_614._poly);
  Free_poly_data(&_pgen_tmp_48_613._c1_poly);
  Free_poly_data(&_pgen_tmp_48_613._c0_poly);
  Free_poly_data(&_pgen_tmp_47_612._c1_poly);
  Free_poly_data(&_pgen_tmp_47_612._c0_poly);
  Free_poly_data(&result_grid_n38_51._c1_poly);
  Free_poly_data(&result_grid_n38_51._c0_poly);
  Free_poly_data(&_pgen_tmp_52_617._poly);
  Free_poly_data(&_pgen_tmp_51_616._c1_poly);
  Free_poly_data(&_pgen_tmp_51_616._c0_poly);
  Free_poly_data(&_pgen_tmp_50_615._c1_poly);
  Free_poly_data(&_pgen_tmp_50_615._c0_poly);
  Free_poly_data(&_pgen_tmp_53_618._c1_poly);
  Free_poly_data(&_pgen_tmp_53_618._c0_poly);
  Free_poly_data(&_pgen_tmp_54_619._poly);
  Free_poly_data(&result_n38_49._c1_poly);
  Free_poly_data(&result_n38_49._c0_poly);
  Free_poly_data(&_pgen_tmp_55_620._c1_poly);
  Free_poly_data(&_pgen_tmp_55_620._c0_poly);
  for (rescale_iv_532 = 0; rescale_iv_532 < 2; rescale_iv_532 = rescale_iv_532 + 1) {
    _pgen_tmp_57_622 = VS_out_conv2_41[rescale_iv_532];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_58_623, &_pgen_tmp_57_622);
    Rescale(&_pgen_tmp_58_623._c0_poly, &_pgen_tmp_57_622._c0_poly);
    Rescale(&_pgen_tmp_58_623._c1_poly, &_pgen_tmp_57_622._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv2_41[rescale_iv_532], &_pgen_tmp_58_623);
  }
  Free_poly_data(&_pgen_tmp_58_623._c1_poly);
  Free_poly_data(&_pgen_tmp_58_623._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 42
  // Relu_4
  // pragma: 65536, 1033, 43
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu2_53, 0, sizeof(VS_out_relu2_53));
  for (mesh_y_n2_54 = 0; mesh_y_n2_54 < 2; mesh_y_n2_54 = mesh_y_n2_54 + 1) {
    for (mesh_z_n2_55 = 0; mesh_z_n2_55 < 1; mesh_z_n2_55 = mesh_z_n2_55 + 1) {
      _pgen_tmp_59_624 = VS_out_conv2_41[((mesh_y_n2_54 * 1) + mesh_z_n2_55)];
      Bootstrap(&_preg_268435463, &_pgen_tmp_59_624, 15);
      Encode_float(&_pgen_tmp_60_625, &_cst_414, 1, 1, Level(&_preg_268435463));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435465, &_preg_268435463, &_pgen_tmp_60_625);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_preg_268435465._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_preg_268435465._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435463._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_60_625._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_preg_268435465._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435463._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_60_625._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_61_626, &_preg_268435465);
      Rescale(&_pgen_tmp_61_626._c0_poly, &_preg_268435465._c0_poly);
      Rescale(&_pgen_tmp_61_626._c1_poly, &_preg_268435465._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435464 = App_relu(_preg_268435463, _pgen_tmp_61_626, 24200);
      _pgen_tmp_63_628 = VS_out_relu2_53[((mesh_y_n2_54 * 1) + mesh_z_n2_55)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_62_627, &_pgen_tmp_63_628, &_preg_268435464);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_pgen_tmp_62_627._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_62_627._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_63_628._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435464._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_62_627._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_63_628._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435464._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu2_53[((mesh_y_n2_54 * 1) + mesh_z_n2_55)], &_pgen_tmp_62_627);
    }
  }
  Free_ciph_poly(VS_out_conv2_41, 2);
  Free_poly_data(&_pgen_tmp_60_625._poly);
  Free_poly_data(&_preg_268435465._c1_poly);
  Free_poly_data(&_preg_268435465._c0_poly);
  Free_poly_data(&_pgen_tmp_61_626._c1_poly);
  Free_poly_data(&_pgen_tmp_61_626._c0_poly);
  Free_poly_data(&_preg_268435463._c1_poly);
  Free_poly_data(&_preg_268435463._c0_poly);
  Free_poly_data(&_preg_268435464._c1_poly);
  Free_poly_data(&_preg_268435464._c0_poly);
  Free_poly_data(&_pgen_tmp_62_627._c1_poly);
  Free_poly_data(&_pgen_tmp_62_627._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 43
  // Conv_5
  // pragma: 65536, 1027, 44
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv3_56, 0, sizeof(VS_out_conv3_56));
  memset(&VS_out_conv_halo3_57, 0, sizeof(VS_out_conv_halo3_57));
  Free_ciph_poly(VS_out_conv_halo3_57, 8);
  for (mesh_y_n3_58 = 0; mesh_y_n3_58 < 2; mesh_y_n3_58 = mesh_y_n3_58 + 1) {
    for (mesh_z_n3_59 = 0; mesh_z_n3_59 < 1; mesh_z_n3_59 = mesh_z_n3_59 + 1) {
      Copy_ciph(&_preg_268435466, &VS_out_relu2_53[((mesh_y_n3_58 * 1) + mesh_z_n3_59)]);
      Copy_ciph(&input_dup_n38_60, &_preg_268435466);
      for (bs_input_n38_61 = 0; bs_input_n38_61 < 1; bs_input_n38_61 = bs_input_n38_61 + 1) {
        _preg_268435580 = Rotate(input_dup_n38_60, _cst_182[bs_input_n38_61]);
        Copy_ciph(&input_block_n38_62[bs_input_n38_61], &_preg_268435580);
        Free_poly_data(&_preg_268435580._c1_poly);
        Free_poly_data(&_preg_268435580._c0_poly);
      }
      for (mesh_x_n3_63 = 0; mesh_x_n3_63 < 8; mesh_x_n3_63 = mesh_x_n3_63 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n39_64);
        for (num_grid_n39_65 = 0; num_grid_n39_65 < 8; num_grid_n39_65 = num_grid_n39_65 + 1) {
          Zero_ciph(&result_grid_n39_66);
          for (cap_block_n39_67 = 0; cap_block_n39_67 < 1; cap_block_n39_67 = cap_block_n39_67 + 1) {
            _ckks_gen_tmp_1045_488 = input_block_n38_62[cap_block_n39_67];
            Pt_from_msg_ofst(&_pgen_tmp_64_629, 12/* cst_178 */, (((((mesh_x_n3_63 * 2) + mesh_y_n3_58) * 8) + (cap_block_n39_67 + (num_grid_n39_65 * 1)))) * (24200), 24200, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_65_630, &_ckks_gen_tmp_1045_488, &_pgen_tmp_64_629);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n39_66, &result_grid_n39_66, &_pgen_tmp_65_630);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n39_66._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_65_630._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_1045_488._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_64_629._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_65_630._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_1045_488._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_64_629._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n39_66._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n39_66._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_65_630._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n39_66._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n39_66._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_65_630._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_67_632, &result_grid_n39_66);
          Rescale(&_pgen_tmp_67_632._c0_poly, &result_grid_n39_66._c0_poly);
          Rescale(&_pgen_tmp_67_632._c1_poly, &result_grid_n39_66._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_68_633, 13/* cst_183 */, (num_grid_n39_65) * (24200), 24200, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_66_631, &_pgen_tmp_67_632, &_pgen_tmp_68_633);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_66_631._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_66_631._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_67_632._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_68_633._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_66_631._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_67_632._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_68_633._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435581 = Rotate(_pgen_tmp_66_631, -24200 + (num_grid_n39_65 * 3025));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_70_635, &result_grid_n39_66);
          Rescale(&_pgen_tmp_70_635._c0_poly, &result_grid_n39_66._c0_poly);
          Rescale(&_pgen_tmp_70_635._c1_poly, &result_grid_n39_66._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_71_636, 14/* cst_184 */, (num_grid_n39_65) * (24200), 24200, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_69_634, &_pgen_tmp_70_635, &_pgen_tmp_71_636);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_69_634._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_69_634._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_70_635._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_71_636._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_69_634._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_70_635._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_71_636._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435582 = Rotate(_pgen_tmp_69_634, num_grid_n39_65 * 3025);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_72_637, &_preg_268435581, &_preg_268435582);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n39_64, &result_n39_64, &_pgen_tmp_72_637);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n39_64._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_72_637._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435581._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435582._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_72_637._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435581._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435582._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n39_64._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n39_64._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_72_637._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n39_64._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n39_64._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_72_637._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435581._c1_poly);
          Free_poly_data(&_preg_268435581._c0_poly);
          Free_poly_data(&_preg_268435582._c1_poly);
          Free_poly_data(&_preg_268435582._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_73_638, 15 /* cst_181 */, 24200, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n39_64, &result_n39_64, &_pgen_tmp_73_638);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n39_64._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n39_64._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n39_64._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_73_638._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n39_64._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n39_64._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_75_640 = VS_out_conv3_56[((mesh_x_n3_63 * 1) + mesh_z_n3_59)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_74_639, &_pgen_tmp_75_640, &result_n39_64);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_74_639._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_74_639._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_75_640._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n39_64._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_74_639._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_75_640._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n39_64._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv3_56[((mesh_x_n3_63 * 1) + mesh_z_n3_59)], &_pgen_tmp_74_639);
      }
    }
  }
  Free_poly_data(&_preg_268435466._c1_poly);
  Free_poly_data(&_preg_268435466._c0_poly);
  Free_poly_data(&input_dup_n38_60._c1_poly);
  Free_poly_data(&input_dup_n38_60._c0_poly);
  Free_ciph_poly(input_block_n38_62, 1);
  Free_poly_data(&_pgen_tmp_64_629._poly);
  Free_poly_data(&_pgen_tmp_65_630._c1_poly);
  Free_poly_data(&_pgen_tmp_65_630._c0_poly);
  Free_poly_data(&_pgen_tmp_68_633._poly);
  Free_poly_data(&_pgen_tmp_67_632._c1_poly);
  Free_poly_data(&_pgen_tmp_67_632._c0_poly);
  Free_poly_data(&_pgen_tmp_66_631._c1_poly);
  Free_poly_data(&_pgen_tmp_66_631._c0_poly);
  Free_poly_data(&result_grid_n39_66._c1_poly);
  Free_poly_data(&result_grid_n39_66._c0_poly);
  Free_poly_data(&_pgen_tmp_71_636._poly);
  Free_poly_data(&_pgen_tmp_70_635._c1_poly);
  Free_poly_data(&_pgen_tmp_70_635._c0_poly);
  Free_poly_data(&_pgen_tmp_69_634._c1_poly);
  Free_poly_data(&_pgen_tmp_69_634._c0_poly);
  Free_poly_data(&_pgen_tmp_72_637._c1_poly);
  Free_poly_data(&_pgen_tmp_72_637._c0_poly);
  Free_poly_data(&_pgen_tmp_73_638._poly);
  Free_poly_data(&result_n39_64._c1_poly);
  Free_poly_data(&result_n39_64._c0_poly);
  Free_poly_data(&_pgen_tmp_74_639._c1_poly);
  Free_poly_data(&_pgen_tmp_74_639._c0_poly);
  for (rescale_iv_533 = 0; rescale_iv_533 < 8; rescale_iv_533 = rescale_iv_533 + 1) {
    _pgen_tmp_76_641 = VS_out_conv3_56[rescale_iv_533];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_77_642, &_pgen_tmp_76_641);
    Rescale(&_pgen_tmp_77_642._c0_poly, &_pgen_tmp_76_641._c0_poly);
    Rescale(&_pgen_tmp_77_642._c1_poly, &_pgen_tmp_76_641._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv3_56[rescale_iv_533], &_pgen_tmp_77_642);
  }
  Free_poly_data(&_pgen_tmp_77_642._c1_poly);
  Free_poly_data(&_pgen_tmp_77_642._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 44
  // Conv_6
  // pragma: 65536, 1027, 45
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv4_68, 0, sizeof(VS_out_conv4_68));
  memset(&VS_out_conv_halo4_69, 0, sizeof(VS_out_conv_halo4_69));
  Free_ciph_poly(VS_out_conv_halo4_69, 8);
  for (mesh_y_n4_70 = 0; mesh_y_n4_70 < 2; mesh_y_n4_70 = mesh_y_n4_70 + 1) {
    for (mesh_z_n4_71 = 0; mesh_z_n4_71 < 1; mesh_z_n4_71 = mesh_z_n4_71 + 1) {
      Copy_ciph(&_preg_268435467, &VS_out_relu2_53[((mesh_y_n4_70 * 1) + mesh_z_n4_71)]);
      Copy_ciph(&input_dup_n39_72, &_preg_268435467);
      for (bs_input_n39_73 = 0; bs_input_n39_73 < 9; bs_input_n39_73 = bs_input_n39_73 + 1) {
        _preg_268435583 = Rotate(input_dup_n39_72, _cst_189[bs_input_n39_73]);
        Copy_ciph(&input_block_n39_74[bs_input_n39_73], &_preg_268435583);
        Free_poly_data(&_preg_268435583._c1_poly);
        Free_poly_data(&_preg_268435583._c0_poly);
      }
      for (mesh_x_n4_75 = 0; mesh_x_n4_75 < 8; mesh_x_n4_75 = mesh_x_n4_75 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=9
        Zero_ciph(&result_n40_76);
        for (num_grid_n40_77 = 0; num_grid_n40_77 < 8; num_grid_n40_77 = num_grid_n40_77 + 1) {
          Zero_ciph(&result_grid_n40_78);
          for (cap_block_n40_79 = 0; cap_block_n40_79 < 9; cap_block_n40_79 = cap_block_n40_79 + 1) {
            _ckks_gen_tmp_1243_489 = input_block_n39_74[cap_block_n40_79];
            Pt_from_msg_ofst(&_pgen_tmp_78_643, 16/* cst_185 */, (((((mesh_x_n4_75 * 2) + mesh_y_n4_70) * 72) + (cap_block_n40_79 + (num_grid_n40_77 * 9)))) * (24200), 24200, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_79_644, &_ckks_gen_tmp_1243_489, &_pgen_tmp_78_643);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n40_78, &result_grid_n40_78, &_pgen_tmp_79_644);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n40_78._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_79_644._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_1243_489._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_78_643._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_79_644._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_1243_489._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_78_643._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n40_78._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n40_78._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_79_644._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n40_78._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n40_78._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_79_644._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_81_646, &result_grid_n40_78);
          Rescale(&_pgen_tmp_81_646._c0_poly, &result_grid_n40_78._c0_poly);
          Rescale(&_pgen_tmp_81_646._c1_poly, &result_grid_n40_78._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_82_647, 17/* cst_190 */, (num_grid_n40_77) * (24200), 24200, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_80_645, &_pgen_tmp_81_646, &_pgen_tmp_82_647);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_80_645._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_80_645._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_81_646._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_82_647._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_80_645._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_81_646._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_82_647._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435584 = Rotate(_pgen_tmp_80_645, -24200 + (num_grid_n40_77 * 3025));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_84_649, &result_grid_n40_78);
          Rescale(&_pgen_tmp_84_649._c0_poly, &result_grid_n40_78._c0_poly);
          Rescale(&_pgen_tmp_84_649._c1_poly, &result_grid_n40_78._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_85_650, 18/* cst_191 */, (num_grid_n40_77) * (24200), 24200, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_83_648, &_pgen_tmp_84_649, &_pgen_tmp_85_650);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_83_648._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_83_648._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_84_649._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_85_650._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_83_648._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_84_649._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_85_650._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435585 = Rotate(_pgen_tmp_83_648, num_grid_n40_77 * 3025);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_86_651, &_preg_268435584, &_preg_268435585);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n40_76, &result_n40_76, &_pgen_tmp_86_651);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n40_76._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_86_651._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435584._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435585._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_86_651._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435584._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435585._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n40_76._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n40_76._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_86_651._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n40_76._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n40_76._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_86_651._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435584._c1_poly);
          Free_poly_data(&_preg_268435584._c0_poly);
          Free_poly_data(&_preg_268435585._c1_poly);
          Free_poly_data(&_preg_268435585._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_87_652, 19 /* cst_188 */, 24200, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n40_76, &result_n40_76, &_pgen_tmp_87_652);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n40_76._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n40_76._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n40_76._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_87_652._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n40_76._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n40_76._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_89_654 = VS_out_conv4_68[((mesh_x_n4_75 * 1) + mesh_z_n4_71)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_88_653, &_pgen_tmp_89_654, &result_n40_76);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_88_653._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_88_653._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_89_654._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n40_76._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_88_653._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_89_654._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n40_76._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv4_68[((mesh_x_n4_75 * 1) + mesh_z_n4_71)], &_pgen_tmp_88_653);
      }
    }
  }
  Free_ciph_poly(VS_out_relu2_53, 2);
  Free_poly_data(&_preg_268435467._c1_poly);
  Free_poly_data(&_preg_268435467._c0_poly);
  Free_poly_data(&input_dup_n39_72._c1_poly);
  Free_poly_data(&input_dup_n39_72._c0_poly);
  Free_ciph_poly(input_block_n39_74, 9);
  Free_poly_data(&_pgen_tmp_78_643._poly);
  Free_poly_data(&_pgen_tmp_79_644._c1_poly);
  Free_poly_data(&_pgen_tmp_79_644._c0_poly);
  Free_poly_data(&_pgen_tmp_82_647._poly);
  Free_poly_data(&_pgen_tmp_81_646._c1_poly);
  Free_poly_data(&_pgen_tmp_81_646._c0_poly);
  Free_poly_data(&_pgen_tmp_80_645._c1_poly);
  Free_poly_data(&_pgen_tmp_80_645._c0_poly);
  Free_poly_data(&result_grid_n40_78._c1_poly);
  Free_poly_data(&result_grid_n40_78._c0_poly);
  Free_poly_data(&_pgen_tmp_85_650._poly);
  Free_poly_data(&_pgen_tmp_84_649._c1_poly);
  Free_poly_data(&_pgen_tmp_84_649._c0_poly);
  Free_poly_data(&_pgen_tmp_83_648._c1_poly);
  Free_poly_data(&_pgen_tmp_83_648._c0_poly);
  Free_poly_data(&_pgen_tmp_86_651._c1_poly);
  Free_poly_data(&_pgen_tmp_86_651._c0_poly);
  Free_poly_data(&_pgen_tmp_87_652._poly);
  Free_poly_data(&result_n40_76._c1_poly);
  Free_poly_data(&result_n40_76._c0_poly);
  Free_poly_data(&_pgen_tmp_88_653._c1_poly);
  Free_poly_data(&_pgen_tmp_88_653._c0_poly);
  for (rescale_iv_534 = 0; rescale_iv_534 < 8; rescale_iv_534 = rescale_iv_534 + 1) {
    _pgen_tmp_90_655 = VS_out_conv4_68[rescale_iv_534];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_91_656, &_pgen_tmp_90_655);
    Rescale(&_pgen_tmp_91_656._c0_poly, &_pgen_tmp_90_655._c0_poly);
    Rescale(&_pgen_tmp_91_656._c1_poly, &_pgen_tmp_90_655._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv4_68[rescale_iv_534], &_pgen_tmp_91_656);
  }
  Free_poly_data(&_pgen_tmp_91_656._c1_poly);
  Free_poly_data(&_pgen_tmp_91_656._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 45
  // Concat_7
  // pragma: 65536, 1045, 46
  CMPLR_TM_START(4, 0);
  for (concat_op0_n5_80 = 0; concat_op0_n5_80 < 8; concat_op0_n5_80 = concat_op0_n5_80 + 1) {
    _pgen_tmp_92_657 = VS_out_conv3_56[concat_op0_n5_80];
    Copy_ciph(&VS_out_cocat5_81[(concat_op0_n5_80 + 0)], &_pgen_tmp_92_657);
  }
  Free_ciph_poly(VS_out_conv3_56, 8);
  for (concat_op1_n5_82 = 0; concat_op1_n5_82 < 8; concat_op1_n5_82 = concat_op1_n5_82 + 1) {
    _pgen_tmp_93_658 = VS_out_conv4_68[concat_op1_n5_82];
    Copy_ciph(&VS_out_cocat5_81[(concat_op1_n5_82 + 8)], &_pgen_tmp_93_658);
  }
  Free_ciph_poly(VS_out_conv4_68, 8);
  CMPLR_TM_END(4, 0);
  // pragma: 65537, 1045, 46
  // Relu_8
  // pragma: 65536, 1033, 48
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu5_83, 0, sizeof(VS_out_relu5_83));
  for (mesh_y_n5_84 = 0; mesh_y_n5_84 < 16; mesh_y_n5_84 = mesh_y_n5_84 + 1) {
    for (mesh_z_n5_85 = 0; mesh_z_n5_85 < 1; mesh_z_n5_85 = mesh_z_n5_85 + 1) {
      _pgen_tmp_94_659 = VS_out_cocat5_81[((mesh_y_n5_84 * 1) + mesh_z_n5_85)];
      Bootstrap(&_preg_268435468, &_pgen_tmp_94_659, 15);
      Encode_float(&_pgen_tmp_95_660, &_cst_415, 1, 1, Level(&_preg_268435468));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435470, &_preg_268435468, &_pgen_tmp_95_660);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_preg_268435470._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_preg_268435470._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435468._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_95_660._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_preg_268435470._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435468._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_95_660._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_96_661, &_preg_268435470);
      Rescale(&_pgen_tmp_96_661._c0_poly, &_preg_268435470._c0_poly);
      Rescale(&_pgen_tmp_96_661._c1_poly, &_preg_268435470._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435469 = App_relu(_preg_268435468, _pgen_tmp_96_661, 24200);
      _pgen_tmp_98_663 = VS_out_relu5_83[((mesh_y_n5_84 * 1) + mesh_z_n5_85)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_97_662, &_pgen_tmp_98_663, &_preg_268435469);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_pgen_tmp_97_662._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_97_662._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_98_663._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435469._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_97_662._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_98_663._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435469._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu5_83[((mesh_y_n5_84 * 1) + mesh_z_n5_85)], &_pgen_tmp_97_662);
    }
  }
  Free_ciph_poly(VS_out_cocat5_81, 16);
  Free_poly_data(&_pgen_tmp_95_660._poly);
  Free_poly_data(&_preg_268435470._c1_poly);
  Free_poly_data(&_preg_268435470._c0_poly);
  Free_poly_data(&_pgen_tmp_96_661._c1_poly);
  Free_poly_data(&_pgen_tmp_96_661._c0_poly);
  Free_poly_data(&_preg_268435468._c1_poly);
  Free_poly_data(&_preg_268435468._c0_poly);
  Free_poly_data(&_preg_268435469._c1_poly);
  Free_poly_data(&_preg_268435469._c0_poly);
  Free_poly_data(&_pgen_tmp_97_662._c1_poly);
  Free_poly_data(&_pgen_tmp_97_662._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 48
  // Conv_9
  // pragma: 65536, 1027, 49
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv6_86, 0, sizeof(VS_out_conv6_86));
  memset(&VS_out_conv_halo6_87, 0, sizeof(VS_out_conv_halo6_87));
  Free_ciph_poly(VS_out_conv_halo6_87, 2);
  for (mesh_y_n6_88 = 0; mesh_y_n6_88 < 16; mesh_y_n6_88 = mesh_y_n6_88 + 1) {
    for (mesh_z_n6_89 = 0; mesh_z_n6_89 < 1; mesh_z_n6_89 = mesh_z_n6_89 + 1) {
      Copy_ciph(&_preg_268435471, &VS_out_relu5_83[((mesh_y_n6_88 * 1) + mesh_z_n6_89)]);
      Copy_ciph(&input_dup_n40_90, &_preg_268435471);
      for (bs_input_n40_91 = 0; bs_input_n40_91 < 1; bs_input_n40_91 = bs_input_n40_91 + 1) {
        _preg_268435586 = Rotate(input_dup_n40_90, _cst_196[bs_input_n40_91]);
        Copy_ciph(&input_block_n40_92[bs_input_n40_91], &_preg_268435586);
        Free_poly_data(&_preg_268435586._c1_poly);
        Free_poly_data(&_preg_268435586._c0_poly);
      }
      for (mesh_x_n6_93 = 0; mesh_x_n6_93 < 2; mesh_x_n6_93 = mesh_x_n6_93 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n41_94);
        for (num_grid_n41_95 = 0; num_grid_n41_95 < 8; num_grid_n41_95 = num_grid_n41_95 + 1) {
          Zero_ciph(&result_grid_n41_96);
          for (cap_block_n41_97 = 0; cap_block_n41_97 < 1; cap_block_n41_97 = cap_block_n41_97 + 1) {
            _ckks_gen_tmp_1557_490 = input_block_n40_92[cap_block_n41_97];
            Pt_from_msg_ofst(&_pgen_tmp_99_664, 20/* cst_192 */, (((((mesh_x_n6_93 * 16) + mesh_y_n6_88) * 8) + (cap_block_n41_97 + (num_grid_n41_95 * 1)))) * (24200), 24200, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_100_665, &_ckks_gen_tmp_1557_490, &_pgen_tmp_99_664);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n41_96, &result_grid_n41_96, &_pgen_tmp_100_665);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n41_96._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_100_665._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_1557_490._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_99_664._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_100_665._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_1557_490._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_99_664._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n41_96._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n41_96._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_100_665._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n41_96._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n41_96._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_100_665._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_102_667, &result_grid_n41_96);
          Rescale(&_pgen_tmp_102_667._c0_poly, &result_grid_n41_96._c0_poly);
          Rescale(&_pgen_tmp_102_667._c1_poly, &result_grid_n41_96._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_103_668, 21/* cst_197 */, (num_grid_n41_95) * (24200), 24200, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_101_666, &_pgen_tmp_102_667, &_pgen_tmp_103_668);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_101_666._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_101_666._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_102_667._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_103_668._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_101_666._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_102_667._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_103_668._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435587 = Rotate(_pgen_tmp_101_666, -24200 + (num_grid_n41_95 * 3025));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_105_670, &result_grid_n41_96);
          Rescale(&_pgen_tmp_105_670._c0_poly, &result_grid_n41_96._c0_poly);
          Rescale(&_pgen_tmp_105_670._c1_poly, &result_grid_n41_96._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_106_671, 22/* cst_198 */, (num_grid_n41_95) * (24200), 24200, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_104_669, &_pgen_tmp_105_670, &_pgen_tmp_106_671);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_104_669._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_104_669._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_105_670._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_106_671._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_104_669._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_105_670._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_106_671._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435588 = Rotate(_pgen_tmp_104_669, num_grid_n41_95 * 3025);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_107_672, &_preg_268435587, &_preg_268435588);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n41_94, &result_n41_94, &_pgen_tmp_107_672);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n41_94._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_107_672._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435587._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435588._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_107_672._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435587._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435588._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n41_94._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n41_94._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_107_672._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n41_94._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n41_94._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_107_672._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435587._c1_poly);
          Free_poly_data(&_preg_268435587._c0_poly);
          Free_poly_data(&_preg_268435588._c1_poly);
          Free_poly_data(&_preg_268435588._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_108_673, 23 /* cst_195 */, 24200, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n41_94, &result_n41_94, &_pgen_tmp_108_673);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n41_94._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n41_94._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n41_94._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_108_673._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n41_94._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n41_94._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_110_675 = VS_out_conv6_86[((mesh_x_n6_93 * 1) + mesh_z_n6_89)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_109_674, &_pgen_tmp_110_675, &result_n41_94);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_109_674._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_109_674._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_110_675._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n41_94._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_109_674._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_110_675._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n41_94._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv6_86[((mesh_x_n6_93 * 1) + mesh_z_n6_89)], &_pgen_tmp_109_674);
      }
    }
  }
  Free_ciph_poly(VS_out_relu5_83, 16);
  Free_poly_data(&_preg_268435471._c1_poly);
  Free_poly_data(&_preg_268435471._c0_poly);
  Free_poly_data(&input_dup_n40_90._c1_poly);
  Free_poly_data(&input_dup_n40_90._c0_poly);
  Free_ciph_poly(input_block_n40_92, 1);
  Free_poly_data(&_pgen_tmp_99_664._poly);
  Free_poly_data(&_pgen_tmp_100_665._c1_poly);
  Free_poly_data(&_pgen_tmp_100_665._c0_poly);
  Free_poly_data(&_pgen_tmp_103_668._poly);
  Free_poly_data(&_pgen_tmp_102_667._c1_poly);
  Free_poly_data(&_pgen_tmp_102_667._c0_poly);
  Free_poly_data(&_pgen_tmp_101_666._c1_poly);
  Free_poly_data(&_pgen_tmp_101_666._c0_poly);
  Free_poly_data(&result_grid_n41_96._c1_poly);
  Free_poly_data(&result_grid_n41_96._c0_poly);
  Free_poly_data(&_pgen_tmp_106_671._poly);
  Free_poly_data(&_pgen_tmp_105_670._c1_poly);
  Free_poly_data(&_pgen_tmp_105_670._c0_poly);
  Free_poly_data(&_pgen_tmp_104_669._c1_poly);
  Free_poly_data(&_pgen_tmp_104_669._c0_poly);
  Free_poly_data(&_pgen_tmp_107_672._c1_poly);
  Free_poly_data(&_pgen_tmp_107_672._c0_poly);
  Free_poly_data(&_pgen_tmp_108_673._poly);
  Free_poly_data(&result_n41_94._c1_poly);
  Free_poly_data(&result_n41_94._c0_poly);
  Free_poly_data(&_pgen_tmp_109_674._c1_poly);
  Free_poly_data(&_pgen_tmp_109_674._c0_poly);
  for (rescale_iv_535 = 0; rescale_iv_535 < 2; rescale_iv_535 = rescale_iv_535 + 1) {
    _pgen_tmp_111_676 = VS_out_conv6_86[rescale_iv_535];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_112_677, &_pgen_tmp_111_676);
    Rescale(&_pgen_tmp_112_677._c0_poly, &_pgen_tmp_111_676._c0_poly);
    Rescale(&_pgen_tmp_112_677._c1_poly, &_pgen_tmp_111_676._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv6_86[rescale_iv_535], &_pgen_tmp_112_677);
  }
  Free_poly_data(&_pgen_tmp_112_677._c1_poly);
  Free_poly_data(&_pgen_tmp_112_677._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 49
  // Relu_10
  // pragma: 65536, 1033, 50
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu6_98, 0, sizeof(VS_out_relu6_98));
  for (mesh_y_n6_99 = 0; mesh_y_n6_99 < 2; mesh_y_n6_99 = mesh_y_n6_99 + 1) {
    for (mesh_z_n6_100 = 0; mesh_z_n6_100 < 1; mesh_z_n6_100 = mesh_z_n6_100 + 1) {
      _pgen_tmp_113_678 = VS_out_conv6_86[((mesh_y_n6_99 * 1) + mesh_z_n6_100)];
      Bootstrap(&_preg_268435472, &_pgen_tmp_113_678, 15);
      Encode_float(&_pgen_tmp_114_679, &_cst_416, 1, 1, Level(&_preg_268435472));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435474, &_preg_268435472, &_pgen_tmp_114_679);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_preg_268435474._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_preg_268435474._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435472._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_114_679._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_preg_268435474._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435472._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_114_679._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_115_680, &_preg_268435474);
      Rescale(&_pgen_tmp_115_680._c0_poly, &_preg_268435474._c0_poly);
      Rescale(&_pgen_tmp_115_680._c1_poly, &_preg_268435474._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435473 = App_relu(_preg_268435472, _pgen_tmp_115_680, 24200);
      _pgen_tmp_117_682 = VS_out_relu6_98[((mesh_y_n6_99 * 1) + mesh_z_n6_100)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_116_681, &_pgen_tmp_117_682, &_preg_268435473);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_pgen_tmp_116_681._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_116_681._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_117_682._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435473._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_116_681._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_117_682._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435473._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu6_98[((mesh_y_n6_99 * 1) + mesh_z_n6_100)], &_pgen_tmp_116_681);
    }
  }
  Free_ciph_poly(VS_out_conv6_86, 2);
  Free_poly_data(&_pgen_tmp_114_679._poly);
  Free_poly_data(&_preg_268435474._c1_poly);
  Free_poly_data(&_preg_268435474._c0_poly);
  Free_poly_data(&_pgen_tmp_115_680._c1_poly);
  Free_poly_data(&_pgen_tmp_115_680._c0_poly);
  Free_poly_data(&_preg_268435472._c1_poly);
  Free_poly_data(&_preg_268435472._c0_poly);
  Free_poly_data(&_preg_268435473._c1_poly);
  Free_poly_data(&_preg_268435473._c0_poly);
  Free_poly_data(&_pgen_tmp_116_681._c1_poly);
  Free_poly_data(&_pgen_tmp_116_681._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 50
  // Conv_11
  // pragma: 65536, 1027, 51
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv7_101, 0, sizeof(VS_out_conv7_101));
  memset(&VS_out_conv_halo7_102, 0, sizeof(VS_out_conv_halo7_102));
  Free_ciph_poly(VS_out_conv_halo7_102, 8);
  for (mesh_y_n7_103 = 0; mesh_y_n7_103 < 2; mesh_y_n7_103 = mesh_y_n7_103 + 1) {
    for (mesh_z_n7_104 = 0; mesh_z_n7_104 < 1; mesh_z_n7_104 = mesh_z_n7_104 + 1) {
      Copy_ciph(&_preg_268435475, &VS_out_relu6_98[((mesh_y_n7_103 * 1) + mesh_z_n7_104)]);
      Copy_ciph(&input_dup_n41_105, &_preg_268435475);
      for (bs_input_n41_106 = 0; bs_input_n41_106 < 1; bs_input_n41_106 = bs_input_n41_106 + 1) {
        _preg_268435589 = Rotate(input_dup_n41_105, _cst_203[bs_input_n41_106]);
        Copy_ciph(&input_block_n41_107[bs_input_n41_106], &_preg_268435589);
        Free_poly_data(&_preg_268435589._c1_poly);
        Free_poly_data(&_preg_268435589._c0_poly);
      }
      for (mesh_x_n7_108 = 0; mesh_x_n7_108 < 8; mesh_x_n7_108 = mesh_x_n7_108 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n42_109);
        for (num_grid_n42_110 = 0; num_grid_n42_110 < 8; num_grid_n42_110 = num_grid_n42_110 + 1) {
          Zero_ciph(&result_grid_n42_111);
          for (cap_block_n42_112 = 0; cap_block_n42_112 < 1; cap_block_n42_112 = cap_block_n42_112 + 1) {
            _ckks_gen_tmp_1822_491 = input_block_n41_107[cap_block_n42_112];
            Pt_from_msg_ofst(&_pgen_tmp_118_683, 24/* cst_199 */, (((((mesh_x_n7_108 * 2) + mesh_y_n7_103) * 8) + (cap_block_n42_112 + (num_grid_n42_110 * 1)))) * (24200), 24200, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_119_684, &_ckks_gen_tmp_1822_491, &_pgen_tmp_118_683);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n42_111, &result_grid_n42_111, &_pgen_tmp_119_684);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n42_111._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_119_684._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_1822_491._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_118_683._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_119_684._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_1822_491._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_118_683._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n42_111._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n42_111._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_119_684._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n42_111._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n42_111._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_119_684._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_121_686, &result_grid_n42_111);
          Rescale(&_pgen_tmp_121_686._c0_poly, &result_grid_n42_111._c0_poly);
          Rescale(&_pgen_tmp_121_686._c1_poly, &result_grid_n42_111._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_122_687, 25/* cst_204 */, (num_grid_n42_110) * (24200), 24200, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_120_685, &_pgen_tmp_121_686, &_pgen_tmp_122_687);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_120_685._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_120_685._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_121_686._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_122_687._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_120_685._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_121_686._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_122_687._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435590 = Rotate(_pgen_tmp_120_685, -24200 + (num_grid_n42_110 * 3025));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_124_689, &result_grid_n42_111);
          Rescale(&_pgen_tmp_124_689._c0_poly, &result_grid_n42_111._c0_poly);
          Rescale(&_pgen_tmp_124_689._c1_poly, &result_grid_n42_111._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_125_690, 26/* cst_205 */, (num_grid_n42_110) * (24200), 24200, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_123_688, &_pgen_tmp_124_689, &_pgen_tmp_125_690);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_123_688._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_123_688._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_124_689._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_125_690._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_123_688._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_124_689._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_125_690._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435591 = Rotate(_pgen_tmp_123_688, num_grid_n42_110 * 3025);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_126_691, &_preg_268435590, &_preg_268435591);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n42_109, &result_n42_109, &_pgen_tmp_126_691);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n42_109._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_126_691._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435590._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435591._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_126_691._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435590._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435591._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n42_109._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n42_109._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_126_691._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n42_109._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n42_109._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_126_691._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435590._c1_poly);
          Free_poly_data(&_preg_268435590._c0_poly);
          Free_poly_data(&_preg_268435591._c1_poly);
          Free_poly_data(&_preg_268435591._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_127_692, 27 /* cst_202 */, 24200, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n42_109, &result_n42_109, &_pgen_tmp_127_692);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n42_109._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n42_109._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n42_109._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_127_692._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n42_109._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n42_109._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_129_694 = VS_out_conv7_101[((mesh_x_n7_108 * 1) + mesh_z_n7_104)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_128_693, &_pgen_tmp_129_694, &result_n42_109);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_128_693._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_128_693._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_129_694._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n42_109._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_128_693._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_129_694._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n42_109._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv7_101[((mesh_x_n7_108 * 1) + mesh_z_n7_104)], &_pgen_tmp_128_693);
      }
    }
  }
  Free_poly_data(&_preg_268435475._c1_poly);
  Free_poly_data(&_preg_268435475._c0_poly);
  Free_poly_data(&input_dup_n41_105._c1_poly);
  Free_poly_data(&input_dup_n41_105._c0_poly);
  Free_ciph_poly(input_block_n41_107, 1);
  Free_poly_data(&_pgen_tmp_118_683._poly);
  Free_poly_data(&_pgen_tmp_119_684._c1_poly);
  Free_poly_data(&_pgen_tmp_119_684._c0_poly);
  Free_poly_data(&_pgen_tmp_122_687._poly);
  Free_poly_data(&_pgen_tmp_121_686._c1_poly);
  Free_poly_data(&_pgen_tmp_121_686._c0_poly);
  Free_poly_data(&_pgen_tmp_120_685._c1_poly);
  Free_poly_data(&_pgen_tmp_120_685._c0_poly);
  Free_poly_data(&result_grid_n42_111._c1_poly);
  Free_poly_data(&result_grid_n42_111._c0_poly);
  Free_poly_data(&_pgen_tmp_125_690._poly);
  Free_poly_data(&_pgen_tmp_124_689._c1_poly);
  Free_poly_data(&_pgen_tmp_124_689._c0_poly);
  Free_poly_data(&_pgen_tmp_123_688._c1_poly);
  Free_poly_data(&_pgen_tmp_123_688._c0_poly);
  Free_poly_data(&_pgen_tmp_126_691._c1_poly);
  Free_poly_data(&_pgen_tmp_126_691._c0_poly);
  Free_poly_data(&_pgen_tmp_127_692._poly);
  Free_poly_data(&result_n42_109._c1_poly);
  Free_poly_data(&result_n42_109._c0_poly);
  Free_poly_data(&_pgen_tmp_128_693._c1_poly);
  Free_poly_data(&_pgen_tmp_128_693._c0_poly);
  for (rescale_iv_536 = 0; rescale_iv_536 < 8; rescale_iv_536 = rescale_iv_536 + 1) {
    _pgen_tmp_130_695 = VS_out_conv7_101[rescale_iv_536];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_131_696, &_pgen_tmp_130_695);
    Rescale(&_pgen_tmp_131_696._c0_poly, &_pgen_tmp_130_695._c0_poly);
    Rescale(&_pgen_tmp_131_696._c1_poly, &_pgen_tmp_130_695._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv7_101[rescale_iv_536], &_pgen_tmp_131_696);
  }
  Free_poly_data(&_pgen_tmp_131_696._c1_poly);
  Free_poly_data(&_pgen_tmp_131_696._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 51
  // Conv_12
  // pragma: 65536, 1027, 52
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv8_113, 0, sizeof(VS_out_conv8_113));
  memset(&VS_out_conv_halo8_114, 0, sizeof(VS_out_conv_halo8_114));
  Free_ciph_poly(VS_out_conv_halo8_114, 8);
  for (mesh_y_n8_115 = 0; mesh_y_n8_115 < 2; mesh_y_n8_115 = mesh_y_n8_115 + 1) {
    for (mesh_z_n8_116 = 0; mesh_z_n8_116 < 1; mesh_z_n8_116 = mesh_z_n8_116 + 1) {
      Copy_ciph(&_preg_268435476, &VS_out_relu6_98[((mesh_y_n8_115 * 1) + mesh_z_n8_116)]);
      Copy_ciph(&input_dup_n42_117, &_preg_268435476);
      for (bs_input_n42_118 = 0; bs_input_n42_118 < 9; bs_input_n42_118 = bs_input_n42_118 + 1) {
        _preg_268435592 = Rotate(input_dup_n42_117, _cst_210[bs_input_n42_118]);
        Copy_ciph(&input_block_n42_119[bs_input_n42_118], &_preg_268435592);
        Free_poly_data(&_preg_268435592._c1_poly);
        Free_poly_data(&_preg_268435592._c0_poly);
      }
      for (mesh_x_n8_120 = 0; mesh_x_n8_120 < 8; mesh_x_n8_120 = mesh_x_n8_120 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=9
        Zero_ciph(&result_n43_121);
        for (num_grid_n43_122 = 0; num_grid_n43_122 < 8; num_grid_n43_122 = num_grid_n43_122 + 1) {
          Zero_ciph(&result_grid_n43_123);
          for (cap_block_n43_124 = 0; cap_block_n43_124 < 9; cap_block_n43_124 = cap_block_n43_124 + 1) {
            _ckks_gen_tmp_2020_492 = input_block_n42_119[cap_block_n43_124];
            Pt_from_msg_ofst(&_pgen_tmp_132_697, 28/* cst_206 */, (((((mesh_x_n8_120 * 2) + mesh_y_n8_115) * 72) + (cap_block_n43_124 + (num_grid_n43_122 * 9)))) * (24200), 24200, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_133_698, &_ckks_gen_tmp_2020_492, &_pgen_tmp_132_697);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n43_123, &result_grid_n43_123, &_pgen_tmp_133_698);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n43_123._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_133_698._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_2020_492._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_132_697._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_133_698._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_2020_492._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_132_697._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n43_123._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n43_123._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_133_698._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n43_123._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n43_123._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_133_698._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_135_700, &result_grid_n43_123);
          Rescale(&_pgen_tmp_135_700._c0_poly, &result_grid_n43_123._c0_poly);
          Rescale(&_pgen_tmp_135_700._c1_poly, &result_grid_n43_123._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_136_701, 29/* cst_211 */, (num_grid_n43_122) * (24200), 24200, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_134_699, &_pgen_tmp_135_700, &_pgen_tmp_136_701);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_134_699._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_134_699._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_135_700._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_136_701._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_134_699._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_135_700._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_136_701._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435593 = Rotate(_pgen_tmp_134_699, -24200 + (num_grid_n43_122 * 3025));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_138_703, &result_grid_n43_123);
          Rescale(&_pgen_tmp_138_703._c0_poly, &result_grid_n43_123._c0_poly);
          Rescale(&_pgen_tmp_138_703._c1_poly, &result_grid_n43_123._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_139_704, 30/* cst_212 */, (num_grid_n43_122) * (24200), 24200, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_137_702, &_pgen_tmp_138_703, &_pgen_tmp_139_704);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_137_702._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_137_702._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_138_703._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_139_704._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_137_702._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_138_703._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_139_704._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435594 = Rotate(_pgen_tmp_137_702, num_grid_n43_122 * 3025);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_140_705, &_preg_268435593, &_preg_268435594);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n43_121, &result_n43_121, &_pgen_tmp_140_705);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n43_121._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_140_705._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435593._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435594._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_140_705._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435593._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435594._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n43_121._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n43_121._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_140_705._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n43_121._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n43_121._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_140_705._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435593._c1_poly);
          Free_poly_data(&_preg_268435593._c0_poly);
          Free_poly_data(&_preg_268435594._c1_poly);
          Free_poly_data(&_preg_268435594._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_141_706, 31 /* cst_209 */, 24200, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n43_121, &result_n43_121, &_pgen_tmp_141_706);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n43_121._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n43_121._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n43_121._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_141_706._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n43_121._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n43_121._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_143_708 = VS_out_conv8_113[((mesh_x_n8_120 * 1) + mesh_z_n8_116)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_142_707, &_pgen_tmp_143_708, &result_n43_121);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_142_707._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_142_707._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_143_708._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n43_121._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_142_707._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_143_708._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n43_121._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv8_113[((mesh_x_n8_120 * 1) + mesh_z_n8_116)], &_pgen_tmp_142_707);
      }
    }
  }
  Free_ciph_poly(VS_out_relu6_98, 2);
  Free_poly_data(&_preg_268435476._c1_poly);
  Free_poly_data(&_preg_268435476._c0_poly);
  Free_poly_data(&input_dup_n42_117._c1_poly);
  Free_poly_data(&input_dup_n42_117._c0_poly);
  Free_ciph_poly(input_block_n42_119, 9);
  Free_poly_data(&_pgen_tmp_132_697._poly);
  Free_poly_data(&_pgen_tmp_133_698._c1_poly);
  Free_poly_data(&_pgen_tmp_133_698._c0_poly);
  Free_poly_data(&_pgen_tmp_136_701._poly);
  Free_poly_data(&_pgen_tmp_135_700._c1_poly);
  Free_poly_data(&_pgen_tmp_135_700._c0_poly);
  Free_poly_data(&_pgen_tmp_134_699._c1_poly);
  Free_poly_data(&_pgen_tmp_134_699._c0_poly);
  Free_poly_data(&result_grid_n43_123._c1_poly);
  Free_poly_data(&result_grid_n43_123._c0_poly);
  Free_poly_data(&_pgen_tmp_139_704._poly);
  Free_poly_data(&_pgen_tmp_138_703._c1_poly);
  Free_poly_data(&_pgen_tmp_138_703._c0_poly);
  Free_poly_data(&_pgen_tmp_137_702._c1_poly);
  Free_poly_data(&_pgen_tmp_137_702._c0_poly);
  Free_poly_data(&_pgen_tmp_140_705._c1_poly);
  Free_poly_data(&_pgen_tmp_140_705._c0_poly);
  Free_poly_data(&_pgen_tmp_141_706._poly);
  Free_poly_data(&result_n43_121._c1_poly);
  Free_poly_data(&result_n43_121._c0_poly);
  Free_poly_data(&_pgen_tmp_142_707._c1_poly);
  Free_poly_data(&_pgen_tmp_142_707._c0_poly);
  for (rescale_iv_537 = 0; rescale_iv_537 < 8; rescale_iv_537 = rescale_iv_537 + 1) {
    _pgen_tmp_144_709 = VS_out_conv8_113[rescale_iv_537];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_145_710, &_pgen_tmp_144_709);
    Rescale(&_pgen_tmp_145_710._c0_poly, &_pgen_tmp_144_709._c0_poly);
    Rescale(&_pgen_tmp_145_710._c1_poly, &_pgen_tmp_144_709._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv8_113[rescale_iv_537], &_pgen_tmp_145_710);
  }
  Free_poly_data(&_pgen_tmp_145_710._c1_poly);
  Free_poly_data(&_pgen_tmp_145_710._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 52
  // Concat_13
  // pragma: 65536, 1045, 53
  CMPLR_TM_START(4, 0);
  for (concat_op0_n9_125 = 0; concat_op0_n9_125 < 8; concat_op0_n9_125 = concat_op0_n9_125 + 1) {
    _pgen_tmp_146_711 = VS_out_conv7_101[concat_op0_n9_125];
    Copy_ciph(&VS_out_cocat9_126[(concat_op0_n9_125 + 0)], &_pgen_tmp_146_711);
  }
  Free_ciph_poly(VS_out_conv7_101, 8);
  for (concat_op1_n9_127 = 0; concat_op1_n9_127 < 8; concat_op1_n9_127 = concat_op1_n9_127 + 1) {
    _pgen_tmp_147_712 = VS_out_conv8_113[concat_op1_n9_127];
    Copy_ciph(&VS_out_cocat9_126[(concat_op1_n9_127 + 8)], &_pgen_tmp_147_712);
  }
  Free_ciph_poly(VS_out_conv8_113, 8);
  CMPLR_TM_END(4, 0);
  // pragma: 65537, 1045, 53
  // Relu_14
  // pragma: 65536, 1033, 54
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu9_128, 0, sizeof(VS_out_relu9_128));
  for (mesh_y_n9_129 = 0; mesh_y_n9_129 < 16; mesh_y_n9_129 = mesh_y_n9_129 + 1) {
    for (mesh_z_n9_130 = 0; mesh_z_n9_130 < 1; mesh_z_n9_130 = mesh_z_n9_130 + 1) {
      _pgen_tmp_148_713 = VS_out_cocat9_126[((mesh_y_n9_129 * 1) + mesh_z_n9_130)];
      Bootstrap(&_preg_268435477, &_pgen_tmp_148_713, 15);
      Encode_float(&_pgen_tmp_149_714, &_cst_417, 1, 1, Level(&_preg_268435477));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435479, &_preg_268435477, &_pgen_tmp_149_714);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_preg_268435479._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_preg_268435479._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435477._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_149_714._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_preg_268435479._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435477._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_149_714._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_150_715, &_preg_268435479);
      Rescale(&_pgen_tmp_150_715._c0_poly, &_preg_268435479._c0_poly);
      Rescale(&_pgen_tmp_150_715._c1_poly, &_preg_268435479._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435478 = App_relu(_preg_268435477, _pgen_tmp_150_715, 24200);
      _pgen_tmp_152_717 = VS_out_relu9_128[((mesh_y_n9_129 * 1) + mesh_z_n9_130)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_151_716, &_pgen_tmp_152_717, &_preg_268435478);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_pgen_tmp_151_716._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_151_716._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_152_717._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435478._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_151_716._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_152_717._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435478._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu9_128[((mesh_y_n9_129 * 1) + mesh_z_n9_130)], &_pgen_tmp_151_716);
    }
  }
  Free_ciph_poly(VS_out_cocat9_126, 16);
  Free_poly_data(&_pgen_tmp_149_714._poly);
  Free_poly_data(&_preg_268435479._c1_poly);
  Free_poly_data(&_preg_268435479._c0_poly);
  Free_poly_data(&_pgen_tmp_150_715._c1_poly);
  Free_poly_data(&_pgen_tmp_150_715._c0_poly);
  Free_poly_data(&_preg_268435477._c1_poly);
  Free_poly_data(&_preg_268435477._c0_poly);
  Free_poly_data(&_preg_268435478._c1_poly);
  Free_poly_data(&_preg_268435478._c0_poly);
  Free_poly_data(&_pgen_tmp_151_716._c1_poly);
  Free_poly_data(&_pgen_tmp_151_716._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 54
  // Conv_15
  // pragma: 65536, 1027, 55
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv10_131, 0, sizeof(VS_out_conv10_131));
  memset(&VS_out_conv_halo10_132, 0, sizeof(VS_out_conv_halo10_132));
  Free_ciph_poly(VS_out_conv_halo10_132, 4);
  for (mesh_y_n10_133 = 0; mesh_y_n10_133 < 16; mesh_y_n10_133 = mesh_y_n10_133 + 1) {
    for (mesh_z_n10_134 = 0; mesh_z_n10_134 < 1; mesh_z_n10_134 = mesh_z_n10_134 + 1) {
      Copy_ciph(&_preg_268435480, &VS_out_relu9_128[((mesh_y_n10_133 * 1) + mesh_z_n10_134)]);
      Copy_ciph(&input_dup_n43_135, &_preg_268435480);
      for (bs_input_n43_136 = 0; bs_input_n43_136 < 1; bs_input_n43_136 = bs_input_n43_136 + 1) {
        _preg_268435595 = Rotate(input_dup_n43_135, _cst_217[bs_input_n43_136]);
        Copy_ciph(&input_block_n43_137[bs_input_n43_136], &_preg_268435595);
        Free_poly_data(&_preg_268435595._c1_poly);
        Free_poly_data(&_preg_268435595._c0_poly);
      }
      for (mesh_x_n10_138 = 0; mesh_x_n10_138 < 4; mesh_x_n10_138 = mesh_x_n10_138 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n44_139);
        for (num_grid_n44_140 = 0; num_grid_n44_140 < 8; num_grid_n44_140 = num_grid_n44_140 + 1) {
          Zero_ciph(&result_grid_n44_141);
          for (cap_block_n44_142 = 0; cap_block_n44_142 < 1; cap_block_n44_142 = cap_block_n44_142 + 1) {
            _ckks_gen_tmp_2334_493 = input_block_n43_137[cap_block_n44_142];
            Pt_from_msg_ofst(&_pgen_tmp_153_718, 32/* cst_213 */, (((((mesh_x_n10_138 * 16) + mesh_y_n10_133) * 8) + (cap_block_n44_142 + (num_grid_n44_140 * 1)))) * (24200), 24200, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_154_719, &_ckks_gen_tmp_2334_493, &_pgen_tmp_153_718);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n44_141, &result_grid_n44_141, &_pgen_tmp_154_719);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n44_141._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_154_719._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_2334_493._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_153_718._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_154_719._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_2334_493._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_153_718._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n44_141._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n44_141._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_154_719._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n44_141._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n44_141._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_154_719._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_156_721, &result_grid_n44_141);
          Rescale(&_pgen_tmp_156_721._c0_poly, &result_grid_n44_141._c0_poly);
          Rescale(&_pgen_tmp_156_721._c1_poly, &result_grid_n44_141._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_157_722, 33/* cst_218 */, (num_grid_n44_140) * (24200), 24200, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_155_720, &_pgen_tmp_156_721, &_pgen_tmp_157_722);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_155_720._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_155_720._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_156_721._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_157_722._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_155_720._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_156_721._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_157_722._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435596 = Rotate(_pgen_tmp_155_720, -24200 + (num_grid_n44_140 * 3025));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_159_724, &result_grid_n44_141);
          Rescale(&_pgen_tmp_159_724._c0_poly, &result_grid_n44_141._c0_poly);
          Rescale(&_pgen_tmp_159_724._c1_poly, &result_grid_n44_141._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_160_725, 34/* cst_219 */, (num_grid_n44_140) * (24200), 24200, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_158_723, &_pgen_tmp_159_724, &_pgen_tmp_160_725);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_158_723._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_158_723._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_159_724._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_160_725._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_158_723._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_159_724._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_160_725._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435597 = Rotate(_pgen_tmp_158_723, num_grid_n44_140 * 3025);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_161_726, &_preg_268435596, &_preg_268435597);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n44_139, &result_n44_139, &_pgen_tmp_161_726);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n44_139._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_161_726._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435596._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435597._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_161_726._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435596._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435597._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n44_139._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n44_139._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_161_726._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n44_139._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n44_139._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_161_726._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435596._c1_poly);
          Free_poly_data(&_preg_268435596._c0_poly);
          Free_poly_data(&_preg_268435597._c1_poly);
          Free_poly_data(&_preg_268435597._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_162_727, 35 /* cst_216 */, 24200, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n44_139, &result_n44_139, &_pgen_tmp_162_727);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n44_139._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n44_139._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n44_139._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_162_727._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n44_139._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n44_139._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_164_729 = VS_out_conv10_131[((mesh_x_n10_138 * 1) + mesh_z_n10_134)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_163_728, &_pgen_tmp_164_729, &result_n44_139);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_163_728._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_163_728._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_164_729._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n44_139._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_163_728._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_164_729._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n44_139._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv10_131[((mesh_x_n10_138 * 1) + mesh_z_n10_134)], &_pgen_tmp_163_728);
      }
    }
  }
  Free_ciph_poly(VS_out_relu9_128, 16);
  Free_poly_data(&_preg_268435480._c1_poly);
  Free_poly_data(&_preg_268435480._c0_poly);
  Free_poly_data(&input_dup_n43_135._c1_poly);
  Free_poly_data(&input_dup_n43_135._c0_poly);
  Free_ciph_poly(input_block_n43_137, 1);
  Free_poly_data(&_pgen_tmp_153_718._poly);
  Free_poly_data(&_pgen_tmp_154_719._c1_poly);
  Free_poly_data(&_pgen_tmp_154_719._c0_poly);
  Free_poly_data(&_pgen_tmp_157_722._poly);
  Free_poly_data(&_pgen_tmp_156_721._c1_poly);
  Free_poly_data(&_pgen_tmp_156_721._c0_poly);
  Free_poly_data(&_pgen_tmp_155_720._c1_poly);
  Free_poly_data(&_pgen_tmp_155_720._c0_poly);
  Free_poly_data(&result_grid_n44_141._c1_poly);
  Free_poly_data(&result_grid_n44_141._c0_poly);
  Free_poly_data(&_pgen_tmp_160_725._poly);
  Free_poly_data(&_pgen_tmp_159_724._c1_poly);
  Free_poly_data(&_pgen_tmp_159_724._c0_poly);
  Free_poly_data(&_pgen_tmp_158_723._c1_poly);
  Free_poly_data(&_pgen_tmp_158_723._c0_poly);
  Free_poly_data(&_pgen_tmp_161_726._c1_poly);
  Free_poly_data(&_pgen_tmp_161_726._c0_poly);
  Free_poly_data(&_pgen_tmp_162_727._poly);
  Free_poly_data(&result_n44_139._c1_poly);
  Free_poly_data(&result_n44_139._c0_poly);
  Free_poly_data(&_pgen_tmp_163_728._c1_poly);
  Free_poly_data(&_pgen_tmp_163_728._c0_poly);
  for (rescale_iv_538 = 0; rescale_iv_538 < 4; rescale_iv_538 = rescale_iv_538 + 1) {
    _pgen_tmp_165_730 = VS_out_conv10_131[rescale_iv_538];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_166_731, &_pgen_tmp_165_730);
    Rescale(&_pgen_tmp_166_731._c0_poly, &_pgen_tmp_165_730._c0_poly);
    Rescale(&_pgen_tmp_166_731._c1_poly, &_pgen_tmp_165_730._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv10_131[rescale_iv_538], &_pgen_tmp_166_731);
  }
  Free_poly_data(&_pgen_tmp_166_731._c1_poly);
  Free_poly_data(&_pgen_tmp_166_731._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 55
  // Relu_16
  // pragma: 65536, 1033, 56
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu10_143, 0, sizeof(VS_out_relu10_143));
  for (mesh_y_n10_144 = 0; mesh_y_n10_144 < 4; mesh_y_n10_144 = mesh_y_n10_144 + 1) {
    for (mesh_z_n10_145 = 0; mesh_z_n10_145 < 1; mesh_z_n10_145 = mesh_z_n10_145 + 1) {
      _pgen_tmp_167_732 = VS_out_conv10_131[((mesh_y_n10_144 * 1) + mesh_z_n10_145)];
      Bootstrap(&_preg_268435481, &_pgen_tmp_167_732, 19);
      Encode_float(&_pgen_tmp_168_733, &_cst_418, 1, 1, Level(&_preg_268435481));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435483, &_preg_268435481, &_pgen_tmp_168_733);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_preg_268435483._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_preg_268435483._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435481._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_168_733._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_preg_268435483._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435481._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_168_733._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_169_734, &_preg_268435483);
      Rescale(&_pgen_tmp_169_734._c0_poly, &_preg_268435483._c0_poly);
      Rescale(&_pgen_tmp_169_734._c1_poly, &_preg_268435483._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435482 = App_relu(_preg_268435481, _pgen_tmp_169_734, 24200);
      _pgen_tmp_171_736 = VS_out_relu10_143[((mesh_y_n10_144 * 1) + mesh_z_n10_145)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_170_735, &_pgen_tmp_171_736, &_preg_268435482);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_pgen_tmp_170_735._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_170_735._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_171_736._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435482._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_170_735._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_171_736._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435482._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu10_143[((mesh_y_n10_144 * 1) + mesh_z_n10_145)], &_pgen_tmp_170_735);
    }
  }
  Free_ciph_poly(VS_out_conv10_131, 4);
  Free_poly_data(&_pgen_tmp_168_733._poly);
  Free_poly_data(&_preg_268435483._c1_poly);
  Free_poly_data(&_preg_268435483._c0_poly);
  Free_poly_data(&_pgen_tmp_169_734._c1_poly);
  Free_poly_data(&_pgen_tmp_169_734._c0_poly);
  Free_poly_data(&_preg_268435481._c1_poly);
  Free_poly_data(&_preg_268435481._c0_poly);
  Free_poly_data(&_preg_268435482._c1_poly);
  Free_poly_data(&_preg_268435482._c0_poly);
  Free_poly_data(&_pgen_tmp_170_735._c1_poly);
  Free_poly_data(&_pgen_tmp_170_735._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 56
  // Conv_17
  // pragma: 65536, 1027, 57
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv11_146, 0, sizeof(VS_out_conv11_146));
  memset(&VS_out_conv_halo11_147, 0, sizeof(VS_out_conv_halo11_147));
  Free_ciph_poly(VS_out_conv_halo11_147, 16);
  for (mesh_y_n11_148 = 0; mesh_y_n11_148 < 4; mesh_y_n11_148 = mesh_y_n11_148 + 1) {
    for (mesh_z_n11_149 = 0; mesh_z_n11_149 < 1; mesh_z_n11_149 = mesh_z_n11_149 + 1) {
      Copy_ciph(&_preg_268435484, &VS_out_relu10_143[((mesh_y_n11_148 * 1) + mesh_z_n11_149)]);
      Copy_ciph(&input_dup_n44_150, &_preg_268435484);
      for (bs_input_n44_151 = 0; bs_input_n44_151 < 1; bs_input_n44_151 = bs_input_n44_151 + 1) {
        _preg_268435598 = Rotate(input_dup_n44_150, _cst_224[bs_input_n44_151]);
        Copy_ciph(&input_block_n44_152[bs_input_n44_151], &_preg_268435598);
        Free_poly_data(&_preg_268435598._c1_poly);
        Free_poly_data(&_preg_268435598._c0_poly);
      }
      for (mesh_x_n11_153 = 0; mesh_x_n11_153 < 16; mesh_x_n11_153 = mesh_x_n11_153 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n45_154);
        for (num_grid_n45_155 = 0; num_grid_n45_155 < 8; num_grid_n45_155 = num_grid_n45_155 + 1) {
          Zero_ciph(&result_grid_n45_156);
          for (cap_block_n45_157 = 0; cap_block_n45_157 < 1; cap_block_n45_157 = cap_block_n45_157 + 1) {
            _ckks_gen_tmp_2599_494 = input_block_n44_152[cap_block_n45_157];
            Pt_from_msg_ofst(&_pgen_tmp_172_737, 36/* cst_220 */, (((((mesh_x_n11_153 * 4) + mesh_y_n11_148) * 8) + (cap_block_n45_157 + (num_grid_n45_155 * 1)))) * (24200), 24200, 1, 7);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_173_738, &_ckks_gen_tmp_2599_494, &_pgen_tmp_172_737);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n45_156, &result_grid_n45_156, &_pgen_tmp_173_738);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n45_156._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_173_738._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_2599_494._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_172_737._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_173_738._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_2599_494._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_172_737._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n45_156._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n45_156._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_173_738._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n45_156._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n45_156._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_173_738._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_175_740, &result_grid_n45_156);
          Rescale(&_pgen_tmp_175_740._c0_poly, &result_grid_n45_156._c0_poly);
          Rescale(&_pgen_tmp_175_740._c1_poly, &result_grid_n45_156._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_176_741, 37/* cst_225 */, (num_grid_n45_155) * (24200), 24200, 1, 6);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_174_739, &_pgen_tmp_175_740, &_pgen_tmp_176_741);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_174_739._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_174_739._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_175_740._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_176_741._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_174_739._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_175_740._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_176_741._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435599 = Rotate(_pgen_tmp_174_739, -24200 + (num_grid_n45_155 * 3025));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_178_743, &result_grid_n45_156);
          Rescale(&_pgen_tmp_178_743._c0_poly, &result_grid_n45_156._c0_poly);
          Rescale(&_pgen_tmp_178_743._c1_poly, &result_grid_n45_156._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_179_744, 38/* cst_226 */, (num_grid_n45_155) * (24200), 24200, 1, 6);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_177_742, &_pgen_tmp_178_743, &_pgen_tmp_179_744);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_177_742._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_177_742._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_178_743._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_179_744._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_177_742._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_178_743._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_179_744._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435600 = Rotate(_pgen_tmp_177_742, num_grid_n45_155 * 3025);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_180_745, &_preg_268435599, &_preg_268435600);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n45_154, &result_n45_154, &_pgen_tmp_180_745);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n45_154._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_180_745._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435599._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435600._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_180_745._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435599._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435600._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n45_154._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n45_154._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_180_745._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n45_154._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n45_154._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_180_745._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435599._c1_poly);
          Free_poly_data(&_preg_268435599._c0_poly);
          Free_poly_data(&_preg_268435600._c1_poly);
          Free_poly_data(&_preg_268435600._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_181_746, 39 /* cst_223 */, 24200, 2, 6);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n45_154, &result_n45_154, &_pgen_tmp_181_746);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n45_154._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n45_154._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n45_154._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_181_746._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n45_154._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n45_154._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_183_748 = VS_out_conv11_146[((mesh_x_n11_153 * 1) + mesh_z_n11_149)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_182_747, &_pgen_tmp_183_748, &result_n45_154);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_182_747._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_182_747._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_183_748._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n45_154._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_182_747._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_183_748._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n45_154._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv11_146[((mesh_x_n11_153 * 1) + mesh_z_n11_149)], &_pgen_tmp_182_747);
      }
    }
  }
  Free_poly_data(&_preg_268435484._c1_poly);
  Free_poly_data(&_preg_268435484._c0_poly);
  Free_poly_data(&input_dup_n44_150._c1_poly);
  Free_poly_data(&input_dup_n44_150._c0_poly);
  Free_ciph_poly(input_block_n44_152, 1);
  Free_poly_data(&_pgen_tmp_172_737._poly);
  Free_poly_data(&_pgen_tmp_173_738._c1_poly);
  Free_poly_data(&_pgen_tmp_173_738._c0_poly);
  Free_poly_data(&_pgen_tmp_176_741._poly);
  Free_poly_data(&_pgen_tmp_175_740._c1_poly);
  Free_poly_data(&_pgen_tmp_175_740._c0_poly);
  Free_poly_data(&_pgen_tmp_174_739._c1_poly);
  Free_poly_data(&_pgen_tmp_174_739._c0_poly);
  Free_poly_data(&result_grid_n45_156._c1_poly);
  Free_poly_data(&result_grid_n45_156._c0_poly);
  Free_poly_data(&_pgen_tmp_179_744._poly);
  Free_poly_data(&_pgen_tmp_178_743._c1_poly);
  Free_poly_data(&_pgen_tmp_178_743._c0_poly);
  Free_poly_data(&_pgen_tmp_177_742._c1_poly);
  Free_poly_data(&_pgen_tmp_177_742._c0_poly);
  Free_poly_data(&_pgen_tmp_180_745._c1_poly);
  Free_poly_data(&_pgen_tmp_180_745._c0_poly);
  Free_poly_data(&_pgen_tmp_181_746._poly);
  Free_poly_data(&result_n45_154._c1_poly);
  Free_poly_data(&result_n45_154._c0_poly);
  Free_poly_data(&_pgen_tmp_182_747._c1_poly);
  Free_poly_data(&_pgen_tmp_182_747._c0_poly);
  for (rescale_iv_539 = 0; rescale_iv_539 < 16; rescale_iv_539 = rescale_iv_539 + 1) {
    _pgen_tmp_184_749 = VS_out_conv11_146[rescale_iv_539];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_185_750, &_pgen_tmp_184_749);
    Rescale(&_pgen_tmp_185_750._c0_poly, &_pgen_tmp_184_749._c0_poly);
    Rescale(&_pgen_tmp_185_750._c1_poly, &_pgen_tmp_184_749._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv11_146[rescale_iv_539], &_pgen_tmp_185_750);
  }
  Free_poly_data(&_pgen_tmp_185_750._c1_poly);
  Free_poly_data(&_pgen_tmp_185_750._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 57
  // AveragePool_19
  // pragma: 65536, 1026, 58
  CMPLR_TM_START(3, 0);
  memset(&VS_out_avp11_158, 0, sizeof(VS_out_avp11_158));
  for (mesh_y_n11_159 = 0; mesh_y_n11_159 < 16; mesh_y_n11_159 = mesh_y_n11_159 + 1) {
    for (mesh_z_n11_160 = 0; mesh_z_n11_160 < 1; mesh_z_n11_160 = mesh_z_n11_160 + 1) {
      Copy_ciph(&_preg_268435485, &VS_out_conv11_146[((mesh_y_n11_159 * 1) + mesh_z_n11_160)]);
      _preg_268435601 = Rotate(_preg_268435485, 55);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&tmp_row_add45_161, &_preg_268435485, &_preg_268435601);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&tmp_row_add45_161._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&tmp_row_add45_161._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435485._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435601._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&tmp_row_add45_161._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435485._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435601._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      _preg_268435602 = Rotate(tmp_row_add45_161, 1);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_ckks_gen_tmp_2746_495, &tmp_row_add45_161, &_preg_268435602);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_ckks_gen_tmp_2746_495._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&_ckks_gen_tmp_2746_495._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&tmp_row_add45_161._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435602._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&_ckks_gen_tmp_2746_495._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&tmp_row_add45_161._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435602._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Pt_from_msg(&_pgen_tmp_186_751, 40 /* cst_227 */, 24200, 1, 5);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435486, &_ckks_gen_tmp_2746_495, &_pgen_tmp_186_751);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_preg_268435486._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_preg_268435486._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_2746_495._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_186_751._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_preg_268435486._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_2746_495._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_186_751._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      Copy_ciph(&orig_result45_162, &_preg_268435486);
      Zero_ciph(&comb_row_result46_163);
      for (comb_row_index_n46_164 = 0; comb_row_index_n46_164 < 27; comb_row_index_n46_164 = comb_row_index_n46_164 + 1) {
        _preg_268435603 = Rotate(orig_result45_162, comb_row_index_n46_164 * 1);
        Copy_ciph(&_ckks_gen_tmp_2777_496, &_preg_268435603);
        CMPLR_TM_START(19, 0);
        Init_ciph_down_scale(&_pgen_tmp_187_752, &_ckks_gen_tmp_2777_496);
        Rescale(&_pgen_tmp_187_752._c0_poly, &_ckks_gen_tmp_2777_496._c0_poly);
        Rescale(&_pgen_tmp_187_752._c1_poly, &_ckks_gen_tmp_2777_496._c1_poly);
        CMPLR_TM_END(19, 0);
        Pt_from_msg_ofst(&_pgen_tmp_188_753, 41/* cst_228 */, (comb_row_index_n46_164) * (24200), 24200, 1, 4);
        CMPLR_TM_START(17, 0);
        Init_ciph_up_scale_plain(&_pgen_tmp_189_754, &_pgen_tmp_187_752, &_pgen_tmp_188_753);
        CMPLR_TM_END(17, 0);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_row_result46_163, &comb_row_result46_163, &_pgen_tmp_189_754);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&comb_row_result46_163._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modmul(Coeffs(&_pgen_tmp_189_754._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_187_752._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_188_753._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modmul(Coeffs(&_pgen_tmp_189_754._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_187_752._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_188_753._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_row_result46_163._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_row_result46_163._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_189_754._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_row_result46_163._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_row_result46_163._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_189_754._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435603._c1_poly);
        Free_poly_data(&_preg_268435603._c0_poly);
      }
      Zero_ciph(&comb_rc_result46_165);
      for (comb_rc_index_n46_166 = 0; comb_rc_index_n46_166 < 27; comb_rc_index_n46_166 = comb_rc_index_n46_166 + 1) {
        _preg_268435604 = Rotate(comb_row_result46_163, comb_rc_index_n46_166 * 83);
        Copy_ciph(&_ckks_gen_tmp_2810_497, &_preg_268435604);
        CMPLR_TM_START(19, 0);
        Init_ciph_down_scale(&_pgen_tmp_190_755, &_ckks_gen_tmp_2810_497);
        Rescale(&_pgen_tmp_190_755._c0_poly, &_ckks_gen_tmp_2810_497._c0_poly);
        Rescale(&_pgen_tmp_190_755._c1_poly, &_ckks_gen_tmp_2810_497._c1_poly);
        CMPLR_TM_END(19, 0);
        Pt_from_msg_ofst(&_pgen_tmp_191_756, 42/* cst_229 */, (comb_rc_index_n46_166) * (24200), 24200, 1, 3);
        CMPLR_TM_START(17, 0);
        Init_ciph_up_scale_plain(&_pgen_tmp_192_757, &_pgen_tmp_190_755, &_pgen_tmp_191_756);
        CMPLR_TM_END(17, 0);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_rc_result46_165, &comb_rc_result46_165, &_pgen_tmp_192_757);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&comb_rc_result46_165._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modmul(Coeffs(&_pgen_tmp_192_757._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_190_755._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_191_756._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modmul(Coeffs(&_pgen_tmp_192_757._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_190_755._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_191_756._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_rc_result46_165._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_rc_result46_165._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_192_757._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_rc_result46_165._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_rc_result46_165._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_192_757._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435604._c1_poly);
        Free_poly_data(&_preg_268435604._c0_poly);
      }
      Zero_ciph(&ss_result46_167);
      for (comb_cc_lf_index_n46_168 = 0; comb_cc_lf_index_n46_168 < 2; comb_cc_lf_index_n46_168 = comb_cc_lf_index_n46_168 + 1) {
        _preg_268435605 = Rotate(comb_rc_result46_165, (1 << comb_cc_lf_index_n46_168) * 2296);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_rc_result46_165, &comb_rc_result46_165, &_preg_268435605);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&comb_rc_result46_165._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&comb_rc_result46_165._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_rc_result46_165._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435605._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_rc_result46_165._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_rc_result46_165._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435605._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435605._c1_poly);
        Free_poly_data(&_preg_268435605._c0_poly);
      }
      for (comb_cc_index_n46_169 = 0; comb_cc_index_n46_169 < 2; comb_cc_index_n46_169 = comb_cc_index_n46_169 + 1) {
        _preg_268435606 = Rotate(comb_rc_result46_165, comb_cc_index_n46_169 * 9075);
        Copy_ciph(&_ckks_gen_tmp_2863_498, &_preg_268435606);
        CMPLR_TM_START(19, 0);
        Init_ciph_down_scale(&_pgen_tmp_193_758, &_ckks_gen_tmp_2863_498);
        Rescale(&_pgen_tmp_193_758._c0_poly, &_ckks_gen_tmp_2863_498._c0_poly);
        Rescale(&_pgen_tmp_193_758._c1_poly, &_ckks_gen_tmp_2863_498._c1_poly);
        CMPLR_TM_END(19, 0);
        Pt_from_msg_ofst(&_pgen_tmp_194_759, 43/* cst_230 */, (comb_cc_index_n46_169) * (24200), 24200, 1, 2);
        CMPLR_TM_START(17, 0);
        Init_ciph_up_scale_plain(&_pgen_tmp_195_760, &_pgen_tmp_193_758, &_pgen_tmp_194_759);
        CMPLR_TM_END(17, 0);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&ss_result46_167, &ss_result46_167, &_pgen_tmp_195_760);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&ss_result46_167._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modmul(Coeffs(&_pgen_tmp_195_760._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_193_758._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_194_759._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modmul(Coeffs(&_pgen_tmp_195_760._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_193_758._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_194_759._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&ss_result46_167._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&ss_result46_167._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_195_760._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&ss_result46_167._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&ss_result46_167._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_195_760._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435606._c1_poly);
        Free_poly_data(&_preg_268435606._c0_poly);
      }
      Copy_ciph(&VS_out_avp11_158[((mesh_y_n11_159 * 1) + mesh_z_n11_160)], &ss_result46_167);
      Free_poly_data(&_preg_268435601._c1_poly);
      Free_poly_data(&_preg_268435601._c0_poly);
      Free_poly_data(&_preg_268435602._c1_poly);
      Free_poly_data(&_preg_268435602._c0_poly);
    }
  }
  Free_ciph_poly(VS_out_conv11_146, 16);
  Free_poly_data(&_preg_268435485._c1_poly);
  Free_poly_data(&_preg_268435485._c0_poly);
  Free_poly_data(&tmp_row_add45_161._c1_poly);
  Free_poly_data(&tmp_row_add45_161._c0_poly);
  Free_poly_data(&_pgen_tmp_186_751._poly);
  Free_poly_data(&_ckks_gen_tmp_2746_495._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2746_495._c0_poly);
  Free_poly_data(&_preg_268435486._c1_poly);
  Free_poly_data(&_preg_268435486._c0_poly);
  Free_poly_data(&orig_result45_162._c1_poly);
  Free_poly_data(&orig_result45_162._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_2777_496._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2777_496._c0_poly);
  Free_poly_data(&_pgen_tmp_188_753._poly);
  Free_poly_data(&_pgen_tmp_187_752._c1_poly);
  Free_poly_data(&_pgen_tmp_187_752._c0_poly);
  Free_poly_data(&_pgen_tmp_189_754._c1_poly);
  Free_poly_data(&_pgen_tmp_189_754._c0_poly);
  Free_poly_data(&comb_row_result46_163._c1_poly);
  Free_poly_data(&comb_row_result46_163._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_2810_497._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2810_497._c0_poly);
  Free_poly_data(&_pgen_tmp_191_756._poly);
  Free_poly_data(&_pgen_tmp_190_755._c1_poly);
  Free_poly_data(&_pgen_tmp_190_755._c0_poly);
  Free_poly_data(&_pgen_tmp_192_757._c1_poly);
  Free_poly_data(&_pgen_tmp_192_757._c0_poly);
  Free_poly_data(&comb_rc_result46_165._c1_poly);
  Free_poly_data(&comb_rc_result46_165._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_2863_498._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_2863_498._c0_poly);
  Free_poly_data(&_pgen_tmp_194_759._poly);
  Free_poly_data(&_pgen_tmp_193_758._c1_poly);
  Free_poly_data(&_pgen_tmp_193_758._c0_poly);
  Free_poly_data(&_pgen_tmp_195_760._c1_poly);
  Free_poly_data(&_pgen_tmp_195_760._c0_poly);
  Free_poly_data(&ss_result46_167._c1_poly);
  Free_poly_data(&ss_result46_167._c0_poly);
  for (rescale_iv_540 = 0; rescale_iv_540 < 16; rescale_iv_540 = rescale_iv_540 + 1) {
    _pgen_tmp_196_761 = VS_out_avp11_158[rescale_iv_540];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_197_762, &_pgen_tmp_196_761);
    Rescale(&_pgen_tmp_197_762._c0_poly, &_pgen_tmp_196_761._c0_poly);
    Rescale(&_pgen_tmp_197_762._c1_poly, &_pgen_tmp_196_761._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_avp11_158[rescale_iv_540], &_pgen_tmp_197_762);
  }
  Free_poly_data(&_pgen_tmp_197_762._c1_poly);
  Free_poly_data(&_pgen_tmp_197_762._c0_poly);
  for (reshardm_n11_170 = 0; reshardm_n11_170 < 4; reshardm_n11_170 = reshardm_n11_170 + 1) {
    _pgen_tmp_199_764 = VS_out_avp11_158[(reshardm_n11_170 * 4)];
    _pgen_tmp_200_765 = VS_out_avp11_158[((reshardm_n11_170 * 4) + 1)];
    _preg_268435607 = Rotate(_pgen_tmp_200_765, -5832);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_201_766, &_pgen_tmp_199_764, &_preg_268435607);
    CMPLR_TM_END(12, 0);
    _pgen_tmp_203_768 = VS_out_avp11_158[((reshardm_n11_170 * 4) + 2)];
    _pgen_tmp_204_769 = VS_out_avp11_158[((reshardm_n11_170 * 4) + 3)];
    _preg_268435608 = Rotate(_pgen_tmp_204_769, -5832);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_202_767, &_pgen_tmp_203_768, &_preg_268435608);
    _pgen_modulus_562 = Q_modulus();
    _pgen_num_q_563 = Poly_level(&_pgen_tmp_202_767._c0_poly);
    for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_202_767._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_203_768._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435608._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_202_767._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_203_768._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435608._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      _pgen_modulus_562 = _pgen_modulus_562 + 1;
    }
    CMPLR_TM_END(12, 0);
    _preg_268435609 = Rotate(_pgen_tmp_202_767, -11664);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_198_763, &_pgen_tmp_201_766, &_preg_268435609);
    _pgen_modulus_562 = Q_modulus();
    _pgen_num_q_563 = Poly_level(&_pgen_tmp_198_763._c0_poly);
    for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_201_766._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_199_764._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435607._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_201_766._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_199_764._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435607._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_198_763._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_201_766._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435609._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_198_763._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_201_766._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435609._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      _pgen_modulus_562 = _pgen_modulus_562 + 1;
    }
    CMPLR_TM_END(12, 0);
    Copy_ciph(&output_reshard11_171[reshardm_n11_170], &_pgen_tmp_198_763);
    Free_poly_data(&_preg_268435607._c1_poly);
    Free_poly_data(&_preg_268435607._c0_poly);
    Free_poly_data(&_preg_268435608._c1_poly);
    Free_poly_data(&_preg_268435608._c0_poly);
    Free_poly_data(&_preg_268435609._c1_poly);
    Free_poly_data(&_preg_268435609._c0_poly);
  }
  Free_ciph_poly(VS_out_avp11_158, 16);
  Free_poly_data(&_pgen_tmp_202_767._c1_poly);
  Free_poly_data(&_pgen_tmp_202_767._c0_poly);
  Free_poly_data(&_pgen_tmp_201_766._c1_poly);
  Free_poly_data(&_pgen_tmp_201_766._c0_poly);
  Free_poly_data(&_pgen_tmp_198_763._c1_poly);
  Free_poly_data(&_pgen_tmp_198_763._c0_poly);
  CMPLR_TM_END(3, 0);
  // pragma: 65537, 1026, 58
  // Conv_20
  // pragma: 65536, 1027, 59
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv12_172, 0, sizeof(VS_out_conv12_172));
  memset(&VS_out_conv_halo12_173, 0, sizeof(VS_out_conv_halo12_173));
  Free_ciph_poly(VS_out_conv_halo12_173, 16);
  for (mesh_y_n12_174 = 0; mesh_y_n12_174 < 4; mesh_y_n12_174 = mesh_y_n12_174 + 1) {
    for (mesh_z_n12_175 = 0; mesh_z_n12_175 < 1; mesh_z_n12_175 = mesh_z_n12_175 + 1) {
      Copy_ciph(&_preg_268435487, &VS_out_relu10_143[((mesh_y_n12_174 * 1) + mesh_z_n12_175)]);
      Copy_ciph(&input_dup_n46_176, &_preg_268435487);
      for (bs_input_n46_177 = 0; bs_input_n46_177 < 9; bs_input_n46_177 = bs_input_n46_177 + 1) {
        _preg_268435610 = Rotate(input_dup_n46_176, _cst_235[bs_input_n46_177]);
        Copy_ciph(&input_block_n46_178[bs_input_n46_177], &_preg_268435610);
        Free_poly_data(&_preg_268435610._c1_poly);
        Free_poly_data(&_preg_268435610._c0_poly);
      }
      for (mesh_x_n12_179 = 0; mesh_x_n12_179 < 16; mesh_x_n12_179 = mesh_x_n12_179 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=9
        Zero_ciph(&result_n47_180);
        for (num_grid_n47_181 = 0; num_grid_n47_181 < 8; num_grid_n47_181 = num_grid_n47_181 + 1) {
          Zero_ciph(&result_grid_n47_182);
          for (cap_block_n47_183 = 0; cap_block_n47_183 < 9; cap_block_n47_183 = cap_block_n47_183 + 1) {
            _ckks_gen_tmp_3042_499 = input_block_n46_178[cap_block_n47_183];
            Pt_from_msg_ofst(&_pgen_tmp_205_770, 44/* cst_231 */, (((((mesh_x_n12_179 * 4) + mesh_y_n12_174) * 72) + (cap_block_n47_183 + (num_grid_n47_181 * 9)))) * (24200), 24200, 1, 7);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_206_771, &_ckks_gen_tmp_3042_499, &_pgen_tmp_205_770);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n47_182, &result_grid_n47_182, &_pgen_tmp_206_771);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n47_182._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_206_771._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_3042_499._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_205_770._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_206_771._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_3042_499._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_205_770._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n47_182._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n47_182._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_206_771._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n47_182._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n47_182._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_206_771._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_208_773, &result_grid_n47_182);
          Rescale(&_pgen_tmp_208_773._c0_poly, &result_grid_n47_182._c0_poly);
          Rescale(&_pgen_tmp_208_773._c1_poly, &result_grid_n47_182._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_209_774, 45/* cst_236 */, (num_grid_n47_181) * (24200), 24200, 1, 6);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_207_772, &_pgen_tmp_208_773, &_pgen_tmp_209_774);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_207_772._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_207_772._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_208_773._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_209_774._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_207_772._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_208_773._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_209_774._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435611 = Rotate(_pgen_tmp_207_772, -24200 + (num_grid_n47_181 * 3025));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_211_776, &result_grid_n47_182);
          Rescale(&_pgen_tmp_211_776._c0_poly, &result_grid_n47_182._c0_poly);
          Rescale(&_pgen_tmp_211_776._c1_poly, &result_grid_n47_182._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_212_777, 46/* cst_237 */, (num_grid_n47_181) * (24200), 24200, 1, 6);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_210_775, &_pgen_tmp_211_776, &_pgen_tmp_212_777);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_210_775._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_210_775._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_211_776._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_212_777._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_210_775._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_211_776._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_212_777._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435612 = Rotate(_pgen_tmp_210_775, num_grid_n47_181 * 3025);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_213_778, &_preg_268435611, &_preg_268435612);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n47_180, &result_n47_180, &_pgen_tmp_213_778);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n47_180._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_213_778._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435611._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435612._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_213_778._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435611._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435612._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n47_180._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n47_180._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_213_778._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n47_180._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n47_180._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_213_778._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435611._c1_poly);
          Free_poly_data(&_preg_268435611._c0_poly);
          Free_poly_data(&_preg_268435612._c1_poly);
          Free_poly_data(&_preg_268435612._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_214_779, 47 /* cst_234 */, 24200, 2, 6);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n47_180, &result_n47_180, &_pgen_tmp_214_779);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n47_180._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n47_180._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n47_180._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_214_779._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n47_180._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n47_180._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_216_781 = VS_out_conv12_172[((mesh_x_n12_179 * 1) + mesh_z_n12_175)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_215_780, &_pgen_tmp_216_781, &result_n47_180);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_215_780._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_215_780._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_216_781._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n47_180._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_215_780._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_216_781._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n47_180._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv12_172[((mesh_x_n12_179 * 1) + mesh_z_n12_175)], &_pgen_tmp_215_780);
      }
    }
  }
  Free_ciph_poly(VS_out_relu10_143, 4);
  Free_poly_data(&_preg_268435487._c1_poly);
  Free_poly_data(&_preg_268435487._c0_poly);
  Free_poly_data(&input_dup_n46_176._c1_poly);
  Free_poly_data(&input_dup_n46_176._c0_poly);
  Free_ciph_poly(input_block_n46_178, 9);
  Free_poly_data(&_pgen_tmp_205_770._poly);
  Free_poly_data(&_pgen_tmp_206_771._c1_poly);
  Free_poly_data(&_pgen_tmp_206_771._c0_poly);
  Free_poly_data(&_pgen_tmp_209_774._poly);
  Free_poly_data(&_pgen_tmp_208_773._c1_poly);
  Free_poly_data(&_pgen_tmp_208_773._c0_poly);
  Free_poly_data(&_pgen_tmp_207_772._c1_poly);
  Free_poly_data(&_pgen_tmp_207_772._c0_poly);
  Free_poly_data(&result_grid_n47_182._c1_poly);
  Free_poly_data(&result_grid_n47_182._c0_poly);
  Free_poly_data(&_pgen_tmp_212_777._poly);
  Free_poly_data(&_pgen_tmp_211_776._c1_poly);
  Free_poly_data(&_pgen_tmp_211_776._c0_poly);
  Free_poly_data(&_pgen_tmp_210_775._c1_poly);
  Free_poly_data(&_pgen_tmp_210_775._c0_poly);
  Free_poly_data(&_pgen_tmp_213_778._c1_poly);
  Free_poly_data(&_pgen_tmp_213_778._c0_poly);
  Free_poly_data(&_pgen_tmp_214_779._poly);
  Free_poly_data(&result_n47_180._c1_poly);
  Free_poly_data(&result_n47_180._c0_poly);
  Free_poly_data(&_pgen_tmp_215_780._c1_poly);
  Free_poly_data(&_pgen_tmp_215_780._c0_poly);
  for (rescale_iv_541 = 0; rescale_iv_541 < 16; rescale_iv_541 = rescale_iv_541 + 1) {
    _pgen_tmp_217_782 = VS_out_conv12_172[rescale_iv_541];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_218_783, &_pgen_tmp_217_782);
    Rescale(&_pgen_tmp_218_783._c0_poly, &_pgen_tmp_217_782._c0_poly);
    Rescale(&_pgen_tmp_218_783._c1_poly, &_pgen_tmp_217_782._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv12_172[rescale_iv_541], &_pgen_tmp_218_783);
  }
  Free_poly_data(&_pgen_tmp_218_783._c1_poly);
  Free_poly_data(&_pgen_tmp_218_783._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 59
  // AveragePool_22
  // pragma: 65536, 1026, 60
  CMPLR_TM_START(3, 0);
  memset(&VS_out_avp12_184, 0, sizeof(VS_out_avp12_184));
  for (mesh_y_n12_185 = 0; mesh_y_n12_185 < 16; mesh_y_n12_185 = mesh_y_n12_185 + 1) {
    for (mesh_z_n12_186 = 0; mesh_z_n12_186 < 1; mesh_z_n12_186 = mesh_z_n12_186 + 1) {
      Copy_ciph(&_preg_268435488, &VS_out_conv12_172[((mesh_y_n12_185 * 1) + mesh_z_n12_186)]);
      _preg_268435613 = Rotate(_preg_268435488, 55);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&tmp_row_add47_187, &_preg_268435488, &_preg_268435613);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&tmp_row_add47_187._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&tmp_row_add47_187._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435488._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435613._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&tmp_row_add47_187._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435488._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435613._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      _preg_268435614 = Rotate(tmp_row_add47_187, 1);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_ckks_gen_tmp_3189_500, &tmp_row_add47_187, &_preg_268435614);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_ckks_gen_tmp_3189_500._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&_ckks_gen_tmp_3189_500._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&tmp_row_add47_187._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435614._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&_ckks_gen_tmp_3189_500._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&tmp_row_add47_187._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435614._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Pt_from_msg(&_pgen_tmp_219_784, 48 /* cst_238 */, 24200, 1, 5);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435489, &_ckks_gen_tmp_3189_500, &_pgen_tmp_219_784);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_preg_268435489._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_preg_268435489._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_3189_500._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_219_784._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_preg_268435489._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_3189_500._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_219_784._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      Copy_ciph(&orig_result47_188, &_preg_268435489);
      Zero_ciph(&comb_row_result48_189);
      for (comb_row_index_n48_190 = 0; comb_row_index_n48_190 < 27; comb_row_index_n48_190 = comb_row_index_n48_190 + 1) {
        _preg_268435615 = Rotate(orig_result47_188, comb_row_index_n48_190 * 1);
        Copy_ciph(&_ckks_gen_tmp_3220_501, &_preg_268435615);
        CMPLR_TM_START(19, 0);
        Init_ciph_down_scale(&_pgen_tmp_220_785, &_ckks_gen_tmp_3220_501);
        Rescale(&_pgen_tmp_220_785._c0_poly, &_ckks_gen_tmp_3220_501._c0_poly);
        Rescale(&_pgen_tmp_220_785._c1_poly, &_ckks_gen_tmp_3220_501._c1_poly);
        CMPLR_TM_END(19, 0);
        Pt_from_msg_ofst(&_pgen_tmp_221_786, 49/* cst_239 */, (comb_row_index_n48_190) * (24200), 24200, 1, 4);
        CMPLR_TM_START(17, 0);
        Init_ciph_up_scale_plain(&_pgen_tmp_222_787, &_pgen_tmp_220_785, &_pgen_tmp_221_786);
        CMPLR_TM_END(17, 0);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_row_result48_189, &comb_row_result48_189, &_pgen_tmp_222_787);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&comb_row_result48_189._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modmul(Coeffs(&_pgen_tmp_222_787._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_220_785._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_221_786._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modmul(Coeffs(&_pgen_tmp_222_787._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_220_785._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_221_786._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_row_result48_189._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_row_result48_189._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_222_787._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_row_result48_189._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_row_result48_189._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_222_787._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435615._c1_poly);
        Free_poly_data(&_preg_268435615._c0_poly);
      }
      Zero_ciph(&comb_rc_result48_191);
      for (comb_rc_index_n48_192 = 0; comb_rc_index_n48_192 < 27; comb_rc_index_n48_192 = comb_rc_index_n48_192 + 1) {
        _preg_268435616 = Rotate(comb_row_result48_189, comb_rc_index_n48_192 * 83);
        Copy_ciph(&_ckks_gen_tmp_3253_502, &_preg_268435616);
        CMPLR_TM_START(19, 0);
        Init_ciph_down_scale(&_pgen_tmp_223_788, &_ckks_gen_tmp_3253_502);
        Rescale(&_pgen_tmp_223_788._c0_poly, &_ckks_gen_tmp_3253_502._c0_poly);
        Rescale(&_pgen_tmp_223_788._c1_poly, &_ckks_gen_tmp_3253_502._c1_poly);
        CMPLR_TM_END(19, 0);
        Pt_from_msg_ofst(&_pgen_tmp_224_789, 50/* cst_240 */, (comb_rc_index_n48_192) * (24200), 24200, 1, 3);
        CMPLR_TM_START(17, 0);
        Init_ciph_up_scale_plain(&_pgen_tmp_225_790, &_pgen_tmp_223_788, &_pgen_tmp_224_789);
        CMPLR_TM_END(17, 0);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_rc_result48_191, &comb_rc_result48_191, &_pgen_tmp_225_790);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&comb_rc_result48_191._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modmul(Coeffs(&_pgen_tmp_225_790._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_223_788._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_224_789._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modmul(Coeffs(&_pgen_tmp_225_790._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_223_788._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_224_789._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_rc_result48_191._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_rc_result48_191._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_225_790._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_rc_result48_191._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_rc_result48_191._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_225_790._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435616._c1_poly);
        Free_poly_data(&_preg_268435616._c0_poly);
      }
      Zero_ciph(&ss_result48_193);
      for (comb_cc_lf_index_n48_194 = 0; comb_cc_lf_index_n48_194 < 2; comb_cc_lf_index_n48_194 = comb_cc_lf_index_n48_194 + 1) {
        _preg_268435617 = Rotate(comb_rc_result48_191, (1 << comb_cc_lf_index_n48_194) * 2296);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_rc_result48_191, &comb_rc_result48_191, &_preg_268435617);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&comb_rc_result48_191._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&comb_rc_result48_191._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_rc_result48_191._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435617._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_rc_result48_191._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_rc_result48_191._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435617._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435617._c1_poly);
        Free_poly_data(&_preg_268435617._c0_poly);
      }
      for (comb_cc_index_n48_195 = 0; comb_cc_index_n48_195 < 2; comb_cc_index_n48_195 = comb_cc_index_n48_195 + 1) {
        _preg_268435618 = Rotate(comb_rc_result48_191, comb_cc_index_n48_195 * 9075);
        Copy_ciph(&_ckks_gen_tmp_3306_503, &_preg_268435618);
        CMPLR_TM_START(19, 0);
        Init_ciph_down_scale(&_pgen_tmp_226_791, &_ckks_gen_tmp_3306_503);
        Rescale(&_pgen_tmp_226_791._c0_poly, &_ckks_gen_tmp_3306_503._c0_poly);
        Rescale(&_pgen_tmp_226_791._c1_poly, &_ckks_gen_tmp_3306_503._c1_poly);
        CMPLR_TM_END(19, 0);
        Pt_from_msg_ofst(&_pgen_tmp_227_792, 51/* cst_241 */, (comb_cc_index_n48_195) * (24200), 24200, 1, 2);
        CMPLR_TM_START(17, 0);
        Init_ciph_up_scale_plain(&_pgen_tmp_228_793, &_pgen_tmp_226_791, &_pgen_tmp_227_792);
        CMPLR_TM_END(17, 0);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&ss_result48_193, &ss_result48_193, &_pgen_tmp_228_793);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&ss_result48_193._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modmul(Coeffs(&_pgen_tmp_228_793._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_226_791._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_227_792._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modmul(Coeffs(&_pgen_tmp_228_793._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_226_791._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_227_792._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&ss_result48_193._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&ss_result48_193._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_228_793._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&ss_result48_193._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&ss_result48_193._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_228_793._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435618._c1_poly);
        Free_poly_data(&_preg_268435618._c0_poly);
      }
      Copy_ciph(&VS_out_avp12_184[((mesh_y_n12_185 * 1) + mesh_z_n12_186)], &ss_result48_193);
      Free_poly_data(&_preg_268435613._c1_poly);
      Free_poly_data(&_preg_268435613._c0_poly);
      Free_poly_data(&_preg_268435614._c1_poly);
      Free_poly_data(&_preg_268435614._c0_poly);
    }
  }
  Free_ciph_poly(VS_out_conv12_172, 16);
  Free_poly_data(&_preg_268435488._c1_poly);
  Free_poly_data(&_preg_268435488._c0_poly);
  Free_poly_data(&tmp_row_add47_187._c1_poly);
  Free_poly_data(&tmp_row_add47_187._c0_poly);
  Free_poly_data(&_pgen_tmp_219_784._poly);
  Free_poly_data(&_ckks_gen_tmp_3189_500._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3189_500._c0_poly);
  Free_poly_data(&_preg_268435489._c1_poly);
  Free_poly_data(&_preg_268435489._c0_poly);
  Free_poly_data(&orig_result47_188._c1_poly);
  Free_poly_data(&orig_result47_188._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_3220_501._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3220_501._c0_poly);
  Free_poly_data(&_pgen_tmp_221_786._poly);
  Free_poly_data(&_pgen_tmp_220_785._c1_poly);
  Free_poly_data(&_pgen_tmp_220_785._c0_poly);
  Free_poly_data(&_pgen_tmp_222_787._c1_poly);
  Free_poly_data(&_pgen_tmp_222_787._c0_poly);
  Free_poly_data(&comb_row_result48_189._c1_poly);
  Free_poly_data(&comb_row_result48_189._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_3253_502._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3253_502._c0_poly);
  Free_poly_data(&_pgen_tmp_224_789._poly);
  Free_poly_data(&_pgen_tmp_223_788._c1_poly);
  Free_poly_data(&_pgen_tmp_223_788._c0_poly);
  Free_poly_data(&_pgen_tmp_225_790._c1_poly);
  Free_poly_data(&_pgen_tmp_225_790._c0_poly);
  Free_poly_data(&comb_rc_result48_191._c1_poly);
  Free_poly_data(&comb_rc_result48_191._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_3306_503._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_3306_503._c0_poly);
  Free_poly_data(&_pgen_tmp_227_792._poly);
  Free_poly_data(&_pgen_tmp_226_791._c1_poly);
  Free_poly_data(&_pgen_tmp_226_791._c0_poly);
  Free_poly_data(&_pgen_tmp_228_793._c1_poly);
  Free_poly_data(&_pgen_tmp_228_793._c0_poly);
  Free_poly_data(&ss_result48_193._c1_poly);
  Free_poly_data(&ss_result48_193._c0_poly);
  for (rescale_iv_542 = 0; rescale_iv_542 < 16; rescale_iv_542 = rescale_iv_542 + 1) {
    _pgen_tmp_229_794 = VS_out_avp12_184[rescale_iv_542];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_230_795, &_pgen_tmp_229_794);
    Rescale(&_pgen_tmp_230_795._c0_poly, &_pgen_tmp_229_794._c0_poly);
    Rescale(&_pgen_tmp_230_795._c1_poly, &_pgen_tmp_229_794._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_avp12_184[rescale_iv_542], &_pgen_tmp_230_795);
  }
  Free_poly_data(&_pgen_tmp_230_795._c1_poly);
  Free_poly_data(&_pgen_tmp_230_795._c0_poly);
  for (reshardm_n12_196 = 0; reshardm_n12_196 < 4; reshardm_n12_196 = reshardm_n12_196 + 1) {
    _pgen_tmp_232_797 = VS_out_avp12_184[(reshardm_n12_196 * 4)];
    _pgen_tmp_233_798 = VS_out_avp12_184[((reshardm_n12_196 * 4) + 1)];
    _preg_268435619 = Rotate(_pgen_tmp_233_798, -5832);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_234_799, &_pgen_tmp_232_797, &_preg_268435619);
    CMPLR_TM_END(12, 0);
    _pgen_tmp_236_801 = VS_out_avp12_184[((reshardm_n12_196 * 4) + 2)];
    _pgen_tmp_237_802 = VS_out_avp12_184[((reshardm_n12_196 * 4) + 3)];
    _preg_268435620 = Rotate(_pgen_tmp_237_802, -5832);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_235_800, &_pgen_tmp_236_801, &_preg_268435620);
    _pgen_modulus_562 = Q_modulus();
    _pgen_num_q_563 = Poly_level(&_pgen_tmp_235_800._c0_poly);
    for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_235_800._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_236_801._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435620._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_235_800._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_236_801._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435620._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      _pgen_modulus_562 = _pgen_modulus_562 + 1;
    }
    CMPLR_TM_END(12, 0);
    _preg_268435621 = Rotate(_pgen_tmp_235_800, -11664);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_231_796, &_pgen_tmp_234_799, &_preg_268435621);
    _pgen_modulus_562 = Q_modulus();
    _pgen_num_q_563 = Poly_level(&_pgen_tmp_231_796._c0_poly);
    for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_234_799._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_232_797._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435619._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_234_799._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_232_797._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435619._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_231_796._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_234_799._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435621._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_231_796._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_234_799._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435621._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      _pgen_modulus_562 = _pgen_modulus_562 + 1;
    }
    CMPLR_TM_END(12, 0);
    Copy_ciph(&output_reshard12_197[reshardm_n12_196], &_pgen_tmp_231_796);
    Free_poly_data(&_preg_268435619._c1_poly);
    Free_poly_data(&_preg_268435619._c0_poly);
    Free_poly_data(&_preg_268435620._c1_poly);
    Free_poly_data(&_preg_268435620._c0_poly);
    Free_poly_data(&_preg_268435621._c1_poly);
    Free_poly_data(&_preg_268435621._c0_poly);
  }
  Free_ciph_poly(VS_out_avp12_184, 16);
  Free_poly_data(&_pgen_tmp_235_800._c1_poly);
  Free_poly_data(&_pgen_tmp_235_800._c0_poly);
  Free_poly_data(&_pgen_tmp_234_799._c1_poly);
  Free_poly_data(&_pgen_tmp_234_799._c0_poly);
  Free_poly_data(&_pgen_tmp_231_796._c1_poly);
  Free_poly_data(&_pgen_tmp_231_796._c0_poly);
  CMPLR_TM_END(3, 0);
  // pragma: 65537, 1026, 60
  // Concat_23
  // pragma: 65536, 1045, 61
  CMPLR_TM_START(4, 0);
  for (concat_op0_n13_198 = 0; concat_op0_n13_198 < 4; concat_op0_n13_198 = concat_op0_n13_198 + 1) {
    _pgen_tmp_238_803 = output_reshard11_171[concat_op0_n13_198];
    Copy_ciph(&VS_out_cocat13_199[(concat_op0_n13_198 + 0)], &_pgen_tmp_238_803);
  }
  Free_ciph_poly(output_reshard11_171, 4);
  for (concat_op1_n13_200 = 0; concat_op1_n13_200 < 4; concat_op1_n13_200 = concat_op1_n13_200 + 1) {
    _pgen_tmp_239_804 = output_reshard12_197[concat_op1_n13_200];
    Copy_ciph(&VS_out_cocat13_199[(concat_op1_n13_200 + 4)], &_pgen_tmp_239_804);
  }
  Free_ciph_poly(output_reshard12_197, 4);
  CMPLR_TM_END(4, 0);
  // pragma: 65537, 1045, 61
  // Relu_24
  // pragma: 65536, 1033, 62
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu13_201, 0, sizeof(VS_out_relu13_201));
  for (mesh_y_n13_202 = 0; mesh_y_n13_202 < 8; mesh_y_n13_202 = mesh_y_n13_202 + 1) {
    for (mesh_z_n13_203 = 0; mesh_z_n13_203 < 1; mesh_z_n13_203 = mesh_z_n13_203 + 1) {
      _pgen_tmp_240_805 = VS_out_cocat13_199[((mesh_y_n13_202 * 1) + mesh_z_n13_203)];
      Bootstrap(&_preg_268435490, &_pgen_tmp_240_805, 15);
      Encode_float(&_pgen_tmp_241_806, &_cst_419, 1, 1, Level(&_preg_268435490));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435492, &_preg_268435490, &_pgen_tmp_241_806);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_preg_268435492._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_preg_268435492._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435490._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_241_806._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_preg_268435492._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435490._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_241_806._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_242_807, &_preg_268435492);
      Rescale(&_pgen_tmp_242_807._c0_poly, &_preg_268435492._c0_poly);
      Rescale(&_pgen_tmp_242_807._c1_poly, &_preg_268435492._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435491 = App_relu(_preg_268435490, _pgen_tmp_242_807, 23328);
      _pgen_tmp_244_809 = VS_out_relu13_201[((mesh_y_n13_202 * 1) + mesh_z_n13_203)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_243_808, &_pgen_tmp_244_809, &_preg_268435491);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_pgen_tmp_243_808._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_243_808._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_244_809._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435491._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_243_808._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_244_809._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435491._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu13_201[((mesh_y_n13_202 * 1) + mesh_z_n13_203)], &_pgen_tmp_243_808);
    }
  }
  Free_ciph_poly(VS_out_cocat13_199, 8);
  Free_poly_data(&_pgen_tmp_241_806._poly);
  Free_poly_data(&_preg_268435492._c1_poly);
  Free_poly_data(&_preg_268435492._c0_poly);
  Free_poly_data(&_pgen_tmp_242_807._c1_poly);
  Free_poly_data(&_pgen_tmp_242_807._c0_poly);
  Free_poly_data(&_preg_268435490._c1_poly);
  Free_poly_data(&_preg_268435490._c0_poly);
  Free_poly_data(&_preg_268435491._c1_poly);
  Free_poly_data(&_preg_268435491._c0_poly);
  Free_poly_data(&_pgen_tmp_243_808._c1_poly);
  Free_poly_data(&_pgen_tmp_243_808._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 62
  // Conv_25
  // pragma: 65536, 1027, 63
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv14_204, 0, sizeof(VS_out_conv14_204));
  memset(&VS_out_conv_halo14_205, 0, sizeof(VS_out_conv_halo14_205));
  Free_ciph_poly(VS_out_conv_halo14_205, 1);
  for (mesh_y_n14_206 = 0; mesh_y_n14_206 < 8; mesh_y_n14_206 = mesh_y_n14_206 + 1) {
    for (mesh_z_n14_207 = 0; mesh_z_n14_207 < 1; mesh_z_n14_207 = mesh_z_n14_207 + 1) {
      Copy_ciph(&_preg_268435493, &VS_out_relu13_201[((mesh_y_n14_206 * 1) + mesh_z_n14_207)]);
      Copy_ciph(&input_dup_n48_208, &_preg_268435493);
      for (bs_input_n48_209 = 0; bs_input_n48_209 < 1; bs_input_n48_209 = bs_input_n48_209 + 1) {
        _preg_268435622 = Rotate(input_dup_n48_208, _cst_246[bs_input_n48_209]);
        Copy_ciph(&input_block_n48_210[bs_input_n48_209], &_preg_268435622);
        Free_poly_data(&_preg_268435622._c1_poly);
        Free_poly_data(&_preg_268435622._c0_poly);
      }
      for (mesh_x_n14_211 = 0; mesh_x_n14_211 < 1; mesh_x_n14_211 = mesh_x_n14_211 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n49_212);
        for (num_grid_n49_213 = 0; num_grid_n49_213 < 32; num_grid_n49_213 = num_grid_n49_213 + 1) {
          Zero_ciph(&result_grid_n49_214);
          for (cap_block_n49_215 = 0; cap_block_n49_215 < 1; cap_block_n49_215 = cap_block_n49_215 + 1) {
            _ckks_gen_tmp_3601_504 = input_block_n48_210[cap_block_n49_215];
            Pt_from_msg_ofst(&_pgen_tmp_245_810, 52/* cst_242 */, (((((mesh_x_n14_211 * 8) + mesh_y_n14_206) * 32) + (cap_block_n49_215 + (num_grid_n49_213 * 1)))) * (23328), 23328, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_246_811, &_ckks_gen_tmp_3601_504, &_pgen_tmp_245_810);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n49_214, &result_grid_n49_214, &_pgen_tmp_246_811);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n49_214._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_246_811._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_3601_504._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_245_810._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_246_811._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_3601_504._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_245_810._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n49_214._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n49_214._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_246_811._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n49_214._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n49_214._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_246_811._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_248_813, &result_grid_n49_214);
          Rescale(&_pgen_tmp_248_813._c0_poly, &result_grid_n49_214._c0_poly);
          Rescale(&_pgen_tmp_248_813._c1_poly, &result_grid_n49_214._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_249_814, 53/* cst_247 */, (num_grid_n49_213) * (23328), 23328, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_247_812, &_pgen_tmp_248_813, &_pgen_tmp_249_814);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_247_812._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_247_812._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_248_813._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_249_814._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_247_812._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_248_813._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_249_814._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435623 = Rotate(_pgen_tmp_247_812, -23328 + (num_grid_n49_213 * 729));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_251_816, &result_grid_n49_214);
          Rescale(&_pgen_tmp_251_816._c0_poly, &result_grid_n49_214._c0_poly);
          Rescale(&_pgen_tmp_251_816._c1_poly, &result_grid_n49_214._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_252_817, 54/* cst_248 */, (num_grid_n49_213) * (23328), 23328, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_250_815, &_pgen_tmp_251_816, &_pgen_tmp_252_817);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_250_815._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_250_815._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_251_816._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_252_817._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_250_815._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_251_816._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_252_817._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435624 = Rotate(_pgen_tmp_250_815, num_grid_n49_213 * 729);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_253_818, &_preg_268435623, &_preg_268435624);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n49_212, &result_n49_212, &_pgen_tmp_253_818);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n49_212._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_253_818._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435623._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435624._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_253_818._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435623._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435624._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n49_212._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n49_212._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_253_818._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n49_212._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n49_212._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_253_818._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435623._c1_poly);
          Free_poly_data(&_preg_268435623._c0_poly);
          Free_poly_data(&_preg_268435624._c1_poly);
          Free_poly_data(&_preg_268435624._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_254_819, 55 /* cst_245 */, 23328, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n49_212, &result_n49_212, &_pgen_tmp_254_819);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n49_212._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n49_212._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n49_212._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_254_819._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n49_212._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n49_212._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_256_821 = VS_out_conv14_204[((mesh_x_n14_211 * 1) + mesh_z_n14_207)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_255_820, &_pgen_tmp_256_821, &result_n49_212);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_255_820._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_255_820._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_256_821._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n49_212._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_255_820._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_256_821._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n49_212._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv14_204[((mesh_x_n14_211 * 1) + mesh_z_n14_207)], &_pgen_tmp_255_820);
      }
    }
  }
  Free_ciph_poly(VS_out_relu13_201, 8);
  Free_poly_data(&_preg_268435493._c1_poly);
  Free_poly_data(&_preg_268435493._c0_poly);
  Free_poly_data(&input_dup_n48_208._c1_poly);
  Free_poly_data(&input_dup_n48_208._c0_poly);
  Free_ciph_poly(input_block_n48_210, 1);
  Free_poly_data(&_pgen_tmp_245_810._poly);
  Free_poly_data(&_pgen_tmp_246_811._c1_poly);
  Free_poly_data(&_pgen_tmp_246_811._c0_poly);
  Free_poly_data(&_pgen_tmp_249_814._poly);
  Free_poly_data(&_pgen_tmp_248_813._c1_poly);
  Free_poly_data(&_pgen_tmp_248_813._c0_poly);
  Free_poly_data(&_pgen_tmp_247_812._c1_poly);
  Free_poly_data(&_pgen_tmp_247_812._c0_poly);
  Free_poly_data(&result_grid_n49_214._c1_poly);
  Free_poly_data(&result_grid_n49_214._c0_poly);
  Free_poly_data(&_pgen_tmp_252_817._poly);
  Free_poly_data(&_pgen_tmp_251_816._c1_poly);
  Free_poly_data(&_pgen_tmp_251_816._c0_poly);
  Free_poly_data(&_pgen_tmp_250_815._c1_poly);
  Free_poly_data(&_pgen_tmp_250_815._c0_poly);
  Free_poly_data(&_pgen_tmp_253_818._c1_poly);
  Free_poly_data(&_pgen_tmp_253_818._c0_poly);
  Free_poly_data(&_pgen_tmp_254_819._poly);
  Free_poly_data(&result_n49_212._c1_poly);
  Free_poly_data(&result_n49_212._c0_poly);
  Free_poly_data(&_pgen_tmp_255_820._c1_poly);
  Free_poly_data(&_pgen_tmp_255_820._c0_poly);
  for (rescale_iv_543 = 0; rescale_iv_543 < 1; rescale_iv_543 = rescale_iv_543 + 1) {
    _pgen_tmp_257_822 = VS_out_conv14_204[rescale_iv_543];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_258_823, &_pgen_tmp_257_822);
    Rescale(&_pgen_tmp_258_823._c0_poly, &_pgen_tmp_257_822._c0_poly);
    Rescale(&_pgen_tmp_258_823._c1_poly, &_pgen_tmp_257_822._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv14_204[rescale_iv_543], &_pgen_tmp_258_823);
  }
  Free_poly_data(&_pgen_tmp_258_823._c1_poly);
  Free_poly_data(&_pgen_tmp_258_823._c0_poly);
  Copy_ciph(&_preg_268435494, &VS_out_conv14_204[0]);
  Free_ciph_poly(VS_out_conv14_204, 1);
  Copy_ciph(&_preg_268435495, &_preg_268435494);
  Free_poly_data(&_preg_268435494._c1_poly);
  Free_poly_data(&_preg_268435494._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 63
  // Relu_26
  // pragma: 65536, 1033, 64
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435496, &_preg_268435495, 15);
  Free_poly_data(&_preg_268435495._c1_poly);
  Free_poly_data(&_preg_268435495._c0_poly);
  Encode_float(&_pgen_tmp_260_825, &_cst_420, 1, 1, Level(&_preg_268435496));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_259_824, &_preg_268435496, &_pgen_tmp_260_825);
  _pgen_modulus_562 = Q_modulus();
  _pgen_num_q_563 = Poly_level(&_pgen_tmp_259_824._c0_poly);
  for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_259_824._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435496._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_260_825._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_259_824._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435496._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_260_825._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    _pgen_modulus_562 = _pgen_modulus_562 + 1;
  }
  Free_poly_data(&_pgen_tmp_260_825._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435498, &_pgen_tmp_259_824);
  Rescale(&_preg_268435498._c0_poly, &_pgen_tmp_259_824._c0_poly);
  Rescale(&_preg_268435498._c1_poly, &_pgen_tmp_259_824._c1_poly);
  Free_poly_data(&_pgen_tmp_259_824._c1_poly);
  Free_poly_data(&_pgen_tmp_259_824._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435497 = App_relu(_preg_268435496, _preg_268435498, 23328);
  Free_poly_data(&_preg_268435498._c1_poly);
  Free_poly_data(&_preg_268435498._c0_poly);
  Free_poly_data(&_preg_268435496._c1_poly);
  Free_poly_data(&_preg_268435496._c0_poly);
  Copy_ciph(&_preg_268435499, &_preg_268435497);
  Free_poly_data(&_preg_268435497._c1_poly);
  Free_poly_data(&_preg_268435497._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 64
  // Conv_27
  // pragma: 65536, 1027, 65
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv15_216, 0, sizeof(VS_out_conv15_216));
  memset(&VS_out_conv_halo15_217, 0, sizeof(VS_out_conv_halo15_217));
  Free_ciph_poly(VS_out_conv_halo15_217, 4);
  for (mesh_y_n15_218 = 0; mesh_y_n15_218 < 1; mesh_y_n15_218 = mesh_y_n15_218 + 1) {
    for (mesh_z_n15_219 = 0; mesh_z_n15_219 < 1; mesh_z_n15_219 = mesh_z_n15_219 + 1) {
      Copy_ciph(&_preg_268435500, &_preg_268435499);
      Copy_ciph(&input_dup_n49_220, &_preg_268435500);
      for (bs_input_n49_221 = 0; bs_input_n49_221 < 1; bs_input_n49_221 = bs_input_n49_221 + 1) {
        _preg_268435625 = Rotate(input_dup_n49_220, _cst_253[bs_input_n49_221]);
        Copy_ciph(&input_block_n49_222[bs_input_n49_221], &_preg_268435625);
        Free_poly_data(&_preg_268435625._c1_poly);
        Free_poly_data(&_preg_268435625._c0_poly);
      }
      for (mesh_x_n15_223 = 0; mesh_x_n15_223 < 4; mesh_x_n15_223 = mesh_x_n15_223 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n50_224);
        for (num_grid_n50_225 = 0; num_grid_n50_225 < 32; num_grid_n50_225 = num_grid_n50_225 + 1) {
          Zero_ciph(&result_grid_n50_226);
          for (cap_block_n50_227 = 0; cap_block_n50_227 < 1; cap_block_n50_227 = cap_block_n50_227 + 1) {
            _ckks_gen_tmp_3821_505 = input_block_n49_222[cap_block_n50_227];
            Pt_from_msg_ofst(&_pgen_tmp_261_826, 56/* cst_249 */, (((((mesh_x_n15_223 * 1) + mesh_y_n15_218) * 32) + (cap_block_n50_227 + (num_grid_n50_225 * 1)))) * (23328), 23328, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_262_827, &_ckks_gen_tmp_3821_505, &_pgen_tmp_261_826);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n50_226, &result_grid_n50_226, &_pgen_tmp_262_827);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n50_226._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_262_827._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_3821_505._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_261_826._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_262_827._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_3821_505._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_261_826._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n50_226._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n50_226._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_262_827._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n50_226._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n50_226._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_262_827._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_264_829, &result_grid_n50_226);
          Rescale(&_pgen_tmp_264_829._c0_poly, &result_grid_n50_226._c0_poly);
          Rescale(&_pgen_tmp_264_829._c1_poly, &result_grid_n50_226._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_265_830, 57/* cst_254 */, (num_grid_n50_225) * (23328), 23328, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_263_828, &_pgen_tmp_264_829, &_pgen_tmp_265_830);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_263_828._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_263_828._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_264_829._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_265_830._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_263_828._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_264_829._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_265_830._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435626 = Rotate(_pgen_tmp_263_828, -23328 + (num_grid_n50_225 * 729));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_267_832, &result_grid_n50_226);
          Rescale(&_pgen_tmp_267_832._c0_poly, &result_grid_n50_226._c0_poly);
          Rescale(&_pgen_tmp_267_832._c1_poly, &result_grid_n50_226._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_268_833, 58/* cst_255 */, (num_grid_n50_225) * (23328), 23328, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_266_831, &_pgen_tmp_267_832, &_pgen_tmp_268_833);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_266_831._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_266_831._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_267_832._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_268_833._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_266_831._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_267_832._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_268_833._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435627 = Rotate(_pgen_tmp_266_831, num_grid_n50_225 * 729);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_269_834, &_preg_268435626, &_preg_268435627);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n50_224, &result_n50_224, &_pgen_tmp_269_834);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n50_224._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_269_834._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435626._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435627._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_269_834._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435626._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435627._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n50_224._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n50_224._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_269_834._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n50_224._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n50_224._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_269_834._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435626._c1_poly);
          Free_poly_data(&_preg_268435626._c0_poly);
          Free_poly_data(&_preg_268435627._c1_poly);
          Free_poly_data(&_preg_268435627._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_270_835, 59 /* cst_252 */, 23328, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n50_224, &result_n50_224, &_pgen_tmp_270_835);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n50_224._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n50_224._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n50_224._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_270_835._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n50_224._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n50_224._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_272_837 = VS_out_conv15_216[((mesh_x_n15_223 * 1) + mesh_z_n15_219)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_271_836, &_pgen_tmp_272_837, &result_n50_224);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_271_836._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_271_836._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_272_837._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n50_224._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_271_836._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_272_837._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n50_224._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv15_216[((mesh_x_n15_223 * 1) + mesh_z_n15_219)], &_pgen_tmp_271_836);
      }
    }
  }
  Free_poly_data(&_preg_268435500._c1_poly);
  Free_poly_data(&_preg_268435500._c0_poly);
  Free_poly_data(&input_dup_n49_220._c1_poly);
  Free_poly_data(&input_dup_n49_220._c0_poly);
  Free_ciph_poly(input_block_n49_222, 1);
  Free_poly_data(&_pgen_tmp_261_826._poly);
  Free_poly_data(&_pgen_tmp_262_827._c1_poly);
  Free_poly_data(&_pgen_tmp_262_827._c0_poly);
  Free_poly_data(&_pgen_tmp_265_830._poly);
  Free_poly_data(&_pgen_tmp_264_829._c1_poly);
  Free_poly_data(&_pgen_tmp_264_829._c0_poly);
  Free_poly_data(&_pgen_tmp_263_828._c1_poly);
  Free_poly_data(&_pgen_tmp_263_828._c0_poly);
  Free_poly_data(&result_grid_n50_226._c1_poly);
  Free_poly_data(&result_grid_n50_226._c0_poly);
  Free_poly_data(&_pgen_tmp_268_833._poly);
  Free_poly_data(&_pgen_tmp_267_832._c1_poly);
  Free_poly_data(&_pgen_tmp_267_832._c0_poly);
  Free_poly_data(&_pgen_tmp_266_831._c1_poly);
  Free_poly_data(&_pgen_tmp_266_831._c0_poly);
  Free_poly_data(&_pgen_tmp_269_834._c1_poly);
  Free_poly_data(&_pgen_tmp_269_834._c0_poly);
  Free_poly_data(&_pgen_tmp_270_835._poly);
  Free_poly_data(&result_n50_224._c1_poly);
  Free_poly_data(&result_n50_224._c0_poly);
  Free_poly_data(&_pgen_tmp_271_836._c1_poly);
  Free_poly_data(&_pgen_tmp_271_836._c0_poly);
  for (rescale_iv_544 = 0; rescale_iv_544 < 4; rescale_iv_544 = rescale_iv_544 + 1) {
    _pgen_tmp_273_838 = VS_out_conv15_216[rescale_iv_544];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_274_839, &_pgen_tmp_273_838);
    Rescale(&_pgen_tmp_274_839._c0_poly, &_pgen_tmp_273_838._c0_poly);
    Rescale(&_pgen_tmp_274_839._c1_poly, &_pgen_tmp_273_838._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv15_216[rescale_iv_544], &_pgen_tmp_274_839);
  }
  Free_poly_data(&_pgen_tmp_274_839._c1_poly);
  Free_poly_data(&_pgen_tmp_274_839._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 65
  // Conv_28
  // pragma: 65536, 1027, 66
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv16_228, 0, sizeof(VS_out_conv16_228));
  memset(&VS_out_conv_halo16_229, 0, sizeof(VS_out_conv_halo16_229));
  Free_ciph_poly(VS_out_conv_halo16_229, 4);
  for (mesh_y_n16_230 = 0; mesh_y_n16_230 < 1; mesh_y_n16_230 = mesh_y_n16_230 + 1) {
    for (mesh_z_n16_231 = 0; mesh_z_n16_231 < 1; mesh_z_n16_231 = mesh_z_n16_231 + 1) {
      Copy_ciph(&_preg_268435501, &_preg_268435499);
      Copy_ciph(&input_dup_n50_232, &_preg_268435501);
      for (bs_input_n50_233 = 0; bs_input_n50_233 < 9; bs_input_n50_233 = bs_input_n50_233 + 1) {
        _preg_268435628 = Rotate(input_dup_n50_232, _cst_260[bs_input_n50_233]);
        Copy_ciph(&input_block_n50_234[bs_input_n50_233], &_preg_268435628);
        Free_poly_data(&_preg_268435628._c1_poly);
        Free_poly_data(&_preg_268435628._c0_poly);
      }
      for (mesh_x_n16_235 = 0; mesh_x_n16_235 < 4; mesh_x_n16_235 = mesh_x_n16_235 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=9
        Zero_ciph(&result_n51_236);
        for (num_grid_n51_237 = 0; num_grid_n51_237 < 32; num_grid_n51_237 = num_grid_n51_237 + 1) {
          Zero_ciph(&result_grid_n51_238);
          for (cap_block_n51_239 = 0; cap_block_n51_239 < 9; cap_block_n51_239 = cap_block_n51_239 + 1) {
            _ckks_gen_tmp_4012_506 = input_block_n50_234[cap_block_n51_239];
            Pt_from_msg_ofst(&_pgen_tmp_275_840, 60/* cst_256 */, (((((mesh_x_n16_235 * 1) + mesh_y_n16_230) * 288) + (cap_block_n51_239 + (num_grid_n51_237 * 9)))) * (23328), 23328, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_276_841, &_ckks_gen_tmp_4012_506, &_pgen_tmp_275_840);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n51_238, &result_grid_n51_238, &_pgen_tmp_276_841);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n51_238._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_276_841._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_4012_506._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_275_840._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_276_841._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_4012_506._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_275_840._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n51_238._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n51_238._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_276_841._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n51_238._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n51_238._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_276_841._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_278_843, &result_grid_n51_238);
          Rescale(&_pgen_tmp_278_843._c0_poly, &result_grid_n51_238._c0_poly);
          Rescale(&_pgen_tmp_278_843._c1_poly, &result_grid_n51_238._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_279_844, 61/* cst_261 */, (num_grid_n51_237) * (23328), 23328, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_277_842, &_pgen_tmp_278_843, &_pgen_tmp_279_844);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_277_842._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_277_842._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_278_843._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_279_844._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_277_842._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_278_843._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_279_844._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435629 = Rotate(_pgen_tmp_277_842, -23328 + (num_grid_n51_237 * 729));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_281_846, &result_grid_n51_238);
          Rescale(&_pgen_tmp_281_846._c0_poly, &result_grid_n51_238._c0_poly);
          Rescale(&_pgen_tmp_281_846._c1_poly, &result_grid_n51_238._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_282_847, 62/* cst_262 */, (num_grid_n51_237) * (23328), 23328, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_280_845, &_pgen_tmp_281_846, &_pgen_tmp_282_847);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_280_845._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_280_845._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_281_846._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_282_847._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_280_845._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_281_846._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_282_847._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435630 = Rotate(_pgen_tmp_280_845, num_grid_n51_237 * 729);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_283_848, &_preg_268435629, &_preg_268435630);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n51_236, &result_n51_236, &_pgen_tmp_283_848);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n51_236._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_283_848._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435629._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435630._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_283_848._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435629._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435630._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n51_236._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n51_236._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_283_848._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n51_236._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n51_236._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_283_848._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435629._c1_poly);
          Free_poly_data(&_preg_268435629._c0_poly);
          Free_poly_data(&_preg_268435630._c1_poly);
          Free_poly_data(&_preg_268435630._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_284_849, 63 /* cst_259 */, 23328, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n51_236, &result_n51_236, &_pgen_tmp_284_849);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n51_236._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n51_236._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n51_236._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_284_849._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n51_236._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n51_236._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_286_851 = VS_out_conv16_228[((mesh_x_n16_235 * 1) + mesh_z_n16_231)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_285_850, &_pgen_tmp_286_851, &result_n51_236);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_285_850._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_285_850._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_286_851._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n51_236._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_285_850._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_286_851._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n51_236._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv16_228[((mesh_x_n16_235 * 1) + mesh_z_n16_231)], &_pgen_tmp_285_850);
      }
    }
  }
  Free_poly_data(&_preg_268435499._c1_poly);
  Free_poly_data(&_preg_268435499._c0_poly);
  Free_poly_data(&_preg_268435501._c1_poly);
  Free_poly_data(&_preg_268435501._c0_poly);
  Free_poly_data(&input_dup_n50_232._c1_poly);
  Free_poly_data(&input_dup_n50_232._c0_poly);
  Free_ciph_poly(input_block_n50_234, 9);
  Free_poly_data(&_pgen_tmp_275_840._poly);
  Free_poly_data(&_pgen_tmp_276_841._c1_poly);
  Free_poly_data(&_pgen_tmp_276_841._c0_poly);
  Free_poly_data(&_pgen_tmp_279_844._poly);
  Free_poly_data(&_pgen_tmp_278_843._c1_poly);
  Free_poly_data(&_pgen_tmp_278_843._c0_poly);
  Free_poly_data(&_pgen_tmp_277_842._c1_poly);
  Free_poly_data(&_pgen_tmp_277_842._c0_poly);
  Free_poly_data(&result_grid_n51_238._c1_poly);
  Free_poly_data(&result_grid_n51_238._c0_poly);
  Free_poly_data(&_pgen_tmp_282_847._poly);
  Free_poly_data(&_pgen_tmp_281_846._c1_poly);
  Free_poly_data(&_pgen_tmp_281_846._c0_poly);
  Free_poly_data(&_pgen_tmp_280_845._c1_poly);
  Free_poly_data(&_pgen_tmp_280_845._c0_poly);
  Free_poly_data(&_pgen_tmp_283_848._c1_poly);
  Free_poly_data(&_pgen_tmp_283_848._c0_poly);
  Free_poly_data(&_pgen_tmp_284_849._poly);
  Free_poly_data(&result_n51_236._c1_poly);
  Free_poly_data(&result_n51_236._c0_poly);
  Free_poly_data(&_pgen_tmp_285_850._c1_poly);
  Free_poly_data(&_pgen_tmp_285_850._c0_poly);
  for (rescale_iv_545 = 0; rescale_iv_545 < 4; rescale_iv_545 = rescale_iv_545 + 1) {
    _pgen_tmp_287_852 = VS_out_conv16_228[rescale_iv_545];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_288_853, &_pgen_tmp_287_852);
    Rescale(&_pgen_tmp_288_853._c0_poly, &_pgen_tmp_287_852._c0_poly);
    Rescale(&_pgen_tmp_288_853._c1_poly, &_pgen_tmp_287_852._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv16_228[rescale_iv_545], &_pgen_tmp_288_853);
  }
  Free_poly_data(&_pgen_tmp_288_853._c1_poly);
  Free_poly_data(&_pgen_tmp_288_853._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 66
  // Concat_29
  // pragma: 65536, 1045, 67
  CMPLR_TM_START(4, 0);
  for (concat_op0_n17_240 = 0; concat_op0_n17_240 < 4; concat_op0_n17_240 = concat_op0_n17_240 + 1) {
    _pgen_tmp_289_854 = VS_out_conv15_216[concat_op0_n17_240];
    Copy_ciph(&VS_out_cocat17_241[(concat_op0_n17_240 + 0)], &_pgen_tmp_289_854);
  }
  Free_ciph_poly(VS_out_conv15_216, 4);
  for (concat_op1_n17_242 = 0; concat_op1_n17_242 < 4; concat_op1_n17_242 = concat_op1_n17_242 + 1) {
    _pgen_tmp_290_855 = VS_out_conv16_228[concat_op1_n17_242];
    Copy_ciph(&VS_out_cocat17_241[(concat_op1_n17_242 + 4)], &_pgen_tmp_290_855);
  }
  Free_ciph_poly(VS_out_conv16_228, 4);
  CMPLR_TM_END(4, 0);
  // pragma: 65537, 1045, 67
  // Relu_30
  // pragma: 65536, 1033, 68
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu17_243, 0, sizeof(VS_out_relu17_243));
  for (mesh_y_n17_244 = 0; mesh_y_n17_244 < 8; mesh_y_n17_244 = mesh_y_n17_244 + 1) {
    for (mesh_z_n17_245 = 0; mesh_z_n17_245 < 1; mesh_z_n17_245 = mesh_z_n17_245 + 1) {
      _pgen_tmp_291_856 = VS_out_cocat17_241[((mesh_y_n17_244 * 1) + mesh_z_n17_245)];
      Bootstrap(&_preg_268435502, &_pgen_tmp_291_856, 15);
      Encode_float(&_pgen_tmp_292_857, &_cst_421, 1, 1, Level(&_preg_268435502));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435504, &_preg_268435502, &_pgen_tmp_292_857);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_preg_268435504._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_preg_268435504._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435502._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_292_857._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_preg_268435504._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435502._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_292_857._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_293_858, &_preg_268435504);
      Rescale(&_pgen_tmp_293_858._c0_poly, &_preg_268435504._c0_poly);
      Rescale(&_pgen_tmp_293_858._c1_poly, &_preg_268435504._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435503 = App_relu(_preg_268435502, _pgen_tmp_293_858, 23328);
      _pgen_tmp_295_860 = VS_out_relu17_243[((mesh_y_n17_244 * 1) + mesh_z_n17_245)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_294_859, &_pgen_tmp_295_860, &_preg_268435503);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_pgen_tmp_294_859._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_294_859._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_295_860._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435503._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_294_859._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_295_860._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435503._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu17_243[((mesh_y_n17_244 * 1) + mesh_z_n17_245)], &_pgen_tmp_294_859);
    }
  }
  Free_ciph_poly(VS_out_cocat17_241, 8);
  Free_poly_data(&_pgen_tmp_292_857._poly);
  Free_poly_data(&_preg_268435504._c1_poly);
  Free_poly_data(&_preg_268435504._c0_poly);
  Free_poly_data(&_pgen_tmp_293_858._c1_poly);
  Free_poly_data(&_pgen_tmp_293_858._c0_poly);
  Free_poly_data(&_preg_268435502._c1_poly);
  Free_poly_data(&_preg_268435502._c0_poly);
  Free_poly_data(&_preg_268435503._c1_poly);
  Free_poly_data(&_preg_268435503._c0_poly);
  Free_poly_data(&_pgen_tmp_294_859._c1_poly);
  Free_poly_data(&_pgen_tmp_294_859._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 68
  // Conv_31
  // pragma: 65536, 1027, 69
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv18_246, 0, sizeof(VS_out_conv18_246));
  memset(&VS_out_conv_halo18_247, 0, sizeof(VS_out_conv_halo18_247));
  Free_ciph_poly(VS_out_conv_halo18_247, 2);
  for (mesh_y_n18_248 = 0; mesh_y_n18_248 < 8; mesh_y_n18_248 = mesh_y_n18_248 + 1) {
    for (mesh_z_n18_249 = 0; mesh_z_n18_249 < 1; mesh_z_n18_249 = mesh_z_n18_249 + 1) {
      Copy_ciph(&_preg_268435505, &VS_out_relu17_243[((mesh_y_n18_248 * 1) + mesh_z_n18_249)]);
      Copy_ciph(&input_dup_n51_250, &_preg_268435505);
      for (bs_input_n51_251 = 0; bs_input_n51_251 < 1; bs_input_n51_251 = bs_input_n51_251 + 1) {
        _preg_268435631 = Rotate(input_dup_n51_250, _cst_267[bs_input_n51_251]);
        Copy_ciph(&input_block_n51_252[bs_input_n51_251], &_preg_268435631);
        Free_poly_data(&_preg_268435631._c1_poly);
        Free_poly_data(&_preg_268435631._c0_poly);
      }
      for (mesh_x_n18_253 = 0; mesh_x_n18_253 < 2; mesh_x_n18_253 = mesh_x_n18_253 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n52_254);
        for (num_grid_n52_255 = 0; num_grid_n52_255 < 32; num_grid_n52_255 = num_grid_n52_255 + 1) {
          Zero_ciph(&result_grid_n52_256);
          for (cap_block_n52_257 = 0; cap_block_n52_257 < 1; cap_block_n52_257 = cap_block_n52_257 + 1) {
            _ckks_gen_tmp_4326_507 = input_block_n51_252[cap_block_n52_257];
            Pt_from_msg_ofst(&_pgen_tmp_296_861, 64/* cst_263 */, (((((mesh_x_n18_253 * 8) + mesh_y_n18_248) * 32) + (cap_block_n52_257 + (num_grid_n52_255 * 1)))) * (23328), 23328, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_297_862, &_ckks_gen_tmp_4326_507, &_pgen_tmp_296_861);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n52_256, &result_grid_n52_256, &_pgen_tmp_297_862);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n52_256._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_297_862._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_4326_507._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_296_861._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_297_862._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_4326_507._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_296_861._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n52_256._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n52_256._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_297_862._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n52_256._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n52_256._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_297_862._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_299_864, &result_grid_n52_256);
          Rescale(&_pgen_tmp_299_864._c0_poly, &result_grid_n52_256._c0_poly);
          Rescale(&_pgen_tmp_299_864._c1_poly, &result_grid_n52_256._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_300_865, 65/* cst_268 */, (num_grid_n52_255) * (23328), 23328, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_298_863, &_pgen_tmp_299_864, &_pgen_tmp_300_865);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_298_863._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_298_863._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_299_864._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_300_865._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_298_863._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_299_864._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_300_865._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435632 = Rotate(_pgen_tmp_298_863, -23328 + (num_grid_n52_255 * 729));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_302_867, &result_grid_n52_256);
          Rescale(&_pgen_tmp_302_867._c0_poly, &result_grid_n52_256._c0_poly);
          Rescale(&_pgen_tmp_302_867._c1_poly, &result_grid_n52_256._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_303_868, 66/* cst_269 */, (num_grid_n52_255) * (23328), 23328, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_301_866, &_pgen_tmp_302_867, &_pgen_tmp_303_868);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_301_866._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_301_866._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_302_867._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_303_868._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_301_866._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_302_867._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_303_868._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435633 = Rotate(_pgen_tmp_301_866, num_grid_n52_255 * 729);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_304_869, &_preg_268435632, &_preg_268435633);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n52_254, &result_n52_254, &_pgen_tmp_304_869);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n52_254._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_304_869._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435632._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435633._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_304_869._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435632._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435633._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n52_254._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n52_254._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_304_869._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n52_254._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n52_254._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_304_869._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435632._c1_poly);
          Free_poly_data(&_preg_268435632._c0_poly);
          Free_poly_data(&_preg_268435633._c1_poly);
          Free_poly_data(&_preg_268435633._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_305_870, 67 /* cst_266 */, 23328, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n52_254, &result_n52_254, &_pgen_tmp_305_870);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n52_254._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n52_254._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n52_254._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_305_870._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n52_254._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n52_254._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_307_872 = VS_out_conv18_246[((mesh_x_n18_253 * 1) + mesh_z_n18_249)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_306_871, &_pgen_tmp_307_872, &result_n52_254);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_306_871._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_306_871._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_307_872._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n52_254._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_306_871._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_307_872._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n52_254._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv18_246[((mesh_x_n18_253 * 1) + mesh_z_n18_249)], &_pgen_tmp_306_871);
      }
    }
  }
  Free_ciph_poly(VS_out_relu17_243, 8);
  Free_poly_data(&_preg_268435505._c1_poly);
  Free_poly_data(&_preg_268435505._c0_poly);
  Free_poly_data(&input_dup_n51_250._c1_poly);
  Free_poly_data(&input_dup_n51_250._c0_poly);
  Free_ciph_poly(input_block_n51_252, 1);
  Free_poly_data(&_pgen_tmp_296_861._poly);
  Free_poly_data(&_pgen_tmp_297_862._c1_poly);
  Free_poly_data(&_pgen_tmp_297_862._c0_poly);
  Free_poly_data(&_pgen_tmp_300_865._poly);
  Free_poly_data(&_pgen_tmp_299_864._c1_poly);
  Free_poly_data(&_pgen_tmp_299_864._c0_poly);
  Free_poly_data(&_pgen_tmp_298_863._c1_poly);
  Free_poly_data(&_pgen_tmp_298_863._c0_poly);
  Free_poly_data(&result_grid_n52_256._c1_poly);
  Free_poly_data(&result_grid_n52_256._c0_poly);
  Free_poly_data(&_pgen_tmp_303_868._poly);
  Free_poly_data(&_pgen_tmp_302_867._c1_poly);
  Free_poly_data(&_pgen_tmp_302_867._c0_poly);
  Free_poly_data(&_pgen_tmp_301_866._c1_poly);
  Free_poly_data(&_pgen_tmp_301_866._c0_poly);
  Free_poly_data(&_pgen_tmp_304_869._c1_poly);
  Free_poly_data(&_pgen_tmp_304_869._c0_poly);
  Free_poly_data(&_pgen_tmp_305_870._poly);
  Free_poly_data(&result_n52_254._c1_poly);
  Free_poly_data(&result_n52_254._c0_poly);
  Free_poly_data(&_pgen_tmp_306_871._c1_poly);
  Free_poly_data(&_pgen_tmp_306_871._c0_poly);
  for (rescale_iv_546 = 0; rescale_iv_546 < 2; rescale_iv_546 = rescale_iv_546 + 1) {
    _pgen_tmp_308_873 = VS_out_conv18_246[rescale_iv_546];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_309_874, &_pgen_tmp_308_873);
    Rescale(&_pgen_tmp_309_874._c0_poly, &_pgen_tmp_308_873._c0_poly);
    Rescale(&_pgen_tmp_309_874._c1_poly, &_pgen_tmp_308_873._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv18_246[rescale_iv_546], &_pgen_tmp_309_874);
  }
  Free_poly_data(&_pgen_tmp_309_874._c1_poly);
  Free_poly_data(&_pgen_tmp_309_874._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 69
  // Relu_32
  // pragma: 65536, 1033, 70
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu18_258, 0, sizeof(VS_out_relu18_258));
  for (mesh_y_n18_259 = 0; mesh_y_n18_259 < 2; mesh_y_n18_259 = mesh_y_n18_259 + 1) {
    for (mesh_z_n18_260 = 0; mesh_z_n18_260 < 1; mesh_z_n18_260 = mesh_z_n18_260 + 1) {
      _pgen_tmp_310_875 = VS_out_conv18_246[((mesh_y_n18_259 * 1) + mesh_z_n18_260)];
      Bootstrap(&_preg_268435506, &_pgen_tmp_310_875, 15);
      Encode_float(&_pgen_tmp_311_876, &_cst_422, 1, 1, Level(&_preg_268435506));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435508, &_preg_268435506, &_pgen_tmp_311_876);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_preg_268435508._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_preg_268435508._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435506._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_311_876._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_preg_268435508._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435506._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_311_876._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_312_877, &_preg_268435508);
      Rescale(&_pgen_tmp_312_877._c0_poly, &_preg_268435508._c0_poly);
      Rescale(&_pgen_tmp_312_877._c1_poly, &_preg_268435508._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435507 = App_relu(_preg_268435506, _pgen_tmp_312_877, 23328);
      _pgen_tmp_314_879 = VS_out_relu18_258[((mesh_y_n18_259 * 1) + mesh_z_n18_260)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_313_878, &_pgen_tmp_314_879, &_preg_268435507);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_pgen_tmp_313_878._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_313_878._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_314_879._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435507._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_313_878._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_314_879._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435507._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu18_258[((mesh_y_n18_259 * 1) + mesh_z_n18_260)], &_pgen_tmp_313_878);
    }
  }
  Free_ciph_poly(VS_out_conv18_246, 2);
  Free_poly_data(&_pgen_tmp_311_876._poly);
  Free_poly_data(&_preg_268435508._c1_poly);
  Free_poly_data(&_preg_268435508._c0_poly);
  Free_poly_data(&_pgen_tmp_312_877._c1_poly);
  Free_poly_data(&_pgen_tmp_312_877._c0_poly);
  Free_poly_data(&_preg_268435506._c1_poly);
  Free_poly_data(&_preg_268435506._c0_poly);
  Free_poly_data(&_preg_268435507._c1_poly);
  Free_poly_data(&_preg_268435507._c0_poly);
  Free_poly_data(&_pgen_tmp_313_878._c1_poly);
  Free_poly_data(&_pgen_tmp_313_878._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 70
  // Conv_33
  // pragma: 65536, 1027, 71
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv19_261, 0, sizeof(VS_out_conv19_261));
  memset(&VS_out_conv_halo19_262, 0, sizeof(VS_out_conv_halo19_262));
  Free_ciph_poly(VS_out_conv_halo19_262, 6);
  for (mesh_y_n19_263 = 0; mesh_y_n19_263 < 2; mesh_y_n19_263 = mesh_y_n19_263 + 1) {
    for (mesh_z_n19_264 = 0; mesh_z_n19_264 < 1; mesh_z_n19_264 = mesh_z_n19_264 + 1) {
      Copy_ciph(&_preg_268435509, &VS_out_relu18_258[((mesh_y_n19_263 * 1) + mesh_z_n19_264)]);
      Copy_ciph(&input_dup_n52_265, &_preg_268435509);
      for (bs_input_n52_266 = 0; bs_input_n52_266 < 1; bs_input_n52_266 = bs_input_n52_266 + 1) {
        _preg_268435634 = Rotate(input_dup_n52_265, _cst_274[bs_input_n52_266]);
        Copy_ciph(&input_block_n52_267[bs_input_n52_266], &_preg_268435634);
        Free_poly_data(&_preg_268435634._c1_poly);
        Free_poly_data(&_preg_268435634._c0_poly);
      }
      for (mesh_x_n19_268 = 0; mesh_x_n19_268 < 6; mesh_x_n19_268 = mesh_x_n19_268 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n53_269);
        for (num_grid_n53_270 = 0; num_grid_n53_270 < 32; num_grid_n53_270 = num_grid_n53_270 + 1) {
          Zero_ciph(&result_grid_n53_271);
          for (cap_block_n53_272 = 0; cap_block_n53_272 < 1; cap_block_n53_272 = cap_block_n53_272 + 1) {
            _ckks_gen_tmp_4591_508 = input_block_n52_267[cap_block_n53_272];
            Pt_from_msg_ofst(&_pgen_tmp_315_880, 68/* cst_270 */, (((((mesh_x_n19_268 * 2) + mesh_y_n19_263) * 32) + (cap_block_n53_272 + (num_grid_n53_270 * 1)))) * (23328), 23328, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_316_881, &_ckks_gen_tmp_4591_508, &_pgen_tmp_315_880);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n53_271, &result_grid_n53_271, &_pgen_tmp_316_881);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n53_271._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_316_881._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_4591_508._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_315_880._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_316_881._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_4591_508._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_315_880._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n53_271._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n53_271._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_316_881._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n53_271._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n53_271._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_316_881._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_318_883, &result_grid_n53_271);
          Rescale(&_pgen_tmp_318_883._c0_poly, &result_grid_n53_271._c0_poly);
          Rescale(&_pgen_tmp_318_883._c1_poly, &result_grid_n53_271._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_319_884, 69/* cst_275 */, (num_grid_n53_270) * (23328), 23328, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_317_882, &_pgen_tmp_318_883, &_pgen_tmp_319_884);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_317_882._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_317_882._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_318_883._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_319_884._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_317_882._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_318_883._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_319_884._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435635 = Rotate(_pgen_tmp_317_882, -23328 + (num_grid_n53_270 * 729));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_321_886, &result_grid_n53_271);
          Rescale(&_pgen_tmp_321_886._c0_poly, &result_grid_n53_271._c0_poly);
          Rescale(&_pgen_tmp_321_886._c1_poly, &result_grid_n53_271._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_322_887, 70/* cst_276 */, (num_grid_n53_270) * (23328), 23328, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_320_885, &_pgen_tmp_321_886, &_pgen_tmp_322_887);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_320_885._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_320_885._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_321_886._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_322_887._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_320_885._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_321_886._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_322_887._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435636 = Rotate(_pgen_tmp_320_885, num_grid_n53_270 * 729);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_323_888, &_preg_268435635, &_preg_268435636);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n53_269, &result_n53_269, &_pgen_tmp_323_888);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n53_269._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_323_888._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435635._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435636._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_323_888._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435635._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435636._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n53_269._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n53_269._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_323_888._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n53_269._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n53_269._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_323_888._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435635._c1_poly);
          Free_poly_data(&_preg_268435635._c0_poly);
          Free_poly_data(&_preg_268435636._c1_poly);
          Free_poly_data(&_preg_268435636._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_324_889, 71 /* cst_273 */, 23328, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n53_269, &result_n53_269, &_pgen_tmp_324_889);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n53_269._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n53_269._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n53_269._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_324_889._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n53_269._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n53_269._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_326_891 = VS_out_conv19_261[((mesh_x_n19_268 * 1) + mesh_z_n19_264)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_325_890, &_pgen_tmp_326_891, &result_n53_269);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_325_890._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_325_890._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_326_891._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n53_269._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_325_890._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_326_891._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n53_269._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv19_261[((mesh_x_n19_268 * 1) + mesh_z_n19_264)], &_pgen_tmp_325_890);
      }
    }
  }
  Free_poly_data(&_preg_268435509._c1_poly);
  Free_poly_data(&_preg_268435509._c0_poly);
  Free_poly_data(&input_dup_n52_265._c1_poly);
  Free_poly_data(&input_dup_n52_265._c0_poly);
  Free_ciph_poly(input_block_n52_267, 1);
  Free_poly_data(&_pgen_tmp_315_880._poly);
  Free_poly_data(&_pgen_tmp_316_881._c1_poly);
  Free_poly_data(&_pgen_tmp_316_881._c0_poly);
  Free_poly_data(&_pgen_tmp_319_884._poly);
  Free_poly_data(&_pgen_tmp_318_883._c1_poly);
  Free_poly_data(&_pgen_tmp_318_883._c0_poly);
  Free_poly_data(&_pgen_tmp_317_882._c1_poly);
  Free_poly_data(&_pgen_tmp_317_882._c0_poly);
  Free_poly_data(&result_grid_n53_271._c1_poly);
  Free_poly_data(&result_grid_n53_271._c0_poly);
  Free_poly_data(&_pgen_tmp_322_887._poly);
  Free_poly_data(&_pgen_tmp_321_886._c1_poly);
  Free_poly_data(&_pgen_tmp_321_886._c0_poly);
  Free_poly_data(&_pgen_tmp_320_885._c1_poly);
  Free_poly_data(&_pgen_tmp_320_885._c0_poly);
  Free_poly_data(&_pgen_tmp_323_888._c1_poly);
  Free_poly_data(&_pgen_tmp_323_888._c0_poly);
  Free_poly_data(&_pgen_tmp_324_889._poly);
  Free_poly_data(&result_n53_269._c1_poly);
  Free_poly_data(&result_n53_269._c0_poly);
  Free_poly_data(&_pgen_tmp_325_890._c1_poly);
  Free_poly_data(&_pgen_tmp_325_890._c0_poly);
  for (rescale_iv_547 = 0; rescale_iv_547 < 6; rescale_iv_547 = rescale_iv_547 + 1) {
    _pgen_tmp_327_892 = VS_out_conv19_261[rescale_iv_547];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_328_893, &_pgen_tmp_327_892);
    Rescale(&_pgen_tmp_328_893._c0_poly, &_pgen_tmp_327_892._c0_poly);
    Rescale(&_pgen_tmp_328_893._c1_poly, &_pgen_tmp_327_892._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv19_261[rescale_iv_547], &_pgen_tmp_328_893);
  }
  Free_poly_data(&_pgen_tmp_328_893._c1_poly);
  Free_poly_data(&_pgen_tmp_328_893._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 71
  // Conv_34
  // pragma: 65536, 1027, 72
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv20_273, 0, sizeof(VS_out_conv20_273));
  memset(&VS_out_conv_halo20_274, 0, sizeof(VS_out_conv_halo20_274));
  Free_ciph_poly(VS_out_conv_halo20_274, 6);
  for (mesh_y_n20_275 = 0; mesh_y_n20_275 < 2; mesh_y_n20_275 = mesh_y_n20_275 + 1) {
    for (mesh_z_n20_276 = 0; mesh_z_n20_276 < 1; mesh_z_n20_276 = mesh_z_n20_276 + 1) {
      Copy_ciph(&_preg_268435510, &VS_out_relu18_258[((mesh_y_n20_275 * 1) + mesh_z_n20_276)]);
      Copy_ciph(&input_dup_n53_277, &_preg_268435510);
      for (bs_input_n53_278 = 0; bs_input_n53_278 < 9; bs_input_n53_278 = bs_input_n53_278 + 1) {
        _preg_268435637 = Rotate(input_dup_n53_277, _cst_281[bs_input_n53_278]);
        Copy_ciph(&input_block_n53_279[bs_input_n53_278], &_preg_268435637);
        Free_poly_data(&_preg_268435637._c1_poly);
        Free_poly_data(&_preg_268435637._c0_poly);
      }
      for (mesh_x_n20_280 = 0; mesh_x_n20_280 < 6; mesh_x_n20_280 = mesh_x_n20_280 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=9
        Zero_ciph(&result_n54_281);
        for (num_grid_n54_282 = 0; num_grid_n54_282 < 32; num_grid_n54_282 = num_grid_n54_282 + 1) {
          Zero_ciph(&result_grid_n54_283);
          for (cap_block_n54_284 = 0; cap_block_n54_284 < 9; cap_block_n54_284 = cap_block_n54_284 + 1) {
            _ckks_gen_tmp_4789_509 = input_block_n53_279[cap_block_n54_284];
            Pt_from_msg_ofst(&_pgen_tmp_329_894, 72/* cst_277 */, (((((mesh_x_n20_280 * 2) + mesh_y_n20_275) * 288) + (cap_block_n54_284 + (num_grid_n54_282 * 9)))) * (23328), 23328, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_330_895, &_ckks_gen_tmp_4789_509, &_pgen_tmp_329_894);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n54_283, &result_grid_n54_283, &_pgen_tmp_330_895);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n54_283._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_330_895._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_4789_509._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_329_894._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_330_895._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_4789_509._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_329_894._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n54_283._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n54_283._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_330_895._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n54_283._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n54_283._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_330_895._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_332_897, &result_grid_n54_283);
          Rescale(&_pgen_tmp_332_897._c0_poly, &result_grid_n54_283._c0_poly);
          Rescale(&_pgen_tmp_332_897._c1_poly, &result_grid_n54_283._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_333_898, 73/* cst_282 */, (num_grid_n54_282) * (23328), 23328, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_331_896, &_pgen_tmp_332_897, &_pgen_tmp_333_898);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_331_896._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_331_896._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_332_897._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_333_898._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_331_896._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_332_897._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_333_898._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435638 = Rotate(_pgen_tmp_331_896, -23328 + (num_grid_n54_282 * 729));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_335_900, &result_grid_n54_283);
          Rescale(&_pgen_tmp_335_900._c0_poly, &result_grid_n54_283._c0_poly);
          Rescale(&_pgen_tmp_335_900._c1_poly, &result_grid_n54_283._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_336_901, 74/* cst_283 */, (num_grid_n54_282) * (23328), 23328, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_334_899, &_pgen_tmp_335_900, &_pgen_tmp_336_901);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_334_899._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_334_899._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_335_900._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_336_901._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_334_899._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_335_900._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_336_901._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435639 = Rotate(_pgen_tmp_334_899, num_grid_n54_282 * 729);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_337_902, &_preg_268435638, &_preg_268435639);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n54_281, &result_n54_281, &_pgen_tmp_337_902);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n54_281._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_337_902._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435638._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435639._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_337_902._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435638._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435639._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n54_281._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n54_281._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_337_902._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n54_281._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n54_281._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_337_902._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435638._c1_poly);
          Free_poly_data(&_preg_268435638._c0_poly);
          Free_poly_data(&_preg_268435639._c1_poly);
          Free_poly_data(&_preg_268435639._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_338_903, 75 /* cst_280 */, 23328, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n54_281, &result_n54_281, &_pgen_tmp_338_903);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n54_281._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n54_281._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n54_281._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_338_903._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n54_281._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n54_281._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_340_905 = VS_out_conv20_273[((mesh_x_n20_280 * 1) + mesh_z_n20_276)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_339_904, &_pgen_tmp_340_905, &result_n54_281);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_339_904._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_339_904._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_340_905._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n54_281._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_339_904._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_340_905._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n54_281._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv20_273[((mesh_x_n20_280 * 1) + mesh_z_n20_276)], &_pgen_tmp_339_904);
      }
    }
  }
  Free_ciph_poly(VS_out_relu18_258, 2);
  Free_poly_data(&_preg_268435510._c1_poly);
  Free_poly_data(&_preg_268435510._c0_poly);
  Free_poly_data(&input_dup_n53_277._c1_poly);
  Free_poly_data(&input_dup_n53_277._c0_poly);
  Free_ciph_poly(input_block_n53_279, 9);
  Free_poly_data(&_pgen_tmp_329_894._poly);
  Free_poly_data(&_pgen_tmp_330_895._c1_poly);
  Free_poly_data(&_pgen_tmp_330_895._c0_poly);
  Free_poly_data(&_pgen_tmp_333_898._poly);
  Free_poly_data(&_pgen_tmp_332_897._c1_poly);
  Free_poly_data(&_pgen_tmp_332_897._c0_poly);
  Free_poly_data(&_pgen_tmp_331_896._c1_poly);
  Free_poly_data(&_pgen_tmp_331_896._c0_poly);
  Free_poly_data(&result_grid_n54_283._c1_poly);
  Free_poly_data(&result_grid_n54_283._c0_poly);
  Free_poly_data(&_pgen_tmp_336_901._poly);
  Free_poly_data(&_pgen_tmp_335_900._c1_poly);
  Free_poly_data(&_pgen_tmp_335_900._c0_poly);
  Free_poly_data(&_pgen_tmp_334_899._c1_poly);
  Free_poly_data(&_pgen_tmp_334_899._c0_poly);
  Free_poly_data(&_pgen_tmp_337_902._c1_poly);
  Free_poly_data(&_pgen_tmp_337_902._c0_poly);
  Free_poly_data(&_pgen_tmp_338_903._poly);
  Free_poly_data(&result_n54_281._c1_poly);
  Free_poly_data(&result_n54_281._c0_poly);
  Free_poly_data(&_pgen_tmp_339_904._c1_poly);
  Free_poly_data(&_pgen_tmp_339_904._c0_poly);
  for (rescale_iv_548 = 0; rescale_iv_548 < 6; rescale_iv_548 = rescale_iv_548 + 1) {
    _pgen_tmp_341_906 = VS_out_conv20_273[rescale_iv_548];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_342_907, &_pgen_tmp_341_906);
    Rescale(&_pgen_tmp_342_907._c0_poly, &_pgen_tmp_341_906._c0_poly);
    Rescale(&_pgen_tmp_342_907._c1_poly, &_pgen_tmp_341_906._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv20_273[rescale_iv_548], &_pgen_tmp_342_907);
  }
  Free_poly_data(&_pgen_tmp_342_907._c1_poly);
  Free_poly_data(&_pgen_tmp_342_907._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 72
  // Concat_35
  // pragma: 65536, 1045, 73
  CMPLR_TM_START(4, 0);
  for (concat_op0_n21_285 = 0; concat_op0_n21_285 < 6; concat_op0_n21_285 = concat_op0_n21_285 + 1) {
    _pgen_tmp_343_908 = VS_out_conv19_261[concat_op0_n21_285];
    Copy_ciph(&VS_out_cocat21_286[(concat_op0_n21_285 + 0)], &_pgen_tmp_343_908);
  }
  Free_ciph_poly(VS_out_conv19_261, 6);
  for (concat_op1_n21_287 = 0; concat_op1_n21_287 < 6; concat_op1_n21_287 = concat_op1_n21_287 + 1) {
    _pgen_tmp_344_909 = VS_out_conv20_273[concat_op1_n21_287];
    Copy_ciph(&VS_out_cocat21_286[(concat_op1_n21_287 + 6)], &_pgen_tmp_344_909);
  }
  Free_ciph_poly(VS_out_conv20_273, 6);
  CMPLR_TM_END(4, 0);
  // pragma: 65537, 1045, 73
  // Relu_36
  // pragma: 65536, 1033, 74
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu21_288, 0, sizeof(VS_out_relu21_288));
  for (mesh_y_n21_289 = 0; mesh_y_n21_289 < 12; mesh_y_n21_289 = mesh_y_n21_289 + 1) {
    for (mesh_z_n21_290 = 0; mesh_z_n21_290 < 1; mesh_z_n21_290 = mesh_z_n21_290 + 1) {
      _pgen_tmp_345_910 = VS_out_cocat21_286[((mesh_y_n21_289 * 1) + mesh_z_n21_290)];
      Bootstrap(&_preg_268435511, &_pgen_tmp_345_910, 15);
      Encode_float(&_pgen_tmp_346_911, &_cst_423, 1, 1, Level(&_preg_268435511));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435513, &_preg_268435511, &_pgen_tmp_346_911);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_preg_268435513._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_preg_268435513._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435511._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_346_911._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_preg_268435513._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435511._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_346_911._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_347_912, &_preg_268435513);
      Rescale(&_pgen_tmp_347_912._c0_poly, &_preg_268435513._c0_poly);
      Rescale(&_pgen_tmp_347_912._c1_poly, &_preg_268435513._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435512 = App_relu(_preg_268435511, _pgen_tmp_347_912, 23328);
      _pgen_tmp_349_914 = VS_out_relu21_288[((mesh_y_n21_289 * 1) + mesh_z_n21_290)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_348_913, &_pgen_tmp_349_914, &_preg_268435512);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_pgen_tmp_348_913._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_348_913._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_349_914._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435512._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_348_913._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_349_914._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435512._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu21_288[((mesh_y_n21_289 * 1) + mesh_z_n21_290)], &_pgen_tmp_348_913);
    }
  }
  Free_ciph_poly(VS_out_cocat21_286, 12);
  Free_poly_data(&_pgen_tmp_346_911._poly);
  Free_poly_data(&_preg_268435513._c1_poly);
  Free_poly_data(&_preg_268435513._c0_poly);
  Free_poly_data(&_pgen_tmp_347_912._c1_poly);
  Free_poly_data(&_pgen_tmp_347_912._c0_poly);
  Free_poly_data(&_preg_268435511._c1_poly);
  Free_poly_data(&_preg_268435511._c0_poly);
  Free_poly_data(&_preg_268435512._c1_poly);
  Free_poly_data(&_preg_268435512._c0_poly);
  Free_poly_data(&_pgen_tmp_348_913._c1_poly);
  Free_poly_data(&_pgen_tmp_348_913._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 74
  // Conv_37
  // pragma: 65536, 1027, 75
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv22_291, 0, sizeof(VS_out_conv22_291));
  memset(&VS_out_conv_halo22_292, 0, sizeof(VS_out_conv_halo22_292));
  Free_ciph_poly(VS_out_conv_halo22_292, 2);
  for (mesh_y_n22_293 = 0; mesh_y_n22_293 < 12; mesh_y_n22_293 = mesh_y_n22_293 + 1) {
    for (mesh_z_n22_294 = 0; mesh_z_n22_294 < 1; mesh_z_n22_294 = mesh_z_n22_294 + 1) {
      Copy_ciph(&_preg_268435514, &VS_out_relu21_288[((mesh_y_n22_293 * 1) + mesh_z_n22_294)]);
      Copy_ciph(&input_dup_n54_295, &_preg_268435514);
      for (bs_input_n54_296 = 0; bs_input_n54_296 < 1; bs_input_n54_296 = bs_input_n54_296 + 1) {
        _preg_268435640 = Rotate(input_dup_n54_295, _cst_288[bs_input_n54_296]);
        Copy_ciph(&input_block_n54_297[bs_input_n54_296], &_preg_268435640);
        Free_poly_data(&_preg_268435640._c1_poly);
        Free_poly_data(&_preg_268435640._c0_poly);
      }
      for (mesh_x_n22_298 = 0; mesh_x_n22_298 < 2; mesh_x_n22_298 = mesh_x_n22_298 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n55_299);
        for (num_grid_n55_300 = 0; num_grid_n55_300 < 32; num_grid_n55_300 = num_grid_n55_300 + 1) {
          Zero_ciph(&result_grid_n55_301);
          for (cap_block_n55_302 = 0; cap_block_n55_302 < 1; cap_block_n55_302 = cap_block_n55_302 + 1) {
            _ckks_gen_tmp_5103_510 = input_block_n54_297[cap_block_n55_302];
            Pt_from_msg_ofst(&_pgen_tmp_350_915, 76/* cst_284 */, (((((mesh_x_n22_298 * 12) + mesh_y_n22_293) * 32) + (cap_block_n55_302 + (num_grid_n55_300 * 1)))) * (23328), 23328, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_351_916, &_ckks_gen_tmp_5103_510, &_pgen_tmp_350_915);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n55_301, &result_grid_n55_301, &_pgen_tmp_351_916);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n55_301._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_351_916._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_5103_510._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_350_915._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_351_916._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_5103_510._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_350_915._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n55_301._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n55_301._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_351_916._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n55_301._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n55_301._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_351_916._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_353_918, &result_grid_n55_301);
          Rescale(&_pgen_tmp_353_918._c0_poly, &result_grid_n55_301._c0_poly);
          Rescale(&_pgen_tmp_353_918._c1_poly, &result_grid_n55_301._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_354_919, 77/* cst_289 */, (num_grid_n55_300) * (23328), 23328, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_352_917, &_pgen_tmp_353_918, &_pgen_tmp_354_919);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_352_917._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_352_917._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_353_918._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_354_919._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_352_917._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_353_918._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_354_919._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435641 = Rotate(_pgen_tmp_352_917, -23328 + (num_grid_n55_300 * 729));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_356_921, &result_grid_n55_301);
          Rescale(&_pgen_tmp_356_921._c0_poly, &result_grid_n55_301._c0_poly);
          Rescale(&_pgen_tmp_356_921._c1_poly, &result_grid_n55_301._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_357_922, 78/* cst_290 */, (num_grid_n55_300) * (23328), 23328, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_355_920, &_pgen_tmp_356_921, &_pgen_tmp_357_922);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_355_920._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_355_920._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_356_921._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_357_922._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_355_920._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_356_921._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_357_922._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435642 = Rotate(_pgen_tmp_355_920, num_grid_n55_300 * 729);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_358_923, &_preg_268435641, &_preg_268435642);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n55_299, &result_n55_299, &_pgen_tmp_358_923);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n55_299._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_358_923._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435641._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435642._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_358_923._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435641._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435642._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n55_299._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n55_299._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_358_923._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n55_299._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n55_299._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_358_923._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435641._c1_poly);
          Free_poly_data(&_preg_268435641._c0_poly);
          Free_poly_data(&_preg_268435642._c1_poly);
          Free_poly_data(&_preg_268435642._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_359_924, 79 /* cst_287 */, 23328, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n55_299, &result_n55_299, &_pgen_tmp_359_924);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n55_299._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n55_299._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n55_299._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_359_924._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n55_299._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n55_299._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_361_926 = VS_out_conv22_291[((mesh_x_n22_298 * 1) + mesh_z_n22_294)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_360_925, &_pgen_tmp_361_926, &result_n55_299);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_360_925._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_360_925._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_361_926._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n55_299._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_360_925._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_361_926._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n55_299._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv22_291[((mesh_x_n22_298 * 1) + mesh_z_n22_294)], &_pgen_tmp_360_925);
      }
    }
  }
  Free_ciph_poly(VS_out_relu21_288, 12);
  Free_poly_data(&_preg_268435514._c1_poly);
  Free_poly_data(&_preg_268435514._c0_poly);
  Free_poly_data(&input_dup_n54_295._c1_poly);
  Free_poly_data(&input_dup_n54_295._c0_poly);
  Free_ciph_poly(input_block_n54_297, 1);
  Free_poly_data(&_pgen_tmp_350_915._poly);
  Free_poly_data(&_pgen_tmp_351_916._c1_poly);
  Free_poly_data(&_pgen_tmp_351_916._c0_poly);
  Free_poly_data(&_pgen_tmp_354_919._poly);
  Free_poly_data(&_pgen_tmp_353_918._c1_poly);
  Free_poly_data(&_pgen_tmp_353_918._c0_poly);
  Free_poly_data(&_pgen_tmp_352_917._c1_poly);
  Free_poly_data(&_pgen_tmp_352_917._c0_poly);
  Free_poly_data(&result_grid_n55_301._c1_poly);
  Free_poly_data(&result_grid_n55_301._c0_poly);
  Free_poly_data(&_pgen_tmp_357_922._poly);
  Free_poly_data(&_pgen_tmp_356_921._c1_poly);
  Free_poly_data(&_pgen_tmp_356_921._c0_poly);
  Free_poly_data(&_pgen_tmp_355_920._c1_poly);
  Free_poly_data(&_pgen_tmp_355_920._c0_poly);
  Free_poly_data(&_pgen_tmp_358_923._c1_poly);
  Free_poly_data(&_pgen_tmp_358_923._c0_poly);
  Free_poly_data(&_pgen_tmp_359_924._poly);
  Free_poly_data(&result_n55_299._c1_poly);
  Free_poly_data(&result_n55_299._c0_poly);
  Free_poly_data(&_pgen_tmp_360_925._c1_poly);
  Free_poly_data(&_pgen_tmp_360_925._c0_poly);
  for (rescale_iv_549 = 0; rescale_iv_549 < 2; rescale_iv_549 = rescale_iv_549 + 1) {
    _pgen_tmp_362_927 = VS_out_conv22_291[rescale_iv_549];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_363_928, &_pgen_tmp_362_927);
    Rescale(&_pgen_tmp_363_928._c0_poly, &_pgen_tmp_362_927._c0_poly);
    Rescale(&_pgen_tmp_363_928._c1_poly, &_pgen_tmp_362_927._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv22_291[rescale_iv_549], &_pgen_tmp_363_928);
  }
  Free_poly_data(&_pgen_tmp_363_928._c1_poly);
  Free_poly_data(&_pgen_tmp_363_928._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 75
  // Relu_38
  // pragma: 65536, 1033, 76
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu22_303, 0, sizeof(VS_out_relu22_303));
  for (mesh_y_n22_304 = 0; mesh_y_n22_304 < 2; mesh_y_n22_304 = mesh_y_n22_304 + 1) {
    for (mesh_z_n22_305 = 0; mesh_z_n22_305 < 1; mesh_z_n22_305 = mesh_z_n22_305 + 1) {
      _pgen_tmp_364_929 = VS_out_conv22_291[((mesh_y_n22_304 * 1) + mesh_z_n22_305)];
      Bootstrap(&_preg_268435515, &_pgen_tmp_364_929, 15);
      Encode_float(&_pgen_tmp_365_930, &_cst_424, 1, 1, Level(&_preg_268435515));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435517, &_preg_268435515, &_pgen_tmp_365_930);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_preg_268435517._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_preg_268435517._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435515._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_365_930._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_preg_268435517._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435515._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_365_930._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_366_931, &_preg_268435517);
      Rescale(&_pgen_tmp_366_931._c0_poly, &_preg_268435517._c0_poly);
      Rescale(&_pgen_tmp_366_931._c1_poly, &_preg_268435517._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435516 = App_relu(_preg_268435515, _pgen_tmp_366_931, 23328);
      _pgen_tmp_368_933 = VS_out_relu22_303[((mesh_y_n22_304 * 1) + mesh_z_n22_305)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_367_932, &_pgen_tmp_368_933, &_preg_268435516);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_pgen_tmp_367_932._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_367_932._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_368_933._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435516._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_367_932._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_368_933._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435516._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu22_303[((mesh_y_n22_304 * 1) + mesh_z_n22_305)], &_pgen_tmp_367_932);
    }
  }
  Free_ciph_poly(VS_out_conv22_291, 2);
  Free_poly_data(&_pgen_tmp_365_930._poly);
  Free_poly_data(&_preg_268435517._c1_poly);
  Free_poly_data(&_preg_268435517._c0_poly);
  Free_poly_data(&_pgen_tmp_366_931._c1_poly);
  Free_poly_data(&_pgen_tmp_366_931._c0_poly);
  Free_poly_data(&_preg_268435515._c1_poly);
  Free_poly_data(&_preg_268435515._c0_poly);
  Free_poly_data(&_preg_268435516._c1_poly);
  Free_poly_data(&_preg_268435516._c0_poly);
  Free_poly_data(&_pgen_tmp_367_932._c1_poly);
  Free_poly_data(&_pgen_tmp_367_932._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 76
  // Conv_39
  // pragma: 65536, 1027, 77
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv23_306, 0, sizeof(VS_out_conv23_306));
  memset(&VS_out_conv_halo23_307, 0, sizeof(VS_out_conv_halo23_307));
  Free_ciph_poly(VS_out_conv_halo23_307, 6);
  for (mesh_y_n23_308 = 0; mesh_y_n23_308 < 2; mesh_y_n23_308 = mesh_y_n23_308 + 1) {
    for (mesh_z_n23_309 = 0; mesh_z_n23_309 < 1; mesh_z_n23_309 = mesh_z_n23_309 + 1) {
      Copy_ciph(&_preg_268435518, &VS_out_relu22_303[((mesh_y_n23_308 * 1) + mesh_z_n23_309)]);
      Copy_ciph(&input_dup_n55_310, &_preg_268435518);
      for (bs_input_n55_311 = 0; bs_input_n55_311 < 1; bs_input_n55_311 = bs_input_n55_311 + 1) {
        _preg_268435643 = Rotate(input_dup_n55_310, _cst_295[bs_input_n55_311]);
        Copy_ciph(&input_block_n55_312[bs_input_n55_311], &_preg_268435643);
        Free_poly_data(&_preg_268435643._c1_poly);
        Free_poly_data(&_preg_268435643._c0_poly);
      }
      for (mesh_x_n23_313 = 0; mesh_x_n23_313 < 6; mesh_x_n23_313 = mesh_x_n23_313 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n56_314);
        for (num_grid_n56_315 = 0; num_grid_n56_315 < 32; num_grid_n56_315 = num_grid_n56_315 + 1) {
          Zero_ciph(&result_grid_n56_316);
          for (cap_block_n56_317 = 0; cap_block_n56_317 < 1; cap_block_n56_317 = cap_block_n56_317 + 1) {
            _ckks_gen_tmp_5368_511 = input_block_n55_312[cap_block_n56_317];
            Pt_from_msg_ofst(&_pgen_tmp_369_934, 80/* cst_291 */, (((((mesh_x_n23_313 * 2) + mesh_y_n23_308) * 32) + (cap_block_n56_317 + (num_grid_n56_315 * 1)))) * (23328), 23328, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_370_935, &_ckks_gen_tmp_5368_511, &_pgen_tmp_369_934);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n56_316, &result_grid_n56_316, &_pgen_tmp_370_935);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n56_316._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_370_935._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_5368_511._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_369_934._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_370_935._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_5368_511._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_369_934._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n56_316._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n56_316._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_370_935._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n56_316._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n56_316._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_370_935._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_372_937, &result_grid_n56_316);
          Rescale(&_pgen_tmp_372_937._c0_poly, &result_grid_n56_316._c0_poly);
          Rescale(&_pgen_tmp_372_937._c1_poly, &result_grid_n56_316._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_373_938, 81/* cst_296 */, (num_grid_n56_315) * (23328), 23328, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_371_936, &_pgen_tmp_372_937, &_pgen_tmp_373_938);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_371_936._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_371_936._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_372_937._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_373_938._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_371_936._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_372_937._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_373_938._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435644 = Rotate(_pgen_tmp_371_936, -23328 + (num_grid_n56_315 * 729));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_375_940, &result_grid_n56_316);
          Rescale(&_pgen_tmp_375_940._c0_poly, &result_grid_n56_316._c0_poly);
          Rescale(&_pgen_tmp_375_940._c1_poly, &result_grid_n56_316._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_376_941, 82/* cst_297 */, (num_grid_n56_315) * (23328), 23328, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_374_939, &_pgen_tmp_375_940, &_pgen_tmp_376_941);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_374_939._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_374_939._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_375_940._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_376_941._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_374_939._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_375_940._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_376_941._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435645 = Rotate(_pgen_tmp_374_939, num_grid_n56_315 * 729);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_377_942, &_preg_268435644, &_preg_268435645);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n56_314, &result_n56_314, &_pgen_tmp_377_942);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n56_314._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_377_942._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435644._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435645._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_377_942._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435644._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435645._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n56_314._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n56_314._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_377_942._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n56_314._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n56_314._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_377_942._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435644._c1_poly);
          Free_poly_data(&_preg_268435644._c0_poly);
          Free_poly_data(&_preg_268435645._c1_poly);
          Free_poly_data(&_preg_268435645._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_378_943, 83 /* cst_294 */, 23328, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n56_314, &result_n56_314, &_pgen_tmp_378_943);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n56_314._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n56_314._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n56_314._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_378_943._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n56_314._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n56_314._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_380_945 = VS_out_conv23_306[((mesh_x_n23_313 * 1) + mesh_z_n23_309)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_379_944, &_pgen_tmp_380_945, &result_n56_314);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_379_944._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_379_944._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_380_945._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n56_314._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_379_944._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_380_945._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n56_314._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv23_306[((mesh_x_n23_313 * 1) + mesh_z_n23_309)], &_pgen_tmp_379_944);
      }
    }
  }
  Free_poly_data(&_preg_268435518._c1_poly);
  Free_poly_data(&_preg_268435518._c0_poly);
  Free_poly_data(&input_dup_n55_310._c1_poly);
  Free_poly_data(&input_dup_n55_310._c0_poly);
  Free_ciph_poly(input_block_n55_312, 1);
  Free_poly_data(&_pgen_tmp_369_934._poly);
  Free_poly_data(&_pgen_tmp_370_935._c1_poly);
  Free_poly_data(&_pgen_tmp_370_935._c0_poly);
  Free_poly_data(&_pgen_tmp_373_938._poly);
  Free_poly_data(&_pgen_tmp_372_937._c1_poly);
  Free_poly_data(&_pgen_tmp_372_937._c0_poly);
  Free_poly_data(&_pgen_tmp_371_936._c1_poly);
  Free_poly_data(&_pgen_tmp_371_936._c0_poly);
  Free_poly_data(&result_grid_n56_316._c1_poly);
  Free_poly_data(&result_grid_n56_316._c0_poly);
  Free_poly_data(&_pgen_tmp_376_941._poly);
  Free_poly_data(&_pgen_tmp_375_940._c1_poly);
  Free_poly_data(&_pgen_tmp_375_940._c0_poly);
  Free_poly_data(&_pgen_tmp_374_939._c1_poly);
  Free_poly_data(&_pgen_tmp_374_939._c0_poly);
  Free_poly_data(&_pgen_tmp_377_942._c1_poly);
  Free_poly_data(&_pgen_tmp_377_942._c0_poly);
  Free_poly_data(&_pgen_tmp_378_943._poly);
  Free_poly_data(&result_n56_314._c1_poly);
  Free_poly_data(&result_n56_314._c0_poly);
  Free_poly_data(&_pgen_tmp_379_944._c1_poly);
  Free_poly_data(&_pgen_tmp_379_944._c0_poly);
  for (rescale_iv_550 = 0; rescale_iv_550 < 6; rescale_iv_550 = rescale_iv_550 + 1) {
    _pgen_tmp_381_946 = VS_out_conv23_306[rescale_iv_550];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_382_947, &_pgen_tmp_381_946);
    Rescale(&_pgen_tmp_382_947._c0_poly, &_pgen_tmp_381_946._c0_poly);
    Rescale(&_pgen_tmp_382_947._c1_poly, &_pgen_tmp_381_946._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv23_306[rescale_iv_550], &_pgen_tmp_382_947);
  }
  Free_poly_data(&_pgen_tmp_382_947._c1_poly);
  Free_poly_data(&_pgen_tmp_382_947._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 77
  // Conv_40
  // pragma: 65536, 1027, 78
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv24_318, 0, sizeof(VS_out_conv24_318));
  memset(&VS_out_conv_halo24_319, 0, sizeof(VS_out_conv_halo24_319));
  Free_ciph_poly(VS_out_conv_halo24_319, 6);
  for (mesh_y_n24_320 = 0; mesh_y_n24_320 < 2; mesh_y_n24_320 = mesh_y_n24_320 + 1) {
    for (mesh_z_n24_321 = 0; mesh_z_n24_321 < 1; mesh_z_n24_321 = mesh_z_n24_321 + 1) {
      Copy_ciph(&_preg_268435519, &VS_out_relu22_303[((mesh_y_n24_320 * 1) + mesh_z_n24_321)]);
      Copy_ciph(&input_dup_n56_322, &_preg_268435519);
      for (bs_input_n56_323 = 0; bs_input_n56_323 < 9; bs_input_n56_323 = bs_input_n56_323 + 1) {
        _preg_268435646 = Rotate(input_dup_n56_322, _cst_302[bs_input_n56_323]);
        Copy_ciph(&input_block_n56_324[bs_input_n56_323], &_preg_268435646);
        Free_poly_data(&_preg_268435646._c1_poly);
        Free_poly_data(&_preg_268435646._c0_poly);
      }
      for (mesh_x_n24_325 = 0; mesh_x_n24_325 < 6; mesh_x_n24_325 = mesh_x_n24_325 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=9
        Zero_ciph(&result_n57_326);
        for (num_grid_n57_327 = 0; num_grid_n57_327 < 32; num_grid_n57_327 = num_grid_n57_327 + 1) {
          Zero_ciph(&result_grid_n57_328);
          for (cap_block_n57_329 = 0; cap_block_n57_329 < 9; cap_block_n57_329 = cap_block_n57_329 + 1) {
            _ckks_gen_tmp_5566_512 = input_block_n56_324[cap_block_n57_329];
            Pt_from_msg_ofst(&_pgen_tmp_383_948, 84/* cst_298 */, (((((mesh_x_n24_325 * 2) + mesh_y_n24_320) * 288) + (cap_block_n57_329 + (num_grid_n57_327 * 9)))) * (23328), 23328, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_384_949, &_ckks_gen_tmp_5566_512, &_pgen_tmp_383_948);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n57_328, &result_grid_n57_328, &_pgen_tmp_384_949);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n57_328._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_384_949._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_5566_512._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_383_948._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_384_949._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_5566_512._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_383_948._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n57_328._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n57_328._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_384_949._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n57_328._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n57_328._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_384_949._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_386_951, &result_grid_n57_328);
          Rescale(&_pgen_tmp_386_951._c0_poly, &result_grid_n57_328._c0_poly);
          Rescale(&_pgen_tmp_386_951._c1_poly, &result_grid_n57_328._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_387_952, 85/* cst_303 */, (num_grid_n57_327) * (23328), 23328, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_385_950, &_pgen_tmp_386_951, &_pgen_tmp_387_952);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_385_950._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_385_950._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_386_951._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_387_952._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_385_950._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_386_951._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_387_952._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435647 = Rotate(_pgen_tmp_385_950, -23328 + (num_grid_n57_327 * 729));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_389_954, &result_grid_n57_328);
          Rescale(&_pgen_tmp_389_954._c0_poly, &result_grid_n57_328._c0_poly);
          Rescale(&_pgen_tmp_389_954._c1_poly, &result_grid_n57_328._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_390_955, 86/* cst_304 */, (num_grid_n57_327) * (23328), 23328, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_388_953, &_pgen_tmp_389_954, &_pgen_tmp_390_955);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_388_953._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_388_953._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_389_954._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_390_955._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_388_953._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_389_954._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_390_955._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435648 = Rotate(_pgen_tmp_388_953, num_grid_n57_327 * 729);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_391_956, &_preg_268435647, &_preg_268435648);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n57_326, &result_n57_326, &_pgen_tmp_391_956);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n57_326._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_391_956._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435647._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435648._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_391_956._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435647._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435648._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n57_326._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n57_326._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_391_956._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n57_326._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n57_326._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_391_956._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435647._c1_poly);
          Free_poly_data(&_preg_268435647._c0_poly);
          Free_poly_data(&_preg_268435648._c1_poly);
          Free_poly_data(&_preg_268435648._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_392_957, 87 /* cst_301 */, 23328, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n57_326, &result_n57_326, &_pgen_tmp_392_957);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n57_326._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n57_326._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n57_326._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_392_957._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n57_326._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n57_326._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_394_959 = VS_out_conv24_318[((mesh_x_n24_325 * 1) + mesh_z_n24_321)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_393_958, &_pgen_tmp_394_959, &result_n57_326);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_393_958._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_393_958._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_394_959._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n57_326._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_393_958._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_394_959._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n57_326._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv24_318[((mesh_x_n24_325 * 1) + mesh_z_n24_321)], &_pgen_tmp_393_958);
      }
    }
  }
  Free_ciph_poly(VS_out_relu22_303, 2);
  Free_poly_data(&_preg_268435519._c1_poly);
  Free_poly_data(&_preg_268435519._c0_poly);
  Free_poly_data(&input_dup_n56_322._c1_poly);
  Free_poly_data(&input_dup_n56_322._c0_poly);
  Free_ciph_poly(input_block_n56_324, 9);
  Free_poly_data(&_pgen_tmp_383_948._poly);
  Free_poly_data(&_pgen_tmp_384_949._c1_poly);
  Free_poly_data(&_pgen_tmp_384_949._c0_poly);
  Free_poly_data(&_pgen_tmp_387_952._poly);
  Free_poly_data(&_pgen_tmp_386_951._c1_poly);
  Free_poly_data(&_pgen_tmp_386_951._c0_poly);
  Free_poly_data(&_pgen_tmp_385_950._c1_poly);
  Free_poly_data(&_pgen_tmp_385_950._c0_poly);
  Free_poly_data(&result_grid_n57_328._c1_poly);
  Free_poly_data(&result_grid_n57_328._c0_poly);
  Free_poly_data(&_pgen_tmp_390_955._poly);
  Free_poly_data(&_pgen_tmp_389_954._c1_poly);
  Free_poly_data(&_pgen_tmp_389_954._c0_poly);
  Free_poly_data(&_pgen_tmp_388_953._c1_poly);
  Free_poly_data(&_pgen_tmp_388_953._c0_poly);
  Free_poly_data(&_pgen_tmp_391_956._c1_poly);
  Free_poly_data(&_pgen_tmp_391_956._c0_poly);
  Free_poly_data(&_pgen_tmp_392_957._poly);
  Free_poly_data(&result_n57_326._c1_poly);
  Free_poly_data(&result_n57_326._c0_poly);
  Free_poly_data(&_pgen_tmp_393_958._c1_poly);
  Free_poly_data(&_pgen_tmp_393_958._c0_poly);
  for (rescale_iv_551 = 0; rescale_iv_551 < 6; rescale_iv_551 = rescale_iv_551 + 1) {
    _pgen_tmp_395_960 = VS_out_conv24_318[rescale_iv_551];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_396_961, &_pgen_tmp_395_960);
    Rescale(&_pgen_tmp_396_961._c0_poly, &_pgen_tmp_395_960._c0_poly);
    Rescale(&_pgen_tmp_396_961._c1_poly, &_pgen_tmp_395_960._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv24_318[rescale_iv_551], &_pgen_tmp_396_961);
  }
  Free_poly_data(&_pgen_tmp_396_961._c1_poly);
  Free_poly_data(&_pgen_tmp_396_961._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 78
  // Concat_41
  // pragma: 65536, 1045, 79
  CMPLR_TM_START(4, 0);
  for (concat_op0_n25_330 = 0; concat_op0_n25_330 < 6; concat_op0_n25_330 = concat_op0_n25_330 + 1) {
    _pgen_tmp_397_962 = VS_out_conv23_306[concat_op0_n25_330];
    Copy_ciph(&VS_out_cocat25_331[(concat_op0_n25_330 + 0)], &_pgen_tmp_397_962);
  }
  Free_ciph_poly(VS_out_conv23_306, 6);
  for (concat_op1_n25_332 = 0; concat_op1_n25_332 < 6; concat_op1_n25_332 = concat_op1_n25_332 + 1) {
    _pgen_tmp_398_963 = VS_out_conv24_318[concat_op1_n25_332];
    Copy_ciph(&VS_out_cocat25_331[(concat_op1_n25_332 + 6)], &_pgen_tmp_398_963);
  }
  Free_ciph_poly(VS_out_conv24_318, 6);
  CMPLR_TM_END(4, 0);
  // pragma: 65537, 1045, 79
  // Relu_42
  // pragma: 65536, 1033, 80
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu25_333, 0, sizeof(VS_out_relu25_333));
  for (mesh_y_n25_334 = 0; mesh_y_n25_334 < 12; mesh_y_n25_334 = mesh_y_n25_334 + 1) {
    for (mesh_z_n25_335 = 0; mesh_z_n25_335 < 1; mesh_z_n25_335 = mesh_z_n25_335 + 1) {
      _pgen_tmp_399_964 = VS_out_cocat25_331[((mesh_y_n25_334 * 1) + mesh_z_n25_335)];
      Bootstrap(&_preg_268435520, &_pgen_tmp_399_964, 15);
      Encode_float(&_pgen_tmp_400_965, &_cst_425, 1, 1, Level(&_preg_268435520));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435522, &_preg_268435520, &_pgen_tmp_400_965);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_preg_268435522._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_preg_268435522._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435520._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_400_965._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_preg_268435522._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435520._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_400_965._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_401_966, &_preg_268435522);
      Rescale(&_pgen_tmp_401_966._c0_poly, &_preg_268435522._c0_poly);
      Rescale(&_pgen_tmp_401_966._c1_poly, &_preg_268435522._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435521 = App_relu(_preg_268435520, _pgen_tmp_401_966, 23328);
      _pgen_tmp_403_968 = VS_out_relu25_333[((mesh_y_n25_334 * 1) + mesh_z_n25_335)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_402_967, &_pgen_tmp_403_968, &_preg_268435521);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_pgen_tmp_402_967._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_402_967._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_403_968._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435521._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_402_967._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_403_968._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435521._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu25_333[((mesh_y_n25_334 * 1) + mesh_z_n25_335)], &_pgen_tmp_402_967);
    }
  }
  Free_ciph_poly(VS_out_cocat25_331, 12);
  Free_poly_data(&_pgen_tmp_400_965._poly);
  Free_poly_data(&_preg_268435522._c1_poly);
  Free_poly_data(&_preg_268435522._c0_poly);
  Free_poly_data(&_pgen_tmp_401_966._c1_poly);
  Free_poly_data(&_pgen_tmp_401_966._c0_poly);
  Free_poly_data(&_preg_268435520._c1_poly);
  Free_poly_data(&_preg_268435520._c0_poly);
  Free_poly_data(&_preg_268435521._c1_poly);
  Free_poly_data(&_preg_268435521._c0_poly);
  Free_poly_data(&_pgen_tmp_402_967._c1_poly);
  Free_poly_data(&_pgen_tmp_402_967._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 80
  // Conv_43
  // pragma: 65536, 1027, 81
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv26_336, 0, sizeof(VS_out_conv26_336));
  memset(&VS_out_conv_halo26_337, 0, sizeof(VS_out_conv_halo26_337));
  Free_ciph_poly(VS_out_conv_halo26_337, 2);
  for (mesh_y_n26_338 = 0; mesh_y_n26_338 < 12; mesh_y_n26_338 = mesh_y_n26_338 + 1) {
    for (mesh_z_n26_339 = 0; mesh_z_n26_339 < 1; mesh_z_n26_339 = mesh_z_n26_339 + 1) {
      Copy_ciph(&_preg_268435523, &VS_out_relu25_333[((mesh_y_n26_338 * 1) + mesh_z_n26_339)]);
      Copy_ciph(&input_dup_n57_340, &_preg_268435523);
      for (bs_input_n57_341 = 0; bs_input_n57_341 < 1; bs_input_n57_341 = bs_input_n57_341 + 1) {
        _preg_268435649 = Rotate(input_dup_n57_340, _cst_309[bs_input_n57_341]);
        Copy_ciph(&input_block_n57_342[bs_input_n57_341], &_preg_268435649);
        Free_poly_data(&_preg_268435649._c1_poly);
        Free_poly_data(&_preg_268435649._c0_poly);
      }
      for (mesh_x_n26_343 = 0; mesh_x_n26_343 < 2; mesh_x_n26_343 = mesh_x_n26_343 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n58_344);
        for (num_grid_n58_345 = 0; num_grid_n58_345 < 32; num_grid_n58_345 = num_grid_n58_345 + 1) {
          Zero_ciph(&result_grid_n58_346);
          for (cap_block_n58_347 = 0; cap_block_n58_347 < 1; cap_block_n58_347 = cap_block_n58_347 + 1) {
            _ckks_gen_tmp_5880_513 = input_block_n57_342[cap_block_n58_347];
            Pt_from_msg_ofst(&_pgen_tmp_404_969, 88/* cst_305 */, (((((mesh_x_n26_343 * 12) + mesh_y_n26_338) * 32) + (cap_block_n58_347 + (num_grid_n58_345 * 1)))) * (23328), 23328, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_405_970, &_ckks_gen_tmp_5880_513, &_pgen_tmp_404_969);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n58_346, &result_grid_n58_346, &_pgen_tmp_405_970);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n58_346._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_405_970._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_5880_513._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_404_969._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_405_970._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_5880_513._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_404_969._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n58_346._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n58_346._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_405_970._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n58_346._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n58_346._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_405_970._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_407_972, &result_grid_n58_346);
          Rescale(&_pgen_tmp_407_972._c0_poly, &result_grid_n58_346._c0_poly);
          Rescale(&_pgen_tmp_407_972._c1_poly, &result_grid_n58_346._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_408_973, 89/* cst_310 */, (num_grid_n58_345) * (23328), 23328, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_406_971, &_pgen_tmp_407_972, &_pgen_tmp_408_973);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_406_971._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_406_971._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_407_972._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_408_973._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_406_971._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_407_972._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_408_973._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435650 = Rotate(_pgen_tmp_406_971, -23328 + (num_grid_n58_345 * 729));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_410_975, &result_grid_n58_346);
          Rescale(&_pgen_tmp_410_975._c0_poly, &result_grid_n58_346._c0_poly);
          Rescale(&_pgen_tmp_410_975._c1_poly, &result_grid_n58_346._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_411_976, 90/* cst_311 */, (num_grid_n58_345) * (23328), 23328, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_409_974, &_pgen_tmp_410_975, &_pgen_tmp_411_976);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_409_974._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_409_974._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_410_975._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_411_976._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_409_974._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_410_975._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_411_976._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435651 = Rotate(_pgen_tmp_409_974, num_grid_n58_345 * 729);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_412_977, &_preg_268435650, &_preg_268435651);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n58_344, &result_n58_344, &_pgen_tmp_412_977);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n58_344._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_412_977._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435650._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435651._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_412_977._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435650._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435651._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n58_344._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n58_344._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_412_977._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n58_344._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n58_344._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_412_977._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435650._c1_poly);
          Free_poly_data(&_preg_268435650._c0_poly);
          Free_poly_data(&_preg_268435651._c1_poly);
          Free_poly_data(&_preg_268435651._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_413_978, 91 /* cst_308 */, 23328, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n58_344, &result_n58_344, &_pgen_tmp_413_978);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n58_344._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n58_344._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n58_344._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_413_978._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n58_344._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n58_344._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_415_980 = VS_out_conv26_336[((mesh_x_n26_343 * 1) + mesh_z_n26_339)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_414_979, &_pgen_tmp_415_980, &result_n58_344);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_414_979._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_414_979._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_415_980._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n58_344._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_414_979._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_415_980._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n58_344._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv26_336[((mesh_x_n26_343 * 1) + mesh_z_n26_339)], &_pgen_tmp_414_979);
      }
    }
  }
  Free_ciph_poly(VS_out_relu25_333, 12);
  Free_poly_data(&_preg_268435523._c1_poly);
  Free_poly_data(&_preg_268435523._c0_poly);
  Free_poly_data(&input_dup_n57_340._c1_poly);
  Free_poly_data(&input_dup_n57_340._c0_poly);
  Free_ciph_poly(input_block_n57_342, 1);
  Free_poly_data(&_pgen_tmp_404_969._poly);
  Free_poly_data(&_pgen_tmp_405_970._c1_poly);
  Free_poly_data(&_pgen_tmp_405_970._c0_poly);
  Free_poly_data(&_pgen_tmp_408_973._poly);
  Free_poly_data(&_pgen_tmp_407_972._c1_poly);
  Free_poly_data(&_pgen_tmp_407_972._c0_poly);
  Free_poly_data(&_pgen_tmp_406_971._c1_poly);
  Free_poly_data(&_pgen_tmp_406_971._c0_poly);
  Free_poly_data(&result_grid_n58_346._c1_poly);
  Free_poly_data(&result_grid_n58_346._c0_poly);
  Free_poly_data(&_pgen_tmp_411_976._poly);
  Free_poly_data(&_pgen_tmp_410_975._c1_poly);
  Free_poly_data(&_pgen_tmp_410_975._c0_poly);
  Free_poly_data(&_pgen_tmp_409_974._c1_poly);
  Free_poly_data(&_pgen_tmp_409_974._c0_poly);
  Free_poly_data(&_pgen_tmp_412_977._c1_poly);
  Free_poly_data(&_pgen_tmp_412_977._c0_poly);
  Free_poly_data(&_pgen_tmp_413_978._poly);
  Free_poly_data(&result_n58_344._c1_poly);
  Free_poly_data(&result_n58_344._c0_poly);
  Free_poly_data(&_pgen_tmp_414_979._c1_poly);
  Free_poly_data(&_pgen_tmp_414_979._c0_poly);
  for (rescale_iv_552 = 0; rescale_iv_552 < 2; rescale_iv_552 = rescale_iv_552 + 1) {
    _pgen_tmp_416_981 = VS_out_conv26_336[rescale_iv_552];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_417_982, &_pgen_tmp_416_981);
    Rescale(&_pgen_tmp_417_982._c0_poly, &_pgen_tmp_416_981._c0_poly);
    Rescale(&_pgen_tmp_417_982._c1_poly, &_pgen_tmp_416_981._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv26_336[rescale_iv_552], &_pgen_tmp_417_982);
  }
  Free_poly_data(&_pgen_tmp_417_982._c1_poly);
  Free_poly_data(&_pgen_tmp_417_982._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 81
  // Relu_44
  // pragma: 65536, 1033, 82
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu26_348, 0, sizeof(VS_out_relu26_348));
  for (mesh_y_n26_349 = 0; mesh_y_n26_349 < 2; mesh_y_n26_349 = mesh_y_n26_349 + 1) {
    for (mesh_z_n26_350 = 0; mesh_z_n26_350 < 1; mesh_z_n26_350 = mesh_z_n26_350 + 1) {
      _pgen_tmp_418_983 = VS_out_conv26_336[((mesh_y_n26_349 * 1) + mesh_z_n26_350)];
      Bootstrap(&_preg_268435524, &_pgen_tmp_418_983, 19);
      Encode_float(&_pgen_tmp_419_984, &_cst_426, 1, 1, Level(&_preg_268435524));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435526, &_preg_268435524, &_pgen_tmp_419_984);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_preg_268435526._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_preg_268435526._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435524._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_419_984._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_preg_268435526._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435524._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_419_984._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_420_985, &_preg_268435526);
      Rescale(&_pgen_tmp_420_985._c0_poly, &_preg_268435526._c0_poly);
      Rescale(&_pgen_tmp_420_985._c1_poly, &_preg_268435526._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435525 = App_relu(_preg_268435524, _pgen_tmp_420_985, 23328);
      _pgen_tmp_422_987 = VS_out_relu26_348[((mesh_y_n26_349 * 1) + mesh_z_n26_350)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_421_986, &_pgen_tmp_422_987, &_preg_268435525);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_pgen_tmp_421_986._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_421_986._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_422_987._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435525._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_421_986._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_422_987._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435525._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu26_348[((mesh_y_n26_349 * 1) + mesh_z_n26_350)], &_pgen_tmp_421_986);
    }
  }
  Free_ciph_poly(VS_out_conv26_336, 2);
  Free_poly_data(&_pgen_tmp_419_984._poly);
  Free_poly_data(&_preg_268435526._c1_poly);
  Free_poly_data(&_preg_268435526._c0_poly);
  Free_poly_data(&_pgen_tmp_420_985._c1_poly);
  Free_poly_data(&_pgen_tmp_420_985._c0_poly);
  Free_poly_data(&_preg_268435524._c1_poly);
  Free_poly_data(&_preg_268435524._c0_poly);
  Free_poly_data(&_preg_268435525._c1_poly);
  Free_poly_data(&_preg_268435525._c0_poly);
  Free_poly_data(&_pgen_tmp_421_986._c1_poly);
  Free_poly_data(&_pgen_tmp_421_986._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 82
  // Conv_45
  // pragma: 65536, 1027, 83
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv27_351, 0, sizeof(VS_out_conv27_351));
  memset(&VS_out_conv_halo27_352, 0, sizeof(VS_out_conv_halo27_352));
  Free_ciph_poly(VS_out_conv_halo27_352, 8);
  for (mesh_y_n27_353 = 0; mesh_y_n27_353 < 2; mesh_y_n27_353 = mesh_y_n27_353 + 1) {
    for (mesh_z_n27_354 = 0; mesh_z_n27_354 < 1; mesh_z_n27_354 = mesh_z_n27_354 + 1) {
      Copy_ciph(&_preg_268435527, &VS_out_relu26_348[((mesh_y_n27_353 * 1) + mesh_z_n27_354)]);
      Copy_ciph(&input_dup_n58_355, &_preg_268435527);
      for (bs_input_n58_356 = 0; bs_input_n58_356 < 1; bs_input_n58_356 = bs_input_n58_356 + 1) {
        _preg_268435652 = Rotate(input_dup_n58_355, _cst_316[bs_input_n58_356]);
        Copy_ciph(&input_block_n58_357[bs_input_n58_356], &_preg_268435652);
        Free_poly_data(&_preg_268435652._c1_poly);
        Free_poly_data(&_preg_268435652._c0_poly);
      }
      for (mesh_x_n27_358 = 0; mesh_x_n27_358 < 8; mesh_x_n27_358 = mesh_x_n27_358 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n59_359);
        for (num_grid_n59_360 = 0; num_grid_n59_360 < 32; num_grid_n59_360 = num_grid_n59_360 + 1) {
          Zero_ciph(&result_grid_n59_361);
          for (cap_block_n59_362 = 0; cap_block_n59_362 < 1; cap_block_n59_362 = cap_block_n59_362 + 1) {
            _ckks_gen_tmp_6145_514 = input_block_n58_357[cap_block_n59_362];
            Pt_from_msg_ofst(&_pgen_tmp_423_988, 92/* cst_312 */, (((((mesh_x_n27_358 * 2) + mesh_y_n27_353) * 32) + (cap_block_n59_362 + (num_grid_n59_360 * 1)))) * (23328), 23328, 1, 7);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_424_989, &_ckks_gen_tmp_6145_514, &_pgen_tmp_423_988);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n59_361, &result_grid_n59_361, &_pgen_tmp_424_989);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n59_361._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_424_989._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_6145_514._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_423_988._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_424_989._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_6145_514._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_423_988._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n59_361._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n59_361._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_424_989._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n59_361._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n59_361._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_424_989._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_426_991, &result_grid_n59_361);
          Rescale(&_pgen_tmp_426_991._c0_poly, &result_grid_n59_361._c0_poly);
          Rescale(&_pgen_tmp_426_991._c1_poly, &result_grid_n59_361._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_427_992, 93/* cst_317 */, (num_grid_n59_360) * (23328), 23328, 1, 6);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_425_990, &_pgen_tmp_426_991, &_pgen_tmp_427_992);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_425_990._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_425_990._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_426_991._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_427_992._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_425_990._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_426_991._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_427_992._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435653 = Rotate(_pgen_tmp_425_990, -23328 + (num_grid_n59_360 * 729));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_429_994, &result_grid_n59_361);
          Rescale(&_pgen_tmp_429_994._c0_poly, &result_grid_n59_361._c0_poly);
          Rescale(&_pgen_tmp_429_994._c1_poly, &result_grid_n59_361._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_430_995, 94/* cst_318 */, (num_grid_n59_360) * (23328), 23328, 1, 6);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_428_993, &_pgen_tmp_429_994, &_pgen_tmp_430_995);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_428_993._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_428_993._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_429_994._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_430_995._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_428_993._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_429_994._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_430_995._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435654 = Rotate(_pgen_tmp_428_993, num_grid_n59_360 * 729);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_431_996, &_preg_268435653, &_preg_268435654);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n59_359, &result_n59_359, &_pgen_tmp_431_996);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n59_359._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_431_996._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435653._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435654._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_431_996._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435653._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435654._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n59_359._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n59_359._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_431_996._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n59_359._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n59_359._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_431_996._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435653._c1_poly);
          Free_poly_data(&_preg_268435653._c0_poly);
          Free_poly_data(&_preg_268435654._c1_poly);
          Free_poly_data(&_preg_268435654._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_432_997, 95 /* cst_315 */, 23328, 2, 6);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n59_359, &result_n59_359, &_pgen_tmp_432_997);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n59_359._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n59_359._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n59_359._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_432_997._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n59_359._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n59_359._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_434_999 = VS_out_conv27_351[((mesh_x_n27_358 * 1) + mesh_z_n27_354)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_433_998, &_pgen_tmp_434_999, &result_n59_359);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_433_998._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_433_998._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_434_999._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n59_359._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_433_998._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_434_999._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n59_359._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv27_351[((mesh_x_n27_358 * 1) + mesh_z_n27_354)], &_pgen_tmp_433_998);
      }
    }
  }
  Free_poly_data(&_preg_268435527._c1_poly);
  Free_poly_data(&_preg_268435527._c0_poly);
  Free_poly_data(&input_dup_n58_355._c1_poly);
  Free_poly_data(&input_dup_n58_355._c0_poly);
  Free_ciph_poly(input_block_n58_357, 1);
  Free_poly_data(&_pgen_tmp_423_988._poly);
  Free_poly_data(&_pgen_tmp_424_989._c1_poly);
  Free_poly_data(&_pgen_tmp_424_989._c0_poly);
  Free_poly_data(&_pgen_tmp_427_992._poly);
  Free_poly_data(&_pgen_tmp_426_991._c1_poly);
  Free_poly_data(&_pgen_tmp_426_991._c0_poly);
  Free_poly_data(&_pgen_tmp_425_990._c1_poly);
  Free_poly_data(&_pgen_tmp_425_990._c0_poly);
  Free_poly_data(&result_grid_n59_361._c1_poly);
  Free_poly_data(&result_grid_n59_361._c0_poly);
  Free_poly_data(&_pgen_tmp_430_995._poly);
  Free_poly_data(&_pgen_tmp_429_994._c1_poly);
  Free_poly_data(&_pgen_tmp_429_994._c0_poly);
  Free_poly_data(&_pgen_tmp_428_993._c1_poly);
  Free_poly_data(&_pgen_tmp_428_993._c0_poly);
  Free_poly_data(&_pgen_tmp_431_996._c1_poly);
  Free_poly_data(&_pgen_tmp_431_996._c0_poly);
  Free_poly_data(&_pgen_tmp_432_997._poly);
  Free_poly_data(&result_n59_359._c1_poly);
  Free_poly_data(&result_n59_359._c0_poly);
  Free_poly_data(&_pgen_tmp_433_998._c1_poly);
  Free_poly_data(&_pgen_tmp_433_998._c0_poly);
  for (rescale_iv_553 = 0; rescale_iv_553 < 8; rescale_iv_553 = rescale_iv_553 + 1) {
    _pgen_tmp_435_1000 = VS_out_conv27_351[rescale_iv_553];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_436_1001, &_pgen_tmp_435_1000);
    Rescale(&_pgen_tmp_436_1001._c0_poly, &_pgen_tmp_435_1000._c0_poly);
    Rescale(&_pgen_tmp_436_1001._c1_poly, &_pgen_tmp_435_1000._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv27_351[rescale_iv_553], &_pgen_tmp_436_1001);
  }
  Free_poly_data(&_pgen_tmp_436_1001._c1_poly);
  Free_poly_data(&_pgen_tmp_436_1001._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 83
  // AveragePool_47
  // pragma: 65536, 1026, 84
  CMPLR_TM_START(3, 0);
  memset(&VS_out_avp27_363, 0, sizeof(VS_out_avp27_363));
  for (mesh_y_n27_364 = 0; mesh_y_n27_364 < 8; mesh_y_n27_364 = mesh_y_n27_364 + 1) {
    for (mesh_z_n27_365 = 0; mesh_z_n27_365 < 1; mesh_z_n27_365 = mesh_z_n27_365 + 1) {
      Copy_ciph(&_preg_268435528, &VS_out_conv27_351[((mesh_y_n27_364 * 1) + mesh_z_n27_365)]);
      _preg_268435655 = Rotate(_preg_268435528, 27);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&tmp_row_add59_366, &_preg_268435528, &_preg_268435655);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&tmp_row_add59_366._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&tmp_row_add59_366._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435528._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435655._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&tmp_row_add59_366._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435528._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435655._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      _preg_268435656 = Rotate(tmp_row_add59_366, 1);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_ckks_gen_tmp_6292_515, &tmp_row_add59_366, &_preg_268435656);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_ckks_gen_tmp_6292_515._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&_ckks_gen_tmp_6292_515._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&tmp_row_add59_366._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435656._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&_ckks_gen_tmp_6292_515._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&tmp_row_add59_366._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435656._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Pt_from_msg(&_pgen_tmp_437_1002, 96 /* cst_319 */, 23328, 1, 5);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435529, &_ckks_gen_tmp_6292_515, &_pgen_tmp_437_1002);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_preg_268435529._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_preg_268435529._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_6292_515._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_437_1002._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_preg_268435529._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_6292_515._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_437_1002._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      Copy_ciph(&orig_result59_367, &_preg_268435529);
      Zero_ciph(&comb_row_result60_368);
      for (comb_row_index_n60_369 = 0; comb_row_index_n60_369 < 13; comb_row_index_n60_369 = comb_row_index_n60_369 + 1) {
        _preg_268435657 = Rotate(orig_result59_367, comb_row_index_n60_369 * 1);
        Copy_ciph(&_ckks_gen_tmp_6323_516, &_preg_268435657);
        CMPLR_TM_START(19, 0);
        Init_ciph_down_scale(&_pgen_tmp_438_1003, &_ckks_gen_tmp_6323_516);
        Rescale(&_pgen_tmp_438_1003._c0_poly, &_ckks_gen_tmp_6323_516._c0_poly);
        Rescale(&_pgen_tmp_438_1003._c1_poly, &_ckks_gen_tmp_6323_516._c1_poly);
        CMPLR_TM_END(19, 0);
        Pt_from_msg_ofst(&_pgen_tmp_439_1004, 97/* cst_320 */, (comb_row_index_n60_369) * (23328), 23328, 1, 4);
        CMPLR_TM_START(17, 0);
        Init_ciph_up_scale_plain(&_pgen_tmp_440_1005, &_pgen_tmp_438_1003, &_pgen_tmp_439_1004);
        CMPLR_TM_END(17, 0);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_row_result60_368, &comb_row_result60_368, &_pgen_tmp_440_1005);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&comb_row_result60_368._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modmul(Coeffs(&_pgen_tmp_440_1005._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_438_1003._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_439_1004._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modmul(Coeffs(&_pgen_tmp_440_1005._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_438_1003._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_439_1004._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_row_result60_368._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_row_result60_368._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_440_1005._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_row_result60_368._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_row_result60_368._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_440_1005._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435657._c1_poly);
        Free_poly_data(&_preg_268435657._c0_poly);
      }
      Zero_ciph(&comb_rc_result60_370);
      for (comb_rc_index_n60_371 = 0; comb_rc_index_n60_371 < 13; comb_rc_index_n60_371 = comb_rc_index_n60_371 + 1) {
        _preg_268435658 = Rotate(comb_row_result60_368, comb_rc_index_n60_371 * 41);
        Copy_ciph(&_ckks_gen_tmp_6356_517, &_preg_268435658);
        CMPLR_TM_START(19, 0);
        Init_ciph_down_scale(&_pgen_tmp_441_1006, &_ckks_gen_tmp_6356_517);
        Rescale(&_pgen_tmp_441_1006._c0_poly, &_ckks_gen_tmp_6356_517._c0_poly);
        Rescale(&_pgen_tmp_441_1006._c1_poly, &_ckks_gen_tmp_6356_517._c1_poly);
        CMPLR_TM_END(19, 0);
        Pt_from_msg_ofst(&_pgen_tmp_442_1007, 98/* cst_321 */, (comb_rc_index_n60_371) * (23328), 23328, 1, 3);
        CMPLR_TM_START(17, 0);
        Init_ciph_up_scale_plain(&_pgen_tmp_443_1008, &_pgen_tmp_441_1006, &_pgen_tmp_442_1007);
        CMPLR_TM_END(17, 0);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_rc_result60_370, &comb_rc_result60_370, &_pgen_tmp_443_1008);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&comb_rc_result60_370._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modmul(Coeffs(&_pgen_tmp_443_1008._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_441_1006._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_442_1007._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modmul(Coeffs(&_pgen_tmp_443_1008._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_441_1006._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_442_1007._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_rc_result60_370._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_rc_result60_370._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_443_1008._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_rc_result60_370._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_rc_result60_370._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_443_1008._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435658._c1_poly);
        Free_poly_data(&_preg_268435658._c0_poly);
      }
      Zero_ciph(&ss_result60_372);
      for (comb_cc_lf_index_n60_373 = 0; comb_cc_lf_index_n60_373 < 2; comb_cc_lf_index_n60_373 = comb_cc_lf_index_n60_373 + 1) {
        _preg_268435659 = Rotate(comb_rc_result60_370, (1 << comb_cc_lf_index_n60_373) * 560);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_rc_result60_370, &comb_rc_result60_370, &_preg_268435659);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&comb_rc_result60_370._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&comb_rc_result60_370._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_rc_result60_370._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435659._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_rc_result60_370._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_rc_result60_370._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435659._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435659._c1_poly);
        Free_poly_data(&_preg_268435659._c0_poly);
      }
      for (comb_cc_index_n60_374 = 0; comb_cc_index_n60_374 < 8; comb_cc_index_n60_374 = comb_cc_index_n60_374 + 1) {
        _preg_268435660 = Rotate(comb_rc_result60_370, comb_cc_index_n60_374 * 2187);
        Copy_ciph(&_ckks_gen_tmp_6409_518, &_preg_268435660);
        CMPLR_TM_START(19, 0);
        Init_ciph_down_scale(&_pgen_tmp_444_1009, &_ckks_gen_tmp_6409_518);
        Rescale(&_pgen_tmp_444_1009._c0_poly, &_ckks_gen_tmp_6409_518._c0_poly);
        Rescale(&_pgen_tmp_444_1009._c1_poly, &_ckks_gen_tmp_6409_518._c1_poly);
        CMPLR_TM_END(19, 0);
        Pt_from_msg_ofst(&_pgen_tmp_445_1010, 99/* cst_322 */, (comb_cc_index_n60_374) * (23328), 23328, 1, 2);
        CMPLR_TM_START(17, 0);
        Init_ciph_up_scale_plain(&_pgen_tmp_446_1011, &_pgen_tmp_444_1009, &_pgen_tmp_445_1010);
        CMPLR_TM_END(17, 0);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&ss_result60_372, &ss_result60_372, &_pgen_tmp_446_1011);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&ss_result60_372._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modmul(Coeffs(&_pgen_tmp_446_1011._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_444_1009._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_445_1010._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modmul(Coeffs(&_pgen_tmp_446_1011._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_444_1009._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_445_1010._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&ss_result60_372._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&ss_result60_372._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_446_1011._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&ss_result60_372._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&ss_result60_372._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_446_1011._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435660._c1_poly);
        Free_poly_data(&_preg_268435660._c0_poly);
      }
      Copy_ciph(&VS_out_avp27_363[((mesh_y_n27_364 * 1) + mesh_z_n27_365)], &ss_result60_372);
      Free_poly_data(&_preg_268435655._c1_poly);
      Free_poly_data(&_preg_268435655._c0_poly);
      Free_poly_data(&_preg_268435656._c1_poly);
      Free_poly_data(&_preg_268435656._c0_poly);
    }
  }
  Free_ciph_poly(VS_out_conv27_351, 8);
  Free_poly_data(&_preg_268435528._c1_poly);
  Free_poly_data(&_preg_268435528._c0_poly);
  Free_poly_data(&tmp_row_add59_366._c1_poly);
  Free_poly_data(&tmp_row_add59_366._c0_poly);
  Free_poly_data(&_pgen_tmp_437_1002._poly);
  Free_poly_data(&_ckks_gen_tmp_6292_515._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_6292_515._c0_poly);
  Free_poly_data(&_preg_268435529._c1_poly);
  Free_poly_data(&_preg_268435529._c0_poly);
  Free_poly_data(&orig_result59_367._c1_poly);
  Free_poly_data(&orig_result59_367._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_6323_516._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_6323_516._c0_poly);
  Free_poly_data(&_pgen_tmp_439_1004._poly);
  Free_poly_data(&_pgen_tmp_438_1003._c1_poly);
  Free_poly_data(&_pgen_tmp_438_1003._c0_poly);
  Free_poly_data(&_pgen_tmp_440_1005._c1_poly);
  Free_poly_data(&_pgen_tmp_440_1005._c0_poly);
  Free_poly_data(&comb_row_result60_368._c1_poly);
  Free_poly_data(&comb_row_result60_368._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_6356_517._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_6356_517._c0_poly);
  Free_poly_data(&_pgen_tmp_442_1007._poly);
  Free_poly_data(&_pgen_tmp_441_1006._c1_poly);
  Free_poly_data(&_pgen_tmp_441_1006._c0_poly);
  Free_poly_data(&_pgen_tmp_443_1008._c1_poly);
  Free_poly_data(&_pgen_tmp_443_1008._c0_poly);
  Free_poly_data(&comb_rc_result60_370._c1_poly);
  Free_poly_data(&comb_rc_result60_370._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_6409_518._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_6409_518._c0_poly);
  Free_poly_data(&_pgen_tmp_445_1010._poly);
  Free_poly_data(&_pgen_tmp_444_1009._c1_poly);
  Free_poly_data(&_pgen_tmp_444_1009._c0_poly);
  Free_poly_data(&_pgen_tmp_446_1011._c1_poly);
  Free_poly_data(&_pgen_tmp_446_1011._c0_poly);
  Free_poly_data(&ss_result60_372._c1_poly);
  Free_poly_data(&ss_result60_372._c0_poly);
  for (rescale_iv_554 = 0; rescale_iv_554 < 8; rescale_iv_554 = rescale_iv_554 + 1) {
    _pgen_tmp_447_1012 = VS_out_avp27_363[rescale_iv_554];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_448_1013, &_pgen_tmp_447_1012);
    Rescale(&_pgen_tmp_448_1013._c0_poly, &_pgen_tmp_447_1012._c0_poly);
    Rescale(&_pgen_tmp_448_1013._c1_poly, &_pgen_tmp_447_1012._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_avp27_363[rescale_iv_554], &_pgen_tmp_448_1013);
  }
  Free_poly_data(&_pgen_tmp_448_1013._c1_poly);
  Free_poly_data(&_pgen_tmp_448_1013._c0_poly);
  for (reshardm_n27_375 = 0; reshardm_n27_375 < 2; reshardm_n27_375 = reshardm_n27_375 + 1) {
    _pgen_tmp_450_1015 = VS_out_avp27_363[(reshardm_n27_375 * 4)];
    _pgen_tmp_451_1016 = VS_out_avp27_363[((reshardm_n27_375 * 4) + 1)];
    _preg_268435661 = Rotate(_pgen_tmp_451_1016, -5408);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_452_1017, &_pgen_tmp_450_1015, &_preg_268435661);
    CMPLR_TM_END(12, 0);
    _pgen_tmp_454_1019 = VS_out_avp27_363[((reshardm_n27_375 * 4) + 2)];
    _pgen_tmp_455_1020 = VS_out_avp27_363[((reshardm_n27_375 * 4) + 3)];
    _preg_268435662 = Rotate(_pgen_tmp_455_1020, -5408);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_453_1018, &_pgen_tmp_454_1019, &_preg_268435662);
    _pgen_modulus_562 = Q_modulus();
    _pgen_num_q_563 = Poly_level(&_pgen_tmp_453_1018._c0_poly);
    for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_453_1018._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_454_1019._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435662._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_453_1018._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_454_1019._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435662._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      _pgen_modulus_562 = _pgen_modulus_562 + 1;
    }
    CMPLR_TM_END(12, 0);
    _preg_268435663 = Rotate(_pgen_tmp_453_1018, -10816);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_449_1014, &_pgen_tmp_452_1017, &_preg_268435663);
    _pgen_modulus_562 = Q_modulus();
    _pgen_num_q_563 = Poly_level(&_pgen_tmp_449_1014._c0_poly);
    for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_452_1017._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_450_1015._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435661._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_452_1017._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_450_1015._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435661._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_449_1014._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_452_1017._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435663._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_449_1014._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_452_1017._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435663._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      _pgen_modulus_562 = _pgen_modulus_562 + 1;
    }
    CMPLR_TM_END(12, 0);
    Copy_ciph(&output_reshard27_376[reshardm_n27_375], &_pgen_tmp_449_1014);
    Free_poly_data(&_preg_268435661._c1_poly);
    Free_poly_data(&_preg_268435661._c0_poly);
    Free_poly_data(&_preg_268435662._c1_poly);
    Free_poly_data(&_preg_268435662._c0_poly);
    Free_poly_data(&_preg_268435663._c1_poly);
    Free_poly_data(&_preg_268435663._c0_poly);
  }
  Free_ciph_poly(VS_out_avp27_363, 8);
  Free_poly_data(&_pgen_tmp_453_1018._c1_poly);
  Free_poly_data(&_pgen_tmp_453_1018._c0_poly);
  Free_poly_data(&_pgen_tmp_452_1017._c1_poly);
  Free_poly_data(&_pgen_tmp_452_1017._c0_poly);
  Free_poly_data(&_pgen_tmp_449_1014._c1_poly);
  Free_poly_data(&_pgen_tmp_449_1014._c0_poly);
  CMPLR_TM_END(3, 0);
  // pragma: 65537, 1026, 84
  // Conv_48
  // pragma: 65536, 1027, 85
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv28_377, 0, sizeof(VS_out_conv28_377));
  memset(&VS_out_conv_halo28_378, 0, sizeof(VS_out_conv_halo28_378));
  Free_ciph_poly(VS_out_conv_halo28_378, 8);
  for (mesh_y_n28_379 = 0; mesh_y_n28_379 < 2; mesh_y_n28_379 = mesh_y_n28_379 + 1) {
    for (mesh_z_n28_380 = 0; mesh_z_n28_380 < 1; mesh_z_n28_380 = mesh_z_n28_380 + 1) {
      Copy_ciph(&_preg_268435530, &VS_out_relu26_348[((mesh_y_n28_379 * 1) + mesh_z_n28_380)]);
      Copy_ciph(&input_dup_n60_381, &_preg_268435530);
      for (bs_input_n60_382 = 0; bs_input_n60_382 < 9; bs_input_n60_382 = bs_input_n60_382 + 1) {
        _preg_268435664 = Rotate(input_dup_n60_381, _cst_327[bs_input_n60_382]);
        Copy_ciph(&input_block_n60_383[bs_input_n60_382], &_preg_268435664);
        Free_poly_data(&_preg_268435664._c1_poly);
        Free_poly_data(&_preg_268435664._c0_poly);
      }
      for (mesh_x_n28_384 = 0; mesh_x_n28_384 < 8; mesh_x_n28_384 = mesh_x_n28_384 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=9
        Zero_ciph(&result_n61_385);
        for (num_grid_n61_386 = 0; num_grid_n61_386 < 32; num_grid_n61_386 = num_grid_n61_386 + 1) {
          Zero_ciph(&result_grid_n61_387);
          for (cap_block_n61_388 = 0; cap_block_n61_388 < 9; cap_block_n61_388 = cap_block_n61_388 + 1) {
            _ckks_gen_tmp_6588_519 = input_block_n60_383[cap_block_n61_388];
            Pt_from_msg_ofst(&_pgen_tmp_456_1021, 100/* cst_323 */, (((((mesh_x_n28_384 * 2) + mesh_y_n28_379) * 288) + (cap_block_n61_388 + (num_grid_n61_386 * 9)))) * (23328), 23328, 1, 7);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_457_1022, &_ckks_gen_tmp_6588_519, &_pgen_tmp_456_1021);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n61_387, &result_grid_n61_387, &_pgen_tmp_457_1022);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n61_387._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_457_1022._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_6588_519._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_456_1021._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_457_1022._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_6588_519._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_456_1021._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n61_387._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n61_387._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_457_1022._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n61_387._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n61_387._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_457_1022._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_459_1024, &result_grid_n61_387);
          Rescale(&_pgen_tmp_459_1024._c0_poly, &result_grid_n61_387._c0_poly);
          Rescale(&_pgen_tmp_459_1024._c1_poly, &result_grid_n61_387._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_460_1025, 101/* cst_328 */, (num_grid_n61_386) * (23328), 23328, 1, 6);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_458_1023, &_pgen_tmp_459_1024, &_pgen_tmp_460_1025);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_458_1023._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_458_1023._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_459_1024._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_460_1025._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_458_1023._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_459_1024._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_460_1025._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435665 = Rotate(_pgen_tmp_458_1023, -23328 + (num_grid_n61_386 * 729));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_462_1027, &result_grid_n61_387);
          Rescale(&_pgen_tmp_462_1027._c0_poly, &result_grid_n61_387._c0_poly);
          Rescale(&_pgen_tmp_462_1027._c1_poly, &result_grid_n61_387._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_463_1028, 102/* cst_329 */, (num_grid_n61_386) * (23328), 23328, 1, 6);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_461_1026, &_pgen_tmp_462_1027, &_pgen_tmp_463_1028);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_461_1026._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_461_1026._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_462_1027._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_463_1028._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_461_1026._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_462_1027._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_463_1028._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435666 = Rotate(_pgen_tmp_461_1026, num_grid_n61_386 * 729);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_464_1029, &_preg_268435665, &_preg_268435666);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n61_385, &result_n61_385, &_pgen_tmp_464_1029);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n61_385._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_464_1029._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435665._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435666._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_464_1029._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435665._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435666._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n61_385._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n61_385._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_464_1029._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n61_385._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n61_385._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_464_1029._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435665._c1_poly);
          Free_poly_data(&_preg_268435665._c0_poly);
          Free_poly_data(&_preg_268435666._c1_poly);
          Free_poly_data(&_preg_268435666._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_465_1030, 103 /* cst_326 */, 23328, 2, 6);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n61_385, &result_n61_385, &_pgen_tmp_465_1030);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n61_385._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n61_385._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n61_385._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_465_1030._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n61_385._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n61_385._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_467_1032 = VS_out_conv28_377[((mesh_x_n28_384 * 1) + mesh_z_n28_380)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_466_1031, &_pgen_tmp_467_1032, &result_n61_385);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_466_1031._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_466_1031._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_467_1032._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n61_385._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_466_1031._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_467_1032._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n61_385._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv28_377[((mesh_x_n28_384 * 1) + mesh_z_n28_380)], &_pgen_tmp_466_1031);
      }
    }
  }
  Free_ciph_poly(VS_out_relu26_348, 2);
  Free_poly_data(&_preg_268435530._c1_poly);
  Free_poly_data(&_preg_268435530._c0_poly);
  Free_poly_data(&input_dup_n60_381._c1_poly);
  Free_poly_data(&input_dup_n60_381._c0_poly);
  Free_ciph_poly(input_block_n60_383, 9);
  Free_poly_data(&_pgen_tmp_456_1021._poly);
  Free_poly_data(&_pgen_tmp_457_1022._c1_poly);
  Free_poly_data(&_pgen_tmp_457_1022._c0_poly);
  Free_poly_data(&_pgen_tmp_460_1025._poly);
  Free_poly_data(&_pgen_tmp_459_1024._c1_poly);
  Free_poly_data(&_pgen_tmp_459_1024._c0_poly);
  Free_poly_data(&_pgen_tmp_458_1023._c1_poly);
  Free_poly_data(&_pgen_tmp_458_1023._c0_poly);
  Free_poly_data(&result_grid_n61_387._c1_poly);
  Free_poly_data(&result_grid_n61_387._c0_poly);
  Free_poly_data(&_pgen_tmp_463_1028._poly);
  Free_poly_data(&_pgen_tmp_462_1027._c1_poly);
  Free_poly_data(&_pgen_tmp_462_1027._c0_poly);
  Free_poly_data(&_pgen_tmp_461_1026._c1_poly);
  Free_poly_data(&_pgen_tmp_461_1026._c0_poly);
  Free_poly_data(&_pgen_tmp_464_1029._c1_poly);
  Free_poly_data(&_pgen_tmp_464_1029._c0_poly);
  Free_poly_data(&_pgen_tmp_465_1030._poly);
  Free_poly_data(&result_n61_385._c1_poly);
  Free_poly_data(&result_n61_385._c0_poly);
  Free_poly_data(&_pgen_tmp_466_1031._c1_poly);
  Free_poly_data(&_pgen_tmp_466_1031._c0_poly);
  for (rescale_iv_555 = 0; rescale_iv_555 < 8; rescale_iv_555 = rescale_iv_555 + 1) {
    _pgen_tmp_468_1033 = VS_out_conv28_377[rescale_iv_555];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_469_1034, &_pgen_tmp_468_1033);
    Rescale(&_pgen_tmp_469_1034._c0_poly, &_pgen_tmp_468_1033._c0_poly);
    Rescale(&_pgen_tmp_469_1034._c1_poly, &_pgen_tmp_468_1033._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv28_377[rescale_iv_555], &_pgen_tmp_469_1034);
  }
  Free_poly_data(&_pgen_tmp_469_1034._c1_poly);
  Free_poly_data(&_pgen_tmp_469_1034._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 85
  // AveragePool_50
  // pragma: 65536, 1026, 86
  CMPLR_TM_START(3, 0);
  memset(&VS_out_avp28_389, 0, sizeof(VS_out_avp28_389));
  for (mesh_y_n28_390 = 0; mesh_y_n28_390 < 8; mesh_y_n28_390 = mesh_y_n28_390 + 1) {
    for (mesh_z_n28_391 = 0; mesh_z_n28_391 < 1; mesh_z_n28_391 = mesh_z_n28_391 + 1) {
      Copy_ciph(&_preg_268435531, &VS_out_conv28_377[((mesh_y_n28_390 * 1) + mesh_z_n28_391)]);
      _preg_268435667 = Rotate(_preg_268435531, 27);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&tmp_row_add61_392, &_preg_268435531, &_preg_268435667);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&tmp_row_add61_392._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&tmp_row_add61_392._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435531._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435667._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&tmp_row_add61_392._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435531._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435667._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      _preg_268435668 = Rotate(tmp_row_add61_392, 1);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_ckks_gen_tmp_6735_520, &tmp_row_add61_392, &_preg_268435668);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_ckks_gen_tmp_6735_520._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&_ckks_gen_tmp_6735_520._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&tmp_row_add61_392._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435668._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&_ckks_gen_tmp_6735_520._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&tmp_row_add61_392._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435668._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Pt_from_msg(&_pgen_tmp_470_1035, 104 /* cst_330 */, 23328, 1, 5);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435532, &_ckks_gen_tmp_6735_520, &_pgen_tmp_470_1035);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_preg_268435532._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_preg_268435532._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_6735_520._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_470_1035._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_preg_268435532._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_6735_520._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_470_1035._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      Copy_ciph(&orig_result61_393, &_preg_268435532);
      Zero_ciph(&comb_row_result62_394);
      for (comb_row_index_n62_395 = 0; comb_row_index_n62_395 < 13; comb_row_index_n62_395 = comb_row_index_n62_395 + 1) {
        _preg_268435669 = Rotate(orig_result61_393, comb_row_index_n62_395 * 1);
        Copy_ciph(&_ckks_gen_tmp_6766_521, &_preg_268435669);
        CMPLR_TM_START(19, 0);
        Init_ciph_down_scale(&_pgen_tmp_471_1036, &_ckks_gen_tmp_6766_521);
        Rescale(&_pgen_tmp_471_1036._c0_poly, &_ckks_gen_tmp_6766_521._c0_poly);
        Rescale(&_pgen_tmp_471_1036._c1_poly, &_ckks_gen_tmp_6766_521._c1_poly);
        CMPLR_TM_END(19, 0);
        Pt_from_msg_ofst(&_pgen_tmp_472_1037, 105/* cst_331 */, (comb_row_index_n62_395) * (23328), 23328, 1, 4);
        CMPLR_TM_START(17, 0);
        Init_ciph_up_scale_plain(&_pgen_tmp_473_1038, &_pgen_tmp_471_1036, &_pgen_tmp_472_1037);
        CMPLR_TM_END(17, 0);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_row_result62_394, &comb_row_result62_394, &_pgen_tmp_473_1038);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&comb_row_result62_394._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modmul(Coeffs(&_pgen_tmp_473_1038._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_471_1036._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_472_1037._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modmul(Coeffs(&_pgen_tmp_473_1038._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_471_1036._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_472_1037._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_row_result62_394._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_row_result62_394._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_473_1038._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_row_result62_394._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_row_result62_394._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_473_1038._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435669._c1_poly);
        Free_poly_data(&_preg_268435669._c0_poly);
      }
      Zero_ciph(&comb_rc_result62_396);
      for (comb_rc_index_n62_397 = 0; comb_rc_index_n62_397 < 13; comb_rc_index_n62_397 = comb_rc_index_n62_397 + 1) {
        _preg_268435670 = Rotate(comb_row_result62_394, comb_rc_index_n62_397 * 41);
        Copy_ciph(&_ckks_gen_tmp_6799_522, &_preg_268435670);
        CMPLR_TM_START(19, 0);
        Init_ciph_down_scale(&_pgen_tmp_474_1039, &_ckks_gen_tmp_6799_522);
        Rescale(&_pgen_tmp_474_1039._c0_poly, &_ckks_gen_tmp_6799_522._c0_poly);
        Rescale(&_pgen_tmp_474_1039._c1_poly, &_ckks_gen_tmp_6799_522._c1_poly);
        CMPLR_TM_END(19, 0);
        Pt_from_msg_ofst(&_pgen_tmp_475_1040, 106/* cst_332 */, (comb_rc_index_n62_397) * (23328), 23328, 1, 3);
        CMPLR_TM_START(17, 0);
        Init_ciph_up_scale_plain(&_pgen_tmp_476_1041, &_pgen_tmp_474_1039, &_pgen_tmp_475_1040);
        CMPLR_TM_END(17, 0);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_rc_result62_396, &comb_rc_result62_396, &_pgen_tmp_476_1041);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&comb_rc_result62_396._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modmul(Coeffs(&_pgen_tmp_476_1041._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_474_1039._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_475_1040._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modmul(Coeffs(&_pgen_tmp_476_1041._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_474_1039._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_475_1040._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_rc_result62_396._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_rc_result62_396._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_476_1041._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_rc_result62_396._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_rc_result62_396._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_476_1041._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435670._c1_poly);
        Free_poly_data(&_preg_268435670._c0_poly);
      }
      Zero_ciph(&ss_result62_398);
      for (comb_cc_lf_index_n62_399 = 0; comb_cc_lf_index_n62_399 < 2; comb_cc_lf_index_n62_399 = comb_cc_lf_index_n62_399 + 1) {
        _preg_268435671 = Rotate(comb_rc_result62_396, (1 << comb_cc_lf_index_n62_399) * 560);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&comb_rc_result62_396, &comb_rc_result62_396, &_preg_268435671);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&comb_rc_result62_396._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&comb_rc_result62_396._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_rc_result62_396._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435671._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&comb_rc_result62_396._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&comb_rc_result62_396._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435671._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435671._c1_poly);
        Free_poly_data(&_preg_268435671._c0_poly);
      }
      for (comb_cc_index_n62_400 = 0; comb_cc_index_n62_400 < 8; comb_cc_index_n62_400 = comb_cc_index_n62_400 + 1) {
        _preg_268435672 = Rotate(comb_rc_result62_396, comb_cc_index_n62_400 * 2187);
        Copy_ciph(&_ckks_gen_tmp_6852_523, &_preg_268435672);
        CMPLR_TM_START(19, 0);
        Init_ciph_down_scale(&_pgen_tmp_477_1042, &_ckks_gen_tmp_6852_523);
        Rescale(&_pgen_tmp_477_1042._c0_poly, &_ckks_gen_tmp_6852_523._c0_poly);
        Rescale(&_pgen_tmp_477_1042._c1_poly, &_ckks_gen_tmp_6852_523._c1_poly);
        CMPLR_TM_END(19, 0);
        Pt_from_msg_ofst(&_pgen_tmp_478_1043, 107/* cst_333 */, (comb_cc_index_n62_400) * (23328), 23328, 1, 2);
        CMPLR_TM_START(17, 0);
        Init_ciph_up_scale_plain(&_pgen_tmp_479_1044, &_pgen_tmp_477_1042, &_pgen_tmp_478_1043);
        CMPLR_TM_END(17, 0);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&ss_result62_398, &ss_result62_398, &_pgen_tmp_479_1044);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&ss_result62_398._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modmul(Coeffs(&_pgen_tmp_479_1044._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_477_1042._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_478_1043._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modmul(Coeffs(&_pgen_tmp_479_1044._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_477_1042._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_478_1043._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&ss_result62_398._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&ss_result62_398._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_479_1044._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&ss_result62_398._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&ss_result62_398._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_479_1044._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435672._c1_poly);
        Free_poly_data(&_preg_268435672._c0_poly);
      }
      Copy_ciph(&VS_out_avp28_389[((mesh_y_n28_390 * 1) + mesh_z_n28_391)], &ss_result62_398);
      Free_poly_data(&_preg_268435667._c1_poly);
      Free_poly_data(&_preg_268435667._c0_poly);
      Free_poly_data(&_preg_268435668._c1_poly);
      Free_poly_data(&_preg_268435668._c0_poly);
    }
  }
  Free_ciph_poly(VS_out_conv28_377, 8);
  Free_poly_data(&_preg_268435531._c1_poly);
  Free_poly_data(&_preg_268435531._c0_poly);
  Free_poly_data(&tmp_row_add61_392._c1_poly);
  Free_poly_data(&tmp_row_add61_392._c0_poly);
  Free_poly_data(&_pgen_tmp_470_1035._poly);
  Free_poly_data(&_ckks_gen_tmp_6735_520._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_6735_520._c0_poly);
  Free_poly_data(&_preg_268435532._c1_poly);
  Free_poly_data(&_preg_268435532._c0_poly);
  Free_poly_data(&orig_result61_393._c1_poly);
  Free_poly_data(&orig_result61_393._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_6766_521._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_6766_521._c0_poly);
  Free_poly_data(&_pgen_tmp_472_1037._poly);
  Free_poly_data(&_pgen_tmp_471_1036._c1_poly);
  Free_poly_data(&_pgen_tmp_471_1036._c0_poly);
  Free_poly_data(&_pgen_tmp_473_1038._c1_poly);
  Free_poly_data(&_pgen_tmp_473_1038._c0_poly);
  Free_poly_data(&comb_row_result62_394._c1_poly);
  Free_poly_data(&comb_row_result62_394._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_6799_522._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_6799_522._c0_poly);
  Free_poly_data(&_pgen_tmp_475_1040._poly);
  Free_poly_data(&_pgen_tmp_474_1039._c1_poly);
  Free_poly_data(&_pgen_tmp_474_1039._c0_poly);
  Free_poly_data(&_pgen_tmp_476_1041._c1_poly);
  Free_poly_data(&_pgen_tmp_476_1041._c0_poly);
  Free_poly_data(&comb_rc_result62_396._c1_poly);
  Free_poly_data(&comb_rc_result62_396._c0_poly);
  Free_poly_data(&_ckks_gen_tmp_6852_523._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_6852_523._c0_poly);
  Free_poly_data(&_pgen_tmp_478_1043._poly);
  Free_poly_data(&_pgen_tmp_477_1042._c1_poly);
  Free_poly_data(&_pgen_tmp_477_1042._c0_poly);
  Free_poly_data(&_pgen_tmp_479_1044._c1_poly);
  Free_poly_data(&_pgen_tmp_479_1044._c0_poly);
  Free_poly_data(&ss_result62_398._c1_poly);
  Free_poly_data(&ss_result62_398._c0_poly);
  for (rescale_iv_556 = 0; rescale_iv_556 < 8; rescale_iv_556 = rescale_iv_556 + 1) {
    _pgen_tmp_480_1045 = VS_out_avp28_389[rescale_iv_556];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_481_1046, &_pgen_tmp_480_1045);
    Rescale(&_pgen_tmp_481_1046._c0_poly, &_pgen_tmp_480_1045._c0_poly);
    Rescale(&_pgen_tmp_481_1046._c1_poly, &_pgen_tmp_480_1045._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_avp28_389[rescale_iv_556], &_pgen_tmp_481_1046);
  }
  Free_poly_data(&_pgen_tmp_481_1046._c1_poly);
  Free_poly_data(&_pgen_tmp_481_1046._c0_poly);
  for (reshardm_n28_401 = 0; reshardm_n28_401 < 2; reshardm_n28_401 = reshardm_n28_401 + 1) {
    _pgen_tmp_483_1048 = VS_out_avp28_389[(reshardm_n28_401 * 4)];
    _pgen_tmp_484_1049 = VS_out_avp28_389[((reshardm_n28_401 * 4) + 1)];
    _preg_268435673 = Rotate(_pgen_tmp_484_1049, -5408);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_485_1050, &_pgen_tmp_483_1048, &_preg_268435673);
    CMPLR_TM_END(12, 0);
    _pgen_tmp_487_1052 = VS_out_avp28_389[((reshardm_n28_401 * 4) + 2)];
    _pgen_tmp_488_1053 = VS_out_avp28_389[((reshardm_n28_401 * 4) + 3)];
    _preg_268435674 = Rotate(_pgen_tmp_488_1053, -5408);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_486_1051, &_pgen_tmp_487_1052, &_preg_268435674);
    _pgen_modulus_562 = Q_modulus();
    _pgen_num_q_563 = Poly_level(&_pgen_tmp_486_1051._c0_poly);
    for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_486_1051._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_487_1052._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435674._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_486_1051._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_487_1052._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435674._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      _pgen_modulus_562 = _pgen_modulus_562 + 1;
    }
    CMPLR_TM_END(12, 0);
    _preg_268435675 = Rotate(_pgen_tmp_486_1051, -10816);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_pgen_tmp_482_1047, &_pgen_tmp_485_1050, &_preg_268435675);
    _pgen_modulus_562 = Q_modulus();
    _pgen_num_q_563 = Poly_level(&_pgen_tmp_482_1047._c0_poly);
    for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
      Hw_modadd(Coeffs(&_pgen_tmp_485_1050._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_483_1048._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435673._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_485_1050._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_483_1048._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435673._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_482_1047._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_485_1050._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435675._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&_pgen_tmp_482_1047._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_485_1050._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435675._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      _pgen_modulus_562 = _pgen_modulus_562 + 1;
    }
    CMPLR_TM_END(12, 0);
    Copy_ciph(&output_reshard28_402[reshardm_n28_401], &_pgen_tmp_482_1047);
    Free_poly_data(&_preg_268435673._c1_poly);
    Free_poly_data(&_preg_268435673._c0_poly);
    Free_poly_data(&_preg_268435674._c1_poly);
    Free_poly_data(&_preg_268435674._c0_poly);
    Free_poly_data(&_preg_268435675._c1_poly);
    Free_poly_data(&_preg_268435675._c0_poly);
  }
  Free_ciph_poly(VS_out_avp28_389, 8);
  Free_poly_data(&_pgen_tmp_486_1051._c1_poly);
  Free_poly_data(&_pgen_tmp_486_1051._c0_poly);
  Free_poly_data(&_pgen_tmp_485_1050._c1_poly);
  Free_poly_data(&_pgen_tmp_485_1050._c0_poly);
  Free_poly_data(&_pgen_tmp_482_1047._c1_poly);
  Free_poly_data(&_pgen_tmp_482_1047._c0_poly);
  CMPLR_TM_END(3, 0);
  // pragma: 65537, 1026, 86
  // Concat_51
  // pragma: 65536, 1045, 87
  CMPLR_TM_START(4, 0);
  for (concat_op0_n29_403 = 0; concat_op0_n29_403 < 2; concat_op0_n29_403 = concat_op0_n29_403 + 1) {
    _pgen_tmp_489_1054 = output_reshard27_376[concat_op0_n29_403];
    Copy_ciph(&VS_out_cocat29_404[(concat_op0_n29_403 + 0)], &_pgen_tmp_489_1054);
  }
  Free_ciph_poly(output_reshard27_376, 2);
  for (concat_op1_n29_405 = 0; concat_op1_n29_405 < 2; concat_op1_n29_405 = concat_op1_n29_405 + 1) {
    _pgen_tmp_490_1055 = output_reshard28_402[concat_op1_n29_405];
    Copy_ciph(&VS_out_cocat29_404[(concat_op1_n29_405 + 2)], &_pgen_tmp_490_1055);
  }
  Free_ciph_poly(output_reshard28_402, 2);
  CMPLR_TM_END(4, 0);
  // pragma: 65537, 1045, 87
  // Relu_52
  // pragma: 65536, 1033, 88
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu29_406, 0, sizeof(VS_out_relu29_406));
  for (mesh_y_n29_407 = 0; mesh_y_n29_407 < 4; mesh_y_n29_407 = mesh_y_n29_407 + 1) {
    for (mesh_z_n29_408 = 0; mesh_z_n29_408 < 1; mesh_z_n29_408 = mesh_z_n29_408 + 1) {
      _pgen_tmp_491_1056 = VS_out_cocat29_404[((mesh_y_n29_407 * 1) + mesh_z_n29_408)];
      Bootstrap(&_preg_268435533, &_pgen_tmp_491_1056, 14);
      Encode_float(&_pgen_tmp_492_1057, &_cst_427, 1, 1, Level(&_preg_268435533));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435535, &_preg_268435533, &_pgen_tmp_492_1057);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_preg_268435535._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_preg_268435535._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435533._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_492_1057._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_preg_268435535._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435533._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_492_1057._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_493_1058, &_preg_268435535);
      Rescale(&_pgen_tmp_493_1058._c0_poly, &_preg_268435535._c0_poly);
      Rescale(&_pgen_tmp_493_1058._c1_poly, &_preg_268435535._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435534 = App_relu(_preg_268435533, _pgen_tmp_493_1058, 21632);
      _pgen_tmp_495_1060 = VS_out_relu29_406[((mesh_y_n29_407 * 1) + mesh_z_n29_408)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_494_1059, &_pgen_tmp_495_1060, &_preg_268435534);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_pgen_tmp_494_1059._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_494_1059._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_495_1060._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435534._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_494_1059._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_495_1060._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435534._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu29_406[((mesh_y_n29_407 * 1) + mesh_z_n29_408)], &_pgen_tmp_494_1059);
    }
  }
  Free_ciph_poly(VS_out_cocat29_404, 4);
  Free_poly_data(&_pgen_tmp_492_1057._poly);
  Free_poly_data(&_preg_268435535._c1_poly);
  Free_poly_data(&_preg_268435535._c0_poly);
  Free_poly_data(&_pgen_tmp_493_1058._c1_poly);
  Free_poly_data(&_pgen_tmp_493_1058._c0_poly);
  Free_poly_data(&_preg_268435533._c1_poly);
  Free_poly_data(&_preg_268435533._c0_poly);
  Free_poly_data(&_preg_268435534._c1_poly);
  Free_poly_data(&_preg_268435534._c0_poly);
  Free_poly_data(&_pgen_tmp_494_1059._c1_poly);
  Free_poly_data(&_pgen_tmp_494_1059._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 88
  // Conv_53
  // pragma: 65536, 1027, 89
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv30_409, 0, sizeof(VS_out_conv30_409));
  memset(&VS_out_conv_halo30_410, 0, sizeof(VS_out_conv_halo30_410));
  Free_ciph_poly(VS_out_conv_halo30_410, 1);
  for (mesh_y_n30_411 = 0; mesh_y_n30_411 < 4; mesh_y_n30_411 = mesh_y_n30_411 + 1) {
    for (mesh_z_n30_412 = 0; mesh_z_n30_412 < 1; mesh_z_n30_412 = mesh_z_n30_412 + 1) {
      Copy_ciph(&_preg_268435536, &VS_out_relu29_406[((mesh_y_n30_411 * 1) + mesh_z_n30_412)]);
      for (mesh_x_n30_413 = 0; mesh_x_n30_413 < 1; mesh_x_n30_413 = mesh_x_n30_413 + 1) {
        Zero_ciph(&tmp_result_n63_414);
        Copy_ciph(&input_dup_n63_415, &_preg_268435536);
        for (index_cin_n63_416 = 0; index_cin_n63_416 < 128; index_cin_n63_416 = index_cin_n63_416 + 1) {
          for (index_khw_n63_417 = 0; index_khw_n63_417 < 1; index_khw_n63_417 = index_khw_n63_417 + 1) {
            _preg_268435676 = Rotate(input_dup_n63_415, _cst_338[index_khw_n63_417]);
            Copy_ciph(&_ckks_gen_tmp_7128_524, &_preg_268435676);
            Pt_from_msg_ofst(&_pgen_tmp_496_1061, 108/* cst_334 */, ((index_khw_n63_417 + (index_cin_n63_416 * 1))) * (10816), 10816, 1, 2);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_497_1062, &_ckks_gen_tmp_7128_524, &_pgen_tmp_496_1061);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&tmp_result_n63_414, &tmp_result_n63_414, &_pgen_tmp_497_1062);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&tmp_result_n63_414._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_497_1062._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_7128_524._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_496_1061._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_497_1062._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_7128_524._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_496_1061._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&tmp_result_n63_414._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&tmp_result_n63_414._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_497_1062._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&tmp_result_n63_414._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&tmp_result_n63_414._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_497_1062._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
            Free_poly_data(&_preg_268435676._c1_poly);
            Free_poly_data(&_preg_268435676._c0_poly);
          }
          _preg_268435677 = Rotate(input_dup_n63_415, 169);
          Copy_ciph(&input_dup_n63_415, &_preg_268435677);
          Free_poly_data(&_preg_268435677._c1_poly);
          Free_poly_data(&_preg_268435677._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_498_1063, 109 /* cst_337 */, 10816, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&tmp_result_n63_414, &tmp_result_n63_414, &_pgen_tmp_498_1063);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&tmp_result_n63_414._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&tmp_result_n63_414._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&tmp_result_n63_414._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_498_1063._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&tmp_result_n63_414._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&tmp_result_n63_414._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_500_1065 = VS_out_conv30_409[((mesh_x_n30_413 * 1) + mesh_z_n30_412)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_499_1064, &_pgen_tmp_500_1065, &tmp_result_n63_414);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_499_1064._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_499_1064._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_500_1065._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&tmp_result_n63_414._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_499_1064._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_500_1065._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&tmp_result_n63_414._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv30_409[((mesh_x_n30_413 * 1) + mesh_z_n30_412)], &_pgen_tmp_499_1064);
      }
    }
  }
  Free_ciph_poly(VS_out_relu29_406, 4);
  Free_poly_data(&_preg_268435536._c1_poly);
  Free_poly_data(&_preg_268435536._c0_poly);
  Free_poly_data(&_pgen_tmp_496_1061._poly);
  Free_poly_data(&_ckks_gen_tmp_7128_524._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_7128_524._c0_poly);
  Free_poly_data(&_pgen_tmp_497_1062._c1_poly);
  Free_poly_data(&_pgen_tmp_497_1062._c0_poly);
  Free_poly_data(&input_dup_n63_415._c1_poly);
  Free_poly_data(&input_dup_n63_415._c0_poly);
  Free_poly_data(&_pgen_tmp_498_1063._poly);
  Free_poly_data(&tmp_result_n63_414._c1_poly);
  Free_poly_data(&tmp_result_n63_414._c0_poly);
  Free_poly_data(&_pgen_tmp_499_1064._c1_poly);
  Free_poly_data(&_pgen_tmp_499_1064._c0_poly);
  for (rescale_iv_557 = 0; rescale_iv_557 < 1; rescale_iv_557 = rescale_iv_557 + 1) {
    _pgen_tmp_501_1066 = VS_out_conv30_409[rescale_iv_557];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_502_1067, &_pgen_tmp_501_1066);
    Rescale(&_pgen_tmp_502_1067._c0_poly, &_pgen_tmp_501_1066._c0_poly);
    Rescale(&_pgen_tmp_502_1067._c1_poly, &_pgen_tmp_501_1066._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv30_409[rescale_iv_557], &_pgen_tmp_502_1067);
  }
  Free_poly_data(&_pgen_tmp_502_1067._c1_poly);
  Free_poly_data(&_pgen_tmp_502_1067._c0_poly);
  Copy_ciph(&_preg_268435537, &VS_out_conv30_409[0]);
  Free_ciph_poly(VS_out_conv30_409, 1);
  Copy_ciph(&_preg_268435538, &_preg_268435537);
  Free_poly_data(&_preg_268435537._c1_poly);
  Free_poly_data(&_preg_268435537._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 89
  // Relu_54
  // pragma: 65536, 1033, 90
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435539, &_preg_268435538, 15);
  Free_poly_data(&_preg_268435538._c1_poly);
  Free_poly_data(&_preg_268435538._c0_poly);
  Encode_float(&_pgen_tmp_504_1069, &_cst_428, 1, 1, Level(&_preg_268435539));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_503_1068, &_preg_268435539, &_pgen_tmp_504_1069);
  _pgen_modulus_562 = Q_modulus();
  _pgen_num_q_563 = Poly_level(&_pgen_tmp_503_1068._c0_poly);
  for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_503_1068._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435539._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_504_1069._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_503_1068._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435539._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_504_1069._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    _pgen_modulus_562 = _pgen_modulus_562 + 1;
  }
  Free_poly_data(&_pgen_tmp_504_1069._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435541, &_pgen_tmp_503_1068);
  Rescale(&_preg_268435541._c0_poly, &_pgen_tmp_503_1068._c0_poly);
  Rescale(&_preg_268435541._c1_poly, &_pgen_tmp_503_1068._c1_poly);
  Free_poly_data(&_pgen_tmp_503_1068._c1_poly);
  Free_poly_data(&_pgen_tmp_503_1068._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435540 = App_relu(_preg_268435539, _preg_268435541, 10816);
  Free_poly_data(&_preg_268435541._c1_poly);
  Free_poly_data(&_preg_268435541._c0_poly);
  Free_poly_data(&_preg_268435539._c1_poly);
  Free_poly_data(&_preg_268435539._c0_poly);
  Copy_ciph(&_preg_268435542, &_preg_268435540);
  Free_poly_data(&_preg_268435540._c1_poly);
  Free_poly_data(&_preg_268435540._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 90
  // Conv_55
  // pragma: 65536, 1027, 91
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv31_418, 0, sizeof(VS_out_conv31_418));
  memset(&VS_out_conv_halo31_419, 0, sizeof(VS_out_conv_halo31_419));
  Free_ciph_poly(VS_out_conv_halo31_419, 2);
  for (mesh_y_n31_420 = 0; mesh_y_n31_420 < 1; mesh_y_n31_420 = mesh_y_n31_420 + 1) {
    for (mesh_z_n31_421 = 0; mesh_z_n31_421 < 1; mesh_z_n31_421 = mesh_z_n31_421 + 1) {
      Copy_ciph(&_preg_268435543, &_preg_268435542);
      _preg_268435678 = Rotate(_preg_268435543, -10816);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&input_dup_n63_422, &_preg_268435543, &_preg_268435678);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&input_dup_n63_422._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&input_dup_n63_422._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435543._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435678._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&input_dup_n63_422._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435543._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435678._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      for (bs_input_n63_423 = 0; bs_input_n63_423 < 1; bs_input_n63_423 = bs_input_n63_423 + 1) {
        _preg_268435679 = Rotate(input_dup_n63_422, _cst_343[bs_input_n63_423]);
        Copy_ciph(&input_block_n63_424[bs_input_n63_423], &_preg_268435679);
        Free_poly_data(&_preg_268435679._c1_poly);
        Free_poly_data(&_preg_268435679._c0_poly);
      }
      for (mesh_x_n31_425 = 0; mesh_x_n31_425 < 2; mesh_x_n31_425 = mesh_x_n31_425 + 1) {
        // BlockingRot replicate=2
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n64_426);
        for (num_grid_n64_427 = 0; num_grid_n64_427 < 64; num_grid_n64_427 = num_grid_n64_427 + 1) {
          Zero_ciph(&result_grid_n64_428);
          for (cap_block_n64_429 = 0; cap_block_n64_429 < 1; cap_block_n64_429 = cap_block_n64_429 + 1) {
            _ckks_gen_tmp_7307_525 = input_block_n63_424[cap_block_n64_429];
            Pt_from_msg_ofst(&_pgen_tmp_505_1070, 110/* cst_339 */, (((((mesh_x_n31_425 * 1) + mesh_y_n31_420) * 64) + (cap_block_n64_429 + (num_grid_n64_427 * 1)))) * (21632), 21632, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_506_1071, &_ckks_gen_tmp_7307_525, &_pgen_tmp_505_1070);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n64_428, &result_grid_n64_428, &_pgen_tmp_506_1071);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n64_428._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_506_1071._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_7307_525._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_505_1070._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_506_1071._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_7307_525._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_505_1070._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n64_428._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n64_428._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_506_1071._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n64_428._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n64_428._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_506_1071._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_508_1073, &result_grid_n64_428);
          Rescale(&_pgen_tmp_508_1073._c0_poly, &result_grid_n64_428._c0_poly);
          Rescale(&_pgen_tmp_508_1073._c1_poly, &result_grid_n64_428._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_509_1074, 111/* cst_344 */, (num_grid_n64_427) * (21632), 21632, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_507_1072, &_pgen_tmp_508_1073, &_pgen_tmp_509_1074);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_507_1072._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_507_1072._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_508_1073._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_509_1074._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_507_1072._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_508_1073._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_509_1074._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435680 = Rotate(_pgen_tmp_507_1072, -21632 + (num_grid_n64_427 * 169));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_511_1076, &result_grid_n64_428);
          Rescale(&_pgen_tmp_511_1076._c0_poly, &result_grid_n64_428._c0_poly);
          Rescale(&_pgen_tmp_511_1076._c1_poly, &result_grid_n64_428._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_512_1077, 112/* cst_345 */, (num_grid_n64_427) * (21632), 21632, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_510_1075, &_pgen_tmp_511_1076, &_pgen_tmp_512_1077);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_510_1075._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_510_1075._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_511_1076._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_512_1077._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_510_1075._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_511_1076._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_512_1077._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435681 = Rotate(_pgen_tmp_510_1075, num_grid_n64_427 * 169);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_513_1078, &_preg_268435680, &_preg_268435681);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n64_426, &result_n64_426, &_pgen_tmp_513_1078);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n64_426._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_513_1078._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435680._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435681._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_513_1078._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435680._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435681._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n64_426._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n64_426._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_513_1078._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n64_426._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n64_426._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_513_1078._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435680._c1_poly);
          Free_poly_data(&_preg_268435680._c0_poly);
          Free_poly_data(&_preg_268435681._c1_poly);
          Free_poly_data(&_preg_268435681._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_514_1079, 113 /* cst_342 */, 21632, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n64_426, &result_n64_426, &_pgen_tmp_514_1079);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n64_426._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n64_426._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n64_426._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_514_1079._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n64_426._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n64_426._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_516_1081 = VS_out_conv31_418[((mesh_x_n31_425 * 1) + mesh_z_n31_421)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_515_1080, &_pgen_tmp_516_1081, &result_n64_426);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_515_1080._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_515_1080._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_516_1081._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n64_426._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_515_1080._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_516_1081._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n64_426._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv31_418[((mesh_x_n31_425 * 1) + mesh_z_n31_421)], &_pgen_tmp_515_1080);
      }
      Free_poly_data(&_preg_268435678._c1_poly);
      Free_poly_data(&_preg_268435678._c0_poly);
    }
  }
  Free_poly_data(&_preg_268435543._c1_poly);
  Free_poly_data(&_preg_268435543._c0_poly);
  Free_poly_data(&input_dup_n63_422._c1_poly);
  Free_poly_data(&input_dup_n63_422._c0_poly);
  Free_ciph_poly(input_block_n63_424, 1);
  Free_poly_data(&_pgen_tmp_505_1070._poly);
  Free_poly_data(&_pgen_tmp_506_1071._c1_poly);
  Free_poly_data(&_pgen_tmp_506_1071._c0_poly);
  Free_poly_data(&_pgen_tmp_509_1074._poly);
  Free_poly_data(&_pgen_tmp_508_1073._c1_poly);
  Free_poly_data(&_pgen_tmp_508_1073._c0_poly);
  Free_poly_data(&_pgen_tmp_507_1072._c1_poly);
  Free_poly_data(&_pgen_tmp_507_1072._c0_poly);
  Free_poly_data(&result_grid_n64_428._c1_poly);
  Free_poly_data(&result_grid_n64_428._c0_poly);
  Free_poly_data(&_pgen_tmp_512_1077._poly);
  Free_poly_data(&_pgen_tmp_511_1076._c1_poly);
  Free_poly_data(&_pgen_tmp_511_1076._c0_poly);
  Free_poly_data(&_pgen_tmp_510_1075._c1_poly);
  Free_poly_data(&_pgen_tmp_510_1075._c0_poly);
  Free_poly_data(&_pgen_tmp_513_1078._c1_poly);
  Free_poly_data(&_pgen_tmp_513_1078._c0_poly);
  Free_poly_data(&_pgen_tmp_514_1079._poly);
  Free_poly_data(&result_n64_426._c1_poly);
  Free_poly_data(&result_n64_426._c0_poly);
  Free_poly_data(&_pgen_tmp_515_1080._c1_poly);
  Free_poly_data(&_pgen_tmp_515_1080._c0_poly);
  for (rescale_iv_558 = 0; rescale_iv_558 < 2; rescale_iv_558 = rescale_iv_558 + 1) {
    _pgen_tmp_517_1082 = VS_out_conv31_418[rescale_iv_558];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_518_1083, &_pgen_tmp_517_1082);
    Rescale(&_pgen_tmp_518_1083._c0_poly, &_pgen_tmp_517_1082._c0_poly);
    Rescale(&_pgen_tmp_518_1083._c1_poly, &_pgen_tmp_517_1082._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv31_418[rescale_iv_558], &_pgen_tmp_518_1083);
  }
  Free_poly_data(&_pgen_tmp_518_1083._c1_poly);
  Free_poly_data(&_pgen_tmp_518_1083._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 91
  // Conv_56
  // pragma: 65536, 1027, 92
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv32_430, 0, sizeof(VS_out_conv32_430));
  memset(&VS_out_conv_halo32_431, 0, sizeof(VS_out_conv_halo32_431));
  Free_ciph_poly(VS_out_conv_halo32_431, 2);
  for (mesh_y_n32_432 = 0; mesh_y_n32_432 < 1; mesh_y_n32_432 = mesh_y_n32_432 + 1) {
    for (mesh_z_n32_433 = 0; mesh_z_n32_433 < 1; mesh_z_n32_433 = mesh_z_n32_433 + 1) {
      Copy_ciph(&_preg_268435544, &_preg_268435542);
      _preg_268435682 = Rotate(_preg_268435544, -10816);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&input_dup_n64_434, &_preg_268435544, &_preg_268435682);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&input_dup_n64_434._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&input_dup_n64_434._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435544._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435682._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&input_dup_n64_434._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435544._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435682._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      for (bs_input_n64_435 = 0; bs_input_n64_435 < 9; bs_input_n64_435 = bs_input_n64_435 + 1) {
        _preg_268435683 = Rotate(input_dup_n64_434, _cst_350[bs_input_n64_435]);
        Copy_ciph(&input_block_n64_436[bs_input_n64_435], &_preg_268435683);
        Free_poly_data(&_preg_268435683._c1_poly);
        Free_poly_data(&_preg_268435683._c0_poly);
      }
      for (mesh_x_n32_437 = 0; mesh_x_n32_437 < 2; mesh_x_n32_437 = mesh_x_n32_437 + 1) {
        // BlockingRot replicate=2
        // BlockingRot HRot=bs=9
        Zero_ciph(&result_n65_438);
        for (num_grid_n65_439 = 0; num_grid_n65_439 < 64; num_grid_n65_439 = num_grid_n65_439 + 1) {
          Zero_ciph(&result_grid_n65_440);
          for (cap_block_n65_441 = 0; cap_block_n65_441 < 9; cap_block_n65_441 = cap_block_n65_441 + 1) {
            _ckks_gen_tmp_7502_526 = input_block_n64_436[cap_block_n65_441];
            Pt_from_msg_ofst(&_pgen_tmp_519_1084, 114/* cst_346 */, (((((mesh_x_n32_437 * 1) + mesh_y_n32_432) * 576) + (cap_block_n65_441 + (num_grid_n65_439 * 9)))) * (21632), 21632, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_520_1085, &_ckks_gen_tmp_7502_526, &_pgen_tmp_519_1084);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n65_440, &result_grid_n65_440, &_pgen_tmp_520_1085);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n65_440._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_520_1085._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_7502_526._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_519_1084._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_520_1085._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_7502_526._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_519_1084._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n65_440._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n65_440._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_520_1085._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n65_440._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n65_440._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_520_1085._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_522_1087, &result_grid_n65_440);
          Rescale(&_pgen_tmp_522_1087._c0_poly, &result_grid_n65_440._c0_poly);
          Rescale(&_pgen_tmp_522_1087._c1_poly, &result_grid_n65_440._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_523_1088, 115/* cst_351 */, (num_grid_n65_439) * (21632), 21632, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_521_1086, &_pgen_tmp_522_1087, &_pgen_tmp_523_1088);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_521_1086._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_521_1086._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_522_1087._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_523_1088._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_521_1086._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_522_1087._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_523_1088._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435684 = Rotate(_pgen_tmp_521_1086, -21632 + (num_grid_n65_439 * 169));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_525_1090, &result_grid_n65_440);
          Rescale(&_pgen_tmp_525_1090._c0_poly, &result_grid_n65_440._c0_poly);
          Rescale(&_pgen_tmp_525_1090._c1_poly, &result_grid_n65_440._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_526_1091, 116/* cst_352 */, (num_grid_n65_439) * (21632), 21632, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_524_1089, &_pgen_tmp_525_1090, &_pgen_tmp_526_1091);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_524_1089._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_524_1089._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_525_1090._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_526_1091._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_524_1089._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_525_1090._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_526_1091._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435685 = Rotate(_pgen_tmp_524_1089, num_grid_n65_439 * 169);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_527_1092, &_preg_268435684, &_preg_268435685);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n65_438, &result_n65_438, &_pgen_tmp_527_1092);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n65_438._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_527_1092._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435684._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435685._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_527_1092._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435684._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435685._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n65_438._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n65_438._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_527_1092._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n65_438._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n65_438._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_527_1092._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435684._c1_poly);
          Free_poly_data(&_preg_268435684._c0_poly);
          Free_poly_data(&_preg_268435685._c1_poly);
          Free_poly_data(&_preg_268435685._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_528_1093, 117 /* cst_349 */, 21632, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n65_438, &result_n65_438, &_pgen_tmp_528_1093);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n65_438._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n65_438._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n65_438._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_528_1093._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n65_438._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n65_438._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_530_1095 = VS_out_conv32_430[((mesh_x_n32_437 * 1) + mesh_z_n32_433)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_529_1094, &_pgen_tmp_530_1095, &result_n65_438);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_529_1094._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_529_1094._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_530_1095._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n65_438._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_529_1094._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_530_1095._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n65_438._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv32_430[((mesh_x_n32_437 * 1) + mesh_z_n32_433)], &_pgen_tmp_529_1094);
      }
      Free_poly_data(&_preg_268435682._c1_poly);
      Free_poly_data(&_preg_268435682._c0_poly);
    }
  }
  Free_poly_data(&_preg_268435542._c1_poly);
  Free_poly_data(&_preg_268435542._c0_poly);
  Free_poly_data(&_preg_268435544._c1_poly);
  Free_poly_data(&_preg_268435544._c0_poly);
  Free_poly_data(&input_dup_n64_434._c1_poly);
  Free_poly_data(&input_dup_n64_434._c0_poly);
  Free_ciph_poly(input_block_n64_436, 9);
  Free_poly_data(&_pgen_tmp_519_1084._poly);
  Free_poly_data(&_pgen_tmp_520_1085._c1_poly);
  Free_poly_data(&_pgen_tmp_520_1085._c0_poly);
  Free_poly_data(&_pgen_tmp_523_1088._poly);
  Free_poly_data(&_pgen_tmp_522_1087._c1_poly);
  Free_poly_data(&_pgen_tmp_522_1087._c0_poly);
  Free_poly_data(&_pgen_tmp_521_1086._c1_poly);
  Free_poly_data(&_pgen_tmp_521_1086._c0_poly);
  Free_poly_data(&result_grid_n65_440._c1_poly);
  Free_poly_data(&result_grid_n65_440._c0_poly);
  Free_poly_data(&_pgen_tmp_526_1091._poly);
  Free_poly_data(&_pgen_tmp_525_1090._c1_poly);
  Free_poly_data(&_pgen_tmp_525_1090._c0_poly);
  Free_poly_data(&_pgen_tmp_524_1089._c1_poly);
  Free_poly_data(&_pgen_tmp_524_1089._c0_poly);
  Free_poly_data(&_pgen_tmp_527_1092._c1_poly);
  Free_poly_data(&_pgen_tmp_527_1092._c0_poly);
  Free_poly_data(&_pgen_tmp_528_1093._poly);
  Free_poly_data(&result_n65_438._c1_poly);
  Free_poly_data(&result_n65_438._c0_poly);
  Free_poly_data(&_pgen_tmp_529_1094._c1_poly);
  Free_poly_data(&_pgen_tmp_529_1094._c0_poly);
  for (rescale_iv_559 = 0; rescale_iv_559 < 2; rescale_iv_559 = rescale_iv_559 + 1) {
    _pgen_tmp_531_1096 = VS_out_conv32_430[rescale_iv_559];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_532_1097, &_pgen_tmp_531_1096);
    Rescale(&_pgen_tmp_532_1097._c0_poly, &_pgen_tmp_531_1096._c0_poly);
    Rescale(&_pgen_tmp_532_1097._c1_poly, &_pgen_tmp_531_1096._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv32_430[rescale_iv_559], &_pgen_tmp_532_1097);
  }
  Free_poly_data(&_pgen_tmp_532_1097._c1_poly);
  Free_poly_data(&_pgen_tmp_532_1097._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 92
  // Concat_57
  // pragma: 65536, 1045, 93
  CMPLR_TM_START(4, 0);
  for (concat_op0_n33_442 = 0; concat_op0_n33_442 < 2; concat_op0_n33_442 = concat_op0_n33_442 + 1) {
    _pgen_tmp_533_1098 = VS_out_conv31_418[concat_op0_n33_442];
    Copy_ciph(&VS_out_cocat33_443[(concat_op0_n33_442 + 0)], &_pgen_tmp_533_1098);
  }
  Free_ciph_poly(VS_out_conv31_418, 2);
  for (concat_op1_n33_444 = 0; concat_op1_n33_444 < 2; concat_op1_n33_444 = concat_op1_n33_444 + 1) {
    _pgen_tmp_534_1099 = VS_out_conv32_430[concat_op1_n33_444];
    Copy_ciph(&VS_out_cocat33_443[(concat_op1_n33_444 + 2)], &_pgen_tmp_534_1099);
  }
  Free_ciph_poly(VS_out_conv32_430, 2);
  CMPLR_TM_END(4, 0);
  // pragma: 65537, 1045, 93
  // Relu_58
  // pragma: 65536, 1033, 94
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu33_445, 0, sizeof(VS_out_relu33_445));
  for (mesh_y_n33_446 = 0; mesh_y_n33_446 < 4; mesh_y_n33_446 = mesh_y_n33_446 + 1) {
    for (mesh_z_n33_447 = 0; mesh_z_n33_447 < 1; mesh_z_n33_447 = mesh_z_n33_447 + 1) {
      _pgen_tmp_535_1100 = VS_out_cocat33_443[((mesh_y_n33_446 * 1) + mesh_z_n33_447)];
      Bootstrap(&_preg_268435545, &_pgen_tmp_535_1100, 15);
      Encode_float(&_pgen_tmp_536_1101, &_cst_429, 1, 1, Level(&_preg_268435545));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435547, &_preg_268435545, &_pgen_tmp_536_1101);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_preg_268435547._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_preg_268435547._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435545._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_536_1101._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_preg_268435547._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435545._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_536_1101._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_537_1102, &_preg_268435547);
      Rescale(&_pgen_tmp_537_1102._c0_poly, &_preg_268435547._c0_poly);
      Rescale(&_pgen_tmp_537_1102._c1_poly, &_preg_268435547._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435546 = App_relu(_preg_268435545, _pgen_tmp_537_1102, 21632);
      _pgen_tmp_539_1104 = VS_out_relu33_445[((mesh_y_n33_446 * 1) + mesh_z_n33_447)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_538_1103, &_pgen_tmp_539_1104, &_preg_268435546);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_pgen_tmp_538_1103._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_538_1103._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_539_1104._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435546._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_538_1103._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_539_1104._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435546._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu33_445[((mesh_y_n33_446 * 1) + mesh_z_n33_447)], &_pgen_tmp_538_1103);
    }
  }
  Free_ciph_poly(VS_out_cocat33_443, 4);
  Free_poly_data(&_pgen_tmp_536_1101._poly);
  Free_poly_data(&_preg_268435547._c1_poly);
  Free_poly_data(&_preg_268435547._c0_poly);
  Free_poly_data(&_pgen_tmp_537_1102._c1_poly);
  Free_poly_data(&_pgen_tmp_537_1102._c0_poly);
  Free_poly_data(&_preg_268435545._c1_poly);
  Free_poly_data(&_preg_268435545._c0_poly);
  Free_poly_data(&_preg_268435546._c1_poly);
  Free_poly_data(&_preg_268435546._c0_poly);
  Free_poly_data(&_pgen_tmp_538_1103._c1_poly);
  Free_poly_data(&_pgen_tmp_538_1103._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 94
  // Conv_59
  // pragma: 65536, 1027, 95
  CMPLR_TM_START(5, 0);
  memset(&VS_out_conv34_448, 0, sizeof(VS_out_conv34_448));
  memset(&VS_out_conv_halo34_449, 0, sizeof(VS_out_conv_halo34_449));
  Free_ciph_poly(VS_out_conv_halo34_449, 4);
  for (mesh_y_n34_450 = 0; mesh_y_n34_450 < 4; mesh_y_n34_450 = mesh_y_n34_450 + 1) {
    for (mesh_z_n34_451 = 0; mesh_z_n34_451 < 1; mesh_z_n34_451 = mesh_z_n34_451 + 1) {
      Copy_ciph(&_preg_268435548, &VS_out_relu33_445[((mesh_y_n34_450 * 1) + mesh_z_n34_451)]);
      Copy_ciph(&input_dup_n65_452, &_preg_268435548);
      for (bs_input_n65_453 = 0; bs_input_n65_453 < 1; bs_input_n65_453 = bs_input_n65_453 + 1) {
        _preg_268435686 = Rotate(input_dup_n65_452, _cst_357[bs_input_n65_453]);
        Copy_ciph(&input_block_n65_454[bs_input_n65_453], &_preg_268435686);
        Free_poly_data(&_preg_268435686._c1_poly);
        Free_poly_data(&_preg_268435686._c0_poly);
      }
      for (mesh_x_n34_455 = 0; mesh_x_n34_455 < 4; mesh_x_n34_455 = mesh_x_n34_455 + 1) {
        // BlockingRot replicate=1
        // BlockingRot HRot=bs=1
        Zero_ciph(&result_n66_456);
        for (num_grid_n66_457 = 0; num_grid_n66_457 < 128; num_grid_n66_457 = num_grid_n66_457 + 1) {
          Zero_ciph(&result_grid_n66_458);
          for (cap_block_n66_459 = 0; cap_block_n66_459 < 1; cap_block_n66_459 = cap_block_n66_459 + 1) {
            _ckks_gen_tmp_7816_527 = input_block_n65_454[cap_block_n66_459];
            Pt_from_msg_ofst(&_pgen_tmp_540_1105, 118/* cst_353 */, (((((mesh_x_n34_455 * 4) + mesh_y_n34_450) * 128) + (cap_block_n66_459 + (num_grid_n66_457 * 1)))) * (21632), 21632, 1, 3);
            CMPLR_TM_START(17, 0);
            Init_ciph_up_scale_plain(&_pgen_tmp_541_1106, &_ckks_gen_tmp_7816_527, &_pgen_tmp_540_1105);
            CMPLR_TM_END(17, 0);
            CMPLR_TM_START(12, 0);
            Init_ciph_same_scale(&result_grid_n66_458, &result_grid_n66_458, &_pgen_tmp_541_1106);
            _pgen_modulus_562 = Q_modulus();
            _pgen_num_q_563 = Poly_level(&result_grid_n66_458._c0_poly);
            for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
              Hw_modmul(Coeffs(&_pgen_tmp_541_1106._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_7816_527._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_540_1105._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modmul(Coeffs(&_pgen_tmp_541_1106._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_7816_527._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_540_1105._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n66_458._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n66_458._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_541_1106._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              Hw_modadd(Coeffs(&result_grid_n66_458._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_grid_n66_458._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_541_1106._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
              _pgen_modulus_562 = _pgen_modulus_562 + 1;
            }
            CMPLR_TM_END(12, 0);
          }
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_543_1108, &result_grid_n66_458);
          Rescale(&_pgen_tmp_543_1108._c0_poly, &result_grid_n66_458._c0_poly);
          Rescale(&_pgen_tmp_543_1108._c1_poly, &result_grid_n66_458._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_544_1109, 119/* cst_358 */, (num_grid_n66_457) * (21632), 21632, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_542_1107, &_pgen_tmp_543_1108, &_pgen_tmp_544_1109);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_542_1107._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_542_1107._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_543_1108._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_544_1109._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_542_1107._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_543_1108._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_544_1109._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435687 = Rotate(_pgen_tmp_542_1107, -21632 + (num_grid_n66_457 * 169));
          CMPLR_TM_START(19, 0);
          Init_ciph_down_scale(&_pgen_tmp_546_1111, &result_grid_n66_458);
          Rescale(&_pgen_tmp_546_1111._c0_poly, &result_grid_n66_458._c0_poly);
          Rescale(&_pgen_tmp_546_1111._c1_poly, &result_grid_n66_458._c1_poly);
          CMPLR_TM_END(19, 0);
          Pt_from_msg_ofst(&_pgen_tmp_547_1112, 120/* cst_359 */, (num_grid_n66_457) * (21632), 21632, 1, 2);
          CMPLR_TM_START(17, 0);
          Init_ciph_up_scale_plain(&_pgen_tmp_545_1110, &_pgen_tmp_546_1111, &_pgen_tmp_547_1112);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&_pgen_tmp_545_1110._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modmul(Coeffs(&_pgen_tmp_545_1110._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_546_1111._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_547_1112._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modmul(Coeffs(&_pgen_tmp_545_1110._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_546_1111._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_547_1112._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(17, 0);
          _preg_268435688 = Rotate(_pgen_tmp_545_1110, num_grid_n66_457 * 169);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&_pgen_tmp_548_1113, &_preg_268435687, &_preg_268435688);
          CMPLR_TM_END(12, 0);
          CMPLR_TM_START(12, 0);
          Init_ciph_same_scale(&result_n66_456, &result_n66_456, &_pgen_tmp_548_1113);
          _pgen_modulus_562 = Q_modulus();
          _pgen_num_q_563 = Poly_level(&result_n66_456._c0_poly);
          for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
            Hw_modadd(Coeffs(&_pgen_tmp_548_1113._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435687._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435688._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&_pgen_tmp_548_1113._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435687._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435688._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n66_456._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n66_456._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_548_1113._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            Hw_modadd(Coeffs(&result_n66_456._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n66_456._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_548_1113._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
            _pgen_modulus_562 = _pgen_modulus_562 + 1;
          }
          CMPLR_TM_END(12, 0);
          Free_poly_data(&_preg_268435687._c1_poly);
          Free_poly_data(&_preg_268435687._c0_poly);
          Free_poly_data(&_preg_268435688._c1_poly);
          Free_poly_data(&_preg_268435688._c0_poly);
        }
        Pt_from_msg(&_pgen_tmp_549_1114, 121 /* cst_356 */, 21632, 2, 2);
        CMPLR_TM_START(13, 0);
        Init_ciph_same_scale_plain(&result_n66_456, &result_n66_456, &_pgen_tmp_549_1114);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&result_n66_456._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&result_n66_456._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n66_456._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_549_1114._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Set_coeffs(&result_n66_456._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&result_n66_456._c1_poly, _pgen_rns_idx_564, degree));
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(13, 0);
        _pgen_tmp_551_1116 = VS_out_conv34_448[((mesh_x_n34_455 * 1) + mesh_z_n34_451)];
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_pgen_tmp_550_1115, &_pgen_tmp_551_1116, &result_n66_456);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_pgen_tmp_550_1115._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_pgen_tmp_550_1115._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_551_1116._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n66_456._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_pgen_tmp_550_1115._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_551_1116._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&result_n66_456._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Copy_ciph(&VS_out_conv34_448[((mesh_x_n34_455 * 1) + mesh_z_n34_451)], &_pgen_tmp_550_1115);
      }
    }
  }
  Free_ciph_poly(VS_out_relu33_445, 4);
  Free_poly_data(&_preg_268435548._c1_poly);
  Free_poly_data(&_preg_268435548._c0_poly);
  Free_poly_data(&input_dup_n65_452._c1_poly);
  Free_poly_data(&input_dup_n65_452._c0_poly);
  Free_ciph_poly(input_block_n65_454, 1);
  Free_poly_data(&_pgen_tmp_540_1105._poly);
  Free_poly_data(&_pgen_tmp_541_1106._c1_poly);
  Free_poly_data(&_pgen_tmp_541_1106._c0_poly);
  Free_poly_data(&_pgen_tmp_544_1109._poly);
  Free_poly_data(&_pgen_tmp_543_1108._c1_poly);
  Free_poly_data(&_pgen_tmp_543_1108._c0_poly);
  Free_poly_data(&_pgen_tmp_542_1107._c1_poly);
  Free_poly_data(&_pgen_tmp_542_1107._c0_poly);
  Free_poly_data(&result_grid_n66_458._c1_poly);
  Free_poly_data(&result_grid_n66_458._c0_poly);
  Free_poly_data(&_pgen_tmp_547_1112._poly);
  Free_poly_data(&_pgen_tmp_546_1111._c1_poly);
  Free_poly_data(&_pgen_tmp_546_1111._c0_poly);
  Free_poly_data(&_pgen_tmp_545_1110._c1_poly);
  Free_poly_data(&_pgen_tmp_545_1110._c0_poly);
  Free_poly_data(&_pgen_tmp_548_1113._c1_poly);
  Free_poly_data(&_pgen_tmp_548_1113._c0_poly);
  Free_poly_data(&_pgen_tmp_549_1114._poly);
  Free_poly_data(&result_n66_456._c1_poly);
  Free_poly_data(&result_n66_456._c0_poly);
  Free_poly_data(&_pgen_tmp_550_1115._c1_poly);
  Free_poly_data(&_pgen_tmp_550_1115._c0_poly);
  for (rescale_iv_560 = 0; rescale_iv_560 < 4; rescale_iv_560 = rescale_iv_560 + 1) {
    _pgen_tmp_552_1117 = VS_out_conv34_448[rescale_iv_560];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_553_1118, &_pgen_tmp_552_1117);
    Rescale(&_pgen_tmp_553_1118._c0_poly, &_pgen_tmp_552_1117._c0_poly);
    Rescale(&_pgen_tmp_553_1118._c1_poly, &_pgen_tmp_552_1117._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_conv34_448[rescale_iv_560], &_pgen_tmp_553_1118);
  }
  Free_poly_data(&_pgen_tmp_553_1118._c1_poly);
  Free_poly_data(&_pgen_tmp_553_1118._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 95
  // Relu_60
  // pragma: 65536, 1033, 96
  CMPLR_TM_START(10, 0);
  memset(&VS_out_relu34_460, 0, sizeof(VS_out_relu34_460));
  for (mesh_y_n34_461 = 0; mesh_y_n34_461 < 4; mesh_y_n34_461 = mesh_y_n34_461 + 1) {
    for (mesh_z_n34_462 = 0; mesh_z_n34_462 < 1; mesh_z_n34_462 = mesh_z_n34_462 + 1) {
      _pgen_tmp_554_1119 = VS_out_conv34_448[((mesh_y_n34_461 * 1) + mesh_z_n34_462)];
      Bootstrap(&_preg_268435549, &_pgen_tmp_554_1119, 18);
      Encode_float(&_pgen_tmp_555_1120, &_cst_430, 1, 1, Level(&_preg_268435549));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_preg_268435551, &_preg_268435549, &_pgen_tmp_555_1120);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_preg_268435551._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_preg_268435551._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435549._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_555_1120._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_preg_268435551._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435549._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_555_1120._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_556_1121, &_preg_268435551);
      Rescale(&_pgen_tmp_556_1121._c0_poly, &_preg_268435551._c0_poly);
      Rescale(&_pgen_tmp_556_1121._c1_poly, &_preg_268435551._c1_poly);
      CMPLR_TM_END(19, 0);
      _preg_268435550 = App_relu(_preg_268435549, _pgen_tmp_556_1121, 21632);
      _pgen_tmp_558_1123 = VS_out_relu34_460[((mesh_y_n34_461 * 1) + mesh_z_n34_462)];
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&_pgen_tmp_557_1122, &_pgen_tmp_558_1123, &_preg_268435550);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&_pgen_tmp_557_1122._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modadd(Coeffs(&_pgen_tmp_557_1122._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_558_1123._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435550._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&_pgen_tmp_557_1122._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_558_1123._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435550._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
      Copy_ciph(&VS_out_relu34_460[((mesh_y_n34_461 * 1) + mesh_z_n34_462)], &_pgen_tmp_557_1122);
    }
  }
  Free_ciph_poly(VS_out_conv34_448, 4);
  Free_poly_data(&_pgen_tmp_555_1120._poly);
  Free_poly_data(&_preg_268435551._c1_poly);
  Free_poly_data(&_preg_268435551._c0_poly);
  Free_poly_data(&_pgen_tmp_556_1121._c1_poly);
  Free_poly_data(&_pgen_tmp_556_1121._c0_poly);
  Free_poly_data(&_preg_268435549._c1_poly);
  Free_poly_data(&_preg_268435549._c0_poly);
  Free_poly_data(&_preg_268435550._c1_poly);
  Free_poly_data(&_preg_268435550._c0_poly);
  Free_poly_data(&_pgen_tmp_557_1122._c1_poly);
  Free_poly_data(&_pgen_tmp_557_1122._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 96
  // GlobalAveragePool_61
  // pragma: 65536, 1030, 97
  CMPLR_TM_START(8, 0);
  memset(&VS_out_gap34_463, 0, sizeof(VS_out_gap34_463));
  for (mesh_y_n34_464 = 0; mesh_y_n34_464 < 3; mesh_y_n34_464 = mesh_y_n34_464 + 1) {
    for (mesh_z_n34_465 = 0; mesh_z_n34_465 < 1; mesh_z_n34_465 = mesh_z_n34_465 + 1) {
      Copy_ciph(&_preg_268435552, &VS_out_relu34_460[((mesh_y_n34_464 * 1) + mesh_z_n34_465)]);
      for (gap_sum_index_n66_466 = 0; gap_sum_index_n66_466 < 7; gap_sum_index_n66_466 = gap_sum_index_n66_466 + 1) {
        _preg_268435689 = Rotate(_preg_268435552, 1 << gap_sum_index_n66_466);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&_preg_268435552, &_preg_268435552, &_preg_268435689);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&_preg_268435552._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&_preg_268435552._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435552._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435689._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&_preg_268435552._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435552._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435689._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435689._c1_poly);
        Free_poly_data(&_preg_268435689._c0_poly);
      }
      Encode_float(&_pgen_tmp_559_1124, &_cst_360, 1, 1, Level(&_preg_268435552));
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&gap_result66_467, &_preg_268435552, &_pgen_tmp_559_1124);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&gap_result66_467._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&gap_result66_467._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435552._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_559_1124._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&gap_result66_467._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435552._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_559_1124._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      Copy_ciph(&_preg_268435553, &gap_result66_467);
      Copy_ciph(&orig_result66_468, &_preg_268435553);
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_560_1125, &orig_result66_468);
      Rescale(&_pgen_tmp_560_1125._c0_poly, &orig_result66_468._c0_poly);
      Rescale(&_pgen_tmp_560_1125._c1_poly, &orig_result66_468._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg(&_pgen_tmp_561_1126, 122 /* cst_361 */, 21632, 1, 5);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&orig_result66_468, &_pgen_tmp_560_1125, &_pgen_tmp_561_1126);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&orig_result66_468._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&orig_result66_468._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_560_1125._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_561_1126._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&orig_result66_468._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_560_1125._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_561_1126._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      Zero_ciph(&ss_result67_469);
      for (comb_cc_index_n67_470 = 0; comb_cc_index_n67_470 < 7; comb_cc_index_n67_470 = comb_cc_index_n67_470 + 1) {
        _preg_268435690 = Rotate(orig_result66_468, (1 << comb_cc_index_n67_470) * 168);
        CMPLR_TM_START(12, 0);
        Init_ciph_same_scale(&orig_result66_468, &orig_result66_468, &_preg_268435690);
        _pgen_modulus_562 = Q_modulus();
        _pgen_num_q_563 = Poly_level(&orig_result66_468._c0_poly);
        for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
          Hw_modadd(Coeffs(&orig_result66_468._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&orig_result66_468._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435690._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          Hw_modadd(Coeffs(&orig_result66_468._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&orig_result66_468._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435690._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
          _pgen_modulus_562 = _pgen_modulus_562 + 1;
        }
        CMPLR_TM_END(12, 0);
        Free_poly_data(&_preg_268435690._c1_poly);
        Free_poly_data(&_preg_268435690._c0_poly);
      }
      CMPLR_TM_START(19, 0);
      Init_ciph_down_scale(&_pgen_tmp_562_1127, &orig_result66_468);
      Rescale(&_pgen_tmp_562_1127._c0_poly, &orig_result66_468._c0_poly);
      Rescale(&_pgen_tmp_562_1127._c1_poly, &orig_result66_468._c1_poly);
      CMPLR_TM_END(19, 0);
      Pt_from_msg(&_pgen_tmp_563_1128, 123 /* cst_362 */, 128, 1, 4);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&orig_result66_468, &_pgen_tmp_562_1127, &_pgen_tmp_563_1128);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&orig_result66_468._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&orig_result66_468._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_562_1127._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_563_1128._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&orig_result66_468._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_562_1127._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_563_1128._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(17, 0);
      Copy_ciph(&ss_result67_469, &orig_result66_468);
      Copy_ciph(&VS_out_gap34_463[((mesh_y_n34_464 * 1) + mesh_z_n34_465)], &ss_result67_469);
    }
  }
  Free_ciph_poly(VS_out_relu34_460, 4);
  Free_poly_data(&_pgen_tmp_559_1124._poly);
  Free_poly_data(&_preg_268435552._c1_poly);
  Free_poly_data(&_preg_268435552._c0_poly);
  Free_poly_data(&gap_result66_467._c1_poly);
  Free_poly_data(&gap_result66_467._c0_poly);
  Free_poly_data(&_preg_268435553._c1_poly);
  Free_poly_data(&_preg_268435553._c0_poly);
  Free_poly_data(&_pgen_tmp_561_1126._poly);
  Free_poly_data(&_pgen_tmp_560_1125._c1_poly);
  Free_poly_data(&_pgen_tmp_560_1125._c0_poly);
  Free_poly_data(&_pgen_tmp_563_1128._poly);
  Free_poly_data(&_pgen_tmp_562_1127._c1_poly);
  Free_poly_data(&_pgen_tmp_562_1127._c0_poly);
  Free_poly_data(&orig_result66_468._c1_poly);
  Free_poly_data(&orig_result66_468._c0_poly);
  Free_poly_data(&ss_result67_469._c1_poly);
  Free_poly_data(&ss_result67_469._c0_poly);
  for (rescale_iv_561 = 0; rescale_iv_561 < 3; rescale_iv_561 = rescale_iv_561 + 1) {
    _pgen_tmp_564_1129 = VS_out_gap34_463[rescale_iv_561];
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_565_1130, &_pgen_tmp_564_1129);
    Rescale(&_pgen_tmp_565_1130._c0_poly, &_pgen_tmp_564_1129._c0_poly);
    Rescale(&_pgen_tmp_565_1130._c1_poly, &_pgen_tmp_564_1129._c1_poly);
    CMPLR_TM_END(19, 0);
    Copy_ciph(&VS_out_gap34_463[rescale_iv_561], &_pgen_tmp_565_1130);
  }
  Free_poly_data(&_pgen_tmp_565_1130._c1_poly);
  Free_poly_data(&_pgen_tmp_565_1130._c0_poly);
  _pgen_tmp_566_1131 = VS_out_gap34_463[0];
  _pgen_tmp_567_1132 = VS_out_gap34_463[1];
  _preg_268435691 = Rotate(_pgen_tmp_567_1132, -170);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_568_1133, &_pgen_tmp_566_1131, &_preg_268435691);
  CMPLR_TM_END(12, 0);
  _pgen_tmp_569_1134 = VS_out_gap34_463[2];
  _preg_268435692 = Rotate(_pgen_tmp_569_1134, -340);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435554, &_pgen_tmp_568_1133, &_preg_268435692);
  _pgen_modulus_562 = Q_modulus();
  _pgen_num_q_563 = Poly_level(&_preg_268435554._c0_poly);
  for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_568_1133._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_566_1131._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435691._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_568_1133._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_566_1131._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435691._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_preg_268435554._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_568_1133._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435692._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_preg_268435554._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_568_1133._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435692._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    _pgen_modulus_562 = _pgen_modulus_562 + 1;
  }
  Free_poly_data(&_preg_268435691._c1_poly);
  Free_poly_data(&_preg_268435691._c0_poly);
  Free_poly_data(&_preg_268435692._c1_poly);
  Free_poly_data(&_preg_268435692._c0_poly);
  Free_poly_data(&_pgen_tmp_568_1133._c1_poly);
  Free_poly_data(&_pgen_tmp_568_1133._c0_poly);
  CMPLR_TM_END(12, 0);
  Copy_ciph(&_preg_268435555, &_preg_268435554);
  Free_poly_data(&_preg_268435554._c1_poly);
  Free_poly_data(&_preg_268435554._c0_poly);
  CMPLR_TM_END(8, 0);
  // pragma: 65537, 1030, 97
  // Reshape_62
  // pragma: 65536, 1034, 98
  CMPLR_TM_START(6, 0);
  Copy_ciph(&_preg_268435556, &_preg_268435555);
  Free_poly_data(&_preg_268435555._c1_poly);
  Free_poly_data(&_preg_268435555._c0_poly);
  CMPLR_TM_END(6, 0);
  // pragma: 65537, 1034, 98
  // Gemm_63
  // pragma: 65536, 1029, 99
  CMPLR_TM_START(7, 0);
  // BlockingRot replicate=17
  _preg_268435693 = Rotate(_preg_268435556, -512);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_570_1135, &_preg_268435556, &_preg_268435693);
  CMPLR_TM_END(12, 0);
  _preg_268435694 = Rotate(_preg_268435556, -1024);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_571_1136, &_pgen_tmp_570_1135, &_preg_268435694);
  CMPLR_TM_END(12, 0);
  _preg_268435695 = Rotate(_preg_268435556, -1536);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_572_1137, &_pgen_tmp_571_1136, &_preg_268435695);
  CMPLR_TM_END(12, 0);
  _preg_268435696 = Rotate(_preg_268435556, -2048);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_573_1138, &_pgen_tmp_572_1137, &_preg_268435696);
  CMPLR_TM_END(12, 0);
  _preg_268435697 = Rotate(_preg_268435556, -2560);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_574_1139, &_pgen_tmp_573_1138, &_preg_268435697);
  CMPLR_TM_END(12, 0);
  _preg_268435698 = Rotate(_preg_268435556, -3072);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_575_1140, &_pgen_tmp_574_1139, &_preg_268435698);
  CMPLR_TM_END(12, 0);
  _preg_268435699 = Rotate(_preg_268435556, -3584);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_576_1141, &_pgen_tmp_575_1140, &_preg_268435699);
  CMPLR_TM_END(12, 0);
  _preg_268435700 = Rotate(_preg_268435556, -4096);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_577_1142, &_pgen_tmp_576_1141, &_preg_268435700);
  CMPLR_TM_END(12, 0);
  _preg_268435701 = Rotate(_preg_268435556, -4608);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_578_1143, &_pgen_tmp_577_1142, &_preg_268435701);
  CMPLR_TM_END(12, 0);
  _preg_268435702 = Rotate(_preg_268435556, -5120);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_579_1144, &_pgen_tmp_578_1143, &_preg_268435702);
  CMPLR_TM_END(12, 0);
  _preg_268435703 = Rotate(_preg_268435556, -5632);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_580_1145, &_pgen_tmp_579_1144, &_preg_268435703);
  CMPLR_TM_END(12, 0);
  _preg_268435704 = Rotate(_preg_268435556, -6144);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_581_1146, &_pgen_tmp_580_1145, &_preg_268435704);
  CMPLR_TM_END(12, 0);
  _preg_268435705 = Rotate(_preg_268435556, -6656);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_582_1147, &_pgen_tmp_581_1146, &_preg_268435705);
  CMPLR_TM_END(12, 0);
  _preg_268435706 = Rotate(_preg_268435556, -7168);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_583_1148, &_pgen_tmp_582_1147, &_preg_268435706);
  CMPLR_TM_END(12, 0);
  _preg_268435707 = Rotate(_preg_268435556, -7680);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_584_1149, &_pgen_tmp_583_1148, &_preg_268435707);
  CMPLR_TM_END(12, 0);
  _preg_268435708 = Rotate(_preg_268435556, -8192);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n67_471, &_pgen_tmp_584_1149, &_preg_268435708);
  _pgen_modulus_562 = Q_modulus();
  _pgen_num_q_563 = Poly_level(&input_dup_n67_471._c0_poly);
  for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_570_1135._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435556._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435693._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_570_1135._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435556._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435693._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_571_1136._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_570_1135._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435694._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_571_1136._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_570_1135._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435694._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_572_1137._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_571_1136._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435695._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_572_1137._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_571_1136._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435695._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_573_1138._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_572_1137._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435696._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_573_1138._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_572_1137._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435696._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_574_1139._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_573_1138._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435697._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_574_1139._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_573_1138._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435697._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_575_1140._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_574_1139._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435698._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_575_1140._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_574_1139._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435698._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_576_1141._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_575_1140._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435699._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_576_1141._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_575_1140._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435699._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_577_1142._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_576_1141._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435700._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_577_1142._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_576_1141._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435700._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_578_1143._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_577_1142._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435701._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_578_1143._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_577_1142._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435701._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_579_1144._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_578_1143._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435702._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_579_1144._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_578_1143._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435702._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_580_1145._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_579_1144._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435703._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_580_1145._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_579_1144._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435703._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_581_1146._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_580_1145._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435704._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_581_1146._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_580_1145._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435704._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_582_1147._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_581_1146._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435705._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_582_1147._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_581_1146._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435705._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_583_1148._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_582_1147._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435706._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_583_1148._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_582_1147._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435706._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_584_1149._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_583_1148._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435707._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_584_1149._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_583_1148._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435707._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&input_dup_n67_471._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_584_1149._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435708._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modadd(Coeffs(&input_dup_n67_471._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_584_1149._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435708._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    _pgen_modulus_562 = _pgen_modulus_562 + 1;
  }
  Free_poly_data(&_preg_268435693._c1_poly);
  Free_poly_data(&_preg_268435693._c0_poly);
  Free_poly_data(&_preg_268435556._c1_poly);
  Free_poly_data(&_preg_268435556._c0_poly);
  Free_poly_data(&_preg_268435694._c1_poly);
  Free_poly_data(&_preg_268435694._c0_poly);
  Free_poly_data(&_pgen_tmp_570_1135._c1_poly);
  Free_poly_data(&_pgen_tmp_570_1135._c0_poly);
  Free_poly_data(&_preg_268435695._c1_poly);
  Free_poly_data(&_preg_268435695._c0_poly);
  Free_poly_data(&_pgen_tmp_571_1136._c1_poly);
  Free_poly_data(&_pgen_tmp_571_1136._c0_poly);
  Free_poly_data(&_preg_268435696._c1_poly);
  Free_poly_data(&_preg_268435696._c0_poly);
  Free_poly_data(&_pgen_tmp_572_1137._c1_poly);
  Free_poly_data(&_pgen_tmp_572_1137._c0_poly);
  Free_poly_data(&_preg_268435697._c1_poly);
  Free_poly_data(&_preg_268435697._c0_poly);
  Free_poly_data(&_pgen_tmp_573_1138._c1_poly);
  Free_poly_data(&_pgen_tmp_573_1138._c0_poly);
  Free_poly_data(&_preg_268435698._c1_poly);
  Free_poly_data(&_preg_268435698._c0_poly);
  Free_poly_data(&_pgen_tmp_574_1139._c1_poly);
  Free_poly_data(&_pgen_tmp_574_1139._c0_poly);
  Free_poly_data(&_preg_268435699._c1_poly);
  Free_poly_data(&_preg_268435699._c0_poly);
  Free_poly_data(&_pgen_tmp_575_1140._c1_poly);
  Free_poly_data(&_pgen_tmp_575_1140._c0_poly);
  Free_poly_data(&_preg_268435700._c1_poly);
  Free_poly_data(&_preg_268435700._c0_poly);
  Free_poly_data(&_pgen_tmp_576_1141._c1_poly);
  Free_poly_data(&_pgen_tmp_576_1141._c0_poly);
  Free_poly_data(&_preg_268435701._c1_poly);
  Free_poly_data(&_preg_268435701._c0_poly);
  Free_poly_data(&_pgen_tmp_577_1142._c1_poly);
  Free_poly_data(&_pgen_tmp_577_1142._c0_poly);
  Free_poly_data(&_preg_268435702._c1_poly);
  Free_poly_data(&_preg_268435702._c0_poly);
  Free_poly_data(&_pgen_tmp_578_1143._c1_poly);
  Free_poly_data(&_pgen_tmp_578_1143._c0_poly);
  Free_poly_data(&_preg_268435703._c1_poly);
  Free_poly_data(&_preg_268435703._c0_poly);
  Free_poly_data(&_pgen_tmp_579_1144._c1_poly);
  Free_poly_data(&_pgen_tmp_579_1144._c0_poly);
  Free_poly_data(&_preg_268435704._c1_poly);
  Free_poly_data(&_preg_268435704._c0_poly);
  Free_poly_data(&_pgen_tmp_580_1145._c1_poly);
  Free_poly_data(&_pgen_tmp_580_1145._c0_poly);
  Free_poly_data(&_preg_268435705._c1_poly);
  Free_poly_data(&_preg_268435705._c0_poly);
  Free_poly_data(&_pgen_tmp_581_1146._c1_poly);
  Free_poly_data(&_pgen_tmp_581_1146._c0_poly);
  Free_poly_data(&_preg_268435706._c1_poly);
  Free_poly_data(&_preg_268435706._c0_poly);
  Free_poly_data(&_pgen_tmp_582_1147._c1_poly);
  Free_poly_data(&_pgen_tmp_582_1147._c0_poly);
  Free_poly_data(&_preg_268435707._c1_poly);
  Free_poly_data(&_preg_268435707._c0_poly);
  Free_poly_data(&_pgen_tmp_583_1148._c1_poly);
  Free_poly_data(&_pgen_tmp_583_1148._c0_poly);
  Free_poly_data(&_preg_268435708._c1_poly);
  Free_poly_data(&_preg_268435708._c0_poly);
  Free_poly_data(&_pgen_tmp_584_1149._c1_poly);
  Free_poly_data(&_pgen_tmp_584_1149._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=8
  for (bs_input_n67_472 = 0; bs_input_n67_472 < 8; bs_input_n67_472 = bs_input_n67_472 + 1) {
    _preg_268435709 = Rotate(input_dup_n67_471, _cst_365[bs_input_n67_472]);
    Copy_ciph(&input_block_n67_473[bs_input_n67_472], &_preg_268435709);
    Free_poly_data(&_preg_268435709._c1_poly);
    Free_poly_data(&_preg_268435709._c0_poly);
  }
  Free_poly_data(&input_dup_n67_471._c1_poly);
  Free_poly_data(&input_dup_n67_471._c0_poly);
  Zero_ciph(&gemm_result_n68_474);
  // IMRA Metakernel: gs=8
  for (gs_n68_475 = 0; gs_n68_475 < 8; gs_n68_475 = gs_n68_475 + 1) {
    Zero_ciph(&block_result_476);
    for (bs_n68_477 = 0; bs_n68_477 < 8; bs_n68_477 = bs_n68_477 + 1) {
      _ckks_gen_tmp_8254_528 = input_block_n67_473[bs_n68_477];
      Pt_from_msg_ofst(&_pgen_tmp_585_1150, 124/* cst_364 */, ((bs_n68_477 + (gs_n68_475 * 8))) * (8704), 8704, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_586_1151, &_ckks_gen_tmp_8254_528, &_pgen_tmp_585_1150);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&block_result_476, &block_result_476, &_pgen_tmp_586_1151);
      _pgen_modulus_562 = Q_modulus();
      _pgen_num_q_563 = Poly_level(&block_result_476._c0_poly);
      for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_586_1151._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_8254_528._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_585_1150._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_586_1151._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_ckks_gen_tmp_8254_528._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_585_1150._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&block_result_476._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&block_result_476._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_586_1151._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        Hw_modadd(Coeffs(&block_result_476._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&block_result_476._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_586_1151._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
        _pgen_modulus_562 = _pgen_modulus_562 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435710 = Rotate(block_result_476, gs_n68_475 * 8);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&gemm_result_n68_474, &gemm_result_n68_474, &_preg_268435710);
    _pgen_modulus_562 = Q_modulus();
    _pgen_num_q_563 = Poly_level(&gemm_result_n68_474._c0_poly);
    for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
      Hw_modadd(Coeffs(&gemm_result_n68_474._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&gemm_result_n68_474._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435710._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&gemm_result_n68_474._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&gemm_result_n68_474._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435710._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      _pgen_modulus_562 = _pgen_modulus_562 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435710._c1_poly);
    Free_poly_data(&_preg_268435710._c0_poly);
  }
  Free_ciph_poly(input_block_n67_473, 8);
  Free_poly_data(&_pgen_tmp_585_1150._poly);
  Free_poly_data(&_pgen_tmp_586_1151._c1_poly);
  Free_poly_data(&_pgen_tmp_586_1151._c0_poly);
  Free_poly_data(&block_result_476._c1_poly);
  Free_poly_data(&block_result_476._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&gemm_result_n68_474, &gemm_result_n68_474);
  Rescale(&gemm_result_n68_474._c0_poly, &gemm_result_n68_474._c0_poly);
  Rescale(&gemm_result_n68_474._c1_poly, &gemm_result_n68_474._c1_poly);
  CMPLR_TM_END(19, 0);
  // gemm result reduce->Ps=8
  Copy_ciph(&reduce_intra_478, &gemm_result_n68_474);
  for (ri_n68_479 = 1; ri_n68_479 < 8; ri_n68_479 = ri_n68_479 + 1) {
    _preg_268435711 = Rotate(gemm_result_n68_474, ri_n68_479 * 1088);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&reduce_intra_478, &reduce_intra_478, &_preg_268435711);
    _pgen_modulus_562 = Q_modulus();
    _pgen_num_q_563 = Poly_level(&reduce_intra_478._c0_poly);
    for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
      Hw_modadd(Coeffs(&reduce_intra_478._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&reduce_intra_478._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435711._c0_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      Hw_modadd(Coeffs(&reduce_intra_478._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&reduce_intra_478._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_preg_268435711._c1_poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
      _pgen_modulus_562 = _pgen_modulus_562 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435711._c1_poly);
    Free_poly_data(&_preg_268435711._c0_poly);
  }
  Free_poly_data(&gemm_result_n68_474._c1_poly);
  Free_poly_data(&gemm_result_n68_474._c0_poly);
  // gemm result reduce->(kp/np)=0
  // gemm add bias
  Pt_from_msg(&_pgen_tmp_587_1152, 125 /* cst_3 */, 1000, 1, 2);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&reduce_intra_478, &reduce_intra_478, &_pgen_tmp_587_1152);
  _pgen_modulus_562 = Q_modulus();
  _pgen_num_q_563 = Poly_level(&reduce_intra_478._c0_poly);
  for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
    Hw_modadd(Coeffs(&reduce_intra_478._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&reduce_intra_478._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_587_1152._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Set_coeffs(&reduce_intra_478._c1_poly, _pgen_rns_idx_564, degree, Coeffs(&reduce_intra_478._c1_poly, _pgen_rns_idx_564, degree));
    _pgen_modulus_562 = _pgen_modulus_562 + 1;
  }
  Free_poly_data(&_pgen_tmp_587_1152._poly);
  CMPLR_TM_END(13, 0);
  Pt_from_msg(&_pgen_tmp_589_1154, 126 /* cst_366 */, 1000, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_588_1153, &reduce_intra_478, &_pgen_tmp_589_1154);
  _pgen_modulus_562 = Q_modulus();
  _pgen_num_q_563 = Poly_level(&_pgen_tmp_588_1153._c0_poly);
  for (_pgen_rns_idx_564 = 0; _pgen_rns_idx_564 < _pgen_num_q_563; _pgen_rns_idx_564 = _pgen_rns_idx_564 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_588_1153._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&reduce_intra_478._c0_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_589_1154._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_588_1153._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&reduce_intra_478._c1_poly, _pgen_rns_idx_564, degree), Coeffs(&_pgen_tmp_589_1154._poly, _pgen_rns_idx_564, degree), _pgen_modulus_562, degree);
    _pgen_modulus_562 = _pgen_modulus_562 + 1;
  }
  Free_poly_data(&_pgen_tmp_589_1154._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&reduce_intra_478, &_pgen_tmp_588_1153);
  Rescale(&reduce_intra_478._c0_poly, &_pgen_tmp_588_1153._c0_poly);
  Rescale(&reduce_intra_478._c1_poly, &_pgen_tmp_588_1153._c1_poly);
  Free_poly_data(&_pgen_tmp_588_1153._c1_poly);
  Free_poly_data(&_pgen_tmp_588_1153._c0_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&output_480, &reduce_intra_478);
  Free_poly_data(&reduce_intra_478._c1_poly);
  Free_poly_data(&reduce_intra_478._c0_poly);
  CMPLR_TM_END(7, 0);
  // pragma: 65537, 1029, 99
  Set_output_data("output", 0, &output_480);
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
  Encode_float(&_pgen_tmp_5_35, &_cst_367, 1, Sc_degree(&_pgen_tmp_4_34), Level(&_pgen_tmp_4_34));
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
  Encode_float(&_pgen_tmp_11_41, &_cst_368, 1, Sc_degree(&_pgen_tmp_10_40), Level(&_pgen_tmp_10_40));
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
  Encode_float(&_pgen_tmp_43_73, &_cst_377, 1, Sc_degree(&_pgen_tmp_42_72), Level(&_pgen_tmp_42_72));
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
  Encode_float(&_pgen_tmp_50_80, &_cst_378, 1, 1, Level(&_relu_tmp58_7));
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
  Encode_float(&_pgen_tmp_57_87, &_cst_379, 1, Sc_degree(&_pgen_tmp_56_86), Level(&_pgen_tmp_56_86));
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
  Encode_float(&_pgen_tmp_63_93, &_cst_380, 1, Sc_degree(&_pgen_tmp_62_92), Level(&_pgen_tmp_62_92));
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
  Encode_double(&_pgen_tmp_81_111, &_cst_387, 1, 1, Level(&_relu_tmp80_11));
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
  Encode_double(&_pgen_tmp_93_123, &_cst_390, 1, 1, Level(&_relu_tmp80_11));
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
  Encode_double(&_pgen_tmp_103_133, &_cst_393, 1, 1, Level(&_relu_tmp80_11));
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
  Encode_float(&_pgen_tmp_115_145, &_cst_394, 1, Sc_degree(&_pgen_tmp_114_144), Level(&_pgen_tmp_114_144));
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
  Encode_float(&_pgen_tmp_122_152, &_cst_395, 1, 1, Level(&_relu_tmp155_16));
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
  Encode_float(&_pgen_tmp_129_159, &_cst_396, 1, Sc_degree(&_pgen_tmp_128_158), Level(&_pgen_tmp_128_158));
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
  Encode_float(&_pgen_tmp_135_165, &_cst_397, 1, Sc_degree(&_pgen_tmp_134_164), Level(&_pgen_tmp_134_164));
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
    LIB_ANT, 65536, 0, 33, 4, 60, 56, 3, 192, 547, 
    { -24200, -23328, -22599, -21870, -21632, -21463, -21294, -21175,
      -21141, -21125, -20956, -20787, -20618, -20449, -20412, -20280,
      -20111, -19942, -19773, -19683, -19604, -19435, -19266, -19097,
      -18954, -18928, -18759, -18590, -18421, -18252, -18225, -18150,
      -18083, -17914, -17745, -17576, -17496, -17407, -17238, -17069,
      -16900, -16767, -16731, -16562, -16393, -16224, -16055, -16038,
      -15886, -15717, -15548, -15379, -15309, -15210, -15125, -15041,
      -14872, -14703, -14580, -14534, -14365, -14196, -14027, -13858,
      -13851, -13689, -13520, -13351, -13182, -13122, -13013, -12844,
      -12675, -12544, -12506, -12393, -12337, -12168, -12100, -11999,
      -11830, -11664, -11661, -11492, -11323, -11154, -10985, -10935,
      -10816, -10647, -10478, -10309, -10206, -10140, -9971, -9802,
      -9633, -9477, -9464, -9295, -9126, -9075, -8957, -8788,
      -8748, -8619, -8450, -8281, -8192, -8112, -8019, -7943,
      -7774, -7680, -7605, -7436, -7290, -7267, -7168, -7098,
      -6929, -6760, -6656, -6591, -6561, -6422, -6272, -6253,
      -6144, -6084, -6050, -5915, -5832, -5746, -5632, -5577,
      -5408, -5239, -5120, -5103, -5070, -4901, -4732, -4608,
      -4563, -4394, -4374, -4225, -4096, -4056, -3887, -3718,
      -3645, -3584, -3549, -3380, -3211, -3072, -3042, -3025,
      -2916, -2873, -2704, -2560, -2535, -2366, -2197, -2187,
      -2048, -2028, -1859, -1690, -1536, -1521, -1458, -1352,
      -1183, -1024, -1014, -845, -729, -676, -675, -674,
      -673, -672, -671, -670, -669, -512, -507, -451,
      -450, -449, -448, -447, -446, -445, -340, -338,
      -227, -226, -225, -224, -223, -222, -221, -170,
      -169, -56, -55, -54, -28, -27, -26, -14,
      -13, -12, -3, -2, -1, 0, 1, 2,
      3, 4, 5, 6, 7, 8, 9, 10,
      11, 12, 13, 14, 15, 16, 17, 18,
      19, 20, 21, 22, 23, 24, 25, 26,
      27, 28, 30, 32, 34, 36, 38, 40,
      41, 42, 44, 46, 48, 50, 52, 54,
      55, 56, 58, 60, 62, 64, 66, 68,
      70, 72, 74, 76, 78, 80, 82, 83,
      84, 86, 88, 90, 92, 94, 96, 98,
      100, 102, 104, 106, 108, 110, 112, 123,
      164, 166, 168, 169, 205, 221, 222, 223,
      224, 225, 226, 227, 246, 249, 287, 328,
      332, 336, 338, 369, 410, 415, 445, 446,
      447, 448, 449, 450, 451, 492, 498, 507,
      560, 581, 664, 669, 670, 671, 672, 673,
      674, 675, 676, 729, 747, 830, 845, 913,
      996, 1014, 1079, 1088, 1120, 1162, 1183, 1245,
      1328, 1344, 1352, 1411, 1458, 1494, 1521, 1577,
      1660, 1690, 1743, 1826, 1859, 1909, 1992, 2016,
      2028, 2075, 2158, 2176, 2187, 2197, 2296, 2366,
      2535, 2688, 2704, 2873, 2916, 3025, 3042, 3211,
      3264, 3360, 3380, 3549, 3645, 3718, 3887, 4032,
      4056, 4225, 4352, 4374, 4394, 4563, 4592, 4704,
      4732, 4901, 5070, 5103, 5239, 5376, 5408, 5440,
      5577, 5746, 5832, 5915, 6048, 6050, 6084, 6253,
      6422, 6528, 6561, 6591, 6720, 6760, 6929, 7098,
      7267, 7290, 7392, 7436, 7605, 7616, 7774, 7943,
      8019, 8064, 8112, 8281, 8450, 8619, 8736, 8748,
      8788, 8957, 9075, 9126, 9295, 9408, 9464, 9477,
      9633, 9802, 9971, 10140, 10206, 10309, 10478, 10647,
      10752, 10816, 10935, 10985, 11154, 11323, 11492, 11661,
      11664, 11830, 11999, 12096, 12100, 12168, 12337, 12393,
      12506, 12675, 12844, 13013, 13122, 13182, 13351, 13440,
      13520, 13689, 13851, 13858, 14027, 14196, 14365, 14534,
      14580, 14703, 14784, 14872, 15041, 15125, 15210, 15309,
      15379, 15548, 15717, 15886, 16038, 16055, 16128, 16224,
      16393, 16562, 16731, 16767, 16900, 17069, 17238, 17407,
      17472, 17496, 17576, 17745, 17914, 18083, 18150, 18225,
      18252, 18421, 18590, 18759, 18928, 18954, 19097, 19266,
      19435, 19604, 19683, 19773, 19942, 20111, 20280, 20412,
      20449, 20618, 20787, 20956, 21125, 21141, 21175, 21294,
      21463, 21870, 22599 }
  };
  return &parm;
}

RT_DATA_INFO* Get_rt_data_info() {
  static RT_DATA_INFO info = {
    "/app/release/squeezenet_imagenet.0325.bin",
    "XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX",
    DE_MSG_F32
  };
  return &info;
}

int32_t _cst_164[49] = {
  -675, -674, -673, -672, -671, -670, -669, -451,
  -450, -449, -448, -447, -446, -445, -227, -226,
  -225, -224, -223, -222, -221, -3, -2, -1,
  0, 1, 2, 3, 221, 222, 223, 224,
  225, 226, 227, 445, 446, 447, 448, 449,
  450, 451, 669, 670, 671, 672, 673, 674,
  675
};
int32_t _cst_175[1] = {
  0
};
int32_t _cst_182[1] = {
  0
};
int32_t _cst_189[9] = {
  -56, -55, -54, -1, 0, 1, 54, 55,
  56
};
int32_t _cst_196[1] = {
  0
};
int32_t _cst_203[1] = {
  0
};
int32_t _cst_210[9] = {
  -56, -55, -54, -1, 0, 1, 54, 55,
  56
};
int32_t _cst_217[1] = {
  0
};
int32_t _cst_224[1] = {
  0
};
int32_t _cst_235[9] = {
  -56, -55, -54, -1, 0, 1, 54, 55,
  56
};
int32_t _cst_246[1] = {
  0
};
int32_t _cst_253[1] = {
  0
};
int32_t _cst_260[9] = {
  -28, -27, -26, -1, 0, 1, 26, 27,
  28
};
int32_t _cst_267[1] = {
  0
};
int32_t _cst_274[1] = {
  0
};
int32_t _cst_281[9] = {
  -28, -27, -26, -1, 0, 1, 26, 27,
  28
};
int32_t _cst_288[1] = {
  0
};
int32_t _cst_295[1] = {
  0
};
int32_t _cst_302[9] = {
  -28, -27, -26, -1, 0, 1, 26, 27,
  28
};
int32_t _cst_309[1] = {
  0
};
int32_t _cst_316[1] = {
  0
};
int32_t _cst_327[9] = {
  -28, -27, -26, -1, 0, 1, 26, 27,
  28
};
int32_t _cst_338[1] = {
  0
};
int32_t _cst_343[1] = {
  0
};
int32_t _cst_350[9] = {
  -14, -13, -12, -1, 0, 1, 12, 13,
  14
};
int32_t _cst_357[1] = {
  0
};
int32_t _cst_365[8] = {
  0, 1, 2, 3, 4, 5, 6, 7
};
