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

// Lean.Touch.LeanSnapshot
struct LeanSnapshot_t1117222592;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"

// System.Void Lean.Touch.LeanSnapshot::.ctor()
extern "C"  void LeanSnapshot__ctor_m3094073972 (LeanSnapshot_t1117222592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Lean.Touch.LeanSnapshot::GetWorldPosition(System.Single,UnityEngine.Camera)
extern "C"  Vector3_t2243707580  LeanSnapshot_GetWorldPosition_m1496257878 (LeanSnapshot_t1117222592 * __this, float ___distance0, Camera_t189460977 * ___camera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lean.Touch.LeanSnapshot Lean.Touch.LeanSnapshot::Pop()
extern "C"  LeanSnapshot_t1117222592 * LeanSnapshot_Pop_m1078260391 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lean.Touch.LeanSnapshot::.cctor()
extern "C"  void LeanSnapshot__cctor_m778409497 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
