#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CharacterController
struct CharacterController_t2983510512;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Controller
struct  Controller_t1937198888  : public MonoBehaviour_t774292115
{
public:
	// System.Single Controller::moveSpeed
	float ___moveSpeed_2;
	// System.Single Controller::gravity
	float ___gravity_3;
	// UnityEngine.CharacterController Controller::myController
	CharacterController_t2983510512 * ___myController_4;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(Controller_t1937198888, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_gravity_3() { return static_cast<int32_t>(offsetof(Controller_t1937198888, ___gravity_3)); }
	inline float get_gravity_3() const { return ___gravity_3; }
	inline float* get_address_of_gravity_3() { return &___gravity_3; }
	inline void set_gravity_3(float value)
	{
		___gravity_3 = value;
	}

	inline static int32_t get_offset_of_myController_4() { return static_cast<int32_t>(offsetof(Controller_t1937198888, ___myController_4)); }
	inline CharacterController_t2983510512 * get_myController_4() const { return ___myController_4; }
	inline CharacterController_t2983510512 ** get_address_of_myController_4() { return &___myController_4; }
	inline void set_myController_4(CharacterController_t2983510512 * value)
	{
		___myController_4 = value;
		Il2CppCodeGenWriteBarrier(&___myController_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
