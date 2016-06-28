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

// GameManager
struct GameManager_t2252321495;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"

// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m293624896 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameManager::getInMenu()
extern "C"  bool GameManager_getInMenu_m2016446078 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::setInMenu(System.Boolean)
extern "C"  void GameManager_setInMenu_m1195781867 (GameManager_t2252321495 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Start()
extern "C"  void GameManager_Start_m2655388892 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Update()
extern "C"  void GameManager_Update_m969954595 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::targetHit(System.String,System.Single,System.Double)
extern "C"  void GameManager_targetHit_m1993828071 (GameManager_t2252321495 * __this, String_t* ___name0, float ___radius1, double ___distance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::RestartGame()
extern "C"  void GameManager_RestartGame_m1828089451 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::showMenu(System.Int32)
extern "C"  void GameManager_showMenu_m3482130167 (GameManager_t2252321495 * __this, int32_t ___menuToShow0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::hideMenus()
extern "C"  void GameManager_hideMenus_m1848627860 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::PauseGame()
extern "C"  void GameManager_PauseGame_m1634217600 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::UnpauseGame()
extern "C"  void GameManager_UnpauseGame_m1200172345 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
