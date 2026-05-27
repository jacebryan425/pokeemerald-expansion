Route3_PCCreatorHouse_MapScripts::
	.byte 0


Route3_PCCreatorHouse_Liam::
# 4 "data/maps/Route3_PCCreatorHouse/scripts.pory"
	lock
# 5 "data/maps/Route3_PCCreatorHouse/scripts.pory"
	faceplayer
# 6 "data/maps/Route3_PCCreatorHouse/scripts.pory"
	goto_if_set FLAG_SYS_PC_LANETTE, Route3_PCCreatorHouse_Liam_2
# 10 "data/maps/Route3_PCCreatorHouse/scripts.pory"
	setflag FLAG_SYS_PC_LANETTE
# 11 "data/maps/Route3_PCCreatorHouse/scripts.pory"
	msgbox Route3_PCCreatorHouse_Liam_Text_1
# 16 "data/maps/Route3_PCCreatorHouse/scripts.pory"
	giveitem ITEM_POKEMON_BOX
# 17 "data/maps/Route3_PCCreatorHouse/scripts.pory"
	msgbox Route3_PCCreatorHouse_Liam_Text_2
Route3_PCCreatorHouse_Liam_1:
# 24 "data/maps/Route3_PCCreatorHouse/scripts.pory"
	release
	return

Route3_PCCreatorHouse_Liam_2:
# 7 "data/maps/Route3_PCCreatorHouse/scripts.pory"
	msgbox Route3_PCCreatorHouse_Liam_Text_0
	goto Route3_PCCreatorHouse_Liam_1


Route3_PCCreatorHouse_Liam_Text_0:
# 7 "data/maps/Route3_PCCreatorHouse/scripts.pory"
	.string "Have you been finding the {PKMN} Box Link\n"
	.string "useful?$"

Route3_PCCreatorHouse_Liam_Text_1:
# 11 "data/maps/Route3_PCCreatorHouse/scripts.pory"
	.string "Oh, hi there! I'm Liam.\p"
	.string "I maintain the PC system here in\n"
	.string "Admiro.\p"
	.string "I'm sorry it's so cluttered in here.\n"
	.string "I've been hard at work developing this.$"

Route3_PCCreatorHouse_Liam_Text_2:
# 17 "data/maps/Route3_PCCreatorHouse/scripts.pory"
	.string "Isn't it kind of annoying having\n"
	.string "to visit a Pokémon Center every time\l"
	.string "you want to check on your Pokémon?\p"
	.string "I thought so too, so I made it possible\n"
	.string "to access your PC boxes from your bag!\p"
	.string "I hope you enjoy it!$"
