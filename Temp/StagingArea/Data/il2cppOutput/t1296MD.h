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

struct t1296;

#include "codegen/il2cpp-codegen.h"
#include "t1152.h"

extern "C" void m7738_gshared (t1296 * __this, const MethodInfo* method);
#define m7738(__this, method) (( void (*) (t1296 *, const MethodInfo*))m7738_gshared)(__this, method)
extern "C" int32_t m9268_gshared (t1296 * __this, t1152  p0, t1152  p1, const MethodInfo* method);
#define m9268(__this, p0, p1, method) (( int32_t (*) (t1296 *, t1152 , t1152 , const MethodInfo*))m9268_gshared)(__this, p0, p1, method)
