Route114_EventObjects:: @ 8382C48
	object_event 1, EVENT_OBJ_GFX_BERRY_TREE, 0, 31, 43, 3, 12, 0, 0, 0, 77, S_BerryTree, 0
	object_event 2, EVENT_OBJ_GFX_BERRY_TREE, 0, 31, 44, 3, 12, 0, 0, 0, 78, S_BerryTree, 0
	object_event 3, EVENT_OBJ_GFX_HIKER, 0, 15, 65, 7, 10, 0, 0, 1, 6, Route114_EventScript_1507F1, 0
	object_event 4, EVENT_OBJ_GFX_HIKER, 0, 30, 72, 5, 15, 0, 0, 1, 4, Route114_EventScript_150808, 0
	object_event 5, EVENT_OBJ_GFX_CAMPER, 0, 22, 50, 3, 10, 0, 0, 1, 3, Route114_EventScript_15081F, 0
	object_event 6, EVENT_OBJ_GFX_PICNICKER, 0, 19, 35, 3, 1, 0, 0, 1, 3, Route114_EventScript_150836, 0
	object_event 7, EVENT_OBJ_GFX_MANIAC, 0, 20, 56, 3, 7, 0, 0, 1, 3, Route114_EventScript_15084D, 0
	object_event 8, EVENT_OBJ_GFX_BERRY_TREE, 0, 31, 45, 3, 12, 0, 0, 0, 68, S_BerryTree, 0
	object_event 9, EVENT_OBJ_GFX_ITEM_BALL, 0, 7, 6, 3, 1, 0, 0, 0, 0, Route114_EventScript_1B1516, FLAG_ITEM_ROUTE114_1
	object_event 10, EVENT_OBJ_GFX_ITEM_BALL, 0, 11, 37, 4, 1, 0, 0, 0, 0, Route114_EventScript_1B1523, FLAG_ITEM_ROUTE114_2
	object_event 11, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 12, 43, 4, 1, 0, 0, 0, 0, S_BreakableRock, FLAG_TEMP_11
	object_event 12, EVENT_OBJ_GFX_GENTLEMAN, 0, 19, 11, 3, 10, 0, 0, 0, 0, Route114_EventScript_150782, 0
	object_event 13, EVENT_OBJ_GFX_POOCHYENA, 0, 19, 12, 3, 10, 0, 0, 0, 0, Route114_EventScript_1507C3, 0
	object_event 14, EVENT_OBJ_GFX_MAN_5, 0, 27, 42, 3, 3, 0, 1, 0, 0, Route114_EventScript_150733, 0
	object_event 15, EVENT_OBJ_GFX_FISHERMAN, 0, 23, 20, 3, 8, 0, 0, 1, 0, Route114_EventScript_1508E0, 0
	object_event 16, EVENT_OBJ_GFX_FISHERMAN, 0, 19, 26, 3, 9, 0, 0, 1, 0, Route114_EventScript_1508C9, 0
	object_event 17, EVENT_OBJ_GFX_MAN_6, 0, 30, 58, 5, 23, 0, 0, 1, 3, Route114_EventScript_15088B, 0
	object_event 18, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 29, 53, 5, 1, 1, 1, 0, 0, S_BreakableRock, FLAG_TEMP_12
	object_event 19, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 30, 54, 5, 1, 1, 1, 0, 0, S_BreakableRock, FLAG_TEMP_13
	object_event 20, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 22, 69, 7, 1, 1, 1, 0, 0, S_BreakableRock, FLAG_TEMP_14
	object_event 21, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 11, 64, 5, 1, 1, 1, 0, 0, S_BreakableRock, FLAG_TEMP_15
	object_event 22, EVENT_OBJ_GFX_LASS, 0, 24, 44, 3, 8, 1, 1, 1, 0, Route114_EventScript_150912, 0
	object_event 23, EVENT_OBJ_GFX_LASS, 0, 23, 44, 3, 8, 1, 1, 1, 0, Route114_EventScript_1508F7, 0

Route114_MapWarps:: @ 8382E70
	warp_def 8, 63, 0, 0, MAP_METEOR_FALLS_1F_1R
	warp_def 29, 5, 0, 0, MAP_ROUTE114_FOSSIL_MANIACS_HOUSE
	warp_def 27, 36, 0, 0, MAP_ROUTE114_LANETTES_HOUSE

Route114_MapBGEvents:: @ 8382E88
	bg_event 7, 64, 0, 0, 0, Route114_EventScript_1507D6
	bg_event 31, 7, 0, 0, 0, Route114_EventScript_1507DF
	bg_secret_base_event 9, 47, 0, SECRET_BASE_BROWN_CAVE1_1
	bg_secret_base_event 30, 51, 0, SECRET_BASE_BROWN_CAVE2_1
	bg_secret_base_event 11, 62, 0, SECRET_BASE_BROWN_CAVE3_1
	bg_secret_base_event 19, 70, 0, SECRET_BASE_BROWN_CAVE4_1
	bg_secret_base_event 11, 27, 0, SECRET_BASE_TREE3_2
	bg_secret_base_event 12, 27, 0, SECRET_BASE_TREE4_2
	bg_event 25, 38, 3, 0, 0, Route114_EventScript_1507E8
	bg_hidden_item_event 20, 57, 3, ITEM_CARBOS, FLAG_HIDDEN_ITEM_4
	bg_secret_base_event 32, 57, 0, SECRET_BASE_BROWN_CAVE4_3
	bg_hidden_item_event 7, 30, 3, ITEM_REVIVE, FLAG_HIDDEN_ITEM_2A

Route114_MapEvents:: @ 8382F18
	map_events Route114_EventObjects, Route114_MapWarps, 0x0, Route114_MapBGEvents
