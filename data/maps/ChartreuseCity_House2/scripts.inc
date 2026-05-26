ChartreuseCity_House2_MapScripts::
	.byte 0


ChartreuseCity_House2_NPCScript::
# 4 "data/maps/ChartreuseCity_House2/scripts.pory"
	lock
# 5 "data/maps/ChartreuseCity_House2/scripts.pory"
	faceplayer
# 6 "data/maps/ChartreuseCity_House2/scripts.pory"
	msgbox ChartreuseCity_House2_NPCScript_Text_0
# 8 "data/maps/ChartreuseCity_House2/scripts.pory"
	release
	return


ChartreuseCity_House2_Azurill::
# 12 "data/maps/ChartreuseCity_House2/scripts.pory"
	lock
# 13 "data/maps/ChartreuseCity_House2/scripts.pory"
	faceplayer
# 14 "data/maps/ChartreuseCity_House2/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 15 "data/maps/ChartreuseCity_House2/scripts.pory"
	msgbox ChartreuseCity_House2_Azurill_Text_0
# 16 "data/maps/ChartreuseCity_House2/scripts.pory"
	waitmoncry
# 17 "data/maps/ChartreuseCity_House2/scripts.pory"
	release
	return


ChartreuseCity_House2_NPCScript_Text_0:
# 6 "data/maps/ChartreuseCity_House2/scripts.pory"
	.string "I love my sweet little Azurill!\n"
	.string "Isn't she so cute?$"

ChartreuseCity_House2_Azurill_Text_0:
# 15 "data/maps/ChartreuseCity_House2/scripts.pory"
	.string "Azu..rill!$"
