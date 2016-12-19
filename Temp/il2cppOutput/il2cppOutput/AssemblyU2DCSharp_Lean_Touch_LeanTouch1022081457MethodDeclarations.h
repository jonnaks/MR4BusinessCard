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

// Lean.Touch.LeanTouch
struct LeanTouch_t1022081457;
// UnityEngine.Camera
struct Camera_t189460977;
// System.Collections.Generic.List`1<Lean.Touch.LeanFinger>
struct List_1_t3740150945;
// Lean.Touch.LeanFinger
struct LeanFinger_t76062517;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResul21186376.h"

// System.Void Lean.Touch.LeanTouch::.ctor()
extern "C"  void LeanTouch__ctor_m3639591875 (LeanTouch_t1022081457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanTouch::get_CurrentTapThreshold()
extern "C"  float LeanTouch_get_CurrentTapThreshold_m745896155 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lean.Touch.LeanTouch Lean.Touch.LeanTouch::get_Instance()
extern "C"  LeanTouch_t1022081457 * LeanTouch_get_Instance_m148357266 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanTouch::get_ScalingFactor()
extern "C"  float LeanTouch_get_ScalingFactor_m3828003300 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanTouch::get_AnyMouseButtonSet()
extern "C"  bool LeanTouch_get_AnyMouseButtonSet_m3160972925 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanTouch::get_GuiInUse()
extern "C"  bool LeanTouch_get_GuiInUse_m3439925841 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanTouch::GetCamera(UnityEngine.Camera&)
extern "C"  bool LeanTouch_GetCamera_m3186988658 (Il2CppObject * __this /* static, unused */, Camera_t189460977 ** ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanTouch::PointOverGui(UnityEngine.Vector2)
extern "C"  bool LeanTouch_PointOverGui_m1975515422 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___screenPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult Lean.Touch.LeanTouch::RaycastGui(UnityEngine.Vector2)
extern "C"  RaycastResult_t21186376  LeanTouch_RaycastGui_m2982633117 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___screenPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Lean.Touch.LeanFinger> Lean.Touch.LeanTouch::GetFingers(System.Boolean,System.Int32)
extern "C"  List_1_t3740150945 * LeanTouch_GetFingers_m4092984378 (Il2CppObject * __this /* static, unused */, bool ___ignoreGuiFingers0, int32_t ___requiredFingerCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.Touch.LeanTouch::Awake()
extern "C"  void LeanTouch_Awake_m4273774824 (LeanTouch_t1022081457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.Touch.LeanTouch::OnEnable()
extern "C"  void LeanTouch_OnEnable_m3915642215 (LeanTouch_t1022081457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.Touch.LeanTouch::OnDisable()
extern "C"  void LeanTouch_OnDisable_m2448643836 (LeanTouch_t1022081457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.Touch.LeanTouch::Update()
extern "C"  void LeanTouch_Update_m38779258 (LeanTouch_t1022081457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.Touch.LeanTouch::OnGUI()
extern "C"  void LeanTouch_OnGUI_m1931013041 (LeanTouch_t1022081457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.Touch.LeanTouch::UpdateFingers()
extern "C"  void LeanTouch_UpdateFingers_m669488330 (LeanTouch_t1022081457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.Touch.LeanTouch::BeginFingers()
extern "C"  void LeanTouch_BeginFingers_m1597723638 (LeanTouch_t1022081457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.Touch.LeanTouch::EndFingers()
extern "C"  void LeanTouch_EndFingers_m3957777958 (LeanTouch_t1022081457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.Touch.LeanTouch::PollFingers()
extern "C"  void LeanTouch_PollFingers_m581529374 (LeanTouch_t1022081457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.Touch.LeanTouch::UpdateEvents()
extern "C"  void LeanTouch_UpdateEvents_m2040898897 (LeanTouch_t1022081457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.Touch.LeanTouch::AddFinger(System.Int32,UnityEngine.Vector2)
extern "C"  void LeanTouch_AddFinger_m3609530850 (LeanTouch_t1022081457 * __this, int32_t ___index0, Vector2_t2243707579  ___screenPosition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lean.Touch.LeanFinger Lean.Touch.LeanTouch::FindFinger(System.Int32)
extern "C"  LeanFinger_t76062517 * LeanTouch_FindFinger_m1788329765 (LeanTouch_t1022081457 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lean.Touch.LeanTouch::FindInactiveFingerIndex(System.Int32)
extern "C"  int32_t LeanTouch_FindInactiveFingerIndex_m327887945 (LeanTouch_t1022081457 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.Touch.LeanTouch::.cctor()
extern "C"  void LeanTouch__cctor_m2435515766 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
