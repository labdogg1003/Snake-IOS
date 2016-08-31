#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// Body
struct Body_t2076098;
// CameraFollow
struct CameraFollow_t3148844886;
// gameManager
struct gameManager_t701720411;
// Tile[]
struct TileU5BU5D_t4211174971;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Object
struct Il2CppObject;
// UIManager
struct UIManager_t1861242489;
// UnityEngine.CanvasGroup
struct CanvasGroup_t1295922228;
// UnityEngine.Transform
struct Transform_t284553113;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// gameManager/<endGame>c__Iterator3
struct U3CendGameU3Ec__Iterator3_t1530453103;
// GridMove
struct GridMove_t382504023;
// GridMove/<move>c__Iterator0
struct U3CmoveU3Ec__Iterator0_t1718369168;
// ObjectPool
struct ObjectPool_t3060192283;
// PooledObject
struct PooledObject_t2710534394;
// pellet
struct pellet_t3303064996;
// UnityEngine.Collision
struct Collision_t1119538015;
// snake
struct snake_t109578560;
// UnityEngine.BoxCollider
struct BoxCollider_t131631884;
// snake/<die>c__Iterator5
struct U3CdieU3Ec__Iterator5_t2723074110;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// snake/<Follow>c__Iterator4
struct U3CFollowU3Ec__Iterator4_t2369392276;
// Tile
struct Tile_t2606798;
// UnityEngine.Collider
struct Collider_t955670625;
// Tile/<DropTile>c__Iterator1
struct U3CDropTileU3Ec__Iterator1_t3664047749;
// Tile/<FadeOut>c__Iterator2
struct U3CFadeOutU3Ec__Iterator2_t2138668265;
// UnityStandardAssets.ImageEffects.BlurOptimized
struct BlurOptimized_t2967099936;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_Body2076098.h"
#include "AssemblyU2DCSharp_Body2076098MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "AssemblyU2DCSharp_PooledObject2710534394MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component2126946602MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "mscorlib_System_Single958209021.h"
#include "mscorlib_System_Boolean211005341.h"
#include "UnityEngine_UnityEngine_Mathf1597001355MethodDeclarations.h"
#include "mscorlib_System_Int322847414787.h"
#include "UnityEngine_UnityEngine_PlayerPrefs3733964924MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_CachedInput2672964520.h"
#include "AssemblyU2DCSharp_CachedInput2672964520MethodDeclarations.h"
#include "AssemblyU2DCSharp_CameraFollow3148844886.h"
#include "AssemblyU2DCSharp_CameraFollow3148844886MethodDeclarations.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject4012695102MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "AssemblyU2DCSharp_Direction1041377119.h"
#include "AssemblyU2DCSharp_Direction1041377119MethodDeclarations.h"
#include "AssemblyU2DCSharp_gameManager701720411.h"
#include "AssemblyU2DCSharp_gameManager701720411MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Application450040189MethodDeclarations.h"
#include "UnityEngine_UnityEngine_QualitySettings3538980463MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Screen3994030297MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3878351788MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Random3963434288MethodDeclarations.h"
#include "UnityEngine_UnityEngine_CanvasGroup1295922228MethodDeclarations.h"
#include "Assembly-CSharp_ArrayTypes.h"
#include "AssemblyU2DCSharp_Tile2606798.h"
#include "UnityEngine_UnityEngine_Object3878351788.h"
#include "AssemblyU2DCSharp_UIManager1861242489.h"
#include "UnityEngine_UnityEngine_CanvasGroup1295922228.h"
#include "UnityEngine_UnityEngine_Time1525492538MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Coroutine2246592261.h"
#include "mscorlib_System_Int322847414787MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text3286458198.h"
#include "UnityEngine_UI_UnityEngine_UI_Text3286458198MethodDeclarations.h"
#include "AssemblyU2DCSharp_Tile2606798MethodDeclarations.h"
#include "AssemblyU2DCSharp_gameManager_U3CendGameU3Ec__Iter1530453103MethodDeclarations.h"
#include "AssemblyU2DCSharp_gameManager_U3CendGameU3Ec__Iter1530453103.h"
#include "mscorlib_System_Object837106420MethodDeclarations.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_WaitForSeconds1291133240MethodDeclarations.h"
#include "mscorlib_System_String968488902MethodDeclarations.h"
#include "mscorlib_System_UInt32985925326.h"
#include "UnityEngine_UnityEngine_WaitForSeconds1291133240.h"
#include "AssemblyU2DCSharp_UIManager_UIState298534493.h"
#include "mscorlib_System_NotSupportedException1374155497MethodDeclarations.h"
#include "mscorlib_System_NotSupportedException1374155497.h"
#include "AssemblyU2DCSharp_GridMove382504023.h"
#include "AssemblyU2DCSharp_GridMove382504023MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input1593691127MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector23525329788MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_GridMove_U3CmoveU3Ec__Iterator01718369168MethodDeclarations.h"
#include "AssemblyU2DCSharp_GridMove_U3CmoveU3Ec__Iterator01718369168.h"
#include "mscorlib_System_Math2778998461MethodDeclarations.h"
#include "AssemblyU2DCSharp_GridMove_Orientation228367792.h"
#include "AssemblyU2DCSharp_GridMove_Orientation228367792MethodDeclarations.h"
#include "AssemblyU2DCSharp_ObjectPool3060192283.h"
#include "AssemblyU2DCSharp_ObjectPool3060192283MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen3507493363MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen3507493363.h"
#include "AssemblyU2DCSharp_PooledObject2710534394.h"
#include "AssemblyU2DCSharp_pellet3303064996.h"
#include "AssemblyU2DCSharp_pellet3303064996MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collision1119538015.h"
#include "UnityEngine_UnityEngine_Collision1119538015MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug1588791936MethodDeclarations.h"
#include "AssemblyU2DCSharp_snake109578560.h"
#include "AssemblyU2DCSharp_snake109578560MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider955670625MethodDeclarations.h"
#include "UnityEngine_UnityEngine_BoxCollider131631884.h"
#include "UnityEngine_UnityEngine_Component2126946602.h"
#include "AssemblyU2DCSharp_snake_U3CFollowU3Ec__Iterator42369392276MethodDeclarations.h"
#include "AssemblyU2DCSharp_snake_U3CFollowU3Ec__Iterator42369392276.h"
#include "UnityEngine_UnityEngine_Space1602970931.h"
#include "AssemblyU2DCSharp_snake_U3CdieU3Ec__Iterator52723074110MethodDeclarations.h"
#include "AssemblyU2DCSharp_snake_U3CdieU3Ec__Iterator52723074110.h"
#include "UnityEngine_UnityEngine_Touch1603883884MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Touch1603883884.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_TouchPhase1905076713.h"
#include "UnityEngine_UnityEngine_KeyCode2371581209.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen514686775.h"
#include "mscorlib_System_Collections_Generic_List_1_gen514686775MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Rigidbody1972007546MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody1972007546.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera2895437063MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera2895437063.h"
#include "AssemblyU2DCSharp_Tile_U3CDropTileU3Ec__Iterator13664047749MethodDeclarations.h"
#include "AssemblyU2DCSharp_Tile_U3CDropTileU3Ec__Iterator13664047749.h"
#include "UnityEngine_UnityEngine_Collider955670625.h"
#include "AssemblyU2DCSharp_Tile_U3CFadeOutU3Ec__Iterator22138668265MethodDeclarations.h"
#include "AssemblyU2DCSharp_Tile_U3CFadeOutU3Ec__Iterator22138668265.h"
#include "AssemblyU2DCSharp_UIManager1861242489MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Behaviour3120504042MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2967099936.h"
#include "UnityEngine_UnityEngine_SceneManagement_SceneManag1523288937MethodDeclarations.h"
#include "AssemblyU2DCSharp_UIManager_UIState298534493MethodDeclarations.h"

// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
extern "C"  ObjectU5BU5D_t11523773* Object_FindObjectsOfType_TisIl2CppObject_m1748557968_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define Object_FindObjectsOfType_TisIl2CppObject_m1748557968(__this /* static, unused */, method) ((  ObjectU5BU5D_t11523773* (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectsOfType_TisIl2CppObject_m1748557968_gshared)(__this /* static, unused */, method)
// !!0[] UnityEngine.Object::FindObjectsOfType<Tile>()
#define Object_FindObjectsOfType_TisTile_t2606798_m2631912418(__this /* static, unused */, method) ((  TileU5BU5D_t4211174971* (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectsOfType_TisIl2CppObject_m1748557968_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  Il2CppObject * Object_Instantiate_TisIl2CppObject_m3133387403_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method);
#define Object_Instantiate_TisIl2CppObject_m3133387403(__this /* static, unused */, p0, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3133387403_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t4012695102_m3917608929(__this /* static, unused */, p0, method) ((  GameObject_t4012695102 * (*) (Il2CppObject * /* static, unused */, GameObject_t4012695102 *, const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3133387403_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared (GameObject_t4012695102 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m2447772384(__this, method) ((  Il2CppObject * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UIManager>()
#define GameObject_GetComponent_TisUIManager_t1861242489_m3322272072(__this, method) ((  UIManager_t1861242489 * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.CanvasGroup>()
#define GameObject_GetComponent_TisCanvasGroup_t1295922228_m4071469134(__this, method) ((  CanvasGroup_t1295922228 * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponentInParent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponentInParent_TisIl2CppObject_m4281527380_gshared (GameObject_t4012695102 * __this, const MethodInfo* method);
#define GameObject_GetComponentInParent_TisIl2CppObject_m4281527380(__this, method) ((  Il2CppObject * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_GetComponentInParent_TisIl2CppObject_m4281527380_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponentInParent<UnityEngine.Transform>()
#define GameObject_GetComponentInParent_TisTransform_t284553113_m4046072253(__this, method) ((  Transform_t284553113 * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_GetComponentInParent_TisIl2CppObject_m4281527380_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<ObjectPool>()
#define GameObject_GetComponent_TisObjectPool_t3060192283_m2048654178(__this, method) ((  ObjectPool_t3060192283 * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_AddComponent_TisIl2CppObject_m337943659_gshared (GameObject_t4012695102 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisIl2CppObject_m337943659(__this, method) ((  Il2CppObject * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_AddComponent_TisIl2CppObject_m337943659_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<ObjectPool>()
#define GameObject_AddComponent_TisObjectPool_t3060192283_m716885431(__this, method) ((  ObjectPool_t3060192283 * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_AddComponent_TisIl2CppObject_m337943659_gshared)(__this, method)
// !!0 UnityEngine.Object::Instantiate<PooledObject>(!!0)
#define Object_Instantiate_TisPooledObject_t2710534394_m513996176(__this /* static, unused */, p0, method) ((  PooledObject_t2710534394 * (*) (Il2CppObject * /* static, unused */, PooledObject_t2710534394 *, const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3133387403_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t2126946602 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
#define Component_GetComponent_TisBoxCollider_t131631884_m1593759217(__this, method) ((  BoxCollider_t131631884 * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.BoxCollider>()
#define GameObject_GetComponent_TisBoxCollider_t131631884_m3222626457(__this, method) ((  BoxCollider_t131631884 * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
#define GameObject_GetComponent_TisRigidbody_t1972007546_m2158183595(__this, method) ((  Rigidbody_t1972007546 * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody>()
#define GameObject_AddComponent_TisRigidbody_t1972007546_m686365494(__this, method) ((  Rigidbody_t1972007546 * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_AddComponent_TisIl2CppObject_m337943659_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<Body>()
#define GameObject_GetComponent_TisBody_t2076098_m3414227675(__this, method) ((  Body_t2076098 * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t1972007546_m2174365699(__this, method) ((  Rigidbody_t1972007546 * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityStandardAssets.ImageEffects.BlurOptimized>()
#define GameObject_GetComponent_TisBlurOptimized_t2967099936_m3067969771(__this, method) ((  BlurOptimized_t2967099936 * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Body::.ctor()
extern "C"  void Body__ctor_m1901737753 (Body_t2076098 * __this, const MethodInfo* method)
{
	{
		PooledObject__ctor_m869790433(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Body::Start()
extern "C"  void Body_Start_m848875545 (Body_t2076098 * __this, const MethodInfo* method)
{
	{
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3525329789  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		__this->set_lastKnownPosition_4(L_1);
		return;
	}
}
// System.Void Body::Update()
extern "C"  void Body_Update_m551190292 (Body_t2076098 * __this, const MethodInfo* method)
{
	Vector3_t3525329789  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3525329789  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3525329789  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_x_1();
		bool L_3 = Body_checkWholeNumber_m6421684(__this, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		Transform_t284553113 * L_4 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3525329789  L_5 = Transform_get_position_m2211398607(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = (&V_1)->get_z_3();
		bool L_7 = Body_checkWholeNumber_m6421684(__this, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Transform_t284553113 * L_8 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3525329789  L_9 = Transform_get_position_m2211398607(L_8, /*hidden argument*/NULL);
		__this->set_lastKnownPosition_4(L_9);
	}

IL_004d:
	{
		return;
	}
}
// System.Boolean Body::checkWholeNumber(System.Single)
extern Il2CppClass* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t Body_checkWholeNumber_m6421684_MetadataUsageId;
extern "C"  bool Body_checkWholeNumber_m6421684 (Body_t2076098 * __this, float ___myFloat0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Body_checkWholeNumber_m6421684_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___myFloat0;
		float L_1 = ___myFloat0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_RoundToInt_m3163545820(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		bool L_3 = Body_IsApproximately_m3938301110(__this, L_0, (((float)((float)L_2))), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Body::IsApproximately(System.Single,System.Single)
extern "C"  bool Body_IsApproximately_m3938301110 (Body_t2076098 * __this, float ___a0, float ___b1, const MethodInfo* method)
{
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		bool L_2 = Body_IsApproximately_m36358427(__this, L_0, L_1, (0.05f), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Body::IsApproximately(System.Single,System.Single,System.Single)
extern Il2CppClass* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t Body_IsApproximately_m36358427_MetadataUsageId;
extern "C"  bool Body_IsApproximately_m36358427 (Body_t2076098 * __this, float ___a0, float ___b1, float ___tolerance2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Body_IsApproximately_m36358427_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_2 = fabsf(((float)((float)L_0-(float)L_1)));
		float L_3 = ___tolerance2;
		return (bool)((((float)L_2) < ((float)L_3))? 1 : 0);
	}
}
// System.Void Body::StoreHighscore(System.Int32)
extern Il2CppCodeGenString* _stringLiteral3620050480;
extern const uint32_t Body_StoreHighscore_m3961641835_MetadataUsageId;
extern "C"  void Body_StoreHighscore_m3961641835 (Body_t2076098 * __this, int32_t ___newHighscore0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Body_StoreHighscore_m3961641835_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = PlayerPrefs_GetInt_m3632746280(NULL /*static, unused*/, _stringLiteral3620050480, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = ___newHighscore0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = ___newHighscore0;
		PlayerPrefs_SetInt_m3485171996(NULL /*static, unused*/, _stringLiteral3620050480, L_3, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void CameraFollow::.ctor()
extern "C"  void CameraFollow__ctor_m2547336197 (CameraFollow_t3148844886 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraFollow::Start()
extern "C"  void CameraFollow_Start_m1494473989 (CameraFollow_t3148844886 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void CameraFollow::Update()
extern "C"  void CameraFollow_Update_m3384872872 (CameraFollow_t3148844886 * __this, const MethodInfo* method)
{
	{
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t284553113 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3525329789  L_2 = Transform_get_position_m2211398607(L_1, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_3 = __this->get_target_2();
		NullCheck(L_3);
		Transform_t284553113 * L_4 = GameObject_get_transform_m1278640159(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3525329789  L_5 = Transform_get_position_m2211398607(L_4, /*hidden argument*/NULL);
		Vector3_t3525329789  L_6 = Vector3_Lerp_m650470329(NULL /*static, unused*/, L_2, L_5, (0.1f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_m3111394108(L_0, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void gameManager::.ctor()
extern "C"  void gameManager__ctor_m3914803824 (gameManager_t701720411 * __this, const MethodInfo* method)
{
	{
		__this->set_targetFrameRate_13(((int32_t)75));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// gameManager gameManager::get_Instance()
extern Il2CppClass* gameManager_t701720411_il2cpp_TypeInfo_var;
extern const uint32_t gameManager_get_Instance_m1060059930_MetadataUsageId;
extern "C"  gameManager_t701720411 * gameManager_get_Instance_m1060059930 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (gameManager_get_Instance_m1060059930_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		gameManager_t701720411 * L_0 = ((gameManager_t701720411_StaticFields*)gameManager_t701720411_il2cpp_TypeInfo_var->static_fields)->get_U3CInstanceU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void gameManager::set_Instance(gameManager)
extern Il2CppClass* gameManager_t701720411_il2cpp_TypeInfo_var;
extern const uint32_t gameManager_set_Instance_m2255177489_MetadataUsageId;
extern "C"  void gameManager_set_Instance_m2255177489 (Il2CppObject * __this /* static, unused */, gameManager_t701720411 * ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (gameManager_set_Instance_m2255177489_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		gameManager_t701720411 * L_0 = ___value0;
		((gameManager_t701720411_StaticFields*)gameManager_t701720411_il2cpp_TypeInfo_var->static_fields)->set_U3CInstanceU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Void gameManager::Awake()
extern "C"  void gameManager_Awake_m4152409043 (gameManager_t701720411 * __this, const MethodInfo* method)
{
	{
		gameManager_set_Instance_m2255177489(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get_targetFrameRate_13();
		Application_set_targetFrameRate_m498658007(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		QualitySettings_set_vSyncCount_m2698975449(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void gameManager::Start()
extern const MethodInfo* Object_FindObjectsOfType_TisTile_t2606798_m2631912418_MethodInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t4012695102_m3917608929_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisUIManager_t1861242489_m3322272072_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisCanvasGroup_t1295922228_m4071469134_MethodInfo_var;
extern const uint32_t gameManager_Start_m2861941616_MetadataUsageId;
extern "C"  void gameManager_Start_m2861941616 (gameManager_t701720411 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (gameManager_Start_m2861941616_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t4012695102 * V_0 = NULL;
	GameObject_t4012695102 * V_1 = NULL;
	{
		Screen_SetResolution_m3920430564(NULL /*static, unused*/, ((int32_t)354), ((int32_t)629), (bool)0, /*hidden argument*/NULL);
		__this->set_died_9((bool)0);
		TileU5BU5D_t4211174971* L_0 = Object_FindObjectsOfType_TisTile_t2606798_m2631912418(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisTile_t2606798_m2631912418_MethodInfo_var);
		__this->set_tiles_4(L_0);
		GameObject_t4012695102 * L_1 = __this->get_pellet_5();
		GameObject_t4012695102 * L_2 = Object_Instantiate_TisGameObject_t4012695102_m3917608929(NULL /*static, unused*/, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_t4012695102_m3917608929_MethodInfo_var);
		V_0 = L_2;
		GameObject_t4012695102 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t284553113 * L_4 = GameObject_get_transform_m1278640159(L_3, /*hidden argument*/NULL);
		TileU5BU5D_t4211174971* L_5 = __this->get_tiles_4();
		TileU5BU5D_t4211174971* L_6 = __this->get_tiles_4();
		NullCheck(L_6);
		int32_t L_7 = Random_Range_m75452833(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_6)->max_length)))), /*hidden argument*/NULL);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_7);
		int32_t L_8 = L_7;
		NullCheck(((L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8))));
		Vector3_t3525329789  L_9 = ((L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8)))->get_pelletLocation_11();
		NullCheck(L_4);
		Transform_set_position_m3111394108(L_4, L_9, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_10 = __this->get_pellet_5();
		GameObject_t4012695102 * L_11 = Object_Instantiate_TisGameObject_t4012695102_m3917608929(NULL /*static, unused*/, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_t4012695102_m3917608929_MethodInfo_var);
		V_1 = L_11;
		GameObject_t4012695102 * L_12 = V_1;
		NullCheck(L_12);
		Transform_t284553113 * L_13 = GameObject_get_transform_m1278640159(L_12, /*hidden argument*/NULL);
		TileU5BU5D_t4211174971* L_14 = __this->get_tiles_4();
		TileU5BU5D_t4211174971* L_15 = __this->get_tiles_4();
		NullCheck(L_15);
		int32_t L_16 = Random_Range_m75452833(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_15)->max_length)))), /*hidden argument*/NULL);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_16);
		int32_t L_17 = L_16;
		NullCheck(((L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17))));
		Vector3_t3525329789  L_18 = ((L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17)))->get_pelletLocation_11();
		NullCheck(L_13);
		Transform_set_position_m3111394108(L_13, L_18, /*hidden argument*/NULL);
		gameManager_updateUI_m43768081(__this, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_19 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		UIManager_t1861242489 * L_20 = GameObject_GetComponent_TisUIManager_t1861242489_m3322272072(L_19, /*hidden argument*/GameObject_GetComponent_TisUIManager_t1861242489_m3322272072_MethodInfo_var);
		__this->set__uiManager_10(L_20);
		GameObject_t4012695102 * L_21 = __this->get_endGameUI_11();
		NullCheck(L_21);
		CanvasGroup_t1295922228 * L_22 = GameObject_GetComponent_TisCanvasGroup_t1295922228_m4071469134(L_21, /*hidden argument*/GameObject_GetComponent_TisCanvasGroup_t1295922228_m4071469134_MethodInfo_var);
		NullCheck(L_22);
		CanvasGroup_set_alpha_m2140801370(L_22, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void gameManager::Update()
extern Il2CppCodeGenString* _stringLiteral2687329133;
extern const uint32_t gameManager_Update_m2826696349_MetadataUsageId;
extern "C"  void gameManager_Update_m2826696349 (gameManager_t701720411 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (gameManager_Update_m2826696349_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = __this->get_died_9();
		if (L_0)
		{
			goto IL_007c;
		}
	}
	{
		float L_1 = __this->get_seconds_6();
		float L_2 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_seconds_6(((float)((float)L_1+(float)L_2)));
		float L_3 = __this->get_seconds_6();
		if ((!(((float)L_3) > ((float)(60.0f)))))
		{
			goto IL_004a;
		}
	}
	{
		float L_4 = __this->get_minutes_7();
		__this->set_minutes_7(((float)((float)L_4+(float)(1.0f))));
		__this->set_seconds_6((0.0f));
	}

IL_004a:
	{
		float L_5 = __this->get_minutes_7();
		if ((!(((float)L_5) > ((float)(60.0f)))))
		{
			goto IL_0077;
		}
	}
	{
		float L_6 = __this->get_hours_8();
		__this->set_hours_8(((float)((float)L_6+(float)(1.0f))));
		__this->set_minutes_7((0.0f));
	}

IL_0077:
	{
		goto IL_0088;
	}

IL_007c:
	{
		MonoBehaviour_StartCoroutine_m2272783641(__this, _stringLiteral2687329133, /*hidden argument*/NULL);
	}

IL_0088:
	{
		return;
	}
}
// System.Void gameManager::updateUI()
extern "C"  void gameManager_updateUI_m43768081 (gameManager_t701720411 * __this, const MethodInfo* method)
{
	{
		Text_t3286458198 * L_0 = __this->get_txtScore_3();
		int32_t* L_1 = __this->get_address_of_score_2();
		String_t* L_2 = Int32_ToString_m1286526384(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(65 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		return;
	}
}
// System.Void gameManager::increaseScore()
extern "C"  void gameManager_increaseScore_m3879389214 (gameManager_t701720411 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_score_2();
		__this->set_score_2(((int32_t)((int32_t)L_0+(int32_t)1)));
		gameManager_updateUI_m43768081(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void gameManager::SetTileSpeed()
extern "C"  void gameManager_SetTileSpeed_m2021669899 (gameManager_t701720411 * __this, const MethodInfo* method)
{
	Tile_t2606798 * V_0 = NULL;
	TileU5BU5D_t4211174971* V_1 = NULL;
	int32_t V_2 = 0;
	{
		TileU5BU5D_t4211174971* L_0 = __this->get_tiles_4();
		V_1 = L_0;
		V_2 = 0;
		goto IL_001c;
	}

IL_000e:
	{
		TileU5BU5D_t4211174971* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_0 = ((L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3)));
		Tile_t2606798 * L_4 = V_0;
		NullCheck(L_4);
		Tile_increaseTimers_m2013362983(L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_2;
		V_2 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_001c:
	{
		int32_t L_6 = V_2;
		TileU5BU5D_t4211174971* L_7 = V_1;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_7)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void gameManager::respawnPellet(UnityEngine.GameObject)
extern const MethodInfo* GameObject_GetComponentInParent_TisTransform_t284553113_m4046072253_MethodInfo_var;
extern const uint32_t gameManager_respawnPellet_m2770669714_MetadataUsageId;
extern "C"  void gameManager_respawnPellet_m2770669714 (gameManager_t701720411 * __this, GameObject_t4012695102 * ___p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (gameManager_respawnPellet_m2770669714_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t4012695102 * L_0 = ___p0;
		NullCheck(L_0);
		Transform_t284553113 * L_1 = GameObject_GetComponentInParent_TisTransform_t284553113_m4046072253(L_0, /*hidden argument*/GameObject_GetComponentInParent_TisTransform_t284553113_m4046072253_MethodInfo_var);
		TileU5BU5D_t4211174971* L_2 = __this->get_tiles_4();
		TileU5BU5D_t4211174971* L_3 = __this->get_tiles_4();
		NullCheck(L_3);
		int32_t L_4 = Random_Range_m75452833(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_3)->max_length)))), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_4);
		int32_t L_5 = L_4;
		NullCheck(((L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5))));
		Vector3_t3525329789  L_6 = ((L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5)))->get_pelletLocation_11();
		NullCheck(L_1);
		Transform_set_position_m3111394108(L_1, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator gameManager::endGame()
extern Il2CppClass* U3CendGameU3Ec__Iterator3_t1530453103_il2cpp_TypeInfo_var;
extern const uint32_t gameManager_endGame_m4069479651_MetadataUsageId;
extern "C"  Il2CppObject * gameManager_endGame_m4069479651 (gameManager_t701720411 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (gameManager_endGame_m4069479651_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	U3CendGameU3Ec__Iterator3_t1530453103 * V_0 = NULL;
	{
		U3CendGameU3Ec__Iterator3_t1530453103 * L_0 = (U3CendGameU3Ec__Iterator3_t1530453103 *)il2cpp_codegen_object_new(U3CendGameU3Ec__Iterator3_t1530453103_il2cpp_TypeInfo_var);
		U3CendGameU3Ec__Iterator3__ctor_m1966522128(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CendGameU3Ec__Iterator3_t1530453103 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3Ef__this_2(__this);
		U3CendGameU3Ec__Iterator3_t1530453103 * L_2 = V_0;
		return L_2;
	}
}
// System.Void gameManager/<endGame>c__Iterator3::.ctor()
extern "C"  void U3CendGameU3Ec__Iterator3__ctor_m1966522128 (U3CendGameU3Ec__Iterator3_t1530453103 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object gameManager/<endGame>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  Il2CppObject * U3CendGameU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3327348610 (U3CendGameU3Ec__Iterator3_t1530453103 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object gameManager/<endGame>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * U3CendGameU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m2395510550 (U3CendGameU3Ec__Iterator3_t1530453103 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Boolean gameManager/<endGame>c__Iterator3::MoveNext()
extern Il2CppClass* WaitForSeconds_t1291133240_il2cpp_TypeInfo_var;
extern Il2CppClass* Single_t958209021_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisCanvasGroup_t1295922228_m4071469134_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral32582;
extern Il2CppCodeGenString* _stringLiteral1536;
extern const uint32_t U3CendGameU3Ec__Iterator3_MoveNext_m679297508_MetadataUsageId;
extern "C"  bool U3CendGameU3Ec__Iterator3_MoveNext_m679297508 (U3CendGameU3Ec__Iterator3_t1530453103 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CendGameU3Ec__Iterator3_MoveNext_m679297508_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = __this->get_U24PC_0();
		V_0 = L_0;
		__this->set_U24PC_0((-1));
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0025;
		}
		if (L_1 == 1)
		{
			goto IL_0041;
		}
		if (L_1 == 2)
		{
			goto IL_008a;
		}
	}
	{
		goto IL_00f3;
	}

IL_0025:
	{
		WaitForSeconds_t1291133240 * L_2 = (WaitForSeconds_t1291133240 *)il2cpp_codegen_object_new(WaitForSeconds_t1291133240_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_2, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_2);
		__this->set_U24PC_0(1);
		goto IL_00f5;
	}

IL_0041:
	{
		gameManager_t701720411 * L_3 = gameManager_get_Instance_m1060059930(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		UIManager_t1861242489 * L_4 = L_3->get__uiManager_10();
		NullCheck(L_4);
		L_4->set_gameState_5(2);
		goto IL_008a;
	}

IL_0056:
	{
		gameManager_t701720411 * L_5 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_5);
		GameObject_t4012695102 * L_6 = L_5->get_endGameUI_11();
		NullCheck(L_6);
		CanvasGroup_t1295922228 * L_7 = GameObject_GetComponent_TisCanvasGroup_t1295922228_m4071469134(L_6, /*hidden argument*/GameObject_GetComponent_TisCanvasGroup_t1295922228_m4071469134_MethodInfo_var);
		CanvasGroup_t1295922228 * L_8 = L_7;
		NullCheck(L_8);
		float L_9 = CanvasGroup_get_alpha_m2646612977(L_8, /*hidden argument*/NULL);
		float L_10 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		CanvasGroup_set_alpha_m2140801370(L_8, ((float)((float)L_9+(float)L_10)), /*hidden argument*/NULL);
		__this->set_U24current_1(NULL);
		__this->set_U24PC_0(2);
		goto IL_00f5;
	}

IL_008a:
	{
		gameManager_t701720411 * L_11 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_11);
		GameObject_t4012695102 * L_12 = L_11->get_endGameUI_11();
		NullCheck(L_12);
		CanvasGroup_t1295922228 * L_13 = GameObject_GetComponent_TisCanvasGroup_t1295922228_m4071469134(L_12, /*hidden argument*/GameObject_GetComponent_TisCanvasGroup_t1295922228_m4071469134_MethodInfo_var);
		NullCheck(L_13);
		float L_14 = CanvasGroup_get_alpha_m2646612977(L_13, /*hidden argument*/NULL);
		if ((((float)L_14) < ((float)(1.0f))))
		{
			goto IL_0056;
		}
	}
	{
		gameManager_t701720411 * L_15 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_15);
		Text_t3286458198 * L_16 = L_15->get_lblTime_12();
		gameManager_t701720411 * L_17 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_17);
		float L_18 = L_17->get_minutes_7();
		float L_19 = L_18;
		Il2CppObject * L_20 = Box(Single_t958209021_il2cpp_TypeInfo_var, &L_19);
		gameManager_t701720411 * L_21 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_21);
		float L_22 = L_21->get_seconds_6();
		V_1 = (((int32_t)((int32_t)L_22)));
		String_t* L_23 = Int32_ToString_m3853485906((&V_1), _stringLiteral1536, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m2809334143(NULL /*static, unused*/, L_20, _stringLiteral32582, L_23, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(65 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_24);
		__this->set_U24PC_0((-1));
	}

IL_00f3:
	{
		return (bool)0;
	}

IL_00f5:
	{
		return (bool)1;
	}
	// Dead block : IL_00f7: ldloc.2
}
// System.Void gameManager/<endGame>c__Iterator3::Dispose()
extern "C"  void U3CendGameU3Ec__Iterator3_Dispose_m4235405133 (U3CendGameU3Ec__Iterator3_t1530453103 * __this, const MethodInfo* method)
{
	{
		__this->set_U24PC_0((-1));
		return;
	}
}
// System.Void gameManager/<endGame>c__Iterator3::Reset()
extern Il2CppClass* NotSupportedException_t1374155497_il2cpp_TypeInfo_var;
extern const uint32_t U3CendGameU3Ec__Iterator3_Reset_m3907922365_MetadataUsageId;
extern "C"  void U3CendGameU3Ec__Iterator3_Reset_m3907922365 (U3CendGameU3Ec__Iterator3_t1530453103 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CendGameU3Ec__Iterator3_Reset_m3907922365_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1374155497 * L_0 = (NotSupportedException_t1374155497 *)il2cpp_codegen_object_new(NotSupportedException_t1374155497_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m149930845(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void GridMove::.ctor()
extern "C"  void GridMove__ctor_m101131300 (GridMove_t382504023 * __this, const MethodInfo* method)
{
	{
		__this->set_moveSpeed_2((3.0f));
		__this->set_gridSize_3((1.0f));
		__this->set_correctDiagonalSpeed_6((bool)1);
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GridMove::Update()
extern Il2CppClass* Input_t1593691127_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3381094468;
extern Il2CppCodeGenString* _stringLiteral2375469974;
extern const uint32_t GridMove_Update_m566965097_MetadataUsageId;
extern "C"  void GridMove_Update_m566965097 (GridMove_t382504023 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GridMove_Update_m566965097_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = __this->get_isMoving_8();
		if (L_0)
		{
			goto IL_00a7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		float L_1 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral3381094468, /*hidden argument*/NULL);
		float L_2 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2375469974, /*hidden argument*/NULL);
		Vector2_t3525329788  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector2__ctor_m1517109030(&L_3, L_1, L_2, /*hidden argument*/NULL);
		__this->set_input_7(L_3);
		bool L_4 = __this->get_allowDiagonals_5();
		if (L_4)
		{
			goto IL_007f;
		}
	}
	{
		Vector2_t3525329788 * L_5 = __this->get_address_of_input_7();
		float L_6 = L_5->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_7 = fabsf(L_6);
		Vector2_t3525329788 * L_8 = __this->get_address_of_input_7();
		float L_9 = L_8->get_y_2();
		float L_10 = fabsf(L_9);
		if ((!(((float)L_7) > ((float)L_10))))
		{
			goto IL_006f;
		}
	}
	{
		Vector2_t3525329788 * L_11 = __this->get_address_of_input_7();
		L_11->set_y_2((0.0f));
		goto IL_007f;
	}

IL_006f:
	{
		Vector2_t3525329788 * L_12 = __this->get_address_of_input_7();
		L_12->set_x_1((0.0f));
	}

IL_007f:
	{
		Vector2_t3525329788  L_13 = __this->get_input_7();
		Vector2_t3525329788  L_14 = Vector2_get_zero_m199872368(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_15 = Vector2_op_Inequality_m1638984867(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00a7;
		}
	}
	{
		Transform_t284553113 * L_16 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Il2CppObject * L_17 = GridMove_move_m3083497092(__this, L_16, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2135303124(__this, L_17, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		return;
	}
}
// System.Collections.IEnumerator GridMove::move(UnityEngine.Transform)
extern Il2CppClass* U3CmoveU3Ec__Iterator0_t1718369168_il2cpp_TypeInfo_var;
extern const uint32_t GridMove_move_m3083497092_MetadataUsageId;
extern "C"  Il2CppObject * GridMove_move_m3083497092 (GridMove_t382504023 * __this, Transform_t284553113 * ___transform0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GridMove_move_m3083497092_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	U3CmoveU3Ec__Iterator0_t1718369168 * V_0 = NULL;
	{
		U3CmoveU3Ec__Iterator0_t1718369168 * L_0 = (U3CmoveU3Ec__Iterator0_t1718369168 *)il2cpp_codegen_object_new(U3CmoveU3Ec__Iterator0_t1718369168_il2cpp_TypeInfo_var);
		U3CmoveU3Ec__Iterator0__ctor_m146276387(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CmoveU3Ec__Iterator0_t1718369168 * L_1 = V_0;
		Transform_t284553113 * L_2 = ___transform0;
		NullCheck(L_1);
		L_1->set_transform_0(L_2);
		U3CmoveU3Ec__Iterator0_t1718369168 * L_3 = V_0;
		Transform_t284553113 * L_4 = ___transform0;
		NullCheck(L_3);
		L_3->set_U3CU24U3Etransform_3(L_4);
		U3CmoveU3Ec__Iterator0_t1718369168 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_U3CU3Ef__this_4(__this);
		U3CmoveU3Ec__Iterator0_t1718369168 * L_6 = V_0;
		return L_6;
	}
}
// System.Void GridMove/<move>c__Iterator0::.ctor()
extern "C"  void U3CmoveU3Ec__Iterator0__ctor_m146276387 (U3CmoveU3Ec__Iterator0_t1718369168 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object GridMove/<move>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  Il2CppObject * U3CmoveU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m758558863 (U3CmoveU3Ec__Iterator0_t1718369168 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object GridMove/<move>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * U3CmoveU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3298931235 (U3CmoveU3Ec__Iterator0_t1718369168 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Boolean GridMove/<move>c__Iterator0::MoveNext()
extern Il2CppClass* Int32_t2847414787_il2cpp_TypeInfo_var;
extern const uint32_t U3CmoveU3Ec__Iterator0_MoveNext_m1601457393_MetadataUsageId;
extern "C"  bool U3CmoveU3Ec__Iterator0_MoveNext_m1601457393 (U3CmoveU3Ec__Iterator0_t1718369168 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CmoveU3Ec__Iterator0_MoveNext_m1601457393_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U24PC_1();
		V_0 = L_0;
		__this->set_U24PC_1((-1));
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0025;
		}
		if (L_1 == 1)
		{
			goto IL_0275;
		}
		if (L_1 == 2)
		{
			goto IL_02ae;
		}
	}
	{
		goto IL_02b5;
	}

IL_0025:
	{
		GridMove_t382504023 * L_2 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_2);
		L_2->set_isMoving_8((bool)1);
		GridMove_t382504023 * L_3 = __this->get_U3CU3Ef__this_4();
		Transform_t284553113 * L_4 = __this->get_transform_0();
		NullCheck(L_4);
		Vector3_t3525329789  L_5 = Transform_get_position_m2211398607(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_startPosition_9(L_5);
		GridMove_t382504023 * L_6 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_6);
		L_6->set_t_11((0.0f));
		GridMove_t382504023 * L_7 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_gridOrientation_4();
		if (L_8)
		{
			goto IL_00f2;
		}
	}
	{
		GridMove_t382504023 * L_9 = __this->get_U3CU3Ef__this_4();
		GridMove_t382504023 * L_10 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_10);
		Vector3_t3525329789 * L_11 = L_10->get_address_of_startPosition_9();
		float L_12 = L_11->get_x_1();
		GridMove_t382504023 * L_13 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_13);
		Vector2_t3525329788 * L_14 = L_13->get_address_of_input_7();
		float L_15 = L_14->get_x_1();
		int32_t L_16 = Math_Sign_m3399766291(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		GridMove_t382504023 * L_17 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_17);
		float L_18 = L_17->get_gridSize_3();
		GridMove_t382504023 * L_19 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_19);
		Vector3_t3525329789 * L_20 = L_19->get_address_of_startPosition_9();
		float L_21 = L_20->get_y_2();
		GridMove_t382504023 * L_22 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_22);
		Vector3_t3525329789 * L_23 = L_22->get_address_of_startPosition_9();
		float L_24 = L_23->get_z_3();
		GridMove_t382504023 * L_25 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_25);
		Vector2_t3525329788 * L_26 = L_25->get_address_of_input_7();
		float L_27 = L_26->get_y_2();
		int32_t L_28 = Math_Sign_m3399766291(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		GridMove_t382504023 * L_29 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_29);
		float L_30 = L_29->get_gridSize_3();
		Vector3_t3525329789  L_31;
		memset(&L_31, 0, sizeof(L_31));
		Vector3__ctor_m2926210380(&L_31, ((float)((float)L_12+(float)((float)((float)(((float)((float)L_16)))*(float)L_18)))), L_21, ((float)((float)L_24+(float)((float)((float)(((float)((float)L_28)))*(float)L_30)))), /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->set_endPosition_10(L_31);
		goto IL_0178;
	}

IL_00f2:
	{
		GridMove_t382504023 * L_32 = __this->get_U3CU3Ef__this_4();
		GridMove_t382504023 * L_33 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_33);
		Vector3_t3525329789 * L_34 = L_33->get_address_of_startPosition_9();
		float L_35 = L_34->get_x_1();
		GridMove_t382504023 * L_36 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_36);
		Vector2_t3525329788 * L_37 = L_36->get_address_of_input_7();
		float L_38 = L_37->get_x_1();
		int32_t L_39 = Math_Sign_m3399766291(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		GridMove_t382504023 * L_40 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_40);
		float L_41 = L_40->get_gridSize_3();
		GridMove_t382504023 * L_42 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_42);
		Vector3_t3525329789 * L_43 = L_42->get_address_of_startPosition_9();
		float L_44 = L_43->get_y_2();
		GridMove_t382504023 * L_45 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_45);
		Vector2_t3525329788 * L_46 = L_45->get_address_of_input_7();
		float L_47 = L_46->get_y_2();
		int32_t L_48 = Math_Sign_m3399766291(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		GridMove_t382504023 * L_49 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_49);
		float L_50 = L_49->get_gridSize_3();
		GridMove_t382504023 * L_51 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_51);
		Vector3_t3525329789 * L_52 = L_51->get_address_of_startPosition_9();
		float L_53 = L_52->get_z_3();
		Vector3_t3525329789  L_54;
		memset(&L_54, 0, sizeof(L_54));
		Vector3__ctor_m2926210380(&L_54, ((float)((float)L_35+(float)((float)((float)(((float)((float)L_39)))*(float)L_41)))), ((float)((float)L_44+(float)((float)((float)(((float)((float)L_48)))*(float)L_50)))), L_53, /*hidden argument*/NULL);
		NullCheck(L_32);
		L_32->set_endPosition_10(L_54);
	}

IL_0178:
	{
		GridMove_t382504023 * L_55 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_55);
		bool L_56 = L_55->get_allowDiagonals_5();
		if (!L_56)
		{
			goto IL_01e1;
		}
	}
	{
		GridMove_t382504023 * L_57 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_57);
		bool L_58 = L_57->get_correctDiagonalSpeed_6();
		if (!L_58)
		{
			goto IL_01e1;
		}
	}
	{
		GridMove_t382504023 * L_59 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_59);
		Vector2_t3525329788 * L_60 = L_59->get_address_of_input_7();
		float L_61 = L_60->get_x_1();
		if ((((float)L_61) == ((float)(0.0f))))
		{
			goto IL_01e1;
		}
	}
	{
		GridMove_t382504023 * L_62 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_62);
		Vector2_t3525329788 * L_63 = L_62->get_address_of_input_7();
		float L_64 = L_63->get_y_2();
		if ((((float)L_64) == ((float)(0.0f))))
		{
			goto IL_01e1;
		}
	}
	{
		GridMove_t382504023 * L_65 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_65);
		L_65->set_factor_12((0.7071f));
		goto IL_01f1;
	}

IL_01e1:
	{
		GridMove_t382504023 * L_66 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_66);
		L_66->set_factor_12((1.0f));
	}

IL_01f1:
	{
		goto IL_0275;
	}

IL_01f6:
	{
		GridMove_t382504023 * L_67 = __this->get_U3CU3Ef__this_4();
		GridMove_t382504023 * L_68 = L_67;
		NullCheck(L_68);
		float L_69 = L_68->get_t_11();
		float L_70 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		GridMove_t382504023 * L_71 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_71);
		float L_72 = L_71->get_moveSpeed_2();
		GridMove_t382504023 * L_73 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_73);
		float L_74 = L_73->get_gridSize_3();
		GridMove_t382504023 * L_75 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_75);
		float L_76 = L_75->get_factor_12();
		NullCheck(L_68);
		L_68->set_t_11(((float)((float)L_69+(float)((float)((float)((float)((float)L_70*(float)((float)((float)L_72/(float)L_74))))*(float)L_76)))));
		Transform_t284553113 * L_77 = __this->get_transform_0();
		GridMove_t382504023 * L_78 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_78);
		Vector3_t3525329789  L_79 = L_78->get_startPosition_9();
		GridMove_t382504023 * L_80 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_80);
		Vector3_t3525329789  L_81 = L_80->get_endPosition_10();
		GridMove_t382504023 * L_82 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_82);
		float L_83 = L_82->get_t_11();
		Vector3_t3525329789  L_84 = Vector3_Lerp_m650470329(NULL /*static, unused*/, L_79, L_81, L_83, /*hidden argument*/NULL);
		NullCheck(L_77);
		Transform_set_position_m3111394108(L_77, L_84, /*hidden argument*/NULL);
		__this->set_U24current_2(NULL);
		__this->set_U24PC_1(1);
		goto IL_02b7;
	}

IL_0275:
	{
		GridMove_t382504023 * L_85 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_85);
		float L_86 = L_85->get_t_11();
		if ((((float)L_86) < ((float)(1.0f))))
		{
			goto IL_01f6;
		}
	}
	{
		GridMove_t382504023 * L_87 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_87);
		L_87->set_isMoving_8((bool)0);
		int32_t L_88 = 0;
		Il2CppObject * L_89 = Box(Int32_t2847414787_il2cpp_TypeInfo_var, &L_88);
		__this->set_U24current_2(L_89);
		__this->set_U24PC_1(2);
		goto IL_02b7;
	}

IL_02ae:
	{
		__this->set_U24PC_1((-1));
	}

IL_02b5:
	{
		return (bool)0;
	}

IL_02b7:
	{
		return (bool)1;
	}
	// Dead block : IL_02b9: ldloc.1
}
// System.Void GridMove/<move>c__Iterator0::Dispose()
extern "C"  void U3CmoveU3Ec__Iterator0_Dispose_m3030937504 (U3CmoveU3Ec__Iterator0_t1718369168 * __this, const MethodInfo* method)
{
	{
		__this->set_U24PC_1((-1));
		return;
	}
}
// System.Void GridMove/<move>c__Iterator0::Reset()
extern Il2CppClass* NotSupportedException_t1374155497_il2cpp_TypeInfo_var;
extern const uint32_t U3CmoveU3Ec__Iterator0_Reset_m2087676624_MetadataUsageId;
extern "C"  void U3CmoveU3Ec__Iterator0_Reset_m2087676624 (U3CmoveU3Ec__Iterator0_t1718369168 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CmoveU3Ec__Iterator0_Reset_m2087676624_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1374155497 * L_0 = (NotSupportedException_t1374155497 *)il2cpp_codegen_object_new(NotSupportedException_t1374155497_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m149930845(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void ObjectPool::.ctor()
extern Il2CppClass* List_1_t3507493363_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2607136037_MethodInfo_var;
extern const uint32_t ObjectPool__ctor_m1301426912_MetadataUsageId;
extern "C"  void ObjectPool__ctor_m1301426912 (ObjectPool_t3060192283 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool__ctor_m1301426912_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t3507493363 * L_0 = (List_1_t3507493363 *)il2cpp_codegen_object_new(List_1_t3507493363_il2cpp_TypeInfo_var);
		List_1__ctor_m2607136037(L_0, /*hidden argument*/List_1__ctor_m2607136037_MethodInfo_var);
		__this->set_availableObjects_3(L_0);
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// ObjectPool ObjectPool::GetPool(PooledObject)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* GameObject_t4012695102_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisObjectPool_t3060192283_m2048654178_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisObjectPool_t3060192283_m716885431_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral32046172;
extern const uint32_t ObjectPool_GetPool_m3503728148_MetadataUsageId;
extern "C"  ObjectPool_t3060192283 * ObjectPool_GetPool_m3503728148 (Il2CppObject * __this /* static, unused */, PooledObject_t2710534394 * ___prefab0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_GetPool_m3503728148_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t4012695102 * V_0 = NULL;
	ObjectPool_t3060192283 * V_1 = NULL;
	{
		bool L_0 = Application_get_isEditor_m1279348309(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		PooledObject_t2710534394 * L_1 = ___prefab0;
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m3709440845(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m138640077(NULL /*static, unused*/, L_2, _stringLiteral32046172, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_4 = GameObject_Find_m332785498(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		GameObject_t4012695102 * L_5 = V_0;
		bool L_6 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		GameObject_t4012695102 * L_7 = V_0;
		NullCheck(L_7);
		ObjectPool_t3060192283 * L_8 = GameObject_GetComponent_TisObjectPool_t3060192283_m2048654178(L_7, /*hidden argument*/GameObject_GetComponent_TisObjectPool_t3060192283_m2048654178_MethodInfo_var);
		V_1 = L_8;
		ObjectPool_t3060192283 * L_9 = V_1;
		bool L_10 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_003f;
		}
	}
	{
		ObjectPool_t3060192283 * L_11 = V_1;
		return L_11;
	}

IL_003f:
	{
		PooledObject_t2710534394 * L_12 = ___prefab0;
		NullCheck(L_12);
		String_t* L_13 = Object_get_name_m3709440845(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m138640077(NULL /*static, unused*/, L_13, _stringLiteral32046172, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_15 = (GameObject_t4012695102 *)il2cpp_codegen_object_new(GameObject_t4012695102_il2cpp_TypeInfo_var);
		GameObject__ctor_m3920833606(L_15, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		GameObject_t4012695102 * L_16 = V_0;
		Object_DontDestroyOnLoad_m4064482788(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_17 = V_0;
		NullCheck(L_17);
		ObjectPool_t3060192283 * L_18 = GameObject_AddComponent_TisObjectPool_t3060192283_m716885431(L_17, /*hidden argument*/GameObject_AddComponent_TisObjectPool_t3060192283_m716885431_MethodInfo_var);
		V_1 = L_18;
		ObjectPool_t3060192283 * L_19 = V_1;
		PooledObject_t2710534394 * L_20 = ___prefab0;
		NullCheck(L_19);
		L_19->set_prefab_2(L_20);
		ObjectPool_t3060192283 * L_21 = V_1;
		return L_21;
	}
}
// PooledObject ObjectPool::GetObject()
extern const MethodInfo* Object_Instantiate_TisPooledObject_t2710534394_m513996176_MethodInfo_var;
extern const uint32_t ObjectPool_GetObject_m1413673616_MetadataUsageId;
extern "C"  PooledObject_t2710534394 * ObjectPool_GetObject_m1413673616 (ObjectPool_t3060192283 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_GetObject_m1413673616_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	PooledObject_t2710534394 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_t3507493363 * L_0 = __this->get_availableObjects_3();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<PooledObject>::get_Count() */, L_0);
		V_1 = ((int32_t)((int32_t)L_1-(int32_t)1));
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		List_1_t3507493363 * L_3 = __this->get_availableObjects_3();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		PooledObject_t2710534394 * L_5 = VirtFuncInvoker1< PooledObject_t2710534394 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<PooledObject>::get_Item(System.Int32) */, L_3, L_4);
		V_0 = L_5;
		List_1_t3507493363 * L_6 = __this->get_availableObjects_3();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<PooledObject>::RemoveAt(System.Int32) */, L_6, L_7);
		PooledObject_t2710534394 * L_8 = V_0;
		NullCheck(L_8);
		GameObject_t4012695102 * L_9 = Component_get_gameObject_m1170635899(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_SetActive_m3538205401(L_9, (bool)1, /*hidden argument*/NULL);
		goto IL_0064;
	}

IL_003f:
	{
		PooledObject_t2710534394 * L_10 = __this->get_prefab_2();
		PooledObject_t2710534394 * L_11 = Object_Instantiate_TisPooledObject_t2710534394_m513996176(NULL /*static, unused*/, L_10, /*hidden argument*/Object_Instantiate_TisPooledObject_t2710534394_m513996176_MethodInfo_var);
		V_0 = L_11;
		PooledObject_t2710534394 * L_12 = V_0;
		NullCheck(L_12);
		Transform_t284553113 * L_13 = Component_get_transform_m4257140443(L_12, /*hidden argument*/NULL);
		Transform_t284553113 * L_14 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_SetParent_m263985879(L_13, L_14, (bool)0, /*hidden argument*/NULL);
		PooledObject_t2710534394 * L_15 = V_0;
		NullCheck(L_15);
		PooledObject_set_Pool_m3489764449(L_15, __this, /*hidden argument*/NULL);
	}

IL_0064:
	{
		PooledObject_t2710534394 * L_16 = V_0;
		return L_16;
	}
}
// System.Void ObjectPool::AddObject(PooledObject)
extern "C"  void ObjectPool_AddObject_m2124200836 (ObjectPool_t3060192283 * __this, PooledObject_t2710534394 * ___obj0, const MethodInfo* method)
{
	{
		PooledObject_t2710534394 * L_0 = ___obj0;
		NullCheck(L_0);
		GameObject_t4012695102 * L_1 = Component_get_gameObject_m1170635899(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m3538205401(L_1, (bool)0, /*hidden argument*/NULL);
		List_1_t3507493363 * L_2 = __this->get_availableObjects_3();
		PooledObject_t2710534394 * L_3 = ___obj0;
		NullCheck(L_2);
		VirtActionInvoker1< PooledObject_t2710534394 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<PooledObject>::Add(!0) */, L_2, L_3);
		return;
	}
}
// System.Void pellet::.ctor()
extern "C"  void pellet__ctor_m109098871 (pellet_t3303064996 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void pellet::Start()
extern "C"  void pellet_Start_m3351203959 (pellet_t3303064996 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void pellet::Update()
extern "C"  void pellet_Update_m813959798 (pellet_t3303064996 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void pellet::OnCollisionEnter(UnityEngine.Collision)
extern Il2CppCodeGenString* _stringLiteral109578560;
extern const uint32_t pellet_OnCollisionEnter_m2165693765_MetadataUsageId;
extern "C"  void pellet_OnCollisionEnter_m2165693765 (pellet_t3303064996 * __this, Collision_t1119538015 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (pellet_OnCollisionEnter_m2165693765_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collision_t1119538015 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t4012695102 * L_1 = Collision_get_gameObject_m4245316464(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = GameObject_CompareTag_m3153977471(L_1, _stringLiteral109578560, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		gameManager_t701720411 * L_3 = gameManager_get_Instance_m1060059930(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		gameManager_SetTileSpeed_m2021669899(L_3, /*hidden argument*/NULL);
		gameManager_t701720411 * L_4 = gameManager_get_Instance_m1060059930(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_5 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		gameManager_respawnPellet_m2770669714(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void PooledObject::.ctor()
extern "C"  void PooledObject__ctor_m869790433 (PooledObject_t2710534394 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// ObjectPool PooledObject::get_Pool()
extern "C"  ObjectPool_t3060192283 * PooledObject_get_Pool_m2003797034 (PooledObject_t2710534394 * __this, const MethodInfo* method)
{
	{
		ObjectPool_t3060192283 * L_0 = __this->get_U3CPoolU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void PooledObject::set_Pool(ObjectPool)
extern "C"  void PooledObject_set_Pool_m3489764449 (PooledObject_t2710534394 * __this, ObjectPool_t3060192283 * ___value0, const MethodInfo* method)
{
	{
		ObjectPool_t3060192283 * L_0 = ___value0;
		__this->set_U3CPoolU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void PooledObject::ReturnToPool()
extern Il2CppClass* Debug_t1588791936_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2122563864;
extern const uint32_t PooledObject_ReturnToPool_m3747568906_MetadataUsageId;
extern "C"  void PooledObject_ReturnToPool_m3747568906 (PooledObject_t2710534394 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PooledObject_ReturnToPool_m3747568906_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectPool_t3060192283 * L_0 = PooledObject_get_Pool_m2003797034(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		ObjectPool_t3060192283 * L_2 = PooledObject_get_Pool_m2003797034(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ObjectPool_AddObject_m2124200836(L_2, __this, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1588791936_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, _stringLiteral2122563864, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_3 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0036:
	{
		return;
	}
}
// System.Void snake::.ctor()
extern "C"  void snake__ctor_m2713987115 (snake_t109578560 * __this, const MethodInfo* method)
{
	{
		__this->set_snakeSpeed_4((0.05f));
		__this->set_tailStartingScale_7((0.75f));
		__this->set_maxLength_12(6);
		Vector2_t3525329788  L_0 = Vector2_get_zero_m199872368(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_fingerStartPos_16(L_0);
		__this->set_minSwipeDist_18((50.0f));
		__this->set_maxSwipeTime_19((0.5f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void snake::Awake()
extern "C"  void snake_Awake_m2951592334 (snake_t109578560 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void snake::Start()
extern const MethodInfo* Component_GetComponent_TisBoxCollider_t131631884_m1593759217_MethodInfo_var;
extern const uint32_t snake_Start_m1661124907_MetadataUsageId;
extern "C"  void snake_Start_m1661124907 (snake_t109578560 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (snake_Start_m1661124907_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoxCollider_t131631884 * L_0 = Component_GetComponent_TisBoxCollider_t131631884_m1593759217(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_t131631884_m1593759217_MethodInfo_var);
		NullCheck(L_0);
		Collider_set_enabled_m2575670866(L_0, (bool)1, /*hidden argument*/NULL);
		Transform_t284553113 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3525329789  L_2 = Transform_get_position_m2211398607(L_1, /*hidden argument*/NULL);
		__this->set_lastKnownPosition_11(L_2);
		__this->set_cachedInput_10(4);
		__this->set_direction_8(0);
		Vector3_t3525329789  L_3 = Vector3_get_right_m4015137012(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_orientation_3(L_3);
		snake_scaleBodyParts_m2574867661(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void snake::Update()
extern Il2CppCodeGenString* _stringLiteral99456;
extern const uint32_t snake_Update_m4256084034_MetadataUsageId;
extern "C"  void snake_Update_m4256084034 (snake_t109578560 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (snake_Update_m4256084034_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3_t3525329789  L_0 = Vector3_get_right_m4015137012(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = __this->get_snakeSpeed_4();
		Vector3_t3525329789  L_2 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_orientation_3(L_2);
		snake_cacheInput_m2459006209(__this, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_triggerCount_6();
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		bool L_4 = __this->get_died_14();
		if (!L_4)
		{
			goto IL_0044;
		}
	}

IL_0033:
	{
		MonoBehaviour_StartCoroutine_m2272783641(__this, _stringLiteral99456, /*hidden argument*/NULL);
		goto IL_005d;
	}

IL_0044:
	{
		snake_move_m1763767082(__this, /*hidden argument*/NULL);
		Vector3_t3525329789  L_5 = __this->get_lastKnownPosition_11();
		Il2CppObject * L_6 = snake_Follow_m1691356855(__this, L_5, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2135303124(__this, L_6, /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Collections.IEnumerator snake::Follow(UnityEngine.Vector3)
extern Il2CppClass* U3CFollowU3Ec__Iterator4_t2369392276_il2cpp_TypeInfo_var;
extern const uint32_t snake_Follow_m1691356855_MetadataUsageId;
extern "C"  Il2CppObject * snake_Follow_m1691356855 (snake_t109578560 * __this, Vector3_t3525329789  ___lastKnownPosition0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (snake_Follow_m1691356855_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	U3CFollowU3Ec__Iterator4_t2369392276 * V_0 = NULL;
	{
		U3CFollowU3Ec__Iterator4_t2369392276 * L_0 = (U3CFollowU3Ec__Iterator4_t2369392276 *)il2cpp_codegen_object_new(U3CFollowU3Ec__Iterator4_t2369392276_il2cpp_TypeInfo_var);
		U3CFollowU3Ec__Iterator4__ctor_m1270569976(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFollowU3Ec__Iterator4_t2369392276 * L_1 = V_0;
		Vector3_t3525329789  L_2 = ___lastKnownPosition0;
		NullCheck(L_1);
		L_1->set_lastKnownPosition_0(L_2);
		U3CFollowU3Ec__Iterator4_t2369392276 * L_3 = V_0;
		Vector3_t3525329789  L_4 = ___lastKnownPosition0;
		NullCheck(L_3);
		L_3->set_U3CU24U3ElastKnownPosition_7(L_4);
		U3CFollowU3Ec__Iterator4_t2369392276 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_U3CU3Ef__this_8(__this);
		U3CFollowU3Ec__Iterator4_t2369392276 * L_6 = V_0;
		return L_6;
	}
}
// System.Void snake::OnTriggerEnter()
extern "C"  void snake_OnTriggerEnter_m1798801784 (snake_t109578560 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_triggerCount_6();
		__this->set_triggerCount_6(((int32_t)((int32_t)L_0+(int32_t)1)));
		return;
	}
}
// System.Void snake::OnTriggerExit()
extern "C"  void snake_OnTriggerExit_m2560797472 (snake_t109578560 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_triggerCount_6();
		__this->set_triggerCount_6(((int32_t)((int32_t)L_0-(int32_t)1)));
		return;
	}
}
// System.Void snake::move()
extern "C"  void snake_move_m1763767082 (snake_t109578560 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_frame_5();
		__this->set_frame_5(((int32_t)((int32_t)L_0+(int32_t)1)));
		bool L_1 = snake_checkForMove_m2972993271(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_01d1;
		}
	}
	{
		int32_t L_2 = __this->get_direction_8();
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (L_3 == 0)
		{
			goto IL_003b;
		}
		if (L_3 == 1)
		{
			goto IL_00a0;
		}
		if (L_3 == 2)
		{
			goto IL_0105;
		}
		if (L_3 == 3)
		{
			goto IL_016b;
		}
	}
	{
		goto IL_01d1;
	}

IL_003b:
	{
		int32_t L_4 = __this->get_cachedInput_10();
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_006e;
		}
	}
	{
		Transform_t284553113 * L_5 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_Rotate_m569346304(L_5, (0.0f), (90.0f), (0.0f), 0, /*hidden argument*/NULL);
		__this->set_direction_8(3);
		goto IL_009b;
	}

IL_006e:
	{
		int32_t L_6 = __this->get_cachedInput_10();
		if (L_6)
		{
			goto IL_009b;
		}
	}
	{
		Transform_t284553113 * L_7 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_Rotate_m569346304(L_7, (0.0f), (270.0f), (0.0f), 0, /*hidden argument*/NULL);
		__this->set_direction_8(2);
	}

IL_009b:
	{
		goto IL_01d1;
	}

IL_00a0:
	{
		int32_t L_8 = __this->get_cachedInput_10();
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_00d3;
		}
	}
	{
		Transform_t284553113 * L_9 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_Rotate_m569346304(L_9, (0.0f), (270.0f), (0.0f), 0, /*hidden argument*/NULL);
		__this->set_direction_8(3);
		goto IL_0100;
	}

IL_00d3:
	{
		int32_t L_10 = __this->get_cachedInput_10();
		if (L_10)
		{
			goto IL_0100;
		}
	}
	{
		Transform_t284553113 * L_11 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_Rotate_m569346304(L_11, (0.0f), (90.0f), (0.0f), 0, /*hidden argument*/NULL);
		__this->set_direction_8(2);
	}

IL_0100:
	{
		goto IL_01d1;
	}

IL_0105:
	{
		int32_t L_12 = __this->get_cachedInput_10();
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			goto IL_0138;
		}
	}
	{
		Transform_t284553113 * L_13 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_Rotate_m569346304(L_13, (0.0f), (90.0f), (0.0f), 0, /*hidden argument*/NULL);
		__this->set_direction_8(0);
		goto IL_0166;
	}

IL_0138:
	{
		int32_t L_14 = __this->get_cachedInput_10();
		if ((!(((uint32_t)L_14) == ((uint32_t)3))))
		{
			goto IL_0166;
		}
	}
	{
		Transform_t284553113 * L_15 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_Rotate_m569346304(L_15, (0.0f), (270.0f), (0.0f), 0, /*hidden argument*/NULL);
		__this->set_direction_8(1);
	}

IL_0166:
	{
		goto IL_01d1;
	}

IL_016b:
	{
		int32_t L_16 = __this->get_cachedInput_10();
		if ((!(((uint32_t)L_16) == ((uint32_t)2))))
		{
			goto IL_019e;
		}
	}
	{
		Transform_t284553113 * L_17 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_Rotate_m569346304(L_17, (0.0f), (270.0f), (0.0f), 0, /*hidden argument*/NULL);
		__this->set_direction_8(0);
		goto IL_01cc;
	}

IL_019e:
	{
		int32_t L_18 = __this->get_cachedInput_10();
		if ((!(((uint32_t)L_18) == ((uint32_t)3))))
		{
			goto IL_01cc;
		}
	}
	{
		Transform_t284553113 * L_19 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_Rotate_m569346304(L_19, (0.0f), (90.0f), (0.0f), 0, /*hidden argument*/NULL);
		__this->set_direction_8(1);
	}

IL_01cc:
	{
		goto IL_01d1;
	}

IL_01d1:
	{
		Transform_t284553113 * L_20 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t3525329789  L_21 = __this->get_orientation_3();
		NullCheck(L_20);
		Transform_Translate_m2849099360(L_20, L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean snake::checkForMove()
extern "C"  bool snake_checkForMove_m2972993271 (snake_t109578560 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	Vector3_t3525329789  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3525329789  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = (bool)0;
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3525329789  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_x_1();
		bool L_3 = snake_checkWholeNumber_m680177070(__this, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		Transform_t284553113 * L_4 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3525329789  L_5 = Transform_get_position_m2211398607(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = (&V_2)->get_z_3();
		bool L_7 = snake_checkWholeNumber_m680177070(__this, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		V_0 = (bool)1;
		Transform_t284553113 * L_8 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3525329789  L_9 = Transform_get_position_m2211398607(L_8, /*hidden argument*/NULL);
		__this->set_lastKnownPosition_11(L_9);
	}

IL_0051:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Collections.IEnumerator snake::die()
extern Il2CppClass* U3CdieU3Ec__Iterator5_t2723074110_il2cpp_TypeInfo_var;
extern const uint32_t snake_die_m821798449_MetadataUsageId;
extern "C"  Il2CppObject * snake_die_m821798449 (snake_t109578560 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (snake_die_m821798449_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	U3CdieU3Ec__Iterator5_t2723074110 * V_0 = NULL;
	{
		U3CdieU3Ec__Iterator5_t2723074110 * L_0 = (U3CdieU3Ec__Iterator5_t2723074110 *)il2cpp_codegen_object_new(U3CdieU3Ec__Iterator5_t2723074110_il2cpp_TypeInfo_var);
		U3CdieU3Ec__Iterator5__ctor_m3641784092(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CdieU3Ec__Iterator5_t2723074110 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3Ef__this_2(__this);
		U3CdieU3Ec__Iterator5_t2723074110 * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean snake::checkWholeNumber(System.Single)
extern Il2CppClass* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t snake_checkWholeNumber_m680177070_MetadataUsageId;
extern "C"  bool snake_checkWholeNumber_m680177070 (snake_t109578560 * __this, float ___myFloat0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (snake_checkWholeNumber_m680177070_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___myFloat0;
		float L_1 = ___myFloat0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_RoundToInt_m3163545820(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		bool L_3 = snake_IsApproximately_m1355409916(__this, L_0, (((float)((float)L_2))), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void snake::cacheInput()
extern Il2CppClass* Input_t1593691127_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t snake_cacheInput_m2459006209_MetadataUsageId;
extern "C"  void snake_cacheInput_m2459006209 (snake_t109578560 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (snake_cacheInput_m2459006209_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Touch_t1603883884  V_0;
	memset(&V_0, 0, sizeof(V_0));
	TouchU5BU5D_t376223077* V_1 = NULL;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_t3525329788  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector2_t3525329788  V_6;
	memset(&V_6, 0, sizeof(V_6));
	int32_t V_7 = 0;
	Vector2_t3525329788  V_8;
	memset(&V_8, 0, sizeof(V_8));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m1430909390(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_01b5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		TouchU5BU5D_t376223077* L_1 = Input_get_touches_m300368858(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		V_2 = 0;
		goto IL_01ac;
	}

IL_0018:
	{
		TouchU5BU5D_t376223077* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		V_0 = (*(Touch_t1603883884 *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))));
		int32_t L_4 = Touch_get_phase_m3314549414((&V_0), /*hidden argument*/NULL);
		V_7 = L_4;
		int32_t L_5 = V_7;
		if (L_5 == 0)
		{
			goto IL_004e;
		}
		if (L_5 == 1)
		{
			goto IL_01a8;
		}
		if (L_5 == 2)
		{
			goto IL_01a8;
		}
		if (L_5 == 3)
		{
			goto IL_007e;
		}
		if (L_5 == 4)
		{
			goto IL_0072;
		}
	}
	{
		goto IL_01a8;
	}

IL_004e:
	{
		__this->set_isSwipe_17((bool)1);
		float L_6 = Time_get_time_m342192902(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_fingerStartTime_15(L_6);
		Vector2_t3525329788  L_7 = Touch_get_position_m1943849441((&V_0), /*hidden argument*/NULL);
		__this->set_fingerStartPos_16(L_7);
		goto IL_01a8;
	}

IL_0072:
	{
		__this->set_isSwipe_17((bool)0);
		goto IL_01a8;
	}

IL_007e:
	{
		float L_8 = Time_get_time_m342192902(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = __this->get_fingerStartTime_15();
		V_3 = ((float)((float)L_8-(float)L_9));
		Vector2_t3525329788  L_10 = Touch_get_position_m1943849441((&V_0), /*hidden argument*/NULL);
		Vector2_t3525329788  L_11 = __this->get_fingerStartPos_16();
		Vector2_t3525329788  L_12 = Vector2_op_Subtraction_m2097149401(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		V_8 = L_12;
		float L_13 = Vector2_get_magnitude_m1987058139((&V_8), /*hidden argument*/NULL);
		V_4 = L_13;
		bool L_14 = __this->get_isSwipe_17();
		if (!L_14)
		{
			goto IL_01a3;
		}
	}
	{
		float L_15 = V_3;
		float L_16 = __this->get_maxSwipeTime_19();
		if ((!(((float)L_15) < ((float)L_16))))
		{
			goto IL_01a3;
		}
	}
	{
		float L_17 = V_4;
		float L_18 = __this->get_minSwipeDist_18();
		if ((!(((float)L_17) > ((float)L_18))))
		{
			goto IL_01a3;
		}
	}
	{
		Vector2_t3525329788  L_19 = Touch_get_position_m1943849441((&V_0), /*hidden argument*/NULL);
		Vector2_t3525329788  L_20 = __this->get_fingerStartPos_16();
		Vector2_t3525329788  L_21 = Vector2_op_Subtraction_m2097149401(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		V_5 = L_21;
		Vector2_t3525329788  L_22 = Vector2_get_zero_m199872368(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_6 = L_22;
		float L_23 = (&V_5)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_24 = fabsf(L_23);
		float L_25 = (&V_5)->get_y_2();
		float L_26 = fabsf(L_25);
		if ((!(((float)L_24) > ((float)L_26))))
		{
			goto IL_0121;
		}
	}
	{
		Vector2_t3525329788  L_27 = Vector2_get_right_m3495203638(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_28 = (&V_5)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_29 = Mathf_Sign_m4040614993(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		Vector2_t3525329788  L_30 = Vector2_op_Multiply_m1738245082(NULL /*static, unused*/, L_27, L_29, /*hidden argument*/NULL);
		V_6 = L_30;
		goto IL_0139;
	}

IL_0121:
	{
		Vector2_t3525329788  L_31 = Vector2_get_up_m1197831267(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_32 = (&V_5)->get_y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_33 = Mathf_Sign_m4040614993(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		Vector2_t3525329788  L_34 = Vector2_op_Multiply_m1738245082(NULL /*static, unused*/, L_31, L_33, /*hidden argument*/NULL);
		V_6 = L_34;
	}

IL_0139:
	{
		float L_35 = (&V_6)->get_x_1();
		if ((((float)L_35) == ((float)(0.0f))))
		{
			goto IL_016e;
		}
	}
	{
		float L_36 = (&V_6)->get_x_1();
		if ((!(((float)L_36) > ((float)(0.0f)))))
		{
			goto IL_0167;
		}
	}
	{
		__this->set_cachedInput_10(1);
		goto IL_016e;
	}

IL_0167:
	{
		__this->set_cachedInput_10(0);
	}

IL_016e:
	{
		float L_37 = (&V_6)->get_y_2();
		if ((((float)L_37) == ((float)(0.0f))))
		{
			goto IL_01a3;
		}
	}
	{
		float L_38 = (&V_6)->get_y_2();
		if ((!(((float)L_38) > ((float)(0.0f)))))
		{
			goto IL_019c;
		}
	}
	{
		__this->set_cachedInput_10(2);
		goto IL_01a3;
	}

IL_019c:
	{
		__this->set_cachedInput_10(3);
	}

IL_01a3:
	{
		goto IL_01a8;
	}

IL_01a8:
	{
		int32_t L_39 = V_2;
		V_2 = ((int32_t)((int32_t)L_39+(int32_t)1));
	}

IL_01ac:
	{
		int32_t L_40 = V_2;
		TouchU5BU5D_t376223077* L_41 = V_1;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_41)->max_length)))))))
		{
			goto IL_0018;
		}
	}

IL_01b5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_42 = Input_GetKeyDown_m2928824675(NULL /*static, unused*/, ((int32_t)273), /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_01cb;
		}
	}
	{
		__this->set_cachedInput_10(2);
	}

IL_01cb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_43 = Input_GetKeyDown_m2928824675(NULL /*static, unused*/, ((int32_t)274), /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_01e1;
		}
	}
	{
		__this->set_cachedInput_10(3);
	}

IL_01e1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_44 = Input_GetKeyDown_m2928824675(NULL /*static, unused*/, ((int32_t)276), /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_01f7;
		}
	}
	{
		__this->set_cachedInput_10(0);
	}

IL_01f7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_45 = Input_GetKeyDown_m2928824675(NULL /*static, unused*/, ((int32_t)275), /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_020d;
		}
	}
	{
		__this->set_cachedInput_10(1);
	}

IL_020d:
	{
		return;
	}
}
// System.Boolean snake::IsApproximately(System.Single,System.Single)
extern "C"  bool snake_IsApproximately_m1355409916 (snake_t109578560 * __this, float ___a0, float ___b1, const MethodInfo* method)
{
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		bool L_2 = snake_IsApproximately_m3795143649(__this, L_0, L_1, (0.02f), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean snake::IsApproximately(System.Single,System.Single,System.Single)
extern Il2CppClass* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t snake_IsApproximately_m3795143649_MetadataUsageId;
extern "C"  bool snake_IsApproximately_m3795143649 (snake_t109578560 * __this, float ___a0, float ___b1, float ___tolerance2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (snake_IsApproximately_m3795143649_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_2 = fabsf(((float)((float)L_0-(float)L_1)));
		float L_3 = ___tolerance2;
		return (bool)((((float)L_2) < ((float)L_3))? 1 : 0);
	}
}
// System.Void snake::OnCollisionEnter(UnityEngine.Collision)
extern Il2CppClass* GameObject_t4012695102_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3303064996;
extern Il2CppCodeGenString* _stringLiteral3029410;
extern Il2CppCodeGenString* _stringLiteral99456;
extern const uint32_t snake_OnCollisionEnter_m776568313_MetadataUsageId;
extern "C"  void snake_OnCollisionEnter_m776568313 (snake_t109578560 * __this, Collision_t1119538015 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (snake_OnCollisionEnter_m776568313_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t4012695102 * V_0 = NULL;
	{
		Collision_t1119538015 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t4012695102 * L_1 = Collision_get_gameObject_m4245316464(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = GameObject_CompareTag_m3153977471(L_1, _stringLiteral3303064996, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0074;
		}
	}
	{
		gameManager_t701720411 * L_3 = gameManager_get_Instance_m1060059930(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		gameManager_increaseScore_m3879389214(L_3, /*hidden argument*/NULL);
		bool L_4 = snake_canAddBodyPart_m3089795435(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0074;
		}
	}
	{
		GameObject_t4012695102 * L_5 = __this->get_snakeBody_13();
		List_1_t514686775 * L_6 = __this->get_bodyParts_2();
		List_1_t514686775 * L_7 = __this->get_bodyParts_2();
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_7);
		NullCheck(L_6);
		GameObject_t4012695102 * L_9 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_6, ((int32_t)((int32_t)L_8-(int32_t)1)));
		NullCheck(L_9);
		Transform_t284553113 * L_10 = GameObject_get_transform_m1278640159(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t3525329789  L_11 = Transform_get_position_m2211398607(L_10, /*hidden argument*/NULL);
		Quaternion_t1891715979  L_12 = Quaternion_get_identity_m1743882806(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t3878351788 * L_13 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_5, L_11, L_12, /*hidden argument*/NULL);
		V_0 = ((GameObject_t4012695102 *)CastclassSealed(L_13, GameObject_t4012695102_il2cpp_TypeInfo_var));
		List_1_t514686775 * L_14 = __this->get_bodyParts_2();
		GameObject_t4012695102 * L_15 = V_0;
		NullCheck(L_14);
		VirtActionInvoker1< GameObject_t4012695102 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0) */, L_14, L_15);
		snake_scaleBodyParts_m2574867661(__this, /*hidden argument*/NULL);
	}

IL_0074:
	{
		Collision_t1119538015 * L_16 = ___other0;
		NullCheck(L_16);
		GameObject_t4012695102 * L_17 = Collision_get_gameObject_m4245316464(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		bool L_18 = GameObject_CompareTag_m3153977471(L_17, _stringLiteral3029410, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_009c;
		}
	}
	{
		__this->set_died_14((bool)1);
		MonoBehaviour_StartCoroutine_m2272783641(__this, _stringLiteral99456, /*hidden argument*/NULL);
	}

IL_009c:
	{
		return;
	}
}
// System.Boolean snake::canAddBodyPart()
extern "C"  bool snake_canAddBodyPart_m3089795435 (snake_t109578560 * __this, const MethodInfo* method)
{
	{
		List_1_t514686775 * L_0 = __this->get_bodyParts_2();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_0);
		int32_t L_2 = __this->get_maxLength_12();
		if ((((int32_t)L_1) > ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		return (bool)0;
	}
}
// System.Void snake::scaleBodyParts()
extern Il2CppClass* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t snake_scaleBodyParts_m2574867661_MetadataUsageId;
extern "C"  void snake_scaleBodyParts_m2574867661 (snake_t109578560 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (snake_scaleBodyParts_m2574867661_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		List_1_t514686775 * L_0 = __this->get_bodyParts_2();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_0);
		V_2 = ((int32_t)((int32_t)L_1-(int32_t)1));
		goto IL_0051;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_3 = log10f((((float)((float)((int32_t)((int32_t)L_2+(int32_t)2))))));
		V_1 = ((float)((float)(0.3f)+(float)((float)((float)L_3/(float)(2.0f)))));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
		List_1_t514686775 * L_5 = __this->get_bodyParts_2();
		int32_t L_6 = V_2;
		NullCheck(L_5);
		GameObject_t4012695102 * L_7 = VirtFuncInvoker1< GameObject_t4012695102 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_5, L_6);
		NullCheck(L_7);
		Transform_t284553113 * L_8 = GameObject_get_transform_m1278640159(L_7, /*hidden argument*/NULL);
		float L_9 = V_1;
		float L_10 = V_1;
		float L_11 = V_1;
		Vector3_t3525329789  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector3__ctor_m2926210380(&L_12, L_9, L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localScale_m310756934(L_8, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
// System.Void snake/<die>c__Iterator5::.ctor()
extern "C"  void U3CdieU3Ec__Iterator5__ctor_m3641784092 (U3CdieU3Ec__Iterator5_t2723074110 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object snake/<die>c__Iterator5::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  Il2CppObject * U3CdieU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2711392438 (U3CdieU3Ec__Iterator5_t2723074110 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object snake/<die>c__Iterator5::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * U3CdieU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m2265104458 (U3CdieU3Ec__Iterator5_t2723074110 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Boolean snake/<die>c__Iterator5::MoveNext()
extern Il2CppClass* WaitForSeconds_t1291133240_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisBoxCollider_t131631884_m3222626457_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody_t1972007546_m2158183595_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisRigidbody_t1972007546_m686365494_MethodInfo_var;
extern const uint32_t U3CdieU3Ec__Iterator5_MoveNext_m2027408728_MetadataUsageId;
extern "C"  bool U3CdieU3Ec__Iterator5_MoveNext_m2027408728 (U3CdieU3Ec__Iterator5_t2723074110 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CdieU3Ec__Iterator5_MoveNext_m2027408728_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U24PC_0();
		V_0 = L_0;
		__this->set_U24PC_0((-1));
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0048;
		}
	}
	{
		goto IL_00a7;
	}

IL_0021:
	{
		gameManager_t701720411 * L_2 = gameManager_get_Instance_m1060059930(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_died_9((bool)1);
		WaitForSeconds_t1291133240 * L_3 = (WaitForSeconds_t1291133240 *)il2cpp_codegen_object_new(WaitForSeconds_t1291133240_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_3, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_3);
		__this->set_U24PC_0(1);
		goto IL_00a9;
	}

IL_0048:
	{
		snake_t109578560 * L_4 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_4);
		GameObject_t4012695102 * L_5 = Component_get_gameObject_m1170635899(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		BoxCollider_t131631884 * L_6 = GameObject_GetComponent_TisBoxCollider_t131631884_m3222626457(L_5, /*hidden argument*/GameObject_GetComponent_TisBoxCollider_t131631884_m3222626457_MethodInfo_var);
		NullCheck(L_6);
		Collider_set_enabled_m2575670866(L_6, (bool)0, /*hidden argument*/NULL);
		snake_t109578560 * L_7 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_7);
		GameObject_t4012695102 * L_8 = Component_get_gameObject_m1170635899(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Rigidbody_t1972007546 * L_9 = GameObject_GetComponent_TisRigidbody_t1972007546_m2158183595(L_8, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t1972007546_m2158183595_MethodInfo_var);
		bool L_10 = Object_op_Equality_m3964590952(NULL /*static, unused*/, L_9, (Object_t3878351788 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_008a;
		}
	}
	{
		snake_t109578560 * L_11 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_11);
		GameObject_t4012695102 * L_12 = Component_get_gameObject_m1170635899(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_AddComponent_TisRigidbody_t1972007546_m686365494(L_12, /*hidden argument*/GameObject_AddComponent_TisRigidbody_t1972007546_m686365494_MethodInfo_var);
	}

IL_008a:
	{
		snake_t109578560 * L_13 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_13);
		GameObject_t4012695102 * L_14 = Component_get_gameObject_m1170635899(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Rigidbody_t1972007546 * L_15 = GameObject_GetComponent_TisRigidbody_t1972007546_m2158183595(L_14, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t1972007546_m2158183595_MethodInfo_var);
		NullCheck(L_15);
		Rigidbody_set_useGravity_m2620827635(L_15, (bool)1, /*hidden argument*/NULL);
		__this->set_U24PC_0((-1));
	}

IL_00a7:
	{
		return (bool)0;
	}

IL_00a9:
	{
		return (bool)1;
	}
	// Dead block : IL_00ab: ldloc.1
}
// System.Void snake/<die>c__Iterator5::Dispose()
extern "C"  void U3CdieU3Ec__Iterator5_Dispose_m3549416537 (U3CdieU3Ec__Iterator5_t2723074110 * __this, const MethodInfo* method)
{
	{
		__this->set_U24PC_0((-1));
		return;
	}
}
// System.Void snake/<die>c__Iterator5::Reset()
extern Il2CppClass* NotSupportedException_t1374155497_il2cpp_TypeInfo_var;
extern const uint32_t U3CdieU3Ec__Iterator5_Reset_m1288217033_MetadataUsageId;
extern "C"  void U3CdieU3Ec__Iterator5_Reset_m1288217033 (U3CdieU3Ec__Iterator5_t2723074110 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CdieU3Ec__Iterator5_Reset_m1288217033_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1374155497 * L_0 = (NotSupportedException_t1374155497 *)il2cpp_codegen_object_new(NotSupportedException_t1374155497_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m149930845(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void snake/<Follow>c__Iterator4::.ctor()
extern "C"  void U3CFollowU3Ec__Iterator4__ctor_m1270569976 (U3CFollowU3Ec__Iterator4_t2369392276 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object snake/<Follow>c__Iterator4::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  Il2CppObject * U3CFollowU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3138135204 (U3CFollowU3Ec__Iterator4_t2369392276 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Object snake/<Follow>c__Iterator4::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * U3CFollowU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m348385336 (U3CFollowU3Ec__Iterator4_t2369392276 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Boolean snake/<Follow>c__Iterator4::MoveNext()
extern Il2CppClass* Enumerator_t2895437063_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t1628921374_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3839587264_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2754408812_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisBody_t2076098_m3414227675_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2307909104_MethodInfo_var;
extern const uint32_t U3CFollowU3Ec__Iterator4_MoveNext_m2258730468_MetadataUsageId;
extern "C"  bool U3CFollowU3Ec__Iterator4_MoveNext_m2258730468 (U3CFollowU3Ec__Iterator4_t2369392276 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CFollowU3Ec__Iterator4_MoveNext_m2258730468_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00ea;
		}
	}
	{
		goto IL_00f1;
	}

IL_0021:
	{
		Vector3_t3525329789  L_2 = __this->get_lastKnownPosition_0();
		__this->set_U3ClastPositionU3E__0_1(L_2);
		snake_t109578560 * L_3 = __this->get_U3CU3Ef__this_8();
		NullCheck(L_3);
		List_1_t514686775 * L_4 = L_3->get_bodyParts_2();
		NullCheck(L_4);
		Enumerator_t2895437063  L_5 = List_1_GetEnumerator_m3839587264(L_4, /*hidden argument*/List_1_GetEnumerator_m3839587264_MethodInfo_var);
		__this->set_U3CU24s_3U3E__1_2(L_5);
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b1;
		}

IL_0048:
		{
			Enumerator_t2895437063 * L_6 = __this->get_address_of_U3CU24s_3U3E__1_2();
			GameObject_t4012695102 * L_7 = Enumerator_get_Current_m2754408812(L_6, /*hidden argument*/Enumerator_get_Current_m2754408812_MethodInfo_var);
			__this->set_U3CgU3E__2_3(L_7);
			GameObject_t4012695102 * L_8 = __this->get_U3CgU3E__2_3();
			NullCheck(L_8);
			Body_t2076098 * L_9 = GameObject_GetComponent_TisBody_t2076098_m3414227675(L_8, /*hidden argument*/GameObject_GetComponent_TisBody_t2076098_m3414227675_MethodInfo_var);
			NullCheck(L_9);
			Vector3_t3525329789  L_10 = L_9->get_lastKnownPosition_4();
			__this->set_U3CtempU3E__3_4(L_10);
			GameObject_t4012695102 * L_11 = __this->get_U3CgU3E__2_3();
			NullCheck(L_11);
			Transform_t284553113 * L_12 = GameObject_get_transform_m1278640159(L_11, /*hidden argument*/NULL);
			GameObject_t4012695102 * L_13 = __this->get_U3CgU3E__2_3();
			NullCheck(L_13);
			Transform_t284553113 * L_14 = GameObject_get_transform_m1278640159(L_13, /*hidden argument*/NULL);
			NullCheck(L_14);
			Vector3_t3525329789  L_15 = Transform_get_position_m2211398607(L_14, /*hidden argument*/NULL);
			Vector3_t3525329789  L_16 = __this->get_U3ClastPositionU3E__0_1();
			snake_t109578560 * L_17 = __this->get_U3CU3Ef__this_8();
			NullCheck(L_17);
			float L_18 = L_17->get_snakeSpeed_4();
			Vector3_t3525329789  L_19 = Vector3_MoveTowards_m2405650085(NULL /*static, unused*/, L_15, L_16, L_18, /*hidden argument*/NULL);
			NullCheck(L_12);
			Transform_set_position_m3111394108(L_12, L_19, /*hidden argument*/NULL);
			Vector3_t3525329789  L_20 = __this->get_U3CtempU3E__3_4();
			__this->set_U3ClastPositionU3E__0_1(L_20);
		}

IL_00b1:
		{
			Enumerator_t2895437063 * L_21 = __this->get_address_of_U3CU24s_3U3E__1_2();
			bool L_22 = Enumerator_MoveNext_m2307909104(L_21, /*hidden argument*/Enumerator_MoveNext_m2307909104_MethodInfo_var);
			if (L_22)
			{
				goto IL_0048;
			}
		}

IL_00c1:
		{
			IL2CPP_LEAVE(0xD7, FINALLY_00c6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_00c6;
	}

FINALLY_00c6:
	{ // begin finally (depth: 1)
		Enumerator_t2895437063  L_23 = __this->get_U3CU24s_3U3E__1_2();
		Enumerator_t2895437063  L_24 = L_23;
		Il2CppObject * L_25 = Box(Enumerator_t2895437063_il2cpp_TypeInfo_var, &L_24);
		NullCheck((Il2CppObject *)L_25);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, (Il2CppObject *)L_25);
		IL2CPP_END_FINALLY(198)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(198)
	{
		IL2CPP_JUMP_TBL(0xD7, IL_00d7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_00d7:
	{
		__this->set_U24current_6(NULL);
		__this->set_U24PC_5(1);
		goto IL_00f3;
	}

IL_00ea:
	{
		__this->set_U24PC_5((-1));
	}

IL_00f1:
	{
		return (bool)0;
	}

IL_00f3:
	{
		return (bool)1;
	}
	// Dead block : IL_00f5: ldloc.1
}
// System.Void snake/<Follow>c__Iterator4::Dispose()
extern "C"  void U3CFollowU3Ec__Iterator4_Dispose_m1145317941 (U3CFollowU3Ec__Iterator4_t2369392276 * __this, const MethodInfo* method)
{
	{
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void snake/<Follow>c__Iterator4::Reset()
extern Il2CppClass* NotSupportedException_t1374155497_il2cpp_TypeInfo_var;
extern const uint32_t U3CFollowU3Ec__Iterator4_Reset_m3211970213_MetadataUsageId;
extern "C"  void U3CFollowU3Ec__Iterator4_Reset_m3211970213 (U3CFollowU3Ec__Iterator4_t2369392276 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CFollowU3Ec__Iterator4_Reset_m3211970213_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1374155497 * L_0 = (NotSupportedException_t1374155497 *)il2cpp_codegen_object_new(NotSupportedException_t1374155497_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m149930845(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void Tile::.ctor()
extern "C"  void Tile__ctor_m2580515725 (Tile_t2606798 * __this, const MethodInfo* method)
{
	{
		__this->set_dropTimer_2((2.0f));
		__this->set_dropMultiplier_3((1.0f));
		__this->set_dropMultOffset_4((0.1f));
		__this->set_pelletOffset_7((1.2f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tile::Awake()
extern const MethodInfo* Component_GetComponent_TisRigidbody_t1972007546_m2174365699_MethodInfo_var;
extern const uint32_t Tile_Awake_m2818120944_MetadataUsageId;
extern "C"  void Tile_Awake_m2818120944 (Tile_t2606798 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Tile_Awake_m2818120944_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = Random_Range_m3362417303(NULL /*static, unused*/, (3.0f), (10.0f), /*hidden argument*/NULL);
		__this->set_baseWaitTime_5(L_0);
		float L_1 = Random_Range_m3362417303(NULL /*static, unused*/, (1.0f), (3.0f), /*hidden argument*/NULL);
		__this->set_baseReturnTime_6(L_1);
		float L_2 = __this->get_baseWaitTime_5();
		__this->set_waitTime_9(L_2);
		float L_3 = __this->get_baseReturnTime_6();
		__this->set_returnTime_8(L_3);
		Rigidbody_t1972007546 * L_4 = Component_GetComponent_TisRigidbody_t1972007546_m2174365699(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t1972007546_m2174365699_MethodInfo_var);
		__this->set_rigidBody_12(L_4);
		Transform_t284553113 * L_5 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t3525329789  L_6 = Transform_get_position_m2211398607(L_5, /*hidden argument*/NULL);
		__this->set_startingPosition_10(L_6);
		Vector3_t3525329789  L_7 = __this->get_startingPosition_10();
		float L_8 = __this->get_pelletOffset_7();
		Vector3_t3525329789  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m2926210380(&L_9, (0.0f), L_8, (0.0f), /*hidden argument*/NULL);
		Vector3_t3525329789  L_10 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		__this->set_pelletLocation_11(L_10);
		return;
	}
}
// System.Void Tile::Update()
extern "C"  void Tile_Update_m118470944 (Tile_t2606798 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Collections.IEnumerator Tile::DropTile()
extern Il2CppClass* U3CDropTileU3Ec__Iterator1_t3664047749_il2cpp_TypeInfo_var;
extern const uint32_t Tile_DropTile_m3433871964_MetadataUsageId;
extern "C"  Il2CppObject * Tile_DropTile_m3433871964 (Tile_t2606798 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Tile_DropTile_m3433871964_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	U3CDropTileU3Ec__Iterator1_t3664047749 * V_0 = NULL;
	{
		U3CDropTileU3Ec__Iterator1_t3664047749 * L_0 = (U3CDropTileU3Ec__Iterator1_t3664047749 *)il2cpp_codegen_object_new(U3CDropTileU3Ec__Iterator1_t3664047749_il2cpp_TypeInfo_var);
		U3CDropTileU3Ec__Iterator1__ctor_m208407365(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDropTileU3Ec__Iterator1_t3664047749 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3Ef__this_2(__this);
		U3CDropTileU3Ec__Iterator1_t3664047749 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Tile::OnTriggerEnter(UnityEngine.Collider)
extern Il2CppCodeGenString* _stringLiteral109578560;
extern Il2CppCodeGenString* _stringLiteral3029410;
extern Il2CppCodeGenString* _stringLiteral3927067229;
extern const uint32_t Tile_OnTriggerEnter_m309774091_MetadataUsageId;
extern "C"  void Tile_OnTriggerEnter_m309774091 (Tile_t2606798 * __this, Collider_t955670625 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Tile_OnTriggerEnter_m309774091_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider_t955670625 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t4012695102 * L_1 = Component_get_gameObject_m1170635899(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = GameObject_CompareTag_m3153977471(L_1, _stringLiteral109578560, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		Collider_t955670625 * L_3 = ___other0;
		NullCheck(L_3);
		GameObject_t4012695102 * L_4 = Component_get_gameObject_m1170635899(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = GameObject_CompareTag_m3153977471(L_4, _stringLiteral3029410, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}

IL_002a:
	{
		MonoBehaviour_StopCoroutine_m2790918991(__this, _stringLiteral3927067229, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void Tile::OnTriggerExit(UnityEngine.Collider)
extern Il2CppCodeGenString* _stringLiteral109578560;
extern Il2CppCodeGenString* _stringLiteral3029410;
extern Il2CppCodeGenString* _stringLiteral3927067229;
extern const uint32_t Tile_OnTriggerExit_m1738125623_MetadataUsageId;
extern "C"  void Tile_OnTriggerExit_m1738125623 (Tile_t2606798 * __this, Collider_t955670625 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Tile_OnTriggerExit_m1738125623_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider_t955670625 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t4012695102 * L_1 = Component_get_gameObject_m1170635899(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = GameObject_CompareTag_m3153977471(L_1, _stringLiteral109578560, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		Collider_t955670625 * L_3 = ___other0;
		NullCheck(L_3);
		GameObject_t4012695102 * L_4 = Component_get_gameObject_m1170635899(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = GameObject_CompareTag_m3153977471(L_4, _stringLiteral3029410, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}

IL_002a:
	{
		MonoBehaviour_StartCoroutine_m2272783641(__this, _stringLiteral3927067229, /*hidden argument*/NULL);
	}

IL_0036:
	{
		return;
	}
}
// System.Collections.IEnumerator Tile::FadeOut(UnityEngine.Vector3,System.Single)
extern Il2CppClass* U3CFadeOutU3Ec__Iterator2_t2138668265_il2cpp_TypeInfo_var;
extern const uint32_t Tile_FadeOut_m1155006473_MetadataUsageId;
extern "C"  Il2CppObject * Tile_FadeOut_m1155006473 (Tile_t2606798 * __this, Vector3_t3525329789  ___position0, float ___time1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Tile_FadeOut_m1155006473_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	U3CFadeOutU3Ec__Iterator2_t2138668265 * V_0 = NULL;
	{
		U3CFadeOutU3Ec__Iterator2_t2138668265 * L_0 = (U3CFadeOutU3Ec__Iterator2_t2138668265 *)il2cpp_codegen_object_new(U3CFadeOutU3Ec__Iterator2_t2138668265_il2cpp_TypeInfo_var);
		U3CFadeOutU3Ec__Iterator2__ctor_m600966451(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFadeOutU3Ec__Iterator2_t2138668265 * L_1 = V_0;
		float L_2 = ___time1;
		NullCheck(L_1);
		L_1->set_time_2(L_2);
		U3CFadeOutU3Ec__Iterator2_t2138668265 * L_3 = V_0;
		Vector3_t3525329789  L_4 = ___position0;
		NullCheck(L_3);
		L_3->set_position_3(L_4);
		U3CFadeOutU3Ec__Iterator2_t2138668265 * L_5 = V_0;
		float L_6 = ___time1;
		NullCheck(L_5);
		L_5->set_U3CU24U3Etime_6(L_6);
		U3CFadeOutU3Ec__Iterator2_t2138668265 * L_7 = V_0;
		Vector3_t3525329789  L_8 = ___position0;
		NullCheck(L_7);
		L_7->set_U3CU24U3Eposition_7(L_8);
		U3CFadeOutU3Ec__Iterator2_t2138668265 * L_9 = V_0;
		NullCheck(L_9);
		L_9->set_U3CU3Ef__this_8(__this);
		U3CFadeOutU3Ec__Iterator2_t2138668265 * L_10 = V_0;
		return L_10;
	}
}
// System.Void Tile::increaseDropMultiplier()
extern "C"  void Tile_increaseDropMultiplier_m1354506985 (Tile_t2606798 * __this, const MethodInfo* method)
{
	{
		float L_0 = __this->get_dropMultiplier_3();
		float L_1 = __this->get_dropMultOffset_4();
		__this->set_dropMultiplier_3(((float)((float)L_0+(float)L_1)));
		return;
	}
}
// System.Void Tile::increaseTimers()
extern "C"  void Tile_increaseTimers_m2013362983 (Tile_t2606798 * __this, const MethodInfo* method)
{
	{
		Tile_increaseDropMultiplier_m1354506985(__this, /*hidden argument*/NULL);
		float L_0 = __this->get_baseWaitTime_5();
		float L_1 = __this->get_dropMultiplier_3();
		__this->set_waitTime_9(((float)((float)L_0*(float)L_1)));
		float L_2 = __this->get_baseReturnTime_6();
		float L_3 = __this->get_dropMultiplier_3();
		__this->set_returnTime_8(((float)((float)L_2*(float)L_3)));
		return;
	}
}
// System.Void Tile/<DropTile>c__Iterator1::.ctor()
extern "C"  void U3CDropTileU3Ec__Iterator1__ctor_m208407365 (U3CDropTileU3Ec__Iterator1_t3664047749 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Tile/<DropTile>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  Il2CppObject * U3CDropTileU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3088733869 (U3CDropTileU3Ec__Iterator1_t3664047749 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object Tile/<DropTile>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * U3CDropTileU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m992040001 (U3CDropTileU3Ec__Iterator1_t3664047749 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Boolean Tile/<DropTile>c__Iterator1::MoveNext()
extern Il2CppClass* WaitForSeconds_t1291133240_il2cpp_TypeInfo_var;
extern const uint32_t U3CDropTileU3Ec__Iterator1_MoveNext_m1414518415_MetadataUsageId;
extern "C"  bool U3CDropTileU3Ec__Iterator1_MoveNext_m1414518415 (U3CDropTileU3Ec__Iterator1_t3664047749 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CDropTileU3Ec__Iterator1_MoveNext_m1414518415_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U24PC_0();
		V_0 = L_0;
		__this->set_U24PC_0((-1));
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0025;
		}
		if (L_1 == 1)
		{
			goto IL_0041;
		}
		if (L_1 == 2)
		{
			goto IL_0074;
		}
	}
	{
		goto IL_00a8;
	}

IL_0025:
	{
		WaitForSeconds_t1291133240 * L_2 = (WaitForSeconds_t1291133240 *)il2cpp_codegen_object_new(WaitForSeconds_t1291133240_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_2, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_2);
		__this->set_U24PC_0(1);
		goto IL_00aa;
	}

IL_0041:
	{
		Tile_t2606798 * L_3 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_3);
		Rigidbody_t1972007546 * L_4 = L_3->get_rigidBody_12();
		NullCheck(L_4);
		Rigidbody_set_isKinematic_m294703295(L_4, (bool)0, /*hidden argument*/NULL);
		Tile_t2606798 * L_5 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_5);
		float L_6 = L_5->get_waitTime_9();
		WaitForSeconds_t1291133240 * L_7 = (WaitForSeconds_t1291133240 *)il2cpp_codegen_object_new(WaitForSeconds_t1291133240_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_7, L_6, /*hidden argument*/NULL);
		__this->set_U24current_1(L_7);
		__this->set_U24PC_0(2);
		goto IL_00aa;
	}

IL_0074:
	{
		Tile_t2606798 * L_8 = __this->get_U3CU3Ef__this_2();
		Tile_t2606798 * L_9 = __this->get_U3CU3Ef__this_2();
		Tile_t2606798 * L_10 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_10);
		Vector3_t3525329789  L_11 = L_10->get_startingPosition_10();
		Tile_t2606798 * L_12 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_12);
		float L_13 = L_12->get_returnTime_8();
		NullCheck(L_9);
		Il2CppObject * L_14 = Tile_FadeOut_m1155006473(L_9, L_11, L_13, /*hidden argument*/NULL);
		NullCheck(L_8);
		MonoBehaviour_StartCoroutine_m2135303124(L_8, L_14, /*hidden argument*/NULL);
		__this->set_U24PC_0((-1));
	}

IL_00a8:
	{
		return (bool)0;
	}

IL_00aa:
	{
		return (bool)1;
	}
	// Dead block : IL_00ac: ldloc.1
}
// System.Void Tile/<DropTile>c__Iterator1::Dispose()
extern "C"  void U3CDropTileU3Ec__Iterator1_Dispose_m2609265218 (U3CDropTileU3Ec__Iterator1_t3664047749 * __this, const MethodInfo* method)
{
	{
		__this->set_U24PC_0((-1));
		return;
	}
}
// System.Void Tile/<DropTile>c__Iterator1::Reset()
extern Il2CppClass* NotSupportedException_t1374155497_il2cpp_TypeInfo_var;
extern const uint32_t U3CDropTileU3Ec__Iterator1_Reset_m2149807602_MetadataUsageId;
extern "C"  void U3CDropTileU3Ec__Iterator1_Reset_m2149807602 (U3CDropTileU3Ec__Iterator1_t3664047749 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CDropTileU3Ec__Iterator1_Reset_m2149807602_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1374155497 * L_0 = (NotSupportedException_t1374155497 *)il2cpp_codegen_object_new(NotSupportedException_t1374155497_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m149930845(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void Tile/<FadeOut>c__Iterator2::.ctor()
extern "C"  void U3CFadeOutU3Ec__Iterator2__ctor_m600966451 (U3CFadeOutU3Ec__Iterator2_t2138668265 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Tile/<FadeOut>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  Il2CppObject * U3CFadeOutU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m4020456009 (U3CFadeOutU3Ec__Iterator2_t2138668265 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Object Tile/<FadeOut>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * U3CFadeOutU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m2849832925 (U3CFadeOutU3Ec__Iterator2_t2138668265 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Boolean Tile/<FadeOut>c__Iterator2::MoveNext()
extern "C"  bool U3CFadeOutU3Ec__Iterator2_MoveNext_m4223207113 (U3CFadeOutU3Ec__Iterator2_t2138668265 * __this, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00ab;
		}
	}
	{
		goto IL_00de;
	}

IL_0021:
	{
		Tile_t2606798 * L_2 = __this->get_U3CU3Ef__this_8();
		NullCheck(L_2);
		Rigidbody_t1972007546 * L_3 = L_2->get_rigidBody_12();
		NullCheck(L_3);
		Rigidbody_set_isKinematic_m294703295(L_3, (bool)1, /*hidden argument*/NULL);
		__this->set_U3CelapsedTimeU3E__0_0((0.0f));
		Tile_t2606798 * L_4 = __this->get_U3CU3Ef__this_8();
		NullCheck(L_4);
		Transform_t284553113 * L_5 = Component_get_transform_m4257140443(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t3525329789  L_6 = Transform_get_position_m2211398607(L_5, /*hidden argument*/NULL);
		__this->set_U3CstartingPosU3E__1_1(L_6);
		goto IL_00ab;
	}

IL_0058:
	{
		Tile_t2606798 * L_7 = __this->get_U3CU3Ef__this_8();
		NullCheck(L_7);
		Transform_t284553113 * L_8 = Component_get_transform_m4257140443(L_7, /*hidden argument*/NULL);
		Vector3_t3525329789  L_9 = __this->get_U3CstartingPosU3E__1_1();
		Vector3_t3525329789  L_10 = __this->get_position_3();
		float L_11 = __this->get_U3CelapsedTimeU3E__0_0();
		float L_12 = __this->get_time_2();
		Vector3_t3525329789  L_13 = Vector3_Lerp_m650470329(NULL /*static, unused*/, L_9, L_10, ((float)((float)L_11/(float)L_12)), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_position_m3111394108(L_8, L_13, /*hidden argument*/NULL);
		float L_14 = __this->get_U3CelapsedTimeU3E__0_0();
		float L_15 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CelapsedTimeU3E__0_0(((float)((float)L_14+(float)L_15)));
		__this->set_U24current_5(NULL);
		__this->set_U24PC_4(1);
		goto IL_00e0;
	}

IL_00ab:
	{
		float L_16 = __this->get_U3CelapsedTimeU3E__0_0();
		float L_17 = __this->get_time_2();
		if ((((float)L_16) < ((float)L_17)))
		{
			goto IL_0058;
		}
	}
	{
		Tile_t2606798 * L_18 = __this->get_U3CU3Ef__this_8();
		NullCheck(L_18);
		Transform_t284553113 * L_19 = Component_get_transform_m4257140443(L_18, /*hidden argument*/NULL);
		Tile_t2606798 * L_20 = __this->get_U3CU3Ef__this_8();
		NullCheck(L_20);
		Vector3_t3525329789  L_21 = L_20->get_startingPosition_10();
		NullCheck(L_19);
		Transform_set_position_m3111394108(L_19, L_21, /*hidden argument*/NULL);
		__this->set_U24PC_4((-1));
	}

IL_00de:
	{
		return (bool)0;
	}

IL_00e0:
	{
		return (bool)1;
	}
	// Dead block : IL_00e2: ldloc.1
}
// System.Void Tile/<FadeOut>c__Iterator2::Dispose()
extern "C"  void U3CFadeOutU3Ec__Iterator2_Dispose_m1901424816 (U3CFadeOutU3Ec__Iterator2_t2138668265 * __this, const MethodInfo* method)
{
	{
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void Tile/<FadeOut>c__Iterator2::Reset()
extern Il2CppClass* NotSupportedException_t1374155497_il2cpp_TypeInfo_var;
extern const uint32_t U3CFadeOutU3Ec__Iterator2_Reset_m2542366688_MetadataUsageId;
extern "C"  void U3CFadeOutU3Ec__Iterator2_Reset_m2542366688 (U3CFadeOutU3Ec__Iterator2_t2138668265 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeOutU3Ec__Iterator2_Reset_m2542366688_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1374155497 * L_0 = (NotSupportedException_t1374155497 *)il2cpp_codegen_object_new(NotSupportedException_t1374155497_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m149930845(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void UIManager::.ctor()
extern "C"  void UIManager__ctor_m3008954130 (UIManager_t1861242489 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// UIManager UIManager::get_Instance()
extern Il2CppClass* UIManager_t1861242489_il2cpp_TypeInfo_var;
extern const uint32_t UIManager_get_Instance_m4082721046_MetadataUsageId;
extern "C"  UIManager_t1861242489 * UIManager_get_Instance_m4082721046 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UIManager_get_Instance_m4082721046_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		UIManager_t1861242489 * L_0 = ((UIManager_t1861242489_StaticFields*)UIManager_t1861242489_il2cpp_TypeInfo_var->static_fields)->get_U3CInstanceU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void UIManager::set_Instance(UIManager)
extern Il2CppClass* UIManager_t1861242489_il2cpp_TypeInfo_var;
extern const uint32_t UIManager_set_Instance_m3733778709_MetadataUsageId;
extern "C"  void UIManager_set_Instance_m3733778709 (Il2CppObject * __this /* static, unused */, UIManager_t1861242489 * ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UIManager_set_Instance_m3733778709_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		UIManager_t1861242489 * L_0 = ___value0;
		((UIManager_t1861242489_StaticFields*)UIManager_t1861242489_il2cpp_TypeInfo_var->static_fields)->set_U3CInstanceU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void UIManager::Awake()
extern "C"  void UIManager_Awake_m3246559349 (UIManager_t1861242489 * __this, const MethodInfo* method)
{
	{
		UIManager_set_Instance_m3733778709(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::Start()
extern "C"  void UIManager_Start_m1956091922 (UIManager_t1861242489 * __this, const MethodInfo* method)
{
	{
		__this->set_gameState_5(1);
		return;
	}
}
// System.Void UIManager::Update()
extern const MethodInfo* GameObject_GetComponent_TisBlurOptimized_t2967099936_m3067969771_MethodInfo_var;
extern const uint32_t UIManager_Update_m515159611_MetadataUsageId;
extern "C"  void UIManager_Update_m515159611 (UIManager_t1861242489 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UIManager_Update_m515159611_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_gameState_5();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_001e;
		}
		if (L_1 == 1)
		{
			goto IL_0067;
		}
		if (L_1 == 2)
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_011d;
	}

IL_001e:
	{
		GameObject_t4012695102 * L_2 = __this->get_mainMenu_2();
		NullCheck(L_2);
		GameObject_t4012695102 * L_3 = GameObject_get_gameObject_m1966529385(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m3538205401(L_3, (bool)1, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_4 = __this->get_inGame_3();
		NullCheck(L_4);
		GameObject_t4012695102 * L_5 = GameObject_get_gameObject_m1966529385(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m3538205401(L_5, (bool)0, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_6 = __this->get_endScreen_4();
		NullCheck(L_6);
		GameObject_t4012695102 * L_7 = GameObject_get_gameObject_m1966529385(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m3538205401(L_7, (bool)0, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_8 = __this->get_mainCamera_6();
		NullCheck(L_8);
		BlurOptimized_t2967099936 * L_9 = GameObject_GetComponent_TisBlurOptimized_t2967099936_m3067969771(L_8, /*hidden argument*/GameObject_GetComponent_TisBlurOptimized_t2967099936_m3067969771_MethodInfo_var);
		NullCheck(L_9);
		Behaviour_set_enabled_m2046806933(L_9, (bool)0, /*hidden argument*/NULL);
		goto IL_011d;
	}

IL_0067:
	{
		GameObject_t4012695102 * L_10 = __this->get_mainMenu_2();
		NullCheck(L_10);
		GameObject_t4012695102 * L_11 = GameObject_get_gameObject_m1966529385(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_SetActive_m3538205401(L_11, (bool)0, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_12 = __this->get_inGame_3();
		NullCheck(L_12);
		GameObject_t4012695102 * L_13 = GameObject_get_gameObject_m1966529385(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		GameObject_SetActive_m3538205401(L_13, (bool)1, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_14 = __this->get_endScreen_4();
		NullCheck(L_14);
		GameObject_t4012695102 * L_15 = GameObject_get_gameObject_m1966529385(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_SetActive_m3538205401(L_15, (bool)0, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_16 = __this->get_mainCamera_6();
		NullCheck(L_16);
		BlurOptimized_t2967099936 * L_17 = GameObject_GetComponent_TisBlurOptimized_t2967099936_m3067969771(L_16, /*hidden argument*/GameObject_GetComponent_TisBlurOptimized_t2967099936_m3067969771_MethodInfo_var);
		NullCheck(L_17);
		Behaviour_set_enabled_m2046806933(L_17, (bool)0, /*hidden argument*/NULL);
		goto IL_011d;
	}

IL_00b0:
	{
		GameObject_t4012695102 * L_18 = __this->get_mainMenu_2();
		NullCheck(L_18);
		GameObject_t4012695102 * L_19 = GameObject_get_gameObject_m1966529385(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		GameObject_SetActive_m3538205401(L_19, (bool)0, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_20 = __this->get_inGame_3();
		NullCheck(L_20);
		GameObject_t4012695102 * L_21 = GameObject_get_gameObject_m1966529385(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		GameObject_SetActive_m3538205401(L_21, (bool)1, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_22 = __this->get_endScreen_4();
		NullCheck(L_22);
		GameObject_t4012695102 * L_23 = GameObject_get_gameObject_m1966529385(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		GameObject_SetActive_m3538205401(L_23, (bool)1, /*hidden argument*/NULL);
		Text_t3286458198 * L_24 = __this->get_lblScore_7();
		NullCheck(L_24);
		Transform_t284553113 * L_25 = Component_get_transform_m4257140443(L_24, /*hidden argument*/NULL);
		Vector3_t3525329789  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Vector3__ctor_m2926210380(&L_26, (177.0f), (504.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_position_m3111394108(L_25, L_26, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_27 = __this->get_mainCamera_6();
		NullCheck(L_27);
		BlurOptimized_t2967099936 * L_28 = GameObject_GetComponent_TisBlurOptimized_t2967099936_m3067969771(L_27, /*hidden argument*/GameObject_GetComponent_TisBlurOptimized_t2967099936_m3067969771_MethodInfo_var);
		NullCheck(L_28);
		Behaviour_set_enabled_m2046806933(L_28, (bool)1, /*hidden argument*/NULL);
		goto IL_011d;
	}

IL_011d:
	{
		return;
	}
}
// System.Void UIManager::restartGame()
extern Il2CppCodeGenString* _stringLiteral2087985634;
extern const uint32_t UIManager_restartGame_m2784653169_MetadataUsageId;
extern "C"  void UIManager_restartGame_m2784653169 (UIManager_t1861242489 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UIManager_restartGame_m2784653169_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		SceneManager_LoadScene_m2167814033(NULL /*static, unused*/, _stringLiteral2087985634, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
