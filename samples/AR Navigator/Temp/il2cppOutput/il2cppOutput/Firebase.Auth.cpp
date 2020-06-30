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

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA;
// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD;
// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129;
// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t619BB8422C633B199FCD711B740F02C10ECC1042;
// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_tF8D24E458BC3FCBF49C63A872A123BAF4E53AC09;
// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D;
// Firebase.Auth.FirebaseAuth/<ForwardStateChange>c__AnonStorey3
struct U3CForwardStateChangeU3Ec__AnonStorey3_t5C0E4F8E37A78F1A41077C11EC92E34302B38B18;
// Firebase.Auth.FirebaseAuth/<ForwardStateChange>c__AnonStorey4
struct U3CForwardStateChangeU3Ec__AnonStorey4_tB01A3C627BA9158B9D7CA021320E971C0E0E51D3;
// Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey1
struct U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1;
// Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey2
struct U3CGetAuthU3Ec__AnonStorey2_tB3DC969FB282B9CF462B6CC3BEA5E8CF31EF5431;
// Firebase.Auth.FirebaseAuth/<SignInWithEmailAndPasswordAsync>c__AnonStoreyA
struct U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStoreyA_t1CDA9CF4D4D6123216891015275FB6224BBBE7DB;
// Firebase.Auth.FirebaseAuth/StateChangedDelegate
struct StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E;
// Firebase.Auth.FirebaseUser
struct FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F;
// Firebase.Auth.Future_User
struct Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6;
// Firebase.Auth.Future_User/<GetTask>c__AnonStorey0
struct U3CGetTaskU3Ec__AnonStorey0_tD24E1032A29E54F4EE7D42C4A7983F95BA52F014;
// Firebase.Auth.Future_User/Action
struct Action_tA440A205A18F955C2A59F01FA561405F864C62C1;
// Firebase.Auth.Future_User/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1;
// Firebase.Dispatcher
struct Dispatcher_t613F406E87F8495295D262A364DDD8801BB06557;
// Firebase.FirebaseApp
struct FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986;
// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F;
// Firebase.FirebaseException
struct FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF;
// Firebase.FutureBase
struct FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397;
// Firebase.FutureString
struct FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C;
// Firebase.FutureString/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064;
// Firebase.InitializationException
struct InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098;
// Firebase.Platform.Default.BaseAuthService
struct BaseAuthService_t77202DD950C9079AAB904A74B96F06FFB8E9DA11;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75;
// Firebase.Platform.FirebaseHandler
struct FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C;
// Firebase.Platform.FirebaseMonoBehaviour
struct FirebaseMonoBehaviour_t1C5FABF3FF9EF1FD0BB517B08A2F0805B3AD64B0;
// Firebase.Platform.IAppConfigExtensions
struct IAppConfigExtensions_t362FEF94FA8FC4281542DB73AB85A18C490DD450;
// Firebase.Platform.IAuthService
struct IAuthService_t74D1B35815B7A5C7F8E177CDDA45363893D10630;
// Firebase.Platform.IClockService
struct IClockService_tC83BA5CC8925B4FB346FCE5F86220A16991F0354;
// Firebase.Platform.IFirebaseAppUtils
struct IFirebaseAppUtils_t377E8825D7E7876483D0A90870A4BD55E2AB432F;
// Firebase.Platform.ILoggingService
struct ILoggingService_tF5FCF6BAA373E9C3985AEDEB3297E2953604D873;
// Firebase.Unity.FirebaseAuthService
struct FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607;
// Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey0
struct U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30;
// Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey1
struct U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98;
// Firebase.Unity.FirebaseAuthService/UserRefreshState
struct UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action[]
struct ActionU5BU5D_tBFE34E95F8D5EAA828CD01E01994E4574F55958B;
// System.Action`1<Firebase.Auth.FirebaseAuth>
struct Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_tFF0188AB046A1E1964F743C87F216E0A3D1D21E2;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_tF41DEFE08D91E5A3638655E075175E27AA82D1DC;
// System.Action`1<System.Threading.Tasks.Task`1<System.String>>
struct Action_1_t91A1F519E78C032DF9207397CD162424F217B4B3;
// System.AggregateException
struct AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E;
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
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.Auth.Future_User/Action>[]
struct EntryU5BU5D_tFFB30470DD7EF5DFF825C899A3A40AB0BD72E70B;
// System.Collections.Generic.Dictionary`2/Entry<System.IntPtr,Firebase.Auth.FirebaseAuth>[]
struct EntryU5BU5D_t5B653CBE6F12E9379C13C1C7D5E4CAD5A797A053;
// System.Collections.Generic.Dictionary`2/Entry<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>[]
struct EntryU5BU5D_t5E75DDCC7E10B7CF8D18F19396B758095AA8E7D4;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.Auth.Future_User/Action>
struct KeyCollection_tB12552AFD59721CDF7B77A7521A15689D6F675E0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct KeyCollection_t4646F037DFF529FD95F4B73F5DE7B00ACDC0FBDF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>
struct KeyCollection_t412D54840953B04D2318157D41A1FBEA746E0BA6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.Auth.Future_User/Action>
struct ValueCollection_t0E6724F78B2F3F79DD227216AD2E97C317548345;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct ValueCollection_t7D1B9EB0725801DE39EFFF0616D03E480CFEB2BE;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>
struct ValueCollection_tA44A0E285112A103E9783818D097A6F853554C5F;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>
struct Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString/Action>
struct Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>
struct Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>
struct Dictionary_2_tE930FC0A0DF3FBFFE9DC13EED210134C371C368E;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_tB3E7C5F256B78F0F0AC4D0D75860F996DF2C125E;
// System.Collections.Generic.List`1<System.Action>
struct List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8;
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
// System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>
struct EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3;
// System.Exception
struct Exception_t;
// System.Func`1<Firebase.DependencyStatus>
struct Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572;
// System.Func`1<System.Boolean>
struct Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1;
// System.Func`1<System.String>
struct Func_1_tFFD07C3F37BA096E036FCF22D6E90F7FF88C5220;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F;
// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Func_2_t1B831B3DB42A696FE71631B32752E05B59F1AA7E;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t8A17E987C73781D20C93E1140DAE0B3595A19A4B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_t1C8755364A4E277E5036A8167830AA7A8544A2C9;
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
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>
struct TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t3ECF7B56E418D2A3FFC4E551B9DA6A7E38C7D304;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<Firebase.Auth.FirebaseUser>
struct TaskFactory_1_t83EC8245D2EE7C9EC33497A63D0159C32B6EA656;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t1EC236EC6D34F0BBC2E87658D2A11017407240D4;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_tCE3276D3F820150AD890B4700B08839B1F60B2EB;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// System.WeakReference
struct WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t91A1F519E78C032DF9207397CD162424F217B4B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tFF0188AB046A1E1964F743C87F216E0A3D1D21E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tA440A205A18F955C2A59F01FA561405F864C62C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseAuthService_t77202DD950C9079AAB904A74B96F06FFB8E9DA11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformInformation_t4C1134978083AA8DDF5011D0258090736457AB73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_tF8D24E458BC3FCBF49C63A872A123BAF4E53AC09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_t619BB8422C633B199FCD711B740F02C10ECC1042_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CForwardStateChangeU3Ec__AnonStorey3_t5C0E4F8E37A78F1A41077C11EC92E34302B38B18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CForwardStateChangeU3Ec__AnonStorey4_tB01A3C627BA9158B9D7CA021320E971C0E0E51D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAuthU3Ec__AnonStorey2_tB3DC969FB282B9CF462B6CC3BEA5E8CF31EF5431_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetTaskU3Ec__AnonStorey0_tD24E1032A29E54F4EE7D42C4A7983F95BA52F014_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStoreyA_t1CDA9CF4D4D6123216891015275FB6224BBBE7DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05FF23A0D333FAD4F3664E98DB5B3023BC897BE8;
IL2CPP_EXTERN_C String_t* _stringLiteral1ADF25FEC94DB64FD75DB0A086C108CA09C1429F;
IL2CPP_EXTERN_C String_t* _stringLiteral50D8B4A941C26B89482C94AB324B5A274F9CED66;
IL2CPP_EXTERN_C String_t* _stringLiteral519E5A114736C3C9A5709C059C9D5F69D5683AB2;
IL2CPP_EXTERN_C String_t* _stringLiteral68BCE59F44E3649877DAC895B6EEBB542E548047;
IL2CPP_EXTERN_C String_t* _stringLiteral8DE36E4005BD5F6F460D1074B3B6D78F7EB671CD;
IL2CPP_EXTERN_C String_t* _stringLiteral9148CEB7DAA85FB68B0C29337C07B63FB064DAEB;
IL2CPP_EXTERN_C String_t* _stringLiteral9FAEFF89EFD7F12212721B04EA25B30381A1D30C;
IL2CPP_EXTERN_C String_t* _stringLiteralA804D931F27BE6EF35191274DAF148C0B4FCEEF6;
IL2CPP_EXTERN_C String_t* _stringLiteralA8EE0C528932D0A70FFB4E8D7CAEC1E2C7BC69D4;
IL2CPP_EXTERN_C String_t* _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A;
IL2CPP_EXTERN_C String_t* _stringLiteralF3368570EE5DB7FA93890C049EB03DD764108E6C;
IL2CPP_EXTERN_C String_t* _stringLiteralFB1AE274028B6974E9FDF9D77F5D12C65C8CD4D4;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m1DCC97F2F27C9990F2561B115DDB7D4A4C85E104_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m0651406FD57C9150AE4BE12B5E0DD14AD32DE5C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m443758288B4A1840F7094DC17AA8B477789DE4B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m5508D22ECD28CFA0DE45D604BCF05D27B5D2DC42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthUtil_CreateAuthStateListener_m79B4AB49D383DB7458D564F1BE4E31A76F2C3A24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthUtil_CreateIdTokenListener_m5CA39E14DE0E3BA0DDF7FD344553FF2CBD1BBE00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthUtil_DestroyAuthStateListener_mAF3EE6225D9555BB4204018D6CE005452B0766F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthUtil_DestroyIdTokenListener_m9576256EF310D2C8757FC19F55DBF5F742FBB36F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m09FAD314C7E9C62DD5F562D34324FCC1A04F319E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m3F480A8262B375B4BFFE42588D0E845504CA5C98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m7DB724888A431B8BE8E50B43222AF9EF77E34E72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mCD32BD16CC95EC5A392921F4A69454449BD6A1C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m2222DC21B8D6E147D0DF6C4A8262A0EF72D4ED42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m57BC28148024C733D39673192076784FB5CA208E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mE0A032DAADDA022FD66213A9EF29D60B1B386356_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m415F2D9C0DCD1E68BD176B96867ED8214094E797_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB844EAEE5D4EEE3ED0E007FE7CE8C308BF15D1FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBF2C82CF3BAB93C78C55FF7D056AF268619521E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m1DC14338A0E6BE9ADEDE3DE5FF212D08669EBAB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m5AC28990964DAEFDC2F7FBCB135923C5E74E1BDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m8C05EA2FF5DEB58945DC0336A0C990521F3E08CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mBBB35182BBB4E195F074567937450EF16C74DF13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m53E568327F5C48530A9F9D40EA19B03DA70DA3D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m989946DE9AEE08A21EA6ED0E5EF3FCB8AE1E2999_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7FBC971321821923ECD3D893BDB5E351D025271C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB78EBBF0E63F2F2F35DD2E7672EC0B07CF238B25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuthService_RefreshExpiredTokens_mE95018A6B6AF3F73EA84DBFAFA00AC8FF2746361_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_GetAuthInternal_m991F675141BD681FACC432067B9FFFE76080B648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_IdTokenChangedFunction_m57C331EB1A3C296A5DFD28EA036F0F4404ADEECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_OnAppDisposed_mA45B66E76F5BE8E999856DE4790EBEB6C0E92B50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_ReleaseReferenceInternal_m64539F9A01E7E6DA690484EE011EDE20E1C9EEAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_SignInWithEmailAndPasswordInternalAsync_mA6617BD34AC8ADDBB74414D36CEA59FBC2F9583C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_StateChangedFunction_mA8F92FBECD193976D942C7901DBD53E401932374_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_ThrowIfNull_mF1D29A1F5508A20087E07276C16A5D7AC0CCF9A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_U3CIdTokenChangedFunctionU3Em__1_m81FC59CF805B3F2DBDB6F1AB98F202C9BF36AD9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_U3CStateChangedFunctionU3Em__0_mB81E8C1132A7E7E5BA57AAF42FFC5BF83D8183A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_get_CurrentUserInternal_m092235EE454060C1D4072405F645FDE428348529_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseUser_TokenAsync_mDC1EF843591C9E195FEF5C47B73A116A7013E6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseUser_get_DisplayName_m26CCE526611BAADC2E802B2CA8318A99021E950F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseUser_get_Email_mDE164719166E94093DC423C192DE01D9AFD3D404_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseUser_get_UserId_m23E924FD00D362216B74119CC1AD90784BAA6420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_User_GetResult_m47B8754EDDAC710540B74A154A72DFFE30E86AA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_User_SWIG_CompletionDispatcher_m0A63943327FCEEFD0E5125F459C94DC6E6FFBF88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_User_SWIG_FreeCompletionData_m6DA6D5179749F401390CC7F45181D39DD4C28CE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_User_SWIG_OnCompletion_mEE8017ED9DF06FC970B5258FE8F44BE620933CF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_User_ThrowIfDisposed_m382E2329EEE8F3CA03F2686B026F8FB6013DFAC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mD77BAE1CBCDDF4F0D0B16E9982128AF0B2D839C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m1A31889D9077E57158B104295FFA9FCCB5489935_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA374038CC7A718F88F0BA10BA4AB0FBB8DCEE158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6368DC18C4ECFD5E24DB8519706D28A887DAF1E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA99E3E5D84C3ED79771C17F8FCF9B5795EB0C25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_mED5C184F17BEF3147768FBCA2E4D4354B63B27E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_m981D49A2CD66CFFB2586845F0973645E04FBB03A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_mB1BCD3DBE15B7660343A81BF671736193EDA981D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m8D005BC324621C8D98C6E041510B8760C19398BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m045C3B8EB0F704CDA426B54CB429B2C7193643E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_mF04E45DA2DAB8D67B100D7963AAEFC1489541814_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_m826C1BEF38EC0D99F60CB83474F9D1BD0FA5636F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m735ED3D0D28B75A5751B05A579CD874E9477A6A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m957D770CF8D9D114C8811F30DB3ECAAA68FE63E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m3C02AD87A0CF1A643AD2F5E1A5930DC1B13D21C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_mD52F8781945A0A731DC946E5819D2BA2C6889788_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_m50A97D18C9ECDC561827D47167229D53CF8C5A7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_m653D6594CCD2448A4CD40DE53B93F6EBC1DE1875_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m21D48E3AAFA45A33154601C703DD6B47486906D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_m8995D630A3637BCF34394AEA12072BEA2D6D9012_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_m5EB5804C391CFFC4E33F7F52D9DA6F58C9846628_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSourceCompat_1_SetException_mA18B9FD873E6D8CD5F4D2E34EAA3238B8323EACF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetCanceled_mE3F5C3030DDDD6497863D51BFF8DE0E710488330_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_mBF8838EC77A9A6BB5281E83B09A9DC7957BC8D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mF91EBA018EDCC766A8E0E3A36BF2C0DACEBF505A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m98B20A73B661A2B763A764995A30A2601B347EB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m5737E32C21EF62D2BAEC90727EE0C07AE314048A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_m5878929A909CC4F23EABDDA4ADD8D02B423F226F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_mFB0558DDC4C57A255A0FE8CCDD83D8D91CC72210_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m0A09B7D0EB3F2DFD0301991E1ED9EB5F39438956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CForwardStateChangeU3Ec__AnonStorey4_U3CU3Em__0_m970D40C949C46CD176F6E7BFE1B143A3478E5F1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAuthU3Ec__AnonStorey2_U3CU3Em__0_m3670BECAF618C625DB828A099B54C9584C87F56F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m07967C26A0CB0CFD44D6AFB4B7A88E1E10A3A581_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRefreshExpiredTokensU3Ec__AnonStorey0_U3CU3Em__0_m269E18E55DDCF6328DF8639637716A81FC168CE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRefreshExpiredTokensU3Ec__AnonStorey0_U3CU3Em__1_m9D596A06EF6A48E7E4A70B61F4D9D2335EE50008_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStoreyA_U3CU3Em__0_m4F951A350C7D17C2137D4C5A6FA453658E4A8AD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t AuthUtilPINVOKE__cctor_m86EBC2E7027DE0DBBA50584965A88F7428F380BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AuthUtil_CreateAuthStateListener_m79B4AB49D383DB7458D564F1BE4E31A76F2C3A24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AuthUtil_CreateIdTokenListener_m5CA39E14DE0E3BA0DDF7FD344553FF2CBD1BBE00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AuthUtil_DestroyAuthStateListener_mAF3EE6225D9555BB4204018D6CE005452B0766F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AuthUtil_DestroyIdTokenListener_m9576256EF310D2C8757FC19F55DBF5F742FBB36F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuthService_GetAppName_m5453B576FEBCEC66022EA8AA2BAB4F9BE1F969E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuthService_OnIdTokenChanged_m2A4A76C0154C6FDD38B2D007EA2AAA1106893261_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuthService_RefreshExpiredTokens_mE95018A6B6AF3F73EA84DBFAFA00AC8FF2746361_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuthService_StopTokenRefresh_mB0BD65E8FD518AA0A4E684C7D8E631C1121B4734_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuthService__cctor_m249E1D92C8633413A9A02370F976EC755F592612_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuthService__ctor_mE78BB63B4E947C5DA75F46FDA9BCBCED80DD416D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuthService_get_Instance_m23F18D0809F0B5EEC6CE02053988F1FC3E0EFCE8Firebase_Auth_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuthService_get_Instance_m23F18D0809F0B5EEC6CE02053988F1FC3E0EFCE8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuth_CompleteFirebaseUserTask_m315CBA4018D118D2AA59795197247C55C893937B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuth_DisposeInternal_mB39D097246264F2DEA2A44EF63546C1F95D71176_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuth_ForwardStateChange_m51C0E1EC6D8F9C857A893571EA6ED87BAD74F924_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuth_GetAuthInternal_m991F675141BD681FACC432067B9FFFE76080B648_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuth_GetAuth_mF9F3471073B652BC9FF94BD40D81B7360C75BC36_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuth_IdTokenChangedFunction_m57C331EB1A3C296A5DFD28EA036F0F4404ADEECA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuth_ProxyFromAppCPtr_mB75BAB4EEA30FDBABC4B4238CEBA19F0634E5D74_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuth_ReleaseReferenceInternal_m64539F9A01E7E6DA690484EE011EDE20E1C9EEAE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuth_SignInWithEmailAndPasswordAsync_m28C99A9A81AC39558D8D07E6824B660D81A23B6C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuth_SignInWithEmailAndPasswordInternalAsync_mA6617BD34AC8ADDBB74414D36CEA59FBC2F9583C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuth_StateChangedFunction_mA8F92FBECD193976D942C7901DBD53E401932374_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuth_ThrowIfNull_mF1D29A1F5508A20087E07276C16A5D7AC0CCF9A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuth_U3CIdTokenChangedFunctionU3Em__1_m81FC59CF805B3F2DBDB6F1AB98F202C9BF36AD9E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuth_U3CStateChangedFunctionU3Em__0_mB81E8C1132A7E7E5BA57AAF42FFC5BF83D8183A8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuth_UpdateCurrentUser_mA01C3D9B857CEA48860F3A3202E0F821B6EDDC56_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuth__cctor_m3A9DED4874354E90EF675E9D4D5E2544EC5874C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuth_getCPtr_m6C01C8CED64BD48D5773ACDB8A6FA6221526FC61_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuth_get_CurrentUserInternal_m092235EE454060C1D4072405F645FDE428348529_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuth_get_CurrentUser_m9F6B70352053BEA7DA757C4947DB575F435C1596_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAuth_get_DefaultInstance_m3792BC68FA9058F487792902BA9F495DEBE4A7FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseHandler_get_DefaultInstance_mDE47F7545F78ED4AAA09566895610B8DD8A6FE02Firebase_Auth_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseUser_Dispose_m0D1CAF1B60964799A2B01FD38A3BB435C3D818A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseUser_TokenAsync_mDC1EF843591C9E195FEF5C47B73A116A7013E6F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseUser_getCPtr_mC2544D71AB72001C769868A7881BE36808B7056B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseUser_get_DisplayName_m26CCE526611BAADC2E802B2CA8318A99021E950F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseUser_get_Email_mDE164719166E94093DC423C192DE01D9AFD3D404_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseUser_get_UserId_m23E924FD00D362216B74119CC1AD90784BAA6420_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_User_Dispose_m342A80815D5500FDF6ACD8861BDF59A2619AD108_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_User_GetResult_m47B8754EDDAC710540B74A154A72DFFE30E86AA6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_User_GetTask_m72CD84236E006E8EE1D965FDD586A7396BB387A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_User_SWIG_CompletionDispatcher_m0A63943327FCEEFD0E5125F459C94DC6E6FFBF88_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_User_SWIG_FreeCompletionData_m6DA6D5179749F401390CC7F45181D39DD4C28CE5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_User_SWIG_OnCompletion_mEE8017ED9DF06FC970B5258FE8F44BE620933CF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_User_SetOnCompletionCallback_m93B162D56DC8E7686F9ED6F6CD2AD50D673BEB4F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_User_ThrowIfDisposed_m382E2329EEE8F3CA03F2686B026F8FB6013DFAC2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_User__cctor_mA57142807E1A2D75B083003EC7280CAC095AD97B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_User__ctor_m133F92BABB2A3D39B379DC2A4F79D551AE3FA3F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlatformInformation_get_RealtimeSinceStartupSafe_mAE1E03781FD2AF4582A35355613D890863517663Firebase_Auth_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingApplicationException_mED5C184F17BEF3147768FBCA2E4D4354B63B27E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentException_m981D49A2CD66CFFB2586845F0973645E04FBB03A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentNullException_mB1BCD3DBE15B7660343A81BF671736193EDA981D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m8D005BC324621C8D98C6E041510B8760C19398BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArithmeticException_m045C3B8EB0F704CDA426B54CB429B2C7193643E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingDivideByZeroException_mF04E45DA2DAB8D67B100D7963AAEFC1489541814_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingIOException_m826C1BEF38EC0D99F60CB83474F9D1BD0FA5636F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m735ED3D0D28B75A5751B05A579CD874E9477A6A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingInvalidCastException_m957D770CF8D9D114C8811F30DB3ECAAA68FE63E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingInvalidOperationException_m3C02AD87A0CF1A643AD2F5E1A5930DC1B13D21C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingNullReferenceException_mD52F8781945A0A731DC946E5819D2BA2C6889788_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingOutOfMemoryException_m50A97D18C9ECDC561827D47167229D53CF8C5A7C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingOverflowException_m653D6594CCD2448A4CD40DE53B93F6EBC1DE1875_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingSystemException_m21D48E3AAFA45A33154601C703DD6B47486906D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper__cctor_m4DA3C4E48B608DAAACF8021F13A3F7E3FE6CB359_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException_Retrieve_mDAA529437C9C5E75EE22F57FC1101BE48C98FE0A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException_Set_m8995D630A3637BCF34394AEA12072BEA2D6D9012_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGStringHelper__cctor_m7472E43E20AF0AF0E3796823A9E16F392CDEA729_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIG_CompletionDelegate_BeginInvoke_m64EA5A1D844E60CC65209902949534E0A3E16B97_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Services_get_Auth_mA625B8DAD33D45656A1D8354B291A2DBC0E72A54Firebase_Auth_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Services_set_Auth_mC7EA4640F2ECFFB45540109F9F8C52EBC96C32BFFirebase_Auth_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StateChangedDelegate_BeginInvoke_m0029F178AE08AE64C174030E932190B16E78495C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CForwardStateChangeU3Ec__AnonStorey4_U3CU3Em__0_m970D40C949C46CD176F6E7BFE1B143A3478E5F1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetAuthU3Ec__AnonStorey2_U3CU3Em__0_m3670BECAF618C625DB828A099B54C9584C87F56F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m07967C26A0CB0CFD44D6AFB4B7A88E1E10A3A581_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CRefreshExpiredTokensU3Ec__AnonStorey0_U3CU3Em__0_m269E18E55DDCF6328DF8639637716A81FC168CE6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CRefreshExpiredTokensU3Ec__AnonStorey0_U3CU3Em__1_m9D596A06EF6A48E7E4A70B61F4D9D2335EE50008_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

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
struct  U3CModuleU3E_t810530E99ED8C2926F09804047F4B93D36FB7E62 
{
public:

public:
};


// System.Object


// Firebase.Auth.AuthUtil
struct  AuthUtil_tC58618A5D2D54A8FD30066E9FFF71525C1D76369  : public RuntimeObject
{
public:

public:
};


// Firebase.Auth.AuthUtilPINVOKE
struct  AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B  : public RuntimeObject
{
public:

public:
};

struct AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_StaticFields
{
public:
	// Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper Firebase.Auth.AuthUtilPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA * ___swigExceptionHelper_0;
	// Firebase.Auth.AuthUtilPINVOKE_SWIGStringHelper Firebase.Auth.AuthUtilPINVOKE::swigStringHelper
	SWIGStringHelper_t619BB8422C633B199FCD711B740F02C10ECC1042 * ___swigStringHelper_1;

public:
	inline static int32_t get_offset_of_swigExceptionHelper_0() { return static_cast<int32_t>(offsetof(AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_StaticFields, ___swigExceptionHelper_0)); }
	inline SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA * get_swigExceptionHelper_0() const { return ___swigExceptionHelper_0; }
	inline SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA ** get_address_of_swigExceptionHelper_0() { return &___swigExceptionHelper_0; }
	inline void set_swigExceptionHelper_0(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA * value)
	{
		___swigExceptionHelper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigExceptionHelper_0), (void*)value);
	}

	inline static int32_t get_offset_of_swigStringHelper_1() { return static_cast<int32_t>(offsetof(AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_StaticFields, ___swigStringHelper_1)); }
	inline SWIGStringHelper_t619BB8422C633B199FCD711B740F02C10ECC1042 * get_swigStringHelper_1() const { return ___swigStringHelper_1; }
	inline SWIGStringHelper_t619BB8422C633B199FCD711B740F02C10ECC1042 ** get_address_of_swigStringHelper_1() { return &___swigStringHelper_1; }
	inline void set_swigStringHelper_1(SWIGStringHelper_t619BB8422C633B199FCD711B740F02C10ECC1042 * value)
	{
		___swigStringHelper_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigStringHelper_1), (void*)value);
	}
};


// Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper
struct  SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA  : public RuntimeObject
{
public:

public:
};

struct SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields
{
public:
	// Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___applicationDelegate_0;
	// Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___arithmeticDelegate_1;
	// Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___divideByZeroDelegate_2;
	// Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___indexOutOfRangeDelegate_3;
	// Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___invalidCastDelegate_4;
	// Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___invalidOperationDelegate_5;
	// Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___ioDelegate_6;
	// Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___nullReferenceDelegate_7;
	// Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___outOfMemoryDelegate_8;
	// Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___overflowDelegate_9;
	// Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___systemDelegate_10;
	// Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * ___argumentDelegate_11;
	// Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * ___argumentNullDelegate_12;
	// Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * ___argumentOutOfRangeDelegate_13;

public:
	inline static int32_t get_offset_of_applicationDelegate_0() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields, ___applicationDelegate_0)); }
	inline ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * get_applicationDelegate_0() const { return ___applicationDelegate_0; }
	inline ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 ** get_address_of_applicationDelegate_0() { return &___applicationDelegate_0; }
	inline void set_applicationDelegate_0(ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * value)
	{
		___applicationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_arithmeticDelegate_1() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields, ___arithmeticDelegate_1)); }
	inline ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * get_arithmeticDelegate_1() const { return ___arithmeticDelegate_1; }
	inline ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 ** get_address_of_arithmeticDelegate_1() { return &___arithmeticDelegate_1; }
	inline void set_arithmeticDelegate_1(ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * value)
	{
		___arithmeticDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arithmeticDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_divideByZeroDelegate_2() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields, ___divideByZeroDelegate_2)); }
	inline ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * get_divideByZeroDelegate_2() const { return ___divideByZeroDelegate_2; }
	inline ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 ** get_address_of_divideByZeroDelegate_2() { return &___divideByZeroDelegate_2; }
	inline void set_divideByZeroDelegate_2(ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * value)
	{
		___divideByZeroDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___divideByZeroDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_indexOutOfRangeDelegate_3() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields, ___indexOutOfRangeDelegate_3)); }
	inline ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * get_indexOutOfRangeDelegate_3() const { return ___indexOutOfRangeDelegate_3; }
	inline ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 ** get_address_of_indexOutOfRangeDelegate_3() { return &___indexOutOfRangeDelegate_3; }
	inline void set_indexOutOfRangeDelegate_3(ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * value)
	{
		___indexOutOfRangeDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexOutOfRangeDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_invalidCastDelegate_4() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields, ___invalidCastDelegate_4)); }
	inline ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * get_invalidCastDelegate_4() const { return ___invalidCastDelegate_4; }
	inline ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 ** get_address_of_invalidCastDelegate_4() { return &___invalidCastDelegate_4; }
	inline void set_invalidCastDelegate_4(ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * value)
	{
		___invalidCastDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidCastDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of_invalidOperationDelegate_5() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields, ___invalidOperationDelegate_5)); }
	inline ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * get_invalidOperationDelegate_5() const { return ___invalidOperationDelegate_5; }
	inline ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 ** get_address_of_invalidOperationDelegate_5() { return &___invalidOperationDelegate_5; }
	inline void set_invalidOperationDelegate_5(ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * value)
	{
		___invalidOperationDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidOperationDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_ioDelegate_6() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields, ___ioDelegate_6)); }
	inline ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * get_ioDelegate_6() const { return ___ioDelegate_6; }
	inline ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 ** get_address_of_ioDelegate_6() { return &___ioDelegate_6; }
	inline void set_ioDelegate_6(ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * value)
	{
		___ioDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ioDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_nullReferenceDelegate_7() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields, ___nullReferenceDelegate_7)); }
	inline ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * get_nullReferenceDelegate_7() const { return ___nullReferenceDelegate_7; }
	inline ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 ** get_address_of_nullReferenceDelegate_7() { return &___nullReferenceDelegate_7; }
	inline void set_nullReferenceDelegate_7(ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * value)
	{
		___nullReferenceDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nullReferenceDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_outOfMemoryDelegate_8() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields, ___outOfMemoryDelegate_8)); }
	inline ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * get_outOfMemoryDelegate_8() const { return ___outOfMemoryDelegate_8; }
	inline ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 ** get_address_of_outOfMemoryDelegate_8() { return &___outOfMemoryDelegate_8; }
	inline void set_outOfMemoryDelegate_8(ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * value)
	{
		___outOfMemoryDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outOfMemoryDelegate_8), (void*)value);
	}

	inline static int32_t get_offset_of_overflowDelegate_9() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields, ___overflowDelegate_9)); }
	inline ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * get_overflowDelegate_9() const { return ___overflowDelegate_9; }
	inline ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 ** get_address_of_overflowDelegate_9() { return &___overflowDelegate_9; }
	inline void set_overflowDelegate_9(ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * value)
	{
		___overflowDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overflowDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_systemDelegate_10() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields, ___systemDelegate_10)); }
	inline ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * get_systemDelegate_10() const { return ___systemDelegate_10; }
	inline ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 ** get_address_of_systemDelegate_10() { return &___systemDelegate_10; }
	inline void set_systemDelegate_10(ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * value)
	{
		___systemDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_argumentDelegate_11() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields, ___argumentDelegate_11)); }
	inline ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * get_argumentDelegate_11() const { return ___argumentDelegate_11; }
	inline ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD ** get_address_of_argumentDelegate_11() { return &___argumentDelegate_11; }
	inline void set_argumentDelegate_11(ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * value)
	{
		___argumentDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_argumentNullDelegate_12() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields, ___argumentNullDelegate_12)); }
	inline ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * get_argumentNullDelegate_12() const { return ___argumentNullDelegate_12; }
	inline ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD ** get_address_of_argumentNullDelegate_12() { return &___argumentNullDelegate_12; }
	inline void set_argumentNullDelegate_12(ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * value)
	{
		___argumentNullDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentNullDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_argumentOutOfRangeDelegate_13() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields, ___argumentOutOfRangeDelegate_13)); }
	inline ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * get_argumentOutOfRangeDelegate_13() const { return ___argumentOutOfRangeDelegate_13; }
	inline ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD ** get_address_of_argumentOutOfRangeDelegate_13() { return &___argumentOutOfRangeDelegate_13; }
	inline void set_argumentOutOfRangeDelegate_13(ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * value)
	{
		___argumentOutOfRangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentOutOfRangeDelegate_13), (void*)value);
	}
};


// Firebase.Auth.AuthUtilPINVOKE_SWIGPendingException
struct  SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0  : public RuntimeObject
{
public:

public:
};

struct SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_StaticFields
{
public:
	// System.Int32 Firebase.Auth.AuthUtilPINVOKE_SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;

public:
	inline static int32_t get_offset_of_numExceptionsPending_1() { return static_cast<int32_t>(offsetof(SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_StaticFields, ___numExceptionsPending_1)); }
	inline int32_t get_numExceptionsPending_1() const { return ___numExceptionsPending_1; }
	inline int32_t* get_address_of_numExceptionsPending_1() { return &___numExceptionsPending_1; }
	inline void set_numExceptionsPending_1(int32_t value)
	{
		___numExceptionsPending_1 = value;
	}
};

struct SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_ThreadStaticFields
{
public:
	// System.Exception Firebase.Auth.AuthUtilPINVOKE_SWIGPendingException::pendingException
	Exception_t * ___pendingException_0;

public:
	inline static int32_t get_offset_of_pendingException_0() { return static_cast<int32_t>(offsetof(SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_ThreadStaticFields, ___pendingException_0)); }
	inline Exception_t * get_pendingException_0() const { return ___pendingException_0; }
	inline Exception_t ** get_address_of_pendingException_0() { return &___pendingException_0; }
	inline void set_pendingException_0(Exception_t * value)
	{
		___pendingException_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingException_0), (void*)value);
	}
};


// Firebase.Auth.AuthUtilPINVOKE_SWIGStringHelper
struct  SWIGStringHelper_t619BB8422C633B199FCD711B740F02C10ECC1042  : public RuntimeObject
{
public:

public:
};

struct SWIGStringHelper_t619BB8422C633B199FCD711B740F02C10ECC1042_StaticFields
{
public:
	// Firebase.Auth.AuthUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate Firebase.Auth.AuthUtilPINVOKE_SWIGStringHelper::stringDelegate
	SWIGStringDelegate_tF8D24E458BC3FCBF49C63A872A123BAF4E53AC09 * ___stringDelegate_0;

public:
	inline static int32_t get_offset_of_stringDelegate_0() { return static_cast<int32_t>(offsetof(SWIGStringHelper_t619BB8422C633B199FCD711B740F02C10ECC1042_StaticFields, ___stringDelegate_0)); }
	inline SWIGStringDelegate_tF8D24E458BC3FCBF49C63A872A123BAF4E53AC09 * get_stringDelegate_0() const { return ___stringDelegate_0; }
	inline SWIGStringDelegate_tF8D24E458BC3FCBF49C63A872A123BAF4E53AC09 ** get_address_of_stringDelegate_0() { return &___stringDelegate_0; }
	inline void set_stringDelegate_0(SWIGStringDelegate_tF8D24E458BC3FCBF49C63A872A123BAF4E53AC09 * value)
	{
		___stringDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringDelegate_0), (void*)value);
	}
};


// Firebase.Auth.FirebaseAuth_<ForwardStateChange>c__AnonStorey3
struct  U3CForwardStateChangeU3Ec__AnonStorey3_t5C0E4F8E37A78F1A41077C11EC92E34302B38B18  : public RuntimeObject
{
public:
	// System.Action`1<Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth_<ForwardStateChange>c__AnonStorey3::stateChangeClosure
	Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 * ___stateChangeClosure_0;

public:
	inline static int32_t get_offset_of_stateChangeClosure_0() { return static_cast<int32_t>(offsetof(U3CForwardStateChangeU3Ec__AnonStorey3_t5C0E4F8E37A78F1A41077C11EC92E34302B38B18, ___stateChangeClosure_0)); }
	inline Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 * get_stateChangeClosure_0() const { return ___stateChangeClosure_0; }
	inline Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 ** get_address_of_stateChangeClosure_0() { return &___stateChangeClosure_0; }
	inline void set_stateChangeClosure_0(Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 * value)
	{
		___stateChangeClosure_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateChangeClosure_0), (void*)value);
	}
};


// Firebase.Auth.FirebaseAuth_<ForwardStateChange>c__AnonStorey4
struct  U3CForwardStateChangeU3Ec__AnonStorey4_tB01A3C627BA9158B9D7CA021320E971C0E0E51D3  : public RuntimeObject
{
public:
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth_<ForwardStateChange>c__AnonStorey4::auth
	FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___auth_0;
	// Firebase.Auth.FirebaseAuth_<ForwardStateChange>c__AnonStorey3 Firebase.Auth.FirebaseAuth_<ForwardStateChange>c__AnonStorey4::<>f__refU243
	U3CForwardStateChangeU3Ec__AnonStorey3_t5C0E4F8E37A78F1A41077C11EC92E34302B38B18 * ___U3CU3Ef__refU243_1;

public:
	inline static int32_t get_offset_of_auth_0() { return static_cast<int32_t>(offsetof(U3CForwardStateChangeU3Ec__AnonStorey4_tB01A3C627BA9158B9D7CA021320E971C0E0E51D3, ___auth_0)); }
	inline FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * get_auth_0() const { return ___auth_0; }
	inline FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D ** get_address_of_auth_0() { return &___auth_0; }
	inline void set_auth_0(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * value)
	{
		___auth_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___auth_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU243_1() { return static_cast<int32_t>(offsetof(U3CForwardStateChangeU3Ec__AnonStorey4_tB01A3C627BA9158B9D7CA021320E971C0E0E51D3, ___U3CU3Ef__refU243_1)); }
	inline U3CForwardStateChangeU3Ec__AnonStorey3_t5C0E4F8E37A78F1A41077C11EC92E34302B38B18 * get_U3CU3Ef__refU243_1() const { return ___U3CU3Ef__refU243_1; }
	inline U3CForwardStateChangeU3Ec__AnonStorey3_t5C0E4F8E37A78F1A41077C11EC92E34302B38B18 ** get_address_of_U3CU3Ef__refU243_1() { return &___U3CU3Ef__refU243_1; }
	inline void set_U3CU3Ef__refU243_1(U3CForwardStateChangeU3Ec__AnonStorey3_t5C0E4F8E37A78F1A41077C11EC92E34302B38B18 * value)
	{
		___U3CU3Ef__refU243_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__refU243_1), (void*)value);
	}
};


// Firebase.Auth.FirebaseAuth_<GetAuth>c__AnonStorey1
struct  U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1  : public RuntimeObject
{
public:
	// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth_<GetAuth>c__AnonStorey1::app
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app_0;
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth_<GetAuth>c__AnonStorey1::auth
	FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___auth_1;

public:
	inline static int32_t get_offset_of_app_0() { return static_cast<int32_t>(offsetof(U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1, ___app_0)); }
	inline FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * get_app_0() const { return ___app_0; }
	inline FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 ** get_address_of_app_0() { return &___app_0; }
	inline void set_app_0(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * value)
	{
		___app_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___app_0), (void*)value);
	}

	inline static int32_t get_offset_of_auth_1() { return static_cast<int32_t>(offsetof(U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1, ___auth_1)); }
	inline FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * get_auth_1() const { return ___auth_1; }
	inline FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D ** get_address_of_auth_1() { return &___auth_1; }
	inline void set_auth_1(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * value)
	{
		___auth_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___auth_1), (void*)value);
	}
};


// Firebase.Auth.FirebaseAuth_<SignInWithEmailAndPasswordAsync>c__AnonStoreyA
struct  U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStoreyA_t1CDA9CF4D4D6123216891015275FB6224BBBE7DB  : public RuntimeObject
{
public:
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth_<SignInWithEmailAndPasswordAsync>c__AnonStoreyA::taskCompletionSource
	TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * ___taskCompletionSource_0;
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth_<SignInWithEmailAndPasswordAsync>c__AnonStoreyA::U24this
	FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___U24this_1;

public:
	inline static int32_t get_offset_of_taskCompletionSource_0() { return static_cast<int32_t>(offsetof(U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStoreyA_t1CDA9CF4D4D6123216891015275FB6224BBBE7DB, ___taskCompletionSource_0)); }
	inline TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * get_taskCompletionSource_0() const { return ___taskCompletionSource_0; }
	inline TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 ** get_address_of_taskCompletionSource_0() { return &___taskCompletionSource_0; }
	inline void set_taskCompletionSource_0(TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * value)
	{
		___taskCompletionSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___taskCompletionSource_0), (void*)value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStoreyA_t1CDA9CF4D4D6123216891015275FB6224BBBE7DB, ___U24this_1)); }
	inline FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * get_U24this_1() const { return ___U24this_1; }
	inline FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_1), (void*)value);
	}
};


// Firebase.Auth.Future_User_<GetTask>c__AnonStorey0
struct  U3CGetTaskU3Ec__AnonStorey0_tD24E1032A29E54F4EE7D42C4A7983F95BA52F014  : public RuntimeObject
{
public:
	// Firebase.Auth.Future_User Firebase.Auth.Future_User_<GetTask>c__AnonStorey0::fu
	Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * ___fu_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser> Firebase.Auth.Future_User_<GetTask>c__AnonStorey0::tcs
	TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * ___tcs_1;

public:
	inline static int32_t get_offset_of_fu_0() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_tD24E1032A29E54F4EE7D42C4A7983F95BA52F014, ___fu_0)); }
	inline Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * get_fu_0() const { return ___fu_0; }
	inline Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 ** get_address_of_fu_0() { return &___fu_0; }
	inline void set_fu_0(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * value)
	{
		___fu_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fu_0), (void*)value);
	}

	inline static int32_t get_offset_of_tcs_1() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_tD24E1032A29E54F4EE7D42C4A7983F95BA52F014, ___tcs_1)); }
	inline TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * get_tcs_1() const { return ___tcs_1; }
	inline TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 ** get_address_of_tcs_1() { return &___tcs_1; }
	inline void set_tcs_1(TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * value)
	{
		___tcs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcs_1), (void*)value);
	}
};


// Firebase.Platform.Default.BaseAuthService
struct  BaseAuthService_t77202DD950C9079AAB904A74B96F06FFB8E9DA11  : public RuntimeObject
{
public:

public:
};

struct BaseAuthService_t77202DD950C9079AAB904A74B96F06FFB8E9DA11_StaticFields
{
public:
	// Firebase.Platform.Default.BaseAuthService Firebase.Platform.Default.BaseAuthService::_instance
	BaseAuthService_t77202DD950C9079AAB904A74B96F06FFB8E9DA11 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(BaseAuthService_t77202DD950C9079AAB904A74B96F06FFB8E9DA11_StaticFields, ____instance_0)); }
	inline BaseAuthService_t77202DD950C9079AAB904A74B96F06FFB8E9DA11 * get__instance_0() const { return ____instance_0; }
	inline BaseAuthService_t77202DD950C9079AAB904A74B96F06FFB8E9DA11 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(BaseAuthService_t77202DD950C9079AAB904A74B96F06FFB8E9DA11 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}
};


// Firebase.Platform.FirebaseHandler
struct  FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C  : public RuntimeObject
{
public:
	// System.Boolean Firebase.Platform.FirebaseHandler::<IsPlayMode>k__BackingField
	bool ___U3CIsPlayModeU3Ek__BackingField_4;
	// System.EventHandler`1<System.EventArgs> Firebase.Platform.FirebaseHandler::Updated
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___Updated_6;
	// System.EventHandler`1<Firebase.Platform.FirebaseHandler_ApplicationFocusChangedEventArgs> Firebase.Platform.FirebaseHandler::ApplicationFocusChanged
	EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 * ___ApplicationFocusChanged_7;

public:
	inline static int32_t get_offset_of_U3CIsPlayModeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C, ___U3CIsPlayModeU3Ek__BackingField_4)); }
	inline bool get_U3CIsPlayModeU3Ek__BackingField_4() const { return ___U3CIsPlayModeU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsPlayModeU3Ek__BackingField_4() { return &___U3CIsPlayModeU3Ek__BackingField_4; }
	inline void set_U3CIsPlayModeU3Ek__BackingField_4(bool value)
	{
		___U3CIsPlayModeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_Updated_6() { return static_cast<int32_t>(offsetof(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C, ___Updated_6)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_Updated_6() const { return ___Updated_6; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_Updated_6() { return &___Updated_6; }
	inline void set_Updated_6(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___Updated_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Updated_6), (void*)value);
	}

	inline static int32_t get_offset_of_ApplicationFocusChanged_7() { return static_cast<int32_t>(offsetof(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C, ___ApplicationFocusChanged_7)); }
	inline EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 * get_ApplicationFocusChanged_7() const { return ___ApplicationFocusChanged_7; }
	inline EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 ** get_address_of_ApplicationFocusChanged_7() { return &___ApplicationFocusChanged_7; }
	inline void set_ApplicationFocusChanged_7(EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 * value)
	{
		___ApplicationFocusChanged_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ApplicationFocusChanged_7), (void*)value);
	}
};

struct FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_StaticFields
{
public:
	// Firebase.Platform.FirebaseMonoBehaviour Firebase.Platform.FirebaseHandler::firebaseMonoBehaviour
	FirebaseMonoBehaviour_t1C5FABF3FF9EF1FD0BB517B08A2F0805B3AD64B0 * ___firebaseMonoBehaviour_0;
	// Firebase.Platform.IFirebaseAppUtils Firebase.Platform.FirebaseHandler::<AppUtils>k__BackingField
	RuntimeObject* ___U3CAppUtilsU3Ek__BackingField_1;
	// System.Int32 Firebase.Platform.FirebaseHandler::tickCount
	int32_t ___tickCount_2;
	// Firebase.Dispatcher Firebase.Platform.FirebaseHandler::<ThreadDispatcher>k__BackingField
	Dispatcher_t613F406E87F8495295D262A364DDD8801BB06557 * ___U3CThreadDispatcherU3Ek__BackingField_3;
	// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseHandler::firebaseHandler
	FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C * ___firebaseHandler_5;
	// System.Func`1<System.Boolean> Firebase.Platform.FirebaseHandler::<>f__amU24cache0
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___U3CU3Ef__amU24cache0_8;

public:
	inline static int32_t get_offset_of_firebaseMonoBehaviour_0() { return static_cast<int32_t>(offsetof(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_StaticFields, ___firebaseMonoBehaviour_0)); }
	inline FirebaseMonoBehaviour_t1C5FABF3FF9EF1FD0BB517B08A2F0805B3AD64B0 * get_firebaseMonoBehaviour_0() const { return ___firebaseMonoBehaviour_0; }
	inline FirebaseMonoBehaviour_t1C5FABF3FF9EF1FD0BB517B08A2F0805B3AD64B0 ** get_address_of_firebaseMonoBehaviour_0() { return &___firebaseMonoBehaviour_0; }
	inline void set_firebaseMonoBehaviour_0(FirebaseMonoBehaviour_t1C5FABF3FF9EF1FD0BB517B08A2F0805B3AD64B0 * value)
	{
		___firebaseMonoBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firebaseMonoBehaviour_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppUtilsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_StaticFields, ___U3CAppUtilsU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CAppUtilsU3Ek__BackingField_1() const { return ___U3CAppUtilsU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CAppUtilsU3Ek__BackingField_1() { return &___U3CAppUtilsU3Ek__BackingField_1; }
	inline void set_U3CAppUtilsU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CAppUtilsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppUtilsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_tickCount_2() { return static_cast<int32_t>(offsetof(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_StaticFields, ___tickCount_2)); }
	inline int32_t get_tickCount_2() const { return ___tickCount_2; }
	inline int32_t* get_address_of_tickCount_2() { return &___tickCount_2; }
	inline void set_tickCount_2(int32_t value)
	{
		___tickCount_2 = value;
	}

	inline static int32_t get_offset_of_U3CThreadDispatcherU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_StaticFields, ___U3CThreadDispatcherU3Ek__BackingField_3)); }
	inline Dispatcher_t613F406E87F8495295D262A364DDD8801BB06557 * get_U3CThreadDispatcherU3Ek__BackingField_3() const { return ___U3CThreadDispatcherU3Ek__BackingField_3; }
	inline Dispatcher_t613F406E87F8495295D262A364DDD8801BB06557 ** get_address_of_U3CThreadDispatcherU3Ek__BackingField_3() { return &___U3CThreadDispatcherU3Ek__BackingField_3; }
	inline void set_U3CThreadDispatcherU3Ek__BackingField_3(Dispatcher_t613F406E87F8495295D262A364DDD8801BB06557 * value)
	{
		___U3CThreadDispatcherU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CThreadDispatcherU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_firebaseHandler_5() { return static_cast<int32_t>(offsetof(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_StaticFields, ___firebaseHandler_5)); }
	inline FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C * get_firebaseHandler_5() const { return ___firebaseHandler_5; }
	inline FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C ** get_address_of_firebaseHandler_5() { return &___firebaseHandler_5; }
	inline void set_firebaseHandler_5(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C * value)
	{
		___firebaseHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firebaseHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_8() { return static_cast<int32_t>(offsetof(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_StaticFields, ___U3CU3Ef__amU24cache0_8)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_U3CU3Ef__amU24cache0_8() const { return ___U3CU3Ef__amU24cache0_8; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_U3CU3Ef__amU24cache0_8() { return &___U3CU3Ef__amU24cache0_8; }
	inline void set_U3CU3Ef__amU24cache0_8(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___U3CU3Ef__amU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache0_8), (void*)value);
	}
};


// Firebase.Platform.PlatformInformation
struct  PlatformInformation_t4C1134978083AA8DDF5011D0258090736457AB73  : public RuntimeObject
{
public:

public:
};

struct PlatformInformation_t4C1134978083AA8DDF5011D0258090736457AB73_StaticFields
{
public:
	// System.String Firebase.Platform.PlatformInformation::runtimeVersion
	String_t* ___runtimeVersion_0;
	// System.Single Firebase.Platform.PlatformInformation::<RealtimeSinceStartupSafe>k__BackingField
	float ___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1;
	// System.Func`1<System.String> Firebase.Platform.PlatformInformation::<>f__amU24cache0
	Func_1_tFFD07C3F37BA096E036FCF22D6E90F7FF88C5220 * ___U3CU3Ef__amU24cache0_2;
	// System.Func`1<System.String> Firebase.Platform.PlatformInformation::<>f__amU24cache1
	Func_1_tFFD07C3F37BA096E036FCF22D6E90F7FF88C5220 * ___U3CU3Ef__amU24cache1_3;

public:
	inline static int32_t get_offset_of_runtimeVersion_0() { return static_cast<int32_t>(offsetof(PlatformInformation_t4C1134978083AA8DDF5011D0258090736457AB73_StaticFields, ___runtimeVersion_0)); }
	inline String_t* get_runtimeVersion_0() const { return ___runtimeVersion_0; }
	inline String_t** get_address_of_runtimeVersion_0() { return &___runtimeVersion_0; }
	inline void set_runtimeVersion_0(String_t* value)
	{
		___runtimeVersion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runtimeVersion_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRealtimeSinceStartupSafeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PlatformInformation_t4C1134978083AA8DDF5011D0258090736457AB73_StaticFields, ___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1)); }
	inline float get_U3CRealtimeSinceStartupSafeU3Ek__BackingField_1() const { return ___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1; }
	inline float* get_address_of_U3CRealtimeSinceStartupSafeU3Ek__BackingField_1() { return &___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1; }
	inline void set_U3CRealtimeSinceStartupSafeU3Ek__BackingField_1(float value)
	{
		___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_2() { return static_cast<int32_t>(offsetof(PlatformInformation_t4C1134978083AA8DDF5011D0258090736457AB73_StaticFields, ___U3CU3Ef__amU24cache0_2)); }
	inline Func_1_tFFD07C3F37BA096E036FCF22D6E90F7FF88C5220 * get_U3CU3Ef__amU24cache0_2() const { return ___U3CU3Ef__amU24cache0_2; }
	inline Func_1_tFFD07C3F37BA096E036FCF22D6E90F7FF88C5220 ** get_address_of_U3CU3Ef__amU24cache0_2() { return &___U3CU3Ef__amU24cache0_2; }
	inline void set_U3CU3Ef__amU24cache0_2(Func_1_tFFD07C3F37BA096E036FCF22D6E90F7FF88C5220 * value)
	{
		___U3CU3Ef__amU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_3() { return static_cast<int32_t>(offsetof(PlatformInformation_t4C1134978083AA8DDF5011D0258090736457AB73_StaticFields, ___U3CU3Ef__amU24cache1_3)); }
	inline Func_1_tFFD07C3F37BA096E036FCF22D6E90F7FF88C5220 * get_U3CU3Ef__amU24cache1_3() const { return ___U3CU3Ef__amU24cache1_3; }
	inline Func_1_tFFD07C3F37BA096E036FCF22D6E90F7FF88C5220 ** get_address_of_U3CU3Ef__amU24cache1_3() { return &___U3CU3Ef__amU24cache1_3; }
	inline void set_U3CU3Ef__amU24cache1_3(Func_1_tFFD07C3F37BA096E036FCF22D6E90F7FF88C5220 * value)
	{
		___U3CU3Ef__amU24cache1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1_3), (void*)value);
	}
};


// Firebase.Platform.Services
struct  Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC  : public RuntimeObject
{
public:

public:
};

struct Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_StaticFields
{
public:
	// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Services::<AppConfig>k__BackingField
	RuntimeObject* ___U3CAppConfigU3Ek__BackingField_0;
	// Firebase.Platform.IAuthService Firebase.Platform.Services::<Auth>k__BackingField
	RuntimeObject* ___U3CAuthU3Ek__BackingField_1;
	// Firebase.Platform.IClockService Firebase.Platform.Services::<Clock>k__BackingField
	RuntimeObject* ___U3CClockU3Ek__BackingField_2;
	// Firebase.Platform.ILoggingService Firebase.Platform.Services::<Logging>k__BackingField
	RuntimeObject* ___U3CLoggingU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CAppConfigU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_StaticFields, ___U3CAppConfigU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CAppConfigU3Ek__BackingField_0() const { return ___U3CAppConfigU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CAppConfigU3Ek__BackingField_0() { return &___U3CAppConfigU3Ek__BackingField_0; }
	inline void set_U3CAppConfigU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CAppConfigU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppConfigU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_StaticFields, ___U3CAuthU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CAuthU3Ek__BackingField_1() const { return ___U3CAuthU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CAuthU3Ek__BackingField_1() { return &___U3CAuthU3Ek__BackingField_1; }
	inline void set_U3CAuthU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CAuthU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClockU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_StaticFields, ___U3CClockU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CClockU3Ek__BackingField_2() const { return ___U3CClockU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CClockU3Ek__BackingField_2() { return &___U3CClockU3Ek__BackingField_2; }
	inline void set_U3CClockU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CClockU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClockU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLoggingU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_StaticFields, ___U3CLoggingU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CLoggingU3Ek__BackingField_3() const { return ___U3CLoggingU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CLoggingU3Ek__BackingField_3() { return &___U3CLoggingU3Ek__BackingField_3; }
	inline void set_U3CLoggingU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CLoggingU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoggingU3Ek__BackingField_3), (void*)value);
	}
};


// Firebase.Unity.FirebaseAuthService_<RefreshExpiredTokens>c__AnonStorey0
struct  U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30  : public RuntimeObject
{
public:
	// Firebase.Auth.FirebaseUser Firebase.Unity.FirebaseAuthService_<RefreshExpiredTokens>c__AnonStorey0::user
	FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * ___user_0;
	// Firebase.Unity.FirebaseAuthService_UserRefreshState Firebase.Unity.FirebaseAuthService_<RefreshExpiredTokens>c__AnonStorey0::userRefreshState
	UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * ___userRefreshState_1;
	// System.String Firebase.Unity.FirebaseAuthService_<RefreshExpiredTokens>c__AnonStorey0::appName
	String_t* ___appName_2;
	// Firebase.Unity.FirebaseAuthService_<RefreshExpiredTokens>c__AnonStorey1 Firebase.Unity.FirebaseAuthService_<RefreshExpiredTokens>c__AnonStorey0::<>f__refU241
	U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98 * ___U3CU3Ef__refU241_3;

public:
	inline static int32_t get_offset_of_user_0() { return static_cast<int32_t>(offsetof(U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30, ___user_0)); }
	inline FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * get_user_0() const { return ___user_0; }
	inline FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F ** get_address_of_user_0() { return &___user_0; }
	inline void set_user_0(FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * value)
	{
		___user_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___user_0), (void*)value);
	}

	inline static int32_t get_offset_of_userRefreshState_1() { return static_cast<int32_t>(offsetof(U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30, ___userRefreshState_1)); }
	inline UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * get_userRefreshState_1() const { return ___userRefreshState_1; }
	inline UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 ** get_address_of_userRefreshState_1() { return &___userRefreshState_1; }
	inline void set_userRefreshState_1(UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * value)
	{
		___userRefreshState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userRefreshState_1), (void*)value);
	}

	inline static int32_t get_offset_of_appName_2() { return static_cast<int32_t>(offsetof(U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30, ___appName_2)); }
	inline String_t* get_appName_2() const { return ___appName_2; }
	inline String_t** get_address_of_appName_2() { return &___appName_2; }
	inline void set_appName_2(String_t* value)
	{
		___appName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appName_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU241_3() { return static_cast<int32_t>(offsetof(U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30, ___U3CU3Ef__refU241_3)); }
	inline U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98 * get_U3CU3Ef__refU241_3() const { return ___U3CU3Ef__refU241_3; }
	inline U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98 ** get_address_of_U3CU3Ef__refU241_3() { return &___U3CU3Ef__refU241_3; }
	inline void set_U3CU3Ef__refU241_3(U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98 * value)
	{
		___U3CU3Ef__refU241_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__refU241_3), (void*)value);
	}
};


// Firebase.Unity.FirebaseAuthService_<RefreshExpiredTokens>c__AnonStorey1
struct  U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98  : public RuntimeObject
{
public:
	// System.Single Firebase.Unity.FirebaseAuthService_<RefreshExpiredTokens>c__AnonStorey1::now
	float ___now_0;
	// Firebase.Unity.FirebaseAuthService Firebase.Unity.FirebaseAuthService_<RefreshExpiredTokens>c__AnonStorey1::U24this
	FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * ___U24this_1;

public:
	inline static int32_t get_offset_of_now_0() { return static_cast<int32_t>(offsetof(U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98, ___now_0)); }
	inline float get_now_0() const { return ___now_0; }
	inline float* get_address_of_now_0() { return &___now_0; }
	inline void set_now_0(float value)
	{
		___now_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98, ___U24this_1)); }
	inline FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * get_U24this_1() const { return ___U24this_1; }
	inline FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_1), (void*)value);
	}
};


// Firebase.Unity.FirebaseAuthService_UserRefreshState
struct  UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11  : public RuntimeObject
{
public:
	// System.WeakReference Firebase.Unity.FirebaseAuthService_UserRefreshState::auth
	WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * ___auth_0;
	// System.WeakReference Firebase.Unity.FirebaseAuthService_UserRefreshState::user
	WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * ___user_1;
	// System.Single Firebase.Unity.FirebaseAuthService_UserRefreshState::lastTokenRefreshTime
	float ___lastTokenRefreshTime_2;
	// System.Boolean Firebase.Unity.FirebaseAuthService_UserRefreshState::forceRefresh
	bool ___forceRefresh_3;

public:
	inline static int32_t get_offset_of_auth_0() { return static_cast<int32_t>(offsetof(UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11, ___auth_0)); }
	inline WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * get_auth_0() const { return ___auth_0; }
	inline WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D ** get_address_of_auth_0() { return &___auth_0; }
	inline void set_auth_0(WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * value)
	{
		___auth_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___auth_0), (void*)value);
	}

	inline static int32_t get_offset_of_user_1() { return static_cast<int32_t>(offsetof(UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11, ___user_1)); }
	inline WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * get_user_1() const { return ___user_1; }
	inline WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D ** get_address_of_user_1() { return &___user_1; }
	inline void set_user_1(WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * value)
	{
		___user_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___user_1), (void*)value);
	}

	inline static int32_t get_offset_of_lastTokenRefreshTime_2() { return static_cast<int32_t>(offsetof(UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11, ___lastTokenRefreshTime_2)); }
	inline float get_lastTokenRefreshTime_2() const { return ___lastTokenRefreshTime_2; }
	inline float* get_address_of_lastTokenRefreshTime_2() { return &___lastTokenRefreshTime_2; }
	inline void set_lastTokenRefreshTime_2(float value)
	{
		___lastTokenRefreshTime_2 = value;
	}

	inline static int32_t get_offset_of_forceRefresh_3() { return static_cast<int32_t>(offsetof(UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11, ___forceRefresh_3)); }
	inline bool get_forceRefresh_3() const { return ___forceRefresh_3; }
	inline bool* get_address_of_forceRefresh_3() { return &___forceRefresh_3; }
	inline void set_forceRefresh_3(bool value)
	{
		___forceRefresh_3 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User_Action>
struct  Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tFFB30470DD7EF5DFF825C899A3A40AB0BD72E70B* ___entries_1;
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
	KeyCollection_tB12552AFD59721CDF7B77A7521A15689D6F675E0 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0E6724F78B2F3F79DD227216AD2E97C317548345 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D, ___entries_1)); }
	inline EntryU5BU5D_tFFB30470DD7EF5DFF825C899A3A40AB0BD72E70B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tFFB30470DD7EF5DFF825C899A3A40AB0BD72E70B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tFFB30470DD7EF5DFF825C899A3A40AB0BD72E70B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D, ___keys_7)); }
	inline KeyCollection_tB12552AFD59721CDF7B77A7521A15689D6F675E0 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB12552AFD59721CDF7B77A7521A15689D6F675E0 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB12552AFD59721CDF7B77A7521A15689D6F675E0 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D, ___values_8)); }
	inline ValueCollection_t0E6724F78B2F3F79DD227216AD2E97C317548345 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0E6724F78B2F3F79DD227216AD2E97C317548345 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0E6724F78B2F3F79DD227216AD2E97C317548345 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct  Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5B653CBE6F12E9379C13C1C7D5E4CAD5A797A053* ___entries_1;
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
	KeyCollection_t4646F037DFF529FD95F4B73F5DE7B00ACDC0FBDF * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t7D1B9EB0725801DE39EFFF0616D03E480CFEB2BE * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C, ___entries_1)); }
	inline EntryU5BU5D_t5B653CBE6F12E9379C13C1C7D5E4CAD5A797A053* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5B653CBE6F12E9379C13C1C7D5E4CAD5A797A053** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5B653CBE6F12E9379C13C1C7D5E4CAD5A797A053* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C, ___keys_7)); }
	inline KeyCollection_t4646F037DFF529FD95F4B73F5DE7B00ACDC0FBDF * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t4646F037DFF529FD95F4B73F5DE7B00ACDC0FBDF ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t4646F037DFF529FD95F4B73F5DE7B00ACDC0FBDF * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C, ___values_8)); }
	inline ValueCollection_t7D1B9EB0725801DE39EFFF0616D03E480CFEB2BE * get_values_8() const { return ___values_8; }
	inline ValueCollection_t7D1B9EB0725801DE39EFFF0616D03E480CFEB2BE ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t7D1B9EB0725801DE39EFFF0616D03E480CFEB2BE * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Unity.FirebaseAuthService_UserRefreshState>
struct  Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5E75DDCC7E10B7CF8D18F19396B758095AA8E7D4* ___entries_1;
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
	KeyCollection_t412D54840953B04D2318157D41A1FBEA746E0BA6 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA44A0E285112A103E9783818D097A6F853554C5F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B, ___entries_1)); }
	inline EntryU5BU5D_t5E75DDCC7E10B7CF8D18F19396B758095AA8E7D4* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5E75DDCC7E10B7CF8D18F19396B758095AA8E7D4** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5E75DDCC7E10B7CF8D18F19396B758095AA8E7D4* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B, ___keys_7)); }
	inline KeyCollection_t412D54840953B04D2318157D41A1FBEA746E0BA6 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t412D54840953B04D2318157D41A1FBEA746E0BA6 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t412D54840953B04D2318157D41A1FBEA746E0BA6 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B, ___values_8)); }
	inline ValueCollection_tA44A0E285112A103E9783818D097A6F853554C5F * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA44A0E285112A103E9783818D097A6F853554C5F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA44A0E285112A103E9783818D097A6F853554C5F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Action>
struct  List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_tBFE34E95F8D5EAA828CD01E01994E4574F55958B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE, ____items_1)); }
	inline ActionU5BU5D_tBFE34E95F8D5EAA828CD01E01994E4574F55958B* get__items_1() const { return ____items_1; }
	inline ActionU5BU5D_tBFE34E95F8D5EAA828CD01E01994E4574F55958B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ActionU5BU5D_tBFE34E95F8D5EAA828CD01E01994E4574F55958B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ActionU5BU5D_tBFE34E95F8D5EAA828CD01E01994E4574F55958B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE_StaticFields, ____emptyArray_5)); }
	inline ActionU5BU5D_tBFE34E95F8D5EAA828CD01E01994E4574F55958B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ActionU5BU5D_tBFE34E95F8D5EAA828CD01E01994E4574F55958B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ActionU5BU5D_tBFE34E95F8D5EAA828CD01E01994E4574F55958B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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


// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>
struct  TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10, ___m_task_0)); }
	inline Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
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

// Firebase.Unity.FirebaseAuthService
struct  FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607  : public BaseAuthService_t77202DD950C9079AAB904A74B96F06FFB8E9DA11
{
public:
	// System.Single Firebase.Unity.FirebaseAuthService::TOKEN_REFRESH_PERIOD_SECONDS
	float ___TOKEN_REFRESH_PERIOD_SECONDS_2;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Unity.FirebaseAuthService_UserRefreshState> Firebase.Unity.FirebaseAuthService::userRefreshStateByAuthCPtr
	Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B * ___userRefreshStateByAuthCPtr_3;

public:
	inline static int32_t get_offset_of_TOKEN_REFRESH_PERIOD_SECONDS_2() { return static_cast<int32_t>(offsetof(FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607, ___TOKEN_REFRESH_PERIOD_SECONDS_2)); }
	inline float get_TOKEN_REFRESH_PERIOD_SECONDS_2() const { return ___TOKEN_REFRESH_PERIOD_SECONDS_2; }
	inline float* get_address_of_TOKEN_REFRESH_PERIOD_SECONDS_2() { return &___TOKEN_REFRESH_PERIOD_SECONDS_2; }
	inline void set_TOKEN_REFRESH_PERIOD_SECONDS_2(float value)
	{
		___TOKEN_REFRESH_PERIOD_SECONDS_2 = value;
	}

	inline static int32_t get_offset_of_userRefreshStateByAuthCPtr_3() { return static_cast<int32_t>(offsetof(FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607, ___userRefreshStateByAuthCPtr_3)); }
	inline Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B * get_userRefreshStateByAuthCPtr_3() const { return ___userRefreshStateByAuthCPtr_3; }
	inline Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B ** get_address_of_userRefreshStateByAuthCPtr_3() { return &___userRefreshStateByAuthCPtr_3; }
	inline void set_userRefreshStateByAuthCPtr_3(Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B * value)
	{
		___userRefreshStateByAuthCPtr_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userRefreshStateByAuthCPtr_3), (void*)value);
	}
};

struct FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607_StaticFields
{
public:
	// Firebase.Unity.FirebaseAuthService Firebase.Unity.FirebaseAuthService::_instance
	FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * ____instance_1;

public:
	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607_StaticFields, ____instance_1)); }
	inline FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * get__instance_1() const { return ____instance_1; }
	inline FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_1), (void*)value);
	}
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


// System.Collections.Generic.List`1_Enumerator<System.Action>
struct  Enumerator_tA518899C189EFD03940570E1AEAC9AA9C766F663 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA518899C189EFD03940570E1AEAC9AA9C766F663, ___list_0)); }
	inline List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * get_list_0() const { return ___list_0; }
	inline List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA518899C189EFD03940570E1AEAC9AA9C766F663, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA518899C189EFD03940570E1AEAC9AA9C766F663, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA518899C189EFD03940570E1AEAC9AA9C766F663, ___current_3)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_current_3() const { return ___current_3; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
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


// System.Collections.Generic.KeyValuePair`2<System.IntPtr,Firebase.Unity.FirebaseAuthService_UserRefreshState>
struct  KeyValuePair_2_t24D6A2A5E7A3E6DF10CFC71A78E5723080779687 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	intptr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t24D6A2A5E7A3E6DF10CFC71A78E5723080779687, ___key_0)); }
	inline intptr_t get_key_0() const { return ___key_0; }
	inline intptr_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(intptr_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t24D6A2A5E7A3E6DF10CFC71A78E5723080779687, ___value_1)); }
	inline UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * get_value_1() const { return ___value_1; }
	inline UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>
struct  KeyValuePair_2_t6CC6BEF12858818B6050B7D5FA3B6BFD03F036D6 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	intptr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t6CC6BEF12858818B6050B7D5FA3B6BFD03F036D6, ___key_0)); }
	inline intptr_t get_key_0() const { return ___key_0; }
	inline intptr_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(intptr_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t6CC6BEF12858818B6050B7D5FA3B6BFD03F036D6, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// Firebase.Auth.FirebaseAuth
struct  FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.Auth.FirebaseAuth::swigCMemOwn
	bool ___swigCMemOwn_1;
	// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth::appProxy
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___appProxy_2;
	// System.IntPtr Firebase.Auth.FirebaseAuth::appCPtr
	intptr_t ___appCPtr_3;
	// System.IntPtr Firebase.Auth.FirebaseAuth::authStateListener
	intptr_t ___authStateListener_4;
	// System.IntPtr Firebase.Auth.FirebaseAuth::idTokenListener
	intptr_t ___idTokenListener_5;
	// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::currentUser
	FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * ___currentUser_6;
	// System.EventHandler Firebase.Auth.FirebaseAuth::stateChangedImpl
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___stateChangedImpl_7;
	// System.EventHandler Firebase.Auth.FirebaseAuth::idTokenChangedImpl
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___idTokenChangedImpl_8;
	// System.Boolean Firebase.Auth.FirebaseAuth::persistentLoaded
	bool ___persistentLoaded_9;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_appProxy_2() { return static_cast<int32_t>(offsetof(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D, ___appProxy_2)); }
	inline FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * get_appProxy_2() const { return ___appProxy_2; }
	inline FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 ** get_address_of_appProxy_2() { return &___appProxy_2; }
	inline void set_appProxy_2(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * value)
	{
		___appProxy_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appProxy_2), (void*)value);
	}

	inline static int32_t get_offset_of_appCPtr_3() { return static_cast<int32_t>(offsetof(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D, ___appCPtr_3)); }
	inline intptr_t get_appCPtr_3() const { return ___appCPtr_3; }
	inline intptr_t* get_address_of_appCPtr_3() { return &___appCPtr_3; }
	inline void set_appCPtr_3(intptr_t value)
	{
		___appCPtr_3 = value;
	}

	inline static int32_t get_offset_of_authStateListener_4() { return static_cast<int32_t>(offsetof(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D, ___authStateListener_4)); }
	inline intptr_t get_authStateListener_4() const { return ___authStateListener_4; }
	inline intptr_t* get_address_of_authStateListener_4() { return &___authStateListener_4; }
	inline void set_authStateListener_4(intptr_t value)
	{
		___authStateListener_4 = value;
	}

	inline static int32_t get_offset_of_idTokenListener_5() { return static_cast<int32_t>(offsetof(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D, ___idTokenListener_5)); }
	inline intptr_t get_idTokenListener_5() const { return ___idTokenListener_5; }
	inline intptr_t* get_address_of_idTokenListener_5() { return &___idTokenListener_5; }
	inline void set_idTokenListener_5(intptr_t value)
	{
		___idTokenListener_5 = value;
	}

	inline static int32_t get_offset_of_currentUser_6() { return static_cast<int32_t>(offsetof(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D, ___currentUser_6)); }
	inline FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * get_currentUser_6() const { return ___currentUser_6; }
	inline FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F ** get_address_of_currentUser_6() { return &___currentUser_6; }
	inline void set_currentUser_6(FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * value)
	{
		___currentUser_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentUser_6), (void*)value);
	}

	inline static int32_t get_offset_of_stateChangedImpl_7() { return static_cast<int32_t>(offsetof(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D, ___stateChangedImpl_7)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_stateChangedImpl_7() const { return ___stateChangedImpl_7; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_stateChangedImpl_7() { return &___stateChangedImpl_7; }
	inline void set_stateChangedImpl_7(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___stateChangedImpl_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateChangedImpl_7), (void*)value);
	}

	inline static int32_t get_offset_of_idTokenChangedImpl_8() { return static_cast<int32_t>(offsetof(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D, ___idTokenChangedImpl_8)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_idTokenChangedImpl_8() const { return ___idTokenChangedImpl_8; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_idTokenChangedImpl_8() { return &___idTokenChangedImpl_8; }
	inline void set_idTokenChangedImpl_8(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___idTokenChangedImpl_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___idTokenChangedImpl_8), (void*)value);
	}

	inline static int32_t get_offset_of_persistentLoaded_9() { return static_cast<int32_t>(offsetof(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D, ___persistentLoaded_9)); }
	inline bool get_persistentLoaded_9() const { return ___persistentLoaded_9; }
	inline bool* get_address_of_persistentLoaded_9() { return &___persistentLoaded_9; }
	inline void set_persistentLoaded_9(bool value)
	{
		___persistentLoaded_9 = value;
	}
};

struct FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth::appCPtrToAuth
	Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C * ___appCPtrToAuth_10;
	// Firebase.Auth.FirebaseAuth_StateChangedDelegate Firebase.Auth.FirebaseAuth::<>f__mgU24cache0
	StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * ___U3CU3Ef__mgU24cache0_11;
	// Firebase.Auth.FirebaseAuth_StateChangedDelegate Firebase.Auth.FirebaseAuth::<>f__mgU24cache1
	StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * ___U3CU3Ef__mgU24cache1_12;
	// System.Action`1<Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth::<>f__amU24cache0
	Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 * ___U3CU3Ef__amU24cache0_13;
	// System.Action`1<Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth::<>f__amU24cache1
	Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 * ___U3CU3Ef__amU24cache1_14;

public:
	inline static int32_t get_offset_of_appCPtrToAuth_10() { return static_cast<int32_t>(offsetof(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields, ___appCPtrToAuth_10)); }
	inline Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C * get_appCPtrToAuth_10() const { return ___appCPtrToAuth_10; }
	inline Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C ** get_address_of_appCPtrToAuth_10() { return &___appCPtrToAuth_10; }
	inline void set_appCPtrToAuth_10(Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C * value)
	{
		___appCPtrToAuth_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appCPtrToAuth_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_11() { return static_cast<int32_t>(offsetof(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields, ___U3CU3Ef__mgU24cache0_11)); }
	inline StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * get_U3CU3Ef__mgU24cache0_11() const { return ___U3CU3Ef__mgU24cache0_11; }
	inline StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E ** get_address_of_U3CU3Ef__mgU24cache0_11() { return &___U3CU3Ef__mgU24cache0_11; }
	inline void set_U3CU3Ef__mgU24cache0_11(StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * value)
	{
		___U3CU3Ef__mgU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_12() { return static_cast<int32_t>(offsetof(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields, ___U3CU3Ef__mgU24cache1_12)); }
	inline StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * get_U3CU3Ef__mgU24cache1_12() const { return ___U3CU3Ef__mgU24cache1_12; }
	inline StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E ** get_address_of_U3CU3Ef__mgU24cache1_12() { return &___U3CU3Ef__mgU24cache1_12; }
	inline void set_U3CU3Ef__mgU24cache1_12(StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * value)
	{
		___U3CU3Ef__mgU24cache1_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache1_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_13() { return static_cast<int32_t>(offsetof(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields, ___U3CU3Ef__amU24cache0_13)); }
	inline Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 * get_U3CU3Ef__amU24cache0_13() const { return ___U3CU3Ef__amU24cache0_13; }
	inline Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 ** get_address_of_U3CU3Ef__amU24cache0_13() { return &___U3CU3Ef__amU24cache0_13; }
	inline void set_U3CU3Ef__amU24cache0_13(Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 * value)
	{
		___U3CU3Ef__amU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache0_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_14() { return static_cast<int32_t>(offsetof(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields, ___U3CU3Ef__amU24cache1_14)); }
	inline Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 * get_U3CU3Ef__amU24cache1_14() const { return ___U3CU3Ef__amU24cache1_14; }
	inline Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 ** get_address_of_U3CU3Ef__amU24cache1_14() { return &___U3CU3Ef__amU24cache1_14; }
	inline void set_U3CU3Ef__amU24cache1_14(Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 * value)
	{
		___U3CU3Ef__amU24cache1_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1_14), (void*)value);
	}
};


// Firebase.Auth.FirebaseAuth_<GetAuth>c__AnonStorey2
struct  U3CGetAuthU3Ec__AnonStorey2_tB3DC969FB282B9CF462B6CC3BEA5E8CF31EF5431  : public RuntimeObject
{
public:
	// Firebase.InitResult Firebase.Auth.FirebaseAuth_<GetAuth>c__AnonStorey2::init_result
	int32_t ___init_result_0;
	// Firebase.Auth.FirebaseAuth_<GetAuth>c__AnonStorey1 Firebase.Auth.FirebaseAuth_<GetAuth>c__AnonStorey2::<>f__refU241
	U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * ___U3CU3Ef__refU241_1;

public:
	inline static int32_t get_offset_of_init_result_0() { return static_cast<int32_t>(offsetof(U3CGetAuthU3Ec__AnonStorey2_tB3DC969FB282B9CF462B6CC3BEA5E8CF31EF5431, ___init_result_0)); }
	inline int32_t get_init_result_0() const { return ___init_result_0; }
	inline int32_t* get_address_of_init_result_0() { return &___init_result_0; }
	inline void set_init_result_0(int32_t value)
	{
		___init_result_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU241_1() { return static_cast<int32_t>(offsetof(U3CGetAuthU3Ec__AnonStorey2_tB3DC969FB282B9CF462B6CC3BEA5E8CF31EF5431, ___U3CU3Ef__refU241_1)); }
	inline U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * get_U3CU3Ef__refU241_1() const { return ___U3CU3Ef__refU241_1; }
	inline U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 ** get_address_of_U3CU3Ef__refU241_1() { return &___U3CU3Ef__refU241_1; }
	inline void set_U3CU3Ef__refU241_1(U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * value)
	{
		___U3CU3Ef__refU241_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__refU241_1), (void*)value);
	}
};


// Firebase.Auth.FirebaseUser
struct  FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F  : public RuntimeObject
{
public:
	// System.Boolean Firebase.Auth.FirebaseUser::swigCMemOwn
	bool ___swigCMemOwn_0;
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseUser::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_1;
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseUser::authProxy
	FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___authProxy_2;

public:
	inline static int32_t get_offset_of_swigCMemOwn_0() { return static_cast<int32_t>(offsetof(FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F, ___swigCMemOwn_0)); }
	inline bool get_swigCMemOwn_0() const { return ___swigCMemOwn_0; }
	inline bool* get_address_of_swigCMemOwn_0() { return &___swigCMemOwn_0; }
	inline void set_swigCMemOwn_0(bool value)
	{
		___swigCMemOwn_0 = value;
	}

	inline static int32_t get_offset_of_swigCPtr_1() { return static_cast<int32_t>(offsetof(FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F, ___swigCPtr_1)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_1() const { return ___swigCPtr_1; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_1() { return &___swigCPtr_1; }
	inline void set_swigCPtr_1(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_1))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_authProxy_2() { return static_cast<int32_t>(offsetof(FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F, ___authProxy_2)); }
	inline FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * get_authProxy_2() const { return ___authProxy_2; }
	inline FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D ** get_address_of_authProxy_2() { return &___authProxy_2; }
	inline void set_authProxy_2(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * value)
	{
		___authProxy_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authProxy_2), (void*)value);
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


// System.AggregateException
struct  AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E  : public Exception_t
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * ___m_innerExceptions_17;

public:
	inline static int32_t get_offset_of_m_innerExceptions_17() { return static_cast<int32_t>(offsetof(AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E, ___m_innerExceptions_17)); }
	inline ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * get_m_innerExceptions_17() const { return ___m_innerExceptions_17; }
	inline ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 ** get_address_of_m_innerExceptions_17() { return &___m_innerExceptions_17; }
	inline void set_m_innerExceptions_17(ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * value)
	{
		___m_innerExceptions_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_innerExceptions_17), (void*)value);
	}
};


// System.ApplicationException
struct  ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74  : public Exception_t
{
public:

public:
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.IntPtr,Firebase.Unity.FirebaseAuthService_UserRefreshState>
struct  Enumerator_t92A2AD535503FDD7C99F882682C1CF65B8730601 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t24D6A2A5E7A3E6DF10CFC71A78E5723080779687  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t92A2AD535503FDD7C99F882682C1CF65B8730601, ___dictionary_0)); }
	inline Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t92A2AD535503FDD7C99F882682C1CF65B8730601, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t92A2AD535503FDD7C99F882682C1CF65B8730601, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t92A2AD535503FDD7C99F882682C1CF65B8730601, ___current_3)); }
	inline KeyValuePair_2_t24D6A2A5E7A3E6DF10CFC71A78E5723080779687  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t24D6A2A5E7A3E6DF10CFC71A78E5723080779687 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t24D6A2A5E7A3E6DF10CFC71A78E5723080779687  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t92A2AD535503FDD7C99F882682C1CF65B8730601, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.IntPtr,System.Object>
struct  Enumerator_tF3BC41DF3D8ADC95EEFF59074CBAE9E86181C35A 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_tE930FC0A0DF3FBFFE9DC13EED210134C371C368E * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t6CC6BEF12858818B6050B7D5FA3B6BFD03F036D6  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tF3BC41DF3D8ADC95EEFF59074CBAE9E86181C35A, ___dictionary_0)); }
	inline Dictionary_2_tE930FC0A0DF3FBFFE9DC13EED210134C371C368E * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE930FC0A0DF3FBFFE9DC13EED210134C371C368E ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE930FC0A0DF3FBFFE9DC13EED210134C371C368E * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tF3BC41DF3D8ADC95EEFF59074CBAE9E86181C35A, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tF3BC41DF3D8ADC95EEFF59074CBAE9E86181C35A, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tF3BC41DF3D8ADC95EEFF59074CBAE9E86181C35A, ___current_3)); }
	inline KeyValuePair_2_t6CC6BEF12858818B6050B7D5FA3B6BFD03F036D6  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t6CC6BEF12858818B6050B7D5FA3B6BFD03F036D6 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t6CC6BEF12858818B6050B7D5FA3B6BFD03F036D6  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tF3BC41DF3D8ADC95EEFF59074CBAE9E86181C35A, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
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


// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct  Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2, ___m_result_40)); }
	inline FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * get_m_result_40() const { return ___m_result_40; }
	inline FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t83EC8245D2EE7C9EC33497A63D0159C32B6EA656 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t1B831B3DB42A696FE71631B32752E05B59F1AA7E * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t83EC8245D2EE7C9EC33497A63D0159C32B6EA656 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t83EC8245D2EE7C9EC33497A63D0159C32B6EA656 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t83EC8245D2EE7C9EC33497A63D0159C32B6EA656 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t1B831B3DB42A696FE71631B32752E05B59F1AA7E * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t1B831B3DB42A696FE71631B32752E05B59F1AA7E ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t1B831B3DB42A696FE71631B32752E05B59F1AA7E * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
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


// Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate
struct  ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate
struct  ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.AuthUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate
struct  SWIGStringDelegate_tF8D24E458BC3FCBF49C63A872A123BAF4E53AC09  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.FirebaseAuth_StateChangedDelegate
struct  StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.Future_User
struct  Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6  : public FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.Future_User::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_2;
	// System.IntPtr Firebase.Auth.Future_User::callbackData
	intptr_t ___callbackData_6;
	// Firebase.Auth.Future_User_SWIG_CompletionDelegate Firebase.Auth.Future_User::SWIG_CompletionCB
	SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1 * ___SWIG_CompletionCB_7;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6, ___swigCPtr_2)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_2))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_callbackData_6() { return static_cast<int32_t>(offsetof(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6, ___callbackData_6)); }
	inline intptr_t get_callbackData_6() const { return ___callbackData_6; }
	inline intptr_t* get_address_of_callbackData_6() { return &___callbackData_6; }
	inline void set_callbackData_6(intptr_t value)
	{
		___callbackData_6 = value;
	}

	inline static int32_t get_offset_of_SWIG_CompletionCB_7() { return static_cast<int32_t>(offsetof(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6, ___SWIG_CompletionCB_7)); }
	inline SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1 * get_SWIG_CompletionCB_7() const { return ___SWIG_CompletionCB_7; }
	inline SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1 ** get_address_of_SWIG_CompletionCB_7() { return &___SWIG_CompletionCB_7; }
	inline void set_SWIG_CompletionCB_7(SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1 * value)
	{
		___SWIG_CompletionCB_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SWIG_CompletionCB_7), (void*)value);
	}
};

struct Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User_Action> Firebase.Auth.Future_User::Callbacks
	Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D * ___Callbacks_3;
	// System.Int32 Firebase.Auth.Future_User::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.Auth.Future_User::CallbackLock
	RuntimeObject * ___CallbackLock_5;

public:
	inline static int32_t get_offset_of_Callbacks_3() { return static_cast<int32_t>(offsetof(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_StaticFields, ___Callbacks_3)); }
	inline Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D * get_Callbacks_3() const { return ___Callbacks_3; }
	inline Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D ** get_address_of_Callbacks_3() { return &___Callbacks_3; }
	inline void set_Callbacks_3(Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D * value)
	{
		___Callbacks_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callbacks_3), (void*)value);
	}

	inline static int32_t get_offset_of_CallbackIndex_4() { return static_cast<int32_t>(offsetof(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_StaticFields, ___CallbackIndex_4)); }
	inline int32_t get_CallbackIndex_4() const { return ___CallbackIndex_4; }
	inline int32_t* get_address_of_CallbackIndex_4() { return &___CallbackIndex_4; }
	inline void set_CallbackIndex_4(int32_t value)
	{
		___CallbackIndex_4 = value;
	}

	inline static int32_t get_offset_of_CallbackLock_5() { return static_cast<int32_t>(offsetof(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_StaticFields, ___CallbackLock_5)); }
	inline RuntimeObject * get_CallbackLock_5() const { return ___CallbackLock_5; }
	inline RuntimeObject ** get_address_of_CallbackLock_5() { return &___CallbackLock_5; }
	inline void set_CallbackLock_5(RuntimeObject * value)
	{
		___CallbackLock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallbackLock_5), (void*)value);
	}
};


// Firebase.Auth.Future_User_Action
struct  Action_tA440A205A18F955C2A59F01FA561405F864C62C1  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.Future_User_SWIG_CompletionDelegate
struct  SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1  : public MulticastDelegate_t
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


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Firebase.Auth.FirebaseAuth>
struct  Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct  Action_1_tFF0188AB046A1E1964F743C87F216E0A3D1D21E2  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Threading.Tasks.Task`1<System.String>>
struct  Action_1_t91A1F519E78C032DF9207397CD162424F217B4B3  : public MulticastDelegate_t
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


// System.EventHandler`1<System.EventArgs>
struct  EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C  : public MulticastDelegate_t
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


// System.OverflowException
struct  OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D  : public ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269
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


// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mB972A6602BDD10CBB612188FDED9917370EC3F17_gshared (Dictionary_2_tE930FC0A0DF3FBFFE9DC13EED210134C371C368E * __this, intptr_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m26B2DBC3BE8767E18A97FFCF3FB2EFC766886BD4_gshared (Dictionary_2_tE930FC0A0DF3FBFFE9DC13EED210134C371C368E * __this, intptr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m8F5E306A3F995390237D97553B63674C8D1D725F_gshared (Dictionary_2_tE930FC0A0DF3FBFFE9DC13EED210134C371C368E * __this, intptr_t ___key0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m894F4B43C47FD23EB3FD138E3CBBD71203DC5FA7_gshared (TaskCompletionSource_1_t3ECF7B56E418D2A3FFC4E551B9DA6A7E38C7D304 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Task_1_ContinueWith_mCFC2582CE8330039C62FC88152095FF923BAECE8_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, Action_1_tF41DEFE08D91E5A3638655E075175E27AA82D1DC * ___continuationAction0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * TaskCompletionSource_1_get_Task_mF1CB937DAB68DC43DA33893E95F48EFB07F385A0_gshared_inline (TaskCompletionSource_1_t3ECF7B56E418D2A3FFC4E551B9DA6A7E38C7D304 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetCanceled_m9BD3702F5D2F7D1C0D9C7E4598B758F46B734B65_gshared (TaskCompletionSource_1_t3ECF7B56E418D2A3FFC4E551B9DA6A7E38C7D304 * __this, const RuntimeMethod* method);
// System.Void Firebase.Internal.TaskCompletionSourceCompat`1<System.Object>::SetException(System.Threading.Tasks.TaskCompletionSource`1<!0>,System.AggregateException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSourceCompat_1_SetException_m534DA13EA8E0D72BDF334398BCE2448B4C25E233_gshared (TaskCompletionSource_1_t3ECF7B56E418D2A3FFC4E551B9DA6A7E38C7D304 * ___tcs0, AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E * ___exception1, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Task_1_get_Result_m828E969718CE9AD38335D3F48B6F9C84AB98DEE9_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m0EBFE5138C570B9515B706987C2983D4DFBE5337_gshared (TaskCompletionSource_1_t3ECF7B56E418D2A3FFC4E551B9DA6A7E38C7D304 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m901D4901A751B7C8F3CCD2608AA792ADBF53B75A_gshared (Dictionary_2_tE930FC0A0DF3FBFFE9DC13EED210134C371C368E * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_mF32CD1B09A692369399D38F7B54F9FD2EC5394CE_gshared (TaskCompletionSource_1_t3ECF7B56E418D2A3FFC4E551B9DA6A7E38C7D304 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF9A6FBE4006C89D15B8C88B2CB46E9B24D18B7FC_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m867F6DA953678D0333A55270B7C6EF38EFC293FF_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2204D6D532702FD13AB2A9AD8DB538E4E8FB1913_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF3BC41DF3D8ADC95EEFF59074CBAE9E86181C35A  Dictionary_2_GetEnumerator_m5A401221E6CE5A95F2F41DC10105538A347B301F_gshared (Dictionary_2_tE930FC0A0DF3FBFFE9DC13EED210134C371C368E * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t6CC6BEF12858818B6050B7D5FA3B6BFD03F036D6  Enumerator_get_Current_m99624D37C4BB4ECCFB95E7AAF4540F96131C178D_gshared_inline (Enumerator_tF3BC41DF3D8ADC95EEFF59074CBAE9E86181C35A * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mB623F607E93C3316D6F4C05FFF5E3424801E0BEA_gshared_inline (KeyValuePair_2_t6CC6BEF12858818B6050B7D5FA3B6BFD03F036D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR intptr_t KeyValuePair_2_get_Key_m043F903532CA453E96396362C76FEE44FA350061_gshared_inline (KeyValuePair_2_t6CC6BEF12858818B6050B7D5FA3B6BFD03F036D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB8D4B010A1570B74F9792DF26E73B8FE056E8734_gshared (Enumerator_tF3BC41DF3D8ADC95EEFF59074CBAE9E86181C35A * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);

// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::getCPtr(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  FirebaseAuth_getCPtr_m6C01C8CED64BD48D5773ACDB8A6FA6221526FC61 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___obj0, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_CreateAuthStateListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_CreateAuthStateListener_m7CCEC77C2D4F69E6847504429F6CC458DB7B13B3 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * ___jarg21, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC (const RuntimeMethod* method);
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1 (const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_DestroyAuthStateListener(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_DestroyAuthStateListener_m92F6FC1B7923A45026F116D70523981A86762C88 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_CreateIdTokenListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_CreateIdTokenListener_m1669662D941443B680ED10FE340ADE86F3A04E8E (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_DestroyIdTokenListener(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_DestroyIdTokenListener_mD29C37103A3349667EEA6778507D38849370F125 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m663ABAF142B9C478D093B35480D4FB826A317558 (SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m20EB871E90367EF839FC2375BF713B0C553193A3 (SWIGStringHelper_t619BB8422C633B199FCD711B740F02C10ECC1042 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_mED5C184F17BEF3147768FBCA2E4D4354B63B27E2 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m045C3B8EB0F704CDA426B54CB429B2C7193643E7 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_mF04E45DA2DAB8D67B100D7963AAEFC1489541814 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m735ED3D0D28B75A5751B05A579CD874E9477A6A5 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m957D770CF8D9D114C8811F30DB3ECAAA68FE63E1 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m3C02AD87A0CF1A643AD2F5E1A5930DC1B13D21C7 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m826C1BEF38EC0D99F60CB83474F9D1BD0FA5636F (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_mD52F8781945A0A731DC946E5819D2BA2C6889788 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m50A97D18C9ECDC561827D47167229D53CF8C5A7C (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m653D6594CCD2448A4CD40DE53B93F6EBC1DE1875 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m21D48E3AAFA45A33154601C703DD6B47486906D2 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m981D49A2CD66CFFB2586845F0973645E04FBB03A (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mB1BCD3DBE15B7660343A81BF671736193EDA981D (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m8D005BC324621C8D98C6E041510B8760C19398BF (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mB51032662C7930F2A4514E896A4BE2B0CA05BBF5 (ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mDD08AB0BA733FFC55713C5ED76046F1E5F5B58D6 (ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AuthUtil_mF3FE20DFD5840E3EE9CF50EB3D0AFC4C9793759C (ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___applicationDelegate0, ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___arithmeticDelegate1, ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___divideByZeroDelegate2, ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___indexOutOfRangeDelegate3, ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___invalidCastDelegate4, ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___invalidOperationDelegate5, ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___ioDelegate6, ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___nullReferenceDelegate7, ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___outOfMemoryDelegate8, ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___overflowDelegate9, ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___systemExceptionDelegate10, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AuthUtil_mAC998818F331388E0511CD0C0B21D5FB31CD62EA (ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * ___argumentDelegate0, ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * ___argumentNullDelegate1, ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Exception Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_mDAA529437C9C5E75EE22F57FC1101BE48C98FE0A (const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m8995D630A3637BCF34394AEA12072BEA2D6D9012 (Exception_t * ___e0, const RuntimeMethod* method);
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
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m5EB5804C391CFFC4E33F7F52D9DA6F58C9846628 (String_t* ___cString0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_mD937751ED2BC9C536F1A5A79A4733CC18EC90030 (SWIGStringDelegate_tF8D24E458BC3FCBF49C63A872A123BAF4E53AC09 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_AuthUtil_m7DAA87A54E67F8194F70E2BA9A75C4A4B7FA6CE0 (SWIGStringDelegate_tF8D24E458BC3FCBF49C63A872A123BAF4E53AC09 * ___stringDelegate0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::StateChangedFunction(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_StateChangedFunction_mA8F92FBECD193976D942C7901DBD53E401932374 (intptr_t ___appCPtr0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::IdTokenChangedFunction(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_IdTokenChangedFunction_m57C331EB1A3C296A5DFD28EA036F0F4404ADEECA (intptr_t ___appCPtr0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, RuntimeObject * ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_Dispose_m421F72148C7DC58E60C570F31DAADC07904FC38B (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::DisposeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_DisposeInternal_mB39D097246264F2DEA2A44EF63546C1F95D71176 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m57BC28148024C733D39673192076784FB5CA208E (Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C * __this, intptr_t ___key0, FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C *, intptr_t, FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D **, const RuntimeMethod*))Dictionary_2_TryGetValue_mB972A6602BDD10CBB612188FDED9917370EC3F17_gshared)(__this, ___key0, ___value1, method);
}
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_m7D46E331C349DD29CBA488C9B6A950A3E7DD5CAE (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAuthU3Ec__AnonStorey1__ctor_mBA21355AB25FFCCC2D53802270B3E17515DBA563 (U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * __this, const RuntimeMethod* method);
// Firebase.Platform.IAuthService Firebase.Platform.Services::get_Auth()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* Services_get_Auth_mA625B8DAD33D45656A1D8354B291A2DBC0E72A54_inline (const RuntimeMethod* method);
// Firebase.Unity.FirebaseAuthService Firebase.Unity.FirebaseAuthService::get_Instance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * FirebaseAuthService_get_Instance_m23F18D0809F0B5EEC6CE02053988F1FC3E0EFCE8_inline (const RuntimeMethod* method);
// System.Void Firebase.Platform.Services::set_Auth(Firebase.Platform.IAuthService)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Services_set_Auth_mC7EA4640F2ECFFB45540109F9F8C52EBC96C32BF_inline (RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAuthU3Ec__AnonStorey2__ctor_m8542E15471B018951EC00E562EF9F012A1168BAA (U3CGetAuthU3Ec__AnonStorey2_tB3DC969FB282B9CF462B6CC3BEA5E8CF31EF5431 * __this, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  FirebaseApp_getCPtr_mF922A07C69469D0EB5A268A9278C495805BDCA4F (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___obj0, const RuntimeMethod* method);
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::ProxyFromAppCPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * FirebaseAuth_ProxyFromAppCPtr_mB75BAB4EEA30FDBABC4B4238CEBA19F0634E5D74 (intptr_t ___appCPtr0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::TranslateDllNotFoundException(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_TranslateDllNotFoundException_mC6F04F02034B21A8A258012156CA7F263FB594F6 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___closureToExecute0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangedDelegate__ctor_m639C51AA8A08FD2E0F6012DC3B5B66990643A192 (StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtil::CreateAuthStateListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtil_CreateAuthStateListener_m79B4AB49D383DB7458D564F1BE4E31A76F2C3A24 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___auth0, StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * ___state_changed_delegate1, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtil::CreateIdTokenListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtil_CreateIdTokenListener_m5CA39E14DE0E3BA0DDF7FD344553FF2CBD1BBE00 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___auth0, StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * ___state_changed_delegate1, const RuntimeMethod* method);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::add_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_add_AppDisposed_m1CA5C0D303E4A5536DFDBE3356A900B3B966D4B6 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m1DC14338A0E6BE9ADEDE3DE5FF212D08669EBAB1 (Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C * __this, intptr_t ___key0, FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C *, intptr_t, FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D *, const RuntimeMethod*))Dictionary_2_set_Item_m26B2DBC3BE8767E18A97FFCF3FB2EFC766886BD4_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Firebase.Unity.FirebaseAuthService::OnIdTokenChanged(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuthService_OnIdTokenChanged_m2A4A76C0154C6FDD38B2D007EA2AAA1106893261 (FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * __this, FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___auth0, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Firebase.Unity.FirebaseAuthService::OnAuthDisposed(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuthService_OnAuthDisposed_m65997F23F79BD13B7288AFE44DB9EC650A3120D8 (FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * __this, intptr_t ___authCPtr0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>::Remove(!0)
inline bool Dictionary_2_Remove_mCD32BD16CC95EC5A392921F4A69454449BD6A1C3 (Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C * __this, intptr_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C *, intptr_t, const RuntimeMethod*))Dictionary_2_Remove_m8F5E306A3F995390237D97553B63674C8D1D725F_gshared)(__this, ___key0, method);
}
// System.Void Firebase.FirebaseApp::remove_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_remove_AppDisposed_mE9EBC4903F93C997C038F8B12940A3D658624EA9 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseUser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseUser_Dispose_m0D1CAF1B60964799A2B01FD38A3BB435C3D818A6 (FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtil::DestroyAuthStateListener(Firebase.Auth.FirebaseAuth,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtil_DestroyAuthStateListener_mAF3EE6225D9555BB4204018D6CE005452B0766F1 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___auth0, intptr_t ___listener1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtil::DestroyIdTokenListener(Firebase.Auth.FirebaseAuth,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtil_DestroyIdTokenListener_m9576256EF310D2C8757FC19F55DBF5F742FBB36F (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___auth0, intptr_t ___listener1, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::ReleaseReferenceInternal(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ReleaseReferenceInternal_m64539F9A01E7E6DA690484EE011EDE20E1C9EEAE (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___instance0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/<ForwardStateChange>c__AnonStorey3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForwardStateChangeU3Ec__AnonStorey3__ctor_m25A3D9ADE863C969716D4BA5153822A805608E80 (U3CForwardStateChangeU3Ec__AnonStorey3_t5C0E4F8E37A78F1A41077C11EC92E34302B38B18 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/<ForwardStateChange>c__AnonStorey4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForwardStateChangeU3Ec__AnonStorey4__ctor_m76A61EB738DC6F2008BD0B716DBC945E64DCE7E2 (U3CForwardStateChangeU3Ec__AnonStorey4_tB01A3C627BA9158B9D7CA021320E971C0E0E51D3 * __this, const RuntimeMethod* method);
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m93A9BD0DC888F1D02E77860288095CB49D4CFFC2 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___action0, const RuntimeMethod* method);
// System.Void System.Action`1<Firebase.Auth.FirebaseAuth>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5508D22ECD28CFA0DE45D604BCF05D27B5D2DC42 (Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Firebase.Auth.FirebaseAuth::ForwardStateChange(System.IntPtr,System.Action`1<Firebase.Auth.FirebaseAuth>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ForwardStateChange_m51C0E1EC6D8F9C857A893571EA6ED87BAD74F924 (intptr_t ___appCPtr0, Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 * ___stateChangeClosure1, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseApp_get_DefaultInstance_m46ACEAEC916D0AC3014302498F51607462EE5C63 (const RuntimeMethod* method);
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::GetAuth(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * FirebaseAuth_GetAuth_mF9F3471073B652BC9FF94BD40D81B7360C75BC36 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseUser::getCPtr(Firebase.Auth.FirebaseUser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  FirebaseUser_getCPtr_mC2544D71AB72001C769868A7881BE36808B7056B (FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * ___obj0, const RuntimeMethod* method);
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUserInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * FirebaseAuth_get_CurrentUserInternal_m092235EE454060C1D4072405F645FDE428348529 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, const RuntimeMethod* method);
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::UpdateCurrentUser(Firebase.Auth.FirebaseUser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * FirebaseAuth_UpdateCurrentUser_mA01C3D9B857CEA48860F3A3202E0F821B6EDDC56 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * ___proxy0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/<SignInWithEmailAndPasswordAsync>c__AnonStoreyA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStoreyA__ctor_mEA510682AD6D6F450CD7778139B41DD915ACA274 (U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStoreyA_t1CDA9CF4D4D6123216891015275FB6224BBBE7DB * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ThrowIfNull_mF1D29A1F5508A20087E07276C16A5D7AC0CCF9A6 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::.ctor()
inline void TaskCompletionSource_1__ctor_m98B20A73B661A2B763A764995A30A2601B347EB0 (TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m894F4B43C47FD23EB3FD138E3CBBD71203DC5FA7_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInWithEmailAndPasswordInternalAsync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * FirebaseAuth_SignInWithEmailAndPasswordInternalAsync_mA6617BD34AC8ADDBB74414D36CEA59FBC2F9583C (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, String_t* ___email0, String_t* ___password1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m443758288B4A1840F7094DC17AA8B477789DE4B1 (Action_1_tFF0188AB046A1E1964F743C87F216E0A3D1D21E2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tFF0188AB046A1E1964F743C87F216E0A3D1D21E2 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Task_1_ContinueWith_m5878929A909CC4F23EABDDA4ADD8D02B423F226F (Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * __this, Action_1_tFF0188AB046A1E1964F743C87F216E0A3D1D21E2 * ___continuationAction0, const RuntimeMethod* method)
{
	return ((  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * (*) (Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 *, Action_1_tFF0188AB046A1E1964F743C87F216E0A3D1D21E2 *, const RuntimeMethod*))Task_1_ContinueWith_mCFC2582CE8330039C62FC88152095FF923BAECE8_gshared)(__this, ___continuationAction0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::get_Task()
inline Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * TaskCompletionSource_1_get_Task_m5737E32C21EF62D2BAEC90727EE0C07AE314048A_inline (TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * (*) (TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF1CB937DAB68DC43DA33893E95F48EFB07F385A0_gshared_inline)(__this, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCanceled_m42A47FCA2C6F33308A08C92C8489E802448F6F42 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::SetCanceled()
inline void TaskCompletionSource_1_SetCanceled_mE3F5C3030DDDD6497863D51BFF8DE0E710488330 (TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 *, const RuntimeMethod*))TaskCompletionSource_1_SetCanceled_m9BD3702F5D2F7D1C0D9C7E4598B758F46B734B65_gshared)(__this, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_m7337D2694F4BF380C5B8893B4A924D7F0E762A48 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E * Task_get_Exception_mA61AAD3E52CBEB631D1956217B521456E7960B95 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Void Firebase.Internal.TaskCompletionSourceCompat`1<Firebase.Auth.FirebaseUser>::SetException(System.Threading.Tasks.TaskCompletionSource`1<!0>,System.AggregateException)
inline void TaskCompletionSourceCompat_1_SetException_mA18B9FD873E6D8CD5F4D2E34EAA3238B8323EACF (TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * ___tcs0, AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E * ___exception1, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 *, AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E *, const RuntimeMethod*))TaskCompletionSourceCompat_1_SetException_m534DA13EA8E0D72BDF334398BCE2448B4C25E233_gshared)(___tcs0, ___exception1, method);
}
// !0 System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>::get_Result()
inline FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * Task_1_get_Result_m0A09B7D0EB3F2DFD0301991E1ED9EB5F39438956 (Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * __this, const RuntimeMethod* method)
{
	return ((  FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * (*) (Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 *, const RuntimeMethod*))Task_1_get_Result_m828E969718CE9AD38335D3F48B6F9C84AB98DEE9_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::SetResult(!0)
inline void TaskCompletionSource_1_SetResult_mF91EBA018EDCC766A8E0E3A36BF2C0DACEBF505A (TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * __this, FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 *, FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F *, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m0EBFE5138C570B9515B706987C2983D4DFBE5337_gshared)(__this, ___result0, method);
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseAuth_SignInWithEmailAndPasswordInternal(System.Runtime.InteropServices.HandleRef,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_SignInWithEmailAndPasswordInternal_mA401EDAA9777563060C677E3EF0D6F877A9D531B (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, String_t* ___jarg21, String_t* ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User__ctor_m133F92BABB2A3D39B379DC2A4F79D551AE3FA3F4 (Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.Future_User::GetTask(Firebase.Auth.Future_User)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * Future_User_GetTask_m72CD84236E006E8EE1D965FDD586A7396BB387A4 (Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * ___fu0, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseAuth_GetAuthInternal(System.Runtime.InteropServices.HandleRef,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_GetAuthInternal_m4CB1D633D813357971B7AB38DF64C7AC5DE13E68 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, int32_t* ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth__ctor_m8AF94C141995F87831E56F9D99D947342BAA4314 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseAuth_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_ReleaseReferenceInternal_m263CD5445336938048D54721F2072483C6E36F1C (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseAuth_CurrentUserInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_CurrentUserInternal_get_m6DA9D3724EC4A35441E056C1B56AAC07860E244A (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseUser::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseUser__ctor_m6DFEA55A06B92329E1347151856EDD512388F0C3 (FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>::.ctor()
inline void Dictionary_2__ctor_m415F2D9C0DCD1E68BD176B96867ED8214094E797 (Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C *, const RuntimeMethod*))Dictionary_2__ctor_m901D4901A751B7C8F3CCD2608AA792ADBF53B75A_gshared)(__this, method);
}
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_Invoke_mD23D5EFEA562A05C5EACDD3E91EEDD2BF6C22800 (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___e1, const RuntimeMethod* method);
// System.Void System.Action`1<Firebase.Auth.FirebaseAuth>::Invoke(!0)
inline void Action_1_Invoke_m1DCC97F2F27C9990F2561B115DDB7D4A4C85E104 (Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 * __this, FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 *, FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D *, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::GetAuthInternal(Firebase.FirebaseApp,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * FirebaseAuth_GetAuthInternal_m991F675141BD681FACC432067B9FFFE76080B648 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, int32_t* ___init_result_out1, const RuntimeMethod* method);
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_m3BBD8A30C4B1757E8686AB762DBA7C7B6CB81591 (InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 * __this, int32_t ___result0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::CompleteFirebaseUserTask(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>,System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_CompleteFirebaseUserTask_m315CBA4018D118D2AA59795197247C55C893937B (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * ___task0, TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * ___taskCompletionSource1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_delete_FirebaseUser(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_delete_FirebaseUser_m7A7717D42245FFA1A1F73C17C0A96B2BB2B63FC9 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseUser_Token(System.Runtime.InteropServices.HandleRef,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_Token_m05ACF06B467EA0CE661891FCCAEC9CF1870AD200 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, bool ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.FutureString::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString__ctor_m061489D0A1588D9DB38616FAB55A0BAD34485991 (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.String> Firebase.FutureString::GetTask(Firebase.FutureString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * FutureString_GetTask_mE15192AC5EC101E6836F1F806E3CD9B91950B647 (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * ___fu0, const RuntimeMethod* method);
// System.String Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseUser_DisplayName_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_DisplayName_get_m91CB4E7B5AFAEE50C6E55F35CEACCA1BA8754B05 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseUser_Email_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_Email_get_m23BF377A82BE5C2C788AB061427E8E46BD217E36 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseUser_UserId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_UserId_get_m0E07D7A93CFFFF121443ED7EF8CC63492074AFB5 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SWIG_CompletionDispatcher_m0A63943327FCEEFD0E5125F459C94DC6E6FFBF88 (int32_t ___key0, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_Future_User_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_Future_User_SWIGUpcast_m809DB4BFCF812C527A34544C23BE7AC06621714C (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase__ctor_mC05DD84980454E9B8210087E01926E5D56FC017F (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Finalize_mAB21EE7CEC515CDD99FAB0686D59CB42082B7716 (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SetCompletionData_m6C2AC58C7943A836A0C9AEBBF63A94C84D11708F (Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_delete_Future_User(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_delete_Future_User_m8EF3BE70AB09F0B88620CE68017B875ED86E5D3E (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_mE480130D78254414AA6A59E2FA63B9AFC4AC01BC (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User/<GetTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0__ctor_mD3E5AA8FD1B6071DB8A2414BC7D6D0C5D94ECA80 (U3CGetTaskU3Ec__AnonStorey0_tD24E1032A29E54F4EE7D42C4A7983F95BA52F014 * __this, const RuntimeMethod* method);
// Firebase.FutureStatus Firebase.FutureBase::status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_status_mD675FFD3FAE10D36169C16590EE3C6F1861DD136 (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, const RuntimeMethod* method);
// System.Void Firebase.FirebaseException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException__ctor_mB31E783657F428BA72B055DF8A4CE6EA6996996C (FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF * __this, int32_t ___errorCode0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_mBF8838EC77A9A6BB5281E83B09A9DC7957BC8D36 (TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 *, Exception_t *, const RuntimeMethod*))TaskCompletionSource_1_SetException_mF32CD1B09A692369399D38F7B54F9FD2EC5394CE_gshared)(__this, ___exception0, method);
}
// System.Void Firebase.Auth.Future_User/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m5B9D0FFC485604CE15696B0DEF18F1F487C7E115 (Action_tA440A205A18F955C2A59F01FA561405F864C62C1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::SetOnCompletionCallback(Firebase.Auth.Future_User/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SetOnCompletionCallback_m93B162D56DC8E7686F9ED6F6CD2AD50D673BEB4F (Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * __this, Action_tA440A205A18F955C2A59F01FA561405F864C62C1 * ___userCompletionCallback0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_ThrowIfDisposed_m382E2329EEE8F3CA03F2686B026F8FB6013DFAC2 (Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_m7BA9DBE465148B0F4C15D33A19A1655A3C8E211B (SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>::.ctor()
inline void Dictionary_2__ctor_mB844EAEE5D4EEE3ED0E007FE7CE8C308BF15D1FC (Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D *, const RuntimeMethod*))Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m8C05EA2FF5DEB58945DC0336A0C990521F3E08CD (Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D * __this, int32_t ___key0, Action_tA440A205A18F955C2A59F01FA561405F864C62C1 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D *, int32_t, Action_tA440A205A18F955C2A59F01FA561405F864C62C1 *, const RuntimeMethod*))Dictionary_2_set_Item_mF9A6FBE4006C89D15B8C88B2CB46E9B24D18B7FC_gshared)(__this, ___key0, ___value1, method);
}
// System.IntPtr Firebase.Auth.Future_User::SWIG_OnCompletion(Firebase.Auth.Future_User/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_User_SWIG_OnCompletion_mEE8017ED9DF06FC970B5258FE8F44BE620933CF7 (Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * __this, SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1 * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SWIG_FreeCompletionData_m6DA6D5179749F401390CC7F45181D39DD4C28CE5 (Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mE0A032DAADDA022FD66213A9EF29D60B1B386356 (Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D * __this, int32_t ___key0, Action_tA440A205A18F955C2A59F01FA561405F864C62C1 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D *, int32_t, Action_tA440A205A18F955C2A59F01FA561405F864C62C1 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m867F6DA953678D0333A55270B7C6EF38EFC293FF_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>::Remove(!0)
inline bool Dictionary_2_Remove_m7DB724888A431B8BE8E50B43222AF9EF77E34E72 (Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m2204D6D532702FD13AB2A9AD8DB538E4E8FB1913_gshared)(__this, ___key0, method);
}
// System.Void Firebase.Auth.Future_User/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m71673E78F749863C140FD9547CBDEAF502309B3C (Action_tA440A205A18F955C2A59F01FA561405F864C62C1 * __this, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_Future_User_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Auth.Future_User/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_Future_User_SWIG_OnCompletion_m7B2924F52240CDA00FB2D682C5226D155041EFFD (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1 * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_Future_User_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_Future_User_SWIG_FreeCompletionData_mEA8EF87590FAA3DF14728C00B857FAD6ED345B86 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_Future_User_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_Future_User_GetResult_mAFF2CB69F40FAAF9E7F78AFA831749C00B175A41 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Int32 Firebase.FutureBase::error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_error_m70CFE004FF942C34ED11D221D0B6033AD40C1825 (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, const RuntimeMethod* method);
// System.String Firebase.FutureBase::error_message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureBase_error_message_m12EFFA84132AB25450D3D3F349A414EF597CCCE3 (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, const RuntimeMethod* method);
// Firebase.Auth.FirebaseUser Firebase.Auth.Future_User::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * Future_User_GetResult_m47B8754EDDAC710540B74A154A72DFFE30E86AA6 (Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mE0D4736B7C636462B2AD246F65EFAF5F1785822F (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>::.ctor()
inline void Dictionary_2__ctor_mBF2C82CF3BAB93C78C55FF7D056AF268619521E2 (Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B *, const RuntimeMethod*))Dictionary_2__ctor_m901D4901A751B7C8F3CCD2608AA792ADBF53B75A_gshared)(__this, method);
}
// System.Void Firebase.Platform.Default.BaseAuthService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAuthService__ctor_m7F9F1EFFAB9D91C1887DAEC04ABFA1542DB0A91E (BaseAuthService_t77202DD950C9079AAB904A74B96F06FFB8E9DA11 * __this, const RuntimeMethod* method);
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseHandler::get_DefaultInstance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C * FirebaseHandler_get_DefaultInstance_mDE47F7545F78ED4AAA09566895610B8DD8A6FE02_inline (const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Firebase.Platform.FirebaseHandler::add_Updated(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_add_Updated_m05AB5BD22EF8D749BBAF334E79DE61DA98BB0C17 (FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m2222DC21B8D6E147D0DF6C4A8262A0EF72D4ED42 (Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B * __this, intptr_t ___key0, UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B *, intptr_t, UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 **, const RuntimeMethod*))Dictionary_2_TryGetValue_mB972A6602BDD10CBB612188FDED9917370EC3F17_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>::Remove(!0)
inline bool Dictionary_2_Remove_m3F480A8262B375B4BFFE42588D0E845504CA5C98 (Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B * __this, intptr_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B *, intptr_t, const RuntimeMethod*))Dictionary_2_Remove_m8F5E306A3F995390237D97553B63674C8D1D725F_gshared)(__this, ___key0, method);
}
// System.Object Firebase.FirebaseApp::WeakReferenceGetTarget(System.WeakReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * FirebaseApp_WeakReferenceGetTarget_mC676B673AB674077A1A40272E96E51C5A25DC30A (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * ___weakReference0, const RuntimeMethod* method);
// System.Int64 System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_op_Explicit_m254924E8680FCCF870F18064DC0B114445B09172 (intptr_t ___value0, const RuntimeMethod* method);
// System.String Firebase.Unity.FirebaseAuthService::GetAppName(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAuthService_GetAppName_m5453B576FEBCEC66022EA8AA2BAB4F9BE1F969E5 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___auth0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void Firebase.Unity.FirebaseAuthService::StopTokenRefresh(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuthService_StopTokenRefresh_mB0BD65E8FD518AA0A4E684C7D8E631C1121B4734 (FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * __this, intptr_t ___authCPtr0, const RuntimeMethod* method);
// System.Void Firebase.Unity.FirebaseAuthService/UserRefreshState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserRefreshState__ctor_m3E573C9238B5D089F790E9801F65611DE9B2EF80 (UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m5AC28990964DAEFDC2F7FBCB135923C5E74E1BDA (Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B * __this, intptr_t ___key0, UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B *, intptr_t, UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 *, const RuntimeMethod*))Dictionary_2_set_Item_m26B2DBC3BE8767E18A97FFCF3FB2EFC766886BD4_gshared)(__this, ___key0, ___value1, method);
}
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * FirebaseAuth_get_CurrentUser_m9F6B70352053BEA7DA757C4947DB575F435C1596 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, const RuntimeMethod* method);
// System.String Firebase.Auth.FirebaseUser::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseUser_get_UserId_m23E924FD00D362216B74119CC1AD90784BAA6420 (FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * __this, const RuntimeMethod* method);
// System.Single Firebase.Platform.PlatformInformation::get_RealtimeSinceStartupSafe()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float PlatformInformation_get_RealtimeSinceStartupSafe_mAE1E03781FD2AF4582A35355613D890863517663_inline (const RuntimeMethod* method);
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m55A06AD20FF65C11015FFBE5FF31F2E7B1656E20 (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method);
// System.Void Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRefreshExpiredTokensU3Ec__AnonStorey1__ctor_mDD2DFCCA85AB37FEEE3405B4BC525235394BAB8F (U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>::GetEnumerator()
inline Enumerator_t92A2AD535503FDD7C99F882682C1CF65B8730601  Dictionary_2_GetEnumerator_m09FAD314C7E9C62DD5F562D34324FCC1A04F319E (Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t92A2AD535503FDD7C99F882682C1CF65B8730601  (*) (Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m5A401221E6CE5A95F2F41DC10105538A347B301F_gshared)(__this, method);
}
// System.Void Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRefreshExpiredTokensU3Ec__AnonStorey0__ctor_m03A700BD41EACB7D5CC0B667D16A8BA12D004CB1 (U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>::get_Current()
inline KeyValuePair_2_t24D6A2A5E7A3E6DF10CFC71A78E5723080779687  Enumerator_get_Current_m7FBC971321821923ECD3D893BDB5E351D025271C_inline (Enumerator_t92A2AD535503FDD7C99F882682C1CF65B8730601 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t24D6A2A5E7A3E6DF10CFC71A78E5723080779687  (*) (Enumerator_t92A2AD535503FDD7C99F882682C1CF65B8730601 *, const RuntimeMethod*))Enumerator_get_Current_m99624D37C4BB4ECCFB95E7AAF4540F96131C178D_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>::get_Value()
inline UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * KeyValuePair_2_get_Value_m1A31889D9077E57158B104295FFA9FCCB5489935_inline (KeyValuePair_2_t24D6A2A5E7A3E6DF10CFC71A78E5723080779687 * __this, const RuntimeMethod* method)
{
	return ((  UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * (*) (KeyValuePair_2_t24D6A2A5E7A3E6DF10CFC71A78E5723080779687 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mB623F607E93C3316D6F4C05FFF5E3424801E0BEA_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>::get_Key()
inline intptr_t KeyValuePair_2_get_Key_mD77BAE1CBCDDF4F0D0B16E9982128AF0B2D839C7_inline (KeyValuePair_2_t24D6A2A5E7A3E6DF10CFC71A78E5723080779687 * __this, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (KeyValuePair_2_t24D6A2A5E7A3E6DF10CFC71A78E5723080779687 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m043F903532CA453E96396362C76FEE44FA350061_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_mCA99E3E5D84C3ED79771C17F8FCF9B5795EB0C25 (List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::Add(!0)
inline void List_1_Add_mA374038CC7A718F88F0BA10BA4AB0FBB8DCEE158 (List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE *, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>::MoveNext()
inline bool Enumerator_MoveNext_m53E568327F5C48530A9F9D40EA19B03DA70DA3D1 (Enumerator_t92A2AD535503FDD7C99F882682C1CF65B8730601 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t92A2AD535503FDD7C99F882682C1CF65B8730601 *, const RuntimeMethod*))Enumerator_MoveNext_mB8D4B010A1570B74F9792DF26E73B8FE056E8734_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Action>::GetEnumerator()
inline Enumerator_tA518899C189EFD03940570E1AEAC9AA9C766F663  List_1_GetEnumerator_m6368DC18C4ECFD5E24DB8519706D28A887DAF1E6 (List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA518899C189EFD03940570E1AEAC9AA9C766F663  (*) (List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Action>::get_Current()
inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * Enumerator_get_Current_mB78EBBF0E63F2F2F35DD2E7672EC0B07CF238B25_inline (Enumerator_tA518899C189EFD03940570E1AEAC9AA9C766F663 * __this, const RuntimeMethod* method)
{
	return ((  Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * (*) (Enumerator_tA518899C189EFD03940570E1AEAC9AA9C766F663 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Action>::MoveNext()
inline bool Enumerator_MoveNext_m989946DE9AEE08A21EA6ED0E5EF3FCB8AE1E2999 (Enumerator_tA518899C189EFD03940570E1AEAC9AA9C766F663 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA518899C189EFD03940570E1AEAC9AA9C766F663 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Action>::Dispose()
inline void Enumerator_Dispose_mBBB35182BBB4E195F074567937450EF16C74DF13 (Enumerator_tA518899C189EFD03940570E1AEAC9AA9C766F663 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA518899C189EFD03940570E1AEAC9AA9C766F663 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth::get_App()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseAuth_get_App_mCCD52A0729E63E34FEE835C9F08DFE36C2A49805_inline (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, const RuntimeMethod* method);
// System.String Firebase.FirebaseApp::get_Name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_mB5E945165A8F7DFAA21F0AD3A9E99CC3438943C5_inline (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method);
// System.Void Firebase.Unity.FirebaseAuthService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuthService__ctor_mE78BB63B4E947C5DA75F46FDA9BCBCED80DD416D (FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.String> Firebase.Auth.FirebaseUser::TokenAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * FirebaseUser_TokenAsync_mDC1EF843591C9E195FEF5C47B73A116A7013E6F5 (FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * __this, bool ___forceRefresh0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.String>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m0651406FD57C9150AE4BE12B5E0DD14AD32DE5C7 (Action_1_t91A1F519E78C032DF9207397CD162424F217B4B3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t91A1F519E78C032DF9207397CD162424F217B4B3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.String>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Task_1_ContinueWith_mFB0558DDC4C57A255A0FE8CCDD83D8D91CC72210 (Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * __this, Action_1_t91A1F519E78C032DF9207397CD162424F217B4B3 * ___continuationAction0, const RuntimeMethod* method)
{
	return ((  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * (*) (Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C *, Action_1_t91A1F519E78C032DF9207397CD162424F217B4B3 *, const RuntimeMethod*))Task_1_ContinueWith_mCFC2582CE8330039C62FC88152095FF923BAECE8_gshared)(__this, ___continuationAction0, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_mA675F47CE1DBD1948BDC9215DCAE93F07FC32E19 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3 (float* __this, const RuntimeMethod* method);
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
// System.IntPtr Firebase.Auth.AuthUtil::CreateAuthStateListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth_StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtil_CreateAuthStateListener_m79B4AB49D383DB7458D564F1BE4E31A76F2C3A24 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___auth0, StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * ___state_changed_delegate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthUtil_CreateAuthStateListener_m79B4AB49D383DB7458D564F1BE4E31A76F2C3A24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_0 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_1 = FirebaseAuth_getCPtr_m6C01C8CED64BD48D5773ACDB8A6FA6221526FC61(L_0, /*hidden argument*/NULL);
		StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * L_2 = ___state_changed_delegate1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_il2cpp_TypeInfo_var);
		intptr_t L_3 = AuthUtilPINVOKE_Firebase_Auth_CreateAuthStateListener_m7CCEC77C2D4F69E6847504429F6CC458DB7B13B3(L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		bool L_4 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_5 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, AuthUtil_CreateAuthStateListener_m79B4AB49D383DB7458D564F1BE4E31A76F2C3A24_RuntimeMethod_var);
	}

IL_001d:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.Void Firebase.Auth.AuthUtil::DestroyAuthStateListener(Firebase.Auth.FirebaseAuth,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtil_DestroyAuthStateListener_mAF3EE6225D9555BB4204018D6CE005452B0766F1 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___auth0, intptr_t ___listener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthUtil_DestroyAuthStateListener_mAF3EE6225D9555BB4204018D6CE005452B0766F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_0 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_1 = FirebaseAuth_getCPtr_m6C01C8CED64BD48D5773ACDB8A6FA6221526FC61(L_0, /*hidden argument*/NULL);
		intptr_t L_2 = ___listener1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_Firebase_Auth_DestroyAuthStateListener_m92F6FC1B7923A45026F116D70523981A86762C88(L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		bool L_3 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, AuthUtil_DestroyAuthStateListener_mAF3EE6225D9555BB4204018D6CE005452B0766F1_RuntimeMethod_var);
	}

IL_001c:
	{
		return;
	}
}
// System.IntPtr Firebase.Auth.AuthUtil::CreateIdTokenListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth_StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtil_CreateIdTokenListener_m5CA39E14DE0E3BA0DDF7FD344553FF2CBD1BBE00 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___auth0, StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * ___state_changed_delegate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthUtil_CreateIdTokenListener_m5CA39E14DE0E3BA0DDF7FD344553FF2CBD1BBE00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_0 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_1 = FirebaseAuth_getCPtr_m6C01C8CED64BD48D5773ACDB8A6FA6221526FC61(L_0, /*hidden argument*/NULL);
		StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * L_2 = ___state_changed_delegate1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_il2cpp_TypeInfo_var);
		intptr_t L_3 = AuthUtilPINVOKE_Firebase_Auth_CreateIdTokenListener_m1669662D941443B680ED10FE340ADE86F3A04E8E(L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		bool L_4 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_5 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, AuthUtil_CreateIdTokenListener_m5CA39E14DE0E3BA0DDF7FD344553FF2CBD1BBE00_RuntimeMethod_var);
	}

IL_001d:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.Void Firebase.Auth.AuthUtil::DestroyIdTokenListener(Firebase.Auth.FirebaseAuth,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtil_DestroyIdTokenListener_m9576256EF310D2C8757FC19F55DBF5F742FBB36F (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___auth0, intptr_t ___listener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthUtil_DestroyIdTokenListener_m9576256EF310D2C8757FC19F55DBF5F742FBB36F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_0 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_1 = FirebaseAuth_getCPtr_m6C01C8CED64BD48D5773ACDB8A6FA6221526FC61(L_0, /*hidden argument*/NULL);
		intptr_t L_2 = ___listener1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_Firebase_Auth_DestroyIdTokenListener_mD29C37103A3349667EEA6778507D38849370F125(L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		bool L_3 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, AuthUtil_DestroyIdTokenListener_m9576256EF310D2C8757FC19F55DBF5F742FBB36F_RuntimeMethod_var);
	}

IL_001c:
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
// System.Void Firebase.Auth.AuthUtilPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE__cctor_m86EBC2E7027DE0DBBA50584965A88F7428F380BE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthUtilPINVOKE__cctor_m86EBC2E7027DE0DBBA50584965A88F7428F380BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA * L_0 = (SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA *)il2cpp_codegen_object_new(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var);
		SWIGExceptionHelper__ctor_m663ABAF142B9C478D093B35480D4FB826A317558(L_0, /*hidden argument*/NULL);
		((AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_StaticFields*)il2cpp_codegen_static_fields_for(AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_il2cpp_TypeInfo_var))->set_swigExceptionHelper_0(L_0);
		SWIGStringHelper_t619BB8422C633B199FCD711B740F02C10ECC1042 * L_1 = (SWIGStringHelper_t619BB8422C633B199FCD711B740F02C10ECC1042 *)il2cpp_codegen_object_new(SWIGStringHelper_t619BB8422C633B199FCD711B740F02C10ECC1042_il2cpp_TypeInfo_var);
		SWIGStringHelper__ctor_m20EB871E90367EF839FC2375BF713B0C553193A3(L_1, /*hidden argument*/NULL);
		((AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_StaticFields*)il2cpp_codegen_static_fields_for(AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_il2cpp_TypeInfo_var))->set_swigStringHelper_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_Future_User_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_Future_User_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Auth.Future_User_SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_Future_User_SWIG_OnCompletion_m7B2924F52240CDA00FB2D682C5226D155041EFFD (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1 * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_Future_User_SWIG_OnCompletion)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_Future_User_SWIG_FreeCompletionData(void*, intptr_t);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_Future_User_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_Future_User_SWIG_FreeCompletionData_mEA8EF87590FAA3DF14728C00B857FAD6ED345B86 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_Future_User_SWIG_FreeCompletionData)(____jarg10_marshaled, ___jarg21);

}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_Future_User_GetResult(void*);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_Future_User_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_Future_User_GetResult_mAFF2CB69F40FAAF9E7F78AFA831749C00B175A41 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_Future_User_GetResult)(____jarg10_marshaled);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_delete_Future_User(void*);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_delete_Future_User(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_delete_Future_User_m8EF3BE70AB09F0B88620CE68017B875ED86E5D3E (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_delete_Future_User)(____jarg10_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_delete_FirebaseUser(void*);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_delete_FirebaseUser(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_delete_FirebaseUser_m7A7717D42245FFA1A1F73C17C0A96B2BB2B63FC9 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_delete_FirebaseUser)(____jarg10_marshaled);

}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_FirebaseUser_Token(void*, int32_t);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseUser_Token(System.Runtime.InteropServices.HandleRef,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_Token_m05ACF06B467EA0CE661891FCCAEC9CF1870AD200 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, bool ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_FirebaseUser_Token)(____jarg10_marshaled, static_cast<int32_t>(___jarg21));

	return returnValue;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_FirebaseUser_DisplayName_get(void*);
// System.String Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseUser_DisplayName_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_DisplayName_get_m91CB4E7B5AFAEE50C6E55F35CEACCA1BA8754B05 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_FirebaseUser_DisplayName_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_FirebaseUser_Email_get(void*);
// System.String Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseUser_Email_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_Email_get_m23BF377A82BE5C2C788AB061427E8E46BD217E36 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_FirebaseUser_Email_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_FirebaseUser_UserId_get(void*);
// System.String Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseUser_UserId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_UserId_get_m0E07D7A93CFFFF121443ED7EF8CC63492074AFB5 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_FirebaseUser_UserId_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_FirebaseAuth_SignInWithEmailAndPasswordInternal(void*, char*, char*);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseAuth_SignInWithEmailAndPasswordInternal(System.Runtime.InteropServices.HandleRef,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_SignInWithEmailAndPasswordInternal_mA401EDAA9777563060C677E3EF0D6F877A9D531B (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, String_t* ___jarg21, String_t* ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Marshaling of parameter '___jarg32' to native representation
	char* ____jarg32_marshaled = NULL;
	____jarg32_marshaled = il2cpp_codegen_marshal_string(___jarg32);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_FirebaseAuth_SignInWithEmailAndPasswordInternal)(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	// Marshaling cleanup of parameter '___jarg32' native representation
	il2cpp_codegen_marshal_free(____jarg32_marshaled);
	____jarg32_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_FirebaseAuth_GetAuthInternal(void*, int32_t*);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseAuth_GetAuthInternal(System.Runtime.InteropServices.HandleRef,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_GetAuthInternal_m4CB1D633D813357971B7AB38DF64C7AC5DE13E68 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, int32_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_FirebaseAuth_GetAuthInternal)(____jarg10_marshaled, ___jarg21);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_FirebaseAuth_ReleaseReferenceInternal(void*);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseAuth_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_ReleaseReferenceInternal_m263CD5445336938048D54721F2072483C6E36F1C (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_FirebaseAuth_ReleaseReferenceInternal)(____jarg10_marshaled);

}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_FirebaseAuth_CurrentUserInternal_get(void*);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseAuth_CurrentUserInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_CurrentUserInternal_get_m6DA9D3724EC4A35441E056C1B56AAC07860E244A (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_FirebaseAuth_CurrentUserInternal_get)(____jarg10_marshaled);

	return returnValue;
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CreateAuthStateListener(void*, Il2CppMethodPointer);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_CreateAuthStateListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth_StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_CreateAuthStateListener_m7CCEC77C2D4F69E6847504429F6CC458DB7B13B3 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CreateAuthStateListener)(____jarg10_marshaled, ____jarg21_marshaled);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_DestroyAuthStateListener(void*, intptr_t);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_DestroyAuthStateListener(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_DestroyAuthStateListener_m92F6FC1B7923A45026F116D70523981A86762C88 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_DestroyAuthStateListener)(____jarg10_marshaled, ___jarg21);

}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CreateIdTokenListener(void*, Il2CppMethodPointer);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_CreateIdTokenListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth_StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_CreateIdTokenListener_m1669662D941443B680ED10FE340ADE86F3A04E8E (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CreateIdTokenListener)(____jarg10_marshaled, ____jarg21_marshaled);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_DestroyIdTokenListener(void*, intptr_t);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_DestroyIdTokenListener(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_DestroyIdTokenListener_mD29C37103A3349667EEA6778507D38849370F125 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_DestroyIdTokenListener)(____jarg10_marshaled, ___jarg21);

}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_Future_User_SWIGUpcast(intptr_t);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_Future_User_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_Future_User_SWIGUpcast_m809DB4BFCF812C527A34544C23BE7AC06621714C (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_Future_User_SWIGUpcast)(___jarg10);

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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_mED5C184F17BEF3147768FBCA2E4D4354B63B27E2(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_mED5C184F17BEF3147768FBCA2E4D4354B63B27E2(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m045C3B8EB0F704CDA426B54CB429B2C7193643E7(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m045C3B8EB0F704CDA426B54CB429B2C7193643E7(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_mF04E45DA2DAB8D67B100D7963AAEFC1489541814(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_mF04E45DA2DAB8D67B100D7963AAEFC1489541814(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m735ED3D0D28B75A5751B05A579CD874E9477A6A5(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m735ED3D0D28B75A5751B05A579CD874E9477A6A5(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m957D770CF8D9D114C8811F30DB3ECAAA68FE63E1(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m957D770CF8D9D114C8811F30DB3ECAAA68FE63E1(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m3C02AD87A0CF1A643AD2F5E1A5930DC1B13D21C7(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m3C02AD87A0CF1A643AD2F5E1A5930DC1B13D21C7(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m826C1BEF38EC0D99F60CB83474F9D1BD0FA5636F(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_m826C1BEF38EC0D99F60CB83474F9D1BD0FA5636F(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_mD52F8781945A0A731DC946E5819D2BA2C6889788(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_mD52F8781945A0A731DC946E5819D2BA2C6889788(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m50A97D18C9ECDC561827D47167229D53CF8C5A7C(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_m50A97D18C9ECDC561827D47167229D53CF8C5A7C(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m653D6594CCD2448A4CD40DE53B93F6EBC1DE1875(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_m653D6594CCD2448A4CD40DE53B93F6EBC1DE1875(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m21D48E3AAFA45A33154601C703DD6B47486906D2(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m21D48E3AAFA45A33154601C703DD6B47486906D2(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m981D49A2CD66CFFB2586845F0973645E04FBB03A(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_m981D49A2CD66CFFB2586845F0973645E04FBB03A(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_mB1BCD3DBE15B7660343A81BF671736193EDA981D(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_mB1BCD3DBE15B7660343A81BF671736193EDA981D(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m8D005BC324621C8D98C6E041510B8760C19398BF(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m8D005BC324621C8D98C6E041510B8760C19398BF(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_m4DA3C4E48B608DAAACF8021F13A3F7E3FE6CB359 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper__cctor_m4DA3C4E48B608DAAACF8021F13A3F7E3FE6CB359_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * L_0 = (ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 *)il2cpp_codegen_object_new(ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mB51032662C7930F2A4514E896A4BE2B0CA05BBF5(L_0, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingApplicationException_mED5C184F17BEF3147768FBCA2E4D4354B63B27E2_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->set_applicationDelegate_0(L_0);
		ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * L_1 = (ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 *)il2cpp_codegen_object_new(ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mB51032662C7930F2A4514E896A4BE2B0CA05BBF5(L_1, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArithmeticException_m045C3B8EB0F704CDA426B54CB429B2C7193643E7_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->set_arithmeticDelegate_1(L_1);
		ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * L_2 = (ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 *)il2cpp_codegen_object_new(ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mB51032662C7930F2A4514E896A4BE2B0CA05BBF5(L_2, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingDivideByZeroException_mF04E45DA2DAB8D67B100D7963AAEFC1489541814_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->set_divideByZeroDelegate_2(L_2);
		ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * L_3 = (ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 *)il2cpp_codegen_object_new(ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mB51032662C7930F2A4514E896A4BE2B0CA05BBF5(L_3, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m735ED3D0D28B75A5751B05A579CD874E9477A6A5_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->set_indexOutOfRangeDelegate_3(L_3);
		ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * L_4 = (ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 *)il2cpp_codegen_object_new(ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mB51032662C7930F2A4514E896A4BE2B0CA05BBF5(L_4, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidCastException_m957D770CF8D9D114C8811F30DB3ECAAA68FE63E1_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->set_invalidCastDelegate_4(L_4);
		ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * L_5 = (ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 *)il2cpp_codegen_object_new(ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mB51032662C7930F2A4514E896A4BE2B0CA05BBF5(L_5, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidOperationException_m3C02AD87A0CF1A643AD2F5E1A5930DC1B13D21C7_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->set_invalidOperationDelegate_5(L_5);
		ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * L_6 = (ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 *)il2cpp_codegen_object_new(ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mB51032662C7930F2A4514E896A4BE2B0CA05BBF5(L_6, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIOException_m826C1BEF38EC0D99F60CB83474F9D1BD0FA5636F_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->set_ioDelegate_6(L_6);
		ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * L_7 = (ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 *)il2cpp_codegen_object_new(ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mB51032662C7930F2A4514E896A4BE2B0CA05BBF5(L_7, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingNullReferenceException_mD52F8781945A0A731DC946E5819D2BA2C6889788_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->set_nullReferenceDelegate_7(L_7);
		ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * L_8 = (ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 *)il2cpp_codegen_object_new(ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mB51032662C7930F2A4514E896A4BE2B0CA05BBF5(L_8, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOutOfMemoryException_m50A97D18C9ECDC561827D47167229D53CF8C5A7C_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->set_outOfMemoryDelegate_8(L_8);
		ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * L_9 = (ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 *)il2cpp_codegen_object_new(ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mB51032662C7930F2A4514E896A4BE2B0CA05BBF5(L_9, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOverflowException_m653D6594CCD2448A4CD40DE53B93F6EBC1DE1875_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->set_overflowDelegate_9(L_9);
		ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * L_10 = (ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 *)il2cpp_codegen_object_new(ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mB51032662C7930F2A4514E896A4BE2B0CA05BBF5(L_10, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingSystemException_m21D48E3AAFA45A33154601C703DD6B47486906D2_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->set_systemDelegate_10(L_10);
		ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * L_11 = (ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_mDD08AB0BA733FFC55713C5ED76046F1E5F5B58D6(L_11, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentException_m981D49A2CD66CFFB2586845F0973645E04FBB03A_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->set_argumentDelegate_11(L_11);
		ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * L_12 = (ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_mDD08AB0BA733FFC55713C5ED76046F1E5F5B58D6(L_12, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentNullException_mB1BCD3DBE15B7660343A81BF671736193EDA981D_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->set_argumentNullDelegate_12(L_12);
		ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * L_13 = (ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_mDD08AB0BA733FFC55713C5ED76046F1E5F5B58D6(L_13, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m8D005BC324621C8D98C6E041510B8760C19398BF_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->set_argumentOutOfRangeDelegate_13(L_13);
		ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * L_14 = ((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->get_applicationDelegate_0();
		ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * L_15 = ((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->get_arithmeticDelegate_1();
		ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * L_16 = ((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->get_divideByZeroDelegate_2();
		ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * L_17 = ((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->get_indexOutOfRangeDelegate_3();
		ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * L_18 = ((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->get_invalidCastDelegate_4();
		ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * L_19 = ((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->get_invalidOperationDelegate_5();
		ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * L_20 = ((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->get_ioDelegate_6();
		ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * L_21 = ((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->get_nullReferenceDelegate_7();
		ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * L_22 = ((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->get_outOfMemoryDelegate_8();
		ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * L_23 = ((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->get_overflowDelegate_9();
		ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * L_24 = ((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->get_systemDelegate_10();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AuthUtil_mF3FE20DFD5840E3EE9CF50EB3D0AFC4C9793759C(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * L_25 = ((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->get_argumentDelegate_11();
		ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * L_26 = ((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->get_argumentNullDelegate_12();
		ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * L_27 = ((SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA_il2cpp_TypeInfo_var))->get_argumentOutOfRangeDelegate_13();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AuthUtil_mAC998818F331388E0511CD0C0B21D5FB31CD62EA(L_25, L_26, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m663ABAF142B9C478D093B35480D4FB826A317558 (SWIGExceptionHelper_t042A0ECF4EF88ED7D955050E47637F5EDB55DCBA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_AuthUtil(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_AuthUtil(Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AuthUtil_mF3FE20DFD5840E3EE9CF50EB3D0AFC4C9793759C (ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___applicationDelegate0, ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___arithmeticDelegate1, ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___divideByZeroDelegate2, ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___indexOutOfRangeDelegate3, ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___invalidCastDelegate4, ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___invalidOperationDelegate5, ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___ioDelegate6, ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___nullReferenceDelegate7, ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___outOfMemoryDelegate8, ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___overflowDelegate9, ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * ___systemExceptionDelegate10, const RuntimeMethod* method)
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
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_AuthUtil)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacksArgument_AuthUtil(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_AuthUtil(Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AuthUtil_mAC998818F331388E0511CD0C0B21D5FB31CD62EA (ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * ___argumentDelegate0, ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * ___argumentNullDelegate1, ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method)
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
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacksArgument_AuthUtil)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);

}
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_mED5C184F17BEF3147768FBCA2E4D4354B63B27E2 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingApplicationException_mED5C184F17BEF3147768FBCA2E4D4354B63B27E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mDAA529437C9C5E75EE22F57FC1101BE48C98FE0A(/*hidden argument*/NULL);
		ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_2 = (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)il2cpp_codegen_object_new(ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m8995D630A3637BCF34394AEA12072BEA2D6D9012(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m045C3B8EB0F704CDA426B54CB429B2C7193643E7 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArithmeticException_m045C3B8EB0F704CDA426B54CB429B2C7193643E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mDAA529437C9C5E75EE22F57FC1101BE48C98FE0A(/*hidden argument*/NULL);
		ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269 * L_2 = (ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269 *)il2cpp_codegen_object_new(ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m1412E36F7AF7D25CF6A00670AE2296E88DA85F5F(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m8995D630A3637BCF34394AEA12072BEA2D6D9012(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_mF04E45DA2DAB8D67B100D7963AAEFC1489541814 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingDivideByZeroException_mF04E45DA2DAB8D67B100D7963AAEFC1489541814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mDAA529437C9C5E75EE22F57FC1101BE48C98FE0A(/*hidden argument*/NULL);
		DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC * L_2 = (DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC *)il2cpp_codegen_object_new(DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC_il2cpp_TypeInfo_var);
		DivideByZeroException__ctor_m12EDCCC81402AA666F9C3CF1CB8A8A7AA8D61169(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m8995D630A3637BCF34394AEA12072BEA2D6D9012(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m735ED3D0D28B75A5751B05A579CD874E9477A6A5 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m735ED3D0D28B75A5751B05A579CD874E9477A6A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mDAA529437C9C5E75EE22F57FC1101BE48C98FE0A(/*hidden argument*/NULL);
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_2 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m6CE231E888365F20BD05664560F7AF3830E9D21A(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m8995D630A3637BCF34394AEA12072BEA2D6D9012(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m957D770CF8D9D114C8811F30DB3ECAAA68FE63E1 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidCastException_m957D770CF8D9D114C8811F30DB3ECAAA68FE63E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mDAA529437C9C5E75EE22F57FC1101BE48C98FE0A(/*hidden argument*/NULL);
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_2 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m54AEC55A8A1F1EAD6485B691BB597C7EB284B2A5(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m8995D630A3637BCF34394AEA12072BEA2D6D9012(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m3C02AD87A0CF1A643AD2F5E1A5930DC1B13D21C7 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidOperationException_m3C02AD87A0CF1A643AD2F5E1A5930DC1B13D21C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mDAA529437C9C5E75EE22F57FC1101BE48C98FE0A(/*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_2 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC40AA9579B996C6FBAE023590139C16304D81DC6(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m8995D630A3637BCF34394AEA12072BEA2D6D9012(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m826C1BEF38EC0D99F60CB83474F9D1BD0FA5636F (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIOException_m826C1BEF38EC0D99F60CB83474F9D1BD0FA5636F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mDAA529437C9C5E75EE22F57FC1101BE48C98FE0A(/*hidden argument*/NULL);
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_2 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_m37262C706BEB979358ABEFEA9F9F253E8773D2B7(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m8995D630A3637BCF34394AEA12072BEA2D6D9012(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_mD52F8781945A0A731DC946E5819D2BA2C6889788 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingNullReferenceException_mD52F8781945A0A731DC946E5819D2BA2C6889788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mDAA529437C9C5E75EE22F57FC1101BE48C98FE0A(/*hidden argument*/NULL);
		NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_2 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mCD292E9CAC2B24447B04F5404C318B1B2AF4023D(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m8995D630A3637BCF34394AEA12072BEA2D6D9012(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m50A97D18C9ECDC561827D47167229D53CF8C5A7C (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOutOfMemoryException_m50A97D18C9ECDC561827D47167229D53CF8C5A7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mDAA529437C9C5E75EE22F57FC1101BE48C98FE0A(/*hidden argument*/NULL);
		OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 * L_2 = (OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 *)il2cpp_codegen_object_new(OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m155C798916559886F6DD9C93B414E5764C55FD52(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m8995D630A3637BCF34394AEA12072BEA2D6D9012(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m653D6594CCD2448A4CD40DE53B93F6EBC1DE1875 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOverflowException_m653D6594CCD2448A4CD40DE53B93F6EBC1DE1875_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mDAA529437C9C5E75EE22F57FC1101BE48C98FE0A(/*hidden argument*/NULL);
		OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * L_2 = (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D *)il2cpp_codegen_object_new(OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var);
		OverflowException__ctor_m15CD001EEB2E79D7497E101546B04D9A5520357E(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m8995D630A3637BCF34394AEA12072BEA2D6D9012(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m21D48E3AAFA45A33154601C703DD6B47486906D2 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingSystemException_m21D48E3AAFA45A33154601C703DD6B47486906D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mDAA529437C9C5E75EE22F57FC1101BE48C98FE0A(/*hidden argument*/NULL);
		SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 * L_2 = (SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 *)il2cpp_codegen_object_new(SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782_il2cpp_TypeInfo_var);
		SystemException__ctor_mA18D2EA5642C066F35CB8C965398F9A542C33B0A(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m8995D630A3637BCF34394AEA12072BEA2D6D9012(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m981D49A2CD66CFFB2586845F0973645E04FBB03A (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentException_m981D49A2CD66CFFB2586845F0973645E04FBB03A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___paramName1;
		Exception_t * L_2 = SWIGPendingException_Retrieve_mDAA529437C9C5E75EE22F57FC1101BE48C98FE0A(/*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8E5D9390593273B9774DBD2E967805E8EDE668E3(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		SWIGPendingException_Set_m8995D630A3637BCF34394AEA12072BEA2D6D9012(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mB1BCD3DBE15B7660343A81BF671736193EDA981D (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentNullException_mB1BCD3DBE15B7660343A81BF671736193EDA981D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0 = SWIGPendingException_Retrieve_mDAA529437C9C5E75EE22F57FC1101BE48C98FE0A(/*hidden argument*/NULL);
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
		SWIGPendingException_Set_m8995D630A3637BCF34394AEA12072BEA2D6D9012(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m8D005BC324621C8D98C6E041510B8760C19398BF (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m8D005BC324621C8D98C6E041510B8760C19398BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0 = SWIGPendingException_Retrieve_mDAA529437C9C5E75EE22F57FC1101BE48C98FE0A(/*hidden argument*/NULL);
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
		SWIGPendingException_Set_m8995D630A3637BCF34394AEA12072BEA2D6D9012(L_8, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD (ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
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
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mDD08AB0BA733FFC55713C5ED76046F1E5F5B58D6 (ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_mBD52B7D98A364DFAD79B8FD7009649F53221EA70 (ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_m914776A6C5FD05520379746610936FF15DB57E14 (ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * __this, String_t* ___message0, String_t* ___paramName1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___message0;
	__d_args[1] = ___paramName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_mB59A3BBE844637E97E772BFF6F31468B48877272 (ExceptionArgumentDelegate_tB32C87455B8F119B743AD43934BB482C07041ACD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 (ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mB51032662C7930F2A4514E896A4BE2B0CA05BBF5 (ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_mC9BD8AB1C7DD96955ABB32055F5381A7F9C9C6CC (ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_mBC3FE0088D5C543FA9B9F2ECAC482AF5CD3B7D9A (ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * __this, String_t* ___message0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_m8A22F44367559FFEA370052C246AB6F746202C43 (ExceptionDelegate_tFE4EA2179F1F967DE923B79459531CA5A96AE129 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m8995D630A3637BCF34394AEA12072BEA2D6D9012 (Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Set_m8995D630A3637BCF34394AEA12072BEA2D6D9012_MetadataUsageId);
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
		Exception_t * L_0 = ((SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_il2cpp_TypeInfo_var))->get_pendingException_0();
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral519E5A114736C3C9A5709C059C9D5F69D5683AB2, L_2, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A, /*hidden argument*/NULL);
		Exception_t * L_4 = ___e0;
		ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_5 = (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)il2cpp_codegen_object_new(ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F(L_5, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, SWIGPendingException_Set_m8995D630A3637BCF34394AEA12072BEA2D6D9012_RuntimeMethod_var);
	}

IL_002a:
	{
		Exception_t * L_6 = ___e0;
		((SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_il2cpp_TypeInfo_var))->set_pendingException_0(L_6);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		RuntimeObject * L_9 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_9, /*hidden argument*/NULL);
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		int32_t L_10 = ((SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
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
// System.Exception Firebase.Auth.AuthUtilPINVOKE_SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_mDAA529437C9C5E75EE22F57FC1101BE48C98FE0A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Retrieve_mDAA529437C9C5E75EE22F57FC1101BE48C98FE0A_MetadataUsageId);
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
		int32_t L_0 = ((SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_2 = ((SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = L_2;
		((SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		RuntimeObject * L_5 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_5, /*hidden argument*/NULL);
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		int32_t L_6 = ((SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t582A1D92989129033A51E3BA6F0A20BA996EF1E0_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_m5EB5804C391CFFC4E33F7F52D9DA6F58C9846628(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue = SWIGStringHelper_CreateString_m5EB5804C391CFFC4E33F7F52D9DA6F58C9846628(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_m7472E43E20AF0AF0E3796823A9E16F392CDEA729 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGStringHelper__cctor_m7472E43E20AF0AF0E3796823A9E16F392CDEA729_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_tF8D24E458BC3FCBF49C63A872A123BAF4E53AC09 * L_0 = (SWIGStringDelegate_tF8D24E458BC3FCBF49C63A872A123BAF4E53AC09 *)il2cpp_codegen_object_new(SWIGStringDelegate_tF8D24E458BC3FCBF49C63A872A123BAF4E53AC09_il2cpp_TypeInfo_var);
		SWIGStringDelegate__ctor_mD937751ED2BC9C536F1A5A79A4733CC18EC90030(L_0, NULL, (intptr_t)((intptr_t)SWIGStringHelper_CreateString_m5EB5804C391CFFC4E33F7F52D9DA6F58C9846628_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGStringHelper_t619BB8422C633B199FCD711B740F02C10ECC1042_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t619BB8422C633B199FCD711B740F02C10ECC1042_il2cpp_TypeInfo_var))->set_stringDelegate_0(L_0);
		SWIGStringDelegate_tF8D24E458BC3FCBF49C63A872A123BAF4E53AC09 * L_1 = ((SWIGStringHelper_t619BB8422C633B199FCD711B740F02C10ECC1042_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t619BB8422C633B199FCD711B740F02C10ECC1042_il2cpp_TypeInfo_var))->get_stringDelegate_0();
		SWIGStringHelper_SWIGRegisterStringCallback_AuthUtil_m7DAA87A54E67F8194F70E2BA9A75C4A4B7FA6CE0(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m20EB871E90367EF839FC2375BF713B0C553193A3 (SWIGStringHelper_t619BB8422C633B199FCD711B740F02C10ECC1042 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_AuthUtil(Il2CppMethodPointer);
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGStringHelper::SWIGRegisterStringCallback_AuthUtil(Firebase.Auth.AuthUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_AuthUtil_m7DAA87A54E67F8194F70E2BA9A75C4A4B7FA6CE0 (SWIGStringDelegate_tF8D24E458BC3FCBF49C63A872A123BAF4E53AC09 * ___stringDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_AuthUtil)(____stringDelegate0_marshaled);

}
// System.String Firebase.Auth.AuthUtilPINVOKE_SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m5EB5804C391CFFC4E33F7F52D9DA6F58C9846628 (String_t* ___cString0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_tF8D24E458BC3FCBF49C63A872A123BAF4E53AC09 (SWIGStringDelegate_tF8D24E458BC3FCBF49C63A872A123BAF4E53AC09 * __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.Void Firebase.Auth.AuthUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_mD937751ED2BC9C536F1A5A79A4733CC18EC90030 (SWIGStringDelegate_tF8D24E458BC3FCBF49C63A872A123BAF4E53AC09 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String Firebase.Auth.AuthUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m2811ADA84E2475C62717F7594D222D372C9CAB69 (SWIGStringDelegate_tF8D24E458BC3FCBF49C63A872A123BAF4E53AC09 * __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.Auth.AuthUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_m22AEC3ED758D7E7E1C61CE0EE2DDAD682060F9C6 (SWIGStringDelegate_tF8D24E458BC3FCBF49C63A872A123BAF4E53AC09 * __this, String_t* ___message0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.String Firebase.Auth.AuthUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_m5DAA082393AC3F72B41155AD0F99988B3AEBCDE6 (SWIGStringDelegate_tF8D24E458BC3FCBF49C63A872A123BAF4E53AC09 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_FirebaseAuth_StateChangedFunction_mA8F92FBECD193976D942C7901DBD53E401932374(intptr_t ___appCPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	FirebaseAuth_StateChangedFunction_mA8F92FBECD193976D942C7901DBD53E401932374(___appCPtr0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_FirebaseAuth_IdTokenChangedFunction_m57C331EB1A3C296A5DFD28EA036F0F4404ADEECA(intptr_t ___appCPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	FirebaseAuth_IdTokenChangedFunction_m57C331EB1A3C296A5DFD28EA036F0F4404ADEECA(___appCPtr0, NULL);

}
// System.Void Firebase.Auth.FirebaseAuth::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth__ctor_m8AF94C141995F87831E56F9D99D947342BAA4314 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
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
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::getCPtr(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  FirebaseAuth_getCPtr_m6C01C8CED64BD48D5773ACDB8A6FA6221526FC61 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_getCPtr_m6C01C8CED64BD48D5773ACDB8A6FA6221526FC61_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_0 = ___obj0;
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
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_3 = L_2->get_swigCPtr_0();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_Finalize_mF9841896A66D3220FB5B3B051741902CEDD77655 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, const RuntimeMethod* method)
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
		FirebaseAuth_Dispose_m421F72148C7DC58E60C570F31DAADC07904FC38B(__this, /*hidden argument*/NULL);
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
// System.Void Firebase.Auth.FirebaseAuth::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_Dispose_m421F72148C7DC58E60C570F31DAADC07904FC38B (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, const RuntimeMethod* method)
{
	{
		FirebaseAuth_DisposeInternal_mB39D097246264F2DEA2A44EF63546C1F95D71176(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::ProxyFromAppCPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * FirebaseAuth_ProxyFromAppCPtr_mB75BAB4EEA30FDBABC4B4238CEBA19F0634E5D74 (intptr_t ___appCPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_ProxyFromAppCPtr_mB75BAB4EEA30FDBABC4B4238CEBA19F0634E5D74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * V_1 = NULL;
	FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
		Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C * L_0 = ((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
			Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C * L_2 = ((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
			intptr_t L_3 = ___appCPtr0;
			NullCheck(L_2);
			bool L_4 = Dictionary_2_TryGetValue_m57BC28148024C733D39673192076784FB5CA208E(L_2, (intptr_t)L_3, (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m57BC28148024C733D39673192076784FB5CA208E_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_0025;
			}
		}

IL_001e:
		{
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_5 = V_1;
			V_2 = L_5;
			IL2CPP_LEAVE(0x33, FINALLY_002a);
		}

IL_0025:
		{
			IL2CPP_LEAVE(0x31, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		RuntimeObject * L_6 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_JUMP_TBL(0x31, IL_0031)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0031:
	{
		return (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D *)NULL;
	}

IL_0033:
	{
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_7 = V_2;
		return L_7;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ThrowIfNull_mF1D29A1F5508A20087E07276C16A5D7AC0CCF9A6 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_ThrowIfNull_mF1D29A1F5508A20087E07276C16A5D7AC0CCF9A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A * L_0 = __this->get_address_of_swigCPtr_0();
		intptr_t L_1 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)L_0, /*hidden argument*/NULL);
		bool L_2 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_3 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m7D46E331C349DD29CBA488C9B6A950A3E7DD5CAE(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseAuth_ThrowIfNull_mF1D29A1F5508A20087E07276C16A5D7AC0CCF9A6_RuntimeMethod_var);
	}

IL_0020:
	{
		return;
	}
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::GetAuth(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * FirebaseAuth_GetAuth_mF9F3471073B652BC9FF94BD40D81B7360C75BC36 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_GetAuth_mF9F3471073B652BC9FF94BD40D81B7360C75BC36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	U3CGetAuthU3Ec__AnonStorey2_tB3DC969FB282B9CF462B6CC3BEA5E8CF31EF5431 * V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  V_4;
	memset((&V_4), 0, sizeof(V_4));
	FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * G_B7_0 = NULL;
	FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * G_B7_1 = NULL;
	FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * G_B6_0 = NULL;
	FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * G_B6_1 = NULL;
	FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * G_B9_0 = NULL;
	FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * G_B9_1 = NULL;
	FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * G_B8_0 = NULL;
	FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * G_B8_1 = NULL;
	{
		U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * L_0 = (U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 *)il2cpp_codegen_object_new(U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1_il2cpp_TypeInfo_var);
		U3CGetAuthU3Ec__AnonStorey1__ctor_mBA21355AB25FFCCC2D53802270B3E17515DBA563(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * L_1 = V_0;
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_2 = ___app0;
		NullCheck(L_1);
		L_1->set_app_0(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = Services_get_Auth_mA625B8DAD33D45656A1D8354B291A2DBC0E72A54_inline(/*hidden argument*/NULL);
		if (((FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 *)IsInstClass((RuntimeObject*)L_3, FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607_il2cpp_TypeInfo_var)))
		{
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607_il2cpp_TypeInfo_var);
		FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * L_4 = FirebaseAuthService_get_Instance_m23F18D0809F0B5EEC6CE02053988F1FC3E0EFCE8_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_il2cpp_TypeInfo_var);
		Services_set_Auth_mC7EA4640F2ECFFB45540109F9F8C52EBC96C32BF_inline(L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
		Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C * L_5 = ((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_1 = L_5;
		RuntimeObject * L_6 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_6, /*hidden argument*/NULL);
	}

IL_0032:
	try
	{ // begin try (depth: 1)
		{
			U3CGetAuthU3Ec__AnonStorey2_tB3DC969FB282B9CF462B6CC3BEA5E8CF31EF5431 * L_7 = (U3CGetAuthU3Ec__AnonStorey2_tB3DC969FB282B9CF462B6CC3BEA5E8CF31EF5431 *)il2cpp_codegen_object_new(U3CGetAuthU3Ec__AnonStorey2_tB3DC969FB282B9CF462B6CC3BEA5E8CF31EF5431_il2cpp_TypeInfo_var);
			U3CGetAuthU3Ec__AnonStorey2__ctor_m8542E15471B018951EC00E562EF9F012A1168BAA(L_7, /*hidden argument*/NULL);
			V_2 = L_7;
			U3CGetAuthU3Ec__AnonStorey2_tB3DC969FB282B9CF462B6CC3BEA5E8CF31EF5431 * L_8 = V_2;
			U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * L_9 = V_0;
			NullCheck(L_8);
			L_8->set_U3CU3Ef__refU241_1(L_9);
			U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * L_10 = V_0;
			NullCheck(L_10);
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_11 = L_10->get_app_0();
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_12 = FirebaseApp_getCPtr_mF922A07C69469D0EB5A268A9278C495805BDCA4F(L_11, /*hidden argument*/NULL);
			V_4 = L_12;
			intptr_t L_13 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)(&V_4), /*hidden argument*/NULL);
			V_3 = (intptr_t)L_13;
			U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * L_14 = V_0;
			intptr_t L_15 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_16 = FirebaseAuth_ProxyFromAppCPtr_mB75BAB4EEA30FDBABC4B4238CEBA19F0634E5D74((intptr_t)L_15, /*hidden argument*/NULL);
			NullCheck(L_14);
			L_14->set_auth_1(L_16);
			U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * L_17 = V_0;
			NullCheck(L_17);
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_18 = L_17->get_auth_1();
			if (!L_18)
			{
				goto IL_0078;
			}
		}

IL_006b:
		{
			U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * L_19 = V_0;
			NullCheck(L_19);
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_20 = L_19->get_auth_1();
			V_5 = L_20;
			IL2CPP_LEAVE(0x15C, FINALLY_014e);
		}

IL_0078:
		{
			U3CGetAuthU3Ec__AnonStorey2_tB3DC969FB282B9CF462B6CC3BEA5E8CF31EF5431 * L_21 = V_2;
			Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_22 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
			Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_22, L_21, (intptr_t)((intptr_t)U3CGetAuthU3Ec__AnonStorey2_U3CU3Em__0_m3670BECAF618C625DB828A099B54C9584C87F56F_RuntimeMethod_var), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			FirebaseApp_TranslateDllNotFoundException_mC6F04F02034B21A8A258012156CA7F263FB594F6(L_22, /*hidden argument*/NULL);
			U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * L_23 = V_0;
			NullCheck(L_23);
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_24 = L_23->get_auth_1();
			U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * L_25 = V_0;
			NullCheck(L_25);
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_26 = L_25->get_auth_1();
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
			StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * L_27 = ((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_11();
			G_B6_0 = L_26;
			G_B6_1 = L_24;
			if (L_27)
			{
				G_B7_0 = L_26;
				G_B7_1 = L_24;
				goto IL_00ad;
			}
		}

IL_009c:
		{
			StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * L_28 = (StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E *)il2cpp_codegen_object_new(StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E_il2cpp_TypeInfo_var);
			StateChangedDelegate__ctor_m639C51AA8A08FD2E0F6012DC3B5B66990643A192(L_28, NULL, (intptr_t)((intptr_t)FirebaseAuth_StateChangedFunction_mA8F92FBECD193976D942C7901DBD53E401932374_RuntimeMethod_var), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
			((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_11(L_28);
			G_B7_0 = G_B6_0;
			G_B7_1 = G_B6_1;
		}

IL_00ad:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
			StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * L_29 = ((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_11();
			intptr_t L_30 = AuthUtil_CreateAuthStateListener_m79B4AB49D383DB7458D564F1BE4E31A76F2C3A24(G_B7_0, L_29, /*hidden argument*/NULL);
			NullCheck(G_B7_1);
			G_B7_1->set_authStateListener_4((intptr_t)L_30);
			U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * L_31 = V_0;
			NullCheck(L_31);
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_32 = L_31->get_auth_1();
			U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * L_33 = V_0;
			NullCheck(L_33);
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_34 = L_33->get_auth_1();
			StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * L_35 = ((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_12();
			G_B8_0 = L_34;
			G_B8_1 = L_32;
			if (L_35)
			{
				G_B9_0 = L_34;
				G_B9_1 = L_32;
				goto IL_00e0;
			}
		}

IL_00cf:
		{
			StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * L_36 = (StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E *)il2cpp_codegen_object_new(StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E_il2cpp_TypeInfo_var);
			StateChangedDelegate__ctor_m639C51AA8A08FD2E0F6012DC3B5B66990643A192(L_36, NULL, (intptr_t)((intptr_t)FirebaseAuth_IdTokenChangedFunction_m57C331EB1A3C296A5DFD28EA036F0F4404ADEECA_RuntimeMethod_var), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
			((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_12(L_36);
			G_B9_0 = G_B8_0;
			G_B9_1 = G_B8_1;
		}

IL_00e0:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
			StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * L_37 = ((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_12();
			intptr_t L_38 = AuthUtil_CreateIdTokenListener_m5CA39E14DE0E3BA0DDF7FD344553FF2CBD1BBE00(G_B9_0, L_37, /*hidden argument*/NULL);
			NullCheck(G_B9_1);
			G_B9_1->set_idTokenListener_5((intptr_t)L_38);
			U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * L_39 = V_0;
			NullCheck(L_39);
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_40 = L_39->get_auth_1();
			U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * L_41 = V_0;
			NullCheck(L_41);
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_42 = L_41->get_app_0();
			NullCheck(L_40);
			L_40->set_appProxy_2(L_42);
			U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * L_43 = V_0;
			NullCheck(L_43);
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_44 = L_43->get_auth_1();
			intptr_t L_45 = V_3;
			NullCheck(L_44);
			L_44->set_appCPtr_3((intptr_t)L_45);
			U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * L_46 = V_0;
			NullCheck(L_46);
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_47 = L_46->get_app_0();
			U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * L_48 = V_0;
			NullCheck(L_48);
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_49 = L_48->get_auth_1();
			EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_50 = (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)il2cpp_codegen_object_new(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var);
			EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F(L_50, L_49, (intptr_t)((intptr_t)FirebaseAuth_OnAppDisposed_mA45B66E76F5BE8E999856DE4790EBEB6C0E92B50_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_47);
			FirebaseApp_add_AppDisposed_m1CA5C0D303E4A5536DFDBE3356A900B3B966D4B6(L_47, L_50, /*hidden argument*/NULL);
			Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C * L_51 = ((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
			intptr_t L_52 = V_3;
			U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * L_53 = V_0;
			NullCheck(L_53);
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_54 = L_53->get_auth_1();
			NullCheck(L_51);
			Dictionary_2_set_Item_m1DC14338A0E6BE9ADEDE3DE5FF212D08669EBAB1(L_51, (intptr_t)L_52, L_54, /*hidden argument*/Dictionary_2_set_Item_m1DC14338A0E6BE9ADEDE3DE5FF212D08669EBAB1_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607_il2cpp_TypeInfo_var);
			FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * L_55 = FirebaseAuthService_get_Instance_m23F18D0809F0B5EEC6CE02053988F1FC3E0EFCE8_inline(/*hidden argument*/NULL);
			U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * L_56 = V_0;
			NullCheck(L_56);
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_57 = L_56->get_auth_1();
			NullCheck(L_55);
			FirebaseAuthService_OnIdTokenChanged_m2A4A76C0154C6FDD38B2D007EA2AAA1106893261(L_55, L_57, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x155, FINALLY_014e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_014e;
	}

FINALLY_014e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_58 = V_1;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_58, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(334)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(334)
	{
		IL2CPP_JUMP_TBL(0x15C, IL_015c)
		IL2CPP_JUMP_TBL(0x155, IL_0155)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0155:
	{
		U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * L_59 = V_0;
		NullCheck(L_59);
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_60 = L_59->get_auth_1();
		return L_60;
	}

IL_015c:
	{
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_61 = V_5;
		return L_61;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::OnAppDisposed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_OnAppDisposed_mA45B66E76F5BE8E999856DE4790EBEB6C0E92B50 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___eventArgs1, const RuntimeMethod* method)
{
	{
		FirebaseAuth_Dispose_m421F72148C7DC58E60C570F31DAADC07904FC38B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::DisposeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_DisposeInternal_mB39D097246264F2DEA2A44EF63546C1F95D71176 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_DisposeInternal_mB39D097246264F2DEA2A44EF63546C1F95D71176_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
		Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C * L_0 = ((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			RuntimeObject * L_2 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_disposeLock_2();
			V_1 = L_2;
			RuntimeObject * L_3 = V_1;
			Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_3, /*hidden argument*/NULL);
		}

IL_0018:
		try
		{ // begin try (depth: 2)
			{
				IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
				HandleRef_t876E76124F400D12395BF61D562162AB6822204A * L_4 = __this->get_address_of_swigCPtr_0();
				intptr_t L_5 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)L_4, /*hidden argument*/NULL);
				bool L_6 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_5, (intptr_t)(0), /*hidden argument*/NULL);
				if (!L_6)
				{
					goto IL_011a;
				}
			}

IL_0038:
			{
				IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607_il2cpp_TypeInfo_var);
				FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * L_7 = FirebaseAuthService_get_Instance_m23F18D0809F0B5EEC6CE02053988F1FC3E0EFCE8_inline(/*hidden argument*/NULL);
				HandleRef_t876E76124F400D12395BF61D562162AB6822204A * L_8 = __this->get_address_of_swigCPtr_0();
				intptr_t L_9 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)L_8, /*hidden argument*/NULL);
				NullCheck(L_7);
				FirebaseAuthService_OnAuthDisposed_m65997F23F79BD13B7288AFE44DB9EC650A3120D8(L_7, (intptr_t)L_9, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
				Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C * L_10 = ((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
				intptr_t L_11 = __this->get_appCPtr_3();
				NullCheck(L_10);
				Dictionary_2_Remove_mCD32BD16CC95EC5A392921F4A69454449BD6A1C3(L_10, (intptr_t)L_11, /*hidden argument*/Dictionary_2_Remove_mCD32BD16CC95EC5A392921F4A69454449BD6A1C3_RuntimeMethod_var);
				FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_12 = __this->get_appProxy_2();
				EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_13 = (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)il2cpp_codegen_object_new(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var);
				EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F(L_13, __this, (intptr_t)((intptr_t)FirebaseAuth_OnAppDisposed_mA45B66E76F5BE8E999856DE4790EBEB6C0E92B50_RuntimeMethod_var), /*hidden argument*/NULL);
				NullCheck(L_12);
				FirebaseApp_remove_AppDisposed_mE9EBC4903F93C997C038F8B12940A3D658624EA9(L_12, L_13, /*hidden argument*/NULL);
				__this->set_appProxy_2((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 *)NULL);
				__this->set_appCPtr_3((intptr_t)(0));
				FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_14 = __this->get_currentUser_6();
				if (!L_14)
				{
					goto IL_00a4;
				}
			}

IL_0092:
			{
				FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_15 = __this->get_currentUser_6();
				NullCheck(L_15);
				FirebaseUser_Dispose_m0D1CAF1B60964799A2B01FD38A3BB435C3D818A6(L_15, /*hidden argument*/NULL);
				__this->set_currentUser_6((FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F *)NULL);
			}

IL_00a4:
			{
				intptr_t L_16 = __this->get_authStateListener_4();
				bool L_17 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_16, (intptr_t)(0), /*hidden argument*/NULL);
				if (!L_17)
				{
					goto IL_00d0;
				}
			}

IL_00b9:
			{
				intptr_t L_18 = __this->get_authStateListener_4();
				AuthUtil_DestroyAuthStateListener_mAF3EE6225D9555BB4204018D6CE005452B0766F1(__this, (intptr_t)L_18, /*hidden argument*/NULL);
				__this->set_authStateListener_4((intptr_t)(0));
			}

IL_00d0:
			{
				intptr_t L_19 = __this->get_idTokenListener_5();
				bool L_20 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_19, (intptr_t)(0), /*hidden argument*/NULL);
				if (!L_20)
				{
					goto IL_00fc;
				}
			}

IL_00e5:
			{
				intptr_t L_21 = __this->get_idTokenListener_5();
				AuthUtil_DestroyIdTokenListener_m9576256EF310D2C8757FC19F55DBF5F742FBB36F(__this, (intptr_t)L_21, /*hidden argument*/NULL);
				__this->set_idTokenListener_5((intptr_t)(0));
			}

IL_00fc:
			{
				IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
				FirebaseAuth_ReleaseReferenceInternal_m64539F9A01E7E6DA690484EE011EDE20E1C9EEAE(__this, /*hidden argument*/NULL);
				__this->set_swigCMemOwn_1((bool)0);
				HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_22;
				memset((&L_22), 0, sizeof(L_22));
				HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_22), NULL, (intptr_t)(0), /*hidden argument*/NULL);
				__this->set_swigCPtr_0(L_22);
			}

IL_011a:
			{
				IL2CPP_LEAVE(0x126, FINALLY_011f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_011f;
		}

FINALLY_011f:
		{ // begin finally (depth: 2)
			RuntimeObject * L_23 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_23, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(287)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(287)
		{
			IL2CPP_JUMP_TBL(0x126, IL_0126)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0126:
		{
			IL2CPP_LEAVE(0x132, FINALLY_012b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_012b;
	}

FINALLY_012b:
	{ // begin finally (depth: 1)
		RuntimeObject * L_24 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_24, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(299)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(299)
	{
		IL2CPP_JUMP_TBL(0x132, IL_0132)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0132:
	{
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::ForwardStateChange(System.IntPtr,System.Action`1<Firebase.Auth.FirebaseAuth>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ForwardStateChange_m51C0E1EC6D8F9C857A893571EA6ED87BAD74F924 (intptr_t ___appCPtr0, Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 * ___stateChangeClosure1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_ForwardStateChange_m51C0E1EC6D8F9C857A893571EA6ED87BAD74F924_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CForwardStateChangeU3Ec__AnonStorey3_t5C0E4F8E37A78F1A41077C11EC92E34302B38B18 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	U3CForwardStateChangeU3Ec__AnonStorey4_tB01A3C627BA9158B9D7CA021320E971C0E0E51D3 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		U3CForwardStateChangeU3Ec__AnonStorey3_t5C0E4F8E37A78F1A41077C11EC92E34302B38B18 * L_0 = (U3CForwardStateChangeU3Ec__AnonStorey3_t5C0E4F8E37A78F1A41077C11EC92E34302B38B18 *)il2cpp_codegen_object_new(U3CForwardStateChangeU3Ec__AnonStorey3_t5C0E4F8E37A78F1A41077C11EC92E34302B38B18_il2cpp_TypeInfo_var);
		U3CForwardStateChangeU3Ec__AnonStorey3__ctor_m25A3D9ADE863C969716D4BA5153822A805608E80(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CForwardStateChangeU3Ec__AnonStorey3_t5C0E4F8E37A78F1A41077C11EC92E34302B38B18 * L_1 = V_0;
		Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 * L_2 = ___stateChangeClosure1;
		NullCheck(L_1);
		L_1->set_stateChangeClosure_0(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
		Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C * L_3 = ((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_4, /*hidden argument*/NULL);
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			U3CForwardStateChangeU3Ec__AnonStorey4_tB01A3C627BA9158B9D7CA021320E971C0E0E51D3 * L_5 = (U3CForwardStateChangeU3Ec__AnonStorey4_tB01A3C627BA9158B9D7CA021320E971C0E0E51D3 *)il2cpp_codegen_object_new(U3CForwardStateChangeU3Ec__AnonStorey4_tB01A3C627BA9158B9D7CA021320E971C0E0E51D3_il2cpp_TypeInfo_var);
			U3CForwardStateChangeU3Ec__AnonStorey4__ctor_m76A61EB738DC6F2008BD0B716DBC945E64DCE7E2(L_5, /*hidden argument*/NULL);
			V_2 = L_5;
			U3CForwardStateChangeU3Ec__AnonStorey4_tB01A3C627BA9158B9D7CA021320E971C0E0E51D3 * L_6 = V_2;
			U3CForwardStateChangeU3Ec__AnonStorey3_t5C0E4F8E37A78F1A41077C11EC92E34302B38B18 * L_7 = V_0;
			NullCheck(L_6);
			L_6->set_U3CU3Ef__refU243_1(L_7);
			U3CForwardStateChangeU3Ec__AnonStorey4_tB01A3C627BA9158B9D7CA021320E971C0E0E51D3 * L_8 = V_2;
			intptr_t L_9 = ___appCPtr0;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_10 = FirebaseAuth_ProxyFromAppCPtr_mB75BAB4EEA30FDBABC4B4238CEBA19F0634E5D74((intptr_t)L_9, /*hidden argument*/NULL);
			NullCheck(L_8);
			L_8->set_auth_0(L_10);
			U3CForwardStateChangeU3Ec__AnonStorey4_tB01A3C627BA9158B9D7CA021320E971C0E0E51D3 * L_11 = V_2;
			NullCheck(L_11);
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_12 = L_11->get_auth_0();
			if (!L_12)
			{
				goto IL_004e;
			}
		}

IL_003d:
		{
			U3CForwardStateChangeU3Ec__AnonStorey4_tB01A3C627BA9158B9D7CA021320E971C0E0E51D3 * L_13 = V_2;
			Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_14 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
			Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_14, L_13, (intptr_t)((intptr_t)U3CForwardStateChangeU3Ec__AnonStorey4_U3CU3Em__0_m970D40C949C46CD176F6E7BFE1B143A3478E5F1E_RuntimeMethod_var), /*hidden argument*/NULL);
			ExceptionAggregator_Wrap_m93A9BD0DC888F1D02E77860288095CB49D4CFFC2(L_14, /*hidden argument*/NULL);
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		RuntimeObject * L_15 = V_1;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_15, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(83)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005a:
	{
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::StateChangedFunction(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_StateChangedFunction_mA8F92FBECD193976D942C7901DBD53E401932374 (intptr_t ___appCPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_StateChangedFunction_mA8F92FBECD193976D942C7901DBD53E401932374_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0 = ___appCPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
		Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 * L_1 = ((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_13();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 * L_2 = (Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 *)il2cpp_codegen_object_new(Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1_il2cpp_TypeInfo_var);
		Action_1__ctor_m5508D22ECD28CFA0DE45D604BCF05D27B5D2DC42(L_2, NULL, (intptr_t)((intptr_t)FirebaseAuth_U3CStateChangedFunctionU3Em__0_mB81E8C1132A7E7E5BA57AAF42FFC5BF83D8183A8_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5508D22ECD28CFA0DE45D604BCF05D27B5D2DC42_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
		((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_13(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
		Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 * L_3 = ((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_13();
		FirebaseAuth_ForwardStateChange_m51C0E1EC6D8F9C857A893571EA6ED87BAD74F924((intptr_t)G_B2_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::IdTokenChangedFunction(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_IdTokenChangedFunction_m57C331EB1A3C296A5DFD28EA036F0F4404ADEECA (intptr_t ___appCPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_IdTokenChangedFunction_m57C331EB1A3C296A5DFD28EA036F0F4404ADEECA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0 = ___appCPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
		Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 * L_1 = ((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_14();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 * L_2 = (Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 *)il2cpp_codegen_object_new(Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1_il2cpp_TypeInfo_var);
		Action_1__ctor_m5508D22ECD28CFA0DE45D604BCF05D27B5D2DC42(L_2, NULL, (intptr_t)((intptr_t)FirebaseAuth_U3CIdTokenChangedFunctionU3Em__1_m81FC59CF805B3F2DBDB6F1AB98F202C9BF36AD9E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5508D22ECD28CFA0DE45D604BCF05D27B5D2DC42_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
		((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_14(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
		Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 * L_3 = ((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_14();
		FirebaseAuth_ForwardStateChange_m51C0E1EC6D8F9C857A893571EA6ED87BAD74F924((intptr_t)G_B2_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * FirebaseAuth_get_DefaultInstance_m3792BC68FA9058F487792902BA9F495DEBE4A7FD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_get_DefaultInstance_m3792BC68FA9058F487792902BA9F495DEBE4A7FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = FirebaseApp_get_DefaultInstance_m46ACEAEC916D0AC3014302498F51607462EE5C63(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_1 = FirebaseAuth_GetAuth_mF9F3471073B652BC9FF94BD40D81B7360C75BC36(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth::get_App()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseAuth_get_App_mCCD52A0729E63E34FEE835C9F08DFE36C2A49805 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, const RuntimeMethod* method)
{
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = __this->get_appProxy_2();
		return L_0;
	}
}
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::UpdateCurrentUser(Firebase.Auth.FirebaseUser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * FirebaseAuth_UpdateCurrentUser_mA01C3D9B857CEA48860F3A3202E0F821B6EDDC56 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * ___proxy0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_UpdateCurrentUser_mA01C3D9B857CEA48860F3A3202E0F821B6EDDC56_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
		Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C * L_0 = ((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_2 = ___proxy0;
			if (L_2)
			{
				goto IL_001e;
			}
		}

IL_0012:
		{
			__this->set_currentUser_6((FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F *)NULL);
			goto IL_0072;
		}

IL_001e:
		{
			FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_3 = __this->get_currentUser_6();
			if (L_3)
			{
				goto IL_0035;
			}
		}

IL_0029:
		{
			FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_4 = ___proxy0;
			__this->set_currentUser_6(L_4);
			goto IL_0072;
		}

IL_0035:
		{
			FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_5 = __this->get_currentUser_6();
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_6 = FirebaseUser_getCPtr_mC2544D71AB72001C769868A7881BE36808B7056B(L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			intptr_t L_7 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)(&V_1), /*hidden argument*/NULL);
			FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_8 = ___proxy0;
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_9 = FirebaseUser_getCPtr_mC2544D71AB72001C769868A7881BE36808B7056B(L_8, /*hidden argument*/NULL);
			V_2 = L_9;
			intptr_t L_10 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)(&V_2), /*hidden argument*/NULL);
			bool L_11 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_7, (intptr_t)L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0072;
			}
		}

IL_0060:
		{
			FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_12 = __this->get_currentUser_6();
			NullCheck(L_12);
			FirebaseUser_Dispose_m0D1CAF1B60964799A2B01FD38A3BB435C3D818A6(L_12, /*hidden argument*/NULL);
			FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_13 = ___proxy0;
			__this->set_currentUser_6(L_13);
		}

IL_0072:
		{
			FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_14 = __this->get_currentUser_6();
			if (!L_14)
			{
				goto IL_0089;
			}
		}

IL_007d:
		{
			FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_15 = __this->get_currentUser_6();
			NullCheck(L_15);
			L_15->set_authProxy_2(__this);
		}

IL_0089:
		{
			IL2CPP_LEAVE(0x95, FINALLY_008e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008e;
	}

FINALLY_008e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_16 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_16, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(142)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(142)
	{
		IL2CPP_JUMP_TBL(0x95, IL_0095)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0095:
	{
		FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_17 = __this->get_currentUser_6();
		return L_17;
	}
}
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * FirebaseAuth_get_CurrentUser_m9F6B70352053BEA7DA757C4947DB575F435C1596 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_get_CurrentUser_m9F6B70352053BEA7DA757C4947DB575F435C1596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * V_0 = NULL;
	FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * G_B3_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A * L_0 = __this->get_address_of_swigCPtr_0();
		intptr_t L_1 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)L_0, /*hidden argument*/NULL);
		bool L_2 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_3 = FirebaseAuth_get_CurrentUserInternal_m092235EE454060C1D4072405F645FDE428348529(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = ((FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F *)(NULL));
	}

IL_0026:
	{
		V_0 = G_B3_0;
		FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_4 = V_0;
		FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_5 = FirebaseAuth_UpdateCurrentUser_mA01C3D9B857CEA48860F3A3202E0F821B6EDDC56(__this, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInWithEmailAndPasswordAsync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * FirebaseAuth_SignInWithEmailAndPasswordAsync_m28C99A9A81AC39558D8D07E6824B660D81A23B6C (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, String_t* ___email0, String_t* ___password1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_SignInWithEmailAndPasswordAsync_m28C99A9A81AC39558D8D07E6824B660D81A23B6C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStoreyA_t1CDA9CF4D4D6123216891015275FB6224BBBE7DB * V_0 = NULL;
	{
		U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStoreyA_t1CDA9CF4D4D6123216891015275FB6224BBBE7DB * L_0 = (U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStoreyA_t1CDA9CF4D4D6123216891015275FB6224BBBE7DB *)il2cpp_codegen_object_new(U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStoreyA_t1CDA9CF4D4D6123216891015275FB6224BBBE7DB_il2cpp_TypeInfo_var);
		U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStoreyA__ctor_mEA510682AD6D6F450CD7778139B41DD915ACA274(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStoreyA_t1CDA9CF4D4D6123216891015275FB6224BBBE7DB * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_1(__this);
		FirebaseAuth_ThrowIfNull_mF1D29A1F5508A20087E07276C16A5D7AC0CCF9A6(__this, /*hidden argument*/NULL);
		U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStoreyA_t1CDA9CF4D4D6123216891015275FB6224BBBE7DB * L_2 = V_0;
		TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * L_3 = (TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m98B20A73B661A2B763A764995A30A2601B347EB0(L_3, /*hidden argument*/TaskCompletionSource_1__ctor_m98B20A73B661A2B763A764995A30A2601B347EB0_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_taskCompletionSource_0(L_3);
		String_t* L_4 = ___email0;
		String_t* L_5 = ___password1;
		Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * L_6 = FirebaseAuth_SignInWithEmailAndPasswordInternalAsync_mA6617BD34AC8ADDBB74414D36CEA59FBC2F9583C(__this, L_4, L_5, /*hidden argument*/NULL);
		U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStoreyA_t1CDA9CF4D4D6123216891015275FB6224BBBE7DB * L_7 = V_0;
		Action_1_tFF0188AB046A1E1964F743C87F216E0A3D1D21E2 * L_8 = (Action_1_tFF0188AB046A1E1964F743C87F216E0A3D1D21E2 *)il2cpp_codegen_object_new(Action_1_tFF0188AB046A1E1964F743C87F216E0A3D1D21E2_il2cpp_TypeInfo_var);
		Action_1__ctor_m443758288B4A1840F7094DC17AA8B477789DE4B1(L_8, L_7, (intptr_t)((intptr_t)U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStoreyA_U3CU3Em__0_m4F951A350C7D17C2137D4C5A6FA453658E4A8AD9_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m443758288B4A1840F7094DC17AA8B477789DE4B1_RuntimeMethod_var);
		NullCheck(L_6);
		Task_1_ContinueWith_m5878929A909CC4F23EABDDA4ADD8D02B423F226F(L_6, L_8, /*hidden argument*/Task_1_ContinueWith_m5878929A909CC4F23EABDDA4ADD8D02B423F226F_RuntimeMethod_var);
		U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStoreyA_t1CDA9CF4D4D6123216891015275FB6224BBBE7DB * L_9 = V_0;
		NullCheck(L_9);
		TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * L_10 = L_9->get_taskCompletionSource_0();
		NullCheck(L_10);
		Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * L_11 = TaskCompletionSource_1_get_Task_m5737E32C21EF62D2BAEC90727EE0C07AE314048A_inline(L_10, /*hidden argument*/TaskCompletionSource_1_get_Task_m5737E32C21EF62D2BAEC90727EE0C07AE314048A_RuntimeMethod_var);
		return L_11;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::CompleteFirebaseUserTask(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>,System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_CompleteFirebaseUserTask_m315CBA4018D118D2AA59795197247C55C893937B (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * ___task0, TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * ___taskCompletionSource1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_CompleteFirebaseUserTask_m315CBA4018D118D2AA59795197247C55C893937B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * L_0 = ___task0;
		NullCheck(L_0);
		bool L_1 = Task_get_IsCanceled_m42A47FCA2C6F33308A08C92C8489E802448F6F42(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * L_2 = ___taskCompletionSource1;
		NullCheck(L_2);
		TaskCompletionSource_1_SetCanceled_mE3F5C3030DDDD6497863D51BFF8DE0E710488330(L_2, /*hidden argument*/TaskCompletionSource_1_SetCanceled_mE3F5C3030DDDD6497863D51BFF8DE0E710488330_RuntimeMethod_var);
		goto IL_0044;
	}

IL_0016:
	{
		Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * L_3 = ___task0;
		NullCheck(L_3);
		bool L_4 = Task_get_IsFaulted_m7337D2694F4BF380C5B8893B4A924D7F0E762A48(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * L_5 = ___taskCompletionSource1;
		Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * L_6 = ___task0;
		NullCheck(L_6);
		AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E * L_7 = Task_get_Exception_mA61AAD3E52CBEB631D1956217B521456E7960B95(L_6, /*hidden argument*/NULL);
		TaskCompletionSourceCompat_1_SetException_mA18B9FD873E6D8CD5F4D2E34EAA3238B8323EACF(L_5, L_7, /*hidden argument*/TaskCompletionSourceCompat_1_SetException_mA18B9FD873E6D8CD5F4D2E34EAA3238B8323EACF_RuntimeMethod_var);
		goto IL_0044;
	}

IL_0032:
	{
		TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * L_8 = ___taskCompletionSource1;
		Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * L_9 = ___task0;
		NullCheck(L_9);
		FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_10 = Task_1_get_Result_m0A09B7D0EB3F2DFD0301991E1ED9EB5F39438956(L_9, /*hidden argument*/Task_1_get_Result_m0A09B7D0EB3F2DFD0301991E1ED9EB5F39438956_RuntimeMethod_var);
		FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_11 = FirebaseAuth_UpdateCurrentUser_mA01C3D9B857CEA48860F3A3202E0F821B6EDDC56(__this, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		TaskCompletionSource_1_SetResult_mF91EBA018EDCC766A8E0E3A36BF2C0DACEBF505A(L_8, L_11, /*hidden argument*/TaskCompletionSource_1_SetResult_mF91EBA018EDCC766A8E0E3A36BF2C0DACEBF505A_RuntimeMethod_var);
	}

IL_0044:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInWithEmailAndPasswordInternalAsync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * FirebaseAuth_SignInWithEmailAndPasswordInternalAsync_mA6617BD34AC8ADDBB74414D36CEA59FBC2F9583C (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, String_t* ___email0, String_t* ___password1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_SignInWithEmailAndPasswordInternalAsync_mA6617BD34AC8ADDBB74414D36CEA59FBC2F9583C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___email0;
		String_t* L_2 = ___password1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_il2cpp_TypeInfo_var);
		intptr_t L_3 = AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_SignInWithEmailAndPasswordInternal_mA401EDAA9777563060C677E3EF0D6F877A9D531B(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		bool L_4 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		Exception_t * L_5 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, FirebaseAuth_SignInWithEmailAndPasswordInternalAsync_mA6617BD34AC8ADDBB74414D36CEA59FBC2F9583C_RuntimeMethod_var);
	}

IL_001e:
	{
		intptr_t L_6 = V_0;
		Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * L_7 = (Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 *)il2cpp_codegen_object_new(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var);
		Future_User__ctor_m133F92BABB2A3D39B379DC2A4F79D551AE3FA3F4(L_7, (intptr_t)L_6, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var);
		Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * L_8 = Future_User_GetTask_m72CD84236E006E8EE1D965FDD586A7396BB387A4(L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::GetAuthInternal(Firebase.FirebaseApp,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * FirebaseAuth_GetAuthInternal_m991F675141BD681FACC432067B9FFFE76080B648 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, int32_t* ___init_result_out1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_GetAuthInternal_m991F675141BD681FACC432067B9FFFE76080B648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * V_2 = NULL;
	FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * G_B4_0 = NULL;
	{
		V_0 = 0;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		{
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = ___app0;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_1 = FirebaseApp_getCPtr_mF922A07C69469D0EB5A268A9278C495805BDCA4F(L_0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_il2cpp_TypeInfo_var);
			intptr_t L_2 = AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_GetAuthInternal_m4CB1D633D813357971B7AB38DF64C7AC5DE13E68(L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
			V_1 = (intptr_t)L_2;
			intptr_t L_3 = V_1;
			bool L_4 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0026;
			}
		}

IL_0020:
		{
			G_B4_0 = ((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D *)(NULL));
			goto IL_002d;
		}

IL_0026:
		{
			intptr_t L_5 = V_1;
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_6 = (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D *)il2cpp_codegen_object_new(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
			FirebaseAuth__ctor_m8AF94C141995F87831E56F9D99D947342BAA4314(L_6, (intptr_t)L_5, (bool)1, /*hidden argument*/NULL);
			G_B4_0 = L_6;
		}

IL_002d:
		{
			V_2 = G_B4_0;
			bool L_7 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_003e;
			}
		}

IL_0038:
		{
			Exception_t * L_8 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, FirebaseAuth_GetAuthInternal_m991F675141BD681FACC432067B9FFFE76080B648_RuntimeMethod_var);
		}

IL_003e:
		{
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_9 = V_2;
			V_3 = L_9;
			IL2CPP_LEAVE(0x49, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		int32_t* L_10 = ___init_result_out1;
		int32_t L_11 = V_0;
		*((int32_t*)L_10) = (int32_t)L_11;
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x49, IL_0049)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0049:
	{
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_12 = V_3;
		return L_12;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::ReleaseReferenceInternal(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ReleaseReferenceInternal_m64539F9A01E7E6DA690484EE011EDE20E1C9EEAE (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_ReleaseReferenceInternal_m64539F9A01E7E6DA690484EE011EDE20E1C9EEAE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_0 = ___instance0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_1 = FirebaseAuth_getCPtr_m6C01C8CED64BD48D5773ACDB8A6FA6221526FC61(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_ReleaseReferenceInternal_m263CD5445336938048D54721F2072483C6E36F1C(L_1, /*hidden argument*/NULL);
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseAuth_ReleaseReferenceInternal_m64539F9A01E7E6DA690484EE011EDE20E1C9EEAE_RuntimeMethod_var);
	}

IL_001b:
	{
		return;
	}
}
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUserInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * FirebaseAuth_get_CurrentUserInternal_m092235EE454060C1D4072405F645FDE428348529 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_get_CurrentUserInternal_m092235EE454060C1D4072405F645FDE428348529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * V_1 = NULL;
	FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * G_B3_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_il2cpp_TypeInfo_var);
		intptr_t L_1 = AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_CurrentUserInternal_get_m6DA9D3724EC4A35441E056C1B56AAC07860E244A(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		bool L_3 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		G_B3_0 = ((FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F *)(NULL));
		goto IL_0029;
	}

IL_0022:
	{
		intptr_t L_4 = V_0;
		FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_5 = (FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F *)il2cpp_codegen_object_new(FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F_il2cpp_TypeInfo_var);
		FirebaseUser__ctor_m6DFEA55A06B92329E1347151856EDD512388F0C3(L_5, (intptr_t)L_4, (bool)0, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_0029:
	{
		V_1 = G_B3_0;
		bool L_6 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		Exception_t * L_7 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, FirebaseAuth_get_CurrentUserInternal_m092235EE454060C1D4072405F645FDE428348529_RuntimeMethod_var);
	}

IL_003a:
	{
		FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_8 = V_1;
		return L_8;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth__cctor_m3A9DED4874354E90EF675E9D4D5E2544EC5874C1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth__cctor_m3A9DED4874354E90EF675E9D4D5E2544EC5874C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C * L_0 = (Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C *)il2cpp_codegen_object_new(Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m415F2D9C0DCD1E68BD176B96867ED8214094E797(L_0, /*hidden argument*/Dictionary_2__ctor_m415F2D9C0DCD1E68BD176B96867ED8214094E797_RuntimeMethod_var);
		((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var))->set_appCPtrToAuth_10(L_0);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::<StateChangedFunction>m__0(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_U3CStateChangedFunctionU3Em__0_mB81E8C1132A7E7E5BA57AAF42FFC5BF83D8183A8 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___auth0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_U3CStateChangedFunctionU3Em__0_mB81E8C1132A7E7E5BA57AAF42FFC5BF83D8183A8_MetadataUsageId);
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
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_0 = ___auth0;
		NullCheck(L_0);
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_1 = L_0->get_stateChangedImpl_7();
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
		Dictionary_2_tB40A856F46B0826E6C2C2EEAB85987056351FF5C * L_2 = ((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_0 = L_2;
		RuntimeObject * L_3 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_3, /*hidden argument*/NULL);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_4 = ___auth0;
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_5 = ___auth0;
		NullCheck(L_5);
		FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_6 = FirebaseAuth_get_CurrentUserInternal_m092235EE454060C1D4072405F645FDE428348529(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		FirebaseAuth_UpdateCurrentUser_mA01C3D9B857CEA48860F3A3202E0F821B6EDDC56(L_4, L_6, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x30, FINALLY_0029);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(41)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_JUMP_TBL(0x30, IL_0030)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0030:
	{
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_8 = ___auth0;
		NullCheck(L_8);
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_9 = L_8->get_stateChangedImpl_7();
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_10 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_11 = ((EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_9);
		EventHandler_Invoke_mD23D5EFEA562A05C5EACDD3E91EEDD2BF6C22800(L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_0041:
	{
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_12 = ___auth0;
		NullCheck(L_12);
		L_12->set_persistentLoaded_9((bool)1);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::<IdTokenChangedFunction>m__1(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_U3CIdTokenChangedFunctionU3Em__1_m81FC59CF805B3F2DBDB6F1AB98F202C9BF36AD9E (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___auth0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_U3CIdTokenChangedFunctionU3Em__1_m81FC59CF805B3F2DBDB6F1AB98F202C9BF36AD9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_0 = ___auth0;
		NullCheck(L_0);
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_1 = L_0->get_idTokenChangedImpl_8();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_2 = ___auth0;
		NullCheck(L_2);
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_3 = L_2->get_idTokenChangedImpl_8();
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_4 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_5 = ((EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_3);
		EventHandler_Invoke_mD23D5EFEA562A05C5EACDD3E91EEDD2BF6C22800(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607_il2cpp_TypeInfo_var);
		FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * L_6 = FirebaseAuthService_get_Instance_m23F18D0809F0B5EEC6CE02053988F1FC3E0EFCE8_inline(/*hidden argument*/NULL);
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_7 = ___auth0;
		NullCheck(L_6);
		FirebaseAuthService_OnIdTokenChanged_m2A4A76C0154C6FDD38B2D007EA2AAA1106893261(L_6, L_7, /*hidden argument*/NULL);
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
// System.Void Firebase.Auth.FirebaseAuth_<ForwardStateChange>c__AnonStorey3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForwardStateChangeU3Ec__AnonStorey3__ctor_m25A3D9ADE863C969716D4BA5153822A805608E80 (U3CForwardStateChangeU3Ec__AnonStorey3_t5C0E4F8E37A78F1A41077C11EC92E34302B38B18 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Firebase.Auth.FirebaseAuth_<ForwardStateChange>c__AnonStorey4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForwardStateChangeU3Ec__AnonStorey4__ctor_m76A61EB738DC6F2008BD0B716DBC945E64DCE7E2 (U3CForwardStateChangeU3Ec__AnonStorey4_tB01A3C627BA9158B9D7CA021320E971C0E0E51D3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth_<ForwardStateChange>c__AnonStorey4::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForwardStateChangeU3Ec__AnonStorey4_U3CU3Em__0_m970D40C949C46CD176F6E7BFE1B143A3478E5F1E (U3CForwardStateChangeU3Ec__AnonStorey4_tB01A3C627BA9158B9D7CA021320E971C0E0E51D3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CForwardStateChangeU3Ec__AnonStorey4_U3CU3Em__0_m970D40C949C46CD176F6E7BFE1B143A3478E5F1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CForwardStateChangeU3Ec__AnonStorey3_t5C0E4F8E37A78F1A41077C11EC92E34302B38B18 * L_0 = __this->get_U3CU3Ef__refU243_1();
		NullCheck(L_0);
		Action_1_tF36E5989E7282FD4D682A961BA72EC20B878D5D1 * L_1 = L_0->get_stateChangeClosure_0();
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_2 = __this->get_auth_0();
		NullCheck(L_1);
		Action_1_Invoke_m1DCC97F2F27C9990F2561B115DDB7D4A4C85E104(L_1, L_2, /*hidden argument*/Action_1_Invoke_m1DCC97F2F27C9990F2561B115DDB7D4A4C85E104_RuntimeMethod_var);
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
// System.Void Firebase.Auth.FirebaseAuth_<GetAuth>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAuthU3Ec__AnonStorey1__ctor_mBA21355AB25FFCCC2D53802270B3E17515DBA563 (U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Firebase.Auth.FirebaseAuth_<GetAuth>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAuthU3Ec__AnonStorey2__ctor_m8542E15471B018951EC00E562EF9F012A1168BAA (U3CGetAuthU3Ec__AnonStorey2_tB3DC969FB282B9CF462B6CC3BEA5E8CF31EF5431 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth_<GetAuth>c__AnonStorey2::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAuthU3Ec__AnonStorey2_U3CU3Em__0_m3670BECAF618C625DB828A099B54C9584C87F56F (U3CGetAuthU3Ec__AnonStorey2_tB3DC969FB282B9CF462B6CC3BEA5E8CF31EF5431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetAuthU3Ec__AnonStorey2_U3CU3Em__0_m3670BECAF618C625DB828A099B54C9584C87F56F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * L_0 = __this->get_U3CU3Ef__refU241_1();
		U3CGetAuthU3Ec__AnonStorey1_tB786C8CF7B582EF86002A1222B3D89E64B13E2E1 * L_1 = __this->get_U3CU3Ef__refU241_1();
		NullCheck(L_1);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_2 = L_1->get_app_0();
		int32_t* L_3 = __this->get_address_of_init_result_0();
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_4 = FirebaseAuth_GetAuthInternal_m991F675141BD681FACC432067B9FFFE76080B648(L_2, (int32_t*)L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_auth_1(L_4);
		int32_t L_5 = __this->get_init_result_0();
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = __this->get_init_result_0();
		InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 * L_7 = (InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098 *)il2cpp_codegen_object_new(InitializationException_t4950F6485639018AF98C04DD016B37F1745F8098_il2cpp_TypeInfo_var);
		InitializationException__ctor_m3BBD8A30C4B1757E8686AB762DBA7C7B6CB81591(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, U3CGetAuthU3Ec__AnonStorey2_U3CU3Em__0_m3670BECAF618C625DB828A099B54C9584C87F56F_RuntimeMethod_var);
	}

IL_0038:
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
// System.Void Firebase.Auth.FirebaseAuth_<SignInWithEmailAndPasswordAsync>c__AnonStoreyA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStoreyA__ctor_mEA510682AD6D6F450CD7778139B41DD915ACA274 (U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStoreyA_t1CDA9CF4D4D6123216891015275FB6224BBBE7DB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth_<SignInWithEmailAndPasswordAsync>c__AnonStoreyA::<>m__0(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStoreyA_U3CU3Em__0_m4F951A350C7D17C2137D4C5A6FA453658E4A8AD9 (U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStoreyA_t1CDA9CF4D4D6123216891015275FB6224BBBE7DB * __this, Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * ___task0, const RuntimeMethod* method)
{
	{
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_0 = __this->get_U24this_1();
		Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * L_1 = ___task0;
		TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * L_2 = __this->get_taskCompletionSource_0();
		NullCheck(L_0);
		FirebaseAuth_CompleteFirebaseUserTask_m315CBA4018D118D2AA59795197247C55C893937B(L_0, L_1, L_2, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E (StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * __this, intptr_t ___authCPtr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___authCPtr0);

}
// System.Void Firebase.Auth.FirebaseAuth_StateChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangedDelegate__ctor_m639C51AA8A08FD2E0F6012DC3B5B66990643A192 (StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.FirebaseAuth_StateChangedDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangedDelegate_Invoke_m01C597D9AEE5D2E1952E25CB8E492861AFC91CF2 (StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * __this, intptr_t ___authCPtr0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___authCPtr0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___authCPtr0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___authCPtr0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___authCPtr0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___authCPtr0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___authCPtr0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___authCPtr0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___authCPtr0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___authCPtr0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.FirebaseAuth_StateChangedDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateChangedDelegate_BeginInvoke_m0029F178AE08AE64C174030E932190B16E78495C (StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * __this, intptr_t ___authCPtr0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StateChangedDelegate_BeginInvoke_m0029F178AE08AE64C174030E932190B16E78495C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___authCPtr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.Auth.FirebaseAuth_StateChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangedDelegate_EndInvoke_m08533EF8F1208E0B84A76293BE16FE6F163FE386 (StateChangedDelegate_tBEC69F12308073FB231D82981E3B11FD1DD6485E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.Auth.FirebaseUser::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseUser__ctor_m6DFEA55A06B92329E1347151856EDD512388F0C3 (FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___cPtr0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_1), __this, (intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_swigCPtr_1(L_1);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseUser::getCPtr(Firebase.Auth.FirebaseUser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  FirebaseUser_getCPtr_mC2544D71AB72001C769868A7881BE36808B7056B (FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseUser_getCPtr_mC2544D71AB72001C769868A7881BE36808B7056B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_0 = ___obj0;
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
		FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_3 = L_2->get_swigCPtr_1();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Auth.FirebaseUser::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseUser_Finalize_m4AC1BC90086B2D177954E4895B1F8585EC87A10E (FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * __this, const RuntimeMethod* method)
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
		FirebaseUser_Dispose_m0D1CAF1B60964799A2B01FD38A3BB435C3D818A6(__this, /*hidden argument*/NULL);
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
// System.Void Firebase.Auth.FirebaseUser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseUser_Dispose_m0D1CAF1B60964799A2B01FD38A3BB435C3D818A6 (FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseUser_Dispose_m0D1CAF1B60964799A2B01FD38A3BB435C3D818A6_MetadataUsageId);
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
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A * L_2 = __this->get_address_of_swigCPtr_1();
			intptr_t L_3 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)L_2, /*hidden argument*/NULL);
			bool L_4 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0054;
			}
		}

IL_0026:
		{
			bool L_5 = __this->get_swigCMemOwn_0();
			if (!L_5)
			{
				goto IL_0043;
			}
		}

IL_0031:
		{
			__this->set_swigCMemOwn_0((bool)0);
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_6 = __this->get_swigCPtr_1();
			IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_il2cpp_TypeInfo_var);
			AuthUtilPINVOKE_Firebase_Auth_delete_FirebaseUser_m7A7717D42245FFA1A1F73C17C0A96B2BB2B63FC9(L_6, /*hidden argument*/NULL);
		}

IL_0043:
		{
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_1(L_7);
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
// System.Threading.Tasks.Task`1<System.String> Firebase.Auth.FirebaseUser::TokenAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * FirebaseUser_TokenAsync_mDC1EF843591C9E195FEF5C47B73A116A7013E6F5 (FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * __this, bool ___forceRefresh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseUser_TokenAsync_mDC1EF843591C9E195FEF5C47B73A116A7013E6F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_1();
		bool L_1 = ___forceRefresh0;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_il2cpp_TypeInfo_var);
		intptr_t L_2 = AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_Token_m05ACF06B467EA0CE661891FCCAEC9CF1870AD200(L_0, L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		bool L_3 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, FirebaseUser_TokenAsync_mDC1EF843591C9E195FEF5C47B73A116A7013E6F5_RuntimeMethod_var);
	}

IL_001d:
	{
		intptr_t L_5 = V_0;
		FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * L_6 = (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C *)il2cpp_codegen_object_new(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var);
		FutureString__ctor_m061489D0A1588D9DB38616FAB55A0BAD34485991(L_6, (intptr_t)L_5, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var);
		Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * L_7 = FutureString_GetTask_mE15192AC5EC101E6836F1F806E3CD9B91950B647(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.String Firebase.Auth.FirebaseUser::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseUser_get_DisplayName_m26CCE526611BAADC2E802B2CA8318A99021E950F (FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseUser_get_DisplayName_m26CCE526611BAADC2E802B2CA8318A99021E950F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_1();
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_il2cpp_TypeInfo_var);
		String_t* L_1 = AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_DisplayName_get_m91CB4E7B5AFAEE50C6E55F35CEACCA1BA8754B05(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseUser_get_DisplayName_m26CCE526611BAADC2E802B2CA8318A99021E950F_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Auth.FirebaseUser::get_Email()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseUser_get_Email_mDE164719166E94093DC423C192DE01D9AFD3D404 (FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseUser_get_Email_mDE164719166E94093DC423C192DE01D9AFD3D404_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_1();
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_il2cpp_TypeInfo_var);
		String_t* L_1 = AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_Email_get_m23BF377A82BE5C2C788AB061427E8E46BD217E36(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseUser_get_Email_mDE164719166E94093DC423C192DE01D9AFD3D404_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Auth.FirebaseUser::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseUser_get_UserId_m23E924FD00D362216B74119CC1AD90784BAA6420 (FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseUser_get_UserId_m23E924FD00D362216B74119CC1AD90784BAA6420_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_1();
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_il2cpp_TypeInfo_var);
		String_t* L_1 = AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_UserId_get_m0E07D7A93CFFFF121443ED7EF8CC63492074AFB5(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseUser_get_UserId_m23E924FD00D362216B74119CC1AD90784BAA6420_RuntimeMethod_var);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Future_User_SWIG_CompletionDispatcher_m0A63943327FCEEFD0E5125F459C94DC6E6FFBF88(int32_t ___key0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Future_User_SWIG_CompletionDispatcher_m0A63943327FCEEFD0E5125F459C94DC6E6FFBF88(___key0, NULL);

}
// System.Void Firebase.Auth.Future_User::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User__ctor_m133F92BABB2A3D39B379DC2A4F79D551AE3FA3F4 (Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_User__ctor_m133F92BABB2A3D39B379DC2A4F79D551AE3FA3F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_callbackData_6((intptr_t)(0));
		intptr_t L_0 = ___cPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_il2cpp_TypeInfo_var);
		intptr_t L_1 = AuthUtilPINVOKE_Firebase_Auth_Future_User_SWIGUpcast_m809DB4BFCF812C527A34544C23BE7AC06621714C((intptr_t)L_0, /*hidden argument*/NULL);
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
// System.Void Firebase.Auth.Future_User::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_Finalize_m019624D723631AE82F9B2EACD75BD4EDCE27AD6F (Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * __this, const RuntimeMethod* method)
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
// System.Void Firebase.Auth.Future_User::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_Dispose_m342A80815D5500FDF6ACD8861BDF59A2619AD108 (Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_User_Dispose_m342A80815D5500FDF6ACD8861BDF59A2619AD108_MetadataUsageId);
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
			Future_User_SetCompletionData_m6C2AC58C7943A836A0C9AEBBF63A94C84D11708F(__this, (intptr_t)(0), /*hidden argument*/NULL);
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
			IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_il2cpp_TypeInfo_var);
			AuthUtilPINVOKE_Firebase_Auth_delete_Future_User_m8EF3BE70AB09F0B88620CE68017B875ED86E5D3E(L_6, /*hidden argument*/NULL);
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
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.Future_User::GetTask(Firebase.Auth.Future_User)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * Future_User_GetTask_m72CD84236E006E8EE1D965FDD586A7396BB387A4 (Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * ___fu0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_User_GetTask_m72CD84236E006E8EE1D965FDD586A7396BB387A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetTaskU3Ec__AnonStorey0_tD24E1032A29E54F4EE7D42C4A7983F95BA52F014 * V_0 = NULL;
	{
		U3CGetTaskU3Ec__AnonStorey0_tD24E1032A29E54F4EE7D42C4A7983F95BA52F014 * L_0 = (U3CGetTaskU3Ec__AnonStorey0_tD24E1032A29E54F4EE7D42C4A7983F95BA52F014 *)il2cpp_codegen_object_new(U3CGetTaskU3Ec__AnonStorey0_tD24E1032A29E54F4EE7D42C4A7983F95BA52F014_il2cpp_TypeInfo_var);
		U3CGetTaskU3Ec__AnonStorey0__ctor_mD3E5AA8FD1B6071DB8A2414BC7D6D0C5D94ECA80(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetTaskU3Ec__AnonStorey0_tD24E1032A29E54F4EE7D42C4A7983F95BA52F014 * L_1 = V_0;
		Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * L_2 = ___fu0;
		NullCheck(L_1);
		L_1->set_fu_0(L_2);
		U3CGetTaskU3Ec__AnonStorey0_tD24E1032A29E54F4EE7D42C4A7983F95BA52F014 * L_3 = V_0;
		TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * L_4 = (TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m98B20A73B661A2B763A764995A30A2601B347EB0(L_4, /*hidden argument*/TaskCompletionSource_1__ctor_m98B20A73B661A2B763A764995A30A2601B347EB0_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->set_tcs_1(L_4);
		U3CGetTaskU3Ec__AnonStorey0_tD24E1032A29E54F4EE7D42C4A7983F95BA52F014 * L_5 = V_0;
		NullCheck(L_5);
		Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * L_6 = L_5->get_fu_0();
		NullCheck(L_6);
		int32_t L_7 = FutureBase_status_mD675FFD3FAE10D36169C16590EE3C6F1861DD136(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_004b;
		}
	}
	{
		U3CGetTaskU3Ec__AnonStorey0_tD24E1032A29E54F4EE7D42C4A7983F95BA52F014 * L_8 = V_0;
		NullCheck(L_8);
		TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * L_9 = L_8->get_tcs_1();
		FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF * L_10 = (FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF *)il2cpp_codegen_object_new(FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF_il2cpp_TypeInfo_var);
		FirebaseException__ctor_mB31E783657F428BA72B055DF8A4CE6EA6996996C(L_10, 0, _stringLiteralF3368570EE5DB7FA93890C049EB03DD764108E6C, /*hidden argument*/NULL);
		NullCheck(L_9);
		TaskCompletionSource_1_SetException_mBF8838EC77A9A6BB5281E83B09A9DC7957BC8D36(L_9, L_10, /*hidden argument*/TaskCompletionSource_1_SetException_mBF8838EC77A9A6BB5281E83B09A9DC7957BC8D36_RuntimeMethod_var);
		U3CGetTaskU3Ec__AnonStorey0_tD24E1032A29E54F4EE7D42C4A7983F95BA52F014 * L_11 = V_0;
		NullCheck(L_11);
		TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * L_12 = L_11->get_tcs_1();
		NullCheck(L_12);
		Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * L_13 = TaskCompletionSource_1_get_Task_m5737E32C21EF62D2BAEC90727EE0C07AE314048A_inline(L_12, /*hidden argument*/TaskCompletionSource_1_get_Task_m5737E32C21EF62D2BAEC90727EE0C07AE314048A_RuntimeMethod_var);
		return L_13;
	}

IL_004b:
	{
		U3CGetTaskU3Ec__AnonStorey0_tD24E1032A29E54F4EE7D42C4A7983F95BA52F014 * L_14 = V_0;
		NullCheck(L_14);
		Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * L_15 = L_14->get_fu_0();
		U3CGetTaskU3Ec__AnonStorey0_tD24E1032A29E54F4EE7D42C4A7983F95BA52F014 * L_16 = V_0;
		Action_tA440A205A18F955C2A59F01FA561405F864C62C1 * L_17 = (Action_tA440A205A18F955C2A59F01FA561405F864C62C1 *)il2cpp_codegen_object_new(Action_tA440A205A18F955C2A59F01FA561405F864C62C1_il2cpp_TypeInfo_var);
		Action__ctor_m5B9D0FFC485604CE15696B0DEF18F1F487C7E115(L_17, L_16, (intptr_t)((intptr_t)U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m07967C26A0CB0CFD44D6AFB4B7A88E1E10A3A581_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		Future_User_SetOnCompletionCallback_m93B162D56DC8E7686F9ED6F6CD2AD50D673BEB4F(L_15, L_17, /*hidden argument*/NULL);
		U3CGetTaskU3Ec__AnonStorey0_tD24E1032A29E54F4EE7D42C4A7983F95BA52F014 * L_18 = V_0;
		NullCheck(L_18);
		TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * L_19 = L_18->get_tcs_1();
		NullCheck(L_19);
		Task_1_t3429A2424E445229EA1EE809BBDAC19C780329E2 * L_20 = TaskCompletionSource_1_get_Task_m5737E32C21EF62D2BAEC90727EE0C07AE314048A_inline(L_19, /*hidden argument*/TaskCompletionSource_1_get_Task_m5737E32C21EF62D2BAEC90727EE0C07AE314048A_RuntimeMethod_var);
		return L_20;
	}
}
// System.Void Firebase.Auth.Future_User::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_ThrowIfDisposed_m382E2329EEE8F3CA03F2686B026F8FB6013DFAC2 (Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_User_ThrowIfDisposed_m382E2329EEE8F3CA03F2686B026F8FB6013DFAC2_MetadataUsageId);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Future_User_ThrowIfDisposed_m382E2329EEE8F3CA03F2686B026F8FB6013DFAC2_RuntimeMethod_var);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Firebase.Auth.Future_User::SetOnCompletionCallback(Firebase.Auth.Future_User_Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SetOnCompletionCallback_m93B162D56DC8E7686F9ED6F6CD2AD50D673BEB4F (Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * __this, Action_tA440A205A18F955C2A59F01FA561405F864C62C1 * ___userCompletionCallback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_User_SetOnCompletionCallback_m93B162D56DC8E7686F9ED6F6CD2AD50D673BEB4F_MetadataUsageId);
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
		Future_User_ThrowIfDisposed_m382E2329EEE8F3CA03F2686B026F8FB6013DFAC2(__this, /*hidden argument*/NULL);
		SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1 * L_0 = __this->get_SWIG_CompletionCB_7();
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1 * L_1 = (SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1 *)il2cpp_codegen_object_new(SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1_il2cpp_TypeInfo_var);
		SWIG_CompletionDelegate__ctor_m7BA9DBE465148B0F4C15D33A19A1655A3C8E211B(L_1, NULL, (intptr_t)((intptr_t)Future_User_SWIG_CompletionDispatcher_m0A63943327FCEEFD0E5125F459C94DC6E6FFBF88_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_SWIG_CompletionCB_7(L_1);
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var);
		RuntimeObject * L_2 = ((Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_2;
		RuntimeObject * L_3 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_3, /*hidden argument*/NULL);
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var);
			Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D * L_4 = ((Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (L_4)
			{
				goto IL_0043;
			}
		}

IL_0039:
		{
			Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D * L_5 = (Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D *)il2cpp_codegen_object_new(Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_mB844EAEE5D4EEE3ED0E007FE7CE8C308BF15D1FC(L_5, /*hidden argument*/Dictionary_2__ctor_mB844EAEE5D4EEE3ED0E007FE7CE8C308BF15D1FC_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var);
			((Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var))->set_Callbacks_3(L_5);
		}

IL_0043:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var);
			int32_t L_6 = ((Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var))->get_CallbackIndex_4();
			int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
			((Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var))->set_CallbackIndex_4(L_7);
			V_0 = L_7;
			Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D * L_8 = ((Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_9 = V_0;
			Action_tA440A205A18F955C2A59F01FA561405F864C62C1 * L_10 = ___userCompletionCallback0;
			NullCheck(L_8);
			Dictionary_2_set_Item_m8C05EA2FF5DEB58945DC0336A0C990521F3E08CD(L_8, L_9, L_10, /*hidden argument*/Dictionary_2_set_Item_m8C05EA2FF5DEB58945DC0336A0C990521F3E08CD_RuntimeMethod_var);
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
		SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1 * L_12 = __this->get_SWIG_CompletionCB_7();
		int32_t L_13 = V_0;
		intptr_t L_14 = Future_User_SWIG_OnCompletion_mEE8017ED9DF06FC970B5258FE8F44BE620933CF7(__this, L_12, L_13, /*hidden argument*/NULL);
		Future_User_SetCompletionData_m6C2AC58C7943A836A0C9AEBBF63A94C84D11708F(__this, (intptr_t)L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.Future_User::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SetCompletionData_m6C2AC58C7943A836A0C9AEBBF63A94C84D11708F (Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	{
		Future_User_ThrowIfDisposed_m382E2329EEE8F3CA03F2686B026F8FB6013DFAC2(__this, /*hidden argument*/NULL);
		intptr_t L_0 = __this->get_callbackData_6();
		Future_User_SWIG_FreeCompletionData_m6DA6D5179749F401390CC7F45181D39DD4C28CE5(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		intptr_t L_1 = ___data0;
		__this->set_callbackData_6((intptr_t)L_1);
		return;
	}
}
// System.Void Firebase.Auth.Future_User::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SWIG_CompletionDispatcher_m0A63943327FCEEFD0E5125F459C94DC6E6FFBF88 (int32_t ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_User_SWIG_CompletionDispatcher_m0A63943327FCEEFD0E5125F459C94DC6E6FFBF88_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_tA440A205A18F955C2A59F01FA561405F864C62C1 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (Action_tA440A205A18F955C2A59F01FA561405F864C62C1 *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var);
			Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D * L_2 = ((Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (!L_2)
			{
				goto IL_0036;
			}
		}

IL_0018:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var);
			Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D * L_3 = ((Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_4 = ___key0;
			NullCheck(L_3);
			bool L_5 = Dictionary_2_TryGetValue_mE0A032DAADDA022FD66213A9EF29D60B1B386356(L_3, L_4, (Action_tA440A205A18F955C2A59F01FA561405F864C62C1 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mE0A032DAADDA022FD66213A9EF29D60B1B386356_RuntimeMethod_var);
			if (!L_5)
			{
				goto IL_0036;
			}
		}

IL_002a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var);
			Dictionary_2_t1F69E9B0F98558F53AB8D4F0BED11A601B04373D * L_6 = ((Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_7 = ___key0;
			NullCheck(L_6);
			Dictionary_2_Remove_m7DB724888A431B8BE8E50B43222AF9EF77E34E72(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m7DB724888A431B8BE8E50B43222AF9EF77E34E72_RuntimeMethod_var);
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
		Action_tA440A205A18F955C2A59F01FA561405F864C62C1 * L_9 = V_0;
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		Action_tA440A205A18F955C2A59F01FA561405F864C62C1 * L_10 = V_0;
		NullCheck(L_10);
		Action_Invoke_m71673E78F749863C140FD9547CBDEAF502309B3C(L_10, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.IntPtr Firebase.Auth.Future_User::SWIG_OnCompletion(Firebase.Auth.Future_User_SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_User_SWIG_OnCompletion_mEE8017ED9DF06FC970B5258FE8F44BE620933CF7 (Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * __this, SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1 * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_User_SWIG_OnCompletion_mEE8017ED9DF06FC970B5258FE8F44BE620933CF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_2();
		SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1 * L_1 = ___cs_callback0;
		int32_t L_2 = ___cs_key1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_il2cpp_TypeInfo_var);
		intptr_t L_3 = AuthUtilPINVOKE_Firebase_Auth_Future_User_SWIG_OnCompletion_m7B2924F52240CDA00FB2D682C5226D155041EFFD(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		bool L_4 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		Exception_t * L_5 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, Future_User_SWIG_OnCompletion_mEE8017ED9DF06FC970B5258FE8F44BE620933CF7_RuntimeMethod_var);
	}

IL_001e:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.Void Firebase.Auth.Future_User::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SWIG_FreeCompletionData_m6DA6D5179749F401390CC7F45181D39DD4C28CE5 (Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_User_SWIG_FreeCompletionData_m6DA6D5179749F401390CC7F45181D39DD4C28CE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_2();
		intptr_t L_1 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_Firebase_Auth_Future_User_SWIG_FreeCompletionData_mEA8EF87590FAA3DF14728C00B857FAD6ED345B86(L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Future_User_SWIG_FreeCompletionData_m6DA6D5179749F401390CC7F45181D39DD4C28CE5_RuntimeMethod_var);
	}

IL_001c:
	{
		return;
	}
}
// Firebase.Auth.FirebaseUser Firebase.Auth.Future_User::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * Future_User_GetResult_m47B8754EDDAC710540B74A154A72DFFE30E86AA6 (Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_User_GetResult_m47B8754EDDAC710540B74A154A72DFFE30E86AA6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * V_1 = NULL;
	FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * G_B3_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tBE5F5AD289DC26855BBAFF035ED5511E4CAC155B_il2cpp_TypeInfo_var);
		intptr_t L_1 = AuthUtilPINVOKE_Firebase_Auth_Future_User_GetResult_mAFF2CB69F40FAAF9E7F78AFA831749C00B175A41(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		bool L_3 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		G_B3_0 = ((FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F *)(NULL));
		goto IL_0029;
	}

IL_0022:
	{
		intptr_t L_4 = V_0;
		FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_5 = (FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F *)il2cpp_codegen_object_new(FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F_il2cpp_TypeInfo_var);
		FirebaseUser__ctor_m6DFEA55A06B92329E1347151856EDD512388F0C3(L_5, (intptr_t)L_4, (bool)0, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_0029:
	{
		V_1 = G_B3_0;
		bool L_6 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		Exception_t * L_7 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, Future_User_GetResult_m47B8754EDDAC710540B74A154A72DFFE30E86AA6_RuntimeMethod_var);
	}

IL_003a:
	{
		FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_8 = V_1;
		return L_8;
	}
}
// System.Void Firebase.Auth.Future_User::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User__cctor_mA57142807E1A2D75B083003EC7280CAC095AD97B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_User__cctor_mA57142807E1A2D75B083003EC7280CAC095AD97B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var))->set_CallbackIndex_4(0);
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		((Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6_il2cpp_TypeInfo_var))->set_CallbackLock_5(L_0);
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
// System.Void Firebase.Auth.Future_User_<GetTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0__ctor_mD3E5AA8FD1B6071DB8A2414BC7D6D0C5D94ECA80 (U3CGetTaskU3Ec__AnonStorey0_tD24E1032A29E54F4EE7D42C4A7983F95BA52F014 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.Future_User_<GetTask>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m07967C26A0CB0CFD44D6AFB4B7A88E1E10A3A581 (U3CGetTaskU3Ec__AnonStorey0_tD24E1032A29E54F4EE7D42C4A7983F95BA52F014 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m07967C26A0CB0CFD44D6AFB4B7A88E1E10A3A581_MetadataUsageId);
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
			Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * L_0 = __this->get_fu_0();
			NullCheck(L_0);
			int32_t L_1 = FutureBase_status_mD675FFD3FAE10D36169C16590EE3C6F1861DD136(L_0, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_1) == ((uint32_t)2))))
			{
				goto IL_0021;
			}
		}

IL_0011:
		{
			TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * L_2 = __this->get_tcs_1();
			NullCheck(L_2);
			TaskCompletionSource_1_SetCanceled_mE3F5C3030DDDD6497863D51BFF8DE0E710488330(L_2, /*hidden argument*/TaskCompletionSource_1_SetCanceled_mE3F5C3030DDDD6497863D51BFF8DE0E710488330_RuntimeMethod_var);
			goto IL_006a;
		}

IL_0021:
		{
			Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * L_3 = __this->get_fu_0();
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
			TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * L_6 = __this->get_tcs_1();
			int32_t L_7 = V_0;
			Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * L_8 = __this->get_fu_0();
			NullCheck(L_8);
			String_t* L_9 = FutureBase_error_message_m12EFFA84132AB25450D3D3F349A414EF597CCCE3(L_8, /*hidden argument*/NULL);
			FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF * L_10 = (FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF *)il2cpp_codegen_object_new(FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF_il2cpp_TypeInfo_var);
			FirebaseException__ctor_mB31E783657F428BA72B055DF8A4CE6EA6996996C(L_10, L_7, L_9, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskCompletionSource_1_SetException_mBF8838EC77A9A6BB5281E83B09A9DC7957BC8D36(L_6, L_10, /*hidden argument*/TaskCompletionSource_1_SetException_mBF8838EC77A9A6BB5281E83B09A9DC7957BC8D36_RuntimeMethod_var);
			goto IL_006a;
		}

IL_0054:
		{
			TaskCompletionSource_1_t6760FF1A5EC297B94BA2FE0BE3644BDA281C2C10 * L_11 = __this->get_tcs_1();
			Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * L_12 = __this->get_fu_0();
			NullCheck(L_12);
			FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_13 = Future_User_GetResult_m47B8754EDDAC710540B74A154A72DFFE30E86AA6(L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			TaskCompletionSource_1_SetResult_mF91EBA018EDCC766A8E0E3A36BF2C0DACEBF505A(L_11, L_13, /*hidden argument*/TaskCompletionSource_1_SetResult_mF91EBA018EDCC766A8E0E3A36BF2C0DACEBF505A_RuntimeMethod_var);
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
		Future_User_t234C929BBCCFFEDA9D477144B982F3EAE08A21B6 * L_16 = __this->get_fu_0();
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Action_tA440A205A18F955C2A59F01FA561405F864C62C1 (Action_tA440A205A18F955C2A59F01FA561405F864C62C1 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Firebase.Auth.Future_User_Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m5B9D0FFC485604CE15696B0DEF18F1F487C7E115 (Action_tA440A205A18F955C2A59F01FA561405F864C62C1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.Future_User_Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m71673E78F749863C140FD9547CBDEAF502309B3C (Action_tA440A205A18F955C2A59F01FA561405F864C62C1 * __this, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.Auth.Future_User_Action::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Action_BeginInvoke_m4E410AA2DD1F47304EFF0CF87BA6DD9F76320557 (Action_tA440A205A18F955C2A59F01FA561405F864C62C1 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Firebase.Auth.Future_User_Action::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_EndInvoke_m917AEB429D92F6A7DA17710DD8D156694790E2B3 (Action_tA440A205A18F955C2A59F01FA561405F864C62C1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1 (SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___index0);

}
// System.Void Firebase.Auth.Future_User_SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_m7BA9DBE465148B0F4C15D33A19A1655A3C8E211B (SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.Future_User_SWIG_CompletionDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_Invoke_mEA1A51EE58786582CF7201343B084B292122B798 (SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1 * __this, int32_t ___index0, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.Auth.Future_User_SWIG_CompletionDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIG_CompletionDelegate_BeginInvoke_m64EA5A1D844E60CC65209902949534E0A3E16B97 (SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1 * __this, int32_t ___index0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIG_CompletionDelegate_BeginInvoke_m64EA5A1D844E60CC65209902949534E0A3E16B97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___index0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.Auth.Future_User_SWIG_CompletionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_EndInvoke_m460FD0C6A1F9A25F7FD7342C61353FE095CCBAF3 (SWIG_CompletionDelegate_t600F03EEFA1153C84AA4DC1B17BE0BAE732014F1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.Unity.FirebaseAuthService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuthService__ctor_mE78BB63B4E947C5DA75F46FDA9BCBCED80DD416D (FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuthService__ctor_mE78BB63B4E947C5DA75F46FDA9BCBCED80DD416D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_TOKEN_REFRESH_PERIOD_SECONDS_2((3480.0f));
		Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B * L_0 = (Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B *)il2cpp_codegen_object_new(Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mBF2C82CF3BAB93C78C55FF7D056AF268619521E2(L_0, /*hidden argument*/Dictionary_2__ctor_mBF2C82CF3BAB93C78C55FF7D056AF268619521E2_RuntimeMethod_var);
		__this->set_userRefreshStateByAuthCPtr_3(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(BaseAuthService_t77202DD950C9079AAB904A74B96F06FFB8E9DA11_il2cpp_TypeInfo_var);
		BaseAuthService__ctor_m7F9F1EFFAB9D91C1887DAEC04ABFA1542DB0A91E(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_il2cpp_TypeInfo_var);
		FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C * L_1 = FirebaseHandler_get_DefaultInstance_mDE47F7545F78ED4AAA09566895610B8DD8A6FE02_inline(/*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_2 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_2, __this, (intptr_t)((intptr_t)FirebaseAuthService_RefreshExpiredTokens_mE95018A6B6AF3F73EA84DBFAFA00AC8FF2746361_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_1);
		FirebaseHandler_add_Updated_m05AB5BD22EF8D749BBAF334E79DE61DA98BB0C17(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Unity.FirebaseAuthService Firebase.Unity.FirebaseAuthService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * FirebaseAuthService_get_Instance_m23F18D0809F0B5EEC6CE02053988F1FC3E0EFCE8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuthService_get_Instance_m23F18D0809F0B5EEC6CE02053988F1FC3E0EFCE8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607_il2cpp_TypeInfo_var);
		FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * L_0 = ((FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607_il2cpp_TypeInfo_var))->get__instance_1();
		return L_0;
	}
}
// System.Void Firebase.Unity.FirebaseAuthService::StopTokenRefresh(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuthService_StopTokenRefresh_mB0BD65E8FD518AA0A4E684C7D8E631C1121B4734 (FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * __this, intptr_t ___authCPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuthService_StopTokenRefresh_mB0BD65E8FD518AA0A4E684C7D8E631C1121B4734_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * V_1 = NULL;
	FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B * L_0 = __this->get_userRefreshStateByAuthCPtr_3();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B * L_2 = __this->get_userRefreshStateByAuthCPtr_3();
			intptr_t L_3 = ___authCPtr0;
			NullCheck(L_2);
			bool L_4 = Dictionary_2_TryGetValue_m2222DC21B8D6E147D0DF6C4A8262A0EF72D4ED42(L_2, (intptr_t)L_3, (UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m2222DC21B8D6E147D0DF6C4A8262A0EF72D4ED42_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_005f;
			}
		}

IL_0020:
		{
			Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B * L_5 = __this->get_userRefreshStateByAuthCPtr_3();
			intptr_t L_6 = ___authCPtr0;
			NullCheck(L_5);
			Dictionary_2_Remove_m3F480A8262B375B4BFFE42588D0E845504CA5C98(L_5, (intptr_t)L_6, /*hidden argument*/Dictionary_2_Remove_m3F480A8262B375B4BFFE42588D0E845504CA5C98_RuntimeMethod_var);
			UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * L_7 = V_1;
			NullCheck(L_7);
			WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * L_8 = L_7->get_auth_0();
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			RuntimeObject * L_9 = FirebaseApp_WeakReferenceGetTarget_mC676B673AB674077A1A40272E96E51C5A25DC30A(L_8, /*hidden argument*/NULL);
			V_2 = ((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D *)IsInstSealed((RuntimeObject*)L_9, FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var));
			intptr_t L_10 = ___authCPtr0;
			int64_t L_11 = IntPtr_op_Explicit_m254924E8680FCCF870F18064DC0B114445B09172((intptr_t)L_10, /*hidden argument*/NULL);
			int64_t L_12 = L_11;
			RuntimeObject * L_13 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_12);
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_14 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607_il2cpp_TypeInfo_var);
			String_t* L_15 = FirebaseAuthService_GetAppName_m5453B576FEBCEC66022EA8AA2BAB4F9BE1F969E5(L_14, /*hidden argument*/NULL);
			String_t* L_16 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralA8EE0C528932D0A70FFB4E8D7CAEC1E2C7BC69D4, L_13, L_15, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var);
			LogUtil_LogMessage_mE0D4736B7C636462B2AD246F65EFAF5F1785822F(1, L_16, /*hidden argument*/NULL);
		}

IL_005f:
		{
			IL2CPP_LEAVE(0x6B, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		RuntimeObject * L_17 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_17, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(100)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_JUMP_TBL(0x6B, IL_006b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006b:
	{
		return;
	}
}
// System.Void Firebase.Unity.FirebaseAuthService::OnAuthDisposed(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuthService_OnAuthDisposed_m65997F23F79BD13B7288AFE44DB9EC650A3120D8 (FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * __this, intptr_t ___authCPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___authCPtr0;
		FirebaseAuthService_StopTokenRefresh_mB0BD65E8FD518AA0A4E684C7D8E631C1121B4734(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Unity.FirebaseAuthService::OnIdTokenChanged(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuthService_OnIdTokenChanged_m2A4A76C0154C6FDD38B2D007EA2AAA1106893261 (FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * __this, FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___auth0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuthService_OnIdTokenChanged_m2A4A76C0154C6FDD38B2D007EA2AAA1106893261_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B * L_0 = __this->get_userRefreshStateByAuthCPtr_3();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_2 = ___auth0;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var);
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_3 = FirebaseAuth_getCPtr_m6C01C8CED64BD48D5773ACDB8A6FA6221526FC61(L_2, /*hidden argument*/NULL);
			V_2 = L_3;
			intptr_t L_4 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)(&V_2), /*hidden argument*/NULL);
			V_1 = (intptr_t)L_4;
			Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B * L_5 = __this->get_userRefreshStateByAuthCPtr_3();
			intptr_t L_6 = V_1;
			NullCheck(L_5);
			bool L_7 = Dictionary_2_TryGetValue_m2222DC21B8D6E147D0DF6C4A8262A0EF72D4ED42(L_5, (intptr_t)L_6, (UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 **)(&V_3), /*hidden argument*/Dictionary_2_TryGetValue_m2222DC21B8D6E147D0DF6C4A8262A0EF72D4ED42_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0049;
			}
		}

IL_002f:
		{
			UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * L_8 = (UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 *)il2cpp_codegen_object_new(UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11_il2cpp_TypeInfo_var);
			UserRefreshState__ctor_m3E573C9238B5D089F790E9801F65611DE9B2EF80(L_8, /*hidden argument*/NULL);
			V_3 = L_8;
			UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * L_9 = V_3;
			NullCheck(L_9);
			L_9->set_forceRefresh_3((bool)1);
			Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B * L_10 = __this->get_userRefreshStateByAuthCPtr_3();
			intptr_t L_11 = V_1;
			UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * L_12 = V_3;
			NullCheck(L_10);
			Dictionary_2_set_Item_m5AC28990964DAEFDC2F7FBCB135923C5E74E1BDA(L_10, (intptr_t)L_11, L_12, /*hidden argument*/Dictionary_2_set_Item_m5AC28990964DAEFDC2F7FBCB135923C5E74E1BDA_RuntimeMethod_var);
		}

IL_0049:
		{
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_13 = ___auth0;
			NullCheck(L_13);
			FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_14 = FirebaseAuth_get_CurrentUser_m9F6B70352053BEA7DA757C4947DB575F435C1596(L_13, /*hidden argument*/NULL);
			if (L_14)
			{
				goto IL_006e;
			}
		}

IL_0054:
		{
			intptr_t L_15 = V_1;
			FirebaseAuthService_StopTokenRefresh_mB0BD65E8FD518AA0A4E684C7D8E631C1121B4734(__this, (intptr_t)L_15, /*hidden argument*/NULL);
			UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * L_16 = V_3;
			NullCheck(L_16);
			L_16->set_auth_0((WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D *)NULL);
			UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * L_17 = V_3;
			NullCheck(L_17);
			L_17->set_user_1((WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D *)NULL);
			goto IL_00b9;
		}

IL_006e:
		{
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_18 = ___auth0;
			NullCheck(L_18);
			FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_19 = FirebaseAuth_get_CurrentUser_m9F6B70352053BEA7DA757C4947DB575F435C1596(L_18, /*hidden argument*/NULL);
			NullCheck(L_19);
			String_t* L_20 = FirebaseUser_get_UserId_m23E924FD00D362216B74119CC1AD90784BAA6420(L_19, /*hidden argument*/NULL);
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_21 = ___auth0;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607_il2cpp_TypeInfo_var);
			String_t* L_22 = FirebaseAuthService_GetAppName_m5453B576FEBCEC66022EA8AA2BAB4F9BE1F969E5(L_21, /*hidden argument*/NULL);
			String_t* L_23 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral1ADF25FEC94DB64FD75DB0A086C108CA09C1429F, L_20, L_22, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var);
			LogUtil_LogMessage_mE0D4736B7C636462B2AD246F65EFAF5F1785822F(1, L_23, /*hidden argument*/NULL);
			UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * L_24 = V_3;
			float L_25 = PlatformInformation_get_RealtimeSinceStartupSafe_mAE1E03781FD2AF4582A35355613D890863517663_inline(/*hidden argument*/NULL);
			NullCheck(L_24);
			L_24->set_lastTokenRefreshTime_2(L_25);
			UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * L_26 = V_3;
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_27 = ___auth0;
			WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * L_28 = (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D *)il2cpp_codegen_object_new(WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D_il2cpp_TypeInfo_var);
			WeakReference__ctor_m55A06AD20FF65C11015FFBE5FF31F2E7B1656E20(L_28, L_27, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_26);
			L_26->set_auth_0(L_28);
			UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * L_29 = V_3;
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_30 = ___auth0;
			NullCheck(L_30);
			FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_31 = FirebaseAuth_get_CurrentUser_m9F6B70352053BEA7DA757C4947DB575F435C1596(L_30, /*hidden argument*/NULL);
			WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * L_32 = (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D *)il2cpp_codegen_object_new(WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D_il2cpp_TypeInfo_var);
			WeakReference__ctor_m55A06AD20FF65C11015FFBE5FF31F2E7B1656E20(L_32, L_31, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_29);
			L_29->set_user_1(L_32);
		}

IL_00b9:
		{
			IL2CPP_LEAVE(0xC5, FINALLY_00be);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00be;
	}

FINALLY_00be:
	{ // begin finally (depth: 1)
		RuntimeObject * L_33 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_33, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(190)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(190)
	{
		IL2CPP_JUMP_TBL(0xC5, IL_00c5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00c5:
	{
		return;
	}
}
// System.Void Firebase.Unity.FirebaseAuthService::RefreshExpiredTokens(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuthService_RefreshExpiredTokens_mE95018A6B6AF3F73EA84DBFAFA00AC8FF2746361 (FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___eventArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuthService_RefreshExpiredTokens_mE95018A6B6AF3F73EA84DBFAFA00AC8FF2746361_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * V_2 = NULL;
	Enumerator_t92A2AD535503FDD7C99F882682C1CF65B8730601  V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 * V_4 = NULL;
	KeyValuePair_2_t24D6A2A5E7A3E6DF10CFC71A78E5723080779687  V_5;
	memset((&V_5), 0, sizeof(V_5));
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * V_7 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_8 = NULL;
	Enumerator_tA518899C189EFD03940570E1AEAC9AA9C766F663  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98 * L_0 = (U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98 *)il2cpp_codegen_object_new(U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98_il2cpp_TypeInfo_var);
		U3CRefreshExpiredTokensU3Ec__AnonStorey1__ctor_mDD2DFCCA85AB37FEEE3405B4BC525235394BAB8F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_1(__this);
		U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98 * L_2 = V_0;
		float L_3 = PlatformInformation_get_RealtimeSinceStartupSafe_mAE1E03781FD2AF4582A35355613D890863517663_inline(/*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_now_0(L_3);
		Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B * L_4 = __this->get_userRefreshStateByAuthCPtr_3();
		V_1 = L_4;
		RuntimeObject * L_5 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_5, /*hidden argument*/NULL);
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			V_2 = (List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE *)NULL;
			Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B * L_6 = __this->get_userRefreshStateByAuthCPtr_3();
			NullCheck(L_6);
			Enumerator_t92A2AD535503FDD7C99F882682C1CF65B8730601  L_7 = Dictionary_2_GetEnumerator_m09FAD314C7E9C62DD5F562D34324FCC1A04F319E(L_6, /*hidden argument*/Dictionary_2_GetEnumerator_m09FAD314C7E9C62DD5F562D34324FCC1A04F319E_RuntimeMethod_var);
			V_3 = L_7;
			goto IL_01ad;
		}

IL_0038:
		{
			U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 * L_8 = (U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 *)il2cpp_codegen_object_new(U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30_il2cpp_TypeInfo_var);
			U3CRefreshExpiredTokensU3Ec__AnonStorey0__ctor_m03A700BD41EACB7D5CC0B667D16A8BA12D004CB1(L_8, /*hidden argument*/NULL);
			V_4 = L_8;
			U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 * L_9 = V_4;
			U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98 * L_10 = V_0;
			NullCheck(L_9);
			L_9->set_U3CU3Ef__refU241_3(L_10);
			KeyValuePair_2_t24D6A2A5E7A3E6DF10CFC71A78E5723080779687  L_11 = Enumerator_get_Current_m7FBC971321821923ECD3D893BDB5E351D025271C_inline((Enumerator_t92A2AD535503FDD7C99F882682C1CF65B8730601 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m7FBC971321821923ECD3D893BDB5E351D025271C_RuntimeMethod_var);
			V_5 = L_11;
			U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 * L_12 = V_4;
			UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * L_13 = KeyValuePair_2_get_Value_m1A31889D9077E57158B104295FFA9FCCB5489935_inline((KeyValuePair_2_t24D6A2A5E7A3E6DF10CFC71A78E5723080779687 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m1A31889D9077E57158B104295FFA9FCCB5489935_RuntimeMethod_var);
			NullCheck(L_12);
			L_12->set_userRefreshState_1(L_13);
			intptr_t L_14 = KeyValuePair_2_get_Key_mD77BAE1CBCDDF4F0D0B16E9982128AF0B2D839C7_inline((KeyValuePair_2_t24D6A2A5E7A3E6DF10CFC71A78E5723080779687 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Key_mD77BAE1CBCDDF4F0D0B16E9982128AF0B2D839C7_RuntimeMethod_var);
			V_6 = (intptr_t)L_14;
			U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 * L_15 = V_4;
			NullCheck(L_15);
			UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * L_16 = L_15->get_userRefreshState_1();
			NullCheck(L_16);
			WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * L_17 = L_16->get_auth_0();
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			RuntimeObject * L_18 = FirebaseApp_WeakReferenceGetTarget_mC676B673AB674077A1A40272E96E51C5A25DC30A(L_17, /*hidden argument*/NULL);
			V_7 = ((FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D *)IsInstSealed((RuntimeObject*)L_18, FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D_il2cpp_TypeInfo_var));
			U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 * L_19 = V_4;
			U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 * L_20 = V_4;
			NullCheck(L_20);
			UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * L_21 = L_20->get_userRefreshState_1();
			NullCheck(L_21);
			WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * L_22 = L_21->get_user_1();
			RuntimeObject * L_23 = FirebaseApp_WeakReferenceGetTarget_mC676B673AB674077A1A40272E96E51C5A25DC30A(L_22, /*hidden argument*/NULL);
			NullCheck(L_19);
			L_19->set_user_0(((FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F *)IsInstSealed((RuntimeObject*)L_23, FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F_il2cpp_TypeInfo_var)));
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_24 = V_7;
			if (!L_24)
			{
				goto IL_00af;
			}
		}

IL_00a3:
		{
			U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 * L_25 = V_4;
			NullCheck(L_25);
			FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_26 = L_25->get_user_0();
			if (L_26)
			{
				goto IL_00c8;
			}
		}

IL_00af:
		{
			intptr_t L_27 = V_6;
			FirebaseAuthService_StopTokenRefresh_mB0BD65E8FD518AA0A4E684C7D8E631C1121B4734(__this, (intptr_t)L_27, /*hidden argument*/NULL);
			Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B * L_28 = __this->get_userRefreshStateByAuthCPtr_3();
			NullCheck(L_28);
			Enumerator_t92A2AD535503FDD7C99F882682C1CF65B8730601  L_29 = Dictionary_2_GetEnumerator_m09FAD314C7E9C62DD5F562D34324FCC1A04F319E(L_28, /*hidden argument*/Dictionary_2_GetEnumerator_m09FAD314C7E9C62DD5F562D34324FCC1A04F319E_RuntimeMethod_var);
			V_3 = L_29;
			goto IL_01ad;
		}

IL_00c8:
		{
			U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 * L_30 = V_4;
			NullCheck(L_30);
			UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * L_31 = L_30->get_userRefreshState_1();
			NullCheck(L_31);
			bool L_32 = L_31->get_forceRefresh_3();
			if (L_32)
			{
				goto IL_00fc;
			}
		}

IL_00d9:
		{
			U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98 * L_33 = V_0;
			NullCheck(L_33);
			float L_34 = L_33->get_now_0();
			U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 * L_35 = V_4;
			NullCheck(L_35);
			UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * L_36 = L_35->get_userRefreshState_1();
			NullCheck(L_36);
			float L_37 = L_36->get_lastTokenRefreshTime_2();
			float L_38 = __this->get_TOKEN_REFRESH_PERIOD_SECONDS_2();
			if ((((float)((float)il2cpp_codegen_subtract((float)L_34, (float)L_37))) >= ((float)L_38)))
			{
				goto IL_00fc;
			}
		}

IL_00f7:
		{
			goto IL_01ad;
		}

IL_00fc:
		{
			U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 * L_39 = V_4;
			FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_40 = V_7;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607_il2cpp_TypeInfo_var);
			String_t* L_41 = FirebaseAuthService_GetAppName_m5453B576FEBCEC66022EA8AA2BAB4F9BE1F969E5(L_40, /*hidden argument*/NULL);
			NullCheck(L_39);
			L_39->set_appName_2(L_41);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_42 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_43 = L_42;
			U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 * L_44 = V_4;
			NullCheck(L_44);
			FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_45 = L_44->get_user_0();
			NullCheck(L_45);
			String_t* L_46 = FirebaseUser_get_UserId_m23E924FD00D362216B74119CC1AD90784BAA6420(L_45, /*hidden argument*/NULL);
			NullCheck(L_43);
			ArrayElementTypeCheck (L_43, L_46);
			(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_46);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_47 = L_43;
			U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 * L_48 = V_4;
			NullCheck(L_48);
			String_t* L_49 = L_48->get_appName_2();
			NullCheck(L_47);
			ArrayElementTypeCheck (L_47, L_49);
			(L_47)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_49);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_50 = L_47;
			U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98 * L_51 = V_0;
			NullCheck(L_51);
			float L_52 = L_51->get_now_0();
			float L_53 = L_52;
			RuntimeObject * L_54 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_53);
			NullCheck(L_50);
			ArrayElementTypeCheck (L_50, L_54);
			(L_50)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_54);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_55 = L_50;
			U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 * L_56 = V_4;
			NullCheck(L_56);
			UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * L_57 = L_56->get_userRefreshState_1();
			NullCheck(L_57);
			float L_58 = L_57->get_lastTokenRefreshTime_2();
			float L_59 = L_58;
			RuntimeObject * L_60 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_59);
			NullCheck(L_55);
			ArrayElementTypeCheck (L_55, L_60);
			(L_55)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_60);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_61 = L_55;
			U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 * L_62 = V_4;
			NullCheck(L_62);
			UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * L_63 = L_62->get_userRefreshState_1();
			NullCheck(L_63);
			bool L_64 = L_63->get_forceRefresh_3();
			bool L_65 = L_64;
			RuntimeObject * L_66 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_65);
			NullCheck(L_61);
			ArrayElementTypeCheck (L_61, L_66);
			(L_61)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_66);
			String_t* L_67 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral9FAEFF89EFD7F12212721B04EA25B30381A1D30C, L_61, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var);
			LogUtil_LogMessage_mE0D4736B7C636462B2AD246F65EFAF5F1785822F(1, L_67, /*hidden argument*/NULL);
			U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 * L_68 = V_4;
			NullCheck(L_68);
			UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * L_69 = L_68->get_userRefreshState_1();
			NullCheck(L_69);
			L_69->set_forceRefresh_3((bool)0);
			U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 * L_70 = V_4;
			NullCheck(L_70);
			UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * L_71 = L_70->get_userRefreshState_1();
			U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98 * L_72 = V_0;
			NullCheck(L_72);
			float L_73 = L_72->get_now_0();
			NullCheck(L_71);
			L_71->set_lastTokenRefreshTime_2(L_73);
			List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * L_74 = V_2;
			if (L_74)
			{
				goto IL_019a;
			}
		}

IL_0194:
		{
			List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * L_75 = (List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE *)il2cpp_codegen_object_new(List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE_il2cpp_TypeInfo_var);
			List_1__ctor_mCA99E3E5D84C3ED79771C17F8FCF9B5795EB0C25(L_75, /*hidden argument*/List_1__ctor_mCA99E3E5D84C3ED79771C17F8FCF9B5795EB0C25_RuntimeMethod_var);
			V_2 = L_75;
		}

IL_019a:
		{
			List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * L_76 = V_2;
			U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 * L_77 = V_4;
			Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_78 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
			Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_78, L_77, (intptr_t)((intptr_t)U3CRefreshExpiredTokensU3Ec__AnonStorey0_U3CU3Em__0_m269E18E55DDCF6328DF8639637716A81FC168CE6_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_76);
			List_1_Add_mA374038CC7A718F88F0BA10BA4AB0FBB8DCEE158(L_76, L_78, /*hidden argument*/List_1_Add_mA374038CC7A718F88F0BA10BA4AB0FBB8DCEE158_RuntimeMethod_var);
		}

IL_01ad:
		{
			bool L_79 = Enumerator_MoveNext_m53E568327F5C48530A9F9D40EA19B03DA70DA3D1((Enumerator_t92A2AD535503FDD7C99F882682C1CF65B8730601 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m53E568327F5C48530A9F9D40EA19B03DA70DA3D1_RuntimeMethod_var);
			if (L_79)
			{
				goto IL_0038;
			}
		}

IL_01b9:
		{
			List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * L_80 = V_2;
			if (!L_80)
			{
				goto IL_01fb;
			}
		}

IL_01bf:
		{
			List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * L_81 = V_2;
			NullCheck(L_81);
			Enumerator_tA518899C189EFD03940570E1AEAC9AA9C766F663  L_82 = List_1_GetEnumerator_m6368DC18C4ECFD5E24DB8519706D28A887DAF1E6(L_81, /*hidden argument*/List_1_GetEnumerator_m6368DC18C4ECFD5E24DB8519706D28A887DAF1E6_RuntimeMethod_var);
			V_9 = L_82;
		}

IL_01c7:
		try
		{ // begin try (depth: 2)
			{
				goto IL_01dc;
			}

IL_01cc:
			{
				Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_83 = Enumerator_get_Current_mB78EBBF0E63F2F2F35DD2E7672EC0B07CF238B25_inline((Enumerator_tA518899C189EFD03940570E1AEAC9AA9C766F663 *)(&V_9), /*hidden argument*/Enumerator_get_Current_mB78EBBF0E63F2F2F35DD2E7672EC0B07CF238B25_RuntimeMethod_var);
				V_8 = L_83;
				Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_84 = V_8;
				NullCheck(L_84);
				Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_84, /*hidden argument*/NULL);
			}

IL_01dc:
			{
				bool L_85 = Enumerator_MoveNext_m989946DE9AEE08A21EA6ED0E5EF3FCB8AE1E2999((Enumerator_tA518899C189EFD03940570E1AEAC9AA9C766F663 *)(&V_9), /*hidden argument*/Enumerator_MoveNext_m989946DE9AEE08A21EA6ED0E5EF3FCB8AE1E2999_RuntimeMethod_var);
				if (L_85)
				{
					goto IL_01cc;
				}
			}

IL_01e8:
			{
				IL2CPP_LEAVE(0x1FB, FINALLY_01ed);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01ed;
		}

FINALLY_01ed:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_mBBB35182BBB4E195F074567937450EF16C74DF13((Enumerator_tA518899C189EFD03940570E1AEAC9AA9C766F663 *)(&V_9), /*hidden argument*/Enumerator_Dispose_mBBB35182BBB4E195F074567937450EF16C74DF13_RuntimeMethod_var);
			IL2CPP_END_FINALLY(493)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(493)
		{
			IL2CPP_JUMP_TBL(0x1FB, IL_01fb)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_01fb:
		{
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
		RuntimeObject * L_86 = V_1;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_86, /*hidden argument*/NULL);
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
// System.String Firebase.Unity.FirebaseAuthService::GetAppName(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAuthService_GetAppName_m5453B576FEBCEC66022EA8AA2BAB4F9BE1F969E5 (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * ___auth0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuthService_GetAppName_m5453B576FEBCEC66022EA8AA2BAB4F9BE1F969E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		V_0 = _stringLiteral50D8B4A941C26B89482C94AB324B5A274F9CED66;
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_0 = ___auth0;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_1 = ___auth0;
		NullCheck(L_1);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_2 = FirebaseAuth_get_App_mCCD52A0729E63E34FEE835C9F08DFE36C2A49805_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * L_3 = ___auth0;
		NullCheck(L_3);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_4 = FirebaseAuth_get_App_mCCD52A0729E63E34FEE835C9F08DFE36C2A49805_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = FirebaseApp_get_Name_mB5E945165A8F7DFAA21F0AD3A9E99CC3438943C5_inline(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0023:
	{
		String_t* L_6 = V_0;
		return L_6;
	}
}
// System.Void Firebase.Unity.FirebaseAuthService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuthService__cctor_m249E1D92C8633413A9A02370F976EC755F592612 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuthService__cctor_m249E1D92C8633413A9A02370F976EC755F592612_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * L_0 = (FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 *)il2cpp_codegen_object_new(FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607_il2cpp_TypeInfo_var);
		FirebaseAuthService__ctor_mE78BB63B4E947C5DA75F46FDA9BCBCED80DD416D(L_0, /*hidden argument*/NULL);
		((FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607_il2cpp_TypeInfo_var))->set__instance_1(L_0);
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
// System.Void Firebase.Unity.FirebaseAuthService_<RefreshExpiredTokens>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRefreshExpiredTokensU3Ec__AnonStorey0__ctor_m03A700BD41EACB7D5CC0B667D16A8BA12D004CB1 (U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Unity.FirebaseAuthService_<RefreshExpiredTokens>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRefreshExpiredTokensU3Ec__AnonStorey0_U3CU3Em__0_m269E18E55DDCF6328DF8639637716A81FC168CE6 (U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRefreshExpiredTokensU3Ec__AnonStorey0_U3CU3Em__0_m269E18E55DDCF6328DF8639637716A81FC168CE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * V_0 = NULL;
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
		FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_0 = __this->get_user_0();
		NullCheck(L_0);
		Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * L_1 = FirebaseUser_TokenAsync_mDC1EF843591C9E195FEF5C47B73A116A7013E6F5(L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_002b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0012;
		throw e;
	}

CATCH_0012:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)__exception_local);
		Exception_t * L_2 = V_1;
		String_t* L_3 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral05FF23A0D333FAD4F3664E98DB5B3023BC897BE8, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mE0D4736B7C636462B2AD246F65EFAF5F1785822F(3, L_3, /*hidden argument*/NULL);
		V_0 = (Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C *)NULL;
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * L_5 = V_0;
		Action_1_t91A1F519E78C032DF9207397CD162424F217B4B3 * L_6 = (Action_1_t91A1F519E78C032DF9207397CD162424F217B4B3 *)il2cpp_codegen_object_new(Action_1_t91A1F519E78C032DF9207397CD162424F217B4B3_il2cpp_TypeInfo_var);
		Action_1__ctor_m0651406FD57C9150AE4BE12B5E0DD14AD32DE5C7(L_6, __this, (intptr_t)((intptr_t)U3CRefreshExpiredTokensU3Ec__AnonStorey0_U3CU3Em__1_m9D596A06EF6A48E7E4A70B61F4D9D2335EE50008_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m0651406FD57C9150AE4BE12B5E0DD14AD32DE5C7_RuntimeMethod_var);
		NullCheck(L_5);
		Task_1_ContinueWith_mFB0558DDC4C57A255A0FE8CCDD83D8D91CC72210(L_5, L_6, /*hidden argument*/Task_1_ContinueWith_mFB0558DDC4C57A255A0FE8CCDD83D8D91CC72210_RuntimeMethod_var);
	}

IL_0044:
	{
		return;
	}
}
// System.Void Firebase.Unity.FirebaseAuthService_<RefreshExpiredTokens>c__AnonStorey0::<>m__1(System.Threading.Tasks.Task`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRefreshExpiredTokensU3Ec__AnonStorey0_U3CU3Em__1_m9D596A06EF6A48E7E4A70B61F4D9D2335EE50008 (U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3B71D83F19CCB1EE2AAE4734F594B023F1630D30 * __this, Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRefreshExpiredTokensU3Ec__AnonStorey0_U3CU3Em__1_m9D596A06EF6A48E7E4A70B61F4D9D2335EE50008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	float V_2 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		FirebaseUser_t4786947E69593EC9EA32CB3A29C473B65F338C0F * L_0 = __this->get_user_0();
		NullCheck(L_0);
		String_t* L_1 = FirebaseUser_get_UserId_m23E924FD00D362216B74119CC1AD90784BAA6420(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0019;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0011;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.Exception)
		V_0 = (String_t*)NULL;
		goto IL_0019;
	} // end catch (depth: 1)

IL_0019:
	{
		Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * L_2 = ___task0;
		NullCheck(L_2);
		bool L_3 = Task_get_IsCompleted_mA675F47CE1DBD1948BDC9215DCAE93F07FC32E19(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00cb;
		}
	}
	{
		U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98 * L_4 = __this->get_U3CU3Ef__refU241_3();
		NullCheck(L_4);
		FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * L_5 = L_4->get_U24this_1();
		NullCheck(L_5);
		Dictionary_2_tFDB86E9049514136540EB89B28364392F9AB408B * L_6 = L_5->get_userRefreshStateByAuthCPtr_3();
		V_1 = L_6;
		RuntimeObject * L_7 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_7, /*hidden argument*/NULL);
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * L_8 = __this->get_userRefreshState_1();
		U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98 * L_9 = __this->get_U3CU3Ef__refU241_3();
		NullCheck(L_9);
		float L_10 = L_9->get_now_0();
		NullCheck(L_8);
		L_8->set_lastTokenRefreshTime_2(L_10);
		IL2CPP_LEAVE(0x5D, FINALLY_0056);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0056;
	}

FINALLY_0056:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_1;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(86)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(86)
	{
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005d:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_12;
		String_t* L_14 = V_0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_14);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_13;
		String_t* L_16 = __this->get_appName_2();
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_16);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_15;
		U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98 * L_18 = __this->get_U3CU3Ef__refU241_3();
		NullCheck(L_18);
		float* L_19 = L_18->get_address_of_now_0();
		String_t* L_20 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_20);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = L_17;
		U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98 * L_22 = __this->get_U3CU3Ef__refU241_3();
		NullCheck(L_22);
		float L_23 = L_22->get_now_0();
		U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98 * L_24 = __this->get_U3CU3Ef__refU241_3();
		NullCheck(L_24);
		FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * L_25 = L_24->get_U24this_1();
		NullCheck(L_25);
		float L_26 = L_25->get_TOKEN_REFRESH_PERIOD_SECONDS_2();
		V_2 = ((float)il2cpp_codegen_add((float)L_23, (float)L_26));
		String_t* L_27 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_27);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_27);
		String_t* L_28 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral9148CEB7DAA85FB68B0C29337C07B63FB064DAEB, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mE0D4736B7C636462B2AD246F65EFAF5F1785822F(1, L_28, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_00cb:
	{
		Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * L_29 = ___task0;
		NullCheck(L_29);
		bool L_30 = Task_get_IsCanceled_m42A47FCA2C6F33308A08C92C8489E802448F6F42(L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_00e1;
		}
	}
	{
		Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * L_31 = ___task0;
		NullCheck(L_31);
		bool L_32 = Task_get_IsFaulted_m7337D2694F4BF380C5B8893B4A924D7F0E762A48(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00f8;
		}
	}

IL_00e1:
	{
		String_t* L_33 = V_0;
		String_t* L_34 = __this->get_appName_2();
		String_t* L_35 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral68BCE59F44E3649877DAC895B6EEBB542E548047, L_33, L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mE0D4736B7C636462B2AD246F65EFAF5F1785822F(3, L_35, /*hidden argument*/NULL);
	}

IL_00f8:
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
// System.Void Firebase.Unity.FirebaseAuthService_<RefreshExpiredTokens>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRefreshExpiredTokensU3Ec__AnonStorey1__ctor_mDD2DFCCA85AB37FEEE3405B4BC525235394BAB8F (U3CRefreshExpiredTokensU3Ec__AnonStorey1_tF308BC9A9444F66E0FE3CE025A9AAE670A161A98 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Firebase.Unity.FirebaseAuthService_UserRefreshState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserRefreshState__ctor_m3E573C9238B5D089F790E9801F65611DE9B2EF80 (UserRefreshState_tDB9182B1709BAFC921E83674CE901310EEE39A11 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_handle_1();
		return (intptr_t)L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* Services_get_Auth_mA625B8DAD33D45656A1D8354B291A2DBC0E72A54_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Services_get_Auth_mA625B8DAD33D45656A1D8354B291A2DBC0E72A54Firebase_Auth_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_StaticFields*)il2cpp_codegen_static_fields_for(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_il2cpp_TypeInfo_var))->get_U3CAuthU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * FirebaseAuthService_get_Instance_m23F18D0809F0B5EEC6CE02053988F1FC3E0EFCE8_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuthService_get_Instance_m23F18D0809F0B5EEC6CE02053988F1FC3E0EFCE8Firebase_Auth_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607_il2cpp_TypeInfo_var);
		FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607 * L_0 = ((FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuthService_t1EC46B73B0C793151CB90F71CD6339F31149B607_il2cpp_TypeInfo_var))->get__instance_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Services_set_Auth_mC7EA4640F2ECFFB45540109F9F8C52EBC96C32BF_inline (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Services_set_Auth_mC7EA4640F2ECFFB45540109F9F8C52EBC96C32BFFirebase_Auth_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_il2cpp_TypeInfo_var);
		((Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_StaticFields*)il2cpp_codegen_static_fields_for(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_il2cpp_TypeInfo_var))->set_U3CAuthU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C * FirebaseHandler_get_DefaultInstance_mDE47F7545F78ED4AAA09566895610B8DD8A6FE02_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseHandler_get_DefaultInstance_mDE47F7545F78ED4AAA09566895610B8DD8A6FE02Firebase_Auth_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_il2cpp_TypeInfo_var);
		FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C * L_0 = ((FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_il2cpp_TypeInfo_var))->get_firebaseHandler_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float PlatformInformation_get_RealtimeSinceStartupSafe_mAE1E03781FD2AF4582A35355613D890863517663_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformInformation_get_RealtimeSinceStartupSafe_mAE1E03781FD2AF4582A35355613D890863517663Firebase_Auth_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ((PlatformInformation_t4C1134978083AA8DDF5011D0258090736457AB73_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t4C1134978083AA8DDF5011D0258090736457AB73_il2cpp_TypeInfo_var))->get_U3CRealtimeSinceStartupSafeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseAuth_get_App_mCCD52A0729E63E34FEE835C9F08DFE36C2A49805_inline (FirebaseAuth_tF11B1B0F0590CC5B2CC73FE3540D5F62414A901D * __this, const RuntimeMethod* method)
{
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = __this->get_appProxy_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_mB5E945165A8F7DFAA21F0AD3A9E99CC3438943C5_inline (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * TaskCompletionSource_1_get_Task_mF1CB937DAB68DC43DA33893E95F48EFB07F385A0_gshared_inline (TaskCompletionSource_1_t3ECF7B56E418D2A3FFC4E551B9DA6A7E38C7D304 * __this, const RuntimeMethod* method)
{
	{
		Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * L_0 = (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *)__this->get_m_task_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t6CC6BEF12858818B6050B7D5FA3B6BFD03F036D6  Enumerator_get_Current_m99624D37C4BB4ECCFB95E7AAF4540F96131C178D_gshared_inline (Enumerator_tF3BC41DF3D8ADC95EEFF59074CBAE9E86181C35A * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t6CC6BEF12858818B6050B7D5FA3B6BFD03F036D6  L_0 = (KeyValuePair_2_t6CC6BEF12858818B6050B7D5FA3B6BFD03F036D6 )__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mB623F607E93C3316D6F4C05FFF5E3424801E0BEA_gshared_inline (KeyValuePair_2_t6CC6BEF12858818B6050B7D5FA3B6BFD03F036D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR intptr_t KeyValuePair_2_get_Key_m043F903532CA453E96396362C76FEE44FA350061_gshared_inline (KeyValuePair_2_t6CC6BEF12858818B6050B7D5FA3B6BFD03F036D6 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = (intptr_t)__this->get_key_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
