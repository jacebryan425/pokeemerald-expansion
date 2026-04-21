PeriwinkleTown_PlayersHouse_2F_MapScripts::
	.byte 0


# 3 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"

# 4 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
PeriwinkleTown_PlayersHouse_2F_EventScript_WallClock::
# 5 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
    goto_if_set FLAG_SET_WALL_CLOCK, PeriwinkleTown_PlayersHouse_2F_EventScript_CheckWallClock
# 6 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
    msgbox PeriwinkleTown_PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
# 7 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
    call PeriwinkleTown_PlayersHouse_2F_EventScript_SetWallClock
# 8 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
    delay 30
# 9 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
    setflag FLAG_SET_WALL_CLOCK
# 10 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
    releaseall
# 11 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
    end
# 12 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"

# 13 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
PeriwinkleTown_PlayersHouse_2F_EventScript_CheckWallClock::
# 14 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 15 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 16 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
	special Special_ViewWallClock
# 17 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
	waitstate
# 18 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
	releaseall
# 19 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
	end
# 20 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"

# 21 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
PeriwinkleTown_PlayersHouse_2F_EventScript_SetWallClock::
# 22 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 23 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
	special StartWallClock
# 24 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
	waitstate
# 25 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
	return
# 26 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"

# 27 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
PeriwinkleTown_PlayersHouse_2F_Text_ClockIsStopped:
# 28 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
	.string "The clock is stopped…\p"
# 29 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
	.string "Better set it and start it!$"

PeriwinkleTown_PlayersHouse_2F_EventScript_GameCube::
# 33 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
	lock
# 34 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
	msgbox PeriwinkleTown_PlayersHouse_2F_EventScript_GameCube_Text_0
# 38 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
	release
	return


PeriwinkleTown_PlayersHouse_2F_EventScript_Notebook::
# 42 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
	lock
# 43 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
	msgbox PeriwinkleTown_PlayersHouse_2F_EventScript_Notebook_Text_0
# 52 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
	release
	return


PeriwinkleTown_PlayersHouse_2F_EventScript_GameCube_Text_0:
# 34 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube with\n"
	.string "Super Monkey Ball.\p"
	.string "Bro, I knew I liked you dude.\n"
	.string "Come here, bring it in.$"

PeriwinkleTown_PlayersHouse_2F_EventScript_Notebook_Text_0:
# 43 "data/maps/PeriwinkleTown_PlayersHouse_2F/scripts.pory"
	.string "You flip through an old journal\n"
	.string "written during your time in a distant\l"
	.string "region.\p"
	.string "'Last week I narrowly defeated the\n"
	.string "Elite Four, and on my way back home,\l"
	.string "I caught the last Pokémon I needed\l"
	.string "to complete the Professor's Pokédex.\p"
	.string "Not much left to do here in Kanto,\n"
	.string "I think it's time for a change.'$"
