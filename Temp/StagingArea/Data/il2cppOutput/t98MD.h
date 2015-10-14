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

struct t98;
struct t98_marshaled;
struct t143;

#include "codegen/il2cpp-codegen.h"

extern "C" void m400 (t98 * __this, t143* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m401 (t98 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m402 (t98 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m403 (t98 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m404 (t98 * __this, t143* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t98_marshal(const t98& unmarshaled, t98_marshaled& marshaled);
extern "C" void t98_marshal_back(const t98_marshaled& marshaled, t98& unmarshaled);
extern "C" void t98_marshal_cleanup(t98_marshaled& marshaled);
