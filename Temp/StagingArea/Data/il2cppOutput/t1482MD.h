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

struct t1482;

#include "codegen/il2cpp-codegen.h"
#include "t1171.h"

extern "C" void m9303_gshared (t1482 * __this, const MethodInfo* method);
#define m9303(__this, method) (( void (*) (t1482 *, const MethodInfo*))m9303_gshared)(__this, method)
extern "C" int32_t m9304_gshared (t1482 * __this, t1171  p0, const MethodInfo* method);
#define m9304(__this, p0, method) (( int32_t (*) (t1482 *, t1171 , const MethodInfo*))m9304_gshared)(__this, p0, method)
extern "C" bool m9305_gshared (t1482 * __this, t1171  p0, t1171  p1, const MethodInfo* method);
#define m9305(__this, p0, p1, method) (( bool (*) (t1482 *, t1171 , t1171 , const MethodInfo*))m9305_gshared)(__this, p0, p1, method)
