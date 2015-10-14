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

extern "C" void t750_marshal(const t750& unmarshaled, t750_marshaled& marshaled);
extern "C" void t750_marshal_back(const t750_marshaled& marshaled, t750& unmarshaled);
extern "C" void t750_marshal_cleanup(t750_marshaled& marshaled);
