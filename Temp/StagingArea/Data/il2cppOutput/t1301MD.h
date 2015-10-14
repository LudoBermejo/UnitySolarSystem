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

struct t1301;

#include "codegen/il2cpp-codegen.h"
#include "t256.h"

extern "C" void m7746_gshared (t1301 * __this, const MethodInfo* method);
#define m7746(__this, method) (( void (*) (t1301 *, const MethodInfo*))m7746_gshared)(__this, method)
extern "C" int32_t m9339_gshared (t1301 * __this, t256  p0, t256  p1, const MethodInfo* method);
#define m9339(__this, p0, p1, method) (( int32_t (*) (t1301 *, t256 , t256 , const MethodInfo*))m9339_gshared)(__this, p0, p1, method)
