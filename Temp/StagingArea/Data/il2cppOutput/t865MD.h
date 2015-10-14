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
#include "t865.h"

extern "C" void m5402 (t865 * __this, t12* p0, int64_t p1, int32_t p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t865_marshal(const t865& unmarshaled, t865_marshaled& marshaled);
extern "C" void t865_marshal_back(const t865_marshaled& marshaled, t865& unmarshaled);
extern "C" void t865_marshal_cleanup(t865_marshaled& marshaled);
