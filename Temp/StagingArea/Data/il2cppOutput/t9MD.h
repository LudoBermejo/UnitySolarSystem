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

struct t9;
struct t9_marshaled;
struct t12;
struct t14;

#include "codegen/il2cpp-codegen.h"
#include "t34.h"

extern "C" void m311 (t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t12* m312 (t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m313 (t9 * __this, t14 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m314 (t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m315 (t14 * __this , t9 * p0, t9 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m316 (t14 * __this , t9 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m317 (t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t34 m318 (t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m17 (t14 * __this , t9 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m10 (t14 * __this , t9 * p0, t9 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m319 (t14 * __this , t9 * p0, t9 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t9_marshal(const t9& unmarshaled, t9_marshaled& marshaled);
extern "C" void t9_marshal_back(const t9_marshaled& marshaled, t9& unmarshaled);
extern "C" void t9_marshal_cleanup(t9_marshaled& marshaled);
