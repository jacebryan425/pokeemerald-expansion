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


PeriwinkleTown_EventScript_PlayersHouse_Text_0:
# 5 "data/maps/PeriwinkleTown/scripts.pory"
	.string "{PLAYER}'s House.$"

PeriwinkleTown_EventScript_ProfessorAspensLab_Text_0:
# 11 "data/maps/PeriwinkleTown/scripts.pory"
	.string "Professor Aspen's Lab.$"

PeriwinkleTown_EventScript_Sign_Text_0:
# 17 "data/maps/PeriwinkleTown/scripts.pory"
	.string "Periwinkle Town$"
