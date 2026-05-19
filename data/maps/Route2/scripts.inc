Route2_MapScripts::
	.byte 0


Route2_EventScript_Lisa::
# 4 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_LISA_ROUTE2, Lisa_Intro, Lisa_Outro
# 5 "data/maps/Route2/scripts.pory"
	msgbox PostBattle_Lisa, MSGBOX_AUTOCLOSE
# 6 "data/maps/Route2/scripts.pory"
	waitmessage
	end


Route2_EventScript_Chris::
# 25 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_CHRIS_ROUTE2, Chris_Intro, Chris_Outro
# 26 "data/maps/Route2/scripts.pory"
	msgbox PostBattle_Chris, MSGBOX_AUTOCLOSE
# 27 "data/maps/Route2/scripts.pory"
	waitmessage
	end


Route2_EventScript_Nate::
# 46 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_NATE_ROUTE2, Nate_Intro, Nate_Outro
# 47 "data/maps/Route2/scripts.pory"
	msgbox PostBattle_Nate, MSGBOX_AUTOCLOSE
# 48 "data/maps/Route2/scripts.pory"
	waitmessage
	end


Route2_EventScript_Ned::
# 66 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_NED_ROUTE2, Ned_Intro, Ned_Outro
# 67 "data/maps/Route2/scripts.pory"
	msgbox PostBattle_Ned, MSGBOX_AUTOCLOSE
# 68 "data/maps/Route2/scripts.pory"
	waitmessage
	end


Route2_EventScript_NPC1::
# 88 "data/maps/Route2/scripts.pory"
	lock
# 89 "data/maps/Route2/scripts.pory"
	faceplayer
# 90 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_NPC1_Text_0
# 94 "data/maps/Route2/scripts.pory"
	release
	return


Route2_EventScript_NPC2::
# 98 "data/maps/Route2/scripts.pory"
	lock
# 99 "data/maps/Route2/scripts.pory"
	faceplayer
# 100 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_NPC2_Text_0
# 105 "data/maps/Route2/scripts.pory"
	release
	return


Route2_EventScript_NPC3::
# 109 "data/maps/Route2/scripts.pory"
	lock
# 110 "data/maps/Route2/scripts.pory"
	faceplayer
# 111 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_NPC3_Text_0
# 115 "data/maps/Route2/scripts.pory"
	release
	return


Route2_EventScript_TrainerTip1::
# 119 "data/maps/Route2/scripts.pory"
	lock
# 120 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_TrainerTip1_Text_0
# 124 "data/maps/Route2/scripts.pory"
	release
	return


Route2_EventScript_TrainerTip2::
# 128 "data/maps/Route2/scripts.pory"
	lock
# 129 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_TrainerTip2_Text_0
# 133 "data/maps/Route2/scripts.pory"
	release
	return


Route2_EventScript_Sign::
# 137 "data/maps/Route2/scripts.pory"
	lock
# 138 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_Sign_Text_0
# 139 "data/maps/Route2/scripts.pory"
	release
	return


Route2_ItemScript_Antidote::
# 143 "data/maps/Route2/scripts.pory"
	finditem ITEM_ANTIDOTE, 1
# 144 "data/maps/Route2/scripts.pory"
	setflag FLAG_ITEM_ROUTE_2_ANTIDOTE
	return


Route2_EventScript_NPC1_Text_0:
# 90 "data/maps/Route2/scripts.pory"
	.string "Someone once told me that Pokémon can\n"
	.string "live in trees.\p"
	.string "I've been shaking this tree for hours,\n"
	.string "but I haven't seen a single one!$"

Route2_EventScript_NPC2_Text_0:
# 100 "data/maps/Route2/scripts.pory"
	.string "There's a vast desert at the other end\n"
	.string "of this river.\p"
	.string "Unfortunately for me, I can't swim,\n"
	.string "so I have no way of being able to\l"
	.string "explore it.$"

Route2_EventScript_NPC3_Text_0:
# 111 "data/maps/Route2/scripts.pory"
	.string "Marigold Forest is filled with all sorts\n"
	.string "of Bug-type Pokémon.\p"
	.string "I try not to stay in there for too long,\n"
	.string "being around them creeps me out!$"

Route2_EventScript_TrainerTip1_Text_0:
# 120 "data/maps/Route2/scripts.pory"
	.string "Ledges can act as shortcuts.\p"
	.string "Think before you hop over them\n"
	.string "though, as you won't be able to climb\l"
	.string "back up!$"

Route2_EventScript_TrainerTip2_Text_0:
# 129 "data/maps/Route2/scripts.pory"
	.string "Certain moves Pokémon know can inflict\n"
	.string "harmful status conditions.\p"
	.string "Be sure to stay stocked up on items\n"
	.string "that can heal those conditions!$"

Route2_EventScript_Sign_Text_0:
# 138 "data/maps/Route2/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Route 2.$"

Lisa_Intro::
# 10 "data/maps/Route2/scripts.pory"
	.string "Hey, you look like a strong trainer!\n"
	.string "Do you want to battle?$"

Lisa_Outro::
# 15 "data/maps/Route2/scripts.pory"
	.string "Oh...rude.$"

PostBattle_Lisa::
# 19 "data/maps/Route2/scripts.pory"
	.string "Most of the trainers who come through\n"
	.string "here aren't nearly as strong as you.$"

Chris_Intro::
# 31 "data/maps/Route2/scripts.pory"
	.string "I'm looking for Bug-type Pokémon!\n"
	.string "Have you seen any around here?$"

Chris_Outro::
# 36 "data/maps/Route2/scripts.pory"
	.string "Hey! What gives?$"

PostBattle_Chris::
# 40 "data/maps/Route2/scripts.pory"
	.string "If you find any more Bug-types,\n"
	.string "let me know.$"

Nate_Intro::
# 52 "data/maps/Route2/scripts.pory"
	.string "I've been itching to battle someone\n"
	.string "all day!$"

Nate_Outro::
# 57 "data/maps/Route2/scripts.pory"
	.string "Wow, that was great!$"

PostBattle_Nate::
# 61 "data/maps/Route2/scripts.pory"
	.string "I hope we can battle again sometime!$"

Ned_Intro::
# 72 "data/maps/Route2/scripts.pory"
	.string "I just caught a new Pokémon in\n"
	.string "Marigold Forest.\p"
	.string "Want to see it?$"

Ned_Outro::
# 78 "data/maps/Route2/scripts.pory"
	.string "What!? It didn't do any damage!$"

PostBattle_Ned::
# 82 "data/maps/Route2/scripts.pory"
	.string "I'm gonna go back in to look for\n"
	.string "some stronger Pokémon!$"
