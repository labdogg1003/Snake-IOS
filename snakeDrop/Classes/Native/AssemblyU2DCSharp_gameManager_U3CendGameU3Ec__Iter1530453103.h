﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// gameManager
struct gameManager_t701720411;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// gameManager/<endGame>c__Iterator3
struct  U3CendGameU3Ec__Iterator3_t1530453103  : public Il2CppObject
{
public:
	// System.Int32 gameManager/<endGame>c__Iterator3::$PC
	int32_t ___U24PC_0;
	// System.Object gameManager/<endGame>c__Iterator3::$current
	Il2CppObject * ___U24current_1;
	// gameManager gameManager/<endGame>c__Iterator3::<>f__this
	gameManager_t701720411 * ___U3CU3Ef__this_2;

public:
	inline static int32_t get_offset_of_U24PC_0() { return static_cast<int32_t>(offsetof(U3CendGameU3Ec__Iterator3_t1530453103, ___U24PC_0)); }
	inline int32_t get_U24PC_0() const { return ___U24PC_0; }
	inline int32_t* get_address_of_U24PC_0() { return &___U24PC_0; }
	inline void set_U24PC_0(int32_t value)
	{
		___U24PC_0 = value;
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CendGameU3Ec__Iterator3_t1530453103, ___U24current_1)); }
	inline Il2CppObject * get_U24current_1() const { return ___U24current_1; }
	inline Il2CppObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(Il2CppObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_2() { return static_cast<int32_t>(offsetof(U3CendGameU3Ec__Iterator3_t1530453103, ___U3CU3Ef__this_2)); }
	inline gameManager_t701720411 * get_U3CU3Ef__this_2() const { return ___U3CU3Ef__this_2; }
	inline gameManager_t701720411 ** get_address_of_U3CU3Ef__this_2() { return &___U3CU3Ef__this_2; }
	inline void set_U3CU3Ef__this_2(gameManager_t701720411 * value)
	{
		___U3CU3Ef__this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
