#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4Invoker;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4Invoker<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct AngleRangeInfoU5BU5D_t8AE5F89B8CA102A1093EFEA4E67B9364AC690BC8;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ContourVertexU5BU5D_tA2E5DCD24E23FACD7195A27617FA696A603992F5;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD;
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88;
struct TransformDataU5BU5D_t9C6552848CAA1DCDD99EC5141171F72E5E8FA322;
struct WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0;
struct BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
struct MemberInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Type_t;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4;
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509;
struct UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1;
IL2CPP_EXTERN_C String_t* _stringLiteralAE7FC72C0A8144676E285C7A23FCC75766669858;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B;
IL2CPP_EXTERN_C String_t* _stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke;

struct AngleRangeInfoU5BU5D_t8AE5F89B8CA102A1093EFEA4E67B9364AC690BC8;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ContourVertexU5BU5D_tA2E5DCD24E23FACD7195A27617FA696A603992F5;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88;
struct TransformDataU5BU5D_t9C6552848CAA1DCDD99EC5141171F72E5E8FA322;
struct WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct ArraySlice_1_t173FD3ACCC2631A439B59982D6322FFDC51B753B 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	RuntimeObject* ___value;
};
struct Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	int32_t ___value;
};
struct Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	int32_t ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 
{
	RuntimeObject* ___key;
	int32_t ___value;
};
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
struct KeyValue_2_t230A3613ABD1F675A41109DADA831A38CA517FB8 
{
	UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___value;
};
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	RuntimeObject* ___Item1;
	RuntimeObject* ___Item2;
};
struct AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB 
{
	float ___start;
	float ___end;
	uint32_t ___order;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___sprites;
};
struct AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB_marshaled_pinvoke
{
	float ___start;
	float ___end;
	uint32_t ___order;
	Il2CppSafeArray* ___sprites;
};
struct AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB_marshaled_com
{
	float ___start;
	float ___end;
	uint32_t ___order;
	Il2CppSafeArray* ___sprites;
};
struct BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D 
{
	BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0* ___drawCommands;
	int32_t* ___visibleInstances;
	BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F* ___drawRanges;
	float* ___instanceSortingPositions;
	int32_t* ___drawCommandPickingInstanceIDs;
	int32_t ___drawCommandCount;
	int32_t ___visibleInstanceCount;
	int32_t ___drawRangeCount;
	int32_t ___instanceSortingPositionFloatCount;
};
struct BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F 
{
	float ___m_Weight0;
	float ___m_Weight1;
	float ___m_Weight2;
	float ___m_Weight3;
	int32_t ___m_BoneIndex0;
	int32_t ___m_BoneIndex1;
	int32_t ___m_BoneIndex2;
	int32_t ___m_BoneIndex3;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F 
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	RuntimeObject* ___U3CValueU3Ek__BackingField;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_pinvoke
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	Il2CppIUnknown* ___U3CValueU3Ek__BackingField;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_com
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	Il2CppIUnknown* ___U3CValueU3Ek__BackingField;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___flags;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_OffsetPadding[4];
			int32_t ___hi;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_OffsetPadding[8];
			int32_t ___lo;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_OffsetPadding[12];
			int32_t ___mid;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_OffsetPadding[8];
			uint64_t ___ulomidLE;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_forAlignmentOnly;
		};
	};
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 
{
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
struct Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshaled_pinvoke
{
	Il2CppIUnknown* ___key;
	Il2CppIUnknown* ___value;
};
struct Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshaled_com
{
	Il2CppIUnknown* ___key;
	Il2CppIUnknown* ___value;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 
{
	uint16_t ___codePage;
	uint16_t ___uiFamilyCodePage;
	uint32_t ___flags;
	String_t* ___Names;
};
struct InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshaled_pinvoke
{
	uint16_t ___codePage;
	uint16_t ___uiFamilyCodePage;
	uint32_t ___flags;
	char* ___Names;
};
struct InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshaled_com
{
	uint16_t ___codePage;
	uint16_t ___uiFamilyCodePage;
	uint32_t ___flags;
	Il2CppChar* ___Names;
};
struct InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB 
{
	String_t* ___webName;
	uint16_t ___codePage;
};
struct InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshaled_pinvoke
{
	char* ___webName;
	uint16_t ___codePage;
};
struct InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshaled_com
{
	Il2CppChar* ___webName;
	uint16_t ___codePage;
};
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	float ___m_Time;
	float ___m_Value;
	float ___m_InTangent;
	float ___m_OutTangent;
	int32_t ___m_WeightedMode;
	float ___m_InWeight;
	float ___m_OutWeight;
};
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	float ___m_red;
	float ___m_green;
	float ___m_blue;
	float ___m_intensity;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____byRef;
};
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_pinvoke
{
	int32_t* ____byRef;
};
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_com
{
	int32_t* ____byRef;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A 
{
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CoffsetObjectToWorldU3Ek__BackingField;
	int32_t ___U3CoffsetPrevObjectToWorldU3Ek__BackingField;
	int32_t ___U3CoffsetRenderingLayerMaskU3Ek__BackingField;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 
{
	RuntimeObject* ____value;
	int32_t ____dataPos;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_pinvoke
{
	Il2CppIUnknown* ____value;
	int32_t ____dataPos;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_com
{
	Il2CppIUnknown* ____value;
	int32_t ____dataPos;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70 
{
	float ___height;
	uint32_t ___spriteIndex;
	int32_t ___cornerMode;
};
struct SpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377 
{
	int32_t ___geomIndex;
	int32_t ___indexCount;
	int32_t ___vertexCount;
	int32_t ___spriteIndex;
};
struct SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501 
{
	float ___height;
	float ___bevelCutoff;
	float ___bevelSize;
	uint32_t ___spriteIndex;
	bool ___corner;
};
struct SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501_marshaled_pinvoke
{
	float ___height;
	float ___bevelCutoff;
	float ___bevelSize;
	uint32_t ___spriteIndex;
	int32_t ___corner;
};
struct SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501_marshaled_com
{
	float ___height;
	float ___bevelCutoff;
	float ___bevelSize;
	uint32_t ___spriteIndex;
	int32_t ___corner;
};
struct SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5 
{
	int32_t ___m_GeomIndex;
	int32_t ___m_IndexCount;
	int32_t ___m_VertexCount;
	int32_t ___m_SpriteIndex;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vec3_t2DC07E9249C572CF68A4D54873B4038A68B77E74 
{
	float ___X;
	float ___Y;
	float ___Z;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA 
{
	double ___x;
	double ___y;
};
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA 
{
	float ___x;
	float ___y;
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	float ___x;
	float ___y;
	float ___z;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A 
{
	int32_t ___x;
	int32_t ___y;
};
struct int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
};
struct int4_tBA77D4945786DE82C3A487B33955EA1004996052 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
	int32_t ___w;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 
{
	int32_t ___order;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_pinvoke
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_com
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 
{
	int32_t ___Start;
	int32_t ___End;
	int32_t ___Count;
	int32_t ___IndexStart;
	int32_t ___IndexEnd;
};
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E 
{
	RuntimeObject* ___key;
	RuntimeObject* ___val;
	int32_t ___hash_coll;
};
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_pinvoke
{
	Il2CppIUnknown* ___key;
	Il2CppIUnknown* ___val;
	int32_t ___hash_coll;
};
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_com
{
	Il2CppIUnknown* ___key;
	Il2CppIUnknown* ___val;
	int32_t ___hash_coll;
};
struct FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E 
{
	int32_t ____int32;
	String_t* ____string;
};
struct FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshaled_pinvoke
{
	int32_t ____int32;
	char* ____string;
};
struct FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshaled_com
{
	int32_t ____int32;
	Il2CppChar* ____string;
};
struct CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 
{
	String_t* ___category;
	String_t* ___entry;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite;
};
struct CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_marshaled_pinvoke
{
	char* ___category;
	char* ___entry;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite;
};
struct CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_marshaled_com
{
	Il2CppChar* ___category;
	Il2CppChar* ___entry;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite;
};
struct TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 
{
	String_t* ___fullName;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform;
};
struct TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_marshaled_pinvoke
{
	char* ___fullName;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform;
};
struct TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_marshaled_com
{
	Il2CppChar* ___fullName;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 
{
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___m_DelagateCallback;
	RuntimeObject* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 
{
	uint32_t ___Hi;
	uint64_t ___MidLo;
};
struct Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key;
	RuntimeObject* ___value;
};
struct Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A ___value;
};
struct Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 ___value;
};
struct Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___value;
};
struct KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 
{
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 
{
	int32_t ___key;
	RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A ___value;
};
struct KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 
{
	int32_t ___key;
	CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 ___value;
};
struct KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 
{
	RuntimeObject* ___key;
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___value;
};
struct NativeCustomSlice_1_t00144D7121E64139E2BBFAEB4BA01FB646F1A71B 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct NativeCustomSlice_1_t0D6722C6A546C76474543C10D2E576E494D019A8 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct NativeCustomSlice_1_tB3DF9F46AA60E8412DC5B89CC7878A4BE49ABA45 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct NativeCustomSlice_1_t553B89694440B1C5C7DF7F314D7A0711AE7A0783 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct NativeCustomSlice_1_t1BD4A99A5C57F16086ACE5EED91D969C19693921 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity;
	float ___m_Separation;
	float ___m_NormalImpulse;
	float ___m_TangentImpulse;
	int32_t ___m_Collider;
	int32_t ___m_OtherCollider;
	int32_t ___m_Rigidbody;
	int32_t ___m_OtherRigidbody;
	int32_t ___m_Enabled;
};
struct ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66 
{
	Vec3_t2DC07E9249C572CF68A4D54873B4038A68B77E74 ___Position;
	RuntimeObject* ___Data;
};
struct ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66_marshaled_pinvoke
{
	Vec3_t2DC07E9249C572CF68A4D54873B4038A68B77E74 ___Position;
	Il2CppIUnknown* ___Data;
};
struct ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66_marshaled_com
{
	Vec3_t2DC07E9249C572CF68A4D54873B4038A68B77E74 ___Position;
	Il2CppIUnknown* ___Data;
};
struct CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sphereCenter;
	float ___sphereRadius;
	int32_t ___cullingPlaneOffset;
	int32_t ___cullingPlaneCount;
	float ___cascadeBlendCullingFactor;
	float ___nearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___U3CTypedValueU3Ek__BackingField;
	bool ___U3CIsFieldU3Ek__BackingField;
	String_t* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshaled_pinvoke
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_pinvoke ___U3CTypedValueU3Ek__BackingField;
	int32_t ___U3CIsFieldU3Ek__BackingField;
	char* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshaled_com
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_com ___U3CTypedValueU3Ek__BackingField;
	int32_t ___U3CIsFieldU3Ek__BackingField;
	Il2CppChar* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FalloffType_tE9BECCB411DA63109760103AF7476F422A01376D 
{
	uint8_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct LightMode_t058E4E7AAE5689BCFF46BB8E0259D90D227E7FF9 
{
	uint8_t ___value__;
};
struct LightType_t97C5050F2F742FBF050FEB8FC5131A9A8DB50D26 
{
	uint8_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 
{
	int32_t ___deformVerticesStartPos;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___bindPosesIndex;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___verticesIndex;
};
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	float ___m_Distance;
};
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F 
{
	Type_t* ___type;
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* ___subSystemList;
	UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* ___updateDelegate;
	intptr_t ___updateFunction;
	intptr_t ___loopConditionFunction;
};
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke
{
	Type_t* ___type;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke* ___subSystemList;
	Il2CppMethodPointer ___updateDelegate;
	intptr_t ___updateFunction;
	intptr_t ___loopConditionFunction;
};
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com
{
	Type_t* ___type;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com* ___subSystemList;
	Il2CppMethodPointer ___updateDelegate;
	intptr_t ___updateFunction;
	intptr_t ___loopConditionFunction;
};
struct PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent;
};
struct PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
};
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	float ___m_Distance;
	float ___m_Fraction;
	int32_t ___m_Collider;
};
struct SByteEnum_t0782AA0EFC5D1042A39675F37D7DD7C098781DD9 
{
	int8_t ___value__;
};
struct ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftTangent;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightTangent;
	int32_t ___mode;
};
struct SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 
{
	String_t* ___m_Name;
	String_t* ___m_Guid;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation;
	float ___m_Length;
	int32_t ___m_ParentId;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_Color;
};
struct SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_Guid;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation;
	float ___m_Length;
	int32_t ___m_ParentId;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_Color;
};
struct SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_Guid;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation;
	float ___m_Length;
	int32_t ___m_ParentId;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_Color;
};
struct SpriteShapeGeneratorResult_t4387EDA3BC612997E080D5A0CC96946B994C8FFC 
{
	int32_t ___value__;
};
struct UEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___a;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___b;
	int32_t ___idx;
	int32_t ___type;
};
struct UHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___a;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___b;
	int32_t ___idx;
	ArraySlice_1_t173FD3ACCC2631A439B59982D6322FFDC51B753B ___ilarray;
	int32_t ___ilcount;
	ArraySlice_1_t173FD3ACCC2631A439B59982D6322FFDC51B753B ___iuarray;
	int32_t ___iucount;
};
struct UInt16Enum_t481D129F5FAE551E8684190D640F0FAEFB237CF8 
{
	uint16_t ___value__;
};
struct UStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9 
{
	ArraySlice_1_t173FD3ACCC2631A439B59982D6322FFDC51B753B ___points;
	int32_t ___pointCount;
};
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c0;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c1;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c2;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c3;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct HebrewToken_tFAA97D4A183580830C64EB11A971CC75EB08B76E 
{
	int16_t ___value__;
};
struct JobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___spriteAngles;
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___spriteData;
};
struct JobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___position;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___ptData;
};
struct JobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36 
{
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___cpData;
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___exData;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___cpInfo;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___position;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___tangentLt;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___tangentRt;
};
struct JobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___bottom;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___top;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___left;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___right;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___cornerData;
};
struct JobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___top;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___bottom;
};
struct JobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481 
{
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___sgInfo;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___spriteInfo;
};
struct JobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___pos;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___uv;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___tan;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___meta;
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___sprite;
};
struct JobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___texRect;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___texData;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___uvInfo;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___metaInfo;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___border;
};
struct TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4 
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___UtcOffset;
	bool ___IsDst;
	uint8_t ___AbbreviationIndex;
};
struct TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_marshaled_pinvoke
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___UtcOffset;
	int32_t ___IsDst;
	uint8_t ___AbbreviationIndex;
};
struct TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_marshaled_com
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___UtcOffset;
	int32_t ___IsDst;
	uint8_t ___AbbreviationIndex;
};
struct DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD 
{
	int32_t ___HijriMonthsLengthFlags;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___GregorianDate;
};
struct DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshaled_pinvoke
{
	int32_t ___HijriMonthsLengthFlags;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___GregorianDate;
};
struct DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshaled_com
{
	int32_t ___HijriMonthsLengthFlags;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___GregorianDate;
};
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	int32_t ___instanceID;
	int32_t ___cookieID;
	float ___cookieScale;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	float ___range;
	float ___coneAngle;
	float ___innerConeAngle;
	float ___shape0;
	float ___shape1;
	uint8_t ___type;
	uint8_t ___mode;
	uint8_t ___shadow;
	uint8_t ___falloff;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 
{
	String_t* ___m_StreamName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_SourceObject;
	Type_t* ___m_SourceBindingType;
	CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* ___m_CreateOutputMethod;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke
{
	char* ___m_StreamName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_SourceObject;
	Type_t* ___m_SourceBindingType;
	Il2CppMethodPointer ___m_CreateOutputMethod;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com
{
	Il2CppChar* ___m_StreamName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_SourceObject;
	Type_t* ___m_SourceBindingType;
	Il2CppMethodPointer ___m_CreateOutputMethod;
};
struct SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB 
{
	int32_t ___status;
};
struct SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 
{
	NativeCustomSlice_1_t553B89694440B1C5C7DF7F314D7A0711AE7A0783 ___vertices;
	NativeCustomSlice_1_t00144D7121E64139E2BBFAEB4BA01FB646F1A71B ___boneWeights;
	NativeCustomSlice_1_tB3DF9F46AA60E8412DC5B89CC7878A4BE49ABA45 ___bindPoses;
	NativeCustomSlice_1_t1BD4A99A5C57F16086ACE5EED91D969C19693921 ___tangents;
	bool ___hasTangents;
	int32_t ___spriteVertexStreamSize;
	int32_t ___spriteVertexCount;
	int32_t ___tangentVertexOffset;
	int32_t ___deformVerticesStartPos;
	int32_t ___transformId;
	NativeCustomSlice_1_t0D6722C6A546C76474543C10D2E576E494D019A8 ___boneTransformId;
};
struct SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_marshaled_pinvoke
{
	NativeCustomSlice_1_t553B89694440B1C5C7DF7F314D7A0711AE7A0783 ___vertices;
	NativeCustomSlice_1_t00144D7121E64139E2BBFAEB4BA01FB646F1A71B ___boneWeights;
	NativeCustomSlice_1_tB3DF9F46AA60E8412DC5B89CC7878A4BE49ABA45 ___bindPoses;
	NativeCustomSlice_1_t1BD4A99A5C57F16086ACE5EED91D969C19693921 ___tangents;
	int32_t ___hasTangents;
	int32_t ___spriteVertexStreamSize;
	int32_t ___spriteVertexCount;
	int32_t ___tangentVertexOffset;
	int32_t ___deformVerticesStartPos;
	int32_t ___transformId;
	NativeCustomSlice_1_t0D6722C6A546C76474543C10D2E576E494D019A8 ___boneTransformId;
};
struct SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_marshaled_com
{
	NativeCustomSlice_1_t553B89694440B1C5C7DF7F314D7A0711AE7A0783 ___vertices;
	NativeCustomSlice_1_t00144D7121E64139E2BBFAEB4BA01FB646F1A71B ___boneWeights;
	NativeCustomSlice_1_tB3DF9F46AA60E8412DC5B89CC7878A4BE49ABA45 ___bindPoses;
	NativeCustomSlice_1_t1BD4A99A5C57F16086ACE5EED91D969C19693921 ___tangents;
	int32_t ___hasTangents;
	int32_t ___spriteVertexStreamSize;
	int32_t ___spriteVertexCount;
	int32_t ___tangentVertexOffset;
	int32_t ___deformVerticesStartPos;
	int32_t ___transformId;
	NativeCustomSlice_1_t0D6722C6A546C76474543C10D2E576E494D019A8 ___boneTransformId;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C 
{
	int16_t ___token;
	int16_t ___value;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA_StaticFields
{
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___zero;
};
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_StaticFields
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___zero;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___zero;
};
struct int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_StaticFields
{
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___zero;
};
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_StaticFields
{
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___identity;
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___zero;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields
{
	PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* ___None;
	double ___DefaultDuration;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
struct AngleRangeInfoU5BU5D_t8AE5F89B8CA102A1093EFEA4E67B9364AC690BC8  : public RuntimeArray
{
	ALIGN_FIELD (8) AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB m_Items[1];

	inline AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___sprites), (void*)NULL);
	}
	inline AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___sprites), (void*)NULL);
	}
};
struct ContourVertexU5BU5D_tA2E5DCD24E23FACD7195A27617FA696A603992F5  : public RuntimeArray
{
	ALIGN_FIELD (8) ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66 m_Items[1];

	inline ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Data), (void*)NULL);
	}
	inline ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Data), (void*)NULL);
	}
};
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA m_Items[1];

	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		m_Items[index] = value;
	}
};
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
struct OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88  : public RuntimeArray
{
	ALIGN_FIELD (8) OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 m_Items[1];

	inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___callback), (void*)NULL);
	}
	inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___callback), (void*)NULL);
	}
};
struct TransformDataU5BU5D_t9C6552848CAA1DCDD99EC5141171F72E5E8FA322  : public RuntimeArray
{
	ALIGN_FIELD (8) TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 m_Items[1];

	inline TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fullName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___transform), (void*)NULL);
		#endif
	}
	inline TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fullName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___transform), (void*)NULL);
		#endif
	}
};
struct WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577  : public RuntimeArray
{
	ALIGN_FIELD (8) WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 m_Items[1];

	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateCallback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateState), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_WaitHandle), (void*)NULL);
		#endif
	}
	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateCallback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateState), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_WaitHandle), (void*)NULL);
		#endif
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m7FCB36270690D2C049E6E5AB2447ECBFA5EEA200_gshared (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisRuntimeObject_m71A883897624019E6587A0716169FDF72475BC3D_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOfImpl_TisRuntimeObject_mE7303DACD06CE029EA0F44ADF103A0276A96AA92_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m259DE31308F37526EF40E73D7C36AB5DDC896CBE_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
inline bool ValueTuple_2_Equals_m7FCB36270690D2C049E6E5AB2447ECBFA5EEA200 (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_Equals_m7FCB36270690D2C049E6E5AB2447ECBFA5EEA200_gshared)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoneWeight_Equals_m854F30571680D394953146256B0245F294536B7B (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Equals_m09E29FD8CDADF609FD8CF4145BFD4843174569A1 (bool* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Bounds_Equals_m93E0B9D24C73E57A6FABB9D312101D48183C88CC_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_Equals_m07028241299798697EB8ECAD879B956B0C6F406C (uint8_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_Equals_mE997ECE5A71CDA6C3C9AFA6EF22EE50BED8EE8E0 (Il2CppChar* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomAttributeNamedArgument_Equals_mB1743B7F2494519A511010F4CB52FC26DF692151 (CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomAttributeTypedArgument_Equals_m88F54FC46D513F75E9C932B5AB529E7C3895D917 (CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_Equals_m0EF1F769B475D00BB907072ED7585E6A6ECAB133 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_Equals_mD06AE5E80DBE3651F359FA951A93B7EACAB1A4D8 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3 (double* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int16_Equals_m4F5EDE255F1646CAF6CFD5052D80D56AAECB0512 (int16_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B (int32_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_Equals_mDA5711B3D23B8CB282F34F73F1D7C0726D042FE8 (int64_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E (intptr_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Matrix4x4_Equals_m35CFC5F304BB40EFFE011B92AA87B77CD8FF8F74_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_mCF93B00BA4FCDDE6100918451343DB9A0583A0A0_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SByte_Equals_m2436A58AA51169044BB6FAB4F3924C06037C34EF (int8_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F (float* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_Equals_mFE37205C5F1295DD799B0EE207142BFA4222D47A (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt16_Equals_mA21E8831A57BC983311BFEE7023615002FC50207 (uint16_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_Equals_mC516812849D8243A72D34D830D840A1F1E32795E (uint32_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_Equals_m175E7A6F2A4606A94579529400854317542648A9 (uint64_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mA4E81D6FCE503DBD502BA499708344410F60DA4E_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mB4BE43D5986864F5C22B919F2957E0309F10E3B4_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_mC2596CA0F441D25DE7A9419BE66A8FA2DA355CB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool double2_Equals_mFF460810B0184AFE3BF8DC1865F306AD087FEC33 (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool float2_Equals_mD389D74AC9D1E4E537F95C97B79026A6C3244788 (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool float3_Equals_mD988046122040559D8C9EFED2DA347495D722A2C (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool float4_Equals_m4D841ABA91D26FA16B07205DC9D51612265FFAB4 (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool float4x4_Equals_mD77FF5880D1151E85DC213AFF8E24B12044DB6B8 (float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool int2_Equals_m6B885828097BED2665EAA565C07E9FE83627C481 (int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool int3_Equals_mAD3F27218DB5A5341B15F177DBA5ED687A0727D1 (int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline int32_t Array_LastIndexOf_TisRuntimeObject_m71A883897624019E6587A0716169FDF72475BC3D (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))Array_LastIndexOf_TisRuntimeObject_m71A883897624019E6587A0716169FDF72475BC3D_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
inline int32_t Array_LastIndexOfImpl_TisRuntimeObject_mE7303DACD06CE029EA0F44ADF103A0276A96AA92 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))Array_LastIndexOfImpl_TisRuntimeObject_mE7303DACD06CE029EA0F44ADF103A0276A96AA92_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
inline void Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m259DE31308F37526EF40E73D7C36AB5DDC896CBE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m259DE31308F37526EF40E73D7C36AB5DDC896CBE_gshared)(___0_array, ___1_index, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Bounds_Equals_m615135524315743D29633C33B6C8B16B754266DB_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_m25B95D8412B79CC7F8B34062BFAE662BD99578BE_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_other, const RuntimeMethod* method) ;
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E Array_InternalArray__IReadOnlyList_get_Item_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_mE6DDD885A181AD2A87F657311CEE327EE6D006C9_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E Array_InternalArray__IReadOnlyList_get_Item_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m7A8F8D72AB1B5BB2D7985C3807247C5BE1B2A457_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 Array_InternalArray__IReadOnlyList_get_Item_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m43A718F0F0534116D0F7A61DF7DFF3F3516013E6_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A Array_InternalArray__IReadOnlyList_get_Item_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mF7BA6A36686BA2CCCA69898021A00ACFDE3CA81C_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF Array_InternalArray__IReadOnlyList_get_Item_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_mBDDC0D11EC0443CD3D8DFE571DEB2B4F903004A1_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 Array_InternalArray__IReadOnlyList_get_Item_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m814F13B99F7DE14606BDC5650AF85C17CEDE6DFB_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 Array_InternalArray__IReadOnlyList_get_Item_TisTableRange_tD242F3D62C818E84B6903C18A6CE33399672B497_m10D1475A270C025AD0BCA22C7FE9F2FCF49917EE_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E Array_InternalArray__IReadOnlyList_get_Item_Tisbucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_m89163ED7F65E6183B5B3B2965F11D38503F1CFC5_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C Array_InternalArray__IReadOnlyList_get_Item_TisHebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C_m7F093EB05A1072964EAF3F3DAF94224C4E080075_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E Array_InternalArray__IReadOnlyList_get_Item_TisFormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_m7BC7268B77A8D7C8C7D95BE16E809E20281D242F_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 Array_InternalArray__IReadOnlyList_get_Item_TisCategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_m964FA097FEEEDA6B39EC477DF9A27B10C63F1C81_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13 Array_InternalArray__IReadOnlyList_get_Item_TisJobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13_mAA5FBD7659E42A29237F4B344E2B330271B77A8A_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	JobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		JobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3 Array_InternalArray__IReadOnlyList_get_Item_TisJobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3_m3E46FD3DF46C0BF81DB37D4334DD71E55F9974C3_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	JobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		JobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36 Array_InternalArray__IReadOnlyList_get_Item_TisJobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36_m12456F4BB9046FD368BC9537C9BE6A1762D9A18C_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	JobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		JobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99 Array_InternalArray__IReadOnlyList_get_Item_TisJobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99_mD44515E0FF0FCD18ADCC5CE38E6824A98DD2AECB_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	JobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		JobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C Array_InternalArray__IReadOnlyList_get_Item_TisJobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C_mC3335F6DC230735C3BFDF28CF1553E38ABC95C77_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	JobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		JobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481 Array_InternalArray__IReadOnlyList_get_Item_TisJobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481_m5B4D8A54AC229367E33E5F3E8E52B68CACA3C2CD_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	JobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		JobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC Array_InternalArray__IReadOnlyList_get_Item_TisJobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC_m823DD46FD50480BCAF0D72B2AFAB6FC736D80CAF_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	JobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		JobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29 Array_InternalArray__IReadOnlyList_get_Item_TisJobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29_m90BC06EB5533C77E0B1FF6BC3C1CAD52B972F663_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	JobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		JobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 Array_InternalArray__IReadOnlyList_get_Item_TisTransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_m1B1EBF25CB7AF5F98FBF86E8C8A3B8ECC7A78D83_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4 Array_InternalArray__IReadOnlyList_get_Item_TisTZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_m99BF96D4A07C51560FF7217B67687B065DAF10A5_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD Array_InternalArray__IReadOnlyList_get_Item_TisDateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_mBF7300CE5D56B7856247E461DF11FCAFA7C65FD1_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 Array_InternalArray__IReadOnlyList_get_Item_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mF399A3A50A5B09D4548666AAEC6EDC3BA5866DEF_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 Array_InternalArray__IReadOnlyList_get_Item_TisPowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304_m476084FBA5948D1FE6B61B517F3F3C0F317F96FE_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEntry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448_m1341D6A1ED62D97E068049FF1F0D773F802549D4_gshared (RuntimeArray* __this, Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 L_5 = ___0_item;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEntry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339_m7D8C260D5241DDEC3CA66928483F555D29020E32_gshared (RuntimeArray* __this, Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 L_5 = ___0_item;
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEntry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC_m59A1497795032EDBCD935419A7F858E138E0E670_gshared (RuntimeArray* __this, Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC L_5 = ___0_item;
		Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEntry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC_m7233A13ABEE499934DAB32BAE66A70101899C526_gshared (RuntimeArray* __this, Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC L_5 = ___0_item;
		Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEntry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39_mF7187E2DF672F7CB4FBBA86134DF5DA90B9A3040_gshared (RuntimeArray* __this, Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 L_5 = ___0_item;
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEntry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC_mD8EC6D4F1F4F498A8961A037F2FDB5CD6B17C947_gshared (RuntimeArray* __this, Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC L_5 = ___0_item;
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEntry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC_mEFFFB4BE04402BB873E80E1A0C96366ED8143496_gshared (RuntimeArray* __this, Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC L_5 = ___0_item;
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisKeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14_m3A0B004464600BA9294A5A0C9EFD11958A210E00_gshared (RuntimeArray* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_5 = ___0_item;
		KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisKeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3_mB27E726FD4D77350C559A90787ECF113E7444FB4_gshared (RuntimeArray* __this, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_5 = ___0_item;
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisKeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362_mCAD9FA25E494CDA0A6E0370859EF1AF00EB8F4A8_gshared (RuntimeArray* __this, KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 L_5 = ___0_item;
		KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisKeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14_m0DB5EE15E6C93795BA7D772F837F30549CFC238B_gshared (RuntimeArray* __this, KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 L_5 = ___0_item;
		KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisKeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8_mF97531F303A69295584EE8D3FBAED0D1188CE286_gshared (RuntimeArray* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_5 = ___0_item;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m5E2A67BD1E1A20D311688496F6F7F58D61D7AD71_gshared (RuntimeArray* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_5 = ___0_item;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisKeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2_m090AC5473D50101D38A5A799E5244D37D61D3FFF_gshared (RuntimeArray* __this, KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 L_5 = ___0_item;
		KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisKeyValue_2_t230A3613ABD1F675A41109DADA831A38CA517FB8_mD49E5C81B5BAC9BF24CB41F12DCDAA0A2BBD37D7_gshared (RuntimeArray* __this, KeyValue_2_t230A3613ABD1F675A41109DADA831A38CA517FB8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValue_2_t230A3613ABD1F675A41109DADA831A38CA517FB8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		KeyValue_2_t230A3613ABD1F675A41109DADA831A38CA517FB8 L_5 = ___0_item;
		KeyValue_2_t230A3613ABD1F675A41109DADA831A38CA517FB8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<KeyValue_2_t230A3613ABD1F675A41109DADA831A38CA517FB8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSlot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744_mCD080CE5C82C15ECD6428B70D02E155A71EF8206_gshared (RuntimeArray* __this, Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 L_5 = ___0_item;
		Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m75F529A4B8E28B5BD04A45DADC69555B38D9976B_gshared (RuntimeArray* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_5 = ___0_item;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = ValueTuple_2_Equals_m7FCB36270690D2C049E6E5AB2447ECBFA5EEA200((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB_mDCC45FFBD6F2A641D7CA9CD025CEDFE8FD4B4231_gshared (RuntimeArray* __this, AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB L_5 = ___0_item;
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m8066D444535E7D0C633FC4F74A356EEB2247CE84_gshared (RuntimeArray* __this, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_5 = ___0_item;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mE35F6CCBF1A3230CDBA811C855E559D310135A18_gshared (RuntimeArray* __this, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_5 = ___0_item;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = BoneWeight_Equals_m854F30571680D394953146256B0245F294536B7B((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC87E769305079EFCC983039A0E39CA9A04AEAC5E_gshared (RuntimeArray* __this, bool ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		bool L_5 = ___0_item;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Boolean_Equals_m09E29FD8CDADF609FD8CF4145BFD4843174569A1((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mAB391D213B14F0106F9BDE45BA698F13D7EFC4BE_gshared (RuntimeArray* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_5 = ___0_item;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Bounds_Equals_m93E0B9D24C73E57A6FABB9D312101D48183C88CC_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE10D1839B9BE00B7B1C67213057C3713F96C18D_gshared (RuntimeArray* __this, uint8_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		uint8_t L_5 = ___0_item;
		uint8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Byte_Equals_m07028241299798697EB8ECAD879B956B0C6F406C((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m1FCCCB520F96D3EB6C8B78C972942A981F26491F_gshared (RuntimeArray* __this, Il2CppChar ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Il2CppChar L_5 = ___0_item;
		Il2CppChar L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Char_Equals_mE997ECE5A71CDA6C3C9AFA6EF22EE50BED8EE8E0((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801_m522EC045E8841406451241E51E2D2F14B319A365_gshared (RuntimeArray* __this, ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 L_5 = ___0_item;
		ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66_m64397F5125828D7C1E1434B7DDB2090B2D65F8E3_gshared (RuntimeArray* __this, ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66 L_5 = ___0_item;
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A037364CE9AA095B44157F42D0807B4E0BD025A_gshared (RuntimeArray* __this, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_5 = ___0_item;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_mD3E24B9801A8512DF810E3B118E624FDA13CB2E6_gshared (RuntimeArray* __this, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_5 = ___0_item;
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = CustomAttributeNamedArgument_Equals_mB1743B7F2494519A511010F4CB52FC26DF692151((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_m673CB2669FC29055C0A5FD321754D3F407A5FD1F_gshared (RuntimeArray* __this, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_5 = ___0_item;
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = CustomAttributeTypedArgument_Equals_m88F54FC46D513F75E9C932B5AB529E7C3895D917((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m93BD1CEE03A45DD70720992CA7CBFB6A7041A9A7_gshared (RuntimeArray* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5 = ___0_item;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = DateTime_Equals_m0EF1F769B475D00BB907072ED7585E6A6ECAB133((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m423663E3431022BABB5E33B8E49FBEF4FF9963BB_gshared (RuntimeArray* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_5 = ___0_item;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Decimal_Equals_mD06AE5E80DBE3651F359FA951A93B7EACAB1A4D8((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_m2917987ABA3EDCA1951D4FEE3836D6EF7E2CF165_gshared (RuntimeArray* __this, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_5 = ___0_item;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mEBA37CCA2EF9D990F9564FFFE57EDD25D70DD51C_gshared (RuntimeArray* __this, double ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		double L_5 = ___0_item;
		double L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEphemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_mD5D52BBB5E96012B01E02D0A92D4A46C5F2A21E6_gshared (RuntimeArray* __this, Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 L_5 = ___0_item;
		Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m4637ED8C7B26207F4B594A78C78AB69320981AAB_gshared (RuntimeArray* __this, int16_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int16_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		int16_t L_5 = ___0_item;
		int16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Int16_Equals_m4F5EDE255F1646CAF6CFD5052D80D56AAECB0512((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB8A5DF381EE5B33D70109CF43C474562787F47F3_gshared (RuntimeArray* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_5 = ___0_item;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mFB8E06F0A66EF6F488C6B316898FD9AD0C5FEB53_gshared (RuntimeArray* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_5 = ___0_item;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<int32_t> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m42E1B788D9D42F476F885509E89F98C456187473_gshared (RuntimeArray* __this, int64_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		int64_t L_5 = ___0_item;
		int64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Int64_Equals_mDA5711B3D23B8CB282F34F73F1D7C0726D042FE8((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisIntPtr_t_m5A28F4B453C06806055184E166C5DF13EF74BD31_gshared (RuntimeArray* __this, intptr_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		intptr_t L_5 = ___0_item;
		intptr_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_mC85641F765237F54D5AC2B7C7B8E94AE88AB96ED_gshared (RuntimeArray* __this, InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 L_5 = ___0_item;
		InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_m8C5A3DEA7DDF3981F0EEF7F208AD7C17D76E9934_gshared (RuntimeArray* __this, InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB L_5 = ___0_item;
		InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m89ADC7FAC382CA6363999CE7F86BC2D210EADC27_gshared (RuntimeArray* __this, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_5 = ___0_item;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m0A39432BD935B48292A59A9D21AEB7CAA904B871_gshared (RuntimeArray* __this, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_5 = ___0_item;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mE246A2B75AE51A282DD762C380EDC9C5859CDC00_gshared (RuntimeArray* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = ___0_item;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Matrix4x4_Equals_m35CFC5F304BB40EFFE011B92AA87B77CD8FF8F74_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRuntimeObject_m2ACF92B2E545054F7EC393728A9F67D7C637E9E1_gshared (RuntimeArray* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		RuntimeObject* L_4 = ___0_item;
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_5 = V_2;
		if (L_5)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_6, L_7));
	}

IL_0042:
	{
		RuntimeObject* L_8 = ___0_item;
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (V_2), L_8);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_m405902A5D0BB3DB3BF6EA0679825BFAE3F05B40A_gshared (RuntimeArray* __this, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 L_5 = ___0_item;
		ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_mF79EA3F5B4F6C6418A95F2B819138A6388F58233_gshared (RuntimeArray* __this, PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 L_5 = ___0_item;
		PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mE82CD18353D85357C7E26AABE291A38FAB26F3B9_gshared (RuntimeArray* __this, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_5 = ___0_item;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_m7210EE9AA7B07231147EFA265B4892258A208A62_gshared (RuntimeArray* __this, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_5 = ___0_item;
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_m9DE12A772CEF1018402AF2EDAFF3030F36D4B450_gshared (RuntimeArray* __this, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_5 = ___0_item;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_mB2FF6F275A0E4999D2CC733DC6528C8BB93C4E3C_gshared (RuntimeArray* __this, PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C L_5 = ___0_item;
		PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_m560A6E6848DE31CF19D5E3182EB184930118C83C_gshared (RuntimeArray* __this, PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 L_5 = ___0_item;
		PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m623EB934C6F75D0C45C7147730F129C9E70B72A1_gshared (RuntimeArray* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___0_item;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Quaternion_Equals_mCF93B00BA4FCDDE6100918451343DB9A0583A0A0_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m8C714CB25E06D3C0E0FAD4E70587CC72E6F32EDE_gshared (RuntimeArray* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_5 = ___0_item;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A_m05711523D8670C62DFBE4273215DB9FEBA52A159_gshared (RuntimeArray* __this, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_5 = ___0_item;
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_mA4775F05AB1ADF639D37D4DE616045B23B60BD80_gshared (RuntimeArray* __this, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_5 = ___0_item;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB2AA4BB897B74FFCDA94131C354F02D705EE5644_gshared (RuntimeArray* __this, int8_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int8_t V_2 = 0x0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		int8_t L_5 = ___0_item;
		int8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = SByte_Equals_m2436A58AA51169044BB6FAB4F3924C06037C34EF((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSByteEnum_t0782AA0EFC5D1042A39675F37D7DD7C098781DD9_mC60E978D6C4273F147ED3DA4830ADE9FA2C7BEDC_gshared (RuntimeArray* __this, int8_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int8_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		int8_t L_5 = ___0_item;
		int8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<int8_t> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5_m4014567DCE413200DA452D755979E1094DE9C6EA_gshared (RuntimeArray* __this, ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5 L_5 = ___0_item;
		ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6F76A005551D0A7DF82E09005AC4BE373BA2A332_gshared (RuntimeArray* __this, float ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		float L_5 = ___0_item;
		float L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70_m36D943CCA42959C3C4DCAE02C808C664CB7062C6_gshared (RuntimeArray* __this, SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70 L_5 = ___0_item;
		SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_mBD6B26099ADA7EBE8A3F4A0280196EB557788351_gshared (RuntimeArray* __this, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 L_5 = ___0_item;
		SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB_m289C64162A1015BCB05070A2FABB01F491560E31_gshared (RuntimeArray* __this, SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB L_5 = ___0_item;
		SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377_m316E48888429B5A0548F665EE264B5C9EA6C9F0E_gshared (RuntimeArray* __this, SpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377 L_5 = ___0_item;
		SpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501_m1E815814712C47C8896A557B6ACF1F640B3B9BE3_gshared (RuntimeArray* __this, SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501 L_5 = ___0_item;
		SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5_mC3F2DC125C3A1C0E4426DC4E3525A5364D3D7D8F_gshared (RuntimeArray* __this, SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5 L_5 = ___0_item;
		SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_mDC8FCB348D7A3688266A1D88314AD3405F402599_gshared (RuntimeArray* __this, SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 L_5 = ___0_item;
		SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mDD6859DC3C38CEF85D1A4F2CCF59DFD0C2FF03BF_gshared (RuntimeArray* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5 = ___0_item;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = TimeSpan_Equals_mFE37205C5F1295DD799B0EE207142BFA4222D47A((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48_mE46D7294D919C64C1409B97854432129B9B34DD4_gshared (RuntimeArray* __this, UEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48 L_5 = ___0_item;
		UEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE_m9C9DEF6AC65513DAB71D7554EB6DF4B2C544F535_gshared (RuntimeArray* __this, UHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE L_5 = ___0_item;
		UHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEC06E99986937CFA12CBFE4F7212619918ADE33E_gshared (RuntimeArray* __this, uint16_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		uint16_t L_5 = ___0_item;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = UInt16_Equals_mA21E8831A57BC983311BFEE7023615002FC50207((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUInt16Enum_t481D129F5FAE551E8684190D640F0FAEFB237CF8_m96155B7525A4A8B332E7093F12E6C4889CB9677E_gshared (RuntimeArray* __this, uint16_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		uint16_t L_5 = ___0_item;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<uint16_t> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB598970CC4AFA95A38D6DBDE6CB0D4043C1F5A64_gshared (RuntimeArray* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		uint32_t L_5 = ___0_item;
		uint32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = UInt32_Equals_mC516812849D8243A72D34D830D840A1F1E32795E((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF41FACACB76BF1E2A384B990A17AD895AF3AB357_gshared (RuntimeArray* __this, uint64_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		uint64_t L_5 = ___0_item;
		uint64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = UInt64_Equals_m175E7A6F2A4606A94579529400854317542648A9((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9_mBF3DCE700B14C22343C3CFF354A142E9E2E92EBF_gshared (RuntimeArray* __this, UStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9 L_5 = ___0_item;
		UStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m01C8456C1A7B1A78BE016ED5248D83A0748A2C5C_gshared (RuntimeArray* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___0_item;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector2_Equals_mA4E81D6FCE503DBD502BA499708344410F60DA4E_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8607C92881A800B10A96D62148CE7A750E62640E_gshared (RuntimeArray* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_item;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector3_Equals_mB4BE43D5986864F5C22B919F2957E0309F10E3B4_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mF072B5964F42AC3B28463A6572BBB5E3E8A89AC1_gshared (RuntimeArray* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = ___0_item;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector4_Equals_mC2596CA0F441D25DE7A9419BE66A8FA2DA355CB9_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisIl2CppFullySharedGenericAny_m8B7CCAC86F27AB5C27D0AB84D823D11D11013D25_gshared (RuntimeArray* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
	const Il2CppFullySharedGenericAny L_6 = L_4;
	const Il2CppFullySharedGenericAny L_10 = L_4;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
	memset(V_2, 0, SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (Il2CppFullySharedGenericAny*)V_2);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___0_item : &___0_item), SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_4);
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, V_2, SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_6);
		if (L_7)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_8 = V_1;
		int32_t L_9;
		L_9 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_8, L_9));
	}

IL_0042:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___0_item : &___0_item), SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_10);
		bool L_13;
		L_13 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_12, (void*)(Il2CppFullySharedGenericAny*)V_2, L_11);
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_14, L_15));
	}

IL_0061:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0065:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_19;
		L_19 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisdouble2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA_m128CC935824E4A0EF5991BD01DE0350269943CFE_gshared (RuntimeArray* __this, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_5 = ___0_item;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = double2_Equals_mFF460810B0184AFE3BF8DC1865F306AD087FEC33((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_mB696172EB9652C14700FFAB54C7F6F65ECC416B4_gshared (RuntimeArray* __this, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_5 = ___0_item;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = float2_Equals_mD389D74AC9D1E4E537F95C97B79026A6C3244788((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_mBFA13200E975E6D04E95673A9D1EE83211D3E2F3_gshared (RuntimeArray* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_5 = ___0_item;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = float3_Equals_mD988046122040559D8C9EFED2DA347495D722A2C((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m210D3D2CAFCFBD1638A0F50F5A5FCEF6A9867AB8_gshared (RuntimeArray* __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_5 = ___0_item;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = float4_Equals_m4D841ABA91D26FA16B07205DC9D51612265FFAB4((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_mF115854BF0EEBBACD62DFDC41024B6E0A7D0D483_gshared (RuntimeArray* __this, float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_5 = ___0_item;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = float4x4_Equals_mD77FF5880D1151E85DC213AFF8E24B12044DB6B8((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m3B3B5C3BA21654EED878928938DE05597B99CE51_gshared (RuntimeArray* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_5 = ___0_item;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = int2_Equals_m6B885828097BED2665EAA565C07E9FE83627C481((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_m6808451B0D37F3D8339361E89541E5B06F03AC9C_gshared (RuntimeArray* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_5 = ___0_item;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = int3_Equals_mAD3F27218DB5A5341B15F177DBA5ED687A0727D1((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mDBD0FB46B01ABF3DDAF2B784A3A3E91CC16C998F_gshared (RuntimeArray* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_5 = ___0_item;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTableRange_tD242F3D62C818E84B6903C18A6CE33399672B497_m3BAEFC9B5542B6A887B221028FD733779E8F23EB_gshared (RuntimeArray* __this, TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 L_5 = ___0_item;
		TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisbucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_mA601AC1A9209505C75ABCBE3D5DFBA677221EAE0_gshared (RuntimeArray* __this, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_5 = ___0_item;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C_m2B1D94AA92AE385E5FCEDD0B5113118ABDDFF90B_gshared (RuntimeArray* __this, HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C L_5 = ___0_item;
		HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_mC66BCEC5997879778FB48B85283513E7C9F19DE1_gshared (RuntimeArray* __this, FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E L_5 = ___0_item;
		FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_m38DA8A8CED0009DF4D31C594DB703DA52160F1CE_gshared (RuntimeArray* __this, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_5 = ___0_item;
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisJobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13_m5D77ADDDA8C45AAB53C7B685DB31CE3655F55D94_gshared (RuntimeArray* __this, JobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		JobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13 L_5 = ___0_item;
		JobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<JobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisJobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3_mA7D4766B9B38EDF692EA023ABF20CB4C3E8E4896_gshared (RuntimeArray* __this, JobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		JobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3 L_5 = ___0_item;
		JobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<JobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisJobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36_m8CBCEA1CBA9FF33EF458B94407872E7CFF946B75_gshared (RuntimeArray* __this, JobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		JobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36 L_5 = ___0_item;
		JobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<JobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisJobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99_mBB81086062D6BA8782C56C2E22B732661B194019_gshared (RuntimeArray* __this, JobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		JobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99 L_5 = ___0_item;
		JobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<JobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisJobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C_m8259EB62E74E53944E413382D3C51C238FFF63B3_gshared (RuntimeArray* __this, JobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		JobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C L_5 = ___0_item;
		JobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<JobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisJobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481_mBE26ACAB7770BEB0B3EE8B4C5E468FCB277C145E_gshared (RuntimeArray* __this, JobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		JobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481 L_5 = ___0_item;
		JobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<JobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisJobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC_m714A93C58E793ECFBCE54AE11C55AA6A69B494C4_gshared (RuntimeArray* __this, JobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		JobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC L_5 = ___0_item;
		JobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<JobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisJobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29_mC7A68795532F6FA795BDD00AD75610B92D42B946_gshared (RuntimeArray* __this, JobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		JobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29 L_5 = ___0_item;
		JobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<JobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_mE6B4CFA0B75B75A4426C99BAE211B3F08948B008_gshared (RuntimeArray* __this, TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 L_5 = ___0_item;
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_mC4B5AFEE82887920185F7735B6B6F3A18C05335D_gshared (RuntimeArray* __this, TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4 L_5 = ___0_item;
		TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_m58E5D996F93DBF21AFC6350D6F1C60211B661A75_gshared (RuntimeArray* __this, DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD L_5 = ___0_item;
		DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m31A62937883F119D36E9BE9D9BA31B6369B45579_gshared (RuntimeArray* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_5 = ___0_item;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304_m38545E86C92832E3FC46B6C11B726012CDCF7C47_gshared (RuntimeArray* __this, PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 L_5 = ___0_item;
		PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448_m8FA8D029CBA9CF562E15D497FCB1206AFE78A06F_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339_m508C778EC3299E72EF498E4796B441D48B35C8AE_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC_m3BFFD02BB909CEF190F6B30584ECCED907928DC5_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC_m978518C460FD512E64E3E4D7E7BB3F9CA1289332_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39_m67CAFF8F487DD85F0544EAF82289F0F2E0487741_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC_mF2CD865AF12B1E19DB9B7AB31DD11C62FF699AD9_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC_m62BBDC98F25347277960A69F05C7DB25C8C0BA73_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14_m476C66106A6409EC4D5BE8D65183F9A3A9C1E5D3_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3_m3F0F959B82F38C785E9BAC89084C1AF279B049C2_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362_mB113914C316984BF1426E811118E4F52FDB493E9_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14_m5A6D70A1D16B26B916AB6CCBF0A106AB8736E5BA_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8_m163B2211D50FFEBB5A7C6C43E7D88379D670DDA8_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mF78AA587B3439535B77F71EDA1F5D20A40441E3F_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2_mAFBF5ED41C44B903D46B994416486E1462EB5C50_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValue_2_t230A3613ABD1F675A41109DADA831A38CA517FB8_mDFDB01C3A7E3E43E4F6A997485E19E078FFA2FB1_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValue_2_t230A3613ABD1F675A41109DADA831A38CA517FB8 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisSlot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744_m12CBB5D14AD9042331C47671C28C2B0B983077FD_gshared (RuntimeArray* __this, int32_t ___0_index, Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_mE6B213FA76B6E7BEF00E44E178D476A94CEE0F5C_gshared (RuntimeArray* __this, int32_t ___0_index, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisAngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB_m66379479BFBC65FB0DB462BCEC8C41C6D65931D5_gshared (RuntimeArray* __this, int32_t ___0_index, AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m37CD039167130C709D4DE8AAA5D142B8F097BA37_gshared (RuntimeArray* __this, int32_t ___0_index, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mDDFCA65E5FBA87A21EBE98E3B9BBB18342EE72B3_gshared (RuntimeArray* __this, int32_t ___0_index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC2A8D204295D5CE3BD0CD0DD5FF967F51402EEE7_gshared (RuntimeArray* __this, int32_t ___0_index, bool ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mD6907D744E06D65D52CEA11BED1FD2D483C9ABC5_gshared (RuntimeArray* __this, int32_t ___0_index, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA87B014B672B04A611A7A07EC90D43509842E4FD_gshared (RuntimeArray* __this, int32_t ___0_index, uint8_t ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB6B30D2A953A9FFFA14796E99798E1E0BA22E9CC_gshared (RuntimeArray* __this, int32_t ___0_index, Il2CppChar ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801_mC603C0C5CC4C5514D451C6E901594202A84E42B8_gshared (RuntimeArray* __this, int32_t ___0_index, ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66_m3029E85CA1BCFAEB79404B0108E635E1CE5BE20F_gshared (RuntimeArray* __this, int32_t ___0_index, ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mD5E9669C11734C5E27E7989A6FD679C10A49A944_gshared (RuntimeArray* __this, int32_t ___0_index, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisCustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_m422D49CBD58DF0A13750CC975162A6B2EE286351_gshared (RuntimeArray* __this, int32_t ___0_index, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisCustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_m25AE42CCCD9080BC0B0963FE37265C08DC1C95E4_gshared (RuntimeArray* __this, int32_t ___0_index, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m3C4C9A35F7A6631BA330C77780B74A3E20217E70_gshared (RuntimeArray* __this, int32_t ___0_index, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m3A6DBE183C23415A3A960365AF39B5B9FCB58897_gshared (RuntimeArray* __this, int32_t ___0_index, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_mACAE27EDFE5D1F49A0759C3885FAC99B94E3E8B5_gshared (RuntimeArray* __this, int32_t ___0_index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF78879264DA14041A426885837F047225BA2E4D8_gshared (RuntimeArray* __this, int32_t ___0_index, double ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEphemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_m157820BCABBB375FC84A17667D494ECB86563A8D_gshared (RuntimeArray* __this, int32_t ___0_index, Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m9426B580759250E98BE0A896158A8DC406618344_gshared (RuntimeArray* __this, int32_t ___0_index, int16_t ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m745E670C77DD4A90DD4573DB401FEE7114BFE815_gshared (RuntimeArray* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m78638775441611B045766DD43ECCAA3446FA1DBD_gshared (RuntimeArray* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4C9AD71A628A4BA91B8EAA20B606548FAF30D65F_gshared (RuntimeArray* __this, int32_t ___0_index, int64_t ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisIntPtr_t_m5F559A7084925D9DDE3073756042963B0B9EDA5A_gshared (RuntimeArray* __this, int32_t ___0_index, intptr_t ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisInternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_mAA4CDA6D97E8A77CBD7102D4C1391D453C539E09_gshared (RuntimeArray* __this, int32_t ___0_index, InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisInternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_m9FD96452F0669FA71EE4317D047707875FAC9B8F_gshared (RuntimeArray* __this, int32_t ___0_index, InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m7EA9450D1B5155119BE660E65C3CD812454F6231_gshared (RuntimeArray* __this, int32_t ___0_index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m38773C1D00CF75CD67BCDEDFF4345AFDD249958C_gshared (RuntimeArray* __this, int32_t ___0_index, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9C894BC0C19A94FA7D2A1A92A9B8A1433B694D25_gshared (RuntimeArray* __this, int32_t ___0_index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisRuntimeObject_mB8BB8BC70473D76E62148B8D4EBB70F9579CD0E7_gshared (RuntimeArray* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_m2A6774712FC31FB735EDD9CC1FFACF8F20BFEFC3_gshared (RuntimeArray* __this, int32_t ___0_index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_m43487642DBFC0899DAC954C5222C1A83F17C5E05_gshared (RuntimeArray* __this, int32_t ___0_index, PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mA82458865865DE8A19E16C45739A281EF88373FA_gshared (RuntimeArray* __this, int32_t ___0_index, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisPlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_m4074A77BA2C3CDD246B5513716BE84E12ECC1434_gshared (RuntimeArray* __this, int32_t ___0_index, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisPlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_mE3AC3C14D3473C7C11C04FF25D5484659F1D2738_gshared (RuntimeArray* __this, int32_t ___0_index, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_m4237714A7F66EE667C84CDEEC1714DCE33F01575_gshared (RuntimeArray* __this, int32_t ___0_index, PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_mEA1C5858DAD44A4F93D50087A59CF65CBB49CAD7_gshared (RuntimeArray* __this, int32_t ___0_index, PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m8D677BBC5D36B071B6F4AFD5A2B7643B429191DE_gshared (RuntimeArray* __this, int32_t ___0_index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m4AE74C995C3368D34B7DCB6617FEDF0991DD193F_gshared (RuntimeArray* __this, int32_t ___0_index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisRenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A_mDB441E9ADC3BEB405B12E6053C025AD50555CF1A_gshared (RuntimeArray* __this, int32_t ___0_index, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_m0F2C880A3C3DC3CDE724CCD06DB085FCF44028FA_gshared (RuntimeArray* __this, int32_t ___0_index, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mE6030BA3D73CFD45F233424459ACE73601F2C1C7_gshared (RuntimeArray* __this, int32_t ___0_index, int8_t ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisSByteEnum_t0782AA0EFC5D1042A39675F37D7DD7C098781DD9_m6C95C4FC9B9E1264B121B722B5C4415C84569C26_gshared (RuntimeArray* __this, int32_t ___0_index, int8_t ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5_m5C0BD8FA6C6758B77C7B89FF02777C813BD67938_gshared (RuntimeArray* __this, int32_t ___0_index, ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9998C46E4F5C860F93F367CEDE685E0A221E49E3_gshared (RuntimeArray* __this, int32_t ___0_index, float ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisSplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70_m30555D85BA169F14FF0D9260EBEA81A37A1FE768_gshared (RuntimeArray* __this, int32_t ___0_index, SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisSpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_m6E20970D19467059A4E571F95FCBCDAA9CE619B8_gshared (RuntimeArray* __this, int32_t ___0_index, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisSpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB_m318F59A02486844BBAFF8B5BBA34D7E72D577F87_gshared (RuntimeArray* __this, int32_t ___0_index, SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisSpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377_m9C46D267124C2E5715F7D90E027A72B654CE5874_gshared (RuntimeArray* __this, int32_t ___0_index, SpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisSpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501_mF299E798BABFE9F47E76A6014FBAD54FBF2731A4_gshared (RuntimeArray* __this, int32_t ___0_index, SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisSpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5_mB595E57615C28806F2BCEDA63644981DD9E051C3_gshared (RuntimeArray* __this, int32_t ___0_index, SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_m5E6A916A7A0C14FCB7755EBE9F4DD55FADE6BCE3_gshared (RuntimeArray* __this, int32_t ___0_index, SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mC2BDAE390C1FA454788E7E9DFAC4CF1BC74DE585_gshared (RuntimeArray* __this, int32_t ___0_index, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisUEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48_m97A7FB72FFC4716510D1ABD760050610C8C4D875_gshared (RuntimeArray* __this, int32_t ___0_index, UEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisUHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE_m05DE2766EA67254C8B91603C5B6921AC80DF3B6B_gshared (RuntimeArray* __this, int32_t ___0_index, UHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m690F737CFBBE5CE088E24499748F41E67303473F_gshared (RuntimeArray* __this, int32_t ___0_index, uint16_t ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisUInt16Enum_t481D129F5FAE551E8684190D640F0FAEFB237CF8_m544508CBF10EB305265BDB23341072485404F83C_gshared (RuntimeArray* __this, int32_t ___0_index, uint16_t ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE413926F989267D42636E5EDF16E0E261C38F745_gshared (RuntimeArray* __this, int32_t ___0_index, uint32_t ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m27004060A816BD5F9CB60E489888508FF36533D1_gshared (RuntimeArray* __this, int32_t ___0_index, uint64_t ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisUStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9_m28E964AF562FD0B15B21FBAB91F32D971393E39D_gshared (RuntimeArray* __this, int32_t ___0_index, UStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE60BB19C1ED1D51BAD95C729B5590DDAEB0AD5CF_gshared (RuntimeArray* __this, int32_t ___0_index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m425EF33C6C73FB8D5FC159D1D9AA9B08F1BC2A1E_gshared (RuntimeArray* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61F1DD70E0989B4930FADA1C42BDB7301BB4223E_gshared (RuntimeArray* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisIl2CppFullySharedGenericAny_m074A30526A4287820EDB8AAD615A1460C9324E3C_gshared (RuntimeArray* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_Tisdouble2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA_m644F84CB7187514052F339C16D64682A57CBA877_gshared (RuntimeArray* __this, int32_t ___0_index, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_m0E1C8FEC383171CD0D26DA09109DB6FF0A8E901A_gshared (RuntimeArray* __this, int32_t ___0_index, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m0C8BF0DC5ACB17E9BBB24184B56BBE668F5DAE6D_gshared (RuntimeArray* __this, int32_t ___0_index, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m9D0D108D1D9DE1F6FA33F8167B3C31D6F9186E8C_gshared (RuntimeArray* __this, int32_t ___0_index, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m65D48EBFAE76B3F5101C334F5AE0803B6C5B6F92_gshared (RuntimeArray* __this, int32_t ___0_index, float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mEBEBECCFC221EAF7647D70411573462F98204F37_gshared (RuntimeArray* __this, int32_t ___0_index, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_m607042A8DFE0918A690946A5FB88F674E56F1749_gshared (RuntimeArray* __this, int32_t ___0_index, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m69E318B2711B946B3CE94360C864D69FFF7C8B62_gshared (RuntimeArray* __this, int32_t ___0_index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisTableRange_tD242F3D62C818E84B6903C18A6CE33399672B497_m5BCD2ADF351D954C2D4CBCDCDB95E76A5BF65C24_gshared (RuntimeArray* __this, int32_t ___0_index, TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_Tisbucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_mF8C7072D49C106BA73C1C457C252EAC8B44D4CC1_gshared (RuntimeArray* __this, int32_t ___0_index, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisHebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C_m5BE2EC6A90BCBD8ABCB6BA5FB820898034D9CF22_gshared (RuntimeArray* __this, int32_t ___0_index, HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisFormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_mA279AC350E9576B6F989FCB7F190037A195FF414_gshared (RuntimeArray* __this, int32_t ___0_index, FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisCategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_m210FDDB4C242F762E69F07BB783ADD9F21B176D9_gshared (RuntimeArray* __this, int32_t ___0_index, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisJobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13_mC91F6D12DFA93C53A626AFFF8602A21B1B0F90D6_gshared (RuntimeArray* __this, int32_t ___0_index, JobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisJobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3_mA2BFB41A573EA410343E14FD02EF1343F646CF61_gshared (RuntimeArray* __this, int32_t ___0_index, JobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisJobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36_mDDA2180BEA00AAB94A15E143C24750B39A4E7222_gshared (RuntimeArray* __this, int32_t ___0_index, JobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisJobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99_m691B62D2D5714B87240A65AA598743B38B1B4578_gshared (RuntimeArray* __this, int32_t ___0_index, JobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisJobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C_m17887817B372769205671FA94027AD3385794D7A_gshared (RuntimeArray* __this, int32_t ___0_index, JobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisJobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481_mCFF2470C2E061760CFD21A52F335AE96E996944E_gshared (RuntimeArray* __this, int32_t ___0_index, JobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisJobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC_m342E315720A647628BA913528CB4CEDF80C7D48E_gshared (RuntimeArray* __this, int32_t ___0_index, JobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisJobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29_m848C0ACE023DF6691F13B599AFD4F63A527D95E7_gshared (RuntimeArray* __this, int32_t ___0_index, JobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisTransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_m43C75DC485C05C9DE9AA64BEEE800E3AAC5CA6A8_gshared (RuntimeArray* __this, int32_t ___0_index, TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisTZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_m825F8B3F0E87A65FC9DDAF11A30A45966599AF79_gshared (RuntimeArray* __this, int32_t ___0_index, TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisDateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_m5A909636DE9AFB0B428A88D51E6D7BC1757A4D0C_gshared (RuntimeArray* __this, int32_t ___0_index, DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m69C3D07ED8B065B5DE91A96767C5F8E01637685A_gshared (RuntimeArray* __this, int32_t ___0_index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisPowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304_m8AC6812416D850D5F5C6F44D09C4443AB5A61051_gshared (RuntimeArray* __this, int32_t ___0_index, PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 Array_InternalArray__get_Item_TisEntry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448_mBD72520171D585E0ECC81153FADC9C133883BF3B_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 Array_InternalArray__get_Item_TisEntry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339_m1088F102665991F3DE546DEA8EF21701C2C8C9D2_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC Array_InternalArray__get_Item_TisEntry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC_mCB04A6276861E21A4E629C375032881A578C62D5_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC Array_InternalArray__get_Item_TisEntry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC_m2441B4AF90AAA88878B28EE5D882C96C502D3B28_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 Array_InternalArray__get_Item_TisEntry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39_mA0C5FE8F7205C990E5118A5F516F5BE6ABAF02BF_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC Array_InternalArray__get_Item_TisEntry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC_mCF17F4445F80E3E4CEF5B92ADAAB6534EEAFD8DA_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC Array_InternalArray__get_Item_TisEntry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC_m1EDE097563F71192E19CB591FB9E1ABF7AEB1B91_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 Array_InternalArray__get_Item_TisKeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14_m9A32BC0C3EB8AB009C9DF2EC3F25714B9AC39256_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Array_InternalArray__get_Item_TisKeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3_m61686B20FBF72CC8228B1FFC41426761C20AED73_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 Array_InternalArray__get_Item_TisKeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362_mBF2330CB9AA2CB820D9E0A34ACA97C278A3FD4EE_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 Array_InternalArray__get_Item_TisKeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14_m356AAEC7F1106938F852A0EF7AFA4801D751E04C_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 Array_InternalArray__get_Item_TisKeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8_mC2724EA6B3B3610FB5E4AB0A7C3DD7099F495352_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Array_InternalArray__get_Item_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m41C4919B556710772BA169A25DA1017CBC3A47C0_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 Array_InternalArray__get_Item_TisKeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2_m14B15E71D7734BB9EA052DED4F8E80F10CA47900_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t230A3613ABD1F675A41109DADA831A38CA517FB8 Array_InternalArray__get_Item_TisKeyValue_2_t230A3613ABD1F675A41109DADA831A38CA517FB8_mB8CCD56AC90287FC8DCB7EB44F6D84A1DD37C09B_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	KeyValue_2_t230A3613ABD1F675A41109DADA831A38CA517FB8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		KeyValue_2_t230A3613ABD1F675A41109DADA831A38CA517FB8 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 Array_InternalArray__get_Item_TisSlot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744_m66C3C1B881EFF03814294095AFDB862FAEC6F510_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Array_InternalArray__get_Item_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m8AFCD6F7277F7F4F99167904E8D38A43AEF13301_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB Array_InternalArray__get_Item_TisAngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB_m271E606C964A3528D698CD0621B8BF70B36FAA43_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D Array_InternalArray__get_Item_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_mDE1567F6237DC5A1B7DCE8DADA84F3D2812548E2_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F Array_InternalArray__get_Item_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m79E5F17F4B20F0E29107533306FECFE89C5DFB34_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__get_Item_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB6394F8C1A96E536DBCA93CB584C8CA0912E495_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Array_InternalArray__get_Item_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mFC2BD3252B33A65418D4EF58786EF7779533F5F1_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Array_InternalArray__get_Item_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDBC8E78474F6C57CDE473F48579CD9C4F9653077_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		uint8_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Array_InternalArray__get_Item_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m20B65CDB4B269D21B7C669DE4F2A22A85C1FC597_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		Il2CppChar L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 Array_InternalArray__get_Item_TisContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801_m9C528C1A2083A652164648943A9551E8FE7083C0_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66 Array_InternalArray__get_Item_TisContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66_m3419D4CF147B1459A2E94A9FDD8336B1212383AC_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 Array_InternalArray__get_Item_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m1F5D3D0ED6E68DB0A6D0C232A57E1F9A4BEAC445_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 Array_InternalArray__get_Item_TisCustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_m7638990AB1E417331EAE7D207351A7CE1260BAA5_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F Array_InternalArray__get_Item_TisCustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_m6BD7D9036D39C7F79590DEEDB0B1C28A92A11DB7_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Array_InternalArray__get_Item_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mA7B80A3FFFC947F42BE0F97073DC4B1E0126F062_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Array_InternalArray__get_Item_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m41501D094F7582F9D6E3F39CD9836B7153E81E90_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB Array_InternalArray__get_Item_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_m5264794AA23865945C9BEE45B26246BBFFB66F2C_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Array_InternalArray__get_Item_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1B13F00E899B12049D2166118A0EA5C383F4C3B5_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		double L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 Array_InternalArray__get_Item_TisEphemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_mD58756CE8B244C5E5400F07C10EA1CB89FB91849_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Array_InternalArray__get_Item_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m8A659E1C48B569ECCAE2AD0349429A67E01A7207_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		int16_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__get_Item_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8DBAE86B694052C1B7FCC1F9464EDD3BB1550450_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__get_Item_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m73E1F5F12E7C364032EF3B83294842DCDACC3D11_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Array_InternalArray__get_Item_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m60533342512088BBD49E018B56079C62051D2FB5_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		int64_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Array_InternalArray__get_Item_TisIntPtr_t_m2925A21BEFDFB25720B5CF48922BB380CC0B1035_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		intptr_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 Array_InternalArray__get_Item_TisInternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_m504288D7C3E6E15F6ABDC815184708D433C338BD_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB Array_InternalArray__get_Item_TisInternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_m14B51EFE1DCB5BF96B4D60DA3B85DA58C035E23D_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 Array_InternalArray__get_Item_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m9DC9C61315F751C8F6695E25F45BBC08935E721B_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 Array_InternalArray__get_Item_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m21CD85E7473B915856400A7800AF00737A3D13C5_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Array_InternalArray__get_Item_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m615B3960D51740AD45136A476CBDCE35FD9C21D3_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_InternalArray__get_Item_TisRuntimeObject_m8CD3480A8F0A58E697355042CA2893C0E0309033_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 Array_InternalArray__get_Item_TisParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_m36F19D7993877B1805F0030D2F745DBAA13F529B_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 Array_InternalArray__get_Item_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_m3B7F7991336E3FAFB8B1F1BC5D694F0E68FAFD66_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C Array_InternalArray__get_Item_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m494A22347D2E9AC268464F75D2A2615A3BF193FB_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 Array_InternalArray__get_Item_TisPlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_mB080CB3D635E8BC8578D9605EF36216EF2D802C0_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F Array_InternalArray__get_Item_TisPlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_m5895E1A4C350F3C56CB7AC693F4C65865B855BD1_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C Array_InternalArray__get_Item_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_mD6AC80ED098840F1D932B04A803F4B07A99CECF1_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 Array_InternalArray__get_Item_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_m775A49EB6D7D0237DC9BE930286406327EB53A58_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Array_InternalArray__get_Item_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m93D0BC077F38EF5AB9817BA183DACE9E8975F489_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Array_InternalArray__get_Item_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m30B90586C754E21C73E8B41F2D2B5089CC028929_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A Array_InternalArray__get_Item_TisRenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A_m2950C441FC476C9B08BA1FB32A107ED401319283_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 Array_InternalArray__get_Item_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_mF2F4EC7F0A423CAAC885D53DF824F77368F106A1_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Array_InternalArray__get_Item_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m6DF782C3306C4A12BB7296210B4ECD8CF51C6E1C_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		int8_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Array_InternalArray__get_Item_TisSByteEnum_t0782AA0EFC5D1042A39675F37D7DD7C098781DD9_m2BC24F7D2612BBFA57750EA342C36740321A5C5F_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int8_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		int8_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5 Array_InternalArray__get_Item_TisShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5_mF9C33A330D6944A106BC2EA82824F5CC64226E1D_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Array_InternalArray__get_Item_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0A6AB4BFA48975995A0CBFC663F425F71078E3A5_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70 Array_InternalArray__get_Item_TisSplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70_mB0CADAE758B58956F7E681ED812267D5E0C499AD_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 Array_InternalArray__get_Item_TisSpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_mA1F0754D377991932AA2949E7AA427F53FA83D5E_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB Array_InternalArray__get_Item_TisSpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB_m48F56DE450A3FEBAF2BE56FFD14E596C6C1A6632_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377 Array_InternalArray__get_Item_TisSpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377_mDCBACE8660A6B74E1B145CC27C69C9435140F75C_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	SpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		SpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501 Array_InternalArray__get_Item_TisSpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501_m640F897151C107C7C970FD10F8F92698108D2315_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5 Array_InternalArray__get_Item_TisSpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5_mA59ED1769BEF1F1396A6848DFBFA27CC7F39E758_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 Array_InternalArray__get_Item_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_mF1FE75A9B0AA9946B0AF5D7927865B14D1FBDBBF_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Array_InternalArray__get_Item_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mE16B9CB372B48631F8BB3BB031037839278B5FBE_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48 Array_InternalArray__get_Item_TisUEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48_m09768D4202E906CA59D3D73177BC5B528ED6EBF3_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	UEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		UEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE Array_InternalArray__get_Item_TisUHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE_m93F2861A9DC1F43196F9BA42B94F4DD741DB05FD_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	UHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		UHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Array_InternalArray__get_Item_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m394F69BA1AC6EDC2C61719E0447B655C29484B34_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		uint16_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Array_InternalArray__get_Item_TisUInt16Enum_t481D129F5FAE551E8684190D640F0FAEFB237CF8_m90049A5A5A4896935F340F827B1FD0DB014FD7D9_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		uint16_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Array_InternalArray__get_Item_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mCD349F1A257685592B0DE023F9C71FD2EDBDDB05_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		uint32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Array_InternalArray__get_Item_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m72E26F6729CC307DE5705B8DB60BE7348AFAC16C_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		uint64_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9 Array_InternalArray__get_Item_TisUStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9_m3D917602F2B5CF025A137D2D3A0D5ED84D9D28A0_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	UStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		UStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Array_InternalArray__get_Item_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m906B0C6C28B045FC425E01A009877ED9891003C3_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Array_InternalArray__get_Item_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m52A4B87820FA9464FD1BB3DE41A152A080EB6F90_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Array_InternalArray__get_Item_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m566A591FED501A8B1007446C1C5942EF6C7FE35B_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__get_Item_TisIl2CppFullySharedGenericAny_m6EC3E2950317C876E17CCAC89B0354BF24E992B3_gshared (RuntimeArray* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tC5560EBCB04F9D519B502F6D6CBF583A9B66E9A5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tC5560EBCB04F9D519B502F6D6CBF583A9B66E9A5);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tC5560EBCB04F9D519B502F6D6CBF583A9B66E9A5);
	memset(V_0, 0, SizeOf_T_tC5560EBCB04F9D519B502F6D6CBF583A9B66E9A5);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (Il2CppFullySharedGenericAny*)V_0);
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_T_tC5560EBCB04F9D519B502F6D6CBF583A9B66E9A5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_tC5560EBCB04F9D519B502F6D6CBF583A9B66E9A5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA Array_InternalArray__get_Item_Tisdouble2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA_m57F02794647B86F0F43BC29CCFDF3276AA2EFEAF_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA Array_InternalArray__get_Item_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_mFA7D47EECD514810CA643929A7606E1C6F41F298_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E Array_InternalArray__get_Item_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_mB2B49048CD0BFCE0B0F8825AFAF62AC2850AE1E4_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E Array_InternalArray__get_Item_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m4FC13638A4D33B6E9D68CFE28B226AC5EFBD0096_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 Array_InternalArray__get_Item_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m942FC1CDE516474D8CD24E77D5D9D5F07CF6542D_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A Array_InternalArray__get_Item_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m93BEF6932F97A5B05CCABA140F7DA9E972C4DBD6_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF Array_InternalArray__get_Item_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_mEF031EEE1E5CC2F730DFD1F957B6A493F379333C_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 Array_InternalArray__get_Item_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mED45FED464EB455DE518215C488181CCB4DD318F_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 Array_InternalArray__get_Item_TisTableRange_tD242F3D62C818E84B6903C18A6CE33399672B497_m472DBAC3764677ACF31D96007C6B632DE9460375_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E Array_InternalArray__get_Item_Tisbucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_m997801734518638ADBC3B40FC893044F80EE7EF4_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C Array_InternalArray__get_Item_TisHebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C_mC473D01D3B3EFBC6E1855A519667735915AA3A58_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E Array_InternalArray__get_Item_TisFormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_m5E1C517116398CF931D1448B6A35950FBDBA0611_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 Array_InternalArray__get_Item_TisCategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_mF088B5569FA6B2A2B4E5340917B28EFBDE86AB76_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13 Array_InternalArray__get_Item_TisJobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13_m669881D0BFDAFA979146ADC057B8F83B3662C0C0_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	JobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		JobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3 Array_InternalArray__get_Item_TisJobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3_mAEDE118871F8BEF1D5B2B83E67D762E4D1582D4E_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	JobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		JobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36 Array_InternalArray__get_Item_TisJobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36_m4CFC73409252732B2D7599DE151670E19D504290_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	JobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		JobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99 Array_InternalArray__get_Item_TisJobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99_m7C85A0300334E77AC41C1EBD3355D091691831FB_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	JobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		JobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C Array_InternalArray__get_Item_TisJobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C_m343DF3CCAAC8E0A94C91462BFD1284683EB2D084_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	JobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		JobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481 Array_InternalArray__get_Item_TisJobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481_mB5AA10D8D97A3AFC92D46062EF4F9EAD1207C5E3_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	JobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		JobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC Array_InternalArray__get_Item_TisJobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC_m7DF50A964382F47285B62859B78F4C9EB0A51774_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	JobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		JobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29 Array_InternalArray__get_Item_TisJobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29_m60EB0CD1630C67C35A2C1DE7FF4481AAA765AC1E_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	JobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		JobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 Array_InternalArray__get_Item_TisTransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_m82991FBA2B3BB79ACB344B7AC2ED63D1C3FE45A1_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4 Array_InternalArray__get_Item_TisTZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_m05C767190DE76797DC3A71DBAE6F37F7122884DD_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD Array_InternalArray__get_Item_TisDateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_m4E0A34E2EAAC5463441FA8CF7893A6C827D00A5A_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 Array_InternalArray__get_Item_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mFCA3CB90146CAC5F3C2F2577B2461EFF7F0861D2_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 Array_InternalArray__get_Item_TisPowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304_m016DD923FD6A9BEC7CB4FB10624B08C39E5613F0_gshared (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_index;
		GetGenericValueImpl(__this, L_3, (&V_0));
		PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisEntry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448_m78BB7FDEC982CA39E7B52F9447BAE582954F8A7E_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 L_6 = ___1_item;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisEntry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339_m1CCDF2D509C42D11520B2F6165A48656AF3B57B3_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 L_6 = ___1_item;
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisEntry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC_m18452908AC77232A9F6C61549A7ACD9FC0BBD9A6_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC L_6 = ___1_item;
		Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisEntry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC_m13F6E638094D5B97E7378AC620F6310A60DCEAC7_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC L_6 = ___1_item;
		Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisEntry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39_m2465B72B4D14B1F32E8588045430E29E447365FB_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 L_6 = ___1_item;
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisEntry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC_m8D0EBC2D5CEEF78750A3310D2E52305055D66BA7_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC L_6 = ___1_item;
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisEntry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC_m82C224B982FA7C7FB27B95BDAADB13B32E0BECC0_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC L_6 = ___1_item;
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisKeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14_m5C4D7747E5ACD93EF46A7614FA6921B145CAE528_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_6 = ___1_item;
		KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisKeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3_m34240DC4186A23196E44DED8CB9469CF32696A70_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_6 = ___1_item;
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisKeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362_m54CFCA7C964F4C2EAF15DF97585D5E2FBBB60291_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 L_6 = ___1_item;
		KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisKeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14_m0E909FF91D54D4BE96602D0170D301CB5F282550_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 L_6 = ___1_item;
		KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisKeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8_mF2369582CFD94D1D5D52D157AEABF9981A2AF0BD_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_6 = ___1_item;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m518CDF549D7F11A1B4F058ECB0A09FF724A565A6_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_6 = ___1_item;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisKeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2_m8694CCD830310E1B9B85C056264F498B96DD7494_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 L_6 = ___1_item;
		KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisKeyValue_2_t230A3613ABD1F675A41109DADA831A38CA517FB8_mBE714A3C1D599D01A4953D81CAA60948E7371FF1_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValue_2_t230A3613ABD1F675A41109DADA831A38CA517FB8 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		KeyValue_2_t230A3613ABD1F675A41109DADA831A38CA517FB8 L_6 = ___1_item;
		KeyValue_2_t230A3613ABD1F675A41109DADA831A38CA517FB8 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisSlot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744_mDF6436D0AECC20A07BD79ECA89A468631A944C22_gshared (RuntimeArray* __this, int32_t ___0_index, Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 L_6 = ___1_item;
		Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m44AA44EDB85B52887EE13ADDB982193D0DA21607_gshared (RuntimeArray* __this, int32_t ___0_index, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6 = ___1_item;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisAngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB_m27127F0C0E4A1BB4D9CDD72336CE76CC0C35C97A_gshared (RuntimeArray* __this, int32_t ___0_index, AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB L_6 = ___1_item;
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m14410C77CFE01DF024D764465DDEE21412B1F8A5_gshared (RuntimeArray* __this, int32_t ___0_index, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_6 = ___1_item;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mCEC263D3CC62175A41D1991DA70D3677C416CCA1_gshared (RuntimeArray* __this, int32_t ___0_index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_6 = ___1_item;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFE45981A25BB9771948C9BB3E44C8C2F79AFC6FA_gshared (RuntimeArray* __this, int32_t ___0_index, bool ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		bool L_6 = ___1_item;
		bool L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mDD096EEAE03C4B8C7CE96A748CE4000A218D54F5_gshared (RuntimeArray* __this, int32_t ___0_index, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_6 = ___1_item;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m41104F708EC68DE0C8FF5D87F9142FBAFF2A548A_gshared (RuntimeArray* __this, int32_t ___0_index, uint8_t ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		uint8_t L_6 = ___1_item;
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6BD12D7376C178BE2C4FA330943DC7D86043121F_gshared (RuntimeArray* __this, int32_t ___0_index, Il2CppChar ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		Il2CppChar L_6 = ___1_item;
		Il2CppChar L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801_m9986C2B3923F7643AB1081F39A7AD4BEF3B99C85_gshared (RuntimeArray* __this, int32_t ___0_index, ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 L_6 = ___1_item;
		ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66_m55FA23D0FF7C9668496A2EE9A892D69BF0D68004_gshared (RuntimeArray* __this, int32_t ___0_index, ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66 L_6 = ___1_item;
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mA79F280C539E230E9F9005FFC3C42D949E691283_gshared (RuntimeArray* __this, int32_t ___0_index, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_6 = ___1_item;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisCustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_mDC1C8E25D36009B0FD8606DEDD98646DDF4C277A_gshared (RuntimeArray* __this, int32_t ___0_index, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_6 = ___1_item;
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisCustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_m8422453A910BFCAC0CE0E3AC5BCD16E5F7776841_gshared (RuntimeArray* __this, int32_t ___0_index, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_6 = ___1_item;
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mD8B310DA748FCC47543A446FC5E2FDC2C9E579A1_gshared (RuntimeArray* __this, int32_t ___0_index, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = ___1_item;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m4EBCBF9C69ACF6199A183EE3D99219698AFABA17_gshared (RuntimeArray* __this, int32_t ___0_index, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_6 = ___1_item;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_m92F58AC009B0F8EC35243F494DD38DFAC10CB931_gshared (RuntimeArray* __this, int32_t ___0_index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_6 = ___1_item;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m70B8E39D8BA063DEACB347F4CC813C136DD150F5_gshared (RuntimeArray* __this, int32_t ___0_index, double ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		double L_6 = ___1_item;
		double L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisEphemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_m5D3C3CD2ABE3EB4EFD0D0B1ED2A16949D0302311_gshared (RuntimeArray* __this, int32_t ___0_index, Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 L_6 = ___1_item;
		Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m699C497BFB370187DA12A93BDEF45216D53A4122_gshared (RuntimeArray* __this, int32_t ___0_index, int16_t ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		int16_t L_6 = ___1_item;
		int16_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF9699D91EAD3111A2D56E2A8DC4C0D51A058C7C3_gshared (RuntimeArray* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		int32_t L_6 = ___1_item;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m45AE327248E5D038C1D918C94DE0D8DA914F37DF_gshared (RuntimeArray* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		int32_t L_6 = ___1_item;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m2C809CD493F974BB055B50BBA29A58D2B841AF61_gshared (RuntimeArray* __this, int32_t ___0_index, int64_t ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		int64_t L_6 = ___1_item;
		int64_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisIntPtr_t_m28680736842A04AE81C96C16D85C15801FF1E8CC_gshared (RuntimeArray* __this, int32_t ___0_index, intptr_t ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		intptr_t L_6 = ___1_item;
		intptr_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisInternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_mCB1A99B651BC030F7ECCF6A2648F7DB28B008FFF_gshared (RuntimeArray* __this, int32_t ___0_index, InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 L_6 = ___1_item;
		InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisInternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_m0D1915134D49B8FDECACD734639D278F270B8E59_gshared (RuntimeArray* __this, int32_t ___0_index, InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB L_6 = ___1_item;
		InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m72A9C14B00D31BD94E93BA48BF3405E5CF3DBBF0_gshared (RuntimeArray* __this, int32_t ___0_index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_6 = ___1_item;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m8E6CF4D91A4A98960DAFB2FB7518E28160BE46D0_gshared (RuntimeArray* __this, int32_t ___0_index, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_6 = ___1_item;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mD97FD39489D482F5D101316FD248E1A8D330C1A8_gshared (RuntimeArray* __this, int32_t ___0_index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ___1_item;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisRuntimeObject_m85BC46B3E6464769CA23729406733B6E3FA0D6CC_gshared (RuntimeArray* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		RuntimeObject* L_6 = ___1_item;
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_6);
		return;
	}

IL_0028:
	{
		int32_t L_7 = ___0_index;
		SetGenericValueImpl(__this, L_7, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_m62670F9C2FD15684C4EDABB557C99D5A14A60E83_gshared (RuntimeArray* __this, int32_t ___0_index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 L_6 = ___1_item;
		ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_m83AA376B94CB4446495E068ADBEF60B0E8E623A8_gshared (RuntimeArray* __this, int32_t ___0_index, PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 L_6 = ___1_item;
		PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m0BC7B4859D932D593E11BE9680C2FD161E416AB5_gshared (RuntimeArray* __this, int32_t ___0_index, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_6 = ___1_item;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisPlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_mD2989C120FD99222D7FD1E4362EC8C8F987E4F5B_gshared (RuntimeArray* __this, int32_t ___0_index, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_6 = ___1_item;
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisPlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_m010DEFA804E8F1A08BF01940E9B363774E37D994_gshared (RuntimeArray* __this, int32_t ___0_index, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_6 = ___1_item;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_m28E30AE8348E628721AD0E58AF6F71C1B659F722_gshared (RuntimeArray* __this, int32_t ___0_index, PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C L_6 = ___1_item;
		PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_mAD9C9695539DE8DB50ACE9A406E3C133477551AA_gshared (RuntimeArray* __this, int32_t ___0_index, PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 L_6 = ___1_item;
		PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mEA18DDF8FDD069312F3FEF9E89BE58B52641A51F_gshared (RuntimeArray* __this, int32_t ___0_index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_item;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m325B9FA85ED17B0B2124D750ABAC7E9669BAD7FE_gshared (RuntimeArray* __this, int32_t ___0_index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_6 = ___1_item;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisRenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A_mA20A218B179EF7690BF1403AE61B89819609D021_gshared (RuntimeArray* __this, int32_t ___0_index, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_6 = ___1_item;
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_m1E97B5BF440932546869167817381E41AB582280_gshared (RuntimeArray* __this, int32_t ___0_index, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_6 = ___1_item;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m752C44D8E96AC8EABAEF97428F98F9935AEE75E0_gshared (RuntimeArray* __this, int32_t ___0_index, int8_t ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		int8_t L_6 = ___1_item;
		int8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisSByteEnum_t0782AA0EFC5D1042A39675F37D7DD7C098781DD9_m78409018A8579156A88802FD24B073D6CD16C09A_gshared (RuntimeArray* __this, int32_t ___0_index, int8_t ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		int8_t L_6 = ___1_item;
		int8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5_mD0B54A5F5BCA0A357346DBDFA48EC2E92DA82205_gshared (RuntimeArray* __this, int32_t ___0_index, ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5 L_6 = ___1_item;
		ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m12CC8EE7ADB84F4CA01239F0A1AC2B7B80BC91EF_gshared (RuntimeArray* __this, int32_t ___0_index, float ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		float L_6 = ___1_item;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisSplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70_m60268AC6F9A1B08EB803EE9656C486C95DCD6318_gshared (RuntimeArray* __this, int32_t ___0_index, SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70 L_6 = ___1_item;
		SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisSpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_m5F0B3D6FAA3B0DA3F6DF4FC8661A3786EAF94EF6_gshared (RuntimeArray* __this, int32_t ___0_index, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 L_6 = ___1_item;
		SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisSpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB_mA29E55C0FABD58B42D353F5DC00BC06C4456BEF5_gshared (RuntimeArray* __this, int32_t ___0_index, SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB L_6 = ___1_item;
		SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisSpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377_mEF3A3502CEC0E41D617DD783E881530445F6E903_gshared (RuntimeArray* __this, int32_t ___0_index, SpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		SpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377 L_6 = ___1_item;
		SpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisSpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501_m8DD2259C78230B9A44BDE159D26EE1D3BDFC6747_gshared (RuntimeArray* __this, int32_t ___0_index, SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501 L_6 = ___1_item;
		SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisSpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5_m6BEE60884E4897029AD7227A52E1F875B637899A_gshared (RuntimeArray* __this, int32_t ___0_index, SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5 L_6 = ___1_item;
		SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_mA467A1AF468D5F58C1068A48EAEC038DFDFAB954_gshared (RuntimeArray* __this, int32_t ___0_index, SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 L_6 = ___1_item;
		SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m0269A1E1BC34D394CB02889AF254CA6B9ABFCF44_gshared (RuntimeArray* __this, int32_t ___0_index, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_6 = ___1_item;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisUEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48_m9EA33569A14CA04A7891C11B93EE29C80939B8EA_gshared (RuntimeArray* __this, int32_t ___0_index, UEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		UEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48 L_6 = ___1_item;
		UEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisUHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE_mEE2BE8D95640A9ADC4D5C763B662F9E8D9042139_gshared (RuntimeArray* __this, int32_t ___0_index, UHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		UHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE L_6 = ___1_item;
		UHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mB9EF94C2D3A9ADAA299DC69E9E16546582FA808C_gshared (RuntimeArray* __this, int32_t ___0_index, uint16_t ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		uint16_t L_6 = ___1_item;
		uint16_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisUInt16Enum_t481D129F5FAE551E8684190D640F0FAEFB237CF8_mD49FD2C93FA16DDFA584339B2888D65BA244885B_gshared (RuntimeArray* __this, int32_t ___0_index, uint16_t ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		uint16_t L_6 = ___1_item;
		uint16_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m7A2A769CA4F1BAAA58EB4E32553FA2EC4EC343F8_gshared (RuntimeArray* __this, int32_t ___0_index, uint32_t ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		uint32_t L_6 = ___1_item;
		uint32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCD3B61C2B3A2144A1100F8FC966F6FEFC57FFFE3_gshared (RuntimeArray* __this, int32_t ___0_index, uint64_t ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		uint64_t L_6 = ___1_item;
		uint64_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisUStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9_mF877A2A887B593F9636CCB898B4D3AF35FD207C4_gshared (RuntimeArray* __this, int32_t ___0_index, UStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		UStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9 L_6 = ___1_item;
		UStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7CC125D1CB2D47DF1D83CC59C8B43DFA1BDE5370_gshared (RuntimeArray* __this, int32_t ___0_index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_item;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0C340820E203A26F6A43B3CA0F1F39C1E5D515F2_gshared (RuntimeArray* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_item;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4687BA4470B0791278ADB4B148A82ACB9C8A8ABF_gshared (RuntimeArray* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___1_item;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisIl2CppFullySharedGenericAny_m8EA7B18F43851A117DD67D8A4C620C2D1456A951_gshared (RuntimeArray* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t3F7F4C1E55A84BB86DCFEFFF33E141038B02B3A9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t3F7F4C1E55A84BB86DCFEFFF33E141038B02B3A9);
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_item : &___1_item), SizeOf_T_t3F7F4C1E55A84BB86DCFEFFF33E141038B02B3A9);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_6);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_7);
		return;
	}

IL_0028:
	{
		int32_t L_8 = ___0_index;
		SetGenericValueImpl(__this, L_8, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_item : &___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_Tisdouble2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA_mF7A73773F5AE27EEB9A70DB3B0FF472A81DE4653_gshared (RuntimeArray* __this, int32_t ___0_index, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_6 = ___1_item;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_mCCFE1F523E3328279197A880DCC33F67F08D4C4B_gshared (RuntimeArray* __this, int32_t ___0_index, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6 = ___1_item;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m079A9034C4D7DE9B7E16C709C6B4AC218B15B885_gshared (RuntimeArray* __this, int32_t ___0_index, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = ___1_item;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_mEEBA2B9D2A97A98B9E509EA94305FF6E189773A0_gshared (RuntimeArray* __this, int32_t ___0_index, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = ___1_item;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m4E6EDD8ACCAE2D5330DA4F6644C2352EBEC0F8AD_gshared (RuntimeArray* __this, int32_t ___0_index, float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_6 = ___1_item;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mCFA3A2C6442E11D2A1A97D4B9CB118EF89D9AFF1_gshared (RuntimeArray* __this, int32_t ___0_index, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_6 = ___1_item;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_m5D73C2D75B6C5A61DBEE9BC4687A9BF2FA50BC56_gshared (RuntimeArray* __this, int32_t ___0_index, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_6 = ___1_item;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mB313EDBC1389F5516BD895748FEF879320A82EA0_gshared (RuntimeArray* __this, int32_t ___0_index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_6 = ___1_item;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisTableRange_tD242F3D62C818E84B6903C18A6CE33399672B497_m17D1F8EB511A0A5BB2A5A929898863076780EE7E_gshared (RuntimeArray* __this, int32_t ___0_index, TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 L_6 = ___1_item;
		TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_Tisbucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_mB11073541515101D41BBCAC2013CBE07A81B40EF_gshared (RuntimeArray* __this, int32_t ___0_index, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_6 = ___1_item;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisHebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C_m57DFF71F65C4ACB5E4AE8160A1F37699E88BF1D4_gshared (RuntimeArray* __this, int32_t ___0_index, HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C L_6 = ___1_item;
		HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisFormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_m9A132A980602D4F0A221D9F8D5A16EFB053467EC_gshared (RuntimeArray* __this, int32_t ___0_index, FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E L_6 = ___1_item;
		FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisCategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_mB8606CC73688633A8C7AE334A86B3F164FFCEB3F_gshared (RuntimeArray* __this, int32_t ___0_index, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_6 = ___1_item;
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisJobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13_m193B122235C5F44457B7802D8395A4EA1433FFDE_gshared (RuntimeArray* __this, int32_t ___0_index, JobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		JobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13 L_6 = ___1_item;
		JobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisJobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3_mC7345791543DAF080799D761EC0C1A504DCAAD94_gshared (RuntimeArray* __this, int32_t ___0_index, JobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		JobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3 L_6 = ___1_item;
		JobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisJobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36_m7BED4C8AC4A292A4F1D4107096FE1A5E8CFFC100_gshared (RuntimeArray* __this, int32_t ___0_index, JobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		JobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36 L_6 = ___1_item;
		JobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisJobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99_mCB0560B4BE3BAC84195185D7D714984106C3B1AC_gshared (RuntimeArray* __this, int32_t ___0_index, JobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		JobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99 L_6 = ___1_item;
		JobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisJobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C_m77EFD7EE8D630A4BC9894094AD5CFA62ECF60CFF_gshared (RuntimeArray* __this, int32_t ___0_index, JobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		JobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C L_6 = ___1_item;
		JobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisJobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481_mC7CA5A440381D7BB1C5D880F1FF7D56B704404B1_gshared (RuntimeArray* __this, int32_t ___0_index, JobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		JobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481 L_6 = ___1_item;
		JobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisJobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC_m780BF8613F3B54E248185A20E51EBFE38B51D095_gshared (RuntimeArray* __this, int32_t ___0_index, JobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		JobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC L_6 = ___1_item;
		JobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisJobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29_mC87AC1A3F55BDFD4E43875DC95B430BB402BD32C_gshared (RuntimeArray* __this, int32_t ___0_index, JobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		JobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29 L_6 = ___1_item;
		JobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisTransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_m4BEAA586568F51808EAC1B3FE3846643E9271CE2_gshared (RuntimeArray* __this, int32_t ___0_index, TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 L_6 = ___1_item;
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisTZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_m8E4FB87B4B0F4D0AEF07585EF19357B6EEACDBCF_gshared (RuntimeArray* __this, int32_t ___0_index, TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4 L_6 = ___1_item;
		TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisDateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_m9F93FD5E7FA363FC6F44DA3FABBE05561B246157_gshared (RuntimeArray* __this, int32_t ___0_index, DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD L_6 = ___1_item;
		DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m606B4ED4FD7685285F41F14059DE8CBB1ED40D6E_gshared (RuntimeArray* __this, int32_t ___0_index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_6 = ___1_item;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisPowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304_m27AC6D7117BC3FD60850B0113C47E55EB461B411_gshared (RuntimeArray* __this, int32_t ___0_index, PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 L_6 = ___1_item;
		PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___0_index;
		SetGenericValueImpl(__this, L_9, (&___1_item));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisRuntimeObject_mF80E7E1277188B3961F8D606EB5A1CC46EF0319E_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___0_array;
		RuntimeObject* L_3 = ___1_value;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___0_array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = ___0_array;
		int32_t L_6;
		L_6 = Array_LastIndexOf_TisRuntimeObject_m71A883897624019E6587A0716169FDF72475BC3D(L_2, L_3, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), 1)), ((int32_t)(((RuntimeArray*)L_5)->max_length)), il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisIl2CppFullySharedGenericAny_mE86AD07AC87A88022E18138E3B7B6365630F8973_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5211545527807CEA55E07F956905923AE0154C25 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t5211545527807CEA55E07F956905923AE0154C25);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_T_t5211545527807CEA55E07F956905923AE0154C25);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		int32_t L_6;
		L_6 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_3: *(void**)L_3), ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), 1)), ((int32_t)(((RuntimeArray*)L_5)->max_length)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisIl2CppFullySharedGenericAny_m5897D7BE7D394287FDEF1A444B517FAD6597B8B5_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
	int32_t G_B4_0 = 0;
	Il2CppFullySharedGenericAny G_B4_1 = alloca(SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
	memset(G_B4_1, 0, SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B4_2 = NULL;
	int32_t G_B3_0 = 0;
	Il2CppFullySharedGenericAny G_B3_1 = alloca(SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
	memset(G_B3_1, 0, SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B3_2 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	Il2CppFullySharedGenericAny G_B5_2 = alloca(SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
	memset(G_B5_2, 0, SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B5_3 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
		int32_t L_4 = ___2_startIndex;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		if (!(((RuntimeArray*)L_5)->max_length))
		{
			G_B4_0 = L_4;
			il2cpp_codegen_memcpy(G_B4_1, L_3, SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
			G_B4_2 = L_2;
			goto IL_001a;
		}
		G_B3_0 = L_4;
		il2cpp_codegen_memcpy(G_B3_1, L_3, SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
		G_B3_2 = L_2;
	}
	{
		int32_t L_6 = ___2_startIndex;
		G_B5_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		G_B5_1 = G_B3_0;
		il2cpp_codegen_memcpy(G_B5_2, G_B3_1, SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
		G_B5_3 = G_B3_2;
		goto IL_001b;
	}

IL_001a:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		il2cpp_codegen_memcpy(G_B5_2, G_B4_1, SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
		G_B5_3 = G_B4_2;
	}

IL_001b:
	{
		int32_t L_7;
		L_7 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, G_B5_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? G_B5_2: *(void**)G_B5_2), G_B5_1, G_B5_0);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisRuntimeObject_m71A883897624019E6587A0716169FDF72475BC3D_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___0_array;
		if ((((RuntimeArray*)L_2)->max_length))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_3 = ___2_startIndex;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_4 = ___2_startIndex;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0029:
	{
		int32_t L_6 = ___3_count;
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_003c:
	{
		return (-1);
	}

IL_003e:
	{
		int32_t L_8 = ___2_startIndex;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_9 = ___2_startIndex;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___0_array;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0058;
		}
	}

IL_0048:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0058:
	{
		int32_t L_12 = ___3_count;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_13 = ___2_startIndex;
		int32_t L_14 = ___3_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_13, L_14)), 1))) >= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}

IL_0064:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0074:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = ___0_array;
		RuntimeObject* L_17 = ___1_value;
		int32_t L_18 = ___2_startIndex;
		int32_t L_19 = ___3_count;
		int32_t L_20;
		L_20 = Array_LastIndexOfImpl_TisRuntimeObject_mE7303DACD06CE029EA0F44ADF103A0276A96AA92(L_16, L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisIl2CppFullySharedGenericAny_m5A880FB745BFA92B748F4CE1853935AD172AB601_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tAB7263AE80E4A5F9AE443FA18645D31183D6EBF0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_tAB7263AE80E4A5F9AE443FA18645D31183D6EBF0);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		if ((((RuntimeArray*)L_2)->max_length))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_3 = ___2_startIndex;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_4 = ___2_startIndex;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0029:
	{
		int32_t L_6 = ___3_count;
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_003c:
	{
		return (-1);
	}

IL_003e:
	{
		int32_t L_8 = ___2_startIndex;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_9 = ___2_startIndex;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_array;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0058;
		}
	}

IL_0048:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0058:
	{
		int32_t L_12 = ___3_count;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_13 = ___2_startIndex;
		int32_t L_14 = ___3_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_13, L_14)), 1))) >= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}

IL_0064:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0074:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___0_array;
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_T_tAB7263AE80E4A5F9AE443FA18645D31183D6EBF0);
		int32_t L_18 = ___2_startIndex;
		int32_t L_19 = ___3_count;
		int32_t L_20;
		L_20 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_17: *(void**)L_17), L_18, L_19);
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOfImpl_TisRuntimeObject_mE7303DACD06CE029EA0F44ADF103A0276A96AA92_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_array;
		RuntimeObject* L_2 = ___1_value;
		int32_t L_3 = ___2_startIndex;
		int32_t L_4 = ___3_count;
		int32_t L_5;
		L_5 = VirtualFuncInvoker4< int32_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, RuntimeObject*, int32_t, int32_t >::Invoke(11, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOfImpl_TisIl2CppFullySharedGenericAny_mB366BADD239063B30EADBFB1E25770233C263B56_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t65B0281A0C7501E8C8CDBEEBF4181C37D9C7E536 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t65B0281A0C7501E8C8CDBEEBF4181C37D9C7E536);
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___1_value : &___1_value), SizeOf_T_t65B0281A0C7501E8C8CDBEEBF4181C37D9C7E536);
		int32_t L_3 = ___2_startIndex;
		int32_t L_4 = ___3_count;
		int32_t L_5;
		L_5 = VirtualFuncInvoker4Invoker< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(11, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_2: *(void**)L_2), L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t G_B7_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B7_1 = NULL;
	int32_t G_B7_2 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B7_3 = NULL;
	int32_t G_B6_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B6_1 = NULL;
	int32_t G_B6_2 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B6_3 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B8_2 = NULL;
	int32_t G_B8_3 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B8_4 = NULL;
	{
		int32_t L_0 = ___1_newSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE7FC72C0A8144676E285C7A23FCC75766669858)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_2 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = *((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)L_2);
		V_0 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_5 = ___0_array;
		int32_t L_6 = ___1_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)L_6);
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_7);
		return;
	}

IL_0023:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_0;
		int32_t L_9 = ___1_newSize;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((int32_t)L_9)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = ___1_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)L_10);
		V_1 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_0;
		int32_t L_15 = ___1_newSize;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))) > ((int32_t)L_15)))
		{
			G_B7_0 = 0;
			G_B7_1 = L_13;
			G_B7_2 = 0;
			G_B7_3 = L_12;
			goto IL_003f;
		}
		G_B6_0 = 0;
		G_B6_1 = L_13;
		G_B6_2 = 0;
		G_B6_3 = L_12;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		G_B8_0 = ((int32_t)(((RuntimeArray*)L_16)->max_length));
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		G_B8_4 = G_B6_3;
		goto IL_0040;
	}

IL_003f:
	{
		int32_t L_17 = ___1_newSize;
		G_B8_0 = L_17;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
		G_B8_4 = G_B7_3;
	}

IL_0040:
	{
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)G_B8_4, G_B8_3, (RuntimeArray*)G_B8_2, G_B8_1, G_B8_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_18 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_1;
		*((RuntimeObject**)L_18) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_18, (void*)(RuntimeObject*)L_19);
	}

IL_0048:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t G_B7_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B7_1 = NULL;
	int32_t G_B7_2 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B7_3 = NULL;
	int32_t G_B6_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_1 = NULL;
	int32_t G_B6_2 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_3 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B8_2 = NULL;
	int32_t G_B8_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B8_4 = NULL;
	{
		int32_t L_0 = ___1_newSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE7FC72C0A8144676E285C7A23FCC75766669858)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_2 = ___0_array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = *((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**)L_2);
		V_0 = L_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_5 = ___0_array;
		int32_t L_6 = ___1_newSize;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)L_6);
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_7);
		return;
	}

IL_0023:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		int32_t L_9 = ___1_newSize;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((int32_t)L_9)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = ___1_newSize;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)L_10);
		V_1 = L_11;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		int32_t L_15 = ___1_newSize;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))) > ((int32_t)L_15)))
		{
			G_B7_0 = 0;
			G_B7_1 = L_13;
			G_B7_2 = 0;
			G_B7_3 = L_12;
			goto IL_003f;
		}
		G_B6_0 = 0;
		G_B6_1 = L_13;
		G_B6_2 = 0;
		G_B6_3 = L_12;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_0;
		G_B8_0 = ((int32_t)(((RuntimeArray*)L_16)->max_length));
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		G_B8_4 = G_B6_3;
		goto IL_0040;
	}

IL_003f:
	{
		int32_t L_17 = ___1_newSize;
		G_B8_0 = L_17;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
		G_B8_4 = G_B7_3;
	}

IL_0040:
	{
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)G_B8_4, G_B8_3, (RuntimeArray*)G_B8_2, G_B8_1, G_B8_0, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_18 = ___0_array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_1;
		*((RuntimeObject**)L_18) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_18, (void*)(RuntimeObject*)L_19);
	}

IL_0048:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	int32_t G_B7_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B7_1 = NULL;
	int32_t G_B7_2 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B7_3 = NULL;
	int32_t G_B6_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B6_1 = NULL;
	int32_t G_B6_2 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B6_3 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B8_2 = NULL;
	int32_t G_B8_3 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B8_4 = NULL;
	{
		int32_t L_0 = ___1_newSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE7FC72C0A8144676E285C7A23FCC75766669858)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_2 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = *((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)L_2);
		V_0 = L_3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_5 = ___0_array;
		int32_t L_6 = ___1_newSize;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)L_6);
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_7);
		return;
	}

IL_0023:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = V_0;
		int32_t L_9 = ___1_newSize;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((int32_t)L_9)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = ___1_newSize;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)L_10);
		V_1 = L_11;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = V_0;
		int32_t L_15 = ___1_newSize;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))) > ((int32_t)L_15)))
		{
			G_B7_0 = 0;
			G_B7_1 = L_13;
			G_B7_2 = 0;
			G_B7_3 = L_12;
			goto IL_003f;
		}
		G_B6_0 = 0;
		G_B6_1 = L_13;
		G_B6_2 = 0;
		G_B6_3 = L_12;
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_0;
		G_B8_0 = ((int32_t)(((RuntimeArray*)L_16)->max_length));
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		G_B8_4 = G_B6_3;
		goto IL_0040;
	}

IL_003f:
	{
		int32_t L_17 = ___1_newSize;
		G_B8_0 = L_17;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
		G_B8_4 = G_B7_3;
	}

IL_0040:
	{
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)G_B8_4, G_B8_3, (RuntimeArray*)G_B8_2, G_B8_1, G_B8_0, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_18 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = V_1;
		*((RuntimeObject**)L_18) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_18, (void*)(RuntimeObject*)L_19);
	}

IL_0048:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_array;
		Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m259DE31308F37526EF40E73D7C36AB5DDC896CBE(L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisIl2CppFullySharedGenericAny_m83EA25933C1AD0EA4D4437FDCF807AE9150FF4F4_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisAngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB_m741EFE7F35AC29328536A2B8FF0577CDDAA0C772_gshared (AngleRangeInfoU5BU5D_t8AE5F89B8CA102A1093EFEA4E67B9364AC690BC8* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) 
{
	AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB* V_0 = NULL;
	AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB* V_1 = NULL;
	AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* G_B7_0 = NULL;
	{
		AngleRangeInfoU5BU5D_t8AE5F89B8CA102A1093EFEA4E67B9364AC690BC8* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		AngleRangeInfoU5BU5D_t8AE5F89B8CA102A1093EFEA4E67B9364AC690BC8* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		int32_t L_10 = ___2_length;
		if ((((int32_t)L_10) > ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		return;
	}

IL_0049:
	{
		AngleRangeInfoU5BU5D_t8AE5F89B8CA102A1093EFEA4E67B9364AC690BC8* L_11 = ___0_array;
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB* L_13;
		L_13 = il2cpp_unsafe_as_ref<AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB>(L_12);
		int32_t L_14 = ___1_index;
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB* L_15;
		L_15 = il2cpp_unsafe_add<AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB,int32_t>(L_13, L_14);
		V_0 = L_15;
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB* L_16 = V_0;
		int32_t L_17 = ___2_length;
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB* L_18;
		L_18 = il2cpp_unsafe_add<AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB,int32_t>(L_16, L_17);
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB* L_19;
		L_19 = il2cpp_unsafe_add<AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB,int32_t>(L_18, (-1));
		V_1 = L_19;
	}

IL_0069:
	{
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB* L_20 = V_0;
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB L_21 = (*(AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB*)L_20);
		V_2 = L_21;
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB* L_22 = V_0;
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB* L_23 = V_1;
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB L_24 = (*(AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB*)L_23);
		*(AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB*)L_22 = L_24;
		Il2CppCodeGenWriteBarrier((void**)&(((AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB*)L_22)->___sprites), (void*)NULL);
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB* L_25 = V_1;
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB L_26 = V_2;
		*(AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB*)L_25 = L_26;
		Il2CppCodeGenWriteBarrier((void**)&(((AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB*)L_25)->___sprites), (void*)NULL);
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB* L_27 = V_0;
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB* L_28;
		L_28 = il2cpp_unsafe_add<AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB,int32_t>(L_27, 1);
		V_0 = L_28;
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB* L_29 = V_1;
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB* L_30;
		L_30 = il2cpp_unsafe_add<AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB,int32_t>(L_29, (-1));
		V_1 = L_30;
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB* L_31 = V_0;
		AngleRangeInfo_t54B4C94C605EABEC2D401C612F1D8CCB42985DBB* L_32 = V_1;
		bool L_33;
		L_33 = il2cpp_unsafe_is_addr_lt(L_31, L_32);
		if (L_33)
		{
			goto IL_0069;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m259DE31308F37526EF40E73D7C36AB5DDC896CBE_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t V_2 = 0x0;
	String_t* G_B7_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		int32_t L_10 = ___2_length;
		if ((((int32_t)L_10) > ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		return;
	}

IL_0049:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_array;
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		uint8_t* L_13;
		L_13 = il2cpp_unsafe_as_ref<uint8_t>(L_12);
		int32_t L_14 = ___1_index;
		uint8_t* L_15;
		L_15 = il2cpp_unsafe_add<uint8_t,int32_t>(L_13, L_14);
		V_0 = L_15;
		uint8_t* L_16 = V_0;
		int32_t L_17 = ___2_length;
		uint8_t* L_18;
		L_18 = il2cpp_unsafe_add<uint8_t,int32_t>(L_16, L_17);
		uint8_t* L_19;
		L_19 = il2cpp_unsafe_add<uint8_t,int32_t>(L_18, (-1));
		V_1 = L_19;
	}

IL_0069:
	{
		uint8_t* L_20 = V_0;
		uint8_t L_21 = (*(uint8_t*)L_20);
		V_2 = L_21;
		uint8_t* L_22 = V_0;
		uint8_t* L_23 = V_1;
		uint8_t L_24 = (*(uint8_t*)L_23);
		*(uint8_t*)L_22 = L_24;
		uint8_t* L_25 = V_1;
		uint8_t L_26 = V_2;
		*(uint8_t*)L_25 = L_26;
		uint8_t* L_27 = V_0;
		uint8_t* L_28;
		L_28 = il2cpp_unsafe_add<uint8_t,int32_t>(L_27, 1);
		V_0 = L_28;
		uint8_t* L_29 = V_1;
		uint8_t* L_30;
		L_30 = il2cpp_unsafe_add<uint8_t,int32_t>(L_29, (-1));
		V_1 = L_30;
		uint8_t* L_31 = V_0;
		uint8_t* L_32 = V_1;
		bool L_33;
		L_33 = il2cpp_unsafe_is_addr_lt(L_31, L_32);
		if (L_33)
		{
			goto IL_0069;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66_mA24DFC3769BE4FBB6A26DC27A1DE619CA3B3DA0F_gshared (ContourVertexU5BU5D_tA2E5DCD24E23FACD7195A27617FA696A603992F5* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) 
{
	ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66* V_0 = NULL;
	ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66* V_1 = NULL;
	ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66 V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* G_B7_0 = NULL;
	{
		ContourVertexU5BU5D_tA2E5DCD24E23FACD7195A27617FA696A603992F5* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		ContourVertexU5BU5D_tA2E5DCD24E23FACD7195A27617FA696A603992F5* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		int32_t L_10 = ___2_length;
		if ((((int32_t)L_10) > ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		return;
	}

IL_0049:
	{
		ContourVertexU5BU5D_tA2E5DCD24E23FACD7195A27617FA696A603992F5* L_11 = ___0_array;
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66* L_13;
		L_13 = il2cpp_unsafe_as_ref<ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66>(L_12);
		int32_t L_14 = ___1_index;
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66* L_15;
		L_15 = il2cpp_unsafe_add<ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66,int32_t>(L_13, L_14);
		V_0 = L_15;
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66* L_16 = V_0;
		int32_t L_17 = ___2_length;
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66* L_18;
		L_18 = il2cpp_unsafe_add<ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66,int32_t>(L_16, L_17);
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66* L_19;
		L_19 = il2cpp_unsafe_add<ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66,int32_t>(L_18, (-1));
		V_1 = L_19;
	}

IL_0069:
	{
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66* L_20 = V_0;
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66 L_21 = (*(ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66*)L_20);
		V_2 = L_21;
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66* L_22 = V_0;
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66* L_23 = V_1;
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66 L_24 = (*(ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66*)L_23);
		*(ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66*)L_22 = L_24;
		Il2CppCodeGenWriteBarrier((void**)&(((ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66*)L_22)->___Data), (void*)NULL);
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66* L_25 = V_1;
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66 L_26 = V_2;
		*(ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66*)L_25 = L_26;
		Il2CppCodeGenWriteBarrier((void**)&(((ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66*)L_25)->___Data), (void*)NULL);
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66* L_27 = V_0;
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66* L_28;
		L_28 = il2cpp_unsafe_add<ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66,int32_t>(L_27, 1);
		V_0 = L_28;
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66* L_29 = V_1;
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66* L_30;
		L_30 = il2cpp_unsafe_add<ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66,int32_t>(L_29, (-1));
		V_1 = L_30;
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66* L_31 = V_0;
		ContourVertex_tCF411C2A25CB1E379D7566058ACD30AE23E7FC66* L_32 = V_1;
		bool L_33;
		L_33 = il2cpp_unsafe_is_addr_lt(L_31, L_32);
		if (L_33)
		{
			goto IL_0069;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57764BD8E3718881AE35094284EFDECEE528991D_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* G_B7_0 = NULL;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		int32_t L_10 = ___2_length;
		if ((((int32_t)L_10) > ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		return;
	}

IL_0049:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___0_array;
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		int32_t* L_13;
		L_13 = il2cpp_unsafe_as_ref<int32_t>(L_12);
		int32_t L_14 = ___1_index;
		int32_t* L_15;
		L_15 = il2cpp_unsafe_add<int32_t,int32_t>(L_13, L_14);
		V_0 = L_15;
		int32_t* L_16 = V_0;
		int32_t L_17 = ___2_length;
		int32_t* L_18;
		L_18 = il2cpp_unsafe_add<int32_t,int32_t>(L_16, L_17);
		int32_t* L_19;
		L_19 = il2cpp_unsafe_add<int32_t,int32_t>(L_18, (-1));
		V_1 = L_19;
	}

IL_0069:
	{
		int32_t* L_20 = V_0;
		int32_t L_21 = (*(int32_t*)L_20);
		V_2 = L_21;
		int32_t* L_22 = V_0;
		int32_t* L_23 = V_1;
		int32_t L_24 = (*(int32_t*)L_23);
		*(int32_t*)L_22 = L_24;
		int32_t* L_25 = V_1;
		int32_t L_26 = V_2;
		*(int32_t*)L_25 = L_26;
		int32_t* L_27 = V_0;
		int32_t* L_28;
		L_28 = il2cpp_unsafe_add<int32_t,int32_t>(L_27, 1);
		V_0 = L_28;
		int32_t* L_29 = V_1;
		int32_t* L_30;
		L_30 = il2cpp_unsafe_add<int32_t,int32_t>(L_29, (-1));
		V_1 = L_30;
		int32_t* L_31 = V_0;
		int32_t* L_32 = V_1;
		bool L_33;
		L_33 = il2cpp_unsafe_is_addr_lt(L_31, L_32);
		if (L_33)
		{
			goto IL_0069;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisRuntimeObject_m06FF2E5011A594BEE1AF5EC3AEA51997A9812FE1_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) 
{
	RuntimeObject** V_0 = NULL;
	RuntimeObject** V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	String_t* G_B7_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		int32_t L_10 = ___2_length;
		if ((((int32_t)L_10) > ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		return;
	}

IL_0049:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___0_array;
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		RuntimeObject** L_13;
		L_13 = il2cpp_unsafe_as_ref<RuntimeObject*>(L_12);
		int32_t L_14 = ___1_index;
		RuntimeObject** L_15;
		L_15 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_13, L_14);
		V_0 = L_15;
		RuntimeObject** L_16 = V_0;
		int32_t L_17 = ___2_length;
		RuntimeObject** L_18;
		L_18 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_16, L_17);
		RuntimeObject** L_19;
		L_19 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_18, (-1));
		V_1 = L_19;
	}

IL_0069:
	{
		RuntimeObject** L_20 = V_0;
		RuntimeObject* L_21 = (*(RuntimeObject**)L_20);
		V_2 = L_21;
		RuntimeObject** L_22 = V_0;
		RuntimeObject** L_23 = V_1;
		RuntimeObject* L_24 = (*(RuntimeObject**)L_23);
		*(RuntimeObject**)L_22 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_22, (void*)L_24);
		RuntimeObject** L_25 = V_1;
		RuntimeObject* L_26 = V_2;
		*(RuntimeObject**)L_25 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_25, (void*)L_26);
		RuntimeObject** L_27 = V_0;
		RuntimeObject** L_28;
		L_28 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_27, 1);
		V_0 = L_28;
		RuntimeObject** L_29 = V_1;
		RuntimeObject** L_30;
		L_30 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_29, (-1));
		V_1 = L_30;
		RuntimeObject** L_31 = V_0;
		RuntimeObject** L_32 = V_1;
		bool L_33;
		L_33 = il2cpp_unsafe_is_addr_lt(L_31, L_32);
		if (L_33)
		{
			goto IL_0069;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mF54B91CEAE0914FC82BB56642F268A22945AFC93_gshared (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) 
{
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* V_0 = NULL;
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* V_1 = NULL;
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* G_B7_0 = NULL;
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		int32_t L_10 = ___2_length;
		if ((((int32_t)L_10) > ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		return;
	}

IL_0049:
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_11 = ___0_array;
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_13;
		L_13 = il2cpp_unsafe_as_ref<RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA>(L_12);
		int32_t L_14 = ___1_index;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_15;
		L_15 = il2cpp_unsafe_add<RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA,int32_t>(L_13, L_14);
		V_0 = L_15;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_16 = V_0;
		int32_t L_17 = ___2_length;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_18;
		L_18 = il2cpp_unsafe_add<RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA,int32_t>(L_16, L_17);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_19;
		L_19 = il2cpp_unsafe_add<RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA,int32_t>(L_18, (-1));
		V_1 = L_19;
	}

IL_0069:
	{
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_20 = V_0;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_21 = (*(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)L_20);
		V_2 = L_21;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_22 = V_0;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_23 = V_1;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_24 = (*(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)L_23);
		*(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)L_22 = L_24;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_25 = V_1;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_26 = V_2;
		*(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)L_25 = L_26;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_27 = V_0;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_28;
		L_28 = il2cpp_unsafe_add<RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA,int32_t>(L_27, 1);
		V_0 = L_28;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_29 = V_1;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_30;
		L_30 = il2cpp_unsafe_add<RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA,int32_t>(L_29, (-1));
		V_1 = L_30;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_31 = V_0;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_32 = V_1;
		bool L_33;
		L_33 = il2cpp_unsafe_is_addr_lt(L_31, L_32);
		if (L_33)
		{
			goto IL_0069;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m58C46E778DCE13DFC28D66B7F136C7B07523E4E3_gshared (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* V_1 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* G_B7_0 = NULL;
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		int32_t L_10 = ___2_length;
		if ((((int32_t)L_10) > ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		return;
	}

IL_0049:
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_11 = ___0_array;
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13;
		L_13 = il2cpp_unsafe_as_ref<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>(L_12);
		int32_t L_14 = ___1_index;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15;
		L_15 = il2cpp_unsafe_add<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,int32_t>(L_13, L_14);
		V_0 = L_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = V_0;
		int32_t L_17 = ___2_length;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18;
		L_18 = il2cpp_unsafe_add<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,int32_t>(L_16, L_17);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19;
		L_19 = il2cpp_unsafe_add<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,int32_t>(L_18, (-1));
		V_1 = L_19;
	}

IL_0069:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_20);
		V_2 = L_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_23);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_22 = L_24;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_25 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_2;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_25 = L_26;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_27 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_28;
		L_28 = il2cpp_unsafe_add<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,int32_t>(L_27, 1);
		V_0 = L_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_29 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_30;
		L_30 = il2cpp_unsafe_add<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,int32_t>(L_29, (-1));
		V_1 = L_30;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_31 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_32 = V_1;
		bool L_33;
		L_33 = il2cpp_unsafe_is_addr_lt(L_31, L_32);
		if (L_33)
		{
			goto IL_0069;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisIl2CppFullySharedGenericAny_m8DC41AC38C62485867881D7DDAA307A7E1B1BB9B_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tD2AB84E81F34165E6D00EACD3FFFBC8A0D9CCA51 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T_tD2AB84E81F34165E6D00EACD3FFFBC8A0D9CCA51);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T_tD2AB84E81F34165E6D00EACD3FFFBC8A0D9CCA51);
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T_tD2AB84E81F34165E6D00EACD3FFFBC8A0D9CCA51);
	Il2CppFullySharedGenericAny* V_0 = NULL;
	Il2CppFullySharedGenericAny* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tD2AB84E81F34165E6D00EACD3FFFBC8A0D9CCA51);
	memset(V_2, 0, SizeOf_T_tD2AB84E81F34165E6D00EACD3FFFBC8A0D9CCA51);
	String_t* G_B7_0 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		int32_t L_10 = ___2_length;
		if ((((int32_t)L_10) > ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		return;
	}

IL_0049:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___0_array;
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		Il2CppFullySharedGenericAny* L_13;
		L_13 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_12);
		int32_t L_14 = ___1_index;
		Il2CppFullySharedGenericAny* L_15;
		L_15 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_15;
		Il2CppFullySharedGenericAny* L_16 = V_0;
		int32_t L_17 = ___2_length;
		Il2CppFullySharedGenericAny* L_18;
		L_18 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_16, L_17, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppFullySharedGenericAny* L_19;
		L_19 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_18, (-1), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = L_19;
	}

IL_0069:
	{
		Il2CppFullySharedGenericAny* L_20 = V_0;
		il2cpp_codegen_memcpy(L_21, L_20, SizeOf_T_tD2AB84E81F34165E6D00EACD3FFFBC8A0D9CCA51);
		il2cpp_codegen_memcpy(V_2, L_21, SizeOf_T_tD2AB84E81F34165E6D00EACD3FFFBC8A0D9CCA51);
		Il2CppFullySharedGenericAny* L_22 = V_0;
		Il2CppFullySharedGenericAny* L_23 = V_1;
		il2cpp_codegen_memcpy(L_24, L_23, SizeOf_T_tD2AB84E81F34165E6D00EACD3FFFBC8A0D9CCA51);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_22, L_24, SizeOf_T_tD2AB84E81F34165E6D00EACD3FFFBC8A0D9CCA51);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_22, (void*)L_24);
		Il2CppFullySharedGenericAny* L_25 = V_1;
		il2cpp_codegen_memcpy(L_26, V_2, SizeOf_T_tD2AB84E81F34165E6D00EACD3FFFBC8A0D9CCA51);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_25, L_26, SizeOf_T_tD2AB84E81F34165E6D00EACD3FFFBC8A0D9CCA51);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_25, (void*)L_26);
		Il2CppFullySharedGenericAny* L_27 = V_0;
		Il2CppFullySharedGenericAny* L_28;
		L_28 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_27, 1, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_28;
		Il2CppFullySharedGenericAny* L_29 = V_1;
		Il2CppFullySharedGenericAny* L_30;
		L_30 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_29, (-1), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = L_30;
		Il2CppFullySharedGenericAny* L_31 = V_0;
		Il2CppFullySharedGenericAny* L_32 = V_1;
		bool L_33;
		L_33 = ((  bool (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_31, L_32, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_33)
		{
			goto IL_0069;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mDCB49D07F30FD9D952124968159FDF346234BD04_gshared (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) 
{
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* V_0 = NULL;
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* V_1 = NULL;
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* G_B7_0 = NULL;
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		int32_t L_10 = ___2_length;
		if ((((int32_t)L_10) > ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		return;
	}

IL_0049:
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_11 = ___0_array;
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_13;
		L_13 = il2cpp_unsafe_as_ref<OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837>(L_12);
		int32_t L_14 = ___1_index;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_15;
		L_15 = il2cpp_unsafe_add<OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837,int32_t>(L_13, L_14);
		V_0 = L_15;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_16 = V_0;
		int32_t L_17 = ___2_length;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_18;
		L_18 = il2cpp_unsafe_add<OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837,int32_t>(L_16, L_17);
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_19;
		L_19 = il2cpp_unsafe_add<OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837,int32_t>(L_18, (-1));
		V_1 = L_19;
	}

IL_0069:
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_20 = V_0;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_21 = (*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)L_20);
		V_2 = L_21;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_22 = V_0;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_23 = V_1;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_24 = (*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)L_23);
		*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)L_22 = L_24;
		Il2CppCodeGenWriteBarrier((void**)&(((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)L_22)->___callback), (void*)NULL);
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_25 = V_1;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_26 = V_2;
		*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)L_25 = L_26;
		Il2CppCodeGenWriteBarrier((void**)&(((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)L_25)->___callback), (void*)NULL);
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_27 = V_0;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_28;
		L_28 = il2cpp_unsafe_add<OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837,int32_t>(L_27, 1);
		V_0 = L_28;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_29 = V_1;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_30;
		L_30 = il2cpp_unsafe_add<OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837,int32_t>(L_29, (-1));
		V_1 = L_30;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_31 = V_0;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_32 = V_1;
		bool L_33;
		L_33 = il2cpp_unsafe_is_addr_lt(L_31, L_32);
		if (L_33)
		{
			goto IL_0069;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisTransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_m0257B6128B49C5E9D323D276D0169091330B52A8_gshared (TransformDataU5BU5D_t9C6552848CAA1DCDD99EC5141171F72E5E8FA322* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) 
{
	TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* V_0 = NULL;
	TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* V_1 = NULL;
	TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* G_B7_0 = NULL;
	{
		TransformDataU5BU5D_t9C6552848CAA1DCDD99EC5141171F72E5E8FA322* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		TransformDataU5BU5D_t9C6552848CAA1DCDD99EC5141171F72E5E8FA322* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		int32_t L_10 = ___2_length;
		if ((((int32_t)L_10) > ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		return;
	}

IL_0049:
	{
		TransformDataU5BU5D_t9C6552848CAA1DCDD99EC5141171F72E5E8FA322* L_11 = ___0_array;
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* L_13;
		L_13 = il2cpp_unsafe_as_ref<TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646>(L_12);
		int32_t L_14 = ___1_index;
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* L_15;
		L_15 = il2cpp_unsafe_add<TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646,int32_t>(L_13, L_14);
		V_0 = L_15;
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* L_16 = V_0;
		int32_t L_17 = ___2_length;
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* L_18;
		L_18 = il2cpp_unsafe_add<TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646,int32_t>(L_16, L_17);
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* L_19;
		L_19 = il2cpp_unsafe_add<TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646,int32_t>(L_18, (-1));
		V_1 = L_19;
	}

IL_0069:
	{
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* L_20 = V_0;
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 L_21 = (*(TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646*)L_20);
		V_2 = L_21;
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* L_22 = V_0;
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* L_23 = V_1;
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 L_24 = (*(TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646*)L_23);
		*(TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646*)L_22 = L_24;
		Il2CppCodeGenWriteBarrier((void**)&(((TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646*)L_22)->___fullName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646*)L_22)->___transform), (void*)NULL);
		#endif
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* L_25 = V_1;
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 L_26 = V_2;
		*(TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646*)L_25 = L_26;
		Il2CppCodeGenWriteBarrier((void**)&(((TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646*)L_25)->___fullName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646*)L_25)->___transform), (void*)NULL);
		#endif
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* L_27 = V_0;
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* L_28;
		L_28 = il2cpp_unsafe_add<TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646,int32_t>(L_27, 1);
		V_0 = L_28;
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* L_29 = V_1;
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* L_30;
		L_30 = il2cpp_unsafe_add<TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646,int32_t>(L_29, (-1));
		V_1 = L_30;
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* L_31 = V_0;
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* L_32 = V_1;
		bool L_33;
		L_33 = il2cpp_unsafe_is_addr_lt(L_31, L_32);
		if (L_33)
		{
			goto IL_0069;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m88E01FB6C608D58721AAECE3C58B2107CB926E3B_gshared (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) 
{
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* V_0 = NULL;
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* V_1 = NULL;
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* G_B7_0 = NULL;
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		int32_t L_8 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0044:
	{
		int32_t L_10 = ___2_length;
		if ((((int32_t)L_10) > ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		return;
	}

IL_0049:
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_11 = ___0_array;
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_13;
		L_13 = il2cpp_unsafe_as_ref<WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44>(L_12);
		int32_t L_14 = ___1_index;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_15;
		L_15 = il2cpp_unsafe_add<WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44,int32_t>(L_13, L_14);
		V_0 = L_15;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_16 = V_0;
		int32_t L_17 = ___2_length;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_18;
		L_18 = il2cpp_unsafe_add<WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44,int32_t>(L_16, L_17);
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_19;
		L_19 = il2cpp_unsafe_add<WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44,int32_t>(L_18, (-1));
		V_1 = L_19;
	}

IL_0069:
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_20 = V_0;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_21 = (*(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)L_20);
		V_2 = L_21;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_22 = V_0;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_23 = V_1;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_24 = (*(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)L_23);
		*(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)L_22 = L_24;
		Il2CppCodeGenWriteBarrier((void**)&(((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)L_22)->___m_DelagateCallback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)L_22)->___m_DelagateState), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)L_22)->___m_WaitHandle), (void*)NULL);
		#endif
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_25 = V_1;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_26 = V_2;
		*(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)L_25 = L_26;
		Il2CppCodeGenWriteBarrier((void**)&(((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)L_25)->___m_DelagateCallback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)L_25)->___m_DelagateState), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)L_25)->___m_WaitHandle), (void*)NULL);
		#endif
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_27 = V_0;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_28;
		L_28 = il2cpp_unsafe_add<WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44,int32_t>(L_27, 1);
		V_0 = L_28;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_29 = V_1;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_30;
		L_30 = il2cpp_unsafe_add<WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44,int32_t>(L_29, (-1));
		V_1 = L_30;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_31 = V_0;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_32 = V_1;
		bool L_33;
		L_33 = il2cpp_unsafe_is_addr_lt(L_31, L_32);
		if (L_33)
		{
			goto IL_0069;
		}
	}
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Bounds_Equals_m93E0B9D24C73E57A6FABB9D312101D48183C88CC_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Bounds_Equals_m615135524315743D29633C33B6C8B16B754266DB_inline(__this, ((*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)UnBox(L_2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Matrix4x4_Equals_m35CFC5F304BB40EFFE011B92AA87B77CD8FF8F74_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline(__this, ((*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)UnBox(L_2, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_mCF93B00BA4FCDDE6100918451343DB9A0583A0A0_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Quaternion_Equals_m25B95D8412B79CC7F8B34062BFAE662BD99578BE_inline(__this, ((*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)UnBox(L_2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mA4E81D6FCE503DBD502BA499708344410F60DA4E_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline(__this, ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mB4BE43D5986864F5C22B919F2957E0309F10E3B4_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline(__this, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_mC2596CA0F441D25DE7A9419BE66A8FA2DA355CB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline(__this, ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Bounds_Equals_m615135524315743D29633C33B6C8B16B754266DB_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_other, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline(__this, NULL);
		V_0 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline((&___0_other), NULL);
		bool L_2;
		L_2 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline(__this, NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline((&___0_other), NULL);
		bool L_5;
		L_5 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline((&V_0), L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 0;
	}

IL_0030:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0033;
	}

IL_0033:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_other, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 0, NULL);
		V_0 = L_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 0, NULL);
		bool L_2;
		L_2 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 1, NULL);
		V_0 = L_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		L_4 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 1, NULL);
		bool L_5;
		L_5 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		L_6 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 2, NULL);
		V_0 = L_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		L_7 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 2, NULL);
		bool L_8;
		L_8 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_7, NULL);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 3, NULL);
		V_0 = L_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10;
		L_10 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 3, NULL);
		bool L_11;
		L_11 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0066;
	}

IL_0065:
	{
		G_B5_0 = 0;
	}

IL_0066:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0069;
	}

IL_0069:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_m25B95D8412B79CC7F8B34062BFAE662BD99578BE_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float* L_0 = (float*)(&__this->___x);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___0_other;
		float L_2 = L_1.___x;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		float* L_4 = (float*)(&__this->___y);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___0_other;
		float L_6 = L_5.___y;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		float* L_8 = (float*)(&__this->___z);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = ___0_other;
		float L_10 = L_9.___z;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		float* L_12 = (float*)(&__this->___w);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = ___0_other;
		float L_14 = L_13.___w;
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		G_B5_0 = ((int32_t)(L_15));
		goto IL_004e;
	}

IL_004d:
	{
		G_B5_0 = 0;
	}

IL_004e:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0051;
	}

IL_0051:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = __this->___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_other;
		float L_2 = L_1.___x;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		float L_3 = __this->___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_other;
		float L_5 = L_4.___y;
		G_B3_0 = ((((float)L_3) == ((float)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float L_0 = __this->___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_other;
		float L_2 = L_1.___x;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = __this->___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_other;
		float L_5 = L_4.___y;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_6 = __this->___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_other;
		float L_8 = L_7.___z;
		G_B4_0 = ((((float)L_6) == ((float)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float L_0 = __this->___x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___0_other;
		float L_2 = L_1.___x;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_003b;
		}
	}
	{
		float L_3 = __this->___y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_other;
		float L_5 = L_4.___y;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_003b;
		}
	}
	{
		float L_6 = __this->___z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = ___0_other;
		float L_8 = L_7.___z;
		if ((!(((float)L_6) == ((float)L_8))))
		{
			goto IL_003b;
		}
	}
	{
		float L_9 = __this->___w;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___0_other;
		float L_11 = L_10.___w;
		G_B5_0 = ((((float)L_9) == ((float)L_11))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		V_0 = (bool)G_B5_0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Center;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Extents;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
