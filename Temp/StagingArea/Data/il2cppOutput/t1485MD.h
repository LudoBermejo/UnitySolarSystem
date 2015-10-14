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

struct t1485;

#include "codegen/il2cpp-codegen.h"
#include "t256.h"

extern "C" void m9344_gshared (t1485 * __this, const MethodInfo* method);
#define m9344(__this, method) (( void (*) (t1485 *, const MethodInfo*))m9344_gshared)(__this, method)
extern "C" int32_t m9345_gshared (t1485 * __this, t256  p0, t256  p1, const MethodInfo* method);
#define m9345(__this, p0, p1, method) (( int32_t (*) (t1485 *, t256 , t256 , const MethodInfo*))m9345_gshared)(__this, p0, p1, method)
