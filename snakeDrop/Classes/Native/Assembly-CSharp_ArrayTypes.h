#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// PooledObject
struct PooledObject_t2710534394;
// Tile
struct Tile_t2606798;

#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_PooledObject2710534394.h"
#include "AssemblyU2DCSharp_Tile2606798.h"

#pragma once
// PooledObject[]
struct PooledObjectU5BU5D_t2087629279  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) PooledObject_t2710534394 * m_Items[1];

public:
	inline PooledObject_t2710534394 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline PooledObject_t2710534394 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, PooledObject_t2710534394 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Tile[]
struct TileU5BU5D_t4211174971  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Tile_t2606798 * m_Items[1];

public:
	inline Tile_t2606798 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Tile_t2606798 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Tile_t2606798 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
