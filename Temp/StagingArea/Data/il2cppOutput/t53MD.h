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

struct t53;
struct t53_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m76 (t53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m77 (t53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m78 (t53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m79 (t53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t53_marshal(const t53& unmarshaled, t53_marshaled& marshaled);
extern "C" void t53_marshal_back(const t53_marshaled& marshaled, t53& unmarshaled);
extern "C" void t53_marshal_cleanup(t53_marshaled& marshaled);
