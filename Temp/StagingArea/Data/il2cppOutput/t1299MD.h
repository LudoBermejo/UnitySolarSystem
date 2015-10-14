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

struct t1299;

#include "codegen/il2cpp-codegen.h"
#include "t1171.h"

extern "C" void m7744_gshared (t1299 * __this, const MethodInfo* method);
#define m7744(__this, method) (( void (*) (t1299 *, const MethodInfo*))m7744_gshared)(__this, method)
extern "C" int32_t m9296_gshared (t1299 * __this, t1171  p0, const MethodInfo* method);
#define m9296(__this, p0, method) (( int32_t (*) (t1299 *, t1171 , const MethodInfo*))m9296_gshared)(__this, p0, method)
extern "C" bool m9297_gshared (t1299 * __this, t1171  p0, t1171  p1, const MethodInfo* method);
#define m9297(__this, p0, p1, method) (( bool (*) (t1299 *, t1171 , t1171 , const MethodInfo*))m9297_gshared)(__this, p0, p1, method)
