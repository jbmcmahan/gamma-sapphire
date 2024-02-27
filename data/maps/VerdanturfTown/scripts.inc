# 1 "data/maps/VerdanturfTown/scripts.pory"

# 2 "data/maps/VerdanturfTown/scripts.pory"
.set LOCALID_TWIN, 2
# 3 "data/maps/VerdanturfTown/scripts.pory"

# 4 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_MapScripts::
# 5 "data/maps/VerdanturfTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
# 6 "data/maps/VerdanturfTown/scripts.pory"
	.byte 0
# 7 "data/maps/VerdanturfTown/scripts.pory"

# 8 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_OnTransition:
# 9 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_VISITED_VERDANTURF_TOWN
# 10 "data/maps/VerdanturfTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 11 "data/maps/VerdanturfTown/scripts.pory"
	end
# 12 "data/maps/VerdanturfTown/scripts.pory"

# 13 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Twin::
# 14 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 15 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 16 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_TwinTunnelOpen
# 17 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManTryingToDigTunnel, MSGBOX_DEFAULT
# 18 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 19 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 20 "data/maps/VerdanturfTown/scripts.pory"
	release
# 21 "data/maps/VerdanturfTown/scripts.pory"
	end
# 22 "data/maps/VerdanturfTown/scripts.pory"

# 23 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TwinTunnelOpen::
# 24 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManDugTunnelForLove, MSGBOX_DEFAULT
# 25 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 26 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 27 "data/maps/VerdanturfTown/scripts.pory"
	release
# 28 "data/maps/VerdanturfTown/scripts.pory"
	end
# 29 "data/maps/VerdanturfTown/scripts.pory"

# 30 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Man::
# 31 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_AirCleanHere, MSGBOX_NPC
# 32 "data/maps/VerdanturfTown/scripts.pory"
	end
# 33 "data/maps/VerdanturfTown/scripts.pory"

# 34 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Camper::
# 35 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_MakeBattleTentDebut, MSGBOX_NPC
# 36 "data/maps/VerdanturfTown/scripts.pory"
	end
# 37 "data/maps/VerdanturfTown/scripts.pory"

# 38 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Boy::
# 39 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 40 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 41 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_BoyTunnelOpen
# 42 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_GuyTryingToBustThroughCave, MSGBOX_DEFAULT
# 43 "data/maps/VerdanturfTown/scripts.pory"
	release
# 44 "data/maps/VerdanturfTown/scripts.pory"
	end
# 45 "data/maps/VerdanturfTown/scripts.pory"

# 46 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BoyTunnelOpen::
# 47 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_EasyToGetToRustboroNow, MSGBOX_DEFAULT
# 48 "data/maps/VerdanturfTown/scripts.pory"
	release
# 49 "data/maps/VerdanturfTown/scripts.pory"
	end
# 50 "data/maps/VerdanturfTown/scripts.pory"

# 51 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TownSign::
# 52 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_TownSign, MSGBOX_SIGN
# 53 "data/maps/VerdanturfTown/scripts.pory"
	end
# 54 "data/maps/VerdanturfTown/scripts.pory"

# 55 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_WandasHouseSign::
# 56 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_WandasHouse, MSGBOX_SIGN
# 57 "data/maps/VerdanturfTown/scripts.pory"
	end
# 58 "data/maps/VerdanturfTown/scripts.pory"

# 59 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BattleTentSign::
# 60 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_BattleTentSign, MSGBOX_SIGN
# 61 "data/maps/VerdanturfTown/scripts.pory"
	end
# 62 "data/maps/VerdanturfTown/scripts.pory"

# 63 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_RusturfTunnelSign::
# 64 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_RusturfTunnelSign, MSGBOX_SIGN
# 65 "data/maps/VerdanturfTown/scripts.pory"
	end
# 66 "data/maps/VerdanturfTown/scripts.pory"

# 67 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BirchsBag::
# 68 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 69 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 70 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 71 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 72 "data/maps/VerdanturfTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 73 "data/maps/VerdanturfTown/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 74 "data/maps/VerdanturfTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 75 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 76 "data/maps/VerdanturfTown/scripts.pory"
	special ChooseStarter
# 77 "data/maps/VerdanturfTown/scripts.pory"
	waitstate
# 78 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
# 79 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 80 "data/maps/VerdanturfTown/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 81 "data/maps/VerdanturfTown/scripts.pory"
	special HealPlayerParty
# 82 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 83 "data/maps/VerdanturfTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 84 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 85 "data/maps/VerdanturfTown/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 86 "data/maps/VerdanturfTown/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 87 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 88 "data/maps/VerdanturfTown/scripts.pory"
	special SetUnlockedPokedexFlags
# 89 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 90 "data/maps/VerdanturfTown/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 91 "data/maps/VerdanturfTown/scripts.pory"
	giveitem ITEM_MASTER_BALL, 90
# 92 "data/maps/VerdanturfTown/scripts.pory"
	giveitem ITEM_SUPER_CANDY
# 93 "data/maps/VerdanturfTown/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 99
# 94 "data/maps/VerdanturfTown/scripts.pory"
	special EnableNationalPokedex
# 95 "data/maps/VerdanturfTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 96 "data/maps/VerdanturfTown/scripts.pory"
	releaseall
# 97 "data/maps/VerdanturfTown/scripts.pory"
	end
# 98 "data/maps/VerdanturfTown/scripts.pory"

# 99 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_ManTryingToDigTunnel:
# 100 "data/maps/VerdanturfTown/scripts.pory"
	.string "My papa told me.\p"
# 101 "data/maps/VerdanturfTown/scripts.pory"
	.string "He says this tunnel is full of\n"
# 102 "data/maps/VerdanturfTown/scripts.pory"
	.string "timid POKéMON.\p"
# 103 "data/maps/VerdanturfTown/scripts.pory"
	.string "They get all scared of loud noise and\n"
# 104 "data/maps/VerdanturfTown/scripts.pory"
	.string "make a big uproar.\p"
# 105 "data/maps/VerdanturfTown/scripts.pory"
	.string "So they had to stop the big tunnel\n"
# 106 "data/maps/VerdanturfTown/scripts.pory"
	.string "project.\p"
# 107 "data/maps/VerdanturfTown/scripts.pory"
	.string "But there's one man. He's trying to dig\n"
# 108 "data/maps/VerdanturfTown/scripts.pory"
	.string "the tunnel by himself!$"
# 109 "data/maps/VerdanturfTown/scripts.pory"

# 110 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_ManDugTunnelForLove:
# 111 "data/maps/VerdanturfTown/scripts.pory"
	.string "There was a man who dug a tunnel for\n"
# 112 "data/maps/VerdanturfTown/scripts.pory"
	.string "a lady he loved.\p"
# 113 "data/maps/VerdanturfTown/scripts.pory"
	.string "I don't really get it, but hey!$"
# 114 "data/maps/VerdanturfTown/scripts.pory"

# 115 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_AirCleanHere:
# 116 "data/maps/VerdanturfTown/scripts.pory"
	.string "The way the winds blow, volcanic ash\n"
# 117 "data/maps/VerdanturfTown/scripts.pory"
	.string "is never blown in this direction.\p"
# 118 "data/maps/VerdanturfTown/scripts.pory"
	.string "The air is clean and delicious here.\n"
# 119 "data/maps/VerdanturfTown/scripts.pory"
	.string "Living here should do wonders for even\l"
# 120 "data/maps/VerdanturfTown/scripts.pory"
	.string "frail and sickly people.$"
# 121 "data/maps/VerdanturfTown/scripts.pory"

# 122 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_MakeBattleTentDebut:
# 123 "data/maps/VerdanturfTown/scripts.pory"
	.string "My POKéMON and I, we've been riding\n"
# 124 "data/maps/VerdanturfTown/scripts.pory"
	.string "a hot winning streak.\p"
# 125 "data/maps/VerdanturfTown/scripts.pory"
	.string "So I decided to make my BATTLE TENT\n"
# 126 "data/maps/VerdanturfTown/scripts.pory"
	.string "debut in this town.$"
# 127 "data/maps/VerdanturfTown/scripts.pory"

# 128 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_GuyTryingToBustThroughCave:
# 129 "data/maps/VerdanturfTown/scripts.pory"
	.string "Did you see the cave next to the\n"
# 130 "data/maps/VerdanturfTown/scripts.pory"
	.string "POKéMON MART?\p"
# 131 "data/maps/VerdanturfTown/scripts.pory"
	.string "There's a guy in there who's trying to\n"
# 132 "data/maps/VerdanturfTown/scripts.pory"
	.string "bust up boulders so he can bust out\l"
# 133 "data/maps/VerdanturfTown/scripts.pory"
	.string "through to the other side.\p"
# 134 "data/maps/VerdanturfTown/scripts.pory"
	.string "It'd be great if we could go through…\n"
# 135 "data/maps/VerdanturfTown/scripts.pory"
	.string "It'll make it easy to visit RUSTBORO.$"
# 136 "data/maps/VerdanturfTown/scripts.pory"

# 137 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_EasyToGetToRustboroNow:
# 138 "data/maps/VerdanturfTown/scripts.pory"
	.string "That cave next to the POKéMON MART\n"
# 139 "data/maps/VerdanturfTown/scripts.pory"
	.string "is now a tunnel to the other side.\p"
# 140 "data/maps/VerdanturfTown/scripts.pory"
	.string "It's great--it's easy to go shop for\n"
# 141 "data/maps/VerdanturfTown/scripts.pory"
	.string "new DEVON products in RUSTBORO now.$"
# 142 "data/maps/VerdanturfTown/scripts.pory"

# 143 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_TownSign:
# 144 "data/maps/VerdanturfTown/scripts.pory"
	.string "VERDANTURF TOWN\p"
# 145 "data/maps/VerdanturfTown/scripts.pory"
	.string "“The windswept highlands with the\n"
# 146 "data/maps/VerdanturfTown/scripts.pory"
	.string "sweet fragrance of grass.”$"
# 147 "data/maps/VerdanturfTown/scripts.pory"

# 148 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_WandasHouse:
# 149 "data/maps/VerdanturfTown/scripts.pory"
	.string "WANDA'S HOUSE$"
# 150 "data/maps/VerdanturfTown/scripts.pory"

# 151 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_BattleTentSign:
# 152 "data/maps/VerdanturfTown/scripts.pory"
	.string "BATTLE TENT VERDANTURF SITE\n"
# 153 "data/maps/VerdanturfTown/scripts.pory"
	.string "“Feast Your Eyes on Battles!”$"
# 154 "data/maps/VerdanturfTown/scripts.pory"

# 155 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_RusturfTunnelSign:
# 156 "data/maps/VerdanturfTown/scripts.pory"
	.string "RUSTURF TUNNEL\n"
# 157 "data/maps/VerdanturfTown/scripts.pory"
	.string "“Linking RUSTBORO and VERDANTURF\p"
# 158 "data/maps/VerdanturfTown/scripts.pory"
	.string "“The tunnel project has been\n"
# 159 "data/maps/VerdanturfTown/scripts.pory"
	.string "canceled.”$"
