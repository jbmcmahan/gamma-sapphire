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

    [MOVE_WING_ATTACK] = {
        [TYPE_FIRE] = {
            .requiresTerastalization = FALSE,
            .effect = EFFECT_TWO_TYPED_MOVE,
            .argument = TYPE_FIRE,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = FALSE,
            .effect = EFFECT_TWO_TYPED_MOVE,
            .argument = TYPE_ELECTRIC,
        },
        [TYPE_ICE] = {
            .requiresTerastalization = FALSE,
            .effect = EFFECT_TWO_TYPED_MOVE,
            .argument = TYPE_ICE,
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

    [MOVE_FURY_ATTACK] = {
        [TYPE_WATER] = {
            .accuracy = 100,
        },
        [TYPE_FIRE] = {
            .power = 20,
        },
        [TYPE_FIGHTING] = {
            .type = TYPE_FIGHTING,
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

    [MOVE_TAKE_DOWN] = {
        [TYPE_GRASS] = {
            .requiresTerastalization = FALSE,
            .effect = EFFECT_RECOIL_33,
            .accuracy = 100,
        },
        [TYPE_FIGHTING] = {
            .requiresTerastalization = FALSE,
            .power = 80,
            .effect = EFFECT_RECOIL_IF_MISS,
        },
        [TYPE_FIRE] = {
            .requiresTerastalization = FALSE,
            .effect = EFFECT_RECOIL_33_STATUS,
            .argument = STATUS1_BURN,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_RECKLESS_BOOST | FLAG_SHEER_FORCE_BOOST,
            .secondaryEffectChance = 30,
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

    [MOVE_RAZOR_LEAF] = {
        [TYPE_DARK] = {
            .effect = EFFECT_HIT_SET_ENTRY_HAZARD,
            .argument = MOVE_EFFECT_SPIKES,
        },
        [TYPE_ROCK] = {
            .effect = EFFECT_HIT_SET_ENTRY_HAZARD,
            .argument = MOVE_EFFECT_STEALTH_ROCK,
        },
        [TYPE_DRAGON] = {
            .power = 30,
            .effect = EFFECT_ALWAYS_CRIT,
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

    [MOVE_QUICK_ATTACK] = {
        [TYPE_FIGHTING] = {
            .requiresTerastalization = FALSE,
            .power = 60,
        },
        [TYPE_PSYCHIC] = {
            .requiresTerastalization = FALSE,
            .priority = 2,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = FALSE,
            .type = TYPE_ELECTRIC,
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

    [MOVE_LICK] = {
        [TYPE_NORMAL] = {
            .requiresTerastalization = FALSE,
            .effect = EFFECT_ATTACK_DOWN_HIT,
        },
        [TYPE_FAIRY] = {
            .requiresTerastalization = FALSE,
            .effect = EFFECT_CONFUSE_HIT,
            .secondaryEffectChance = 70,
        },
        [TYPE_DRAGON] = {
            .requiresTerastalization = FALSE,
            .effect = EFFECT_BUG_BITE,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
            .secondaryEffectChance = 100,
        },
    },

    [MOVE_SMOG] = {
        [TYPE_POISON] = {
            .requiresTerastalization = FALSE,
            .accuracy = 100,
        },
        [TYPE_GROUND] = {
            .requiresTerastalization = FALSE,
            .power = 60,
        },
        [TYPE_FLYING] = {
            .requiresTerastalization = FALSE,
            .target = MOVE_TARGET_BOTH,
        },
    },

    [MOVE_SWIFT] = {
        [TYPE_GHOST] = {
            .requiresTerastalization = FALSE,
            .type = TYPE_GHOST,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = FALSE,
            .type = TYPE_BUG,
        },
        [TYPE_STEEL] = {
            .requiresTerastalization = FALSE,
            .type = TYPE_STEEL,
        },
    },

    [MOVE_BUBBLE] = {
        [TYPE_FIRE] = {
            .requiresTerastalization = FALSE,
            .power = 60,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = FALSE,
            .priority = 1,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = FALSE,
            .secondaryEffectChance = 50,
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

    [MOVE_ROLLOUT] = {
        [TYPE_STEEL] = {
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_BALLISTIC,
        },
        [TYPE_BUG] = {
            .power = 10,
            .accuracy = 80,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_TWO_STRIKES,
        },
        [TYPE_PSYCHIC] = {
            .split = SPLIT_SPECIAL,
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

    [MOVE_SHADOW_BALL] = {
        [TYPE_ROCK] = {
            .requiresTerastalization = FALSE,
            .effect = EFFECT_DEFENSE_DOWN_HIT,
        },
        [TYPE_GHOST] = {
            .requiresTerastalization = FALSE,
            .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT_2,
        },
        [TYPE_DARK] = {
            .requiresTerastalization = FALSE,
            .secondaryEffectChance = 50,
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

    [MOVE_DIVE] = {
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = FALSE,
            .power = 50,
            .effect = EFFECT_HIT,
        },
        [TYPE_ICE] = {
            .requiresTerastalization = FALSE,
            .argument = MOVE_EFFECT_FROSTBITE,
            .secondaryEffectChance = 30,
        },
        [TYPE_DARK] = {
            .requiresTerastalization = FALSE,
            .argument = MOVE_EFFECT_WRAP,
            .secondaryEffectChance = 100,
        },
    },

    [MOVE_POISON_FANG] = {
        [TYPE_NORMAL] = {
            .power = 60,
        },
        [TYPE_ELECTRIC] = {
            .priority = 1,
        },
        [TYPE_POISON] = {
            .power = 30,
            .secondaryEffectChance = 100,
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

    [MOVE_AIR_CUTTER] = {
        [TYPE_DARK] = {
            .power = 50,
            .effect = EFFECT_HIT_ESCAPE,
        },
        [TYPE_FIRE] = {
            .power = 80,
            .effect = EFFECT_RECOIL_33_STATUS,
            .argument = STATUS1_BURN,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_HIGH_CRIT | FLAG_SLICING_MOVE | FLAG_WIND_MOVE | FLAG_SHEER_FORCE_BOOST,
            .secondaryEffectChance = 30,
        },
        [TYPE_DRAGON] = {
            .power = 40,
            .effect = EFFECT_ALWAYS_CRIT,
        },
    },

    [MOVE_MUD_SHOT] = {
        [TYPE_ROCK] = {
            .requiresTerastalization = FALSE,
            .type = TYPE_ROCK,
        },
        [TYPE_STEEL] = {
            .requiresTerastalization = FALSE,
            .power = 60,
            .accuracy = 100,
        },
        [TYPE_GROUND] = {
            .requiresTerastalization = FALSE,
            .target = MOVE_TARGET_BOTH,
        },
    },

    [MOVE_WATER_PULSE] = {
        [TYPE_GROUND] = {
            .requiresTerastalization = FALSE,
            .target = MOVE_TARGET_BOTH,
        },
        [TYPE_WATER] = {
            .requiresTerastalization = FALSE,
            .secondaryEffectChance = 50,
        },
        [TYPE_ICE] = {
            .requiresTerastalization = FALSE,
            .effect = EFFECT_PSYSHOCK,
        },
    },

    [MOVE_PLUCK] = {
        [TYPE_ROCK] = {
            .power = 80,
        },
        [TYPE_WATER] = {
            .priority = 1,
        },
        [TYPE_BUG] = {
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_HIGH_CRIT,
        },
    },

    [MOVE_PAYBACK] = {
        [TYPE_STEEL] = {
            .power = 60,
        },
        [TYPE_FAIRY] = {
            .priority = -1,
        },
        [TYPE_DRAGON] = {
            .split = SPLIT_SPECIAL,
        },
    },

    [MOVE_FLING] = {
        [TYPE_FIRE] = {
            .requiresTerastalization = FALSE,
            .priority = 1,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = FALSE,
            .type = TYPE_BUG,
        },
        [TYPE_FIGHTING] = {
            .requiresTerastalization = FALSE,
            .type = TYPE_FIGHTING,
        },
    },

    [MOVE_SUCKER_PUNCH] = {
        [TYPE_FIGHTING] = {
            .requiresTerastalization = FALSE,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_IRON_FIST_BOOST,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = FALSE,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_HIGH_CRIT,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = FALSE,
            .power = 35,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_TWO_STRIKES,
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
            .priority = 1,
        },
    },

    [MOVE_OMINOUS_WIND] = {
        [TYPE_FAIRY] = {
            .requiresTerastalization = FALSE,
            .priority = 1,
        },
        [TYPE_GHOST] = {
            .requiresTerastalization = FALSE,
            .secondaryEffectChance = 25,
        },
        [TYPE_DARK] = {
            .requiresTerastalization = FALSE,
            .split = SPLIT_PHYSICAL,
        },
    },

    [MOVE_SMACK_DOWN] = {
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = FALSE,
            .power = 70,
        },
        [TYPE_STEEL] = {
            .requiresTerastalization = FALSE,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_DMG_IN_AIR | FLAG_BALLISTIC,
        },
        [TYPE_FLYING] = {
            .requiresTerastalization = FALSE,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_DMG_IN_AIR | FLAG_WIND_MOVE,
        },
    },

    [MOVE_FLAME_CHARGE] = {
        [TYPE_FIRE] = {
            .requiresTerastalization = FALSE,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_THAW_USER,
        },
        [TYPE_STEEL] = {
            .requiresTerastalization = FALSE,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_SLICING_MOVE,
        },
        [TYPE_DARK] = {
            .requiresTerastalization = FALSE,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_HIGH_CRIT,
        },
    },

    [MOVE_ROUND] = {
        [TYPE_WATER] = {
            .requiresTerastalization = FALSE,
            .type = TYPE_WATER,
        },
        [TYPE_FLYING] = {
            .requiresTerastalization = FALSE,
            .priority = 1,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = FALSE,
            .type = TYPE_ELECTRIC,
        },
    },

    [MOVE_HEAT_CRASH] = {
        [TYPE_DRAGON] = {
            .requiresTerastalization = FALSE,
            .priority = 1,
        },
        [TYPE_PSYCHIC] = {
            .requiresTerastalization = FALSE,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_DMG_MINIMIZE | FLAG_BALLISTIC,
        },
        [TYPE_FIRE] = {
            .requiresTerastalization = FALSE,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_DMG_MINIMIZE | FLAG_THAW_USER,
        },
    },

    [MOVE_LEAFAGE] = {
        [TYPE_FLYING] = {
            .requiresTerastalization = FALSE,
            .priority = 1,
        },
    },

};