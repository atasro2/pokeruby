Route116_EventObjects:: @ 8383170
	object_event 1, EVENT_OBJ_GFX_BERRY_TREE, 0, 18, 2, 3, 12, 0, 0, 0, 25, S_BerryTree, 0
	object_event 2, EVENT_OBJ_GFX_BERRY_TREE, 0, 19, 2, 3, 12, 0, 0, 0, 26, S_BerryTree, 0
	object_event 3, EVENT_OBJ_GFX_YOUNGSTER, 0, 12, 7, 3, 16, 0, 0, 1, 3, Route116_EventScript_150C62, 0
	object_event 4, EVENT_OBJ_GFX_CUTTABLE_TREE, 0, 21, 6, 3, 1, 0, 0, 0, 0, S_CuttableTree, FLAG_TEMP_11
	object_event 5, EVENT_OBJ_GFX_CUTTABLE_TREE, 0, 33, 8, 3, 1, 0, 0, 0, 0, S_CuttableTree, FLAG_TEMP_12
	object_event 6, EVENT_OBJ_GFX_BUG_CATCHER, 0, 13, 17, 3, 24, 0, 0, 1, 2, Route116_EventScript_150C79, 0
	object_event 7, EVENT_OBJ_GFX_ITEM_BALL, 0, 19, 6, 3, 1, 0, 0, 0, 0, Route116_EventScript_1B1571, FLAG_ITEM_ROUTE116_2
	object_event 8, EVENT_OBJ_GFX_ITEM_BALL, 0, 10, 17, 3, 1, 0, 0, 0, 0, Route116_EventScript_1B157E, FLAG_ITEM_ROUTE116_3
	object_event 9, EVENT_OBJ_GFX_BERRY_TREE, 0, 20, 2, 3, 12, 0, 0, 0, 66, S_BerryTree, 0
	object_event 10, EVENT_OBJ_GFX_BERRY_TREE, 0, 21, 2, 3, 12, 0, 0, 0, 67, S_BerryTree, 0
	object_event 11, EVENT_OBJ_GFX_OLD_MAN_1, 0, 46, 9, 3, 1, 0, 0, 0, 0, Route116_EventScript_150B5D, FLAG_HIDE_BRINEY_ROUTE116
	object_event 12, EVENT_OBJ_GFX_CUTTABLE_TREE, 0, 30, 6, 3, 1, 0, 0, 0, 0, S_CuttableTree, FLAG_TEMP_13
	object_event 13, EVENT_OBJ_GFX_HIKER, 0, 36, 15, 3, 13, 0, 0, 1, 2, Route116_EventScript_150CCE, 0
	object_event 14, EVENT_OBJ_GFX_CUTTABLE_TREE, 0, 24, 9, 3, 1, 0, 0, 0, 0, S_CuttableTree, FLAG_TEMP_14
	object_event 15, EVENT_OBJ_GFX_ITEM_BALL, 0, 80, 8, 3, 1, 0, 0, 0, 0, Route116_EventScript_1B158B, FLAG_ITEM_ROUTE116_4
	object_event 16, EVENT_OBJ_GFX_LASS, 0, 22, 16, 3, 13, 0, 0, 1, 3, Route116_EventScript_150CE5, 0
	object_event 17, EVENT_OBJ_GFX_GIRL_3, 0, 25, 4, 3, 8, 0, 0, 1, 2, Route116_EventScript_150CFC, 0
	object_event 18, EVENT_OBJ_GFX_SCHOOL_KID_M, 0, 31, 9, 3, 9, 0, 0, 1, 2, Route116_EventScript_150C90, 0
	object_event 19, EVENT_OBJ_GFX_MAN_2, 0, 46, 11, 3, 1, 1, 1, 0, 0, Route116_EventScript_150A7B, FLAG_HIDE_DEVON_EMPLOYEE_ROUTE116
	object_event 20, EVENT_OBJ_GFX_ITEM_BALL, 0, 56, 12, 4, 1, 1, 1, 0, 0, Route116_EventScript_1B1564, FLAG_ITEM_ROUTE116_1
	object_event 21, EVENT_OBJ_GFX_BLACK_BELT, 0, 38, 9, 3, 10, 1, 1, 0, 0, Route116_EventScript_150A49, FLAG_HIDE_TUNNER_DIGGER_ROUTE116
	object_event 22, EVENT_OBJ_GFX_MANIAC, 0, 74, 13, 3, 1, 1, 1, 0, 0, Route116_EventScript_150B8F, FLAG_HIDE_LOST_GLASSES_MAN

Route116_MapWarps:: @ 8383380
	warp_def 47, 8, 0, 0, MAP_RUSTURF_TUNNEL
	warp_def 38, 8, 0, 0, MAP_ROUTE116_TUNNELERS_REST_HOUSE
	warp_def 65, 10, 0, 2, MAP_RUSTURF_TUNNEL

Route116_MapCoordEvents:: @ 8383398
	coord_event 47, 9, 3, 0, VAR_ROUTE116_STATE, 1, 0, Route116_EventScript_150B6E

Route116_MapBGEvents:: @ 83833A8
	bg_event 5, 10, 0, 0, 0, Route116_EventScript_150B30
	bg_event 48, 9, 0, 0, 0, Route116_EventScript_150B39
	bg_event 40, 9, 0, 0, 0, Route116_EventScript_150B42
	bg_secret_base_event 71, 4, 0, SECRET_BASE_BLUE_CAVE1_1
	bg_secret_base_event 79, 11, 0, SECRET_BASE_BLUE_CAVE2_1
	bg_event 16, 12, 0, 0, 0, Route116_EventScript_150B4B
	bg_event 29, 10, 0, 0, 0, Route116_EventScript_150B54
	bg_secret_base_event 56, 6, 0, SECRET_BASE_BLUE_CAVE3_2
	bg_secret_base_event 55, 15, 0, SECRET_BASE_BLUE_CAVE4_2
	bg_hidden_item_event 22, 9, 3, ITEM_SUPER_POTION, FLAG_HIDDEN_ITEM_2D
	bg_hidden_item_event 70, 13, 3, ITEM_BLACK_GLASSES, FLAG_HIDDEN_ITEM_BLACK_GLASSES

Route116_MapEvents:: @ 838342C
	map_events Route116_EventObjects, Route116_MapWarps, Route116_MapCoordEvents, Route116_MapBGEvents
