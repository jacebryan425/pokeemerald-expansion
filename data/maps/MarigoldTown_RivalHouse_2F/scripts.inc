MarigoldTown_RivalHouse_2F_MapScripts::
	.byte 0


MarigoldTown_RivalHouse_2F_EventScript_GameCube::
# 4 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	lock
# 5 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	checkplayergender
# 6 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MarigoldTown_RivalHouse_2F_EventScript_GameCube_2
# 11 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	msgbox MarigoldTown_RivalHouse_2F_EventScript_GameCube_Text_1
MarigoldTown_RivalHouse_2F_EventScript_GameCube_1:
# 15 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	release
	return

MarigoldTown_RivalHouse_2F_EventScript_GameCube_2:
# 7 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	msgbox MarigoldTown_RivalHouse_2F_EventScript_GameCube_Text_0
	goto MarigoldTown_RivalHouse_2F_EventScript_GameCube_1


MarigoldTown_RivalHouse_2F_EventScript_Notebook::
# 19 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	lock
# 20 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	msgbox MarigoldTown_RivalHouse_2F_EventScript_Notebook_Text_0, MSGBOX_YESNO
# 23 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MarigoldTown_RivalHouse_2F_EventScript_Notebook_2
# 29 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	msgbox MarigoldTown_RivalHouse_2F_EventScript_Notebook_Text_2
MarigoldTown_RivalHouse_2F_EventScript_Notebook_1:
# 31 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	release
	return

MarigoldTown_RivalHouse_2F_EventScript_Notebook_2:
# 24 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	msgbox MarigoldTown_RivalHouse_2F_EventScript_Notebook_Text_1
	goto MarigoldTown_RivalHouse_2F_EventScript_Notebook_1


MarigoldTown_RivalHouse_2F_EventScript_CheckRivalPC::
# 35 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	lock
# 36 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	msgbox MarigoldTown_RivalHouse_2F_EventScript_CheckRivalPC_Text_0
# 37 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	release
	return


MarigoldTown_RivalHouse_2F_EventScript_GameCube_Text_0:
# 7 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube with\n"
	.string "Super Monkey Ball.\p"
	.string "I knew I liked this girl.$"

MarigoldTown_RivalHouse_2F_EventScript_GameCube_Text_1:
# 11 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube with\n"
	.string "Super Monkey Ball.\p"
	.string "I knew I liked this guy.$"

MarigoldTown_RivalHouse_2F_EventScript_Notebook_Text_0:
# 20 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	.string "It's not right to look through someone\n"
	.string "else's journal.\p"
	.string "Do it anyway?$"

MarigoldTown_RivalHouse_2F_EventScript_Notebook_Text_1:
# 24 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	.string "“Aspen told me today about a new\n"
	.string "trainer moving here from Kanto.\p"
	.string "I hope we can be friends, but I'll\n"
	.string "admit, I'm a little intimidated.”$"

MarigoldTown_RivalHouse_2F_EventScript_Notebook_Text_2:
# 29 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	.string "Probably a good call.$"

MarigoldTown_RivalHouse_2F_EventScript_CheckRivalPC_Text_0:
# 36 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	.string "You don't know the password...$"
