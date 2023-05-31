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

// WinRT._VectorOfObjectBase`2/CreateT<System.Object,WinRT.Interop.IVectorViewOfObject>
struct CreateT_tA4043C88FB70BF0A0CB9491F819BF7F07CB5EE0C;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// WinRT.ObjectReference`1<WinRT.Interop.IInspectableVftbl>
struct ObjectReference_1_t2F073970332376AC7E81E0ED3BED09A8A621C373;
// WinRT.ObjectReference`1<WinRT.Interop.IIteratorOfObject>
struct ObjectReference_1_tB03D5A92CE3626BA6199F54CF78D8C8FD7D2EB1D;
// WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfObject>
struct ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354;
// WinRT._VectorOfObjectBase`2<System.Object,WinRT.Interop.IVectorViewOfObject>
struct _VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// WinRT.IObjectReference
struct IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76;
// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// WinRT.Interop._get_PropertyAsUInt
struct _get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687;
// WinRT.Interop.IInspectableVftbl/_GetIids
struct _GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6;
// WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName
struct _GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B;
// WinRT.Interop.IInspectableVftbl/_GetTrustLevel
struct _GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501;
// WinRT.Interop.IUnknownVftbl/_AddRef
struct _AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450;
// WinRT.Interop.IUnknownVftbl/_QueryInterface
struct _QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD;
// WinRT.Interop.IUnknownVftbl/_Release
struct _Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6;
// WinRT.Interop.IVectorViewOfObject/_GetAt
struct _GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16;
// WinRT.Interop.IVectorViewOfObject/_GetMany
struct _GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE;
// WinRT.Interop.IVectorViewOfObject/_IndexOf
struct _IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6;

IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_m24E5911AF99865D1499E1974B344705569CEA37F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// WinRT._VectorOfObjectBase`2/Iterator<System.Object,WinRT.Interop.IVectorViewOfObject>
struct Iterator_t0437E1C22CF38A4009735B727E5D44315941DFCA  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<WinRT.Interop.IIteratorOfObject> WinRT._VectorOfObjectBase`2/Iterator::_obj
	ObjectReference_1_tB03D5A92CE3626BA6199F54CF78D8C8FD7D2EB1D * ____obj_0;
	// WinRT._VectorOfObjectBase`2<T,I> WinRT._VectorOfObjectBase`2/Iterator::_parent
	_VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A * ____parent_1;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(Iterator_t0437E1C22CF38A4009735B727E5D44315941DFCA, ____obj_0)); }
	inline ObjectReference_1_tB03D5A92CE3626BA6199F54CF78D8C8FD7D2EB1D * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_tB03D5A92CE3626BA6199F54CF78D8C8FD7D2EB1D ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_tB03D5A92CE3626BA6199F54CF78D8C8FD7D2EB1D * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}

	inline static int32_t get_offset_of__parent_1() { return static_cast<int32_t>(offsetof(Iterator_t0437E1C22CF38A4009735B727E5D44315941DFCA, ____parent_1)); }
	inline _VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A * get__parent_1() const { return ____parent_1; }
	inline _VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A ** get_address_of__parent_1() { return &____parent_1; }
	inline void set__parent_1(_VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A * value)
	{
		____parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IUnknownVftbl/_QueryInterface WinRT.Interop.IUnknownVftbl::QueryInterface
	_QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD * ___QueryInterface_0;
	// WinRT.Interop.IUnknownVftbl/_AddRef WinRT.Interop.IUnknownVftbl::AddRef
	_AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450 * ___AddRef_1;
	// WinRT.Interop.IUnknownVftbl/_Release WinRT.Interop.IUnknownVftbl::Release
	_Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6 * ___Release_2;

public:
	inline static int32_t get_offset_of_QueryInterface_0() { return static_cast<int32_t>(offsetof(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542, ___QueryInterface_0)); }
	inline _QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD * get_QueryInterface_0() const { return ___QueryInterface_0; }
	inline _QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD ** get_address_of_QueryInterface_0() { return &___QueryInterface_0; }
	inline void set_QueryInterface_0(_QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD * value)
	{
		___QueryInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QueryInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_AddRef_1() { return static_cast<int32_t>(offsetof(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542, ___AddRef_1)); }
	inline _AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450 * get_AddRef_1() const { return ___AddRef_1; }
	inline _AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450 ** get_address_of_AddRef_1() { return &___AddRef_1; }
	inline void set_AddRef_1(_AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450 * value)
	{
		___AddRef_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AddRef_1), (void*)value);
	}

	inline static int32_t get_offset_of_Release_2() { return static_cast<int32_t>(offsetof(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542, ___Release_2)); }
	inline _Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6 * get_Release_2() const { return ___Release_2; }
	inline _Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6 ** get_address_of_Release_2() { return &___Release_2; }
	inline void set_Release_2(_Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6 * value)
	{
		___Release_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Release_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_pinvoke
{
	Il2CppMethodPointer ___QueryInterface_0;
	Il2CppMethodPointer ___AddRef_1;
	Il2CppMethodPointer ___Release_2;
};
// Native definition for COM marshalling of WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_com
{
	Il2CppMethodPointer ___QueryInterface_0;
	Il2CppMethodPointer ___AddRef_1;
	Il2CppMethodPointer ___Release_2;
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


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
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


// WinRT._VectorOfObjectBase`2<System.Object,WinRT.Interop.IVectorViewOfObject>
struct _VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<I> WinRT._VectorOfObjectBase`2::_obj
	ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 * ____obj_0;
	// System.Guid WinRT._VectorOfObjectBase`2::_iidIterable
	Guid_t  ____iidIterable_1;
	// WinRT._VectorOfObjectBase`2/CreateT<T,I> WinRT._VectorOfObjectBase`2::_createT
	CreateT_tA4043C88FB70BF0A0CB9491F819BF7F07CB5EE0C * ____createT_2;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(_VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A, ____obj_0)); }
	inline ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}

	inline static int32_t get_offset_of__iidIterable_1() { return static_cast<int32_t>(offsetof(_VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A, ____iidIterable_1)); }
	inline Guid_t  get__iidIterable_1() const { return ____iidIterable_1; }
	inline Guid_t * get_address_of__iidIterable_1() { return &____iidIterable_1; }
	inline void set__iidIterable_1(Guid_t  value)
	{
		____iidIterable_1 = value;
	}

	inline static int32_t get_offset_of__createT_2() { return static_cast<int32_t>(offsetof(_VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A, ____createT_2)); }
	inline CreateT_tA4043C88FB70BF0A0CB9491F819BF7F07CB5EE0C * get__createT_2() const { return ____createT_2; }
	inline CreateT_tA4043C88FB70BF0A0CB9491F819BF7F07CB5EE0C ** get_address_of__createT_2() { return &____createT_2; }
	inline void set__createT_2(CreateT_tA4043C88FB70BF0A0CB9491F819BF7F07CB5EE0C * value)
	{
		____createT_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____createT_2), (void*)value);
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

// WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IUnknownVftbl WinRT.Interop.IInspectableVftbl::IUnknownVftbl
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  ___IUnknownVftbl_0;
	// WinRT.Interop.IInspectableVftbl/_GetIids WinRT.Interop.IInspectableVftbl::GetIids
	_GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6 * ___GetIids_1;
	// WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName WinRT.Interop.IInspectableVftbl::GetRuntimeClassName
	_GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B * ___GetRuntimeClassName_2;
	// WinRT.Interop.IInspectableVftbl/_GetTrustLevel WinRT.Interop.IInspectableVftbl::GetTrustLevel
	_GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501 * ___GetTrustLevel_3;

public:
	inline static int32_t get_offset_of_IUnknownVftbl_0() { return static_cast<int32_t>(offsetof(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C, ___IUnknownVftbl_0)); }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  get_IUnknownVftbl_0() const { return ___IUnknownVftbl_0; }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542 * get_address_of_IUnknownVftbl_0() { return &___IUnknownVftbl_0; }
	inline void set_IUnknownVftbl_0(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  value)
	{
		___IUnknownVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_GetIids_1() { return static_cast<int32_t>(offsetof(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C, ___GetIids_1)); }
	inline _GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6 * get_GetIids_1() const { return ___GetIids_1; }
	inline _GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6 ** get_address_of_GetIids_1() { return &___GetIids_1; }
	inline void set_GetIids_1(_GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6 * value)
	{
		___GetIids_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetIids_1), (void*)value);
	}

	inline static int32_t get_offset_of_GetRuntimeClassName_2() { return static_cast<int32_t>(offsetof(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C, ___GetRuntimeClassName_2)); }
	inline _GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B * get_GetRuntimeClassName_2() const { return ___GetRuntimeClassName_2; }
	inline _GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B ** get_address_of_GetRuntimeClassName_2() { return &___GetRuntimeClassName_2; }
	inline void set_GetRuntimeClassName_2(_GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B * value)
	{
		___GetRuntimeClassName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetRuntimeClassName_2), (void*)value);
	}

	inline static int32_t get_offset_of_GetTrustLevel_3() { return static_cast<int32_t>(offsetof(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C, ___GetTrustLevel_3)); }
	inline _GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501 * get_GetTrustLevel_3() const { return ___GetTrustLevel_3; }
	inline _GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501 ** get_address_of_GetTrustLevel_3() { return &___GetTrustLevel_3; }
	inline void set_GetTrustLevel_3(_GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501 * value)
	{
		___GetTrustLevel_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetTrustLevel_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke
{
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_pinvoke ___IUnknownVftbl_0;
	Il2CppMethodPointer ___GetIids_1;
	Il2CppMethodPointer ___GetRuntimeClassName_2;
	Il2CppMethodPointer ___GetTrustLevel_3;
};
// Native definition for COM marshalling of WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com
{
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_com ___IUnknownVftbl_0;
	Il2CppMethodPointer ___GetIids_1;
	Il2CppMethodPointer ___GetRuntimeClassName_2;
	Il2CppMethodPointer ___GetTrustLevel_3;
};

// WinRT.ModuleReference
struct ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 
{
public:
	// System.Object WinRT.ModuleReference::_module
	RuntimeObject * ____module_0;
	// System.Int32* WinRT.ModuleReference::_refCountPtr
	int32_t* ____refCountPtr_1;
	// System.IntPtr WinRT.ModuleReference::_nativeHandle
	intptr_t ____nativeHandle_2;

public:
	inline static int32_t get_offset_of__module_0() { return static_cast<int32_t>(offsetof(ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4, ____module_0)); }
	inline RuntimeObject * get__module_0() const { return ____module_0; }
	inline RuntimeObject ** get_address_of__module_0() { return &____module_0; }
	inline void set__module_0(RuntimeObject * value)
	{
		____module_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____module_0), (void*)value);
	}

	inline static int32_t get_offset_of__refCountPtr_1() { return static_cast<int32_t>(offsetof(ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4, ____refCountPtr_1)); }
	inline int32_t* get__refCountPtr_1() const { return ____refCountPtr_1; }
	inline int32_t** get_address_of__refCountPtr_1() { return &____refCountPtr_1; }
	inline void set__refCountPtr_1(int32_t* value)
	{
		____refCountPtr_1 = value;
	}

	inline static int32_t get_offset_of__nativeHandle_2() { return static_cast<int32_t>(offsetof(ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4, ____nativeHandle_2)); }
	inline intptr_t get__nativeHandle_2() const { return ____nativeHandle_2; }
	inline intptr_t* get_address_of__nativeHandle_2() { return &____nativeHandle_2; }
	inline void set__nativeHandle_2(intptr_t value)
	{
		____nativeHandle_2 = value;
	}
};

// Native definition for P/Invoke marshalling of WinRT.ModuleReference
struct ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4_marshaled_pinvoke
{
	Il2CppIUnknown* ____module_0;
	int32_t* ____refCountPtr_1;
	intptr_t ____nativeHandle_2;
};
// Native definition for COM marshalling of WinRT.ModuleReference
struct ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4_marshaled_com
{
	Il2CppIUnknown* ____module_0;
	int32_t* ____refCountPtr_1;
	intptr_t ____nativeHandle_2;
};

// WinRT.IObjectReference
struct IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76  : public RuntimeObject
{
public:
	// System.IntPtr WinRT.IObjectReference::ThisPtr
	intptr_t ___ThisPtr_0;
	// WinRT.ModuleReference WinRT.IObjectReference::Module
	ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ___Module_1;
	// WinRT.Interop.IUnknownVftbl WinRT.IObjectReference::<VftblIUnknown>k__BackingField
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  ___U3CVftblIUnknownU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_ThisPtr_0() { return static_cast<int32_t>(offsetof(IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76, ___ThisPtr_0)); }
	inline intptr_t get_ThisPtr_0() const { return ___ThisPtr_0; }
	inline intptr_t* get_address_of_ThisPtr_0() { return &___ThisPtr_0; }
	inline void set_ThisPtr_0(intptr_t value)
	{
		___ThisPtr_0 = value;
	}

	inline static int32_t get_offset_of_Module_1() { return static_cast<int32_t>(offsetof(IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76, ___Module_1)); }
	inline ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  get_Module_1() const { return ___Module_1; }
	inline ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 * get_address_of_Module_1() { return &___Module_1; }
	inline void set_Module_1(ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  value)
	{
		___Module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Module_1))->____module_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CVftblIUnknownU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76, ___U3CVftblIUnknownU3Ek__BackingField_2)); }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  get_U3CVftblIUnknownU3Ek__BackingField_2() const { return ___U3CVftblIUnknownU3Ek__BackingField_2; }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542 * get_address_of_U3CVftblIUnknownU3Ek__BackingField_2() { return &___U3CVftblIUnknownU3Ek__BackingField_2; }
	inline void set_U3CVftblIUnknownU3Ek__BackingField_2(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  value)
	{
		___U3CVftblIUnknownU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CVftblIUnknownU3Ek__BackingField_2))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CVftblIUnknownU3Ek__BackingField_2))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CVftblIUnknownU3Ek__BackingField_2))->___Release_2), (void*)NULL);
		#endif
	}
};


// WinRT.Interop.IVectorViewOfObject
struct IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB 
{
public:
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IVectorViewOfObject::IInspectableVftbl
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  ___IInspectableVftbl_0;
	// WinRT.Interop.IVectorViewOfObject/_GetAt WinRT.Interop.IVectorViewOfObject::GetAt
	_GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16 * ___GetAt_1;
	// WinRT.Interop._get_PropertyAsUInt WinRT.Interop.IVectorViewOfObject::get_Size
	_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 * ___get_Size_2;
	// WinRT.Interop.IVectorViewOfObject/_IndexOf WinRT.Interop.IVectorViewOfObject::IndexOf
	_IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6 * ___IndexOf_3;
	// WinRT.Interop.IVectorViewOfObject/_GetMany WinRT.Interop.IVectorViewOfObject::GetMany
	_GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE * ___GetMany_4;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_GetAt_1() { return static_cast<int32_t>(offsetof(IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB, ___GetAt_1)); }
	inline _GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16 * get_GetAt_1() const { return ___GetAt_1; }
	inline _GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16 ** get_address_of_GetAt_1() { return &___GetAt_1; }
	inline void set_GetAt_1(_GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16 * value)
	{
		___GetAt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetAt_1), (void*)value);
	}

	inline static int32_t get_offset_of_get_Size_2() { return static_cast<int32_t>(offsetof(IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB, ___get_Size_2)); }
	inline _get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 * get_get_Size_2() const { return ___get_Size_2; }
	inline _get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 ** get_address_of_get_Size_2() { return &___get_Size_2; }
	inline void set_get_Size_2(_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 * value)
	{
		___get_Size_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_Size_2), (void*)value);
	}

	inline static int32_t get_offset_of_IndexOf_3() { return static_cast<int32_t>(offsetof(IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB, ___IndexOf_3)); }
	inline _IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6 * get_IndexOf_3() const { return ___IndexOf_3; }
	inline _IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6 ** get_address_of_IndexOf_3() { return &___IndexOf_3; }
	inline void set_IndexOf_3(_IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6 * value)
	{
		___IndexOf_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IndexOf_3), (void*)value);
	}

	inline static int32_t get_offset_of_GetMany_4() { return static_cast<int32_t>(offsetof(IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB, ___GetMany_4)); }
	inline _GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE * get_GetMany_4() const { return ___GetMany_4; }
	inline _GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE ** get_address_of_GetMany_4() { return &___GetMany_4; }
	inline void set_GetMany_4(_GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE * value)
	{
		___GetMany_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetMany_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IVectorViewOfObject
struct IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB_marshaled_pinvoke
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___GetAt_1;
	Il2CppMethodPointer ___get_Size_2;
	Il2CppMethodPointer ___IndexOf_3;
	Il2CppMethodPointer ___GetMany_4;
};
// Native definition for COM marshalling of WinRT.Interop.IVectorViewOfObject
struct IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB_marshaled_com
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___GetAt_1;
	Il2CppMethodPointer ___get_Size_2;
	Il2CppMethodPointer ___IndexOf_3;
	Il2CppMethodPointer ___GetMany_4;
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

// WinRT._VectorOfObjectBase`2/CreateT<System.Object,WinRT.Interop.IVectorViewOfObject>
struct CreateT_tA4043C88FB70BF0A0CB9491F819BF7F07CB5EE0C  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.ObjectReference`1<WinRT.Interop.IInspectableVftbl>
struct ObjectReference_1_t2F073970332376AC7E81E0ED3BED09A8A621C373  : public IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_t2F073970332376AC7E81E0ED3BED09A8A621C373, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_t2F073970332376AC7E81E0ED3BED09A8A621C373, ___Vftbl_4)); }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  get_Vftbl_4() const { return ___Vftbl_4; }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_t2F073970332376AC7E81E0ED3BED09A8A621C373, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_t2F073970332376AC7E81E0ED3BED09A8A621C373, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfObject>
struct ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354  : public IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354, ___Vftbl_4)); }
	inline IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB  get_Vftbl_4() const { return ___Vftbl_4; }
	inline IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetAt_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_Size_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___IndexOf_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetMany_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.Interop._get_PropertyAsUInt
struct _get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IVectorViewOfObject/_GetAt
struct _GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IInspectableVftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t2F073970332376AC7E81E0ED3BED09A8A621C373 * ObjectReference_1_Attach_m24E5911AF99865D1499E1974B344705569CEA37F_gshared (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method);

// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IInspectableVftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_t2F073970332376AC7E81E0ED3BED09A8A621C373 * ObjectReference_1_Attach_m24E5911AF99865D1499E1974B344705569CEA37F (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t2F073970332376AC7E81E0ED3BED09A8A621C373 * (*) (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 , intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_m24E5911AF99865D1499E1974B344705569CEA37F_gshared)(___module0, ___thisPtr1, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 WinRT.Interop._get_PropertyAsUInt::Invoke(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsUInt_Invoke_mBD83C88FADB098F0D0FE6724E8165DEAD3A1087E (_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 * __this, intptr_t ___thisPtr0, uint32_t* ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::ThrowExceptionForHR(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB (int32_t ___errorCode0, const RuntimeMethod* method);
// System.Int32 WinRT.Interop.IVectorViewOfObject/_GetAt::Invoke(System.IntPtr,System.UInt32,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetAt_Invoke_mCE771ED64C5CACBCA136871B9DDBEB7D9058D4D2 (_GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16 * __this, intptr_t ___thisPtr0, uint32_t ___index1, intptr_t* ___result2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T WinRT._VectorOfObjectBase`2<System.Object,WinRT.Interop.IVectorViewOfObject>::_CreateT(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _VectorOfObjectBase_2__CreateT_m12D4726F62B1DACB0FF7B14A98FD30A6D0058EEC_gshared (_VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A * __this, intptr_t* ___instancePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_Attach_m24E5911AF99865D1499E1974B344705569CEA37F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		intptr_t* L_0 = ___instancePtr0;
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)((*(L_0))), (intptr_t)(0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		CreateT_tA4043C88FB70BF0A0CB9491F819BF7F07CB5EE0C * L_2 = (CreateT_tA4043C88FB70BF0A0CB9491F819BF7F07CB5EE0C *)__this->get__createT_2();
		ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 * L_3 = (ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 *)__this->get__obj_0();
		NullCheck(L_3);
		ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  L_4 = (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 )((IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *)L_3)->get_Module_1();
		intptr_t* L_5 = ___instancePtr0;
		ObjectReference_1_t2F073970332376AC7E81E0ED3BED09A8A621C373 * L_6;
		L_6 = ObjectReference_1_Attach_m24E5911AF99865D1499E1974B344705569CEA37F((ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 )L_4, (intptr_t*)(intptr_t*)L_5, /*hidden argument*/ObjectReference_1_Attach_m24E5911AF99865D1499E1974B344705569CEA37F_RuntimeMethod_var);
		NullCheck((CreateT_tA4043C88FB70BF0A0CB9491F819BF7F07CB5EE0C *)L_2);
		RuntimeObject * L_7;
		L_7 = ((  RuntimeObject * (*) (CreateT_tA4043C88FB70BF0A0CB9491F819BF7F07CB5EE0C *, IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((CreateT_tA4043C88FB70BF0A0CB9491F819BF7F07CB5EE0C *)L_2, (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return (RuntimeObject *)L_7;
	}

IL_002b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_8 = V_0;
		return (RuntimeObject *)L_8;
	}
}
// System.Void WinRT._VectorOfObjectBase`2<System.Object,WinRT.Interop.IVectorViewOfObject>::.ctor(WinRT.ObjectReference`1<I>,System.Guid,WinRT._VectorOfObjectBase`2/CreateT<T,I>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _VectorOfObjectBase_2__ctor_m130DDF21A00861F566083E760594B8C36A6B19CC_gshared (_VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A * __this, ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 * ___obj0, Guid_t  ___iidIterable1, CreateT_tA4043C88FB70BF0A0CB9491F819BF7F07CB5EE0C * ___createT2, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		Guid_t  L_1 = ___iidIterable1;
		__this->set__iidIterable_1(L_1);
		CreateT_tA4043C88FB70BF0A0CB9491F819BF7F07CB5EE0C * L_2 = ___createT2;
		__this->set__createT_2(L_2);
		return;
	}
}
// System.Int32 WinRT._VectorOfObjectBase`2<System.Object,WinRT.Interop.IVectorViewOfObject>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _VectorOfObjectBase_2_get_Count_mBCE75CE2F792B752F38FE8799EC24EA19C62F12C_gshared (_VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		NullCheck((_VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A *)__this);
		_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 * L_0;
		L_0 = VirtFuncInvoker0< _get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 * >::Invoke(7 /* WinRT.Interop._get_PropertyAsUInt WinRT._VectorOfObjectBase`2<System.Object,WinRT.Interop.IVectorViewOfObject>::get_get_Size() */, (_VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A *)__this);
		ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 * L_1 = (ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 *)__this->get__obj_0();
		NullCheck(L_1);
		intptr_t L_2 = (intptr_t)((IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *)L_1)->get_ThisPtr_0();
		NullCheck((_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 *)L_0);
		int32_t L_3;
		L_3 = _get_PropertyAsUInt_Invoke_mBD83C88FADB098F0D0FE6724E8165DEAD3A1087E((_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 *)L_0, (intptr_t)L_2, (uint32_t*)(uint32_t*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB((int32_t)L_3, /*hidden argument*/NULL);
		uint32_t L_4 = V_0;
		return (int32_t)L_4;
	}
}
// T WinRT._VectorOfObjectBase`2<System.Object,WinRT.Interop.IVectorViewOfObject>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _VectorOfObjectBase_2_get_Item_m9DD59498AC16597AD2C80B6C9B6FB2D571F1DDDC_gshared (_VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NullCheck((_VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A *)__this);
		_GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16 * L_0;
		L_0 = VirtFuncInvoker0< _GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16 * >::Invoke(8 /* WinRT.Interop.IVectorViewOfObject/_GetAt WinRT._VectorOfObjectBase`2<System.Object,WinRT.Interop.IVectorViewOfObject>::get_GetAt() */, (_VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A *)__this);
		ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 * L_1 = (ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 *)__this->get__obj_0();
		NullCheck(L_1);
		intptr_t L_2 = (intptr_t)((IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *)L_1)->get_ThisPtr_0();
		int32_t L_3 = ___index0;
		NullCheck((_GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16 *)L_0);
		int32_t L_4;
		L_4 = _GetAt_Invoke_mCE771ED64C5CACBCA136871B9DDBEB7D9058D4D2((_GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16 *)L_0, (intptr_t)L_2, (uint32_t)L_3, (intptr_t*)(intptr_t*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB((int32_t)L_4, /*hidden argument*/NULL);
		NullCheck((_VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A *)__this);
		RuntimeObject * L_5;
		L_5 = ((  RuntimeObject * (*) (_VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A *, intptr_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((_VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A *)__this, (intptr_t*)(intptr_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject *)L_5;
	}
}
// System.Collections.Generic.IEnumerator`1<T> WinRT._VectorOfObjectBase`2<System.Object,WinRT.Interop.IVectorViewOfObject>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _VectorOfObjectBase_2_GetEnumerator_m7D0385BD107E50E08EFE0E60DE1F03886C1CF145_gshared (_VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A * __this, const RuntimeMethod* method)
{
	{
		Iterator_t0437E1C22CF38A4009735B727E5D44315941DFCA * L_0 = (Iterator_t0437E1C22CF38A4009735B727E5D44315941DFCA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (Iterator_t0437E1C22CF38A4009735B727E5D44315941DFCA *, _VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_0, (_VectorOfObjectBase_2_t8C5619205C9978085E3818ED25DA578B55917B5A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
