#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ObjectPool
struct ObjectPool_t3060192283;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PooledObject
struct  PooledObject_t2710534394  : public MonoBehaviour_t3012272455
{
public:
	// ObjectPool PooledObject::poolInstanceForPrefab
	ObjectPool_t3060192283 * ___poolInstanceForPrefab_2;
	// ObjectPool PooledObject::<Pool>k__BackingField
	ObjectPool_t3060192283 * ___U3CPoolU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_poolInstanceForPrefab_2() { return static_cast<int32_t>(offsetof(PooledObject_t2710534394, ___poolInstanceForPrefab_2)); }
	inline ObjectPool_t3060192283 * get_poolInstanceForPrefab_2() const { return ___poolInstanceForPrefab_2; }
	inline ObjectPool_t3060192283 ** get_address_of_poolInstanceForPrefab_2() { return &___poolInstanceForPrefab_2; }
	inline void set_poolInstanceForPrefab_2(ObjectPool_t3060192283 * value)
	{
		___poolInstanceForPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___poolInstanceForPrefab_2, value);
	}

	inline static int32_t get_offset_of_U3CPoolU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PooledObject_t2710534394, ___U3CPoolU3Ek__BackingField_3)); }
	inline ObjectPool_t3060192283 * get_U3CPoolU3Ek__BackingField_3() const { return ___U3CPoolU3Ek__BackingField_3; }
	inline ObjectPool_t3060192283 ** get_address_of_U3CPoolU3Ek__BackingField_3() { return &___U3CPoolU3Ek__BackingField_3; }
	inline void set_U3CPoolU3Ek__BackingField_3(ObjectPool_t3060192283 * value)
	{
		___U3CPoolU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPoolU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
