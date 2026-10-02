#pragma once

#ifndef PROJECT_ZBZ_CONST_H
#define PROJECT_ZBZ_CONST_H

enum ZombieZSkillType
{
TYPE_HUMAN,
TYPE_GENERAL,
TYPE_ZOMBIE,
};

enum ZombieZSkillSkillId
{
Skill_BulletDamage,
Skill_Critical,
Skill_KnifeMaster,
Skill_DoubleJump,
Skill_Health,
Skill_BombBackpack,
Skill_ExplodeBullet,
Skill_Speed,
Skill_Icarus,
Skill_Fanatic,
Skill_HeroicPresence,
Skill_AmmoReserves,
Skill_RapidReloader,
Skill_StealthReloader,
Skill_FocusedBreakthrough,
Skill_Booster,
Skill_AmmoCreation,
Skill_IncendiaryAmmo,
Skill_Marksman,
Skill_SixthSense,
Skill_Specialist,
Skill_DropZone,
Skill_VaccinationBlaster,
Skill_SupportBombardment,
Skill_RapidFireAmmo,
Skill_Fireball,
Skill_FrostBlaster,
Skill_GeneBooster,
Skill_EnduranceHave,
Skill_ContactInfection,
Skill_Resucitation,
Skill_SteelBody,
Skill_SpeedyCrouch,
Skill_SteelHead,
Skill_Adaptability,
Skill_ExplosiveReaction,
Skill_ArmonedAdvance,
Skill_BombEnhacement,
Skill_ClawEnhacement,
Skill_SteelSkin,
Skill_Kangaroo,
Skill_HuntierInstinct,
Skill_MoneyGrubber,
Skill_SkillEvolution,
Skill_LifePlunder,
Skill_Craftsmanship,
Skill_PurchasingPower,
Skill_Elite,
Skill_PenetratingRounds,
Skill_Revenge,
Skill_ZombieBombGiveaway,
Skill_Intellectual,
Skill_BombDefense,
Skill_SupplyContamination,
Skill_PainfulMemories,
Skill_Mutant,
Skill_FuriouslyFast,
Skill_Liberator,
Skill_AggressiveInvestment,
Skill_PoisonousCloud,
Skill_HookBomb,
Skill_Fetch,
Skill_Darkness,
Skill_QuickChange,
Skill_NetRound,
Skill_EmergencyEscape,
Skill_GlassCannon,
Skill_DoubleImpact,
Skill_BusyLife,
Skill_EarlyAdopter,
Skill_DiscountCoupon,
Skill_RapidReloaderII,
Skill_ZombieS,
Skill_GhostHunter,
Skill_SwordMaster,
Skill_Knife2X,
Skill_GoldClip,
Skill_Penetration,
Skill_StableGrip,
};

enum ZBZMessageType
{
ZBZ_MESSAGE_LEVEL_INFO = 1,
ZBZ_MESSAGE_SKILL_ADD,
ZBZ_MESSAGE_SKILL_REMOVE,
ZBZ_MESSAGE_HUD_INFO,
ZBZ_MESSAGE_BURN,
ZBZ_MESSAGE_CONTACT_INFECTION_RING,
ZBZ_MESSAGE_CLAW,
ZBZ_MESSAGE_WING,
ZBZ_MESSAGE_GHOSTHUNTER,
};

inline bool ZBZ_IfIgnoreRgbSkill(ZombieZSkillSkillId)
{
return false;
}

#endif
