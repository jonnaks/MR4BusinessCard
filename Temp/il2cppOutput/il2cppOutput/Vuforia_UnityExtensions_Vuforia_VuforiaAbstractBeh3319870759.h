#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;
// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>
struct List_1_t2369737851;
// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>
struct List_1_t2978368948;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t1951195598;
// System.Action
struct Action_t3226471752;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// Vuforia.ICameraConfiguration
struct ICameraConfiguration_t2507317352;
// Vuforia.DigitalEyewearAbstractBehaviour
struct DigitalEyewearAbstractBehaviour_t3719235061;
// Vuforia.VideoBackgroundManagerAbstractBehaviour
struct VideoBackgroundManagerAbstractBehaviour_t3765780423;
// UnityEngine.Material
struct Material_t193706927;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t672924358;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer2705300828.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer1654543970.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi4106934884.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaAbstractBeh3132552034.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaUnity_InitE2149396216.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaAbstractBehaviour
struct  VuforiaAbstractBehaviour_t3319870759  : public MonoBehaviour_t1158329972
{
public:
	// System.String Vuforia.VuforiaAbstractBehaviour::VuforiaLicenseKey
	String_t* ___VuforiaLicenseKey_2;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaAbstractBehaviour::CameraDeviceModeSetting
	int32_t ___CameraDeviceModeSetting_3;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::MaxSimultaneousImageTargets
	int32_t ___MaxSimultaneousImageTargets_4;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::MaxSimultaneousObjectTargets
	int32_t ___MaxSimultaneousObjectTargets_5;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::UseDelayedLoadingObjectTargets
	bool ___UseDelayedLoadingObjectTargets_6;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaAbstractBehaviour::CameraDirection
	int32_t ___CameraDirection_7;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaAbstractBehaviour::MirrorVideoBackground
	int32_t ___MirrorVideoBackground_8;
	// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaAbstractBehaviour::mWorldCenterMode
	int32_t ___mWorldCenterMode_9;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaAbstractBehaviour::mWorldCenter
	TrackableBehaviour_t1779888572 * ___mWorldCenter_10;
	// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler> Vuforia.VuforiaAbstractBehaviour::mTrackerEventHandlers
	List_1_t2369737851 * ___mTrackerEventHandlers_11;
	// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler> Vuforia.VuforiaAbstractBehaviour::mVideoBgEventHandlers
	List_1_t2978368948 * ___mVideoBgEventHandlers_12;
	// System.Action`1<Vuforia.VuforiaUnity/InitError> Vuforia.VuforiaAbstractBehaviour::mOnVuforiaInitError
	Action_1_t1951195598 * ___mOnVuforiaInitError_13;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnVuforiaInitialized
	Action_t3226471752 * ___mOnVuforiaInitialized_14;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnVuforiaStarted
	Action_t3226471752 * ___mOnVuforiaStarted_15;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnTrackablesUpdated
	Action_t3226471752 * ___mOnTrackablesUpdated_16;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mRenderOnUpdate
	Action_t3226471752 * ___mRenderOnUpdate_17;
	// System.Action`1<System.Boolean> Vuforia.VuforiaAbstractBehaviour::mOnPause
	Action_1_t3627374100 * ___mOnPause_18;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mPaused
	bool ___mPaused_19;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnBackgroundTextureChanged
	Action_t3226471752 * ___mOnBackgroundTextureChanged_20;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mStartHasBeenInvoked
	bool ___mStartHasBeenInvoked_21;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mHasStarted
	bool ___mHasStarted_22;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mFailedToInitialize
	bool ___mFailedToInitialize_23;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mBackgroundTextureHasChanged
	bool ___mBackgroundTextureHasChanged_24;
	// Vuforia.VuforiaUnity/InitError Vuforia.VuforiaAbstractBehaviour::mInitError
	int32_t ___mInitError_25;
	// Vuforia.ICameraConfiguration Vuforia.VuforiaAbstractBehaviour::mCameraConfiguration
	Il2CppObject * ___mCameraConfiguration_26;
	// Vuforia.DigitalEyewearAbstractBehaviour Vuforia.VuforiaAbstractBehaviour::mEyewearBehaviour
	DigitalEyewearAbstractBehaviour_t3719235061 * ___mEyewearBehaviour_27;
	// Vuforia.VideoBackgroundManagerAbstractBehaviour Vuforia.VuforiaAbstractBehaviour::mVideoBackgroundMgr
	VideoBackgroundManagerAbstractBehaviour_t3765780423 * ___mVideoBackgroundMgr_28;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mCheckStopCamera
	bool ___mCheckStopCamera_29;
	// UnityEngine.Material Vuforia.VuforiaAbstractBehaviour::mClearMaterial
	Material_t193706927 * ___mClearMaterial_30;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMetalRendering
	bool ___mMetalRendering_31;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mHasStartedOnce
	bool ___mHasStartedOnce_32;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mWasEnabledBeforePause
	bool ___mWasEnabledBeforePause_33;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mObjectTrackerWasActiveBeforePause
	bool ___mObjectTrackerWasActiveBeforePause_34;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mObjectTrackerWasActiveBeforeDisabling
	bool ___mObjectTrackerWasActiveBeforeDisabling_35;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMarkerTrackerWasActiveBeforePause
	bool ___mMarkerTrackerWasActiveBeforePause_36;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMarkerTrackerWasActiveBeforeDisabling
	bool ___mMarkerTrackerWasActiveBeforeDisabling_37;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::mLastUpdatedFrame
	int32_t ___mLastUpdatedFrame_38;
	// System.Collections.Generic.List`1<System.Type> Vuforia.VuforiaAbstractBehaviour::mTrackersRequestedToDeinit
	List_1_t672924358 * ___mTrackersRequestedToDeinit_39;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMissedToApplyLeftProjectionMatrix
	bool ___mMissedToApplyLeftProjectionMatrix_40;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMissedToApplyRightProjectionMatrix
	bool ___mMissedToApplyRightProjectionMatrix_41;
	// UnityEngine.Matrix4x4 Vuforia.VuforiaAbstractBehaviour::mLeftProjectMatrixToApply
	Matrix4x4_t2933234003  ___mLeftProjectMatrixToApply_42;
	// UnityEngine.Matrix4x4 Vuforia.VuforiaAbstractBehaviour::mRightProjectMatrixToApply
	Matrix4x4_t2933234003  ___mRightProjectMatrixToApply_43;

public:
	inline static int32_t get_offset_of_VuforiaLicenseKey_2() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___VuforiaLicenseKey_2)); }
	inline String_t* get_VuforiaLicenseKey_2() const { return ___VuforiaLicenseKey_2; }
	inline String_t** get_address_of_VuforiaLicenseKey_2() { return &___VuforiaLicenseKey_2; }
	inline void set_VuforiaLicenseKey_2(String_t* value)
	{
		___VuforiaLicenseKey_2 = value;
		Il2CppCodeGenWriteBarrier(&___VuforiaLicenseKey_2, value);
	}

	inline static int32_t get_offset_of_CameraDeviceModeSetting_3() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___CameraDeviceModeSetting_3)); }
	inline int32_t get_CameraDeviceModeSetting_3() const { return ___CameraDeviceModeSetting_3; }
	inline int32_t* get_address_of_CameraDeviceModeSetting_3() { return &___CameraDeviceModeSetting_3; }
	inline void set_CameraDeviceModeSetting_3(int32_t value)
	{
		___CameraDeviceModeSetting_3 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousImageTargets_4() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___MaxSimultaneousImageTargets_4)); }
	inline int32_t get_MaxSimultaneousImageTargets_4() const { return ___MaxSimultaneousImageTargets_4; }
	inline int32_t* get_address_of_MaxSimultaneousImageTargets_4() { return &___MaxSimultaneousImageTargets_4; }
	inline void set_MaxSimultaneousImageTargets_4(int32_t value)
	{
		___MaxSimultaneousImageTargets_4 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousObjectTargets_5() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___MaxSimultaneousObjectTargets_5)); }
	inline int32_t get_MaxSimultaneousObjectTargets_5() const { return ___MaxSimultaneousObjectTargets_5; }
	inline int32_t* get_address_of_MaxSimultaneousObjectTargets_5() { return &___MaxSimultaneousObjectTargets_5; }
	inline void set_MaxSimultaneousObjectTargets_5(int32_t value)
	{
		___MaxSimultaneousObjectTargets_5 = value;
	}

	inline static int32_t get_offset_of_UseDelayedLoadingObjectTargets_6() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___UseDelayedLoadingObjectTargets_6)); }
	inline bool get_UseDelayedLoadingObjectTargets_6() const { return ___UseDelayedLoadingObjectTargets_6; }
	inline bool* get_address_of_UseDelayedLoadingObjectTargets_6() { return &___UseDelayedLoadingObjectTargets_6; }
	inline void set_UseDelayedLoadingObjectTargets_6(bool value)
	{
		___UseDelayedLoadingObjectTargets_6 = value;
	}

	inline static int32_t get_offset_of_CameraDirection_7() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___CameraDirection_7)); }
	inline int32_t get_CameraDirection_7() const { return ___CameraDirection_7; }
	inline int32_t* get_address_of_CameraDirection_7() { return &___CameraDirection_7; }
	inline void set_CameraDirection_7(int32_t value)
	{
		___CameraDirection_7 = value;
	}

	inline static int32_t get_offset_of_MirrorVideoBackground_8() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___MirrorVideoBackground_8)); }
	inline int32_t get_MirrorVideoBackground_8() const { return ___MirrorVideoBackground_8; }
	inline int32_t* get_address_of_MirrorVideoBackground_8() { return &___MirrorVideoBackground_8; }
	inline void set_MirrorVideoBackground_8(int32_t value)
	{
		___MirrorVideoBackground_8 = value;
	}

	inline static int32_t get_offset_of_mWorldCenterMode_9() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mWorldCenterMode_9)); }
	inline int32_t get_mWorldCenterMode_9() const { return ___mWorldCenterMode_9; }
	inline int32_t* get_address_of_mWorldCenterMode_9() { return &___mWorldCenterMode_9; }
	inline void set_mWorldCenterMode_9(int32_t value)
	{
		___mWorldCenterMode_9 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_10() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mWorldCenter_10)); }
	inline TrackableBehaviour_t1779888572 * get_mWorldCenter_10() const { return ___mWorldCenter_10; }
	inline TrackableBehaviour_t1779888572 ** get_address_of_mWorldCenter_10() { return &___mWorldCenter_10; }
	inline void set_mWorldCenter_10(TrackableBehaviour_t1779888572 * value)
	{
		___mWorldCenter_10 = value;
		Il2CppCodeGenWriteBarrier(&___mWorldCenter_10, value);
	}

	inline static int32_t get_offset_of_mTrackerEventHandlers_11() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mTrackerEventHandlers_11)); }
	inline List_1_t2369737851 * get_mTrackerEventHandlers_11() const { return ___mTrackerEventHandlers_11; }
	inline List_1_t2369737851 ** get_address_of_mTrackerEventHandlers_11() { return &___mTrackerEventHandlers_11; }
	inline void set_mTrackerEventHandlers_11(List_1_t2369737851 * value)
	{
		___mTrackerEventHandlers_11 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackerEventHandlers_11, value);
	}

	inline static int32_t get_offset_of_mVideoBgEventHandlers_12() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mVideoBgEventHandlers_12)); }
	inline List_1_t2978368948 * get_mVideoBgEventHandlers_12() const { return ___mVideoBgEventHandlers_12; }
	inline List_1_t2978368948 ** get_address_of_mVideoBgEventHandlers_12() { return &___mVideoBgEventHandlers_12; }
	inline void set_mVideoBgEventHandlers_12(List_1_t2978368948 * value)
	{
		___mVideoBgEventHandlers_12 = value;
		Il2CppCodeGenWriteBarrier(&___mVideoBgEventHandlers_12, value);
	}

	inline static int32_t get_offset_of_mOnVuforiaInitError_13() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mOnVuforiaInitError_13)); }
	inline Action_1_t1951195598 * get_mOnVuforiaInitError_13() const { return ___mOnVuforiaInitError_13; }
	inline Action_1_t1951195598 ** get_address_of_mOnVuforiaInitError_13() { return &___mOnVuforiaInitError_13; }
	inline void set_mOnVuforiaInitError_13(Action_1_t1951195598 * value)
	{
		___mOnVuforiaInitError_13 = value;
		Il2CppCodeGenWriteBarrier(&___mOnVuforiaInitError_13, value);
	}

	inline static int32_t get_offset_of_mOnVuforiaInitialized_14() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mOnVuforiaInitialized_14)); }
	inline Action_t3226471752 * get_mOnVuforiaInitialized_14() const { return ___mOnVuforiaInitialized_14; }
	inline Action_t3226471752 ** get_address_of_mOnVuforiaInitialized_14() { return &___mOnVuforiaInitialized_14; }
	inline void set_mOnVuforiaInitialized_14(Action_t3226471752 * value)
	{
		___mOnVuforiaInitialized_14 = value;
		Il2CppCodeGenWriteBarrier(&___mOnVuforiaInitialized_14, value);
	}

	inline static int32_t get_offset_of_mOnVuforiaStarted_15() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mOnVuforiaStarted_15)); }
	inline Action_t3226471752 * get_mOnVuforiaStarted_15() const { return ___mOnVuforiaStarted_15; }
	inline Action_t3226471752 ** get_address_of_mOnVuforiaStarted_15() { return &___mOnVuforiaStarted_15; }
	inline void set_mOnVuforiaStarted_15(Action_t3226471752 * value)
	{
		___mOnVuforiaStarted_15 = value;
		Il2CppCodeGenWriteBarrier(&___mOnVuforiaStarted_15, value);
	}

	inline static int32_t get_offset_of_mOnTrackablesUpdated_16() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mOnTrackablesUpdated_16)); }
	inline Action_t3226471752 * get_mOnTrackablesUpdated_16() const { return ___mOnTrackablesUpdated_16; }
	inline Action_t3226471752 ** get_address_of_mOnTrackablesUpdated_16() { return &___mOnTrackablesUpdated_16; }
	inline void set_mOnTrackablesUpdated_16(Action_t3226471752 * value)
	{
		___mOnTrackablesUpdated_16 = value;
		Il2CppCodeGenWriteBarrier(&___mOnTrackablesUpdated_16, value);
	}

	inline static int32_t get_offset_of_mRenderOnUpdate_17() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mRenderOnUpdate_17)); }
	inline Action_t3226471752 * get_mRenderOnUpdate_17() const { return ___mRenderOnUpdate_17; }
	inline Action_t3226471752 ** get_address_of_mRenderOnUpdate_17() { return &___mRenderOnUpdate_17; }
	inline void set_mRenderOnUpdate_17(Action_t3226471752 * value)
	{
		___mRenderOnUpdate_17 = value;
		Il2CppCodeGenWriteBarrier(&___mRenderOnUpdate_17, value);
	}

	inline static int32_t get_offset_of_mOnPause_18() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mOnPause_18)); }
	inline Action_1_t3627374100 * get_mOnPause_18() const { return ___mOnPause_18; }
	inline Action_1_t3627374100 ** get_address_of_mOnPause_18() { return &___mOnPause_18; }
	inline void set_mOnPause_18(Action_1_t3627374100 * value)
	{
		___mOnPause_18 = value;
		Il2CppCodeGenWriteBarrier(&___mOnPause_18, value);
	}

	inline static int32_t get_offset_of_mPaused_19() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mPaused_19)); }
	inline bool get_mPaused_19() const { return ___mPaused_19; }
	inline bool* get_address_of_mPaused_19() { return &___mPaused_19; }
	inline void set_mPaused_19(bool value)
	{
		___mPaused_19 = value;
	}

	inline static int32_t get_offset_of_mOnBackgroundTextureChanged_20() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mOnBackgroundTextureChanged_20)); }
	inline Action_t3226471752 * get_mOnBackgroundTextureChanged_20() const { return ___mOnBackgroundTextureChanged_20; }
	inline Action_t3226471752 ** get_address_of_mOnBackgroundTextureChanged_20() { return &___mOnBackgroundTextureChanged_20; }
	inline void set_mOnBackgroundTextureChanged_20(Action_t3226471752 * value)
	{
		___mOnBackgroundTextureChanged_20 = value;
		Il2CppCodeGenWriteBarrier(&___mOnBackgroundTextureChanged_20, value);
	}

	inline static int32_t get_offset_of_mStartHasBeenInvoked_21() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mStartHasBeenInvoked_21)); }
	inline bool get_mStartHasBeenInvoked_21() const { return ___mStartHasBeenInvoked_21; }
	inline bool* get_address_of_mStartHasBeenInvoked_21() { return &___mStartHasBeenInvoked_21; }
	inline void set_mStartHasBeenInvoked_21(bool value)
	{
		___mStartHasBeenInvoked_21 = value;
	}

	inline static int32_t get_offset_of_mHasStarted_22() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mHasStarted_22)); }
	inline bool get_mHasStarted_22() const { return ___mHasStarted_22; }
	inline bool* get_address_of_mHasStarted_22() { return &___mHasStarted_22; }
	inline void set_mHasStarted_22(bool value)
	{
		___mHasStarted_22 = value;
	}

	inline static int32_t get_offset_of_mFailedToInitialize_23() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mFailedToInitialize_23)); }
	inline bool get_mFailedToInitialize_23() const { return ___mFailedToInitialize_23; }
	inline bool* get_address_of_mFailedToInitialize_23() { return &___mFailedToInitialize_23; }
	inline void set_mFailedToInitialize_23(bool value)
	{
		___mFailedToInitialize_23 = value;
	}

	inline static int32_t get_offset_of_mBackgroundTextureHasChanged_24() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mBackgroundTextureHasChanged_24)); }
	inline bool get_mBackgroundTextureHasChanged_24() const { return ___mBackgroundTextureHasChanged_24; }
	inline bool* get_address_of_mBackgroundTextureHasChanged_24() { return &___mBackgroundTextureHasChanged_24; }
	inline void set_mBackgroundTextureHasChanged_24(bool value)
	{
		___mBackgroundTextureHasChanged_24 = value;
	}

	inline static int32_t get_offset_of_mInitError_25() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mInitError_25)); }
	inline int32_t get_mInitError_25() const { return ___mInitError_25; }
	inline int32_t* get_address_of_mInitError_25() { return &___mInitError_25; }
	inline void set_mInitError_25(int32_t value)
	{
		___mInitError_25 = value;
	}

	inline static int32_t get_offset_of_mCameraConfiguration_26() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mCameraConfiguration_26)); }
	inline Il2CppObject * get_mCameraConfiguration_26() const { return ___mCameraConfiguration_26; }
	inline Il2CppObject ** get_address_of_mCameraConfiguration_26() { return &___mCameraConfiguration_26; }
	inline void set_mCameraConfiguration_26(Il2CppObject * value)
	{
		___mCameraConfiguration_26 = value;
		Il2CppCodeGenWriteBarrier(&___mCameraConfiguration_26, value);
	}

	inline static int32_t get_offset_of_mEyewearBehaviour_27() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mEyewearBehaviour_27)); }
	inline DigitalEyewearAbstractBehaviour_t3719235061 * get_mEyewearBehaviour_27() const { return ___mEyewearBehaviour_27; }
	inline DigitalEyewearAbstractBehaviour_t3719235061 ** get_address_of_mEyewearBehaviour_27() { return &___mEyewearBehaviour_27; }
	inline void set_mEyewearBehaviour_27(DigitalEyewearAbstractBehaviour_t3719235061 * value)
	{
		___mEyewearBehaviour_27 = value;
		Il2CppCodeGenWriteBarrier(&___mEyewearBehaviour_27, value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundMgr_28() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mVideoBackgroundMgr_28)); }
	inline VideoBackgroundManagerAbstractBehaviour_t3765780423 * get_mVideoBackgroundMgr_28() const { return ___mVideoBackgroundMgr_28; }
	inline VideoBackgroundManagerAbstractBehaviour_t3765780423 ** get_address_of_mVideoBackgroundMgr_28() { return &___mVideoBackgroundMgr_28; }
	inline void set_mVideoBackgroundMgr_28(VideoBackgroundManagerAbstractBehaviour_t3765780423 * value)
	{
		___mVideoBackgroundMgr_28 = value;
		Il2CppCodeGenWriteBarrier(&___mVideoBackgroundMgr_28, value);
	}

	inline static int32_t get_offset_of_mCheckStopCamera_29() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mCheckStopCamera_29)); }
	inline bool get_mCheckStopCamera_29() const { return ___mCheckStopCamera_29; }
	inline bool* get_address_of_mCheckStopCamera_29() { return &___mCheckStopCamera_29; }
	inline void set_mCheckStopCamera_29(bool value)
	{
		___mCheckStopCamera_29 = value;
	}

	inline static int32_t get_offset_of_mClearMaterial_30() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mClearMaterial_30)); }
	inline Material_t193706927 * get_mClearMaterial_30() const { return ___mClearMaterial_30; }
	inline Material_t193706927 ** get_address_of_mClearMaterial_30() { return &___mClearMaterial_30; }
	inline void set_mClearMaterial_30(Material_t193706927 * value)
	{
		___mClearMaterial_30 = value;
		Il2CppCodeGenWriteBarrier(&___mClearMaterial_30, value);
	}

	inline static int32_t get_offset_of_mMetalRendering_31() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mMetalRendering_31)); }
	inline bool get_mMetalRendering_31() const { return ___mMetalRendering_31; }
	inline bool* get_address_of_mMetalRendering_31() { return &___mMetalRendering_31; }
	inline void set_mMetalRendering_31(bool value)
	{
		___mMetalRendering_31 = value;
	}

	inline static int32_t get_offset_of_mHasStartedOnce_32() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mHasStartedOnce_32)); }
	inline bool get_mHasStartedOnce_32() const { return ___mHasStartedOnce_32; }
	inline bool* get_address_of_mHasStartedOnce_32() { return &___mHasStartedOnce_32; }
	inline void set_mHasStartedOnce_32(bool value)
	{
		___mHasStartedOnce_32 = value;
	}

	inline static int32_t get_offset_of_mWasEnabledBeforePause_33() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mWasEnabledBeforePause_33)); }
	inline bool get_mWasEnabledBeforePause_33() const { return ___mWasEnabledBeforePause_33; }
	inline bool* get_address_of_mWasEnabledBeforePause_33() { return &___mWasEnabledBeforePause_33; }
	inline void set_mWasEnabledBeforePause_33(bool value)
	{
		___mWasEnabledBeforePause_33 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforePause_34() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mObjectTrackerWasActiveBeforePause_34)); }
	inline bool get_mObjectTrackerWasActiveBeforePause_34() const { return ___mObjectTrackerWasActiveBeforePause_34; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforePause_34() { return &___mObjectTrackerWasActiveBeforePause_34; }
	inline void set_mObjectTrackerWasActiveBeforePause_34(bool value)
	{
		___mObjectTrackerWasActiveBeforePause_34 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforeDisabling_35() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mObjectTrackerWasActiveBeforeDisabling_35)); }
	inline bool get_mObjectTrackerWasActiveBeforeDisabling_35() const { return ___mObjectTrackerWasActiveBeforeDisabling_35; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforeDisabling_35() { return &___mObjectTrackerWasActiveBeforeDisabling_35; }
	inline void set_mObjectTrackerWasActiveBeforeDisabling_35(bool value)
	{
		___mObjectTrackerWasActiveBeforeDisabling_35 = value;
	}

	inline static int32_t get_offset_of_mMarkerTrackerWasActiveBeforePause_36() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mMarkerTrackerWasActiveBeforePause_36)); }
	inline bool get_mMarkerTrackerWasActiveBeforePause_36() const { return ___mMarkerTrackerWasActiveBeforePause_36; }
	inline bool* get_address_of_mMarkerTrackerWasActiveBeforePause_36() { return &___mMarkerTrackerWasActiveBeforePause_36; }
	inline void set_mMarkerTrackerWasActiveBeforePause_36(bool value)
	{
		___mMarkerTrackerWasActiveBeforePause_36 = value;
	}

	inline static int32_t get_offset_of_mMarkerTrackerWasActiveBeforeDisabling_37() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mMarkerTrackerWasActiveBeforeDisabling_37)); }
	inline bool get_mMarkerTrackerWasActiveBeforeDisabling_37() const { return ___mMarkerTrackerWasActiveBeforeDisabling_37; }
	inline bool* get_address_of_mMarkerTrackerWasActiveBeforeDisabling_37() { return &___mMarkerTrackerWasActiveBeforeDisabling_37; }
	inline void set_mMarkerTrackerWasActiveBeforeDisabling_37(bool value)
	{
		___mMarkerTrackerWasActiveBeforeDisabling_37 = value;
	}

	inline static int32_t get_offset_of_mLastUpdatedFrame_38() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mLastUpdatedFrame_38)); }
	inline int32_t get_mLastUpdatedFrame_38() const { return ___mLastUpdatedFrame_38; }
	inline int32_t* get_address_of_mLastUpdatedFrame_38() { return &___mLastUpdatedFrame_38; }
	inline void set_mLastUpdatedFrame_38(int32_t value)
	{
		___mLastUpdatedFrame_38 = value;
	}

	inline static int32_t get_offset_of_mTrackersRequestedToDeinit_39() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mTrackersRequestedToDeinit_39)); }
	inline List_1_t672924358 * get_mTrackersRequestedToDeinit_39() const { return ___mTrackersRequestedToDeinit_39; }
	inline List_1_t672924358 ** get_address_of_mTrackersRequestedToDeinit_39() { return &___mTrackersRequestedToDeinit_39; }
	inline void set_mTrackersRequestedToDeinit_39(List_1_t672924358 * value)
	{
		___mTrackersRequestedToDeinit_39 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackersRequestedToDeinit_39, value);
	}

	inline static int32_t get_offset_of_mMissedToApplyLeftProjectionMatrix_40() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mMissedToApplyLeftProjectionMatrix_40)); }
	inline bool get_mMissedToApplyLeftProjectionMatrix_40() const { return ___mMissedToApplyLeftProjectionMatrix_40; }
	inline bool* get_address_of_mMissedToApplyLeftProjectionMatrix_40() { return &___mMissedToApplyLeftProjectionMatrix_40; }
	inline void set_mMissedToApplyLeftProjectionMatrix_40(bool value)
	{
		___mMissedToApplyLeftProjectionMatrix_40 = value;
	}

	inline static int32_t get_offset_of_mMissedToApplyRightProjectionMatrix_41() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mMissedToApplyRightProjectionMatrix_41)); }
	inline bool get_mMissedToApplyRightProjectionMatrix_41() const { return ___mMissedToApplyRightProjectionMatrix_41; }
	inline bool* get_address_of_mMissedToApplyRightProjectionMatrix_41() { return &___mMissedToApplyRightProjectionMatrix_41; }
	inline void set_mMissedToApplyRightProjectionMatrix_41(bool value)
	{
		___mMissedToApplyRightProjectionMatrix_41 = value;
	}

	inline static int32_t get_offset_of_mLeftProjectMatrixToApply_42() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mLeftProjectMatrixToApply_42)); }
	inline Matrix4x4_t2933234003  get_mLeftProjectMatrixToApply_42() const { return ___mLeftProjectMatrixToApply_42; }
	inline Matrix4x4_t2933234003 * get_address_of_mLeftProjectMatrixToApply_42() { return &___mLeftProjectMatrixToApply_42; }
	inline void set_mLeftProjectMatrixToApply_42(Matrix4x4_t2933234003  value)
	{
		___mLeftProjectMatrixToApply_42 = value;
	}

	inline static int32_t get_offset_of_mRightProjectMatrixToApply_43() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mRightProjectMatrixToApply_43)); }
	inline Matrix4x4_t2933234003  get_mRightProjectMatrixToApply_43() const { return ___mRightProjectMatrixToApply_43; }
	inline Matrix4x4_t2933234003 * get_address_of_mRightProjectMatrixToApply_43() { return &___mRightProjectMatrixToApply_43; }
	inline void set_mRightProjectMatrixToApply_43(Matrix4x4_t2933234003  value)
	{
		___mRightProjectMatrixToApply_43 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
