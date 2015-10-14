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
#include "t251.h"
#include "t252.h"

extern "C" void m872 (t251 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m873 (t251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m874 (t251 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m875 (t251 * __this, t12* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t12* m876 (t14 * __this , int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t251_marshal(const t251& unmarshaled, t251_marshaled& marshaled);
extern "C" void t251_marshal_back(const t251_marshaled& marshaled, t251& unmarshaled);
extern "C" void t251_marshal_cleanup(t251_marshaled& marshaled);
