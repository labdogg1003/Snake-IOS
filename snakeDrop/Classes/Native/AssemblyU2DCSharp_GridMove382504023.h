#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_GridMove_Orientation228367792.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GridMove
struct  GridMove_t382504023  : public MonoBehaviour_t3012272455
{
public:
	// System.Single GridMove::moveSpeed
	float ___moveSpeed_2;
	// System.Single GridMove::gridSize
	float ___gridSize_3;
	// GridMove/Orientation GridMove::gridOrientation
	int32_t ___gridOrientation_4;
	// System.Boolean GridMove::allowDiagonals
	bool ___allowDiagonals_5;
	// System.Boolean GridMove::correctDiagonalSpeed
	bool ___correctDiagonalSpeed_6;
	// UnityEngine.Vector2 GridMove::input
	Vector2_t3525329788  ___input_7;
	// System.Boolean GridMove::isMoving
	bool ___isMoving_8;
	// UnityEngine.Vector3 GridMove::startPosition
	Vector3_t3525329789  ___startPosition_9;
	// UnityEngine.Vector3 GridMove::endPosition
	Vector3_t3525329789  ___endPosition_10;
	// System.Single GridMove::t
	float ___t_11;
	// System.Single GridMove::factor
	float ___factor_12;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(GridMove_t382504023, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_gridSize_3() { return static_cast<int32_t>(offsetof(GridMove_t382504023, ___gridSize_3)); }
	inline float get_gridSize_3() const { return ___gridSize_3; }
	inline float* get_address_of_gridSize_3() { return &___gridSize_3; }
	inline void set_gridSize_3(float value)
	{
		___gridSize_3 = value;
	}

	inline static int32_t get_offset_of_gridOrientation_4() { return static_cast<int32_t>(offsetof(GridMove_t382504023, ___gridOrientation_4)); }
	inline int32_t get_gridOrientation_4() const { return ___gridOrientation_4; }
	inline int32_t* get_address_of_gridOrientation_4() { return &___gridOrientation_4; }
	inline void set_gridOrientation_4(int32_t value)
	{
		___gridOrientation_4 = value;
	}

	inline static int32_t get_offset_of_allowDiagonals_5() { return static_cast<int32_t>(offsetof(GridMove_t382504023, ___allowDiagonals_5)); }
	inline bool get_allowDiagonals_5() const { return ___allowDiagonals_5; }
	inline bool* get_address_of_allowDiagonals_5() { return &___allowDiagonals_5; }
	inline void set_allowDiagonals_5(bool value)
	{
		___allowDiagonals_5 = value;
	}

	inline static int32_t get_offset_of_correctDiagonalSpeed_6() { return static_cast<int32_t>(offsetof(GridMove_t382504023, ___correctDiagonalSpeed_6)); }
	inline bool get_correctDiagonalSpeed_6() const { return ___correctDiagonalSpeed_6; }
	inline bool* get_address_of_correctDiagonalSpeed_6() { return &___correctDiagonalSpeed_6; }
	inline void set_correctDiagonalSpeed_6(bool value)
	{
		___correctDiagonalSpeed_6 = value;
	}

	inline static int32_t get_offset_of_input_7() { return static_cast<int32_t>(offsetof(GridMove_t382504023, ___input_7)); }
	inline Vector2_t3525329788  get_input_7() const { return ___input_7; }
	inline Vector2_t3525329788 * get_address_of_input_7() { return &___input_7; }
	inline void set_input_7(Vector2_t3525329788  value)
	{
		___input_7 = value;
	}

	inline static int32_t get_offset_of_isMoving_8() { return static_cast<int32_t>(offsetof(GridMove_t382504023, ___isMoving_8)); }
	inline bool get_isMoving_8() const { return ___isMoving_8; }
	inline bool* get_address_of_isMoving_8() { return &___isMoving_8; }
	inline void set_isMoving_8(bool value)
	{
		___isMoving_8 = value;
	}

	inline static int32_t get_offset_of_startPosition_9() { return static_cast<int32_t>(offsetof(GridMove_t382504023, ___startPosition_9)); }
	inline Vector3_t3525329789  get_startPosition_9() const { return ___startPosition_9; }
	inline Vector3_t3525329789 * get_address_of_startPosition_9() { return &___startPosition_9; }
	inline void set_startPosition_9(Vector3_t3525329789  value)
	{
		___startPosition_9 = value;
	}

	inline static int32_t get_offset_of_endPosition_10() { return static_cast<int32_t>(offsetof(GridMove_t382504023, ___endPosition_10)); }
	inline Vector3_t3525329789  get_endPosition_10() const { return ___endPosition_10; }
	inline Vector3_t3525329789 * get_address_of_endPosition_10() { return &___endPosition_10; }
	inline void set_endPosition_10(Vector3_t3525329789  value)
	{
		___endPosition_10 = value;
	}

	inline static int32_t get_offset_of_t_11() { return static_cast<int32_t>(offsetof(GridMove_t382504023, ___t_11)); }
	inline float get_t_11() const { return ___t_11; }
	inline float* get_address_of_t_11() { return &___t_11; }
	inline void set_t_11(float value)
	{
		___t_11 = value;
	}

	inline static int32_t get_offset_of_factor_12() { return static_cast<int32_t>(offsetof(GridMove_t382504023, ___factor_12)); }
	inline float get_factor_12() const { return ___factor_12; }
	inline float* get_address_of_factor_12() { return &___factor_12; }
	inline void set_factor_12(float value)
	{
		___factor_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
