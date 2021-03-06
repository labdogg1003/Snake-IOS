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

// UnityEngine.Mesh
struct Mesh_t1525280346;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t2382190468;
// UnityEngine.Texture
struct Texture_t1769722184;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh1525280346.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_MeshTopology761116649.h"
#include "UnityEngine_UnityEngine_ComputeBuffer2382190468.h"
#include "UnityEngine_UnityEngine_Texture1769722184.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "UnityEngine_UnityEngine_RenderBuffer1942909411.h"
#include "UnityEngine_UnityEngine_CubemapFace3893556273.h"

// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Matrix4x4)
extern "C"  void Graphics_DrawMeshNow_m2524242293 (Il2CppObject * __this /* static, unused */, Mesh_t1525280346 * ___mesh0, Matrix4x4_t277289660  ___matrix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4,System.Int32)
extern "C"  void Graphics_Internal_DrawMeshNow2_m1490231000 (Il2CppObject * __this /* static, unused */, Mesh_t1525280346 * ___mesh0, Matrix4x4_t277289660  ___matrix1, int32_t ___materialIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4&,System.Int32)
extern "C"  void Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m3606840651 (Il2CppObject * __this /* static, unused */, Mesh_t1525280346 * ___mesh0, Matrix4x4_t277289660 * ___matrix1, int32_t ___materialIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawProceduralIndirect(UnityEngine.MeshTopology,UnityEngine.ComputeBuffer,System.Int32)
extern "C"  void Graphics_DrawProceduralIndirect_m2816657261 (Il2CppObject * __this /* static, unused */, int32_t ___topology0, ComputeBuffer_t2382190468 * ___bufferWithArgs1, int32_t ___argsOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C"  void Graphics_Blit_m3408836917 (Il2CppObject * __this /* static, unused */, Texture_t1769722184 * ___source0, RenderTexture_t12905170 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void Graphics_Blit_m2695454291 (Il2CppObject * __this /* static, unused */, Texture_t1769722184 * ___source0, RenderTexture_t12905170 * ___dest1, Material_t1886596500 * ___mat2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C"  void Graphics_Blit_m336256356 (Il2CppObject * __this /* static, unused */, Texture_t1769722184 * ___source0, RenderTexture_t12905170 * ___dest1, Material_t1886596500 * ___mat2, int32_t ___pass3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
extern "C"  void Graphics_Internal_BlitMaterial_m2813555808 (Il2CppObject * __this /* static, unused */, Texture_t1769722184 * ___source0, RenderTexture_t12905170 * ___dest1, Material_t1886596500 * ___mat2, int32_t ___pass3, bool ___setRT4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C"  void Graphics_BlitMultiTap_m4211810031 (Il2CppObject * __this /* static, unused */, Texture_t1769722184 * ___source0, RenderTexture_t12905170 * ___dest1, Material_t1886596500 * ___mat2, Vector2U5BU5D_t2741383957* ___offsets3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C"  void Graphics_Internal_BlitMultiTap_m1682166383 (Il2CppObject * __this /* static, unused */, Texture_t1769722184 * ___source0, RenderTexture_t12905170 * ___dest1, Material_t1886596500 * ___mat2, Vector2U5BU5D_t2741383957* ___offsets3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetNullRT()
extern "C"  void Graphics_Internal_SetNullRT_m2775863211 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRTSimple(UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&,System.Int32,UnityEngine.CubemapFace)
extern "C"  void Graphics_Internal_SetRTSimple_m3984063584 (Il2CppObject * __this /* static, unused */, RenderBuffer_t1942909411 * ___color0, RenderBuffer_t1942909411 * ___depth1, int32_t ___mip2, int32_t ___face3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRandomWriteTarget(System.Int32,UnityEngine.ComputeBuffer)
extern "C"  void Graphics_SetRandomWriteTarget_m2786492810 (Il2CppObject * __this /* static, unused */, int32_t ___index0, ComputeBuffer_t2382190468 * ___uav1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::ClearRandomWriteTargets()
extern "C"  void Graphics_ClearRandomWriteTargets_m223572883 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRandomWriteTargetBuffer(System.Int32,UnityEngine.ComputeBuffer)
extern "C"  void Graphics_Internal_SetRandomWriteTargetBuffer_m3862178922 (Il2CppObject * __this /* static, unused */, int32_t ___index0, ComputeBuffer_t2382190468 * ___uav1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderBuffer,UnityEngine.RenderBuffer,System.Int32,UnityEngine.CubemapFace)
extern "C"  void Graphics_SetRenderTargetImpl_m1430595897 (Il2CppObject * __this /* static, unused */, RenderBuffer_t1942909411  ___colorBuffer0, RenderBuffer_t1942909411  ___depthBuffer1, int32_t ___mipLevel2, int32_t ___face3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderTexture,System.Int32,UnityEngine.CubemapFace)
extern "C"  void Graphics_SetRenderTargetImpl_m2407939515 (Il2CppObject * __this /* static, unused */, RenderTexture_t12905170 * ___rt0, int32_t ___mipLevel1, int32_t ___face2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
extern "C"  void Graphics_SetRenderTarget_m3051614107 (Il2CppObject * __this /* static, unused */, RenderTexture_t12905170 * ___rt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
