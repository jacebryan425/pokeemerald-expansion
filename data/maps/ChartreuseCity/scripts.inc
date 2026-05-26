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
# 15 "data/maps/ChartreuseCity/scripts.pory"
	call ChartreuseCity_EventScript_Dexnav
	return


ChartreuseCity_EventScript_AlphaGrunts::
# 21 "data/maps/ChartreuseCity/scripts.pory"
	lock
# 22 "data/maps/ChartreuseCity/scripts.pory"
	playse SE_PIN
# 23 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_0
# 24 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 25 "data/maps/ChartreuseCity/scripts.pory"
	waitse
# 26 "data/maps/ChartreuseCity/scripts.pory"
	delay 30
# 27 "data/maps/ChartreuseCity/scripts.pory"
	special SpawnCameraObject
# 28 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ChartreuseCity_EventScript_AlphaGrunts_Movement_1
# 29 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 30 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_0
# 36 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 37 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 38 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_2
# 39 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 40 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA2_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_2
# 41 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 42 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 43 "data/maps/ChartreuseCity/scripts.pory"
	playse SE_PIN
# 44 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_3
# 45 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 46 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA2_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_3
# 47 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 48 "data/maps/ChartreuseCity/scripts.pory"
	waitse
# 49 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_1
# 50 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 51 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 52 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_1
# 53 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 54 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_2
# 59 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 60 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 61 "data/maps/ChartreuseCity/scripts.pory"
	playse SE_PIN
# 62 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_0
# 63 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 64 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA2_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_0
# 65 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 66 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 67 "data/maps/ChartreuseCity/scripts.pory"
	waitse
# 68 "data/maps/ChartreuseCity/scripts.pory"
	clearflag FLAG_HIDE_APRIL_CC
# 69 "data/maps/ChartreuseCity/scripts.pory"
	addobject APRIL_CC
# 70 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_5
# 71 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 72 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_2
# 73 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 74 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA2_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_2
# 75 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 76 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_3
# 79 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 80 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 81 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 83 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 84 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_4
# 88 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 89 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 90 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 91 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_5
# 92 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 93 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_2
# 94 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 95 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_6
# 97 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 98 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_7
# 99 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 100 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 101 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 102 "data/maps/ChartreuseCity/scripts.pory"
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
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_8
# 119 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 120 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 121 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 122 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 123 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 124 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 125 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 126 "data/maps/ChartreuseCity/scripts.pory"
	trainerbattle_no_intro TRAINER_ALPHA1_CC, Alpha1_Outro
# 127 "data/maps/ChartreuseCity/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq ChartreuseCity_EventScript_AlphaGrunts_2
ChartreuseCity_EventScript_AlphaGrunts_1:
# 152 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_11
# 153 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 154 "data/maps/ChartreuseCity/scripts.pory"
	trainerbattle_no_intro TRAINER_ALPHA2_CC, Alpha2_Outro
# 155 "data/maps/ChartreuseCity/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq ChartreuseCity_EventScript_AlphaGrunts_5
ChartreuseCity_EventScript_AlphaGrunts_4:
# 180 "data/maps/ChartreuseCity/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 181 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_12
# 184 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 185 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 186 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA2_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_8
# 187 "data/maps/ChartreuseCity/scripts.pory"
	applymovement ALPHA1_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_8
# 188 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 189 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_HIDE_ALPHA_CC_2
# 190 "data/maps/ChartreuseCity/scripts.pory"
	removeobject ALPHA2_CC
# 191 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_HIDE_ALPHA_CC_1
# 192 "data/maps/ChartreuseCity/scripts.pory"
	removeobject ALPHA1_CC
# 193 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OLD_MAN, ChartreuseCity_EventScript_AlphaGrunts_Movement_9
# 194 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 195 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_13
# 201 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 202 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 203 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OLD_MAN, ChartreuseCity_EventScript_AlphaGrunts_Movement_10
# 204 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 205 "data/maps/ChartreuseCity/scripts.pory"
	playse SE_EXIT
# 206 "data/maps/ChartreuseCity/scripts.pory"
	opendoor 16, 24
# 207 "data/maps/ChartreuseCity/scripts.pory"
	waitdooranim
# 208 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OLD_MAN, ChartreuseCity_EventScript_AlphaGrunts_Movement_11
# 209 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 210 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_HIDE_OLD_MAN_CC
# 211 "data/maps/ChartreuseCity/scripts.pory"
	removeobject OLD_MAN
# 212 "data/maps/ChartreuseCity/scripts.pory"
	closedoor 16, 24
# 213 "data/maps/ChartreuseCity/scripts.pory"
	waitdooranim
# 214 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_7
# 215 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 216 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 217 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 218 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_14
# 223 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 224 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 225 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_8
# 226 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement
# 227 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_HIDE_APRIL_CC
# 228 "data/maps/ChartreuseCity/scripts.pory"
	removeobject APRIL_CC
# 229 "data/maps/ChartreuseCity/scripts.pory"
	removeobject OBJ_EVENT_ID_CAMERA
# 230 "data/maps/ChartreuseCity/scripts.pory"
	addvar VAR_CHARTREUSE_CITY_STATE, 1
# 231 "data/maps/ChartreuseCity/scripts.pory"
	release
	return

ChartreuseCity_EventScript_AlphaGrunts_2:
# 128 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_9
# 130 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 131 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_7
# 132 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 133 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 134 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 135 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_10
# 137 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 138 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 139 "data/maps/ChartreuseCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 140 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 141 "data/maps/ChartreuseCity/scripts.pory"
	playfanfare MUS_HEAL
# 142 "data/maps/ChartreuseCity/scripts.pory"
	waitfanfare
# 143 "data/maps/ChartreuseCity/scripts.pory"
	special HealPlayerParty
# 144 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 145 "data/maps/ChartreuseCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 146 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 147 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 148 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 149 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 150 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
	goto ChartreuseCity_EventScript_AlphaGrunts_1

ChartreuseCity_EventScript_AlphaGrunts_5:
# 156 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_9
# 158 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 159 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_7
# 160 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 161 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 162 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 163 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_AlphaGrunts_Text_10
# 165 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 166 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 167 "data/maps/ChartreuseCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 168 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 169 "data/maps/ChartreuseCity/scripts.pory"
	playfanfare MUS_HEAL
# 170 "data/maps/ChartreuseCity/scripts.pory"
	waitfanfare
# 171 "data/maps/ChartreuseCity/scripts.pory"
	special HealPlayerParty
# 172 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 173 "data/maps/ChartreuseCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 174 "data/maps/ChartreuseCity/scripts.pory"
	delay 12
# 175 "data/maps/ChartreuseCity/scripts.pory"
	applymovement APRIL_CC, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 176 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 177 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_6
# 178 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
	goto ChartreuseCity_EventScript_AlphaGrunts_4


ChartreuseCity_EventScript_Dexnav::
# 243 "data/maps/ChartreuseCity/scripts.pory"
	lock
# 244 "data/maps/ChartreuseCity/scripts.pory"
	playse SE_PIN
# 245 "data/maps/ChartreuseCity/scripts.pory"
	applymovement AIDE, ChartreuseCity_EventScript_Dexnav_Movement_0
# 246 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 247 "data/maps/ChartreuseCity/scripts.pory"
	waitse
# 248 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_Dexnav_Text_0
# 249 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 250 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 251 "data/maps/ChartreuseCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCity_EventScript_AlphaGrunts_Movement_4
# 252 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 253 "data/maps/ChartreuseCity/scripts.pory"
	applymovement AIDE, ChartreuseCity_EventScript_Dexnav_Movement_1
# 254 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 255 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_Dexnav_Text_1
# 259 "data/maps/ChartreuseCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 260 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_Dexnav_Text_2
# 261 "data/maps/ChartreuseCity/scripts.pory"
	waitfanfare
# 262 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_DEXNAV_GET
# 263 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_EventScript_Dexnav_Text_3
# 271 "data/maps/ChartreuseCity/scripts.pory"
	waitmessage
# 272 "data/maps/ChartreuseCity/scripts.pory"
	closemessage
# 273 "data/maps/ChartreuseCity/scripts.pory"
	applymovement AIDE, ChartreuseCity_EventScript_Dexnav_Movement_2
# 274 "data/maps/ChartreuseCity/scripts.pory"
	waitmovement 0
# 275 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_HIDE_PROFESSOR_AIDE
# 276 "data/maps/ChartreuseCity/scripts.pory"
	removeobject AIDE
# 277 "data/maps/ChartreuseCity/scripts.pory"
	addvar VAR_CHARTREUSE_CITY_STATE, 1
# 278 "data/maps/ChartreuseCity/scripts.pory"
	release
	return


ChartreuseCity_NPCScript_1::
# 282 "data/maps/ChartreuseCity/scripts.pory"
	lock
# 283 "data/maps/ChartreuseCity/scripts.pory"
	faceplayer
# 284 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_NPCScript_1_Text_0
# 287 "data/maps/ChartreuseCity/scripts.pory"
	release
	return


ChartreuseCity_NPCScript_2::
# 291 "data/maps/ChartreuseCity/scripts.pory"
	lock
# 292 "data/maps/ChartreuseCity/scripts.pory"
	faceplayer
# 293 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_NPCScript_2_Text_0
# 297 "data/maps/ChartreuseCity/scripts.pory"
	release
	return


ChartreuseCity_SignScript_Location::
# 301 "data/maps/ChartreuseCity/scripts.pory"
	lock
# 302 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_SignScript_Location_Text_0
# 303 "data/maps/ChartreuseCity/scripts.pory"
	release
	return


ChartreuseCity_SignScript_Gym::
# 307 "data/maps/ChartreuseCity/scripts.pory"
	lock
# 308 "data/maps/ChartreuseCity/scripts.pory"
	msgbox ChartreuseCity_SignScript_Gym_Text_0
# 310 "data/maps/ChartreuseCity/scripts.pory"
	release
	return


ChartreuseCity_ItemScript_GreatBall::
# 314 "data/maps/ChartreuseCity/scripts.pory"
	finditem ITEM_GREAT_BALL, 3
# 315 "data/maps/ChartreuseCity/scripts.pory"
	setflag FLAG_ITEM_CHARTREUSE_CITY_GREAT_BALL
	return


# 23 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_0:
# 23 "data/maps/ChartreuseCity/scripts.pory"
	face_right
# 23 "data/maps/ChartreuseCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 28 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_1:
# 28 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 28 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 28 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 28 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 28 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
	step_end

# 38 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_2:
# 38 "data/maps/ChartreuseCity/scripts.pory"
	face_down
	step_end

# 44 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_3:
# 44 "data/maps/ChartreuseCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 66 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_4:
# 66 "data/maps/ChartreuseCity/scripts.pory"
	face_right
	step_end

# 70 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_5:
# 70 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 70 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 70 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 70 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 70 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 70 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 70 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 70 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
	step_end

# 80 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_6:
# 80 "data/maps/ChartreuseCity/scripts.pory"
	face_up
	step_end

# 98 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_7:
# 98 "data/maps/ChartreuseCity/scripts.pory"
	face_left
	step_end

# 186 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_8:
# 186 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 186 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 186 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 186 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 186 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 186 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 186 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 186 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 186 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 186 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
	step_end

# 193 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_9:
# 193 "data/maps/ChartreuseCity/scripts.pory"
	walk_down
# 193 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 193 "data/maps/ChartreuseCity/scripts.pory"
	face_down
	step_end

# 203 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_10:
# 203 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 203 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
	step_end

# 208 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_AlphaGrunts_Movement_11:
# 208 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
	step_end

# 245 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_Dexnav_Movement_0:
# 245 "data/maps/ChartreuseCity/scripts.pory"
	face_left
# 245 "data/maps/ChartreuseCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 253 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_Dexnav_Movement_1:
# 253 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
# 253 "data/maps/ChartreuseCity/scripts.pory"
	walk_left
	step_end

# 273 "data/maps/ChartreuseCity/scripts.pory"
ChartreuseCity_EventScript_Dexnav_Movement_2:
# 273 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 273 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 273 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 273 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 273 "data/maps/ChartreuseCity/scripts.pory"
	walk_right
# 273 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 273 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 273 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 273 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 273 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
# 273 "data/maps/ChartreuseCity/scripts.pory"
	walk_up
	step_end

ChartreuseCity_EventScript_AlphaGrunts_Text_0:
# 30 "data/maps/ChartreuseCity/scripts.pory"
	.string "As I have told you every week for the\n"
	.string "last two months, I'm not interested!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}But sir, Arceus' return is imminent!\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}The only way to ensure your safety is\n"
	.string "by joining us!\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Pfft...I'll take my chances.$"

ChartreuseCity_EventScript_AlphaGrunts_Text_1:
# 49 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Hey you! Come over here!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_2:
# 54 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Would you like to hear about our lord\n"
	.string "and savior, the Almighty Arceus?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}For only 10% of your annual battle\n"
	.string "earnings, we can promise you eternal\l"
	.string "life. Won't you join Team Alpha?$"

ChartreuseCity_EventScript_AlphaGrunts_Text_3:
# 76 "data/maps/ChartreuseCity/scripts.pory"
	.string "{PLAYER}, there you are!\n"
	.string "I've been at the Gym waiting for you.\p"
	.string "What's the hold up?$"

ChartreuseCity_EventScript_AlphaGrunts_Text_4:
# 84 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}We're here trying to save your friend\n"
	.string "from eternal damnation!\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}...What? That's ridiculous, what are\n"
	.string "you talking about?$"

ChartreuseCity_EventScript_AlphaGrunts_Text_5:
# 91 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Agh, why won't anyone listen to us?!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_6:
# 95 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}If we defeat you in battle, you'll have\n"
	.string "to join us!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_7:
# 102 "data/maps/ChartreuseCity/scripts.pory"
	.string "{PLAYER}, I'd help you with this,\n"
	.string "but I'm ashamed to say that all of my\l"
	.string "Pokémon are in pretty bad shape after\l"
	.string "my defeat at the Gym...\p"
	.string "Let me heal your Pokémon real quick.$"

ChartreuseCity_EventScript_AlphaGrunts_Text_8:
# 117 "data/maps/ChartreuseCity/scripts.pory"
	.string "Alright, get these guys out of here,\n"
	.string "{PLAYER}!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_9:
# 128 "data/maps/ChartreuseCity/scripts.pory"
	.string "I don't care if you won,\n"
	.string "we're still not joining Team Alpha!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_10:
# 135 "data/maps/ChartreuseCity/scripts.pory"
	.string "Let me heal your Pokémon again,\n"
	.string "{PLAYER}.$"

ChartreuseCity_EventScript_AlphaGrunts_Text_11:
# 152 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Alright, now it's my turn!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_12:
# 181 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Alright, alright, we'll leave.\n"
	.string "We'll be seeing you around though!\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Have a blessed day!$"

ChartreuseCity_EventScript_AlphaGrunts_Text_13:
# 195 "data/maps/ChartreuseCity/scripts.pory"
	.string "Thank you for getting them to go away.\n"
	.string "Every week they show up here and start\l"
	.string "talking about Arceus this, Arceus that!\p"
	.string "I even put up a {COLOR RED}{SHADOW LIGHT_RED}NO SOLICITING{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} sign,\n"
	.string "but does that stop them? No!\p"
	.string "Take care, you two.$"

ChartreuseCity_EventScript_AlphaGrunts_Text_14:
# 218 "data/maps/ChartreuseCity/scripts.pory"
	.string "Now that that's over with...\n"
	.string "It's time to challenge the Gym Leader!\p"
	.string "I'm going to go first, but I wish\n"
	.string "you the best of luck, {PLAYER}!\p"
	.string "See ya later!$"

ChartreuseCity_EventScript_Dexnav_Text_0:
# 248 "data/maps/ChartreuseCity/scripts.pory"
	.string "{PLAYER}, there you are!$"

ChartreuseCity_EventScript_Dexnav_Text_1:
# 255 "data/maps/ChartreuseCity/scripts.pory"
	.string "Congratulations on your first Gym\n"
	.string "victory!\p"
	.string "Professor Aspen sent me here to give\n"
	.string "you this.$"

ChartreuseCity_EventScript_Dexnav_Text_2:
# 260 "data/maps/ChartreuseCity/scripts.pory"
	.string "{PLAYER} received the Dexnav!$"

ChartreuseCity_EventScript_Dexnav_Text_3:
# 263 "data/maps/ChartreuseCity/scripts.pory"
	.string "The Dexnav is a very helpful upgrade\n"
	.string "to your Pokédex.\p"
	.string "It shows you information about wild\n"
	.string "Pokémon in your current location,\l"
	.string "and makes it much easier to find rare\l"
	.string "Pokémon!\p"
	.string "We hope this helps you with your\n"
	.string "research, {PLAYER}!$"

ChartreuseCity_NPCScript_1_Text_0:
# 284 "data/maps/ChartreuseCity/scripts.pory"
	.string "I keep losing against Grant...\n"
	.string "No matter what kind of strategy I use,\l"
	.string "he always wins!$"

ChartreuseCity_NPCScript_2_Text_0:
# 293 "data/maps/ChartreuseCity/scripts.pory"
	.string "I keep coming across these weird little\n"
	.string "trees that block my path.\p"
	.string "They're too tough to cut down by\n"
	.string "myself, but maybe a Pokémon could help?$"

ChartreuseCity_SignScript_Location_Text_0:
# 302 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Chartreuse City.$"

ChartreuseCity_SignScript_Gym_Text_0:
# 308 "data/maps/ChartreuseCity/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Chartreuse City Pokémon Gym.\n"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Leader: Grant.$"

Alpha1_Outro::
# 234 "data/maps/ChartreuseCity/scripts.pory"
	.string "But...how? I had Arceus on my side!$"

Alpha2_Outro::
# 238 "data/maps/ChartreuseCity/scripts.pory"
	.string "Ignored, once again...$"
