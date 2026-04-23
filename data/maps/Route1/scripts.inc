Route1_MapScripts::
# 2 "data/maps/Route1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_RECEIVED_DEX_FROM_ASPEN, Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/Route1/scripts.pory"
	setflag FLAG_HIDE_ZIGZAGOON_1
# 5 "data/maps/Route1/scripts.pory"
	setflag FLAG_HIDE_ZIGZAGOON_2
# 6 "data/maps/Route1/scripts.pory"
	removeobject 1, MAP_ROUTE1
# 7 "data/maps/Route1/scripts.pory"
	removeobject 2, MAP_ROUTE1
	return


Route1_EventScript_Sign::
# 13 "data/maps/Route1/scripts.pory"
	lock
# 14 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Sign_Text_0
# 15 "data/maps/Route1/scripts.pory"
	release
	return


Route1_EventScript_TrainerTip1::
# 19 "data/maps/Route1/scripts.pory"
	lock
# 20 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_TrainerTip1_Text_0
# 24 "data/maps/Route1/scripts.pory"
	release
	return


Route1_EventScript_TrainerTip2::
# 28 "data/maps/Route1/scripts.pory"
	lock
# 29 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_TrainerTip2_Text_0
# 33 "data/maps/Route1/scripts.pory"
	release
	return


Route1_EventScript_TrainerTip3::
# 37 "data/maps/Route1/scripts.pory"
	lock
# 38 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_TrainerTip3_Text_0
# 42 "data/maps/Route1/scripts.pory"
	release
	return


Route1_EventScript_Zigzagoon::
# 46 "data/maps/Route1/scripts.pory"
	lock
# 47 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 48 "data/maps/Route1/scripts.pory"
	waitmoncry
# 49 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Zigzagoon_Text_0
# 50 "data/maps/Route1/scripts.pory"
	release
	return


Route1_EventScript_Sign_Text_0:
# 14 "data/maps/Route1/scripts.pory"
	.string "Route 1$"

Route1_EventScript_TrainerTip1_Text_0:
# 20 "data/maps/Route1/scripts.pory"
	.string "Be careful walking through the\n"
	.string "tall grass!\p"
	.string "Wild Pokémon could catch you off guard\n"
	.string "at any moment.$"

Route1_EventScript_TrainerTip2_Text_0:
# 29 "data/maps/Route1/scripts.pory"
	.string "Routes are full of fellow trainers\n"
	.string "looking to hone their skills.\p"
	.string "If one locks eyes with you,\n"
	.string "you must battle!$"

Route1_EventScript_TrainerTip3_Text_0:
# 38 "data/maps/Route1/scripts.pory"
	.string "This region is full of hidden areas.\p"
	.string "Use the skills you learn and\n"
	.string "a little bit of imagination to discover\l"
	.string "them all.$"

Route1_EventScript_Zigzagoon_Text_0:
# 49 "data/maps/Route1/scripts.pory"
	.string "Zig-zig, Zigzagoon-goon!$"
