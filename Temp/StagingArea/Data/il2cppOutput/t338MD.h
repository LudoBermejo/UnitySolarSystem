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

struct t12;

#include "codegen/il2cpp-codegen.h"
#include "t338.h"

extern "C" void m1349 (t338 * __this, t12* p0, t12* p1, int32_t p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t338_marshal(const t338& unmarshaled, t338_marshaled& marshaled);
extern "C" void t338_marshal_back(const t338_marshaled& marshaled, t338& unmarshaled);
extern "C" void t338_marshal_cleanup(t338_marshaled& marshaled);
