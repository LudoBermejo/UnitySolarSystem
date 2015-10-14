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

struct t1480;

#include "codegen/il2cpp-codegen.h"
#include "t1171.h"

extern "C" void m9294_gshared (t1480 * __this, const MethodInfo* method);
#define m9294(__this, method) (( void (*) (t1480 *, const MethodInfo*))m9294_gshared)(__this, method)
extern "C" int32_t m9295_gshared (t1480 * __this, t1171  p0, t1171  p1, const MethodInfo* method);
#define m9295(__this, p0, p1, method) (( int32_t (*) (t1480 *, t1171 , t1171 , const MethodInfo*))m9295_gshared)(__this, p0, p1, method)
