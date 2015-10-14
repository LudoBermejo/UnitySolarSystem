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

struct t1394;
struct t14;
struct t47;
struct t48;

#include "codegen/il2cpp-codegen.h"
#include "t34.h"

extern "C" void m8540_gshared (t1394 * __this, t14 * p0, t34 p1, const MethodInfo* method);
#define m8540(__this, p0, p1, method) (( void (*) (t1394 *, t14 *, t34, const MethodInfo*))m8540_gshared)(__this, p0, p1, method)
extern "C" int32_t m8541_gshared (t1394 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m8541(__this, p0, p1, method) (( int32_t (*) (t1394 *, t14 *, t14 *, const MethodInfo*))m8541_gshared)(__this, p0, p1, method)
extern "C" t14 * m8542_gshared (t1394 * __this, t14 * p0, t14 * p1, t48 * p2, t14 * p3, const MethodInfo* method);
#define m8542(__this, p0, p1, p2, p3, method) (( t14 * (*) (t1394 *, t14 *, t14 *, t48 *, t14 *, const MethodInfo*))m8542_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m8543_gshared (t1394 * __this, t14 * p0, const MethodInfo* method);
#define m8543(__this, p0, method) (( int32_t (*) (t1394 *, t14 *, const MethodInfo*))m8543_gshared)(__this, p0, method)
