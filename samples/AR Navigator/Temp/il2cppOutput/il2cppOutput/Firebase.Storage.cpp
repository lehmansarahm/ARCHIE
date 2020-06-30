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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75;
// Firebase.Storage.ControllerInternal
struct ControllerInternal_t2621A083A4D903DB174839BFB5EFA6E419A3A33B;
// Firebase.Storage.FirebaseStorage
struct FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7;
// Firebase.Storage.FirebaseStorageInternal
struct FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0;
// Firebase.Storage.Future_StorageMetadata
struct Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028;
// Firebase.Storage.Future_StorageMetadata/<GetTask>c__AnonStorey0
struct U3CGetTaskU3Ec__AnonStorey0_t1DBF3A3E1DAE43629C695F5C31B1CFAB55B918F9;
// Firebase.Storage.Future_StorageMetadata/Action
struct Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12;
// Firebase.Storage.Future_StorageMetadata/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E;
// Firebase.Storage.Internal.ModuleLogger
struct ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC;
// Firebase.Storage.Internal.ModuleLogger[]
struct ModuleLoggerU5BU5D_tDAEA754824AAE2B818C2396A5380724CA2D84D70;
// Firebase.Storage.Internal.TransferState
struct TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D;
// Firebase.Storage.Internal.TransferStateUpdater`1<Firebase.Storage.UploadState>
struct TransferStateUpdater_1_t1346F4DF4E482A3BE7D6659C83E975328E7BC48B;
// Firebase.Storage.Internal.TransferStateUpdater`1<System.Object>
struct TransferStateUpdater_1_tF5826AF89BAD279061EADA2D42ED8D6702A00226;
// Firebase.Storage.MetadataChange
struct MetadataChange_t520FEEE76D402A459E59BF6498AA8D4633C468EE;
// Firebase.Storage.MetadataInternal
struct MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37;
// Firebase.Storage.MonitorControllerInternal
struct MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC;
// Firebase.Storage.MonitorControllerInternal/<Create>c__AnonStorey0
struct U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30;
// Firebase.Storage.MonitorControllerInternal/<OnPaused>c__AnonStorey1
struct U3COnPausedU3Ec__AnonStorey1_tDD6993DBEF4E65B1E82EA05A20D7399C43694D0C;
// Firebase.Storage.MonitorControllerInternal/<OnProgress>c__AnonStorey2
struct U3COnProgressU3Ec__AnonStorey2_tAE87511B3CACF72E178B767C52D51B2AFF8BA607;
// Firebase.Storage.MonitorControllerInternal/MonitorControllerEventDelegate
struct MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4;
// Firebase.Storage.StorageException
struct StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648;
// Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A;
// Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073;
// Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C;
// Firebase.Storage.StorageInternalPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t982F688E6929F8F6BC1C2B538EAEEC32CB1B4EE6;
// Firebase.Storage.StorageInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t48899BF08485B25CBFA52342EB2EEE7DB1AF3618;
// Firebase.Storage.StorageMetadata
struct StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8;
// Firebase.Storage.StorageReference
struct StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D;
// Firebase.Storage.StorageReference/<GetDownloadUrlAsync>c__AnonStoreyA
struct U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_tDF77093ECF09B51AB6CAE83C2EFB4843381F64BF;
// Firebase.Storage.StorageReference/<GetDownloadUrlAsync>c__AnonStoreyA/<GetDownloadUrlAsync>c__AnonStoreyB
struct U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_tF8EF0AC8B42FE4CAC7ADF32E0FCDA3089AAC6D12;
// Firebase.Storage.StorageReference/<PutBytesUsingCompletionSourceAsync>c__AnonStorey1
struct U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6;
// Firebase.Storage.StorageReference/<PutBytesUsingCompletionSourceAsync>c__AnonStorey1/<PutBytesUsingCompletionSourceAsync>c__AnonStorey2
struct U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_tE72DD13D78B7AA4BC7CCEB2449AFCD2D060815CD;
// Firebase.Storage.StorageReference/<PutBytesUsingMonitorControllerAsync>c__AnonStorey0
struct U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_t3B19F98B660AD6D0EF02F853700BCFA5AC49B317;
// Firebase.Storage.StorageReference/TaskCompletionStatus
struct TaskCompletionStatus_tBB1DB69F0E6FF1E8E4A5A89F863B03E761DEE105;
// Firebase.Storage.StorageReferenceInternal
struct StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383;
// Firebase.Storage.UploadState
struct UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>
struct Action_1_tA9A642AF9CC38CF5318AE5A2A9A3C22347AF10F4;
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
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<Firebase.Storage.ErrorInternal,System.Tuple`2<System.Int32,System.Net.HttpStatusCode>>[]
struct EntryU5BU5D_t1945BC9B242D5BA56D16F642C8FC72526F39771B;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.Storage.Future_StorageMetadata/Action>[]
struct EntryU5BU5D_t3E2736654DD3C0BF348B614A48E87463894DCF66;
// System.Collections.Generic.Dictionary`2/Entry<System.IntPtr,System.WeakReference>[]
struct EntryU5BU5D_tA05BA95E00489DDAC1566EE95B221AAF90082F8B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Firebase.Storage.FirebaseStorage>[]
struct EntryU5BU5D_t3359D2BBACFE9EB1125C4A1D93E5BD6DD0416ED8;
// System.Collections.Generic.Dictionary`2/KeyCollection<Firebase.Storage.ErrorInternal,System.Tuple`2<System.Int32,System.Net.HttpStatusCode>>
struct KeyCollection_t69D4BF72C4248356FDB0C3FA0B56859345FFD0F3;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.Storage.Future_StorageMetadata/Action>
struct KeyCollection_t5E01BFEC179C802A1EE95FA0EFBFDA819DC6BE54;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,System.WeakReference>
struct KeyCollection_t6E101EED89C8A2990D5A4BBE105274D253E280DC;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Firebase.Storage.FirebaseStorage>
struct KeyCollection_t75D3EF62EA89AA3DE0C3258AB6FA2074BFA253EB;
// System.Collections.Generic.Dictionary`2/ValueCollection<Firebase.Storage.ErrorInternal,System.Tuple`2<System.Int32,System.Net.HttpStatusCode>>
struct ValueCollection_t0AB1C72F9CC4410564EAE481481585C239B1071F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.Storage.Future_StorageMetadata/Action>
struct ValueCollection_tFD7AEC50631A23A18C23659A04C8D6D4C4715DD2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.IntPtr,System.WeakReference>
struct ValueCollection_t23FCF3B805E728E85FBF2C2246F11780502C23B1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Firebase.Storage.FirebaseStorage>
struct ValueCollection_t4A89DFD620FA7C427969ECC9BF1C3D75BA1C030B;
// System.Collections.Generic.Dictionary`2<Firebase.Storage.ErrorInternal,System.Tuple`2<System.Int32,System.Net.HttpStatusCode>>
struct Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString/Action>
struct Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Storage.Future_StorageMetadata/Action>
struct Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_tBE0C00013456CA812FD310466AF2583AE3E9B193;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>
struct Dictionary_2_tE930FC0A0DF3FBFFE9DC13EED210134C371C368E;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>
struct Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.Storage.FirebaseStorage>
struct Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9;
// System.Collections.Generic.IEnumerator`1<System.Exception>
struct IEnumerator_1_t2281FCF251CD51C1F13587450034F0E08EBFAD0E;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_tDDB69E91697CCB64C7993B651487CEEC287DB7E8;
// System.Collections.Generic.IEqualityComparer`1<Firebase.Storage.ErrorInternal>
struct IEqualityComparer_1_t11114A0FAB0778A5E969A92C3537883F31323663;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_tB3E7C5F256B78F0F0AC4D0D75860F996DF2C125E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.IList`1<System.Exception>
struct IList_1_t79A79A556E69BA20A09771D2D61B0440B6F4EFBA;
// System.Collections.Generic.List`1<Firebase.Storage.Internal.ModuleLogger>
struct List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.WeakReference>
struct List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50;
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
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3;
// System.Exception
struct Exception_t;
// System.Func`1<Firebase.DependencyStatus>
struct Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572;
// System.Func`1<Firebase.Storage.StorageMetadata>
struct Func_1_t778EB7B16100D642FF56D8271B366EFC64995FB0;
// System.Func`1<System.Boolean>
struct Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1;
// System.Func`1<System.Object>
struct Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`1<System.Uri>
struct Func_1_tB65A59385155168BA8513081365F0C8F6E71EB27;
// System.Func`2<System.Object,System.Object>
struct Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task>
struct Func_2_t735384ACC76837997722E4642BA1F3CC06A9BB5B;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F;
// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D;
// System.Func`2<System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>,System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>
struct Func_2_tAA075D43E9257FE76DA85CD9479662741AD86D03;
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>
struct Func_2_t83657030EA75D65F52621111FF4673287BD01324;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>
struct Func_2_tD51875DE26A3F401707CE0CD26076F8F8D05BB98;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata>>
struct Func_2_t2A6C33C882920E133633CCBA8663F10CADE8ED72;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t8A17E987C73781D20C93E1140DAE0B3595A19A4B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_t1C8755364A4E277E5036A8167830AA7A8544A2C9;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>>
struct Func_2_t1AEC16D2716B0B33EE832FC58C1BE41FD2F25576;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Uri>>
struct Func_2_tC6E5E6F30A73DD33118325C0813B85C7705F205D;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.IOException
struct IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA;
// System.IProgress`1<Firebase.Storage.UploadState>
struct IProgress_1_tC4738FCB7610157A1FD81DD76E4EB396F897E030;
// System.IProgress`1<System.Object>
struct IProgress_1_t988F6A4E4A248616873A97E24275972C5964E0E4;
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
// System.Reflection.FieldInfo
struct FieldInfo_t;
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
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.MetadataInternal>
struct TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.StorageMetadata>
struct TaskCompletionSource_1_t890D1B8924B397DFA64F64F0E55EA5EBB3CAFA5F;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t3ECF7B56E418D2A3FFC4E551B9DA6A7E38C7D304;
// System.Threading.Tasks.TaskCompletionSource`1<System.Uri>
struct TaskCompletionSource_1_t4D9BCF80416BB1F8C888F6BBD375E56BDD7ED75B;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<Firebase.Storage.MetadataInternal>
struct TaskFactory_1_tB71FCBD1CFAA6DAC3DCD508EF623A7E9C860943B;
// System.Threading.Tasks.TaskFactory`1<Firebase.Storage.StorageMetadata>
struct TaskFactory_1_t73A8CD4A3B0009F3BD0BF7ACFB1AC030DCEA2C96;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t1EC236EC6D34F0BBC2E87658D2A11017407240D4;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_tCE3276D3F820150AD890B4700B08839B1F60B2EB;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>
struct TaskFactory_1_t79AD5343DD47D3DA4608B7796B19E7F4BB73AF73;
// System.Threading.Tasks.TaskFactory`1<System.Uri>
struct TaskFactory_1_t74BBAB1C0270734319C7AEFB4ED24158D62C27DB;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>
struct Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3;
// System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata>
struct Task_1_t44C5AB6F81509E35FFC0C48F45E84AC860DE2DF4;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>
struct Task_1_t64029F49DCFC18B0FB806DE97C2EB856C0941C52;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>
struct Task_1_t015DF6EF685F0880AA11DE3E6716D485B217A5E4;
// System.Threading.Tasks.Task`1<System.Uri>
struct Task_1_tB1F9B3B5D25AD547A77258C869D2EC0ACED9EB78;
// System.Tuple`2<System.Int32,System.Int32Enum>
struct Tuple_2_tAA2ECE8873707FEE165573740A8A4A16F00C3CF8;
// System.Tuple`2<System.Int32,System.Net.HttpStatusCode>
struct Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D;
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
// System.WeakReference[]
struct WeakReferenceU5BU5D_t3D4D832B20124D000C6A37472DF46579D0214539;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t91A1F519E78C032DF9207397CD162424F217B4B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tA9A642AF9CC38CF5318AE5A2A9A3C22347AF10F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ControllerInternal_t2621A083A4D903DB174839BFB5EFA6E419A3A33B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldAccessException_tBFF096C9CF3CA2BF95A3D596D7E50EF32B178BDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseLogger_t0AB9A6D2522CBB2F7D180395382228A4759420DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t778EB7B16100D642FF56D8271B366EFC64995FB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tB65A59385155168BA8513081365F0C8F6E71EB27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAA075D43E9257FE76DA85CD9479662741AD86D03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t2281FCF251CD51C1F13587450034F0E08EBFAD0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_t48899BF08485B25CBFA52342EB2EEE7DB1AF3618_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_t982F688E6929F8F6BC1C2B538EAEEC32CB1B4EE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetException_tF055BE26B63ED0C556BCD5B31BE911D1F91AA88E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t4D9BCF80416BB1F8C888F6BBD375E56BDD7ED75B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t890D1B8924B397DFA64F64F0E55EA5EBB3CAFA5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransferStateUpdater_1_t1346F4DF4E482A3BE7D6659C83E975328E7BC48B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_tDF77093ECF09B51AB6CAE83C2EFB4843381F64BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_tF8EF0AC8B42FE4CAC7ADF32E0FCDA3089AAC6D12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetTaskU3Ec__AnonStorey0_t1DBF3A3E1DAE43629C695F5C31B1CFAB55B918F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnPausedU3Ec__AnonStorey1_tDD6993DBEF4E65B1E82EA05A20D7399C43694D0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnProgressU3Ec__AnonStorey2_tAE87511B3CACF72E178B767C52D51B2AFF8BA607_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_tE72DD13D78B7AA4BC7CCEB2449AFCD2D060815CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_t3B19F98B660AD6D0EF02F853700BCFA5AC49B317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05B65594B94FCFE93A1CCFF2E5D1EA738C256843;
IL2CPP_EXTERN_C String_t* _stringLiteral07F7E3B80E47933EF9D81D3BE137026E1E6DD804;
IL2CPP_EXTERN_C String_t* _stringLiteral084BD859BAE63DF7DD5A9E11765523C5105CFA32;
IL2CPP_EXTERN_C String_t* _stringLiteral1079DBC88B58081B8E0483B851CFB170732B96ED;
IL2CPP_EXTERN_C String_t* _stringLiteral1E0CC51B9D88706B7988CF25A9C9803C5468E964;
IL2CPP_EXTERN_C String_t* _stringLiteral20EC70B1C664879585B45CF1BCF7203938E5A56F;
IL2CPP_EXTERN_C String_t* _stringLiteral252FA81D131D9BD386F3F8D0C310C4098FFADF76;
IL2CPP_EXTERN_C String_t* _stringLiteral2895989FFE951340625ADA358A3FEA9BFBAB9EAB;
IL2CPP_EXTERN_C String_t* _stringLiteral3150ECD5E0294534A81AE047DDAC559DE481D774;
IL2CPP_EXTERN_C String_t* _stringLiteral3838538CC5F3BAAA1D12D6837EC80B0E592ED35E;
IL2CPP_EXTERN_C String_t* _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8;
IL2CPP_EXTERN_C String_t* _stringLiteral43F74A96ACFD66E16BAE37F5F79496D985E532EB;
IL2CPP_EXTERN_C String_t* _stringLiteral43FC5CF0ADD905E0133A3CC43E5BE02D76167BA3;
IL2CPP_EXTERN_C String_t* _stringLiteral45C86F7B7A894ACC5C963381F0A25D32D2B6D5C5;
IL2CPP_EXTERN_C String_t* _stringLiteral519E5A114736C3C9A5709C059C9D5F69D5683AB2;
IL2CPP_EXTERN_C String_t* _stringLiteral57E983BEE60292E03F1CAB84EACA653316AAC837;
IL2CPP_EXTERN_C String_t* _stringLiteral5AEAF442612C084BAF8DBC14A2012F27920A6738;
IL2CPP_EXTERN_C String_t* _stringLiteral64DE58E10ACFF10ABF400761927C76B5FB4D5C35;
IL2CPP_EXTERN_C String_t* _stringLiteral6C94134246E03B1A429C7D71BD50C140CCAE32F7;
IL2CPP_EXTERN_C String_t* _stringLiteral6D981D5A29B6779BDF8FFAE2926C30B46A580DF3;
IL2CPP_EXTERN_C String_t* _stringLiteral6E1F193040D7DC4A612354810CF0A0CA1112BB23;
IL2CPP_EXTERN_C String_t* _stringLiteral6FE2EB9A03CDF5C97481593914D7D863F0FE5F6D;
IL2CPP_EXTERN_C String_t* _stringLiteral75D7DFBED3F85613FE5CC706DDB728A795563917;
IL2CPP_EXTERN_C String_t* _stringLiteral803D955CDFE7F4D296550552B1654E3778AD5214;
IL2CPP_EXTERN_C String_t* _stringLiteral8DE36E4005BD5F6F460D1074B3B6D78F7EB671CD;
IL2CPP_EXTERN_C String_t* _stringLiteral998B5A060A14B8EC491A61D6E40F08F9E85C06A6;
IL2CPP_EXTERN_C String_t* _stringLiteral9F9CF9FA3E67C311A90AB68D3732B579BDFBF238;
IL2CPP_EXTERN_C String_t* _stringLiteralA68693D799ED33E22540D5F941DDA19303152347;
IL2CPP_EXTERN_C String_t* _stringLiteralA6E23D5B15CEF09215AA9AD9BD232B474C979D20;
IL2CPP_EXTERN_C String_t* _stringLiteralA7FBA8DFCC575B6A16C01A08BE6AFD32AA9E15F8;
IL2CPP_EXTERN_C String_t* _stringLiteralA804D931F27BE6EF35191274DAF148C0B4FCEEF6;
IL2CPP_EXTERN_C String_t* _stringLiteralAC9ACBC4773271CEDD606BE3DB841E2CE6A785ED;
IL2CPP_EXTERN_C String_t* _stringLiteralAD5D89FE83214FE497DA9F70F0B6CF9CEBB6247B;
IL2CPP_EXTERN_C String_t* _stringLiteralAE25EA1D287FE2F9608F574424027A83EAAAF245;
IL2CPP_EXTERN_C String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
IL2CPP_EXTERN_C String_t* _stringLiteralBC38D2D8F1393F9C307190DA328B0E22A72B7B88;
IL2CPP_EXTERN_C String_t* _stringLiteralC1D3A52ED730208C622DFED53CB157FD95EAF554;
IL2CPP_EXTERN_C String_t* _stringLiteralD4C8478F7A3D529E62A60EE716FC3DAF2A6AA19D;
IL2CPP_EXTERN_C String_t* _stringLiteralD676EF1ECACC5CAA601B0C0485CB64D72C7A2FF0;
IL2CPP_EXTERN_C String_t* _stringLiteralD8853D74463592F6FE909C3F3B4F2F463670ADF9;
IL2CPP_EXTERN_C String_t* _stringLiteralE29266172D48C026A5C663577A253D43B90AA1C5;
IL2CPP_EXTERN_C String_t* _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A;
IL2CPP_EXTERN_C String_t* _stringLiteralF3368570EE5DB7FA93890C049EB03DD764108E6C;
IL2CPP_EXTERN_C String_t* _stringLiteralFB1AE274028B6974E9FDF9D77F5D12C65C8CD4D4;
IL2CPP_EXTERN_C String_t* _stringLiteralFD76FC52C200204792701C73090393FA14BA7060;
IL2CPP_EXTERN_C String_t* _stringLiteralFF7F9006731D316A0922BFFBA210530ABD4FC908;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m0651406FD57C9150AE4BE12B5E0DD14AD32DE5C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m0F5D615508491623DF2A558E055B23C9BE374CEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ControllerInternal_Cancel_m920A8CDF80BACC89DC8C579D109A94EEADB3946A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE6DF2F097E7EDDBF60B68FDC7E2C469ED09013B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m3CEC088395E2C3A8229AC453772B8740B5C62E1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m5EB9322E2737576744038F6C169FA59D3F24F644_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mB1F9447357E88D752C84519BF5067E0D68A70782_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m063D29871CBAD720DADDD3CB06C13AF7AE878FFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m11D082A6B852EF44A748AE93F19EE696D1D5B734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m1A3EB9267E87E2090ED63711C9190AA1FE9CFFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m788267B35EAB890E8141EC87D164B81C416AE6B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4355E2B9BEFD87BF3F915FB76ECD7D2E92FB584A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m82E13927F53980BB046608473DFFE11E6105EEDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m97C760C6AE77C61BCA51B1FD450B782D79070AD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC9DE7790A011BFAD0B90831CD3319C47898625B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m68C6C4AF34FF7A228B3B198EFB7FE8FE7656CE19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m8580E8DC3B1AD865F4FC4B31AA38870B08C7D7BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m8D5685C4442849EB549BBF330D0B1A5BA95D5866_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7C4F9567EDBD78A44CD25254F8CBF7D56CC9834D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC280A73E98660DF4F291F26F880BD35EE49BBD5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2FC2D476F4C860D75909AED94E0CFEE02513A6E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseStorageInternal_GetInstanceInternal_mF786041AC57E33E6EA529A42991188499B806D02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseStorageInternal_GetReferenceFromUrl_mF0D69EBF304A360A22E532C37DFD26038FC62355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseStorageInternal_ReleaseReferenceInternal_mE0E6549A75E16B6EED6C6607E6ADE9EAB4D08F60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseStorageInternal_get_App_mAE7345FEE5043764F9FD63C45B42ECDEC7CA4FF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseStorageInternal_get_Url_mEF967793D98A676620DA5239E5CAE0A27F05E5E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseStorage_GetInstanceInternal_mB799F11544E1A3B2F966B97DE7E1227C29A2A71C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseStorage_GetReferenceFromUrl_mA66DBF499E2459375241A6FFDB4B8284BF17A8E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseStorage_OnAppDisposed_mFB74EEA40D06317F66F82664ED5B94CA10776B7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseStorage_ThrowIfNull_mD27EB52F6E23002FF0B6A6E847768D4DE7CD82AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseStorage_ValidateStorageReferenceInternal_m3B4644FA100A1D6D7452B2364B11C71BE6FBEFCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m2E2F7F3681DB13DD5AB6DF45FA0E517F4F5BC94E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_mC1671874C8D51F1F5C09CD6E8A1A9A22C8786B4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m67F37D83BB14E10B19E8523BF8F2AC21E1138796_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_StorageMetadata_GetResult_mABFE8A50EA64BC0D3E6CC1774A517B25604FFD11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_StorageMetadata_SWIG_CompletionDispatcher_m0ACF6F0D8B7A8C95339DDA490D23B541EB6D7521_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_StorageMetadata_SWIG_FreeCompletionData_m22B65B48FBC6EEDB60F030E79317A6ED97BEE81C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_StorageMetadata_SWIG_OnCompletion_m5F9764707B7329268E6608BC88BACEEC134A5C3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_StorageMetadata_ThrowIfDisposed_mB4673B373B7A8028F1B1864E05697B6CEE26D195_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0FA4EBA4FEA59AA08228356F2A4DD86D751BB9D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7B888EE4B21BFA00BFC714FC4A7328D98AB5EEC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7DF26F8B80546FFC05D567B3E4E764F230C19E04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m721E6DCD83BB7DD4EC0DC89EF26796FBB94D9C06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mA389F10B377760C99E283FD792BAAAA130F087CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7D283096E62E79F4823EEE0781FC8D91CAC8C5A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFDE4B68F9A4A58C0DF6E8EE11F822B8D23FF97E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetadataInternal_CopyCppObject_m53A633C8C77A5343D6F6D8B42B6160C8686B7700_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetadataInternal__ctor_m1A1AA2713639DBB3E89948EF68C735C10B81E9C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetadataInternal_set_ContentType_mE42A62D96E731454CCDFDFBA3FC89AB9C04CC1F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitorControllerInternal_OnPaused_m4FD9AC511C7BA2E9094889EF87A8EAB17160D6DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitorControllerInternal_OnProgress_m27310269F609ECCABC1878CA9958552275A3951C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitorControllerInternal_SetPausedEvent_m6171BB978F5779201E4178B10D90238EAD08A607_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitorControllerInternal_SetProgressEvent_m3CF158E8BB6ECB066BA289749054865C76B6136D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitorControllerInternal_U3CRegisterCancellationTokenU3Em__0_m5DD33FFEC90427C4DA82D4113903E7A09D8A6B12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitorControllerInternal__ctor_m6A120F1E88CC65B913C9A334695885CC7D7A4FDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitorControllerInternal_get_BytesTransferred_m067A52058654F64D4462D953AE7ADF80227EF25E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitorControllerInternal_get_Controller_m6DFEA5BF897AB23CF99B79B95AD72F86B5BDC5CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitorControllerInternal_get_TotalByteCount_mE605D8CA215D0337B209792947F00B5C1CD635A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_mB3A1708B473BA7EE3CED5959613B2AA11A4920BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_mE7195ABD0D429721375E13BDFEF332301E85C913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_m25AA3141BA6170AE1B04F835C989E7853BBA66DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_m0792FA153D0124453E880DE9587512F012279048_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m127C121B708A3AFA2BC6FFFA17E6064EE1794274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m8E816528A54187C2501C79EF83B0DB4315B28E5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m02993B101DE9DB50F7BBBCD62B0859DAF6FC9017_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_m79FA3697D2DDC7C4C77E8FCA3723B2FFEBF1E28E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m45FF182454864D6AC791CC7B4D8D3396DE767FEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m94D4795092042D72FA1EF6CF43C8891A67706880_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_mB99092FE18DF25A06A785C83AAB75FED5AAF642C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m7B86476913D4CCD87BF5B974171C69E3F9C07199_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_m2B1DB303D67CB4BE6EE23E7C561589C611591085_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_m8395061029C984183186909311E8535669238CE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m1F2A4E1DD2BFBB284DC4D3B900F01FE4C3500694_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_m94AE67E16D0670DA8A5CFACECFC46C6EBABF900F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_mBE6E0D8DEEDF89A3555EE3521255D7C0A087F78C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StorageReferenceInternal_Child_mCA748A792A2FACF197C642ABD157D075FE112AA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StorageReferenceInternal_GetDownloadUrlAsync_mA2F1B23CFECD0F2EC0A82F0E142A03B04FB2A904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StorageReferenceInternal_PutBytesUsingMonitorControllerAsync_m47B4912C8350923ABC4A11FFE6F88338E68C678A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StorageReferenceInternal_get_Bucket_m0F1647EEAB7CCDBA795CAE8FFD5C7C0E6B609B0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StorageReferenceInternal_get_FullPath_m1048F499D944E5071223E7AC7E3BB19E171D3CF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StorageReferenceInternal_get_IsValid_mF15A79A12CA432B0D5646FC284298F71301CBA4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StorageReference_CompleteTask_TisMetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37_TisStorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8_m935AD2904E3C1EAE7106E5D2F4A58B0EF86590C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StorageReference_CompleteTask_TisString_t_TisUri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_mE4B31C8265479A521A7B788AC65965DB7408E171_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetCanceled_mC521EFAEBDE2B76E43666F18EE1CB7BB8DDBF5C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_m712CC9A0A950A2D82C7F7C19A576A4AC95058B42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mFCFDF6C6CCAF670DE7C33CF70E3C6863CA62C279_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m082F89F6C3CFFA23EC0FBABB3220180EDB06080A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m69899B617424F47227580E52C2AE1E904FF2B5A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mE49C69FF5B30F3C3BF2431F22EF93D61A38EC9FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m8BAA32E1A3144DC2A11444F413A0080A52B81121_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mAC95BEE381D29EFE149E6469F9F8499B36D3ECB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mC258E3BC1E58539744B3EEB0E28A9FAD61347ACD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskExtensions_Unwrap_TisMetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37_mBBDB4E2E76AB5C792207A787BE27CDE98039DDFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_TisTask_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3_m0E2DF5426C3D79224A3EEA77E5C7D18FC8BFD62A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_mBE56EC62DF42D8453BA00DC3BCEFCAEA277786B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_mFB0558DDC4C57A255A0FE8CCDD83D8D91CC72210_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_mC69B4ADFBAACBA0F764A10FEAF868D29A084E958_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_mD4F484A4DEF45AD6EAF4B2025F086977F8632350_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransferStateUpdater_1_SetMetadata_mDEA1E9A5251F5FB55D65D709C9F0F1C2DB3D7D6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransferStateUpdater_1__ctor_mC6391AA33A67644CAE8AACBB8A6A02A3C0C0728E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransferStateUpdater_1_get_MonitorController_m3B0043D629F0A6F2BC771BCCBE54167D67BDB635_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_m2258EA5DF46C1ADBBB89BE24A995D21980C1C991_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item2_mBF5DA67EDF1B44D8351593BB6F0AEE3F9D006FC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateU3Ec__AnonStorey0_U3CU3Em__0_m7C074C68CF7C2F3A833DFD6B29B6E69BE5A74362_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateU3Ec__AnonStorey0_U3CU3Em__1_m014B85E994CB74ACE9B191D98D71BF022418F82B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_U3CU3Em__0_mB1235F830620C932F4136928675F37DBA4F59B17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_U3CU3Em__0_m083D391CD73E9A54EEC030AC441410588030AD6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m68FDBC8D858DB92CE263B4154C49ED7E510968DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnPausedU3Ec__AnonStorey1_U3CU3Em__0_m9AEDD1777FD6D9D004FA7DE3059BB0AA177A289A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnProgressU3Ec__AnonStorey2_U3CU3Em__0_mF236929A1D3994FD2C5804E08876AC7B047B72DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_U3CU3Em__0_m23E88E19097E82DCDA3AEB5910CE32A82F2377B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_U3CU3Em__0_m907831D9A0DAF5C26CAFDE1743236AB424671EFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_U3CU3Em__0_m18F0F4148542108F842F76D2AC6C0BED7153C8FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ControllerInternal_Cancel_m920A8CDF80BACC89DC8C579D109A94EEADB3946A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerInternal_Dispose_m91F009DAB3A099678C077A9BF21A868FA55667AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorageInternal_Dispose_m962E9484ABA7E1C6D026E0760867DBF59327CE55_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorageInternal_GetInstanceInternal_mF786041AC57E33E6EA529A42991188499B806D02_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorageInternal_GetReferenceFromUrl_mF0D69EBF304A360A22E532C37DFD26038FC62355_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorageInternal_ReleaseReferenceInternal_mE0E6549A75E16B6EED6C6607E6ADE9EAB4D08F60_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorageInternal_getCPtr_mB6DBD7BEA4B11C7AE2ECEDCFDD629AC12D0F9E99_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorageInternal_get_App_mAE7345FEE5043764F9FD63C45B42ECDEC7CA4FF5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorageInternal_get_Url_mEF967793D98A676620DA5239E5CAE0A27F05E5E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage_ConstructFormattedUri_m1158395057D88A619A93A8CE9D5175C0F404A442_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage_Dispose_mCF6BAD5BBD632BD1B71AB6A92A3EEB70C24612CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage_Finalize_m2E5762B8D1245EAD64163DD565A03C667FD42A97_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage_FindByKey_m119B16DD6194B969CCE5434AB1DC545EE2329359_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage_GetInstanceInternal_mB799F11544E1A3B2F966B97DE7E1227C29A2A71C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage_GetInstance_m21994D83A2DD44D668ED239E36520613E867E0D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage_GetReferenceFromUrl_mA66DBF499E2459375241A6FFDB4B8284BF17A8E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage_OnAppDisposed_mFB74EEA40D06317F66F82664ED5B94CA10776B7F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage_ThrowIfNull_mD27EB52F6E23002FF0B6A6E847768D4DE7CD82AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage_ValidateStorageReferenceInternal_m3B4644FA100A1D6D7452B2364B11C71BE6FBEFCD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage__cctor_mC01F4D75DC6689A93443AB65F4393909FF0F675A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage__ctor_mFBCFA1CAEBB22C2F9BEE10B6039497F2356AF88E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage_get_DefaultInstance_mD147240F80D3517AE2EB7FAC5C16C3AD38D9DC1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_StorageMetadata_Dispose_m86D16EC53596E481B71616EC03F74DAEF22CDA5F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_StorageMetadata_GetResult_mABFE8A50EA64BC0D3E6CC1774A517B25604FFD11_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_StorageMetadata_GetTask_m32211C2AEFFA3E76CB4CEBC4133992B80F61FCD3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_StorageMetadata_SWIG_CompletionDispatcher_m0ACF6F0D8B7A8C95339DDA490D23B541EB6D7521_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_StorageMetadata_SWIG_FreeCompletionData_m22B65B48FBC6EEDB60F030E79317A6ED97BEE81C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_StorageMetadata_SWIG_OnCompletion_m5F9764707B7329268E6608BC88BACEEC134A5C3A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_StorageMetadata_SetOnCompletionCallback_mF756697ED1C91AFA9CC324E141A4ADE780DCF9BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_StorageMetadata_ThrowIfDisposed_mB4673B373B7A8028F1B1864E05697B6CEE26D195_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_StorageMetadata__cctor_mD8833120E0D51A1FB2B09B9CA727A3A8641BAC7F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_StorageMetadata__ctor_m9DCE43063A0FC76DD9F007F3E63393E9B8B23677_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetadataChange_Build_mE75EC0AD11148D4123764DAE7C573FCA3A19497A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetadataChange__ctor_m055DA3B06A3395E9CD0432A82124EA7BDEF7A707_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetadataInternal_CopyCppObject_m53A633C8C77A5343D6F6D8B42B6160C8686B7700_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetadataInternal_Dispose_m8C3C177E1A6AA3D5BA413D23B4E36E94DE352DC3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetadataInternal__ctor_m1A1AA2713639DBB3E89948EF68C735C10B81E9C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetadataInternal_getCPtr_m570EF283EEB2B5BFEBDF5381321B702286B2065E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetadataInternal_set_ContentType_mE42A62D96E731454CCDFDFBA3FC89AB9C04CC1F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModuleLogger_Finalize_mDC8D2EA2C85A1FD0CDB94EA73BC2D1ABA9382320_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModuleLogger_LogMessage_m5116219D021DBF1651FAB90D6E244D7B473D1ADD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModuleLogger__cctor_mBE91B6E8ADDADBB76FB974B513B81C77D10AABAB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModuleLogger__ctor_m2EF1021CCB3F686ED6F2A18242B9A245A4983B59_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModuleLogger_get_Level_mD716BA3D3FDCD9822113BE55A2C3DFE95EDEAD9C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModuleLogger_get_Tag_mCB952398B5815EC03D792B21DF55A8B655177AE6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerEventDelegate_BeginInvoke_mF07602CD4BE01C43BB1610F8DEDD3A4408B278E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_Create_m99090BE0D75E858F2181AA0AC0BE84BD977F8038_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_Dispose_m27AE4CB1305D8DE7F10A3C97F2432FE9B6C6855C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_OnPaused_m4FD9AC511C7BA2E9094889EF87A8EAB17160D6DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_OnProgress_m27310269F609ECCABC1878CA9958552275A3951C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_ProxyFromCPtr_mA3F43A384F08353CCACE93CCE3AE070DAF402D3B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_RegisterCancellationToken_mC7877F5A35A97CDF5D00213884ED59C9E2882A3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_SetPausedEvent_m6171BB978F5779201E4178B10D90238EAD08A607_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_SetProgressEvent_m3CF158E8BB6ECB066BA289749054865C76B6136D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal__cctor_m134E0D36F787D35918BC2D176B085E5A46700B74_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal__ctor_m6A120F1E88CC65B913C9A334695885CC7D7A4FDE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_add_Progress_m92C7DDC5962EF79E4FA42D2B03F3DF00E2EE9236_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_getCPtr_m9D6692BB9D00DF5DB6B878E9F969D3E6FF2406C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_get_BytesTransferred_m067A52058654F64D4462D953AE7ADF80227EF25E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_get_Controller_m6DFEA5BF897AB23CF99B79B95AD72F86B5BDC5CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_get_TotalByteCount_mE605D8CA215D0337B209792947F00B5C1CD635A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_remove_Progress_m6E0DBD9285322785FA95D28396441C3CDF3259BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingApplicationException_mE7195ABD0D429721375E13BDFEF332301E85C913_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentException_m25AA3141BA6170AE1B04F835C989E7853BBA66DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentNullException_m0792FA153D0124453E880DE9587512F012279048_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m127C121B708A3AFA2BC6FFFA17E6064EE1794274_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArithmeticException_m8E816528A54187C2501C79EF83B0DB4315B28E5F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingDivideByZeroException_m02993B101DE9DB50F7BBBCD62B0859DAF6FC9017_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingIOException_m79FA3697D2DDC7C4C77E8FCA3723B2FFEBF1E28E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m45FF182454864D6AC791CC7B4D8D3396DE767FEC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingInvalidCastException_m94D4795092042D72FA1EF6CF43C8891A67706880_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingInvalidOperationException_mB99092FE18DF25A06A785C83AAB75FED5AAF642C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingNullReferenceException_m7B86476913D4CCD87BF5B974171C69E3F9C07199_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingOutOfMemoryException_m2B1DB303D67CB4BE6EE23E7C561589C611591085_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingOverflowException_m8395061029C984183186909311E8535669238CE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingSystemException_m1F2A4E1DD2BFBB284DC4D3B900F01FE4C3500694_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper__cctor_m9A57F37A7843BF4F356F2F8D1C6726B0610FEB55_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException_Retrieve_mA4E2F8DDFD2B168D0373ADA978EB613A0650E172_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException_Set_m94AE67E16D0670DA8A5CFACECFC46C6EBABF900F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGStringHelper__cctor_mC6CD59ACC7490F096B70AF45E650D6A1D2DF29F7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIG_CompletionDelegate_BeginInvoke_m1C7C74F7DC8379DD42E6FA18D636D9461202525C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageException_CreateFromException_m2FF23B3F13BFF625A5580AB92D4A5CC74E864032_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageException_GetErrorMessageForCode_mE7611A59F467E38484935982FCE64E8B04D53654_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageException__cctor_mC7D8DCF8B6729D0E46589E969723E86050A2D83B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageException__ctor_m9FC051927B9C4F5222AE63495539250DDF2715AD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageInternalPINVOKE__cctor_m6CF7CF1DD269DBBCA91A14CC27ACD8675D6CAACE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageMetadata_BuildMetadataInternal_mB2011FC2AB953CDCFC08ABA75F9E994172D4954A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageMetadata__cctor_m43A392064DD923C1A282CC4F834D79537647C785_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageMetadata__ctor_m600E41A6889794EDC6D2BED0E476E75561CF77C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReferenceInternal_Child_mCA748A792A2FACF197C642ABD157D075FE112AA4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReferenceInternal_Dispose_m5F0508A586AA4D3EAE7831B55C01233636670F8F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReferenceInternal_GetDownloadUrlAsync_mA2F1B23CFECD0F2EC0A82F0E142A03B04FB2A904_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReferenceInternal_PutBytesUsingMonitorControllerAsync_m47B4912C8350923ABC4A11FFE6F88338E68C678A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReferenceInternal_getCPtr_m5DA0100FAF2E0E5BC78E7CAF7E2488F2474472C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReferenceInternal_get_Bucket_m0F1647EEAB7CCDBA795CAE8FFD5C7C0E6B609B0E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReferenceInternal_get_FullPath_m1048F499D944E5071223E7AC7E3BB19E171D3CF6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReferenceInternal_get_IsValid_mF15A79A12CA432B0D5646FC284298F71301CBA4F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReference_Child_mA5F9C83454BA00AA35C81C280693DDDB0C12E7FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReference_Equals_mBAE5638BF34B2BB8549B7D8EBC5C4C7BDCA5A05F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReference_GetDownloadUrlAsync_mB081DC843002D1B1BF109A3AC1909CF8CEC0B65E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReference_PutBytesAsync_mCCC953FE9499AE3231F5072DDC84DA4AC319F2DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReference_PutBytesUsingCompletionSourceAsync_m0B999C1EF0C8F86C2C5983A911CD9A2D3449E326_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReference_PutBytesUsingMonitorControllerAsync_mF44313CA13B763D1AB1ED2213AFC99CBEACF5B16_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReference_ToString_m7AB0807C5CA48A25B8B96C45906A087670BEE7E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReference__ctor_mC3EB957AAE76256E3AF4E86E7FC46B2908584299_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TaskCompletionStatus__ctor_mD4994DEE7F0A58A5125BA30D234957A84B49CF93_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CCreateU3Ec__AnonStorey0_U3CU3Em__0_m7C074C68CF7C2F3A833DFD6B29B6E69BE5A74362_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CCreateU3Ec__AnonStorey0_U3CU3Em__1_m014B85E994CB74ACE9B191D98D71BF022418F82B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_U3CU3Em__0_mB1235F830620C932F4136928675F37DBA4F59B17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_U3CU3Em__0_m083D391CD73E9A54EEC030AC441410588030AD6E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m68FDBC8D858DB92CE263B4154C49ED7E510968DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3COnPausedU3Ec__AnonStorey1_U3CU3Em__0_m9AEDD1777FD6D9D004FA7DE3059BB0AA177A289A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3COnProgressU3Ec__AnonStorey2_U3CU3Em__0_mF236929A1D3994FD2C5804E08876AC7B047B72DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_U3CU3Em__0_m23E88E19097E82DCDA3AEB5910CE32A82F2377B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_U3CU3Em__0_m907831D9A0DAF5C26CAFDE1743236AB424671EFB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UploadState__ctor_mCC6C7F976510CC7B77BA699641826EAFA604948D_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tF8614FDF27D1987A5E9DF5C9C3057F837268744F 
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


// Firebase.Storage.FirebaseStorage
struct  FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7  : public RuntimeObject
{
public:
	// Firebase.Storage.FirebaseStorageInternal Firebase.Storage.FirebaseStorage::storageInternal
	FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * ___storageInternal_1;
	// Firebase.FirebaseApp Firebase.Storage.FirebaseStorage::firebaseApp
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___firebaseApp_2;
	// System.String Firebase.Storage.FirebaseStorage::instanceKey
	String_t* ___instanceKey_3;
	// Firebase.Storage.Internal.ModuleLogger Firebase.Storage.FirebaseStorage::<Logger>k__BackingField
	ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * ___U3CLoggerU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_storageInternal_1() { return static_cast<int32_t>(offsetof(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7, ___storageInternal_1)); }
	inline FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * get_storageInternal_1() const { return ___storageInternal_1; }
	inline FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 ** get_address_of_storageInternal_1() { return &___storageInternal_1; }
	inline void set_storageInternal_1(FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * value)
	{
		___storageInternal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storageInternal_1), (void*)value);
	}

	inline static int32_t get_offset_of_firebaseApp_2() { return static_cast<int32_t>(offsetof(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7, ___firebaseApp_2)); }
	inline FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * get_firebaseApp_2() const { return ___firebaseApp_2; }
	inline FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 ** get_address_of_firebaseApp_2() { return &___firebaseApp_2; }
	inline void set_firebaseApp_2(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * value)
	{
		___firebaseApp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firebaseApp_2), (void*)value);
	}

	inline static int32_t get_offset_of_instanceKey_3() { return static_cast<int32_t>(offsetof(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7, ___instanceKey_3)); }
	inline String_t* get_instanceKey_3() const { return ___instanceKey_3; }
	inline String_t** get_address_of_instanceKey_3() { return &___instanceKey_3; }
	inline void set_instanceKey_3(String_t* value)
	{
		___instanceKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instanceKey_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLoggerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7, ___U3CLoggerU3Ek__BackingField_5)); }
	inline ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * get_U3CLoggerU3Ek__BackingField_5() const { return ___U3CLoggerU3Ek__BackingField_5; }
	inline ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC ** get_address_of_U3CLoggerU3Ek__BackingField_5() { return &___U3CLoggerU3Ek__BackingField_5; }
	inline void set_U3CLoggerU3Ek__BackingField_5(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * value)
	{
		___U3CLoggerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoggerU3Ek__BackingField_5), (void*)value);
	}
};

struct FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.Storage.FirebaseStorage> Firebase.Storage.FirebaseStorage::storageByInstanceKey
	Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9 * ___storageByInstanceKey_0;
	// Firebase.Storage.Internal.ModuleLogger Firebase.Storage.FirebaseStorage::logger
	ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * ___logger_4;
	// System.Reflection.FieldInfo Firebase.Storage.FirebaseStorage::pathFieldInfo
	FieldInfo_t * ___pathFieldInfo_6;
	// System.Reflection.FieldInfo Firebase.Storage.FirebaseStorage::cachedToString
	FieldInfo_t * ___cachedToString_7;

public:
	inline static int32_t get_offset_of_storageByInstanceKey_0() { return static_cast<int32_t>(offsetof(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields, ___storageByInstanceKey_0)); }
	inline Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9 * get_storageByInstanceKey_0() const { return ___storageByInstanceKey_0; }
	inline Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9 ** get_address_of_storageByInstanceKey_0() { return &___storageByInstanceKey_0; }
	inline void set_storageByInstanceKey_0(Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9 * value)
	{
		___storageByInstanceKey_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storageByInstanceKey_0), (void*)value);
	}

	inline static int32_t get_offset_of_logger_4() { return static_cast<int32_t>(offsetof(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields, ___logger_4)); }
	inline ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * get_logger_4() const { return ___logger_4; }
	inline ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC ** get_address_of_logger_4() { return &___logger_4; }
	inline void set_logger_4(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * value)
	{
		___logger_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_4), (void*)value);
	}

	inline static int32_t get_offset_of_pathFieldInfo_6() { return static_cast<int32_t>(offsetof(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields, ___pathFieldInfo_6)); }
	inline FieldInfo_t * get_pathFieldInfo_6() const { return ___pathFieldInfo_6; }
	inline FieldInfo_t ** get_address_of_pathFieldInfo_6() { return &___pathFieldInfo_6; }
	inline void set_pathFieldInfo_6(FieldInfo_t * value)
	{
		___pathFieldInfo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathFieldInfo_6), (void*)value);
	}

	inline static int32_t get_offset_of_cachedToString_7() { return static_cast<int32_t>(offsetof(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields, ___cachedToString_7)); }
	inline FieldInfo_t * get_cachedToString_7() const { return ___cachedToString_7; }
	inline FieldInfo_t ** get_address_of_cachedToString_7() { return &___cachedToString_7; }
	inline void set_cachedToString_7(FieldInfo_t * value)
	{
		___cachedToString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedToString_7), (void*)value);
	}
};


// Firebase.Storage.Future_StorageMetadata_<GetTask>c__AnonStorey0
struct  U3CGetTaskU3Ec__AnonStorey0_t1DBF3A3E1DAE43629C695F5C31B1CFAB55B918F9  : public RuntimeObject
{
public:
	// Firebase.Storage.Future_StorageMetadata Firebase.Storage.Future_StorageMetadata_<GetTask>c__AnonStorey0::fu
	Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * ___fu_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.MetadataInternal> Firebase.Storage.Future_StorageMetadata_<GetTask>c__AnonStorey0::tcs
	TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454 * ___tcs_1;

public:
	inline static int32_t get_offset_of_fu_0() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_t1DBF3A3E1DAE43629C695F5C31B1CFAB55B918F9, ___fu_0)); }
	inline Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * get_fu_0() const { return ___fu_0; }
	inline Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 ** get_address_of_fu_0() { return &___fu_0; }
	inline void set_fu_0(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * value)
	{
		___fu_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fu_0), (void*)value);
	}

	inline static int32_t get_offset_of_tcs_1() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_t1DBF3A3E1DAE43629C695F5C31B1CFAB55B918F9, ___tcs_1)); }
	inline TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454 * get_tcs_1() const { return ___tcs_1; }
	inline TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454 ** get_address_of_tcs_1() { return &___tcs_1; }
	inline void set_tcs_1(TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454 * value)
	{
		___tcs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcs_1), (void*)value);
	}
};


// Firebase.Storage.Internal.TransferState
struct  TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D  : public RuntimeObject
{
public:
	// System.Int64 Firebase.Storage.Internal.TransferState::<BytesTransferred>k__BackingField
	int64_t ___U3CBytesTransferredU3Ek__BackingField_0;
	// System.Int64 Firebase.Storage.Internal.TransferState::<TotalByteCount>k__BackingField
	int64_t ___U3CTotalByteCountU3Ek__BackingField_1;
	// System.Uri Firebase.Storage.Internal.TransferState::<UploadSessionUri>k__BackingField
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___U3CUploadSessionUriU3Ek__BackingField_2;
	// Firebase.Storage.StorageMetadata Firebase.Storage.Internal.TransferState::<Metadata>k__BackingField
	StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * ___U3CMetadataU3Ek__BackingField_3;
	// Firebase.Storage.StorageReference Firebase.Storage.Internal.TransferState::<Reference>k__BackingField
	StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * ___U3CReferenceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CBytesTransferredU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D, ___U3CBytesTransferredU3Ek__BackingField_0)); }
	inline int64_t get_U3CBytesTransferredU3Ek__BackingField_0() const { return ___U3CBytesTransferredU3Ek__BackingField_0; }
	inline int64_t* get_address_of_U3CBytesTransferredU3Ek__BackingField_0() { return &___U3CBytesTransferredU3Ek__BackingField_0; }
	inline void set_U3CBytesTransferredU3Ek__BackingField_0(int64_t value)
	{
		___U3CBytesTransferredU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTotalByteCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D, ___U3CTotalByteCountU3Ek__BackingField_1)); }
	inline int64_t get_U3CTotalByteCountU3Ek__BackingField_1() const { return ___U3CTotalByteCountU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3CTotalByteCountU3Ek__BackingField_1() { return &___U3CTotalByteCountU3Ek__BackingField_1; }
	inline void set_U3CTotalByteCountU3Ek__BackingField_1(int64_t value)
	{
		___U3CTotalByteCountU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CUploadSessionUriU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D, ___U3CUploadSessionUriU3Ek__BackingField_2)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_U3CUploadSessionUriU3Ek__BackingField_2() const { return ___U3CUploadSessionUriU3Ek__BackingField_2; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_U3CUploadSessionUriU3Ek__BackingField_2() { return &___U3CUploadSessionUriU3Ek__BackingField_2; }
	inline void set_U3CUploadSessionUriU3Ek__BackingField_2(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___U3CUploadSessionUriU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUploadSessionUriU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMetadataU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D, ___U3CMetadataU3Ek__BackingField_3)); }
	inline StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * get_U3CMetadataU3Ek__BackingField_3() const { return ___U3CMetadataU3Ek__BackingField_3; }
	inline StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 ** get_address_of_U3CMetadataU3Ek__BackingField_3() { return &___U3CMetadataU3Ek__BackingField_3; }
	inline void set_U3CMetadataU3Ek__BackingField_3(StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * value)
	{
		___U3CMetadataU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMetadataU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReferenceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D, ___U3CReferenceU3Ek__BackingField_4)); }
	inline StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * get_U3CReferenceU3Ek__BackingField_4() const { return ___U3CReferenceU3Ek__BackingField_4; }
	inline StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D ** get_address_of_U3CReferenceU3Ek__BackingField_4() { return &___U3CReferenceU3Ek__BackingField_4; }
	inline void set_U3CReferenceU3Ek__BackingField_4(StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * value)
	{
		___U3CReferenceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReferenceU3Ek__BackingField_4), (void*)value);
	}
};


// Firebase.Storage.Internal.TransferStateUpdater`1<Firebase.Storage.UploadState>
struct  TransferStateUpdater_1_t1346F4DF4E482A3BE7D6659C83E975328E7BC48B  : public RuntimeObject
{
public:
	// System.IProgress`1<T> Firebase.Storage.Internal.TransferStateUpdater`1::handler
	RuntimeObject* ___handler_0;
	// Firebase.Storage.Internal.TransferState Firebase.Storage.Internal.TransferStateUpdater`1::transferState
	TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * ___transferState_1;
	// T Firebase.Storage.Internal.TransferStateUpdater`1::<ProgressState>k__BackingField
	UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC * ___U3CProgressStateU3Ek__BackingField_2;
	// Firebase.Storage.MonitorControllerInternal Firebase.Storage.Internal.TransferStateUpdater`1::<MonitorController>k__BackingField
	MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * ___U3CMonitorControllerU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(TransferStateUpdater_1_t1346F4DF4E482A3BE7D6659C83E975328E7BC48B, ___handler_0)); }
	inline RuntimeObject* get_handler_0() const { return ___handler_0; }
	inline RuntimeObject** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(RuntimeObject* value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handler_0), (void*)value);
	}

	inline static int32_t get_offset_of_transferState_1() { return static_cast<int32_t>(offsetof(TransferStateUpdater_1_t1346F4DF4E482A3BE7D6659C83E975328E7BC48B, ___transferState_1)); }
	inline TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * get_transferState_1() const { return ___transferState_1; }
	inline TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D ** get_address_of_transferState_1() { return &___transferState_1; }
	inline void set_transferState_1(TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * value)
	{
		___transferState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transferState_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProgressStateU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TransferStateUpdater_1_t1346F4DF4E482A3BE7D6659C83E975328E7BC48B, ___U3CProgressStateU3Ek__BackingField_2)); }
	inline UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC * get_U3CProgressStateU3Ek__BackingField_2() const { return ___U3CProgressStateU3Ek__BackingField_2; }
	inline UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC ** get_address_of_U3CProgressStateU3Ek__BackingField_2() { return &___U3CProgressStateU3Ek__BackingField_2; }
	inline void set_U3CProgressStateU3Ek__BackingField_2(UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC * value)
	{
		___U3CProgressStateU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProgressStateU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMonitorControllerU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TransferStateUpdater_1_t1346F4DF4E482A3BE7D6659C83E975328E7BC48B, ___U3CMonitorControllerU3Ek__BackingField_3)); }
	inline MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * get_U3CMonitorControllerU3Ek__BackingField_3() const { return ___U3CMonitorControllerU3Ek__BackingField_3; }
	inline MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC ** get_address_of_U3CMonitorControllerU3Ek__BackingField_3() { return &___U3CMonitorControllerU3Ek__BackingField_3; }
	inline void set_U3CMonitorControllerU3Ek__BackingField_3(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * value)
	{
		___U3CMonitorControllerU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMonitorControllerU3Ek__BackingField_3), (void*)value);
	}
};


// Firebase.Storage.Internal.TransferStateUpdater`1<System.Object>
struct  TransferStateUpdater_1_tF5826AF89BAD279061EADA2D42ED8D6702A00226  : public RuntimeObject
{
public:
	// System.IProgress`1<T> Firebase.Storage.Internal.TransferStateUpdater`1::handler
	RuntimeObject* ___handler_0;
	// Firebase.Storage.Internal.TransferState Firebase.Storage.Internal.TransferStateUpdater`1::transferState
	TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * ___transferState_1;
	// T Firebase.Storage.Internal.TransferStateUpdater`1::<ProgressState>k__BackingField
	RuntimeObject * ___U3CProgressStateU3Ek__BackingField_2;
	// Firebase.Storage.MonitorControllerInternal Firebase.Storage.Internal.TransferStateUpdater`1::<MonitorController>k__BackingField
	MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * ___U3CMonitorControllerU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(TransferStateUpdater_1_tF5826AF89BAD279061EADA2D42ED8D6702A00226, ___handler_0)); }
	inline RuntimeObject* get_handler_0() const { return ___handler_0; }
	inline RuntimeObject** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(RuntimeObject* value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handler_0), (void*)value);
	}

	inline static int32_t get_offset_of_transferState_1() { return static_cast<int32_t>(offsetof(TransferStateUpdater_1_tF5826AF89BAD279061EADA2D42ED8D6702A00226, ___transferState_1)); }
	inline TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * get_transferState_1() const { return ___transferState_1; }
	inline TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D ** get_address_of_transferState_1() { return &___transferState_1; }
	inline void set_transferState_1(TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * value)
	{
		___transferState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transferState_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProgressStateU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TransferStateUpdater_1_tF5826AF89BAD279061EADA2D42ED8D6702A00226, ___U3CProgressStateU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3CProgressStateU3Ek__BackingField_2() const { return ___U3CProgressStateU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3CProgressStateU3Ek__BackingField_2() { return &___U3CProgressStateU3Ek__BackingField_2; }
	inline void set_U3CProgressStateU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3CProgressStateU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProgressStateU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMonitorControllerU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TransferStateUpdater_1_tF5826AF89BAD279061EADA2D42ED8D6702A00226, ___U3CMonitorControllerU3Ek__BackingField_3)); }
	inline MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * get_U3CMonitorControllerU3Ek__BackingField_3() const { return ___U3CMonitorControllerU3Ek__BackingField_3; }
	inline MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC ** get_address_of_U3CMonitorControllerU3Ek__BackingField_3() { return &___U3CMonitorControllerU3Ek__BackingField_3; }
	inline void set_U3CMonitorControllerU3Ek__BackingField_3(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * value)
	{
		___U3CMonitorControllerU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMonitorControllerU3Ek__BackingField_3), (void*)value);
	}
};


// Firebase.Storage.MetadataChange
struct  MetadataChange_t520FEEE76D402A459E59BF6498AA8D4633C468EE  : public RuntimeObject
{
public:
	// Firebase.Storage.StorageMetadata Firebase.Storage.MetadataChange::metadata
	StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * ___metadata_0;

public:
	inline static int32_t get_offset_of_metadata_0() { return static_cast<int32_t>(offsetof(MetadataChange_t520FEEE76D402A459E59BF6498AA8D4633C468EE, ___metadata_0)); }
	inline StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * get_metadata_0() const { return ___metadata_0; }
	inline StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 ** get_address_of_metadata_0() { return &___metadata_0; }
	inline void set_metadata_0(StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * value)
	{
		___metadata_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___metadata_0), (void*)value);
	}
};


// Firebase.Storage.MonitorControllerInternal_<Create>c__AnonStorey0
struct  U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30  : public RuntimeObject
{
public:
	// Firebase.Storage.MonitorControllerInternal Firebase.Storage.MonitorControllerInternal_<Create>c__AnonStorey0::proxy
	MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * ___proxy_0;

public:
	inline static int32_t get_offset_of_proxy_0() { return static_cast<int32_t>(offsetof(U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30, ___proxy_0)); }
	inline MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * get_proxy_0() const { return ___proxy_0; }
	inline MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC ** get_address_of_proxy_0() { return &___proxy_0; }
	inline void set_proxy_0(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * value)
	{
		___proxy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___proxy_0), (void*)value);
	}
};


// Firebase.Storage.StorageInternalPINVOKE
struct  StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7  : public RuntimeObject
{
public:

public:
};

struct StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_StaticFields
{
public:
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper Firebase.Storage.StorageInternalPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A * ___swigExceptionHelper_0;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper Firebase.Storage.StorageInternalPINVOKE::swigStringHelper
	SWIGStringHelper_t982F688E6929F8F6BC1C2B538EAEEC32CB1B4EE6 * ___swigStringHelper_1;

public:
	inline static int32_t get_offset_of_swigExceptionHelper_0() { return static_cast<int32_t>(offsetof(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_StaticFields, ___swigExceptionHelper_0)); }
	inline SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A * get_swigExceptionHelper_0() const { return ___swigExceptionHelper_0; }
	inline SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A ** get_address_of_swigExceptionHelper_0() { return &___swigExceptionHelper_0; }
	inline void set_swigExceptionHelper_0(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A * value)
	{
		___swigExceptionHelper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigExceptionHelper_0), (void*)value);
	}

	inline static int32_t get_offset_of_swigStringHelper_1() { return static_cast<int32_t>(offsetof(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_StaticFields, ___swigStringHelper_1)); }
	inline SWIGStringHelper_t982F688E6929F8F6BC1C2B538EAEEC32CB1B4EE6 * get_swigStringHelper_1() const { return ___swigStringHelper_1; }
	inline SWIGStringHelper_t982F688E6929F8F6BC1C2B538EAEEC32CB1B4EE6 ** get_address_of_swigStringHelper_1() { return &___swigStringHelper_1; }
	inline void set_swigStringHelper_1(SWIGStringHelper_t982F688E6929F8F6BC1C2B538EAEEC32CB1B4EE6 * value)
	{
		___swigStringHelper_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigStringHelper_1), (void*)value);
	}
};


// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper
struct  SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A  : public RuntimeObject
{
public:

public:
};

struct SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields
{
public:
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___applicationDelegate_0;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___arithmeticDelegate_1;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___divideByZeroDelegate_2;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___indexOutOfRangeDelegate_3;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___invalidCastDelegate_4;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___invalidOperationDelegate_5;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___ioDelegate_6;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___nullReferenceDelegate_7;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___outOfMemoryDelegate_8;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___overflowDelegate_9;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___systemDelegate_10;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * ___argumentDelegate_11;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * ___argumentNullDelegate_12;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * ___argumentOutOfRangeDelegate_13;

public:
	inline static int32_t get_offset_of_applicationDelegate_0() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields, ___applicationDelegate_0)); }
	inline ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * get_applicationDelegate_0() const { return ___applicationDelegate_0; }
	inline ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C ** get_address_of_applicationDelegate_0() { return &___applicationDelegate_0; }
	inline void set_applicationDelegate_0(ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * value)
	{
		___applicationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_arithmeticDelegate_1() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields, ___arithmeticDelegate_1)); }
	inline ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * get_arithmeticDelegate_1() const { return ___arithmeticDelegate_1; }
	inline ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C ** get_address_of_arithmeticDelegate_1() { return &___arithmeticDelegate_1; }
	inline void set_arithmeticDelegate_1(ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * value)
	{
		___arithmeticDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arithmeticDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_divideByZeroDelegate_2() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields, ___divideByZeroDelegate_2)); }
	inline ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * get_divideByZeroDelegate_2() const { return ___divideByZeroDelegate_2; }
	inline ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C ** get_address_of_divideByZeroDelegate_2() { return &___divideByZeroDelegate_2; }
	inline void set_divideByZeroDelegate_2(ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * value)
	{
		___divideByZeroDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___divideByZeroDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_indexOutOfRangeDelegate_3() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields, ___indexOutOfRangeDelegate_3)); }
	inline ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * get_indexOutOfRangeDelegate_3() const { return ___indexOutOfRangeDelegate_3; }
	inline ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C ** get_address_of_indexOutOfRangeDelegate_3() { return &___indexOutOfRangeDelegate_3; }
	inline void set_indexOutOfRangeDelegate_3(ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * value)
	{
		___indexOutOfRangeDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexOutOfRangeDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_invalidCastDelegate_4() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields, ___invalidCastDelegate_4)); }
	inline ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * get_invalidCastDelegate_4() const { return ___invalidCastDelegate_4; }
	inline ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C ** get_address_of_invalidCastDelegate_4() { return &___invalidCastDelegate_4; }
	inline void set_invalidCastDelegate_4(ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * value)
	{
		___invalidCastDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidCastDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of_invalidOperationDelegate_5() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields, ___invalidOperationDelegate_5)); }
	inline ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * get_invalidOperationDelegate_5() const { return ___invalidOperationDelegate_5; }
	inline ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C ** get_address_of_invalidOperationDelegate_5() { return &___invalidOperationDelegate_5; }
	inline void set_invalidOperationDelegate_5(ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * value)
	{
		___invalidOperationDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidOperationDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_ioDelegate_6() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields, ___ioDelegate_6)); }
	inline ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * get_ioDelegate_6() const { return ___ioDelegate_6; }
	inline ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C ** get_address_of_ioDelegate_6() { return &___ioDelegate_6; }
	inline void set_ioDelegate_6(ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * value)
	{
		___ioDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ioDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_nullReferenceDelegate_7() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields, ___nullReferenceDelegate_7)); }
	inline ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * get_nullReferenceDelegate_7() const { return ___nullReferenceDelegate_7; }
	inline ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C ** get_address_of_nullReferenceDelegate_7() { return &___nullReferenceDelegate_7; }
	inline void set_nullReferenceDelegate_7(ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * value)
	{
		___nullReferenceDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nullReferenceDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_outOfMemoryDelegate_8() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields, ___outOfMemoryDelegate_8)); }
	inline ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * get_outOfMemoryDelegate_8() const { return ___outOfMemoryDelegate_8; }
	inline ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C ** get_address_of_outOfMemoryDelegate_8() { return &___outOfMemoryDelegate_8; }
	inline void set_outOfMemoryDelegate_8(ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * value)
	{
		___outOfMemoryDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outOfMemoryDelegate_8), (void*)value);
	}

	inline static int32_t get_offset_of_overflowDelegate_9() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields, ___overflowDelegate_9)); }
	inline ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * get_overflowDelegate_9() const { return ___overflowDelegate_9; }
	inline ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C ** get_address_of_overflowDelegate_9() { return &___overflowDelegate_9; }
	inline void set_overflowDelegate_9(ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * value)
	{
		___overflowDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overflowDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_systemDelegate_10() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields, ___systemDelegate_10)); }
	inline ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * get_systemDelegate_10() const { return ___systemDelegate_10; }
	inline ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C ** get_address_of_systemDelegate_10() { return &___systemDelegate_10; }
	inline void set_systemDelegate_10(ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * value)
	{
		___systemDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_argumentDelegate_11() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields, ___argumentDelegate_11)); }
	inline ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * get_argumentDelegate_11() const { return ___argumentDelegate_11; }
	inline ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 ** get_address_of_argumentDelegate_11() { return &___argumentDelegate_11; }
	inline void set_argumentDelegate_11(ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * value)
	{
		___argumentDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_argumentNullDelegate_12() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields, ___argumentNullDelegate_12)); }
	inline ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * get_argumentNullDelegate_12() const { return ___argumentNullDelegate_12; }
	inline ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 ** get_address_of_argumentNullDelegate_12() { return &___argumentNullDelegate_12; }
	inline void set_argumentNullDelegate_12(ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * value)
	{
		___argumentNullDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentNullDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_argumentOutOfRangeDelegate_13() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields, ___argumentOutOfRangeDelegate_13)); }
	inline ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * get_argumentOutOfRangeDelegate_13() const { return ___argumentOutOfRangeDelegate_13; }
	inline ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 ** get_address_of_argumentOutOfRangeDelegate_13() { return &___argumentOutOfRangeDelegate_13; }
	inline void set_argumentOutOfRangeDelegate_13(ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * value)
	{
		___argumentOutOfRangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentOutOfRangeDelegate_13), (void*)value);
	}
};


// Firebase.Storage.StorageInternalPINVOKE_SWIGPendingException
struct  SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7  : public RuntimeObject
{
public:

public:
};

struct SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_StaticFields
{
public:
	// System.Int32 Firebase.Storage.StorageInternalPINVOKE_SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;

public:
	inline static int32_t get_offset_of_numExceptionsPending_1() { return static_cast<int32_t>(offsetof(SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_StaticFields, ___numExceptionsPending_1)); }
	inline int32_t get_numExceptionsPending_1() const { return ___numExceptionsPending_1; }
	inline int32_t* get_address_of_numExceptionsPending_1() { return &___numExceptionsPending_1; }
	inline void set_numExceptionsPending_1(int32_t value)
	{
		___numExceptionsPending_1 = value;
	}
};

struct SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_ThreadStaticFields
{
public:
	// System.Exception Firebase.Storage.StorageInternalPINVOKE_SWIGPendingException::pendingException
	Exception_t * ___pendingException_0;

public:
	inline static int32_t get_offset_of_pendingException_0() { return static_cast<int32_t>(offsetof(SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_ThreadStaticFields, ___pendingException_0)); }
	inline Exception_t * get_pendingException_0() const { return ___pendingException_0; }
	inline Exception_t ** get_address_of_pendingException_0() { return &___pendingException_0; }
	inline void set_pendingException_0(Exception_t * value)
	{
		___pendingException_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingException_0), (void*)value);
	}
};


// Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper
struct  SWIGStringHelper_t982F688E6929F8F6BC1C2B538EAEEC32CB1B4EE6  : public RuntimeObject
{
public:

public:
};

struct SWIGStringHelper_t982F688E6929F8F6BC1C2B538EAEEC32CB1B4EE6_StaticFields
{
public:
	// Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper_SWIGStringDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper::stringDelegate
	SWIGStringDelegate_t48899BF08485B25CBFA52342EB2EEE7DB1AF3618 * ___stringDelegate_0;

public:
	inline static int32_t get_offset_of_stringDelegate_0() { return static_cast<int32_t>(offsetof(SWIGStringHelper_t982F688E6929F8F6BC1C2B538EAEEC32CB1B4EE6_StaticFields, ___stringDelegate_0)); }
	inline SWIGStringDelegate_t48899BF08485B25CBFA52342EB2EEE7DB1AF3618 * get_stringDelegate_0() const { return ___stringDelegate_0; }
	inline SWIGStringDelegate_t48899BF08485B25CBFA52342EB2EEE7DB1AF3618 ** get_address_of_stringDelegate_0() { return &___stringDelegate_0; }
	inline void set_stringDelegate_0(SWIGStringDelegate_t48899BF08485B25CBFA52342EB2EEE7DB1AF3618 * value)
	{
		___stringDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringDelegate_0), (void*)value);
	}
};


// Firebase.Storage.StorageReference
struct  StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D  : public RuntimeObject
{
public:
	// Firebase.Storage.FirebaseStorage Firebase.Storage.StorageReference::firebaseStorage
	FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * ___firebaseStorage_0;
	// Firebase.Storage.Internal.ModuleLogger Firebase.Storage.StorageReference::<Logger>k__BackingField
	ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * ___U3CLoggerU3Ek__BackingField_1;
	// Firebase.Storage.StorageReferenceInternal Firebase.Storage.StorageReference::<Internal>k__BackingField
	StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * ___U3CInternalU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_firebaseStorage_0() { return static_cast<int32_t>(offsetof(StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D, ___firebaseStorage_0)); }
	inline FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * get_firebaseStorage_0() const { return ___firebaseStorage_0; }
	inline FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 ** get_address_of_firebaseStorage_0() { return &___firebaseStorage_0; }
	inline void set_firebaseStorage_0(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * value)
	{
		___firebaseStorage_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firebaseStorage_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLoggerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D, ___U3CLoggerU3Ek__BackingField_1)); }
	inline ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * get_U3CLoggerU3Ek__BackingField_1() const { return ___U3CLoggerU3Ek__BackingField_1; }
	inline ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC ** get_address_of_U3CLoggerU3Ek__BackingField_1() { return &___U3CLoggerU3Ek__BackingField_1; }
	inline void set_U3CLoggerU3Ek__BackingField_1(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * value)
	{
		___U3CLoggerU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoggerU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInternalU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D, ___U3CInternalU3Ek__BackingField_2)); }
	inline StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * get_U3CInternalU3Ek__BackingField_2() const { return ___U3CInternalU3Ek__BackingField_2; }
	inline StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 ** get_address_of_U3CInternalU3Ek__BackingField_2() { return &___U3CInternalU3Ek__BackingField_2; }
	inline void set_U3CInternalU3Ek__BackingField_2(StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * value)
	{
		___U3CInternalU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInternalU3Ek__BackingField_2), (void*)value);
	}
};

struct StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D_StaticFields
{
public:
	// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task> Firebase.Storage.StorageReference::<>f__amU24cache0
	Func_2_t735384ACC76837997722E4642BA1F3CC06A9BB5B * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Func_2_t735384ACC76837997722E4642BA1F3CC06A9BB5B * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Func_2_t735384ACC76837997722E4642BA1F3CC06A9BB5B ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Func_2_t735384ACC76837997722E4642BA1F3CC06A9BB5B * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache0_3), (void*)value);
	}
};


// Firebase.Storage.StorageReference_<GetDownloadUrlAsync>c__AnonStoreyA
struct  U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_tDF77093ECF09B51AB6CAE83C2EFB4843381F64BF  : public RuntimeObject
{
public:
	// System.Threading.Tasks.TaskCompletionSource`1<System.Uri> Firebase.Storage.StorageReference_<GetDownloadUrlAsync>c__AnonStoreyA::result
	TaskCompletionSource_1_t4D9BCF80416BB1F8C888F6BBD375E56BDD7ED75B * ___result_0;
	// Firebase.Storage.StorageReference Firebase.Storage.StorageReference_<GetDownloadUrlAsync>c__AnonStoreyA::U24this
	StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * ___U24this_1;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_tDF77093ECF09B51AB6CAE83C2EFB4843381F64BF, ___result_0)); }
	inline TaskCompletionSource_1_t4D9BCF80416BB1F8C888F6BBD375E56BDD7ED75B * get_result_0() const { return ___result_0; }
	inline TaskCompletionSource_1_t4D9BCF80416BB1F8C888F6BBD375E56BDD7ED75B ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(TaskCompletionSource_1_t4D9BCF80416BB1F8C888F6BBD375E56BDD7ED75B * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_tDF77093ECF09B51AB6CAE83C2EFB4843381F64BF, ___U24this_1)); }
	inline StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * get_U24this_1() const { return ___U24this_1; }
	inline StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_1), (void*)value);
	}
};


// Firebase.Storage.StorageReference_<GetDownloadUrlAsync>c__AnonStoreyA_<GetDownloadUrlAsync>c__AnonStoreyB
struct  U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_tF8EF0AC8B42FE4CAC7ADF32E0FCDA3089AAC6D12  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<System.String> Firebase.Storage.StorageReference_<GetDownloadUrlAsync>c__AnonStoreyA_<GetDownloadUrlAsync>c__AnonStoreyB::task
	Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * ___task_0;
	// Firebase.Storage.StorageReference_<GetDownloadUrlAsync>c__AnonStoreyA Firebase.Storage.StorageReference_<GetDownloadUrlAsync>c__AnonStoreyA_<GetDownloadUrlAsync>c__AnonStoreyB::<>f__refU2410
	U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_tDF77093ECF09B51AB6CAE83C2EFB4843381F64BF * ___U3CU3Ef__refU2410_1;

public:
	inline static int32_t get_offset_of_task_0() { return static_cast<int32_t>(offsetof(U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_tF8EF0AC8B42FE4CAC7ADF32E0FCDA3089AAC6D12, ___task_0)); }
	inline Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * get_task_0() const { return ___task_0; }
	inline Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C ** get_address_of_task_0() { return &___task_0; }
	inline void set_task_0(Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * value)
	{
		___task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___task_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU2410_1() { return static_cast<int32_t>(offsetof(U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_tF8EF0AC8B42FE4CAC7ADF32E0FCDA3089AAC6D12, ___U3CU3Ef__refU2410_1)); }
	inline U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_tDF77093ECF09B51AB6CAE83C2EFB4843381F64BF * get_U3CU3Ef__refU2410_1() const { return ___U3CU3Ef__refU2410_1; }
	inline U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_tDF77093ECF09B51AB6CAE83C2EFB4843381F64BF ** get_address_of_U3CU3Ef__refU2410_1() { return &___U3CU3Ef__refU2410_1; }
	inline void set_U3CU3Ef__refU2410_1(U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_tDF77093ECF09B51AB6CAE83C2EFB4843381F64BF * value)
	{
		___U3CU3Ef__refU2410_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__refU2410_1), (void*)value);
	}
};


// Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1_<PutBytesUsingCompletionSourceAsync>c__AnonStorey2
struct  U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_tE72DD13D78B7AA4BC7CCEB2449AFCD2D060815CD  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal> Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1_<PutBytesUsingCompletionSourceAsync>c__AnonStorey2::task
	Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * ___task_0;
	// Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1 Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1_<PutBytesUsingCompletionSourceAsync>c__AnonStorey2::<>f__refU241
	U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6 * ___U3CU3Ef__refU241_1;

public:
	inline static int32_t get_offset_of_task_0() { return static_cast<int32_t>(offsetof(U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_tE72DD13D78B7AA4BC7CCEB2449AFCD2D060815CD, ___task_0)); }
	inline Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * get_task_0() const { return ___task_0; }
	inline Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 ** get_address_of_task_0() { return &___task_0; }
	inline void set_task_0(Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * value)
	{
		___task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___task_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU241_1() { return static_cast<int32_t>(offsetof(U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_tE72DD13D78B7AA4BC7CCEB2449AFCD2D060815CD, ___U3CU3Ef__refU241_1)); }
	inline U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6 * get_U3CU3Ef__refU241_1() const { return ___U3CU3Ef__refU241_1; }
	inline U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6 ** get_address_of_U3CU3Ef__refU241_1() { return &___U3CU3Ef__refU241_1; }
	inline void set_U3CU3Ef__refU241_1(U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6 * value)
	{
		___U3CU3Ef__refU241_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__refU241_1), (void*)value);
	}
};


// Firebase.Storage.StorageReference_<PutBytesUsingMonitorControllerAsync>c__AnonStorey0
struct  U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_t3B19F98B660AD6D0EF02F853700BCFA5AC49B317  : public RuntimeObject
{
public:
	// Firebase.Storage.MonitorControllerInternal Firebase.Storage.StorageReference_<PutBytesUsingMonitorControllerAsync>c__AnonStorey0::monitorController
	MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * ___monitorController_0;
	// Firebase.Storage.MetadataInternal Firebase.Storage.StorageReference_<PutBytesUsingMonitorControllerAsync>c__AnonStorey0::metadata
	MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * ___metadata_1;

public:
	inline static int32_t get_offset_of_monitorController_0() { return static_cast<int32_t>(offsetof(U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_t3B19F98B660AD6D0EF02F853700BCFA5AC49B317, ___monitorController_0)); }
	inline MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * get_monitorController_0() const { return ___monitorController_0; }
	inline MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC ** get_address_of_monitorController_0() { return &___monitorController_0; }
	inline void set_monitorController_0(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * value)
	{
		___monitorController_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monitorController_0), (void*)value);
	}

	inline static int32_t get_offset_of_metadata_1() { return static_cast<int32_t>(offsetof(U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_t3B19F98B660AD6D0EF02F853700BCFA5AC49B317, ___metadata_1)); }
	inline MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * get_metadata_1() const { return ___metadata_1; }
	inline MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 ** get_address_of_metadata_1() { return &___metadata_1; }
	inline void set_metadata_1(MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * value)
	{
		___metadata_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___metadata_1), (void*)value);
	}
};


// Firebase.Storage.StorageReference_TaskCompletionStatus
struct  TaskCompletionStatus_tBB1DB69F0E6FF1E8E4A5A89F863B03E761DEE105  : public RuntimeObject
{
public:
	// System.Boolean Firebase.Storage.StorageReference_TaskCompletionStatus::<IsSuccessful>k__BackingField
	bool ___U3CIsSuccessfulU3Ek__BackingField_0;
	// System.Boolean Firebase.Storage.StorageReference_TaskCompletionStatus::<IsCanceled>k__BackingField
	bool ___U3CIsCanceledU3Ek__BackingField_1;
	// System.Exception Firebase.Storage.StorageReference_TaskCompletionStatus::<Exception>k__BackingField
	Exception_t * ___U3CExceptionU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIsSuccessfulU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TaskCompletionStatus_tBB1DB69F0E6FF1E8E4A5A89F863B03E761DEE105, ___U3CIsSuccessfulU3Ek__BackingField_0)); }
	inline bool get_U3CIsSuccessfulU3Ek__BackingField_0() const { return ___U3CIsSuccessfulU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsSuccessfulU3Ek__BackingField_0() { return &___U3CIsSuccessfulU3Ek__BackingField_0; }
	inline void set_U3CIsSuccessfulU3Ek__BackingField_0(bool value)
	{
		___U3CIsSuccessfulU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIsCanceledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TaskCompletionStatus_tBB1DB69F0E6FF1E8E4A5A89F863B03E761DEE105, ___U3CIsCanceledU3Ek__BackingField_1)); }
	inline bool get_U3CIsCanceledU3Ek__BackingField_1() const { return ___U3CIsCanceledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsCanceledU3Ek__BackingField_1() { return &___U3CIsCanceledU3Ek__BackingField_1; }
	inline void set_U3CIsCanceledU3Ek__BackingField_1(bool value)
	{
		___U3CIsCanceledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CExceptionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TaskCompletionStatus_tBB1DB69F0E6FF1E8E4A5A89F863B03E761DEE105, ___U3CExceptionU3Ek__BackingField_2)); }
	inline Exception_t * get_U3CExceptionU3Ek__BackingField_2() const { return ___U3CExceptionU3Ek__BackingField_2; }
	inline Exception_t ** get_address_of_U3CExceptionU3Ek__BackingField_2() { return &___U3CExceptionU3Ek__BackingField_2; }
	inline void set_U3CExceptionU3Ek__BackingField_2(Exception_t * value)
	{
		___U3CExceptionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExceptionU3Ek__BackingField_2), (void*)value);
	}
};


// Firebase.Storage.UploadState
struct  UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC  : public RuntimeObject
{
public:
	// Firebase.Storage.Internal.TransferState Firebase.Storage.UploadState::<State>k__BackingField
	TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * ___U3CStateU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC, ___U3CStateU3Ek__BackingField_0)); }
	inline TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * get_U3CStateU3Ek__BackingField_0() const { return ___U3CStateU3Ek__BackingField_0; }
	inline TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D ** get_address_of_U3CStateU3Ek__BackingField_0() { return &___U3CStateU3Ek__BackingField_0; }
	inline void set_U3CStateU3Ek__BackingField_0(TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * value)
	{
		___U3CStateU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStateU3Ek__BackingField_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<Firebase.Storage.ErrorInternal,System.Tuple`2<System.Int32,System.Net.HttpStatusCode>>
struct  Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1945BC9B242D5BA56D16F642C8FC72526F39771B* ___entries_1;
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
	KeyCollection_t69D4BF72C4248356FDB0C3FA0B56859345FFD0F3 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0AB1C72F9CC4410564EAE481481585C239B1071F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B, ___entries_1)); }
	inline EntryU5BU5D_t1945BC9B242D5BA56D16F642C8FC72526F39771B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1945BC9B242D5BA56D16F642C8FC72526F39771B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1945BC9B242D5BA56D16F642C8FC72526F39771B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B, ___keys_7)); }
	inline KeyCollection_t69D4BF72C4248356FDB0C3FA0B56859345FFD0F3 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t69D4BF72C4248356FDB0C3FA0B56859345FFD0F3 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t69D4BF72C4248356FDB0C3FA0B56859345FFD0F3 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B, ___values_8)); }
	inline ValueCollection_t0AB1C72F9CC4410564EAE481481585C239B1071F * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0AB1C72F9CC4410564EAE481481585C239B1071F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0AB1C72F9CC4410564EAE481481585C239B1071F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Storage.Future_StorageMetadata_Action>
struct  Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3E2736654DD3C0BF348B614A48E87463894DCF66* ___entries_1;
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
	KeyCollection_t5E01BFEC179C802A1EE95FA0EFBFDA819DC6BE54 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tFD7AEC50631A23A18C23659A04C8D6D4C4715DD2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0, ___entries_1)); }
	inline EntryU5BU5D_t3E2736654DD3C0BF348B614A48E87463894DCF66* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3E2736654DD3C0BF348B614A48E87463894DCF66** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3E2736654DD3C0BF348B614A48E87463894DCF66* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0, ___keys_7)); }
	inline KeyCollection_t5E01BFEC179C802A1EE95FA0EFBFDA819DC6BE54 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t5E01BFEC179C802A1EE95FA0EFBFDA819DC6BE54 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t5E01BFEC179C802A1EE95FA0EFBFDA819DC6BE54 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0, ___values_8)); }
	inline ValueCollection_tFD7AEC50631A23A18C23659A04C8D6D4C4715DD2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tFD7AEC50631A23A18C23659A04C8D6D4C4715DD2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tFD7AEC50631A23A18C23659A04C8D6D4C4715DD2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>
struct  Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA05BA95E00489DDAC1566EE95B221AAF90082F8B* ___entries_1;
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
	KeyCollection_t6E101EED89C8A2990D5A4BBE105274D253E280DC * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t23FCF3B805E728E85FBF2C2246F11780502C23B1 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B, ___entries_1)); }
	inline EntryU5BU5D_tA05BA95E00489DDAC1566EE95B221AAF90082F8B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA05BA95E00489DDAC1566EE95B221AAF90082F8B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA05BA95E00489DDAC1566EE95B221AAF90082F8B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B, ___keys_7)); }
	inline KeyCollection_t6E101EED89C8A2990D5A4BBE105274D253E280DC * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6E101EED89C8A2990D5A4BBE105274D253E280DC ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6E101EED89C8A2990D5A4BBE105274D253E280DC * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B, ___values_8)); }
	inline ValueCollection_t23FCF3B805E728E85FBF2C2246F11780502C23B1 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t23FCF3B805E728E85FBF2C2246F11780502C23B1 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t23FCF3B805E728E85FBF2C2246F11780502C23B1 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Firebase.Storage.FirebaseStorage>
struct  Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3359D2BBACFE9EB1125C4A1D93E5BD6DD0416ED8* ___entries_1;
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
	KeyCollection_t75D3EF62EA89AA3DE0C3258AB6FA2074BFA253EB * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4A89DFD620FA7C427969ECC9BF1C3D75BA1C030B * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9, ___entries_1)); }
	inline EntryU5BU5D_t3359D2BBACFE9EB1125C4A1D93E5BD6DD0416ED8* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3359D2BBACFE9EB1125C4A1D93E5BD6DD0416ED8** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3359D2BBACFE9EB1125C4A1D93E5BD6DD0416ED8* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9, ___keys_7)); }
	inline KeyCollection_t75D3EF62EA89AA3DE0C3258AB6FA2074BFA253EB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t75D3EF62EA89AA3DE0C3258AB6FA2074BFA253EB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t75D3EF62EA89AA3DE0C3258AB6FA2074BFA253EB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9, ___values_8)); }
	inline ValueCollection_t4A89DFD620FA7C427969ECC9BF1C3D75BA1C030B * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4A89DFD620FA7C427969ECC9BF1C3D75BA1C030B ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4A89DFD620FA7C427969ECC9BF1C3D75BA1C030B * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Firebase.Storage.Internal.ModuleLogger>
struct  List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ModuleLoggerU5BU5D_tDAEA754824AAE2B818C2396A5380724CA2D84D70* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511, ____items_1)); }
	inline ModuleLoggerU5BU5D_tDAEA754824AAE2B818C2396A5380724CA2D84D70* get__items_1() const { return ____items_1; }
	inline ModuleLoggerU5BU5D_tDAEA754824AAE2B818C2396A5380724CA2D84D70** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ModuleLoggerU5BU5D_tDAEA754824AAE2B818C2396A5380724CA2D84D70* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ModuleLoggerU5BU5D_tDAEA754824AAE2B818C2396A5380724CA2D84D70* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511_StaticFields, ____emptyArray_5)); }
	inline ModuleLoggerU5BU5D_tDAEA754824AAE2B818C2396A5380724CA2D84D70* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ModuleLoggerU5BU5D_tDAEA754824AAE2B818C2396A5380724CA2D84D70** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ModuleLoggerU5BU5D_tDAEA754824AAE2B818C2396A5380724CA2D84D70* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.WeakReference>
struct  List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WeakReferenceU5BU5D_t3D4D832B20124D000C6A37472DF46579D0214539* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9, ____items_1)); }
	inline WeakReferenceU5BU5D_t3D4D832B20124D000C6A37472DF46579D0214539* get__items_1() const { return ____items_1; }
	inline WeakReferenceU5BU5D_t3D4D832B20124D000C6A37472DF46579D0214539** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WeakReferenceU5BU5D_t3D4D832B20124D000C6A37472DF46579D0214539* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	WeakReferenceU5BU5D_t3D4D832B20124D000C6A37472DF46579D0214539* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9_StaticFields, ____emptyArray_5)); }
	inline WeakReferenceU5BU5D_t3D4D832B20124D000C6A37472DF46579D0214539* get__emptyArray_5() const { return ____emptyArray_5; }
	inline WeakReferenceU5BU5D_t3D4D832B20124D000C6A37472DF46579D0214539** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(WeakReferenceU5BU5D_t3D4D832B20124D000C6A37472DF46579D0214539* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct  ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
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


// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.MetadataInternal>
struct  TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454, ___m_task_0)); }
	inline Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.StorageMetadata>
struct  TaskCompletionSource_1_t890D1B8924B397DFA64F64F0E55EA5EBB3CAFA5F  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t44C5AB6F81509E35FFC0C48F45E84AC860DE2DF4 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t890D1B8924B397DFA64F64F0E55EA5EBB3CAFA5F, ___m_task_0)); }
	inline Task_1_t44C5AB6F81509E35FFC0C48F45E84AC860DE2DF4 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t44C5AB6F81509E35FFC0C48F45E84AC860DE2DF4 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t44C5AB6F81509E35FFC0C48F45E84AC860DE2DF4 * value)
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


// System.Threading.Tasks.TaskCompletionSource`1<System.Uri>
struct  TaskCompletionSource_1_t4D9BCF80416BB1F8C888F6BBD375E56BDD7ED75B  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tB1F9B3B5D25AD547A77258C869D2EC0ACED9EB78 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t4D9BCF80416BB1F8C888F6BBD375E56BDD7ED75B, ___m_task_0)); }
	inline Task_1_tB1F9B3B5D25AD547A77258C869D2EC0ACED9EB78 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tB1F9B3B5D25AD547A77258C869D2EC0ACED9EB78 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tB1F9B3B5D25AD547A77258C869D2EC0ACED9EB78 * value)
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
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


// System.Collections.Generic.List`1_Enumerator<System.WeakReference>
struct  Enumerator_tD5C672061FDC03FC142D1B5CF9316AD46B77D88E 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tD5C672061FDC03FC142D1B5CF9316AD46B77D88E, ___list_0)); }
	inline List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9 * get_list_0() const { return ___list_0; }
	inline List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tD5C672061FDC03FC142D1B5CF9316AD46B77D88E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tD5C672061FDC03FC142D1B5CF9316AD46B77D88E, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tD5C672061FDC03FC142D1B5CF9316AD46B77D88E, ___current_3)); }
	inline WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * get_current_3() const { return ___current_3; }
	inline WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
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


// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
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


// System.Threading.CancellationToken
struct  CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB, ___m_source_0)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_pinvoke
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_com
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct  SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
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


// Firebase.Storage.ErrorInternal
struct  ErrorInternal_tC8AE679BC3DD33F99EAF671BF199D6AEFBF55E4D 
{
public:
	// System.Int32 Firebase.Storage.ErrorInternal::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ErrorInternal_tC8AE679BC3DD33F99EAF671BF199D6AEFBF55E4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.Storage.MonitorControllerInternal_<OnPaused>c__AnonStorey1
struct  U3COnPausedU3Ec__AnonStorey1_tDD6993DBEF4E65B1E82EA05A20D7399C43694D0C  : public RuntimeObject
{
public:
	// System.IntPtr Firebase.Storage.MonitorControllerInternal_<OnPaused>c__AnonStorey1::controllerPtr
	intptr_t ___controllerPtr_0;

public:
	inline static int32_t get_offset_of_controllerPtr_0() { return static_cast<int32_t>(offsetof(U3COnPausedU3Ec__AnonStorey1_tDD6993DBEF4E65B1E82EA05A20D7399C43694D0C, ___controllerPtr_0)); }
	inline intptr_t get_controllerPtr_0() const { return ___controllerPtr_0; }
	inline intptr_t* get_address_of_controllerPtr_0() { return &___controllerPtr_0; }
	inline void set_controllerPtr_0(intptr_t value)
	{
		___controllerPtr_0 = value;
	}
};


// Firebase.Storage.MonitorControllerInternal_<OnProgress>c__AnonStorey2
struct  U3COnProgressU3Ec__AnonStorey2_tAE87511B3CACF72E178B767C52D51B2AFF8BA607  : public RuntimeObject
{
public:
	// System.IntPtr Firebase.Storage.MonitorControllerInternal_<OnProgress>c__AnonStorey2::controllerPtr
	intptr_t ___controllerPtr_0;

public:
	inline static int32_t get_offset_of_controllerPtr_0() { return static_cast<int32_t>(offsetof(U3COnProgressU3Ec__AnonStorey2_tAE87511B3CACF72E178B767C52D51B2AFF8BA607, ___controllerPtr_0)); }
	inline intptr_t get_controllerPtr_0() const { return ___controllerPtr_0; }
	inline intptr_t* get_address_of_controllerPtr_0() { return &___controllerPtr_0; }
	inline void set_controllerPtr_0(intptr_t value)
	{
		___controllerPtr_0 = value;
	}
};


// Firebase.Storage.StorageMetadata
struct  StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8  : public RuntimeObject
{
public:
	// Firebase.Storage.StorageReference Firebase.Storage.StorageMetadata::storageReference
	StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * ___storageReference_1;
	// Firebase.Storage.MetadataInternal Firebase.Storage.StorageMetadata::<Internal>k__BackingField
	MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * ___U3CInternalU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_storageReference_1() { return static_cast<int32_t>(offsetof(StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8, ___storageReference_1)); }
	inline StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * get_storageReference_1() const { return ___storageReference_1; }
	inline StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D ** get_address_of_storageReference_1() { return &___storageReference_1; }
	inline void set_storageReference_1(StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * value)
	{
		___storageReference_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storageReference_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInternalU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8, ___U3CInternalU3Ek__BackingField_2)); }
	inline MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * get_U3CInternalU3Ek__BackingField_2() const { return ___U3CInternalU3Ek__BackingField_2; }
	inline MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 ** get_address_of_U3CInternalU3Ek__BackingField_2() { return &___U3CInternalU3Ek__BackingField_2; }
	inline void set_U3CInternalU3Ek__BackingField_2(MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * value)
	{
		___U3CInternalU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInternalU3Ek__BackingField_2), (void*)value);
	}
};

struct StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8_StaticFields
{
public:
	// System.DateTime Firebase.Storage.StorageMetadata::UnixEpoch
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___UnixEpoch_0;

public:
	inline static int32_t get_offset_of_UnixEpoch_0() { return static_cast<int32_t>(offsetof(StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8_StaticFields, ___UnixEpoch_0)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_UnixEpoch_0() const { return ___UnixEpoch_0; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_UnixEpoch_0() { return &___UnixEpoch_0; }
	inline void set_UnixEpoch_0(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___UnixEpoch_0 = value;
	}
};


// Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1
struct  U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.GCHandle Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1::bytesHandle
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___bytesHandle_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.StorageMetadata> Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1::completionSource
	TaskCompletionSource_1_t890D1B8924B397DFA64F64F0E55EA5EBB3CAFA5F * ___completionSource_1;
	// Firebase.Storage.Internal.TransferStateUpdater`1<Firebase.Storage.UploadState> Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1::transferStateUpdater
	TransferStateUpdater_1_t1346F4DF4E482A3BE7D6659C83E975328E7BC48B * ___transferStateUpdater_2;
	// Firebase.Storage.StorageReference Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1::U24this
	StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * ___U24this_3;

public:
	inline static int32_t get_offset_of_bytesHandle_0() { return static_cast<int32_t>(offsetof(U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6, ___bytesHandle_0)); }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  get_bytesHandle_0() const { return ___bytesHandle_0; }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * get_address_of_bytesHandle_0() { return &___bytesHandle_0; }
	inline void set_bytesHandle_0(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  value)
	{
		___bytesHandle_0 = value;
	}

	inline static int32_t get_offset_of_completionSource_1() { return static_cast<int32_t>(offsetof(U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6, ___completionSource_1)); }
	inline TaskCompletionSource_1_t890D1B8924B397DFA64F64F0E55EA5EBB3CAFA5F * get_completionSource_1() const { return ___completionSource_1; }
	inline TaskCompletionSource_1_t890D1B8924B397DFA64F64F0E55EA5EBB3CAFA5F ** get_address_of_completionSource_1() { return &___completionSource_1; }
	inline void set_completionSource_1(TaskCompletionSource_1_t890D1B8924B397DFA64F64F0E55EA5EBB3CAFA5F * value)
	{
		___completionSource_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completionSource_1), (void*)value);
	}

	inline static int32_t get_offset_of_transferStateUpdater_2() { return static_cast<int32_t>(offsetof(U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6, ___transferStateUpdater_2)); }
	inline TransferStateUpdater_1_t1346F4DF4E482A3BE7D6659C83E975328E7BC48B * get_transferStateUpdater_2() const { return ___transferStateUpdater_2; }
	inline TransferStateUpdater_1_t1346F4DF4E482A3BE7D6659C83E975328E7BC48B ** get_address_of_transferStateUpdater_2() { return &___transferStateUpdater_2; }
	inline void set_transferStateUpdater_2(TransferStateUpdater_1_t1346F4DF4E482A3BE7D6659C83E975328E7BC48B * value)
	{
		___transferStateUpdater_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transferStateUpdater_2), (void*)value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6, ___U24this_3)); }
	inline StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * get_U24this_3() const { return ___U24this_3; }
	inline StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_3), (void*)value);
	}
};


// System.DateTimeKind
struct  DateTimeKind_t6BC23532930B812ABFCCEB2B61BC233712B180EE 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_t6BC23532930B812ABFCCEB2B61BC233712B180EE, ___value___2)); }
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

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.HttpStatusCode
struct  HttpStatusCode_tEEC31491D56EE5BDB252F07906878274FD22AC0C 
{
public:
	// System.Int32 System.Net.HttpStatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpStatusCode_tEEC31491D56EE5BDB252F07906878274FD22AC0C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t7155EF9CB120186C6753EE17470D37E148CB2EF1 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t7155EF9CB120186C6753EE17470D37E148CB2EF1, ___value___2)); }
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


// System.Threading.CancellationTokenRegistration
struct  CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2 
{
public:
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  ___m_registrationInfo_1;

public:
	inline static int32_t get_offset_of_m_callbackInfo_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2, ___m_callbackInfo_0)); }
	inline CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * get_m_callbackInfo_0() const { return ___m_callbackInfo_0; }
	inline CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 ** get_address_of_m_callbackInfo_0() { return &___m_callbackInfo_0; }
	inline void set_m_callbackInfo_0(CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * value)
	{
		___m_callbackInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callbackInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_registrationInfo_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2, ___m_registrationInfo_1)); }
	inline SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  get_m_registrationInfo_1() const { return ___m_registrationInfo_1; }
	inline SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE * get_address_of_m_registrationInfo_1() { return &___m_registrationInfo_1; }
	inline void set_m_registrationInfo_1(SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  value)
	{
		___m_registrationInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_registrationInfo_1))->___m_source_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshaled_pinvoke
{
	CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshaled_com
{
	CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  ___m_registrationInfo_1;
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


// Firebase.Storage.ControllerInternal
struct  ControllerInternal_t2621A083A4D903DB174839BFB5EFA6E419A3A33B  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Storage.ControllerInternal::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.Storage.ControllerInternal::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(ControllerInternal_t2621A083A4D903DB174839BFB5EFA6E419A3A33B, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(ControllerInternal_t2621A083A4D903DB174839BFB5EFA6E419A3A33B, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Storage.FirebaseStorageInternal
struct  FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Storage.FirebaseStorageInternal::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.Storage.FirebaseStorageInternal::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Storage.Internal.ModuleLogger
struct  ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC  : public RuntimeObject
{
public:
	// Firebase.Storage.Internal.ModuleLogger Firebase.Storage.Internal.ModuleLogger::parent
	ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * ___parent_2;
	// System.Collections.Generic.List`1<Firebase.Storage.Internal.ModuleLogger> Firebase.Storage.Internal.ModuleLogger::children
	List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511 * ___children_3;
	// System.String Firebase.Storage.Internal.ModuleLogger::tag
	String_t* ___tag_4;
	// Firebase.LogLevel Firebase.Storage.Internal.ModuleLogger::logLevel
	int32_t ___logLevel_5;

public:
	inline static int32_t get_offset_of_parent_2() { return static_cast<int32_t>(offsetof(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC, ___parent_2)); }
	inline ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * get_parent_2() const { return ___parent_2; }
	inline ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC ** get_address_of_parent_2() { return &___parent_2; }
	inline void set_parent_2(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * value)
	{
		___parent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_2), (void*)value);
	}

	inline static int32_t get_offset_of_children_3() { return static_cast<int32_t>(offsetof(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC, ___children_3)); }
	inline List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511 * get_children_3() const { return ___children_3; }
	inline List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511 ** get_address_of_children_3() { return &___children_3; }
	inline void set_children_3(List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511 * value)
	{
		___children_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___children_3), (void*)value);
	}

	inline static int32_t get_offset_of_tag_4() { return static_cast<int32_t>(offsetof(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC, ___tag_4)); }
	inline String_t* get_tag_4() const { return ___tag_4; }
	inline String_t** get_address_of_tag_4() { return &___tag_4; }
	inline void set_tag_4(String_t* value)
	{
		___tag_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tag_4), (void*)value);
	}

	inline static int32_t get_offset_of_logLevel_5() { return static_cast<int32_t>(offsetof(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC, ___logLevel_5)); }
	inline int32_t get_logLevel_5() const { return ___logLevel_5; }
	inline int32_t* get_address_of_logLevel_5() { return &___logLevel_5; }
	inline void set_logLevel_5(int32_t value)
	{
		___logLevel_5 = value;
	}
};

struct ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_StaticFields
{
public:
	// System.Object Firebase.Storage.Internal.ModuleLogger::lockObject
	RuntimeObject * ___lockObject_0;
	// System.Collections.Generic.List`1<System.WeakReference> Firebase.Storage.Internal.ModuleLogger::roots
	List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9 * ___roots_1;

public:
	inline static int32_t get_offset_of_lockObject_0() { return static_cast<int32_t>(offsetof(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_StaticFields, ___lockObject_0)); }
	inline RuntimeObject * get_lockObject_0() const { return ___lockObject_0; }
	inline RuntimeObject ** get_address_of_lockObject_0() { return &___lockObject_0; }
	inline void set_lockObject_0(RuntimeObject * value)
	{
		___lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lockObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_roots_1() { return static_cast<int32_t>(offsetof(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_StaticFields, ___roots_1)); }
	inline List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9 * get_roots_1() const { return ___roots_1; }
	inline List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9 ** get_address_of_roots_1() { return &___roots_1; }
	inline void set_roots_1(List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9 * value)
	{
		___roots_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roots_1), (void*)value);
	}
};


// Firebase.Storage.MetadataInternal
struct  MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Storage.MetadataInternal::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.Storage.MetadataInternal::swigCMemOwn
	bool ___swigCMemOwn_1;
	// Firebase.Storage.FirebaseStorage Firebase.Storage.MetadataInternal::storage
	FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * ___storage_2;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_storage_2() { return static_cast<int32_t>(offsetof(MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37, ___storage_2)); }
	inline FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * get_storage_2() const { return ___storage_2; }
	inline FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 ** get_address_of_storage_2() { return &___storage_2; }
	inline void set_storage_2(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * value)
	{
		___storage_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storage_2), (void*)value);
	}
};


// Firebase.Storage.MonitorControllerInternal
struct  MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Storage.MonitorControllerInternal::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.Storage.MonitorControllerInternal::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.EventHandler`1<System.EventArgs> Firebase.Storage.MonitorControllerInternal::Paused
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___Paused_2;
	// System.EventHandler`1<System.EventArgs> Firebase.Storage.MonitorControllerInternal::Progress
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___Progress_3;
	// System.Action Firebase.Storage.MonitorControllerInternal::forwardToPausedEvent
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___forwardToPausedEvent_4;
	// System.Action Firebase.Storage.MonitorControllerInternal::forwardToProgressEvent
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___forwardToProgressEvent_5;
	// Firebase.Storage.StorageReferenceInternal Firebase.Storage.MonitorControllerInternal::storageReference
	StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * ___storageReference_6;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_Paused_2() { return static_cast<int32_t>(offsetof(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC, ___Paused_2)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_Paused_2() const { return ___Paused_2; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_Paused_2() { return &___Paused_2; }
	inline void set_Paused_2(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___Paused_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Paused_2), (void*)value);
	}

	inline static int32_t get_offset_of_Progress_3() { return static_cast<int32_t>(offsetof(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC, ___Progress_3)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_Progress_3() const { return ___Progress_3; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_Progress_3() { return &___Progress_3; }
	inline void set_Progress_3(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___Progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_forwardToPausedEvent_4() { return static_cast<int32_t>(offsetof(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC, ___forwardToPausedEvent_4)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_forwardToPausedEvent_4() const { return ___forwardToPausedEvent_4; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_forwardToPausedEvent_4() { return &___forwardToPausedEvent_4; }
	inline void set_forwardToPausedEvent_4(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___forwardToPausedEvent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___forwardToPausedEvent_4), (void*)value);
	}

	inline static int32_t get_offset_of_forwardToProgressEvent_5() { return static_cast<int32_t>(offsetof(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC, ___forwardToProgressEvent_5)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_forwardToProgressEvent_5() const { return ___forwardToProgressEvent_5; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_forwardToProgressEvent_5() { return &___forwardToProgressEvent_5; }
	inline void set_forwardToProgressEvent_5(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___forwardToProgressEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___forwardToProgressEvent_5), (void*)value);
	}

	inline static int32_t get_offset_of_storageReference_6() { return static_cast<int32_t>(offsetof(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC, ___storageReference_6)); }
	inline StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * get_storageReference_6() const { return ___storageReference_6; }
	inline StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 ** get_address_of_storageReference_6() { return &___storageReference_6; }
	inline void set_storageReference_6(StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * value)
	{
		___storageReference_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storageReference_6), (void*)value);
	}
};

struct MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference> Firebase.Storage.MonitorControllerInternal::cPtrsToProxies
	Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B * ___cPtrsToProxies_7;
	// Firebase.Storage.MonitorControllerInternal_MonitorControllerEventDelegate Firebase.Storage.MonitorControllerInternal::<>f__mgU24cache0
	MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * ___U3CU3Ef__mgU24cache0_8;
	// Firebase.Storage.MonitorControllerInternal_MonitorControllerEventDelegate Firebase.Storage.MonitorControllerInternal::<>f__mgU24cache1
	MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * ___U3CU3Ef__mgU24cache1_9;

public:
	inline static int32_t get_offset_of_cPtrsToProxies_7() { return static_cast<int32_t>(offsetof(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_StaticFields, ___cPtrsToProxies_7)); }
	inline Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B * get_cPtrsToProxies_7() const { return ___cPtrsToProxies_7; }
	inline Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B ** get_address_of_cPtrsToProxies_7() { return &___cPtrsToProxies_7; }
	inline void set_cPtrsToProxies_7(Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B * value)
	{
		___cPtrsToProxies_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cPtrsToProxies_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_8() { return static_cast<int32_t>(offsetof(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_StaticFields, ___U3CU3Ef__mgU24cache0_8)); }
	inline MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * get_U3CU3Ef__mgU24cache0_8() const { return ___U3CU3Ef__mgU24cache0_8; }
	inline MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 ** get_address_of_U3CU3Ef__mgU24cache0_8() { return &___U3CU3Ef__mgU24cache0_8; }
	inline void set_U3CU3Ef__mgU24cache0_8(MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * value)
	{
		___U3CU3Ef__mgU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_9() { return static_cast<int32_t>(offsetof(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_StaticFields, ___U3CU3Ef__mgU24cache1_9)); }
	inline MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * get_U3CU3Ef__mgU24cache1_9() const { return ___U3CU3Ef__mgU24cache1_9; }
	inline MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 ** get_address_of_U3CU3Ef__mgU24cache1_9() { return &___U3CU3Ef__mgU24cache1_9; }
	inline void set_U3CU3Ef__mgU24cache1_9(MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * value)
	{
		___U3CU3Ef__mgU24cache1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache1_9), (void*)value);
	}
};


// Firebase.Storage.StorageException
struct  StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648  : public Exception_t
{
public:
	// System.Int32 Firebase.Storage.StorageException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_19;
	// System.Int32 Firebase.Storage.StorageException::<HttpResultCode>k__BackingField
	int32_t ___U3CHttpResultCodeU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648, ___U3CErrorCodeU3Ek__BackingField_19)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_19() const { return ___U3CErrorCodeU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_19() { return &___U3CErrorCodeU3Ek__BackingField_19; }
	inline void set_U3CErrorCodeU3Ek__BackingField_19(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CHttpResultCodeU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648, ___U3CHttpResultCodeU3Ek__BackingField_20)); }
	inline int32_t get_U3CHttpResultCodeU3Ek__BackingField_20() const { return ___U3CHttpResultCodeU3Ek__BackingField_20; }
	inline int32_t* get_address_of_U3CHttpResultCodeU3Ek__BackingField_20() { return &___U3CHttpResultCodeU3Ek__BackingField_20; }
	inline void set_U3CHttpResultCodeU3Ek__BackingField_20(int32_t value)
	{
		___U3CHttpResultCodeU3Ek__BackingField_20 = value;
	}
};

struct StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<Firebase.Storage.ErrorInternal,System.Tuple`2<System.Int32,System.Net.HttpStatusCode>> Firebase.Storage.StorageException::errorToStorageErrorAndHttpStatusCode
	Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B * ___errorToStorageErrorAndHttpStatusCode_17;
	// System.Tuple`2<System.Int32,System.Net.HttpStatusCode> Firebase.Storage.StorageException::unknownError
	Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * ___unknownError_18;

public:
	inline static int32_t get_offset_of_errorToStorageErrorAndHttpStatusCode_17() { return static_cast<int32_t>(offsetof(StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648_StaticFields, ___errorToStorageErrorAndHttpStatusCode_17)); }
	inline Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B * get_errorToStorageErrorAndHttpStatusCode_17() const { return ___errorToStorageErrorAndHttpStatusCode_17; }
	inline Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B ** get_address_of_errorToStorageErrorAndHttpStatusCode_17() { return &___errorToStorageErrorAndHttpStatusCode_17; }
	inline void set_errorToStorageErrorAndHttpStatusCode_17(Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B * value)
	{
		___errorToStorageErrorAndHttpStatusCode_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorToStorageErrorAndHttpStatusCode_17), (void*)value);
	}

	inline static int32_t get_offset_of_unknownError_18() { return static_cast<int32_t>(offsetof(StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648_StaticFields, ___unknownError_18)); }
	inline Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * get_unknownError_18() const { return ___unknownError_18; }
	inline Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D ** get_address_of_unknownError_18() { return &___unknownError_18; }
	inline void set_unknownError_18(Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * value)
	{
		___unknownError_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unknownError_18), (void*)value);
	}
};


// Firebase.Storage.StorageReferenceInternal
struct  StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Storage.StorageReferenceInternal::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.Storage.StorageReferenceInternal::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
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


// System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>
struct  Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3, ___m_result_40)); }
	inline MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * get_m_result_40() const { return ___m_result_40; }
	inline MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tB71FCBD1CFAA6DAC3DCD508EF623A7E9C860943B * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tD51875DE26A3F401707CE0CD26076F8F8D05BB98 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tB71FCBD1CFAA6DAC3DCD508EF623A7E9C860943B * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tB71FCBD1CFAA6DAC3DCD508EF623A7E9C860943B ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tB71FCBD1CFAA6DAC3DCD508EF623A7E9C860943B * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tD51875DE26A3F401707CE0CD26076F8F8D05BB98 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tD51875DE26A3F401707CE0CD26076F8F8D05BB98 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tD51875DE26A3F401707CE0CD26076F8F8D05BB98 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata>
struct  Task_1_t44C5AB6F81509E35FFC0C48F45E84AC860DE2DF4  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t44C5AB6F81509E35FFC0C48F45E84AC860DE2DF4, ___m_result_40)); }
	inline StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * get_m_result_40() const { return ___m_result_40; }
	inline StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t44C5AB6F81509E35FFC0C48F45E84AC860DE2DF4_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t73A8CD4A3B0009F3BD0BF7ACFB1AC030DCEA2C96 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t2A6C33C882920E133633CCBA8663F10CADE8ED72 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t44C5AB6F81509E35FFC0C48F45E84AC860DE2DF4_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t73A8CD4A3B0009F3BD0BF7ACFB1AC030DCEA2C96 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t73A8CD4A3B0009F3BD0BF7ACFB1AC030DCEA2C96 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t73A8CD4A3B0009F3BD0BF7ACFB1AC030DCEA2C96 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t44C5AB6F81509E35FFC0C48F45E84AC860DE2DF4_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t2A6C33C882920E133633CCBA8663F10CADE8ED72 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t2A6C33C882920E133633CCBA8663F10CADE8ED72 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t2A6C33C882920E133633CCBA8663F10CADE8ED72 * value)
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


// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>
struct  Task_1_t64029F49DCFC18B0FB806DE97C2EB856C0941C52  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t64029F49DCFC18B0FB806DE97C2EB856C0941C52, ___m_result_40)); }
	inline Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * get_m_result_40() const { return ___m_result_40; }
	inline Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t64029F49DCFC18B0FB806DE97C2EB856C0941C52_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t79AD5343DD47D3DA4608B7796B19E7F4BB73AF73 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t1AEC16D2716B0B33EE832FC58C1BE41FD2F25576 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t64029F49DCFC18B0FB806DE97C2EB856C0941C52_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t79AD5343DD47D3DA4608B7796B19E7F4BB73AF73 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t79AD5343DD47D3DA4608B7796B19E7F4BB73AF73 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t79AD5343DD47D3DA4608B7796B19E7F4BB73AF73 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t64029F49DCFC18B0FB806DE97C2EB856C0941C52_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t1AEC16D2716B0B33EE832FC58C1BE41FD2F25576 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t1AEC16D2716B0B33EE832FC58C1BE41FD2F25576 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t1AEC16D2716B0B33EE832FC58C1BE41FD2F25576 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Uri>
struct  Task_1_tB1F9B3B5D25AD547A77258C869D2EC0ACED9EB78  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tB1F9B3B5D25AD547A77258C869D2EC0ACED9EB78, ___m_result_40)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_m_result_40() const { return ___m_result_40; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tB1F9B3B5D25AD547A77258C869D2EC0ACED9EB78_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t74BBAB1C0270734319C7AEFB4ED24158D62C27DB * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC6E5E6F30A73DD33118325C0813B85C7705F205D * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tB1F9B3B5D25AD547A77258C869D2EC0ACED9EB78_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t74BBAB1C0270734319C7AEFB4ED24158D62C27DB * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t74BBAB1C0270734319C7AEFB4ED24158D62C27DB ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t74BBAB1C0270734319C7AEFB4ED24158D62C27DB * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tB1F9B3B5D25AD547A77258C869D2EC0ACED9EB78_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tC6E5E6F30A73DD33118325C0813B85C7705F205D * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tC6E5E6F30A73DD33118325C0813B85C7705F205D ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tC6E5E6F30A73DD33118325C0813B85C7705F205D * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Tuple`2<System.Int32,System.Int32Enum>
struct  Tuple_2_tAA2ECE8873707FEE165573740A8A4A16F00C3CF8  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	int32_t ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	int32_t ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_tAA2ECE8873707FEE165573740A8A4A16F00C3CF8, ___m_Item1_0)); }
	inline int32_t get_m_Item1_0() const { return ___m_Item1_0; }
	inline int32_t* get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(int32_t value)
	{
		___m_Item1_0 = value;
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_tAA2ECE8873707FEE165573740A8A4A16F00C3CF8, ___m_Item2_1)); }
	inline int32_t get_m_Item2_1() const { return ___m_Item2_1; }
	inline int32_t* get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(int32_t value)
	{
		___m_Item2_1 = value;
	}
};


// System.Tuple`2<System.Int32,System.Net.HttpStatusCode>
struct  Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	int32_t ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	int32_t ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D, ___m_Item1_0)); }
	inline int32_t get_m_Item1_0() const { return ___m_Item1_0; }
	inline int32_t* get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(int32_t value)
	{
		___m_Item1_0 = value;
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D, ___m_Item2_1)); }
	inline int32_t get_m_Item2_1() const { return ___m_Item2_1; }
	inline int32_t* get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(int32_t value)
	{
		___m_Item2_1 = value;
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


// Firebase.Storage.Future_StorageMetadata
struct  Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028  : public FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Storage.Future_StorageMetadata::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_2;
	// System.IntPtr Firebase.Storage.Future_StorageMetadata::callbackData
	intptr_t ___callbackData_6;
	// Firebase.Storage.Future_StorageMetadata_SWIG_CompletionDelegate Firebase.Storage.Future_StorageMetadata::SWIG_CompletionCB
	SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E * ___SWIG_CompletionCB_7;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028, ___swigCPtr_2)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_2))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_callbackData_6() { return static_cast<int32_t>(offsetof(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028, ___callbackData_6)); }
	inline intptr_t get_callbackData_6() const { return ___callbackData_6; }
	inline intptr_t* get_address_of_callbackData_6() { return &___callbackData_6; }
	inline void set_callbackData_6(intptr_t value)
	{
		___callbackData_6 = value;
	}

	inline static int32_t get_offset_of_SWIG_CompletionCB_7() { return static_cast<int32_t>(offsetof(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028, ___SWIG_CompletionCB_7)); }
	inline SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E * get_SWIG_CompletionCB_7() const { return ___SWIG_CompletionCB_7; }
	inline SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E ** get_address_of_SWIG_CompletionCB_7() { return &___SWIG_CompletionCB_7; }
	inline void set_SWIG_CompletionCB_7(SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E * value)
	{
		___SWIG_CompletionCB_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SWIG_CompletionCB_7), (void*)value);
	}
};

struct Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Storage.Future_StorageMetadata_Action> Firebase.Storage.Future_StorageMetadata::Callbacks
	Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0 * ___Callbacks_3;
	// System.Int32 Firebase.Storage.Future_StorageMetadata::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.Storage.Future_StorageMetadata::CallbackLock
	RuntimeObject * ___CallbackLock_5;

public:
	inline static int32_t get_offset_of_Callbacks_3() { return static_cast<int32_t>(offsetof(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_StaticFields, ___Callbacks_3)); }
	inline Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0 * get_Callbacks_3() const { return ___Callbacks_3; }
	inline Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0 ** get_address_of_Callbacks_3() { return &___Callbacks_3; }
	inline void set_Callbacks_3(Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0 * value)
	{
		___Callbacks_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callbacks_3), (void*)value);
	}

	inline static int32_t get_offset_of_CallbackIndex_4() { return static_cast<int32_t>(offsetof(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_StaticFields, ___CallbackIndex_4)); }
	inline int32_t get_CallbackIndex_4() const { return ___CallbackIndex_4; }
	inline int32_t* get_address_of_CallbackIndex_4() { return &___CallbackIndex_4; }
	inline void set_CallbackIndex_4(int32_t value)
	{
		___CallbackIndex_4 = value;
	}

	inline static int32_t get_offset_of_CallbackLock_5() { return static_cast<int32_t>(offsetof(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_StaticFields, ___CallbackLock_5)); }
	inline RuntimeObject * get_CallbackLock_5() const { return ___CallbackLock_5; }
	inline RuntimeObject ** get_address_of_CallbackLock_5() { return &___CallbackLock_5; }
	inline void set_CallbackLock_5(RuntimeObject * value)
	{
		___CallbackLock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallbackLock_5), (void*)value);
	}
};


// Firebase.Storage.Future_StorageMetadata_Action
struct  Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Storage.Future_StorageMetadata_SWIG_CompletionDelegate
struct  SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Storage.MonitorControllerInternal_MonitorControllerEventDelegate
struct  MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate
struct  ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate
struct  ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper_SWIGStringDelegate
struct  SWIGStringDelegate_t48899BF08485B25CBFA52342EB2EEE7DB1AF3618  : public MulticastDelegate_t
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


// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>
struct  Action_1_tA9A642AF9CC38CF5318AE5A2A9A3C22347AF10F4  : public MulticastDelegate_t
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


// System.Func`1<Firebase.Storage.StorageMetadata>
struct  Func_1_t778EB7B16100D642FF56D8271B366EFC64995FB0  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Uri>
struct  Func_1_tB65A59385155168BA8513081365F0C8F6E71EB27  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>,System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>
struct  Func_2_tAA075D43E9257FE76DA85CD9479662741AD86D03  : public MulticastDelegate_t
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


// System.MemberAccessException
struct  MemberAccessException_tDA869AFFB4FC1EA0EEF3143D85999710AC4774F0  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
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


// System.Reflection.TargetException
struct  TargetException_tF055BE26B63ED0C556BCD5B31BE911D1F91AA88E  : public ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74
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


// System.FieldAccessException
struct  FieldAccessException_tBFF096C9CF3CA2BF95A3D596D7E50EF32B178BDF  : public MemberAccessException_tDA869AFFB4FC1EA0EEF3143D85999710AC4774F0
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
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
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
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m8F5E306A3F995390237D97553B63674C8D1D725F_gshared (Dictionary_2_tE930FC0A0DF3FBFFE9DC13EED210134C371C368E * __this, intptr_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m26B2DBC3BE8767E18A97FFCF3FB2EFC766886BD4_gshared (Dictionary_2_tE930FC0A0DF3FBFFE9DC13EED210134C371C368E * __this, intptr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mB972A6602BDD10CBB612188FDED9917370EC3F17_gshared (Dictionary_2_tE930FC0A0DF3FBFFE9DC13EED210134C371C368E * __this, intptr_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m901D4901A751B7C8F3CCD2608AA792ADBF53B75A_gshared (Dictionary_2_tE930FC0A0DF3FBFFE9DC13EED210134C371C368E * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m0C8A9A1DBCB1FEFD1FF6A4E807D329949B925A76_gshared (ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mBBE794F84BEA3B0C0AA78B721052CAB5EDC4AA85_gshared (Dictionary_2_tBE0C00013456CA812FD310466AF2583AE3E9B193 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// !1 System.Tuple`2<System.Int32,System.Int32Enum>::get_Item2()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item2_m24857790A6EE453B06644D5B6FEA72C82F398F28_gshared_inline (Tuple_2_tAA2ECE8873707FEE165573740A8A4A16F00C3CF8 * __this, const RuntimeMethod* method);
// !0 System.Tuple`2<System.Int32,System.Int32Enum>::get_Item1()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item1_m26E53A67EEB7E6C130F23A118BA0D74D42FDDF7C_gshared_inline (Tuple_2_tAA2ECE8873707FEE165573740A8A4A16F00C3CF8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mFEABD1682BE5E2DDC6D1062EDBA15F7E52FB09BB_gshared (Dictionary_2_tBE0C00013456CA812FD310466AF2583AE3E9B193 * __this, const RuntimeMethod* method);
// System.Void System.Tuple`2<System.Int32,System.Int32Enum>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m49876D784B5C60425A4D8F3A78429780E9CC38F7_gshared (Tuple_2_tAA2ECE8873707FEE165573740A8A4A16F00C3CF8 * __this, int32_t ___item10, int32_t ___item21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2E0E17FC20148A4F995F8AE64853AB0BDF38470F_gshared (Dictionary_2_tBE0C00013456CA812FD310466AF2583AE3E9B193 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared (Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task`1<System.Object>::ContinueWith<System.Object>(System.Func`2<System.Threading.Tasks.Task`1<!0>,!!0>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * Task_1_ContinueWith_TisRuntimeObject_m8460EFF265D342AAC72F2D3E760E5A11E9F1A166_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, Func_2_t83657030EA75D65F52621111FF4673287BD01324 * ___continuationFunction0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.TaskExtensions::Unwrap<System.Object>(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<!!0>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * TaskExtensions_Unwrap_TisRuntimeObject_m7D2C78F38638FAFB003101FD84758E96B4957D43_gshared (Task_1_t015DF6EF685F0880AA11DE3E6716D485B217A5E4 * ___task0, const RuntimeMethod* method);
// System.Void Firebase.Storage.Internal.TransferStateUpdater`1<System.Object>::.ctor(Firebase.Storage.StorageReference,System.IProgress`1<T>,T,Firebase.Storage.Internal.TransferState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferStateUpdater_1__ctor_m663FDD0E1F2A9033322809027D15721A95949104_gshared (TransferStateUpdater_1_tF5826AF89BAD279061EADA2D42ED8D6702A00226 * __this, StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * ___storageReference0, RuntimeObject* ___progressHandler1, RuntimeObject * ___progressState2, TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * ___progressStateBackingStore3, const RuntimeMethod* method);
// Firebase.Storage.MonitorControllerInternal Firebase.Storage.Internal.TransferStateUpdater`1<System.Object>::get_MonitorController()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * TransferStateUpdater_1_get_MonitorController_m89B68926CC4BCD8C438369B137F819BD90D5C2E9_gshared_inline (TransferStateUpdater_1_tF5826AF89BAD279061EADA2D42ED8D6702A00226 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Task_1_ContinueWith_mCFC2582CE8330039C62FC88152095FF923BAECE8_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, Action_1_tF41DEFE08D91E5A3638655E075175E27AA82D1DC * ___continuationAction0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// O Firebase.Storage.StorageReference::CompleteTask<System.Object,System.Object>(System.Threading.Tasks.Task`1<I>,System.Threading.Tasks.TaskCompletionSource`1<O>,System.Func`1<O>,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * StorageReference_CompleteTask_TisRuntimeObject_TisRuntimeObject_mE7B1E03D4A03235BD259D795A4081754B1E9FADF_gshared (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___task0, TaskCompletionSource_1_t3ECF7B56E418D2A3FFC4E551B9DA6A7E38C7D304 * ___completionSource1, Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * ___getResult2, String_t* ___operationDescription3, bool ___setCompletionSourceResult4, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Task_1_get_Result_m828E969718CE9AD38335D3F48B6F9C84AB98DEE9_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.Internal.TransferStateUpdater`1<System.Object>::SetMetadata(Firebase.Storage.StorageMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferStateUpdater_1_SetMetadata_m734ABDF913D339DB3EAF52D9F0A9856E924A0FC6_gshared (TransferStateUpdater_1_tF5826AF89BAD279061EADA2D42ED8D6702A00226 * __this, StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * ___metadata0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, RuntimeObject * ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_delete_ControllerInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_delete_ControllerInternal_m553EE5AA0EBF76071CDAE58703D37947987A713C (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_ControllerInternal_Cancel(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StorageInternalPINVOKE_Firebase_Storage_ControllerInternal_Cancel_mBC3CC0289C5513F9E75702467438B780913AE771 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC (const RuntimeMethod* method);
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1 (const RuntimeMethod* method);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::add_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_add_AppDisposed_m1CA5C0D303E4A5536DFDBE3356A900B3B966D4B6 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Storage.Internal.ModuleLogger::.ctor(Firebase.Storage.Internal.ModuleLogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleLogger__ctor_m2EF1021CCB3F686ED6F2A18242B9A245A4983B59 (ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * __this, ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * ___parentLogger0, const RuntimeMethod* method);
// System.String Firebase.Storage.Internal.ModuleLogger::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModuleLogger_get_Tag_mCB952398B5815EC03D792B21DF55A8B655177AE6 (ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * __this, const RuntimeMethod* method);
// System.String Firebase.Storage.FirebaseStorageInternal::get_Url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseStorageInternal_get_Url_mEF967793D98A676620DA5239E5CAE0A27F05E5E3 (FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void Firebase.Storage.Internal.ModuleLogger::set_Tag(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ModuleLogger_set_Tag_m3D42E7B948CCD7A1EC648250B7EE58A489140C77_inline (ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * __this, String_t* ___value0, const RuntimeMethod* method);
// Firebase.LogLevel Firebase.FirebaseApp::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseApp_get_LogLevel_mA1462E02A6B78D0F598CF9D3F22CAF13D9E29E8D (const RuntimeMethod* method);
// System.Void Firebase.Storage.Internal.ModuleLogger::set_Level(Firebase.LogLevel)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ModuleLogger_set_Level_mB529EFC50B227772907A6C6E2302D6A7BF6A6905_inline (ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Firebase.Storage.FirebaseStorage::set_Logger(Firebase.Storage.Internal.ModuleLogger)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FirebaseStorage_set_Logger_mC5DEE6DF946196EE8BC14D0EC66640982641DD80_inline (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * __this, ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Storage.FirebaseStorageInternal::SetSwigCMemOwn(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FirebaseStorageInternal_SetSwigCMemOwn_mFBB598A591A556B30769E165A02D1862E1179886_inline (FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * __this, bool ___ownership0, const RuntimeMethod* method);
// System.String Firebase.Storage.FirebaseStorageInternal::get_InstanceKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseStorageInternal_get_InstanceKey_mF13140F44AB3DD29D7501153C43AACE5C02F984D (FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * __this, const RuntimeMethod* method);
// Firebase.Storage.Internal.ModuleLogger Firebase.Storage.FirebaseStorage::get_Logger()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * FirebaseStorage_get_Logger_m9D26CA2E9727C776304599A25248D7D3DD821CBA_inline (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void Firebase.Storage.Internal.ModuleLogger::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleLogger_LogMessage_m5116219D021DBF1651FAB90D6E244D7B473D1ADD (ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * __this, int32_t ___level0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.Storage.FirebaseStorage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorage_Dispose_mCF6BAD5BBD632BD1B71AB6A92A3EEB70C24612CF (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * __this, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.Storage.FirebaseStorageInternal::getCPtr(Firebase.Storage.FirebaseStorageInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  FirebaseStorageInternal_getCPtr_mB6DBD7BEA4B11C7AE2ECEDCFDD629AC12D0F9E99 (FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * ___obj0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::remove_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_remove_AppDisposed_mE9EBC4903F93C997C038F8B12940A3D658624EA9 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.Storage.FirebaseStorage>::Remove(!0)
inline bool Dictionary_2_Remove_mB1F9447357E88D752C84519BF5067E0D68A70782 (Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, ___key0, method);
}
// System.Void Firebase.Platform.FirebaseLogger::LogMessage(Firebase.Platform.PlatformLogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseLogger_LogMessage_mEF2033A0588D651D162FFE29C9FA77A39E51233E (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_m7D46E331C349DD29CBA488C9B6A950A3E7DD5CAE (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * __this, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_mBA69907A1D799CD12ED44B611985B25FE4C626A2 (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.String System.Uri::get_PathAndQuery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_PathAndQuery_mF079BA04B7A397B2729E5B5DEE72B3654A44E384 (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// Firebase.Storage.FirebaseStorage Firebase.Storage.FirebaseStorage::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * FirebaseStorage_get_DefaultInstance_mD147240F80D3517AE2EB7FAC5C16C3AD38D9DC1E (const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_mC924D20DC71F85A7106D9DD09BF41497C6816E20 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_m9E7A4FBA27F835B6C26CC09CF609333967150E41 (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.GC::KeepAlive(System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GC_KeepAlive_mE836EDA45A7C6BFDCEA004B9089FA6B4810BDA89 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseApp_get_DefaultInstance_m46ACEAEC916D0AC3014302498F51607462EE5C63 (const RuntimeMethod* method);
// Firebase.Storage.FirebaseStorage Firebase.Storage.FirebaseStorage::GetInstance(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * FirebaseStorage_GetInstance_m21994D83A2DD44D668ED239E36520613E867E0D0 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, String_t* ___url1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// Firebase.AppOptions Firebase.FirebaseApp::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * FirebaseApp_get_Options_mDD4642CC794D4339D5AF6CC2A3607A9FE52F81E6 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method);
// System.String Firebase.AppOptions::get_StorageBucket()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AppOptions_get_StorageBucket_mAB8AC18DB43252A87255F7B469F71D34611ECC4B_inline (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, const RuntimeMethod* method);
// Firebase.Storage.FirebaseStorage Firebase.Storage.FirebaseStorage::GetInstanceInternal(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * FirebaseStorage_GetInstanceInternal_mB799F11544E1A3B2F966B97DE7E1227C29A2A71C (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, String_t* ___bucketUrl1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.Storage.FirebaseStorage>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m1A3EB9267E87E2090ED63711C9190AA1FE9CFFDA (Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9 * __this, String_t* ___key0, FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9 *, String_t*, FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// Firebase.Storage.FirebaseStorageInternal Firebase.Storage.FirebaseStorageInternal::GetInstanceInternal(Firebase.FirebaseApp,System.String,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * FirebaseStorageInternal_GetInstanceInternal_mF786041AC57E33E6EA529A42991188499B806D02 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, String_t* ___url1, int32_t* ___init_result_out2, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// Firebase.Storage.FirebaseStorage Firebase.Storage.FirebaseStorage::FindByKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * FirebaseStorage_FindByKey_m119B16DD6194B969CCE5434AB1DC545EE2329359 (String_t* ___instanceKey0, const RuntimeMethod* method);
// System.Void Firebase.Storage.FirebaseStorage::.ctor(Firebase.Storage.FirebaseStorageInternal,Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorage__ctor_mFBCFA1CAEBB22C2F9BEE10B6039497F2356AF88E (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * __this, FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * ___storage0, FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.Storage.FirebaseStorage>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m68C6C4AF34FF7A228B3B198EFB7FE8FE7656CE19 (Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9 * __this, String_t* ___key0, FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9 *, String_t*, FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Firebase.Storage.StorageReferenceInternal::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StorageReferenceInternal_get_IsValid_mF15A79A12CA432B0D5646FC284298F71301CBA4F (StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.FirebaseStorage::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorage_ThrowIfNull_mD27EB52F6E23002FF0B6A6E847768D4DE7CD82AA (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * __this, const RuntimeMethod* method);
// Firebase.Storage.StorageReferenceInternal Firebase.Storage.FirebaseStorageInternal::GetReferenceFromUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * FirebaseStorageInternal_GetReferenceFromUrl_mF0D69EBF304A360A22E532C37DFD26038FC62355 (FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * __this, String_t* ___url0, const RuntimeMethod* method);
// Firebase.Storage.StorageReferenceInternal Firebase.Storage.FirebaseStorage::ValidateStorageReferenceInternal(Firebase.Storage.StorageReferenceInternal,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * FirebaseStorage_ValidateStorageReferenceInternal_m3B4644FA100A1D6D7452B2364B11C71BE6FBEFCD (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * __this, StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * ___reference0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageReference::.ctor(Firebase.Storage.FirebaseStorage,Firebase.Storage.StorageReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageReference__ctor_mC3EB957AAE76256E3AF4E86E7FC46B2908584299 (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * ___storage0, StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * ___storageReferenceInternal1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.Storage.FirebaseStorage>::.ctor()
inline void Dictionary_2__ctor_m82E13927F53980BB046608473DFFE11E6105EEDD (Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void Firebase.Storage.FirebaseStorageInternal::ReleaseReferenceInternal(Firebase.Storage.FirebaseStorageInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorageInternal_ReleaseReferenceInternal_mE0E6549A75E16B6EED6C6607E6ADE9EAB4D08F60 (FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * ___instance0, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.Storage.FirebaseStorageInternal::get_App()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseStorageInternal_get_App_mAE7345FEE5043764F9FD63C45B42ECDEC7CA4FF5 (FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * __this, const RuntimeMethod* method);
// System.String Firebase.FirebaseApp::get_Name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_mB5E945165A8F7DFAA21F0AD3A9E99CC3438943C5_inline (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_FirebaseStorageInternal_GetReferenceFromUrl__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_GetReferenceFromUrl__SWIG_0_m8D80595789EBF41F7C58BA11D8BF9D6AE708769E (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageReferenceInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageReferenceInternal__ctor_m433C48D69FEEF71B510E99DA3992B1FAD9E6D6ED (StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  FirebaseApp_getCPtr_mF922A07C69469D0EB5A268A9278C495805BDCA4F (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___obj0, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_FirebaseStorageInternal_GetInstanceInternal(System.Runtime.InteropServices.HandleRef,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_GetInstanceInternal_m91CB46DEDA63BCC952178530C899B3C9B541F1C9 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, String_t* ___jarg21, int32_t* ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Storage.FirebaseStorageInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorageInternal__ctor_mD907DD63908337D1A0D4927E41B2702F653CA04C (FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_FirebaseStorageInternal_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_ReleaseReferenceInternal_m1FEC60F9FF4613B20BAB3CF740545309D7AC6F32 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_FirebaseStorageInternal_App_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_App_get_m3161B3235D7C6D692655ABF48B469F72FA8273F6 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp__ctor_mECDB71535A9846F085CD59C6EA9261E640FE127A (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.String Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_FirebaseStorageInternal_Url_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_Url_get_m484B96251F09C317807804BCAE4C29681959A610 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Storage.Future_StorageMetadata::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_SWIG_CompletionDispatcher_m0ACF6F0D8B7A8C95339DDA490D23B541EB6D7521 (int32_t ___key0, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_Future_StorageMetadata_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_SWIGUpcast_m973780C0E6C23BC2C7DD96C48E3301D6B8EFE498 (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase__ctor_mC05DD84980454E9B8210087E01926E5D56FC017F (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Finalize_mAB21EE7CEC515CDD99FAB0686D59CB42082B7716 (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.Future_StorageMetadata::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_SetCompletionData_m43D5B4D40B0C6B544FA5388C5A7283419541154E (Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_delete_Future_StorageMetadata(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_delete_Future_StorageMetadata_mEF82F206F5CF6D7AB0391DA9E925D145004908F2 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_mE480130D78254414AA6A59E2FA63B9AFC4AC01BC (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.Future_StorageMetadata/<GetTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0__ctor_m0454F478DD378351C169D5ED35CF43DFFD02CFAE (U3CGetTaskU3Ec__AnonStorey0_t1DBF3A3E1DAE43629C695F5C31B1CFAB55B918F9 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.MetadataInternal>::.ctor()
inline void TaskCompletionSource_1__ctor_m69899B617424F47227580E52C2AE1E904FF2B5A1 (TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m894F4B43C47FD23EB3FD138E3CBBD71203DC5FA7_gshared)(__this, method);
}
// Firebase.FutureStatus Firebase.FutureBase::status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_status_mD675FFD3FAE10D36169C16590EE3C6F1861DD136 (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, const RuntimeMethod* method);
// System.Void Firebase.FirebaseException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException__ctor_mB31E783657F428BA72B055DF8A4CE6EA6996996C (FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF * __this, int32_t ___errorCode0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.MetadataInternal>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_m712CC9A0A950A2D82C7F7C19A576A4AC95058B42 (TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454 *, Exception_t *, const RuntimeMethod*))TaskCompletionSource_1_SetException_mF32CD1B09A692369399D38F7B54F9FD2EC5394CE_gshared)(__this, ___exception0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.MetadataInternal>::get_Task()
inline Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * TaskCompletionSource_1_get_Task_mC258E3BC1E58539744B3EEB0E28A9FAD61347ACD_inline (TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * (*) (TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF1CB937DAB68DC43DA33893E95F48EFB07F385A0_gshared_inline)(__this, method);
}
// System.Void Firebase.Storage.Future_StorageMetadata/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mE6CF864DE2CDFDEE0026088084491379903AD610 (Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Storage.Future_StorageMetadata::SetOnCompletionCallback(Firebase.Storage.Future_StorageMetadata/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_SetOnCompletionCallback_mF756697ED1C91AFA9CC324E141A4ADE780DCF9BE (Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * __this, Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12 * ___userCompletionCallback0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void Firebase.Storage.Future_StorageMetadata::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_ThrowIfDisposed_mB4673B373B7A8028F1B1864E05697B6CEE26D195 (Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.Future_StorageMetadata/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_mA404E94163216D5663803AEFFBB3B85662CBC079 (SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Storage.Future_StorageMetadata/Action>::.ctor()
inline void Dictionary_2__ctor_m97C760C6AE77C61BCA51B1FD450B782D79070AD4 (Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0 *, const RuntimeMethod*))Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Storage.Future_StorageMetadata/Action>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m8580E8DC3B1AD865F4FC4B31AA38870B08C7D7BD (Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0 * __this, int32_t ___key0, Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0 *, int32_t, Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12 *, const RuntimeMethod*))Dictionary_2_set_Item_mF9A6FBE4006C89D15B8C88B2CB46E9B24D18B7FC_gshared)(__this, ___key0, ___value1, method);
}
// System.IntPtr Firebase.Storage.Future_StorageMetadata::SWIG_OnCompletion(Firebase.Storage.Future_StorageMetadata/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_StorageMetadata_SWIG_OnCompletion_m5F9764707B7329268E6608BC88BACEEC134A5C3A (Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * __this, SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method);
// System.Void Firebase.Storage.Future_StorageMetadata::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_SWIG_FreeCompletionData_m22B65B48FBC6EEDB60F030E79317A6ED97BEE81C (Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Storage.Future_StorageMetadata/Action>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m063D29871CBAD720DADDD3CB06C13AF7AE878FFA (Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0 * __this, int32_t ___key0, Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0 *, int32_t, Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m867F6DA953678D0333A55270B7C6EF38EFC293FF_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Storage.Future_StorageMetadata/Action>::Remove(!0)
inline bool Dictionary_2_Remove_m3CEC088395E2C3A8229AC453772B8740B5C62E1B (Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m2204D6D532702FD13AB2A9AD8DB538E4E8FB1913_gshared)(__this, ___key0, method);
}
// System.Void Firebase.Storage.Future_StorageMetadata/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3B3C5D79D87CFA6CA5F60A2235C95E38AF56F1FB (Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12 * __this, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_Future_StorageMetadata_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Storage.Future_StorageMetadata/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_SWIG_OnCompletion_m05B8DA391E57267C6785DE3B8618FD116144D267 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_Future_StorageMetadata_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_SWIG_FreeCompletionData_m6AA595E5A0F0653654450711E1851CC0711BCF9B (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_Future_StorageMetadata_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_GetResult_m04BC47A83B15D25621DC306DDCA075C0CEC98B59 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Storage.MetadataInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataInternal__ctor_mB9356D780D9D876E2AD418FC232C6D7D2AEADE56 (MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.MetadataInternal>::SetCanceled()
inline void TaskCompletionSource_1_SetCanceled_mC521EFAEBDE2B76E43666F18EE1CB7BB8DDBF5C6 (TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454 *, const RuntimeMethod*))TaskCompletionSource_1_SetCanceled_m9BD3702F5D2F7D1C0D9C7E4598B758F46B734B65_gshared)(__this, method);
}
// System.Int32 Firebase.FutureBase::error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_error_m70CFE004FF942C34ED11D221D0B6033AD40C1825 (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, const RuntimeMethod* method);
// System.String Firebase.FutureBase::error_message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureBase_error_message_m12EFFA84132AB25450D3D3F349A414EF597CCCE3 (FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397 * __this, const RuntimeMethod* method);
// Firebase.Storage.MetadataInternal Firebase.Storage.Future_StorageMetadata::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * Future_StorageMetadata_GetResult_mABFE8A50EA64BC0D3E6CC1774A517B25604FFD11 (Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.MetadataInternal>::SetResult(!0)
inline void TaskCompletionSource_1_SetResult_mFCFDF6C6CCAF670DE7C33CF70E3C6863CA62C279 (TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454 * __this, MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454 *, MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 *, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m0EBFE5138C570B9515B706987C2983D4DFBE5337_gshared)(__this, ___result0, method);
}
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mE0D4736B7C636462B2AD246F65EFAF5F1785822F (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Firebase.Storage.Internal.ModuleLogger>::.ctor()
inline void List_1__ctor_m7D283096E62E79F4823EEE0781FC8D91CAC8C5A7 (List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m55A06AD20FF65C11015FFBE5FF31F2E7B1656E20 (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Add(!0)
inline void List_1_Add_m0FA4EBA4FEA59AA08228356F2A4DD86D751BB9D9 (List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9 * __this, WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9 *, WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Firebase.Storage.Internal.ModuleLogger>::Add(!0)
inline void List_1_Add_m7B888EE4B21BFA00BFC714FC4A7328D98AB5EEC9 (List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511 * __this, ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511 *, ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.WeakReference>::GetEnumerator()
inline Enumerator_tD5C672061FDC03FC142D1B5CF9316AD46B77D88E  List_1_GetEnumerator_m7DF26F8B80546FFC05D567B3E4E764F230C19E04 (List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD5C672061FDC03FC142D1B5CF9316AD46B77D88E  (*) (List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.WeakReference>::get_Current()
inline WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * Enumerator_get_Current_m2FC2D476F4C860D75909AED94E0CFEE02513A6E2_inline (Enumerator_tD5C672061FDC03FC142D1B5CF9316AD46B77D88E * __this, const RuntimeMethod* method)
{
	return ((  WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * (*) (Enumerator_tD5C672061FDC03FC142D1B5CF9316AD46B77D88E *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Object Firebase.FirebaseApp::WeakReferenceGetTarget(System.WeakReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * FirebaseApp_WeakReferenceGetTarget_mC676B673AB674077A1A40272E96E51C5A25DC30A (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * ___weakReference0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::Remove(!0)
inline bool List_1_Remove_m721E6DCD83BB7DD4EC0DC89EF26796FBB94D9C06 (List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9 * __this, WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9 *, WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.WeakReference>::MoveNext()
inline bool Enumerator_MoveNext_mC280A73E98660DF4F291F26F880BD35EE49BBD5E (Enumerator_tD5C672061FDC03FC142D1B5CF9316AD46B77D88E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD5C672061FDC03FC142D1B5CF9316AD46B77D88E *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.WeakReference>::Dispose()
inline void Enumerator_Dispose_m7C4F9567EDBD78A44CD25254F8CBF7D56CC9834D (Enumerator_tD5C672061FDC03FC142D1B5CF9316AD46B77D88E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD5C672061FDC03FC142D1B5CF9316AD46B77D88E *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<Firebase.Storage.Internal.ModuleLogger>::Remove(!0)
inline bool List_1_Remove_mA389F10B377760C99E283FD792BAAAA130F087CB (List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511 * __this, ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511 *, ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, ___item0, method);
}
// Firebase.LogLevel Firebase.Storage.Internal.ModuleLogger::get_Level()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleLogger_get_Level_mD716BA3D3FDCD9822113BE55A2C3DFE95EDEAD9C (ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor()
inline void List_1__ctor_mFDE4B68F9A4A58C0DF6E8EE11F822B8D23FF97E8 (List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void Firebase.Storage.Internal.TransferState::set_Reference(Firebase.Storage.StorageReference)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TransferState_set_Reference_m1E28A3A6C7569A4E25950164E025144C7A6BE8EE_inline (TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * __this, StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageMetadata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageMetadata__ctor_m600E41A6889794EDC6D2BED0E476E75561CF77C1 (StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageMetadata::.ctor(Firebase.Storage.StorageMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageMetadata__ctor_mC9BE00AD42D23D9CBED6FE4D14FCAE30331F7DF3 (StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * __this, StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * ___metadataToCopy0, const RuntimeMethod* method);
// Firebase.Storage.StorageMetadata Firebase.Storage.MetadataChange::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * MetadataChange_Build_mE75EC0AD11148D4123764DAE7C573FCA3A19497A (MetadataChange_t520FEEE76D402A459E59BF6498AA8D4633C468EE * __this, const RuntimeMethod* method);
// Firebase.Storage.MetadataInternal Firebase.Storage.StorageMetadata::get_Internal()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * StorageMetadata_get_Internal_mC892D945DE8B242B150489B70F124D565EE596EC_inline (StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.MetadataInternal::set_ContentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataInternal_set_ContentType_mE42A62D96E731454CCDFDFBA3FC89AB9C04CC1F1 (MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Firebase.Storage.MetadataInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataInternal__ctor_m1A1AA2713639DBB3E89948EF68C735C10B81E9C5 (MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * __this, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_new_MetadataInternal__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_new_MetadataInternal__SWIG_0_m061F2A0882839781EBDCB807F536AB28A823E96B (const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_delete_MetadataInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_delete_MetadataInternal_mB41332746A4A12F0E0A7B4E956B17AE154F9F4D7 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// Firebase.Storage.MetadataInternal Firebase.Storage.MetadataInternal::CopyCppObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * MetadataInternal_CopyCppObject_m53A633C8C77A5343D6F6D8B42B6160C8686B7700 (MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MetadataInternal_ContentType_set(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_MetadataInternal_ContentType_set_m7ED0FD1E45B346A2373D23BA0AF7CDB42679EC17 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MetadataInternal_CopyCppObject(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_MetadataInternal_CopyCppObject_m1F49E29B570EC8EC7E6FE6BD2EF35390F2BCF50E (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Storage.MonitorControllerInternal::OnPaused(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_OnPaused_m4FD9AC511C7BA2E9094889EF87A8EAB17160D6DE (intptr_t ___controllerPtr0, const RuntimeMethod* method);
// System.Void Firebase.Storage.MonitorControllerInternal::OnProgress(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_OnProgress_m27310269F609ECCABC1878CA9958552275A3951C (intptr_t ___controllerPtr0, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.Storage.StorageReferenceInternal::getCPtr(Firebase.Storage.StorageReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  StorageReferenceInternal_getCPtr_m5DA0100FAF2E0E5BC78E7CAF7E2488F2474472C1 (StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * ___obj0, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_new_MonitorControllerInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_new_MonitorControllerInternal_m4B7F8C591DE1CA162B7F420C33D4693579D4C2BD (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Storage.MonitorControllerInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal__ctor_mEBA7A9BA836F49ED6A078CD6FA22160C8AEEA67E (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>::Remove(!0)
inline bool Dictionary_2_Remove_m5EB9322E2737576744038F6C169FA59D3F24F644 (Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B * __this, intptr_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B *, intptr_t, const RuntimeMethod*))Dictionary_2_Remove_m8F5E306A3F995390237D97553B63674C8D1D725F_gshared)(__this, ___key0, method);
}
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_delete_MonitorControllerInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_delete_MonitorControllerInternal_mE5A0FDF1C8EAD29E9187C2E0A0290EA045ED5BD4 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void Firebase.Storage.MonitorControllerInternal/<Create>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateU3Ec__AnonStorey0__ctor_mF865E0F798FA267021A1F4B0CA496736DACC7E64 (U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30 * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.MonitorControllerInternal::.ctor(Firebase.Storage.StorageReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal__ctor_m6A120F1E88CC65B913C9A334695885CC7D7A4FDE (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * __this, StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * ___storage_reference0, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.Storage.MonitorControllerInternal::getCPtr(Firebase.Storage.MonitorControllerInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  MonitorControllerInternal_getCPtr_m9D6692BB9D00DF5DB6B878E9F969D3E6FF2406C5 (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m8D5685C4442849EB549BBF330D0B1A5BA95D5866 (Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B * __this, intptr_t ___key0, WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B *, intptr_t, WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D *, const RuntimeMethod*))Dictionary_2_set_Item_m26B2DBC3BE8767E18A97FFCF3FB2EFC766886BD4_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Storage.MonitorControllerInternal/MonitorControllerEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerEventDelegate__ctor_m38181BDA59502610716E2A0A8929586C6F417A3B (MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Storage.MonitorControllerInternal::SetPausedEvent(Firebase.Storage.MonitorControllerInternal/MonitorControllerEventDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_SetPausedEvent_m6171BB978F5779201E4178B10D90238EAD08A607 (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * __this, MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * ___arg00, intptr_t ___event_data1, const RuntimeMethod* method);
// System.Void Firebase.Storage.MonitorControllerInternal::SetProgressEvent(Firebase.Storage.MonitorControllerInternal/MonitorControllerEventDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_SetProgressEvent_m3CF158E8BB6ECB066BA289749054865C76B6136D (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * __this, MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * ___arg00, intptr_t ___event_data1, const RuntimeMethod* method);
// System.Void Firebase.Storage.MonitorControllerInternal/<OnPaused>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnPausedU3Ec__AnonStorey1__ctor_mF5FEDD803EF6E0A8EEB3ED2A47D530F575B23CB9 (U3COnPausedU3Ec__AnonStorey1_tDD6993DBEF4E65B1E82EA05A20D7399C43694D0C * __this, const RuntimeMethod* method);
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m93A9BD0DC888F1D02E77860288095CB49D4CFFC2 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___action0, const RuntimeMethod* method);
// System.Void Firebase.Storage.MonitorControllerInternal/<OnProgress>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnProgressU3Ec__AnonStorey2__ctor_m85F248750CD8E84EEF7EF83F5F6D828C1BB80798 (U3COnProgressU3Ec__AnonStorey2_tAE87511B3CACF72E178B767C52D51B2AFF8BA607 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m788267B35EAB890E8141EC87D164B81C416AE6B0 (Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B * __this, intptr_t ___key0, WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B *, intptr_t, WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D **, const RuntimeMethod*))Dictionary_2_TryGetValue_mB972A6602BDD10CBB612188FDED9917370EC3F17_gshared)(__this, ___key0, ___value1, method);
}
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  CancellationToken_Register_m2314D28552347E0B5EB56982F2E00FC8AA7CB95C (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___callback0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MonitorControllerInternal_SetPausedEvent(System.Runtime.InteropServices.HandleRef,Firebase.Storage.MonitorControllerInternal/MonitorControllerEventDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_SetPausedEvent_m81D1057933FC1D28C24503BE4147B48432F5F448 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * ___jarg21, intptr_t ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MonitorControllerInternal_SetProgressEvent(System.Runtime.InteropServices.HandleRef,Firebase.Storage.MonitorControllerInternal/MonitorControllerEventDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_SetProgressEvent_m69AEB6AA48E5165BB235DCC753C9A3597BC2EB94 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * ___jarg21, intptr_t ___jarg32, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MonitorControllerInternal_Controller_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_Controller_get_m6C16A6558921B7942DDC2D137D784A7675608020 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Storage.ControllerInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInternal__ctor_m522C553E3A3E41EB3B7980A9B12C6ADD5BD07920 (ControllerInternal_t2621A083A4D903DB174839BFB5EFA6E419A3A33B * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Int64 Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MonitorControllerInternal_BytesTransferred_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_BytesTransferred_get_m4583FF7B4649456F8040471724BCAE1FA0411C00 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Int64 Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MonitorControllerInternal_TotalByteCount_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_TotalByteCount_get_m0C4CA207FF64DCA6136FFBD270D406580A3DC4EB (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>::.ctor()
inline void Dictionary_2__ctor_m4355E2B9BEFD87BF3F915FB76ECD7D2E92FB584A (Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B *, const RuntimeMethod*))Dictionary_2__ctor_m901D4901A751B7C8F3CCD2608AA792ADBF53B75A_gshared)(__this, method);
}
// Firebase.Storage.ControllerInternal Firebase.Storage.MonitorControllerInternal::get_Controller()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerInternal_t2621A083A4D903DB174839BFB5EFA6E419A3A33B * MonitorControllerInternal_get_Controller_m6DFEA5BF897AB23CF99B79B95AD72F86B5BDC5CD (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * __this, const RuntimeMethod* method);
// System.Boolean Firebase.Storage.ControllerInternal::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerInternal_Cancel_m920A8CDF80BACC89DC8C579D109A94EEADB3946A (ControllerInternal_t2621A083A4D903DB174839BFB5EFA6E419A3A33B * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0 (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *, RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// Firebase.Storage.MonitorControllerInternal Firebase.Storage.MonitorControllerInternal::ProxyFromCPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * MonitorControllerInternal_ProxyFromCPtr_mA3F43A384F08353CCACE93CCE3AE070DAF402D3B (intptr_t ___controllerPtr0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.String Firebase.Storage.StorageException::GetErrorMessageForCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageException_GetErrorMessageForCode_mE7611A59F467E38484935982FCE64E8B04D53654 (int32_t ___errorCode0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageException::set_ErrorCode(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StorageException_set_ErrorCode_mBB954753CA9088849372B0BF14EC2EEBA66F7343_inline (StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageException::set_HttpResultCode(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StorageException_set_HttpResultCode_m886A6140AB814BF2A0E822A3E94CA1C37E0633C3_inline (StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::get_InnerExceptions()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * AggregateException_get_InnerExceptions_mB81D2B3BD56A3E938B83B0AF766474ED66057040_inline (AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mB3A1708B473BA7EE3CED5959613B2AA11A4920BA (ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 *, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m0C8A9A1DBCB1FEFD1FF6A4E807D329949B925A76_gshared)(__this, method);
}
// System.Int32 Firebase.FirebaseException::get_ErrorCode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t FirebaseException_get_ErrorCode_m35E226BE84B218CC4F6C0B86EEE8770C2404F2A9_inline (FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Firebase.Storage.ErrorInternal,System.Tuple`2<System.Int32,System.Net.HttpStatusCode>>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m11D082A6B852EF44A748AE93F19EE696D1D5B734 (Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B * __this, int32_t ___key0, Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B *, int32_t, Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D **, const RuntimeMethod*))Dictionary_2_TryGetValue_mBBE794F84BEA3B0C0AA78B721052CAB5EDC4AA85_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Tuple`2<System.Int32,System.Net.HttpStatusCode>::get_Item2()
inline int32_t Tuple_2_get_Item2_mBF5DA67EDF1B44D8351593BB6F0AEE3F9D006FC1_inline (Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D *, const RuntimeMethod*))Tuple_2_get_Item2_m24857790A6EE453B06644D5B6FEA72C82F398F28_gshared_inline)(__this, method);
}
// !0 System.Tuple`2<System.Int32,System.Net.HttpStatusCode>::get_Item1()
inline int32_t Tuple_2_get_Item1_m2258EA5DF46C1ADBBB89BE24A995D21980C1C991_inline (Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D *, const RuntimeMethod*))Tuple_2_get_Item1_m26E53A67EEB7E6C130F23A118BA0D74D42FDDF7C_gshared_inline)(__this, method);
}
// System.Void Firebase.Storage.StorageException::.ctor(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageException__ctor_m9FC051927B9C4F5222AE63495539250DDF2715AD (StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * __this, int32_t ___errorCode0, int32_t ___httpResultCode1, String_t* ___errorMessage2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Firebase.Storage.ErrorInternal,System.Tuple`2<System.Int32,System.Net.HttpStatusCode>>::.ctor()
inline void Dictionary_2__ctor_mC9DE7790A011BFAD0B90831CD3319C47898625B4 (Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B *, const RuntimeMethod*))Dictionary_2__ctor_mFEABD1682BE5E2DDC6D1062EDBA15F7E52FB09BB_gshared)(__this, method);
}
// System.Void System.Tuple`2<System.Int32,System.Net.HttpStatusCode>::.ctor(!0,!1)
inline void Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145 (Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * __this, int32_t ___item10, int32_t ___item21, const RuntimeMethod* method)
{
	((  void (*) (Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D *, int32_t, int32_t, const RuntimeMethod*))Tuple_2__ctor_m49876D784B5C60425A4D8F3A78429780E9CC38F7_gshared)(__this, ___item10, ___item21, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Firebase.Storage.ErrorInternal,System.Tuple`2<System.Int32,System.Net.HttpStatusCode>>::Add(!0,!1)
inline void Dictionary_2_Add_mE6DF2F097E7EDDBF60B68FDC7E2C469ED09013B1 (Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B * __this, int32_t ___key0, Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B *, int32_t, Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D *, const RuntimeMethod*))Dictionary_2_Add_m2E0E17FC20148A4F995F8AE64853AB0BDF38470F_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m22791F13CFA7229908629D1367E04500EEC6D6AB (SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m2DE1E1FE9AEF66C32347E0FDC957988A9F3ABA3D (SWIGStringHelper_t982F688E6929F8F6BC1C2B538EAEEC32CB1B4EE6 * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_mE7195ABD0D429721375E13BDFEF332301E85C913 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m8E816528A54187C2501C79EF83B0DB4315B28E5F (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m02993B101DE9DB50F7BBBCD62B0859DAF6FC9017 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m45FF182454864D6AC791CC7B4D8D3396DE767FEC (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m94D4795092042D72FA1EF6CF43C8891A67706880 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_mB99092FE18DF25A06A785C83AAB75FED5AAF642C (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m79FA3697D2DDC7C4C77E8FCA3723B2FFEBF1E28E (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m7B86476913D4CCD87BF5B974171C69E3F9C07199 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m2B1DB303D67CB4BE6EE23E7C561589C611591085 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m8395061029C984183186909311E8535669238CE0 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m1F2A4E1DD2BFBB284DC4D3B900F01FE4C3500694 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m25AA3141BA6170AE1B04F835C989E7853BBA66DA (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m0792FA153D0124453E880DE9587512F012279048 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m127C121B708A3AFA2BC6FFFA17E6064EE1794274 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mD4ABA12107DB24B16F237BE6DE62CEAA3A58938B (ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m98A9102B00F927ACE2DB6A2533D41DAAAD910A9A (ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_StorageInternal(Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_StorageInternal_m785FFAB12AA1A38C5E70B3F0320E948A97E607AC (ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___applicationDelegate0, ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___arithmeticDelegate1, ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___divideByZeroDelegate2, ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___indexOutOfRangeDelegate3, ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___invalidCastDelegate4, ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___invalidOperationDelegate5, ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___ioDelegate6, ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___nullReferenceDelegate7, ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___outOfMemoryDelegate8, ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___overflowDelegate9, ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___systemExceptionDelegate10, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_StorageInternal(Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_StorageInternal_mCB52B062631EBF968438156E934D07202C456A80 (ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * ___argumentDelegate0, ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * ___argumentNullDelegate1, ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method);
// System.Exception Firebase.Storage.StorageInternalPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_mA4E2F8DDFD2B168D0373ADA978EB613A0650E172 (const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m94AE67E16D0670DA8A5CFACECFC46C6EBABF900F (Exception_t * ___e0, const RuntimeMethod* method);
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
// System.String Firebase.Storage.StorageInternalPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mBE6E0D8DEEDF89A3555EE3521255D7C0A087F78C (String_t* ___cString0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m9708F5F32E48AFACE0B4FF16DFF0F9E1D2A1FF31 (SWIGStringDelegate_t48899BF08485B25CBFA52342EB2EEE7DB1AF3618 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_StorageInternal(Firebase.Storage.StorageInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_StorageInternal_mDD99E138905B6CDE425B87095A3394BBA6189674 (SWIGStringDelegate_t48899BF08485B25CBFA52342EB2EEE7DB1AF3618 * ___stringDelegate0, const RuntimeMethod* method);
// System.Void Firebase.Storage.MetadataInternal::.ctor(Firebase.Storage.FirebaseStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataInternal__ctor_m163EB636877408FF6DC6B413DA371054EFE5AA1E (MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * __this, FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * ___storage0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageMetadata::set_Internal(Firebase.Storage.MetadataInternal)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StorageMetadata_set_Internal_mCC1939EF5B04185494353EA6B6B031EB81517661_inline (StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * __this, MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * ___value0, const RuntimeMethod* method);
// Firebase.Storage.MetadataInternal Firebase.Storage.MetadataInternal::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * MetadataInternal_Copy_m34BBA778F7DD7FBFBBB484612C8355DD356FA4EF (MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * __this, const RuntimeMethod* method);
// Firebase.Storage.StorageMetadata Firebase.Storage.MetadataChange::Build(Firebase.Storage.MetadataChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * MetadataChange_Build_mAEC4390897293C2D7D1ECA18EEE7BA7ABA30EB33 (MetadataChange_t520FEEE76D402A459E59BF6498AA8D4633C468EE * ___metadataChange0, const RuntimeMethod* method);
// Firebase.Storage.MetadataInternal Firebase.Storage.StorageMetadata::GetMetadataInternal(Firebase.Storage.StorageMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * StorageMetadata_GetMetadataInternal_mD811B52102D928972BB131237C9E299309477D7B (StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * ___metadata0, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mC9FEFEECD786FDE2648567E114C71A4A468A65FE (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___kind6, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageReference::set_Internal(Firebase.Storage.StorageReferenceInternal)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StorageReference_set_Internal_m96D276C28F59B27CEFFECC7AD0D5F50EF72D5731_inline (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageReference::set_Logger(Firebase.Storage.Internal.ModuleLogger)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StorageReference_set_Logger_m3FDF97651E768052A1F071671137F81BE694C897_inline (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * ___value0, const RuntimeMethod* method);
// Firebase.Storage.StorageReferenceInternal Firebase.Storage.StorageReference::get_Internal()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * StorageReference_get_Internal_m9087E0BB3B6AE66048F5DF369F1D6BBD5B81A16E_inline (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, const RuntimeMethod* method);
// System.String Firebase.Storage.StorageReferenceInternal::get_FullPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageReferenceInternal_get_FullPath_m1048F499D944E5071223E7AC7E3BB19E171D3CF6 (StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * __this, const RuntimeMethod* method);
// System.String Firebase.Storage.StorageReferenceInternal::get_Bucket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageReferenceInternal_get_Bucket_m0F1647EEAB7CCDBA795CAE8FFD5C7C0E6B609B0E (StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * __this, const RuntimeMethod* method);
// Firebase.Storage.StorageReferenceInternal Firebase.Storage.StorageReferenceInternal::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * StorageReferenceInternal_Child_mCA748A792A2FACF197C642ABD157D075FE112AA4 (StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.StorageMetadata>::.ctor()
inline void TaskCompletionSource_1__ctor_mE49C69FF5B30F3C3BF2431F22EF93D61A38EC9FE (TaskCompletionSource_1_t890D1B8924B397DFA64F64F0E55EA5EBB3CAFA5F * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t890D1B8924B397DFA64F64F0E55EA5EBB3CAFA5F *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m894F4B43C47FD23EB3FD138E3CBBD71203DC5FA7_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata> Firebase.Storage.StorageReference::PutBytesUsingCompletionSourceAsync(System.Byte[],Firebase.Storage.MetadataChange,System.IProgress`1<Firebase.Storage.UploadState>,System.Threading.CancellationToken,System.Uri,System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.StorageMetadata>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t44C5AB6F81509E35FFC0C48F45E84AC860DE2DF4 * StorageReference_PutBytesUsingCompletionSourceAsync_m0B999C1EF0C8F86C2C5983A911CD9A2D3449E326 (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, MetadataChange_t520FEEE76D402A459E59BF6498AA8D4633C468EE * ___customMetadata1, RuntimeObject* ___progressHandler2, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancelToken3, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___previousSessionUri4, TaskCompletionSource_1_t890D1B8924B397DFA64F64F0E55EA5EBB3CAFA5F * ___completionSource5, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageReference/<PutBytesUsingMonitorControllerAsync>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0__ctor_m737C3B704235586FA68EF14AE847EACCBCAB9CD5 (U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_t3B19F98B660AD6D0EF02F853700BCFA5AC49B317 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal> Firebase.Storage.StorageReferenceInternal::PutBytesUsingMonitorControllerAsync(System.IntPtr,System.UInt32,Firebase.Storage.MetadataInternal,Firebase.Storage.MonitorControllerInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * StorageReferenceInternal_PutBytesUsingMonitorControllerAsync_m47B4912C8350923ABC4A11FFE6F88338E68C678A (StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * __this, intptr_t ___buffer0, uint32_t ___buffer_size1, MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * ___metadata2, MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * ___monitor_controller3, const RuntimeMethod* method);
// System.Void Firebase.Storage.MonitorControllerInternal::RegisterCancellationToken(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_RegisterCancellationToken_mC7877F5A35A97CDF5D00213884ED59C9E2882A3C (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * __this, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>,System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m67F37D83BB14E10B19E8523BF8F2AC21E1138796 (Func_2_tAA075D43E9257FE76DA85CD9479662741AD86D03 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAA075D43E9257FE76DA85CD9479662741AD86D03 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>::ContinueWith<System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>(System.Func`2<System.Threading.Tasks.Task`1<!0>,!!0>)
inline Task_1_t64029F49DCFC18B0FB806DE97C2EB856C0941C52 * Task_1_ContinueWith_TisTask_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3_m0E2DF5426C3D79224A3EEA77E5C7D18FC8BFD62A (Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * __this, Func_2_tAA075D43E9257FE76DA85CD9479662741AD86D03 * ___continuationFunction0, const RuntimeMethod* method)
{
	return ((  Task_1_t64029F49DCFC18B0FB806DE97C2EB856C0941C52 * (*) (Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 *, Func_2_tAA075D43E9257FE76DA85CD9479662741AD86D03 *, const RuntimeMethod*))Task_1_ContinueWith_TisRuntimeObject_m8460EFF265D342AAC72F2D3E760E5A11E9F1A166_gshared)(__this, ___continuationFunction0, method);
}
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.TaskExtensions::Unwrap<Firebase.Storage.MetadataInternal>(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<!!0>>)
inline Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * TaskExtensions_Unwrap_TisMetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37_mBBDB4E2E76AB5C792207A787BE27CDE98039DDFD (Task_1_t64029F49DCFC18B0FB806DE97C2EB856C0941C52 * ___task0, const RuntimeMethod* method)
{
	return ((  Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * (*) (Task_1_t64029F49DCFC18B0FB806DE97C2EB856C0941C52 *, const RuntimeMethod*))TaskExtensions_Unwrap_TisRuntimeObject_m7D2C78F38638FAFB003101FD84758E96B4957D43_gshared)(___task0, method);
}
// System.Void Firebase.Storage.StorageReference/<PutBytesUsingCompletionSourceAsync>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1__ctor_mD0FAF89652259750ACF43470737997D6DF43152E (U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6 * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.UploadState::.ctor(Firebase.Storage.StorageReference,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadState__ctor_mCC6C7F976510CC7B77BA699641826EAFA604948D (UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC * __this, StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * ___reference0, int64_t ___totalByteCount1, const RuntimeMethod* method);
// Firebase.Storage.Internal.TransferState Firebase.Storage.UploadState::get_State()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * UploadState_get_State_m35320D472CC529D3D0F1E26269FF025B81BA0596_inline (UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.Internal.TransferStateUpdater`1<Firebase.Storage.UploadState>::.ctor(Firebase.Storage.StorageReference,System.IProgress`1<T>,T,Firebase.Storage.Internal.TransferState)
inline void TransferStateUpdater_1__ctor_mC6391AA33A67644CAE8AACBB8A6A02A3C0C0728E (TransferStateUpdater_1_t1346F4DF4E482A3BE7D6659C83E975328E7BC48B * __this, StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * ___storageReference0, RuntimeObject* ___progressHandler1, UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC * ___progressState2, TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * ___progressStateBackingStore3, const RuntimeMethod* method)
{
	((  void (*) (TransferStateUpdater_1_t1346F4DF4E482A3BE7D6659C83E975328E7BC48B *, StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D *, RuntimeObject*, UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC *, TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D *, const RuntimeMethod*))TransferStateUpdater_1__ctor_m663FDD0E1F2A9033322809027D15721A95949104_gshared)(__this, ___storageReference0, ___progressHandler1, ___progressState2, ___progressStateBackingStore3, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// Firebase.Storage.MetadataInternal Firebase.Storage.StorageMetadata::BuildMetadataInternal(Firebase.Storage.MetadataChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * StorageMetadata_BuildMetadataInternal_mB2011FC2AB953CDCFC08ABA75F9E994172D4954A (MetadataChange_t520FEEE76D402A459E59BF6498AA8D4633C468EE * ___metadataChange0, const RuntimeMethod* method);
// Firebase.Storage.MonitorControllerInternal Firebase.Storage.Internal.TransferStateUpdater`1<Firebase.Storage.UploadState>::get_MonitorController()
inline MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * TransferStateUpdater_1_get_MonitorController_m3B0043D629F0A6F2BC771BCCBE54167D67BDB635_inline (TransferStateUpdater_1_t1346F4DF4E482A3BE7D6659C83E975328E7BC48B * __this, const RuntimeMethod* method)
{
	return ((  MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * (*) (TransferStateUpdater_1_t1346F4DF4E482A3BE7D6659C83E975328E7BC48B *, const RuntimeMethod*))TransferStateUpdater_1_get_MonitorController_m89B68926CC4BCD8C438369B137F819BD90D5C2E9_gshared_inline)(__this, method);
}
// System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal> Firebase.Storage.StorageReference::PutBytesUsingMonitorControllerAsync(System.IntPtr,System.UInt32,Firebase.Storage.MetadataInternal,Firebase.Storage.MonitorControllerInternal,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * StorageReference_PutBytesUsingMonitorControllerAsync_mF44313CA13B763D1AB1ED2213AFC99CBEACF5B16 (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, intptr_t ___buffer0, uint32_t ___bufferSize1, MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * ___metadata2, MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * ___monitorController3, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken4, const RuntimeMethod* method);
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m0F5D615508491623DF2A558E055B23C9BE374CEF (Action_1_tA9A642AF9CC38CF5318AE5A2A9A3C22347AF10F4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA9A642AF9CC38CF5318AE5A2A9A3C22347AF10F4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Task_1_ContinueWith_mBE56EC62DF42D8453BA00DC3BCEFCAEA277786B2 (Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * __this, Action_1_tA9A642AF9CC38CF5318AE5A2A9A3C22347AF10F4 * ___continuationAction0, const RuntimeMethod* method)
{
	return ((  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * (*) (Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 *, Action_1_tA9A642AF9CC38CF5318AE5A2A9A3C22347AF10F4 *, const RuntimeMethod*))Task_1_ContinueWith_mCFC2582CE8330039C62FC88152095FF923BAECE8_gshared)(__this, ___continuationAction0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.StorageMetadata>::get_Task()
inline Task_1_t44C5AB6F81509E35FFC0C48F45E84AC860DE2DF4 * TaskCompletionSource_1_get_Task_mAC95BEE381D29EFE149E6469F9F8499B36D3ECB9_inline (TaskCompletionSource_1_t890D1B8924B397DFA64F64F0E55EA5EBB3CAFA5F * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t44C5AB6F81509E35FFC0C48F45E84AC860DE2DF4 * (*) (TaskCompletionSource_1_t890D1B8924B397DFA64F64F0E55EA5EBB3CAFA5F *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF1CB937DAB68DC43DA33893E95F48EFB07F385A0_gshared_inline)(__this, method);
}
// System.Void Firebase.Storage.StorageReference/<GetDownloadUrlAsync>c__AnonStoreyA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA__ctor_m16DB56C434E09868CD742D345FB80162E8D5233F (U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_tDF77093ECF09B51AB6CAE83C2EFB4843381F64BF * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Uri>::.ctor()
inline void TaskCompletionSource_1__ctor_m082F89F6C3CFFA23EC0FBABB3220180EDB06080A (TaskCompletionSource_1_t4D9BCF80416BB1F8C888F6BBD375E56BDD7ED75B * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t4D9BCF80416BB1F8C888F6BBD375E56BDD7ED75B *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m894F4B43C47FD23EB3FD138E3CBBD71203DC5FA7_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<System.String> Firebase.Storage.StorageReferenceInternal::GetDownloadUrlAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * StorageReferenceInternal_GetDownloadUrlAsync_mA2F1B23CFECD0F2EC0A82F0E142A03B04FB2A904 (StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * __this, const RuntimeMethod* method);
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
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Uri>::get_Task()
inline Task_1_tB1F9B3B5D25AD547A77258C869D2EC0ACED9EB78 * TaskCompletionSource_1_get_Task_m8BAA32E1A3144DC2A11444F413A0080A52B81121_inline (TaskCompletionSource_1_t4D9BCF80416BB1F8C888F6BBD375E56BDD7ED75B * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tB1F9B3B5D25AD547A77258C869D2EC0ACED9EB78 * (*) (TaskCompletionSource_1_t4D9BCF80416BB1F8C888F6BBD375E56BDD7ED75B *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF1CB937DAB68DC43DA33893E95F48EFB07F385A0_gshared_inline)(__this, method);
}
// System.String Firebase.Storage.StorageReference::get_Bucket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageReference_get_Bucket_m654D6AD79C5D9AE805C13651D439121E1BAD79D6 (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, const RuntimeMethod* method);
// System.String Firebase.Storage.StorageReference::get_Path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageReference_get_Path_m89592579F987196F97406E46927440C2E8F6A4E0 (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageReference/<GetDownloadUrlAsync>c__AnonStoreyA/<GetDownloadUrlAsync>c__AnonStoreyB::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB__ctor_m70951B86AF105EDCAF467FEDFB9E774822E43F9B (U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_tF8EF0AC8B42FE4CAC7ADF32E0FCDA3089AAC6D12 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Uri>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m2E2F7F3681DB13DD5AB6DF45FA0E517F4F5BC94E (Func_1_tB65A59385155168BA8513081365F0C8F6E71EB27 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tB65A59385155168BA8513081365F0C8F6E71EB27 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, ___object0, ___method1, method);
}
// O Firebase.Storage.StorageReference::CompleteTask<System.String,System.Uri>(System.Threading.Tasks.Task`1<I>,System.Threading.Tasks.TaskCompletionSource`1<O>,System.Func`1<O>,System.String,System.Boolean)
inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * StorageReference_CompleteTask_TisString_t_TisUri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_mE4B31C8265479A521A7B788AC65965DB7408E171 (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * ___task0, TaskCompletionSource_1_t4D9BCF80416BB1F8C888F6BBD375E56BDD7ED75B * ___completionSource1, Func_1_tB65A59385155168BA8513081365F0C8F6E71EB27 * ___getResult2, String_t* ___operationDescription3, bool ___setCompletionSourceResult4, const RuntimeMethod* method)
{
	return ((  Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * (*) (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D *, Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C *, TaskCompletionSource_1_t4D9BCF80416BB1F8C888F6BBD375E56BDD7ED75B *, Func_1_tB65A59385155168BA8513081365F0C8F6E71EB27 *, String_t*, bool, const RuntimeMethod*))StorageReference_CompleteTask_TisRuntimeObject_TisRuntimeObject_mE7B1E03D4A03235BD259D795A4081754B1E9FADF_gshared)(__this, ___task0, ___completionSource1, ___getResult2, ___operationDescription3, ___setCompletionSourceResult4, method);
}
// !0 System.Threading.Tasks.Task`1<System.String>::get_Result()
inline String_t* Task_1_get_Result_mD4F484A4DEF45AD6EAF4B2025F086977F8632350 (Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C *, const RuntimeMethod*))Task_1_get_Result_m828E969718CE9AD38335D3F48B6F9C84AB98DEE9_gshared)(__this, method);
}
// System.Uri Firebase.Storage.FirebaseStorage::ConstructFormattedUri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * FirebaseStorage_ConstructFormattedUri_m1158395057D88A619A93A8CE9D5175C0F404A442 (String_t* ___formattedUrl0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageReference/<PutBytesUsingCompletionSourceAsync>c__AnonStorey1/<PutBytesUsingCompletionSourceAsync>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2__ctor_m67C0CDFEB683A6D157DA8BDE67963299D160C9CE (U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_tE72DD13D78B7AA4BC7CCEB2449AFCD2D060815CD * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<Firebase.Storage.StorageMetadata>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mC1671874C8D51F1F5C09CD6E8A1A9A22C8786B4F (Func_1_t778EB7B16100D642FF56D8271B366EFC64995FB0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t778EB7B16100D642FF56D8271B366EFC64995FB0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, ___object0, ___method1, method);
}
// O Firebase.Storage.StorageReference::CompleteTask<Firebase.Storage.MetadataInternal,Firebase.Storage.StorageMetadata>(System.Threading.Tasks.Task`1<I>,System.Threading.Tasks.TaskCompletionSource`1<O>,System.Func`1<O>,System.String,System.Boolean)
inline StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * StorageReference_CompleteTask_TisMetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37_TisStorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8_m935AD2904E3C1EAE7106E5D2F4A58B0EF86590C6 (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * ___task0, TaskCompletionSource_1_t890D1B8924B397DFA64F64F0E55EA5EBB3CAFA5F * ___completionSource1, Func_1_t778EB7B16100D642FF56D8271B366EFC64995FB0 * ___getResult2, String_t* ___operationDescription3, bool ___setCompletionSourceResult4, const RuntimeMethod* method)
{
	return ((  StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * (*) (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D *, Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 *, TaskCompletionSource_1_t890D1B8924B397DFA64F64F0E55EA5EBB3CAFA5F *, Func_1_t778EB7B16100D642FF56D8271B366EFC64995FB0 *, String_t*, bool, const RuntimeMethod*))StorageReference_CompleteTask_TisRuntimeObject_TisRuntimeObject_mE7B1E03D4A03235BD259D795A4081754B1E9FADF_gshared)(__this, ___task0, ___completionSource1, ___getResult2, ___operationDescription3, ___setCompletionSourceResult4, method);
}
// !0 System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>::get_Result()
inline MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * Task_1_get_Result_mC69B4ADFBAACBA0F764A10FEAF868D29A084E958 (Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * __this, const RuntimeMethod* method)
{
	return ((  MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * (*) (Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 *, const RuntimeMethod*))Task_1_get_Result_m828E969718CE9AD38335D3F48B6F9C84AB98DEE9_gshared)(__this, method);
}
// System.Void Firebase.Storage.StorageMetadata::.ctor(Firebase.Storage.StorageReference,Firebase.Storage.MetadataInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageMetadata__ctor_m0781E8038F5B5CF8E3AB57BE14711DBD170FB30A (StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * __this, StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * ___reference0, MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * ___metadata1, const RuntimeMethod* method);
// System.Void Firebase.Storage.Internal.TransferStateUpdater`1<Firebase.Storage.UploadState>::SetMetadata(Firebase.Storage.StorageMetadata)
inline void TransferStateUpdater_1_SetMetadata_mDEA1E9A5251F5FB55D65D709C9F0F1C2DB3D7D6F (TransferStateUpdater_1_t1346F4DF4E482A3BE7D6659C83E975328E7BC48B * __this, StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * ___metadata0, const RuntimeMethod* method)
{
	((  void (*) (TransferStateUpdater_1_t1346F4DF4E482A3BE7D6659C83E975328E7BC48B *, StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 *, const RuntimeMethod*))TransferStateUpdater_1_SetMetadata_m734ABDF913D339DB3EAF52D9F0A9856E924A0FC6_gshared)(__this, ___metadata0, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_mA675F47CE1DBD1948BDC9215DCAE93F07FC32E19 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_m7337D2694F4BF380C5B8893B4A924D7F0E762A48 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCanceled_m42A47FCA2C6F33308A08C92C8489E802448F6F42 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageReference/TaskCompletionStatus::set_IsSuccessful(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TaskCompletionStatus_set_IsSuccessful_m3F5BAA5B4F878466CE1679C61E18BA3F8031C50C_inline (TaskCompletionStatus_tBB1DB69F0E6FF1E8E4A5A89F863B03E761DEE105 * __this, bool ___value0, const RuntimeMethod* method);
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E * Task_get_Exception_mA61AAD3E52CBEB631D1956217B521456E7960B95 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// Firebase.Storage.StorageException Firebase.Storage.StorageException::CreateFromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * StorageException_CreateFromException_m2FF23B3F13BFF625A5580AB92D4A5CC74E864032 (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Int32 Firebase.Storage.StorageException::get_ErrorCode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t StorageException_get_ErrorCode_mFDEECBE336A8E1A466730F9B7A61ED819A77868E_inline (StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageReference/TaskCompletionStatus::set_IsCanceled(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TaskCompletionStatus_set_IsCanceled_m033C9938C78A41DABAC39A6549DD23FF27A6DB1E_inline (TaskCompletionStatus_tBB1DB69F0E6FF1E8E4A5A89F863B03E761DEE105 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageReference/TaskCompletionStatus::set_Exception(System.Exception)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TaskCompletionStatus_set_Exception_m1D3A8F600700B33D2C7E099FEC39DF2254188E8C_inline (TaskCompletionStatus_tBB1DB69F0E6FF1E8E4A5A89F863B03E761DEE105 * __this, Exception_t * ___value0, const RuntimeMethod* method);
// System.Exception Firebase.Storage.StorageReference/TaskCompletionStatus::get_Exception()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Exception_t * TaskCompletionStatus_get_Exception_m75B03EE058B83412D20D94AE477F5AE823AE9E08_inline (TaskCompletionStatus_tBB1DB69F0E6FF1E8E4A5A89F863B03E761DEE105 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_delete_StorageReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_delete_StorageReferenceInternal_mB500600E002DDAE585150A78075D2256A79472EC (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_Child__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_Child__SWIG_0_m40BB5050989ABF186A9B64EE338646007286704C (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_GetDownloadUrl(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_GetDownloadUrl_mD3D7580EF0456CA9CA0EC9B875C6B2996EDD4DD3 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureString::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString__ctor_m061489D0A1588D9DB38616FAB55A0BAD34485991 (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.String> Firebase.FutureString::GetTask(Firebase.FutureString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * FutureString_GetTask_mE15192AC5EC101E6836F1F806E3CD9B91950B647 (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * ___fu0, const RuntimeMethod* method);
// System.String Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_Bucket_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_Bucket_get_m4E54A784F1B95B246A391C70D0EC38E698870024 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_FullPath_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_FullPath_get_m8E65D03D5AE23B5FE329EB81A4013FAFFA9719BA (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Boolean Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_IsValid_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_IsValid_get_m4CAF166DAF5E51628084F68924C24E37A7644F86 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.Storage.MetadataInternal::getCPtr(Firebase.Storage.MetadataInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  MetadataInternal_getCPtr_m570EF283EEB2B5BFEBDF5381321B702286B2065E (MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * ___obj0, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_PutBytesUsingMonitorController(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.UInt32,System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_PutBytesUsingMonitorController_mF80336F7EF7013EED6D9E38FD3BDAB96771DC652 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, intptr_t ___jarg21, uint32_t ___jarg32, HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg43, HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg54, const RuntimeMethod* method);
// System.Void Firebase.Storage.Future_StorageMetadata::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata__ctor_m9DCE43063A0FC76DD9F007F3E63393E9B8B23677 (Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal> Firebase.Storage.Future_StorageMetadata::GetTask(Firebase.Storage.Future_StorageMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * Future_StorageMetadata_GetTask_m32211C2AEFFA3E76CB4CEBC4133992B80F61FCD3 (Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * ___fu0, const RuntimeMethod* method);
// System.Void Firebase.Storage.Internal.TransferState::.ctor(Firebase.Storage.StorageReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferState__ctor_m46E9BFEAD455D3764BB0D7F36C338A53846746F4 (TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * __this, StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * ___reference0, const RuntimeMethod* method);
// System.Void Firebase.Storage.Internal.TransferState::set_TotalByteCount(System.Int64)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TransferState_set_TotalByteCount_m269339181396E26CFCFC0A951357AD3A9E63F09C_inline (TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void Firebase.Storage.UploadState::set_State(Firebase.Storage.Internal.TransferState)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void UploadState_set_State_mDA473FDD5622DBA272E4552DE741306AD4D40022_inline (UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC * __this, TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * ___value0, const RuntimeMethod* method);
// System.Int64 Firebase.Storage.Internal.TransferState::get_BytesTransferred()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t TransferState_get_BytesTransferred_m65A05CED6F030394271641B7A6EFA8E0A13BFE6B_inline (TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * __this, const RuntimeMethod* method);
// System.Int64 Firebase.Storage.Internal.TransferState::get_TotalByteCount()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t TransferState_get_TotalByteCount_mD501E2B14C40CAE6591F77AAF7A7CB1D04D5F0EA_inline (TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * __this, const RuntimeMethod* method);
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
// System.Void Firebase.Storage.ControllerInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInternal__ctor_m522C553E3A3E41EB3B7980A9B12C6ADD5BD07920 (ControllerInternal_t2621A083A4D903DB174839BFB5EFA6E419A3A33B * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
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
// System.Void Firebase.Storage.ControllerInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInternal_Finalize_m79A98AF6A7A1A9061E5A6F0E4504E126F42F4381 (ControllerInternal_t2621A083A4D903DB174839BFB5EFA6E419A3A33B * __this, const RuntimeMethod* method)
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
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Storage.ControllerInternal::Dispose() */, __this);
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
// System.Void Firebase.Storage.ControllerInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInternal_Dispose_m91F009DAB3A099678C077A9BF21A868FA55667AE (ControllerInternal_t2621A083A4D903DB174839BFB5EFA6E419A3A33B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerInternal_Dispose_m91F009DAB3A099678C077A9BF21A868FA55667AE_MetadataUsageId);
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
			IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
			StorageInternalPINVOKE_Firebase_Storage_delete_ControllerInternal_m553EE5AA0EBF76071CDAE58703D37947987A713C(L_6, /*hidden argument*/NULL);
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
// System.Boolean Firebase.Storage.ControllerInternal::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerInternal_Cancel_m920A8CDF80BACC89DC8C579D109A94EEADB3946A (ControllerInternal_t2621A083A4D903DB174839BFB5EFA6E419A3A33B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerInternal_Cancel_m920A8CDF80BACC89DC8C579D109A94EEADB3946A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		bool L_1 = StorageInternalPINVOKE_Firebase_Storage_ControllerInternal_Cancel_mBC3CC0289C5513F9E75702467438B780913AE771(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ControllerInternal_Cancel_m920A8CDF80BACC89DC8C579D109A94EEADB3946A_RuntimeMethod_var);
	}

IL_001c:
	{
		bool L_4 = V_0;
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
// System.Void Firebase.Storage.FirebaseStorage::.ctor(Firebase.Storage.FirebaseStorageInternal,Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorage__ctor_mFBCFA1CAEBB22C2F9BEE10B6039497F2356AF88E (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * __this, FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * ___storage0, FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage__ctor_mFBCFA1CAEBB22C2F9BEE10B6039497F2356AF88E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * V_0 = NULL;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = ___app1;
		__this->set_firebaseApp_2(L_0);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_1 = __this->get_firebaseApp_2();
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_2 = (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)il2cpp_codegen_object_new(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var);
		EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F(L_2, __this, (intptr_t)((intptr_t)FirebaseStorage_OnAppDisposed_mFB74EEA40D06317F66F82664ED5B94CA10776B7F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		FirebaseApp_add_AppDisposed_m1CA5C0D303E4A5536DFDBE3356A900B3B966D4B6(L_1, L_2, /*hidden argument*/NULL);
		FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * L_3 = ___storage0;
		__this->set_storageInternal_1(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_4 = ((FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var))->get_logger_4();
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_5 = (ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC *)il2cpp_codegen_object_new(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_il2cpp_TypeInfo_var);
		ModuleLogger__ctor_m2EF1021CCB3F686ED6F2A18242B9A245A4983B59(L_5, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_6 = V_0;
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_7 = ((FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var))->get_logger_4();
		NullCheck(L_7);
		String_t* L_8 = ModuleLogger_get_Tag_mCB952398B5815EC03D792B21DF55A8B655177AE6(L_7, /*hidden argument*/NULL);
		FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * L_9 = __this->get_storageInternal_1();
		NullCheck(L_9);
		String_t* L_10 = FirebaseStorageInternal_get_Url_mEF967793D98A676620DA5239E5CAE0A27F05E5E3(L_9, /*hidden argument*/NULL);
		String_t* L_11 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral084BD859BAE63DF7DD5A9E11765523C5105CFA32, L_8, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		ModuleLogger_set_Tag_m3D42E7B948CCD7A1EC648250B7EE58A489140C77_inline(L_6, L_11, /*hidden argument*/NULL);
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		int32_t L_13 = FirebaseApp_get_LogLevel_mA1462E02A6B78D0F598CF9D3F22CAF13D9E29E8D(/*hidden argument*/NULL);
		NullCheck(L_12);
		ModuleLogger_set_Level_mB529EFC50B227772907A6C6E2302D6A7BF6A6905_inline(L_12, L_13, /*hidden argument*/NULL);
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_14 = V_0;
		FirebaseStorage_set_Logger_mC5DEE6DF946196EE8BC14D0EC66640982641DD80_inline(__this, L_14, /*hidden argument*/NULL);
		FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * L_15 = __this->get_storageInternal_1();
		NullCheck(L_15);
		FirebaseStorageInternal_SetSwigCMemOwn_mFBB598A591A556B30769E165A02D1862E1179886_inline(L_15, (bool)1, /*hidden argument*/NULL);
		FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * L_16 = __this->get_storageInternal_1();
		NullCheck(L_16);
		String_t* L_17 = FirebaseStorageInternal_get_InstanceKey_mF13140F44AB3DD29D7501153C43AACE5C02F984D(L_16, /*hidden argument*/NULL);
		__this->set_instanceKey_3(L_17);
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_18 = FirebaseStorage_get_Logger_m9D26CA2E9727C776304599A25248D7D3DD821CBA_inline(__this, /*hidden argument*/NULL);
		String_t* L_19 = __this->get_instanceKey_3();
		String_t* L_20 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralBC38D2D8F1393F9C307190DA328B0E22A72B7B88, L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		ModuleLogger_LogMessage_m5116219D021DBF1651FAB90D6E244D7B473D1ADD(L_18, 1, L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.FirebaseStorage::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorage_Finalize_m2E5762B8D1245EAD64163DD565A03C667FD42A97 (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage_Finalize_m2E5762B8D1245EAD64163DD565A03C667FD42A97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
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
		FirebaseStorage_Dispose_mCF6BAD5BBD632BD1B71AB6A92A3EEB70C24612CF(__this, /*hidden argument*/NULL);
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_0 = FirebaseStorage_get_Logger_m9D26CA2E9727C776304599A25248D7D3DD821CBA_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = __this->get_instanceKey_3();
		String_t* L_2 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral64DE58E10ACFF10ABF400761927C76B5FB4D5C35, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		ModuleLogger_LogMessage_m5116219D021DBF1651FAB90D6E244D7B473D1ADD(L_0, 1, L_2, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2E, FINALLY_0027);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(39)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(39)
	{
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002e:
	{
		return;
	}
}
// System.Void Firebase.Storage.FirebaseStorage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorage_Dispose_mCF6BAD5BBD632BD1B71AB6A92A3EEB70C24612CF (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage_Dispose_mCF6BAD5BBD632BD1B71AB6A92A3EEB70C24612CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
		Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9 * L_0 = ((FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var))->get_storageByInstanceKey_0();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * L_2 = __this->get_storageInternal_1();
			if (!L_2)
			{
				goto IL_0079;
			}
		}

IL_001d:
		{
			FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * L_3 = __this->get_storageInternal_1();
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_4 = FirebaseStorageInternal_getCPtr_mB6DBD7BEA4B11C7AE2ECEDCFDD629AC12D0F9E99(L_3, /*hidden argument*/NULL);
			V_1 = L_4;
			intptr_t L_5 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)(&V_1), /*hidden argument*/NULL);
			bool L_6 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_5, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0079;
			}
		}

IL_003f:
		{
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_7 = __this->get_firebaseApp_2();
			EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_8 = (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)il2cpp_codegen_object_new(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var);
			EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F(L_8, __this, (intptr_t)((intptr_t)FirebaseStorage_OnAppDisposed_mFB74EEA40D06317F66F82664ED5B94CA10776B7F_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_7);
			FirebaseApp_remove_AppDisposed_mE9EBC4903F93C997C038F8B12940A3D658624EA9(L_7, L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
			Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9 * L_9 = ((FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var))->get_storageByInstanceKey_0();
			String_t* L_10 = __this->get_instanceKey_3();
			NullCheck(L_9);
			Dictionary_2_Remove_mB1F9447357E88D752C84519BF5067E0D68A70782(L_9, L_10, /*hidden argument*/Dictionary_2_Remove_mB1F9447357E88D752C84519BF5067E0D68A70782_RuntimeMethod_var);
			FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * L_11 = __this->get_storageInternal_1();
			NullCheck(L_11);
			VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Storage.FirebaseStorageInternal::Dispose() */, L_11);
			__this->set_storageInternal_1((FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 *)NULL);
		}

IL_0079:
		{
			IL2CPP_LEAVE(0x85, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_12 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_12, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(126)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_JUMP_TBL(0x85, IL_0085)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0085:
	{
		return;
	}
}
// System.Void Firebase.Storage.FirebaseStorage::OnAppDisposed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorage_OnAppDisposed_mFB74EEA40D06317F66F82664ED5B94CA10776B7F (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___eventArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage_OnAppDisposed_mFB74EEA40D06317F66F82664ED5B94CA10776B7F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseLogger_t0AB9A6D2522CBB2F7D180395382228A4759420DE_il2cpp_TypeInfo_var);
		FirebaseLogger_LogMessage_mEF2033A0588D651D162FFE29C9FA77A39E51233E(3, _stringLiteral20EC70B1C664879585B45CF1BCF7203938E5A56F, /*hidden argument*/NULL);
		FirebaseStorage_Dispose_mCF6BAD5BBD632BD1B71AB6A92A3EEB70C24612CF(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.FirebaseStorage::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorage_ThrowIfNull_mD27EB52F6E23002FF0B6A6E847768D4DE7CD82AA (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage_ThrowIfNull_mD27EB52F6E23002FF0B6A6E847768D4DE7CD82AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * L_0 = __this->get_storageInternal_1();
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * L_1 = __this->get_storageInternal_1();
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_2 = FirebaseStorageInternal_getCPtr_mB6DBD7BEA4B11C7AE2ECEDCFDD629AC12D0F9E99(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		intptr_t L_3 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)(&V_0), /*hidden argument*/NULL);
		bool L_4 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}

IL_002d:
	{
		NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_5 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m7D46E331C349DD29CBA488C9B6A950A3E7DD5CAE(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, FirebaseStorage_ThrowIfNull_mD27EB52F6E23002FF0B6A6E847768D4DE7CD82AA_RuntimeMethod_var);
	}

IL_0033:
	{
		return;
	}
}
// Firebase.Storage.Internal.ModuleLogger Firebase.Storage.FirebaseStorage::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * FirebaseStorage_get_Logger_m9D26CA2E9727C776304599A25248D7D3DD821CBA (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * __this, const RuntimeMethod* method)
{
	{
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_0 = __this->get_U3CLoggerU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Firebase.Storage.FirebaseStorage::set_Logger(Firebase.Storage.Internal.ModuleLogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorage_set_Logger_mC5DEE6DF946196EE8BC14D0EC66640982641DD80 (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * __this, ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * ___value0, const RuntimeMethod* method)
{
	{
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_0 = ___value0;
		__this->set_U3CLoggerU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Uri Firebase.Storage.FirebaseStorage::ConstructFormattedUri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * FirebaseStorage_ConstructFormattedUri_m1158395057D88A619A93A8CE9D5175C0F404A442 (String_t* ___formattedUrl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage_ConstructFormattedUri_m1158395057D88A619A93A8CE9D5175C0F404A442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 7);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0 = ___formattedUrl0;
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_1 = (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E *)il2cpp_codegen_object_new(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var);
		Uri__ctor_mBA69907A1D799CD12ED44B611985B25FE4C626A2(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = Uri_get_PathAndQuery_mF079BA04B7A397B2729E5B5DEE72B3654A44E384(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
		FieldInfo_t * L_4 = ((FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var))->get_pathFieldInfo_6();
		if (L_4)
		{
			goto IL_005f;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_5 = { reinterpret_cast<intptr_t> (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		FieldInfo_t * L_7 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(42 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_6, _stringLiteral3150ECD5E0294534A81AE047DDAC559DE481D774, ((int32_t)36));
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
		((FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var))->set_pathFieldInfo_6(L_7);
		FieldInfo_t * L_8 = ((FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var))->get_pathFieldInfo_6();
		if (L_8)
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
		FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_9 = FirebaseStorage_get_DefaultInstance_mD147240F80D3517AE2EB7FAC5C16C3AD38D9DC1E(/*hidden argument*/NULL);
		NullCheck(L_9);
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_10 = FirebaseStorage_get_Logger_m9D26CA2E9727C776304599A25248D7D3DD821CBA_inline(L_9, /*hidden argument*/NULL);
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		String_t* L_13 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral803D955CDFE7F4D296550552B1654E3778AD5214, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		ModuleLogger_LogMessage_m5116219D021DBF1651FAB90D6E244D7B473D1ADD(L_10, 1, L_13, /*hidden argument*/NULL);
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_14 = V_0;
		return L_14;
	}

IL_005f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
		FieldInfo_t * L_15 = ((FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var))->get_cachedToString_7();
		if (L_15)
		{
			goto IL_00ae;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_16 = { reinterpret_cast<intptr_t> (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		FieldInfo_t * L_18 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(42 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_17, _stringLiteralFD76FC52C200204792701C73090393FA14BA7060, ((int32_t)36));
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
		((FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var))->set_cachedToString_7(L_18);
		FieldInfo_t * L_19 = ((FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var))->get_cachedToString_7();
		if (L_19)
		{
			goto IL_00ae;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
		FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_20 = FirebaseStorage_get_DefaultInstance_mD147240F80D3517AE2EB7FAC5C16C3AD38D9DC1E(/*hidden argument*/NULL);
		NullCheck(L_20);
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_21 = FirebaseStorage_get_Logger_m9D26CA2E9727C776304599A25248D7D3DD821CBA_inline(L_20, /*hidden argument*/NULL);
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_22 = V_0;
		NullCheck(L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		String_t* L_24 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral6C94134246E03B1A429C7D71BD50C140CCAE32F7, L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		ModuleLogger_LogMessage_m5116219D021DBF1651FAB90D6E244D7B473D1ADD(L_21, 1, L_24, /*hidden argument*/NULL);
	}

IL_00ae:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
			FieldInfo_t * L_25 = ((FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var))->get_pathFieldInfo_6();
			Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_26 = V_0;
			NullCheck(L_25);
			RuntimeObject * L_27 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_25, L_26);
			V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_27, String_t_il2cpp_TypeInfo_var));
			String_t* L_28 = V_2;
			if (L_28)
			{
				goto IL_00cc;
			}
		}

IL_00c5:
		{
			Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_29 = V_0;
			V_3 = L_29;
			goto IL_01cd;
		}

IL_00cc:
		{
			String_t* L_30 = V_2;
			NullCheck(L_30);
			int32_t L_31 = String_LastIndexOf_mC924D20DC71F85A7106D9DD09BF41497C6816E20(L_30, _stringLiteral05B65594B94FCFE93A1CCFF2E5D1EA738C256843, /*hidden argument*/NULL);
			V_4 = L_31;
			int32_t L_32 = V_4;
			if ((!(((uint32_t)L_32) == ((uint32_t)(-1)))))
			{
				goto IL_00e8;
			}
		}

IL_00e1:
		{
			Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_33 = V_0;
			V_3 = L_33;
			goto IL_01cd;
		}

IL_00e8:
		{
			int32_t L_34 = V_4;
			String_t* L_35 = V_2;
			NullCheck(L_35);
			int32_t L_36 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_35, /*hidden argument*/NULL);
			if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)3))) == ((uint32_t)L_36))))
			{
				goto IL_00fe;
			}
		}

IL_00f7:
		{
			Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_37 = V_0;
			V_3 = L_37;
			goto IL_01cd;
		}

IL_00fe:
		{
			String_t* L_38 = V_2;
			int32_t L_39 = V_4;
			NullCheck(L_38);
			String_t* L_40 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_38, ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)3)), /*hidden argument*/NULL);
			NullCheck(L_40);
			String_t* L_41 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_40, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, _stringLiteralA7FBA8DFCC575B6A16C01A08BE6AFD32AA9E15F8, /*hidden argument*/NULL);
			V_5 = L_41;
			String_t* L_42 = V_2;
			int32_t L_43 = V_4;
			NullCheck(L_42);
			String_t* L_44 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_42, 0, ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)3)), /*hidden argument*/NULL);
			String_t* L_45 = V_5;
			String_t* L_46 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_44, L_45, /*hidden argument*/NULL);
			V_2 = L_46;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
			FieldInfo_t * L_47 = ((FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var))->get_pathFieldInfo_6();
			Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_48 = V_0;
			String_t* L_49 = V_2;
			NullCheck(L_47);
			FieldInfo_SetValue_m9E7A4FBA27F835B6C26CC09CF609333967150E41(L_47, L_48, L_49, /*hidden argument*/NULL);
			FieldInfo_t * L_50 = ((FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var))->get_cachedToString_7();
			if (!L_50)
			{
				goto IL_014e;
			}
		}

IL_0142:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
			FieldInfo_t * L_51 = ((FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var))->get_cachedToString_7();
			Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_52 = V_0;
			String_t* L_53 = ___formattedUrl0;
			NullCheck(L_51);
			FieldInfo_SetValue_m9E7A4FBA27F835B6C26CC09CF609333967150E41(L_51, L_52, L_53, /*hidden argument*/NULL);
		}

IL_014e:
		{
			goto IL_01c5;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (FieldAccessException_tBFF096C9CF3CA2BF95A3D596D7E50EF32B178BDF_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0153;
		if(il2cpp_codegen_class_is_assignable_from (TargetException_tF055BE26B63ED0C556BCD5B31BE911D1F91AA88E_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0179;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_019f;
		throw e;
	}

CATCH_0153:
	{ // begin catch(System.FieldAccessException)
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
		FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_54 = FirebaseStorage_get_DefaultInstance_mD147240F80D3517AE2EB7FAC5C16C3AD38D9DC1E(/*hidden argument*/NULL);
		NullCheck(L_54);
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_55 = FirebaseStorage_get_Logger_m9D26CA2E9727C776304599A25248D7D3DD821CBA_inline(L_54, /*hidden argument*/NULL);
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_56 = V_0;
		NullCheck(L_56);
		String_t* L_57 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_56);
		String_t* L_58 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralE29266172D48C026A5C663577A253D43B90AA1C5, L_57, /*hidden argument*/NULL);
		NullCheck(L_55);
		ModuleLogger_LogMessage_m5116219D021DBF1651FAB90D6E244D7B473D1ADD(L_55, 1, L_58, /*hidden argument*/NULL);
		goto IL_01c5;
	} // end catch (depth: 1)

CATCH_0179:
	{ // begin catch(System.Reflection.TargetException)
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
		FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_59 = FirebaseStorage_get_DefaultInstance_mD147240F80D3517AE2EB7FAC5C16C3AD38D9DC1E(/*hidden argument*/NULL);
		NullCheck(L_59);
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_60 = FirebaseStorage_get_Logger_m9D26CA2E9727C776304599A25248D7D3DD821CBA_inline(L_59, /*hidden argument*/NULL);
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_61 = V_0;
		NullCheck(L_61);
		String_t* L_62 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_61);
		String_t* L_63 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralD4C8478F7A3D529E62A60EE716FC3DAF2A6AA19D, L_62, /*hidden argument*/NULL);
		NullCheck(L_60);
		ModuleLogger_LogMessage_m5116219D021DBF1651FAB90D6E244D7B473D1ADD(L_60, 1, L_63, /*hidden argument*/NULL);
		goto IL_01c5;
	} // end catch (depth: 1)

CATCH_019f:
	{ // begin catch(System.ArgumentException)
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
		FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_64 = FirebaseStorage_get_DefaultInstance_mD147240F80D3517AE2EB7FAC5C16C3AD38D9DC1E(/*hidden argument*/NULL);
		NullCheck(L_64);
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_65 = FirebaseStorage_get_Logger_m9D26CA2E9727C776304599A25248D7D3DD821CBA_inline(L_64, /*hidden argument*/NULL);
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_66 = V_0;
		NullCheck(L_66);
		String_t* L_67 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_66);
		String_t* L_68 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral1079DBC88B58081B8E0483B851CFB170732B96ED, L_67, /*hidden argument*/NULL);
		NullCheck(L_65);
		ModuleLogger_LogMessage_m5116219D021DBF1651FAB90D6E244D7B473D1ADD(L_65, 1, L_68, /*hidden argument*/NULL);
		goto IL_01c5;
	} // end catch (depth: 1)

IL_01c5:
	{
		String_t* L_69 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_KeepAlive_mE836EDA45A7C6BFDCEA004B9089FA6B4810BDA89(L_69, /*hidden argument*/NULL);
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_70 = V_0;
		return L_70;
	}

IL_01cd:
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_71 = V_3;
		return L_71;
	}
}
// Firebase.Storage.FirebaseStorage Firebase.Storage.FirebaseStorage::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * FirebaseStorage_get_DefaultInstance_mD147240F80D3517AE2EB7FAC5C16C3AD38D9DC1E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage_get_DefaultInstance_mD147240F80D3517AE2EB7FAC5C16C3AD38D9DC1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = FirebaseApp_get_DefaultInstance_m46ACEAEC916D0AC3014302498F51607462EE5C63(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
		FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_1 = FirebaseStorage_GetInstance_m21994D83A2DD44D668ED239E36520613E867E0D0(L_0, (String_t*)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// Firebase.Storage.FirebaseStorage Firebase.Storage.FirebaseStorage::GetInstance(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * FirebaseStorage_GetInstance_m21994D83A2DD44D668ED239E36520613E867E0D0 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, String_t* ___url1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage_GetInstance_m21994D83A2DD44D668ED239E36520613E867E0D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * G_B2_0 = NULL;
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * G_B1_0 = NULL;
	String_t* G_B5_0 = NULL;
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * G_B5_1 = NULL;
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * G_B4_0 = NULL;
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * G_B3_0 = NULL;
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = ___app0;
		String_t* L_1 = ___url1;
		bool L_2 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_1, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0012;
		}
	}
	{
		String_t* L_3 = ___url1;
		G_B5_0 = L_3;
		G_B5_1 = G_B1_0;
		goto IL_0042;
	}

IL_0012:
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_4 = ___app0;
		NullCheck(L_4);
		AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * L_5 = FirebaseApp_get_Options_mDD4642CC794D4339D5AF6CC2A3607A9FE52F81E6(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = AppOptions_get_StorageBucket_mAB8AC18DB43252A87255F7B469F71D34611ECC4B_inline(L_5, /*hidden argument*/NULL);
		bool L_7 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_6, /*hidden argument*/NULL);
		G_B3_0 = G_B2_0;
		if (L_7)
		{
			G_B4_0 = G_B2_0;
			goto IL_0041;
		}
	}
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_8 = ___app0;
		NullCheck(L_8);
		AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * L_9 = FirebaseApp_get_Options_mDD4642CC794D4339D5AF6CC2A3607A9FE52F81E6(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = AppOptions_get_StorageBucket_mAB8AC18DB43252A87255F7B469F71D34611ECC4B_inline(L_9, /*hidden argument*/NULL);
		String_t* L_11 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral1E0CC51B9D88706B7988CF25A9C9803C5468E964, L_10, /*hidden argument*/NULL);
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		goto IL_0042;
	}

IL_0041:
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B4_0;
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
		FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_12 = FirebaseStorage_GetInstanceInternal_mB799F11544E1A3B2F966B97DE7E1227C29A2A71C(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		return L_12;
	}
}
// Firebase.Storage.FirebaseStorage Firebase.Storage.FirebaseStorage::FindByKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * FirebaseStorage_FindByKey_m119B16DD6194B969CCE5434AB1DC545EE2329359 (String_t* ___instanceKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage_FindByKey_m119B16DD6194B969CCE5434AB1DC545EE2329359_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * V_1 = NULL;
	FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
		Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9 * L_0 = ((FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var))->get_storageByInstanceKey_0();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			V_1 = (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 *)NULL;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
			Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9 * L_2 = ((FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var))->get_storageByInstanceKey_0();
			String_t* L_3 = ___instanceKey0;
			NullCheck(L_2);
			bool L_4 = Dictionary_2_TryGetValue_m1A3EB9267E87E2090ED63711C9190AA1FE9CFFDA(L_2, L_3, (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m1A3EB9267E87E2090ED63711C9190AA1FE9CFFDA_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_0039;
			}
		}

IL_0020:
		{
			FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_5 = V_1;
			if (!L_5)
			{
				goto IL_002d;
			}
		}

IL_0026:
		{
			FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_6 = V_1;
			V_2 = L_6;
			IL2CPP_LEAVE(0x47, FINALLY_003e);
		}

IL_002d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
			Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9 * L_7 = ((FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var))->get_storageByInstanceKey_0();
			String_t* L_8 = ___instanceKey0;
			NullCheck(L_7);
			Dictionary_2_Remove_mB1F9447357E88D752C84519BF5067E0D68A70782(L_7, L_8, /*hidden argument*/Dictionary_2_Remove_mB1F9447357E88D752C84519BF5067E0D68A70782_RuntimeMethod_var);
		}

IL_0039:
		{
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
		RuntimeObject * L_9 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(62)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0045:
	{
		return (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 *)NULL;
	}

IL_0047:
	{
		FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_10 = V_2;
		return L_10;
	}
}
// Firebase.Storage.FirebaseStorage Firebase.Storage.FirebaseStorage::GetInstanceInternal(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * FirebaseStorage_GetInstanceInternal_mB799F11544E1A3B2F966B97DE7E1227C29A2A71C (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, String_t* ___bucketUrl1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage_GetInstanceInternal_mB799F11544E1A3B2F966B97DE7E1227C29A2A71C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * V_1 = NULL;
	ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * V_2 = NULL;
	FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	String_t* V_5 = NULL;
	FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * G_B2_0 = NULL;
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * G_B1_0 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	int32_t G_B12_2 = 0;
	ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * G_B12_3 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	int32_t G_B11_2 = 0;
	ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * G_B11_3 = NULL;
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = ___app0;
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_2 = FirebaseApp_get_DefaultInstance_m46ACEAEC916D0AC3014302498F51607462EE5C63(/*hidden argument*/NULL);
		G_B2_0 = L_2;
	}

IL_000d:
	{
		___app0 = G_B2_0;
		V_1 = (FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 *)NULL;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_3 = ___app0;
		String_t* L_4 = ___bucketUrl1;
		FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * L_5 = FirebaseStorageInternal_GetInstanceInternal_mF786041AC57E33E6EA529A42991188499B806D02(L_3, L_4, (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_002d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0020;
		throw e;
	}

CATCH_0020:
	{ // begin catch(System.ApplicationException)
		V_2 = ((ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)__exception_local);
		ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_6 = V_2;
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_6);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_8 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, FirebaseStorage_GetInstanceInternal_mB799F11544E1A3B2F966B97DE7E1227C29A2A71C_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_002d:
	{
		int32_t L_9 = V_0;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		String_t* L_10 = ___bucketUrl1;
		String_t* L_11 = L_10;
		G_B7_0 = L_11;
		G_B7_1 = _stringLiteral9F9CF9FA3E67C311A90AB68D3732B579BDFBF238;
		if (L_11)
		{
			G_B8_0 = L_11;
			G_B8_1 = _stringLiteral9F9CF9FA3E67C311A90AB68D3732B579BDFBF238;
			goto IL_0045;
		}
	}
	{
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B8_0 = L_12;
		G_B8_1 = G_B7_1;
	}

IL_0045:
	{
		String_t* L_13 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_14 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, FirebaseStorage_GetInstanceInternal_mB799F11544E1A3B2F966B97DE7E1227C29A2A71C_RuntimeMethod_var);
	}

IL_0050:
	{
		FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * L_15 = V_1;
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_16 = ((FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var))->get_logger_4();
		String_t* L_17 = ___bucketUrl1;
		String_t* L_18 = L_17;
		G_B11_0 = L_18;
		G_B11_1 = _stringLiteral6E1F193040D7DC4A612354810CF0A0CA1112BB23;
		G_B11_2 = 4;
		G_B11_3 = L_16;
		if (L_18)
		{
			G_B12_0 = L_18;
			G_B12_1 = _stringLiteral6E1F193040D7DC4A612354810CF0A0CA1112BB23;
			G_B12_2 = 4;
			G_B12_3 = L_16;
			goto IL_006e;
		}
	}
	{
		String_t* L_19 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B12_0 = L_19;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_006e:
	{
		String_t* L_20 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(G_B12_1, G_B12_0, /*hidden argument*/NULL);
		NullCheck(G_B12_3);
		ModuleLogger_LogMessage_m5116219D021DBF1651FAB90D6E244D7B473D1ADD(G_B12_3, G_B12_2, L_20, /*hidden argument*/NULL);
		return (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 *)NULL;
	}

IL_007a:
	{
		V_3 = (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
		Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9 * L_21 = ((FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var))->get_storageByInstanceKey_0();
		V_4 = L_21;
		RuntimeObject * L_22 = V_4;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_22, /*hidden argument*/NULL);
	}

IL_008a:
	try
	{ // begin try (depth: 1)
		{
			FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * L_23 = V_1;
			NullCheck(L_23);
			String_t* L_24 = FirebaseStorageInternal_get_InstanceKey_mF13140F44AB3DD29D7501153C43AACE5C02F984D(L_23, /*hidden argument*/NULL);
			V_5 = L_24;
			String_t* L_25 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
			FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_26 = FirebaseStorage_FindByKey_m119B16DD6194B969CCE5434AB1DC545EE2329359(L_25, /*hidden argument*/NULL);
			V_3 = L_26;
			FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_27 = V_3;
			if (!L_27)
			{
				goto IL_00a8;
			}
		}

IL_00a0:
		{
			FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_28 = V_3;
			V_6 = L_28;
			IL2CPP_LEAVE(0xCC, FINALLY_00c2);
		}

IL_00a8:
		{
			FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * L_29 = V_1;
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_30 = ___app0;
			FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_31 = (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 *)il2cpp_codegen_object_new(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
			FirebaseStorage__ctor_mFBCFA1CAEBB22C2F9BEE10B6039497F2356AF88E(L_31, L_29, L_30, /*hidden argument*/NULL);
			V_3 = L_31;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
			Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9 * L_32 = ((FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var))->get_storageByInstanceKey_0();
			String_t* L_33 = V_5;
			FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_34 = V_3;
			NullCheck(L_32);
			Dictionary_2_set_Item_m68C6C4AF34FF7A228B3B198EFB7FE8FE7656CE19(L_32, L_33, L_34, /*hidden argument*/Dictionary_2_set_Item_m68C6C4AF34FF7A228B3B198EFB7FE8FE7656CE19_RuntimeMethod_var);
			IL2CPP_LEAVE(0xCA, FINALLY_00c2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c2;
	}

FINALLY_00c2:
	{ // begin finally (depth: 1)
		RuntimeObject * L_35 = V_4;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_35, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(194)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(194)
	{
		IL2CPP_JUMP_TBL(0xCC, IL_00cc)
		IL2CPP_JUMP_TBL(0xCA, IL_00ca)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ca:
	{
		FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_36 = V_3;
		return L_36;
	}

IL_00cc:
	{
		FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_37 = V_6;
		return L_37;
	}
}
// Firebase.Storage.StorageReferenceInternal Firebase.Storage.FirebaseStorage::ValidateStorageReferenceInternal(Firebase.Storage.StorageReferenceInternal,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * FirebaseStorage_ValidateStorageReferenceInternal_m3B4644FA100A1D6D7452B2364B11C71BE6FBEFCD (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * __this, StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * ___reference0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage_ValidateStorageReferenceInternal_m3B4644FA100A1D6D7452B2364B11C71BE6FBEFCD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_0 = ___reference0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_1 = ___reference0;
		NullCheck(L_1);
		bool L_2 = StorageReferenceInternal_get_IsValid_mF15A79A12CA432B0D5646FC284298F71301CBA4F(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0018;
		}
	}

IL_0011:
	{
		String_t* L_3 = ___message1;
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_4 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, FirebaseStorage_ValidateStorageReferenceInternal_m3B4644FA100A1D6D7452B2364B11C71BE6FBEFCD_RuntimeMethod_var);
	}

IL_0018:
	{
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_5 = ___reference0;
		return L_5;
	}
}
// Firebase.Storage.StorageReference Firebase.Storage.FirebaseStorage::GetReferenceFromUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * FirebaseStorage_GetReferenceFromUrl_mA66DBF499E2459375241A6FFDB4B8284BF17A8E3 (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * __this, String_t* ___fullUrl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage_GetReferenceFromUrl_mA66DBF499E2459375241A6FFDB4B8284BF17A8E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * V_0 = NULL;
	ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * V_1 = NULL;
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
		FirebaseStorage_ThrowIfNull_mD27EB52F6E23002FF0B6A6E847768D4DE7CD82AA(__this, /*hidden argument*/NULL);
		FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * L_0 = __this->get_storageInternal_1();
		String_t* L_1 = ___fullUrl0;
		NullCheck(L_0);
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_2 = FirebaseStorageInternal_GetReferenceFromUrl_mF0D69EBF304A360A22E532C37DFD26038FC62355(L_0, L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___fullUrl0;
		FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * L_4 = __this->get_storageInternal_1();
		NullCheck(L_4);
		String_t* L_5 = FirebaseStorageInternal_get_Url_mEF967793D98A676620DA5239E5CAE0A27F05E5E3(L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralAC9ACBC4773271CEDD606BE3DB841E2CE6A785ED, L_3, L_5, /*hidden argument*/NULL);
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_7 = FirebaseStorage_ValidateStorageReferenceInternal_m3B4644FA100A1D6D7452B2364B11C71BE6FBEFCD(__this, L_2, L_6, /*hidden argument*/NULL);
		StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * L_8 = (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D *)il2cpp_codegen_object_new(StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D_il2cpp_TypeInfo_var);
		StorageReference__ctor_mC3EB957AAE76256E3AF4E86E7FC46B2908584299(L_8, __this, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0047;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_003a;
		throw e;
	}

CATCH_003a:
	{ // begin catch(System.ApplicationException)
		V_1 = ((ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)__exception_local);
		ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_9);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_11 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, FirebaseStorage_GetReferenceFromUrl_mA66DBF499E2459375241A6FFDB4B8284BF17A8E3_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0047:
	{
		StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * L_12 = V_0;
		return L_12;
	}
}
// System.Void Firebase.Storage.FirebaseStorage::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorage__cctor_mC01F4D75DC6689A93443AB65F4393909FF0F675A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage__cctor_mC01F4D75DC6689A93443AB65F4393909FF0F675A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * V_0 = NULL;
	{
		Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9 * L_0 = (Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9 *)il2cpp_codegen_object_new(Dictionary_2_tECADF858CD13745F96A170B192C8CF92B96ECAD9_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m82E13927F53980BB046608473DFFE11E6105EEDD(L_0, /*hidden argument*/Dictionary_2__ctor_m82E13927F53980BB046608473DFFE11E6105EEDD_RuntimeMethod_var);
		((FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var))->set_storageByInstanceKey_0(L_0);
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_1 = (ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC *)il2cpp_codegen_object_new(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_il2cpp_TypeInfo_var);
		ModuleLogger__ctor_m2EF1021CCB3F686ED6F2A18242B9A245A4983B59(L_1, (ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_2 = V_0;
		NullCheck(L_2);
		ModuleLogger_set_Tag_m3D42E7B948CCD7A1EC648250B7EE58A489140C77_inline(L_2, _stringLiteralFF7F9006731D316A0922BFFBA210530ABD4FC908, /*hidden argument*/NULL);
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_3 = V_0;
		((FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var))->set_logger_4(L_3);
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
// System.Void Firebase.Storage.FirebaseStorageInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorageInternal__ctor_mD907DD63908337D1A0D4927E41B2702F653CA04C (FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
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
// System.Runtime.InteropServices.HandleRef Firebase.Storage.FirebaseStorageInternal::getCPtr(Firebase.Storage.FirebaseStorageInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  FirebaseStorageInternal_getCPtr_mB6DBD7BEA4B11C7AE2ECEDCFDD629AC12D0F9E99 (FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorageInternal_getCPtr_mB6DBD7BEA4B11C7AE2ECEDCFDD629AC12D0F9E99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * L_0 = ___obj0;
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
		FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_3 = L_2->get_swigCPtr_0();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Storage.FirebaseStorageInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorageInternal_Finalize_mECBAEA151EE32255D927227BD480F59F2F934B2A (FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * __this, const RuntimeMethod* method)
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
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Storage.FirebaseStorageInternal::Dispose() */, __this);
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
// System.Void Firebase.Storage.FirebaseStorageInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorageInternal_Dispose_m962E9484ABA7E1C6D026E0760867DBF59327CE55 (FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorageInternal_Dispose_m962E9484ABA7E1C6D026E0760867DBF59327CE55_MetadataUsageId);
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
		FirebaseStorageInternal_ReleaseReferenceInternal_mE0E6549A75E16B6EED6C6607E6ADE9EAB4D08F60(__this, /*hidden argument*/NULL);
		__this->set_swigCMemOwn_1((bool)0);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_2), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		IL2CPP_LEAVE(0x36, FINALLY_002f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_3 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(47)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_JUMP_TBL(0x36, IL_0036)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0036:
	{
		return;
	}
}
// System.String Firebase.Storage.FirebaseStorageInternal::get_InstanceKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseStorageInternal_get_InstanceKey_mF13140F44AB3DD29D7501153C43AACE5C02F984D (FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * __this, const RuntimeMethod* method)
{
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = FirebaseStorageInternal_get_App_mAE7345FEE5043764F9FD63C45B42ECDEC7CA4FF5(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = FirebaseApp_get_Name_mB5E945165A8F7DFAA21F0AD3A9E99CC3438943C5_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = FirebaseStorageInternal_get_Url_mEF967793D98A676620DA5239E5CAE0A27F05E5E3(__this, /*hidden argument*/NULL);
		String_t* L_3 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Firebase.Storage.FirebaseStorageInternal::SetSwigCMemOwn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorageInternal_SetSwigCMemOwn_mFBB598A591A556B30769E165A02D1862E1179886 (FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * __this, bool ___ownership0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___ownership0;
		__this->set_swigCMemOwn_1(L_0);
		return;
	}
}
// Firebase.Storage.StorageReferenceInternal Firebase.Storage.FirebaseStorageInternal::GetReferenceFromUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * FirebaseStorageInternal_GetReferenceFromUrl_mF0D69EBF304A360A22E532C37DFD26038FC62355 (FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorageInternal_GetReferenceFromUrl_mF0D69EBF304A360A22E532C37DFD26038FC62355_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___url0;
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		intptr_t L_2 = StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_GetReferenceFromUrl__SWIG_0_m8D80595789EBF41F7C58BA11D8BF9D6AE708769E(L_0, L_1, /*hidden argument*/NULL);
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_3 = (StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 *)il2cpp_codegen_object_new(StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383_il2cpp_TypeInfo_var);
		StorageReferenceInternal__ctor_m433C48D69FEEF71B510E99DA3992B1FAD9E6D6ED(L_3, (intptr_t)L_2, (bool)1, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		Exception_t * L_5 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, FirebaseStorageInternal_GetReferenceFromUrl_mF0D69EBF304A360A22E532C37DFD26038FC62355_RuntimeMethod_var);
	}

IL_0023:
	{
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_6 = V_0;
		return L_6;
	}
}
// Firebase.Storage.FirebaseStorageInternal Firebase.Storage.FirebaseStorageInternal::GetInstanceInternal(Firebase.FirebaseApp,System.String,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * FirebaseStorageInternal_GetInstanceInternal_mF786041AC57E33E6EA529A42991188499B806D02 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, String_t* ___url1, int32_t* ___init_result_out2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorageInternal_GetInstanceInternal_mF786041AC57E33E6EA529A42991188499B806D02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * V_2 = NULL;
	FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * G_B4_0 = NULL;
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
			String_t* L_2 = ___url1;
			IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
			intptr_t L_3 = StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_GetInstanceInternal_m91CB46DEDA63BCC952178530C899B3C9B541F1C9(L_1, L_2, (int32_t*)(&V_0), /*hidden argument*/NULL);
			V_1 = (intptr_t)L_3;
			intptr_t L_4 = V_1;
			bool L_5 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0027;
			}
		}

IL_0021:
		{
			G_B4_0 = ((FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 *)(NULL));
			goto IL_002e;
		}

IL_0027:
		{
			intptr_t L_6 = V_1;
			FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * L_7 = (FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 *)il2cpp_codegen_object_new(FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0_il2cpp_TypeInfo_var);
			FirebaseStorageInternal__ctor_mD907DD63908337D1A0D4927E41B2702F653CA04C(L_7, (intptr_t)L_6, (bool)0, /*hidden argument*/NULL);
			G_B4_0 = L_7;
		}

IL_002e:
		{
			V_2 = G_B4_0;
			bool L_8 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003f;
			}
		}

IL_0039:
		{
			Exception_t * L_9 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, FirebaseStorageInternal_GetInstanceInternal_mF786041AC57E33E6EA529A42991188499B806D02_RuntimeMethod_var);
		}

IL_003f:
		{
			FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * L_10 = V_2;
			V_3 = L_10;
			IL2CPP_LEAVE(0x4A, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		int32_t* L_11 = ___init_result_out2;
		int32_t L_12 = V_0;
		*((int32_t*)L_11) = (int32_t)L_12;
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004a:
	{
		FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * L_13 = V_3;
		return L_13;
	}
}
// System.Void Firebase.Storage.FirebaseStorageInternal::ReleaseReferenceInternal(Firebase.Storage.FirebaseStorageInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorageInternal_ReleaseReferenceInternal_mE0E6549A75E16B6EED6C6607E6ADE9EAB4D08F60 (FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorageInternal_ReleaseReferenceInternal_mE0E6549A75E16B6EED6C6607E6ADE9EAB4D08F60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * L_0 = ___instance0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_1 = FirebaseStorageInternal_getCPtr_mB6DBD7BEA4B11C7AE2ECEDCFDD629AC12D0F9E99(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_ReleaseReferenceInternal_m1FEC60F9FF4613B20BAB3CF740545309D7AC6F32(L_1, /*hidden argument*/NULL);
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseStorageInternal_ReleaseReferenceInternal_mE0E6549A75E16B6EED6C6607E6ADE9EAB4D08F60_RuntimeMethod_var);
	}

IL_001b:
	{
		return;
	}
}
// Firebase.FirebaseApp Firebase.Storage.FirebaseStorageInternal::get_App()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseStorageInternal_get_App_mAE7345FEE5043764F9FD63C45B42ECDEC7CA4FF5 (FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorageInternal_get_App_mAE7345FEE5043764F9FD63C45B42ECDEC7CA4FF5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * V_1 = NULL;
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * G_B3_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		intptr_t L_1 = StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_App_get_m3161B3235D7C6D692655ABF48B469F72FA8273F6(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		bool L_3 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		G_B3_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 *)(NULL));
		goto IL_0029;
	}

IL_0022:
	{
		intptr_t L_4 = V_0;
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_5 = (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 *)il2cpp_codegen_object_new(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		FirebaseApp__ctor_mECDB71535A9846F085CD59C6EA9261E640FE127A(L_5, (intptr_t)L_4, (bool)0, /*hidden argument*/NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, FirebaseStorageInternal_get_App_mAE7345FEE5043764F9FD63C45B42ECDEC7CA4FF5_RuntimeMethod_var);
	}

IL_003a:
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_8 = V_1;
		return L_8;
	}
}
// System.String Firebase.Storage.FirebaseStorageInternal::get_Url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseStorageInternal_get_Url_mEF967793D98A676620DA5239E5CAE0A27F05E5E3 (FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorageInternal_get_Url_mEF967793D98A676620DA5239E5CAE0A27F05E5E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		String_t* L_1 = StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_Url_get_m484B96251F09C317807804BCAE4C29681959A610(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseStorageInternal_get_Url_mEF967793D98A676620DA5239E5CAE0A27F05E5E3_RuntimeMethod_var);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Future_StorageMetadata_SWIG_CompletionDispatcher_m0ACF6F0D8B7A8C95339DDA490D23B541EB6D7521(int32_t ___key0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Future_StorageMetadata_SWIG_CompletionDispatcher_m0ACF6F0D8B7A8C95339DDA490D23B541EB6D7521(___key0, NULL);

}
// System.Void Firebase.Storage.Future_StorageMetadata::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata__ctor_m9DCE43063A0FC76DD9F007F3E63393E9B8B23677 (Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_StorageMetadata__ctor_m9DCE43063A0FC76DD9F007F3E63393E9B8B23677_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_callbackData_6((intptr_t)(0));
		intptr_t L_0 = ___cPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		intptr_t L_1 = StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_SWIGUpcast_m973780C0E6C23BC2C7DD96C48E3301D6B8EFE498((intptr_t)L_0, /*hidden argument*/NULL);
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
// System.Void Firebase.Storage.Future_StorageMetadata::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_Finalize_m94ABD3F246309DF5C78A65520AAD85C69DC4D0DB (Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * __this, const RuntimeMethod* method)
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
// System.Void Firebase.Storage.Future_StorageMetadata::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_Dispose_m86D16EC53596E481B71616EC03F74DAEF22CDA5F (Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_StorageMetadata_Dispose_m86D16EC53596E481B71616EC03F74DAEF22CDA5F_MetadataUsageId);
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
			Future_StorageMetadata_SetCompletionData_m43D5B4D40B0C6B544FA5388C5A7283419541154E(__this, (intptr_t)(0), /*hidden argument*/NULL);
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
			IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
			StorageInternalPINVOKE_Firebase_Storage_delete_Future_StorageMetadata_mEF82F206F5CF6D7AB0391DA9E925D145004908F2(L_6, /*hidden argument*/NULL);
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
// System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal> Firebase.Storage.Future_StorageMetadata::GetTask(Firebase.Storage.Future_StorageMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * Future_StorageMetadata_GetTask_m32211C2AEFFA3E76CB4CEBC4133992B80F61FCD3 (Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * ___fu0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_StorageMetadata_GetTask_m32211C2AEFFA3E76CB4CEBC4133992B80F61FCD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetTaskU3Ec__AnonStorey0_t1DBF3A3E1DAE43629C695F5C31B1CFAB55B918F9 * V_0 = NULL;
	{
		U3CGetTaskU3Ec__AnonStorey0_t1DBF3A3E1DAE43629C695F5C31B1CFAB55B918F9 * L_0 = (U3CGetTaskU3Ec__AnonStorey0_t1DBF3A3E1DAE43629C695F5C31B1CFAB55B918F9 *)il2cpp_codegen_object_new(U3CGetTaskU3Ec__AnonStorey0_t1DBF3A3E1DAE43629C695F5C31B1CFAB55B918F9_il2cpp_TypeInfo_var);
		U3CGetTaskU3Ec__AnonStorey0__ctor_m0454F478DD378351C169D5ED35CF43DFFD02CFAE(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetTaskU3Ec__AnonStorey0_t1DBF3A3E1DAE43629C695F5C31B1CFAB55B918F9 * L_1 = V_0;
		Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * L_2 = ___fu0;
		NullCheck(L_1);
		L_1->set_fu_0(L_2);
		U3CGetTaskU3Ec__AnonStorey0_t1DBF3A3E1DAE43629C695F5C31B1CFAB55B918F9 * L_3 = V_0;
		TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454 * L_4 = (TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m69899B617424F47227580E52C2AE1E904FF2B5A1(L_4, /*hidden argument*/TaskCompletionSource_1__ctor_m69899B617424F47227580E52C2AE1E904FF2B5A1_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->set_tcs_1(L_4);
		U3CGetTaskU3Ec__AnonStorey0_t1DBF3A3E1DAE43629C695F5C31B1CFAB55B918F9 * L_5 = V_0;
		NullCheck(L_5);
		Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * L_6 = L_5->get_fu_0();
		NullCheck(L_6);
		int32_t L_7 = FutureBase_status_mD675FFD3FAE10D36169C16590EE3C6F1861DD136(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_004b;
		}
	}
	{
		U3CGetTaskU3Ec__AnonStorey0_t1DBF3A3E1DAE43629C695F5C31B1CFAB55B918F9 * L_8 = V_0;
		NullCheck(L_8);
		TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454 * L_9 = L_8->get_tcs_1();
		FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF * L_10 = (FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF *)il2cpp_codegen_object_new(FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF_il2cpp_TypeInfo_var);
		FirebaseException__ctor_mB31E783657F428BA72B055DF8A4CE6EA6996996C(L_10, 0, _stringLiteralF3368570EE5DB7FA93890C049EB03DD764108E6C, /*hidden argument*/NULL);
		NullCheck(L_9);
		TaskCompletionSource_1_SetException_m712CC9A0A950A2D82C7F7C19A576A4AC95058B42(L_9, L_10, /*hidden argument*/TaskCompletionSource_1_SetException_m712CC9A0A950A2D82C7F7C19A576A4AC95058B42_RuntimeMethod_var);
		U3CGetTaskU3Ec__AnonStorey0_t1DBF3A3E1DAE43629C695F5C31B1CFAB55B918F9 * L_11 = V_0;
		NullCheck(L_11);
		TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454 * L_12 = L_11->get_tcs_1();
		NullCheck(L_12);
		Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * L_13 = TaskCompletionSource_1_get_Task_mC258E3BC1E58539744B3EEB0E28A9FAD61347ACD_inline(L_12, /*hidden argument*/TaskCompletionSource_1_get_Task_mC258E3BC1E58539744B3EEB0E28A9FAD61347ACD_RuntimeMethod_var);
		return L_13;
	}

IL_004b:
	{
		U3CGetTaskU3Ec__AnonStorey0_t1DBF3A3E1DAE43629C695F5C31B1CFAB55B918F9 * L_14 = V_0;
		NullCheck(L_14);
		Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * L_15 = L_14->get_fu_0();
		U3CGetTaskU3Ec__AnonStorey0_t1DBF3A3E1DAE43629C695F5C31B1CFAB55B918F9 * L_16 = V_0;
		Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12 * L_17 = (Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12 *)il2cpp_codegen_object_new(Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12_il2cpp_TypeInfo_var);
		Action__ctor_mE6CF864DE2CDFDEE0026088084491379903AD610(L_17, L_16, (intptr_t)((intptr_t)U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m68FDBC8D858DB92CE263B4154C49ED7E510968DB_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		Future_StorageMetadata_SetOnCompletionCallback_mF756697ED1C91AFA9CC324E141A4ADE780DCF9BE(L_15, L_17, /*hidden argument*/NULL);
		U3CGetTaskU3Ec__AnonStorey0_t1DBF3A3E1DAE43629C695F5C31B1CFAB55B918F9 * L_18 = V_0;
		NullCheck(L_18);
		TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454 * L_19 = L_18->get_tcs_1();
		NullCheck(L_19);
		Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * L_20 = TaskCompletionSource_1_get_Task_mC258E3BC1E58539744B3EEB0E28A9FAD61347ACD_inline(L_19, /*hidden argument*/TaskCompletionSource_1_get_Task_mC258E3BC1E58539744B3EEB0E28A9FAD61347ACD_RuntimeMethod_var);
		return L_20;
	}
}
// System.Void Firebase.Storage.Future_StorageMetadata::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_ThrowIfDisposed_mB4673B373B7A8028F1B1864E05697B6CEE26D195 (Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_StorageMetadata_ThrowIfDisposed_mB4673B373B7A8028F1B1864E05697B6CEE26D195_MetadataUsageId);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Future_StorageMetadata_ThrowIfDisposed_mB4673B373B7A8028F1B1864E05697B6CEE26D195_RuntimeMethod_var);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Firebase.Storage.Future_StorageMetadata::SetOnCompletionCallback(Firebase.Storage.Future_StorageMetadata_Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_SetOnCompletionCallback_mF756697ED1C91AFA9CC324E141A4ADE780DCF9BE (Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * __this, Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12 * ___userCompletionCallback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_StorageMetadata_SetOnCompletionCallback_mF756697ED1C91AFA9CC324E141A4ADE780DCF9BE_MetadataUsageId);
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
		Future_StorageMetadata_ThrowIfDisposed_mB4673B373B7A8028F1B1864E05697B6CEE26D195(__this, /*hidden argument*/NULL);
		SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E * L_0 = __this->get_SWIG_CompletionCB_7();
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E * L_1 = (SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E *)il2cpp_codegen_object_new(SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E_il2cpp_TypeInfo_var);
		SWIG_CompletionDelegate__ctor_mA404E94163216D5663803AEFFBB3B85662CBC079(L_1, NULL, (intptr_t)((intptr_t)Future_StorageMetadata_SWIG_CompletionDispatcher_m0ACF6F0D8B7A8C95339DDA490D23B541EB6D7521_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_SWIG_CompletionCB_7(L_1);
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var);
		RuntimeObject * L_2 = ((Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_2;
		RuntimeObject * L_3 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_3, /*hidden argument*/NULL);
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var);
			Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0 * L_4 = ((Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (L_4)
			{
				goto IL_0043;
			}
		}

IL_0039:
		{
			Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0 * L_5 = (Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0 *)il2cpp_codegen_object_new(Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m97C760C6AE77C61BCA51B1FD450B782D79070AD4(L_5, /*hidden argument*/Dictionary_2__ctor_m97C760C6AE77C61BCA51B1FD450B782D79070AD4_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var);
			((Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var))->set_Callbacks_3(L_5);
		}

IL_0043:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var);
			int32_t L_6 = ((Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var))->get_CallbackIndex_4();
			int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
			((Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var))->set_CallbackIndex_4(L_7);
			V_0 = L_7;
			Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0 * L_8 = ((Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_9 = V_0;
			Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12 * L_10 = ___userCompletionCallback0;
			NullCheck(L_8);
			Dictionary_2_set_Item_m8580E8DC3B1AD865F4FC4B31AA38870B08C7D7BD(L_8, L_9, L_10, /*hidden argument*/Dictionary_2_set_Item_m8580E8DC3B1AD865F4FC4B31AA38870B08C7D7BD_RuntimeMethod_var);
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
		SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E * L_12 = __this->get_SWIG_CompletionCB_7();
		int32_t L_13 = V_0;
		intptr_t L_14 = Future_StorageMetadata_SWIG_OnCompletion_m5F9764707B7329268E6608BC88BACEEC134A5C3A(__this, L_12, L_13, /*hidden argument*/NULL);
		Future_StorageMetadata_SetCompletionData_m43D5B4D40B0C6B544FA5388C5A7283419541154E(__this, (intptr_t)L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.Future_StorageMetadata::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_SetCompletionData_m43D5B4D40B0C6B544FA5388C5A7283419541154E (Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	{
		Future_StorageMetadata_ThrowIfDisposed_mB4673B373B7A8028F1B1864E05697B6CEE26D195(__this, /*hidden argument*/NULL);
		intptr_t L_0 = __this->get_callbackData_6();
		Future_StorageMetadata_SWIG_FreeCompletionData_m22B65B48FBC6EEDB60F030E79317A6ED97BEE81C(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		intptr_t L_1 = ___data0;
		__this->set_callbackData_6((intptr_t)L_1);
		return;
	}
}
// System.Void Firebase.Storage.Future_StorageMetadata::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_SWIG_CompletionDispatcher_m0ACF6F0D8B7A8C95339DDA490D23B541EB6D7521 (int32_t ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_StorageMetadata_SWIG_CompletionDispatcher_m0ACF6F0D8B7A8C95339DDA490D23B541EB6D7521_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12 *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var);
			Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0 * L_2 = ((Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (!L_2)
			{
				goto IL_0036;
			}
		}

IL_0018:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var);
			Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0 * L_3 = ((Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_4 = ___key0;
			NullCheck(L_3);
			bool L_5 = Dictionary_2_TryGetValue_m063D29871CBAD720DADDD3CB06C13AF7AE878FFA(L_3, L_4, (Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m063D29871CBAD720DADDD3CB06C13AF7AE878FFA_RuntimeMethod_var);
			if (!L_5)
			{
				goto IL_0036;
			}
		}

IL_002a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var);
			Dictionary_2_t3FA1D9953318B7158D7CCF02E4C40B5E270282C0 * L_6 = ((Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_7 = ___key0;
			NullCheck(L_6);
			Dictionary_2_Remove_m3CEC088395E2C3A8229AC453772B8740B5C62E1B(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m3CEC088395E2C3A8229AC453772B8740B5C62E1B_RuntimeMethod_var);
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
		Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12 * L_9 = V_0;
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12 * L_10 = V_0;
		NullCheck(L_10);
		Action_Invoke_m3B3C5D79D87CFA6CA5F60A2235C95E38AF56F1FB(L_10, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.IntPtr Firebase.Storage.Future_StorageMetadata::SWIG_OnCompletion(Firebase.Storage.Future_StorageMetadata_SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_StorageMetadata_SWIG_OnCompletion_m5F9764707B7329268E6608BC88BACEEC134A5C3A (Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * __this, SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_StorageMetadata_SWIG_OnCompletion_m5F9764707B7329268E6608BC88BACEEC134A5C3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_2();
		SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E * L_1 = ___cs_callback0;
		int32_t L_2 = ___cs_key1;
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		intptr_t L_3 = StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_SWIG_OnCompletion_m05B8DA391E57267C6785DE3B8618FD116144D267(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		bool L_4 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		Exception_t * L_5 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, Future_StorageMetadata_SWIG_OnCompletion_m5F9764707B7329268E6608BC88BACEEC134A5C3A_RuntimeMethod_var);
	}

IL_001e:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.Void Firebase.Storage.Future_StorageMetadata::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_SWIG_FreeCompletionData_m22B65B48FBC6EEDB60F030E79317A6ED97BEE81C (Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_StorageMetadata_SWIG_FreeCompletionData_m22B65B48FBC6EEDB60F030E79317A6ED97BEE81C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_2();
		intptr_t L_1 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_SWIG_FreeCompletionData_m6AA595E5A0F0653654450711E1851CC0711BCF9B(L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Future_StorageMetadata_SWIG_FreeCompletionData_m22B65B48FBC6EEDB60F030E79317A6ED97BEE81C_RuntimeMethod_var);
	}

IL_001c:
	{
		return;
	}
}
// Firebase.Storage.MetadataInternal Firebase.Storage.Future_StorageMetadata::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * Future_StorageMetadata_GetResult_mABFE8A50EA64BC0D3E6CC1774A517B25604FFD11 (Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_StorageMetadata_GetResult_mABFE8A50EA64BC0D3E6CC1774A517B25604FFD11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		intptr_t L_1 = StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_GetResult_m04BC47A83B15D25621DC306DDCA075C0CEC98B59(L_0, /*hidden argument*/NULL);
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_2 = (MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 *)il2cpp_codegen_object_new(MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37_il2cpp_TypeInfo_var);
		MetadataInternal__ctor_mB9356D780D9D876E2AD418FC232C6D7D2AEADE56(L_2, (intptr_t)L_1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, Future_StorageMetadata_GetResult_mABFE8A50EA64BC0D3E6CC1774A517B25604FFD11_RuntimeMethod_var);
	}

IL_0022:
	{
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_5 = V_0;
		return L_5;
	}
}
// System.Void Firebase.Storage.Future_StorageMetadata::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata__cctor_mD8833120E0D51A1FB2B09B9CA727A3A8641BAC7F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_StorageMetadata__cctor_mD8833120E0D51A1FB2B09B9CA727A3A8641BAC7F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var))->set_CallbackIndex_4(0);
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		((Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var))->set_CallbackLock_5(L_0);
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
// System.Void Firebase.Storage.Future_StorageMetadata_<GetTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0__ctor_m0454F478DD378351C169D5ED35CF43DFFD02CFAE (U3CGetTaskU3Ec__AnonStorey0_t1DBF3A3E1DAE43629C695F5C31B1CFAB55B918F9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.Future_StorageMetadata_<GetTask>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m68FDBC8D858DB92CE263B4154C49ED7E510968DB (U3CGetTaskU3Ec__AnonStorey0_t1DBF3A3E1DAE43629C695F5C31B1CFAB55B918F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m68FDBC8D858DB92CE263B4154C49ED7E510968DB_MetadataUsageId);
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
			Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * L_0 = __this->get_fu_0();
			NullCheck(L_0);
			int32_t L_1 = FutureBase_status_mD675FFD3FAE10D36169C16590EE3C6F1861DD136(L_0, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_1) == ((uint32_t)2))))
			{
				goto IL_0021;
			}
		}

IL_0011:
		{
			TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454 * L_2 = __this->get_tcs_1();
			NullCheck(L_2);
			TaskCompletionSource_1_SetCanceled_mC521EFAEBDE2B76E43666F18EE1CB7BB8DDBF5C6(L_2, /*hidden argument*/TaskCompletionSource_1_SetCanceled_mC521EFAEBDE2B76E43666F18EE1CB7BB8DDBF5C6_RuntimeMethod_var);
			goto IL_006a;
		}

IL_0021:
		{
			Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * L_3 = __this->get_fu_0();
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
			TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454 * L_6 = __this->get_tcs_1();
			int32_t L_7 = V_0;
			Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * L_8 = __this->get_fu_0();
			NullCheck(L_8);
			String_t* L_9 = FutureBase_error_message_m12EFFA84132AB25450D3D3F349A414EF597CCCE3(L_8, /*hidden argument*/NULL);
			FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF * L_10 = (FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF *)il2cpp_codegen_object_new(FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF_il2cpp_TypeInfo_var);
			FirebaseException__ctor_mB31E783657F428BA72B055DF8A4CE6EA6996996C(L_10, L_7, L_9, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskCompletionSource_1_SetException_m712CC9A0A950A2D82C7F7C19A576A4AC95058B42(L_6, L_10, /*hidden argument*/TaskCompletionSource_1_SetException_m712CC9A0A950A2D82C7F7C19A576A4AC95058B42_RuntimeMethod_var);
			goto IL_006a;
		}

IL_0054:
		{
			TaskCompletionSource_1_t352316A92D80AD7E2B2F60A0ED4E215C4C74A454 * L_11 = __this->get_tcs_1();
			Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * L_12 = __this->get_fu_0();
			NullCheck(L_12);
			MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_13 = Future_StorageMetadata_GetResult_mABFE8A50EA64BC0D3E6CC1774A517B25604FFD11(L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			TaskCompletionSource_1_SetResult_mFCFDF6C6CCAF670DE7C33CF70E3C6863CA62C279(L_11, L_13, /*hidden argument*/TaskCompletionSource_1_SetResult_mFCFDF6C6CCAF670DE7C33CF70E3C6863CA62C279_RuntimeMethod_var);
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
		Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * L_16 = __this->get_fu_0();
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12 (Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Firebase.Storage.Future_StorageMetadata_Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mE6CF864DE2CDFDEE0026088084491379903AD610 (Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Storage.Future_StorageMetadata_Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3B3C5D79D87CFA6CA5F60A2235C95E38AF56F1FB (Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12 * __this, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.Storage.Future_StorageMetadata_Action::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Action_BeginInvoke_m0502C991DB60A33AD55DF90FD864BEC338BF017E (Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Firebase.Storage.Future_StorageMetadata_Action::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_EndInvoke_m56FFFCBBD4554B27368CAE1EB99CBDCF5DFE231E (Action_tA46BB46A2EA4B2D8DC9898CC7713315EA2AE1A12 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E (SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___index0);

}
// System.Void Firebase.Storage.Future_StorageMetadata_SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_mA404E94163216D5663803AEFFBB3B85662CBC079 (SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Storage.Future_StorageMetadata_SWIG_CompletionDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_Invoke_mA6D9F3E7B23ED9EF26D15A59798AA11BEB61ACAF (SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E * __this, int32_t ___index0, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.Storage.Future_StorageMetadata_SWIG_CompletionDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIG_CompletionDelegate_BeginInvoke_m1C7C74F7DC8379DD42E6FA18D636D9461202525C (SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E * __this, int32_t ___index0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIG_CompletionDelegate_BeginInvoke_m1C7C74F7DC8379DD42E6FA18D636D9461202525C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___index0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.Storage.Future_StorageMetadata_SWIG_CompletionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_EndInvoke_m2DD3635CDD6294A004B6769FA4F8D84D9606B274 (SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.Storage.Internal.ModuleLogger::.ctor(Firebase.Storage.Internal.ModuleLogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleLogger__ctor_m2EF1021CCB3F686ED6F2A18242B9A245A4983B59 (ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * __this, ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * ___parentLogger0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModuleLogger__ctor_m2EF1021CCB3F686ED6F2A18242B9A245A4983B59_MetadataUsageId);
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
		List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511 * L_0 = (List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511 *)il2cpp_codegen_object_new(List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511_il2cpp_TypeInfo_var);
		List_1__ctor_m7D283096E62E79F4823EEE0781FC8D91CAC8C5A7(L_0, /*hidden argument*/List_1__ctor_m7D283096E62E79F4823EEE0781FC8D91CAC8C5A7_RuntimeMethod_var);
		__this->set_children_3(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		int32_t L_1 = FirebaseApp_get_LogLevel_mA1462E02A6B78D0F598CF9D3F22CAF13D9E29E8D(/*hidden argument*/NULL);
		__this->set_logLevel_5(L_1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_il2cpp_TypeInfo_var);
		RuntimeObject * L_2 = ((ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_il2cpp_TypeInfo_var))->get_lockObject_0();
		V_0 = L_2;
		RuntimeObject * L_3 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_3, /*hidden argument*/NULL);
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_4 = ___parentLogger0;
			if (L_4)
			{
				goto IL_0044;
			}
		}

IL_002e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_il2cpp_TypeInfo_var);
			List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9 * L_5 = ((ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_il2cpp_TypeInfo_var))->get_roots_1();
			WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * L_6 = (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D *)il2cpp_codegen_object_new(WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D_il2cpp_TypeInfo_var);
			WeakReference__ctor_m55A06AD20FF65C11015FFBE5FF31F2E7B1656E20(L_6, __this, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_5);
			List_1_Add_m0FA4EBA4FEA59AA08228356F2A4DD86D751BB9D9(L_5, L_6, /*hidden argument*/List_1_Add_m0FA4EBA4FEA59AA08228356F2A4DD86D751BB9D9_RuntimeMethod_var);
			goto IL_005c;
		}

IL_0044:
		{
			ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_7 = ___parentLogger0;
			__this->set_parent_2(L_7);
			ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_8 = __this->get_parent_2();
			NullCheck(L_8);
			List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511 * L_9 = L_8->get_children_3();
			NullCheck(L_9);
			List_1_Add_m7B888EE4B21BFA00BFC714FC4A7328D98AB5EEC9(L_9, __this, /*hidden argument*/List_1_Add_m7B888EE4B21BFA00BFC714FC4A7328D98AB5EEC9_RuntimeMethod_var);
		}

IL_005c:
		{
			IL2CPP_LEAVE(0x68, FINALLY_0061);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		RuntimeObject * L_10 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(97)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0068:
	{
		return;
	}
}
// System.Void Firebase.Storage.Internal.ModuleLogger::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleLogger_Finalize_mDC8D2EA2C85A1FD0CDB94EA73BC2D1ABA9382320 (ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModuleLogger_Finalize_mDC8D2EA2C85A1FD0CDB94EA73BC2D1ABA9382320_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * V_1 = NULL;
	Enumerator_tD5C672061FDC03FC142D1B5CF9316AD46B77D88E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_il2cpp_TypeInfo_var);
			RuntimeObject * L_0 = ((ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_il2cpp_TypeInfo_var))->get_lockObject_0();
			V_0 = L_0;
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
		}

IL_000c:
		try
		{ // begin try (depth: 2)
			{
				ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_2 = __this->get_parent_2();
				if (L_2)
				{
					goto IL_0077;
				}
			}

IL_0017:
			{
				IL2CPP_RUNTIME_CLASS_INIT(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_il2cpp_TypeInfo_var);
				List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9 * L_3 = ((ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_il2cpp_TypeInfo_var))->get_roots_1();
				NullCheck(L_3);
				Enumerator_tD5C672061FDC03FC142D1B5CF9316AD46B77D88E  L_4 = List_1_GetEnumerator_m7DF26F8B80546FFC05D567B3E4E764F230C19E04(L_3, /*hidden argument*/List_1_GetEnumerator_m7DF26F8B80546FFC05D567B3E4E764F230C19E04_RuntimeMethod_var);
				V_2 = L_4;
			}

IL_0022:
			try
			{ // begin try (depth: 3)
				{
					goto IL_0053;
				}

IL_0027:
				{
					WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * L_5 = Enumerator_get_Current_m2FC2D476F4C860D75909AED94E0CFEE02513A6E2_inline((Enumerator_tD5C672061FDC03FC142D1B5CF9316AD46B77D88E *)(&V_2), /*hidden argument*/Enumerator_get_Current_m2FC2D476F4C860D75909AED94E0CFEE02513A6E2_RuntimeMethod_var);
					V_1 = L_5;
					WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * L_6 = V_1;
					IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
					RuntimeObject * L_7 = FirebaseApp_WeakReferenceGetTarget_mC676B673AB674077A1A40272E96E51C5A25DC30A(L_6, /*hidden argument*/NULL);
					V_3 = ((ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC *)IsInstClass((RuntimeObject*)L_7, ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_il2cpp_TypeInfo_var));
					ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_8 = V_3;
					if ((!(((RuntimeObject*)(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC *)L_8) == ((RuntimeObject*)(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC *)__this))))
					{
						goto IL_0053;
					}
				}

IL_0042:
				{
					IL2CPP_RUNTIME_CLASS_INIT(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_il2cpp_TypeInfo_var);
					List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9 * L_9 = ((ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_il2cpp_TypeInfo_var))->get_roots_1();
					WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * L_10 = V_1;
					NullCheck(L_9);
					List_1_Remove_m721E6DCD83BB7DD4EC0DC89EF26796FBB94D9C06(L_9, L_10, /*hidden argument*/List_1_Remove_m721E6DCD83BB7DD4EC0DC89EF26796FBB94D9C06_RuntimeMethod_var);
					goto IL_005f;
				}

IL_0053:
				{
					bool L_11 = Enumerator_MoveNext_mC280A73E98660DF4F291F26F880BD35EE49BBD5E((Enumerator_tD5C672061FDC03FC142D1B5CF9316AD46B77D88E *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mC280A73E98660DF4F291F26F880BD35EE49BBD5E_RuntimeMethod_var);
					if (L_11)
					{
						goto IL_0027;
					}
				}

IL_005f:
				{
					IL2CPP_LEAVE(0x72, FINALLY_0064);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0064;
			}

FINALLY_0064:
			{ // begin finally (depth: 3)
				Enumerator_Dispose_m7C4F9567EDBD78A44CD25254F8CBF7D56CC9834D((Enumerator_tD5C672061FDC03FC142D1B5CF9316AD46B77D88E *)(&V_2), /*hidden argument*/Enumerator_Dispose_m7C4F9567EDBD78A44CD25254F8CBF7D56CC9834D_RuntimeMethod_var);
				IL2CPP_END_FINALLY(100)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(100)
			{
				IL2CPP_JUMP_TBL(0x72, IL_0072)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_0072:
			{
				goto IL_0090;
			}

IL_0077:
			{
				ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_12 = __this->get_parent_2();
				NullCheck(L_12);
				List_1_tF0CB75D7F1BE8D34101B45038F067F12D7E22511 * L_13 = L_12->get_children_3();
				NullCheck(L_13);
				List_1_Remove_mA389F10B377760C99E283FD792BAAAA130F087CB(L_13, __this, /*hidden argument*/List_1_Remove_mA389F10B377760C99E283FD792BAAAA130F087CB_RuntimeMethod_var);
				__this->set_parent_2((ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC *)NULL);
			}

IL_0090:
			{
				IL2CPP_LEAVE(0x9C, FINALLY_0095);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0095;
		}

FINALLY_0095:
		{ // begin finally (depth: 2)
			RuntimeObject * L_14 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_14, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(149)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(149)
		{
			IL2CPP_JUMP_TBL(0x9C, IL_009c)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xA8, FINALLY_00a1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a1;
	}

FINALLY_00a1:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(161)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(161)
	{
		IL2CPP_JUMP_TBL(0xA8, IL_00a8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a8:
	{
		return;
	}
}
// Firebase.LogLevel Firebase.Storage.Internal.ModuleLogger::get_Level()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleLogger_get_Level_mD716BA3D3FDCD9822113BE55A2C3DFE95EDEAD9C (ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModuleLogger_get_Level_mD716BA3D3FDCD9822113BE55A2C3DFE95EDEAD9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_logLevel_5();
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_il2cpp_TypeInfo_var);
		RuntimeObject * L_1 = ((ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_il2cpp_TypeInfo_var))->get_lockObject_0();
		V_1 = L_1;
		RuntimeObject * L_2 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_2, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_3 = __this->get_parent_2();
			if (!L_3)
			{
				goto IL_0033;
			}
		}

IL_001e:
		{
			ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_4 = __this->get_parent_2();
			NullCheck(L_4);
			int32_t L_5 = ModuleLogger_get_Level_mD716BA3D3FDCD9822113BE55A2C3DFE95EDEAD9C(L_4, /*hidden argument*/NULL);
			V_2 = L_5;
			int32_t L_6 = V_2;
			int32_t L_7 = V_0;
			if ((((int32_t)L_6) >= ((int32_t)L_7)))
			{
				goto IL_0033;
			}
		}

IL_0031:
		{
			int32_t L_8 = V_2;
			V_0 = L_8;
		}

IL_0033:
		{
			IL2CPP_LEAVE(0x3F, FINALLY_0038);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		RuntimeObject * L_9 = V_1;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(56)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Void Firebase.Storage.Internal.ModuleLogger::set_Level(Firebase.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleLogger_set_Level_mB529EFC50B227772907A6C6E2302D6A7BF6A6905 (ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_logLevel_5(L_0);
		return;
	}
}
// System.String Firebase.Storage.Internal.ModuleLogger::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModuleLogger_get_Tag_mCB952398B5815EC03D792B21DF55A8B655177AE6 (ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModuleLogger_get_Tag_mCB952398B5815EC03D792B21DF55A8B655177AE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0 = __this->get_tag_4();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = __this->get_tag_4();
		return L_1;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_il2cpp_TypeInfo_var);
		RuntimeObject * L_2 = ((ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_il2cpp_TypeInfo_var))->get_lockObject_0();
		V_0 = L_2;
		RuntimeObject * L_3 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_3, /*hidden argument*/NULL);
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_4 = __this->get_parent_2();
			if (!L_4)
			{
				goto IL_003a;
			}
		}

IL_0029:
		{
			ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_5 = __this->get_parent_2();
			NullCheck(L_5);
			String_t* L_6 = ModuleLogger_get_Tag_mCB952398B5815EC03D792B21DF55A8B655177AE6(L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			IL2CPP_LEAVE(0x48, FINALLY_003f);
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x46, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x48, IL_0048)
		IL2CPP_JUMP_TBL(0x46, IL_0046)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0046:
	{
		return (String_t*)NULL;
	}

IL_0048:
	{
		String_t* L_8 = V_1;
		return L_8;
	}
}
// System.Void Firebase.Storage.Internal.ModuleLogger::set_Tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleLogger_set_Tag_m3D42E7B948CCD7A1EC648250B7EE58A489140C77 (ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_tag_4(L_0);
		return;
	}
}
// System.Void Firebase.Storage.Internal.ModuleLogger::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleLogger_LogMessage_m5116219D021DBF1651FAB90D6E244D7B473D1ADD (ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * __this, int32_t ___level0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModuleLogger_LogMessage_m5116219D021DBF1651FAB90D6E244D7B473D1ADD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	String_t* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	int32_t G_B4_2 = 0;
	{
		int32_t L_0 = ___level0;
		int32_t L_1 = ModuleLogger_get_Level_mD716BA3D3FDCD9822113BE55A2C3DFE95EDEAD9C(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_2 = ___level0;
		String_t* L_3 = ModuleLogger_get_Tag_mCB952398B5815EC03D792B21DF55A8B655177AE6(__this, /*hidden argument*/NULL);
		G_B2_0 = _stringLiteral6FE2EB9A03CDF5C97481593914D7D863F0FE5F6D;
		G_B2_1 = L_2;
		if (!L_3)
		{
			G_B3_0 = _stringLiteral6FE2EB9A03CDF5C97481593914D7D863F0FE5F6D;
			G_B3_1 = L_2;
			goto IL_0032;
		}
	}
	{
		String_t* L_4 = ModuleLogger_get_Tag_mCB952398B5815EC03D792B21DF55A8B655177AE6(__this, /*hidden argument*/NULL);
		String_t* L_5 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_4, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, /*hidden argument*/NULL);
		G_B4_0 = L_5;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0037;
	}

IL_0032:
	{
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B4_0 = L_6;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0037:
	{
		String_t* L_7 = ___message1;
		String_t* L_8 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(G_B4_1, G_B4_0, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mE0D4736B7C636462B2AD246F65EFAF5F1785822F(G_B4_2, L_8, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void Firebase.Storage.Internal.ModuleLogger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleLogger__cctor_mBE91B6E8ADDADBB76FB974B513B81C77D10AABAB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModuleLogger__cctor_mBE91B6E8ADDADBB76FB974B513B81C77D10AABAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		((ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_il2cpp_TypeInfo_var))->set_lockObject_0(L_0);
		List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9 * L_1 = (List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9 *)il2cpp_codegen_object_new(List_1_t7345DA9C2038FC59FCE983F89CDD5EAEFD9502F9_il2cpp_TypeInfo_var);
		List_1__ctor_mFDE4B68F9A4A58C0DF6E8EE11F822B8D23FF97E8(L_1, /*hidden argument*/List_1__ctor_mFDE4B68F9A4A58C0DF6E8EE11F822B8D23FF97E8_RuntimeMethod_var);
		((ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_il2cpp_TypeInfo_var))->set_roots_1(L_1);
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
// System.Void Firebase.Storage.Internal.TransferState::.ctor(Firebase.Storage.StorageReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferState__ctor_m46E9BFEAD455D3764BB0D7F36C338A53846746F4 (TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * __this, StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * ___reference0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * L_0 = ___reference0;
		TransferState_set_Reference_m1E28A3A6C7569A4E25950164E025144C7A6BE8EE_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int64 Firebase.Storage.Internal.TransferState::get_BytesTransferred()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TransferState_get_BytesTransferred_m65A05CED6F030394271641B7A6EFA8E0A13BFE6B (TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CBytesTransferredU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Firebase.Storage.Internal.TransferState::set_BytesTransferred(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferState_set_BytesTransferred_m4963F9E47A6FA58522B040205BE73E1EB4307ADB (TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CBytesTransferredU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int64 Firebase.Storage.Internal.TransferState::get_TotalByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TransferState_get_TotalByteCount_mD501E2B14C40CAE6591F77AAF7A7CB1D04D5F0EA (TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CTotalByteCountU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Firebase.Storage.Internal.TransferState::set_TotalByteCount(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferState_set_TotalByteCount_m269339181396E26CFCFC0A951357AD3A9E63F09C (TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CTotalByteCountU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Firebase.Storage.Internal.TransferState::set_UploadSessionUri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferState_set_UploadSessionUri_m89DAA0AA267387E947451A42DE184CB8F66DDA16 (TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___value0, const RuntimeMethod* method)
{
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_0 = ___value0;
		__this->set_U3CUploadSessionUriU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Firebase.Storage.Internal.TransferState::set_Metadata(Firebase.Storage.StorageMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferState_set_Metadata_mFADF714A1DA7FB447CBFCEE13F3E03E2FC280D16 (TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * __this, StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * ___value0, const RuntimeMethod* method)
{
	{
		StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * L_0 = ___value0;
		__this->set_U3CMetadataU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Firebase.Storage.Internal.TransferState::set_Reference(Firebase.Storage.StorageReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferState_set_Reference_m1E28A3A6C7569A4E25950164E025144C7A6BE8EE (TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * __this, StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * ___value0, const RuntimeMethod* method)
{
	{
		StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * L_0 = ___value0;
		__this->set_U3CReferenceU3Ek__BackingField_4(L_0);
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
// System.Void Firebase.Storage.MetadataChange::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataChange__ctor_m055DA3B06A3395E9CD0432A82124EA7BDEF7A707 (MetadataChange_t520FEEE76D402A459E59BF6498AA8D4633C468EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetadataChange__ctor_m055DA3B06A3395E9CD0432A82124EA7BDEF7A707_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * L_0 = (StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 *)il2cpp_codegen_object_new(StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8_il2cpp_TypeInfo_var);
		StorageMetadata__ctor_m600E41A6889794EDC6D2BED0E476E75561CF77C1(L_0, /*hidden argument*/NULL);
		__this->set_metadata_0(L_0);
		return;
	}
}
// Firebase.Storage.StorageMetadata Firebase.Storage.MetadataChange::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * MetadataChange_Build_mE75EC0AD11148D4123764DAE7C573FCA3A19497A (MetadataChange_t520FEEE76D402A459E59BF6498AA8D4633C468EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetadataChange_Build_mE75EC0AD11148D4123764DAE7C573FCA3A19497A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * L_0 = __this->get_metadata_0();
		StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * L_1 = (StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 *)il2cpp_codegen_object_new(StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8_il2cpp_TypeInfo_var);
		StorageMetadata__ctor_mC9BE00AD42D23D9CBED6FE4D14FCAE30331F7DF3(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Firebase.Storage.StorageMetadata Firebase.Storage.MetadataChange::Build(Firebase.Storage.MetadataChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * MetadataChange_Build_mAEC4390897293C2D7D1ECA18EEE7BA7ABA30EB33 (MetadataChange_t520FEEE76D402A459E59BF6498AA8D4633C468EE * ___metadataChange0, const RuntimeMethod* method)
{
	StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * G_B3_0 = NULL;
	{
		MetadataChange_t520FEEE76D402A459E59BF6498AA8D4633C468EE * L_0 = ___metadataChange0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		MetadataChange_t520FEEE76D402A459E59BF6498AA8D4633C468EE * L_1 = ___metadataChange0;
		NullCheck(L_1);
		StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * L_2 = MetadataChange_Build_mE75EC0AD11148D4123764DAE7C573FCA3A19497A(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = ((StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 *)(NULL));
	}

IL_0012:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Storage.MetadataChange::set_ContentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataChange_set_ContentType_mF120EF3B015058903C57407021CC92021DBF2971 (MetadataChange_t520FEEE76D402A459E59BF6498AA8D4633C468EE * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * L_0 = __this->get_metadata_0();
		NullCheck(L_0);
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_1 = StorageMetadata_get_Internal_mC892D945DE8B242B150489B70F124D565EE596EC_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___value0;
		NullCheck(L_1);
		MetadataInternal_set_ContentType_mE42A62D96E731454CCDFDFBA3FC89AB9C04CC1F1(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void Firebase.Storage.MetadataInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataInternal__ctor_mB9356D780D9D876E2AD418FC232C6D7D2AEADE56 (MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
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
// System.Void Firebase.Storage.MetadataInternal::.ctor(Firebase.Storage.FirebaseStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataInternal__ctor_m163EB636877408FF6DC6B413DA371054EFE5AA1E (MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * __this, FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * ___storage0, const RuntimeMethod* method)
{
	{
		MetadataInternal__ctor_m1A1AA2713639DBB3E89948EF68C735C10B81E9C5(__this, /*hidden argument*/NULL);
		FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_0 = ___storage0;
		__this->set_storage_2(L_0);
		return;
	}
}
// System.Void Firebase.Storage.MetadataInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataInternal__ctor_m1A1AA2713639DBB3E89948EF68C735C10B81E9C5 (MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetadataInternal__ctor_m1A1AA2713639DBB3E89948EF68C735C10B81E9C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		intptr_t L_0 = StorageInternalPINVOKE_Firebase_Storage_new_MetadataInternal__SWIG_0_m061F2A0882839781EBDCB807F536AB28A823E96B(/*hidden argument*/NULL);
		MetadataInternal__ctor_mB9356D780D9D876E2AD418FC232C6D7D2AEADE56(__this, (intptr_t)L_0, (bool)1, /*hidden argument*/NULL);
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, MetadataInternal__ctor_m1A1AA2713639DBB3E89948EF68C735C10B81E9C5_RuntimeMethod_var);
	}

IL_001c:
	{
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Storage.MetadataInternal::getCPtr(Firebase.Storage.MetadataInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  MetadataInternal_getCPtr_m570EF283EEB2B5BFEBDF5381321B702286B2065E (MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetadataInternal_getCPtr_m570EF283EEB2B5BFEBDF5381321B702286B2065E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_0 = ___obj0;
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
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_3 = L_2->get_swigCPtr_0();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Storage.MetadataInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataInternal_Finalize_m25F1CF083064983F71817F850316C4C02DED48C3 (MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * __this, const RuntimeMethod* method)
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
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Storage.MetadataInternal::Dispose() */, __this);
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
// System.Void Firebase.Storage.MetadataInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataInternal_Dispose_m8C3C177E1A6AA3D5BA413D23B4E36E94DE352DC3 (MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetadataInternal_Dispose_m8C3C177E1A6AA3D5BA413D23B4E36E94DE352DC3_MetadataUsageId);
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
			IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
			StorageInternalPINVOKE_Firebase_Storage_delete_MetadataInternal_mB41332746A4A12F0E0A7B4E956B17AE154F9F4D7(L_6, /*hidden argument*/NULL);
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
// Firebase.Storage.MetadataInternal Firebase.Storage.MetadataInternal::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * MetadataInternal_Copy_m34BBA778F7DD7FBFBBB484612C8355DD356FA4EF (MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * __this, const RuntimeMethod* method)
{
	MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * V_0 = NULL;
	{
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_0 = MetadataInternal_CopyCppObject_m53A633C8C77A5343D6F6D8B42B6160C8686B7700(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_1 = V_0;
		FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_2 = __this->get_storage_2();
		NullCheck(L_1);
		L_1->set_storage_2(L_2);
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_3 = V_0;
		return L_3;
	}
}
// System.Void Firebase.Storage.MetadataInternal::set_ContentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataInternal_set_ContentType_mE42A62D96E731454CCDFDFBA3FC89AB9C04CC1F1 (MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetadataInternal_set_ContentType_mE42A62D96E731454CCDFDFBA3FC89AB9C04CC1F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		StorageInternalPINVOKE_Firebase_Storage_MetadataInternal_ContentType_set_m7ED0FD1E45B346A2373D23BA0AF7CDB42679EC17(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, MetadataInternal_set_ContentType_mE42A62D96E731454CCDFDFBA3FC89AB9C04CC1F1_RuntimeMethod_var);
	}

IL_001c:
	{
		return;
	}
}
// Firebase.Storage.MetadataInternal Firebase.Storage.MetadataInternal::CopyCppObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * MetadataInternal_CopyCppObject_m53A633C8C77A5343D6F6D8B42B6160C8686B7700 (MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetadataInternal_CopyCppObject_m53A633C8C77A5343D6F6D8B42B6160C8686B7700_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		intptr_t L_1 = StorageInternalPINVOKE_Firebase_Storage_MetadataInternal_CopyCppObject_m1F49E29B570EC8EC7E6FE6BD2EF35390F2BCF50E(L_0, /*hidden argument*/NULL);
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_2 = (MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 *)il2cpp_codegen_object_new(MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37_il2cpp_TypeInfo_var);
		MetadataInternal__ctor_mB9356D780D9D876E2AD418FC232C6D7D2AEADE56(L_2, (intptr_t)L_1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, MetadataInternal_CopyCppObject_m53A633C8C77A5343D6F6D8B42B6160C8686B7700_RuntimeMethod_var);
	}

IL_0022:
	{
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_5 = V_0;
		return L_5;
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MonitorControllerInternal_OnPaused_m4FD9AC511C7BA2E9094889EF87A8EAB17160D6DE(intptr_t ___controllerPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	MonitorControllerInternal_OnPaused_m4FD9AC511C7BA2E9094889EF87A8EAB17160D6DE(___controllerPtr0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MonitorControllerInternal_OnProgress_m27310269F609ECCABC1878CA9958552275A3951C(intptr_t ___controllerPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	MonitorControllerInternal_OnProgress_m27310269F609ECCABC1878CA9958552275A3951C(___controllerPtr0, NULL);

}
// System.Void Firebase.Storage.MonitorControllerInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal__ctor_mEBA7A9BA836F49ED6A078CD6FA22160C8AEEA67E (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
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
// System.Void Firebase.Storage.MonitorControllerInternal::.ctor(Firebase.Storage.StorageReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal__ctor_m6A120F1E88CC65B913C9A334695885CC7D7A4FDE (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * __this, StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * ___storage_reference0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal__ctor_m6A120F1E88CC65B913C9A334695885CC7D7A4FDE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_0 = ___storage_reference0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_1 = StorageReferenceInternal_getCPtr_m5DA0100FAF2E0E5BC78E7CAF7E2488F2474472C1(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		intptr_t L_2 = StorageInternalPINVOKE_Firebase_Storage_new_MonitorControllerInternal_m4B7F8C591DE1CA162B7F420C33D4693579D4C2BD(L_1, /*hidden argument*/NULL);
		MonitorControllerInternal__ctor_mEBA7A9BA836F49ED6A078CD6FA22160C8AEEA67E(__this, (intptr_t)L_2, (bool)1, /*hidden argument*/NULL);
		bool L_3 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, MonitorControllerInternal__ctor_m6A120F1E88CC65B913C9A334695885CC7D7A4FDE_RuntimeMethod_var);
	}

IL_0022:
	{
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Storage.MonitorControllerInternal::getCPtr(Firebase.Storage.MonitorControllerInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  MonitorControllerInternal_getCPtr_m9D6692BB9D00DF5DB6B878E9F969D3E6FF2406C5 (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_getCPtr_m9D6692BB9D00DF5DB6B878E9F969D3E6FF2406C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_0 = ___obj0;
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
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_3 = L_2->get_swigCPtr_0();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_Finalize_m11CE26DFF90B9CFE26D793EA4BF83A6A7B472E9B (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * __this, const RuntimeMethod* method)
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
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Storage.MonitorControllerInternal::Dispose() */, __this);
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
// System.Void Firebase.Storage.MonitorControllerInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_Dispose_m27AE4CB1305D8DE7F10A3C97F2432FE9B6C6855C (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_Dispose_m27AE4CB1305D8DE7F10A3C97F2432FE9B6C6855C_MetadataUsageId);
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
				goto IL_0082;
			}
		}

IL_0026:
		{
			IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var);
			Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B * L_5 = ((MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var))->get_cPtrsToProxies_7();
			V_1 = L_5;
			RuntimeObject * L_6 = V_1;
			Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_6, /*hidden argument*/NULL);
		}

IL_0032:
		try
		{ // begin try (depth: 2)
			IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var);
			Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B * L_7 = ((MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var))->get_cPtrsToProxies_7();
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A * L_8 = __this->get_address_of_swigCPtr_0();
			intptr_t L_9 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)L_8, /*hidden argument*/NULL);
			NullCheck(L_7);
			Dictionary_2_Remove_m5EB9322E2737576744038F6C169FA59D3F24F644(L_7, (intptr_t)L_9, /*hidden argument*/Dictionary_2_Remove_m5EB9322E2737576744038F6C169FA59D3F24F644_RuntimeMethod_var);
			IL2CPP_LEAVE(0x54, FINALLY_004d);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_004d;
		}

FINALLY_004d:
		{ // begin finally (depth: 2)
			RuntimeObject * L_10 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_10, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(77)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(77)
		{
			IL2CPP_JUMP_TBL(0x54, IL_0054)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0054:
		{
			bool L_11 = __this->get_swigCMemOwn_1();
			if (!L_11)
			{
				goto IL_0071;
			}
		}

IL_005f:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_12 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
			StorageInternalPINVOKE_Firebase_Storage_delete_MonitorControllerInternal_mE5A0FDF1C8EAD29E9187C2E0A0290EA045ED5BD4(L_12, /*hidden argument*/NULL);
		}

IL_0071:
		{
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_13;
			memset((&L_13), 0, sizeof(L_13));
			HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_13), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_13);
		}

IL_0082:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x94, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		RuntimeObject * L_14 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_14, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(141)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0x94, IL_0094)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0094:
	{
		return;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal::add_Progress(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_add_Progress_m92C7DDC5962EF79E4FA42D2B03F3DF00E2EE9236 (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_add_Progress_m92C7DDC5962EF79E4FA42D2B03F3DF00E2EE9236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_Progress_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_Progress_3();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal::remove_Progress(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_remove_Progress_m6E0DBD9285322785FA95D28396441C3CDF3259BE (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_remove_Progress_m6E0DBD9285322785FA95D28396441C3CDF3259BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_Progress_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_Progress_3();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Firebase.Storage.MonitorControllerInternal Firebase.Storage.MonitorControllerInternal::Create(Firebase.Storage.StorageReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * MonitorControllerInternal_Create_m99090BE0D75E858F2181AA0AC0BE84BD977F8038 (StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * ___storageReference0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_Create_m99090BE0D75E858F2181AA0AC0BE84BD977F8038_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30 * V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * G_B5_0 = NULL;
	MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * G_B4_0 = NULL;
	MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * G_B7_0 = NULL;
	MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * G_B6_0 = NULL;
	{
		U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30 * L_0 = (U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30 *)il2cpp_codegen_object_new(U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30_il2cpp_TypeInfo_var);
		U3CCreateU3Ec__AnonStorey0__ctor_mF865E0F798FA267021A1F4B0CA496736DACC7E64(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30 * L_1 = V_0;
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_2 = ___storageReference0;
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_3 = (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC *)il2cpp_codegen_object_new(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var);
		MonitorControllerInternal__ctor_m6A120F1E88CC65B913C9A334695885CC7D7A4FDE(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_proxy_0(L_3);
		U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30 * L_4 = V_0;
		NullCheck(L_4);
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_5 = L_4->get_proxy_0();
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_6 = ___storageReference0;
		NullCheck(L_5);
		L_5->set_storageReference_6(L_6);
		U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30 * L_7 = V_0;
		NullCheck(L_7);
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_8 = L_7->get_proxy_0();
		IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_9 = MonitorControllerInternal_getCPtr_m9D6692BB9D00DF5DB6B878E9F969D3E6FF2406C5(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		intptr_t L_10 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)(&V_2), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_10;
		Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B * L_11 = ((MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var))->get_cPtrsToProxies_7();
		V_3 = L_11;
		RuntimeObject * L_12 = V_3;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_12, /*hidden argument*/NULL);
	}

IL_003e:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var);
		Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B * L_13 = ((MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var))->get_cPtrsToProxies_7();
		intptr_t L_14 = V_1;
		U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30 * L_15 = V_0;
		NullCheck(L_15);
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_16 = L_15->get_proxy_0();
		WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * L_17 = (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D *)il2cpp_codegen_object_new(WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D_il2cpp_TypeInfo_var);
		WeakReference__ctor_m55A06AD20FF65C11015FFBE5FF31F2E7B1656E20(L_17, L_16, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_13);
		Dictionary_2_set_Item_m8D5685C4442849EB549BBF330D0B1A5BA95D5866(L_13, (intptr_t)L_14, L_17, /*hidden argument*/Dictionary_2_set_Item_m8D5685C4442849EB549BBF330D0B1A5BA95D5866_RuntimeMethod_var);
		IL2CPP_LEAVE(0x61, FINALLY_005a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{ // begin finally (depth: 1)
		RuntimeObject * L_18 = V_3;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_18, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(90)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_JUMP_TBL(0x61, IL_0061)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0061:
	{
		U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30 * L_19 = V_0;
		NullCheck(L_19);
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_20 = L_19->get_proxy_0();
		U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30 * L_21 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_22 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_22, L_21, (intptr_t)((intptr_t)U3CCreateU3Ec__AnonStorey0_U3CU3Em__0_m7C074C68CF7C2F3A833DFD6B29B6E69BE5A74362_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		L_20->set_forwardToPausedEvent_4(L_22);
		U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30 * L_23 = V_0;
		NullCheck(L_23);
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_24 = L_23->get_proxy_0();
		IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var);
		MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * L_25 = ((MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_8();
		G_B4_0 = L_24;
		if (L_25)
		{
			G_B5_0 = L_24;
			goto IL_0096;
		}
	}
	{
		MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * L_26 = (MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 *)il2cpp_codegen_object_new(MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4_il2cpp_TypeInfo_var);
		MonitorControllerEventDelegate__ctor_m38181BDA59502610716E2A0A8929586C6F417A3B(L_26, NULL, (intptr_t)((intptr_t)MonitorControllerInternal_OnPaused_m4FD9AC511C7BA2E9094889EF87A8EAB17160D6DE_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var);
		((MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_8(L_26);
		G_B5_0 = G_B4_0;
	}

IL_0096:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var);
		MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * L_27 = ((MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_8();
		intptr_t L_28 = V_1;
		NullCheck(G_B5_0);
		MonitorControllerInternal_SetPausedEvent_m6171BB978F5779201E4178B10D90238EAD08A607(G_B5_0, L_27, (intptr_t)L_28, /*hidden argument*/NULL);
		U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30 * L_29 = V_0;
		NullCheck(L_29);
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_30 = L_29->get_proxy_0();
		U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30 * L_31 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_32 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_32, L_31, (intptr_t)((intptr_t)U3CCreateU3Ec__AnonStorey0_U3CU3Em__1_m014B85E994CB74ACE9B191D98D71BF022418F82B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_30);
		L_30->set_forwardToProgressEvent_5(L_32);
		U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30 * L_33 = V_0;
		NullCheck(L_33);
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_34 = L_33->get_proxy_0();
		MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * L_35 = ((MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_9();
		G_B6_0 = L_34;
		if (L_35)
		{
			G_B7_0 = L_34;
			goto IL_00d6;
		}
	}
	{
		MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * L_36 = (MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 *)il2cpp_codegen_object_new(MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4_il2cpp_TypeInfo_var);
		MonitorControllerEventDelegate__ctor_m38181BDA59502610716E2A0A8929586C6F417A3B(L_36, NULL, (intptr_t)((intptr_t)MonitorControllerInternal_OnProgress_m27310269F609ECCABC1878CA9958552275A3951C_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var);
		((MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_9(L_36);
		G_B7_0 = G_B6_0;
	}

IL_00d6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var);
		MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * L_37 = ((MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_9();
		intptr_t L_38 = V_1;
		NullCheck(G_B7_0);
		MonitorControllerInternal_SetProgressEvent_m3CF158E8BB6ECB066BA289749054865C76B6136D(G_B7_0, L_37, (intptr_t)L_38, /*hidden argument*/NULL);
		U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30 * L_39 = V_0;
		NullCheck(L_39);
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_40 = L_39->get_proxy_0();
		return L_40;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal::OnPaused(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_OnPaused_m4FD9AC511C7BA2E9094889EF87A8EAB17160D6DE (intptr_t ___controllerPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_OnPaused_m4FD9AC511C7BA2E9094889EF87A8EAB17160D6DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COnPausedU3Ec__AnonStorey1_tDD6993DBEF4E65B1E82EA05A20D7399C43694D0C * V_0 = NULL;
	{
		U3COnPausedU3Ec__AnonStorey1_tDD6993DBEF4E65B1E82EA05A20D7399C43694D0C * L_0 = (U3COnPausedU3Ec__AnonStorey1_tDD6993DBEF4E65B1E82EA05A20D7399C43694D0C *)il2cpp_codegen_object_new(U3COnPausedU3Ec__AnonStorey1_tDD6993DBEF4E65B1E82EA05A20D7399C43694D0C_il2cpp_TypeInfo_var);
		U3COnPausedU3Ec__AnonStorey1__ctor_mF5FEDD803EF6E0A8EEB3ED2A47D530F575B23CB9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3COnPausedU3Ec__AnonStorey1_tDD6993DBEF4E65B1E82EA05A20D7399C43694D0C * L_1 = V_0;
		intptr_t L_2 = ___controllerPtr0;
		NullCheck(L_1);
		L_1->set_controllerPtr_0((intptr_t)L_2);
		U3COnPausedU3Ec__AnonStorey1_tDD6993DBEF4E65B1E82EA05A20D7399C43694D0C * L_3 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_4 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_4, L_3, (intptr_t)((intptr_t)U3COnPausedU3Ec__AnonStorey1_U3CU3Em__0_m9AEDD1777FD6D9D004FA7DE3059BB0AA177A289A_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m93A9BD0DC888F1D02E77860288095CB49D4CFFC2(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal::OnProgress(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_OnProgress_m27310269F609ECCABC1878CA9958552275A3951C (intptr_t ___controllerPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_OnProgress_m27310269F609ECCABC1878CA9958552275A3951C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COnProgressU3Ec__AnonStorey2_tAE87511B3CACF72E178B767C52D51B2AFF8BA607 * V_0 = NULL;
	{
		U3COnProgressU3Ec__AnonStorey2_tAE87511B3CACF72E178B767C52D51B2AFF8BA607 * L_0 = (U3COnProgressU3Ec__AnonStorey2_tAE87511B3CACF72E178B767C52D51B2AFF8BA607 *)il2cpp_codegen_object_new(U3COnProgressU3Ec__AnonStorey2_tAE87511B3CACF72E178B767C52D51B2AFF8BA607_il2cpp_TypeInfo_var);
		U3COnProgressU3Ec__AnonStorey2__ctor_m85F248750CD8E84EEF7EF83F5F6D828C1BB80798(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3COnProgressU3Ec__AnonStorey2_tAE87511B3CACF72E178B767C52D51B2AFF8BA607 * L_1 = V_0;
		intptr_t L_2 = ___controllerPtr0;
		NullCheck(L_1);
		L_1->set_controllerPtr_0((intptr_t)L_2);
		U3COnProgressU3Ec__AnonStorey2_tAE87511B3CACF72E178B767C52D51B2AFF8BA607 * L_3 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_4 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_4, L_3, (intptr_t)((intptr_t)U3COnProgressU3Ec__AnonStorey2_U3CU3Em__0_mF236929A1D3994FD2C5804E08876AC7B047B72DB_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m93A9BD0DC888F1D02E77860288095CB49D4CFFC2(L_4, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Storage.MonitorControllerInternal Firebase.Storage.MonitorControllerInternal::ProxyFromCPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * MonitorControllerInternal_ProxyFromCPtr_mA3F43A384F08353CCACE93CCE3AE070DAF402D3B (intptr_t ___controllerPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_ProxyFromCPtr_mA3F43A384F08353CCACE93CCE3AE070DAF402D3B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var);
		Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B * L_0 = ((MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var))->get_cPtrsToProxies_7();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var);
			Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B * L_2 = ((MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var))->get_cPtrsToProxies_7();
			intptr_t L_3 = ___controllerPtr0;
			NullCheck(L_2);
			bool L_4 = Dictionary_2_TryGetValue_m788267B35EAB890E8141EC87D164B81C416AE6B0(L_2, (intptr_t)L_3, (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m788267B35EAB890E8141EC87D164B81C416AE6B0_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_002f;
			}
		}

IL_001e:
		{
			WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * L_5 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			RuntimeObject * L_6 = FirebaseApp_WeakReferenceGetTarget_mC676B673AB674077A1A40272E96E51C5A25DC30A(L_5, /*hidden argument*/NULL);
			V_2 = ((MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC *)IsInstClass((RuntimeObject*)L_6, MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x3D, FINALLY_0034);
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_1;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		return (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC *)NULL;
	}

IL_003d:
	{
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_8 = V_2;
		return L_8;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal::RegisterCancellationToken(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_RegisterCancellationToken_mC7877F5A35A97CDF5D00213884ED59C9E2882A3C (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * __this, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_RegisterCancellationToken_mC7877F5A35A97CDF5D00213884ED59C9E2882A3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_0, __this, (intptr_t)((intptr_t)MonitorControllerInternal_U3CRegisterCancellationTokenU3Em__0_m5DD33FFEC90427C4DA82D4113903E7A09D8A6B12_RuntimeMethod_var), /*hidden argument*/NULL);
		CancellationToken_Register_m2314D28552347E0B5EB56982F2E00FC8AA7CB95C((CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB *)(&___cancellationToken0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal::SetPausedEvent(Firebase.Storage.MonitorControllerInternal_MonitorControllerEventDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_SetPausedEvent_m6171BB978F5779201E4178B10D90238EAD08A607 (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * __this, MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * ___arg00, intptr_t ___event_data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_SetPausedEvent_m6171BB978F5779201E4178B10D90238EAD08A607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * L_1 = ___arg00;
		intptr_t L_2 = ___event_data1;
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_SetPausedEvent_m81D1057933FC1D28C24503BE4147B48432F5F448(L_0, L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		bool L_3 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, MonitorControllerInternal_SetPausedEvent_m6171BB978F5779201E4178B10D90238EAD08A607_RuntimeMethod_var);
	}

IL_001d:
	{
		return;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal::SetProgressEvent(Firebase.Storage.MonitorControllerInternal_MonitorControllerEventDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_SetProgressEvent_m3CF158E8BB6ECB066BA289749054865C76B6136D (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * __this, MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * ___arg00, intptr_t ___event_data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_SetProgressEvent_m3CF158E8BB6ECB066BA289749054865C76B6136D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * L_1 = ___arg00;
		intptr_t L_2 = ___event_data1;
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_SetProgressEvent_m69AEB6AA48E5165BB235DCC753C9A3597BC2EB94(L_0, L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		bool L_3 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, MonitorControllerInternal_SetProgressEvent_m3CF158E8BB6ECB066BA289749054865C76B6136D_RuntimeMethod_var);
	}

IL_001d:
	{
		return;
	}
}
// Firebase.Storage.ControllerInternal Firebase.Storage.MonitorControllerInternal::get_Controller()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerInternal_t2621A083A4D903DB174839BFB5EFA6E419A3A33B * MonitorControllerInternal_get_Controller_m6DFEA5BF897AB23CF99B79B95AD72F86B5BDC5CD (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_get_Controller_m6DFEA5BF897AB23CF99B79B95AD72F86B5BDC5CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ControllerInternal_t2621A083A4D903DB174839BFB5EFA6E419A3A33B * V_1 = NULL;
	ControllerInternal_t2621A083A4D903DB174839BFB5EFA6E419A3A33B * G_B3_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		intptr_t L_1 = StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_Controller_get_m6C16A6558921B7942DDC2D137D784A7675608020(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		bool L_3 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		G_B3_0 = ((ControllerInternal_t2621A083A4D903DB174839BFB5EFA6E419A3A33B *)(NULL));
		goto IL_0029;
	}

IL_0022:
	{
		intptr_t L_4 = V_0;
		ControllerInternal_t2621A083A4D903DB174839BFB5EFA6E419A3A33B * L_5 = (ControllerInternal_t2621A083A4D903DB174839BFB5EFA6E419A3A33B *)il2cpp_codegen_object_new(ControllerInternal_t2621A083A4D903DB174839BFB5EFA6E419A3A33B_il2cpp_TypeInfo_var);
		ControllerInternal__ctor_m522C553E3A3E41EB3B7980A9B12C6ADD5BD07920(L_5, (intptr_t)L_4, (bool)0, /*hidden argument*/NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, MonitorControllerInternal_get_Controller_m6DFEA5BF897AB23CF99B79B95AD72F86B5BDC5CD_RuntimeMethod_var);
	}

IL_003a:
	{
		ControllerInternal_t2621A083A4D903DB174839BFB5EFA6E419A3A33B * L_8 = V_1;
		return L_8;
	}
}
// System.Int64 Firebase.Storage.MonitorControllerInternal::get_BytesTransferred()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MonitorControllerInternal_get_BytesTransferred_m067A52058654F64D4462D953AE7ADF80227EF25E (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_get_BytesTransferred_m067A52058654F64D4462D953AE7ADF80227EF25E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		int64_t L_1 = StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_BytesTransferred_get_m4583FF7B4649456F8040471724BCAE1FA0411C00(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, MonitorControllerInternal_get_BytesTransferred_m067A52058654F64D4462D953AE7ADF80227EF25E_RuntimeMethod_var);
	}

IL_001c:
	{
		int64_t L_4 = V_0;
		return L_4;
	}
}
// System.Int64 Firebase.Storage.MonitorControllerInternal::get_TotalByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MonitorControllerInternal_get_TotalByteCount_mE605D8CA215D0337B209792947F00B5C1CD635A3 (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_get_TotalByteCount_mE605D8CA215D0337B209792947F00B5C1CD635A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		int64_t L_1 = StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_TotalByteCount_get_m0C4CA207FF64DCA6136FFBD270D406580A3DC4EB(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, MonitorControllerInternal_get_TotalByteCount_mE605D8CA215D0337B209792947F00B5C1CD635A3_RuntimeMethod_var);
	}

IL_001c:
	{
		int64_t L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal__cctor_m134E0D36F787D35918BC2D176B085E5A46700B74 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal__cctor_m134E0D36F787D35918BC2D176B085E5A46700B74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B * L_0 = (Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B *)il2cpp_codegen_object_new(Dictionary_2_t72D250BC9EDC3D360029EAB541502850A645995B_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4355E2B9BEFD87BF3F915FB76ECD7D2E92FB584A(L_0, /*hidden argument*/Dictionary_2__ctor_m4355E2B9BEFD87BF3F915FB76ECD7D2E92FB584A_RuntimeMethod_var);
		((MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var))->set_cPtrsToProxies_7(L_0);
		return;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal::<RegisterCancellationToken>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_U3CRegisterCancellationTokenU3Em__0_m5DD33FFEC90427C4DA82D4113903E7A09D8A6B12 (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * __this, const RuntimeMethod* method)
{
	{
		ControllerInternal_t2621A083A4D903DB174839BFB5EFA6E419A3A33B * L_0 = MonitorControllerInternal_get_Controller_m6DFEA5BF897AB23CF99B79B95AD72F86B5BDC5CD(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ControllerInternal_Cancel_m920A8CDF80BACC89DC8C579D109A94EEADB3946A(L_0, /*hidden argument*/NULL);
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
// System.Void Firebase.Storage.MonitorControllerInternal_<Create>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateU3Ec__AnonStorey0__ctor_mF865E0F798FA267021A1F4B0CA496736DACC7E64 (U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal_<Create>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateU3Ec__AnonStorey0_U3CU3Em__0_m7C074C68CF7C2F3A833DFD6B29B6E69BE5A74362 (U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCreateU3Ec__AnonStorey0_U3CU3Em__0_m7C074C68CF7C2F3A833DFD6B29B6E69BE5A74362_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_0 = __this->get_proxy_0();
		NullCheck(L_0);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = L_0->get_Paused_2();
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_2 = __this->get_proxy_0();
		NullCheck(L_2);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = L_2->get_Paused_2();
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_4 = __this->get_proxy_0();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_5 = ((EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_3);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_3, L_4, L_5, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_002b:
	{
		return;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal_<Create>c__AnonStorey0::<>m__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateU3Ec__AnonStorey0_U3CU3Em__1_m014B85E994CB74ACE9B191D98D71BF022418F82B (U3CCreateU3Ec__AnonStorey0_tB2BF918A42CA92CD90B4358732278FF729A69C30 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCreateU3Ec__AnonStorey0_U3CU3Em__1_m014B85E994CB74ACE9B191D98D71BF022418F82B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_0 = __this->get_proxy_0();
		NullCheck(L_0);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = L_0->get_Progress_3();
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_2 = __this->get_proxy_0();
		NullCheck(L_2);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = L_2->get_Progress_3();
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_4 = __this->get_proxy_0();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_5 = ((EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_3);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_3, L_4, L_5, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_002b:
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
// System.Void Firebase.Storage.MonitorControllerInternal_<OnPaused>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnPausedU3Ec__AnonStorey1__ctor_mF5FEDD803EF6E0A8EEB3ED2A47D530F575B23CB9 (U3COnPausedU3Ec__AnonStorey1_tDD6993DBEF4E65B1E82EA05A20D7399C43694D0C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal_<OnPaused>c__AnonStorey1::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnPausedU3Ec__AnonStorey1_U3CU3Em__0_m9AEDD1777FD6D9D004FA7DE3059BB0AA177A289A (U3COnPausedU3Ec__AnonStorey1_tDD6993DBEF4E65B1E82EA05A20D7399C43694D0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COnPausedU3Ec__AnonStorey1_U3CU3Em__0_m9AEDD1777FD6D9D004FA7DE3059BB0AA177A289A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * V_0 = NULL;
	{
		intptr_t L_0 = __this->get_controllerPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var);
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_1 = MonitorControllerInternal_ProxyFromCPtr_mA3F43A384F08353CCACE93CCE3AE070DAF402D3B((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_3 = V_0;
		NullCheck(L_3);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_4 = L_3->get_forwardToPausedEvent_4();
		NullCheck(L_4);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_4, /*hidden argument*/NULL);
	}

IL_001d:
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
// System.Void Firebase.Storage.MonitorControllerInternal_<OnProgress>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnProgressU3Ec__AnonStorey2__ctor_m85F248750CD8E84EEF7EF83F5F6D828C1BB80798 (U3COnProgressU3Ec__AnonStorey2_tAE87511B3CACF72E178B767C52D51B2AFF8BA607 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal_<OnProgress>c__AnonStorey2::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnProgressU3Ec__AnonStorey2_U3CU3Em__0_mF236929A1D3994FD2C5804E08876AC7B047B72DB (U3COnProgressU3Ec__AnonStorey2_tAE87511B3CACF72E178B767C52D51B2AFF8BA607 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COnProgressU3Ec__AnonStorey2_U3CU3Em__0_mF236929A1D3994FD2C5804E08876AC7B047B72DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * V_0 = NULL;
	{
		intptr_t L_0 = __this->get_controllerPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var);
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_1 = MonitorControllerInternal_ProxyFromCPtr_mA3F43A384F08353CCACE93CCE3AE070DAF402D3B((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_3 = V_0;
		NullCheck(L_3);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_4 = L_3->get_forwardToProgressEvent_5();
		NullCheck(L_4);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_4, /*hidden argument*/NULL);
	}

IL_001d:
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 (MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * __this, intptr_t ___controllerPtr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___controllerPtr0);

}
// System.Void Firebase.Storage.MonitorControllerInternal_MonitorControllerEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerEventDelegate__ctor_m38181BDA59502610716E2A0A8929586C6F417A3B (MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Storage.MonitorControllerInternal_MonitorControllerEventDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerEventDelegate_Invoke_m844B711A8B289DBE2E7EAE948FA2CEDEF582297E (MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * __this, intptr_t ___controllerPtr0, const RuntimeMethod* method)
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
				((FunctionPointerType)targetMethodPointer)(___controllerPtr0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___controllerPtr0, targetMethod);
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
					((FunctionPointerType)targetMethodPointer)(___controllerPtr0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___controllerPtr0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___controllerPtr0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___controllerPtr0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___controllerPtr0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___controllerPtr0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___controllerPtr0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Storage.MonitorControllerInternal_MonitorControllerEventDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MonitorControllerEventDelegate_BeginInvoke_mF07602CD4BE01C43BB1610F8DEDD3A4408B278E2 (MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * __this, intptr_t ___controllerPtr0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerEventDelegate_BeginInvoke_mF07602CD4BE01C43BB1610F8DEDD3A4408B278E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___controllerPtr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.Storage.MonitorControllerInternal_MonitorControllerEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerEventDelegate_EndInvoke_mC77BEE3FD7BEE64BE0E381FBF08C6C7B4214D33B (MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.Storage.StorageException::.ctor(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageException__ctor_m9FC051927B9C4F5222AE63495539250DDF2715AD (StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * __this, int32_t ___errorCode0, int32_t ___httpResultCode1, String_t* ___errorMessage2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageException__ctor_m9FC051927B9C4F5222AE63495539250DDF2715AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * G_B2_0 = NULL;
	StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * G_B3_1 = NULL;
	{
		String_t* L_0 = ___errorMessage2;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = ___errorCode0;
		IL2CPP_RUNTIME_CLASS_INIT(StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648_il2cpp_TypeInfo_var);
		String_t* L_3 = StorageException_GetErrorMessageForCode_mE7611A59F467E38484935982FCE64E8B04D53654(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		String_t* L_4 = ___errorMessage2;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		int32_t L_5 = ___errorCode0;
		StorageException_set_ErrorCode_mBB954753CA9088849372B0BF14EC2EEBA66F7343_inline(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___httpResultCode1;
		StorageException_set_HttpResultCode_m886A6140AB814BF2A0E822A3E94CA1C37E0633C3_inline(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Storage.StorageException Firebase.Storage.StorageException::CreateFromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * StorageException_CreateFromException_m2FF23B3F13BFF625A5580AB92D4A5CC74E864032 (Exception_t * ___exception0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageException_CreateFromException_m2FF23B3F13BFF625A5580AB92D4A5CC74E864032_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * V_0 = NULL;
	AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E * V_1 = NULL;
	FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF * V_2 = NULL;
	String_t* V_3 = NULL;
	Exception_t * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * V_6 = NULL;
	StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * V_7 = NULL;
	int32_t V_8 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Exception_t * L_0 = ___exception0;
		V_1 = ((AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E *)CastclassClass((RuntimeObject*)L_0, AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E_il2cpp_TypeInfo_var));
		V_2 = (FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF *)NULL;
		V_3 = (String_t*)NULL;
		AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E * L_1 = V_1;
		NullCheck(L_1);
		ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * L_2 = AggregateException_get_InnerExceptions_mB81D2B3BD56A3E938B83B0AF766474ED66057040_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3 = ReadOnlyCollection_1_GetEnumerator_mB3A1708B473BA7EE3CED5959613B2AA11A4920BA(L_2, /*hidden argument*/ReadOnlyCollection_1_GetEnumerator_mB3A1708B473BA7EE3CED5959613B2AA11A4920BA_RuntimeMethod_var);
		V_5 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0052;
		}

IL_001d:
		{
			RuntimeObject* L_4 = V_5;
			NullCheck(L_4);
			Exception_t * L_5 = InterfaceFuncInvoker0< Exception_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Exception>::get_Current() */, IEnumerator_1_t2281FCF251CD51C1F13587450034F0E08EBFAD0E_il2cpp_TypeInfo_var, L_4);
			V_4 = L_5;
			Exception_t * L_6 = V_4;
			V_6 = ((StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 *)IsInstSealed((RuntimeObject*)L_6, StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648_il2cpp_TypeInfo_var));
			Exception_t * L_7 = V_4;
			V_2 = ((FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF *)IsInstSealed((RuntimeObject*)L_7, FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF_il2cpp_TypeInfo_var));
			StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * L_8 = V_6;
			if (!L_8)
			{
				goto IL_0047;
			}
		}

IL_003e:
		{
			StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * L_9 = V_6;
			V_7 = L_9;
			IL2CPP_LEAVE(0xC5, FINALLY_0063);
		}

IL_0047:
		{
			FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF * L_10 = V_2;
			if (!L_10)
			{
				goto IL_0052;
			}
		}

IL_004d:
		{
			goto IL_005e;
		}

IL_0052:
		{
			RuntimeObject* L_11 = V_5;
			NullCheck(L_11);
			bool L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_001d;
			}
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x72, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_13 = V_5;
			if (!L_13)
			{
				goto IL_0071;
			}
		}

IL_006a:
		{
			RuntimeObject* L_14 = V_5;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_14);
		}

IL_0071:
		{
			IL2CPP_END_FINALLY(99)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_JUMP_TBL(0xC5, IL_00c5)
		IL2CPP_JUMP_TBL(0x72, IL_0072)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0072:
	{
		FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF * L_15 = V_2;
		if (L_15)
		{
			goto IL_008a;
		}
	}
	{
		Exception_t * L_16 = ___exception0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		V_3 = L_17;
		IL2CPP_RUNTIME_CLASS_INIT(StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648_il2cpp_TypeInfo_var);
		Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * L_18 = ((StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648_StaticFields*)il2cpp_codegen_static_fields_for(StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648_il2cpp_TypeInfo_var))->get_unknownError_18();
		V_0 = L_18;
		goto IL_00ae;
	}

IL_008a:
	{
		FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF * L_19 = V_2;
		NullCheck(L_19);
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_19);
		V_3 = L_20;
		IL2CPP_RUNTIME_CLASS_INIT(StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648_il2cpp_TypeInfo_var);
		Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B * L_21 = ((StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648_StaticFields*)il2cpp_codegen_static_fields_for(StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648_il2cpp_TypeInfo_var))->get_errorToStorageErrorAndHttpStatusCode_17();
		FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF * L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = FirebaseException_get_ErrorCode_m35E226BE84B218CC4F6C0B86EEE8770C2404F2A9_inline(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		bool L_24 = Dictionary_2_TryGetValue_m11D082A6B852EF44A748AE93F19EE696D1D5B734(L_21, L_23, (Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m11D082A6B852EF44A748AE93F19EE696D1D5B734_RuntimeMethod_var);
		if (L_24)
		{
			goto IL_00ae;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648_il2cpp_TypeInfo_var);
		Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * L_25 = ((StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648_StaticFields*)il2cpp_codegen_static_fields_for(StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648_il2cpp_TypeInfo_var))->get_unknownError_18();
		V_0 = L_25;
	}

IL_00ae:
	{
		Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = Tuple_2_get_Item2_mBF5DA67EDF1B44D8351593BB6F0AEE3F9D006FC1_inline(L_26, /*hidden argument*/Tuple_2_get_Item2_mBF5DA67EDF1B44D8351593BB6F0AEE3F9D006FC1_RuntimeMethod_var);
		V_8 = L_27;
		Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = Tuple_2_get_Item1_m2258EA5DF46C1ADBBB89BE24A995D21980C1C991_inline(L_28, /*hidden argument*/Tuple_2_get_Item1_m2258EA5DF46C1ADBBB89BE24A995D21980C1C991_RuntimeMethod_var);
		int32_t L_30 = V_8;
		String_t* L_31 = V_3;
		StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * L_32 = (StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 *)il2cpp_codegen_object_new(StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648_il2cpp_TypeInfo_var);
		StorageException__ctor_m9FC051927B9C4F5222AE63495539250DDF2715AD(L_32, L_29, L_30, L_31, /*hidden argument*/NULL);
		return L_32;
	}

IL_00c5:
	{
		StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * L_33 = V_7;
		return L_33;
	}
}
// System.Int32 Firebase.Storage.StorageException::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StorageException_get_ErrorCode_mFDEECBE336A8E1A466730F9B7A61ED819A77868E (StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_19();
		return L_0;
	}
}
// System.Void Firebase.Storage.StorageException::set_ErrorCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageException_set_ErrorCode_mBB954753CA9088849372B0BF14EC2EEBA66F7343 (StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CErrorCodeU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.Void Firebase.Storage.StorageException::set_HttpResultCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageException_set_HttpResultCode_m886A6140AB814BF2A0E822A3E94CA1C37E0633C3 (StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CHttpResultCodeU3Ek__BackingField_20(L_0);
		return;
	}
}
// System.String Firebase.Storage.StorageException::GetErrorMessageForCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageException_GetErrorMessageForCode_mE7611A59F467E38484935982FCE64E8B04D53654 (int32_t ___errorCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageException_GetErrorMessageForCode_mE7611A59F467E38484935982FCE64E8B04D53654_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___errorCode0;
		switch (((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)13013))))
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_0075;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_0069;
			}
		}
	}
	{
		int32_t L_1 = ___errorCode0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-13031))))
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_2 = ___errorCode0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)-13030))))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_3 = ___errorCode0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)-13021))))
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_4 = ___errorCode0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)-13020))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_5 = ___errorCode0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)-13040))))
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_6 = ___errorCode0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-13000))))
		{
			goto IL_0063;
		}
	}
	{
		goto IL_009f;
	}

IL_0063:
	{
		return _stringLiteral07F7E3B80E47933EF9D81D3BE137026E1E6DD804;
	}

IL_0069:
	{
		return _stringLiteral3838538CC5F3BAAA1D12D6837EC80B0E592ED35E;
	}

IL_006f:
	{
		return _stringLiteralD8853D74463592F6FE909C3F3B4F2F463670ADF9;
	}

IL_0075:
	{
		return _stringLiteralA68693D799ED33E22540D5F941DDA19303152347;
	}

IL_007b:
	{
		return _stringLiteralAE25EA1D287FE2F9608F574424027A83EAAAF245;
	}

IL_0081:
	{
		return _stringLiteral2895989FFE951340625ADA358A3FEA9BFBAB9EAB;
	}

IL_0087:
	{
		return _stringLiteral5AEAF442612C084BAF8DBC14A2012F27920A6738;
	}

IL_008d:
	{
		return _stringLiteral252FA81D131D9BD386F3F8D0C310C4098FFADF76;
	}

IL_0093:
	{
		return _stringLiteralA6E23D5B15CEF09215AA9AD9BD232B474C979D20;
	}

IL_0099:
	{
		return _stringLiteral43F74A96ACFD66E16BAE37F5F79496D985E532EB;
	}

IL_009f:
	{
		return _stringLiteral07F7E3B80E47933EF9D81D3BE137026E1E6DD804;
	}
}
// System.Void Firebase.Storage.StorageException::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageException__cctor_mC7D8DCF8B6729D0E46589E969723E86050A2D83B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageException__cctor_mC7D8DCF8B6729D0E46589E969723E86050A2D83B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B * V_0 = NULL;
	{
		Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B * L_0 = (Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B *)il2cpp_codegen_object_new(Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mC9DE7790A011BFAD0B90831CD3319C47898625B4(L_0, /*hidden argument*/Dictionary_2__ctor_mC9DE7790A011BFAD0B90831CD3319C47898625B4_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B * L_1 = V_0;
		Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * L_2 = (Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D *)il2cpp_codegen_object_new(Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D_il2cpp_TypeInfo_var);
		Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145(L_2, ((int32_t)-13010), ((int32_t)404), /*hidden argument*/Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145_RuntimeMethod_var);
		NullCheck(L_1);
		Dictionary_2_Add_mE6DF2F097E7EDDBF60B68FDC7E2C469ED09013B1(L_1, 2, L_2, /*hidden argument*/Dictionary_2_Add_mE6DF2F097E7EDDBF60B68FDC7E2C469ED09013B1_RuntimeMethod_var);
		Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B * L_3 = V_0;
		Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * L_4 = (Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D *)il2cpp_codegen_object_new(Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D_il2cpp_TypeInfo_var);
		Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145(L_4, ((int32_t)-13011), ((int32_t)404), /*hidden argument*/Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145_RuntimeMethod_var);
		NullCheck(L_3);
		Dictionary_2_Add_mE6DF2F097E7EDDBF60B68FDC7E2C469ED09013B1(L_3, 3, L_4, /*hidden argument*/Dictionary_2_Add_mE6DF2F097E7EDDBF60B68FDC7E2C469ED09013B1_RuntimeMethod_var);
		Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B * L_5 = V_0;
		Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * L_6 = (Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D *)il2cpp_codegen_object_new(Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D_il2cpp_TypeInfo_var);
		Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145(L_6, ((int32_t)-13012), ((int32_t)404), /*hidden argument*/Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145_RuntimeMethod_var);
		NullCheck(L_5);
		Dictionary_2_Add_mE6DF2F097E7EDDBF60B68FDC7E2C469ED09013B1(L_5, 4, L_6, /*hidden argument*/Dictionary_2_Add_mE6DF2F097E7EDDBF60B68FDC7E2C469ED09013B1_RuntimeMethod_var);
		Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B * L_7 = V_0;
		Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * L_8 = (Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D *)il2cpp_codegen_object_new(Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D_il2cpp_TypeInfo_var);
		Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145(L_8, ((int32_t)-13012), ((int32_t)503), /*hidden argument*/Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145_RuntimeMethod_var);
		NullCheck(L_7);
		Dictionary_2_Add_mE6DF2F097E7EDDBF60B68FDC7E2C469ED09013B1(L_7, 5, L_8, /*hidden argument*/Dictionary_2_Add_mE6DF2F097E7EDDBF60B68FDC7E2C469ED09013B1_RuntimeMethod_var);
		Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B * L_9 = V_0;
		Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * L_10 = (Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D *)il2cpp_codegen_object_new(Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D_il2cpp_TypeInfo_var);
		Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145(L_10, ((int32_t)-13020), ((int32_t)401), /*hidden argument*/Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145_RuntimeMethod_var);
		NullCheck(L_9);
		Dictionary_2_Add_mE6DF2F097E7EDDBF60B68FDC7E2C469ED09013B1(L_9, 6, L_10, /*hidden argument*/Dictionary_2_Add_mE6DF2F097E7EDDBF60B68FDC7E2C469ED09013B1_RuntimeMethod_var);
		Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B * L_11 = V_0;
		Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * L_12 = (Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D *)il2cpp_codegen_object_new(Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D_il2cpp_TypeInfo_var);
		Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145(L_12, ((int32_t)-13021), ((int32_t)401), /*hidden argument*/Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145_RuntimeMethod_var);
		NullCheck(L_11);
		Dictionary_2_Add_mE6DF2F097E7EDDBF60B68FDC7E2C469ED09013B1(L_11, 7, L_12, /*hidden argument*/Dictionary_2_Add_mE6DF2F097E7EDDBF60B68FDC7E2C469ED09013B1_RuntimeMethod_var);
		Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B * L_13 = V_0;
		Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * L_14 = (Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D *)il2cpp_codegen_object_new(Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D_il2cpp_TypeInfo_var);
		Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145(L_14, ((int32_t)-13030), ((int32_t)409), /*hidden argument*/Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145_RuntimeMethod_var);
		NullCheck(L_13);
		Dictionary_2_Add_mE6DF2F097E7EDDBF60B68FDC7E2C469ED09013B1(L_13, 8, L_14, /*hidden argument*/Dictionary_2_Add_mE6DF2F097E7EDDBF60B68FDC7E2C469ED09013B1_RuntimeMethod_var);
		Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B * L_15 = V_0;
		Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * L_16 = (Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D *)il2cpp_codegen_object_new(Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D_il2cpp_TypeInfo_var);
		Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145(L_16, ((int32_t)-13031), ((int32_t)409), /*hidden argument*/Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145_RuntimeMethod_var);
		NullCheck(L_15);
		Dictionary_2_Add_mE6DF2F097E7EDDBF60B68FDC7E2C469ED09013B1(L_15, ((int32_t)9), L_16, /*hidden argument*/Dictionary_2_Add_mE6DF2F097E7EDDBF60B68FDC7E2C469ED09013B1_RuntimeMethod_var);
		Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B * L_17 = V_0;
		Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * L_18 = (Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D *)il2cpp_codegen_object_new(Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D_il2cpp_TypeInfo_var);
		Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145(L_18, ((int32_t)-13000), 0, /*hidden argument*/Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145_RuntimeMethod_var);
		NullCheck(L_17);
		Dictionary_2_Add_mE6DF2F097E7EDDBF60B68FDC7E2C469ED09013B1(L_17, ((int32_t)10), L_18, /*hidden argument*/Dictionary_2_Add_mE6DF2F097E7EDDBF60B68FDC7E2C469ED09013B1_RuntimeMethod_var);
		Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B * L_19 = V_0;
		Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * L_20 = (Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D *)il2cpp_codegen_object_new(Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D_il2cpp_TypeInfo_var);
		Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145(L_20, ((int32_t)-13040), 0, /*hidden argument*/Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145_RuntimeMethod_var);
		NullCheck(L_19);
		Dictionary_2_Add_mE6DF2F097E7EDDBF60B68FDC7E2C469ED09013B1(L_19, ((int32_t)11), L_20, /*hidden argument*/Dictionary_2_Add_mE6DF2F097E7EDDBF60B68FDC7E2C469ED09013B1_RuntimeMethod_var);
		Dictionary_2_t6B3CF15477F21C3A65AF435CEEB2327D3CF7149B * L_21 = V_0;
		((StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648_StaticFields*)il2cpp_codegen_static_fields_for(StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648_il2cpp_TypeInfo_var))->set_errorToStorageErrorAndHttpStatusCode_17(L_21);
		Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D * L_22 = (Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D *)il2cpp_codegen_object_new(Tuple_2_t1944E316A35F0E1D85C93DE78A855AD2A2DC516D_il2cpp_TypeInfo_var);
		Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145(L_22, ((int32_t)-13000), ((int32_t)300), /*hidden argument*/Tuple_2__ctor_m607D2682D38B82D6A702F4430CFBAE8515734145_RuntimeMethod_var);
		((StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648_StaticFields*)il2cpp_codegen_static_fields_for(StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648_il2cpp_TypeInfo_var))->set_unknownError_18(L_22);
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
// System.Void Firebase.Storage.StorageInternalPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE__cctor_m6CF7CF1DD269DBBCA91A14CC27ACD8675D6CAACE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageInternalPINVOKE__cctor_m6CF7CF1DD269DBBCA91A14CC27ACD8675D6CAACE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A * L_0 = (SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A *)il2cpp_codegen_object_new(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var);
		SWIGExceptionHelper__ctor_m22791F13CFA7229908629D1367E04500EEC6D6AB(L_0, /*hidden argument*/NULL);
		((StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_StaticFields*)il2cpp_codegen_static_fields_for(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var))->set_swigExceptionHelper_0(L_0);
		SWIGStringHelper_t982F688E6929F8F6BC1C2B538EAEEC32CB1B4EE6 * L_1 = (SWIGStringHelper_t982F688E6929F8F6BC1C2B538EAEEC32CB1B4EE6 *)il2cpp_codegen_object_new(SWIGStringHelper_t982F688E6929F8F6BC1C2B538EAEEC32CB1B4EE6_il2cpp_TypeInfo_var);
		SWIGStringHelper__ctor_m2DE1E1FE9AEF66C32347E0FDC957988A9F3ABA3D(L_1, /*hidden argument*/NULL);
		((StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_StaticFields*)il2cpp_codegen_static_fields_for(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var))->set_swigStringHelper_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_Future_StorageMetadata_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_Future_StorageMetadata_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Storage.Future_StorageMetadata_SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_SWIG_OnCompletion_m05B8DA391E57267C6785DE3B8618FD116144D267 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, SWIG_CompletionDelegate_t41258E0CC595DB1BBA6551346F0800DF020D825E * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_Future_StorageMetadata_SWIG_OnCompletion)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Storage_Future_StorageMetadata_SWIG_FreeCompletionData(void*, intptr_t);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_Future_StorageMetadata_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_SWIG_FreeCompletionData_m6AA595E5A0F0653654450711E1851CC0711BCF9B (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Storage_Future_StorageMetadata_SWIG_FreeCompletionData)(____jarg10_marshaled, ___jarg21);

}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_Future_StorageMetadata_GetResult(void*);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_Future_StorageMetadata_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_GetResult_m04BC47A83B15D25621DC306DDCA075C0CEC98B59 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_Future_StorageMetadata_GetResult)(____jarg10_marshaled);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Storage_delete_Future_StorageMetadata(void*);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_delete_Future_StorageMetadata(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_delete_Future_StorageMetadata_mEF82F206F5CF6D7AB0391DA9E925D145004908F2 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Storage_delete_Future_StorageMetadata)(____jarg10_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Storage_delete_ControllerInternal(void*);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_delete_ControllerInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_delete_ControllerInternal_m553EE5AA0EBF76071CDAE58703D37947987A713C (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Storage_delete_ControllerInternal)(____jarg10_marshaled);

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Storage_ControllerInternal_Cancel(void*);
// System.Boolean Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_ControllerInternal_Cancel(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StorageInternalPINVOKE_Firebase_Storage_ControllerInternal_Cancel_mBC3CC0289C5513F9E75702467438B780913AE771 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_ControllerInternal_Cancel)(____jarg10_marshaled);

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_new_MetadataInternal__SWIG_0();
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_new_MetadataInternal__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_new_MetadataInternal__SWIG_0_m061F2A0882839781EBDCB807F536AB28A823E96B (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_new_MetadataInternal__SWIG_0)();

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Storage_delete_MetadataInternal(void*);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_delete_MetadataInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_delete_MetadataInternal_mB41332746A4A12F0E0A7B4E956B17AE154F9F4D7 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Storage_delete_MetadataInternal)(____jarg10_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Storage_MetadataInternal_ContentType_set(void*, char*);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MetadataInternal_ContentType_set(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_MetadataInternal_ContentType_set_m7ED0FD1E45B346A2373D23BA0AF7CDB42679EC17 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Storage_MetadataInternal_ContentType_set)(____jarg10_marshaled, ____jarg21_marshaled);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_MetadataInternal_CopyCppObject(void*);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MetadataInternal_CopyCppObject(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_MetadataInternal_CopyCppObject_m1F49E29B570EC8EC7E6FE6BD2EF35390F2BCF50E (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_MetadataInternal_CopyCppObject)(____jarg10_marshaled);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Storage_delete_StorageReferenceInternal(void*);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_delete_StorageReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_delete_StorageReferenceInternal_mB500600E002DDAE585150A78075D2256A79472EC (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Storage_delete_StorageReferenceInternal)(____jarg10_marshaled);

}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_StorageReferenceInternal_Child__SWIG_0(void*, char*);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_Child__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_Child__SWIG_0_m40BB5050989ABF186A9B64EE338646007286704C (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_StorageReferenceInternal_Child__SWIG_0)(____jarg10_marshaled, ____jarg21_marshaled);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_StorageReferenceInternal_GetDownloadUrl(void*);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_GetDownloadUrl(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_GetDownloadUrl_mD3D7580EF0456CA9CA0EC9B875C6B2996EDD4DD3 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_StorageReferenceInternal_GetDownloadUrl)(____jarg10_marshaled);

	return returnValue;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Storage_StorageReferenceInternal_Bucket_get(void*);
// System.String Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_Bucket_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_Bucket_get_m4E54A784F1B95B246A391C70D0EC38E698870024 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_StorageReferenceInternal_Bucket_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Storage_StorageReferenceInternal_FullPath_get(void*);
// System.String Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_FullPath_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_FullPath_get_m8E65D03D5AE23B5FE329EB81A4013FAFFA9719BA (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_StorageReferenceInternal_FullPath_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Storage_StorageReferenceInternal_IsValid_get(void*);
// System.Boolean Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_IsValid_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_IsValid_get_m4CAF166DAF5E51628084F68924C24E37A7644F86 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_StorageReferenceInternal_IsValid_get)(____jarg10_marshaled);

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_StorageReferenceInternal_PutBytesUsingMonitorController(void*, intptr_t, uint32_t, void*, void*);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_PutBytesUsingMonitorController(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.UInt32,System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_PutBytesUsingMonitorController_mF80336F7EF7013EED6D9E38FD3BDAB96771DC652 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, intptr_t ___jarg21, uint32_t ___jarg32, HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg43, HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg54, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t, uint32_t, void*, void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg43' to native representation
	void* ____jarg43_marshaled = NULL;
	____jarg43_marshaled = (void*)___jarg43.get_m_handle_1();

	// Marshaling of parameter '___jarg54' to native representation
	void* ____jarg54_marshaled = NULL;
	____jarg54_marshaled = (void*)___jarg54.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_StorageReferenceInternal_PutBytesUsingMonitorController)(____jarg10_marshaled, ___jarg21, ___jarg32, ____jarg43_marshaled, ____jarg54_marshaled);

	return returnValue;
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_new_MonitorControllerInternal(void*);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_new_MonitorControllerInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_new_MonitorControllerInternal_m4B7F8C591DE1CA162B7F420C33D4693579D4C2BD (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_new_MonitorControllerInternal)(____jarg10_marshaled);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Storage_delete_MonitorControllerInternal(void*);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_delete_MonitorControllerInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_delete_MonitorControllerInternal_mE5A0FDF1C8EAD29E9187C2E0A0290EA045ED5BD4 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Storage_delete_MonitorControllerInternal)(____jarg10_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Storage_MonitorControllerInternal_SetPausedEvent(void*, Il2CppMethodPointer, intptr_t);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MonitorControllerInternal_SetPausedEvent(System.Runtime.InteropServices.HandleRef,Firebase.Storage.MonitorControllerInternal_MonitorControllerEventDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_SetPausedEvent_m81D1057933FC1D28C24503BE4147B48432F5F448 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * ___jarg21, intptr_t ___jarg32, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Storage_MonitorControllerInternal_SetPausedEvent)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Storage_MonitorControllerInternal_SetProgressEvent(void*, Il2CppMethodPointer, intptr_t);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MonitorControllerInternal_SetProgressEvent(System.Runtime.InteropServices.HandleRef,Firebase.Storage.MonitorControllerInternal_MonitorControllerEventDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_SetProgressEvent_m69AEB6AA48E5165BB235DCC753C9A3597BC2EB94 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, MonitorControllerEventDelegate_tE06D8C5AC3D9FDDB39DAE0B83D65418D0BDCCFD4 * ___jarg21, intptr_t ___jarg32, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Storage_MonitorControllerInternal_SetProgressEvent)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);

}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_MonitorControllerInternal_Controller_get(void*);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MonitorControllerInternal_Controller_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_Controller_get_m6C16A6558921B7942DDC2D137D784A7675608020 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_MonitorControllerInternal_Controller_get)(____jarg10_marshaled);

	return returnValue;
}
IL2CPP_EXTERN_C int64_t DEFAULT_CALL Firebase_Storage_MonitorControllerInternal_BytesTransferred_get(void*);
// System.Int64 Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MonitorControllerInternal_BytesTransferred_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_BytesTransferred_get_m4583FF7B4649456F8040471724BCAE1FA0411C00 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef int64_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_MonitorControllerInternal_BytesTransferred_get)(____jarg10_marshaled);

	return returnValue;
}
IL2CPP_EXTERN_C int64_t DEFAULT_CALL Firebase_Storage_MonitorControllerInternal_TotalByteCount_get(void*);
// System.Int64 Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MonitorControllerInternal_TotalByteCount_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_TotalByteCount_get_m0C4CA207FF64DCA6136FFBD270D406580A3DC4EB (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef int64_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_MonitorControllerInternal_TotalByteCount_get)(____jarg10_marshaled);

	return returnValue;
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_FirebaseStorageInternal_GetReferenceFromUrl__SWIG_0(void*, char*);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_FirebaseStorageInternal_GetReferenceFromUrl__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_GetReferenceFromUrl__SWIG_0_m8D80595789EBF41F7C58BA11D8BF9D6AE708769E (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_FirebaseStorageInternal_GetReferenceFromUrl__SWIG_0)(____jarg10_marshaled, ____jarg21_marshaled);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_FirebaseStorageInternal_GetInstanceInternal(void*, char*, int32_t*);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_FirebaseStorageInternal_GetInstanceInternal(System.Runtime.InteropServices.HandleRef,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_GetInstanceInternal_m91CB46DEDA63BCC952178530C899B3C9B541F1C9 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, String_t* ___jarg21, int32_t* ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*, int32_t*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_FirebaseStorageInternal_GetInstanceInternal)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Storage_FirebaseStorageInternal_ReleaseReferenceInternal(void*);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_FirebaseStorageInternal_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_ReleaseReferenceInternal_m1FEC60F9FF4613B20BAB3CF740545309D7AC6F32 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Storage_FirebaseStorageInternal_ReleaseReferenceInternal)(____jarg10_marshaled);

}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_FirebaseStorageInternal_App_get(void*);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_FirebaseStorageInternal_App_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_App_get_m3161B3235D7C6D692655ABF48B469F72FA8273F6 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_FirebaseStorageInternal_App_get)(____jarg10_marshaled);

	return returnValue;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Storage_FirebaseStorageInternal_Url_get(void*);
// System.String Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_FirebaseStorageInternal_Url_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_Url_get_m484B96251F09C317807804BCAE4C29681959A610 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_FirebaseStorageInternal_Url_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_Future_StorageMetadata_SWIGUpcast(intptr_t);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_Future_StorageMetadata_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_SWIGUpcast_m973780C0E6C23BC2C7DD96C48E3301D6B8EFE498 (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_Future_StorageMetadata_SWIGUpcast)(___jarg10);

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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_mE7195ABD0D429721375E13BDFEF332301E85C913(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_mE7195ABD0D429721375E13BDFEF332301E85C913(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m8E816528A54187C2501C79EF83B0DB4315B28E5F(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m8E816528A54187C2501C79EF83B0DB4315B28E5F(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m02993B101DE9DB50F7BBBCD62B0859DAF6FC9017(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m02993B101DE9DB50F7BBBCD62B0859DAF6FC9017(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m45FF182454864D6AC791CC7B4D8D3396DE767FEC(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m45FF182454864D6AC791CC7B4D8D3396DE767FEC(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m94D4795092042D72FA1EF6CF43C8891A67706880(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m94D4795092042D72FA1EF6CF43C8891A67706880(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_mB99092FE18DF25A06A785C83AAB75FED5AAF642C(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_mB99092FE18DF25A06A785C83AAB75FED5AAF642C(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m79FA3697D2DDC7C4C77E8FCA3723B2FFEBF1E28E(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_m79FA3697D2DDC7C4C77E8FCA3723B2FFEBF1E28E(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m7B86476913D4CCD87BF5B974171C69E3F9C07199(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m7B86476913D4CCD87BF5B974171C69E3F9C07199(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m2B1DB303D67CB4BE6EE23E7C561589C611591085(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_m2B1DB303D67CB4BE6EE23E7C561589C611591085(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m8395061029C984183186909311E8535669238CE0(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_m8395061029C984183186909311E8535669238CE0(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m1F2A4E1DD2BFBB284DC4D3B900F01FE4C3500694(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m1F2A4E1DD2BFBB284DC4D3B900F01FE4C3500694(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m25AA3141BA6170AE1B04F835C989E7853BBA66DA(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_m25AA3141BA6170AE1B04F835C989E7853BBA66DA(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_m0792FA153D0124453E880DE9587512F012279048(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_m0792FA153D0124453E880DE9587512F012279048(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m127C121B708A3AFA2BC6FFFA17E6064EE1794274(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m127C121B708A3AFA2BC6FFFA17E6064EE1794274(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_m9A57F37A7843BF4F356F2F8D1C6726B0610FEB55 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper__cctor_m9A57F37A7843BF4F356F2F8D1C6726B0610FEB55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * L_0 = (ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C *)il2cpp_codegen_object_new(ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD4ABA12107DB24B16F237BE6DE62CEAA3A58938B(L_0, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingApplicationException_mE7195ABD0D429721375E13BDFEF332301E85C913_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->set_applicationDelegate_0(L_0);
		ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * L_1 = (ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C *)il2cpp_codegen_object_new(ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD4ABA12107DB24B16F237BE6DE62CEAA3A58938B(L_1, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArithmeticException_m8E816528A54187C2501C79EF83B0DB4315B28E5F_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->set_arithmeticDelegate_1(L_1);
		ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * L_2 = (ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C *)il2cpp_codegen_object_new(ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD4ABA12107DB24B16F237BE6DE62CEAA3A58938B(L_2, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingDivideByZeroException_m02993B101DE9DB50F7BBBCD62B0859DAF6FC9017_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->set_divideByZeroDelegate_2(L_2);
		ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * L_3 = (ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C *)il2cpp_codegen_object_new(ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD4ABA12107DB24B16F237BE6DE62CEAA3A58938B(L_3, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m45FF182454864D6AC791CC7B4D8D3396DE767FEC_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->set_indexOutOfRangeDelegate_3(L_3);
		ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * L_4 = (ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C *)il2cpp_codegen_object_new(ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD4ABA12107DB24B16F237BE6DE62CEAA3A58938B(L_4, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidCastException_m94D4795092042D72FA1EF6CF43C8891A67706880_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->set_invalidCastDelegate_4(L_4);
		ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * L_5 = (ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C *)il2cpp_codegen_object_new(ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD4ABA12107DB24B16F237BE6DE62CEAA3A58938B(L_5, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidOperationException_mB99092FE18DF25A06A785C83AAB75FED5AAF642C_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->set_invalidOperationDelegate_5(L_5);
		ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * L_6 = (ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C *)il2cpp_codegen_object_new(ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD4ABA12107DB24B16F237BE6DE62CEAA3A58938B(L_6, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIOException_m79FA3697D2DDC7C4C77E8FCA3723B2FFEBF1E28E_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->set_ioDelegate_6(L_6);
		ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * L_7 = (ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C *)il2cpp_codegen_object_new(ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD4ABA12107DB24B16F237BE6DE62CEAA3A58938B(L_7, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingNullReferenceException_m7B86476913D4CCD87BF5B974171C69E3F9C07199_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->set_nullReferenceDelegate_7(L_7);
		ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * L_8 = (ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C *)il2cpp_codegen_object_new(ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD4ABA12107DB24B16F237BE6DE62CEAA3A58938B(L_8, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOutOfMemoryException_m2B1DB303D67CB4BE6EE23E7C561589C611591085_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->set_outOfMemoryDelegate_8(L_8);
		ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * L_9 = (ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C *)il2cpp_codegen_object_new(ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD4ABA12107DB24B16F237BE6DE62CEAA3A58938B(L_9, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOverflowException_m8395061029C984183186909311E8535669238CE0_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->set_overflowDelegate_9(L_9);
		ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * L_10 = (ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C *)il2cpp_codegen_object_new(ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD4ABA12107DB24B16F237BE6DE62CEAA3A58938B(L_10, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingSystemException_m1F2A4E1DD2BFBB284DC4D3B900F01FE4C3500694_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->set_systemDelegate_10(L_10);
		ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * L_11 = (ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m98A9102B00F927ACE2DB6A2533D41DAAAD910A9A(L_11, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentException_m25AA3141BA6170AE1B04F835C989E7853BBA66DA_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->set_argumentDelegate_11(L_11);
		ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * L_12 = (ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m98A9102B00F927ACE2DB6A2533D41DAAAD910A9A(L_12, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentNullException_m0792FA153D0124453E880DE9587512F012279048_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->set_argumentNullDelegate_12(L_12);
		ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * L_13 = (ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m98A9102B00F927ACE2DB6A2533D41DAAAD910A9A(L_13, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m127C121B708A3AFA2BC6FFFA17E6064EE1794274_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->set_argumentOutOfRangeDelegate_13(L_13);
		ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * L_14 = ((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->get_applicationDelegate_0();
		ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * L_15 = ((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->get_arithmeticDelegate_1();
		ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * L_16 = ((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->get_divideByZeroDelegate_2();
		ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * L_17 = ((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->get_indexOutOfRangeDelegate_3();
		ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * L_18 = ((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->get_invalidCastDelegate_4();
		ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * L_19 = ((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->get_invalidOperationDelegate_5();
		ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * L_20 = ((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->get_ioDelegate_6();
		ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * L_21 = ((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->get_nullReferenceDelegate_7();
		ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * L_22 = ((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->get_outOfMemoryDelegate_8();
		ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * L_23 = ((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->get_overflowDelegate_9();
		ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * L_24 = ((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->get_systemDelegate_10();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_StorageInternal_m785FFAB12AA1A38C5E70B3F0320E948A97E607AC(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * L_25 = ((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->get_argumentDelegate_11();
		ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * L_26 = ((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->get_argumentNullDelegate_12();
		ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * L_27 = ((SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A_il2cpp_TypeInfo_var))->get_argumentOutOfRangeDelegate_13();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_StorageInternal_mCB52B062631EBF968438156E934D07202C456A80(L_25, L_26, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m22791F13CFA7229908629D1367E04500EEC6D6AB (SWIGExceptionHelper_tE445F1B9AE6AF73D021B7D8EF8A8F3ECB08D190A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_StorageInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_StorageInternal(Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_StorageInternal_m785FFAB12AA1A38C5E70B3F0320E948A97E607AC (ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___applicationDelegate0, ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___arithmeticDelegate1, ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___divideByZeroDelegate2, ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___indexOutOfRangeDelegate3, ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___invalidCastDelegate4, ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___invalidOperationDelegate5, ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___ioDelegate6, ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___nullReferenceDelegate7, ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___outOfMemoryDelegate8, ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___overflowDelegate9, ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * ___systemExceptionDelegate10, const RuntimeMethod* method)
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
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_StorageInternal)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacksArgument_StorageInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_StorageInternal(Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_StorageInternal_mCB52B062631EBF968438156E934D07202C456A80 (ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * ___argumentDelegate0, ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * ___argumentNullDelegate1, ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method)
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
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacksArgument_StorageInternal)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);

}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_mE7195ABD0D429721375E13BDFEF332301E85C913 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingApplicationException_mE7195ABD0D429721375E13BDFEF332301E85C913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mA4E2F8DDFD2B168D0373ADA978EB613A0650E172(/*hidden argument*/NULL);
		ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_2 = (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)il2cpp_codegen_object_new(ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m94AE67E16D0670DA8A5CFACECFC46C6EBABF900F(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m8E816528A54187C2501C79EF83B0DB4315B28E5F (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArithmeticException_m8E816528A54187C2501C79EF83B0DB4315B28E5F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mA4E2F8DDFD2B168D0373ADA978EB613A0650E172(/*hidden argument*/NULL);
		ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269 * L_2 = (ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269 *)il2cpp_codegen_object_new(ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m1412E36F7AF7D25CF6A00670AE2296E88DA85F5F(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m94AE67E16D0670DA8A5CFACECFC46C6EBABF900F(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m02993B101DE9DB50F7BBBCD62B0859DAF6FC9017 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingDivideByZeroException_m02993B101DE9DB50F7BBBCD62B0859DAF6FC9017_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mA4E2F8DDFD2B168D0373ADA978EB613A0650E172(/*hidden argument*/NULL);
		DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC * L_2 = (DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC *)il2cpp_codegen_object_new(DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC_il2cpp_TypeInfo_var);
		DivideByZeroException__ctor_m12EDCCC81402AA666F9C3CF1CB8A8A7AA8D61169(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m94AE67E16D0670DA8A5CFACECFC46C6EBABF900F(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m45FF182454864D6AC791CC7B4D8D3396DE767FEC (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m45FF182454864D6AC791CC7B4D8D3396DE767FEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mA4E2F8DDFD2B168D0373ADA978EB613A0650E172(/*hidden argument*/NULL);
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_2 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m6CE231E888365F20BD05664560F7AF3830E9D21A(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m94AE67E16D0670DA8A5CFACECFC46C6EBABF900F(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m94D4795092042D72FA1EF6CF43C8891A67706880 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidCastException_m94D4795092042D72FA1EF6CF43C8891A67706880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mA4E2F8DDFD2B168D0373ADA978EB613A0650E172(/*hidden argument*/NULL);
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_2 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m54AEC55A8A1F1EAD6485B691BB597C7EB284B2A5(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m94AE67E16D0670DA8A5CFACECFC46C6EBABF900F(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_mB99092FE18DF25A06A785C83AAB75FED5AAF642C (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidOperationException_mB99092FE18DF25A06A785C83AAB75FED5AAF642C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mA4E2F8DDFD2B168D0373ADA978EB613A0650E172(/*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_2 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC40AA9579B996C6FBAE023590139C16304D81DC6(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m94AE67E16D0670DA8A5CFACECFC46C6EBABF900F(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m79FA3697D2DDC7C4C77E8FCA3723B2FFEBF1E28E (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIOException_m79FA3697D2DDC7C4C77E8FCA3723B2FFEBF1E28E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mA4E2F8DDFD2B168D0373ADA978EB613A0650E172(/*hidden argument*/NULL);
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_2 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_m37262C706BEB979358ABEFEA9F9F253E8773D2B7(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m94AE67E16D0670DA8A5CFACECFC46C6EBABF900F(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m7B86476913D4CCD87BF5B974171C69E3F9C07199 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingNullReferenceException_m7B86476913D4CCD87BF5B974171C69E3F9C07199_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mA4E2F8DDFD2B168D0373ADA978EB613A0650E172(/*hidden argument*/NULL);
		NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_2 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mCD292E9CAC2B24447B04F5404C318B1B2AF4023D(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m94AE67E16D0670DA8A5CFACECFC46C6EBABF900F(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m2B1DB303D67CB4BE6EE23E7C561589C611591085 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOutOfMemoryException_m2B1DB303D67CB4BE6EE23E7C561589C611591085_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mA4E2F8DDFD2B168D0373ADA978EB613A0650E172(/*hidden argument*/NULL);
		OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 * L_2 = (OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 *)il2cpp_codegen_object_new(OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m155C798916559886F6DD9C93B414E5764C55FD52(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m94AE67E16D0670DA8A5CFACECFC46C6EBABF900F(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m8395061029C984183186909311E8535669238CE0 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOverflowException_m8395061029C984183186909311E8535669238CE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mA4E2F8DDFD2B168D0373ADA978EB613A0650E172(/*hidden argument*/NULL);
		OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * L_2 = (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D *)il2cpp_codegen_object_new(OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var);
		OverflowException__ctor_m15CD001EEB2E79D7497E101546B04D9A5520357E(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m94AE67E16D0670DA8A5CFACECFC46C6EBABF900F(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m1F2A4E1DD2BFBB284DC4D3B900F01FE4C3500694 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingSystemException_m1F2A4E1DD2BFBB284DC4D3B900F01FE4C3500694_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mA4E2F8DDFD2B168D0373ADA978EB613A0650E172(/*hidden argument*/NULL);
		SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 * L_2 = (SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 *)il2cpp_codegen_object_new(SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782_il2cpp_TypeInfo_var);
		SystemException__ctor_mA18D2EA5642C066F35CB8C965398F9A542C33B0A(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m94AE67E16D0670DA8A5CFACECFC46C6EBABF900F(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m25AA3141BA6170AE1B04F835C989E7853BBA66DA (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentException_m25AA3141BA6170AE1B04F835C989E7853BBA66DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___paramName1;
		Exception_t * L_2 = SWIGPendingException_Retrieve_mA4E2F8DDFD2B168D0373ADA978EB613A0650E172(/*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8E5D9390593273B9774DBD2E967805E8EDE668E3(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		SWIGPendingException_Set_m94AE67E16D0670DA8A5CFACECFC46C6EBABF900F(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m0792FA153D0124453E880DE9587512F012279048 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentNullException_m0792FA153D0124453E880DE9587512F012279048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0 = SWIGPendingException_Retrieve_mA4E2F8DDFD2B168D0373ADA978EB613A0650E172(/*hidden argument*/NULL);
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
		SWIGPendingException_Set_m94AE67E16D0670DA8A5CFACECFC46C6EBABF900F(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m127C121B708A3AFA2BC6FFFA17E6064EE1794274 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m127C121B708A3AFA2BC6FFFA17E6064EE1794274_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0 = SWIGPendingException_Retrieve_mA4E2F8DDFD2B168D0373ADA978EB613A0650E172(/*hidden argument*/NULL);
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
		SWIGPendingException_Set_m94AE67E16D0670DA8A5CFACECFC46C6EBABF900F(L_8, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 (ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
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
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m98A9102B00F927ACE2DB6A2533D41DAAAD910A9A (ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m9AF8A8AFAA70F4A26F2A06EBF05BE3BEE0FBA0EE (ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_m47A3113E99775BB3F4147987CFD79CD1B4EA445C (ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * __this, String_t* ___message0, String_t* ___paramName1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___message0;
	__d_args[1] = ___paramName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_mEEAAAB79E958B34628ABF0D61F837F3721DD1FF7 (ExceptionArgumentDelegate_t27CF4BF5FCDD1822BCB7007A19CE222DE5485073 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C (ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mD4ABA12107DB24B16F237BE6DE62CEAA3A58938B (ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_mD176E8BDBDFA94CA946E848B3083325783D8F0E5 (ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_m28A3002B40C5A82BCD5E1EAAD80E59E1C3FFC167 (ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * __this, String_t* ___message0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_m2EAE790B8E486C1EC4C407D31A9AD2A9E36399BB (ExceptionDelegate_t23539346CA31295D3C9E1C7C6AC9B8EF06CC790C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m94AE67E16D0670DA8A5CFACECFC46C6EBABF900F (Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Set_m94AE67E16D0670DA8A5CFACECFC46C6EBABF900F_MetadataUsageId);
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
		Exception_t * L_0 = ((SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_il2cpp_TypeInfo_var))->get_pendingException_0();
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral519E5A114736C3C9A5709C059C9D5F69D5683AB2, L_2, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A, /*hidden argument*/NULL);
		Exception_t * L_4 = ___e0;
		ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_5 = (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)il2cpp_codegen_object_new(ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F(L_5, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, SWIGPendingException_Set_m94AE67E16D0670DA8A5CFACECFC46C6EBABF900F_RuntimeMethod_var);
	}

IL_002a:
	{
		Exception_t * L_6 = ___e0;
		((SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_il2cpp_TypeInfo_var))->set_pendingException_0(L_6);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		RuntimeObject * L_9 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_9, /*hidden argument*/NULL);
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		int32_t L_10 = ((SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
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
// System.Exception Firebase.Storage.StorageInternalPINVOKE_SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_mA4E2F8DDFD2B168D0373ADA978EB613A0650E172 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Retrieve_mA4E2F8DDFD2B168D0373ADA978EB613A0650E172_MetadataUsageId);
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
		int32_t L_0 = ((SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_2 = ((SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = L_2;
		((SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		RuntimeObject * L_5 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_5, /*hidden argument*/NULL);
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		int32_t L_6 = ((SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tF1D46056CEE4AE1E243B2798851FE9E80688D9A7_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_mBE6E0D8DEEDF89A3555EE3521255D7C0A087F78C(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue = SWIGStringHelper_CreateString_mBE6E0D8DEEDF89A3555EE3521255D7C0A087F78C(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_mC6CD59ACC7490F096B70AF45E650D6A1D2DF29F7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGStringHelper__cctor_mC6CD59ACC7490F096B70AF45E650D6A1D2DF29F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_t48899BF08485B25CBFA52342EB2EEE7DB1AF3618 * L_0 = (SWIGStringDelegate_t48899BF08485B25CBFA52342EB2EEE7DB1AF3618 *)il2cpp_codegen_object_new(SWIGStringDelegate_t48899BF08485B25CBFA52342EB2EEE7DB1AF3618_il2cpp_TypeInfo_var);
		SWIGStringDelegate__ctor_m9708F5F32E48AFACE0B4FF16DFF0F9E1D2A1FF31(L_0, NULL, (intptr_t)((intptr_t)SWIGStringHelper_CreateString_mBE6E0D8DEEDF89A3555EE3521255D7C0A087F78C_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGStringHelper_t982F688E6929F8F6BC1C2B538EAEEC32CB1B4EE6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t982F688E6929F8F6BC1C2B538EAEEC32CB1B4EE6_il2cpp_TypeInfo_var))->set_stringDelegate_0(L_0);
		SWIGStringDelegate_t48899BF08485B25CBFA52342EB2EEE7DB1AF3618 * L_1 = ((SWIGStringHelper_t982F688E6929F8F6BC1C2B538EAEEC32CB1B4EE6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t982F688E6929F8F6BC1C2B538EAEEC32CB1B4EE6_il2cpp_TypeInfo_var))->get_stringDelegate_0();
		SWIGStringHelper_SWIGRegisterStringCallback_StorageInternal_mDD99E138905B6CDE425B87095A3394BBA6189674(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m2DE1E1FE9AEF66C32347E0FDC957988A9F3ABA3D (SWIGStringHelper_t982F688E6929F8F6BC1C2B538EAEEC32CB1B4EE6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_StorageInternal(Il2CppMethodPointer);
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper::SWIGRegisterStringCallback_StorageInternal(Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper_SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_StorageInternal_mDD99E138905B6CDE425B87095A3394BBA6189674 (SWIGStringDelegate_t48899BF08485B25CBFA52342EB2EEE7DB1AF3618 * ___stringDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_StorageInternal)(____stringDelegate0_marshaled);

}
// System.String Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mBE6E0D8DEEDF89A3555EE3521255D7C0A087F78C (String_t* ___cString0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_t48899BF08485B25CBFA52342EB2EEE7DB1AF3618 (SWIGStringDelegate_t48899BF08485B25CBFA52342EB2EEE7DB1AF3618 * __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper_SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m9708F5F32E48AFACE0B4FF16DFF0F9E1D2A1FF31 (SWIGStringDelegate_t48899BF08485B25CBFA52342EB2EEE7DB1AF3618 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper_SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_mB855D61A1215B4F5E17DD36FDB8D89586575B1A9 (SWIGStringDelegate_t48899BF08485B25CBFA52342EB2EEE7DB1AF3618 * __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper_SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_mF4F4E46A50882AFD9679A8CF60CE9986AA4DF22A (SWIGStringDelegate_t48899BF08485B25CBFA52342EB2EEE7DB1AF3618 * __this, String_t* ___message0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.String Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper_SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_m86B28190AB569AE02C6E10CEF66810E1DE2D6340 (SWIGStringDelegate_t48899BF08485B25CBFA52342EB2EEE7DB1AF3618 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.Storage.StorageMetadata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageMetadata__ctor_m600E41A6889794EDC6D2BED0E476E75561CF77C1 (StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageMetadata__ctor_m600E41A6889794EDC6D2BED0E476E75561CF77C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		__this->set_storageReference_1((StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
		FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_0 = FirebaseStorage_get_DefaultInstance_mD147240F80D3517AE2EB7FAC5C16C3AD38D9DC1E(/*hidden argument*/NULL);
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_1 = (MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 *)il2cpp_codegen_object_new(MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37_il2cpp_TypeInfo_var);
		MetadataInternal__ctor_m163EB636877408FF6DC6B413DA371054EFE5AA1E(L_1, L_0, /*hidden argument*/NULL);
		StorageMetadata_set_Internal_mCC1939EF5B04185494353EA6B6B031EB81517661_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageMetadata::.ctor(Firebase.Storage.StorageReference,Firebase.Storage.MetadataInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageMetadata__ctor_m0781E8038F5B5CF8E3AB57BE14711DBD170FB30A (StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * __this, StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * ___reference0, MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * ___metadata1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * L_0 = ___reference0;
		__this->set_storageReference_1(L_0);
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_1 = ___metadata1;
		StorageMetadata_set_Internal_mCC1939EF5B04185494353EA6B6B031EB81517661_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageMetadata::.ctor(Firebase.Storage.StorageMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageMetadata__ctor_mC9BE00AD42D23D9CBED6FE4D14FCAE30331F7DF3 (StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * __this, StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * ___metadataToCopy0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * L_0 = ___metadataToCopy0;
		NullCheck(L_0);
		StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * L_1 = L_0->get_storageReference_1();
		__this->set_storageReference_1(L_1);
		StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * L_2 = ___metadataToCopy0;
		NullCheck(L_2);
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_3 = StorageMetadata_get_Internal_mC892D945DE8B242B150489B70F124D565EE596EC_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_4 = MetadataInternal_Copy_m34BBA778F7DD7FBFBBB484612C8355DD356FA4EF(L_3, /*hidden argument*/NULL);
		StorageMetadata_set_Internal_mCC1939EF5B04185494353EA6B6B031EB81517661_inline(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Storage.StorageReference Firebase.Storage.StorageMetadata::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * StorageMetadata_get_Reference_mA769F6C6ED79DEE83F98188B2503B607BFA160E8 (StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * __this, const RuntimeMethod* method)
{
	{
		StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * L_0 = __this->get_storageReference_1();
		return L_0;
	}
}
// Firebase.Storage.MetadataInternal Firebase.Storage.StorageMetadata::get_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * StorageMetadata_get_Internal_mC892D945DE8B242B150489B70F124D565EE596EC (StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * __this, const RuntimeMethod* method)
{
	{
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_0 = __this->get_U3CInternalU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Firebase.Storage.StorageMetadata::set_Internal(Firebase.Storage.MetadataInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageMetadata_set_Internal_mCC1939EF5B04185494353EA6B6B031EB81517661 (StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * __this, MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * ___value0, const RuntimeMethod* method)
{
	{
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_0 = ___value0;
		__this->set_U3CInternalU3Ek__BackingField_2(L_0);
		return;
	}
}
// Firebase.Storage.MetadataInternal Firebase.Storage.StorageMetadata::GetMetadataInternal(Firebase.Storage.StorageMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * StorageMetadata_GetMetadataInternal_mD811B52102D928972BB131237C9E299309477D7B (StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * ___metadata0, const RuntimeMethod* method)
{
	MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * G_B3_0 = NULL;
	{
		StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * L_0 = ___metadata0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * L_1 = ___metadata0;
		NullCheck(L_1);
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_2 = StorageMetadata_get_Internal_mC892D945DE8B242B150489B70F124D565EE596EC_inline(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = ((MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 *)(NULL));
	}

IL_0012:
	{
		return G_B3_0;
	}
}
// Firebase.Storage.MetadataInternal Firebase.Storage.StorageMetadata::BuildMetadataInternal(Firebase.Storage.MetadataChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * StorageMetadata_BuildMetadataInternal_mB2011FC2AB953CDCFC08ABA75F9E994172D4954A (MetadataChange_t520FEEE76D402A459E59BF6498AA8D4633C468EE * ___metadataChange0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageMetadata_BuildMetadataInternal_mB2011FC2AB953CDCFC08ABA75F9E994172D4954A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MetadataChange_t520FEEE76D402A459E59BF6498AA8D4633C468EE * L_0 = ___metadataChange0;
		StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * L_1 = MetadataChange_Build_mAEC4390897293C2D7D1ECA18EEE7BA7ABA30EB33(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8_il2cpp_TypeInfo_var);
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_2 = StorageMetadata_GetMetadataInternal_mD811B52102D928972BB131237C9E299309477D7B(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Firebase.Storage.StorageMetadata::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageMetadata__cctor_m43A392064DD923C1A282CC4F834D79537647C785 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageMetadata__cctor_m43A392064DD923C1A282CC4F834D79537647C785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_mC9FEFEECD786FDE2648567E114C71A4A468A65FE((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		((StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8_StaticFields*)il2cpp_codegen_static_fields_for(StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8_il2cpp_TypeInfo_var))->set_UnixEpoch_0(L_0);
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
// System.Void Firebase.Storage.StorageReference::.ctor(Firebase.Storage.FirebaseStorage,Firebase.Storage.StorageReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageReference__ctor_mC3EB957AAE76256E3AF4E86E7FC46B2908584299 (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * ___storage0, StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * ___storageReferenceInternal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReference__ctor_mC3EB957AAE76256E3AF4E86E7FC46B2908584299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * V_0 = NULL;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_0 = ___storage0;
		__this->set_firebaseStorage_0(L_0);
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_1 = ___storageReferenceInternal1;
		StorageReference_set_Internal_m96D276C28F59B27CEFFECC7AD0D5F50EF72D5731_inline(__this, L_1, /*hidden argument*/NULL);
		FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_2 = __this->get_firebaseStorage_0();
		NullCheck(L_2);
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_3 = FirebaseStorage_get_Logger_m9D26CA2E9727C776304599A25248D7D3DD821CBA_inline(L_2, /*hidden argument*/NULL);
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_4 = (ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC *)il2cpp_codegen_object_new(ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC_il2cpp_TypeInfo_var);
		ModuleLogger__ctor_m2EF1021CCB3F686ED6F2A18242B9A245A4983B59(L_4, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_5 = V_0;
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_7 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral6D981D5A29B6779BDF8FFAE2926C30B46A580DF3, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ModuleLogger_set_Tag_m3D42E7B948CCD7A1EC648250B7EE58A489140C77_inline(L_5, L_7, /*hidden argument*/NULL);
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_8 = V_0;
		StorageReference_set_Logger_m3FDF97651E768052A1F071671137F81BE694C897_inline(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Storage.Internal.ModuleLogger Firebase.Storage.StorageReference::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * StorageReference_get_Logger_m9D25177E216309AC72509A0FEA296DFC665128DD (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, const RuntimeMethod* method)
{
	{
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_0 = __this->get_U3CLoggerU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Firebase.Storage.StorageReference::set_Logger(Firebase.Storage.Internal.ModuleLogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageReference_set_Logger_m3FDF97651E768052A1F071671137F81BE694C897 (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * ___value0, const RuntimeMethod* method)
{
	{
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_0 = ___value0;
		__this->set_U3CLoggerU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Firebase.Storage.StorageReference::get_Path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageReference_get_Path_m89592579F987196F97406E46927440C2E8F6A4E0 (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, const RuntimeMethod* method)
{
	{
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_0 = StorageReference_get_Internal_m9087E0BB3B6AE66048F5DF369F1D6BBD5B81A16E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = StorageReferenceInternal_get_FullPath_m1048F499D944E5071223E7AC7E3BB19E171D3CF6(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Firebase.Storage.StorageReference::get_Bucket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageReference_get_Bucket_m654D6AD79C5D9AE805C13651D439121E1BAD79D6 (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, const RuntimeMethod* method)
{
	{
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_0 = StorageReference_get_Internal_m9087E0BB3B6AE66048F5DF369F1D6BBD5B81A16E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = StorageReferenceInternal_get_Bucket_m0F1647EEAB7CCDBA795CAE8FFD5C7C0E6B609B0E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Firebase.Storage.StorageReference Firebase.Storage.StorageReference::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * StorageReference_Child_mA5F9C83454BA00AA35C81C280693DDDB0C12E7FB (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, String_t* ___pathString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReference_Child_mA5F9C83454BA00AA35C81C280693DDDB0C12E7FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * L_0 = __this->get_firebaseStorage_0();
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_1 = StorageReference_get_Internal_m9087E0BB3B6AE66048F5DF369F1D6BBD5B81A16E_inline(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___pathString0;
		NullCheck(L_1);
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_3 = StorageReferenceInternal_Child_mCA748A792A2FACF197C642ABD157D075FE112AA4(L_1, L_2, /*hidden argument*/NULL);
		StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * L_4 = (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D *)il2cpp_codegen_object_new(StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D_il2cpp_TypeInfo_var);
		StorageReference__ctor_mC3EB957AAE76256E3AF4E86E7FC46B2908584299(L_4, L_0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata> Firebase.Storage.StorageReference::PutBytesAsync(System.Byte[],Firebase.Storage.MetadataChange,System.IProgress`1<Firebase.Storage.UploadState>,System.Threading.CancellationToken,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t44C5AB6F81509E35FFC0C48F45E84AC860DE2DF4 * StorageReference_PutBytesAsync_mCCC953FE9499AE3231F5072DDC84DA4AC319F2DF (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, MetadataChange_t520FEEE76D402A459E59BF6498AA8D4633C468EE * ___customMetadata1, RuntimeObject* ___progressHandler2, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancelToken3, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___previousSessionUri4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReference_PutBytesAsync_mCCC953FE9499AE3231F5072DDC84DA4AC319F2DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		MetadataChange_t520FEEE76D402A459E59BF6498AA8D4633C468EE * L_1 = ___customMetadata1;
		RuntimeObject* L_2 = ___progressHandler2;
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_3 = ___cancelToken3;
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_4 = ___previousSessionUri4;
		TaskCompletionSource_1_t890D1B8924B397DFA64F64F0E55EA5EBB3CAFA5F * L_5 = (TaskCompletionSource_1_t890D1B8924B397DFA64F64F0E55EA5EBB3CAFA5F *)il2cpp_codegen_object_new(TaskCompletionSource_1_t890D1B8924B397DFA64F64F0E55EA5EBB3CAFA5F_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_mE49C69FF5B30F3C3BF2431F22EF93D61A38EC9FE(L_5, /*hidden argument*/TaskCompletionSource_1__ctor_mE49C69FF5B30F3C3BF2431F22EF93D61A38EC9FE_RuntimeMethod_var);
		Task_1_t44C5AB6F81509E35FFC0C48F45E84AC860DE2DF4 * L_6 = StorageReference_PutBytesUsingCompletionSourceAsync_m0B999C1EF0C8F86C2C5983A911CD9A2D3449E326(__this, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal> Firebase.Storage.StorageReference::PutBytesUsingMonitorControllerAsync(System.IntPtr,System.UInt32,Firebase.Storage.MetadataInternal,Firebase.Storage.MonitorControllerInternal,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * StorageReference_PutBytesUsingMonitorControllerAsync_mF44313CA13B763D1AB1ED2213AFC99CBEACF5B16 (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, intptr_t ___buffer0, uint32_t ___bufferSize1, MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * ___metadata2, MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * ___monitorController3, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReference_PutBytesUsingMonitorControllerAsync_mF44313CA13B763D1AB1ED2213AFC99CBEACF5B16_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_t3B19F98B660AD6D0EF02F853700BCFA5AC49B317 * V_0 = NULL;
	Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * V_1 = NULL;
	{
		U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_t3B19F98B660AD6D0EF02F853700BCFA5AC49B317 * L_0 = (U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_t3B19F98B660AD6D0EF02F853700BCFA5AC49B317 *)il2cpp_codegen_object_new(U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_t3B19F98B660AD6D0EF02F853700BCFA5AC49B317_il2cpp_TypeInfo_var);
		U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0__ctor_m737C3B704235586FA68EF14AE847EACCBCAB9CD5(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_t3B19F98B660AD6D0EF02F853700BCFA5AC49B317 * L_1 = V_0;
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_2 = ___monitorController3;
		NullCheck(L_1);
		L_1->set_monitorController_0(L_2);
		U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_t3B19F98B660AD6D0EF02F853700BCFA5AC49B317 * L_3 = V_0;
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_4 = ___metadata2;
		NullCheck(L_3);
		L_3->set_metadata_1(L_4);
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_5 = StorageReference_get_Internal_m9087E0BB3B6AE66048F5DF369F1D6BBD5B81A16E_inline(__this, /*hidden argument*/NULL);
		intptr_t L_6 = ___buffer0;
		uint32_t L_7 = ___bufferSize1;
		U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_t3B19F98B660AD6D0EF02F853700BCFA5AC49B317 * L_8 = V_0;
		NullCheck(L_8);
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_9 = L_8->get_metadata_1();
		U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_t3B19F98B660AD6D0EF02F853700BCFA5AC49B317 * L_10 = V_0;
		NullCheck(L_10);
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_11 = L_10->get_monitorController_0();
		NullCheck(L_5);
		Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * L_12 = StorageReferenceInternal_PutBytesUsingMonitorControllerAsync_m47B4912C8350923ABC4A11FFE6F88338E68C678A(L_5, (intptr_t)L_6, L_7, L_9, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_t3B19F98B660AD6D0EF02F853700BCFA5AC49B317 * L_13 = V_0;
		NullCheck(L_13);
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_14 = L_13->get_monitorController_0();
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_15 = ___cancellationToken4;
		NullCheck(L_14);
		MonitorControllerInternal_RegisterCancellationToken_mC7877F5A35A97CDF5D00213884ED59C9E2882A3C(L_14, L_15, /*hidden argument*/NULL);
		Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * L_16 = V_1;
		U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_t3B19F98B660AD6D0EF02F853700BCFA5AC49B317 * L_17 = V_0;
		Func_2_tAA075D43E9257FE76DA85CD9479662741AD86D03 * L_18 = (Func_2_tAA075D43E9257FE76DA85CD9479662741AD86D03 *)il2cpp_codegen_object_new(Func_2_tAA075D43E9257FE76DA85CD9479662741AD86D03_il2cpp_TypeInfo_var);
		Func_2__ctor_m67F37D83BB14E10B19E8523BF8F2AC21E1138796(L_18, L_17, (intptr_t)((intptr_t)U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_U3CU3Em__0_m18F0F4148542108F842F76D2AC6C0BED7153C8FB_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m67F37D83BB14E10B19E8523BF8F2AC21E1138796_RuntimeMethod_var);
		NullCheck(L_16);
		Task_1_t64029F49DCFC18B0FB806DE97C2EB856C0941C52 * L_19 = Task_1_ContinueWith_TisTask_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3_m0E2DF5426C3D79224A3EEA77E5C7D18FC8BFD62A(L_16, L_18, /*hidden argument*/Task_1_ContinueWith_TisTask_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3_m0E2DF5426C3D79224A3EEA77E5C7D18FC8BFD62A_RuntimeMethod_var);
		Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * L_20 = TaskExtensions_Unwrap_TisMetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37_mBBDB4E2E76AB5C792207A787BE27CDE98039DDFD(L_19, /*hidden argument*/TaskExtensions_Unwrap_TisMetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37_mBBDB4E2E76AB5C792207A787BE27CDE98039DDFD_RuntimeMethod_var);
		return L_20;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata> Firebase.Storage.StorageReference::PutBytesUsingCompletionSourceAsync(System.Byte[],Firebase.Storage.MetadataChange,System.IProgress`1<Firebase.Storage.UploadState>,System.Threading.CancellationToken,System.Uri,System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.StorageMetadata>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t44C5AB6F81509E35FFC0C48F45E84AC860DE2DF4 * StorageReference_PutBytesUsingCompletionSourceAsync_m0B999C1EF0C8F86C2C5983A911CD9A2D3449E326 (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, MetadataChange_t520FEEE76D402A459E59BF6498AA8D4633C468EE * ___customMetadata1, RuntimeObject* ___progressHandler2, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancelToken3, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___previousSessionUri4, TaskCompletionSource_1_t890D1B8924B397DFA64F64F0E55EA5EBB3CAFA5F * ___completionSource5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReference_PutBytesUsingCompletionSourceAsync_m0B999C1EF0C8F86C2C5983A911CD9A2D3449E326_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6 * V_0 = NULL;
	UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC * V_1 = NULL;
	{
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6 * L_0 = (U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6 *)il2cpp_codegen_object_new(U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6_il2cpp_TypeInfo_var);
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1__ctor_mD0FAF89652259750ACF43470737997D6DF43152E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6 * L_1 = V_0;
		TaskCompletionSource_1_t890D1B8924B397DFA64F64F0E55EA5EBB3CAFA5F * L_2 = ___completionSource5;
		NullCheck(L_1);
		L_1->set_completionSource_1(L_2);
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_3(__this);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___bytes0;
		NullCheck(L_4);
		UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC * L_5 = (UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC *)il2cpp_codegen_object_new(UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC_il2cpp_TypeInfo_var);
		UploadState__ctor_mCC6C7F976510CC7B77BA699641826EAFA604948D(L_5, __this, (((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))), /*hidden argument*/NULL);
		V_1 = L_5;
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6 * L_6 = V_0;
		RuntimeObject* L_7 = ___progressHandler2;
		UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC * L_8 = V_1;
		UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC * L_9 = V_1;
		NullCheck(L_9);
		TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * L_10 = UploadState_get_State_m35320D472CC529D3D0F1E26269FF025B81BA0596_inline(L_9, /*hidden argument*/NULL);
		TransferStateUpdater_1_t1346F4DF4E482A3BE7D6659C83E975328E7BC48B * L_11 = (TransferStateUpdater_1_t1346F4DF4E482A3BE7D6659C83E975328E7BC48B *)il2cpp_codegen_object_new(TransferStateUpdater_1_t1346F4DF4E482A3BE7D6659C83E975328E7BC48B_il2cpp_TypeInfo_var);
		TransferStateUpdater_1__ctor_mC6391AA33A67644CAE8AACBB8A6A02A3C0C0728E(L_11, __this, L_7, L_8, L_10, /*hidden argument*/TransferStateUpdater_1__ctor_mC6391AA33A67644CAE8AACBB8A6A02A3C0C0728E_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->set_transferStateUpdater_2(L_11);
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6 * L_12 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = ___bytes0;
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_14 = GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E((RuntimeObject *)(RuntimeObject *)L_13, 3, /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_bytesHandle_0(L_14);
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6 * L_15 = V_0;
		NullCheck(L_15);
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_16 = L_15->get_address_of_bytesHandle_0();
		intptr_t L_17 = GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_16, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = ___bytes0;
		NullCheck(L_18);
		MetadataChange_t520FEEE76D402A459E59BF6498AA8D4633C468EE * L_19 = ___customMetadata1;
		IL2CPP_RUNTIME_CLASS_INIT(StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8_il2cpp_TypeInfo_var);
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_20 = StorageMetadata_BuildMetadataInternal_mB2011FC2AB953CDCFC08ABA75F9E994172D4954A(L_19, /*hidden argument*/NULL);
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6 * L_21 = V_0;
		NullCheck(L_21);
		TransferStateUpdater_1_t1346F4DF4E482A3BE7D6659C83E975328E7BC48B * L_22 = L_21->get_transferStateUpdater_2();
		NullCheck(L_22);
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_23 = TransferStateUpdater_1_get_MonitorController_m3B0043D629F0A6F2BC771BCCBE54167D67BDB635_inline(L_22, /*hidden argument*/TransferStateUpdater_1_get_MonitorController_m3B0043D629F0A6F2BC771BCCBE54167D67BDB635_RuntimeMethod_var);
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_24 = ___cancelToken3;
		Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * L_25 = StorageReference_PutBytesUsingMonitorControllerAsync_mF44313CA13B763D1AB1ED2213AFC99CBEACF5B16(__this, (intptr_t)L_17, (((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))), L_20, L_23, L_24, /*hidden argument*/NULL);
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6 * L_26 = V_0;
		Action_1_tA9A642AF9CC38CF5318AE5A2A9A3C22347AF10F4 * L_27 = (Action_1_tA9A642AF9CC38CF5318AE5A2A9A3C22347AF10F4 *)il2cpp_codegen_object_new(Action_1_tA9A642AF9CC38CF5318AE5A2A9A3C22347AF10F4_il2cpp_TypeInfo_var);
		Action_1__ctor_m0F5D615508491623DF2A558E055B23C9BE374CEF(L_27, L_26, (intptr_t)((intptr_t)U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_U3CU3Em__0_m23E88E19097E82DCDA3AEB5910CE32A82F2377B9_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m0F5D615508491623DF2A558E055B23C9BE374CEF_RuntimeMethod_var);
		NullCheck(L_25);
		Task_1_ContinueWith_mBE56EC62DF42D8453BA00DC3BCEFCAEA277786B2(L_25, L_27, /*hidden argument*/Task_1_ContinueWith_mBE56EC62DF42D8453BA00DC3BCEFCAEA277786B2_RuntimeMethod_var);
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6 * L_28 = V_0;
		NullCheck(L_28);
		TaskCompletionSource_1_t890D1B8924B397DFA64F64F0E55EA5EBB3CAFA5F * L_29 = L_28->get_completionSource_1();
		NullCheck(L_29);
		Task_1_t44C5AB6F81509E35FFC0C48F45E84AC860DE2DF4 * L_30 = TaskCompletionSource_1_get_Task_mAC95BEE381D29EFE149E6469F9F8499B36D3ECB9_inline(L_29, /*hidden argument*/TaskCompletionSource_1_get_Task_mAC95BEE381D29EFE149E6469F9F8499B36D3ECB9_RuntimeMethod_var);
		return L_30;
	}
}
// System.Threading.Tasks.Task`1<System.Uri> Firebase.Storage.StorageReference::GetDownloadUrlAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB1F9B3B5D25AD547A77258C869D2EC0ACED9EB78 * StorageReference_GetDownloadUrlAsync_mB081DC843002D1B1BF109A3AC1909CF8CEC0B65E (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReference_GetDownloadUrlAsync_mB081DC843002D1B1BF109A3AC1909CF8CEC0B65E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_tDF77093ECF09B51AB6CAE83C2EFB4843381F64BF * V_0 = NULL;
	{
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_tDF77093ECF09B51AB6CAE83C2EFB4843381F64BF * L_0 = (U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_tDF77093ECF09B51AB6CAE83C2EFB4843381F64BF *)il2cpp_codegen_object_new(U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_tDF77093ECF09B51AB6CAE83C2EFB4843381F64BF_il2cpp_TypeInfo_var);
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA__ctor_m16DB56C434E09868CD742D345FB80162E8D5233F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_tDF77093ECF09B51AB6CAE83C2EFB4843381F64BF * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_1(__this);
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_tDF77093ECF09B51AB6CAE83C2EFB4843381F64BF * L_2 = V_0;
		TaskCompletionSource_1_t4D9BCF80416BB1F8C888F6BBD375E56BDD7ED75B * L_3 = (TaskCompletionSource_1_t4D9BCF80416BB1F8C888F6BBD375E56BDD7ED75B *)il2cpp_codegen_object_new(TaskCompletionSource_1_t4D9BCF80416BB1F8C888F6BBD375E56BDD7ED75B_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m082F89F6C3CFFA23EC0FBABB3220180EDB06080A(L_3, /*hidden argument*/TaskCompletionSource_1__ctor_m082F89F6C3CFFA23EC0FBABB3220180EDB06080A_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_result_0(L_3);
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_4 = StorageReference_get_Internal_m9087E0BB3B6AE66048F5DF369F1D6BBD5B81A16E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * L_5 = StorageReferenceInternal_GetDownloadUrlAsync_mA2F1B23CFECD0F2EC0A82F0E142A03B04FB2A904(L_4, /*hidden argument*/NULL);
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_tDF77093ECF09B51AB6CAE83C2EFB4843381F64BF * L_6 = V_0;
		Action_1_t91A1F519E78C032DF9207397CD162424F217B4B3 * L_7 = (Action_1_t91A1F519E78C032DF9207397CD162424F217B4B3 *)il2cpp_codegen_object_new(Action_1_t91A1F519E78C032DF9207397CD162424F217B4B3_il2cpp_TypeInfo_var);
		Action_1__ctor_m0651406FD57C9150AE4BE12B5E0DD14AD32DE5C7(L_7, L_6, (intptr_t)((intptr_t)U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_U3CU3Em__0_mB1235F830620C932F4136928675F37DBA4F59B17_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m0651406FD57C9150AE4BE12B5E0DD14AD32DE5C7_RuntimeMethod_var);
		NullCheck(L_5);
		Task_1_ContinueWith_mFB0558DDC4C57A255A0FE8CCDD83D8D91CC72210(L_5, L_7, /*hidden argument*/Task_1_ContinueWith_mFB0558DDC4C57A255A0FE8CCDD83D8D91CC72210_RuntimeMethod_var);
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_tDF77093ECF09B51AB6CAE83C2EFB4843381F64BF * L_8 = V_0;
		NullCheck(L_8);
		TaskCompletionSource_1_t4D9BCF80416BB1F8C888F6BBD375E56BDD7ED75B * L_9 = L_8->get_result_0();
		NullCheck(L_9);
		Task_1_tB1F9B3B5D25AD547A77258C869D2EC0ACED9EB78 * L_10 = TaskCompletionSource_1_get_Task_m8BAA32E1A3144DC2A11444F413A0080A52B81121_inline(L_9, /*hidden argument*/TaskCompletionSource_1_get_Task_m8BAA32E1A3144DC2A11444F413A0080A52B81121_RuntimeMethod_var);
		return L_10;
	}
}
// System.String Firebase.Storage.StorageReference::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageReference_ToString_m7AB0807C5CA48A25B8B96C45906A087670BEE7E6 (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReference_ToString_m7AB0807C5CA48A25B8B96C45906A087670BEE7E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = StorageReference_get_Bucket_m654D6AD79C5D9AE805C13651D439121E1BAD79D6(__this, /*hidden argument*/NULL);
		String_t* L_1 = StorageReference_get_Path_m89592579F987196F97406E46927440C2E8F6A4E0(__this, /*hidden argument*/NULL);
		String_t* L_2 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral998B5A060A14B8EC491A61D6E40F08F9E85C06A6, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Firebase.Storage.StorageReference::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StorageReference_Equals_mBAE5638BF34B2BB8549B7D8EBC5C4C7BDCA5A05F (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReference_Equals_mBAE5638BF34B2BB8549B7D8EBC5C4C7BDCA5A05F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		if (((StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D *)IsInstSealed((RuntimeObject*)L_0, StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = ((StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D *)CastclassSealed((RuntimeObject*)L_1, StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D_il2cpp_TypeInfo_var));
		StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_3);
		bool L_5 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 Firebase.Storage.StorageReference::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StorageReference_GetHashCode_mEC5A65E65FD3D783E09368AA4C5A98F84EAB903A (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// Firebase.Storage.StorageReferenceInternal Firebase.Storage.StorageReference::get_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * StorageReference_get_Internal_m9087E0BB3B6AE66048F5DF369F1D6BBD5B81A16E (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, const RuntimeMethod* method)
{
	{
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_0 = __this->get_U3CInternalU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Firebase.Storage.StorageReference::set_Internal(Firebase.Storage.StorageReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageReference_set_Internal_m96D276C28F59B27CEFFECC7AD0D5F50EF72D5731 (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * ___value0, const RuntimeMethod* method)
{
	{
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_0 = ___value0;
		__this->set_U3CInternalU3Ek__BackingField_2(L_0);
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
// System.Void Firebase.Storage.StorageReference_<GetDownloadUrlAsync>c__AnonStoreyA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA__ctor_m16DB56C434E09868CD742D345FB80162E8D5233F (U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_tDF77093ECF09B51AB6CAE83C2EFB4843381F64BF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageReference_<GetDownloadUrlAsync>c__AnonStoreyA::<>m__0(System.Threading.Tasks.Task`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_U3CU3Em__0_mB1235F830620C932F4136928675F37DBA4F59B17 (U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_tDF77093ECF09B51AB6CAE83C2EFB4843381F64BF * __this, Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_U3CU3Em__0_mB1235F830620C932F4136928675F37DBA4F59B17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_tF8EF0AC8B42FE4CAC7ADF32E0FCDA3089AAC6D12 * V_0 = NULL;
	{
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_tF8EF0AC8B42FE4CAC7ADF32E0FCDA3089AAC6D12 * L_0 = (U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_tF8EF0AC8B42FE4CAC7ADF32E0FCDA3089AAC6D12 *)il2cpp_codegen_object_new(U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_tF8EF0AC8B42FE4CAC7ADF32E0FCDA3089AAC6D12_il2cpp_TypeInfo_var);
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB__ctor_m70951B86AF105EDCAF467FEDFB9E774822E43F9B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_tF8EF0AC8B42FE4CAC7ADF32E0FCDA3089AAC6D12 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3Ef__refU2410_1(__this);
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_tF8EF0AC8B42FE4CAC7ADF32E0FCDA3089AAC6D12 * L_2 = V_0;
		Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * L_3 = ___task0;
		NullCheck(L_2);
		L_2->set_task_0(L_3);
		StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * L_4 = __this->get_U24this_1();
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_tF8EF0AC8B42FE4CAC7ADF32E0FCDA3089AAC6D12 * L_5 = V_0;
		NullCheck(L_5);
		Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * L_6 = L_5->get_task_0();
		TaskCompletionSource_1_t4D9BCF80416BB1F8C888F6BBD375E56BDD7ED75B * L_7 = __this->get_result_0();
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_tF8EF0AC8B42FE4CAC7ADF32E0FCDA3089AAC6D12 * L_8 = V_0;
		Func_1_tB65A59385155168BA8513081365F0C8F6E71EB27 * L_9 = (Func_1_tB65A59385155168BA8513081365F0C8F6E71EB27 *)il2cpp_codegen_object_new(Func_1_tB65A59385155168BA8513081365F0C8F6E71EB27_il2cpp_TypeInfo_var);
		Func_1__ctor_m2E2F7F3681DB13DD5AB6DF45FA0E517F4F5BC94E(L_9, L_8, (intptr_t)((intptr_t)U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_U3CU3Em__0_m083D391CD73E9A54EEC030AC441410588030AD6E_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m2E2F7F3681DB13DD5AB6DF45FA0E517F4F5BC94E_RuntimeMethod_var);
		NullCheck(L_4);
		StorageReference_CompleteTask_TisString_t_TisUri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_mE4B31C8265479A521A7B788AC65965DB7408E171(L_4, L_6, L_7, L_9, _stringLiteralD676EF1ECACC5CAA601B0C0485CB64D72C7A2FF0, (bool)1, /*hidden argument*/StorageReference_CompleteTask_TisString_t_TisUri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_mE4B31C8265479A521A7B788AC65965DB7408E171_RuntimeMethod_var);
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
// System.Void Firebase.Storage.StorageReference_<GetDownloadUrlAsync>c__AnonStoreyA_<GetDownloadUrlAsync>c__AnonStoreyB::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB__ctor_m70951B86AF105EDCAF467FEDFB9E774822E43F9B (U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_tF8EF0AC8B42FE4CAC7ADF32E0FCDA3089AAC6D12 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Uri Firebase.Storage.StorageReference_<GetDownloadUrlAsync>c__AnonStoreyA_<GetDownloadUrlAsync>c__AnonStoreyB::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_U3CU3Em__0_m083D391CD73E9A54EEC030AC441410588030AD6E (U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_tF8EF0AC8B42FE4CAC7ADF32E0FCDA3089AAC6D12 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_U3CU3Em__0_m083D391CD73E9A54EEC030AC441410588030AD6E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * L_0 = __this->get_task_0();
		NullCheck(L_0);
		String_t* L_1 = Task_1_get_Result_mD4F484A4DEF45AD6EAF4B2025F086977F8632350(L_0, /*hidden argument*/Task_1_get_Result_mD4F484A4DEF45AD6EAF4B2025F086977F8632350_RuntimeMethod_var);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		return (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E *)NULL;
	}

IL_0019:
	{
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7_il2cpp_TypeInfo_var);
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_5 = FirebaseStorage_ConstructFormattedUri_m1158395057D88A619A93A8CE9D5175C0F404A442(L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1__ctor_mD0FAF89652259750ACF43470737997D6DF43152E (U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1::<>m__0(System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_U3CU3Em__0_m23E88E19097E82DCDA3AEB5910CE32A82F2377B9 (U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6 * __this, Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_U3CU3Em__0_m23E88E19097E82DCDA3AEB5910CE32A82F2377B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_tE72DD13D78B7AA4BC7CCEB2449AFCD2D060815CD * V_0 = NULL;
	{
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_tE72DD13D78B7AA4BC7CCEB2449AFCD2D060815CD * L_0 = (U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_tE72DD13D78B7AA4BC7CCEB2449AFCD2D060815CD *)il2cpp_codegen_object_new(U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_tE72DD13D78B7AA4BC7CCEB2449AFCD2D060815CD_il2cpp_TypeInfo_var);
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2__ctor_m67C0CDFEB683A6D157DA8BDE67963299D160C9CE(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_tE72DD13D78B7AA4BC7CCEB2449AFCD2D060815CD * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3Ef__refU241_1(__this);
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_tE72DD13D78B7AA4BC7CCEB2449AFCD2D060815CD * L_2 = V_0;
		Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * L_3 = ___task0;
		NullCheck(L_2);
		L_2->set_task_0(L_3);
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_4 = __this->get_address_of_bytesHandle_0();
		GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_4, /*hidden argument*/NULL);
		StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * L_5 = __this->get_U24this_3();
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_tE72DD13D78B7AA4BC7CCEB2449AFCD2D060815CD * L_6 = V_0;
		NullCheck(L_6);
		Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * L_7 = L_6->get_task_0();
		TaskCompletionSource_1_t890D1B8924B397DFA64F64F0E55EA5EBB3CAFA5F * L_8 = __this->get_completionSource_1();
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_tE72DD13D78B7AA4BC7CCEB2449AFCD2D060815CD * L_9 = V_0;
		Func_1_t778EB7B16100D642FF56D8271B366EFC64995FB0 * L_10 = (Func_1_t778EB7B16100D642FF56D8271B366EFC64995FB0 *)il2cpp_codegen_object_new(Func_1_t778EB7B16100D642FF56D8271B366EFC64995FB0_il2cpp_TypeInfo_var);
		Func_1__ctor_mC1671874C8D51F1F5C09CD6E8A1A9A22C8786B4F(L_10, L_9, (intptr_t)((intptr_t)U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_U3CU3Em__0_m907831D9A0DAF5C26CAFDE1743236AB424671EFB_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_mC1671874C8D51F1F5C09CD6E8A1A9A22C8786B4F_RuntimeMethod_var);
		NullCheck(L_5);
		StorageReference_CompleteTask_TisMetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37_TisStorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8_m935AD2904E3C1EAE7106E5D2F4A58B0EF86590C6(L_5, L_7, L_8, L_10, _stringLiteral43FC5CF0ADD905E0133A3CC43E5BE02D76167BA3, (bool)1, /*hidden argument*/StorageReference_CompleteTask_TisMetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37_TisStorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8_m935AD2904E3C1EAE7106E5D2F4A58B0EF86590C6_RuntimeMethod_var);
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
// System.Void Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1_<PutBytesUsingCompletionSourceAsync>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2__ctor_m67C0CDFEB683A6D157DA8BDE67963299D160C9CE (U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_tE72DD13D78B7AA4BC7CCEB2449AFCD2D060815CD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Storage.StorageMetadata Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1_<PutBytesUsingCompletionSourceAsync>c__AnonStorey2::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_U3CU3Em__0_m907831D9A0DAF5C26CAFDE1743236AB424671EFB (U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_tE72DD13D78B7AA4BC7CCEB2449AFCD2D060815CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_U3CU3Em__0_m907831D9A0DAF5C26CAFDE1743236AB424671EFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * V_0 = NULL;
	{
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6 * L_0 = __this->get_U3CU3Ef__refU241_1();
		NullCheck(L_0);
		StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * L_1 = L_0->get_U24this_3();
		Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * L_2 = __this->get_task_0();
		NullCheck(L_2);
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_3 = Task_1_get_Result_mC69B4ADFBAACBA0F764A10FEAF868D29A084E958(L_2, /*hidden argument*/Task_1_get_Result_mC69B4ADFBAACBA0F764A10FEAF868D29A084E958_RuntimeMethod_var);
		StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * L_4 = (StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 *)il2cpp_codegen_object_new(StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8_il2cpp_TypeInfo_var);
		StorageMetadata__ctor_m0781E8038F5B5CF8E3AB57BE14711DBD170FB30A(L_4, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t1AE964D092C17B22B671972D66B3B80C8DEB7DC6 * L_5 = __this->get_U3CU3Ef__refU241_1();
		NullCheck(L_5);
		TransferStateUpdater_1_t1346F4DF4E482A3BE7D6659C83E975328E7BC48B * L_6 = L_5->get_transferStateUpdater_2();
		StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * L_7 = V_0;
		NullCheck(L_6);
		TransferStateUpdater_1_SetMetadata_mDEA1E9A5251F5FB55D65D709C9F0F1C2DB3D7D6F(L_6, L_7, /*hidden argument*/TransferStateUpdater_1_SetMetadata_mDEA1E9A5251F5FB55D65D709C9F0F1C2DB3D7D6F_RuntimeMethod_var);
		StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * L_8 = V_0;
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
// System.Void Firebase.Storage.StorageReference_<PutBytesUsingMonitorControllerAsync>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0__ctor_m737C3B704235586FA68EF14AE847EACCBCAB9CD5 (U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_t3B19F98B660AD6D0EF02F853700BCFA5AC49B317 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal> Firebase.Storage.StorageReference_<PutBytesUsingMonitorControllerAsync>c__AnonStorey0::<>m__0(System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_U3CU3Em__0_m18F0F4148542108F842F76D2AC6C0BED7153C8FB (U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_t3B19F98B660AD6D0EF02F853700BCFA5AC49B317 * __this, Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * ___completedTask0, const RuntimeMethod* method)
{
	{
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_0 = __this->get_monitorController_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Storage.MonitorControllerInternal::Dispose() */, L_0);
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_1 = __this->get_metadata_1();
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_2 = __this->get_metadata_1();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Storage.MetadataInternal::Dispose() */, L_2);
	}

IL_0021:
	{
		Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * L_3 = ___completedTask0;
		return L_3;
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
// System.Void Firebase.Storage.StorageReference_TaskCompletionStatus::.ctor(System.Threading.Tasks.Task,System.String,Firebase.Storage.Internal.ModuleLogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionStatus__ctor_mD4994DEE7F0A58A5125BA30D234957A84B49CF93 (TaskCompletionStatus_tBB1DB69F0E6FF1E8E4A5A89F863B03E761DEE105 * __this, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___task0, String_t* ___operationDescription1, ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * ___logger2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskCompletionStatus__ctor_mD4994DEE7F0A58A5125BA30D234957A84B49CF93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * V_0 = NULL;
	StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * G_B7_0 = NULL;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_0 = ___task0;
		NullCheck(L_0);
		bool L_1 = Task_get_IsCompleted_mA675F47CE1DBD1948BDC9215DCAE93F07FC32E19(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_2 = ___task0;
		NullCheck(L_2);
		bool L_3 = Task_get_IsFaulted_m7337D2694F4BF380C5B8893B4A924D7F0E762A48(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0041;
		}
	}
	{
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_4 = ___task0;
		NullCheck(L_4);
		bool L_5 = Task_get_IsCanceled_m42A47FCA2C6F33308A08C92C8489E802448F6F42(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		TaskCompletionStatus_set_IsSuccessful_m3F5BAA5B4F878466CE1679C61E18BA3F8031C50C_inline(__this, (bool)1, /*hidden argument*/NULL);
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_6 = ___logger2;
		String_t* L_7 = ___operationDescription1;
		String_t* L_8 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralAD5D89FE83214FE497DA9F70F0B6CF9CEBB6247B, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ModuleLogger_LogMessage_m5116219D021DBF1651FAB90D6E244D7B473D1ADD(L_6, 1, L_8, /*hidden argument*/NULL);
		return;
	}

IL_0041:
	{
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_9 = ___task0;
		NullCheck(L_9);
		bool L_10 = Task_get_IsFaulted_m7337D2694F4BF380C5B8893B4A924D7F0E762A48(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005c;
		}
	}
	{
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_11 = ___task0;
		NullCheck(L_11);
		AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E * L_12 = Task_get_Exception_mA61AAD3E52CBEB631D1956217B521456E7960B95(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648_il2cpp_TypeInfo_var);
		StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * L_13 = StorageException_CreateFromException_m2FF23B3F13BFF625A5580AB92D4A5CC74E864032(L_12, /*hidden argument*/NULL);
		G_B7_0 = L_13;
		goto IL_005d;
	}

IL_005c:
	{
		G_B7_0 = ((StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 *)(NULL));
	}

IL_005d:
	{
		V_0 = G_B7_0;
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_14 = ___task0;
		NullCheck(L_14);
		bool L_15 = Task_get_IsCanceled_m42A47FCA2C6F33308A08C92C8489E802448F6F42(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_007f;
		}
	}
	{
		StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * L_16 = V_0;
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = StorageException_get_ErrorCode_mFDEECBE336A8E1A466730F9B7A61ED819A77868E_inline(L_17, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)-13040)))))
		{
			goto IL_0099;
		}
	}

IL_007f:
	{
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_19 = ___logger2;
		String_t* L_20 = ___operationDescription1;
		String_t* L_21 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral57E983BEE60292E03F1CAB84EACA653316AAC837, L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		ModuleLogger_LogMessage_m5116219D021DBF1651FAB90D6E244D7B473D1ADD(L_19, 1, L_21, /*hidden argument*/NULL);
		TaskCompletionStatus_set_IsCanceled_m033C9938C78A41DABAC39A6549DD23FF27A6DB1E_inline(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}

IL_0099:
	{
		StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * L_22 = V_0;
		TaskCompletionStatus_set_Exception_m1D3A8F600700B33D2C7E099FEC39DF2254188E8C_inline(__this, L_22, /*hidden argument*/NULL);
		Exception_t * L_23 = TaskCompletionStatus_get_Exception_m75B03EE058B83412D20D94AE477F5AE823AE9E08_inline(__this, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00c9;
		}
	}
	{
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_24 = ___logger2;
		String_t* L_25 = ___operationDescription1;
		Exception_t * L_26 = TaskCompletionStatus_get_Exception_m75B03EE058B83412D20D94AE477F5AE823AE9E08_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		String_t* L_27 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_26);
		String_t* L_28 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralC1D3A52ED730208C622DFED53CB157FD95EAF554, L_25, L_27, /*hidden argument*/NULL);
		NullCheck(L_24);
		ModuleLogger_LogMessage_m5116219D021DBF1651FAB90D6E244D7B473D1ADD(L_24, 1, L_28, /*hidden argument*/NULL);
		return;
	}

IL_00c9:
	{
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_29 = ___logger2;
		String_t* L_30 = ___operationDescription1;
		String_t* L_31 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral75D7DFBED3F85613FE5CC706DDB728A795563917, L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		ModuleLogger_LogMessage_m5116219D021DBF1651FAB90D6E244D7B473D1ADD(L_29, 1, L_31, /*hidden argument*/NULL);
		String_t* L_32 = ___operationDescription1;
		String_t* L_33 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral45C86F7B7A894ACC5C963381F0A25D32D2B6D5C5, L_32, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_34 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_34, L_33, /*hidden argument*/NULL);
		TaskCompletionStatus_set_Exception_m1D3A8F600700B33D2C7E099FEC39DF2254188E8C_inline(__this, L_34, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Firebase.Storage.StorageReference_TaskCompletionStatus::get_IsSuccessful()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionStatus_get_IsSuccessful_m36089DCB0DB73FD66AD33C0907754AB60CEDB909 (TaskCompletionStatus_tBB1DB69F0E6FF1E8E4A5A89F863B03E761DEE105 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsSuccessfulU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Firebase.Storage.StorageReference_TaskCompletionStatus::set_IsSuccessful(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionStatus_set_IsSuccessful_m3F5BAA5B4F878466CE1679C61E18BA3F8031C50C (TaskCompletionStatus_tBB1DB69F0E6FF1E8E4A5A89F863B03E761DEE105 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsSuccessfulU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean Firebase.Storage.StorageReference_TaskCompletionStatus::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionStatus_get_IsCanceled_m2375832AAE94F8EBBB66B0713B5C606F4DB0027A (TaskCompletionStatus_tBB1DB69F0E6FF1E8E4A5A89F863B03E761DEE105 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsCanceledU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Firebase.Storage.StorageReference_TaskCompletionStatus::set_IsCanceled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionStatus_set_IsCanceled_m033C9938C78A41DABAC39A6549DD23FF27A6DB1E (TaskCompletionStatus_tBB1DB69F0E6FF1E8E4A5A89F863B03E761DEE105 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsCanceledU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Exception Firebase.Storage.StorageReference_TaskCompletionStatus::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * TaskCompletionStatus_get_Exception_m75B03EE058B83412D20D94AE477F5AE823AE9E08 (TaskCompletionStatus_tBB1DB69F0E6FF1E8E4A5A89F863B03E761DEE105 * __this, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = __this->get_U3CExceptionU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Firebase.Storage.StorageReference_TaskCompletionStatus::set_Exception(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionStatus_set_Exception_m1D3A8F600700B33D2C7E099FEC39DF2254188E8C (TaskCompletionStatus_tBB1DB69F0E6FF1E8E4A5A89F863B03E761DEE105 * __this, Exception_t * ___value0, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = ___value0;
		__this->set_U3CExceptionU3Ek__BackingField_2(L_0);
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
// System.Void Firebase.Storage.StorageReferenceInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageReferenceInternal__ctor_m433C48D69FEEF71B510E99DA3992B1FAD9E6D6ED (StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
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
// System.Runtime.InteropServices.HandleRef Firebase.Storage.StorageReferenceInternal::getCPtr(Firebase.Storage.StorageReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  StorageReferenceInternal_getCPtr_m5DA0100FAF2E0E5BC78E7CAF7E2488F2474472C1 (StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReferenceInternal_getCPtr_m5DA0100FAF2E0E5BC78E7CAF7E2488F2474472C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_0 = ___obj0;
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
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_3 = L_2->get_swigCPtr_0();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Storage.StorageReferenceInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageReferenceInternal_Finalize_m4D84586FDEB821EE032966D8F3948747B3B5FB8F (StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * __this, const RuntimeMethod* method)
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
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Storage.StorageReferenceInternal::Dispose() */, __this);
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
// System.Void Firebase.Storage.StorageReferenceInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageReferenceInternal_Dispose_m5F0508A586AA4D3EAE7831B55C01233636670F8F (StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReferenceInternal_Dispose_m5F0508A586AA4D3EAE7831B55C01233636670F8F_MetadataUsageId);
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
			IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
			StorageInternalPINVOKE_Firebase_Storage_delete_StorageReferenceInternal_mB500600E002DDAE585150A78075D2256A79472EC(L_6, /*hidden argument*/NULL);
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
// Firebase.Storage.StorageReferenceInternal Firebase.Storage.StorageReferenceInternal::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * StorageReferenceInternal_Child_mCA748A792A2FACF197C642ABD157D075FE112AA4 (StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReferenceInternal_Child_mCA748A792A2FACF197C642ABD157D075FE112AA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		intptr_t L_2 = StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_Child__SWIG_0_m40BB5050989ABF186A9B64EE338646007286704C(L_0, L_1, /*hidden argument*/NULL);
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_3 = (StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 *)il2cpp_codegen_object_new(StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383_il2cpp_TypeInfo_var);
		StorageReferenceInternal__ctor_m433C48D69FEEF71B510E99DA3992B1FAD9E6D6ED(L_3, (intptr_t)L_2, (bool)1, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		Exception_t * L_5 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, StorageReferenceInternal_Child_mCA748A792A2FACF197C642ABD157D075FE112AA4_RuntimeMethod_var);
	}

IL_0023:
	{
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_6 = V_0;
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.String> Firebase.Storage.StorageReferenceInternal::GetDownloadUrlAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * StorageReferenceInternal_GetDownloadUrlAsync_mA2F1B23CFECD0F2EC0A82F0E142A03B04FB2A904 (StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReferenceInternal_GetDownloadUrlAsync_mA2F1B23CFECD0F2EC0A82F0E142A03B04FB2A904_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		intptr_t L_1 = StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_GetDownloadUrl_mD3D7580EF0456CA9CA0EC9B875C6B2996EDD4DD3(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, StorageReferenceInternal_GetDownloadUrlAsync_mA2F1B23CFECD0F2EC0A82F0E142A03B04FB2A904_RuntimeMethod_var);
	}

IL_001c:
	{
		intptr_t L_4 = V_0;
		FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * L_5 = (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C *)il2cpp_codegen_object_new(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var);
		FutureString__ctor_m061489D0A1588D9DB38616FAB55A0BAD34485991(L_5, (intptr_t)L_4, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var);
		Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * L_6 = FutureString_GetTask_mE15192AC5EC101E6836F1F806E3CD9B91950B647(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String Firebase.Storage.StorageReferenceInternal::get_Bucket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageReferenceInternal_get_Bucket_m0F1647EEAB7CCDBA795CAE8FFD5C7C0E6B609B0E (StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReferenceInternal_get_Bucket_m0F1647EEAB7CCDBA795CAE8FFD5C7C0E6B609B0E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		String_t* L_1 = StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_Bucket_get_m4E54A784F1B95B246A391C70D0EC38E698870024(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, StorageReferenceInternal_get_Bucket_m0F1647EEAB7CCDBA795CAE8FFD5C7C0E6B609B0E_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Storage.StorageReferenceInternal::get_FullPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageReferenceInternal_get_FullPath_m1048F499D944E5071223E7AC7E3BB19E171D3CF6 (StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReferenceInternal_get_FullPath_m1048F499D944E5071223E7AC7E3BB19E171D3CF6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		String_t* L_1 = StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_FullPath_get_m8E65D03D5AE23B5FE329EB81A4013FAFFA9719BA(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, StorageReferenceInternal_get_FullPath_m1048F499D944E5071223E7AC7E3BB19E171D3CF6_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Firebase.Storage.StorageReferenceInternal::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StorageReferenceInternal_get_IsValid_mF15A79A12CA432B0D5646FC284298F71301CBA4F (StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReferenceInternal_get_IsValid_mF15A79A12CA432B0D5646FC284298F71301CBA4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		bool L_1 = StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_IsValid_get_m4CAF166DAF5E51628084F68924C24E37A7644F86(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, StorageReferenceInternal_get_IsValid_mF15A79A12CA432B0D5646FC284298F71301CBA4F_RuntimeMethod_var);
	}

IL_001c:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal> Firebase.Storage.StorageReferenceInternal::PutBytesUsingMonitorControllerAsync(System.IntPtr,System.UInt32,Firebase.Storage.MetadataInternal,Firebase.Storage.MonitorControllerInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * StorageReferenceInternal_PutBytesUsingMonitorControllerAsync_m47B4912C8350923ABC4A11FFE6F88338E68C678A (StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * __this, intptr_t ___buffer0, uint32_t ___buffer_size1, MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * ___metadata2, MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * ___monitor_controller3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReferenceInternal_PutBytesUsingMonitorControllerAsync_m47B4912C8350923ABC4A11FFE6F88338E68C678A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		intptr_t L_1 = ___buffer0;
		uint32_t L_2 = ___buffer_size1;
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_3 = ___metadata2;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_4 = MetadataInternal_getCPtr_m570EF283EEB2B5BFEBDF5381321B702286B2065E(L_3, /*hidden argument*/NULL);
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_5 = ___monitor_controller3;
		IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC_il2cpp_TypeInfo_var);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_6 = MonitorControllerInternal_getCPtr_m9D6692BB9D00DF5DB6B878E9F969D3E6FF2406C5(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_t25B28CD905C18269CED27E64CC7DA4F4693A41B7_il2cpp_TypeInfo_var);
		intptr_t L_7 = StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_PutBytesUsingMonitorController_mF80336F7EF7013EED6D9E38FD3BDAB96771DC652(L_0, (intptr_t)L_1, L_2, L_4, L_6, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_7;
		bool L_8 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002b;
		}
	}
	{
		Exception_t * L_9 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, StorageReferenceInternal_PutBytesUsingMonitorControllerAsync_m47B4912C8350923ABC4A11FFE6F88338E68C678A_RuntimeMethod_var);
	}

IL_002b:
	{
		intptr_t L_10 = V_0;
		Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 * L_11 = (Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028 *)il2cpp_codegen_object_new(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var);
		Future_StorageMetadata__ctor_m9DCE43063A0FC76DD9F007F3E63393E9B8B23677(L_11, (intptr_t)L_10, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Future_StorageMetadata_tB9BEAC73E95A000720C1BC528E33C2A8626D2028_il2cpp_TypeInfo_var);
		Task_1_t7262BE843CFCC58853D4FF9AC524B27703956CB3 * L_12 = Future_StorageMetadata_GetTask_m32211C2AEFFA3E76CB4CEBC4133992B80F61FCD3(L_11, /*hidden argument*/NULL);
		return L_12;
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
// System.Void Firebase.Storage.UploadState::.ctor(Firebase.Storage.StorageReference,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadState__ctor_mCC6C7F976510CC7B77BA699641826EAFA604948D (UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC * __this, StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * ___reference0, int64_t ___totalByteCount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UploadState__ctor_mCC6C7F976510CC7B77BA699641826EAFA604948D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * V_0 = NULL;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * L_0 = ___reference0;
		TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * L_1 = (TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D *)il2cpp_codegen_object_new(TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D_il2cpp_TypeInfo_var);
		TransferState__ctor_m46E9BFEAD455D3764BB0D7F36C338A53846746F4(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * L_2 = V_0;
		int64_t L_3 = ___totalByteCount1;
		NullCheck(L_2);
		TransferState_set_TotalByteCount_m269339181396E26CFCFC0A951357AD3A9E63F09C_inline(L_2, L_3, /*hidden argument*/NULL);
		TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * L_4 = V_0;
		UploadState_set_State_mDA473FDD5622DBA272E4552DE741306AD4D40022_inline(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Int64 Firebase.Storage.UploadState::get_BytesTransferred()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UploadState_get_BytesTransferred_mC34A0E858A2246EEF72274A33DB92E261FE462EA (UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC * __this, const RuntimeMethod* method)
{
	{
		TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * L_0 = UploadState_get_State_m35320D472CC529D3D0F1E26269FF025B81BA0596_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int64_t L_1 = TransferState_get_BytesTransferred_m65A05CED6F030394271641B7A6EFA8E0A13BFE6B_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 Firebase.Storage.UploadState::get_TotalByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UploadState_get_TotalByteCount_mABE92AB2FB4ED7BFD86796DC7F0BF858DD71E63C (UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC * __this, const RuntimeMethod* method)
{
	{
		TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * L_0 = UploadState_get_State_m35320D472CC529D3D0F1E26269FF025B81BA0596_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int64_t L_1 = TransferState_get_TotalByteCount_mD501E2B14C40CAE6591F77AAF7A7CB1D04D5F0EA_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Firebase.Storage.Internal.TransferState Firebase.Storage.UploadState::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * UploadState_get_State_m35320D472CC529D3D0F1E26269FF025B81BA0596 (UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC * __this, const RuntimeMethod* method)
{
	{
		TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * L_0 = __this->get_U3CStateU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Firebase.Storage.UploadState::set_State(Firebase.Storage.Internal.TransferState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadState_set_State_mDA473FDD5622DBA272E4552DE741306AD4D40022 (UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC * __this, TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * ___value0, const RuntimeMethod* method)
{
	{
		TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_0(L_0);
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ModuleLogger_set_Tag_m3D42E7B948CCD7A1EC648250B7EE58A489140C77_inline (ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_tag_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ModuleLogger_set_Level_mB529EFC50B227772907A6C6E2302D6A7BF6A6905_inline (ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_logLevel_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FirebaseStorage_set_Logger_mC5DEE6DF946196EE8BC14D0EC66640982641DD80_inline (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * __this, ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * ___value0, const RuntimeMethod* method)
{
	{
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_0 = ___value0;
		__this->set_U3CLoggerU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FirebaseStorageInternal_SetSwigCMemOwn_mFBB598A591A556B30769E165A02D1862E1179886_inline (FirebaseStorageInternal_t9B3609D5017A5D77298F6D19617093498AD96CA0 * __this, bool ___ownership0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___ownership0;
		__this->set_swigCMemOwn_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * FirebaseStorage_get_Logger_m9D26CA2E9727C776304599A25248D7D3DD821CBA_inline (FirebaseStorage_tB285B9294F8150B9A8866D0C6C24848EE25DFCD7 * __this, const RuntimeMethod* method)
{
	{
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_0 = __this->get_U3CLoggerU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AppOptions_get_StorageBucket_mAB8AC18DB43252A87255F7B469F71D34611ECC4B_inline (AppOptions_tAB2A7134A67D6704BFBA58178C823CCCD109395E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CStorageBucketU3Ek__BackingField_4();
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TransferState_set_Reference_m1E28A3A6C7569A4E25950164E025144C7A6BE8EE_inline (TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * __this, StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * ___value0, const RuntimeMethod* method)
{
	{
		StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * L_0 = ___value0;
		__this->set_U3CReferenceU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * StorageMetadata_get_Internal_mC892D945DE8B242B150489B70F124D565EE596EC_inline (StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * __this, const RuntimeMethod* method)
{
	{
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_0 = __this->get_U3CInternalU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StorageException_set_ErrorCode_mBB954753CA9088849372B0BF14EC2EEBA66F7343_inline (StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CErrorCodeU3Ek__BackingField_19(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StorageException_set_HttpResultCode_m886A6140AB814BF2A0E822A3E94CA1C37E0633C3_inline (StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CHttpResultCodeU3Ek__BackingField_20(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * AggregateException_get_InnerExceptions_mB81D2B3BD56A3E938B83B0AF766474ED66057040_inline (AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E * __this, const RuntimeMethod* method)
{
	{
		ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * L_0 = __this->get_m_innerExceptions_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t FirebaseException_get_ErrorCode_m35E226BE84B218CC4F6C0B86EEE8770C2404F2A9_inline (FirebaseException_t947F51F8FDF9CB2D145DC24E92160DC67BF12AEF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StorageMetadata_set_Internal_mCC1939EF5B04185494353EA6B6B031EB81517661_inline (StorageMetadata_t73E23765A0016877974E8B85C8C25CADF0DD18E8 * __this, MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * ___value0, const RuntimeMethod* method)
{
	{
		MetadataInternal_t69CF42410554C28D3ACBB299FC4CC154932CDA37 * L_0 = ___value0;
		__this->set_U3CInternalU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StorageReference_set_Internal_m96D276C28F59B27CEFFECC7AD0D5F50EF72D5731_inline (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * ___value0, const RuntimeMethod* method)
{
	{
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_0 = ___value0;
		__this->set_U3CInternalU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StorageReference_set_Logger_m3FDF97651E768052A1F071671137F81BE694C897_inline (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * ___value0, const RuntimeMethod* method)
{
	{
		ModuleLogger_t7CE7E8F69CFC0DDCB478698EBECC1799DF01BEEC * L_0 = ___value0;
		__this->set_U3CLoggerU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * StorageReference_get_Internal_m9087E0BB3B6AE66048F5DF369F1D6BBD5B81A16E_inline (StorageReference_tEAC45631420EF4990D04444090F3277BCB25BC0D * __this, const RuntimeMethod* method)
{
	{
		StorageReferenceInternal_t8D05AD168438AFB97F80D56356BD4C899595C383 * L_0 = __this->get_U3CInternalU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * UploadState_get_State_m35320D472CC529D3D0F1E26269FF025B81BA0596_inline (UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC * __this, const RuntimeMethod* method)
{
	{
		TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * L_0 = __this->get_U3CStateU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TaskCompletionStatus_set_IsSuccessful_m3F5BAA5B4F878466CE1679C61E18BA3F8031C50C_inline (TaskCompletionStatus_tBB1DB69F0E6FF1E8E4A5A89F863B03E761DEE105 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsSuccessfulU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t StorageException_get_ErrorCode_mFDEECBE336A8E1A466730F9B7A61ED819A77868E_inline (StorageException_t8221FDA22093BDD105CD2FE0C0D871136D2C5648 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TaskCompletionStatus_set_IsCanceled_m033C9938C78A41DABAC39A6549DD23FF27A6DB1E_inline (TaskCompletionStatus_tBB1DB69F0E6FF1E8E4A5A89F863B03E761DEE105 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsCanceledU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TaskCompletionStatus_set_Exception_m1D3A8F600700B33D2C7E099FEC39DF2254188E8C_inline (TaskCompletionStatus_tBB1DB69F0E6FF1E8E4A5A89F863B03E761DEE105 * __this, Exception_t * ___value0, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = ___value0;
		__this->set_U3CExceptionU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Exception_t * TaskCompletionStatus_get_Exception_m75B03EE058B83412D20D94AE477F5AE823AE9E08_inline (TaskCompletionStatus_tBB1DB69F0E6FF1E8E4A5A89F863B03E761DEE105 * __this, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = __this->get_U3CExceptionU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TransferState_set_TotalByteCount_m269339181396E26CFCFC0A951357AD3A9E63F09C_inline (TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CTotalByteCountU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void UploadState_set_State_mDA473FDD5622DBA272E4552DE741306AD4D40022_inline (UploadState_tD8FB56A5565EB287EBCA872A6FD7001A2785F6BC * __this, TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * ___value0, const RuntimeMethod* method)
{
	{
		TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t TransferState_get_BytesTransferred_m65A05CED6F030394271641B7A6EFA8E0A13BFE6B_inline (TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CBytesTransferredU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t TransferState_get_TotalByteCount_mD501E2B14C40CAE6591F77AAF7A7CB1D04D5F0EA_inline (TransferState_t8EB788FCA445DA53FD3ED01F97E6C2A487AD537D * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CTotalByteCountU3Ek__BackingField_1();
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
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item2_m24857790A6EE453B06644D5B6FEA72C82F398F28_gshared_inline (Tuple_2_tAA2ECE8873707FEE165573740A8A4A16F00C3CF8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Item2_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item1_m26E53A67EEB7E6C130F23A118BA0D74D42FDDF7C_gshared_inline (Tuple_2_tAA2ECE8873707FEE165573740A8A4A16F00C3CF8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Item1_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * TransferStateUpdater_1_get_MonitorController_m89B68926CC4BCD8C438369B137F819BD90D5C2E9_gshared_inline (TransferStateUpdater_1_tF5826AF89BAD279061EADA2D42ED8D6702A00226 * __this, const RuntimeMethod* method)
{
	{
		MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC * L_0 = (MonitorControllerInternal_tDF49B2EFCA4611514288D59D75A73EA430D138CC *)__this->get_U3CMonitorControllerU3Ek__BackingField_3();
		return L_0;
	}
}
