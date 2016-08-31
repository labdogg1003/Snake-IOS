#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;
// Tile[]
struct TileU5BU5D_t4211174971;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UIManager
struct UIManager_t1861242489;
// gameManager
struct gameManager_t701720411;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// gameManager
struct  gameManager_t701720411  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 gameManager::score
	int32_t ___score_2;
	// UnityEngine.UI.Text gameManager::txtScore
	Text_t3286458198 * ___txtScore_3;
	// Tile[] gameManager::tiles
	TileU5BU5D_t4211174971* ___tiles_4;
	// UnityEngine.GameObject gameManager::pellet
	GameObject_t4012695102 * ___pellet_5;
	// System.Single gameManager::seconds
	float ___seconds_6;
	// System.Single gameManager::minutes
	float ___minutes_7;
	// System.Single gameManager::hours
	float ___hours_8;
	// System.Boolean gameManager::died
	bool ___died_9;
	// UIManager gameManager::_uiManager
	UIManager_t1861242489 * ____uiManager_10;
	// UnityEngine.GameObject gameManager::endGameUI
	GameObject_t4012695102 * ___endGameUI_11;
	// UnityEngine.UI.Text gameManager::lblTime
	Text_t3286458198 * ___lblTime_12;
	// System.Int32 gameManager::targetFrameRate
	int32_t ___targetFrameRate_13;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___score_2)); }
	inline int32_t get_score_2() const { return ___score_2; }
	inline int32_t* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(int32_t value)
	{
		___score_2 = value;
	}

	inline static int32_t get_offset_of_txtScore_3() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___txtScore_3)); }
	inline Text_t3286458198 * get_txtScore_3() const { return ___txtScore_3; }
	inline Text_t3286458198 ** get_address_of_txtScore_3() { return &___txtScore_3; }
	inline void set_txtScore_3(Text_t3286458198 * value)
	{
		___txtScore_3 = value;
		Il2CppCodeGenWriteBarrier(&___txtScore_3, value);
	}

	inline static int32_t get_offset_of_tiles_4() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___tiles_4)); }
	inline TileU5BU5D_t4211174971* get_tiles_4() const { return ___tiles_4; }
	inline TileU5BU5D_t4211174971** get_address_of_tiles_4() { return &___tiles_4; }
	inline void set_tiles_4(TileU5BU5D_t4211174971* value)
	{
		___tiles_4 = value;
		Il2CppCodeGenWriteBarrier(&___tiles_4, value);
	}

	inline static int32_t get_offset_of_pellet_5() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___pellet_5)); }
	inline GameObject_t4012695102 * get_pellet_5() const { return ___pellet_5; }
	inline GameObject_t4012695102 ** get_address_of_pellet_5() { return &___pellet_5; }
	inline void set_pellet_5(GameObject_t4012695102 * value)
	{
		___pellet_5 = value;
		Il2CppCodeGenWriteBarrier(&___pellet_5, value);
	}

	inline static int32_t get_offset_of_seconds_6() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___seconds_6)); }
	inline float get_seconds_6() const { return ___seconds_6; }
	inline float* get_address_of_seconds_6() { return &___seconds_6; }
	inline void set_seconds_6(float value)
	{
		___seconds_6 = value;
	}

	inline static int32_t get_offset_of_minutes_7() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___minutes_7)); }
	inline float get_minutes_7() const { return ___minutes_7; }
	inline float* get_address_of_minutes_7() { return &___minutes_7; }
	inline void set_minutes_7(float value)
	{
		___minutes_7 = value;
	}

	inline static int32_t get_offset_of_hours_8() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___hours_8)); }
	inline float get_hours_8() const { return ___hours_8; }
	inline float* get_address_of_hours_8() { return &___hours_8; }
	inline void set_hours_8(float value)
	{
		___hours_8 = value;
	}

	inline static int32_t get_offset_of_died_9() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___died_9)); }
	inline bool get_died_9() const { return ___died_9; }
	inline bool* get_address_of_died_9() { return &___died_9; }
	inline void set_died_9(bool value)
	{
		___died_9 = value;
	}

	inline static int32_t get_offset_of__uiManager_10() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ____uiManager_10)); }
	inline UIManager_t1861242489 * get__uiManager_10() const { return ____uiManager_10; }
	inline UIManager_t1861242489 ** get_address_of__uiManager_10() { return &____uiManager_10; }
	inline void set__uiManager_10(UIManager_t1861242489 * value)
	{
		____uiManager_10 = value;
		Il2CppCodeGenWriteBarrier(&____uiManager_10, value);
	}

	inline static int32_t get_offset_of_endGameUI_11() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___endGameUI_11)); }
	inline GameObject_t4012695102 * get_endGameUI_11() const { return ___endGameUI_11; }
	inline GameObject_t4012695102 ** get_address_of_endGameUI_11() { return &___endGameUI_11; }
	inline void set_endGameUI_11(GameObject_t4012695102 * value)
	{
		___endGameUI_11 = value;
		Il2CppCodeGenWriteBarrier(&___endGameUI_11, value);
	}

	inline static int32_t get_offset_of_lblTime_12() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___lblTime_12)); }
	inline Text_t3286458198 * get_lblTime_12() const { return ___lblTime_12; }
	inline Text_t3286458198 ** get_address_of_lblTime_12() { return &___lblTime_12; }
	inline void set_lblTime_12(Text_t3286458198 * value)
	{
		___lblTime_12 = value;
		Il2CppCodeGenWriteBarrier(&___lblTime_12, value);
	}

	inline static int32_t get_offset_of_targetFrameRate_13() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___targetFrameRate_13)); }
	inline int32_t get_targetFrameRate_13() const { return ___targetFrameRate_13; }
	inline int32_t* get_address_of_targetFrameRate_13() { return &___targetFrameRate_13; }
	inline void set_targetFrameRate_13(int32_t value)
	{
		___targetFrameRate_13 = value;
	}
};

struct gameManager_t701720411_StaticFields
{
public:
	// gameManager gameManager::<Instance>k__BackingField
	gameManager_t701720411 * ___U3CInstanceU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(gameManager_t701720411_StaticFields, ___U3CInstanceU3Ek__BackingField_14)); }
	inline gameManager_t701720411 * get_U3CInstanceU3Ek__BackingField_14() const { return ___U3CInstanceU3Ek__BackingField_14; }
	inline gameManager_t701720411 ** get_address_of_U3CInstanceU3Ek__BackingField_14() { return &___U3CInstanceU3Ek__BackingField_14; }
	inline void set_U3CInstanceU3Ek__BackingField_14(gameManager_t701720411 * value)
	{
		___U3CInstanceU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInstanceU3Ek__BackingField_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
