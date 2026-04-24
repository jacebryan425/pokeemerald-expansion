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


PeriwinkleTown_EventScript_FatMan::
# 22 "data/maps/PeriwinkleTown/scripts.pory"
	lock
# 23 "data/maps/PeriwinkleTown/scripts.pory"
	faceplayer
# 24 "data/maps/PeriwinkleTown/scripts.pory"
	msgbox PeriwinkleTown_EventScript_FatMan_Text_0
# 27 "data/maps/PeriwinkleTown/scripts.pory"
	release
	return


PeriwinkleTown_EventScript_NPC::
# 31 "data/maps/PeriwinkleTown/scripts.pory"
	lock
# 32 "data/maps/PeriwinkleTown/scripts.pory"
	faceplayer
# 33 "data/maps/PeriwinkleTown/scripts.pory"
	msgbox PeriwinkleTown_EventScript_NPC_Text_0
# 36 "data/maps/PeriwinkleTown/scripts.pory"
	waitmessage
# 37 "data/maps/PeriwinkleTown/scripts.pory"
	closemessage
# 38 "data/maps/PeriwinkleTown/scripts.pory"
	applymovement PERIWINKLE_TOWN_NPC, PeriwinkleTown_EventScript_NPC_Movement_0
# 39 "data/maps/PeriwinkleTown/scripts.pory"
	waitmovement 0
# 40 "data/maps/PeriwinkleTown/scripts.pory"
	release
	return


PeriwinkleTown_EventScript_PreventEscape::
# 44 "data/maps/PeriwinkleTown/scripts.pory"
	lock
# 45 "data/maps/PeriwinkleTown/scripts.pory"
	msgbox PeriwinkleTown_EventScript_PreventEscape_Text_0
# 46 "data/maps/PeriwinkleTown/scripts.pory"
	waitmessage
# 47 "data/maps/PeriwinkleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PeriwinkleTown_WalkUp
# 48 "data/maps/PeriwinkleTown/scripts.pory"
	waitmovement 0
# 49 "data/maps/PeriwinkleTown/scripts.pory"
	release
	return


# 52 "data/maps/PeriwinkleTown/scripts.pory"
PeriwinkleTown_WalkUp:
# 53 "data/maps/PeriwinkleTown/scripts.pory"
	walk_up
	step_end

# 38 "data/maps/PeriwinkleTown/scripts.pory"
PeriwinkleTown_EventScript_NPC_Movement_0:
# 38 "data/maps/PeriwinkleTown/scripts.pory"
	face_up
	step_end

PeriwinkleTown_EventScript_PlayersHouse_Text_0:
# 5 "data/maps/PeriwinkleTown/scripts.pory"
	.string "{PLAYER}'s House.$"

PeriwinkleTown_EventScript_ProfessorAspensLab_Text_0:
# 11 "data/maps/PeriwinkleTown/scripts.pory"
	.string "Professor Aspen's Research Lab.$"

PeriwinkleTown_EventScript_Sign_Text_0:
# 17 "data/maps/PeriwinkleTown/scripts.pory"
	.string "PERIWINKLE TOWN$"

PeriwinkleTown_EventScript_FatMan_Text_0:
# 24 "data/maps/PeriwinkleTown/scripts.pory"
	.string "The power of technology is incredible!\p"
	.string "Fans of a video game can make their own\n"
	.string "version of it on their computer!$"

PeriwinkleTown_EventScript_NPC_Text_0:
# 33 "data/maps/PeriwinkleTown/scripts.pory"
	.string "This lake seems so vast and endless.\n"
	.string "I could spend all day staring off onto\l"
	.string "the horizon.$"

PeriwinkleTown_EventScript_PreventEscape_Text_0:
# 45 "data/maps/PeriwinkleTown/scripts.pory"
	.string "It might not be wise to leave town\nwithout a Pokémon...$"
