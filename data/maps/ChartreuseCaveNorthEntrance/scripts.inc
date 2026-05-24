ChartreuseCaveNorthEntrance_MapScripts::
	.byte 0


ChartreuseCaveNorthEntrance_TrainerScript_Barney::
# 4 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	trainerbattle_single TRAINER_BARNEY_CHARTREUSE_CAVE, Barney_Intro, Barney_Outro
# 5 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	msgbox PostBattle_Barney, MSGBOX_AUTOCLOSE
# 6 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	waitmessage
	end


ChartreuseCaveNorthEntrance_TrainerScript_Kevin::
# 25 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	trainerbattle_single TRAINER_KEVIN_CHARTREUSE_CAVE, Kevin_Intro, Kevin_Outro
# 26 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	msgbox PostBattle_Kevin, MSGBOX_AUTOCLOSE
# 27 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	waitmessage
	end


ChartreuseCaveNorthEntrance_ItemScript_Nugget::
# 48 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	finditem ITEM_NUGGET, 1
# 49 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	setflag FLAG_ITEM_CHARTREUSE_CAVE_NUGGET
	return


ChartreuseCaveNorthEntrance_EventScript_TeamAlpha::
# 53 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	lock
# 54 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	playse SE_PIN
# 55 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChartreuseCaveNorthEntrance_EventScript_TeamAlpha_Movement_0
# 56 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	waitmovement 0
# 57 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	waitse
# 58 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	delay 30
# 59 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	special SpawnCameraObject
# 60 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ChartreuseCaveNorthEntrance_EventScript_TeamAlpha_Movement_1
# 61 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	waitmovement 0
# 62 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	applymovement ALPHA1, ChartreuseCaveNorthEntrance_EventScript_TeamAlpha_Movement_2
# 63 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	waitmovement 0
# 64 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	applymovement ALPHA2, ChartreuseCaveNorthEntrance_EventScript_TeamAlpha_Movement_3
# 65 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	waitmovement 0
# 66 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	msgbox ChartreuseCaveNorthEntrance_EventScript_TeamAlpha_Text_0
# 76 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	waitmessage
# 77 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	closemessage
# 78 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	applymovement ALPHA2, ChartreuseCaveNorthEntrance_EventScript_TeamAlpha_Movement_4
# 79 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	waitmovement 0
# 80 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	playse SE_EXIT
# 81 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	setflag FLAG_HIDE_ALPHA_CC_2
# 82 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	removeobject ALPHA2
# 83 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	applymovement ALPHA1, ChartreuseCaveNorthEntrance_EventScript_TeamAlpha_Movement_5
# 84 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	waitmovement 0
# 85 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	playse SE_EXIT
# 86 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	setflag FLAG_HIDE_ALPHA_CC_1
# 87 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	removeobject ALPHA1
# 88 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	waitse
# 89 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	delay 30
# 90 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ChartreuseCaveNorthEntrance_EventScript_TeamAlpha_Movement_6
# 91 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	waitmovement 0
# 92 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	special RemoveCameraObject
# 93 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	addvar VAR_CHARTREUSE_CAVE_STATE, 1
# 94 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	release
	return


# 55 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
ChartreuseCaveNorthEntrance_EventScript_TeamAlpha_Movement_0:
# 55 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	emote_exclamation_mark
	step_end

# 60 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
ChartreuseCaveNorthEntrance_EventScript_TeamAlpha_Movement_1:
# 60 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_right
# 60 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_right
# 60 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_right
# 60 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_right
# 60 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_right
# 60 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_right
# 60 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_right
# 60 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_right
# 60 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_right
# 60 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_down
# 60 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_down
	step_end

# 62 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
ChartreuseCaveNorthEntrance_EventScript_TeamAlpha_Movement_2:
# 62 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	face_right
	step_end

# 64 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
ChartreuseCaveNorthEntrance_EventScript_TeamAlpha_Movement_3:
# 64 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	face_left
	step_end

# 78 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
ChartreuseCaveNorthEntrance_EventScript_TeamAlpha_Movement_4:
# 78 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_down
# 78 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_down
# 78 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_down
# 78 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_down
	step_end

# 83 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
ChartreuseCaveNorthEntrance_EventScript_TeamAlpha_Movement_5:
# 83 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_right
# 83 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_down
# 83 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_down
# 83 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_down
# 83 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_down
	step_end

# 90 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
ChartreuseCaveNorthEntrance_EventScript_TeamAlpha_Movement_6:
# 90 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_up
# 90 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_up
# 90 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_left
# 90 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_left
# 90 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_left
# 90 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_left
# 90 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_left
# 90 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_left
# 90 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_left
# 90 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_left
# 90 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	walk_left
	step_end

ChartreuseCaveNorthEntrance_EventScript_TeamAlpha_Text_0:
# 66 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}How long until we get to Chartreuse\n"
	.string "City? I feel like we've been walking for\l"
	.string "a really long time!\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}We're getting close. Just need to pass\n"
	.string "through Route 4 and we'll be there.\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Thank goodness, I can't wait to share\n"
	.string "the good news of Arceus with everyone!\p"
	.string "Do you think they'll believe us?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Of course they will! Now come on,\n"
	.string "let's get a move on.$"

Barney_Intro::
# 10 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	.string "I can barely see anything through\n"
	.string "this fog!$"

Barney_Outro::
# 15 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	.string "I thought the fog would help me...$"

PostBattle_Barney::
# 19 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	.string "I've been searching for the exit for\n"
	.string "twenty minutes.$"

Kevin_Intro::
# 31 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	.string "There doesn't seem to be much going\n"
	.string "on in this cave...\p"
	.string "I'm getting bored.$"

Kevin_Outro::
# 37 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	.string "Thanks for the battle!$"

PostBattle_Kevin::
# 41 "data/maps/ChartreuseCaveNorthEntrance/scripts.pory"
	.string "I think I saw a tunnel or something,\n"
	.string "but a bunch of rocks were blocking\l"
	.string "the path!$"
