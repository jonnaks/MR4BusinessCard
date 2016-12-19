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

// Vuforia.MarkerTrackerImpl
struct MarkerTrackerImpl_t654952814;
// Vuforia.MarkerAbstractBehaviour
struct MarkerAbstractBehaviour_t1456101953;
// System.String
struct String_t;
// Vuforia.Marker
struct Marker_t1563082680;
// System.Collections.Generic.IEnumerable`1<Vuforia.Marker>
struct IEnumerable_1_t1855209725;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Boolean Vuforia.MarkerTrackerImpl::Start()
extern "C"  bool MarkerTrackerImpl_Start_m1384918226 (MarkerTrackerImpl_t654952814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerTrackerImpl::Stop()
extern "C"  void MarkerTrackerImpl_Stop_m450099344 (MarkerTrackerImpl_t654952814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.MarkerTrackerImpl::CreateMarker(System.Int32,System.String,System.Single)
extern "C"  MarkerAbstractBehaviour_t1456101953 * MarkerTrackerImpl_CreateMarker_m1214502892 (MarkerTrackerImpl_t654952814 * __this, int32_t ___markerID0, String_t* ___trackableName1, float ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MarkerTrackerImpl::DestroyMarker(Vuforia.Marker,System.Boolean)
extern "C"  bool MarkerTrackerImpl_DestroyMarker_m4066288051 (MarkerTrackerImpl_t654952814 * __this, Il2CppObject * ___marker0, bool ___destroyGameObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Marker> Vuforia.MarkerTrackerImpl::GetMarkers()
extern "C"  Il2CppObject* MarkerTrackerImpl_GetMarkers_m2406604391 (MarkerTrackerImpl_t654952814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Marker Vuforia.MarkerTrackerImpl::GetMarkerByMarkerID(System.Int32)
extern "C"  Il2CppObject * MarkerTrackerImpl_GetMarkerByMarkerID_m1394317564 (MarkerTrackerImpl_t654952814 * __this, int32_t ___markerID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Marker Vuforia.MarkerTrackerImpl::InternalCreateMarker(System.Int32,System.String,System.Single)
extern "C"  Il2CppObject * MarkerTrackerImpl_InternalCreateMarker_m2172554228 (MarkerTrackerImpl_t654952814 * __this, int32_t ___markerID0, String_t* ___name1, float ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerTrackerImpl::DestroyAllMarkers(System.Boolean)
extern "C"  void MarkerTrackerImpl_DestroyAllMarkers_m784159249 (MarkerTrackerImpl_t654952814 * __this, bool ___destroyGameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.MarkerTrackerImpl::RegisterMarker(System.Int32,System.String,System.Single)
extern "C"  int32_t MarkerTrackerImpl_RegisterMarker_m2373651483 (MarkerTrackerImpl_t654952814 * __this, int32_t ___markerID0, String_t* ___trackableName1, float ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerTrackerImpl::.ctor()
extern "C"  void MarkerTrackerImpl__ctor_m65350794 (MarkerTrackerImpl_t654952814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
