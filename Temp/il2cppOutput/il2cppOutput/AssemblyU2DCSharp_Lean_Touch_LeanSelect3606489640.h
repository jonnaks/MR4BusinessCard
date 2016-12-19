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
#include "AssemblyU2DCSharp_Lean_Touch_LeanSelect_SearchType3831610778.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanSelect
struct  LeanSelect_t3606489640  : public MonoBehaviour_t1158329972
{
public:
	// Lean.Touch.LeanSelect/SearchType Lean.Touch.LeanSelect::Search
	int32_t ___Search_2;
	// Lean.Touch.LeanSelectable Lean.Touch.LeanSelect::CurrentSelectable
	LeanSelectable_t3692576450 * ___CurrentSelectable_3;
	// System.Boolean Lean.Touch.LeanSelect::AutoDeselect
	bool ___AutoDeselect_4;

public:
	inline static int32_t get_offset_of_Search_2() { return static_cast<int32_t>(offsetof(LeanSelect_t3606489640, ___Search_2)); }
	inline int32_t get_Search_2() const { return ___Search_2; }
	inline int32_t* get_address_of_Search_2() { return &___Search_2; }
	inline void set_Search_2(int32_t value)
	{
		___Search_2 = value;
	}

	inline static int32_t get_offset_of_CurrentSelectable_3() { return static_cast<int32_t>(offsetof(LeanSelect_t3606489640, ___CurrentSelectable_3)); }
	inline LeanSelectable_t3692576450 * get_CurrentSelectable_3() const { return ___CurrentSelectable_3; }
	inline LeanSelectable_t3692576450 ** get_address_of_CurrentSelectable_3() { return &___CurrentSelectable_3; }
	inline void set_CurrentSelectable_3(LeanSelectable_t3692576450 * value)
	{
		___CurrentSelectable_3 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentSelectable_3, value);
	}

	inline static int32_t get_offset_of_AutoDeselect_4() { return static_cast<int32_t>(offsetof(LeanSelect_t3606489640, ___AutoDeselect_4)); }
	inline bool get_AutoDeselect_4() const { return ___AutoDeselect_4; }
	inline bool* get_address_of_AutoDeselect_4() { return &___AutoDeselect_4; }
	inline void set_AutoDeselect_4(bool value)
	{
		___AutoDeselect_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
