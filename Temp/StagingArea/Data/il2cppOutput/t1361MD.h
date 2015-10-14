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

struct t1361;
struct t14;
struct t47;
struct t48;

#include "codegen/il2cpp-codegen.h"
#include "t34.h"
#include "t351.h"

extern "C" void m8323_gshared (t1361 * __this, t14 * p0, t34 p1, const MethodInfo* method);
#define m8323(__this, p0, p1, method) (( void (*) (t1361 *, t14 *, t34, const MethodInfo*))m8323_gshared)(__this, p0, p1, method)
extern "C" t351  m8324_gshared (t1361 * __this, t14 * p0, int32_t p1, const MethodInfo* method);
#define m8324(__this, p0, p1, method) (( t351  (*) (t1361 *, t14 *, int32_t, const MethodInfo*))m8324_gshared)(__this, p0, p1, method)
extern "C" t14 * m8325_gshared (t1361 * __this, t14 * p0, int32_t p1, t48 * p2, t14 * p3, const MethodInfo* method);
#define m8325(__this, p0, p1, p2, p3, method) (( t14 * (*) (t1361 *, t14 *, int32_t, t48 *, t14 *, const MethodInfo*))m8325_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t351  m8326_gshared (t1361 * __this, t14 * p0, const MethodInfo* method);
#define m8326(__this, p0, method) (( t351  (*) (t1361 *, t14 *, const MethodInfo*))m8326_gshared)(__this, p0, method)
