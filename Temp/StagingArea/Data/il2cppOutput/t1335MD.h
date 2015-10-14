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

struct t1335;

#include "codegen/il2cpp-codegen.h"

extern "C" void m8041_gshared (t1335 * __this, const MethodInfo* method);
#define m8041(__this, method) (( void (*) (t1335 *, const MethodInfo*))m8041_gshared)(__this, method)
