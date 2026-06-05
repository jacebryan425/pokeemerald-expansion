ChartreuseCity_MapScripts::
# 2 "data/maps/ChartreuseCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ChartreuseCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 18 "data/maps/ChartreuseCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ChartreuseCity_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

ChartreuseCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ChartreuseCity/scripts.pory"
	compare VAR_CHARTREUSE_CITY_STATE, 0
	goto_if_eq ChartreuseCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 12 "data/maps/ChartreuseCity/scripts.pory"
	compare VAR_CHARTREUSE_CITY_STATE, 2
	goto_if_eq ChartreuseCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

ChartreuseCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_HIDE_RIVAL_CC
# 5 "data/maps/ChartreuseCity/scripts.pory"
	removeobject RIVAL_CC
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

ChartreuseCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 13 "data/maps/ChartreuseCity/scripts.pory"
	clearflag FLAG_HIDE_PROFESSOR_AIDE
# 14 "data/maps/ChartreuseCity/scripts.pory"
	addobject AIDE
	return

ChartreuseCity_MapScripts_MAP_SCRIPT_ON_LOAD:
# 19 "data/maps/ChartreuseCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


ChartreuseCity_EventScript_AlphaGrunts::
# 24 "data/maps/ChartreuseCity/scripts.pory"
	lock
# 25 "data/maps/ChartreuseCity/scripts.pory"
	playse SE_PIN
# 26 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_0
# 27 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 28 "data/maps/ChartreuseCity/scripts.pory"
	waitse
# 29 "data/maps/ChartreuseCity/scripts.pory"
	delay 30
# 30 "data/maps/ChartreuseCity/scripts.pory"
	special SpawnCameraObject
# 31 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ChartreuseCity_EventScript_AlphaGrunts_Movement_1
# 32 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 33 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_0
# 39 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 40 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 41 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_2
# 42 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 43 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA2_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_2
# 44 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 45 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 46 "data/maps/ChartreuseCity/scripts.pory"
	playse SE_PIN
# 47 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_3
# 48 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 49 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA2_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_3
# 50 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 51 "data/maps/ChartreuseCity/scripts.pory"
	waitse
# 52 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_1
# 53 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 54 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 55 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_1
# 56 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 57 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_2
# 62 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 63 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 64 "data/maps/ChartreuseCity/scripts.pory"
	playse SE_PIN
# 65 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_0
# 66 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 67 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA2_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_0
# 68 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 69 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 70 "data/maps/ChartreuseCity/scripts.pory"
	waitse
# 71 "data/maps/ChartreuseCity/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_CC
# 72 "data/maps/ChartreuseCity/scripts.pory"
	addobject RIVAL_CC
# 73 "data/maps/ChartreuseCity/scripts.pory"
	applymovement RIVAL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_5
# 74 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 75 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_2
# 76 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 77 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA2_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_2
# 78 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 79 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_3
# 82 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 83 "data/maps/ChartreuseCity/scripts.pory"
	applymovement RIVAL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 84 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 85 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 86 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 87 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_4
# 91 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 92 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 93 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 94 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_5
# 95 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 96 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_2
# 97 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 98 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_6
# 100 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 101 "data/maps/ChartreuseCity/scripts.pory"
	applymovement RIVAL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_7
# 102 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 103 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 104 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 105 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_7
# 107 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 108 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 109 "data/maps/ChartreuseCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 110 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 111 "data/maps/ChartreuseCity/scripts.pory"
	playfanfare MUS_HEAL
# 112 "data/maps/ChartreuseCity/scripts.pory"
	waitfanfare
# 113 "data/maps/ChartreuseCity/scripts.pory"
	special HealPlayerParty
# 114 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 115 "data/maps/ChartreuseCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 116 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 117 "data/maps/ChartreuseCity/scripts.pory"
	checkplayergender
# 118 "data/maps/ChartreuseCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ChartreuseCity_EventScript_AlphaGrunts_1
# 121 "data/maps/ChartreuseCity/scripts.pory"
	call ChartreuseCity_EventScript_Ryan
	return

ChartreuseCity_EventScript_AlphaGrunts_1:
# 119 "data/maps/ChartreuseCity/scripts.pory"
	call ChartreuseCity_EventScript_April
	return


ChartreuseCity_EventScript_AlphaDefeated::
# 126 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaDefeated_Text_0
# 129 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 130 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 131 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA2_CC, ChartreuseCity_EventScript_AlphaDefeated_Movement_0
# 132 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaDefeated_Movement_0
# 133 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 134 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_HIDE_ALPHA_CC_2
# 135 "data/maps/ChartreuseCity/scripts.pory"
	removeobject ALPHA2_CC
# 136 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_HIDE_ALPHA_CC_1
# 137 "data/maps/ChartreuseCity/scripts.pory"
	removeobject ALPHA1_CC
# 138 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OLD_MAN, ChartreuseCity_EventScript_AlphaDefeated_Movement_1
# 139 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 140 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaDefeated_Text_1
# 146 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 147 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 148 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OLD_MAN, ChartreuseCity_EventScript_AlphaDefeated_Movement_2
# 149 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 150 "data/maps/ChartreuseCity/scripts.pory"
	playse SE_EXIT
# 151 "data/maps/ChartreuseCity/scripts.pory"
	opendoor 16, 24
# 152 "data/maps/ChartreuseCity/scripts.pory"
	waitdooranim
# 153 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OLD_MAN, ChartreuseCity_EventScript_AlphaDefeated_Movement_3
# 154 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 155 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_HIDE_OLD_MAN_CC
# 156 "data/maps/ChartreuseCity/scripts.pory"
	removeobject OLD_MAN
# 157 "data/maps/ChartreuseCity/scripts.pory"
	closedoor 16, 24
# 158 "data/maps/ChartreuseCity/scripts.pory"
	waitdooranim
# 159 "data/maps/ChartreuseCity/scripts.pory"
	applymovement RIVAL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_7
# 160 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 161 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 162 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 163 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaDefeated_Text_2
# 168 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 169 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 170 "data/maps/ChartreuseCity/scripts.pory"
	applymovement RIVAL_CC, ChartreuseCity_EventScript_AlphaDefeated_Movement_0
# 171 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement
# 172 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_HIDE_RIVAL_CC
# 173 "data/maps/ChartreuseCity/scripts.pory"
	removeobject RIVAL_CC
# 174 "data/maps/ChartreuseCity/scripts.pory"
	removeobject OBJ_EVENT_ID_CAMERA
# 175 "data/maps/ChartreuseCity/scripts.pory"
	addvar VAR_CHARTREUSE_CITY_STATE, 1
# 176 "data/maps/ChartreuseCity/scripts.pory"
	release
	return


ChartreuseCity_EventScript_April::
# 180 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_April_Text_0
# 182 "data/maps/ChartreuseCity/scripts.pory"
	applymovement RIVAL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 183 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 184 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 185 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 186 "data/maps/ChartreuseCity/scripts.pory"
	call ChartreuseCity_EventScript_ChoosePokemonApril
	return


ChartreuseCity_EventScript_Ryan::
# 190 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_April_Text_0
# 192 "data/maps/ChartreuseCity/scripts.pory"
	applymovement RIVAL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 193 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 194 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 195 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 196 "data/maps/ChartreuseCity/scripts.pory"
	call ChartreuseCity_EventScript_ChoosePokemonRyan
	return


# 199 "data/maps/ChartreuseCity/scripts.pory"

# 200 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_ChoosePokemonApril::
# 201 "data/maps/ChartreuseCity/scripts.pory"
    special SavePlayerParty
# 202 "data/maps/ChartreuseCity/scripts.pory"
    fadescreen FADE_TO_BLACK
# 203 "data/maps/ChartreuseCity/scripts.pory"
    special ChooseHalfPartyForBattle
# 204 "data/maps/ChartreuseCity/scripts.pory"
    waitstate
# 205 "data/maps/ChartreuseCity/scripts.pory"
    goto_if_ne VAR_RESULT, 0, ChartreuseCity_TrainerScript_AlphaGruntsApril
# 206 "data/maps/ChartreuseCity/scripts.pory"
    special LoadPlayerParty
# 207 "data/maps/ChartreuseCity/scripts.pory"
    goto ChartreuseCity_EventScript_April
# 208 "data/maps/ChartreuseCity/scripts.pory"

# 209 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_ChoosePokemonRyan::
# 210 "data/maps/ChartreuseCity/scripts.pory"
    special SavePlayerParty
# 211 "data/maps/ChartreuseCity/scripts.pory"
    fadescreen FADE_TO_BLACK
# 212 "data/maps/ChartreuseCity/scripts.pory"
    special ChooseHalfPartyForBattle
# 213 "data/maps/ChartreuseCity/scripts.pory"
    waitstate
# 214 "data/maps/ChartreuseCity/scripts.pory"
    goto_if_ne VAR_RESULT, 0, ChartreuseCity_TrainerScript_AlphaGruntsRyan
# 215 "data/maps/ChartreuseCity/scripts.pory"
    special LoadPlayerParty
# 216 "data/maps/ChartreuseCity/scripts.pory"
    goto ChartreuseCity_EventScript_Ryan
# 217 "data/maps/ChartreuseCity/scripts.pory"

# 218 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_TrainerScript_AlphaGruntsApril::
# 219 "data/maps/ChartreuseCity/scripts.pory"
        multi_2_vs_2 TRAINER_ALPHA1_CC, Alpha1_Outro, TRAINER_ALPHA2_CC, Alpha2_Outro, PARTNER_APRIL
# 220 "data/maps/ChartreuseCity/scripts.pory"
        switch VAR_RESULT
# 221 "data/maps/ChartreuseCity/scripts.pory"
	case 1, ChartreuseCity_EventScript_AlphaDefeated
# 222 "data/maps/ChartreuseCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 223 "data/maps/ChartreuseCity/scripts.pory"
	special SetCB2WhiteOut
# 224 "data/maps/ChartreuseCity/scripts.pory"
	waitstate
# 225 "data/maps/ChartreuseCity/scripts.pory"

# 226 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_TrainerScript_AlphaGruntsRyan::
# 227 "data/maps/ChartreuseCity/scripts.pory"
        multi_2_vs_2 TRAINER_ALPHA1_CC, Alpha1_Outro, TRAINER_ALPHA2_CC, Alpha2_Outro, PARTNER_RYAN
# 228 "data/maps/ChartreuseCity/scripts.pory"
        switch VAR_RESULT
# 229 "data/maps/ChartreuseCity/scripts.pory"
	case 1, ChartreuseCity_EventScript_AlphaDefeated
# 230 "data/maps/ChartreuseCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 231 "data/maps/ChartreuseCity/scripts.pory"
	special SetCB2WhiteOut
# 232 "data/maps/ChartreuseCity/scripts.pory"
	waitstate

ChartreuseCity_NPCScript_Dexnav::
# 244 "data/maps/ChartreuseCity/scripts.pory"
	lock
# 245 "data/maps/ChartreuseCity/scripts.pory"
	faceplayer
# 246 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_NPCScript_Dexnav_Text_0
# 251 "data/maps/ChartreuseCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 252 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_NPCScript_Dexnav_Text_1
# 253 "data/maps/ChartreuseCity/scripts.pory"
	waitfanfare
# 254 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_DEXNAV_GET
# 255 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_NPCScript_Dexnav_Text_2
# 263 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 264 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 265 "data/maps/ChartreuseCity/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq ChartreuseCity_NPCScript_Dexnav_2
# 269 "data/maps/ChartreuseCity/scripts.pory"
	applymovement AIDE, ChartreuseCity_NPCScript_Dexnav_Movement_1
# 270 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
ChartreuseCity_NPCScript_Dexnav_1:
# 272 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_HIDE_PROFESSOR_AIDE
# 273 "data/maps/ChartreuseCity/scripts.pory"
	removeobject AIDE
# 274 "data/maps/ChartreuseCity/scripts.pory"
	addvar VAR_CHARTREUSE_CITY_STATE, 1
# 275 "data/maps/ChartreuseCity/scripts.pory"
	release
	return

ChartreuseCity_NPCScript_Dexnav_2:
# 266 "data/maps/ChartreuseCity/scripts.pory"
	applymovement AIDE, ChartreuseCity_NPCScript_Dexnav_Movement_0
# 267 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
	goto ChartreuseCity_NPCScript_Dexnav_1


ChartreuseCity_NPCScript_1::
# 279 "data/maps/ChartreuseCity/scripts.pory"
	lock
# 280 "data/maps/ChartreuseCity/scripts.pory"
	faceplayer
# 281 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_NPCScript_1_Text_0
# 284 "data/maps/ChartreuseCity/scripts.pory"
	release
	return


ChartreuseCity_NPCScript_2::
# 288 "data/maps/ChartreuseCity/scripts.pory"
	lock
# 289 "data/maps/ChartreuseCity/scripts.pory"
	faceplayer
# 290 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_NPCScript_2_Text_0
# 294 "data/maps/ChartreuseCity/scripts.pory"
	release
	return


ChartreuseCity_SignScript_Location::
# 298 "data/maps/ChartreuseCity/scripts.pory"
	lock
# 299 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_SignScript_Location_Text_0
# 300 "data/maps/ChartreuseCity/scripts.pory"
	release
	return


ChartreuseCity_SignScript_Gym::
# 304 "data/maps/ChartreuseCity/scripts.pory"
	lock
# 305 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_SignScript_Gym_Text_0
# 307 "data/maps/ChartreuseCity/scripts.pory"
	release
	return


ChartreuseCity_ItemScript_GreatBall::
# 311 "data/maps/ChartreuseCity/scripts.pory"
	finditem ITEM_GREAT_BALL, 3
# 312 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_ITEM_CHARTREUSE_CITY_GREAT_BALL
	return


# 26 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_0:
# 26 "data/maps/ChartreuseCity/scripts.pory"
	face_right
# 26 "data/maps/ChartreuseCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 31 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_1:
# 31 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 31 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 31 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 31 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 31 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
	step_end

# 41 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_2:
# 41 "data/maps/ChartreuseCity/scripts.pory"
	face_down
	step_end

# 47 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_3:
# 47 "data/maps/ChartreuseCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 69 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_4:
# 69 "data/maps/ChartreuseCity/scripts.pory"
	face_right
	step_end

# 73 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_5:
# 73 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 73 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 73 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 73 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 73 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 73 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 73 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 73 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
	step_end

# 83 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_6:
# 83 "data/maps/ChartreuseCity/scripts.pory"
	face_up
	step_end

# 101 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_7:
# 101 "data/maps/ChartreuseCity/scripts.pory"
	face_left
	step_end

# 131 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaDefeated_Movement_0:
# 131 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 131 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 131 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 131 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 131 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 131 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 131 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 131 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 131 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 131 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
	step_end

# 138 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaDefeated_Movement_1:
# 138 "data/maps/ChartreuseCity/scripts.pory"
	walk_down
# 138 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 138 "data/maps/ChartreuseCity/scripts.pory"
	face_down
	step_end

# 148 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaDefeated_Movement_2:
# 148 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 148 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
	step_end

# 153 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaDefeated_Movement_3:
# 153 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
	step_end

# 266 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_NPCScript_Dexnav_Movement_0:
# 266 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 266 "data/maps/ChartreuseCity/scripts.pory"
	walk_down
# 266 "data/maps/ChartreuseCity/scripts.pory"
	walk_down
# 266 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 266 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 266 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 266 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 266 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 266 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 266 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 266 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 266 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 266 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 266 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 266 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 266 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
	step_end

# 269 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_NPCScript_Dexnav_Movement_1:
# 269 "data/maps/ChartreuseCity/scripts.pory"
	walk_down
# 269 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 269 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 269 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 269 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 269 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 269 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 269 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 269 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 269 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 269 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 269 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
	step_end

ChartreuseCity_EventScript_AlphaGrunts_Text_0:
# 33 "data/maps/ChartreuseCity/scripts.pory"
	.string "As I have told you every week for the\n"
	.string "last two months, I'm not interested!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}But sir, Arceus' return is imminent!\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}The only way to ensure your safety is\n"
	.string "by joining us!\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Pfft...I'll take my chances.$"

ChartreuseCity_EventScript_AlphaGrunts_Text_1:
# 52 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Hey you! Come over here!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_2:
# 57 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Would you like to hear about our lord\n"
	.string "and savior, the Almighty Arceus?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}For only 10% of your annual battle\n"
	.string "earnings, we can promise you eternal\l"
	.string "life. Won't you join Team Alpha?$"

ChartreuseCity_EventScript_AlphaGrunts_Text_3:
# 79 "data/maps/ChartreuseCity/scripts.pory"
	.string "{PLAYER}, there you are!\n"
	.string "I've been at the Gym waiting for you.\p"
	.string "What's the hold up?$"

ChartreuseCity_EventScript_AlphaGrunts_Text_4:
# 87 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}We're here trying to save your friend\n"
	.string "from eternal damnation!\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}...What? That's ridiculous, what are\n"
	.string "you talking about?$"

ChartreuseCity_EventScript_AlphaGrunts_Text_5:
# 94 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Agh, why won't anyone listen to us?!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_6:
# 98 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}If we defeat you in battle, you'll have\n"
	.string "to join us!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_7:
# 105 "data/maps/ChartreuseCity/scripts.pory"
	.string "{PLAYER}, I'll team up with you!\n"
	.string "Let me heal your Pokémon real quick.$"

ChartreuseCity_EventScript_AlphaDefeated_Text_0:
# 126 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Alright, alright, we'll leave.\n"
	.string "We'll be seeing you around though!\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Have a blessed day!$"

ChartreuseCity_EventScript_AlphaDefeated_Text_1:
# 140 "data/maps/ChartreuseCity/scripts.pory"
	.string "Thank you for getting them to go away.\n"
	.string "Every week they show up here and start\l"
	.string "talking about Arceus this, Arceus that!\p"
	.string "I even put up a {COLOR RED}{SHADOW LIGHT_RED}NO SOLICITING{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} sign,\n"
	.string "but does that stop them? No!\p"
	.string "Take care, you two.$"

ChartreuseCity_EventScript_AlphaDefeated_Text_2:
# 163 "data/maps/ChartreuseCity/scripts.pory"
	.string "Now that that's over with...\n"
	.string "It's time to challenge the Gym Leader!\p"
	.string "I'm going to go first, but I wish\n"
	.string "you the best of luck, {PLAYER}!\p"
	.string "See ya later!$"

ChartreuseCity_EventScript_April_Text_0:
# 180 "data/maps/ChartreuseCity/scripts.pory"
	.string "Alright, choose up to 3 Pokémon to\n"
	.string "battle with.$"

ChartreuseCity_NPCScript_Dexnav_Text_0:
# 246 "data/maps/ChartreuseCity/scripts.pory"
	.string "{PLAYER}, there you are!\p"
	.string "Congratulations on your first Gym\n"
	.string "victory!\p"
	.string "Professor Aspen sent me here to give\n"
	.string "you this.$"

ChartreuseCity_NPCScript_Dexnav_Text_1:
# 252 "data/maps/ChartreuseCity/scripts.pory"
	.string "{PLAYER} received the Dexnav!$"

ChartreuseCity_NPCScript_Dexnav_Text_2:
# 255 "data/maps/ChartreuseCity/scripts.pory"
	.string "The Dexnav is a very helpful upgrade\n"
	.string "to your Pokédex.\p"
	.string "It shows you information about wild\n"
	.string "Pokémon in your current location,\l"
	.string "and makes it much easier to find rare\l"
	.string "Pokémon!\p"
	.string "We hope this helps you with your\n"
	.string "research, {PLAYER}!$"

ChartreuseCity_NPCScript_1_Text_0:
# 281 "data/maps/ChartreuseCity/scripts.pory"
	.string "I keep losing against Grace...\n"
	.string "No matter what kind of strategy I use,\l"
	.string "she always wins!$"

ChartreuseCity_NPCScript_2_Text_0:
# 290 "data/maps/ChartreuseCity/scripts.pory"
	.string "I keep coming across these weird little\n"
	.string "trees that block my path.\p"
	.string "They're too tough to cut down by\n"
	.string "myself, but maybe a Pokémon could help?$"

ChartreuseCity_SignScript_Location_Text_0:
# 299 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Chartreuse City.$"

ChartreuseCity_SignScript_Gym_Text_0:
# 305 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Chartreuse City Pokémon Gym.\n"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Leader: Grace.$"

Alpha1_Outro::
# 235 "data/maps/ChartreuseCity/scripts.pory"
	.string "But...how? I had Arceus on my side!$"

Alpha2_Outro::
# 239 "data/maps/ChartreuseCity/scripts.pory"
	.string "Ignored, once again...$"
