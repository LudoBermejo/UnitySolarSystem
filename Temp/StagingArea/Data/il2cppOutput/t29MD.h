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

struct t29;
struct t29_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m33 (t29 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t29_marshal(const t29& unmarshaled, t29_marshaled& marshaled);
extern "C" void t29_marshal_back(const t29_marshaled& marshaled, t29& unmarshaled);
extern "C" void t29_marshal_cleanup(t29_marshaled& marshaled);
