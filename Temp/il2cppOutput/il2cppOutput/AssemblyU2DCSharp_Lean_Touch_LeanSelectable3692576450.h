#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Lean.Touch.LeanFinger
struct LeanFinger_t76062517;
// Lean.Touch.LeanSelectable/LeanFingerEvent
struct LeanFingerEvent_t2546124889;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t408735097;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanSelectable
struct  LeanSelectable_t3692576450  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Lean.Touch.LeanSelectable::IsSelected
	bool ___IsSelected_2;
	// Lean.Touch.LeanFinger Lean.Touch.LeanSelectable::Finger
	LeanFinger_t76062517 * ___Finger_3;
	// Lean.Touch.LeanSelectable/LeanFingerEvent Lean.Touch.LeanSelectable::OnSelect
	LeanFingerEvent_t2546124889 * ___OnSelect_4;
	// UnityEngine.Events.UnityEvent Lean.Touch.LeanSelectable::OnDeselect
	UnityEvent_t408735097 * ___OnDeselect_5;

public:
	inline static int32_t get_offset_of_IsSelected_2() { return static_cast<int32_t>(offsetof(LeanSelectable_t3692576450, ___IsSelected_2)); }
	inline bool get_IsSelected_2() const { return ___IsSelected_2; }
	inline bool* get_address_of_IsSelected_2() { return &___IsSelected_2; }
	inline void set_IsSelected_2(bool value)
	{
		___IsSelected_2 = value;
	}

	inline static int32_t get_offset_of_Finger_3() { return static_cast<int32_t>(offsetof(LeanSelectable_t3692576450, ___Finger_3)); }
	inline LeanFinger_t76062517 * get_Finger_3() const { return ___Finger_3; }
	inline LeanFinger_t76062517 ** get_address_of_Finger_3() { return &___Finger_3; }
	inline void set_Finger_3(LeanFinger_t76062517 * value)
	{
		___Finger_3 = value;
		Il2CppCodeGenWriteBarrier(&___Finger_3, value);
	}

	inline static int32_t get_offset_of_OnSelect_4() { return static_cast<int32_t>(offsetof(LeanSelectable_t3692576450, ___OnSelect_4)); }
	inline LeanFingerEvent_t2546124889 * get_OnSelect_4() const { return ___OnSelect_4; }
	inline LeanFingerEvent_t2546124889 ** get_address_of_OnSelect_4() { return &___OnSelect_4; }
	inline void set_OnSelect_4(LeanFingerEvent_t2546124889 * value)
	{
		___OnSelect_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnSelect_4, value);
	}

	inline static int32_t get_offset_of_OnDeselect_5() { return static_cast<int32_t>(offsetof(LeanSelectable_t3692576450, ___OnDeselect_5)); }
	inline UnityEvent_t408735097 * get_OnDeselect_5() const { return ___OnDeselect_5; }
	inline UnityEvent_t408735097 ** get_address_of_OnDeselect_5() { return &___OnDeselect_5; }
	inline void set_OnDeselect_5(UnityEvent_t408735097 * value)
	{
		___OnDeselect_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnDeselect_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
