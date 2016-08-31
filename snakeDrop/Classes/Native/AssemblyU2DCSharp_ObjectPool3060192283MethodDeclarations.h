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

// ObjectPool
struct ObjectPool_t3060192283;
// PooledObject
struct PooledObject_t2710534394;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PooledObject2710534394.h"

// System.Void ObjectPool::.ctor()
extern "C"  void ObjectPool__ctor_m1301426912 (ObjectPool_t3060192283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectPool ObjectPool::GetPool(PooledObject)
extern "C"  ObjectPool_t3060192283 * ObjectPool_GetPool_m3503728148 (Il2CppObject * __this /* static, unused */, PooledObject_t2710534394 * ___prefab0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PooledObject ObjectPool::GetObject()
extern "C"  PooledObject_t2710534394 * ObjectPool_GetObject_m1413673616 (ObjectPool_t3060192283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPool::AddObject(PooledObject)
extern "C"  void ObjectPool_AddObject_m2124200836 (ObjectPool_t3060192283 * __this, PooledObject_t2710534394 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
