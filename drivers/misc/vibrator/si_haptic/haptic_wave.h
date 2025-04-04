#ifndef _HAPTIC_WAVE_H_
#define _HAPTIC_WAVE_H_

struct f0_map {
    uint32_t f0_thre;
    const char *suffix;
};

char sih_rtp_name[SIH_WAVEFORM_MAX_NUM][SIH_RTP_NAME_MAX] = {
	{"aw8697_rtp.bin"},
};

static char sih_ram_name[5][30] ={
	{"aw8697_haptic_170.bin"},
	{"aw8697_haptic_170.bin"},
	{"aw8697_haptic_170.bin"},
	{"aw8697_haptic_170.bin"},
	{"aw8697_haptic_170.bin"},
};

static char sih_ram_name_170_soft[5][30] ={
	{"aw8697_haptic_170_soft.bin"},
	{"aw8697_haptic_170_soft.bin"},
	{"aw8697_haptic_170_soft.bin"},
	{"aw8697_haptic_170_soft.bin"},
	{"aw8697_haptic_170_soft.bin"},
};

static char sih_ram_name_205[5][30] = {
	{"aw8697_haptic_205.bin"},
	{"aw8697_haptic_205.bin"},
	{"aw8697_haptic_205.bin"},
	{"aw8697_haptic_205.bin"},
	{"aw8697_haptic_205.bin"},
};

static char sih_ram_name_205_soft[5][30] = {
	{"aw8697_haptic_205_soft.bin"},
	{"aw8697_haptic_205_soft.bin"},
	{"aw8697_haptic_205_soft.bin"},
	{"aw8697_haptic_205_soft.bin"},
	{"aw8697_haptic_205_soft.bin"},
};

static char sih_old_steady_test_rtp_name_0815[11][60] ={
	{"aw8697_old_steady_test_RTP_52_160Hz.bin"},
	{"aw8697_old_steady_test_RTP_52_162Hz.bin"},
	{"aw8697_old_steady_test_RTP_52_164Hz.bin"},
	{"aw8697_old_steady_test_RTP_52_166Hz.bin"},
	{"aw8697_old_steady_test_RTP_52_168Hz.bin"},
	{"aw8697_old_steady_test_RTP_52_170Hz.bin"},
	{"aw8697_old_steady_test_RTP_52_172Hz.bin"},
	{"aw8697_old_steady_test_RTP_52_174Hz.bin"},
	{"aw8697_old_steady_test_RTP_52_176Hz.bin"},
	{"aw8697_old_steady_test_RTP_52_178Hz.bin"},
	{"aw8697_old_steady_test_RTP_52_180Hz.bin"},
};

static char sih_high_temp_high_humidity_0815[11][60] ={
	{"aw8697_high_temp_high_humidity_channel_RTP_51_160Hz.bin"},
	{"aw8697_high_temp_high_humidity_channel_RTP_51_162Hz.bin"},
	{"aw8697_high_temp_high_humidity_channel_RTP_51_164Hz.bin"},
	{"aw8697_high_temp_high_humidity_channel_RTP_51_166Hz.bin"},
	{"aw8697_high_temp_high_humidity_channel_RTP_51_168Hz.bin"},
	{"aw8697_high_temp_high_humidity_channel_RTP_51_170Hz.bin"},
	{"aw8697_high_temp_high_humidity_channel_RTP_51_172Hz.bin"},
	{"aw8697_high_temp_high_humidity_channel_RTP_51_174Hz.bin"},
	{"aw8697_high_temp_high_humidity_channel_RTP_51_176Hz.bin"},
	{"aw8697_high_temp_high_humidity_channel_RTP_51_178Hz.bin"},
	{"aw8697_high_temp_high_humidity_channel_RTP_51_180Hz.bin"},
};

static char sih_old_steady_test_rtp_name_1419[11][60] = {
	{"aw8697_old_steady_test_RTP_52_195Hz.bin"},
	{"aw8697_old_steady_test_RTP_52_197Hz.bin"},
	{"aw8697_old_steady_test_RTP_52_199Hz.bin"},
	{"aw8697_old_steady_test_RTP_52_201Hz.bin"},
	{"aw8697_old_steady_test_RTP_52_203Hz.bin"},
	{"aw8697_old_steady_test_RTP_52_205Hz.bin"},
	{"aw8697_old_steady_test_RTP_52_207Hz.bin"},
	{"aw8697_old_steady_test_RTP_52_209Hz.bin"},
	{"aw8697_old_steady_test_RTP_52_211Hz.bin"},
	{"aw8697_old_steady_test_RTP_52_213Hz.bin"},
	{"aw8697_old_steady_test_RTP_52_215Hz.bin"},
};

static char sih_high_temp_high_humidity_1419[11][60] = {
	{"aw8697_high_temp_high_humidity_channel_RTP_51_195Hz.bin"},
	{"aw8697_high_temp_high_humidity_channel_RTP_51_197Hz.bin"},
	{"aw8697_high_temp_high_humidity_channel_RTP_51_199Hz.bin"},
	{"aw8697_high_temp_high_humidity_channel_RTP_51_201Hz.bin"},
	{"aw8697_high_temp_high_humidity_channel_RTP_51_203Hz.bin"},
	{"aw8697_high_temp_high_humidity_channel_RTP_51_205Hz.bin"},
	{"aw8697_high_temp_high_humidity_channel_RTP_51_207Hz.bin"},
	{"aw8697_high_temp_high_humidity_channel_RTP_51_209Hz.bin"},
	{"aw8697_high_temp_high_humidity_channel_RTP_51_211Hz.bin"},
	{"aw8697_high_temp_high_humidity_channel_RTP_51_213Hz.bin"},
	{"aw8697_high_temp_high_humidity_channel_RTP_51_215Hz.bin"},
};

static struct f0_map f0_suffix_map[] = {
	{1600, NULL},
	{1640, "_162Hz.bin"},
	{1680, "_166Hz.bin"},
	{1720, ".bin"},
	{1760, "_174Hz.bin"},
	{1800, "_178Hz.bin"},
	{1980, "_197Hz.bin"},
	{2020, "_201Hz.bin"},
	{2060, "_205Hz.bin"},
	{2100, "_209Hz.bin"},
	{2153, "_213Hz.bin"},
};

enum {
	AW8697_RTP = 0,
	AW8697_HEARTY_CHANNEL_RTP_1,
	AW8697_INSTANT_CHANNEL_RTP_2,
	AW8697_MUSIC_CHANNEL_RTP_3,
	AW8697_PERCUSSION_CHANNEL_RTP_4,
	AW8697_RIPPLE_CHANNEL_RTP_5,
	AW8697_BRIGHT_CHANNEL_RTP_6,
	AW8697_FUN_CHANNEL_RTP_7,
	AW8697_GLITTERING_CHANNEL_RTP_8,
	AW8697_GRANULES_CHANNEL_RTP_9,
	AW8697_HARP_CHANNEL_RTP_10,
	AW8697_IMPRESSION_CHANNEL_RTP_11,
	AW8697_INGENIOUS_CHANNEL_RTP_12,
	AW8697_JOY_CHANNEL_RTP_13,
	AW8697_OVERTONE_CHANNEL_RTP_14,
	AW8697_RECEIVE_CHANNEL_RTP_15,
	AW8697_SPLASH_CHANNEL_RTP_16,
	AW8697_ABOUT_SCHOOL_RTP_17,
	AW8697_BLISS_RTP_18,
	AW8697_CHILDHOOD_RTP_19,
	AW8697_COMMUTING_RTP_20,
	AW8697_DREAM_RTP_21,
	AW8697_FIREFLY_RTP_22,
	AW8697_GATHERING_RTP_23,
	AW8697_GAZE_RTP_24,
	AW8697_LAKESIDE_RTP_25,
	AW8697_LIFESTYLE_RTP_26,
	AW8697_MEMORIES_RTP_27,
	AW8697_MESSY_RTP_28,
	AW8697_NIGHT_RTP_29,
	AW8697_PASSIONATE_DANCE_RTP_30,
	AW8697_PLAYGROUND_RTP_31,
	AW8697_RELAX_RTP_32,
	AW8697_REMINISCENCE_RTP_33,
	AW8697_SILENCE_FROM_AFAR_RTP_34,
	AW8697_SILENCE_RTP_35,
	AW8697_STARS_RTP_36,
	AW8697_SUMMER_RTP_37,
	AW8697_TOYS_RTP_38,
	AW8697_TRAVEL_RTP_39,
	AW8697_VISION_RTP_40,
	AW8697_WALTZ_CHANNEL_RTP_41,
	AW8697_CUT_CHANNEL_RTP_42,
	AW8697_CLOCK_CHANNEL_RTP_43,
	AW8697_LONG_SOUND_CHANNEL_RTP_44,
	AW8697_SHORT_CHANNEL_RTP_45,
	AW8697_TWO_ERROR_REMAIND_RTP_46,
	AW8697_KILL_PROGRAM_RTP_47,
	AW8697_SIMPLE_CHANNEL_RTP_48,
	AW8697_PURE_RTP_49,
	AW8697_RESERVED_SOUND_CHANNEL_RTP_50,
	AW8697_HIGH_TEMP_HIGH_HUMIDITY_CHANNEL_RTP_51,
	AW8697_OLD_STEADY_TEST_RTP_52,
	AW8697_LISTEN_POP_53,
	AW8697_DESK_7_RTP_54,
	AW8697_NFC_10_RTP_55,
	AW8697_VIBRATOR_REMAIN_12_RTP_56,
	AW8697_NOTICE_13_RTP_57,
	AW8697_THIRD_RING_14_RTP_58,
	AW8697_HONOR_FISRT_KILL_RTP_60 = 60,
	AW8697_HONOR_TWO_KILL_RTP_61,
	AW8697_HONOR_THREE_KILL_RTP_62,
	AW8697_HONOR_FOUR_KILL_RTP_63,
	AW8697_HONOR_FIVE_KILL_RTP_64,
	AW8697_HONOR_THREE_CONTINU_KILL_RTP_65,
	AW8697_HONOR_FOUR_CONTINU_KILL_RTP_66,
	AW8697_HONOR_UNSTOPPABLE_RTP_67,
	AW8697_HONOR_THOUSANDS_KILL_RTP_68,
	AW8697_HONOR_LENGENDARY_RTP_69,
	AW8697_FRESHMORNING_RTP_70,
	AW8697_PEACEFUL_RTP_71,
	AW8697_CICADA_RTP_72,
	AW8697_ELECTRONICA_RTP_73,
	AW8697_HOLIDAY_RTP_74,
	AW8697_FUNK_RTP_75,
	AW8697_HOUSE_RTP_76,
	AW8697_TEMPLE_RTP_77,
	AW8697_DREAMYJAZZ_RTP_78,
	AW8697_MODERN_RTP_79,
	AW8697_ROUND_RTP_80,
	AW8697_RISING_RTP_81,
	AW8697_WOOD_RTP_82,
	AW8697_HEYS_RTP_83,
	AW8697_MBIRA_RTP_84,
	AW8697_NEWS_RTP_85,
	AW8697_PEAK_RTP_86,
	AW8697_CRISP_RTP_87,
	AW8697_SINGINGBOWLS_RTP_88,
	AW8697_BOUNCE_RTP_89,
	AW8697_ALCLOUDSCAPE_94 = 94,
	AW8697_ALGOODENERGY_95,
	AW8697_NTBLINK_96,
	AW8697_NTWHOOP_97,
	AW8697_NEWFEELING_98,
	AW8697_NATURE_99,
	AW8697_SOLDIER_FIRST_KILL_RTP_100,
	AW8697_SOLDIER_SECOND_KILL_RTP_101,
	AW8697_SOLDIER_THIRD_KILL_RTP_102,
	AW8697_SOLDIER_FOURTH_KILL_RTP_103,
	AW8697_SOLDIER_FIFTH_KILL_RTP_104,
	AW8697_STEPABLE_REGULATE_RTP_105,
	AW8697_VOICE_LEVEL_BAR_EDGE_RTP_106,
	AW8697_STRENGTH_LEVEL_BAR_EDGE_RTP_107,
	AW8697_CHARGING_SIMULATION_RTP_108,
	AW8697_FINGERPRINT_SUCCESS_RTP_109,
	AW8697_FINGERPRINT_EFFECT1_RTP_110,
	AW8697_FINGERPRINT_EFFECT2_RTP_111,
	AW8697_FINGERPRINT_EFFECT3_RTP_112,
	AW8697_FINGERPRINT_EFFECT4_RTP_113,
	AW8697_FINGERPRINT_EFFECT5_RTP_114,
	AW8697_FINGERPRINT_EFFECT6_RTP_115,
	AW8697_FINGERPRINT_EFFECT7_RTP_116,
	AW8697_FINGERPRINT_EFFECT8_RTP_117,
	AW8697_BREATH_SIMULATION_RTP_118,
	AW8697_TRLCEL_TORREBLANCA_RTP_119,
	AW8697_MISS_RTP_120 = 120,
	AW8697_SCENIC_RTP_121,
	AW8697_VOICE_ASSISTANT_RTP_122,
	AW8697_APPEAR_CHANNEL_RTP_123,
	AW8697_MISS_RTP_124,
	AW8697_MUSIC_CHANNEL_RTP_125,
	AW8697_PERCUSSION_CHANNEL_RTP_126,
	AW8697_RIPPLE_CHANNEL_RTP_127,
	AW8697_BRIGHT_CHANNEL_RTP_128,
	AW8697_FUN_CHANNEL_RTP_129,
	AW8697_GLITTERING_CHANNEL_RTP_130,
	AW8697_HARP_CHANNEL_RTP_131,
	AW8697_OVERTONE_CHANNEL_RTP_132,
	AW8697_SIMPLE_CHANNEL_RTP_133,
	AW8697_SEINE_PAST_RTP_134,
	AW8697_CLASSICAL_RING_RTP_135,
	AW8697_LONG_FOR_RTP_136,
	AW8697_ROMANTIC_RTP_137,
	AW8697_BLISS_RTP_138,
	AW8697_DREAM_RTP_139,
	AW8697_RELAX_RTP_140,
	AW8697_JOY_CHANNEL_RTP_141,
	AW8697_WEATHER_WIND_RTP_142,
	AW8697_WEATHER_CLOUDY_RTP_143,
	AW8697_WEATHER_THUNDERSTORM_RTP_144,
	AW8697_WEATHER_DEFAULT_RTP_145,
	AW8697_WEATHER_SUNNY_RTP_146,
	AW8697_WEATHER_SMOG_RTP_147,
	AW8697_WEATHER_SNOW_RTP_148,
	AW8697_WEATHER_RAIN_RTP_149,
	AW8697_MASTER_NOTIFICATION_RTP_150,
	AW8697_MASTER_ARTIST_RINGTONG_RTP_151,
	AW8697_MASTER_TEXT_RTP_152,
	AW8697_MASTER_ARTIST_ALARM_RTP_153,
	AW8697_OPLUS_ITS_OPLUS_RTP_161 = 161,
	AW8697_OPLUS_TUNE_RTP_162,
	AW8697_OPLUS_JINGLE_RTP_163,
	AW8697_OPLUS_GT_RTP_170 = 170,
	AW8697_THREEFINGERS_LONG_RTP_171,
	AW8697_THREEFINGERS_UP_RTP_172,
	AW8697_THREEFINGERS_SCREENSHOT_RTP_173,
	AW8697_UNFOLD_RTP_174,
	AW8697_CLOSE_RTP_175,
	AW8697_HALFLAP_RTP_176,
	AW8697_TWOFINGERS_DOWN_RTP_177,
	AW8697_TWOFINGERS_LONG_RTP_178,
	AW8697_COMPATIBLE_1_RTP_179,
	AW8697_COMPATIBLE_2_RTP_180,
	AW8697_STYLESWITCH_RTP_181,
	AW8697_WATERRIPPLE_RTP_182,
	AW8697_SUSPENDBUTTON_BOTTOMOUT_RTP_183,
	AW8697_SUSPENDBUTTON_MENU_RTP_184,
	AW8697_COMPLETE_RTP_185,
	AW8697_BULB_RTP_186,
	AW8697_ELASTICITY_RTP_187,
	ALARM_PACMAN_RTP_198 = 198,
	NOTIF_PACMAN_RTP_199,
	RINGTONE_PACMAN_RTP_200,
	RINGTONE_ALACRITY_RTP_201,
	RING_AMENITY_RTP_202,
	RINGTONE_BLUES_RTP_203,
	RING_BOUNCE_RTP_204,
	RING_CALM_RTP_205,
	RINGTONE_CLOUD_RTP_206,
	RINGTONE_CYCLOTRON_RTP_207,
	RINGTONE_DISTINCT_RTP_208,
	RINGTONE_DYNAMIC_RTP_209,
	RINGTONE_ECHO_RTP_210,
	RINGTONE_EXPECT_RTP_211,
	RINGTONE_FANATICAL_RTP_212,
	RINGTONE_FUNKY_RTP_213,
	RINGTONE_GUITAR_RTP_214,
	RINGTONE_HARPING_RTP_215,
	RINGTONE_HIGHLIGHT_RTP_216,
	RINGTONE_IDYL_RTP_217,
	RINGTONE_INNOCENCE_RTP_218,
	RINGTONE_JOURNEY_RTP_219,
	RINGTONE_JOYOUS_RTP_220,
	RING_LAZY_RTP_221,
	RINGTONE_MARIMBA_RTP_222,
	RING_MYSTICAL_RTP_223,
	RINGTONE_OLD_TELEPHONE_RTP_224,
	RINGTONE_ONEPLUS_TUNE_RTP_225,
	RINGTONE_RHYTHM_RTP_226,
	RINGTONE_OPTIMISTIC_RTP_227,
	RINGTONE_PIANO_RTP_228,
	RING_WHIRL_RTP_229,
	VZW_ALRWAVE_RTP_230,
	T_JINGLE_RTP_231,
	RINGTONE_EAGER_232,
	RINGTONE_EBULLITION_233,
	RINGTONE_FRIENDSHIP_234,
	RINGTONE_JAZZ_LIFE_RTP_235,
	RINGTONE_SUN_GLITTERING_RTP_236,
	NOTIF_ALLAY_RTP_237,
	NOTIF_ALLUSION_RTP_238,
	NOTIF_AMIABLE_RTP_239,
	NOTIF_BLARE_RTP_240,
	NOTIF_BLISSFUL_RTP_241,
	NOTIF_BRISK_RTP_242,
	NOTIF_BUBBLE_RTP_243,
	NOTIF_CHEERFUL_RTP_244,
	NOTIF_CLEAR_RTP_245,
	NOTIF_COMELY_RTP_246,
	NOTIF_COZY_RTP_247,
	NOTIF_DING_RTP_248,
	NOTIF_EFFERVESCE_RTP_249,
	NOTIF_ELEGANT_RTP_250,
	NOTIF_FREE_RTP_251,
	NOTIF_HALLUCINATION_RTP_252,
	NOTIF_INBOUND_RTP_253,
	NOTIF_LIGHT_RTP_254,
	NOTIF_MEET_RTP_255,
	NOTIF_NAIVETY_RTP_256,
	NOTIF_QUICKLY_RTP_257,
	NOTIF_RHYTHM_RTP_258,
	NOTIF_SURPRISE_RTP_259,
	NOTIF_TWINKLE_RTP_260,
	VERSION_ALERT_RTP_261,
	ALARM_ALARM_CLOCK_RTP_262,
	ALARM_BEEP_RTP_263,
	ALARM_BREEZE_RTP_264,
	ALARM_DAWN_RTP_265,
	ALARM_DREAM_RTP_266,
	ALARM_FLUTTERING_RTP_267,
	ALARM_FLYER_RTP_268,
	ALARM_INTERESTING_RTP_269,
	ALARM_LEISURELY_RTP_270,
	ALARM_MEMORY_RTP_271,
	ALARM_RELIEVED_RTP_272,
	ALARM_RIPPLE_RTP_273,
	ALARM_SLOWLY_RTP_274,
	ALARM_SPRING_RTP_275,
	ALARM_STARS_RTP_276,
	ALARM_SURGING_RTP_277,
	ALARM_TACTFULLY_RTP_278,
	ALARM_THE_WIND_RTP_279,
	ALARM_WALKING_IN_THE_RAIN_RTP_280,
	BOHAOPANANJIAN_281,
	BOHAOPANANNIU_282,
	BOHAOPANKUAIJIE_283,
	DIANHUAGUADUAN_284,
	DIANJINMOSHIQIEHUAN_285,
	HUADONGTIAOZHENDONG_286,
	LEISHEN_287,
	XUANZHONGYOUXI_288,
	YEJIANMOSHIDAZI_289,
	YOUXISHEZHIKUANG_290,
	ZHUANYEMOSHI_291,
	CLIMBER_RTP_292,
	CHASE_RTP_293,
	SHUNTAI24K_RTP_294,
	WENTAI24K_RTP_295,
	WAVE_20MS_RTP_296,
	WAVE_40MS_RTP_297,
	WAVE_60MS_RTP_298,
	WAVE_80MS_RTP_299,
	WAVE_100MS_RTP_300,
	WAVE_120MS_RTP_301,
	WAVE_140MS_RTP_302,
	WAVE_160MS_RTP_303,
	WAVE_180MS_RTP_304,
	WAVE_200MS_RTP_305,
	WAVE_220MS_RTP_306,
	WAVE_240MS_RTP_307,
	WAVE_260MS_RTP_308,
	WAVE_280MS_RTP_309,
	WAVE_300MS_RTP_310,
	WAVE_320MS_RTP_311,
	WAVE_340MS_RTP_312,
	WAVE_360MS_RTP_313,
	WAVE_380MS_RTP_314,
	WAVE_400MS_RTP_315,
	WAVE_420MS_RTP_316,
	WAVE_440MS_RTP_317,
	WAVE_460MS_RTP_318,
	WAVE_480MS_RTP_319,
	WAVE_500MS_RTP_320,
	AT500MS_RTP_321,
	WAVE_RESERVED_322,
	WAVE_RESERVED_323,
	WAVE_RESERVED_324,
	WAVE_RESERVED_325,
	WAVE_RESERVED_326,
	WAVE_RESERVED_327,
	WAVE_RESERVED_328,
	WAVE_RESERVED_329,
	WAVE_RESERVED_330,
	WAVE_RESERVED_331,
	WAVE_RESERVED_332,
	WAVE_RESERVED_333,
	WAVE_RESERVED_334,
	WAVE_RESERVED_335,
	WAVE_RESERVED_336,
	WAVE_RESERVED_337,
	WAVE_RESERVED_338,
	WAVE_RESERVED_339,
	WAVE_RESERVED_340,
	WAVE_RESERVED_341,
	WAVE_RESERVED_342,
	WAVE_RESERVED_343,
	WAVE_RESERVED_344,
	WAVE_RESERVED_345,
	WAVE_RESERVED_346,
	WAVE_RESERVED_347,
	WAVE_RESERVED_348,
	WAVE_RESERVED_349,
	WAVE_RESERVED_350,
	WAVE_RESERVED_351,
	WAVE_RESERVED_352,
	WAVE_RESERVED_353,
	WAVE_RESERVED_354,
	WAVE_RESERVED_355,
	WAVE_RESERVED_356,
	WAVE_RESERVED_357,
	WAVE_RESERVED_358,
	WAVE_RESERVED_359,
	WAVE_RESERVED_360,
	WAVE_RESERVED_361,
	WAVE_RESERVED_362,
	AW8697_PROGRAMS_CLEAN_RTP_363,
	WAVE_RESERVED_364,
	aw8697_THREESTAGEKEY_RTP_365,
	WAVE_RESERVED_366,
	WAVE_RESERVED_367,
	WAVE_RESERVED_368,
	WAVE_RESERVED_369,
	WAVE_RESERVED_370,
	AW8697_NIGHTSKY_RTP_371,
	AW8697_THESTARS_RTP_372,
	AW8697_THESUNRISE_RTP_373,
	AW8697_THESUNSET_RTP_374,
	AW8697_MEDITATE_RTP_375,
	AW8697_DISTANT_RTP_376,
	AW8697_POND_RTP_377,
	AW8697_MOONLOTUS_RTP_378,
	AW8697_RIPPLINGWATER_RTP_379,
	AW8697_SHIMMER_RTP_380,
	AW8697_BATHEEARTH_RTP_381,
	AW8697_JUNGLEMORNING_RTP_382,
	AW8697_SILVER_RTP_383,
	AW8697_ELEGANTQUIET_RTP_384,
	AW8697_SUMMERBEACH_RTP_385,
	AW8697_SUMMERNIGHT_RTP_386,
	AW8697_ICESNOW_RTP_387,
	AW8697_WINTERSNOW_RTP_388,
	AW8697_RAINFOREST_RTP_389,
	AW8697_RAINEVERYTHING_RTP_390,
	AW8697_STARACROSS_RTP_391,
	AW8697_FULLMOON_RTP_392,
	AW8697_CLOUDS_RTP_393,
	AW8697_WONDERLAND_RTP_394,
	AW8697_STILL_RTP_395,
	AW8697_HAUNTING_RTP_396,
	AW8697_DRAGONFLY_RTP_397,
	AW8697_DROPWATER_RTP_398,
	AW8697_FLUCTUATION_RTP_399,
	AW8697_BLOW_RTP_400,
	AW8697_LEAVESLIGHT_RTP_401,
	AW8697_WARMSUN_RTP_402,
	AW8697_SNOWFLAKE_RTP_403,
	AW8697_CRYSTALCLEAR_RTP_404,
	AW8697_INSECTS_RTP_405,
	AW8697_DEW_RTP_406,
	AW8697_SHINE_RTP_407,
	AW8697_FROST_RTP_408,
	AW8697_RAINSPLASH_RTP_409,
	AW8697_RAINDROP_RTP_410,
	NUM_WAVEFORMS,
};
static const char* rtp_wave_map[] = {
	[AW8697_RTP] = "aw8697_rtp",
	[AW8697_HEARTY_CHANNEL_RTP_1] = "aw8697_Hearty_channel_RTP_1",
	[AW8697_INSTANT_CHANNEL_RTP_2] = "aw8697_Instant_channel_RTP_2",
	[AW8697_MUSIC_CHANNEL_RTP_3] = "aw8697_Music_channel_RTP_3",
	[AW8697_PERCUSSION_CHANNEL_RTP_4] = "aw8697_Percussion_channel_RTP_4",
	[AW8697_RIPPLE_CHANNEL_RTP_5] = "aw8697_Ripple_channel_RTP_5",
	[AW8697_BRIGHT_CHANNEL_RTP_6] = "aw8697_Bright_channel_RTP_6",
	[AW8697_FUN_CHANNEL_RTP_7] = "aw8697_Fun_channel_RTP_7",
	[AW8697_GLITTERING_CHANNEL_RTP_8] = "aw8697_Glittering_channel_RTP_8",
	[AW8697_GRANULES_CHANNEL_RTP_9] = "aw8697_Granules_channel_RTP_9",
	[AW8697_HARP_CHANNEL_RTP_10] = "aw8697_Harp_channel_RTP_10",
	[AW8697_IMPRESSION_CHANNEL_RTP_11] = "aw8697_Impression_channel_RTP_11",
	[AW8697_INGENIOUS_CHANNEL_RTP_12] = "aw8697_Ingenious_channel_RTP_12",
	[AW8697_JOY_CHANNEL_RTP_13] = "aw8697_Joy_channel_RTP_13",
	[AW8697_OVERTONE_CHANNEL_RTP_14] = "aw8697_Overtone_channel_RTP_14",
	[AW8697_RECEIVE_CHANNEL_RTP_15] = "aw8697_Receive_channel_RTP_15",
	[AW8697_SPLASH_CHANNEL_RTP_16] = "aw8697_Splash_channel_RTP_16",
	[AW8697_ABOUT_SCHOOL_RTP_17] = "aw8697_About_School_RTP_17",
	[AW8697_BLISS_RTP_18] = "aw8697_Bliss_RTP_18",
	[AW8697_CHILDHOOD_RTP_19] = "aw8697_Childhood_RTP_19",
	[AW8697_COMMUTING_RTP_20] = "aw8697_Commuting_RTP_20",
	[AW8697_DREAM_RTP_21] = "aw8697_Dream_RTP_21",
	[AW8697_FIREFLY_RTP_22] = "aw8697_Firefly_RTP_22",
	[AW8697_GATHERING_RTP_23] = "aw8697_Gathering_RTP_23",
	[AW8697_GAZE_RTP_24] = "aw8697_Gaze_RTP_24",
	[AW8697_LAKESIDE_RTP_25] = "aw8697_Lakeside_RTP_25",
	[AW8697_LIFESTYLE_RTP_26] = "aw8697_Lifestyle_RTP_26",
	[AW8697_MEMORIES_RTP_27] = "aw8697_Memories_RTP_27",
	[AW8697_MESSY_RTP_28] = "aw8697_Messy_RTP_28",
	[AW8697_NIGHT_RTP_29] = "aw8697_Night_RTP_29",
	[AW8697_PASSIONATE_DANCE_RTP_30] = "aw8697_Passionate_Dance_RTP_30",
	[AW8697_PLAYGROUND_RTP_31] = "aw8697_Playground_RTP_31",
	[AW8697_RELAX_RTP_32] = "aw8697_Relax_RTP_32",
	[AW8697_REMINISCENCE_RTP_33] = "aw8697_Reminiscence_RTP_33",
	[AW8697_SILENCE_FROM_AFAR_RTP_34] = "aw8697_Silence_From_Afar_RTP_34",
	[AW8697_SILENCE_RTP_35] = "aw8697_Silence_RTP_35",
	[AW8697_STARS_RTP_36] = "aw8697_Stars_RTP_36",
	[AW8697_SUMMER_RTP_37] = "aw8697_Summer_RTP_37",
	[AW8697_TOYS_RTP_38] = "aw8697_Toys_RTP_38",
	[AW8697_TRAVEL_RTP_39] = "aw8697_Travel_RTP_39",
	[AW8697_VISION_RTP_40] = "aw8697_Vision_RTP_40",
	[AW8697_WALTZ_CHANNEL_RTP_41] = "aw8697_waltz_channel_RTP_41",
	[AW8697_CUT_CHANNEL_RTP_42] = "aw8697_cut_channel_RTP_42",
	[AW8697_CLOCK_CHANNEL_RTP_43] = "aw8697_clock_channel_RTP_43",
	[AW8697_LONG_SOUND_CHANNEL_RTP_44] = "aw8697_long_sound_channel_RTP_44",
	[AW8697_SHORT_CHANNEL_RTP_45] = "aw8697_short_channel_RTP_45",
	[AW8697_TWO_ERROR_REMAIND_RTP_46] = "aw8697_two_error_remaind_RTP_46",
	[AW8697_KILL_PROGRAM_RTP_47] = "aw8697_kill_program_RTP_47",
	[AW8697_SIMPLE_CHANNEL_RTP_48] = "aw8697_Simple_channel_RTP_48",
	[AW8697_PURE_RTP_49] = "aw8697_Pure_RTP_49",
	[AW8697_RESERVED_SOUND_CHANNEL_RTP_50] = "aw8697_reserved_sound_channel_RTP_50",
	[AW8697_HIGH_TEMP_HIGH_HUMIDITY_CHANNEL_RTP_51] = "aw8697_high_temp_high_humidity_channel_RTP_51",
	[AW8697_OLD_STEADY_TEST_RTP_52] = "aw8697_old_steady_test_RTP_52",
	[AW8697_LISTEN_POP_53] = "aw8697_listen_pop_53",
	[AW8697_DESK_7_RTP_54] = "aw8697_desk_7_RTP_54",
	[AW8697_NFC_10_RTP_55] = "aw8697_nfc_10_RTP_55",
	[AW8697_VIBRATOR_REMAIN_12_RTP_56] = "aw8697_vibrator_remain_12_RTP_56",
	[AW8697_NOTICE_13_RTP_57] = "aw8697_notice_13_RTP_57",
	[AW8697_THIRD_RING_14_RTP_58] = "aw8697_third_ring_14_RTP_58",
	[AW8697_HONOR_FISRT_KILL_RTP_60] = "aw8697_honor_fisrt_kill_RTP_60",
	[AW8697_HONOR_TWO_KILL_RTP_61] = "aw8697_honor_two_kill_RTP_61",
	[AW8697_HONOR_THREE_KILL_RTP_62] = "aw8697_honor_three_kill_RTP_62",
	[AW8697_HONOR_FOUR_KILL_RTP_63] = "aw8697_honor_four_kill_RTP_63",
	[AW8697_HONOR_FIVE_KILL_RTP_64] = "aw8697_honor_five_kill_RTP_64",
	[AW8697_HONOR_THREE_CONTINU_KILL_RTP_65] = "aw8697_honor_three_continu_kill_RTP_65",
	[AW8697_HONOR_FOUR_CONTINU_KILL_RTP_66] = "aw8697_honor_four_continu_kill_RTP_66",
	[AW8697_HONOR_UNSTOPPABLE_RTP_67] = "aw8697_honor_unstoppable_RTP_67",
	[AW8697_HONOR_THOUSANDS_KILL_RTP_68] = "aw8697_honor_thousands_kill_RTP_68",
	[AW8697_HONOR_LENGENDARY_RTP_69] = "aw8697_honor_lengendary_RTP_69",
	[AW8697_FRESHMORNING_RTP_70] = "aw8697_Freshmorning_RTP_70",
	[AW8697_PEACEFUL_RTP_71] = "aw8697_Peaceful_RTP_71",
	[AW8697_CICADA_RTP_72] = "aw8697_Cicada_RTP_72",
	[AW8697_ELECTRONICA_RTP_73] = "aw8697_Electronica_RTP_73",
	[AW8697_HOLIDAY_RTP_74] = "aw8697_Holiday_RTP_74",
	[AW8697_FUNK_RTP_75] = "aw8697_Funk_RTP_75",
	[AW8697_HOUSE_RTP_76] = "aw8697_House_RTP_76",
	[AW8697_TEMPLE_RTP_77] = "aw8697_Temple_RTP_77",
	[AW8697_DREAMYJAZZ_RTP_78] = "aw8697_Dreamyjazz_RTP_78",
	[AW8697_MODERN_RTP_79] = "aw8697_Modern_RTP_79",
	[AW8697_ROUND_RTP_80] = "aw8697_Round_RTP_80",
	[AW8697_RISING_RTP_81] = "aw8697_Rising_RTP_81",
	[AW8697_WOOD_RTP_82] = "aw8697_Wood_RTP_82",
	[AW8697_HEYS_RTP_83] = "aw8697_Heys_RTP_83",
	[AW8697_MBIRA_RTP_84] = "aw8697_Mbira_RTP_84",
	[AW8697_NEWS_RTP_85] = "aw8697_News_RTP_85",
	[AW8697_PEAK_RTP_86] = "aw8697_Peak_RTP_86",
	[AW8697_CRISP_RTP_87] = "aw8697_Crisp_RTP_87",
	[AW8697_SINGINGBOWLS_RTP_88] = "aw8697_Singingbowls_RTP_88",
	[AW8697_BOUNCE_RTP_89] = "aw8697_Bounce_RTP_89",
	[AW8697_ALCLOUDSCAPE_94] = "aw8697_ALCloudscape_94",
	[AW8697_ALGOODENERGY_95] = "aw8697_ALGoodenergy_95",
	[AW8697_NTBLINK_96] = "aw8697_NTblink_96",
	[AW8697_NTWHOOP_97] = "aw8697_NTwhoop_97",
	[AW8697_NEWFEELING_98] = "aw8697_Newfeeling_98",
	[AW8697_NATURE_99] = "aw8697_nature_99",
	[AW8697_SOLDIER_FIRST_KILL_RTP_100] = "aw8697_soldier_first_kill_RTP_100",
	[AW8697_SOLDIER_SECOND_KILL_RTP_101] = "aw8697_soldier_second_kill_RTP_101",
	[AW8697_SOLDIER_THIRD_KILL_RTP_102] = "aw8697_soldier_third_kill_RTP_102",
	[AW8697_SOLDIER_FOURTH_KILL_RTP_103] = "aw8697_soldier_fourth_kill_RTP_103",
	[AW8697_SOLDIER_FIFTH_KILL_RTP_104] = "aw8697_soldier_fifth_kill_RTP_104",
	[AW8697_STEPABLE_REGULATE_RTP_105] = "aw8697_stepable_regulate_RTP_105",
	[AW8697_VOICE_LEVEL_BAR_EDGE_RTP_106] = "aw8697_voice_level_bar_edge_RTP_106",
	[AW8697_STRENGTH_LEVEL_BAR_EDGE_RTP_107] = "aw8697_strength_level_bar_edge_RTP_107",
	[AW8697_CHARGING_SIMULATION_RTP_108] = "aw8697_charging_simulation_RTP_108",
	[AW8697_FINGERPRINT_SUCCESS_RTP_109] = "aw8697_fingerprint_success_RTP_109",
	[AW8697_FINGERPRINT_EFFECT1_RTP_110] = "aw8697_fingerprint_effect1_RTP_110",
	[AW8697_FINGERPRINT_EFFECT2_RTP_111] = "aw8697_fingerprint_effect2_RTP_111",
	[AW8697_FINGERPRINT_EFFECT3_RTP_112] = "aw8697_fingerprint_effect3_RTP_112",
	[AW8697_FINGERPRINT_EFFECT4_RTP_113] = "aw8697_fingerprint_effect4_RTP_113",
	[AW8697_FINGERPRINT_EFFECT5_RTP_114] = "aw8697_fingerprint_effect5_RTP_114",
	[AW8697_FINGERPRINT_EFFECT6_RTP_115] = "aw8697_fingerprint_effect6_RTP_115",
	[AW8697_FINGERPRINT_EFFECT7_RTP_116] = "aw8697_fingerprint_effect7_RTP_116",
	[AW8697_FINGERPRINT_EFFECT8_RTP_117] = "aw8697_fingerprint_effect8_RTP_117",
	[AW8697_BREATH_SIMULATION_RTP_118] = "aw8697_breath_simulation_RTP_118",
	[AW8697_TRLCEL_TORREBLANCA_RTP_119] = "aw8697_Telcel_Torreblanca_RTP_119",
	[AW8697_MISS_RTP_120] = "aw8697_Miss_RTP_120",
	[AW8697_SCENIC_RTP_121] = "aw8697_Scenic_RTP_121",
	[AW8697_VOICE_ASSISTANT_RTP_122] = "aw8697_voice_assistant_RTP_122",
	[AW8697_APPEAR_CHANNEL_RTP_123] = "aw8697_Appear_channel_RTP_123",
	[AW8697_MISS_RTP_124] = "aw8697_Miss_RTP_124",
	[AW8697_MUSIC_CHANNEL_RTP_125] = "aw8697_Music_channel_RTP_125",
	[AW8697_PERCUSSION_CHANNEL_RTP_126] = "aw8697_Percussion_channel_RTP_126",
	[AW8697_RIPPLE_CHANNEL_RTP_127] = "aw8697_Ripple_channel_RTP_127",
	[AW8697_BRIGHT_CHANNEL_RTP_128] = "aw8697_Bright_channel_RTP_128",
	[AW8697_FUN_CHANNEL_RTP_129] = "aw8697_Fun_channel_RTP_129",
	[AW8697_GLITTERING_CHANNEL_RTP_130] = "aw8697_Glittering_channel_RTP_130",
	[AW8697_HARP_CHANNEL_RTP_131] = "aw8697_Harp_channel_RTP_131",
	[AW8697_OVERTONE_CHANNEL_RTP_132] = "aw8697_Overtone_channel_RTP_132",
	[AW8697_SIMPLE_CHANNEL_RTP_133] = "aw8697_Simple_channel_RTP_133",
	[AW8697_SEINE_PAST_RTP_134] = "aw8697_Seine_past_RTP_134",
	[AW8697_CLASSICAL_RING_RTP_135] = "aw8697_Classical_ring_RTP_135",
	[AW8697_LONG_FOR_RTP_136] = "aw8697_Long_for_RTP_136",
	[AW8697_ROMANTIC_RTP_137] = "aw8697_Romantic_RTP_137",
	[AW8697_BLISS_RTP_138] = "aw8697_Bliss_RTP_138",
	[AW8697_DREAM_RTP_139] = "aw8697_Dream_RTP_139",
	[AW8697_RELAX_RTP_140] = "aw8697_Relax_RTP_140",
	[AW8697_JOY_CHANNEL_RTP_141] = "aw8697_Joy_channel_RTP_141",
	[AW8697_WEATHER_WIND_RTP_142] = "aw8697_weather_wind_RTP_142",
	[AW8697_WEATHER_CLOUDY_RTP_143] = "aw8697_weather_cloudy_RTP_143",
	[AW8697_WEATHER_THUNDERSTORM_RTP_144] = "aw8697_weather_thunderstorm_RTP_144",
	[AW8697_WEATHER_DEFAULT_RTP_145] = "aw8697_weather_default_RTP_145",
	[AW8697_WEATHER_SUNNY_RTP_146] = "aw8697_weather_sunny_RTP_146",
	[AW8697_WEATHER_SMOG_RTP_147] = "aw8697_weather_smog_RTP_147",
	[AW8697_WEATHER_SNOW_RTP_148] = "aw8697_weather_snow_RTP_148",
	[AW8697_WEATHER_RAIN_RTP_149] = "aw8697_weather_rain_RTP_149",
	[AW8697_MASTER_NOTIFICATION_RTP_150] = "aw8697_Master_Notification_RTP_150",
	[AW8697_MASTER_ARTIST_RINGTONG_RTP_151] = "aw8697_Master_Artist_Ringtong_RTP_151",
	[AW8697_MASTER_TEXT_RTP_152] = "aw8697_Master_Text_RTP_152",
	[AW8697_MASTER_ARTIST_ALARM_RTP_153] = "aw8697_Master_Artist_Alarm_RTP_153",
	[AW8697_OPLUS_ITS_OPLUS_RTP_161] = "aw8697_oplus_its_oplus_RTP_161",
	[AW8697_OPLUS_TUNE_RTP_162] = "aw8697_oplus_tune_RTP_162",
	[AW8697_OPLUS_JINGLE_RTP_163] = "aw8697_oplus_jingle_RTP_163",
	[AW8697_OPLUS_GT_RTP_170] = "aw8697_oplus_gt_RTP_170",
	[AW8697_THREEFINGERS_LONG_RTP_171] = "aw8697_Threefingers_Long_RTP_171",
	[AW8697_THREEFINGERS_UP_RTP_172] = "aw8697_Threefingers_Up_RTP_172",
	[AW8697_THREEFINGERS_SCREENSHOT_RTP_173] = "aw8697_Threefingers_Screenshot_RTP_173",
	[AW8697_UNFOLD_RTP_174] = "aw8697_Unfold_RTP_174",
	[AW8697_CLOSE_RTP_175] = "aw8697_Close_RTP_175",
	[AW8697_HALFLAP_RTP_176] = "aw8697_HalfLap_RTP_176",
	[AW8697_TWOFINGERS_DOWN_RTP_177] = "aw8697_Twofingers_Down_RTP_177",
	[AW8697_TWOFINGERS_LONG_RTP_178] = "aw8697_Twofingers_Long_RTP_178",
	[AW8697_COMPATIBLE_1_RTP_179] = "aw8697_Compatible_1_RTP_179",
	[AW8697_COMPATIBLE_2_RTP_180] = "aw8697_Compatible_2_RTP_180",
	[AW8697_STYLESWITCH_RTP_181] = "aw8697_Styleswitch_RTP_181",
	[AW8697_WATERRIPPLE_RTP_182] = "aw8697_Waterripple_RTP_182",
	[AW8697_SUSPENDBUTTON_BOTTOMOUT_RTP_183] = "aw8697_Suspendbutton_Bottomout_RTP_183",
	[AW8697_SUSPENDBUTTON_MENU_RTP_184] = "aw8697_Suspendbutton_Menu_RTP_184",
	[AW8697_COMPLETE_RTP_185] = "aw8697_Complete_RTP_185",
	[AW8697_BULB_RTP_186] = "aw8697_Bulb_RTP_186",
	[AW8697_ELASTICITY_RTP_187] = "aw8697_Elasticity_RTP_187",
	[ALARM_PACMAN_RTP_198] = "alarm_Pacman_RTP_198",
	[NOTIF_PACMAN_RTP_199] = "notif_Pacman_RTP_199",
	[RINGTONE_PACMAN_RTP_200] = "ringtone_Pacman_RTP_200",
	[RINGTONE_ALACRITY_RTP_201] = "ringtone_Alacrity_RTP_201",
	[RING_AMENITY_RTP_202] = "ring_Amenity_RTP_202",
	[RINGTONE_BLUES_RTP_203] = "ringtone_Blues_RTP_203",
	[RING_BOUNCE_RTP_204] = "ring_Bounce_RTP_204",
	[RING_CALM_RTP_205] = "ring_Calm_RTP_205",
	[RINGTONE_CLOUD_RTP_206] = "ringtone_Cloud_RTP_206",
	[RINGTONE_CYCLOTRON_RTP_207] = "ringtone_Cyclotron_RTP_207",
	[RINGTONE_DISTINCT_RTP_208] = "ringtone_Distinct_RTP_208",
	[RINGTONE_DYNAMIC_RTP_209] = "ringtone_Dynamic_RTP_209",
	[RINGTONE_ECHO_RTP_210] = "ringtone_Echo_RTP_210",
	[RINGTONE_EXPECT_RTP_211] = "ringtone_Expect_RTP_211",
	[RINGTONE_FANATICAL_RTP_212] = "ringtone_Fanatical_RTP_212",
	[RINGTONE_FUNKY_RTP_213] = "ringtone_Funky_RTP_213",
	[RINGTONE_GUITAR_RTP_214] = "ringtone_Guitar_RTP_214",
	[RINGTONE_HARPING_RTP_215] = "ringtone_Harping_RTP_215",
	[RINGTONE_HIGHLIGHT_RTP_216] = "ringtone_Highlight_RTP_216",
	[RINGTONE_IDYL_RTP_217] = "ringtone_Idyl_RTP_217",
	[RINGTONE_INNOCENCE_RTP_218] = "ringtone_Innocence_RTP_218",
	[RINGTONE_JOURNEY_RTP_219] = "ringtone_Journey_RTP_219",
	[RINGTONE_JOYOUS_RTP_220] = "ringtone_Joyous_RTP_220",
	[RING_LAZY_RTP_221] = "ring_Lazy_RTP_221",
	[RINGTONE_MARIMBA_RTP_222] = "ringtone_Marimba_RTP_222",
	[RING_MYSTICAL_RTP_223] = "ring_Mystical_RTP_223",
	[RINGTONE_OLD_TELEPHONE_RTP_224] = "ringtone_Old_telephone_RTP_224",
	[RINGTONE_ONEPLUS_TUNE_RTP_225] = "ringtone_Oneplus_tune_RTP_225",
	[RINGTONE_RHYTHM_RTP_226] = "ringtone_Rhythm_RTP_226",
	[RINGTONE_OPTIMISTIC_RTP_227] = "ringtone_Optimistic_RTP_227",
	[RINGTONE_PIANO_RTP_228] = "ringtone_Piano_RTP_228",
	[RING_WHIRL_RTP_229] = "ring_Whirl_RTP_229",
	[VZW_ALRWAVE_RTP_230] = "VZW_Alrwave_RTP_230",
	[T_JINGLE_RTP_231] = "t-jingle_RTP_231",
	[RINGTONE_EAGER_232] = "ringtone_Eager_232",
	[RINGTONE_EBULLITION_233] = "ringtone_Ebullition_233",
	[RINGTONE_FRIENDSHIP_234] = "ringtone_Friendship_234",
	[RINGTONE_JAZZ_LIFE_RTP_235] = "ringtone_Jazz_life_RTP_235",
	[RINGTONE_SUN_GLITTERING_RTP_236] = "ringtone_Sun_glittering_RTP_236",
	[NOTIF_ALLAY_RTP_237] = "notif_Allay_RTP_237",
	[NOTIF_ALLUSION_RTP_238] = "notif_Allusion_RTP_238",
	[NOTIF_AMIABLE_RTP_239] = "notif_Amiable_RTP_239",
	[NOTIF_BLARE_RTP_240] = "notif_Blare_RTP_240",
	[NOTIF_BLISSFUL_RTP_241] = "notif_Blissful_RTP_241",
	[NOTIF_BRISK_RTP_242] = "notif_Brisk_RTP_242",
	[NOTIF_BUBBLE_RTP_243] = "notif_Bubble_RTP_243",
	[NOTIF_CHEERFUL_RTP_244] = "notif_Cheerful_RTP_244",
	[NOTIF_CLEAR_RTP_245] = "notif_Clear_RTP_245",
	[NOTIF_COMELY_RTP_246] = "notif_Comely_RTP_246",
	[NOTIF_COZY_RTP_247] = "notif_Cozy_RTP_247",
	[NOTIF_DING_RTP_248] = "notif_Ding_RTP_248",
	[NOTIF_EFFERVESCE_RTP_249] = "notif_Effervesce_RTP_249",
	[NOTIF_ELEGANT_RTP_250] = "notif_Elegant_RTP_250",
	[NOTIF_FREE_RTP_251] = "notif_Free_RTP_251",
	[NOTIF_HALLUCINATION_RTP_252] = "notif_Hallucination_RTP_252",
	[NOTIF_INBOUND_RTP_253] = "notif_Inbound_RTP_253",
	[NOTIF_LIGHT_RTP_254] = "notif_Light_RTP_254",
	[NOTIF_MEET_RTP_255] = "notif_Meet_RTP_255",
	[NOTIF_NAIVETY_RTP_256] = "notif_Naivety_RTP_256",
	[NOTIF_QUICKLY_RTP_257] = "notif_Quickly_RTP_257",
	[NOTIF_RHYTHM_RTP_258] = "notif_Rhythm_RTP_258",
	[NOTIF_SURPRISE_RTP_259] = "notif_Surprise_RTP_259",
	[NOTIF_TWINKLE_RTP_260] = "notif_Twinkle_RTP_260",
	[VERSION_ALERT_RTP_261] = "Version_Alert_RTP_261",
	[ALARM_ALARM_CLOCK_RTP_262] = "alarm_Alarm_clock_RTP_262",
	[ALARM_BEEP_RTP_263] = "alarm_Beep_RTP_263",
	[ALARM_BREEZE_RTP_264] = "alarm_Breeze_RTP_264",
	[ALARM_DAWN_RTP_265] = "alarm_Dawn_RTP_265",
	[ALARM_DREAM_RTP_266] = "alarm_Dream_RTP_266",
	[ALARM_FLUTTERING_RTP_267] = "alarm_Fluttering_RTP_267",
	[ALARM_FLYER_RTP_268] = "alarm_Flyer_RTP_268",
	[ALARM_INTERESTING_RTP_269] = "alarm_Interesting_RTP_269",
	[ALARM_LEISURELY_RTP_270] = "alarm_Leisurely_RTP_270",
	[ALARM_MEMORY_RTP_271] = "alarm_Memory_RTP_271",
	[ALARM_RELIEVED_RTP_272] = "alarm_Relieved_RTP_272",
	[ALARM_RIPPLE_RTP_273] = "alarm_Ripple_RTP_273",
	[ALARM_SLOWLY_RTP_274] = "alarm_Slowly_RTP_274",
	[ALARM_SPRING_RTP_275] = "alarm_spring_RTP_275",
	[ALARM_STARS_RTP_276] = "alarm_Stars_RTP_276",
	[ALARM_SURGING_RTP_277] = "alarm_Surging_RTP_277",
	[ALARM_TACTFULLY_RTP_278] = "alarm_tactfully_RTP_278",
	[ALARM_THE_WIND_RTP_279] = "alarm_The_wind_RTP_279",
	[ALARM_WALKING_IN_THE_RAIN_RTP_280] = "alarm_Walking_in_the_rain_RTP_280",
	[BOHAOPANANJIAN_281] = "BoHaoPanAnJian_281",
	[BOHAOPANANNIU_282] = "BoHaoPanAnNiu_282",
	[BOHAOPANKUAIJIE_283] = "BoHaoPanKuaiJie_283",
	[DIANHUAGUADUAN_284] = "DianHuaGuaDuan_284",
	[DIANJINMOSHIQIEHUAN_285] = "DianJinMoShiQieHuan_285",
	[HUADONGTIAOZHENDONG_286] = "HuaDongTiaoZhenDong_286",
	[LEISHEN_287] = "LeiShen_287",
	[XUANZHONGYOUXI_288] = "XuanZhongYouXi_288",
	[YEJIANMOSHIDAZI_289] = "YeJianMoShiDaZi_289",
	[YOUXISHEZHIKUANG_290] = "YouXiSheZhiKuang_290",
	[ZHUANYEMOSHI_291] = "ZhuanYeMoShi_291",
	[CLIMBER_RTP_292] = "Climber_RTP_292",
	[CHASE_RTP_293] = "Chase_RTP_293",
	[SHUNTAI24K_RTP_294] = "shuntai24k_rtp_294",
	[WENTAI24K_RTP_295] = "wentai24k_rtp_295",
	[WAVE_20MS_RTP_296] = "20ms_RTP_296",
	[WAVE_40MS_RTP_297] = "40ms_RTP_297",
	[WAVE_60MS_RTP_298] = "60ms_RTP_298",
	[WAVE_80MS_RTP_299] = "80ms_RTP_299",
	[WAVE_100MS_RTP_300] = "100ms_RTP_300",
	[WAVE_120MS_RTP_301] = "120ms_RTP_301",
	[WAVE_140MS_RTP_302] = "140ms_RTP_302",
	[WAVE_160MS_RTP_303] = "160ms_RTP_303",
	[WAVE_180MS_RTP_304] = "180ms_RTP_304",
	[WAVE_200MS_RTP_305] = "200ms_RTP_305",
	[WAVE_220MS_RTP_306] = "220ms_RTP_306",
	[WAVE_240MS_RTP_307] = "240ms_RTP_307",
	[WAVE_260MS_RTP_308] = "260ms_RTP_308",
	[WAVE_280MS_RTP_309] = "280ms_RTP_309",
	[WAVE_300MS_RTP_310] = "300ms_RTP_310",
	[WAVE_320MS_RTP_311] = "320ms_RTP_311",
	[WAVE_340MS_RTP_312] = "340ms_RTP_312",
	[WAVE_360MS_RTP_313] = "360ms_RTP_313",
	[WAVE_380MS_RTP_314] = "380ms_RTP_314",
	[WAVE_400MS_RTP_315] = "400ms_RTP_315",
	[WAVE_420MS_RTP_316] = "420ms_RTP_316",
	[WAVE_440MS_RTP_317] = "440ms_RTP_317",
	[WAVE_460MS_RTP_318] = "460ms_RTP_318",
	[WAVE_480MS_RTP_319] = "480ms_RTP_319",
	[WAVE_500MS_RTP_320] = "500ms_RTP_320",
	[AT500MS_RTP_321] = "AT500ms_RTP_321",
	[WAVE_RESERVED_322] = "RESERVED_322",
	[WAVE_RESERVED_323] = "RESERVED_323",
	[WAVE_RESERVED_324] = "RESERVED_324",
	[WAVE_RESERVED_325] = "RESERVED_325",
	[WAVE_RESERVED_326] = "RESERVED_326",
	[WAVE_RESERVED_327] = "RESERVED_327",
	[WAVE_RESERVED_328] = "RESERVED_328",
	[WAVE_RESERVED_329] = "RESERVED_329",
	[WAVE_RESERVED_330] = "RESERVED_330",
	[WAVE_RESERVED_331] = "RESERVED_331",
	[WAVE_RESERVED_332] = "RESERVED_332",
	[WAVE_RESERVED_333] = "RESERVED_333",
	[WAVE_RESERVED_334] = "RESERVED_334",
	[WAVE_RESERVED_335] = "RESERVED_335",
	[WAVE_RESERVED_336] = "RESERVED_336",
	[WAVE_RESERVED_337] = "RESERVED_337",
	[WAVE_RESERVED_338] = "RESERVED_338",
	[WAVE_RESERVED_339] = "RESERVED_339",
	[WAVE_RESERVED_340] = "RESERVED_340",
	[WAVE_RESERVED_341] = "RESERVED_341",
	[WAVE_RESERVED_342] = "RESERVED_342",
	[WAVE_RESERVED_343] = "RESERVED_343",
	[WAVE_RESERVED_344] = "RESERVED_344",
	[WAVE_RESERVED_345] = "RESERVED_345",
	[WAVE_RESERVED_346] = "RESERVED_346",
	[WAVE_RESERVED_347] = "RESERVED_347",
	[WAVE_RESERVED_348] = "RESERVED_348",
	[WAVE_RESERVED_349] = "RESERVED_349",
	[WAVE_RESERVED_350] = "RESERVED_350",
	[WAVE_RESERVED_351] = "RESERVED_351",
	[WAVE_RESERVED_352] = "RESERVED_352",
	[WAVE_RESERVED_353] = "RESERVED_353",
	[WAVE_RESERVED_354] = "RESERVED_354",
	[WAVE_RESERVED_355] = "RESERVED_355",
	[WAVE_RESERVED_356] = "RESERVED_356",
	[WAVE_RESERVED_357] = "RESERVED_357",
	[WAVE_RESERVED_358] = "RESERVED_358",
	[WAVE_RESERVED_359] = "RESERVED_359",
	[WAVE_RESERVED_360] = "RESERVED_360",
	[WAVE_RESERVED_361] = "RESERVED_361",
	[WAVE_RESERVED_362] = "RESERVED_362",
	[AW8697_PROGRAMS_CLEAN_RTP_363] = "aw8697_programs_clean_RTP_363",
	[WAVE_RESERVED_364] = "RESERVED_364",
	[aw8697_THREESTAGEKEY_RTP_365] = "aw8697_Threestagekey_RTP_365",
	[WAVE_RESERVED_366] = "RESERVED_366",
	[WAVE_RESERVED_367] = "RESERVED_367",
	[WAVE_RESERVED_368] = "RESERVED_368",
	[WAVE_RESERVED_369] = "RESERVED_369",
	[WAVE_RESERVED_370] = "RESERVED_370",
	[AW8697_NIGHTSKY_RTP_371] = "aw8697_Nightsky_RTP_371",
	[AW8697_THESTARS_RTP_372] = "aw8697_TheStars_RTP_372",
	[AW8697_THESUNRISE_RTP_373] = "aw8697_TheSunrise_RTP_373",
	[AW8697_THESUNSET_RTP_374] = "aw8697_TheSunset_RTP_374",
	[AW8697_MEDITATE_RTP_375] = "aw8697_Meditate_RTP_375",
	[AW8697_DISTANT_RTP_376] = "aw8697_Distant_RTP_376",
	[AW8697_POND_RTP_377] = "aw8697_Pond_RTP_377",
	[AW8697_MOONLOTUS_RTP_378] = "aw8697_Moonlotus_RTP_378",
	[AW8697_RIPPLINGWATER_RTP_379] = "aw8697_Ripplingwater_RTP_379",
	[AW8697_SHIMMER_RTP_380] = "aw8697_Shimmer_RTP_380",
	[AW8697_BATHEEARTH_RTP_381] = "aw8697_Batheearth_RTP_381",
	[AW8697_JUNGLEMORNING_RTP_382] = "aw8697_Junglemorning_RTP_382",
	[AW8697_SILVER_RTP_383] = "aw8697_Silver_RTP_383",
	[AW8697_ELEGANTQUIET_RTP_384] = "aw8697_Elegantquiet_RTP_384",
	[AW8697_SUMMERBEACH_RTP_385] = "aw8697_Summerbeach_RTP_385",
	[AW8697_SUMMERNIGHT_RTP_386] = "aw8697_Summernight_RTP_386",
	[AW8697_ICESNOW_RTP_387] = "aw8697_Icesnow_RTP_387",
	[AW8697_WINTERSNOW_RTP_388] = "aw8697_Wintersnow_RTP_388",
	[AW8697_RAINFOREST_RTP_389] = "aw8697_Rainforest_RTP_389",
	[AW8697_RAINEVERYTHING_RTP_390] = "aw8697_Raineverything_RTP_390",
	[AW8697_STARACROSS_RTP_391] = "aw8697_Staracross_RTP_391",
	[AW8697_FULLMOON_RTP_392] = "aw8697_Fullmoon_RTP_392",
	[AW8697_CLOUDS_RTP_393] = "aw8697_Clouds_RTP_393",
	[AW8697_WONDERLAND_RTP_394] = "aw8697_Wonderland_RTP_394",
	[AW8697_STILL_RTP_395] = "aw8697_Still_RTP_395",
	[AW8697_HAUNTING_RTP_396] = "aw8697_Haunting_RTP_396",
	[AW8697_DRAGONFLY_RTP_397] = "aw8697_Dragonfly_RTP_397",
	[AW8697_DROPWATER_RTP_398] = "aw8697_Dropwater_RTP_398",
	[AW8697_FLUCTUATION_RTP_399] = "aw8697_Fluctuation_RTP_399",
	[AW8697_BLOW_RTP_400] = "aw8697_Blow_RTP_400",
	[AW8697_LEAVESLIGHT_RTP_401] = "aw8697_Leaveslight_RTP_401",
	[AW8697_WARMSUN_RTP_402] = "aw8697_Warmsun_RTP_402",
	[AW8697_SNOWFLAKE_RTP_403] = "aw8697_Snowflake_RTP_403",
	[AW8697_CRYSTALCLEAR_RTP_404] = "aw8697_Crystalclear_RTP_404",
	[AW8697_INSECTS_RTP_405] = "aw8697_Insects_RTP_405",
	[AW8697_DEW_RTP_406] = "aw8697_Dew_RTP_406",
	[AW8697_SHINE_RTP_407] = "aw8697_Shine_RTP_407",
	[AW8697_FROST_RTP_408] = "aw8697_Frost_RTP_408",
	[AW8697_RAINSPLASH_RTP_409] = "aw8697_Rainsplash_RTP_409",
	[AW8697_RAINDROP_RTP_410] = "aw8697_Raindrop_RTP_410",
};

#endif
