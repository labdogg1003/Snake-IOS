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

// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;
// UnityEngine.Camera[]
struct CameraU5BU5D_t458432999;
// UnityEngine.Shader
struct Shader_t3998140498;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_CameraClearFlags3602484652.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"
#include "UnityEngine_UnityEngine_Shader3998140498.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_DepthTextureMode2168306440.h"
#include "UnityEngine_UnityEngine_QueryTriggerInteraction4085533775.h"

// System.Single UnityEngine.Camera::get_fieldOfView()
extern "C"  float Camera_get_fieldOfView_m65126887 (Camera_t3533968274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C"  float Camera_get_nearClipPlane_m4074655061 (Camera_t3533968274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C"  float Camera_get_farClipPlane_m388706726 (Camera_t3533968274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Camera::get_hdr()
extern "C"  bool Camera_get_hdr_m1509362829 (Camera_t3533968274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_depth()
extern "C"  float Camera_get_depth_m3642810036 (Camera_t3533968274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_aspect()
extern "C"  float Camera_get_aspect_m4145685929 (Camera_t3533968274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C"  int32_t Camera_get_cullingMask_m1045975289 (Camera_t3533968274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
extern "C"  void Camera_set_cullingMask_m2181279574 (Camera_t3533968274 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C"  int32_t Camera_get_eventMask_m3669132771 (Camera_t3533968274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C"  Rect_t1525428817  Camera_get_pixelRect_m936851539 (Camera_t3533968274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C"  void Camera_INTERNAL_get_pixelRect_m1853722860 (Camera_t3533968274 * __this, Rect_t1525428817 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C"  RenderTexture_t12905170 * Camera_get_targetTexture_m1468336738 (Camera_t3533968274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
extern "C"  void Camera_set_targetTexture_m671169649 (Camera_t3533968274 * __this, RenderTexture_t12905170 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
extern "C"  Matrix4x4_t277289660  Camera_get_worldToCameraMatrix_m1346206741 (Camera_t3533968274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)
extern "C"  void Camera_INTERNAL_get_worldToCameraMatrix_m3651528822 (Camera_t3533968274 * __this, Matrix4x4_t277289660 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern "C"  Matrix4x4_t277289660  Camera_get_projectionMatrix_m3070982480 (Camera_t3533968274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C"  void Camera_INTERNAL_get_projectionMatrix_m684200627 (Camera_t3533968274 * __this, Matrix4x4_t277289660 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C"  int32_t Camera_get_clearFlags_m192466552 (Camera_t3533968274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
extern "C"  void Camera_set_clearFlags_m175420861 (Camera_t3533968274 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Camera_WorldToViewportPoint_m3480725126 (Camera_t3533968274 * __this, Vector3_t3525329789  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_WorldToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void Camera_INTERNAL_CALL_WorldToViewportPoint_m2934256380 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___self0, Vector3_t3525329789 * ___position1, Vector3_t3525329789 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Camera_ScreenToViewportPoint_m3727203754 (Camera_t3533968274 * __this, Vector3_t3525329789  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void Camera_INTERNAL_CALL_ScreenToViewportPoint_m3712526702 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___self0, Vector3_t3525329789 * ___position1, Vector3_t3525329789 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C"  Ray_t1522967639  Camera_ScreenPointToRay_m1733083890 (Camera_t3533968274 * __this, Vector3_t3525329789  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&,UnityEngine.Ray&)
extern "C"  void Camera_INTERNAL_CALL_ScreenPointToRay_m371614468 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___self0, Vector3_t3525329789 * ___position1, Ray_t1522967639 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t3533968274 * Camera_get_main_m671815697 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C"  int32_t Camera_get_allCamerasCount_m3993434431 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern "C"  int32_t Camera_GetAllCameras_m3771867787 (Il2CppObject * __this /* static, unused */, CameraU5BU5D_t458432999* ___cameras0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern "C"  void Camera_FireOnPreCull_m4184591338 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern "C"  void Camera_FireOnPreRender_m2754549070 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern "C"  void Camera_FireOnPostRender_m865551979 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::RenderWithShader(UnityEngine.Shader,System.String)
extern "C"  void Camera_RenderWithShader_m1338167485 (Camera_t3533968274 * __this, Shader_t3998140498 * ___shader0, String_t* ___replacementTag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::CopyFrom(UnityEngine.Camera)
extern "C"  void Camera_CopyFrom_m2180612415 (Camera_t3533968274 * __this, Camera_t3533968274 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
extern "C"  int32_t Camera_get_depthTextureMode_m2117446653 (Camera_t3533968274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
extern "C"  void Camera_set_depthTextureMode_m2368326786 (Camera_t3533968274 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  GameObject_t4012695102 * Camera_RaycastTry_m569221064 (Camera_t3533968274 * __this, Ray_t1522967639  ___ray0, float ___distance1, int32_t ___layerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  GameObject_t4012695102 * Camera_INTERNAL_CALL_RaycastTry_m2819346616 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___self0, Ray_t1522967639 * ___ray1, float ___distance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  GameObject_t4012695102 * Camera_RaycastTry2D_m3256311322 (Camera_t3533968274 * __this, Ray_t1522967639  ___ray0, float ___distance1, int32_t ___layerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C"  GameObject_t4012695102 * Camera_INTERNAL_CALL_RaycastTry2D_m2796313289 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___self0, Ray_t1522967639 * ___ray1, float ___distance2, int32_t ___layerMask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
