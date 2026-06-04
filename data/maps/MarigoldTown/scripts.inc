MarigoldTown_MapScripts::
# 2 "data/maps/MarigoldTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MarigoldTown_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MarigoldTown_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/MarigoldTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


MarigoldTown_EventScript_Sign::
# 8 "data/maps/MarigoldTown/scripts.pory"
	lock
# 9 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_Sign_Text_0
# 10 "data/maps/MarigoldTown/scripts.pory"
	release
	return


MarigoldTown_EventScript_Trigger1::
# 14 "data/maps/MarigoldTown/scripts.pory"
	lock
# 15 "data/maps/MarigoldTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, TRUE
# 16 "data/maps/MarigoldTown/scripts.pory"
	playse SE_PIN
# 17 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_Trigger1_Movement_0
# 19 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 20 "data/maps/MarigoldTown/scripts.pory"
	waitse
# 21 "data/maps/MarigoldTown/scripts.pory"
	delay 30
# 22 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_Trigger1_Text_0
# 24 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 25 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_Trigger1_Movement_1
# 26 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 27 "data/maps/MarigoldTown/scripts.pory"
	call MarigoldTown_EventScript_MeetRival
	return


MarigoldTown_EventScript_Trigger2::
# 31 "data/maps/MarigoldTown/scripts.pory"
	lock
# 32 "data/maps/MarigoldTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, TRUE
# 33 "data/maps/MarigoldTown/scripts.pory"
	playse SE_PIN
# 34 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_Trigger1_Movement_0
# 36 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 37 "data/maps/MarigoldTown/scripts.pory"
	waitse
# 38 "data/maps/MarigoldTown/scripts.pory"
	delay 30
# 39 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_Trigger1_Text_0
# 41 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 42 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_Trigger1_Movement_1
# 43 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_Trigger2_Movement_0
# 44 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 45 "data/maps/MarigoldTown/scripts.pory"
	call MarigoldTown_EventScript_MeetRival
	return


MarigoldTown_EventScript_Trigger3::
# 49 "data/maps/MarigoldTown/scripts.pory"
	lock
# 50 "data/maps/MarigoldTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, TRUE
# 51 "data/maps/MarigoldTown/scripts.pory"
	playse SE_PIN
# 52 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_Trigger3_Movement_0
# 53 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 54 "data/maps/MarigoldTown/scripts.pory"
	waitse
# 55 "data/maps/MarigoldTown/scripts.pory"
	delay 30
# 56 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_Trigger1_Text_0
# 58 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 59 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_Trigger1_Movement_1
# 60 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_Trigger3_Movement_1
# 61 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 62 "data/maps/MarigoldTown/scripts.pory"
	call MarigoldTown_EventScript_MeetRival
	return


MarigoldTown_EventScript_Trigger4::
# 66 "data/maps/MarigoldTown/scripts.pory"
	lock
# 67 "data/maps/MarigoldTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, TRUE
# 68 "data/maps/MarigoldTown/scripts.pory"
	playse SE_PIN
# 69 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_Trigger3_Movement_0
# 70 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 71 "data/maps/MarigoldTown/scripts.pory"
	waitse
# 72 "data/maps/MarigoldTown/scripts.pory"
	delay 30
# 73 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_Trigger1_Text_0
# 75 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 76 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_Trigger1_Movement_1
# 77 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_Trigger4_Movement_0
# 78 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 79 "data/maps/MarigoldTown/scripts.pory"
	call MarigoldTown_EventScript_MeetRival
	return


MarigoldTown_EventScript_MeetRival::
# 83 "data/maps/MarigoldTown/scripts.pory"
	checkplayergender
# 84 "data/maps/MarigoldTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MarigoldTown_EventScript_MeetRival_2
# 95 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_1
# 102 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 103 "data/maps/MarigoldTown/scripts.pory"
	closemessage
MarigoldTown_EventScript_MeetRival_1:
# 105 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_MeetRival_Movement_0
# 106 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_MeetRival_Movement_0
# 107 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 108 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_2
# 110 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_MeetRival_Movement_1
# 111 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_MeetRival_Movement_2
# 112 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 113 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_3
# 115 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 116 "data/maps/MarigoldTown/scripts.pory"
	closemessage
# 117 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_MeetRival_Movement_3
# 118 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_MeetRival_Movement_3
# 119 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 120 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_4
# 121 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_MeetRival_Movement_1
# 122 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_MeetRival_Movement_2
# 123 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 124 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_5
# 126 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 127 "data/maps/MarigoldTown/scripts.pory"
	closemessage
# 128 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_MeetRival_Movement_4
# 129 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_MeetRival_Movement_5
# 130 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 131 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_6
# 134 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_MeetRival_Movement_2
# 135 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_MeetRival_Movement_1
# 136 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 137 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_7
# 140 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 141 "data/maps/MarigoldTown/scripts.pory"
	closemessage
# 142 "data/maps/MarigoldTown/scripts.pory"
	playse SE_PIN
# 143 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_Trigger3_Movement_0
# 144 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 145 "data/maps/MarigoldTown/scripts.pory"
	waitse
# 146 "data/maps/MarigoldTown/scripts.pory"
	delay 30
# 147 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_8
# 159 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 160 "data/maps/MarigoldTown/scripts.pory"
	closemessage
# 161 "data/maps/MarigoldTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MarigoldTown_EventScript_MeetRival_Movement_6
# 162 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 163 "data/maps/MarigoldTown/scripts.pory"
	applymovement RIVAL, MarigoldTown_EventScript_MeetRival_Movement_7
# 164 "data/maps/MarigoldTown/scripts.pory"
	waitmovement 0
# 165 "data/maps/MarigoldTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MARIGOLD_TOWN
# 166 "data/maps/MarigoldTown/scripts.pory"
	removeobject RIVAL
# 167 "data/maps/MarigoldTown/scripts.pory"
	addvar VAR_MARIGOLD_TOWN_STATE, 1
# 168 "data/maps/MarigoldTown/scripts.pory"
	fadedefaultbgm
# 169 "data/maps/MarigoldTown/scripts.pory"
	release
	return

MarigoldTown_EventScript_MeetRival_2:
# 85 "data/maps/MarigoldTown/scripts.pory"
	msgbox MarigoldTown_EventScript_MeetRival_Text_0
# 92 "data/maps/MarigoldTown/scripts.pory"
	waitmessage
# 93 "data/maps/MarigoldTown/scripts.pory"
	closemessage
	goto MarigoldTown_EventScript_MeetRival_1


# 17 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_Trigger1_Movement_0:
# 17 "data/maps/MarigoldTown/scripts.pory"
	face_left
# 18 "data/maps/MarigoldTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 25 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_Trigger1_Movement_1:
# 25 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 25 "data/maps/MarigoldTown/scripts.pory"
	walk_left
	step_end

# 43 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_Trigger2_Movement_0:
# 43 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 43 "data/maps/MarigoldTown/scripts.pory"
	face_right
	step_end

# 52 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_Trigger3_Movement_0:
# 52 "data/maps/MarigoldTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 60 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_Trigger3_Movement_1:
# 60 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 60 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 60 "data/maps/MarigoldTown/scripts.pory"
	face_right
	step_end

# 77 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_Trigger4_Movement_0:
# 77 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 77 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 77 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 77 "data/maps/MarigoldTown/scripts.pory"
	face_right
	step_end

# 105 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_0:
# 105 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 105 "data/maps/MarigoldTown/scripts.pory"
	face_up
	step_end

# 110 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_1:
# 110 "data/maps/MarigoldTown/scripts.pory"
	face_left
	step_end

# 111 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_2:
# 111 "data/maps/MarigoldTown/scripts.pory"
	face_right
	step_end

# 117 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_3:
# 117 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 117 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 117 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 117 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 117 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 117 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 117 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 117 "data/maps/MarigoldTown/scripts.pory"
	face_up
	step_end

# 128 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_4:
# 128 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 128 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 128 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 128 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 128 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 128 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 128 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 128 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 128 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 128 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 128 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 128 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 128 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 128 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 128 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 128 "data/maps/MarigoldTown/scripts.pory"
	face_up
	step_end

# 129 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_5:
# 129 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 129 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 129 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 129 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 129 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 129 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 129 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 129 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 129 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 129 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 129 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 129 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 129 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 129 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 129 "data/maps/MarigoldTown/scripts.pory"
	walk_left
# 129 "data/maps/MarigoldTown/scripts.pory"
	face_up
	step_end

# 161 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_6:
# 161 "data/maps/MarigoldTown/scripts.pory"
	face_down
	step_end

# 163 "data/maps/MarigoldTown/scripts.pory"
MarigoldTown_EventScript_MeetRival_Movement_7:
# 163 "data/maps/MarigoldTown/scripts.pory"
	walk_down
# 163 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 163 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 163 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 163 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 163 "data/maps/MarigoldTown/scripts.pory"
	walk_right
# 163 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 163 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 163 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 163 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 163 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 163 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 163 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 163 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 163 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 163 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 163 "data/maps/MarigoldTown/scripts.pory"
	walk_up
# 163 "data/maps/MarigoldTown/scripts.pory"
	walk_up
	step_end

MarigoldTown_EventScript_Sign_Text_0:
# 9 "data/maps/MarigoldTown/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Marigold Town.$"

MarigoldTown_EventScript_Trigger1_Text_0:
# 22 "data/maps/MarigoldTown/scripts.pory"
	.string "Hey! You're {PLAYER},\n"
	.string "that new trainer from Kanto, right?$"

MarigoldTown_EventScript_MeetRival_Text_0:
# 85 "data/maps/MarigoldTown/scripts.pory"
	.string "I'm April. I'm Professor Aspen's\n"
	.string "other assistant.\p"
	.string "Aspen asked me to meet you here and\n"
	.string "show you around Marigold.\p"
	.string "I figured a trainer such as yourself\n"
	.string "wouldn't need help finding your way\l"
	.string "around, but he insisted...$"

MarigoldTown_EventScript_MeetRival_Text_1:
# 95 "data/maps/MarigoldTown/scripts.pory"
	.string "I'm Ryan. I'm Professor Aspen's\n"
	.string "other assistant.\p"
	.string "Aspen asked me to meet you here and\n"
	.string "show you around Marigold.\p"
	.string "I figured a trainer such as yourself\n"
	.string "wouldn't need help finding your way\l"
	.string "around, but he insisted...$"

MarigoldTown_EventScript_MeetRival_Text_2:
# 108 "data/maps/MarigoldTown/scripts.pory"
	.string "This is a Poké Mart, as I'm sure you\n"
	.string "already know.$"

MarigoldTown_EventScript_MeetRival_Text_3:
# 113 "data/maps/MarigoldTown/scripts.pory"
	.string "If you're ever running low on items,\n"
	.string "this is the place to go.$"

MarigoldTown_EventScript_MeetRival_Text_4:
# 120 "data/maps/MarigoldTown/scripts.pory"
	.string "This is my house!$"

MarigoldTown_EventScript_MeetRival_Text_5:
# 124 "data/maps/MarigoldTown/scripts.pory"
	.string "I'm not home very often, but hey,\n"
	.string "it's still part of the tour.$"

MarigoldTown_EventScript_MeetRival_Text_6:
# 131 "data/maps/MarigoldTown/scripts.pory"
	.string "And lastly, this is a Pokémon Center.\p"
	.string "If your Pokémon are ever in trouble,\n"
	.string "they'll heal them back to full health.$"

MarigoldTown_EventScript_MeetRival_Text_7:
# 137 "data/maps/MarigoldTown/scripts.pory"
	.string "That's the end of the tour...\n"
	.string "Marigold's a pretty small town.\p"
	.string "Hey, wait a second, is that...$"

MarigoldTown_EventScript_MeetRival_Text_8:
# 147 "data/maps/MarigoldTown/scripts.pory"
	.string "It is! Aspen gave you the new Pokédex?!\n"
	.string "That's an even better model than the\l"
	.string "one I have!\p"
	.string "I'm going to go see if he has an extra\n"
	.string "one for me...\p"
	.string "Once you're done exploring Marigold,\n"
	.string "you should make your way over to\l"
	.string "Chartreuse City.\p"
	.string "It's quite a ways away from here, so\n"
	.string "go ask my neighbor if she can lend\l"
	.string "you her Town Map.\p"
	.string "I'll catch up with you later, {PLAYER}!$"
