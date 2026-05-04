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
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_0
# 15 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_FaceDown
# 16 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 17 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_1
# 18 "data/maps/PeriwinkleGarden/scripts.pory"
	faceplayer
# 19 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_2, MSGBOX_YESNO
PeriwinkleGarden_EventScript_ProfessorAspen_2:
# 20 "data/maps/PeriwinkleGarden/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne PeriwinkleGarden_EventScript_ProfessorAspen_3
# 23 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_4
# 24 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_FaceDown
# 25 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 26 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_STARTER_SELECTION
# 27 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return

PeriwinkleGarden_EventScript_ProfessorAspen_3:
# 21 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_3, MSGBOX_YESNO
	goto PeriwinkleGarden_EventScript_ProfessorAspen_2


PeriwinkleGarden_EventScript_PreventEscape::
# 31 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 32 "data/maps/PeriwinkleGarden/scripts.pory"
	goto_if_set FLAG_STARTER_SELECTION, PeriwinkleGarden_EventScript_PreventEscape_2
# 38 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_PreventEscape_Text_1
# 39 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 40 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PeriwinkleGarden_WalkLeft
# 41 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
PeriwinkleGarden_EventScript_PreventEscape_1:
# 43 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return

PeriwinkleGarden_EventScript_PreventEscape_2:
# 33 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_PreventEscape_Text_0
# 34 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 35 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PeriwinkleGarden_WalkLeft
# 36 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
	goto PeriwinkleGarden_EventScript_PreventEscape_1


PeriwinkleGarden_EventScript_ChikoritaBall::
# 47 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 48 "data/maps/PeriwinkleGarden/scripts.pory"
	faceplayer
# 49 "data/maps/PeriwinkleGarden/scripts.pory"
	goto_if_set FLAG_STARTER_SELECTION, PeriwinkleGarden_EventScript_ChikoritaBall_2
# 87 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_4
PeriwinkleGarden_EventScript_ChikoritaBall_1:
# 90 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return

PeriwinkleGarden_EventScript_ChikoritaBall_2:
# 50 "data/maps/PeriwinkleGarden/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 51 "data/maps/PeriwinkleGarden/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 52 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmoncry
# 53 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_0, MSGBOX_YESNO
# 54 "data/maps/PeriwinkleGarden/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PeriwinkleGarden_EventScript_ChikoritaBall_6
PeriwinkleGarden_EventScript_ChikoritaBall_5:
# 85 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
	goto PeriwinkleGarden_EventScript_ChikoritaBall_1

PeriwinkleGarden_EventScript_ChikoritaBall_6:
# 55 "data/maps/PeriwinkleGarden/scripts.pory"
	givemon SPECIES_CHIKORITA, 5, ITEM_NONE
# 56 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 57 "data/maps/PeriwinkleGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 58 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_1
# 59 "data/maps/PeriwinkleGarden/scripts.pory"
	waitfanfare
# 60 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_CHIKORITA_CHOSEN
# 61 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject CHIKORITA_BALL
# 62 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
# 63 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_2
# 64 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 65 "data/maps/PeriwinkleGarden/scripts.pory"
	closemessage
# 66 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_TORCHIC_CHOSEN
# 67 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject TORCHIC_BALL
# 68 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseChikorita_1
# 69 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 70 "data/maps/PeriwinkleGarden/scripts.pory"
	delay 30
# 71 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SQUIRTLE_CHOSEN
# 72 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject SQUIRTLE_BALL
# 73 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseChikorita_2
# 74 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 75 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_3
# 76 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 77 "data/maps/PeriwinkleGarden/scripts.pory"
	closemessage
# 78 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ProfessorBirchWalksAway
# 79 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 80 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_HIDE_PROFESSOR_ASPEN
# 81 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject PROFESSOR_ASPEN
# 82 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_GARDEN_STATE, 1
# 83 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_TOWN_STATE, 1
	goto PeriwinkleGarden_EventScript_ChikoritaBall_5


PeriwinkleGarden_EventScript_TorchicBall::
# 94 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 95 "data/maps/PeriwinkleGarden/scripts.pory"
	faceplayer
# 96 "data/maps/PeriwinkleGarden/scripts.pory"
	goto_if_set FLAG_STARTER_SELECTION, PeriwinkleGarden_EventScript_TorchicBall_2
# 137 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_TorchicBall_Text_2
PeriwinkleGarden_EventScript_TorchicBall_1:
# 140 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return

PeriwinkleGarden_EventScript_TorchicBall_2:
# 97 "data/maps/PeriwinkleGarden/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 98 "data/maps/PeriwinkleGarden/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_NORMAL
# 99 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmoncry
# 100 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_TorchicBall_Text_0, MSGBOX_YESNO
# 101 "data/maps/PeriwinkleGarden/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PeriwinkleGarden_EventScript_TorchicBall_6
PeriwinkleGarden_EventScript_TorchicBall_5:
# 135 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
	goto PeriwinkleGarden_EventScript_TorchicBall_1

PeriwinkleGarden_EventScript_TorchicBall_6:
# 102 "data/maps/PeriwinkleGarden/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_NONE
# 103 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 104 "data/maps/PeriwinkleGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 105 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_TorchicBall_Text_1
# 106 "data/maps/PeriwinkleGarden/scripts.pory"
	waitfanfare
# 107 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_TORCHIC_CHOSEN
# 108 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject TORCHIC_BALL
# 109 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
# 110 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_2
# 111 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 112 "data/maps/PeriwinkleGarden/scripts.pory"
	closemessage
# 113 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseTorchic_1
# 114 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 115 "data/maps/PeriwinkleGarden/scripts.pory"
	delay 30
# 116 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_CHIKORITA_CHOSEN
# 117 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject CHIKORITA_BALL
# 118 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseTorchic_2
# 119 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 120 "data/maps/PeriwinkleGarden/scripts.pory"
	delay 30
# 121 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SQUIRTLE_CHOSEN
# 122 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject SQUIRTLE_BALL
# 123 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseTorchic_1
# 124 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 125 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_3
# 126 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 127 "data/maps/PeriwinkleGarden/scripts.pory"
	closemessage
# 128 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ProfessorBirchWalksAway
# 129 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 130 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_HIDE_PROFESSOR_ASPEN
# 131 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject PROFESSOR_ASPEN
# 132 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_GARDEN_STATE, 1
# 133 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_TOWN_STATE, 1
	goto PeriwinkleGarden_EventScript_TorchicBall_5


PeriwinkleGarden_EventScript_SquirtleBall::
# 144 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 145 "data/maps/PeriwinkleGarden/scripts.pory"
	faceplayer
# 146 "data/maps/PeriwinkleGarden/scripts.pory"
	goto_if_set FLAG_STARTER_SELECTION, PeriwinkleGarden_EventScript_SquirtleBall_2
# 184 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_SquirtleBall_Text_2
PeriwinkleGarden_EventScript_SquirtleBall_1:
# 187 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return

PeriwinkleGarden_EventScript_SquirtleBall_2:
# 147 "data/maps/PeriwinkleGarden/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 148 "data/maps/PeriwinkleGarden/scripts.pory"
	playmoncry SPECIES_SQUIRTLE, CRY_MODE_NORMAL
# 149 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmoncry
# 150 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_SquirtleBall_Text_0, MSGBOX_YESNO
# 151 "data/maps/PeriwinkleGarden/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PeriwinkleGarden_EventScript_SquirtleBall_6
PeriwinkleGarden_EventScript_SquirtleBall_5:
# 182 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
	goto PeriwinkleGarden_EventScript_SquirtleBall_1

PeriwinkleGarden_EventScript_SquirtleBall_6:
# 152 "data/maps/PeriwinkleGarden/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5, ITEM_NONE
# 153 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 154 "data/maps/PeriwinkleGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 155 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_SquirtleBall_Text_1
# 156 "data/maps/PeriwinkleGarden/scripts.pory"
	waitfanfare
# 157 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SQUIRTLE_CHOSEN
# 158 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject SQUIRTLE_BALL
# 159 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
# 160 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_2
# 161 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 162 "data/maps/PeriwinkleGarden/scripts.pory"
	closemessage
# 163 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_TORCHIC_CHOSEN
# 164 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject TORCHIC_BALL
# 165 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseSquirtle_1
# 166 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 167 "data/maps/PeriwinkleGarden/scripts.pory"
	delay 30
# 168 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_CHIKORITA_CHOSEN
# 169 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject CHIKORITA_BALL
# 170 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseSquirtle_2
# 171 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 172 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_3
# 173 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 174 "data/maps/PeriwinkleGarden/scripts.pory"
	closemessage
# 175 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ProfessorBirchWalksAway
# 176 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 177 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_HIDE_PROFESSOR_ASPEN
# 178 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject PROFESSOR_ASPEN
# 179 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_GARDEN_STATE, 1
# 180 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_TOWN_STATE, 1
	goto PeriwinkleGarden_EventScript_SquirtleBall_5


PeriwinkleGarden_ItemScript_Potion::
# 191 "data/maps/PeriwinkleGarden/scripts.pory"
	finditem ITEM_POTION, 1
# 192 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_ITEM_PERIWINKLE_GARDEN_POTION
	return


# 195 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_FaceDown:
# 196 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 199 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_WalkDown:
# 200 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_down
	step_end

# 203 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_WalkLeft:
# 204 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
	step_end

# 207 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseChikorita_1:
# 208 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 209 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 212 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseChikorita_2:
# 213 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
# 214 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
# 215 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 218 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseTorchic_1:
# 219 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
# 220 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 223 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseTorchic_2:
# 224 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 225 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 226 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 229 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseSquirtle_1:
# 230 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
# 231 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 234 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseSquirtle_2:
# 235 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 236 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 237 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 240 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ProfessorBirchWalksAway:
# 241 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 241 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 241 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 241 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 241 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 241 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 241 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 241 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 241 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 241 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 241 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 241 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
	step_end

PeriwinkleGarden_EventScript_BeginStarterSequence_Text_0:
# 5 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Hey! Over here!$"

PeriwinkleGarden_EventScript_ProfessorAspen_Text_0:
# 14 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Professor Aspen:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Look at this!$"

PeriwinkleGarden_EventScript_ProfessorAspen_Text_1:
# 17 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Somebody caught these three poor\nPokémon and just left them here,\ltrapped inside of their balls!\pI know...$"

PeriwinkleGarden_EventScript_ProfessorAspen_Text_2:
# 19 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "{PLAYER}, you seem to be\nwithout a partner Pokémon.\pWould you like to have one of these\nPokémon join you?$"

PeriwinkleGarden_EventScript_ProfessorAspen_Text_3:
# 21 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "...You really won't save one of\nthese poor Pokémon?$"

PeriwinkleGarden_EventScript_ProfessorAspen_Text_4:
# 23 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Great! Go on and choose.$"

PeriwinkleGarden_EventScript_PreventEscape_Text_0:
# 33 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Wait, where are you going?!\nDon't you want to save one of\lthese Pokémon?$"

PeriwinkleGarden_EventScript_PreventEscape_Text_1:
# 38 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Wait, don't go!\nCome and see this!$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_0:
# 53 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Do you want the Leaf Pokémon,\nChikorita?$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_1:
# 58 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "{PLAYER} received Chikorita!$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_2:
# 63 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Very well, then.\pI'll take these two and release them\nback into their habitats.$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_3:
# 75 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "But first, I have something back at\nthe lab that I need to talk to you\labout, {PLAYER}.\pPlease come by when you have the time.$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_4:
# 87 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "It's a Poké Ball containing a\nwild Pokémon.\p...It's covered in weeds.$"

PeriwinkleGarden_EventScript_TorchicBall_Text_0:
# 100 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Do you want the Chick Pokémon,\nTorchic?$"

PeriwinkleGarden_EventScript_TorchicBall_Text_1:
# 105 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "{PLAYER} received Torchic!$"

PeriwinkleGarden_EventScript_TorchicBall_Text_2:
# 137 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "It's a Poké Ball containing a\nwild Pokémon.\p...It's hot to the touch.$"

PeriwinkleGarden_EventScript_SquirtleBall_Text_0:
# 150 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Do you want the Tiny Turtle Pokémon,\nSquirtle?$"

PeriwinkleGarden_EventScript_SquirtleBall_Text_1:
# 155 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "{PLAYER} received Squirtle!$"

PeriwinkleGarden_EventScript_SquirtleBall_Text_2:
# 184 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "It's a Poké Ball containing a\nwild Pokémon.\p...It's a little wet.$"
