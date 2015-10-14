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

struct t1364;
struct t14;
struct t47;
struct t48;

#include "codegen/il2cpp-codegen.h"
#include "t34.h"
#include "t1362.h"

extern "C" void m8327_gshared (t1364 * __this, t14 * p0, t34 p1, const MethodInfo* method);
#define m8327(__this, p0, p1, method) (( void (*) (t1364 *, t14 *, t34, const MethodInfo*))m8327_gshared)(__this, p0, p1, method)
extern "C" t1362  m8328_gshared (t1364 * __this, t14 * p0, int32_t p1, const MethodInfo* method);
#define m8328(__this, p0, p1, method) (( t1362  (*) (t1364 *, t14 *, int32_t, const MethodInfo*))m8328_gshared)(__this, p0, p1, method)
extern "C" t14 * m8329_gshared (t1364 * __this, t14 * p0, int32_t p1, t48 * p2, t14 * p3, const MethodInfo* method);
#define m8329(__this, p0, p1, p2, p3, method) (( t14 * (*) (t1364 *, t14 *, int32_t, t48 *, t14 *, const MethodInfo*))m8329_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1362  m8330_gshared (t1364 * __this, t14 * p0, const MethodInfo* method);
#define m8330(__this, p0, method) (( t1362  (*) (t1364 *, t14 *, const MethodInfo*))m8330_gshared)(__this, p0, method)
