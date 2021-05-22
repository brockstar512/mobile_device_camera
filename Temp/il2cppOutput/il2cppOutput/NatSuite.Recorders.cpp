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

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tE186BA8DF552342AD6F16CE857BF6B7C531EEB3B;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB;
// NatSuite.Recorders.Clocks.FixedIntervalClock
struct FixedIntervalClock_t6B8950D95DADD3A3D46DFB2CEB597F66E2C45401;
// NatSuite.Recorders.Clocks.IClock
struct IClock_t8A7EF3881C3D1F46D37DB7906AC715BC520B594F;
// NatSuite.Recorders.Clocks.RealtimeClock
struct RealtimeClock_t613C06FF11B6B417355A3F55239491891A872198;
// NatSuite.Recorders.GIFRecorder
struct GIFRecorder_t0781BAD24FD6FB3A8EA7CE94C414D53743F4C8AF;
// NatSuite.Recorders.HEVCRecorder
struct HEVCRecorder_tD5DD99797DFB9AE78FAE274C7BC80C68AD3F8CDD;
// NatSuite.Recorders.IMediaRecorder
struct IMediaRecorder_t4F8A0713BF2D16BC536BF9258735410897A4EE14;
// NatSuite.Recorders.Inputs.AsyncTextureInput
struct AsyncTextureInput_tBB64A7DB20DDF11CF95D889232175680F44CEE86;
// NatSuite.Recorders.Inputs.AsyncTextureInput/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t36C20201CA222B4EC51F0916A419217897C57C92;
// NatSuite.Recorders.Inputs.AudioInput
struct AudioInput_t1BECD68B888576808651FAC2685713371899BCC9;
// NatSuite.Recorders.Inputs.AudioInput/AudioInputAttachment
struct AudioInputAttachment_t212A31FBB672937737A15FEFA2D253A35D84D603;
// NatSuite.Recorders.Inputs.CameraInput
struct CameraInput_t145006E356C2401BF3BEAFF798586DFB1124F7C1;
// NatSuite.Recorders.Inputs.CameraInput/<>c
struct U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D;
// NatSuite.Recorders.Inputs.CameraInput/CameraInputAttachment
struct CameraInputAttachment_tCFA8350EFB5ABFA6ADF694FE5F5EDFEE47CB8C3F;
// NatSuite.Recorders.Inputs.ITextureInput
struct ITextureInput_t874F61E8A5A6E38CAFFEA8C64CAD1240069D441B;
// NatSuite.Recorders.Inputs.TextureInput
struct TextureInput_tF3448248DE3212BF6CD05BC2F8E8CDB5A1AF3DF7;
// NatSuite.Recorders.Internal.Bridge/RecordingHandler
struct RecordingHandler_t3749B1B1F18462109BD464EC1DE2582012DD5810;
// NatSuite.Recorders.Internal.NativeRecorder
struct NativeRecorder_t20BA008C0EF7E8453F9F39A0FD6753D255E4974B;
// NatSuite.Recorders.JPGRecorder
struct JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC;
// NatSuite.Recorders.JPGRecorder/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t860AFA329628B6F4B0EC37606C698CD205D20051;
// NatSuite.Recorders.MP4Recorder
struct MP4Recorder_tF538F0357EEFBA6636E7FCAD41282C3821E8AB4C;
// NatSuite.Recorders.WAVRecorder
struct WAVRecorder_tF8DBAB98828910CE19B6AA5ADD9585D511C8CF6D;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<System.Single[]>
struct Action_1_t597B11C3E4C67A99A589ECD4CE2E5591EED078F6;
// System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>
struct Action_1_t5AD40848191FB0BB2E39E6C0B21353B16C7BB06D;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Byte
struct Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>
struct IEnumerable_1_tD8312B5327972497B2F14E1A32CD8918F541E276;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Comparison`1<System.Object>
struct Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4;
// System.Comparison`1<UnityEngine.Camera>
struct Comparison_1_tA09B29E8CCC4084369385DE52AFCD217D1B7B528;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Diagnostics.Stopwatch
struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4;
// System.Exception
struct Exception_t;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_tD895ECEFADFC965DADCCEBDEF02CDA52E854B827;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_t750753ACB1A1EA2B14C4CE51D9DEDBC5E65E5F73;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.DirectoryInfo
struct DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F;
// System.IO.FileStream
struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tEFDFBE18E061A6065AB2FF735F1425FB59F919BC;
// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_tD9DD4E69D51070F019D995BE04C2FE25BB5E04A2;
// System.Runtime.InteropServices.SafeBuffer
struct SafeBuffer_t9C39972A6152D9B18D97894AF4EB871581B64208;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t14F1BF069865ED085DD30781CAD679CB0FC447F5;
// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_t8CA8440E1CA3B5CE996E9F8C9F5D21D496E6F1C9;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_tB8790D4DF77B655D7B2DBE1C4660EA13A64544C8;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t16414BAFA50DF6DFE4CA36369788F293C1016E3F;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_tE4155ED1F21E503C57CC7066D9B6AB64EE0DDDCE;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AudioListener
struct AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Camera[]
struct CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RenderTexture
struct RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t597B11C3E4C67A99A589ECD4CE2E5591EED078F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t5AD40848191FB0BB2E39E6C0B21353B16C7BB06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTextureInput_tBB64A7DB20DDF11CF95D889232175680F44CEE86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_tA09B29E8CCC4084369385DE52AFCD217D1B7B528_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClock_t8A7EF3881C3D1F46D37DB7906AC715BC520B594F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMediaRecorder_t4F8A0713BF2D16BC536BF9258735410897A4EE14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITextureInput_t874F61E8A5A6E38CAFFEA8C64CAD1240069D441B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecordingHandler_t3749B1B1F18462109BD464EC1DE2582012DD5810_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t8CA8440E1CA3B5CE996E9F8C9F5D21D496E6F1C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureInput_tF3448248DE3212BF6CD05BC2F8E8CDB5A1AF3DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t36C20201CA222B4EC51F0916A419217897C57C92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t860AFA329628B6F4B0EC37606C698CD205D20051_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utility_t91DFA782CDF85DB8249161CCEFD8EFE464207050_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0845425C2C291D818EC7819146081B24DCAB1F5C;
IL2CPP_EXTERN_C String_t* _stringLiteral2BF5D215F67675901A33DBF902E7FC75E8E74861;
IL2CPP_EXTERN_C String_t* _stringLiteral3317BD4DDD5A5E65635839DDDC81F6F3B3E63E24;
IL2CPP_EXTERN_C String_t* _stringLiteral64CC1194405FA366D9AE015C627F4609DEAC4879;
IL2CPP_EXTERN_C String_t* _stringLiteral6CA0A12C23F03719E0229FE85E34C98DE7079397;
IL2CPP_EXTERN_C String_t* _stringLiteral90482CCC2DEBBC9F5A56C001DBE878DBFD1F0733;
IL2CPP_EXTERN_C String_t* _stringLiteralA17C9AAA61E80A1BF71D0D850AF4E5BAA9800BBD;
IL2CPP_EXTERN_C String_t* _stringLiteralBBFA1BB41C52D07D9B36549E6CDD8E93097EAF2A;
IL2CPP_EXTERN_C String_t* _stringLiteralC5EF9B806CBD2BFA0D6C179FE35E3AB475BF5AAF;
IL2CPP_EXTERN_C String_t* _stringLiteralD20756022359AE03ECA6709D9DEED3A1CC68F12A;
IL2CPP_EXTERN_C String_t* _stringLiteralF3A822D4B6AC4CD9828859883D087FEE5C6CFF02;
IL2CPP_EXTERN_C String_t* _stringLiteralFB914D3CA1348F0C104408C5794FE186EA61F9B4;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA41D55996A53C3EEF6A1BEF4AED37EB56E278A;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mBF8A46AB499B810912470F26049872EAE1707445_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m1E91D63FDA50D305F8E0529DCAAC2C6B77A62AC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m5E5D0FEDDF626CE8E117DEDDB964E669422E758A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mBFDB026CC7933627FD549E7B5135CDFBA4CB1B39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncGPUReadbackRequest_GetData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m1014C6C7E42B93215072CC3ABD614AD57C449949_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF_m4A3F0091D36E154F7E535FB92481C383DDF40817_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mCE9D3CB6CDA544508B2257E12C9584B5231E69DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m3BDDBD9C146D972C50003272305BF45768D5BF55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m1A83C859D55B02F7598137CE0C3EB97A75FD90DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m9D848748388E389DB11EB835DC7FF6F45FFA16DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF_m2E60DFBEB7D47A31AC47B02248222228A688D971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m82856EBEF95BD2766D5109AA0DA0FA01547F5D70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioInput_OnSampleBuffer_m127F3903B2953BCD61C4FF84A16B835EC71AAF8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraInput_CommitFrame_m19C6A8C226F34B3366071D6A57C1F34CC56325DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Comparison_1__ctor_mE00BFCA4C499EC760666D4A4C674BDB63DC22E1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioInputAttachment_t212A31FBB672937737A15FEFA2D253A35D84D603_m38757630CE9495F255417A3DB5B8BFF0F3A939ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCameraInputAttachment_tCFA8350EFB5ABFA6ADF694FE5F5EDFEE47CB8C3F_mA86B1D21D24062EEBDA3E23B8A4E0FD4D8799DFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAC067166AEB86D01BCC2364DAC32CF05E89AF135_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC06B02C45D781C1EBF33F5D2380FF522713EF33B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mF9CA0984C93B0D8BC4A3BBC5CE664F3792B936CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeRecorder_OnRecording_m5E7892D13E801FE229BC73C026BEF6DFF39E5C06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stopwatch_Stop_m8AE20980FC1C80DFAC27FA7E2BAFC88E94B839B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_m7D7042A9B159869A6D6AB48FD78599899E1E91BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m6FD81CD8C900045ECDFF39856335AB1448AD9067_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m0C0E17AFFC61961F48C32130FDCF435008B25AD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mFC27EFCD0B5D3201900E87BB9CCFFB4458494CAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromResult_TisString_t_m0F2C9F4AB9FCF2BA6DC300777839282B51CC623A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mE453927FC6491AC23A63CD1174E492BC63409B2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__5_0_m13DE00427DD5D6A266033EE9424C192A29FF21E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CCommitFrameU3Eb__0_m479B9B52D96F39484E654CCE2C1C8485FD66A652_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CCommitFrameU3Eb__0_mAF83B14084D8CABE53DDC33B0C6C55BAF9D11187_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mCDA3078E87F827C6490EBD90430507642CECC6BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AsyncTextureInput_CommitFrame_m5DA7CD309B543E89124045DFFB279A1EDB068128_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioInputAttachment_OnAudioFilterRead_mAE0D852A133AAABCC34EE303E8D3A288C65E85AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioInput_Dispose_m98E4467A869D5BFD6889AC1B5E450EC60833A73F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioInput_OnSampleBuffer_m127F3903B2953BCD61C4FF84A16B835EC71AAF8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioInput__ctor_m90CC0E9F917DF1A3BB7BBA797C4A131C948D892A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraInput_CommitFrame_m19C6A8C226F34B3366071D6A57C1F34CC56325DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraInput_Dispose_mA3916B1E8283D1624A3610569C16D3FFB329BA97_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraInput__ctor_m252B0C6F74FA02EBC52F43D06A5A557ECFE7C23B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraInput_set_textureInput_m0BFD6AE099D20A16050EC3800E5216CDF7169A0F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GIFRecorder_Create_mFF338D41F1E0FE4C9B1F5397A34E2258B66F44C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HEVCRecorder_Create_m086E0A1A743A5B238556DF0305BA8186FC555440_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JPGRecorder_CommitFrame_m468F2D6105AD27284D5C8EB5FAC74B0E200AA810_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JPGRecorder_FinishWriting_mE5F00A0A52E8D8544DD809078A043439C77509AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JPGRecorder_NatSuite_Recorders_IMediaRecorder_CommitSamples_m1C669DE18D288F3AA282F2A2E425C7680FC998F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JPGRecorder_NatSuite_Recorders_IMediaRecorder_CommitSamples_m5BA6FF7FD9005182848B6D49FED0FF842439CF97_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JPGRecorder__ctor_m2F1A28D05FF53E0C22027AFD2F2490627F36EF94_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JPGRecorder_get_frameSize_mA3E896C6CABFAC4DCE550A6A02FAEEDFF6580493_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MP4Recorder_Create_mDFAA1DB5C0E7FD49F2A6C0467C94A09947B15E6B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeRecorder_FinishWriting_mAB18353F3D23634675CDFA5E5B12ADF1E3A5083A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeRecorder_OnRecording_m5E7892D13E801FE229BC73C026BEF6DFF39E5C06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeRecorder_get_frameSize_mCDA27FBF5B2F3564967AA762BB3A79B4D8AD83E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RealtimeClock__ctor_m689897289B7133DBC2FA8BB3851BD820375F4089_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RealtimeClock_set_paused_m85544C932A9C0B284ED80D50102512B7D7027781_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextureInput_CommitFrame_mDEB32D0382147DFA6B4A60B070F071BD621F6D7A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextureInput_Dispose_m4BA383BA380B82C5694EEA5D887D174DB89B8CD4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextureInput__ctor_mA3A86F30E2D7AE9A5A16CC07A6BB76761AB90956_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CFinishWritingU3Ed__7_MoveNext_m154FE85AA77E77D29C0A59A365D60600AD7F29CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CFinishWritingU3Ed__7_SetStateMachine_m5763183DCC5416B493F6B1AB873C771C3B0A1AC5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass1_0_U3CCommitFrameU3Eb__0_m479B9B52D96F39484E654CCE2C1C8485FD66A652_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass4_0_U3CCommitFrameU3Eb__0_mAF83B14084D8CABE53DDC33B0C6C55BAF9D11187_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m429828FA9730EDE3D5D3FCC7F33CB592B4E8F63E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utility_GetPath_mE3FC8A633DC1AFCCA2DDC4503482ECA81DFB483B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WAVRecorder_CommitSamples_mFE7684407180FF9560DA30FFD269759E2439DCF8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WAVRecorder_FinishWriting_m5C75F9AE4AE89CFD2B35E41F7D883823284922BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WAVRecorder__ctor_mD3D19626D84FE11129E1D73A3D63B14A9E1CFF51_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tBEB1EA0E99F814001556ABD87AC201D7B492722C 
{
public:

public:
};


// System.Object


// NatSuite.Recorders.Clocks.FixedIntervalClock
struct  FixedIntervalClock_t6B8950D95DADD3A3D46DFB2CEB597F66E2C45401  : public RuntimeObject
{
public:
	// System.Double NatSuite.Recorders.Clocks.FixedIntervalClock::interval
	double ___interval_0;
	// System.Boolean NatSuite.Recorders.Clocks.FixedIntervalClock::autoTick
	bool ___autoTick_1;
	// System.Int64 NatSuite.Recorders.Clocks.FixedIntervalClock::ticks
	int64_t ___ticks_2;

public:
	inline static int32_t get_offset_of_interval_0() { return static_cast<int32_t>(offsetof(FixedIntervalClock_t6B8950D95DADD3A3D46DFB2CEB597F66E2C45401, ___interval_0)); }
	inline double get_interval_0() const { return ___interval_0; }
	inline double* get_address_of_interval_0() { return &___interval_0; }
	inline void set_interval_0(double value)
	{
		___interval_0 = value;
	}

	inline static int32_t get_offset_of_autoTick_1() { return static_cast<int32_t>(offsetof(FixedIntervalClock_t6B8950D95DADD3A3D46DFB2CEB597F66E2C45401, ___autoTick_1)); }
	inline bool get_autoTick_1() const { return ___autoTick_1; }
	inline bool* get_address_of_autoTick_1() { return &___autoTick_1; }
	inline void set_autoTick_1(bool value)
	{
		___autoTick_1 = value;
	}

	inline static int32_t get_offset_of_ticks_2() { return static_cast<int32_t>(offsetof(FixedIntervalClock_t6B8950D95DADD3A3D46DFB2CEB597F66E2C45401, ___ticks_2)); }
	inline int64_t get_ticks_2() const { return ___ticks_2; }
	inline int64_t* get_address_of_ticks_2() { return &___ticks_2; }
	inline void set_ticks_2(int64_t value)
	{
		___ticks_2 = value;
	}
};


// NatSuite.Recorders.Clocks.RealtimeClock
struct  RealtimeClock_t613C06FF11B6B417355A3F55239491891A872198  : public RuntimeObject
{
public:
	// System.Diagnostics.Stopwatch NatSuite.Recorders.Clocks.RealtimeClock::stopwatch
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___stopwatch_0;

public:
	inline static int32_t get_offset_of_stopwatch_0() { return static_cast<int32_t>(offsetof(RealtimeClock_t613C06FF11B6B417355A3F55239491891A872198, ___stopwatch_0)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_stopwatch_0() const { return ___stopwatch_0; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_stopwatch_0() { return &___stopwatch_0; }
	inline void set_stopwatch_0(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___stopwatch_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stopwatch_0), (void*)value);
	}
};


// NatSuite.Recorders.Inputs.AsyncTextureInput
struct  AsyncTextureInput_tBB64A7DB20DDF11CF95D889232175680F44CEE86  : public RuntimeObject
{
public:
	// NatSuite.Recorders.IMediaRecorder NatSuite.Recorders.Inputs.AsyncTextureInput::recorder
	RuntimeObject* ___recorder_0;

public:
	inline static int32_t get_offset_of_recorder_0() { return static_cast<int32_t>(offsetof(AsyncTextureInput_tBB64A7DB20DDF11CF95D889232175680F44CEE86, ___recorder_0)); }
	inline RuntimeObject* get_recorder_0() const { return ___recorder_0; }
	inline RuntimeObject** get_address_of_recorder_0() { return &___recorder_0; }
	inline void set_recorder_0(RuntimeObject* value)
	{
		___recorder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recorder_0), (void*)value);
	}
};


// NatSuite.Recorders.Inputs.AsyncTextureInput_<>c__DisplayClass1_0
struct  U3CU3Ec__DisplayClass1_0_t36C20201CA222B4EC51F0916A419217897C57C92  : public RuntimeObject
{
public:
	// NatSuite.Recorders.Inputs.AsyncTextureInput NatSuite.Recorders.Inputs.AsyncTextureInput_<>c__DisplayClass1_0::<>4__this
	AsyncTextureInput_tBB64A7DB20DDF11CF95D889232175680F44CEE86 * ___U3CU3E4__this_0;
	// System.Int64 NatSuite.Recorders.Inputs.AsyncTextureInput_<>c__DisplayClass1_0::timestamp
	int64_t ___timestamp_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t36C20201CA222B4EC51F0916A419217897C57C92, ___U3CU3E4__this_0)); }
	inline AsyncTextureInput_tBB64A7DB20DDF11CF95D889232175680F44CEE86 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline AsyncTextureInput_tBB64A7DB20DDF11CF95D889232175680F44CEE86 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(AsyncTextureInput_tBB64A7DB20DDF11CF95D889232175680F44CEE86 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_timestamp_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t36C20201CA222B4EC51F0916A419217897C57C92, ___timestamp_1)); }
	inline int64_t get_timestamp_1() const { return ___timestamp_1; }
	inline int64_t* get_address_of_timestamp_1() { return &___timestamp_1; }
	inline void set_timestamp_1(int64_t value)
	{
		___timestamp_1 = value;
	}
};


// NatSuite.Recorders.Inputs.AudioInput
struct  AudioInput_t1BECD68B888576808651FAC2685713371899BCC9  : public RuntimeObject
{
public:
	// NatSuite.Recorders.IMediaRecorder NatSuite.Recorders.Inputs.AudioInput::recorder
	RuntimeObject* ___recorder_0;
	// NatSuite.Recorders.Clocks.IClock NatSuite.Recorders.Inputs.AudioInput::clock
	RuntimeObject* ___clock_1;
	// NatSuite.Recorders.Inputs.AudioInput_AudioInputAttachment NatSuite.Recorders.Inputs.AudioInput::attachment
	AudioInputAttachment_t212A31FBB672937737A15FEFA2D253A35D84D603 * ___attachment_2;
	// System.Boolean NatSuite.Recorders.Inputs.AudioInput::mute
	bool ___mute_3;

public:
	inline static int32_t get_offset_of_recorder_0() { return static_cast<int32_t>(offsetof(AudioInput_t1BECD68B888576808651FAC2685713371899BCC9, ___recorder_0)); }
	inline RuntimeObject* get_recorder_0() const { return ___recorder_0; }
	inline RuntimeObject** get_address_of_recorder_0() { return &___recorder_0; }
	inline void set_recorder_0(RuntimeObject* value)
	{
		___recorder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recorder_0), (void*)value);
	}

	inline static int32_t get_offset_of_clock_1() { return static_cast<int32_t>(offsetof(AudioInput_t1BECD68B888576808651FAC2685713371899BCC9, ___clock_1)); }
	inline RuntimeObject* get_clock_1() const { return ___clock_1; }
	inline RuntimeObject** get_address_of_clock_1() { return &___clock_1; }
	inline void set_clock_1(RuntimeObject* value)
	{
		___clock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clock_1), (void*)value);
	}

	inline static int32_t get_offset_of_attachment_2() { return static_cast<int32_t>(offsetof(AudioInput_t1BECD68B888576808651FAC2685713371899BCC9, ___attachment_2)); }
	inline AudioInputAttachment_t212A31FBB672937737A15FEFA2D253A35D84D603 * get_attachment_2() const { return ___attachment_2; }
	inline AudioInputAttachment_t212A31FBB672937737A15FEFA2D253A35D84D603 ** get_address_of_attachment_2() { return &___attachment_2; }
	inline void set_attachment_2(AudioInputAttachment_t212A31FBB672937737A15FEFA2D253A35D84D603 * value)
	{
		___attachment_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attachment_2), (void*)value);
	}

	inline static int32_t get_offset_of_mute_3() { return static_cast<int32_t>(offsetof(AudioInput_t1BECD68B888576808651FAC2685713371899BCC9, ___mute_3)); }
	inline bool get_mute_3() const { return ___mute_3; }
	inline bool* get_address_of_mute_3() { return &___mute_3; }
	inline void set_mute_3(bool value)
	{
		___mute_3 = value;
	}
};


// NatSuite.Recorders.Inputs.CameraInput_<>c
struct  U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D_StaticFields
{
public:
	// NatSuite.Recorders.Inputs.CameraInput_<>c NatSuite.Recorders.Inputs.CameraInput_<>c::<>9
	U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D * ___U3CU3E9_0;
	// System.Comparison`1<UnityEngine.Camera> NatSuite.Recorders.Inputs.CameraInput_<>c::<>9__5_0
	Comparison_1_tA09B29E8CCC4084369385DE52AFCD217D1B7B528 * ___U3CU3E9__5_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D_StaticFields, ___U3CU3E9__5_0_1)); }
	inline Comparison_1_tA09B29E8CCC4084369385DE52AFCD217D1B7B528 * get_U3CU3E9__5_0_1() const { return ___U3CU3E9__5_0_1; }
	inline Comparison_1_tA09B29E8CCC4084369385DE52AFCD217D1B7B528 ** get_address_of_U3CU3E9__5_0_1() { return &___U3CU3E9__5_0_1; }
	inline void set_U3CU3E9__5_0_1(Comparison_1_tA09B29E8CCC4084369385DE52AFCD217D1B7B528 * value)
	{
		___U3CU3E9__5_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_1), (void*)value);
	}
};


// NatSuite.Recorders.Inputs.TextureInput
struct  TextureInput_tF3448248DE3212BF6CD05BC2F8E8CDB5A1AF3DF7  : public RuntimeObject
{
public:
	// NatSuite.Recorders.IMediaRecorder NatSuite.Recorders.Inputs.TextureInput::recorder
	RuntimeObject* ___recorder_0;
	// UnityEngine.Texture2D NatSuite.Recorders.Inputs.TextureInput::readbackBuffer
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___readbackBuffer_1;

public:
	inline static int32_t get_offset_of_recorder_0() { return static_cast<int32_t>(offsetof(TextureInput_tF3448248DE3212BF6CD05BC2F8E8CDB5A1AF3DF7, ___recorder_0)); }
	inline RuntimeObject* get_recorder_0() const { return ___recorder_0; }
	inline RuntimeObject** get_address_of_recorder_0() { return &___recorder_0; }
	inline void set_recorder_0(RuntimeObject* value)
	{
		___recorder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recorder_0), (void*)value);
	}

	inline static int32_t get_offset_of_readbackBuffer_1() { return static_cast<int32_t>(offsetof(TextureInput_tF3448248DE3212BF6CD05BC2F8E8CDB5A1AF3DF7, ___readbackBuffer_1)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_readbackBuffer_1() const { return ___readbackBuffer_1; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_readbackBuffer_1() { return &___readbackBuffer_1; }
	inline void set_readbackBuffer_1(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___readbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readbackBuffer_1), (void*)value);
	}
};


// NatSuite.Recorders.Internal.Bridge
struct  Bridge_t084DE7B4E33E1F4B9099B15EBBC54883C539CC9A  : public RuntimeObject
{
public:

public:
};


// NatSuite.Recorders.Internal.Utility
struct  Utility_t91DFA782CDF85DB8249161CCEFD8EFE464207050  : public RuntimeObject
{
public:

public:
};

struct Utility_t91DFA782CDF85DB8249161CCEFD8EFE464207050_StaticFields
{
public:
	// System.String NatSuite.Recorders.Internal.Utility::directory
	String_t* ___directory_0;

public:
	inline static int32_t get_offset_of_directory_0() { return static_cast<int32_t>(offsetof(Utility_t91DFA782CDF85DB8249161CCEFD8EFE464207050_StaticFields, ___directory_0)); }
	inline String_t* get_directory_0() const { return ___directory_0; }
	inline String_t** get_address_of_directory_0() { return &___directory_0; }
	inline void set_directory_0(String_t* value)
	{
		___directory_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___directory_0), (void*)value);
	}
};


// NatSuite.Recorders.JPGRecorder
struct  JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC  : public RuntimeObject
{
public:
	// UnityEngine.Texture2D NatSuite.Recorders.JPGRecorder::frameBuffer
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___frameBuffer_0;
	// System.String NatSuite.Recorders.JPGRecorder::recordingPath
	String_t* ___recordingPath_1;
	// System.Collections.Generic.List`1<System.Threading.Tasks.Task> NatSuite.Recorders.JPGRecorder::writeTasks
	List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E * ___writeTasks_2;
	// System.Int32 NatSuite.Recorders.JPGRecorder::frameCount
	int32_t ___frameCount_3;

public:
	inline static int32_t get_offset_of_frameBuffer_0() { return static_cast<int32_t>(offsetof(JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC, ___frameBuffer_0)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_frameBuffer_0() const { return ___frameBuffer_0; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_frameBuffer_0() { return &___frameBuffer_0; }
	inline void set_frameBuffer_0(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___frameBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameBuffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_recordingPath_1() { return static_cast<int32_t>(offsetof(JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC, ___recordingPath_1)); }
	inline String_t* get_recordingPath_1() const { return ___recordingPath_1; }
	inline String_t** get_address_of_recordingPath_1() { return &___recordingPath_1; }
	inline void set_recordingPath_1(String_t* value)
	{
		___recordingPath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recordingPath_1), (void*)value);
	}

	inline static int32_t get_offset_of_writeTasks_2() { return static_cast<int32_t>(offsetof(JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC, ___writeTasks_2)); }
	inline List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E * get_writeTasks_2() const { return ___writeTasks_2; }
	inline List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E ** get_address_of_writeTasks_2() { return &___writeTasks_2; }
	inline void set_writeTasks_2(List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E * value)
	{
		___writeTasks_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeTasks_2), (void*)value);
	}

	inline static int32_t get_offset_of_frameCount_3() { return static_cast<int32_t>(offsetof(JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC, ___frameCount_3)); }
	inline int32_t get_frameCount_3() const { return ___frameCount_3; }
	inline int32_t* get_address_of_frameCount_3() { return &___frameCount_3; }
	inline void set_frameCount_3(int32_t value)
	{
		___frameCount_3 = value;
	}
};


// NatSuite.Recorders.JPGRecorder_<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_t860AFA329628B6F4B0EC37606C698CD205D20051  : public RuntimeObject
{
public:
	// NatSuite.Recorders.JPGRecorder NatSuite.Recorders.JPGRecorder_<>c__DisplayClass4_0::<>4__this
	JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC * ___U3CU3E4__this_0;
	// System.Int32 NatSuite.Recorders.JPGRecorder_<>c__DisplayClass4_0::frameIndex
	int32_t ___frameIndex_1;
	// System.Byte[] NatSuite.Recorders.JPGRecorder_<>c__DisplayClass4_0::frameData
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___frameData_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t860AFA329628B6F4B0EC37606C698CD205D20051, ___U3CU3E4__this_0)); }
	inline JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_frameIndex_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t860AFA329628B6F4B0EC37606C698CD205D20051, ___frameIndex_1)); }
	inline int32_t get_frameIndex_1() const { return ___frameIndex_1; }
	inline int32_t* get_address_of_frameIndex_1() { return &___frameIndex_1; }
	inline void set_frameIndex_1(int32_t value)
	{
		___frameIndex_1 = value;
	}

	inline static int32_t get_offset_of_frameData_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t860AFA329628B6F4B0EC37606C698CD205D20051, ___frameData_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_frameData_2() const { return ___frameData_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_frameData_2() { return &___frameData_2; }
	inline void set_frameData_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___frameData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameData_2), (void*)value);
	}
};


// NatSuite.Recorders.WAVRecorder
struct  WAVRecorder_tF8DBAB98828910CE19B6AA5ADD9585D511C8CF6D  : public RuntimeObject
{
public:
	// System.Int32 NatSuite.Recorders.WAVRecorder::sampleRate
	int32_t ___sampleRate_0;
	// System.Int32 NatSuite.Recorders.WAVRecorder::channelCount
	int32_t ___channelCount_1;
	// System.IO.FileStream NatSuite.Recorders.WAVRecorder::stream
	FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * ___stream_2;
	// System.Int32 NatSuite.Recorders.WAVRecorder::sampleCount
	int32_t ___sampleCount_3;

public:
	inline static int32_t get_offset_of_sampleRate_0() { return static_cast<int32_t>(offsetof(WAVRecorder_tF8DBAB98828910CE19B6AA5ADD9585D511C8CF6D, ___sampleRate_0)); }
	inline int32_t get_sampleRate_0() const { return ___sampleRate_0; }
	inline int32_t* get_address_of_sampleRate_0() { return &___sampleRate_0; }
	inline void set_sampleRate_0(int32_t value)
	{
		___sampleRate_0 = value;
	}

	inline static int32_t get_offset_of_channelCount_1() { return static_cast<int32_t>(offsetof(WAVRecorder_tF8DBAB98828910CE19B6AA5ADD9585D511C8CF6D, ___channelCount_1)); }
	inline int32_t get_channelCount_1() const { return ___channelCount_1; }
	inline int32_t* get_address_of_channelCount_1() { return &___channelCount_1; }
	inline void set_channelCount_1(int32_t value)
	{
		___channelCount_1 = value;
	}

	inline static int32_t get_offset_of_stream_2() { return static_cast<int32_t>(offsetof(WAVRecorder_tF8DBAB98828910CE19B6AA5ADD9585D511C8CF6D, ___stream_2)); }
	inline FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * get_stream_2() const { return ___stream_2; }
	inline FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 ** get_address_of_stream_2() { return &___stream_2; }
	inline void set_stream_2(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * value)
	{
		___stream_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_2), (void*)value);
	}

	inline static int32_t get_offset_of_sampleCount_3() { return static_cast<int32_t>(offsetof(WAVRecorder_tF8DBAB98828910CE19B6AA5ADD9585D511C8CF6D, ___sampleCount_3)); }
	inline int32_t get_sampleCount_3() const { return ___sampleCount_3; }
	inline int32_t* get_address_of_sampleCount_3() { return &___sampleCount_3; }
	inline void set_sampleCount_3(int32_t value)
	{
		___sampleCount_3 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct  List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TaskU5BU5D_tE4155ED1F21E503C57CC7066D9B6AB64EE0DDDCE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E, ____items_1)); }
	inline TaskU5BU5D_tE4155ED1F21E503C57CC7066D9B6AB64EE0DDDCE* get__items_1() const { return ____items_1; }
	inline TaskU5BU5D_tE4155ED1F21E503C57CC7066D9B6AB64EE0DDDCE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TaskU5BU5D_tE4155ED1F21E503C57CC7066D9B6AB64EE0DDDCE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TaskU5BU5D_tE4155ED1F21E503C57CC7066D9B6AB64EE0DDDCE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E_StaticFields, ____emptyArray_5)); }
	inline TaskU5BU5D_tE4155ED1F21E503C57CC7066D9B6AB64EE0DDDCE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TaskU5BU5D_tE4155ED1F21E503C57CC7066D9B6AB64EE0DDDCE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TaskU5BU5D_tE4155ED1F21E503C57CC7066D9B6AB64EE0DDDCE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Diagnostics.Stopwatch
struct  Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct  TaskCompletionSource_1_t14F1BF069865ED085DD30781CAD679CB0FC447F5  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t14F1BF069865ED085DD30781CAD679CB0FC447F5, ___m_task_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct  TaskCompletionSource_1_t8CA8440E1CA3B5CE996E9F8C9F5D21D496E6F1C9  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t8CA8440E1CA3B5CE996E9F8C9F5D21D496E6F1C9, ___m_task_0)); }
	inline Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 * value)
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

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct  EmbeddedAttribute_tE186BA8DF552342AD6F16CE857BF6B7C531EEB3B  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
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


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_defaultContextAction_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct  IsUnmanagedAttribute_tD9DD4E69D51070F019D995BE04C2FE25BB5E04A2  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// System.Runtime.CompilerServices.TaskAwaiter
struct  TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F, ___m_task_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshaled_pinvoke
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshaled_com
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
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


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.ValueTuple`2<System.Int32,System.Int32>
struct  ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186 
{
public:
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186, ___Item1_0)); }
	inline int32_t get_Item1_0() const { return ___Item1_0; }
	inline int32_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(int32_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186, ___Item2_1)); }
	inline int32_t get_Item2_1() const { return ___Item2_1; }
	inline int32_t* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(int32_t value)
	{
		___Item2_1 = value;
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


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// NatSuite.Recorders.Internal.NativeRecorder
struct  NativeRecorder_t20BA008C0EF7E8453F9F39A0FD6753D255E4974B  : public RuntimeObject
{
public:
	// System.IntPtr NatSuite.Recorders.Internal.NativeRecorder::recorder
	intptr_t ___recorder_0;

public:
	inline static int32_t get_offset_of_recorder_0() { return static_cast<int32_t>(offsetof(NativeRecorder_t20BA008C0EF7E8453F9F39A0FD6753D255E4974B, ___recorder_0)); }
	inline intptr_t get_recorder_0() const { return ___recorder_0; }
	inline intptr_t* get_address_of_recorder_0() { return &___recorder_0; }
	inline void set_recorder_0(intptr_t value)
	{
		___recorder_0 = value;
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

// System.IO.FileAccess
struct  FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileAttributes
struct  FileAttributes_t224B42F6F82954C94B51791913857C005C559876 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t224B42F6F82954C94B51791913857C005C559876, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileMode
struct  FileMode_tD19D05B1E6CAF201F88401B04FDB25227664C419 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_tD19D05B1E6CAF201F88401B04FDB25227664C419, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.SeekOrigin
struct  SeekOrigin_tAC0AF155E3D8B36359FAD8A95FACA23169D55BB3 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_tAC0AF155E3D8B36359FAD8A95FACA23169D55BB3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct  AsyncTaskMethodBuilder_1_tC65D74DC83CBEB19BAD45C10DB9CC457B941678D 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC65D74DC83CBEB19BAD45C10DB9CC457B941678D, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC65D74DC83CBEB19BAD45C10DB9CC457B941678D, ___m_task_2)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tC65D74DC83CBEB19BAD45C10DB9CC457B941678D_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC65D74DC83CBEB19BAD45C10DB9CC457B941678D_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>
struct  AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F, ___m_task_2)); }
	inline Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
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


// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Rendering.GraphicsFormat
struct  GraphicsFormat_t512915BBE299AE115F4DB0B96DF1DA2E72ECA181 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GraphicsFormat_t512915BBE299AE115F4DB0B96DF1DA2E72ECA181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RenderTextureCreationFlags
struct  RenderTextureCreationFlags_tF63E06301E4BB4746F7E07759B359872BD4BFB1E 
{
public:
	// System.Int32 UnityEngine.RenderTextureCreationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureCreationFlags_tF63E06301E4BB4746F7E07759B359872BD4BFB1E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureFormat
struct  RenderTextureFormat_t2AB1B77FBD247648292FBBE1182F12B5FC47AF85 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t2AB1B77FBD247648292FBBE1182F12B5FC47AF85, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureMemoryless
struct  RenderTextureMemoryless_t19E37ADD57C1F00D67146A2BB4521D06F370D2E9 
{
public:
	// System.Int32 UnityEngine.RenderTextureMemoryless::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureMemoryless_t19E37ADD57C1F00D67146A2BB4521D06F370D2E9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.AsyncGPUReadbackRequest
struct  AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C 
{
public:
	// System.IntPtr UnityEngine.Rendering.AsyncGPUReadbackRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Int32 UnityEngine.Rendering.AsyncGPUReadbackRequest::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};


// UnityEngine.Rendering.ShadowSamplingMode
struct  ShadowSamplingMode_t585A9BDECAC505FF19FF785F55CDD403A2E5DA73 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowSamplingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowSamplingMode_t585A9BDECAC505FF19FF785F55CDD403A2E5DA73, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.TextureDimension
struct  TextureDimension_t90D0E4110D3F4D062F3E8C0F69809BFBBDF8E19C 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_t90D0E4110D3F4D062F3E8C0F69809BFBBDF8E19C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct  TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.VRTextureUsage
struct  VRTextureUsage_t2D7C2397ABF03DD28086B969100F7D91DDD978A0 
{
public:
	// System.Int32 UnityEngine.VRTextureUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VRTextureUsage_t2D7C2397ABF03DD28086B969100F7D91DDD978A0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NatSuite.Recorders.GIFRecorder
struct  GIFRecorder_t0781BAD24FD6FB3A8EA7CE94C414D53743F4C8AF  : public NativeRecorder_t20BA008C0EF7E8453F9F39A0FD6753D255E4974B
{
public:

public:
};


// NatSuite.Recorders.HEVCRecorder
struct  HEVCRecorder_tD5DD99797DFB9AE78FAE274C7BC80C68AD3F8CDD  : public NativeRecorder_t20BA008C0EF7E8453F9F39A0FD6753D255E4974B
{
public:

public:
};


// NatSuite.Recorders.JPGRecorder_<FinishWriting>d__7
struct  U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF 
{
public:
	// System.Int32 NatSuite.Recorders.JPGRecorder_<FinishWriting>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> NatSuite.Recorders.JPGRecorder_<FinishWriting>d__7::<>t__builder
	AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F  ___U3CU3Et__builder_1;
	// NatSuite.Recorders.JPGRecorder NatSuite.Recorders.JPGRecorder_<FinishWriting>d__7::<>4__this
	JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter NatSuite.Recorders.JPGRecorder_<FinishWriting>d__7::<>u__1
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F  value)
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF, ___U3CU3E4__this_2)); }
	inline JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// NatSuite.Recorders.MP4Recorder
struct  MP4Recorder_tF538F0357EEFBA6636E7FCAD41282C3821E8AB4C  : public NativeRecorder_t20BA008C0EF7E8453F9F39A0FD6753D255E4974B
{
public:

public:
};


// System.IO.FileStream
struct  FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_8;
	// System.String System.IO.FileStream::name
	String_t* ___name_9;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * ___safeHandle_10;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_11;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_12;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_13;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_14;
	// System.Boolean System.IO.FileStream::async
	bool ___async_15;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_16;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_17;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_18;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_19;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_20;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_21;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_22;

public:
	inline static int32_t get_offset_of_buf_8() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_8)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_8() const { return ___buf_8; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_8() { return &___buf_8; }
	inline void set_buf_8(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_8), (void*)value);
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_9), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_10() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___safeHandle_10)); }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * get_safeHandle_10() const { return ___safeHandle_10; }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB ** get_address_of_safeHandle_10() { return &___safeHandle_10; }
	inline void set_safeHandle_10(SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * value)
	{
		___safeHandle_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_10), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_11() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___isExposed_11)); }
	inline bool get_isExposed_11() const { return ___isExposed_11; }
	inline bool* get_address_of_isExposed_11() { return &___isExposed_11; }
	inline void set_isExposed_11(bool value)
	{
		___isExposed_11 = value;
	}

	inline static int32_t get_offset_of_append_startpos_12() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___append_startpos_12)); }
	inline int64_t get_append_startpos_12() const { return ___append_startpos_12; }
	inline int64_t* get_address_of_append_startpos_12() { return &___append_startpos_12; }
	inline void set_append_startpos_12(int64_t value)
	{
		___append_startpos_12 = value;
	}

	inline static int32_t get_offset_of_access_13() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___access_13)); }
	inline int32_t get_access_13() const { return ___access_13; }
	inline int32_t* get_address_of_access_13() { return &___access_13; }
	inline void set_access_13(int32_t value)
	{
		___access_13 = value;
	}

	inline static int32_t get_offset_of_owner_14() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___owner_14)); }
	inline bool get_owner_14() const { return ___owner_14; }
	inline bool* get_address_of_owner_14() { return &___owner_14; }
	inline void set_owner_14(bool value)
	{
		___owner_14 = value;
	}

	inline static int32_t get_offset_of_async_15() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___async_15)); }
	inline bool get_async_15() const { return ___async_15; }
	inline bool* get_address_of_async_15() { return &___async_15; }
	inline void set_async_15(bool value)
	{
		___async_15 = value;
	}

	inline static int32_t get_offset_of_canseek_16() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___canseek_16)); }
	inline bool get_canseek_16() const { return ___canseek_16; }
	inline bool* get_address_of_canseek_16() { return &___canseek_16; }
	inline void set_canseek_16(bool value)
	{
		___canseek_16 = value;
	}

	inline static int32_t get_offset_of_anonymous_17() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___anonymous_17)); }
	inline bool get_anonymous_17() const { return ___anonymous_17; }
	inline bool* get_address_of_anonymous_17() { return &___anonymous_17; }
	inline void set_anonymous_17(bool value)
	{
		___anonymous_17 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_18() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_dirty_18)); }
	inline bool get_buf_dirty_18() const { return ___buf_dirty_18; }
	inline bool* get_address_of_buf_dirty_18() { return &___buf_dirty_18; }
	inline void set_buf_dirty_18(bool value)
	{
		___buf_dirty_18 = value;
	}

	inline static int32_t get_offset_of_buf_size_19() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_size_19)); }
	inline int32_t get_buf_size_19() const { return ___buf_size_19; }
	inline int32_t* get_address_of_buf_size_19() { return &___buf_size_19; }
	inline void set_buf_size_19(int32_t value)
	{
		___buf_size_19 = value;
	}

	inline static int32_t get_offset_of_buf_length_20() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_length_20)); }
	inline int32_t get_buf_length_20() const { return ___buf_length_20; }
	inline int32_t* get_address_of_buf_length_20() { return &___buf_length_20; }
	inline void set_buf_length_20(int32_t value)
	{
		___buf_length_20 = value;
	}

	inline static int32_t get_offset_of_buf_offset_21() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_offset_21)); }
	inline int32_t get_buf_offset_21() const { return ___buf_offset_21; }
	inline int32_t* get_address_of_buf_offset_21() { return &___buf_offset_21; }
	inline void set_buf_offset_21(int32_t value)
	{
		___buf_offset_21 = value;
	}

	inline static int32_t get_offset_of_buf_start_22() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_start_22)); }
	inline int64_t get_buf_start_22() const { return ___buf_start_22; }
	inline int64_t* get_address_of_buf_start_22() { return &___buf_start_22; }
	inline void set_buf_start_22(int64_t value)
	{
		___buf_start_22 = value;
	}
};

struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_recycle_6;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_7;

public:
	inline static int32_t get_offset_of_buf_recycle_6() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_recycle_6() const { return ___buf_recycle_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_recycle_6() { return &___buf_recycle_6; }
	inline void set_buf_recycle_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_recycle_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_6), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_7() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_lock_7)); }
	inline RuntimeObject * get_buf_recycle_lock_7() const { return ___buf_recycle_lock_7; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_7() { return &___buf_recycle_lock_7; }
	inline void set_buf_recycle_lock_7(RuntimeObject * value)
	{
		___buf_recycle_lock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_7), (void*)value);
	}
};


// System.IO.MonoIOStat
struct  MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};


// System.IO.UnmanagedMemoryStream
struct  UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Runtime.InteropServices.SafeBuffer System.IO.UnmanagedMemoryStream::_buffer
	SafeBuffer_t9C39972A6152D9B18D97894AF4EB871581B64208 * ____buffer_5;
	// System.Byte* System.IO.UnmanagedMemoryStream::_mem
	uint8_t* ____mem_6;
	// System.Int64 System.IO.UnmanagedMemoryStream::_length
	int64_t ____length_7;
	// System.Int64 System.IO.UnmanagedMemoryStream::_capacity
	int64_t ____capacity_8;
	// System.Int64 System.IO.UnmanagedMemoryStream::_position
	int64_t ____position_9;
	// System.Int64 System.IO.UnmanagedMemoryStream::_offset
	int64_t ____offset_10;
	// System.IO.FileAccess System.IO.UnmanagedMemoryStream::_access
	int32_t ____access_11;
	// System.Boolean System.IO.UnmanagedMemoryStream::_isOpen
	bool ____isOpen_12;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E, ____buffer_5)); }
	inline SafeBuffer_t9C39972A6152D9B18D97894AF4EB871581B64208 * get__buffer_5() const { return ____buffer_5; }
	inline SafeBuffer_t9C39972A6152D9B18D97894AF4EB871581B64208 ** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(SafeBuffer_t9C39972A6152D9B18D97894AF4EB871581B64208 * value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__mem_6() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E, ____mem_6)); }
	inline uint8_t* get__mem_6() const { return ____mem_6; }
	inline uint8_t** get_address_of__mem_6() { return &____mem_6; }
	inline void set__mem_6(uint8_t* value)
	{
		____mem_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E, ____length_7)); }
	inline int64_t get__length_7() const { return ____length_7; }
	inline int64_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int64_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E, ____capacity_8)); }
	inline int64_t get__capacity_8() const { return ____capacity_8; }
	inline int64_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int64_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__position_9() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E, ____position_9)); }
	inline int64_t get__position_9() const { return ____position_9; }
	inline int64_t* get_address_of__position_9() { return &____position_9; }
	inline void set__position_9(int64_t value)
	{
		____position_9 = value;
	}

	inline static int32_t get_offset_of__offset_10() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E, ____offset_10)); }
	inline int64_t get__offset_10() const { return ____offset_10; }
	inline int64_t* get_address_of__offset_10() { return &____offset_10; }
	inline void set__offset_10(int64_t value)
	{
		____offset_10 = value;
	}

	inline static int32_t get_offset_of__access_11() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E, ____access_11)); }
	inline int32_t get__access_11() const { return ____access_11; }
	inline int32_t* get_address_of__access_11() { return &____access_11; }
	inline void set__access_11(int32_t value)
	{
		____access_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
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
	TaskFactory_1_tB8790D4DF77B655D7B2DBE1C4660EA13A64544C8 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tD895ECEFADFC965DADCCEBDEF02CDA52E854B827 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tB8790D4DF77B655D7B2DBE1C4660EA13A64544C8 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tB8790D4DF77B655D7B2DBE1C4660EA13A64544C8 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tB8790D4DF77B655D7B2DBE1C4660EA13A64544C8 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tD895ECEFADFC965DADCCEBDEF02CDA52E854B827 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tD895ECEFADFC965DADCCEBDEF02CDA52E854B827 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tD895ECEFADFC965DADCCEBDEF02CDA52E854B827 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.String>
struct  Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6, ___m_result_40)); }
	inline String_t* get_m_result_40() const { return ___m_result_40; }
	inline String_t** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(String_t* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16414BAFA50DF6DFE4CA36369788F293C1016E3F * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t750753ACB1A1EA2B14C4CE51D9DEDBC5E65E5F73 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t16414BAFA50DF6DFE4CA36369788F293C1016E3F * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t16414BAFA50DF6DFE4CA36369788F293C1016E3F ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t16414BAFA50DF6DFE4CA36369788F293C1016E3F * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t750753ACB1A1EA2B14C4CE51D9DEDBC5E65E5F73 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t750753ACB1A1EA2B14C4CE51D9DEDBC5E65E5F73 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t750753ACB1A1EA2B14C4CE51D9DEDBC5E65E5F73 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// Unity.Collections.NativeArray`1<System.Byte>
struct  NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.RenderTextureDescriptor
struct  RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E 
{
public:
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<mipCount>k__BackingField
	int32_t ___U3CmipCountU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::_graphicsFormat
	int32_t ____graphicsFormat_5;
	// System.Int32 UnityEngine.RenderTextureDescriptor::_depthBufferBits
	int32_t ____depthBufferBits_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_8;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_9;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_10;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_11;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CwidthU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CwidthU3Ek__BackingField_0)); }
	inline int32_t get_U3CwidthU3Ek__BackingField_0() const { return ___U3CwidthU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CwidthU3Ek__BackingField_0() { return &___U3CwidthU3Ek__BackingField_0; }
	inline void set_U3CwidthU3Ek__BackingField_0(int32_t value)
	{
		___U3CwidthU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CheightU3Ek__BackingField_1)); }
	inline int32_t get_U3CheightU3Ek__BackingField_1() const { return ___U3CheightU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CheightU3Ek__BackingField_1() { return &___U3CheightU3Ek__BackingField_1; }
	inline void set_U3CheightU3Ek__BackingField_1(int32_t value)
	{
		___U3CheightU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmsaaSamplesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CmsaaSamplesU3Ek__BackingField_2)); }
	inline int32_t get_U3CmsaaSamplesU3Ek__BackingField_2() const { return ___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CmsaaSamplesU3Ek__BackingField_2() { return &___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline void set_U3CmsaaSamplesU3Ek__BackingField_2(int32_t value)
	{
		___U3CmsaaSamplesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CvolumeDepthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CvolumeDepthU3Ek__BackingField_3)); }
	inline int32_t get_U3CvolumeDepthU3Ek__BackingField_3() const { return ___U3CvolumeDepthU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CvolumeDepthU3Ek__BackingField_3() { return &___U3CvolumeDepthU3Ek__BackingField_3; }
	inline void set_U3CvolumeDepthU3Ek__BackingField_3(int32_t value)
	{
		___U3CvolumeDepthU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CmipCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CmipCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CmipCountU3Ek__BackingField_4() const { return ___U3CmipCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CmipCountU3Ek__BackingField_4() { return &___U3CmipCountU3Ek__BackingField_4; }
	inline void set_U3CmipCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CmipCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__graphicsFormat_5() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ____graphicsFormat_5)); }
	inline int32_t get__graphicsFormat_5() const { return ____graphicsFormat_5; }
	inline int32_t* get_address_of__graphicsFormat_5() { return &____graphicsFormat_5; }
	inline void set__graphicsFormat_5(int32_t value)
	{
		____graphicsFormat_5 = value;
	}

	inline static int32_t get_offset_of__depthBufferBits_6() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ____depthBufferBits_6)); }
	inline int32_t get__depthBufferBits_6() const { return ____depthBufferBits_6; }
	inline int32_t* get_address_of__depthBufferBits_6() { return &____depthBufferBits_6; }
	inline void set__depthBufferBits_6(int32_t value)
	{
		____depthBufferBits_6 = value;
	}

	inline static int32_t get_offset_of_U3CdimensionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CdimensionU3Ek__BackingField_8)); }
	inline int32_t get_U3CdimensionU3Ek__BackingField_8() const { return ___U3CdimensionU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CdimensionU3Ek__BackingField_8() { return &___U3CdimensionU3Ek__BackingField_8; }
	inline void set_U3CdimensionU3Ek__BackingField_8(int32_t value)
	{
		___U3CdimensionU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CshadowSamplingModeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CshadowSamplingModeU3Ek__BackingField_9)); }
	inline int32_t get_U3CshadowSamplingModeU3Ek__BackingField_9() const { return ___U3CshadowSamplingModeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CshadowSamplingModeU3Ek__BackingField_9() { return &___U3CshadowSamplingModeU3Ek__BackingField_9; }
	inline void set_U3CshadowSamplingModeU3Ek__BackingField_9(int32_t value)
	{
		___U3CshadowSamplingModeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CvrUsageU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CvrUsageU3Ek__BackingField_10)); }
	inline int32_t get_U3CvrUsageU3Ek__BackingField_10() const { return ___U3CvrUsageU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CvrUsageU3Ek__BackingField_10() { return &___U3CvrUsageU3Ek__BackingField_10; }
	inline void set_U3CvrUsageU3Ek__BackingField_10(int32_t value)
	{
		___U3CvrUsageU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of__flags_11() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ____flags_11)); }
	inline int32_t get__flags_11() const { return ____flags_11; }
	inline int32_t* get_address_of__flags_11() { return &____flags_11; }
	inline void set__flags_11(int32_t value)
	{
		____flags_11 = value;
	}

	inline static int32_t get_offset_of_U3CmemorylessU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CmemorylessU3Ek__BackingField_12)); }
	inline int32_t get_U3CmemorylessU3Ek__BackingField_12() const { return ___U3CmemorylessU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CmemorylessU3Ek__BackingField_12() { return &___U3CmemorylessU3Ek__BackingField_12; }
	inline void set_U3CmemorylessU3Ek__BackingField_12(int32_t value)
	{
		___U3CmemorylessU3Ek__BackingField_12 = value;
	}
};

struct RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E_StaticFields
{
public:
	// System.Int32[] UnityEngine.RenderTextureDescriptor::depthFormatBits
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___depthFormatBits_7;

public:
	inline static int32_t get_offset_of_depthFormatBits_7() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E_StaticFields, ___depthFormatBits_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_depthFormatBits_7() const { return ___depthFormatBits_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_depthFormatBits_7() { return &___depthFormatBits_7; }
	inline void set_depthFormatBits_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___depthFormatBits_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___depthFormatBits_7), (void*)value);
	}
};


// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// NatSuite.Recorders.Inputs.CameraInput
struct  CameraInput_t145006E356C2401BF3BEAFF798586DFB1124F7C1  : public RuntimeObject
{
public:
	// System.Int32 NatSuite.Recorders.Inputs.CameraInput::frameSkip
	int32_t ___frameSkip_0;
	// NatSuite.Recorders.IMediaRecorder NatSuite.Recorders.Inputs.CameraInput::recorder
	RuntimeObject* ___recorder_1;
	// NatSuite.Recorders.Clocks.IClock NatSuite.Recorders.Inputs.CameraInput::clock
	RuntimeObject* ___clock_2;
	// UnityEngine.Camera[] NatSuite.Recorders.Inputs.CameraInput::cameras
	CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* ___cameras_3;
	// UnityEngine.RenderTextureDescriptor NatSuite.Recorders.Inputs.CameraInput::frameDescriptor
	RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E  ___frameDescriptor_4;
	// NatSuite.Recorders.Inputs.CameraInput_CameraInputAttachment NatSuite.Recorders.Inputs.CameraInput::attachment
	CameraInputAttachment_tCFA8350EFB5ABFA6ADF694FE5F5EDFEE47CB8C3F * ___attachment_5;
	// NatSuite.Recorders.Inputs.ITextureInput NatSuite.Recorders.Inputs.CameraInput::input
	RuntimeObject* ___input_6;
	// System.Int32 NatSuite.Recorders.Inputs.CameraInput::frameCount
	int32_t ___frameCount_7;

public:
	inline static int32_t get_offset_of_frameSkip_0() { return static_cast<int32_t>(offsetof(CameraInput_t145006E356C2401BF3BEAFF798586DFB1124F7C1, ___frameSkip_0)); }
	inline int32_t get_frameSkip_0() const { return ___frameSkip_0; }
	inline int32_t* get_address_of_frameSkip_0() { return &___frameSkip_0; }
	inline void set_frameSkip_0(int32_t value)
	{
		___frameSkip_0 = value;
	}

	inline static int32_t get_offset_of_recorder_1() { return static_cast<int32_t>(offsetof(CameraInput_t145006E356C2401BF3BEAFF798586DFB1124F7C1, ___recorder_1)); }
	inline RuntimeObject* get_recorder_1() const { return ___recorder_1; }
	inline RuntimeObject** get_address_of_recorder_1() { return &___recorder_1; }
	inline void set_recorder_1(RuntimeObject* value)
	{
		___recorder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recorder_1), (void*)value);
	}

	inline static int32_t get_offset_of_clock_2() { return static_cast<int32_t>(offsetof(CameraInput_t145006E356C2401BF3BEAFF798586DFB1124F7C1, ___clock_2)); }
	inline RuntimeObject* get_clock_2() const { return ___clock_2; }
	inline RuntimeObject** get_address_of_clock_2() { return &___clock_2; }
	inline void set_clock_2(RuntimeObject* value)
	{
		___clock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clock_2), (void*)value);
	}

	inline static int32_t get_offset_of_cameras_3() { return static_cast<int32_t>(offsetof(CameraInput_t145006E356C2401BF3BEAFF798586DFB1124F7C1, ___cameras_3)); }
	inline CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* get_cameras_3() const { return ___cameras_3; }
	inline CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9** get_address_of_cameras_3() { return &___cameras_3; }
	inline void set_cameras_3(CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* value)
	{
		___cameras_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameras_3), (void*)value);
	}

	inline static int32_t get_offset_of_frameDescriptor_4() { return static_cast<int32_t>(offsetof(CameraInput_t145006E356C2401BF3BEAFF798586DFB1124F7C1, ___frameDescriptor_4)); }
	inline RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E  get_frameDescriptor_4() const { return ___frameDescriptor_4; }
	inline RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E * get_address_of_frameDescriptor_4() { return &___frameDescriptor_4; }
	inline void set_frameDescriptor_4(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E  value)
	{
		___frameDescriptor_4 = value;
	}

	inline static int32_t get_offset_of_attachment_5() { return static_cast<int32_t>(offsetof(CameraInput_t145006E356C2401BF3BEAFF798586DFB1124F7C1, ___attachment_5)); }
	inline CameraInputAttachment_tCFA8350EFB5ABFA6ADF694FE5F5EDFEE47CB8C3F * get_attachment_5() const { return ___attachment_5; }
	inline CameraInputAttachment_tCFA8350EFB5ABFA6ADF694FE5F5EDFEE47CB8C3F ** get_address_of_attachment_5() { return &___attachment_5; }
	inline void set_attachment_5(CameraInputAttachment_tCFA8350EFB5ABFA6ADF694FE5F5EDFEE47CB8C3F * value)
	{
		___attachment_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attachment_5), (void*)value);
	}

	inline static int32_t get_offset_of_input_6() { return static_cast<int32_t>(offsetof(CameraInput_t145006E356C2401BF3BEAFF798586DFB1124F7C1, ___input_6)); }
	inline RuntimeObject* get_input_6() const { return ___input_6; }
	inline RuntimeObject** get_address_of_input_6() { return &___input_6; }
	inline void set_input_6(RuntimeObject* value)
	{
		___input_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_6), (void*)value);
	}

	inline static int32_t get_offset_of_frameCount_7() { return static_cast<int32_t>(offsetof(CameraInput_t145006E356C2401BF3BEAFF798586DFB1124F7C1, ___frameCount_7)); }
	inline int32_t get_frameCount_7() const { return ___frameCount_7; }
	inline int32_t* get_address_of_frameCount_7() { return &___frameCount_7; }
	inline void set_frameCount_7(int32_t value)
	{
		___frameCount_7 = value;
	}
};


// NatSuite.Recorders.Internal.Bridge_RecordingHandler
struct  RecordingHandler_t3749B1B1F18462109BD464EC1DE2582012DD5810  : public MulticastDelegate_t
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


// System.Action`1<System.Single[]>
struct  Action_1_t597B11C3E4C67A99A589ECD4CE2E5591EED078F6  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>
struct  Action_1_t5AD40848191FB0BB2E39E6C0B21353B16C7BB06D  : public MulticastDelegate_t
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


// System.Comparison`1<UnityEngine.Camera>
struct  Comparison_1_tA09B29E8CCC4084369385DE52AFCD217D1B7B528  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.FileSystemInfo
struct  FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____data_1)); }
	inline MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.RenderTexture
struct  RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// System.IO.DirectoryInfo
struct  DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F  : public FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// NatSuite.Recorders.Inputs.AudioInput_AudioInputAttachment
struct  AudioInputAttachment_t212A31FBB672937737A15FEFA2D253A35D84D603  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Action`1<System.Single[]> NatSuite.Recorders.Inputs.AudioInput_AudioInputAttachment::sampleBufferDelegate
	Action_1_t597B11C3E4C67A99A589ECD4CE2E5591EED078F6 * ___sampleBufferDelegate_4;

public:
	inline static int32_t get_offset_of_sampleBufferDelegate_4() { return static_cast<int32_t>(offsetof(AudioInputAttachment_t212A31FBB672937737A15FEFA2D253A35D84D603, ___sampleBufferDelegate_4)); }
	inline Action_1_t597B11C3E4C67A99A589ECD4CE2E5591EED078F6 * get_sampleBufferDelegate_4() const { return ___sampleBufferDelegate_4; }
	inline Action_1_t597B11C3E4C67A99A589ECD4CE2E5591EED078F6 ** get_address_of_sampleBufferDelegate_4() { return &___sampleBufferDelegate_4; }
	inline void set_sampleBufferDelegate_4(Action_1_t597B11C3E4C67A99A589ECD4CE2E5591EED078F6 * value)
	{
		___sampleBufferDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sampleBufferDelegate_4), (void*)value);
	}
};


// NatSuite.Recorders.Inputs.CameraInput_CameraInputAttachment
struct  CameraInputAttachment_tCFA8350EFB5ABFA6ADF694FE5F5EDFEE47CB8C3F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Action NatSuite.Recorders.Inputs.CameraInput_CameraInputAttachment::handler
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___handler_4;

public:
	inline static int32_t get_offset_of_handler_4() { return static_cast<int32_t>(offsetof(CameraInputAttachment_tCFA8350EFB5ABFA6ADF694FE5F5EDFEE47CB8C3F, ___handler_4)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_handler_4() const { return ___handler_4; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_handler_4() { return &___handler_4; }
	inline void set_handler_4(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___handler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handler_4), (void*)value);
	}
};


// UnityEngine.AudioListener
struct  AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:

public:
};


// UnityEngine.AudioSource
struct  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Camera[]
struct CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * m_Items[1];

public:
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Int16[]
struct Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m1E91D63FDA50D305F8E0529DCAAC2C6B77A62AC2_gshared (Action_1_t5AD40848191FB0BB2E39E6C0B21353B16C7BB06D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.Rendering.AsyncGPUReadbackRequest::GetData<System.Byte>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  AsyncGPUReadbackRequest_GetData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m1014C6C7E42B93215072CC3ABD614AD57C449949_gshared (AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C * __this, int32_t ___layer0, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeBufferPointerWithoutChecks<System.Byte>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mF9CA0984C93B0D8BC4A3BBC5CE664F3792B936CE_gshared (NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  ___nativeArray0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_m3445CDEBFFF4A3A9EAED69CBCC2D247630CA5BD4_gshared (Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Array::Sort<System.Object>(!!0[],System.Comparison`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisRuntimeObject_mCC6FA1E062688748C641DA919207EF0C554C95C1_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 * ___comparison1, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mE453927FC6491AC23A63CD1174E492BC63409B2E_gshared (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Int32,System.Int32>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mCDA3078E87F827C6490EBD90430507642CECC6BF_gshared (ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186 * __this, int32_t ___item10, int32_t ___item21, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mF00EC0A0D14A3499A1112ED147FC7464D49675F6_gshared (TaskCompletionSource_1_t14F1BF069865ED085DD30781CAD679CB0FC447F5 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * TaskCompletionSource_1_get_Task_mA7C2FA47C37BF0A144EE020746831B5D470713F3_gshared_inline (TaskCompletionSource_1_t14F1BF069865ED085DD30781CAD679CB0FC447F5 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m6A682021093A2889DA2399F888829BDC7ADAB2A7_gshared (TaskCompletionSource_1_t14F1BF069865ED085DD30781CAD679CB0FC447F5 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_m4BB16124002CC26E634F6E5398AB849A59214F5D_gshared (TaskCompletionSource_1_t14F1BF069865ED085DD30781CAD679CB0FC447F5 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tC65D74DC83CBEB19BAD45C10DB9CC457B941678D  AsyncTaskMethodBuilder_1_Create_m3F0E5FB46E89C4EA5BCC24BCC9281AB6B904DBBC_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF_m8960BF20E2A3246EE2A8ED7F6E0F022D48E6FCE3_gshared (AsyncTaskMethodBuilder_1_tC65D74DC83CBEB19BAD45C10DB9CC457B941678D * __this, U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * AsyncTaskMethodBuilder_1_get_Task_m7A3080B2C5DA97E5D085A01E4FF0CCD81A52C94C_gshared (AsyncTaskMethodBuilder_1_tC65D74DC83CBEB19BAD45C10DB9CC457B941678D * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF_m0FC963FBE1B590AE99A998BCE45B5B281EE789EE_gshared (AsyncTaskMethodBuilder_1_tC65D74DC83CBEB19BAD45C10DB9CC457B941678D * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m25CE2E5B751E9C8A956215F81B3254BC3E238701_gshared (AsyncTaskMethodBuilder_1_tC65D74DC83CBEB19BAD45C10DB9CC457B941678D * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m47DFF9DDFEDE120EE37E46F9885F4042AD2CB518_gshared (AsyncTaskMethodBuilder_1_tC65D74DC83CBEB19BAD45C10DB9CC457B941678D * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mB8B25808E4A008E9341780F65F66ABD299B3297A_gshared (AsyncTaskMethodBuilder_1_tC65D74DC83CBEB19BAD45C10DB9CC457B941678D * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::FromResult<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * Task_FromResult_TisRuntimeObject_mB48ABD26E07D898829AEE8A60C4186F8850835A0_gshared (RuntimeObject * ___result0, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0 (Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  Stopwatch_get_Elapsed_m6735B32BFB466FC4F52112AC3493D37404D184BB (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Int64 System.TimeSpan::get_Ticks()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_m829C28C42028CDBFC9E338962DC7B6B10C8FFBE7_inline (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method);
// System.Boolean System.Diagnostics.Stopwatch::get_IsRunning()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Stopwatch_get_IsRunning_mD7688A050B9EE2BE874EDD1D735B1FB46A0113E6_inline (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.IntPtr NatSuite.Recorders.GIFRecorder::Create(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GIFRecorder_Create_mFF338D41F1E0FE4C9B1F5397A34E2258B66F44C9 (int32_t ___width0, int32_t ___height1, float ___frameDuration2, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.NativeRecorder::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder__ctor_m58A5663B2405A5FAE668C204525FF0429C5FCE40 (NativeRecorder_t20BA008C0EF7E8453F9F39A0FD6753D255E4974B * __this, intptr_t ___recorder0, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.NativeRecorder::CommitFrame(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_CommitFrame_mC586BAE8EA9E107E8A38C72C18A1130FCDB28EAF (NativeRecorder_t20BA008C0EF7E8453F9F39A0FD6753D255E4974B * __this, void* ___nativeBuffer0, int64_t ___timestamp1, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.NativeRecorder::CommitSamples(System.Single[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_CommitSamples_m79DB331B167EC3976010955AE18B81CE5076564D (NativeRecorder_t20BA008C0EF7E8453F9F39A0FD6753D255E4974B * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___sampleBuffer0, int64_t ___timestamp1, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.NativeRecorder::CommitSamples(System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_CommitSamples_mE1D60E8DF6FE2527D5D9D3195B24CF1AE4422E82 (NativeRecorder_t20BA008C0EF7E8453F9F39A0FD6753D255E4974B * __this, float* ___nativeBuffer0, int32_t ___sampleCount1, int64_t ___timestamp2, const RuntimeMethod* method);
// System.String NatSuite.Recorders.Internal.Utility::GetPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utility_GetPath_mE3FC8A633DC1AFCCA2DDC4503482ECA81DFB483B (String_t* ___extension0, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.Bridge::CreateGIFRecorder(System.String,System.Int32,System.Int32,System.Single,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_CreateGIFRecorder_m414060091121AE23B1119862E07FDF7596F5244D (String_t* ___path0, int32_t ___width1, int32_t ___height2, float ___frameDuration3, intptr_t* ___recorder4, const RuntimeMethod* method);
// System.IntPtr NatSuite.Recorders.HEVCRecorder::Create(System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HEVCRecorder_Create_m086E0A1A743A5B238556DF0305BA8186FC555440 (int32_t ___width0, int32_t ___height1, float ___frameRate2, int32_t ___sampleRate3, int32_t ___channelCount4, int32_t ___videoBitRate5, int32_t ___keyframeInterval6, int32_t ___audioBitRate7, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.Bridge::CreateHEVCRecorder(System.String,System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_CreateHEVCRecorder_mFC85E79F70C73E9E70FB80AC4FF97C1A8A0CC4BE (String_t* ___path0, int32_t ___width1, int32_t ___height2, float ___frameRate3, int32_t ___sampleRate4, int32_t ___channelCount5, int32_t ___videoBitRate6, int32_t ___keyframeInterval7, int32_t ___audioBitRate8, intptr_t* ___recorder9, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Inputs.AsyncTextureInput/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m1C3E3B5DD0D3DA339978B46CB72E59E8849D9AF6 (U3CU3Ec__DisplayClass1_0_t36C20201CA222B4EC51F0916A419217897C57C92 * __this, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * RenderTexture_GetTemporary_m6E0EF85D2DEC0626DE5BB5D008A659F1CD66D9F8 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_mB042EC04307A5617038DA4210DE7BA4B3E529113 (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___source0, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___dest1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1E91D63FDA50D305F8E0529DCAAC2C6B77A62AC2 (Action_1_t5AD40848191FB0BB2E39E6C0B21353B16C7BB06D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5AD40848191FB0BB2E39E6C0B21353B16C7BB06D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m1E91D63FDA50D305F8E0529DCAAC2C6B77A62AC2_gshared)(__this, ___object0, ___method1, method);
}
// UnityEngine.Rendering.AsyncGPUReadbackRequest UnityEngine.Rendering.AsyncGPUReadback::Request(UnityEngine.Texture,System.Int32,System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C  AsyncGPUReadback_Request_m482B813BEB7E7F199BA993ED5DF6B3BFC6A5BBFF (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___src0, int32_t ___mipIndex1, Action_1_t5AD40848191FB0BB2E39E6C0B21353B16C7BB06D * ___callback2, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_mFBA6F18138965049AA901D62A0080B1A087A38EA (RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___temp0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.Rendering.AsyncGPUReadbackRequest::GetData<System.Byte>(System.Int32)
inline NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  AsyncGPUReadbackRequest_GetData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m1014C6C7E42B93215072CC3ABD614AD57C449949 (AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C * __this, int32_t ___layer0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  (*) (AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *, int32_t, const RuntimeMethod*))AsyncGPUReadbackRequest_GetData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m1014C6C7E42B93215072CC3ABD614AD57C449949_gshared)(__this, ___layer0, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeBufferPointerWithoutChecks<System.Byte>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mF9CA0984C93B0D8BC4A3BBC5CE664F3792B936CE (NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mF9CA0984C93B0D8BC4A3BBC5CE664F3792B936CE_gshared)(___nativeArray0, method);
}
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.AudioListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_mF39642A8F2FF955BB4F7207DE9137091D4FB503E (AudioInput_t1BECD68B888576808651FAC2685713371899BCC9 * __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * ___audioListener2, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_m90CC0E9F917DF1A3BB7BBA797C4A131C948D892A (AudioInput_t1BECD68B888576808651FAC2685713371899BCC9 * __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject2, bool ___mute3, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.AudioSource,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_m8053572A695887C4B45B84E22A077EDDFB0F64D6 (AudioInput_t1BECD68B888576808651FAC2685713371899BCC9 * __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___audioSource2, bool ___mute3, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<NatSuite.Recorders.Inputs.AudioInput/AudioInputAttachment>()
inline AudioInputAttachment_t212A31FBB672937737A15FEFA2D253A35D84D603 * GameObject_AddComponent_TisAudioInputAttachment_t212A31FBB672937737A15FEFA2D253A35D84D603_m38757630CE9495F255417A3DB5B8BFF0F3A939ED (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  AudioInputAttachment_t212A31FBB672937737A15FEFA2D253A35D84D603 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared)(__this, method);
}
// System.Void System.Action`1<System.Single[]>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5E5D0FEDDF626CE8E117DEDDB964E669422E758A (Action_1_t597B11C3E4C67A99A589ECD4CE2E5591EED078F6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t597B11C3E4C67A99A589ECD4CE2E5591EED078F6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 UnityEngine.AndroidJNI::AttachCurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_AttachCurrentThread_m6188062B9223004309C89C2054263F38FFB45E51 (const RuntimeMethod* method);
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m174F4957D6DEDB6359835123005304B14E79132E (RuntimeArray * ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Action`1<System.Single[]>::Invoke(!0)
inline void Action_1_Invoke_mBF8A46AB499B810912470F26049872EAE1707445 (Action_1_t597B11C3E4C67A99A589ECD4CE2E5591EED078F6 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t597B11C3E4C67A99A589ECD4CE2E5591EED078F6 *, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Inputs.CameraInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.Camera[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput__ctor_m252B0C6F74FA02EBC52F43D06A5A557ECFE7C23B (CameraInput_t145006E356C2401BF3BEAFF798586DFB1124F7C1 * __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* ___cameras2, const RuntimeMethod* method);
// System.Void System.Comparison`1<UnityEngine.Camera>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_mE00BFCA4C499EC760666D4A4C674BDB63DC22E1E (Comparison_1_tA09B29E8CCC4084369385DE52AFCD217D1B7B528 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_tA09B29E8CCC4084369385DE52AFCD217D1B7B528 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m3445CDEBFFF4A3A9EAED69CBCC2D247630CA5BD4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Array::Sort<UnityEngine.Camera>(!!0[],System.Comparison`1<!!0>)
inline void Array_Sort_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mBFDB026CC7933627FD549E7B5135CDFBA4CB1B39 (CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* ___array0, Comparison_1_tA09B29E8CCC4084369385DE52AFCD217D1B7B528 * ___comparison1, const RuntimeMethod* method)
{
	((  void (*) (CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9*, Comparison_1_tA09B29E8CCC4084369385DE52AFCD217D1B7B528 *, const RuntimeMethod*))Array_Sort_TisRuntimeObject_mCC6FA1E062688748C641DA919207EF0C554C95C1_gshared)(___array0, ___comparison1, method);
}
// System.Void UnityEngine.RenderTextureDescriptor::.ctor(System.Int32,System.Int32,UnityEngine.RenderTextureFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor__ctor_m693E79B09E671C2AF9A0363F7487AC9C89BCD068 (RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E * __this, int32_t ___width0, int32_t ___height1, int32_t ___colorFormat2, int32_t ___depthBufferBits3, const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::get_supportsAsyncGPUReadback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsAsyncGPUReadback_m2DA36E49B67417CA2B3D14A017F5A337ECA647E6 (const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Inputs.TextureInput::.ctor(NatSuite.Recorders.IMediaRecorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureInput__ctor_mA3A86F30E2D7AE9A5A16CC07A6BB76761AB90956 (TextureInput_tF3448248DE3212BF6CD05BC2F8E8CDB5A1AF3DF7 * __this, RuntimeObject* ___recorder0, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Inputs.AsyncTextureInput::.ctor(NatSuite.Recorders.IMediaRecorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTextureInput__ctor_mDCA445C0729F551F5A81153271CF4B6DAC9CCF3D (AsyncTextureInput_tBB64A7DB20DDF11CF95D889232175680F44CEE86 * __this, RuntimeObject* ___recorder0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::set_sRGB(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_sRGB_m19974099678BC320DA80ED60E71E1F46DAE5426F (RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.QualitySettings::get_antiAliasing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_antiAliasing_m28EE8A60C753C1D160BB393D92D98CC0E1776B16 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Max_mBDE4C6F1883EE3215CD7AE62550B2AC90592BC3F (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::set_msaaSamples(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_msaaSamples_m5856FC43DAD667D4462B6BCA938B70E42068D24C_inline (RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<NatSuite.Recorders.Inputs.CameraInput/CameraInputAttachment>()
inline CameraInputAttachment_tCFA8350EFB5ABFA6ADF694FE5F5EDFEE47CB8C3F * GameObject_AddComponent_TisCameraInputAttachment_tCFA8350EFB5ABFA6ADF694FE5F5EDFEE47CB8C3F_mA86B1D21D24062EEBDA3E23B8A4E0FD4D8799DFF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  CameraInputAttachment_tCFA8350EFB5ABFA6ADF694FE5F5EDFEE47CB8C3F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared)(__this, method);
}
// System.Void NatSuite.Recorders.Inputs.CameraInput::set_textureInput(NatSuite.Recorders.Inputs.ITextureInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput_set_textureInput_m0BFD6AE099D20A16050EC3800E5216CDF7169A0F (CameraInput_t145006E356C2401BF3BEAFF798586DFB1124F7C1 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * RenderTexture_GetTemporary_m8E85E142DCF332F8F7250E7B6495964D0BF35D25 (RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E  ___desc0, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * Camera_get_targetTexture_m1E776560FAC888D8210D49CEE310BB39D34A3FDC (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_m9D0DCEFF0C5596CBBC6FA7EE206F196CB0A8997D (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::Render()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Render_m397647083E9A37A18A452C4D7FCF23CCF8870F42 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Inputs.CameraInput/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m49DE17774AA8DAD35F896959D3A15ACB9CEACAC8 (U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_depth_m436C49A1C7669E4AD5665A1F1107BDFBA38742CD (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m01B7AF7873AA43495B8216926C1768FEDDF4CE64 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, bool ___linear4, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * RenderTexture_get_active_m670416A37BF4239DE5A55F6138CAA1FEEF184957 (const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m992E25C701DEFC8042B31022EA45F02A787A84F1 (RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m5664E184458C64BA89450F80F47705A2241E9BFE (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___source0, int32_t ___destX1, int32_t ___destY2, bool ___recalculateMipMaps3, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
inline NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mE453927FC6491AC23A63CD1174E492BC63409B2E (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  (*) (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *, const RuntimeMethod*))Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mE453927FC6491AC23A63CD1174E492BC63409B2E_gshared)(__this, method);
}
// System.Void NatSuite.Recorders.Internal.NativeRecorder::OnRecording(System.Void*,System.Char*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_OnRecording_m5E7892D13E801FE229BC73C026BEF6DFF39E5C06 (void* ___context0, Il2CppChar* ___path1, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.Bridge::FrameSize(System.IntPtr,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_FrameSize_mB2C3541D6FE0325CDE77E4A26E5AF906324AA0C0 (intptr_t ___recorder0, int32_t* ___width1, int32_t* ___height2, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Int32,System.Int32>::.ctor(!0,!1)
inline void ValueTuple_2__ctor_mCDA3078E87F827C6490EBD90430507642CECC6BF (ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186 * __this, int32_t ___item10, int32_t ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186 *, int32_t, int32_t, const RuntimeMethod*))ValueTuple_2__ctor_mCDA3078E87F827C6490EBD90430507642CECC6BF_gshared)(__this, ___item10, ___item21, method);
}
// System.Void NatSuite.Recorders.Internal.Bridge::CommitFrame(System.IntPtr,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_CommitFrame_mDDFDCA8A1E68C01B913D7B3FACEF373CC3C210E0 (intptr_t ___recorder0, void* ___pixelBuffer1, int64_t ___timestamp2, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.Bridge::CommitSamples(System.IntPtr,System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_CommitSamples_m369EA7C4B22D796749831EBD9BC1B6DA586DB215 (intptr_t ___recorder0, float* ___sampleBuffer1, int32_t ___sampleCount2, int64_t ___timestamp3, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::.ctor()
inline void TaskCompletionSource_1__ctor_m0C0E17AFFC61961F48C32130FDCF435008B25AD0 (TaskCompletionSource_1_t8CA8440E1CA3B5CE996E9F8C9F5D21D496E6F1C9 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8CA8440E1CA3B5CE996E9F8C9F5D21D496E6F1C9 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_mF00EC0A0D14A3499A1112ED147FC7464D49675F6_gshared)(__this, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.Bridge/RecordingHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingHandler__ctor_mEBC8C226DC41272625CB3E2D5425489CB286C959 (RecordingHandler_t3749B1B1F18462109BD464EC1DE2582012DD5810 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::op_Explicit(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_op_Explicit_mDDDE375E679609F240EF76F20E982C5B73A7D6BA (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___value0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t ___value0, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.Bridge::FinishWriting(System.IntPtr,NatSuite.Recorders.Internal.Bridge/RecordingHandler,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_FinishWriting_m20385BDD63F1421DBB4733459ED02DC13C8F45AC (intptr_t ___recorder0, RecordingHandler_t3749B1B1F18462109BD464EC1DE2582012DD5810 * ___callback1, void* ___context2, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.String>::get_Task()
inline Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 * TaskCompletionSource_1_get_Task_mFC27EFCD0B5D3201900E87BB9CCFFB4458494CAF_inline (TaskCompletionSource_1_t8CA8440E1CA3B5CE996E9F8C9F5D21D496E6F1C9 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 * (*) (TaskCompletionSource_1_t8CA8440E1CA3B5CE996E9F8C9F5D21D496E6F1C9 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mA7C2FA47C37BF0A144EE020746831B5D470713F3_gshared_inline)(__this, method);
}
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m7F0C4B884FFB05BD231154CBDAEBCF1917019C21 (void* ___value0, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GCHandle_op_Explicit_m12AF9B7126A0899E8011F1CCDCB877AAA56A0C8C (intptr_t ___value0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_mDBDEA6883245CF1EF963D9FA945569B2D59DCCF8 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_mA5D5D1AA7C0EB6A96F92454A8AF9C266E2DF5DA5 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::SetResult(!0)
inline void TaskCompletionSource_1_SetResult_m6FD81CD8C900045ECDFF39856335AB1448AD9067 (TaskCompletionSource_1_t8CA8440E1CA3B5CE996E9F8C9F5D21D496E6F1C9 * __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8CA8440E1CA3B5CE996E9F8C9F5D21D496E6F1C9 *, String_t*, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m6A682021093A2889DA2399F888829BDC7ADAB2A7_gshared)(__this, ___result0, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_m7D7042A9B159869A6D6AB48FD78599899E1E91BE (TaskCompletionSource_1_t8CA8440E1CA3B5CE996E9F8C9F5D21D496E6F1C9 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8CA8440E1CA3B5CE996E9F8C9F5D21D496E6F1C9 *, Exception_t *, const RuntimeMethod*))TaskCompletionSource_1_SetException_m4BB16124002CC26E634F6E5398AB849A59214F5D_gshared)(__this, ___exception0, method);
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672 (const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B (const RuntimeMethod* method);
// System.String System.IO.Directory::GetCurrentDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Directory_GetCurrentDirectory_m78DAD8FE27C7A48794B7B657F7C81DFE2F3FF56E (const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2 (const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m203C5710CD7AB2F5F1B2D9DA1DFD45BB3774179A (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor()
inline void List_1__ctor_mC06B02C45D781C1EBF33F5D2380FF522713EF33B (List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F * Directory_CreateDirectory_m0C9CAA2ECA801C4D07EA35820DA0907402ED4D41 (String_t* ___path0, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.JPGRecorder/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m8D2A98F7F224BCB32B67BD10126C017AD02435B6 (U3CU3Ec__DisplayClass4_0_t860AFA329628B6F4B0EC37606C698CD205D20051 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::LoadRawTextureData(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_LoadRawTextureData_m7F70DFFDBFA1E307A79838B94BC1A0438E063DFC (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, intptr_t ___data0, int32_t ___size1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ImageConversion_EncodeToJPG_mDE6C67AACCC7BAD006D0A852093F881D11F9C8DF (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___tex0, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Task_Run_m201E4C04F97BCF541633AF913DF20C6FF7872E44 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___action0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Add(!0)
inline void List_1_Add_mAC067166AEB86D01BCC2364DAC32CF05E89AF135 (List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E * __this, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E *, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Create()
inline AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F  AsyncTaskMethodBuilder_1_Create_mCE9D3CB6CDA544508B2257E12C9584B5231E69DE (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m3F0E5FB46E89C4EA5BCC24BCC9281AB6B904DBBC_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Start<NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF_m2E60DFBEB7D47A31AC47B02248222228A688D971 (AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F * __this, U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F *, U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF_m8960BF20E2A3246EE2A8ED7F6E0F022D48E6FCE3_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::get_Task()
inline Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 * AsyncTaskMethodBuilder_1_get_Task_m82856EBEF95BD2766D5109AA0DA0FA01547F5D70 (AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 * (*) (AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m7A3080B2C5DA97E5D085A01E4FF0CCD81A52C94C_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m07F13C1CA0BD0960392C78AB99E0F19564F9B594 (String_t* ___path0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::WhenAll(System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Task_WhenAll_mB30AA1833E196931AC9443F8DE3E971AA3536C49 (RuntimeObject* ___tasks0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87 (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF_m4A3F0091D36E154F7E535FB92481C383DDF40817 (AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF_m0FC963FBE1B590AE99A998BCE45B5B281EE789EE_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m3BDDBD9C146D972C50003272305BF45768D5BF55 (AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m25CE2E5B751E9C8A956215F81B3254BC3E238701_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m1A83C859D55B02F7598137CE0C3EB97A75FD90DE (AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F * __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F *, String_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m47DFF9DDFEDE120EE37E46F9885F4042AD2CB518_gshared)(__this, ___result0, method);
}
// System.Void NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishWritingU3Ed__7_MoveNext_m154FE85AA77E77D29C0A59A365D60600AD7F29CA (U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m9D848748388E389DB11EB835DC7FF6F45FFA16DC (AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_mB8B25808E4A008E9341780F65F66ABD299B3297A_gshared)(__this, ___stateMachine0, method);
}
// System.Void NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishWritingU3Ed__7_SetStateMachine_m5763183DCC5416B493F6B1AB873C771C3B0A1AC5 (U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.IntPtr NatSuite.Recorders.MP4Recorder::Create(System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MP4Recorder_Create_mDFAA1DB5C0E7FD49F2A6C0467C94A09947B15E6B (int32_t ___width0, int32_t ___height1, float ___frameRate2, int32_t ___sampleRate3, int32_t ___channelCount4, int32_t ___videoBitRate5, int32_t ___keyframeInterval6, int32_t ___audioBitRate7, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.Bridge::CreateMP4Recorder(System.String,System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_CreateMP4Recorder_mECE8F0A013BC60E1DC87B1C407D0EFF8954D0F46 (String_t* ___path0, int32_t ___width1, int32_t ___height2, float ___frameRate3, int32_t ___sampleRate4, int32_t ___channelCount5, int32_t ___videoBitrate6, int32_t ___keyframeInterval7, int32_t ___audioBitRate8, intptr_t* ___recorder9, const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m967EF49BBCD52204BB79BA6E9DA533833B07B800 (FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * __this, String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.WAVRecorder::CommitSamples(System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WAVRecorder_CommitSamples_mFE7684407180FF9560DA30FFD269759E2439DCF8 (WAVRecorder_tF8DBAB98828910CE19B6AA5ADD9585D511C8CF6D * __this, float* ___nativeBuffer0, int32_t ___sampleCount1, int64_t ___timestamp2, const RuntimeMethod* method);
// System.Void System.IO.UnmanagedMemoryStream::.ctor(System.Byte*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedMemoryStream__ctor_mF4040F06CEA36C1ACBA0C09319B38530D0E45632 (UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E * __this, uint8_t* ___pointer0, int64_t ___length1, const RuntimeMethod* method);
// System.Void System.IO.Stream::CopyTo(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_CopyTo_mCB6569082D97C68D16261175EE091E8539828E67 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___destination0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* BitConverter_GetBytes_m2652D1E20FC48C5953639CE61B2F064C2074CF78 (int64_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* BitConverter_GetBytes_mB5BCBAAFE3AE14F2AF1731187C7155A236DF38EA (int32_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* BitConverter_GetBytes_m692444BB12DAE2F46C7DDE67B04CF2073DEE1211 (uint16_t ___value0, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m186A8E680F2528DEDFF8F0069CC33BD813FFB1C7 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * __this, const RuntimeMethod* method);
// System.String System.IO.FileStream::get_Name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* FileStream_get_Name_mA80AE70C6516BD733732AD17F083530FE3689A08_inline (FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::FromResult<System.String>(!!0)
inline Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 * Task_FromResult_TisString_t_m0F2C9F4AB9FCF2BA6DC300777839282B51CC623A (String_t* ___result0, const RuntimeMethod* method)
{
	return ((  Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 * (*) (String_t*, const RuntimeMethod*))Task_FromResult_TisRuntimeObject_mB48ABD26E07D898829AEE8A60C4186F8850835A0_gshared)(___result0, method);
}
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mA6460CB4A6DA9D8544194DC64848B6A9168B3EB3 (EmbeddedAttribute_tE186BA8DF552342AD6F16CE857BF6B7C531EEB3B * __this, const RuntimeMethod* method)
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
// System.Int64 NatSuite.Recorders.Clocks.FixedIntervalClock::get_timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FixedIntervalClock_get_timestamp_m77CF149223B285AF5DE17BE609B8BD1C939D66D3 (FixedIntervalClock_t6B8950D95DADD3A3D46DFB2CEB597F66E2C45401 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	int64_t G_B3_0 = 0;
	{
		bool L_0 = __this->get_autoTick_1();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int64_t L_1 = __this->get_ticks_2();
		G_B3_0 = L_1;
		goto IL_0022;
	}

IL_0010:
	{
		int64_t L_2 = __this->get_ticks_2();
		V_0 = L_2;
		int64_t L_3 = V_0;
		__this->set_ticks_2(((int64_t)il2cpp_codegen_add((int64_t)L_3, (int64_t)(((int64_t)((int64_t)1))))));
		int64_t L_4 = V_0;
		G_B3_0 = L_4;
	}

IL_0022:
	{
		double L_5 = __this->get_interval_0();
		return (((int64_t)((int64_t)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)(((double)((double)G_B3_0))), (double)L_5)), (double)(1000000000.0))))));
	}
}
// System.Void NatSuite.Recorders.Clocks.FixedIntervalClock::.ctor(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedIntervalClock__ctor_m35E78185FAA724C017BE1FA691D56460B1B0EB68 (FixedIntervalClock_t6B8950D95DADD3A3D46DFB2CEB597F66E2C45401 * __this, float ___framerate0, bool ___autoTick1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		float L_0 = ___framerate0;
		__this->set_interval_0(((double)((double)(1.0)/(double)(((double)((double)L_0))))));
		__this->set_ticks_2((((int64_t)((int64_t)0))));
		bool L_1 = ___autoTick1;
		__this->set_autoTick_1(L_1);
		return;
	}
}
// System.Void NatSuite.Recorders.Clocks.FixedIntervalClock::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedIntervalClock_Tick_mED58D54CB3CFFC3CE5DB27B96A8CBB96A3F87421 (FixedIntervalClock_t6B8950D95DADD3A3D46DFB2CEB597F66E2C45401 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_ticks_2();
		__this->set_ticks_2(((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)(((int64_t)((int64_t)1))))));
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
// System.Int64 NatSuite.Recorders.Clocks.RealtimeClock::get_timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RealtimeClock_get_timestamp_mC235E164D414CF373A30D4F469E5D0F0A54B69DE (RealtimeClock_t613C06FF11B6B417355A3F55239491891A872198 * __this, const RuntimeMethod* method)
{
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int64_t G_B2_0 = 0;
	int64_t G_B1_0 = 0;
	{
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_0 = __this->get_stopwatch_0();
		NullCheck(L_0);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = Stopwatch_get_Elapsed_m6735B32BFB466FC4F52112AC3493D37404D184BB(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int64_t L_2 = TimeSpan_get_Ticks_m829C28C42028CDBFC9E338962DC7B6B10C8FFBE7_inline((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_0), /*hidden argument*/NULL);
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_3 = __this->get_stopwatch_0();
		NullCheck(L_3);
		bool L_4 = Stopwatch_get_IsRunning_mD7688A050B9EE2BE874EDD1D735B1FB46A0113E6_inline(L_3, /*hidden argument*/NULL);
		G_B1_0 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_2, (int64_t)(((int64_t)((int64_t)((int32_t)100))))));
		if (L_4)
		{
			G_B2_0 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_2, (int64_t)(((int64_t)((int64_t)((int32_t)100))))));
			goto IL_002f;
		}
	}
	{
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_5 = __this->get_stopwatch_0();
		NullCheck(L_5);
		Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A(L_5, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
	}

IL_002f:
	{
		return G_B2_0;
	}
}
// System.Boolean NatSuite.Recorders.Clocks.RealtimeClock::get_paused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealtimeClock_get_paused_mC5CAD56125DC7F40E05731AF0C2CD28F02D6D6E7 (RealtimeClock_t613C06FF11B6B417355A3F55239491891A872198 * __this, const RuntimeMethod* method)
{
	{
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_0 = __this->get_stopwatch_0();
		NullCheck(L_0);
		bool L_1 = Stopwatch_get_IsRunning_mD7688A050B9EE2BE874EDD1D735B1FB46A0113E6_inline(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void NatSuite.Recorders.Clocks.RealtimeClock::set_paused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealtimeClock_set_paused_m85544C932A9C0B284ED80D50102512B7D7027781 (RealtimeClock_t613C06FF11B6B417355A3F55239491891A872198 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RealtimeClock_set_paused_m85544C932A9C0B284ED80D50102512B7D7027781_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B3_0 = NULL;
	{
		bool L_0 = ___value0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_1 = __this->get_stopwatch_0();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_2 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_2, L_1, (intptr_t)((intptr_t)Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A_RuntimeMethod_var), /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0027;
	}

IL_0016:
	{
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_3 = __this->get_stopwatch_0();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_4 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_4, L_3, (intptr_t)((intptr_t)Stopwatch_Stop_m8AE20980FC1C80DFAC27FA7E2BAFC88E94B839B3_RuntimeMethod_var), /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0027:
	{
		NullCheck(G_B3_0);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Clocks.RealtimeClock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealtimeClock__ctor_m689897289B7133DBC2FA8BB3851BD820375F4089 (RealtimeClock_t613C06FF11B6B417355A3F55239491891A872198 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RealtimeClock__ctor_m689897289B7133DBC2FA8BB3851BD820375F4089_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_0 = (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 *)il2cpp_codegen_object_new(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860(L_0, /*hidden argument*/NULL);
		__this->set_stopwatch_0(L_0);
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
// System.Void NatSuite.Recorders.GIFRecorder::.ctor(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GIFRecorder__ctor_mE731EB5B8203D6EBE92F676E793FF285495CE603 (GIFRecorder_t0781BAD24FD6FB3A8EA7CE94C414D53743F4C8AF * __this, int32_t ___width0, int32_t ___height1, float ___frameDuration2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		float L_2 = ___frameDuration2;
		intptr_t L_3 = GIFRecorder_Create_mFF338D41F1E0FE4C9B1F5397A34E2258B66F44C9(L_0, L_1, L_2, /*hidden argument*/NULL);
		NativeRecorder__ctor_m58A5663B2405A5FAE668C204525FF0429C5FCE40(__this, (intptr_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.GIFRecorder::CommitFrame(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GIFRecorder_CommitFrame_m55E5AA4181AEFD09580F4A15E09D0707C0A9357C (GIFRecorder_t0781BAD24FD6FB3A8EA7CE94C414D53743F4C8AF * __this, void* ___nativeBuffer0, int64_t ___timestamp1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___nativeBuffer0;
		int64_t L_1 = ___timestamp1;
		NativeRecorder_CommitFrame_mC586BAE8EA9E107E8A38C72C18A1130FCDB28EAF(__this, (void*)(void*)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.GIFRecorder::CommitSamples(System.Single[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GIFRecorder_CommitSamples_m2BC6CD665CA3BC6EF393D5D9CA15A36B5E64121B (GIFRecorder_t0781BAD24FD6FB3A8EA7CE94C414D53743F4C8AF * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___sampleBuffer0, int64_t ___timestamp1, const RuntimeMethod* method)
{
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = ___sampleBuffer0;
		int64_t L_1 = ___timestamp1;
		NativeRecorder_CommitSamples_m79DB331B167EC3976010955AE18B81CE5076564D(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.GIFRecorder::CommitSamples(System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GIFRecorder_CommitSamples_m7EAC6145DA5FEE0904A5D21949F4D34836217DD2 (GIFRecorder_t0781BAD24FD6FB3A8EA7CE94C414D53743F4C8AF * __this, float* ___nativeBuffer0, int32_t ___sampleCount1, int64_t ___timestamp2, const RuntimeMethod* method)
{
	{
		float* L_0 = ___nativeBuffer0;
		int32_t L_1 = ___sampleCount1;
		int64_t L_2 = ___timestamp2;
		NativeRecorder_CommitSamples_mE1D60E8DF6FE2527D5D9D3195B24CF1AE4422E82(__this, (float*)(float*)L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr NatSuite.Recorders.GIFRecorder::Create(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GIFRecorder_Create_mFF338D41F1E0FE4C9B1F5397A34E2258B66F44C9 (int32_t ___width0, int32_t ___height1, float ___frameDuration2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GIFRecorder_Create_mFF338D41F1E0FE4C9B1F5397A34E2258B66F44C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = Utility_GetPath_mE3FC8A633DC1AFCCA2DDC4503482ECA81DFB483B(_stringLiteral64CC1194405FA366D9AE015C627F4609DEAC4879, /*hidden argument*/NULL);
		int32_t L_1 = ___width0;
		int32_t L_2 = ___height1;
		float L_3 = ___frameDuration2;
		Bridge_CreateGIFRecorder_m414060091121AE23B1119862E07FDF7596F5244D(L_0, L_1, L_2, L_3, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		intptr_t L_4 = V_0;
		return (intptr_t)L_4;
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
// System.Void NatSuite.Recorders.HEVCRecorder::.ctor(System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HEVCRecorder__ctor_m6E11D7825041329536837F476B4E3991E1FB6D33 (HEVCRecorder_tD5DD99797DFB9AE78FAE274C7BC80C68AD3F8CDD * __this, int32_t ___width0, int32_t ___height1, float ___frameRate2, int32_t ___sampleRate3, int32_t ___channelCount4, int32_t ___videoBitRate5, int32_t ___keyframeInterval6, int32_t ___audioBitRate7, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		float L_2 = ___frameRate2;
		int32_t L_3 = ___sampleRate3;
		int32_t L_4 = ___channelCount4;
		int32_t L_5 = ___videoBitRate5;
		int32_t L_6 = ___keyframeInterval6;
		int32_t L_7 = ___audioBitRate7;
		intptr_t L_8 = HEVCRecorder_Create_m086E0A1A743A5B238556DF0305BA8186FC555440(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		NativeRecorder__ctor_m58A5663B2405A5FAE668C204525FF0429C5FCE40(__this, (intptr_t)L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr NatSuite.Recorders.HEVCRecorder::Create(System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HEVCRecorder_Create_m086E0A1A743A5B238556DF0305BA8186FC555440 (int32_t ___width0, int32_t ___height1, float ___frameRate2, int32_t ___sampleRate3, int32_t ___channelCount4, int32_t ___videoBitRate5, int32_t ___keyframeInterval6, int32_t ___audioBitRate7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HEVCRecorder_Create_m086E0A1A743A5B238556DF0305BA8186FC555440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = Utility_GetPath_mE3FC8A633DC1AFCCA2DDC4503482ECA81DFB483B(_stringLiteral2BF5D215F67675901A33DBF902E7FC75E8E74861, /*hidden argument*/NULL);
		int32_t L_1 = ___width0;
		int32_t L_2 = ___height1;
		float L_3 = ___frameRate2;
		int32_t L_4 = ___sampleRate3;
		int32_t L_5 = ___channelCount4;
		int32_t L_6 = ___videoBitRate5;
		int32_t L_7 = ___keyframeInterval6;
		int32_t L_8 = ___audioBitRate7;
		Bridge_CreateHEVCRecorder_mFC85E79F70C73E9E70FB80AC4FF97C1A8A0CC4BE(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		intptr_t L_9 = V_0;
		return (intptr_t)L_9;
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
// System.Void NatSuite.Recorders.Inputs.AsyncTextureInput::.ctor(NatSuite.Recorders.IMediaRecorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTextureInput__ctor_mDCA445C0729F551F5A81153271CF4B6DAC9CCF3D (AsyncTextureInput_tBB64A7DB20DDF11CF95D889232175680F44CEE86 * __this, RuntimeObject* ___recorder0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___recorder0;
		__this->set_recorder_0(L_0);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AsyncTextureInput::CommitFrame(UnityEngine.Texture,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTextureInput_CommitFrame_m5DA7CD309B543E89124045DFFB279A1EDB068128 (AsyncTextureInput_tBB64A7DB20DDF11CF95D889232175680F44CEE86 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___texture0, int64_t ___timestamp1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncTextureInput_CommitFrame_m5DA7CD309B543E89124045DFFB279A1EDB068128_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t36C20201CA222B4EC51F0916A419217897C57C92 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * V_3 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_t36C20201CA222B4EC51F0916A419217897C57C92 * L_0 = (U3CU3Ec__DisplayClass1_0_t36C20201CA222B4EC51F0916A419217897C57C92 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t36C20201CA222B4EC51F0916A419217897C57C92_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass1_0__ctor_m1C3E3B5DD0D3DA339978B46CB72E59E8849D9AF6(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t36C20201CA222B4EC51F0916A419217897C57C92 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass1_0_t36C20201CA222B4EC51F0916A419217897C57C92 * L_2 = V_0;
		int64_t L_3 = ___timestamp1;
		NullCheck(L_2);
		L_2->set_timestamp_1(L_3);
		RuntimeObject* L_4 = __this->get_recorder_0();
		NullCheck(L_4);
		ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  L_5 = InterfaceFuncInvoker0< ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.IMediaRecorder::get_frameSize() */, IMediaRecorder_t4F8A0713BF2D16BC536BF9258735410897A4EE14_il2cpp_TypeInfo_var, L_4);
		ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  L_6 = L_5;
		int32_t L_7 = L_6.get_Item1_0();
		V_1 = L_7;
		int32_t L_8 = L_6.get_Item2_1();
		V_2 = L_8;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_11 = RenderTexture_GetTemporary_m6E0EF85D2DEC0626DE5BB5D008A659F1CD66D9F8(L_9, L_10, ((int32_t)24), 0, /*hidden argument*/NULL);
		V_3 = L_11;
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_12 = ___texture0;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_13 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var);
		Graphics_Blit_mB042EC04307A5617038DA4210DE7BA4B3E529113(L_12, L_13, /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_14 = V_3;
		U3CU3Ec__DisplayClass1_0_t36C20201CA222B4EC51F0916A419217897C57C92 * L_15 = V_0;
		Action_1_t5AD40848191FB0BB2E39E6C0B21353B16C7BB06D * L_16 = (Action_1_t5AD40848191FB0BB2E39E6C0B21353B16C7BB06D *)il2cpp_codegen_object_new(Action_1_t5AD40848191FB0BB2E39E6C0B21353B16C7BB06D_il2cpp_TypeInfo_var);
		Action_1__ctor_m1E91D63FDA50D305F8E0529DCAAC2C6B77A62AC2(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass1_0_U3CCommitFrameU3Eb__0_m479B9B52D96F39484E654CCE2C1C8485FD66A652_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m1E91D63FDA50D305F8E0529DCAAC2C6B77A62AC2_RuntimeMethod_var);
		AsyncGPUReadback_Request_m482B813BEB7E7F199BA993ED5DF6B3BFC6A5BBFF(L_14, 0, L_16, /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_17 = V_3;
		RenderTexture_ReleaseTemporary_mFBA6F18138965049AA901D62A0080B1A087A38EA(L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AsyncTextureInput::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTextureInput_Dispose_mEDFDCBC53EC634F80BB567293B12ACB3ED56E41B (AsyncTextureInput_tBB64A7DB20DDF11CF95D889232175680F44CEE86 * __this, const RuntimeMethod* method)
{
	{
		__this->set_recorder_0((RuntimeObject*)NULL);
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
// System.Void NatSuite.Recorders.Inputs.AsyncTextureInput_<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m1C3E3B5DD0D3DA339978B46CB72E59E8849D9AF6 (U3CU3Ec__DisplayClass1_0_t36C20201CA222B4EC51F0916A419217897C57C92 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AsyncTextureInput_<>c__DisplayClass1_0::<CommitFrame>b__0(UnityEngine.Rendering.AsyncGPUReadbackRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CCommitFrameU3Eb__0_m479B9B52D96F39484E654CCE2C1C8485FD66A652 (U3CU3Ec__DisplayClass1_0_t36C20201CA222B4EC51F0916A419217897C57C92 * __this, AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C  ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass1_0_U3CCommitFrameU3Eb__0_m479B9B52D96F39484E654CCE2C1C8485FD66A652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		AsyncTextureInput_tBB64A7DB20DDF11CF95D889232175680F44CEE86 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_recorder_0();
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  L_3 = AsyncGPUReadbackRequest_GetData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m1014C6C7E42B93215072CC3ABD614AD57C449949((AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)(&___request0), 0, /*hidden argument*/AsyncGPUReadbackRequest_GetData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m1014C6C7E42B93215072CC3ABD614AD57C449949_RuntimeMethod_var);
		void* L_4 = NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mF9CA0984C93B0D8BC4A3BBC5CE664F3792B936CE(L_3, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mF9CA0984C93B0D8BC4A3BBC5CE664F3792B936CE_RuntimeMethod_var);
		int64_t L_5 = __this->get_timestamp_1();
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< void*, int64_t >::Invoke(2 /* System.Void NatSuite.Recorders.IMediaRecorder::CommitFrame(System.Void*,System.Int64) */, IMediaRecorder_t4F8A0713BF2D16BC536BF9258735410897A4EE14_il2cpp_TypeInfo_var, G_B2_0, (void*)(void*)L_4, L_5);
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
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,UnityEngine.AudioListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_m85EF20D4FF7DEC26BC84739DDC90B92AC46EF6B4 (AudioInput_t1BECD68B888576808651FAC2685713371899BCC9 * __this, RuntimeObject* ___recorder0, AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * ___audioListener1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___recorder0;
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_1 = ___audioListener1;
		AudioInput__ctor_mF39642A8F2FF955BB4F7207DE9137091D4FB503E(__this, L_0, (RuntimeObject*)NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.AudioListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_mF39642A8F2FF955BB4F7207DE9137091D4FB503E (AudioInput_t1BECD68B888576808651FAC2685713371899BCC9 * __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * ___audioListener2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___recorder0;
		RuntimeObject* L_1 = ___clock1;
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_2 = ___audioListener2;
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		AudioInput__ctor_m90CC0E9F917DF1A3BB7BBA797C4A131C948D892A(__this, L_0, L_1, L_3, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,UnityEngine.AudioSource,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_m64CD64E1841EC122DC07C4160706588CC9077844 (AudioInput_t1BECD68B888576808651FAC2685713371899BCC9 * __this, RuntimeObject* ___recorder0, AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___audioSource1, bool ___mute2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___recorder0;
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_1 = ___audioSource1;
		bool L_2 = ___mute2;
		AudioInput__ctor_m8053572A695887C4B45B84E22A077EDDFB0F64D6(__this, L_0, (RuntimeObject*)NULL, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.AudioSource,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_m8053572A695887C4B45B84E22A077EDDFB0F64D6 (AudioInput_t1BECD68B888576808651FAC2685713371899BCC9 * __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___audioSource2, bool ___mute3, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___recorder0;
		RuntimeObject* L_1 = ___clock1;
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_2 = ___audioSource2;
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		bool L_4 = ___mute3;
		AudioInput__ctor_m90CC0E9F917DF1A3BB7BBA797C4A131C948D892A(__this, L_0, L_1, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AudioInput::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput_Dispose_m98E4467A869D5BFD6889AC1B5E450EC60833A73F (AudioInput_t1BECD68B888576808651FAC2685713371899BCC9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioInput_Dispose_m98E4467A869D5BFD6889AC1B5E450EC60833A73F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioInputAttachment_t212A31FBB672937737A15FEFA2D253A35D84D603 * L_0 = __this->get_attachment_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_m90CC0E9F917DF1A3BB7BBA797C4A131C948D892A (AudioInput_t1BECD68B888576808651FAC2685713371899BCC9 * __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject2, bool ___mute3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioInput__ctor_m90CC0E9F917DF1A3BB7BBA797C4A131C948D892A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___recorder0;
		__this->set_recorder_0(L_0);
		RuntimeObject* L_1 = ___clock1;
		__this->set_clock_1(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ___gameObject2;
		NullCheck(L_2);
		AudioInputAttachment_t212A31FBB672937737A15FEFA2D253A35D84D603 * L_3 = GameObject_AddComponent_TisAudioInputAttachment_t212A31FBB672937737A15FEFA2D253A35D84D603_m38757630CE9495F255417A3DB5B8BFF0F3A939ED(L_2, /*hidden argument*/GameObject_AddComponent_TisAudioInputAttachment_t212A31FBB672937737A15FEFA2D253A35D84D603_m38757630CE9495F255417A3DB5B8BFF0F3A939ED_RuntimeMethod_var);
		__this->set_attachment_2(L_3);
		AudioInputAttachment_t212A31FBB672937737A15FEFA2D253A35D84D603 * L_4 = __this->get_attachment_2();
		Action_1_t597B11C3E4C67A99A589ECD4CE2E5591EED078F6 * L_5 = (Action_1_t597B11C3E4C67A99A589ECD4CE2E5591EED078F6 *)il2cpp_codegen_object_new(Action_1_t597B11C3E4C67A99A589ECD4CE2E5591EED078F6_il2cpp_TypeInfo_var);
		Action_1__ctor_m5E5D0FEDDF626CE8E117DEDDB964E669422E758A(L_5, __this, (intptr_t)((intptr_t)AudioInput_OnSampleBuffer_m127F3903B2953BCD61C4FF84A16B835EC71AAF8B_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5E5D0FEDDF626CE8E117DEDDB964E669422E758A_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set_sampleBufferDelegate_4(L_5);
		bool L_6 = ___mute3;
		__this->set_mute_3(L_6);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AudioInput::OnSampleBuffer(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput_OnSampleBuffer_m127F3903B2953BCD61C4FF84A16B835EC71AAF8B (AudioInput_t1BECD68B888576808651FAC2685713371899BCC9 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioInput_OnSampleBuffer_m127F3903B2953BCD61C4FF84A16B835EC71AAF8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* G_B2_1 = NULL;
	RuntimeObject* G_B2_2 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* G_B1_1 = NULL;
	RuntimeObject* G_B1_2 = NULL;
	int64_t G_B3_0 = 0;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* G_B3_1 = NULL;
	RuntimeObject* G_B3_2 = NULL;
	{
		AndroidJNI_AttachCurrentThread_m6188062B9223004309C89C2054263F38FFB45E51(/*hidden argument*/NULL);
		RuntimeObject* L_0 = __this->get_recorder_0();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = ___data0;
		RuntimeObject* L_2 = __this->get_clock_1();
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_001b;
		}
	}
	{
		G_B3_0 = (((int64_t)((int64_t)0)));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		goto IL_0020;
	}

IL_001b:
	{
		NullCheck(G_B2_0);
		int64_t L_4 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* System.Int64 NatSuite.Recorders.Clocks.IClock::get_timestamp() */, IClock_t8A7EF3881C3D1F46D37DB7906AC715BC520B594F_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_0020:
	{
		NullCheck(G_B3_2);
		InterfaceActionInvoker2< SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, int64_t >::Invoke(3 /* System.Void NatSuite.Recorders.IMediaRecorder::CommitSamples(System.Single[],System.Int64) */, IMediaRecorder_t4F8A0713BF2D16BC536BF9258735410897A4EE14_il2cpp_TypeInfo_var, G_B3_2, G_B3_1, G_B3_0);
		bool L_5 = __this->get_mute_3();
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_6 = ___data0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_7 = ___data0;
		NullCheck(L_7);
		Array_Clear_m174F4957D6DEDB6359835123005304B14E79132E((RuntimeArray *)(RuntimeArray *)L_6, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))), /*hidden argument*/NULL);
	}

IL_0037:
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
// System.Void NatSuite.Recorders.Inputs.AudioInput_AudioInputAttachment::OnAudioFilterRead(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInputAttachment_OnAudioFilterRead_mAE0D852A133AAABCC34EE303E8D3A288C65E85AE (AudioInputAttachment_t212A31FBB672937737A15FEFA2D253A35D84D603 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___data0, int32_t ___channels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioInputAttachment_OnAudioFilterRead_mAE0D852A133AAABCC34EE303E8D3A288C65E85AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t597B11C3E4C67A99A589ECD4CE2E5591EED078F6 * G_B2_0 = NULL;
	Action_1_t597B11C3E4C67A99A589ECD4CE2E5591EED078F6 * G_B1_0 = NULL;
	{
		Action_1_t597B11C3E4C67A99A589ECD4CE2E5591EED078F6 * L_0 = __this->get_sampleBufferDelegate_4();
		Action_1_t597B11C3E4C67A99A589ECD4CE2E5591EED078F6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_2 = ___data0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mBF8A46AB499B810912470F26049872EAE1707445(G_B2_0, L_2, /*hidden argument*/Action_1_Invoke_mBF8A46AB499B810912470F26049872EAE1707445_RuntimeMethod_var);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AudioInput_AudioInputAttachment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInputAttachment__ctor_m5E866D0185684DD7A11356E6F793BC229D4691EE (AudioInputAttachment_t212A31FBB672937737A15FEFA2D253A35D84D603 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// NatSuite.Recorders.Inputs.ITextureInput NatSuite.Recorders.Inputs.CameraInput::get_textureInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraInput_get_textureInput_m5A4F52040D28AD8052F4D1DB2089723BA97F52E2 (CameraInput_t145006E356C2401BF3BEAFF798586DFB1124F7C1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_input_6();
		return L_0;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput::set_textureInput(NatSuite.Recorders.Inputs.ITextureInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput_set_textureInput_m0BFD6AE099D20A16050EC3800E5216CDF7169A0F (CameraInput_t145006E356C2401BF3BEAFF798586DFB1124F7C1 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraInput_set_textureInput_m0BFD6AE099D20A16050EC3800E5216CDF7169A0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get_input_6();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		RuntimeObject* L_2 = ___value0;
		__this->set_input_6(L_2);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput::.ctor(NatSuite.Recorders.IMediaRecorder,UnityEngine.Camera[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput__ctor_m28AF710E2B513DCC1D032339D5D5337D1B8BE969 (CameraInput_t145006E356C2401BF3BEAFF798586DFB1124F7C1 * __this, RuntimeObject* ___recorder0, CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* ___cameras1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___recorder0;
		CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* L_1 = ___cameras1;
		CameraInput__ctor_m252B0C6F74FA02EBC52F43D06A5A557ECFE7C23B(__this, L_0, (RuntimeObject*)NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.Camera[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput__ctor_m252B0C6F74FA02EBC52F43D06A5A557ECFE7C23B (CameraInput_t145006E356C2401BF3BEAFF798586DFB1124F7C1 * __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* ___cameras2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraInput__ctor_m252B0C6F74FA02EBC52F43D06A5A557ECFE7C23B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Comparison_1_tA09B29E8CCC4084369385DE52AFCD217D1B7B528 * G_B2_0 = NULL;
	CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* G_B2_1 = NULL;
	Comparison_1_tA09B29E8CCC4084369385DE52AFCD217D1B7B528 * G_B1_0 = NULL;
	CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* G_B1_1 = NULL;
	CameraInput_t145006E356C2401BF3BEAFF798586DFB1124F7C1 * G_B4_0 = NULL;
	CameraInput_t145006E356C2401BF3BEAFF798586DFB1124F7C1 * G_B3_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	CameraInput_t145006E356C2401BF3BEAFF798586DFB1124F7C1 * G_B5_1 = NULL;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* L_0 = ___cameras2;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D_il2cpp_TypeInfo_var);
		Comparison_1_tA09B29E8CCC4084369385DE52AFCD217D1B7B528 * L_1 = ((U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D_il2cpp_TypeInfo_var))->get_U3CU3E9__5_0_1();
		Comparison_1_tA09B29E8CCC4084369385DE52AFCD217D1B7B528 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D_il2cpp_TypeInfo_var);
		U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D * L_3 = ((U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Comparison_1_tA09B29E8CCC4084369385DE52AFCD217D1B7B528 * L_4 = (Comparison_1_tA09B29E8CCC4084369385DE52AFCD217D1B7B528 *)il2cpp_codegen_object_new(Comparison_1_tA09B29E8CCC4084369385DE52AFCD217D1B7B528_il2cpp_TypeInfo_var);
		Comparison_1__ctor_mE00BFCA4C499EC760666D4A4C674BDB63DC22E1E(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__5_0_m13DE00427DD5D6A266033EE9424C192A29FF21E8_RuntimeMethod_var), /*hidden argument*/Comparison_1__ctor_mE00BFCA4C499EC760666D4A4C674BDB63DC22E1E_RuntimeMethod_var);
		Comparison_1_tA09B29E8CCC4084369385DE52AFCD217D1B7B528 * L_5 = L_4;
		((U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D_il2cpp_TypeInfo_var))->set_U3CU3E9__5_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0026:
	{
		Array_Sort_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mBFDB026CC7933627FD549E7B5135CDFBA4CB1B39(G_B2_1, G_B2_0, /*hidden argument*/Array_Sort_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mBFDB026CC7933627FD549E7B5135CDFBA4CB1B39_RuntimeMethod_var);
		RuntimeObject* L_6 = ___recorder0;
		NullCheck(L_6);
		ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  L_7 = InterfaceFuncInvoker0< ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.IMediaRecorder::get_frameSize() */, IMediaRecorder_t4F8A0713BF2D16BC536BF9258735410897A4EE14_il2cpp_TypeInfo_var, L_6);
		ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  L_8 = L_7;
		int32_t L_9 = L_8.get_Item1_0();
		V_0 = L_9;
		int32_t L_10 = L_8.get_Item2_1();
		V_1 = L_10;
		RuntimeObject* L_11 = ___recorder0;
		__this->set_recorder_1(L_11);
		RuntimeObject* L_12 = ___clock1;
		__this->set_clock_2(L_12);
		CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* L_13 = ___cameras2;
		__this->set_cameras_3(L_13);
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		RenderTextureDescriptor__ctor_m693E79B09E671C2AF9A0363F7487AC9C89BCD068((&L_16), L_14, L_15, 0, ((int32_t)24), /*hidden argument*/NULL);
		__this->set_frameDescriptor_4(L_16);
		bool L_17 = SystemInfo_get_supportsAsyncGPUReadback_m2DA36E49B67417CA2B3D14A017F5A337ECA647E6(/*hidden argument*/NULL);
		G_B3_0 = __this;
		if (L_17)
		{
			G_B4_0 = __this;
			goto IL_0075;
		}
	}
	{
		RuntimeObject* L_18 = ___recorder0;
		TextureInput_tF3448248DE3212BF6CD05BC2F8E8CDB5A1AF3DF7 * L_19 = (TextureInput_tF3448248DE3212BF6CD05BC2F8E8CDB5A1AF3DF7 *)il2cpp_codegen_object_new(TextureInput_tF3448248DE3212BF6CD05BC2F8E8CDB5A1AF3DF7_il2cpp_TypeInfo_var);
		TextureInput__ctor_mA3A86F30E2D7AE9A5A16CC07A6BB76761AB90956(L_19, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		RuntimeObject* L_20 = V_2;
		G_B5_0 = L_20;
		G_B5_1 = G_B3_0;
		goto IL_007d;
	}

IL_0075:
	{
		RuntimeObject* L_21 = ___recorder0;
		AsyncTextureInput_tBB64A7DB20DDF11CF95D889232175680F44CEE86 * L_22 = (AsyncTextureInput_tBB64A7DB20DDF11CF95D889232175680F44CEE86 *)il2cpp_codegen_object_new(AsyncTextureInput_tBB64A7DB20DDF11CF95D889232175680F44CEE86_il2cpp_TypeInfo_var);
		AsyncTextureInput__ctor_mDCA445C0729F551F5A81153271CF4B6DAC9CCF3D(L_22, L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		RuntimeObject* L_23 = V_2;
		G_B5_0 = L_23;
		G_B5_1 = G_B4_0;
	}

IL_007d:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_input_6(G_B5_0);
		RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E * L_24 = __this->get_address_of_frameDescriptor_4();
		RenderTextureDescriptor_set_sRGB_m19974099678BC320DA80ED60E71E1F46DAE5426F((RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E *)L_24, (bool)1, /*hidden argument*/NULL);
		RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E * L_25 = __this->get_address_of_frameDescriptor_4();
		int32_t L_26 = QualitySettings_get_antiAliasing_m28EE8A60C753C1D160BB393D92D98CC0E1776B16(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_27 = Mathf_Max_mBDE4C6F1883EE3215CD7AE62550B2AC90592BC3F(L_26, 1, /*hidden argument*/NULL);
		RenderTextureDescriptor_set_msaaSamples_m5856FC43DAD667D4462B6BCA938B70E42068D24C_inline((RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E *)L_25, L_27, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_28, _stringLiteral0845425C2C291D818EC7819146081B24DCAB1F5C, /*hidden argument*/NULL);
		NullCheck(L_28);
		CameraInputAttachment_tCFA8350EFB5ABFA6ADF694FE5F5EDFEE47CB8C3F * L_29 = GameObject_AddComponent_TisCameraInputAttachment_tCFA8350EFB5ABFA6ADF694FE5F5EDFEE47CB8C3F_mA86B1D21D24062EEBDA3E23B8A4E0FD4D8799DFF(L_28, /*hidden argument*/GameObject_AddComponent_TisCameraInputAttachment_tCFA8350EFB5ABFA6ADF694FE5F5EDFEE47CB8C3F_mA86B1D21D24062EEBDA3E23B8A4E0FD4D8799DFF_RuntimeMethod_var);
		__this->set_attachment_5(L_29);
		CameraInputAttachment_tCFA8350EFB5ABFA6ADF694FE5F5EDFEE47CB8C3F * L_30 = __this->get_attachment_5();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_31 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_31, __this, (intptr_t)((intptr_t)CameraInput_CommitFrame_m19C6A8C226F34B3366071D6A57C1F34CC56325DE_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_30);
		L_30->set_handler_4(L_31);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput_Dispose_mA3916B1E8283D1624A3610569C16D3FFB329BA97 (CameraInput_t145006E356C2401BF3BEAFF798586DFB1124F7C1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraInput_Dispose_mA3916B1E8283D1624A3610569C16D3FFB329BA97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CameraInputAttachment_tCFA8350EFB5ABFA6ADF694FE5F5EDFEE47CB8C3F * L_0 = __this->get_attachment_5();
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_1, /*hidden argument*/NULL);
		CameraInput_set_textureInput_m0BFD6AE099D20A16050EC3800E5216CDF7169A0F(__this, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput::CommitFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput_CommitFrame_m19C6A8C226F34B3366071D6A57C1F34CC56325DE (CameraInput_t145006E356C2401BF3BEAFF798586DFB1124F7C1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraInput_CommitFrame_m19C6A8C226F34B3366071D6A57C1F34CC56325DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * G_B9_1 = NULL;
	RuntimeObject* G_B9_2 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * G_B8_1 = NULL;
	RuntimeObject* G_B8_2 = NULL;
	int64_t G_B10_0 = 0;
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * G_B10_1 = NULL;
	RuntimeObject* G_B10_2 = NULL;
	{
		int32_t L_0 = __this->get_frameCount_7();
		V_1 = L_0;
		int32_t L_1 = V_1;
		__this->set_frameCount_7(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->get_frameSkip_0();
		if (!((int32_t)((int32_t)L_2%(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E  L_4 = __this->get_frameDescriptor_4();
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_5 = RenderTexture_GetTemporary_m8E85E142DCF332F8F7250E7B6495964D0BF35D25(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		V_2 = 0;
		goto IL_0040;
	}

IL_002d:
	{
		CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* L_6 = __this->get_cameras_3();
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_10 = V_0;
		VirtActionInvoker2< Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 *, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * >::Invoke(5 /* System.Void NatSuite.Recorders.Inputs.CameraInput::CommitFrame(UnityEngine.Camera,UnityEngine.RenderTexture) */, __this, L_9, L_10);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0040:
	{
		int32_t L_12 = V_2;
		CameraU5BU5D_t2A1957E88FB79357C12B87941970D776D30E90F9* L_13 = __this->get_cameras_3();
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))))
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject* L_14 = __this->get_input_6();
		RuntimeObject* L_15 = L_14;
		G_B6_0 = L_15;
		if (L_15)
		{
			G_B7_0 = L_15;
			goto IL_0057;
		}
	}
	{
		goto IL_0070;
	}

IL_0057:
	{
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_16 = V_0;
		RuntimeObject* L_17 = __this->get_clock_2();
		RuntimeObject* L_18 = L_17;
		G_B8_0 = L_18;
		G_B8_1 = L_16;
		G_B8_2 = G_B7_0;
		if (L_18)
		{
			G_B9_0 = L_18;
			G_B9_1 = L_16;
			G_B9_2 = G_B7_0;
			goto IL_0066;
		}
	}
	{
		G_B10_0 = (((int64_t)((int64_t)0)));
		G_B10_1 = G_B8_1;
		G_B10_2 = G_B8_2;
		goto IL_006b;
	}

IL_0066:
	{
		NullCheck(G_B9_0);
		int64_t L_19 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* System.Int64 NatSuite.Recorders.Clocks.IClock::get_timestamp() */, IClock_t8A7EF3881C3D1F46D37DB7906AC715BC520B594F_il2cpp_TypeInfo_var, G_B9_0);
		G_B10_0 = L_19;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}

IL_006b:
	{
		NullCheck(G_B10_2);
		InterfaceActionInvoker2< Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *, int64_t >::Invoke(0 /* System.Void NatSuite.Recorders.Inputs.ITextureInput::CommitFrame(UnityEngine.Texture,System.Int64) */, ITextureInput_t874F61E8A5A6E38CAFFEA8C64CAD1240069D441B_il2cpp_TypeInfo_var, G_B10_2, G_B10_1, G_B10_0);
	}

IL_0070:
	{
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_20 = V_0;
		RenderTexture_ReleaseTemporary_mFBA6F18138965049AA901D62A0080B1A087A38EA(L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput::CommitFrame(UnityEngine.Camera,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput_CommitFrame_m46284AB664B65D279BB8A2010C52A707C4492AA6 (CameraInput_t145006E356C2401BF3BEAFF798586DFB1124F7C1 * __this, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___source0, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___destination1, const RuntimeMethod* method)
{
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * V_0 = NULL;
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = ___source0;
		NullCheck(L_0);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_1 = Camera_get_targetTexture_m1E776560FAC888D8210D49CEE310BB39D34A3FDC(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = ___source0;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_3 = ___destination1;
		NullCheck(L_2);
		Camera_set_targetTexture_m9D0DCEFF0C5596CBBC6FA7EE206F196CB0A8997D(L_2, L_3, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_4 = ___source0;
		NullCheck(L_4);
		Camera_Render_m397647083E9A37A18A452C4D7FCF23CCF8870F42(L_4, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_5 = ___source0;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_6 = V_0;
		NullCheck(L_5);
		Camera_set_targetTexture_m9D0DCEFF0C5596CBBC6FA7EE206F196CB0A8997D(L_5, L_6, /*hidden argument*/NULL);
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
// System.Void NatSuite.Recorders.Inputs.CameraInput_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m429828FA9730EDE3D5D3FCC7F33CB592B4E8F63E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m429828FA9730EDE3D5D3FCC7F33CB592B4E8F63E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D * L_0 = (U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D *)il2cpp_codegen_object_new(U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m49DE17774AA8DAD35F896959D3A15ACB9CEACAC8(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m49DE17774AA8DAD35F896959D3A15ACB9CEACAC8 (U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 NatSuite.Recorders.Inputs.CameraInput_<>c::<.ctor>b__5_0(UnityEngine.Camera,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_ctorU3Eb__5_0_m13DE00427DD5D6A266033EE9424C192A29FF21E8 (U3CU3Ec_tD6EB4E948AFBD3EBD68E8F4D5C259B4275F76E0D * __this, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___a0, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___b1, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = ___a0;
		NullCheck(L_0);
		float L_1 = Camera_get_depth_m436C49A1C7669E4AD5665A1F1107BDFBA38742CD(L_0, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = ___b1;
		NullCheck(L_2);
		float L_3 = Camera_get_depth_m436C49A1C7669E4AD5665A1F1107BDFBA38742CD(L_2, /*hidden argument*/NULL);
		return (((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(100.0f), (float)((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)))))));
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
// System.Void NatSuite.Recorders.Inputs.CameraInput_CameraInputAttachment::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputAttachment_Update_m98E0A687824620C0C41D8AF00E8579738D6E9037 (CameraInputAttachment_tCFA8350EFB5ABFA6ADF694FE5F5EDFEE47CB8C3F * __this, const RuntimeMethod* method)
{
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B2_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B1_0 = NULL;
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_handler_4();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(G_B2_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput_CameraInputAttachment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputAttachment__ctor_mA935A28BE58B09F3E74BFE1D08E45ECE5198CD31 (CameraInputAttachment_tCFA8350EFB5ABFA6ADF694FE5F5EDFEE47CB8C3F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void NatSuite.Recorders.Inputs.TextureInput::.ctor(NatSuite.Recorders.IMediaRecorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureInput__ctor_mA3A86F30E2D7AE9A5A16CC07A6BB76761AB90956 (TextureInput_tF3448248DE3212BF6CD05BC2F8E8CDB5A1AF3DF7 * __this, RuntimeObject* ___recorder0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureInput__ctor_mA3A86F30E2D7AE9A5A16CC07A6BB76761AB90956_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___recorder0;
		__this->set_recorder_0(L_0);
		RuntimeObject* L_1 = ___recorder0;
		NullCheck(L_1);
		ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  L_2 = InterfaceFuncInvoker0< ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.IMediaRecorder::get_frameSize() */, IMediaRecorder_t4F8A0713BF2D16BC536BF9258735410897A4EE14_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = L_2.get_Item1_0();
		RuntimeObject* L_4 = ___recorder0;
		NullCheck(L_4);
		ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  L_5 = InterfaceFuncInvoker0< ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.IMediaRecorder::get_frameSize() */, IMediaRecorder_t4F8A0713BF2D16BC536BF9258735410897A4EE14_il2cpp_TypeInfo_var, L_4);
		int32_t L_6 = L_5.get_Item2_1();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_7 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m01B7AF7873AA43495B8216926C1768FEDDF4CE64(L_7, L_3, L_6, 4, (bool)0, (bool)0, /*hidden argument*/NULL);
		__this->set_readbackBuffer_1(L_7);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.TextureInput::CommitFrame(UnityEngine.Texture,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureInput_CommitFrame_mDEB32D0382147DFA6B4A60B070F071BD621F6D7A (TextureInput_tF3448248DE3212BF6CD05BC2F8E8CDB5A1AF3DF7 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___texture0, int64_t ___timestamp1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureInput_CommitFrame_mDEB32D0382147DFA6B4A60B070F071BD621F6D7A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * V_2 = NULL;
	{
		RuntimeObject* L_0 = __this->get_recorder_0();
		NullCheck(L_0);
		ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  L_1 = InterfaceFuncInvoker0< ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.IMediaRecorder::get_frameSize() */, IMediaRecorder_t4F8A0713BF2D16BC536BF9258735410897A4EE14_il2cpp_TypeInfo_var, L_0);
		ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  L_2 = L_1;
		int32_t L_3 = L_2.get_Item1_0();
		V_0 = L_3;
		int32_t L_4 = L_2.get_Item2_1();
		V_1 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_7 = RenderTexture_GetTemporary_m6E0EF85D2DEC0626DE5BB5D008A659F1CD66D9F8(L_5, L_6, ((int32_t)24), 0, /*hidden argument*/NULL);
		V_2 = L_7;
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_8 = ___texture0;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var);
		Graphics_Blit_mB042EC04307A5617038DA4210DE7BA4B3E529113(L_8, L_9, /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_10 = RenderTexture_get_active_m670416A37BF4239DE5A55F6138CAA1FEEF184957(/*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_11 = V_2;
		RenderTexture_set_active_m992E25C701DEFC8042B31022EA45F02A787A84F1(L_11, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_12 = __this->get_readbackBuffer_1();
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_15), (0.0f), (0.0f), (((float)((float)L_13))), (((float)((float)L_14))), /*hidden argument*/NULL);
		NullCheck(L_12);
		Texture2D_ReadPixels_m5664E184458C64BA89450F80F47705A2241E9BFE(L_12, L_15, 0, 0, (bool)0, /*hidden argument*/NULL);
		RenderTexture_set_active_m992E25C701DEFC8042B31022EA45F02A787A84F1(L_10, /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_16 = V_2;
		RenderTexture_ReleaseTemporary_mFBA6F18138965049AA901D62A0080B1A087A38EA(L_16, /*hidden argument*/NULL);
		RuntimeObject* L_17 = __this->get_recorder_0();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_18 = __this->get_readbackBuffer_1();
		NullCheck(L_18);
		NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  L_19 = Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mE453927FC6491AC23A63CD1174E492BC63409B2E(L_18, /*hidden argument*/Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mE453927FC6491AC23A63CD1174E492BC63409B2E_RuntimeMethod_var);
		void* L_20 = NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mF9CA0984C93B0D8BC4A3BBC5CE664F3792B936CE(L_19, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mF9CA0984C93B0D8BC4A3BBC5CE664F3792B936CE_RuntimeMethod_var);
		int64_t L_21 = ___timestamp1;
		NullCheck(L_17);
		InterfaceActionInvoker2< void*, int64_t >::Invoke(2 /* System.Void NatSuite.Recorders.IMediaRecorder::CommitFrame(System.Void*,System.Int64) */, IMediaRecorder_t4F8A0713BF2D16BC536BF9258735410897A4EE14_il2cpp_TypeInfo_var, L_17, (void*)(void*)L_20, L_21);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.TextureInput::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureInput_Dispose_m4BA383BA380B82C5694EEA5D887D174DB89B8CD4 (TextureInput_tF3448248DE3212BF6CD05BC2F8E8CDB5A1AF3DF7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureInput_Dispose_m4BA383BA380B82C5694EEA5D887D174DB89B8CD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = __this->get_readbackBuffer_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_0, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C void DEFAULT_CALL NCCreateMP4Recorder(char*, int32_t, int32_t, float, int32_t, int32_t, int32_t, int32_t, int32_t, intptr_t*);
// System.Void NatSuite.Recorders.Internal.Bridge::CreateMP4Recorder(System.String,System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_CreateMP4Recorder_mECE8F0A013BC60E1DC87B1C407D0EFF8954D0F46 (String_t* ___path0, int32_t ___width1, int32_t ___height2, float ___frameRate3, int32_t ___sampleRate4, int32_t ___channelCount5, int32_t ___videoBitrate6, int32_t ___keyframeInterval7, int32_t ___audioBitRate8, intptr_t* ___recorder9, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, float, int32_t, int32_t, int32_t, int32_t, int32_t, intptr_t*);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NCCreateMP4Recorder)(____path0_marshaled, ___width1, ___height2, ___frameRate3, ___sampleRate4, ___channelCount5, ___videoBitrate6, ___keyframeInterval7, ___audioBitRate8, ___recorder9);

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL NCCreateHEVCRecorder(char*, int32_t, int32_t, float, int32_t, int32_t, int32_t, int32_t, int32_t, intptr_t*);
// System.Void NatSuite.Recorders.Internal.Bridge::CreateHEVCRecorder(System.String,System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_CreateHEVCRecorder_mFC85E79F70C73E9E70FB80AC4FF97C1A8A0CC4BE (String_t* ___path0, int32_t ___width1, int32_t ___height2, float ___frameRate3, int32_t ___sampleRate4, int32_t ___channelCount5, int32_t ___videoBitRate6, int32_t ___keyframeInterval7, int32_t ___audioBitRate8, intptr_t* ___recorder9, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, float, int32_t, int32_t, int32_t, int32_t, int32_t, intptr_t*);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NCCreateHEVCRecorder)(____path0_marshaled, ___width1, ___height2, ___frameRate3, ___sampleRate4, ___channelCount5, ___videoBitRate6, ___keyframeInterval7, ___audioBitRate8, ___recorder9);

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL NCCreateGIFRecorder(char*, int32_t, int32_t, float, intptr_t*);
// System.Void NatSuite.Recorders.Internal.Bridge::CreateGIFRecorder(System.String,System.Int32,System.Int32,System.Single,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_CreateGIFRecorder_m414060091121AE23B1119862E07FDF7596F5244D (String_t* ___path0, int32_t ___width1, int32_t ___height2, float ___frameDuration3, intptr_t* ___recorder4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, float, intptr_t*);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NCCreateGIFRecorder)(____path0_marshaled, ___width1, ___height2, ___frameDuration3, ___recorder4);

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL NCRecorderFrameSize(intptr_t, int32_t*, int32_t*);
// System.Void NatSuite.Recorders.Internal.Bridge::FrameSize(System.IntPtr,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_FrameSize_mB2C3541D6FE0325CDE77E4A26E5AF906324AA0C0 (intptr_t ___recorder0, int32_t* ___width1, int32_t* ___height2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t*, int32_t*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NCRecorderFrameSize)(___recorder0, ___width1, ___height2);

}
IL2CPP_EXTERN_C void DEFAULT_CALL NCRecorderCommitFrame(intptr_t, void*, int64_t);
// System.Void NatSuite.Recorders.Internal.Bridge::CommitFrame(System.IntPtr,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_CommitFrame_mDDFDCA8A1E68C01B913D7B3FACEF373CC3C210E0 (intptr_t ___recorder0, void* ___pixelBuffer1, int64_t ___timestamp2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, void*, int64_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NCRecorderCommitFrame)(___recorder0, ___pixelBuffer1, ___timestamp2);

}
IL2CPP_EXTERN_C void DEFAULT_CALL NCRecorderCommitSamples(intptr_t, float*, int32_t, int64_t);
// System.Void NatSuite.Recorders.Internal.Bridge::CommitSamples(System.IntPtr,System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_CommitSamples_m369EA7C4B22D796749831EBD9BC1B6DA586DB215 (intptr_t ___recorder0, float* ___sampleBuffer1, int32_t ___sampleCount2, int64_t ___timestamp3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, int32_t, int64_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NCRecorderCommitSamples)(___recorder0, ___sampleBuffer1, ___sampleCount2, ___timestamp3);

}
IL2CPP_EXTERN_C void DEFAULT_CALL NCRecorderFinishWriting(intptr_t, Il2CppMethodPointer, void*);
// System.Void NatSuite.Recorders.Internal.Bridge::FinishWriting(System.IntPtr,NatSuite.Recorders.Internal.Bridge_RecordingHandler,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_FinishWriting_m20385BDD63F1421DBB4733459ED02DC13C8F45AC (intptr_t ___recorder0, RecordingHandler_t3749B1B1F18462109BD464EC1DE2582012DD5810 * ___callback1, void* ___context2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, void*);

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NCRecorderFinishWriting)(___recorder0, ____callback1_marshaled, ___context2);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RecordingHandler_t3749B1B1F18462109BD464EC1DE2582012DD5810 (RecordingHandler_t3749B1B1F18462109BD464EC1DE2582012DD5810 * __this, void* ___context0, Il2CppChar* ___path1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(void*, Il2CppChar*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___context0, ___path1);

}
// System.Void NatSuite.Recorders.Internal.Bridge_RecordingHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingHandler__ctor_mEBC8C226DC41272625CB3E2D5425489CB286C959 (RecordingHandler_t3749B1B1F18462109BD464EC1DE2582012DD5810 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NatSuite.Recorders.Internal.Bridge_RecordingHandler::Invoke(System.Void*,System.Char*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingHandler_Invoke_m0BF25E2484606953E2406313F1DB41C5B5AA40D5 (RecordingHandler_t3749B1B1F18462109BD464EC1DE2582012DD5810 * __this, void* ___context0, Il2CppChar* ___path1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (void*, Il2CppChar*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___context0, ___path1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, void*, Il2CppChar*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___context0, ___path1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (void*, Il2CppChar*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___context0, ___path1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< void*, Il2CppChar* >::Invoke(targetMethod, targetThis, ___context0, ___path1);
					else
						GenericVirtActionInvoker2< void*, Il2CppChar* >::Invoke(targetMethod, targetThis, ___context0, ___path1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< void*, Il2CppChar* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___context0, ___path1);
					else
						VirtActionInvoker2< void*, Il2CppChar* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___context0, ___path1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, void*, Il2CppChar*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___context0, ___path1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult NatSuite.Recorders.Internal.Bridge_RecordingHandler::BeginInvoke(System.Void*,System.Char*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecordingHandler_BeginInvoke_mAD1637DFCEA7C3C9CBCFF6B042909C2E5FF789D8 (RecordingHandler_t3749B1B1F18462109BD464EC1DE2582012DD5810 * __this, void* ___context0, Il2CppChar* ___path1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___context0;
	__d_args[1] = ___path1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void NatSuite.Recorders.Internal.Bridge_RecordingHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingHandler_EndInvoke_m0DE52FD139B321D42DA1E521832D2AB274DCE373 (RecordingHandler_t3749B1B1F18462109BD464EC1DE2582012DD5810 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_NativeRecorder_OnRecording_m5E7892D13E801FE229BC73C026BEF6DFF39E5C06(void* ___context0, Il2CppChar* ___path1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	NativeRecorder_OnRecording_m5E7892D13E801FE229BC73C026BEF6DFF39E5C06(___context0, ___path1, NULL);

}
// System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.Internal.NativeRecorder::get_frameSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  NativeRecorder_get_frameSize_mCDA27FBF5B2F3564967AA762BB3A79B4D8AD83E4 (NativeRecorder_t20BA008C0EF7E8453F9F39A0FD6753D255E4974B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeRecorder_get_frameSize_mCDA27FBF5B2F3564967AA762BB3A79B4D8AD83E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		intptr_t L_0 = __this->get_recorder_0();
		Bridge_FrameSize_mB2C3541D6FE0325CDE77E4A26E5AF906324AA0C0((intptr_t)L_0, (int32_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ValueTuple_2__ctor_mCDA3078E87F827C6490EBD90430507642CECC6BF((&L_3), L_1, L_2, /*hidden argument*/ValueTuple_2__ctor_mCDA3078E87F827C6490EBD90430507642CECC6BF_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void NatSuite.Recorders.Internal.NativeRecorder::CommitFrame(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_CommitFrame_mC586BAE8EA9E107E8A38C72C18A1130FCDB28EAF (NativeRecorder_t20BA008C0EF7E8453F9F39A0FD6753D255E4974B * __this, void* ___nativeBuffer0, int64_t ___timestamp1, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_recorder_0();
		void* L_1 = ___nativeBuffer0;
		int64_t L_2 = ___timestamp1;
		Bridge_CommitFrame_mDDFDCA8A1E68C01B913D7B3FACEF373CC3C210E0((intptr_t)L_0, (void*)(void*)L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Internal.NativeRecorder::CommitSamples(System.Single[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_CommitSamples_m79DB331B167EC3976010955AE18B81CE5076564D (NativeRecorder_t20BA008C0EF7E8453F9F39A0FD6753D255E4974B * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___sampleBuffer0, int64_t ___timestamp1, const RuntimeMethod* method)
{
	float* V_0 = NULL;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_1 = NULL;
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = ___sampleBuffer0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_2 = V_1;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (float*)(((uintptr_t)0));
		goto IL_0018;
	}

IL_000f:
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (float*)(((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
	}

IL_0018:
	{
		float* L_4 = V_0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_5 = ___sampleBuffer0;
		NullCheck(L_5);
		int64_t L_6 = ___timestamp1;
		VirtActionInvoker3< float*, int32_t, int64_t >::Invoke(14 /* System.Void NatSuite.Recorders.Internal.NativeRecorder::CommitSamples(System.Single*,System.Int32,System.Int64) */, __this, (float*)(float*)L_4, (((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))), L_6);
		V_1 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)NULL;
		return;
	}
}
// System.Void NatSuite.Recorders.Internal.NativeRecorder::CommitSamples(System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_CommitSamples_mE1D60E8DF6FE2527D5D9D3195B24CF1AE4422E82 (NativeRecorder_t20BA008C0EF7E8453F9F39A0FD6753D255E4974B * __this, float* ___nativeBuffer0, int32_t ___sampleCount1, int64_t ___timestamp2, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_recorder_0();
		float* L_1 = ___nativeBuffer0;
		int32_t L_2 = ___sampleCount1;
		int64_t L_3 = ___timestamp2;
		Bridge_CommitSamples_m369EA7C4B22D796749831EBD9BC1B6DA586DB215((intptr_t)L_0, (float*)(float*)L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> NatSuite.Recorders.Internal.NativeRecorder::FinishWriting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 * NativeRecorder_FinishWriting_mAB18353F3D23634675CDFA5E5B12ADF1E3A5083A (NativeRecorder_t20BA008C0EF7E8453F9F39A0FD6753D255E4974B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeRecorder_FinishWriting_mAB18353F3D23634675CDFA5E5B12ADF1E3A5083A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TaskCompletionSource_1_t8CA8440E1CA3B5CE996E9F8C9F5D21D496E6F1C9 * L_0 = (TaskCompletionSource_1_t8CA8440E1CA3B5CE996E9F8C9F5D21D496E6F1C9 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t8CA8440E1CA3B5CE996E9F8C9F5D21D496E6F1C9_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m0C0E17AFFC61961F48C32130FDCF435008B25AD0(L_0, /*hidden argument*/TaskCompletionSource_1__ctor_m0C0E17AFFC61961F48C32130FDCF435008B25AD0_RuntimeMethod_var);
		TaskCompletionSource_1_t8CA8440E1CA3B5CE996E9F8C9F5D21D496E6F1C9 * L_1 = L_0;
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_2 = GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E(L_1, 2, /*hidden argument*/NULL);
		V_0 = L_2;
		intptr_t L_3 = __this->get_recorder_0();
		RecordingHandler_t3749B1B1F18462109BD464EC1DE2582012DD5810 * L_4 = (RecordingHandler_t3749B1B1F18462109BD464EC1DE2582012DD5810 *)il2cpp_codegen_object_new(RecordingHandler_t3749B1B1F18462109BD464EC1DE2582012DD5810_il2cpp_TypeInfo_var);
		RecordingHandler__ctor_mEBC8C226DC41272625CB3E2D5425489CB286C959(L_4, NULL, (intptr_t)((intptr_t)NativeRecorder_OnRecording_m5E7892D13E801FE229BC73C026BEF6DFF39E5C06_RuntimeMethod_var), /*hidden argument*/NULL);
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_5 = V_0;
		intptr_t L_6 = GCHandle_op_Explicit_mDDDE375E679609F240EF76F20E982C5B73A7D6BA(L_5, /*hidden argument*/NULL);
		void* L_7 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_6, /*hidden argument*/NULL);
		Bridge_FinishWriting_m20385BDD63F1421DBB4733459ED02DC13C8F45AC((intptr_t)L_3, L_4, (void*)(void*)L_7, /*hidden argument*/NULL);
		NullCheck(L_1);
		Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 * L_8 = TaskCompletionSource_1_get_Task_mFC27EFCD0B5D3201900E87BB9CCFFB4458494CAF_inline(L_1, /*hidden argument*/TaskCompletionSource_1_get_Task_mFC27EFCD0B5D3201900E87BB9CCFFB4458494CAF_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void NatSuite.Recorders.Internal.NativeRecorder::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder__ctor_m58A5663B2405A5FAE668C204525FF0429C5FCE40 (NativeRecorder_t20BA008C0EF7E8453F9F39A0FD6753D255E4974B * __this, intptr_t ___recorder0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___recorder0;
		__this->set_recorder_0((intptr_t)L_0);
		return;
	}
}
// System.Void NatSuite.Recorders.Internal.NativeRecorder::OnRecording(System.Void*,System.Char*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_OnRecording_m5E7892D13E801FE229BC73C026BEF6DFF39E5C06 (void* ___context0, Il2CppChar* ___path1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeRecorder_OnRecording_m5E7892D13E801FE229BC73C026BEF6DFF39E5C06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TaskCompletionSource_1_t8CA8440E1CA3B5CE996E9F8C9F5D21D496E6F1C9 * V_1 = NULL;
	{
		void* L_0 = ___context0;
		intptr_t L_1 = IntPtr_op_Explicit_m7F0C4B884FFB05BD231154CBDAEBCF1917019C21((void*)(void*)L_0, /*hidden argument*/NULL);
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_2 = GCHandle_op_Explicit_m12AF9B7126A0899E8011F1CCDCB877AAA56A0C8C((intptr_t)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RuntimeObject * L_3 = GCHandle_get_Target_mDBDEA6883245CF1EF963D9FA945569B2D59DCCF8((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
		V_1 = ((TaskCompletionSource_1_t8CA8440E1CA3B5CE996E9F8C9F5D21D496E6F1C9 *)IsInstClass((RuntimeObject*)L_3, TaskCompletionSource_1_t8CA8440E1CA3B5CE996E9F8C9F5D21D496E6F1C9_il2cpp_TypeInfo_var));
		GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
		Il2CppChar* L_4 = ___path1;
		if ((((intptr_t)L_4) == ((intptr_t)(((uintptr_t)0)))))
		{
			goto IL_0037;
		}
	}
	{
		TaskCompletionSource_1_t8CA8440E1CA3B5CE996E9F8C9F5D21D496E6F1C9 * L_5 = V_1;
		Il2CppChar* L_6 = ___path1;
		intptr_t L_7 = IntPtr_op_Explicit_m7F0C4B884FFB05BD231154CBDAEBCF1917019C21((void*)(void*)L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		String_t* L_8 = Marshal_PtrToStringAnsi_mA5D5D1AA7C0EB6A96F92454A8AF9C266E2DF5DA5((intptr_t)L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		TaskCompletionSource_1_SetResult_m6FD81CD8C900045ECDFF39856335AB1448AD9067(L_5, L_8, /*hidden argument*/TaskCompletionSource_1_SetResult_m6FD81CD8C900045ECDFF39856335AB1448AD9067_RuntimeMethod_var);
		return;
	}

IL_0037:
	{
		TaskCompletionSource_1_t8CA8440E1CA3B5CE996E9F8C9F5D21D496E6F1C9 * L_9 = V_1;
		Exception_t * L_10 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_10, _stringLiteralD20756022359AE03ECA6709D9DEED3A1CC68F12A, /*hidden argument*/NULL);
		NullCheck(L_9);
		TaskCompletionSource_1_SetException_m7D7042A9B159869A6D6AB48FD78599899E1E91BE(L_9, L_10, /*hidden argument*/TaskCompletionSource_1_SetException_m7D7042A9B159869A6D6AB48FD78599899E1E91BE_RuntimeMethod_var);
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
// System.String NatSuite.Recorders.Internal.Utility::GetPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utility_GetPath_mE3FC8A633DC1AFCCA2DDC4503482ECA81DFB483B (String_t* ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utility_GetPath_mE3FC8A633DC1AFCCA2DDC4503482ECA81DFB483B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B4_0 = 0;
	String_t* G_B7_0 = NULL;
	{
		String_t* L_0 = ((Utility_t91DFA782CDF85DB8249161CCEFD8EFE464207050_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t91DFA782CDF85DB8249161CCEFD8EFE464207050_il2cpp_TypeInfo_var))->get_directory_0();
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_1 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_2) == ((int32_t)7))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = 1;
	}

IL_0019:
	{
		if (G_B4_0)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		G_B7_0 = L_3;
		goto IL_0027;
	}

IL_0022:
	{
		String_t* L_4 = Directory_GetCurrentDirectory_m78DAD8FE27C7A48794B7B657F7C81DFE2F3FF56E(/*hidden argument*/NULL);
		G_B7_0 = L_4;
	}

IL_0027:
	{
		((Utility_t91DFA782CDF85DB8249161CCEFD8EFE464207050_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t91DFA782CDF85DB8249161CCEFD8EFE464207050_il2cpp_TypeInfo_var))->set_directory_0(G_B7_0);
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_5 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_2 = L_5;
		String_t* L_6 = DateTime_ToString_m203C5710CD7AB2F5F1B2D9DA1DFD45BB3774179A((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_2), _stringLiteralF3A822D4B6AC4CD9828859883D087FEE5C6CFF02, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		String_t* L_8 = ___extension0;
		String_t* L_9 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralFDA41D55996A53C3EEF6A1BEF4AED37EB56E278A, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		String_t* L_10 = ((Utility_t91DFA782CDF85DB8249161CCEFD8EFE464207050_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t91DFA782CDF85DB8249161CCEFD8EFE464207050_il2cpp_TypeInfo_var))->get_directory_0();
		String_t* L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_12 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_10, L_11, /*hidden argument*/NULL);
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
// System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.JPGRecorder::get_frameSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  JPGRecorder_get_frameSize_mA3E896C6CABFAC4DCE550A6A02FAEEDFF6580493 (JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JPGRecorder_get_frameSize_mA3E896C6CABFAC4DCE550A6A02FAEEDFF6580493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = __this->get_frameBuffer_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_2 = __this->get_frameBuffer_0();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ValueTuple_2__ctor_mCDA3078E87F827C6490EBD90430507642CECC6BF((&L_4), L_1, L_3, /*hidden argument*/ValueTuple_2__ctor_mCDA3078E87F827C6490EBD90430507642CECC6BF_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void NatSuite.Recorders.JPGRecorder::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPGRecorder__ctor_m2F1A28D05FF53E0C22027AFD2F2490627F36EF94 (JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JPGRecorder__ctor_m2F1A28D05FF53E0C22027AFD2F2490627F36EF94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_2 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m01B7AF7873AA43495B8216926C1768FEDDF4CE64(L_2, L_0, L_1, 4, (bool)0, (bool)0, /*hidden argument*/NULL);
		__this->set_frameBuffer_0(L_2);
		List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E * L_3 = (List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E *)il2cpp_codegen_object_new(List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E_il2cpp_TypeInfo_var);
		List_1__ctor_mC06B02C45D781C1EBF33F5D2380FF522713EF33B(L_3, /*hidden argument*/List_1__ctor_mC06B02C45D781C1EBF33F5D2380FF522713EF33B_RuntimeMethod_var);
		__this->set_writeTasks_2(L_3);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		String_t* L_5 = Utility_GetPath_mE3FC8A633DC1AFCCA2DDC4503482ECA81DFB483B(L_4, /*hidden argument*/NULL);
		__this->set_recordingPath_1(L_5);
		String_t* L_6 = __this->get_recordingPath_1();
		Directory_CreateDirectory_m0C9CAA2ECA801C4D07EA35820DA0907402ED4D41(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.JPGRecorder::CommitFrame(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPGRecorder_CommitFrame_m468F2D6105AD27284D5C8EB5FAC74B0E200AA810 (JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC * __this, void* ___nativeBuffer0, int64_t ___timestamp1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JPGRecorder_CommitFrame_m468F2D6105AD27284D5C8EB5FAC74B0E200AA810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3CU3Ec__DisplayClass4_0_t860AFA329628B6F4B0EC37606C698CD205D20051 * L_0 = (U3CU3Ec__DisplayClass4_0_t860AFA329628B6F4B0EC37606C698CD205D20051 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t860AFA329628B6F4B0EC37606C698CD205D20051_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_m8D2A98F7F224BCB32B67BD10126C017AD02435B6(L_0, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass4_0_t860AFA329628B6F4B0EC37606C698CD205D20051 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_2 = __this->get_frameBuffer_0();
		void* L_3 = ___nativeBuffer0;
		intptr_t L_4 = IntPtr_op_Explicit_m7F0C4B884FFB05BD231154CBDAEBCF1917019C21((void*)(void*)L_3, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_5 = __this->get_frameBuffer_0();
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_7 = __this->get_frameBuffer_0();
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		NullCheck(L_2);
		Texture2D_LoadRawTextureData_m7F70DFFDBFA1E307A79838B94BC1A0438E063DFC(L_2, (intptr_t)L_4, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)L_8)), (int32_t)4)), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass4_0_t860AFA329628B6F4B0EC37606C698CD205D20051 * L_9 = L_1;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_10 = __this->get_frameBuffer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = ImageConversion_EncodeToJPG_mDE6C67AACCC7BAD006D0A852093F881D11F9C8DF(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->set_frameData_2(L_11);
		U3CU3Ec__DisplayClass4_0_t860AFA329628B6F4B0EC37606C698CD205D20051 * L_12 = L_9;
		int32_t L_13 = __this->get_frameCount_3();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		int32_t L_14 = V_1;
		__this->set_frameCount_3(L_14);
		int32_t L_15 = V_1;
		NullCheck(L_12);
		L_12->set_frameIndex_1(L_15);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_16 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_16, L_12, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3CCommitFrameU3Eb__0_mAF83B14084D8CABE53DDC33B0C6C55BAF9D11187_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_17 = Task_Run_m201E4C04F97BCF541633AF913DF20C6FF7872E44(L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E * L_18 = __this->get_writeTasks_2();
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_19 = V_0;
		NullCheck(L_18);
		List_1_Add_mAC067166AEB86D01BCC2364DAC32CF05E89AF135(L_18, L_19, /*hidden argument*/List_1_Add_mAC067166AEB86D01BCC2364DAC32CF05E89AF135_RuntimeMethod_var);
		return;
	}
}
// System.Void NatSuite.Recorders.JPGRecorder::NatSuite.Recorders.IMediaRecorder.CommitSamples(System.Single[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPGRecorder_NatSuite_Recorders_IMediaRecorder_CommitSamples_m1C669DE18D288F3AA282F2A2E425C7680FC998F9 (JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___sampleBuffer0, int64_t ___timestamp1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JPGRecorder_NatSuite_Recorders_IMediaRecorder_CommitSamples_m1C669DE18D288F3AA282F2A2E425C7680FC998F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralBBFA1BB41C52D07D9B36549E6CDD8E93097EAF2A, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.JPGRecorder::NatSuite.Recorders.IMediaRecorder.CommitSamples(System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPGRecorder_NatSuite_Recorders_IMediaRecorder_CommitSamples_m5BA6FF7FD9005182848B6D49FED0FF842439CF97 (JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC * __this, float* ___sampleBuffer0, int32_t ___sampleCount1, int64_t ___timestamp2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JPGRecorder_NatSuite_Recorders_IMediaRecorder_CommitSamples_m5BA6FF7FD9005182848B6D49FED0FF842439CF97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralBBFA1BB41C52D07D9B36549E6CDD8E93097EAF2A, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> NatSuite.Recorders.JPGRecorder::FinishWriting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 * JPGRecorder_FinishWriting_mE5F00A0A52E8D8544DD809078A043439C77509AF (JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JPGRecorder_FinishWriting_mE5F00A0A52E8D8544DD809078A043439C77509AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F  L_0 = AsyncTaskMethodBuilder_1_Create_mCE9D3CB6CDA544508B2257E12C9584B5231E69DE(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_mCE9D3CB6CDA544508B2257E12C9584B5231E69DE_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF  L_1 = V_0;
		AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF_m2E60DFBEB7D47A31AC47B02248222228A688D971((AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F *)(&V_1), (U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF_m2E60DFBEB7D47A31AC47B02248222228A688D971_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 * L_4 = AsyncTaskMethodBuilder_1_get_Task_m82856EBEF95BD2766D5109AA0DA0FA01547F5D70((AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F *)L_3, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m82856EBEF95BD2766D5109AA0DA0FA01547F5D70_RuntimeMethod_var);
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
// System.Void NatSuite.Recorders.JPGRecorder_<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m8D2A98F7F224BCB32B67BD10126C017AD02435B6 (U3CU3Ec__DisplayClass4_0_t860AFA329628B6F4B0EC37606C698CD205D20051 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.JPGRecorder_<>c__DisplayClass4_0::<CommitFrame>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CCommitFrameU3Eb__0_mAF83B14084D8CABE53DDC33B0C6C55BAF9D11187 (U3CU3Ec__DisplayClass4_0_t860AFA329628B6F4B0EC37606C698CD205D20051 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass4_0_U3CCommitFrameU3Eb__0_mAF83B14084D8CABE53DDC33B0C6C55BAF9D11187_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		String_t* L_1 = L_0->get_recordingPath_1();
		int32_t L_2 = __this->get_frameIndex_1();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral3317BD4DDD5A5E65635839DDDC81F6F3B3E63E24, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_6 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_1, L_5, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = __this->get_frameData_2();
		File_WriteAllBytes_m07F13C1CA0BD0960392C78AB99E0F19564F9B594(L_6, L_7, /*hidden argument*/NULL);
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
// System.Void NatSuite.Recorders.JPGRecorder_<FinishWriting>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishWritingU3Ed__7_MoveNext_m154FE85AA77E77D29C0A59A365D60600AD7F29CA (U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFinishWritingU3Ed__7_MoveNext_m154FE85AA77E77D29C0A59A365D60600AD7F29CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC * V_1 = NULL;
	String_t* V_2 = NULL;
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0056;
			}
		}

IL_0011:
		{
			JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC * L_3 = V_1;
			NullCheck(L_3);
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_4 = L_3->get_frameBuffer_0();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_4, /*hidden argument*/NULL);
			JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC * L_5 = V_1;
			NullCheck(L_5);
			List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E * L_6 = L_5->get_writeTasks_2();
			IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
			Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_7 = Task_WhenAll_mB30AA1833E196931AC9443F8DE3E971AA3536C49(L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_8 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_7, /*hidden argument*/NULL);
			V_3 = L_8;
			bool L_9 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_3), /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_0072;
			}
		}

IL_0036:
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_11 = V_3;
			__this->set_U3CU3Eu__1_3(L_11);
			AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F * L_12 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF_m4A3F0091D36E154F7E535FB92481C383DDF40817((AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F *)L_12, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_3), (U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF_m4A3F0091D36E154F7E535FB92481C383DDF40817_RuntimeMethod_var);
			goto IL_00af;
		}

IL_0056:
		{
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_13 = __this->get_U3CU3Eu__1_3();
			V_3 = L_13;
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_14 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_14, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->set_U3CU3E1__state_0(L_15);
		}

IL_0072:
		{
			TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_3), /*hidden argument*/NULL);
			JPGRecorder_t93C7F2C5960CD965B40CE88E9F8BDAE951839FDC * L_16 = V_1;
			NullCheck(L_16);
			String_t* L_17 = L_16->get_recordingPath_1();
			V_2 = L_17;
			goto IL_009b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0082;
		throw e;
	}

CATCH_0082:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m3BDDBD9C146D972C50003272305BF45768D5BF55((AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F *)L_18, L_19, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m3BDDBD9C146D972C50003272305BF45768D5BF55_RuntimeMethod_var);
		goto IL_00af;
	} // end catch (depth: 1)

IL_009b:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		String_t* L_21 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m1A83C859D55B02F7598137CE0C3EB97A75FD90DE((AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F *)L_20, L_21, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m1A83C859D55B02F7598137CE0C3EB97A75FD90DE_RuntimeMethod_var);
	}

IL_00af:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFinishWritingU3Ed__7_MoveNext_m154FE85AA77E77D29C0A59A365D60600AD7F29CA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF * _thisAdjusted = reinterpret_cast<U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF *>(__this + 1);
	U3CFinishWritingU3Ed__7_MoveNext_m154FE85AA77E77D29C0A59A365D60600AD7F29CA(_thisAdjusted, method);
}
// System.Void NatSuite.Recorders.JPGRecorder_<FinishWriting>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishWritingU3Ed__7_SetStateMachine_m5763183DCC5416B493F6B1AB873C771C3B0A1AC5 (U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFinishWritingU3Ed__7_SetStateMachine_m5763183DCC5416B493F6B1AB873C771C3B0A1AC5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m9D848748388E389DB11EB835DC7FF6F45FFA16DC((AsyncTaskMethodBuilder_1_tC5A4966920AB3D34209D89D09EC70D3F2649124F *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m9D848748388E389DB11EB835DC7FF6F45FFA16DC_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFinishWritingU3Ed__7_SetStateMachine_m5763183DCC5416B493F6B1AB873C771C3B0A1AC5_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF * _thisAdjusted = reinterpret_cast<U3CFinishWritingU3Ed__7_t0257223F1B21D49D83795A0AF518CF5B8998EFAF *>(__this + 1);
	U3CFinishWritingU3Ed__7_SetStateMachine_m5763183DCC5416B493F6B1AB873C771C3B0A1AC5(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NatSuite.Recorders.MP4Recorder::.ctor(System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MP4Recorder__ctor_m839661F0DB66EB1A27F346229F187E79E16BF055 (MP4Recorder_tF538F0357EEFBA6636E7FCAD41282C3821E8AB4C * __this, int32_t ___width0, int32_t ___height1, float ___frameRate2, int32_t ___sampleRate3, int32_t ___channelCount4, int32_t ___videoBitRate5, int32_t ___keyframeInterval6, int32_t ___audioBitRate7, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		float L_2 = ___frameRate2;
		int32_t L_3 = ___sampleRate3;
		int32_t L_4 = ___channelCount4;
		int32_t L_5 = ___videoBitRate5;
		int32_t L_6 = ___keyframeInterval6;
		int32_t L_7 = ___audioBitRate7;
		intptr_t L_8 = MP4Recorder_Create_mDFAA1DB5C0E7FD49F2A6C0467C94A09947B15E6B(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		NativeRecorder__ctor_m58A5663B2405A5FAE668C204525FF0429C5FCE40(__this, (intptr_t)L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr NatSuite.Recorders.MP4Recorder::Create(System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MP4Recorder_Create_mDFAA1DB5C0E7FD49F2A6C0467C94A09947B15E6B (int32_t ___width0, int32_t ___height1, float ___frameRate2, int32_t ___sampleRate3, int32_t ___channelCount4, int32_t ___videoBitRate5, int32_t ___keyframeInterval6, int32_t ___audioBitRate7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MP4Recorder_Create_mDFAA1DB5C0E7FD49F2A6C0467C94A09947B15E6B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = Utility_GetPath_mE3FC8A633DC1AFCCA2DDC4503482ECA81DFB483B(_stringLiteral2BF5D215F67675901A33DBF902E7FC75E8E74861, /*hidden argument*/NULL);
		int32_t L_1 = ___width0;
		int32_t L_2 = ___height1;
		float L_3 = ___frameRate2;
		int32_t L_4 = ___sampleRate3;
		int32_t L_5 = ___channelCount4;
		int32_t L_6 = ___videoBitRate5;
		int32_t L_7 = ___keyframeInterval6;
		int32_t L_8 = ___audioBitRate7;
		Bridge_CreateMP4Recorder_mECE8F0A013BC60E1DC87B1C407D0EFF8954D0F46(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		intptr_t L_9 = V_0;
		return (intptr_t)L_9;
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
// System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.WAVRecorder::get_frameSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  WAVRecorder_get_frameSize_m1DEE4C55BF1EDCDEF0DAA28F1CC7E474D722C7B1 (WAVRecorder_tF8DBAB98828910CE19B6AA5ADD9585D511C8CF6D * __this, const RuntimeMethod* method)
{
	ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186 ));
		ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  L_0 = V_0;
		return L_0;
	}
}
// System.Void NatSuite.Recorders.WAVRecorder::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WAVRecorder__ctor_mD3D19626D84FE11129E1D73A3D63B14A9E1CFF51 (WAVRecorder_tF8DBAB98828910CE19B6AA5ADD9585D511C8CF6D * __this, int32_t ___sampleRate0, int32_t ___channelCount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WAVRecorder__ctor_mD3D19626D84FE11129E1D73A3D63B14A9E1CFF51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___sampleRate0;
		__this->set_sampleRate_0(L_0);
		int32_t L_1 = ___channelCount1;
		__this->set_channelCount_1(L_1);
		String_t* L_2 = Utility_GetPath_mE3FC8A633DC1AFCCA2DDC4503482ECA81DFB483B(_stringLiteralC5EF9B806CBD2BFA0D6C179FE35E3AB475BF5AAF, /*hidden argument*/NULL);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_3 = (FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 *)il2cpp_codegen_object_new(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_il2cpp_TypeInfo_var);
		FileStream__ctor_m967EF49BBCD52204BB79BA6E9DA533833B07B800(L_3, L_2, 2, /*hidden argument*/NULL);
		__this->set_stream_2(L_3);
		__this->set_sampleCount_3(0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)44));
		V_0 = L_4;
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_5 = __this->get_stream_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_0;
		NullCheck(L_7);
		NullCheck(L_5);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))));
		return;
	}
}
// System.Void NatSuite.Recorders.WAVRecorder::NatSuite.Recorders.IMediaRecorder.CommitFrame(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WAVRecorder_NatSuite_Recorders_IMediaRecorder_CommitFrame_mE81A1A4BAFEC63730E177BA756E07873106A86DD (WAVRecorder_tF8DBAB98828910CE19B6AA5ADD9585D511C8CF6D * __this, void* ___nativeBuffer0, int64_t ___timestamp1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void NatSuite.Recorders.WAVRecorder::CommitSamples(System.Single[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WAVRecorder_CommitSamples_m89F90B3599D067DF4C8117C2926421DB9F221847 (WAVRecorder_tF8DBAB98828910CE19B6AA5ADD9585D511C8CF6D * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___sampleBuffer0, int64_t ___timestamp1, const RuntimeMethod* method)
{
	float* V_0 = NULL;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_1 = NULL;
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = ___sampleBuffer0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_2 = V_1;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (float*)(((uintptr_t)0));
		goto IL_0018;
	}

IL_000f:
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (float*)(((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
	}

IL_0018:
	{
		float* L_4 = V_0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_5 = ___sampleBuffer0;
		NullCheck(L_5);
		int64_t L_6 = ___timestamp1;
		WAVRecorder_CommitSamples_mFE7684407180FF9560DA30FFD269759E2439DCF8(__this, (float*)(float*)L_4, (((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))), L_6, /*hidden argument*/NULL);
		V_1 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)NULL;
		return;
	}
}
// System.Void NatSuite.Recorders.WAVRecorder::CommitSamples(System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WAVRecorder_CommitSamples_mFE7684407180FF9560DA30FFD269759E2439DCF8 (WAVRecorder_tF8DBAB98828910CE19B6AA5ADD9585D511C8CF6D * __this, float* ___nativeBuffer0, int32_t ___sampleCount1, int64_t ___timestamp2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WAVRecorder_CommitSamples_mFE7684407180FF9560DA30FFD269759E2439DCF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int16_t* V_0 = NULL;
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___sampleCount1;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_1 = (Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)SZArrayNew(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28_il2cpp_TypeInfo_var, (uint32_t)L_0);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_2 = L_1;
		V_1 = L_2;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_3 = V_1;
		NullCheck(L_3);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0014;
		}
	}

IL_000f:
	{
		V_0 = (int16_t*)(((uintptr_t)0));
		goto IL_001d;
	}

IL_0014:
	{
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_4 = V_1;
		NullCheck(L_4);
		V_0 = (int16_t*)(((uintptr_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
	}

IL_001d:
	{
		V_2 = 0;
		goto IL_003a;
	}

IL_0021:
	{
		int16_t* L_5 = V_0;
		int32_t L_6 = V_2;
		float* L_7 = ___nativeBuffer0;
		int32_t L_8 = V_2;
		float L_9 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_7, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_8)), (int32_t)4)))));
		*((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_6)), (int32_t)2))))) = (int16_t)(((int16_t)((int16_t)((float)il2cpp_codegen_multiply((float)L_9, (float)(32767.0f))))));
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_003a:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = ___sampleCount1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0021;
		}
	}
	{
		int16_t* L_13 = V_0;
		int32_t L_14 = ___sampleCount1;
		UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E * L_15 = (UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E *)il2cpp_codegen_object_new(UnmanagedMemoryStream_tB2905D85030C9C1E831E3EB02AD7E5B1B1A5FE4E_il2cpp_TypeInfo_var);
		UnmanagedMemoryStream__ctor_mF4040F06CEA36C1ACBA0C09319B38530D0E45632(L_15, (uint8_t*)(uint8_t*)L_13, (((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)2))))), /*hidden argument*/NULL);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_16 = __this->get_stream_2();
		NullCheck(L_15);
		Stream_CopyTo_mCB6569082D97C68D16261175EE091E8539828E67(L_15, L_16, /*hidden argument*/NULL);
		V_1 = (Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)NULL;
		int32_t L_17 = __this->get_sampleCount_3();
		int32_t L_18 = ___sampleCount1;
		__this->set_sampleCount_3(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18)));
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> NatSuite.Recorders.WAVRecorder::FinishWriting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 * WAVRecorder_FinishWriting_m5C75F9AE4AE89CFD2B35E41F7D883823284922BB (WAVRecorder_tF8DBAB98828910CE19B6AA5ADD9585D511C8CF6D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WAVRecorder_FinishWriting_m5C75F9AE4AE89CFD2B35E41F7D883823284922BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_0 = __this->get_stream_2();
		NullCheck(L_0);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_0, (((int64_t)((int64_t)0))), 0);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_1 = __this->get_stream_2();
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_2 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, _stringLiteral6CA0A12C23F03719E0229FE85E34C98DE7079397);
		NullCheck(L_1);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_1, L_3, 0, 4);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_4 = __this->get_stream_2();
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_5 = __this->get_stream_2();
		NullCheck(L_5);
		int64_t L_6 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = BitConverter_GetBytes_m2652D1E20FC48C5953639CE61B2F064C2074CF78(((int64_t)il2cpp_codegen_subtract((int64_t)L_6, (int64_t)(((int64_t)((int64_t)8))))), /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_4, L_7, 0, 4);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_8 = __this->get_stream_2();
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_9 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		NullCheck(L_9);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_9, _stringLiteralFB914D3CA1348F0C104408C5794FE186EA61F9B4);
		NullCheck(L_8);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_10, 0, 4);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_11 = __this->get_stream_2();
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_12 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		NullCheck(L_12);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_12, _stringLiteral90482CCC2DEBBC9F5A56C001DBE878DBFD1F0733);
		NullCheck(L_11);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_11, L_13, 0, 4);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_14 = __this->get_stream_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = BitConverter_GetBytes_mB5BCBAAFE3AE14F2AF1731187C7155A236DF38EA(((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, 4);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_16 = __this->get_stream_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = BitConverter_GetBytes_m692444BB12DAE2F46C7DDE67B04CF2073DEE1211((uint16_t)1, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_16, L_17, 0, 2);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_18 = __this->get_stream_2();
		int32_t L_19 = __this->get_channelCount_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = BitConverter_GetBytes_mB5BCBAAFE3AE14F2AF1731187C7155A236DF38EA(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_18, L_20, 0, 2);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_21 = __this->get_stream_2();
		int32_t L_22 = __this->get_sampleRate_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = BitConverter_GetBytes_mB5BCBAAFE3AE14F2AF1731187C7155A236DF38EA(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_21, L_23, 0, 4);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_24 = __this->get_stream_2();
		int32_t L_25 = __this->get_sampleRate_0();
		int32_t L_26 = __this->get_channelCount_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_27 = BitConverter_GetBytes_mB5BCBAAFE3AE14F2AF1731187C7155A236DF38EA(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)L_26)), (int32_t)2)), /*hidden argument*/NULL);
		NullCheck(L_24);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_24, L_27, 0, 4);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_28 = __this->get_stream_2();
		int32_t L_29 = __this->get_channelCount_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = BitConverter_GetBytes_m692444BB12DAE2F46C7DDE67B04CF2073DEE1211((uint16_t)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)2))))), /*hidden argument*/NULL);
		NullCheck(L_28);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_28, L_30, 0, 2);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_31 = __this->get_stream_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_32 = BitConverter_GetBytes_m692444BB12DAE2F46C7DDE67B04CF2073DEE1211((uint16_t)((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_31);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_31, L_32, 0, 2);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_33 = __this->get_stream_2();
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_34 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		NullCheck(L_34);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_35 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_34, _stringLiteralA17C9AAA61E80A1BF71D0D850AF4E5BAA9800BBD);
		NullCheck(L_33);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_33, L_35, 0, 4);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_36 = __this->get_stream_2();
		int32_t L_37 = __this->get_sampleCount_3();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_38 = BitConverter_GetBytes_mB5BCBAAFE3AE14F2AF1731187C7155A236DF38EA(((int32_t)il2cpp_codegen_multiply((int32_t)L_37, (int32_t)2)), /*hidden argument*/NULL);
		NullCheck(L_36);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_36, L_38, 0, 4);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_39 = __this->get_stream_2();
		NullCheck(L_39);
		Stream_Dispose_m186A8E680F2528DEDFF8F0069CC33BD813FFB1C7(L_39, /*hidden argument*/NULL);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_40 = __this->get_stream_2();
		NullCheck(L_40);
		String_t* L_41 = FileStream_get_Name_mA80AE70C6516BD733732AD17F083530FE3689A08_inline(L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task_1_t16DAF00C3FDD57B5C7BD8FAE55DCFCBD15EA34F6 * L_42 = Task_FromResult_TisString_t_m0F2C9F4AB9FCF2BA6DC300777839282B51CC623A(L_41, /*hidden argument*/Task_FromResult_TisString_t_m0F2C9F4AB9FCF2BA6DC300777839282B51CC623A_RuntimeMethod_var);
		return L_42;
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
// System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsUnmanagedAttribute__ctor_m549C1706A34E9DB1480EA09386820C39933E815D (IsUnmanagedAttribute_tD9DD4E69D51070F019D995BE04C2FE25BB5E04A2 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_m829C28C42028CDBFC9E338962DC7B6B10C8FFBE7_inline (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get__ticks_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Stopwatch_get_IsRunning_mD7688A050B9EE2BE874EDD1D735B1FB46A0113E6_inline (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_is_running_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_msaaSamples_m5856FC43DAD667D4462B6BCA938B70E42068D24C_inline (RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CmsaaSamplesU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* FileStream_get_Name_mA80AE70C6516BD733732AD17F083530FE3689A08_inline (FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * TaskCompletionSource_1_get_Task_mA7C2FA47C37BF0A144EE020746831B5D470713F3_gshared_inline (TaskCompletionSource_1_t14F1BF069865ED085DD30781CAD679CB0FC447F5 * __this, const RuntimeMethod* method)
{
	{
		Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * L_0 = (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 *)__this->get_m_task_0();
		return L_0;
	}
}
