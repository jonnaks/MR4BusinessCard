﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseInfo,Vuforia.VuforiaManager/TrackableIdPair>
struct Transform_1_t1208385095;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManager_Tra1329355276.h"
#include "Vuforia_UnityExtensions_Vuforia_HoloLensExtendedTr1161658011.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseInfo,Vuforia.VuforiaManager/TrackableIdPair>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2868591346_gshared (Transform_1_t1208385095 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2868591346(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1208385095 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2868591346_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseInfo,Vuforia.VuforiaManager/TrackableIdPair>::Invoke(TKey,TValue)
extern "C"  TrackableIdPair_t1329355276  Transform_1_Invoke_m1684249954_gshared (Transform_1_t1208385095 * __this, TrackableIdPair_t1329355276  ___key0, PoseInfo_t1161658011  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1684249954(__this, ___key0, ___value1, method) ((  TrackableIdPair_t1329355276  (*) (Transform_1_t1208385095 *, TrackableIdPair_t1329355276 , PoseInfo_t1161658011 , const MethodInfo*))Transform_1_Invoke_m1684249954_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseInfo,Vuforia.VuforiaManager/TrackableIdPair>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m56665023_gshared (Transform_1_t1208385095 * __this, TrackableIdPair_t1329355276  ___key0, PoseInfo_t1161658011  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m56665023(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1208385095 *, TrackableIdPair_t1329355276 , PoseInfo_t1161658011 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m56665023_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseInfo,Vuforia.VuforiaManager/TrackableIdPair>::EndInvoke(System.IAsyncResult)
extern "C"  TrackableIdPair_t1329355276  Transform_1_EndInvoke_m4184997356_gshared (Transform_1_t1208385095 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m4184997356(__this, ___result0, method) ((  TrackableIdPair_t1329355276  (*) (Transform_1_t1208385095 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m4184997356_gshared)(__this, ___result0, method)
