#ifndef GUARD_BATTLE_AI_MAIN_H
#define GUARD_BATTLE_AI_MAIN_H

// return values for BattleAI_ChooseMoveOrAction
// 0 - 3 are move idx
#define AI_CHOICE_FLEE 255
#define AI_CHOICE_WATCH 254
#define AI_CHOICE_SWITCH 253

#define RETURN_SCORE_PLUS(val)      \
{                                   \
    score += val;                   \
    return score;                   \
}

#define RETURN_SCORE_MINUS(val)     \
{                                   \
    score -= val;                   \
    return score;                   \
}

u8 ComputeBattleAiScores(u8 battler);
void BattleAI_SetupItems(void);
void BattleAI_SetupFlags(void);
void BattleAI_SetupAIData(u8 defaultScoreMoves);
u8 BattleAI_ChooseMoveOrAction(void);
void Ai_InitPartyStruct(void);
void Ai_UpdateSwitchInData(u32 battler);
void Ai_UpdateFaintData(u32 battler);
void GetAiLogicData(void);

bool8 BattlerHasInnate(u8 battlerId, u16 ability);
bool8 GetBattlerInnateNum(u8 battlerId, u16 ability);
bool8 GetBattlerAbilityOrInnateNum(u8 battlerId, u16 ability);
bool8 BattlerHasAbilityOrInnate(u8 battlerId, u16 ability);
bool8 AI_BattlerHasAbilityOrInnate(u8 battlerId, u16 ability);

extern u8 sBattler_AI;

#endif // GUARD_BATTLE_AI_MAIN_H
