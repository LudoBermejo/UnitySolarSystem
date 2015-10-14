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

struct t1302;

#include "codegen/il2cpp-codegen.h"
#include "t256.h"

extern "C" void m7747_gshared (t1302 * __this, const MethodInfo* method);
#define m7747(__this, method) (( void (*) (t1302 *, const MethodInfo*))m7747_gshared)(__this, method)
extern "C" int32_t m9346_gshared (t1302 * __this, t256  p0, const MethodInfo* method);
#define m9346(__this, p0, method) (( int32_t (*) (t1302 *, t256 , const MethodInfo*))m9346_gshared)(__this, p0, method)
extern "C" bool m9347_gshared (t1302 * __this, t256  p0, t256  p1, const MethodInfo* method);
#define m9347(__this, p0, p1, method) (( bool (*) (t1302 *, t256 , t256 , const MethodInfo*))m9347_gshared)(__this, p0, p1, method)
