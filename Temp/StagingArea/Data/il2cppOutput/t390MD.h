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

extern "C" void t390_marshal(const t390& unmarshaled, t390_marshaled& marshaled);
extern "C" void t390_marshal_back(const t390_marshaled& marshaled, t390& unmarshaled);
extern "C" void t390_marshal_cleanup(t390_marshaled& marshaled);
