#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

struct t132;
struct t134;
struct t12;
struct t14;
struct t135;
struct t136;
struct t138;
struct t82;
struct t47;
struct t48;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "t7.h"
#include "t132.h"
#include "t132MD.h"
#include "t8.h"
#include "t131MD.h"
#include "mscorlib_ArrayTypes.h"
#include "t14.h"
#include "t134.h"
#include "t134MD.h"
#include "t12.h"
#include "t68MD.h"
#include "t10.h"
#include "t14MD.h"
#include "t18.h"
#include "t68.h"
#include "t135.h"
#include "t135MD.h"
#include "t136.h"
#include "t136MD.h"
#include "t137.h"
#include "t137MD.h"
#include "t138.h"
#include "t138MD.h"
#include "t27MD.h"
#include "t27.h"
#include "t82.h"
#include "t82MD.h"
#include "t34.h"
#include "t48.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern TypeInfo* t133_TI_var;
extern "C" void m455 (t132 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t133_TI_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->f4 = ((t133*)SZArrayNew(t133_TI_var, 0));
		m450(__this, NULL);
		return;
	}
}
extern "C" void m456 (t134 * __this, t12* p0, const MethodInfo* method)
{
	{
		m483(__this, NULL);
		t12* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t14 * m457 (t134 * __this, const MethodInfo* method)
{
	{
		t14 * L_0 = (__this->f0);
		return L_0;
	}
}
extern TypeInfo* t134_TI_var;
extern "C" bool m458 (t134 * __this, t14 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t134_TI_var = il2cpp_codegen_type_info_from_index(68);
		s_Il2CppMethodIntialized = true;
	}
	t134 * V_0 = {0};
	{
		t14 * L_0 = p0;
		V_0 = ((t134 *)IsInstClass(L_0, t134_TI_var));
		t134 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		t14 * L_2 = (__this->f0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		t134 * L_3 = V_0;
		t14 * L_4 = m457(L_3, NULL);
		return ((((t14*)(t14 *)L_4) == ((t14*)(t14 *)NULL))? 1 : 0);
	}

IL_0024:
	{
		t14 * L_5 = (__this->f0);
		t134 * L_6 = V_0;
		t14 * L_7 = m457(L_6, NULL);
		bool L_8 = (bool)VirtFuncInvoker1< bool, t14 * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_7);
		return L_8;
	}
}
extern "C" int32_t m459 (t134 * __this, const MethodInfo* method)
{
	{
		t14 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = m529(__this, NULL);
		return L_1;
	}

IL_0012:
	{
		t14 * L_2 = (__this->f0);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return L_3;
	}
}
extern "C" void m460 (t135 * __this, const MethodInfo* method)
{
	{
		m483(__this, NULL);
		return;
	}
}
extern "C" void m461 (t136 * __this, t12* p0, const MethodInfo* method)
{
	{
		m483(__this, NULL);
		t12* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern TypeInfo* t137_TI_var;
extern "C" void m462 (t138 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t137_TI_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t14 * L_2 = Box(t137_TI_var, &L_1);
		t12* L_3 = (t12*)VirtFuncInvoker0< t12* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		m463(__this, L_3, NULL);
		return;
	}
}
extern "C" void m463 (t138 * __this, t12* p0, const MethodInfo* method)
{
	{
		m483(__this, NULL);
		t12* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t12* m464 (t138 * __this, const MethodInfo* method)
{
	{
		t12* L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m465 (t82 * __this, t14 * p0, t34 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m466 (t82 * __this, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m466((t82 *)__this->f9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if ((__this->f2 != NULL || MethodHasParameters((MethodInfo*)(__this->f3.f0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t14 *, t14 * __this, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t14 * __this, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t82(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern "C" t14 * m467 (t82 * __this, t48 * p0, t14 * p1, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t14 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern "C" void m468 (t82 * __this, t14 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
