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

// Lean.Touch.LeanFinger
struct LeanFinger_t76062517;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void Lean.Touch.LeanFinger::.ctor()
extern "C"  void LeanFinger__ctor_m2912008907 (LeanFinger_t76062517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanFinger::get_IsActive()
extern "C"  bool LeanFinger_get_IsActive_m260097598 (LeanFinger_t76062517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanFinger::get_SnapshotDuration()
extern "C"  float LeanFinger_get_SnapshotDuration_m1804999280 (LeanFinger_t76062517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanFinger::get_IsOverGui()
extern "C"  bool LeanFinger_get_IsOverGui_m99805733 (LeanFinger_t76062517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanFinger::get_HeldDown()
extern "C"  bool LeanFinger_get_HeldDown_m1134024437 (LeanFinger_t76062517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanFinger::get_HeldUp()
extern "C"  bool LeanFinger_get_HeldUp_m2139306750 (LeanFinger_t76062517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanFinger::get_Down()
extern "C"  bool LeanFinger_get_Down_m352250156 (LeanFinger_t76062517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanFinger::get_Up()
extern "C"  bool LeanFinger_get_Up_m2093848679 (LeanFinger_t76062517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.Touch.LeanFinger::get_LastSnapshotScreenDelta()
extern "C"  Vector2_t2243707579  LeanFinger_get_LastSnapshotScreenDelta_m3853234139 (LeanFinger_t76062517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.Touch.LeanFinger::get_LastSnapshotScaledDelta()
extern "C"  Vector2_t2243707579  LeanFinger_get_LastSnapshotScaledDelta_m194524335 (LeanFinger_t76062517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.Touch.LeanFinger::get_ScreenDelta()
extern "C"  Vector2_t2243707579  LeanFinger_get_ScreenDelta_m4236172177 (LeanFinger_t76062517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.Touch.LeanFinger::get_ScaledDelta()
extern "C"  Vector2_t2243707579  LeanFinger_get_ScaledDelta_m2701834449 (LeanFinger_t76062517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.Touch.LeanFinger::get_SwipeScreenDelta()
extern "C"  Vector2_t2243707579  LeanFinger_get_SwipeScreenDelta_m3198415493 (LeanFinger_t76062517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.Touch.LeanFinger::get_SwipeScaledDelta()
extern "C"  Vector2_t2243707579  LeanFinger_get_SwipeScaledDelta_m3813979981 (LeanFinger_t76062517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray Lean.Touch.LeanFinger::GetRay(UnityEngine.Camera)
extern "C"  Ray_t2469606224  LeanFinger_GetRay_m614673855 (LeanFinger_t76062517 * __this, Camera_t189460977 * ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray Lean.Touch.LeanFinger::GetStartRay(UnityEngine.Camera)
extern "C"  Ray_t2469606224  LeanFinger_GetStartRay_m1484836683 (LeanFinger_t76062517 * __this, Camera_t189460977 * ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.Touch.LeanFinger::GetSnapshotScreenDelta(System.Single)
extern "C"  Vector2_t2243707579  LeanFinger_GetSnapshotScreenDelta_m1625848775 (LeanFinger_t76062517 * __this, float ___deltaTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.Touch.LeanFinger::GetSnapshotScaledDelta(System.Single)
extern "C"  Vector2_t2243707579  LeanFinger_GetSnapshotScaledDelta_m3473631499 (LeanFinger_t76062517 * __this, float ___deltaTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.Touch.LeanFinger::GetSnapshotScreenPosition(System.Single)
extern "C"  Vector2_t2243707579  LeanFinger_GetSnapshotScreenPosition_m2211445704 (LeanFinger_t76062517 * __this, float ___targetAge0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.Touch.LeanFinger::GetSnapshot(System.Int32,System.Single&,UnityEngine.Vector2&)
extern "C"  void LeanFinger_GetSnapshot_m2177476597 (LeanFinger_t76062517 * __this, int32_t ___index0, float* ___age1, Vector2_t2243707579 * ___screenPosition2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanFinger::GetRadians(UnityEngine.Vector2)
extern "C"  float LeanFinger_GetRadians_m132518565 (LeanFinger_t76062517 * __this, Vector2_t2243707579  ___referencePoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanFinger::GetDegrees(UnityEngine.Vector2)
extern "C"  float LeanFinger_GetDegrees_m1442150424 (LeanFinger_t76062517 * __this, Vector2_t2243707579  ___referencePoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanFinger::GetLastRadians(UnityEngine.Vector2)
extern "C"  float LeanFinger_GetLastRadians_m1210071975 (LeanFinger_t76062517 * __this, Vector2_t2243707579  ___referencePoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanFinger::GetLastDegrees(UnityEngine.Vector2)
extern "C"  float LeanFinger_GetLastDegrees_m3881170996 (LeanFinger_t76062517 * __this, Vector2_t2243707579  ___referencePoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanFinger::GetDeltaRadians(UnityEngine.Vector2)
extern "C"  float LeanFinger_GetDeltaRadians_m441549769 (LeanFinger_t76062517 * __this, Vector2_t2243707579  ___referencePoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanFinger::GetDeltaRadians(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float LeanFinger_GetDeltaRadians_m3050096041 (LeanFinger_t76062517 * __this, Vector2_t2243707579  ___referencePoint0, Vector2_t2243707579  ___lastReferencePoint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanFinger::GetDeltaDegrees(UnityEngine.Vector2)
extern "C"  float LeanFinger_GetDeltaDegrees_m662206442 (LeanFinger_t76062517 * __this, Vector2_t2243707579  ___referencePoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanFinger::GetDeltaDegrees(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float LeanFinger_GetDeltaDegrees_m3033949992 (LeanFinger_t76062517 * __this, Vector2_t2243707579  ___referencePoint0, Vector2_t2243707579  ___lastReferencePoint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanFinger::GetScreenDistance(UnityEngine.Vector2)
extern "C"  float LeanFinger_GetScreenDistance_m2267040374 (LeanFinger_t76062517 * __this, Vector2_t2243707579  ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanFinger::GetScaledDistance(UnityEngine.Vector2)
extern "C"  float LeanFinger_GetScaledDistance_m1172516692 (LeanFinger_t76062517 * __this, Vector2_t2243707579  ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanFinger::GetLastScreenDistance(UnityEngine.Vector2)
extern "C"  float LeanFinger_GetLastScreenDistance_m1166097510 (LeanFinger_t76062517 * __this, Vector2_t2243707579  ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanFinger::GetLastScaledDistance(UnityEngine.Vector2)
extern "C"  float LeanFinger_GetLastScaledDistance_m3467600372 (LeanFinger_t76062517 * __this, Vector2_t2243707579  ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Lean.Touch.LeanFinger::GetStartWorldPosition(System.Single,UnityEngine.Camera)
extern "C"  Vector3_t2243707580  LeanFinger_GetStartWorldPosition_m1950964683 (LeanFinger_t76062517 * __this, float ___distance0, Camera_t189460977 * ___camera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Lean.Touch.LeanFinger::GetLastWorldPosition(System.Single,UnityEngine.Camera)
extern "C"  Vector3_t2243707580  LeanFinger_GetLastWorldPosition_m90194621 (LeanFinger_t76062517 * __this, float ___distance0, Camera_t189460977 * ___camera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Lean.Touch.LeanFinger::GetWorldPosition(System.Single,UnityEngine.Camera)
extern "C"  Vector3_t2243707580  LeanFinger_GetWorldPosition_m429562351 (LeanFinger_t76062517 * __this, float ___distance0, Camera_t189460977 * ___camera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Lean.Touch.LeanFinger::GetWorldDelta(System.Single,UnityEngine.Camera)
extern "C"  Vector3_t2243707580  LeanFinger_GetWorldDelta_m2080456610 (LeanFinger_t76062517 * __this, float ___distance0, Camera_t189460977 * ___camera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Lean.Touch.LeanFinger::GetWorldDelta(System.Single,System.Single,UnityEngine.Camera)
extern "C"  Vector3_t2243707580  LeanFinger_GetWorldDelta_m4098246407 (LeanFinger_t76062517 * __this, float ___lastDistance0, float ___distance1, Camera_t189460977 * ___camera2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.Touch.LeanFinger::ClearSnapshots(System.Int32)
extern "C"  void LeanFinger_ClearSnapshots_m927372788 (LeanFinger_t76062517 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.Touch.LeanFinger::RecordSnapshot()
extern "C"  void LeanFinger_RecordSnapshot_m1069153438 (LeanFinger_t76062517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lean.Touch.LeanFinger::GetLowerSnapshotIndex(System.Single)
extern "C"  int32_t LeanFinger_GetLowerSnapshotIndex_m2623435135 (LeanFinger_t76062517 * __this, float ___targetAge0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
