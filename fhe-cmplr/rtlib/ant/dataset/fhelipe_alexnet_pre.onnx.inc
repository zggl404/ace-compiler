// external header files
#include "rt_ant/rt_ant.h"

typedef double float64_t;
typedef float float32_t;

extern float32_t _cst_0[864];
extern float32_t _cst_1[32];
extern float32_t _cst_2[27648];
extern float32_t _cst_3[96];
extern float32_t _cst_4[165888];
extern float32_t _cst_5[192];
extern float32_t _cst_6[442368];
extern float32_t _cst_7[256];
extern float32_t _cst_8[589824];
extern float32_t _cst_9[256];
extern float32_t _cst_10[1048576];
extern float32_t _cst_11[4096];
extern float32_t _cst_12[16777216];
extern float32_t _cst_13[4096];
extern float32_t _cst_14[40960];
extern float32_t _cst_15[10];
extern int64_t _cst_16[2];
extern int64_t _cst_17[2];
extern int64_t _cst_18[2];
extern int64_t _cst_19[2];
extern int64_t _cst_20[2];
extern int64_t _cst_21[2];
extern int64_t _cst_22[2];
extern int64_t _cst_23[2];
extern int64_t _cst_24[2];
extern int64_t _cst_25[2];
extern int64_t _cst_26[2];
extern int64_t _cst_27[2];
extern int32_t _cst_28[1];
extern float32_t _cst_29[1179648];
extern float32_t _cst_30[32768];
extern int32_t _cst_31[9];
extern float32_t _cst_32[32768];
extern float32_t _cst_33[524288];
extern float32_t _cst_34[524288];
extern float32_t _cst_35[1048576];
extern float32_t _cst_36[8192];
extern float32_t _cst_37[65536];
extern float32_t _cst_38[65536];
extern float32_t _cst_39[262144];
extern int32_t _cst_40[1];
extern float32_t _cst_41[1769472];
extern float32_t _cst_42[6144];
extern int32_t _cst_43[9];
extern float32_t _cst_44[6144];
extern float32_t _cst_45[6144];
extern float32_t _cst_46[6144];
extern float32_t _cst_47[49152];
extern float32_t _cst_48[589824];
extern int32_t _cst_49[1];
extern float32_t _cst_50[2654208];
extern float32_t _cst_51[3072];
extern int32_t _cst_52[9];
extern float32_t _cst_53[3072];
extern float32_t _cst_54[3072];
extern int32_t _cst_55[1];
extern float32_t _cst_56[11796480];
extern float32_t _cst_57[4096];
extern int32_t _cst_58[9];
extern float32_t _cst_59[4096];
extern float32_t _cst_60[4096];
extern int32_t _cst_61[1];
extern float32_t _cst_62[11796480];
extern float32_t _cst_63[4096];
extern int32_t _cst_64[9];
extern float32_t _cst_65[4096];
extern float32_t _cst_66[4096];
float32_t _cst_67 = 0.0625;
extern float32_t _cst_68[4096];
extern float32_t _cst_69[65536];
extern int32_t _cst_70[1];
extern float32_t _cst_71[1064960];
extern int32_t _cst_72[8];
extern float32_t _cst_73[4096];
extern float32_t _cst_74[20971520];
extern int32_t _cst_75[32];
extern float32_t _cst_76[4096];
extern float32_t _cst_77[41100];
extern int32_t _cst_78[2];
extern float32_t _cst_79[10];
float32_t _cst_80 = -1;
float32_t _cst_81 = -1;
float64_t _cst_82 = -3.809199432496630510769;
float32_t _cst_83 = -3.809199432496630510769;
float64_t _cst_84 = 2.460940868770910228136;
float32_t _cst_85 = 2.460940868770910228136;
float64_t _cst_86 = -1.430304794543664215212;
float32_t _cst_87 = -1.430304794543664215212;
float64_t _cst_88 = 2.944661935353764636858;
float32_t _cst_89 = 2.944661935353764636858;
float32_t _cst_90 = -1;
float32_t _cst_91 = -1;
float32_t _cst_92 = -1;
float32_t _cst_93 = -1;
float64_t _cst_94 = -0.0001600280537250875771867;
float32_t _cst_95 = -0.0001600280537250875771867;
float64_t _cst_96 = 0.003032478474127557870749;
float32_t _cst_97 = 0.003032478474127557870749;
float64_t _cst_98 = 0.1365828361194337536855;
float32_t _cst_99 = 0.1365828361194337536855;
float64_t _cst_100 = -0.02219735858216702675816;
float64_t _cst_101 = 0.5685231134608953462717;
float32_t _cst_102 = 0.5685231134608953462717;
float64_t _cst_103 = -0.5558785316215136829143;
float64_t _cst_104 = 1.614771079042867985009;
float32_t _cst_105 = 1.614771079042867985009;
float64_t _cst_106 = -0.6164083583294512891371;
float32_t _cst_107 = -1;
float32_t _cst_108 = -1;
float32_t _cst_109 = -1;
float32_t _cst_110 = -1;
float64_t _cst_111 = 0.0001111119162030077897477;
float32_t _cst_112 = 0.0001111119162030077897477;
float64_t _cst_113 = 0.006507995190210730772351;
float32_t _cst_114 = 0.006507995190210730772351;
float64_t _cst_115 = -0.0009371069270347270278171;
float32_t _cst_116 = -0.0009371069270347270278171;
float64_t _cst_117 = 0.1056744718173614761003;
float32_t _cst_118 = 0.1056744718173614761003;
float64_t _cst_119 = -0.03691063940349948585551;
float32_t _cst_120 = -0.03691063940349948585551;
float64_t _cst_121 = 0.6334139843709288841822;
float32_t _cst_122 = 0.6334139843709288841822;
float64_t _cst_123 = -0.2078597158810965850329;
float32_t _cst_124 = -0.2078597158810965850329;
float32_t _cst_125 = 0.5;
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
  CIPHERTEXT orig_result1_8;
  CIPHERTEXT comb_row_result2_9;
  int32_t comb_row_index_n2_10;
  CIPHERTEXT comb_rc_result2_11;
  int32_t comb_rc_index_n2_12;
  CIPHERTEXT ss_result2_13;
  int32_t comb_cc_index_n2_14;
  CIPHERTEXT tmp_row_add2_15;
  CIPHERTEXT orig_result2_16;
  CIPHERTEXT comb_row_result3_17;
  int32_t comb_row_index_n3_18;
  CIPHERTEXT comb_rc_result3_19;
  int32_t comb_rc_index_n3_20;
  CIPHERTEXT ss_result3_21;
  int32_t comb_cc_index_n3_22;
  CIPHERTEXT input_dup_n3_23;
  int32_t bs_input_n3_24;
  CIPHERTEXT input_block_n3_25[9];
  CIPHERTEXT result_n4_26;
  int32_t num_grid_n4_27;
  CIPHERTEXT result_grid_n4_28;
  int32_t cap_block_n4_29;
  CIPHERTEXT tmp_row_add4_30;
  CIPHERTEXT orig_result4_31;
  CIPHERTEXT comb_dic_result5_32;
  int32_t comb_dic_index_n5_33;
  int32_t comb_dic_index_out_n5_34;
  int32_t comb_dic_index_in_n5_35;
  CIPHERTEXT ss_result5_36;
  int32_t comb_cc_index_n5_37;
  CIPHERTEXT input_dup_n5_38;
  int32_t bs_input_n5_39;
  CIPHERTEXT input_block_n5_40[9];
  CIPHERTEXT result_n6_41;
  int32_t num_grid_n6_42;
  CIPHERTEXT result_grid_n6_43;
  int32_t cap_block_n6_44;
  CIPHERTEXT input_dup_n6_45;
  int32_t bs_input_n6_46;
  CIPHERTEXT input_block_n6_47[9];
  CIPHERTEXT result_n7_48;
  int32_t num_grid_n7_49;
  CIPHERTEXT result_grid_n7_50;
  int32_t cap_block_n7_51;
  int32_t num_block_collecitve_data_n7_52;
  int32_t num_block_collecitve_gap_n7_53;
  CIPHERTEXT input_dup_n7_54;
  int32_t bs_input_n7_55;
  CIPHERTEXT input_block_n7_56[9];
  CIPHERTEXT result_n8_57;
  int32_t num_grid_n8_58;
  CIPHERTEXT result_grid_n8_59;
  int32_t cap_block_n8_60;
  int32_t num_block_collecitve_data_n8_61;
  int32_t num_block_collecitve_gap_n8_62;
  int32_t gap_sum_index_n8_63;
  CIPHERTEXT gap_result8_64;
  CIPHERTEXT orig_result8_65;
  CIPHERTEXT ss_result9_66;
  int32_t comb_cc_lf_index_n9_67;
  int32_t comb_cc_index_n9_68;
  CIPHERTEXT input_dup_n9_69;
  int32_t bs_input_n9_70;
  CIPHERTEXT input_block_n9_71[8];
  CIPHERTEXT gemm_result_n10_72;
  int32_t gs_n10_73;
  CIPHERTEXT block_result_74;
  int32_t bs_n10_75;
  CIPHERTEXT reduce_intra_76;
  int32_t ri_n10_77;
  CIPHERTEXT input_dup_n10_78;
  int32_t bs_input_n10_79;
  CIPHERTEXT input_block_n10_80[32];
  CIPHERTEXT gemm_result_n11_81;
  int32_t gs_n11_82;
  CIPHERTEXT block_result_83;
  int32_t bs_n11_84;
  CIPHERTEXT reduce_intra_85;
  int32_t ri_n11_86;
  CIPHERTEXT input_dup_n11_87;
  int32_t bs_input_n11_88;
  CIPHERTEXT input_block_n11_89[2];
  CIPHERTEXT gemm_result_n12_90;
  int32_t gs_n12_91;
  CIPHERTEXT block_result_92;
  int32_t bs_n12_93;
  CIPHERTEXT reduce_intra_94;
  int32_t ri_n12_95;
  CIPHERTEXT output_96;
  CIPHERTEXT _ckks_gen_tmp_89_97;
  CIPHERTEXT _ckks_gen_tmp_161_98;
  CIPHERTEXT _ckks_gen_tmp_194_99;
  CIPHERTEXT _ckks_gen_tmp_227_100;
  CIPHERTEXT _ckks_gen_tmp_284_101;
  CIPHERTEXT _ckks_gen_tmp_315_102;
  CIPHERTEXT _ckks_gen_tmp_348_103;
  CIPHERTEXT _ckks_gen_tmp_381_104;
  CIPHERTEXT _ckks_gen_tmp_467_105;
  CIPHERTEXT _ckks_gen_tmp_511_106;
  CIPHERTEXT _ckks_gen_tmp_575_107;
  CIPHERTEXT _ckks_gen_tmp_638_108;
  CIPHERTEXT _ckks_gen_tmp_675_109;
  CIPHERTEXT _ckks_gen_tmp_757_110;
  CIPHERTEXT _ckks_gen_tmp_801_111;
  CIPHERTEXT _ckks_gen_tmp_920_112;
  CIPHERTEXT _ckks_gen_tmp_976_113;
  CIPHERTEXT _ckks_gen_tmp_1006_114;
  CIPHERTEXT _ckks_gen_tmp_1022_115;
  CIPHERTEXT _ckks_gen_tmp_1141_116;
  CIPHERTEXT _ckks_gen_tmp_1197_117;
  CIPHERTEXT _ckks_gen_tmp_1227_118;
  CIPHERTEXT _ckks_gen_tmp_1243_119;
  CIPHERTEXT _ckks_gen_tmp_1370_120;
  CIPHERTEXT _ckks_gen_tmp_1714_121;
  CIPHERTEXT _ckks_gen_tmp_1883_122;
  CIPHERTEXT _ckks_gen_tmp_2040_123;
  MODULUS* _pgen_modulus_124;
  uint32_t _pgen_num_q_125;
  uint32_t _pgen_rns_idx_126;
  CIPHERTEXT _pgen_tmp_0_127;
  CIPHERTEXT _pgen_tmp_1_128;
  CIPHERTEXT _pgen_tmp_2_129;
  CIPHERTEXT _pgen_tmp_3_130;
  CIPHERTEXT _pgen_tmp_4_131;
  CIPHERTEXT _pgen_tmp_5_132;
  PLAINTEXT _pgen_tmp_6_133;
  CIPHERTEXT _pgen_tmp_7_134;
  CIPHERTEXT _pgen_tmp_8_135;
  PLAINTEXT _pgen_tmp_9_136;
  PLAINTEXT _pgen_tmp_10_137;
  PLAINTEXT _pgen_tmp_11_138;
  CIPHERTEXT _pgen_tmp_12_139;
  PLAINTEXT _pgen_tmp_13_140;
  CIPHERTEXT _pgen_tmp_14_141;
  PLAINTEXT _pgen_tmp_15_142;
  CIPHERTEXT _pgen_tmp_16_143;
  CIPHERTEXT _pgen_tmp_17_144;
  PLAINTEXT _pgen_tmp_18_145;
  PLAINTEXT _pgen_tmp_19_146;
  CIPHERTEXT _pgen_tmp_20_147;
  PLAINTEXT _pgen_tmp_21_148;
  CIPHERTEXT _pgen_tmp_22_149;
  PLAINTEXT _pgen_tmp_23_150;
  CIPHERTEXT _pgen_tmp_24_151;
  CIPHERTEXT _pgen_tmp_25_152;
  PLAINTEXT _pgen_tmp_26_153;
  CIPHERTEXT _pgen_tmp_27_154;
  CIPHERTEXT _pgen_tmp_28_155;
  PLAINTEXT _pgen_tmp_29_156;
  CIPHERTEXT _pgen_tmp_30_157;
  PLAINTEXT _pgen_tmp_31_158;
  CIPHERTEXT _pgen_tmp_32_159;
  PLAINTEXT _pgen_tmp_33_160;
  CIPHERTEXT _pgen_tmp_34_161;
  PLAINTEXT _pgen_tmp_35_162;
  PLAINTEXT _pgen_tmp_36_163;
  CIPHERTEXT _pgen_tmp_37_164;
  PLAINTEXT _pgen_tmp_38_165;
  CIPHERTEXT _pgen_tmp_39_166;
  PLAINTEXT _pgen_tmp_40_167;
  CIPHERTEXT _pgen_tmp_41_168;
  CIPHERTEXT _pgen_tmp_42_169;
  PLAINTEXT _pgen_tmp_43_170;
  CIPHERTEXT _pgen_tmp_44_171;
  PLAINTEXT _pgen_tmp_45_172;
  CIPHERTEXT _pgen_tmp_46_173;
  PLAINTEXT _pgen_tmp_47_174;
  CIPHERTEXT _pgen_tmp_48_175;
  CIPHERTEXT _pgen_tmp_49_176;
  CIPHERTEXT _pgen_tmp_50_177;
  PLAINTEXT _pgen_tmp_51_178;
  CIPHERTEXT _pgen_tmp_52_179;
  CIPHERTEXT _pgen_tmp_53_180;
  PLAINTEXT _pgen_tmp_54_181;
  CIPHERTEXT _pgen_tmp_55_182;
  PLAINTEXT _pgen_tmp_56_183;
  CIPHERTEXT _pgen_tmp_57_184;
  CIPHERTEXT _pgen_tmp_58_185;
  PLAINTEXT _pgen_tmp_59_186;
  CIPHERTEXT _pgen_tmp_60_187;
  CIPHERTEXT _pgen_tmp_61_188;
  PLAINTEXT _pgen_tmp_62_189;
  CIPHERTEXT _pgen_tmp_63_190;
  PLAINTEXT _pgen_tmp_64_191;
  CIPHERTEXT _pgen_tmp_65_192;
  CIPHERTEXT _pgen_tmp_66_193;
  CIPHERTEXT _pgen_tmp_67_194;
  PLAINTEXT _pgen_tmp_68_195;
  CIPHERTEXT _pgen_tmp_69_196;
  CIPHERTEXT _pgen_tmp_70_197;
  PLAINTEXT _pgen_tmp_71_198;
  CIPHERTEXT _pgen_tmp_72_199;
  PLAINTEXT _pgen_tmp_73_200;
  CIPHERTEXT _pgen_tmp_74_201;
  CIPHERTEXT _pgen_tmp_75_202;
  PLAINTEXT _pgen_tmp_76_203;
  CIPHERTEXT _pgen_tmp_77_204;
  CIPHERTEXT _pgen_tmp_78_205;
  PLAINTEXT _pgen_tmp_79_206;
  CIPHERTEXT _pgen_tmp_80_207;
  PLAINTEXT _pgen_tmp_81_208;
  CIPHERTEXT _pgen_tmp_82_209;
  PLAINTEXT _pgen_tmp_83_210;
  CIPHERTEXT _pgen_tmp_84_211;
  PLAINTEXT _pgen_tmp_85_212;
  PLAINTEXT _pgen_tmp_86_213;
  CIPHERTEXT _pgen_tmp_87_214;
  CIPHERTEXT _pgen_tmp_88_215;
  CIPHERTEXT _pgen_tmp_89_216;
  CIPHERTEXT _pgen_tmp_90_217;
  CIPHERTEXT _pgen_tmp_91_218;
  CIPHERTEXT _pgen_tmp_92_219;
  CIPHERTEXT _pgen_tmp_93_220;
  CIPHERTEXT _pgen_tmp_94_221;
  CIPHERTEXT _pgen_tmp_95_222;
  CIPHERTEXT _pgen_tmp_96_223;
  CIPHERTEXT _pgen_tmp_97_224;
  CIPHERTEXT _pgen_tmp_98_225;
  CIPHERTEXT _pgen_tmp_99_226;
  CIPHERTEXT _pgen_tmp_100_227;
  CIPHERTEXT _pgen_tmp_101_228;
  CIPHERTEXT _pgen_tmp_102_229;
  CIPHERTEXT _pgen_tmp_103_230;
  CIPHERTEXT _pgen_tmp_104_231;
  CIPHERTEXT _pgen_tmp_105_232;
  CIPHERTEXT _pgen_tmp_106_233;
  CIPHERTEXT _pgen_tmp_107_234;
  CIPHERTEXT _pgen_tmp_108_235;
  CIPHERTEXT _pgen_tmp_109_236;
  CIPHERTEXT _pgen_tmp_110_237;
  CIPHERTEXT _pgen_tmp_111_238;
  CIPHERTEXT _pgen_tmp_112_239;
  CIPHERTEXT _pgen_tmp_113_240;
  CIPHERTEXT _pgen_tmp_114_241;
  CIPHERTEXT _pgen_tmp_115_242;
  CIPHERTEXT _pgen_tmp_116_243;
  CIPHERTEXT _pgen_tmp_117_244;
  CIPHERTEXT _pgen_tmp_118_245;
  CIPHERTEXT _pgen_tmp_119_246;
  CIPHERTEXT _pgen_tmp_120_247;
  CIPHERTEXT _pgen_tmp_121_248;
  CIPHERTEXT _pgen_tmp_122_249;
  CIPHERTEXT _pgen_tmp_123_250;
  CIPHERTEXT _pgen_tmp_124_251;
  CIPHERTEXT _pgen_tmp_125_252;
  CIPHERTEXT _pgen_tmp_126_253;
  CIPHERTEXT _pgen_tmp_127_254;
  CIPHERTEXT _pgen_tmp_128_255;
  CIPHERTEXT _pgen_tmp_129_256;
  CIPHERTEXT _pgen_tmp_130_257;
  CIPHERTEXT _pgen_tmp_131_258;
  CIPHERTEXT _pgen_tmp_132_259;
  CIPHERTEXT _pgen_tmp_133_260;
  CIPHERTEXT _pgen_tmp_134_261;
  CIPHERTEXT _pgen_tmp_135_262;
  CIPHERTEXT _pgen_tmp_136_263;
  CIPHERTEXT _pgen_tmp_137_264;
  CIPHERTEXT _pgen_tmp_138_265;
  CIPHERTEXT _pgen_tmp_139_266;
  CIPHERTEXT _pgen_tmp_140_267;
  CIPHERTEXT _pgen_tmp_141_268;
  CIPHERTEXT _pgen_tmp_142_269;
  CIPHERTEXT _pgen_tmp_143_270;
  CIPHERTEXT _pgen_tmp_144_271;
  CIPHERTEXT _pgen_tmp_145_272;
  CIPHERTEXT _pgen_tmp_146_273;
  CIPHERTEXT _pgen_tmp_147_274;
  CIPHERTEXT _pgen_tmp_148_275;
  CIPHERTEXT _pgen_tmp_149_276;
  CIPHERTEXT _pgen_tmp_150_277;
  PLAINTEXT _pgen_tmp_151_278;
  CIPHERTEXT _pgen_tmp_152_279;
  PLAINTEXT _pgen_tmp_153_280;
  CIPHERTEXT _pgen_tmp_154_281;
  PLAINTEXT _pgen_tmp_155_282;
  CIPHERTEXT _pgen_tmp_156_283;
  CIPHERTEXT _pgen_tmp_157_284;
  CIPHERTEXT _pgen_tmp_158_285;
  PLAINTEXT _pgen_tmp_159_286;
  CIPHERTEXT _pgen_tmp_160_287;
  PLAINTEXT _pgen_tmp_161_288;
  CIPHERTEXT _pgen_tmp_162_289;
  PLAINTEXT _pgen_tmp_163_290;
  PLAINTEXT _pgen_tmp_164_291;
  CIPHERTEXT _pgen_tmp_165_292;
  PLAINTEXT _pgen_tmp_166_293;
  CIPHERTEXT _pgen_tmp_167_294;
  PLAINTEXT _pgen_tmp_168_295;
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
  uint32_t  degree = Degree();
  input_0 = Get_input_data("input", 0);
  memset(&input_dup_n0_1, 0, sizeof(input_dup_n0_1));
  memset(&input_block_n0_3, 0, sizeof(input_block_n0_3));
  memset(&result_n1_4, 0, sizeof(result_n1_4));
  memset(&result_grid_n1_6, 0, sizeof(result_grid_n1_6));
  memset(&orig_result1_8, 0, sizeof(orig_result1_8));
  memset(&comb_row_result2_9, 0, sizeof(comb_row_result2_9));
  memset(&comb_rc_result2_11, 0, sizeof(comb_rc_result2_11));
  memset(&ss_result2_13, 0, sizeof(ss_result2_13));
  memset(&tmp_row_add2_15, 0, sizeof(tmp_row_add2_15));
  memset(&orig_result2_16, 0, sizeof(orig_result2_16));
  memset(&comb_row_result3_17, 0, sizeof(comb_row_result3_17));
  memset(&comb_rc_result3_19, 0, sizeof(comb_rc_result3_19));
  memset(&ss_result3_21, 0, sizeof(ss_result3_21));
  memset(&input_dup_n3_23, 0, sizeof(input_dup_n3_23));
  memset(&input_block_n3_25, 0, sizeof(input_block_n3_25));
  memset(&result_n4_26, 0, sizeof(result_n4_26));
  memset(&result_grid_n4_28, 0, sizeof(result_grid_n4_28));
  memset(&tmp_row_add4_30, 0, sizeof(tmp_row_add4_30));
  memset(&orig_result4_31, 0, sizeof(orig_result4_31));
  memset(&comb_dic_result5_32, 0, sizeof(comb_dic_result5_32));
  memset(&ss_result5_36, 0, sizeof(ss_result5_36));
  memset(&input_dup_n5_38, 0, sizeof(input_dup_n5_38));
  memset(&input_block_n5_40, 0, sizeof(input_block_n5_40));
  memset(&result_n6_41, 0, sizeof(result_n6_41));
  memset(&result_grid_n6_43, 0, sizeof(result_grid_n6_43));
  memset(&input_dup_n6_45, 0, sizeof(input_dup_n6_45));
  memset(&input_block_n6_47, 0, sizeof(input_block_n6_47));
  memset(&result_n7_48, 0, sizeof(result_n7_48));
  memset(&result_grid_n7_50, 0, sizeof(result_grid_n7_50));
  memset(&input_dup_n7_54, 0, sizeof(input_dup_n7_54));
  memset(&input_block_n7_56, 0, sizeof(input_block_n7_56));
  memset(&result_n8_57, 0, sizeof(result_n8_57));
  memset(&result_grid_n8_59, 0, sizeof(result_grid_n8_59));
  memset(&gap_result8_64, 0, sizeof(gap_result8_64));
  memset(&orig_result8_65, 0, sizeof(orig_result8_65));
  memset(&ss_result9_66, 0, sizeof(ss_result9_66));
  memset(&input_dup_n9_69, 0, sizeof(input_dup_n9_69));
  memset(&input_block_n9_71, 0, sizeof(input_block_n9_71));
  memset(&gemm_result_n10_72, 0, sizeof(gemm_result_n10_72));
  memset(&block_result_74, 0, sizeof(block_result_74));
  memset(&reduce_intra_76, 0, sizeof(reduce_intra_76));
  memset(&input_dup_n10_78, 0, sizeof(input_dup_n10_78));
  memset(&input_block_n10_80, 0, sizeof(input_block_n10_80));
  memset(&gemm_result_n11_81, 0, sizeof(gemm_result_n11_81));
  memset(&block_result_83, 0, sizeof(block_result_83));
  memset(&reduce_intra_85, 0, sizeof(reduce_intra_85));
  memset(&input_dup_n11_87, 0, sizeof(input_dup_n11_87));
  memset(&input_block_n11_89, 0, sizeof(input_block_n11_89));
  memset(&gemm_result_n12_90, 0, sizeof(gemm_result_n12_90));
  memset(&block_result_92, 0, sizeof(block_result_92));
  memset(&reduce_intra_94, 0, sizeof(reduce_intra_94));
  memset(&output_96, 0, sizeof(output_96));
  memset(&_ckks_gen_tmp_89_97, 0, sizeof(_ckks_gen_tmp_89_97));
  memset(&_ckks_gen_tmp_161_98, 0, sizeof(_ckks_gen_tmp_161_98));
  memset(&_ckks_gen_tmp_194_99, 0, sizeof(_ckks_gen_tmp_194_99));
  memset(&_ckks_gen_tmp_227_100, 0, sizeof(_ckks_gen_tmp_227_100));
  memset(&_ckks_gen_tmp_284_101, 0, sizeof(_ckks_gen_tmp_284_101));
  memset(&_ckks_gen_tmp_315_102, 0, sizeof(_ckks_gen_tmp_315_102));
  memset(&_ckks_gen_tmp_348_103, 0, sizeof(_ckks_gen_tmp_348_103));
  memset(&_ckks_gen_tmp_381_104, 0, sizeof(_ckks_gen_tmp_381_104));
  memset(&_ckks_gen_tmp_467_105, 0, sizeof(_ckks_gen_tmp_467_105));
  memset(&_ckks_gen_tmp_511_106, 0, sizeof(_ckks_gen_tmp_511_106));
  memset(&_ckks_gen_tmp_575_107, 0, sizeof(_ckks_gen_tmp_575_107));
  memset(&_ckks_gen_tmp_638_108, 0, sizeof(_ckks_gen_tmp_638_108));
  memset(&_ckks_gen_tmp_675_109, 0, sizeof(_ckks_gen_tmp_675_109));
  memset(&_ckks_gen_tmp_757_110, 0, sizeof(_ckks_gen_tmp_757_110));
  memset(&_ckks_gen_tmp_801_111, 0, sizeof(_ckks_gen_tmp_801_111));
  memset(&_ckks_gen_tmp_920_112, 0, sizeof(_ckks_gen_tmp_920_112));
  memset(&_ckks_gen_tmp_976_113, 0, sizeof(_ckks_gen_tmp_976_113));
  memset(&_ckks_gen_tmp_1006_114, 0, sizeof(_ckks_gen_tmp_1006_114));
  memset(&_ckks_gen_tmp_1022_115, 0, sizeof(_ckks_gen_tmp_1022_115));
  memset(&_ckks_gen_tmp_1141_116, 0, sizeof(_ckks_gen_tmp_1141_116));
  memset(&_ckks_gen_tmp_1197_117, 0, sizeof(_ckks_gen_tmp_1197_117));
  memset(&_ckks_gen_tmp_1227_118, 0, sizeof(_ckks_gen_tmp_1227_118));
  memset(&_ckks_gen_tmp_1243_119, 0, sizeof(_ckks_gen_tmp_1243_119));
  memset(&_ckks_gen_tmp_1370_120, 0, sizeof(_ckks_gen_tmp_1370_120));
  memset(&_ckks_gen_tmp_1714_121, 0, sizeof(_ckks_gen_tmp_1714_121));
  memset(&_ckks_gen_tmp_1883_122, 0, sizeof(_ckks_gen_tmp_1883_122));
  memset(&_ckks_gen_tmp_2040_123, 0, sizeof(_ckks_gen_tmp_2040_123));
  memset(&_pgen_tmp_0_127, 0, sizeof(_pgen_tmp_0_127));
  memset(&_pgen_tmp_1_128, 0, sizeof(_pgen_tmp_1_128));
  memset(&_pgen_tmp_2_129, 0, sizeof(_pgen_tmp_2_129));
  memset(&_pgen_tmp_3_130, 0, sizeof(_pgen_tmp_3_130));
  memset(&_pgen_tmp_4_131, 0, sizeof(_pgen_tmp_4_131));
  memset(&_pgen_tmp_5_132, 0, sizeof(_pgen_tmp_5_132));
  memset(&_pgen_tmp_6_133, 0, sizeof(_pgen_tmp_6_133));
  memset(&_pgen_tmp_7_134, 0, sizeof(_pgen_tmp_7_134));
  memset(&_pgen_tmp_8_135, 0, sizeof(_pgen_tmp_8_135));
  memset(&_pgen_tmp_9_136, 0, sizeof(_pgen_tmp_9_136));
  memset(&_pgen_tmp_10_137, 0, sizeof(_pgen_tmp_10_137));
  memset(&_pgen_tmp_11_138, 0, sizeof(_pgen_tmp_11_138));
  memset(&_pgen_tmp_12_139, 0, sizeof(_pgen_tmp_12_139));
  memset(&_pgen_tmp_13_140, 0, sizeof(_pgen_tmp_13_140));
  memset(&_pgen_tmp_14_141, 0, sizeof(_pgen_tmp_14_141));
  memset(&_pgen_tmp_15_142, 0, sizeof(_pgen_tmp_15_142));
  memset(&_pgen_tmp_16_143, 0, sizeof(_pgen_tmp_16_143));
  memset(&_pgen_tmp_17_144, 0, sizeof(_pgen_tmp_17_144));
  memset(&_pgen_tmp_18_145, 0, sizeof(_pgen_tmp_18_145));
  memset(&_pgen_tmp_19_146, 0, sizeof(_pgen_tmp_19_146));
  memset(&_pgen_tmp_20_147, 0, sizeof(_pgen_tmp_20_147));
  memset(&_pgen_tmp_21_148, 0, sizeof(_pgen_tmp_21_148));
  memset(&_pgen_tmp_22_149, 0, sizeof(_pgen_tmp_22_149));
  memset(&_pgen_tmp_23_150, 0, sizeof(_pgen_tmp_23_150));
  memset(&_pgen_tmp_24_151, 0, sizeof(_pgen_tmp_24_151));
  memset(&_pgen_tmp_25_152, 0, sizeof(_pgen_tmp_25_152));
  memset(&_pgen_tmp_26_153, 0, sizeof(_pgen_tmp_26_153));
  memset(&_pgen_tmp_27_154, 0, sizeof(_pgen_tmp_27_154));
  memset(&_pgen_tmp_28_155, 0, sizeof(_pgen_tmp_28_155));
  memset(&_pgen_tmp_29_156, 0, sizeof(_pgen_tmp_29_156));
  memset(&_pgen_tmp_30_157, 0, sizeof(_pgen_tmp_30_157));
  memset(&_pgen_tmp_31_158, 0, sizeof(_pgen_tmp_31_158));
  memset(&_pgen_tmp_32_159, 0, sizeof(_pgen_tmp_32_159));
  memset(&_pgen_tmp_33_160, 0, sizeof(_pgen_tmp_33_160));
  memset(&_pgen_tmp_34_161, 0, sizeof(_pgen_tmp_34_161));
  memset(&_pgen_tmp_35_162, 0, sizeof(_pgen_tmp_35_162));
  memset(&_pgen_tmp_36_163, 0, sizeof(_pgen_tmp_36_163));
  memset(&_pgen_tmp_37_164, 0, sizeof(_pgen_tmp_37_164));
  memset(&_pgen_tmp_38_165, 0, sizeof(_pgen_tmp_38_165));
  memset(&_pgen_tmp_39_166, 0, sizeof(_pgen_tmp_39_166));
  memset(&_pgen_tmp_40_167, 0, sizeof(_pgen_tmp_40_167));
  memset(&_pgen_tmp_41_168, 0, sizeof(_pgen_tmp_41_168));
  memset(&_pgen_tmp_42_169, 0, sizeof(_pgen_tmp_42_169));
  memset(&_pgen_tmp_43_170, 0, sizeof(_pgen_tmp_43_170));
  memset(&_pgen_tmp_44_171, 0, sizeof(_pgen_tmp_44_171));
  memset(&_pgen_tmp_45_172, 0, sizeof(_pgen_tmp_45_172));
  memset(&_pgen_tmp_46_173, 0, sizeof(_pgen_tmp_46_173));
  memset(&_pgen_tmp_47_174, 0, sizeof(_pgen_tmp_47_174));
  memset(&_pgen_tmp_48_175, 0, sizeof(_pgen_tmp_48_175));
  memset(&_pgen_tmp_49_176, 0, sizeof(_pgen_tmp_49_176));
  memset(&_pgen_tmp_50_177, 0, sizeof(_pgen_tmp_50_177));
  memset(&_pgen_tmp_51_178, 0, sizeof(_pgen_tmp_51_178));
  memset(&_pgen_tmp_52_179, 0, sizeof(_pgen_tmp_52_179));
  memset(&_pgen_tmp_53_180, 0, sizeof(_pgen_tmp_53_180));
  memset(&_pgen_tmp_54_181, 0, sizeof(_pgen_tmp_54_181));
  memset(&_pgen_tmp_55_182, 0, sizeof(_pgen_tmp_55_182));
  memset(&_pgen_tmp_56_183, 0, sizeof(_pgen_tmp_56_183));
  memset(&_pgen_tmp_57_184, 0, sizeof(_pgen_tmp_57_184));
  memset(&_pgen_tmp_58_185, 0, sizeof(_pgen_tmp_58_185));
  memset(&_pgen_tmp_59_186, 0, sizeof(_pgen_tmp_59_186));
  memset(&_pgen_tmp_60_187, 0, sizeof(_pgen_tmp_60_187));
  memset(&_pgen_tmp_61_188, 0, sizeof(_pgen_tmp_61_188));
  memset(&_pgen_tmp_62_189, 0, sizeof(_pgen_tmp_62_189));
  memset(&_pgen_tmp_63_190, 0, sizeof(_pgen_tmp_63_190));
  memset(&_pgen_tmp_64_191, 0, sizeof(_pgen_tmp_64_191));
  memset(&_pgen_tmp_65_192, 0, sizeof(_pgen_tmp_65_192));
  memset(&_pgen_tmp_66_193, 0, sizeof(_pgen_tmp_66_193));
  memset(&_pgen_tmp_67_194, 0, sizeof(_pgen_tmp_67_194));
  memset(&_pgen_tmp_68_195, 0, sizeof(_pgen_tmp_68_195));
  memset(&_pgen_tmp_69_196, 0, sizeof(_pgen_tmp_69_196));
  memset(&_pgen_tmp_70_197, 0, sizeof(_pgen_tmp_70_197));
  memset(&_pgen_tmp_71_198, 0, sizeof(_pgen_tmp_71_198));
  memset(&_pgen_tmp_72_199, 0, sizeof(_pgen_tmp_72_199));
  memset(&_pgen_tmp_73_200, 0, sizeof(_pgen_tmp_73_200));
  memset(&_pgen_tmp_74_201, 0, sizeof(_pgen_tmp_74_201));
  memset(&_pgen_tmp_75_202, 0, sizeof(_pgen_tmp_75_202));
  memset(&_pgen_tmp_76_203, 0, sizeof(_pgen_tmp_76_203));
  memset(&_pgen_tmp_77_204, 0, sizeof(_pgen_tmp_77_204));
  memset(&_pgen_tmp_78_205, 0, sizeof(_pgen_tmp_78_205));
  memset(&_pgen_tmp_79_206, 0, sizeof(_pgen_tmp_79_206));
  memset(&_pgen_tmp_80_207, 0, sizeof(_pgen_tmp_80_207));
  memset(&_pgen_tmp_81_208, 0, sizeof(_pgen_tmp_81_208));
  memset(&_pgen_tmp_82_209, 0, sizeof(_pgen_tmp_82_209));
  memset(&_pgen_tmp_83_210, 0, sizeof(_pgen_tmp_83_210));
  memset(&_pgen_tmp_84_211, 0, sizeof(_pgen_tmp_84_211));
  memset(&_pgen_tmp_85_212, 0, sizeof(_pgen_tmp_85_212));
  memset(&_pgen_tmp_86_213, 0, sizeof(_pgen_tmp_86_213));
  memset(&_pgen_tmp_87_214, 0, sizeof(_pgen_tmp_87_214));
  memset(&_pgen_tmp_88_215, 0, sizeof(_pgen_tmp_88_215));
  memset(&_pgen_tmp_89_216, 0, sizeof(_pgen_tmp_89_216));
  memset(&_pgen_tmp_90_217, 0, sizeof(_pgen_tmp_90_217));
  memset(&_pgen_tmp_91_218, 0, sizeof(_pgen_tmp_91_218));
  memset(&_pgen_tmp_92_219, 0, sizeof(_pgen_tmp_92_219));
  memset(&_pgen_tmp_93_220, 0, sizeof(_pgen_tmp_93_220));
  memset(&_pgen_tmp_94_221, 0, sizeof(_pgen_tmp_94_221));
  memset(&_pgen_tmp_95_222, 0, sizeof(_pgen_tmp_95_222));
  memset(&_pgen_tmp_96_223, 0, sizeof(_pgen_tmp_96_223));
  memset(&_pgen_tmp_97_224, 0, sizeof(_pgen_tmp_97_224));
  memset(&_pgen_tmp_98_225, 0, sizeof(_pgen_tmp_98_225));
  memset(&_pgen_tmp_99_226, 0, sizeof(_pgen_tmp_99_226));
  memset(&_pgen_tmp_100_227, 0, sizeof(_pgen_tmp_100_227));
  memset(&_pgen_tmp_101_228, 0, sizeof(_pgen_tmp_101_228));
  memset(&_pgen_tmp_102_229, 0, sizeof(_pgen_tmp_102_229));
  memset(&_pgen_tmp_103_230, 0, sizeof(_pgen_tmp_103_230));
  memset(&_pgen_tmp_104_231, 0, sizeof(_pgen_tmp_104_231));
  memset(&_pgen_tmp_105_232, 0, sizeof(_pgen_tmp_105_232));
  memset(&_pgen_tmp_106_233, 0, sizeof(_pgen_tmp_106_233));
  memset(&_pgen_tmp_107_234, 0, sizeof(_pgen_tmp_107_234));
  memset(&_pgen_tmp_108_235, 0, sizeof(_pgen_tmp_108_235));
  memset(&_pgen_tmp_109_236, 0, sizeof(_pgen_tmp_109_236));
  memset(&_pgen_tmp_110_237, 0, sizeof(_pgen_tmp_110_237));
  memset(&_pgen_tmp_111_238, 0, sizeof(_pgen_tmp_111_238));
  memset(&_pgen_tmp_112_239, 0, sizeof(_pgen_tmp_112_239));
  memset(&_pgen_tmp_113_240, 0, sizeof(_pgen_tmp_113_240));
  memset(&_pgen_tmp_114_241, 0, sizeof(_pgen_tmp_114_241));
  memset(&_pgen_tmp_115_242, 0, sizeof(_pgen_tmp_115_242));
  memset(&_pgen_tmp_116_243, 0, sizeof(_pgen_tmp_116_243));
  memset(&_pgen_tmp_117_244, 0, sizeof(_pgen_tmp_117_244));
  memset(&_pgen_tmp_118_245, 0, sizeof(_pgen_tmp_118_245));
  memset(&_pgen_tmp_119_246, 0, sizeof(_pgen_tmp_119_246));
  memset(&_pgen_tmp_120_247, 0, sizeof(_pgen_tmp_120_247));
  memset(&_pgen_tmp_121_248, 0, sizeof(_pgen_tmp_121_248));
  memset(&_pgen_tmp_122_249, 0, sizeof(_pgen_tmp_122_249));
  memset(&_pgen_tmp_123_250, 0, sizeof(_pgen_tmp_123_250));
  memset(&_pgen_tmp_124_251, 0, sizeof(_pgen_tmp_124_251));
  memset(&_pgen_tmp_125_252, 0, sizeof(_pgen_tmp_125_252));
  memset(&_pgen_tmp_126_253, 0, sizeof(_pgen_tmp_126_253));
  memset(&_pgen_tmp_127_254, 0, sizeof(_pgen_tmp_127_254));
  memset(&_pgen_tmp_128_255, 0, sizeof(_pgen_tmp_128_255));
  memset(&_pgen_tmp_129_256, 0, sizeof(_pgen_tmp_129_256));
  memset(&_pgen_tmp_130_257, 0, sizeof(_pgen_tmp_130_257));
  memset(&_pgen_tmp_131_258, 0, sizeof(_pgen_tmp_131_258));
  memset(&_pgen_tmp_132_259, 0, sizeof(_pgen_tmp_132_259));
  memset(&_pgen_tmp_133_260, 0, sizeof(_pgen_tmp_133_260));
  memset(&_pgen_tmp_134_261, 0, sizeof(_pgen_tmp_134_261));
  memset(&_pgen_tmp_135_262, 0, sizeof(_pgen_tmp_135_262));
  memset(&_pgen_tmp_136_263, 0, sizeof(_pgen_tmp_136_263));
  memset(&_pgen_tmp_137_264, 0, sizeof(_pgen_tmp_137_264));
  memset(&_pgen_tmp_138_265, 0, sizeof(_pgen_tmp_138_265));
  memset(&_pgen_tmp_139_266, 0, sizeof(_pgen_tmp_139_266));
  memset(&_pgen_tmp_140_267, 0, sizeof(_pgen_tmp_140_267));
  memset(&_pgen_tmp_141_268, 0, sizeof(_pgen_tmp_141_268));
  memset(&_pgen_tmp_142_269, 0, sizeof(_pgen_tmp_142_269));
  memset(&_pgen_tmp_143_270, 0, sizeof(_pgen_tmp_143_270));
  memset(&_pgen_tmp_144_271, 0, sizeof(_pgen_tmp_144_271));
  memset(&_pgen_tmp_145_272, 0, sizeof(_pgen_tmp_145_272));
  memset(&_pgen_tmp_146_273, 0, sizeof(_pgen_tmp_146_273));
  memset(&_pgen_tmp_147_274, 0, sizeof(_pgen_tmp_147_274));
  memset(&_pgen_tmp_148_275, 0, sizeof(_pgen_tmp_148_275));
  memset(&_pgen_tmp_149_276, 0, sizeof(_pgen_tmp_149_276));
  memset(&_pgen_tmp_150_277, 0, sizeof(_pgen_tmp_150_277));
  memset(&_pgen_tmp_151_278, 0, sizeof(_pgen_tmp_151_278));
  memset(&_pgen_tmp_152_279, 0, sizeof(_pgen_tmp_152_279));
  memset(&_pgen_tmp_153_280, 0, sizeof(_pgen_tmp_153_280));
  memset(&_pgen_tmp_154_281, 0, sizeof(_pgen_tmp_154_281));
  memset(&_pgen_tmp_155_282, 0, sizeof(_pgen_tmp_155_282));
  memset(&_pgen_tmp_156_283, 0, sizeof(_pgen_tmp_156_283));
  memset(&_pgen_tmp_157_284, 0, sizeof(_pgen_tmp_157_284));
  memset(&_pgen_tmp_158_285, 0, sizeof(_pgen_tmp_158_285));
  memset(&_pgen_tmp_159_286, 0, sizeof(_pgen_tmp_159_286));
  memset(&_pgen_tmp_160_287, 0, sizeof(_pgen_tmp_160_287));
  memset(&_pgen_tmp_161_288, 0, sizeof(_pgen_tmp_161_288));
  memset(&_pgen_tmp_162_289, 0, sizeof(_pgen_tmp_162_289));
  memset(&_pgen_tmp_163_290, 0, sizeof(_pgen_tmp_163_290));
  memset(&_pgen_tmp_164_291, 0, sizeof(_pgen_tmp_164_291));
  memset(&_pgen_tmp_165_292, 0, sizeof(_pgen_tmp_165_292));
  memset(&_pgen_tmp_166_293, 0, sizeof(_pgen_tmp_166_293));
  memset(&_pgen_tmp_167_294, 0, sizeof(_pgen_tmp_167_294));
  memset(&_pgen_tmp_168_295, 0, sizeof(_pgen_tmp_168_295));
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
  // /features/features.0/Conv
  // pragma: 65536, 1027, 33
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435456, &input_0);
  Free_poly_data(&input_0._c1_poly);
  Free_poly_data(&input_0._c0_poly);
  // BlockingRot replicate=8
  _preg_268435505 = Rotate(_preg_268435456, -4096);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_0_127, &_preg_268435456, &_preg_268435505);
  CMPLR_TM_END(12, 0);
  _preg_268435506 = Rotate(_preg_268435456, -8192);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_1_128, &_pgen_tmp_0_127, &_preg_268435506);
  CMPLR_TM_END(12, 0);
  _preg_268435507 = Rotate(_preg_268435456, -12288);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_2_129, &_pgen_tmp_1_128, &_preg_268435507);
  CMPLR_TM_END(12, 0);
  _preg_268435508 = Rotate(_preg_268435456, -16384);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_3_130, &_pgen_tmp_2_129, &_preg_268435508);
  CMPLR_TM_END(12, 0);
  _preg_268435509 = Rotate(_preg_268435456, -20480);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_4_131, &_pgen_tmp_3_130, &_preg_268435509);
  CMPLR_TM_END(12, 0);
  _preg_268435510 = Rotate(_preg_268435456, -24576);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_5_132, &_pgen_tmp_4_131, &_preg_268435510);
  CMPLR_TM_END(12, 0);
  _preg_268435511 = Rotate(_preg_268435456, -28672);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n0_1, &_pgen_tmp_5_132, &_preg_268435511);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&input_dup_n0_1._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_0_127._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435456._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435505._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_0_127._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435456._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435505._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_1_128._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_0_127._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435506._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_1_128._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_0_127._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435506._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_2_129._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_1_128._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435507._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_2_129._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_1_128._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435507._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_3_130._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_2_129._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435508._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_3_130._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_2_129._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435508._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_4_131._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_3_130._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435509._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_4_131._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_3_130._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435509._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_5_132._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_4_131._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435510._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_5_132._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_4_131._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435510._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&input_dup_n0_1._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_5_132._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435511._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&input_dup_n0_1._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_5_132._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435511._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_preg_268435505._c1_poly);
  Free_poly_data(&_preg_268435505._c0_poly);
  Free_poly_data(&_preg_268435456._c1_poly);
  Free_poly_data(&_preg_268435456._c0_poly);
  Free_poly_data(&_preg_268435506._c1_poly);
  Free_poly_data(&_preg_268435506._c0_poly);
  Free_poly_data(&_pgen_tmp_0_127._c1_poly);
  Free_poly_data(&_pgen_tmp_0_127._c0_poly);
  Free_poly_data(&_preg_268435507._c1_poly);
  Free_poly_data(&_preg_268435507._c0_poly);
  Free_poly_data(&_pgen_tmp_1_128._c1_poly);
  Free_poly_data(&_pgen_tmp_1_128._c0_poly);
  Free_poly_data(&_preg_268435508._c1_poly);
  Free_poly_data(&_preg_268435508._c0_poly);
  Free_poly_data(&_pgen_tmp_2_129._c1_poly);
  Free_poly_data(&_pgen_tmp_2_129._c0_poly);
  Free_poly_data(&_preg_268435509._c1_poly);
  Free_poly_data(&_preg_268435509._c0_poly);
  Free_poly_data(&_pgen_tmp_3_130._c1_poly);
  Free_poly_data(&_pgen_tmp_3_130._c0_poly);
  Free_poly_data(&_preg_268435510._c1_poly);
  Free_poly_data(&_preg_268435510._c0_poly);
  Free_poly_data(&_pgen_tmp_4_131._c1_poly);
  Free_poly_data(&_pgen_tmp_4_131._c0_poly);
  Free_poly_data(&_preg_268435511._c1_poly);
  Free_poly_data(&_preg_268435511._c0_poly);
  Free_poly_data(&_pgen_tmp_5_132._c1_poly);
  Free_poly_data(&_pgen_tmp_5_132._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=9
  for (bs_input_n0_2 = 0; bs_input_n0_2 < 9; bs_input_n0_2 = bs_input_n0_2 + 1) {
    _preg_268435512 = Rotate(input_dup_n0_1, _cst_31[bs_input_n0_2]);
    Copy_ciph(&input_block_n0_3[bs_input_n0_2], &_preg_268435512);
    Free_poly_data(&_preg_268435512._c1_poly);
    Free_poly_data(&_preg_268435512._c0_poly);
  }
  Free_poly_data(&input_dup_n0_1._c1_poly);
  Free_poly_data(&input_dup_n0_1._c0_poly);
  Zero_ciph(&result_n1_4);
  for (num_grid_n1_5 = 0; num_grid_n1_5 < 4; num_grid_n1_5 = num_grid_n1_5 + 1) {
    Zero_ciph(&result_grid_n1_6);
    for (cap_block_n1_7 = 0; cap_block_n1_7 < 9; cap_block_n1_7 = cap_block_n1_7 + 1) {
      _ckks_gen_tmp_89_97 = input_block_n0_3[cap_block_n1_7];
      Pt_from_msg_ofst(&_pgen_tmp_6_133, 0/* cst_29 */, ((cap_block_n1_7 + (num_grid_n1_5 * 9))) * (32768), 32768, 1, 6);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_7_134, &_ckks_gen_tmp_89_97, &_pgen_tmp_6_133);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n1_6, &result_grid_n1_6, &_pgen_tmp_7_134);
      _pgen_modulus_124 = Q_modulus();
      _pgen_num_q_125 = Poly_level(&result_grid_n1_6._c0_poly);
      for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_7_134._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_89_97._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_6_133._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_7_134._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_89_97._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_6_133._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modadd(Coeffs(&result_grid_n1_6._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&result_grid_n1_6._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_7_134._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modadd(Coeffs(&result_grid_n1_6._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&result_grid_n1_6._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_7_134._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        _pgen_modulus_124 = _pgen_modulus_124 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435513 = Rotate(result_grid_n1_6, num_grid_n1_5 * 1024);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n1_4, &result_n1_4, &_preg_268435513);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&result_n1_4._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modadd(Coeffs(&result_n1_4._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&result_n1_4._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435513._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&result_n1_4._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&result_n1_4._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435513._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435513._c1_poly);
    Free_poly_data(&_preg_268435513._c0_poly);
  }
  Free_ciph_poly(input_block_n0_3, 9);
  Free_poly_data(&_pgen_tmp_6_133._poly);
  Free_poly_data(&_pgen_tmp_7_134._c1_poly);
  Free_poly_data(&_pgen_tmp_7_134._c0_poly);
  Free_poly_data(&result_grid_n1_6._c1_poly);
  Free_poly_data(&result_grid_n1_6._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n1_4, &result_n1_4);
  Rescale(&result_n1_4._c0_poly, &result_n1_4._c0_poly);
  Rescale(&result_n1_4._c1_poly, &result_n1_4._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_9_136, 1 /* cst_32 */, 32768, 1, 5);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_8_135, &result_n1_4, &_pgen_tmp_9_136);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&_pgen_tmp_8_135._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_8_135._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&result_n1_4._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_9_136._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_8_135._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&result_n1_4._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_9_136._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_9_136._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435457, &_pgen_tmp_8_135);
  Rescale(&_preg_268435457._c0_poly, &_pgen_tmp_8_135._c0_poly);
  Rescale(&_preg_268435457._c1_poly, &_pgen_tmp_8_135._c1_poly);
  Free_poly_data(&_pgen_tmp_8_135._c1_poly);
  Free_poly_data(&_pgen_tmp_8_135._c0_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_10_137, 2 /* cst_30 */, 32768, 1, 4);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n1_4, &_preg_268435457, &_pgen_tmp_10_137);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&result_n1_4._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&result_n1_4._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435457._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_10_137._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Set_coeffs(&result_n1_4._c1_poly, _pgen_rns_idx_126, degree, Coeffs(&_preg_268435457._c1_poly, _pgen_rns_idx_126, degree));
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_10_137._poly);
  Free_poly_data(&_preg_268435457._c1_poly);
  Free_poly_data(&_preg_268435457._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435458, &result_n1_4);
  Free_poly_data(&result_n1_4._c1_poly);
  Free_poly_data(&result_n1_4._c0_poly);
  Copy_ciph(&orig_result1_8, &_preg_268435458);
  Free_poly_data(&_preg_268435458._c1_poly);
  Free_poly_data(&_preg_268435458._c0_poly);
  Zero_ciph(&comb_row_result2_9);
  for (comb_row_index_n2_10 = 0; comb_row_index_n2_10 < 16; comb_row_index_n2_10 = comb_row_index_n2_10 + 1) {
    _preg_268435514 = Rotate(orig_result1_8, comb_row_index_n2_10 * 1);
    Copy_ciph(&_ckks_gen_tmp_161_98, &_preg_268435514);
    Pt_from_msg_ofst(&_pgen_tmp_11_138, 3/* cst_33 */, (comb_row_index_n2_10) * (32768), 32768, 1, 4);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_12_139, &_ckks_gen_tmp_161_98, &_pgen_tmp_11_138);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&comb_row_result2_9, &comb_row_result2_9, &_pgen_tmp_12_139);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&comb_row_result2_9._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_12_139._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_161_98._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_11_138._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_12_139._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_161_98._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_11_138._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&comb_row_result2_9._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&comb_row_result2_9._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_12_139._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&comb_row_result2_9._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&comb_row_result2_9._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_12_139._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435514._c1_poly);
    Free_poly_data(&_preg_268435514._c0_poly);
  }
  Free_poly_data(&orig_result1_8._c1_poly);
  Free_poly_data(&orig_result1_8._c0_poly);
  Free_poly_data(&_pgen_tmp_11_138._poly);
  Free_poly_data(&_ckks_gen_tmp_161_98._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_161_98._c0_poly);
  Free_poly_data(&_pgen_tmp_12_139._c1_poly);
  Free_poly_data(&_pgen_tmp_12_139._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&comb_row_result2_9, &comb_row_result2_9);
  Rescale(&comb_row_result2_9._c0_poly, &comb_row_result2_9._c0_poly);
  Rescale(&comb_row_result2_9._c1_poly, &comb_row_result2_9._c1_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&comb_rc_result2_11);
  for (comb_rc_index_n2_12 = 0; comb_rc_index_n2_12 < 16; comb_rc_index_n2_12 = comb_rc_index_n2_12 + 1) {
    _preg_268435515 = Rotate(comb_row_result2_9, comb_rc_index_n2_12 * 48);
    Copy_ciph(&_ckks_gen_tmp_194_99, &_preg_268435515);
    Pt_from_msg_ofst(&_pgen_tmp_13_140, 4/* cst_34 */, (comb_rc_index_n2_12) * (32768), 32768, 1, 3);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_14_141, &_ckks_gen_tmp_194_99, &_pgen_tmp_13_140);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&comb_rc_result2_11, &comb_rc_result2_11, &_pgen_tmp_14_141);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&comb_rc_result2_11._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_14_141._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_194_99._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_13_140._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_14_141._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_194_99._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_13_140._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&comb_rc_result2_11._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&comb_rc_result2_11._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_14_141._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&comb_rc_result2_11._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&comb_rc_result2_11._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_14_141._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435515._c1_poly);
    Free_poly_data(&_preg_268435515._c0_poly);
  }
  Free_poly_data(&comb_row_result2_9._c1_poly);
  Free_poly_data(&comb_row_result2_9._c0_poly);
  Free_poly_data(&_pgen_tmp_13_140._poly);
  Free_poly_data(&_ckks_gen_tmp_194_99._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_194_99._c0_poly);
  Free_poly_data(&_pgen_tmp_14_141._c1_poly);
  Free_poly_data(&_pgen_tmp_14_141._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&comb_rc_result2_11, &comb_rc_result2_11);
  Rescale(&comb_rc_result2_11._c0_poly, &comb_rc_result2_11._c0_poly);
  Rescale(&comb_rc_result2_11._c1_poly, &comb_rc_result2_11._c1_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&ss_result2_13);
  for (comb_cc_index_n2_14 = 0; comb_cc_index_n2_14 < 32; comb_cc_index_n2_14 = comb_cc_index_n2_14 + 1) {
    _preg_268435516 = Rotate(comb_rc_result2_11, comb_cc_index_n2_14 * 768);
    Copy_ciph(&_ckks_gen_tmp_227_100, &_preg_268435516);
    Pt_from_msg_ofst(&_pgen_tmp_15_142, 5/* cst_35 */, (comb_cc_index_n2_14) * (32768), 32768, 1, 2);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_16_143, &_ckks_gen_tmp_227_100, &_pgen_tmp_15_142);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&ss_result2_13, &ss_result2_13, &_pgen_tmp_16_143);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&ss_result2_13._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_16_143._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_227_100._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_15_142._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_16_143._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_227_100._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_15_142._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&ss_result2_13._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&ss_result2_13._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_16_143._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&ss_result2_13._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&ss_result2_13._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_16_143._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435516._c1_poly);
    Free_poly_data(&_preg_268435516._c0_poly);
  }
  Free_poly_data(&comb_rc_result2_11._c1_poly);
  Free_poly_data(&comb_rc_result2_11._c0_poly);
  Free_poly_data(&_pgen_tmp_15_142._poly);
  Free_poly_data(&_ckks_gen_tmp_227_100._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_227_100._c0_poly);
  Free_poly_data(&_pgen_tmp_16_143._c1_poly);
  Free_poly_data(&_pgen_tmp_16_143._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&ss_result2_13, &ss_result2_13);
  Rescale(&ss_result2_13._c0_poly, &ss_result2_13._c0_poly);
  Rescale(&ss_result2_13._c1_poly, &ss_result2_13._c1_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&_preg_268435459, &ss_result2_13);
  Free_poly_data(&ss_result2_13._c1_poly);
  Free_poly_data(&ss_result2_13._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 33
  // /features/features.1/Relu
  // pragma: 65536, 1033, 39
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435460, &_preg_268435459, 18);
  Free_poly_data(&_preg_268435459._c1_poly);
  Free_poly_data(&_preg_268435459._c0_poly);
  _preg_268435461 = App_relu(_preg_268435460, _preg_268435460, 8192);
  Free_poly_data(&_preg_268435460._c1_poly);
  Free_poly_data(&_preg_268435460._c0_poly);
  Copy_ciph(&_preg_268435462, &_preg_268435461);
  Free_poly_data(&_preg_268435461._c1_poly);
  Free_poly_data(&_preg_268435461._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 39
  // /features/features.2/AveragePool
  // pragma: 65536, 1026, 40
  CMPLR_TM_START(3, 0);
  Copy_ciph(&_preg_268435463, &_preg_268435462);
  Free_poly_data(&_preg_268435462._c1_poly);
  Free_poly_data(&_preg_268435462._c0_poly);
  _preg_268435517 = Rotate(_preg_268435463, 16);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&tmp_row_add2_15, &_preg_268435463, &_preg_268435517);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&tmp_row_add2_15._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&tmp_row_add2_15._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435463._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435517._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&tmp_row_add2_15._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435463._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435517._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_preg_268435517._c1_poly);
  Free_poly_data(&_preg_268435517._c0_poly);
  Free_poly_data(&_preg_268435463._c1_poly);
  Free_poly_data(&_preg_268435463._c0_poly);
  CMPLR_TM_END(12, 0);
  _preg_268435518 = Rotate(tmp_row_add2_15, 1);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_ckks_gen_tmp_284_101, &tmp_row_add2_15, &_preg_268435518);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&_ckks_gen_tmp_284_101._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&_ckks_gen_tmp_284_101._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&tmp_row_add2_15._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435518._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_ckks_gen_tmp_284_101._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&tmp_row_add2_15._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435518._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_preg_268435518._c1_poly);
  Free_poly_data(&_preg_268435518._c0_poly);
  Free_poly_data(&tmp_row_add2_15._c1_poly);
  Free_poly_data(&tmp_row_add2_15._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_18_145, 6 /* cst_36 */, 8192, 1, 7);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_17_144, &_ckks_gen_tmp_284_101, &_pgen_tmp_18_145);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&_pgen_tmp_17_144._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_17_144._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_284_101._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_18_145._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_17_144._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_284_101._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_18_145._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_18_145._poly);
  Free_poly_data(&_ckks_gen_tmp_284_101._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_284_101._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435464, &_pgen_tmp_17_144);
  Rescale(&_preg_268435464._c0_poly, &_pgen_tmp_17_144._c0_poly);
  Rescale(&_preg_268435464._c1_poly, &_pgen_tmp_17_144._c1_poly);
  Free_poly_data(&_pgen_tmp_17_144._c1_poly);
  Free_poly_data(&_pgen_tmp_17_144._c0_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&orig_result2_16, &_preg_268435464);
  Free_poly_data(&_preg_268435464._c1_poly);
  Free_poly_data(&_preg_268435464._c0_poly);
  Zero_ciph(&comb_row_result3_17);
  for (comb_row_index_n3_18 = 0; comb_row_index_n3_18 < 8; comb_row_index_n3_18 = comb_row_index_n3_18 + 1) {
    _preg_268435519 = Rotate(orig_result2_16, comb_row_index_n3_18 * 1);
    Copy_ciph(&_ckks_gen_tmp_315_102, &_preg_268435519);
    Pt_from_msg_ofst(&_pgen_tmp_19_146, 7/* cst_37 */, (comb_row_index_n3_18) * (8192), 8192, 1, 6);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_20_147, &_ckks_gen_tmp_315_102, &_pgen_tmp_19_146);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&comb_row_result3_17, &comb_row_result3_17, &_pgen_tmp_20_147);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&comb_row_result3_17._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_20_147._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_315_102._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_19_146._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_20_147._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_315_102._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_19_146._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&comb_row_result3_17._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&comb_row_result3_17._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_20_147._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&comb_row_result3_17._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&comb_row_result3_17._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_20_147._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435519._c1_poly);
    Free_poly_data(&_preg_268435519._c0_poly);
  }
  Free_poly_data(&orig_result2_16._c1_poly);
  Free_poly_data(&orig_result2_16._c0_poly);
  Free_poly_data(&_pgen_tmp_19_146._poly);
  Free_poly_data(&_ckks_gen_tmp_315_102._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_315_102._c0_poly);
  Free_poly_data(&_pgen_tmp_20_147._c1_poly);
  Free_poly_data(&_pgen_tmp_20_147._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&comb_row_result3_17, &comb_row_result3_17);
  Rescale(&comb_row_result3_17._c0_poly, &comb_row_result3_17._c0_poly);
  Rescale(&comb_row_result3_17._c1_poly, &comb_row_result3_17._c1_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&comb_rc_result3_19);
  for (comb_rc_index_n3_20 = 0; comb_rc_index_n3_20 < 8; comb_rc_index_n3_20 = comb_rc_index_n3_20 + 1) {
    _preg_268435520 = Rotate(comb_row_result3_17, comb_rc_index_n3_20 * 24);
    Copy_ciph(&_ckks_gen_tmp_348_103, &_preg_268435520);
    Pt_from_msg_ofst(&_pgen_tmp_21_148, 8/* cst_38 */, (comb_rc_index_n3_20) * (8192), 8192, 1, 5);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_22_149, &_ckks_gen_tmp_348_103, &_pgen_tmp_21_148);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&comb_rc_result3_19, &comb_rc_result3_19, &_pgen_tmp_22_149);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&comb_rc_result3_19._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_22_149._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_348_103._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_21_148._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_22_149._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_348_103._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_21_148._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&comb_rc_result3_19._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&comb_rc_result3_19._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_22_149._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&comb_rc_result3_19._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&comb_rc_result3_19._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_22_149._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435520._c1_poly);
    Free_poly_data(&_preg_268435520._c0_poly);
  }
  Free_poly_data(&comb_row_result3_17._c1_poly);
  Free_poly_data(&comb_row_result3_17._c0_poly);
  Free_poly_data(&_pgen_tmp_21_148._poly);
  Free_poly_data(&_ckks_gen_tmp_348_103._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_348_103._c0_poly);
  Free_poly_data(&_pgen_tmp_22_149._c1_poly);
  Free_poly_data(&_pgen_tmp_22_149._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&comb_rc_result3_19, &comb_rc_result3_19);
  Rescale(&comb_rc_result3_19._c0_poly, &comb_rc_result3_19._c0_poly);
  Rescale(&comb_rc_result3_19._c1_poly, &comb_rc_result3_19._c1_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&ss_result3_21);
  for (comb_cc_index_n3_22 = 0; comb_cc_index_n3_22 < 32; comb_cc_index_n3_22 = comb_cc_index_n3_22 + 1) {
    _preg_268435521 = Rotate(comb_rc_result3_19, comb_cc_index_n3_22 * 192);
    Copy_ciph(&_ckks_gen_tmp_381_104, &_preg_268435521);
    Pt_from_msg_ofst(&_pgen_tmp_23_150, 9/* cst_39 */, (comb_cc_index_n3_22) * (8192), 8192, 1, 4);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_24_151, &_ckks_gen_tmp_381_104, &_pgen_tmp_23_150);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&ss_result3_21, &ss_result3_21, &_pgen_tmp_24_151);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&ss_result3_21._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_24_151._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_381_104._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_23_150._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_24_151._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_381_104._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_23_150._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&ss_result3_21._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&ss_result3_21._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_24_151._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&ss_result3_21._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&ss_result3_21._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_24_151._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435521._c1_poly);
    Free_poly_data(&_preg_268435521._c0_poly);
  }
  Free_poly_data(&comb_rc_result3_19._c1_poly);
  Free_poly_data(&comb_rc_result3_19._c0_poly);
  Free_poly_data(&_pgen_tmp_23_150._poly);
  Free_poly_data(&_ckks_gen_tmp_381_104._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_381_104._c0_poly);
  Free_poly_data(&_pgen_tmp_24_151._c1_poly);
  Free_poly_data(&_pgen_tmp_24_151._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&ss_result3_21, &ss_result3_21);
  Rescale(&ss_result3_21._c0_poly, &ss_result3_21._c0_poly);
  Rescale(&ss_result3_21._c1_poly, &ss_result3_21._c1_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&_preg_268435465, &ss_result3_21);
  Free_poly_data(&ss_result3_21._c1_poly);
  Free_poly_data(&ss_result3_21._c0_poly);
  CMPLR_TM_END(3, 0);
  // pragma: 65537, 1026, 40
  // /features/features.3/Conv
  // pragma: 65536, 1027, 41
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435466, &_preg_268435465);
  Free_poly_data(&_preg_268435465._c1_poly);
  Free_poly_data(&_preg_268435465._c0_poly);
  // BlockingRot replicate=3
  _preg_268435522 = Rotate(_preg_268435466, -2048);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_25_152, &_preg_268435466, &_preg_268435522);
  CMPLR_TM_END(12, 0);
  _preg_268435523 = Rotate(_preg_268435466, -4096);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n3_23, &_pgen_tmp_25_152, &_preg_268435523);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&input_dup_n3_23._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_25_152._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435466._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435522._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_25_152._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435466._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435522._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&input_dup_n3_23._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_25_152._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435523._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&input_dup_n3_23._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_25_152._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435523._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_preg_268435522._c1_poly);
  Free_poly_data(&_preg_268435522._c0_poly);
  Free_poly_data(&_preg_268435466._c1_poly);
  Free_poly_data(&_preg_268435466._c0_poly);
  Free_poly_data(&_preg_268435523._c1_poly);
  Free_poly_data(&_preg_268435523._c0_poly);
  Free_poly_data(&_pgen_tmp_25_152._c1_poly);
  Free_poly_data(&_pgen_tmp_25_152._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=9
  for (bs_input_n3_24 = 0; bs_input_n3_24 < 9; bs_input_n3_24 = bs_input_n3_24 + 1) {
    _preg_268435524 = Rotate(input_dup_n3_23, _cst_43[bs_input_n3_24]);
    Copy_ciph(&input_block_n3_25[bs_input_n3_24], &_preg_268435524);
    Free_poly_data(&_preg_268435524._c1_poly);
    Free_poly_data(&_preg_268435524._c0_poly);
  }
  Free_poly_data(&input_dup_n3_23._c1_poly);
  Free_poly_data(&input_dup_n3_23._c0_poly);
  Zero_ciph(&result_n4_26);
  for (num_grid_n4_27 = 0; num_grid_n4_27 < 32; num_grid_n4_27 = num_grid_n4_27 + 1) {
    Zero_ciph(&result_grid_n4_28);
    for (cap_block_n4_29 = 0; cap_block_n4_29 < 9; cap_block_n4_29 = cap_block_n4_29 + 1) {
      _ckks_gen_tmp_467_105 = input_block_n3_25[cap_block_n4_29];
      Pt_from_msg_ofst(&_pgen_tmp_26_153, 10/* cst_41 */, ((cap_block_n4_29 + (num_grid_n4_27 * 9))) * (6144), 6144, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_27_154, &_ckks_gen_tmp_467_105, &_pgen_tmp_26_153);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n4_28, &result_grid_n4_28, &_pgen_tmp_27_154);
      _pgen_modulus_124 = Q_modulus();
      _pgen_num_q_125 = Poly_level(&result_grid_n4_28._c0_poly);
      for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_27_154._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_467_105._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_26_153._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_27_154._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_467_105._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_26_153._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modadd(Coeffs(&result_grid_n4_28._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&result_grid_n4_28._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_27_154._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modadd(Coeffs(&result_grid_n4_28._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&result_grid_n4_28._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_27_154._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        _pgen_modulus_124 = _pgen_modulus_124 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435525 = Rotate(result_grid_n4_28, num_grid_n4_27 * 64);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n4_26, &result_n4_26, &_preg_268435525);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&result_n4_26._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modadd(Coeffs(&result_n4_26._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&result_n4_26._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435525._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&result_n4_26._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&result_n4_26._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435525._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435525._c1_poly);
    Free_poly_data(&_preg_268435525._c0_poly);
  }
  Free_ciph_poly(input_block_n3_25, 9);
  Free_poly_data(&_pgen_tmp_26_153._poly);
  Free_poly_data(&_pgen_tmp_27_154._c1_poly);
  Free_poly_data(&_pgen_tmp_27_154._c0_poly);
  Free_poly_data(&result_grid_n4_28._c1_poly);
  Free_poly_data(&result_grid_n4_28._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n4_26, &result_n4_26);
  Rescale(&result_n4_26._c0_poly, &result_n4_26._c0_poly);
  Rescale(&result_n4_26._c1_poly, &result_n4_26._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_29_156, 11 /* cst_44 */, 6144, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_28_155, &result_n4_26, &_pgen_tmp_29_156);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&_pgen_tmp_28_155._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_28_155._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&result_n4_26._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_29_156._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_28_155._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&result_n4_26._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_29_156._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_29_156._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435467, &_pgen_tmp_28_155);
  Rescale(&_preg_268435467._c0_poly, &_pgen_tmp_28_155._c0_poly);
  Rescale(&_preg_268435467._c1_poly, &_pgen_tmp_28_155._c1_poly);
  Free_poly_data(&_pgen_tmp_28_155._c1_poly);
  Free_poly_data(&_pgen_tmp_28_155._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435526 = Rotate(result_n4_26, -6144);
  Copy_ciph(&_ckks_gen_tmp_511_106, &_preg_268435526);
  Free_poly_data(&_preg_268435526._c1_poly);
  Free_poly_data(&_preg_268435526._c0_poly);
  Pt_from_msg(&_pgen_tmp_31_158, 12 /* cst_45 */, 6144, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_30_157, &_ckks_gen_tmp_511_106, &_pgen_tmp_31_158);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&_pgen_tmp_30_157._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_30_157._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_511_106._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_31_158._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_30_157._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_511_106._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_31_158._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_31_158._poly);
  Free_poly_data(&_ckks_gen_tmp_511_106._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_511_106._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_32_159, &_pgen_tmp_30_157);
  Rescale(&_pgen_tmp_32_159._c0_poly, &_pgen_tmp_30_157._c0_poly);
  Rescale(&_pgen_tmp_32_159._c1_poly, &_pgen_tmp_30_157._c1_poly);
  Free_poly_data(&_pgen_tmp_30_157._c1_poly);
  Free_poly_data(&_pgen_tmp_30_157._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435467, &_preg_268435467, &_pgen_tmp_32_159);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&_preg_268435467._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&_preg_268435467._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435467._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_32_159._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_preg_268435467._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435467._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_32_159._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_32_159._c1_poly);
  Free_poly_data(&_pgen_tmp_32_159._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_33_160, 13 /* cst_42 */, 6144, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n4_26, &_preg_268435467, &_pgen_tmp_33_160);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&result_n4_26._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&result_n4_26._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435467._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_33_160._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Set_coeffs(&result_n4_26._c1_poly, _pgen_rns_idx_126, degree, Coeffs(&_preg_268435467._c1_poly, _pgen_rns_idx_126, degree));
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_33_160._poly);
  Free_poly_data(&_preg_268435467._c1_poly);
  Free_poly_data(&_preg_268435467._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435468, &result_n4_26);
  Free_poly_data(&result_n4_26._c1_poly);
  Free_poly_data(&result_n4_26._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 41
  // /features/features.4/Relu
  // pragma: 65536, 1033, 42
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435469, &_preg_268435468, 17);
  Free_poly_data(&_preg_268435468._c1_poly);
  Free_poly_data(&_preg_268435468._c0_poly);
  _preg_268435470 = App_relu(_preg_268435469, _preg_268435469, 6144);
  Free_poly_data(&_preg_268435469._c1_poly);
  Free_poly_data(&_preg_268435469._c0_poly);
  Copy_ciph(&_preg_268435471, &_preg_268435470);
  Free_poly_data(&_preg_268435470._c1_poly);
  Free_poly_data(&_preg_268435470._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 42
  // /features/features.5/AveragePool
  // pragma: 65536, 1026, 43
  CMPLR_TM_START(3, 0);
  Copy_ciph(&_preg_268435472, &_preg_268435471);
  Free_poly_data(&_preg_268435471._c1_poly);
  Free_poly_data(&_preg_268435471._c0_poly);
  _preg_268435527 = Rotate(_preg_268435472, 8);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&tmp_row_add4_30, &_preg_268435472, &_preg_268435527);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&tmp_row_add4_30._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&tmp_row_add4_30._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435472._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435527._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&tmp_row_add4_30._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435472._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435527._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_preg_268435527._c1_poly);
  Free_poly_data(&_preg_268435527._c0_poly);
  Free_poly_data(&_preg_268435472._c1_poly);
  Free_poly_data(&_preg_268435472._c0_poly);
  CMPLR_TM_END(12, 0);
  _preg_268435528 = Rotate(tmp_row_add4_30, 1);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_ckks_gen_tmp_575_107, &tmp_row_add4_30, &_preg_268435528);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&_ckks_gen_tmp_575_107._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&_ckks_gen_tmp_575_107._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&tmp_row_add4_30._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435528._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_ckks_gen_tmp_575_107._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&tmp_row_add4_30._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435528._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_preg_268435528._c1_poly);
  Free_poly_data(&_preg_268435528._c0_poly);
  Free_poly_data(&tmp_row_add4_30._c1_poly);
  Free_poly_data(&tmp_row_add4_30._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_35_162, 14 /* cst_46 */, 6144, 1, 6);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_34_161, &_ckks_gen_tmp_575_107, &_pgen_tmp_35_162);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&_pgen_tmp_34_161._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_34_161._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_575_107._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_35_162._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_34_161._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_575_107._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_35_162._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_35_162._poly);
  Free_poly_data(&_ckks_gen_tmp_575_107._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_575_107._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435473, &_pgen_tmp_34_161);
  Rescale(&_preg_268435473._c0_poly, &_pgen_tmp_34_161._c0_poly);
  Rescale(&_preg_268435473._c1_poly, &_pgen_tmp_34_161._c1_poly);
  Free_poly_data(&_pgen_tmp_34_161._c1_poly);
  Free_poly_data(&_pgen_tmp_34_161._c0_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&orig_result4_31, &_preg_268435473);
  Free_poly_data(&_preg_268435473._c1_poly);
  Free_poly_data(&_preg_268435473._c0_poly);
  Zero_ciph(&comb_dic_result5_32);
  for (comb_dic_index_n5_33 = 0; comb_dic_index_n5_33 < 1; comb_dic_index_n5_33 = comb_dic_index_n5_33 + 1) {
    _preg_268435529 = Rotate(orig_result4_31, 1 << comb_dic_index_n5_33);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&orig_result4_31, &orig_result4_31, &_preg_268435529);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&orig_result4_31._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modadd(Coeffs(&orig_result4_31._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&orig_result4_31._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435529._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&orig_result4_31._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&orig_result4_31._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435529._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435529._c1_poly);
    Free_poly_data(&_preg_268435529._c0_poly);
  }
  for (comb_dic_index_out_n5_34 = 0; comb_dic_index_out_n5_34 < 4; comb_dic_index_out_n5_34 = comb_dic_index_out_n5_34 + 1) {
    for (comb_dic_index_in_n5_35 = 0; comb_dic_index_in_n5_35 < 2; comb_dic_index_in_n5_35 = comb_dic_index_in_n5_35 + 1) {
      _preg_268435530 = Rotate(orig_result4_31, (comb_dic_index_out_n5_34 * 12) + (comb_dic_index_in_n5_35 * 2));
      Copy_ciph(&_ckks_gen_tmp_638_108, &_preg_268435530);
      Pt_from_msg_ofst(&_pgen_tmp_36_163, 15/* cst_47 */, (((comb_dic_index_out_n5_34 * 2) + comb_dic_index_in_n5_35)) * (6144), 6144, 1, 5);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_37_164, &_ckks_gen_tmp_638_108, &_pgen_tmp_36_163);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&comb_dic_result5_32, &comb_dic_result5_32, &_pgen_tmp_37_164);
      _pgen_modulus_124 = Q_modulus();
      _pgen_num_q_125 = Poly_level(&comb_dic_result5_32._c0_poly);
      for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_37_164._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_638_108._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_36_163._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_37_164._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_638_108._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_36_163._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modadd(Coeffs(&comb_dic_result5_32._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&comb_dic_result5_32._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_37_164._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modadd(Coeffs(&comb_dic_result5_32._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&comb_dic_result5_32._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_37_164._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        _pgen_modulus_124 = _pgen_modulus_124 + 1;
      }
      CMPLR_TM_END(12, 0);
      Free_poly_data(&_preg_268435530._c1_poly);
      Free_poly_data(&_preg_268435530._c0_poly);
    }
  }
  Free_poly_data(&orig_result4_31._c1_poly);
  Free_poly_data(&orig_result4_31._c0_poly);
  Free_poly_data(&_pgen_tmp_36_163._poly);
  Free_poly_data(&_ckks_gen_tmp_638_108._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_638_108._c0_poly);
  Free_poly_data(&_pgen_tmp_37_164._c1_poly);
  Free_poly_data(&_pgen_tmp_37_164._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&comb_dic_result5_32, &comb_dic_result5_32);
  Rescale(&comb_dic_result5_32._c0_poly, &comb_dic_result5_32._c0_poly);
  Rescale(&comb_dic_result5_32._c1_poly, &comb_dic_result5_32._c1_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&ss_result5_36);
  for (comb_cc_index_n5_37 = 0; comb_cc_index_n5_37 < 96; comb_cc_index_n5_37 = comb_cc_index_n5_37 + 1) {
    _preg_268435531 = Rotate(comb_dic_result5_32, comb_cc_index_n5_37 * 48);
    Copy_ciph(&_ckks_gen_tmp_675_109, &_preg_268435531);
    Pt_from_msg_ofst(&_pgen_tmp_38_165, 16/* cst_48 */, (comb_cc_index_n5_37) * (6144), 6144, 1, 4);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_39_166, &_ckks_gen_tmp_675_109, &_pgen_tmp_38_165);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&ss_result5_36, &ss_result5_36, &_pgen_tmp_39_166);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&ss_result5_36._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_39_166._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_675_109._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_38_165._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_39_166._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_675_109._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_38_165._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&ss_result5_36._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&ss_result5_36._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_39_166._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&ss_result5_36._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&ss_result5_36._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_39_166._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435531._c1_poly);
    Free_poly_data(&_preg_268435531._c0_poly);
  }
  Free_poly_data(&comb_dic_result5_32._c1_poly);
  Free_poly_data(&comb_dic_result5_32._c0_poly);
  Free_poly_data(&_pgen_tmp_38_165._poly);
  Free_poly_data(&_ckks_gen_tmp_675_109._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_675_109._c0_poly);
  Free_poly_data(&_pgen_tmp_39_166._c1_poly);
  Free_poly_data(&_pgen_tmp_39_166._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&ss_result5_36, &ss_result5_36);
  Rescale(&ss_result5_36._c0_poly, &ss_result5_36._c0_poly);
  Rescale(&ss_result5_36._c1_poly, &ss_result5_36._c1_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&_preg_268435474, &ss_result5_36);
  Free_poly_data(&ss_result5_36._c1_poly);
  Free_poly_data(&ss_result5_36._c0_poly);
  CMPLR_TM_END(3, 0);
  // pragma: 65537, 1026, 43
  // /features/features.6/Conv
  // pragma: 65536, 1027, 44
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435475, &_preg_268435474);
  Free_poly_data(&_preg_268435474._c1_poly);
  Free_poly_data(&_preg_268435474._c0_poly);
  // BlockingRot replicate=2
  _preg_268435532 = Rotate(_preg_268435475, -1536);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n5_38, &_preg_268435475, &_preg_268435532);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&input_dup_n5_38._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&input_dup_n5_38._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435475._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435532._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&input_dup_n5_38._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435475._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435532._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_preg_268435532._c1_poly);
  Free_poly_data(&_preg_268435532._c0_poly);
  Free_poly_data(&_preg_268435475._c1_poly);
  Free_poly_data(&_preg_268435475._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=9
  for (bs_input_n5_39 = 0; bs_input_n5_39 < 9; bs_input_n5_39 = bs_input_n5_39 + 1) {
    _preg_268435533 = Rotate(input_dup_n5_38, _cst_52[bs_input_n5_39]);
    Copy_ciph(&input_block_n5_40[bs_input_n5_39], &_preg_268435533);
    Free_poly_data(&_preg_268435533._c1_poly);
    Free_poly_data(&_preg_268435533._c0_poly);
  }
  Free_poly_data(&input_dup_n5_38._c1_poly);
  Free_poly_data(&input_dup_n5_38._c0_poly);
  Zero_ciph(&result_n6_41);
  for (num_grid_n6_42 = 0; num_grid_n6_42 < 96; num_grid_n6_42 = num_grid_n6_42 + 1) {
    Zero_ciph(&result_grid_n6_43);
    for (cap_block_n6_44 = 0; cap_block_n6_44 < 9; cap_block_n6_44 = cap_block_n6_44 + 1) {
      _ckks_gen_tmp_757_110 = input_block_n5_40[cap_block_n6_44];
      Pt_from_msg_ofst(&_pgen_tmp_40_167, 17/* cst_50 */, ((cap_block_n6_44 + (num_grid_n6_42 * 9))) * (3072), 3072, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_41_168, &_ckks_gen_tmp_757_110, &_pgen_tmp_40_167);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n6_43, &result_grid_n6_43, &_pgen_tmp_41_168);
      _pgen_modulus_124 = Q_modulus();
      _pgen_num_q_125 = Poly_level(&result_grid_n6_43._c0_poly);
      for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_41_168._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_757_110._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_40_167._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_41_168._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_757_110._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_40_167._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modadd(Coeffs(&result_grid_n6_43._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&result_grid_n6_43._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_41_168._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modadd(Coeffs(&result_grid_n6_43._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&result_grid_n6_43._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_41_168._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        _pgen_modulus_124 = _pgen_modulus_124 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435534 = Rotate(result_grid_n6_43, num_grid_n6_42 * 16);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n6_41, &result_n6_41, &_preg_268435534);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&result_n6_41._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modadd(Coeffs(&result_n6_41._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&result_n6_41._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435534._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&result_n6_41._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&result_n6_41._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435534._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435534._c1_poly);
    Free_poly_data(&_preg_268435534._c0_poly);
  }
  Free_ciph_poly(input_block_n5_40, 9);
  Free_poly_data(&_pgen_tmp_40_167._poly);
  Free_poly_data(&_pgen_tmp_41_168._c1_poly);
  Free_poly_data(&_pgen_tmp_41_168._c0_poly);
  Free_poly_data(&result_grid_n6_43._c1_poly);
  Free_poly_data(&result_grid_n6_43._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n6_41, &result_n6_41);
  Rescale(&result_n6_41._c0_poly, &result_n6_41._c0_poly);
  Rescale(&result_n6_41._c1_poly, &result_n6_41._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_43_170, 18 /* cst_53 */, 3072, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_42_169, &result_n6_41, &_pgen_tmp_43_170);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&_pgen_tmp_42_169._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_42_169._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&result_n6_41._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_43_170._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_42_169._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&result_n6_41._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_43_170._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_43_170._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435476, &_pgen_tmp_42_169);
  Rescale(&_preg_268435476._c0_poly, &_pgen_tmp_42_169._c0_poly);
  Rescale(&_preg_268435476._c1_poly, &_pgen_tmp_42_169._c1_poly);
  Free_poly_data(&_pgen_tmp_42_169._c1_poly);
  Free_poly_data(&_pgen_tmp_42_169._c0_poly);
  CMPLR_TM_END(19, 0);
  _preg_268435535 = Rotate(result_n6_41, -3072);
  Copy_ciph(&_ckks_gen_tmp_801_111, &_preg_268435535);
  Free_poly_data(&_preg_268435535._c1_poly);
  Free_poly_data(&_preg_268435535._c0_poly);
  Pt_from_msg(&_pgen_tmp_45_172, 19 /* cst_54 */, 3072, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_44_171, &_ckks_gen_tmp_801_111, &_pgen_tmp_45_172);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&_pgen_tmp_44_171._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_44_171._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_801_111._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_45_172._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_44_171._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_801_111._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_45_172._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_45_172._poly);
  Free_poly_data(&_ckks_gen_tmp_801_111._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_801_111._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_46_173, &_pgen_tmp_44_171);
  Rescale(&_pgen_tmp_46_173._c0_poly, &_pgen_tmp_44_171._c0_poly);
  Rescale(&_pgen_tmp_46_173._c1_poly, &_pgen_tmp_44_171._c1_poly);
  Free_poly_data(&_pgen_tmp_44_171._c1_poly);
  Free_poly_data(&_pgen_tmp_44_171._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435476, &_preg_268435476, &_pgen_tmp_46_173);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&_preg_268435476._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&_preg_268435476._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435476._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_46_173._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_preg_268435476._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435476._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_46_173._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_46_173._c1_poly);
  Free_poly_data(&_pgen_tmp_46_173._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_47_174, 20 /* cst_51 */, 3072, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n6_41, &_preg_268435476, &_pgen_tmp_47_174);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&result_n6_41._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&result_n6_41._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435476._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_47_174._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Set_coeffs(&result_n6_41._c1_poly, _pgen_rns_idx_126, degree, Coeffs(&_preg_268435476._c1_poly, _pgen_rns_idx_126, degree));
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_47_174._poly);
  Free_poly_data(&_preg_268435476._c1_poly);
  Free_poly_data(&_preg_268435476._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435477, &result_n6_41);
  Free_poly_data(&result_n6_41._c1_poly);
  Free_poly_data(&result_n6_41._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 44
  // /features/features.7/Relu
  // pragma: 65536, 1033, 45
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435478, &_preg_268435477, 14);
  Free_poly_data(&_preg_268435477._c1_poly);
  Free_poly_data(&_preg_268435477._c0_poly);
  _preg_268435479 = App_relu(_preg_268435478, _preg_268435478, 3072);
  Free_poly_data(&_preg_268435478._c1_poly);
  Free_poly_data(&_preg_268435478._c0_poly);
  Copy_ciph(&_preg_268435480, &_preg_268435479);
  Free_poly_data(&_preg_268435479._c1_poly);
  Free_poly_data(&_preg_268435479._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 45
  // /features/features.8/Conv
  // pragma: 65536, 1027, 46
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435481, &_preg_268435480);
  Free_poly_data(&_preg_268435480._c1_poly);
  Free_poly_data(&_preg_268435480._c0_poly);
  // BlockingRot replicate=5
  _preg_268435536 = Rotate(_preg_268435481, -4096);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_48_175, &_preg_268435481, &_preg_268435536);
  CMPLR_TM_END(12, 0);
  _preg_268435537 = Rotate(_preg_268435481, -8192);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_49_176, &_pgen_tmp_48_175, &_preg_268435537);
  CMPLR_TM_END(12, 0);
  _preg_268435538 = Rotate(_preg_268435481, -12288);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_50_177, &_pgen_tmp_49_176, &_preg_268435538);
  CMPLR_TM_END(12, 0);
  _preg_268435539 = Rotate(_preg_268435481, -16384);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n6_45, &_pgen_tmp_50_177, &_preg_268435539);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&input_dup_n6_45._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_48_175._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435481._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435536._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_48_175._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435481._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435536._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_49_176._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_48_175._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435537._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_49_176._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_48_175._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435537._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_50_177._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_49_176._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435538._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_50_177._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_49_176._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435538._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&input_dup_n6_45._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_50_177._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435539._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&input_dup_n6_45._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_50_177._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435539._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_preg_268435536._c1_poly);
  Free_poly_data(&_preg_268435536._c0_poly);
  Free_poly_data(&_preg_268435481._c1_poly);
  Free_poly_data(&_preg_268435481._c0_poly);
  Free_poly_data(&_preg_268435537._c1_poly);
  Free_poly_data(&_preg_268435537._c0_poly);
  Free_poly_data(&_pgen_tmp_48_175._c1_poly);
  Free_poly_data(&_pgen_tmp_48_175._c0_poly);
  Free_poly_data(&_preg_268435538._c1_poly);
  Free_poly_data(&_preg_268435538._c0_poly);
  Free_poly_data(&_pgen_tmp_49_176._c1_poly);
  Free_poly_data(&_pgen_tmp_49_176._c0_poly);
  Free_poly_data(&_preg_268435539._c1_poly);
  Free_poly_data(&_preg_268435539._c0_poly);
  Free_poly_data(&_pgen_tmp_50_177._c1_poly);
  Free_poly_data(&_pgen_tmp_50_177._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=9
  for (bs_input_n6_46 = 0; bs_input_n6_46 < 9; bs_input_n6_46 = bs_input_n6_46 + 1) {
    _preg_268435540 = Rotate(input_dup_n6_45, _cst_58[bs_input_n6_46]);
    Copy_ciph(&input_block_n6_47[bs_input_n6_46], &_preg_268435540);
    Free_poly_data(&_preg_268435540._c1_poly);
    Free_poly_data(&_preg_268435540._c0_poly);
  }
  Free_poly_data(&input_dup_n6_45._c1_poly);
  Free_poly_data(&input_dup_n6_45._c0_poly);
  Zero_ciph(&result_n7_48);
  for (num_grid_n7_49 = 0; num_grid_n7_49 < 64; num_grid_n7_49 = num_grid_n7_49 + 1) {
    Zero_ciph(&result_grid_n7_50);
    for (cap_block_n7_51 = 0; cap_block_n7_51 < 9; cap_block_n7_51 = cap_block_n7_51 + 1) {
      _ckks_gen_tmp_920_112 = input_block_n6_47[cap_block_n7_51];
      Pt_from_msg_ofst(&_pgen_tmp_51_178, 21/* cst_56 */, ((cap_block_n7_51 + (num_grid_n7_49 * 9))) * (20480), 20480, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_52_179, &_ckks_gen_tmp_920_112, &_pgen_tmp_51_178);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n7_50, &result_grid_n7_50, &_pgen_tmp_52_179);
      _pgen_modulus_124 = Q_modulus();
      _pgen_num_q_125 = Poly_level(&result_grid_n7_50._c0_poly);
      for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_52_179._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_920_112._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_51_178._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_52_179._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_920_112._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_51_178._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modadd(Coeffs(&result_grid_n7_50._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&result_grid_n7_50._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_52_179._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modadd(Coeffs(&result_grid_n7_50._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&result_grid_n7_50._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_52_179._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        _pgen_modulus_124 = _pgen_modulus_124 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435541 = Rotate(result_grid_n7_50, num_grid_n7_49 * 16);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n7_48, &result_n7_48, &_preg_268435541);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&result_n7_48._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modadd(Coeffs(&result_n7_48._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&result_n7_48._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435541._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&result_n7_48._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&result_n7_48._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435541._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435541._c1_poly);
    Free_poly_data(&_preg_268435541._c0_poly);
  }
  Free_ciph_poly(input_block_n6_47, 9);
  Free_poly_data(&_pgen_tmp_51_178._poly);
  Free_poly_data(&_pgen_tmp_52_179._c1_poly);
  Free_poly_data(&_pgen_tmp_52_179._c0_poly);
  Free_poly_data(&result_grid_n7_50._c1_poly);
  Free_poly_data(&result_grid_n7_50._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n7_48, &result_n7_48);
  Rescale(&result_n7_48._c0_poly, &result_n7_48._c0_poly);
  Rescale(&result_n7_48._c1_poly, &result_n7_48._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_54_181, 22 /* cst_59 */, 4096, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_53_180, &result_n7_48, &_pgen_tmp_54_181);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&_pgen_tmp_53_180._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_53_180._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&result_n7_48._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_54_181._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_53_180._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&result_n7_48._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_54_181._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_54_181._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435482, &_pgen_tmp_53_180);
  Rescale(&_preg_268435482._c0_poly, &_pgen_tmp_53_180._c0_poly);
  Rescale(&_preg_268435482._c1_poly, &_pgen_tmp_53_180._c1_poly);
  Free_poly_data(&_pgen_tmp_53_180._c1_poly);
  Free_poly_data(&_pgen_tmp_53_180._c0_poly);
  CMPLR_TM_END(19, 0);
  for (num_block_collecitve_data_n7_52 = 1; num_block_collecitve_data_n7_52 < 4; num_block_collecitve_data_n7_52 = num_block_collecitve_data_n7_52 + 1) {
    _preg_268435542 = Rotate(result_n7_48, num_block_collecitve_data_n7_52 * 5120);
    Copy_ciph(&_ckks_gen_tmp_976_113, &_preg_268435542);
    Pt_from_msg(&_pgen_tmp_56_183, 23 /* cst_59 */, 4096, 1, 2);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_55_182, &_ckks_gen_tmp_976_113, &_pgen_tmp_56_183);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&_pgen_tmp_55_182._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_55_182._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_976_113._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_56_183._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_55_182._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_976_113._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_56_183._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_57_184, &_pgen_tmp_55_182);
    Rescale(&_pgen_tmp_57_184._c0_poly, &_pgen_tmp_55_182._c0_poly);
    Rescale(&_pgen_tmp_57_184._c1_poly, &_pgen_tmp_55_182._c1_poly);
    CMPLR_TM_END(19, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_preg_268435482, &_preg_268435482, &_pgen_tmp_57_184);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&_preg_268435482._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modadd(Coeffs(&_preg_268435482._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435482._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_57_184._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&_preg_268435482._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435482._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_57_184._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435542._c1_poly);
    Free_poly_data(&_preg_268435542._c0_poly);
  }
  Free_poly_data(&_pgen_tmp_56_183._poly);
  Free_poly_data(&_ckks_gen_tmp_976_113._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_976_113._c0_poly);
  Free_poly_data(&_pgen_tmp_55_182._c1_poly);
  Free_poly_data(&_pgen_tmp_55_182._c0_poly);
  Free_poly_data(&_pgen_tmp_57_184._c1_poly);
  Free_poly_data(&_pgen_tmp_57_184._c0_poly);
  for (num_block_collecitve_gap_n7_53 = 0; num_block_collecitve_gap_n7_53 < 3; num_block_collecitve_gap_n7_53 = num_block_collecitve_gap_n7_53 + 1) {
    _preg_268435543 = Rotate(result_n7_48, (num_block_collecitve_gap_n7_53 * 5120) + 1024);
    Copy_ciph(&_ckks_gen_tmp_1006_114, &_preg_268435543);
    Pt_from_msg(&_pgen_tmp_59_186, 24 /* cst_60 */, 4096, 1, 2);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_58_185, &_ckks_gen_tmp_1006_114, &_pgen_tmp_59_186);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&_pgen_tmp_58_185._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_58_185._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_1006_114._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_59_186._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_58_185._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_1006_114._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_59_186._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_60_187, &_pgen_tmp_58_185);
    Rescale(&_pgen_tmp_60_187._c0_poly, &_pgen_tmp_58_185._c0_poly);
    Rescale(&_pgen_tmp_60_187._c1_poly, &_pgen_tmp_58_185._c1_poly);
    CMPLR_TM_END(19, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_preg_268435482, &_preg_268435482, &_pgen_tmp_60_187);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&_preg_268435482._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modadd(Coeffs(&_preg_268435482._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435482._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_60_187._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&_preg_268435482._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435482._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_60_187._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435543._c1_poly);
    Free_poly_data(&_preg_268435543._c0_poly);
  }
  Free_poly_data(&_pgen_tmp_59_186._poly);
  Free_poly_data(&_ckks_gen_tmp_1006_114._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1006_114._c0_poly);
  Free_poly_data(&_pgen_tmp_58_185._c1_poly);
  Free_poly_data(&_pgen_tmp_58_185._c0_poly);
  Free_poly_data(&_pgen_tmp_60_187._c1_poly);
  Free_poly_data(&_pgen_tmp_60_187._c0_poly);
  _preg_268435544 = Rotate(result_n7_48, -4096);
  Copy_ciph(&_ckks_gen_tmp_1022_115, &_preg_268435544);
  Free_poly_data(&_preg_268435544._c1_poly);
  Free_poly_data(&_preg_268435544._c0_poly);
  Pt_from_msg(&_pgen_tmp_62_189, 25 /* cst_60 */, 4096, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_61_188, &_ckks_gen_tmp_1022_115, &_pgen_tmp_62_189);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&_pgen_tmp_61_188._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_61_188._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_1022_115._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_62_189._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_61_188._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_1022_115._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_62_189._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_62_189._poly);
  Free_poly_data(&_ckks_gen_tmp_1022_115._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1022_115._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_63_190, &_pgen_tmp_61_188);
  Rescale(&_pgen_tmp_63_190._c0_poly, &_pgen_tmp_61_188._c0_poly);
  Rescale(&_pgen_tmp_63_190._c1_poly, &_pgen_tmp_61_188._c1_poly);
  Free_poly_data(&_pgen_tmp_61_188._c1_poly);
  Free_poly_data(&_pgen_tmp_61_188._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435482, &_preg_268435482, &_pgen_tmp_63_190);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&_preg_268435482._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&_preg_268435482._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435482._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_63_190._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_preg_268435482._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435482._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_63_190._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_63_190._c1_poly);
  Free_poly_data(&_pgen_tmp_63_190._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_64_191, 26 /* cst_57 */, 4096, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n7_48, &_preg_268435482, &_pgen_tmp_64_191);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&result_n7_48._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&result_n7_48._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435482._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_64_191._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Set_coeffs(&result_n7_48._c1_poly, _pgen_rns_idx_126, degree, Coeffs(&_preg_268435482._c1_poly, _pgen_rns_idx_126, degree));
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_64_191._poly);
  Free_poly_data(&_preg_268435482._c1_poly);
  Free_poly_data(&_preg_268435482._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435483, &result_n7_48);
  Free_poly_data(&result_n7_48._c1_poly);
  Free_poly_data(&result_n7_48._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 46
  // /features/features.9/Relu
  // pragma: 65536, 1033, 47
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435484, &_preg_268435483, 14);
  Free_poly_data(&_preg_268435483._c1_poly);
  Free_poly_data(&_preg_268435483._c0_poly);
  _preg_268435485 = App_relu(_preg_268435484, _preg_268435484, 4096);
  Free_poly_data(&_preg_268435484._c1_poly);
  Free_poly_data(&_preg_268435484._c0_poly);
  Copy_ciph(&_preg_268435486, &_preg_268435485);
  Free_poly_data(&_preg_268435485._c1_poly);
  Free_poly_data(&_preg_268435485._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 47
  // /features/features.10/Conv
  // pragma: 65536, 1027, 48
  CMPLR_TM_START(5, 0);
  Copy_ciph(&_preg_268435487, &_preg_268435486);
  Free_poly_data(&_preg_268435486._c1_poly);
  Free_poly_data(&_preg_268435486._c0_poly);
  // BlockingRot replicate=5
  _preg_268435545 = Rotate(_preg_268435487, -4096);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_65_192, &_preg_268435487, &_preg_268435545);
  CMPLR_TM_END(12, 0);
  _preg_268435546 = Rotate(_preg_268435487, -8192);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_66_193, &_pgen_tmp_65_192, &_preg_268435546);
  CMPLR_TM_END(12, 0);
  _preg_268435547 = Rotate(_preg_268435487, -12288);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_67_194, &_pgen_tmp_66_193, &_preg_268435547);
  CMPLR_TM_END(12, 0);
  _preg_268435548 = Rotate(_preg_268435487, -16384);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n7_54, &_pgen_tmp_67_194, &_preg_268435548);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&input_dup_n7_54._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_65_192._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435487._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435545._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_65_192._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435487._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435545._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_66_193._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_65_192._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435546._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_66_193._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_65_192._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435546._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_67_194._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_66_193._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435547._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_67_194._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_66_193._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435547._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&input_dup_n7_54._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_67_194._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435548._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&input_dup_n7_54._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_67_194._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435548._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_preg_268435545._c1_poly);
  Free_poly_data(&_preg_268435545._c0_poly);
  Free_poly_data(&_preg_268435487._c1_poly);
  Free_poly_data(&_preg_268435487._c0_poly);
  Free_poly_data(&_preg_268435546._c1_poly);
  Free_poly_data(&_preg_268435546._c0_poly);
  Free_poly_data(&_pgen_tmp_65_192._c1_poly);
  Free_poly_data(&_pgen_tmp_65_192._c0_poly);
  Free_poly_data(&_preg_268435547._c1_poly);
  Free_poly_data(&_preg_268435547._c0_poly);
  Free_poly_data(&_pgen_tmp_66_193._c1_poly);
  Free_poly_data(&_pgen_tmp_66_193._c0_poly);
  Free_poly_data(&_preg_268435548._c1_poly);
  Free_poly_data(&_preg_268435548._c0_poly);
  Free_poly_data(&_pgen_tmp_67_194._c1_poly);
  Free_poly_data(&_pgen_tmp_67_194._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=9
  for (bs_input_n7_55 = 0; bs_input_n7_55 < 9; bs_input_n7_55 = bs_input_n7_55 + 1) {
    _preg_268435549 = Rotate(input_dup_n7_54, _cst_64[bs_input_n7_55]);
    Copy_ciph(&input_block_n7_56[bs_input_n7_55], &_preg_268435549);
    Free_poly_data(&_preg_268435549._c1_poly);
    Free_poly_data(&_preg_268435549._c0_poly);
  }
  Free_poly_data(&input_dup_n7_54._c1_poly);
  Free_poly_data(&input_dup_n7_54._c0_poly);
  Zero_ciph(&result_n8_57);
  for (num_grid_n8_58 = 0; num_grid_n8_58 < 64; num_grid_n8_58 = num_grid_n8_58 + 1) {
    Zero_ciph(&result_grid_n8_59);
    for (cap_block_n8_60 = 0; cap_block_n8_60 < 9; cap_block_n8_60 = cap_block_n8_60 + 1) {
      _ckks_gen_tmp_1141_116 = input_block_n7_56[cap_block_n8_60];
      Pt_from_msg_ofst(&_pgen_tmp_68_195, 27/* cst_62 */, ((cap_block_n8_60 + (num_grid_n8_58 * 9))) * (20480), 20480, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_69_196, &_ckks_gen_tmp_1141_116, &_pgen_tmp_68_195);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&result_grid_n8_59, &result_grid_n8_59, &_pgen_tmp_69_196);
      _pgen_modulus_124 = Q_modulus();
      _pgen_num_q_125 = Poly_level(&result_grid_n8_59._c0_poly);
      for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_69_196._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_1141_116._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_68_195._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_69_196._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_1141_116._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_68_195._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modadd(Coeffs(&result_grid_n8_59._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&result_grid_n8_59._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_69_196._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modadd(Coeffs(&result_grid_n8_59._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&result_grid_n8_59._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_69_196._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        _pgen_modulus_124 = _pgen_modulus_124 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435550 = Rotate(result_grid_n8_59, num_grid_n8_58 * 16);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&result_n8_57, &result_n8_57, &_preg_268435550);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&result_n8_57._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modadd(Coeffs(&result_n8_57._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&result_n8_57._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435550._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&result_n8_57._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&result_n8_57._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435550._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435550._c1_poly);
    Free_poly_data(&_preg_268435550._c0_poly);
  }
  Free_ciph_poly(input_block_n7_56, 9);
  Free_poly_data(&_pgen_tmp_68_195._poly);
  Free_poly_data(&_pgen_tmp_69_196._c1_poly);
  Free_poly_data(&_pgen_tmp_69_196._c0_poly);
  Free_poly_data(&result_grid_n8_59._c1_poly);
  Free_poly_data(&result_grid_n8_59._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&result_n8_57, &result_n8_57);
  Rescale(&result_n8_57._c0_poly, &result_n8_57._c0_poly);
  Rescale(&result_n8_57._c1_poly, &result_n8_57._c1_poly);
  CMPLR_TM_END(19, 0);
  Pt_from_msg(&_pgen_tmp_71_198, 28 /* cst_65 */, 4096, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_70_197, &result_n8_57, &_pgen_tmp_71_198);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&_pgen_tmp_70_197._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_70_197._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&result_n8_57._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_71_198._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_70_197._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&result_n8_57._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_71_198._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_71_198._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_preg_268435488, &_pgen_tmp_70_197);
  Rescale(&_preg_268435488._c0_poly, &_pgen_tmp_70_197._c0_poly);
  Rescale(&_preg_268435488._c1_poly, &_pgen_tmp_70_197._c1_poly);
  Free_poly_data(&_pgen_tmp_70_197._c1_poly);
  Free_poly_data(&_pgen_tmp_70_197._c0_poly);
  CMPLR_TM_END(19, 0);
  for (num_block_collecitve_data_n8_61 = 1; num_block_collecitve_data_n8_61 < 4; num_block_collecitve_data_n8_61 = num_block_collecitve_data_n8_61 + 1) {
    _preg_268435551 = Rotate(result_n8_57, num_block_collecitve_data_n8_61 * 5120);
    Copy_ciph(&_ckks_gen_tmp_1197_117, &_preg_268435551);
    Pt_from_msg(&_pgen_tmp_73_200, 29 /* cst_65 */, 4096, 1, 2);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_72_199, &_ckks_gen_tmp_1197_117, &_pgen_tmp_73_200);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&_pgen_tmp_72_199._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_72_199._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_1197_117._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_73_200._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_72_199._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_1197_117._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_73_200._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_74_201, &_pgen_tmp_72_199);
    Rescale(&_pgen_tmp_74_201._c0_poly, &_pgen_tmp_72_199._c0_poly);
    Rescale(&_pgen_tmp_74_201._c1_poly, &_pgen_tmp_72_199._c1_poly);
    CMPLR_TM_END(19, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_preg_268435488, &_preg_268435488, &_pgen_tmp_74_201);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&_preg_268435488._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modadd(Coeffs(&_preg_268435488._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435488._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_74_201._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&_preg_268435488._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435488._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_74_201._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435551._c1_poly);
    Free_poly_data(&_preg_268435551._c0_poly);
  }
  Free_poly_data(&_pgen_tmp_73_200._poly);
  Free_poly_data(&_ckks_gen_tmp_1197_117._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1197_117._c0_poly);
  Free_poly_data(&_pgen_tmp_72_199._c1_poly);
  Free_poly_data(&_pgen_tmp_72_199._c0_poly);
  Free_poly_data(&_pgen_tmp_74_201._c1_poly);
  Free_poly_data(&_pgen_tmp_74_201._c0_poly);
  for (num_block_collecitve_gap_n8_62 = 0; num_block_collecitve_gap_n8_62 < 3; num_block_collecitve_gap_n8_62 = num_block_collecitve_gap_n8_62 + 1) {
    _preg_268435552 = Rotate(result_n8_57, (num_block_collecitve_gap_n8_62 * 5120) + 1024);
    Copy_ciph(&_ckks_gen_tmp_1227_118, &_preg_268435552);
    Pt_from_msg(&_pgen_tmp_76_203, 30 /* cst_66 */, 4096, 1, 2);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_75_202, &_ckks_gen_tmp_1227_118, &_pgen_tmp_76_203);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&_pgen_tmp_75_202._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_75_202._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_1227_118._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_76_203._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_75_202._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_1227_118._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_76_203._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(19, 0);
    Init_ciph_down_scale(&_pgen_tmp_77_204, &_pgen_tmp_75_202);
    Rescale(&_pgen_tmp_77_204._c0_poly, &_pgen_tmp_75_202._c0_poly);
    Rescale(&_pgen_tmp_77_204._c1_poly, &_pgen_tmp_75_202._c1_poly);
    CMPLR_TM_END(19, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_preg_268435488, &_preg_268435488, &_pgen_tmp_77_204);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&_preg_268435488._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modadd(Coeffs(&_preg_268435488._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435488._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_77_204._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&_preg_268435488._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435488._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_77_204._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435552._c1_poly);
    Free_poly_data(&_preg_268435552._c0_poly);
  }
  Free_poly_data(&_pgen_tmp_76_203._poly);
  Free_poly_data(&_ckks_gen_tmp_1227_118._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1227_118._c0_poly);
  Free_poly_data(&_pgen_tmp_75_202._c1_poly);
  Free_poly_data(&_pgen_tmp_75_202._c0_poly);
  Free_poly_data(&_pgen_tmp_77_204._c1_poly);
  Free_poly_data(&_pgen_tmp_77_204._c0_poly);
  _preg_268435553 = Rotate(result_n8_57, -4096);
  Copy_ciph(&_ckks_gen_tmp_1243_119, &_preg_268435553);
  Free_poly_data(&_preg_268435553._c1_poly);
  Free_poly_data(&_preg_268435553._c0_poly);
  Pt_from_msg(&_pgen_tmp_79_206, 31 /* cst_66 */, 4096, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_78_205, &_ckks_gen_tmp_1243_119, &_pgen_tmp_79_206);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&_pgen_tmp_78_205._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_78_205._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_1243_119._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_79_206._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_78_205._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_1243_119._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_79_206._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_79_206._poly);
  Free_poly_data(&_ckks_gen_tmp_1243_119._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1243_119._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&_pgen_tmp_80_207, &_pgen_tmp_78_205);
  Rescale(&_pgen_tmp_80_207._c0_poly, &_pgen_tmp_78_205._c0_poly);
  Rescale(&_pgen_tmp_80_207._c1_poly, &_pgen_tmp_78_205._c1_poly);
  Free_poly_data(&_pgen_tmp_78_205._c1_poly);
  Free_poly_data(&_pgen_tmp_78_205._c0_poly);
  CMPLR_TM_END(19, 0);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_preg_268435488, &_preg_268435488, &_pgen_tmp_80_207);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&_preg_268435488._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&_preg_268435488._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435488._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_80_207._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_preg_268435488._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435488._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_80_207._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_80_207._c1_poly);
  Free_poly_data(&_pgen_tmp_80_207._c0_poly);
  CMPLR_TM_END(12, 0);
  Pt_from_msg(&_pgen_tmp_81_208, 32 /* cst_63 */, 4096, 1, 1);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&result_n8_57, &_preg_268435488, &_pgen_tmp_81_208);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&result_n8_57._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&result_n8_57._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435488._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_81_208._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Set_coeffs(&result_n8_57._c1_poly, _pgen_rns_idx_126, degree, Coeffs(&_preg_268435488._c1_poly, _pgen_rns_idx_126, degree));
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_81_208._poly);
  Free_poly_data(&_preg_268435488._c1_poly);
  Free_poly_data(&_preg_268435488._c0_poly);
  CMPLR_TM_END(13, 0);
  Copy_ciph(&_preg_268435489, &result_n8_57);
  Free_poly_data(&result_n8_57._c1_poly);
  Free_poly_data(&result_n8_57._c0_poly);
  CMPLR_TM_END(5, 0);
  // pragma: 65537, 1027, 48
  // /features/features.11/Relu
  // pragma: 65536, 1033, 49
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435490, &_preg_268435489, 17);
  Free_poly_data(&_preg_268435489._c1_poly);
  Free_poly_data(&_preg_268435489._c0_poly);
  _preg_268435491 = App_relu(_preg_268435490, _preg_268435490, 4096);
  Free_poly_data(&_preg_268435490._c1_poly);
  Free_poly_data(&_preg_268435490._c0_poly);
  Copy_ciph(&_preg_268435492, &_preg_268435491);
  Free_poly_data(&_preg_268435491._c1_poly);
  Free_poly_data(&_preg_268435491._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 49
  // /features/features.12/GlobalAveragePool
  // pragma: 65536, 1030, 50
  CMPLR_TM_START(8, 0);
  Copy_ciph(&_preg_268435493, &_preg_268435492);
  Free_poly_data(&_preg_268435492._c1_poly);
  Free_poly_data(&_preg_268435492._c0_poly);
  for (gap_sum_index_n8_63 = 0; gap_sum_index_n8_63 < 4; gap_sum_index_n8_63 = gap_sum_index_n8_63 + 1) {
    _preg_268435554 = Rotate(_preg_268435493, 1 << gap_sum_index_n8_63);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&_preg_268435493, &_preg_268435493, &_preg_268435554);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&_preg_268435493._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modadd(Coeffs(&_preg_268435493._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435493._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435554._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&_preg_268435493._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435493._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435554._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435554._c1_poly);
    Free_poly_data(&_preg_268435554._c0_poly);
  }
  Encode_float(&_pgen_tmp_83_210, &_cst_67, 1, 1, Level(&_preg_268435493));
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_82_209, &_preg_268435493, &_pgen_tmp_83_210);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&_pgen_tmp_82_209._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_82_209._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435493._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_83_210._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_82_209._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435493._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_83_210._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_83_210._poly);
  Free_poly_data(&_preg_268435493._c1_poly);
  Free_poly_data(&_preg_268435493._c0_poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&gap_result8_64, &_pgen_tmp_82_209);
  Rescale(&gap_result8_64._c0_poly, &_pgen_tmp_82_209._c0_poly);
  Rescale(&gap_result8_64._c1_poly, &_pgen_tmp_82_209._c1_poly);
  Free_poly_data(&_pgen_tmp_82_209._c1_poly);
  Free_poly_data(&_pgen_tmp_82_209._c0_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&_preg_268435494, &gap_result8_64);
  Free_poly_data(&gap_result8_64._c1_poly);
  Free_poly_data(&gap_result8_64._c0_poly);
  Copy_ciph(&orig_result8_65, &_preg_268435494);
  Free_poly_data(&_preg_268435494._c1_poly);
  Free_poly_data(&_preg_268435494._c0_poly);
  Pt_from_msg(&_pgen_tmp_85_212, 33 /* cst_68 */, 4096, 1, 5);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_84_211, &orig_result8_65, &_pgen_tmp_85_212);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&_pgen_tmp_84_211._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_84_211._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&orig_result8_65._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_85_212._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_84_211._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&orig_result8_65._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_85_212._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_85_212._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&orig_result8_65, &_pgen_tmp_84_211);
  Rescale(&orig_result8_65._c0_poly, &_pgen_tmp_84_211._c0_poly);
  Rescale(&orig_result8_65._c1_poly, &_pgen_tmp_84_211._c1_poly);
  Free_poly_data(&_pgen_tmp_84_211._c1_poly);
  Free_poly_data(&_pgen_tmp_84_211._c0_poly);
  CMPLR_TM_END(19, 0);
  Zero_ciph(&ss_result9_66);
  for (comb_cc_lf_index_n9_67 = 0; comb_cc_lf_index_n9_67 < 4; comb_cc_lf_index_n9_67 = comb_cc_lf_index_n9_67 + 1) {
    _preg_268435555 = Rotate(orig_result8_65, (1 << comb_cc_lf_index_n9_67) * 15);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&orig_result8_65, &orig_result8_65, &_preg_268435555);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&orig_result8_65._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modadd(Coeffs(&orig_result8_65._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&orig_result8_65._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435555._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&orig_result8_65._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&orig_result8_65._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435555._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435555._c1_poly);
    Free_poly_data(&_preg_268435555._c0_poly);
  }
  for (comb_cc_index_n9_68 = 0; comb_cc_index_n9_68 < 16; comb_cc_index_n9_68 = comb_cc_index_n9_68 + 1) {
    _preg_268435556 = Rotate(orig_result8_65, comb_cc_index_n9_68 * 240);
    Copy_ciph(&_ckks_gen_tmp_1370_120, &_preg_268435556);
    Pt_from_msg_ofst(&_pgen_tmp_86_213, 34/* cst_69 */, (comb_cc_index_n9_68) * (4096), 4096, 1, 4);
    CMPLR_TM_START(17, 0);
    Init_ciph_up_scale_plain(&_pgen_tmp_87_214, &_ckks_gen_tmp_1370_120, &_pgen_tmp_86_213);
    CMPLR_TM_END(17, 0);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&ss_result9_66, &ss_result9_66, &_pgen_tmp_87_214);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&ss_result9_66._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modmul(Coeffs(&_pgen_tmp_87_214._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_1370_120._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_86_213._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modmul(Coeffs(&_pgen_tmp_87_214._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_1370_120._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_86_213._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&ss_result9_66._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&ss_result9_66._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_87_214._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&ss_result9_66._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&ss_result9_66._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_87_214._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435556._c1_poly);
    Free_poly_data(&_preg_268435556._c0_poly);
  }
  Free_poly_data(&orig_result8_65._c1_poly);
  Free_poly_data(&orig_result8_65._c0_poly);
  Free_poly_data(&_pgen_tmp_86_213._poly);
  Free_poly_data(&_ckks_gen_tmp_1370_120._c1_poly);
  Free_poly_data(&_ckks_gen_tmp_1370_120._c0_poly);
  Free_poly_data(&_pgen_tmp_87_214._c1_poly);
  Free_poly_data(&_pgen_tmp_87_214._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&ss_result9_66, &ss_result9_66);
  Rescale(&ss_result9_66._c0_poly, &ss_result9_66._c0_poly);
  Rescale(&ss_result9_66._c1_poly, &ss_result9_66._c1_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&_preg_268435495, &ss_result9_66);
  Free_poly_data(&ss_result9_66._c1_poly);
  Free_poly_data(&ss_result9_66._c0_poly);
  CMPLR_TM_END(8, 0);
  // pragma: 65537, 1030, 50
  // /Flatten
  // pragma: 65536, 1028, 51
  CMPLR_TM_START(6, 0);
  Copy_ciph(&_preg_268435496, &_preg_268435495);
  Free_poly_data(&_preg_268435495._c1_poly);
  Free_poly_data(&_preg_268435495._c0_poly);
  CMPLR_TM_END(6, 0);
  // pragma: 65537, 1028, 51
  // /classifier/classifier.1/Gemm
  // pragma: 65536, 1029, 53
  CMPLR_TM_START(7, 0);
  // BlockingRot replicate=65
  _preg_268435557 = Rotate(_preg_268435496, -256);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_88_215, &_preg_268435496, &_preg_268435557);
  CMPLR_TM_END(12, 0);
  _preg_268435558 = Rotate(_preg_268435496, -512);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_89_216, &_pgen_tmp_88_215, &_preg_268435558);
  CMPLR_TM_END(12, 0);
  _preg_268435559 = Rotate(_preg_268435496, -768);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_90_217, &_pgen_tmp_89_216, &_preg_268435559);
  CMPLR_TM_END(12, 0);
  _preg_268435560 = Rotate(_preg_268435496, -1024);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_91_218, &_pgen_tmp_90_217, &_preg_268435560);
  CMPLR_TM_END(12, 0);
  _preg_268435561 = Rotate(_preg_268435496, -1280);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_92_219, &_pgen_tmp_91_218, &_preg_268435561);
  CMPLR_TM_END(12, 0);
  _preg_268435562 = Rotate(_preg_268435496, -1536);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_93_220, &_pgen_tmp_92_219, &_preg_268435562);
  CMPLR_TM_END(12, 0);
  _preg_268435563 = Rotate(_preg_268435496, -1792);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_94_221, &_pgen_tmp_93_220, &_preg_268435563);
  CMPLR_TM_END(12, 0);
  _preg_268435564 = Rotate(_preg_268435496, -2048);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_95_222, &_pgen_tmp_94_221, &_preg_268435564);
  CMPLR_TM_END(12, 0);
  _preg_268435565 = Rotate(_preg_268435496, -2304);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_96_223, &_pgen_tmp_95_222, &_preg_268435565);
  CMPLR_TM_END(12, 0);
  _preg_268435566 = Rotate(_preg_268435496, -2560);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_97_224, &_pgen_tmp_96_223, &_preg_268435566);
  CMPLR_TM_END(12, 0);
  _preg_268435567 = Rotate(_preg_268435496, -2816);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_98_225, &_pgen_tmp_97_224, &_preg_268435567);
  CMPLR_TM_END(12, 0);
  _preg_268435568 = Rotate(_preg_268435496, -3072);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_99_226, &_pgen_tmp_98_225, &_preg_268435568);
  CMPLR_TM_END(12, 0);
  _preg_268435569 = Rotate(_preg_268435496, -3328);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_100_227, &_pgen_tmp_99_226, &_preg_268435569);
  CMPLR_TM_END(12, 0);
  _preg_268435570 = Rotate(_preg_268435496, -3584);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_101_228, &_pgen_tmp_100_227, &_preg_268435570);
  CMPLR_TM_END(12, 0);
  _preg_268435571 = Rotate(_preg_268435496, -3840);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_102_229, &_pgen_tmp_101_228, &_preg_268435571);
  CMPLR_TM_END(12, 0);
  _preg_268435572 = Rotate(_preg_268435496, -4096);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_103_230, &_pgen_tmp_102_229, &_preg_268435572);
  CMPLR_TM_END(12, 0);
  _preg_268435573 = Rotate(_preg_268435496, -4352);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_104_231, &_pgen_tmp_103_230, &_preg_268435573);
  CMPLR_TM_END(12, 0);
  _preg_268435574 = Rotate(_preg_268435496, -4608);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_105_232, &_pgen_tmp_104_231, &_preg_268435574);
  CMPLR_TM_END(12, 0);
  _preg_268435575 = Rotate(_preg_268435496, -4864);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_106_233, &_pgen_tmp_105_232, &_preg_268435575);
  CMPLR_TM_END(12, 0);
  _preg_268435576 = Rotate(_preg_268435496, -5120);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_107_234, &_pgen_tmp_106_233, &_preg_268435576);
  CMPLR_TM_END(12, 0);
  _preg_268435577 = Rotate(_preg_268435496, -5376);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_108_235, &_pgen_tmp_107_234, &_preg_268435577);
  CMPLR_TM_END(12, 0);
  _preg_268435578 = Rotate(_preg_268435496, -5632);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_109_236, &_pgen_tmp_108_235, &_preg_268435578);
  CMPLR_TM_END(12, 0);
  _preg_268435579 = Rotate(_preg_268435496, -5888);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_110_237, &_pgen_tmp_109_236, &_preg_268435579);
  CMPLR_TM_END(12, 0);
  _preg_268435580 = Rotate(_preg_268435496, -6144);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_111_238, &_pgen_tmp_110_237, &_preg_268435580);
  CMPLR_TM_END(12, 0);
  _preg_268435581 = Rotate(_preg_268435496, -6400);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_112_239, &_pgen_tmp_111_238, &_preg_268435581);
  CMPLR_TM_END(12, 0);
  _preg_268435582 = Rotate(_preg_268435496, -6656);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_113_240, &_pgen_tmp_112_239, &_preg_268435582);
  CMPLR_TM_END(12, 0);
  _preg_268435583 = Rotate(_preg_268435496, -6912);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_114_241, &_pgen_tmp_113_240, &_preg_268435583);
  CMPLR_TM_END(12, 0);
  _preg_268435584 = Rotate(_preg_268435496, -7168);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_115_242, &_pgen_tmp_114_241, &_preg_268435584);
  CMPLR_TM_END(12, 0);
  _preg_268435585 = Rotate(_preg_268435496, -7424);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_116_243, &_pgen_tmp_115_242, &_preg_268435585);
  CMPLR_TM_END(12, 0);
  _preg_268435586 = Rotate(_preg_268435496, -7680);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_117_244, &_pgen_tmp_116_243, &_preg_268435586);
  CMPLR_TM_END(12, 0);
  _preg_268435587 = Rotate(_preg_268435496, -7936);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_118_245, &_pgen_tmp_117_244, &_preg_268435587);
  CMPLR_TM_END(12, 0);
  _preg_268435588 = Rotate(_preg_268435496, -8192);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_119_246, &_pgen_tmp_118_245, &_preg_268435588);
  CMPLR_TM_END(12, 0);
  _preg_268435589 = Rotate(_preg_268435496, -8448);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_120_247, &_pgen_tmp_119_246, &_preg_268435589);
  CMPLR_TM_END(12, 0);
  _preg_268435590 = Rotate(_preg_268435496, -8704);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_121_248, &_pgen_tmp_120_247, &_preg_268435590);
  CMPLR_TM_END(12, 0);
  _preg_268435591 = Rotate(_preg_268435496, -8960);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_122_249, &_pgen_tmp_121_248, &_preg_268435591);
  CMPLR_TM_END(12, 0);
  _preg_268435592 = Rotate(_preg_268435496, -9216);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_123_250, &_pgen_tmp_122_249, &_preg_268435592);
  CMPLR_TM_END(12, 0);
  _preg_268435593 = Rotate(_preg_268435496, -9472);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_124_251, &_pgen_tmp_123_250, &_preg_268435593);
  CMPLR_TM_END(12, 0);
  _preg_268435594 = Rotate(_preg_268435496, -9728);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_125_252, &_pgen_tmp_124_251, &_preg_268435594);
  CMPLR_TM_END(12, 0);
  _preg_268435595 = Rotate(_preg_268435496, -9984);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_126_253, &_pgen_tmp_125_252, &_preg_268435595);
  CMPLR_TM_END(12, 0);
  _preg_268435596 = Rotate(_preg_268435496, -10240);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_127_254, &_pgen_tmp_126_253, &_preg_268435596);
  CMPLR_TM_END(12, 0);
  _preg_268435597 = Rotate(_preg_268435496, -10496);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_128_255, &_pgen_tmp_127_254, &_preg_268435597);
  CMPLR_TM_END(12, 0);
  _preg_268435598 = Rotate(_preg_268435496, -10752);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_129_256, &_pgen_tmp_128_255, &_preg_268435598);
  CMPLR_TM_END(12, 0);
  _preg_268435599 = Rotate(_preg_268435496, -11008);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_130_257, &_pgen_tmp_129_256, &_preg_268435599);
  CMPLR_TM_END(12, 0);
  _preg_268435600 = Rotate(_preg_268435496, -11264);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_131_258, &_pgen_tmp_130_257, &_preg_268435600);
  CMPLR_TM_END(12, 0);
  _preg_268435601 = Rotate(_preg_268435496, -11520);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_132_259, &_pgen_tmp_131_258, &_preg_268435601);
  CMPLR_TM_END(12, 0);
  _preg_268435602 = Rotate(_preg_268435496, -11776);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_133_260, &_pgen_tmp_132_259, &_preg_268435602);
  CMPLR_TM_END(12, 0);
  _preg_268435603 = Rotate(_preg_268435496, -12032);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_134_261, &_pgen_tmp_133_260, &_preg_268435603);
  CMPLR_TM_END(12, 0);
  _preg_268435604 = Rotate(_preg_268435496, -12288);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_135_262, &_pgen_tmp_134_261, &_preg_268435604);
  CMPLR_TM_END(12, 0);
  _preg_268435605 = Rotate(_preg_268435496, -12544);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_136_263, &_pgen_tmp_135_262, &_preg_268435605);
  CMPLR_TM_END(12, 0);
  _preg_268435606 = Rotate(_preg_268435496, -12800);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_137_264, &_pgen_tmp_136_263, &_preg_268435606);
  CMPLR_TM_END(12, 0);
  _preg_268435607 = Rotate(_preg_268435496, -13056);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_138_265, &_pgen_tmp_137_264, &_preg_268435607);
  CMPLR_TM_END(12, 0);
  _preg_268435608 = Rotate(_preg_268435496, -13312);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_139_266, &_pgen_tmp_138_265, &_preg_268435608);
  CMPLR_TM_END(12, 0);
  _preg_268435609 = Rotate(_preg_268435496, -13568);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_140_267, &_pgen_tmp_139_266, &_preg_268435609);
  CMPLR_TM_END(12, 0);
  _preg_268435610 = Rotate(_preg_268435496, -13824);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_141_268, &_pgen_tmp_140_267, &_preg_268435610);
  CMPLR_TM_END(12, 0);
  _preg_268435611 = Rotate(_preg_268435496, -14080);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_142_269, &_pgen_tmp_141_268, &_preg_268435611);
  CMPLR_TM_END(12, 0);
  _preg_268435612 = Rotate(_preg_268435496, -14336);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_143_270, &_pgen_tmp_142_269, &_preg_268435612);
  CMPLR_TM_END(12, 0);
  _preg_268435613 = Rotate(_preg_268435496, -14592);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_144_271, &_pgen_tmp_143_270, &_preg_268435613);
  CMPLR_TM_END(12, 0);
  _preg_268435614 = Rotate(_preg_268435496, -14848);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_145_272, &_pgen_tmp_144_271, &_preg_268435614);
  CMPLR_TM_END(12, 0);
  _preg_268435615 = Rotate(_preg_268435496, -15104);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_146_273, &_pgen_tmp_145_272, &_preg_268435615);
  CMPLR_TM_END(12, 0);
  _preg_268435616 = Rotate(_preg_268435496, -15360);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_147_274, &_pgen_tmp_146_273, &_preg_268435616);
  CMPLR_TM_END(12, 0);
  _preg_268435617 = Rotate(_preg_268435496, -15616);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_148_275, &_pgen_tmp_147_274, &_preg_268435617);
  CMPLR_TM_END(12, 0);
  _preg_268435618 = Rotate(_preg_268435496, -15872);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_149_276, &_pgen_tmp_148_275, &_preg_268435618);
  CMPLR_TM_END(12, 0);
  _preg_268435619 = Rotate(_preg_268435496, -16128);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_150_277, &_pgen_tmp_149_276, &_preg_268435619);
  CMPLR_TM_END(12, 0);
  _preg_268435620 = Rotate(_preg_268435496, -16384);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n9_69, &_pgen_tmp_150_277, &_preg_268435620);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&input_dup_n9_69._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_88_215._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435496._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435557._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_88_215._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435496._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435557._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_89_216._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_88_215._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435558._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_89_216._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_88_215._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435558._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_90_217._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_89_216._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435559._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_90_217._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_89_216._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435559._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_91_218._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_90_217._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435560._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_91_218._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_90_217._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435560._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_92_219._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_91_218._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435561._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_92_219._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_91_218._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435561._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_93_220._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_92_219._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435562._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_93_220._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_92_219._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435562._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_94_221._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_93_220._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435563._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_94_221._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_93_220._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435563._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_95_222._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_94_221._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435564._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_95_222._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_94_221._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435564._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_96_223._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_95_222._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435565._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_96_223._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_95_222._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435565._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_97_224._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_96_223._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435566._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_97_224._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_96_223._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435566._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_98_225._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_97_224._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435567._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_98_225._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_97_224._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435567._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_99_226._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_98_225._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435568._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_99_226._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_98_225._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435568._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_100_227._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_99_226._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435569._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_100_227._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_99_226._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435569._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_101_228._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_100_227._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435570._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_101_228._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_100_227._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435570._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_102_229._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_101_228._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435571._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_102_229._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_101_228._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435571._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_103_230._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_102_229._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435572._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_103_230._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_102_229._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435572._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_104_231._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_103_230._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435573._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_104_231._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_103_230._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435573._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_105_232._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_104_231._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435574._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_105_232._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_104_231._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435574._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_106_233._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_105_232._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435575._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_106_233._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_105_232._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435575._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_107_234._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_106_233._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435576._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_107_234._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_106_233._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435576._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_108_235._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_107_234._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435577._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_108_235._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_107_234._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435577._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_109_236._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_108_235._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435578._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_109_236._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_108_235._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435578._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_110_237._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_109_236._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435579._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_110_237._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_109_236._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435579._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_111_238._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_110_237._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435580._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_111_238._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_110_237._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435580._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_112_239._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_111_238._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435581._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_112_239._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_111_238._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435581._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_113_240._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_112_239._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435582._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_113_240._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_112_239._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435582._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_114_241._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_113_240._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435583._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_114_241._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_113_240._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435583._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_115_242._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_114_241._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435584._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_115_242._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_114_241._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435584._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_116_243._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_115_242._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435585._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_116_243._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_115_242._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435585._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_117_244._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_116_243._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435586._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_117_244._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_116_243._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435586._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_118_245._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_117_244._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435587._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_118_245._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_117_244._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435587._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_119_246._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_118_245._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435588._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_119_246._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_118_245._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435588._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_120_247._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_119_246._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435589._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_120_247._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_119_246._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435589._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_121_248._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_120_247._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435590._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_121_248._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_120_247._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435590._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_122_249._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_121_248._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435591._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_122_249._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_121_248._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435591._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_123_250._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_122_249._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435592._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_123_250._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_122_249._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435592._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_124_251._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_123_250._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435593._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_124_251._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_123_250._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435593._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_125_252._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_124_251._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435594._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_125_252._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_124_251._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435594._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_126_253._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_125_252._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435595._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_126_253._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_125_252._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435595._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_127_254._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_126_253._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435596._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_127_254._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_126_253._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435596._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_128_255._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_127_254._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435597._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_128_255._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_127_254._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435597._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_129_256._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_128_255._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435598._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_129_256._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_128_255._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435598._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_130_257._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_129_256._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435599._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_130_257._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_129_256._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435599._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_131_258._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_130_257._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435600._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_131_258._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_130_257._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435600._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_132_259._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_131_258._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435601._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_132_259._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_131_258._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435601._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_133_260._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_132_259._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435602._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_133_260._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_132_259._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435602._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_134_261._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_133_260._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435603._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_134_261._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_133_260._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435603._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_135_262._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_134_261._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435604._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_135_262._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_134_261._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435604._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_136_263._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_135_262._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435605._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_136_263._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_135_262._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435605._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_137_264._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_136_263._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435606._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_137_264._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_136_263._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435606._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_138_265._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_137_264._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435607._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_138_265._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_137_264._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435607._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_139_266._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_138_265._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435608._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_139_266._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_138_265._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435608._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_140_267._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_139_266._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435609._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_140_267._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_139_266._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435609._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_141_268._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_140_267._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435610._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_141_268._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_140_267._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435610._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_142_269._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_141_268._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435611._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_142_269._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_141_268._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435611._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_143_270._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_142_269._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435612._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_143_270._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_142_269._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435612._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_144_271._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_143_270._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435613._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_144_271._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_143_270._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435613._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_145_272._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_144_271._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435614._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_145_272._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_144_271._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435614._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_146_273._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_145_272._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435615._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_146_273._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_145_272._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435615._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_147_274._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_146_273._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435616._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_147_274._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_146_273._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435616._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_148_275._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_147_274._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435617._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_148_275._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_147_274._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435617._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_149_276._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_148_275._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435618._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_149_276._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_148_275._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435618._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_150_277._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_149_276._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435619._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_150_277._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_149_276._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435619._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&input_dup_n9_69._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_150_277._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435620._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&input_dup_n9_69._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_150_277._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435620._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_preg_268435557._c1_poly);
  Free_poly_data(&_preg_268435557._c0_poly);
  Free_poly_data(&_preg_268435496._c1_poly);
  Free_poly_data(&_preg_268435496._c0_poly);
  Free_poly_data(&_preg_268435558._c1_poly);
  Free_poly_data(&_preg_268435558._c0_poly);
  Free_poly_data(&_pgen_tmp_88_215._c1_poly);
  Free_poly_data(&_pgen_tmp_88_215._c0_poly);
  Free_poly_data(&_preg_268435559._c1_poly);
  Free_poly_data(&_preg_268435559._c0_poly);
  Free_poly_data(&_pgen_tmp_89_216._c1_poly);
  Free_poly_data(&_pgen_tmp_89_216._c0_poly);
  Free_poly_data(&_preg_268435560._c1_poly);
  Free_poly_data(&_preg_268435560._c0_poly);
  Free_poly_data(&_pgen_tmp_90_217._c1_poly);
  Free_poly_data(&_pgen_tmp_90_217._c0_poly);
  Free_poly_data(&_preg_268435561._c1_poly);
  Free_poly_data(&_preg_268435561._c0_poly);
  Free_poly_data(&_pgen_tmp_91_218._c1_poly);
  Free_poly_data(&_pgen_tmp_91_218._c0_poly);
  Free_poly_data(&_preg_268435562._c1_poly);
  Free_poly_data(&_preg_268435562._c0_poly);
  Free_poly_data(&_pgen_tmp_92_219._c1_poly);
  Free_poly_data(&_pgen_tmp_92_219._c0_poly);
  Free_poly_data(&_preg_268435563._c1_poly);
  Free_poly_data(&_preg_268435563._c0_poly);
  Free_poly_data(&_pgen_tmp_93_220._c1_poly);
  Free_poly_data(&_pgen_tmp_93_220._c0_poly);
  Free_poly_data(&_preg_268435564._c1_poly);
  Free_poly_data(&_preg_268435564._c0_poly);
  Free_poly_data(&_pgen_tmp_94_221._c1_poly);
  Free_poly_data(&_pgen_tmp_94_221._c0_poly);
  Free_poly_data(&_preg_268435565._c1_poly);
  Free_poly_data(&_preg_268435565._c0_poly);
  Free_poly_data(&_pgen_tmp_95_222._c1_poly);
  Free_poly_data(&_pgen_tmp_95_222._c0_poly);
  Free_poly_data(&_preg_268435566._c1_poly);
  Free_poly_data(&_preg_268435566._c0_poly);
  Free_poly_data(&_pgen_tmp_96_223._c1_poly);
  Free_poly_data(&_pgen_tmp_96_223._c0_poly);
  Free_poly_data(&_preg_268435567._c1_poly);
  Free_poly_data(&_preg_268435567._c0_poly);
  Free_poly_data(&_pgen_tmp_97_224._c1_poly);
  Free_poly_data(&_pgen_tmp_97_224._c0_poly);
  Free_poly_data(&_preg_268435568._c1_poly);
  Free_poly_data(&_preg_268435568._c0_poly);
  Free_poly_data(&_pgen_tmp_98_225._c1_poly);
  Free_poly_data(&_pgen_tmp_98_225._c0_poly);
  Free_poly_data(&_preg_268435569._c1_poly);
  Free_poly_data(&_preg_268435569._c0_poly);
  Free_poly_data(&_pgen_tmp_99_226._c1_poly);
  Free_poly_data(&_pgen_tmp_99_226._c0_poly);
  Free_poly_data(&_preg_268435570._c1_poly);
  Free_poly_data(&_preg_268435570._c0_poly);
  Free_poly_data(&_pgen_tmp_100_227._c1_poly);
  Free_poly_data(&_pgen_tmp_100_227._c0_poly);
  Free_poly_data(&_preg_268435571._c1_poly);
  Free_poly_data(&_preg_268435571._c0_poly);
  Free_poly_data(&_pgen_tmp_101_228._c1_poly);
  Free_poly_data(&_pgen_tmp_101_228._c0_poly);
  Free_poly_data(&_preg_268435572._c1_poly);
  Free_poly_data(&_preg_268435572._c0_poly);
  Free_poly_data(&_pgen_tmp_102_229._c1_poly);
  Free_poly_data(&_pgen_tmp_102_229._c0_poly);
  Free_poly_data(&_preg_268435573._c1_poly);
  Free_poly_data(&_preg_268435573._c0_poly);
  Free_poly_data(&_pgen_tmp_103_230._c1_poly);
  Free_poly_data(&_pgen_tmp_103_230._c0_poly);
  Free_poly_data(&_preg_268435574._c1_poly);
  Free_poly_data(&_preg_268435574._c0_poly);
  Free_poly_data(&_pgen_tmp_104_231._c1_poly);
  Free_poly_data(&_pgen_tmp_104_231._c0_poly);
  Free_poly_data(&_preg_268435575._c1_poly);
  Free_poly_data(&_preg_268435575._c0_poly);
  Free_poly_data(&_pgen_tmp_105_232._c1_poly);
  Free_poly_data(&_pgen_tmp_105_232._c0_poly);
  Free_poly_data(&_preg_268435576._c1_poly);
  Free_poly_data(&_preg_268435576._c0_poly);
  Free_poly_data(&_pgen_tmp_106_233._c1_poly);
  Free_poly_data(&_pgen_tmp_106_233._c0_poly);
  Free_poly_data(&_preg_268435577._c1_poly);
  Free_poly_data(&_preg_268435577._c0_poly);
  Free_poly_data(&_pgen_tmp_107_234._c1_poly);
  Free_poly_data(&_pgen_tmp_107_234._c0_poly);
  Free_poly_data(&_preg_268435578._c1_poly);
  Free_poly_data(&_preg_268435578._c0_poly);
  Free_poly_data(&_pgen_tmp_108_235._c1_poly);
  Free_poly_data(&_pgen_tmp_108_235._c0_poly);
  Free_poly_data(&_preg_268435579._c1_poly);
  Free_poly_data(&_preg_268435579._c0_poly);
  Free_poly_data(&_pgen_tmp_109_236._c1_poly);
  Free_poly_data(&_pgen_tmp_109_236._c0_poly);
  Free_poly_data(&_preg_268435580._c1_poly);
  Free_poly_data(&_preg_268435580._c0_poly);
  Free_poly_data(&_pgen_tmp_110_237._c1_poly);
  Free_poly_data(&_pgen_tmp_110_237._c0_poly);
  Free_poly_data(&_preg_268435581._c1_poly);
  Free_poly_data(&_preg_268435581._c0_poly);
  Free_poly_data(&_pgen_tmp_111_238._c1_poly);
  Free_poly_data(&_pgen_tmp_111_238._c0_poly);
  Free_poly_data(&_preg_268435582._c1_poly);
  Free_poly_data(&_preg_268435582._c0_poly);
  Free_poly_data(&_pgen_tmp_112_239._c1_poly);
  Free_poly_data(&_pgen_tmp_112_239._c0_poly);
  Free_poly_data(&_preg_268435583._c1_poly);
  Free_poly_data(&_preg_268435583._c0_poly);
  Free_poly_data(&_pgen_tmp_113_240._c1_poly);
  Free_poly_data(&_pgen_tmp_113_240._c0_poly);
  Free_poly_data(&_preg_268435584._c1_poly);
  Free_poly_data(&_preg_268435584._c0_poly);
  Free_poly_data(&_pgen_tmp_114_241._c1_poly);
  Free_poly_data(&_pgen_tmp_114_241._c0_poly);
  Free_poly_data(&_preg_268435585._c1_poly);
  Free_poly_data(&_preg_268435585._c0_poly);
  Free_poly_data(&_pgen_tmp_115_242._c1_poly);
  Free_poly_data(&_pgen_tmp_115_242._c0_poly);
  Free_poly_data(&_preg_268435586._c1_poly);
  Free_poly_data(&_preg_268435586._c0_poly);
  Free_poly_data(&_pgen_tmp_116_243._c1_poly);
  Free_poly_data(&_pgen_tmp_116_243._c0_poly);
  Free_poly_data(&_preg_268435587._c1_poly);
  Free_poly_data(&_preg_268435587._c0_poly);
  Free_poly_data(&_pgen_tmp_117_244._c1_poly);
  Free_poly_data(&_pgen_tmp_117_244._c0_poly);
  Free_poly_data(&_preg_268435588._c1_poly);
  Free_poly_data(&_preg_268435588._c0_poly);
  Free_poly_data(&_pgen_tmp_118_245._c1_poly);
  Free_poly_data(&_pgen_tmp_118_245._c0_poly);
  Free_poly_data(&_preg_268435589._c1_poly);
  Free_poly_data(&_preg_268435589._c0_poly);
  Free_poly_data(&_pgen_tmp_119_246._c1_poly);
  Free_poly_data(&_pgen_tmp_119_246._c0_poly);
  Free_poly_data(&_preg_268435590._c1_poly);
  Free_poly_data(&_preg_268435590._c0_poly);
  Free_poly_data(&_pgen_tmp_120_247._c1_poly);
  Free_poly_data(&_pgen_tmp_120_247._c0_poly);
  Free_poly_data(&_preg_268435591._c1_poly);
  Free_poly_data(&_preg_268435591._c0_poly);
  Free_poly_data(&_pgen_tmp_121_248._c1_poly);
  Free_poly_data(&_pgen_tmp_121_248._c0_poly);
  Free_poly_data(&_preg_268435592._c1_poly);
  Free_poly_data(&_preg_268435592._c0_poly);
  Free_poly_data(&_pgen_tmp_122_249._c1_poly);
  Free_poly_data(&_pgen_tmp_122_249._c0_poly);
  Free_poly_data(&_preg_268435593._c1_poly);
  Free_poly_data(&_preg_268435593._c0_poly);
  Free_poly_data(&_pgen_tmp_123_250._c1_poly);
  Free_poly_data(&_pgen_tmp_123_250._c0_poly);
  Free_poly_data(&_preg_268435594._c1_poly);
  Free_poly_data(&_preg_268435594._c0_poly);
  Free_poly_data(&_pgen_tmp_124_251._c1_poly);
  Free_poly_data(&_pgen_tmp_124_251._c0_poly);
  Free_poly_data(&_preg_268435595._c1_poly);
  Free_poly_data(&_preg_268435595._c0_poly);
  Free_poly_data(&_pgen_tmp_125_252._c1_poly);
  Free_poly_data(&_pgen_tmp_125_252._c0_poly);
  Free_poly_data(&_preg_268435596._c1_poly);
  Free_poly_data(&_preg_268435596._c0_poly);
  Free_poly_data(&_pgen_tmp_126_253._c1_poly);
  Free_poly_data(&_pgen_tmp_126_253._c0_poly);
  Free_poly_data(&_preg_268435597._c1_poly);
  Free_poly_data(&_preg_268435597._c0_poly);
  Free_poly_data(&_pgen_tmp_127_254._c1_poly);
  Free_poly_data(&_pgen_tmp_127_254._c0_poly);
  Free_poly_data(&_preg_268435598._c1_poly);
  Free_poly_data(&_preg_268435598._c0_poly);
  Free_poly_data(&_pgen_tmp_128_255._c1_poly);
  Free_poly_data(&_pgen_tmp_128_255._c0_poly);
  Free_poly_data(&_preg_268435599._c1_poly);
  Free_poly_data(&_preg_268435599._c0_poly);
  Free_poly_data(&_pgen_tmp_129_256._c1_poly);
  Free_poly_data(&_pgen_tmp_129_256._c0_poly);
  Free_poly_data(&_preg_268435600._c1_poly);
  Free_poly_data(&_preg_268435600._c0_poly);
  Free_poly_data(&_pgen_tmp_130_257._c1_poly);
  Free_poly_data(&_pgen_tmp_130_257._c0_poly);
  Free_poly_data(&_preg_268435601._c1_poly);
  Free_poly_data(&_preg_268435601._c0_poly);
  Free_poly_data(&_pgen_tmp_131_258._c1_poly);
  Free_poly_data(&_pgen_tmp_131_258._c0_poly);
  Free_poly_data(&_preg_268435602._c1_poly);
  Free_poly_data(&_preg_268435602._c0_poly);
  Free_poly_data(&_pgen_tmp_132_259._c1_poly);
  Free_poly_data(&_pgen_tmp_132_259._c0_poly);
  Free_poly_data(&_preg_268435603._c1_poly);
  Free_poly_data(&_preg_268435603._c0_poly);
  Free_poly_data(&_pgen_tmp_133_260._c1_poly);
  Free_poly_data(&_pgen_tmp_133_260._c0_poly);
  Free_poly_data(&_preg_268435604._c1_poly);
  Free_poly_data(&_preg_268435604._c0_poly);
  Free_poly_data(&_pgen_tmp_134_261._c1_poly);
  Free_poly_data(&_pgen_tmp_134_261._c0_poly);
  Free_poly_data(&_preg_268435605._c1_poly);
  Free_poly_data(&_preg_268435605._c0_poly);
  Free_poly_data(&_pgen_tmp_135_262._c1_poly);
  Free_poly_data(&_pgen_tmp_135_262._c0_poly);
  Free_poly_data(&_preg_268435606._c1_poly);
  Free_poly_data(&_preg_268435606._c0_poly);
  Free_poly_data(&_pgen_tmp_136_263._c1_poly);
  Free_poly_data(&_pgen_tmp_136_263._c0_poly);
  Free_poly_data(&_preg_268435607._c1_poly);
  Free_poly_data(&_preg_268435607._c0_poly);
  Free_poly_data(&_pgen_tmp_137_264._c1_poly);
  Free_poly_data(&_pgen_tmp_137_264._c0_poly);
  Free_poly_data(&_preg_268435608._c1_poly);
  Free_poly_data(&_preg_268435608._c0_poly);
  Free_poly_data(&_pgen_tmp_138_265._c1_poly);
  Free_poly_data(&_pgen_tmp_138_265._c0_poly);
  Free_poly_data(&_preg_268435609._c1_poly);
  Free_poly_data(&_preg_268435609._c0_poly);
  Free_poly_data(&_pgen_tmp_139_266._c1_poly);
  Free_poly_data(&_pgen_tmp_139_266._c0_poly);
  Free_poly_data(&_preg_268435610._c1_poly);
  Free_poly_data(&_preg_268435610._c0_poly);
  Free_poly_data(&_pgen_tmp_140_267._c1_poly);
  Free_poly_data(&_pgen_tmp_140_267._c0_poly);
  Free_poly_data(&_preg_268435611._c1_poly);
  Free_poly_data(&_preg_268435611._c0_poly);
  Free_poly_data(&_pgen_tmp_141_268._c1_poly);
  Free_poly_data(&_pgen_tmp_141_268._c0_poly);
  Free_poly_data(&_preg_268435612._c1_poly);
  Free_poly_data(&_preg_268435612._c0_poly);
  Free_poly_data(&_pgen_tmp_142_269._c1_poly);
  Free_poly_data(&_pgen_tmp_142_269._c0_poly);
  Free_poly_data(&_preg_268435613._c1_poly);
  Free_poly_data(&_preg_268435613._c0_poly);
  Free_poly_data(&_pgen_tmp_143_270._c1_poly);
  Free_poly_data(&_pgen_tmp_143_270._c0_poly);
  Free_poly_data(&_preg_268435614._c1_poly);
  Free_poly_data(&_preg_268435614._c0_poly);
  Free_poly_data(&_pgen_tmp_144_271._c1_poly);
  Free_poly_data(&_pgen_tmp_144_271._c0_poly);
  Free_poly_data(&_preg_268435615._c1_poly);
  Free_poly_data(&_preg_268435615._c0_poly);
  Free_poly_data(&_pgen_tmp_145_272._c1_poly);
  Free_poly_data(&_pgen_tmp_145_272._c0_poly);
  Free_poly_data(&_preg_268435616._c1_poly);
  Free_poly_data(&_preg_268435616._c0_poly);
  Free_poly_data(&_pgen_tmp_146_273._c1_poly);
  Free_poly_data(&_pgen_tmp_146_273._c0_poly);
  Free_poly_data(&_preg_268435617._c1_poly);
  Free_poly_data(&_preg_268435617._c0_poly);
  Free_poly_data(&_pgen_tmp_147_274._c1_poly);
  Free_poly_data(&_pgen_tmp_147_274._c0_poly);
  Free_poly_data(&_preg_268435618._c1_poly);
  Free_poly_data(&_preg_268435618._c0_poly);
  Free_poly_data(&_pgen_tmp_148_275._c1_poly);
  Free_poly_data(&_pgen_tmp_148_275._c0_poly);
  Free_poly_data(&_preg_268435619._c1_poly);
  Free_poly_data(&_preg_268435619._c0_poly);
  Free_poly_data(&_pgen_tmp_149_276._c1_poly);
  Free_poly_data(&_pgen_tmp_149_276._c0_poly);
  Free_poly_data(&_preg_268435620._c1_poly);
  Free_poly_data(&_preg_268435620._c0_poly);
  Free_poly_data(&_pgen_tmp_150_277._c1_poly);
  Free_poly_data(&_pgen_tmp_150_277._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=8
  for (bs_input_n9_70 = 0; bs_input_n9_70 < 8; bs_input_n9_70 = bs_input_n9_70 + 1) {
    _preg_268435621 = Rotate(input_dup_n9_69, _cst_72[bs_input_n9_70]);
    Copy_ciph(&input_block_n9_71[bs_input_n9_70], &_preg_268435621);
    Free_poly_data(&_preg_268435621._c1_poly);
    Free_poly_data(&_preg_268435621._c0_poly);
  }
  Free_poly_data(&input_dup_n9_69._c1_poly);
  Free_poly_data(&input_dup_n9_69._c0_poly);
  Zero_ciph(&gemm_result_n10_72);
  // IMRA Metakernel: gs=8
  for (gs_n10_73 = 0; gs_n10_73 < 8; gs_n10_73 = gs_n10_73 + 1) {
    Zero_ciph(&block_result_74);
    for (bs_n10_75 = 0; bs_n10_75 < 8; bs_n10_75 = bs_n10_75 + 1) {
      _ckks_gen_tmp_1714_121 = input_block_n9_71[bs_n10_75];
      Pt_from_msg_ofst(&_pgen_tmp_151_278, 35/* cst_71 */, ((bs_n10_75 + (gs_n10_73 * 8))) * (16640), 16640, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_152_279, &_ckks_gen_tmp_1714_121, &_pgen_tmp_151_278);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&block_result_74, &block_result_74, &_pgen_tmp_152_279);
      _pgen_modulus_124 = Q_modulus();
      _pgen_num_q_125 = Poly_level(&block_result_74._c0_poly);
      for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_152_279._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_1714_121._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_151_278._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_152_279._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_1714_121._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_151_278._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modadd(Coeffs(&block_result_74._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&block_result_74._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_152_279._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modadd(Coeffs(&block_result_74._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&block_result_74._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_152_279._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        _pgen_modulus_124 = _pgen_modulus_124 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435622 = Rotate(block_result_74, gs_n10_73 * 8);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&gemm_result_n10_72, &gemm_result_n10_72, &_preg_268435622);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&gemm_result_n10_72._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modadd(Coeffs(&gemm_result_n10_72._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&gemm_result_n10_72._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435622._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&gemm_result_n10_72._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&gemm_result_n10_72._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435622._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435622._c1_poly);
    Free_poly_data(&_preg_268435622._c0_poly);
  }
  Free_ciph_poly(input_block_n9_71, 8);
  Free_poly_data(&_pgen_tmp_151_278._poly);
  Free_poly_data(&_pgen_tmp_152_279._c1_poly);
  Free_poly_data(&_pgen_tmp_152_279._c0_poly);
  Free_poly_data(&block_result_74._c1_poly);
  Free_poly_data(&block_result_74._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&gemm_result_n10_72, &gemm_result_n10_72);
  Rescale(&gemm_result_n10_72._c0_poly, &gemm_result_n10_72._c0_poly);
  Rescale(&gemm_result_n10_72._c1_poly, &gemm_result_n10_72._c1_poly);
  CMPLR_TM_END(19, 0);
  // gemm result reduce->Ps=4
  Copy_ciph(&reduce_intra_76, &gemm_result_n10_72);
  for (ri_n10_77 = 1; ri_n10_77 < 4; ri_n10_77 = ri_n10_77 + 1) {
    _preg_268435623 = Rotate(gemm_result_n10_72, ri_n10_77 * 4160);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&reduce_intra_76, &reduce_intra_76, &_preg_268435623);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&reduce_intra_76._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modadd(Coeffs(&reduce_intra_76._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&reduce_intra_76._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435623._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&reduce_intra_76._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&reduce_intra_76._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435623._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435623._c1_poly);
    Free_poly_data(&_preg_268435623._c0_poly);
  }
  Free_poly_data(&gemm_result_n10_72._c1_poly);
  Free_poly_data(&gemm_result_n10_72._c0_poly);
  // gemm result reduce->(kp/np)=0
  // gemm add bias
  Pt_from_msg(&_pgen_tmp_153_280, 36 /* cst_11 */, 4096, 1, 2);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&reduce_intra_76, &reduce_intra_76, &_pgen_tmp_153_280);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&reduce_intra_76._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&reduce_intra_76._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&reduce_intra_76._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_153_280._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Set_coeffs(&reduce_intra_76._c1_poly, _pgen_rns_idx_126, degree, Coeffs(&reduce_intra_76._c1_poly, _pgen_rns_idx_126, degree));
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_153_280._poly);
  CMPLR_TM_END(13, 0);
  Pt_from_msg(&_pgen_tmp_155_282, 37 /* cst_73 */, 4096, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_154_281, &reduce_intra_76, &_pgen_tmp_155_282);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&_pgen_tmp_154_281._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_154_281._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&reduce_intra_76._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_155_282._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_154_281._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&reduce_intra_76._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_155_282._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_155_282._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&reduce_intra_76, &_pgen_tmp_154_281);
  Rescale(&reduce_intra_76._c0_poly, &_pgen_tmp_154_281._c0_poly);
  Rescale(&reduce_intra_76._c1_poly, &_pgen_tmp_154_281._c1_poly);
  Free_poly_data(&_pgen_tmp_154_281._c1_poly);
  Free_poly_data(&_pgen_tmp_154_281._c0_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&_preg_268435497, &reduce_intra_76);
  Free_poly_data(&reduce_intra_76._c1_poly);
  Free_poly_data(&reduce_intra_76._c0_poly);
  CMPLR_TM_END(7, 0);
  // pragma: 65537, 1029, 53
  // /classifier/classifier.2/Relu
  // pragma: 65536, 1033, 58
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435498, &_preg_268435497, 14);
  Free_poly_data(&_preg_268435497._c1_poly);
  Free_poly_data(&_preg_268435497._c0_poly);
  _preg_268435499 = App_relu(_preg_268435498, _preg_268435498, 4096);
  Free_poly_data(&_preg_268435498._c1_poly);
  Free_poly_data(&_preg_268435498._c0_poly);
  Copy_ciph(&_preg_268435500, &_preg_268435499);
  Free_poly_data(&_preg_268435499._c1_poly);
  Free_poly_data(&_preg_268435499._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 58
  // /classifier/classifier.4/Gemm
  // pragma: 65536, 1029, 59
  CMPLR_TM_START(7, 0);
  // BlockingRot replicate=5
  _preg_268435624 = Rotate(_preg_268435500, -4096);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_156_283, &_preg_268435500, &_preg_268435624);
  CMPLR_TM_END(12, 0);
  _preg_268435625 = Rotate(_preg_268435500, -8192);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_157_284, &_pgen_tmp_156_283, &_preg_268435625);
  CMPLR_TM_END(12, 0);
  _preg_268435626 = Rotate(_preg_268435500, -12288);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&_pgen_tmp_158_285, &_pgen_tmp_157_284, &_preg_268435626);
  CMPLR_TM_END(12, 0);
  _preg_268435627 = Rotate(_preg_268435500, -16384);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n10_78, &_pgen_tmp_158_285, &_preg_268435627);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&input_dup_n10_78._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&_pgen_tmp_156_283._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435500._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435624._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_156_283._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435500._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435624._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_157_284._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_156_283._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435625._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_157_284._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_156_283._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435625._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_158_285._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_157_284._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435626._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&_pgen_tmp_158_285._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_157_284._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435626._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&input_dup_n10_78._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_158_285._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435627._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&input_dup_n10_78._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_158_285._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435627._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_preg_268435624._c1_poly);
  Free_poly_data(&_preg_268435624._c0_poly);
  Free_poly_data(&_preg_268435500._c1_poly);
  Free_poly_data(&_preg_268435500._c0_poly);
  Free_poly_data(&_preg_268435625._c1_poly);
  Free_poly_data(&_preg_268435625._c0_poly);
  Free_poly_data(&_pgen_tmp_156_283._c1_poly);
  Free_poly_data(&_pgen_tmp_156_283._c0_poly);
  Free_poly_data(&_preg_268435626._c1_poly);
  Free_poly_data(&_preg_268435626._c0_poly);
  Free_poly_data(&_pgen_tmp_157_284._c1_poly);
  Free_poly_data(&_pgen_tmp_157_284._c0_poly);
  Free_poly_data(&_preg_268435627._c1_poly);
  Free_poly_data(&_preg_268435627._c0_poly);
  Free_poly_data(&_pgen_tmp_158_285._c1_poly);
  Free_poly_data(&_pgen_tmp_158_285._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=32
  for (bs_input_n10_79 = 0; bs_input_n10_79 < 32; bs_input_n10_79 = bs_input_n10_79 + 1) {
    _preg_268435628 = Rotate(input_dup_n10_78, _cst_75[bs_input_n10_79]);
    Copy_ciph(&input_block_n10_80[bs_input_n10_79], &_preg_268435628);
    Free_poly_data(&_preg_268435628._c1_poly);
    Free_poly_data(&_preg_268435628._c0_poly);
  }
  Free_poly_data(&input_dup_n10_78._c1_poly);
  Free_poly_data(&input_dup_n10_78._c0_poly);
  Zero_ciph(&gemm_result_n11_81);
  // IMRA Metakernel: gs=32
  for (gs_n11_82 = 0; gs_n11_82 < 32; gs_n11_82 = gs_n11_82 + 1) {
    Zero_ciph(&block_result_83);
    for (bs_n11_84 = 0; bs_n11_84 < 32; bs_n11_84 = bs_n11_84 + 1) {
      _ckks_gen_tmp_1883_122 = input_block_n10_80[bs_n11_84];
      Pt_from_msg_ofst(&_pgen_tmp_159_286, 38/* cst_74 */, ((bs_n11_84 + (gs_n11_82 * 32))) * (20480), 20480, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_160_287, &_ckks_gen_tmp_1883_122, &_pgen_tmp_159_286);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&block_result_83, &block_result_83, &_pgen_tmp_160_287);
      _pgen_modulus_124 = Q_modulus();
      _pgen_num_q_125 = Poly_level(&block_result_83._c0_poly);
      for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_160_287._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_1883_122._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_159_286._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_160_287._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_1883_122._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_159_286._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modadd(Coeffs(&block_result_83._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&block_result_83._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_160_287._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modadd(Coeffs(&block_result_83._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&block_result_83._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_160_287._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        _pgen_modulus_124 = _pgen_modulus_124 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435629 = Rotate(block_result_83, gs_n11_82 * 32);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&gemm_result_n11_81, &gemm_result_n11_81, &_preg_268435629);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&gemm_result_n11_81._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modadd(Coeffs(&gemm_result_n11_81._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&gemm_result_n11_81._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435629._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&gemm_result_n11_81._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&gemm_result_n11_81._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435629._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435629._c1_poly);
    Free_poly_data(&_preg_268435629._c0_poly);
  }
  Free_ciph_poly(input_block_n10_80, 32);
  Free_poly_data(&_pgen_tmp_159_286._poly);
  Free_poly_data(&_pgen_tmp_160_287._c1_poly);
  Free_poly_data(&_pgen_tmp_160_287._c0_poly);
  Free_poly_data(&block_result_83._c1_poly);
  Free_poly_data(&block_result_83._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&gemm_result_n11_81, &gemm_result_n11_81);
  Rescale(&gemm_result_n11_81._c0_poly, &gemm_result_n11_81._c0_poly);
  Rescale(&gemm_result_n11_81._c1_poly, &gemm_result_n11_81._c1_poly);
  CMPLR_TM_END(19, 0);
  // gemm result reduce->Ps=4
  Copy_ciph(&reduce_intra_85, &gemm_result_n11_81);
  for (ri_n11_86 = 1; ri_n11_86 < 4; ri_n11_86 = ri_n11_86 + 1) {
    _preg_268435630 = Rotate(gemm_result_n11_81, ri_n11_86 * 5120);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&reduce_intra_85, &reduce_intra_85, &_preg_268435630);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&reduce_intra_85._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modadd(Coeffs(&reduce_intra_85._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&reduce_intra_85._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435630._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&reduce_intra_85._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&reduce_intra_85._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435630._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435630._c1_poly);
    Free_poly_data(&_preg_268435630._c0_poly);
  }
  Free_poly_data(&gemm_result_n11_81._c1_poly);
  Free_poly_data(&gemm_result_n11_81._c0_poly);
  // gemm result reduce->(kp/np)=1
  // gemm add bias
  Pt_from_msg(&_pgen_tmp_161_288, 39 /* cst_13 */, 4096, 1, 2);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&reduce_intra_85, &reduce_intra_85, &_pgen_tmp_161_288);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&reduce_intra_85._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&reduce_intra_85._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&reduce_intra_85._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_161_288._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Set_coeffs(&reduce_intra_85._c1_poly, _pgen_rns_idx_126, degree, Coeffs(&reduce_intra_85._c1_poly, _pgen_rns_idx_126, degree));
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_161_288._poly);
  CMPLR_TM_END(13, 0);
  Pt_from_msg(&_pgen_tmp_163_290, 40 /* cst_76 */, 4096, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_162_289, &reduce_intra_85, &_pgen_tmp_163_290);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&_pgen_tmp_162_289._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_162_289._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&reduce_intra_85._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_163_290._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_162_289._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&reduce_intra_85._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_163_290._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_163_290._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&reduce_intra_85, &_pgen_tmp_162_289);
  Rescale(&reduce_intra_85._c0_poly, &_pgen_tmp_162_289._c0_poly);
  Rescale(&reduce_intra_85._c1_poly, &_pgen_tmp_162_289._c1_poly);
  Free_poly_data(&_pgen_tmp_162_289._c1_poly);
  Free_poly_data(&_pgen_tmp_162_289._c0_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&_preg_268435501, &reduce_intra_85);
  Free_poly_data(&reduce_intra_85._c1_poly);
  Free_poly_data(&reduce_intra_85._c0_poly);
  CMPLR_TM_END(7, 0);
  // pragma: 65537, 1029, 59
  // /classifier/classifier.5/Relu
  // pragma: 65536, 1033, 60
  CMPLR_TM_START(10, 0);
  Bootstrap(&_preg_268435502, &_preg_268435501, 14);
  Free_poly_data(&_preg_268435501._c1_poly);
  Free_poly_data(&_preg_268435501._c0_poly);
  _preg_268435503 = App_relu(_preg_268435502, _preg_268435502, 4096);
  Free_poly_data(&_preg_268435502._c1_poly);
  Free_poly_data(&_preg_268435502._c0_poly);
  Copy_ciph(&_preg_268435504, &_preg_268435503);
  Free_poly_data(&_preg_268435503._c1_poly);
  Free_poly_data(&_preg_268435503._c0_poly);
  CMPLR_TM_END(10, 0);
  // pragma: 65537, 1033, 60
  // /classifier/classifier.6/Gemm
  // pragma: 65536, 1029, 61
  CMPLR_TM_START(7, 0);
  // BlockingRot replicate=2
  _preg_268435631 = Rotate(_preg_268435504, -4100);
  CMPLR_TM_START(12, 0);
  Init_ciph_same_scale(&input_dup_n11_87, &_preg_268435504, &_preg_268435631);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&input_dup_n11_87._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&input_dup_n11_87._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435504._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435631._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modadd(Coeffs(&input_dup_n11_87._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435504._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435631._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_preg_268435631._c1_poly);
  Free_poly_data(&_preg_268435631._c0_poly);
  Free_poly_data(&_preg_268435504._c1_poly);
  Free_poly_data(&_preg_268435504._c0_poly);
  CMPLR_TM_END(12, 0);
  // BlockingRot HRot=bs=2
  for (bs_input_n11_88 = 0; bs_input_n11_88 < 2; bs_input_n11_88 = bs_input_n11_88 + 1) {
    _preg_268435632 = Rotate(input_dup_n11_87, _cst_78[bs_input_n11_88]);
    Copy_ciph(&input_block_n11_89[bs_input_n11_88], &_preg_268435632);
    Free_poly_data(&_preg_268435632._c1_poly);
    Free_poly_data(&_preg_268435632._c0_poly);
  }
  Free_poly_data(&input_dup_n11_87._c1_poly);
  Free_poly_data(&input_dup_n11_87._c0_poly);
  Zero_ciph(&gemm_result_n12_90);
  // IMRA Metakernel: gs=5
  for (gs_n12_91 = 0; gs_n12_91 < 5; gs_n12_91 = gs_n12_91 + 1) {
    Zero_ciph(&block_result_92);
    for (bs_n12_93 = 0; bs_n12_93 < 2; bs_n12_93 = bs_n12_93 + 1) {
      _ckks_gen_tmp_2040_123 = input_block_n11_89[bs_n12_93];
      Pt_from_msg_ofst(&_pgen_tmp_164_291, 41/* cst_77 */, ((bs_n12_93 + (gs_n12_91 * 2))) * (4110), 4110, 1, 3);
      CMPLR_TM_START(17, 0);
      Init_ciph_up_scale_plain(&_pgen_tmp_165_292, &_ckks_gen_tmp_2040_123, &_pgen_tmp_164_291);
      CMPLR_TM_END(17, 0);
      CMPLR_TM_START(12, 0);
      Init_ciph_same_scale(&block_result_92, &block_result_92, &_pgen_tmp_165_292);
      _pgen_modulus_124 = Q_modulus();
      _pgen_num_q_125 = Poly_level(&block_result_92._c0_poly);
      for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
        Hw_modmul(Coeffs(&_pgen_tmp_165_292._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_2040_123._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_164_291._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modmul(Coeffs(&_pgen_tmp_165_292._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_ckks_gen_tmp_2040_123._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_164_291._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modadd(Coeffs(&block_result_92._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&block_result_92._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_165_292._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        Hw_modadd(Coeffs(&block_result_92._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&block_result_92._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_165_292._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
        _pgen_modulus_124 = _pgen_modulus_124 + 1;
      }
      CMPLR_TM_END(12, 0);
    }
    _preg_268435633 = Rotate(block_result_92, gs_n12_91 * 2);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&gemm_result_n12_90, &gemm_result_n12_90, &_preg_268435633);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&gemm_result_n12_90._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modadd(Coeffs(&gemm_result_n12_90._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&gemm_result_n12_90._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435633._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&gemm_result_n12_90._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&gemm_result_n12_90._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435633._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435633._c1_poly);
    Free_poly_data(&_preg_268435633._c0_poly);
  }
  Free_ciph_poly(input_block_n11_89, 2);
  Free_poly_data(&_pgen_tmp_164_291._poly);
  Free_poly_data(&_pgen_tmp_165_292._c1_poly);
  Free_poly_data(&_pgen_tmp_165_292._c0_poly);
  Free_poly_data(&block_result_92._c1_poly);
  Free_poly_data(&block_result_92._c0_poly);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&gemm_result_n12_90, &gemm_result_n12_90);
  Rescale(&gemm_result_n12_90._c0_poly, &gemm_result_n12_90._c0_poly);
  Rescale(&gemm_result_n12_90._c1_poly, &gemm_result_n12_90._c1_poly);
  CMPLR_TM_END(19, 0);
  // gemm result reduce->Ps=1
  // gemm result reduce->(kp/np)=410
  Copy_ciph(&reduce_intra_94, &gemm_result_n12_90);
  for (ri_n12_95 = 1; ri_n12_95 < 410; ri_n12_95 = ri_n12_95 + 1) {
    _preg_268435634 = Rotate(gemm_result_n12_90, ri_n12_95 * 10);
    CMPLR_TM_START(12, 0);
    Init_ciph_same_scale(&reduce_intra_94, &reduce_intra_94, &_preg_268435634);
    _pgen_modulus_124 = Q_modulus();
    _pgen_num_q_125 = Poly_level(&reduce_intra_94._c0_poly);
    for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
      Hw_modadd(Coeffs(&reduce_intra_94._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&reduce_intra_94._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435634._c0_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      Hw_modadd(Coeffs(&reduce_intra_94._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&reduce_intra_94._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_preg_268435634._c1_poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
      _pgen_modulus_124 = _pgen_modulus_124 + 1;
    }
    CMPLR_TM_END(12, 0);
    Free_poly_data(&_preg_268435634._c1_poly);
    Free_poly_data(&_preg_268435634._c0_poly);
  }
  Free_poly_data(&gemm_result_n12_90._c1_poly);
  Free_poly_data(&gemm_result_n12_90._c0_poly);
  // gemm add bias
  Pt_from_msg(&_pgen_tmp_166_293, 42 /* cst_15 */, 10, 1, 2);
  CMPLR_TM_START(13, 0);
  Init_ciph_same_scale_plain(&reduce_intra_94, &reduce_intra_94, &_pgen_tmp_166_293);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&reduce_intra_94._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modadd(Coeffs(&reduce_intra_94._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&reduce_intra_94._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_166_293._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Set_coeffs(&reduce_intra_94._c1_poly, _pgen_rns_idx_126, degree, Coeffs(&reduce_intra_94._c1_poly, _pgen_rns_idx_126, degree));
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_166_293._poly);
  CMPLR_TM_END(13, 0);
  Pt_from_msg(&_pgen_tmp_168_295, 43 /* cst_79 */, 10, 1, 2);
  CMPLR_TM_START(17, 0);
  Init_ciph_up_scale_plain(&_pgen_tmp_167_294, &reduce_intra_94, &_pgen_tmp_168_295);
  _pgen_modulus_124 = Q_modulus();
  _pgen_num_q_125 = Poly_level(&_pgen_tmp_167_294._c0_poly);
  for (_pgen_rns_idx_126 = 0; _pgen_rns_idx_126 < _pgen_num_q_125; _pgen_rns_idx_126 = _pgen_rns_idx_126 + 1) {
    Hw_modmul(Coeffs(&_pgen_tmp_167_294._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&reduce_intra_94._c0_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_168_295._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    Hw_modmul(Coeffs(&_pgen_tmp_167_294._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&reduce_intra_94._c1_poly, _pgen_rns_idx_126, degree), Coeffs(&_pgen_tmp_168_295._poly, _pgen_rns_idx_126, degree), _pgen_modulus_124, degree);
    _pgen_modulus_124 = _pgen_modulus_124 + 1;
  }
  Free_poly_data(&_pgen_tmp_168_295._poly);
  CMPLR_TM_END(17, 0);
  CMPLR_TM_START(19, 0);
  Init_ciph_down_scale(&reduce_intra_94, &_pgen_tmp_167_294);
  Rescale(&reduce_intra_94._c0_poly, &_pgen_tmp_167_294._c0_poly);
  Rescale(&reduce_intra_94._c1_poly, &_pgen_tmp_167_294._c1_poly);
  Free_poly_data(&_pgen_tmp_167_294._c1_poly);
  Free_poly_data(&_pgen_tmp_167_294._c0_poly);
  CMPLR_TM_END(19, 0);
  Copy_ciph(&output_96, &reduce_intra_94);
  Free_poly_data(&reduce_intra_94._c1_poly);
  Free_poly_data(&reduce_intra_94._c0_poly);
  CMPLR_TM_END(7, 0);
  // pragma: 65537, 1029, 61
  Set_output_data("output", 0, &output_96);
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
  Encode_float(&_pgen_tmp_5_35, &_cst_80, 1, Sc_degree(&_pgen_tmp_4_34), Level(&_pgen_tmp_4_34));
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
  Encode_float(&_pgen_tmp_11_41, &_cst_81, 1, Sc_degree(&_pgen_tmp_10_40), Level(&_pgen_tmp_10_40));
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
  Encode_float(&_pgen_tmp_43_73, &_cst_90, 1, Sc_degree(&_pgen_tmp_42_72), Level(&_pgen_tmp_42_72));
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
  Encode_float(&_pgen_tmp_50_80, &_cst_91, 1, 1, Level(&_relu_tmp58_7));
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
  Encode_float(&_pgen_tmp_57_87, &_cst_92, 1, Sc_degree(&_pgen_tmp_56_86), Level(&_pgen_tmp_56_86));
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
  Encode_float(&_pgen_tmp_63_93, &_cst_93, 1, Sc_degree(&_pgen_tmp_62_92), Level(&_pgen_tmp_62_92));
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
  Encode_double(&_pgen_tmp_81_111, &_cst_100, 1, 1, Level(&_relu_tmp80_11));
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
  Encode_double(&_pgen_tmp_93_123, &_cst_103, 1, 1, Level(&_relu_tmp80_11));
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
  Encode_double(&_pgen_tmp_103_133, &_cst_106, 1, 1, Level(&_relu_tmp80_11));
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
  Encode_float(&_pgen_tmp_115_145, &_cst_107, 1, Sc_degree(&_pgen_tmp_114_144), Level(&_pgen_tmp_114_144));
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
  Encode_float(&_pgen_tmp_122_152, &_cst_108, 1, 1, Level(&_relu_tmp155_16));
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
  Encode_float(&_pgen_tmp_129_159, &_cst_109, 1, Sc_degree(&_pgen_tmp_128_158), Level(&_pgen_tmp_128_158));
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
  Encode_float(&_pgen_tmp_135_165, &_cst_110, 1, Sc_degree(&_pgen_tmp_134_164), Level(&_pgen_tmp_134_164));
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
    LIB_ANT, 65536, 0, 32, 6, 60, 56, 3, 192, 693, 
    { -28672, -24576, -20480, -16384, -16128, -15872, -15616, -15360,
      -15104, -14848, -14592, -14336, -14080, -13824, -13568, -13312,
      -13056, -12800, -12544, -12288, -12032, -11776, -11520, -11264,
      -11008, -10752, -10496, -10240, -9984, -9728, -9472, -9216,
      -8960, -8704, -8448, -8192, -7936, -7680, -7424, -7168,
      -6912, -6656, -6400, -6144, -5888, -5632, -5376, -5120,
      -4864, -4608, -4352, -4100, -4096, -3840, -3584, -3328,
      -3072, -2816, -2560, -2304, -2048, -1792, -1536, -1280,
      -1024, -768, -512, -256, -33, -32, -31, -9,
      -8, -7, -5, -4, -3, -1, 0, 1,
      2, 3, 4, 5, 6, 7, 8, 9,
      10, 11, 12, 13, 14, 15, 16, 17,
      18, 19, 20, 21, 22, 23, 24, 25,
      26, 27, 28, 29, 30, 31, 32, 33,
      36, 38, 40, 48, 50, 56, 60, 64,
      70, 72, 80, 90, 96, 100, 110, 112,
      120, 128, 130, 140, 144, 150, 160, 168,
      170, 176, 180, 190, 192, 200, 208, 210,
      220, 224, 230, 240, 250, 256, 260, 270,
      272, 280, 288, 290, 300, 304, 310, 320,
      330, 336, 340, 350, 352, 360, 368, 370,
      380, 384, 390, 400, 410, 416, 420, 430,
      432, 440, 448, 450, 460, 464, 470, 480,
      490, 496, 500, 510, 512, 520, 528, 530,
      540, 544, 550, 560, 570, 576, 580, 590,
      592, 600, 608, 610, 620, 624, 630, 640,
      650, 656, 660, 670, 672, 680, 688, 690,
      700, 704, 710, 720, 730, 736, 740, 750,
      752, 760, 768, 770, 780, 784, 790, 800,
      810, 816, 820, 830, 832, 840, 848, 850,
      860, 864, 870, 880, 890, 896, 900, 910,
      912, 920, 928, 930, 940, 944, 950, 960,
      970, 976, 980, 990, 992, 1000, 1008, 1010,
      1020, 1024, 1030, 1040, 1050, 1056, 1060, 1070,
      1072, 1080, 1088, 1090, 1100, 1104, 1110, 1120,
      1130, 1136, 1140, 1150, 1152, 1160, 1168, 1170,
      1180, 1184, 1190, 1200, 1210, 1216, 1220, 1230,
      1232, 1240, 1248, 1250, 1260, 1264, 1270, 1280,
      1290, 1296, 1300, 1310, 1312, 1320, 1328, 1330,
      1340, 1344, 1350, 1360, 1370, 1376, 1380, 1390,
      1392, 1400, 1408, 1410, 1420, 1424, 1430, 1440,
      1450, 1456, 1460, 1470, 1472, 1480, 1488, 1490,
      1500, 1504, 1510, 1520, 1530, 1536, 1540, 1550,
      1560, 1570, 1580, 1584, 1590, 1600, 1610, 1620,
      1630, 1632, 1640, 1650, 1660, 1664, 1670, 1680,
      1690, 1700, 1710, 1720, 1728, 1730, 1740, 1750,
      1760, 1770, 1776, 1780, 1790, 1792, 1800, 1810,
      1820, 1824, 1830, 1840, 1850, 1856, 1860, 1870,
      1872, 1880, 1890, 1900, 1910, 1920, 1930, 1940,
      1950, 1960, 1968, 1970, 1980, 1984, 1990, 2000,
      2010, 2016, 2020, 2030, 2040, 2048, 2050, 2060,
      2064, 2070, 2080, 2090, 2100, 2110, 2112, 2120,
      2130, 2140, 2150, 2160, 2170, 2180, 2190, 2200,
      2208, 2210, 2220, 2230, 2240, 2250, 2256, 2260,
      2270, 2280, 2290, 2300, 2304, 2310, 2320, 2330,
      2340, 2350, 2352, 2360, 2370, 2380, 2390, 2400,
      2410, 2420, 2430, 2440, 2448, 2450, 2460, 2470,
      2480, 2490, 2496, 2500, 2510, 2520, 2530, 2540,
      2544, 2550, 2560, 2570, 2580, 2590, 2592, 2600,
      2610, 2620, 2630, 2640, 2650, 2660, 2670, 2680,
      2688, 2690, 2700, 2710, 2720, 2730, 2736, 2740,
      2750, 2760, 2770, 2780, 2784, 2790, 2800, 2810,
      2820, 2830, 2832, 2840, 2850, 2860, 2870, 2880,
      2890, 2900, 2910, 2920, 2928, 2930, 2940, 2950,
      2960, 2970, 2976, 2980, 2990, 3000, 3010, 3020,
      3024, 3030, 3040, 3050, 3060, 3070, 3072, 3080,
      3090, 3100, 3110, 3120, 3130, 3140, 3150, 3160,
      3168, 3170, 3180, 3190, 3200, 3210, 3216, 3220,
      3230, 3240, 3250, 3260, 3264, 3270, 3280, 3290,
      3300, 3310, 3312, 3320, 3330, 3340, 3350, 3360,
      3370, 3380, 3390, 3400, 3408, 3410, 3420, 3430,
      3440, 3450, 3456, 3460, 3470, 3480, 3490, 3500,
      3504, 3510, 3520, 3530, 3540, 3550, 3552, 3560,
      3570, 3580, 3590, 3600, 3610, 3620, 3630, 3640,
      3648, 3650, 3660, 3670, 3680, 3690, 3696, 3700,
      3710, 3720, 3730, 3740, 3744, 3750, 3760, 3770,
      3780, 3790, 3792, 3800, 3810, 3820, 3830, 3840,
      3850, 3860, 3870, 3880, 3888, 3890, 3900, 3910,
      3920, 3930, 3936, 3940, 3950, 3960, 3970, 3980,
      3984, 3990, 4000, 4010, 4020, 4030, 4032, 4040,
      4050, 4060, 4070, 4080, 4090, 4128, 4160, 4176,
      4224, 4272, 4320, 4368, 4416, 4464, 4512, 4560,
      4608, 4800, 4992, 5120, 5184, 5376, 5568, 5760,
      5952, 6144, 6912, 7680, 8320, 8448, 9216, 9984,
      10240, 10752, 11264, 11520, 12288, 12480, 13056, 13824,
      14592, 15360, 16128, 16896, 17664, 18432, 19200, 19968,
      20736, 21504, 22272, 23040, 23808 }
  };
  return &parm;
}

RT_DATA_INFO* Get_rt_data_info() {
  static RT_DATA_INFO info = {
    "/app/release/fhelipe_alexnet.bin",
    "XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX",
    DE_MSG_F32
  };
  return &info;
}

int32_t _cst_31[9] = {
  -33, -32, -31, -1, 0, 1, 31, 32,
  33
};
int32_t _cst_43[9] = {
  -9, -8, -7, -1, 0, 1, 7, 8,
  9
};
int32_t _cst_52[9] = {
  -5, -4, -3, -1, 0, 1, 3, 4,
  5
};
int32_t _cst_58[9] = {
  -5, -4, -3, -1, 0, 1, 3, 4,
  5
};
int32_t _cst_64[9] = {
  -5, -4, -3, -1, 0, 1, 3, 4,
  5
};
int32_t _cst_72[8] = {
  0, 1, 2, 3, 4, 5, 6, 7
};
int32_t _cst_75[32] = {
  0, 1, 2, 3, 4, 5, 6, 7,
  8, 9, 10, 11, 12, 13, 14, 15,
  16, 17, 18, 19, 20, 21, 22, 23,
  24, 25, 26, 27, 28, 29, 30, 31
};
int32_t _cst_78[2] = {
  0, 1
};
