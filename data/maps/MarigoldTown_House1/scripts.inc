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
	checkplayergender
# 11 "data/maps/MarigoldTown_House1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MarigoldTown_House1_EventScript_TownMapNPC_6
# 18 "data/maps/MarigoldTown_House1/scripts.pory"
	msgbox MarigoldTown_House1_EventScript_TownMapNPC_Text_2
MarigoldTown_House1_EventScript_TownMapNPC_5:
# 24 "data/maps/MarigoldTown_House1/scripts.pory"
	waitmessage
# 25 "data/maps/MarigoldTown_House1/scripts.pory"
	closemessage
# 26 "data/maps/MarigoldTown_House1/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq MarigoldTown_House1_EventScript_TownMapNPC_10
# 51 "data/maps/MarigoldTown_House1/scripts.pory"
	applymovement TOWNMAP_NPC, MarigoldTown_House1_EventScript_TownMapNPC_Movement_5
# 54 "data/maps/MarigoldTown_House1/scripts.pory"
	waitmovement 0
# 55 "data/maps/MarigoldTown_House1/scripts.pory"
	delay 30
# 56 "data/maps/MarigoldTown_House1/scripts.pory"
	playse SE_PIN
# 57 "data/maps/MarigoldTown_House1/scripts.pory"
	applymovement TOWNMAP_NPC, MarigoldTown_House1_EventScript_TownMapNPC_Movement_2
# 58 "data/maps/MarigoldTown_House1/scripts.pory"
	waitmovement 0
# 59 "data/maps/MarigoldTown_House1/scripts.pory"
	waitse
# 60 "data/maps/MarigoldTown_House1/scripts.pory"
	delay 16
# 61 "data/maps/MarigoldTown_House1/scripts.pory"
	msgbox MarigoldTown_House1_EventScript_TownMapNPC_Text_3
# 62 "data/maps/MarigoldTown_House1/scripts.pory"
	waitmessage
# 63 "data/maps/MarigoldTown_House1/scripts.pory"
	closemessage
# 64 "data/maps/MarigoldTown_House1/scripts.pory"
	applymovement TOWNMAP_NPC, MarigoldTown_House1_EventScript_TownMapNPC_Movement_6
# 67 "data/maps/MarigoldTown_House1/scripts.pory"
	waitmovement 0
MarigoldTown_House1_EventScript_TownMapNPC_9:
# 69 "data/maps/MarigoldTown_House1/scripts.pory"
	giveitem ITEM_TOWN_MAP, 1
# 70 "data/maps/MarigoldTown_House1/scripts.pory"
	setflag FLAG_GAVE_TOWN_MAP
# 71 "data/maps/MarigoldTown_House1/scripts.pory"
	msgbox MarigoldTown_House1_EventScript_TownMapNPC_Text_4
MarigoldTown_House1_EventScript_TownMapNPC_1:
# 74 "data/maps/MarigoldTown_House1/scripts.pory"
	release
	return

MarigoldTown_House1_EventScript_TownMapNPC_2:
# 7 "data/maps/MarigoldTown_House1/scripts.pory"
	msgbox MarigoldTown_House1_EventScript_TownMapNPC_Text_0
	goto MarigoldTown_House1_EventScript_TownMapNPC_1

MarigoldTown_House1_EventScript_TownMapNPC_6:
# 12 "data/maps/MarigoldTown_House1/scripts.pory"
	msgbox MarigoldTown_House1_EventScript_TownMapNPC_Text_1
	goto MarigoldTown_House1_EventScript_TownMapNPC_5

MarigoldTown_House1_EventScript_TownMapNPC_10:
# 27 "data/maps/MarigoldTown_House1/scripts.pory"
	applymovement TOWNMAP_NPC, MarigoldTown_House1_EventScript_TownMapNPC_Movement_0
# 31 "data/maps/MarigoldTown_House1/scripts.pory"
	waitmovement 0
# 32 "data/maps/MarigoldTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_House1_EventScript_TownMapNPC_Movement_1
# 33 "data/maps/MarigoldTown_House1/scripts.pory"
	waitmovement 0
# 34 "data/maps/MarigoldTown_House1/scripts.pory"
	delay 30
# 35 "data/maps/MarigoldTown_House1/scripts.pory"
	playse SE_PIN
# 36 "data/maps/MarigoldTown_House1/scripts.pory"
	applymovement TOWNMAP_NPC, MarigoldTown_House1_EventScript_TownMapNPC_Movement_2
# 37 "data/maps/MarigoldTown_House1/scripts.pory"
	waitmovement 0
# 38 "data/maps/MarigoldTown_House1/scripts.pory"
	waitse
# 39 "data/maps/MarigoldTown_House1/scripts.pory"
	delay 16
# 40 "data/maps/MarigoldTown_House1/scripts.pory"
	msgbox MarigoldTown_House1_EventScript_TownMapNPC_Text_3
# 41 "data/maps/MarigoldTown_House1/scripts.pory"
	waitmessage
# 42 "data/maps/MarigoldTown_House1/scripts.pory"
	closemessage
# 43 "data/maps/MarigoldTown_House1/scripts.pory"
	applymovement TOWNMAP_NPC, MarigoldTown_House1_EventScript_TownMapNPC_Movement_3
# 47 "data/maps/MarigoldTown_House1/scripts.pory"
	waitmovement 0
# 48 "data/maps/MarigoldTown_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_House1_EventScript_TownMapNPC_Movement_4
# 49 "data/maps/MarigoldTown_House1/scripts.pory"
	waitmovement 0
	goto MarigoldTown_House1_EventScript_TownMapNPC_9


# 27 "data/maps/MarigoldTown_House1/scripts.pory"
MarigoldTown_House1_EventScript_TownMapNPC_Movement_0:
# 27 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_left
# 28 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_up
# 28 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_up
# 29 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_right
# 29 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_right
# 29 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_right
# 29 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_right
# 30 "data/maps/MarigoldTown_House1/scripts.pory"
	face_up
	step_end

# 32 "data/maps/MarigoldTown_House1/scripts.pory"
MarigoldTown_House1_EventScript_TownMapNPC_Movement_1:
# 32 "data/maps/MarigoldTown_House1/scripts.pory"
	face_right
	step_end

# 36 "data/maps/MarigoldTown_House1/scripts.pory"
MarigoldTown_House1_EventScript_TownMapNPC_Movement_2:
# 36 "data/maps/MarigoldTown_House1/scripts.pory"
	emote_exclamation_mark
	step_end

# 43 "data/maps/MarigoldTown_House1/scripts.pory"
MarigoldTown_House1_EventScript_TownMapNPC_Movement_3:
# 43 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_left
# 43 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_left
# 43 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_left
# 43 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_left
# 44 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_down
# 44 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_down
# 45 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_right
# 46 "data/maps/MarigoldTown_House1/scripts.pory"
	face_up
	step_end

# 48 "data/maps/MarigoldTown_House1/scripts.pory"
MarigoldTown_House1_EventScript_TownMapNPC_Movement_4:
# 48 "data/maps/MarigoldTown_House1/scripts.pory"
	face_down
	step_end

# 51 "data/maps/MarigoldTown_House1/scripts.pory"
MarigoldTown_House1_EventScript_TownMapNPC_Movement_5:
# 51 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_up
# 51 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_up
# 52 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_right
# 52 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_right
# 52 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_right
# 53 "data/maps/MarigoldTown_House1/scripts.pory"
	face_up
	step_end

# 64 "data/maps/MarigoldTown_House1/scripts.pory"
MarigoldTown_House1_EventScript_TownMapNPC_Movement_6:
# 64 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_left
# 64 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_left
# 64 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_left
# 65 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_down
# 65 "data/maps/MarigoldTown_House1/scripts.pory"
	walk_down
# 66 "data/maps/MarigoldTown_House1/scripts.pory"
	face_player
	step_end

MarigoldTown_House1_EventScript_TownMapNPC_Text_0:
# 7 "data/maps/MarigoldTown_House1/scripts.pory"
	.string "Have you found yourself getting\n"
	.string "lost lately?$"

MarigoldTown_House1_EventScript_TownMapNPC_Text_1:
# 12 "data/maps/MarigoldTown_House1/scripts.pory"
	.string "Oh, hi!\p"
	.string "...April told you I'd give you a\n"
	.string "Town Map?\p"
	.string "I'm sure I have an extra one laying\n"
	.string "around somewhere...$"

MarigoldTown_House1_EventScript_TownMapNPC_Text_2:
# 18 "data/maps/MarigoldTown_House1/scripts.pory"
	.string "Oh, hi!\p"
	.string "...Ryan told you I'd give you a\n"
	.string "Town Map?\p"
	.string "I'm sure I have an extra one laying\n"
	.string "around somewhere...$"

MarigoldTown_House1_EventScript_TownMapNPC_Text_3:
# 40 "data/maps/MarigoldTown_House1/scripts.pory"
	.string "Here it is!$"

MarigoldTown_House1_EventScript_TownMapNPC_Text_4:
# 71 "data/maps/MarigoldTown_House1/scripts.pory"
	.string "I hope it helps you get to where\n"
	.string "you need to go!$"
