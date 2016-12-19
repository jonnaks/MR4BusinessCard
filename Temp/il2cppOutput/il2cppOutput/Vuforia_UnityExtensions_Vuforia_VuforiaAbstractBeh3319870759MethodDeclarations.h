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

// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t3319870759;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;
// System.String
struct String_t;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t1951195598;
// System.Action
struct Action_t3226471752;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// Vuforia.ITrackerEventHandler
struct ITrackerEventHandler_t3000616719;
// Vuforia.IVideoBackgroundEventHandler
struct IVideoBackgroundEventHandler_t3609247816;
// Vuforia.ICameraConfiguration
struct ICameraConfiguration_t2507317352;
// UnityEngine.Camera
struct Camera_t189460977;
// Vuforia.IUnityPlayer
struct IUnityPlayer_t2720985375;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaAbstractBeh3132552034.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi4106934884.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer2705300828.h"
#include "System_Core_System_Action3226471752.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour1779888572.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_ScreenOrientation4019489636.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaAbstractBehaviour::get_WorldCenterModeSetting()
extern "C"  int32_t VuforiaAbstractBehaviour_get_WorldCenterModeSetting_m22192551 (VuforiaAbstractBehaviour_t3319870759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableBehaviour Vuforia.VuforiaAbstractBehaviour::get_WorldCenter()
extern "C"  TrackableBehaviour_t1779888572 * VuforiaAbstractBehaviour_get_WorldCenter_m471838410 (VuforiaAbstractBehaviour_t3319870759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaAbstractBehaviour::get_VideoBackGroundMirrored()
extern "C"  int32_t VuforiaAbstractBehaviour_get_VideoBackGroundMirrored_m2667958568 (VuforiaAbstractBehaviour_t3319870759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaAbstractBehaviour::get_CameraDeviceMode()
extern "C"  int32_t VuforiaAbstractBehaviour_get_CameraDeviceMode_m1370596629 (VuforiaAbstractBehaviour_t3319870759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_HasStarted()
extern "C"  bool VuforiaAbstractBehaviour_get_HasStarted_m3819475141 (VuforiaAbstractBehaviour_t3319870759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaAbstractBehaviour::get_AppLicenseKey()
extern "C"  String_t* VuforiaAbstractBehaviour_get_AppLicenseKey_m3490672480 (VuforiaAbstractBehaviour_t3319870759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C"  void VuforiaAbstractBehaviour_RegisterVuforiaInitErrorCallback_m1232626107 (VuforiaAbstractBehaviour_t3319870759 * __this, Action_1_t1951195598 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C"  void VuforiaAbstractBehaviour_UnregisterVuforiaInitErrorCallback_m351599706 (VuforiaAbstractBehaviour_t3319870759 * __this, Action_1_t1951195598 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaInitializedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_RegisterVuforiaInitializedCallback_m665050734 (VuforiaAbstractBehaviour_t3319870759 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaInitializedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_UnregisterVuforiaInitializedCallback_m730047649 (VuforiaAbstractBehaviour_t3319870759 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaStartedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_RegisterVuforiaStartedCallback_m3664350367 (VuforiaAbstractBehaviour_t3319870759 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaStartedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_UnregisterVuforiaStartedCallback_m803698138 (VuforiaAbstractBehaviour_t3319870759 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterTrackablesUpdatedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_RegisterTrackablesUpdatedCallback_m1129280829 (VuforiaAbstractBehaviour_t3319870759 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterTrackablesUpdatedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_UnregisterTrackablesUpdatedCallback_m1254415602 (VuforiaAbstractBehaviour_t3319870759 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C"  void VuforiaAbstractBehaviour_RegisterOnPauseCallback_m10919757 (VuforiaAbstractBehaviour_t3319870759 * __this, Action_1_t3627374100 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C"  void VuforiaAbstractBehaviour_UnregisterOnPauseCallback_m337608972 (VuforiaAbstractBehaviour_t3319870759 * __this, Action_1_t3627374100 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterBackgroundTextureChangedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_RegisterBackgroundTextureChangedCallback_m2632927417 (VuforiaAbstractBehaviour_t3319870759 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterBackgroundTextureChangedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_UnregisterBackgroundTextureChangedCallback_m831969456 (VuforiaAbstractBehaviour_t3319870759 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterTrackerEventHandler(Vuforia.ITrackerEventHandler)
extern "C"  void VuforiaAbstractBehaviour_RegisterTrackerEventHandler_m3353969765 (VuforiaAbstractBehaviour_t3319870759 * __this, Il2CppObject * ___trackerEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::UnregisterTrackerEventHandler(Vuforia.ITrackerEventHandler)
extern "C"  bool VuforiaAbstractBehaviour_UnregisterTrackerEventHandler_m195985176 (VuforiaAbstractBehaviour_t3319870759 * __this, Il2CppObject * ___trackerEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVideoBgEventHandler(Vuforia.IVideoBackgroundEventHandler)
extern "C"  void VuforiaAbstractBehaviour_RegisterVideoBgEventHandler_m1685606040 (VuforiaAbstractBehaviour_t3319870759 * __this, Il2CppObject * ___videoBgEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::UnregisterVideoBgEventHandler(Vuforia.IVideoBackgroundEventHandler)
extern "C"  bool VuforiaAbstractBehaviour_UnregisterVideoBgEventHandler_m502174825 (VuforiaAbstractBehaviour_t3319870759 * __this, Il2CppObject * ___videoBgEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetWorldCenterMode(Vuforia.VuforiaAbstractBehaviour/WorldCenterMode)
extern "C"  void VuforiaAbstractBehaviour_SetWorldCenterMode_m1833460733 (VuforiaAbstractBehaviour_t3319870759 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetWorldCenter(Vuforia.TrackableBehaviour)
extern "C"  void VuforiaAbstractBehaviour_SetWorldCenter_m2714977094 (VuforiaAbstractBehaviour_t3319870759 * __this, TrackableBehaviour_t1779888572 * ___trackable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetAppLicenseKey(System.String)
extern "C"  void VuforiaAbstractBehaviour_SetAppLicenseKey_m364691486 (VuforiaAbstractBehaviour_t3319870759 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.VuforiaAbstractBehaviour::GetVideoBackgroundRectInViewPort()
extern "C"  Rect_t3681755626  VuforiaAbstractBehaviour_GetVideoBackgroundRectInViewPort_m980857609 (VuforiaAbstractBehaviour_t3319870759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.VuforiaAbstractBehaviour::GetSurfaceOrientation()
extern "C"  int32_t VuforiaAbstractBehaviour_GetSurfaceOrientation_m260279742 (VuforiaAbstractBehaviour_t3319870759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UpdateState(System.Boolean,System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_UpdateState_m1825955469 (VuforiaAbstractBehaviour_t3319870759 * __this, bool ___forceUpdate0, bool ___reapplyOldState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_ApplyCorrectedProjectionMatrix_m651222753 (VuforiaAbstractBehaviour_t3319870759 * __this, Matrix4x4_t2933234003  ___projectionMatrix0, bool ___primaryCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ICameraConfiguration Vuforia.VuforiaAbstractBehaviour::get_CameraConfiguration()
extern "C"  Il2CppObject * VuforiaAbstractBehaviour_get_CameraConfiguration_m657271580 (VuforiaAbstractBehaviour_t3319870759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_CameraConfiguration(Vuforia.ICameraConfiguration)
extern "C"  void VuforiaAbstractBehaviour_set_CameraConfiguration_m2966165245 (VuforiaAbstractBehaviour_t3319870759 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::InitCameraConfiguration()
extern "C"  void VuforiaAbstractBehaviour_InitCameraConfiguration_m649596176 (VuforiaAbstractBehaviour_t3319870759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ConfigureVideoBackground()
extern "C"  void VuforiaAbstractBehaviour_ConfigureVideoBackground_m4110607226 (VuforiaAbstractBehaviour_t3319870759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ResetBackgroundPlane(System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_ResetBackgroundPlane_m2142077753 (VuforiaAbstractBehaviour_t3319870759 * __this, bool ___disable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterRenderOnUpdateCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_RegisterRenderOnUpdateCallback_m4206621494 (VuforiaAbstractBehaviour_t3319870759 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterRenderOnUpdateCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_UnregisterRenderOnUpdateCallback_m2164984095 (VuforiaAbstractBehaviour_t3319870759 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::IsValidPrimaryCamera(UnityEngine.Camera)
extern "C"  bool VuforiaAbstractBehaviour_IsValidPrimaryCamera_m1248639498 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::IsValidSecondaryCamera(UnityEngine.Camera)
extern "C"  bool VuforiaAbstractBehaviour_IsValidSecondaryCamera_m1504787894 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Awake()
extern "C"  void VuforiaAbstractBehaviour_Awake_m232471254 (VuforiaAbstractBehaviour_t3319870759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Start()
extern "C"  void VuforiaAbstractBehaviour_Start_m2160275031 (VuforiaAbstractBehaviour_t3319870759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnEnable()
extern "C"  void VuforiaAbstractBehaviour_OnEnable_m2635583287 (VuforiaAbstractBehaviour_t3319870759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnApplicationPause(System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_OnApplicationPause_m1349687785 (VuforiaAbstractBehaviour_t3319870759 * __this, bool ___pause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnDisable()
extern "C"  void VuforiaAbstractBehaviour_OnDisable_m3115467530 (VuforiaAbstractBehaviour_t3319870759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnDestroy()
extern "C"  void VuforiaAbstractBehaviour_OnDestroy_m1526652240 (VuforiaAbstractBehaviour_t3319870759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetUnityPlayerImplementation(Vuforia.IUnityPlayer)
extern "C"  void VuforiaAbstractBehaviour_SetUnityPlayerImplementation_m4082041552 (VuforiaAbstractBehaviour_t3319870759 * __this, Il2CppObject * ___implementation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UpdateStatePrivate(System.Boolean,System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_UpdateStatePrivate_m2202035208 (VuforiaAbstractBehaviour_t3319870759 * __this, bool ___forceUpdate0, bool ___reapplyOldState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::StartVuforia(System.Boolean,System.Boolean)
extern "C"  bool VuforiaAbstractBehaviour_StartVuforia_m249127559 (VuforiaAbstractBehaviour_t3319870759 * __this, bool ___startObjectTracker0, bool ___startMarkerTracker1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::StopVuforia()
extern "C"  bool VuforiaAbstractBehaviour_StopVuforia_m2147881511 (VuforiaAbstractBehaviour_t3319870759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::DisableCameraIfNotNeeded()
extern "C"  void VuforiaAbstractBehaviour_DisableCameraIfNotNeeded_m1385093231 (VuforiaAbstractBehaviour_t3319870759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::DeinitRequestedTrackers()
extern "C"  void VuforiaAbstractBehaviour_DeinitRequestedTrackers_m1879898915 (VuforiaAbstractBehaviour_t3319870759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnVideoBackgroundConfigChanged()
extern "C"  void VuforiaAbstractBehaviour_OnVideoBackgroundConfigChanged_m315199273 (VuforiaAbstractBehaviour_t3319870759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::EnableObjectRenderer(UnityEngine.GameObject,System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_EnableObjectRenderer_m1072563313 (VuforiaAbstractBehaviour_t3319870759 * __this, GameObject_t1756533147 * ___go0, bool ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ApplyMissedProjectionMatrices()
extern "C"  void VuforiaAbstractBehaviour_ApplyMissedProjectionMatrices_m2975431425 (VuforiaAbstractBehaviour_t3319870759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::.ctor()
extern "C"  void VuforiaAbstractBehaviour__ctor_m3900338923 (VuforiaAbstractBehaviour_t3319870759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
