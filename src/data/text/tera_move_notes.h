
// 7 character limit per line


static const u8 sFlameChargeFireDescription[] = _(
    "ThawUsr");
static const u8 sFlameChargeIceDescription[] = _(
    "Test");


// MOVE_NONE is ignored in this table. Make sure to always subtract 1 before getting the right pointer.
const u8 *const gTeraMoveNotePointers[MOVES_COUNT - 1][NUMBER_OF_MON_TYPES] =
{
    [MOVE_TACKLE] = {
        [TYPE_POISON] = sFlameChargeFireDescription,
        [TYPE_ELECTRIC] = sFlameChargeFireDescription,
        [TYPE_ICE] = sFlameChargeIceDescription,
    },
    [MOVE_FLAME_CHARGE] = {
        [TYPE_FIRE] = sFlameChargeFireDescription,
    }
};
