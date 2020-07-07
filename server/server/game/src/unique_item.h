#ifndef __INC_METIN2_UNIQUE_ITEM_H
#define __INC_METIN2_UNIQUE_ITEM_H

enum EUniqueItems
{
	UNIQUE_GROUP_LUCKY_GOLD 						= 10024,
	UNIQUE_GROUP_AUTOLOOT 							= 10011,
	UNIQUE_GROUP_RING_OF_EXP 						= 10000,
	UNIQUE_GROUP_FISH_MIND 							= 10009,
	UNIQUE_GROUP_LARGE_SAFEBOX 						= 10021,
	UNIQUE_GROUP_DOUBLE_ITEM 						= 10002,
	UNIQUE_GROUP_RING_OF_LANGUAGE 					= 10025,
	UNIQUE_GROUP_SPECIAL_RIDE 						= 10030,
	UNIQUE_GROUP_DRAGON_HEART 						= 10053,
	UNIQUE_ITEM_TEARDROP_OF_GODNESS 				= 70012,
	UNIQUE_ITEM_RING_OF_LANGUAGE 					= 70006,
	UNIQUE_ITEM_RING_OF_LANGUAGE_SAMPLE 			= 70047,
	UNIQUE_ITEM_WHITE_FLAG 							= 70008,
	UNIQUE_ITEM_TREASURE_BOX 						= 70009,
	UNIQUE_ITEM_CAPE_OF_COURAGE 					= 70038,
	UNIQUE_ITEM_HALF_STAMINA 						= 70040,
	UNIQUE_ITEM_HIDE_ALIGNMENT_TITLE 				= 70048,
	UNIQUE_ITEM_SKIP_ITEM_DROP_PENALTY 				= 70049,
	UNIQUE_ITEM_FASTER_ALIGNMENT_UP_BY_TIME 		= 70050,
	UNIQUE_ITEM_FASTER_ALIGNMENT_UP_BY_KILL 		= 70051,
	UNIQUE_ITEM_NO_BAD_LUCK_EFFECT 					= 70052,
	UNIQUE_ITEM_LARBOR_MEDAL 						= 70004,
	UNIQUE_ITEM_DOUBLE_EXP 							= 70005,
	UNIQUE_ITEM_DOUBLE_ITEM 						= 70043,
	UNIQUE_ITEM_PARTY_BONUS_EXP				 		= 70003,
	UNIQUE_ITEM_PARTY_BONUS_EXP_MALL 				= 71012,
	UNIQUE_ITEM_PARTY_BONUS_EXP_GIFT 				= 76011,
	ITEM_GIVE_STAT_RESET_COUNT_VNUM 				= 70014,
	ITEM_SKILLFORGET_VNUM 							= 70037,
	ITEM_SKILLFORGET2_VNUM 							= 70055,
	UNIQUE_ITEM_FISH_MIND 							= 71008,
	UNIQUE_ITEM_SAFEBOX_EXPAND 						= 71009,
	UNIQUE_ITEM_AUTOLOOT_GOLD 						= 71010,
	UNIQUE_ITEM_EMOTION_MASK 						= 71011,
	UNIQUE_ITEM_EMOTION_MASK2 						= 71033,
	ITEM_NEW_YEAR_GREETING_VNUM 					= 50023,
	ITEM_WONSO_BEAN_VNUM 							= 50020,
	ITEM_WONSO_SUGAR_VNUM 							= 50021,
	ITEM_WONSO_FRUIT_VNUM 							= 50022,
	ITEM_VALENTINE_ROSE 							= 50024,
	ITEM_VALENTINE_CHOCOLATE 						= 50025,
	ITEM_WHITEDAY_CANDY 							= 50032,
	ITEM_WHITEDAY_ROSE 								= 50031,
	ITEM_HORSE_FOOD_1 								= 50054,
	ITEM_HORSE_FOOD_2 								= 50055,
	ITEM_HORSE_FOOD_3 								= 50056,
	ITEM_REVIVE_HORSE_1 							= 50057,
	ITEM_REVIVE_HORSE_2 							= 50058,
	ITEM_REVIVE_HORSE_3 							= 50059,
	ITEM_HORSE_SKILL_TRAIN_BOOK 					= 50060,
	UNIQUE_ITEM_MARRIAGE_PENETRATE_BONUS 			= 71069,
	UNIQUE_ITEM_MARRIAGE_EXP_BONUS 					= 71070,
	UNIQUE_ITEM_MARRIAGE_CRITICAL_BONUS 			= 71071,
	UNIQUE_ITEM_MARRIAGE_TRANSFER_DAMAGE 			= 71072,
	UNIQUE_ITEM_MARRIAGE_ATTACK_BONUS 				= 71073,
	UNIQUE_ITEM_MARRIAGE_DEFENSE_BONUS 				= 71074,
	ITEM_MARRIAGE_RING 								= 70302,
	ITEM_MINING_SKILL_TRAIN_BOOK 					= 50600,
	ITEM_PRISM 										= 71113,
	ITEM_AUTO_HP_RECOVERY_S 						= 72723,
	ITEM_AUTO_HP_RECOVERY_M 						= 72724,
	ITEM_AUTO_HP_RECOVERY_L 						= 72725,
	ITEM_AUTO_HP_RECOVERY_X 						= 72726,
	ITEM_AUTO_SP_RECOVERY_S 						= 72727,
	ITEM_AUTO_SP_RECOVERY_M 						= 72728,
	ITEM_AUTO_SP_RECOVERY_L 						= 72729,
	ITEM_AUTO_SP_RECOVERY_X 						= 72730,
	ITEM_RAMADAN_CANDY	 							= 50183,
	UNIQUE_ITEM_RAMADAN_RING 						= 71135,
	ITEM_NOG_POCKET 								= 50216,
	REWARD_BOX_ITEM_AUTO_SP_RECOVERY_XS 			= 76004,
	REWARD_BOX_ITEM_AUTO_SP_RECOVERY_S 				= 76005,
	REWARD_BOX_ITEM_AUTO_HP_RECOVERY_S 				= 76021,
	REWARD_BOX_ITEM_AUTO_HP_RECOVERY_XS 			= 76022,
	FUCKING_BRAZIL_ITEM_AUTO_SP_RECOVERY_S 			= 79013,
	FUCKING_BRAZIL_ITEM_AUTO_HP_RECOVERY_S 			= 79012,
	REWARD_BOX_UNIQUE_ITEM_CAPE_OF_COURAGE 			= 76007,
	DRAGON_SOUL_EXTRACTOR_GROUP 					= 10600,
	DRAGON_HEART_EXTRACTOR_GROUP 					= 10601,
	DRAGON_HEART_VNUM 								= 100000,
	DBONE_VNUM_1 									= 72705,
	DBONE_VNUM_2 									= 72706,
#ifdef ENABLE_ITEM_COMBINATION_SYSTEM
	COSTUME_BONUS_TRANSFER_ITEM_VNUM 				= 70065,
#endif
	ITEM_SKILLBOOK_VNUM 							= 50300,
	ITEM_ANTIEXP_RING 								= 72321,
	UNIQUE_ITEM_PARTY_BONUS_EXP_PLUS 				= 72059,
	UNIQUE_ITEM_PARTY_BONUS_EXP_PLUS_SECOND 		= 72060,
	UNIQUE_ITEM_DOUBLE_EXP_PLUS 					= 72062,
	U_ITEM_SECONDARY_COIN 							= 81600,
	ITEM_DRAGON_SILVER_POTION 						= 81700,
#ifdef ENABLE_SHOP_SEARCH_SYSTEM
	ITEM_PRIVATESHOPSEARCH_FIRST					= 60004,
	ITEM_PRIVATESHOPSEARCH_SECOND					= 60005,
	ITEM_PRIVATESHOPSEARCH_DIAMOND					= 60006,
#endif
	ITEM_BLEED_BANDAGE								= 27124,
#ifdef ENABLE_EXTEND_INVENTORY_SYSTEM
	ITEM_EXTEND_INVENTORY_FIRST						= 72319,
	ITEM_EXTEND_INVENTORY_SECOND					= 72320,
#endif
	ITEM_GUILD_RING_NEW								= 72053,
	ITEM_CHEQUE_COUPON								= 50027,
#ifdef ENABLE_UPGRADE_SOCKET_SYSTEM
	ITEM_UPGRADE_SOCKET_WEAPON						= 81100,
	ITEM_UPGRADE_SOCKET_ARMOR						= 81101,
	ITEM_UPGRADE_SOCKET_MIX							= 81102,
#endif
#ifdef ENABLE_WEAPON_RARITY_SYSTEM
	ITEM_RARITY_BOX_1								= 81504,
	ITEM_RARITY_BOX_2								= 81505,
	ITEM_RARITY_BOX_3								= 81506,
	ITEM_RARITY_BOX_4								= 81507,
#endif
	ITEM_ZODIAC_BOX_FIRST							= 72328,
	ITEM_ZODIAC_BOX_SECONDARY						= 72329,
#ifdef ENABLE_SHOP_DECORATION_SYSTEM
	ITEM_SHOP_DECO_PACK								= 71221,
#endif
#ifdef ENABLE_AUTO_HUNTING_SYSTEM
	ITEM_AUTO_HUNTING								= 81610,
	ITEM_AUTO_HUNTING_2								= 81611,
	ITEM_AUTO_HUNTING_3								= 81612,
	ITEM_AUTO_HUNTING_4								= 81613,
#endif
#ifdef ENABLE_PERMA_BLEND_SYSTEM
	NEW_MOVE_SPEED_POTION		= 18383,	// Mor İksir	Hareket hızı: +30
	NEW_ATTACK_SPEED_POTION		= 18384,	// Yeşil İksir	Saldırı hızı: +30
	NEW_DRAGON_POTION_18385		= 18385,	// Ejderha Tanrı Yaşamı	Maksimum HP: +20%
	NEW_DRAGON_POTION_18386		= 18386,	// Ejderha Tanrı Zekası	Maksimum SP: +20%
	NEW_DRAGON_POTION_18387		= 18387,	// Ejderha Tanrı Savunması	Hasar azaltma: +15%
	NEW_DRAGON_POTION_18388		= 18388,	// Ejderha Tanrı Saldırısı	Saldırı arttırma: +20%
	NEW_CRITIC_POTION_18389		= 18389,	// Kritik İsabet	Kritik vuruş şansı: +20%
	NEW_PENETRE_POTION_18390	= 18390,	// Delici İsabet	Delici vuruş şansı: +20%
	NEW_AFFECT_POTION_18391		= 18391,	// Kırmızı // Kritik
	NEW_AFFECT_POTION_18392		= 18392,	// Turuncu // Delici
	NEW_AFFECT_POTION_18393		= 18393,	// Sarı // Saldırı Hızı
	NEW_AFFECT_POTION_18394		= 18394,	// Yeşil // Büyüye karşı dayanıklılık
	NEW_AFFECT_POTION_18395		= 18395,	// Mavi // Saldırı Degeri
	NEW_AFFECT_POTION_13131		= 13131,	// Beyaz // Savunma
#endif
};

#endif /* __INC_METIN2_UNIQUE_ITEM_H */
