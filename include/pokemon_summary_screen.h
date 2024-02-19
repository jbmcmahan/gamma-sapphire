#ifndef GUARD_POKEMON_SUMMARY_SCREEN_H
#define GUARD_POKEMON_SUMMARY_SCREEN_H

#include "main.h"

extern u8 gLastViewedMonIndex;

extern const u8 *const gMoveDescriptionPointers[];
extern const u8 gNotDoneYetDescription[];
extern const u8 *const gNatureNamePointers[];
extern const struct SpriteTemplate sSpriteTemplate_MoveTypes;
extern const struct CompressedSpriteSheet sSpriteSheet_MoveTypes;

extern struct TeraMove gTeraMoveTable[][NUMBER_OF_MON_TYPES];

void ShowPokemonSummaryScreen(u8 mode, void *mons, u8 monIndex, u8 maxMonIndex, void (*callback)(void));
void ShowSelectMovePokemonSummaryScreen(struct Pokemon *mons, u8 monIndex, u8 maxMonIndex, void (*callback)(void), u16 newMove);
void ShowPokemonSummaryScreenHandleDeoxys(u8 mode, struct BoxPokemon *mons, u8 monIndex, u8 maxMonIndex, void (*callback)(void));
u8 GetMoveSlotToReplace(void);
void SummaryScreen_SetAnimDelayTaskId(u8 taskId);
void ShowTeraTypeIcons(u16 move);
void ShowTeraSplitIcons(u16 move);
void SetSplitSpritePosAndPal(u8 typeId, u8 x, u8 y, u8 spriteArrayId);
u8 GetTeraMoveTypes(u16 move, u8 number);
void PrintTeraMoveEffects(u16 move);
void PrintMovePP(u8 moveIndex);

// The Pokemon Summary Screen can operate in different modes. Certain features,
// such as move re-ordering, are available in the different modes.
enum PokemonSummaryScreenMode
{
    SUMMARY_MODE_NORMAL,
    SUMMARY_MODE_LOCK_MOVES,
    SUMMARY_MODE_BOX,
    SUMMARY_MODE_SELECT_MOVE,
};

#endif // GUARD_POKEMON_SUMMARY_SCREEN_H
