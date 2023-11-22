#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraSwitch
struct CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Editor
struct Editor_tD838114EAFE1F13F8F8FB09D711521206D086367;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// DigitalRuby.PyroParticles.FireBaseScript
struct FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9;
// DigitalRuby.PyroParticles.FireCollisionForwardScript
struct FireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D;
// DigitalRuby.PyroParticles.FireConstantBaseScript
struct FireConstantBaseScript_t578945513113D263C11CC95F1A33EFE7F1545AE2;
// DigitalRuby.PyroParticles.FireLightScript
struct FireLightScript_tF88E479E792A5631BAF1D2FF37B1098869289062;
// DigitalRuby.PyroParticles.FireProjectileCollisionDelegate
struct FireProjectileCollisionDelegate_t93697D2B8D055503F24A78C706943A06409DF855;
// DigitalRuby.PyroParticles.FireProjectileScript
struct FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GUIManager
struct GUIManager_t951430CCB75B4AF327EF5833F186E4C8C95C1F2F;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// DigitalRuby.PyroParticles.ICollisionHandler
struct ICollisionHandler_t907B1F40BAA789508464FDD135E457A1621ED8AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// LevelReset
struct LevelReset_t5AF897661BE368D93B6E70E28DEC6F45A5B79905;
// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275;
// DigitalRuby.PyroParticles.LoopingAudioSource
struct LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MenuSceneLoader
struct MenuSceneLoader_t0D08CE40978A1EAF3F262A54E41A1C6F8FDC3FC2;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate
struct MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76;
// DigitalRuby.PyroParticles.MeteorSwarmScript
struct MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// PauseMenu
struct PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791;
// UnityStandardAssets.SceneUtils.PlaceTargetWithMouse
struct PlaceTargetWithMouse_t384CCC910074BE48EFA5F779E972A03374E97310;
// Play
struct Play_t1F2CB09AC2D3EE6C0B59D267A946EB18E3C43810;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SceneAndURLLoader
struct SceneAndURLLoader_t8B9BB2A4140000EE42EA4DEBAAA47DAFB0E18B5E;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// DigitalRuby.PyroParticles.SingleLineAttribute
struct SingleLineAttribute_t42A09A9950AF7182B25ECF142CB94CF58885BDE4;
// UnityStandardAssets.SceneUtils.SlowMoButton
struct SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// Switch
struct Switch_tDF3C31A4D27AB56642A943CB649C7E9AAEA048CB;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95;
// UnityEngine.TrailRenderer
struct TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// alwaysFaceCamera
struct alwaysFaceCamera_t9D7AA414156CAE2B4542895B36DE3F800AAE1157;
// lookAt
struct lookAt_t973892DDC94633574DFF99FC44F5F63855E36587;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12
struct U3CCleanupEverythingCoRoutineU3Ed__12_t7932D7215487FF0301D02ECA9017F1897A3D7B61;
// DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12
struct U3CSendCollisionAfterDelayU3Ed__12_tE61D4A4F52D44C89486DA9D815F14F712F2723EF;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22
struct U3CCleanupMeteorU3Ed__22_t7BAAE116B67027D3ADDF6DBF47EA30A4F326EBD0;
// DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18
struct U3CSpawnMeteorU3Ed__18_t75D8CCF02D0E6F8ACF8912130334AEBBE60CCB2C;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollisionHandler_t907B1F40BAA789508464FDD135E457A1621ED8AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCleanupEverythingCoRoutineU3Ed__12_t7932D7215487FF0301D02ECA9017F1897A3D7B61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCleanupMeteorU3Ed__22_t7BAAE116B67027D3ADDF6DBF47EA30A4F326EBD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSendCollisionAfterDelayU3Ed__12_tE61D4A4F52D44C89486DA9D815F14F712F2723EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnMeteorU3Ed__18_t75D8CCF02D0E6F8ACF8912130334AEBBE60CCB2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A;
IL2CPP_EXTERN_C String_t* _stringLiteral1EB58CC51BCE0B0797DD5B5E984FDA768D7CFB16;
IL2CPP_EXTERN_C String_t* _stringLiteral2CCC8799C95FB9C975E4939A665FD040F54600C4;
IL2CPP_EXTERN_C String_t* _stringLiteral3297D7F872B0B6B3647656A13A2D7B41215309E9;
IL2CPP_EXTERN_C String_t* _stringLiteral4CB09FC91E7F015FB33E1777A36EF4BA5553EBA5;
IL2CPP_EXTERN_C String_t* _stringLiteral7EF04AB12BBE0A20702B3B581ADA685EFE1679F2;
IL2CPP_EXTERN_C String_t* _stringLiteral8440E78AF99820F3DE0D5E1521EC372E9354ED82;
IL2CPP_EXTERN_C String_t* _stringLiteral8B0B208FC44BD03827504C266941B690D9395485;
IL2CPP_EXTERN_C String_t* _stringLiteral90739BFD5DE6DC03519A4E10B0FF7EC0A2BDD7F2;
IL2CPP_EXTERN_C String_t* _stringLiteralAB4D84F7C62E7D302A9A088AA8E292DF6A477309;
IL2CPP_EXTERN_C String_t* _stringLiteralBD68A32FD6C1F791E4EA9570F9F650F6B5B40FB0;
IL2CPP_EXTERN_C String_t* _stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m8E200D5B4EAD18002F7DBC1F26768BDA0CDF0AD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisFireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D_m7BA28FA658C6AB6EDE447B626AFA6F733EBEA487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisPauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_m98153975CAC553ED05CBA0FDC20E56CCF659A615_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_mC10A47F63047FC771E4FD5AF00284CEF8D43055F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m565B248E11FDCE3D39D0B85F419258D461715C95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9_m91F60804FDE3D82AE4DD2751B0037C9C01BDB0BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D_m188552FE09C7581B8330EDAB30D316C71C63F19B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01_m6BF02D14A2BF23863B8F688EEA112E78DD7B4AB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5D162A911D8F5C1BAB92301936B1551BBA72BFF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCleanupEverythingCoRoutineU3Ed__12_System_Collections_IEnumerator_Reset_m94682576657158E61AE8B1AF2DA881E589F454C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCleanupMeteorU3Ed__22_System_Collections_IEnumerator_Reset_m1A8879A925745D2EFE032B3C901F3E3C604EF8C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendCollisionAfterDelayU3Ed__12_System_Collections_IEnumerator_Reset_mF19A4E1894ED6D808B4F9EC4FAD7E1CDEBA66ACB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnMeteorU3Ed__18_System_Collections_IEnumerator_Reset_m27E65A7F9798C507D42054216DD8A30E64B0F67A_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
struct MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8;
struct ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// DigitalRuby.PyroParticles.LoopingAudioSource
struct LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26  : public RuntimeObject
{
public:
	// UnityEngine.AudioSource DigitalRuby.PyroParticles.LoopingAudioSource::<AudioSource>k__BackingField
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___U3CAudioSourceU3Ek__BackingField_0;
	// System.Single DigitalRuby.PyroParticles.LoopingAudioSource::<TargetVolume>k__BackingField
	float ___U3CTargetVolumeU3Ek__BackingField_1;
	// System.Single DigitalRuby.PyroParticles.LoopingAudioSource::startMultiplier
	float ___startMultiplier_2;
	// System.Single DigitalRuby.PyroParticles.LoopingAudioSource::stopMultiplier
	float ___stopMultiplier_3;
	// System.Single DigitalRuby.PyroParticles.LoopingAudioSource::currentMultiplier
	float ___currentMultiplier_4;

public:
	inline static int32_t get_offset_of_U3CAudioSourceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26, ___U3CAudioSourceU3Ek__BackingField_0)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_U3CAudioSourceU3Ek__BackingField_0() const { return ___U3CAudioSourceU3Ek__BackingField_0; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_U3CAudioSourceU3Ek__BackingField_0() { return &___U3CAudioSourceU3Ek__BackingField_0; }
	inline void set_U3CAudioSourceU3Ek__BackingField_0(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___U3CAudioSourceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAudioSourceU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTargetVolumeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26, ___U3CTargetVolumeU3Ek__BackingField_1)); }
	inline float get_U3CTargetVolumeU3Ek__BackingField_1() const { return ___U3CTargetVolumeU3Ek__BackingField_1; }
	inline float* get_address_of_U3CTargetVolumeU3Ek__BackingField_1() { return &___U3CTargetVolumeU3Ek__BackingField_1; }
	inline void set_U3CTargetVolumeU3Ek__BackingField_1(float value)
	{
		___U3CTargetVolumeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_startMultiplier_2() { return static_cast<int32_t>(offsetof(LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26, ___startMultiplier_2)); }
	inline float get_startMultiplier_2() const { return ___startMultiplier_2; }
	inline float* get_address_of_startMultiplier_2() { return &___startMultiplier_2; }
	inline void set_startMultiplier_2(float value)
	{
		___startMultiplier_2 = value;
	}

	inline static int32_t get_offset_of_stopMultiplier_3() { return static_cast<int32_t>(offsetof(LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26, ___stopMultiplier_3)); }
	inline float get_stopMultiplier_3() const { return ___stopMultiplier_3; }
	inline float* get_address_of_stopMultiplier_3() { return &___stopMultiplier_3; }
	inline void set_stopMultiplier_3(float value)
	{
		___stopMultiplier_3 = value;
	}

	inline static int32_t get_offset_of_currentMultiplier_4() { return static_cast<int32_t>(offsetof(LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26, ___currentMultiplier_4)); }
	inline float get_currentMultiplier_4() const { return ___currentMultiplier_4; }
	inline float* get_address_of_currentMultiplier_4() { return &___currentMultiplier_4; }
	inline void set_currentMultiplier_4(float value)
	{
		___currentMultiplier_4 = value;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12
struct U3CCleanupEverythingCoRoutineU3Ed__12_t7932D7215487FF0301D02ECA9017F1897A3D7B61  : public RuntimeObject
{
public:
	// System.Int32 DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DigitalRuby.PyroParticles.FireBaseScript DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12::<>4__this
	FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCleanupEverythingCoRoutineU3Ed__12_t7932D7215487FF0301D02ECA9017F1897A3D7B61, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCleanupEverythingCoRoutineU3Ed__12_t7932D7215487FF0301D02ECA9017F1897A3D7B61, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCleanupEverythingCoRoutineU3Ed__12_t7932D7215487FF0301D02ECA9017F1897A3D7B61, ___U3CU3E4__this_2)); }
	inline FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12
struct U3CSendCollisionAfterDelayU3Ed__12_tE61D4A4F52D44C89486DA9D815F14F712F2723EF  : public RuntimeObject
{
public:
	// System.Int32 DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DigitalRuby.PyroParticles.FireProjectileScript DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12::<>4__this
	FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSendCollisionAfterDelayU3Ed__12_tE61D4A4F52D44C89486DA9D815F14F712F2723EF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSendCollisionAfterDelayU3Ed__12_tE61D4A4F52D44C89486DA9D815F14F712F2723EF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSendCollisionAfterDelayU3Ed__12_tE61D4A4F52D44C89486DA9D815F14F712F2723EF, ___U3CU3E4__this_2)); }
	inline FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22
struct U3CCleanupMeteorU3Ed__22_t7BAAE116B67027D3ADDF6DBF47EA30A4F326EBD0  : public RuntimeObject
{
public:
	// System.Int32 DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22::delay
	float ___delay_2;
	// UnityEngine.GameObject DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22::obj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCleanupMeteorU3Ed__22_t7BAAE116B67027D3ADDF6DBF47EA30A4F326EBD0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCleanupMeteorU3Ed__22_t7BAAE116B67027D3ADDF6DBF47EA30A4F326EBD0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CCleanupMeteorU3Ed__22_t7BAAE116B67027D3ADDF6DBF47EA30A4F326EBD0, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_obj_3() { return static_cast<int32_t>(offsetof(U3CCleanupMeteorU3Ed__22_t7BAAE116B67027D3ADDF6DBF47EA30A4F326EBD0, ___obj_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_obj_3() const { return ___obj_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_obj_3() { return &___obj_3; }
	inline void set_obj_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___obj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obj_3), (void*)value);
	}
};


// DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18
struct U3CSpawnMeteorU3Ed__18_t75D8CCF02D0E6F8ACF8912130334AEBBE60CCB2C  : public RuntimeObject
{
public:
	// System.Int32 DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DigitalRuby.PyroParticles.MeteorSwarmScript DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18::<>4__this
	MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSpawnMeteorU3Ed__18_t75D8CCF02D0E6F8ACF8912130334AEBBE60CCB2C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSpawnMeteorU3Ed__18_t75D8CCF02D0E6F8ACF8912130334AEBBE60CCB2C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSpawnMeteorU3Ed__18_t75D8CCF02D0E6F8ACF8912130334AEBBE60CCB2C, ___U3CU3E4__this_2)); }
	inline MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};


// DigitalRuby.PyroParticles.RangeOfFloats
struct RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7 
{
public:
	// System.Single DigitalRuby.PyroParticles.RangeOfFloats::Minimum
	float ___Minimum_0;
	// System.Single DigitalRuby.PyroParticles.RangeOfFloats::Maximum
	float ___Maximum_1;

public:
	inline static int32_t get_offset_of_Minimum_0() { return static_cast<int32_t>(offsetof(RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7, ___Minimum_0)); }
	inline float get_Minimum_0() const { return ___Minimum_0; }
	inline float* get_address_of_Minimum_0() { return &___Minimum_0; }
	inline void set_Minimum_0(float value)
	{
		___Minimum_0 = value;
	}

	inline static int32_t get_offset_of_Maximum_1() { return static_cast<int32_t>(offsetof(RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7, ___Maximum_1)); }
	inline float get_Maximum_1() const { return ___Maximum_1; }
	inline float* get_address_of_Maximum_1() { return &___Maximum_1; }
	inline void set_Maximum_1(float value)
	{
		___Maximum_1 = value;
	}
};


// DigitalRuby.PyroParticles.RangeOfIntegers
struct RangeOfIntegers_tA21125C817566A8E1BF46B7668F4F572A2F46CD4 
{
public:
	// System.Int32 DigitalRuby.PyroParticles.RangeOfIntegers::Minimum
	int32_t ___Minimum_0;
	// System.Int32 DigitalRuby.PyroParticles.RangeOfIntegers::Maximum
	int32_t ___Maximum_1;

public:
	inline static int32_t get_offset_of_Minimum_0() { return static_cast<int32_t>(offsetof(RangeOfIntegers_tA21125C817566A8E1BF46B7668F4F572A2F46CD4, ___Minimum_0)); }
	inline int32_t get_Minimum_0() const { return ___Minimum_0; }
	inline int32_t* get_address_of_Minimum_0() { return &___Minimum_0; }
	inline void set_Minimum_0(int32_t value)
	{
		___Minimum_0 = value;
	}

	inline static int32_t get_offset_of_Maximum_1() { return static_cast<int32_t>(offsetof(RangeOfIntegers_tA21125C817566A8E1BF46B7668F4F572A2F46CD4, ___Maximum_1)); }
	inline int32_t get_Maximum_1() const { return ___Maximum_1; }
	inline int32_t* get_address_of_Maximum_1() { return &___Maximum_1; }
	inline void set_Maximum_1(int32_t value)
	{
		___Maximum_1 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Body_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Body_2)); }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * get_m_Body_2() const { return ___m_Body_2; }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** get_address_of_m_Body_2() { return &___m_Body_2; }
	inline void set_m_Body_2(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * value)
	{
		___m_Body_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Body_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.ContactPoint
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 
{
public:
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisColliderInstanceID_2() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_ThisColliderInstanceID_2)); }
	inline int32_t get_m_ThisColliderInstanceID_2() const { return ___m_ThisColliderInstanceID_2; }
	inline int32_t* get_address_of_m_ThisColliderInstanceID_2() { return &___m_ThisColliderInstanceID_2; }
	inline void set_m_ThisColliderInstanceID_2(int32_t value)
	{
		___m_ThisColliderInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_OtherColliderInstanceID_3)); }
	inline int32_t get_m_OtherColliderInstanceID_3() const { return ___m_OtherColliderInstanceID_3; }
	inline int32_t* get_address_of_m_OtherColliderInstanceID_3() { return &___m_OtherColliderInstanceID_3; }
	inline void set_m_OtherColliderInstanceID_3(int32_t value)
	{
		___m_OtherColliderInstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_Separation_4() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_Separation_4)); }
	inline float get_m_Separation_4() const { return ___m_Separation_4; }
	inline float* get_address_of_m_Separation_4() { return &___m_Separation_4; }
	inline void set_m_Separation_4(float value)
	{
		___m_Separation_4 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.ParticleSystemCurveMode
struct ParticleSystemCurveMode_t1B9D50590BC22BDD142A21664B8E2F9475409342 
{
public:
	// System.Int32 UnityEngine.ParticleSystemCurveMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemCurveMode_t1B9D50590BC22BDD142A21664B8E2F9475409342, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupID
	int32_t ___sortingGroupID_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupOrder
	int32_t ___sortingGroupOrder_6;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_7;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_8;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_9;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_10;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_11;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_12;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingGroupID_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingGroupID_5)); }
	inline int32_t get_sortingGroupID_5() const { return ___sortingGroupID_5; }
	inline int32_t* get_address_of_sortingGroupID_5() { return &___sortingGroupID_5; }
	inline void set_sortingGroupID_5(int32_t value)
	{
		___sortingGroupID_5 = value;
	}

	inline static int32_t get_offset_of_sortingGroupOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingGroupOrder_6)); }
	inline int32_t get_sortingGroupOrder_6() const { return ___sortingGroupOrder_6; }
	inline int32_t* get_address_of_sortingGroupOrder_6() { return &___sortingGroupOrder_6; }
	inline void set_sortingGroupOrder_6(int32_t value)
	{
		___sortingGroupOrder_6 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_7)); }
	inline int32_t get_sortingLayer_7() const { return ___sortingLayer_7; }
	inline int32_t* get_address_of_sortingLayer_7() { return &___sortingLayer_7; }
	inline void set_sortingLayer_7(int32_t value)
	{
		___sortingLayer_7 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_8)); }
	inline int32_t get_sortingOrder_8() const { return ___sortingOrder_8; }
	inline int32_t* get_address_of_sortingOrder_8() { return &___sortingOrder_8; }
	inline void set_sortingOrder_8(int32_t value)
	{
		___sortingOrder_8 = value;
	}

	inline static int32_t get_offset_of_worldPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_9() const { return ___worldPosition_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_9() { return &___worldPosition_9; }
	inline void set_worldPosition_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_9 = value;
	}

	inline static int32_t get_offset_of_worldNormal_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_10() const { return ___worldNormal_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_10() { return &___worldNormal_10; }
	inline void set_worldNormal_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_10 = value;
	}

	inline static int32_t get_offset_of_screenPosition_11() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_11() const { return ___screenPosition_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_11() { return &___screenPosition_11; }
	inline void set_screenPosition_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_11 = value;
	}

	inline static int32_t get_offset_of_displayIndex_12() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_12)); }
	inline int32_t get_displayIndex_12() const { return ___displayIndex_12; }
	inline int32_t* get_address_of_displayIndex_12() { return &___displayIndex_12; }
	inline void set_displayIndex_12(int32_t value)
	{
		___displayIndex_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_9;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_10;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_11;
	int32_t ___displayIndex_12;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_9;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_10;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_11;
	int32_t ___displayIndex_12;
};

// DigitalRuby.PyroParticles.SingleLineAttribute
struct SingleLineAttribute_t42A09A9950AF7182B25ECF142CB94CF58885BDE4  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String DigitalRuby.PyroParticles.SingleLineAttribute::<Tooltip>k__BackingField
	String_t* ___U3CTooltipU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTooltipU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SingleLineAttribute_t42A09A9950AF7182B25ECF142CB94CF58885BDE4, ___U3CTooltipU3Ek__BackingField_0)); }
	inline String_t* get_U3CTooltipU3Ek__BackingField_0() const { return ___U3CTooltipU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTooltipU3Ek__BackingField_0() { return &___U3CTooltipU3Ek__BackingField_0; }
	inline void set_U3CTooltipU3Ek__BackingField_0(String_t* value)
	{
		___U3CTooltipU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTooltipU3Ek__BackingField_0), (void*)value);
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Toggle/ToggleTransition
struct ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD 
{
public:
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_CurveMultiplier_1() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_CurveMultiplier_1)); }
	inline float get_m_CurveMultiplier_1() const { return ___m_CurveMultiplier_1; }
	inline float* get_address_of_m_CurveMultiplier_1() { return &___m_CurveMultiplier_1; }
	inline void set_m_CurveMultiplier_1(float value)
	{
		___m_CurveMultiplier_1 = value;
	}

	inline static int32_t get_offset_of_m_CurveMin_2() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_CurveMin_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_CurveMin_2() const { return ___m_CurveMin_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_CurveMin_2() { return &___m_CurveMin_2; }
	inline void set_m_CurveMin_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_CurveMin_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurveMin_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurveMax_3() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_CurveMax_3)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_CurveMax_3() const { return ___m_CurveMax_3; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_CurveMax_3() { return &___m_CurveMax_3; }
	inline void set_m_CurveMax_3(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_CurveMax_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurveMax_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConstantMin_4() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_ConstantMin_4)); }
	inline float get_m_ConstantMin_4() const { return ___m_ConstantMin_4; }
	inline float* get_address_of_m_ConstantMin_4() { return &___m_ConstantMin_4; }
	inline void set_m_ConstantMin_4(float value)
	{
		___m_ConstantMin_4 = value;
	}

	inline static int32_t get_offset_of_m_ConstantMax_5() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_ConstantMax_5)); }
	inline float get_m_ConstantMax_5() const { return ___m_ConstantMax_5; }
	inline float* get_address_of_m_ConstantMax_5() { return &___m_ConstantMax_5; }
	inline void set_m_ConstantMax_5(float value)
	{
		___m_ConstantMax_5 = value;
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// DigitalRuby.PyroParticles.FireProjectileCollisionDelegate
struct FireProjectileCollisionDelegate_t93697D2B8D055503F24A78C706943A06409DF855  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate
struct MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_tA2F349FE839781469A0344CF6039B51512394275, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.TrailRenderer
struct TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// CameraSwitch
struct CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] CameraSwitch::objects
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___objects_4;
	// UnityEngine.UI.Text CameraSwitch::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_5;
	// System.Int32 CameraSwitch::m_CurrentActiveObject
	int32_t ___m_CurrentActiveObject_6;

public:
	inline static int32_t get_offset_of_objects_4() { return static_cast<int32_t>(offsetof(CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D, ___objects_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_objects_4() const { return ___objects_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_objects_4() { return &___objects_4; }
	inline void set_objects_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___objects_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objects_4), (void*)value);
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D, ___text_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_5() const { return ___text_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentActiveObject_6() { return static_cast<int32_t>(offsetof(CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D, ___m_CurrentActiveObject_6)); }
	inline int32_t get_m_CurrentActiveObject_6() const { return ___m_CurrentActiveObject_6; }
	inline int32_t* get_address_of_m_CurrentActiveObject_6() { return &___m_CurrentActiveObject_6; }
	inline void set_m_CurrentActiveObject_6(int32_t value)
	{
		___m_CurrentActiveObject_6 = value;
	}
};


// Editor
struct Editor_tD838114EAFE1F13F8F8FB09D711521206D086367  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// DigitalRuby.PyroParticles.FireBaseScript
struct FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource DigitalRuby.PyroParticles.FireBaseScript::AudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___AudioSource_4;
	// System.Single DigitalRuby.PyroParticles.FireBaseScript::StartTime
	float ___StartTime_5;
	// System.Single DigitalRuby.PyroParticles.FireBaseScript::StopTime
	float ___StopTime_6;
	// System.Single DigitalRuby.PyroParticles.FireBaseScript::Duration
	float ___Duration_7;
	// System.Single DigitalRuby.PyroParticles.FireBaseScript::ForceAmount
	float ___ForceAmount_8;
	// System.Single DigitalRuby.PyroParticles.FireBaseScript::ForceRadius
	float ___ForceRadius_9;
	// System.Boolean DigitalRuby.PyroParticles.FireBaseScript::IsProjectile
	bool ___IsProjectile_10;
	// UnityEngine.ParticleSystem[] DigitalRuby.PyroParticles.FireBaseScript::ManualParticleSystems
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* ___ManualParticleSystems_11;
	// System.Single DigitalRuby.PyroParticles.FireBaseScript::startTimeMultiplier
	float ___startTimeMultiplier_12;
	// System.Single DigitalRuby.PyroParticles.FireBaseScript::startTimeIncrement
	float ___startTimeIncrement_13;
	// System.Single DigitalRuby.PyroParticles.FireBaseScript::stopTimeMultiplier
	float ___stopTimeMultiplier_14;
	// System.Single DigitalRuby.PyroParticles.FireBaseScript::stopTimeIncrement
	float ___stopTimeIncrement_15;
	// System.Boolean DigitalRuby.PyroParticles.FireBaseScript::<Starting>k__BackingField
	bool ___U3CStartingU3Ek__BackingField_16;
	// System.Single DigitalRuby.PyroParticles.FireBaseScript::<StartPercent>k__BackingField
	float ___U3CStartPercentU3Ek__BackingField_17;
	// System.Boolean DigitalRuby.PyroParticles.FireBaseScript::<Stopping>k__BackingField
	bool ___U3CStoppingU3Ek__BackingField_18;
	// System.Single DigitalRuby.PyroParticles.FireBaseScript::<StopPercent>k__BackingField
	float ___U3CStopPercentU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_AudioSource_4() { return static_cast<int32_t>(offsetof(FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9, ___AudioSource_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_AudioSource_4() const { return ___AudioSource_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_AudioSource_4() { return &___AudioSource_4; }
	inline void set_AudioSource_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___AudioSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AudioSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_StartTime_5() { return static_cast<int32_t>(offsetof(FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9, ___StartTime_5)); }
	inline float get_StartTime_5() const { return ___StartTime_5; }
	inline float* get_address_of_StartTime_5() { return &___StartTime_5; }
	inline void set_StartTime_5(float value)
	{
		___StartTime_5 = value;
	}

	inline static int32_t get_offset_of_StopTime_6() { return static_cast<int32_t>(offsetof(FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9, ___StopTime_6)); }
	inline float get_StopTime_6() const { return ___StopTime_6; }
	inline float* get_address_of_StopTime_6() { return &___StopTime_6; }
	inline void set_StopTime_6(float value)
	{
		___StopTime_6 = value;
	}

	inline static int32_t get_offset_of_Duration_7() { return static_cast<int32_t>(offsetof(FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9, ___Duration_7)); }
	inline float get_Duration_7() const { return ___Duration_7; }
	inline float* get_address_of_Duration_7() { return &___Duration_7; }
	inline void set_Duration_7(float value)
	{
		___Duration_7 = value;
	}

	inline static int32_t get_offset_of_ForceAmount_8() { return static_cast<int32_t>(offsetof(FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9, ___ForceAmount_8)); }
	inline float get_ForceAmount_8() const { return ___ForceAmount_8; }
	inline float* get_address_of_ForceAmount_8() { return &___ForceAmount_8; }
	inline void set_ForceAmount_8(float value)
	{
		___ForceAmount_8 = value;
	}

	inline static int32_t get_offset_of_ForceRadius_9() { return static_cast<int32_t>(offsetof(FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9, ___ForceRadius_9)); }
	inline float get_ForceRadius_9() const { return ___ForceRadius_9; }
	inline float* get_address_of_ForceRadius_9() { return &___ForceRadius_9; }
	inline void set_ForceRadius_9(float value)
	{
		___ForceRadius_9 = value;
	}

	inline static int32_t get_offset_of_IsProjectile_10() { return static_cast<int32_t>(offsetof(FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9, ___IsProjectile_10)); }
	inline bool get_IsProjectile_10() const { return ___IsProjectile_10; }
	inline bool* get_address_of_IsProjectile_10() { return &___IsProjectile_10; }
	inline void set_IsProjectile_10(bool value)
	{
		___IsProjectile_10 = value;
	}

	inline static int32_t get_offset_of_ManualParticleSystems_11() { return static_cast<int32_t>(offsetof(FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9, ___ManualParticleSystems_11)); }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* get_ManualParticleSystems_11() const { return ___ManualParticleSystems_11; }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7** get_address_of_ManualParticleSystems_11() { return &___ManualParticleSystems_11; }
	inline void set_ManualParticleSystems_11(ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* value)
	{
		___ManualParticleSystems_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManualParticleSystems_11), (void*)value);
	}

	inline static int32_t get_offset_of_startTimeMultiplier_12() { return static_cast<int32_t>(offsetof(FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9, ___startTimeMultiplier_12)); }
	inline float get_startTimeMultiplier_12() const { return ___startTimeMultiplier_12; }
	inline float* get_address_of_startTimeMultiplier_12() { return &___startTimeMultiplier_12; }
	inline void set_startTimeMultiplier_12(float value)
	{
		___startTimeMultiplier_12 = value;
	}

	inline static int32_t get_offset_of_startTimeIncrement_13() { return static_cast<int32_t>(offsetof(FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9, ___startTimeIncrement_13)); }
	inline float get_startTimeIncrement_13() const { return ___startTimeIncrement_13; }
	inline float* get_address_of_startTimeIncrement_13() { return &___startTimeIncrement_13; }
	inline void set_startTimeIncrement_13(float value)
	{
		___startTimeIncrement_13 = value;
	}

	inline static int32_t get_offset_of_stopTimeMultiplier_14() { return static_cast<int32_t>(offsetof(FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9, ___stopTimeMultiplier_14)); }
	inline float get_stopTimeMultiplier_14() const { return ___stopTimeMultiplier_14; }
	inline float* get_address_of_stopTimeMultiplier_14() { return &___stopTimeMultiplier_14; }
	inline void set_stopTimeMultiplier_14(float value)
	{
		___stopTimeMultiplier_14 = value;
	}

	inline static int32_t get_offset_of_stopTimeIncrement_15() { return static_cast<int32_t>(offsetof(FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9, ___stopTimeIncrement_15)); }
	inline float get_stopTimeIncrement_15() const { return ___stopTimeIncrement_15; }
	inline float* get_address_of_stopTimeIncrement_15() { return &___stopTimeIncrement_15; }
	inline void set_stopTimeIncrement_15(float value)
	{
		___stopTimeIncrement_15 = value;
	}

	inline static int32_t get_offset_of_U3CStartingU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9, ___U3CStartingU3Ek__BackingField_16)); }
	inline bool get_U3CStartingU3Ek__BackingField_16() const { return ___U3CStartingU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CStartingU3Ek__BackingField_16() { return &___U3CStartingU3Ek__BackingField_16; }
	inline void set_U3CStartingU3Ek__BackingField_16(bool value)
	{
		___U3CStartingU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CStartPercentU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9, ___U3CStartPercentU3Ek__BackingField_17)); }
	inline float get_U3CStartPercentU3Ek__BackingField_17() const { return ___U3CStartPercentU3Ek__BackingField_17; }
	inline float* get_address_of_U3CStartPercentU3Ek__BackingField_17() { return &___U3CStartPercentU3Ek__BackingField_17; }
	inline void set_U3CStartPercentU3Ek__BackingField_17(float value)
	{
		___U3CStartPercentU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CStoppingU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9, ___U3CStoppingU3Ek__BackingField_18)); }
	inline bool get_U3CStoppingU3Ek__BackingField_18() const { return ___U3CStoppingU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CStoppingU3Ek__BackingField_18() { return &___U3CStoppingU3Ek__BackingField_18; }
	inline void set_U3CStoppingU3Ek__BackingField_18(bool value)
	{
		___U3CStoppingU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CStopPercentU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9, ___U3CStopPercentU3Ek__BackingField_19)); }
	inline float get_U3CStopPercentU3Ek__BackingField_19() const { return ___U3CStopPercentU3Ek__BackingField_19; }
	inline float* get_address_of_U3CStopPercentU3Ek__BackingField_19() { return &___U3CStopPercentU3Ek__BackingField_19; }
	inline void set_U3CStopPercentU3Ek__BackingField_19(float value)
	{
		___U3CStopPercentU3Ek__BackingField_19 = value;
	}
};


// DigitalRuby.PyroParticles.FireCollisionForwardScript
struct FireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// DigitalRuby.PyroParticles.ICollisionHandler DigitalRuby.PyroParticles.FireCollisionForwardScript::CollisionHandler
	RuntimeObject* ___CollisionHandler_4;

public:
	inline static int32_t get_offset_of_CollisionHandler_4() { return static_cast<int32_t>(offsetof(FireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D, ___CollisionHandler_4)); }
	inline RuntimeObject* get_CollisionHandler_4() const { return ___CollisionHandler_4; }
	inline RuntimeObject** get_address_of_CollisionHandler_4() { return &___CollisionHandler_4; }
	inline void set_CollisionHandler_4(RuntimeObject* value)
	{
		___CollisionHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CollisionHandler_4), (void*)value);
	}
};


// DigitalRuby.PyroParticles.FireLightScript
struct FireLightScript_tF88E479E792A5631BAF1D2FF37B1098869289062  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single DigitalRuby.PyroParticles.FireLightScript::Seed
	float ___Seed_4;
	// System.Single DigitalRuby.PyroParticles.FireLightScript::IntensityModifier
	float ___IntensityModifier_5;
	// DigitalRuby.PyroParticles.RangeOfFloats DigitalRuby.PyroParticles.FireLightScript::IntensityMaxRange
	RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7  ___IntensityMaxRange_6;
	// UnityEngine.Light DigitalRuby.PyroParticles.FireLightScript::firePointLight
	Light_tA2F349FE839781469A0344CF6039B51512394275 * ___firePointLight_7;
	// System.Single DigitalRuby.PyroParticles.FireLightScript::lightIntensity
	float ___lightIntensity_8;
	// System.Single DigitalRuby.PyroParticles.FireLightScript::seed
	float ___seed_9;
	// DigitalRuby.PyroParticles.FireBaseScript DigitalRuby.PyroParticles.FireLightScript::fireBaseScript
	FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * ___fireBaseScript_10;
	// System.Single DigitalRuby.PyroParticles.FireLightScript::baseY
	float ___baseY_11;

public:
	inline static int32_t get_offset_of_Seed_4() { return static_cast<int32_t>(offsetof(FireLightScript_tF88E479E792A5631BAF1D2FF37B1098869289062, ___Seed_4)); }
	inline float get_Seed_4() const { return ___Seed_4; }
	inline float* get_address_of_Seed_4() { return &___Seed_4; }
	inline void set_Seed_4(float value)
	{
		___Seed_4 = value;
	}

	inline static int32_t get_offset_of_IntensityModifier_5() { return static_cast<int32_t>(offsetof(FireLightScript_tF88E479E792A5631BAF1D2FF37B1098869289062, ___IntensityModifier_5)); }
	inline float get_IntensityModifier_5() const { return ___IntensityModifier_5; }
	inline float* get_address_of_IntensityModifier_5() { return &___IntensityModifier_5; }
	inline void set_IntensityModifier_5(float value)
	{
		___IntensityModifier_5 = value;
	}

	inline static int32_t get_offset_of_IntensityMaxRange_6() { return static_cast<int32_t>(offsetof(FireLightScript_tF88E479E792A5631BAF1D2FF37B1098869289062, ___IntensityMaxRange_6)); }
	inline RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7  get_IntensityMaxRange_6() const { return ___IntensityMaxRange_6; }
	inline RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7 * get_address_of_IntensityMaxRange_6() { return &___IntensityMaxRange_6; }
	inline void set_IntensityMaxRange_6(RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7  value)
	{
		___IntensityMaxRange_6 = value;
	}

	inline static int32_t get_offset_of_firePointLight_7() { return static_cast<int32_t>(offsetof(FireLightScript_tF88E479E792A5631BAF1D2FF37B1098869289062, ___firePointLight_7)); }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * get_firePointLight_7() const { return ___firePointLight_7; }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** get_address_of_firePointLight_7() { return &___firePointLight_7; }
	inline void set_firePointLight_7(Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		___firePointLight_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firePointLight_7), (void*)value);
	}

	inline static int32_t get_offset_of_lightIntensity_8() { return static_cast<int32_t>(offsetof(FireLightScript_tF88E479E792A5631BAF1D2FF37B1098869289062, ___lightIntensity_8)); }
	inline float get_lightIntensity_8() const { return ___lightIntensity_8; }
	inline float* get_address_of_lightIntensity_8() { return &___lightIntensity_8; }
	inline void set_lightIntensity_8(float value)
	{
		___lightIntensity_8 = value;
	}

	inline static int32_t get_offset_of_seed_9() { return static_cast<int32_t>(offsetof(FireLightScript_tF88E479E792A5631BAF1D2FF37B1098869289062, ___seed_9)); }
	inline float get_seed_9() const { return ___seed_9; }
	inline float* get_address_of_seed_9() { return &___seed_9; }
	inline void set_seed_9(float value)
	{
		___seed_9 = value;
	}

	inline static int32_t get_offset_of_fireBaseScript_10() { return static_cast<int32_t>(offsetof(FireLightScript_tF88E479E792A5631BAF1D2FF37B1098869289062, ___fireBaseScript_10)); }
	inline FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * get_fireBaseScript_10() const { return ___fireBaseScript_10; }
	inline FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 ** get_address_of_fireBaseScript_10() { return &___fireBaseScript_10; }
	inline void set_fireBaseScript_10(FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * value)
	{
		___fireBaseScript_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fireBaseScript_10), (void*)value);
	}

	inline static int32_t get_offset_of_baseY_11() { return static_cast<int32_t>(offsetof(FireLightScript_tF88E479E792A5631BAF1D2FF37B1098869289062, ___baseY_11)); }
	inline float get_baseY_11() const { return ___baseY_11; }
	inline float* get_address_of_baseY_11() { return &___baseY_11; }
	inline void set_baseY_11(float value)
	{
		___baseY_11 = value;
	}
};


// GUIManager
struct GUIManager_t951430CCB75B4AF327EF5833F186E4C8C95C1F2F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// LevelReset
struct LevelReset_t5AF897661BE368D93B6E70E28DEC6F45A5B79905  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// MenuSceneLoader
struct MenuSceneLoader_t0D08CE40978A1EAF3F262A54E41A1C6F8FDC3FC2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject MenuSceneLoader::menuUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___menuUI_4;
	// UnityEngine.GameObject MenuSceneLoader::m_Go
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Go_5;

public:
	inline static int32_t get_offset_of_menuUI_4() { return static_cast<int32_t>(offsetof(MenuSceneLoader_t0D08CE40978A1EAF3F262A54E41A1C6F8FDC3FC2, ___menuUI_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_menuUI_4() const { return ___menuUI_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_menuUI_4() { return &___menuUI_4; }
	inline void set_menuUI_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___menuUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___menuUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Go_5() { return static_cast<int32_t>(offsetof(MenuSceneLoader_t0D08CE40978A1EAF3F262A54E41A1C6F8FDC3FC2, ___m_Go_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Go_5() const { return ___m_Go_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Go_5() { return &___m_Go_5; }
	inline void set_m_Go_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Go_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Go_5), (void*)value);
	}
};


// PauseMenu
struct PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Toggle PauseMenu::m_MenuToggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___m_MenuToggle_4;
	// System.Single PauseMenu::m_TimeScaleRef
	float ___m_TimeScaleRef_5;
	// System.Single PauseMenu::m_VolumeRef
	float ___m_VolumeRef_6;
	// System.Boolean PauseMenu::m_Paused
	bool ___m_Paused_7;

public:
	inline static int32_t get_offset_of_m_MenuToggle_4() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___m_MenuToggle_4)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_m_MenuToggle_4() const { return ___m_MenuToggle_4; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_m_MenuToggle_4() { return &___m_MenuToggle_4; }
	inline void set_m_MenuToggle_4(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___m_MenuToggle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MenuToggle_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_TimeScaleRef_5() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___m_TimeScaleRef_5)); }
	inline float get_m_TimeScaleRef_5() const { return ___m_TimeScaleRef_5; }
	inline float* get_address_of_m_TimeScaleRef_5() { return &___m_TimeScaleRef_5; }
	inline void set_m_TimeScaleRef_5(float value)
	{
		___m_TimeScaleRef_5 = value;
	}

	inline static int32_t get_offset_of_m_VolumeRef_6() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___m_VolumeRef_6)); }
	inline float get_m_VolumeRef_6() const { return ___m_VolumeRef_6; }
	inline float* get_address_of_m_VolumeRef_6() { return &___m_VolumeRef_6; }
	inline void set_m_VolumeRef_6(float value)
	{
		___m_VolumeRef_6 = value;
	}

	inline static int32_t get_offset_of_m_Paused_7() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___m_Paused_7)); }
	inline bool get_m_Paused_7() const { return ___m_Paused_7; }
	inline bool* get_address_of_m_Paused_7() { return &___m_Paused_7; }
	inline void set_m_Paused_7(bool value)
	{
		___m_Paused_7 = value;
	}
};


// UnityStandardAssets.SceneUtils.PlaceTargetWithMouse
struct PlaceTargetWithMouse_t384CCC910074BE48EFA5F779E972A03374E97310  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single UnityStandardAssets.SceneUtils.PlaceTargetWithMouse::surfaceOffset
	float ___surfaceOffset_4;
	// UnityEngine.GameObject UnityStandardAssets.SceneUtils.PlaceTargetWithMouse::setTargetOn
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___setTargetOn_5;

public:
	inline static int32_t get_offset_of_surfaceOffset_4() { return static_cast<int32_t>(offsetof(PlaceTargetWithMouse_t384CCC910074BE48EFA5F779E972A03374E97310, ___surfaceOffset_4)); }
	inline float get_surfaceOffset_4() const { return ___surfaceOffset_4; }
	inline float* get_address_of_surfaceOffset_4() { return &___surfaceOffset_4; }
	inline void set_surfaceOffset_4(float value)
	{
		___surfaceOffset_4 = value;
	}

	inline static int32_t get_offset_of_setTargetOn_5() { return static_cast<int32_t>(offsetof(PlaceTargetWithMouse_t384CCC910074BE48EFA5F779E972A03374E97310, ___setTargetOn_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_setTargetOn_5() const { return ___setTargetOn_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_setTargetOn_5() { return &___setTargetOn_5; }
	inline void set_setTargetOn_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___setTargetOn_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setTargetOn_5), (void*)value);
	}
};


// Play
struct Play_t1F2CB09AC2D3EE6C0B59D267A946EB18E3C43810  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] Play::tombol
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___tombol_4;
	// System.Int32 Play::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_tombol_4() { return static_cast<int32_t>(offsetof(Play_t1F2CB09AC2D3EE6C0B59D267A946EB18E3C43810, ___tombol_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_tombol_4() const { return ___tombol_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_tombol_4() { return &___tombol_4; }
	inline void set_tombol_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___tombol_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tombol_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(Play_t1F2CB09AC2D3EE6C0B59D267A946EB18E3C43810, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// SceneAndURLLoader
struct SceneAndURLLoader_t8B9BB2A4140000EE42EA4DEBAAA47DAFB0E18B5E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// PauseMenu SceneAndURLLoader::m_PauseMenu
	PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * ___m_PauseMenu_4;

public:
	inline static int32_t get_offset_of_m_PauseMenu_4() { return static_cast<int32_t>(offsetof(SceneAndURLLoader_t8B9BB2A4140000EE42EA4DEBAAA47DAFB0E18B5E, ___m_PauseMenu_4)); }
	inline PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * get_m_PauseMenu_4() const { return ___m_PauseMenu_4; }
	inline PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 ** get_address_of_m_PauseMenu_4() { return &___m_PauseMenu_4; }
	inline void set_m_PauseMenu_4(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * value)
	{
		___m_PauseMenu_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PauseMenu_4), (void*)value);
	}
};


// UnityStandardAssets.SceneUtils.SlowMoButton
struct SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Sprite UnityStandardAssets.SceneUtils.SlowMoButton::FullSpeedTex
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___FullSpeedTex_4;
	// UnityEngine.Sprite UnityStandardAssets.SceneUtils.SlowMoButton::SlowSpeedTex
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___SlowSpeedTex_5;
	// System.Single UnityStandardAssets.SceneUtils.SlowMoButton::fullSpeed
	float ___fullSpeed_6;
	// System.Single UnityStandardAssets.SceneUtils.SlowMoButton::slowSpeed
	float ___slowSpeed_7;
	// UnityEngine.UI.Button UnityStandardAssets.SceneUtils.SlowMoButton::button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___button_8;
	// System.Boolean UnityStandardAssets.SceneUtils.SlowMoButton::m_SlowMo
	bool ___m_SlowMo_9;

public:
	inline static int32_t get_offset_of_FullSpeedTex_4() { return static_cast<int32_t>(offsetof(SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E, ___FullSpeedTex_4)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_FullSpeedTex_4() const { return ___FullSpeedTex_4; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_FullSpeedTex_4() { return &___FullSpeedTex_4; }
	inline void set_FullSpeedTex_4(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___FullSpeedTex_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullSpeedTex_4), (void*)value);
	}

	inline static int32_t get_offset_of_SlowSpeedTex_5() { return static_cast<int32_t>(offsetof(SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E, ___SlowSpeedTex_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_SlowSpeedTex_5() const { return ___SlowSpeedTex_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_SlowSpeedTex_5() { return &___SlowSpeedTex_5; }
	inline void set_SlowSpeedTex_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___SlowSpeedTex_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SlowSpeedTex_5), (void*)value);
	}

	inline static int32_t get_offset_of_fullSpeed_6() { return static_cast<int32_t>(offsetof(SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E, ___fullSpeed_6)); }
	inline float get_fullSpeed_6() const { return ___fullSpeed_6; }
	inline float* get_address_of_fullSpeed_6() { return &___fullSpeed_6; }
	inline void set_fullSpeed_6(float value)
	{
		___fullSpeed_6 = value;
	}

	inline static int32_t get_offset_of_slowSpeed_7() { return static_cast<int32_t>(offsetof(SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E, ___slowSpeed_7)); }
	inline float get_slowSpeed_7() const { return ___slowSpeed_7; }
	inline float* get_address_of_slowSpeed_7() { return &___slowSpeed_7; }
	inline void set_slowSpeed_7(float value)
	{
		___slowSpeed_7 = value;
	}

	inline static int32_t get_offset_of_button_8() { return static_cast<int32_t>(offsetof(SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E, ___button_8)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_button_8() const { return ___button_8; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_button_8() { return &___button_8; }
	inline void set_button_8(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___button_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_SlowMo_9() { return static_cast<int32_t>(offsetof(SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E, ___m_SlowMo_9)); }
	inline bool get_m_SlowMo_9() const { return ___m_SlowMo_9; }
	inline bool* get_address_of_m_SlowMo_9() { return &___m_SlowMo_9; }
	inline void set_m_SlowMo_9(bool value)
	{
		___m_SlowMo_9 = value;
	}
};


// Switch
struct Switch_tDF3C31A4D27AB56642A943CB649C7E9AAEA048CB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] Switch::tombol
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___tombol_4;
	// System.Int32 Switch::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_tombol_4() { return static_cast<int32_t>(offsetof(Switch_tDF3C31A4D27AB56642A943CB649C7E9AAEA048CB, ___tombol_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_tombol_4() const { return ___tombol_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_tombol_4() { return &___tombol_4; }
	inline void set_tombol_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___tombol_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tombol_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(Switch_tDF3C31A4D27AB56642A943CB649C7E9AAEA048CB, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// alwaysFaceCamera
struct alwaysFaceCamera_t9D7AA414156CAE2B4542895B36DE3F800AAE1157  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform alwaysFaceCamera::camera
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___camera_4;

public:
	inline static int32_t get_offset_of_camera_4() { return static_cast<int32_t>(offsetof(alwaysFaceCamera_t9D7AA414156CAE2B4542895B36DE3F800AAE1157, ___camera_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_camera_4() const { return ___camera_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_camera_4() { return &___camera_4; }
	inline void set_camera_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___camera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camera_4), (void*)value);
	}
};


// lookAt
struct lookAt_t973892DDC94633574DFF99FC44F5F63855E36587  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform lookAt::cam
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___cam_4;

public:
	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(lookAt_t973892DDC94633574DFF99FC44F5F63855E36587, ___cam_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_cam_4() const { return ___cam_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_4), (void*)value);
	}
};


// DigitalRuby.PyroParticles.FireConstantBaseScript
struct FireConstantBaseScript_t578945513113D263C11CC95F1A33EFE7F1545AE2  : public FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9
{
public:
	// DigitalRuby.PyroParticles.LoopingAudioSource DigitalRuby.PyroParticles.FireConstantBaseScript::LoopingAudioSource
	LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * ___LoopingAudioSource_20;

public:
	inline static int32_t get_offset_of_LoopingAudioSource_20() { return static_cast<int32_t>(offsetof(FireConstantBaseScript_t578945513113D263C11CC95F1A33EFE7F1545AE2, ___LoopingAudioSource_20)); }
	inline LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * get_LoopingAudioSource_20() const { return ___LoopingAudioSource_20; }
	inline LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 ** get_address_of_LoopingAudioSource_20() { return &___LoopingAudioSource_20; }
	inline void set_LoopingAudioSource_20(LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * value)
	{
		___LoopingAudioSource_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoopingAudioSource_20), (void*)value);
	}
};


// DigitalRuby.PyroParticles.FireProjectileScript
struct FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1  : public FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9
{
public:
	// UnityEngine.GameObject DigitalRuby.PyroParticles.FireProjectileScript::ProjectileColliderObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ProjectileColliderObject_20;
	// UnityEngine.AudioSource DigitalRuby.PyroParticles.FireProjectileScript::ProjectileCollisionSound
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___ProjectileCollisionSound_21;
	// UnityEngine.ParticleSystem DigitalRuby.PyroParticles.FireProjectileScript::ProjectileExplosionParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___ProjectileExplosionParticleSystem_22;
	// System.Single DigitalRuby.PyroParticles.FireProjectileScript::ProjectileExplosionRadius
	float ___ProjectileExplosionRadius_23;
	// System.Single DigitalRuby.PyroParticles.FireProjectileScript::ProjectileExplosionForce
	float ___ProjectileExplosionForce_24;
	// System.Single DigitalRuby.PyroParticles.FireProjectileScript::ProjectileColliderDelay
	float ___ProjectileColliderDelay_25;
	// System.Single DigitalRuby.PyroParticles.FireProjectileScript::ProjectileColliderSpeed
	float ___ProjectileColliderSpeed_26;
	// UnityEngine.Vector3 DigitalRuby.PyroParticles.FireProjectileScript::ProjectileDirection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___ProjectileDirection_27;
	// UnityEngine.LayerMask DigitalRuby.PyroParticles.FireProjectileScript::ProjectileCollisionLayers
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___ProjectileCollisionLayers_28;
	// UnityEngine.ParticleSystem[] DigitalRuby.PyroParticles.FireProjectileScript::ProjectileDestroyParticleSystemsOnCollision
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* ___ProjectileDestroyParticleSystemsOnCollision_29;
	// DigitalRuby.PyroParticles.FireProjectileCollisionDelegate DigitalRuby.PyroParticles.FireProjectileScript::CollisionDelegate
	FireProjectileCollisionDelegate_t93697D2B8D055503F24A78C706943A06409DF855 * ___CollisionDelegate_30;
	// System.Boolean DigitalRuby.PyroParticles.FireProjectileScript::collided
	bool ___collided_31;

public:
	inline static int32_t get_offset_of_ProjectileColliderObject_20() { return static_cast<int32_t>(offsetof(FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1, ___ProjectileColliderObject_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ProjectileColliderObject_20() const { return ___ProjectileColliderObject_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ProjectileColliderObject_20() { return &___ProjectileColliderObject_20; }
	inline void set_ProjectileColliderObject_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ProjectileColliderObject_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProjectileColliderObject_20), (void*)value);
	}

	inline static int32_t get_offset_of_ProjectileCollisionSound_21() { return static_cast<int32_t>(offsetof(FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1, ___ProjectileCollisionSound_21)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_ProjectileCollisionSound_21() const { return ___ProjectileCollisionSound_21; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_ProjectileCollisionSound_21() { return &___ProjectileCollisionSound_21; }
	inline void set_ProjectileCollisionSound_21(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___ProjectileCollisionSound_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProjectileCollisionSound_21), (void*)value);
	}

	inline static int32_t get_offset_of_ProjectileExplosionParticleSystem_22() { return static_cast<int32_t>(offsetof(FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1, ___ProjectileExplosionParticleSystem_22)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_ProjectileExplosionParticleSystem_22() const { return ___ProjectileExplosionParticleSystem_22; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_ProjectileExplosionParticleSystem_22() { return &___ProjectileExplosionParticleSystem_22; }
	inline void set_ProjectileExplosionParticleSystem_22(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___ProjectileExplosionParticleSystem_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProjectileExplosionParticleSystem_22), (void*)value);
	}

	inline static int32_t get_offset_of_ProjectileExplosionRadius_23() { return static_cast<int32_t>(offsetof(FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1, ___ProjectileExplosionRadius_23)); }
	inline float get_ProjectileExplosionRadius_23() const { return ___ProjectileExplosionRadius_23; }
	inline float* get_address_of_ProjectileExplosionRadius_23() { return &___ProjectileExplosionRadius_23; }
	inline void set_ProjectileExplosionRadius_23(float value)
	{
		___ProjectileExplosionRadius_23 = value;
	}

	inline static int32_t get_offset_of_ProjectileExplosionForce_24() { return static_cast<int32_t>(offsetof(FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1, ___ProjectileExplosionForce_24)); }
	inline float get_ProjectileExplosionForce_24() const { return ___ProjectileExplosionForce_24; }
	inline float* get_address_of_ProjectileExplosionForce_24() { return &___ProjectileExplosionForce_24; }
	inline void set_ProjectileExplosionForce_24(float value)
	{
		___ProjectileExplosionForce_24 = value;
	}

	inline static int32_t get_offset_of_ProjectileColliderDelay_25() { return static_cast<int32_t>(offsetof(FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1, ___ProjectileColliderDelay_25)); }
	inline float get_ProjectileColliderDelay_25() const { return ___ProjectileColliderDelay_25; }
	inline float* get_address_of_ProjectileColliderDelay_25() { return &___ProjectileColliderDelay_25; }
	inline void set_ProjectileColliderDelay_25(float value)
	{
		___ProjectileColliderDelay_25 = value;
	}

	inline static int32_t get_offset_of_ProjectileColliderSpeed_26() { return static_cast<int32_t>(offsetof(FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1, ___ProjectileColliderSpeed_26)); }
	inline float get_ProjectileColliderSpeed_26() const { return ___ProjectileColliderSpeed_26; }
	inline float* get_address_of_ProjectileColliderSpeed_26() { return &___ProjectileColliderSpeed_26; }
	inline void set_ProjectileColliderSpeed_26(float value)
	{
		___ProjectileColliderSpeed_26 = value;
	}

	inline static int32_t get_offset_of_ProjectileDirection_27() { return static_cast<int32_t>(offsetof(FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1, ___ProjectileDirection_27)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_ProjectileDirection_27() const { return ___ProjectileDirection_27; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_ProjectileDirection_27() { return &___ProjectileDirection_27; }
	inline void set_ProjectileDirection_27(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___ProjectileDirection_27 = value;
	}

	inline static int32_t get_offset_of_ProjectileCollisionLayers_28() { return static_cast<int32_t>(offsetof(FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1, ___ProjectileCollisionLayers_28)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_ProjectileCollisionLayers_28() const { return ___ProjectileCollisionLayers_28; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_ProjectileCollisionLayers_28() { return &___ProjectileCollisionLayers_28; }
	inline void set_ProjectileCollisionLayers_28(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___ProjectileCollisionLayers_28 = value;
	}

	inline static int32_t get_offset_of_ProjectileDestroyParticleSystemsOnCollision_29() { return static_cast<int32_t>(offsetof(FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1, ___ProjectileDestroyParticleSystemsOnCollision_29)); }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* get_ProjectileDestroyParticleSystemsOnCollision_29() const { return ___ProjectileDestroyParticleSystemsOnCollision_29; }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7** get_address_of_ProjectileDestroyParticleSystemsOnCollision_29() { return &___ProjectileDestroyParticleSystemsOnCollision_29; }
	inline void set_ProjectileDestroyParticleSystemsOnCollision_29(ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* value)
	{
		___ProjectileDestroyParticleSystemsOnCollision_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProjectileDestroyParticleSystemsOnCollision_29), (void*)value);
	}

	inline static int32_t get_offset_of_CollisionDelegate_30() { return static_cast<int32_t>(offsetof(FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1, ___CollisionDelegate_30)); }
	inline FireProjectileCollisionDelegate_t93697D2B8D055503F24A78C706943A06409DF855 * get_CollisionDelegate_30() const { return ___CollisionDelegate_30; }
	inline FireProjectileCollisionDelegate_t93697D2B8D055503F24A78C706943A06409DF855 ** get_address_of_CollisionDelegate_30() { return &___CollisionDelegate_30; }
	inline void set_CollisionDelegate_30(FireProjectileCollisionDelegate_t93697D2B8D055503F24A78C706943A06409DF855 * value)
	{
		___CollisionDelegate_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CollisionDelegate_30), (void*)value);
	}

	inline static int32_t get_offset_of_collided_31() { return static_cast<int32_t>(offsetof(FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1, ___collided_31)); }
	inline bool get_collided_31() const { return ___collided_31; }
	inline bool* get_address_of_collided_31() { return &___collided_31; }
	inline void set_collided_31(bool value)
	{
		___collided_31 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTargetCache_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTargetCache_11)); }
	inline bool get_m_RaycastTargetCache_11() const { return ___m_RaycastTargetCache_11; }
	inline bool* get_address_of_m_RaycastTargetCache_11() { return &___m_RaycastTargetCache_11; }
	inline void set_m_RaycastTargetCache_11(bool value)
	{
		___m_RaycastTargetCache_11 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_12)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_12() const { return ___m_RaycastPadding_12; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_12() { return &___m_RaycastPadding_12; }
	inline void set_m_RaycastPadding_12(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_12 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_13)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_13() const { return ___m_RectTransform_13; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_13() { return &___m_RectTransform_13; }
	inline void set_m_RectTransform_13(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_14)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_14() const { return ___m_CanvasRenderer_14; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_14() { return &___m_CanvasRenderer_14; }
	inline void set_m_CanvasRenderer_14(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_15)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_15() const { return ___m_Canvas_15; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_15() { return &___m_Canvas_15; }
	inline void set_m_Canvas_15(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_16)); }
	inline bool get_m_VertsDirty_16() const { return ___m_VertsDirty_16; }
	inline bool* get_address_of_m_VertsDirty_16() { return &___m_VertsDirty_16; }
	inline void set_m_VertsDirty_16(bool value)
	{
		___m_VertsDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_17)); }
	inline bool get_m_MaterialDirty_17() const { return ___m_MaterialDirty_17; }
	inline bool* get_address_of_m_MaterialDirty_17() { return &___m_MaterialDirty_17; }
	inline void set_m_MaterialDirty_17(bool value)
	{
		___m_MaterialDirty_17 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_18() const { return ___m_OnDirtyLayoutCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_18() { return &___m_OnDirtyLayoutCallback_18; }
	inline void set_m_OnDirtyLayoutCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_19() const { return ___m_OnDirtyVertsCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_19() { return &___m_OnDirtyVertsCallback_19; }
	inline void set_m_OnDirtyVertsCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_20)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_20() const { return ___m_OnDirtyMaterialCallback_20; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_20() { return &___m_OnDirtyMaterialCallback_20; }
	inline void set_m_OnDirtyMaterialCallback_20(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_23)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_23() const { return ___m_CachedMesh_23; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_23() { return &___m_CachedMesh_23; }
	inline void set_m_CachedMesh_23(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_24)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_24() const { return ___m_CachedUvs_24; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_24() { return &___m_CachedUvs_24; }
	inline void set_m_CachedUvs_24(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_25)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_25() const { return ___m_ColorTweenRunner_25; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_25() { return &___m_ColorTweenRunner_25; }
	inline void set_m_ColorTweenRunner_25(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_26; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_26(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_26 = value;
	}
};


// DigitalRuby.PyroParticles.MeteorSwarmScript
struct MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E  : public FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9
{
public:
	// UnityEngine.GameObject DigitalRuby.PyroParticles.MeteorSwarmScript::MeteorPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___MeteorPrefab_20;
	// UnityEngine.ParticleSystem DigitalRuby.PyroParticles.MeteorSwarmScript::MeteorExplosionParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___MeteorExplosionParticleSystem_21;
	// UnityEngine.ParticleSystem DigitalRuby.PyroParticles.MeteorSwarmScript::MeteorShrapnelParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___MeteorShrapnelParticleSystem_22;
	// UnityEngine.Material[] DigitalRuby.PyroParticles.MeteorSwarmScript::MeteorMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___MeteorMaterials_23;
	// UnityEngine.Mesh[] DigitalRuby.PyroParticles.MeteorSwarmScript::MeteorMeshes
	MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* ___MeteorMeshes_24;
	// System.Single DigitalRuby.PyroParticles.MeteorSwarmScript::DestinationRadius
	float ___DestinationRadius_25;
	// UnityEngine.Vector3 DigitalRuby.PyroParticles.MeteorSwarmScript::Source
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Source_26;
	// System.Single DigitalRuby.PyroParticles.MeteorSwarmScript::SourceRadius
	float ___SourceRadius_27;
	// System.Single DigitalRuby.PyroParticles.MeteorSwarmScript::TimeToImpact
	float ___TimeToImpact_28;
	// DigitalRuby.PyroParticles.RangeOfIntegers DigitalRuby.PyroParticles.MeteorSwarmScript::MeteorsPerSecondRange
	RangeOfIntegers_tA21125C817566A8E1BF46B7668F4F572A2F46CD4  ___MeteorsPerSecondRange_29;
	// DigitalRuby.PyroParticles.RangeOfFloats DigitalRuby.PyroParticles.MeteorSwarmScript::ScaleRange
	RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7  ___ScaleRange_30;
	// DigitalRuby.PyroParticles.RangeOfFloats DigitalRuby.PyroParticles.MeteorSwarmScript::MeteorLifeTimeRange
	RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7  ___MeteorLifeTimeRange_31;
	// UnityEngine.AudioClip[] DigitalRuby.PyroParticles.MeteorSwarmScript::EmissionSounds
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___EmissionSounds_32;
	// UnityEngine.AudioClip[] DigitalRuby.PyroParticles.MeteorSwarmScript::ExplosionSounds
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___ExplosionSounds_33;
	// DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate DigitalRuby.PyroParticles.MeteorSwarmScript::CollisionDelegate
	MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * ___CollisionDelegate_34;
	// System.Single DigitalRuby.PyroParticles.MeteorSwarmScript::elapsedSecond
	float ___elapsedSecond_35;

public:
	inline static int32_t get_offset_of_MeteorPrefab_20() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E, ___MeteorPrefab_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_MeteorPrefab_20() const { return ___MeteorPrefab_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_MeteorPrefab_20() { return &___MeteorPrefab_20; }
	inline void set_MeteorPrefab_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___MeteorPrefab_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MeteorPrefab_20), (void*)value);
	}

	inline static int32_t get_offset_of_MeteorExplosionParticleSystem_21() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E, ___MeteorExplosionParticleSystem_21)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_MeteorExplosionParticleSystem_21() const { return ___MeteorExplosionParticleSystem_21; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_MeteorExplosionParticleSystem_21() { return &___MeteorExplosionParticleSystem_21; }
	inline void set_MeteorExplosionParticleSystem_21(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___MeteorExplosionParticleSystem_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MeteorExplosionParticleSystem_21), (void*)value);
	}

	inline static int32_t get_offset_of_MeteorShrapnelParticleSystem_22() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E, ___MeteorShrapnelParticleSystem_22)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_MeteorShrapnelParticleSystem_22() const { return ___MeteorShrapnelParticleSystem_22; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_MeteorShrapnelParticleSystem_22() { return &___MeteorShrapnelParticleSystem_22; }
	inline void set_MeteorShrapnelParticleSystem_22(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___MeteorShrapnelParticleSystem_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MeteorShrapnelParticleSystem_22), (void*)value);
	}

	inline static int32_t get_offset_of_MeteorMaterials_23() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E, ___MeteorMaterials_23)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_MeteorMaterials_23() const { return ___MeteorMaterials_23; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_MeteorMaterials_23() { return &___MeteorMaterials_23; }
	inline void set_MeteorMaterials_23(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___MeteorMaterials_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MeteorMaterials_23), (void*)value);
	}

	inline static int32_t get_offset_of_MeteorMeshes_24() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E, ___MeteorMeshes_24)); }
	inline MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* get_MeteorMeshes_24() const { return ___MeteorMeshes_24; }
	inline MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8** get_address_of_MeteorMeshes_24() { return &___MeteorMeshes_24; }
	inline void set_MeteorMeshes_24(MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* value)
	{
		___MeteorMeshes_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MeteorMeshes_24), (void*)value);
	}

	inline static int32_t get_offset_of_DestinationRadius_25() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E, ___DestinationRadius_25)); }
	inline float get_DestinationRadius_25() const { return ___DestinationRadius_25; }
	inline float* get_address_of_DestinationRadius_25() { return &___DestinationRadius_25; }
	inline void set_DestinationRadius_25(float value)
	{
		___DestinationRadius_25 = value;
	}

	inline static int32_t get_offset_of_Source_26() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E, ___Source_26)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Source_26() const { return ___Source_26; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Source_26() { return &___Source_26; }
	inline void set_Source_26(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Source_26 = value;
	}

	inline static int32_t get_offset_of_SourceRadius_27() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E, ___SourceRadius_27)); }
	inline float get_SourceRadius_27() const { return ___SourceRadius_27; }
	inline float* get_address_of_SourceRadius_27() { return &___SourceRadius_27; }
	inline void set_SourceRadius_27(float value)
	{
		___SourceRadius_27 = value;
	}

	inline static int32_t get_offset_of_TimeToImpact_28() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E, ___TimeToImpact_28)); }
	inline float get_TimeToImpact_28() const { return ___TimeToImpact_28; }
	inline float* get_address_of_TimeToImpact_28() { return &___TimeToImpact_28; }
	inline void set_TimeToImpact_28(float value)
	{
		___TimeToImpact_28 = value;
	}

	inline static int32_t get_offset_of_MeteorsPerSecondRange_29() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E, ___MeteorsPerSecondRange_29)); }
	inline RangeOfIntegers_tA21125C817566A8E1BF46B7668F4F572A2F46CD4  get_MeteorsPerSecondRange_29() const { return ___MeteorsPerSecondRange_29; }
	inline RangeOfIntegers_tA21125C817566A8E1BF46B7668F4F572A2F46CD4 * get_address_of_MeteorsPerSecondRange_29() { return &___MeteorsPerSecondRange_29; }
	inline void set_MeteorsPerSecondRange_29(RangeOfIntegers_tA21125C817566A8E1BF46B7668F4F572A2F46CD4  value)
	{
		___MeteorsPerSecondRange_29 = value;
	}

	inline static int32_t get_offset_of_ScaleRange_30() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E, ___ScaleRange_30)); }
	inline RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7  get_ScaleRange_30() const { return ___ScaleRange_30; }
	inline RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7 * get_address_of_ScaleRange_30() { return &___ScaleRange_30; }
	inline void set_ScaleRange_30(RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7  value)
	{
		___ScaleRange_30 = value;
	}

	inline static int32_t get_offset_of_MeteorLifeTimeRange_31() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E, ___MeteorLifeTimeRange_31)); }
	inline RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7  get_MeteorLifeTimeRange_31() const { return ___MeteorLifeTimeRange_31; }
	inline RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7 * get_address_of_MeteorLifeTimeRange_31() { return &___MeteorLifeTimeRange_31; }
	inline void set_MeteorLifeTimeRange_31(RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7  value)
	{
		___MeteorLifeTimeRange_31 = value;
	}

	inline static int32_t get_offset_of_EmissionSounds_32() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E, ___EmissionSounds_32)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_EmissionSounds_32() const { return ___EmissionSounds_32; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_EmissionSounds_32() { return &___EmissionSounds_32; }
	inline void set_EmissionSounds_32(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___EmissionSounds_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmissionSounds_32), (void*)value);
	}

	inline static int32_t get_offset_of_ExplosionSounds_33() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E, ___ExplosionSounds_33)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_ExplosionSounds_33() const { return ___ExplosionSounds_33; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_ExplosionSounds_33() { return &___ExplosionSounds_33; }
	inline void set_ExplosionSounds_33(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___ExplosionSounds_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExplosionSounds_33), (void*)value);
	}

	inline static int32_t get_offset_of_CollisionDelegate_34() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E, ___CollisionDelegate_34)); }
	inline MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * get_CollisionDelegate_34() const { return ___CollisionDelegate_34; }
	inline MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 ** get_address_of_CollisionDelegate_34() { return &___CollisionDelegate_34; }
	inline void set_CollisionDelegate_34(MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * value)
	{
		___CollisionDelegate_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CollisionDelegate_34), (void*)value);
	}

	inline static int32_t get_offset_of_elapsedSecond_35() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E, ___elapsedSecond_35)); }
	inline float get_elapsedSecond_35() const { return ___elapsedSecond_35; }
	inline float* get_address_of_elapsedSecond_35() { return &___elapsedSecond_35; }
	inline void set_elapsedSecond_35(float value)
	{
		___elapsedSecond_35 = value;
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_36;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_27)); }
	inline bool get_m_ShouldRecalculateStencil_27() const { return ___m_ShouldRecalculateStencil_27; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_27() { return &___m_ShouldRecalculateStencil_27; }
	inline void set_m_ShouldRecalculateStencil_27(bool value)
	{
		___m_ShouldRecalculateStencil_27 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_28)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_28() const { return ___m_MaskMaterial_28; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_28() { return &___m_MaskMaterial_28; }
	inline void set_m_MaskMaterial_28(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_29)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_29() const { return ___m_ParentMask_29; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_29() { return &___m_ParentMask_29; }
	inline void set_m_ParentMask_29(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_30)); }
	inline bool get_m_Maskable_30() const { return ___m_Maskable_30; }
	inline bool* get_address_of_m_Maskable_30() { return &___m_Maskable_30; }
	inline void set_m_Maskable_30(bool value)
	{
		___m_Maskable_30 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_31)); }
	inline bool get_m_IsMaskingGraphic_31() const { return ___m_IsMaskingGraphic_31; }
	inline bool* get_address_of_m_IsMaskingGraphic_31() { return &___m_IsMaskingGraphic_31; }
	inline void set_m_IsMaskingGraphic_31(bool value)
	{
		___m_IsMaskingGraphic_31 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_32)); }
	inline bool get_m_IncludeForMasking_32() const { return ___m_IncludeForMasking_32; }
	inline bool* get_address_of_m_IncludeForMasking_32() { return &___m_IncludeForMasking_32; }
	inline void set_m_IncludeForMasking_32(bool value)
	{
		___m_IncludeForMasking_32 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_33)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_33() const { return ___m_OnCullStateChanged_33; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_33() { return &___m_OnCullStateChanged_33; }
	inline void set_m_OnCullStateChanged_33(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_34)); }
	inline bool get_m_ShouldRecalculate_34() const { return ___m_ShouldRecalculate_34; }
	inline bool* get_address_of_m_ShouldRecalculate_34() { return &___m_ShouldRecalculate_34; }
	inline void set_m_ShouldRecalculate_34(bool value)
	{
		___m_ShouldRecalculate_34 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_35)); }
	inline int32_t get_m_StencilValue_35() const { return ___m_StencilValue_35; }
	inline int32_t* get_address_of_m_StencilValue_35() { return &___m_StencilValue_35; }
	inline void set_m_StencilValue_35(int32_t value)
	{
		___m_StencilValue_35 = value;
	}

	inline static int32_t get_offset_of_m_Corners_36() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_36)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_36() const { return ___m_Corners_36; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_36() { return &___m_Corners_36; }
	inline void set_m_Corners_36(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_36), (void*)value);
	}
};


// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;

public:
	inline static int32_t get_offset_of_toggleTransition_20() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___toggleTransition_20)); }
	inline int32_t get_toggleTransition_20() const { return ___toggleTransition_20; }
	inline int32_t* get_address_of_toggleTransition_20() { return &___toggleTransition_20; }
	inline void set_toggleTransition_20(int32_t value)
	{
		___toggleTransition_20 = value;
	}

	inline static int32_t get_offset_of_graphic_21() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___graphic_21)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_graphic_21() const { return ___graphic_21; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_graphic_21() { return &___graphic_21; }
	inline void set_graphic_21(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___graphic_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphic_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Group_22() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_Group_22)); }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * get_m_Group_22() const { return ___m_Group_22; }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 ** get_address_of_m_Group_22() { return &___m_Group_22; }
	inline void set_m_Group_22(ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * value)
	{
		___m_Group_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Group_22), (void*)value);
	}

	inline static int32_t get_offset_of_onValueChanged_23() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___onValueChanged_23)); }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * get_onValueChanged_23() const { return ___onValueChanged_23; }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 ** get_address_of_onValueChanged_23() { return &___onValueChanged_23; }
	inline void set_onValueChanged_23(ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * value)
	{
		___onValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onValueChanged_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsOn_24() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_IsOn_24)); }
	inline bool get_m_IsOn_24() const { return ___m_IsOn_24; }
	inline bool* get_address_of_m_IsOn_24() { return &___m_IsOn_24; }
	inline void set_m_IsOn_24(bool value)
	{
		___m_IsOn_24 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;

public:
	inline static int32_t get_offset_of_m_Sprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_38() const { return ___m_Sprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_38() { return &___m_Sprite_38; }
	inline void set_m_Sprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_39)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_39() const { return ___m_OverrideSprite_39; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_39() { return &___m_OverrideSprite_39; }
	inline void set_m_OverrideSprite_39(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_40)); }
	inline int32_t get_m_Type_40() const { return ___m_Type_40; }
	inline int32_t* get_address_of_m_Type_40() { return &___m_Type_40; }
	inline void set_m_Type_40(int32_t value)
	{
		___m_Type_40 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_41)); }
	inline bool get_m_PreserveAspect_41() const { return ___m_PreserveAspect_41; }
	inline bool* get_address_of_m_PreserveAspect_41() { return &___m_PreserveAspect_41; }
	inline void set_m_PreserveAspect_41(bool value)
	{
		___m_PreserveAspect_41 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_42)); }
	inline bool get_m_FillCenter_42() const { return ___m_FillCenter_42; }
	inline bool* get_address_of_m_FillCenter_42() { return &___m_FillCenter_42; }
	inline void set_m_FillCenter_42(bool value)
	{
		___m_FillCenter_42 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_43)); }
	inline int32_t get_m_FillMethod_43() const { return ___m_FillMethod_43; }
	inline int32_t* get_address_of_m_FillMethod_43() { return &___m_FillMethod_43; }
	inline void set_m_FillMethod_43(int32_t value)
	{
		___m_FillMethod_43 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_44)); }
	inline float get_m_FillAmount_44() const { return ___m_FillAmount_44; }
	inline float* get_address_of_m_FillAmount_44() { return &___m_FillAmount_44; }
	inline void set_m_FillAmount_44(float value)
	{
		___m_FillAmount_44 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_45)); }
	inline bool get_m_FillClockwise_45() const { return ___m_FillClockwise_45; }
	inline bool* get_address_of_m_FillClockwise_45() { return &___m_FillClockwise_45; }
	inline void set_m_FillClockwise_45(bool value)
	{
		___m_FillClockwise_45 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_46)); }
	inline int32_t get_m_FillOrigin_46() const { return ___m_FillOrigin_46; }
	inline int32_t* get_address_of_m_FillOrigin_46() { return &___m_FillOrigin_46; }
	inline void set_m_FillOrigin_46(int32_t value)
	{
		___m_FillOrigin_46 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_47)); }
	inline float get_m_AlphaHitTestMinimumThreshold_47() const { return ___m_AlphaHitTestMinimumThreshold_47; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_47() { return &___m_AlphaHitTestMinimumThreshold_47; }
	inline void set_m_AlphaHitTestMinimumThreshold_47(float value)
	{
		___m_AlphaHitTestMinimumThreshold_47 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_48)); }
	inline bool get_m_Tracked_48() const { return ___m_Tracked_48; }
	inline bool* get_address_of_m_Tracked_48() { return &___m_Tracked_48; }
	inline void set_m_Tracked_48(bool value)
	{
		___m_Tracked_48 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_49)); }
	inline bool get_m_UseSpriteMesh_49() const { return ___m_UseSpriteMesh_49; }
	inline bool* get_address_of_m_UseSpriteMesh_49() { return &___m_UseSpriteMesh_49; }
	inline void set_m_UseSpriteMesh_49(bool value)
	{
		___m_UseSpriteMesh_49 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_50)); }
	inline float get_m_PixelsPerUnitMultiplier_50() const { return ___m_PixelsPerUnitMultiplier_50; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_50() { return &___m_PixelsPerUnitMultiplier_50; }
	inline void set_m_PixelsPerUnitMultiplier_50(float value)
	{
		___m_PixelsPerUnitMultiplier_50 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_51)); }
	inline float get_m_CachedReferencePixelsPerUnit_51() const { return ___m_CachedReferencePixelsPerUnit_51; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_51() { return &___m_CachedReferencePixelsPerUnit_51; }
	inline void set_m_CachedReferencePixelsPerUnit_51(float value)
	{
		___m_CachedReferencePixelsPerUnit_51 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_43;

public:
	inline static int32_t get_offset_of_m_FontData_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_37)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_37() const { return ___m_FontData_37; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_37() { return &___m_FontData_37; }
	inline void set_m_FontData_37(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_39() const { return ___m_TextCache_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_39() { return &___m_TextCache_39; }
	inline void set_m_TextCache_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_40)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_40() const { return ___m_TextCacheForLayout_40; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_40() { return &___m_TextCacheForLayout_40; }
	inline void set_m_TextCacheForLayout_40(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_42)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_42() const { return ___m_DisableFontTextureRebuiltCallback_42; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_42() { return &___m_DisableFontTextureRebuiltCallback_42; }
	inline void set_m_DisableFontTextureRebuiltCallback_42(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_42 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_43() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_43)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_43() const { return ___m_TempVerts_43; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_43() { return &___m_TempVerts_43; }
	inline void set_m_TempVerts_43(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_43), (void*)value);
	}
};


// <Module>


// <Module>


// System.Object


// System.Object


// UnityEngine.EventSystems.AbstractEventData


// UnityEngine.EventSystems.AbstractEventData

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// System.Attribute


// System.Attribute


// DigitalRuby.PyroParticles.LoopingAudioSource


// DigitalRuby.PyroParticles.LoopingAudioSource


// System.String

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


// System.String


// System.ValueType


// System.ValueType


// UnityEngine.YieldInstruction


// UnityEngine.YieldInstruction


// DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12


// DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12


// DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12


// DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12


// DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22


// DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22


// DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18


// DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18


// UnityEngine.EventSystems.BaseEventData


// UnityEngine.EventSystems.BaseEventData


// System.Boolean

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


// System.Boolean


// UnityEngine.Color


// UnityEngine.Color


// System.Enum

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


// System.Enum


// System.Int32


// System.Int32


// System.IntPtr

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


// System.IntPtr


// UnityEngine.LayerMask


// UnityEngine.LayerMask


// UnityEngine.PropertyAttribute


// UnityEngine.PropertyAttribute


// UnityEngine.Quaternion

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Quaternion


// DigitalRuby.PyroParticles.RangeOfFloats


// DigitalRuby.PyroParticles.RangeOfFloats


// DigitalRuby.PyroParticles.RangeOfIntegers


// DigitalRuby.PyroParticles.RangeOfIntegers


// UnityEngine.SceneManagement.Scene


// UnityEngine.SceneManagement.Scene


// System.Single


// System.Single


// UnityEngine.UI.SpriteState


// UnityEngine.UI.SpriteState


// UnityEngine.Vector2

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2


// UnityEngine.Vector3

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector3


// UnityEngine.Vector4

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.Vector4


// System.Void


// System.Void


// UnityEngine.WaitForSeconds


// UnityEngine.WaitForSeconds


// UnityEngine.ParticleSystem/MainModule


// UnityEngine.ParticleSystem/MainModule


// UnityEngine.Collision


// UnityEngine.Collision


// UnityEngine.UI.ColorBlock

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.UI.ColorBlock


// UnityEngine.ContactPoint


// UnityEngine.ContactPoint


// UnityEngine.Coroutine


// UnityEngine.Coroutine


// System.Delegate


// System.Delegate


// System.Exception

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


// System.Exception


// UnityEngine.KeyCode


// UnityEngine.KeyCode


// UnityEngine.Object

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};


// UnityEngine.Object


// UnityEngine.ParticleSystemCurveMode


// UnityEngine.ParticleSystemCurveMode


// UnityEngine.Ray


// UnityEngine.Ray


// UnityEngine.RaycastHit


// UnityEngine.RaycastHit


// UnityEngine.EventSystems.RaycastResult


// UnityEngine.EventSystems.RaycastResult


// DigitalRuby.PyroParticles.SingleLineAttribute


// DigitalRuby.PyroParticles.SingleLineAttribute


// UnityEngine.UI.Image/FillMethod


// UnityEngine.UI.Image/FillMethod


// UnityEngine.UI.Image/Type


// UnityEngine.UI.Image/Type


// UnityEngine.UI.Navigation/Mode


// UnityEngine.UI.Navigation/Mode


// UnityEngine.EventSystems.PointerEventData/InputButton


// UnityEngine.EventSystems.PointerEventData/InputButton


// UnityEngine.UI.Selectable/Transition


// UnityEngine.UI.Selectable/Transition


// UnityEngine.UI.Toggle/ToggleTransition


// UnityEngine.UI.Toggle/ToggleTransition


// UnityEngine.AudioClip


// UnityEngine.AudioClip


// UnityEngine.Component


// UnityEngine.Component


// UnityEngine.GameObject


// UnityEngine.GameObject


// UnityEngine.Material


// UnityEngine.Material


// UnityEngine.Mesh


// UnityEngine.Mesh


// System.MulticastDelegate


// System.MulticastDelegate


// UnityEngine.UI.Navigation


// UnityEngine.UI.Navigation


// UnityEngine.EventSystems.PointerEventData


// UnityEngine.EventSystems.PointerEventData


// UnityEngine.Sprite


// UnityEngine.Sprite


// System.SystemException


// System.SystemException


// UnityEngine.ParticleSystem/MinMaxCurve


// UnityEngine.ParticleSystem/MinMaxCurve


// System.AsyncCallback


// System.AsyncCallback


// UnityEngine.Behaviour


// UnityEngine.Behaviour


// UnityEngine.Collider


// UnityEngine.Collider


// DigitalRuby.PyroParticles.FireProjectileCollisionDelegate


// DigitalRuby.PyroParticles.FireProjectileCollisionDelegate


// UnityEngine.MeshFilter


// UnityEngine.MeshFilter


// DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate


// DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate


// System.NotSupportedException


// System.NotSupportedException


// UnityEngine.ParticleSystem


// UnityEngine.ParticleSystem


// UnityEngine.Renderer


// UnityEngine.Renderer


// UnityEngine.Rigidbody


// UnityEngine.Rigidbody


// UnityEngine.Transform


// UnityEngine.Transform


// UnityEngine.AudioBehaviour


// UnityEngine.AudioBehaviour


// UnityEngine.Camera

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Camera


// UnityEngine.Light


// UnityEngine.Light


// UnityEngine.MonoBehaviour


// UnityEngine.MonoBehaviour


// UnityEngine.TrailRenderer


// UnityEngine.TrailRenderer


// UnityEngine.AudioSource


// UnityEngine.AudioSource


// CameraSwitch


// CameraSwitch


// Editor


// Editor


// DigitalRuby.PyroParticles.FireBaseScript


// DigitalRuby.PyroParticles.FireBaseScript


// DigitalRuby.PyroParticles.FireCollisionForwardScript


// DigitalRuby.PyroParticles.FireCollisionForwardScript


// DigitalRuby.PyroParticles.FireLightScript


// DigitalRuby.PyroParticles.FireLightScript


// GUIManager


// GUIManager


// LevelReset


// LevelReset


// MenuSceneLoader


// MenuSceneLoader


// PauseMenu


// PauseMenu


// UnityStandardAssets.SceneUtils.PlaceTargetWithMouse


// UnityStandardAssets.SceneUtils.PlaceTargetWithMouse


// Play


// Play


// SceneAndURLLoader


// SceneAndURLLoader


// UnityStandardAssets.SceneUtils.SlowMoButton


// UnityStandardAssets.SceneUtils.SlowMoButton


// Switch


// Switch


// UnityEngine.EventSystems.UIBehaviour


// UnityEngine.EventSystems.UIBehaviour


// alwaysFaceCamera


// alwaysFaceCamera


// lookAt


// lookAt


// DigitalRuby.PyroParticles.FireConstantBaseScript


// DigitalRuby.PyroParticles.FireConstantBaseScript


// DigitalRuby.PyroParticles.FireProjectileScript


// DigitalRuby.PyroParticles.FireProjectileScript


// UnityEngine.UI.Graphic

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_22;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_21)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_21() const { return ___s_Mesh_21; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_21() { return &___s_Mesh_21; }
	inline void set_s_Mesh_21(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_22)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_22() const { return ___s_VertexHelper_22; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_22() { return &___s_VertexHelper_22; }
	inline void set_s_VertexHelper_22(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_22), (void*)value);
	}
};


// UnityEngine.UI.Graphic


// DigitalRuby.PyroParticles.MeteorSwarmScript


// DigitalRuby.PyroParticles.MeteorSwarmScript


// UnityEngine.UI.Selectable

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Selectable


// UnityEngine.UI.Button


// UnityEngine.UI.Button


// UnityEngine.UI.MaskableGraphic


// UnityEngine.UI.MaskableGraphic


// UnityEngine.UI.Toggle


// UnityEngine.UI.Toggle


// UnityEngine.UI.Image

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_37)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_37() const { return ___s_ETC1DefaultUI_37; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_37() { return &___s_ETC1DefaultUI_37; }
	inline void set_s_ETC1DefaultUI_37(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_52() const { return ___s_VertScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_52() { return &___s_VertScratch_52; }
	inline void set_s_VertScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_53)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_53() const { return ___s_UVScratch_53; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_53() { return &___s_UVScratch_53; }
	inline void set_s_UVScratch_53(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_54() const { return ___s_Xy_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_54() { return &___s_Xy_54; }
	inline void set_s_Xy_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_54), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_55)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_55() const { return ___s_Uv_55; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_55() { return &___s_Uv_55; }
	inline void set_s_Uv_55(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_55), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_56)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_56() const { return ___m_TrackedTexturelessImages_56; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_56() { return &___m_TrackedTexturelessImages_56; }
	inline void set_m_TrackedTexturelessImages_56(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_56), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_57() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_57)); }
	inline bool get_s_Initialized_57() const { return ___s_Initialized_57; }
	inline bool* get_address_of_s_Initialized_57() { return &___s_Initialized_57; }
	inline void set_s_Initialized_57(bool value)
	{
		___s_Initialized_57 = value;
	}
};


// UnityEngine.UI.Image


// UnityEngine.UI.Text

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_41;

public:
	inline static int32_t get_offset_of_s_DefaultText_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_41)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_41() const { return ___s_DefaultText_41; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_41() { return &___s_DefaultText_41; }
	inline void set_s_DefaultText_41(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_41), (void*)value);
	}
};


// UnityEngine.UI.Text

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * m_Items[1];

public:
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * m_Items[1];

public:
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
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
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  m_Items[1];

public:
	inline ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * m_Items[1];

public:
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_t8927C00353A72755313F046D0CE85178AE8218EE * m_Items[1];

public:
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Mesh[]
struct MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * m_Items[1];

public:
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisRuntimeObject_m9FC706DF8C6CE04BB858B1C472135E4D053D05C6_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m565E2A2E28EE3B4621B2F5C662D569D56A3AE99F_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);

// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCleanupEverythingCoRoutineU3Ed__12__ctor_m9A356857E81380EB9CEDC3AB846A44D18A714DA3 (U3CCleanupEverythingCoRoutineU3Ed__12_t7932D7215487FF0301D02ECA9017F1897A3D7B61 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.ParticleSystem>()
inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* GameObject_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5D162A911D8F5C1BAB92301936B1551BBA72BFF6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared)(__this, method);
}
// System.Int32 System.Array::IndexOf<UnityEngine.ParticleSystem>(!!0[],!!0)
inline int32_t Array_IndexOf_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m8E200D5B4EAD18002F7DBC1F26768BDA0CDF0AD9 (ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* ___array0, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7*, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *, const RuntimeMethod*))Array_IndexOf_TisRuntimeObject_m9FC706DF8C6CE04BB858B1C472135E4D053D05C6_gshared)(___array0, ___value1, method);
}
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  MainModule_get_startDelay_m6CA464DDA126D5A848376094643AEB097BDF204C (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.ParticleSystem/MinMaxCurve::get_constant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxCurve_get_constant_mBC0C29DF6F1C6C999931E28BC1F8DD26BD3BB624 (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_constant(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constant_mC6A5CB5126DC864D5E675A369CC012DAAF04CEC4 (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/MainModule::set_startDelay(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startDelay_m95CEAEE97E462DEAF4787B9C6AD6389D9912F93A (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.FireBaseScript::set_Starting(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireBaseScript_set_Starting_mB0599A55FC150BD87CDF3A07C4082A8DAFACC729_inline (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m625745100E4E629E5AD558F0B7D39443B83AB99C (String_t* ___layerName0, const RuntimeMethod* method);
// System.Void UnityEngine.Physics::IgnoreLayerCollision(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_IgnoreLayerCollision_m4F9369FFB51FF3E5A019D242CCF50FBFEE318ECC (int32_t ___layer10, int32_t ___layer21, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.FireBaseScript::CreateExplosion(UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_CreateExplosion_m330741AF1B8CE11C879D47F18B5399829F6D39B6 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, float ___radius1, float ___force2, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.FireBaseScript::StartParticleSystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_StartParticleSystems_mA69CE75A2634759D3C2405F84B9E34C62A106B5B (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<DigitalRuby.PyroParticles.FireCollisionForwardScript>()
inline FireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D * Component_GetComponentInChildren_TisFireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D_m7BA28FA658C6AB6EDE447B626AFA6F733EBEA487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  FireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1 (const RuntimeMethod* method);
// System.Boolean DigitalRuby.PyroParticles.FireBaseScript::get_Stopping()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FireBaseScript_get_Stopping_m1592C1C93745E8FEB265172F0CAD5666AD6DAE91_inline (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.FireBaseScript::set_StopPercent(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireBaseScript_set_StopPercent_m75C9FC3F5FFC266AAAACB10C2350DA3A2F08119B_inline (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean DigitalRuby.PyroParticles.FireBaseScript::get_Starting()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FireBaseScript_get_Starting_m1AB905289A960AE1C86B24C57E6B72C4E108CA55_inline (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.FireBaseScript::set_StartPercent(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireBaseScript_set_StartPercent_m12A6FB26D859193B99A97A85290D1BF77F59298A_inline (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* Physics_OverlapSphere_m885BB636D248BA40DF5758A7AA108C010A942E62 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___radius1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::AddExplosionForce(System.Single,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddExplosionForce_m8B6FFD506CCCDD31C8C018A4B635E82B5499648F (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, float ___explosionForce0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___explosionPosition1, float ___explosionRadius2, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.FireBaseScript::set_Stopping(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireBaseScript_set_Stopping_mC4E23890C57F1955717CCF36E801307492A32F52_inline (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator DigitalRuby.PyroParticles.FireBaseScript::CleanupEverythingCoRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FireBaseScript_CleanupEverythingCoRoutine_m49964DAEF51993BE145D349CA2317FCD08CA2973 (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.FireBaseScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_Awake_m21C5A894E231C4FACE9F6DE4E6DA58477F1983E5 (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::.ctor(UnityEngine.MonoBehaviour,UnityEngine.AudioSource,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource__ctor_m9BE259D1A4326C2450656F561AB7AD66F50FABB6 (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * __this, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___script0, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource1, float ___startMultiplier2, float ___stopMultiplier3, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.FireBaseScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_Update_m40D5270BB955C2E7BB1B7106C88D545685565446 (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_Update_mE0BC4667F8BCB2ECA598D6A041325E3497F4F2D1 (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * __this, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.FireBaseScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_Start_mBA77B28BAAEF2C0388EC9664D0D22BF46F44D7D3 (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_Play_m74FF004BD3F9FC7A1ED2BB07D0C472F530D71F8F (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * __this, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_Stop_m03A289AB4F45BD7F8621CB07FD9F348D48ED93B5 (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * __this, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.FireBaseScript::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_Stop_m71A98AF1046B3DC4FDCD689E14B8963F80EF7B25 (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.FireBaseScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript__ctor_mBAE6ECAF6DBCB371607FB582D92933AC16E5F847 (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.Light>()
inline Light_tA2F349FE839781469A0344CF6039B51512394275 * GameObject_GetComponentInChildren_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m565B248E11FDCE3D39D0B85F419258D461715C95 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Light_tA2F349FE839781469A0344CF6039B51512394275 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_mFABC9E1EA23E954E1072233C33C2211D64262326 (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_m372D5B9494809AFAD717B2707957DD1478C52DFC (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_mD4A68FBBD1D26CB7CDAC1FA1C19DB2D66D44C567 (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<DigitalRuby.PyroParticles.FireBaseScript>()
inline FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * GameObject_GetComponent_TisFireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9_m91F60804FDE3D82AE4DD2751B0037C9C01BDB0BD (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Single DigitalRuby.PyroParticles.FireBaseScript::get_StopPercent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FireBaseScript_get_StopPercent_m45EFE5EBC4E03026FA6AA2AC63A9AAACDF2649EA_inline (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m04D5C368C4E4F1AB78230C6809A6651951A52C86 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Single DigitalRuby.PyroParticles.FireBaseScript::get_StartPercent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FireBaseScript_get_StartPercent_mFE89E8A6B7BE34AC2615F9BDF3B9D292DAA860D9_inline (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m52C9390086344FA8787001ED5911550D850CE515 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_m1684D3DDBD0A8518FFBA5F042D04E480C1CD2977 (float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m5EA831B060853D4246B8394A30599A0021F80AFF (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_mD84FDFCD32FC48C865A89FD4251232E2A9D7015A (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCollisionAfterDelayU3Ed__12__ctor_m48C5F03E41B8736D72D7A262B4D63ECF1EBA19BA (U3CSendCollisionAfterDelayU3Ed__12_tE61D4A4F52D44C89486DA9D815F14F712F2723EF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator DigitalRuby.PyroParticles.FireProjectileScript::SendCollisionAfterDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FireProjectileScript_SendCollisionAfterDelay_m1FB6585DA773CDDA030248A6116C537CA577DB76 (FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m751253D644DC9A2E111E5B57921992035E5D8401 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// UnityEngine.ContactPoint[] UnityEngine.Collision::get_contacts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* Collision_get_contacts_m8C3D39F3332DD2AC623A9FB5F2127CE2754AF54B (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ContactPoint_get_point_mEA976D5E3BC57FAB78F68BE0AA17A97293AEA5BC (ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.FireProjectileCollisionDelegate::Invoke(DigitalRuby.PyroParticles.FireProjectileScript,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireProjectileCollisionDelegate_Invoke_m990E632B0659B078D2D5719043E3426C58F35CE3 (FireProjectileCollisionDelegate_t93697D2B8D055503F24A78C706943A06409DF855 * __this, FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 * ___script0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_mA6722B0932DA770D5C34C9E28D0E40220F099D50 (const RuntimeMethod* method);
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  LayerMask_op_Implicit_m04FD003A196C7FA5C824D854803493EA31AE58D2 (int32_t ___intVal0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4 (String_t* ___sceneName0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetSceneAt_m0C00F498AF9AF1B29CC263BAB2C64A1B571648B7 (int32_t ___index0, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::set_AudioSource(UnityEngine.AudioSource)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoopingAudioSource_set_AudioSource_m93A8EB2543C66BD177679409E8D60361883F9D57_inline (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * __this, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___value0, const RuntimeMethod* method);
// UnityEngine.AudioSource DigitalRuby.PyroParticles.LoopingAudioSource::get_AudioSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * LoopingAudioSource_get_AudioSource_m036098B24FF9EA542E870E359726B78C16B9649B_inline (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::set_TargetVolume(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoopingAudioSource_set_TargetVolume_mDE6F4B06955DFB974DD7BDC53AB764850D7CB72F_inline (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * __this, float ___value0, const RuntimeMethod* method);
// System.Single DigitalRuby.PyroParticles.LoopingAudioSource::get_TargetVolume()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LoopingAudioSource_get_TargetVolume_m0217CC294653792B533E3E7E711EFA6C543F14DC_inline (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * __this, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::Play(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_Play_mD801D6CF396D7A7F8D4BBC8BA08B716BBE6D1288 (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * __this, float ___targetVolume0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m565E2A2E28EE3B4621B2F5C662D569D56A3AE99F_gshared)(___original0, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnMeteorU3Ed__18__ctor_m90AB38BE3E904B809A184AACA692B6C9947D1334 (U3CSpawnMeteorU3Ed__18_t75D8CCF02D0E6F8ACF8912130334AEBBE60CCB2C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Collections.IEnumerator DigitalRuby.PyroParticles.MeteorSwarmScript::SpawnMeteor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeteorSwarmScript_SpawnMeteor_mEE4A9289B986A4C917905195B7AFDC0441FF2759 (MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * __this, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript::SpawnMeteors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmScript_SpawnMeteors_m1F9560B94CCCDF6B2CE9395792DEF894614CA840 (MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, float ___volumeScale1, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCleanupMeteorU3Ed__22__ctor_m97DB95D2FADD058AEDB08B0FCF7CF991FD5365CA (U3CCleanupMeteorU3Ed__22_t7BAAE116B67027D3ADDF6DBF47EA30A4F326EBD0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate::Invoke(DigitalRuby.PyroParticles.MeteorSwarmScript,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmCollisionDelegate_Invoke_m0F23F62B6A1DE104B107B65C65ADE7651A5A42FE (MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * __this, MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * ___script0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___meteor1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m56EB454031EABB53BA35FECF3F61A7E2332A2521_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ContactPoint_get_normal_m0561937E45F5356C7BB90D861422BD76B36D037A (ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_mC34E8010B8BA97C05C913588237CF92AEB3419B5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_m07EF0D2DA84EB04814DA7EE6B8618B008DE75F28 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, int32_t ___count0, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript::PlayCollisionSound(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmScript_PlayCollisionSound_m4DA79942BA50F96FCFEF2DA94945FF0C76A0F8F6 (MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Collections.IEnumerator DigitalRuby.PyroParticles.MeteorSwarmScript::CleanupMeteor(System.Single,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeteorSwarmScript_CleanupMeteor_mAE305A6C2B6ABED8AB95C0166297CA4CBB93219D (MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * __this, float ___delay0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Toggle>()
inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * Component_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_mC10A47F63047FC771E4FD5AF00284CEF8D43055F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_mB50C8EA3A418FA8FF1FA36B9FF1EBB2E6581FC60 (const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m7970134AA05A399001D2D3844EB16D60C5275013 (float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.AudioListener::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioListener_get_volume_m335A63461B29AD922F7BE67B8223FE4F4753B31A (const RuntimeMethod* method);
// System.Void UnityEngine.AudioListener::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_volume_mA0C47585895B6FEF38E90DA76C77129255B1B7CD (float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, const RuntimeMethod* method);
// System.Void PauseMenu::MenuOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MenuOn_m8973DC956DD5235381EE4ACB4A182AA5BF0EF2EA (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method);
// System.Void PauseMenu::MenuOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MenuOff_mCD1AF41F916B0C02D2FD6F82377DBEAFF7C30720 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m3DFABEAD727BF79544B63728EAF7CBBB6A631A29 (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507 (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m582E2CFB7AD42538E513FDE6A57B62631DC801E6 (bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m689599122AC9F35D1FCCA2BF2414387472B0799F (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_m4E3DB1CD03E916476426AB3F78B26F21690EE26B (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_mBCEAE9AEF8827512D6ADF03AB336DFA2C8A223E0 (const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m4BD6E5347507B86D0D50C5834607BB23D3DBD82A (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674 (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___methodName0, RuntimeObject * ___value1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<PauseMenu>()
inline PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * Component_GetComponentInChildren_TisPauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_m98153975CAC553ED05CBA0FDC20E56CCF659A615 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m136F20631CCBEEED3ACC98C2460E9218AF74B8BC (String_t* ___url0, const RuntimeMethod* method);
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7 (PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052 * __this, const RuntimeMethod* method);
// System.Void DigitalRuby.PyroParticles.SingleLineAttribute::set_Tooltip(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SingleLineAttribute_set_Tooltip_m3F34E97789D0B0FB68467893DB84C47EEEB93DE9_inline (SingleLineAttribute_t42A09A9950AF7182B25ECF142CB94CF58885BDE4 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::get_targetGraphic()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * Selectable_get_targetGraphic_mF2D1BFB9DE33BAB553933533CC4A9135A37F4A72_inline (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_targetGraphic(UnityEngine.UI.Graphic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_targetGraphic_m668325D43E18A35560B4176477D004ECDB9C9604 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m49185D782014D16DA747C1296BEBAC3FB3CEDC1F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDEAB1A882C07A9520D77EB35473F71AAE74452BC (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.TrailRenderer>()
inline TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01 * GameObject_GetComponent_TisTrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01_m6BF02D14A2BF23863B8F688EEA112E78DD7B4AB8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mA944A98B82AFE4D46D05EF533ED0068148EFAEA5 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Random_get_insideUnitSphere_m34D2CBC8806C3E47E7C550DE77304E3A48EB2F40 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mBA12D08F4D51A4BC2E9841D42591B6208FF4B12E_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m3A40B7F195E9E217AE29A0964D7E7540E2E23080 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Rigidbody::get_mass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rigidbody_get_mass_mB7B19406DAC6336A8244E98BE271BDA8B5C26223 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_mass(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_mass_m54FCACE073F5E7742DB1D7C0BA19CD0C0F3DDA3F (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<DigitalRuby.PyroParticles.FireCollisionForwardScript>()
inline FireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D * GameObject_GetComponent_TisFireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D_m188552FE09C7581B8330EDAB30D316C71C63F19B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  FireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_m13177C1A6C29D76DDCD858CEF2B28C2AA7CC46FC (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TrailRenderer::set_startWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailRenderer_set_startWidth_mBCA39FC59184062A7F7E6074DE711F49F973B948 (TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TrailRenderer::set_endWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailRenderer_set_endWidth_mABF2E494F1ADC2BE63AC30047F51A727C674E5B5 (TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TrailRenderer::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailRenderer_set_time_mD3CE2A98D44A4FDE806CDA46EDD6EFDE968431CE (TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01 * __this, float ___value0, const RuntimeMethod* method);
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
// System.Void CameraSwitch::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraSwitch_OnEnable_mD422991EDD9D880928644EE1BC4E557EE644679C (CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D * __this, const RuntimeMethod* method)
{
	{
		// text.text = objects[m_CurrentActiveObject].name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_text_5();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_objects_4();
		int32_t L_2 = __this->get_m_CurrentActiveObject_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		// }
		return;
	}
}
// System.Void CameraSwitch::NextCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraSwitch_NextCamera_m38AB4521C129032FA1DA5154E09D36D0FE2DB257 (CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// int nextactiveobject = m_CurrentActiveObject + 1 >= objects.Length ? 0 : m_CurrentActiveObject + 1;
		int32_t L_0 = __this->get_m_CurrentActiveObject_6();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_objects_4();
		NullCheck(L_1);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1))) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = __this->get_m_CurrentActiveObject_6();
		G_B3_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_0 = G_B3_0;
		// for (int i = 0; i < objects.Length; i++)
		V_1 = 0;
		goto IL_0037;
	}

IL_0022:
	{
		// objects[i].SetActive(i == nextactiveobject);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_objects_4();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0), /*hidden argument*/NULL);
		// for (int i = 0; i < objects.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0037:
	{
		// for (int i = 0; i < objects.Length; i++)
		int32_t L_10 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = __this->get_objects_4();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		// m_CurrentActiveObject = nextactiveobject;
		int32_t L_12 = V_0;
		__this->set_m_CurrentActiveObject_6(L_12);
		// text.text = objects[m_CurrentActiveObject].name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = __this->get_text_5();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = __this->get_objects_4();
		int32_t L_15 = __this->get_m_CurrentActiveObject_6();
		NullCheck(L_14);
		int32_t L_16 = L_15;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_17, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_18);
		// }
		return;
	}
}
// System.Void CameraSwitch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraSwitch__ctor_m550FCA9B0C24BBBC8BDBCAAAAA7BBF26312399FE (CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Editor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Editor_Start_mAE1A163C966B12EB2A847700335116BA9F0F212A (Editor_tD838114EAFE1F13F8F8FB09D711521206D086367 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Editor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Editor_Update_m329AB796CADE66EAB0748867F4EB521888D86E01 (Editor_tD838114EAFE1F13F8F8FB09D711521206D086367 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Editor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Editor__ctor_m28FB08BAFABDD1D692F67DA9BA8D951BFEBEFA66 (Editor_tD838114EAFE1F13F8F8FB09D711521206D086367 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Collections.IEnumerator DigitalRuby.PyroParticles.FireBaseScript::CleanupEverythingCoRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FireBaseScript_CleanupEverythingCoRoutine_m49964DAEF51993BE145D349CA2317FCD08CA2973 (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCleanupEverythingCoRoutineU3Ed__12_t7932D7215487FF0301D02ECA9017F1897A3D7B61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCleanupEverythingCoRoutineU3Ed__12_t7932D7215487FF0301D02ECA9017F1897A3D7B61 * L_0 = (U3CCleanupEverythingCoRoutineU3Ed__12_t7932D7215487FF0301D02ECA9017F1897A3D7B61 *)il2cpp_codegen_object_new(U3CCleanupEverythingCoRoutineU3Ed__12_t7932D7215487FF0301D02ECA9017F1897A3D7B61_il2cpp_TypeInfo_var);
		U3CCleanupEverythingCoRoutineU3Ed__12__ctor_m9A356857E81380EB9CEDC3AB846A44D18A714DA3(L_0, 0, /*hidden argument*/NULL);
		U3CCleanupEverythingCoRoutineU3Ed__12_t7932D7215487FF0301D02ECA9017F1897A3D7B61 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript::StartParticleSystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_StartParticleSystems_mA69CE75A2634759D3C2405F84B9E34C62A106B5B (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m8E200D5B4EAD18002F7DBC1F26768BDA0CDF0AD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5D162A911D8F5C1BAB92301936B1551BBA72BFF6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* V_0 = NULL;
	int32_t V_1 = 0;
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * V_2 = NULL;
	MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  V_3;
	memset((&V_3), 0, sizeof(V_3));
	MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  V_4;
	memset((&V_4), 0, sizeof(V_4));
	MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  V_5;
	memset((&V_5), 0, sizeof(V_5));
	MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// foreach (ParticleSystem p in gameObject.GetComponentsInChildren<ParticleSystem>())
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_1;
		L_1 = GameObject_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5D162A911D8F5C1BAB92301936B1551BBA72BFF6(L_0, /*hidden argument*/GameObject_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5D162A911D8F5C1BAB92301936B1551BBA72BFF6_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0089;
	}

IL_0010:
	{
		// foreach (ParticleSystem p in gameObject.GetComponentsInChildren<ParticleSystem>())
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if (ManualParticleSystems == null || ManualParticleSystems.Length == 0 ||
		//     System.Array.IndexOf(ManualParticleSystems, p) < 0)
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_6 = __this->get_ManualParticleSystems_11();
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_7 = __this->get_ManualParticleSystems_11();
		NullCheck(L_7);
		if (!(((RuntimeArray*)L_7)->max_length))
		{
			goto IL_0034;
		}
	}
	{
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_8 = __this->get_ManualParticleSystems_11();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_9 = V_2;
		int32_t L_10;
		L_10 = Array_IndexOf_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m8E200D5B4EAD18002F7DBC1F26768BDA0CDF0AD9(L_8, L_9, /*hidden argument*/Array_IndexOf_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m8E200D5B4EAD18002F7DBC1F26768BDA0CDF0AD9_RuntimeMethod_var);
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}

IL_0034:
	{
		// if (p.main.startDelay.constant == 0.0f)
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_11 = V_2;
		NullCheck(L_11);
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_12;
		L_12 = ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_13;
		L_13 = MainModule_get_startDelay_m6CA464DDA126D5A848376094643AEB097BDF204C((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)(&V_3), /*hidden argument*/NULL);
		V_4 = L_13;
		float L_14;
		L_14 = MinMaxCurve_get_constant_mBC0C29DF6F1C6C999931E28BC1F8DD26BD3BB624((MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *)(&V_4), /*hidden argument*/NULL);
		if ((!(((float)L_14) == ((float)(0.0f)))))
		{
			goto IL_007f;
		}
	}
	{
		// var m = p.main;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_15 = V_2;
		NullCheck(L_15);
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_16;
		L_16 = ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0(L_15, /*hidden argument*/NULL);
		V_5 = L_16;
		// var d = p.main.startDelay;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_17 = V_2;
		NullCheck(L_17);
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_18;
		L_18 = ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_19;
		L_19 = MainModule_get_startDelay_m6CA464DDA126D5A848376094643AEB097BDF204C((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)(&V_3), /*hidden argument*/NULL);
		V_6 = L_19;
		// d.constant = 0.01f;
		MinMaxCurve_set_constant_mC6A5CB5126DC864D5E675A369CC012DAAF04CEC4((MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *)(&V_6), (0.00999999978f), /*hidden argument*/NULL);
		// m.startDelay = d;
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_20 = V_6;
		MainModule_set_startDelay_m95CEAEE97E462DEAF4787B9C6AD6389D9912F93A((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)(&V_5), L_20, /*hidden argument*/NULL);
	}

IL_007f:
	{
		// p.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_21 = V_2;
		NullCheck(L_21);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_21, /*hidden argument*/NULL);
	}

IL_0085:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0089:
	{
		// foreach (ParticleSystem p in gameObject.GetComponentsInChildren<ParticleSystem>())
		int32_t L_23 = V_1;
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_Awake_m21C5A894E231C4FACE9F6DE4E6DA58477F1983E5 (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3297D7F872B0B6B3647656A13A2D7B41215309E9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Starting = true;
		FireBaseScript_set_Starting_mB0599A55FC150BD87CDF3A07C4082A8DAFACC729_inline(__this, (bool)1, /*hidden argument*/NULL);
		// int fireLayer = UnityEngine.LayerMask.NameToLayer("FireLayer");
		int32_t L_0;
		L_0 = LayerMask_NameToLayer_m625745100E4E629E5AD558F0B7D39443B83AB99C(_stringLiteral3297D7F872B0B6B3647656A13A2D7B41215309E9, /*hidden argument*/NULL);
		// UnityEngine.Physics.IgnoreLayerCollision(fireLayer, fireLayer);
		int32_t L_1 = L_0;
		Physics_IgnoreLayerCollision_m4F9369FFB51FF3E5A019D242CCF50FBFEE318ECC(L_1, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_Start_mBA77B28BAAEF2C0388EC9664D0D22BF46F44D7D3 (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisFireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D_m7BA28FA658C6AB6EDE447B626AFA6F733EBEA487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollisionHandler_t907B1F40BAA789508464FDD135E457A1621ED8AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	FireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D * V_1 = NULL;
	{
		// if (AudioSource != null)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_AudioSource_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// AudioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_AudioSource_4();
		NullCheck(L_2);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// stopTimeMultiplier = 1.0f / StopTime;
		float L_3 = __this->get_StopTime_6();
		__this->set_stopTimeMultiplier_14(((float)((float)(1.0f)/(float)L_3)));
		// startTimeMultiplier = 1.0f / StartTime;
		float L_4 = __this->get_StartTime_5();
		__this->set_startTimeMultiplier_12(((float)((float)(1.0f)/(float)L_4)));
		// CreateExplosion(gameObject.transform.position, ForceRadius, ForceAmount);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_ForceRadius_9();
		float L_9 = __this->get_ForceAmount_8();
		FireBaseScript_CreateExplosion_m330741AF1B8CE11C879D47F18B5399829F6D39B6(L_7, L_8, L_9, /*hidden argument*/NULL);
		// StartParticleSystems();
		FireBaseScript_StartParticleSystems_mA69CE75A2634759D3C2405F84B9E34C62A106B5B(__this, /*hidden argument*/NULL);
		// ICollisionHandler handler = (this as ICollisionHandler);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)__this, ICollisionHandler_t907B1F40BAA789508464FDD135E457A1621ED8AC_il2cpp_TypeInfo_var));
		// if (handler != null)
		RuntimeObject* L_10 = V_0;
		if (!L_10)
		{
			goto IL_0085;
		}
	}
	{
		// FireCollisionForwardScript collisionForwarder = GetComponentInChildren<FireCollisionForwardScript>();
		FireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D * L_11;
		L_11 = Component_GetComponentInChildren_TisFireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D_m7BA28FA658C6AB6EDE447B626AFA6F733EBEA487(__this, /*hidden argument*/Component_GetComponentInChildren_TisFireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D_m7BA28FA658C6AB6EDE447B626AFA6F733EBEA487_RuntimeMethod_var);
		V_1 = L_11;
		// if (collisionForwarder != null)
		FireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D * L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0085;
		}
	}
	{
		// collisionForwarder.CollisionHandler = handler;
		FireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D * L_14 = V_1;
		RuntimeObject* L_15 = V_0;
		NullCheck(L_14);
		L_14->set_CollisionHandler_4(L_15);
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_Update_m40D5270BB955C2E7BB1B7106C88D545685565446 (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method)
{
	{
		// Duration -= Time.deltaTime;
		float L_0 = __this->get_Duration_7();
		float L_1;
		L_1 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		__this->set_Duration_7(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if (Stopping)
		bool L_2;
		L_2 = FireBaseScript_get_Stopping_m1592C1C93745E8FEB265172F0CAD5666AD6DAE91_inline(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		// stopTimeIncrement += Time.deltaTime;
		float L_3 = __this->get_stopTimeIncrement_15();
		float L_4;
		L_4 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		__this->set_stopTimeIncrement_15(((float)il2cpp_codegen_add((float)L_3, (float)L_4)));
		// if (stopTimeIncrement < StopTime)
		float L_5 = __this->get_stopTimeIncrement_15();
		float L_6 = __this->get_StopTime_6();
		if ((!(((float)L_5) < ((float)L_6))))
		{
			goto IL_00a5;
		}
	}
	{
		// StopPercent = stopTimeIncrement * stopTimeMultiplier;
		float L_7 = __this->get_stopTimeIncrement_15();
		float L_8 = __this->get_stopTimeMultiplier_14();
		FireBaseScript_set_StopPercent_m75C9FC3F5FFC266AAAACB10C2350DA3A2F08119B_inline(__this, ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_004e:
	{
		// else if (Starting)
		bool L_9;
		L_9 = FireBaseScript_get_Starting_m1AB905289A960AE1C86B24C57E6B72C4E108CA55_inline(__this, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0092;
		}
	}
	{
		// startTimeIncrement += Time.deltaTime;
		float L_10 = __this->get_startTimeIncrement_13();
		float L_11;
		L_11 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		__this->set_startTimeIncrement_13(((float)il2cpp_codegen_add((float)L_10, (float)L_11)));
		// if (startTimeIncrement < StartTime)
		float L_12 = __this->get_startTimeIncrement_13();
		float L_13 = __this->get_StartTime_5();
		if ((!(((float)L_12) < ((float)L_13))))
		{
			goto IL_008a;
		}
	}
	{
		// StartPercent = startTimeIncrement * startTimeMultiplier;
		float L_14 = __this->get_startTimeIncrement_13();
		float L_15 = __this->get_startTimeMultiplier_12();
		FireBaseScript_set_StartPercent_m12A6FB26D859193B99A97A85290D1BF77F59298A_inline(__this, ((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_008a:
	{
		// Starting = false;
		FireBaseScript_set_Starting_mB0599A55FC150BD87CDF3A07C4082A8DAFACC729_inline(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0092:
	{
		// else if (Duration <= 0.0f)
		float L_16 = __this->get_Duration_7();
		if ((!(((float)L_16) <= ((float)(0.0f)))))
		{
			goto IL_00a5;
		}
	}
	{
		// Stop();
		VirtActionInvoker0::Invoke(7 /* System.Void DigitalRuby.PyroParticles.FireBaseScript::Stop() */, __this);
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript::CreateExplosion(UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_CreateExplosion_m330741AF1B8CE11C879D47F18B5399829F6D39B6 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, float ___radius1, float ___force2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* V_0 = NULL;
	int32_t V_1 = 0;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * V_2 = NULL;
	{
		// if (force <= 0.0f || radius <= 0.0f)
		float L_0 = ___force2;
		if ((((float)L_0) <= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		float L_1 = ___radius1;
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// Collider[] objects = UnityEngine.Physics.OverlapSphere(pos, radius);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___pos0;
		float L_3 = ___radius1;
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_4;
		L_4 = Physics_OverlapSphere_m885BB636D248BA40DF5758A7AA108C010A942E62(L_2, L_3, /*hidden argument*/NULL);
		// foreach (Collider h in objects)
		V_0 = L_4;
		V_1 = 0;
		goto IL_003c;
	}

IL_001d:
	{
		// foreach (Collider h in objects)
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// Rigidbody r = h.GetComponent<Rigidbody>();
		NullCheck(L_8);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_9;
		L_9 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_8, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		V_2 = L_9;
		// if (r != null)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0038;
		}
	}
	{
		// r.AddExplosionForce(force, pos, radius);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_12 = V_2;
		float L_13 = ___force2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___pos0;
		float L_15 = ___radius1;
		NullCheck(L_12);
		Rigidbody_AddExplosionForce_m8B6FFD506CCCDD31C8C018A4B635E82B5499648F(L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
	}

IL_0038:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_003c:
	{
		// foreach (Collider h in objects)
		int32_t L_17 = V_1;
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_Stop_m71A98AF1046B3DC4FDCD689E14B8963F80EF7B25 (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5D162A911D8F5C1BAB92301936B1551BBA72BFF6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (Stopping)
		bool L_0;
		L_0 = FireBaseScript_get_Stopping_m1592C1C93745E8FEB265172F0CAD5666AD6DAE91_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Stopping = true;
		FireBaseScript_set_Stopping_mC4E23890C57F1955717CCF36E801307492A32F52_inline(__this, (bool)1, /*hidden argument*/NULL);
		// foreach (ParticleSystem p in gameObject.GetComponentsInChildren<ParticleSystem>())
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_2;
		L_2 = GameObject_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5D162A911D8F5C1BAB92301936B1551BBA72BFF6(L_1, /*hidden argument*/GameObject_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5D162A911D8F5C1BAB92301936B1551BBA72BFF6_RuntimeMethod_var);
		V_0 = L_2;
		V_1 = 0;
		goto IL_002c;
	}

IL_0020:
	{
		// foreach (ParticleSystem p in gameObject.GetComponentsInChildren<ParticleSystem>())
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// p.Stop();
		NullCheck(L_6);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002c:
	{
		// foreach (ParticleSystem p in gameObject.GetComponentsInChildren<ParticleSystem>())
		int32_t L_8 = V_1;
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		// StartCoroutine(CleanupEverythingCoRoutine());
		RuntimeObject* L_10;
		L_10 = FireBaseScript_CleanupEverythingCoRoutine_m49964DAEF51993BE145D349CA2317FCD08CA2973(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_11;
		L_11 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean DigitalRuby.PyroParticles.FireBaseScript::get_Starting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FireBaseScript_get_Starting_m1AB905289A960AE1C86B24C57E6B72C4E108CA55 (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method)
{
	{
		// get;
		bool L_0 = __this->get_U3CStartingU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript::set_Starting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_set_Starting_mB0599A55FC150BD87CDF3A07C4082A8DAFACC729 (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// private set;
		bool L_0 = ___value0;
		__this->set_U3CStartingU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Single DigitalRuby.PyroParticles.FireBaseScript::get_StartPercent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FireBaseScript_get_StartPercent_mFE89E8A6B7BE34AC2615F9BDF3B9D292DAA860D9 (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method)
{
	{
		// get;
		float L_0 = __this->get_U3CStartPercentU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript::set_StartPercent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_set_StartPercent_m12A6FB26D859193B99A97A85290D1BF77F59298A (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// private set;
		float L_0 = ___value0;
		__this->set_U3CStartPercentU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Boolean DigitalRuby.PyroParticles.FireBaseScript::get_Stopping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FireBaseScript_get_Stopping_m1592C1C93745E8FEB265172F0CAD5666AD6DAE91 (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method)
{
	{
		// get;
		bool L_0 = __this->get_U3CStoppingU3Ek__BackingField_18();
		return L_0;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript::set_Stopping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_set_Stopping_mC4E23890C57F1955717CCF36E801307492A32F52 (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// private set;
		bool L_0 = ___value0;
		__this->set_U3CStoppingU3Ek__BackingField_18(L_0);
		return;
	}
}
// System.Single DigitalRuby.PyroParticles.FireBaseScript::get_StopPercent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FireBaseScript_get_StopPercent_m45EFE5EBC4E03026FA6AA2AC63A9AAACDF2649EA (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method)
{
	{
		// get;
		float L_0 = __this->get_U3CStopPercentU3Ek__BackingField_19();
		return L_0;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript::set_StopPercent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_set_StopPercent_m75C9FC3F5FFC266AAAACB10C2350DA3A2F08119B (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// private set;
		float L_0 = ___value0;
		__this->set_U3CStopPercentU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript__ctor_mBAE6ECAF6DBCB371607FB582D92933AC16E5F847 (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method)
{
	{
		// public float StartTime = 1.0f;
		__this->set_StartTime_5((1.0f));
		// public float StopTime = 3.0f;
		__this->set_StopTime_6((3.0f));
		// public float Duration = 2.0f;
		__this->set_Duration_7((2.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DigitalRuby.PyroParticles.FireCollisionForwardScript::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireCollisionForwardScript_OnCollisionEnter_m2C26C4D714365E66B6950F1938A8559B9A8CE72D (FireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollisionHandler_t907B1F40BAA789508464FDD135E457A1621ED8AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CollisionHandler.HandleCollision(gameObject, col);
		RuntimeObject* L_0 = __this->get_CollisionHandler_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_2 = ___col0;
		NullCheck(L_0);
		InterfaceActionInvoker2< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * >::Invoke(0 /* System.Void DigitalRuby.PyroParticles.ICollisionHandler::HandleCollision(UnityEngine.GameObject,UnityEngine.Collision) */, ICollisionHandler_t907B1F40BAA789508464FDD135E457A1621ED8AC_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireCollisionForwardScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireCollisionForwardScript__ctor_m9151B03E8892D358FCC4DD83CD7253827C48CDCC (FireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DigitalRuby.PyroParticles.FireConstantBaseScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireConstantBaseScript_Awake_m285DCCE994BA0C49283635045839CD5BC04B3671 (FireConstantBaseScript_t578945513113D263C11CC95F1A33EFE7F1545AE2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		FireBaseScript_Awake_m21C5A894E231C4FACE9F6DE4E6DA58477F1983E5(__this, /*hidden argument*/NULL);
		// LoopingAudioSource = new LoopingAudioSource(this, AudioSource, StartTime, StopTime);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = ((FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 *)__this)->get_AudioSource_4();
		float L_1 = ((FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 *)__this)->get_StartTime_5();
		float L_2 = ((FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 *)__this)->get_StopTime_6();
		LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * L_3 = (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 *)il2cpp_codegen_object_new(LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26_il2cpp_TypeInfo_var);
		LoopingAudioSource__ctor_m9BE259D1A4326C2450656F561AB7AD66F50FABB6(L_3, __this, L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_LoopingAudioSource_20(L_3);
		// Duration = 999999999;
		((FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 *)__this)->set_Duration_7((1.0E+09f));
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireConstantBaseScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireConstantBaseScript_Update_m2B76345DDC379C4A5042700BD81503FF12A74E54 (FireConstantBaseScript_t578945513113D263C11CC95F1A33EFE7F1545AE2 * __this, const RuntimeMethod* method)
{
	{
		// base.Update();
		FireBaseScript_Update_m40D5270BB955C2E7BB1B7106C88D545685565446(__this, /*hidden argument*/NULL);
		// LoopingAudioSource.Update();
		LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * L_0 = __this->get_LoopingAudioSource_20();
		NullCheck(L_0);
		LoopingAudioSource_Update_mE0BC4667F8BCB2ECA598D6A041325E3497F4F2D1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireConstantBaseScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireConstantBaseScript_Start_m1F7AE4E311E55877B509B2D37FD7E9FFA325BEFA (FireConstantBaseScript_t578945513113D263C11CC95F1A33EFE7F1545AE2 * __this, const RuntimeMethod* method)
{
	{
		// base.Start();
		FireBaseScript_Start_mBA77B28BAAEF2C0388EC9664D0D22BF46F44D7D3(__this, /*hidden argument*/NULL);
		// LoopingAudioSource.Play();
		LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * L_0 = __this->get_LoopingAudioSource_20();
		NullCheck(L_0);
		LoopingAudioSource_Play_m74FF004BD3F9FC7A1ED2BB07D0C472F530D71F8F(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireConstantBaseScript::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireConstantBaseScript_Stop_m3BE10C38A939B732A284A25D593C279FAF1DAE8D (FireConstantBaseScript_t578945513113D263C11CC95F1A33EFE7F1545AE2 * __this, const RuntimeMethod* method)
{
	{
		// LoopingAudioSource.Stop();
		LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * L_0 = __this->get_LoopingAudioSource_20();
		NullCheck(L_0);
		LoopingAudioSource_Stop_m03A289AB4F45BD7F8621CB07FD9F348D48ED93B5(L_0, /*hidden argument*/NULL);
		// base.Stop();
		FireBaseScript_Stop_m71A98AF1046B3DC4FDCD689E14B8963F80EF7B25(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireConstantBaseScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireConstantBaseScript__ctor_m7C0426F42C217F4581F971D902696371E258117B (FireConstantBaseScript_t578945513113D263C11CC95F1A33EFE7F1545AE2 * __this, const RuntimeMethod* method)
{
	{
		FireBaseScript__ctor_mBAE6ECAF6DBCB371607FB582D92933AC16E5F847(__this, /*hidden argument*/NULL);
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
// System.Void DigitalRuby.PyroParticles.FireLightScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireLightScript_Awake_m67EA8485E1900A140BA23EC3D9810C40A0FCA679 (FireLightScript_tF88E479E792A5631BAF1D2FF37B1098869289062 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m565B248E11FDCE3D39D0B85F419258D461715C95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9_m91F60804FDE3D82AE4DD2751B0037C9C01BDB0BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// firePointLight = gameObject.GetComponentInChildren<Light>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_1;
		L_1 = GameObject_GetComponentInChildren_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m565B248E11FDCE3D39D0B85F419258D461715C95(L_0, /*hidden argument*/GameObject_GetComponentInChildren_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m565B248E11FDCE3D39D0B85F419258D461715C95_RuntimeMethod_var);
		__this->set_firePointLight_7(L_1);
		// if (firePointLight != null)
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_2 = __this->get_firePointLight_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		// lightIntensity = firePointLight.intensity;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_4 = __this->get_firePointLight_7();
		NullCheck(L_4);
		float L_5;
		L_5 = Light_get_intensity_mFABC9E1EA23E954E1072233C33C2211D64262326(L_4, /*hidden argument*/NULL);
		__this->set_lightIntensity_8(L_5);
		// firePointLight.intensity = 0.0f;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_6 = __this->get_firePointLight_7();
		NullCheck(L_6);
		Light_set_intensity_m372D5B9494809AFAD717B2707957DD1478C52DFC(L_6, (0.0f), /*hidden argument*/NULL);
		// baseY = firePointLight.gameObject.transform.position.y;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_7 = __this->get_firePointLight_7();
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		__this->set_baseY_11(L_11);
	}

IL_0060:
	{
		// seed = UnityEngine.Random.value * Seed;
		float L_12;
		L_12 = Random_get_value_mD4A68FBBD1D26CB7CDAC1FA1C19DB2D66D44C567(/*hidden argument*/NULL);
		float L_13 = __this->get_Seed_4();
		__this->set_seed_9(((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)));
		// fireBaseScript = gameObject.GetComponent<FireBaseScript>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * L_15;
		L_15 = GameObject_GetComponent_TisFireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9_m91F60804FDE3D82AE4DD2751B0037C9C01BDB0BD(L_14, /*hidden argument*/GameObject_GetComponent_TisFireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9_m91F60804FDE3D82AE4DD2751B0037C9C01BDB0BD_RuntimeMethod_var);
		__this->set_fireBaseScript_10(L_15);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireLightScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireLightScript_Update_mAFBBDC2DDEAE8A58633B7CB641D5061286D95F10 (FireLightScript_tF88E479E792A5631BAF1D2FF37B1098869289062 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// if (firePointLight == null)
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_0 = __this->get_firePointLight_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (seed != 0)
		float L_2 = __this->get_seed_9();
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_01c8;
		}
	}
	{
		// bool setIntensity = true;
		V_0 = (bool)1;
		// float intensityModifier2 = 1.0f;
		V_1 = (1.0f);
		// if (fireBaseScript != null)
		FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * L_3 = __this->get_fireBaseScript_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_008a;
		}
	}
	{
		// if (fireBaseScript.Stopping)
		FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * L_5 = __this->get_fireBaseScript_10();
		NullCheck(L_5);
		bool L_6;
		L_6 = FireBaseScript_get_Stopping_m1592C1C93745E8FEB265172F0CAD5666AD6DAE91_inline(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0071;
		}
	}
	{
		// setIntensity = false;
		V_0 = (bool)0;
		// firePointLight.intensity = Mathf.Lerp(firePointLight.intensity, 0.0f, fireBaseScript.StopPercent);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_7 = __this->get_firePointLight_7();
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_8 = __this->get_firePointLight_7();
		NullCheck(L_8);
		float L_9;
		L_9 = Light_get_intensity_mFABC9E1EA23E954E1072233C33C2211D64262326(L_8, /*hidden argument*/NULL);
		FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * L_10 = __this->get_fireBaseScript_10();
		NullCheck(L_10);
		float L_11;
		L_11 = FireBaseScript_get_StopPercent_m45EFE5EBC4E03026FA6AA2AC63A9AAACDF2649EA_inline(L_10, /*hidden argument*/NULL);
		float L_12;
		L_12 = Mathf_Lerp_m04D5C368C4E4F1AB78230C6809A6651951A52C86(L_9, (0.0f), L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		Light_set_intensity_m372D5B9494809AFAD717B2707957DD1478C52DFC(L_7, L_12, /*hidden argument*/NULL);
		// }
		goto IL_008a;
	}

IL_0071:
	{
		// else if (fireBaseScript.Starting)
		FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * L_13 = __this->get_fireBaseScript_10();
		NullCheck(L_13);
		bool L_14;
		L_14 = FireBaseScript_get_Starting_m1AB905289A960AE1C86B24C57E6B72C4E108CA55_inline(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_008a;
		}
	}
	{
		// intensityModifier2 = fireBaseScript.StartPercent;
		FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * L_15 = __this->get_fireBaseScript_10();
		NullCheck(L_15);
		float L_16;
		L_16 = FireBaseScript_get_StartPercent_mFE89E8A6B7BE34AC2615F9BDF3B9D292DAA860D9_inline(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
	}

IL_008a:
	{
		// if (setIntensity)
		bool L_17 = V_0;
		if (!L_17)
		{
			goto IL_00e3;
		}
	}
	{
		// float intensity = Mathf.Clamp(IntensityModifier * intensityModifier2 * Mathf.PerlinNoise(seed + Time.time, seed + 1 + Time.time),
		//     IntensityMaxRange.Minimum, IntensityMaxRange.Maximum);
		float L_18 = __this->get_IntensityModifier_5();
		float L_19 = V_1;
		float L_20 = __this->get_seed_9();
		float L_21;
		L_21 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
		float L_22 = __this->get_seed_9();
		float L_23;
		L_23 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
		float L_24;
		L_24 = Mathf_PerlinNoise_m1684D3DDBD0A8518FFBA5F042D04E480C1CD2977(((float)il2cpp_codegen_add((float)L_20, (float)L_21)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_22, (float)(1.0f))), (float)L_23)), /*hidden argument*/NULL);
		RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7 * L_25 = __this->get_address_of_IntensityMaxRange_6();
		float L_26 = L_25->get_Minimum_0();
		RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7 * L_27 = __this->get_address_of_IntensityMaxRange_6();
		float L_28 = L_27->get_Maximum_1();
		float L_29;
		L_29 = Mathf_Clamp_m5EA831B060853D4246B8394A30599A0021F80AFF(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)), (float)L_24)), L_26, L_28, /*hidden argument*/NULL);
		V_5 = L_29;
		// firePointLight.intensity = intensity;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_30 = __this->get_firePointLight_7();
		float L_31 = V_5;
		NullCheck(L_30);
		Light_set_intensity_m372D5B9494809AFAD717B2707957DD1478C52DFC(L_30, L_31, /*hidden argument*/NULL);
	}

IL_00e3:
	{
		// float x = Mathf.PerlinNoise(seed + 0 + Time.time * 2, seed + 1 + Time.time * 2) - 0.5f;
		float L_32 = __this->get_seed_9();
		float L_33;
		L_33 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
		float L_34 = __this->get_seed_9();
		float L_35;
		L_35 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
		float L_36;
		L_36 = Mathf_PerlinNoise_m1684D3DDBD0A8518FFBA5F042D04E480C1CD2977(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_32, (float)(0.0f))), (float)((float)il2cpp_codegen_multiply((float)L_33, (float)(2.0f))))), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_34, (float)(1.0f))), (float)((float)il2cpp_codegen_multiply((float)L_35, (float)(2.0f))))), /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_subtract((float)L_36, (float)(0.5f)));
		// float y = baseY + Mathf.PerlinNoise(seed + 2 + Time.time * 2, seed + 3 + Time.time * 2) - 0.5f;
		float L_37 = __this->get_baseY_11();
		float L_38 = __this->get_seed_9();
		float L_39;
		L_39 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
		float L_40 = __this->get_seed_9();
		float L_41;
		L_41 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
		float L_42;
		L_42 = Mathf_PerlinNoise_m1684D3DDBD0A8518FFBA5F042D04E480C1CD2977(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_38, (float)(2.0f))), (float)((float)il2cpp_codegen_multiply((float)L_39, (float)(2.0f))))), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_40, (float)(3.0f))), (float)((float)il2cpp_codegen_multiply((float)L_41, (float)(2.0f))))), /*hidden argument*/NULL);
		V_3 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_37, (float)L_42)), (float)(0.5f)));
		// float z = Mathf.PerlinNoise(seed + 4 + Time.time * 2, seed + 5 + Time.time * 2) - 0.5f;
		float L_43 = __this->get_seed_9();
		float L_44;
		L_44 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
		float L_45 = __this->get_seed_9();
		float L_46;
		L_46 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
		float L_47;
		L_47 = Mathf_PerlinNoise_m1684D3DDBD0A8518FFBA5F042D04E480C1CD2977(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_43, (float)(4.0f))), (float)((float)il2cpp_codegen_multiply((float)L_44, (float)(2.0f))))), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_45, (float)(5.0f))), (float)((float)il2cpp_codegen_multiply((float)L_46, (float)(2.0f))))), /*hidden argument*/NULL);
		V_4 = ((float)il2cpp_codegen_subtract((float)L_47, (float)(0.5f)));
		// firePointLight.gameObject.transform.localPosition = Vector3.up + new Vector3(x, y, z);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_48 = __this->get_firePointLight_7();
		NullCheck(L_48);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49;
		L_49 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_49, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Vector3_get_up_mD84FDFCD32FC48C865A89FD4251232E2A9D7015A(/*hidden argument*/NULL);
		float L_52 = V_2;
		float L_53 = V_3;
		float L_54 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_55), L_52, L_53, L_54, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
		L_56 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_51, L_55, /*hidden argument*/NULL);
		NullCheck(L_50);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_50, L_56, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01c8:
	{
		// else if (fireBaseScript.Stopping)
		FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * L_57 = __this->get_fireBaseScript_10();
		NullCheck(L_57);
		bool L_58;
		L_58 = FireBaseScript_get_Stopping_m1592C1C93745E8FEB265172F0CAD5666AD6DAE91_inline(L_57, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_0201;
		}
	}
	{
		// firePointLight.intensity = Mathf.Lerp(firePointLight.intensity, 0.0f, fireBaseScript.StopPercent);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_59 = __this->get_firePointLight_7();
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_60 = __this->get_firePointLight_7();
		NullCheck(L_60);
		float L_61;
		L_61 = Light_get_intensity_mFABC9E1EA23E954E1072233C33C2211D64262326(L_60, /*hidden argument*/NULL);
		FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * L_62 = __this->get_fireBaseScript_10();
		NullCheck(L_62);
		float L_63;
		L_63 = FireBaseScript_get_StopPercent_m45EFE5EBC4E03026FA6AA2AC63A9AAACDF2649EA_inline(L_62, /*hidden argument*/NULL);
		float L_64;
		L_64 = Mathf_Lerp_m04D5C368C4E4F1AB78230C6809A6651951A52C86(L_61, (0.0f), L_63, /*hidden argument*/NULL);
		NullCheck(L_59);
		Light_set_intensity_m372D5B9494809AFAD717B2707957DD1478C52DFC(L_59, L_64, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0201:
	{
		// else if (fireBaseScript.Starting)
		FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * L_65 = __this->get_fireBaseScript_10();
		NullCheck(L_65);
		bool L_66;
		L_66 = FireBaseScript_get_Starting_m1AB905289A960AE1C86B24C57E6B72C4E108CA55_inline(L_65, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_0234;
		}
	}
	{
		// firePointLight.intensity = Mathf.Lerp(0.0f, lightIntensity, fireBaseScript.StartPercent);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_67 = __this->get_firePointLight_7();
		float L_68 = __this->get_lightIntensity_8();
		FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * L_69 = __this->get_fireBaseScript_10();
		NullCheck(L_69);
		float L_70;
		L_70 = FireBaseScript_get_StartPercent_mFE89E8A6B7BE34AC2615F9BDF3B9D292DAA860D9_inline(L_69, /*hidden argument*/NULL);
		float L_71;
		L_71 = Mathf_Lerp_m04D5C368C4E4F1AB78230C6809A6651951A52C86((0.0f), L_68, L_70, /*hidden argument*/NULL);
		NullCheck(L_67);
		Light_set_intensity_m372D5B9494809AFAD717B2707957DD1478C52DFC(L_67, L_71, /*hidden argument*/NULL);
	}

IL_0234:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireLightScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireLightScript__ctor_mA050D7C34A866E409487D56BB93BE9187D63A8EF (FireLightScript_tF88E479E792A5631BAF1D2FF37B1098869289062 * __this, const RuntimeMethod* method)
{
	RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public float Seed = 100.0f;
		__this->set_Seed_4((100.0f));
		// public float IntensityModifier = 2.0f;
		__this->set_IntensityModifier_5((2.0f));
		// public RangeOfFloats IntensityMaxRange = new RangeOfFloats { Minimum = 0.0f, Maximum = 8.0f };
		il2cpp_codegen_initobj((&V_0), sizeof(RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7 ));
		(&V_0)->set_Minimum_0((0.0f));
		(&V_0)->set_Maximum_1((8.0f));
		RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7  L_0 = V_0;
		__this->set_IntensityMaxRange_6(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DigitalRuby.PyroParticles.FireProjectileCollisionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireProjectileCollisionDelegate__ctor_mBE373D2093C619C1D0D878E9381E6687AE3CA4BA (FireProjectileCollisionDelegate_t93697D2B8D055503F24A78C706943A06409DF855 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void DigitalRuby.PyroParticles.FireProjectileCollisionDelegate::Invoke(DigitalRuby.PyroParticles.FireProjectileScript,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireProjectileCollisionDelegate_Invoke_m990E632B0659B078D2D5719043E3426C58F35CE3 (FireProjectileCollisionDelegate_t93697D2B8D055503F24A78C706943A06409DF855 * __this, FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 * ___script0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___script0, ___pos1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___script0, ___pos1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, ___script0, ___pos1);
					else
						GenericVirtActionInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, ___script0, ___pos1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___script0, ___pos1);
					else
						VirtActionInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___script0, ___pos1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___script0, ___pos1, targetMethod);
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
						GenericInterfaceActionInvoker2< FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, targetThis, ___script0, ___pos1);
					else
						GenericVirtActionInvoker2< FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, targetThis, ___script0, ___pos1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___script0, ___pos1);
					else
						VirtActionInvoker2< FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___script0, ___pos1);
				}
			}
			else
			{
				if (___parameterCount == 1)
				{
					typedef void (*FunctionPointerType) (FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___script0, ___pos1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___script0, ___pos1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult DigitalRuby.PyroParticles.FireProjectileCollisionDelegate::BeginInvoke(DigitalRuby.PyroParticles.FireProjectileScript,UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FireProjectileCollisionDelegate_BeginInvoke_m48F004BC390FD6470860BAE85E5F35D354FF846D (FireProjectileCollisionDelegate_t93697D2B8D055503F24A78C706943A06409DF855 * __this, FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 * ___script0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___script0;
	__d_args[1] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___pos1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void DigitalRuby.PyroParticles.FireProjectileCollisionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireProjectileCollisionDelegate_EndInvoke_mE84C985B4280A310B2B39586DBF8907B38BC8050 (FireProjectileCollisionDelegate_t93697D2B8D055503F24A78C706943A06409DF855 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Collections.IEnumerator DigitalRuby.PyroParticles.FireProjectileScript::SendCollisionAfterDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FireProjectileScript_SendCollisionAfterDelay_m1FB6585DA773CDDA030248A6116C537CA577DB76 (FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendCollisionAfterDelayU3Ed__12_tE61D4A4F52D44C89486DA9D815F14F712F2723EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSendCollisionAfterDelayU3Ed__12_tE61D4A4F52D44C89486DA9D815F14F712F2723EF * L_0 = (U3CSendCollisionAfterDelayU3Ed__12_tE61D4A4F52D44C89486DA9D815F14F712F2723EF *)il2cpp_codegen_object_new(U3CSendCollisionAfterDelayU3Ed__12_tE61D4A4F52D44C89486DA9D815F14F712F2723EF_il2cpp_TypeInfo_var);
		U3CSendCollisionAfterDelayU3Ed__12__ctor_m48C5F03E41B8736D72D7A262B4D63ECF1EBA19BA(L_0, 0, /*hidden argument*/NULL);
		U3CSendCollisionAfterDelayU3Ed__12_tE61D4A4F52D44C89486DA9D815F14F712F2723EF * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void DigitalRuby.PyroParticles.FireProjectileScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireProjectileScript_Start_m5D670E414E26CCDDDEFDF5F456C511A813BA9EF5 (FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 * __this, const RuntimeMethod* method)
{
	{
		// base.Start();
		FireBaseScript_Start_mBA77B28BAAEF2C0388EC9664D0D22BF46F44D7D3(__this, /*hidden argument*/NULL);
		// StartCoroutine(SendCollisionAfterDelay());
		RuntimeObject* L_0;
		L_0 = FireProjectileScript_SendCollisionAfterDelay_m1FB6585DA773CDDA030248A6116C537CA577DB76(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireProjectileScript::HandleCollision(UnityEngine.GameObject,UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireProjectileScript_HandleCollision_mDF8EDD7D688F346137AFC6105BF883EA19C7660C (FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___c1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (collided)
		bool L_0 = __this->get_collided_31();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// collided = true;
		__this->set_collided_31((bool)1);
		// Stop();
		VirtActionInvoker0::Invoke(7 /* System.Void DigitalRuby.PyroParticles.FireBaseScript::Stop() */, __this);
		// if (ProjectileDestroyParticleSystemsOnCollision != null)
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_1 = __this->get_ProjectileDestroyParticleSystemsOnCollision_29();
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		// foreach (ParticleSystem p in ProjectileDestroyParticleSystemsOnCollision)
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_2 = __this->get_ProjectileDestroyParticleSystemsOnCollision_29();
		V_0 = L_2;
		V_1 = 0;
		goto IL_003a;
	}

IL_0029:
	{
		// foreach (ParticleSystem p in ProjectileDestroyParticleSystemsOnCollision)
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// GameObject.Destroy(p, 0.1f);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m751253D644DC9A2E111E5B57921992035E5D8401(L_6, (0.100000001f), /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_003a:
	{
		// foreach (ParticleSystem p in ProjectileDestroyParticleSystemsOnCollision)
		int32_t L_8 = V_1;
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0029;
		}
	}

IL_0040:
	{
		// if (ProjectileCollisionSound != null)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_10 = __this->get_ProjectileCollisionSound_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		// ProjectileCollisionSound.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_12 = __this->get_ProjectileCollisionSound_21();
		NullCheck(L_12);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_12, /*hidden argument*/NULL);
	}

IL_0059:
	{
		// if (c.contacts.Length != 0)
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_13 = ___c1;
		NullCheck(L_13);
		ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* L_14;
		L_14 = Collision_get_contacts_m8C3D39F3332DD2AC623A9FB5F2127CE2754AF54B(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		if (!(((RuntimeArray*)L_14)->max_length))
		{
			goto IL_00d5;
		}
	}
	{
		// ProjectileExplosionParticleSystem.transform.position = c.contacts[0].point;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_15 = __this->get_ProjectileExplosionParticleSystem_22();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_17 = ___c1;
		NullCheck(L_17);
		ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* L_18;
		L_18 = Collision_get_contacts_m8C3D39F3332DD2AC623A9FB5F2127CE2754AF54B(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = ContactPoint_get_point_mEA976D5E3BC57FAB78F68BE0AA17A97293AEA5BC((ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 *)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_16, L_19, /*hidden argument*/NULL);
		// ProjectileExplosionParticleSystem.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_20 = __this->get_ProjectileExplosionParticleSystem_22();
		NullCheck(L_20);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_20, /*hidden argument*/NULL);
		// FireBaseScript.CreateExplosion(c.contacts[0].point, ProjectileExplosionRadius, ProjectileExplosionForce);
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_21 = ___c1;
		NullCheck(L_21);
		ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* L_22;
		L_22 = Collision_get_contacts_m8C3D39F3332DD2AC623A9FB5F2127CE2754AF54B(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = ContactPoint_get_point_mEA976D5E3BC57FAB78F68BE0AA17A97293AEA5BC((ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 *)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		float L_24 = __this->get_ProjectileExplosionRadius_23();
		float L_25 = __this->get_ProjectileExplosionForce_24();
		FireBaseScript_CreateExplosion_m330741AF1B8CE11C879D47F18B5399829F6D39B6(L_23, L_24, L_25, /*hidden argument*/NULL);
		// if (CollisionDelegate != null)
		FireProjectileCollisionDelegate_t93697D2B8D055503F24A78C706943A06409DF855 * L_26 = __this->get_CollisionDelegate_30();
		if (!L_26)
		{
			goto IL_00d5;
		}
	}
	{
		// CollisionDelegate(this, c.contacts[0].point);
		FireProjectileCollisionDelegate_t93697D2B8D055503F24A78C706943A06409DF855 * L_27 = __this->get_CollisionDelegate_30();
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_28 = ___c1;
		NullCheck(L_28);
		ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* L_29;
		L_29 = Collision_get_contacts_m8C3D39F3332DD2AC623A9FB5F2127CE2754AF54B(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = ContactPoint_get_point_mEA976D5E3BC57FAB78F68BE0AA17A97293AEA5BC((ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 *)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		NullCheck(L_27);
		FireProjectileCollisionDelegate_Invoke_m990E632B0659B078D2D5719043E3426C58F35CE3(L_27, __this, L_30, /*hidden argument*/NULL);
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireProjectileScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireProjectileScript__ctor_m8E3B80CA881A250199DA38694D6127402BAE4B1E (FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 * __this, const RuntimeMethod* method)
{
	{
		// public float ProjectileExplosionRadius = 50.0f;
		__this->set_ProjectileExplosionRadius_23((50.0f));
		// public float ProjectileExplosionForce = 50.0f;
		__this->set_ProjectileExplosionForce_24((50.0f));
		// public float ProjectileColliderSpeed = 450.0f;
		__this->set_ProjectileColliderSpeed_26((450.0f));
		// public Vector3 ProjectileDirection = Vector3.forward;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_forward_mA6722B0932DA770D5C34C9E28D0E40220F099D50(/*hidden argument*/NULL);
		__this->set_ProjectileDirection_27(L_0);
		// public LayerMask ProjectileCollisionLayers = Physics.AllLayers;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_1;
		L_1 = LayerMask_op_Implicit_m04FD003A196C7FA5C824D854803493EA31AE58D2((-1), /*hidden argument*/NULL);
		__this->set_ProjectileCollisionLayers_28(L_1);
		FireBaseScript__ctor_mBAE6ECAF6DBCB371607FB582D92933AC16E5F847(__this, /*hidden argument*/NULL);
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
// System.Void GUIManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIManager_Start_m9C12692E1A444E1BD9EBD4BCC92D0B85A573B8A6 (GUIManager_t951430CCB75B4AF327EF5833F186E4C8C95C1F2F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GUIManager::onGuide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIManager_onGuide_m23D74AD0016F54D4E14935CAA5092E801248F0EA (GUIManager_t951430CCB75B4AF327EF5833F186E4C8C95C1F2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CCC8799C95FB9C975E4939A665FD040F54600C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Guide");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(_stringLiteral2CCC8799C95FB9C975E4939A665FD040F54600C4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GUIManager::onStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIManager_onStart_mA7D5B79F79517EC138B9ED5C17C2EB67E6B60D2E (GUIManager_t951430CCB75B4AF327EF5833F186E4C8C95C1F2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Object");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(_stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GUIManager::onQuiz()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIManager_onQuiz_m2D9A3ABC63EAB5699724720754678E0E57E9DE94 (GUIManager_t951430CCB75B4AF327EF5833F186E4C8C95C1F2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EF04AB12BBE0A20702B3B581ADA685EFE1679F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Quiz");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(_stringLiteral7EF04AB12BBE0A20702B3B581ADA685EFE1679F2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GUIManager::onBottle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIManager_onBottle_mD3C63F09D6ACD65F55DBDEAE9046394777A31248 (GUIManager_t951430CCB75B4AF327EF5833F186E4C8C95C1F2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90739BFD5DE6DC03519A4E10B0FF7EC0A2BDD7F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Bottle");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(_stringLiteral90739BFD5DE6DC03519A4E10B0FF7EC0A2BDD7F2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GUIManager::botHow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIManager_botHow_mBFB6A1932D8E10357C28F2DFE4AAF91634FC4953 (GUIManager_t951430CCB75B4AF327EF5833F186E4C8C95C1F2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD68A32FD6C1F791E4EA9570F9F650F6B5B40FB0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("bottleHow");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(_stringLiteralBD68A32FD6C1F791E4EA9570F9F650F6B5B40FB0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GUIManager::onSpoon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIManager_onSpoon_mEF5C5E4C71063ECDAD8B71CEF3FC17BB392C08E4 (GUIManager_t951430CCB75B4AF327EF5833F186E4C8C95C1F2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B0B208FC44BD03827504C266941B690D9395485);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Spoon");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(_stringLiteral8B0B208FC44BD03827504C266941B690D9395485, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GUIManager::spoonHow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIManager_spoonHow_m45C15ECB3B549C787D0A3F87C5EB333D0AEF20BB (GUIManager_t951430CCB75B4AF327EF5833F186E4C8C95C1F2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CB09FC91E7F015FB33E1777A36EF4BA5553EBA5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("spoonHow");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(_stringLiteral4CB09FC91E7F015FB33E1777A36EF4BA5553EBA5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GUIManager::onStyrofoam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIManager_onStyrofoam_mF4186B55AF7042CA899A3DD9A5810FD4E6C1AC13 (GUIManager_t951430CCB75B4AF327EF5833F186E4C8C95C1F2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8440E78AF99820F3DE0D5E1521EC372E9354ED82);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Styrofoam");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(_stringLiteral8440E78AF99820F3DE0D5E1521EC372E9354ED82, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GUIManager::styHow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIManager_styHow_mA1E23D42386F2756F3D5B5881498F13A027DA62C (GUIManager_t951430CCB75B4AF327EF5833F186E4C8C95C1F2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EB58CC51BCE0B0797DD5B5E984FDA768D7CFB16);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("styrofoamHow");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(_stringLiteral1EB58CC51BCE0B0797DD5B5E984FDA768D7CFB16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GUIManager::solBottle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIManager_solBottle_mA5C22F973213636DCDF664AC51CD1A42BCABF01B (GUIManager_t951430CCB75B4AF327EF5833F186E4C8C95C1F2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD68A32FD6C1F791E4EA9570F9F650F6B5B40FB0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("bottleHow");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(_stringLiteralBD68A32FD6C1F791E4EA9570F9F650F6B5B40FB0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GUIManager::onQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIManager_onQuit_m27662A1FDB7E522437CEFD1A6C81A3CFB4A1A1DA (GUIManager_t951430CCB75B4AF327EF5833F186E4C8C95C1F2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Menu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GUIManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIManager_Update_mDBC6DEE3514733AFC3F7C2332947E31E20D030A1 (GUIManager_t951430CCB75B4AF327EF5833F186E4C8C95C1F2F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GUIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIManager__ctor_mFAFD99ABA2CE8D0DBE580715C425125155F712F4 (GUIManager_t951430CCB75B4AF327EF5833F186E4C8C95C1F2F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void LevelReset::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelReset_OnPointerClick_m9625C8235343CB1DE6B089AD6F2D5ACF738072A4 (LevelReset_t5AF897661BE368D93B6E70E28DEC6F45A5B79905 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetSceneAt(0).name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetSceneAt_m0C00F498AF9AF1B29CC263BAB2C64A1B571648B7(0, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LevelReset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelReset__ctor_mFD2BB9AF1A9D7E795DDAAE2F33C1F0EB1FB31F07 (LevelReset_t5AF897661BE368D93B6E70E28DEC6F45A5B79905 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UnityEngine.AudioSource DigitalRuby.PyroParticles.LoopingAudioSource::get_AudioSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * LoopingAudioSource_get_AudioSource_m036098B24FF9EA542E870E359726B78C16B9649B (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * __this, const RuntimeMethod* method)
{
	{
		// public AudioSource AudioSource { get; private set; }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_U3CAudioSourceU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::set_AudioSource(UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_set_AudioSource_m93A8EB2543C66BD177679409E8D60361883F9D57 (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * __this, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___value0, const RuntimeMethod* method)
{
	{
		// public AudioSource AudioSource { get; private set; }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = ___value0;
		__this->set_U3CAudioSourceU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Single DigitalRuby.PyroParticles.LoopingAudioSource::get_TargetVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LoopingAudioSource_get_TargetVolume_m0217CC294653792B533E3E7E711EFA6C543F14DC (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * __this, const RuntimeMethod* method)
{
	{
		// public float TargetVolume { get; private set; }
		float L_0 = __this->get_U3CTargetVolumeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::set_TargetVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_set_TargetVolume_mDE6F4B06955DFB974DD7BDC53AB764850D7CB72F (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float TargetVolume { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CTargetVolumeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::.ctor(UnityEngine.MonoBehaviour,UnityEngine.AudioSource,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource__ctor_m9BE259D1A4326C2450656F561AB7AD66F50FABB6 (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * __this, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___script0, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource1, float ___startMultiplier2, float ___stopMultiplier3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// public LoopingAudioSource(MonoBehaviour script, AudioSource audioSource, float startMultiplier, float stopMultiplier)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// AudioSource = audioSource;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = ___audioSource1;
		LoopingAudioSource_set_AudioSource_m93A8EB2543C66BD177679409E8D60361883F9D57_inline(__this, L_0, /*hidden argument*/NULL);
		// if (audioSource != null)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = ___audioSource1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		// AudioSource.loop = true;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3;
		L_3 = LoopingAudioSource_get_AudioSource_m036098B24FF9EA542E870E359726B78C16B9649B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0(L_3, (bool)1, /*hidden argument*/NULL);
		// AudioSource.volume = 0.0f;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4;
		L_4 = LoopingAudioSource_get_AudioSource_m036098B24FF9EA542E870E359726B78C16B9649B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_4, (0.0f), /*hidden argument*/NULL);
		// AudioSource.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5;
		L_5 = LoopingAudioSource_get_AudioSource_m036098B24FF9EA542E870E359726B78C16B9649B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_5, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// TargetVolume = 1.0f;
		LoopingAudioSource_set_TargetVolume_mDE6F4B06955DFB974DD7BDC53AB764850D7CB72F_inline(__this, (1.0f), /*hidden argument*/NULL);
		// this.startMultiplier = currentMultiplier = startMultiplier;
		float L_6 = ___startMultiplier2;
		float L_7 = L_6;
		V_0 = L_7;
		__this->set_currentMultiplier_4(L_7);
		float L_8 = V_0;
		__this->set_startMultiplier_2(L_8);
		// this.stopMultiplier = stopMultiplier;
		float L_9 = ___stopMultiplier3;
		__this->set_stopMultiplier_3(L_9);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_Play_m74FF004BD3F9FC7A1ED2BB07D0C472F530D71F8F (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * __this, const RuntimeMethod* method)
{
	{
		// Play(TargetVolume);
		float L_0;
		L_0 = LoopingAudioSource_get_TargetVolume_m0217CC294653792B533E3E7E711EFA6C543F14DC_inline(__this, /*hidden argument*/NULL);
		LoopingAudioSource_Play_mD801D6CF396D7A7F8D4BBC8BA08B716BBE6D1288(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::Play(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_Play_mD801D6CF396D7A7F8D4BBC8BA08B716BBE6D1288 (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * __this, float ___targetVolume0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (AudioSource != null && !AudioSource.isPlaying)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = LoopingAudioSource_get_AudioSource_m036098B24FF9EA542E870E359726B78C16B9649B_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2;
		L_2 = LoopingAudioSource_get_AudioSource_m036098B24FF9EA542E870E359726B78C16B9649B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0042;
		}
	}
	{
		// AudioSource.volume = 0.0f;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4;
		L_4 = LoopingAudioSource_get_AudioSource_m036098B24FF9EA542E870E359726B78C16B9649B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_4, (0.0f), /*hidden argument*/NULL);
		// AudioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5;
		L_5 = LoopingAudioSource_get_AudioSource_m036098B24FF9EA542E870E359726B78C16B9649B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_5, /*hidden argument*/NULL);
		// currentMultiplier = startMultiplier;
		float L_6 = __this->get_startMultiplier_2();
		__this->set_currentMultiplier_4(L_6);
	}

IL_0042:
	{
		// TargetVolume = targetVolume;
		float L_7 = ___targetVolume0;
		LoopingAudioSource_set_TargetVolume_mDE6F4B06955DFB974DD7BDC53AB764850D7CB72F_inline(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_Stop_m03A289AB4F45BD7F8621CB07FD9F348D48ED93B5 (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (AudioSource != null && AudioSource.isPlaying)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = LoopingAudioSource_get_AudioSource_m036098B24FF9EA542E870E359726B78C16B9649B_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2;
		L_2 = LoopingAudioSource_get_AudioSource_m036098B24FF9EA542E870E359726B78C16B9649B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// TargetVolume = 0.0f;
		LoopingAudioSource_set_TargetVolume_mDE6F4B06955DFB974DD7BDC53AB764850D7CB72F_inline(__this, (0.0f), /*hidden argument*/NULL);
		// currentMultiplier = stopMultiplier;
		float L_4 = __this->get_stopMultiplier_3();
		__this->set_currentMultiplier_4(L_4);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_Update_mE0BC4667F8BCB2ECA598D6A041325E3497F4F2D1 (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (AudioSource != null && AudioSource.isPlaying &&
		//     (AudioSource.volume = Mathf.Lerp(AudioSource.volume, TargetVolume, Time.deltaTime / currentMultiplier)) == 0.0f)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = LoopingAudioSource_get_AudioSource_m036098B24FF9EA542E870E359726B78C16B9649B_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2;
		L_2 = LoopingAudioSource_get_AudioSource_m036098B24FF9EA542E870E359726B78C16B9649B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005d;
		}
	}
	{
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4;
		L_4 = LoopingAudioSource_get_AudioSource_m036098B24FF9EA542E870E359726B78C16B9649B_inline(__this, /*hidden argument*/NULL);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5;
		L_5 = LoopingAudioSource_get_AudioSource_m036098B24FF9EA542E870E359726B78C16B9649B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		float L_6;
		L_6 = AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556(L_5, /*hidden argument*/NULL);
		float L_7;
		L_7 = LoopingAudioSource_get_TargetVolume_m0217CC294653792B533E3E7E711EFA6C543F14DC_inline(__this, /*hidden argument*/NULL);
		float L_8;
		L_8 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		float L_9 = __this->get_currentMultiplier_4();
		float L_10;
		L_10 = Mathf_Lerp_m04D5C368C4E4F1AB78230C6809A6651951A52C86(L_6, L_7, ((float)((float)L_8/(float)L_9)), /*hidden argument*/NULL);
		float L_11 = L_10;
		V_0 = L_11;
		NullCheck(L_4);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_4, L_11, /*hidden argument*/NULL);
		float L_12 = V_0;
		if ((!(((float)L_12) == ((float)(0.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		// AudioSource.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_13;
		L_13 = LoopingAudioSource_get_AudioSource_m036098B24FF9EA542E870E359726B78C16B9649B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_13, /*hidden argument*/NULL);
	}

IL_005d:
	{
		// }
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
// System.Void MenuSceneLoader::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuSceneLoader_Awake_m18B4E09AAFDC9578469D066C50A8AC0054AA34AC (MenuSceneLoader_t0D08CE40978A1EAF3F262A54E41A1C6F8FDC3FC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Go == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_Go_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// m_Go = Instantiate(menuUI);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_menuUI_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75(L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75_RuntimeMethod_var);
		__this->set_m_Go_5(L_3);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void MenuSceneLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuSceneLoader__ctor_m27FD45CA6C6C8B579D2FA4EEDABBA35F2C7EF6BC (MenuSceneLoader_t0D08CE40978A1EAF3F262A54E41A1C6F8FDC3FC2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmCollisionDelegate__ctor_m3E7F5E9D66552393A316DD272325D7441A248BF9 (MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate::Invoke(DigitalRuby.PyroParticles.MeteorSwarmScript,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmCollisionDelegate_Invoke_m0F23F62B6A1DE104B107B65C65ADE7651A5A42FE (MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * __this, MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * ___script0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___meteor1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___script0, ___meteor1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___script0, ___meteor1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(targetMethod, ___script0, ___meteor1);
					else
						GenericVirtActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(targetMethod, ___script0, ___meteor1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___script0, ___meteor1);
					else
						VirtActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___script0, ___meteor1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___script0, ___meteor1, targetMethod);
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
						GenericInterfaceActionInvoker2< MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(targetMethod, targetThis, ___script0, ___meteor1);
					else
						GenericVirtActionInvoker2< MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(targetMethod, targetThis, ___script0, ___meteor1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___script0, ___meteor1);
					else
						VirtActionInvoker2< MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___script0, ___meteor1);
				}
			}
			else
			{
				if (___parameterCount == 1)
				{
					typedef void (*FunctionPointerType) (MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___script0, ___meteor1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___script0, ___meteor1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate::BeginInvoke(DigitalRuby.PyroParticles.MeteorSwarmScript,UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeteorSwarmCollisionDelegate_BeginInvoke_m981DB851E81E565586C5AAC94D753ABD1F3C795C (MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * __this, MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * ___script0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___meteor1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___script0;
	__d_args[1] = ___meteor1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmCollisionDelegate_EndInvoke_mEF15C008789240D93EAC30763409157489FE01A9 (MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript::add_CollisionDelegate(DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmScript_add_CollisionDelegate_m48507D3ED58D71D0989669F8CFAD54C7D917625A (MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * __this, MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * V_0 = NULL;
	MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * V_1 = NULL;
	MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * V_2 = NULL;
	{
		MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * L_0 = __this->get_CollisionDelegate_34();
		V_0 = L_0;
	}

IL_0007:
	{
		MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * L_1 = V_0;
		V_1 = L_1;
		MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * L_2 = V_1;
		MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 *)CastclassSealed((RuntimeObject*)L_4, MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76_il2cpp_TypeInfo_var));
		MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 ** L_5 = __this->get_address_of_CollisionDelegate_34();
		MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * L_6 = V_2;
		MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * L_7 = V_1;
		MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 *>((MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 **)L_5, L_6, L_7);
		V_0 = L_8;
		MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * L_9 = V_0;
		MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 *)L_9) == ((RuntimeObject*)(MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript::remove_CollisionDelegate(DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmScript_remove_CollisionDelegate_m469AEDB935D8640E34FA0B5245732D8B90C57418 (MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * __this, MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * V_0 = NULL;
	MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * V_1 = NULL;
	MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * V_2 = NULL;
	{
		MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * L_0 = __this->get_CollisionDelegate_34();
		V_0 = L_0;
	}

IL_0007:
	{
		MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * L_1 = V_0;
		V_1 = L_1;
		MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * L_2 = V_1;
		MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 *)CastclassSealed((RuntimeObject*)L_4, MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76_il2cpp_TypeInfo_var));
		MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 ** L_5 = __this->get_address_of_CollisionDelegate_34();
		MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * L_6 = V_2;
		MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * L_7 = V_1;
		MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 *>((MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 **)L_5, L_6, L_7);
		V_0 = L_8;
		MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * L_9 = V_0;
		MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 *)L_9) == ((RuntimeObject*)(MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Collections.IEnumerator DigitalRuby.PyroParticles.MeteorSwarmScript::SpawnMeteor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeteorSwarmScript_SpawnMeteor_mEE4A9289B986A4C917905195B7AFDC0441FF2759 (MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnMeteorU3Ed__18_t75D8CCF02D0E6F8ACF8912130334AEBBE60CCB2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnMeteorU3Ed__18_t75D8CCF02D0E6F8ACF8912130334AEBBE60CCB2C * L_0 = (U3CSpawnMeteorU3Ed__18_t75D8CCF02D0E6F8ACF8912130334AEBBE60CCB2C *)il2cpp_codegen_object_new(U3CSpawnMeteorU3Ed__18_t75D8CCF02D0E6F8ACF8912130334AEBBE60CCB2C_il2cpp_TypeInfo_var);
		U3CSpawnMeteorU3Ed__18__ctor_m90AB38BE3E904B809A184AACA692B6C9947D1334(L_0, 0, /*hidden argument*/NULL);
		U3CSpawnMeteorU3Ed__18_t75D8CCF02D0E6F8ACF8912130334AEBBE60CCB2C * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript::SpawnMeteors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmScript_SpawnMeteors_m1F9560B94CCCDF6B2CE9395792DEF894614CA840 (MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int count = (int)UnityEngine.Random.Range(MeteorsPerSecondRange.Minimum, MeteorsPerSecondRange.Maximum);
		RangeOfIntegers_tA21125C817566A8E1BF46B7668F4F572A2F46CD4 * L_0 = __this->get_address_of_MeteorsPerSecondRange_29();
		int32_t L_1 = L_0->get_Minimum_0();
		RangeOfIntegers_tA21125C817566A8E1BF46B7668F4F572A2F46CD4 * L_2 = __this->get_address_of_MeteorsPerSecondRange_29();
		int32_t L_3 = L_2->get_Maximum_1();
		int32_t L_4;
		L_4 = Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213(L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// for (int i = 0; i < count; i++)
		V_1 = 0;
		goto IL_0031;
	}

IL_0020:
	{
		// StartCoroutine(SpawnMeteor());
		RuntimeObject* L_5;
		L_5 = MeteorSwarmScript_SpawnMeteor_mEE4A9289B986A4C917905195B7AFDC0441FF2759(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_6;
		L_6 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_5, /*hidden argument*/NULL);
		// for (int i = 0; i < count; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0031:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmScript_Update_mA28748D12A780894AA169226ACF72C966571F7B3 (MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// base.Update();
		FireBaseScript_Update_m40D5270BB955C2E7BB1B7106C88D545685565446(__this, /*hidden argument*/NULL);
		// if (Duration > 0.0f && (elapsedSecond += Time.deltaTime) >= 1.0f)
		float L_0 = ((FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 *)__this)->get_Duration_7();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0047;
		}
	}
	{
		float L_1 = __this->get_elapsedSecond_35();
		float L_2;
		L_2 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		float L_3 = ((float)il2cpp_codegen_add((float)L_1, (float)L_2));
		V_0 = L_3;
		__this->set_elapsedSecond_35(L_3);
		float L_4 = V_0;
		if ((!(((float)L_4) >= ((float)(1.0f)))))
		{
			goto IL_0047;
		}
	}
	{
		// elapsedSecond = elapsedSecond - 1.0f;
		float L_5 = __this->get_elapsedSecond_35();
		__this->set_elapsedSecond_35(((float)il2cpp_codegen_subtract((float)L_5, (float)(1.0f))));
		// SpawnMeteors();
		MeteorSwarmScript_SpawnMeteors_m1F9560B94CCCDF6B2CE9395792DEF894614CA840(__this, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript::PlayCollisionSound(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmScript_PlayCollisionSound_m4DA79942BA50F96FCFEF2DA94945FF0C76A0F8F6 (MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * V_0 = NULL;
	int32_t V_1 = 0;
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_2 = NULL;
	{
		// if (ExplosionSounds == null || ExplosionSounds.Length == 0)
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_0 = __this->get_ExplosionSounds_33();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_1 = __this->get_ExplosionSounds_33();
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0011:
	{
		// return;
		return;
	}

IL_0012:
	{
		// AudioSource s = obj.GetComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___obj0;
		NullCheck(L_2);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3;
		L_3 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_2, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		V_0 = L_3;
		// if (s == null)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		// return;
		return;
	}

IL_0023:
	{
		// int index = UnityEngine.Random.Range(0, ExplosionSounds.Length);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_6 = __this->get_ExplosionSounds_33();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213(0, ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), /*hidden argument*/NULL);
		V_1 = L_7;
		// AudioClip clip = ExplosionSounds[index];
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_8 = __this->get_ExplosionSounds_33();
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		// s.PlayOneShot(clip, obj.transform.localScale.x);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_12 = V_0;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_13 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = ___obj0;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_x_2();
		NullCheck(L_12);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_12, L_13, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator DigitalRuby.PyroParticles.MeteorSwarmScript::CleanupMeteor(System.Single,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeteorSwarmScript_CleanupMeteor_mAE305A6C2B6ABED8AB95C0166297CA4CBB93219D (MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * __this, float ___delay0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCleanupMeteorU3Ed__22_t7BAAE116B67027D3ADDF6DBF47EA30A4F326EBD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCleanupMeteorU3Ed__22_t7BAAE116B67027D3ADDF6DBF47EA30A4F326EBD0 * L_0 = (U3CCleanupMeteorU3Ed__22_t7BAAE116B67027D3ADDF6DBF47EA30A4F326EBD0 *)il2cpp_codegen_object_new(U3CCleanupMeteorU3Ed__22_t7BAAE116B67027D3ADDF6DBF47EA30A4F326EBD0_il2cpp_TypeInfo_var);
		U3CCleanupMeteorU3Ed__22__ctor_m97DB95D2FADD058AEDB08B0FCF7CF991FD5365CA(L_0, 0, /*hidden argument*/NULL);
		U3CCleanupMeteorU3Ed__22_t7BAAE116B67027D3ADDF6DBF47EA30A4F326EBD0 * L_1 = L_0;
		float L_2 = ___delay0;
		NullCheck(L_1);
		L_1->set_delay_2(L_2);
		U3CCleanupMeteorU3Ed__22_t7BAAE116B67027D3ADDF6DBF47EA30A4F326EBD0 * L_3 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = ___obj1;
		NullCheck(L_3);
		L_3->set_obj_3(L_4);
		return L_3;
	}
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript::HandleCollision(UnityEngine.GameObject,UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmScript_HandleCollision_m424E53FF5778D974419459EEB54C396AB62891B5 (MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___col1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Renderer r = obj.GetComponent<Renderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___obj0;
		NullCheck(L_0);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1;
		L_1 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_0, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		V_0 = L_1;
		// if (r == null)
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// else if (CollisionDelegate != null)
		MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * L_4 = __this->get_CollisionDelegate_34();
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// CollisionDelegate(this, obj);
		MeteorSwarmCollisionDelegate_t49A6F33295353BBAB4A48CAC2C90898CFAE77B76 * L_5 = __this->get_CollisionDelegate_34();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = ___obj0;
		NullCheck(L_5);
		MeteorSwarmCollisionDelegate_Invoke_m0F23F62B6A1DE104B107B65C65ADE7651A5A42FE(L_5, __this, L_6, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// if (col.contacts.Length == 0)
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_7 = ___col1;
		NullCheck(L_7);
		ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* L_8;
		L_8 = Collision_get_contacts_m8C3D39F3332DD2AC623A9FB5F2127CE2754AF54B(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		if ((((RuntimeArray*)L_8)->max_length))
		{
			goto IL_0044;
		}
	}
	{
		// pos = obj.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = ___obj0;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// normal = -pos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_UnaryNegation_m56EB454031EABB53BA35FECF3F61A7E2332A2521_inline(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		// }
		goto IL_0068;
	}

IL_0044:
	{
		// pos = col.contacts[0].point;
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_14 = ___col1;
		NullCheck(L_14);
		ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* L_15;
		L_15 = Collision_get_contacts_m8C3D39F3332DD2AC623A9FB5F2127CE2754AF54B(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = ContactPoint_get_point_mEA976D5E3BC57FAB78F68BE0AA17A97293AEA5BC((ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 *)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		V_1 = L_16;
		// normal = col.contacts[0].normal;
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_17 = ___col1;
		NullCheck(L_17);
		ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* L_18;
		L_18 = Collision_get_contacts_m8C3D39F3332DD2AC623A9FB5F2127CE2754AF54B(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = ContactPoint_get_normal_m0561937E45F5356C7BB90D861422BD76B36D037A((ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 *)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		V_2 = L_19;
	}

IL_0068:
	{
		// MeteorExplosionParticleSystem.transform.position = pos;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_20 = __this->get_MeteorExplosionParticleSystem_21();
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_1;
		NullCheck(L_21);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_21, L_22, /*hidden argument*/NULL);
		// MeteorExplosionParticleSystem.transform.rotation = Quaternion.LookRotation(normal);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_23 = __this->get_MeteorExplosionParticleSystem_21();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26;
		L_26 = Quaternion_LookRotation_mC34E8010B8BA97C05C913588237CF92AEB3419B5(L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_24, L_26, /*hidden argument*/NULL);
		// MeteorExplosionParticleSystem.Emit(UnityEngine.Random.Range(10, 20));
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_27 = __this->get_MeteorExplosionParticleSystem_21();
		int32_t L_28;
		L_28 = Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213(((int32_t)10), ((int32_t)20), /*hidden argument*/NULL);
		NullCheck(L_27);
		ParticleSystem_Emit_m07EF0D2DA84EB04814DA7EE6B8618B008DE75F28(L_27, L_28, /*hidden argument*/NULL);
		// MeteorShrapnelParticleSystem.transform.position = col.contacts[0].point;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_29 = __this->get_MeteorShrapnelParticleSystem_22();
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_29, /*hidden argument*/NULL);
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_31 = ___col1;
		NullCheck(L_31);
		ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* L_32;
		L_32 = Collision_get_contacts_m8C3D39F3332DD2AC623A9FB5F2127CE2754AF54B(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = ContactPoint_get_point_mEA976D5E3BC57FAB78F68BE0AA17A97293AEA5BC((ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 *)((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_30, L_33, /*hidden argument*/NULL);
		// MeteorShrapnelParticleSystem.Emit(UnityEngine.Random.Range(10, 20));
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_34 = __this->get_MeteorShrapnelParticleSystem_22();
		int32_t L_35;
		L_35 = Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213(((int32_t)10), ((int32_t)20), /*hidden argument*/NULL);
		NullCheck(L_34);
		ParticleSystem_Emit_m07EF0D2DA84EB04814DA7EE6B8618B008DE75F28(L_34, L_35, /*hidden argument*/NULL);
		// PlayCollisionSound(obj);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = ___obj0;
		MeteorSwarmScript_PlayCollisionSound_m4DA79942BA50F96FCFEF2DA94945FF0C76A0F8F6(__this, L_36, /*hidden argument*/NULL);
		// GameObject.Destroy(r);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_37 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_37, /*hidden argument*/NULL);
		// StartCoroutine(CleanupMeteor(0.1f, obj));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = ___obj0;
		RuntimeObject* L_39;
		L_39 = MeteorSwarmScript_CleanupMeteor_mAE305A6C2B6ABED8AB95C0166297CA4CBB93219D(__this, (0.100000001f), L_38, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_40;
		L_40 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_39, /*hidden argument*/NULL);
		// GameObject.Destroy(obj, 4.0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = ___obj0;
		Object_Destroy_m751253D644DC9A2E111E5B57921992035E5D8401(L_41, (4.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmScript__ctor_m05C774072B4C59DA388E48993AE3EFAA7DE6755F (MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * __this, const RuntimeMethod* method)
{
	RangeOfIntegers_tA21125C817566A8E1BF46B7668F4F572A2F46CD4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public float TimeToImpact = 1.0f;
		__this->set_TimeToImpact_28((1.0f));
		// public RangeOfIntegers MeteorsPerSecondRange = new RangeOfIntegers { Minimum = 5, Maximum = 10 };
		il2cpp_codegen_initobj((&V_0), sizeof(RangeOfIntegers_tA21125C817566A8E1BF46B7668F4F572A2F46CD4 ));
		(&V_0)->set_Minimum_0(5);
		(&V_0)->set_Maximum_1(((int32_t)10));
		RangeOfIntegers_tA21125C817566A8E1BF46B7668F4F572A2F46CD4  L_0 = V_0;
		__this->set_MeteorsPerSecondRange_29(L_0);
		// public RangeOfFloats ScaleRange = new RangeOfFloats { Minimum = 0.25f, Maximum = 1.5f };
		il2cpp_codegen_initobj((&V_1), sizeof(RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7 ));
		(&V_1)->set_Minimum_0((0.25f));
		(&V_1)->set_Maximum_1((1.5f));
		RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7  L_1 = V_1;
		__this->set_ScaleRange_30(L_1);
		// public RangeOfFloats MeteorLifeTimeRange = new RangeOfFloats { Minimum = 4.0f, Maximum = 8.0f };
		il2cpp_codegen_initobj((&V_1), sizeof(RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7 ));
		(&V_1)->set_Minimum_0((4.0f));
		(&V_1)->set_Maximum_1((8.0f));
		RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7  L_2 = V_1;
		__this->set_MeteorLifeTimeRange_31(L_2);
		// private float elapsedSecond = 1.0f;
		__this->set_elapsedSecond_35((1.0f));
		FireBaseScript__ctor_mBAE6ECAF6DBCB371607FB582D92933AC16E5F847(__this, /*hidden argument*/NULL);
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
// System.Void PauseMenu::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Awake_mB04BCBDA84AEC654D1976EC3DF61A0CF68D2C86C (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_mC10A47F63047FC771E4FD5AF00284CEF8D43055F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MenuToggle = GetComponent <Toggle> ();
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_0;
		L_0 = Component_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_mC10A47F63047FC771E4FD5AF00284CEF8D43055F(__this, /*hidden argument*/Component_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_mC10A47F63047FC771E4FD5AF00284CEF8D43055F_RuntimeMethod_var);
		__this->set_m_MenuToggle_4(L_0);
		// }
		return;
	}
}
// System.Void PauseMenu::MenuOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MenuOn_m8973DC956DD5235381EE4ACB4A182AA5BF0EF2EA (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		// m_TimeScaleRef = Time.timeScale;
		float L_0;
		L_0 = Time_get_timeScale_mB50C8EA3A418FA8FF1FA36B9FF1EBB2E6581FC60(/*hidden argument*/NULL);
		__this->set_m_TimeScaleRef_5(L_0);
		// Time.timeScale = 0f;
		Time_set_timeScale_m7970134AA05A399001D2D3844EB16D60C5275013((0.0f), /*hidden argument*/NULL);
		// m_VolumeRef = AudioListener.volume;
		float L_1;
		L_1 = AudioListener_get_volume_m335A63461B29AD922F7BE67B8223FE4F4753B31A(/*hidden argument*/NULL);
		__this->set_m_VolumeRef_6(L_1);
		// AudioListener.volume = 0f;
		AudioListener_set_volume_mA0C47585895B6FEF38E90DA76C77129255B1B7CD((0.0f), /*hidden argument*/NULL);
		// m_Paused = true;
		__this->set_m_Paused_7((bool)1);
		// }
		return;
	}
}
// System.Void PauseMenu::MenuOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MenuOff_mCD1AF41F916B0C02D2FD6F82377DBEAFF7C30720 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = m_TimeScaleRef;
		float L_0 = __this->get_m_TimeScaleRef_5();
		Time_set_timeScale_m7970134AA05A399001D2D3844EB16D60C5275013(L_0, /*hidden argument*/NULL);
		// AudioListener.volume = m_VolumeRef;
		float L_1 = __this->get_m_VolumeRef_6();
		AudioListener_set_volume_mA0C47585895B6FEF38E90DA76C77129255B1B7CD(L_1, /*hidden argument*/NULL);
		// m_Paused = false;
		__this->set_m_Paused_7((bool)0);
		// }
		return;
	}
}
// System.Void PauseMenu::OnMenuStatusChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_OnMenuStatusChange_mD1E8BD9B9CCB274A83FFF0FE2E06E6ABD0361B4A (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		// if (m_MenuToggle.isOn && !m_Paused)
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_0 = __this->get_m_MenuToggle_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = __this->get_m_Paused_7();
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		// MenuOn();
		PauseMenu_MenuOn_m8973DC956DD5235381EE4ACB4A182AA5BF0EF2EA(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001c:
	{
		// else if (!m_MenuToggle.isOn && m_Paused)
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_3 = __this->get_m_MenuToggle_4();
		NullCheck(L_3);
		bool L_4;
		L_4 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		bool L_5 = __this->get_m_Paused_7();
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// MenuOff();
		PauseMenu_MenuOff_mCD1AF41F916B0C02D2FD6F82377DBEAFF7C30720(__this, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void PauseMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Update_m191CABDC11442A2CC104FC8B3244D04826E7BD57 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		// if(Input.GetKeyUp(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyUp_m3DFABEAD727BF79544B63728EAF7CBBB6A631A29(((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		// m_MenuToggle.isOn = !m_MenuToggle.isOn;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_1 = __this->get_m_MenuToggle_4();
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_2 = __this->get_m_MenuToggle_4();
		NullCheck(L_2);
		bool L_3;
		L_3 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507(L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// Cursor.visible = m_MenuToggle.isOn;//force the cursor visible if anythign had hidden it
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_4 = __this->get_m_MenuToggle_4();
		NullCheck(L_4);
		bool L_5;
		L_5 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_4, /*hidden argument*/NULL);
		Cursor_set_visible_m582E2CFB7AD42538E513FDE6A57B62631DC801E6(L_5, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void PauseMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__ctor_mA1A281F3359C234E5CF24FFEAC20C12C48D69018 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		// private float m_TimeScaleRef = 1f;
		__this->set_m_TimeScaleRef_5((1.0f));
		// private float m_VolumeRef = 1f;
		__this->set_m_VolumeRef_6((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.SceneUtils.PlaceTargetWithMouse::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTargetWithMouse_Update_m28E68FE68FA0185C0D20A6001F4C262868348BE3 (PlaceTargetWithMouse_t384CCC910074BE48EFA5F779E972A03374E97310 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB4D84F7C62E7D302A9A088AA8E292DF6A477309);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m689599122AC9F35D1FCCA2BF2414387472B0799F(0, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Camera_get_main_m4E3DB1CD03E916476426AB3F78B26F21690EE26B(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Input_get_mousePosition_mBCEAE9AEF8827512D6ADF03AB336DFA2C8A223E0(/*hidden argument*/NULL);
		NullCheck(L_1);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_3;
		L_3 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_1, L_2, /*hidden argument*/NULL);
		// if (!Physics.Raycast(ray, out hit))
		bool L_4;
		L_4 = Physics_Raycast_m4BD6E5347507B86D0D50C5834607BB23D3DBD82A(L_3, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		// return;
		return;
	}

IL_0022:
	{
		// transform.position = hit.point + hit.normal*surfaceOffset;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		float L_8 = __this->get_surfaceOffset_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_7, L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_6, L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_10, /*hidden argument*/NULL);
		// if (setTargetOn != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_setTargetOn_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// setTargetOn.SendMessage("SetTarget", transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_setTargetOn_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7(L_13, _stringLiteralAB4D84F7C62E7D302A9A088AA8E292DF6A477309, L_14, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.PlaceTargetWithMouse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTargetWithMouse__ctor_m3582FA7DC3CF8198244F9EB014FE12AC97985FE7 (PlaceTargetWithMouse_t384CCC910074BE48EFA5F779E972A03374E97310 * __this, const RuntimeMethod* method)
{
	{
		// public float surfaceOffset = 1.5f;
		__this->set_surfaceOffset_4((1.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Play::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Play_Start_mBDAD37B6F3CDED9F86D2B03013C6D21F80F9BAAC (Play_t1F2CB09AC2D3EE6C0B59D267A946EB18E3C43810 * __this, const RuntimeMethod* method)
{
	{
		// index = 0;
		__this->set_index_5(0);
		// }
		return;
	}
}
// System.Void Play::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Play_Update_mA196DFDF39784F03E088150B07BBE48FEBCE91CF (Play_t1F2CB09AC2D3EE6C0B59D267A946EB18E3C43810 * __this, const RuntimeMethod* method)
{
	{
		// if (index >= 4) index = 4;
		int32_t L_0 = __this->get_index_5();
		if ((((int32_t)L_0) < ((int32_t)4)))
		{
			goto IL_0010;
		}
	}
	{
		// if (index >= 4) index = 4;
		__this->set_index_5(4);
	}

IL_0010:
	{
		// if (index < 0) index = 0;
		int32_t L_1 = __this->get_index_5();
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		// if (index < 0) index = 0;
		__this->set_index_5(0);
	}

IL_0020:
	{
		// if (index == 0) {
		int32_t L_2 = __this->get_index_5();
		if (L_2)
		{
			goto IL_003b;
		}
	}
	{
		// tombol[0].gameObject.SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_tombol_4();
		NullCheck(L_3);
		int32_t L_4 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Play::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Play_Next_mC67303B59144F4F0CAFF491E88D3518F142E2F48 (Play_t1F2CB09AC2D3EE6C0B59D267A946EB18E3C43810 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// index += 1;
		int32_t L_0 = __this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// for (int i = 0; i < tombol.Length; i++) {
		V_0 = 0;
		goto IL_0041;
	}

IL_0012:
	{
		// tombol[i].gameObject.SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_tombol_4();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// tombol[index].gameObject.SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_tombol_4();
		int32_t L_7 = __this->get_index_5();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// for (int i = 0; i < tombol.Length; i++) {
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0041:
	{
		// for (int i = 0; i < tombol.Length; i++) {
		int32_t L_12 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = __this->get_tombol_4();
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		// Debug.Log(index);
		int32_t L_14 = __this->get_index_5();
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Play::Prev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Play_Prev_m0AC9D9E3D1E4C9BF7BA3D39ACE9A48E42A99246B (Play_t1F2CB09AC2D3EE6C0B59D267A946EB18E3C43810 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// index -= 1;
		int32_t L_0 = __this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// for (int i = 0; i < tombol.Length; i++) {
		V_0 = 0;
		goto IL_0041;
	}

IL_0012:
	{
		// tombol[i].gameObject.SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_tombol_4();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// tombol[index].gameObject.SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_tombol_4();
		int32_t L_7 = __this->get_index_5();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// for (int i = 0; i < tombol.Length; i++) {
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0041:
	{
		// for (int i = 0; i < tombol.Length; i++) {
		int32_t L_12 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = __this->get_tombol_4();
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		// Debug.Log(index);
		int32_t L_14 = __this->get_index_5();
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Play::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Play__ctor_m2CB49325DB16A46C3CB542E64814AA34F6325221 (Play_t1F2CB09AC2D3EE6C0B59D267A946EB18E3C43810 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneAndURLLoader::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAndURLLoader_Awake_m8F276157A2A5FA943EF7918D6CCDB81273317E23 (SceneAndURLLoader_t8B9BB2A4140000EE42EA4DEBAAA47DAFB0E18B5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisPauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_m98153975CAC553ED05CBA0FDC20E56CCF659A615_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PauseMenu = GetComponentInChildren <PauseMenu> ();
		PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * L_0;
		L_0 = Component_GetComponentInChildren_TisPauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_m98153975CAC553ED05CBA0FDC20E56CCF659A615(__this, /*hidden argument*/Component_GetComponentInChildren_TisPauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_m98153975CAC553ED05CBA0FDC20E56CCF659A615_RuntimeMethod_var);
		__this->set_m_PauseMenu_4(L_0);
		// }
		return;
	}
}
// System.Void SceneAndURLLoader::SceneLoad(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAndURLLoader_SceneLoad_m2B09BD48F419F49A6BD461DBC7B2290EC8632B06 (SceneAndURLLoader_t8B9BB2A4140000EE42EA4DEBAAA47DAFB0E18B5E * __this, String_t* ___sceneName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PauseMenu.MenuOff ();
		PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * L_0 = __this->get_m_PauseMenu_4();
		NullCheck(L_0);
		PauseMenu_MenuOff_mCD1AF41F916B0C02D2FD6F82377DBEAFF7C30720(L_0, /*hidden argument*/NULL);
		// SceneManager.LoadScene(sceneName);
		String_t* L_1 = ___sceneName0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneAndURLLoader::LoadURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAndURLLoader_LoadURL_m47E3E286E80F2D5B3E6A164C32F7E1B473532AE2 (SceneAndURLLoader_t8B9BB2A4140000EE42EA4DEBAAA47DAFB0E18B5E * __this, String_t* ___url0, const RuntimeMethod* method)
{
	{
		// Application.OpenURL(url);
		String_t* L_0 = ___url0;
		Application_OpenURL_m136F20631CCBEEED3ACC98C2460E9218AF74B8BC(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneAndURLLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAndURLLoader__ctor_m6DEE574FADF9E3E894594690CB2755F69D5D4BE5 (SceneAndURLLoader_t8B9BB2A4140000EE42EA4DEBAAA47DAFB0E18B5E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DigitalRuby.PyroParticles.SingleLineAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleLineAttribute__ctor_m7533C997E31C9A34583DD856E98415AB3FA161A6 (SingleLineAttribute_t42A09A9950AF7182B25ECF142CB94CF58885BDE4 * __this, String_t* ___tooltip0, const RuntimeMethod* method)
{
	{
		// public SingleLineAttribute(string tooltip) { Tooltip = tooltip; }
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
		// public SingleLineAttribute(string tooltip) { Tooltip = tooltip; }
		String_t* L_0 = ___tooltip0;
		SingleLineAttribute_set_Tooltip_m3F34E97789D0B0FB68467893DB84C47EEEB93DE9_inline(__this, L_0, /*hidden argument*/NULL);
		// public SingleLineAttribute(string tooltip) { Tooltip = tooltip; }
		return;
	}
}
// System.String DigitalRuby.PyroParticles.SingleLineAttribute::get_Tooltip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SingleLineAttribute_get_Tooltip_mC82BB7AC419D2EE4C947D5790F6F1DAF855E629C (SingleLineAttribute_t42A09A9950AF7182B25ECF142CB94CF58885BDE4 * __this, const RuntimeMethod* method)
{
	{
		// public string Tooltip { get; private set; }
		String_t* L_0 = __this->get_U3CTooltipU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void DigitalRuby.PyroParticles.SingleLineAttribute::set_Tooltip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleLineAttribute_set_Tooltip_m3F34E97789D0B0FB68467893DB84C47EEEB93DE9 (SingleLineAttribute_t42A09A9950AF7182B25ECF142CB94CF58885BDE4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Tooltip { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTooltipU3Ek__BackingField_0(L_0);
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
// System.Void UnityStandardAssets.SceneUtils.SlowMoButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowMoButton_Start_m8F334286C4BEE772EAA4842F431E01BB4929A04C (SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E * __this, const RuntimeMethod* method)
{
	{
		// m_SlowMo = false;
		__this->set_m_SlowMo_9((bool)0);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.SlowMoButton::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowMoButton_OnDestroy_mE8D51330ED641B12795E984B6F0ECCB00536DBDB (SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 1;
		Time_set_timeScale_m7970134AA05A399001D2D3844EB16D60C5275013((1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.SlowMoButton::ChangeSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowMoButton_ChangeSpeed_m0C19576C039AA7BBBC478C87A6C964376BA58EAB (SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * V_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B3_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B2_0 = NULL;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * G_B4_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B4_1 = NULL;
	float G_B8_0 = 0.0f;
	{
		// m_SlowMo = !m_SlowMo;
		bool L_0 = __this->get_m_SlowMo_9();
		__this->set_m_SlowMo_9((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// var image = button.targetGraphic as Image;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = __this->get_button_8();
		NullCheck(L_1);
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_2;
		L_2 = Selectable_get_targetGraphic_mF2D1BFB9DE33BAB553933533CC4A9135A37F4A72_inline(L_1, /*hidden argument*/NULL);
		V_0 = ((Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C *)IsInstClass((RuntimeObject*)L_2, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_il2cpp_TypeInfo_var));
		// if (image != null)
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// image.sprite = m_SlowMo ? SlowSpeedTex : FullSpeedTex;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = V_0;
		bool L_6 = __this->get_m_SlowMo_9();
		G_B2_0 = L_5;
		if (L_6)
		{
			G_B3_0 = L_5;
			goto IL_003a;
		}
	}
	{
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_7 = __this->get_FullSpeedTex_4();
		G_B4_0 = L_7;
		G_B4_1 = G_B2_0;
		goto IL_0040;
	}

IL_003a:
	{
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_8 = __this->get_SlowSpeedTex_5();
		G_B4_0 = L_8;
		G_B4_1 = G_B3_0;
	}

IL_0040:
	{
		NullCheck(G_B4_1);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(G_B4_1, G_B4_0, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// button.targetGraphic = image;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_9 = __this->get_button_8();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = V_0;
		NullCheck(L_9);
		Selectable_set_targetGraphic_m668325D43E18A35560B4176477D004ECDB9C9604(L_9, L_10, /*hidden argument*/NULL);
		// Time.timeScale = m_SlowMo ? slowSpeed : fullSpeed;
		bool L_11 = __this->get_m_SlowMo_9();
		if (L_11)
		{
			goto IL_0061;
		}
	}
	{
		float L_12 = __this->get_fullSpeed_6();
		G_B8_0 = L_12;
		goto IL_0067;
	}

IL_0061:
	{
		float L_13 = __this->get_slowSpeed_7();
		G_B8_0 = L_13;
	}

IL_0067:
	{
		Time_set_timeScale_m7970134AA05A399001D2D3844EB16D60C5275013(G_B8_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.SlowMoButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowMoButton__ctor_m993A85A43C7462445119B63636FD65A6F8C0F6BF (SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E * __this, const RuntimeMethod* method)
{
	{
		// public float fullSpeed = 1;
		__this->set_fullSpeed_6((1.0f));
		// public float slowSpeed = 0.3f;
		__this->set_slowSpeed_7((0.300000012f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Switch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Switch_Start_m7E77D8E0F76BE134DBFA8F8B55FA5C31EF15CC3B (Switch_tDF3C31A4D27AB56642A943CB649C7E9AAEA048CB * __this, const RuntimeMethod* method)
{
	{
		// index = 0;
		__this->set_index_5(0);
		// }
		return;
	}
}
// System.Void Switch::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Switch_Update_mEDB715DBC1BA952C2269449382DC80182D196847 (Switch_tDF3C31A4D27AB56642A943CB649C7E9AAEA048CB * __this, const RuntimeMethod* method)
{
	{
		// if (index >= 4) index = 4;
		int32_t L_0 = __this->get_index_5();
		if ((((int32_t)L_0) < ((int32_t)4)))
		{
			goto IL_0010;
		}
	}
	{
		// if (index >= 4) index = 4;
		__this->set_index_5(4);
	}

IL_0010:
	{
		// if (index < 0) index = 0;
		int32_t L_1 = __this->get_index_5();
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		// if (index < 0) index = 0;
		__this->set_index_5(0);
	}

IL_0020:
	{
		// if (index == 0) {
		int32_t L_2 = __this->get_index_5();
		if (L_2)
		{
			goto IL_003b;
		}
	}
	{
		// tombol[0].gameObject.SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_tombol_4();
		NullCheck(L_3);
		int32_t L_4 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Switch::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Switch_Next_m12A58B1F5A2995625DEF32797311E359A65E11BF (Switch_tDF3C31A4D27AB56642A943CB649C7E9AAEA048CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// index += 1;
		int32_t L_0 = __this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// for (int i = 0; i < tombol.Length; i++) {
		V_0 = 0;
		goto IL_0041;
	}

IL_0012:
	{
		// tombol[i].gameObject.SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_tombol_4();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// tombol[index].gameObject.SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_tombol_4();
		int32_t L_7 = __this->get_index_5();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// for (int i = 0; i < tombol.Length; i++) {
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0041:
	{
		// for (int i = 0; i < tombol.Length; i++) {
		int32_t L_12 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = __this->get_tombol_4();
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		// Debug.Log(index);
		int32_t L_14 = __this->get_index_5();
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Switch::Prev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Switch_Prev_mF1B90EF306FBDE497EDC03D719D4C45969C344F6 (Switch_tDF3C31A4D27AB56642A943CB649C7E9AAEA048CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// index -= 1;
		int32_t L_0 = __this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// for (int i = 0; i < tombol.Length; i++) {
		V_0 = 0;
		goto IL_0041;
	}

IL_0012:
	{
		// tombol[i].gameObject.SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_tombol_4();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// tombol[index].gameObject.SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_tombol_4();
		int32_t L_7 = __this->get_index_5();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// for (int i = 0; i < tombol.Length; i++) {
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0041:
	{
		// for (int i = 0; i < tombol.Length; i++) {
		int32_t L_12 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = __this->get_tombol_4();
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		// Debug.Log(index);
		int32_t L_14 = __this->get_index_5();
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Switch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Switch__ctor_m1F7974E3C0BF7050AAAD71640CDF1538DBF4A454 (Switch_tDF3C31A4D27AB56642A943CB649C7E9AAEA048CB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void alwaysFaceCamera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void alwaysFaceCamera_Start_m8358B04727E1272E3B2DAC0C254DE2DECD3FDBFB (alwaysFaceCamera_t9D7AA414156CAE2B4542895B36DE3F800AAE1157 * __this, const RuntimeMethod* method)
{
	{
		// camera = Camera.main.transform;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_m4E3DB1CD03E916476426AB3F78B26F21690EE26B(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		__this->set_camera_4(L_1);
		// }
		return;
	}
}
// System.Void alwaysFaceCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void alwaysFaceCamera_Update_m421E148580AAF3674ABD51AA72908211E49828B4 (alwaysFaceCamera_t9D7AA414156CAE2B4542895B36DE3F800AAE1157 * __this, const RuntimeMethod* method)
{
	{
		// transform.LookAt(camera);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_camera_4();
		NullCheck(L_0);
		Transform_LookAt_m49185D782014D16DA747C1296BEBAC3FB3CEDC1F(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void alwaysFaceCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void alwaysFaceCamera__ctor_mF453353689F04B7BA4A53EEC69B6B49BFFBD5711 (alwaysFaceCamera_t9D7AA414156CAE2B4542895B36DE3F800AAE1157 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void lookAt::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lookAt_Start_mC8D0741BD8237C65626C171DE31FDF85575CAF0A (lookAt_t973892DDC94633574DFF99FC44F5F63855E36587 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void lookAt::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lookAt_Update_mFF99DD020268BE18949040570CE08D2919F02C16 (lookAt_t973892DDC94633574DFF99FC44F5F63855E36587 * __this, const RuntimeMethod* method)
{
	{
		// transform.LookAt(cam);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_cam_4();
		NullCheck(L_0);
		Transform_LookAt_m49185D782014D16DA747C1296BEBAC3FB3CEDC1F(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void lookAt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lookAt__ctor_m3A25B9504DC0693846F071634ABBFB77448B73A9 (lookAt_t973892DDC94633574DFF99FC44F5F63855E36587 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCleanupEverythingCoRoutineU3Ed__12__ctor_m9A356857E81380EB9CEDC3AB846A44D18A714DA3 (U3CCleanupEverythingCoRoutineU3Ed__12_t7932D7215487FF0301D02ECA9017F1897A3D7B61 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCleanupEverythingCoRoutineU3Ed__12_System_IDisposable_Dispose_m482CAC44C55B069C4C22F45CEB9B40C868401CDE (U3CCleanupEverythingCoRoutineU3Ed__12_t7932D7215487FF0301D02ECA9017F1897A3D7B61 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCleanupEverythingCoRoutineU3Ed__12_MoveNext_mF1E151FE6FE4B4D5B84634C132E029D8A0E23C2E (U3CCleanupEverythingCoRoutineU3Ed__12_t7932D7215487FF0301D02ECA9017F1897A3D7B61 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(StopTime + 2.0f);
		FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_StopTime_6();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, ((float)il2cpp_codegen_add((float)L_5, (float)(2.0f))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GameObject.Destroy(gameObject);
		FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * L_7 = V_1;
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_8, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCleanupEverythingCoRoutineU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m63F8F36DF04FAA6BD1F1B364D8185CB5D2E0BBF6 (U3CCleanupEverythingCoRoutineU3Ed__12_t7932D7215487FF0301D02ECA9017F1897A3D7B61 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCleanupEverythingCoRoutineU3Ed__12_System_Collections_IEnumerator_Reset_m94682576657158E61AE8B1AF2DA881E589F454C1 (U3CCleanupEverythingCoRoutineU3Ed__12_t7932D7215487FF0301D02ECA9017F1897A3D7B61 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCleanupEverythingCoRoutineU3Ed__12_System_Collections_IEnumerator_Reset_m94682576657158E61AE8B1AF2DA881E589F454C1_RuntimeMethod_var)));
	}
}
// System.Object DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCleanupEverythingCoRoutineU3Ed__12_System_Collections_IEnumerator_get_Current_mAD7A2B30D8AC1C4E06084DE9A2260EA09E110A40 (U3CCleanupEverythingCoRoutineU3Ed__12_t7932D7215487FF0301D02ECA9017F1897A3D7B61 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCollisionAfterDelayU3Ed__12__ctor_m48C5F03E41B8736D72D7A262B4D63ECF1EBA19BA (U3CSendCollisionAfterDelayU3Ed__12_tE61D4A4F52D44C89486DA9D815F14F712F2723EF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCollisionAfterDelayU3Ed__12_System_IDisposable_Dispose_mB22902DE104EE43E9D4EBF1941244B7DAF83D0A8 (U3CSendCollisionAfterDelayU3Ed__12_tE61D4A4F52D44C89486DA9D815F14F712F2723EF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSendCollisionAfterDelayU3Ed__12_MoveNext_m7AA5905F611953AB63C86CA061062CF9D5D03EF2 (U3CSendCollisionAfterDelayU3Ed__12_tE61D4A4F52D44C89486DA9D815F14F712F2723EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 * V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(ProjectileColliderDelay);
		FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_ProjectileColliderDelay_25();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Vector3 dir = ProjectileDirection * ProjectileColliderSpeed;
		FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 * L_7 = V_1;
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = L_7->get_ProjectileDirection_27();
		FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 * L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->get_ProjectileColliderSpeed_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_8, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// dir = ProjectileColliderObject.transform.rotation * dir;
		FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 * L_12 = V_1;
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12->get_ProjectileColliderObject_20();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Quaternion_op_Multiply_mDEAB1A882C07A9520D77EB35473F71AAE74452BC(L_15, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		// ProjectileColliderObject.GetComponent<Rigidbody>().velocity = dir;
		FireProjectileScript_tD79FF678C58DC23C89F6E726E8BA8D4BC69CCAF1 * L_18 = V_1;
		NullCheck(L_18);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = L_18->get_ProjectileColliderObject_20();
		NullCheck(L_19);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_20;
		L_20 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_19, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_2;
		NullCheck(L_20);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_20, L_21, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSendCollisionAfterDelayU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB90E5A362A9C72A8DA21985AE74DC7F310BE088F (U3CSendCollisionAfterDelayU3Ed__12_tE61D4A4F52D44C89486DA9D815F14F712F2723EF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCollisionAfterDelayU3Ed__12_System_Collections_IEnumerator_Reset_mF19A4E1894ED6D808B4F9EC4FAD7E1CDEBA66ACB (U3CSendCollisionAfterDelayU3Ed__12_tE61D4A4F52D44C89486DA9D815F14F712F2723EF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendCollisionAfterDelayU3Ed__12_System_Collections_IEnumerator_Reset_mF19A4E1894ED6D808B4F9EC4FAD7E1CDEBA66ACB_RuntimeMethod_var)));
	}
}
// System.Object DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSendCollisionAfterDelayU3Ed__12_System_Collections_IEnumerator_get_Current_m1984E1F87591727E093C443E4869D9BD5CA1C23F (U3CSendCollisionAfterDelayU3Ed__12_tE61D4A4F52D44C89486DA9D815F14F712F2723EF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCleanupMeteorU3Ed__22__ctor_m97DB95D2FADD058AEDB08B0FCF7CF991FD5365CA (U3CCleanupMeteorU3Ed__22_t7BAAE116B67027D3ADDF6DBF47EA30A4F326EBD0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCleanupMeteorU3Ed__22_System_IDisposable_Dispose_mC9C96C56C0FAD1DB3ADA7D9C47493926F337ECED (U3CCleanupMeteorU3Ed__22_t7BAAE116B67027D3ADDF6DBF47EA30A4F326EBD0 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCleanupMeteorU3Ed__22_MoveNext_mF5BF707A22DFA0C2ED6ECCB55970826E40E48275 (U3CCleanupMeteorU3Ed__22_t7BAAE116B67027D3ADDF6DBF47EA30A4F326EBD0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01_m6BF02D14A2BF23863B8F688EEA112E78DD7B4AB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delay);
		float L_3 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GameObject.Destroy(obj.GetComponent<Collider>());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_obj_3();
		NullCheck(L_5);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_6;
		L_6 = GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08(L_5, /*hidden argument*/GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_6, /*hidden argument*/NULL);
		// GameObject.Destroy(obj.GetComponent<Rigidbody>());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_obj_3();
		NullCheck(L_7);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_8;
		L_8 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_7, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_8, /*hidden argument*/NULL);
		// GameObject.Destroy(obj.GetComponent<TrailRenderer>());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_obj_3();
		NullCheck(L_9);
		TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01 * L_10;
		L_10 = GameObject_GetComponent_TisTrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01_m6BF02D14A2BF23863B8F688EEA112E78DD7B4AB8(L_9, /*hidden argument*/GameObject_GetComponent_TisTrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01_m6BF02D14A2BF23863B8F688EEA112E78DD7B4AB8_RuntimeMethod_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_10, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCleanupMeteorU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDAD2F5D109CEC1128B3B3502BF0E2DA9EA5254E6 (U3CCleanupMeteorU3Ed__22_t7BAAE116B67027D3ADDF6DBF47EA30A4F326EBD0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCleanupMeteorU3Ed__22_System_Collections_IEnumerator_Reset_m1A8879A925745D2EFE032B3C901F3E3C604EF8C0 (U3CCleanupMeteorU3Ed__22_t7BAAE116B67027D3ADDF6DBF47EA30A4F326EBD0 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCleanupMeteorU3Ed__22_System_Collections_IEnumerator_Reset_m1A8879A925745D2EFE032B3C901F3E3C604EF8C0_RuntimeMethod_var)));
	}
}
// System.Object DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCleanupMeteorU3Ed__22_System_Collections_IEnumerator_get_Current_m3587883C941A7EB7DFD7175D96F20F4599A9189A (U3CCleanupMeteorU3Ed__22_t7BAAE116B67027D3ADDF6DBF47EA30A4F326EBD0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnMeteorU3Ed__18__ctor_m90AB38BE3E904B809A184AACA692B6C9947D1334 (U3CSpawnMeteorU3Ed__18_t75D8CCF02D0E6F8ACF8912130334AEBBE60CCB2C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnMeteorU3Ed__18_System_IDisposable_Dispose_m915D80791D67AA377F66880691C371102C829E54 (U3CSpawnMeteorU3Ed__18_t75D8CCF02D0E6F8ACF8912130334AEBBE60CCB2C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnMeteorU3Ed__18_MoveNext_mE15D5F9CA69BAA38C7185629F4E066E8FB02D13E (U3CSpawnMeteorU3Ed__18_t75D8CCF02D0E6F8ACF8912130334AEBBE60CCB2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D_m188552FE09C7581B8330EDAB30D316C71C63F19B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01_m6BF02D14A2BF23863B8F688EEA112E78DD7B4AB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	float V_4 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_10 = NULL;
	float V_11 = 0.0f;
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * V_12 = NULL;
	int32_t V_13 = 0;
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_14 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float delay = UnityEngine.Random.Range(0.0f, 1.0f);
		float L_4;
		L_4 = Random_Range_mA944A98B82AFE4D46D05EF533ED0068148EFAEA5((0.0f), (1.0f), /*hidden argument*/NULL);
		V_11 = L_4;
		// yield return new WaitForSeconds(delay);
		float L_5 = V_11;
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0045:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Vector3 src = Source + (UnityEngine.Random.insideUnitSphere * SourceRadius);
		MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * L_7 = V_1;
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = L_7->get_Source_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Random_get_insideUnitSphere_m34D2CBC8806C3E47E7C550DE77304E3A48EB2F40(/*hidden argument*/NULL);
		MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * L_10 = V_1;
		NullCheck(L_10);
		float L_11 = L_10->get_SourceRadius_27();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_9, L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_8, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		// GameObject meteor = GameObject.Instantiate(MeteorPrefab);
		MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * L_14 = V_1;
		NullCheck(L_14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = L_14->get_MeteorPrefab_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75(L_15, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mE8DB64A28C8709FB890A9770C8F35CD32CD04C75_RuntimeMethod_var);
		V_3 = L_16;
		// float scale = UnityEngine.Random.Range(ScaleRange.Minimum, ScaleRange.Maximum);
		MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * L_17 = V_1;
		NullCheck(L_17);
		RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7 * L_18 = L_17->get_address_of_ScaleRange_30();
		float L_19 = L_18->get_Minimum_0();
		MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * L_20 = V_1;
		NullCheck(L_20);
		RangeOfFloats_tEB67E636341DC4925D3CFBC64585D42CF1DAEFD7 * L_21 = L_20->get_address_of_ScaleRange_30();
		float L_22 = L_21->get_Maximum_1();
		float L_23;
		L_23 = Random_Range_mA944A98B82AFE4D46D05EF533ED0068148EFAEA5(L_19, L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		// meteor.transform.localScale = new Vector3(scale, scale, scale);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = V_3;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		float L_26 = V_4;
		float L_27 = V_4;
		float L_28 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_29), L_26, L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_25, L_29, /*hidden argument*/NULL);
		// meteor.transform.position = src;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = V_3;
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_2;
		NullCheck(L_31);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_31, L_32, /*hidden argument*/NULL);
		// Vector3 dest = gameObject.transform.position + (UnityEngine.Random.insideUnitSphere * DestinationRadius);
		MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * L_33 = V_1;
		NullCheck(L_33);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_35, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Random_get_insideUnitSphere_m34D2CBC8806C3E47E7C550DE77304E3A48EB2F40(/*hidden argument*/NULL);
		MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * L_38 = V_1;
		NullCheck(L_38);
		float L_39 = L_38->get_DestinationRadius_25();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_37, L_39, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_36, L_40, /*hidden argument*/NULL);
		V_5 = L_41;
		// dest.y = 0.0f;
		(&V_5)->set_y_3((0.0f));
		// Vector3 dir = (dest - src);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline(L_42, L_43, /*hidden argument*/NULL);
		// Vector3 vel = dir / TimeToImpact;
		MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * L_45 = V_1;
		NullCheck(L_45);
		float L_46 = L_45->get_TimeToImpact_28();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_op_Division_mBA12D08F4D51A4BC2E9841D42591B6208FF4B12E_inline(L_44, L_46, /*hidden argument*/NULL);
		V_6 = L_47;
		// Rigidbody r = meteor.GetComponent<Rigidbody>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = V_3;
		NullCheck(L_48);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_49;
		L_49 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_48, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		// r.velocity = vel;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_50 = L_49;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51 = V_6;
		NullCheck(L_50);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_50, L_51, /*hidden argument*/NULL);
		// float xRot = UnityEngine.Random.Range(-90.0f, 90.0f);
		float L_52;
		L_52 = Random_Range_mA944A98B82AFE4D46D05EF533ED0068148EFAEA5((-90.0f), (90.0f), /*hidden argument*/NULL);
		V_7 = L_52;
		// float yRot = UnityEngine.Random.Range(-90.0f, 90.0f);
		float L_53;
		L_53 = Random_Range_mA944A98B82AFE4D46D05EF533ED0068148EFAEA5((-90.0f), (90.0f), /*hidden argument*/NULL);
		V_8 = L_53;
		// float zRot = UnityEngine.Random.Range(-90.0f, 90.0f);
		float L_54;
		L_54 = Random_Range_mA944A98B82AFE4D46D05EF533ED0068148EFAEA5((-90.0f), (90.0f), /*hidden argument*/NULL);
		V_9 = L_54;
		// r.angularVelocity = new Vector3(xRot, yRot, zRot);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_55 = L_50;
		float L_56 = V_7;
		float L_57 = V_8;
		float L_58 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_59), L_56, L_57, L_58, /*hidden argument*/NULL);
		NullCheck(L_55);
		Rigidbody_set_angularVelocity_m3A40B7F195E9E217AE29A0964D7E7540E2E23080(L_55, L_59, /*hidden argument*/NULL);
		// r.mass *= (scale * scale);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_60 = L_55;
		NullCheck(L_60);
		float L_61;
		L_61 = Rigidbody_get_mass_mB7B19406DAC6336A8244E98BE271BDA8B5C26223(L_60, /*hidden argument*/NULL);
		float L_62 = V_4;
		float L_63 = V_4;
		NullCheck(L_60);
		Rigidbody_set_mass_m54FCACE073F5E7742DB1D7C0BA19CD0C0F3DDA3F(L_60, ((float)il2cpp_codegen_multiply((float)L_61, (float)((float)il2cpp_codegen_multiply((float)L_62, (float)L_63)))), /*hidden argument*/NULL);
		// Renderer renderer = meteor.GetComponent<Renderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64 = V_3;
		NullCheck(L_64);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_65;
		L_65 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_64, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		// renderer.sharedMaterial = MeteorMaterials[UnityEngine.Random.Range(0, MeteorMaterials.Length)];
		MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * L_66 = V_1;
		NullCheck(L_66);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_67 = L_66->get_MeteorMaterials_23();
		MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * L_68 = V_1;
		NullCheck(L_68);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_69 = L_68->get_MeteorMaterials_23();
		NullCheck(L_69);
		int32_t L_70;
		L_70 = Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213(0, ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_67);
		int32_t L_71 = L_70;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_72 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_65);
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_65, L_72, /*hidden argument*/NULL);
		// meteor.transform.parent = gameObject.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_73 = V_3;
		NullCheck(L_73);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_74;
		L_74 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_73, /*hidden argument*/NULL);
		MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * L_75 = V_1;
		NullCheck(L_75);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76;
		L_76 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_75, /*hidden argument*/NULL);
		NullCheck(L_76);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77;
		L_77 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_76, /*hidden argument*/NULL);
		NullCheck(L_74);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_74, L_77, /*hidden argument*/NULL);
		// meteor.GetComponent<FireCollisionForwardScript>().CollisionHandler = this;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_78 = V_3;
		NullCheck(L_78);
		FireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D * L_79;
		L_79 = GameObject_GetComponent_TisFireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D_m188552FE09C7581B8330EDAB30D316C71C63F19B(L_78, /*hidden argument*/GameObject_GetComponent_TisFireCollisionForwardScript_tEDF865A5324C6A26B4C65710136A056D18CF113D_m188552FE09C7581B8330EDAB30D316C71C63F19B_RuntimeMethod_var);
		MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * L_80 = V_1;
		NullCheck(L_79);
		L_79->set_CollisionHandler_4(L_80);
		// Mesh mesh = MeteorMeshes[UnityEngine.Random.Range(0, MeteorMeshes.Length - 1)];
		MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * L_81 = V_1;
		NullCheck(L_81);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_82 = L_81->get_MeteorMeshes_24();
		MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * L_83 = V_1;
		NullCheck(L_83);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_84 = L_83->get_MeteorMeshes_24();
		NullCheck(L_84);
		int32_t L_85;
		L_85 = Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213(0, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_84)->max_length))), (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_82);
		int32_t L_86 = L_85;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_87 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_10 = L_87;
		// meteor.GetComponent<MeshFilter>().mesh = mesh;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_88 = V_3;
		NullCheck(L_88);
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_89;
		L_89 = GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4(L_88, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4_RuntimeMethod_var);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_90 = V_10;
		NullCheck(L_89);
		MeshFilter_set_mesh_m13177C1A6C29D76DDCD858CEF2B28C2AA7CC46FC(L_89, L_90, /*hidden argument*/NULL);
		// TrailRenderer t = meteor.GetComponent<TrailRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_91 = V_3;
		NullCheck(L_91);
		TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01 * L_92;
		L_92 = GameObject_GetComponent_TisTrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01_m6BF02D14A2BF23863B8F688EEA112E78DD7B4AB8(L_91, /*hidden argument*/GameObject_GetComponent_TisTrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01_m6BF02D14A2BF23863B8F688EEA112E78DD7B4AB8_RuntimeMethod_var);
		// t.startWidth = UnityEngine.Random.Range(2.0f, 3.0f) * scale;
		TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01 * L_93 = L_92;
		float L_94;
		L_94 = Random_Range_mA944A98B82AFE4D46D05EF533ED0068148EFAEA5((2.0f), (3.0f), /*hidden argument*/NULL);
		float L_95 = V_4;
		NullCheck(L_93);
		TrailRenderer_set_startWidth_mBCA39FC59184062A7F7E6074DE711F49F973B948(L_93, ((float)il2cpp_codegen_multiply((float)L_94, (float)L_95)), /*hidden argument*/NULL);
		// t.endWidth = UnityEngine.Random.Range(0.25f, 0.5f) * scale;
		TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01 * L_96 = L_93;
		float L_97;
		L_97 = Random_Range_mA944A98B82AFE4D46D05EF533ED0068148EFAEA5((0.25f), (0.5f), /*hidden argument*/NULL);
		float L_98 = V_4;
		NullCheck(L_96);
		TrailRenderer_set_endWidth_mABF2E494F1ADC2BE63AC30047F51A727C674E5B5(L_96, ((float)il2cpp_codegen_multiply((float)L_97, (float)L_98)), /*hidden argument*/NULL);
		// t.time = UnityEngine.Random.Range(0.25f, 0.5f);
		float L_99;
		L_99 = Random_Range_mA944A98B82AFE4D46D05EF533ED0068148EFAEA5((0.25f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_96);
		TrailRenderer_set_time_mD3CE2A98D44A4FDE806CDA46EDD6EFDE968431CE(L_96, L_99, /*hidden argument*/NULL);
		// if (EmissionSounds != null && EmissionSounds.Length != 0)
		MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * L_100 = V_1;
		NullCheck(L_100);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_101 = L_100->get_EmissionSounds_32();
		if (!L_101)
		{
			goto IL_0259;
		}
	}
	{
		MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * L_102 = V_1;
		NullCheck(L_102);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_103 = L_102->get_EmissionSounds_32();
		NullCheck(L_103);
		if (!(((RuntimeArray*)L_103)->max_length))
		{
			goto IL_0259;
		}
	}
	{
		// AudioSource audio = meteor.GetComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_104 = V_3;
		NullCheck(L_104);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_105;
		L_105 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_104, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		V_12 = L_105;
		// if (audio != null)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_106 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_107;
		L_107 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_106, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_107)
		{
			goto IL_0259;
		}
	}
	{
		// int index = UnityEngine.Random.Range(0, EmissionSounds.Length);
		MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * L_108 = V_1;
		NullCheck(L_108);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_109 = L_108->get_EmissionSounds_32();
		NullCheck(L_109);
		int32_t L_110;
		L_110 = Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213(0, ((int32_t)((int32_t)(((RuntimeArray*)L_109)->max_length))), /*hidden argument*/NULL);
		V_13 = L_110;
		// AudioClip clip = EmissionSounds[index];
		MeteorSwarmScript_tDC0A3D23DF2239C7A573418AD044201C1046542E * L_111 = V_1;
		NullCheck(L_111);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_112 = L_111->get_EmissionSounds_32();
		int32_t L_113 = V_13;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		V_14 = L_115;
		// audio.PlayOneShot(clip, scale);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_116 = V_12;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_117 = V_14;
		float L_118 = V_4;
		NullCheck(L_116);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_116, L_117, L_118, /*hidden argument*/NULL);
	}

IL_0259:
	{
		// }
		return (bool)0;
	}
}
// System.Object DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnMeteorU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF3F0857AB09010E5CA86434573A60274959A87F6 (U3CSpawnMeteorU3Ed__18_t75D8CCF02D0E6F8ACF8912130334AEBBE60CCB2C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnMeteorU3Ed__18_System_Collections_IEnumerator_Reset_m27E65A7F9798C507D42054216DD8A30E64B0F67A (U3CSpawnMeteorU3Ed__18_t75D8CCF02D0E6F8ACF8912130334AEBBE60CCB2C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnMeteorU3Ed__18_System_Collections_IEnumerator_Reset_m27E65A7F9798C507D42054216DD8A30E64B0F67A_RuntimeMethod_var)));
	}
}
// System.Object DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnMeteorU3Ed__18_System_Collections_IEnumerator_get_Current_mB5E834237203A20E76BBD4DD81844B2B20D922C4 (U3CSpawnMeteorU3Ed__18_t75D8CCF02D0E6F8ACF8912130334AEBBE60CCB2C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireBaseScript_set_Starting_mB0599A55FC150BD87CDF3A07C4082A8DAFACC729_inline (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// private set;
		bool L_0 = ___value0;
		__this->set_U3CStartingU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FireBaseScript_get_Stopping_m1592C1C93745E8FEB265172F0CAD5666AD6DAE91_inline (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method)
{
	{
		// get;
		bool L_0 = __this->get_U3CStoppingU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireBaseScript_set_StopPercent_m75C9FC3F5FFC266AAAACB10C2350DA3A2F08119B_inline (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// private set;
		float L_0 = ___value0;
		__this->set_U3CStopPercentU3Ek__BackingField_19(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FireBaseScript_get_Starting_m1AB905289A960AE1C86B24C57E6B72C4E108CA55_inline (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method)
{
	{
		// get;
		bool L_0 = __this->get_U3CStartingU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireBaseScript_set_StartPercent_m12A6FB26D859193B99A97A85290D1BF77F59298A_inline (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// private set;
		float L_0 = ___value0;
		__this->set_U3CStartPercentU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireBaseScript_set_Stopping_mC4E23890C57F1955717CCF36E801307492A32F52_inline (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// private set;
		bool L_0 = ___value0;
		__this->set_U3CStoppingU3Ek__BackingField_18(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FireBaseScript_get_StopPercent_m45EFE5EBC4E03026FA6AA2AC63A9AAACDF2649EA_inline (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method)
{
	{
		// get;
		float L_0 = __this->get_U3CStopPercentU3Ek__BackingField_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FireBaseScript_get_StartPercent_mFE89E8A6B7BE34AC2615F9BDF3B9D292DAA860D9_inline (FireBaseScript_t8D202BBE5C897D7F9CB2001768DE7F428ABC8AE9 * __this, const RuntimeMethod* method)
{
	{
		// get;
		float L_0 = __this->get_U3CStartPercentU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoopingAudioSource_set_AudioSource_m93A8EB2543C66BD177679409E8D60361883F9D57_inline (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * __this, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___value0, const RuntimeMethod* method)
{
	{
		// public AudioSource AudioSource { get; private set; }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = ___value0;
		__this->set_U3CAudioSourceU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * LoopingAudioSource_get_AudioSource_m036098B24FF9EA542E870E359726B78C16B9649B_inline (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * __this, const RuntimeMethod* method)
{
	{
		// public AudioSource AudioSource { get; private set; }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_U3CAudioSourceU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoopingAudioSource_set_TargetVolume_mDE6F4B06955DFB974DD7BDC53AB764850D7CB72F_inline (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float TargetVolume { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CTargetVolumeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LoopingAudioSource_get_TargetVolume_m0217CC294653792B533E3E7E711EFA6C543F14DC_inline (LoopingAudioSource_tAB38354275121B10B3D51E593070095C8392AF26 * __this, const RuntimeMethod* method)
{
	{
		// public float TargetVolume { get; private set; }
		float L_0 = __this->get_U3CTargetVolumeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m56EB454031EABB53BA35FECF3F61A7E2332A2521_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->get_m_IsOn_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SingleLineAttribute_set_Tooltip_m3F34E97789D0B0FB68467893DB84C47EEEB93DE9_inline (SingleLineAttribute_t42A09A9950AF7182B25ECF142CB94CF58885BDE4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Tooltip { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTooltipU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * Selectable_get_targetGraphic_mF2D1BFB9DE33BAB553933533CC4A9135A37F4A72_inline (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, const RuntimeMethod* method)
{
	{
		// public Graphic           targetGraphic     { get { return m_TargetGraphic; } set { if (SetPropertyUtility.SetClass(ref m_TargetGraphic, value))     OnSetProperty(); } }
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_0 = __this->get_m_TargetGraphic_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mBA12D08F4D51A4BC2E9841D42591B6208FF4B12E_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
