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
# 86 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_4
PeriwinkleGarden_EventScript_ChikoritaBall_1:
# 89 "data/maps/PeriwinkleGarden/scripts.pory"
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
# 84 "data/maps/PeriwinkleGarden/scripts.pory"
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
	closemessage
# 65 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_TORCHIC_CHOSEN
# 66 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject TORCHIC_BALL
# 67 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseChikorita_1
# 68 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 69 "data/maps/PeriwinkleGarden/scripts.pory"
	delay 30
# 70 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SQUIRTLE_CHOSEN
# 71 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject SQUIRTLE_BALL
# 72 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseChikorita_2
# 73 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 74 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_3
# 75 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 76 "data/maps/PeriwinkleGarden/scripts.pory"
	closemessage
# 77 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ProfessorBirchWalksAway
# 78 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 79 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_HIDE_PROFESSOR_ASPEN
# 80 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject PROFESSOR_ASPEN
# 81 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_GARDEN_STATE, 1
# 82 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_TOWN_STATE, 1
	goto PeriwinkleGarden_EventScript_ChikoritaBall_5


PeriwinkleGarden_EventScript_TorchicBall::
# 93 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 94 "data/maps/PeriwinkleGarden/scripts.pory"
	faceplayer
# 95 "data/maps/PeriwinkleGarden/scripts.pory"
	goto_if_set FLAG_STARTER_SELECTION, PeriwinkleGarden_EventScript_TorchicBall_2
# 136 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_TorchicBall_Text_2
PeriwinkleGarden_EventScript_TorchicBall_1:
# 139 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return

PeriwinkleGarden_EventScript_TorchicBall_2:
# 96 "data/maps/PeriwinkleGarden/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 97 "data/maps/PeriwinkleGarden/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_NORMAL
# 98 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmoncry
# 99 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_TorchicBall_Text_0, MSGBOX_YESNO
# 100 "data/maps/PeriwinkleGarden/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PeriwinkleGarden_EventScript_TorchicBall_6
PeriwinkleGarden_EventScript_TorchicBall_5:
# 134 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
	goto PeriwinkleGarden_EventScript_TorchicBall_1

PeriwinkleGarden_EventScript_TorchicBall_6:
# 101 "data/maps/PeriwinkleGarden/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_NONE
# 102 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 103 "data/maps/PeriwinkleGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 104 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_TorchicBall_Text_1
# 105 "data/maps/PeriwinkleGarden/scripts.pory"
	waitfanfare
# 106 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_TORCHIC_CHOSEN
# 107 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject TORCHIC_BALL
# 108 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
# 109 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_2
# 110 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 111 "data/maps/PeriwinkleGarden/scripts.pory"
	closemessage
# 112 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseTorchic_1
# 113 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 114 "data/maps/PeriwinkleGarden/scripts.pory"
	delay 30
# 115 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_CHIKORITA_CHOSEN
# 116 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject CHIKORITA_BALL
# 117 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseTorchic_2
# 118 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 119 "data/maps/PeriwinkleGarden/scripts.pory"
	delay 30
# 120 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SQUIRTLE_CHOSEN
# 121 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject SQUIRTLE_BALL
# 122 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseTorchic_1
# 123 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 124 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_3
# 125 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 126 "data/maps/PeriwinkleGarden/scripts.pory"
	closemessage
# 127 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ProfessorBirchWalksAway
# 128 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 129 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_HIDE_PROFESSOR_ASPEN
# 130 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject PROFESSOR_ASPEN
# 131 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_GARDEN_STATE, 1
# 132 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_TOWN_STATE, 1
	goto PeriwinkleGarden_EventScript_TorchicBall_5


PeriwinkleGarden_EventScript_SquirtleBall::
# 143 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 144 "data/maps/PeriwinkleGarden/scripts.pory"
	faceplayer
# 145 "data/maps/PeriwinkleGarden/scripts.pory"
	goto_if_set FLAG_STARTER_SELECTION, PeriwinkleGarden_EventScript_SquirtleBall_2
# 183 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_SquirtleBall_Text_2
PeriwinkleGarden_EventScript_SquirtleBall_1:
# 186 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return

PeriwinkleGarden_EventScript_SquirtleBall_2:
# 146 "data/maps/PeriwinkleGarden/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 147 "data/maps/PeriwinkleGarden/scripts.pory"
	playmoncry SPECIES_SQUIRTLE, CRY_MODE_NORMAL
# 148 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmoncry
# 149 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_SquirtleBall_Text_0, MSGBOX_YESNO
# 150 "data/maps/PeriwinkleGarden/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PeriwinkleGarden_EventScript_SquirtleBall_6
PeriwinkleGarden_EventScript_SquirtleBall_5:
# 181 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
	goto PeriwinkleGarden_EventScript_SquirtleBall_1

PeriwinkleGarden_EventScript_SquirtleBall_6:
# 151 "data/maps/PeriwinkleGarden/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5, ITEM_NONE
# 152 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 153 "data/maps/PeriwinkleGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 154 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_SquirtleBall_Text_1
# 155 "data/maps/PeriwinkleGarden/scripts.pory"
	waitfanfare
# 156 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SQUIRTLE_CHOSEN
# 157 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject SQUIRTLE_BALL
# 158 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
# 159 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_2
# 160 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 161 "data/maps/PeriwinkleGarden/scripts.pory"
	closemessage
# 162 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_TORCHIC_CHOSEN
# 163 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject TORCHIC_BALL
# 164 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseSquirtle_1
# 165 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 166 "data/maps/PeriwinkleGarden/scripts.pory"
	delay 30
# 167 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_CHIKORITA_CHOSEN
# 168 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject CHIKORITA_BALL
# 169 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseSquirtle_2
# 170 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 171 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_3
# 172 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmessage
# 173 "data/maps/PeriwinkleGarden/scripts.pory"
	closemessage
# 174 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ProfessorBirchWalksAway
# 175 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 176 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_HIDE_PROFESSOR_ASPEN
# 177 "data/maps/PeriwinkleGarden/scripts.pory"
	removeobject PROFESSOR_ASPEN
# 178 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_GARDEN_STATE, 1
# 179 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_TOWN_STATE, 1
	goto PeriwinkleGarden_EventScript_SquirtleBall_5


# 189 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_FaceDown:
# 190 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 193 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_WalkDown:
# 194 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_down
	step_end

# 197 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_WalkLeft:
# 198 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
	step_end

# 201 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseChikorita_1:
# 202 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 203 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 206 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseChikorita_2:
# 207 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
# 208 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
# 209 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 212 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseTorchic_1:
# 213 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
# 214 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 217 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseTorchic_2:
# 218 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 219 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 220 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 223 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseSquirtle_1:
# 224 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
# 225 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 228 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseSquirtle_2:
# 229 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 230 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 231 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 234 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ProfessorBirchWalksAway:
# 235 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 235 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 235 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 235 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 235 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 235 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 235 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 235 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 235 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 235 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 235 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 235 "data/maps/PeriwinkleGarden/scripts.pory"
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
	.string "{PLAYER} received Chikorita!$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_2:
# 62 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Very well, then.\pI'll take these two and release them\nback into their habitats.$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_3:
# 74 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "But first, I have something back at\nthe lab that I need to talk to you\labout, {PLAYER}.\pPlease come by when you have the time.$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_4:
# 86 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "It's a Poké Ball containing a\nwild Pokémon.\p...It's covered in weeds.$"

PeriwinkleGarden_EventScript_TorchicBall_Text_0:
# 99 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Do you want the Chick Pokémon,\nTorchic?$"

PeriwinkleGarden_EventScript_TorchicBall_Text_1:
# 104 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "{PLAYER} received Torchic!$"

PeriwinkleGarden_EventScript_TorchicBall_Text_2:
# 136 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "It's a Poké Ball containing a\nwild Pokémon.\p...It's hot to the touch.$"

PeriwinkleGarden_EventScript_SquirtleBall_Text_0:
# 149 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Do you want the Tiny Turtle Pokémon,\nSquirtle?$"

PeriwinkleGarden_EventScript_SquirtleBall_Text_1:
# 154 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "{PLAYER} received Squirtle!$"

PeriwinkleGarden_EventScript_SquirtleBall_Text_2:
# 183 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "It's a Poké Ball containing a\nwild Pokémon.\p...It's a little wet.$"
