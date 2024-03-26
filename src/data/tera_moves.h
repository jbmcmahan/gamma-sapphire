const struct TeraMove gTeraMoveTable[MOVES_COUNT_Z][NUMBER_OF_MON_TYPES] =
{
    [MOVE_POUND] = {
        [TYPE_FIGHTING] = {
            .requiresTerastalization = 1,
            .power = 50,
            .type = TYPE_NORMAL,
        },
        [TYPE_STEEL] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_DEFENSE_DOWN_HIT,
            .secondaryEffectChance = 30,
            .type = TYPE_NORMAL,
        },
        [TYPE_GHOST] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
            .secondaryEffectChance = 30,
            .type = TYPE_NORMAL,
        },
    },

    [MOVE_KARATE_CHOP] = {
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_TWO_TYPED_MOVE,
            .argument = TYPE_FIRE,
            .type = TYPE_FIGHTING,
        },
        [TYPE_ICE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_TWO_TYPED_MOVE,
            .argument = TYPE_ICE,
            .type = TYPE_FIGHTING,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_TWO_TYPED_MOVE,
            .argument = TYPE_ELECTRIC,
            .type = TYPE_FIGHTING,
        },
    },

    [MOVE_DOUBLE_SLAP] = {
        [TYPE_POISON] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_HIGH_CRIT,
            .type = TYPE_NORMAL,
        },
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_THAW_USER,
            .type = TYPE_NORMAL,
        },
        [TYPE_NORMAL] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_HIT,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_THREE_STRIKES,
            .type = TYPE_NORMAL,
        },
    },

    [MOVE_COMET_PUNCH] = {
        [TYPE_FIGHTING] = {
            .requiresTerastalization = 0,
            .power = 50,
            .effect = EFFECT_HIT,
            .type = TYPE_NORMAL,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = 0,
            .power = 30,
            .effect = EFFECT_HIT,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_IRON_FIST_BOOST | FLAG_TWO_STRIKES,
            .type = TYPE_NORMAL,
        },
        [TYPE_STEEL] = {
            .requiresTerastalization = 0,
            .power = 18,
            .effect = EFFECT_HIT,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_IRON_FIST_BOOST | FLAG_THREE_STRIKES,
            .type = TYPE_NORMAL,
        },
    },

    [MOVE_MEGA_PUNCH] = {
        [TYPE_DARK] = {
            .requiresTerastalization = 0,
            .power = 110,
            .effect = EFFECT_RECOIL_IF_MISS,
            .accuracy = 50,
            .type = TYPE_NORMAL,
        },
        [TYPE_PSYCHIC] = {
            .requiresTerastalization = 0,
            .power = 90,
            .effect = EFFECT_RECOIL_IF_MISS,
            .accuracy = 70,
            .type = TYPE_NORMAL,
        },
        [TYPE_DRAGON] = {
            .requiresTerastalization = 0,
            .power = 70,
            .effect = EFFECT_RECOIL_IF_MISS,
            .accuracy = 90,
            .type = TYPE_NORMAL,
        },
    },

    [MOVE_SCRATCH] = {
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_PARALYZE_HIT,
            .secondaryEffectChance = 20,
            .type = TYPE_NORMAL,
        },
        [TYPE_NORMAL] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_FLINCH_HIT,
            .secondaryEffectChance = 20,
            .type = TYPE_NORMAL,
        },
        [TYPE_POISON] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_POISON_HIT,
            .secondaryEffectChance = 20,
            .type = TYPE_NORMAL,
        },
    },

    [MOVE_GUST] = {
        [TYPE_FAIRY] = {
            .requiresTerastalization = 1,
            .target = MOVE_TARGET_BOTH,
            .type = TYPE_FLYING,
        },
        [TYPE_NORMAL] = {
            .requiresTerastalization = 1,
            .power = 50,
            .type = TYPE_FLYING,
        },
        [TYPE_GRASS] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_TRAP,
            .type = TYPE_FLYING,
        },
    },

    [MOVE_WING_ATTACK] = {
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_TWO_TYPED_MOVE,
            .argument = TYPE_FIRE,
            .type = TYPE_FLYING,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_TWO_TYPED_MOVE,
            .argument = TYPE_ELECTRIC,
            .type = TYPE_FLYING,
        },
        [TYPE_ICE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_TWO_TYPED_MOVE,
            .argument = TYPE_ICE,
            .type = TYPE_FLYING,
        },
    },

    [MOVE_VINE_WHIP] = {
        [TYPE_ICE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_TRAP,
            .type = TYPE_GRASS,
        },
        [TYPE_ROCK] = {
            .requiresTerastalization = 1,
            .power = 30,
            .effect = EFFECT_MULTI_HIT,
            .type = TYPE_GRASS,
        },
        [TYPE_GHOST] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_TWO_TYPED_MOVE,
            .argument = TYPE_GHOST,
            .type = TYPE_GRASS,
        },
    },

    [MOVE_FURY_ATTACK] = {
        [TYPE_WATER] = {
            .requiresTerastalization = 0,
            .accuracy = 100,
            .type = TYPE_NORMAL,
        },
        [TYPE_FIRE] = {
            .requiresTerastalization = 0,
            .power = 20,
            .type = TYPE_NORMAL,
        },
        [TYPE_FIGHTING] = {
            .requiresTerastalization = 0,
            .type = TYPE_FIGHTING,
        },
    },

    [MOVE_TACKLE] = {
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .type = TYPE_ELECTRIC,
        },
        [TYPE_ICE] = {
            .requiresTerastalization = 1,
            .type = TYPE_ICE,
        },
        [TYPE_POISON] = {
            .requiresTerastalization = 1,
            .type = TYPE_POISON,
        },
    },

    [MOVE_TAKE_DOWN] = {
        [TYPE_GRASS] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_RECOIL_33,
            .accuracy = 100,
            .type = TYPE_NORMAL,
        },
        [TYPE_FIGHTING] = {
            .requiresTerastalization = 1,
            .power = 80,
            .effect = EFFECT_RECOIL_IF_MISS,
            .type = TYPE_NORMAL,
        },
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_RECOIL_33_STATUS,
            .argument = STATUS1_BURN,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_RECKLESS_BOOST | FLAG_SHEER_FORCE_BOOST,
            .secondaryEffectChance = 30,
            .type = TYPE_NORMAL,
        },
    },

    [MOVE_POISON_STING] = {
        [TYPE_POISON] = {
            .requiresTerastalization = 1,
            .power = 30,
            .type = TYPE_POISON,
        },
        [TYPE_DARK] = {
            .requiresTerastalization = 1,
            .priority = 1,
            .type = TYPE_POISON,
        },
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .secondaryEffectChance = 90,
            .type = TYPE_POISON,
        },
    },

    [MOVE_PIN_MISSILE] = {
        [TYPE_BUG] = {
            .requiresTerastalization = 1,
            .accuracy = 100,
            .type = TYPE_BUG,
        },
        [TYPE_ICE] = {
            .requiresTerastalization = 1,
            .power = 30,
            .type = TYPE_BUG,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .priority = 1,
            .type = TYPE_BUG,
        },
    },

    [MOVE_LEER] = {
        [TYPE_FIGHTING] = {
            .requiresTerastalization = 1,
            .priority = 1,
            .type = TYPE_NORMAL,
        },
        [TYPE_WATER] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_SPECIAL_ATTACK_DOWN,
            .type = TYPE_NORMAL,
        },
        [TYPE_DARK] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_DEFENSE_DOWN_2,
            .priority = -1,
            .type = TYPE_NORMAL,
        },
    },

    [MOVE_BITE] = {
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_FLINCH_STATUS,
            .argument = STATUS1_PARALYSIS,
            .secondaryEffectChance = 10,
            .type = TYPE_DARK,
        },
        [TYPE_ICE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_FLINCH_STATUS,
            .argument = STATUS1_FROSTBITE,
            .secondaryEffectChance = 10,
            .type = TYPE_DARK,
        },
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_FLINCH_STATUS,
            .argument = STATUS1_BURN,
            .secondaryEffectChance = 10,
            .type = TYPE_DARK,
        },
    },

    [MOVE_GROWL] = {
        [TYPE_GHOST] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_SPECIAL_ATTACK_DOWN,
            .type = TYPE_NORMAL,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .priority = 1,
            .type = TYPE_NORMAL,
        },
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .type = TYPE_FIRE,
        },
    },

    [MOVE_SING] = {
        [TYPE_FAIRY] = {
            .requiresTerastalization = 2,
            .accuracy = 90,
            .type = TYPE_NORMAL,
        },
    },

    [MOVE_SUPERSONIC] = {
        [TYPE_BUG] = {
            .requiresTerastalization = 1,
            .accuracy = 75,
            .type = TYPE_NORMAL,
        },
        [TYPE_DARK] = {
            .requiresTerastalization = 1,
            .priority = 1,
            .type = TYPE_NORMAL,
        },
        [TYPE_ICE] = {
            .requiresTerastalization = 1,
            .target = MOVE_TARGET_BOTH,
            .type = TYPE_NORMAL,
        },
    },

    [MOVE_ACID] = {
        [TYPE_DRAGON] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_DEFENSE_DOWN_HIT,
            .type = TYPE_POISON,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_SPEED_DOWN_HIT,
            .type = TYPE_POISON,
        },
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .secondaryEffectChance = 30,
            .type = TYPE_POISON,
        },
    },

    [MOVE_EMBER] = {
        [TYPE_DRAGON] = {
            .requiresTerastalization = 1,
            .target = MOVE_TARGET_BOTH,
            .type = TYPE_FIRE,
        },
        [TYPE_ROCK] = {
            .requiresTerastalization = 1,
            .power = 60,
            .type = TYPE_FIRE,
        },
        [TYPE_WATER] = {
            .requiresTerastalization = 1,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_BALLISTIC,
            .type = TYPE_FIRE,
        },
    },

    [MOVE_WATER_GUN] = {
        [TYPE_ICE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_DEFENSE_UP_HIT,
            .secondaryEffectChance = 30,
            .type = TYPE_WATER,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_SPEED_UP_HIT,
            .secondaryEffectChance = 30,
            .type = TYPE_WATER,
        },
        [TYPE_POISON] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_SPECIAL_DEFENSE_UP_HIT,
            .secondaryEffectChance = 30,
            .type = TYPE_WATER,
        },
    },

    [MOVE_PECK] = {
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_BURN_HIT,
            .secondaryEffectChance = 30,
            .type = TYPE_FLYING,
        },
        [TYPE_ICE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_FROSTBITE_HIT,
            .secondaryEffectChance = 30,
            .type = TYPE_FLYING,
        },
        [TYPE_PSYCHIC] = {
            .requiresTerastalization = 1,
            .priority = 1,
            .type = TYPE_FLYING,
        },
    },

    [MOVE_ABSORB] = {
        [TYPE_GRASS] = {
            .requiresTerastalization = 1,
            .priority = 1,
            .type = TYPE_GRASS,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = 1,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_TWO_STRIKES,
            .type = TYPE_GRASS,
        },
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .power = 40,
            .type = TYPE_GRASS,
        },
    },

    [MOVE_LEECH_SEED] = {
        [TYPE_WATER] = {
            .requiresTerastalization = 1,
            .accuracy = 100,
            .type = TYPE_GRASS,
        },
    },

    [MOVE_GROWTH] = {
        [TYPE_POISON] = {
            .requiresTerastalization = 1,
            .priority = 1,
            .type = TYPE_NORMAL,
        },
    },

    [MOVE_RAZOR_LEAF] = {
        [TYPE_DARK] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_HIT_SET_ENTRY_HAZARD,
            .argument = MOVE_EFFECT_SPIKES,
            .type = TYPE_GRASS,
        },
        [TYPE_ROCK] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_HIT_SET_ENTRY_HAZARD,
            .argument = MOVE_EFFECT_STEALTH_ROCK,
            .type = TYPE_GRASS,
        },
        [TYPE_DRAGON] = {
            .requiresTerastalization = 1,
            .power = 30,
            .effect = EFFECT_ALWAYS_CRIT,
            .type = TYPE_GRASS,
        },
    },

    [MOVE_FIRE_SPIN] = {
        [TYPE_DARK] = {
            .requiresTerastalization = 1,
            .accuracy = 100,
            .type = TYPE_FIRE,
        },
        [TYPE_ROCK] = {
            .requiresTerastalization = 1,
            .split = SPLIT_PHYSICAL,
            .type = TYPE_FIRE,
        },
        [TYPE_FAIRY] = {
            .requiresTerastalization = 1,
            .power = 50,
            .secondaryEffectChance = 30,
            .type = TYPE_FIRE,
        },
    },

    [MOVE_CONFUSION] = {
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .target = MOVE_TARGET_BOTH,
            .type = TYPE_PSYCHIC,
        },
        [TYPE_FIGHTING] = {
            .requiresTerastalization = 1,
            .split = SPLIT_PHYSICAL,
            .type = TYPE_PSYCHIC,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = 1,
            .secondaryEffectChance = 30,
            .type = TYPE_PSYCHIC,
        },
    },

    [MOVE_QUICK_ATTACK] = {
        [TYPE_FIGHTING] = {
            .requiresTerastalization = 1,
            .power = 60,
            .type = TYPE_NORMAL,
        },
        [TYPE_PSYCHIC] = {
            .requiresTerastalization = 1,
            .priority = 2,
            .type = TYPE_NORMAL,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .type = TYPE_ELECTRIC,
        },
    },

    [MOVE_NIGHT_SHADE] = {
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 2,
            .type = TYPE_ELECTRIC,
        },
        [TYPE_GROUND] = {
            .requiresTerastalization = 2,
            .type = TYPE_GROUND,
        },
        [TYPE_NORMAL] = {
            .requiresTerastalization = 2,
            .type = TYPE_NORMAL,
        },
    },

    [MOVE_SMOKESCREEN] = {
        [TYPE_POISON] = {
            .requiresTerastalization = 1,
            .type = TYPE_POISON,
        },
        [TYPE_FLYING] = {
            .requiresTerastalization = 1,
            .priority = 1,
            .type = TYPE_NORMAL,
        },
    },

    [MOVE_LICK] = {
        [TYPE_NORMAL] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_ATTACK_DOWN_HIT,
            .type = TYPE_GHOST,
        },
        [TYPE_FAIRY] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_CONFUSE_HIT,
            .secondaryEffectChance = 70,
            .type = TYPE_GHOST,
        },
        [TYPE_DRAGON] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_BUG_BITE,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
            .secondaryEffectChance = 100,
            .type = TYPE_GHOST,
        },
    },

    [MOVE_SMOG] = {
        [TYPE_POISON] = {
            .requiresTerastalization = 1,
            .accuracy = 100,
            .type = TYPE_POISON,
        },
        [TYPE_GROUND] = {
            .requiresTerastalization = 1,
            .power = 60,
            .type = TYPE_POISON,
        },
        [TYPE_FLYING] = {
            .requiresTerastalization = 1,
            .target = MOVE_TARGET_BOTH,
            .type = TYPE_POISON,
        },
    },

    [MOVE_SWIFT] = {
        [TYPE_GHOST] = {
            .requiresTerastalization = 1,
            .type = TYPE_GHOST,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = 1,
            .type = TYPE_BUG,
        },
        [TYPE_STEEL] = {
            .requiresTerastalization = 1,
            .type = TYPE_STEEL,
        },
    },

    [MOVE_BUBBLE] = {
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .power = 60,
            .type = TYPE_WATER,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .priority = 1,
            .type = TYPE_WATER,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = 1,
            .secondaryEffectChance = 50,
            .type = TYPE_WATER,
        },
    },

    [MOVE_MACH_PUNCH] = {
        [TYPE_NORMAL] = {
            .requiresTerastalization = 1,
            .power = 50,
            .type = TYPE_FIGHTING,
        },
        [TYPE_WATER] = {
            .requiresTerastalization = 1,
            .type = TYPE_WATER,
        },
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .type = TYPE_FIRE,
        },
    },

    [MOVE_FEINT_ATTACK] = {
        [TYPE_FLYING] = {
            .requiresTerastalization = 1,
            .priority = 1,
            .type = TYPE_DARK,
        },
        [TYPE_DRAGON] = {
            .requiresTerastalization = 1,
            .type = TYPE_DRAGON,
        },
        [TYPE_PSYCHIC] = {
            .requiresTerastalization = 1,
            .split = SPLIT_SPECIAL,
            .type = TYPE_DARK,
        },
    },

    [MOVE_MUD_SLAP] = {
        [TYPE_GROUND] = {
            .requiresTerastalization = 1,
            .power = 40,
            .type = TYPE_GROUND,
        },
        [TYPE_WATER] = {
            .requiresTerastalization = 1,
            .priority = 1,
            .type = TYPE_GROUND,
        },
        [TYPE_DRAGON] = {
            .requiresTerastalization = 1,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_HIGH_CRIT,
            .type = TYPE_GROUND,
        },
    },

    [MOVE_ROLLOUT] = {
        [TYPE_STEEL] = {
            .requiresTerastalization = 0,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_BALLISTIC,
            .type = TYPE_ROCK,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = 0,
            .power = 10,
            .accuracy = 80,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_TWO_STRIKES,
            .type = TYPE_ROCK,
        },
        [TYPE_PSYCHIC] = {
            .requiresTerastalization = 0,
            .split = SPLIT_SPECIAL,
            .type = TYPE_ROCK,
        },
    },

    [MOVE_PURSUIT] = {
        [TYPE_NORMAL] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_STRONG_JAW_BOOST,
            .type = TYPE_DARK,
        },
        [TYPE_FIGHTING] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_IRON_FIST_BOOST,
            .type = TYPE_DARK,
        },
        [TYPE_STEEL] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SLICING_MOVE,
            .type = TYPE_DARK,
        },
    },

    [MOVE_SHADOW_BALL] = {
        [TYPE_ROCK] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_DEFENSE_DOWN_HIT,
            .type = TYPE_GHOST,
        },
        [TYPE_GHOST] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT_2,
            .type = TYPE_GHOST,
        },
        [TYPE_DARK] = {
            .requiresTerastalization = 1,
            .secondaryEffectChance = 50,
            .type = TYPE_GHOST,
        },
    },

    [MOVE_FAKE_OUT] = {
        [TYPE_GRASS] = {
            .requiresTerastalization = 1,
            .split = SPLIT_SPECIAL,
            .type = TYPE_NORMAL,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = 1,
            .power = 50,
            .type = TYPE_NORMAL,
        },
        [TYPE_FAIRY] = {
            .requiresTerastalization = 1,
            .type = TYPE_FAIRY,
        },
    },

    [MOVE_DIVE] = {
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .power = 45,
            .effect = EFFECT_HIT,
            .type = TYPE_WATER,
        },
        [TYPE_ICE] = {
            .requiresTerastalization = 1,
            .argument = MOVE_EFFECT_FROSTBITE,
            .secondaryEffectChance = 30,
            .type = TYPE_WATER,
        },
        [TYPE_DARK] = {
            .requiresTerastalization = 1,
            .argument = MOVE_EFFECT_WRAP,
            .secondaryEffectChance = 100,
            .type = TYPE_WATER,
        },
    },

    [MOVE_POISON_FANG] = {
        [TYPE_NORMAL] = {
            .requiresTerastalization = 0,
            .power = 60,
            .type = TYPE_POISON,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 0,
            .priority = 1,
            .type = TYPE_POISON,
        },
        [TYPE_POISON] = {
            .requiresTerastalization = 0,
            .power = 30,
            .secondaryEffectChance = 100,
            .type = TYPE_POISON,
        },
    },

    [MOVE_ASTONISH] = {
        [TYPE_DARK] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
            .type = TYPE_GHOST,
        },
        [TYPE_NORMAL] = {
            .requiresTerastalization = 1,
            .power = 45,
            .type = TYPE_GHOST,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = 1,
            .power = 20,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_TWO_STRIKES,
            .type = TYPE_GHOST,
        },
    },

    [MOVE_AIR_CUTTER] = {
        [TYPE_DARK] = {
            .requiresTerastalization = 0,
            .power = 50,
            .effect = EFFECT_HIT_ESCAPE,
            .type = TYPE_FLYING,
        },
        [TYPE_FIRE] = {
            .requiresTerastalization = 0,
            .power = 80,
            .effect = EFFECT_RECOIL_33_STATUS,
            .argument = STATUS1_BURN,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_HIGH_CRIT | FLAG_SLICING_MOVE | FLAG_WIND_MOVE | FLAG_SHEER_FORCE_BOOST,
            .secondaryEffectChance = 30,
            .type = TYPE_FLYING,
        },
        [TYPE_DRAGON] = {
            .requiresTerastalization = 0,
            .power = 40,
            .effect = EFFECT_ALWAYS_CRIT,
            .type = TYPE_FLYING,
        },
    },

    [MOVE_MUD_SHOT] = {
        [TYPE_ROCK] = {
            .requiresTerastalization = 1,
            .type = TYPE_ROCK,
        },
        [TYPE_STEEL] = {
            .requiresTerastalization = 1,
            .power = 60,
            .accuracy = 100,
            .type = TYPE_GROUND,
        },
        [TYPE_GROUND] = {
            .requiresTerastalization = 1,
            .target = MOVE_TARGET_BOTH,
            .type = TYPE_GROUND,
        },
    },

    [MOVE_WATER_PULSE] = {
        [TYPE_GROUND] = {
            .requiresTerastalization = 1,
            .target = MOVE_TARGET_BOTH,
            .type = TYPE_WATER,
        },
        [TYPE_WATER] = {
            .requiresTerastalization = 1,
            .secondaryEffectChance = 50,
            .type = TYPE_WATER,
        },
        [TYPE_ICE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_PSYSHOCK,
            .type = TYPE_WATER,
        },
    },

    [MOVE_PLUCK] = {
        [TYPE_ROCK] = {
            .requiresTerastalization = 0,
            .power = 80,
            .type = TYPE_FLYING,
        },
        [TYPE_WATER] = {
            .requiresTerastalization = 0,
            .priority = 1,
            .type = TYPE_FLYING,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = 0,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_HIGH_CRIT,
            .type = TYPE_FLYING,
        },
    },

    [MOVE_PAYBACK] = {
        [TYPE_STEEL] = {
            .requiresTerastalization = 0,
            .power = 60,
            .type = TYPE_DARK,
        },
        [TYPE_FAIRY] = {
            .requiresTerastalization = 0,
            .priority = -1,
            .type = TYPE_DARK,
        },
        [TYPE_DRAGON] = {
            .requiresTerastalization = 0,
            .split = SPLIT_SPECIAL,
            .type = TYPE_DARK,
        },
    },

    [MOVE_FLING] = {
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .priority = 1,
            .type = TYPE_DARK,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = 1,
            .type = TYPE_BUG,
        },
        [TYPE_FIGHTING] = {
            .requiresTerastalization = 1,
            .type = TYPE_FIGHTING,
        },
    },

    [MOVE_SUCKER_PUNCH] = {
        [TYPE_FIGHTING] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_IRON_FIST_BOOST,
            .type = TYPE_DARK,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_HIGH_CRIT,
            .type = TYPE_DARK,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = 1,
            .power = 35,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_TWO_STRIKES,
            .type = TYPE_DARK,
        },
    },

    [MOVE_BUG_BITE] = {
        [TYPE_GROUND] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_STRONG_JAW_BOOST,
            .type = TYPE_BUG,
        },
        [TYPE_FLYING] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_WIND_MOVE,
            .type = TYPE_BUG,
        },
        [TYPE_STEEL] = {
            .requiresTerastalization = 1,
            .priority = 1,
            .type = TYPE_BUG,
        },
    },

    [MOVE_OMINOUS_WIND] = {
        [TYPE_FAIRY] = {
            .requiresTerastalization = 1,
            .priority = 1,
            .type = TYPE_GHOST,
        },
        [TYPE_GHOST] = {
            .requiresTerastalization = 1,
            .secondaryEffectChance = 25,
            .type = TYPE_GHOST,
        },
        [TYPE_DARK] = {
            .requiresTerastalization = 1,
            .split = SPLIT_PHYSICAL,
            .type = TYPE_GHOST,
        },
    },

    [MOVE_SMACK_DOWN] = {
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .power = 70,
            .type = TYPE_ROCK,
        },
        [TYPE_STEEL] = {
            .requiresTerastalization = 1,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_DMG_IN_AIR | FLAG_BALLISTIC,
            .type = TYPE_ROCK,
        },
        [TYPE_FLYING] = {
            .requiresTerastalization = 1,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_DMG_IN_AIR | FLAG_WIND_MOVE,
            .type = TYPE_ROCK,
        },
    },

    [MOVE_FLAME_CHARGE] = {
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_THAW_USER,
            .type = TYPE_FIRE,
        },
        [TYPE_STEEL] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_SLICING_MOVE,
            .type = TYPE_FIRE,
        },
        [TYPE_DARK] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_HIGH_CRIT,
            .type = TYPE_FIRE,
        },
    },

    [MOVE_ROUND] = {
        [TYPE_WATER] = {
            .requiresTerastalization = 1,
            .type = TYPE_WATER,
        },
        [TYPE_FLYING] = {
            .requiresTerastalization = 1,
            .priority = 1,
            .type = TYPE_NORMAL,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .type = TYPE_ELECTRIC,
        },
    },

    [MOVE_HEAT_CRASH] = {
        [TYPE_DRAGON] = {
            .requiresTerastalization = 1,
            .priority = 1,
            .type = TYPE_FIRE,
        },
        [TYPE_PSYCHIC] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_DMG_MINIMIZE | FLAG_BALLISTIC,
            .type = TYPE_FIRE,
        },
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_DMG_MINIMIZE | FLAG_THAW_USER,
            .type = TYPE_FIRE,
        },
    },

    [MOVE_LEAFAGE] = {
        [TYPE_FLYING] = {
            .requiresTerastalization = 1,
            .priority = 1,
            .type = TYPE_GRASS,
        },
    },

};