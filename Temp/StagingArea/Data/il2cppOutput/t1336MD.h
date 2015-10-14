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

struct t1336;

#include "codegen/il2cpp-codegen.h"

extern "C" void m8042_gshared (t1336 * __this, const MethodInfo* method);
#define m8042(__this, method) (( void (*) (t1336 *, const MethodInfo*))m8042_gshared)(__this, method)
