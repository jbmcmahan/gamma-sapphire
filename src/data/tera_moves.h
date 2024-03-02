const struct TeraMove gTeraMoveTable[MOVES_COUNT_Z][NUMBER_OF_MON_TYPES] =
{
    [MOVE_POUND] = {
        [TYPE_FIGHTING] = {
            .requiresTerastalization = 1,
            .power = 50,
        },
        [TYPE_STEEL] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_DEFENSE_DOWN_HIT,
            .secondaryEffectChance = 30,
        },
        [TYPE_GHOST] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
            .secondaryEffectChance = 30,
        },
    },

    [MOVE_KARATE_CHOP] = {
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_TWO_TYPED_MOVE,
            .argument = TYPE_FIRE,
        },
        [TYPE_ICE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_TWO_TYPED_MOVE,
            .argument = TYPE_ICE,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_TWO_TYPED_MOVE,
            .argument = TYPE_ELECTRIC,
        },
    },

    [MOVE_DOUBLE_SLAP] = {
        [TYPE_POISON] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_HIGH_CRIT,
        },
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_THAW_USER,
        },
        [TYPE_NORMAL] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_HIT,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_THREE_STRIKES,
        },
    },

    [MOVE_COMET_PUNCH] = {
        [TYPE_FIGHTING] = {
            .requiresTerastalization = 0,
            .power = 50,
            .effect = EFFECT_HIT,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = 0,
            .power = 30,
            .effect = EFFECT_HIT,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_IRON_FIST_BOOST | FLAG_TWO_STRIKES,
        },
        [TYPE_STEEL] = {
            .requiresTerastalization = 0,
            .power = 18,
            .effect = EFFECT_HIT,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_IRON_FIST_BOOST | FLAG_THREE_STRIKES,
        },
    },

    [MOVE_MEGA_PUNCH] = {
        [TYPE_DARK] = {
            .requiresTerastalization = 0,
            .power = 110,
            .effect = EFFECT_RECOIL_IF_MISS,
            .accuracy = 50,
        },
        [TYPE_PSYCHIC] = {
            .requiresTerastalization = 0,
            .power = 90,
            .effect = EFFECT_RECOIL_IF_MISS,
            .accuracy = 70,
        },
        [TYPE_DRAGON] = {
            .requiresTerastalization = 0,
            .power = 70,
            .effect = EFFECT_RECOIL_IF_MISS,
            .accuracy = 90,
        },
    },

    [MOVE_SCRATCH] = {
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_PARALYZE_HIT,
            .secondaryEffectChance = 20,
        },
        [TYPE_NORMAL] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_FLINCH_HIT,
            .secondaryEffectChance = 20,
        },
        [TYPE_POISON] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_POISON_HIT,
            .secondaryEffectChance = 20,
        },
    },

    [MOVE_GUST] = {
        [TYPE_FAIRY] = {
            .requiresTerastalization = 1,
            .target = MOVE_TARGET_BOTH,
        },
        [TYPE_NORMAL] = {
            .requiresTerastalization = 1,
            .power = 50,
        },
        [TYPE_GRASS] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_TRAP,
        },
    },

    [MOVE_WING_ATTACK] = {
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_TWO_TYPED_MOVE,
            .argument = TYPE_FIRE,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_TWO_TYPED_MOVE,
            .argument = TYPE_ELECTRIC,
        },
        [TYPE_ICE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_TWO_TYPED_MOVE,
            .argument = TYPE_ICE,
        },
    },

    [MOVE_VINE_WHIP] = {
        [TYPE_ICE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_TRAP,
        },
        [TYPE_ROCK] = {
            .requiresTerastalization = 1,
            .power = 30,
            .effect = EFFECT_MULTI_HIT,
        },
        [TYPE_GHOST] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_TWO_TYPED_MOVE,
            .argument = TYPE_GHOST,
        },
    },

    [MOVE_FURY_ATTACK] = {
        [TYPE_WATER] = {
            .requiresTerastalization = 0,
            .accuracy = 100,
        },
        [TYPE_FIRE] = {
            .requiresTerastalization = 0,
            .power = 20,
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
        },
        [TYPE_FIGHTING] = {
            .requiresTerastalization = 1,
            .power = 80,
            .effect = EFFECT_RECOIL_IF_MISS,
        },
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_RECOIL_33_STATUS,
            .argument = STATUS1_BURN,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_RECKLESS_BOOST | FLAG_SHEER_FORCE_BOOST,
            .secondaryEffectChance = 30,
        },
    },

    [MOVE_POISON_STING] = {
        [TYPE_POISON] = {
            .requiresTerastalization = 1,
            .power = 30,
        },
        [TYPE_DARK] = {
            .requiresTerastalization = 1,
            .priority = 1,
        },
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .secondaryEffectChance = 90,
        },
    },

    [MOVE_PIN_MISSILE] = {
        [TYPE_BUG] = {
            .requiresTerastalization = 1,
            .accuracy = 100,
        },
        [TYPE_ICE] = {
            .requiresTerastalization = 1,
            .power = 30,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .priority = 1,
        },
    },

    [MOVE_LEER] = {
        [TYPE_FIGHTING] = {
            .requiresTerastalization = 1,
            .priority = 1,
        },
        [TYPE_WATER] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_SPECIAL_ATTACK_DOWN,
        },
        [TYPE_DARK] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_DEFENSE_DOWN_2,
            .priority = -1,
        },
    },

    [MOVE_BITE] = {
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_FLINCH_STATUS,
            .argument = STATUS1_PARALYSIS,
            .secondaryEffectChance = 10,
        },
        [TYPE_ICE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_FLINCH_STATUS,
            .argument = STATUS1_FROSTBITE,
            .secondaryEffectChance = 10,
        },
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_FLINCH_STATUS,
            .argument = STATUS1_BURN,
            .secondaryEffectChance = 10,
        },
    },

    [MOVE_GROWL] = {
        [TYPE_GHOST] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_SPECIAL_ATTACK_DOWN,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .priority = 1,
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
        },
    },

    [MOVE_SUPERSONIC] = {
        [TYPE_BUG] = {
            .requiresTerastalization = 1,
            .accuracy = 75,
        },
        [TYPE_DARK] = {
            .requiresTerastalization = 1,
            .priority = 1,
        },
        [TYPE_ICE] = {
            .requiresTerastalization = 1,
            .target = MOVE_TARGET_BOTH,
        },
    },

    [MOVE_ACID] = {
        [TYPE_DRAGON] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_DEFENSE_DOWN_HIT,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_SPEED_DOWN_HIT,
        },
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .secondaryEffectChance = 30,
        },
    },

    [MOVE_EMBER] = {
        [TYPE_DRAGON] = {
            .requiresTerastalization = 1,
            .target = MOVE_TARGET_BOTH,
        },
        [TYPE_ROCK] = {
            .requiresTerastalization = 1,
            .power = 60,
        },
        [TYPE_WATER] = {
            .requiresTerastalization = 1,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_BALLISTIC,
        },
    },

    [MOVE_WATER_GUN] = {
        [TYPE_ICE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_DEFENSE_UP_HIT,
            .secondaryEffectChance = 30,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_SPEED_UP_HIT,
            .secondaryEffectChance = 30,
        },
        [TYPE_POISON] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_SPECIAL_DEFENSE_UP_HIT,
            .secondaryEffectChance = 30,
        },
    },

    [MOVE_PECK] = {
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_BURN_HIT,
            .secondaryEffectChance = 30,
        },
        [TYPE_ICE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_FROSTBITE_HIT,
            .secondaryEffectChance = 30,
        },
        [TYPE_PSYCHIC] = {
            .requiresTerastalization = 1,
            .priority = 1,
        },
    },

    [MOVE_ABSORB] = {
        [TYPE_GRASS] = {
            .requiresTerastalization = 1,
            .priority = 1,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = 1,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_TWO_STRIKES,
        },
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .power = 40,
        },
    },

    [MOVE_LEECH_SEED] = {
        [TYPE_WATER] = {
            .requiresTerastalization = 1,
            .accuracy = 100,
        },
    },

    [MOVE_GROWTH] = {
        [TYPE_POISON] = {
            .requiresTerastalization = 1,
            .priority = 1,
        },
    },

    [MOVE_RAZOR_LEAF] = {
        [TYPE_DARK] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_HIT_SET_ENTRY_HAZARD,
            .argument = MOVE_EFFECT_SPIKES,
        },
        [TYPE_ROCK] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_HIT_SET_ENTRY_HAZARD,
            .argument = MOVE_EFFECT_STEALTH_ROCK,
        },
        [TYPE_DRAGON] = {
            .requiresTerastalization = 1,
            .power = 30,
            .effect = EFFECT_ALWAYS_CRIT,
        },
    },

    [MOVE_FIRE_SPIN] = {
        [TYPE_DARK] = {
            .requiresTerastalization = 1,
            .accuracy = 100,
        },
        [TYPE_ROCK] = {
            .requiresTerastalization = 1,
            .split = SPLIT_PHYSICAL,
        },
        [TYPE_FAIRY] = {
            .requiresTerastalization = 1,
            .power = 50,
            .secondaryEffectChance = 30,
        },
    },

    [MOVE_CONFUSION] = {
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .target = MOVE_TARGET_BOTH,
        },
        [TYPE_FIGHTING] = {
            .requiresTerastalization = 1,
            .split = SPLIT_PHYSICAL,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = 1,
            .secondaryEffectChance = 30,
        },
    },

    [MOVE_QUICK_ATTACK] = {
        [TYPE_FIGHTING] = {
            .requiresTerastalization = 1,
            .power = 60,
        },
        [TYPE_PSYCHIC] = {
            .requiresTerastalization = 1,
            .priority = 2,
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
        },
    },

    [MOVE_LICK] = {
        [TYPE_NORMAL] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_ATTACK_DOWN_HIT,
        },
        [TYPE_FAIRY] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_CONFUSE_HIT,
            .secondaryEffectChance = 70,
        },
        [TYPE_DRAGON] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_BUG_BITE,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
            .secondaryEffectChance = 100,
        },
    },

    [MOVE_SMOG] = {
        [TYPE_POISON] = {
            .requiresTerastalization = 1,
            .accuracy = 100,
        },
        [TYPE_GROUND] = {
            .requiresTerastalization = 1,
            .power = 60,
        },
        [TYPE_FLYING] = {
            .requiresTerastalization = 1,
            .target = MOVE_TARGET_BOTH,
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
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .priority = 1,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = 1,
            .secondaryEffectChance = 50,
        },
    },

    [MOVE_MACH_PUNCH] = {
        [TYPE_NORMAL] = {
            .requiresTerastalization = 1,
            .power = 50,
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
        },
        [TYPE_DRAGON] = {
            .requiresTerastalization = 1,
            .type = TYPE_DRAGON,
        },
        [TYPE_PSYCHIC] = {
            .requiresTerastalization = 1,
            .split = SPLIT_SPECIAL,
        },
    },

    [MOVE_MUD_SLAP] = {
        [TYPE_GROUND] = {
            .requiresTerastalization = 1,
            .power = 40,
        },
        [TYPE_WATER] = {
            .requiresTerastalization = 1,
            .priority = 1,
        },
        [TYPE_DRAGON] = {
            .requiresTerastalization = 1,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_HIGH_CRIT,
        },
    },

    [MOVE_ROLLOUT] = {
        [TYPE_STEEL] = {
            .requiresTerastalization = 0,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_BALLISTIC,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = 0,
            .power = 10,
            .accuracy = 80,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_TWO_STRIKES,
        },
        [TYPE_PSYCHIC] = {
            .requiresTerastalization = 0,
            .split = SPLIT_SPECIAL,
        },
    },

    [MOVE_PURSUIT] = {
        [TYPE_NORMAL] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_STRONG_JAW_BOOST,
        },
        [TYPE_FIGHTING] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_IRON_FIST_BOOST,
        },
        [TYPE_STEEL] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SLICING_MOVE,
        },
    },

    [MOVE_SHADOW_BALL] = {
        [TYPE_ROCK] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_DEFENSE_DOWN_HIT,
        },
        [TYPE_GHOST] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT_2,
        },
        [TYPE_DARK] = {
            .requiresTerastalization = 1,
            .secondaryEffectChance = 50,
        },
    },

    [MOVE_FAKE_OUT] = {
        [TYPE_GRASS] = {
            .requiresTerastalization = 1,
            .split = SPLIT_SPECIAL,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = 1,
            .power = 50,
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
        },
        [TYPE_ICE] = {
            .requiresTerastalization = 1,
            .argument = MOVE_EFFECT_FROSTBITE,
            .secondaryEffectChance = 30,
        },
        [TYPE_DARK] = {
            .requiresTerastalization = 1,
            .argument = MOVE_EFFECT_WRAP,
            .secondaryEffectChance = 100,
        },
    },

    [MOVE_POISON_FANG] = {
        [TYPE_NORMAL] = {
            .requiresTerastalization = 0,
            .power = 60,
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 0,
            .priority = 1,
        },
        [TYPE_POISON] = {
            .requiresTerastalization = 0,
            .power = 30,
            .secondaryEffectChance = 100,
        },
    },

    [MOVE_ASTONISH] = {
        [TYPE_DARK] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        },
        [TYPE_NORMAL] = {
            .requiresTerastalization = 1,
            .power = 45,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = 1,
            .power = 20,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_TWO_STRIKES,
        },
    },

    [MOVE_AIR_CUTTER] = {
        [TYPE_DARK] = {
            .requiresTerastalization = 0,
            .power = 50,
            .effect = EFFECT_HIT_ESCAPE,
        },
        [TYPE_FIRE] = {
            .requiresTerastalization = 0,
            .power = 80,
            .effect = EFFECT_RECOIL_33_STATUS,
            .argument = STATUS1_BURN,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_HIGH_CRIT | FLAG_SLICING_MOVE | FLAG_WIND_MOVE | FLAG_SHEER_FORCE_BOOST,
            .secondaryEffectChance = 30,
        },
        [TYPE_DRAGON] = {
            .requiresTerastalization = 0,
            .power = 40,
            .effect = EFFECT_ALWAYS_CRIT,
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
        },
        [TYPE_GROUND] = {
            .requiresTerastalization = 1,
            .target = MOVE_TARGET_BOTH,
        },
    },

    [MOVE_WATER_PULSE] = {
        [TYPE_GROUND] = {
            .requiresTerastalization = 1,
            .target = MOVE_TARGET_BOTH,
        },
        [TYPE_WATER] = {
            .requiresTerastalization = 1,
            .secondaryEffectChance = 50,
        },
        [TYPE_ICE] = {
            .requiresTerastalization = 1,
            .effect = EFFECT_PSYSHOCK,
        },
    },

    [MOVE_PLUCK] = {
        [TYPE_ROCK] = {
            .requiresTerastalization = 0,
            .power = 80,
        },
        [TYPE_WATER] = {
            .requiresTerastalization = 0,
            .priority = 1,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = 0,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_HIGH_CRIT,
        },
    },

    [MOVE_PAYBACK] = {
        [TYPE_STEEL] = {
            .requiresTerastalization = 0,
            .power = 60,
        },
        [TYPE_FAIRY] = {
            .requiresTerastalization = 0,
            .priority = -1,
        },
        [TYPE_DRAGON] = {
            .requiresTerastalization = 0,
            .split = SPLIT_SPECIAL,
        },
    },

    [MOVE_FLING] = {
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .priority = 1,
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
        },
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_HIGH_CRIT,
        },
        [TYPE_BUG] = {
            .requiresTerastalization = 1,
            .power = 35,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_TWO_STRIKES,
        },
    },

    [MOVE_BUG_BITE] = {
        [TYPE_GROUND] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_STRONG_JAW_BOOST,
        },
        [TYPE_FLYING] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_WIND_MOVE,
        },
        [TYPE_STEEL] = {
            .requiresTerastalization = 1,
            .priority = 1,
        },
    },

    [MOVE_OMINOUS_WIND] = {
        [TYPE_FAIRY] = {
            .requiresTerastalization = 1,
            .priority = 1,
        },
        [TYPE_GHOST] = {
            .requiresTerastalization = 1,
            .secondaryEffectChance = 25,
        },
        [TYPE_DARK] = {
            .requiresTerastalization = 1,
            .split = SPLIT_PHYSICAL,
        },
    },

    [MOVE_SMACK_DOWN] = {
        [TYPE_ELECTRIC] = {
            .requiresTerastalization = 1,
            .power = 70,
        },
        [TYPE_STEEL] = {
            .requiresTerastalization = 1,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_DMG_IN_AIR | FLAG_BALLISTIC,
        },
        [TYPE_FLYING] = {
            .requiresTerastalization = 1,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_DMG_IN_AIR | FLAG_WIND_MOVE,
        },
    },

    [MOVE_FLAME_CHARGE] = {
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_THAW_USER,
        },
        [TYPE_STEEL] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_SLICING_MOVE,
        },
        [TYPE_DARK] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_HIGH_CRIT,
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
        },
        [TYPE_PSYCHIC] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_DMG_MINIMIZE | FLAG_BALLISTIC,
        },
        [TYPE_FIRE] = {
            .requiresTerastalization = 1,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED | FLAG_DMG_MINIMIZE | FLAG_THAW_USER,
        },
    },

    [MOVE_LEAFAGE] = {
        [TYPE_FLYING] = {
            .requiresTerastalization = 1,
            .priority = 1,
        },
    },

};