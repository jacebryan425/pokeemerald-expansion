ChartreuseCity_Mart_MapScripts::
	.byte 0


ChartreuseCity_Mart_Employee::
# 4 "data/maps/ChartreuseCity_Mart/scripts.pory"
	lock
# 5 "data/maps/ChartreuseCity_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/ChartreuseCity_Mart/scripts.pory"
	message ChartreuseCity_Mart_Employee_Text_0
# 7 "data/maps/ChartreuseCity_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/ChartreuseCity_Mart/scripts.pory"
	pokemart 0
# 9 "data/maps/ChartreuseCity_Mart/scripts.pory"
	msgbox ChartreuseCity_Mart_Employee_Text_1
# 10 "data/maps/ChartreuseCity_Mart/scripts.pory"
	release
	return


ChartreuseCity_Mart_NPCScript::
# 14 "data/maps/ChartreuseCity_Mart/scripts.pory"
	lock
# 15 "data/maps/ChartreuseCity_Mart/scripts.pory"
	faceplayer
# 16 "data/maps/ChartreuseCity_Mart/scripts.pory"
	msgbox ChartreuseCity_Mart_NPCScript_Text_0
# 20 "data/maps/ChartreuseCity_Mart/scripts.pory"
	release
	return


ChartreuseCity_Mart_Employee_Text_0:
# 6 "data/maps/ChartreuseCity_Mart/scripts.pory"
	.string "How may I help you?$"

ChartreuseCity_Mart_Employee_Text_1:
# 9 "data/maps/ChartreuseCity_Mart/scripts.pory"
	.string "Thank you, come again.$"

ChartreuseCity_Mart_NPCScript_Text_0:
# 16 "data/maps/ChartreuseCity_Mart/scripts.pory"
	.string "Why is everything sold here only\n"
	.string "meant for Pokémon?\p"
	.string "Where am I supposed to find human\n"
	.string "food?$"
