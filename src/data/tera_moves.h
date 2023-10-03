const struct TeraMove gTeraMoveTable[MOVES_COUNT_Z][NUMBER_OF_MON_TYPES] =
{
    [MOVE_POUND] = {
        [TYPE_NORMAL] = {
        .requiresTerastalization = FALSE,
        .power = 50
        },
    },
    [MOVE_LEAFAGE] = {
        [TYPE_FLYING] = {
        .requiresTerastalization = FALSE,
        .type = TYPE_FLYING,
        .priority = 2
        },
    }
};

