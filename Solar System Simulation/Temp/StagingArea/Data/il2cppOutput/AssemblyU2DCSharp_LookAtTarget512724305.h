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

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LookAtTarget
struct  LookAtTarget_t512724305  : public MonoBehaviour_t774292115
{
public:

public:
};

struct LookAtTarget_t512724305_StaticFields
{
public:
	// UnityEngine.GameObject LookAtTarget::target
	GameObject_t1366199518 * ___target_2;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(LookAtTarget_t512724305_StaticFields, ___target_2)); }
	inline GameObject_t1366199518 * get_target_2() const { return ___target_2; }
	inline GameObject_t1366199518 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_t1366199518 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
