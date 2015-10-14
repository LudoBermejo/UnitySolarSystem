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

struct t1351;
struct t14;
struct t47;
struct t48;

#include "codegen/il2cpp-codegen.h"
#include "t34.h"
#include "t1345.h"

extern "C" void m8172_gshared (t1351 * __this, t14 * p0, t34 p1, const MethodInfo* method);
#define m8172(__this, p0, p1, method) (( void (*) (t1351 *, t14 *, t34, const MethodInfo*))m8172_gshared)(__this, p0, p1, method)
extern "C" t1345  m8173_gshared (t1351 * __this, t14 * p0, bool p1, const MethodInfo* method);
#define m8173(__this, p0, p1, method) (( t1345  (*) (t1351 *, t14 *, bool, const MethodInfo*))m8173_gshared)(__this, p0, p1, method)
extern "C" t14 * m8174_gshared (t1351 * __this, t14 * p0, bool p1, t48 * p2, t14 * p3, const MethodInfo* method);
#define m8174(__this, p0, p1, p2, p3, method) (( t14 * (*) (t1351 *, t14 *, bool, t48 *, t14 *, const MethodInfo*))m8174_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1345  m8175_gshared (t1351 * __this, t14 * p0, const MethodInfo* method);
#define m8175(__this, p0, method) (( t1345  (*) (t1351 *, t14 *, const MethodInfo*))m8175_gshared)(__this, p0, method)
