ChartreuseCity_House1_MapScripts::
	.byte 0


ChartreuseCity_House1_NPCScript_OldMan::
# 4 "data/maps/ChartreuseCity_House1/scripts.pory"
	lock
# 5 "data/maps/ChartreuseCity_House1/scripts.pory"
	faceplayer
# 6 "data/maps/ChartreuseCity_House1/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_CUT, ChartreuseCity_House1_NPCScript_OldMan_2
# 10 "data/maps/ChartreuseCity_House1/scripts.pory"
	goto_if_set FLAG_OBTAINED_VINE_BADGE, ChartreuseCity_House1_NPCScript_OldMan_3
# 24 "data/maps/ChartreuseCity_House1/scripts.pory"
	msgbox ChartreuseCity_House1_NPCScript_OldMan_Text_3
ChartreuseCity_House1_NPCScript_OldMan_1:
# 37 "data/maps/ChartreuseCity_House1/scripts.pory"
	release
	return

ChartreuseCity_House1_NPCScript_OldMan_2:
# 7 "data/maps/ChartreuseCity_House1/scripts.pory"
	msgbox ChartreuseCity_House1_NPCScript_OldMan_Text_0
	goto ChartreuseCity_House1_NPCScript_OldMan_1

ChartreuseCity_House1_NPCScript_OldMan_3:
# 11 "data/maps/ChartreuseCity_House1/scripts.pory"
	msgbox ChartreuseCity_House1_NPCScript_OldMan_Text_1
# 15 "data/maps/ChartreuseCity_House1/scripts.pory"
	giveitem ITEM_HM01
# 16 "data/maps/ChartreuseCity_House1/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 17 "data/maps/ChartreuseCity_House1/scripts.pory"
	msgbox ChartreuseCity_House1_NPCScript_OldMan_Text_2
	goto ChartreuseCity_House1_NPCScript_OldMan_1


ChartreuseCity_House1_NPCScript_OldMan_Text_0:
# 7 "data/maps/ChartreuseCity_House1/scripts.pory"
	.string "I haven't had any trouble from Team\n"
	.string "Alpha in a while.\p"
	.string "Thank you again for your help!$"

ChartreuseCity_House1_NPCScript_OldMan_Text_1:
# 11 "data/maps/ChartreuseCity_House1/scripts.pory"
	.string "Ah, yes! That's the badge from the\n"
	.string "Chartreuse City Gym!\p"
	.string "Congratulations, here's something I'm\n"
	.string "sure will help you on your journey.$"

ChartreuseCity_House1_NPCScript_OldMan_Text_2:
# 17 "data/maps/ChartreuseCity_House1/scripts.pory"
	.string "That there is the HM for Cut.\p"
	.string "If you teach it to one of your\n"
	.string "Pokémon, they'll be able to cut down\l"
	.string "those annoying little trees that keep\l"
	.string "getting in your way.\p"
	.string "Best of luck to you!$"

ChartreuseCity_House1_NPCScript_OldMan_Text_3:
# 24 "data/maps/ChartreuseCity_House1/scripts.pory"
	.string "I enjoy my peace and quiet just\n"
	.string "like anyone else.\p"
	.string "I appreciate you getting those pesky\n"
	.string "Team Alpha grunts to leave me alone.\p"
	.string "If I remember correctly, didn't your\n"
	.string "friend say you had a Gym leader to go\l"
	.string "battle?\p"
	.string "I wouldn't want to waste any more of\n"
	.string "your time.\p"
	.string "Come talk to me again once you've\n"
	.string "defeated him, and I'll have something\l"
	.string "special to give you.$"
