#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameManager
struct GameManager_t2252321495;
// UnityEngine.UI.Text
struct Text_t3921196294;
// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.UI.Text GameManager::nameDisplay
	Text_t3921196294 * ___nameDisplay_3;
	// UnityEngine.UI.Text GameManager::radiusDisplay
	Text_t3921196294 * ___radiusDisplay_4;
	// UnityEngine.UI.Text GameManager::distanceDisplay
	Text_t3921196294 * ___distanceDisplay_5;
	// UnityEngine.GameObject GameManager::Credits
	GameObject_t1366199518 * ___Credits_6;
	// UnityEngine.GameObject GameManager::Instructions
	GameObject_t1366199518 * ___Instructions_7;
	// System.Boolean GameManager::_inMenu
	bool ____inMenu_8;

public:
	inline static int32_t get_offset_of_nameDisplay_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___nameDisplay_3)); }
	inline Text_t3921196294 * get_nameDisplay_3() const { return ___nameDisplay_3; }
	inline Text_t3921196294 ** get_address_of_nameDisplay_3() { return &___nameDisplay_3; }
	inline void set_nameDisplay_3(Text_t3921196294 * value)
	{
		___nameDisplay_3 = value;
		Il2CppCodeGenWriteBarrier(&___nameDisplay_3, value);
	}

	inline static int32_t get_offset_of_radiusDisplay_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___radiusDisplay_4)); }
	inline Text_t3921196294 * get_radiusDisplay_4() const { return ___radiusDisplay_4; }
	inline Text_t3921196294 ** get_address_of_radiusDisplay_4() { return &___radiusDisplay_4; }
	inline void set_radiusDisplay_4(Text_t3921196294 * value)
	{
		___radiusDisplay_4 = value;
		Il2CppCodeGenWriteBarrier(&___radiusDisplay_4, value);
	}

	inline static int32_t get_offset_of_distanceDisplay_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___distanceDisplay_5)); }
	inline Text_t3921196294 * get_distanceDisplay_5() const { return ___distanceDisplay_5; }
	inline Text_t3921196294 ** get_address_of_distanceDisplay_5() { return &___distanceDisplay_5; }
	inline void set_distanceDisplay_5(Text_t3921196294 * value)
	{
		___distanceDisplay_5 = value;
		Il2CppCodeGenWriteBarrier(&___distanceDisplay_5, value);
	}

	inline static int32_t get_offset_of_Credits_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___Credits_6)); }
	inline GameObject_t1366199518 * get_Credits_6() const { return ___Credits_6; }
	inline GameObject_t1366199518 ** get_address_of_Credits_6() { return &___Credits_6; }
	inline void set_Credits_6(GameObject_t1366199518 * value)
	{
		___Credits_6 = value;
		Il2CppCodeGenWriteBarrier(&___Credits_6, value);
	}

	inline static int32_t get_offset_of_Instructions_7() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___Instructions_7)); }
	inline GameObject_t1366199518 * get_Instructions_7() const { return ___Instructions_7; }
	inline GameObject_t1366199518 ** get_address_of_Instructions_7() { return &___Instructions_7; }
	inline void set_Instructions_7(GameObject_t1366199518 * value)
	{
		___Instructions_7 = value;
		Il2CppCodeGenWriteBarrier(&___Instructions_7, value);
	}

	inline static int32_t get_offset_of__inMenu_8() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ____inMenu_8)); }
	inline bool get__inMenu_8() const { return ____inMenu_8; }
	inline bool* get_address_of__inMenu_8() { return &____inMenu_8; }
	inline void set__inMenu_8(bool value)
	{
		____inMenu_8 = value;
	}
};

struct GameManager_t2252321495_StaticFields
{
public:
	// GameManager GameManager::gm
	GameManager_t2252321495 * ___gm_2;

public:
	inline static int32_t get_offset_of_gm_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___gm_2)); }
	inline GameManager_t2252321495 * get_gm_2() const { return ___gm_2; }
	inline GameManager_t2252321495 ** get_address_of_gm_2() { return &___gm_2; }
	inline void set_gm_2(GameManager_t2252321495 * value)
	{
		___gm_2 = value;
		Il2CppCodeGenWriteBarrier(&___gm_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
