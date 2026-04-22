Route1_MapScripts::
	.byte 0


Route1_EventScript_Sign::
# 4 "data/maps/Route1/scripts.pory"
	lock
# 5 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Sign_Text_0
# 6 "data/maps/Route1/scripts.pory"
	release
	return


Route1_EventScript_TrainerTip1::
# 10 "data/maps/Route1/scripts.pory"
	lock
# 11 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_TrainerTip1_Text_0
# 15 "data/maps/Route1/scripts.pory"
	release
	return


Route1_EventScript_TrainerTip2::
# 19 "data/maps/Route1/scripts.pory"
	lock
# 20 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_TrainerTip2_Text_0
# 24 "data/maps/Route1/scripts.pory"
	release
	return


Route1_EventScript_TrainerTip3::
# 28 "data/maps/Route1/scripts.pory"
	lock
# 29 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_TrainerTip3_Text_0
# 33 "data/maps/Route1/scripts.pory"
	release
	return


Route1_EventScript_Zigzagoon::
# 37 "data/maps/Route1/scripts.pory"
	lock
# 38 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 39 "data/maps/Route1/scripts.pory"
	waitmoncry
# 40 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Zigzagoon_Text_0
# 41 "data/maps/Route1/scripts.pory"
	release
	return


Route1_EventScript_Sign_Text_0:
# 5 "data/maps/Route1/scripts.pory"
	.string "Route 1$"

Route1_EventScript_TrainerTip1_Text_0:
# 11 "data/maps/Route1/scripts.pory"
	.string "Be careful walking through the\n"
	.string "tall grass!\p"
	.string "Wild Pokémon could catch you off guard\n"
	.string "at any moment.$"

Route1_EventScript_TrainerTip2_Text_0:
# 20 "data/maps/Route1/scripts.pory"
	.string "Routes are full of fellow trainers\n"
	.string "looking to hone their skills.\p"
	.string "If one locks eyes with you,\n"
	.string "you must battle!$"

Route1_EventScript_TrainerTip3_Text_0:
# 29 "data/maps/Route1/scripts.pory"
	.string "This region is full of hidden areas.\p"
	.string "Use the skills you learn and\n"
	.string "a little bit of imagination to discover\l"
	.string "them all.$"

Route1_EventScript_Zigzagoon_Text_0:
# 40 "data/maps/Route1/scripts.pory"
	.string "Zig-zig, Zigzagoon-goon!$"
