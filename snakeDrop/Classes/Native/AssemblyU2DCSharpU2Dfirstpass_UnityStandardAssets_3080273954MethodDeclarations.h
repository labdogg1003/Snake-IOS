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

// UnityStandardAssets.ImageEffects.CameraMotionBlur
struct CameraMotionBlur_t3080273954;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"

// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::.ctor()
extern "C"  void CameraMotionBlur__ctor_m2674998759 (CameraMotionBlur_t3080273954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::.cctor()
extern "C"  void CameraMotionBlur__cctor_m838486694 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::CalculateViewProjection()
extern "C"  void CameraMotionBlur_CalculateViewProjection_m3796277087 (CameraMotionBlur_t3080273954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::Start()
extern "C"  void CameraMotionBlur_Start_m1622136551 (CameraMotionBlur_t3080273954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnEnable()
extern "C"  void CameraMotionBlur_OnEnable_m4136397887 (CameraMotionBlur_t3080273954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnDisable()
extern "C"  void CameraMotionBlur_OnDisable_m4115220174 (CameraMotionBlur_t3080273954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.CameraMotionBlur::CheckResources()
extern "C"  bool CameraMotionBlur_CheckResources_m1016557342 (CameraMotionBlur_t3080273954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void CameraMotionBlur_OnRenderImage_m2244354583 (CameraMotionBlur_t3080273954 * __this, RenderTexture_t12905170 * ___source0, RenderTexture_t12905170 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::Remember()
extern "C"  void CameraMotionBlur_Remember_m277802954 (CameraMotionBlur_t3080273954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityStandardAssets.ImageEffects.CameraMotionBlur::GetTmpCam()
extern "C"  Camera_t3533968274 * CameraMotionBlur_GetTmpCam_m2209988028 (CameraMotionBlur_t3080273954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::StartFrame()
extern "C"  void CameraMotionBlur_StartFrame_m554437864 (CameraMotionBlur_t3080273954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityStandardAssets.ImageEffects.CameraMotionBlur::divRoundUp(System.Int32,System.Int32)
extern "C"  int32_t CameraMotionBlur_divRoundUp_m1104863847 (Il2CppObject * __this /* static, unused */, int32_t ___x0, int32_t ___d1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
