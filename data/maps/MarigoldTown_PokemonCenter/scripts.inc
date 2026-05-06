MarigoldTown_PokemonCenter_MapScripts::
# 2 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MarigoldTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

MarigoldTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_MARIGOLD_TOWN
	return


MarigoldTown_PokemonCenter_EventScript_Nurse::
# 9 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 10 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 11 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	waitmessage
# 12 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	waitbuttonpress
# 13 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	release
	return


MarigoldTown_PokemonCenter_ExpShareNPC::
# 17 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	lock
# 18 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	faceplayer
# 19 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	goto_if_set FLAG_EXP_SHARE, MarigoldTown_PokemonCenter_ExpShareNPC_2
# 23 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	getpartysize
# 24 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge MarigoldTown_PokemonCenter_ExpShareNPC_5
# 46 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	msgbox MarigoldTown_PokemonCenter_ExpShareNPC_Text_5
MarigoldTown_PokemonCenter_ExpShareNPC_1:
# 50 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	release
	return

MarigoldTown_PokemonCenter_ExpShareNPC_2:
# 20 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	msgbox MarigoldTown_PokemonCenter_ExpShareNPC_Text_0
	goto MarigoldTown_PokemonCenter_ExpShareNPC_1

MarigoldTown_PokemonCenter_ExpShareNPC_5:
# 25 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	msgbox MarigoldTown_PokemonCenter_ExpShareNPC_Text_1, MSGBOX_YESNO
# 32 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MarigoldTown_PokemonCenter_ExpShareNPC_8
# 40 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	msgbox MarigoldTown_PokemonCenter_ExpShareNPC_Text_4
	goto MarigoldTown_PokemonCenter_ExpShareNPC_1

MarigoldTown_PokemonCenter_ExpShareNPC_8:
# 33 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	msgbox MarigoldTown_PokemonCenter_ExpShareNPC_Text_2
# 34 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 35 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	setflag FLAG_EXP_SHARE
# 36 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	msgbox MarigoldTown_PokemonCenter_ExpShareNPC_Text_3
	goto MarigoldTown_PokemonCenter_ExpShareNPC_1


MarigoldTown_PokemonCenter_NPC::
# 54 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	lock
# 55 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	faceplayer
# 56 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	msgbox MarigoldTown_PokemonCenter_NPC_Text_0
# 60 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	release
	return


MarigoldTown_PokemonCenter_ExpShareNPC_Text_0:
# 20 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	.string "Isn't life just so much easier\n"
	.string "with the Exp. Share?$"

MarigoldTown_PokemonCenter_ExpShareNPC_Text_1:
# 25 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	.string "Isn't it pretty tedious having\n"
	.string "to level each of your Pokémon\l"
	.string "individually?\p"
	.string "What if I told you I had an item\n"
	.string "that would give all of your Pokémon\l"
	.string "experience instead of just one?\p"
	.string "Would you be interested?$"

MarigoldTown_PokemonCenter_ExpShareNPC_Text_2:
# 33 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	.string "Perfect! Here you go.$"

MarigoldTown_PokemonCenter_ExpShareNPC_Text_3:
# 36 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	.string "Farewell, tedious grinding!\p"
	.string "You can always turn it off if you\n"
	.string "decide you like a challenge.$"

MarigoldTown_PokemonCenter_ExpShareNPC_Text_4:
# 40 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	.string "Fair enough.\p"
	.string "Some say using it is cheating.\n"
	.string "I see things a different way.\p"
	.string "Come back if you change your mind.$"

MarigoldTown_PokemonCenter_ExpShareNPC_Text_5:
# 46 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	.string "Come and see me once you have more\n"
	.string "than one Pokémon.$"

MarigoldTown_PokemonCenter_NPC_Text_0:
# 56 "data/maps/MarigoldTown_PokemonCenter/scripts.pory"
	.string "Marigold is so far away from any of\n"
	.string "the big cities.\p"
	.string "I can't imagine why anyone would want\n"
	.string "to live here.$"
