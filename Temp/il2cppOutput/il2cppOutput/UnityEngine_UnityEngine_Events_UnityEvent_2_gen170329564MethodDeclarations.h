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

// UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>
struct UnityEvent_2_t170329564;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2229564840;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"

// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>::.ctor()
extern "C"  void UnityEvent_2__ctor_m715387798_gshared (UnityEvent_2_t170329564 * __this, const MethodInfo* method);
#define UnityEvent_2__ctor_m715387798(__this, method) ((  void (*) (UnityEvent_2_t170329564 *, const MethodInfo*))UnityEvent_2__ctor_m715387798_gshared)(__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_2_FindMethod_Impl_m1098845756_gshared (UnityEvent_2_t170329564 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_2_FindMethod_Impl_m1098845756(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_2_t170329564 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_2_FindMethod_Impl_m1098845756_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_2_GetDelegate_m856064232_gshared (UnityEvent_2_t170329564 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_2_GetDelegate_m856064232(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t2229564840 * (*) (UnityEvent_2_t170329564 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_2_GetDelegate_m856064232_gshared)(__this, ___target0, ___theFunction1, method)
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>::Invoke(T0,T1)
extern "C"  void UnityEvent_2_Invoke_m514975631_gshared (UnityEvent_2_t170329564 * __this, int32_t ___arg00, int32_t ___arg11, const MethodInfo* method);
#define UnityEvent_2_Invoke_m514975631(__this, ___arg00, ___arg11, method) ((  void (*) (UnityEvent_2_t170329564 *, int32_t, int32_t, const MethodInfo*))UnityEvent_2_Invoke_m514975631_gshared)(__this, ___arg00, ___arg11, method)
