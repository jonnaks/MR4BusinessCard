#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Lean.Touch.LeanFingerTap/LeanFingerEvent
struct LeanFingerEvent_t1916295887;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanFingerTap
struct  LeanFingerTap_t2593896000  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Lean.Touch.LeanFingerTap::IgnoreGuiFingers
	bool ___IgnoreGuiFingers_2;
	// System.Int32 Lean.Touch.LeanFingerTap::RequiredTapCount
	int32_t ___RequiredTapCount_3;
	// System.Int32 Lean.Touch.LeanFingerTap::RequiredTapInterval
	int32_t ___RequiredTapInterval_4;
	// Lean.Touch.LeanFingerTap/LeanFingerEvent Lean.Touch.LeanFingerTap::OnFingerTap
	LeanFingerEvent_t1916295887 * ___OnFingerTap_5;

public:
	inline static int32_t get_offset_of_IgnoreGuiFingers_2() { return static_cast<int32_t>(offsetof(LeanFingerTap_t2593896000, ___IgnoreGuiFingers_2)); }
	inline bool get_IgnoreGuiFingers_2() const { return ___IgnoreGuiFingers_2; }
	inline bool* get_address_of_IgnoreGuiFingers_2() { return &___IgnoreGuiFingers_2; }
	inline void set_IgnoreGuiFingers_2(bool value)
	{
		___IgnoreGuiFingers_2 = value;
	}

	inline static int32_t get_offset_of_RequiredTapCount_3() { return static_cast<int32_t>(offsetof(LeanFingerTap_t2593896000, ___RequiredTapCount_3)); }
	inline int32_t get_RequiredTapCount_3() const { return ___RequiredTapCount_3; }
	inline int32_t* get_address_of_RequiredTapCount_3() { return &___RequiredTapCount_3; }
	inline void set_RequiredTapCount_3(int32_t value)
	{
		___RequiredTapCount_3 = value;
	}

	inline static int32_t get_offset_of_RequiredTapInterval_4() { return static_cast<int32_t>(offsetof(LeanFingerTap_t2593896000, ___RequiredTapInterval_4)); }
	inline int32_t get_RequiredTapInterval_4() const { return ___RequiredTapInterval_4; }
	inline int32_t* get_address_of_RequiredTapInterval_4() { return &___RequiredTapInterval_4; }
	inline void set_RequiredTapInterval_4(int32_t value)
	{
		___RequiredTapInterval_4 = value;
	}

	inline static int32_t get_offset_of_OnFingerTap_5() { return static_cast<int32_t>(offsetof(LeanFingerTap_t2593896000, ___OnFingerTap_5)); }
	inline LeanFingerEvent_t1916295887 * get_OnFingerTap_5() const { return ___OnFingerTap_5; }
	inline LeanFingerEvent_t1916295887 ** get_address_of_OnFingerTap_5() { return &___OnFingerTap_5; }
	inline void set_OnFingerTap_5(LeanFingerEvent_t1916295887 * value)
	{
		___OnFingerTap_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerTap_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
