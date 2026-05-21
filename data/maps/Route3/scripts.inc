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
	trainerbattle_no_intro TRAINER_APRIL_ROUTE3, AprilOutro
# 127 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route3_EventScript_April_FacingNorth_10
# 132 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_8
Route3_EventScript_April_FacingNorth_9:
# 136 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_9
# 137 "data/maps/Route3/scripts.pory"
	waitmessage
# 138 "data/maps/Route3/scripts.pory"
	closemessage
# 139 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 140 "data/maps/Route3/scripts.pory"
	delay 12
# 141 "data/maps/Route3/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 142 "data/maps/Route3/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 143 "data/maps/Route3/scripts.pory"
	special HealPlayerParty
# 144 "data/maps/Route3/scripts.pory"
	delay 12
# 145 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 146 "data/maps/Route3/scripts.pory"
	delay 12
# 147 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_10
# 149 "data/maps/Route3/scripts.pory"
	waitmessage
# 150 "data/maps/Route3/scripts.pory"
	closemessage
# 151 "data/maps/Route3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_EventScript_April_FacingNorth_Movement_0
# 152 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 153 "data/maps/Route3/scripts.pory"
	applymovement APRIL, Route3_EventScript_April_FacingNorth_Movement_1
# 154 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 155 "data/maps/Route3/scripts.pory"
	setflag FLAG_HIDE_APRIL_ROUTE_3
# 156 "data/maps/Route3/scripts.pory"
	removeobject APRIL
# 157 "data/maps/Route3/scripts.pory"
	addvar VAR_ROUTE_3_STATE, 1
# 158 "data/maps/Route3/scripts.pory"
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
# 128 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_7
	goto Route3_EventScript_April_FacingNorth_9


Route3_EventScript_April_FacingLeft::
# 162 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_0
# 168 "data/maps/Route3/scripts.pory"
	waitmessage
# 169 "data/maps/Route3/scripts.pory"
	closemessage
# 170 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 171 "data/maps/Route3/scripts.pory"
	delay 12
# 172 "data/maps/Route3/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 173 "data/maps/Route3/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 174 "data/maps/Route3/scripts.pory"
	special HealPlayerParty
# 175 "data/maps/Route3/scripts.pory"
	delay 12
# 176 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 177 "data/maps/Route3/scripts.pory"
	delay 12
# 178 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_1, MSGBOX_YESNO
# 185 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route3_EventScript_April_FacingLeft_2
# 188 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_3
Route3_EventScript_April_FacingLeft_1:
# 206 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_4, MSGBOX_YESNO
# 208 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route3_EventScript_April_FacingLeft_6
# 211 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_6
Route3_EventScript_April_FacingLeft_5:
# 213 "data/maps/Route3/scripts.pory"
	trainerbattle_no_intro TRAINER_APRIL_ROUTE3, AprilOutro
# 214 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route3_EventScript_April_FacingLeft_10
# 219 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_8
Route3_EventScript_April_FacingLeft_9:
# 223 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_9
# 224 "data/maps/Route3/scripts.pory"
	waitmessage
# 225 "data/maps/Route3/scripts.pory"
	closemessage
# 226 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 227 "data/maps/Route3/scripts.pory"
	delay 12
# 228 "data/maps/Route3/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 229 "data/maps/Route3/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 230 "data/maps/Route3/scripts.pory"
	special HealPlayerParty
# 231 "data/maps/Route3/scripts.pory"
	delay 12
# 232 "data/maps/Route3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 233 "data/maps/Route3/scripts.pory"
	delay 12
# 234 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_10
# 236 "data/maps/Route3/scripts.pory"
	waitmessage
# 237 "data/maps/Route3/scripts.pory"
	closemessage
# 238 "data/maps/Route3/scripts.pory"
	applymovement APRIL, Route3_EventScript_April_FacingLeft_Movement_0
# 239 "data/maps/Route3/scripts.pory"
	waitmovement 0
# 240 "data/maps/Route3/scripts.pory"
	setflag FLAG_HIDE_APRIL_ROUTE_3
# 241 "data/maps/Route3/scripts.pory"
	removeobject APRIL
# 242 "data/maps/Route3/scripts.pory"
	addvar VAR_ROUTE_3_STATE, 1
# 243 "data/maps/Route3/scripts.pory"
	release
	return

Route3_EventScript_April_FacingLeft_2:
# 186 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_2
	goto Route3_EventScript_April_FacingLeft_1

Route3_EventScript_April_FacingLeft_6:
# 209 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_5
	goto Route3_EventScript_April_FacingLeft_5

Route3_EventScript_April_FacingLeft_10:
# 215 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_April_FacingNorth_Text_7
	goto Route3_EventScript_April_FacingLeft_9


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

# 151 "data/maps/Route3/scripts.pory"
Route3_EventScript_April_FacingNorth_Movement_0:
# 151 "data/maps/Route3/scripts.pory"
	face_right
	step_end

# 153 "data/maps/Route3/scripts.pory"
Route3_EventScript_April_FacingNorth_Movement_1:
# 153 "data/maps/Route3/scripts.pory"
	walk_right
# 153 "data/maps/Route3/scripts.pory"
	walk_right
# 153 "data/maps/Route3/scripts.pory"
	walk_right
# 153 "data/maps/Route3/scripts.pory"
	walk_right
# 153 "data/maps/Route3/scripts.pory"
	walk_right
# 153 "data/maps/Route3/scripts.pory"
	walk_right
# 153 "data/maps/Route3/scripts.pory"
	walk_right
# 153 "data/maps/Route3/scripts.pory"
	walk_right
# 153 "data/maps/Route3/scripts.pory"
	walk_right
# 153 "data/maps/Route3/scripts.pory"
	walk_right
	step_end

# 238 "data/maps/Route3/scripts.pory"
Route3_EventScript_April_FacingLeft_Movement_0:
# 238 "data/maps/Route3/scripts.pory"
	walk_down
# 238 "data/maps/Route3/scripts.pory"
	walk_right
# 238 "data/maps/Route3/scripts.pory"
	walk_right
# 238 "data/maps/Route3/scripts.pory"
	walk_right
# 238 "data/maps/Route3/scripts.pory"
	walk_right
# 238 "data/maps/Route3/scripts.pory"
	walk_right
# 238 "data/maps/Route3/scripts.pory"
	walk_right
# 238 "data/maps/Route3/scripts.pory"
	walk_right
# 238 "data/maps/Route3/scripts.pory"
	walk_right
# 238 "data/maps/Route3/scripts.pory"
	walk_right
# 238 "data/maps/Route3/scripts.pory"
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
# 128 "data/maps/Route3/scripts.pory"
	.string "Wow, that was a great battle!\n"
	.string "I can see why Aspen has such high\l"
	.string "hopes for you, {PLAYER}.$"

Route3_EventScript_April_FacingNorth_Text_8:
# 132 "data/maps/Route3/scripts.pory"
	.string "That was...surprisingly easy.\n"
	.string "I've gotta say, I expected a much\l"
	.string "tougher battle from you, {PLAYER}.$"

Route3_EventScript_April_FacingNorth_Text_9:
# 136 "data/maps/Route3/scripts.pory"
	.string "Here, let me heal your Pokémon again.$"

Route3_EventScript_April_FacingNorth_Text_10:
# 147 "data/maps/Route3/scripts.pory"
	.string "Well, I'll see you in Chartreuse City.\n"
	.string "Best of luck, {PLAYER}!$"

AprilOutro::
# 246 "data/maps/Route3/scripts.pory"
	.string "I have a lot to learn from you,\n"
	.string "{PLAYER}.$"
