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

struct t1476;

#include "codegen/il2cpp-codegen.h"
#include "t1152.h"

extern "C" void m9273_gshared (t1476 * __this, const MethodInfo* method);
#define m9273(__this, method) (( void (*) (t1476 *, const MethodInfo*))m9273_gshared)(__this, method)
extern "C" int32_t m9274_gshared (t1476 * __this, t1152  p0, t1152  p1, const MethodInfo* method);
#define m9274(__this, p0, p1, method) (( int32_t (*) (t1476 *, t1152 , t1152 , const MethodInfo*))m9274_gshared)(__this, p0, p1, method)
