#ifndef MENU_TYPE_H
#define MENU_TYPE_H

#include <vector>
#include <string>

namespace ygo {
	class MenuType {
	public:

		enum MenuList {
			MAIN_MENU,
			SINGLE_PLAYER_MENU,
			HOST_DUEL_MENU,
			DUEL_MENU,
			SELECT_AI_MENU,
			ONLINE_MENU,
			ROOM_PASSWORD_MENU,
			DECK_EDITOR,
			AI_CONFIGURATION,
		};

		enum MainMenu {
			MM_ONLINE_DUEL = 328,
			MM_SP_DUEL = 329,
			MM_PUZZLES = 330,
			MM_REPLAY = 331,
			MM_DECK_EDITOR = 332,
			MM_GAME_OPTIONS = 333,
			MM_ACCESSIBILITY_KEYS
		};

		enum HostDuel {
			RULES_OK = 336,
			NUM_PLAYERS_T1 = 337,
			NUM_PLAYERS_T2 = 338,
			BEST_OF = 339,
			TIME_LIMIT = 340,
			STARTING_LP = 341,
			STARTING_HAND = 342,
			CARDS_DRAW = 343,
			CHECK_DECK = 344,
			SHUFFLE_DECK = 345,
			ROOM_NAME = 346,
			ROOM_PASSWORD = 347,
		};

		enum SinglePlayerMenu {
			SP_HOST = 199,
			SP_PLAYER_NAME = 335
		};

		enum PlayerDuel {
			PD_START_DUEL = 348,
			PD_SELECT_DECK = 349,
			PD_PLAYER_READY = 350
		};

		enum SinglePlayerDuel {
			SP_AI_MENU = 351
		};

		enum AIConfigMenu {
			AIC_OK = 354,
			AIC_SELECT_DECK = 349,
			AIC_ATR = 355
		};

		enum OnlineDuel {
			OD_DUEL_MODE = 352,
			OD_SPECTATE_MODE = 353,
		};

		enum OnlineMenu{
			HOST = 203,
			REFRESH = 356,
			ROOMS = 194,
			ROOMS_LIST = 197,
			JOIN_ONLINE_DUEL,
			SERVER = 358,
			PLAYER_NAME = 335,
			ALLOWED_CARDS = 359,
			FORBIDDEN_LIST = 360,
			LOCKED_ROOMS = 361,
			STARTED_ROOMS = 362,
		};

		enum DeckEditorMenu {
			DE_NEW_DECK
		};

		enum PasswordMenu {
			PASS_SET_PASSWORD = 363,
			PASS_OK = 364,
			PASS_CANCEL = 365
		};

		enum GameOptionsMenu {
			GAMEOP_ENABLE_SOUND_EFFECTS = 366,
			GAMEOP_SOUND_EFFECTS_VOLUME = 367,
			GAMEOP_ENABLE_MUSIC = 368,
			GAMEOP_MUSIC_VOLUME = 369,
			USE_MUD_KEYBOARD = 377
		};

		enum DeckOptionsMenu {
			DECKOP_SELECT_DECK,
			DECKOP_SEARCH,
			DECKOP_CATEGORY,
			DECKOP_SUB_CATEGORY,
			DECKOP_ATTRIBUTE,
			DECKOP_TYPE,
			DECKOP_LEVEL,
			DECKOP_SCALE,
			DECKOP_LIMIT,
			DECKOP_ATTACK,
			DECKOP_DEFENSE,
			DECKOP_LINK_MARKER,
			DECKOP_EFFECT,
			DECKOP_CLEAR_SEARCH
		};

		enum PuzzlesMenu {
			PUZZLES_START
		};
	};
}

#endif //MENU_TYPE_H
