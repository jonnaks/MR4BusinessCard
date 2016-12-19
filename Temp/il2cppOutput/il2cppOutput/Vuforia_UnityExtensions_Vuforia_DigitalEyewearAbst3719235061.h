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
// UnityEngine.Transform
struct Transform_t3275118058;
// Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters
struct SerializableViewerParameters_t1300054541;
// UnityEngine.Camera
struct Camera_t189460977;
// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t3319870759;
// Vuforia.DistortionRenderingBehaviour
struct DistortionRenderingBehaviour_t2945034146;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "Vuforia_UnityExtensions_Vuforia_DistortionRenderin3766399464.h"
#include "Vuforia_UnityExtensions_Vuforia_DigitalEyewearAbst1156375578.h"
#include "Vuforia_UnityExtensions_Vuforia_DigitalEyewearAbst1337058172.h"
#include "Vuforia_UnityExtensions_Vuforia_DigitalEyewearAbst4290835274.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearAbstractBehaviour
struct  DigitalEyewearAbstractBehaviour_t3719235061  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Vuforia.DigitalEyewearAbstractBehaviour::mCameraOffset
	float ___mCameraOffset_8;
	// UnityEngine.Transform Vuforia.DigitalEyewearAbstractBehaviour::mCentralAnchorPoint
	Transform_t3275118058 * ___mCentralAnchorPoint_9;
	// UnityEngine.Transform Vuforia.DigitalEyewearAbstractBehaviour::mParentAnchorPoint
	Transform_t3275118058 * ___mParentAnchorPoint_10;
	// Vuforia.DistortionRenderingMode Vuforia.DigitalEyewearAbstractBehaviour::mDistortionRenderingMode
	int32_t ___mDistortionRenderingMode_11;
	// System.Int32 Vuforia.DigitalEyewearAbstractBehaviour::mDistortionRenderingLayer
	int32_t ___mDistortionRenderingLayer_12;
	// Vuforia.DigitalEyewearAbstractBehaviour/EyewearType Vuforia.DigitalEyewearAbstractBehaviour::mEyewearType
	int32_t ___mEyewearType_13;
	// Vuforia.DigitalEyewearAbstractBehaviour/StereoFramework Vuforia.DigitalEyewearAbstractBehaviour::mStereoFramework
	int32_t ___mStereoFramework_14;
	// Vuforia.DigitalEyewearAbstractBehaviour/SeeThroughConfiguration Vuforia.DigitalEyewearAbstractBehaviour::mSeeThroughConfiguration
	int32_t ___mSeeThroughConfiguration_15;
	// System.String Vuforia.DigitalEyewearAbstractBehaviour::mViewerName
	String_t* ___mViewerName_16;
	// System.String Vuforia.DigitalEyewearAbstractBehaviour::mViewerManufacturer
	String_t* ___mViewerManufacturer_17;
	// System.Boolean Vuforia.DigitalEyewearAbstractBehaviour::mUseCustomViewer
	bool ___mUseCustomViewer_18;
	// Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters Vuforia.DigitalEyewearAbstractBehaviour::mCustomViewer
	SerializableViewerParameters_t1300054541 * ___mCustomViewer_19;
	// UnityEngine.Camera Vuforia.DigitalEyewearAbstractBehaviour::mPrimaryCamera
	Camera_t189460977 * ___mPrimaryCamera_20;
	// UnityEngine.Rect Vuforia.DigitalEyewearAbstractBehaviour::mPrimaryCameraOriginalRect
	Rect_t3681755626  ___mPrimaryCameraOriginalRect_21;
	// UnityEngine.Camera Vuforia.DigitalEyewearAbstractBehaviour::mSecondaryCamera
	Camera_t189460977 * ___mSecondaryCamera_22;
	// UnityEngine.Rect Vuforia.DigitalEyewearAbstractBehaviour::mSecondaryCameraOriginalRect
	Rect_t3681755626  ___mSecondaryCameraOriginalRect_23;
	// System.Boolean Vuforia.DigitalEyewearAbstractBehaviour::mSecondaryCameraDisabledLocally
	bool ___mSecondaryCameraDisabledLocally_24;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.DigitalEyewearAbstractBehaviour::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t3319870759 * ___mVuforiaBehaviour_25;
	// Vuforia.DistortionRenderingBehaviour Vuforia.DigitalEyewearAbstractBehaviour::mDistortionRenderingBhvr
	DistortionRenderingBehaviour_t2945034146 * ___mDistortionRenderingBhvr_26;
	// System.Boolean Vuforia.DigitalEyewearAbstractBehaviour::mSetFocusPlaneAutomatically
	bool ___mSetFocusPlaneAutomatically_27;

public:
	inline static int32_t get_offset_of_mCameraOffset_8() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t3719235061, ___mCameraOffset_8)); }
	inline float get_mCameraOffset_8() const { return ___mCameraOffset_8; }
	inline float* get_address_of_mCameraOffset_8() { return &___mCameraOffset_8; }
	inline void set_mCameraOffset_8(float value)
	{
		___mCameraOffset_8 = value;
	}

	inline static int32_t get_offset_of_mCentralAnchorPoint_9() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t3719235061, ___mCentralAnchorPoint_9)); }
	inline Transform_t3275118058 * get_mCentralAnchorPoint_9() const { return ___mCentralAnchorPoint_9; }
	inline Transform_t3275118058 ** get_address_of_mCentralAnchorPoint_9() { return &___mCentralAnchorPoint_9; }
	inline void set_mCentralAnchorPoint_9(Transform_t3275118058 * value)
	{
		___mCentralAnchorPoint_9 = value;
		Il2CppCodeGenWriteBarrier(&___mCentralAnchorPoint_9, value);
	}

	inline static int32_t get_offset_of_mParentAnchorPoint_10() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t3719235061, ___mParentAnchorPoint_10)); }
	inline Transform_t3275118058 * get_mParentAnchorPoint_10() const { return ___mParentAnchorPoint_10; }
	inline Transform_t3275118058 ** get_address_of_mParentAnchorPoint_10() { return &___mParentAnchorPoint_10; }
	inline void set_mParentAnchorPoint_10(Transform_t3275118058 * value)
	{
		___mParentAnchorPoint_10 = value;
		Il2CppCodeGenWriteBarrier(&___mParentAnchorPoint_10, value);
	}

	inline static int32_t get_offset_of_mDistortionRenderingMode_11() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t3719235061, ___mDistortionRenderingMode_11)); }
	inline int32_t get_mDistortionRenderingMode_11() const { return ___mDistortionRenderingMode_11; }
	inline int32_t* get_address_of_mDistortionRenderingMode_11() { return &___mDistortionRenderingMode_11; }
	inline void set_mDistortionRenderingMode_11(int32_t value)
	{
		___mDistortionRenderingMode_11 = value;
	}

	inline static int32_t get_offset_of_mDistortionRenderingLayer_12() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t3719235061, ___mDistortionRenderingLayer_12)); }
	inline int32_t get_mDistortionRenderingLayer_12() const { return ___mDistortionRenderingLayer_12; }
	inline int32_t* get_address_of_mDistortionRenderingLayer_12() { return &___mDistortionRenderingLayer_12; }
	inline void set_mDistortionRenderingLayer_12(int32_t value)
	{
		___mDistortionRenderingLayer_12 = value;
	}

	inline static int32_t get_offset_of_mEyewearType_13() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t3719235061, ___mEyewearType_13)); }
	inline int32_t get_mEyewearType_13() const { return ___mEyewearType_13; }
	inline int32_t* get_address_of_mEyewearType_13() { return &___mEyewearType_13; }
	inline void set_mEyewearType_13(int32_t value)
	{
		___mEyewearType_13 = value;
	}

	inline static int32_t get_offset_of_mStereoFramework_14() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t3719235061, ___mStereoFramework_14)); }
	inline int32_t get_mStereoFramework_14() const { return ___mStereoFramework_14; }
	inline int32_t* get_address_of_mStereoFramework_14() { return &___mStereoFramework_14; }
	inline void set_mStereoFramework_14(int32_t value)
	{
		___mStereoFramework_14 = value;
	}

	inline static int32_t get_offset_of_mSeeThroughConfiguration_15() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t3719235061, ___mSeeThroughConfiguration_15)); }
	inline int32_t get_mSeeThroughConfiguration_15() const { return ___mSeeThroughConfiguration_15; }
	inline int32_t* get_address_of_mSeeThroughConfiguration_15() { return &___mSeeThroughConfiguration_15; }
	inline void set_mSeeThroughConfiguration_15(int32_t value)
	{
		___mSeeThroughConfiguration_15 = value;
	}

	inline static int32_t get_offset_of_mViewerName_16() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t3719235061, ___mViewerName_16)); }
	inline String_t* get_mViewerName_16() const { return ___mViewerName_16; }
	inline String_t** get_address_of_mViewerName_16() { return &___mViewerName_16; }
	inline void set_mViewerName_16(String_t* value)
	{
		___mViewerName_16 = value;
		Il2CppCodeGenWriteBarrier(&___mViewerName_16, value);
	}

	inline static int32_t get_offset_of_mViewerManufacturer_17() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t3719235061, ___mViewerManufacturer_17)); }
	inline String_t* get_mViewerManufacturer_17() const { return ___mViewerManufacturer_17; }
	inline String_t** get_address_of_mViewerManufacturer_17() { return &___mViewerManufacturer_17; }
	inline void set_mViewerManufacturer_17(String_t* value)
	{
		___mViewerManufacturer_17 = value;
		Il2CppCodeGenWriteBarrier(&___mViewerManufacturer_17, value);
	}

	inline static int32_t get_offset_of_mUseCustomViewer_18() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t3719235061, ___mUseCustomViewer_18)); }
	inline bool get_mUseCustomViewer_18() const { return ___mUseCustomViewer_18; }
	inline bool* get_address_of_mUseCustomViewer_18() { return &___mUseCustomViewer_18; }
	inline void set_mUseCustomViewer_18(bool value)
	{
		___mUseCustomViewer_18 = value;
	}

	inline static int32_t get_offset_of_mCustomViewer_19() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t3719235061, ___mCustomViewer_19)); }
	inline SerializableViewerParameters_t1300054541 * get_mCustomViewer_19() const { return ___mCustomViewer_19; }
	inline SerializableViewerParameters_t1300054541 ** get_address_of_mCustomViewer_19() { return &___mCustomViewer_19; }
	inline void set_mCustomViewer_19(SerializableViewerParameters_t1300054541 * value)
	{
		___mCustomViewer_19 = value;
		Il2CppCodeGenWriteBarrier(&___mCustomViewer_19, value);
	}

	inline static int32_t get_offset_of_mPrimaryCamera_20() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t3719235061, ___mPrimaryCamera_20)); }
	inline Camera_t189460977 * get_mPrimaryCamera_20() const { return ___mPrimaryCamera_20; }
	inline Camera_t189460977 ** get_address_of_mPrimaryCamera_20() { return &___mPrimaryCamera_20; }
	inline void set_mPrimaryCamera_20(Camera_t189460977 * value)
	{
		___mPrimaryCamera_20 = value;
		Il2CppCodeGenWriteBarrier(&___mPrimaryCamera_20, value);
	}

	inline static int32_t get_offset_of_mPrimaryCameraOriginalRect_21() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t3719235061, ___mPrimaryCameraOriginalRect_21)); }
	inline Rect_t3681755626  get_mPrimaryCameraOriginalRect_21() const { return ___mPrimaryCameraOriginalRect_21; }
	inline Rect_t3681755626 * get_address_of_mPrimaryCameraOriginalRect_21() { return &___mPrimaryCameraOriginalRect_21; }
	inline void set_mPrimaryCameraOriginalRect_21(Rect_t3681755626  value)
	{
		___mPrimaryCameraOriginalRect_21 = value;
	}

	inline static int32_t get_offset_of_mSecondaryCamera_22() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t3719235061, ___mSecondaryCamera_22)); }
	inline Camera_t189460977 * get_mSecondaryCamera_22() const { return ___mSecondaryCamera_22; }
	inline Camera_t189460977 ** get_address_of_mSecondaryCamera_22() { return &___mSecondaryCamera_22; }
	inline void set_mSecondaryCamera_22(Camera_t189460977 * value)
	{
		___mSecondaryCamera_22 = value;
		Il2CppCodeGenWriteBarrier(&___mSecondaryCamera_22, value);
	}

	inline static int32_t get_offset_of_mSecondaryCameraOriginalRect_23() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t3719235061, ___mSecondaryCameraOriginalRect_23)); }
	inline Rect_t3681755626  get_mSecondaryCameraOriginalRect_23() const { return ___mSecondaryCameraOriginalRect_23; }
	inline Rect_t3681755626 * get_address_of_mSecondaryCameraOriginalRect_23() { return &___mSecondaryCameraOriginalRect_23; }
	inline void set_mSecondaryCameraOriginalRect_23(Rect_t3681755626  value)
	{
		___mSecondaryCameraOriginalRect_23 = value;
	}

	inline static int32_t get_offset_of_mSecondaryCameraDisabledLocally_24() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t3719235061, ___mSecondaryCameraDisabledLocally_24)); }
	inline bool get_mSecondaryCameraDisabledLocally_24() const { return ___mSecondaryCameraDisabledLocally_24; }
	inline bool* get_address_of_mSecondaryCameraDisabledLocally_24() { return &___mSecondaryCameraDisabledLocally_24; }
	inline void set_mSecondaryCameraDisabledLocally_24(bool value)
	{
		___mSecondaryCameraDisabledLocally_24 = value;
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_25() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t3719235061, ___mVuforiaBehaviour_25)); }
	inline VuforiaAbstractBehaviour_t3319870759 * get_mVuforiaBehaviour_25() const { return ___mVuforiaBehaviour_25; }
	inline VuforiaAbstractBehaviour_t3319870759 ** get_address_of_mVuforiaBehaviour_25() { return &___mVuforiaBehaviour_25; }
	inline void set_mVuforiaBehaviour_25(VuforiaAbstractBehaviour_t3319870759 * value)
	{
		___mVuforiaBehaviour_25 = value;
		Il2CppCodeGenWriteBarrier(&___mVuforiaBehaviour_25, value);
	}

	inline static int32_t get_offset_of_mDistortionRenderingBhvr_26() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t3719235061, ___mDistortionRenderingBhvr_26)); }
	inline DistortionRenderingBehaviour_t2945034146 * get_mDistortionRenderingBhvr_26() const { return ___mDistortionRenderingBhvr_26; }
	inline DistortionRenderingBehaviour_t2945034146 ** get_address_of_mDistortionRenderingBhvr_26() { return &___mDistortionRenderingBhvr_26; }
	inline void set_mDistortionRenderingBhvr_26(DistortionRenderingBehaviour_t2945034146 * value)
	{
		___mDistortionRenderingBhvr_26 = value;
		Il2CppCodeGenWriteBarrier(&___mDistortionRenderingBhvr_26, value);
	}

	inline static int32_t get_offset_of_mSetFocusPlaneAutomatically_27() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t3719235061, ___mSetFocusPlaneAutomatically_27)); }
	inline bool get_mSetFocusPlaneAutomatically_27() const { return ___mSetFocusPlaneAutomatically_27; }
	inline bool* get_address_of_mSetFocusPlaneAutomatically_27() { return &___mSetFocusPlaneAutomatically_27; }
	inline void set_mSetFocusPlaneAutomatically_27(bool value)
	{
		___mSetFocusPlaneAutomatically_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
