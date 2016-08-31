#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_PooledObject2710534394.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Body
struct  Body_t2076098  : public PooledObject_t2710534394
{
public:
	// UnityEngine.Vector3 Body::lastKnownPosition
	Vector3_t3525329789  ___lastKnownPosition_4;

public:
	inline static int32_t get_offset_of_lastKnownPosition_4() { return static_cast<int32_t>(offsetof(Body_t2076098, ___lastKnownPosition_4)); }
	inline Vector3_t3525329789  get_lastKnownPosition_4() const { return ___lastKnownPosition_4; }
	inline Vector3_t3525329789 * get_address_of_lastKnownPosition_4() { return &___lastKnownPosition_4; }
	inline void set_lastKnownPosition_4(Vector3_t3525329789  value)
	{
		___lastKnownPosition_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
