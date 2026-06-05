Route3_MapScripts::
# 2 "data/maps/Route3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/Route3/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route3_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route3/scripts.pory"
	compare VAR_ROUTE_3_STATE, 0
	goto_if_eq Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/Route3/scripts.pory"
	setflag FLAG_HIDE_RIVAL_ROUTE_3
# 5 "data/maps/Route3/scripts.pory"
	removeobject RIVAL_ROUTE3
	return

Route3_MapScripts_MAP_SCRIPT_ON_LOAD:
# 10 "data/maps/Route3/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


Route3_EventScript_Trigger1::
# 15 "data/maps/Route3/scripts.pory"
	lock
# 16 "data/maps/Route3/scripts.pory"
	playse SE_EXIT
# 17 "data/maps/Route3/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_ROUTE_3
# 18 "data/maps/Route3/scripts.pory"
	addobject RIVAL_ROUTE3
# 19 "data/maps/Route3/scripts.pory"
	waitse
# 20 "data/maps/Route3/scripts.pory"
	playse SE_PIN
# 21 "data/maps/Route3/scripts.pory"
	applymovement RIVAL_ROUTE3, Route3_EventScript_Trigger1_Movement_0
# 22 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 23 "data/maps/Route3/scripts.pory"
	waitse
# 24 "data/maps/Route3/scripts.pory"
	delay 30
# 25 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Trigger1_Text_0
# 26 "data/maps/Route3/scripts.pory"
	waitmessage
# 27 "data/maps/Route3/scripts.pory"
	closemessage
# 28 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_EventScript_Trigger1_Movement_1
# 29 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route3/scripts.pory"
	applymovement RIVAL_ROUTE3, Route3_EventScript_Trigger1_Movement_2
# 31 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route3/scripts.pory"
	call Route3_EventScript_Rival_FacingNorth
	return


Route3_EventScript_Trigger2::
# 37 "data/maps/Route3/scripts.pory"
	lock
# 38 "data/maps/Route3/scripts.pory"
	playse SE_EXIT
# 39 "data/maps/Route3/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_ROUTE_3
# 40 "data/maps/Route3/scripts.pory"
	addobject RIVAL_ROUTE3
# 41 "data/maps/Route3/scripts.pory"
	waitse
# 42 "data/maps/Route3/scripts.pory"
	playse SE_PIN
# 43 "data/maps/Route3/scripts.pory"
	applymovement RIVAL_ROUTE3, Route3_EventScript_Trigger1_Movement_0
# 44 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route3/scripts.pory"
	waitse
# 46 "data/maps/Route3/scripts.pory"
	delay 30
# 47 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Trigger1_Text_0
# 48 "data/maps/Route3/scripts.pory"
	waitmessage
# 49 "data/maps/Route3/scripts.pory"
	closemessage
# 50 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_EventScript_Trigger1_Movement_1
# 51 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route3/scripts.pory"
	applymovement RIVAL_ROUTE3, Route3_EventScript_Trigger2_Movement_0
# 53 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route3/scripts.pory"
	call Route3_EventScript_Rival_FacingNorth
	return


Route3_EventScript_Trigger3::
# 58 "data/maps/Route3/scripts.pory"
	lock
# 59 "data/maps/Route3/scripts.pory"
	playse SE_EXIT
# 60 "data/maps/Route3/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_ROUTE_3
# 61 "data/maps/Route3/scripts.pory"
	addobject RIVAL_ROUTE3
# 62 "data/maps/Route3/scripts.pory"
	waitse
# 63 "data/maps/Route3/scripts.pory"
	playse SE_PIN
# 64 "data/maps/Route3/scripts.pory"
	applymovement RIVAL_ROUTE3, Route3_EventScript_Trigger1_Movement_0
# 65 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route3/scripts.pory"
	waitse
# 67 "data/maps/Route3/scripts.pory"
	delay 30
# 68 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Trigger1_Text_0
# 69 "data/maps/Route3/scripts.pory"
	waitmessage
# 70 "data/maps/Route3/scripts.pory"
	closemessage
# 71 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_EventScript_Trigger3_Movement_0
# 72 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route3/scripts.pory"
	applymovement RIVAL_ROUTE3, Route3_EventScript_Trigger3_Movement_1
# 74 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route3/scripts.pory"
	call Route3_EventScript_Rival_FacingLeft
	return


Route3_EventScript_Rival_FacingNorth::
# 79 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Rival_FacingNorth_Text_0
# 85 "data/maps/Route3/scripts.pory"
	waitmessage
# 86 "data/maps/Route3/scripts.pory"
	closemessage
# 87 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 88 "data/maps/Route3/scripts.pory"
	delay 12
# 89 "data/maps/Route3/scripts.pory"
	playfanfare MUS_HEAL
# 90 "data/maps/Route3/scripts.pory"
	waitfanfare
# 91 "data/maps/Route3/scripts.pory"
	special HealPlayerParty
# 92 "data/maps/Route3/scripts.pory"
	delay 12
# 93 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 94 "data/maps/Route3/scripts.pory"
	delay 12
# 95 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Rival_FacingNorth_Text_1, MSGBOX_YESNO
# 102 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route3_EventScript_Rival_FacingNorth_2
# 105 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Rival_FacingNorth_Text_3
Route3_EventScript_Rival_FacingNorth_1:
# 123 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Rival_FacingNorth_Text_4, MSGBOX_YESNO
# 125 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route3_EventScript_Rival_FacingNorth_6
# 128 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Rival_FacingNorth_Text_6
Route3_EventScript_Rival_FacingNorth_5:
# 130 "data/maps/Route3/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 131 "data/maps/Route3/scripts.pory"
	checkplayergender
# 132 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route3_EventScript_Rival_FacingNorth_10
# 135 "data/maps/Route3/scripts.pory"
	trainerbattle_no_intro TRAINER_RYAN_ROUTE3, RivalOutro
Route3_EventScript_Rival_FacingNorth_9:
# 137 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route3_EventScript_Rival_FacingNorth_14
# 142 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Rival_FacingNorth_Text_8
Route3_EventScript_Rival_FacingNorth_13:
# 146 "data/maps/Route3/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 147 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Rival_FacingNorth_Text_9
# 148 "data/maps/Route3/scripts.pory"
	waitmessage
# 149 "data/maps/Route3/scripts.pory"
	closemessage
# 150 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 151 "data/maps/Route3/scripts.pory"
	delay 12
# 152 "data/maps/Route3/scripts.pory"
	playfanfare MUS_HEAL
# 153 "data/maps/Route3/scripts.pory"
	waitfanfare
# 154 "data/maps/Route3/scripts.pory"
	special HealPlayerParty
# 155 "data/maps/Route3/scripts.pory"
	delay 12
# 156 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 157 "data/maps/Route3/scripts.pory"
	delay 12
# 158 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Rival_FacingNorth_Text_10
# 160 "data/maps/Route3/scripts.pory"
	waitmessage
# 161 "data/maps/Route3/scripts.pory"
	closemessage
# 162 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_EventScript_Rival_FacingNorth_Movement_0
# 163 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 164 "data/maps/Route3/scripts.pory"
	applymovement RIVAL_ROUTE3, Route3_EventScript_Rival_FacingNorth_Movement_1
# 165 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 166 "data/maps/Route3/scripts.pory"
	setflag FLAG_HIDE_RIVAL_ROUTE_3
# 167 "data/maps/Route3/scripts.pory"
	removeobject RIVAL_ROUTE3
# 168 "data/maps/Route3/scripts.pory"
	addvar VAR_ROUTE_3_STATE, 1
# 169 "data/maps/Route3/scripts.pory"
	release
	return

Route3_EventScript_Rival_FacingNorth_2:
# 103 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Rival_FacingNorth_Text_2
	goto Route3_EventScript_Rival_FacingNorth_1

Route3_EventScript_Rival_FacingNorth_6:
# 126 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Rival_FacingNorth_Text_5
	goto Route3_EventScript_Rival_FacingNorth_5

Route3_EventScript_Rival_FacingNorth_10:
# 133 "data/maps/Route3/scripts.pory"
	trainerbattle_no_intro TRAINER_APRIL_ROUTE3, RivalOutro
	goto Route3_EventScript_Rival_FacingNorth_9

Route3_EventScript_Rival_FacingNorth_14:
# 138 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Rival_FacingNorth_Text_7
	goto Route3_EventScript_Rival_FacingNorth_13


Route3_EventScript_Rival_FacingLeft::
# 173 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Rival_FacingNorth_Text_0
# 179 "data/maps/Route3/scripts.pory"
	waitmessage
# 180 "data/maps/Route3/scripts.pory"
	closemessage
# 181 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 182 "data/maps/Route3/scripts.pory"
	delay 12
# 183 "data/maps/Route3/scripts.pory"
	playfanfare MUS_HEAL
# 184 "data/maps/Route3/scripts.pory"
	waitfanfare
# 185 "data/maps/Route3/scripts.pory"
	special HealPlayerParty
# 186 "data/maps/Route3/scripts.pory"
	delay 12
# 187 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 188 "data/maps/Route3/scripts.pory"
	delay 12
# 189 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Rival_FacingNorth_Text_1, MSGBOX_YESNO
# 196 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route3_EventScript_Rival_FacingLeft_2
# 199 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Rival_FacingLeft_Text_0
Route3_EventScript_Rival_FacingLeft_1:
# 217 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Rival_FacingNorth_Text_4, MSGBOX_YESNO
# 219 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route3_EventScript_Rival_FacingLeft_6
# 222 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Rival_FacingNorth_Text_6
Route3_EventScript_Rival_FacingLeft_5:
# 224 "data/maps/Route3/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 225 "data/maps/Route3/scripts.pory"
	checkplayergender
# 226 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route3_EventScript_Rival_FacingLeft_10
# 229 "data/maps/Route3/scripts.pory"
	trainerbattle_no_intro TRAINER_RYAN_ROUTE3, RivalOutro
Route3_EventScript_Rival_FacingLeft_9:
# 231 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route3_EventScript_Rival_FacingLeft_14
# 236 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Rival_FacingNorth_Text_8
Route3_EventScript_Rival_FacingLeft_13:
# 240 "data/maps/Route3/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 241 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Rival_FacingNorth_Text_9
# 242 "data/maps/Route3/scripts.pory"
	waitmessage
# 243 "data/maps/Route3/scripts.pory"
	closemessage
# 244 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 245 "data/maps/Route3/scripts.pory"
	delay 12
# 246 "data/maps/Route3/scripts.pory"
	playfanfare MUS_HEAL
# 247 "data/maps/Route3/scripts.pory"
	waitfanfare
# 248 "data/maps/Route3/scripts.pory"
	special HealPlayerParty
# 249 "data/maps/Route3/scripts.pory"
	delay 12
# 250 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 251 "data/maps/Route3/scripts.pory"
	delay 12
# 252 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Rival_FacingNorth_Text_10
# 254 "data/maps/Route3/scripts.pory"
	waitmessage
# 255 "data/maps/Route3/scripts.pory"
	closemessage
# 256 "data/maps/Route3/scripts.pory"
	applymovement RIVAL_ROUTE3, Route3_EventScript_Rival_FacingLeft_Movement_0
# 257 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 258 "data/maps/Route3/scripts.pory"
	setflag FLAG_HIDE_RIVAL_ROUTE_3
# 259 "data/maps/Route3/scripts.pory"
	removeobject RIVAL_ROUTE3
# 260 "data/maps/Route3/scripts.pory"
	addvar VAR_ROUTE_3_STATE, 1
# 261 "data/maps/Route3/scripts.pory"
	release
	return

Route3_EventScript_Rival_FacingLeft_2:
# 197 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Rival_FacingNorth_Text_2
	goto Route3_EventScript_Rival_FacingLeft_1

Route3_EventScript_Rival_FacingLeft_6:
# 220 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Rival_FacingNorth_Text_5
	goto Route3_EventScript_Rival_FacingLeft_5

Route3_EventScript_Rival_FacingLeft_10:
# 227 "data/maps/Route3/scripts.pory"
	trainerbattle_no_intro TRAINER_APRIL_ROUTE3, RivalOutro
	goto Route3_EventScript_Rival_FacingLeft_9

Route3_EventScript_Rival_FacingLeft_14:
# 232 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Rival_FacingNorth_Text_7
	goto Route3_EventScript_Rival_FacingLeft_13


Route3_TrainerScript_Tony::
# 270 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_TONY_ROUTE3, Tony_Intro, Tony_Outro
# 271 "data/maps/Route3/scripts.pory"
	msgbox PostBattle_Tony, MSGBOX_AUTOCLOSE
# 272 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_TrainerScript_Aaron::
# 290 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_AARON_ROUTE3, Aaron_Intro, Aaron_Outro
# 291 "data/maps/Route3/scripts.pory"
	msgbox PostBattle_Aaron, MSGBOX_AUTOCLOSE
# 292 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_TrainerScript_Christina::
# 309 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_CHRISTINA_ROUTE3, Christina_Intro, Christina_Outro
# 310 "data/maps/Route3/scripts.pory"
	msgbox PostBattle_Christina, MSGBOX_AUTOCLOSE
# 311 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_TrainerScript_Trevin::
# 330 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_TREVIN_ROUTE3, Trevin_Intro, Trevin_Outro
# 331 "data/maps/Route3/scripts.pory"
	msgbox PostBattle_Trevin, MSGBOX_AUTOCLOSE
# 332 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_NPCScript_1::
# 351 "data/maps/Route3/scripts.pory"
	lock
# 352 "data/maps/Route3/scripts.pory"
	faceplayer
# 353 "data/maps/Route3/scripts.pory"
	msgbox Route3_NPCScript_1_Text_0
# 357 "data/maps/Route3/scripts.pory"
	release
	return


Route3_NPCScript_2::
# 361 "data/maps/Route3/scripts.pory"
	lock
# 362 "data/maps/Route3/scripts.pory"
	faceplayer
# 363 "data/maps/Route3/scripts.pory"
	msgbox Route3_NPCScript_2_Text_0
# 366 "data/maps/Route3/scripts.pory"
	release
	return


Route3_NPCScript_3::
# 370 "data/maps/Route3/scripts.pory"
	lock
# 371 "data/maps/Route3/scripts.pory"
	faceplayer
# 372 "data/maps/Route3/scripts.pory"
	msgbox Route3_NPCScript_3_Text_0, MSGBOX_YESNO
# 376 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route3_NPCScript_3_2
# 391 "data/maps/Route3/scripts.pory"
	msgbox Route3_NPCScript_3_Text_3
Route3_NPCScript_3_1:
# 393 "data/maps/Route3/scripts.pory"
	release
	return

Route3_NPCScript_3_2:
# 377 "data/maps/Route3/scripts.pory"
	msgbox Route3_NPCScript_3_Text_1
# 378 "data/maps/Route3/scripts.pory"
	waitmessage
# 379 "data/maps/Route3/scripts.pory"
	closemessage
# 380 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 381 "data/maps/Route3/scripts.pory"
	delay 12
# 382 "data/maps/Route3/scripts.pory"
	playfanfare MUS_HEAL
# 383 "data/maps/Route3/scripts.pory"
	waitfanfare
# 384 "data/maps/Route3/scripts.pory"
	special HealPlayerParty
# 385 "data/maps/Route3/scripts.pory"
	delay 12
# 386 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 387 "data/maps/Route3/scripts.pory"
	delay 12
# 388 "data/maps/Route3/scripts.pory"
	msgbox Route3_NPCScript_3_Text_2
	goto Route3_NPCScript_3_1


Route3_SignScript_Location::
# 397 "data/maps/Route3/scripts.pory"
	lock
# 398 "data/maps/Route3/scripts.pory"
	msgbox Route3_SignScript_Location_Text_0
# 399 "data/maps/Route3/scripts.pory"
	release
	return


Route3_SignScript_TrainerTips1::
# 403 "data/maps/Route3/scripts.pory"
	lock
# 404 "data/maps/Route3/scripts.pory"
	msgbox Route3_SignScript_TrainerTips1_Text_0
# 407 "data/maps/Route3/scripts.pory"
	release
	return


Route3_SignScript_TrainerTips2::
# 411 "data/maps/Route3/scripts.pory"
	lock
# 412 "data/maps/Route3/scripts.pory"
	msgbox Route3_SignScript_TrainerTips2_Text_0
# 416 "data/maps/Route3/scripts.pory"
	release
	return


Route3_ItemScript_Potions::
# 420 "data/maps/Route3/scripts.pory"
	finditem ITEM_POTION, 3
# 421 "data/maps/Route3/scripts.pory"
	setflag FLAG_ITEM_ROUTE_3_POTIONS
	return


Route3_ItemScript_Repels::
# 425 "data/maps/Route3/scripts.pory"
	finditem ITEM_REPEL, 3
# 426 "data/maps/Route3/scripts.pory"
	setflag FLAG_ITEM_ROUTE_3_REPELS
	return


Route3_ItemScript_ParalyzeHeal::
# 430 "data/maps/Route3/scripts.pory"
	finditem ITEM_PARALYZE_HEAL, 1
# 431 "data/maps/Route3/scripts.pory"
	setflag FLAG_ITEM_ROUTE_3_PARALYZE_HEAL
	return


# 21 "data/maps/Route3/scripts.pory"
Route3_EventScript_Trigger1_Movement_0:
# 21 "data/maps/Route3/scripts.pory"
	emote_exclamation_mark
	step_end

# 28 "data/maps/Route3/scripts.pory"
Route3_EventScript_Trigger1_Movement_1:
# 28 "data/maps/Route3/scripts.pory"
	face_up
	step_end

# 30 "data/maps/Route3/scripts.pory"
Route3_EventScript_Trigger1_Movement_2:
# 30 "data/maps/Route3/scripts.pory"
	walk_down
	step_end

# 52 "data/maps/Route3/scripts.pory"
Route3_EventScript_Trigger2_Movement_0:
# 52 "data/maps/Route3/scripts.pory"
	walk_right
# 52 "data/maps/Route3/scripts.pory"
	walk_down
	step_end

# 71 "data/maps/Route3/scripts.pory"
Route3_EventScript_Trigger3_Movement_0:
# 71 "data/maps/Route3/scripts.pory"
	face_left
	step_end

# 73 "data/maps/Route3/scripts.pory"
Route3_EventScript_Trigger3_Movement_1:
# 73 "data/maps/Route3/scripts.pory"
	walk_down
# 73 "data/maps/Route3/scripts.pory"
	walk_right
	step_end

# 162 "data/maps/Route3/scripts.pory"
Route3_EventScript_Rival_FacingNorth_Movement_0:
# 162 "data/maps/Route3/scripts.pory"
	face_right
	step_end

# 164 "data/maps/Route3/scripts.pory"
Route3_EventScript_Rival_FacingNorth_Movement_1:
# 164 "data/maps/Route3/scripts.pory"
	walk_right
# 164 "data/maps/Route3/scripts.pory"
	walk_right
# 164 "data/maps/Route3/scripts.pory"
	walk_right
# 164 "data/maps/Route3/scripts.pory"
	walk_right
# 164 "data/maps/Route3/scripts.pory"
	walk_right
# 164 "data/maps/Route3/scripts.pory"
	walk_right
# 164 "data/maps/Route3/scripts.pory"
	walk_right
# 164 "data/maps/Route3/scripts.pory"
	walk_right
# 164 "data/maps/Route3/scripts.pory"
	walk_right
# 164 "data/maps/Route3/scripts.pory"
	walk_right
	step_end

# 256 "data/maps/Route3/scripts.pory"
Route3_EventScript_Rival_FacingLeft_Movement_0:
# 256 "data/maps/Route3/scripts.pory"
	walk_down
# 256 "data/maps/Route3/scripts.pory"
	walk_right
# 256 "data/maps/Route3/scripts.pory"
	walk_right
# 256 "data/maps/Route3/scripts.pory"
	walk_right
# 256 "data/maps/Route3/scripts.pory"
	walk_right
# 256 "data/maps/Route3/scripts.pory"
	walk_right
# 256 "data/maps/Route3/scripts.pory"
	walk_right
# 256 "data/maps/Route3/scripts.pory"
	walk_right
# 256 "data/maps/Route3/scripts.pory"
	walk_right
# 256 "data/maps/Route3/scripts.pory"
	walk_right
# 256 "data/maps/Route3/scripts.pory"
	walk_right
	step_end

Route3_EventScript_Trigger1_Text_0:
# 25 "data/maps/Route3/scripts.pory"
	.string "{PLAYER}!$"

Route3_EventScript_Rival_FacingNorth_Text_0:
# 79 "data/maps/Route3/scripts.pory"
	.string "It took some serious convincing,\n"
	.string "but Aspen gave me the new Pokédex, too!\p"
	.string "Isn't that great? Now we can be on\n"
	.string "an even playing field.\p"
	.string "{PLAYER}, you look kind of tired.\n"
	.string "Why don't I heal your Pokémon for you?$"

Route3_EventScript_Rival_FacingNorth_Text_1:
# 95 "data/maps/Route3/scripts.pory"
	.string "There, all done.\p"
	.string "We're about halfway to Chartreuse City.\n"
	.string "Once I get there, I plan on heading\l"
	.string "straight to the Gym to test my skills\l"
	.string "against their leader.\p"
	.string "You do know about the Gym Challenge,\n"
	.string "right, {PLAYER}?$"

Route3_EventScript_Rival_FacingNorth_Text_2:
# 103 "data/maps/Route3/scripts.pory"
	.string "Great! Saves me some explaining.$"

Route3_EventScript_Rival_FacingNorth_Text_3:
# 105 "data/maps/Route3/scripts.pory"
	.string "Really? I would have thought Aspen\n"
	.string "would have told you about it.\p"
	.string "Well, it's almost identical to the way\n"
	.string "it worked in Kanto.\p"
	.string "There are eight Gym Leaders throughout\n"
	.string "Admiro, and once you've defeated all of\l"
	.string "them, you'll be able to challenge the\l"
	.string "Elite Four at the Obsidian League.\p"
	.string "These are the four strongest trainers\n"
	.string "in the region, and it's no easy task.\p"
	.string "Once you've defeated them, you'll be\n"
	.string "granted access to areas of Admiro not\l"
	.string "accessible to the average trainer.\p"
	.string "What this means, {PLAYER}, is that in\n"
	.string "order to complete Aspen's Pokédex,\l"
	.string "we'll both need to start by working our\l"
	.string "way through the Gym Challenge.$"

Route3_EventScript_Rival_FacingNorth_Text_4:
# 123 "data/maps/Route3/scripts.pory"
	.string "Before I continue on, would you be up\n"
	.string "for a battle, {PLAYER}?$"

Route3_EventScript_Rival_FacingNorth_Text_5:
# 126 "data/maps/Route3/scripts.pory"
	.string "Great! I'm going to give my all!$"

Route3_EventScript_Rival_FacingNorth_Text_6:
# 128 "data/maps/Route3/scripts.pory"
	.string "Well, too bad. I wasn't asking!$"

Route3_EventScript_Rival_FacingNorth_Text_7:
# 138 "data/maps/Route3/scripts.pory"
	.string "Wow, that was a great battle!\n"
	.string "I can see why Aspen has such high\l"
	.string "hopes for you, {PLAYER}.$"

Route3_EventScript_Rival_FacingNorth_Text_8:
# 142 "data/maps/Route3/scripts.pory"
	.string "That was...surprisingly easy.\n"
	.string "I've gotta say, I expected a much\l"
	.string "tougher battle from you, {PLAYER}.$"

Route3_EventScript_Rival_FacingNorth_Text_9:
# 147 "data/maps/Route3/scripts.pory"
	.string "Here, let me heal your Pokémon again.$"

Route3_EventScript_Rival_FacingNorth_Text_10:
# 158 "data/maps/Route3/scripts.pory"
	.string "Well, I'll see you in Chartreuse City.\n"
	.string "Best of luck, {PLAYER}!$"

Route3_EventScript_Rival_FacingLeft_Text_0:
# 199 "data/maps/Route3/scripts.pory"
	.string "Really? I would have thought Aspen\n"
	.string "would have told you about it.\p"
	.string "Well, it's almost identical to the way\n"
	.string "it worked in Kanto.\p"
	.string "There are eight Gym Leaders throughout\n"
	.string "Admiro, and once you've defeated all of\l"
	.string "them, you'll be able to challenge the\l"
	.string "Elite Four at the Admiro League.\p"
	.string "These are the four strongest trainers\n"
	.string "in the region, and it's no easy task.\p"
	.string "Once you've defeated them, you'll be\n"
	.string "granted access to areas of Admiro not\l"
	.string "accessible to the average trainer.\p"
	.string "What this means, {PLAYER}, is that in\n"
	.string "order to complete Aspen's Pokédex,\l"
	.string "we'll both need to start by working our\l"
	.string "way through the Gym Challenge.$"

Route3_NPCScript_1_Text_0:
# 353 "data/maps/Route3/scripts.pory"
	.string "The trek from Marigold to Chartreuse is\n"
	.string "a lot longer than I thought it would be.\p"
	.string "I think I bit off a little more than\n"
	.string "I can chew.$"

Route3_NPCScript_2_Text_0:
# 363 "data/maps/Route3/scripts.pory"
	.string "I think I saw a house up in the\n"
	.string "distance, but I can't get to it since\l"
	.string "there's a tree blocking my way.$"

Route3_NPCScript_3_Text_0:
# 372 "data/maps/Route3/scripts.pory"
	.string "Whew...I need for rest for a second.\p"
	.string "I don't do well with these\n"
	.string "high-elevation hikes.\p"
	.string "Would you like to take a rest as well?$"

Route3_NPCScript_3_Text_1:
# 377 "data/maps/Route3/scripts.pory"
	.string "Good idea! Let's take a rest.$"

Route3_NPCScript_3_Text_2:
# 388 "data/maps/Route3/scripts.pory"
	.string "There, now you'll have the energy\n"
	.string "to take on whatever comes your way!$"

Route3_NPCScript_3_Text_3:
# 391 "data/maps/Route3/scripts.pory"
	.string "Look at you, Mr. Endurance.$"

Route3_SignScript_Location_Text_0:
# 398 "data/maps/Route3/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Route 3.$"

Route3_SignScript_TrainerTips1_Text_0:
# 404 "data/maps/Route3/scripts.pory"
	.string "You can register a Key Item to the\n"
	.string "Select button in your Bag.\p"
	.string "This is useful, take advantage of it!$"

Route3_SignScript_TrainerTips2_Text_0:
# 412 "data/maps/Route3/scripts.pory"
	.string "If you ever want one of your Pokémon to\n"
	.string "relearn one of it's old moves, go to\l"
	.string "your Pokémon menu and select the\l"
	.string "{COLOR RED}{SHADOW LIGHT_RED}LEARN MOVES{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} option.$"

RivalOutro::
# 264 "data/maps/Route3/scripts.pory"
	.string "I have a lot to learn from you,\n"
	.string "{PLAYER}.$"

Tony_Intro::
# 276 "data/maps/Route3/scripts.pory"
	.string "We're really out here in the middle\n"
	.string "of nowhere, huh?$"

Tony_Outro::
# 281 "data/maps/Route3/scripts.pory"
	.string "...I want to go home.$"

PostBattle_Tony::
# 285 "data/maps/Route3/scripts.pory"
	.string "How far is it to Chartreuse City?$"

Aaron_Intro::
# 296 "data/maps/Route3/scripts.pory"
	.string "Hey, do you want to battle me?$"

Aaron_Outro::
# 300 "data/maps/Route3/scripts.pory"
	.string "I regret asking.$"

PostBattle_Aaron::
# 304 "data/maps/Route3/scripts.pory"
	.string "I could really use some more practice.$"

Christina_Intro::
# 315 "data/maps/Route3/scripts.pory"
	.string "What's your favorite Pokémon?\n"
	.string "I have too many, I can't choose!$"

Christina_Outro::
# 320 "data/maps/Route3/scripts.pory"
	.string "You're mean!$"

PostBattle_Christina::
# 324 "data/maps/Route3/scripts.pory"
	.string "When there are this many Pokémon,\n"
	.string "how can you pick just one favorite?$"

Trevin_Intro::
# 336 "data/maps/Route3/scripts.pory"
	.string "I just got done hiking in Chartreuse\n"
	.string "Cave. How 'bout a battle?$"

Trevin_Outro::
# 341 "data/maps/Route3/scripts.pory"
	.string "My Geodude!$"

PostBattle_Trevin::
# 345 "data/maps/Route3/scripts.pory"
	.string "I guess I'll need to hike through\n"
	.string "again to heal up.$"
