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


#include "codegen/il2cpp-codegen.h"

extern "C" void t71_marshal(const t71& unmarshaled, t71_marshaled& marshaled);
extern "C" void t71_marshal_back(const t71_marshaled& marshaled, t71& unmarshaled);
extern "C" void t71_marshal_cleanup(t71_marshaled& marshaled);
