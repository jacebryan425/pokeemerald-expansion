MarigoldTown_House1_MapScripts::
	.byte 0


MarigoldTown_House1_EventScript_TownMapNPC::
# 4 "data/maps/MarigoldTown_House1/scripts.pory"
	lock
# 5 "data/maps/MarigoldTown_House1/scripts.pory"
	faceplayer
# 6 "data/maps/MarigoldTown_House1/scripts.pory"
	goto_if_set FLAG_GAVE_TOWN_MAP, MarigoldTown_House1_EventScript_TownMapNPC_2
# 10 "data/maps/MarigoldTown_House1/scripts.pory"
	msgbox MarigoldTown_House1_EventScript_TownMapNPC_Text_1
# 15 "data/maps/MarigoldTown_House1/scripts.pory"
	waitmessage
# 16 "data/maps/MarigoldTown_House1/scripts.pory"
	closemessage
# 17 "data/maps/MarigoldTown_House1/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq MarigoldTown_House1_EventScript_TownMapNPC_6
# 42 "data/maps/MarigoldTown_House1/scripts.pory"
	applymovement TOWNMAP_NPC, MarigoldTown_House1_EventScript_TownMapNPC_Movement_5
# 45 "data/maps/MarigoldTown_House1/scripts.pory"
	waitmovement 0
# 46 "data/maps/MarigoldTown_House1/scripts.pory"
	delay 30
# 47 "data/maps/MarigoldTown_House1/scripts.pory"
	playse SE_PIN
# 48 "data/maps/MarigoldTown_House1/scripts.pory"
	applymovement TOWNMAP_NPC, MarigoldTown_House1_EventScript_TownMapNPC_Movement_2
# 49 "data/maps/MarigoldTown_House1/scripts.pory"
	waitmovement 0
# 50 "data/maps/MarigoldTown_House1/scripts.pory"
	waitse
# 51 "data/maps/MarigoldTown_House1/scripts.pory"
	delay 16
# 52 "data/maps/MarigoldTown_House1/scripts.pory"
	msgbox MarigoldTown_House1_EventScript_TownMapNPC_Text_2
# 53 "data/maps/MarigoldTown_House1/scripts.pory"
	waitmessage
# 54 "data/maps/MarigoldTown_House1/scripts.pory"
	closemessage
# 55 "data/maps/MarigoldTown_House1/scripts.pory"
	applymovement TOWNMAP_NPC, MarigoldTown_House1_EventScript_TownMapNPC_Movement_6
# 58 "data/maps/MarigoldTown_House1/scripts.pory"
	waitmovement 0
MarigoldTown_House1_EventScript_TownMapNPC_5:
# 60 "data/maps/MarigoldTown_House1/scripts.pory"
	giveitem ITEM_TOWN_MAP, 1
# 61 "data/maps/MarigoldTown_House1/scripts.pory"
	setflag FLAG_GAVE_TOWN_MAP
# 62 "data/maps/MarigoldTown_House1/scripts.pory"
	msgbox MarigoldTown_House1_EventScript_TownMapNPC_Text_3
MarigoldTown_House1_EventScript_TownMapNPC_1:
# 65 "data/maps/MarigoldTown_House1/scripts.pory"
	release
	return

MarigoldTown_House1_EventScript_TownMapNPC_2:
# 7 "data/maps/MarigoldTown_House1/scripts.pory"
	msgbox MarigoldTown_House1_EventScript_TownMapNPC_Text_0
	goto MarigoldTown_House1_EventScript_TownMapNPC_1

MarigoldTown_House1_EventScript_TownMapNPC_6:
# 18 "data/maps/MarigoldTown_House1/scripts.pory"
	applymovement TOWNMAP_NPC, MarigoldTown_House1_EventScript_TownMapNPC_Movement_0
# 22 "data/maps/MarigoldTown_House1/scripts.pory"
	waitmovement 0
# 23 "data/maps/MarigoldTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_House1_EventScript_TownMapNPC_Movement_1
# 24 "data/maps/MarigoldTown_House1/scripts.pory"
	waitmovement 0
# 25 "data/maps/MarigoldTown_House1/scripts.pory"
	delay 30
# 26 "data/maps/MarigoldTown_House1/scripts.pory"
	playse SE_PIN
# 27 "data/maps/MarigoldTown_House1/scripts.pory"
	applymovement TOWNMAP_NPC, MarigoldTown_House1_EventScript_TownMapNPC_Movement_2
# 28 "data/maps/MarigoldTown_House1/scripts.pory"
	waitmovement 0
# 29 "data/maps/MarigoldTown_House1/scripts.pory"
	waitse
# 30 "data/maps/MarigoldTown_House1/scripts.pory"
	delay 16
# 31 "data/maps/MarigoldTown_House1/scripts.pory"
	msgbox MarigoldTown_House1_EventScript_TownMapNPC_Text_2
# 32 "data/maps/MarigoldTown_House1/scripts.pory"
	waitmessage
# 33 "data/maps/MarigoldTown_House1/scripts.pory"
	closemessage
# 34 "data/maps/MarigoldTown_House1/scripts.pory"
	applymovement TOWNMAP_NPC, MarigoldTown_House1_EventScript_TownMapNPC_Movement_3
# 38 "data/maps/MarigoldTown_House1/scripts.pory"
	waitmovement 0
# 39 "data/maps/MarigoldTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_House1_EventScript_TownMapNPC_Movement_4
# 40 "data/maps/MarigoldTown_House1/scripts.pory"
	waitmovement 0
	goto MarigoldTown_House1_EventScript_TownMapNPC_5


# 18 "data/maps/MarigoldTown_House1/scripts.pory"
MarigoldTown_House1_EventScript_TownMapNPC_Movement_0:
# 18 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_left
# 19 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_up
# 19 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_up
# 20 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_right
# 20 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_right
# 20 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_right
# 20 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_right
# 21 "data/maps/MarigoldTown_House1/scripts.pory"
	face_up
	step_end

# 23 "data/maps/MarigoldTown_House1/scripts.pory"
MarigoldTown_House1_EventScript_TownMapNPC_Movement_1:
# 23 "data/maps/MarigoldTown_House1/scripts.pory"
	face_right
	step_end

# 27 "data/maps/MarigoldTown_House1/scripts.pory"
MarigoldTown_House1_EventScript_TownMapNPC_Movement_2:
# 27 "data/maps/MarigoldTown_House1/scripts.pory"
	emote_exclamation_mark
	step_end

# 34 "data/maps/MarigoldTown_House1/scripts.pory"
MarigoldTown_House1_EventScript_TownMapNPC_Movement_3:
# 34 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_left
# 34 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_left
# 34 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_left
# 34 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_left
# 35 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_down
# 35 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_down
# 36 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_right
# 37 "data/maps/MarigoldTown_House1/scripts.pory"
	face_up
	step_end

# 39 "data/maps/MarigoldTown_House1/scripts.pory"
MarigoldTown_House1_EventScript_TownMapNPC_Movement_4:
# 39 "data/maps/MarigoldTown_House1/scripts.pory"
	face_down
	step_end

# 42 "data/maps/MarigoldTown_House1/scripts.pory"
MarigoldTown_House1_EventScript_TownMapNPC_Movement_5:
# 42 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_up
# 42 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_up
# 43 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_right
# 43 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_right
# 43 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_right
# 44 "data/maps/MarigoldTown_House1/scripts.pory"
	face_up
	step_end

# 55 "data/maps/MarigoldTown_House1/scripts.pory"
MarigoldTown_House1_EventScript_TownMapNPC_Movement_6:
# 55 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_left
# 55 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_left
# 55 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_left
# 56 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_down
# 56 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_down
# 57 "data/maps/MarigoldTown_House1/scripts.pory"
	face_player
	step_end

MarigoldTown_House1_EventScript_TownMapNPC_Text_0:
# 7 "data/maps/MarigoldTown_House1/scripts.pory"
	.string "Have you found yourself getting\n"
	.string "lost lately?$"

MarigoldTown_House1_EventScript_TownMapNPC_Text_1:
# 10 "data/maps/MarigoldTown_House1/scripts.pory"
	.string "Oh, hi!\p"
	.string "...April told you I'd give you a\n"
	.string "Town Map?\p"
	.string "I'm sure I have an extra one laying\n"
	.string "around somewhere...$"

MarigoldTown_House1_EventScript_TownMapNPC_Text_2:
# 31 "data/maps/MarigoldTown_House1/scripts.pory"
	.string "Here it is!$"

MarigoldTown_House1_EventScript_TownMapNPC_Text_3:
# 62 "data/maps/MarigoldTown_House1/scripts.pory"
	.string "I hope it helps you get to where\n"
	.string "you need to go!$"
