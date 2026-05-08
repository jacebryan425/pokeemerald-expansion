MarigoldTown_RivalHouse_2F_MapScripts::
	.byte 0


MarigoldTown_RivalHouse_2F_EventScript_GameCube::
# 4 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	lock
# 5 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	msgbox MarigoldTown_RivalHouse_2F_EventScript_GameCube_Text_0
# 8 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	release
	return


MarigoldTown_RivalHouse_2F_EventScript_Notebook::
# 12 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	lock
# 13 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	msgbox MarigoldTown_RivalHouse_2F_EventScript_Notebook_Text_0, MSGBOX_YESNO
# 16 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MarigoldTown_RivalHouse_2F_EventScript_Notebook_2
# 22 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	msgbox MarigoldTown_RivalHouse_2F_EventScript_Notebook_Text_2
MarigoldTown_RivalHouse_2F_EventScript_Notebook_1:
# 24 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	release
	return

MarigoldTown_RivalHouse_2F_EventScript_Notebook_2:
# 17 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	msgbox MarigoldTown_RivalHouse_2F_EventScript_Notebook_Text_1
	goto MarigoldTown_RivalHouse_2F_EventScript_Notebook_1


MarigoldTown_RivalHouse_2F_EventScript_CheckRivalPC::
# 28 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	lock
# 29 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	msgbox MarigoldTown_RivalHouse_2F_EventScript_CheckRivalPC_Text_0
# 30 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	release
	return


MarigoldTown_RivalHouse_2F_EventScript_GameCube_Text_0:
# 5 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube with\n"
	.string "Super Monkey Ball.\p"
	.string "I knew I liked this girl.$"

MarigoldTown_RivalHouse_2F_EventScript_Notebook_Text_0:
# 13 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	.string "It's not right to look through someone\n"
	.string "else's journal.\p"
	.string "Do it anyway?$"

MarigoldTown_RivalHouse_2F_EventScript_Notebook_Text_1:
# 17 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	.string "“Aspen told me today about a new\n"
	.string "trainer moving here from Kanto.\p"
	.string "I hope we can be friends, but I'll\n"
	.string "admit, I'm a little intimidated.”$"

MarigoldTown_RivalHouse_2F_EventScript_Notebook_Text_2:
# 22 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	.string "Probably a good call.$"

MarigoldTown_RivalHouse_2F_EventScript_CheckRivalPC_Text_0:
# 29 "data/maps/MarigoldTown_RivalHouse_2F/scripts.pory"
	.string "You don't know the password...$"
