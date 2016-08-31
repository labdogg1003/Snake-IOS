#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UIManager
struct UIManager_t1861242489;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_UIManager_UIState298534493.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIManager
struct  UIManager_t1861242489  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject UIManager::mainMenu
	GameObject_t4012695102 * ___mainMenu_2;
	// UnityEngine.GameObject UIManager::inGame
	GameObject_t4012695102 * ___inGame_3;
	// UnityEngine.GameObject UIManager::endScreen
	GameObject_t4012695102 * ___endScreen_4;
	// UIManager/UIState UIManager::gameState
	int32_t ___gameState_5;
	// UnityEngine.GameObject UIManager::mainCamera
	GameObject_t4012695102 * ___mainCamera_6;
	// UnityEngine.UI.Text UIManager::lblScore
	Text_t3286458198 * ___lblScore_7;

public:
	inline static int32_t get_offset_of_mainMenu_2() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___mainMenu_2)); }
	inline GameObject_t4012695102 * get_mainMenu_2() const { return ___mainMenu_2; }
	inline GameObject_t4012695102 ** get_address_of_mainMenu_2() { return &___mainMenu_2; }
	inline void set_mainMenu_2(GameObject_t4012695102 * value)
	{
		___mainMenu_2 = value;
		Il2CppCodeGenWriteBarrier(&___mainMenu_2, value);
	}

	inline static int32_t get_offset_of_inGame_3() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___inGame_3)); }
	inline GameObject_t4012695102 * get_inGame_3() const { return ___inGame_3; }
	inline GameObject_t4012695102 ** get_address_of_inGame_3() { return &___inGame_3; }
	inline void set_inGame_3(GameObject_t4012695102 * value)
	{
		___inGame_3 = value;
		Il2CppCodeGenWriteBarrier(&___inGame_3, value);
	}

	inline static int32_t get_offset_of_endScreen_4() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___endScreen_4)); }
	inline GameObject_t4012695102 * get_endScreen_4() const { return ___endScreen_4; }
	inline GameObject_t4012695102 ** get_address_of_endScreen_4() { return &___endScreen_4; }
	inline void set_endScreen_4(GameObject_t4012695102 * value)
	{
		___endScreen_4 = value;
		Il2CppCodeGenWriteBarrier(&___endScreen_4, value);
	}

	inline static int32_t get_offset_of_gameState_5() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___gameState_5)); }
	inline int32_t get_gameState_5() const { return ___gameState_5; }
	inline int32_t* get_address_of_gameState_5() { return &___gameState_5; }
	inline void set_gameState_5(int32_t value)
	{
		___gameState_5 = value;
	}

	inline static int32_t get_offset_of_mainCamera_6() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___mainCamera_6)); }
	inline GameObject_t4012695102 * get_mainCamera_6() const { return ___mainCamera_6; }
	inline GameObject_t4012695102 ** get_address_of_mainCamera_6() { return &___mainCamera_6; }
	inline void set_mainCamera_6(GameObject_t4012695102 * value)
	{
		___mainCamera_6 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_6, value);
	}

	inline static int32_t get_offset_of_lblScore_7() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___lblScore_7)); }
	inline Text_t3286458198 * get_lblScore_7() const { return ___lblScore_7; }
	inline Text_t3286458198 ** get_address_of_lblScore_7() { return &___lblScore_7; }
	inline void set_lblScore_7(Text_t3286458198 * value)
	{
		___lblScore_7 = value;
		Il2CppCodeGenWriteBarrier(&___lblScore_7, value);
	}
};

struct UIManager_t1861242489_StaticFields
{
public:
	// UIManager UIManager::<Instance>k__BackingField
	UIManager_t1861242489 * ___U3CInstanceU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(UIManager_t1861242489_StaticFields, ___U3CInstanceU3Ek__BackingField_8)); }
	inline UIManager_t1861242489 * get_U3CInstanceU3Ek__BackingField_8() const { return ___U3CInstanceU3Ek__BackingField_8; }
	inline UIManager_t1861242489 ** get_address_of_U3CInstanceU3Ek__BackingField_8() { return &___U3CInstanceU3Ek__BackingField_8; }
	inline void set_U3CInstanceU3Ek__BackingField_8(UIManager_t1861242489 * value)
	{
		___U3CInstanceU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInstanceU3Ek__BackingField_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
