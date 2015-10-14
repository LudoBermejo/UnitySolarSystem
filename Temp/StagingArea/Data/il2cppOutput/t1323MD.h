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

struct t1323;
struct t14;

#include "codegen/il2cpp-codegen.h"

extern "C" void m7930_gshared (t1323 * __this, const MethodInfo* method);
#define m7930(__this, method) (( void (*) (t1323 *, const MethodInfo*))m7930_gshared)(__this, method)
extern "C" int32_t m7931_gshared (t1323 * __this, t14 * p0, const MethodInfo* method);
#define m7931(__this, p0, method) (( int32_t (*) (t1323 *, t14 *, const MethodInfo*))m7931_gshared)(__this, p0, method)
extern "C" bool m7932_gshared (t1323 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m7932(__this, p0, p1, method) (( bool (*) (t1323 *, t14 *, t14 *, const MethodInfo*))m7932_gshared)(__this, p0, p1, method)
