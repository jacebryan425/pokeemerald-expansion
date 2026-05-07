Route1_MapScripts::
# 2 "data/maps/Route1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route1/scripts.pory"
	compare VAR_MARIGOLD_TOWN_STATE, 1
	goto_if_eq Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/Route1/scripts.pory"
	setflag FLAG_HIDE_POTION_NPC
# 5 "data/maps/Route1/scripts.pory"
	removeobject POTION_NPC
	return


Route1_EventScript_Sign::
# 11 "data/maps/Route1/scripts.pory"
	lock
# 12 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Sign_Text_0
# 13 "data/maps/Route1/scripts.pory"
	release
	return


Route1_EventScript_TrainerTip1::
# 17 "data/maps/Route1/scripts.pory"
	lock
# 18 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_TrainerTip1_Text_0
# 22 "data/maps/Route1/scripts.pory"
	release
	return


Route1_EventScript_TrainerTip2::
# 26 "data/maps/Route1/scripts.pory"
	lock
# 27 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_TrainerTip2_Text_0
# 31 "data/maps/Route1/scripts.pory"
	release
	return


Route1_EventScript_TrainerTip3::
# 35 "data/maps/Route1/scripts.pory"
	lock
# 36 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_TrainerTip3_Text_0
# 40 "data/maps/Route1/scripts.pory"
	release
	return


Route1_EventScript_Zigzagoon1::
# 44 "data/maps/Route1/scripts.pory"
	lock
# 45 "data/maps/Route1/scripts.pory"
	compare VAR_ROUTE_1_STATE, 1
	goto_if_eq Route1_EventScript_Zigzagoon1_2
# 84 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 85 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Zigzagoon1_Text_0
# 86 "data/maps/Route1/scripts.pory"
	waitmoncry
Route1_EventScript_Zigzagoon1_1:
# 88 "data/maps/Route1/scripts.pory"
	release
	return

Route1_EventScript_Zigzagoon1_2:
# 46 "data/maps/Route1/scripts.pory"
	setwildbattle SPECIES_ZIGZAGOON, 3, ITEM_NONE
# 47 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_ENCOUNTER
# 48 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Zigzagoon1_Text_0
# 49 "data/maps/Route1/scripts.pory"
	waitmoncry
# 50 "data/maps/Route1/scripts.pory"
	dowildbattle
# 51 "data/maps/Route1/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 52 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route1_EventScript_Zigzagoon1_5
# 52 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route1_EventScript_Zigzagoon1_5
# 52 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route1_EventScript_Zigzagoon1_5
	goto Route1_EventScript_Zigzagoon1_1

Route1_EventScript_Zigzagoon1_5:
# 53 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_WEAK
# 54 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Zigzagoon1_Text_1
# 55 "data/maps/Route1/scripts.pory"
	waitmoncry
# 56 "data/maps/Route1/scripts.pory"
	closemessage
# 57 "data/maps/Route1/scripts.pory"
	delay 30
# 58 "data/maps/Route1/scripts.pory"
	applymovement ZIGZAGOON_1, Route1_EventScript_Zigzagoon1_Movement_0
# 59 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route1/scripts.pory"
	setflag FLAG_HIDE_ZIGZAGOON_1
# 61 "data/maps/Route1/scripts.pory"
	removeobject ZIGZAGOON_1
# 62 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_Zigzagoon1_Movement_1
# 63 "data/maps/Route1/scripts.pory"
	applymovement ZIGZAGOON_2, Route1_EventScript_Zigzagoon1_Movement_2
# 64 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route1/scripts.pory"
	setwildbattle SPECIES_ZIGZAGOON, 3, ITEM_NONE
# 66 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_ENCOUNTER
# 67 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Zigzagoon1_Text_0
# 68 "data/maps/Route1/scripts.pory"
	waitmoncry
# 69 "data/maps/Route1/scripts.pory"
	dowildbattle
# 70 "data/maps/Route1/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 71 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route1_EventScript_Zigzagoon1_11
# 71 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route1_EventScript_Zigzagoon1_11
# 71 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route1_EventScript_Zigzagoon1_11
	goto Route1_EventScript_Zigzagoon1_1

Route1_EventScript_Zigzagoon1_11:
# 72 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_WEAK
# 73 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Zigzagoon1_Text_1
# 74 "data/maps/Route1/scripts.pory"
	waitmoncry
# 75 "data/maps/Route1/scripts.pory"
	closemessage
# 76 "data/maps/Route1/scripts.pory"
	delay 30
# 77 "data/maps/Route1/scripts.pory"
	applymovement ZIGZAGOON_2, Route1_EventScript_Zigzagoon1_Movement_0
# 78 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route1/scripts.pory"
	setflag FLAG_HIDE_ZIGZAGOON_2
# 80 "data/maps/Route1/scripts.pory"
	removeobject ZIGZAGOON_2
	goto Route1_EventScript_Zigzagoon1_1


Route1_EventScript_Zigzagoon2::
# 92 "data/maps/Route1/scripts.pory"
	lock
# 93 "data/maps/Route1/scripts.pory"
	compare VAR_ROUTE_1_STATE, 1
	goto_if_eq Route1_EventScript_Zigzagoon2_2
# 136 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 137 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Zigzagoon1_Text_0
# 138 "data/maps/Route1/scripts.pory"
	waitmoncry
Route1_EventScript_Zigzagoon2_1:
# 140 "data/maps/Route1/scripts.pory"
	release
	return

Route1_EventScript_Zigzagoon2_2:
# 94 "data/maps/Route1/scripts.pory"
	setwildbattle SPECIES_ZIGZAGOON, 3, ITEM_NONE
# 95 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_ENCOUNTER
# 96 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Zigzagoon1_Text_0
# 97 "data/maps/Route1/scripts.pory"
	waitmoncry
# 98 "data/maps/Route1/scripts.pory"
	dowildbattle
# 99 "data/maps/Route1/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 100 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route1_EventScript_Zigzagoon2_5
# 100 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route1_EventScript_Zigzagoon2_5
# 100 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route1_EventScript_Zigzagoon2_5
	goto Route1_EventScript_Zigzagoon2_1

Route1_EventScript_Zigzagoon2_5:
# 101 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_WEAK
# 102 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Zigzagoon1_Text_1
# 103 "data/maps/Route1/scripts.pory"
	waitmoncry
# 104 "data/maps/Route1/scripts.pory"
	closemessage
# 105 "data/maps/Route1/scripts.pory"
	delay 30
# 106 "data/maps/Route1/scripts.pory"
	applymovement ZIGZAGOON_2, Route1_EventScript_Zigzagoon1_Movement_0
# 107 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 108 "data/maps/Route1/scripts.pory"
	setflag FLAG_HIDE_ZIGZAGOON_2
# 109 "data/maps/Route1/scripts.pory"
	removeobject ZIGZAGOON_2
# 110 "data/maps/Route1/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq Route1_EventScript_Zigzagoon2_12
# 114 "data/maps/Route1/scripts.pory"
	applymovement ZIGZAGOON_1, Route1_EventScript_Zigzagoon2_Movement_1
# 115 "data/maps/Route1/scripts.pory"
	waitmovement 0
Route1_EventScript_Zigzagoon2_11:
# 117 "data/maps/Route1/scripts.pory"
	setwildbattle SPECIES_ZIGZAGOON, 3, ITEM_NONE
# 118 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_ENCOUNTER
# 119 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Zigzagoon1_Text_0
# 120 "data/maps/Route1/scripts.pory"
	waitmoncry
# 121 "data/maps/Route1/scripts.pory"
	dowildbattle
# 122 "data/maps/Route1/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 123 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route1_EventScript_Zigzagoon2_15
# 123 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route1_EventScript_Zigzagoon2_15
# 123 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route1_EventScript_Zigzagoon2_15
	goto Route1_EventScript_Zigzagoon2_1

Route1_EventScript_Zigzagoon2_12:
# 111 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_Zigzagoon2_Movement_0
# 112 "data/maps/Route1/scripts.pory"
	waitmovement 0
	goto Route1_EventScript_Zigzagoon2_11

Route1_EventScript_Zigzagoon2_15:
# 124 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_WEAK
# 125 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Zigzagoon1_Text_1
# 126 "data/maps/Route1/scripts.pory"
	waitmoncry
# 127 "data/maps/Route1/scripts.pory"
	closemessage
# 128 "data/maps/Route1/scripts.pory"
	delay 30
# 129 "data/maps/Route1/scripts.pory"
	applymovement ZIGZAGOON_1, Route1_EventScript_Zigzagoon1_Movement_0
# 130 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 131 "data/maps/Route1/scripts.pory"
	setflag FLAG_HIDE_ZIGZAGOON_1
# 132 "data/maps/Route1/scripts.pory"
	removeobject ZIGZAGOON_1
	goto Route1_EventScript_Zigzagoon2_1


Route1_EventScript_PotionNPC::
# 144 "data/maps/Route1/scripts.pory"
	lock
# 145 "data/maps/Route1/scripts.pory"
	faceplayer
# 146 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_GAVE_POTION, Route1_EventScript_PotionNPC_2
# 150 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_HIDE_ZIGZAGOON_1, Route1_EventScript_PotionNPC_9
Route1_EventScript_PotionNPC_8:
# 162 "data/maps/Route1/scripts.pory"
	compare VAR_ROUTE_1_STATE, 1
	goto_if_eq Route1_EventScript_PotionNPC_4
# 166 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_RECEIVED_DEX_FROM_ASPEN, Route1_EventScript_PotionNPC_5
# 175 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_PotionNPC_Text_4
Route1_EventScript_PotionNPC_1:
# 179 "data/maps/Route1/scripts.pory"
	release
	return

Route1_EventScript_PotionNPC_2:
# 147 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_PotionNPC_Text_0
	goto Route1_EventScript_PotionNPC_1

Route1_EventScript_PotionNPC_3:
# 151 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_PotionNPC_Text_1
# 157 "data/maps/Route1/scripts.pory"
	giveitem ITEM_POTION, 5
# 158 "data/maps/Route1/scripts.pory"
	setflag FLAG_GAVE_POTION
# 159 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_PotionNPC_Text_0
	goto Route1_EventScript_PotionNPC_1

Route1_EventScript_PotionNPC_4:
# 163 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_PotionNPC_Text_2
	goto Route1_EventScript_PotionNPC_1

Route1_EventScript_PotionNPC_5:
# 167 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_PotionNPC_Text_3
# 173 "data/maps/Route1/scripts.pory"
	addvar VAR_ROUTE_1_STATE, 1
	goto Route1_EventScript_PotionNPC_1

Route1_EventScript_PotionNPC_9:
# 150 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_HIDE_ZIGZAGOON_2, Route1_EventScript_PotionNPC_3
	goto Route1_EventScript_PotionNPC_8


Route1_EventScript_Bobby::
# 183 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_BOBBY_ROUTE1, Bobby_Intro, Bobby_Outro
# 184 "data/maps/Route1/scripts.pory"
	msgbox PostBattle_Bobby, MSGBOX_AUTOCLOSE
# 185 "data/maps/Route1/scripts.pory"
	waitmessage
	end


Route1_EventScript_Eli::
# 190 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ELI_ROUTE1, Eli_Intro, Eli_Outro
# 191 "data/maps/Route1/scripts.pory"
	msgbox PostBattle_Eli, MSGBOX_AUTOCLOSE
# 192 "data/maps/Route1/scripts.pory"
	waitmessage
	end


# 58 "data/maps/Route1/scripts.pory"
Route1_EventScript_Zigzagoon1_Movement_0:
# 58 "data/maps/Route1/scripts.pory"
	walk_left
# 58 "data/maps/Route1/scripts.pory"
	walk_left
# 58 "data/maps/Route1/scripts.pory"
	walk_left
# 58 "data/maps/Route1/scripts.pory"
	walk_left
# 58 "data/maps/Route1/scripts.pory"
	walk_down
# 58 "data/maps/Route1/scripts.pory"
	walk_down
# 58 "data/maps/Route1/scripts.pory"
	walk_down
# 58 "data/maps/Route1/scripts.pory"
	walk_down
# 58 "data/maps/Route1/scripts.pory"
	walk_down
# 58 "data/maps/Route1/scripts.pory"
	walk_down
# 58 "data/maps/Route1/scripts.pory"
	walk_down
# 58 "data/maps/Route1/scripts.pory"
	walk_down
# 58 "data/maps/Route1/scripts.pory"
	walk_down
# 58 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 62 "data/maps/Route1/scripts.pory"
Route1_EventScript_Zigzagoon1_Movement_1:
# 62 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 63 "data/maps/Route1/scripts.pory"
Route1_EventScript_Zigzagoon1_Movement_2:
# 63 "data/maps/Route1/scripts.pory"
	face_up
	step_end

# 111 "data/maps/Route1/scripts.pory"
Route1_EventScript_Zigzagoon2_Movement_0:
# 111 "data/maps/Route1/scripts.pory"
	face_left
	step_end

# 114 "data/maps/Route1/scripts.pory"
Route1_EventScript_Zigzagoon2_Movement_1:
# 114 "data/maps/Route1/scripts.pory"
	walk_down
# 114 "data/maps/Route1/scripts.pory"
	walk_right
	step_end

Route1_EventScript_Sign_Text_0:
# 12 "data/maps/Route1/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Route 1.$"

Route1_EventScript_TrainerTip1_Text_0:
# 18 "data/maps/Route1/scripts.pory"
	.string "Be careful walking through the\n"
	.string "tall grass!\p"
	.string "Wild Pokémon could catch you off guard\n"
	.string "at any moment.$"

Route1_EventScript_TrainerTip2_Text_0:
# 27 "data/maps/Route1/scripts.pory"
	.string "Routes are full of fellow trainers\n"
	.string "looking to hone their skills.\p"
	.string "If one locks eyes with you,\n"
	.string "you must battle!$"

Route1_EventScript_TrainerTip3_Text_0:
# 36 "data/maps/Route1/scripts.pory"
	.string "This region is full of hidden areas.\p"
	.string "Use the skills you learn and\n"
	.string "a little bit of imagination to discover\l"
	.string "them all.$"

Route1_EventScript_Zigzagoon1_Text_0:
# 48 "data/maps/Route1/scripts.pory"
	.string "Zig-zig, Zigzagoon-goon!$"

Route1_EventScript_Zigzagoon1_Text_1:
# 54 "data/maps/Route1/scripts.pory"
	.string "Zig-za...goon...$"

Route1_EventScript_PotionNPC_Text_0:
# 147 "data/maps/Route1/scripts.pory"
	.string "Come visit me at the Marigold\n"
	.string "Poké Mart if you'd ever like to\l"
	.string "purchase more items.$"

Route1_EventScript_PotionNPC_Text_1:
# 151 "data/maps/Route1/scripts.pory"
	.string "Thank you for chasing off those\n"
	.string "Zigzagoon!\p"
	.string "Now I can get back to town in time\n"
	.string "for my shift.\p"
	.string "Here's something to express my\n"
	.string "gratitude.$"

Route1_EventScript_PotionNPC_Text_2:
# 163 "data/maps/Route1/scripts.pory"
	.string "Please chase those Zigzagoon off\n"
	.string "for me!\p"
	.string "I'm going to be late for my shift!$"

Route1_EventScript_PotionNPC_Text_3:
# 167 "data/maps/Route1/scripts.pory"
	.string "Those scary Zigzagoon chased me and\n"
	.string "then blocked off the path!\p"
	.string "How am I going to make it back to town?!\p"
	.string "Oh...that looks like a Pokédex!\n"
	.string "Surely you're strong enough to chase\l"
	.string "them off for me!$"

Route1_EventScript_PotionNPC_Text_4:
# 175 "data/maps/Route1/scripts.pory"
	.string "Those scary Zigzagoon chased me and\n"
	.string "then blocked off the path!\p"
	.string "How am I going to make it back to town?!$"

Bobby_Intro::
# 196 "data/maps/Route1/scripts.pory"
	.string "Are you from here?\n"
	.string "I haven't seen you around before.$"

Bobby_Outro::
# 201 "data/maps/Route1/scripts.pory"
	.string "Wow, you're strong!$"

PostBattle_Bobby::
# 205 "data/maps/Route1/scripts.pory"
	.string "I want to be as strong as you one day.$"

Eli_Intro::
# 209 "data/maps/Route1/scripts.pory"
	.string "Do you want to see my new Pokémon?$"

Eli_Outro::
# 213 "data/maps/Route1/scripts.pory"
	.string "No! My new Pokémon!$"

PostBattle_Eli::
# 217 "data/maps/Route1/scripts.pory"
	.string "Different Pokémon seem to show up\n"
	.string "here during different times of day.$"
