#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DisplayInfo
struct  DisplayInfo_t2803287754  : public MonoBehaviour_t774292115
{
public:
	// System.String DisplayInfo::name
	String_t* ___name_2;
	// System.Single DisplayInfo::radiusInfo
	float ___radiusInfo_3;
	// System.Double DisplayInfo::distanceInfo
	double ___distanceInfo_4;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(DisplayInfo_t2803287754, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_radiusInfo_3() { return static_cast<int32_t>(offsetof(DisplayInfo_t2803287754, ___radiusInfo_3)); }
	inline float get_radiusInfo_3() const { return ___radiusInfo_3; }
	inline float* get_address_of_radiusInfo_3() { return &___radiusInfo_3; }
	inline void set_radiusInfo_3(float value)
	{
		___radiusInfo_3 = value;
	}

	inline static int32_t get_offset_of_distanceInfo_4() { return static_cast<int32_t>(offsetof(DisplayInfo_t2803287754, ___distanceInfo_4)); }
	inline double get_distanceInfo_4() const { return ___distanceInfo_4; }
	inline double* get_address_of_distanceInfo_4() { return &___distanceInfo_4; }
	inline void set_distanceInfo_4(double value)
	{
		___distanceInfo_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
