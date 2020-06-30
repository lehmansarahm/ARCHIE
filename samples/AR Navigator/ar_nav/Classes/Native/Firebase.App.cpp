﻿#include "il2cpp-config.h"

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
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// Firebase.AppOptions
struct AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E;
// Firebase.AppOptionsInternal
struct AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682;
// Firebase.AppUtilPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5;
// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC;
// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72;
// Firebase.AppUtilPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t1A089E58729C0B6AFE44A957B1F061841F9BD49A;
// Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF;
// Firebase.FirebaseApp
struct FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986;
// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F;
// Firebase.FirebaseApp/EnableModuleParams
struct EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9;
// Firebase.FirebaseException
struct FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF;
// Firebase.FutureBase
struct FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397;
// Firebase.FutureString
struct FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C;
// Firebase.FutureString/<GetTask>c__AnonStorey0
struct U3CGetTaskU3Ec__AnonStorey0_t8F84D81AE3078B5547B427BBE15133EEE42E5FCC;
// Firebase.FutureString/Action
struct Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195;
// Firebase.FutureString/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064;
// Firebase.InitializationException
struct InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098;
// Firebase.LogUtil
struct LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4;
// Firebase.LogUtil/LogMessageDelegate
struct LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9;
// Firebase.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t4EB9CB59CC38D96C45648D54F15417BA4A52FDCB;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75;
// Firebase.Platform.FirebaseAppUtils
struct FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2;
// Firebase.Platform.IFirebaseAppUtils
struct IFirebaseAppUtils_t377E8825D7E7876483D0A90870A4BD55E2AB432F;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.ApplicationException
struct ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.ArithmeticException
struct ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.FutureString/Action>[]
struct EntryU5BU5D_t8B983CCC7194F997611C171BF7E38EC8183148A2;
// System.Collections.Generic.Dictionary`2/Entry<System.IntPtr,Firebase.FirebaseApp>[]
struct EntryU5BU5D_t8DAFC84D28A0076601739F86084E67F224CA9617;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Firebase.FirebaseApp>[]
struct EntryU5BU5D_t7CFBE92D8C2E9246EE940A8281F3DAA13E896CE0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.FutureString/Action>
struct KeyCollection_tE2B9F56C4FC9A142F8D3BADAF3C920AA6B02C880;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,Firebase.FirebaseApp>
struct KeyCollection_tD3AA9876F37DF7D4026F7CB13402035CA5D2FBEE;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Firebase.FirebaseApp>
struct KeyCollection_t8D7CC505BD4E56FAD08B4548EB3FFC6D45AEE6B4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.FutureString/Action>
struct ValueCollection_t905FCE1127452B2EA338BED9822607E4DD09E297;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.IntPtr,Firebase.FirebaseApp>
struct ValueCollection_t73E211E2E31D76CFD2270B54AE3CE24B39488E47;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Firebase.FirebaseApp>
struct ValueCollection_t83E863291723F45D628511EA91C491D48E86DC3F;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString/Action>
struct Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>
struct Dictionary_2_tE930FC0A0DF3FBFFE9DC13EED210134C371C368E;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_tB3E7C5F256B78F0F0AC4D0D75860F996DF2C125E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.DivideByZeroException
struct DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC;
// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E;
// System.EventHandler
struct EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C;
// System.Exception
struct Exception_t;
// System.Func`1<Firebase.DependencyStatus>
struct Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572;
// System.Func`1<System.Boolean>
struct Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F;
// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t8A17E987C73781D20C93E1140DAE0B3595A19A4B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_t1C8755364A4E277E5036A8167830AA7A8544A2C9;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.IOException
struct IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidCastException
struct InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NullReferenceException
struct NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.OutOfMemoryException
struct OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7;
// System.OverflowException
struct OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Principal.IPrincipal
struct IPrincipal_t63FD7F58FBBE134C8FE4D31710AAEA00B000F0BF;
// System.String
struct String_t;
// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.ExecutionContext
struct ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70;
// System.Threading.InternalThread
struct InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t3ECF7B56E418D2A3FFC4E551B9DA6A7E38C7D304;
// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t1EC236EC6D34F0BBC2E87658D2A11017407240D4;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_tCE3276D3F820150AD890B4700B08839B1F60B2EB;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C;
// System.Threading.Thread
struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Uri/UriInfo
struct UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E;
// System.UriParser
struct UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// System.WeakReference
struct WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D;

IL2CPP_EXTERN_C RuntimeClass* Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllNotFoundException_tED90B6A78D4CF5AA565288E0BA88A990062A7F76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseLogger_t0AB9A6D2522CBB2F7D180395382228A4759420DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogLevel_tC69575EF4D1F372E563D26D15A24B00EA684B4F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_t1A089E58729C0B6AFE44A957B1F061841F9BD49A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetTaskU3Ec__AnonStorey0_t8F84D81AE3078B5547B427BBE15133EEE42E5FCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriFormatException_t86B375C9E56DBEE5BD4CC9D71C4C40AE5141808A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9;
IL2CPP_EXTERN_C String_t* _stringLiteral0AF91264350EDD04599277281E913A91CF6C421C;
IL2CPP_EXTERN_C String_t* _stringLiteral0E39F0F4BCD23A37D3C8F651693F4FEA5BFDA53C;
IL2CPP_EXTERN_C String_t* _stringLiteral1059C763F4D1FEA158A4704EFDF2B7A33A9CC95C;
IL2CPP_EXTERN_C String_t* _stringLiteral11944A902C19EC17AC78B47A2CECA0F3CC5A5550;
IL2CPP_EXTERN_C String_t* _stringLiteral13A71403030E940CFEEB21F057C3F67F0EA92AE9;
IL2CPP_EXTERN_C String_t* _stringLiteral159617DFE3F4142660B9F0126DDBC2ACBB5061DD;
IL2CPP_EXTERN_C String_t* _stringLiteral18C7CBD7CCB024293D62988EF9E702BC76D1F431;
IL2CPP_EXTERN_C String_t* _stringLiteral20063AD9053289CECAA20AE630ED2DD758282A07;
IL2CPP_EXTERN_C String_t* _stringLiteral2F887DEF33825E52FFBCCA83446CFD6A6F676FF7;
IL2CPP_EXTERN_C String_t* _stringLiteral336D7DBE03B2D705B400B88F1319E4F79E12E234;
IL2CPP_EXTERN_C String_t* _stringLiteral3D48292E4D2714F11C2ADF276B610971E068A519;
IL2CPP_EXTERN_C String_t* _stringLiteral451AE7A620831DCD0B79B56E532CB43BB0303DB1;
IL2CPP_EXTERN_C String_t* _stringLiteral476EE0F6AF1D78AA2A3D9A587E8D5EE7E31229F6;
IL2CPP_EXTERN_C String_t* _stringLiteral48C8A82DFF32409C5DEA7D00B9C5CA211BC2AF5F;
IL2CPP_EXTERN_C String_t* _stringLiteral519E5A114736C3C9A5709C059C9D5F69D5683AB2;
IL2CPP_EXTERN_C String_t* _stringLiteral51E550DA50C97109C3E0140FDE272F31CA98316F;
IL2CPP_EXTERN_C String_t* _stringLiteral528D7DFFA8489D34C106F15B26C0E12A04DF8E1E;
IL2CPP_EXTERN_C String_t* _stringLiteral539AB6A1CD38B85F28B2E27437FD072B95F7FE67;
IL2CPP_EXTERN_C String_t* _stringLiteral57EBAA87366F9BCD0AF6E1676E4580DD9051791E;
IL2CPP_EXTERN_C String_t* _stringLiteral58F6F794C17DC62ACACC3D747BF2454A6DED98C5;
IL2CPP_EXTERN_C String_t* _stringLiteral598197CCAA30D30058302EAC83E6F056E19A36DD;
IL2CPP_EXTERN_C String_t* _stringLiteral5FC4A6E79231727C4B682F7D23BE9AC0C24A63BC;
IL2CPP_EXTERN_C String_t* _stringLiteral66A36E77FD002579809717841F998F4D21CD5913;
IL2CPP_EXTERN_C String_t* _stringLiteral66D9B558F41B30033E4D62BF47D52885E31627E4;
IL2CPP_EXTERN_C String_t* _stringLiteral6D613A1EE01EEC4C0F8CA66DF0DB71DCA0C6E1CF;
IL2CPP_EXTERN_C String_t* _stringLiteral6F3CCDACEBA948F7DF9DDA28FCD779020BE5E689;
IL2CPP_EXTERN_C String_t* _stringLiteral70E63EA7A068A75401053DE42737AB858D9A361B;
IL2CPP_EXTERN_C String_t* _stringLiteral7A6CF23C929649A76C4615C875599104B22DAB2D;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE741B3F1964E9C3BEE79227C0BE4F68241306B;
IL2CPP_EXTERN_C String_t* _stringLiteral85AD387E48AD39FF88DF6E49A317E1F0FA32EBBA;
IL2CPP_EXTERN_C String_t* _stringLiteral8DE36E4005BD5F6F460D1074B3B6D78F7EB671CD;
IL2CPP_EXTERN_C String_t* _stringLiteral9A7D4E0687B14E2B7CDA406900B802782CD50A62;
IL2CPP_EXTERN_C String_t* _stringLiteral9C791F8DDC4DA5AC57A9309ADF5028AAAB20837F;
IL2CPP_EXTERN_C String_t* _stringLiteral9CA2E913BC29D3389CD09BC296EF7B55FA965C2A;
IL2CPP_EXTERN_C String_t* _stringLiteralA459DFF3012DA591453989E5860A6FD825F63CE3;
IL2CPP_EXTERN_C String_t* _stringLiteralA46B5148392494C33F967127F6C1E2FD80C52D6F;
IL2CPP_EXTERN_C String_t* _stringLiteralA804D931F27BE6EF35191274DAF148C0B4FCEEF6;
IL2CPP_EXTERN_C String_t* _stringLiteralA9B90A89A55DD40421790C6CAB7978713EE80114;
IL2CPP_EXTERN_C String_t* _stringLiteralAB63B0D0030E5BE532C25B337995B7D31C5EDB8C;
IL2CPP_EXTERN_C String_t* _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC;
IL2CPP_EXTERN_C String_t* _stringLiteralB16542FDAE074C08AAF90B6FCE2F6499796EEDAD;
IL2CPP_EXTERN_C String_t* _stringLiteralB38FACEA8F68D59D17CAC7EDBA504E87C4DAA11F;
IL2CPP_EXTERN_C String_t* _stringLiteralC8DED8E76597159EA4EA8D7343435455DB3F6CD0;
IL2CPP_EXTERN_C String_t* _stringLiteralCFD695F6EEAE0FECD5554A0C10150C42343EDB4B;
IL2CPP_EXTERN_C String_t* _stringLiteralD02812AF2387E64D9103A3DD317BFA4E61E1DE35;
IL2CPP_EXTERN_C String_t* _stringLiteralD0B1131C230C9C86CF4F738FD71E80F0FA2D8CE5;
IL2CPP_EXTERN_C String_t* _stringLiteralD458E99D6C5F537738C7825A92ADFAE5512143C8;
IL2CPP_EXTERN_C String_t* _stringLiteralE01285EFE8EB80BBD0379DC15101B8150E9800E1;
IL2CPP_EXTERN_C String_t* _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A;
IL2CPP_EXTERN_C String_t* _stringLiteralEAF60E4A0C399C9935413E06474ED61E73CE5A81;
IL2CPP_EXTERN_C String_t* _stringLiteralEFFE931B09C80F8C15FB10A011087AE818AD256B;
IL2CPP_EXTERN_C String_t* _stringLiteralF3368570EE5DB7FA93890C049EB03DD764108E6C;
IL2CPP_EXTERN_C String_t* _stringLiteralF4CAFE446CECC59803EAAF5FB75D7C7C076A9BB3;
IL2CPP_EXTERN_C String_t* _stringLiteralF6C5923BE906990A579931C08BE3165486CD2748;
IL2CPP_EXTERN_C String_t* _stringLiteralFB1AE274028B6974E9FDF9D77F5D12C65C8CD4D4;
IL2CPP_EXTERN_C String_t* _stringLiteralFF3B9F51CC933B6E8F42D024FAE32EF10192BE29;
IL2CPP_EXTERN_C const RuntimeMethod* AppOptionsInternal_GetDatabaseUrlInternal_mCF8AF64B1B1DE481F57652D5FDD5A2604DB9BC6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppOptionsInternal_get_ApiKey_m28D907FCBD5DDF8D69DCF49B239E2625314C0C00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppOptionsInternal_get_AppId_m48CBD6852621E85DF9F09CF23D700A7977423CC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppOptionsInternal_get_MessageSenderId_mD6223C71D2A6E3EF541C9545E7325BF9DB28CA86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppOptionsInternal_get_PackageName_m4311E1F6D19C5B937092B41899851411EBD77C92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppOptionsInternal_get_ProjectId_m91E98CD596C649395DA5AC4E58A834B0690C2CCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppOptionsInternal_get_StorageBucket_m4F400D5B86B92623BDCFAEB5EA84BA4CAF4FAB06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_AppEnableLogCallback_m9FA92B86E6A3653121CBD5C2CA2DDD2C31B2BF04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_GetEnabledAppCallbackByName_m2C063D950392679E20AD11BD5169956A02E78FF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_PollCallbacks_mADFB4BC7209554590C31E37F8C08562E463F9D59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_SetEnabledAllAppCallbacks_mC850A20177310AC3A44E421CB2F3C0ECE1CC9574_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_SetEnabledAppCallbackByName_m98EF16C68B04D64D2CBB59FE074711D5A06B3BD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_SetLogFunction_m2FD7E09A6AED976A0754E2E993786AAA5834B084_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m13F20B36BA2547B241E0A4FBD2B59AF376D184E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m8BCB218068F462B08A669960F27A69DFF2C7F5FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mD13DFEE994547121349DF25AFB8C66109EDF6F50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m6891153CBD9B055565200BCE3E921E28CA8F3A50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m9D482CC002D50200D99ED93589F27BD205B29951_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA942ECF01C92960B7AC2A8A21C9645DB220CA12C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m124BC1DB68E6456163A4BD3D3F8CFCC09CD3D78C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m75D77D1388F49077CA7C8049E3373DC2CDF94B16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mDBD86D9CDDF553CFA2F0F9DC60603CBE7A62F2DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m0515F927B62810FC494B0582D39BB618A8DCAA5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m5A4570138512C5E9062AA1F5914AF6C8B1F48F6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m123A8D827D7B9CDF569B126376E779BB56D07DDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m515EA1D865B2A27016C1EB39F63221194E999D9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m5F7A387A231A2E62D7FBB45D7E13F5F5083D4E2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_AppSetDefaultConfigPath_m53566882606C7038E0C2E2AD4182628B50D96F80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_CreateAndTrack_m9432CF67F169FAFC2D57F7C8E2460CBE174CB6F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_CreateInternal_m039014CF3B7DB1B092068767F49B9E0C9D9C11D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_InitializeCrashlyticsIfPresent_mEC7562503FC321F112B1B90E0C7709175C1BA786_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_RegisterLibraryInternal_m33F0D35CAD2A634673F6A9D1610E0122FFB88637_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_ReleaseReferenceInternal_mDDCBE7D04450E4A53C0708998720842CC840EF07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_ThrowIfCheckDependenciesRunning_m146122F83C37BC92E9D26A680740ACE69176D3F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_ThrowIfNull_m3502997B4E18EB792AD9ACE01EC5137CD9639E37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_TranslateDllNotFoundException_mC6F04F02034B21A8A258012156CA7F263FB594F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_U3CCreateAndTrackU3Em__1_mF4B85EE912269BF441F99AF1E4E7881443CD7C75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_U3CCreateU3Em__0_mD5F1CE4EE3725E0E57705E4941C5E38BCBB0C518_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_get_DefaultName_mBA7DA11C2791078BAA59206A945890E958546168_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_get_NameInternal_m2752D24CD4D632B51C27AA926E3527828A19B6A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_options_m72A1560C41F3822AC08EC57C8B2D6FBB4248EE1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseHandler_RunOnMainThread_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m7DDD35DE42BBD8FC4FBCDBBD936EBACE47E03440_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m36F8615CDD8E019D5C4E92D96E275F7A8836B86F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureBase_error_m70CFE004FF942C34ED11D221D0B6033AD40C1825_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureBase_error_message_m12EFFA84132AB25450D3D3F349A414EF597CCCE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureBase_status_mD675FFD3FAE10D36169C16590EE3C6F1861DD136_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureString_GetResult_mA8D502925B06DBE5B32FEFA08C37E1959A9531FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureString_SWIG_CompletionDispatcher_m86EEC251866153D32AEE9B99F7BD7C6E4CC3CECD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureString_SWIG_FreeCompletionData_m728EE6C63C44CD43F72D2AC8D1AE44A5F4D9DEBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureString_SWIG_OnCompletion_m496492F7C240FE1FB23AF0223E100D95981FA0A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureString_ThrowIfDisposed_m7418D0866866397DB8B214A7667285ED7A874664_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LogUtil_LogMessageFromCallback_m51E15E038FD24735B401F08AE91DA68177B9C1F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_mFE7727F29EF454DC82F7773C7DCA7DC4B9DCE688_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_mA47B953C5D09FDB764911484316FFDAAB4B0BE4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_m1DAEF08C4FAD2181E64B920B843C903538D09327_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m2DDA9CC01A5B010A4D682F0615F89EFEA2D3A385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m66D325C658E4D4A6F84E8BFF2A532FAAE96D5B5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_mEBC984AA86593D05467BC12012A3E1E33953ADED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_m59B1FD0225B32443CC0685A249F0A301693C2744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD9473B8DC134A0E6BCE15305DC2E12E53AF6236E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_mB08BAC65C0DB20E0361AD747E5009B62EAACC5F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_mF62073712A93DD7570BEC306E4E2DF6049F31EA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m5F381925BBBE581ADE8384B76FEA7D208B69ED4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_m71E895F1202CBDC1909619B221AC6AB3276D7AF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_m8FDE1CE2A3D3EB2DA8C7C12E28DD90C15E84D946_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m8EC608208492B67293B9C2AC06D7B85B5B1B26E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_m86001767F702444249A31BCD88319B9B3F6F9393_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_mF4B58DD5B3526C5E91D71786D528CC4ADADCF243_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetCanceled_m21ECE34BE990CF5720FE4EDF333FA8943E535157_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_m58A8FA255D94C81F97A8B9D279A96F53AD196789_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m54E364FB76FEE0422C52826F502FCC7C7E0C07B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m4816A3753F0A96EF52B86E56D4DB3185881424D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m6BFB69D9B960DF3EB72B79FA840F0B9E8B300BA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m23AD6C5F8C58F0B1C6C8126A3C744AA076422966_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t AppOptionsInternal_Dispose_m03120579869C6DD7EF1A482582E28D9EDFAFA404_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppOptionsInternal_GetDatabaseUrlInternal_mCF8AF64B1B1DE481F57652D5FDD5A2604DB9BC6B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppOptionsInternal_get_ApiKey_m28D907FCBD5DDF8D69DCF49B239E2625314C0C00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppOptionsInternal_get_AppId_m48CBD6852621E85DF9F09CF23D700A7977423CC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppOptionsInternal_get_DatabaseUrl_m64D08A736D02EEADF4E70BCCBBA2C30C454A2923_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppOptionsInternal_get_MessageSenderId_mD6223C71D2A6E3EF541C9545E7325BF9DB28CA86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppOptionsInternal_get_PackageName_m4311E1F6D19C5B937092B41899851411EBD77C92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppOptionsInternal_get_ProjectId_m91E98CD596C649395DA5AC4E58A834B0690C2CCA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppOptionsInternal_get_StorageBucket_m4F400D5B86B92623BDCFAEB5EA84BA4CAF4FAB06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppUtilPINVOKE__cctor_m323C5F5D15D57DD7481971BF43495E4BB0E232AD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppUtil_AppEnableLogCallback_m9FA92B86E6A3653121CBD5C2CA2DDD2C31B2BF04_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppUtil_GetEnabledAppCallbackByName_m2C063D950392679E20AD11BD5169956A02E78FF1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppUtil_PollCallbacks_mADFB4BC7209554590C31E37F8C08562E463F9D59_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppUtil_SetEnabledAllAppCallbacks_mC850A20177310AC3A44E421CB2F3C0ECE1CC9574_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppUtil_SetEnabledAppCallbackByName_m98EF16C68B04D64D2CBB59FE074711D5A06B3BD7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppUtil_SetLogFunction_m2FD7E09A6AED976A0754E2E993786AAA5834B084_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ErrorMessages__cctor_m73B330060F5C8675C915DE990225D000F7626A1C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ErrorMessages_get_DependencyNotFoundErrorMessage_m6457663EBE0DBF1CFF53BD25AD45A51A8619CE66_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ErrorMessages_get_DllNotFoundExceptionErrorMessage_m5238B46BE37EB715B9E70E09BB06784D46F63D01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAppUtils_GetLogLevel_m05DD590ACE45E734BDC26078599A47E6730CB2E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAppUtils_TranslateDllNotFoundException_mD61541C79FB05EDC2630F3C73CE0094C173E0D5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAppUtils__cctor_m4837FB41B2F4A0BE41D86C217177EADFA3C9795F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAppUtils_get_Instance_m9960DF708E432F14B1D2F4C78B388E853953B094Firebase_App_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAppUtils_get_Instance_m9960DF708E432F14B1D2F4C78B388E853953B094_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_AddReference_m4E500E124497E17C5C4964F2CAEBDEB2ED3E8680_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_AppSetDefaultConfigPath_m53566882606C7038E0C2E2AD4182628B50D96F80_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_CreateAndTrack_m9432CF67F169FAFC2D57F7C8E2460CBE174CB6F7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_CreateInternal_m039014CF3B7DB1B092068767F49B9E0C9D9C11D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_Create_m3ED22D074FC30B7DF31369F927C221AA9B6B1500_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_Dispose_m633E7DCA88EC8FEDEB70D80B5A60CA4CF2AD6460_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_GetInstance_m0C93898925E16C167E18D8F8351ECC375A46C75C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_InitializeAppUtilCallbacks_mB1F7BFC4360EAFCA4E1726B81452753734568FE8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_InitializeCrashlyticsIfPresent_mEC7562503FC321F112B1B90E0C7709175C1BA786_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_IsCheckDependenciesRunning_mE1A442A699DB9BEDC328975FC56B51C3769A6B8D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_OnAllAppsDestroyed_m7C30233D9A14F2C241F723C40A62E739D6A9453B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_RegisterLibraryInternal_m33F0D35CAD2A634673F6A9D1610E0122FFB88637_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_ReleaseReferenceInternal_mDDCBE7D04450E4A53C0708998720842CC840EF07_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_RemoveReference_m82863E170CCFE42B64CE8B39E639570B549CC4AD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_ThrowIfCheckDependenciesRunning_m146122F83C37BC92E9D26A680740ACE69176D3F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_ThrowIfNull_m3502997B4E18EB792AD9ACE01EC5137CD9639E37_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_TranslateDllNotFoundException_mC6F04F02034B21A8A258012156CA7F263FB594F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_U3CCreateAndTrackU3Em__1_mF4B85EE912269BF441F99AF1E4E7881443CD7C75_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_U3CCreateU3Em__0_mD5F1CE4EE3725E0E57705E4941C5E38BCBB0C518_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_UrlStringToUri_m09F6D262D86EE9898214D35510E1E8CEBF53D0DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_WeakReferenceGetTarget_mC676B673AB674077A1A40272E96E51C5A25DC30A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp__cctor_m977F4273E73E9960D8B02660FAB2D1B457AD8F35_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_add_AppDisposed_m1CA5C0D303E4A5536DFDBE3356A900B3B966D4B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_getCPtr_mF922A07C69469D0EB5A268A9278C495805BDCA4F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_get_DefaultInstance_m46ACEAEC916D0AC3014302498F51607462EE5C63_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_get_DefaultName_mBA7DA11C2791078BAA59206A945890E958546168_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_get_LogLevel_mA1462E02A6B78D0F598CF9D3F22CAF13D9E29E8D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_get_NameInternal_m2752D24CD4D632B51C27AA926E3527828A19B6A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_get_Options_mDD4642CC794D4339D5AF6CC2A3607A9FE52F81E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_options_m72A1560C41F3822AC08EC57C8B2D6FBB4248EE1B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_remove_AppDisposed_mE9EBC4903F93C997C038F8B12940A3D658624EA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseException__ctor_mB31E783657F428BA72B055DF8A4CE6EA6996996C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FutureBase_Dispose_mE480130D78254414AA6A59E2FA63B9AFC4AC01BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FutureBase_error_m70CFE004FF942C34ED11D221D0B6033AD40C1825_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FutureBase_error_message_m12EFFA84132AB25450D3D3F349A414EF597CCCE3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FutureBase_status_mD675FFD3FAE10D36169C16590EE3C6F1861DD136_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FutureString_Dispose_mA5531960B498D68D9A7253FB97ABB654080E782F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FutureString_GetResult_mA8D502925B06DBE5B32FEFA08C37E1959A9531FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FutureString_GetTask_mE15192AC5EC101E6836F1F806E3CD9B91950B647_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FutureString_SWIG_CompletionDispatcher_m86EEC251866153D32AEE9B99F7BD7C6E4CC3CECD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FutureString_SWIG_FreeCompletionData_m728EE6C63C44CD43F72D2AC8D1AE44A5F4D9DEBB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FutureString_SWIG_OnCompletion_m496492F7C240FE1FB23AF0223E100D95981FA0A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FutureString_SetOnCompletionCallback_m7D091BF76B1A886948A923C0DB78F9D7ABF92329_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FutureString_ThrowIfDisposed_m7418D0866866397DB8B214A7667285ED7A874664_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FutureString__cctor_m9FCF43798D7BA44DCB1F0EB1E3AFADF13337ECBD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FutureString__ctor_m061489D0A1588D9DB38616FAB55A0BAD34485991_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InitializationException__ctor_m3BBD8A30C4B1757E8686AB762DBA7C7B6CB81591_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InitializationException__ctor_m6778555FEC2C05FCA0FF20B33431B2C076054FA6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InitializationException__ctor_m6A39CAC13E9D758C410431462099CF1D901B45FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LogMessageDelegate_BeginInvoke_m2046879E66D9C09D9E8CC40403E97DE5D0804B2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LogUtil_Dispose_m3FEA1C02530EC4E814E7A724D26377919C5BB7D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LogUtil_InitializeLogging_m3DC0D9A5186F8E0E1972761477DB5461FFCEC354_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LogUtil_LogMessageFromCallback_m51E15E038FD24735B401F08AE91DA68177B9C1F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LogUtil_LogMessage_mE0D4736B7C636462B2AD246F65EFAF5F1785822F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LogUtil__cctor_m6E595A5CBB8B82B7BD71A4852DF65729B15B21B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LogUtil__ctor_mAFE789D82E7A48CFB20437F1C33A2FFAA2A61648_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingApplicationException_mFE7727F29EF454DC82F7773C7DCA7DC4B9DCE688_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentException_mA47B953C5D09FDB764911484316FFDAAB4B0BE4A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentNullException_m1DAEF08C4FAD2181E64B920B843C903538D09327_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m2DDA9CC01A5B010A4D682F0615F89EFEA2D3A385_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArithmeticException_m66D325C658E4D4A6F84E8BFF2A532FAAE96D5B5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingDivideByZeroException_mEBC984AA86593D05467BC12012A3E1E33953ADED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingIOException_m59B1FD0225B32443CC0685A249F0A301693C2744_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD9473B8DC134A0E6BCE15305DC2E12E53AF6236E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingInvalidCastException_mB08BAC65C0DB20E0361AD747E5009B62EAACC5F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingInvalidOperationException_mF62073712A93DD7570BEC306E4E2DF6049F31EA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingNullReferenceException_m5F381925BBBE581ADE8384B76FEA7D208B69ED4D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingOutOfMemoryException_m71E895F1202CBDC1909619B221AC6AB3276D7AF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingOverflowException_m8FDE1CE2A3D3EB2DA8C7C12E28DD90C15E84D946_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingSystemException_m8EC608208492B67293B9C2AC06D7B85B5B1B26E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper__cctor_m0CCC85BDED6DE2F7F696C32F04FBFD3AAE6DCABF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException_Set_m86001767F702444249A31BCD88319B9B3F6F9393_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGStringHelper__cctor_mB179B7CB11DDEA60FCC60E324B32E47BDBA6E4B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIG_CompletionDelegate_BeginInvoke_m13C1B5D998ED859B44ABAE56C0F0AC67AC5976AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m23AD6C5F8C58F0B1C6C8126A3C744AA076422966_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VersionInfo_get_SdkVersion_m55C4F788028216AA98C44DE5D9964D7A236D4E93_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tBD7AD5CB799C79D7E03DCC627F568B0DA5A16677 
{
public:

public:
};


// System.Object


// Firebase.AppOptions
struct  AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E  : public RuntimeObject
{
public:
	// System.Uri Firebase.AppOptions::<DatabaseUrl>k__BackingField
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___U3CDatabaseUrlU3Ek__BackingField_0;
	// System.String Firebase.AppOptions::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_1;
	// System.String Firebase.AppOptions::<ApiKey>k__BackingField
	String_t* ___U3CApiKeyU3Ek__BackingField_2;
	// System.String Firebase.AppOptions::<MessageSenderId>k__BackingField
	String_t* ___U3CMessageSenderIdU3Ek__BackingField_3;
	// System.String Firebase.AppOptions::<StorageBucket>k__BackingField
	String_t* ___U3CStorageBucketU3Ek__BackingField_4;
	// System.String Firebase.AppOptions::<ProjectId>k__BackingField
	String_t* ___U3CProjectIdU3Ek__BackingField_5;
	// System.String Firebase.AppOptions::<PackageName>k__BackingField
	String_t* ___U3CPackageNameU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDatabaseUrlU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E, ___U3CDatabaseUrlU3Ek__BackingField_0)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_U3CDatabaseUrlU3Ek__BackingField_0() const { return ___U3CDatabaseUrlU3Ek__BackingField_0; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_U3CDatabaseUrlU3Ek__BackingField_0() { return &___U3CDatabaseUrlU3Ek__BackingField_0; }
	inline void set_U3CDatabaseUrlU3Ek__BackingField_0(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___U3CDatabaseUrlU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDatabaseUrlU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E, ___U3CAppIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_1() const { return ___U3CAppIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_1() { return &___U3CAppIdU3Ek__BackingField_1; }
	inline void set_U3CAppIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppIdU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CApiKeyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E, ___U3CApiKeyU3Ek__BackingField_2)); }
	inline String_t* get_U3CApiKeyU3Ek__BackingField_2() const { return ___U3CApiKeyU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CApiKeyU3Ek__BackingField_2() { return &___U3CApiKeyU3Ek__BackingField_2; }
	inline void set_U3CApiKeyU3Ek__BackingField_2(String_t* value)
	{
		___U3CApiKeyU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CApiKeyU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMessageSenderIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E, ___U3CMessageSenderIdU3Ek__BackingField_3)); }
	inline String_t* get_U3CMessageSenderIdU3Ek__BackingField_3() const { return ___U3CMessageSenderIdU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CMessageSenderIdU3Ek__BackingField_3() { return &___U3CMessageSenderIdU3Ek__BackingField_3; }
	inline void set_U3CMessageSenderIdU3Ek__BackingField_3(String_t* value)
	{
		___U3CMessageSenderIdU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageSenderIdU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStorageBucketU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E, ___U3CStorageBucketU3Ek__BackingField_4)); }
	inline String_t* get_U3CStorageBucketU3Ek__BackingField_4() const { return ___U3CStorageBucketU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CStorageBucketU3Ek__BackingField_4() { return &___U3CStorageBucketU3Ek__BackingField_4; }
	inline void set_U3CStorageBucketU3Ek__BackingField_4(String_t* value)
	{
		___U3CStorageBucketU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStorageBucketU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProjectIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E, ___U3CProjectIdU3Ek__BackingField_5)); }
	inline String_t* get_U3CProjectIdU3Ek__BackingField_5() const { return ___U3CProjectIdU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CProjectIdU3Ek__BackingField_5() { return &___U3CProjectIdU3Ek__BackingField_5; }
	inline void set_U3CProjectIdU3Ek__BackingField_5(String_t* value)
	{
		___U3CProjectIdU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProjectIdU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPackageNameU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E, ___U3CPackageNameU3Ek__BackingField_6)); }
	inline String_t* get_U3CPackageNameU3Ek__BackingField_6() const { return ___U3CPackageNameU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CPackageNameU3Ek__BackingField_6() { return &___U3CPackageNameU3Ek__BackingField_6; }
	inline void set_U3CPackageNameU3Ek__BackingField_6(String_t* value)
	{
		___U3CPackageNameU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPackageNameU3Ek__BackingField_6), (void*)value);
	}
};


// Firebase.AppUtil
struct  AppUtil_t917D9D0DFFAB4A07AA963BFE00A9054DE22EBD54  : public RuntimeObject
{
public:

public:
};


// Firebase.AppUtilPINVOKE
struct  AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51  : public RuntimeObject
{
public:

public:
};

struct AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_StaticFields
{
public:
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper Firebase.AppUtilPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5 * ___swigExceptionHelper_0;
	// Firebase.AppUtilPINVOKE_SWIGStringHelper Firebase.AppUtilPINVOKE::swigStringHelper
	SWIGStringHelper_t1A089E58729C0B6AFE44A957B1F061841F9BD49A * ___swigStringHelper_1;

public:
	inline static int32_t get_offset_of_swigExceptionHelper_0() { return static_cast<int32_t>(offsetof(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_StaticFields, ___swigExceptionHelper_0)); }
	inline SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5 * get_swigExceptionHelper_0() const { return ___swigExceptionHelper_0; }
	inline SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5 ** get_address_of_swigExceptionHelper_0() { return &___swigExceptionHelper_0; }
	inline void set_swigExceptionHelper_0(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5 * value)
	{
		___swigExceptionHelper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigExceptionHelper_0), (void*)value);
	}

	inline static int32_t get_offset_of_swigStringHelper_1() { return static_cast<int32_t>(offsetof(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_StaticFields, ___swigStringHelper_1)); }
	inline SWIGStringHelper_t1A089E58729C0B6AFE44A957B1F061841F9BD49A * get_swigStringHelper_1() const { return ___swigStringHelper_1; }
	inline SWIGStringHelper_t1A089E58729C0B6AFE44A957B1F061841F9BD49A ** get_address_of_swigStringHelper_1() { return &___swigStringHelper_1; }
	inline void set_swigStringHelper_1(SWIGStringHelper_t1A089E58729C0B6AFE44A957B1F061841F9BD49A * value)
	{
		___swigStringHelper_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigStringHelper_1), (void*)value);
	}
};


// Firebase.AppUtilPINVOKE_SWIGExceptionHelper
struct  SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5  : public RuntimeObject
{
public:

public:
};

struct SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields
{
public:
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___applicationDelegate_0;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___arithmeticDelegate_1;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___divideByZeroDelegate_2;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___indexOutOfRangeDelegate_3;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___invalidCastDelegate_4;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___invalidOperationDelegate_5;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___ioDelegate_6;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___nullReferenceDelegate_7;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___outOfMemoryDelegate_8;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___overflowDelegate_9;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___systemDelegate_10;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * ___argumentDelegate_11;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * ___argumentNullDelegate_12;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * ___argumentOutOfRangeDelegate_13;

public:
	inline static int32_t get_offset_of_applicationDelegate_0() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields, ___applicationDelegate_0)); }
	inline ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * get_applicationDelegate_0() const { return ___applicationDelegate_0; }
	inline ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 ** get_address_of_applicationDelegate_0() { return &___applicationDelegate_0; }
	inline void set_applicationDelegate_0(ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * value)
	{
		___applicationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_arithmeticDelegate_1() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields, ___arithmeticDelegate_1)); }
	inline ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * get_arithmeticDelegate_1() const { return ___arithmeticDelegate_1; }
	inline ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 ** get_address_of_arithmeticDelegate_1() { return &___arithmeticDelegate_1; }
	inline void set_arithmeticDelegate_1(ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * value)
	{
		___arithmeticDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arithmeticDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_divideByZeroDelegate_2() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields, ___divideByZeroDelegate_2)); }
	inline ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * get_divideByZeroDelegate_2() const { return ___divideByZeroDelegate_2; }
	inline ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 ** get_address_of_divideByZeroDelegate_2() { return &___divideByZeroDelegate_2; }
	inline void set_divideByZeroDelegate_2(ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * value)
	{
		___divideByZeroDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___divideByZeroDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_indexOutOfRangeDelegate_3() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields, ___indexOutOfRangeDelegate_3)); }
	inline ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * get_indexOutOfRangeDelegate_3() const { return ___indexOutOfRangeDelegate_3; }
	inline ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 ** get_address_of_indexOutOfRangeDelegate_3() { return &___indexOutOfRangeDelegate_3; }
	inline void set_indexOutOfRangeDelegate_3(ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * value)
	{
		___indexOutOfRangeDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexOutOfRangeDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_invalidCastDelegate_4() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields, ___invalidCastDelegate_4)); }
	inline ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * get_invalidCastDelegate_4() const { return ___invalidCastDelegate_4; }
	inline ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 ** get_address_of_invalidCastDelegate_4() { return &___invalidCastDelegate_4; }
	inline void set_invalidCastDelegate_4(ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * value)
	{
		___invalidCastDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidCastDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of_invalidOperationDelegate_5() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields, ___invalidOperationDelegate_5)); }
	inline ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * get_invalidOperationDelegate_5() const { return ___invalidOperationDelegate_5; }
	inline ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 ** get_address_of_invalidOperationDelegate_5() { return &___invalidOperationDelegate_5; }
	inline void set_invalidOperationDelegate_5(ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * value)
	{
		___invalidOperationDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidOperationDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_ioDelegate_6() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields, ___ioDelegate_6)); }
	inline ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * get_ioDelegate_6() const { return ___ioDelegate_6; }
	inline ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 ** get_address_of_ioDelegate_6() { return &___ioDelegate_6; }
	inline void set_ioDelegate_6(ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * value)
	{
		___ioDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ioDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_nullReferenceDelegate_7() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields, ___nullReferenceDelegate_7)); }
	inline ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * get_nullReferenceDelegate_7() const { return ___nullReferenceDelegate_7; }
	inline ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 ** get_address_of_nullReferenceDelegate_7() { return &___nullReferenceDelegate_7; }
	inline void set_nullReferenceDelegate_7(ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * value)
	{
		___nullReferenceDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nullReferenceDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_outOfMemoryDelegate_8() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields, ___outOfMemoryDelegate_8)); }
	inline ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * get_outOfMemoryDelegate_8() const { return ___outOfMemoryDelegate_8; }
	inline ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 ** get_address_of_outOfMemoryDelegate_8() { return &___outOfMemoryDelegate_8; }
	inline void set_outOfMemoryDelegate_8(ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * value)
	{
		___outOfMemoryDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outOfMemoryDelegate_8), (void*)value);
	}

	inline static int32_t get_offset_of_overflowDelegate_9() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields, ___overflowDelegate_9)); }
	inline ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * get_overflowDelegate_9() const { return ___overflowDelegate_9; }
	inline ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 ** get_address_of_overflowDelegate_9() { return &___overflowDelegate_9; }
	inline void set_overflowDelegate_9(ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * value)
	{
		___overflowDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overflowDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_systemDelegate_10() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields, ___systemDelegate_10)); }
	inline ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * get_systemDelegate_10() const { return ___systemDelegate_10; }
	inline ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 ** get_address_of_systemDelegate_10() { return &___systemDelegate_10; }
	inline void set_systemDelegate_10(ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * value)
	{
		___systemDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_argumentDelegate_11() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields, ___argumentDelegate_11)); }
	inline ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * get_argumentDelegate_11() const { return ___argumentDelegate_11; }
	inline ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC ** get_address_of_argumentDelegate_11() { return &___argumentDelegate_11; }
	inline void set_argumentDelegate_11(ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * value)
	{
		___argumentDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_argumentNullDelegate_12() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields, ___argumentNullDelegate_12)); }
	inline ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * get_argumentNullDelegate_12() const { return ___argumentNullDelegate_12; }
	inline ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC ** get_address_of_argumentNullDelegate_12() { return &___argumentNullDelegate_12; }
	inline void set_argumentNullDelegate_12(ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * value)
	{
		___argumentNullDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentNullDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_argumentOutOfRangeDelegate_13() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields, ___argumentOutOfRangeDelegate_13)); }
	inline ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * get_argumentOutOfRangeDelegate_13() const { return ___argumentOutOfRangeDelegate_13; }
	inline ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC ** get_address_of_argumentOutOfRangeDelegate_13() { return &___argumentOutOfRangeDelegate_13; }
	inline void set_argumentOutOfRangeDelegate_13(ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * value)
	{
		___argumentOutOfRangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentOutOfRangeDelegate_13), (void*)value);
	}
};


// Firebase.AppUtilPINVOKE_SWIGPendingException
struct  SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2  : public RuntimeObject
{
public:

public:
};

struct SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_StaticFields
{
public:
	// System.Int32 Firebase.AppUtilPINVOKE_SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;

public:
	inline static int32_t get_offset_of_numExceptionsPending_1() { return static_cast<int32_t>(offsetof(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_StaticFields, ___numExceptionsPending_1)); }
	inline int32_t get_numExceptionsPending_1() const { return ___numExceptionsPending_1; }
	inline int32_t* get_address_of_numExceptionsPending_1() { return &___numExceptionsPending_1; }
	inline void set_numExceptionsPending_1(int32_t value)
	{
		___numExceptionsPending_1 = value;
	}
};

struct SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_ThreadStaticFields
{
public:
	// System.Exception Firebase.AppUtilPINVOKE_SWIGPendingException::pendingException
	Exception_t * ___pendingException_0;

public:
	inline static int32_t get_offset_of_pendingException_0() { return static_cast<int32_t>(offsetof(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_ThreadStaticFields, ___pendingException_0)); }
	inline Exception_t * get_pendingException_0() const { return ___pendingException_0; }
	inline Exception_t ** get_address_of_pendingException_0() { return &___pendingException_0; }
	inline void set_pendingException_0(Exception_t * value)
	{
		___pendingException_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingException_0), (void*)value);
	}
};


// Firebase.AppUtilPINVOKE_SWIGStringHelper
struct  SWIGStringHelper_t1A089E58729C0B6AFE44A957B1F061841F9BD49A  : public RuntimeObject
{
public:

public:
};

struct SWIGStringHelper_t1A089E58729C0B6AFE44A957B1F061841F9BD49A_StaticFields
{
public:
	// Firebase.AppUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate Firebase.AppUtilPINVOKE_SWIGStringHelper::stringDelegate
	SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF * ___stringDelegate_0;

public:
	inline static int32_t get_offset_of_stringDelegate_0() { return static_cast<int32_t>(offsetof(SWIGStringHelper_t1A089E58729C0B6AFE44A957B1F061841F9BD49A_StaticFields, ___stringDelegate_0)); }
	inline SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF * get_stringDelegate_0() const { return ___stringDelegate_0; }
	inline SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF ** get_address_of_stringDelegate_0() { return &___stringDelegate_0; }
	inline void set_stringDelegate_0(SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF * value)
	{
		___stringDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringDelegate_0), (void*)value);
	}
};


// Firebase.ErrorMessages
struct  ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA  : public RuntimeObject
{
public:

public:
};

struct ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_StaticFields
{
public:
	// System.String Firebase.ErrorMessages::DEPENDENCY_NOT_FOUND_ERROR_ANDROID
	String_t* ___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0;
	// System.String Firebase.ErrorMessages::DEPENDENCY_NOT_FOUND_ERROR_IOS
	String_t* ___DEPENDENCY_NOT_FOUND_ERROR_IOS_1;
	// System.String Firebase.ErrorMessages::DEPENDENCY_NOT_FOUND_ERROR_GENERIC
	String_t* ___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2;
	// System.String Firebase.ErrorMessages::DLL_NOT_FOUND_ERROR_ANDROID
	String_t* ___DLL_NOT_FOUND_ERROR_ANDROID_3;
	// System.String Firebase.ErrorMessages::DLL_NOT_FOUND_ERROR_IOS
	String_t* ___DLL_NOT_FOUND_ERROR_IOS_4;
	// System.String Firebase.ErrorMessages::DLL_NOT_FOUND_ERROR_GENERIC
	String_t* ___DLL_NOT_FOUND_ERROR_GENERIC_5;

public:
	inline static int32_t get_offset_of_DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0() { return static_cast<int32_t>(offsetof(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_StaticFields, ___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0)); }
	inline String_t* get_DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0() const { return ___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0; }
	inline String_t** get_address_of_DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0() { return &___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0; }
	inline void set_DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0(String_t* value)
	{
		___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0), (void*)value);
	}

	inline static int32_t get_offset_of_DEPENDENCY_NOT_FOUND_ERROR_IOS_1() { return static_cast<int32_t>(offsetof(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_StaticFields, ___DEPENDENCY_NOT_FOUND_ERROR_IOS_1)); }
	inline String_t* get_DEPENDENCY_NOT_FOUND_ERROR_IOS_1() const { return ___DEPENDENCY_NOT_FOUND_ERROR_IOS_1; }
	inline String_t** get_address_of_DEPENDENCY_NOT_FOUND_ERROR_IOS_1() { return &___DEPENDENCY_NOT_FOUND_ERROR_IOS_1; }
	inline void set_DEPENDENCY_NOT_FOUND_ERROR_IOS_1(String_t* value)
	{
		___DEPENDENCY_NOT_FOUND_ERROR_IOS_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DEPENDENCY_NOT_FOUND_ERROR_IOS_1), (void*)value);
	}

	inline static int32_t get_offset_of_DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2() { return static_cast<int32_t>(offsetof(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_StaticFields, ___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2)); }
	inline String_t* get_DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2() const { return ___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2; }
	inline String_t** get_address_of_DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2() { return &___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2; }
	inline void set_DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2(String_t* value)
	{
		___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2), (void*)value);
	}

	inline static int32_t get_offset_of_DLL_NOT_FOUND_ERROR_ANDROID_3() { return static_cast<int32_t>(offsetof(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_StaticFields, ___DLL_NOT_FOUND_ERROR_ANDROID_3)); }
	inline String_t* get_DLL_NOT_FOUND_ERROR_ANDROID_3() const { return ___DLL_NOT_FOUND_ERROR_ANDROID_3; }
	inline String_t** get_address_of_DLL_NOT_FOUND_ERROR_ANDROID_3() { return &___DLL_NOT_FOUND_ERROR_ANDROID_3; }
	inline void set_DLL_NOT_FOUND_ERROR_ANDROID_3(String_t* value)
	{
		___DLL_NOT_FOUND_ERROR_ANDROID_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DLL_NOT_FOUND_ERROR_ANDROID_3), (void*)value);
	}

	inline static int32_t get_offset_of_DLL_NOT_FOUND_ERROR_IOS_4() { return static_cast<int32_t>(offsetof(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_StaticFields, ___DLL_NOT_FOUND_ERROR_IOS_4)); }
	inline String_t* get_DLL_NOT_FOUND_ERROR_IOS_4() const { return ___DLL_NOT_FOUND_ERROR_IOS_4; }
	inline String_t** get_address_of_DLL_NOT_FOUND_ERROR_IOS_4() { return &___DLL_NOT_FOUND_ERROR_IOS_4; }
	inline void set_DLL_NOT_FOUND_ERROR_IOS_4(String_t* value)
	{
		___DLL_NOT_FOUND_ERROR_IOS_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DLL_NOT_FOUND_ERROR_IOS_4), (void*)value);
	}

	inline static int32_t get_offset_of_DLL_NOT_FOUND_ERROR_GENERIC_5() { return static_cast<int32_t>(offsetof(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_StaticFields, ___DLL_NOT_FOUND_ERROR_GENERIC_5)); }
	inline String_t* get_DLL_NOT_FOUND_ERROR_GENERIC_5() const { return ___DLL_NOT_FOUND_ERROR_GENERIC_5; }
	inline String_t** get_address_of_DLL_NOT_FOUND_ERROR_GENERIC_5() { return &___DLL_NOT_FOUND_ERROR_GENERIC_5; }
	inline void set_DLL_NOT_FOUND_ERROR_GENERIC_5(String_t* value)
	{
		___DLL_NOT_FOUND_ERROR_GENERIC_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DLL_NOT_FOUND_ERROR_GENERIC_5), (void*)value);
	}
};


// Firebase.FirebaseApp_EnableModuleParams
struct  EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9  : public RuntimeObject
{
public:
	// System.String Firebase.FirebaseApp_EnableModuleParams::<CppModuleName>k__BackingField
	String_t* ___U3CCppModuleNameU3Ek__BackingField_0;
	// System.String Firebase.FirebaseApp_EnableModuleParams::<CSharpClassName>k__BackingField
	String_t* ___U3CCSharpClassNameU3Ek__BackingField_1;
	// System.Boolean Firebase.FirebaseApp_EnableModuleParams::<AlwaysEnable>k__BackingField
	bool ___U3CAlwaysEnableU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCppModuleNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9, ___U3CCppModuleNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CCppModuleNameU3Ek__BackingField_0() const { return ___U3CCppModuleNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CCppModuleNameU3Ek__BackingField_0() { return &___U3CCppModuleNameU3Ek__BackingField_0; }
	inline void set_U3CCppModuleNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CCppModuleNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCppModuleNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCSharpClassNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9, ___U3CCSharpClassNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CCSharpClassNameU3Ek__BackingField_1() const { return ___U3CCSharpClassNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CCSharpClassNameU3Ek__BackingField_1() { return &___U3CCSharpClassNameU3Ek__BackingField_1; }
	inline void set_U3CCSharpClassNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CCSharpClassNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCSharpClassNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAlwaysEnableU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9, ___U3CAlwaysEnableU3Ek__BackingField_2)); }
	inline bool get_U3CAlwaysEnableU3Ek__BackingField_2() const { return ___U3CAlwaysEnableU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CAlwaysEnableU3Ek__BackingField_2() { return &___U3CAlwaysEnableU3Ek__BackingField_2; }
	inline void set_U3CAlwaysEnableU3Ek__BackingField_2(bool value)
	{
		___U3CAlwaysEnableU3Ek__BackingField_2 = value;
	}
};


// Firebase.FutureString_<GetTask>c__AnonStorey0
struct  U3CGetTaskU3Ec__AnonStorey0_t8F84D81AE3078B5547B427BBE15133EEE42E5FCC  : public RuntimeObject
{
public:
	// Firebase.FutureString Firebase.FutureString_<GetTask>c__AnonStorey0::fu
	FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * ___fu_0;
	// System.Threading.Tasks.TaskCompletionSource`1<System.String> Firebase.FutureString_<GetTask>c__AnonStorey0::tcs
	TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536 * ___tcs_1;

public:
	inline static int32_t get_offset_of_fu_0() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_t8F84D81AE3078B5547B427BBE15133EEE42E5FCC, ___fu_0)); }
	inline FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * get_fu_0() const { return ___fu_0; }
	inline FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C ** get_address_of_fu_0() { return &___fu_0; }
	inline void set_fu_0(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * value)
	{
		___fu_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fu_0), (void*)value);
	}

	inline static int32_t get_offset_of_tcs_1() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_t8F84D81AE3078B5547B427BBE15133EEE42E5FCC, ___tcs_1)); }
	inline TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536 * get_tcs_1() const { return ___tcs_1; }
	inline TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536 ** get_address_of_tcs_1() { return &___tcs_1; }
	inline void set_tcs_1(TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536 * value)
	{
		___tcs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcs_1), (void*)value);
	}
};


// Firebase.LogUtil
struct  LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4  : public RuntimeObject
{
public:
	// System.Boolean Firebase.LogUtil::_disposed
	bool ____disposed_2;

public:
	inline static int32_t get_offset_of__disposed_2() { return static_cast<int32_t>(offsetof(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4, ____disposed_2)); }
	inline bool get__disposed_2() const { return ____disposed_2; }
	inline bool* get_address_of__disposed_2() { return &____disposed_2; }
	inline void set__disposed_2(bool value)
	{
		____disposed_2 = value;
	}
};

struct LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_StaticFields
{
public:
	// Firebase.LogUtil Firebase.LogUtil::_instance
	LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4 * ____instance_0;
	// System.Object Firebase.LogUtil::InitializeLoggingLock
	RuntimeObject * ___InitializeLoggingLock_1;
	// Firebase.LogUtil_LogMessageDelegate Firebase.LogUtil::<>f__mgU24cache0
	LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9 * ___U3CU3Ef__mgU24cache0_3;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_StaticFields, ____instance_0)); }
	inline LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4 * get__instance_0() const { return ____instance_0; }
	inline LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}

	inline static int32_t get_offset_of_InitializeLoggingLock_1() { return static_cast<int32_t>(offsetof(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_StaticFields, ___InitializeLoggingLock_1)); }
	inline RuntimeObject * get_InitializeLoggingLock_1() const { return ___InitializeLoggingLock_1; }
	inline RuntimeObject ** get_address_of_InitializeLoggingLock_1() { return &___InitializeLoggingLock_1; }
	inline void set_InitializeLoggingLock_1(RuntimeObject * value)
	{
		___InitializeLoggingLock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InitializeLoggingLock_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_3() { return static_cast<int32_t>(offsetof(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_StaticFields, ___U3CU3Ef__mgU24cache0_3)); }
	inline LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9 * get_U3CU3Ef__mgU24cache0_3() const { return ___U3CU3Ef__mgU24cache0_3; }
	inline LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9 ** get_address_of_U3CU3Ef__mgU24cache0_3() { return &___U3CU3Ef__mgU24cache0_3; }
	inline void set_U3CU3Ef__mgU24cache0_3(LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9 * value)
	{
		___U3CU3Ef__mgU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_3), (void*)value);
	}
};


// Firebase.Platform.FirebaseAppPlatform
struct  FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75  : public RuntimeObject
{
public:
	// System.WeakReference Firebase.Platform.FirebaseAppPlatform::<app>k__BackingField
	WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * ___U3CappU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CappU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75, ___U3CappU3Ek__BackingField_0)); }
	inline WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * get_U3CappU3Ek__BackingField_0() const { return ___U3CappU3Ek__BackingField_0; }
	inline WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D ** get_address_of_U3CappU3Ek__BackingField_0() { return &___U3CappU3Ek__BackingField_0; }
	inline void set_U3CappU3Ek__BackingField_0(WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * value)
	{
		___U3CappU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CappU3Ek__BackingField_0), (void*)value);
	}
};


// Firebase.Platform.FirebaseAppUtils
struct  FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2  : public RuntimeObject
{
public:

public:
};

struct FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2_StaticFields
{
public:
	// Firebase.Platform.FirebaseAppUtils Firebase.Platform.FirebaseAppUtils::instance
	FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2_StaticFields, ___instance_0)); }
	inline FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2 * get_instance_0() const { return ___instance_0; }
	inline FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// Firebase.VersionInfo
struct  VersionInfo_t3E35A22340377E5AACFCF6136023D5D8E06CCD3F  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString_Action>
struct  Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8B983CCC7194F997611C171BF7E38EC8183148A2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tE2B9F56C4FC9A142F8D3BADAF3C920AA6B02C880 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t905FCE1127452B2EA338BED9822607E4DD09E297 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E, ___entries_1)); }
	inline EntryU5BU5D_t8B983CCC7194F997611C171BF7E38EC8183148A2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8B983CCC7194F997611C171BF7E38EC8183148A2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8B983CCC7194F997611C171BF7E38EC8183148A2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E, ___keys_7)); }
	inline KeyCollection_tE2B9F56C4FC9A142F8D3BADAF3C920AA6B02C880 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tE2B9F56C4FC9A142F8D3BADAF3C920AA6B02C880 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tE2B9F56C4FC9A142F8D3BADAF3C920AA6B02C880 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E, ___values_8)); }
	inline ValueCollection_t905FCE1127452B2EA338BED9822607E4DD09E297 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t905FCE1127452B2EA338BED9822607E4DD09E297 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t905FCE1127452B2EA338BED9822607E4DD09E297 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct  Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8DAFC84D28A0076601739F86084E67F224CA9617* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tD3AA9876F37DF7D4026F7CB13402035CA5D2FBEE * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t73E211E2E31D76CFD2270B54AE3CE24B39488E47 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62, ___entries_1)); }
	inline EntryU5BU5D_t8DAFC84D28A0076601739F86084E67F224CA9617* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8DAFC84D28A0076601739F86084E67F224CA9617** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8DAFC84D28A0076601739F86084E67F224CA9617* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62, ___keys_7)); }
	inline KeyCollection_tD3AA9876F37DF7D4026F7CB13402035CA5D2FBEE * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tD3AA9876F37DF7D4026F7CB13402035CA5D2FBEE ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tD3AA9876F37DF7D4026F7CB13402035CA5D2FBEE * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62, ___values_8)); }
	inline ValueCollection_t73E211E2E31D76CFD2270B54AE3CE24B39488E47 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t73E211E2E31D76CFD2270B54AE3CE24B39488E47 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t73E211E2E31D76CFD2270B54AE3CE24B39488E47 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct  Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7CFBE92D8C2E9246EE940A8281F3DAA13E896CE0* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t8D7CC505BD4E56FAD08B4548EB3FFC6D45AEE6B4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t83E863291723F45D628511EA91C491D48E86DC3F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE, ___entries_1)); }
	inline EntryU5BU5D_t7CFBE92D8C2E9246EE940A8281F3DAA13E896CE0* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7CFBE92D8C2E9246EE940A8281F3DAA13E896CE0** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7CFBE92D8C2E9246EE940A8281F3DAA13E896CE0* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE, ___keys_7)); }
	inline KeyCollection_t8D7CC505BD4E56FAD08B4548EB3FFC6D45AEE6B4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8D7CC505BD4E56FAD08B4548EB3FFC6D45AEE6B4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8D7CC505BD4E56FAD08B4548EB3FFC6D45AEE6B4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE, ___values_8)); }
	inline ValueCollection_t83E863291723F45D628511EA91C491D48E86DC3F * get_values_8() const { return ___values_8; }
	inline ValueCollection_t83E863291723F45D628511EA91C491D48E86DC3F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t83E863291723F45D628511EA91C491D48E86DC3F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EventArgs
struct  EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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


// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct  TaskCompletionSource_1_t3ECF7B56E418D2A3FFC4E551B9DA6A7E38C7D304  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t3ECF7B56E418D2A3FFC4E551B9DA6A7E38C7D304, ___m_task_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct  TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536, ___m_task_0)); }
	inline Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Firebase.MonoPInvokeCallbackAttribute
struct  MonoPInvokeCallbackAttribute_t4EB9CB59CC38D96C45648D54F15417BA4A52FDCB  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Threading.Thread
struct  Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7  : public CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___internal_thread_6)); }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Firebase.DependencyStatus
struct  DependencyStatus_t016671E81C2153136BD116CBD9F4166AD3C6DA9B 
{
public:
	// System.Int32 Firebase.DependencyStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DependencyStatus_t016671E81C2153136BD116CBD9F4166AD3C6DA9B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.FutureStatus
struct  FutureStatus_t5123D2217054CACFA9365BD542C5A3300449255C 
{
public:
	// System.Int32 Firebase.FutureStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FutureStatus_t5123D2217054CACFA9365BD542C5A3300449255C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.InitResult
struct  InitResult_t0159C076DA44626ECA5EA139DB147F9BFE9AB31F 
{
public:
	// System.Int32 Firebase.InitResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitResult_t0159C076DA44626ECA5EA139DB147F9BFE9AB31F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.LogLevel
struct  LogLevel_tC69575EF4D1F372E563D26D15A24B00EA684B4F8 
{
public:
	// System.Int32 Firebase.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_tC69575EF4D1F372E563D26D15A24B00EA684B4F8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.Platform.PlatformLogLevel
struct  PlatformLogLevel_t669319163E05EF233BB7C8F77D23EC88E72E67A0 
{
public:
	// System.Int32 Firebase.Platform.PlatformLogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlatformLogLevel_t669319163E05EF233BB7C8F77D23EC88E72E67A0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly_ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.Runtime.InteropServices.HandleRef
struct  HandleRef_t876E76124F400D12395BF61D562162AB6822204A 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::m_wrapper
	RuntimeObject * ___m_wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::m_handle
	intptr_t ___m_handle_1;

public:
	inline static int32_t get_offset_of_m_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t876E76124F400D12395BF61D562162AB6822204A, ___m_wrapper_0)); }
	inline RuntimeObject * get_m_wrapper_0() const { return ___m_wrapper_0; }
	inline RuntimeObject ** get_address_of_m_wrapper_0() { return &___m_wrapper_0; }
	inline void set_m_wrapper_0(RuntimeObject * value)
	{
		___m_wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wrapper_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t876E76124F400D12395BF61D562162AB6822204A, ___m_handle_1)); }
	inline intptr_t get_m_handle_1() const { return ___m_handle_1; }
	inline intptr_t* get_address_of_m_handle_1() { return &___m_handle_1; }
	inline void set_m_handle_1(intptr_t value)
	{
		___m_handle_1 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Threading.Tasks.Task
struct  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_33)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_36)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Uri_Flags
struct  Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A 
{
public:
	// System.UInt64 System.Uri_Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.UriFormat
struct  UriFormat_t4355763D39FF6F0FAA2B43E3A209BA8500730992 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t4355763D39FF6F0FAA2B43E3A209BA8500730992, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct  UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct  UriKind_t26D0760DDF148ADC939FECD934C0B9FF5C71EA08 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_t26D0760DDF148ADC939FECD934C0B9FF5C71EA08, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.WeakReference
struct  WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D, ___gcHandle_1)); }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  value)
	{
		___gcHandle_1 = value;
	}
};


// Firebase.AppOptionsInternal
struct  AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.AppOptionsInternal::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.AppOptionsInternal::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.FirebaseApp
struct  FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___AppDisposed_4;
	// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::appPlatform
	FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75 * ___appPlatform_15;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_AppDisposed_4() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___AppDisposed_4)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_AppDisposed_4() const { return ___AppDisposed_4; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_AppDisposed_4() { return &___AppDisposed_4; }
	inline void set_AppDisposed_4(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___AppDisposed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppDisposed_4), (void*)value);
	}

	inline static int32_t get_offset_of_appPlatform_15() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___appPlatform_15)); }
	inline FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75 * get_appPlatform_15() const { return ___appPlatform_15; }
	inline FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75 ** get_address_of_appPlatform_15() { return &___appPlatform_15; }
	inline void set_appPlatform_15(FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75 * value)
	{
		___appPlatform_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appPlatform_15), (void*)value);
	}
};

struct FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields
{
public:
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject * ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject * ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_13;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject * ___CheckDependenciesThreadLock_14;
	// Firebase.FirebaseApp_CreateDelegate Firebase.FirebaseApp::<>f__amU24cache0
	CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * ___U3CU3Ef__amU24cache0_16;
	// System.Func`1<System.Boolean> Firebase.FirebaseApp::<>f__amU24cache1
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___U3CU3Ef__amU24cache1_17;
	// System.Func`1<Firebase.DependencyStatus> Firebase.FirebaseApp::<>f__amU24cache2
	Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572 * ___U3CU3Ef__amU24cache2_18;
	// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__amU24cache3
	Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D * ___U3CU3Ef__amU24cache3_19;
	// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__amU24cache4
	Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F * ___U3CU3Ef__amU24cache4_20;

public:
	inline static int32_t get_offset_of_disposeLock_2() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___disposeLock_2)); }
	inline RuntimeObject * get_disposeLock_2() const { return ___disposeLock_2; }
	inline RuntimeObject ** get_address_of_disposeLock_2() { return &___disposeLock_2; }
	inline void set_disposeLock_2(RuntimeObject * value)
	{
		___disposeLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_2), (void*)value);
	}

	inline static int32_t get_offset_of_nameToProxy_5() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___nameToProxy_5)); }
	inline Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * get_nameToProxy_5() const { return ___nameToProxy_5; }
	inline Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE ** get_address_of_nameToProxy_5() { return &___nameToProxy_5; }
	inline void set_nameToProxy_5(Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * value)
	{
		___nameToProxy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameToProxy_5), (void*)value);
	}

	inline static int32_t get_offset_of_cPtrToProxy_6() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___cPtrToProxy_6)); }
	inline Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * get_cPtrToProxy_6() const { return ___cPtrToProxy_6; }
	inline Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 ** get_address_of_cPtrToProxy_6() { return &___cPtrToProxy_6; }
	inline void set_cPtrToProxy_6(Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * value)
	{
		___cPtrToProxy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cPtrToProxy_6), (void*)value);
	}

	inline static int32_t get_offset_of_AppUtilCallbacksInitialized_7() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___AppUtilCallbacksInitialized_7)); }
	inline bool get_AppUtilCallbacksInitialized_7() const { return ___AppUtilCallbacksInitialized_7; }
	inline bool* get_address_of_AppUtilCallbacksInitialized_7() { return &___AppUtilCallbacksInitialized_7; }
	inline void set_AppUtilCallbacksInitialized_7(bool value)
	{
		___AppUtilCallbacksInitialized_7 = value;
	}

	inline static int32_t get_offset_of_AppUtilCallbacksLock_8() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___AppUtilCallbacksLock_8)); }
	inline RuntimeObject * get_AppUtilCallbacksLock_8() const { return ___AppUtilCallbacksLock_8; }
	inline RuntimeObject ** get_address_of_AppUtilCallbacksLock_8() { return &___AppUtilCallbacksLock_8; }
	inline void set_AppUtilCallbacksLock_8(RuntimeObject * value)
	{
		___AppUtilCallbacksLock_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppUtilCallbacksLock_8), (void*)value);
	}

	inline static int32_t get_offset_of_PreventOnAllAppsDestroyed_9() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___PreventOnAllAppsDestroyed_9)); }
	inline bool get_PreventOnAllAppsDestroyed_9() const { return ___PreventOnAllAppsDestroyed_9; }
	inline bool* get_address_of_PreventOnAllAppsDestroyed_9() { return &___PreventOnAllAppsDestroyed_9; }
	inline void set_PreventOnAllAppsDestroyed_9(bool value)
	{
		___PreventOnAllAppsDestroyed_9 = value;
	}

	inline static int32_t get_offset_of_crashlyticsInitializationAttempted_10() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___crashlyticsInitializationAttempted_10)); }
	inline bool get_crashlyticsInitializationAttempted_10() const { return ___crashlyticsInitializationAttempted_10; }
	inline bool* get_address_of_crashlyticsInitializationAttempted_10() { return &___crashlyticsInitializationAttempted_10; }
	inline void set_crashlyticsInitializationAttempted_10(bool value)
	{
		___crashlyticsInitializationAttempted_10 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThread_13() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___CheckDependenciesThread_13)); }
	inline int32_t get_CheckDependenciesThread_13() const { return ___CheckDependenciesThread_13; }
	inline int32_t* get_address_of_CheckDependenciesThread_13() { return &___CheckDependenciesThread_13; }
	inline void set_CheckDependenciesThread_13(int32_t value)
	{
		___CheckDependenciesThread_13 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThreadLock_14() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___CheckDependenciesThreadLock_14)); }
	inline RuntimeObject * get_CheckDependenciesThreadLock_14() const { return ___CheckDependenciesThreadLock_14; }
	inline RuntimeObject ** get_address_of_CheckDependenciesThreadLock_14() { return &___CheckDependenciesThreadLock_14; }
	inline void set_CheckDependenciesThreadLock_14(RuntimeObject * value)
	{
		___CheckDependenciesThreadLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckDependenciesThreadLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_16() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache0_16)); }
	inline CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * get_U3CU3Ef__amU24cache0_16() const { return ___U3CU3Ef__amU24cache0_16; }
	inline CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F ** get_address_of_U3CU3Ef__amU24cache0_16() { return &___U3CU3Ef__amU24cache0_16; }
	inline void set_U3CU3Ef__amU24cache0_16(CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * value)
	{
		___U3CU3Ef__amU24cache0_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache0_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_17() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache1_17)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_U3CU3Ef__amU24cache1_17() const { return ___U3CU3Ef__amU24cache1_17; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_U3CU3Ef__amU24cache1_17() { return &___U3CU3Ef__amU24cache1_17; }
	inline void set_U3CU3Ef__amU24cache1_17(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___U3CU3Ef__amU24cache1_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_18() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache2_18)); }
	inline Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572 * get_U3CU3Ef__amU24cache2_18() const { return ___U3CU3Ef__amU24cache2_18; }
	inline Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572 ** get_address_of_U3CU3Ef__amU24cache2_18() { return &___U3CU3Ef__amU24cache2_18; }
	inline void set_U3CU3Ef__amU24cache2_18(Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572 * value)
	{
		___U3CU3Ef__amU24cache2_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache2_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_19() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache3_19)); }
	inline Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D * get_U3CU3Ef__amU24cache3_19() const { return ___U3CU3Ef__amU24cache3_19; }
	inline Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D ** get_address_of_U3CU3Ef__amU24cache3_19() { return &___U3CU3Ef__amU24cache3_19; }
	inline void set_U3CU3Ef__amU24cache3_19(Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D * value)
	{
		___U3CU3Ef__amU24cache3_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache3_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_20() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache4_20)); }
	inline Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F * get_U3CU3Ef__amU24cache4_20() const { return ___U3CU3Ef__amU24cache4_20; }
	inline Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F ** get_address_of_U3CU3Ef__amU24cache4_20() { return &___U3CU3Ef__amU24cache4_20; }
	inline void set_U3CU3Ef__amU24cache4_20(Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F * value)
	{
		___U3CU3Ef__amU24cache4_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache4_20), (void*)value);
	}
};


// Firebase.FirebaseException
struct  FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF  : public Exception_t
{
public:
	// System.Int32 Firebase.FirebaseException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF, ___U3CErrorCodeU3Ek__BackingField_17)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_17() const { return ___U3CErrorCodeU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_17() { return &___U3CErrorCodeU3Ek__BackingField_17; }
	inline void set_U3CErrorCodeU3Ek__BackingField_17(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_17 = value;
	}
};


// Firebase.FutureBase
struct  FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureBase::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.FutureBase::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.InitializationException
struct  InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098  : public Exception_t
{
public:
	// Firebase.InitResult Firebase.InitializationException::<InitResult>k__BackingField
	int32_t ___U3CInitResultU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CInitResultU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098, ___U3CInitResultU3Ek__BackingField_17)); }
	inline int32_t get_U3CInitResultU3Ek__BackingField_17() const { return ___U3CInitResultU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CInitResultU3Ek__BackingField_17() { return &___U3CInitResultU3Ek__BackingField_17; }
	inline void set_U3CInitResultU3Ek__BackingField_17(int32_t value)
	{
		___U3CInitResultU3Ek__BackingField_17 = value;
	}
};


// System.ApplicationException
struct  ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74  : public Exception_t
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Threading.Tasks.Task`1<System.Object>
struct  Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09, ___m_result_40)); }
	inline RuntimeObject * get_m_result_40() const { return ___m_result_40; }
	inline RuntimeObject ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(RuntimeObject * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t1EC236EC6D34F0BBC2E87658D2A11017407240D4 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t8A17E987C73781D20C93E1140DAE0B3595A19A4B * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t1EC236EC6D34F0BBC2E87658D2A11017407240D4 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t1EC236EC6D34F0BBC2E87658D2A11017407240D4 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t1EC236EC6D34F0BBC2E87658D2A11017407240D4 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t8A17E987C73781D20C93E1140DAE0B3595A19A4B * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t8A17E987C73781D20C93E1140DAE0B3595A19A4B ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t8A17E987C73781D20C93E1140DAE0B3595A19A4B * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.String>
struct  Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C, ___m_result_40)); }
	inline String_t* get_m_result_40() const { return ___m_result_40; }
	inline String_t** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(String_t* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tCE3276D3F820150AD890B4700B08839B1F60B2EB * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t1C8755364A4E277E5036A8167830AA7A8544A2C9 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tCE3276D3F820150AD890B4700B08839B1F60B2EB * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tCE3276D3F820150AD890B4700B08839B1F60B2EB ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tCE3276D3F820150AD890B4700B08839B1F60B2EB * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t1C8755364A4E277E5036A8167830AA7A8544A2C9 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t1C8755364A4E277E5036A8167830AA7A8544A2C9 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t1C8755364A4E277E5036A8167830AA7A8544A2C9 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Uri
struct  Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri_Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri_UriInfo System.Uri::m_Info
	UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Syntax_18)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Info_21)); }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate
struct  ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate
struct  ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.AppUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate
struct  SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.FirebaseApp_CreateDelegate
struct  CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.FutureString
struct  FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C  : public FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureString::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_2;
	// System.IntPtr Firebase.FutureString::callbackData
	intptr_t ___callbackData_6;
	// Firebase.FutureString_SWIG_CompletionDelegate Firebase.FutureString::SWIG_CompletionCB
	SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 * ___SWIG_CompletionCB_7;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C, ___swigCPtr_2)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_2))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_callbackData_6() { return static_cast<int32_t>(offsetof(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C, ___callbackData_6)); }
	inline intptr_t get_callbackData_6() const { return ___callbackData_6; }
	inline intptr_t* get_address_of_callbackData_6() { return &___callbackData_6; }
	inline void set_callbackData_6(intptr_t value)
	{
		___callbackData_6 = value;
	}

	inline static int32_t get_offset_of_SWIG_CompletionCB_7() { return static_cast<int32_t>(offsetof(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C, ___SWIG_CompletionCB_7)); }
	inline SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 * get_SWIG_CompletionCB_7() const { return ___SWIG_CompletionCB_7; }
	inline SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 ** get_address_of_SWIG_CompletionCB_7() { return &___SWIG_CompletionCB_7; }
	inline void set_SWIG_CompletionCB_7(SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 * value)
	{
		___SWIG_CompletionCB_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SWIG_CompletionCB_7), (void*)value);
	}
};

struct FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString_Action> Firebase.FutureString::Callbacks
	Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E * ___Callbacks_3;
	// System.Int32 Firebase.FutureString::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.FutureString::CallbackLock
	RuntimeObject * ___CallbackLock_5;

public:
	inline static int32_t get_offset_of_Callbacks_3() { return static_cast<int32_t>(offsetof(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_StaticFields, ___Callbacks_3)); }
	inline Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E * get_Callbacks_3() const { return ___Callbacks_3; }
	inline Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E ** get_address_of_Callbacks_3() { return &___Callbacks_3; }
	inline void set_Callbacks_3(Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E * value)
	{
		___Callbacks_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callbacks_3), (void*)value);
	}

	inline static int32_t get_offset_of_CallbackIndex_4() { return static_cast<int32_t>(offsetof(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_StaticFields, ___CallbackIndex_4)); }
	inline int32_t get_CallbackIndex_4() const { return ___CallbackIndex_4; }
	inline int32_t* get_address_of_CallbackIndex_4() { return &___CallbackIndex_4; }
	inline void set_CallbackIndex_4(int32_t value)
	{
		___CallbackIndex_4 = value;
	}

	inline static int32_t get_offset_of_CallbackLock_5() { return static_cast<int32_t>(offsetof(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_StaticFields, ___CallbackLock_5)); }
	inline RuntimeObject * get_CallbackLock_5() const { return ___CallbackLock_5; }
	inline RuntimeObject ** get_address_of_CallbackLock_5() { return &___CallbackLock_5; }
	inline void set_CallbackLock_5(RuntimeObject * value)
	{
		___CallbackLock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallbackLock_5), (void*)value);
	}
};


// Firebase.FutureString_Action
struct  Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.FutureString_SWIG_CompletionDelegate
struct  SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.LogUtil_LogMessageDelegate
struct  LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArithmeticException
struct  ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler
struct  EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C  : public MulticastDelegate_t
{
public:

public:
};


// System.FormatException
struct  FormatException_t2808E076CDE4650AF89F55FD78F49290D0EC5BDC  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Func`1<System.Boolean>
struct  Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.IOException
struct  IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.InvalidCastException
struct  InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NullReferenceException
struct  NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.OutOfMemoryException
struct  OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.TypeLoadException
struct  TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_17;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_18;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_19;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_20;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassName_17), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyName_18() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___AssemblyName_18)); }
	inline String_t* get_AssemblyName_18() const { return ___AssemblyName_18; }
	inline String_t** get_address_of_AssemblyName_18() { return &___AssemblyName_18; }
	inline void set_AssemblyName_18(String_t* value)
	{
		___AssemblyName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyName_18), (void*)value);
	}

	inline static int32_t get_offset_of_MessageArg_19() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___MessageArg_19)); }
	inline String_t* get_MessageArg_19() const { return ___MessageArg_19; }
	inline String_t** get_address_of_MessageArg_19() { return &___MessageArg_19; }
	inline void set_MessageArg_19(String_t* value)
	{
		___MessageArg_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageArg_19), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceId_20() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___ResourceId_20)); }
	inline int32_t get_ResourceId_20() const { return ___ResourceId_20; }
	inline int32_t* get_address_of_ResourceId_20() { return &___ResourceId_20; }
	inline void set_ResourceId_20(int32_t value)
	{
		___ResourceId_20 = value;
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.DivideByZeroException
struct  DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC  : public ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269
{
public:

public:
};


// System.DllNotFoundException
struct  DllNotFoundException_tED90B6A78D4CF5AA565288E0BA88A990062A7F76  : public TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1
{
public:

public:
};


// System.IO.FileNotFoundException
struct  FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431  : public IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA
{
public:
	// System.String System.IO.FileNotFoundException::_fileName
	String_t* ____fileName_18;
	// System.String System.IO.FileNotFoundException::_fusionLog
	String_t* ____fusionLog_19;

public:
	inline static int32_t get_offset_of__fileName_18() { return static_cast<int32_t>(offsetof(FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431, ____fileName_18)); }
	inline String_t* get__fileName_18() const { return ____fileName_18; }
	inline String_t** get_address_of__fileName_18() { return &____fileName_18; }
	inline void set__fileName_18(String_t* value)
	{
		____fileName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileName_18), (void*)value);
	}

	inline static int32_t get_offset_of__fusionLog_19() { return static_cast<int32_t>(offsetof(FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431, ____fusionLog_19)); }
	inline String_t* get__fusionLog_19() const { return ____fusionLog_19; }
	inline String_t** get_address_of__fusionLog_19() { return &____fusionLog_19; }
	inline void set__fusionLog_19(String_t* value)
	{
		____fusionLog_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fusionLog_19), (void*)value);
	}
};


// System.OverflowException
struct  OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D  : public ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269
{
public:

public:
};


// System.UriFormatException
struct  UriFormatException_t86B375C9E56DBEE5BD4CC9D71C4C40AE5141808A  : public FormatException_t2808E076CDE4650AF89F55FD78F49290D0EC5BDC
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
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
// Firebase.FirebaseApp_EnableModuleParams[]
struct EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * m_Items[1];

public:
	inline EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m901D4901A751B7C8F3CCD2608AA792ADBF53B75A_gshared (Dictionary_2_tE930FC0A0DF3FBFFE9DC13EED210134C371C368E * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m26B2DBC3BE8767E18A97FFCF3FB2EFC766886BD4_gshared (Dictionary_2_tE930FC0A0DF3FBFFE9DC13EED210134C371C368E * __this, intptr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m8F5E306A3F995390237D97553B63674C8D1D725F_gshared (Dictionary_2_tE930FC0A0DF3FBFFE9DC13EED210134C371C368E * __this, intptr_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mB972A6602BDD10CBB612188FDED9917370EC3F17_gshared (Dictionary_2_tE930FC0A0DF3FBFFE9DC13EED210134C371C368E * __this, intptr_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m9013B1C29722192C4B0C6E3315FFDA8F094D8A5A_gshared (Dictionary_2_tE930FC0A0DF3FBFFE9DC13EED210134C371C368E * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m36F8615CDD8E019D5C4E92D96E275F7A8836B86F_gshared (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 Firebase.Platform.FirebaseHandler::RunOnMainThread<System.Boolean>(System.Func`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseHandler_RunOnMainThread_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m7DDD35DE42BBD8FC4FBCDBBD936EBACE47E03440_gshared (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___f0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m894F4B43C47FD23EB3FD138E3CBBD71203DC5FA7_gshared (TaskCompletionSource_1_t3ECF7B56E418D2A3FFC4E551B9DA6A7E38C7D304 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_mF32CD1B09A692369399D38F7B54F9FD2EC5394CE_gshared (TaskCompletionSource_1_t3ECF7B56E418D2A3FFC4E551B9DA6A7E38C7D304 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * TaskCompletionSource_1_get_Task_mF1CB937DAB68DC43DA33893E95F48EFB07F385A0_gshared_inline (TaskCompletionSource_1_t3ECF7B56E418D2A3FFC4E551B9DA6A7E38C7D304 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF9A6FBE4006C89D15B8C88B2CB46E9B24D18B7FC_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m867F6DA953678D0333A55270B7C6EF38EFC293FF_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2204D6D532702FD13AB2A9AD8DB538E4E8FB1913_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetCanceled_m9BD3702F5D2F7D1C0D9C7E4598B758F46B734B65_gshared (TaskCompletionSource_1_t3ECF7B56E418D2A3FFC4E551B9DA6A7E38C7D304 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m0EBFE5138C570B9515B706987C2983D4DFBE5337_gshared (TaskCompletionSource_1_t3ECF7B56E418D2A3FFC4E551B9DA6A7E38C7D304 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Uri Firebase.AppOptionsInternal::get_DatabaseUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * AppOptionsInternal_get_DatabaseUrl_m64D08A736D02EEADF4E70BCCBBA2C30C454A2923 (AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * __this, const RuntimeMethod* method);
// System.Void Firebase.AppOptions::set_DatabaseUrl(System.Uri)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppOptions_set_DatabaseUrl_m366936ECD0092B0115C71E8D5FBCB1C424DC1295_inline (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___value0, const RuntimeMethod* method);
// System.String Firebase.AppOptionsInternal::get_AppId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_AppId_m48CBD6852621E85DF9F09CF23D700A7977423CC8 (AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * __this, const RuntimeMethod* method);
// System.Void Firebase.AppOptions::set_AppId(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppOptions_set_AppId_mCCA503158696E5130B84AA621D19DB71659A11E4_inline (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Firebase.AppOptionsInternal::get_ApiKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_ApiKey_m28D907FCBD5DDF8D69DCF49B239E2625314C0C00 (AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * __this, const RuntimeMethod* method);
// System.Void Firebase.AppOptions::set_ApiKey(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppOptions_set_ApiKey_m740BF1DE16FD84D12C136647E49B08B5D3656375_inline (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Firebase.AppOptionsInternal::get_MessageSenderId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_MessageSenderId_mD6223C71D2A6E3EF541C9545E7325BF9DB28CA86 (AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * __this, const RuntimeMethod* method);
// System.Void Firebase.AppOptions::set_MessageSenderId(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppOptions_set_MessageSenderId_m068B2732D0F3031D9EE9E115B1CC0E915D611E15_inline (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Firebase.AppOptionsInternal::get_StorageBucket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_StorageBucket_m4F400D5B86B92623BDCFAEB5EA84BA4CAF4FAB06 (AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * __this, const RuntimeMethod* method);
// System.Void Firebase.AppOptions::set_StorageBucket(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppOptions_set_StorageBucket_m6B82FA59AB41A66ADAAFB936C25B6C14E9A9D6A0_inline (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Firebase.AppOptionsInternal::get_ProjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_ProjectId_m91E98CD596C649395DA5AC4E58A834B0690C2CCA (AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * __this, const RuntimeMethod* method);
// System.Void Firebase.AppOptions::set_ProjectId(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppOptions_set_ProjectId_mD20A2123AD3700C29BF4DBE2FC07F170D624559F_inline (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Firebase.AppOptionsInternal::get_PackageName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_PackageName_m4311E1F6D19C5B937092B41899851411EBD77C92 (AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * __this, const RuntimeMethod* method);
// System.Void Firebase.AppOptions::set_PackageName(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppOptions_set_PackageName_m15D939044210630597188B47808BD3CCB19A2DA1_inline (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, RuntimeObject * ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method);
// System.Void Firebase.AppOptionsInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptionsInternal_Dispose_m03120579869C6DD7EF1A482582E28D9EDFAFA404 (AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_delete_AppOptionsInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_delete_AppOptionsInternal_mA2059BE5C6D6BC252B1ADF62336E68520262AA07 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String Firebase.AppOptionsInternal::GetDatabaseUrlInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_GetDatabaseUrlInternal_mCF8AF64B1B1DE481F57652D5FDD5A2604DB9BC6B (AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * __this, const RuntimeMethod* method);
// System.Uri Firebase.FirebaseApp::UrlStringToUri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * FirebaseApp_UrlStringToUri_m09F6D262D86EE9898214D35510E1E8CEBF53D0DA (String_t* ___urlString0, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_GetDatabaseUrlInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_GetDatabaseUrlInternal_m5342C566D1300649EF9F4C0A784C3FC29C8C05F4 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC (const RuntimeMethod* method);
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1 (const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_AppId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_AppId_get_m1D0BA312B4EB816F5067D022E3EFC2E83E8D24EA (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_ApiKey_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_ApiKey_get_mF11F5251E8C047F2D0AB07EEA7479E2787B41372 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_MessageSenderId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_MessageSenderId_get_mA47CC56FF7441780BB5BDDE45BF849E7C6B706FD (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_StorageBucket_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_StorageBucket_get_mD18AD7E8E2A569028E6399386AE665CD6728EADE (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_ProjectId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_ProjectId_get_m9B8A4E351FFE25FFE1281459CEDB9A7401F65B7F (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_PackageName_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_PackageName_get_m59E499377BA5E7A12779FABA272A4E2D89ECB07E (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_PollCallbacks_m4E579A12C727C9635562303C2F4B253EF091AFA4 (const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_AppEnableLogCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_AppEnableLogCallback_m33F371C4266DD2E0F5F6D6D72400234C9892DE3C (bool ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_SetEnabledAllAppCallbacks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_SetEnabledAllAppCallbacks_mEC3417E8E968F64991558FE9762572962D862FD2 (bool ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_SetEnabledAppCallbackByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_SetEnabledAppCallbackByName_m034823F3747EB6054A3195157A31DE4DA5C21C81 (String_t* ___jarg10, bool ___jarg21, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE::Firebase_App_GetEnabledAppCallbackByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtilPINVOKE_Firebase_App_GetEnabledAppCallbackByName_m9877D632F57AAFEFB397C33A537CDB03797DB7AE (String_t* ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_SetLogFunction(Firebase.LogUtil/LogMessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_SetLogFunction_m22F7150D9129EB4F2FCE20986B379ADBB9C7C3D5 (LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9 * ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m9C08890DD2A3008937470A37320C49FFF3DAED5D (SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5 * __this, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m9853D7D1C99D3DCD1F6F2506963B5717C6BC7B8C (SWIGStringHelper_t1A089E58729C0B6AFE44A957B1F061841F9BD49A * __this, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_mFE7727F29EF454DC82F7773C7DCA7DC4B9DCE688 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m66D325C658E4D4A6F84E8BFF2A532FAAE96D5B5C (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_mEBC984AA86593D05467BC12012A3E1E33953ADED (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD9473B8DC134A0E6BCE15305DC2E12E53AF6236E (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_mB08BAC65C0DB20E0361AD747E5009B62EAACC5F8 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_mF62073712A93DD7570BEC306E4E2DF6049F31EA9 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m59B1FD0225B32443CC0685A249F0A301693C2744 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m5F381925BBBE581ADE8384B76FEA7D208B69ED4D (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m71E895F1202CBDC1909619B221AC6AB3276D7AF7 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m8FDE1CE2A3D3EB2DA8C7C12E28DD90C15E84D946 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m8EC608208492B67293B9C2AC06D7B85B5B1B26E4 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_mA47B953C5D09FDB764911484316FFDAAB4B0BE4A (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m1DAEF08C4FAD2181E64B920B843C903538D09327 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m2DDA9CC01A5B010A4D682F0615F89EFEA2D3A385 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mFA7CF73187B3CCF3692F0FAEB489B4C033D031C4 (ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m91C0CA33EFF5FCC3CE1D6355C042911404158888 (ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_AppUtil(Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AppUtil_mE2D33D9FA7B93BB5030DCA905D343EA6450F5BAE (ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___applicationDelegate0, ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___arithmeticDelegate1, ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___divideByZeroDelegate2, ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___indexOutOfRangeDelegate3, ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___invalidCastDelegate4, ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___invalidOperationDelegate5, ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___ioDelegate6, ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___nullReferenceDelegate7, ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___outOfMemoryDelegate8, ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___overflowDelegate9, ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___systemExceptionDelegate10, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_AppUtil(Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AppUtil_mAD2F9A77CA68FFB83FABFC579B2D13DE235E02E3 (ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * ___argumentDelegate0, ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * ___argumentNullDelegate1, ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m86001767F702444249A31BCD88319B9B3F6F9393 (Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m1412E36F7AF7D25CF6A00670AE2296E88DA85F5F (ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_m12EDCCC81402AA666F9C3CF1CB8A8A7AA8D61169 (DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m6CE231E888365F20BD05664560F7AF3830E9D21A (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m54AEC55A8A1F1EAD6485B691BB597C7EB284B2A5 (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC40AA9579B996C6FBAE023590139C16304D81DC6 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m37262C706BEB979358ABEFEA9F9F253E8773D2B7 (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mCD292E9CAC2B24447B04F5404C318B1B2AF4023D (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_m155C798916559886F6DD9C93B414E5764C55FD52 (OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m15CD001EEB2E79D7497E101546B04D9A5520357E (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mA18D2EA5642C066F35CB8C965398F9A542C33B0A (SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8E5D9390593273B9774DBD2E967805E8EDE668E3 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, String_t* ___paramName1, Exception_t * ___innerException2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m9EA692D49986AEBAC433CE3381331146109AE20F (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mF4B58DD5B3526C5E91D71786D528CC4ADADCF243 (String_t* ___cString0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_mFF996766F91D11AC79C2D81A824FDA4E6196E156 (SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_AppUtil(Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_AppUtil_mF30163D65D26AD200AEA5C9047A2EBFE1835E836 (SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF * ___stringDelegate0, const RuntimeMethod* method);
// System.Boolean Firebase.Platform.PlatformInformation::get_IsAndroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformInformation_get_IsAndroid_m61250012539009D27371075104AFBDE2549BB77E (const RuntimeMethod* method);
// System.Boolean Firebase.Platform.PlatformInformation::get_IsIOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformInformation_get_IsIOS_mEC53C8E1719192F4A5E5A5C919752D9772706573 (const RuntimeMethod* method);
// System.String Firebase.ErrorMessages::get_DependencyNotFoundErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorMessages_get_DependencyNotFoundErrorMessage_m6457663EBE0DBF1CFF53BD25AD45A51A8619CE66 (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>::.ctor()
inline void Dictionary_2__ctor_m124BC1DB68E6456163A4BD3D3F8CFCC09CD3D78C (Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>::.ctor()
inline void Dictionary_2__ctor_mDBD86D9CDDF553CFA2F0F9DC60603CBE7A62F2DE (Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 *, const RuntimeMethod*))Dictionary_2__ctor_m901D4901A751B7C8F3CCD2608AA792ADBF53B75A_gshared)(__this, method);
}
// System.Void Firebase.LogUtil::InitializeLogging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_InitializeLogging_m3DC0D9A5186F8E0E1972761477DB5461FFCEC354 (const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_Dispose_m633E7DCA88EC8FEDEB70D80B5A60CA4CF2AD6460 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method);
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_Invoke_mD23D5EFEA562A05C5EACDD3E91EEDD2BF6C22800 (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___e1, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::RemoveReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_RemoveReference_m82863E170CCFE42B64CE8B39E639570B549CC4AD (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.String Firebase.ErrorMessages::get_DllNotFoundExceptionErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorMessages_get_DllNotFoundExceptionErrorMessage_m5238B46BE37EB715B9E70E09BB06784D46F63D01 (const RuntimeMethod* method);
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_m6A39CAC13E9D758C410431462099CF1D901B45FF (InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 * __this, int32_t ___result0, String_t* ___message1, const RuntimeMethod* method);
// System.String Firebase.FirebaseApp::get_DefaultName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_DefaultName_mBA7DA11C2791078BAA59206A945890E958546168 (const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::GetInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseApp_GetInstance_m0C93898925E16C167E18D8F8351ECC375A46C75C (String_t* ___name0, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseApp_Create_m3ED22D074FC30B7DF31369F927C221AA9B6B1500 (const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::ThrowIfCheckDependenciesRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ThrowIfCheckDependenciesRunning_m146122F83C37BC92E9D26A680740ACE69176D3F3 (const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m9D482CC002D50200D99ED93589F27BD205B29951 (Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * __this, String_t* ___key0, FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE *, String_t*, FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>::Remove(!0)
inline bool Dictionary_2_Remove_m13F20B36BA2547B241E0A4FBD2B59AF376D184E9 (Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, ___key0, method);
}
// System.Void Firebase.FirebaseApp/CreateDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateDelegate__ctor_mA279FA3C2C3D5F9376130804EE01BB8DEDF9584D (CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::CreateAndTrack(Firebase.FirebaseApp/CreateDelegate,Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseApp_CreateAndTrack_m9432CF67F169FAFC2D57F7C8E2460CBE174CB6F7 (CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * ___createDelegate0, FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___existingProxy1, const RuntimeMethod* method);
// System.Int32 Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_GetLogLevelInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_Firebase_App_FirebaseApp_GetLogLevelInternal_m124AF04EF8A5F883FB0DFED5ABCB978565FE2201 (const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.String Firebase.FirebaseApp::get_Name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_mB5E945165A8F7DFAA21F0AD3A9E99CC3438943C5_inline (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m515EA1D865B2A27016C1EB39F63221194E999D9C (Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * __this, String_t* ___key0, FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE *, String_t*, FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m123A8D827D7B9CDF569B126376E779BB56D07DDA (Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * __this, intptr_t ___key0, FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 *, intptr_t, FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 *, const RuntimeMethod*))Dictionary_2_set_Item_m26B2DBC3BE8767E18A97FFCF3FB2EFC766886BD4_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>::get_Count()
inline int32_t Dictionary_2_get_Count_m0515F927B62810FC494B0582D39BB618A8DCAA5F (Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE *, const RuntimeMethod*))Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>::Remove(!0)
inline bool Dictionary_2_Remove_mD13DFEE994547121349DF25AFB8C66109EDF6F50 (Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * __this, intptr_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 *, intptr_t, const RuntimeMethod*))Dictionary_2_Remove_m8F5E306A3F995390237D97553B63674C8D1D725F_gshared)(__this, ___key0, method);
}
// System.Void Firebase.FirebaseApp::ReleaseReferenceInternal(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ReleaseReferenceInternal_mDDCBE7D04450E4A53C0708998720842CC840EF07 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::OnAllAppsDestroyed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_OnAllAppsDestroyed_m7C30233D9A14F2C241F723C40A62E739D6A9453B (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349 (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp/EnableModuleParams::.ctor(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableModuleParams__ctor_mC0CF508919EF04A896578538EAF80B4A6E58E750 (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * __this, String_t* ___csharp0, String_t* ___cpp1, bool ___always2, const RuntimeMethod* method);
// System.Void Firebase.AppUtil::SetEnabledAllAppCallbacks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetEnabledAllAppCallbacks_mC850A20177310AC3A44E421CB2F3C0ECE1CC9574 (bool ___arg00, const RuntimeMethod* method);
// System.String Firebase.FirebaseApp/EnableModuleParams::get_CSharpClassName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CSharpClassName_m652F90B63BD3DAA082A938D4CB58AD2BC6759F44_inline (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetType_mCF0A3B28889C9FFB9987C8D30C23DF0912E7C00C (String_t* ___typeName0);
// System.String Firebase.FirebaseApp/EnableModuleParams::get_CppModuleName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CppModuleName_m53DB9B2D254E157BB2311782D33920853A6BF042_inline (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * __this, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtil::GetEnabledAppCallbackByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtil_GetEnabledAppCallbackByName_m2C063D950392679E20AD11BD5169956A02E78FF1 (String_t* ___arg00, const RuntimeMethod* method);
// System.Boolean Firebase.FirebaseApp/EnableModuleParams::get_AlwaysEnable()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool EnableModuleParams_get_AlwaysEnable_m19451C262F0380C6DB2D8AAE316830AD8E7B1870_inline (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mE0D4736B7C636462B2AD246F65EFAF5F1785822F (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.AppUtil::SetEnabledAppCallbackByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetEnabledAppCallbackByName_m98EF16C68B04D64D2CBB59FE074711D5A06B3BD7 (String_t* ___arg00, bool ___arg11, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_mBA69907A1D799CD12ED44B611985B25FE4C626A2 (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t * Assembly_Load_m4640304E91781FC3D197CD014B0C2DCEAFCFFF55 (String_t* ___assemblyString0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m9EC42D4B1F765B882F516EE6D7970D51CF5D80DD (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___parameters1, const RuntimeMethod* method);
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_m6778555FEC2C05FCA0FF20B33431B2C076054FA6 (InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 * __this, int32_t ___result0, String_t* ___message1, Exception_t * ___inner2, const RuntimeMethod* method);
// Firebase.Platform.FirebaseAppUtils Firebase.Platform.FirebaseAppUtils::get_Instance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2 * FirebaseAppUtils_get_Instance_m9960DF708E432F14B1D2F4C78B388E853953B094_inline (const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::Create(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_Create_m89DB93F791D7C61D45C79484E9207C4967374BEA (RuntimeObject* ___appUtils0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::InitializeAppUtilCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_InitializeAppUtilCallbacks_mB1F7BFC4360EAFCA4E1726B81452753734568FE8 (const RuntimeMethod* method);
// System.String Firebase.Platform.PlatformInformation::get_DefaultConfigLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_DefaultConfigLocation_m7B32A608B4B90F6749B02AC1C0E87E4C904E9608 (const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::AppSetDefaultConfigPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_AppSetDefaultConfigPath_m53566882606C7038E0C2E2AD4182628B50D96F80 (String_t* ___path0, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp/CreateDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * CreateDelegate_Invoke_mFDC361DD320C47E8E5BB468EFAB257D7C23C3EE3 (CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * __this, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  FirebaseApp_getCPtr_mF922A07C69469D0EB5A268A9278C495805BDCA4F (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___obj0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mA9A0117D68338238E51E5928CDA8EB3DC9DA497B (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA (String_t* ___s0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mA942ECF01C92960B7AC2A8A21C9645DB220CA12C (Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * __this, intptr_t ___key0, FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 *, intptr_t, FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 **, const RuntimeMethod*))Dictionary_2_TryGetValue_mB972A6602BDD10CBB612188FDED9917370EC3F17_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>::get_Count()
inline int32_t Dictionary_2_get_Count_m5A4570138512C5E9062AA1F5914AF6C8B1F48F6F (Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 *, const RuntimeMethod*))Dictionary_2_get_Count_m9013B1C29722192C4B0C6E3315FFDA8F094D8A5A_gshared)(__this, method);
}
// System.String Firebase.Platform.PlatformInformation::get_RuntimeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_RuntimeName_mCD019D8389883E820ED30D97642D63F0BA844EAD (const RuntimeMethod* method);
// System.String Firebase.VersionInfo::get_SdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VersionInfo_get_SdkVersion_m55C4F788028216AA98C44DE5D9964D7A236D4E93 (const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::RegisterLibraryInternal(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_RegisterLibraryInternal_m33F0D35CAD2A634673F6A9D1610E0122FFB88637 (String_t* ___library0, String_t* ___version1, const RuntimeMethod* method);
// System.String Firebase.Platform.PlatformInformation::get_RuntimeVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_RuntimeVersion_m947E74AAC2129616DA7A9330BCE4B79EA8A422F0 (const RuntimeMethod* method);
// System.String Firebase.FirebaseApp::get_NameInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_NameInternal_m2752D24CD4D632B51C27AA926E3527828A19B6A2 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::AddReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_AddReference_m4E500E124497E17C5C4964F2CAEBDEB2ED3E8680 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method);
// System.Boolean Firebase.FirebaseApp::IsCheckDependenciesRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseApp_IsCheckDependenciesRunning_mE1A442A699DB9BEDC328975FC56B51C3769A6B8D (const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m36F8615CDD8E019D5C4E92D96E275F7A8836B86F (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m36F8615CDD8E019D5C4E92D96E275F7A8836B86F_gshared)(__this, ___object0, ___method1, method);
}
// !!0 Firebase.Platform.FirebaseHandler::RunOnMainThread<System.Boolean>(System.Func`1<!!0>)
inline bool FirebaseHandler_RunOnMainThread_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m7DDD35DE42BBD8FC4FBCDBBD936EBACE47E03440 (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___f0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *, const RuntimeMethod*))FirebaseHandler_RunOnMainThread_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m7DDD35DE42BBD8FC4FBCDBBD936EBACE47E03440_gshared)(___f0, method);
}
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * Thread_get_CurrentThread_mB7A83CAE2B9A74CEA053196DFD1AF1E7AB30A70E (const RuntimeMethod* method);
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m7FA85162CB00713B94EF5708B19120F791D3AAD1 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ThrowIfNull_m3502997B4E18EB792AD9ACE01EC5137CD9639E37 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method);
// Firebase.AppOptionsInternal Firebase.FirebaseApp::options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * FirebaseApp_options_m72A1560C41F3822AC08EC57C8B2D6FBB4248EE1B (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method);
// System.Void Firebase.AppOptions::.ctor(Firebase.AppOptionsInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions__ctor_m0E8C28A5A2726E3D9154CE0EC0F104C2906F05E4 (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * ___other0, const RuntimeMethod* method);
// System.IntPtr Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_options(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_Firebase_App_FirebaseApp_options_m558AEE708E1E3F1276946DF778B96EAF964C165E (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.AppOptionsInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptionsInternal__ctor_m0B3AED5F7890CC165932B67931DC3B625F018F4D (AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_NameInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_FirebaseApp_NameInternal_get_m1031D382B1EFF31DB99F4DDE7F85353146871CF7 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_CreateInternal__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_Firebase_App_FirebaseApp_CreateInternal__SWIG_0_m7C57AF8D589A0FAB3769762B145C7C822C8B060D (const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp__ctor_mECDB71535A9846F085CD59C6EA9261E640FE127A (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_FirebaseApp_ReleaseReferenceInternal_m8E2DF47124BF1A67C6BB04E57D422AE78BABE3F2 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_RegisterLibraryInternal(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_FirebaseApp_RegisterLibraryInternal_mC0827EF9ADAE73F66B0FD3481A52BF0CA2B01BD7 (String_t* ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_AppSetDefaultConfigPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_FirebaseApp_AppSetDefaultConfigPath_m988AC83C2A57803F630DCFD784AC3504636AD8CD (String_t* ___jarg10, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_DefaultName_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_FirebaseApp_DefaultName_get_m4A778152B530BD60EA311A032035B8EE0B88F693 (const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::CreateInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseApp_CreateInternal_m039014CF3B7DB1B092068767F49B9E0C9D9C11D6 (const RuntimeMethod* method);
// System.Boolean Firebase.FirebaseApp::InitializeCrashlyticsIfPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseApp_InitializeCrashlyticsIfPresent_mEC7562503FC321F112B1B90E0C7709175C1BA786 (const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp/EnableModuleParams::set_CSharpClassName(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void EnableModuleParams_set_CSharpClassName_m85BFA74C1608D81B49D7D5C45B297B76CCEE20F3_inline (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp/EnableModuleParams::set_CppModuleName(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void EnableModuleParams_set_CppModuleName_mA30925B48F2CE52E2E237F262F82FF7830CCE0A5_inline (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp/EnableModuleParams::set_AlwaysEnable(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void EnableModuleParams_set_AlwaysEnable_m7636D0CA28BE95D6F25261C8CEA5651AC5A47F84_inline (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseException::set_ErrorCode(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FirebaseException_set_ErrorCode_m4E3FC27532C7E7D78183D0393070E1895A54A316_inline (FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_delete_FutureBase(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_delete_FutureBase_mAD9EF7C7D0084FCBA7E08DDEA165A99B5AD1AB34 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Int32 Firebase.AppUtilPINVOKE::Firebase_App_FutureBase_status(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_Firebase_App_FutureBase_status_m8432BB5A381610C55302344E2038AE51BAF4D4AF (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Int32 Firebase.AppUtilPINVOKE::Firebase_App_FutureBase_error(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_Firebase_App_FutureBase_error_mD4C52D4D784968CE0D60A37DE882431CF3514C93 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_FutureBase_error_message(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_FutureBase_error_message_m1435CB8D1CE57C58E5175D0517F5D600189C2746 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureString::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_SWIG_CompletionDispatcher_m86EEC251866153D32AEE9B99F7BD7C6E4CC3CECD (int32_t ___key0, const RuntimeMethod* method);
// System.IntPtr Firebase.AppUtilPINVOKE::Firebase_App_FutureString_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_Firebase_App_FutureString_SWIGUpcast_m655F974F7F1851714F64ACBF724B3F31D8D64837 (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase__ctor_mC05DD84980454E9B8210087E01926E5D56FC017F (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Finalize_mAB21EE7CEC515CDD99FAB0686D59CB42082B7716 (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, const RuntimeMethod* method);
// System.Void Firebase.FutureString::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_SetCompletionData_mA6014D9C79E67378D636D7CC8D2360B71CE9317A (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_delete_FutureString(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_delete_FutureString_m8B3FAF01839DB496EEAEEFB13E527CB185BCB6B5 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_mE480130D78254414AA6A59E2FA63B9AFC4AC01BC (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, const RuntimeMethod* method);
// System.Void Firebase.FutureString/<GetTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0__ctor_mBC66A9655B530602D3A35807CFB3C180E613276A (U3CGetTaskU3Ec__AnonStorey0_t8F84D81AE3078B5547B427BBE15133EEE42E5FCC * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::.ctor()
inline void TaskCompletionSource_1__ctor_m4816A3753F0A96EF52B86E56D4DB3185881424D6 (TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m894F4B43C47FD23EB3FD138E3CBBD71203DC5FA7_gshared)(__this, method);
}
// Firebase.FutureStatus Firebase.FutureBase::status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_status_mD675FFD3FAE10D36169C16590EE3C6F1861DD136 (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, const RuntimeMethod* method);
// System.Void Firebase.FirebaseException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException__ctor_mB31E783657F428BA72B055DF8A4CE6EA6996996C (FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF * __this, int32_t ___errorCode0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_m58A8FA255D94C81F97A8B9D279A96F53AD196789 (TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536 *, Exception_t *, const RuntimeMethod*))TaskCompletionSource_1_SetException_mF32CD1B09A692369399D38F7B54F9FD2EC5394CE_gshared)(__this, ___exception0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.String>::get_Task()
inline Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * TaskCompletionSource_1_get_Task_m6BFB69D9B960DF3EB72B79FA840F0B9E8B300BA8_inline (TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * (*) (TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF1CB937DAB68DC43DA33893E95F48EFB07F385A0_gshared_inline)(__this, method);
}
// System.Void Firebase.FutureString/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mE4D2F42653B22E66EE78EDFA0A6F0FC9DE29F868 (Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.FutureString::SetOnCompletionCallback(Firebase.FutureString/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_SetOnCompletionCallback_m7D091BF76B1A886948A923C0DB78F9D7ABF92329 (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * __this, Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195 * ___userCompletionCallback0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void Firebase.FutureString::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_ThrowIfDisposed_m7418D0866866397DB8B214A7667285ED7A874664 (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * __this, const RuntimeMethod* method);
// System.Void Firebase.FutureString/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_mC109D1C9CBA64C8F062BAFB3C647075B3445C1C1 (SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString/Action>::.ctor()
inline void Dictionary_2__ctor_m75D77D1388F49077CA7C8049E3373DC2CDF94B16 (Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E *, const RuntimeMethod*))Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString/Action>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m5F7A387A231A2E62D7FBB45D7E13F5F5083D4E2F (Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E * __this, int32_t ___key0, Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E *, int32_t, Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195 *, const RuntimeMethod*))Dictionary_2_set_Item_mF9A6FBE4006C89D15B8C88B2CB46E9B24D18B7FC_gshared)(__this, ___key0, ___value1, method);
}
// System.IntPtr Firebase.FutureString::SWIG_OnCompletion(Firebase.FutureString/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FutureString_SWIG_OnCompletion_m496492F7C240FE1FB23AF0223E100D95981FA0A0 (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * __this, SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method);
// System.Void Firebase.FutureString::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_SWIG_FreeCompletionData_m728EE6C63C44CD43F72D2AC8D1AE44A5F4D9DEBB (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString/Action>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m6891153CBD9B055565200BCE3E921E28CA8F3A50 (Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E * __this, int32_t ___key0, Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E *, int32_t, Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m867F6DA953678D0333A55270B7C6EF38EFC293FF_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString/Action>::Remove(!0)
inline bool Dictionary_2_Remove_m8BCB218068F462B08A669960F27A69DFF2C7F5FE (Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m2204D6D532702FD13AB2A9AD8DB538E4E8FB1913_gshared)(__this, ___key0, method);
}
// System.Void Firebase.FutureString/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m38CEF6AC23E334A73051C8A8495BD589F9944C45 (Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195 * __this, const RuntimeMethod* method);
// System.IntPtr Firebase.AppUtilPINVOKE::Firebase_App_FutureString_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.FutureString/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_Firebase_App_FutureString_SWIG_OnCompletion_m20A7771AEEF1D03B0DE3047D36FC8BEE0D247C26 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_FutureString_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_FutureString_SWIG_FreeCompletionData_m606A677773D5976BC37FDDFE13238114E93DA466 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_FutureString_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_FutureString_GetResult_m86378A84E903FB2AB1BE9B5B285EDE23F3EC305D (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::SetCanceled()
inline void TaskCompletionSource_1_SetCanceled_m21ECE34BE990CF5720FE4EDF333FA8943E535157 (TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536 *, const RuntimeMethod*))TaskCompletionSource_1_SetCanceled_m9BD3702F5D2F7D1C0D9C7E4598B758F46B734B65_gshared)(__this, method);
}
// System.Int32 Firebase.FutureBase::error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_error_m70CFE004FF942C34ED11D221D0B6033AD40C1825 (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, const RuntimeMethod* method);
// System.String Firebase.FutureBase::error_message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureBase_error_message_m12EFFA84132AB25450D3D3F349A414EF597CCCE3 (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, const RuntimeMethod* method);
// System.String Firebase.FutureString::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureString_GetResult_mA8D502925B06DBE5B32FEFA08C37E1959A9531FB (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::SetResult(!0)
inline void TaskCompletionSource_1_SetResult_m54E364FB76FEE0422C52826F502FCC7C7E0C07B9 (TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536 * __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536 *, String_t*, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m0EBFE5138C570B9515B706987C2983D4DFBE5337_gshared)(__this, ___result0, method);
}
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1 (Exception_t * __this, const RuntimeMethod* method);
// System.Void Firebase.InitializationException::set_InitResult(Firebase.InitResult)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void InitializationException_set_InitResult_m26B14A46FFC550963C2A43651DE79C50B86F48E5_inline (InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m62590BC1925B7B354EBFD852E162CD170FEB861D (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.LogUtil::LogMessageFromCallback(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessageFromCallback_m51E15E038FD24735B401F08AE91DA68177B9C1F8 (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.LogUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil__ctor_mAFE789D82E7A48CFB20437F1C33A2FFAA2A61648 (LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4 * __this, const RuntimeMethod* method);
// System.Void Firebase.LogUtil/LogMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMessageDelegate__ctor_m0D3CDB2719AF22A8EF20626B9B82AC1A2F45E05E (LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.AppUtil::SetLogFunction(Firebase.LogUtil/LogMessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetLogFunction_m2FD7E09A6AED976A0754E2E993786AAA5834B084 (LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9 * ___arg00, const RuntimeMethod* method);
// System.Void Firebase.AppUtil::AppEnableLogCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_AppEnableLogCallback_m9FA92B86E6A3653121CBD5C2CA2DDD2C31B2BF04 (bool ___arg00, const RuntimeMethod* method);
// Firebase.Platform.PlatformLogLevel Firebase.LogUtil::ConvertLogLevel(Firebase.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogUtil_ConvertLogLevel_mFFA87AF048B8DBB1ECEA04BBD51542A04427C822 (int32_t ___logLevel0, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseLogger::LogMessage(Firebase.Platform.PlatformLogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseLogger_LogMessage_mEF2033A0588D651D162FFE29C9FA77A39E51233E (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Boolean Firebase.Platform.FirebaseLogger::get_CanRedirectNativeLogs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseLogger_get_CanRedirectNativeLogs_m29C5B1ACE567CEA890B6DA19D91AF37D1EDEEBC8 (const RuntimeMethod* method);
// System.Void Firebase.LogUtil::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_Dispose_m3309007CAF0503891DA296F1CB22D442BA63ABFF (LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4 * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0 (Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * __this, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::TranslateDllNotFoundException(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_TranslateDllNotFoundException_mC6F04F02034B21A8A258012156CA7F263FB594F6 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___closureToExecute0, const RuntimeMethod* method);
// System.Void Firebase.AppUtil::PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_PollCallbacks_mADFB4BC7209554590C31E37F8C08562E463F9D59 (const RuntimeMethod* method);
// Firebase.LogLevel Firebase.FirebaseApp::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseApp_get_LogLevel_mA1462E02A6B78D0F598CF9D3F22CAF13D9E29E8D (const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseAppUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtils__ctor_m0550C50AC91C0BC87D86B952856A53C97E3A8AC7 (FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2 * __this, const RuntimeMethod* method);
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
// System.Void Firebase.AppOptions::.ctor(Firebase.AppOptionsInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions__ctor_m0E8C28A5A2726E3D9154CE0EC0F104C2906F05E4 (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * ___other0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * L_0 = ___other0;
		NullCheck(L_0);
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_1 = AppOptionsInternal_get_DatabaseUrl_m64D08A736D02EEADF4E70BCCBBA2C30C454A2923(L_0, /*hidden argument*/NULL);
		AppOptions_set_DatabaseUrl_m366936ECD0092B0115C71E8D5FBCB1C424DC1295_inline(__this, L_1, /*hidden argument*/NULL);
		AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = AppOptionsInternal_get_AppId_m48CBD6852621E85DF9F09CF23D700A7977423CC8(L_2, /*hidden argument*/NULL);
		AppOptions_set_AppId_mCCA503158696E5130B84AA621D19DB71659A11E4_inline(__this, L_3, /*hidden argument*/NULL);
		AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * L_4 = ___other0;
		NullCheck(L_4);
		String_t* L_5 = AppOptionsInternal_get_ApiKey_m28D907FCBD5DDF8D69DCF49B239E2625314C0C00(L_4, /*hidden argument*/NULL);
		AppOptions_set_ApiKey_m740BF1DE16FD84D12C136647E49B08B5D3656375_inline(__this, L_5, /*hidden argument*/NULL);
		AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * L_6 = ___other0;
		NullCheck(L_6);
		String_t* L_7 = AppOptionsInternal_get_MessageSenderId_mD6223C71D2A6E3EF541C9545E7325BF9DB28CA86(L_6, /*hidden argument*/NULL);
		AppOptions_set_MessageSenderId_m068B2732D0F3031D9EE9E115B1CC0E915D611E15_inline(__this, L_7, /*hidden argument*/NULL);
		AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * L_8 = ___other0;
		NullCheck(L_8);
		String_t* L_9 = AppOptionsInternal_get_StorageBucket_m4F400D5B86B92623BDCFAEB5EA84BA4CAF4FAB06(L_8, /*hidden argument*/NULL);
		AppOptions_set_StorageBucket_m6B82FA59AB41A66ADAAFB936C25B6C14E9A9D6A0_inline(__this, L_9, /*hidden argument*/NULL);
		AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * L_10 = ___other0;
		NullCheck(L_10);
		String_t* L_11 = AppOptionsInternal_get_ProjectId_m91E98CD596C649395DA5AC4E58A834B0690C2CCA(L_10, /*hidden argument*/NULL);
		AppOptions_set_ProjectId_mD20A2123AD3700C29BF4DBE2FC07F170D624559F_inline(__this, L_11, /*hidden argument*/NULL);
		AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * L_12 = ___other0;
		NullCheck(L_12);
		String_t* L_13 = AppOptionsInternal_get_PackageName_m4311E1F6D19C5B937092B41899851411EBD77C92(L_12, /*hidden argument*/NULL);
		AppOptions_set_PackageName_m15D939044210630597188B47808BD3CCB19A2DA1_inline(__this, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppOptions::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_Dispose_m17BA5011BBEE56F0DA0DCD24D40B4F3053A59B04 (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Firebase.AppOptions::set_DatabaseUrl(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_set_DatabaseUrl_m366936ECD0092B0115C71E8D5FBCB1C424DC1295 (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___value0, const RuntimeMethod* method)
{
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_0 = ___value0;
		__this->set_U3CDatabaseUrlU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Firebase.AppOptions::set_AppId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_set_AppId_mCCA503158696E5130B84AA621D19DB71659A11E4 (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAppIdU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Firebase.AppOptions::set_ApiKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_set_ApiKey_m740BF1DE16FD84D12C136647E49B08B5D3656375 (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CApiKeyU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Firebase.AppOptions::set_MessageSenderId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_set_MessageSenderId_m068B2732D0F3031D9EE9E115B1CC0E915D611E15 (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageSenderIdU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Firebase.AppOptions::get_StorageBucket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptions_get_StorageBucket_mAB8AC18DB43252A87255F7B469F71D34611ECC4B (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CStorageBucketU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Firebase.AppOptions::set_StorageBucket(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_set_StorageBucket_m6B82FA59AB41A66ADAAFB936C25B6C14E9A9D6A0 (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CStorageBucketU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Firebase.AppOptions::set_ProjectId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_set_ProjectId_mD20A2123AD3700C29BF4DBE2FC07F170D624559F (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CProjectIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void Firebase.AppOptions::set_PackageName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_set_PackageName_m15D939044210630597188B47808BD3CCB19A2DA1 (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPackageNameU3Ek__BackingField_6(L_0);
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
// System.Void Firebase.AppOptionsInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptionsInternal__ctor_m0B3AED5F7890CC165932B67931DC3B625F018F4D (AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.AppOptionsInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptionsInternal_Finalize_m285D2CDA78DA64654E1E4B612AD7F271D100D3D6 (AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		AppOptionsInternal_Dispose_m03120579869C6DD7EF1A482582E28D9EDFAFA404(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.AppOptionsInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptionsInternal_Dispose_m03120579869C6DD7EF1A482582E28D9EDFAFA404 (AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppOptionsInternal_Dispose_m03120579869C6DD7EF1A482582E28D9EDFAFA404_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)L_2, /*hidden argument*/NULL);
			bool L_4 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0054;
			}
		}

IL_0026:
		{
			bool L_5 = __this->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_0043;
			}
		}

IL_0031:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_6 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
			AppUtilPINVOKE_Firebase_App_delete_AppOptionsInternal_mA2059BE5C6D6BC252B1ADF62336E68520262AA07(L_6, /*hidden argument*/NULL);
		}

IL_0043:
		{
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_7);
		}

IL_0054:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x66, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0066:
	{
		return;
	}
}
// System.Uri Firebase.AppOptionsInternal::get_DatabaseUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * AppOptionsInternal_get_DatabaseUrl_m64D08A736D02EEADF4E70BCCBBA2C30C454A2923 (AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppOptionsInternal_get_DatabaseUrl_m64D08A736D02EEADF4E70BCCBBA2C30C454A2923_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = AppOptionsInternal_GetDatabaseUrlInternal_mCF8AF64B1B1DE481F57652D5FDD5A2604DB9BC6B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_1 = FirebaseApp_UrlStringToUri_m09F6D262D86EE9898214D35510E1E8CEBF53D0DA(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Firebase.AppOptionsInternal::GetDatabaseUrlInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_GetDatabaseUrlInternal_mCF8AF64B1B1DE481F57652D5FDD5A2604DB9BC6B (AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppOptionsInternal_GetDatabaseUrlInternal_mCF8AF64B1B1DE481F57652D5FDD5A2604DB9BC6B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		String_t* L_1 = AppUtilPINVOKE_Firebase_App_AppOptionsInternal_GetDatabaseUrlInternal_m5342C566D1300649EF9F4C0A784C3FC29C8C05F4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AppOptionsInternal_GetDatabaseUrlInternal_mCF8AF64B1B1DE481F57652D5FDD5A2604DB9BC6B_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.AppOptionsInternal::get_AppId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_AppId_m48CBD6852621E85DF9F09CF23D700A7977423CC8 (AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppOptionsInternal_get_AppId_m48CBD6852621E85DF9F09CF23D700A7977423CC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		String_t* L_1 = AppUtilPINVOKE_Firebase_App_AppOptionsInternal_AppId_get_m1D0BA312B4EB816F5067D022E3EFC2E83E8D24EA(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AppOptionsInternal_get_AppId_m48CBD6852621E85DF9F09CF23D700A7977423CC8_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.AppOptionsInternal::get_ApiKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_ApiKey_m28D907FCBD5DDF8D69DCF49B239E2625314C0C00 (AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppOptionsInternal_get_ApiKey_m28D907FCBD5DDF8D69DCF49B239E2625314C0C00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		String_t* L_1 = AppUtilPINVOKE_Firebase_App_AppOptionsInternal_ApiKey_get_mF11F5251E8C047F2D0AB07EEA7479E2787B41372(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AppOptionsInternal_get_ApiKey_m28D907FCBD5DDF8D69DCF49B239E2625314C0C00_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.AppOptionsInternal::get_MessageSenderId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_MessageSenderId_mD6223C71D2A6E3EF541C9545E7325BF9DB28CA86 (AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppOptionsInternal_get_MessageSenderId_mD6223C71D2A6E3EF541C9545E7325BF9DB28CA86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		String_t* L_1 = AppUtilPINVOKE_Firebase_App_AppOptionsInternal_MessageSenderId_get_mA47CC56FF7441780BB5BDDE45BF849E7C6B706FD(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AppOptionsInternal_get_MessageSenderId_mD6223C71D2A6E3EF541C9545E7325BF9DB28CA86_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.AppOptionsInternal::get_StorageBucket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_StorageBucket_m4F400D5B86B92623BDCFAEB5EA84BA4CAF4FAB06 (AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppOptionsInternal_get_StorageBucket_m4F400D5B86B92623BDCFAEB5EA84BA4CAF4FAB06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		String_t* L_1 = AppUtilPINVOKE_Firebase_App_AppOptionsInternal_StorageBucket_get_mD18AD7E8E2A569028E6399386AE665CD6728EADE(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AppOptionsInternal_get_StorageBucket_m4F400D5B86B92623BDCFAEB5EA84BA4CAF4FAB06_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.AppOptionsInternal::get_ProjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_ProjectId_m91E98CD596C649395DA5AC4E58A834B0690C2CCA (AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppOptionsInternal_get_ProjectId_m91E98CD596C649395DA5AC4E58A834B0690C2CCA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		String_t* L_1 = AppUtilPINVOKE_Firebase_App_AppOptionsInternal_ProjectId_get_m9B8A4E351FFE25FFE1281459CEDB9A7401F65B7F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AppOptionsInternal_get_ProjectId_m91E98CD596C649395DA5AC4E58A834B0690C2CCA_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.AppOptionsInternal::get_PackageName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_PackageName_m4311E1F6D19C5B937092B41899851411EBD77C92 (AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppOptionsInternal_get_PackageName_m4311E1F6D19C5B937092B41899851411EBD77C92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		String_t* L_1 = AppUtilPINVOKE_Firebase_App_AppOptionsInternal_PackageName_get_m59E499377BA5E7A12779FABA272A4E2D89ECB07E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AppOptionsInternal_get_PackageName_m4311E1F6D19C5B937092B41899851411EBD77C92_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
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
// System.Void Firebase.AppUtil::PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_PollCallbacks_mADFB4BC7209554590C31E37F8C08562E463F9D59 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppUtil_PollCallbacks_mADFB4BC7209554590C31E37F8C08562E463F9D59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_Firebase_App_PollCallbacks_m4E579A12C727C9635562303C2F4B253EF091AFA4(/*hidden argument*/NULL);
		bool L_0 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Exception_t * L_1 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, AppUtil_PollCallbacks_mADFB4BC7209554590C31E37F8C08562E463F9D59_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void Firebase.AppUtil::AppEnableLogCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_AppEnableLogCallback_m9FA92B86E6A3653121CBD5C2CA2DDD2C31B2BF04 (bool ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppUtil_AppEnableLogCallback_m9FA92B86E6A3653121CBD5C2CA2DDD2C31B2BF04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___arg00;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_Firebase_App_AppEnableLogCallback_m33F371C4266DD2E0F5F6D6D72400234C9892DE3C(L_0, /*hidden argument*/NULL);
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, AppUtil_AppEnableLogCallback_m9FA92B86E6A3653121CBD5C2CA2DDD2C31B2BF04_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.Void Firebase.AppUtil::SetEnabledAllAppCallbacks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetEnabledAllAppCallbacks_mC850A20177310AC3A44E421CB2F3C0ECE1CC9574 (bool ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppUtil_SetEnabledAllAppCallbacks_mC850A20177310AC3A44E421CB2F3C0ECE1CC9574_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___arg00;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_Firebase_App_SetEnabledAllAppCallbacks_mEC3417E8E968F64991558FE9762572962D862FD2(L_0, /*hidden argument*/NULL);
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, AppUtil_SetEnabledAllAppCallbacks_mC850A20177310AC3A44E421CB2F3C0ECE1CC9574_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.Void Firebase.AppUtil::SetEnabledAppCallbackByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetEnabledAppCallbackByName_m98EF16C68B04D64D2CBB59FE074711D5A06B3BD7 (String_t* ___arg00, bool ___arg11, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppUtil_SetEnabledAppCallbackByName_m98EF16C68B04D64D2CBB59FE074711D5A06B3BD7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___arg00;
		bool L_1 = ___arg11;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_Firebase_App_SetEnabledAppCallbackByName_m034823F3747EB6054A3195157A31DE4DA5C21C81(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AppUtil_SetEnabledAppCallbackByName_m98EF16C68B04D64D2CBB59FE074711D5A06B3BD7_RuntimeMethod_var);
	}

IL_0017:
	{
		return;
	}
}
// System.Boolean Firebase.AppUtil::GetEnabledAppCallbackByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtil_GetEnabledAppCallbackByName_m2C063D950392679E20AD11BD5169956A02E78FF1 (String_t* ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppUtil_GetEnabledAppCallbackByName_m2C063D950392679E20AD11BD5169956A02E78FF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___arg00;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		bool L_1 = AppUtilPINVOKE_Firebase_App_GetEnabledAppCallbackByName_m9877D632F57AAFEFB397C33A537CDB03797DB7AE(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AppUtil_GetEnabledAppCallbackByName_m2C063D950392679E20AD11BD5169956A02E78FF1_RuntimeMethod_var);
	}

IL_0017:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.AppUtil::SetLogFunction(Firebase.LogUtil_LogMessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetLogFunction_m2FD7E09A6AED976A0754E2E993786AAA5834B084 (LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9 * ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppUtil_SetLogFunction_m2FD7E09A6AED976A0754E2E993786AAA5834B084_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9 * L_0 = ___arg00;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_Firebase_App_SetLogFunction_m22F7150D9129EB4F2FCE20986B379ADBB9C7C3D5(L_0, /*hidden argument*/NULL);
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, AppUtil_SetLogFunction_m2FD7E09A6AED976A0754E2E993786AAA5834B084_RuntimeMethod_var);
	}

IL_0016:
	{
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
// System.Void Firebase.AppUtilPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE__cctor_m323C5F5D15D57DD7481971BF43495E4BB0E232AD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppUtilPINVOKE__cctor_m323C5F5D15D57DD7481971BF43495E4BB0E232AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5 * L_0 = (SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5 *)il2cpp_codegen_object_new(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var);
		SWIGExceptionHelper__ctor_m9C08890DD2A3008937470A37320C49FFF3DAED5D(L_0, /*hidden argument*/NULL);
		((AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_StaticFields*)il2cpp_codegen_static_fields_for(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var))->set_swigExceptionHelper_0(L_0);
		SWIGStringHelper_t1A089E58729C0B6AFE44A957B1F061841F9BD49A * L_1 = (SWIGStringHelper_t1A089E58729C0B6AFE44A957B1F061841F9BD49A *)il2cpp_codegen_object_new(SWIGStringHelper_t1A089E58729C0B6AFE44A957B1F061841F9BD49A_il2cpp_TypeInfo_var);
		SWIGStringHelper__ctor_m9853D7D1C99D3DCD1F6F2506963B5717C6BC7B8C(L_1, /*hidden argument*/NULL);
		((AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_StaticFields*)il2cpp_codegen_static_fields_for(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var))->set_swigStringHelper_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_delete_FutureBase(void*);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_delete_FutureBase(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_delete_FutureBase_mAD9EF7C7D0084FCBA7E08DDEA165A99B5AD1AB34 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_delete_FutureBase)(____jarg10_marshaled);

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_App_FutureBase_status(void*);
// System.Int32 Firebase.AppUtilPINVOKE::Firebase_App_FutureBase_status(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_Firebase_App_FutureBase_status_m8432BB5A381610C55302344E2038AE51BAF4D4AF (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_FutureBase_status)(____jarg10_marshaled);

	return returnValue;
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_App_FutureBase_error(void*);
// System.Int32 Firebase.AppUtilPINVOKE::Firebase_App_FutureBase_error(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_Firebase_App_FutureBase_error_mD4C52D4D784968CE0D60A37DE882431CF3514C93 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_FutureBase_error)(____jarg10_marshaled);

	return returnValue;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_FutureBase_error_message(void*);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_FutureBase_error_message(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_FutureBase_error_message_m1435CB8D1CE57C58E5175D0517F5D600189C2746 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_FutureBase_error_message)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_App_FutureString_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
// System.IntPtr Firebase.AppUtilPINVOKE::Firebase_App_FutureString_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.FutureString_SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_Firebase_App_FutureString_SWIG_OnCompletion_m20A7771AEEF1D03B0DE3047D36FC8BEE0D247C26 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_FutureString_SWIG_OnCompletion)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_FutureString_SWIG_FreeCompletionData(void*, intptr_t);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_FutureString_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_FutureString_SWIG_FreeCompletionData_m606A677773D5976BC37FDDFE13238114E93DA466 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_FutureString_SWIG_FreeCompletionData)(____jarg10_marshaled, ___jarg21);

}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_FutureString_GetResult(void*);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_FutureString_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_FutureString_GetResult_m86378A84E903FB2AB1BE9B5B285EDE23F3EC305D (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_FutureString_GetResult)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_delete_FutureString(void*);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_delete_FutureString(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_delete_FutureString_m8B3FAF01839DB496EEAEEFB13E527CB185BCB6B5 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_delete_FutureString)(____jarg10_marshaled);

}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_AppOptionsInternal_GetDatabaseUrlInternal(void*);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_GetDatabaseUrlInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_GetDatabaseUrlInternal_m5342C566D1300649EF9F4C0A784C3FC29C8C05F4 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_AppOptionsInternal_GetDatabaseUrlInternal)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_AppOptionsInternal_AppId_get(void*);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_AppId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_AppId_get_m1D0BA312B4EB816F5067D022E3EFC2E83E8D24EA (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_AppOptionsInternal_AppId_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_AppOptionsInternal_ApiKey_get(void*);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_ApiKey_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_ApiKey_get_mF11F5251E8C047F2D0AB07EEA7479E2787B41372 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_AppOptionsInternal_ApiKey_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_AppOptionsInternal_MessageSenderId_get(void*);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_MessageSenderId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_MessageSenderId_get_mA47CC56FF7441780BB5BDDE45BF849E7C6B706FD (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_AppOptionsInternal_MessageSenderId_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_AppOptionsInternal_StorageBucket_get(void*);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_StorageBucket_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_StorageBucket_get_mD18AD7E8E2A569028E6399386AE665CD6728EADE (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_AppOptionsInternal_StorageBucket_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_AppOptionsInternal_ProjectId_get(void*);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_ProjectId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_ProjectId_get_m9B8A4E351FFE25FFE1281459CEDB9A7401F65B7F (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_AppOptionsInternal_ProjectId_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_AppOptionsInternal_PackageName_get(void*);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_PackageName_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_PackageName_get_m59E499377BA5E7A12779FABA272A4E2D89ECB07E (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_AppOptionsInternal_PackageName_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_delete_AppOptionsInternal(void*);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_delete_AppOptionsInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_delete_AppOptionsInternal_mA2059BE5C6D6BC252B1ADF62336E68520262AA07 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_delete_AppOptionsInternal)(____jarg10_marshaled);

}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_App_FirebaseApp_options(void*);
// System.IntPtr Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_options(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_Firebase_App_FirebaseApp_options_m558AEE708E1E3F1276946DF778B96EAF964C165E (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_FirebaseApp_options)(____jarg10_marshaled);

	return returnValue;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_FirebaseApp_NameInternal_get(void*);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_NameInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_FirebaseApp_NameInternal_get_m1031D382B1EFF31DB99F4DDE7F85353146871CF7 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_FirebaseApp_NameInternal_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_App_FirebaseApp_CreateInternal__SWIG_0();
// System.IntPtr Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_CreateInternal__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_Firebase_App_FirebaseApp_CreateInternal__SWIG_0_m7C57AF8D589A0FAB3769762B145C7C822C8B060D (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_FirebaseApp_CreateInternal__SWIG_0)();

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_FirebaseApp_ReleaseReferenceInternal(void*);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_FirebaseApp_ReleaseReferenceInternal_m8E2DF47124BF1A67C6BB04E57D422AE78BABE3F2 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_FirebaseApp_ReleaseReferenceInternal)(____jarg10_marshaled);

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_App_FirebaseApp_GetLogLevelInternal();
// System.Int32 Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_GetLogLevelInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_Firebase_App_FirebaseApp_GetLogLevelInternal_m124AF04EF8A5F883FB0DFED5ABCB978565FE2201 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_FirebaseApp_GetLogLevelInternal)();

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_FirebaseApp_RegisterLibraryInternal(char*, char*);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_RegisterLibraryInternal(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_FirebaseApp_RegisterLibraryInternal_mC0827EF9ADAE73F66B0FD3481A52BF0CA2B01BD7 (String_t* ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_FirebaseApp_RegisterLibraryInternal)(____jarg10_marshaled, ____jarg21_marshaled);

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_FirebaseApp_AppSetDefaultConfigPath(char*);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_AppSetDefaultConfigPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_FirebaseApp_AppSetDefaultConfigPath_m988AC83C2A57803F630DCFD784AC3504636AD8CD (String_t* ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_FirebaseApp_AppSetDefaultConfigPath)(____jarg10_marshaled);

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_FirebaseApp_DefaultName_get();
// System.String Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_DefaultName_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_FirebaseApp_DefaultName_get_m4A778152B530BD60EA311A032035B8EE0B88F693 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_FirebaseApp_DefaultName_get)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_PollCallbacks();
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_PollCallbacks_m4E579A12C727C9635562303C2F4B253EF091AFA4 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_PollCallbacks)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_AppEnableLogCallback(int32_t);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_AppEnableLogCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_AppEnableLogCallback_m33F371C4266DD2E0F5F6D6D72400234C9892DE3C (bool ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_AppEnableLogCallback)(static_cast<int32_t>(___jarg10));

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_SetEnabledAllAppCallbacks(int32_t);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_SetEnabledAllAppCallbacks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_SetEnabledAllAppCallbacks_mEC3417E8E968F64991558FE9762572962D862FD2 (bool ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_SetEnabledAllAppCallbacks)(static_cast<int32_t>(___jarg10));

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_SetEnabledAppCallbackByName(char*, int32_t);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_SetEnabledAppCallbackByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_SetEnabledAppCallbackByName_m034823F3747EB6054A3195157A31DE4DA5C21C81 (String_t* ___jarg10, bool ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_SetEnabledAppCallbackByName)(____jarg10_marshaled, static_cast<int32_t>(___jarg21));

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_App_GetEnabledAppCallbackByName(char*);
// System.Boolean Firebase.AppUtilPINVOKE::Firebase_App_GetEnabledAppCallbackByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtilPINVOKE_Firebase_App_GetEnabledAppCallbackByName_m9877D632F57AAFEFB397C33A537CDB03797DB7AE (String_t* ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_GetEnabledAppCallbackByName)(____jarg10_marshaled);

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_SetLogFunction(Il2CppMethodPointer);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_SetLogFunction(Firebase.LogUtil_LogMessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_SetLogFunction_m22F7150D9129EB4F2FCE20986B379ADBB9C7C3D5 (LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9 * ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___jarg10' to native representation
	Il2CppMethodPointer ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg10));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_SetLogFunction)(____jarg10_marshaled);

}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_App_FutureString_SWIGUpcast(intptr_t);
// System.IntPtr Firebase.AppUtilPINVOKE::Firebase_App_FutureString_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_Firebase_App_FutureString_SWIGUpcast_m655F974F7F1851714F64ACBF724B3F31D8D64837 (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_FutureString_SWIGUpcast)(___jarg10);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_mFE7727F29EF454DC82F7773C7DCA7DC4B9DCE688(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_mFE7727F29EF454DC82F7773C7DCA7DC4B9DCE688(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m66D325C658E4D4A6F84E8BFF2A532FAAE96D5B5C(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m66D325C658E4D4A6F84E8BFF2A532FAAE96D5B5C(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_mEBC984AA86593D05467BC12012A3E1E33953ADED(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_mEBC984AA86593D05467BC12012A3E1E33953ADED(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD9473B8DC134A0E6BCE15305DC2E12E53AF6236E(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD9473B8DC134A0E6BCE15305DC2E12E53AF6236E(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_mB08BAC65C0DB20E0361AD747E5009B62EAACC5F8(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_mB08BAC65C0DB20E0361AD747E5009B62EAACC5F8(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_mF62073712A93DD7570BEC306E4E2DF6049F31EA9(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_mF62073712A93DD7570BEC306E4E2DF6049F31EA9(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m59B1FD0225B32443CC0685A249F0A301693C2744(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_m59B1FD0225B32443CC0685A249F0A301693C2744(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m5F381925BBBE581ADE8384B76FEA7D208B69ED4D(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m5F381925BBBE581ADE8384B76FEA7D208B69ED4D(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m71E895F1202CBDC1909619B221AC6AB3276D7AF7(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_m71E895F1202CBDC1909619B221AC6AB3276D7AF7(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m8FDE1CE2A3D3EB2DA8C7C12E28DD90C15E84D946(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_m8FDE1CE2A3D3EB2DA8C7C12E28DD90C15E84D946(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m8EC608208492B67293B9C2AC06D7B85B5B1B26E4(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m8EC608208492B67293B9C2AC06D7B85B5B1B26E4(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_mA47B953C5D09FDB764911484316FFDAAB4B0BE4A(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_mA47B953C5D09FDB764911484316FFDAAB4B0BE4A(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_m1DAEF08C4FAD2181E64B920B843C903538D09327(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_m1DAEF08C4FAD2181E64B920B843C903538D09327(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m2DDA9CC01A5B010A4D682F0615F89EFEA2D3A385(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m2DDA9CC01A5B010A4D682F0615F89EFEA2D3A385(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_m0CCC85BDED6DE2F7F696C32F04FBFD3AAE6DCABF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper__cctor_m0CCC85BDED6DE2F7F696C32F04FBFD3AAE6DCABF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * L_0 = (ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 *)il2cpp_codegen_object_new(ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mFA7CF73187B3CCF3692F0FAEB489B4C033D031C4(L_0, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingApplicationException_mFE7727F29EF454DC82F7773C7DCA7DC4B9DCE688_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->set_applicationDelegate_0(L_0);
		ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * L_1 = (ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 *)il2cpp_codegen_object_new(ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mFA7CF73187B3CCF3692F0FAEB489B4C033D031C4(L_1, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArithmeticException_m66D325C658E4D4A6F84E8BFF2A532FAAE96D5B5C_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->set_arithmeticDelegate_1(L_1);
		ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * L_2 = (ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 *)il2cpp_codegen_object_new(ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mFA7CF73187B3CCF3692F0FAEB489B4C033D031C4(L_2, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingDivideByZeroException_mEBC984AA86593D05467BC12012A3E1E33953ADED_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->set_divideByZeroDelegate_2(L_2);
		ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * L_3 = (ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 *)il2cpp_codegen_object_new(ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mFA7CF73187B3CCF3692F0FAEB489B4C033D031C4(L_3, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD9473B8DC134A0E6BCE15305DC2E12E53AF6236E_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->set_indexOutOfRangeDelegate_3(L_3);
		ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * L_4 = (ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 *)il2cpp_codegen_object_new(ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mFA7CF73187B3CCF3692F0FAEB489B4C033D031C4(L_4, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidCastException_mB08BAC65C0DB20E0361AD747E5009B62EAACC5F8_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->set_invalidCastDelegate_4(L_4);
		ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * L_5 = (ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 *)il2cpp_codegen_object_new(ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mFA7CF73187B3CCF3692F0FAEB489B4C033D031C4(L_5, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidOperationException_mF62073712A93DD7570BEC306E4E2DF6049F31EA9_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->set_invalidOperationDelegate_5(L_5);
		ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * L_6 = (ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 *)il2cpp_codegen_object_new(ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mFA7CF73187B3CCF3692F0FAEB489B4C033D031C4(L_6, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIOException_m59B1FD0225B32443CC0685A249F0A301693C2744_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->set_ioDelegate_6(L_6);
		ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * L_7 = (ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 *)il2cpp_codegen_object_new(ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mFA7CF73187B3CCF3692F0FAEB489B4C033D031C4(L_7, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingNullReferenceException_m5F381925BBBE581ADE8384B76FEA7D208B69ED4D_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->set_nullReferenceDelegate_7(L_7);
		ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * L_8 = (ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 *)il2cpp_codegen_object_new(ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mFA7CF73187B3CCF3692F0FAEB489B4C033D031C4(L_8, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOutOfMemoryException_m71E895F1202CBDC1909619B221AC6AB3276D7AF7_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->set_outOfMemoryDelegate_8(L_8);
		ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * L_9 = (ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 *)il2cpp_codegen_object_new(ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mFA7CF73187B3CCF3692F0FAEB489B4C033D031C4(L_9, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOverflowException_m8FDE1CE2A3D3EB2DA8C7C12E28DD90C15E84D946_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->set_overflowDelegate_9(L_9);
		ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * L_10 = (ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 *)il2cpp_codegen_object_new(ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mFA7CF73187B3CCF3692F0FAEB489B4C033D031C4(L_10, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingSystemException_m8EC608208492B67293B9C2AC06D7B85B5B1B26E4_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->set_systemDelegate_10(L_10);
		ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * L_11 = (ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m91C0CA33EFF5FCC3CE1D6355C042911404158888(L_11, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentException_mA47B953C5D09FDB764911484316FFDAAB4B0BE4A_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->set_argumentDelegate_11(L_11);
		ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * L_12 = (ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m91C0CA33EFF5FCC3CE1D6355C042911404158888(L_12, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentNullException_m1DAEF08C4FAD2181E64B920B843C903538D09327_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->set_argumentNullDelegate_12(L_12);
		ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * L_13 = (ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m91C0CA33EFF5FCC3CE1D6355C042911404158888(L_13, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m2DDA9CC01A5B010A4D682F0615F89EFEA2D3A385_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->set_argumentOutOfRangeDelegate_13(L_13);
		ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * L_14 = ((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->get_applicationDelegate_0();
		ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * L_15 = ((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->get_arithmeticDelegate_1();
		ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * L_16 = ((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->get_divideByZeroDelegate_2();
		ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * L_17 = ((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->get_indexOutOfRangeDelegate_3();
		ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * L_18 = ((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->get_invalidCastDelegate_4();
		ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * L_19 = ((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->get_invalidOperationDelegate_5();
		ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * L_20 = ((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->get_ioDelegate_6();
		ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * L_21 = ((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->get_nullReferenceDelegate_7();
		ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * L_22 = ((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->get_outOfMemoryDelegate_8();
		ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * L_23 = ((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->get_overflowDelegate_9();
		ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * L_24 = ((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->get_systemDelegate_10();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AppUtil_mE2D33D9FA7B93BB5030DCA905D343EA6450F5BAE(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * L_25 = ((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->get_argumentDelegate_11();
		ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * L_26 = ((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->get_argumentNullDelegate_12();
		ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * L_27 = ((SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5_il2cpp_TypeInfo_var))->get_argumentOutOfRangeDelegate_13();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AppUtil_mAD2F9A77CA68FFB83FABFC579B2D13DE235E02E3(L_25, L_26, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m9C08890DD2A3008937470A37320C49FFF3DAED5D (SWIGExceptionHelper_tA53E9178D465E7BB681BCE21B80AF1C40D82A5A5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_AppUtil(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_AppUtil(Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AppUtil_mE2D33D9FA7B93BB5030DCA905D343EA6450F5BAE (ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___applicationDelegate0, ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___arithmeticDelegate1, ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___divideByZeroDelegate2, ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___indexOutOfRangeDelegate3, ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___invalidCastDelegate4, ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___invalidOperationDelegate5, ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___ioDelegate6, ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___nullReferenceDelegate7, ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___outOfMemoryDelegate8, ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___overflowDelegate9, ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * ___systemExceptionDelegate10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___applicationDelegate0' to native representation
	Il2CppMethodPointer ____applicationDelegate0_marshaled = NULL;
	____applicationDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___applicationDelegate0));

	// Marshaling of parameter '___arithmeticDelegate1' to native representation
	Il2CppMethodPointer ____arithmeticDelegate1_marshaled = NULL;
	____arithmeticDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___arithmeticDelegate1));

	// Marshaling of parameter '___divideByZeroDelegate2' to native representation
	Il2CppMethodPointer ____divideByZeroDelegate2_marshaled = NULL;
	____divideByZeroDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___divideByZeroDelegate2));

	// Marshaling of parameter '___indexOutOfRangeDelegate3' to native representation
	Il2CppMethodPointer ____indexOutOfRangeDelegate3_marshaled = NULL;
	____indexOutOfRangeDelegate3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___indexOutOfRangeDelegate3));

	// Marshaling of parameter '___invalidCastDelegate4' to native representation
	Il2CppMethodPointer ____invalidCastDelegate4_marshaled = NULL;
	____invalidCastDelegate4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidCastDelegate4));

	// Marshaling of parameter '___invalidOperationDelegate5' to native representation
	Il2CppMethodPointer ____invalidOperationDelegate5_marshaled = NULL;
	____invalidOperationDelegate5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidOperationDelegate5));

	// Marshaling of parameter '___ioDelegate6' to native representation
	Il2CppMethodPointer ____ioDelegate6_marshaled = NULL;
	____ioDelegate6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ioDelegate6));

	// Marshaling of parameter '___nullReferenceDelegate7' to native representation
	Il2CppMethodPointer ____nullReferenceDelegate7_marshaled = NULL;
	____nullReferenceDelegate7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___nullReferenceDelegate7));

	// Marshaling of parameter '___outOfMemoryDelegate8' to native representation
	Il2CppMethodPointer ____outOfMemoryDelegate8_marshaled = NULL;
	____outOfMemoryDelegate8_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___outOfMemoryDelegate8));

	// Marshaling of parameter '___overflowDelegate9' to native representation
	Il2CppMethodPointer ____overflowDelegate9_marshaled = NULL;
	____overflowDelegate9_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___overflowDelegate9));

	// Marshaling of parameter '___systemExceptionDelegate10' to native representation
	Il2CppMethodPointer ____systemExceptionDelegate10_marshaled = NULL;
	____systemExceptionDelegate10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___systemExceptionDelegate10));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_AppUtil)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacksArgument_AppUtil(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_AppUtil(Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AppUtil_mAD2F9A77CA68FFB83FABFC579B2D13DE235E02E3 (ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * ___argumentDelegate0, ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * ___argumentNullDelegate1, ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___argumentDelegate0' to native representation
	Il2CppMethodPointer ____argumentDelegate0_marshaled = NULL;
	____argumentDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentDelegate0));

	// Marshaling of parameter '___argumentNullDelegate1' to native representation
	Il2CppMethodPointer ____argumentNullDelegate1_marshaled = NULL;
	____argumentNullDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentNullDelegate1));

	// Marshaling of parameter '___argumentOutOfRangeDelegate2' to native representation
	Il2CppMethodPointer ____argumentOutOfRangeDelegate2_marshaled = NULL;
	____argumentOutOfRangeDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentOutOfRangeDelegate2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacksArgument_AppUtil)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);

}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_mFE7727F29EF454DC82F7773C7DCA7DC4B9DCE688 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingApplicationException_mFE7727F29EF454DC82F7773C7DCA7DC4B9DCE688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_2 = (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)il2cpp_codegen_object_new(ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m86001767F702444249A31BCD88319B9B3F6F9393(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m66D325C658E4D4A6F84E8BFF2A532FAAE96D5B5C (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArithmeticException_m66D325C658E4D4A6F84E8BFF2A532FAAE96D5B5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269 * L_2 = (ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269 *)il2cpp_codegen_object_new(ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m1412E36F7AF7D25CF6A00670AE2296E88DA85F5F(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m86001767F702444249A31BCD88319B9B3F6F9393(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_mEBC984AA86593D05467BC12012A3E1E33953ADED (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingDivideByZeroException_mEBC984AA86593D05467BC12012A3E1E33953ADED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC * L_2 = (DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC *)il2cpp_codegen_object_new(DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC_il2cpp_TypeInfo_var);
		DivideByZeroException__ctor_m12EDCCC81402AA666F9C3CF1CB8A8A7AA8D61169(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m86001767F702444249A31BCD88319B9B3F6F9393(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD9473B8DC134A0E6BCE15305DC2E12E53AF6236E (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD9473B8DC134A0E6BCE15305DC2E12E53AF6236E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_2 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m6CE231E888365F20BD05664560F7AF3830E9D21A(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m86001767F702444249A31BCD88319B9B3F6F9393(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_mB08BAC65C0DB20E0361AD747E5009B62EAACC5F8 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidCastException_mB08BAC65C0DB20E0361AD747E5009B62EAACC5F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_2 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m54AEC55A8A1F1EAD6485B691BB597C7EB284B2A5(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m86001767F702444249A31BCD88319B9B3F6F9393(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_mF62073712A93DD7570BEC306E4E2DF6049F31EA9 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidOperationException_mF62073712A93DD7570BEC306E4E2DF6049F31EA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_2 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC40AA9579B996C6FBAE023590139C16304D81DC6(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m86001767F702444249A31BCD88319B9B3F6F9393(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m59B1FD0225B32443CC0685A249F0A301693C2744 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIOException_m59B1FD0225B32443CC0685A249F0A301693C2744_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_2 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_m37262C706BEB979358ABEFEA9F9F253E8773D2B7(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m86001767F702444249A31BCD88319B9B3F6F9393(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m5F381925BBBE581ADE8384B76FEA7D208B69ED4D (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingNullReferenceException_m5F381925BBBE581ADE8384B76FEA7D208B69ED4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_2 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mCD292E9CAC2B24447B04F5404C318B1B2AF4023D(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m86001767F702444249A31BCD88319B9B3F6F9393(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m71E895F1202CBDC1909619B221AC6AB3276D7AF7 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOutOfMemoryException_m71E895F1202CBDC1909619B221AC6AB3276D7AF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 * L_2 = (OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 *)il2cpp_codegen_object_new(OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m155C798916559886F6DD9C93B414E5764C55FD52(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m86001767F702444249A31BCD88319B9B3F6F9393(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m8FDE1CE2A3D3EB2DA8C7C12E28DD90C15E84D946 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOverflowException_m8FDE1CE2A3D3EB2DA8C7C12E28DD90C15E84D946_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * L_2 = (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D *)il2cpp_codegen_object_new(OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var);
		OverflowException__ctor_m15CD001EEB2E79D7497E101546B04D9A5520357E(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m86001767F702444249A31BCD88319B9B3F6F9393(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m8EC608208492B67293B9C2AC06D7B85B5B1B26E4 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingSystemException_m8EC608208492B67293B9C2AC06D7B85B5B1B26E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 * L_2 = (SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 *)il2cpp_codegen_object_new(SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782_il2cpp_TypeInfo_var);
		SystemException__ctor_mA18D2EA5642C066F35CB8C965398F9A542C33B0A(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m86001767F702444249A31BCD88319B9B3F6F9393(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_mA47B953C5D09FDB764911484316FFDAAB4B0BE4A (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentException_mA47B953C5D09FDB764911484316FFDAAB4B0BE4A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___paramName1;
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8E5D9390593273B9774DBD2E967805E8EDE668E3(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		SWIGPendingException_Set_m86001767F702444249A31BCD88319B9B3F6F9393(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m1DAEF08C4FAD2181E64B920B843C903538D09327 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentNullException_m1DAEF08C4FAD2181E64B920B843C903538D09327_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_2, _stringLiteralA804D931F27BE6EF35191274DAF148C0B4FCEEF6, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_8 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m9EA692D49986AEBAC433CE3381331146109AE20F(L_8, L_6, L_7, /*hidden argument*/NULL);
		SWIGPendingException_Set_m86001767F702444249A31BCD88319B9B3F6F9393(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m2DDA9CC01A5B010A4D682F0615F89EFEA2D3A385 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m2DDA9CC01A5B010A4D682F0615F89EFEA2D3A385_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_2, _stringLiteralA804D931F27BE6EF35191274DAF148C0B4FCEEF6, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_8 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_8, L_6, L_7, /*hidden argument*/NULL);
		SWIGPendingException_Set_m86001767F702444249A31BCD88319B9B3F6F9393(L_8, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC (ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Marshaling of parameter '___paramName1' to native representation
	char* ____paramName1_marshaled = NULL;
	____paramName1_marshaled = il2cpp_codegen_marshal_string(___paramName1);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled, ____paramName1_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramName1' native representation
	il2cpp_codegen_marshal_free(____paramName1_marshaled);
	____paramName1_marshaled = NULL;

}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m91C0CA33EFF5FCC3CE1D6355C042911404158888 (ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m1C77849554DD44FAE777ED68077C13ABF59ADE43 (ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0, ___paramName1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0, ___paramName1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___paramName1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0, ___paramName1);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0, ___paramName1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), ___paramName1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_mEB25DD9E17F86D1A233BA5EF1E395FD625312881 (ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * __this, String_t* ___message0, String_t* ___paramName1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___message0;
	__d_args[1] = ___paramName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_m77D70EC503C4674AF2D8B2EB7558954A80B31369 (ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 (ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mFA7CF73187B3CCF3692F0FAEB489B4C033D031C4 (ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_m7736AAF7D7D6C5399A9681591A6CA552951B15E5 (ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_m3B6B207EBEB006B8DE9F69A45479252765D12C61 (ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * __this, String_t* ___message0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_m1FD77871632D606344B416763FAC1913243AEFB8 (ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Boolean Firebase.AppUtilPINVOKE_SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)0;
		int32_t L_0 = ((SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m86001767F702444249A31BCD88319B9B3F6F9393 (Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Set_m86001767F702444249A31BCD88319B9B3F6F9393_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Exception_t * L_0 = ((SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var))->get_pendingException_0();
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral519E5A114736C3C9A5709C059C9D5F69D5683AB2, L_2, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A, /*hidden argument*/NULL);
		Exception_t * L_4 = ___e0;
		ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_5 = (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)il2cpp_codegen_object_new(ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F(L_5, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, SWIGPendingException_Set_m86001767F702444249A31BCD88319B9B3F6F9393_RuntimeMethod_var);
	}

IL_002a:
	{
		Exception_t * L_6 = ___e0;
		((SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var))->set_pendingException_0(L_6);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		RuntimeObject * L_9 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_9, /*hidden argument*/NULL);
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		int32_t L_10 = ((SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		IL2CPP_LEAVE(0x59, FINALLY_0052);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0059:
	{
		return;
	}
}
// System.Exception Firebase.AppUtilPINVOKE_SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (Exception_t *)NULL;
		int32_t L_0 = ((SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_2 = ((SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = L_2;
		((SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		RuntimeObject * L_5 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_5, /*hidden argument*/NULL);
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		int32_t L_6 = ((SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		IL2CPP_LEAVE(0x4C, FINALLY_0045);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_1;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
		Exception_t * L_8 = V_0;
		return L_8;
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_mF4B58DD5B3526C5E91D71786D528CC4ADADCF243(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue = SWIGStringHelper_CreateString_mF4B58DD5B3526C5E91D71786D528CC4ADADCF243(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.AppUtilPINVOKE_SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_mB179B7CB11DDEA60FCC60E324B32E47BDBA6E4B9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGStringHelper__cctor_mB179B7CB11DDEA60FCC60E324B32E47BDBA6E4B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF * L_0 = (SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF *)il2cpp_codegen_object_new(SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF_il2cpp_TypeInfo_var);
		SWIGStringDelegate__ctor_mFF996766F91D11AC79C2D81A824FDA4E6196E156(L_0, NULL, (intptr_t)((intptr_t)SWIGStringHelper_CreateString_mF4B58DD5B3526C5E91D71786D528CC4ADADCF243_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGStringHelper_t1A089E58729C0B6AFE44A957B1F061841F9BD49A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t1A089E58729C0B6AFE44A957B1F061841F9BD49A_il2cpp_TypeInfo_var))->set_stringDelegate_0(L_0);
		SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF * L_1 = ((SWIGStringHelper_t1A089E58729C0B6AFE44A957B1F061841F9BD49A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t1A089E58729C0B6AFE44A957B1F061841F9BD49A_il2cpp_TypeInfo_var))->get_stringDelegate_0();
		SWIGStringHelper_SWIGRegisterStringCallback_AppUtil_mF30163D65D26AD200AEA5C9047A2EBFE1835E836(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m9853D7D1C99D3DCD1F6F2506963B5717C6BC7B8C (SWIGStringHelper_t1A089E58729C0B6AFE44A957B1F061841F9BD49A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_AppUtil(Il2CppMethodPointer);
// System.Void Firebase.AppUtilPINVOKE_SWIGStringHelper::SWIGRegisterStringCallback_AppUtil(Firebase.AppUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_AppUtil_mF30163D65D26AD200AEA5C9047A2EBFE1835E836 (SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF * ___stringDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_AppUtil)(____stringDelegate0_marshaled);

}
// System.String Firebase.AppUtilPINVOKE_SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mF4B58DD5B3526C5E91D71786D528CC4ADADCF243 (String_t* ___cString0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___cString0;
		return L_0;
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
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF (SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.AppUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_mFF996766F91D11AC79C2D81A824FDA4E6196E156 (SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String Firebase.AppUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m1A7283ABE06BABDF3A6B0EE1F52D6D32EA7F042C (SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF * __this, String_t* ___message0, const RuntimeMethod* method)
{
	String_t* result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
					else
						result = GenericVirtFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						result = VirtFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						result = GenericVirtFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						result = VirtFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef String_t* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), targetMethod);
				}
				else
				{
					typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Firebase.AppUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_m9EFB7B39A0A45119085366E165D79F0E6429A2F5 (SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF * __this, String_t* ___message0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.String Firebase.AppUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_m5433E9F970EFADE7E402CA0693BB4019B31FC721 (SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (String_t*)__result;
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
// System.String Firebase.ErrorMessages::get_DependencyNotFoundErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorMessages_get_DependencyNotFoundErrorMessage_m6457663EBE0DBF1CFF53BD25AD45A51A8619CE66 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ErrorMessages_get_DependencyNotFoundErrorMessage_m6457663EBE0DBF1CFF53BD25AD45A51A8619CE66_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = PlatformInformation_get_IsAndroid_m61250012539009D27371075104AFBDE2549BB77E(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_il2cpp_TypeInfo_var);
		String_t* L_1 = ((ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_il2cpp_TypeInfo_var))->get_DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0();
		return L_1;
	}

IL_0010:
	{
		bool L_2 = PlatformInformation_get_IsIOS_mEC53C8E1719192F4A5E5A5C919752D9772706573(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_il2cpp_TypeInfo_var);
		String_t* L_3 = ((ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_il2cpp_TypeInfo_var))->get_DEPENDENCY_NOT_FOUND_ERROR_IOS_1();
		return L_3;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_il2cpp_TypeInfo_var);
		String_t* L_4 = ((ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_il2cpp_TypeInfo_var))->get_DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2();
		return L_4;
	}
}
// System.String Firebase.ErrorMessages::get_DllNotFoundExceptionErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorMessages_get_DllNotFoundExceptionErrorMessage_m5238B46BE37EB715B9E70E09BB06784D46F63D01 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ErrorMessages_get_DllNotFoundExceptionErrorMessage_m5238B46BE37EB715B9E70E09BB06784D46F63D01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		bool L_0 = PlatformInformation_get_IsAndroid_m61250012539009D27371075104AFBDE2549BB77E(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_il2cpp_TypeInfo_var);
		String_t* L_1 = ((ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_il2cpp_TypeInfo_var))->get_DLL_NOT_FOUND_ERROR_ANDROID_3();
		V_0 = L_1;
		goto IL_0030;
	}

IL_0015:
	{
		bool L_2 = PlatformInformation_get_IsIOS_mEC53C8E1719192F4A5E5A5C919752D9772706573(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_il2cpp_TypeInfo_var);
		String_t* L_3 = ((ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_il2cpp_TypeInfo_var))->get_DLL_NOT_FOUND_ERROR_IOS_4();
		V_0 = L_3;
		goto IL_0030;
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_il2cpp_TypeInfo_var);
		String_t* L_4 = ((ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_il2cpp_TypeInfo_var))->get_DLL_NOT_FOUND_ERROR_GENERIC_5();
		V_0 = L_4;
	}

IL_0030:
	{
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_il2cpp_TypeInfo_var);
		String_t* L_6 = ErrorMessages_get_DependencyNotFoundErrorMessage_m6457663EBE0DBF1CFF53BD25AD45A51A8619CE66(/*hidden argument*/NULL);
		String_t* L_7 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void Firebase.ErrorMessages::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorMessages__cctor_m73B330060F5C8675C915DE990225D000F7626A1C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ErrorMessages__cctor_m73B330060F5C8675C915DE990225D000F7626A1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_il2cpp_TypeInfo_var))->set_DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0(_stringLiteral159617DFE3F4142660B9F0126DDBC2ACBB5061DD);
		((ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_il2cpp_TypeInfo_var))->set_DEPENDENCY_NOT_FOUND_ERROR_IOS_1(_stringLiteral58F6F794C17DC62ACACC3D747BF2454A6DED98C5);
		((ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_il2cpp_TypeInfo_var))->set_DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2(_stringLiteralFF3B9F51CC933B6E8F42D024FAE32EF10192BE29);
		((ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_il2cpp_TypeInfo_var))->set_DLL_NOT_FOUND_ERROR_ANDROID_3(_stringLiteral1059C763F4D1FEA158A4704EFDF2B7A33A9CC95C);
		((ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_il2cpp_TypeInfo_var))->set_DLL_NOT_FOUND_ERROR_IOS_4(_stringLiteral528D7DFFA8489D34C106F15B26C0E12A04DF8E1E);
		((ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_il2cpp_TypeInfo_var))->set_DLL_NOT_FOUND_ERROR_GENERIC_5(_stringLiteral451AE7A620831DCD0B79B56E532CB43BB0303DB1);
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
// System.Void Firebase.FirebaseApp::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp__ctor_mECDB71535A9846F085CD59C6EA9261E640FE127A (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.FirebaseApp::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp__cctor_m977F4273E73E9960D8B02660FAB2D1B457AD8F35 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp__cctor_m977F4273E73E9960D8B02660FAB2D1B457AD8F35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->set_disposeLock_2(L_0);
		Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * L_1 = (Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE *)il2cpp_codegen_object_new(Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m124BC1DB68E6456163A4BD3D3F8CFCC09CD3D78C(L_1, /*hidden argument*/Dictionary_2__ctor_m124BC1DB68E6456163A4BD3D3F8CFCC09CD3D78C_RuntimeMethod_var);
		((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->set_nameToProxy_5(L_1);
		Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * L_2 = (Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 *)il2cpp_codegen_object_new(Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mDBD86D9CDDF553CFA2F0F9DC60603CBE7A62F2DE(L_2, /*hidden argument*/Dictionary_2__ctor_mDBD86D9CDDF553CFA2F0F9DC60603CBE7A62F2DE_RuntimeMethod_var);
		((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->set_cPtrToProxy_6(L_2);
		((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->set_AppUtilCallbacksInitialized_7((bool)0);
		RuntimeObject * L_3 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_3, /*hidden argument*/NULL);
		((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->set_AppUtilCallbacksLock_8(L_3);
		((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->set_PreventOnAllAppsDestroyed_9((bool)0);
		((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->set_crashlyticsInitializationAttempted_10((bool)0);
		((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->set_CheckDependenciesThread_13((-1));
		RuntimeObject * L_4 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_4, /*hidden argument*/NULL);
		((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->set_CheckDependenciesThreadLock_14(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var);
		LogUtil_InitializeLogging_m3DC0D9A5186F8E0E1972761477DB5461FFCEC354(/*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  FirebaseApp_getCPtr_mF922A07C69469D0EB5A268A9278C495805BDCA4F (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_getCPtr_mF922A07C69469D0EB5A268A9278C495805BDCA4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_1), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_3 = L_2->get_swigCPtr_0();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.FirebaseApp::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_Finalize_m3CA0CC2B785DE13BAEB66246FEC4A3022A0DD98C (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		FirebaseApp_Dispose_m633E7DCA88EC8FEDEB70D80B5A60CA4CF2AD6460(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_Dispose_m633E7DCA88EC8FEDEB70D80B5A60CA4CF2AD6460 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_Dispose_m633E7DCA88EC8FEDEB70D80B5A60CA4CF2AD6460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_0 = __this->get_AppDisposed_4();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_1 = __this->get_AppDisposed_4();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ((EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_1);
		EventHandler_Invoke_mD23D5EFEA562A05C5EACDD3E91EEDD2BF6C22800(L_1, __this, L_2, /*hidden argument*/NULL);
		__this->set_AppDisposed_4((EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)NULL);
	}

IL_0023:
	{
		FirebaseApp_RemoveReference_m82863E170CCFE42B64CE8B39E639570B549CC4AD(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.FirebaseApp::TranslateDllNotFoundException(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_TranslateDllNotFoundException_mC6F04F02034B21A8A258012156CA7F263FB594F6 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___closureToExecute0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_TranslateDllNotFoundException_mC6F04F02034B21A8A258012156CA7F263FB594F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ___closureToExecute0;
		NullCheck(L_0);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_0, /*hidden argument*/NULL);
		goto IL_002a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.Exception)
		{
			V_0 = ((Exception_t *)__exception_local);
			Exception_t * L_1 = V_0;
			NullCheck(L_1);
			Exception_t * L_2 = VirtFuncInvoker0< Exception_t * >::Invoke(7 /* System.Exception System.Exception::GetBaseException() */, L_1);
			if (!((DllNotFoundException_tED90B6A78D4CF5AA565288E0BA88A990062A7F76 *)IsInstClass((RuntimeObject*)L_2, DllNotFoundException_tED90B6A78D4CF5AA565288E0BA88A990062A7F76_il2cpp_TypeInfo_var)))
			{
				goto IL_0028;
			}
		}

IL_001c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_il2cpp_TypeInfo_var);
			String_t* L_3 = ErrorMessages_get_DllNotFoundExceptionErrorMessage_m5238B46BE37EB715B9E70E09BB06784D46F63D01(/*hidden argument*/NULL);
			InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 * L_4 = (InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 *)il2cpp_codegen_object_new(InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098_il2cpp_TypeInfo_var);
			InitializationException__ctor_m6A39CAC13E9D758C410431462099CF1D901B45FF(L_4, 1, L_3, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, FirebaseApp_TranslateDllNotFoundException_mC6F04F02034B21A8A258012156CA7F263FB594F6_RuntimeMethod_var);
		}

IL_0028:
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, FirebaseApp_TranslateDllNotFoundException_mC6F04F02034B21A8A258012156CA7F263FB594F6_RuntimeMethod_var);
		}
	} // end catch (depth: 1)

IL_002a:
	{
		return;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseApp_get_DefaultInstance_m46ACEAEC916D0AC3014302498F51607462EE5C63 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_get_DefaultInstance_m46ACEAEC916D0AC3014302498F51607462EE5C63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * V_0 = NULL;
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * G_B3_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		String_t* L_0 = FirebaseApp_get_DefaultName_mBA7DA11C2791078BAA59206A945890E958546168(/*hidden argument*/NULL);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_1 = FirebaseApp_GetInstance_m0C93898925E16C167E18D8F8351ECC375A46C75C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_3 = V_0;
		G_B3_0 = L_3;
		goto IL_001c;
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_4 = FirebaseApp_Create_m3ED22D074FC30B7DF31369F927C221AA9B6B1500(/*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::GetInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseApp_GetInstance_m0C93898925E16C167E18D8F8351ECC375A46C75C (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_GetInstance_m0C93898925E16C167E18D8F8351ECC375A46C75C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		FirebaseApp_ThrowIfCheckDependenciesRunning_m146122F83C37BC92E9D26A680740ACE69176D3F3(/*hidden argument*/NULL);
		V_0 = (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 *)NULL;
		Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * L_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_nameToProxy_5();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * L_2 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_nameToProxy_5();
			String_t* L_3 = ___name0;
			NullCheck(L_2);
			bool L_4 = Dictionary_2_TryGetValue_m9D482CC002D50200D99ED93589F27BD205B29951(L_2, L_3, (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m9D482CC002D50200D99ED93589F27BD205B29951_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_0037;
			}
		}

IL_0025:
		{
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_5 = V_0;
			if (L_5)
			{
				goto IL_0037;
			}
		}

IL_002b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * L_6 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_nameToProxy_5();
			String_t* L_7 = ___name0;
			NullCheck(L_6);
			Dictionary_2_Remove_m13F20B36BA2547B241E0A4FBD2B59AF376D184E9(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m13F20B36BA2547B241E0A4FBD2B59AF376D184E9_RuntimeMethod_var);
		}

IL_0037:
		{
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_8 = V_0;
			V_2 = L_8;
			IL2CPP_LEAVE(0x45, FINALLY_003e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_9 = V_1;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(62)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_JUMP_TBL(0x45, IL_0045)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0045:
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_10 = V_2;
		return L_10;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseApp_Create_m3ED22D074FC30B7DF31369F927C221AA9B6B1500 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_Create_m3ED22D074FC30B7DF31369F927C221AA9B6B1500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * L_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_16();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * L_1 = (CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F *)il2cpp_codegen_object_new(CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F_il2cpp_TypeInfo_var);
		CreateDelegate__ctor_mA279FA3C2C3D5F9376130804EE01BB8DEDF9584D(L_1, NULL, (intptr_t)((intptr_t)FirebaseApp_U3CCreateU3Em__0_mD5F1CE4EE3725E0E57705E4941C5E38BCBB0C518_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_16(L_1);
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * L_2 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_16();
		String_t* L_3 = FirebaseApp_get_DefaultName_mBA7DA11C2791078BAA59206A945890E958546168(/*hidden argument*/NULL);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_4 = FirebaseApp_GetInstance_m0C93898925E16C167E18D8F8351ECC375A46C75C(L_3, /*hidden argument*/NULL);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_5 = FirebaseApp_CreateAndTrack_m9432CF67F169FAFC2D57F7C8E2460CBE174CB6F7(L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String Firebase.FirebaseApp::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_mB5E945165A8F7DFAA21F0AD3A9E99CC3438943C5 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_3();
		return L_0;
	}
}
// Firebase.LogLevel Firebase.FirebaseApp::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseApp_get_LogLevel_mA1462E02A6B78D0F598CF9D3F22CAF13D9E29E8D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_get_LogLevel_mA1462E02A6B78D0F598CF9D3F22CAF13D9E29E8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		int32_t L_0 = AppUtilPINVOKE_Firebase_App_FirebaseApp_GetLogLevelInternal_m124AF04EF8A5F883FB0DFED5ABCB978565FE2201(/*hidden argument*/NULL);
		return (int32_t)(L_0);
	}
}
// System.Void Firebase.FirebaseApp::add_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_add_AppDisposed_m1CA5C0D303E4A5536DFDBE3356A900B3B966D4B6 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_add_AppDisposed_m1CA5C0D303E4A5536DFDBE3356A900B3B966D4B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_0 = NULL;
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_1 = NULL;
	{
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_0 = __this->get_AppDisposed_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** L_2 = __this->get_address_of_AppDisposed_4();
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_3 = V_1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_6 = V_0;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_7 = InterlockedCompareExchangeImpl<EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *>((EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C **)L_2, ((EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_8 = V_0;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)L_8) == ((RuntimeObject*)(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::remove_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_remove_AppDisposed_mE9EBC4903F93C997C038F8B12940A3D658624EA9 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_remove_AppDisposed_mE9EBC4903F93C997C038F8B12940A3D658624EA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_0 = NULL;
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_1 = NULL;
	{
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_0 = __this->get_AppDisposed_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** L_2 = __this->get_address_of_AppDisposed_4();
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_3 = V_1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_6 = V_0;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_7 = InterlockedCompareExchangeImpl<EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *>((EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C **)L_2, ((EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_8 = V_0;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)L_8) == ((RuntimeObject*)(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::AddReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_AddReference_m4E500E124497E17C5C4964F2CAEBDEB2ED3E8680 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_AddReference_m4E500E124497E17C5C4964F2CAEBDEB2ED3E8680_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		FirebaseApp_ThrowIfCheckDependenciesRunning_m146122F83C37BC92E9D26A680740ACE69176D3F3(/*hidden argument*/NULL);
		Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * L_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_nameToProxy_5();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		__this->set_swigCMemOwn_1((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * L_2 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_nameToProxy_5();
		String_t* L_3 = FirebaseApp_get_Name_mB5E945165A8F7DFAA21F0AD3A9E99CC3438943C5_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Dictionary_2_set_Item_m515EA1D865B2A27016C1EB39F63221194E999D9C(L_2, L_3, __this, /*hidden argument*/Dictionary_2_set_Item_m515EA1D865B2A27016C1EB39F63221194E999D9C_RuntimeMethod_var);
		Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * L_4 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_cPtrToProxy_6();
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A * L_5 = __this->get_address_of_swigCPtr_0();
		intptr_t L_6 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Dictionary_2_set_Item_m123A8D827D7B9CDF569B126376E779BB56D07DDA(L_4, (intptr_t)L_6, __this, /*hidden argument*/Dictionary_2_set_Item_m123A8D827D7B9CDF569B126376E779BB56D07DDA_RuntimeMethod_var);
		IL2CPP_LEAVE(0x4B, FINALLY_0044);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(68)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004b:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::RemoveReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_RemoveReference_m82863E170CCFE42B64CE8B39E639570B549CC4AD (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_RemoveReference_m82863E170CCFE42B64CE8B39E639570B549CC4AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		FirebaseApp_ThrowIfCheckDependenciesRunning_m146122F83C37BC92E9D26A680740ACE69176D3F3(/*hidden argument*/NULL);
		Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * L_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_nameToProxy_5();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)L_2, /*hidden argument*/NULL);
			V_1 = (intptr_t)L_3;
			intptr_t L_4 = V_1;
			bool L_5 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0087;
			}
		}

IL_002d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
			bool L_6 = __this->get_swigCMemOwn_1();
			if (!L_6)
			{
				goto IL_0087;
			}
		}

IL_003e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * L_7 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_nameToProxy_5();
			NullCheck(L_7);
			int32_t L_8 = Dictionary_2_get_Count_m0515F927B62810FC494B0582D39BB618A8DCAA5F(L_7, /*hidden argument*/Dictionary_2_get_Count_m0515F927B62810FC494B0582D39BB618A8DCAA5F_RuntimeMethod_var);
			V_2 = L_8;
			Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * L_9 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_cPtrToProxy_6();
			intptr_t L_10 = V_1;
			NullCheck(L_9);
			Dictionary_2_Remove_mD13DFEE994547121349DF25AFB8C66109EDF6F50(L_9, (intptr_t)L_10, /*hidden argument*/Dictionary_2_Remove_mD13DFEE994547121349DF25AFB8C66109EDF6F50_RuntimeMethod_var);
			Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * L_11 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_nameToProxy_5();
			String_t* L_12 = FirebaseApp_get_Name_mB5E945165A8F7DFAA21F0AD3A9E99CC3438943C5_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_11);
			Dictionary_2_Remove_m13F20B36BA2547B241E0A4FBD2B59AF376D184E9(L_11, L_12, /*hidden argument*/Dictionary_2_Remove_m13F20B36BA2547B241E0A4FBD2B59AF376D184E9_RuntimeMethod_var);
			FirebaseApp_ReleaseReferenceInternal_mDDCBE7D04450E4A53C0708998720842CC840EF07(__this, /*hidden argument*/NULL);
			int32_t L_13 = V_2;
			if ((((int32_t)L_13) <= ((int32_t)0)))
			{
				goto IL_0087;
			}
		}

IL_0073:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * L_14 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_nameToProxy_5();
			NullCheck(L_14);
			int32_t L_15 = Dictionary_2_get_Count_m0515F927B62810FC494B0582D39BB618A8DCAA5F(L_14, /*hidden argument*/Dictionary_2_get_Count_m0515F927B62810FC494B0582D39BB618A8DCAA5F_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_0087;
			}
		}

IL_0082:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			FirebaseApp_OnAllAppsDestroyed_m7C30233D9A14F2C241F723C40A62E739D6A9453B(/*hidden argument*/NULL);
		}

IL_0087:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_16;
			memset((&L_16), 0, sizeof(L_16));
			HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_16), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_16);
			IL2CPP_LEAVE(0xAB, FINALLY_00a4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a4;
	}

FINALLY_00a4:
	{ // begin finally (depth: 1)
		RuntimeObject * L_17 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_17, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(164)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(164)
	{
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ab:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ThrowIfNull_m3502997B4E18EB792AD9ACE01EC5137CD9639E37 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_ThrowIfNull_m3502997B4E18EB792AD9ACE01EC5137CD9639E37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A * L_0 = __this->get_address_of_swigCPtr_0();
		intptr_t L_1 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)L_0, /*hidden argument*/NULL);
		bool L_2 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_3 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349(L_3, _stringLiteralE01285EFE8EB80BBD0379DC15101B8150E9800E1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseApp_ThrowIfNull_m3502997B4E18EB792AD9ACE01EC5137CD9639E37_RuntimeMethod_var);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::InitializeAppUtilCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_InitializeAppUtilCallbacks_mB1F7BFC4360EAFCA4E1726B81452753734568FE8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_InitializeAppUtilCallbacks_mB1F7BFC4360EAFCA4E1726B81452753734568FE8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * V_4 = NULL;
	EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9* V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B14_0 = 0;
	int32_t G_B16_0 = 0;
	String_t* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	String_t* G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	String_t* G_B20_0 = NULL;
	String_t* G_B20_1 = NULL;
	int32_t G_B20_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_AppUtilCallbacksLock_8();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			bool L_2 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_AppUtilCallbacksInitialized_7();
			if (!L_2)
			{
				goto IL_001b;
			}
		}

IL_0016:
		{
			IL2CPP_LEAVE(0x207, FINALLY_0200);
		}

IL_001b:
		{
			EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9* L_3 = (EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9*)(EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9*)SZArrayNew(EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
			EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9* L_4 = L_3;
			EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * L_5 = (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)il2cpp_codegen_object_new(EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC0CF508919EF04A896578538EAF80B4A6E58E750(L_5, _stringLiteralCFD695F6EEAE0FECD5554A0C10150C42343EDB4B, _stringLiteral66D9B558F41B30033E4D62BF47D52885E31627E4, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_4);
			ArrayElementTypeCheck (L_4, L_5);
			(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)L_5);
			EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9* L_6 = L_4;
			EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * L_7 = (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)il2cpp_codegen_object_new(EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC0CF508919EF04A896578538EAF80B4A6E58E750(L_7, _stringLiteral598197CCAA30D30058302EAC83E6F056E19A36DD, _stringLiteral66A36E77FD002579809717841F998F4D21CD5913, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_6);
			ArrayElementTypeCheck (L_6, L_7);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)L_7);
			EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9* L_8 = L_6;
			EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * L_9 = (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)il2cpp_codegen_object_new(EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC0CF508919EF04A896578538EAF80B4A6E58E750(L_9, _stringLiteralB16542FDAE074C08AAF90B6FCE2F6499796EEDAD, _stringLiteral5FC4A6E79231727C4B682F7D23BE9AC0C24A63BC, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_8);
			ArrayElementTypeCheck (L_8, L_9);
			(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)L_9);
			EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9* L_10 = L_8;
			EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * L_11 = (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)il2cpp_codegen_object_new(EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC0CF508919EF04A896578538EAF80B4A6E58E750(L_11, _stringLiteralF4CAFE446CECC59803EAAF5FB75D7C7C076A9BB3, _stringLiteral6D613A1EE01EEC4C0F8CA66DF0DB71DCA0C6E1CF, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_10);
			ArrayElementTypeCheck (L_10, L_11);
			(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)L_11);
			EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9* L_12 = L_10;
			EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * L_13 = (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)il2cpp_codegen_object_new(EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC0CF508919EF04A896578538EAF80B4A6E58E750(L_13, _stringLiteral336D7DBE03B2D705B400B88F1319E4F79E12E234, _stringLiteral13A71403030E940CFEEB21F057C3F67F0EA92AE9, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_12);
			ArrayElementTypeCheck (L_12, L_13);
			(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)L_13);
			EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9* L_14 = L_12;
			EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * L_15 = (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)il2cpp_codegen_object_new(EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC0CF508919EF04A896578538EAF80B4A6E58E750(L_15, _stringLiteralEFFE931B09C80F8C15FB10A011087AE818AD256B, _stringLiteral2F887DEF33825E52FFBCCA83446CFD6A6F676FF7, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, L_15);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)L_15);
			EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9* L_16 = L_14;
			EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * L_17 = (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)il2cpp_codegen_object_new(EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC0CF508919EF04A896578538EAF80B4A6E58E750(L_17, _stringLiteralA46B5148392494C33F967127F6C1E2FD80C52D6F, _stringLiteralEAF60E4A0C399C9935413E06474ED61E73CE5A81, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_16);
			ArrayElementTypeCheck (L_16, L_17);
			(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)L_17);
			EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9* L_18 = L_16;
			EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * L_19 = (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)il2cpp_codegen_object_new(EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC0CF508919EF04A896578538EAF80B4A6E58E750(L_19, _stringLiteral18C7CBD7CCB024293D62988EF9E702BC76D1F431, _stringLiteral9C791F8DDC4DA5AC57A9309ADF5028AAAB20837F, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_19);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(7), (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)L_19);
			EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9* L_20 = L_18;
			EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * L_21 = (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)il2cpp_codegen_object_new(EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC0CF508919EF04A896578538EAF80B4A6E58E750(L_21, _stringLiteral85AD387E48AD39FF88DF6E49A317E1F0FA32EBBA, _stringLiteralD0B1131C230C9C86CF4F738FD71E80F0FA2D8CE5, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_20);
			ArrayElementTypeCheck (L_20, L_21);
			(L_20)->SetAt(static_cast<il2cpp_array_size_t>(8), (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)L_21);
			EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9* L_22 = L_20;
			EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * L_23 = (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)il2cpp_codegen_object_new(EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC0CF508919EF04A896578538EAF80B4A6E58E750(L_23, _stringLiteral0E39F0F4BCD23A37D3C8F651693F4FEA5BFDA53C, _stringLiteral476EE0F6AF1D78AA2A3D9A587E8D5EE7E31229F6, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_22);
			ArrayElementTypeCheck (L_22, L_23);
			(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)L_23);
			EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9* L_24 = L_22;
			EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * L_25 = (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)il2cpp_codegen_object_new(EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC0CF508919EF04A896578538EAF80B4A6E58E750(L_25, _stringLiteral57EBAA87366F9BCD0AF6E1676E4580DD9051791E, _stringLiteralA9B90A89A55DD40421790C6CAB7978713EE80114, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_24);
			ArrayElementTypeCheck (L_24, L_25);
			(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)L_25);
			EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9* L_26 = L_24;
			EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * L_27 = (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)il2cpp_codegen_object_new(EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC0CF508919EF04A896578538EAF80B4A6E58E750(L_27, _stringLiteralD02812AF2387E64D9103A3DD317BFA4E61E1DE35, _stringLiteral3D48292E4D2714F11C2ADF276B610971E068A519, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_26);
			ArrayElementTypeCheck (L_26, L_27);
			(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)L_27);
			EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9* L_28 = L_26;
			EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * L_29 = (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)il2cpp_codegen_object_new(EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC0CF508919EF04A896578538EAF80B4A6E58E750(L_29, _stringLiteral51E550DA50C97109C3E0140FDE272F31CA98316F, _stringLiteralC8DED8E76597159EA4EA8D7343435455DB3F6CD0, (bool)1, /*hidden argument*/NULL);
			NullCheck(L_28);
			ArrayElementTypeCheck (L_28, L_29);
			(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 *)L_29);
			V_1 = L_28;
			bool L_30 = PlatformInformation_get_IsAndroid_m61250012539009D27371075104AFBDE2549BB77E(/*hidden argument*/NULL);
			V_2 = L_30;
			V_3 = (bool)0;
			bool L_31 = V_2;
			if (L_31)
			{
				goto IL_0134;
			}
		}

IL_012c:
		{
			AppUtil_SetEnabledAllAppCallbacks_mC850A20177310AC3A44E421CB2F3C0ECE1CC9574((bool)0, /*hidden argument*/NULL);
			V_3 = (bool)1;
		}

IL_0134:
		{
			EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9* L_32 = V_1;
			V_5 = L_32;
			V_6 = 0;
			goto IL_01ea;
		}

IL_013f:
		{
			EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9* L_33 = V_5;
			int32_t L_34 = V_6;
			NullCheck(L_33);
			int32_t L_35 = L_34;
			EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
			V_4 = L_36;
			V_7 = (bool)0;
		}

IL_0149:
		try
		{ // begin try (depth: 2)
			EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * L_37 = V_4;
			NullCheck(L_37);
			String_t* L_38 = EnableModuleParams_get_CSharpClassName_m652F90B63BD3DAA082A938D4CB58AD2BC6759F44_inline(L_37, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_39 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_mCF0A3B28889C9FFB9987C8D30C23DF0912E7C00C, L_38, "Firebase.App, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null");
			V_7 = (bool)((((int32_t)((((RuntimeObject*)(Type_t *)L_39) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_0168;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0162;
			throw e;
		}

CATCH_0162:
		{ // begin catch(System.Exception)
			goto IL_0168;
		} // end catch (depth: 2)

IL_0168:
		{
			EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * L_40 = V_4;
			NullCheck(L_40);
			String_t* L_41 = EnableModuleParams_get_CppModuleName_m53DB9B2D254E157BB2311782D33920853A6BF042_inline(L_40, /*hidden argument*/NULL);
			bool L_42 = AppUtil_GetEnabledAppCallbackByName_m2C063D950392679E20AD11BD5169956A02E78FF1(L_41, /*hidden argument*/NULL);
			V_8 = L_42;
			bool L_43 = V_7;
			if (!L_43)
			{
				goto IL_0196;
			}
		}

IL_017d:
		{
			bool L_44 = V_3;
			if (L_44)
			{
				goto IL_0193;
			}
		}

IL_0183:
		{
			bool L_45 = V_8;
			if (L_45)
			{
				goto IL_0193;
			}
		}

IL_018a:
		{
			EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * L_46 = V_4;
			NullCheck(L_46);
			bool L_47 = EnableModuleParams_get_AlwaysEnable_m19451C262F0380C6DB2D8AAE316830AD8E7B1870_inline(L_46, /*hidden argument*/NULL);
			G_B14_0 = ((int32_t)(L_47));
			goto IL_0194;
		}

IL_0193:
		{
			G_B14_0 = 1;
		}

IL_0194:
		{
			G_B16_0 = G_B14_0;
			goto IL_0197;
		}

IL_0196:
		{
			G_B16_0 = 0;
		}

IL_0197:
		{
			V_9 = (bool)G_B16_0;
			bool L_48 = V_9;
			bool L_49 = V_8;
			if ((((int32_t)L_48) == ((int32_t)L_49)))
			{
				goto IL_01d6;
			}
		}

IL_01a2:
		{
			bool L_50 = V_9;
			G_B18_0 = _stringLiteral6F3CCDACEBA948F7DF9DDA28FCD779020BE5E689;
			G_B18_1 = 1;
			if (!L_50)
			{
				G_B19_0 = _stringLiteral6F3CCDACEBA948F7DF9DDA28FCD779020BE5E689;
				G_B19_1 = 1;
				goto IL_01b9;
			}
		}

IL_01af:
		{
			G_B20_0 = _stringLiteral20063AD9053289CECAA20AE630ED2DD758282A07;
			G_B20_1 = G_B18_0;
			G_B20_2 = G_B18_1;
			goto IL_01be;
		}

IL_01b9:
		{
			G_B20_0 = _stringLiteral9A7D4E0687B14E2B7CDA406900B802782CD50A62;
			G_B20_1 = G_B19_0;
			G_B20_2 = G_B19_1;
		}

IL_01be:
		{
			EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * L_51 = V_4;
			NullCheck(L_51);
			String_t* L_52 = EnableModuleParams_get_CppModuleName_m53DB9B2D254E157BB2311782D33920853A6BF042_inline(L_51, /*hidden argument*/NULL);
			EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * L_53 = V_4;
			NullCheck(L_53);
			String_t* L_54 = EnableModuleParams_get_CSharpClassName_m652F90B63BD3DAA082A938D4CB58AD2BC6759F44_inline(L_53, /*hidden argument*/NULL);
			String_t* L_55 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(G_B20_1, G_B20_0, L_52, L_54, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var);
			LogUtil_LogMessage_mE0D4736B7C636462B2AD246F65EFAF5F1785822F(G_B20_2, L_55, /*hidden argument*/NULL);
		}

IL_01d6:
		{
			EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * L_56 = V_4;
			NullCheck(L_56);
			String_t* L_57 = EnableModuleParams_get_CppModuleName_m53DB9B2D254E157BB2311782D33920853A6BF042_inline(L_56, /*hidden argument*/NULL);
			bool L_58 = V_9;
			AppUtil_SetEnabledAppCallbackByName_m98EF16C68B04D64D2CBB59FE074711D5A06B3BD7(L_57, L_58, /*hidden argument*/NULL);
			int32_t L_59 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
		}

IL_01ea:
		{
			int32_t L_60 = V_6;
			EnableModuleParamsU5BU5D_tB6957064C85748F4AF15DA1312BE4B7D860AF6D9* L_61 = V_5;
			NullCheck(L_61);
			if ((((int32_t)L_60) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_61)->max_length)))))))
			{
				goto IL_013f;
			}
		}

IL_01f5:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->set_AppUtilCallbacksInitialized_7((bool)1);
			IL2CPP_LEAVE(0x207, FINALLY_0200);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0200;
	}

FINALLY_0200:
	{ // begin finally (depth: 1)
		RuntimeObject * L_62 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_62, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(512)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(512)
	{
		IL2CPP_JUMP_TBL(0x207, IL_0207)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0207:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::OnAllAppsDestroyed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_OnAllAppsDestroyed_m7C30233D9A14F2C241F723C40A62E739D6A9453B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_OnAllAppsDestroyed_m7C30233D9A14F2C241F723C40A62E739D6A9453B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		bool L_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_PreventOnAllAppsDestroyed_9();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * L_1 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_nameToProxy_5();
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m0515F927B62810FC494B0582D39BB618A8DCAA5F(L_1, /*hidden argument*/Dictionary_2_get_Count_m0515F927B62810FC494B0582D39BB618A8DCAA5F_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		RuntimeObject * L_3 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_AppUtilCallbacksLock_8();
		V_0 = L_3;
		RuntimeObject * L_4 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_4, /*hidden argument*/NULL);
	}

IL_0027:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			bool L_5 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_AppUtilCallbacksInitialized_7();
			if (!L_5)
			{
				goto IL_0047;
			}
		}

IL_0031:
		{
			bool L_6 = PlatformInformation_get_IsAndroid_m61250012539009D27371075104AFBDE2549BB77E(/*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_0041;
			}
		}

IL_003b:
		{
			AppUtil_SetEnabledAllAppCallbacks_mC850A20177310AC3A44E421CB2F3C0ECE1CC9574((bool)0, /*hidden argument*/NULL);
		}

IL_0041:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->set_AppUtilCallbacksInitialized_7((bool)0);
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x53, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0053:
	{
		return;
	}
}
// System.Uri Firebase.FirebaseApp::UrlStringToUri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * FirebaseApp_UrlStringToUri_m09F6D262D86EE9898214D35510E1E8CEBF53D0DA (String_t* ___urlString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_UrlStringToUri_m09F6D262D86EE9898214D35510E1E8CEBF53D0DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0 = ___urlString0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E *)NULL;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		String_t* L_2 = ___urlString0;
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_3 = (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E *)il2cpp_codegen_object_new(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var);
		Uri__ctor_mBA69907A1D799CD12ED44B611985B25FE4C626A2(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0021;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (UriFormatException_t86B375C9E56DBEE5BD4CC9D71C4C40AE5141808A_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0019;
		throw e;
	}

CATCH_0019:
	{ // begin catch(System.UriFormatException)
		V_0 = (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E *)NULL;
		goto IL_0021;
	} // end catch (depth: 1)

IL_0021:
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_4 = V_0;
		return L_4;
	}
}
// System.Object Firebase.FirebaseApp::WeakReferenceGetTarget(System.WeakReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * FirebaseApp_WeakReferenceGetTarget_mC676B673AB674077A1A40272E96E51C5A25DC30A (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * ___weakReference0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_WeakReferenceGetTarget_mC676B673AB674077A1A40272E96E51C5A25DC30A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * L_0 = ___weakReference0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * L_1 = ___weakReference0;
		NullCheck(L_1);
		RuntimeObject * L_2 = VirtFuncInvoker0< RuntimeObject * >::Invoke(5 /* System.Object System.WeakReference::get_Target() */, L_1);
		V_0 = L_2;
		goto IL_001c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0012;
		throw e;
	}

CATCH_0012:
	{ // begin catch(System.InvalidOperationException)
		V_0 = NULL;
		goto IL_001c;
	} // end catch (depth: 1)

IL_001a:
	{
		return NULL;
	}

IL_001c:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Firebase.FirebaseApp::InitializeCrashlyticsIfPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseApp_InitializeCrashlyticsIfPresent_mEC7562503FC321F112B1B90E0C7709175C1BA786 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_InitializeCrashlyticsIfPresent_mEC7562503FC321F112B1B90E0C7709175C1BA786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Assembly_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	MethodInfo_t * V_2 = NULL;
	bool V_3 = false;
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Assembly_t * L_0 = Assembly_Load_m4640304E91781FC3D197CD014B0C2DCEAFCFFF55(_stringLiteral0AF91264350EDD04599277281E913A91CF6C421C, /*hidden argument*/NULL);
			V_0 = L_0;
			Assembly_t * L_1 = V_0;
			NullCheck(L_1);
			Type_t * L_2 = VirtFuncInvoker1< Type_t *, String_t* >::Invoke(14 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_1, _stringLiteral539AB6A1CD38B85F28B2E27437FD072B95F7FE67);
			V_1 = L_2;
			Type_t * L_3 = V_1;
			if (L_3)
			{
				goto IL_0029;
			}
		}

IL_001d:
		{
			InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 * L_4 = (InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 *)il2cpp_codegen_object_new(InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098_il2cpp_TypeInfo_var);
			InitializationException__ctor_m6A39CAC13E9D758C410431462099CF1D901B45FF(L_4, 1, _stringLiteral7A6CF23C929649A76C4615C875599104B22DAB2D, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, FirebaseApp_InitializeCrashlyticsIfPresent_mEC7562503FC321F112B1B90E0C7709175C1BA786_RuntimeMethod_var);
		}

IL_0029:
		{
			Type_t * L_5 = V_1;
			NullCheck(L_5);
			MethodInfo_t * L_6 = Type_GetMethod_m9EC42D4B1F765B882F516EE6D7970D51CF5D80DD(L_5, _stringLiteralA459DFF3012DA591453989E5860A6FD825F63CE3, ((int32_t)40), /*hidden argument*/NULL);
			V_2 = L_6;
			MethodInfo_t * L_7 = V_2;
			if (L_7)
			{
				goto IL_0049;
			}
		}

IL_003d:
		{
			InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 * L_8 = (InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 *)il2cpp_codegen_object_new(InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098_il2cpp_TypeInfo_var);
			InitializationException__ctor_m6A39CAC13E9D758C410431462099CF1D901B45FF(L_8, 1, _stringLiteralF6C5923BE906990A579931C08BE3165486CD2748, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, FirebaseApp_InitializeCrashlyticsIfPresent_mEC7562503FC321F112B1B90E0C7709175C1BA786_RuntimeMethod_var);
		}

IL_0049:
		{
			MethodInfo_t * L_9 = V_2;
			NullCheck(L_9);
			MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674(L_9, NULL, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL, /*hidden argument*/NULL);
			goto IL_006f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0057;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_005f;
		throw e;
	}

CATCH_0057:
	{ // begin catch(System.IO.FileNotFoundException)
		V_3 = (bool)0;
		goto IL_0071;
	} // end catch (depth: 1)

CATCH_005f:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		Exception_t * L_10 = V_4;
		InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 * L_11 = (InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 *)il2cpp_codegen_object_new(InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098_il2cpp_TypeInfo_var);
		InitializationException__ctor_m6778555FEC2C05FCA0FF20B33431B2C076054FA6(L_11, 1, _stringLiteral7DE741B3F1964E9C3BEE79227C0BE4F68241306B, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, FirebaseApp_InitializeCrashlyticsIfPresent_mEC7562503FC321F112B1B90E0C7709175C1BA786_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_006f:
	{
		return (bool)1;
	}

IL_0071:
	{
		bool L_12 = V_3;
		return L_12;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::CreateAndTrack(Firebase.FirebaseApp_CreateDelegate,Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseApp_CreateAndTrack_m9432CF67F169FAFC2D57F7C8E2460CBE174CB6F7 (CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * ___createDelegate0, FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___existingProxy1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_CreateAndTrack_m9432CF67F169FAFC2D57F7C8E2460CBE174CB6F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * V_4 = NULL;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Exception_t * V_8 = NULL;
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * V_9 = NULL;
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * V_10 = NULL;
	String_t* V_11 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		FirebaseApp_ThrowIfCheckDependenciesRunning_m146122F83C37BC92E9D26A680740ACE69176D3F3(/*hidden argument*/NULL);
		V_0 = (bool)0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2_il2cpp_TypeInfo_var);
		FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2 * L_0 = FirebaseAppUtils_get_Instance_m9960DF708E432F14B1D2F4C78B388E853953B094_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_il2cpp_TypeInfo_var);
		FirebaseHandler_Create_m89DB93F791D7C61D45C79484E9207C4967374BEA(L_0, /*hidden argument*/NULL);
		Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * L_1 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_nameToProxy_5();
		V_2 = L_1;
		RuntimeObject * L_2 = V_2;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_2, /*hidden argument*/NULL);
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			FirebaseApp_InitializeAppUtilCallbacks_mB1F7BFC4360EAFCA4E1726B81452753734568FE8(/*hidden argument*/NULL);
			HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)(&V_3), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		}

IL_002f:
		try
		{ // begin try (depth: 2)
			{
				String_t* L_3 = PlatformInformation_get_DefaultConfigLocation_m7B32A608B4B90F6749B02AC1C0E87E4C904E9608(/*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
				FirebaseApp_AppSetDefaultConfigPath_m53566882606C7038E0C2E2AD4182628B50D96F80(L_3, /*hidden argument*/NULL);
				CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * L_4 = ___createDelegate0;
				NullCheck(L_4);
				FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_5 = CreateDelegate_Invoke_mFDC361DD320C47E8E5BB468EFAB257D7C23C3EE3(L_4, /*hidden argument*/NULL);
				V_1 = L_5;
				bool L_6 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
				if (!L_6)
				{
					goto IL_0050;
				}
			}

IL_004a:
			{
				Exception_t * L_7 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, FirebaseApp_CreateAndTrack_m9432CF67F169FAFC2D57F7C8E2460CBE174CB6F7_RuntimeMethod_var);
			}

IL_0050:
			{
				FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_8 = V_1;
				if (L_8)
				{
					goto IL_0062;
				}
			}

IL_0056:
			{
				InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 * L_9 = (InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 *)il2cpp_codegen_object_new(InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098_il2cpp_TypeInfo_var);
				InitializationException__ctor_m6A39CAC13E9D758C410431462099CF1D901B45FF(L_9, 1, _stringLiteralB38FACEA8F68D59D17CAC7EDBA504E87C4DAA11F, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, FirebaseApp_CreateAndTrack_m9432CF67F169FAFC2D57F7C8E2460CBE174CB6F7_RuntimeMethod_var);
			}

IL_0062:
			{
				FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_10 = V_1;
				IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
				HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_11 = FirebaseApp_getCPtr_mF922A07C69469D0EB5A268A9278C495805BDCA4F(L_10, /*hidden argument*/NULL);
				V_3 = L_11;
				goto IL_00ee;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_006e;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00e4;
			throw e;
		}

CATCH_006e:
		{ // begin catch(System.ApplicationException)
			{
				V_4 = ((ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)__exception_local);
				IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
				FirebaseApp_OnAllAppsDestroyed_m7C30233D9A14F2C241F723C40A62E739D6A9453B(/*hidden argument*/NULL);
				ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_12 = V_4;
				NullCheck(L_12);
				String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
				V_5 = L_13;
				V_6 = 1;
				String_t* L_14 = V_5;
				NullCheck(L_14);
				int32_t L_15 = String_IndexOf_mA9A0117D68338238E51E5928CDA8EB3DC9DA497B(L_14, _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9, /*hidden argument*/NULL);
				V_7 = L_15;
				int32_t L_16 = V_7;
				if ((((int32_t)L_16) < ((int32_t)0)))
				{
					goto IL_00b5;
				}
			}

IL_0097:
			{
				String_t* L_17 = V_5;
				int32_t L_18 = V_7;
				NullCheck(L_17);
				String_t* L_19 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_17, 0, L_18, /*hidden argument*/NULL);
				int32_t L_20 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_19, /*hidden argument*/NULL);
				V_6 = L_20;
				String_t* L_21 = V_5;
				int32_t L_22 = V_7;
				NullCheck(L_21);
				String_t* L_23 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_21, ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)), /*hidden argument*/NULL);
				V_5 = L_23;
			}

IL_00b5:
			{
				String_t* L_24 = V_5;
				NullCheck(L_24);
				int32_t L_25 = String_IndexOf_mA9A0117D68338238E51E5928CDA8EB3DC9DA497B(L_24, _stringLiteral9CA2E913BC29D3389CD09BC296EF7B55FA965C2A, /*hidden argument*/NULL);
				if ((((int32_t)L_25) < ((int32_t)0)))
				{
					goto IL_00da;
				}
			}

IL_00c7:
			{
				String_t* L_26 = V_5;
				IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tEDD27A0411B7EA7EEB00A9E93AD0B1C9DC021EDA_il2cpp_TypeInfo_var);
				String_t* L_27 = ErrorMessages_get_DependencyNotFoundErrorMessage_m6457663EBE0DBF1CFF53BD25AD45A51A8619CE66(/*hidden argument*/NULL);
				String_t* L_28 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_26, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC, L_27, /*hidden argument*/NULL);
				V_5 = L_28;
			}

IL_00da:
			{
				int32_t L_29 = V_6;
				String_t* L_30 = V_5;
				InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 * L_31 = (InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 *)il2cpp_codegen_object_new(InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098_il2cpp_TypeInfo_var);
				InitializationException__ctor_m6A39CAC13E9D758C410431462099CF1D901B45FF(L_31, L_29, L_30, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, FirebaseApp_CreateAndTrack_m9432CF67F169FAFC2D57F7C8E2460CBE174CB6F7_RuntimeMethod_var);
			}
		} // end catch (depth: 2)

CATCH_00e4:
		{ // begin catch(System.Exception)
			V_8 = ((Exception_t *)__exception_local);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			FirebaseApp_OnAllAppsDestroyed_m7C30233D9A14F2C241F723C40A62E739D6A9453B(/*hidden argument*/NULL);
			Exception_t * L_32 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, FirebaseApp_CreateAndTrack_m9432CF67F169FAFC2D57F7C8E2460CBE174CB6F7_RuntimeMethod_var);
		} // end catch (depth: 2)

IL_00ee:
		{
			intptr_t L_33 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)(&V_3), /*hidden argument*/NULL);
			bool L_34 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_33, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_34)
			{
				goto IL_010c;
			}
		}

IL_0104:
		{
			V_9 = (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 *)NULL;
			IL2CPP_LEAVE(0x202, FINALLY_01d0);
		}

IL_010c:
		{
			V_10 = (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 *)NULL;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * L_35 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_cPtrToProxy_6();
			intptr_t L_36 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)(&V_3), /*hidden argument*/NULL);
			NullCheck(L_35);
			bool L_37 = Dictionary_2_TryGetValue_mA942ECF01C92960B7AC2A8A21C9645DB220CA12C(L_35, (intptr_t)L_36, (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 **)(&V_10), /*hidden argument*/Dictionary_2_TryGetValue_mA942ECF01C92960B7AC2A8A21C9645DB220CA12C_RuntimeMethod_var);
			if (!L_37)
			{
				goto IL_015b;
			}
		}

IL_0127:
		{
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_38 = V_10;
			if (!L_38)
			{
				goto IL_015b;
			}
		}

IL_012e:
		{
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_39 = ___existingProxy1;
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_40 = V_10;
			if ((((RuntimeObject*)(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 *)L_39) == ((RuntimeObject*)(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 *)L_40)))
			{
				goto IL_0152;
			}
		}

IL_0136:
		{
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_41 = ___existingProxy1;
			NullCheck(L_41);
			String_t* L_42 = FirebaseApp_get_Name_mB5E945165A8F7DFAA21F0AD3A9E99CC3438943C5_inline(L_41, /*hidden argument*/NULL);
			String_t* L_43 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralD458E99D6C5F537738C7825A92ADFAE5512143C8, L_42, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var);
			LogUtil_LogMessage_mE0D4736B7C636462B2AD246F65EFAF5F1785822F(3, L_43, /*hidden argument*/NULL);
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_44 = ___existingProxy1;
			NullCheck(L_44);
			FirebaseApp_Dispose_m633E7DCA88EC8FEDEB70D80B5A60CA4CF2AD6460(L_44, /*hidden argument*/NULL);
		}

IL_0152:
		{
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_45 = V_10;
			V_9 = L_45;
			IL2CPP_LEAVE(0x202, FINALLY_01d0);
		}

IL_015b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * L_46 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_cPtrToProxy_6();
			NullCheck(L_46);
			int32_t L_47 = Dictionary_2_get_Count_m5A4570138512C5E9062AA1F5914AF6C8B1F48F6F(L_46, /*hidden argument*/Dictionary_2_get_Count_m5A4570138512C5E9062AA1F5914AF6C8B1F48F6F_RuntimeMethod_var);
			if (L_47)
			{
				goto IL_019d;
			}
		}

IL_016a:
		{
			String_t* L_48 = PlatformInformation_get_RuntimeName_mCD019D8389883E820ED30D97642D63F0BA844EAD(/*hidden argument*/NULL);
			String_t* L_49 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral70E63EA7A068A75401053DE42737AB858D9A361B, L_48, /*hidden argument*/NULL);
			V_11 = L_49;
			String_t* L_50 = V_11;
			String_t* L_51 = VersionInfo_get_SdkVersion_m55C4F788028216AA98C44DE5D9964D7A236D4E93(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			FirebaseApp_RegisterLibraryInternal_m33F0D35CAD2A634673F6A9D1610E0122FFB88637(L_50, L_51, /*hidden argument*/NULL);
			String_t* L_52 = V_11;
			String_t* L_53 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_52, _stringLiteralAB63B0D0030E5BE532C25B337995B7D31C5EDB8C, /*hidden argument*/NULL);
			String_t* L_54 = PlatformInformation_get_RuntimeVersion_m947E74AAC2129616DA7A9330BCE4B79EA8A422F0(/*hidden argument*/NULL);
			FirebaseApp_RegisterLibraryInternal_m33F0D35CAD2A634673F6A9D1610E0122FFB88637(L_53, L_54, /*hidden argument*/NULL);
		}

IL_019d:
		{
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_55 = V_1;
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_56 = V_1;
			NullCheck(L_56);
			String_t* L_57 = FirebaseApp_get_NameInternal_m2752D24CD4D632B51C27AA926E3527828A19B6A2(L_56, /*hidden argument*/NULL);
			NullCheck(L_55);
			L_55->set_name_3(L_57);
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_58 = V_1;
			NullCheck(L_58);
			FirebaseApp_AddReference_m4E500E124497E17C5C4964F2CAEBDEB2ED3E8680(L_58, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			bool L_59 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_crashlyticsInitializationAttempted_10();
			if (L_59)
			{
				goto IL_01cb;
			}
		}

IL_01b9:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			bool L_60 = FirebaseApp_IsCheckDependenciesRunning_mE1A442A699DB9BEDC328975FC56B51C3769A6B8D(/*hidden argument*/NULL);
			if (L_60)
			{
				goto IL_01cb;
			}
		}

IL_01c3:
		{
			V_0 = (bool)1;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->set_crashlyticsInitializationAttempted_10((bool)1);
		}

IL_01cb:
		{
			IL2CPP_LEAVE(0x1D7, FINALLY_01d0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01d0;
	}

FINALLY_01d0:
	{ // begin finally (depth: 1)
		RuntimeObject * L_61 = V_2;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_61, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(464)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(464)
	{
		IL2CPP_JUMP_TBL(0x202, IL_0202)
		IL2CPP_JUMP_TBL(0x1D7, IL_01d7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01d7:
	{
		bool L_62 = V_0;
		if (!L_62)
		{
			goto IL_0200;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_63 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_17();
		if (L_63)
		{
			goto IL_01f5;
		}
	}
	{
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_64 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
		Func_1__ctor_m36F8615CDD8E019D5C4E92D96E275F7A8836B86F(L_64, NULL, (intptr_t)((intptr_t)FirebaseApp_U3CCreateAndTrackU3Em__1_mF4B85EE912269BF441F99AF1E4E7881443CD7C75_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m36F8615CDD8E019D5C4E92D96E275F7A8836B86F_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_17(L_64);
	}

IL_01f5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_65 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_17();
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_il2cpp_TypeInfo_var);
		FirebaseHandler_RunOnMainThread_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m7DDD35DE42BBD8FC4FBCDBBD936EBACE47E03440(L_65, /*hidden argument*/FirebaseHandler_RunOnMainThread_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m7DDD35DE42BBD8FC4FBCDBBD936EBACE47E03440_RuntimeMethod_var);
	}

IL_0200:
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_66 = V_1;
		return L_66;
	}

IL_0202:
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_67 = V_9;
		return L_67;
	}
}
// System.Void Firebase.FirebaseApp::ThrowIfCheckDependenciesRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ThrowIfCheckDependenciesRunning_m146122F83C37BC92E9D26A680740ACE69176D3F3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_ThrowIfCheckDependenciesRunning_m146122F83C37BC92E9D26A680740ACE69176D3F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_CheckDependenciesThreadLock_14();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			int32_t L_2 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_CheckDependenciesThread_13();
			if ((((int32_t)L_2) == ((int32_t)(-1))))
			{
				goto IL_0036;
			}
		}

IL_0017:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			int32_t L_3 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_CheckDependenciesThread_13();
			Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_4 = Thread_get_CurrentThread_mB7A83CAE2B9A74CEA053196DFD1AF1E7AB30A70E(/*hidden argument*/NULL);
			NullCheck(L_4);
			int32_t L_5 = Thread_get_ManagedThreadId_m7FA85162CB00713B94EF5708B19120F791D3AAD1(L_4, /*hidden argument*/NULL);
			if ((((int32_t)L_3) == ((int32_t)L_5)))
			{
				goto IL_0036;
			}
		}

IL_002b:
		{
			InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_6 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_6, _stringLiteral11944A902C19EC17AC78B47A2CECA0F3CC5A5550, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, FirebaseApp_ThrowIfCheckDependenciesRunning_m146122F83C37BC92E9D26A680740ACE69176D3F3_RuntimeMethod_var);
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0042:
	{
		return;
	}
}
// System.Boolean Firebase.FirebaseApp::IsCheckDependenciesRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseApp_IsCheckDependenciesRunning_mE1A442A699DB9BEDC328975FC56B51C3769A6B8D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_IsCheckDependenciesRunning_mE1A442A699DB9BEDC328975FC56B51C3769A6B8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_CheckDependenciesThreadLock_14();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		int32_t L_2 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_CheckDependenciesThread_13();
		V_1 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		IL2CPP_LEAVE(0x24, FINALLY_001d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001d;
	}

FINALLY_001d:
	{ // begin finally (depth: 1)
		RuntimeObject * L_3 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(29)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(29)
	{
		IL2CPP_JUMP_TBL(0x24, IL_0024)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// Firebase.AppOptions Firebase.FirebaseApp::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * FirebaseApp_get_Options_mDD4642CC794D4339D5AF6CC2A3607A9FE52F81E6 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_get_Options_mDD4642CC794D4339D5AF6CC2A3607A9FE52F81E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseApp_ThrowIfNull_m3502997B4E18EB792AD9ACE01EC5137CD9639E37(__this, /*hidden argument*/NULL);
		AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * L_0 = FirebaseApp_options_m72A1560C41F3822AC08EC57C8B2D6FBB4248EE1B(__this, /*hidden argument*/NULL);
		AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * L_1 = (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E *)il2cpp_codegen_object_new(AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E_il2cpp_TypeInfo_var);
		AppOptions__ctor_m0E8C28A5A2726E3D9154CE0EC0F104C2906F05E4(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Firebase.AppOptionsInternal Firebase.FirebaseApp::options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * FirebaseApp_options_m72A1560C41F3822AC08EC57C8B2D6FBB4248EE1B (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_options_m72A1560C41F3822AC08EC57C8B2D6FBB4248EE1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		intptr_t L_1 = AppUtilPINVOKE_Firebase_App_FirebaseApp_options_m558AEE708E1E3F1276946DF778B96EAF964C165E(L_0, /*hidden argument*/NULL);
		AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * L_2 = (AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 *)il2cpp_codegen_object_new(AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682_il2cpp_TypeInfo_var);
		AppOptionsInternal__ctor_m0B3AED5F7890CC165932B67931DC3B625F018F4D(L_2, (intptr_t)L_1, (bool)0, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, FirebaseApp_options_m72A1560C41F3822AC08EC57C8B2D6FBB4248EE1B_RuntimeMethod_var);
	}

IL_0022:
	{
		AppOptionsInternal_t5083EC4417838046442AAECCB5D0E5BF206C0682 * L_5 = V_0;
		return L_5;
	}
}
// System.String Firebase.FirebaseApp::get_NameInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_NameInternal_m2752D24CD4D632B51C27AA926E3527828A19B6A2 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_get_NameInternal_m2752D24CD4D632B51C27AA926E3527828A19B6A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		String_t* L_1 = AppUtilPINVOKE_Firebase_App_FirebaseApp_NameInternal_get_m1031D382B1EFF31DB99F4DDE7F85353146871CF7(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseApp_get_NameInternal_m2752D24CD4D632B51C27AA926E3527828A19B6A2_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::CreateInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseApp_CreateInternal_m039014CF3B7DB1B092068767F49B9E0C9D9C11D6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_CreateInternal_m039014CF3B7DB1B092068767F49B9E0C9D9C11D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * V_1 = NULL;
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * G_B3_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		intptr_t L_0 = AppUtilPINVOKE_Firebase_App_FirebaseApp_CreateInternal__SWIG_0_m7C57AF8D589A0FAB3769762B145C7C822C8B060D(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		intptr_t L_1 = V_0;
		bool L_2 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		G_B3_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 *)(NULL));
		goto IL_0023;
	}

IL_001c:
	{
		intptr_t L_3 = V_0;
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_4 = (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 *)il2cpp_codegen_object_new(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		FirebaseApp__ctor_mECDB71535A9846F085CD59C6EA9261E640FE127A(L_4, (intptr_t)L_3, (bool)0, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0023:
	{
		V_1 = G_B3_0;
		bool L_5 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		Exception_t * L_6 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, FirebaseApp_CreateInternal_m039014CF3B7DB1B092068767F49B9E0C9D9C11D6_RuntimeMethod_var);
	}

IL_0034:
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_7 = V_1;
		return L_7;
	}
}
// System.Void Firebase.FirebaseApp::ReleaseReferenceInternal(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ReleaseReferenceInternal_mDDCBE7D04450E4A53C0708998720842CC840EF07 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_ReleaseReferenceInternal_mDDCBE7D04450E4A53C0708998720842CC840EF07_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = ___app0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_1 = FirebaseApp_getCPtr_mF922A07C69469D0EB5A268A9278C495805BDCA4F(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_Firebase_App_FirebaseApp_ReleaseReferenceInternal_m8E2DF47124BF1A67C6BB04E57D422AE78BABE3F2(L_1, /*hidden argument*/NULL);
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseApp_ReleaseReferenceInternal_mDDCBE7D04450E4A53C0708998720842CC840EF07_RuntimeMethod_var);
	}

IL_001b:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::RegisterLibraryInternal(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_RegisterLibraryInternal_m33F0D35CAD2A634673F6A9D1610E0122FFB88637 (String_t* ___library0, String_t* ___version1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_RegisterLibraryInternal_m33F0D35CAD2A634673F6A9D1610E0122FFB88637_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___library0;
		String_t* L_1 = ___version1;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_Firebase_App_FirebaseApp_RegisterLibraryInternal_mC0827EF9ADAE73F66B0FD3481A52BF0CA2B01BD7(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseApp_RegisterLibraryInternal_m33F0D35CAD2A634673F6A9D1610E0122FFB88637_RuntimeMethod_var);
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::AppSetDefaultConfigPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_AppSetDefaultConfigPath_m53566882606C7038E0C2E2AD4182628B50D96F80 (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_AppSetDefaultConfigPath_m53566882606C7038E0C2E2AD4182628B50D96F80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_Firebase_App_FirebaseApp_AppSetDefaultConfigPath_m988AC83C2A57803F630DCFD784AC3504636AD8CD(L_0, /*hidden argument*/NULL);
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, FirebaseApp_AppSetDefaultConfigPath_m53566882606C7038E0C2E2AD4182628B50D96F80_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.String Firebase.FirebaseApp::get_DefaultName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_DefaultName_mBA7DA11C2791078BAA59206A945890E958546168 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_get_DefaultName_mBA7DA11C2791078BAA59206A945890E958546168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		String_t* L_0 = AppUtilPINVOKE_Firebase_App_FirebaseApp_DefaultName_get_m4A778152B530BD60EA311A032035B8EE0B88F693(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, FirebaseApp_get_DefaultName_mBA7DA11C2791078BAA59206A945890E958546168_RuntimeMethod_var);
	}

IL_0016:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::<Create>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseApp_U3CCreateU3Em__0_mD5F1CE4EE3725E0E57705E4941C5E38BCBB0C518 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_U3CCreateU3Em__0_mD5F1CE4EE3725E0E57705E4941C5E38BCBB0C518_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = FirebaseApp_CreateInternal_m039014CF3B7DB1B092068767F49B9E0C9D9C11D6(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Firebase.FirebaseApp::<CreateAndTrack>m__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseApp_U3CCreateAndTrackU3Em__1_mF4B85EE912269BF441F99AF1E4E7881443CD7C75 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_U3CCreateAndTrackU3Em__1_mF4B85EE912269BF441F99AF1E4E7881443CD7C75_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		bool L_0 = FirebaseApp_InitializeCrashlyticsIfPresent_mEC7562503FC321F112B1B90E0C7709175C1BA786(/*hidden argument*/NULL);
		return L_0;
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
// System.Void Firebase.FirebaseApp_CreateDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateDelegate__ctor_mA279FA3C2C3D5F9376130804EE01BB8DEDF9584D (CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Firebase.FirebaseApp Firebase.FirebaseApp_CreateDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * CreateDelegate_Invoke_mFDC361DD320C47E8E5BB468EFAB257D7C23C3EE3 (CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * __this, const RuntimeMethod* method)
{
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Firebase.FirebaseApp_CreateDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CreateDelegate_BeginInvoke_m832557D650F491C3E737680DD6D983BBF49F1FCB (CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// Firebase.FirebaseApp Firebase.FirebaseApp_CreateDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * CreateDelegate_EndInvoke_mE0EC3F88C1250F6364F70AAC536380B1EE29E4AB (CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.FirebaseApp_EnableModuleParams::.ctor(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableModuleParams__ctor_mC0CF508919EF04A896578538EAF80B4A6E58E750 (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * __this, String_t* ___csharp0, String_t* ___cpp1, bool ___always2, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___csharp0;
		EnableModuleParams_set_CSharpClassName_m85BFA74C1608D81B49D7D5C45B297B76CCEE20F3_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___cpp1;
		EnableModuleParams_set_CppModuleName_mA30925B48F2CE52E2E237F262F82FF7830CCE0A5_inline(__this, L_1, /*hidden argument*/NULL);
		bool L_2 = ___always2;
		EnableModuleParams_set_AlwaysEnable_m7636D0CA28BE95D6F25261C8CEA5651AC5A47F84_inline(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String Firebase.FirebaseApp_EnableModuleParams::get_CppModuleName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CppModuleName_m53DB9B2D254E157BB2311782D33920853A6BF042 (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCppModuleNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Firebase.FirebaseApp_EnableModuleParams::set_CppModuleName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableModuleParams_set_CppModuleName_mA30925B48F2CE52E2E237F262F82FF7830CCE0A5 (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCppModuleNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Firebase.FirebaseApp_EnableModuleParams::get_CSharpClassName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CSharpClassName_m652F90B63BD3DAA082A938D4CB58AD2BC6759F44 (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCSharpClassNameU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Firebase.FirebaseApp_EnableModuleParams::set_CSharpClassName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableModuleParams_set_CSharpClassName_m85BFA74C1608D81B49D7D5C45B297B76CCEE20F3 (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCSharpClassNameU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean Firebase.FirebaseApp_EnableModuleParams::get_AlwaysEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnableModuleParams_get_AlwaysEnable_m19451C262F0380C6DB2D8AAE316830AD8E7B1870 (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CAlwaysEnableU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Firebase.FirebaseApp_EnableModuleParams::set_AlwaysEnable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableModuleParams_set_AlwaysEnable_m7636D0CA28BE95D6F25261C8CEA5651AC5A47F84 (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CAlwaysEnableU3Ek__BackingField_2(L_0);
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
// System.Void Firebase.FirebaseException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException__ctor_mB31E783657F428BA72B055DF8A4CE6EA6996996C (FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF * __this, int32_t ___errorCode0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseException__ctor_mB31E783657F428BA72B055DF8A4CE6EA6996996C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___errorCode0;
		FirebaseException_set_ErrorCode_m4E3FC27532C7E7D78183D0393070E1895A54A316_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Firebase.FirebaseException::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseException_get_ErrorCode_m35E226BE84B218CC4F6C0B86EEE8770C2404F2A9 (FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Firebase.FirebaseException::set_ErrorCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException_set_ErrorCode_m4E3FC27532C7E7D78183D0393070E1895A54A316 (FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CErrorCodeU3Ek__BackingField_17(L_0);
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
// System.Void Firebase.FutureBase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase__ctor_mC05DD84980454E9B8210087E01926E5D56FC017F (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.FutureBase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Finalize_mAB21EE7CEC515CDD99FAB0686D59CB42082B7716 (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.FutureBase::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.FutureBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_mE480130D78254414AA6A59E2FA63B9AFC4AC01BC (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FutureBase_Dispose_mE480130D78254414AA6A59E2FA63B9AFC4AC01BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)L_2, /*hidden argument*/NULL);
			bool L_4 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0054;
			}
		}

IL_0026:
		{
			bool L_5 = __this->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_0043;
			}
		}

IL_0031:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_6 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
			AppUtilPINVOKE_Firebase_App_delete_FutureBase_mAD9EF7C7D0084FCBA7E08DDEA165A99B5AD1AB34(L_6, /*hidden argument*/NULL);
		}

IL_0043:
		{
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_7);
		}

IL_0054:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x66, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0066:
	{
		return;
	}
}
// Firebase.FutureStatus Firebase.FutureBase::status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_status_mD675FFD3FAE10D36169C16590EE3C6F1861DD136 (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FutureBase_status_mD675FFD3FAE10D36169C16590EE3C6F1861DD136_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		int32_t L_1 = AppUtilPINVOKE_Firebase_App_FutureBase_status_m8432BB5A381610C55302344E2038AE51BAF4D4AF(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FutureBase_status_mD675FFD3FAE10D36169C16590EE3C6F1861DD136_RuntimeMethod_var);
	}

IL_001c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 Firebase.FutureBase::error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_error_m70CFE004FF942C34ED11D221D0B6033AD40C1825 (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FutureBase_error_m70CFE004FF942C34ED11D221D0B6033AD40C1825_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		int32_t L_1 = AppUtilPINVOKE_Firebase_App_FutureBase_error_mD4C52D4D784968CE0D60A37DE882431CF3514C93(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FutureBase_error_m70CFE004FF942C34ED11D221D0B6033AD40C1825_RuntimeMethod_var);
	}

IL_001c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.FutureBase::error_message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureBase_error_message_m12EFFA84132AB25450D3D3F349A414EF597CCCE3 (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FutureBase_error_message_m12EFFA84132AB25450D3D3F349A414EF597CCCE3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		String_t* L_1 = AppUtilPINVOKE_Firebase_App_FutureBase_error_message_m1435CB8D1CE57C58E5175D0517F5D600189C2746(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FutureBase_error_message_m12EFFA84132AB25450D3D3F349A414EF597CCCE3_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_FutureString_SWIG_CompletionDispatcher_m86EEC251866153D32AEE9B99F7BD7C6E4CC3CECD(int32_t ___key0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	FutureString_SWIG_CompletionDispatcher_m86EEC251866153D32AEE9B99F7BD7C6E4CC3CECD(___key0, NULL);

}
// System.Void Firebase.FutureString::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString__ctor_m061489D0A1588D9DB38616FAB55A0BAD34485991 (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FutureString__ctor_m061489D0A1588D9DB38616FAB55A0BAD34485991_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_callbackData_6((intptr_t)(0));
		intptr_t L_0 = ___cPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		intptr_t L_1 = AppUtilPINVOKE_Firebase_App_FutureString_SWIGUpcast_m655F974F7F1851714F64ACBF724B3F31D8D64837((intptr_t)L_0, /*hidden argument*/NULL);
		bool L_2 = ___cMemoryOwn1;
		FutureBase__ctor_mC05DD84980454E9B8210087E01926E5D56FC017F(__this, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		intptr_t L_3 = ___cPtr0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_4), __this, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_swigCPtr_2(L_4);
		return;
	}
}
// System.Void Firebase.FutureString::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_Finalize_m7E05EFF7C0DF5C9B736E0211D3EAF724019558BF (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.FutureBase::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		FutureBase_Finalize_mAB21EE7CEC515CDD99FAB0686D59CB42082B7716(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.FutureString::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_Dispose_mA5531960B498D68D9A7253FB97ABB654080E782F (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FutureString_Dispose_mA5531960B498D68D9A7253FB97ABB654080E782F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A * L_2 = __this->get_address_of_swigCPtr_2();
			intptr_t L_3 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)L_2, /*hidden argument*/NULL);
			bool L_4 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_005f;
			}
		}

IL_0026:
		{
			FutureString_SetCompletionData_mA6014D9C79E67378D636D7CC8D2360B71CE9317A(__this, (intptr_t)(0), /*hidden argument*/NULL);
			bool L_5 = ((FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 *)__this)->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_004e;
			}
		}

IL_003c:
		{
			((FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 *)__this)->set_swigCMemOwn_1((bool)0);
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_6 = __this->get_swigCPtr_2();
			IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
			AppUtilPINVOKE_Firebase_App_delete_FutureString_m8B3FAF01839DB496EEAEEFB13E527CB185BCB6B5(L_6, /*hidden argument*/NULL);
		}

IL_004e:
		{
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_2(L_7);
		}

IL_005f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
			FutureBase_Dispose_mE480130D78254414AA6A59E2FA63B9AFC4AC01BC(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x77, FINALLY_0070);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0070;
	}

FINALLY_0070:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(112)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(112)
	{
		IL2CPP_JUMP_TBL(0x77, IL_0077)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0077:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> Firebase.FutureString::GetTask(Firebase.FutureString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * FutureString_GetTask_mE15192AC5EC101E6836F1F806E3CD9B91950B647 (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * ___fu0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FutureString_GetTask_mE15192AC5EC101E6836F1F806E3CD9B91950B647_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetTaskU3Ec__AnonStorey0_t8F84D81AE3078B5547B427BBE15133EEE42E5FCC * V_0 = NULL;
	{
		U3CGetTaskU3Ec__AnonStorey0_t8F84D81AE3078B5547B427BBE15133EEE42E5FCC * L_0 = (U3CGetTaskU3Ec__AnonStorey0_t8F84D81AE3078B5547B427BBE15133EEE42E5FCC *)il2cpp_codegen_object_new(U3CGetTaskU3Ec__AnonStorey0_t8F84D81AE3078B5547B427BBE15133EEE42E5FCC_il2cpp_TypeInfo_var);
		U3CGetTaskU3Ec__AnonStorey0__ctor_mBC66A9655B530602D3A35807CFB3C180E613276A(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetTaskU3Ec__AnonStorey0_t8F84D81AE3078B5547B427BBE15133EEE42E5FCC * L_1 = V_0;
		FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * L_2 = ___fu0;
		NullCheck(L_1);
		L_1->set_fu_0(L_2);
		U3CGetTaskU3Ec__AnonStorey0_t8F84D81AE3078B5547B427BBE15133EEE42E5FCC * L_3 = V_0;
		TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536 * L_4 = (TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m4816A3753F0A96EF52B86E56D4DB3185881424D6(L_4, /*hidden argument*/TaskCompletionSource_1__ctor_m4816A3753F0A96EF52B86E56D4DB3185881424D6_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->set_tcs_1(L_4);
		U3CGetTaskU3Ec__AnonStorey0_t8F84D81AE3078B5547B427BBE15133EEE42E5FCC * L_5 = V_0;
		NullCheck(L_5);
		FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * L_6 = L_5->get_fu_0();
		NullCheck(L_6);
		int32_t L_7 = FutureBase_status_mD675FFD3FAE10D36169C16590EE3C6F1861DD136(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_004b;
		}
	}
	{
		U3CGetTaskU3Ec__AnonStorey0_t8F84D81AE3078B5547B427BBE15133EEE42E5FCC * L_8 = V_0;
		NullCheck(L_8);
		TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536 * L_9 = L_8->get_tcs_1();
		FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF * L_10 = (FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF *)il2cpp_codegen_object_new(FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF_il2cpp_TypeInfo_var);
		FirebaseException__ctor_mB31E783657F428BA72B055DF8A4CE6EA6996996C(L_10, 0, _stringLiteralF3368570EE5DB7FA93890C049EB03DD764108E6C, /*hidden argument*/NULL);
		NullCheck(L_9);
		TaskCompletionSource_1_SetException_m58A8FA255D94C81F97A8B9D279A96F53AD196789(L_9, L_10, /*hidden argument*/TaskCompletionSource_1_SetException_m58A8FA255D94C81F97A8B9D279A96F53AD196789_RuntimeMethod_var);
		U3CGetTaskU3Ec__AnonStorey0_t8F84D81AE3078B5547B427BBE15133EEE42E5FCC * L_11 = V_0;
		NullCheck(L_11);
		TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536 * L_12 = L_11->get_tcs_1();
		NullCheck(L_12);
		Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * L_13 = TaskCompletionSource_1_get_Task_m6BFB69D9B960DF3EB72B79FA840F0B9E8B300BA8_inline(L_12, /*hidden argument*/TaskCompletionSource_1_get_Task_m6BFB69D9B960DF3EB72B79FA840F0B9E8B300BA8_RuntimeMethod_var);
		return L_13;
	}

IL_004b:
	{
		U3CGetTaskU3Ec__AnonStorey0_t8F84D81AE3078B5547B427BBE15133EEE42E5FCC * L_14 = V_0;
		NullCheck(L_14);
		FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * L_15 = L_14->get_fu_0();
		U3CGetTaskU3Ec__AnonStorey0_t8F84D81AE3078B5547B427BBE15133EEE42E5FCC * L_16 = V_0;
		Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195 * L_17 = (Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195 *)il2cpp_codegen_object_new(Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195_il2cpp_TypeInfo_var);
		Action__ctor_mE4D2F42653B22E66EE78EDFA0A6F0FC9DE29F868(L_17, L_16, (intptr_t)((intptr_t)U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m23AD6C5F8C58F0B1C6C8126A3C744AA076422966_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		FutureString_SetOnCompletionCallback_m7D091BF76B1A886948A923C0DB78F9D7ABF92329(L_15, L_17, /*hidden argument*/NULL);
		U3CGetTaskU3Ec__AnonStorey0_t8F84D81AE3078B5547B427BBE15133EEE42E5FCC * L_18 = V_0;
		NullCheck(L_18);
		TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536 * L_19 = L_18->get_tcs_1();
		NullCheck(L_19);
		Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * L_20 = TaskCompletionSource_1_get_Task_m6BFB69D9B960DF3EB72B79FA840F0B9E8B300BA8_inline(L_19, /*hidden argument*/TaskCompletionSource_1_get_Task_m6BFB69D9B960DF3EB72B79FA840F0B9E8B300BA8_RuntimeMethod_var);
		return L_20;
	}
}
// System.Void Firebase.FutureString::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_ThrowIfDisposed_m7418D0866866397DB8B214A7667285ED7A874664 (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FutureString_ThrowIfDisposed_m7418D0866866397DB8B214A7667285ED7A874664_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A * L_0 = __this->get_address_of_swigCPtr_2();
		intptr_t L_1 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)L_0, /*hidden argument*/NULL);
		bool L_2 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, _stringLiteralFB1AE274028B6974E9FDF9D77F5D12C65C8CD4D4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FutureString_ThrowIfDisposed_m7418D0866866397DB8B214A7667285ED7A874664_RuntimeMethod_var);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Firebase.FutureString::SetOnCompletionCallback(Firebase.FutureString_Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_SetOnCompletionCallback_m7D091BF76B1A886948A923C0DB78F9D7ABF92329 (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * __this, Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195 * ___userCompletionCallback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FutureString_SetOnCompletionCallback_m7D091BF76B1A886948A923C0DB78F9D7ABF92329_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		FutureString_ThrowIfDisposed_m7418D0866866397DB8B214A7667285ED7A874664(__this, /*hidden argument*/NULL);
		SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 * L_0 = __this->get_SWIG_CompletionCB_7();
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 * L_1 = (SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 *)il2cpp_codegen_object_new(SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064_il2cpp_TypeInfo_var);
		SWIG_CompletionDelegate__ctor_mC109D1C9CBA64C8F062BAFB3C647075B3445C1C1(L_1, NULL, (intptr_t)((intptr_t)FutureString_SWIG_CompletionDispatcher_m86EEC251866153D32AEE9B99F7BD7C6E4CC3CECD_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_SWIG_CompletionCB_7(L_1);
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var);
		RuntimeObject * L_2 = ((FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_2;
		RuntimeObject * L_3 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_3, /*hidden argument*/NULL);
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var);
			Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E * L_4 = ((FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (L_4)
			{
				goto IL_0043;
			}
		}

IL_0039:
		{
			Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E * L_5 = (Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E *)il2cpp_codegen_object_new(Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m75D77D1388F49077CA7C8049E3373DC2CDF94B16(L_5, /*hidden argument*/Dictionary_2__ctor_m75D77D1388F49077CA7C8049E3373DC2CDF94B16_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var);
			((FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var))->set_Callbacks_3(L_5);
		}

IL_0043:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var);
			int32_t L_6 = ((FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var))->get_CallbackIndex_4();
			int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
			((FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var))->set_CallbackIndex_4(L_7);
			V_0 = L_7;
			Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E * L_8 = ((FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_9 = V_0;
			Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195 * L_10 = ___userCompletionCallback0;
			NullCheck(L_8);
			Dictionary_2_set_Item_m5F7A387A231A2E62D7FBB45D7E13F5F5083D4E2F(L_8, L_9, L_10, /*hidden argument*/Dictionary_2_set_Item_m5F7A387A231A2E62D7FBB45D7E13F5F5083D4E2F_RuntimeMethod_var);
			IL2CPP_LEAVE(0x69, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_1;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(98)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0069:
	{
		SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 * L_12 = __this->get_SWIG_CompletionCB_7();
		int32_t L_13 = V_0;
		intptr_t L_14 = FutureString_SWIG_OnCompletion_m496492F7C240FE1FB23AF0223E100D95981FA0A0(__this, L_12, L_13, /*hidden argument*/NULL);
		FutureString_SetCompletionData_mA6014D9C79E67378D636D7CC8D2360B71CE9317A(__this, (intptr_t)L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.FutureString::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_SetCompletionData_mA6014D9C79E67378D636D7CC8D2360B71CE9317A (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	{
		FutureString_ThrowIfDisposed_m7418D0866866397DB8B214A7667285ED7A874664(__this, /*hidden argument*/NULL);
		intptr_t L_0 = __this->get_callbackData_6();
		FutureString_SWIG_FreeCompletionData_m728EE6C63C44CD43F72D2AC8D1AE44A5F4D9DEBB(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		intptr_t L_1 = ___data0;
		__this->set_callbackData_6((intptr_t)L_1);
		return;
	}
}
// System.Void Firebase.FutureString::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_SWIG_CompletionDispatcher_m86EEC251866153D32AEE9B99F7BD7C6E4CC3CECD (int32_t ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FutureString_SWIG_CompletionDispatcher_m86EEC251866153D32AEE9B99F7BD7C6E4CC3CECD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195 *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var);
			Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E * L_2 = ((FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (!L_2)
			{
				goto IL_0036;
			}
		}

IL_0018:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var);
			Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E * L_3 = ((FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_4 = ___key0;
			NullCheck(L_3);
			bool L_5 = Dictionary_2_TryGetValue_m6891153CBD9B055565200BCE3E921E28CA8F3A50(L_3, L_4, (Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m6891153CBD9B055565200BCE3E921E28CA8F3A50_RuntimeMethod_var);
			if (!L_5)
			{
				goto IL_0036;
			}
		}

IL_002a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var);
			Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E * L_6 = ((FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_7 = ___key0;
			NullCheck(L_6);
			Dictionary_2_Remove_m8BCB218068F462B08A669960F27A69DFF2C7F5FE(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m8BCB218068F462B08A669960F27A69DFF2C7F5FE_RuntimeMethod_var);
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_1;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0042:
	{
		Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195 * L_9 = V_0;
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195 * L_10 = V_0;
		NullCheck(L_10);
		Action_Invoke_m38CEF6AC23E334A73051C8A8495BD589F9944C45(L_10, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.IntPtr Firebase.FutureString::SWIG_OnCompletion(Firebase.FutureString_SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FutureString_SWIG_OnCompletion_m496492F7C240FE1FB23AF0223E100D95981FA0A0 (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * __this, SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FutureString_SWIG_OnCompletion_m496492F7C240FE1FB23AF0223E100D95981FA0A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_2();
		SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 * L_1 = ___cs_callback0;
		int32_t L_2 = ___cs_key1;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		intptr_t L_3 = AppUtilPINVOKE_Firebase_App_FutureString_SWIG_OnCompletion_m20A7771AEEF1D03B0DE3047D36FC8BEE0D247C26(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		bool L_4 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		Exception_t * L_5 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, FutureString_SWIG_OnCompletion_m496492F7C240FE1FB23AF0223E100D95981FA0A0_RuntimeMethod_var);
	}

IL_001e:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.Void Firebase.FutureString::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_SWIG_FreeCompletionData_m728EE6C63C44CD43F72D2AC8D1AE44A5F4D9DEBB (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FutureString_SWIG_FreeCompletionData_m728EE6C63C44CD43F72D2AC8D1AE44A5F4D9DEBB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_2();
		intptr_t L_1 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_Firebase_App_FutureString_SWIG_FreeCompletionData_m606A677773D5976BC37FDDFE13238114E93DA466(L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FutureString_SWIG_FreeCompletionData_m728EE6C63C44CD43F72D2AC8D1AE44A5F4D9DEBB_RuntimeMethod_var);
	}

IL_001c:
	{
		return;
	}
}
// System.String Firebase.FutureString::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureString_GetResult_mA8D502925B06DBE5B32FEFA08C37E1959A9531FB (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FutureString_GetResult_mA8D502925B06DBE5B32FEFA08C37E1959A9531FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t123091BA57386AC7E9D54EE2021752A8454E0C51_il2cpp_TypeInfo_var);
		String_t* L_1 = AppUtilPINVOKE_Firebase_App_FutureString_GetResult_m86378A84E903FB2AB1BE9B5B285EDE23F3EC305D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FutureString_GetResult_mA8D502925B06DBE5B32FEFA08C37E1959A9531FB_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.FutureString::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString__cctor_m9FCF43798D7BA44DCB1F0EB1E3AFADF13337ECBD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FutureString__cctor_m9FCF43798D7BA44DCB1F0EB1E3AFADF13337ECBD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var))->set_CallbackIndex_4(0);
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		((FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var))->set_CallbackLock_5(L_0);
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
// System.Void Firebase.FutureString_<GetTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0__ctor_mBC66A9655B530602D3A35807CFB3C180E613276A (U3CGetTaskU3Ec__AnonStorey0_t8F84D81AE3078B5547B427BBE15133EEE42E5FCC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.FutureString_<GetTask>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m23AD6C5F8C58F0B1C6C8126A3C744AA076422966 (U3CGetTaskU3Ec__AnonStorey0_t8F84D81AE3078B5547B427BBE15133EEE42E5FCC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m23AD6C5F8C58F0B1C6C8126A3C744AA076422966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * L_0 = __this->get_fu_0();
			NullCheck(L_0);
			int32_t L_1 = FutureBase_status_mD675FFD3FAE10D36169C16590EE3C6F1861DD136(L_0, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_1) == ((uint32_t)2))))
			{
				goto IL_0021;
			}
		}

IL_0011:
		{
			TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536 * L_2 = __this->get_tcs_1();
			NullCheck(L_2);
			TaskCompletionSource_1_SetCanceled_m21ECE34BE990CF5720FE4EDF333FA8943E535157(L_2, /*hidden argument*/TaskCompletionSource_1_SetCanceled_m21ECE34BE990CF5720FE4EDF333FA8943E535157_RuntimeMethod_var);
			goto IL_006a;
		}

IL_0021:
		{
			FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * L_3 = __this->get_fu_0();
			NullCheck(L_3);
			int32_t L_4 = FutureBase_error_m70CFE004FF942C34ED11D221D0B6033AD40C1825(L_3, /*hidden argument*/NULL);
			V_0 = L_4;
			int32_t L_5 = V_0;
			if (!L_5)
			{
				goto IL_0054;
			}
		}

IL_0033:
		{
			TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536 * L_6 = __this->get_tcs_1();
			int32_t L_7 = V_0;
			FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * L_8 = __this->get_fu_0();
			NullCheck(L_8);
			String_t* L_9 = FutureBase_error_message_m12EFFA84132AB25450D3D3F349A414EF597CCCE3(L_8, /*hidden argument*/NULL);
			FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF * L_10 = (FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF *)il2cpp_codegen_object_new(FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF_il2cpp_TypeInfo_var);
			FirebaseException__ctor_mB31E783657F428BA72B055DF8A4CE6EA6996996C(L_10, L_7, L_9, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskCompletionSource_1_SetException_m58A8FA255D94C81F97A8B9D279A96F53AD196789(L_6, L_10, /*hidden argument*/TaskCompletionSource_1_SetException_m58A8FA255D94C81F97A8B9D279A96F53AD196789_RuntimeMethod_var);
			goto IL_006a;
		}

IL_0054:
		{
			TaskCompletionSource_1_t22CD7B7EB9EFEA8381D258BF7F3309DAF7DB2536 * L_11 = __this->get_tcs_1();
			FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * L_12 = __this->get_fu_0();
			NullCheck(L_12);
			String_t* L_13 = FutureString_GetResult_mA8D502925B06DBE5B32FEFA08C37E1959A9531FB(L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			TaskCompletionSource_1_SetResult_m54E364FB76FEE0422C52826F502FCC7C7E0C07B9(L_11, L_13, /*hidden argument*/TaskCompletionSource_1_SetResult_m54E364FB76FEE0422C52826F502FCC7C7E0C07B9_RuntimeMethod_var);
		}

IL_006a:
		{
			goto IL_0086;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_006f;
		throw e;
	}

CATCH_006f:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)__exception_local);
		Exception_t * L_14 = V_1;
		String_t* L_15 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral8DE36E4005BD5F6F460D1074B3B6D78F7EB671CD, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mE0D4736B7C636462B2AD246F65EFAF5F1785822F(4, L_15, /*hidden argument*/NULL);
		goto IL_0086;
	} // end catch (depth: 1)

IL_0086:
	{
		FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * L_16 = __this->get_fu_0();
		NullCheck(L_16);
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.FutureBase::Dispose() */, L_16);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195 (Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Firebase.FutureString_Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mE4D2F42653B22E66EE78EDFA0A6F0FC9DE29F868 (Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.FutureString_Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m38CEF6AC23E334A73051C8A8495BD589F9944C45 (Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.FutureString_Action::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Action_BeginInvoke_mB8146276DDBC5D032CF36AA4F9AA227FE3433994 (Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Firebase.FutureString_Action::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_EndInvoke_m7EC0DCEE073FFE353FD10E26E8C3C8F6062488C6 (Action_t0A048D63C50B2F2B3106B038AEF335B8BBEAE195 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 (SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___index0);

}
// System.Void Firebase.FutureString_SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_mC109D1C9CBA64C8F062BAFB3C647075B3445C1C1 (SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.FutureString_SWIG_CompletionDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_Invoke_mE28C98C62BCF98D2BE91EB1A59DDA0C05B90FBD7 (SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___index0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___index0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___index0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___index0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___index0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___index0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___index0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___index0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___index0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.FutureString_SWIG_CompletionDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIG_CompletionDelegate_BeginInvoke_m13C1B5D998ED859B44ABAE56C0F0AC67AC5976AB (SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 * __this, int32_t ___index0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIG_CompletionDelegate_BeginInvoke_m13C1B5D998ED859B44ABAE56C0F0AC67AC5976AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___index0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.FutureString_SWIG_CompletionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_EndInvoke_m2ABCCBDDD7805C3EC86A1BBE9F6F6040EBAA926E (SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_m3BBD8A30C4B1757E8686AB762DBA7C7B6CB81591 (InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 * __this, int32_t ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InitializationException__ctor_m3BBD8A30C4B1757E8686AB762DBA7C7B6CB81591_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___result0;
		InitializationException_set_InitResult_m26B14A46FFC550963C2A43651DE79C50B86F48E5_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_m6A39CAC13E9D758C410431462099CF1D901B45FF (InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 * __this, int32_t ___result0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InitializationException__ctor_m6A39CAC13E9D758C410431462099CF1D901B45FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___result0;
		InitializationException_set_InitResult_m26B14A46FFC550963C2A43651DE79C50B86F48E5_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_m6778555FEC2C05FCA0FF20B33431B2C076054FA6 (InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 * __this, int32_t ___result0, String_t* ___message1, Exception_t * ___inner2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InitializationException__ctor_m6778555FEC2C05FCA0FF20B33431B2C076054FA6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message1;
		Exception_t * L_1 = ___inner2;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m62590BC1925B7B354EBFD852E162CD170FEB861D(__this, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___result0;
		InitializationException_set_InitResult_m26B14A46FFC550963C2A43651DE79C50B86F48E5_inline(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.InitializationException::set_InitResult(Firebase.InitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException_set_InitResult_m26B14A46FFC550963C2A43651DE79C50B86F48E5 (InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CInitResultU3Ek__BackingField_17(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_LogUtil_LogMessageFromCallback_m51E15E038FD24735B401F08AE91DA68177B9C1F8(int32_t ___logLevel0, char* ___message1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message1' to managed representation
	String_t* ____message1_unmarshaled = NULL;
	____message1_unmarshaled = il2cpp_codegen_marshal_string_result(___message1);

	// Managed method invocation
	LogUtil_LogMessageFromCallback_m51E15E038FD24735B401F08AE91DA68177B9C1F8(___logLevel0, ____message1_unmarshaled, NULL);

}
// System.Void Firebase.LogUtil::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil__cctor_m6E595A5CBB8B82B7BD71A4852DF65729B15B21B8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LogUtil__cctor_m6E595A5CBB8B82B7BD71A4852DF65729B15B21B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var))->set__instance_0((LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4 *)NULL);
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		((LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var))->set_InitializeLoggingLock_1(L_0);
		LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4 * L_1 = (LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4 *)il2cpp_codegen_object_new(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var);
		LogUtil__ctor_mAFE789D82E7A48CFB20437F1C33A2FFAA2A61648(L_1, /*hidden argument*/NULL);
		((LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var))->set__instance_0(L_1);
		return;
	}
}
// System.Void Firebase.LogUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil__ctor_mAFE789D82E7A48CFB20437F1C33A2FFAA2A61648 (LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LogUtil__ctor_mAFE789D82E7A48CFB20437F1C33A2FFAA2A61648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var);
		LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9 * L_0 = ((LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_3();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9 * L_1 = (LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9 *)il2cpp_codegen_object_new(LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9_il2cpp_TypeInfo_var);
		LogMessageDelegate__ctor_m0D3CDB2719AF22A8EF20626B9B82AC1A2F45E05E(L_1, NULL, (intptr_t)((intptr_t)LogUtil_LogMessageFromCallback_m51E15E038FD24735B401F08AE91DA68177B9C1F8_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var);
		((LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_3(L_1);
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var);
		LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9 * L_2 = ((LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_3();
		AppUtil_SetLogFunction_m2FD7E09A6AED976A0754E2E993786AAA5834B084(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.LogUtil::InitializeLogging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_InitializeLogging_m3DC0D9A5186F8E0E1972761477DB5461FFCEC354 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LogUtil_InitializeLogging_m3DC0D9A5186F8E0E1972761477DB5461FFCEC354_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var))->get_InitializeLoggingLock_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		AppUtil_AppEnableLogCallback_m9FA92B86E6A3653121CBD5C2CA2DDD2C31B2BF04((bool)1, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x1E, FINALLY_0017);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0017;
	}

FINALLY_0017:
	{ // begin finally (depth: 1)
		RuntimeObject * L_2 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_2, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(23)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(23)
	{
		IL2CPP_JUMP_TBL(0x1E, IL_001e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001e:
	{
		return;
	}
}
// Firebase.Platform.PlatformLogLevel Firebase.LogUtil::ConvertLogLevel(Firebase.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogUtil_ConvertLogLevel_mFFA87AF048B8DBB1ECEA04BBD51542A04427C822 (int32_t ___logLevel0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___logLevel0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0021;
			}
			case 3:
			{
				goto IL_0023;
			}
			case 4:
			{
				goto IL_0025;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001f:
	{
		return (int32_t)(0);
	}

IL_0021:
	{
		return (int32_t)(2);
	}

IL_0023:
	{
		return (int32_t)(3);
	}

IL_0025:
	{
		return (int32_t)(4);
	}

IL_0027:
	{
		return (int32_t)(1);
	}
}
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mE0D4736B7C636462B2AD246F65EFAF5F1785822F (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LogUtil_LogMessage_mE0D4736B7C636462B2AD246F65EFAF5F1785822F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___logLevel0;
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var);
		int32_t L_1 = LogUtil_ConvertLogLevel_mFFA87AF048B8DBB1ECEA04BBD51542A04427C822(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseLogger_t0AB9A6D2522CBB2F7D180395382228A4759420DE_il2cpp_TypeInfo_var);
		FirebaseLogger_LogMessage_mEF2033A0588D651D162FFE29C9FA77A39E51233E(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.LogUtil::LogMessageFromCallback(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessageFromCallback_m51E15E038FD24735B401F08AE91DA68177B9C1F8 (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LogUtil_LogMessageFromCallback_m51E15E038FD24735B401F08AE91DA68177B9C1F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseLogger_t0AB9A6D2522CBB2F7D180395382228A4759420DE_il2cpp_TypeInfo_var);
		bool L_0 = FirebaseLogger_get_CanRedirectNativeLogs_m29C5B1ACE567CEA890B6DA19D91AF37D1EDEEBC8(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___logLevel0;
		String_t* L_2 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mE0D4736B7C636462B2AD246F65EFAF5F1785822F(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void Firebase.LogUtil::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_Finalize_m47FD3A655624527C6FEA216E29C6BDA9306C8D35 (LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		LogUtil_Dispose_m3309007CAF0503891DA296F1CB22D442BA63ABFF(__this, (bool)0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void Firebase.LogUtil::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_Dispose_m3FEA1C02530EC4E814E7A724D26377919C5BB7D3 (LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LogUtil_Dispose_m3FEA1C02530EC4E814E7A724D26377919C5BB7D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogUtil_Dispose_m3309007CAF0503891DA296F1CB22D442BA63ABFF(__this, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.LogUtil::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_Dispose_m3309007CAF0503891DA296F1CB22D442BA63ABFF (LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_2();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		AppUtil_SetLogFunction_m2FD7E09A6AED976A0754E2E993786AAA5834B084((LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9 *)NULL, /*hidden argument*/NULL);
		__this->set__disposed_2((bool)1);
	}

IL_0018:
	{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9 (LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9 * __this, int32_t ___log_level0, String_t* ___message1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message1' to native representation
	char* ____message1_marshaled = NULL;
	____message1_marshaled = il2cpp_codegen_marshal_string(___message1);

	// Native function invocation
	il2cppPInvokeFunc(___log_level0, ____message1_marshaled);

	// Marshaling cleanup of parameter '___message1' native representation
	il2cpp_codegen_marshal_free(____message1_marshaled);
	____message1_marshaled = NULL;

}
// System.Void Firebase.LogUtil_LogMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMessageDelegate__ctor_m0D3CDB2719AF22A8EF20626B9B82AC1A2F45E05E (LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.LogUtil_LogMessageDelegate::Invoke(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMessageDelegate_Invoke_m20BABAAE7867154136330A9AF7BDA743D0A4E0FE (LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9 * __this, int32_t ___log_level0, String_t* ___message1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___log_level0, ___message1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___log_level0, ___message1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___log_level0, ___message1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___log_level0, ___message1);
					else
						GenericVirtActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___log_level0, ___message1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___log_level0, ___message1);
					else
						VirtActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___log_level0, ___message1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___log_level0) - 1), ___message1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___log_level0, ___message1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.LogUtil_LogMessageDelegate::BeginInvoke(Firebase.LogLevel,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogMessageDelegate_BeginInvoke_m2046879E66D9C09D9E8CC40403E97DE5D0804B2A (LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9 * __this, int32_t ___log_level0, String_t* ___message1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LogMessageDelegate_BeginInvoke_m2046879E66D9C09D9E8CC40403E97DE5D0804B2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(LogLevel_tC69575EF4D1F372E563D26D15A24B00EA684B4F8_il2cpp_TypeInfo_var, &___log_level0);
	__d_args[1] = ___message1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Firebase.LogUtil_LogMessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMessageDelegate_EndInvoke_m79E237F82D9C3DA6D5225C1642026BCACFE9DB50 (LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.MonoPInvokeCallbackAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_m2E81D5C84000CF30E71622CFD3F1E0BC542D9423 (MonoPInvokeCallbackAttribute_t4EB9CB59CC38D96C45648D54F15417BA4A52FDCB * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Platform.FirebaseAppUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtils__ctor_m0550C50AC91C0BC87D86B952856A53C97E3A8AC7 (FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Platform.FirebaseAppUtils Firebase.Platform.FirebaseAppUtils::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2 * FirebaseAppUtils_get_Instance_m9960DF708E432F14B1D2F4C78B388E853953B094 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAppUtils_get_Instance_m9960DF708E432F14B1D2F4C78B388E853953B094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2_il2cpp_TypeInfo_var);
		FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2 * L_0 = ((FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtils::TranslateDllNotFoundException(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtils_TranslateDllNotFoundException_mD61541C79FB05EDC2630F3C73CE0094C173E0D5A (FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAppUtils_TranslateDllNotFoundException_mD61541C79FB05EDC2630F3C73CE0094C173E0D5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ___action0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		FirebaseApp_TranslateDllNotFoundException_mC6F04F02034B21A8A258012156CA7F263FB594F6(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtils::PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtils_PollCallbacks_m5D20AC67704E5B18BF46A5703AECDEDCE7629986 (FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2 * __this, const RuntimeMethod* method)
{
	{
		AppUtil_PollCallbacks_mADFB4BC7209554590C31E37F8C08562E463F9D59(/*hidden argument*/NULL);
		return;
	}
}
// Firebase.Platform.PlatformLogLevel Firebase.Platform.FirebaseAppUtils::GetLogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseAppUtils_GetLogLevel_m05DD590ACE45E734BDC26078599A47E6730CB2E0 (FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAppUtils_GetLogLevel_m05DD590ACE45E734BDC26078599A47E6730CB2E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		int32_t L_0 = FirebaseApp_get_LogLevel_mA1462E02A6B78D0F598CF9D3F22CAF13D9E29E8D(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0013;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(Firebase.InitializationException)
		V_0 = 1;
		goto IL_0013;
	} // end catch (depth: 1)

IL_0013:
	{
		int32_t L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var);
		int32_t L_2 = LogUtil_ConvertLogLevel_mFFA87AF048B8DBB1ECEA04BBD51542A04427C822(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtils__cctor_m4837FB41B2F4A0BE41D86C217177EADFA3C9795F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAppUtils__cctor_m4837FB41B2F4A0BE41D86C217177EADFA3C9795F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2 * L_0 = (FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2 *)il2cpp_codegen_object_new(FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2_il2cpp_TypeInfo_var);
		FirebaseAppUtils__ctor_m0550C50AC91C0BC87D86B952856A53C97E3A8AC7(L_0, /*hidden argument*/NULL);
		((FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2_il2cpp_TypeInfo_var))->set_instance_0(L_0);
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
// System.String Firebase.VersionInfo::get_SdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VersionInfo_get_SdkVersion_m55C4F788028216AA98C44DE5D9964D7A236D4E93 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VersionInfo_get_SdkVersion_m55C4F788028216AA98C44DE5D9964D7A236D4E93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral48C8A82DFF32409C5DEA7D00B9C5CA211BC2AF5F;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppOptions_set_DatabaseUrl_m366936ECD0092B0115C71E8D5FBCB1C424DC1295_inline (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___value0, const RuntimeMethod* method)
{
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_0 = ___value0;
		__this->set_U3CDatabaseUrlU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppOptions_set_AppId_mCCA503158696E5130B84AA621D19DB71659A11E4_inline (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAppIdU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppOptions_set_ApiKey_m740BF1DE16FD84D12C136647E49B08B5D3656375_inline (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CApiKeyU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppOptions_set_MessageSenderId_m068B2732D0F3031D9EE9E115B1CC0E915D611E15_inline (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageSenderIdU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppOptions_set_StorageBucket_m6B82FA59AB41A66ADAAFB936C25B6C14E9A9D6A0_inline (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CStorageBucketU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppOptions_set_ProjectId_mD20A2123AD3700C29BF4DBE2FC07F170D624559F_inline (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CProjectIdU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AppOptions_set_PackageName_m15D939044210630597188B47808BD3CCB19A2DA1_inline (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPackageNameU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_handle_1();
		return (intptr_t)L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_mB5E945165A8F7DFAA21F0AD3A9E99CC3438943C5_inline (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CSharpClassName_m652F90B63BD3DAA082A938D4CB58AD2BC6759F44_inline (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCSharpClassNameU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CppModuleName_m53DB9B2D254E157BB2311782D33920853A6BF042_inline (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCppModuleNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool EnableModuleParams_get_AlwaysEnable_m19451C262F0380C6DB2D8AAE316830AD8E7B1870_inline (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CAlwaysEnableU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2 * FirebaseAppUtils_get_Instance_m9960DF708E432F14B1D2F4C78B388E853953B094_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAppUtils_get_Instance_m9960DF708E432F14B1D2F4C78B388E853953B094Firebase_App_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2_il2cpp_TypeInfo_var);
		FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2 * L_0 = ((FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtils_t78361B514401756B2D4E7F1C614B7BCA210CE3E2_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void EnableModuleParams_set_CSharpClassName_m85BFA74C1608D81B49D7D5C45B297B76CCEE20F3_inline (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCSharpClassNameU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void EnableModuleParams_set_CppModuleName_mA30925B48F2CE52E2E237F262F82FF7830CCE0A5_inline (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCppModuleNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void EnableModuleParams_set_AlwaysEnable_m7636D0CA28BE95D6F25261C8CEA5651AC5A47F84_inline (EnableModuleParams_t5E5431221AB3FE19D61EBD9CFE2990B9AD181CA9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CAlwaysEnableU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FirebaseException_set_ErrorCode_m4E3FC27532C7E7D78183D0393070E1895A54A316_inline (FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CErrorCodeU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void InitializationException_set_InitResult_m26B14A46FFC550963C2A43651DE79C50B86F48E5_inline (InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CInitResultU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * TaskCompletionSource_1_get_Task_mF1CB937DAB68DC43DA33893E95F48EFB07F385A0_gshared_inline (TaskCompletionSource_1_t3ECF7B56E418D2A3FFC4E551B9DA6A7E38C7D304 * __this, const RuntimeMethod* method)
{
	{
		Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * L_0 = (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *)__this->get_m_task_0();
		return L_0;
	}
}
