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
	applymovement RIVAL, MarigoldTown_EventScript_Trigger1_Movement_0
# 50 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 51 "data/maps/MarigoldTown/scripts.pory"
	waitse
# 52 "data/maps/MarigoldTown/scripts.pory"
	delay 30
# 53 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_Trigger1_Text_0
# 55 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 56 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_Trigger1_Movement_1
# 57 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_Trigger3_Movement_0
# 58 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 59 "data/maps/MarigoldTown/scripts.pory"
	call MarigoldTown_EventScript_MeetRival
	return


MarigoldTown_EventScript_Trigger4::
# 63 "data/maps/MarigoldTown/scripts.pory"
	lock
# 64 "data/maps/MarigoldTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, TRUE
# 65 "data/maps/MarigoldTown/scripts.pory"
	playse SE_PIN
# 66 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_Trigger1_Movement_0
# 68 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 69 "data/maps/MarigoldTown/scripts.pory"
	waitse
# 70 "data/maps/MarigoldTown/scripts.pory"
	delay 30
# 71 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_Trigger1_Text_0
# 73 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 74 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_Trigger1_Movement_1
# 75 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_Trigger4_Movement_0
# 76 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 77 "data/maps/MarigoldTown/scripts.pory"
	call MarigoldTown_EventScript_MeetRival
	return


MarigoldTown_EventScript_MeetRival::
# 81 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_0
# 88 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 89 "data/maps/MarigoldTown/scripts.pory"
	closemessage
# 90 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_MeetRival_Movement_0
# 91 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_MeetRival_Movement_0
# 92 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 93 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_1
# 95 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_MeetRival_Movement_1
# 96 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_MeetRival_Movement_2
# 97 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 98 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_2
# 100 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 101 "data/maps/MarigoldTown/scripts.pory"
	closemessage
# 102 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_MeetRival_Movement_3
# 103 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_MeetRival_Movement_3
# 104 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 105 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_3
# 106 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_MeetRival_Movement_1
# 107 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_MeetRival_Movement_2
# 108 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 109 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_4
# 111 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 112 "data/maps/MarigoldTown/scripts.pory"
	closemessage
# 113 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_MeetRival_Movement_4
# 114 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_MeetRival_Movement_5
# 115 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 116 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_5
# 119 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_MeetRival_Movement_2
# 120 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_MeetRival_Movement_1
# 121 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 122 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_6
# 125 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 126 "data/maps/MarigoldTown/scripts.pory"
	closemessage
# 127 "data/maps/MarigoldTown/scripts.pory"
	playse SE_PIN
# 128 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_MeetRival_Movement_6
# 129 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 130 "data/maps/MarigoldTown/scripts.pory"
	waitse
# 131 "data/maps/MarigoldTown/scripts.pory"
	delay 30
# 132 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_7
# 143 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 144 "data/maps/MarigoldTown/scripts.pory"
	closemessage
# 145 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_MeetRival_Movement_7
# 146 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 147 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_MeetRival_Movement_8
# 148 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 149 "data/maps/MarigoldTown/scripts.pory"
	setflag HIDE_APRIL_MARIGOLD_TOWN
# 150 "data/maps/MarigoldTown/scripts.pory"
	removeobject RIVAL
# 151 "data/maps/MarigoldTown/scripts.pory"
	addvar VAR_MARIGOLD_TOWN_STATE, 1
# 152 "data/maps/MarigoldTown/scripts.pory"
	fadedefaultbgm
# 153 "data/maps/MarigoldTown/scripts.pory"
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

# 57 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_Trigger3_Movement_0:
# 57 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 57 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 57 "data/maps/MarigoldTown/scripts.pory"
	face_right
	step_end

# 75 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_Trigger4_Movement_0:
# 75 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 75 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 75 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 75 "data/maps/MarigoldTown/scripts.pory"
	face_right
	step_end

# 90 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_0:
# 90 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 90 "data/maps/MarigoldTown/scripts.pory"
	face_up
	step_end

# 95 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_1:
# 95 "data/maps/MarigoldTown/scripts.pory"
	face_left
	step_end

# 96 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_2:
# 96 "data/maps/MarigoldTown/scripts.pory"
	face_right
	step_end

# 102 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_3:
# 102 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 102 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 102 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 102 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 102 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 102 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 102 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 102 "data/maps/MarigoldTown/scripts.pory"
	face_up
	step_end

# 113 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_4:
# 113 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 113 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 113 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 113 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 113 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 113 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 113 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 113 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 113 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 113 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 113 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 113 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 113 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 113 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 113 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 113 "data/maps/MarigoldTown/scripts.pory"
	face_up
	step_end

# 114 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_5:
# 114 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 114 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 114 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 114 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 114 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 114 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 114 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 114 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 114 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 114 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 114 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 114 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 114 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 114 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 114 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 114 "data/maps/MarigoldTown/scripts.pory"
	face_up
	step_end

# 128 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_6:
# 128 "data/maps/MarigoldTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 145 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_7:
# 145 "data/maps/MarigoldTown/scripts.pory"
	face_down
	step_end

# 147 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_8:
# 147 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 147 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 147 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 147 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 147 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 147 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 147 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 147 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 147 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 147 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 147 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 147 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 147 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 147 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 147 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 147 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 147 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 147 "data/maps/MarigoldTown/scripts.pory"
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
# 81 "data/maps/MarigoldTown/scripts.pory"
	.string "I'm April. I'm Professor Aspen's\n"
	.string "other assistant.\p"
	.string "Aspen asked me to meet you here and\n"
	.string "show you around Marigold.\p"
	.string "I figured a trainer such as yourself\n"
	.string "wouldn't need help finding your way\l"
	.string "around, but he insisted...$"

MarigoldTown_EventScript_MeetRival_Text_1:
# 93 "data/maps/MarigoldTown/scripts.pory"
	.string "This is a Poké Mart, as I'm sure you\n"
	.string "already know.$"

MarigoldTown_EventScript_MeetRival_Text_2:
# 98 "data/maps/MarigoldTown/scripts.pory"
	.string "If you're ever running low on items,\n"
	.string "this is the place to go.$"

MarigoldTown_EventScript_MeetRival_Text_3:
# 105 "data/maps/MarigoldTown/scripts.pory"
	.string "This is my house!$"

MarigoldTown_EventScript_MeetRival_Text_4:
# 109 "data/maps/MarigoldTown/scripts.pory"
	.string "I'm not home very often, but hey,\n"
	.string "it's still part of the tour.$"

MarigoldTown_EventScript_MeetRival_Text_5:
# 116 "data/maps/MarigoldTown/scripts.pory"
	.string "And lastly, this is a Pokémon Center.\p"
	.string "If your Pokémon are ever in trouble,\n"
	.string "they'll heal them back to full health.$"

MarigoldTown_EventScript_MeetRival_Text_6:
# 122 "data/maps/MarigoldTown/scripts.pory"
	.string "That's the end of the tour...\n"
	.string "Marigold's a pretty small town.\p"
	.string "Hey, wait a second, is that...$"

MarigoldTown_EventScript_MeetRival_Text_7:
# 132 "data/maps/MarigoldTown/scripts.pory"
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
