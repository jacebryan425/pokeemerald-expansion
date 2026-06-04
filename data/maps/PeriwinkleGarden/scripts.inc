PeriwinkleGarden_MapScripts::
	.byte 0


PeriwinkleGarden_EventScript_BeginStarterSequence::
# 4 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 5 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_BeginStarterSequence_Text_0
# 6 "data/maps/PeriwinkleGarden/scripts.pory"
	setrespawn HEAL_LOCATION_PERIWINKLE_TOWN
# 7 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_GARDEN_STATE, 1
# 8 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return


PeriwinkleGarden_EventScript_ProfessorAspen::
# 12 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 13 "data/maps/PeriwinkleGarden/scripts.pory"
	faceplayer
# 14 "data/maps/PeriwinkleGarden/scripts.pory"
	goto_if_set FLAG_STARTER_SELECTION, PeriwinkleGarden_EventScript_ProfessorAspen_2
# 19 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_1
# 20 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_FaceDown
# 21 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 22 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_2
# 26 "data/maps/PeriwinkleGarden/scripts.pory"
	faceplayer
# 27 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_3, MSGBOX_YESNO
# 31 "data/maps/PeriwinkleGarden/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PeriwinkleGarden_EventScript_ProfessorAspen_5
# 55 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_7
# 56 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_FaceDown
# 57 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 58 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_STARTER_SELECTION
PeriwinkleGarden_EventScript_ProfessorAspen_1:
# 61 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return

PeriwinkleGarden_EventScript_ProfessorAspen_2:
# 15 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_0
# 16 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_FaceDown
# 17 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
	goto PeriwinkleGarden_EventScript_ProfessorAspen_1

PeriwinkleGarden_EventScript_ProfessorAspen_5:
# 32 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_4, MSGBOX_YESNO
# 33 "data/maps/PeriwinkleGarden/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PeriwinkleGarden_EventScript_ProfessorAspen_8
# 49 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_7
# 50 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_FaceDown
# 51 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 52 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_STARTER_SELECTION
	goto PeriwinkleGarden_EventScript_ProfessorAspen_1

PeriwinkleGarden_EventScript_ProfessorAspen_8:
# 34 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_5, MSGBOX_YESNO
# 36 "data/maps/PeriwinkleGarden/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PeriwinkleGarden_EventScript_ProfessorAspen_11
# 43 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_7
# 44 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_FaceDown
# 45 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 46 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_STARTER_SELECTION
	goto PeriwinkleGarden_EventScript_ProfessorAspen_1

PeriwinkleGarden_EventScript_ProfessorAspen_11:
# 37 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_6
# 39 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_FaceDown
# 40 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 41 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_STARTER_SELECTION
	goto PeriwinkleGarden_EventScript_ProfessorAspen_1


PeriwinkleGarden_EventScript_PreventEscape::
# 65 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 66 "data/maps/PeriwinkleGarden/scripts.pory"
	goto_if_set FLAG_STARTER_SELECTION, PeriwinkleGarden_EventScript_PreventEscape_2
# 72 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_PreventEscape_Text_1
# 73 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 74 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PeriwinkleGarden_WalkLeft
# 75 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
PeriwinkleGarden_EventScript_PreventEscape_1:
# 77 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return

PeriwinkleGarden_EventScript_PreventEscape_2:
# 67 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_PreventEscape_Text_0
# 68 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 69 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PeriwinkleGarden_WalkLeft
# 70 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
	goto PeriwinkleGarden_EventScript_PreventEscape_1


PeriwinkleGarden_EventScript_ChikoritaBall::
# 81 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 82 "data/maps/PeriwinkleGarden/scripts.pory"
	faceplayer
# 83 "data/maps/PeriwinkleGarden/scripts.pory"
	goto_if_set FLAG_STARTER_SELECTION, PeriwinkleGarden_EventScript_ChikoritaBall_2
# 121 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_4
PeriwinkleGarden_EventScript_ChikoritaBall_1:
# 124 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return

PeriwinkleGarden_EventScript_ChikoritaBall_2:
# 84 "data/maps/PeriwinkleGarden/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 85 "data/maps/PeriwinkleGarden/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 86 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmoncry
# 87 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_0, MSGBOX_YESNO
# 88 "data/maps/PeriwinkleGarden/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PeriwinkleGarden_EventScript_ChikoritaBall_6
PeriwinkleGarden_EventScript_ChikoritaBall_5:
# 119 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
	goto PeriwinkleGarden_EventScript_ChikoritaBall_1

PeriwinkleGarden_EventScript_ChikoritaBall_6:
# 89 "data/maps/PeriwinkleGarden/scripts.pory"
	givemon SPECIES_CHIKORITA, 5, ITEM_NONE
# 90 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 91 "data/maps/PeriwinkleGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 92 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_1
# 93 "data/maps/PeriwinkleGarden/scripts.pory"
	waitfanfare
# 94 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_CHIKORITA_CHOSEN
# 95 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject CHIKORITA_BALL
# 96 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
# 97 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_2
# 98 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 99 "data/maps/PeriwinkleGarden/scripts.pory"
	closemessage
# 100 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_TORCHIC_CHOSEN
# 101 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject TORCHIC_BALL
# 102 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseChikorita_1
# 103 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 104 "data/maps/PeriwinkleGarden/scripts.pory"
	delay 30
# 105 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SQUIRTLE_CHOSEN
# 106 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject SQUIRTLE_BALL
# 107 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseChikorita_2
# 108 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 109 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_3
# 110 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 111 "data/maps/PeriwinkleGarden/scripts.pory"
	closemessage
# 112 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ProfessorBirchWalksAway
# 113 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 114 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_HIDE_PROFESSOR_ASPEN
# 115 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject PROFESSOR_ASPEN
# 116 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_GARDEN_STATE, 1
# 117 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_TOWN_STATE, 1
	goto PeriwinkleGarden_EventScript_ChikoritaBall_5


PeriwinkleGarden_EventScript_TorchicBall::
# 128 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 129 "data/maps/PeriwinkleGarden/scripts.pory"
	faceplayer
# 130 "data/maps/PeriwinkleGarden/scripts.pory"
	goto_if_set FLAG_STARTER_SELECTION, PeriwinkleGarden_EventScript_TorchicBall_2
# 171 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_TorchicBall_Text_2
PeriwinkleGarden_EventScript_TorchicBall_1:
# 174 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return

PeriwinkleGarden_EventScript_TorchicBall_2:
# 131 "data/maps/PeriwinkleGarden/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 132 "data/maps/PeriwinkleGarden/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_NORMAL
# 133 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmoncry
# 134 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_TorchicBall_Text_0, MSGBOX_YESNO
# 135 "data/maps/PeriwinkleGarden/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PeriwinkleGarden_EventScript_TorchicBall_6
PeriwinkleGarden_EventScript_TorchicBall_5:
# 169 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
	goto PeriwinkleGarden_EventScript_TorchicBall_1

PeriwinkleGarden_EventScript_TorchicBall_6:
# 136 "data/maps/PeriwinkleGarden/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_NONE
# 137 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 138 "data/maps/PeriwinkleGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 139 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_TorchicBall_Text_1
# 140 "data/maps/PeriwinkleGarden/scripts.pory"
	waitfanfare
# 141 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_TORCHIC_CHOSEN
# 142 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject TORCHIC_BALL
# 143 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
# 144 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_2
# 145 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 146 "data/maps/PeriwinkleGarden/scripts.pory"
	closemessage
# 147 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseTorchic_1
# 148 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 149 "data/maps/PeriwinkleGarden/scripts.pory"
	delay 30
# 150 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_CHIKORITA_CHOSEN
# 151 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject CHIKORITA_BALL
# 152 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseTorchic_2
# 153 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 154 "data/maps/PeriwinkleGarden/scripts.pory"
	delay 30
# 155 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SQUIRTLE_CHOSEN
# 156 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject SQUIRTLE_BALL
# 157 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseTorchic_1
# 158 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 159 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_3
# 160 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 161 "data/maps/PeriwinkleGarden/scripts.pory"
	closemessage
# 162 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ProfessorBirchWalksAway
# 163 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 164 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_HIDE_PROFESSOR_ASPEN
# 165 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject PROFESSOR_ASPEN
# 166 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_GARDEN_STATE, 1
# 167 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_TOWN_STATE, 1
	goto PeriwinkleGarden_EventScript_TorchicBall_5


PeriwinkleGarden_EventScript_SquirtleBall::
# 178 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 179 "data/maps/PeriwinkleGarden/scripts.pory"
	faceplayer
# 180 "data/maps/PeriwinkleGarden/scripts.pory"
	goto_if_set FLAG_STARTER_SELECTION, PeriwinkleGarden_EventScript_SquirtleBall_2
# 218 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_SquirtleBall_Text_2
PeriwinkleGarden_EventScript_SquirtleBall_1:
# 221 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return

PeriwinkleGarden_EventScript_SquirtleBall_2:
# 181 "data/maps/PeriwinkleGarden/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 182 "data/maps/PeriwinkleGarden/scripts.pory"
	playmoncry SPECIES_SQUIRTLE, CRY_MODE_NORMAL
# 183 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmoncry
# 184 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_SquirtleBall_Text_0, MSGBOX_YESNO
# 185 "data/maps/PeriwinkleGarden/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PeriwinkleGarden_EventScript_SquirtleBall_6
PeriwinkleGarden_EventScript_SquirtleBall_5:
# 216 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
	goto PeriwinkleGarden_EventScript_SquirtleBall_1

PeriwinkleGarden_EventScript_SquirtleBall_6:
# 186 "data/maps/PeriwinkleGarden/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5, ITEM_NONE
# 187 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 188 "data/maps/PeriwinkleGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 189 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_SquirtleBall_Text_1
# 190 "data/maps/PeriwinkleGarden/scripts.pory"
	waitfanfare
# 191 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SQUIRTLE_CHOSEN
# 192 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject SQUIRTLE_BALL
# 193 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
# 194 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_2
# 195 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 196 "data/maps/PeriwinkleGarden/scripts.pory"
	closemessage
# 197 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_TORCHIC_CHOSEN
# 198 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject TORCHIC_BALL
# 199 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseSquirtle_1
# 200 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 201 "data/maps/PeriwinkleGarden/scripts.pory"
	delay 30
# 202 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_CHIKORITA_CHOSEN
# 203 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject CHIKORITA_BALL
# 204 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseSquirtle_2
# 205 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 206 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_3
# 207 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 208 "data/maps/PeriwinkleGarden/scripts.pory"
	closemessage
# 209 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ProfessorBirchWalksAway
# 210 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 211 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_HIDE_PROFESSOR_ASPEN
# 212 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject PROFESSOR_ASPEN
# 213 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_GARDEN_STATE, 1
# 214 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_TOWN_STATE, 1
	goto PeriwinkleGarden_EventScript_SquirtleBall_5


PeriwinkleGarden_ItemScript_Potion::
# 225 "data/maps/PeriwinkleGarden/scripts.pory"
	finditem ITEM_POTION, 1
# 226 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_ITEM_PERIWINKLE_GARDEN_POTION
	return


# 229 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_FaceDown:
# 230 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 233 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_WalkDown:
# 234 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_down
	step_end

# 237 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_WalkLeft:
# 238 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
	step_end

# 241 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseChikorita_1:
# 242 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 243 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 246 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseChikorita_2:
# 247 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
# 248 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
# 249 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 252 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseTorchic_1:
# 253 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
# 254 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 257 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseTorchic_2:
# 258 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 259 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 260 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 263 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseSquirtle_1:
# 264 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
# 265 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 268 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseSquirtle_2:
# 269 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 270 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 271 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 274 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ProfessorBirchWalksAway:
# 275 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 275 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 275 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 275 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 275 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 275 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 275 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 275 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 275 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 275 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
	step_end

PeriwinkleGarden_EventScript_BeginStarterSequence_Text_0:
# 5 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Hey! Over here!$"

PeriwinkleGarden_EventScript_ProfessorAspen_Text_0:
# 15 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Go on and choose.$"

PeriwinkleGarden_EventScript_ProfessorAspen_Text_1:
# 19 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Professor Aspen:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Look at this!$"

PeriwinkleGarden_EventScript_ProfessorAspen_Text_2:
# 22 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Somebody caught these three poor\n"
	.string "Pokémon and just left them here,\l"
	.string "trapped inside of their balls!\p"
	.string "I know...$"

PeriwinkleGarden_EventScript_ProfessorAspen_Text_3:
# 27 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "{PLAYER}, you left all of your other\n"
	.string "Pokémon with Professor Oak, right?\p"
	.string "Would you like to have one of these\n"
	.string "Pokémon join you?$"

PeriwinkleGarden_EventScript_ProfessorAspen_Text_4:
# 32 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "...Really?$"

PeriwinkleGarden_EventScript_ProfessorAspen_Text_5:
# 34 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "They're really rare...\n"
	.string "...are you sure..?$"

PeriwinkleGarden_EventScript_ProfessorAspen_Text_6:
# 37 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "You've got to be messing with me.\n"
	.string "Just go on and choose.$"

PeriwinkleGarden_EventScript_ProfessorAspen_Text_7:
# 43 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Great! Go on and choose.$"

PeriwinkleGarden_EventScript_PreventEscape_Text_0:
# 67 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Wait, where are you going?!\nDon't you want to save one of\lthese Pokémon?$"

PeriwinkleGarden_EventScript_PreventEscape_Text_1:
# 72 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Wait, don't go!\nCome and see this!$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_0:
# 87 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Do you want the Leaf Pokémon,\nChikorita?$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_1:
# 92 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "{PLAYER} received Chikorita!$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_2:
# 97 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Very well, then.\pI'll take these two and release them\nback into their habitats.$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_3:
# 109 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "But first, I have something back at\nthe lab that I need to talk to you\labout, {PLAYER}.\pPlease come by when you have the time.$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_4:
# 121 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "It's a Poké Ball containing a\nwild Pokémon.\p...It's covered in weeds.$"

PeriwinkleGarden_EventScript_TorchicBall_Text_0:
# 134 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Do you want the Chick Pokémon,\nTorchic?$"

PeriwinkleGarden_EventScript_TorchicBall_Text_1:
# 139 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "{PLAYER} received Torchic!$"

PeriwinkleGarden_EventScript_TorchicBall_Text_2:
# 171 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "It's a Poké Ball containing a\nwild Pokémon.\p...It's hot to the touch.$"

PeriwinkleGarden_EventScript_SquirtleBall_Text_0:
# 184 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Do you want the Tiny Turtle Pokémon,\nSquirtle?$"

PeriwinkleGarden_EventScript_SquirtleBall_Text_1:
# 189 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "{PLAYER} received Squirtle!$"

PeriwinkleGarden_EventScript_SquirtleBall_Text_2:
# 218 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "It's a Poké Ball containing a\nwild Pokémon.\p...It's a little wet.$"
