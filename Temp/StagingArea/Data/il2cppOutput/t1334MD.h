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

struct t1334;

#include "codegen/il2cpp-codegen.h"

extern "C" void m8040_gshared (t1334 * __this, const MethodInfo* method);
#define m8040(__this, method) (( void (*) (t1334 *, const MethodInfo*))m8040_gshared)(__this, method)
