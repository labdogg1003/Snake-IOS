﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t3998140498;
// UnityEngine.Material
struct Material_t1886596500;

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2786816979.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_I393434316.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3879996513.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.BloomOptimized
struct  BloomOptimized_t3788566596  : public PostEffectsBase_t2786816979
{
public:
	// System.Single UnityStandardAssets.ImageEffects.BloomOptimized::threshold
	float ___threshold_5;
	// System.Single UnityStandardAssets.ImageEffects.BloomOptimized::intensity
	float ___intensity_6;
	// System.Single UnityStandardAssets.ImageEffects.BloomOptimized::blurSize
	float ___blurSize_7;
	// UnityStandardAssets.ImageEffects.BloomOptimized/Resolution UnityStandardAssets.ImageEffects.BloomOptimized::resolution
	int32_t ___resolution_8;
	// System.Int32 UnityStandardAssets.ImageEffects.BloomOptimized::blurIterations
	int32_t ___blurIterations_9;
	// UnityStandardAssets.ImageEffects.BloomOptimized/BlurType UnityStandardAssets.ImageEffects.BloomOptimized::blurType
	int32_t ___blurType_10;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomOptimized::fastBloomShader
	Shader_t3998140498 * ___fastBloomShader_11;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomOptimized::fastBloomMaterial
	Material_t1886596500 * ___fastBloomMaterial_12;

public:
	inline static int32_t get_offset_of_threshold_5() { return static_cast<int32_t>(offsetof(BloomOptimized_t3788566596, ___threshold_5)); }
	inline float get_threshold_5() const { return ___threshold_5; }
	inline float* get_address_of_threshold_5() { return &___threshold_5; }
	inline void set_threshold_5(float value)
	{
		___threshold_5 = value;
	}

	inline static int32_t get_offset_of_intensity_6() { return static_cast<int32_t>(offsetof(BloomOptimized_t3788566596, ___intensity_6)); }
	inline float get_intensity_6() const { return ___intensity_6; }
	inline float* get_address_of_intensity_6() { return &___intensity_6; }
	inline void set_intensity_6(float value)
	{
		___intensity_6 = value;
	}

	inline static int32_t get_offset_of_blurSize_7() { return static_cast<int32_t>(offsetof(BloomOptimized_t3788566596, ___blurSize_7)); }
	inline float get_blurSize_7() const { return ___blurSize_7; }
	inline float* get_address_of_blurSize_7() { return &___blurSize_7; }
	inline void set_blurSize_7(float value)
	{
		___blurSize_7 = value;
	}

	inline static int32_t get_offset_of_resolution_8() { return static_cast<int32_t>(offsetof(BloomOptimized_t3788566596, ___resolution_8)); }
	inline int32_t get_resolution_8() const { return ___resolution_8; }
	inline int32_t* get_address_of_resolution_8() { return &___resolution_8; }
	inline void set_resolution_8(int32_t value)
	{
		___resolution_8 = value;
	}

	inline static int32_t get_offset_of_blurIterations_9() { return static_cast<int32_t>(offsetof(BloomOptimized_t3788566596, ___blurIterations_9)); }
	inline int32_t get_blurIterations_9() const { return ___blurIterations_9; }
	inline int32_t* get_address_of_blurIterations_9() { return &___blurIterations_9; }
	inline void set_blurIterations_9(int32_t value)
	{
		___blurIterations_9 = value;
	}

	inline static int32_t get_offset_of_blurType_10() { return static_cast<int32_t>(offsetof(BloomOptimized_t3788566596, ___blurType_10)); }
	inline int32_t get_blurType_10() const { return ___blurType_10; }
	inline int32_t* get_address_of_blurType_10() { return &___blurType_10; }
	inline void set_blurType_10(int32_t value)
	{
		___blurType_10 = value;
	}

	inline static int32_t get_offset_of_fastBloomShader_11() { return static_cast<int32_t>(offsetof(BloomOptimized_t3788566596, ___fastBloomShader_11)); }
	inline Shader_t3998140498 * get_fastBloomShader_11() const { return ___fastBloomShader_11; }
	inline Shader_t3998140498 ** get_address_of_fastBloomShader_11() { return &___fastBloomShader_11; }
	inline void set_fastBloomShader_11(Shader_t3998140498 * value)
	{
		___fastBloomShader_11 = value;
		Il2CppCodeGenWriteBarrier(&___fastBloomShader_11, value);
	}

	inline static int32_t get_offset_of_fastBloomMaterial_12() { return static_cast<int32_t>(offsetof(BloomOptimized_t3788566596, ___fastBloomMaterial_12)); }
	inline Material_t1886596500 * get_fastBloomMaterial_12() const { return ___fastBloomMaterial_12; }
	inline Material_t1886596500 ** get_address_of_fastBloomMaterial_12() { return &___fastBloomMaterial_12; }
	inline void set_fastBloomMaterial_12(Material_t1886596500 * value)
	{
		___fastBloomMaterial_12 = value;
		Il2CppCodeGenWriteBarrier(&___fastBloomMaterial_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
