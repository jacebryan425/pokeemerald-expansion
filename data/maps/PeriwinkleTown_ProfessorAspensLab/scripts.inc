PeriwinkleTown_ProfessorAspensLab_MapScripts::
# 2 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PeriwinkleTown_ProfessorAspensLab_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PeriwinkleTown_ProfessorAspensLab_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	goto_if_set FLAG_HIDE_PROFESSOR_ASPEN, PeriwinkleTown_ProfessorAspensLab_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 7 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	setflag FLAG_HIDE_PROFESSOR_ASPEN_LAB
	return

PeriwinkleTown_ProfessorAspensLab_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	clearflag FLAG_HIDE_PROFESSOR_ASPEN_LAB
# 5 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	showobjectat 1, MAP_PERIWINKLE_TOWN_PROFESSOR_ASPENS_LAB
	return


PeriwinkleTown_ProfessorAspensLab_EventScript_Scientist::
# 13 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	lock
# 14 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	faceplayer
# 15 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	goto_if_set FLAG_HIDE_PROFESSOR_ASPEN, PeriwinkleTown_ProfessorAspensLab_EventScript_Scientist_2
# 21 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	msgbox PeriwinkleTown_ProfessorAspensLab_EventScript_Scientist_Text_1
PeriwinkleTown_ProfessorAspensLab_EventScript_Scientist_1:
# 26 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	release
	return

PeriwinkleTown_ProfessorAspensLab_EventScript_Scientist_2:
# 16 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	msgbox PeriwinkleTown_ProfessorAspensLab_EventScript_Scientist_Text_0
	goto PeriwinkleTown_ProfessorAspensLab_EventScript_Scientist_1


PeriwinkleTown_ProfessorAspensLab_EventScript_Dex::
# 30 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	lock
# 31 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	msgbox PeriwinkleTown_ProfessorAspensLab_EventScript_Dex_Text_0
# 34 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	release
	return


PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen::
# 38 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	lock
# 39 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	faceplayer
# 40 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	goto_if_set FLAG_RECEIVED_DEX_FROM_ASPEN, PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_2
# 45 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	msgbox PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Text_1
# 57 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	compare VAR_FACING == DIR_SOUTH, 0
	goto_if_ne PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_6
# 65 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Movement_1
# 67 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	waitmovement 0
PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_5:
# 69 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	delay 30
# 70 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	setflag FLAG_HIDE_DEX
# 71 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	removeobject POKEDEX
# 72 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	delay 30
# 73 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	compare VAR_FACING == DIR_SOUTH, 0
	goto_if_ne PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_10
# 82 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Movement_3
# 86 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	waitmovement 0
PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_9:
# 88 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	msgbox PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Text_2
# 89 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 90 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	waitfanfare
# 91 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 92 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 93 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	setflag FLAG_RECEIVED_DEX_FROM_ASPEN
# 94 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 95 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	msgbox PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Text_3
# 97 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 1
# 98 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	additem ITEM_POKE_BALL, 9
# 99 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	msgbox PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Text_4, MSGBOX_YESNO
# 103 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_14
# 106 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	msgbox PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Text_6
PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_13:
# 109 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	msgbox PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Text_7
PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_1:
# 117 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	release
	return

PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_2:
# 41 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	msgbox PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Text_0
	goto PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_1

PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_6:
# 58 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Movement_0
# 63 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	waitmovement 0
	goto PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_5

PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_10:
# 74 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Movement_2
# 80 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	waitmovement 0
	goto PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_9

PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_14:
# 104 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	msgbox PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Text_5
	goto PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_13


# 58 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Movement_0:
# 59 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	walk_right
# 60 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	walk_up
# 60 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	walk_up
# 61 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	walk_left
# 62 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	face_up
	step_end

# 65 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Movement_1:
# 66 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	walk_up
# 66 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	walk_up
	step_end

# 74 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Movement_2:
# 75 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	walk_right
# 76 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	walk_down
# 76 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	walk_down
# 77 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	walk_left
# 78 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	face_player
	step_end

# 82 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Movement_3:
# 83 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	walk_down
# 83 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	walk_down
# 84 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	face_player
	step_end

PeriwinkleTown_ProfessorAspensLab_EventScript_Scientist_Text_0:
# 16 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	.string "I've been working for Professor Aspen\n"
	.string "for a quite a while now.\p"
	.string "He's been a very good boss, and I\n"
	.string "get a pretty sweet benefits package.$"

PeriwinkleTown_ProfessorAspensLab_EventScript_Scientist_Text_1:
# 21 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	.string "Looking for Professor Aspen?\p"
	.string "He's not here.\p"
	.string "When he left, he told me he was\n"
	.string "going for a walk in Periwinkle Garden.$"

PeriwinkleTown_ProfessorAspensLab_EventScript_Dex_Text_0:
# 31 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	.string "It's a Pokédex, just like the one\n"
	.string "you had back in Kanto.\p"
	.string "This one looks way more advanced.$"

PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Text_0:
# 41 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	.string "How is your Pokédex progress coming\n"
	.string "along, {PLAYER}?\p"
	.string "We're rooting for you!$"

PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Text_1:
# 45 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	.string "Welcome to our research lab,\n"
	.string "{PLAYER}!\p"
	.string "I have something very exciting I would\n"
	.string "like to share with you.\p"
	.string "On my desk sits a highly advanced\n"
	.string "revision of the Pokédex.\p"
	.string "I've been saving it for a well-seasoned\l"
	.string "and experienced trainer.\p"
	.string "When Oak told me about your impressive\n"
	.string "completion of his Pokédex, I knew\l"
	.string "that you were the right person to\l"
	.string "entrust with it.$"

PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Text_2:
# 88 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	.string "{PLAYER} received Pokédex!$"

PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Text_3:
# 95 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	.string "Here are a few Poké Balls to help\n get you started.$"

PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Text_4:
# 99 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	.string "I trust that a trainer as skilled\n"
	.string "as yourself knows how to catch a\l"
	.string "wild Pokémon and won't need my help\l"
	.string "explaining, correct?$"

PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Text_5:
# 104 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	.string "Excellent, that will save us both time.$"

PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Text_6:
# 106 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	.string "Oh well, I'm sure you'll be able to\n figure it out.$"

PeriwinkleTown_ProfessorAspensLab_EventScript_Aspen_Text_7:
# 109 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	.string "{PLAYER}, I want to thank you\n"
	.string "for agreeing to help with our\l"
	.string "research.\p"
	.string "I encourage you to explore every\n"
	.string "corner of our region and fill as many\l"
	.string "pages of that Pokédex as possible.\p"
	.string "We're rooting for you!$"
