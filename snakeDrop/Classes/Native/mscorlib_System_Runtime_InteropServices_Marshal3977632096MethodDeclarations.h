﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Array
struct Il2CppArray;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.Runtime.InteropServices.Marshal::.cctor()
extern "C"  void Marshal__cctor_m156400721 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
extern "C"  void Marshal_copy_from_unmanaged_m1711077603 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source0, int32_t ___startIndex1, Il2CppArray * ___destination2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m1690250234 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source0, ByteU5BU5D_t58506160* ___destination1, int32_t ___startIndex2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m1390445676 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source0, CharU5BU5D_t3416858730* ___destination1, int32_t ___startIndex2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr,System.Int32)
extern "C"  uint8_t Marshal_ReadByte_m3705434677 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, int32_t ___ofs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
extern "C"  int32_t Marshal_SizeOf_m1295785213 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::WriteByte(System.IntPtr,System.Int32,System.Byte)
extern "C"  void Marshal_WriteByte_m4239949353 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, int32_t ___ofs1, uint8_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
