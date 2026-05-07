MarigoldTown_Mart_MapScripts::
	.byte 0


MarigoldTown_Mart_Employee::
# 4 "data/maps/MarigoldTown_Mart/scripts.pory"
	lock
# 5 "data/maps/MarigoldTown_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/MarigoldTown_Mart/scripts.pory"
	compare VAR_MARIGOLD_TOWN_STATE, 2
	goto_if_eq MarigoldTown_Mart_Employee_2
# 12 "data/maps/MarigoldTown_Mart/scripts.pory"
	msgbox MarigoldTown_Mart_Employee_Text_2
# 17 "data/maps/MarigoldTown_Mart/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 18 "data/maps/MarigoldTown_Mart/scripts.pory"
	msgbox MarigoldTown_Mart_Employee_Text_3
# 19 "data/maps/MarigoldTown_Mart/scripts.pory"
	waitfanfare
# 20 "data/maps/MarigoldTown_Mart/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 21 "data/maps/MarigoldTown_Mart/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 22 "data/maps/MarigoldTown_Mart/scripts.pory"
	msgbox MarigoldTown_Mart_Employee_Text_4, MSGBOX_YESNO
# 28 "data/maps/MarigoldTown_Mart/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MarigoldTown_Mart_Employee_6
# 34 "data/maps/MarigoldTown_Mart/scripts.pory"
	msgbox MarigoldTown_Mart_Employee_Text_5
MarigoldTown_Mart_Employee_5:
# 36 "data/maps/MarigoldTown_Mart/scripts.pory"
	addvar VAR_MARIGOLD_TOWN_STATE, 1
MarigoldTown_Mart_Employee_1:
# 38 "data/maps/MarigoldTown_Mart/scripts.pory"
	release
	return

MarigoldTown_Mart_Employee_2:
# 7 "data/maps/MarigoldTown_Mart/scripts.pory"
	message MarigoldTown_Mart_Employee_Text_0
# 8 "data/maps/MarigoldTown_Mart/scripts.pory"
	waitmessage
# 9 "data/maps/MarigoldTown_Mart/scripts.pory"
	pokemart 0
# 10 "data/maps/MarigoldTown_Mart/scripts.pory"
	msgbox MarigoldTown_Mart_Employee_Text_1
	goto MarigoldTown_Mart_Employee_1

MarigoldTown_Mart_Employee_6:
# 29 "data/maps/MarigoldTown_Mart/scripts.pory"
	message MarigoldTown_Mart_Employee_Text_0
# 30 "data/maps/MarigoldTown_Mart/scripts.pory"
	waitmessage
# 31 "data/maps/MarigoldTown_Mart/scripts.pory"
	pokemart 0
# 32 "data/maps/MarigoldTown_Mart/scripts.pory"
	msgbox MarigoldTown_Mart_Employee_Text_1
	goto MarigoldTown_Mart_Employee_5


MarigoldTown_Mart_NPC::
# 42 "data/maps/MarigoldTown_Mart/scripts.pory"
	lock
# 43 "data/maps/MarigoldTown_Mart/scripts.pory"
	faceplayer
# 44 "data/maps/MarigoldTown_Mart/scripts.pory"
	msgbox MarigoldTown_Mart_NPC_Text_0
# 49 "data/maps/MarigoldTown_Mart/scripts.pory"
	release
	return


MarigoldTown_Mart_Employee_Text_0:
# 7 "data/maps/MarigoldTown_Mart/scripts.pory"
	.string "How may I help you?$"

MarigoldTown_Mart_Employee_Text_1:
# 10 "data/maps/MarigoldTown_Mart/scripts.pory"
	.string "Thank you, come again.$"

MarigoldTown_Mart_Employee_Text_2:
# 12 "data/maps/MarigoldTown_Mart/scripts.pory"
	.string "Nice to see you again!\p"
	.string "Thank you again for chasing those\n"
	.string "scary Zigzagoon off.\p"
	.string "I have something neat that just came\n"
	.string "in and I'd like to give them to you.$"

MarigoldTown_Mart_Employee_Text_3:
# 18 "data/maps/MarigoldTown_Mart/scripts.pory"
	.string "{PLAYER} received Running Shoes!$"

MarigoldTown_Mart_Employee_Text_4:
# 22 "data/maps/MarigoldTown_Mart/scripts.pory"
	.string "Press the B button while wearing these\n"
	.string "to run super fast!\p"
	.string "Your haters will never be able to\n"
	.string "catch you!\p"
	.string "Oh, yeah...\n"
	.string "Did you want to buy something?$"

MarigoldTown_Mart_Employee_Text_5:
# 34 "data/maps/MarigoldTown_Mart/scripts.pory"
	.string "Very well, maybe some other time.$"

MarigoldTown_Mart_NPC_Text_0:
# 44 "data/maps/MarigoldTown_Mart/scripts.pory"
	.string "I came here because I ran out of\n"
	.string "eggs, but the clerk said they don't\l"
	.string "sell them here.\p"
	.string "What am I supposed to bake cookies\n"
	.string "with, a Potion? Get real.$"
