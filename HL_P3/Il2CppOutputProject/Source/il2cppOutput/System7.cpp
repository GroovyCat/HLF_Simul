#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericVirtFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericInterfaceFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>
struct Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task>
struct TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89;
// System.Net.ServicePointScheduler/AsyncManualResetEvent
struct AsyncManualResetEvent_t47325E9C64CC5E07EE88CE5A22EC0C5CA83F90F0;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8;
// Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback
struct unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC;
// Mono.Unity.UnityTls/unitytls_tlsctx_read_callback
struct unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E;
// Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback
struct unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B;
// Mono.Unity.UnityTls/unitytls_tlsctx_write_callback
struct unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A;
// Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback
struct unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC;
// Mono.Unity.UnityTls/unitytls_x509verify_callback
struct unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2;
// System.Security.Cryptography.X509Certificates.X509Helper2/MyNativeHelper
struct MyNativeHelper_t9E78ECADEC33A3AFF81DEF8E43A27DDFD5187F6D;
// System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator
struct NodeKeyValueEnumerator_t48270D5B5B4945AE654213A89DFB0AB66C9A97F1;
// System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c
struct U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t
struct unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t
struct unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t
struct unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t
struct unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t
struct unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t
struct unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t
struct unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t
struct unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t
struct unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t
struct unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t
struct unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t
struct unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t
struct unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t
struct unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t
struct unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t
struct unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t
struct unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t
struct unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t
struct unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t
struct unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t
struct unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t
struct unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t
struct unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t
struct unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t
struct unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t
struct unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t
struct unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t
struct unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t
struct unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t
struct unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316;

IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_error_code_tC425776568E0A522F720337294FF5226445A9E89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97;
IL2CPP_EXTERN_C String_t* _stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78_TisU3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2_m5A2482D3FF3CA89DAFC9824284A2DC3863CB9A69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_mFD1E718C862EC248850DB447D0FBB29450F27D6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_mACCB4DC9D3ABC89937E4D7BEE9016941E176CC27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m7DB38F2F9334B814E71FD9B5FAFC3BB694D1BFF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeKeyValueEnumerator_MoveNext_m670FC6BEB14D91A8D94A8D6B2B92C7A42CC65ADC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeKeyValueEnumerator_Reset_m4D8DEA9EB735DA10B1F7EC74B18C51B8C60BA610_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeKeyValueEnumerator_get_Current_mC74C6C7153BB3D7D120EED9865B48336894308DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetResult_m9AF2ED4AA92B61302492F51DAA91C2328E73B251_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m09F143DDCFBAB5870DCB83D337785B666F1CDC9B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8;;
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke;
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke;;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3, ___m_task_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.CollectionBase
struct CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB, ___list_0)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_list_0() const { return ___list_0; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}
};


// System.Collections.Specialized.ListDictionary
struct ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * ___head_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;
	// System.Object System.Collections.Specialized.ListDictionary::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B, ___head_0)); }
	inline DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * get_head_0() const { return ___head_0; }
	inline DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_3), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219 * ___impl_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_3;

public:
	inline static int32_t get_offset_of_impl_0() { return static_cast<int32_t>(offsetof(X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553, ___impl_0)); }
	inline X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219 * get_impl_0() const { return ___impl_0; }
	inline X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219 ** get_address_of_impl_0() { return &___impl_0; }
	inline void set_impl_0(X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219 * value)
	{
		___impl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___impl_0), (void*)value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_issuer_name_2() { return static_cast<int32_t>(offsetof(X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553, ___issuer_name_2)); }
	inline String_t* get_issuer_name_2() const { return ___issuer_name_2; }
	inline String_t** get_address_of_issuer_name_2() { return &___issuer_name_2; }
	inline void set_issuer_name_2(String_t* value)
	{
		___issuer_name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___issuer_name_2), (void*)value);
	}

	inline static int32_t get_offset_of_subject_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553, ___subject_name_3)); }
	inline String_t* get_subject_name_3() const { return ___subject_name_3; }
	inline String_t** get_address_of_subject_name_3() { return &___subject_name_3; }
	inline void set_subject_name_3(String_t* value)
	{
		___subject_name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subject_name_3), (void*)value);
	}
};


// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89  : public RuntimeObject
{
public:
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::value
	RuntimeObject * ___value_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNode::next
	DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89, ___next_2)); }
	inline DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * get_next_2() const { return ___next_2; }
	inline DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_2), (void*)value);
	}
};


// System.Net.ServicePointScheduler/AsyncManualResetEvent
struct AsyncManualResetEvent_t47325E9C64CC5E07EE88CE5A22EC0C5CA83F90F0  : public RuntimeObject
{
public:
	// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.ServicePointScheduler/AsyncManualResetEvent::m_tcs
	TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * ___m_tcs_0;

public:
	inline static int32_t get_offset_of_m_tcs_0() { return static_cast<int32_t>(offsetof(AsyncManualResetEvent_t47325E9C64CC5E07EE88CE5A22EC0C5CA83F90F0, ___m_tcs_0)); }
	inline TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * get_m_tcs_0() const { return ___m_tcs_0; }
	inline TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 ** get_address_of_m_tcs_0() { return &___m_tcs_0; }
	inline void set_m_tcs_0(TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * value)
	{
		___m_tcs_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_tcs_0), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_0), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509Helper2/MyNativeHelper
struct MyNativeHelper_t9E78ECADEC33A3AFF81DEF8E43A27DDFD5187F6D  : public RuntimeObject
{
public:

public:
};


// System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator
struct NodeKeyValueEnumerator_t48270D5B5B4945AE654213A89DFB0AB66C9A97F1  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::list
	ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B * ___list_0;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::current
	DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * ___current_1;
	// System.Int32 System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::version
	int32_t ___version_2;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::isKeys
	bool ___isKeys_3;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::start
	bool ___start_4;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t48270D5B5B4945AE654213A89DFB0AB66C9A97F1, ___list_0)); }
	inline ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B * get_list_0() const { return ___list_0; }
	inline ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t48270D5B5B4945AE654213A89DFB0AB66C9A97F1, ___current_1)); }
	inline DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * get_current_1() const { return ___current_1; }
	inline DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t48270D5B5B4945AE654213A89DFB0AB66C9A97F1, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_isKeys_3() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t48270D5B5B4945AE654213A89DFB0AB66C9A97F1, ___isKeys_3)); }
	inline bool get_isKeys_3() const { return ___isKeys_3; }
	inline bool* get_address_of_isKeys_3() { return &___isKeys_3; }
	inline void set_isKeys_3(bool value)
	{
		___isKeys_3 = value;
	}

	inline static int32_t get_offset_of_start_4() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t48270D5B5B4945AE654213A89DFB0AB66C9A97F1, ___start_4)); }
	inline bool get_start_4() const { return ___start_4; }
	inline bool* get_address_of_start_4() { return &___start_4; }
	inline void set_start_4(bool value)
	{
		___start_4 = value;
	}
};


// System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c
struct U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_StaticFields
{
public:
	// System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::<>9
	U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 * ___U3CU3E9_0;
	// System.Func`2<System.Object,System.Boolean> System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::<>9__4_0
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>
struct ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Threading.Tasks.Task>
struct ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78, ___m_task_0)); }
	inline Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B  : public CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_key
struct unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t unitytls_key_tCCB86243887B79F39458152647B04B94699985D2__padding[1];
	};

public:
};


// Mono.Unity.UnityTls/unitytls_key_ref
struct unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 
{
public:
	// System.UInt64 Mono.Unity.UnityTls/unitytls_key_ref::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_tlsctx
struct unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA__padding[1];
	};

public:
};


// Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 
{
public:
	// Mono.Unity.UnityTls/unitytls_tlsctx_read_callback Mono.Unity.UnityTls/unitytls_tlsctx_callbacks::read
	unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E * ___read_0;
	// Mono.Unity.UnityTls/unitytls_tlsctx_write_callback Mono.Unity.UnityTls/unitytls_tlsctx_callbacks::write
	unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A * ___write_1;
	// System.Void* Mono.Unity.UnityTls/unitytls_tlsctx_callbacks::data
	void* ___data_2;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8, ___read_0)); }
	inline unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E * get_read_0() const { return ___read_0; }
	inline unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}

	inline static int32_t get_offset_of_write_1() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8, ___write_1)); }
	inline unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A * get_write_1() const { return ___write_1; }
	inline unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A ** get_address_of_write_1() { return &___write_1; }
	inline void set_write_1(unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A * value)
	{
		___write_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_1), (void*)value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8, ___data_2)); }
	inline void* get_data_2() const { return ___data_2; }
	inline void** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(void* value)
	{
		___data_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke
{
	Il2CppMethodPointer ___read_0;
	Il2CppMethodPointer ___write_1;
	void* ___data_2;
};
// Native definition for COM marshalling of Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_com
{
	Il2CppMethodPointer ___read_0;
	Il2CppMethodPointer ___write_1;
	void* ___data_2;
};

// Mono.Unity.UnityTls/unitytls_x509_ref
struct unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 
{
public:
	// System.UInt64 Mono.Unity.UnityTls/unitytls_x509_ref::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_x509list
struct unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D 
{
public:
	union
	{
		struct
		{
		};
		uint8_t unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D__padding[1];
	};

public:
};


// Mono.Unity.UnityTls/unitytls_x509list_ref
struct unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D 
{
public:
	// System.UInt64 Mono.Unity.UnityTls/unitytls_x509list_ref::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_x509name
struct unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 
{
public:
	union
	{
		struct
		{
		};
		uint8_t unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6__padding[1];
	};

public:
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5, ___m_task_2)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Threading.Tasks.Task>
struct ConfiguredTaskAwaitable_1_t918267DA81D3E7795A7FD4026B63C95F76AE0EFF 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t918267DA81D3E7795A7FD4026B63C95F76AE0EFF, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// Mono.Unity.UnityTls/unitytls_ciphersuite
struct unitytls_ciphersuite_t3D7B347610D6F27E84245DA98B2A3DB13E4CC663 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_ciphersuite::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_ciphersuite_t3D7B347610D6F27E84245DA98B2A3DB13E4CC663, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_error_code
struct unitytls_error_code_tC425776568E0A522F720337294FF5226445A9E89 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_error_code::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_error_code_tC425776568E0A522F720337294FF5226445A9E89, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_protocol
struct unitytls_protocol_t8E18DBA7D28280F405CA3104F9936BE9B543B89A 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_protocol::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_protocol_t8E18DBA7D28280F405CA3104F9936BE9B543B89A, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_x509verify_result
struct unitytls_x509verify_result_t3CE5D0E50DA56D0A6561757039E6F1F292996B84 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_x509verify_result::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_x509verify_result_t3CE5D0E50DA56D0A6561757039E6F1F292996B84, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.TimerThread/TimerNode/TimerState
struct TimerState_t8BD0BCEC970BC18F9E52AC1DE03D34629F097B22 
{
public:
	// System.Int32 System.Net.TimerThread/TimerNode/TimerState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimerState_t8BD0BCEC970BC18F9E52AC1DE03D34629F097B22, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849, ___m_result_22)); }
	inline bool get_m_result_22() const { return ___m_result_22; }
	inline bool* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(bool value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284, ___m_result_22)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_result_22() const { return ___m_result_22; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_errorstate
struct unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_errorstate::magic
	uint32_t ___magic_0;
	// Mono.Unity.UnityTls/unitytls_error_code Mono.Unity.UnityTls/unitytls_errorstate::code
	uint32_t ___code_1;
	// System.UInt64 Mono.Unity.UnityTls/unitytls_errorstate::reserved
	uint64_t ___reserved_2;

public:
	inline static int32_t get_offset_of_magic_0() { return static_cast<int32_t>(offsetof(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499, ___magic_0)); }
	inline uint32_t get_magic_0() const { return ___magic_0; }
	inline uint32_t* get_address_of_magic_0() { return &___magic_0; }
	inline void set_magic_0(uint32_t value)
	{
		___magic_0 = value;
	}

	inline static int32_t get_offset_of_code_1() { return static_cast<int32_t>(offsetof(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499, ___code_1)); }
	inline uint32_t get_code_1() const { return ___code_1; }
	inline uint32_t* get_address_of_code_1() { return &___code_1; }
	inline void set_code_1(uint32_t value)
	{
		___code_1 = value;
	}

	inline static int32_t get_offset_of_reserved_2() { return static_cast<int32_t>(offsetof(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499, ___reserved_2)); }
	inline uint64_t get_reserved_2() const { return ___reserved_2; }
	inline uint64_t* get_address_of_reserved_2() { return &___reserved_2; }
	inline void set_reserved_2(uint64_t value)
	{
		___reserved_2 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange
struct unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 
{
public:
	// Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange::min
	uint32_t ___min_0;
	// Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange::max
	uint32_t ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68, ___min_0)); }
	inline uint32_t get_min_0() const { return ___min_0; }
	inline uint32_t* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(uint32_t value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68, ___max_1)); }
	inline uint32_t get_max_1() const { return ___max_1; }
	inline uint32_t* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(uint32_t value)
	{
		___max_1 = value;
	}
};


// System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3
struct U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 
{
public:
	// System.Int32 System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::<>t__builder
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  ___U3CU3Et__builder_1;
	// System.Int32 System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::millisecondTimeout
	int32_t ___millisecondTimeout_2;
	// System.Net.ServicePointScheduler/AsyncManualResetEvent System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::<>4__this
	AsyncManualResetEvent_t47325E9C64CC5E07EE88CE5A22EC0C5CA83F90F0 * ___U3CU3E4__this_3;
	// System.Threading.Tasks.Task System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::<timeoutTask>5__1
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___U3CtimeoutTaskU3E5__1_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Threading.Tasks.Task> System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::<>u__1
	ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_millisecondTimeout_2() { return static_cast<int32_t>(offsetof(U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2, ___millisecondTimeout_2)); }
	inline int32_t get_millisecondTimeout_2() const { return ___millisecondTimeout_2; }
	inline int32_t* get_address_of_millisecondTimeout_2() { return &___millisecondTimeout_2; }
	inline void set_millisecondTimeout_2(int32_t value)
	{
		___millisecondTimeout_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2, ___U3CU3E4__this_3)); }
	inline AsyncManualResetEvent_t47325E9C64CC5E07EE88CE5A22EC0C5CA83F90F0 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline AsyncManualResetEvent_t47325E9C64CC5E07EE88CE5A22EC0C5CA83F90F0 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(AsyncManualResetEvent_t47325E9C64CC5E07EE88CE5A22EC0C5CA83F90F0 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimeoutTaskU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2, ___U3CtimeoutTaskU3E5__1_4)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_U3CtimeoutTaskU3E5__1_4() const { return ___U3CtimeoutTaskU3E5__1_4; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_U3CtimeoutTaskU3E5__1_4() { return &___U3CtimeoutTaskU3E5__1_4; }
	inline void set_U3CtimeoutTaskU3E5__1_4(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___U3CtimeoutTaskU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtimeoutTaskU3E5__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2, ___U3CU3Eu__1_5)); }
	inline ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback
struct unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback
struct unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback
struct unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_x509verify_callback
struct unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t
struct unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t
struct unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t
struct unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t
struct unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t
struct unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t
struct unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t
struct unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t
struct unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t
struct unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t
struct unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t
struct unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t
struct unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t
struct unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t
struct unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t
struct unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t
struct unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t
struct unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t
struct unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t
struct unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t
struct unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t
struct unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t
struct unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t
struct unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t
struct unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t
struct unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t
struct unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t
struct unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t
struct unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t
struct unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t
struct unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * m_Items[1];

public:
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke(const unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8& unmarshaled, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke_back(const unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke& marshaled, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8& unmarshaled);
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke_cleanup(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke& marshaled);

// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetResult_m9AF2ED4AA92B61302492F51DAA91C2328E73B251_gshared (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, bool ___result0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_gshared_inline (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18  Task_1_ConfigureAwait_m0C99499DCC096AEE2A6AD075391C61037CC3DAA1_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m5E3746D1B0661A5BCD45816E83766F228A077D20_gshared (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2_mF34F895C49AD6B4361F3C2CAE97614BF4F5CC37F_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * ___awaiter0, U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConfiguredTaskAwaiter_GetResult_mD385ED6B1C12DC6353D50409731FB1729FFD9FA5_gshared (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, bool ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String SR::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462 (String_t* ___name0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m33CB0ED421096418F623E21D1843F088ECAE8907 (U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetResult(!0)
inline bool TaskCompletionSource_1_TrySetResult_m9AF2ED4AA92B61302492F51DAA91C2328E73B251 (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, bool ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 *, bool, const RuntimeMethod*))TaskCompletionSource_1_TrySetResult_m9AF2ED4AA92B61302492F51DAA91C2328E73B251_gshared)(__this, ___result0, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Delay_mD54722DBAF22507493263E9B1167A7F77EDDF80E (int32_t ___millisecondsDelay0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_inline (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * (*) (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_gshared_inline)(__this, method);
}
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::WhenAny(System.Threading.Tasks.Task[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 * Task_WhenAny_m59C7F18DABA670EACF71A2E2917C861ADB9D0341 (TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* ___tasks0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t918267DA81D3E7795A7FD4026B63C95F76AE0EFF  Task_1_ConfigureAwait_m09F143DDCFBAB5870DCB83D337785B666F1CDC9B (Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t918267DA81D3E7795A7FD4026B63C95F76AE0EFF  (*) (Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m0C99499DCC096AEE2A6AD075391C61037CC3DAA1_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Threading.Tasks.Task>::GetAwaiter()
inline ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  ConfiguredTaskAwaitable_1_GetAwaiter_mFD1E718C862EC248850DB447D0FBB29450F27D6F_inline (ConfiguredTaskAwaitable_1_t918267DA81D3E7795A7FD4026B63C95F76AE0EFF * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  (*) (ConfiguredTaskAwaitable_1_t918267DA81D3E7795A7FD4026B63C95F76AE0EFF *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Threading.Tasks.Task>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m7DB38F2F9334B814E71FD9B5FAFC3BB694D1BFF4 (ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_m5E3746D1B0661A5BCD45816E83766F228A077D20_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Threading.Tasks.Task>,System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78_TisU3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2_m5A2482D3FF3CA89DAFC9824284A2DC3863CB9A69 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 * ___awaiter0, U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 *, U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2_mF34F895C49AD6B4361F3C2CAE97614BF4F5CC37F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Threading.Tasks.Task>::GetResult()
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ConfiguredTaskAwaiter_GetResult_mACCB4DC9D3ABC89937E4D7BEE9016941E176CC27 (ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 * __this, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_mD385ED6B1C12DC6353D50409731FB1729FFD9FA5_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, bool ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, bool, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_gshared)(__this, ___result0, method);
}
// System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAsyncU3Ed__3_MoveNext_m428DB5C25D7D3C5A49B633CC57DAE67364954991 (U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAsyncU3Ed__3_SetStateMachine_mEE49EA25DC1D5E3CB662895B6AB0B9F46B69407D (U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateEnumerator__ctor_m52095CF67A4A192364C30FF8B0E17FC89BB58640 (X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2 * __this, X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * ___mappings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * L_0 = ___mappings0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_0);
		__this->set_enumerator_0(L_1);
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553 * X509CertificateEnumerator_get_Current_m073AF75A4FCD3173200FF90AB6539B9D82C9EA90 (X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return ((X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553 *)CastclassClass((RuntimeObject*)L_1, X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553_il2cpp_TypeInfo_var));
	}
}
// System.Object System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_mBE4F1A9CE8C97F506D8F7FDA6F9C18135BA9AE15 (X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m2B17A1E25AB322A73AFA8E8A368A5B1968F48F71 (X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m5A185825A08CCA0ED7D6419FA6F6E180061B9555 (X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_MoveNext_mD24E317796AFDCEE1C381C30AEC85B5B3A486F8C (X509CertificateEnumerator_t3F3CB1223F035EA2A9649F1B17102D939EB86AB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.X509Certificates.X509Helper2/MyNativeHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyNativeHelper__ctor_m3C33DA045EB050BE747AD1E3B10DA0C350678EA7 (MyNativeHelper_t9E78ECADEC33A3AFF81DEF8E43A27DDFD5187F6D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::.ctor(System.Collections.Specialized.ListDictionary,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeKeyValueEnumerator__ctor_mC6052F8CA984A3A8A8801F237EF2E9583126663E (NodeKeyValueEnumerator_t48270D5B5B4945AE654213A89DFB0AB66C9A97F1 * __this, ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B * ___list0, bool ___isKeys1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B * L_0 = ___list0;
		__this->set_list_0(L_0);
		bool L_1 = ___isKeys1;
		__this->set_isKeys_3(L_1);
		ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B * L_2 = ___list0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_version_1();
		__this->set_version_2(L_3);
		__this->set_start_4((bool)1);
		__this->set_current_1((DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 *)NULL);
		return;
	}
}
// System.Object System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * NodeKeyValueEnumerator_get_Current_mC74C6C7153BB3D7D120EED9865B48336894308DC (NodeKeyValueEnumerator_t48270D5B5B4945AE654213A89DFB0AB66C9A97F1 * __this, const RuntimeMethod* method)
{
	{
		DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * L_0 = __this->get_current_1();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1;
		L_1 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeKeyValueEnumerator_get_Current_mC74C6C7153BB3D7D120EED9865B48336894308DC_RuntimeMethod_var)));
	}

IL_0018:
	{
		bool L_3 = __this->get_isKeys_3();
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * L_4 = __this->get_current_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = L_4->get_value_1();
		return L_5;
	}

IL_002c:
	{
		DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * L_6 = __this->get_current_1();
		NullCheck(L_6);
		RuntimeObject * L_7 = L_6->get_key_0();
		return L_7;
	}
}
// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NodeKeyValueEnumerator_MoveNext_m670FC6BEB14D91A8D94A8D6B2B92C7A42CC65ADC (NodeKeyValueEnumerator_t48270D5B5B4945AE654213A89DFB0AB66C9A97F1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_version_2();
		ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B * L_1 = __this->get_list_0();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_version_1();
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_3;
		L_3 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeKeyValueEnumerator_MoveNext_m670FC6BEB14D91A8D94A8D6B2B92C7A42CC65ADC_RuntimeMethod_var)));
	}

IL_0023:
	{
		bool L_5 = __this->get_start_4();
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B * L_6 = __this->get_list_0();
		NullCheck(L_6);
		DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * L_7 = L_6->get_head_0();
		__this->set_current_1(L_7);
		__this->set_start_4((bool)0);
		goto IL_005e;
	}

IL_0045:
	{
		DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * L_8 = __this->get_current_1();
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * L_9 = __this->get_current_1();
		NullCheck(L_9);
		DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * L_10 = L_9->get_next_2();
		__this->set_current_1(L_10);
	}

IL_005e:
	{
		DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * L_11 = __this->get_current_1();
		return (bool)((!(((RuntimeObject*)(DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeKeyValueEnumerator_Reset_m4D8DEA9EB735DA10B1F7EC74B18C51B8C60BA610 (NodeKeyValueEnumerator_t48270D5B5B4945AE654213A89DFB0AB66C9A97F1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_version_2();
		ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B * L_1 = __this->get_list_0();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_version_1();
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_3;
		L_3 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeKeyValueEnumerator_Reset_m4D8DEA9EB735DA10B1F7EC74B18C51B8C60BA610_RuntimeMethod_var)));
	}

IL_0023:
	{
		__this->set_start_4((bool)1);
		__this->set_current_1((DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDF074FAF7DCA143BFC6A7650BE9BE6BBC4F05BE7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 * L_0 = (U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 *)il2cpp_codegen_object_new(U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m33CB0ED421096418F623E21D1843F088ECAE8907(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m33CB0ED421096418F623E21D1843F088ECAE8907 (U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::<Set>b__4_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CSetU3Eb__4_0_m51E1DA417A30BA042DE7A4DA249E0C13FB7E32BD (U3CU3Ec_t26771B0B0E1976134BA933C8A2C347BABBB765C5 * __this, RuntimeObject * ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_m9AF2ED4AA92B61302492F51DAA91C2328E73B251_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___s0;
		NullCheck(((TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 *)CastclassClass((RuntimeObject*)L_0, TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3_il2cpp_TypeInfo_var)));
		bool L_1;
		L_1 = TaskCompletionSource_1_TrySetResult_m9AF2ED4AA92B61302492F51DAA91C2328E73B251(((TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 *)CastclassClass((RuntimeObject*)L_0, TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3_il2cpp_TypeInfo_var)), (bool)1, /*hidden argument*/TaskCompletionSource_1_TrySetResult_m9AF2ED4AA92B61302492F51DAA91C2328E73B251_RuntimeMethod_var);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAsyncU3Ed__3_MoveNext_m428DB5C25D7D3C5A49B633CC57DAE67364954991 (U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78_TisU3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2_m5A2482D3FF3CA89DAFC9824284A2DC3863CB9A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_mFD1E718C862EC248850DB447D0FBB29450F27D6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mACCB4DC9D3ABC89937E4D7BEE9016941E176CC27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m7DB38F2F9334B814E71FD9B5FAFC3BB694D1BFF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m09F143DDCFBAB5870DCB83D337785B666F1CDC9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AsyncManualResetEvent_t47325E9C64CC5E07EE88CE5A22EC0C5CA83F90F0 * V_1 = NULL;
	bool V_2 = false;
	ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaitable_1_t918267DA81D3E7795A7FD4026B63C95F76AE0EFF  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AsyncManualResetEvent_t47325E9C64CC5E07EE88CE5A22EC0C5CA83F90F0 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_007f;
			}
		}

IL_0011:
		{
			int32_t L_3 = __this->get_millisecondTimeout_2();
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
			L_4 = Task_Delay_mD54722DBAF22507493263E9B1167A7F77EDDF80E(L_3, /*hidden argument*/NULL);
			__this->set_U3CtimeoutTaskU3E5__1_4(L_4);
			TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* L_5 = (TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478*)(TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478*)SZArrayNew(TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478_il2cpp_TypeInfo_var, (uint32_t)2);
			TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* L_6 = L_5;
			AsyncManualResetEvent_t47325E9C64CC5E07EE88CE5A22EC0C5CA83F90F0 * L_7 = V_1;
			NullCheck(L_7);
			TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * L_8 = L_7->get_m_tcs_0();
			il2cpp_codegen_memory_barrier();
			NullCheck(L_8);
			Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_9;
			L_9 = TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_inline(L_8, /*hidden argument*/TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_RuntimeMethod_var);
			NullCheck(L_6);
			ArrayElementTypeCheck (L_6, L_9);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_9);
			TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* L_10 = L_6;
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_11 = __this->get_U3CtimeoutTaskU3E5__1_4();
			NullCheck(L_10);
			ArrayElementTypeCheck (L_10, L_11);
			(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_11);
			Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 * L_12;
			L_12 = Task_WhenAny_m59C7F18DABA670EACF71A2E2917C861ADB9D0341(L_10, /*hidden argument*/NULL);
			NullCheck(L_12);
			ConfiguredTaskAwaitable_1_t918267DA81D3E7795A7FD4026B63C95F76AE0EFF  L_13;
			L_13 = Task_1_ConfigureAwait_m09F143DDCFBAB5870DCB83D337785B666F1CDC9B(L_12, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m09F143DDCFBAB5870DCB83D337785B666F1CDC9B_RuntimeMethod_var);
			V_4 = L_13;
			ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  L_14;
			L_14 = ConfiguredTaskAwaitable_1_GetAwaiter_mFD1E718C862EC248850DB447D0FBB29450F27D6F_inline((ConfiguredTaskAwaitable_1_t918267DA81D3E7795A7FD4026B63C95F76AE0EFF *)(&V_4), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_mFD1E718C862EC248850DB447D0FBB29450F27D6F_RuntimeMethod_var);
			V_3 = L_14;
			bool L_15;
			L_15 = ConfiguredTaskAwaiter_get_IsCompleted_m7DB38F2F9334B814E71FD9B5FAFC3BB694D1BFF4((ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 *)(&V_3), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m7DB38F2F9334B814E71FD9B5FAFC3BB694D1BFF4_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_009b;
			}
		}

IL_005f:
		{
			int32_t L_16 = 0;
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
			ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  L_17 = V_3;
			__this->set_U3CU3Eu__1_5(L_17);
			AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78_TisU3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2_m5A2482D3FF3CA89DAFC9824284A2DC3863CB9A69((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_18, (ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 *)(&V_3), (U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78_TisU3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2_m5A2482D3FF3CA89DAFC9824284A2DC3863CB9A69_RuntimeMethod_var);
			goto IL_00dd;
		}

IL_007f:
		{
			ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  L_19 = __this->get_U3CU3Eu__1_5();
			V_3 = L_19;
			ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 * L_20 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_20, sizeof(ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 ));
			int32_t L_21 = (-1);
			V_0 = L_21;
			__this->set_U3CU3E1__state_0(L_21);
		}

IL_009b:
		{
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_22;
			L_22 = ConfiguredTaskAwaiter_GetResult_mACCB4DC9D3ABC89937E4D7BEE9016941E176CC27((ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 *)(&V_3), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_mACCB4DC9D3ABC89937E4D7BEE9016941E176CC27_RuntimeMethod_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_23 = __this->get_U3CtimeoutTaskU3E5__1_4();
			V_2 = (bool)((((int32_t)((((RuntimeObject*)(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_22) == ((RuntimeObject*)(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_23))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_00c9;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b0;
		}
		throw e;
	}

CATCH_00b0:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_25 = V_5;
		AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_24, L_25, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00dd;
	} // end catch (depth: 1)

IL_00c9:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_26 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_27 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_26, L_27, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitAsyncU3Ed__3_MoveNext_m428DB5C25D7D3C5A49B633CC57DAE67364954991_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 * _thisAdjusted = reinterpret_cast<U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 *>(__this + _offset);
	U3CWaitAsyncU3Ed__3_MoveNext_m428DB5C25D7D3C5A49B633CC57DAE67364954991(_thisAdjusted, method);
}
// System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAsyncU3Ed__3_SetStateMachine_mEE49EA25DC1D5E3CB662895B6AB0B9F46B69407D (U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitAsyncU3Ed__3_SetStateMachine_mEE49EA25DC1D5E3CB662895B6AB0B9F46B69407D_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 * _thisAdjusted = reinterpret_cast<U3CWaitAsyncU3Ed__3_tBD152CA67F062D07F1FEC8C2BF60E32B4A1508B2 *>(__this + _offset);
	U3CWaitAsyncU3Ed__3_SetStateMachine_mEE49EA25DC1D5E3CB662895B6AB0B9F46B69407D(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  DelegatePInvokeWrapper_unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 (unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * __this, const RuntimeMethod* method)
{
	typedef unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_errorstate_create_t__ctor_m502A58FB6B55E6F5A7C23A6D0BA9A57AD5C2FC8E (unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_errorstate Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  unitytls_errorstate_create_t_Invoke_m6DF09A1CC8C5C38D78CC2E510F318571202E7087 (unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * __this, const RuntimeMethod* method)
{
	unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_errorstate_create_t_BeginInvoke_m103F02317D04043A6F17DBA039AC7DE10720F2B4 (unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// Mono.Unity.UnityTls/unitytls_errorstate Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  unitytls_errorstate_create_t_EndInvoke_m1129F7E0667ABDE028F644D2F6AE39659501283F (unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E (unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, uint32_t ___errorCode1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___errorState0, ___errorCode1);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_errorstate_raise_error_t__ctor_mBDF3F1DBB55EBC328D0EE9A14A544A20CD076EBA (unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::Invoke(Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_error_code)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_errorstate_raise_error_t_Invoke_mB92B8CF1876FF0C9467C82918E427EBD324D8D8A (unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, uint32_t ___errorCode1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___errorState0, ___errorCode1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___errorState0, ___errorCode1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t >::Invoke(targetMethod, targetThis, ___errorState0, ___errorCode1);
					else
						GenericVirtActionInvoker2< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t >::Invoke(targetMethod, targetThis, ___errorState0, ___errorCode1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___errorState0, ___errorCode1);
					else
						VirtActionInvoker2< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___errorState0, ___errorCode1);
				}
			}
			else
			{
				if (___parameterCount == 1)
				{
					typedef void (*FunctionPointerType) (unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___errorState0, ___errorCode1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___errorState0, ___errorCode1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_error_code,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_errorstate_raise_error_t_BeginInvoke_mABE9FA2B499289353E0B756509458BB432BFED51 (unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, uint32_t ___errorCode1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_error_code_tC425776568E0A522F720337294FF5226445A9E89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___errorState0;
	__d_args[1] = Box(unitytls_error_code_tC425776568E0A522F720337294FF5226445A9E89_il2cpp_TypeInfo_var, &___errorCode1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_errorstate_raise_error_t_EndInvoke_mDEBE29AF3E514929895AB7971B159BAB19E4BD5D (unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F (unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___key0);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_free_t__ctor_m0233235C55B3ECFECA16F0A8346E97D6ADDEC040 (unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::Invoke(Mono.Unity.UnityTls/unitytls_key*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_free_t_Invoke_m4DD025ECA7C3B5020EBF702BC4BAAE8D9B3C807B (unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___key0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___key0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * >::Invoke(targetMethod, targetThis, ___key0);
					else
						GenericVirtActionInvoker1< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * >::Invoke(targetMethod, targetThis, ___key0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___key0);
					else
						VirtActionInvoker1< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___key0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___key0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___key0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_key*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_key_free_t_BeginInvoke_m972ED483F0CC8F99724B66019E736094D326EE29 (unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___key0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_free_t_EndInvoke_m47D280EFAE1EA7E16E6400B2F47A83C408410A24 (unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  DelegatePInvokeWrapper_unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 (unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  (CDECL *PInvokeFunc)(unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  returnValue = il2cppPInvokeFunc(___key0, ___errorState1);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_get_ref_t__ctor_mE569EA0229BC956FD332E398F4A6ED32902EFBE3 (unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_key_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::Invoke(Mono.Unity.UnityTls/unitytls_key*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  unitytls_key_get_ref_t_Invoke_mE487DAB011D7F5966E09A2245399B312C2EF9111 (unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  (*FunctionPointerType) (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___key0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  (*FunctionPointerType) (void*, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___key0, ___errorState1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 , unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___key0, ___errorState1);
					else
						result = GenericVirtFuncInvoker2< unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 , unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___key0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 , unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___key0, ___errorState1);
					else
						result = VirtFuncInvoker2< unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 , unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___key0, ___errorState1);
				}
			}
			else
			{
				if (___parameterCount == 1)
				{
					typedef unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  (*FunctionPointerType) (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___key0, ___errorState1, targetMethod);
				}
				else
				{
					typedef unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  (*FunctionPointerType) (void*, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___key0, ___errorState1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_key*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_key_get_ref_t_BeginInvoke_m6E656A4FA9FC8D6BC473D707DAFC17DF861E8A95 (unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Mono.Unity.UnityTls/unitytls_key_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  unitytls_key_get_ref_t_EndInvoke_mBE91A77CA27DE41245B333EA0C8B93EAF0325DE2 (unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * DelegatePInvokeWrapper_unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 (unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (CDECL *PInvokeFunc)(uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * returnValue = il2cppPInvokeFunc(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_parse_der_t__ctor_m6E905C011D2077EE54DA350886C16B2BD1EE7681 (unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::Invoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * unitytls_key_parse_der_t_Invoke_m108AFDBB38B2C1AD429E957CD5BEA93D23C152E6 (unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (void*, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
					else
						result = GenericVirtFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
					else
						result = VirtFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
				}
			}
			else
			{
				if (___parameterCount == 4)
				{
					typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
				}
				else
				{
					typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (void*, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::BeginInvoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_key_parse_der_t_BeginInvoke_mD0BF42B3B39E50702EC624F2A8596D3017D0F93B (unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___buffer0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen1);
	__d_args[2] = ___password2;
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___passwordLen3);
	__d_args[4] = ___errorState4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * unitytls_key_parse_der_t_EndInvoke_mEF249023FA9DD82850CB35FBF5691B44F8023A25 (unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * DelegatePInvokeWrapper_unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC (unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (CDECL *PInvokeFunc)(uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * returnValue = il2cppPInvokeFunc(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_parse_pem_t__ctor_m47E001D14C6F8F11E914B1126DE9516411A2AC06 (unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::Invoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * unitytls_key_parse_pem_t_Invoke_mD4D86D5A1C3E8E9BF2BB9CC8774EB3499ED598F4 (unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (void*, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
					else
						result = GenericVirtFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
					else
						result = VirtFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
				}
			}
			else
			{
				if (___parameterCount == 4)
				{
					typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
				}
				else
				{
					typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (void*, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::BeginInvoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_key_parse_pem_t_BeginInvoke_m0AA005FBD3649ACA89E06C9664AC4B7BE062FD7B (unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___buffer0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen1);
	__d_args[2] = ___password2;
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___passwordLen3);
	__d_args[4] = ___errorState4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * unitytls_key_parse_pem_t_EndInvoke_m564A47C1A42623E189B4792E82B007B65D1BBEF7 (unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD (unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___buffer0, ___bufferLen1, ___errorState2);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_random_generate_bytes_t__ctor_m55CC9979ADA003BEFF41370469BB0A82DFAC67E8 (unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::Invoke(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_random_generate_bytes_t_Invoke_mA5EFE8A5F4D068BEC771CE12BD5BD26F9A86BB84 (unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___errorState2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___errorState2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___errorState2);
					else
						GenericVirtActionInvoker3< uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___errorState2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___errorState2);
					else
						VirtActionInvoker3< uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___errorState2);
				}
			}
			else
			{
				if (___parameterCount == 2)
				{
					typedef void (*FunctionPointerType) (uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___errorState2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___errorState2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::BeginInvoke(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_random_generate_bytes_t_BeginInvoke_m27BF16ECBD2C66644B2626E3CFC61600491E7194 (unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___buffer0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen1);
	__d_args[2] = ___errorState2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_random_generate_bytes_t_EndInvoke_m74F081B09F91875EF4AC852F58AAD04BCAC1D205 (unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * DelegatePInvokeWrapper_unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 (unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{


	typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (CDECL *PInvokeFunc)(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___callbacks1' to native representation
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke ____callbacks1_marshaled = {};
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke(___callbacks1, ____callbacks1_marshaled);

	// Native function invocation
	unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * returnValue = il2cppPInvokeFunc(___supportedProtocols0, ____callbacks1_marshaled, ___cn2, ___cnLen3, ___errorState4);

	// Marshaling cleanup of parameter '___callbacks1' native representation
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke_cleanup(____callbacks1_marshaled);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_create_client_t__ctor_mBEAE100CA3144364E49C2468343428FE9E19F9B6 (unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * unitytls_tlsctx_create_client_t_Invoke_m3BABCEA6ED54FD59886B7E8685BD7BDB6145079A (unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (void*, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4);
					else
						result = GenericVirtFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4);
					else
						result = VirtFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4);
				}
			}
			else
			{
				if (___parameterCount == 4)
				{
					typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (RuntimeObject*, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___supportedProtocols0) - 1), ___callbacks1, ___cn2, ___cnLen3, ___errorState4, targetMethod);
				}
				else
				{
					typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (void*, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_create_client_t_BeginInvoke_mAF50983B4C1D6DC77B6E7A644872A95E88769D95 (unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68_il2cpp_TypeInfo_var, &___supportedProtocols0);
	__d_args[1] = Box(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_il2cpp_TypeInfo_var, &___callbacks1);
	__d_args[2] = ___cn2;
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___cnLen3);
	__d_args[4] = ___errorState4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * unitytls_tlsctx_create_client_t_EndInvoke_mFFC92B25698A95310EB56B6C8B82661E75D348C4 (unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * DelegatePInvokeWrapper_unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B (unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint64_t ___certChain2, uint64_t ___leafCertificateKey3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{


	typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (CDECL *PInvokeFunc)(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke, uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___callbacks1' to native representation
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke ____callbacks1_marshaled = {};
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke(___callbacks1, ____callbacks1_marshaled);

	// Native function invocation
	unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * returnValue = il2cppPInvokeFunc(___supportedProtocols0, ____callbacks1_marshaled, ___certChain2, ___leafCertificateKey3, ___errorState4);

	// Marshaling cleanup of parameter '___callbacks1' native representation
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke_cleanup(____callbacks1_marshaled);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_create_server_t__ctor_m444E3E5CA424BD6649C48AA2724ECABE25A6ACA7 (unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * unitytls_tlsctx_create_server_t_Invoke_m9BAA6CD5D7D6646AFC00AFAF4128DF92428F0F44 (unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint64_t ___certChain2, uint64_t ___leafCertificateKey3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (void*, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4);
					else
						result = GenericVirtFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4);
					else
						result = VirtFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4);
				}
			}
			else
			{
				if (___parameterCount == 4)
				{
					typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (RuntimeObject*, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___supportedProtocols0) - 1), ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4, targetMethod);
				}
				else
				{
					typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (void*, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_create_server_t_BeginInvoke_mB600A87E8909E5FBCA2FC92239A783E345BCB5D7 (unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint64_t ___certChain2, uint64_t ___leafCertificateKey3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68_il2cpp_TypeInfo_var, &___supportedProtocols0);
	__d_args[1] = Box(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_il2cpp_TypeInfo_var, &___callbacks1);
	__d_args[2] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___certChain2);
	__d_args[3] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___leafCertificateKey3);
	__d_args[4] = ___errorState4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * unitytls_tlsctx_create_server_t_EndInvoke_mE0ED7A6AE53A54CF3479E70917D0BB2F8EC2DE3A (unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA (unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___ctx0);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_free_t__ctor_mE457D4E43F47148D44E137E6C767DCD036DB34E9 (unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_free_t_Invoke_m54B2D3A510B87650E7AF041CC60A9FF44ECA9437 (unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * >::Invoke(targetMethod, targetThis, ___ctx0);
					else
						GenericVirtActionInvoker1< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * >::Invoke(targetMethod, targetThis, ___ctx0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0);
					else
						VirtActionInvoker1< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_free_t_BeginInvoke_m4709DCB59DEDE7C1500CA164F5E304318ACB9025 (unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___ctx0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_free_t_EndInvoke_m016FC930E1F5CD52FF74DD4FB462C9613813F39E (unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 (unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___ctx0, ___errorState1);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_get_ciphersuite_t__ctor_mE7AEF274ACD666FBA2C02F14DA38014EAD75F8E0 (unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_ciphersuite Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_get_ciphersuite_t_Invoke_mDA134EC5BFA53F4985D9D10A8D4ACB971AE6D0A1 (unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	uint32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
					else
						result = GenericVirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___errorState1);
					else
						result = VirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___errorState1);
				}
			}
			else
			{
				if (___parameterCount == 1)
				{
					typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_get_ciphersuite_t_BeginInvoke_mA110391B7158B9BDC4F0597317AD70CDF0DF017F (unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Mono.Unity.UnityTls/unitytls_ciphersuite Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_get_ciphersuite_t_EndInvoke_m9A477430340005FD37AFC45C377F3FBB8F60FF7D (unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 (unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___ctx0, ___errorState1);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_get_protocol_t__ctor_m42F49F551071AB0F91AB7810C8DC47A2A33F1384 (unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_get_protocol_t_Invoke_m756BD8E367A9BF2872A3A2183366B5C5098A634C (unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	uint32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
					else
						result = GenericVirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___errorState1);
					else
						result = VirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___errorState1);
				}
			}
			else
			{
				if (___parameterCount == 1)
				{
					typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_get_protocol_t_BeginInvoke_mEEAFA0B27A4655BA9729136FBB2A5383151E3169 (unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_get_protocol_t_EndInvoke_mAB8A83B00C32C256F56E255EB9A683AE7924CE94 (unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB (unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ___errorState1);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_notify_close_t__ctor_m9FBFA390FFA5F0E59EF1652BD1F8EC4BB579D787 (unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_notify_close_t_Invoke_m1DF2F894CC7D1DAC1ED86AB643EF4D9482DBDBDD (unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
					else
						GenericVirtActionInvoker2< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___errorState1);
					else
						VirtActionInvoker2< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___errorState1);
				}
			}
			else
			{
				if (___parameterCount == 1)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_notify_close_t_BeginInvoke_m73742B8B1BC173EC206ADC3CA492E3BEED2A67A1 (unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_notify_close_t_EndInvoke_mD5B659727C0CAD54F05D14BD3C1A554907695F1D (unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C (unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___ctx0, ___errorState1);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_process_handshake_t__ctor_m5FCC62940BECF2001364EA925FF543E1F59EBC61 (unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_process_handshake_t_Invoke_mB249F948100B2752B2A6BF79C7F9038523C1C89B (unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	uint32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
					else
						result = GenericVirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___errorState1);
					else
						result = VirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___errorState1);
				}
			}
			else
			{
				if (___parameterCount == 1)
				{
					typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_process_handshake_t_BeginInvoke_m8E4E264B100447C3590366B75F7C79E75D99EAA4 (unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_process_handshake_t_EndInvoke_m3144D076D4C10224C8BFF05671EBDB5F0EFA6FBB (unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 (unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___ctx0, ___buffer1, ___bufferLen2, ___errorState3);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_read_t__ctor_m292F01CA56EC409E7CDA69BE0AA10B19B3E20F4E (unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_tlsctx_read_t_Invoke_m142B61FBEE88603BE95202B62762E92008324935 (unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						result = GenericVirtFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						result = VirtFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3);
				}
			}
			else
			{
				if (___parameterCount == 3)
				{
					typedef intptr_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_read_t_BeginInvoke_mDE6D1E5ED970FB74D58A7C9D849D5CEF0A80066F (unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___buffer1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_tlsctx_read_t_EndInvoke_m3BCF50CAB32A1EFADEB497D3A50694C018E285C5 (unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD (unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___clientAuthCAList1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ___clientAuthCAList1, ___errorState2);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_server_require_client_authentication_t__ctor_mA41774A651C25857A72D3694EBDE91E70A408D81 (unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_server_require_client_authentication_t_Invoke_mC8E06902662956294CEC4AFCF8697671E7BA3639 (unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___clientAuthCAList1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___clientAuthCAList1, ___errorState2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2);
					else
						GenericVirtActionInvoker3< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2);
					else
						VirtActionInvoker3< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2);
				}
			}
			else
			{
				if (___parameterCount == 2)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___clientAuthCAList1, ___errorState2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_server_require_client_authentication_t_BeginInvoke_mF93542F5F7DC74FC5042D346C0956E694F4B2479 (unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___clientAuthCAList1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___clientAuthCAList1);
	__d_args[2] = ___errorState2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_server_require_client_authentication_t_EndInvoke_m8F406760E0CA52C53B0C91D7A7862119F10E3B7C (unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 (unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, Il2CppMethodPointer, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___cb1' to native representation
	Il2CppMethodPointer ____cb1_marshaled = NULL;
	____cb1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb1));

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ____cb1_marshaled, ___userData2, ___errorState3);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_certificate_callback_t__ctor_mDC0A66278594A9B37EFA6FA3010AFD64DC3E81BE (unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_certificate_callback_t_Invoke_m3F334D5FFB2B3C104C1E65A04B044138CE51DFAD (unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						GenericVirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						VirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
			}
			else
			{
				if (___parameterCount == 3)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_set_certificate_callback_t_BeginInvoke_m69D89510CE1C44BF29C88E2025C42F1ACD29605C (unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___cb1;
	__d_args[2] = ___userData2;
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_certificate_callback_t_EndInvoke_mC3508D12AB7792789623E2CFAA028D214200C244 (unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E (unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint32_t* ___supportedCiphersuites1, intptr_t ___supportedCiphersuitesLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_supported_ciphersuites_t__ctor_m46A364914173C343267CFDC8B61D7DF4197C6448 (unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_ciphersuite*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_supported_ciphersuites_t_Invoke_mE7E379E36B2B4719ECF97F375682CD0DBF407F1B (unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint32_t* ___supportedCiphersuites1, intptr_t ___supportedCiphersuitesLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3);
					else
						GenericVirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3);
					else
						VirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3);
				}
			}
			else
			{
				if (___parameterCount == 3)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_ciphersuite*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_set_supported_ciphersuites_t_BeginInvoke_m03D9AE30DA07EB020A31669DC158422A593329E9 (unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint32_t* ___supportedCiphersuites1, intptr_t ___supportedCiphersuitesLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___supportedCiphersuites1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___supportedCiphersuitesLen2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_supported_ciphersuites_t_EndInvoke_mAB41900E507484AD23583DE18E853B9B6145EF4C (unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF (unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, Il2CppMethodPointer, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___cb1' to native representation
	Il2CppMethodPointer ____cb1_marshaled = NULL;
	____cb1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb1));

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ____cb1_marshaled, ___userData2, ___errorState3);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_trace_callback_t__ctor_mAA8F0A3B039F2A5DA4EA77F6DDA2573BB5FDA80B (unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_trace_callback_t_Invoke_mFC61F57B75911E4A1B08221AB854D91F5F03D476 (unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						GenericVirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						VirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
			}
			else
			{
				if (___parameterCount == 3)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_set_trace_callback_t_BeginInvoke_m03FCD2BF1AA2571CC4F2CFF59251EFA20421F156 (unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___cb1;
	__d_args[2] = ___userData2;
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_trace_callback_t_EndInvoke_m07BE3163185F6B3B1D299589E648F7C571D324FE (unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 (unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, Il2CppMethodPointer, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___cb1' to native representation
	Il2CppMethodPointer ____cb1_marshaled = NULL;
	____cb1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb1));

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ____cb1_marshaled, ___userData2, ___errorState3);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_x509verify_callback_t__ctor_m78790E0190264955C6B51F3ACCAAA2C02FC1CB52 (unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_x509verify_callback_t_Invoke_m81E1B51C444B1074314AD55C22EC20E6AD8FA476 (unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						GenericVirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						VirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
			}
			else
			{
				if (___parameterCount == 3)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_set_x509verify_callback_t_BeginInvoke_mA488C207261DAA26D3D5A81F3549B9B058382DD2 (unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___cb1;
	__d_args[2] = ___userData2;
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_x509verify_callback_t_EndInvoke_m8BDF1F043AA55E4FAA727E67B544440ED316ED18 (unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 (unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___data1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___ctx0, ___data1, ___bufferLen2, ___errorState3);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_write_t__ctor_m300C5AEFDFE22C96322EABE38FD2CA962350D96B (unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_tlsctx_write_t_Invoke_m4365C50B81B1904232514233B8252D15E3059416 (unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___data1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___data1, ___bufferLen2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3);
					else
						result = GenericVirtFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3);
					else
						result = VirtFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3);
				}
			}
			else
			{
				if (___parameterCount == 3)
				{
					typedef intptr_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___data1, ___bufferLen2, ___errorState3, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_write_t_BeginInvoke_m7DEACE7853FE244D613A77ABEC04AC821B31F503 (unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___data1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___data1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_tlsctx_write_t_EndInvoke_mE16B80B19C507E3EDF89DA7971AB267BACDC5E86 (unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC (unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * __this, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___cert0, ___buffer1, ___bufferLen2, ___errorState3);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509_export_der_t__ctor_m4514C241AC221F91BBB088FF1DC31B342DCA7397 (unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_x509_export_der_t_Invoke_mFA1224BE85A73019C32C3CB0E8ABD7E5BFEFFA82 (unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * __this, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___cert0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< intptr_t, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						result = GenericVirtFuncInvoker4< intptr_t, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< intptr_t, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						result = VirtFuncInvoker4< intptr_t, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3);
				}
			}
			else
			{
				if (___parameterCount == 3)
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___cert0) - 1), ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509_export_der_t_BeginInvoke_m315A20FF03D9FD6B82A9A3997267A4E4B72B8D05 (unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * __this, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5_il2cpp_TypeInfo_var, &___cert0);
	__d_args[1] = ___buffer1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_x509_export_der_t_EndInvoke_m660B809820CF47708B4DB7EBDF618AB34B70242E (unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E (unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___list0, ___buffer1, ___bufferLen2, ___errorState3);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_der_t__ctor_m814A959A92E1D413C2AB5BE0E8920318D52C8F3F (unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_der_t_Invoke_mA432486D4A73BB7FC4DFE3DD02205FE4C0AB9066 (unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___list0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						GenericVirtActionInvoker4< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						VirtActionInvoker4< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3);
				}
			}
			else
			{
				if (___parameterCount == 3)
				{
					typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___list0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_append_der_t_BeginInvoke_mFC163657F9DBE3408CE9FBD94C0E0D672099618D (unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___list0;
	__d_args[1] = ___buffer1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_der_t_EndInvoke_m6002A55859F4C9DCF95DEBADC867E85E33DEF36E (unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 (unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___list0, ___cert1, ___errorState2);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_t__ctor_m264F31493E6C24EF19C6560237F1DFB0522195C2 (unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_t_Invoke_m85E010BA75CBBCC9B32C8A6C685E4F2CCFB69300 (unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___list0, ___cert1, ___errorState2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___cert1, ___errorState2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___cert1, ___errorState2);
					else
						GenericVirtActionInvoker3< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___cert1, ___errorState2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___list0, ___cert1, ___errorState2);
					else
						VirtActionInvoker3< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___list0, ___cert1, ___errorState2);
				}
			}
			else
			{
				if (___parameterCount == 2)
				{
					typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___list0, ___cert1, ___errorState2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___cert1, ___errorState2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_append_t_BeginInvoke_m3A87AAC9A120A76CEC99B52A91B43739A74D097F (unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___list0;
	__d_args[1] = Box(unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5_il2cpp_TypeInfo_var, &___cert1);
	__d_args[2] = ___errorState2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_t_EndInvoke_m06BB61716750C77C7D19DF3A10628680899382C9 (unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * DelegatePInvokeWrapper_unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F (unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, const RuntimeMethod* method)
{
	typedef unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * (CDECL *PInvokeFunc)(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * returnValue = il2cppPInvokeFunc(___errorState0);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_create_t__ctor_m396CBCF6F413041E9FB829BCF12DBB71160E0CC5 (unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509list* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::Invoke(Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * unitytls_x509list_create_t_Invoke_m3A52B8B8AC08AA77CEDD34817D2C15209130A1F1 (unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, const RuntimeMethod* method)
{
	unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * (*FunctionPointerType) (unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___errorState0, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * (*FunctionPointerType) (void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___errorState0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___errorState0);
					else
						result = GenericVirtFuncInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___errorState0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___errorState0);
					else
						result = VirtFuncInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___errorState0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * (*FunctionPointerType) (unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___errorState0, targetMethod);
				}
				else
				{
					typedef unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * (*FunctionPointerType) (void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___errorState0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_create_t_BeginInvoke_m85BD25215C3E215460E132F10110223FED5C7CA2 (unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___errorState0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// Mono.Unity.UnityTls/unitytls_x509list* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * unitytls_x509list_create_t_EndInvoke_m4D70BD363D9EA21E21E73C6705E62955477CB3B0 (unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 (unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___list0);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_free_t__ctor_m360A7960A558BFF26B537EE2717CE4FF60612EBE (unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_free_t_Invoke_m5F920A1A43E549E297391F2033A04AF8C05A3C4C (unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___list0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * >::Invoke(targetMethod, targetThis, ___list0);
					else
						GenericVirtActionInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * >::Invoke(targetMethod, targetThis, ___list0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___list0);
					else
						VirtActionInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___list0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___list0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_free_t_BeginInvoke_m43DF55CE129363751C545897CF317FAD1D7BFA1A (unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___list0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_free_t_EndInvoke_m2EAAE00B58B3922A632D13E4DFA3DD737D971916 (unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  DelegatePInvokeWrapper_unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 (unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  (CDECL *PInvokeFunc)(unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  returnValue = il2cppPInvokeFunc(___list0, ___errorState1);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_get_ref_t__ctor_m672FA9C9A5170D460A7D9839E786559819DB8459 (unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  unitytls_x509list_get_ref_t_Invoke_mFADB5F4BCB29A18DD0BD689EA8180D74CD9E4E63 (unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___list0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___errorState1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___errorState1);
					else
						result = GenericVirtFuncInvoker2< unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___list0, ___errorState1);
					else
						result = VirtFuncInvoker2< unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___list0, ___errorState1);
				}
			}
			else
			{
				if (___parameterCount == 1)
				{
					typedef unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___list0, ___errorState1, targetMethod);
				}
				else
				{
					typedef unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___errorState1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_get_ref_t_BeginInvoke_m282E11FB630DFD9FAA07EE42FA460C10AD6A7915 (unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___list0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  unitytls_x509list_get_ref_t_EndInvoke_mF4CA76D68207C44E63DA55C4C4208576998D5AE0 (unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  DelegatePInvokeWrapper_unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 (unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___list0, intptr_t ___index1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	typedef unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  (CDECL *PInvokeFunc)(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  returnValue = il2cppPInvokeFunc(___list0, ___index1, ___errorState2);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_get_x509_t__ctor_mE5676A42AAAE07337AB42C51E139736482AD3FCC (unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  unitytls_x509list_get_x509_t_Invoke_m58A02DBC5C5C9A0C693DFDE3BEBCE8518C5BEDFE (unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___list0, intptr_t ___index1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  (*FunctionPointerType) (unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___list0, ___index1, ___errorState2, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___index1, ___errorState2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___index1, ___errorState2);
					else
						result = GenericVirtFuncInvoker3< unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___index1, ___errorState2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___list0, ___index1, ___errorState2);
					else
						result = VirtFuncInvoker3< unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___list0, ___index1, ___errorState2);
				}
			}
			else
			{
				if (___parameterCount == 2)
				{
					typedef unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  (*FunctionPointerType) (RuntimeObject*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___list0) - 1), ___index1, ___errorState2, targetMethod);
				}
				else
				{
					typedef unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___index1, ___errorState2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_get_x509_t_BeginInvoke_m5B76F36D52C182CFB7B62AA43C3E159E7E7DB468 (unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___list0, intptr_t ___index1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___list0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___index1);
	__d_args[2] = ___errorState2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// Mono.Unity.UnityTls/unitytls_x509_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  unitytls_x509list_get_x509_t_EndInvoke_m6AFA7951802ED216C9EB13AAA7A5C707F7289F41 (unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, uint8_t* ___cn1, intptr_t ___cnLen2, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb3, void* ___userData4, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState5, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, Il2CppMethodPointer, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___cb3' to native representation
	Il2CppMethodPointer ____cb3_marshaled = NULL;
	____cb3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb3));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___chain0, ___cn1, ___cnLen2, ____cb3_marshaled, ___userData4, ___errorState5);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509verify_default_ca_t__ctor_m87E8CBD1080B32E3E9B2085435089120EE8E7B51 (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_x509verify_default_ca_t_Invoke_m22C2DE021D3D750655FFEF54BE2B030596F1A82E (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, uint8_t* ___cn1, intptr_t ___cnLen2, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb3, void* ___userData4, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState5, const RuntimeMethod* method)
{
	uint32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 6)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker6< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5);
					else
						result = GenericVirtFuncInvoker6< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker6< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5);
					else
						result = VirtFuncInvoker6< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5);
				}
			}
			else
			{
				if (___parameterCount == 5)
				{
					typedef uint32_t (*FunctionPointerType) (RuntimeObject*, uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___chain0) - 1), ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509verify_default_ca_t_BeginInvoke_mDD34421A5A03B034EAD940EA3E667E2ACEFF5829 (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, uint8_t* ___cn1, intptr_t ___cnLen2, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb3, void* ___userData4, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState5, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback6, RuntimeObject * ___object7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___chain0);
	__d_args[1] = ___cn1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___cnLen2);
	__d_args[3] = ___cb3;
	__d_args[4] = ___userData4;
	__d_args[5] = ___errorState5;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);;
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_x509verify_default_ca_t_EndInvoke_m4D26A5425526F6A205596F7AE025620E74173282 (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___trustCA1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb4, void* ___userData5, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState6, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, Il2CppMethodPointer, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___cb4' to native representation
	Il2CppMethodPointer ____cb4_marshaled = NULL;
	____cb4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb4));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___chain0, ___trustCA1, ___cn2, ___cnLen3, ____cb4_marshaled, ___userData5, ___errorState6);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509verify_explicit_ca_t__ctor_m27337465175BADAB82BFF9333ADA82DCF2DFD2A3 (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_x509verify_explicit_ca_t_Invoke_m56F009ABDD7ED613CB6AC27AF8CAD6E6FB34555B (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___trustCA1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb4, void* ___userData5, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState6, const RuntimeMethod* method)
{
	uint32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 7)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker7< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6);
					else
						result = GenericVirtFuncInvoker7< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker7< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6);
					else
						result = VirtFuncInvoker7< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6);
				}
			}
			else
			{
				if (___parameterCount == 6)
				{
					typedef uint32_t (*FunctionPointerType) (RuntimeObject*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___chain0) - 1), ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509verify_explicit_ca_t_BeginInvoke_m83F9DF37B6DCF058C496C26892257C5FE3CAB8F1 (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___trustCA1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb4, void* ___userData5, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState6, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback7, RuntimeObject * ___object8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[8] = {0};
	__d_args[0] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___chain0);
	__d_args[1] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___trustCA1);
	__d_args[2] = ___cn2;
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___cnLen3);
	__d_args[4] = ___cb4;
	__d_args[5] = ___userData5;
	__d_args[6] = ___errorState6;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback7, (RuntimeObject*)___object8);;
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_x509verify_explicit_ca_t_EndInvoke_mC69D3C3E3F677940005907387BF6A51758A67968 (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_gshared_inline (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, const RuntimeMethod* method)
{
	{
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_0 = (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this->get_m_task_0();
		return (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  L_0 = (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED )__this->get_m_configuredTaskAwaiter_0();
		return (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED )L_0;
	}
}
