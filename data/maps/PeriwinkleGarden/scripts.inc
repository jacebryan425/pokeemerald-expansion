PeriwinkleGarden_MapScripts::
	.byte 0


PeriwinkleGarden_EventScript_BeginStarterSequence::
# 4 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 5 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_BeginStarterSequence_Text_0
# 6 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_GARDEN_STATE, 1
# 7 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return


PeriwinkleGarden_EventScript_ProfessorAspen::
# 11 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 12 "data/maps/PeriwinkleGarden/scripts.pory"
	faceplayer
# 13 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_0
# 14 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_FaceDown
# 15 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 16 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_1
# 17 "data/maps/PeriwinkleGarden/scripts.pory"
	faceplayer
# 18 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_2, MSGBOX_YESNO
PeriwinkleGarden_EventScript_ProfessorAspen_2:
# 19 "data/maps/PeriwinkleGarden/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne PeriwinkleGarden_EventScript_ProfessorAspen_3
# 22 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_4
# 23 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_FaceDown
# 24 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 25 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_STARTER_SELECTION
# 26 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return

PeriwinkleGarden_EventScript_ProfessorAspen_3:
# 20 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_3, MSGBOX_YESNO
	goto PeriwinkleGarden_EventScript_ProfessorAspen_2


PeriwinkleGarden_EventScript_PreventEscape::
# 30 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 31 "data/maps/PeriwinkleGarden/scripts.pory"
	goto_if_set FLAG_STARTER_SELECTION, PeriwinkleGarden_EventScript_PreventEscape_2
# 37 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_PreventEscape_Text_1
# 38 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 39 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PeriwinkleGarden_WalkLeft
# 40 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
PeriwinkleGarden_EventScript_PreventEscape_1:
# 42 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return

PeriwinkleGarden_EventScript_PreventEscape_2:
# 32 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_PreventEscape_Text_0
# 33 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 34 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PeriwinkleGarden_WalkLeft
# 35 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
	goto PeriwinkleGarden_EventScript_PreventEscape_1


PeriwinkleGarden_EventScript_ChikoritaBall::
# 46 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 47 "data/maps/PeriwinkleGarden/scripts.pory"
	faceplayer
# 48 "data/maps/PeriwinkleGarden/scripts.pory"
	goto_if_set FLAG_STARTER_SELECTION, PeriwinkleGarden_EventScript_ChikoritaBall_2
# 84 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_4
PeriwinkleGarden_EventScript_ChikoritaBall_1:
# 87 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return

PeriwinkleGarden_EventScript_ChikoritaBall_2:
# 49 "data/maps/PeriwinkleGarden/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 50 "data/maps/PeriwinkleGarden/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 51 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmoncry
# 52 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_0, MSGBOX_YESNO
# 53 "data/maps/PeriwinkleGarden/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PeriwinkleGarden_EventScript_ChikoritaBall_6
PeriwinkleGarden_EventScript_ChikoritaBall_5:
# 82 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
	goto PeriwinkleGarden_EventScript_ChikoritaBall_1

PeriwinkleGarden_EventScript_ChikoritaBall_6:
# 54 "data/maps/PeriwinkleGarden/scripts.pory"
	givemon SPECIES_CHIKORITA, 5, ITEM_NONE
# 55 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 56 "data/maps/PeriwinkleGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 57 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_1
# 58 "data/maps/PeriwinkleGarden/scripts.pory"
	waitfanfare
# 59 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_CHIKORITA_CHOSEN
# 60 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject CHIKORITA_BALL
# 61 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
# 62 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_2
# 63 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 64 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_TORCHIC_CHOSEN
# 65 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject TORCHIC_BALL
# 66 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseChikorita_1
# 67 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 68 "data/maps/PeriwinkleGarden/scripts.pory"
	delay 30
# 69 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SQUIRTLE_CHOSEN
# 70 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject SQUIRTLE_BALL
# 71 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseChikorita_2
# 72 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 73 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_3
# 74 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 75 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ProfessorBirchWalksAway
# 76 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 77 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_HIDE_PROFESSOR_ASPEN
# 78 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject PROFESSOR_ASPEN
# 79 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_GARDEN_STATE, 1
# 80 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_TOWN_STATE, 1
	goto PeriwinkleGarden_EventScript_ChikoritaBall_5


PeriwinkleGarden_EventScript_TorchicBall::
# 91 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 92 "data/maps/PeriwinkleGarden/scripts.pory"
	faceplayer
# 93 "data/maps/PeriwinkleGarden/scripts.pory"
	goto_if_set FLAG_STARTER_SELECTION, PeriwinkleGarden_EventScript_TorchicBall_2
# 131 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_TorchicBall_Text_2
PeriwinkleGarden_EventScript_TorchicBall_1:
# 134 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return

PeriwinkleGarden_EventScript_TorchicBall_2:
# 94 "data/maps/PeriwinkleGarden/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 95 "data/maps/PeriwinkleGarden/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_NORMAL
# 96 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmoncry
# 97 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_TorchicBall_Text_0, MSGBOX_YESNO
# 98 "data/maps/PeriwinkleGarden/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PeriwinkleGarden_EventScript_TorchicBall_6
PeriwinkleGarden_EventScript_TorchicBall_5:
# 129 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
	goto PeriwinkleGarden_EventScript_TorchicBall_1

PeriwinkleGarden_EventScript_TorchicBall_6:
# 99 "data/maps/PeriwinkleGarden/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_NONE
# 100 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 101 "data/maps/PeriwinkleGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 102 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_TorchicBall_Text_1
# 103 "data/maps/PeriwinkleGarden/scripts.pory"
	waitfanfare
# 104 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_TORCHIC_CHOSEN
# 105 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject TORCHIC_BALL
# 106 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
# 107 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_2
# 108 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseTorchic_1
# 109 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 110 "data/maps/PeriwinkleGarden/scripts.pory"
	delay 30
# 111 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_CHIKORITA_CHOSEN
# 112 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject CHIKORITA_BALL
# 113 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseTorchic_2
# 114 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 115 "data/maps/PeriwinkleGarden/scripts.pory"
	delay 30
# 116 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SQUIRTLE_CHOSEN
# 117 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject SQUIRTLE_BALL
# 118 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseTorchic_1
# 119 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 120 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_3
# 121 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 122 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ProfessorBirchWalksAway
# 123 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 124 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_HIDE_PROFESSOR_ASPEN
# 125 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject PROFESSOR_ASPEN
# 126 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_GARDEN_STATE, 1
# 127 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_TOWN_STATE, 1
	goto PeriwinkleGarden_EventScript_TorchicBall_5


PeriwinkleGarden_EventScript_SquirtleBall::
# 138 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 139 "data/maps/PeriwinkleGarden/scripts.pory"
	faceplayer
# 140 "data/maps/PeriwinkleGarden/scripts.pory"
	goto_if_set FLAG_STARTER_SELECTION, PeriwinkleGarden_EventScript_SquirtleBall_2
# 176 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_SquirtleBall_Text_2
PeriwinkleGarden_EventScript_SquirtleBall_1:
# 179 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return

PeriwinkleGarden_EventScript_SquirtleBall_2:
# 141 "data/maps/PeriwinkleGarden/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 142 "data/maps/PeriwinkleGarden/scripts.pory"
	playmoncry SPECIES_SQUIRTLE, CRY_MODE_NORMAL
# 143 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmoncry
# 144 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_SquirtleBall_Text_0, MSGBOX_YESNO
# 145 "data/maps/PeriwinkleGarden/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PeriwinkleGarden_EventScript_SquirtleBall_6
PeriwinkleGarden_EventScript_SquirtleBall_5:
# 174 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
	goto PeriwinkleGarden_EventScript_SquirtleBall_1

PeriwinkleGarden_EventScript_SquirtleBall_6:
# 146 "data/maps/PeriwinkleGarden/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5, ITEM_NONE
# 147 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 148 "data/maps/PeriwinkleGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 149 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_SquirtleBall_Text_1
# 150 "data/maps/PeriwinkleGarden/scripts.pory"
	waitfanfare
# 151 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SQUIRTLE_CHOSEN
# 152 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject SQUIRTLE_BALL
# 153 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
# 154 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_2
# 155 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 156 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_TORCHIC_CHOSEN
# 157 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject TORCHIC_BALL
# 158 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseSquirtle_1
# 159 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 160 "data/maps/PeriwinkleGarden/scripts.pory"
	delay 30
# 161 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_CHIKORITA_CHOSEN
# 162 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject CHIKORITA_BALL
# 163 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseSquirtle_2
# 164 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 165 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_3
# 166 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 167 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ProfessorBirchWalksAway
# 168 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 169 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_HIDE_PROFESSOR_ASPEN
# 170 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject PROFESSOR_ASPEN
# 171 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_GARDEN_STATE, 1
# 172 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_TOWN_STATE, 1
	goto PeriwinkleGarden_EventScript_SquirtleBall_5


# 182 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_FaceDown:
# 183 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 186 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_WalkDown:
# 187 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_down
	step_end

# 190 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_WalkLeft:
# 191 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
	step_end

# 194 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseChikorita_1:
# 195 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 196 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 199 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseChikorita_2:
# 200 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
# 201 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
# 202 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 205 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseTorchic_1:
# 206 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
# 207 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 210 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseTorchic_2:
# 211 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 212 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 213 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 216 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseSquirtle_1:
# 217 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
# 218 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 221 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseSquirtle_2:
# 222 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 223 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 224 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 227 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ProfessorBirchWalksAway:
# 228 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 228 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 228 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 228 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 228 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 228 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 228 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 228 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 228 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 228 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 228 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 228 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
	step_end

PeriwinkleGarden_EventScript_BeginStarterSequence_Text_0:
# 5 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Hey! Over here!$"

PeriwinkleGarden_EventScript_ProfessorAspen_Text_0:
# 13 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Professor Aspen: Look at this!$"

PeriwinkleGarden_EventScript_ProfessorAspen_Text_1:
# 16 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Somebody caught these three poor\nPokémon and just left them here,\ltrapped inside of their balls!\pI know...$"

PeriwinkleGarden_EventScript_ProfessorAspen_Text_2:
# 18 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "{PLAYER}, you seem to be\nwithout a partner Pokémon.\pWould you like to have one of these\nPokémon join you?$"

PeriwinkleGarden_EventScript_ProfessorAspen_Text_3:
# 20 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "...You really won't save one of\nthese poor Pokémon?$"

PeriwinkleGarden_EventScript_ProfessorAspen_Text_4:
# 22 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Great! Go on and choose.$"

PeriwinkleGarden_EventScript_PreventEscape_Text_0:
# 32 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Wait, where are you going?!\nDon't you want to save one of\lthese Pokémon?$"

PeriwinkleGarden_EventScript_PreventEscape_Text_1:
# 37 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Wait, don't go!\nCome and see this!$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_0:
# 52 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Do you want the Leaf Pokémon,\nChikorita?$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_1:
# 57 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Received Chikorita!$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_2:
# 62 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Very well, then.\pI'll take these two and release them\nback into their habitats.$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_3:
# 73 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "But first, I have something back at\nthe lab that I need to talk to you\labout, {PLAYER}.\pPlease come by when you have the time.$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_4:
# 84 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "It's a Poké Ball containing a\nwild Pokémon.\p...It's covered in weeds.$"

PeriwinkleGarden_EventScript_TorchicBall_Text_0:
# 97 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Do you want the Chick Pokémon,\nTorchic?$"

PeriwinkleGarden_EventScript_TorchicBall_Text_1:
# 102 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Received Torchic!$"

PeriwinkleGarden_EventScript_TorchicBall_Text_2:
# 131 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "It's a Poké Ball containing a\nwild Pokémon.\p...It's hot to the touch.$"

PeriwinkleGarden_EventScript_SquirtleBall_Text_0:
# 144 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Do you want the Tiny Turtle Pokémon,\nSquirtle?$"

PeriwinkleGarden_EventScript_SquirtleBall_Text_1:
# 149 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Received Squirtle!$"

PeriwinkleGarden_EventScript_SquirtleBall_Text_2:
# 176 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "It's a Poké Ball containing a\nwild Pokémon.\p...It's a little wet.$"
