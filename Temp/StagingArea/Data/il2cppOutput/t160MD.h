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

extern "C" void t160_marshal(const t160& unmarshaled, t160_marshaled& marshaled);
extern "C" void t160_marshal_back(const t160_marshaled& marshaled, t160& unmarshaled);
extern "C" void t160_marshal_cleanup(t160_marshaled& marshaled);
