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

struct t1298;

#include "codegen/il2cpp-codegen.h"
#include "t1171.h"

extern "C" void m7743_gshared (t1298 * __this, const MethodInfo* method);
#define m7743(__this, method) (( void (*) (t1298 *, const MethodInfo*))m7743_gshared)(__this, method)
extern "C" int32_t m9289_gshared (t1298 * __this, t1171  p0, t1171  p1, const MethodInfo* method);
#define m9289(__this, p0, p1, method) (( int32_t (*) (t1298 *, t1171 , t1171 , const MethodInfo*))m9289_gshared)(__this, p0, p1, method)
