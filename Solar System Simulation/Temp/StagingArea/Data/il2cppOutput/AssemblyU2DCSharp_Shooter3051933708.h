#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1366199518;
// UnityEngine.AudioClip
struct AudioClip_t3927647597;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shooter
struct  Shooter_t3051933708  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject Shooter::projectile
	GameObject_t1366199518 * ___projectile_2;
	// System.Single Shooter::power
	float ___power_3;
	// UnityEngine.GameObject Shooter::playerBullets
	GameObject_t1366199518 * ___playerBullets_4;
	// UnityEngine.AudioClip Shooter::shootSFX
	AudioClip_t3927647597 * ___shootSFX_5;

public:
	inline static int32_t get_offset_of_projectile_2() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___projectile_2)); }
	inline GameObject_t1366199518 * get_projectile_2() const { return ___projectile_2; }
	inline GameObject_t1366199518 ** get_address_of_projectile_2() { return &___projectile_2; }
	inline void set_projectile_2(GameObject_t1366199518 * value)
	{
		___projectile_2 = value;
		Il2CppCodeGenWriteBarrier(&___projectile_2, value);
	}

	inline static int32_t get_offset_of_power_3() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___power_3)); }
	inline float get_power_3() const { return ___power_3; }
	inline float* get_address_of_power_3() { return &___power_3; }
	inline void set_power_3(float value)
	{
		___power_3 = value;
	}

	inline static int32_t get_offset_of_playerBullets_4() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___playerBullets_4)); }
	inline GameObject_t1366199518 * get_playerBullets_4() const { return ___playerBullets_4; }
	inline GameObject_t1366199518 ** get_address_of_playerBullets_4() { return &___playerBullets_4; }
	inline void set_playerBullets_4(GameObject_t1366199518 * value)
	{
		___playerBullets_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerBullets_4, value);
	}

	inline static int32_t get_offset_of_shootSFX_5() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___shootSFX_5)); }
	inline AudioClip_t3927647597 * get_shootSFX_5() const { return ___shootSFX_5; }
	inline AudioClip_t3927647597 ** get_address_of_shootSFX_5() { return &___shootSFX_5; }
	inline void set_shootSFX_5(AudioClip_t3927647597 * value)
	{
		___shootSFX_5 = value;
		Il2CppCodeGenWriteBarrier(&___shootSFX_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
