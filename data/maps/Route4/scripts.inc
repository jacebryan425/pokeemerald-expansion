Route4_MapScripts::
	.byte 0


Route4_TrainerScript_Jenny::
# 4 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_JENNY_ROUTE4, Jenny_Intro, Jenny_Outro
# 5 "data/maps/Route4/scripts.pory"
	msgbox PostBattle_Jenny, MSGBOX_AUTOCLOSE
# 6 "data/maps/Route4/scripts.pory"
	waitmessage
	end


Route4_TrainerScript_Lance::
# 25 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_LANCE_ROUTE4, Lance_Intro, Lance_Outro
# 26 "data/maps/Route4/scripts.pory"
	msgbox PostBattle_Lance, MSGBOX_AUTOCLOSE
# 27 "data/maps/Route4/scripts.pory"
	waitmessage
	end


Route4_TrainerScript_Isabelle::
# 46 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE_ROUTE4, Isabelle_Intro, Isabelle_Outro
# 47 "data/maps/Route4/scripts.pory"
	msgbox PostBattle_Isabelle, MSGBOX_AUTOCLOSE
# 48 "data/maps/Route4/scripts.pory"
	waitmessage
	end


Route4_TrainerScript_John::
# 66 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_JOHN_ROUTE4, John_Intro, John_Outro
# 67 "data/maps/Route4/scripts.pory"
	msgbox PostBattle_John, MSGBOX_AUTOCLOSE
# 68 "data/maps/Route4/scripts.pory"
	waitmessage
	end


Route4_TrainerScript_Davie::
# 87 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_DAVIE_ROUTE4, Davie_Intro, Davie_Outro
# 88 "data/maps/Route4/scripts.pory"
	msgbox PostBattle_Davie, MSGBOX_AUTOCLOSE
# 89 "data/maps/Route4/scripts.pory"
	waitmessage
	end


Route4_TrainerScript_Ben::
# 108 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_BEN_ROUTE4, Ben_Intro, Ben_Outro
# 109 "data/maps/Route4/scripts.pory"
	msgbox PostBattle_Ben, MSGBOX_AUTOCLOSE
# 110 "data/maps/Route4/scripts.pory"
	waitmessage
	end


Route4_NPCScript_1::
# 129 "data/maps/Route4/scripts.pory"
	lock
# 130 "data/maps/Route4/scripts.pory"
	faceplayer
# 131 "data/maps/Route4/scripts.pory"
	msgbox Route4_NPCScript_1_Text_0
# 137 "data/maps/Route4/scripts.pory"
	release
	return


Route4_NPCScript_2::
# 141 "data/maps/Route4/scripts.pory"
	lock
# 142 "data/maps/Route4/scripts.pory"
	faceplayer
# 143 "data/maps/Route4/scripts.pory"
	msgbox Route4_NPCScript_2_Text_0
# 146 "data/maps/Route4/scripts.pory"
	release
	return


Route4_SignScript_Location::
# 150 "data/maps/Route4/scripts.pory"
	lock
# 151 "data/maps/Route4/scripts.pory"
	msgbox Route4_SignScript_Location_Text_0
# 152 "data/maps/Route4/scripts.pory"
	release
	return


Route4_SignScript_TrainerTips1::
# 156 "data/maps/Route4/scripts.pory"
	lock
# 157 "data/maps/Route4/scripts.pory"
	msgbox Route4_SignScript_TrainerTips1_Text_0
# 160 "data/maps/Route4/scripts.pory"
	release
	return


Route4_SignScript_TrainerTips2::
# 164 "data/maps/Route4/scripts.pory"
	lock
# 165 "data/maps/Route4/scripts.pory"
	msgbox Route4_SignScript_TrainerTips2_Text_0
# 169 "data/maps/Route4/scripts.pory"
	release
	return


Route4_ItemScript_Awakening::
# 173 "data/maps/Route4/scripts.pory"
	finditem ITEM_AWAKENING, 1
# 174 "data/maps/Route4/scripts.pory"
	setflag FLAG_ITEM_ROUTE_4_AWAKENING
	return


Route4_ItemScript_Revive::
# 178 "data/maps/Route4/scripts.pory"
	finditem ITEM_REVIVE, 1
# 179 "data/maps/Route4/scripts.pory"
	setflag FLAG_ITEM_ROUTE_4_REVIVE
	return


Route4_ItemScript_Nugget::
# 183 "data/maps/Route4/scripts.pory"
	finditem ITEM_NUGGET, 1
# 184 "data/maps/Route4/scripts.pory"
	setflag FLAG_ITEM_ROUTE_4_NUGGET
	return


Route4_NPCScript_1_Text_0:
# 131 "data/maps/Route4/scripts.pory"
	.string "Two people just came up to me and\n"
	.string "started preaching about Arceus.\p"
	.string "Isn't that the Pokémon that created\n"
	.string "the universe?\p"
	.string "I always thought of it as just a myth,\n"
	.string "but maybe it's real after all.$"

Route4_NPCScript_2_Text_0:
# 143 "data/maps/Route4/scripts.pory"
	.string "So...close...to Chartreuse.\n"
	.string "I'm...so...exhausted...\p"
	.string "Need...to rest...$"

Route4_SignScript_Location_Text_0:
# 151 "data/maps/Route4/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Route 4.$"

Route4_SignScript_TrainerTips1_Text_0:
# 157 "data/maps/Route4/scripts.pory"
	.string "You can sort your items by pressing\n"
	.string "the START button in your bag.\p"
	.string "It's best to stay organized!$"

Route4_SignScript_TrainerTips2_Text_0:
# 165 "data/maps/Route4/scripts.pory"
	.string "You can view your Pokémon's EVs and IVs\n"
	.string "from the summary screen.\p"
	.string "This is a great way to see how strong\n"
	.string "each of your Pokémon are!$"

Jenny_Intro::
# 10 "data/maps/Route4/scripts.pory"
	.string "Finally, a trainer!\n"
	.string "Let's battle!$"

Jenny_Outro::
# 15 "data/maps/Route4/scripts.pory"
	.string "Why would I lose..?$"

PostBattle_Jenny::
# 19 "data/maps/Route4/scripts.pory"
	.string "I'm almost out of Potions,\n"
	.string "but you took all of my money!$"

Lance_Intro::
# 31 "data/maps/Route4/scripts.pory"
	.string "What a great day for a battle,\n"
	.string "don't you think?$"

Lance_Outro::
# 36 "data/maps/Route4/scripts.pory"
	.string "Guess it wasn't my day to win.$"

PostBattle_Lance::
# 40 "data/maps/Route4/scripts.pory"
	.string "This is my favorite weather to\n"
	.string "hike in. It's so nice out!$"

Isabelle_Intro::
# 52 "data/maps/Route4/scripts.pory"
	.string "Stop right there!\n"
	.string "I want to show you my Pokémon.$"

Isabelle_Outro::
# 57 "data/maps/Route4/scripts.pory"
	.string "Yet another defeat.$"

PostBattle_Isabelle::
# 61 "data/maps/Route4/scripts.pory"
	.string "You have some pretty neat Pokémon!$"

John_Intro::
# 72 "data/maps/Route4/scripts.pory"
	.string "No Pokémon are biting today...\n"
	.string "Maybe I don't have the right bait.$"

John_Outro::
# 77 "data/maps/Route4/scripts.pory"
	.string "Dumb fish.$"

PostBattle_John::
# 81 "data/maps/Route4/scripts.pory"
	.string "Magikarp are useless, why can't I catch\n"
	.string "something cool like a Goldeen?$"

Davie_Intro::
# 93 "data/maps/Route4/scripts.pory"
	.string "Hey, watch it!\n"
	.string "You're scaring away all of the Pokémon!$"

Davie_Outro::
# 98 "data/maps/Route4/scripts.pory"
	.string "At least I can get back to fishing now.$"

PostBattle_Davie::
# 102 "data/maps/Route4/scripts.pory"
	.string "Fishing is so peaceful.\n"
	.string "I could do it all day.$"

Ben_Intro::
# 114 "data/maps/Route4/scripts.pory"
	.string "I don't know if I can beat you,\n"
	.string "but I sure as heck am going to try!$"

Ben_Outro::
# 119 "data/maps/Route4/scripts.pory"
	.string "Aw, rats.$"

PostBattle_Ben::
# 123 "data/maps/Route4/scripts.pory"
	.string "I've been training here for hours,\n"
	.string "why do I keep losing?!$"
