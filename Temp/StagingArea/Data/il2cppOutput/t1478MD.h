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

struct t1478;

#include "codegen/il2cpp-codegen.h"
#include "t1152.h"

extern "C" void m9282_gshared (t1478 * __this, const MethodInfo* method);
#define m9282(__this, method) (( void (*) (t1478 *, const MethodInfo*))m9282_gshared)(__this, method)
extern "C" int32_t m9283_gshared (t1478 * __this, t1152  p0, const MethodInfo* method);
#define m9283(__this, p0, method) (( int32_t (*) (t1478 *, t1152 , const MethodInfo*))m9283_gshared)(__this, p0, method)
extern "C" bool m9284_gshared (t1478 * __this, t1152  p0, t1152  p1, const MethodInfo* method);
#define m9284(__this, p0, p1, method) (( bool (*) (t1478 *, t1152 , t1152 , const MethodInfo*))m9284_gshared)(__this, p0, p1, method)
