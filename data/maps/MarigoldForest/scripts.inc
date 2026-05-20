MarigoldForest_MapScripts::
	.byte 0


MarigoldForest_TrainerScript_Ted::
# 4 "data/maps/MarigoldForest/scripts.pory"
	trainerbattle_single TRAINER_TED_MARIGOLDFOREST, Ted_Intro, Ted_Outro
# 5 "data/maps/MarigoldForest/scripts.pory"
	msgbox PostBattle_Ted, MSGBOX_AUTOCLOSE
# 6 "data/maps/MarigoldForest/scripts.pory"
	waitmessage
	end


MarigoldForest_TrainerScript_Gene::
# 26 "data/maps/MarigoldForest/scripts.pory"
	trainerbattle_single TRAINER_GENE_MARIGOLDFOREST, Gene_Intro, Gene_Outro
# 27 "data/maps/MarigoldForest/scripts.pory"
	msgbox PostBattle_Gene, MSGBOX_AUTOCLOSE
# 28 "data/maps/MarigoldForest/scripts.pory"
	waitmessage
	end


MarigoldForest_TrainerScript_Gary::
# 48 "data/maps/MarigoldForest/scripts.pory"
	trainerbattle_single TRAINER_GARY_MARIGOLDFOREST, Gary_Intro, Gary_Outro
# 49 "data/maps/MarigoldForest/scripts.pory"
	msgbox PostBattle_Gary, MSGBOX_AUTOCLOSE
# 50 "data/maps/MarigoldForest/scripts.pory"
	waitmessage
	end


MarigoldForest_TrainerScript_Zeke::
# 69 "data/maps/MarigoldForest/scripts.pory"
	trainerbattle_single TRAINER_ZEKE_MARIGOLDFOREST, Zeke_Intro, Zeke_Outro
# 70 "data/maps/MarigoldForest/scripts.pory"
	msgbox PostBattle_Zeke, MSGBOX_AUTOCLOSE
# 71 "data/maps/MarigoldForest/scripts.pory"
	waitmessage
	end


MarigoldForest_TrainerScript_Brian::
# 90 "data/maps/MarigoldForest/scripts.pory"
	trainerbattle_single TRAINER_BRIAN_MARIGOLDFOREST, Brian_Intro, Brian_Outro
# 91 "data/maps/MarigoldForest/scripts.pory"
	msgbox PostBattle_Brian, MSGBOX_AUTOCLOSE
# 92 "data/maps/MarigoldForest/scripts.pory"
	waitmessage
	end


MarigoldForest_TrainerScript_Tina::
# 112 "data/maps/MarigoldForest/scripts.pory"
	trainerbattle_single TRAINER_TINA_MARIGOLDFOREST, Tina_Intro, Tina_Outro
# 113 "data/maps/MarigoldForest/scripts.pory"
	msgbox PostBattle_Tina, MSGBOX_AUTOCLOSE
# 114 "data/maps/MarigoldForest/scripts.pory"
	waitmessage
	end


MarigoldForest_TrainerScript_Dennis::
# 134 "data/maps/MarigoldForest/scripts.pory"
	trainerbattle_single TRAINER_DENNIS_MARIGOLDFOREST, Dennis_Intro, Dennis_Outro
# 135 "data/maps/MarigoldForest/scripts.pory"
	msgbox PostBattle_Dennis, MSGBOX_AUTOCLOSE
# 136 "data/maps/MarigoldForest/scripts.pory"
	waitmessage
	end


MarigoldForest_TrainerScript_Will::
# 154 "data/maps/MarigoldForest/scripts.pory"
	trainerbattle_single TRAINER_WILL_MARIGOLDFOREST, Will_Intro, Will_Outro
# 155 "data/maps/MarigoldForest/scripts.pory"
	msgbox PostBattle_Will, MSGBOX_AUTOCLOSE
# 156 "data/maps/MarigoldForest/scripts.pory"
	waitmessage
	end


MarigoldForest_NPCScript_SuicuneLore::
# 176 "data/maps/MarigoldForest/scripts.pory"
	lock
# 177 "data/maps/MarigoldForest/scripts.pory"
	faceplayer
# 178 "data/maps/MarigoldForest/scripts.pory"
	msgbox MarigoldForest_NPCScript_SuicuneLore_Text_0
# 184 "data/maps/MarigoldForest/scripts.pory"
	release
	return


MarigoldForest_NPCScript_Headbutt::
# 188 "data/maps/MarigoldForest/scripts.pory"
	lock
# 189 "data/maps/MarigoldForest/scripts.pory"
	faceplayer
# 190 "data/maps/MarigoldForest/scripts.pory"
	msgbox MarigoldForest_NPCScript_Headbutt_Text_0
# 192 "data/maps/MarigoldForest/scripts.pory"
	release
	return


MarigoldForest_SignScript_Location::
# 196 "data/maps/MarigoldForest/scripts.pory"
	lock
# 197 "data/maps/MarigoldForest/scripts.pory"
	msgbox MarigoldForest_SignScript_Location_Text_0
# 198 "data/maps/MarigoldForest/scripts.pory"
	release
	return


MarigoldForest_SignScript_TrainerTips::
# 202 "data/maps/MarigoldForest/scripts.pory"
	lock
# 203 "data/maps/MarigoldForest/scripts.pory"
	msgbox MarigoldForest_SignScript_TrainerTips_Text_0
# 206 "data/maps/MarigoldForest/scripts.pory"
	release
	return


MarigoldForest_ItemScript_Potion::
# 210 "data/maps/MarigoldForest/scripts.pory"
	finditem ITEM_POTION, 1
# 211 "data/maps/MarigoldForest/scripts.pory"
	setflag FLAG_ITEM_MARIGOLD_FOREST_POTION
	return


MarigoldForest_ItemScript_Antidote::
# 215 "data/maps/MarigoldForest/scripts.pory"
	finditem ITEM_ANTIDOTE, 3
# 216 "data/maps/MarigoldForest/scripts.pory"
	setflag FLAG_ITEM_MARIGOLD_FOREST_ANTIDOTE
	return


MarigoldForest_ItemScript_GreatBall::
# 220 "data/maps/MarigoldForest/scripts.pory"
	finditem ITEM_GREAT_BALL, 1
# 221 "data/maps/MarigoldForest/scripts.pory"
	setflag FLAG_ITEM_MARIGOLD_FOREST_GREAT_BALL
	return


MarigoldForest_NPCScript_SuicuneLore_Text_0:
# 178 "data/maps/MarigoldForest/scripts.pory"
	.string "My mother once told me a story about a\n"
	.string "Legendary Pokémon that lives in this\l"
	.string "forest.\p"
	.string "She said that it hides in the trees,\n"
	.string "and only shows itself to trainers who\l"
	.string "are pure of heart.$"

MarigoldForest_NPCScript_Headbutt_Text_0:
# 190 "data/maps/MarigoldForest/scripts.pory"
	.string "Did you know that certain Pokémon can\n"
	.string "only be found living in trees?$"

MarigoldForest_SignScript_Location_Text_0:
# 197 "data/maps/MarigoldForest/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Marigold Forest.$"

MarigoldForest_SignScript_TrainerTips_Text_0:
# 203 "data/maps/MarigoldForest/scripts.pory"
	.string "If you ever want to avoid wild\n"
	.string "Pokémon encounters, use a Repel!\p"
	.string "You can buy them at any Poké Mart.$"

Ted_Intro::
# 10 "data/maps/MarigoldForest/scripts.pory"
	.string "Bug Pokémon aren't very strong,\n"
	.string "but I want to catch them all!$"

Ted_Outro::
# 15 "data/maps/MarigoldForest/scripts.pory"
	.string "See? Not very strong.$"

PostBattle_Ted::
# 19 "data/maps/MarigoldForest/scripts.pory"
	.string "Bug Pokémon are so cool!\p"
	.string "I know other people think they're icky,\n"
	.string "but I just love them!$"

Gene_Intro::
# 32 "data/maps/MarigoldForest/scripts.pory"
	.string "This place is great! It's filled to the\n"
	.string "brim with bugs to feed my birds with.$"

Gene_Outro::
# 37 "data/maps/MarigoldForest/scripts.pory"
	.string "How am I going to fly home..?$"

PostBattle_Gene::
# 41 "data/maps/MarigoldForest/scripts.pory"
	.string "I come here to train my bird Pokémon.\n"
	.string "Their attacks are all super effective\l"
	.string "against the Bug-types.$"

Gary_Intro::
# 54 "data/maps/MarigoldForest/scripts.pory"
	.string "I can't find my way out of here!\n"
	.string "Which way do I go?$"

Gary_Outro::
# 59 "data/maps/MarigoldForest/scripts.pory"
	.string "No!$"

PostBattle_Gary::
# 63 "data/maps/MarigoldForest/scripts.pory"
	.string "If I keep looking, I'm sure I'll find\n"
	.string "my way out eventually.$"

Zeke_Intro::
# 75 "data/maps/MarigoldForest/scripts.pory"
	.string "Those ledges are fun to jump off of,\n"
	.string "huh?$"

Zeke_Outro::
# 80 "data/maps/MarigoldForest/scripts.pory"
	.string "That wasn't fun...$"

PostBattle_Zeke::
# 84 "data/maps/MarigoldForest/scripts.pory"
	.string "Do you know how to get out of here?\n"
	.string "I keep going in circles.$"

Brian_Intro::
# 96 "data/maps/MarigoldForest/scripts.pory"
	.string "I like training Bug Pokémon because\n"
	.string "they evolve really quickly.$"

Brian_Outro::
# 101 "data/maps/MarigoldForest/scripts.pory"
	.string "Wait, what did I do wrong?$"

PostBattle_Brian::
# 105 "data/maps/MarigoldForest/scripts.pory"
	.string "I guess just because a Pokémon is\n"
	.string "evolved, it doesn't necessarily mean\l"
	.string "that they're strong.$"

Tina_Intro::
# 118 "data/maps/MarigoldForest/scripts.pory"
	.string "Look at this really cute Pokémon I just\n"
	.string "found here!$"

Tina_Outro::
# 123 "data/maps/MarigoldForest/scripts.pory"
	.string "Ahh! My cute Pokémon!$"

PostBattle_Tina::
# 127 "data/maps/MarigoldForest/scripts.pory"
	.string "My new Pokémon doesn't seem to want to\n"
	.string "stay in its ball...\p"
	.string "Is that normal?$"

Dennis_Intro::
# 140 "data/maps/MarigoldForest/scripts.pory"
	.string "I'm going to poison your Pokémon!$"

Dennis_Outro::
# 144 "data/maps/MarigoldForest/scripts.pory"
	.string "What?$"

PostBattle_Dennis::
# 148 "data/maps/MarigoldForest/scripts.pory"
	.string "I guess poison isn't enough to win\n"
	.string "battles with on its own.$"

Will_Intro::
# 160 "data/maps/MarigoldForest/scripts.pory"
	.string "I have some very strong Bug Pokémon!\n"
	.string "Let me show you!$"

Will_Outro::
# 165 "data/maps/MarigoldForest/scripts.pory"
	.string "Wow, your Pokémon are stronger.$"

PostBattle_Will::
# 169 "data/maps/MarigoldForest/scripts.pory"
	.string "I've been raising Bug Pokémon for a long\n"
	.string "time, but I guess I still have a lot to\l"
	.string "learn.$"
