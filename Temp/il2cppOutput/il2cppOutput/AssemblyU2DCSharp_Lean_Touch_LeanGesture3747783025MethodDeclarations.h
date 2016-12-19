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

// System.Collections.Generic.List`1<Lean.Touch.LeanFinger>
struct List_1_t3740150945;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"

// UnityEngine.Vector2 Lean.Touch.LeanGesture::GetScreenCenter()
extern "C"  Vector2_t2243707579  LeanGesture_GetScreenCenter_m1425316447 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.Touch.LeanGesture::GetScreenCenter(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>)
extern "C"  Vector2_t2243707579  LeanGesture_GetScreenCenter_m691006509 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanGesture::TryGetScreenCenter(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>,UnityEngine.Vector2&)
extern "C"  bool LeanGesture_TryGetScreenCenter_m1612953595 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, Vector2_t2243707579 * ___center1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.Touch.LeanGesture::GetLastScreenCenter()
extern "C"  Vector2_t2243707579  LeanGesture_GetLastScreenCenter_m457981697 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.Touch.LeanGesture::GetLastScreenCenter(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>)
extern "C"  Vector2_t2243707579  LeanGesture_GetLastScreenCenter_m2188544487 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanGesture::TryGetLastScreenCenter(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>,UnityEngine.Vector2&)
extern "C"  bool LeanGesture_TryGetLastScreenCenter_m85486469 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, Vector2_t2243707579 * ___center1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.Touch.LeanGesture::GetScreenDelta()
extern "C"  Vector2_t2243707579  LeanGesture_GetScreenDelta_m217217714 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.Touch.LeanGesture::GetScreenDelta(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>)
extern "C"  Vector2_t2243707579  LeanGesture_GetScreenDelta_m2509873154 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanGesture::TryGetScreenDelta(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>,UnityEngine.Vector2&)
extern "C"  bool LeanGesture_TryGetScreenDelta_m667504852 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, Vector2_t2243707579 * ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.Touch.LeanGesture::GetScaledDelta()
extern "C"  Vector2_t2243707579  LeanGesture_GetScaledDelta_m4039147376 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Lean.Touch.LeanGesture::GetScaledDelta(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>)
extern "C"  Vector2_t2243707579  LeanGesture_GetScaledDelta_m925836160 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanGesture::TryGetScaledDelta(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>,UnityEngine.Vector2&)
extern "C"  bool LeanGesture_TryGetScaledDelta_m4013569822 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, Vector2_t2243707579 * ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Lean.Touch.LeanGesture::GetWorldDelta(System.Single,UnityEngine.Camera)
extern "C"  Vector3_t2243707580  LeanGesture_GetWorldDelta_m3502950734 (Il2CppObject * __this /* static, unused */, float ___distance0, Camera_t189460977 * ___camera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Lean.Touch.LeanGesture::GetWorldDelta(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>,System.Single,UnityEngine.Camera)
extern "C"  Vector3_t2243707580  LeanGesture_GetWorldDelta_m564202146 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, float ___distance1, Camera_t189460977 * ___camera2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanGesture::TryGetWorldDelta(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>,System.Single,UnityEngine.Vector3&,UnityEngine.Camera)
extern "C"  bool LeanGesture_TryGetWorldDelta_m1562947682 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, float ___distance1, Vector3_t2243707580 * ___delta2, Camera_t189460977 * ___camera3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanGesture::GetScreenDistance()
extern "C"  float LeanGesture_GetScreenDistance_m1167632214 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanGesture::GetScreenDistance(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>)
extern "C"  float LeanGesture_GetScreenDistance_m2883485954 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanGesture::GetScreenDistance(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>,UnityEngine.Vector2)
extern "C"  float LeanGesture_GetScreenDistance_m3412517712 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, Vector2_t2243707579  ___center1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanGesture::TryGetScreenDistance(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>,UnityEngine.Vector2,System.Single&)
extern "C"  bool LeanGesture_TryGetScreenDistance_m1512683900 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, Vector2_t2243707579  ___center1, float* ___distance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanGesture::GetScaledDistance()
extern "C"  float LeanGesture_GetScaledDistance_m2184466804 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanGesture::GetScaledDistance(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>)
extern "C"  float LeanGesture_GetScaledDistance_m4088298328 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanGesture::GetScaledDistance(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>,UnityEngine.Vector2)
extern "C"  float LeanGesture_GetScaledDistance_m1615056154 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, Vector2_t2243707579  ___center1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanGesture::TryGetScaledDistance(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>,UnityEngine.Vector2,System.Single&)
extern "C"  bool LeanGesture_TryGetScaledDistance_m4004780606 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, Vector2_t2243707579  ___center1, float* ___distance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanGesture::GetLastScreenDistance()
extern "C"  float LeanGesture_GetLastScreenDistance_m3064243070 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanGesture::GetLastScreenDistance(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>)
extern "C"  float LeanGesture_GetLastScreenDistance_m758762782 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanGesture::GetLastScreenDistance(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>,UnityEngine.Vector2)
extern "C"  float LeanGesture_GetLastScreenDistance_m2133025940 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, Vector2_t2243707579  ___center1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanGesture::TryGetLastScreenDistance(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>,UnityEngine.Vector2,System.Single&)
extern "C"  bool LeanGesture_TryGetLastScreenDistance_m3186493684 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, Vector2_t2243707579  ___center1, float* ___distance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanGesture::GetLastScaledDistance()
extern "C"  float LeanGesture_GetLastScaledDistance_m4035432924 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanGesture::GetLastScaledDistance(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>)
extern "C"  float LeanGesture_GetLastScaledDistance_m2220317004 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanGesture::GetLastScaledDistance(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>,UnityEngine.Vector2)
extern "C"  float LeanGesture_GetLastScaledDistance_m3415498694 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, Vector2_t2243707579  ___center1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanGesture::TryGetLastScaledDistance(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>,UnityEngine.Vector2,System.Single&)
extern "C"  bool LeanGesture_TryGetLastScaledDistance_m50325430 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, Vector2_t2243707579  ___center1, float* ___distance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanGesture::GetPinchScale()
extern "C"  float LeanGesture_GetPinchScale_m1664173661 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanGesture::GetPinchScale(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>)
extern "C"  float LeanGesture_GetPinchScale_m3026702667 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanGesture::TryGetPinchScale(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>,UnityEngine.Vector2,UnityEngine.Vector2,System.Single&)
extern "C"  bool LeanGesture_TryGetPinchScale_m458714157 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, Vector2_t2243707579  ___center1, Vector2_t2243707579  ___lastCenter2, float* ___scale3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanGesture::GetPinchRatio()
extern "C"  float LeanGesture_GetPinchRatio_m3652958646 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanGesture::GetPinchRatio(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>)
extern "C"  float LeanGesture_GetPinchRatio_m276788166 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanGesture::TryGetPinchRatio(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>,UnityEngine.Vector2,UnityEngine.Vector2,System.Single&)
extern "C"  bool LeanGesture_TryGetPinchRatio_m186011782 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, Vector2_t2243707579  ___center1, Vector2_t2243707579  ___lastCenter2, float* ___ratio3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanGesture::GetTwistDegrees()
extern "C"  float LeanGesture_GetTwistDegrees_m4134824075 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanGesture::GetTwistDegrees(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>)
extern "C"  float LeanGesture_GetTwistDegrees_m1268414193 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanGesture::GetTwistDegrees(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float LeanGesture_GetTwistDegrees_m3256309937 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, Vector2_t2243707579  ___center1, Vector2_t2243707579  ___lastCenter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanGesture::TryGetTwistDegrees(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>,UnityEngine.Vector2,UnityEngine.Vector2,System.Single&)
extern "C"  bool LeanGesture_TryGetTwistDegrees_m2334360835 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, Vector2_t2243707579  ___center1, Vector2_t2243707579  ___lastCenter2, float* ___degrees3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanGesture::GetTwistRadians()
extern "C"  float LeanGesture_GetTwistRadians_m2235300574 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanGesture::GetTwistRadians(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>)
extern "C"  float LeanGesture_GetTwistRadians_m1347558846 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lean.Touch.LeanGesture::GetTwistRadians(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float LeanGesture_GetTwistRadians_m915240574 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, Vector2_t2243707579  ___center1, Vector2_t2243707579  ___lastCenter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lean.Touch.LeanGesture::TryGetTwistRadians(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>,UnityEngine.Vector2,UnityEngine.Vector2,System.Single&)
extern "C"  bool LeanGesture_TryGetTwistRadians_m1067092750 (Il2CppObject * __this /* static, unused */, List_1_t3740150945 * ___fingers0, Vector2_t2243707579  ___center1, Vector2_t2243707579  ___lastCenter2, float* ___radians3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
