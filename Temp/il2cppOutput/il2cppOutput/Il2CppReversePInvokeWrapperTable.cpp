#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

struct EVENT_FILTER_DESCRIPTOR_t24FD3DB96806FFE8C96FFDB38B1B8331EA0D72BB ;
struct Guid_t ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


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

#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" void DEFAULT_CALL ReversePInvokeWrapper_EventProvider_EtwEnableCallBack_m32987ABF4E909DC5476F09C034714951CB4A8048(Guid_t * ___sourceId0, int32_t ___controlCode1, uint8_t ___setLevel2, int64_t ___anyKeyword3, int64_t ___allKeyword4, EVENT_FILTER_DESCRIPTOR_t24FD3DB96806FFE8C96FFDB38B1B8331EA0D72BB * ___filterData5, void* ___callbackContext6);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m056BCE43FF155AAE872FF7E565F8F72A50D26147(intptr_t ___arg0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_NativeRecorder_OnRecording_m5E7892D13E801FE229BC73C026BEF6DFF39E5C06(void* ___context0, Il2CppChar* ___path1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_NativeAudioDevice_OnSampleBuffer_mF52C259215927635DE7EFF7D1B09AA1D57680A59(intptr_t ___context0, intptr_t ___sampleBuffer1, int32_t ___sampleCount2, int64_t ___timestamp3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_NativeCameraDevice_OnFrame_m2E09C4C17C79C777D3D756A21227074FD33FD260(intptr_t ___context0, intptr_t ___pixelBuffer1, int32_t ___width2, int32_t ___height3, int64_t ___timestamp4);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MediaDeviceQuery_OnPermissionResult_m2CCEFD533AA1FB1B979818F80FF7EC6960C1D08F(intptr_t ___context0, int32_t ___granted1);


extern const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[6] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_EventProvider_EtwEnableCallBack_m32987ABF4E909DC5476F09C034714951CB4A8048),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m056BCE43FF155AAE872FF7E565F8F72A50D26147),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_NativeRecorder_OnRecording_m5E7892D13E801FE229BC73C026BEF6DFF39E5C06),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_NativeAudioDevice_OnSampleBuffer_mF52C259215927635DE7EFF7D1B09AA1D57680A59),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_NativeCameraDevice_OnFrame_m2E09C4C17C79C777D3D756A21227074FD33FD260),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MediaDeviceQuery_OnPermissionResult_m2CCEFD533AA1FB1B979818F80FF7EC6960C1D08F),
};
