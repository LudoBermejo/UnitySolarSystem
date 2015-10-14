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

extern "C" void t392_marshal(const t392& unmarshaled, t392_marshaled& marshaled);
extern "C" void t392_marshal_back(const t392_marshaled& marshaled, t392& unmarshaled);
extern "C" void t392_marshal_cleanup(t392_marshaled& marshaled);
