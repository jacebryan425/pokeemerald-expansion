ChartreuseCity_MapScripts::
# 2 "data/maps/ChartreuseCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ChartreuseCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
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

ChartreuseCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 13 "data/maps/ChartreuseCity/scripts.pory"
	clearflag FLAG_HIDE_PROFESSOR_AIDE
# 14 "data/maps/ChartreuseCity/scripts.pory"
	addobject AIDE
	return


ChartreuseCity_EventScript_AlphaGrunts::
# 20 "data/maps/ChartreuseCity/scripts.pory"
	lock
# 21 "data/maps/ChartreuseCity/scripts.pory"
	playse SE_PIN
# 22 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_0
# 23 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 24 "data/maps/ChartreuseCity/scripts.pory"
	waitse
# 25 "data/maps/ChartreuseCity/scripts.pory"
	delay 30
# 26 "data/maps/ChartreuseCity/scripts.pory"
	special SpawnCameraObject
# 27 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ChartreuseCity_EventScript_AlphaGrunts_Movement_1
# 28 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 29 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_0
# 35 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 36 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 37 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_2
# 38 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 39 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA2_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_2
# 40 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 41 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 42 "data/maps/ChartreuseCity/scripts.pory"
	playse SE_PIN
# 43 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_3
# 44 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 45 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA2_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_3
# 46 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 47 "data/maps/ChartreuseCity/scripts.pory"
	waitse
# 48 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_1
# 49 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 50 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 51 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_1
# 52 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 53 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_2
# 58 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 59 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 60 "data/maps/ChartreuseCity/scripts.pory"
	playse SE_PIN
# 61 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_0
# 62 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 63 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA2_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_0
# 64 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 65 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 66 "data/maps/ChartreuseCity/scripts.pory"
	waitse
# 67 "data/maps/ChartreuseCity/scripts.pory"
	clearflag FLAG_HIDE_APRIL_CC
# 68 "data/maps/ChartreuseCity/scripts.pory"
	addobject APRIL_CC
# 69 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_5
# 70 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 71 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_2
# 72 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 73 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA2_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_2
# 74 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 75 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_3
# 78 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 79 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 80 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 81 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 82 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 83 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_4
# 87 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 88 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 89 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 90 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_5
# 91 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 92 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_2
# 93 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 94 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_6
# 96 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 97 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_7
# 98 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 99 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 100 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 101 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_7
# 106 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 107 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 108 "data/maps/ChartreuseCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 109 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 110 "data/maps/ChartreuseCity/scripts.pory"
	playfanfare MUS_HEAL
# 111 "data/maps/ChartreuseCity/scripts.pory"
	waitfanfare
# 112 "data/maps/ChartreuseCity/scripts.pory"
	special HealPlayerParty
# 113 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 114 "data/maps/ChartreuseCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 115 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 116 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_8
# 118 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 119 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 120 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 121 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 122 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 123 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 124 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 125 "data/maps/ChartreuseCity/scripts.pory"
	trainerbattle_no_intro TRAINER_ALPHA1_CC, Alpha1_Outro
# 126 "data/maps/ChartreuseCity/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq ChartreuseCity_EventScript_AlphaGrunts_2
ChartreuseCity_EventScript_AlphaGrunts_1:
# 151 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_11
# 152 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 153 "data/maps/ChartreuseCity/scripts.pory"
	trainerbattle_no_intro TRAINER_ALPHA2_CC, Alpha2_Outro
# 154 "data/maps/ChartreuseCity/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq ChartreuseCity_EventScript_AlphaGrunts_5
ChartreuseCity_EventScript_AlphaGrunts_4:
# 179 "data/maps/ChartreuseCity/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 180 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_12
# 183 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 184 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 185 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA2_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_8
# 186 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_8
# 187 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 188 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_HIDE_ALPHA_CC_2
# 189 "data/maps/ChartreuseCity/scripts.pory"
	removeobject ALPHA2_CC
# 190 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_HIDE_ALPHA_CC_1
# 191 "data/maps/ChartreuseCity/scripts.pory"
	removeobject ALPHA1_CC
# 192 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OLD_MAN, ChartreuseCity_EventScript_AlphaGrunts_Movement_9
# 193 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 194 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_13
# 200 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 201 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 202 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OLD_MAN, ChartreuseCity_EventScript_AlphaGrunts_Movement_10
# 203 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 204 "data/maps/ChartreuseCity/scripts.pory"
	playse SE_EXIT
# 205 "data/maps/ChartreuseCity/scripts.pory"
	opendoor 16, 24
# 206 "data/maps/ChartreuseCity/scripts.pory"
	waitdooranim
# 207 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OLD_MAN, ChartreuseCity_EventScript_AlphaGrunts_Movement_11
# 208 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 209 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_HIDE_OLD_MAN_CC
# 210 "data/maps/ChartreuseCity/scripts.pory"
	removeobject OLD_MAN
# 211 "data/maps/ChartreuseCity/scripts.pory"
	closedoor 16, 24
# 212 "data/maps/ChartreuseCity/scripts.pory"
	waitdooranim
# 213 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_7
# 214 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 215 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 216 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 217 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_14
# 222 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 223 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 224 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_8
# 225 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement
# 226 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_HIDE_APRIL_CC
# 227 "data/maps/ChartreuseCity/scripts.pory"
	removeobject APRIL_CC
# 228 "data/maps/ChartreuseCity/scripts.pory"
	removeobject OBJ_EVENT_ID_CAMERA
# 229 "data/maps/ChartreuseCity/scripts.pory"
	addvar VAR_CHARTREUSE_CITY_STATE, 1
# 230 "data/maps/ChartreuseCity/scripts.pory"
	release
	return

ChartreuseCity_EventScript_AlphaGrunts_2:
# 127 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_9
# 129 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 130 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_7
# 131 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 132 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 133 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 134 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_10
# 136 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 137 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 138 "data/maps/ChartreuseCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 139 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 140 "data/maps/ChartreuseCity/scripts.pory"
	playfanfare MUS_HEAL
# 141 "data/maps/ChartreuseCity/scripts.pory"
	waitfanfare
# 142 "data/maps/ChartreuseCity/scripts.pory"
	special HealPlayerParty
# 143 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 144 "data/maps/ChartreuseCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 145 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 146 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 147 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 148 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 149 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
	goto ChartreuseCity_EventScript_AlphaGrunts_1

ChartreuseCity_EventScript_AlphaGrunts_5:
# 155 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_9
# 157 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 158 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_7
# 159 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 160 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 161 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 162 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_10
# 164 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 165 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 166 "data/maps/ChartreuseCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 167 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 168 "data/maps/ChartreuseCity/scripts.pory"
	playfanfare MUS_HEAL
# 169 "data/maps/ChartreuseCity/scripts.pory"
	waitfanfare
# 170 "data/maps/ChartreuseCity/scripts.pory"
	special HealPlayerParty
# 171 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 172 "data/maps/ChartreuseCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 173 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 174 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 175 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 176 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 177 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
	goto ChartreuseCity_EventScript_AlphaGrunts_4


ChartreuseCity_NPCScript_Dexnav::
# 242 "data/maps/ChartreuseCity/scripts.pory"
	lock
# 243 "data/maps/ChartreuseCity/scripts.pory"
	faceplayer
# 244 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_NPCScript_Dexnav_Text_0
# 249 "data/maps/ChartreuseCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 250 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_NPCScript_Dexnav_Text_1
# 251 "data/maps/ChartreuseCity/scripts.pory"
	waitfanfare
# 252 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_DEXNAV_GET
# 253 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_NPCScript_Dexnav_Text_2
# 261 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 262 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 263 "data/maps/ChartreuseCity/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq ChartreuseCity_NPCScript_Dexnav_2
# 267 "data/maps/ChartreuseCity/scripts.pory"
	applymovement AIDE, ChartreuseCity_NPCScript_Dexnav_Movement_1
# 268 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
ChartreuseCity_NPCScript_Dexnav_1:
# 270 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_HIDE_PROFESSOR_AIDE
# 271 "data/maps/ChartreuseCity/scripts.pory"
	removeobject AIDE
# 272 "data/maps/ChartreuseCity/scripts.pory"
	addvar VAR_CHARTREUSE_CITY_STATE, 1
# 273 "data/maps/ChartreuseCity/scripts.pory"
	release
	return

ChartreuseCity_NPCScript_Dexnav_2:
# 264 "data/maps/ChartreuseCity/scripts.pory"
	applymovement AIDE, ChartreuseCity_NPCScript_Dexnav_Movement_0
# 265 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
	goto ChartreuseCity_NPCScript_Dexnav_1


ChartreuseCity_NPCScript_1::
# 277 "data/maps/ChartreuseCity/scripts.pory"
	lock
# 278 "data/maps/ChartreuseCity/scripts.pory"
	faceplayer
# 279 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_NPCScript_1_Text_0
# 282 "data/maps/ChartreuseCity/scripts.pory"
	release
	return


ChartreuseCity_NPCScript_2::
# 286 "data/maps/ChartreuseCity/scripts.pory"
	lock
# 287 "data/maps/ChartreuseCity/scripts.pory"
	faceplayer
# 288 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_NPCScript_2_Text_0
# 292 "data/maps/ChartreuseCity/scripts.pory"
	release
	return


ChartreuseCity_SignScript_Location::
# 296 "data/maps/ChartreuseCity/scripts.pory"
	lock
# 297 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_SignScript_Location_Text_0
# 298 "data/maps/ChartreuseCity/scripts.pory"
	release
	return


ChartreuseCity_SignScript_Gym::
# 302 "data/maps/ChartreuseCity/scripts.pory"
	lock
# 303 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_SignScript_Gym_Text_0
# 305 "data/maps/ChartreuseCity/scripts.pory"
	release
	return


ChartreuseCity_ItemScript_GreatBall::
# 309 "data/maps/ChartreuseCity/scripts.pory"
	finditem ITEM_GREAT_BALL, 3
# 310 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_ITEM_CHARTREUSE_CITY_GREAT_BALL
	return


# 22 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_0:
# 22 "data/maps/ChartreuseCity/scripts.pory"
	face_right
# 22 "data/maps/ChartreuseCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 27 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_1:
# 27 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 27 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 27 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 27 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 27 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
	step_end

# 37 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_2:
# 37 "data/maps/ChartreuseCity/scripts.pory"
	face_down
	step_end

# 43 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_3:
# 43 "data/maps/ChartreuseCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 65 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_4:
# 65 "data/maps/ChartreuseCity/scripts.pory"
	face_right
	step_end

# 69 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_5:
# 69 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 69 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 69 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 69 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 69 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 69 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 69 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 69 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
	step_end

# 79 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_6:
# 79 "data/maps/ChartreuseCity/scripts.pory"
	face_up
	step_end

# 97 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_7:
# 97 "data/maps/ChartreuseCity/scripts.pory"
	face_left
	step_end

# 185 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_8:
# 185 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 185 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 185 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 185 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 185 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 185 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 185 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 185 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 185 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 185 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
	step_end

# 192 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_9:
# 192 "data/maps/ChartreuseCity/scripts.pory"
	walk_down
# 192 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 192 "data/maps/ChartreuseCity/scripts.pory"
	face_down
	step_end

# 202 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_10:
# 202 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 202 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
	step_end

# 207 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_11:
# 207 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
	step_end

# 264 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_NPCScript_Dexnav_Movement_0:
# 264 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 264 "data/maps/ChartreuseCity/scripts.pory"
	walk_down
# 264 "data/maps/ChartreuseCity/scripts.pory"
	walk_down
# 264 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 264 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 264 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 264 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 264 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 264 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 264 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 264 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 264 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 264 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 264 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 264 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 264 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
	step_end

# 267 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_NPCScript_Dexnav_Movement_1:
# 267 "data/maps/ChartreuseCity/scripts.pory"
	walk_down
# 267 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 267 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 267 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 267 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 267 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 267 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 267 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 267 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 267 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 267 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 267 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
	step_end

ChartreuseCity_EventScript_AlphaGrunts_Text_0:
# 29 "data/maps/ChartreuseCity/scripts.pory"
	.string "As I have told you every week for the\n"
	.string "last two months, I'm not interested!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}But sir, Arceus' return is imminent!\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}The only way to ensure your safety is\n"
	.string "by joining us!\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Pfft...I'll take my chances.$"

ChartreuseCity_EventScript_AlphaGrunts_Text_1:
# 48 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Hey you! Come over here!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_2:
# 53 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Would you like to hear about our lord\n"
	.string "and savior, the Almighty Arceus?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}For only 10% of your annual battle\n"
	.string "earnings, we can promise you eternal\l"
	.string "life. Won't you join Team Alpha?$"

ChartreuseCity_EventScript_AlphaGrunts_Text_3:
# 75 "data/maps/ChartreuseCity/scripts.pory"
	.string "{PLAYER}, there you are!\n"
	.string "I've been at the Gym waiting for you.\p"
	.string "What's the hold up?$"

ChartreuseCity_EventScript_AlphaGrunts_Text_4:
# 83 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}We're here trying to save your friend\n"
	.string "from eternal damnation!\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}...What? That's ridiculous, what are\n"
	.string "you talking about?$"

ChartreuseCity_EventScript_AlphaGrunts_Text_5:
# 90 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Agh, why won't anyone listen to us?!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_6:
# 94 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}If we defeat you in battle, you'll have\n"
	.string "to join us!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_7:
# 101 "data/maps/ChartreuseCity/scripts.pory"
	.string "{PLAYER}, I'd help you with this,\n"
	.string "but I'm ashamed to say that all of my\l"
	.string "Pokémon are in pretty bad shape after\l"
	.string "my defeat at the Gym...\p"
	.string "Let me heal your Pokémon real quick.$"

ChartreuseCity_EventScript_AlphaGrunts_Text_8:
# 116 "data/maps/ChartreuseCity/scripts.pory"
	.string "Alright, get these guys out of here,\n"
	.string "{PLAYER}!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_9:
# 127 "data/maps/ChartreuseCity/scripts.pory"
	.string "I don't care if you won,\n"
	.string "we're still not joining Team Alpha!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_10:
# 134 "data/maps/ChartreuseCity/scripts.pory"
	.string "Let me heal your Pokémon again,\n"
	.string "{PLAYER}.$"

ChartreuseCity_EventScript_AlphaGrunts_Text_11:
# 151 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Alright, now it's my turn!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_12:
# 180 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Alright, alright, we'll leave.\n"
	.string "We'll be seeing you around though!\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Have a blessed day!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_13:
# 194 "data/maps/ChartreuseCity/scripts.pory"
	.string "Thank you for getting them to go away.\n"
	.string "Every week they show up here and start\l"
	.string "talking about Arceus this, Arceus that!\p"
	.string "I even put up a {COLOR RED}{SHADOW LIGHT_RED}NO SOLICITING{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} sign,\n"
	.string "but does that stop them? No!\p"
	.string "Take care, you two.$"

ChartreuseCity_EventScript_AlphaGrunts_Text_14:
# 217 "data/maps/ChartreuseCity/scripts.pory"
	.string "Now that that's over with...\n"
	.string "It's time to challenge the Gym Leader!\p"
	.string "I'm going to go first, but I wish\n"
	.string "you the best of luck, {PLAYER}!\p"
	.string "See ya later!$"

ChartreuseCity_NPCScript_Dexnav_Text_0:
# 244 "data/maps/ChartreuseCity/scripts.pory"
	.string "{PLAYER}, there you are!\p"
	.string "Congratulations on your first Gym\n"
	.string "victory!\p"
	.string "Professor Aspen sent me here to give\n"
	.string "you this.$"

ChartreuseCity_NPCScript_Dexnav_Text_1:
# 250 "data/maps/ChartreuseCity/scripts.pory"
	.string "{PLAYER} received the Dexnav!$"

ChartreuseCity_NPCScript_Dexnav_Text_2:
# 253 "data/maps/ChartreuseCity/scripts.pory"
	.string "The Dexnav is a very helpful upgrade\n"
	.string "to your Pokédex.\p"
	.string "It shows you information about wild\n"
	.string "Pokémon in your current location,\l"
	.string "and makes it much easier to find rare\l"
	.string "Pokémon!\p"
	.string "We hope this helps you with your\n"
	.string "research, {PLAYER}!$"

ChartreuseCity_NPCScript_1_Text_0:
# 279 "data/maps/ChartreuseCity/scripts.pory"
	.string "I keep losing against Grant...\n"
	.string "No matter what kind of strategy I use,\l"
	.string "he always wins!$"

ChartreuseCity_NPCScript_2_Text_0:
# 288 "data/maps/ChartreuseCity/scripts.pory"
	.string "I keep coming across these weird little\n"
	.string "trees that block my path.\p"
	.string "They're too tough to cut down by\n"
	.string "myself, but maybe a Pokémon could help?$"

ChartreuseCity_SignScript_Location_Text_0:
# 297 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Chartreuse City.$"

ChartreuseCity_SignScript_Gym_Text_0:
# 303 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Chartreuse City Pokémon Gym.\n"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Leader: Grant.$"

Alpha1_Outro::
# 233 "data/maps/ChartreuseCity/scripts.pory"
	.string "But...how? I had Arceus on my side!$"

Alpha2_Outro::
# 237 "data/maps/ChartreuseCity/scripts.pory"
	.string "Ignored, once again...$"
