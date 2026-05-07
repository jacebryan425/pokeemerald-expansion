MarigoldTown_MapScripts::
	.byte 0


MarigoldTown_EventScript_Sign::
# 4 "data/maps/MarigoldTown/scripts.pory"
	lock
# 5 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_Sign_Text_0
# 6 "data/maps/MarigoldTown/scripts.pory"
	release
	return


MarigoldTown_EventScript_Trigger1::
# 10 "data/maps/MarigoldTown/scripts.pory"
	lock
# 11 "data/maps/MarigoldTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, TRUE
# 12 "data/maps/MarigoldTown/scripts.pory"
	playse SE_PIN
# 13 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_Trigger1_Movement_0
# 15 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 16 "data/maps/MarigoldTown/scripts.pory"
	waitse
# 17 "data/maps/MarigoldTown/scripts.pory"
	delay 30
# 18 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_Trigger1_Text_0
# 20 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 21 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_Trigger1_Movement_1
# 22 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 23 "data/maps/MarigoldTown/scripts.pory"
	call MarigoldTown_EventScript_MeetRival
	return


MarigoldTown_EventScript_Trigger2::
# 27 "data/maps/MarigoldTown/scripts.pory"
	lock
# 28 "data/maps/MarigoldTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, TRUE
# 29 "data/maps/MarigoldTown/scripts.pory"
	playse SE_PIN
# 30 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_Trigger1_Movement_0
# 32 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 33 "data/maps/MarigoldTown/scripts.pory"
	waitse
# 34 "data/maps/MarigoldTown/scripts.pory"
	delay 30
# 35 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_Trigger1_Text_0
# 37 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 38 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_Trigger1_Movement_1
# 39 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_Trigger2_Movement_0
# 40 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 41 "data/maps/MarigoldTown/scripts.pory"
	call MarigoldTown_EventScript_MeetRival
	return


MarigoldTown_EventScript_Trigger3::
# 45 "data/maps/MarigoldTown/scripts.pory"
	lock
# 46 "data/maps/MarigoldTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, TRUE
# 47 "data/maps/MarigoldTown/scripts.pory"
	playse SE_PIN
# 48 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_Trigger3_Movement_0
# 49 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 50 "data/maps/MarigoldTown/scripts.pory"
	waitse
# 51 "data/maps/MarigoldTown/scripts.pory"
	delay 30
# 52 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_Trigger1_Text_0
# 54 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 55 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_Trigger1_Movement_1
# 56 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_Trigger3_Movement_1
# 57 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 58 "data/maps/MarigoldTown/scripts.pory"
	call MarigoldTown_EventScript_MeetRival
	return


MarigoldTown_EventScript_Trigger4::
# 62 "data/maps/MarigoldTown/scripts.pory"
	lock
# 63 "data/maps/MarigoldTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, TRUE
# 64 "data/maps/MarigoldTown/scripts.pory"
	playse SE_PIN
# 65 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_Trigger3_Movement_0
# 66 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 67 "data/maps/MarigoldTown/scripts.pory"
	waitse
# 68 "data/maps/MarigoldTown/scripts.pory"
	delay 30
# 69 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_Trigger1_Text_0
# 71 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 72 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_Trigger1_Movement_1
# 73 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_Trigger4_Movement_0
# 74 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 75 "data/maps/MarigoldTown/scripts.pory"
	call MarigoldTown_EventScript_MeetRival
	return


MarigoldTown_EventScript_MeetRival::
# 79 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_0
# 86 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 87 "data/maps/MarigoldTown/scripts.pory"
	closemessage
# 88 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_MeetRival_Movement_0
# 89 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_MeetRival_Movement_0
# 90 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 91 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_1
# 93 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_MeetRival_Movement_1
# 94 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_MeetRival_Movement_2
# 95 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 96 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_2
# 98 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 99 "data/maps/MarigoldTown/scripts.pory"
	closemessage
# 100 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_MeetRival_Movement_3
# 101 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_MeetRival_Movement_3
# 102 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 103 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_3
# 104 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_MeetRival_Movement_1
# 105 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_MeetRival_Movement_2
# 106 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 107 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_4
# 109 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 110 "data/maps/MarigoldTown/scripts.pory"
	closemessage
# 111 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_MeetRival_Movement_4
# 112 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_MeetRival_Movement_5
# 113 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 114 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_5
# 117 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_MeetRival_Movement_2
# 118 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_MeetRival_Movement_1
# 119 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 120 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_6
# 123 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 124 "data/maps/MarigoldTown/scripts.pory"
	closemessage
# 125 "data/maps/MarigoldTown/scripts.pory"
	playse SE_PIN
# 126 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_Trigger3_Movement_0
# 127 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 128 "data/maps/MarigoldTown/scripts.pory"
	waitse
# 129 "data/maps/MarigoldTown/scripts.pory"
	delay 30
# 130 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_7
# 141 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 142 "data/maps/MarigoldTown/scripts.pory"
	closemessage
# 143 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_MeetRival_Movement_6
# 144 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 145 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_MeetRival_Movement_7
# 146 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 147 "data/maps/MarigoldTown/scripts.pory"
	setflag HIDE_APRIL_MARIGOLD_TOWN
# 148 "data/maps/MarigoldTown/scripts.pory"
	removeobject RIVAL
# 149 "data/maps/MarigoldTown/scripts.pory"
	addvar VAR_MARIGOLD_TOWN_STATE, 1
# 150 "data/maps/MarigoldTown/scripts.pory"
	fadedefaultbgm
# 151 "data/maps/MarigoldTown/scripts.pory"
	release
	return


# 13 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_Trigger1_Movement_0:
# 13 "data/maps/MarigoldTown/scripts.pory"
	face_left
# 14 "data/maps/MarigoldTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 21 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_Trigger1_Movement_1:
# 21 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 21 "data/maps/MarigoldTown/scripts.pory"
	walk_left
	step_end

# 39 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_Trigger2_Movement_0:
# 39 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 39 "data/maps/MarigoldTown/scripts.pory"
	face_right
	step_end

# 48 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_Trigger3_Movement_0:
# 48 "data/maps/MarigoldTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 56 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_Trigger3_Movement_1:
# 56 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 56 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 56 "data/maps/MarigoldTown/scripts.pory"
	face_right
	step_end

# 73 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_Trigger4_Movement_0:
# 73 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 73 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 73 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 73 "data/maps/MarigoldTown/scripts.pory"
	face_right
	step_end

# 88 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_0:
# 88 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 88 "data/maps/MarigoldTown/scripts.pory"
	face_up
	step_end

# 93 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_1:
# 93 "data/maps/MarigoldTown/scripts.pory"
	face_left
	step_end

# 94 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_2:
# 94 "data/maps/MarigoldTown/scripts.pory"
	face_right
	step_end

# 100 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_3:
# 100 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 100 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 100 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 100 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 100 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 100 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 100 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 100 "data/maps/MarigoldTown/scripts.pory"
	face_up
	step_end

# 111 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_4:
# 111 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 111 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 111 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 111 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 111 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 111 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 111 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 111 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 111 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 111 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 111 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 111 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 111 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 111 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 111 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 111 "data/maps/MarigoldTown/scripts.pory"
	face_up
	step_end

# 112 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_5:
# 112 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 112 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 112 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 112 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 112 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 112 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 112 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 112 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 112 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 112 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 112 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 112 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 112 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 112 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 112 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 112 "data/maps/MarigoldTown/scripts.pory"
	face_up
	step_end

# 143 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_6:
# 143 "data/maps/MarigoldTown/scripts.pory"
	face_down
	step_end

# 145 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_7:
# 145 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 145 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 145 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 145 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 145 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 145 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 145 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 145 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 145 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 145 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 145 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 145 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 145 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 145 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 145 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 145 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 145 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 145 "data/maps/MarigoldTown/scripts.pory"
	walk_up
	step_end

MarigoldTown_EventScript_Sign_Text_0:
# 5 "data/maps/MarigoldTown/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Marigold Town.$"

MarigoldTown_EventScript_Trigger1_Text_0:
# 18 "data/maps/MarigoldTown/scripts.pory"
	.string "Hey! You're {PLAYER},\n"
	.string "that new trainer from Kanto, right?$"

MarigoldTown_EventScript_MeetRival_Text_0:
# 79 "data/maps/MarigoldTown/scripts.pory"
	.string "I'm April. I'm Professor Aspen's\n"
	.string "other assistant.\p"
	.string "Aspen asked me to meet you here and\n"
	.string "show you around Marigold.\p"
	.string "I figured a trainer such as yourself\n"
	.string "wouldn't need help finding your way\l"
	.string "around, but he insisted...$"

MarigoldTown_EventScript_MeetRival_Text_1:
# 91 "data/maps/MarigoldTown/scripts.pory"
	.string "This is a Poké Mart, as I'm sure you\n"
	.string "already know.$"

MarigoldTown_EventScript_MeetRival_Text_2:
# 96 "data/maps/MarigoldTown/scripts.pory"
	.string "If you're ever running low on items,\n"
	.string "this is the place to go.$"

MarigoldTown_EventScript_MeetRival_Text_3:
# 103 "data/maps/MarigoldTown/scripts.pory"
	.string "This is my house!$"

MarigoldTown_EventScript_MeetRival_Text_4:
# 107 "data/maps/MarigoldTown/scripts.pory"
	.string "I'm not home very often, but hey,\n"
	.string "it's still part of the tour.$"

MarigoldTown_EventScript_MeetRival_Text_5:
# 114 "data/maps/MarigoldTown/scripts.pory"
	.string "And lastly, this is a Pokémon Center.\p"
	.string "If your Pokémon are ever in trouble,\n"
	.string "they'll heal them back to full health.$"

MarigoldTown_EventScript_MeetRival_Text_6:
# 120 "data/maps/MarigoldTown/scripts.pory"
	.string "That's the end of the tour...\n"
	.string "Marigold's a pretty small town.\p"
	.string "Hey, wait a second, is that...$"

MarigoldTown_EventScript_MeetRival_Text_7:
# 130 "data/maps/MarigoldTown/scripts.pory"
	.string "It is! Aspen gave you the new Pokédex?!\n"
	.string "That's an even better model than the\l"
	.string "one I have!\p"
	.string "I'm going to go see if he has an extra\n"
	.string "one for me...\p"
	.string "You should make your way over to\n"
	.string "Chartreuse City.\p"
	.string "It's quite a ways away from here, so\n"
	.string "go ask my neighbor if she can lend\l"
	.string "you her Town Map.\p"
	.string "I'll catch up with you later, {PLAYER}!$"
