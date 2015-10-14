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

struct t35;
struct t35_marshaled;
struct t12;
struct t25;

#include "codegen/il2cpp-codegen.h"

extern "C" void m39 (t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m40 (t14 * __this , t35 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t35 * m41 (t14 * __this , t12* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t35 * m42 (t14 * __this , t25 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t35 * m43 (t14 * __this , t25 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t35_marshal(const t35& unmarshaled, t35_marshaled& marshaled);
extern "C" void t35_marshal_back(const t35_marshaled& marshaled, t35& unmarshaled);
extern "C" void t35_marshal_cleanup(t35_marshaled& marshaled);
