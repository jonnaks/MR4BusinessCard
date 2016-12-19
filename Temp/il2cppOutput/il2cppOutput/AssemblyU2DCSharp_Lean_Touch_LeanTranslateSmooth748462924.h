#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Lean.Touch.LeanSelectable
struct LeanSelectable_t3692576450;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanTranslateSmooth
struct  LeanTranslateSmooth_t748462924  : public MonoBehaviour_t1158329972
{
public:
	// Lean.Touch.LeanSelectable Lean.Touch.LeanTranslateSmooth::RequiredSelectable
	LeanSelectable_t3692576450 * ___RequiredSelectable_2;
	// System.Single Lean.Touch.LeanTranslateSmooth::Sharpness
	float ___Sharpness_3;
	// UnityEngine.Vector3 Lean.Touch.LeanTranslateSmooth::remainingDelta
	Vector3_t2243707580  ___remainingDelta_4;

public:
	inline static int32_t get_offset_of_RequiredSelectable_2() { return static_cast<int32_t>(offsetof(LeanTranslateSmooth_t748462924, ___RequiredSelectable_2)); }
	inline LeanSelectable_t3692576450 * get_RequiredSelectable_2() const { return ___RequiredSelectable_2; }
	inline LeanSelectable_t3692576450 ** get_address_of_RequiredSelectable_2() { return &___RequiredSelectable_2; }
	inline void set_RequiredSelectable_2(LeanSelectable_t3692576450 * value)
	{
		___RequiredSelectable_2 = value;
		Il2CppCodeGenWriteBarrier(&___RequiredSelectable_2, value);
	}

	inline static int32_t get_offset_of_Sharpness_3() { return static_cast<int32_t>(offsetof(LeanTranslateSmooth_t748462924, ___Sharpness_3)); }
	inline float get_Sharpness_3() const { return ___Sharpness_3; }
	inline float* get_address_of_Sharpness_3() { return &___Sharpness_3; }
	inline void set_Sharpness_3(float value)
	{
		___Sharpness_3 = value;
	}

	inline static int32_t get_offset_of_remainingDelta_4() { return static_cast<int32_t>(offsetof(LeanTranslateSmooth_t748462924, ___remainingDelta_4)); }
	inline Vector3_t2243707580  get_remainingDelta_4() const { return ___remainingDelta_4; }
	inline Vector3_t2243707580 * get_address_of_remainingDelta_4() { return &___remainingDelta_4; }
	inline void set_remainingDelta_4(Vector3_t2243707580  value)
	{
		___remainingDelta_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
