#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MouseLooker
struct MouseLooker_t3832072371;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion83606849.h"

// System.Void MouseLooker::.ctor()
extern "C"  void MouseLooker__ctor_m1372322462 (MouseLooker_t3832072371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseLooker::Start()
extern "C"  void MouseLooker_Start_m4216777146 (MouseLooker_t3832072371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseLooker::Update()
extern "C"  void MouseLooker_Update_m3524100883 (MouseLooker_t3832072371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseLooker::LockCursor(System.Boolean)
extern "C"  void MouseLooker_LockCursor_m886230828 (MouseLooker_t3832072371 * __this, bool ___isLocked0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseLooker::LookRotation()
extern "C"  void MouseLooker_LookRotation_m3803574813 (MouseLooker_t3832072371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion MouseLooker::ClampRotationAroundXAxis(UnityEngine.Quaternion)
extern "C"  Quaternion_t83606849  MouseLooker_ClampRotationAroundXAxis_m180921578 (MouseLooker_t3832072371 * __this, Quaternion_t83606849  ___q0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
