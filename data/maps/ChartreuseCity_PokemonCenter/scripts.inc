ChartreuseCity_PokemonCenter_MapScripts::
# 2 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ChartreuseCity_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

ChartreuseCity_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_CHARTREUSE_CITY
	return


ChartreuseCity_PokemonCenter_Nurse::
# 9 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 10 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 11 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	waitmessage
# 12 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	waitbuttonpress
# 13 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	release
	return


ChartreuseCity_PokemonCenter_NPCScript1::
# 17 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	lock
# 18 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	faceplayer
# 19 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	goto_if_set FLAG_RECEIVED_MAGIKARP, ChartreuseCity_PokemonCenter_NPCScript1_2
# 23 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	msgbox ChartreuseCity_PokemonCenter_NPCScript1_Text_1, MSGBOX_YESNO
# 29 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChartreuseCity_PokemonCenter_NPCScript1_5
# 45 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	msgbox ChartreuseCity_PokemonCenter_NPCScript1_Text_5
ChartreuseCity_PokemonCenter_NPCScript1_1:
# 48 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	release
	return

ChartreuseCity_PokemonCenter_NPCScript1_2:
# 20 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	msgbox ChartreuseCity_PokemonCenter_NPCScript1_Text_0
	goto ChartreuseCity_PokemonCenter_NPCScript1_1

ChartreuseCity_PokemonCenter_NPCScript1_5:
# 30 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	msgbox ChartreuseCity_PokemonCenter_NPCScript1_Text_2
# 32 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 33 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	getpartysize
# 34 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ChartreuseCity_PokemonCenter_NPCScript1_9
# 38 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	msgbox ChartreuseCity_PokemonCenter_NPCScript1_Text_4
ChartreuseCity_PokemonCenter_NPCScript1_8:
# 41 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	waitfanfare
# 42 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	givemon SPECIES_MAGIKARP, 5
# 43 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	setflag FLAG_RECEIVED_MAGIKARP
	goto ChartreuseCity_PokemonCenter_NPCScript1_1

ChartreuseCity_PokemonCenter_NPCScript1_9:
# 35 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	msgbox ChartreuseCity_PokemonCenter_NPCScript1_Text_3
	goto ChartreuseCity_PokemonCenter_NPCScript1_8


ChartreuseCity_PokemonCenter_NPCScript2::
# 52 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	lock
# 53 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	faceplayer
# 54 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	msgbox ChartreuseCity_PokemonCenter_NPCScript2_Text_0
# 58 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	release
	return


ChartreuseCity_PokemonCenter_NPCScript1_Text_0:
# 20 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	.string "I think I need to buy a better\n"
	.string "fishing rod.$"

ChartreuseCity_PokemonCenter_NPCScript1_Text_1:
# 23 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	.string "I haven't been having much luck\n"
	.string "lately while fishing.\p"
	.string "It seems like all I'm reeling in\n"
	.string "are Magikarp!\p"
	.string "I must have caught at least 20 or so\n"
	.string "today, would you like one of them?$"

ChartreuseCity_PokemonCenter_NPCScript1_Text_2:
# 30 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	.string "Thanks for taking one off of my\n"
	.string "hands, kid.$"

ChartreuseCity_PokemonCenter_NPCScript1_Text_3:
# 35 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	.string "{PLAYER} received Magikarp!\p"
	.string "Magikarp has been sent to your PC.$"

ChartreuseCity_PokemonCenter_NPCScript1_Text_4:
# 38 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	.string "{PLAYER} received Magikarp!\p"
	.string "Magikarp has been added to your party.$"

ChartreuseCity_PokemonCenter_NPCScript1_Text_5:
# 45 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	.string "Your loss, kid.$"

ChartreuseCity_PokemonCenter_NPCScript2_Text_0:
# 54 "data/maps/ChartreuseCity_PokemonCenter/scripts.pory"
	.string "They need to put a Pokémon Center\n"
	.string "between here and Marigold!\p"
	.string "I can't believe how long it took me\n"
	.string "to get here.$"
