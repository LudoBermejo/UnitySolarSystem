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

struct t30;
struct t30_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m342 (t30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t30_marshal(const t30& unmarshaled, t30_marshaled& marshaled);
extern "C" void t30_marshal_back(const t30_marshaled& marshaled, t30& unmarshaled);
extern "C" void t30_marshal_cleanup(t30_marshaled& marshaled);
