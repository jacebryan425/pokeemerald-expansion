Route5_MapScripts::
	.byte 0


Route5_NPCScript_BigManSnorlax::
# 4 "data/maps/Route5/scripts.pory"
	lock
# 5 "data/maps/Route5/scripts.pory"
	faceplayer
# 6 "data/maps/Route5/scripts.pory"
	msgbox Route5_NPCScript_BigManSnorlax_Text_0
# 16 "data/maps/Route5/scripts.pory"
	applymovement BMS, Route5_NPCScript_BigManSnorlax_Movement_0
# 17 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 18 "data/maps/Route5/scripts.pory"
	release
	return


# 16 "data/maps/Route5/scripts.pory"
Route5_NPCScript_BigManSnorlax_Movement_0:
# 16 "data/maps/Route5/scripts.pory"
	face_right
	step_end

Route5_NPCScript_BigManSnorlax_Text_0:
# 6 "data/maps/Route5/scripts.pory"
	.string "Oh, hi there!\p"
	.string "I'm the creator of this hack,\n"
	.string "Big Man Snorlax.\p"
	.string "Looks like you've made it to the end\n"
	.string "of the demo.\p"
	.string "Thank you so much for playing!\n"
	.string "It truly means the world.\p"
	.string "Now if you'll excuse me, I'm going to\n"
	.string "get back to carving out this route.\p"
	.string "See you soon!$"
