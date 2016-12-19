#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanSideCamera3D
struct  LeanSideCamera3D_t719755867  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera Lean.Touch.LeanSideCamera3D::Camera
	Camera_t189460977 * ___Camera_2;
	// System.Single Lean.Touch.LeanSideCamera3D::FovMin
	float ___FovMin_3;
	// System.Single Lean.Touch.LeanSideCamera3D::FovMax
	float ___FovMax_4;
	// System.Single Lean.Touch.LeanSideCamera3D::Distance
	float ___Distance_5;

public:
	inline static int32_t get_offset_of_Camera_2() { return static_cast<int32_t>(offsetof(LeanSideCamera3D_t719755867, ___Camera_2)); }
	inline Camera_t189460977 * get_Camera_2() const { return ___Camera_2; }
	inline Camera_t189460977 ** get_address_of_Camera_2() { return &___Camera_2; }
	inline void set_Camera_2(Camera_t189460977 * value)
	{
		___Camera_2 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_2, value);
	}

	inline static int32_t get_offset_of_FovMin_3() { return static_cast<int32_t>(offsetof(LeanSideCamera3D_t719755867, ___FovMin_3)); }
	inline float get_FovMin_3() const { return ___FovMin_3; }
	inline float* get_address_of_FovMin_3() { return &___FovMin_3; }
	inline void set_FovMin_3(float value)
	{
		___FovMin_3 = value;
	}

	inline static int32_t get_offset_of_FovMax_4() { return static_cast<int32_t>(offsetof(LeanSideCamera3D_t719755867, ___FovMax_4)); }
	inline float get_FovMax_4() const { return ___FovMax_4; }
	inline float* get_address_of_FovMax_4() { return &___FovMax_4; }
	inline void set_FovMax_4(float value)
	{
		___FovMax_4 = value;
	}

	inline static int32_t get_offset_of_Distance_5() { return static_cast<int32_t>(offsetof(LeanSideCamera3D_t719755867, ___Distance_5)); }
	inline float get_Distance_5() const { return ___Distance_5; }
	inline float* get_address_of_Distance_5() { return &___Distance_5; }
	inline void set_Distance_5(float value)
	{
		___Distance_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
