Route3_MapScripts::
# 2 "data/maps/Route3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route3/scripts.pory"
	compare VAR_ROUTE_3_STATE, 0
	goto_if_eq Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/Route3/scripts.pory"
	setflag FLAG_HIDE_APRIL_ROUTE_3
# 5 "data/maps/Route3/scripts.pory"
	removeobject APRIL
	return


Route3_EventScript_Trigger1::
# 11 "data/maps/Route3/scripts.pory"
	lock
# 12 "data/maps/Route3/scripts.pory"
	playse SE_EXIT
# 13 "data/maps/Route3/scripts.pory"
	clearflag FLAG_HIDE_APRIL_ROUTE_3
# 14 "data/maps/Route3/scripts.pory"
	addobject APRIL
# 15 "data/maps/Route3/scripts.pory"
	waitse
# 16 "data/maps/Route3/scripts.pory"
	playse SE_PIN
# 17 "data/maps/Route3/scripts.pory"
	applymovement APRIL, Route3_EventScript_Trigger1_Movement_0
# 18 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 19 "data/maps/Route3/scripts.pory"
	waitse
# 20 "data/maps/Route3/scripts.pory"
	delay 30
# 21 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Trigger1_Text_0
# 22 "data/maps/Route3/scripts.pory"
	waitmessage
# 23 "data/maps/Route3/scripts.pory"
	closemessage
# 24 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_EventScript_Trigger1_Movement_1
# 25 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 26 "data/maps/Route3/scripts.pory"
	applymovement APRIL, Route3_EventScript_Trigger1_Movement_2
# 27 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route3/scripts.pory"
	call Route3_EventScript_April_FacingNorth
	return


Route3_EventScript_Trigger2::
# 33 "data/maps/Route3/scripts.pory"
	lock
# 34 "data/maps/Route3/scripts.pory"
	playse SE_EXIT
# 35 "data/maps/Route3/scripts.pory"
	clearflag FLAG_HIDE_APRIL_ROUTE_3
# 36 "data/maps/Route3/scripts.pory"
	addobject APRIL
# 37 "data/maps/Route3/scripts.pory"
	waitse
# 38 "data/maps/Route3/scripts.pory"
	playse SE_PIN
# 39 "data/maps/Route3/scripts.pory"
	applymovement APRIL, Route3_EventScript_Trigger1_Movement_0
# 40 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route3/scripts.pory"
	waitse
# 42 "data/maps/Route3/scripts.pory"
	delay 30
# 43 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Trigger1_Text_0
# 44 "data/maps/Route3/scripts.pory"
	waitmessage
# 45 "data/maps/Route3/scripts.pory"
	closemessage
# 46 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_EventScript_Trigger1_Movement_1
# 47 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route3/scripts.pory"
	applymovement APRIL, Route3_EventScript_Trigger2_Movement_0
# 49 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route3/scripts.pory"
	call Route3_EventScript_April_FacingNorth
	return


Route3_EventScript_Trigger3::
# 54 "data/maps/Route3/scripts.pory"
	lock
# 55 "data/maps/Route3/scripts.pory"
	playse SE_EXIT
# 56 "data/maps/Route3/scripts.pory"
	clearflag FLAG_HIDE_APRIL_ROUTE_3
# 57 "data/maps/Route3/scripts.pory"
	addobject APRIL
# 58 "data/maps/Route3/scripts.pory"
	waitse
# 59 "data/maps/Route3/scripts.pory"
	playse SE_PIN
# 60 "data/maps/Route3/scripts.pory"
	applymovement APRIL, Route3_EventScript_Trigger1_Movement_0
# 61 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route3/scripts.pory"
	waitse
# 63 "data/maps/Route3/scripts.pory"
	delay 30
# 64 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Trigger1_Text_0
# 65 "data/maps/Route3/scripts.pory"
	waitmessage
# 66 "data/maps/Route3/scripts.pory"
	closemessage
# 67 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_EventScript_Trigger3_Movement_0
# 68 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route3/scripts.pory"
	applymovement APRIL, Route3_EventScript_Trigger3_Movement_1
# 70 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route3/scripts.pory"
	call Route3_EventScript_April_FacingLeft
	return


Route3_EventScript_April_FacingNorth::
# 75 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_0
# 81 "data/maps/Route3/scripts.pory"
	waitmessage
# 82 "data/maps/Route3/scripts.pory"
	closemessage
# 83 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 84 "data/maps/Route3/scripts.pory"
	delay 12
# 85 "data/maps/Route3/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 86 "data/maps/Route3/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 87 "data/maps/Route3/scripts.pory"
	special HealPlayerParty
# 88 "data/maps/Route3/scripts.pory"
	delay 12
# 89 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 90 "data/maps/Route3/scripts.pory"
	delay 12
# 91 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_1, MSGBOX_YESNO
# 98 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route3_EventScript_April_FacingNorth_2
# 101 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_3
Route3_EventScript_April_FacingNorth_1:
# 119 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_4, MSGBOX_YESNO
# 121 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route3_EventScript_April_FacingNorth_6
# 124 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_6
Route3_EventScript_April_FacingNorth_5:
# 126 "data/maps/Route3/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 127 "data/maps/Route3/scripts.pory"
	trainerbattle_no_intro TRAINER_APRIL_ROUTE3, AprilOutro
# 128 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route3_EventScript_April_FacingNorth_10
# 133 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_8
Route3_EventScript_April_FacingNorth_9:
# 137 "data/maps/Route3/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 138 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_9
# 139 "data/maps/Route3/scripts.pory"
	waitmessage
# 140 "data/maps/Route3/scripts.pory"
	closemessage
# 141 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 142 "data/maps/Route3/scripts.pory"
	delay 12
# 143 "data/maps/Route3/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 144 "data/maps/Route3/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 145 "data/maps/Route3/scripts.pory"
	special HealPlayerParty
# 146 "data/maps/Route3/scripts.pory"
	delay 12
# 147 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 148 "data/maps/Route3/scripts.pory"
	delay 12
# 149 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_10
# 151 "data/maps/Route3/scripts.pory"
	waitmessage
# 152 "data/maps/Route3/scripts.pory"
	closemessage
# 153 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_EventScript_April_FacingNorth_Movement_0
# 154 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 155 "data/maps/Route3/scripts.pory"
	applymovement APRIL, Route3_EventScript_April_FacingNorth_Movement_1
# 156 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 157 "data/maps/Route3/scripts.pory"
	setflag FLAG_HIDE_APRIL_ROUTE_3
# 158 "data/maps/Route3/scripts.pory"
	removeobject APRIL
# 159 "data/maps/Route3/scripts.pory"
	addvar VAR_ROUTE_3_STATE, 1
# 160 "data/maps/Route3/scripts.pory"
	release
	return

Route3_EventScript_April_FacingNorth_2:
# 99 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_2
	goto Route3_EventScript_April_FacingNorth_1

Route3_EventScript_April_FacingNorth_6:
# 122 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_5
	goto Route3_EventScript_April_FacingNorth_5

Route3_EventScript_April_FacingNorth_10:
# 129 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_7
	goto Route3_EventScript_April_FacingNorth_9


Route3_EventScript_April_FacingLeft::
# 164 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_0
# 170 "data/maps/Route3/scripts.pory"
	waitmessage
# 171 "data/maps/Route3/scripts.pory"
	closemessage
# 172 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 173 "data/maps/Route3/scripts.pory"
	delay 12
# 174 "data/maps/Route3/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 175 "data/maps/Route3/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 176 "data/maps/Route3/scripts.pory"
	special HealPlayerParty
# 177 "data/maps/Route3/scripts.pory"
	delay 12
# 178 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 179 "data/maps/Route3/scripts.pory"
	delay 12
# 180 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_1, MSGBOX_YESNO
# 187 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route3_EventScript_April_FacingLeft_2
# 190 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_3
Route3_EventScript_April_FacingLeft_1:
# 208 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_4, MSGBOX_YESNO
# 210 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route3_EventScript_April_FacingLeft_6
# 213 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_6
Route3_EventScript_April_FacingLeft_5:
# 215 "data/maps/Route3/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 216 "data/maps/Route3/scripts.pory"
	trainerbattle_no_intro TRAINER_APRIL_ROUTE3, AprilOutro
# 217 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route3_EventScript_April_FacingLeft_10
# 222 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_8
Route3_EventScript_April_FacingLeft_9:
# 226 "data/maps/Route3/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 227 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_9
# 228 "data/maps/Route3/scripts.pory"
	waitmessage
# 229 "data/maps/Route3/scripts.pory"
	closemessage
# 230 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 231 "data/maps/Route3/scripts.pory"
	delay 12
# 232 "data/maps/Route3/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 233 "data/maps/Route3/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 234 "data/maps/Route3/scripts.pory"
	special HealPlayerParty
# 235 "data/maps/Route3/scripts.pory"
	delay 12
# 236 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 237 "data/maps/Route3/scripts.pory"
	delay 12
# 238 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_10
# 240 "data/maps/Route3/scripts.pory"
	waitmessage
# 241 "data/maps/Route3/scripts.pory"
	closemessage
# 242 "data/maps/Route3/scripts.pory"
	applymovement APRIL, Route3_EventScript_April_FacingLeft_Movement_0
# 243 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 244 "data/maps/Route3/scripts.pory"
	setflag FLAG_HIDE_APRIL_ROUTE_3
# 245 "data/maps/Route3/scripts.pory"
	removeobject APRIL
# 246 "data/maps/Route3/scripts.pory"
	addvar VAR_ROUTE_3_STATE, 1
# 247 "data/maps/Route3/scripts.pory"
	release
	return

Route3_EventScript_April_FacingLeft_2:
# 188 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_2
	goto Route3_EventScript_April_FacingLeft_1

Route3_EventScript_April_FacingLeft_6:
# 211 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_5
	goto Route3_EventScript_April_FacingLeft_5

Route3_EventScript_April_FacingLeft_10:
# 218 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_7
	goto Route3_EventScript_April_FacingLeft_9


Route3_TrainerScript_Tony::
# 256 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_TONY_ROUTE3, Tony_Intro, Tony_Outro
# 257 "data/maps/Route3/scripts.pory"
	msgbox PostBattle_Tony, MSGBOX_AUTOCLOSE
# 258 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_TrainerScript_Aaron::
# 276 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_AARON_ROUTE3, Aaron_Intro, Aaron_Outro
# 277 "data/maps/Route3/scripts.pory"
	msgbox PostBattle_Aaron, MSGBOX_AUTOCLOSE
# 278 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_TrainerScript_Christina::
# 295 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_CHRISTINA_ROUTE3, Christina_Intro, Christina_Outro
# 296 "data/maps/Route3/scripts.pory"
	msgbox PostBattle_Christina, MSGBOX_AUTOCLOSE
# 297 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_TrainerScript_Trevin::
# 316 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_TREVIN_ROUTE3, Trevin_Intro, Trevin_Outro
# 317 "data/maps/Route3/scripts.pory"
	msgbox PostBattle_Trevin, MSGBOX_AUTOCLOSE
# 318 "data/maps/Route3/scripts.pory"
	waitmessage
	end


Route3_NPCScript_1::
# 337 "data/maps/Route3/scripts.pory"
	lock
# 338 "data/maps/Route3/scripts.pory"
	faceplayer
# 339 "data/maps/Route3/scripts.pory"
	msgbox Route3_NPCScript_1_Text_0
# 343 "data/maps/Route3/scripts.pory"
	release
	return


Route3_NPCScript_2::
# 347 "data/maps/Route3/scripts.pory"
	lock
# 348 "data/maps/Route3/scripts.pory"
	faceplayer
# 349 "data/maps/Route3/scripts.pory"
	msgbox Route3_NPCScript_2_Text_0
# 352 "data/maps/Route3/scripts.pory"
	release
	return


Route3_NPCScript_3::
# 356 "data/maps/Route3/scripts.pory"
	lock
# 357 "data/maps/Route3/scripts.pory"
	faceplayer
# 358 "data/maps/Route3/scripts.pory"
	msgbox Route3_NPCScript_3_Text_0, MSGBOX_YESNO
# 362 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route3_NPCScript_3_2
# 377 "data/maps/Route3/scripts.pory"
	msgbox Route3_NPCScript_3_Text_3
Route3_NPCScript_3_1:
# 379 "data/maps/Route3/scripts.pory"
	release
	return

Route3_NPCScript_3_2:
# 363 "data/maps/Route3/scripts.pory"
	msgbox Route3_NPCScript_3_Text_1
# 364 "data/maps/Route3/scripts.pory"
	waitmessage
# 365 "data/maps/Route3/scripts.pory"
	closemessage
# 366 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 367 "data/maps/Route3/scripts.pory"
	delay 12
# 368 "data/maps/Route3/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 369 "data/maps/Route3/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 370 "data/maps/Route3/scripts.pory"
	special HealPlayerParty
# 371 "data/maps/Route3/scripts.pory"
	delay 12
# 372 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 373 "data/maps/Route3/scripts.pory"
	delay 12
# 374 "data/maps/Route3/scripts.pory"
	msgbox Route3_NPCScript_3_Text_2
	goto Route3_NPCScript_3_1


Route3_SignScript_Location::
# 383 "data/maps/Route3/scripts.pory"
	lock
# 384 "data/maps/Route3/scripts.pory"
	msgbox Route3_SignScript_Location_Text_0
# 385 "data/maps/Route3/scripts.pory"
	release
	return


Route3_SignScript_TrainerTips1::
# 389 "data/maps/Route3/scripts.pory"
	lock
# 390 "data/maps/Route3/scripts.pory"
	msgbox Route3_SignScript_TrainerTips1_Text_0
# 393 "data/maps/Route3/scripts.pory"
	release
	return


Route3_SignScript_TrainerTips2::
# 397 "data/maps/Route3/scripts.pory"
	lock
# 398 "data/maps/Route3/scripts.pory"
	msgbox Route3_SignScript_TrainerTips2_Text_0
# 402 "data/maps/Route3/scripts.pory"
	release
	return


Route3_ItemScript_Potions::
# 406 "data/maps/Route3/scripts.pory"
	finditem ITEM_POTION, 3
# 407 "data/maps/Route3/scripts.pory"
	setflag FLAG_ITEM_ROUTE_3_POTIONS
	return


Route3_ItemScript_Repels::
# 411 "data/maps/Route3/scripts.pory"
	finditem ITEM_REPEL, 3
# 412 "data/maps/Route3/scripts.pory"
	setflag FLAG_ITEM_ROUTE_3_REPELS
	return


Route3_ItemScript_ParalyzeHeal::
# 416 "data/maps/Route3/scripts.pory"
	finditem ITEM_PARALYZE_HEAL, 1
# 417 "data/maps/Route3/scripts.pory"
	setflag FLAG_ITEM_ROUTE_3_PARALYZE_HEAL
	return


# 17 "data/maps/Route3/scripts.pory"
Route3_EventScript_Trigger1_Movement_0:
# 17 "data/maps/Route3/scripts.pory"
	emote_exclamation_mark
	step_end

# 24 "data/maps/Route3/scripts.pory"
Route3_EventScript_Trigger1_Movement_1:
# 24 "data/maps/Route3/scripts.pory"
	face_up
	step_end

# 26 "data/maps/Route3/scripts.pory"
Route3_EventScript_Trigger1_Movement_2:
# 26 "data/maps/Route3/scripts.pory"
	walk_down
	step_end

# 48 "data/maps/Route3/scripts.pory"
Route3_EventScript_Trigger2_Movement_0:
# 48 "data/maps/Route3/scripts.pory"
	walk_right
# 48 "data/maps/Route3/scripts.pory"
	walk_down
	step_end

# 67 "data/maps/Route3/scripts.pory"
Route3_EventScript_Trigger3_Movement_0:
# 67 "data/maps/Route3/scripts.pory"
	face_left
	step_end

# 69 "data/maps/Route3/scripts.pory"
Route3_EventScript_Trigger3_Movement_1:
# 69 "data/maps/Route3/scripts.pory"
	walk_down
# 69 "data/maps/Route3/scripts.pory"
	walk_right
	step_end

# 153 "data/maps/Route3/scripts.pory"
Route3_EventScript_April_FacingNorth_Movement_0:
# 153 "data/maps/Route3/scripts.pory"
	face_right
	step_end

# 155 "data/maps/Route3/scripts.pory"
Route3_EventScript_April_FacingNorth_Movement_1:
# 155 "data/maps/Route3/scripts.pory"
	walk_right
# 155 "data/maps/Route3/scripts.pory"
	walk_right
# 155 "data/maps/Route3/scripts.pory"
	walk_right
# 155 "data/maps/Route3/scripts.pory"
	walk_right
# 155 "data/maps/Route3/scripts.pory"
	walk_right
# 155 "data/maps/Route3/scripts.pory"
	walk_right
# 155 "data/maps/Route3/scripts.pory"
	walk_right
# 155 "data/maps/Route3/scripts.pory"
	walk_right
# 155 "data/maps/Route3/scripts.pory"
	walk_right
# 155 "data/maps/Route3/scripts.pory"
	walk_right
	step_end

# 242 "data/maps/Route3/scripts.pory"
Route3_EventScript_April_FacingLeft_Movement_0:
# 242 "data/maps/Route3/scripts.pory"
	walk_down
# 242 "data/maps/Route3/scripts.pory"
	walk_right
# 242 "data/maps/Route3/scripts.pory"
	walk_right
# 242 "data/maps/Route3/scripts.pory"
	walk_right
# 242 "data/maps/Route3/scripts.pory"
	walk_right
# 242 "data/maps/Route3/scripts.pory"
	walk_right
# 242 "data/maps/Route3/scripts.pory"
	walk_right
# 242 "data/maps/Route3/scripts.pory"
	walk_right
# 242 "data/maps/Route3/scripts.pory"
	walk_right
# 242 "data/maps/Route3/scripts.pory"
	walk_right
# 242 "data/maps/Route3/scripts.pory"
	walk_right
	step_end

Route3_EventScript_Trigger1_Text_0:
# 21 "data/maps/Route3/scripts.pory"
	.string "{PLAYER}!$"

Route3_EventScript_April_FacingNorth_Text_0:
# 75 "data/maps/Route3/scripts.pory"
	.string "It took some serious convincing,\n"
	.string "but Aspen gave me the new Pokédex, too!\p"
	.string "Isn't that great? Now we can be on\n"
	.string "an even playing field.\p"
	.string "{PLAYER}, you look kind of tired.\n"
	.string "Why don't I heal your Pokémon for you?$"

Route3_EventScript_April_FacingNorth_Text_1:
# 91 "data/maps/Route3/scripts.pory"
	.string "There, all done.\p"
	.string "We're about halfway to Chartreuse City.\n"
	.string "Once I get there, I plan on heading\l"
	.string "straight to the Gym to test my skills\l"
	.string "against their leader.\p"
	.string "You do know about the Gym Challenge,\n"
	.string "right, {PLAYER}?$"

Route3_EventScript_April_FacingNorth_Text_2:
# 99 "data/maps/Route3/scripts.pory"
	.string "Great! Saves me some explaining.$"

Route3_EventScript_April_FacingNorth_Text_3:
# 101 "data/maps/Route3/scripts.pory"
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

Route3_EventScript_April_FacingNorth_Text_4:
# 119 "data/maps/Route3/scripts.pory"
	.string "Before I continue on, would you be up\n"
	.string "for a battle, {PLAYER}?$"

Route3_EventScript_April_FacingNorth_Text_5:
# 122 "data/maps/Route3/scripts.pory"
	.string "Great! I'm going to give my all!$"

Route3_EventScript_April_FacingNorth_Text_6:
# 124 "data/maps/Route3/scripts.pory"
	.string "Well, too bad. I wasn't asking!$"

Route3_EventScript_April_FacingNorth_Text_7:
# 129 "data/maps/Route3/scripts.pory"
	.string "Wow, that was a great battle!\n"
	.string "I can see why Aspen has such high\l"
	.string "hopes for you, {PLAYER}.$"

Route3_EventScript_April_FacingNorth_Text_8:
# 133 "data/maps/Route3/scripts.pory"
	.string "That was...surprisingly easy.\n"
	.string "I've gotta say, I expected a much\l"
	.string "tougher battle from you, {PLAYER}.$"

Route3_EventScript_April_FacingNorth_Text_9:
# 138 "data/maps/Route3/scripts.pory"
	.string "Here, let me heal your Pokémon again.$"

Route3_EventScript_April_FacingNorth_Text_10:
# 149 "data/maps/Route3/scripts.pory"
	.string "Well, I'll see you in Chartreuse City.\n"
	.string "Best of luck, {PLAYER}!$"

Route3_NPCScript_1_Text_0:
# 339 "data/maps/Route3/scripts.pory"
	.string "The trek from Marigold to Chartreuse is\n"
	.string "a lot longer than I thought it would be.\p"
	.string "I think I bit off a little more than\n"
	.string "I can chew.$"

Route3_NPCScript_2_Text_0:
# 349 "data/maps/Route3/scripts.pory"
	.string "I think I saw a house up in the\n"
	.string "distance, but I can't get to it since\l"
	.string "there's a tree blocking my way.$"

Route3_NPCScript_3_Text_0:
# 358 "data/maps/Route3/scripts.pory"
	.string "Whew...I need for rest for a second.\p"
	.string "I don't do well with these\n"
	.string "high-elevation hikes.\p"
	.string "Would you like to take a rest as well?$"

Route3_NPCScript_3_Text_1:
# 363 "data/maps/Route3/scripts.pory"
	.string "Good idea! Let's take a rest.$"

Route3_NPCScript_3_Text_2:
# 374 "data/maps/Route3/scripts.pory"
	.string "There, now you'll have the energy\n"
	.string "to take on whatever comes your way!$"

Route3_NPCScript_3_Text_3:
# 377 "data/maps/Route3/scripts.pory"
	.string "Look at you, Mr. Endurance.$"

Route3_SignScript_Location_Text_0:
# 384 "data/maps/Route3/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Route 3.$"

Route3_SignScript_TrainerTips1_Text_0:
# 390 "data/maps/Route3/scripts.pory"
	.string "You can register a Key Item to the\n"
	.string "Select button in your Bag.\p"
	.string "This is useful, take advantage of it!$"

Route3_SignScript_TrainerTips2_Text_0:
# 398 "data/maps/Route3/scripts.pory"
	.string "If you ever want one of your Pokémon to\n"
	.string "relearn one of it's old moves, go to\l"
	.string "your Pokémon menu and select the\l"
	.string "{COLOR RED}{SHADOW LIGHT_RED}LEARN MOVES{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} option.$"

AprilOutro::
# 250 "data/maps/Route3/scripts.pory"
	.string "I have a lot to learn from you,\n"
	.string "{PLAYER}.$"

Tony_Intro::
# 262 "data/maps/Route3/scripts.pory"
	.string "We're really out here in the middle\n"
	.string "of nowhere, huh?$"

Tony_Outro::
# 267 "data/maps/Route3/scripts.pory"
	.string "...I want to go home.$"

PostBattle_Tony::
# 271 "data/maps/Route3/scripts.pory"
	.string "How far is it to Chartreuse City?$"

Aaron_Intro::
# 282 "data/maps/Route3/scripts.pory"
	.string "Hey, do you want to battle me?$"

Aaron_Outro::
# 286 "data/maps/Route3/scripts.pory"
	.string "I regret asking.$"

PostBattle_Aaron::
# 290 "data/maps/Route3/scripts.pory"
	.string "I could really use some more practice.$"

Christina_Intro::
# 301 "data/maps/Route3/scripts.pory"
	.string "What's your favorite Pokémon?\n"
	.string "I have too many, I can't choose!$"

Christina_Outro::
# 306 "data/maps/Route3/scripts.pory"
	.string "You're mean!$"

PostBattle_Christina::
# 310 "data/maps/Route3/scripts.pory"
	.string "When there are this many Pokémon,\n"
	.string "how can you pick just one favorite?$"

Trevin_Intro::
# 322 "data/maps/Route3/scripts.pory"
	.string "I just got done hiking in Chartreuse\n"
	.string "Cave. How 'bout a battle?$"

Trevin_Outro::
# 327 "data/maps/Route3/scripts.pory"
	.string "My Geodude!$"

PostBattle_Trevin::
# 331 "data/maps/Route3/scripts.pory"
	.string "I guess I'll need to hike through\n"
	.string "again to heal up.$"
