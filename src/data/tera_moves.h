const struct TeraMove gTeraMoveTable[MOVES_COUNT_Z][NUMBER_OF_MON_TYPES] =
{
    [MOVE_POUND] = {
        [TYPE_FIGHTING] = {
        .requiresTerastalization = FALSE,
        .power = 50,
        },
        [TYPE_STEEL] = {
        .requiresTerastalization = FALSE,
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .secondaryEffectChance = 30,
        },
        [TYPE_GHOST] = {
        .requiresTerastalization = FALSE,
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .secondaryEffectChance = 30,
        },
    },

    [MOVE_SCRATCH] = {
        [TYPE_ELECTRIC] = {
        .requiresTerastalization = FALSE,
        .effect = EFFECT_PARALYZE_HIT,
        .secondaryEffectChance = 20,
        },
        [TYPE_NORMAL] = {
        .requiresTerastalization = FALSE,
        .effect = EFFECT_FLINCH_HIT,
        .secondaryEffectChance = 20,
        },
        [TYPE_POISON] = {
        .requiresTerastalization = FALSE,
        .effect = EFFECT_POISON_HIT,
        .secondaryEffectChance = 20,
        },
    },

    [MOVE_GUST] = {
        [TYPE_FAIRY] = {
        .requiresTerastalization = FALSE,
        .target = MOVE_TARGET_BOTH,
        },
        [TYPE_NORMAL] = {
        .requiresTerastalization = FALSE,
        .power = 50,
        },
        [TYPE_GRASS] = {
        .requiresTerastalization = FALSE,
        .effect = EFFECT_TRAP,
        },
    },

    [MOVE_VINE_WHIP] = {
        [TYPE_ICE] = {
        .requiresTerastalization = FALSE,
        .effect = EFFECT_TRAP,
        },
        [TYPE_ROCK] = {
        .requiresTerastalization = FALSE,
        .power = 30,
        .effect = EFFECT_MULTI_HIT,
        },
        [TYPE_GHOST] = {
        .requiresTerastalization = FALSE,
        .effect = EFFECT_TWO_TYPED_MOVE,
        .argument = TYPE_GHOST,
        },
    },

    [MOVE_TACKLE] = {
        [TYPE_PSYCHIC] = {
        .requiresTerastalization = FALSE,
        .type = TYPE_PSYCHIC,
        },
        [TYPE_ELECTRIC] = {
        .requiresTerastalization = FALSE,
        .type = TYPE_ELECTRIC,
        },
        [TYPE_FIRE] = {
        .requiresTerastalization = FALSE,
        .type = TYPE_FIRE,
        },
        [TYPE_ICE] = {
        .requiresTerastalization = FALSE,
        .type = TYPE_ICE,
        },
        [TYPE_POISON] = {
        .requiresTerastalization = FALSE,
        .type = TYPE_POISON,
        },
    },

    [MOVE_POISON_STING] = {
        [TYPE_POISON] = {
        .requiresTerastalization = FALSE,
        .power = 30,
        },
        [TYPE_DARK] = {
        .requiresTerastalization = FALSE,
        .priority = 1,
        },
        [TYPE_FIRE] = {
        .requiresTerastalization = FALSE,
        .secondaryEffectChance = 90,
        },
    },

    [MOVE_LEER] = {
        [TYPE_FIGHTING] = {
        .requiresTerastalization = FALSE,
        .priority = 1,
        },
        [TYPE_WATER] = {
        .requiresTerastalization = FALSE,
        .effect = EFFECT_SPECIAL_ATTACK_DOWN,
        },
        [TYPE_DARK] = {
        .requiresTerastalization = FALSE,
        .effect = EFFECT_DEFENSE_DOWN_2,
        .priority = -1,
        },
    },

    [MOVE_BITE] = {
        [TYPE_ELECTRIC] = {
        .requiresTerastalization = FALSE,
        .effect = EFFECT_FLINCH_STATUS,
        .argument = STATUS1_PARALYSIS,
        .secondaryEffectChance = 10,
        },
        [TYPE_ICE] = {
        .requiresTerastalization = FALSE,
        .effect = EFFECT_FLINCH_STATUS,
        .argument = STATUS1_FROSTBITE,
        .secondaryEffectChance = 10,
        },
        [TYPE_FIRE] = {
        .requiresTerastalization = FALSE,
        .effect = EFFECT_FLINCH_STATUS,
        .argument = STATUS1_BURN,
        .secondaryEffectChance = 10,
        },
    },

    [MOVE_SING] = {
        [TYPE_FAIRY] = {
        .requiresTerastalization = TRUE,
        .accuracy = 90,
        },
    },

    [MOVE_EMBER] = {
        [TYPE_DRAGON] = {
        .requiresTerastalization = FALSE,
        .target = MOVE_TARGET_BOTH,
        },
        [TYPE_ROCK] = {
        .requiresTerastalization = FALSE,
        .power = 60,
        },
        [TYPE_WATER] = {
        .requiresTerastalization = FALSE,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_BALLISTIC,
        },
    },

    [MOVE_WATER_GUN] = {
        [TYPE_ICE] = {
        .requiresTerastalization = FALSE,
        .effect = EFFECT_DEFENSE_UP_HIT,
        .secondaryEffectChance = 30,
        },
        [TYPE_ELECTRIC] = {
        .requiresTerastalization = FALSE,
        .effect = EFFECT_SPEED_UP_HIT,
        .secondaryEffectChance = 30,
        },
        [TYPE_POISON] = {
        .requiresTerastalization = FALSE,
        .effect = EFFECT_SPECIAL_DEFENSE_UP_HIT,
        .secondaryEffectChance = 30,
        },
    },

    [MOVE_PECK] = {
        [TYPE_FIRE] = {
        .requiresTerastalization = FALSE,
        .effect = EFFECT_BURN_HIT,
        .secondaryEffectChance = 30,
        },
        [TYPE_ICE] = {
        .requiresTerastalization = FALSE,
        .effect = EFFECT_FROSTBITE_HIT,
        .secondaryEffectChance = 30,
        },
        [TYPE_PSYCHIC] = {
        .requiresTerastalization = FALSE,
        .priority = 1,
        },
    },

    [MOVE_ABSORB] = {
        [TYPE_GRASS] = {
        .priority = 1,
        },
        [TYPE_BUG] = {
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_TWO_STRIKES,
        },
        [TYPE_FIRE] = {
        .power = 40,
        },
    },

    [MOVE_CONFUSION] = {
        [TYPE_ELECTRIC] = {
        .requiresTerastalization = FALSE,
        .target = MOVE_TARGET_BOTH,
        },
        [TYPE_FIGHTING] = {
        .requiresTerastalization = FALSE,
        .split = SPLIT_PHYSICAL,
        },
        [TYPE_BUG] = {
        .requiresTerastalization = FALSE,
        .secondaryEffectChance = 30,
        },
    },

    [MOVE_NIGHT_SHADE] = {
        [TYPE_ELECTRIC] = {
        .requiresTerastalization = TRUE,
        .type = TYPE_ELECTRIC,
        },
        [TYPE_GROUND] = {
        .requiresTerastalization = TRUE,
        .type = TYPE_GROUND,
        },
        [TYPE_NORMAL] = {
        .requiresTerastalization = TRUE,
        .type = TYPE_NORMAL,
        },
    },

    [MOVE_MACH_PUNCH] = {
        [TYPE_NORMAL] = {
        .requiresTerastalization = FALSE,
        .power = 50,
        },
        [TYPE_WATER] = {
        .requiresTerastalization = FALSE,
        .type = TYPE_WATER,
        },
        [TYPE_FIRE] = {
        .requiresTerastalization = FALSE,
        .type = TYPE_FIRE,
        },
    },

    [MOVE_MUD_SLAP] = {
        [TYPE_GROUND] = {
        .requiresTerastalization = FALSE,
        .power = 40,
        },
        [TYPE_WATER] = {
        .requiresTerastalization = FALSE,
        .priority = 1,
        },
        [TYPE_DRAGON] = {
        .requiresTerastalization = FALSE,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_HIGH_CRIT,
        },
    },

    [MOVE_PURSUIT] = {
        [TYPE_NORMAL] = {
        .requiresTerastalization = FALSE,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_STRONG_JAW_BOOST,
        },
        [TYPE_FIGHTING] = {
        .requiresTerastalization = FALSE,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_IRON_FIST_BOOST,
        },
        [TYPE_STEEL] = {
        .requiresTerastalization = FALSE,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SLICING_MOVE,
        },
    },

    [MOVE_FAKE_OUT] = {
        [TYPE_GRASS] = {
        .requiresTerastalization = FALSE,
        .split = SPLIT_SPECIAL,
        },
        [TYPE_BUG] = {
        .requiresTerastalization = FALSE,
        .power = 50,
        },
        [TYPE_FAIRY] = {
        .requiresTerastalization = FALSE,
        .type = TYPE_FAIRY,
        },
    },

    [MOVE_ASTONISH] = {
        [TYPE_DARK] = {
        .requiresTerastalization = FALSE,
        .flags = FLAG_MAKES_CONTACT | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        },
        [TYPE_NORMAL] = {
        .requiresTerastalization = FALSE,
        .power = 45,
        },
        [TYPE_BUG] = {
        .requiresTerastalization = FALSE,
        .power = 20,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_TWO_STRIKES,
        },
    },

    [MOVE_MUD_SHOT] = {
        [TYPE_ROCK] = {
        .type = TYPE_ROCK,
        },
        [TYPE_STEEL] = {
        .power = 60,
        .accuracy = 100,
        },
        [TYPE_GROUND] = {
        .target = MOVE_TARGET_BOTH,
        },
    },

    [MOVE_BUG_BITE] = {
        [TYPE_GROUND] = {
        .requiresTerastalization = FALSE,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_STRONG_JAW_BOOST,
        },
        [TYPE_FLYING] = {
        .requiresTerastalization = FALSE,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_WIND_MOVE,
        },
        [TYPE_STEEL] = {
        .requiresTerastalization = FALSE,
        .pp = 1,
        },
    },

    [MOVE_LEAFAGE] = {
        [TYPE_FLYING] = {
        .requiresTerastalization = FALSE,
        .priority = 1,
        },
    },

};