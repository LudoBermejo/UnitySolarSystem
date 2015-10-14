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

struct t1380;

#include "codegen/il2cpp-codegen.h"

extern "C" void m8460_gshared (t1380 * __this, const MethodInfo* method);
#define m8460(__this, method) (( void (*) (t1380 *, const MethodInfo*))m8460_gshared)(__this, method)
extern "C" int32_t m8461_gshared (t1380 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
#define m8461(__this, p0, p1, method) (( int32_t (*) (t1380 *, int32_t, int32_t, const MethodInfo*))m8461_gshared)(__this, p0, p1, method)
