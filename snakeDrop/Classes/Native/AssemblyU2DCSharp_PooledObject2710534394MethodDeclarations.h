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

// PooledObject
struct PooledObject_t2710534394;
// ObjectPool
struct ObjectPool_t3060192283;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ObjectPool3060192283.h"

// System.Void PooledObject::.ctor()
extern "C"  void PooledObject__ctor_m869790433 (PooledObject_t2710534394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectPool PooledObject::get_Pool()
extern "C"  ObjectPool_t3060192283 * PooledObject_get_Pool_m2003797034 (PooledObject_t2710534394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PooledObject::set_Pool(ObjectPool)
extern "C"  void PooledObject_set_Pool_m3489764449 (PooledObject_t2710534394 * __this, ObjectPool_t3060192283 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PooledObject::ReturnToPool()
extern "C"  void PooledObject_ReturnToPool_m3747568906 (PooledObject_t2710534394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
