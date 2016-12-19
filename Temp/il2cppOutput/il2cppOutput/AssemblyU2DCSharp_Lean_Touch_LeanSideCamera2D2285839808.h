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

// Lean.Touch.LeanSideCamera2D
struct  LeanSideCamera2D_t2285839808  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera Lean.Touch.LeanSideCamera2D::Camera
	Camera_t189460977 * ___Camera_2;
	// System.Single Lean.Touch.LeanSideCamera2D::Minimum
	float ___Minimum_3;
	// System.Single Lean.Touch.LeanSideCamera2D::Maximum
	float ___Maximum_4;

public:
	inline static int32_t get_offset_of_Camera_2() { return static_cast<int32_t>(offsetof(LeanSideCamera2D_t2285839808, ___Camera_2)); }
	inline Camera_t189460977 * get_Camera_2() const { return ___Camera_2; }
	inline Camera_t189460977 ** get_address_of_Camera_2() { return &___Camera_2; }
	inline void set_Camera_2(Camera_t189460977 * value)
	{
		___Camera_2 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_2, value);
	}

	inline static int32_t get_offset_of_Minimum_3() { return static_cast<int32_t>(offsetof(LeanSideCamera2D_t2285839808, ___Minimum_3)); }
	inline float get_Minimum_3() const { return ___Minimum_3; }
	inline float* get_address_of_Minimum_3() { return &___Minimum_3; }
	inline void set_Minimum_3(float value)
	{
		___Minimum_3 = value;
	}

	inline static int32_t get_offset_of_Maximum_4() { return static_cast<int32_t>(offsetof(LeanSideCamera2D_t2285839808, ___Maximum_4)); }
	inline float get_Maximum_4() const { return ___Maximum_4; }
	inline float* get_address_of_Maximum_4() { return &___Maximum_4; }
	inline void set_Maximum_4(float value)
	{
		___Maximum_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
