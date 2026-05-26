ChartreuseCity_MapScripts::
# 2 "data/maps/ChartreuseCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ChartreuseCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ChartreuseCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ChartreuseCity/scripts.pory"
	compare VAR_CHARTREUSE_CITY_STATE, 0
	goto_if_eq ChartreuseCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ChartreuseCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_HIDE_APRIL_CC
# 5 "data/maps/ChartreuseCity/scripts.pory"
	removeobject APRIL_CC
# 6 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_HIDE_PROFESSOR_AIDE
# 7 "data/maps/ChartreuseCity/scripts.pory"
	removeobject AIDE
# 8 "data/maps/ChartreuseCity/scripts.pory"
	clearflag FLAG_HIDE_ALPHA_CC_1
# 9 "data/maps/ChartreuseCity/scripts.pory"
	addobject ALPHA1_CC
# 10 "data/maps/ChartreuseCity/scripts.pory"
	clearflag FLAG_HIDE_ALPHA_CC_2
# 11 "data/maps/ChartreuseCity/scripts.pory"
	addobject ALPHA2_CC
	return


ChartreuseCity_EventScript_AlphaGrunts::
# 17 "data/maps/ChartreuseCity/scripts.pory"
	lock
# 18 "data/maps/ChartreuseCity/scripts.pory"
	playse SE_PIN
# 19 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_0
# 20 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 21 "data/maps/ChartreuseCity/scripts.pory"
	waitse
# 22 "data/maps/ChartreuseCity/scripts.pory"
	delay 30
# 23 "data/maps/ChartreuseCity/scripts.pory"
	special SpawnCameraObject
# 24 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ChartreuseCity_EventScript_AlphaGrunts_Movement_1
# 25 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 26 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_0
# 32 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 33 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 34 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_2
# 35 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 36 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA2_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_2
# 37 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 38 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 39 "data/maps/ChartreuseCity/scripts.pory"
	playse SE_PIN
# 40 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_3
# 41 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 42 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA2_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_3
# 43 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 44 "data/maps/ChartreuseCity/scripts.pory"
	waitse
# 45 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_1
# 46 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 47 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 48 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_1
# 49 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 50 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_2
# 55 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 56 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 57 "data/maps/ChartreuseCity/scripts.pory"
	playse SE_PIN
# 58 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_0
# 59 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 60 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA2_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_0
# 61 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 62 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 63 "data/maps/ChartreuseCity/scripts.pory"
	waitse
# 64 "data/maps/ChartreuseCity/scripts.pory"
	clearflag FLAG_HIDE_APRIL_CC
# 65 "data/maps/ChartreuseCity/scripts.pory"
	addobject APRIL_CC
# 66 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_5
# 67 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 68 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_2
# 69 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 70 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA2_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_2
# 71 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 72 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_3
# 75 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 76 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 77 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 78 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 79 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 80 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_4
# 84 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 85 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 86 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 87 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_5
# 88 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 89 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_2
# 90 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 91 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_6
# 93 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 94 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_7
# 95 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 96 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 97 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 98 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_7
# 103 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 104 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 105 "data/maps/ChartreuseCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 106 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 107 "data/maps/ChartreuseCity/scripts.pory"
	playfanfare MUS_HEAL
# 108 "data/maps/ChartreuseCity/scripts.pory"
	waitfanfare
# 109 "data/maps/ChartreuseCity/scripts.pory"
	special HealPlayerParty
# 110 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 111 "data/maps/ChartreuseCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 112 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 113 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_8
# 115 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 116 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 117 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 118 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 119 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 120 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 121 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 122 "data/maps/ChartreuseCity/scripts.pory"
	trainerbattle_no_intro TRAINER_ALPHA1_CC, Alpha1_Outro
# 123 "data/maps/ChartreuseCity/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq ChartreuseCity_EventScript_AlphaGrunts_2
ChartreuseCity_EventScript_AlphaGrunts_1:
# 148 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_11
# 149 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 150 "data/maps/ChartreuseCity/scripts.pory"
	trainerbattle_no_intro TRAINER_ALPHA2_CC, Alpha2_Outro
# 151 "data/maps/ChartreuseCity/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq ChartreuseCity_EventScript_AlphaGrunts_5
ChartreuseCity_EventScript_AlphaGrunts_4:
# 176 "data/maps/ChartreuseCity/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 177 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_12
# 180 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 181 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 182 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA2_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_8
# 183 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_8
# 184 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 185 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_HIDE_ALPHA_CC_2
# 186 "data/maps/ChartreuseCity/scripts.pory"
	removeobject ALPHA2_CC
# 187 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_HIDE_ALPHA_CC_1
# 188 "data/maps/ChartreuseCity/scripts.pory"
	removeobject ALPHA1_CC
# 189 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OLD_MAN, ChartreuseCity_EventScript_AlphaGrunts_Movement_9
# 190 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 191 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_13
# 197 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 198 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 199 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OLD_MAN, ChartreuseCity_EventScript_AlphaGrunts_Movement_10
# 200 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 201 "data/maps/ChartreuseCity/scripts.pory"
	playse SE_EXIT
# 202 "data/maps/ChartreuseCity/scripts.pory"
	opendoor 16, 24
# 203 "data/maps/ChartreuseCity/scripts.pory"
	waitdooranim
# 204 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OLD_MAN, ChartreuseCity_EventScript_AlphaGrunts_Movement_11
# 205 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 206 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_HIDE_OLD_MAN_CC
# 207 "data/maps/ChartreuseCity/scripts.pory"
	removeobject OLD_MAN
# 208 "data/maps/ChartreuseCity/scripts.pory"
	closedoor 16, 24
# 209 "data/maps/ChartreuseCity/scripts.pory"
	waitdooranim
# 210 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_7
# 211 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 212 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 213 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 214 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_14
# 219 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 220 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 221 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_8
# 222 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement
# 223 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_HIDE_APRIL_CC
# 224 "data/maps/ChartreuseCity/scripts.pory"
	removeobject APRIL_CC
# 225 "data/maps/ChartreuseCity/scripts.pory"
	removeobject OBJ_EVENT_ID_CAMERA
# 226 "data/maps/ChartreuseCity/scripts.pory"
	addvar VAR_CHARTREUSE_CITY_STATE, 1
# 227 "data/maps/ChartreuseCity/scripts.pory"
	release
	return

ChartreuseCity_EventScript_AlphaGrunts_2:
# 124 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_9
# 126 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 127 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_7
# 128 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 129 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 130 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 131 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_10
# 133 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 134 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 135 "data/maps/ChartreuseCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 136 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 137 "data/maps/ChartreuseCity/scripts.pory"
	playfanfare MUS_HEAL
# 138 "data/maps/ChartreuseCity/scripts.pory"
	waitfanfare
# 139 "data/maps/ChartreuseCity/scripts.pory"
	special HealPlayerParty
# 140 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 141 "data/maps/ChartreuseCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 142 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 143 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 144 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 145 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 146 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
	goto ChartreuseCity_EventScript_AlphaGrunts_1

ChartreuseCity_EventScript_AlphaGrunts_5:
# 152 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_9
# 154 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 155 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_7
# 156 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 157 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 158 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 159 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_10
# 161 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 162 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 163 "data/maps/ChartreuseCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 164 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 165 "data/maps/ChartreuseCity/scripts.pory"
	playfanfare MUS_HEAL
# 166 "data/maps/ChartreuseCity/scripts.pory"
	waitfanfare
# 167 "data/maps/ChartreuseCity/scripts.pory"
	special HealPlayerParty
# 168 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 169 "data/maps/ChartreuseCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 170 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 171 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 172 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 173 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 174 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
	goto ChartreuseCity_EventScript_AlphaGrunts_4


ChartreuseCity_EventScript_Dexnav::
	return


ChartreuseCity_NPCScript_1::
	return


ChartreuseCity_NPCScript_2::
	return


ChartreuseCity_SignScript_Location::
	return


ChartreuseCity_SignScript_Gym::
	return


ChartreuseCity_ItemScript_GreatBall::
	return


# 19 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_0:
# 19 "data/maps/ChartreuseCity/scripts.pory"
	face_right
# 19 "data/maps/ChartreuseCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 24 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_1:
# 24 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 24 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 24 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 24 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 24 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
	step_end

# 34 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_2:
# 34 "data/maps/ChartreuseCity/scripts.pory"
	face_down
	step_end

# 40 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_3:
# 40 "data/maps/ChartreuseCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 62 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_4:
# 62 "data/maps/ChartreuseCity/scripts.pory"
	face_right
	step_end

# 66 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_5:
# 66 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 66 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 66 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 66 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 66 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 66 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 66 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 66 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
	step_end

# 76 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_6:
# 76 "data/maps/ChartreuseCity/scripts.pory"
	face_up
	step_end

# 94 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_7:
# 94 "data/maps/ChartreuseCity/scripts.pory"
	face_left
	step_end

# 182 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_8:
# 182 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 182 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 182 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 182 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 182 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 182 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 182 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 182 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 182 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 182 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
	step_end

# 189 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_9:
# 189 "data/maps/ChartreuseCity/scripts.pory"
	walk_down
# 189 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 189 "data/maps/ChartreuseCity/scripts.pory"
	face_down
	step_end

# 199 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_10:
# 199 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 199 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
	step_end

# 204 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_11:
# 204 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
	step_end

ChartreuseCity_EventScript_AlphaGrunts_Text_0:
# 26 "data/maps/ChartreuseCity/scripts.pory"
	.string "As I have told you every week for the\n"
	.string "last two months, I'm not interested!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}But sir, Arceus' return is imminent!\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}The only way to ensure your safety is\n"
	.string "by joining us!\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Pfft...I'll take my chances.$"

ChartreuseCity_EventScript_AlphaGrunts_Text_1:
# 45 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Hey you! Come over here!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_2:
# 50 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Would you like to hear about our lord\n"
	.string "and savior, the Almighty Arceus?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}For only 10% of your annual battle\n"
	.string "earnings, we can promise you eternal\l"
	.string "life. Won't you join Team Alpha?$"

ChartreuseCity_EventScript_AlphaGrunts_Text_3:
# 72 "data/maps/ChartreuseCity/scripts.pory"
	.string "{PLAYER}, there you are!\n"
	.string "I've been at the Gym waiting for you.\p"
	.string "What's the hold up?$"

ChartreuseCity_EventScript_AlphaGrunts_Text_4:
# 80 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}We're here trying to save your friend\n"
	.string "from eternal damnation!\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}...What? That's ridiculous, what are\n"
	.string "you talking about?$"

ChartreuseCity_EventScript_AlphaGrunts_Text_5:
# 87 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Agh, why won't anyone listen to us?!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_6:
# 91 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}If we defeat you in battle, you'll have\n"
	.string "to join us!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_7:
# 98 "data/maps/ChartreuseCity/scripts.pory"
	.string "{PLAYER}, I'd help you with this,\n"
	.string "but I'm ashamed to say that all of my\l"
	.string "Pokémon are in pretty bad shape after\l"
	.string "my defeat at the Gym...\p"
	.string "Let me heal your Pokémon real quick.$"

ChartreuseCity_EventScript_AlphaGrunts_Text_8:
# 113 "data/maps/ChartreuseCity/scripts.pory"
	.string "Alright, get these guys out of here,\n"
	.string "{PLAYER}!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_9:
# 124 "data/maps/ChartreuseCity/scripts.pory"
	.string "I don't care if you won,\n"
	.string "we're still not joining Team Alpha!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_10:
# 131 "data/maps/ChartreuseCity/scripts.pory"
	.string "Let me heal your Pokémon again,\n"
	.string "{PLAYER}.$"

ChartreuseCity_EventScript_AlphaGrunts_Text_11:
# 148 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Alright, now it's my turn!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_12:
# 177 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Alright, alright, we'll leave.\n"
	.string "We'll be seeing you around though!\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Have a blessed day!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_13:
# 191 "data/maps/ChartreuseCity/scripts.pory"
	.string "Thank you for getting them to go away.\n"
	.string "Every week they show up here and start\l"
	.string "talking about Arceus this, Arceus that!\p"
	.string "I even put up a {COLOR RED}{SHADOW LIGHT_RED}NO SOLICITING{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} sign,\n"
	.string "but does that stop them? No!\p"
	.string "Take care, you two.$"

ChartreuseCity_EventScript_AlphaGrunts_Text_14:
# 214 "data/maps/ChartreuseCity/scripts.pory"
	.string "Now that that's over with...\n"
	.string "It's time to challenge the Gym Leader!\p"
	.string "I'm going to go first, but I wish\n"
	.string "you the best of luck, {PLAYER}!\p"
	.string "See ya later!$"

Alpha1_Outro::
# 230 "data/maps/ChartreuseCity/scripts.pory"
	.string "But...how? I had Arceus on my side!$"

Alpha2_Outro::
# 234 "data/maps/ChartreuseCity/scripts.pory"
	.string "Ignored, once again...$"
