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

// Lean.Touch.LeanSelect
struct LeanSelect_t3606489640;
// Lean.Touch.LeanFinger
struct LeanFinger_t76062517;
// UnityEngine.Component
struct Component_t3819376471;
// Lean.Touch.LeanSelectable
struct LeanSelectable_t3692576450;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Lean_Touch_LeanFinger76062517.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "AssemblyU2DCSharp_Lean_Touch_LeanSelectable3692576450.h"

// System.Void Lean.Touch.LeanSelect::.ctor()
extern "C"  void LeanSelect__ctor_m2300687000 (LeanSelect_t3606489640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.Touch.LeanSelect::Select(Lean.Touch.LeanFinger,UnityEngine.Component)
extern "C"  void LeanSelect_Select_m2513733542 (LeanSelect_t3606489640 * __this, LeanFinger_t76062517 * ___finger0, Component_t3819376471 * ___component1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.Touch.LeanSelect::Select(Lean.Touch.LeanFinger,Lean.Touch.LeanSelectable)
extern "C"  void LeanSelect_Select_m2596434945 (LeanSelect_t3606489640 * __this, LeanFinger_t76062517 * ___finger0, LeanSelectable_t3692576450 * ___selectable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.Touch.LeanSelect::Deselect()
extern "C"  void LeanSelect_Deselect_m273978335 (LeanSelect_t3606489640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.Touch.LeanSelect::Deselect(Lean.Touch.LeanFinger)
extern "C"  void LeanSelect_Deselect_m1736709975 (LeanSelect_t3606489640 * __this, LeanFinger_t76062517 * ___finger0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
