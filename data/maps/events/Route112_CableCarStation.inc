Route112_CableCarStation_EventObjects:: @ 838B7D4
	object_event 1, EVENT_OBJ_GFX_BEAUTY, 0, 6, 6, 3, 8, 0, 0, 0, 0, Route112_CableCarStation_EventScript_15C08C, 0
	object_event 2, EVENT_OBJ_GFX_CABLE_CAR, 0, 6, 3, 3, 1, 0, 0, 0, 0, 0x0, 0

Route112_CableCarStation_MapWarps:: @ 838B804
	warp_def 6, 11, 0, 0, MAP_ROUTE112
	warp_def 7, 11, 0, 1, MAP_ROUTE112

Route112_CableCarStation_MapEvents:: @ 838B814
	map_events Route112_CableCarStation_EventObjects, Route112_CableCarStation_MapWarps, 0x0, 0x0
