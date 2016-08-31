#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PooledObject
struct PooledObject_t2710534394;
// System.Collections.Generic.List`1<PooledObject>
struct List_1_t3507493363;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectPool
struct  ObjectPool_t3060192283  : public MonoBehaviour_t3012272455
{
public:
	// PooledObject ObjectPool::prefab
	PooledObject_t2710534394 * ___prefab_2;
	// System.Collections.Generic.List`1<PooledObject> ObjectPool::availableObjects
	List_1_t3507493363 * ___availableObjects_3;

public:
	inline static int32_t get_offset_of_prefab_2() { return static_cast<int32_t>(offsetof(ObjectPool_t3060192283, ___prefab_2)); }
	inline PooledObject_t2710534394 * get_prefab_2() const { return ___prefab_2; }
	inline PooledObject_t2710534394 ** get_address_of_prefab_2() { return &___prefab_2; }
	inline void set_prefab_2(PooledObject_t2710534394 * value)
	{
		___prefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_2, value);
	}

	inline static int32_t get_offset_of_availableObjects_3() { return static_cast<int32_t>(offsetof(ObjectPool_t3060192283, ___availableObjects_3)); }
	inline List_1_t3507493363 * get_availableObjects_3() const { return ___availableObjects_3; }
	inline List_1_t3507493363 ** get_address_of_availableObjects_3() { return &___availableObjects_3; }
	inline void set_availableObjects_3(List_1_t3507493363 * value)
	{
		___availableObjects_3 = value;
		Il2CppCodeGenWriteBarrier(&___availableObjects_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
