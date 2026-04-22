PeriwinkleTown_ProfessorAspensLab_MapScripts::
# 2 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PeriwinkleTown_ProfessorAspensLab_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PeriwinkleTown_ProfessorAspensLab_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	goto_if_set FLAG_HIDE_PROFESSOR_ASPEN, PeriwinkleTown_ProfessorAspensLab_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 7 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	setflag FLAG_HIDE_PROFESSOR_ASPEN_LAB
	return

PeriwinkleTown_ProfessorAspensLab_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	clearflag FLAG_HIDE_PROFESSOR_ASPEN_LAB
# 5 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	showobjectat 1, MAP_PERIWINKLE_TOWN_PROFESSOR_ASPENS_LAB
	return


PeriwinkleTown_ProfessorAspensLab_EventScript_Scientist::
# 13 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	lock
# 14 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	faceplayer
# 15 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	goto_if_set FLAG_HIDE_PROFESSOR_ASPEN, PeriwinkleTown_ProfessorAspensLab_EventScript_Scientist_2
# 21 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	msgbox PeriwinkleTown_ProfessorAspensLab_EventScript_Scientist_Text_1
PeriwinkleTown_ProfessorAspensLab_EventScript_Scientist_1:
# 26 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	release
	return

PeriwinkleTown_ProfessorAspensLab_EventScript_Scientist_2:
# 16 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	msgbox PeriwinkleTown_ProfessorAspensLab_EventScript_Scientist_Text_0
	goto PeriwinkleTown_ProfessorAspensLab_EventScript_Scientist_1


PeriwinkleTown_ProfessorAspensLab_EventScript_Scientist_Text_0:
# 16 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	.string "I've been working for Professor Aspen\n"
	.string "for a quite a while now.\p"
	.string "He's been a very good boss, and I\n"
	.string "get a pretty sweet benefits package.$"

PeriwinkleTown_ProfessorAspensLab_EventScript_Scientist_Text_1:
# 21 "data/maps/PeriwinkleTown_ProfessorAspensLab/scripts.pory"
	.string "Looking for Professor Aspen?\p"
	.string "He's not here.\p"
	.string "When he left, he told me he was\n"
	.string "going for a walk in Periwinkle Garden.$"
