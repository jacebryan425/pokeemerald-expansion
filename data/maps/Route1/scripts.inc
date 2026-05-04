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


Route1_EventScript_Zigzagoon1::
# 37 "data/maps/Route1/scripts.pory"
	lock
# 38 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_RECEIVED_DEX_FROM_ASPEN, Route1_EventScript_Zigzagoon1_2
# 77 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 78 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Zigzagoon1_Text_0
# 79 "data/maps/Route1/scripts.pory"
	waitmoncry
Route1_EventScript_Zigzagoon1_1:
# 81 "data/maps/Route1/scripts.pory"
	release
	return

Route1_EventScript_Zigzagoon1_2:
# 39 "data/maps/Route1/scripts.pory"
	setwildbattle SPECIES_ZIGZAGOON, 3, ITEM_NONE
# 40 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_ENCOUNTER
# 41 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Zigzagoon1_Text_0
# 42 "data/maps/Route1/scripts.pory"
	waitmoncry
# 43 "data/maps/Route1/scripts.pory"
	dowildbattle
# 44 "data/maps/Route1/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 45 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route1_EventScript_Zigzagoon1_5
# 45 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route1_EventScript_Zigzagoon1_5
# 45 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route1_EventScript_Zigzagoon1_5
	goto Route1_EventScript_Zigzagoon1_1

Route1_EventScript_Zigzagoon1_5:
# 46 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_WEAK
# 47 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Zigzagoon1_Text_1
# 48 "data/maps/Route1/scripts.pory"
	waitmoncry
# 49 "data/maps/Route1/scripts.pory"
	closemessage
# 50 "data/maps/Route1/scripts.pory"
	delay 30
# 51 "data/maps/Route1/scripts.pory"
	applymovement ZIGZAGOON_1, Route1_EventScript_Zigzagoon1_Movement_0
# 52 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 53 "data/maps/Route1/scripts.pory"
	setflag FLAG_HIDE_ZIGZAGOON_1
# 54 "data/maps/Route1/scripts.pory"
	removeobject ZIGZAGOON_1
# 55 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_Zigzagoon1_Movement_1
# 56 "data/maps/Route1/scripts.pory"
	applymovement ZIGZAGOON_2, Route1_EventScript_Zigzagoon1_Movement_2
# 57 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route1/scripts.pory"
	setwildbattle SPECIES_ZIGZAGOON, 3, ITEM_NONE
# 59 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_ENCOUNTER
# 60 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Zigzagoon1_Text_0
# 61 "data/maps/Route1/scripts.pory"
	waitmoncry
# 62 "data/maps/Route1/scripts.pory"
	dowildbattle
# 63 "data/maps/Route1/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 64 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route1_EventScript_Zigzagoon1_11
# 64 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route1_EventScript_Zigzagoon1_11
# 64 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route1_EventScript_Zigzagoon1_11
	goto Route1_EventScript_Zigzagoon1_1

Route1_EventScript_Zigzagoon1_11:
# 65 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_WEAK
# 66 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Zigzagoon1_Text_1
# 67 "data/maps/Route1/scripts.pory"
	waitmoncry
# 68 "data/maps/Route1/scripts.pory"
	closemessage
# 69 "data/maps/Route1/scripts.pory"
	delay 30
# 70 "data/maps/Route1/scripts.pory"
	applymovement ZIGZAGOON_2, Route1_EventScript_Zigzagoon1_Movement_0
# 71 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route1/scripts.pory"
	setflag FLAG_HIDE_ZIGZAGOON_2
# 73 "data/maps/Route1/scripts.pory"
	removeobject ZIGZAGOON_2
	goto Route1_EventScript_Zigzagoon1_1


Route1_EventScript_Zigzagoon2::
# 85 "data/maps/Route1/scripts.pory"
	lock
# 86 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_RECEIVED_DEX_FROM_ASPEN, Route1_EventScript_Zigzagoon2_2
# 129 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 130 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Zigzagoon1_Text_0
# 131 "data/maps/Route1/scripts.pory"
	waitmoncry
Route1_EventScript_Zigzagoon2_1:
# 133 "data/maps/Route1/scripts.pory"
	release
	return

Route1_EventScript_Zigzagoon2_2:
# 87 "data/maps/Route1/scripts.pory"
	setwildbattle SPECIES_ZIGZAGOON, 3, ITEM_NONE
# 88 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_ENCOUNTER
# 89 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Zigzagoon1_Text_0
# 90 "data/maps/Route1/scripts.pory"
	waitmoncry
# 91 "data/maps/Route1/scripts.pory"
	dowildbattle
# 92 "data/maps/Route1/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 93 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route1_EventScript_Zigzagoon2_5
# 93 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route1_EventScript_Zigzagoon2_5
# 93 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route1_EventScript_Zigzagoon2_5
	goto Route1_EventScript_Zigzagoon2_1

Route1_EventScript_Zigzagoon2_5:
# 94 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_WEAK
# 95 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Zigzagoon1_Text_1
# 96 "data/maps/Route1/scripts.pory"
	waitmoncry
# 97 "data/maps/Route1/scripts.pory"
	closemessage
# 98 "data/maps/Route1/scripts.pory"
	delay 30
# 99 "data/maps/Route1/scripts.pory"
	applymovement ZIGZAGOON_2, Route1_EventScript_Zigzagoon1_Movement_0
# 100 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route1/scripts.pory"
	setflag FLAG_HIDE_ZIGZAGOON_2
# 102 "data/maps/Route1/scripts.pory"
	removeobject ZIGZAGOON_2
# 103 "data/maps/Route1/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq Route1_EventScript_Zigzagoon2_12
# 107 "data/maps/Route1/scripts.pory"
	applymovement ZIGZAGOON_1, Route1_EventScript_Zigzagoon2_Movement_1
# 108 "data/maps/Route1/scripts.pory"
	waitmovement 0
Route1_EventScript_Zigzagoon2_11:
# 110 "data/maps/Route1/scripts.pory"
	setwildbattle SPECIES_ZIGZAGOON, 3, ITEM_NONE
# 111 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_ENCOUNTER
# 112 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Zigzagoon1_Text_0
# 113 "data/maps/Route1/scripts.pory"
	waitmoncry
# 114 "data/maps/Route1/scripts.pory"
	dowildbattle
# 115 "data/maps/Route1/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 116 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route1_EventScript_Zigzagoon2_15
# 116 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route1_EventScript_Zigzagoon2_15
# 116 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route1_EventScript_Zigzagoon2_15
	goto Route1_EventScript_Zigzagoon2_1

Route1_EventScript_Zigzagoon2_12:
# 104 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_Zigzagoon2_Movement_0
# 105 "data/maps/Route1/scripts.pory"
	waitmovement 0
	goto Route1_EventScript_Zigzagoon2_11

Route1_EventScript_Zigzagoon2_15:
# 117 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_WEAK
# 118 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Zigzagoon1_Text_1
# 119 "data/maps/Route1/scripts.pory"
	waitmoncry
# 120 "data/maps/Route1/scripts.pory"
	closemessage
# 121 "data/maps/Route1/scripts.pory"
	delay 30
# 122 "data/maps/Route1/scripts.pory"
	applymovement ZIGZAGOON_1, Route1_EventScript_Zigzagoon1_Movement_0
# 123 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 124 "data/maps/Route1/scripts.pory"
	setflag FLAG_HIDE_ZIGZAGOON_1
# 125 "data/maps/Route1/scripts.pory"
	removeobject ZIGZAGOON_1
	goto Route1_EventScript_Zigzagoon2_1


Route1_EventScript_PotionNPC::
# 137 "data/maps/Route1/scripts.pory"
	lock
# 138 "data/maps/Route1/scripts.pory"
	faceplayer
# 139 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_GAVE_POTION, Route1_EventScript_PotionNPC_2
# 143 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_HIDE_ZIGZAGOON_1, Route1_EventScript_PotionNPC_5
Route1_EventScript_PotionNPC_4:
# 155 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_PotionNPC_Text_2
Route1_EventScript_PotionNPC_1:
# 159 "data/maps/Route1/scripts.pory"
	release
	return

Route1_EventScript_PotionNPC_2:
# 140 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_PotionNPC_Text_0
	goto Route1_EventScript_PotionNPC_1

Route1_EventScript_PotionNPC_3:
# 144 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_PotionNPC_Text_1
# 149 "data/maps/Route1/scripts.pory"
	giveitem ITEM_POTION, 5
# 150 "data/maps/Route1/scripts.pory"
	setflag FLAG_GAVE_POTION
# 151 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_PotionNPC_Text_0
	goto Route1_EventScript_PotionNPC_1

Route1_EventScript_PotionNPC_5:
# 143 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_HIDE_ZIGZAGOON_2, Route1_EventScript_PotionNPC_3
	goto Route1_EventScript_PotionNPC_4


Route1_EventScript_Bobby::
# 163 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_BOBBY_ROUTE1, Bobby_Intro, Bobby_Outro
# 164 "data/maps/Route1/scripts.pory"
	msgbox PostBattle_Bobby, MSGBOX_AUTOCLOSE
# 165 "data/maps/Route1/scripts.pory"
	waitmessage
	end


Route1_EventScript_Eli::
# 170 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ELI_ROUTE1, Eli_Intro, Eli_Outro
# 171 "data/maps/Route1/scripts.pory"
	msgbox PostBattle_Eli, MSGBOX_AUTOCLOSE
# 172 "data/maps/Route1/scripts.pory"
	waitmessage
	end


# 51 "data/maps/Route1/scripts.pory"
Route1_EventScript_Zigzagoon1_Movement_0:
# 51 "data/maps/Route1/scripts.pory"
	walk_left
# 51 "data/maps/Route1/scripts.pory"
	walk_left
# 51 "data/maps/Route1/scripts.pory"
	walk_left
# 51 "data/maps/Route1/scripts.pory"
	walk_left
# 51 "data/maps/Route1/scripts.pory"
	walk_down
# 51 "data/maps/Route1/scripts.pory"
	walk_down
# 51 "data/maps/Route1/scripts.pory"
	walk_down
# 51 "data/maps/Route1/scripts.pory"
	walk_down
# 51 "data/maps/Route1/scripts.pory"
	walk_down
# 51 "data/maps/Route1/scripts.pory"
	walk_down
# 51 "data/maps/Route1/scripts.pory"
	walk_down
# 51 "data/maps/Route1/scripts.pory"
	walk_down
# 51 "data/maps/Route1/scripts.pory"
	walk_down
# 51 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 55 "data/maps/Route1/scripts.pory"
Route1_EventScript_Zigzagoon1_Movement_1:
# 55 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 56 "data/maps/Route1/scripts.pory"
Route1_EventScript_Zigzagoon1_Movement_2:
# 56 "data/maps/Route1/scripts.pory"
	face_up
	step_end

# 104 "data/maps/Route1/scripts.pory"
Route1_EventScript_Zigzagoon2_Movement_0:
# 104 "data/maps/Route1/scripts.pory"
	face_left
	step_end

# 107 "data/maps/Route1/scripts.pory"
Route1_EventScript_Zigzagoon2_Movement_1:
# 107 "data/maps/Route1/scripts.pory"
	walk_down
# 107 "data/maps/Route1/scripts.pory"
	walk_right
	step_end

Route1_EventScript_Sign_Text_0:
# 5 "data/maps/Route1/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Route 1.$"

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

Route1_EventScript_Zigzagoon1_Text_0:
# 41 "data/maps/Route1/scripts.pory"
	.string "Zig-zig, Zigzagoon-goon!$"

Route1_EventScript_Zigzagoon1_Text_1:
# 47 "data/maps/Route1/scripts.pory"
	.string "Zig-za...goon...$"

Route1_EventScript_PotionNPC_Text_0:
# 140 "data/maps/Route1/scripts.pory"
	.string "Come visit me at the Marigold\n"
	.string "Poké Mart if you'd ever like to\l"
	.string "purchase more items.$"

Route1_EventScript_PotionNPC_Text_1:
# 144 "data/maps/Route1/scripts.pory"
	.string "Thank you for fighting off those\n"
	.string "Zigzagoon!\l"
	.string "Now I can get back to town.\p"
	.string "Here's something to express my\n"
	.string "gratitude.$"

Route1_EventScript_PotionNPC_Text_2:
# 155 "data/maps/Route1/scripts.pory"
	.string "Those scary Zigzagoon chased me and\n"
	.string "then blocked off the path!\p"
	.string "How am I going to make it back to town?!$"

Bobby_Intro::
# 176 "data/maps/Route1/scripts.pory"
	.string "Are you from here?\n"
	.string "I haven't seen you around before.$"

Bobby_Outro::
# 181 "data/maps/Route1/scripts.pory"
	.string "Wow, you're strong!$"

PostBattle_Bobby::
# 185 "data/maps/Route1/scripts.pory"
	.string "I want to be as strong as you one day.$"

Eli_Intro::
# 189 "data/maps/Route1/scripts.pory"
	.string "Do you want to see my new Pokémon?$"

Eli_Outro::
# 193 "data/maps/Route1/scripts.pory"
	.string "No! My new Pokémon!$"

PostBattle_Eli::
# 197 "data/maps/Route1/scripts.pory"
	.string "Different Pokémon seem to show up\n"
	.string "here during different times of day.$"
