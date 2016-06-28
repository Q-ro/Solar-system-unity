#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// ChangeLookAtTarget
struct ChangeLookAtTarget_t3621805471;
// Controller
struct Controller_t1937198888;
// UnityEngine.CharacterController
struct CharacterController_t2983510512;
// System.Object
struct Il2CppObject;
// DisplayInfo
struct DisplayInfo_t2803287754;
// UnityEngine.Collision
struct Collision_t2353869345;
// GameManager
struct GameManager_t2252321495;
// System.String
struct String_t;
// LookAtTarget
struct LookAtTarget_t512724305;
// MouseLooker
struct MouseLooker_t3832072371;
// RotateAround
struct RotateAround_t1439248898;
// Shooter
struct Shooter_t3051933708;
// UnityEngine.Rigidbody
struct Rigidbody_t1071364940;
// UnityEngine.AudioSource
struct AudioSource_t585923902;
// TimedObjectDestructor
struct TimedObjectDestructor_t3793803729;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array4136897760.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_ChangeLookAtTarget3621805471.h"
#include "AssemblyU2DCSharp_ChangeLookAtTarget3621805471MethodDeclarations.h"
#include "mscorlib_System_Void2799814243.h"
#include "UnityEngine_UnityEngine_MonoBehaviour774292115MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object1181371020MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component1078601330MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug12548584MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1366199518.h"
#include "mscorlib_System_Boolean3143194569.h"
#include "UnityEngine_UnityEngine_Object1181371020.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"
#include "UnityEngine_UnityEngine_Camera2805735124MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1366199518MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform224878301MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "AssemblyU2DCSharp_LookAtTarget512724305.h"
#include "AssemblyU2DCSharp_LookAtTarget512724305MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera2805735124.h"
#include "UnityEngine_UnityEngine_Transform224878301.h"
#include "mscorlib_System_Single1791520093.h"
#include "AssemblyU2DCSharp_Controller1937198888.h"
#include "AssemblyU2DCSharp_Controller1937198888MethodDeclarations.h"
#include "UnityEngine_UnityEngine_CharacterController2983510512.h"
#include "UnityEngine_UnityEngine_Input4173266137MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector3465617797MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time2587606660MethodDeclarations.h"
#include "AssemblyU2DCSharp_GameManager2252321495MethodDeclarations.h"
#include "UnityEngine_UnityEngine_CharacterController2983510512MethodDeclarations.h"
#include "AssemblyU2DCSharp_GameManager2252321495.h"
#include "mscorlib_System_Int321448170597.h"
#include "UnityEngine_UnityEngine_CollisionFlags1021373776.h"
#include "AssemblyU2DCSharp_DisplayInfo2803287754.h"
#include "AssemblyU2DCSharp_DisplayInfo2803287754MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collision2353869345.h"
#include "UnityEngine_UnityEngine_Collision2353869345MethodDeclarations.h"
#include "mscorlib_System_String1967731336MethodDeclarations.h"
#include "mscorlib_System_Double609272444.h"
#include "mscorlib_System_Single1791520093MethodDeclarations.h"
#include "mscorlib_System_Double609272444MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text3921196294.h"
#include "UnityEngine_UI_UnityEngine_UI_Text3921196294MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Application3439453659MethodDeclarations.h"
#include "AssemblyU2DCSharp_MouseLooker3832072371.h"
#include "AssemblyU2DCSharp_MouseLooker3832072371MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion83606849.h"
#include "UnityEngine_UnityEngine_Cursor2071590059MethodDeclarations.h"
#include "UnityEngine_UnityEngine_CursorLockMode2454542099.h"
#include "UnityEngine_UnityEngine_Quaternion83606849MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf1692945841MethodDeclarations.h"
#include "AssemblyU2DCSharp_RotateAround1439248898.h"
#include "AssemblyU2DCSharp_RotateAround1439248898MethodDeclarations.h"
#include "AssemblyU2DCSharp_Shooter3051933708.h"
#include "AssemblyU2DCSharp_Shooter3051933708MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody1071364940MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioSource585923902MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody1071364940.h"
#include "UnityEngine_UnityEngine_ForceMode1072683993.h"
#include "UnityEngine_UnityEngine_AudioClip3927647597.h"
#include "UnityEngine_UnityEngine_AudioSource585923902.h"
#include "AssemblyU2DCSharp_TimedObjectDestructor3793803729.h"
#include "AssemblyU2DCSharp_TimedObjectDestructor3793803729MethodDeclarations.h"

// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared (GameObject_t1366199518 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m2812611596(__this, method) ((  Il2CppObject * (*) (GameObject_t1366199518 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.CharacterController>()
#define GameObject_GetComponent_TisCharacterController_t2983510512_m1462576613(__this, method) ((  CharacterController_t2983510512 * (*) (GameObject_t1366199518 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<GameManager>()
#define GameObject_GetComponent_TisGameManager_t2252321495_m190008436(__this, method) ((  GameManager_t2252321495 * (*) (GameObject_t1366199518 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
#define GameObject_GetComponent_TisRigidbody_t1071364940_m1060888193(__this, method) ((  Rigidbody_t1071364940 * (*) (GameObject_t1366199518 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_AddComponent_TisIl2CppObject_m3813873105_gshared (GameObject_t1366199518 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisIl2CppObject_m3813873105(__this, method) ((  Il2CppObject * (*) (GameObject_t1366199518 *, const MethodInfo*))GameObject_AddComponent_TisIl2CppObject_m3813873105_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody>()
#define GameObject_AddComponent_TisRigidbody_t1071364940_m2571400210(__this, method) ((  Rigidbody_t1071364940 * (*) (GameObject_t1366199518 *, const MethodInfo*))GameObject_AddComponent_TisIl2CppObject_m3813873105_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
#define GameObject_GetComponent_TisAudioSource_t585923902_m3309832039(__this, method) ((  AudioSource_t585923902 * (*) (GameObject_t1366199518 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChangeLookAtTarget::.ctor()
extern "C"  void ChangeLookAtTarget__ctor_m2749569066 (ChangeLookAtTarget_t3621805471 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChangeLookAtTarget::Start()
extern Il2CppClass* Debug_t12548584_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2994090592;
extern const uint32_t ChangeLookAtTarget_Start_m4249180190_MetadataUsageId;
extern "C"  void ChangeLookAtTarget_Start_m4249180190 (ChangeLookAtTarget_t3621805471 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ChangeLookAtTarget_Start_m4249180190_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t1366199518 * L_0 = __this->get_target_2();
		bool L_1 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_0, (Object_t1181371020 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		GameObject_t1366199518 * L_2 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		__this->set_target_2(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t12548584_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral2994090592, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void ChangeLookAtTarget::OnMouseDown()
extern Il2CppClass* LookAtTarget_t512724305_il2cpp_TypeInfo_var;
extern const uint32_t ChangeLookAtTarget_OnMouseDown_m632955386_MetadataUsageId;
extern "C"  void ChangeLookAtTarget_OnMouseDown_m632955386 (ChangeLookAtTarget_t3621805471 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ChangeLookAtTarget_OnMouseDown_m632955386_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t465617797  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		GameObject_t1366199518 * L_0 = __this->get_target_2();
		((LookAtTarget_t512724305_StaticFields*)LookAtTarget_t512724305_il2cpp_TypeInfo_var->static_fields)->set_target_2(L_0);
		Camera_t2805735124 * L_1 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1366199518 * L_2 = __this->get_target_2();
		Transform_t224878301 * L_3 = GameObject_get_transform_m909382139(L_2, /*hidden argument*/NULL);
		Vector3_t465617797  L_4 = Transform_get_localScale_m3074381503(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = (&V_0)->get_x_1();
		Camera_set_fieldOfView_m3974156396(L_1, ((float)((float)(60.0f)*(float)L_5)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Controller::.ctor()
extern "C"  void Controller__ctor_m2477390111 (Controller_t1937198888 * __this, const MethodInfo* method)
{
	{
		__this->set_moveSpeed_2((3.0f));
		__this->set_gravity_3((9.81f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Controller::Start()
extern const MethodInfo* GameObject_GetComponent_TisCharacterController_t2983510512_m1462576613_MethodInfo_var;
extern const uint32_t Controller_Start_m165415507_MetadataUsageId;
extern "C"  void Controller_Start_m165415507 (Controller_t1937198888 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Controller_Start_m165415507_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t1366199518 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		CharacterController_t2983510512 * L_1 = GameObject_GetComponent_TisCharacterController_t2983510512_m1462576613(L_0, /*hidden argument*/GameObject_GetComponent_TisCharacterController_t2983510512_m1462576613_MethodInfo_var);
		__this->set_myController_4(L_1);
		return;
	}
}
// System.Void Controller::Update()
extern Il2CppClass* Input_t4173266137_il2cpp_TypeInfo_var;
extern Il2CppClass* GameManager_t2252321495_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1635882288;
extern Il2CppCodeGenString* _stringLiteral855845486;
extern Il2CppCodeGenString* _stringLiteral1684512047;
extern Il2CppCodeGenString* _stringLiteral372029407;
extern Il2CppCodeGenString* _stringLiteral372029413;
extern Il2CppCodeGenString* _stringLiteral2358390244;
extern const uint32_t Controller_Update_m2428618086_MetadataUsageId;
extern "C"  void Controller_Update_m2428618086 (Controller_t1937198888 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Controller_Update_m2428618086_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t465617797  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t465617797  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t465617797  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t465617797  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4173266137_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1635882288, /*hidden argument*/NULL);
		Vector3_t465617797  L_1 = Vector3_get_forward_m1201659139(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t465617797  L_2 = Vector3_op_Multiply_m3872631309(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_moveSpeed_2();
		Vector3_t465617797  L_4 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		float L_5 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t465617797  L_6 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral855845486, /*hidden argument*/NULL);
		Vector3_t465617797  L_8 = Vector3_get_right_m1884123822(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t465617797  L_9 = Vector3_op_Multiply_m3872631309(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		float L_10 = __this->get_moveSpeed_2();
		Vector3_t465617797  L_11 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		float L_12 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t465617797  L_13 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		float L_14 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1684512047, /*hidden argument*/NULL);
		Vector3_t465617797  L_15 = Vector3_get_up_m2725403797(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t465617797  L_16 = Vector3_op_Multiply_m3872631309(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		float L_17 = __this->get_moveSpeed_2();
		Vector3_t465617797  L_18 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		float L_19 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t465617797  L_20 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		Transform_t224878301 * L_21 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t465617797  L_22 = V_0;
		Vector3_t465617797  L_23 = V_1;
		Vector3_t465617797  L_24 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		Vector3_t465617797  L_25 = V_2;
		Vector3_t465617797  L_26 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		Vector3_t465617797  L_27 = Transform_TransformDirection_m1639585047(L_21, L_26, /*hidden argument*/NULL);
		V_3 = L_27;
		bool L_28 = Input_GetButtonDown_m2792523731(NULL /*static, unused*/, _stringLiteral372029407, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00ca;
		}
	}
	{
		GameManager_t2252321495 * L_29 = ((GameManager_t2252321495_StaticFields*)GameManager_t2252321495_il2cpp_TypeInfo_var->static_fields)->get_gm_2();
		bool L_30 = GameManager_getInMenu_m2016446078(L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_00ca;
		}
	}
	{
		GameManager_t2252321495 * L_31 = ((GameManager_t2252321495_StaticFields*)GameManager_t2252321495_il2cpp_TypeInfo_var->static_fields)->get_gm_2();
		GameManager_showMenu_m3482130167(L_31, 2, /*hidden argument*/NULL);
		GameManager_t2252321495 * L_32 = ((GameManager_t2252321495_StaticFields*)GameManager_t2252321495_il2cpp_TypeInfo_var->static_fields)->get_gm_2();
		GameManager_PauseGame_m1634217600(L_32, /*hidden argument*/NULL);
	}

IL_00ca:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4173266137_il2cpp_TypeInfo_var);
		bool L_33 = Input_GetButtonDown_m2792523731(NULL /*static, unused*/, _stringLiteral372029413, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00fd;
		}
	}
	{
		GameManager_t2252321495 * L_34 = ((GameManager_t2252321495_StaticFields*)GameManager_t2252321495_il2cpp_TypeInfo_var->static_fields)->get_gm_2();
		bool L_35 = GameManager_getInMenu_m2016446078(L_34, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_00fd;
		}
	}
	{
		GameManager_t2252321495 * L_36 = ((GameManager_t2252321495_StaticFields*)GameManager_t2252321495_il2cpp_TypeInfo_var->static_fields)->get_gm_2();
		GameManager_showMenu_m3482130167(L_36, 1, /*hidden argument*/NULL);
		GameManager_t2252321495 * L_37 = ((GameManager_t2252321495_StaticFields*)GameManager_t2252321495_il2cpp_TypeInfo_var->static_fields)->get_gm_2();
		GameManager_PauseGame_m1634217600(L_37, /*hidden argument*/NULL);
	}

IL_00fd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4173266137_il2cpp_TypeInfo_var);
		bool L_38 = Input_GetButtonDown_m2792523731(NULL /*static, unused*/, _stringLiteral2358390244, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_012f;
		}
	}
	{
		GameManager_t2252321495 * L_39 = ((GameManager_t2252321495_StaticFields*)GameManager_t2252321495_il2cpp_TypeInfo_var->static_fields)->get_gm_2();
		bool L_40 = GameManager_getInMenu_m2016446078(L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_012f;
		}
	}
	{
		GameManager_t2252321495 * L_41 = ((GameManager_t2252321495_StaticFields*)GameManager_t2252321495_il2cpp_TypeInfo_var->static_fields)->get_gm_2();
		GameManager_hideMenus_m1848627860(L_41, /*hidden argument*/NULL);
		GameManager_t2252321495 * L_42 = ((GameManager_t2252321495_StaticFields*)GameManager_t2252321495_il2cpp_TypeInfo_var->static_fields)->get_gm_2();
		GameManager_UnpauseGame_m1200172345(L_42, /*hidden argument*/NULL);
	}

IL_012f:
	{
		GameManager_t2252321495 * L_43 = ((GameManager_t2252321495_StaticFields*)GameManager_t2252321495_il2cpp_TypeInfo_var->static_fields)->get_gm_2();
		bool L_44 = GameManager_getInMenu_m2016446078(L_43, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_014b;
		}
	}
	{
		CharacterController_t2983510512 * L_45 = __this->get_myController_4();
		Vector3_t465617797  L_46 = V_3;
		CharacterController_Move_m3456882757(L_45, L_46, /*hidden argument*/NULL);
	}

IL_014b:
	{
		return;
	}
}
// System.Void DisplayInfo::.ctor()
extern "C"  void DisplayInfo__ctor_m4125496807 (DisplayInfo_t2803287754 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DisplayInfo::OnCollisionEnter(UnityEngine.Collision)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* GameManager_t2252321495_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1736259269;
extern const uint32_t DisplayInfo_OnCollisionEnter_m1781355021_MetadataUsageId;
extern "C"  void DisplayInfo_OnCollisionEnter_m1781355021 (DisplayInfo_t2803287754 * __this, Collision_t2353869345 * ___newCollision0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (DisplayInfo_OnCollisionEnter_m1781355021_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collision_t2353869345 * L_0 = ___newCollision0;
		GameObject_t1366199518 * L_1 = Collision_get_gameObject_m1370363400(L_0, /*hidden argument*/NULL);
		String_t* L_2 = GameObject_get_tag_m1425941094(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_2, _stringLiteral1736259269, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		GameManager_t2252321495 * L_4 = ((GameManager_t2252321495_StaticFields*)GameManager_t2252321495_il2cpp_TypeInfo_var->static_fields)->get_gm_2();
		bool L_5 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		GameManager_t2252321495 * L_6 = ((GameManager_t2252321495_StaticFields*)GameManager_t2252321495_il2cpp_TypeInfo_var->static_fields)->get_gm_2();
		String_t* L_7 = __this->get_name_2();
		float L_8 = __this->get_radiusInfo_3();
		double L_9 = __this->get_distanceInfo_4();
		GameManager_targetHit_m1993828071(L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
	}

IL_0045:
	{
		Collision_t2353869345 * L_10 = ___newCollision0;
		GameObject_t1366199518 * L_11 = Collision_get_gameObject_m1370363400(L_10, /*hidden argument*/NULL);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m293624896 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameManager::getInMenu()
extern "C"  bool GameManager_getInMenu_m2016446078 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get__inMenu_8();
		return L_0;
	}
}
// System.Void GameManager::setInMenu(System.Boolean)
extern "C"  void GameManager_setInMenu_m1195781867 (GameManager_t2252321495 * __this, bool ___value0, const MethodInfo* method)
{
	{
		bool L_0 = ___value0;
		__this->set__inMenu_8(L_0);
		return;
	}
}
// System.Void GameManager::Start()
extern Il2CppClass* GameManager_t2252321495_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisGameManager_t2252321495_m190008436_MethodInfo_var;
extern const uint32_t GameManager_Start_m2655388892_MetadataUsageId;
extern "C"  void GameManager_Start_m2655388892 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Start_m2655388892_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameManager_t2252321495 * L_0 = ((GameManager_t2252321495_StaticFields*)GameManager_t2252321495_il2cpp_TypeInfo_var->static_fields)->get_gm_2();
		bool L_1 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_0, (Object_t1181371020 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		GameObject_t1366199518 * L_2 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		GameManager_t2252321495 * L_3 = GameObject_GetComponent_TisGameManager_t2252321495_m190008436(L_2, /*hidden argument*/GameObject_GetComponent_TisGameManager_t2252321495_m190008436_MethodInfo_var);
		((GameManager_t2252321495_StaticFields*)GameManager_t2252321495_il2cpp_TypeInfo_var->static_fields)->set_gm_2(L_3);
	}

IL_0020:
	{
		return;
	}
}
// System.Void GameManager::Update()
extern "C"  void GameManager_Update_m969954595 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GameManager::targetHit(System.String,System.Single,System.Double)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3471964814;
extern const uint32_t GameManager_targetHit_m1993828071_MetadataUsageId;
extern "C"  void GameManager_targetHit_m1993828071 (GameManager_t2252321495 * __this, String_t* ___name0, float ___radius1, double ___distance2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManager_targetHit_m1993828071_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t3921196294 * L_0 = __this->get_nameDisplay_3();
		String_t* L_1 = ___name0;
		VirtActionInvoker1< String_t* >::Invoke(65 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		Text_t3921196294 * L_2 = __this->get_radiusDisplay_4();
		String_t* L_3 = Single_ToString_m1813392066((&___radius1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m2596409543(NULL /*static, unused*/, L_3, _stringLiteral3471964814, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(65 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		Text_t3921196294 * L_5 = __this->get_distanceDisplay_5();
		String_t* L_6 = Double_ToString_m1864290157((&___distance2), /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_m2596409543(NULL /*static, unused*/, L_6, _stringLiteral3471964814, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(65 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
		return;
	}
}
// System.Void GameManager::RestartGame()
extern "C"  void GameManager_RestartGame_m1828089451 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	{
		Application_LoadLevel_m3450161284(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::showMenu(System.Int32)
extern "C"  void GameManager_showMenu_m3482130167 (GameManager_t2252321495 * __this, int32_t ___menuToShow0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___menuToShow0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0043;
	}

IL_0015:
	{
		GameManager_hideMenus_m1848627860(__this, /*hidden argument*/NULL);
		GameObject_t1366199518 * L_3 = __this->get_Instructions_7();
		GameObject_SetActive_m2887581199(L_3, (bool)1, /*hidden argument*/NULL);
		goto IL_004e;
	}

IL_002c:
	{
		GameManager_hideMenus_m1848627860(__this, /*hidden argument*/NULL);
		GameObject_t1366199518 * L_4 = __this->get_Credits_6();
		GameObject_SetActive_m2887581199(L_4, (bool)1, /*hidden argument*/NULL);
		goto IL_004e;
	}

IL_0043:
	{
		GameManager_hideMenus_m1848627860(__this, /*hidden argument*/NULL);
		goto IL_004e;
	}

IL_004e:
	{
		return;
	}
}
// System.Void GameManager::hideMenus()
extern "C"  void GameManager_hideMenus_m1848627860 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	{
		GameObject_t1366199518 * L_0 = __this->get_Instructions_7();
		GameObject_SetActive_m2887581199(L_0, (bool)0, /*hidden argument*/NULL);
		GameObject_t1366199518 * L_1 = __this->get_Credits_6();
		GameObject_SetActive_m2887581199(L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::PauseGame()
extern "C"  void GameManager_PauseGame_m1634217600 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	{
		Time_set_timeScale_m2194722837(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		GameManager_setInMenu_m1195781867(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::UnpauseGame()
extern "C"  void GameManager_UnpauseGame_m1200172345 (GameManager_t2252321495 * __this, const MethodInfo* method)
{
	{
		GameManager_setInMenu_m1195781867(__this, (bool)0, /*hidden argument*/NULL);
		Time_set_timeScale_m2194722837(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void LookAtTarget::.ctor()
extern "C"  void LookAtTarget__ctor_m1782423158 (LookAtTarget_t512724305 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LookAtTarget::Start()
extern Il2CppClass* LookAtTarget_t512724305_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t12548584_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3391206956;
extern const uint32_t LookAtTarget_Start_m3161776094_MetadataUsageId;
extern "C"  void LookAtTarget_Start_m3161776094 (LookAtTarget_t512724305 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (LookAtTarget_Start_m3161776094_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t1366199518 * L_0 = ((LookAtTarget_t512724305_StaticFields*)LookAtTarget_t512724305_il2cpp_TypeInfo_var->static_fields)->get_target_2();
		bool L_1 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_0, (Object_t1181371020 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		GameObject_t1366199518 * L_2 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		((LookAtTarget_t512724305_StaticFields*)LookAtTarget_t512724305_il2cpp_TypeInfo_var->static_fields)->set_target_2(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t12548584_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral3391206956, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void LookAtTarget::Update()
extern Il2CppClass* LookAtTarget_t512724305_il2cpp_TypeInfo_var;
extern const uint32_t LookAtTarget_Update_m1314782069_MetadataUsageId;
extern "C"  void LookAtTarget_Update_m1314782069 (LookAtTarget_t512724305 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (LookAtTarget_Update_m1314782069_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t1366199518 * L_0 = ((LookAtTarget_t512724305_StaticFields*)LookAtTarget_t512724305_il2cpp_TypeInfo_var->static_fields)->get_target_2();
		bool L_1 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Transform_t224878301 * L_2 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		GameObject_t1366199518 * L_3 = ((LookAtTarget_t512724305_StaticFields*)LookAtTarget_t512724305_il2cpp_TypeInfo_var->static_fields)->get_target_2();
		Transform_t224878301 * L_4 = GameObject_get_transform_m909382139(L_3, /*hidden argument*/NULL);
		Transform_LookAt_m2514033256(L_2, L_4, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void MouseLooker::.ctor()
extern "C"  void MouseLooker__ctor_m1372322462 (MouseLooker_t3832072371 * __this, const MethodInfo* method)
{
	{
		__this->set_XSensitivity_2((2.0f));
		__this->set_YSensitivity_3((2.0f));
		__this->set_clampVerticalRotation_4((bool)1);
		__this->set_MinimumX_5((-90.0f));
		__this->set_MaximumX_6((90.0f));
		__this->set_smoothTime_8((5.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseLooker::Start()
extern "C"  void MouseLooker_Start_m4216777146 (MouseLooker_t3832072371 * __this, const MethodInfo* method)
{
	{
		MouseLooker_LockCursor_m886230828(__this, (bool)1, /*hidden argument*/NULL);
		GameObject_t1366199518 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t224878301 * L_1 = GameObject_get_transform_m909382139(L_0, /*hidden argument*/NULL);
		__this->set_character_11(L_1);
		Camera_t2805735124 * L_2 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t224878301 * L_3 = Component_get_transform_m2697483695(L_2, /*hidden argument*/NULL);
		__this->set_cameraTransform_12(L_3);
		Transform_t224878301 * L_4 = __this->get_character_11();
		Quaternion_t83606849  L_5 = Transform_get_localRotation_m4001487205(L_4, /*hidden argument*/NULL);
		__this->set_m_CharacterTargetRot_9(L_5);
		Transform_t224878301 * L_6 = __this->get_cameraTransform_12();
		Quaternion_t83606849  L_7 = Transform_get_localRotation_m4001487205(L_6, /*hidden argument*/NULL);
		__this->set_m_CameraTargetRot_10(L_7);
		return;
	}
}
// System.Void MouseLooker::Update()
extern Il2CppClass* Input_t4173266137_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2358390244;
extern Il2CppCodeGenString* _stringLiteral3645101709;
extern const uint32_t MouseLooker_Update_m3524100883_MetadataUsageId;
extern "C"  void MouseLooker_Update_m3524100883 (MouseLooker_t3832072371 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MouseLooker_Update_m3524100883_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseLooker_LookRotation_m3803574813(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4173266137_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetButtonDown_m2792523731(NULL /*static, unused*/, _stringLiteral2358390244, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		MouseLooker_LockCursor_m886230828(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4173266137_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButtonDown_m2792523731(NULL /*static, unused*/, _stringLiteral3645101709, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		MouseLooker_LockCursor_m886230828(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void MouseLooker::LockCursor(System.Boolean)
extern "C"  void MouseLooker_LockCursor_m886230828 (MouseLooker_t3832072371 * __this, bool ___isLocked0, const MethodInfo* method)
{
	{
		bool L_0 = ___isLocked0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Cursor_set_visible_m860533511(NULL /*static, unused*/, (bool)0, /*hidden argument*/NULL);
		Cursor_set_lockState_m387168319(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		goto IL_0023;
	}

IL_0017:
	{
		Cursor_set_visible_m860533511(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
		Cursor_set_lockState_m387168319(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void MouseLooker::LookRotation()
extern Il2CppClass* Input_t4173266137_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1307534077;
extern Il2CppCodeGenString* _stringLiteral1307534078;
extern const uint32_t MouseLooker_LookRotation_m3803574813_MetadataUsageId;
extern "C"  void MouseLooker_LookRotation_m3803574813 (MouseLooker_t3832072371 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MouseLooker_LookRotation_m3803574813_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4173266137_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1307534077, /*hidden argument*/NULL);
		float L_1 = __this->get_XSensitivity_2();
		V_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1307534078, /*hidden argument*/NULL);
		float L_3 = __this->get_YSensitivity_3();
		V_1 = ((float)((float)L_2*(float)L_3));
		Quaternion_t83606849  L_4 = __this->get_m_CharacterTargetRot_9();
		float L_5 = V_0;
		Quaternion_t83606849  L_6 = Quaternion_Euler_m2887458175(NULL /*static, unused*/, (0.0f), L_5, (0.0f), /*hidden argument*/NULL);
		Quaternion_t83606849  L_7 = Quaternion_op_Multiply_m2426727589(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		__this->set_m_CharacterTargetRot_9(L_7);
		Quaternion_t83606849  L_8 = __this->get_m_CameraTargetRot_10();
		float L_9 = V_1;
		Quaternion_t83606849  L_10 = Quaternion_Euler_m2887458175(NULL /*static, unused*/, ((-L_9)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t83606849  L_11 = Quaternion_op_Multiply_m2426727589(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		__this->set_m_CameraTargetRot_10(L_11);
		bool L_12 = __this->get_clampVerticalRotation_4();
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		Quaternion_t83606849  L_13 = __this->get_m_CameraTargetRot_10();
		Quaternion_t83606849  L_14 = MouseLooker_ClampRotationAroundXAxis_m180921578(__this, L_13, /*hidden argument*/NULL);
		__this->set_m_CameraTargetRot_10(L_14);
	}

IL_0084:
	{
		bool L_15 = __this->get_smooth_7();
		if (!L_15)
		{
			goto IL_00ee;
		}
	}
	{
		Transform_t224878301 * L_16 = __this->get_character_11();
		Transform_t224878301 * L_17 = __this->get_character_11();
		Quaternion_t83606849  L_18 = Transform_get_localRotation_m4001487205(L_17, /*hidden argument*/NULL);
		Quaternion_t83606849  L_19 = __this->get_m_CharacterTargetRot_9();
		float L_20 = __this->get_smoothTime_8();
		float L_21 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t83606849  L_22 = Quaternion_Slerp_m1992855400(NULL /*static, unused*/, L_18, L_19, ((float)((float)L_20*(float)L_21)), /*hidden argument*/NULL);
		Transform_set_localRotation_m2055111962(L_16, L_22, /*hidden argument*/NULL);
		Transform_t224878301 * L_23 = __this->get_cameraTransform_12();
		Transform_t224878301 * L_24 = __this->get_cameraTransform_12();
		Quaternion_t83606849  L_25 = Transform_get_localRotation_m4001487205(L_24, /*hidden argument*/NULL);
		Quaternion_t83606849  L_26 = __this->get_m_CameraTargetRot_10();
		float L_27 = __this->get_smoothTime_8();
		float L_28 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t83606849  L_29 = Quaternion_Slerp_m1992855400(NULL /*static, unused*/, L_25, L_26, ((float)((float)L_27*(float)L_28)), /*hidden argument*/NULL);
		Transform_set_localRotation_m2055111962(L_23, L_29, /*hidden argument*/NULL);
		goto IL_0110;
	}

IL_00ee:
	{
		Transform_t224878301 * L_30 = __this->get_character_11();
		Quaternion_t83606849  L_31 = __this->get_m_CharacterTargetRot_9();
		Transform_set_localRotation_m2055111962(L_30, L_31, /*hidden argument*/NULL);
		Transform_t224878301 * L_32 = __this->get_cameraTransform_12();
		Quaternion_t83606849  L_33 = __this->get_m_CameraTargetRot_10();
		Transform_set_localRotation_m2055111962(L_32, L_33, /*hidden argument*/NULL);
	}

IL_0110:
	{
		return;
	}
}
// UnityEngine.Quaternion MouseLooker::ClampRotationAroundXAxis(UnityEngine.Quaternion)
extern Il2CppClass* Mathf_t1692945841_il2cpp_TypeInfo_var;
extern const uint32_t MouseLooker_ClampRotationAroundXAxis_m180921578_MetadataUsageId;
extern "C"  Quaternion_t83606849  MouseLooker_ClampRotationAroundXAxis_m180921578 (MouseLooker_t3832072371 * __this, Quaternion_t83606849  ___q0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MouseLooker_ClampRotationAroundXAxis_m180921578_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		Quaternion_t83606849 * L_0 = (&___q0);
		float L_1 = L_0->get_x_1();
		float L_2 = (&___q0)->get_w_4();
		L_0->set_x_1(((float)((float)L_1/(float)L_2)));
		Quaternion_t83606849 * L_3 = (&___q0);
		float L_4 = L_3->get_y_2();
		float L_5 = (&___q0)->get_w_4();
		L_3->set_y_2(((float)((float)L_4/(float)L_5)));
		Quaternion_t83606849 * L_6 = (&___q0);
		float L_7 = L_6->get_z_3();
		float L_8 = (&___q0)->get_w_4();
		L_6->set_z_3(((float)((float)L_7/(float)L_8)));
		(&___q0)->set_w_4((1.0f));
		float L_9 = (&___q0)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1692945841_il2cpp_TypeInfo_var);
		float L_10 = atanf(L_9);
		V_0 = ((float)((float)(114.59156f)*(float)L_10));
		float L_11 = V_0;
		float L_12 = __this->get_MinimumX_5();
		float L_13 = __this->get_MaximumX_6();
		float L_14 = Mathf_Clamp_m2354025655(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		float L_15 = V_0;
		float L_16 = tanf(((float)((float)(0.008726646f)*(float)L_15)));
		(&___q0)->set_x_1(L_16);
		Quaternion_t83606849  L_17 = ___q0;
		return L_17;
	}
}
// System.Void RotateAround::.ctor()
extern "C"  void RotateAround__ctor_m3848628785 (RotateAround_t1439248898 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RotateAround::Start()
extern Il2CppClass* Debug_t12548584_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2963616993;
extern const uint32_t RotateAround_Start_m4102343553_MetadataUsageId;
extern "C"  void RotateAround_Start_m4102343553 (RotateAround_t1439248898 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (RotateAround_Start_m4102343553_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t224878301 * L_0 = __this->get_target_2();
		bool L_1 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_0, (Object_t1181371020 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		GameObject_t1366199518 * L_2 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t224878301 * L_3 = GameObject_get_transform_m909382139(L_2, /*hidden argument*/NULL);
		__this->set_target_2(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t12548584_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral2963616993, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void RotateAround::Update()
extern "C"  void RotateAround_Update_m1401790080 (RotateAround_t1439248898 * __this, const MethodInfo* method)
{
	{
		Transform_t224878301 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t224878301 * L_1 = __this->get_target_2();
		Transform_t224878301 * L_2 = Component_get_transform_m2697483695(L_1, /*hidden argument*/NULL);
		Vector3_t465617797  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		Transform_t224878301 * L_4 = __this->get_target_2();
		Transform_t224878301 * L_5 = Component_get_transform_m2697483695(L_4, /*hidden argument*/NULL);
		Vector3_t465617797  L_6 = Transform_get_up_m1603627763(L_5, /*hidden argument*/NULL);
		float L_7 = __this->get_speed_3();
		float L_8 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_RotateAround_m3410686872(L_0, L_3, L_6, ((float)((float)L_7*(float)L_8)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Shooter::.ctor()
extern "C"  void Shooter__ctor_m2111854087 (Shooter_t3051933708 * __this, const MethodInfo* method)
{
	{
		__this->set_power_3((10.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Shooter::Start()
extern Il2CppClass* GameObject_t1366199518_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3704508660;
extern const uint32_t Shooter_Start_m3434910611_MetadataUsageId;
extern "C"  void Shooter_Start_m3434910611 (Shooter_t3051933708 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Shooter_Start_m3434910611_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t1366199518 * L_0 = (GameObject_t1366199518 *)il2cpp_codegen_object_new(GameObject_t1366199518_il2cpp_TypeInfo_var);
		GameObject__ctor_m962601984(L_0, _stringLiteral3704508660, /*hidden argument*/NULL);
		__this->set_playerBullets_4(L_0);
		return;
	}
}
// System.Void Shooter::Update()
extern Il2CppClass* Input_t4173266137_il2cpp_TypeInfo_var;
extern Il2CppClass* GameManager_t2252321495_il2cpp_TypeInfo_var;
extern Il2CppClass* GameObject_t1366199518_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody_t1071364940_m1060888193_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisRigidbody_t1071364940_m2571400210_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisAudioSource_t585923902_m3309832039_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3645101709;
extern Il2CppCodeGenString* _stringLiteral842948034;
extern const uint32_t Shooter_Update_m3198244586_MetadataUsageId;
extern "C"  void Shooter_Update_m3198244586 (Shooter_t3051933708 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Shooter_Update_m3198244586_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t1366199518 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4173266137_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetButtonDown_m2792523731(NULL /*static, unused*/, _stringLiteral3645101709, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4173266137_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButtonDown_m2792523731(NULL /*static, unused*/, _stringLiteral842948034, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0104;
		}
	}

IL_001e:
	{
		GameObject_t1366199518 * L_2 = __this->get_projectile_2();
		bool L_3 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0104;
		}
	}
	{
		GameManager_t2252321495 * L_4 = ((GameManager_t2252321495_StaticFields*)GameManager_t2252321495_il2cpp_TypeInfo_var->static_fields)->get_gm_2();
		bool L_5 = GameManager_getInMenu_m2016446078(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0104;
		}
	}
	{
		GameObject_t1366199518 * L_6 = __this->get_projectile_2();
		Transform_t224878301 * L_7 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t465617797  L_8 = Transform_get_position_m1104419803(L_7, /*hidden argument*/NULL);
		Transform_t224878301 * L_9 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t465617797  L_10 = Transform_get_forward_m1833488937(L_9, /*hidden argument*/NULL);
		Vector3_t465617797  L_11 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		Transform_t224878301 * L_12 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Quaternion_t83606849  L_13 = Transform_get_rotation_m1033555130(L_12, /*hidden argument*/NULL);
		Object_t1181371020 * L_14 = Object_Instantiate_m938141395(NULL /*static, unused*/, L_6, L_11, L_13, /*hidden argument*/NULL);
		V_0 = ((GameObject_t1366199518 *)IsInstSealed(L_14, GameObject_t1366199518_il2cpp_TypeInfo_var));
		GameObject_t1366199518 * L_15 = __this->get_playerBullets_4();
		bool L_16 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		GameObject_t1366199518 * L_17 = V_0;
		Transform_t224878301 * L_18 = GameObject_get_transform_m909382139(L_17, /*hidden argument*/NULL);
		GameObject_t1366199518 * L_19 = __this->get_playerBullets_4();
		Transform_t224878301 * L_20 = GameObject_get_transform_m909382139(L_19, /*hidden argument*/NULL);
		Transform_SetParent_m4124909910(L_18, L_20, /*hidden argument*/NULL);
	}

IL_009a:
	{
		GameObject_t1366199518 * L_21 = V_0;
		Rigidbody_t1071364940 * L_22 = GameObject_GetComponent_TisRigidbody_t1071364940_m1060888193(L_21, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t1071364940_m1060888193_MethodInfo_var);
		bool L_23 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00b1;
		}
	}
	{
		GameObject_t1366199518 * L_24 = V_0;
		GameObject_AddComponent_TisRigidbody_t1071364940_m2571400210(L_24, /*hidden argument*/GameObject_AddComponent_TisRigidbody_t1071364940_m2571400210_MethodInfo_var);
	}

IL_00b1:
	{
		GameObject_t1366199518 * L_25 = V_0;
		Rigidbody_t1071364940 * L_26 = GameObject_GetComponent_TisRigidbody_t1071364940_m1060888193(L_25, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t1071364940_m1060888193_MethodInfo_var);
		Transform_t224878301 * L_27 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t465617797  L_28 = Transform_get_forward_m1833488937(L_27, /*hidden argument*/NULL);
		float L_29 = __this->get_power_3();
		Vector3_t465617797  L_30 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		Rigidbody_AddForce_m3219459786(L_26, L_30, 2, /*hidden argument*/NULL);
		AudioClip_t3927647597 * L_31 = __this->get_shootSFX_5();
		bool L_32 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0104;
		}
	}
	{
		GameObject_t1366199518 * L_33 = V_0;
		AudioSource_t585923902 * L_34 = GameObject_GetComponent_TisAudioSource_t585923902_m3309832039(L_33, /*hidden argument*/GameObject_GetComponent_TisAudioSource_t585923902_m3309832039_MethodInfo_var);
		bool L_35 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0104;
		}
	}
	{
		GameObject_t1366199518 * L_36 = V_0;
		AudioSource_t585923902 * L_37 = GameObject_GetComponent_TisAudioSource_t585923902_m3309832039(L_36, /*hidden argument*/GameObject_GetComponent_TisAudioSource_t585923902_m3309832039_MethodInfo_var);
		AudioClip_t3927647597 * L_38 = __this->get_shootSFX_5();
		AudioSource_PlayOneShot_m286472761(L_37, L_38, /*hidden argument*/NULL);
	}

IL_0104:
	{
		return;
	}
}
// System.Void TimedObjectDestructor::.ctor()
extern "C"  void TimedObjectDestructor__ctor_m1281788410 (TimedObjectDestructor_t3793803729 * __this, const MethodInfo* method)
{
	{
		__this->set_timeOut_2((1.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimedObjectDestructor::Awake()
extern Il2CppCodeGenString* _stringLiteral3022628064;
extern const uint32_t TimedObjectDestructor_Awake_m3826250289_MetadataUsageId;
extern "C"  void TimedObjectDestructor_Awake_m3826250289 (TimedObjectDestructor_t3793803729 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TimedObjectDestructor_Awake_m3826250289_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = __this->get_timeOut_2();
		MonoBehaviour_Invoke_m666563676(__this, _stringLiteral3022628064, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimedObjectDestructor::DestroyNow()
extern "C"  void TimedObjectDestructor_DestroyNow_m2242008382 (TimedObjectDestructor_t3793803729 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_detachChildren_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transform_t224878301 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_DetachChildren_m2873894053(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		GameObject_t1366199518 * L_2 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
