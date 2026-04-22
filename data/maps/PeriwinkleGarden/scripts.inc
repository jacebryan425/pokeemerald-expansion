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
# 20 "data/maps/PeriwinkleGarden/scripts.pory"
	faceplayer
# 21 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_2, MSGBOX_YESNO
PeriwinkleGarden_EventScript_ProfessorAspen_2:
# 25 "data/maps/PeriwinkleGarden/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne PeriwinkleGarden_EventScript_ProfessorAspen_3
# 29 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_4
# 30 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_STARTER_SELECTION
# 31 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return

PeriwinkleGarden_EventScript_ProfessorAspen_3:
# 26 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ProfessorAspen_Text_3, MSGBOX_YESNO
	goto PeriwinkleGarden_EventScript_ProfessorAspen_2


PeriwinkleGarden_EventScript_PreventEscapeEast::
# 35 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 36 "data/maps/PeriwinkleGarden/scripts.pory"
	goto_if_set FLAG_STARTER_SELECTION, PeriwinkleGarden_EventScript_PreventEscapeEast_2
# 43 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_PreventEscapeEast_Text_1
# 45 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PeriwinkleGarden_WalkLeft
# 46 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
PeriwinkleGarden_EventScript_PreventEscapeEast_1:
# 48 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return

PeriwinkleGarden_EventScript_PreventEscapeEast_2:
# 37 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_PreventEscapeEast_Text_0
# 40 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PeriwinkleGarden_WalkLeft
# 41 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
	goto PeriwinkleGarden_EventScript_PreventEscapeEast_1


PeriwinkleGarden_EventScript_PreventEscapeNorth::
# 52 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 53 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_PreventEscapeEast_Text_0
# 56 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PeriwinkleGarden_WalkDown
# 57 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 58 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return


PeriwinkleGarden_EventScript_ChikoritaBall::
# 62 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 63 "data/maps/PeriwinkleGarden/scripts.pory"
	faceplayer
# 64 "data/maps/PeriwinkleGarden/scripts.pory"
	goto_if_set FLAG_STARTER_SELECTION, PeriwinkleGarden_EventScript_ChikoritaBall_2
# 95 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_4
PeriwinkleGarden_EventScript_ChikoritaBall_1:
# 100 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return

PeriwinkleGarden_EventScript_ChikoritaBall_2:
# 65 "data/maps/PeriwinkleGarden/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 66 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_0, MSGBOX_YESNO
# 68 "data/maps/PeriwinkleGarden/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PeriwinkleGarden_EventScript_ChikoritaBall_5
	goto PeriwinkleGarden_EventScript_ChikoritaBall_1

PeriwinkleGarden_EventScript_ChikoritaBall_5:
# 69 "data/maps/PeriwinkleGarden/scripts.pory"
	givemon SPECIES_CHIKORITA, 5, ITEM_NONE
# 70 "data/maps/PeriwinkleGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 71 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_1
# 72 "data/maps/PeriwinkleGarden/scripts.pory"
	waitfanfare
# 73 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_CHIKORITA_CHOSEN
# 74 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
# 75 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_2
# 78 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_TORCHIC_CHOSEN
# 79 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseChikorita_1
# 80 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 81 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SQUIRTLE_CHOSEN
# 82 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseChikorita_2
# 83 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 84 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_3
# 88 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ProfessorBirchWalksAway
# 89 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 90 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_HIDE_PROFESSOR_ASPEN
# 91 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_GARDEN_STATE, 1
# 92 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_TOWN_STATE, 1
	goto PeriwinkleGarden_EventScript_ChikoritaBall_1


PeriwinkleGarden_EventScript_TorchicBall::
# 104 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 105 "data/maps/PeriwinkleGarden/scripts.pory"
	faceplayer
# 106 "data/maps/PeriwinkleGarden/scripts.pory"
	goto_if_set FLAG_STARTER_SELECTION, PeriwinkleGarden_EventScript_TorchicBall_2
# 139 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_TorchicBall_Text_2
PeriwinkleGarden_EventScript_TorchicBall_1:
# 144 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return

PeriwinkleGarden_EventScript_TorchicBall_2:
# 107 "data/maps/PeriwinkleGarden/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 108 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_TorchicBall_Text_0, MSGBOX_YESNO
# 110 "data/maps/PeriwinkleGarden/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PeriwinkleGarden_EventScript_TorchicBall_5
	goto PeriwinkleGarden_EventScript_TorchicBall_1

PeriwinkleGarden_EventScript_TorchicBall_5:
# 111 "data/maps/PeriwinkleGarden/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_NONE
# 112 "data/maps/PeriwinkleGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 113 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_TorchicBall_Text_1
# 114 "data/maps/PeriwinkleGarden/scripts.pory"
	waitfanfare
# 115 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_TORCHIC_CHOSEN
# 116 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
# 117 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_2
# 120 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseTorchic_1
# 121 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 122 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_CHIKORITA_CHOSEN
# 123 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseTorchic_2
# 124 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 125 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SQUIRTLE_CHOSEN
# 126 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseTorchic_1
# 127 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 128 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_3
# 132 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ProfessorBirchWalksAway
# 133 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 134 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_HIDE_PROFESSOR_ASPEN
# 135 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_GARDEN_STATE, 1
# 136 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_TOWN_STATE, 1
	goto PeriwinkleGarden_EventScript_TorchicBall_1


PeriwinkleGarden_EventScript_SquirtleBall::
# 148 "data/maps/PeriwinkleGarden/scripts.pory"
	lock
# 149 "data/maps/PeriwinkleGarden/scripts.pory"
	faceplayer
# 150 "data/maps/PeriwinkleGarden/scripts.pory"
	goto_if_set FLAG_STARTER_SELECTION, PeriwinkleGarden_EventScript_SquirtleBall_2
# 183 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_SquirtleBall_Text_2
PeriwinkleGarden_EventScript_SquirtleBall_1:
# 188 "data/maps/PeriwinkleGarden/scripts.pory"
	release
	return

PeriwinkleGarden_EventScript_SquirtleBall_2:
# 151 "data/maps/PeriwinkleGarden/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 152 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_SquirtleBall_Text_0, MSGBOX_YESNO
# 154 "data/maps/PeriwinkleGarden/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PeriwinkleGarden_EventScript_SquirtleBall_5
	goto PeriwinkleGarden_EventScript_SquirtleBall_1

PeriwinkleGarden_EventScript_SquirtleBall_5:
# 155 "data/maps/PeriwinkleGarden/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5, ITEM_NONE
# 156 "data/maps/PeriwinkleGarden/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 157 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_SquirtleBall_Text_1
# 158 "data/maps/PeriwinkleGarden/scripts.pory"
	waitfanfare
# 159 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_SQUIRTLE_CHOSEN
# 160 "data/maps/PeriwinkleGarden/scripts.pory"
	hidemonpic
# 161 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_2
# 164 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseSquirtle_1
# 165 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 166 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_CHIKORITA_CHOSEN
# 167 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseSquirtle_2
# 168 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 169 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_TORCHIC_CHOSEN
# 170 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ChoseSquirtle_2
# 171 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 172 "data/maps/PeriwinkleGarden/scripts.pory"
	msgbox PeriwinkleGarden_EventScript_ChikoritaBall_Text_3
# 176 "data/maps/PeriwinkleGarden/scripts.pory"
	applymovement PROFESSOR_ASPEN, PeriwinkleGarden_ProfessorBirchWalksAway
# 177 "data/maps/PeriwinkleGarden/scripts.pory"
	waitmovement 0
# 178 "data/maps/PeriwinkleGarden/scripts.pory"
	setflag FLAG_HIDE_PROFESSOR_ASPEN
# 179 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_GARDEN_STATE, 1
# 180 "data/maps/PeriwinkleGarden/scripts.pory"
	addvar VAR_PERIWINKLE_TOWN_STATE, 1
	goto PeriwinkleGarden_EventScript_SquirtleBall_1


# 191 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_FaceDown:
# 192 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 195 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_WalkDown:
# 196 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_down
	step_end

# 199 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_WalkLeft:
# 200 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
	step_end

# 203 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseChikorita_1:
# 204 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 205 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 208 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseChikorita_2:
# 209 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
# 210 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
# 211 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 214 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseTorchic_1:
# 215 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
# 216 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 219 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseTorchic_2:
# 220 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 221 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 222 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 225 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseSquirtle_1:
# 226 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
# 227 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_left
# 228 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 231 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ChoseSquirtle_2:
# 232 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 233 "data/maps/PeriwinkleGarden/scripts.pory"
	face_down
	step_end

# 236 "data/maps/PeriwinkleGarden/scripts.pory"
PeriwinkleGarden_ProfessorBirchWalksAway:
# 237 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 237 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 237 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 237 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 237 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 237 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 237 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 237 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 237 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 237 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 237 "data/maps/PeriwinkleGarden/scripts.pory"
	walk_right
# 237 "data/maps/PeriwinkleGarden/scripts.pory"
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
	.string "Somebody caught these three poor\n Pokémon and just left them here,\l trapped inside of their balls!\p I know...$"

PeriwinkleGarden_EventScript_ProfessorAspen_Text_2:
# 21 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "{PLAYER}, you seem to be\n without a partner Pokémon.\p Would you like to have one of these\n Pokémon join you?$"

PeriwinkleGarden_EventScript_ProfessorAspen_Text_3:
# 26 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "...You really won't save one of these poor Pokémon?$"

PeriwinkleGarden_EventScript_ProfessorAspen_Text_4:
# 29 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Great! Go on and choose.$"

PeriwinkleGarden_EventScript_PreventEscapeEast_Text_0:
# 37 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Wait, where are you going?!\n Don't you want to save one of these\l Pokémon?$"

PeriwinkleGarden_EventScript_PreventEscapeEast_Text_1:
# 43 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Wait, don't go!\n Come and see this!$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_0:
# 66 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Do you want the Leaf Pokémon,\n Chikorita?$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_1:
# 71 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Received Chikorita!$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_2:
# 75 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Very well, then.\p I'll take these two and release them\n back into their habitats.$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_3:
# 84 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "But first, I have something back at\n the lab that I need to talk to you\l about, {PLAYER}. Please come by when you have the time.$"

PeriwinkleGarden_EventScript_ChikoritaBall_Text_4:
# 95 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "It's a Poké Ball containing a\n wild Pokémon.\p It's covered in weeds.$"

PeriwinkleGarden_EventScript_TorchicBall_Text_0:
# 108 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Do you want the Chick Pokémon,\n Torchic?$"

PeriwinkleGarden_EventScript_TorchicBall_Text_1:
# 113 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Received Torchic!$"

PeriwinkleGarden_EventScript_TorchicBall_Text_2:
# 139 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "It's a Poké Ball containing a\n wild Pokémon.\p It's hot to the touch.$"

PeriwinkleGarden_EventScript_SquirtleBall_Text_0:
# 152 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Do you want the Tiny Turtle Pokémon,\n Squirtle?$"

PeriwinkleGarden_EventScript_SquirtleBall_Text_1:
# 157 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "Received Squirtle!$"

PeriwinkleGarden_EventScript_SquirtleBall_Text_2:
# 183 "data/maps/PeriwinkleGarden/scripts.pory"
	.string "It's a Poké Ball containing a\n wild Pokémon.\p It's a little wet.$"
