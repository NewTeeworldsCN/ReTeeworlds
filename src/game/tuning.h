/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#ifndef GAME_TUNING_H
#define GAME_TUNING_H
#undef GAME_TUNING_H // this file will be included several times

// physics tuning
MACRO_TUNING_PARAM(GroundControlSpeed, ground_control_speed, 25.0f)
MACRO_TUNING_PARAM(GroundControlAccel, ground_control_accel, 250.0f / TicksPerSecond)
MACRO_TUNING_PARAM(GroundFriction, ground_friction, 0.18f)
MACRO_TUNING_PARAM(GroundJumpImpulse, ground_jump_impulse, 33.0f)
MACRO_TUNING_PARAM(AirJumpImpulse, air_jump_impulse, 30.0f)
MACRO_TUNING_PARAM(AirControlSpeed, air_control_speed, 250.0f / TicksPerSecond)
MACRO_TUNING_PARAM(AirControlAccel, air_control_accel, 9.375f)
MACRO_TUNING_PARAM(AirFriction, air_friction, 0.88f)
MACRO_TUNING_PARAM(HookLength, hook_length, 380.0f)
MACRO_TUNING_PARAM(HookFireSpeed, hook_fire_speed, 200.0f)
MACRO_TUNING_PARAM(HookDragAccel, hook_drag_accel, 18.75f)
MACRO_TUNING_PARAM(HookDragSpeed, hook_drag_speed, 37.50f)
MACRO_TUNING_PARAM(Gravity, gravity, 3.12f)

MACRO_TUNING_PARAM(VelrampStart, velramp_start, 1375)
MACRO_TUNING_PARAM(VelrampRange, velramp_range, 5000)
MACRO_TUNING_PARAM(VelrampCurvature, velramp_curvature, 1.4f)

// weapon tuning
MACRO_TUNING_PARAM(GunCurvature, gun_curvature, 1.25f)
MACRO_TUNING_PARAM(GunSpeed, gun_speed, 5500.0f)
MACRO_TUNING_PARAM(GunLifetime, gun_lifetime, 0.8f)

MACRO_TUNING_PARAM(ShotgunCurvature, shotgun_curvature, 1.25f)
MACRO_TUNING_PARAM(ShotgunSpeed, shotgun_speed, 6875.0f)
MACRO_TUNING_PARAM(ShotgunSpeeddiff, shotgun_speeddiff, 0.8f)
MACRO_TUNING_PARAM(ShotgunLifetime, shotgun_lifetime, 0.08f)

MACRO_TUNING_PARAM(GrenadeCurvature, grenade_curvature, 7.0f)
MACRO_TUNING_PARAM(GrenadeSpeed, grenade_speed, 2500.0f)
MACRO_TUNING_PARAM(GrenadeLifetime, grenade_lifetime, 0.80f)

MACRO_TUNING_PARAM(LaserReach, laser_reach, 800.0f)
MACRO_TUNING_PARAM(LaserBounceDelay, laser_bounce_delay, 60)
MACRO_TUNING_PARAM(LaserBounceNum, laser_bounce_num, 1)
MACRO_TUNING_PARAM(LaserBounceCost, laser_bounce_cost, 0)

MACRO_TUNING_PARAM(PlayerCollision, player_collision, 1)
MACRO_TUNING_PARAM(PlayerHooking, player_hooking, 1)
#endif
