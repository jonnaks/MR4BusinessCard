﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Lean.Touch.LeanFinger
struct LeanFinger_t76062517;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanDragTrail/<OnFingerUp>c__AnonStorey1
struct  U3COnFingerUpU3Ec__AnonStorey1_t1191669119  : public Il2CppObject
{
public:
	// Lean.Touch.LeanFinger Lean.Touch.LeanDragTrail/<OnFingerUp>c__AnonStorey1::finger
	LeanFinger_t76062517 * ___finger_0;

public:
	inline static int32_t get_offset_of_finger_0() { return static_cast<int32_t>(offsetof(U3COnFingerUpU3Ec__AnonStorey1_t1191669119, ___finger_0)); }
	inline LeanFinger_t76062517 * get_finger_0() const { return ___finger_0; }
	inline LeanFinger_t76062517 ** get_address_of_finger_0() { return &___finger_0; }
	inline void set_finger_0(LeanFinger_t76062517 * value)
	{
		___finger_0 = value;
		Il2CppCodeGenWriteBarrier(&___finger_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
