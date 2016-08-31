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

// gameManager
struct gameManager_t701720411;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_gameManager701720411.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void gameManager::.ctor()
extern "C"  void gameManager__ctor_m3914803824 (gameManager_t701720411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// gameManager gameManager::get_Instance()
extern "C"  gameManager_t701720411 * gameManager_get_Instance_m1060059930 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameManager::set_Instance(gameManager)
extern "C"  void gameManager_set_Instance_m2255177489 (Il2CppObject * __this /* static, unused */, gameManager_t701720411 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameManager::Awake()
extern "C"  void gameManager_Awake_m4152409043 (gameManager_t701720411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameManager::Start()
extern "C"  void gameManager_Start_m2861941616 (gameManager_t701720411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameManager::Update()
extern "C"  void gameManager_Update_m2826696349 (gameManager_t701720411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameManager::updateUI()
extern "C"  void gameManager_updateUI_m43768081 (gameManager_t701720411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameManager::increaseScore()
extern "C"  void gameManager_increaseScore_m3879389214 (gameManager_t701720411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameManager::SetTileSpeed()
extern "C"  void gameManager_SetTileSpeed_m2021669899 (gameManager_t701720411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameManager::respawnPellet(UnityEngine.GameObject)
extern "C"  void gameManager_respawnPellet_m2770669714 (gameManager_t701720411 * __this, GameObject_t4012695102 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator gameManager::endGame()
extern "C"  Il2CppObject * gameManager_endGame_m4069479651 (gameManager_t701720411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
