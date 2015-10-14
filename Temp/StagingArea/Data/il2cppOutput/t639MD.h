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

extern "C" void t639_marshal(const t639& unmarshaled, t639_marshaled& marshaled);
extern "C" void t639_marshal_back(const t639_marshaled& marshaled, t639& unmarshaled);
extern "C" void t639_marshal_cleanup(t639_marshaled& marshaled);
