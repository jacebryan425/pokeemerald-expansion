ChartreuseCity_Gym_MapScripts::
	.byte 0


ChartreuseCity_Gym_NPCScript::
# 4 "data/maps/ChartreuseCity_Gym/scripts.pory"
	lock
# 5 "data/maps/ChartreuseCity_Gym/scripts.pory"
	faceplayer
# 6 "data/maps/ChartreuseCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ChartreuseCity_Gym_NPCScript_2
# 10 "data/maps/ChartreuseCity_Gym/scripts.pory"
	msgbox ChartreuseCity_Gym_NPCScript_Text_1
ChartreuseCity_Gym_NPCScript_1:
# 16 "data/maps/ChartreuseCity_Gym/scripts.pory"
	release
	return

ChartreuseCity_Gym_NPCScript_2:
# 7 "data/maps/ChartreuseCity_Gym/scripts.pory"
	msgbox ChartreuseCity_Gym_NPCScript_Text_0
	goto ChartreuseCity_Gym_NPCScript_1


ChartreuseCity_Gym_TrainerScript_Bethany::
# 20 "data/maps/ChartreuseCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BETHANY_CC, Bethany_Intro, Bethany_Outro
# 21 "data/maps/ChartreuseCity_Gym/scripts.pory"
	msgbox PostBattle_Bethany, MSGBOX_AUTOCLOSE
# 22 "data/maps/ChartreuseCity_Gym/scripts.pory"
	waitmessage
	end


ChartreuseCity_Gym_TrainerScript_Trisha::
# 42 "data/maps/ChartreuseCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TRISHA_CC, Trisha_Intro, Trisha_Outro
# 43 "data/maps/ChartreuseCity_Gym/scripts.pory"
	msgbox PostBattle_Trisha, MSGBOX_AUTOCLOSE
# 44 "data/maps/ChartreuseCity_Gym/scripts.pory"
	waitmessage
	end


ChartreuseCity_Gym_TrainerScript_Anne::
# 63 "data/maps/ChartreuseCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ANNE_CC, Anne_Intro, Anne_Outro
# 64 "data/maps/ChartreuseCity_Gym/scripts.pory"
	msgbox PostBattle_Anne, MSGBOX_AUTOCLOSE
# 65 "data/maps/ChartreuseCity_Gym/scripts.pory"
	waitmessage
	end


ChartreuseCity_Gym_TrainerScript_Grace::
# 83 "data/maps/ChartreuseCity_Gym/scripts.pory"
	lock
# 84 "data/maps/ChartreuseCity_Gym/scripts.pory"
	faceplayer
# 85 "data/maps/ChartreuseCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ChartreuseCity_Gym_TrainerScript_Grace_2
# 88 "data/maps/ChartreuseCity_Gym/scripts.pory"
	msgbox ChartreuseCity_Gym_TrainerScript_Grace_Text_1
# 91 "data/maps/ChartreuseCity_Gym/scripts.pory"
	playse SE_PIN
# 92 "data/maps/ChartreuseCity_Gym/scripts.pory"
	applymovement GRACE, ChartreuseCity_Gym_TrainerScript_Grace_Movement_0
# 93 "data/maps/ChartreuseCity_Gym/scripts.pory"
	waitmovement 0
# 94 "data/maps/ChartreuseCity_Gym/scripts.pory"
	waitse
# 95 "data/maps/ChartreuseCity_Gym/scripts.pory"
	msgbox ChartreuseCity_Gym_TrainerScript_Grace_Text_2
# 104 "data/maps/ChartreuseCity_Gym/scripts.pory"
	waitmessage
# 105 "data/maps/ChartreuseCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_GRACE, Grace_Outro
# 106 "data/maps/ChartreuseCity_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ChartreuseCity_Gym_TrainerScript_Grace_5
ChartreuseCity_Gym_TrainerScript_Grace_1:
# 126 "data/maps/ChartreuseCity_Gym/scripts.pory"
	release
	return

ChartreuseCity_Gym_TrainerScript_Grace_2:
# 86 "data/maps/ChartreuseCity_Gym/scripts.pory"
	msgbox ChartreuseCity_Gym_TrainerScript_Grace_Text_0
	goto ChartreuseCity_Gym_TrainerScript_Grace_1

ChartreuseCity_Gym_TrainerScript_Grace_5:
# 107 "data/maps/ChartreuseCity_Gym/scripts.pory"
	msgbox ChartreuseCity_Gym_TrainerScript_Grace_Text_3
# 110 "data/maps/ChartreuseCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 111 "data/maps/ChartreuseCity_Gym/scripts.pory"
	msgbox ChartreuseCity_Gym_TrainerScript_Grace_Text_4
# 112 "data/maps/ChartreuseCity_Gym/scripts.pory"
	waitfanfare
# 113 "data/maps/ChartreuseCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 114 "data/maps/ChartreuseCity_Gym/scripts.pory"
	addvar VAR_CHARTREUSE_CITY_STATE, 1
# 115 "data/maps/ChartreuseCity_Gym/scripts.pory"
	msgbox ChartreuseCity_Gym_TrainerScript_Grace_Text_5
# 116 "data/maps/ChartreuseCity_Gym/scripts.pory"
	giveitem ITEM_TM09
# 117 "data/maps/ChartreuseCity_Gym/scripts.pory"
	msgbox ChartreuseCity_Gym_TrainerScript_Grace_Text_6
	goto ChartreuseCity_Gym_TrainerScript_Grace_1


# 92 "data/maps/ChartreuseCity_Gym/scripts.pory"
ChartreuseCity_Gym_TrainerScript_Grace_Movement_0:
# 92 "data/maps/ChartreuseCity_Gym/scripts.pory"
	emote_exclamation_mark
	step_end

ChartreuseCity_Gym_NPCScript_Text_0:
# 7 "data/maps/ChartreuseCity_Gym/scripts.pory"
	.string "Hey, that's the Vine Badge!\n"
	.string "Way to go!$"

ChartreuseCity_Gym_NPCScript_Text_1:
# 10 "data/maps/ChartreuseCity_Gym/scripts.pory"
	.string "Welcome to the Chartreuse City Gym.\n"
	.string "Our leader here is Grace.\p"
	.string "This Gym specializes in Grass-type\n"
	.string "Pokémon, so any Flying or Fire-type\l"
	.string "Pokémon should do the trick.$"

ChartreuseCity_Gym_TrainerScript_Grace_Text_0:
# 86 "data/maps/ChartreuseCity_Gym/scripts.pory"
	.string "Best of luck to you, {PLAYER}.$"

ChartreuseCity_Gym_TrainerScript_Grace_Text_1:
# 88 "data/maps/ChartreuseCity_Gym/scripts.pory"
	.string "Welcome to my Gym! I'm Grant.\n"
	.string "I specialize in Grass-type Poké-\p"
	.string "...Wait a second. Are those...$"

ChartreuseCity_Gym_TrainerScript_Grace_Text_2:
# 95 "data/maps/ChartreuseCity_Gym/scripts.pory"
	.string "They are! You have all eight badges\n"
	.string "from the Kanto region already?\p"
	.string "What's a trainer like you doing here?\p"
	.string "...Oh, you want to take on the Obsidian\n"
	.string "League? Very well then.\p"
	.string "As I was saying, I specialize in\n"
	.string "Grass-type Pokémon.\p"
	.string "My Pokémon will leave you all cut up!\n"
	.string "Get ready!$"

ChartreuseCity_Gym_TrainerScript_Grace_Text_3:
# 107 "data/maps/ChartreuseCity_Gym/scripts.pory"
	.string "I would have expected no less from\n"
	.string "a trainer such as yourself.\p"
	.string "Very well, here is the Vine Badge.$"

ChartreuseCity_Gym_TrainerScript_Grace_Text_4:
# 111 "data/maps/ChartreuseCity_Gym/scripts.pory"
	.string "{PLAYER} obtained the Vine Badge!$"

ChartreuseCity_Gym_TrainerScript_Grace_Text_5:
# 115 "data/maps/ChartreuseCity_Gym/scripts.pory"
	.string "I would also like to give you this.$"

ChartreuseCity_Gym_TrainerScript_Grace_Text_6:
# 117 "data/maps/ChartreuseCity_Gym/scripts.pory"
	.string "That's the TM for Bullet Seed, one\n"
	.string "of my favorite moves.\p"
	.string "Teach it to a Grass-type Pokémon.\p"
	.string "In Kanto, TMs break after one use,\n"
	.string "but here in Admiro, you can use TMs as\l"
	.string "many times as you'd like. Neat, huh?\p"
	.string "Best of luck to you, {PLAYER}.$"

Bethany_Intro::
# 26 "data/maps/ChartreuseCity_Gym/scripts.pory"
	.string "If you want to face Grace, you'll\n"
	.string "have to get through me first!$"

Bethany_Outro::
# 31 "data/maps/ChartreuseCity_Gym/scripts.pory"
	.string "Your Pokémon are strong!$"

PostBattle_Bethany::
# 35 "data/maps/ChartreuseCity_Gym/scripts.pory"
	.string "Best of luck to you.\n"
	.string "There's still two other trainers left\l"
	.string "to fight before Grace.$"

Trisha_Intro::
# 48 "data/maps/ChartreuseCity_Gym/scripts.pory"
	.string "Grass-type Pokémon are the best!$"

Trisha_Outro::
# 52 "data/maps/ChartreuseCity_Gym/scripts.pory"
	.string "Oh...okay.$"

PostBattle_Trisha::
# 56 "data/maps/ChartreuseCity_Gym/scripts.pory"
	.string "I love being in nature.\n"
	.string "It's only natural that I would choose\l"
	.string "to be a Grass-type trainer!$"

Anne_Intro::
# 69 "data/maps/ChartreuseCity_Gym/scripts.pory"
	.string "It's time to whip you into shape!$"

Anne_Outro::
# 73 "data/maps/ChartreuseCity_Gym/scripts.pory"
	.string "But...$"

PostBattle_Anne::
# 77 "data/maps/ChartreuseCity_Gym/scripts.pory"
	.string "Grace is right up ahead.\n"
	.string "You've got this!$"

Grace_Outro::
# 129 "data/maps/ChartreuseCity_Gym/scripts.pory"
	.string "I knew I didn't stand a chance.$"
