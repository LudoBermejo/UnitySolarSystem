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

struct t22;
struct t22_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m241 (t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m242 (t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m243 (t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t22_marshal(const t22& unmarshaled, t22_marshaled& marshaled);
extern "C" void t22_marshal_back(const t22_marshaled& marshaled, t22& unmarshaled);
extern "C" void t22_marshal_cleanup(t22_marshaled& marshaled);
