PeriwinkleTown_MapScripts::
	.byte 0


PeriwinkleTown_EventScript_PlayersHouse::
# 4 "data/maps/PeriwinkleTown/scripts.pory"
	lock
# 5 "data/maps/PeriwinkleTown/scripts.pory"
	msgbox PeriwinkleTown_EventScript_PlayersHouse_Text_0
# 6 "data/maps/PeriwinkleTown/scripts.pory"
	release
	return


PeriwinkleTown_EventScript_ProfessorAspensLab::
# 10 "data/maps/PeriwinkleTown/scripts.pory"
	lock
# 11 "data/maps/PeriwinkleTown/scripts.pory"
	msgbox PeriwinkleTown_EventScript_ProfessorAspensLab_Text_0
# 12 "data/maps/PeriwinkleTown/scripts.pory"
	release
	return


PeriwinkleTown_EventScript_Sign::
# 16 "data/maps/PeriwinkleTown/scripts.pory"
	lock
# 17 "data/maps/PeriwinkleTown/scripts.pory"
	msgbox PeriwinkleTown_EventScript_Sign_Text_0
# 18 "data/maps/PeriwinkleTown/scripts.pory"
	release
	return


PeriwinkleTown_EventScript_GoToGarden::
# 22 "data/maps/PeriwinkleTown/scripts.pory"
	lock
# 23 "data/maps/PeriwinkleTown/scripts.pory"
	msgbox PeriwinkleTown_EventScript_GoToGarden_Text_0
# 25 "data/maps/PeriwinkleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PeriwinkleTown_PlayerMovement
# 26 "data/maps/PeriwinkleTown/scripts.pory"
	waitmovement 0
# 27 "data/maps/PeriwinkleTown/scripts.pory"
	release
	return


# 30 "data/maps/PeriwinkleTown/scripts.pory"
PeriwinkleTown_PlayerMovement:
# 31 "data/maps/PeriwinkleTown/scripts.pory"
	walk_up
	step_end

PeriwinkleTown_EventScript_PlayersHouse_Text_0:
# 5 "data/maps/PeriwinkleTown/scripts.pory"
	.string "{PLAYER}'s House.$"

PeriwinkleTown_EventScript_ProfessorAspensLab_Text_0:
# 11 "data/maps/PeriwinkleTown/scripts.pory"
	.string "Professor Aspen's Lab.$"

PeriwinkleTown_EventScript_Sign_Text_0:
# 17 "data/maps/PeriwinkleTown/scripts.pory"
	.string "Periwinkle Town$"

PeriwinkleTown_EventScript_GoToGarden_Text_0:
# 23 "data/maps/PeriwinkleTown/scripts.pory"
	.string "It might not be wise to leave town  without a Pokémon...$"
