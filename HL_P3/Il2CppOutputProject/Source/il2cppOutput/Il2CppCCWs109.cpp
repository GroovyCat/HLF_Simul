#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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

// System.Action`1<UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct Action_1_t346E92655C4F472313FF8152AFE632BAFF84648D;
// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation>
struct Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199;
// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String>
struct Action_2_t1C13FAA0BE04A7EFAC5DDD87B23307535BE59B56;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_t40AD0E25A9C651DF2D10B7C03EE5D87856C2A72D;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Dictionary_2_tA0FD2AFAAFE4AEDFD84AEE2B7DA1E4180E174DBF;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout>
struct Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939;
// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HttpHeaders/HeaderBucket>
struct Dictionary_2_t96671B7CC8F3C2EEB688C956C4404C1B39FFEADA;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct Dictionary_2_t8377EDD7191C350CDE78E5396001C8F68AD0BCFD;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_tEB7DD469D67D40F77F686DD4BC38E8ED993B35A9;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Boolean>
struct Dictionary_2_t727597657DBCDE8841E480361B4F6009E211BACA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundaryHandler>
struct EventFunction_1_t355F223C9D21277D911E4B55A91C27A9FDAE61AF;
// System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>
struct Func_1_t7D1E35C20B74AA63237E9173FAC7D1BBCA6CC82E;
// System.Func`2<UnityEngine.InputSystem.InputControl,System.String>
struct Func_2_t256D379297E9972A2E59B56A5D0276E9ED789181;
// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single>
struct Func_3_tB2180AFDCB89ECEDE3ED8A30CA81B8E923416ADC;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct HashSet_1_tA041F36FB3C3242D919652844C1C7580D00CCEAA;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB;
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C;
// System.IObserver`1<UnityEngine.InputSystem.InputRemoting/Message>
struct IObserver_1_t86B610871040916D1AEFA3F09B63F59876D36B48;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct KeyValuePair_2_tA4DF5ECAE9C383B045BDF7D84EA71747D26A2AD5;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_t8473DB386AC0B94DD5FF2E16A7570939FC4C15F9;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_tA13D401EC270D24A0D7662CA0E55BD0EF020D215;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>
struct List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct List_1_t73B6079482DF922A0AD324CADBBB3CEAEF5FE4FC;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo>
struct List_1_t9AA16C93BC2DB750DE514C896B52763AC0C9D0EA;
// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl>
struct List_1_t4C637A7731966BC90A187F079F9E026B019BBA33;
// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
struct List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4;
// System.Collections.Generic.List`1<System.Diagnostics.Tracing.EventProvider/SessionInfo>
struct List_1_t53BBC0AA893BF75B4925CA24EBF5975C942A4D17;
// System.Collections.Generic.Stack`1<UnityEngine.Transform>
struct Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Tuple`2<System.Int32,System.Int32>
struct Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[]
struct KeyValuePair_2U5BU5D_t5C04AE017D2E5ABB3B7D690F561546EFABE0DD7F;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Microsoft.MixedReality.Toolkit.Boundary.Edge[]
struct EdgeU5BU5D_t11155979B4B93616C99DE0339151AC8B100D3D5D;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
// UnityEngine.GradientAlphaKey[]
struct GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_tBA705C167A9AA88747F0E71091D027919388F80C;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType[]
struct SystemTypeU5BU5D_t7BBB6C6E11AA70D64E254BCA8BC1B8A71A243F45;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_tAB402AEBBC6B3D1142E9E6CB11F242801DC4574C;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190;
// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[]
struct DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.InputSystem.LowLevel.ActionEvent
struct ActionEvent_t256427C0B4686727B268753C31A6AC46360BACE1;
// System.Diagnostics.Tracing.ActivityFilter
struct ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin
struct AppRemotingPlugin_tD0AE6A2AC36734677F820297A864BF86BA10E3E4;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF;
// Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData
struct BoundaryEventData_tF3191826FD556ED99C56A8E197F3A32143415FA4;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// Microsoft.MixedReality.Toolkit.UI.Dialog
struct Dialog_t4DDF10C57DA890C26CCA83D961C5E5E811D99464;
// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96;
// System.Diagnostics.Tracing.EventPayload
struct EventPayload_t43BB09A63B3B7D1DDA3D998D4167167A8443BEFA;
// System.Diagnostics.Tracing.EventSource
struct EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A;
// Microsoft.MixedReality.Toolkit.UI.FollowMeToggle
struct FollowMeToggle_tFBB892CCF28F4074B0FF5BB6845294D72E2F7CEF;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.UI.GazeHandHelper
struct GazeHandHelper_tB53537F53F428CC5FA1E0AED68DB0938279762D5;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint
struct HandConstraint_t3DD1BCB1987D4F38110D207ADEE4B72B07671753;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp
struct HandConstraintPalmUp_tE58D11B4A03AD524EB42A8C5C00E18727EA74018;
// Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint
struct HandInteractionHint_t74490BADCB7B7C4399538DE9B390D887E7011C41;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Net.Http.Headers.HttpHeaders
struct HttpHeaders_t975DBB16F39167BE91FF1BEC325EB4F4471996D2;
// Windows.Storage.Streams.IBuffer
struct IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC;
// System.Collections.ICollection
struct ICollection_tC1E1DED86C0A66845675392606B302452210D5DA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// Windows.Storage.Streams.IInputStream
struct IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t4C230882C83B807CD79BFCDC16DAF59843A28FB5;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t923212C7B71ADAD3E3C21B99009C9612530D3FE7;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t96040EB1E30984BEEE1B1302381393D337FD6ABC;
// Windows.Storage.Streams.IOutputStream
struct IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD;
// Windows.Storage.Streams.IRandomAccessStream
struct IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A;
// UnityEngine.InputSystem.InputAction
struct InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E;
// UnityEngine.InputSystem.Utilities.InputActionTrace
struct InputActionTrace_tD77E232622C090881453CFA37F1F82CD4A00AD1C;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation
struct InputAnimation_tD3776C818F1AEA5242238C6A141C4A80B3F35EF3;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323;
// UnityEngine.InputSystem.LowLevel.InputEvent
struct InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92;
// UnityEngine.InputSystem.LowLevel.InputEventTrace
struct InputEventTrace_t905233FE94AEA5F3A748CF627D1766D827D593A9;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// UnityEngine.InputSystem.InputManager
struct InputManager_t5408997539039671BD24A69C8792DDC543F54D04;
// UnityEngine.InputSystem.InputRemoting
struct InputRemoting_tD776065A8D6AAD043CAD7DE5ACB2C43E1E3CF0B4;
// UnityEngine.InputSystem.LowLevel.InputStateHistory
struct InputStateHistory_t3412A0F806C96DF0701F20F93D547F936B005177;
// Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle
struct InscribedRectangle_t2F2669C9A98C3392B287F0A382063A71E017C72C;
// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046;
// Microsoft.MixedReality.Toolkit.UI.Interactable
struct Interactable_t9254BFC469816BE97E2A155BAB97E180B6DCBA8C;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile
struct MixedRealityBoundaryVisualizationProfile_tE067B54778DDA7D645CAE679F109AE611397A351;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule
struct MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664;
// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase
struct MixedRealityKeyboardBase_t519E2FAD4CCFE9A92A5969D068922F66397B2A57;
// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview
struct MixedRealityKeyboardPreview_tEE859C0593A2CC36FAAED325B71220D0C9CD68B5;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer
struct MixedRealityLineRenderer_t2904BCCD321AA069EA10AAFD1D4DA36A0C600694;
// Microsoft.MixedReality.Toolkit.MixedRealitySceneContent
struct MixedRealitySceneContent_t6D5D770B1717E1888E9FBE227B750B66E257A730;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem
struct MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile
struct MixedRealitySceneSystemProfile_t752F05A9C0EB7B344CDD30160E3DAFD7389B4360;
// System.Reflection.Module
struct Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7;
// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget
struct MoveToTarget_tD7A73DD90660B4FFD1A50DBCF8092DED6882D2C6;
// System.IO.NetFxToWinRtStreamAdapter
struct NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.XR.OpenXR.OpenXRRestarter
struct OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944;
// Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver
struct OpenXRSceneUnderstandingObserver_t5C36ECDE67DDA924919C463B2D7272E5B2215CB1;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2
struct PressableButtonHoloLens2_tF72F05F44AF391672E6B51BA428DDB6D2AE92E10;
// Microsoft.MixedReality.Toolkit.Utilities.ProximityLight
struct ProximityLight_t96325E459FE7A256CBD8DED0E33C2EEBFF3AE834;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.InteropServices.SafeBuffer
struct SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t0906E211571ECB462D2CEAC3BC83A12FBEFF03CF;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t14C8B463482A51A625A8D50A297B2951A673EF25;
// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1;
// System.Security.Cryptography.X509Certificates.X509ChainImpl
struct X509ChainImpl_tAA54C8F65F2922D9BAB911D37EFFCD7A95A92AEE;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_tA848C617FAE235C50D3937F79C76FF0713BFE88F;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358;
// System.Net.Http.Headers.HttpHeaders/HeaderBucket
struct HeaderBucket_t40A88FA9F2804D5BD425E6983443094A03859CC8;
// UnityEngine.InputSystem.InputActionState/ActionMapIndices
struct ActionMapIndices_t70234E0132647DCE386300AED2C964F629609245;
// UnityEngine.InputSystem.InputActionState/BindingState
struct BindingState_tE715A30188652BA114CEB7CD0E12A25CFCEF8FC7;
// UnityEngine.InputSystem.InputActionState/InteractionState
struct InteractionState_tC8A885CD98436B1609B0988EFDCCD6BBBCFDD6B7;
// UnityEngine.InputSystem.InputActionState/TriggerState
struct TriggerState_tD1D00F0DE77AE9CA21DE7A2CEDA8D93EED009CBE;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves
struct PoseCurves_tFDE6C196723D02CFC8ECD4103710E043AB2D6C37;
// UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator
struct Enumerator_t310442BCF6CF12ADBE1B000FD18F259531EC5861;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData
struct PointerData_t524B70063DAD63AB1B38F1BB8C9EE71E1D04DC1F;
// System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback
struct EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA;

IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct ActionEvent_t256427C0B4686727B268753C31A6AC46360BACE1 ;
struct DeviceRequirement_t81B74F0AB5D81F4F19AB7A30E422908B6EF74ED3_marshaled_com;
struct DeviceRequirement_t81B74F0AB5D81F4F19AB7A30E422908B6EF74ED3_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB;
struct IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93;
struct IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA;
struct IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC;
struct IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2;
struct IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D;
struct IIterator_1_t2CFACF402D9A2D616023D5DA34FDF5739B123E32;
struct IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4;
struct IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF;
struct IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD;
struct IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_mBC6183A763190D7A90AC3695ABA5695BA36C856A(IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_mE2D4B228CE53F99221609445BE370DDFCE36E6B1(IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m175060E2E21B33EF1970DD606F09B7DF584D798D(IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mC86F0CF355BA73A8EDDBDAE24D74C5879DA6FBBA(IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m0F646662AC31DEE0CE961AFADC7973E48F97C5B9(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m0377F4567A96FDBBDB5965FBC39543CB067FBC44(IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m56432550918918419AD9E3C4C6628C1761816138(IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m543BD227353BA50F701DDE984A8B401788B0B43C(IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mEDC3E8F6D24BF8D62A67B5CCF13C77258C3D7FB8(IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_mA5979B888030B4A4C8E751DBEEF4305A3CE37292(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct NOVTABLE IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m7656E1FBD07F1A33A8BABCA2DFC7FB61231A0958(IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mF8AED96C1879988554BA949E0718A6174C3117F5(IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m33CB8132B6D0D81238F6BE90A9D3F1F13AB422AD(bool* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Char>>
struct NOVTABLE IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct NOVTABLE IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D(IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.IEnumerable>
struct NOVTABLE IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.String>
struct NOVTABLE IIterable_1_t94592E586C395F026290ACC676E74C560595CC26 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Type>
struct NOVTABLE IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD436D926611E89172F9CCDB96214C201E7E6AE67(IIterator_1_t2CFACF402D9A2D616023D5DA34FDF5739B123E32** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() = 0;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m4FBAA7520F46F3CC6D15DCA72AE6DE7682A9A470(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_m5433B1C2AADBE9CE086F6DAE6E300C687A17DB19(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_mF6D33616BBEEBF636AA7AF9EFA8525C3F721FE01(uint32_t ___value0) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() = 0;
};
// Windows.Storage.Streams.IOutputStream
struct NOVTABLE IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStream
struct NOVTABLE IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_mF9E844A817D64D4E78CD248CCBF6E07B77BCC3E6(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_put_Size_m891818528BF8D69955CF27BC4D777FE8998159A7(uint64_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetInputStreamAt_m9CC820A0D61D6396A06770F777B93F17F48195CB(uint64_t ___position0, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetOutputStreamAt_m49D528CD63934AD30783BB759B104C80228DD023(uint64_t ___position0, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_mEBCDA9CD0B45E8C1F7A99E7B40277F0B73E772B3(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m22E6D99C652709BF6A0BC31C53FCC63B528E998A(uint64_t ___position0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_CloneStream_mB8E84904911B293CCA5CB6420565DD027133866A(IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_mAD979BED8B107A5A477E184F0A56C1C7880CF071(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m3E677DD40D63CBE50AB0B17CEB72B8AFEC8D2146(bool* comReturnValue) = 0;
};

// System.Object


// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____items_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyArray_4;

public:
	inline static int32_t get_offset_of_emptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields, ___emptyArray_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyArray_4() const { return ___emptyArray_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyArray_4() { return &___emptyArray_4; }
	inline void set_emptyArray_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_4), (void*)value);
	}
};


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


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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

// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509CertificateImpl::cachedCertificateHash
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cachedCertificateHash_0;

public:
	inline static int32_t get_offset_of_cachedCertificateHash_0() { return static_cast<int32_t>(offsetof(X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219, ___cachedCertificateHash_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cachedCertificateHash_0() const { return ___cachedCertificateHash_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cachedCertificateHash_0() { return &___cachedCertificateHash_0; }
	inline void set_cachedCertificateHash_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cachedCertificateHash_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedCertificateHash_0), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509CertificateImplCollection
struct X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl> System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::list
	List_1_t4C637A7731966BC90A187F079F9E026B019BBA33 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372, ___list_0)); }
	inline List_1_t4C637A7731966BC90A187F079F9E026B019BBA33 * get_list_0() const { return ___list_0; }
	inline List_1_t4C637A7731966BC90A187F079F9E026B019BBA33 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t4C637A7731966BC90A187F079F9E026B019BBA33 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Chain::impl
	X509ChainImpl_tAA54C8F65F2922D9BAB911D37EFFCD7A95A92AEE * ___impl_0;

public:
	inline static int32_t get_offset_of_impl_0() { return static_cast<int32_t>(offsetof(X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37, ___impl_0)); }
	inline X509ChainImpl_tAA54C8F65F2922D9BAB911D37EFFCD7A95A92AEE * get_impl_0() const { return ___impl_0; }
	inline X509ChainImpl_tAA54C8F65F2922D9BAB911D37EFFCD7A95A92AEE ** get_address_of_impl_0() { return &___impl_0; }
	inline void set_impl_0(X509ChainImpl_tAA54C8F65F2922D9BAB911D37EFFCD7A95A92AEE * value)
	{
		___impl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___impl_0), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.X509Certificates.X509ChainElementCollection::_list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1, ____list_0)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__list_0() const { return ____list_0; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_0), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509ChainImpl
struct X509ChainImpl_tAA54C8F65F2922D9BAB911D37EFFCD7A95A92AEE  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UI.Button/<OnFinishSubmit>d__9
struct U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.Button/<OnFinishSubmit>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.Button/<OnFinishSubmit>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.UI.Button UnityEngine.UI.Button/<OnFinishSubmit>d__9::<>4__this
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___U3CU3E4__this_2;
	// System.Single UnityEngine.UI.Button/<OnFinishSubmit>d__9::<fadeTime>5__2
	float ___U3CfadeTimeU3E5__2_3;
	// System.Single UnityEngine.UI.Button/<OnFinishSubmit>d__9::<elapsedTime>5__3
	float ___U3CelapsedTimeU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CU3E4__this_2)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfadeTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CfadeTimeU3E5__2_3)); }
	inline float get_U3CfadeTimeU3E5__2_3() const { return ___U3CfadeTimeU3E5__2_3; }
	inline float* get_address_of_U3CfadeTimeU3E5__2_3() { return &___U3CfadeTimeU3E5__2_3; }
	inline void set_U3CfadeTimeU3E5__2_3(float value)
	{
		___U3CfadeTimeU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__3_4() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CelapsedTimeU3E5__3_4)); }
	inline float get_U3CelapsedTimeU3E5__3_4() const { return ___U3CelapsedTimeU3E5__3_4; }
	inline float* get_address_of_U3CelapsedTimeU3E5__3_4() { return &___U3CelapsedTimeU3E5__3_4; }
	inline void set_U3CelapsedTimeU3E5__3_4(float value)
	{
		___U3CelapsedTimeU3E5__3_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.Dialog/<CloseDialog>d__11
struct U3CCloseDialogU3Ed__11_t6F5B43B22D86D0763F741F6CAA3E9A6C5EB283DD  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Dialog/<CloseDialog>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.Dialog/<CloseDialog>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCloseDialogU3Ed__11_t6F5B43B22D86D0763F741F6CAA3E9A6C5EB283DD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCloseDialogU3Ed__11_t6F5B43B22D86D0763F741F6CAA3E9A6C5EB283DD, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.Dialog/<OpenDialog>d__10
struct U3COpenDialogU3Ed__10_t9EA4959F0F3EA799A5D2D237223C6395FA109981  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Dialog/<OpenDialog>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.Dialog/<OpenDialog>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COpenDialogU3Ed__10_t9EA4959F0F3EA799A5D2D237223C6395FA109981, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3COpenDialogU3Ed__10_t9EA4959F0F3EA799A5D2D237223C6395FA109981, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.Dialog/<RunDialogOverTime>d__9
struct U3CRunDialogOverTimeU3Ed__9_tECD0325DD5E932C64CECA7612BD734F979C2C7AC  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Dialog/<RunDialogOverTime>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.Dialog/<RunDialogOverTime>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.Dialog Microsoft.MixedReality.Toolkit.UI.Dialog/<RunDialogOverTime>d__9::<>4__this
	Dialog_t4DDF10C57DA890C26CCA83D961C5E5E811D99464 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRunDialogOverTimeU3Ed__9_tECD0325DD5E932C64CECA7612BD734F979C2C7AC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRunDialogOverTimeU3Ed__9_tECD0325DD5E932C64CECA7612BD734F979C2C7AC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRunDialogOverTimeU3Ed__9_tECD0325DD5E932C64CECA7612BD734F979C2C7AC, ___U3CU3E4__this_2)); }
	inline Dialog_t4DDF10C57DA890C26CCA83D961C5E5E811D99464 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Dialog_t4DDF10C57DA890C26CCA83D961C5E5E811D99464 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Dialog_t4DDF10C57DA890C26CCA83D961C5E5E811D99464 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75
struct U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75::delay
	float ___delay_2;
	// UnityEngine.UI.Dropdown UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75::<>4__this
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30, ___U3CU3E4__this_3)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.FollowMeToggle/<AutoFollowDistanceCheck>d__31
struct U3CAutoFollowDistanceCheckU3Ed__31_tB64DDFAB78B833C31B480A97E12D4A3D7BE8B0A5  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.FollowMeToggle/<AutoFollowDistanceCheck>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.FollowMeToggle/<AutoFollowDistanceCheck>d__31::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.FollowMeToggle Microsoft.MixedReality.Toolkit.UI.FollowMeToggle/<AutoFollowDistanceCheck>d__31::<>4__this
	FollowMeToggle_tFBB892CCF28F4074B0FF5BB6845294D72E2F7CEF * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAutoFollowDistanceCheckU3Ed__31_tB64DDFAB78B833C31B480A97E12D4A3D7BE8B0A5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAutoFollowDistanceCheckU3Ed__31_tB64DDFAB78B833C31B480A97E12D4A3D7BE8B0A5, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAutoFollowDistanceCheckU3Ed__31_tB64DDFAB78B833C31B480A97E12D4A3D7BE8B0A5, ___U3CU3E4__this_2)); }
	inline FollowMeToggle_tFBB892CCF28F4074B0FF5BB6845294D72E2F7CEF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline FollowMeToggle_tFBB892CCF28F4074B0FF5BB6845294D72E2F7CEF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(FollowMeToggle_tFBB892CCF28F4074B0FF5BB6845294D72E2F7CEF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62
struct U3CToggleCursorsU3Ed__62_tBACA4042E2629D929CAEDCDEC6E7CCFA9E166FE4  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62::controller
	RuntimeObject* ___controller_2;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62::<>4__this
	HandConstraint_t3DD1BCB1987D4F38110D207ADEE4B72B07671753 * ___U3CU3E4__this_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62::frameDelay
	bool ___frameDelay_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62::visible
	bool ___visible_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__62_tBACA4042E2629D929CAEDCDEC6E7CCFA9E166FE4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__62_tBACA4042E2629D929CAEDCDEC6E7CCFA9E166FE4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_controller_2() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__62_tBACA4042E2629D929CAEDCDEC6E7CCFA9E166FE4, ___controller_2)); }
	inline RuntimeObject* get_controller_2() const { return ___controller_2; }
	inline RuntimeObject** get_address_of_controller_2() { return &___controller_2; }
	inline void set_controller_2(RuntimeObject* value)
	{
		___controller_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__62_tBACA4042E2629D929CAEDCDEC6E7CCFA9E166FE4, ___U3CU3E4__this_3)); }
	inline HandConstraint_t3DD1BCB1987D4F38110D207ADEE4B72B07671753 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline HandConstraint_t3DD1BCB1987D4F38110D207ADEE4B72B07671753 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(HandConstraint_t3DD1BCB1987D4F38110D207ADEE4B72B07671753 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_frameDelay_4() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__62_tBACA4042E2629D929CAEDCDEC6E7CCFA9E166FE4, ___frameDelay_4)); }
	inline bool get_frameDelay_4() const { return ___frameDelay_4; }
	inline bool* get_address_of_frameDelay_4() { return &___frameDelay_4; }
	inline void set_frameDelay_4(bool value)
	{
		___frameDelay_4 = value;
	}

	inline static int32_t get_offset_of_visible_5() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__62_tBACA4042E2629D929CAEDCDEC6E7CCFA9E166FE4, ___visible_5)); }
	inline bool get_visible_5() const { return ___visible_5; }
	inline bool* get_address_of_visible_5() { return &___visible_5; }
	inline void set_visible_5(bool value)
	{
		___visible_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp/<WorldLockedReattachCheck>d__42
struct U3CWorldLockedReattachCheckU3Ed__42_t87B098623223996539C9A908028FDF603EA1FE81  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp/<WorldLockedReattachCheck>d__42::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp/<WorldLockedReattachCheck>d__42::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp/<WorldLockedReattachCheck>d__42::<>4__this
	HandConstraintPalmUp_tE58D11B4A03AD524EB42A8C5C00E18727EA74018 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWorldLockedReattachCheckU3Ed__42_t87B098623223996539C9A908028FDF603EA1FE81, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWorldLockedReattachCheckU3Ed__42_t87B098623223996539C9A908028FDF603EA1FE81, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWorldLockedReattachCheckU3Ed__42_t87B098623223996539C9A908028FDF603EA1FE81, ___U3CU3E4__this_2)); }
	inline HandConstraintPalmUp_tE58D11B4A03AD524EB42A8C5C00E18727EA74018 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline HandConstraintPalmUp_tE58D11B4A03AD524EB42A8C5C00E18727EA74018 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(HandConstraintPalmUp_tE58D11B4A03AD524EB42A8C5C00E18727EA74018 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<FadeOutHint>d__45
struct U3CFadeOutHintU3Ed__45_t9903A15CEDCE37A63E412F929722F495B7CC7898  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<FadeOutHint>d__45::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<FadeOutHint>d__45::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<FadeOutHint>d__45::<>4__this
	HandInteractionHint_t74490BADCB7B7C4399538DE9B390D887E7011C41 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeOutHintU3Ed__45_t9903A15CEDCE37A63E412F929722F495B7CC7898, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeOutHintU3Ed__45_t9903A15CEDCE37A63E412F929722F495B7CC7898, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeOutHintU3Ed__45_t9903A15CEDCE37A63E412F929722F495B7CC7898, ___U3CU3E4__this_2)); }
	inline HandInteractionHint_t74490BADCB7B7C4399538DE9B390D887E7011C41 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline HandInteractionHint_t74490BADCB7B7C4399538DE9B390D887E7011C41 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(HandInteractionHint_t74490BADCB7B7C4399538DE9B390D887E7011C41 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46
struct U3CHintLoopSequenceU3Ed__46_t2D9A95B8C85DB47496C7417A2D75A16CA608FA4E  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<>4__this
	HandInteractionHint_t74490BADCB7B7C4399538DE9B390D887E7011C41 * ___U3CU3E4__this_2;
	// System.String Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::stateToPlay
	String_t* ___stateToPlay_3;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<timer>5__2
	float ___U3CtimerU3E5__2_4;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<displayDelay>5__3
	float ___U3CdisplayDelayU3E5__3_5;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<visibleTime>5__4
	float ___U3CvisibleTimeU3E5__4_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<playCount>5__5
	int32_t ___U3CplayCountU3E5__5_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<shouldHide>5__6
	bool ___U3CshouldHideU3E5__6_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t2D9A95B8C85DB47496C7417A2D75A16CA608FA4E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t2D9A95B8C85DB47496C7417A2D75A16CA608FA4E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t2D9A95B8C85DB47496C7417A2D75A16CA608FA4E, ___U3CU3E4__this_2)); }
	inline HandInteractionHint_t74490BADCB7B7C4399538DE9B390D887E7011C41 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline HandInteractionHint_t74490BADCB7B7C4399538DE9B390D887E7011C41 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(HandInteractionHint_t74490BADCB7B7C4399538DE9B390D887E7011C41 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_stateToPlay_3() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t2D9A95B8C85DB47496C7417A2D75A16CA608FA4E, ___stateToPlay_3)); }
	inline String_t* get_stateToPlay_3() const { return ___stateToPlay_3; }
	inline String_t** get_address_of_stateToPlay_3() { return &___stateToPlay_3; }
	inline void set_stateToPlay_3(String_t* value)
	{
		___stateToPlay_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateToPlay_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimerU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t2D9A95B8C85DB47496C7417A2D75A16CA608FA4E, ___U3CtimerU3E5__2_4)); }
	inline float get_U3CtimerU3E5__2_4() const { return ___U3CtimerU3E5__2_4; }
	inline float* get_address_of_U3CtimerU3E5__2_4() { return &___U3CtimerU3E5__2_4; }
	inline void set_U3CtimerU3E5__2_4(float value)
	{
		___U3CtimerU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CdisplayDelayU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t2D9A95B8C85DB47496C7417A2D75A16CA608FA4E, ___U3CdisplayDelayU3E5__3_5)); }
	inline float get_U3CdisplayDelayU3E5__3_5() const { return ___U3CdisplayDelayU3E5__3_5; }
	inline float* get_address_of_U3CdisplayDelayU3E5__3_5() { return &___U3CdisplayDelayU3E5__3_5; }
	inline void set_U3CdisplayDelayU3E5__3_5(float value)
	{
		___U3CdisplayDelayU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CvisibleTimeU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t2D9A95B8C85DB47496C7417A2D75A16CA608FA4E, ___U3CvisibleTimeU3E5__4_6)); }
	inline float get_U3CvisibleTimeU3E5__4_6() const { return ___U3CvisibleTimeU3E5__4_6; }
	inline float* get_address_of_U3CvisibleTimeU3E5__4_6() { return &___U3CvisibleTimeU3E5__4_6; }
	inline void set_U3CvisibleTimeU3E5__4_6(float value)
	{
		___U3CvisibleTimeU3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CplayCountU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t2D9A95B8C85DB47496C7417A2D75A16CA608FA4E, ___U3CplayCountU3E5__5_7)); }
	inline int32_t get_U3CplayCountU3E5__5_7() const { return ___U3CplayCountU3E5__5_7; }
	inline int32_t* get_address_of_U3CplayCountU3E5__5_7() { return &___U3CplayCountU3E5__5_7; }
	inline void set_U3CplayCountU3E5__5_7(int32_t value)
	{
		___U3CplayCountU3E5__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CshouldHideU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t2D9A95B8C85DB47496C7417A2D75A16CA608FA4E, ___U3CshouldHideU3E5__6_8)); }
	inline bool get_U3CshouldHideU3E5__6_8() const { return ___U3CshouldHideU3E5__6_8; }
	inline bool* get_address_of_U3CshouldHideU3E5__6_8() { return &___U3CshouldHideU3E5__6_8; }
	inline void set_U3CshouldHideU3E5__6_8(bool value)
	{
		___U3CshouldHideU3E5__6_8 = value;
	}
};


// System.Collections.Hashtable/KeyCollection
struct KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/KeyCollection::_hashtable
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____hashtable_0;

public:
	inline static int32_t get_offset_of__hashtable_0() { return static_cast<int32_t>(offsetof(KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE, ____hashtable_0)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__hashtable_0() const { return ____hashtable_0; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__hashtable_0() { return &____hashtable_0; }
	inline void set__hashtable_0(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hashtable_0), (void*)value);
	}
};


// System.Collections.Hashtable/ValueCollection
struct ValueCollection_t98381E5F7D4ABDE56C63D8A68737C5041DD5BE15  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/ValueCollection::_hashtable
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____hashtable_0;

public:
	inline static int32_t get_offset_of__hashtable_0() { return static_cast<int32_t>(offsetof(ValueCollection_t98381E5F7D4ABDE56C63D8A68737C5041DD5BE15, ____hashtable_0)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__hashtable_0() const { return ____hashtable_0; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__hashtable_0() { return &____hashtable_0; }
	inline void set__hashtable_0(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hashtable_0), (void*)value);
	}
};


// UnityEngine.InputSystem.InputActionRebindingExtensions/DeferBindingResolutionWrapper
struct DeferBindingResolutionWrapper_tB0C1ED8677CBDF823116F21696E384E04494247F  : public RuntimeObject
{
public:

public:
};


// UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__10
struct U3CGetPartNamesU3Ed__10_t7D0B01596EA6C5CA1E277906522ED0A959A57E1A  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__10::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__10::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__10::composite
	String_t* ___composite_3;
	// System.String UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__10::<>3__composite
	String_t* ___U3CU3E3__composite_4;
	// System.Reflection.FieldInfo[] UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__10::<>7__wrap1
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* ___U3CU3E7__wrap1_5;
	// System.Int32 UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__10::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetPartNamesU3Ed__10_t7D0B01596EA6C5CA1E277906522ED0A959A57E1A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetPartNamesU3Ed__10_t7D0B01596EA6C5CA1E277906522ED0A959A57E1A, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetPartNamesU3Ed__10_t7D0B01596EA6C5CA1E277906522ED0A959A57E1A, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_composite_3() { return static_cast<int32_t>(offsetof(U3CGetPartNamesU3Ed__10_t7D0B01596EA6C5CA1E277906522ED0A959A57E1A, ___composite_3)); }
	inline String_t* get_composite_3() const { return ___composite_3; }
	inline String_t** get_address_of_composite_3() { return &___composite_3; }
	inline void set_composite_3(String_t* value)
	{
		___composite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___composite_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__composite_4() { return static_cast<int32_t>(offsetof(U3CGetPartNamesU3Ed__10_t7D0B01596EA6C5CA1E277906522ED0A959A57E1A, ___U3CU3E3__composite_4)); }
	inline String_t* get_U3CU3E3__composite_4() const { return ___U3CU3E3__composite_4; }
	inline String_t** get_address_of_U3CU3E3__composite_4() { return &___U3CU3E3__composite_4; }
	inline void set_U3CU3E3__composite_4(String_t* value)
	{
		___U3CU3E3__composite_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__composite_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_5() { return static_cast<int32_t>(offsetof(U3CGetPartNamesU3Ed__10_t7D0B01596EA6C5CA1E277906522ED0A959A57E1A, ___U3CU3E7__wrap1_5)); }
	inline FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* get_U3CU3E7__wrap1_5() const { return ___U3CU3E7__wrap1_5; }
	inline FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E** get_address_of_U3CU3E7__wrap1_5() { return &___U3CU3E7__wrap1_5; }
	inline void set_U3CU3E7__wrap1_5(FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* value)
	{
		___U3CU3E7__wrap1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_6() { return static_cast<int32_t>(offsetof(U3CGetPartNamesU3Ed__10_t7D0B01596EA6C5CA1E277906522ED0A959A57E1A, ___U3CU3E7__wrap2_6)); }
	inline int32_t get_U3CU3E7__wrap2_6() const { return ___U3CU3E7__wrap2_6; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_6() { return &___U3CU3E7__wrap2_6; }
	inline void set_U3CU3E7__wrap2_6(int32_t value)
	{
		___U3CU3E7__wrap2_6 = value;
	}
};


// UnityEngine.UI.InputField/<CaretBlink>d__163
struct U3CCaretBlinkU3Ed__163_t2F146BD27CA8F3766940DC200B985EDEE3BB6DC6  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.InputField/<CaretBlink>d__163::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.InputField/<CaretBlink>d__163::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.UI.InputField UnityEngine.UI.InputField/<CaretBlink>d__163::<>4__this
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__163_t2F146BD27CA8F3766940DC200B985EDEE3BB6DC6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__163_t2F146BD27CA8F3766940DC200B985EDEE3BB6DC6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__163_t2F146BD27CA8F3766940DC200B985EDEE3BB6DC6, ___U3CU3E4__this_2)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.UI.InputField/<MouseDragOutsideRect>d__185
struct U3CMouseDragOutsideRectU3Ed__185_tAA56E098B65282AEAEDFB0679950CBB2A9270F0D  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.InputField/<MouseDragOutsideRect>d__185::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.InputField/<MouseDragOutsideRect>d__185::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.UI.InputField/<MouseDragOutsideRect>d__185::eventData
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData_2;
	// UnityEngine.UI.InputField UnityEngine.UI.InputField/<MouseDragOutsideRect>d__185::<>4__this
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__185_tAA56E098B65282AEAEDFB0679950CBB2A9270F0D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__185_tAA56E098B65282AEAEDFB0679950CBB2A9270F0D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_eventData_2() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__185_tAA56E098B65282AEAEDFB0679950CBB2A9270F0D, ___eventData_2)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventData_2() const { return ___eventData_2; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventData_2() { return &___eventData_2; }
	inline void set_eventData_2(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__185_tAA56E098B65282AEAEDFB0679950CBB2A9270F0D, ___U3CU3E4__this_3)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// UnityEngine.InputSystem.InputRemoting/Subscriber
struct Subscriber_t636EF31EA31D71121DBA85EDB7E5DBB62C6AECEB  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputRemoting UnityEngine.InputSystem.InputRemoting/Subscriber::owner
	InputRemoting_tD776065A8D6AAD043CAD7DE5ACB2C43E1E3CF0B4 * ___owner_0;
	// System.IObserver`1<UnityEngine.InputSystem.InputRemoting/Message> UnityEngine.InputSystem.InputRemoting/Subscriber::observer
	RuntimeObject* ___observer_1;

public:
	inline static int32_t get_offset_of_owner_0() { return static_cast<int32_t>(offsetof(Subscriber_t636EF31EA31D71121DBA85EDB7E5DBB62C6AECEB, ___owner_0)); }
	inline InputRemoting_tD776065A8D6AAD043CAD7DE5ACB2C43E1E3CF0B4 * get_owner_0() const { return ___owner_0; }
	inline InputRemoting_tD776065A8D6AAD043CAD7DE5ACB2C43E1E3CF0B4 ** get_address_of_owner_0() { return &___owner_0; }
	inline void set_owner_0(InputRemoting_tD776065A8D6AAD043CAD7DE5ACB2C43E1E3CF0B4 * value)
	{
		___owner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___owner_0), (void*)value);
	}

	inline static int32_t get_offset_of_observer_1() { return static_cast<int32_t>(offsetof(Subscriber_t636EF31EA31D71121DBA85EDB7E5DBB62C6AECEB, ___observer_1)); }
	inline RuntimeObject* get_observer_1() const { return ___observer_1; }
	inline RuntimeObject** get_address_of_observer_1() { return &___observer_1; }
	inline void set_observer_1(RuntimeObject* value)
	{
		___observer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.Interactable/<GlobalVisualReset>d__170
struct U3CGlobalVisualResetU3Ed__170_tFB51286B1DBF329BC6ED5F410CF3FDA9609B9204  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Interactable/<GlobalVisualReset>d__170::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.Interactable/<GlobalVisualReset>d__170::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable/<GlobalVisualReset>d__170::time
	float ___time_2;
	// Microsoft.MixedReality.Toolkit.UI.Interactable Microsoft.MixedReality.Toolkit.UI.Interactable/<GlobalVisualReset>d__170::<>4__this
	Interactable_t9254BFC469816BE97E2A155BAB97E180B6DCBA8C * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGlobalVisualResetU3Ed__170_tFB51286B1DBF329BC6ED5F410CF3FDA9609B9204, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGlobalVisualResetU3Ed__170_tFB51286B1DBF329BC6ED5F410CF3FDA9609B9204, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CGlobalVisualResetU3Ed__170_tFB51286B1DBF329BC6ED5F410CF3FDA9609B9204, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGlobalVisualResetU3Ed__170_tFB51286B1DBF329BC6ED5F410CF3FDA9609B9204, ___U3CU3E4__this_3)); }
	inline Interactable_t9254BFC469816BE97E2A155BAB97E180B6DCBA8C * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline Interactable_t9254BFC469816BE97E2A155BAB97E180B6DCBA8C ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(Interactable_t9254BFC469816BE97E2A155BAB97E180B6DCBA8C * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.Interactable/<InputDownTimer>d__160
struct U3CInputDownTimerU3Ed__160_tE5F243179F3526644D9A8639723CC7615755EB88  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Interactable/<InputDownTimer>d__160::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.Interactable/<InputDownTimer>d__160::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable/<InputDownTimer>d__160::time
	float ___time_2;
	// Microsoft.MixedReality.Toolkit.UI.Interactable Microsoft.MixedReality.Toolkit.UI.Interactable/<InputDownTimer>d__160::<>4__this
	Interactable_t9254BFC469816BE97E2A155BAB97E180B6DCBA8C * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInputDownTimerU3Ed__160_tE5F243179F3526644D9A8639723CC7615755EB88, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CInputDownTimerU3Ed__160_tE5F243179F3526644D9A8639723CC7615755EB88, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CInputDownTimerU3Ed__160_tE5F243179F3526644D9A8639723CC7615755EB88, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CInputDownTimerU3Ed__160_tE5F243179F3526644D9A8639723CC7615755EB88, ___U3CU3E4__this_3)); }
	inline Interactable_t9254BFC469816BE97E2A155BAB97E180B6DCBA8C * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline Interactable_t9254BFC469816BE97E2A155BAB97E180B6DCBA8C ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(Interactable_t9254BFC469816BE97E2A155BAB97E180B6DCBA8C * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56
struct U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_rectTransform_2() { return static_cast<int32_t>(offsetof(U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE, ___rectTransform_2)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_rectTransform_2() const { return ___rectTransform_2; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_rectTransform_2() { return &___rectTransform_2; }
	inline void set_rectTransform_2(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___rectTransform_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rectTransform_2), (void*)value);
	}
};


// System.Collections.Specialized.ListDictionary/NodeKeyValueCollection
struct NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::list
	ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B * ___list_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::isKeys
	bool ___isKeys_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696, ___list_0)); }
	inline ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B * get_list_0() const { return ___list_0; }
	inline ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_isKeys_1() { return static_cast<int32_t>(offsetof(NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696, ___isKeys_1)); }
	inline bool get_isKeys_1() const { return ___isKeys_1; }
	inline bool* get_address_of_isKeys_1() { return &___isKeys_1; }
	inline void set_isKeys_1(bool value)
	{
		___isKeys_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/<UpdateState>d__35
struct U3CUpdateStateU3Ed__35_t41BA04FF4ACAADCDC1CCE4E62F4D048ECA3EBFA1  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/<UpdateState>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/<UpdateState>d__35::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/<UpdateState>d__35::<>4__this
	MixedRealityKeyboardBase_t519E2FAD4CCFE9A92A5969D068922F66397B2A57 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateStateU3Ed__35_t41BA04FF4ACAADCDC1CCE4E62F4D048ECA3EBFA1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdateStateU3Ed__35_t41BA04FF4ACAADCDC1CCE4E62F4D048ECA3EBFA1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUpdateStateU3Ed__35_t41BA04FF4ACAADCDC1CCE4E62F4D048ECA3EBFA1, ___U3CU3E4__this_2)); }
	inline MixedRealityKeyboardBase_t519E2FAD4CCFE9A92A5969D068922F66397B2A57 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MixedRealityKeyboardBase_t519E2FAD4CCFE9A92A5969D068922F66397B2A57 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MixedRealityKeyboardBase_t519E2FAD4CCFE9A92A5969D068922F66397B2A57 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview/<BlinkCaret>d__20
struct U3CBlinkCaretU3Ed__20_t74CACBD2571641B441AEF55D3E7708F6DFED023C  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview/<BlinkCaret>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview/<BlinkCaret>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview/<BlinkCaret>d__20::<>4__this
	MixedRealityKeyboardPreview_tEE859C0593A2CC36FAAED325B71220D0C9CD68B5 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBlinkCaretU3Ed__20_t74CACBD2571641B441AEF55D3E7708F6DFED023C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBlinkCaretU3Ed__20_t74CACBD2571641B441AEF55D3E7708F6DFED023C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CBlinkCaretU3Ed__20_t74CACBD2571641B441AEF55D3E7708F6DFED023C, ___U3CU3E4__this_2)); }
	inline MixedRealityKeyboardPreview_tEE859C0593A2CC36FAAED325B71220D0C9CD68B5 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MixedRealityKeyboardPreview_tEE859C0593A2CC36FAAED325B71220D0C9CD68B5 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MixedRealityKeyboardPreview_tEE859C0593A2CC36FAAED325B71220D0C9CD68B5 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37
struct U3CFadeLineU3Ed__37_t3D023DC6FA2939EEC4B3ECB2934E6931E4D1DABD  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<>4__this
	MixedRealityLineRenderer_t2904BCCD321AA069EA10AAFD1D4DA36A0C600694 * ___U3CU3E4__this_2;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::animationLength
	float ___animationLength_3;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::targetAlphaPercentage
	float ___targetAlphaPercentage_4;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<currentTime>5__2
	float ___U3CcurrentTimeU3E5__2_5;
	// UnityEngine.GradientAlphaKey[] Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<fadedKeys>5__3
	GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* ___U3CfadedKeysU3E5__3_6;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<startAlpha>5__4
	float ___U3CstartAlphaU3E5__4_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_t3D023DC6FA2939EEC4B3ECB2934E6931E4D1DABD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_t3D023DC6FA2939EEC4B3ECB2934E6931E4D1DABD, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_t3D023DC6FA2939EEC4B3ECB2934E6931E4D1DABD, ___U3CU3E4__this_2)); }
	inline MixedRealityLineRenderer_t2904BCCD321AA069EA10AAFD1D4DA36A0C600694 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MixedRealityLineRenderer_t2904BCCD321AA069EA10AAFD1D4DA36A0C600694 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MixedRealityLineRenderer_t2904BCCD321AA069EA10AAFD1D4DA36A0C600694 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_animationLength_3() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_t3D023DC6FA2939EEC4B3ECB2934E6931E4D1DABD, ___animationLength_3)); }
	inline float get_animationLength_3() const { return ___animationLength_3; }
	inline float* get_address_of_animationLength_3() { return &___animationLength_3; }
	inline void set_animationLength_3(float value)
	{
		___animationLength_3 = value;
	}

	inline static int32_t get_offset_of_targetAlphaPercentage_4() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_t3D023DC6FA2939EEC4B3ECB2934E6931E4D1DABD, ___targetAlphaPercentage_4)); }
	inline float get_targetAlphaPercentage_4() const { return ___targetAlphaPercentage_4; }
	inline float* get_address_of_targetAlphaPercentage_4() { return &___targetAlphaPercentage_4; }
	inline void set_targetAlphaPercentage_4(float value)
	{
		___targetAlphaPercentage_4 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentTimeU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_t3D023DC6FA2939EEC4B3ECB2934E6931E4D1DABD, ___U3CcurrentTimeU3E5__2_5)); }
	inline float get_U3CcurrentTimeU3E5__2_5() const { return ___U3CcurrentTimeU3E5__2_5; }
	inline float* get_address_of_U3CcurrentTimeU3E5__2_5() { return &___U3CcurrentTimeU3E5__2_5; }
	inline void set_U3CcurrentTimeU3E5__2_5(float value)
	{
		___U3CcurrentTimeU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CfadedKeysU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_t3D023DC6FA2939EEC4B3ECB2934E6931E4D1DABD, ___U3CfadedKeysU3E5__3_6)); }
	inline GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* get_U3CfadedKeysU3E5__3_6() const { return ___U3CfadedKeysU3E5__3_6; }
	inline GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748** get_address_of_U3CfadedKeysU3E5__3_6() { return &___U3CfadedKeysU3E5__3_6; }
	inline void set_U3CfadedKeysU3E5__3_6(GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* value)
	{
		___U3CfadedKeysU3E5__3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfadedKeysU3E5__3_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartAlphaU3E5__4_7() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_t3D023DC6FA2939EEC4B3ECB2934E6931E4D1DABD, ___U3CstartAlphaU3E5__4_7)); }
	inline float get_U3CstartAlphaU3E5__4_7() const { return ___U3CstartAlphaU3E5__4_7; }
	inline float* get_address_of_U3CstartAlphaU3E5__4_7() { return &___U3CstartAlphaU3E5__4_7; }
	inline void set_U3CstartAlphaU3E5__4_7(float value)
	{
		___U3CstartAlphaU3E5__4_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__8
struct U3CInitializeSceneContentWithDelayU3Ed__8_tF69C025E42C3E142C00B0AD1806F69F4918E3033  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.MixedRealitySceneContent Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__8::<>4__this
	MixedRealitySceneContent_t6D5D770B1717E1888E9FBE227B750B66E257A730 * ___U3CU3E4__this_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__8::<i>5__2
	int32_t ___U3CiU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInitializeSceneContentWithDelayU3Ed__8_tF69C025E42C3E142C00B0AD1806F69F4918E3033, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CInitializeSceneContentWithDelayU3Ed__8_tF69C025E42C3E142C00B0AD1806F69F4918E3033, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInitializeSceneContentWithDelayU3Ed__8_tF69C025E42C3E142C00B0AD1806F69F4918E3033, ___U3CU3E4__this_2)); }
	inline MixedRealitySceneContent_t6D5D770B1717E1888E9FBE227B750B66E257A730 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MixedRealitySceneContent_t6D5D770B1717E1888E9FBE227B750B66E257A730 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MixedRealitySceneContent_t6D5D770B1717E1888E9FBE227B750B66E257A730 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CInitializeSceneContentWithDelayU3Ed__8_tF69C025E42C3E142C00B0AD1806F69F4918E3033, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20
struct U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Type Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>2__current
	Type_t * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>4__this
	MixedRealitySceneSystemProfile_t752F05A9C0EB7B344CDD30160E3DAFD7389B4360 * ___U3CU3E4__this_3;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType[] Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>7__wrap1
	SystemTypeU5BU5D_t7BBB6C6E11AA70D64E254BCA8BC1B8A71A243F45* ___U3CU3E7__wrap1_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD, ___U3CU3E2__current_1)); }
	inline Type_t * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Type_t ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Type_t * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD, ___U3CU3E4__this_3)); }
	inline MixedRealitySceneSystemProfile_t752F05A9C0EB7B344CDD30160E3DAFD7389B4360 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MixedRealitySceneSystemProfile_t752F05A9C0EB7B344CDD30160E3DAFD7389B4360 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MixedRealitySceneSystemProfile_t752F05A9C0EB7B344CDD30160E3DAFD7389B4360 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD, ___U3CU3E7__wrap1_4)); }
	inline SystemTypeU5BU5D_t7BBB6C6E11AA70D64E254BCA8BC1B8A71A243F45* get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline SystemTypeU5BU5D_t7BBB6C6E11AA70D64E254BCA8BC1B8A71A243F45** get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(SystemTypeU5BU5D_t7BBB6C6E11AA70D64E254BCA8BC1B8A71A243F45* value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_5() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD, ___U3CU3E7__wrap2_5)); }
	inline int32_t get_U3CU3E7__wrap2_5() const { return ___U3CU3E7__wrap2_5; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_5() { return &___U3CU3E7__wrap2_5; }
	inline void set_U3CU3E7__wrap2_5(int32_t value)
	{
		___U3CU3E7__wrap2_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31
struct U3CFollowSequenceU3Ed__31_tF39A60B26D29AA7BC7C858DA7C47D11B24FFE75B  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31::<>4__this
	MoveToTarget_tD7A73DD90660B4FFD1A50DBCF8092DED6882D2C6 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFollowSequenceU3Ed__31_tF39A60B26D29AA7BC7C858DA7C47D11B24FFE75B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFollowSequenceU3Ed__31_tF39A60B26D29AA7BC7C858DA7C47D11B24FFE75B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFollowSequenceU3Ed__31_tF39A60B26D29AA7BC7C858DA7C47D11B24FFE75B, ___U3CU3E4__this_2)); }
	inline MoveToTarget_tD7A73DD90660B4FFD1A50DBCF8092DED6882D2C6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MoveToTarget_tD7A73DD90660B4FFD1A50DBCF8092DED6882D2C6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MoveToTarget_tD7A73DD90660B4FFD1A50DBCF8092DED6882D2C6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1
struct U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<>2__current
	String_t* ___U3CU3E2__current_1;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::includeChildren
	bool ___includeChildren_3;
	// System.Text.StringBuilder Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<objBuffer>5__2
	StringBuilder_t * ___U3CobjBufferU3E5__2_4;
	// System.Collections.Generic.Stack`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<processStack>5__3
	Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F * ___U3CprocessStackU3E5__3_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<startVertexIndex>5__4
	int32_t ___U3CstartVertexIndexU3E5__4_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366, ___target_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_target_2() const { return ___target_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_2), (void*)value);
	}

	inline static int32_t get_offset_of_includeChildren_3() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366, ___includeChildren_3)); }
	inline bool get_includeChildren_3() const { return ___includeChildren_3; }
	inline bool* get_address_of_includeChildren_3() { return &___includeChildren_3; }
	inline void set_includeChildren_3(bool value)
	{
		___includeChildren_3 = value;
	}

	inline static int32_t get_offset_of_U3CobjBufferU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366, ___U3CobjBufferU3E5__2_4)); }
	inline StringBuilder_t * get_U3CobjBufferU3E5__2_4() const { return ___U3CobjBufferU3E5__2_4; }
	inline StringBuilder_t ** get_address_of_U3CobjBufferU3E5__2_4() { return &___U3CobjBufferU3E5__2_4; }
	inline void set_U3CobjBufferU3E5__2_4(StringBuilder_t * value)
	{
		___U3CobjBufferU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CobjBufferU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CprocessStackU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366, ___U3CprocessStackU3E5__3_5)); }
	inline Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F * get_U3CprocessStackU3E5__3_5() const { return ___U3CprocessStackU3E5__3_5; }
	inline Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F ** get_address_of_U3CprocessStackU3E5__3_5() { return &___U3CprocessStackU3E5__3_5; }
	inline void set_U3CprocessStackU3E5__3_5(Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F * value)
	{
		___U3CprocessStackU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CprocessStackU3E5__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartVertexIndexU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366, ___U3CstartVertexIndexU3E5__4_6)); }
	inline int32_t get_U3CstartVertexIndexU3E5__4_6() const { return ___U3CstartVertexIndexU3E5__4_6; }
	inline int32_t* get_address_of_U3CstartVertexIndexU3E5__4_6() { return &___U3CstartVertexIndexU3E5__4_6; }
	inline void set_U3CstartVertexIndexU3E5__4_6(int32_t value)
	{
		___U3CstartVertexIndexU3E5__4_6 = value;
	}
};


// UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__13
struct U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.XR.OpenXR.OpenXRRestarter UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__13::<>4__this
	OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * ___U3CU3E4__this_2;
	// System.Boolean UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__13::shouldRestart
	bool ___shouldRestart_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF, ___U3CU3E4__this_2)); }
	inline OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_shouldRestart_3() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF, ___shouldRestart_3)); }
	inline bool get_shouldRestart_3() const { return ___shouldRestart_3; }
	inline bool* get_address_of_shouldRestart_3() { return &___shouldRestart_3; }
	inline void set_shouldRestart_3(bool value)
	{
		___shouldRestart_3 = value;
	}
};


// Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7
struct U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::<>4__this
	OpenXRSceneUnderstandingObserver_t5C36ECDE67DDA924919C463B2D7272E5B2215CB1 * ___U3CU3E4__this_2;
	// System.String Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::pathInStreamingAssets
	String_t* ___pathInStreamingAssets_3;
	// System.Uri Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::<fullUri>5__2
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___U3CfullUriU3E5__2_4;
	// UnityEngine.Networking.UnityWebRequest Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::<webRequest>5__3
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___U3CU3E4__this_2)); }
	inline OpenXRSceneUnderstandingObserver_t5C36ECDE67DDA924919C463B2D7272E5B2215CB1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OpenXRSceneUnderstandingObserver_t5C36ECDE67DDA924919C463B2D7272E5B2215CB1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OpenXRSceneUnderstandingObserver_t5C36ECDE67DDA924919C463B2D7272E5B2215CB1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_pathInStreamingAssets_3() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___pathInStreamingAssets_3)); }
	inline String_t* get_pathInStreamingAssets_3() const { return ___pathInStreamingAssets_3; }
	inline String_t** get_address_of_pathInStreamingAssets_3() { return &___pathInStreamingAssets_3; }
	inline void set_pathInStreamingAssets_3(String_t* value)
	{
		___pathInStreamingAssets_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathInStreamingAssets_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfullUriU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___U3CfullUriU3E5__2_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_U3CfullUriU3E5__2_4() const { return ___U3CfullUriU3E5__2_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_U3CfullUriU3E5__2_4() { return &___U3CfullUriU3E5__2_4; }
	inline void set_U3CfullUriU3E5__2_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___U3CfullUriU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfullUriU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwebRequestU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___U3CwebRequestU3E5__3_5)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3E5__3_5() const { return ___U3CwebRequestU3E5__3_5; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3E5__3_5() { return &___U3CwebRequestU3E5__3_5; }
	inline void set_U3CwebRequestU3E5__3_5(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3E5__3_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23
struct U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2 Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::<>4__this
	PressableButtonHoloLens2_tF72F05F44AF391672E6B51BA428DDB6D2AE92E10 * ___U3CU3E4__this_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::fadeIn
	bool ___fadeIn_3;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::time
	float ___time_4;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::<blendTime>5__2
	float ___U3CblendTimeU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1, ___U3CU3E4__this_2)); }
	inline PressableButtonHoloLens2_tF72F05F44AF391672E6B51BA428DDB6D2AE92E10 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PressableButtonHoloLens2_tF72F05F44AF391672E6B51BA428DDB6D2AE92E10 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PressableButtonHoloLens2_tF72F05F44AF391672E6B51BA428DDB6D2AE92E10 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_fadeIn_3() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1, ___fadeIn_3)); }
	inline bool get_fadeIn_3() const { return ___fadeIn_3; }
	inline bool* get_address_of_fadeIn_3() { return &___fadeIn_3; }
	inline void set_fadeIn_3(bool value)
	{
		___fadeIn_3 = value;
	}

	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1, ___time_4)); }
	inline float get_time_4() const { return ___time_4; }
	inline float* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(float value)
	{
		___time_4 = value;
	}

	inline static int32_t get_offset_of_U3CblendTimeU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1, ___U3CblendTimeU3E5__2_5)); }
	inline float get_U3CblendTimeU3E5__2_5() const { return ___U3CblendTimeU3E5__2_5; }
	inline float* get_address_of_U3CblendTimeU3E5__2_5() { return &___U3CblendTimeU3E5__2_5; }
	inline void set_U3CblendTimeU3E5__2_5(float value)
	{
		___U3CblendTimeU3E5__2_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4
struct U3CResetViewMatricesOnFrameEndU3Ed__4_t569CF35E153EC5D48A50D394579FF8B6BA3F2926  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CResetViewMatricesOnFrameEndU3Ed__4_t569CF35E153EC5D48A50D394579FF8B6BA3F2926, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CResetViewMatricesOnFrameEndU3Ed__4_t569CF35E153EC5D48A50D394579FF8B6BA3F2926, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22
struct U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Utilities.ProximityLight Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22::<>4__this
	ProximityLight_t96325E459FE7A256CBD8DED0E33C2EEBFF3AE834 * ___U3CU3E4__this_2;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22::pulseDuration
	float ___pulseDuration_3;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22::fadeBegin
	float ___fadeBegin_4;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22::fadeSpeed
	float ___fadeSpeed_5;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22::<pulseTimer>5__2
	float ___U3CpulseTimerU3E5__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A, ___U3CU3E4__this_2)); }
	inline ProximityLight_t96325E459FE7A256CBD8DED0E33C2EEBFF3AE834 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ProximityLight_t96325E459FE7A256CBD8DED0E33C2EEBFF3AE834 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ProximityLight_t96325E459FE7A256CBD8DED0E33C2EEBFF3AE834 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_pulseDuration_3() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A, ___pulseDuration_3)); }
	inline float get_pulseDuration_3() const { return ___pulseDuration_3; }
	inline float* get_address_of_pulseDuration_3() { return &___pulseDuration_3; }
	inline void set_pulseDuration_3(float value)
	{
		___pulseDuration_3 = value;
	}

	inline static int32_t get_offset_of_fadeBegin_4() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A, ___fadeBegin_4)); }
	inline float get_fadeBegin_4() const { return ___fadeBegin_4; }
	inline float* get_address_of_fadeBegin_4() { return &___fadeBegin_4; }
	inline void set_fadeBegin_4(float value)
	{
		___fadeBegin_4 = value;
	}

	inline static int32_t get_offset_of_fadeSpeed_5() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A, ___fadeSpeed_5)); }
	inline float get_fadeSpeed_5() const { return ___fadeSpeed_5; }
	inline float* get_address_of_fadeSpeed_5() { return &___fadeSpeed_5; }
	inline void set_fadeSpeed_5(float value)
	{
		___fadeSpeed_5 = value;
	}

	inline static int32_t get_offset_of_U3CpulseTimerU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A, ___U3CpulseTimerU3E5__2_6)); }
	inline float get_U3CpulseTimerU3E5__2_6() const { return ___U3CpulseTimerU3E5__2_6; }
	inline float* get_address_of_U3CpulseTimerU3E5__2_6() { return &___U3CpulseTimerU3E5__2_6; }
	inline void set_U3CpulseTimerU3E5__2_6(float value)
	{
		___U3CpulseTimerU3E5__2_6 = value;
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct Enumerator_tAB7E68F0BB8C5EF7B2BE6E3A25413F6058E5FC55 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tA041F36FB3C3242D919652844C1C7580D00CCEAA * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_tAB7E68F0BB8C5EF7B2BE6E3A25413F6058E5FC55, ____set_0)); }
	inline HashSet_1_tA041F36FB3C3242D919652844C1C7580D00CCEAA * get__set_0() const { return ____set_0; }
	inline HashSet_1_tA041F36FB3C3242D919652844C1C7580D00CCEAA ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_tA041F36FB3C3242D919652844C1C7580D00CCEAA * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_tAB7E68F0BB8C5EF7B2BE6E3A25413F6058E5FC55, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_tAB7E68F0BB8C5EF7B2BE6E3A25413F6058E5FC55, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_tAB7E68F0BB8C5EF7B2BE6E3A25413F6058E5FC55, ____current_3)); }
	inline RuntimeObject* get__current_3() const { return ____current_3; }
	inline RuntimeObject** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject* value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct Enumerator_tF83102F879198A368909B481DFCE07BEB2156FC3 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t8377EDD7191C350CDE78E5396001C8F68AD0BCFD * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	PoseCurves_tFDE6C196723D02CFC8ECD4103710E043AB2D6C37 * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tF83102F879198A368909B481DFCE07BEB2156FC3, ___dictionary_0)); }
	inline Dictionary_2_t8377EDD7191C350CDE78E5396001C8F68AD0BCFD * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t8377EDD7191C350CDE78E5396001C8F68AD0BCFD ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t8377EDD7191C350CDE78E5396001C8F68AD0BCFD * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tF83102F879198A368909B481DFCE07BEB2156FC3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tF83102F879198A368909B481DFCE07BEB2156FC3, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tF83102F879198A368909B481DFCE07BEB2156FC3, ___currentValue_3)); }
	inline PoseCurves_tFDE6C196723D02CFC8ECD4103710E043AB2D6C37 * get_currentValue_3() const { return ___currentValue_3; }
	inline PoseCurves_tFDE6C196723D02CFC8ECD4103710E043AB2D6C37 ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(PoseCurves_tFDE6C196723D02CFC8ECD4103710E043AB2D6C37 * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt32,System.Boolean>
struct Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_t727597657DBCDE8841E480361B4F6009E211BACA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	uint32_t ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6, ___dictionary_0)); }
	inline Dictionary_2_t727597657DBCDE8841E480361B4F6009E211BACA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t727597657DBCDE8841E480361B4F6009E211BACA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t727597657DBCDE8841E480361B4F6009E211BACA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6, ___currentKey_3)); }
	inline uint32_t get_currentKey_3() const { return ___currentKey_3; }
	inline uint32_t* get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(uint32_t value)
	{
		___currentKey_3 = value;
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputDevice>
struct InlinedArray_1_tA44143E57933763DA129108D2BC03FC6CA092C27 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tA44143E57933763DA129108D2BC03FC6CA092C27, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tA44143E57933763DA129108D2BC03FC6CA092C27, ___firstValue_1)); }
	inline InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tA44143E57933763DA129108D2BC03FC6CA092C27, ___additionalValues_2)); }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PointerData_t524B70063DAD63AB1B38F1BB8C9EE71E1D04DC1F * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0, ___value_1)); }
	inline PointerData_t524B70063DAD63AB1B38F1BB8C9EE71E1D04DC1F * get_value_1() const { return ___value_1; }
	inline PointerData_t524B70063DAD63AB1B38F1BB8C9EE71E1D04DC1F ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(PointerData_t524B70063DAD63AB1B38F1BB8C9EE71E1D04DC1F * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>
struct KeyValuePair_2_tFBE4785A593E0906126E2B15AA7A9D45E41F9A38 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFBE4785A593E0906126E2B15AA7A9D45E41F9A38, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFBE4785A593E0906126E2B15AA7A9D45E41F9A38, ___value_1)); }
	inline RuntimeObject* get_value_1() const { return ___value_1; }
	inline RuntimeObject** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Net.Http.Headers.HttpHeaders/HeaderBucket>
struct KeyValuePair_2_tEC74C488EC18D30FC93E41D8D975D2F1EC59B259 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	HeaderBucket_t40A88FA9F2804D5BD425E6983443094A03859CC8 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tEC74C488EC18D30FC93E41D8D975D2F1EC59B259, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tEC74C488EC18D30FC93E41D8D975D2F1EC59B259, ___value_1)); }
	inline HeaderBucket_t40A88FA9F2804D5BD425E6983443094A03859CC8 * get_value_1() const { return ___value_1; }
	inline HeaderBucket_t40A88FA9F2804D5BD425E6983443094A03859CC8 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(HeaderBucket_t40A88FA9F2804D5BD425E6983443094A03859CC8 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Single>
struct Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputAction>
struct ReadOnlyArray_1_tFE19A5B2EF7A9DC3991CAB55CDA293FF61BE7B86 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tFE19A5B2EF7A9DC3991CAB55CDA293FF61BE7B86, ___m_Array_0)); }
	inline InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* get_m_Array_0() const { return ___m_Array_0; }
	inline InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tFE19A5B2EF7A9DC3991CAB55CDA293FF61BE7B86, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tFE19A5B2EF7A9DC3991CAB55CDA293FF61BE7B86, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
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


// UnityEngine.InputSystem.LowLevel.InputEventPtr
struct InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D 
{
public:
	// UnityEngine.InputSystem.LowLevel.InputEvent* UnityEngine.InputSystem.LowLevel.InputEventPtr::m_EventPtr
	InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * ___m_EventPtr_0;

public:
	inline static int32_t get_offset_of_m_EventPtr_0() { return static_cast<int32_t>(offsetof(InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D, ___m_EventPtr_0)); }
	inline InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * get_m_EventPtr_0() const { return ___m_EventPtr_0; }
	inline InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 ** get_address_of_m_EventPtr_0() { return &___m_EventPtr_0; }
	inline void set_m_EventPtr_0(InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * value)
	{
		___m_EventPtr_0 = value;
	}
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


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
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


// Microsoft.MixedReality.OpenXR.Remoting.SecureConnectionServerConfiguration
struct SecureConnectionServerConfiguration_t72D4CCCC30A9F0BDDD180DBAC51FBB1674FA7E3B 
{
public:
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureConnectionServerConfiguration::SecureListen
	bool ___SecureListen_0;
	// System.String Microsoft.MixedReality.OpenXR.Remoting.SecureConnectionServerConfiguration::CertificateStorePath
	String_t* ___CertificateStorePath_1;
	// System.String Microsoft.MixedReality.OpenXR.Remoting.SecureConnectionServerConfiguration::SubjectName
	String_t* ___SubjectName_2;
	// System.String Microsoft.MixedReality.OpenXR.Remoting.SecureConnectionServerConfiguration::KeyPassphrase
	String_t* ___KeyPassphrase_3;
	// System.String Microsoft.MixedReality.OpenXR.Remoting.SecureConnectionServerConfiguration::AuthenticationRealm
	String_t* ___AuthenticationRealm_4;
	// System.String Microsoft.MixedReality.OpenXR.Remoting.SecureConnectionServerConfiguration::Token
	String_t* ___Token_5;

public:
	inline static int32_t get_offset_of_SecureListen_0() { return static_cast<int32_t>(offsetof(SecureConnectionServerConfiguration_t72D4CCCC30A9F0BDDD180DBAC51FBB1674FA7E3B, ___SecureListen_0)); }
	inline bool get_SecureListen_0() const { return ___SecureListen_0; }
	inline bool* get_address_of_SecureListen_0() { return &___SecureListen_0; }
	inline void set_SecureListen_0(bool value)
	{
		___SecureListen_0 = value;
	}

	inline static int32_t get_offset_of_CertificateStorePath_1() { return static_cast<int32_t>(offsetof(SecureConnectionServerConfiguration_t72D4CCCC30A9F0BDDD180DBAC51FBB1674FA7E3B, ___CertificateStorePath_1)); }
	inline String_t* get_CertificateStorePath_1() const { return ___CertificateStorePath_1; }
	inline String_t** get_address_of_CertificateStorePath_1() { return &___CertificateStorePath_1; }
	inline void set_CertificateStorePath_1(String_t* value)
	{
		___CertificateStorePath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CertificateStorePath_1), (void*)value);
	}

	inline static int32_t get_offset_of_SubjectName_2() { return static_cast<int32_t>(offsetof(SecureConnectionServerConfiguration_t72D4CCCC30A9F0BDDD180DBAC51FBB1674FA7E3B, ___SubjectName_2)); }
	inline String_t* get_SubjectName_2() const { return ___SubjectName_2; }
	inline String_t** get_address_of_SubjectName_2() { return &___SubjectName_2; }
	inline void set_SubjectName_2(String_t* value)
	{
		___SubjectName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SubjectName_2), (void*)value);
	}

	inline static int32_t get_offset_of_KeyPassphrase_3() { return static_cast<int32_t>(offsetof(SecureConnectionServerConfiguration_t72D4CCCC30A9F0BDDD180DBAC51FBB1674FA7E3B, ___KeyPassphrase_3)); }
	inline String_t* get_KeyPassphrase_3() const { return ___KeyPassphrase_3; }
	inline String_t** get_address_of_KeyPassphrase_3() { return &___KeyPassphrase_3; }
	inline void set_KeyPassphrase_3(String_t* value)
	{
		___KeyPassphrase_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyPassphrase_3), (void*)value);
	}

	inline static int32_t get_offset_of_AuthenticationRealm_4() { return static_cast<int32_t>(offsetof(SecureConnectionServerConfiguration_t72D4CCCC30A9F0BDDD180DBAC51FBB1674FA7E3B, ___AuthenticationRealm_4)); }
	inline String_t* get_AuthenticationRealm_4() const { return ___AuthenticationRealm_4; }
	inline String_t** get_address_of_AuthenticationRealm_4() { return &___AuthenticationRealm_4; }
	inline void set_AuthenticationRealm_4(String_t* value)
	{
		___AuthenticationRealm_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AuthenticationRealm_4), (void*)value);
	}

	inline static int32_t get_offset_of_Token_5() { return static_cast<int32_t>(offsetof(SecureConnectionServerConfiguration_t72D4CCCC30A9F0BDDD180DBAC51FBB1674FA7E3B, ___Token_5)); }
	inline String_t* get_Token_5() const { return ___Token_5; }
	inline String_t** get_address_of_Token_5() { return &___Token_5; }
	inline void set_Token_5(String_t* value)
	{
		___Token_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Token_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.SecureConnectionServerConfiguration
#pragma pack(push, tp, 8)
struct SecureConnectionServerConfiguration_t72D4CCCC30A9F0BDDD180DBAC51FBB1674FA7E3B_marshaled_pinvoke
{
	int32_t ___SecureListen_0;
	char* ___CertificateStorePath_1;
	char* ___SubjectName_2;
	char* ___KeyPassphrase_3;
	char* ___AuthenticationRealm_4;
	char* ___Token_5;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.SecureConnectionServerConfiguration
#pragma pack(push, tp, 8)
struct SecureConnectionServerConfiguration_t72D4CCCC30A9F0BDDD180DBAC51FBB1674FA7E3B_marshaled_com
{
	int32_t ___SecureListen_0;
	Il2CppChar* ___CertificateStorePath_1;
	Il2CppChar* ___SubjectName_2;
	Il2CppChar* ___KeyPassphrase_3;
	Il2CppChar* ___AuthenticationRealm_4;
	Il2CppChar* ___Token_5;
};
#pragma pack(pop, tp)

// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
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


// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007  : public CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB
{
public:

public:
};


// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t00707746ADE20907FAB93F8A404F4AAA01FDFDE3  : public CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB
{
public:

public:
};


// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B  : public CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB
{
public:

public:
};


// System.Security.Cryptography.X509Certificates.X509CertificateImplMono
struct X509CertificateImplMono_t0714C4060B1C3DCDA7CAF9308E53CC327C347CB5  : public X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219
{
public:
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateImplMono::x509
	X509Certificate_t0906E211571ECB462D2CEAC3BC83A12FBEFF03CF * ___x509_1;

public:
	inline static int32_t get_offset_of_x509_1() { return static_cast<int32_t>(offsetof(X509CertificateImplMono_t0714C4060B1C3DCDA7CAF9308E53CC327C347CB5, ___x509_1)); }
	inline X509Certificate_t0906E211571ECB462D2CEAC3BC83A12FBEFF03CF * get_x509_1() const { return ___x509_1; }
	inline X509Certificate_t0906E211571ECB462D2CEAC3BC83A12FBEFF03CF ** get_address_of_x509_1() { return &___x509_1; }
	inline void set_x509_1(X509Certificate_t0906E211571ECB462D2CEAC3BC83A12FBEFF03CF * value)
	{
		___x509_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x509_1), (void*)value);
	}
};


// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487  : public CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB
{
public:
	// System.Boolean Mono.Security.X509.X509ExtensionCollection::readOnly
	bool ___readOnly_1;

public:
	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487, ___readOnly_1)); }
	inline bool get_readOnly_1() const { return ___readOnly_1; }
	inline bool* get_address_of_readOnly_1() { return &___readOnly_1; }
	inline void set_readOnly_1(bool value)
	{
		___readOnly_1 = value;
	}
};


// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_tA7898A1845FB4B820B5F88C41159420CC0135B3A  : public CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB
{
public:
	// System.Boolean Mono.Security.X509.X509ExtensionCollection::readOnly
	bool ___readOnly_1;

public:
	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_tA7898A1845FB4B820B5F88C41159420CC0135B3A, ___readOnly_1)); }
	inline bool get_readOnly_1() const { return ___readOnly_1; }
	inline bool* get_address_of_readOnly_1() { return &___readOnly_1; }
	inline void set_readOnly_1(bool value)
	{
		___readOnly_1 = value;
	}
};


// System.Collections.ArrayList/ReadOnlyArrayList
struct ReadOnlyArrayList_t04F7885A1EAD601A3BC41F116B32946F692E592C  : public ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/ReadOnlyArrayList::_list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____list_5;

public:
	inline static int32_t get_offset_of__list_5() { return static_cast<int32_t>(offsetof(ReadOnlyArrayList_t04F7885A1EAD601A3BC41F116B32946F692E592C, ____list_5)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__list_5() const { return ____list_5; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__list_5() { return &____list_5; }
	inline void set__list_5(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____list_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_5), (void*)value);
	}
};


// UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer
struct U3CbufferU3Ee__FixedBuffer_t365C7AE7EAED1A47BFBD58AF39CE82BE71A50318 
{
public:
	union
	{
		struct
		{
			// System.Char UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer::FixedElementField
			Il2CppChar ___FixedElementField_0;
		};
		uint8_t U3CbufferU3Ee__FixedBuffer_t365C7AE7EAED1A47BFBD58AF39CE82BE71A50318__padding[128];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CbufferU3Ee__FixedBuffer_t365C7AE7EAED1A47BFBD58AF39CE82BE71A50318, ___FixedElementField_0)); }
	inline Il2CppChar get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline Il2CppChar* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(Il2CppChar value)
	{
		___FixedElementField_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer
struct U3CbufferU3Ee__FixedBuffer_t365C7AE7EAED1A47BFBD58AF39CE82BE71A50318_marshaled_pinvoke
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CbufferU3Ee__FixedBuffer_t365C7AE7EAED1A47BFBD58AF39CE82BE71A50318__padding[128];
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer
struct U3CbufferU3Ee__FixedBuffer_t365C7AE7EAED1A47BFBD58AF39CE82BE71A50318_marshaled_com
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CbufferU3Ee__FixedBuffer_t365C7AE7EAED1A47BFBD58AF39CE82BE71A50318__padding[128];
	};
};

// UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16 
{
public:
	// System.Void* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::basePtr
	void* ___basePtr_0;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapCount
	int32_t ___mapCount_1;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionCount
	int32_t ___actionCount_2;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionCount
	int32_t ___interactionCount_3;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingCount
	int32_t ___bindingCount_4;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlCount
	int32_t ___controlCount_5;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeCount
	int32_t ___compositeCount_6;
	// UnityEngine.InputSystem.InputActionState/TriggerState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionStates
	TriggerState_tD1D00F0DE77AE9CA21DE7A2CEDA8D93EED009CBE * ___actionStates_7;
	// UnityEngine.InputSystem.InputActionState/BindingState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingStates
	BindingState_tE715A30188652BA114CEB7CD0E12A25CFCEF8FC7 * ___bindingStates_8;
	// UnityEngine.InputSystem.InputActionState/InteractionState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionStates
	InteractionState_tC8A885CD98436B1609B0988EFDCCD6BBBCFDD6B7 * ___interactionStates_9;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlMagnitudes
	float* ___controlMagnitudes_10;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeMagnitudes
	float* ___compositeMagnitudes_11;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::enabledControls
	int32_t* ___enabledControls_12;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndicesAndCounts
	uint16_t* ___actionBindingIndicesAndCounts_13;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndices
	uint16_t* ___actionBindingIndices_14;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlIndexToBindingIndex
	int32_t* ___controlIndexToBindingIndex_15;
	// UnityEngine.InputSystem.InputActionState/ActionMapIndices* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapIndices
	ActionMapIndices_t70234E0132647DCE386300AED2C964F629609245 * ___mapIndices_16;

public:
	inline static int32_t get_offset_of_basePtr_0() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___basePtr_0)); }
	inline void* get_basePtr_0() const { return ___basePtr_0; }
	inline void** get_address_of_basePtr_0() { return &___basePtr_0; }
	inline void set_basePtr_0(void* value)
	{
		___basePtr_0 = value;
	}

	inline static int32_t get_offset_of_mapCount_1() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___mapCount_1)); }
	inline int32_t get_mapCount_1() const { return ___mapCount_1; }
	inline int32_t* get_address_of_mapCount_1() { return &___mapCount_1; }
	inline void set_mapCount_1(int32_t value)
	{
		___mapCount_1 = value;
	}

	inline static int32_t get_offset_of_actionCount_2() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___actionCount_2)); }
	inline int32_t get_actionCount_2() const { return ___actionCount_2; }
	inline int32_t* get_address_of_actionCount_2() { return &___actionCount_2; }
	inline void set_actionCount_2(int32_t value)
	{
		___actionCount_2 = value;
	}

	inline static int32_t get_offset_of_interactionCount_3() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___interactionCount_3)); }
	inline int32_t get_interactionCount_3() const { return ___interactionCount_3; }
	inline int32_t* get_address_of_interactionCount_3() { return &___interactionCount_3; }
	inline void set_interactionCount_3(int32_t value)
	{
		___interactionCount_3 = value;
	}

	inline static int32_t get_offset_of_bindingCount_4() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___bindingCount_4)); }
	inline int32_t get_bindingCount_4() const { return ___bindingCount_4; }
	inline int32_t* get_address_of_bindingCount_4() { return &___bindingCount_4; }
	inline void set_bindingCount_4(int32_t value)
	{
		___bindingCount_4 = value;
	}

	inline static int32_t get_offset_of_controlCount_5() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___controlCount_5)); }
	inline int32_t get_controlCount_5() const { return ___controlCount_5; }
	inline int32_t* get_address_of_controlCount_5() { return &___controlCount_5; }
	inline void set_controlCount_5(int32_t value)
	{
		___controlCount_5 = value;
	}

	inline static int32_t get_offset_of_compositeCount_6() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___compositeCount_6)); }
	inline int32_t get_compositeCount_6() const { return ___compositeCount_6; }
	inline int32_t* get_address_of_compositeCount_6() { return &___compositeCount_6; }
	inline void set_compositeCount_6(int32_t value)
	{
		___compositeCount_6 = value;
	}

	inline static int32_t get_offset_of_actionStates_7() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___actionStates_7)); }
	inline TriggerState_tD1D00F0DE77AE9CA21DE7A2CEDA8D93EED009CBE * get_actionStates_7() const { return ___actionStates_7; }
	inline TriggerState_tD1D00F0DE77AE9CA21DE7A2CEDA8D93EED009CBE ** get_address_of_actionStates_7() { return &___actionStates_7; }
	inline void set_actionStates_7(TriggerState_tD1D00F0DE77AE9CA21DE7A2CEDA8D93EED009CBE * value)
	{
		___actionStates_7 = value;
	}

	inline static int32_t get_offset_of_bindingStates_8() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___bindingStates_8)); }
	inline BindingState_tE715A30188652BA114CEB7CD0E12A25CFCEF8FC7 * get_bindingStates_8() const { return ___bindingStates_8; }
	inline BindingState_tE715A30188652BA114CEB7CD0E12A25CFCEF8FC7 ** get_address_of_bindingStates_8() { return &___bindingStates_8; }
	inline void set_bindingStates_8(BindingState_tE715A30188652BA114CEB7CD0E12A25CFCEF8FC7 * value)
	{
		___bindingStates_8 = value;
	}

	inline static int32_t get_offset_of_interactionStates_9() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___interactionStates_9)); }
	inline InteractionState_tC8A885CD98436B1609B0988EFDCCD6BBBCFDD6B7 * get_interactionStates_9() const { return ___interactionStates_9; }
	inline InteractionState_tC8A885CD98436B1609B0988EFDCCD6BBBCFDD6B7 ** get_address_of_interactionStates_9() { return &___interactionStates_9; }
	inline void set_interactionStates_9(InteractionState_tC8A885CD98436B1609B0988EFDCCD6BBBCFDD6B7 * value)
	{
		___interactionStates_9 = value;
	}

	inline static int32_t get_offset_of_controlMagnitudes_10() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___controlMagnitudes_10)); }
	inline float* get_controlMagnitudes_10() const { return ___controlMagnitudes_10; }
	inline float** get_address_of_controlMagnitudes_10() { return &___controlMagnitudes_10; }
	inline void set_controlMagnitudes_10(float* value)
	{
		___controlMagnitudes_10 = value;
	}

	inline static int32_t get_offset_of_compositeMagnitudes_11() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___compositeMagnitudes_11)); }
	inline float* get_compositeMagnitudes_11() const { return ___compositeMagnitudes_11; }
	inline float** get_address_of_compositeMagnitudes_11() { return &___compositeMagnitudes_11; }
	inline void set_compositeMagnitudes_11(float* value)
	{
		___compositeMagnitudes_11 = value;
	}

	inline static int32_t get_offset_of_enabledControls_12() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___enabledControls_12)); }
	inline int32_t* get_enabledControls_12() const { return ___enabledControls_12; }
	inline int32_t** get_address_of_enabledControls_12() { return &___enabledControls_12; }
	inline void set_enabledControls_12(int32_t* value)
	{
		___enabledControls_12 = value;
	}

	inline static int32_t get_offset_of_actionBindingIndicesAndCounts_13() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___actionBindingIndicesAndCounts_13)); }
	inline uint16_t* get_actionBindingIndicesAndCounts_13() const { return ___actionBindingIndicesAndCounts_13; }
	inline uint16_t** get_address_of_actionBindingIndicesAndCounts_13() { return &___actionBindingIndicesAndCounts_13; }
	inline void set_actionBindingIndicesAndCounts_13(uint16_t* value)
	{
		___actionBindingIndicesAndCounts_13 = value;
	}

	inline static int32_t get_offset_of_actionBindingIndices_14() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___actionBindingIndices_14)); }
	inline uint16_t* get_actionBindingIndices_14() const { return ___actionBindingIndices_14; }
	inline uint16_t** get_address_of_actionBindingIndices_14() { return &___actionBindingIndices_14; }
	inline void set_actionBindingIndices_14(uint16_t* value)
	{
		___actionBindingIndices_14 = value;
	}

	inline static int32_t get_offset_of_controlIndexToBindingIndex_15() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___controlIndexToBindingIndex_15)); }
	inline int32_t* get_controlIndexToBindingIndex_15() const { return ___controlIndexToBindingIndex_15; }
	inline int32_t** get_address_of_controlIndexToBindingIndex_15() { return &___controlIndexToBindingIndex_15; }
	inline void set_controlIndexToBindingIndex_15(int32_t* value)
	{
		___controlIndexToBindingIndex_15 = value;
	}

	inline static int32_t get_offset_of_mapIndices_16() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___mapIndices_16)); }
	inline ActionMapIndices_t70234E0132647DCE386300AED2C964F629609245 * get_mapIndices_16() const { return ___mapIndices_16; }
	inline ActionMapIndices_t70234E0132647DCE386300AED2C964F629609245 ** get_address_of_mapIndices_16() { return &___mapIndices_16; }
	inline void set_mapIndices_16(ActionMapIndices_t70234E0132647DCE386300AED2C964F629609245 * value)
	{
		___mapIndices_16 = value;
	}
};


// UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator
struct Enumerator_tB5DF0C3FEDACC5148DDF4E9564867E27252852BA 
{
public:
	// UnityEngine.InputSystem.Utilities.InputActionTrace UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator::m_Trace
	InputActionTrace_tD77E232622C090881453CFA37F1F82CD4A00AD1C * ___m_Trace_0;
	// UnityEngine.InputSystem.LowLevel.ActionEvent* UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator::m_Buffer
	ActionEvent_t256427C0B4686727B268753C31A6AC46360BACE1 * ___m_Buffer_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator::m_EventCount
	int32_t ___m_EventCount_2;
	// UnityEngine.InputSystem.LowLevel.ActionEvent* UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator::m_CurrentEvent
	ActionEvent_t256427C0B4686727B268753C31A6AC46360BACE1 * ___m_CurrentEvent_3;
	// System.Int32 UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator::m_CurrentIndex
	int32_t ___m_CurrentIndex_4;

public:
	inline static int32_t get_offset_of_m_Trace_0() { return static_cast<int32_t>(offsetof(Enumerator_tB5DF0C3FEDACC5148DDF4E9564867E27252852BA, ___m_Trace_0)); }
	inline InputActionTrace_tD77E232622C090881453CFA37F1F82CD4A00AD1C * get_m_Trace_0() const { return ___m_Trace_0; }
	inline InputActionTrace_tD77E232622C090881453CFA37F1F82CD4A00AD1C ** get_address_of_m_Trace_0() { return &___m_Trace_0; }
	inline void set_m_Trace_0(InputActionTrace_tD77E232622C090881453CFA37F1F82CD4A00AD1C * value)
	{
		___m_Trace_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trace_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Buffer_1() { return static_cast<int32_t>(offsetof(Enumerator_tB5DF0C3FEDACC5148DDF4E9564867E27252852BA, ___m_Buffer_1)); }
	inline ActionEvent_t256427C0B4686727B268753C31A6AC46360BACE1 * get_m_Buffer_1() const { return ___m_Buffer_1; }
	inline ActionEvent_t256427C0B4686727B268753C31A6AC46360BACE1 ** get_address_of_m_Buffer_1() { return &___m_Buffer_1; }
	inline void set_m_Buffer_1(ActionEvent_t256427C0B4686727B268753C31A6AC46360BACE1 * value)
	{
		___m_Buffer_1 = value;
	}

	inline static int32_t get_offset_of_m_EventCount_2() { return static_cast<int32_t>(offsetof(Enumerator_tB5DF0C3FEDACC5148DDF4E9564867E27252852BA, ___m_EventCount_2)); }
	inline int32_t get_m_EventCount_2() const { return ___m_EventCount_2; }
	inline int32_t* get_address_of_m_EventCount_2() { return &___m_EventCount_2; }
	inline void set_m_EventCount_2(int32_t value)
	{
		___m_EventCount_2 = value;
	}

	inline static int32_t get_offset_of_m_CurrentEvent_3() { return static_cast<int32_t>(offsetof(Enumerator_tB5DF0C3FEDACC5148DDF4E9564867E27252852BA, ___m_CurrentEvent_3)); }
	inline ActionEvent_t256427C0B4686727B268753C31A6AC46360BACE1 * get_m_CurrentEvent_3() const { return ___m_CurrentEvent_3; }
	inline ActionEvent_t256427C0B4686727B268753C31A6AC46360BACE1 ** get_address_of_m_CurrentEvent_3() { return &___m_CurrentEvent_3; }
	inline void set_m_CurrentEvent_3(ActionEvent_t256427C0B4686727B268753C31A6AC46360BACE1 * value)
	{
		___m_CurrentEvent_3 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_4() { return static_cast<int32_t>(offsetof(Enumerator_tB5DF0C3FEDACC5148DDF4E9564867E27252852BA, ___m_CurrentIndex_4)); }
	inline int32_t get_m_CurrentIndex_4() const { return ___m_CurrentIndex_4; }
	inline int32_t* get_address_of_m_CurrentIndex_4() { return &___m_CurrentIndex_4; }
	inline void set_m_CurrentIndex_4(int32_t value)
	{
		___m_CurrentIndex_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator
struct Enumerator_tB5DF0C3FEDACC5148DDF4E9564867E27252852BA_marshaled_pinvoke
{
	InputActionTrace_tD77E232622C090881453CFA37F1F82CD4A00AD1C * ___m_Trace_0;
	ActionEvent_t256427C0B4686727B268753C31A6AC46360BACE1 * ___m_Buffer_1;
	int32_t ___m_EventCount_2;
	ActionEvent_t256427C0B4686727B268753C31A6AC46360BACE1 * ___m_CurrentEvent_3;
	int32_t ___m_CurrentIndex_4;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator
struct Enumerator_tB5DF0C3FEDACC5148DDF4E9564867E27252852BA_marshaled_com
{
	InputActionTrace_tD77E232622C090881453CFA37F1F82CD4A00AD1C * ___m_Trace_0;
	ActionEvent_t256427C0B4686727B268753C31A6AC46360BACE1 * ___m_Buffer_1;
	int32_t ___m_EventCount_2;
	ActionEvent_t256427C0B4686727B268753C31A6AC46360BACE1 * ___m_CurrentEvent_3;
	int32_t ___m_CurrentIndex_4;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Cache::table
	Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 * ___table_0;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67, ___table_0)); }
	inline Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 * get_table_0() const { return ___table_0; }
	inline Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___table_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67_marshaled_pinvoke
{
	Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 * ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67_marshaled_com
{
	Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 * ___table_0;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/CacheRefInstance
struct CacheRefInstance_t788CDF364A5E502E9DDC497D6CF98F54BC657AC2 
{
public:
	// System.Boolean UnityEngine.InputSystem.Layouts.InputControlLayout/CacheRefInstance::valid
	bool ___valid_0;

public:
	inline static int32_t get_offset_of_valid_0() { return static_cast<int32_t>(offsetof(CacheRefInstance_t788CDF364A5E502E9DDC497D6CF98F54BC657AC2, ___valid_0)); }
	inline bool get_valid_0() const { return ___valid_0; }
	inline bool* get_address_of_valid_0() { return &___valid_0; }
	inline void set_valid_0(bool value)
	{
		___valid_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/CacheRefInstance
struct CacheRefInstance_t788CDF364A5E502E9DDC497D6CF98F54BC657AC2_marshaled_pinvoke
{
	int32_t ___valid_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/CacheRefInstance
struct CacheRefInstance_t788CDF364A5E502E9DDC497D6CF98F54BC657AC2_marshaled_com
{
	int32_t ___valid_0;
};

// UnityEngine.InputSystem.Layouts.InputDeviceBuilder/RefInstance
struct RefInstance_t6F7C0B4DB262CBC9D540A21D6A88D34F57880B31 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RefInstance_t6F7C0B4DB262CBC9D540A21D6A88D34F57880B31__padding[1];
	};

public:
};


// UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator
struct Enumerator_t29C1328DF03C4FA5E88DD759F187863F5AB238FB 
{
public:
	// UnityEngine.InputSystem.LowLevel.InputEvent* UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator::m_Buffer
	InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * ___m_Buffer_0;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator::m_EventCount
	int32_t ___m_EventCount_1;
	// UnityEngine.InputSystem.LowLevel.InputEvent* UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator::m_CurrentEvent
	InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * ___m_CurrentEvent_2;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator::m_CurrentIndex
	int32_t ___m_CurrentIndex_3;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(Enumerator_t29C1328DF03C4FA5E88DD759F187863F5AB238FB, ___m_Buffer_0)); }
	inline InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 ** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_EventCount_1() { return static_cast<int32_t>(offsetof(Enumerator_t29C1328DF03C4FA5E88DD759F187863F5AB238FB, ___m_EventCount_1)); }
	inline int32_t get_m_EventCount_1() const { return ___m_EventCount_1; }
	inline int32_t* get_address_of_m_EventCount_1() { return &___m_EventCount_1; }
	inline void set_m_EventCount_1(int32_t value)
	{
		___m_EventCount_1 = value;
	}

	inline static int32_t get_offset_of_m_CurrentEvent_2() { return static_cast<int32_t>(offsetof(Enumerator_t29C1328DF03C4FA5E88DD759F187863F5AB238FB, ___m_CurrentEvent_2)); }
	inline InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * get_m_CurrentEvent_2() const { return ___m_CurrentEvent_2; }
	inline InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 ** get_address_of_m_CurrentEvent_2() { return &___m_CurrentEvent_2; }
	inline void set_m_CurrentEvent_2(InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * value)
	{
		___m_CurrentEvent_2 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_3() { return static_cast<int32_t>(offsetof(Enumerator_t29C1328DF03C4FA5E88DD759F187863F5AB238FB, ___m_CurrentIndex_3)); }
	inline int32_t get_m_CurrentIndex_3() const { return ___m_CurrentIndex_3; }
	inline int32_t* get_address_of_m_CurrentIndex_3() { return &___m_CurrentIndex_3; }
	inline void set_m_CurrentIndex_3(int32_t value)
	{
		___m_CurrentIndex_3 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
struct Enumerator_t4A90DEAAE5B627E6637C5C57A5BF2C1CDCD59DD2 
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateHistory UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator::m_History
	InputStateHistory_t3412A0F806C96DF0701F20F93D547F936B005177 * ___m_History_0;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_History_0() { return static_cast<int32_t>(offsetof(Enumerator_t4A90DEAAE5B627E6637C5C57A5BF2C1CDCD59DD2, ___m_History_0)); }
	inline InputStateHistory_t3412A0F806C96DF0701F20F93D547F936B005177 * get_m_History_0() const { return ___m_History_0; }
	inline InputStateHistory_t3412A0F806C96DF0701F20F93D547F936B005177 ** get_address_of_m_History_0() { return &___m_History_0; }
	inline void set_m_History_0(InputStateHistory_t3412A0F806C96DF0701F20F93D547F936B005177 * value)
	{
		___m_History_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_History_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_t4A90DEAAE5B627E6637C5C57A5BF2C1CDCD59DD2, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
struct Enumerator_t4A90DEAAE5B627E6637C5C57A5BF2C1CDCD59DD2_marshaled_pinvoke
{
	InputStateHistory_t3412A0F806C96DF0701F20F93D547F936B005177 * ___m_History_0;
	int32_t ___m_Index_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
struct Enumerator_t4A90DEAAE5B627E6637C5C57A5BF2C1CDCD59DD2_marshaled_com
{
	InputStateHistory_t3412A0F806C96DF0701F20F93D547F936B005177 * ___m_History_0;
	int32_t ___m_Index_1;
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


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337, ___dictionary_0)); }
	inline Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337, ___current_3)); }
	inline KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Net.Http.Headers.HttpHeaders/HeaderBucket>
struct Enumerator_tBD7CB3668A80F1807370248DB9812ECC721BF3DD 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t96671B7CC8F3C2EEB688C956C4404C1B39FFEADA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tEC74C488EC18D30FC93E41D8D975D2F1EC59B259  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tBD7CB3668A80F1807370248DB9812ECC721BF3DD, ___dictionary_0)); }
	inline Dictionary_2_t96671B7CC8F3C2EEB688C956C4404C1B39FFEADA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t96671B7CC8F3C2EEB688C956C4404C1B39FFEADA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t96671B7CC8F3C2EEB688C956C4404C1B39FFEADA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tBD7CB3668A80F1807370248DB9812ECC721BF3DD, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tBD7CB3668A80F1807370248DB9812ECC721BF3DD, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tBD7CB3668A80F1807370248DB9812ECC721BF3DD, ___current_3)); }
	inline KeyValuePair_2_tEC74C488EC18D30FC93E41D8D975D2F1EC59B259  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tEC74C488EC18D30FC93E41D8D975D2F1EC59B259 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tEC74C488EC18D30FC93E41D8D975D2F1EC59B259  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tBD7CB3668A80F1807370248DB9812ECC721BF3DD, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct InlinedArray_1_t0A189C71A0DF3487F6E38C5AE3E669AE0A33308F 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t0A189C71A0DF3487F6E38C5AE3E669AE0A33308F, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t0A189C71A0DF3487F6E38C5AE3E669AE0A33308F, ___firstValue_1)); }
	inline KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  get_firstValue_1() const { return ___firstValue_1; }
	inline KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  value)
	{
		___firstValue_1 = value;
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t0A189C71A0DF3487F6E38C5AE3E669AE0A33308F, ___additionalValues_2)); }
	inline KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48* get_additionalValues_2() const { return ___additionalValues_2; }
	inline KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct KeyValuePair_2_tA3C005C52D18C3B4D6279E219F035481F9899B9C 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Func_1_t7D1E35C20B74AA63237E9173FAC7D1BBCA6CC82E * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA3C005C52D18C3B4D6279E219F035481F9899B9C, ___key_0)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_key_0() const { return ___key_0; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA3C005C52D18C3B4D6279E219F035481F9899B9C, ___value_1)); }
	inline Func_1_t7D1E35C20B74AA63237E9173FAC7D1BBCA6CC82E * get_value_1() const { return ___value_1; }
	inline Func_1_t7D1E35C20B74AA63237E9173FAC7D1BBCA6CC82E ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Func_1_t7D1E35C20B74AA63237E9173FAC7D1BBCA6CC82E * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct KeyValuePair_2_t3C854CA059D9C120CB7F6AFCD980CDD0B5E297B6 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3C854CA059D9C120CB7F6AFCD980CDD0B5E297B6, ___key_0)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_key_0() const { return ___key_0; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3C854CA059D9C120CB7F6AFCD980CDD0B5E297B6, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct KeyValuePair_2_t855D4B0A1C67DCB875878EC5D4AC603B3391A591 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Type_t * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t855D4B0A1C67DCB875878EC5D4AC603B3391A591, ___key_0)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_key_0() const { return ___key_0; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t855D4B0A1C67DCB875878EC5D4AC603B3391A591, ___value_1)); }
	inline Type_t * get_value_1() const { return ___value_1; }
	inline Type_t ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Type_t * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.String[] Microsoft.MixedReality.Toolkit.BaseService::typeName
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___typeName_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_9;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_11;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_typeName_5() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___typeName_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_typeName_5() const { return ___typeName_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_typeName_5() { return &___typeName_5; }
	inline void set_typeName_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___typeName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_5), (void*)value);
	}

	inline static int32_t get_offset_of_isEnabled_9() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___isEnabled_9)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_9() const { return ___isEnabled_9; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_9() { return &___isEnabled_9; }
	inline void set_isEnabled_9(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_9 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_10() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___isMarkedDestroyed_10)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_10() const { return ___isMarkedDestroyed_10; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_10() { return &___isMarkedDestroyed_10; }
	inline void set_isMarkedDestroyed_10(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_10 = value;
	}

	inline static int32_t get_offset_of_disposed_11() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___disposed_11)); }
	inline bool get_disposed_11() const { return ___disposed_11; }
	inline bool* get_address_of_disposed_11() { return &___disposed_11; }
	inline void set_disposed_11(bool value)
	{
		___disposed_11 = value;
	}
};


// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale
struct ExperienceScale_t6F537A5F7A64FE98E10297E49FF555169E48AD2C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExperienceScale_t6F537A5F7A64FE98E10297E49FF555169E48AD2C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileAccess
struct FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC  : public RuntimeObject
{
public:
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* ___buckets_10;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_11;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_12;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_13;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::values
	RuntimeObject* ___values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_20;

public:
	inline static int32_t get_offset_of_buckets_10() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___buckets_10)); }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* get_buckets_10() const { return ___buckets_10; }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190** get_address_of_buckets_10() { return &___buckets_10; }
	inline void set_buckets_10(bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* value)
	{
		___buckets_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_10), (void*)value);
	}

	inline static int32_t get_offset_of_count_11() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___count_11)); }
	inline int32_t get_count_11() const { return ___count_11; }
	inline int32_t* get_address_of_count_11() { return &___count_11; }
	inline void set_count_11(int32_t value)
	{
		___count_11 = value;
	}

	inline static int32_t get_offset_of_occupancy_12() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___occupancy_12)); }
	inline int32_t get_occupancy_12() const { return ___occupancy_12; }
	inline int32_t* get_address_of_occupancy_12() { return &___occupancy_12; }
	inline void set_occupancy_12(int32_t value)
	{
		___occupancy_12 = value;
	}

	inline static int32_t get_offset_of_loadsize_13() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadsize_13)); }
	inline int32_t get_loadsize_13() const { return ___loadsize_13; }
	inline int32_t* get_address_of_loadsize_13() { return &___loadsize_13; }
	inline void set_loadsize_13(int32_t value)
	{
		___loadsize_13 = value;
	}

	inline static int32_t get_offset_of_loadFactor_14() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadFactor_14)); }
	inline float get_loadFactor_14() const { return ___loadFactor_14; }
	inline float* get_address_of_loadFactor_14() { return &___loadFactor_14; }
	inline void set_loadFactor_14(float value)
	{
		___loadFactor_14 = value;
	}

	inline static int32_t get_offset_of_version_15() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___version_15)); }
	inline int32_t get_version_15() const { return ___version_15; }
	inline int32_t* get_address_of_version_15() { return &___version_15; }
	inline void set_version_15(int32_t value)
	{
		___version_15 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_16() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___isWriterInProgress_16)); }
	inline bool get_isWriterInProgress_16() const { return ___isWriterInProgress_16; }
	inline bool* get_address_of_isWriterInProgress_16() { return &___isWriterInProgress_16; }
	inline void set_isWriterInProgress_16(bool value)
	{
		___isWriterInProgress_16 = value;
	}

	inline static int32_t get_offset_of_keys_17() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___keys_17)); }
	inline RuntimeObject* get_keys_17() const { return ___keys_17; }
	inline RuntimeObject** get_address_of_keys_17() { return &___keys_17; }
	inline void set_keys_17(RuntimeObject* value)
	{
		___keys_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_17), (void*)value);
	}

	inline static int32_t get_offset_of_values_18() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___values_18)); }
	inline RuntimeObject* get_values_18() const { return ___values_18; }
	inline RuntimeObject** get_address_of_values_18() { return &___values_18; }
	inline void set_values_18(RuntimeObject* value)
	{
		___values_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_18), (void*)value);
	}

	inline static int32_t get_offset_of__keycomparer_19() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____keycomparer_19)); }
	inline RuntimeObject* get__keycomparer_19() const { return ____keycomparer_19; }
	inline RuntimeObject** get_address_of__keycomparer_19() { return &____keycomparer_19; }
	inline void set__keycomparer_19(RuntimeObject* value)
	{
		____keycomparer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keycomparer_19), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_20() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____syncRoot_20)); }
	inline RuntimeObject * get__syncRoot_20() const { return ____syncRoot_20; }
	inline RuntimeObject ** get_address_of__syncRoot_20() { return &____syncRoot_20; }
	inline void set__syncRoot_20(RuntimeObject * value)
	{
		____syncRoot_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_20), (void*)value);
	}
};


// UnityEngine.InputSystem.LowLevel.IMECompositionString
struct IMECompositionString_tAF036B71E42938B0C10B115EC36B5A7893A98FE6 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Int32 UnityEngine.InputSystem.LowLevel.IMECompositionString::size
					int32_t ___size_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___size_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buffer_1_OffsetPadding[4];
					// UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer UnityEngine.InputSystem.LowLevel.IMECompositionString::buffer
					U3CbufferU3Ee__FixedBuffer_t365C7AE7EAED1A47BFBD58AF39CE82BE71A50318  ___buffer_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buffer_1_OffsetPadding_forAlignmentOnly[4];
					U3CbufferU3Ee__FixedBuffer_t365C7AE7EAED1A47BFBD58AF39CE82BE71A50318  ___buffer_1_forAlignmentOnly;
				};
			};
		};
		uint8_t IMECompositionString_tAF036B71E42938B0C10B115EC36B5A7893A98FE6__padding[132];
	};

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(IMECompositionString_tAF036B71E42938B0C10B115EC36B5A7893A98FE6, ___size_0)); }
	inline int32_t get_size_0() const { return ___size_0; }
	inline int32_t* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(int32_t value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(IMECompositionString_tAF036B71E42938B0C10B115EC36B5A7893A98FE6, ___buffer_1)); }
	inline U3CbufferU3Ee__FixedBuffer_t365C7AE7EAED1A47BFBD58AF39CE82BE71A50318  get_buffer_1() const { return ___buffer_1; }
	inline U3CbufferU3Ee__FixedBuffer_t365C7AE7EAED1A47BFBD58AF39CE82BE71A50318 * get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(U3CbufferU3Ee__FixedBuffer_t365C7AE7EAED1A47BFBD58AF39CE82BE71A50318  value)
	{
		___buffer_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString
struct IMECompositionString_tAF036B71E42938B0C10B115EC36B5A7893A98FE6_marshaled_pinvoke
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___size_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___size_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buffer_1_OffsetPadding[4];
					U3CbufferU3Ee__FixedBuffer_t365C7AE7EAED1A47BFBD58AF39CE82BE71A50318_marshaled_pinvoke ___buffer_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buffer_1_OffsetPadding_forAlignmentOnly[4];
					U3CbufferU3Ee__FixedBuffer_t365C7AE7EAED1A47BFBD58AF39CE82BE71A50318_marshaled_pinvoke ___buffer_1_forAlignmentOnly;
				};
			};
		};
		uint8_t IMECompositionString_tAF036B71E42938B0C10B115EC36B5A7893A98FE6__padding[132];
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString
struct IMECompositionString_tAF036B71E42938B0C10B115EC36B5A7893A98FE6_marshaled_com
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___size_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___size_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buffer_1_OffsetPadding[4];
					U3CbufferU3Ee__FixedBuffer_t365C7AE7EAED1A47BFBD58AF39CE82BE71A50318_marshaled_com ___buffer_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buffer_1_OffsetPadding_forAlignmentOnly[4];
					U3CbufferU3Ee__FixedBuffer_t365C7AE7EAED1A47BFBD58AF39CE82BE71A50318_marshaled_com ___buffer_1_forAlignmentOnly;
				};
			};
		};
		uint8_t IMECompositionString_tAF036B71E42938B0C10B115EC36B5A7893A98FE6__padding[132];
	};
};

// UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC 
{
public:
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[] UnityEngine.InputSystem.Layouts.InputDeviceMatcher::m_Patterns
	KeyValuePair_2U5BU5D_t5C04AE017D2E5ABB3B7D690F561546EFABE0DD7F* ___m_Patterns_0;

public:
	inline static int32_t get_offset_of_m_Patterns_0() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC, ___m_Patterns_0)); }
	inline KeyValuePair_2U5BU5D_t5C04AE017D2E5ABB3B7D690F561546EFABE0DD7F* get_m_Patterns_0() const { return ___m_Patterns_0; }
	inline KeyValuePair_2U5BU5D_t5C04AE017D2E5ABB3B7D690F561546EFABE0DD7F** get_address_of_m_Patterns_0() { return &___m_Patterns_0; }
	inline void set_m_Patterns_0(KeyValuePair_2U5BU5D_t5C04AE017D2E5ABB3B7D690F561546EFABE0DD7F* value)
	{
		___m_Patterns_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Patterns_0), (void*)value);
	}
};

struct InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kInterfaceKey
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___kInterfaceKey_1;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kDeviceClassKey
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___kDeviceClassKey_2;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kManufacturerKey
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___kManufacturerKey_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kProductKey
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___kProductKey_4;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kVersionKey
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___kVersionKey_5;

public:
	inline static int32_t get_offset_of_kInterfaceKey_1() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_StaticFields, ___kInterfaceKey_1)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_kInterfaceKey_1() const { return ___kInterfaceKey_1; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_kInterfaceKey_1() { return &___kInterfaceKey_1; }
	inline void set_kInterfaceKey_1(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___kInterfaceKey_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kInterfaceKey_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kInterfaceKey_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kDeviceClassKey_2() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_StaticFields, ___kDeviceClassKey_2)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_kDeviceClassKey_2() const { return ___kDeviceClassKey_2; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_kDeviceClassKey_2() { return &___kDeviceClassKey_2; }
	inline void set_kDeviceClassKey_2(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___kDeviceClassKey_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kDeviceClassKey_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kDeviceClassKey_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kManufacturerKey_3() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_StaticFields, ___kManufacturerKey_3)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_kManufacturerKey_3() const { return ___kManufacturerKey_3; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_kManufacturerKey_3() { return &___kManufacturerKey_3; }
	inline void set_kManufacturerKey_3(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___kManufacturerKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kManufacturerKey_3))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kManufacturerKey_3))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kProductKey_4() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_StaticFields, ___kProductKey_4)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_kProductKey_4() const { return ___kProductKey_4; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_kProductKey_4() { return &___kProductKey_4; }
	inline void set_kProductKey_4(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___kProductKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kProductKey_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kProductKey_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kVersionKey_5() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_StaticFields, ___kVersionKey_5)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_kVersionKey_5() const { return ___kVersionKey_5; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_kVersionKey_5() { return &___kVersionKey_5; }
	inline void set_kVersionKey_5(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___kVersionKey_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kVersionKey_5))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kVersionKey_5))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_marshaled_pinvoke
{
	KeyValuePair_2_tA4DF5ECAE9C383B045BDF7D84EA71747D26A2AD5 * ___m_Patterns_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_marshaled_com
{
	KeyValuePair_2_tA4DF5ECAE9C383B045BDF7D84EA71747D26A2AD5 * ___m_Patterns_0;
};

// Windows.Storage.Streams.InputStreamOptions
struct InputStreamOptions_t0C3A0185F954CB3B6508044E60E672B8DB75CA79 
{
public:
	// System.UInt32 Windows.Storage.Streams.InputStreamOptions::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputStreamOptions_t0C3A0185F954CB3B6508044E60E672B8DB75CA79, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_13)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Microsoft.MixedReality.OpenXR.Remoting.RemotingVideoCodec
struct RemotingVideoCodec_t9A01784AB8E3B1F557F9A1756C3D93CB24181CC1 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.RemotingVideoCodec::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RemotingVideoCodec_t9A01784AB8E3B1F557F9A1756C3D93CB24181CC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.X509Certificates.StoreLocation
struct StoreLocation_t6651125F57CF07C4C064CD12198BEA60A704B36F 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.StoreLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StoreLocation_t6651125F57CF07C4C064CD12198BEA60A704B36F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mono.Unity.X509ChainImplUnityTls
struct X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456  : public X509ChainImpl_tAA54C8F65F2922D9BAB911D37EFFCD7A95A92AEE
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainElementCollection Mono.Unity.X509ChainImplUnityTls::elements
	X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1 * ___elements_0;
	// Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.X509ChainImplUnityTls::nativeCertificateChain
	unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___nativeCertificateChain_1;
	// System.Security.Cryptography.X509Certificates.X509ChainPolicy Mono.Unity.X509ChainImplUnityTls::policy
	X509ChainPolicy_tA848C617FAE235C50D3937F79C76FF0713BFE88F * ___policy_2;
	// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509ChainStatus> Mono.Unity.X509ChainImplUnityTls::chainStatusList
	List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 * ___chainStatusList_3;

public:
	inline static int32_t get_offset_of_elements_0() { return static_cast<int32_t>(offsetof(X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456, ___elements_0)); }
	inline X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1 * get_elements_0() const { return ___elements_0; }
	inline X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1 ** get_address_of_elements_0() { return &___elements_0; }
	inline void set_elements_0(X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1 * value)
	{
		___elements_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elements_0), (void*)value);
	}

	inline static int32_t get_offset_of_nativeCertificateChain_1() { return static_cast<int32_t>(offsetof(X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456, ___nativeCertificateChain_1)); }
	inline unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  get_nativeCertificateChain_1() const { return ___nativeCertificateChain_1; }
	inline unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D * get_address_of_nativeCertificateChain_1() { return &___nativeCertificateChain_1; }
	inline void set_nativeCertificateChain_1(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  value)
	{
		___nativeCertificateChain_1 = value;
	}

	inline static int32_t get_offset_of_policy_2() { return static_cast<int32_t>(offsetof(X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456, ___policy_2)); }
	inline X509ChainPolicy_tA848C617FAE235C50D3937F79C76FF0713BFE88F * get_policy_2() const { return ___policy_2; }
	inline X509ChainPolicy_tA848C617FAE235C50D3937F79C76FF0713BFE88F ** get_address_of_policy_2() { return &___policy_2; }
	inline void set_policy_2(X509ChainPolicy_tA848C617FAE235C50D3937F79C76FF0713BFE88F * value)
	{
		___policy_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___policy_2), (void*)value);
	}

	inline static int32_t get_offset_of_chainStatusList_3() { return static_cast<int32_t>(offsetof(X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456, ___chainStatusList_3)); }
	inline List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 * get_chainStatusList_3() const { return ___chainStatusList_3; }
	inline List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 ** get_address_of_chainStatusList_3() { return &___chainStatusList_3; }
	inline void set_chainStatusList_3(List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 * value)
	{
		___chainStatusList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chainStatusList_3), (void*)value);
	}
};


// System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7
struct U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491  : public RuntimeObject
{
public:
	// System.Int32 System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Tuple`2<System.Int32,System.Int32> System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<>2__current
	Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 * ___U3CU3E2__current_1;
	// System.Int32 System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Diagnostics.Tracing.ActivityFilter System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<>4__this
	ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * ___U3CU3E4__this_3;
	// System.Guid System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::sourceGuid
	Guid_t  ___sourceGuid_4;
	// System.Guid System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<>3__sourceGuid
	Guid_t  ___U3CU3E3__sourceGuid_5;
	// System.Diagnostics.Tracing.ActivityFilter System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<af>5__1
	ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * ___U3CafU3E5__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CU3E2__current_1)); }
	inline Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CU3E4__this_3)); }
	inline ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_sourceGuid_4() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___sourceGuid_4)); }
	inline Guid_t  get_sourceGuid_4() const { return ___sourceGuid_4; }
	inline Guid_t * get_address_of_sourceGuid_4() { return &___sourceGuid_4; }
	inline void set_sourceGuid_4(Guid_t  value)
	{
		___sourceGuid_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__sourceGuid_5() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CU3E3__sourceGuid_5)); }
	inline Guid_t  get_U3CU3E3__sourceGuid_5() const { return ___U3CU3E3__sourceGuid_5; }
	inline Guid_t * get_address_of_U3CU3E3__sourceGuid_5() { return &___U3CU3E3__sourceGuid_5; }
	inline void set_U3CU3E3__sourceGuid_5(Guid_t  value)
	{
		___U3CU3E3__sourceGuid_5 = value;
	}

	inline static int32_t get_offset_of_U3CafU3E5__1_6() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CafU3E5__1_6)); }
	inline ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * get_U3CafU3E5__1_6() const { return ___U3CafU3E5__1_6; }
	inline ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 ** get_address_of_U3CafU3E5__1_6() { return &___U3CafU3E5__1_6; }
	inline void set_U3CafU3E5__1_6(ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * value)
	{
		___U3CafU3E5__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CafU3E5__1_6), (void*)value);
	}
};


// Mono.Net.CFNetwork/GetProxyData
struct GetProxyData_t822056EF522ED32E6FD4D36581FAAC8E03460E16  : public RuntimeObject
{
public:
	// System.IntPtr Mono.Net.CFNetwork/GetProxyData::script
	intptr_t ___script_0;
	// System.IntPtr Mono.Net.CFNetwork/GetProxyData::targetUri
	intptr_t ___targetUri_1;
	// System.IntPtr Mono.Net.CFNetwork/GetProxyData::error
	intptr_t ___error_2;
	// System.IntPtr Mono.Net.CFNetwork/GetProxyData::result
	intptr_t ___result_3;
	// System.Threading.ManualResetEvent Mono.Net.CFNetwork/GetProxyData::evt
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___evt_4;

public:
	inline static int32_t get_offset_of_script_0() { return static_cast<int32_t>(offsetof(GetProxyData_t822056EF522ED32E6FD4D36581FAAC8E03460E16, ___script_0)); }
	inline intptr_t get_script_0() const { return ___script_0; }
	inline intptr_t* get_address_of_script_0() { return &___script_0; }
	inline void set_script_0(intptr_t value)
	{
		___script_0 = value;
	}

	inline static int32_t get_offset_of_targetUri_1() { return static_cast<int32_t>(offsetof(GetProxyData_t822056EF522ED32E6FD4D36581FAAC8E03460E16, ___targetUri_1)); }
	inline intptr_t get_targetUri_1() const { return ___targetUri_1; }
	inline intptr_t* get_address_of_targetUri_1() { return &___targetUri_1; }
	inline void set_targetUri_1(intptr_t value)
	{
		___targetUri_1 = value;
	}

	inline static int32_t get_offset_of_error_2() { return static_cast<int32_t>(offsetof(GetProxyData_t822056EF522ED32E6FD4D36581FAAC8E03460E16, ___error_2)); }
	inline intptr_t get_error_2() const { return ___error_2; }
	inline intptr_t* get_address_of_error_2() { return &___error_2; }
	inline void set_error_2(intptr_t value)
	{
		___error_2 = value;
	}

	inline static int32_t get_offset_of_result_3() { return static_cast<int32_t>(offsetof(GetProxyData_t822056EF522ED32E6FD4D36581FAAC8E03460E16, ___result_3)); }
	inline intptr_t get_result_3() const { return ___result_3; }
	inline intptr_t* get_address_of_result_3() { return &___result_3; }
	inline void set_result_3(intptr_t value)
	{
		___result_3 = value;
	}

	inline static int32_t get_offset_of_evt_4() { return static_cast<int32_t>(offsetof(GetProxyData_t822056EF522ED32E6FD4D36581FAAC8E03460E16, ___evt_4)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_evt_4() const { return ___evt_4; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_evt_4() { return &___evt_4; }
	inline void set_evt_4(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___evt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___evt_4), (void*)value);
	}
};


// System.Diagnostics.Tracing.EventPayload/<GetEnumerator>d__17
struct U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD  : public RuntimeObject
{
public:
	// System.Int32 System.Diagnostics.Tracing.EventPayload/<GetEnumerator>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> System.Diagnostics.Tracing.EventPayload/<GetEnumerator>d__17::<>2__current
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  ___U3CU3E2__current_1;
	// System.Diagnostics.Tracing.EventPayload System.Diagnostics.Tracing.EventPayload/<GetEnumerator>d__17::<>4__this
	EventPayload_t43BB09A63B3B7D1DDA3D998D4167167A8443BEFA * ___U3CU3E4__this_2;
	// System.Int32 System.Diagnostics.Tracing.EventPayload/<GetEnumerator>d__17::<i>5__1
	int32_t ___U3CiU3E5__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD, ___U3CU3E4__this_2)); }
	inline EventPayload_t43BB09A63B3B7D1DDA3D998D4167167A8443BEFA * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline EventPayload_t43BB09A63B3B7D1DDA3D998D4167167A8443BEFA ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(EventPayload_t43BB09A63B3B7D1DDA3D998D4167167A8443BEFA * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD, ___U3CiU3E5__1_3)); }
	inline int32_t get_U3CiU3E5__1_3() const { return ___U3CiU3E5__1_3; }
	inline int32_t* get_address_of_U3CiU3E5__1_3() { return &___U3CiU3E5__1_3; }
	inline void set_U3CiU3E5__1_3(int32_t value)
	{
		___U3CiU3E5__1_3 = value;
	}
};


// System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode
struct WriteEventErrorCode_tBC26AED9CF2B3FB2A599E68EA076E136A9F92CEA 
{
public:
	// System.Int32 System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WriteEventErrorCode_tBC26AED9CF2B3FB2A599E68EA076E136A9F92CEA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.GazeHandHelper/<GetAllHandPositions>d__11
struct U3CGetAllHandPositionsU3Ed__11_t9393B0B3FDBED61FEB2E30EBB13D0ECACCF1CEB1  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.GazeHandHelper/<GetAllHandPositions>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.GazeHandHelper/<GetAllHandPositions>d__11::<>2__current
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.GazeHandHelper/<GetAllHandPositions>d__11::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.UI.GazeHandHelper Microsoft.MixedReality.Toolkit.UI.GazeHandHelper/<GetAllHandPositions>d__11::<>4__this
	GazeHandHelper_tB53537F53F428CC5FA1E0AED68DB0938279762D5 * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt32,System.Boolean> Microsoft.MixedReality.Toolkit.UI.GazeHandHelper/<GetAllHandPositions>d__11::<>7__wrap1
	Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6  ___U3CU3E7__wrap1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetAllHandPositionsU3Ed__11_t9393B0B3FDBED61FEB2E30EBB13D0ECACCF1CEB1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetAllHandPositionsU3Ed__11_t9393B0B3FDBED61FEB2E30EBB13D0ECACCF1CEB1, ___U3CU3E2__current_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetAllHandPositionsU3Ed__11_t9393B0B3FDBED61FEB2E30EBB13D0ECACCF1CEB1, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetAllHandPositionsU3Ed__11_t9393B0B3FDBED61FEB2E30EBB13D0ECACCF1CEB1, ___U3CU3E4__this_3)); }
	inline GazeHandHelper_tB53537F53F428CC5FA1E0AED68DB0938279762D5 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GazeHandHelper_tB53537F53F428CC5FA1E0AED68DB0938279762D5 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GazeHandHelper_tB53537F53F428CC5FA1E0AED68DB0938279762D5 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3CGetAllHandPositionsU3Ed__11_t9393B0B3FDBED61FEB2E30EBB13D0ECACCF1CEB1, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6 * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___dictionary_0), (void*)NULL);
	}
};


// UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__27
struct U3CGetEnumeratorU3Ed__27_tA5C6BBBE3DC17E76BE2F2C525775112CED54E715  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__27::<>2__current
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___U3CU3E2__current_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__27::<>4__this
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___U3CU3E4__this_2;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__27::<i>5__2
	int32_t ___U3CiU3E5__2_3;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__27::<actions>5__3
	ReadOnlyArray_1_tFE19A5B2EF7A9DC3991CAB55CDA293FF61BE7B86  ___U3CactionsU3E5__3_4;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__27::<actionCount>5__4
	int32_t ___U3CactionCountU3E5__4_5;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__27::<n>5__5
	int32_t ___U3CnU3E5__5_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__27_tA5C6BBBE3DC17E76BE2F2C525775112CED54E715, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__27_tA5C6BBBE3DC17E76BE2F2C525775112CED54E715, ___U3CU3E2__current_1)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__27_tA5C6BBBE3DC17E76BE2F2C525775112CED54E715, ___U3CU3E4__this_2)); }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__27_tA5C6BBBE3DC17E76BE2F2C525775112CED54E715, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CactionsU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__27_tA5C6BBBE3DC17E76BE2F2C525775112CED54E715, ___U3CactionsU3E5__3_4)); }
	inline ReadOnlyArray_1_tFE19A5B2EF7A9DC3991CAB55CDA293FF61BE7B86  get_U3CactionsU3E5__3_4() const { return ___U3CactionsU3E5__3_4; }
	inline ReadOnlyArray_1_tFE19A5B2EF7A9DC3991CAB55CDA293FF61BE7B86 * get_address_of_U3CactionsU3E5__3_4() { return &___U3CactionsU3E5__3_4; }
	inline void set_U3CactionsU3E5__3_4(ReadOnlyArray_1_tFE19A5B2EF7A9DC3991CAB55CDA293FF61BE7B86  value)
	{
		___U3CactionsU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CactionsU3E5__3_4))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CactionCountU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__27_tA5C6BBBE3DC17E76BE2F2C525775112CED54E715, ___U3CactionCountU3E5__4_5)); }
	inline int32_t get_U3CactionCountU3E5__4_5() const { return ___U3CactionCountU3E5__4_5; }
	inline int32_t* get_address_of_U3CactionCountU3E5__4_5() { return &___U3CactionCountU3E5__4_5; }
	inline void set_U3CactionCountU3E5__4_5(int32_t value)
	{
		___U3CactionCountU3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3CnU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__27_tA5C6BBBE3DC17E76BE2F2C525775112CED54E715, ___U3CnU3E5__5_6)); }
	inline int32_t get_U3CnU3E5__5_6() const { return ___U3CnU3E5__5_6; }
	inline int32_t* get_address_of_U3CnU3E5__5_6() { return &___U3CnU3E5__5_6; }
	inline void set_U3CnU3E5__5_6(int32_t value)
	{
		___U3CnU3E5__5_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59
struct U3CGetAllAnimationCurvesU3Ed__59_tBD3886F266FDA8CBAAC3339DBA3B43D6CE35DAFB  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::<>2__current
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::<>4__this
	InputAnimation_tD3776C818F1AEA5242238C6A141C4A80B3F35EF3 * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves> Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::<>7__wrap1
	Enumerator_tF83102F879198A368909B481DFCE07BEB2156FC3  ___U3CU3E7__wrap1_4;
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::<curves>5__3
	PoseCurves_tFDE6C196723D02CFC8ECD4103710E043AB2D6C37 * ___U3CcurvesU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetAllAnimationCurvesU3Ed__59_tBD3886F266FDA8CBAAC3339DBA3B43D6CE35DAFB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetAllAnimationCurvesU3Ed__59_tBD3886F266FDA8CBAAC3339DBA3B43D6CE35DAFB, ___U3CU3E2__current_1)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetAllAnimationCurvesU3Ed__59_tBD3886F266FDA8CBAAC3339DBA3B43D6CE35DAFB, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetAllAnimationCurvesU3Ed__59_tBD3886F266FDA8CBAAC3339DBA3B43D6CE35DAFB, ___U3CU3E4__this_3)); }
	inline InputAnimation_tD3776C818F1AEA5242238C6A141C4A80B3F35EF3 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline InputAnimation_tD3776C818F1AEA5242238C6A141C4A80B3F35EF3 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(InputAnimation_tD3776C818F1AEA5242238C6A141C4A80B3F35EF3 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3CGetAllAnimationCurvesU3Ed__59_tBD3886F266FDA8CBAAC3339DBA3B43D6CE35DAFB, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_tF83102F879198A368909B481DFCE07BEB2156FC3  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_tF83102F879198A368909B481DFCE07BEB2156FC3 * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_tF83102F879198A368909B481DFCE07BEB2156FC3  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___currentValue_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CcurvesU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetAllAnimationCurvesU3Ed__59_tBD3886F266FDA8CBAAC3339DBA3B43D6CE35DAFB, ___U3CcurvesU3E5__3_5)); }
	inline PoseCurves_tFDE6C196723D02CFC8ECD4103710E043AB2D6C37 * get_U3CcurvesU3E5__3_5() const { return ___U3CcurvesU3E5__3_5; }
	inline PoseCurves_tFDE6C196723D02CFC8ECD4103710E043AB2D6C37 ** get_address_of_U3CcurvesU3E5__3_5() { return &___U3CcurvesU3E5__3_5; }
	inline void set_U3CcurvesU3E5__3_5(PoseCurves_tFDE6C196723D02CFC8ECD4103710E043AB2D6C37 * value)
	{
		___U3CcurvesU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurvesU3E5__3_5), (void*)value);
	}
};


// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_t96BD9B15406A59FB60DE4A1F11DF96FB70426BF5 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t96BD9B15406A59FB60DE4A1F11DF96FB70426BF5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator
struct Enumerator_t310442BCF6CF12ADBE1B000FD18F259531EC5861  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.LowLevel.InputEventTrace UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator::m_Trace
	InputEventTrace_t905233FE94AEA5F3A748CF627D1766D827D593A9 * ___m_Trace_0;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator::m_ChangeCounter
	int32_t ___m_ChangeCounter_1;
	// UnityEngine.InputSystem.LowLevel.InputEventPtr UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator::m_Current
	InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  ___m_Current_2;

public:
	inline static int32_t get_offset_of_m_Trace_0() { return static_cast<int32_t>(offsetof(Enumerator_t310442BCF6CF12ADBE1B000FD18F259531EC5861, ___m_Trace_0)); }
	inline InputEventTrace_t905233FE94AEA5F3A748CF627D1766D827D593A9 * get_m_Trace_0() const { return ___m_Trace_0; }
	inline InputEventTrace_t905233FE94AEA5F3A748CF627D1766D827D593A9 ** get_address_of_m_Trace_0() { return &___m_Trace_0; }
	inline void set_m_Trace_0(InputEventTrace_t905233FE94AEA5F3A748CF627D1766D827D593A9 * value)
	{
		___m_Trace_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trace_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChangeCounter_1() { return static_cast<int32_t>(offsetof(Enumerator_t310442BCF6CF12ADBE1B000FD18F259531EC5861, ___m_ChangeCounter_1)); }
	inline int32_t get_m_ChangeCounter_1() const { return ___m_ChangeCounter_1; }
	inline int32_t* get_address_of_m_ChangeCounter_1() { return &___m_ChangeCounter_1; }
	inline void set_m_ChangeCounter_1(int32_t value)
	{
		___m_ChangeCounter_1 = value;
	}

	inline static int32_t get_offset_of_m_Current_2() { return static_cast<int32_t>(offsetof(Enumerator_t310442BCF6CF12ADBE1B000FD18F259531EC5861, ___m_Current_2)); }
	inline InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  get_m_Current_2() const { return ___m_Current_2; }
	inline InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D * get_address_of_m_Current_2() { return &___m_Current_2; }
	inline void set_m_Current_2(InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  value)
	{
		___m_Current_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138
struct U3CGetScenesU3Ed__138_t676C355C17BAA41F1D25C8423BD8AA38CB9B2B86  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.SceneManagement.Scene Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>2__current
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::sceneNames
	RuntimeObject* ___sceneNames_3;
	// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>3__sceneNames
	RuntimeObject* ___U3CU3E3__sceneNames_4;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>4__this
	MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B * ___U3CU3E4__this_5;
	// System.Collections.Generic.IEnumerator`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_t676C355C17BAA41F1D25C8423BD8AA38CB9B2B86, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_t676C355C17BAA41F1D25C8423BD8AA38CB9B2B86, ___U3CU3E2__current_1)); }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_t676C355C17BAA41F1D25C8423BD8AA38CB9B2B86, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_sceneNames_3() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_t676C355C17BAA41F1D25C8423BD8AA38CB9B2B86, ___sceneNames_3)); }
	inline RuntimeObject* get_sceneNames_3() const { return ___sceneNames_3; }
	inline RuntimeObject** get_address_of_sceneNames_3() { return &___sceneNames_3; }
	inline void set_sceneNames_3(RuntimeObject* value)
	{
		___sceneNames_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneNames_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__sceneNames_4() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_t676C355C17BAA41F1D25C8423BD8AA38CB9B2B86, ___U3CU3E3__sceneNames_4)); }
	inline RuntimeObject* get_U3CU3E3__sceneNames_4() const { return ___U3CU3E3__sceneNames_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__sceneNames_4() { return &___U3CU3E3__sceneNames_4; }
	inline void set_U3CU3E3__sceneNames_4(RuntimeObject* value)
	{
		___U3CU3E3__sceneNames_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__sceneNames_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_t676C355C17BAA41F1D25C8423BD8AA38CB9B2B86, ___U3CU3E4__this_5)); }
	inline MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_6() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_t676C355C17BAA41F1D25C8423BD8AA38CB9B2B86, ___U3CU3E7__wrap1_6)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_6() const { return ___U3CU3E7__wrap1_6; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_6() { return &___U3CU3E7__wrap1_6; }
	inline void set_U3CU3E7__wrap1_6(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29
struct U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<>4__this
	MoveToTarget_tD7A73DD90660B4FFD1A50DBCF8092DED6882D2C6 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<origin>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CoriginU3E5__2_3;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<t>5__3
	float ___U3CtU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425, ___U3CU3E4__this_2)); }
	inline MoveToTarget_tD7A73DD90660B4FFD1A50DBCF8092DED6882D2C6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MoveToTarget_tD7A73DD90660B4FFD1A50DBCF8092DED6882D2C6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MoveToTarget_tD7A73DD90660B4FFD1A50DBCF8092DED6882D2C6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoriginU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425, ___U3CoriginU3E5__2_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CoriginU3E5__2_3() const { return ___U3CoriginU3E5__2_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CoriginU3E5__2_3() { return &___U3CoriginU3E5__2_3; }
	inline void set_U3CoriginU3E5__2_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CoriginU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CtU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425, ___U3CtU3E5__3_4)); }
	inline float get_U3CtU3E5__3_4() const { return ___U3CtU3E5__3_4; }
	inline float* get_address_of_U3CtU3E5__3_4() { return &___U3CtU3E5__3_4; }
	inline void set_U3CtU3E5__3_4(float value)
	{
		___U3CtU3E5__3_4 = value;
	}
};


// System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization
struct StreamReadOperationOptimization_tD9F9D4F3EE59F08ED342058819D3955F855271E2 
{
public:
	// System.Int32 System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamReadOperationOptimization_tD9F9D4F3EE59F08ED342058819D3955F855271E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7
struct U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>7__wrap1
	Enumerator_tAB7E68F0BB8C5EF7B2BE6E3A25413F6058E5FC55  ___U3CU3E7__wrap1_3;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>7__wrap2
	IMixedRealityPointerU5BU5D_tBA705C167A9AA88747F0E71091D027919388F80C* ___U3CU3E7__wrap2_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>7__wrap3
	int32_t ___U3CU3E7__wrap3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030, ___U3CU3E2__current_1)); }
	inline RuntimeObject* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030, ___U3CU3E7__wrap1_3)); }
	inline Enumerator_tAB7E68F0BB8C5EF7B2BE6E3A25413F6058E5FC55  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline Enumerator_tAB7E68F0BB8C5EF7B2BE6E3A25413F6058E5FC55 * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(Enumerator_tAB7E68F0BB8C5EF7B2BE6E3A25413F6058E5FC55  value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->____set_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->____current_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_4() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030, ___U3CU3E7__wrap2_4)); }
	inline IMixedRealityPointerU5BU5D_tBA705C167A9AA88747F0E71091D027919388F80C* get_U3CU3E7__wrap2_4() const { return ___U3CU3E7__wrap2_4; }
	inline IMixedRealityPointerU5BU5D_tBA705C167A9AA88747F0E71091D027919388F80C** get_address_of_U3CU3E7__wrap2_4() { return &___U3CU3E7__wrap2_4; }
	inline void set_U3CU3E7__wrap2_4(IMixedRealityPointerU5BU5D_tBA705C167A9AA88747F0E71091D027919388F80C* value)
	{
		___U3CU3E7__wrap2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_5() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030, ___U3CU3E7__wrap3_5)); }
	inline int32_t get_U3CU3E7__wrap3_5() const { return ___U3CU3E7__wrap3_5; }
	inline int32_t* get_address_of_U3CU3E7__wrap3_5() { return &___U3CU3E7__wrap3_5; }
	inline void set_U3CU3E7__wrap3_5(int32_t value)
	{
		___U3CU3E7__wrap3_5 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags
struct Flags_tBAEC42444F14751378E9D7B2009867CBBBEF3FE9 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tBAEC42444F14751378E9D7B2009867CBBBEF3FE9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputControlScheme/MatchResult/Result
struct Result_t9CDAE19A7978D0A18DD62E336DF0CEBFAEB44FF8 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlScheme/MatchResult/Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t9CDAE19A7978D0A18DD62E336DF0CEBFAEB44FF8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_tEC3109DD7330EBFBD10659E4D839217213171929  : public BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tEC3109DD7330EBFBD10659E4D839217213171929, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tEC3109DD7330EBFBD10659E4D839217213171929, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct Enumerator_t05C8B5D88B954D1C6291A2B3C8658C92B714758C 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tA3C005C52D18C3B4D6279E219F035481F9899B9C  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t05C8B5D88B954D1C6291A2B3C8658C92B714758C, ___dictionary_0)); }
	inline Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t05C8B5D88B954D1C6291A2B3C8658C92B714758C, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t05C8B5D88B954D1C6291A2B3C8658C92B714758C, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t05C8B5D88B954D1C6291A2B3C8658C92B714758C, ___current_3)); }
	inline KeyValuePair_2_tA3C005C52D18C3B4D6279E219F035481F9899B9C  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tA3C005C52D18C3B4D6279E219F035481F9899B9C * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tA3C005C52D18C3B4D6279E219F035481F9899B9C  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t05C8B5D88B954D1C6291A2B3C8658C92B714758C, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Enumerator_t0CFDCC96DB1D93EFCC52A373B2C5BA2CA8DA4170 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t3C854CA059D9C120CB7F6AFCD980CDD0B5E297B6  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t0CFDCC96DB1D93EFCC52A373B2C5BA2CA8DA4170, ___dictionary_0)); }
	inline Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t0CFDCC96DB1D93EFCC52A373B2C5BA2CA8DA4170, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t0CFDCC96DB1D93EFCC52A373B2C5BA2CA8DA4170, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t0CFDCC96DB1D93EFCC52A373B2C5BA2CA8DA4170, ___current_3)); }
	inline KeyValuePair_2_t3C854CA059D9C120CB7F6AFCD980CDD0B5E297B6  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t3C854CA059D9C120CB7F6AFCD980CDD0B5E297B6 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t3C854CA059D9C120CB7F6AFCD980CDD0B5E297B6  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t0CFDCC96DB1D93EFCC52A373B2C5BA2CA8DA4170, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Enumerator_t9291EEDF5E23BC170A30540F18C5FD56168057B5 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t855D4B0A1C67DCB875878EC5D4AC603B3391A591  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t9291EEDF5E23BC170A30540F18C5FD56168057B5, ___dictionary_0)); }
	inline Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t9291EEDF5E23BC170A30540F18C5FD56168057B5, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t9291EEDF5E23BC170A30540F18C5FD56168057B5, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9291EEDF5E23BC170A30540F18C5FD56168057B5, ___current_3)); }
	inline KeyValuePair_2_t855D4B0A1C67DCB875878EC5D4AC603B3391A591  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t855D4B0A1C67DCB875878EC5D4AC603B3391A591 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t855D4B0A1C67DCB875878EC5D4AC603B3391A591  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t9291EEDF5E23BC170A30540F18C5FD56168057B5, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4  : public BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_13;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_14;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_tA13D401EC270D24A0D7662CA0E55BD0EF020D215 * ___postponedActions_15;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_t8473DB386AC0B94DD5FF2E16A7570939FC4C15F9 * ___postponedObjectActions_16;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_tEB7DD469D67D40F77F686DD4BC38E8ED993B35A9 * ___U3CEventHandlersByTypeU3Ek__BackingField_17;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___U3CEventListenersU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_13() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4, ___eventExecutionDepth_13)); }
	inline int32_t get_eventExecutionDepth_13() const { return ___eventExecutionDepth_13; }
	inline int32_t* get_address_of_eventExecutionDepth_13() { return &___eventExecutionDepth_13; }
	inline void set_eventExecutionDepth_13(int32_t value)
	{
		___eventExecutionDepth_13 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_14() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4, ___eventSystemHandlerType_14)); }
	inline Type_t * get_eventSystemHandlerType_14() const { return ___eventSystemHandlerType_14; }
	inline Type_t ** get_address_of_eventSystemHandlerType_14() { return &___eventSystemHandlerType_14; }
	inline void set_eventSystemHandlerType_14(Type_t * value)
	{
		___eventSystemHandlerType_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_14), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_15() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4, ___postponedActions_15)); }
	inline List_1_tA13D401EC270D24A0D7662CA0E55BD0EF020D215 * get_postponedActions_15() const { return ___postponedActions_15; }
	inline List_1_tA13D401EC270D24A0D7662CA0E55BD0EF020D215 ** get_address_of_postponedActions_15() { return &___postponedActions_15; }
	inline void set_postponedActions_15(List_1_tA13D401EC270D24A0D7662CA0E55BD0EF020D215 * value)
	{
		___postponedActions_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_15), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_16() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4, ___postponedObjectActions_16)); }
	inline List_1_t8473DB386AC0B94DD5FF2E16A7570939FC4C15F9 * get_postponedObjectActions_16() const { return ___postponedObjectActions_16; }
	inline List_1_t8473DB386AC0B94DD5FF2E16A7570939FC4C15F9 ** get_address_of_postponedObjectActions_16() { return &___postponedObjectActions_16; }
	inline void set_postponedObjectActions_16(List_1_t8473DB386AC0B94DD5FF2E16A7570939FC4C15F9 * value)
	{
		___postponedObjectActions_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4, ___U3CEventHandlersByTypeU3Ek__BackingField_17)); }
	inline Dictionary_2_tEB7DD469D67D40F77F686DD4BC38E8ED993B35A9 * get_U3CEventHandlersByTypeU3Ek__BackingField_17() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_17; }
	inline Dictionary_2_tEB7DD469D67D40F77F686DD4BC38E8ED993B35A9 ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_17() { return &___U3CEventHandlersByTypeU3Ek__BackingField_17; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_17(Dictionary_2_tEB7DD469D67D40F77F686DD4BC38E8ED993B35A9 * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4, ___U3CEventListenersU3Ek__BackingField_18)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_U3CEventListenersU3Ek__BackingField_18() const { return ___U3CEventListenersU3Ek__BackingField_18; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_U3CEventListenersU3Ek__BackingField_18() { return &___U3CEventListenersU3Ek__BackingField_18; }
	inline void set_U3CEventListenersU3Ek__BackingField_18(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___U3CEventListenersU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_18), (void*)value);
	}
};

struct BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TraverseEventSystemHandlerHierarchyPerfMarker_19;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4_StaticFields, ___enableDanglingHandlerDiagnostics_12)); }
	inline bool get_enableDanglingHandlerDiagnostics_12() const { return ___enableDanglingHandlerDiagnostics_12; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_12() { return &___enableDanglingHandlerDiagnostics_12; }
	inline void set_enableDanglingHandlerDiagnostics_12(bool value)
	{
		___enableDanglingHandlerDiagnostics_12 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_19() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TraverseEventSystemHandlerHierarchyPerfMarker_19() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_19() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_19; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_19 = value;
	}
};


// System.Diagnostics.Tracing.EventProvider
struct EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589  : public RuntimeObject
{
public:
	// Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback System.Diagnostics.Tracing.EventProvider::m_etwCallback
	EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA * ___m_etwCallback_1;
	// System.Runtime.InteropServices.GCHandle System.Diagnostics.Tracing.EventProvider::m_thisGCHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___m_thisGCHandle_2;
	// System.Int64 System.Diagnostics.Tracing.EventProvider::m_regHandle
	int64_t ___m_regHandle_3;
	// System.Byte System.Diagnostics.Tracing.EventProvider::m_level
	uint8_t ___m_level_4;
	// System.Int64 System.Diagnostics.Tracing.EventProvider::m_anyKeywordMask
	int64_t ___m_anyKeywordMask_5;
	// System.Int64 System.Diagnostics.Tracing.EventProvider::m_allKeywordMask
	int64_t ___m_allKeywordMask_6;
	// System.Collections.Generic.List`1<System.Diagnostics.Tracing.EventProvider/SessionInfo> System.Diagnostics.Tracing.EventProvider::m_liveSessions
	List_1_t53BBC0AA893BF75B4925CA24EBF5975C942A4D17 * ___m_liveSessions_7;
	// System.Boolean System.Diagnostics.Tracing.EventProvider::m_enabled
	bool ___m_enabled_8;
	// System.Guid System.Diagnostics.Tracing.EventProvider::m_providerId
	Guid_t  ___m_providerId_9;
	// System.Boolean System.Diagnostics.Tracing.EventProvider::m_disposed
	bool ___m_disposed_10;

public:
	inline static int32_t get_offset_of_m_etwCallback_1() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_etwCallback_1)); }
	inline EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA * get_m_etwCallback_1() const { return ___m_etwCallback_1; }
	inline EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA ** get_address_of_m_etwCallback_1() { return &___m_etwCallback_1; }
	inline void set_m_etwCallback_1(EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA * value)
	{
		___m_etwCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_etwCallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_thisGCHandle_2() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_thisGCHandle_2)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_m_thisGCHandle_2() const { return ___m_thisGCHandle_2; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_m_thisGCHandle_2() { return &___m_thisGCHandle_2; }
	inline void set_m_thisGCHandle_2(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___m_thisGCHandle_2 = value;
	}

	inline static int32_t get_offset_of_m_regHandle_3() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_regHandle_3)); }
	inline int64_t get_m_regHandle_3() const { return ___m_regHandle_3; }
	inline int64_t* get_address_of_m_regHandle_3() { return &___m_regHandle_3; }
	inline void set_m_regHandle_3(int64_t value)
	{
		___m_regHandle_3 = value;
	}

	inline static int32_t get_offset_of_m_level_4() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_level_4)); }
	inline uint8_t get_m_level_4() const { return ___m_level_4; }
	inline uint8_t* get_address_of_m_level_4() { return &___m_level_4; }
	inline void set_m_level_4(uint8_t value)
	{
		___m_level_4 = value;
	}

	inline static int32_t get_offset_of_m_anyKeywordMask_5() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_anyKeywordMask_5)); }
	inline int64_t get_m_anyKeywordMask_5() const { return ___m_anyKeywordMask_5; }
	inline int64_t* get_address_of_m_anyKeywordMask_5() { return &___m_anyKeywordMask_5; }
	inline void set_m_anyKeywordMask_5(int64_t value)
	{
		___m_anyKeywordMask_5 = value;
	}

	inline static int32_t get_offset_of_m_allKeywordMask_6() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_allKeywordMask_6)); }
	inline int64_t get_m_allKeywordMask_6() const { return ___m_allKeywordMask_6; }
	inline int64_t* get_address_of_m_allKeywordMask_6() { return &___m_allKeywordMask_6; }
	inline void set_m_allKeywordMask_6(int64_t value)
	{
		___m_allKeywordMask_6 = value;
	}

	inline static int32_t get_offset_of_m_liveSessions_7() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_liveSessions_7)); }
	inline List_1_t53BBC0AA893BF75B4925CA24EBF5975C942A4D17 * get_m_liveSessions_7() const { return ___m_liveSessions_7; }
	inline List_1_t53BBC0AA893BF75B4925CA24EBF5975C942A4D17 ** get_address_of_m_liveSessions_7() { return &___m_liveSessions_7; }
	inline void set_m_liveSessions_7(List_1_t53BBC0AA893BF75B4925CA24EBF5975C942A4D17 * value)
	{
		___m_liveSessions_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_liveSessions_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_enabled_8() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_enabled_8)); }
	inline bool get_m_enabled_8() const { return ___m_enabled_8; }
	inline bool* get_address_of_m_enabled_8() { return &___m_enabled_8; }
	inline void set_m_enabled_8(bool value)
	{
		___m_enabled_8 = value;
	}

	inline static int32_t get_offset_of_m_providerId_9() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_providerId_9)); }
	inline Guid_t  get_m_providerId_9() const { return ___m_providerId_9; }
	inline Guid_t * get_address_of_m_providerId_9() { return &___m_providerId_9; }
	inline void set_m_providerId_9(Guid_t  value)
	{
		___m_providerId_9 = value;
	}

	inline static int32_t get_offset_of_m_disposed_10() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_disposed_10)); }
	inline bool get_m_disposed_10() const { return ___m_disposed_10; }
	inline bool* get_address_of_m_disposed_10() { return &___m_disposed_10; }
	inline void set_m_disposed_10(bool value)
	{
		___m_disposed_10 = value;
	}
};

struct EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589_StaticFields
{
public:
	// System.Boolean System.Diagnostics.Tracing.EventProvider::m_setInformationMissing
	bool ___m_setInformationMissing_0;
	// System.Int32[] System.Diagnostics.Tracing.EventProvider::nibblebits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___nibblebits_12;

public:
	inline static int32_t get_offset_of_m_setInformationMissing_0() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589_StaticFields, ___m_setInformationMissing_0)); }
	inline bool get_m_setInformationMissing_0() const { return ___m_setInformationMissing_0; }
	inline bool* get_address_of_m_setInformationMissing_0() { return &___m_setInformationMissing_0; }
	inline void set_m_setInformationMissing_0(bool value)
	{
		___m_setInformationMissing_0 = value;
	}

	inline static int32_t get_offset_of_nibblebits_12() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589_StaticFields, ___nibblebits_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_nibblebits_12() const { return ___nibblebits_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_nibblebits_12() { return &___nibblebits_12; }
	inline void set_nibblebits_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___nibblebits_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nibblebits_12), (void*)value);
	}
};

struct EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589_ThreadStaticFields
{
public:
	// System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode System.Diagnostics.Tracing.EventProvider::s_returnCode
	int32_t ___s_returnCode_11;

public:
	inline static int32_t get_offset_of_s_returnCode_11() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589_ThreadStaticFields, ___s_returnCode_11)); }
	inline int32_t get_s_returnCode_11() const { return ___s_returnCode_11; }
	inline int32_t* get_address_of_s_returnCode_11() { return &___s_returnCode_11; }
	inline void set_s_returnCode_11(int32_t value)
	{
		___s_returnCode_11 = value;
	}
};

// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) = 0;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD 
{
public:
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// System.IO.NetFxToWinRtStreamAdapter
struct NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::_managedStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____managedStream_0;
	// System.Boolean System.IO.NetFxToWinRtStreamAdapter::_leaveUnderlyingStreamOpen
	bool ____leaveUnderlyingStreamOpen_1;
	// System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization System.IO.NetFxToWinRtStreamAdapter::_readOptimization
	int32_t ____readOptimization_2;

public:
	inline static int32_t get_offset_of__managedStream_0() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD, ____managedStream_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__managedStream_0() const { return ____managedStream_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__managedStream_0() { return &____managedStream_0; }
	inline void set__managedStream_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____managedStream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____managedStream_0), (void*)value);
	}

	inline static int32_t get_offset_of__leaveUnderlyingStreamOpen_1() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD, ____leaveUnderlyingStreamOpen_1)); }
	inline bool get__leaveUnderlyingStreamOpen_1() const { return ____leaveUnderlyingStreamOpen_1; }
	inline bool* get_address_of__leaveUnderlyingStreamOpen_1() { return &____leaveUnderlyingStreamOpen_1; }
	inline void set__leaveUnderlyingStreamOpen_1(bool value)
	{
		____leaveUnderlyingStreamOpen_1 = value;
	}

	inline static int32_t get_offset_of__readOptimization_2() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD, ____readOptimization_2)); }
	inline int32_t get__readOptimization_2() const { return ____readOptimization_2; }
	inline int32_t* get_address_of__readOptimization_2() { return &____readOptimization_2; }
	inline void set__readOptimization_2(int32_t value)
	{
		____readOptimization_2 = value;
	}
};


// Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration
struct RemotingConfiguration_t9E4F4925695DF6E6FC5870C64571A4FB0F03DC82 
{
public:
	// System.String Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration::RemoteHostName
	String_t* ___RemoteHostName_0;
	// System.UInt16 Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration::RemotePort
	uint16_t ___RemotePort_1;
	// System.UInt32 Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration::MaxBitrateKbps
	uint32_t ___MaxBitrateKbps_2;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingVideoCodec Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration::VideoCodec
	int32_t ___VideoCodec_3;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration::EnableAudio
	bool ___EnableAudio_4;

public:
	inline static int32_t get_offset_of_RemoteHostName_0() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t9E4F4925695DF6E6FC5870C64571A4FB0F03DC82, ___RemoteHostName_0)); }
	inline String_t* get_RemoteHostName_0() const { return ___RemoteHostName_0; }
	inline String_t** get_address_of_RemoteHostName_0() { return &___RemoteHostName_0; }
	inline void set_RemoteHostName_0(String_t* value)
	{
		___RemoteHostName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemoteHostName_0), (void*)value);
	}

	inline static int32_t get_offset_of_RemotePort_1() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t9E4F4925695DF6E6FC5870C64571A4FB0F03DC82, ___RemotePort_1)); }
	inline uint16_t get_RemotePort_1() const { return ___RemotePort_1; }
	inline uint16_t* get_address_of_RemotePort_1() { return &___RemotePort_1; }
	inline void set_RemotePort_1(uint16_t value)
	{
		___RemotePort_1 = value;
	}

	inline static int32_t get_offset_of_MaxBitrateKbps_2() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t9E4F4925695DF6E6FC5870C64571A4FB0F03DC82, ___MaxBitrateKbps_2)); }
	inline uint32_t get_MaxBitrateKbps_2() const { return ___MaxBitrateKbps_2; }
	inline uint32_t* get_address_of_MaxBitrateKbps_2() { return &___MaxBitrateKbps_2; }
	inline void set_MaxBitrateKbps_2(uint32_t value)
	{
		___MaxBitrateKbps_2 = value;
	}

	inline static int32_t get_offset_of_VideoCodec_3() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t9E4F4925695DF6E6FC5870C64571A4FB0F03DC82, ___VideoCodec_3)); }
	inline int32_t get_VideoCodec_3() const { return ___VideoCodec_3; }
	inline int32_t* get_address_of_VideoCodec_3() { return &___VideoCodec_3; }
	inline void set_VideoCodec_3(int32_t value)
	{
		___VideoCodec_3 = value;
	}

	inline static int32_t get_offset_of_EnableAudio_4() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t9E4F4925695DF6E6FC5870C64571A4FB0F03DC82, ___EnableAudio_4)); }
	inline bool get_EnableAudio_4() const { return ___EnableAudio_4; }
	inline bool* get_address_of_EnableAudio_4() { return &___EnableAudio_4; }
	inline void set_EnableAudio_4(bool value)
	{
		___EnableAudio_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration
#pragma pack(push, tp, 8)
struct RemotingConfiguration_t9E4F4925695DF6E6FC5870C64571A4FB0F03DC82_marshaled_pinvoke
{
	char* ___RemoteHostName_0;
	uint16_t ___RemotePort_1;
	uint32_t ___MaxBitrateKbps_2;
	int32_t ___VideoCodec_3;
	int32_t ___EnableAudio_4;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration
#pragma pack(push, tp, 8)
struct RemotingConfiguration_t9E4F4925695DF6E6FC5870C64571A4FB0F03DC82_marshaled_com
{
	Il2CppChar* ___RemoteHostName_0;
	uint16_t ___RemotePort_1;
	uint32_t ___MaxBitrateKbps_2;
	int32_t ___VideoCodec_3;
	int32_t ___EnableAudio_4;
};
#pragma pack(pop, tp)

// Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration
struct RemotingListenConfiguration_t8BF869B703CDF957D2A45D3A352747C9BB6F91F8 
{
public:
	// System.String Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::ListenInterface
	String_t* ___ListenInterface_0;
	// System.UInt16 Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::HandshakeListenPort
	uint16_t ___HandshakeListenPort_1;
	// System.UInt16 Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::TransportListenPort
	uint16_t ___TransportListenPort_2;
	// System.UInt32 Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::MaxBitrateKbps
	uint32_t ___MaxBitrateKbps_3;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingVideoCodec Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::VideoCodec
	int32_t ___VideoCodec_4;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::EnableAudio
	bool ___EnableAudio_5;

public:
	inline static int32_t get_offset_of_ListenInterface_0() { return static_cast<int32_t>(offsetof(RemotingListenConfiguration_t8BF869B703CDF957D2A45D3A352747C9BB6F91F8, ___ListenInterface_0)); }
	inline String_t* get_ListenInterface_0() const { return ___ListenInterface_0; }
	inline String_t** get_address_of_ListenInterface_0() { return &___ListenInterface_0; }
	inline void set_ListenInterface_0(String_t* value)
	{
		___ListenInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ListenInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_HandshakeListenPort_1() { return static_cast<int32_t>(offsetof(RemotingListenConfiguration_t8BF869B703CDF957D2A45D3A352747C9BB6F91F8, ___HandshakeListenPort_1)); }
	inline uint16_t get_HandshakeListenPort_1() const { return ___HandshakeListenPort_1; }
	inline uint16_t* get_address_of_HandshakeListenPort_1() { return &___HandshakeListenPort_1; }
	inline void set_HandshakeListenPort_1(uint16_t value)
	{
		___HandshakeListenPort_1 = value;
	}

	inline static int32_t get_offset_of_TransportListenPort_2() { return static_cast<int32_t>(offsetof(RemotingListenConfiguration_t8BF869B703CDF957D2A45D3A352747C9BB6F91F8, ___TransportListenPort_2)); }
	inline uint16_t get_TransportListenPort_2() const { return ___TransportListenPort_2; }
	inline uint16_t* get_address_of_TransportListenPort_2() { return &___TransportListenPort_2; }
	inline void set_TransportListenPort_2(uint16_t value)
	{
		___TransportListenPort_2 = value;
	}

	inline static int32_t get_offset_of_MaxBitrateKbps_3() { return static_cast<int32_t>(offsetof(RemotingListenConfiguration_t8BF869B703CDF957D2A45D3A352747C9BB6F91F8, ___MaxBitrateKbps_3)); }
	inline uint32_t get_MaxBitrateKbps_3() const { return ___MaxBitrateKbps_3; }
	inline uint32_t* get_address_of_MaxBitrateKbps_3() { return &___MaxBitrateKbps_3; }
	inline void set_MaxBitrateKbps_3(uint32_t value)
	{
		___MaxBitrateKbps_3 = value;
	}

	inline static int32_t get_offset_of_VideoCodec_4() { return static_cast<int32_t>(offsetof(RemotingListenConfiguration_t8BF869B703CDF957D2A45D3A352747C9BB6F91F8, ___VideoCodec_4)); }
	inline int32_t get_VideoCodec_4() const { return ___VideoCodec_4; }
	inline int32_t* get_address_of_VideoCodec_4() { return &___VideoCodec_4; }
	inline void set_VideoCodec_4(int32_t value)
	{
		___VideoCodec_4 = value;
	}

	inline static int32_t get_offset_of_EnableAudio_5() { return static_cast<int32_t>(offsetof(RemotingListenConfiguration_t8BF869B703CDF957D2A45D3A352747C9BB6F91F8, ___EnableAudio_5)); }
	inline bool get_EnableAudio_5() const { return ___EnableAudio_5; }
	inline bool* get_address_of_EnableAudio_5() { return &___EnableAudio_5; }
	inline void set_EnableAudio_5(bool value)
	{
		___EnableAudio_5 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration
#pragma pack(push, tp, 8)
struct RemotingListenConfiguration_t8BF869B703CDF957D2A45D3A352747C9BB6F91F8_marshaled_pinvoke
{
	char* ___ListenInterface_0;
	uint16_t ___HandshakeListenPort_1;
	uint16_t ___TransportListenPort_2;
	uint32_t ___MaxBitrateKbps_3;
	int32_t ___VideoCodec_4;
	int32_t ___EnableAudio_5;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration
#pragma pack(push, tp, 8)
struct RemotingListenConfiguration_t8BF869B703CDF957D2A45D3A352747C9BB6F91F8_marshaled_com
{
	Il2CppChar* ___ListenInterface_0;
	uint16_t ___HandshakeListenPort_1;
	uint16_t ___TransportListenPort_2;
	uint32_t ___MaxBitrateKbps_3;
	int32_t ___VideoCodec_4;
	int32_t ___EnableAudio_5;
};
#pragma pack(pop, tp)

// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Name
	String_t* ___Name_1;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Path
	String_t* ___Path_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Included
	bool ___Included_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::BuildIndex
	int32_t ___BuildIndex_4;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Tag
	String_t* ___Tag_5;
	// UnityEngine.Object Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Asset
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___Asset_6;

public:
	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_1), (void*)value);
	}

	inline static int32_t get_offset_of_Path_2() { return static_cast<int32_t>(offsetof(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD, ___Path_2)); }
	inline String_t* get_Path_2() const { return ___Path_2; }
	inline String_t** get_address_of_Path_2() { return &___Path_2; }
	inline void set_Path_2(String_t* value)
	{
		___Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_Included_3() { return static_cast<int32_t>(offsetof(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD, ___Included_3)); }
	inline bool get_Included_3() const { return ___Included_3; }
	inline bool* get_address_of_Included_3() { return &___Included_3; }
	inline void set_Included_3(bool value)
	{
		___Included_3 = value;
	}

	inline static int32_t get_offset_of_BuildIndex_4() { return static_cast<int32_t>(offsetof(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD, ___BuildIndex_4)); }
	inline int32_t get_BuildIndex_4() const { return ___BuildIndex_4; }
	inline int32_t* get_address_of_BuildIndex_4() { return &___BuildIndex_4; }
	inline void set_BuildIndex_4(int32_t value)
	{
		___BuildIndex_4 = value;
	}

	inline static int32_t get_offset_of_Tag_5() { return static_cast<int32_t>(offsetof(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD, ___Tag_5)); }
	inline String_t* get_Tag_5() const { return ___Tag_5; }
	inline String_t** get_address_of_Tag_5() { return &___Tag_5; }
	inline void set_Tag_5(String_t* value)
	{
		___Tag_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tag_5), (void*)value);
	}

	inline static int32_t get_offset_of_Asset_6() { return static_cast<int32_t>(offsetof(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD, ___Asset_6)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_Asset_6() const { return ___Asset_6; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_Asset_6() { return &___Asset_6; }
	inline void set_Asset_6(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___Asset_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Asset_6), (void*)value);
	}
};

struct SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::empty
	SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD_StaticFields, ___empty_0)); }
	inline SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  get_empty_0() const { return ___empty_0; }
	inline SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD * get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Name_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Path_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Tag_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Asset_6), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD_marshaled_pinvoke
{
	char* ___Name_1;
	char* ___Path_2;
	int32_t ___Included_3;
	int32_t ___BuildIndex_4;
	char* ___Tag_5;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke ___Asset_6;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD_marshaled_com
{
	Il2CppChar* ___Name_1;
	Il2CppChar* ___Path_2;
	int32_t ___Included_3;
	int32_t ___BuildIndex_4;
	Il2CppChar* ___Tag_5;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com* ___Asset_6;
};

// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Runtime.InteropServices.SafeBuffer System.IO.UnmanagedMemoryStream::_buffer
	SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * ____buffer_4;
	// System.Byte* System.IO.UnmanagedMemoryStream::_mem
	uint8_t* ____mem_5;
	// System.Int64 System.IO.UnmanagedMemoryStream::_length
	int64_t ____length_6;
	// System.Int64 System.IO.UnmanagedMemoryStream::_capacity
	int64_t ____capacity_7;
	// System.Int64 System.IO.UnmanagedMemoryStream::_position
	int64_t ____position_8;
	// System.Int64 System.IO.UnmanagedMemoryStream::_offset
	int64_t ____offset_9;
	// System.IO.FileAccess System.IO.UnmanagedMemoryStream::_access
	int32_t ____access_10;
	// System.Boolean System.IO.UnmanagedMemoryStream::_isOpen
	bool ____isOpen_11;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.UnmanagedMemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_12;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____buffer_4)); }
	inline SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * get__buffer_4() const { return ____buffer_4; }
	inline SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 ** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__mem_5() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____mem_5)); }
	inline uint8_t* get__mem_5() const { return ____mem_5; }
	inline uint8_t** get_address_of__mem_5() { return &____mem_5; }
	inline void set__mem_5(uint8_t* value)
	{
		____mem_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____length_6)); }
	inline int64_t get__length_6() const { return ____length_6; }
	inline int64_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int64_t value)
	{
		____length_6 = value;
	}

	inline static int32_t get_offset_of__capacity_7() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____capacity_7)); }
	inline int64_t get__capacity_7() const { return ____capacity_7; }
	inline int64_t* get_address_of__capacity_7() { return &____capacity_7; }
	inline void set__capacity_7(int64_t value)
	{
		____capacity_7 = value;
	}

	inline static int32_t get_offset_of__position_8() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____position_8)); }
	inline int64_t get__position_8() const { return ____position_8; }
	inline int64_t* get_address_of__position_8() { return &____position_8; }
	inline void set__position_8(int64_t value)
	{
		____position_8 = value;
	}

	inline static int32_t get_offset_of__offset_9() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____offset_9)); }
	inline int64_t get__offset_9() const { return ____offset_9; }
	inline int64_t* get_address_of__offset_9() { return &____offset_9; }
	inline void set__offset_9(int64_t value)
	{
		____offset_9 = value;
	}

	inline static int32_t get_offset_of__access_10() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____access_10)); }
	inline int32_t get__access_10() const { return ____access_10; }
	inline int32_t* get_address_of__access_10() { return &____access_10; }
	inline void set__access_10(int32_t value)
	{
		____access_10 = value;
	}

	inline static int32_t get_offset_of__isOpen_11() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____isOpen_11)); }
	inline bool get__isOpen_11() const { return ____isOpen_11; }
	inline bool* get_address_of__isOpen_11() { return &____isOpen_11; }
	inline void set__isOpen_11(bool value)
	{
		____isOpen_11 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_12() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____lastReadTask_12)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_12() const { return ____lastReadTask_12; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_12() { return &____lastReadTask_12; }
	inline void set__lastReadTask_12(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_12), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509ChainImplMono
struct X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174  : public X509ChainImpl_tAA54C8F65F2922D9BAB911D37EFFCD7A95A92AEE
{
public:
	// System.Security.Cryptography.X509Certificates.StoreLocation System.Security.Cryptography.X509Certificates.X509ChainImplMono::location
	int32_t ___location_0;
	// System.Security.Cryptography.X509Certificates.X509ChainElementCollection System.Security.Cryptography.X509Certificates.X509ChainImplMono::elements
	X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1 * ___elements_1;
	// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509ChainImplMono::policy
	X509ChainPolicy_tA848C617FAE235C50D3937F79C76FF0713BFE88F * ___policy_2;
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509ChainImplMono::status
	X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* ___status_3;
	// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509ChainImplMono::working_public_key
	AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F * ___working_public_key_5;
	// System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509ChainImplMono::bce_restriction
	X509ChainElement_t14C8B463482A51A625A8D50A297B2951A673EF25 * ___bce_restriction_6;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainImplMono::roots
	X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 * ___roots_7;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainImplMono::cas
	X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 * ___cas_8;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509ChainImplMono::root_store
	X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * ___root_store_9;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509ChainImplMono::ca_store
	X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * ___ca_store_10;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509ChainImplMono::user_root_store
	X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * ___user_root_store_11;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509ChainImplMono::user_ca_store
	X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * ___user_ca_store_12;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainImplMono::collection
	X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 * ___collection_13;

public:
	inline static int32_t get_offset_of_location_0() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___location_0)); }
	inline int32_t get_location_0() const { return ___location_0; }
	inline int32_t* get_address_of_location_0() { return &___location_0; }
	inline void set_location_0(int32_t value)
	{
		___location_0 = value;
	}

	inline static int32_t get_offset_of_elements_1() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___elements_1)); }
	inline X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1 * get_elements_1() const { return ___elements_1; }
	inline X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1 ** get_address_of_elements_1() { return &___elements_1; }
	inline void set_elements_1(X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1 * value)
	{
		___elements_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elements_1), (void*)value);
	}

	inline static int32_t get_offset_of_policy_2() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___policy_2)); }
	inline X509ChainPolicy_tA848C617FAE235C50D3937F79C76FF0713BFE88F * get_policy_2() const { return ___policy_2; }
	inline X509ChainPolicy_tA848C617FAE235C50D3937F79C76FF0713BFE88F ** get_address_of_policy_2() { return &___policy_2; }
	inline void set_policy_2(X509ChainPolicy_tA848C617FAE235C50D3937F79C76FF0713BFE88F * value)
	{
		___policy_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___policy_2), (void*)value);
	}

	inline static int32_t get_offset_of_status_3() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___status_3)); }
	inline X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* get_status_3() const { return ___status_3; }
	inline X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F** get_address_of_status_3() { return &___status_3; }
	inline void set_status_3(X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* value)
	{
		___status_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___status_3), (void*)value);
	}

	inline static int32_t get_offset_of_working_public_key_5() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___working_public_key_5)); }
	inline AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F * get_working_public_key_5() const { return ___working_public_key_5; }
	inline AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F ** get_address_of_working_public_key_5() { return &___working_public_key_5; }
	inline void set_working_public_key_5(AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F * value)
	{
		___working_public_key_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___working_public_key_5), (void*)value);
	}

	inline static int32_t get_offset_of_bce_restriction_6() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___bce_restriction_6)); }
	inline X509ChainElement_t14C8B463482A51A625A8D50A297B2951A673EF25 * get_bce_restriction_6() const { return ___bce_restriction_6; }
	inline X509ChainElement_t14C8B463482A51A625A8D50A297B2951A673EF25 ** get_address_of_bce_restriction_6() { return &___bce_restriction_6; }
	inline void set_bce_restriction_6(X509ChainElement_t14C8B463482A51A625A8D50A297B2951A673EF25 * value)
	{
		___bce_restriction_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bce_restriction_6), (void*)value);
	}

	inline static int32_t get_offset_of_roots_7() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___roots_7)); }
	inline X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 * get_roots_7() const { return ___roots_7; }
	inline X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 ** get_address_of_roots_7() { return &___roots_7; }
	inline void set_roots_7(X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 * value)
	{
		___roots_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roots_7), (void*)value);
	}

	inline static int32_t get_offset_of_cas_8() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___cas_8)); }
	inline X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 * get_cas_8() const { return ___cas_8; }
	inline X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 ** get_address_of_cas_8() { return &___cas_8; }
	inline void set_cas_8(X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 * value)
	{
		___cas_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cas_8), (void*)value);
	}

	inline static int32_t get_offset_of_root_store_9() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___root_store_9)); }
	inline X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * get_root_store_9() const { return ___root_store_9; }
	inline X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 ** get_address_of_root_store_9() { return &___root_store_9; }
	inline void set_root_store_9(X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * value)
	{
		___root_store_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_store_9), (void*)value);
	}

	inline static int32_t get_offset_of_ca_store_10() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___ca_store_10)); }
	inline X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * get_ca_store_10() const { return ___ca_store_10; }
	inline X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 ** get_address_of_ca_store_10() { return &___ca_store_10; }
	inline void set_ca_store_10(X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * value)
	{
		___ca_store_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ca_store_10), (void*)value);
	}

	inline static int32_t get_offset_of_user_root_store_11() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___user_root_store_11)); }
	inline X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * get_user_root_store_11() const { return ___user_root_store_11; }
	inline X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 ** get_address_of_user_root_store_11() { return &___user_root_store_11; }
	inline void set_user_root_store_11(X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * value)
	{
		___user_root_store_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___user_root_store_11), (void*)value);
	}

	inline static int32_t get_offset_of_user_ca_store_12() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___user_ca_store_12)); }
	inline X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * get_user_ca_store_12() const { return ___user_ca_store_12; }
	inline X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 ** get_address_of_user_ca_store_12() { return &___user_ca_store_12; }
	inline void set_user_ca_store_12(X509Store_tCC8AD2979268351F9CD4E2A35AA2C70990A33358 * value)
	{
		___user_ca_store_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___user_ca_store_12), (void*)value);
	}

	inline static int32_t get_offset_of_collection_13() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174, ___collection_13)); }
	inline X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 * get_collection_13() const { return ___collection_13; }
	inline X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 ** get_address_of_collection_13() { return &___collection_13; }
	inline void set_collection_13(X509Certificate2Collection_t57B00FD0B9069761595137606ED860B3C7EA9A20 * value)
	{
		___collection_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collection_13), (void*)value);
	}
};

struct X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174_StaticFields
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509ChainImplMono::Empty
	X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* ___Empty_4;

public:
	inline static int32_t get_offset_of_Empty_4() { return static_cast<int32_t>(offsetof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174_StaticFields, ___Empty_4)); }
	inline X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* get_Empty_4() const { return ___Empty_4; }
	inline X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F** get_address_of_Empty_4() { return &___Empty_4; }
	inline void set_Empty_4(X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* value)
	{
		___Empty_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/BlankCertificateHandler
struct BlankCertificateHandler_tC591ABFC7DAC04DD3B308C6F8B68E71E7D0DC0C2  : public CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E
{
public:

public:
};


// System.Collections.Hashtable/SyncHashtable
struct SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C  : public Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/SyncHashtable::_table
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____table_21;

public:
	inline static int32_t get_offset_of__table_21() { return static_cast<int32_t>(offsetof(SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C, ____table_21)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__table_21() const { return ____table_21; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__table_21() { return &____table_21; }
	inline void set__table_21(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____table_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____table_21), (void*)value);
	}
};


// System.Net.Http.HttpContent/FixedMemoryStream
struct FixedMemoryStream_t5C7647C6F3503F1EADC966C8D2F50E6BF1A69E3A  : public MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C
{
public:

public:
};


// System.Net.Http.Headers.HttpHeaders/<GetEnumerator>d__19
struct U3CGetEnumeratorU3Ed__19_tD20D6BD26C391A4DCD06D871F3CF6007F1D5A9FF  : public RuntimeObject
{
public:
	// System.Int32 System.Net.Http.Headers.HttpHeaders/<GetEnumerator>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>> System.Net.Http.Headers.HttpHeaders/<GetEnumerator>d__19::<>2__current
	KeyValuePair_2_tFBE4785A593E0906126E2B15AA7A9D45E41F9A38  ___U3CU3E2__current_1;
	// System.Net.Http.Headers.HttpHeaders System.Net.Http.Headers.HttpHeaders/<GetEnumerator>d__19::<>4__this
	HttpHeaders_t975DBB16F39167BE91FF1BEC325EB4F4471996D2 * ___U3CU3E4__this_2;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Net.Http.Headers.HttpHeaders/HeaderBucket> System.Net.Http.Headers.HttpHeaders/<GetEnumerator>d__19::<>7__wrap1
	Enumerator_tBD7CB3668A80F1807370248DB9812ECC721BF3DD  ___U3CU3E7__wrap1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__19_tD20D6BD26C391A4DCD06D871F3CF6007F1D5A9FF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__19_tD20D6BD26C391A4DCD06D871F3CF6007F1D5A9FF, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_tFBE4785A593E0906126E2B15AA7A9D45E41F9A38  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_tFBE4785A593E0906126E2B15AA7A9D45E41F9A38 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_tFBE4785A593E0906126E2B15AA7A9D45E41F9A38  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__19_tD20D6BD26C391A4DCD06D871F3CF6007F1D5A9FF, ___U3CU3E4__this_2)); }
	inline HttpHeaders_t975DBB16F39167BE91FF1BEC325EB4F4471996D2 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline HttpHeaders_t975DBB16F39167BE91FF1BEC325EB4F4471996D2 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(HttpHeaders_t975DBB16F39167BE91FF1BEC325EB4F4471996D2 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__19_tD20D6BD26C391A4DCD06D871F3CF6007F1D5A9FF, ___U3CU3E7__wrap1_3)); }
	inline Enumerator_tBD7CB3668A80F1807370248DB9812ECC721BF3DD  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline Enumerator_tBD7CB3668A80F1807370248DB9812ECC721BF3DD * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(Enumerator_tBD7CB3668A80F1807370248DB9812ECC721BF3DD  value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_3))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_3))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator
struct Enumerator_t80867B0F3B9C3CAB09CB2D19E5F471B3137CA923 
{
public:
	// UnityEngine.InputSystem.LowLevel.IMECompositionString UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator::m_CompositionString
	IMECompositionString_tAF036B71E42938B0C10B115EC36B5A7893A98FE6  ___m_CompositionString_0;
	// System.Char UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator::m_CurrentCharacter
	Il2CppChar ___m_CurrentCharacter_1;
	// System.Int32 UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator::m_CurrentIndex
	int32_t ___m_CurrentIndex_2;

public:
	inline static int32_t get_offset_of_m_CompositionString_0() { return static_cast<int32_t>(offsetof(Enumerator_t80867B0F3B9C3CAB09CB2D19E5F471B3137CA923, ___m_CompositionString_0)); }
	inline IMECompositionString_tAF036B71E42938B0C10B115EC36B5A7893A98FE6  get_m_CompositionString_0() const { return ___m_CompositionString_0; }
	inline IMECompositionString_tAF036B71E42938B0C10B115EC36B5A7893A98FE6 * get_address_of_m_CompositionString_0() { return &___m_CompositionString_0; }
	inline void set_m_CompositionString_0(IMECompositionString_tAF036B71E42938B0C10B115EC36B5A7893A98FE6  value)
	{
		___m_CompositionString_0 = value;
	}

	inline static int32_t get_offset_of_m_CurrentCharacter_1() { return static_cast<int32_t>(offsetof(Enumerator_t80867B0F3B9C3CAB09CB2D19E5F471B3137CA923, ___m_CurrentCharacter_1)); }
	inline Il2CppChar get_m_CurrentCharacter_1() const { return ___m_CurrentCharacter_1; }
	inline Il2CppChar* get_address_of_m_CurrentCharacter_1() { return &___m_CurrentCharacter_1; }
	inline void set_m_CurrentCharacter_1(Il2CppChar value)
	{
		___m_CurrentCharacter_1 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_2() { return static_cast<int32_t>(offsetof(Enumerator_t80867B0F3B9C3CAB09CB2D19E5F471B3137CA923, ___m_CurrentIndex_2)); }
	inline int32_t get_m_CurrentIndex_2() const { return ___m_CurrentIndex_2; }
	inline int32_t* get_address_of_m_CurrentIndex_2() { return &___m_CurrentIndex_2; }
	inline void set_m_CurrentIndex_2(int32_t value)
	{
		___m_CurrentIndex_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator
struct Enumerator_t80867B0F3B9C3CAB09CB2D19E5F471B3137CA923_marshaled_pinvoke
{
	IMECompositionString_tAF036B71E42938B0C10B115EC36B5A7893A98FE6_marshaled_pinvoke ___m_CompositionString_0;
	uint8_t ___m_CurrentCharacter_1;
	int32_t ___m_CurrentIndex_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator
struct Enumerator_t80867B0F3B9C3CAB09CB2D19E5F471B3137CA923_marshaled_com
{
	IMECompositionString_tAF036B71E42938B0C10B115EC36B5A7893A98FE6_marshaled_com ___m_CompositionString_0;
	uint8_t ___m_CurrentCharacter_1;
	int32_t ___m_CurrentIndex_2;
};

// UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4
struct U3Cget_patternsU3Ed__4_t5060CB226BE05D6F741FA9DD0137346F9946734B  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<>2__current
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.InputSystem.Layouts.InputDeviceMatcher UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<>4__this
	InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC  ___U3CU3E4__this_3;
	// UnityEngine.InputSystem.Layouts.InputDeviceMatcher UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<>3__<>4__this
	InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC  ___U3CU3E3__U3CU3E4__this_4;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<count>5__2
	int32_t ___U3CcountU3E5__2_5;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<i>5__3
	int32_t ___U3CiU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_patternsU3Ed__4_t5060CB226BE05D6F741FA9DD0137346F9946734B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_patternsU3Ed__4_t5060CB226BE05D6F741FA9DD0137346F9946734B, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_patternsU3Ed__4_t5060CB226BE05D6F741FA9DD0137346F9946734B, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_patternsU3Ed__4_t5060CB226BE05D6F741FA9DD0137346F9946734B, ___U3CU3E4__this_3)); }
	inline InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC  get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC * get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC  value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E4__this_3))->___m_Patterns_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E3__U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3Cget_patternsU3Ed__4_t5060CB226BE05D6F741FA9DD0137346F9946734B, ___U3CU3E3__U3CU3E4__this_4)); }
	inline InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC  get_U3CU3E3__U3CU3E4__this_4() const { return ___U3CU3E3__U3CU3E4__this_4; }
	inline InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC * get_address_of_U3CU3E3__U3CU3E4__this_4() { return &___U3CU3E3__U3CU3E4__this_4; }
	inline void set_U3CU3E3__U3CU3E4__this_4(InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC  value)
	{
		___U3CU3E3__U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E3__U3CU3E4__this_4))->___m_Patterns_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CcountU3E5__2_5() { return static_cast<int32_t>(offsetof(U3Cget_patternsU3Ed__4_t5060CB226BE05D6F741FA9DD0137346F9946734B, ___U3CcountU3E5__2_5)); }
	inline int32_t get_U3CcountU3E5__2_5() const { return ___U3CcountU3E5__2_5; }
	inline int32_t* get_address_of_U3CcountU3E5__2_5() { return &___U3CcountU3E5__2_5; }
	inline void set_U3CcountU3E5__2_5(int32_t value)
	{
		___U3CcountU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_6() { return static_cast<int32_t>(offsetof(U3Cget_patternsU3Ed__4_t5060CB226BE05D6F741FA9DD0137346F9946734B, ___U3CiU3E5__3_6)); }
	inline int32_t get_U3CiU3E5__3_6() const { return ___U3CiU3E5__3_6; }
	inline int32_t* get_address_of_U3CiU3E5__3_6() { return &___U3CiU3E5__3_6; }
	inline void set_U3CiU3E5__3_6(int32_t value)
	{
		___U3CiU3E5__3_6 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController
struct ReplayController_tAB7290396714CE901DDF966A6BC5E2057CDDB468  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::<finished>k__BackingField
	bool ___U3CfinishedU3Ek__BackingField_0;
	// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::<paused>k__BackingField
	bool ___U3CpausedU3Ek__BackingField_1;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::<position>k__BackingField
	int32_t ___U3CpositionU3Ek__BackingField_2;
	// UnityEngine.InputSystem.LowLevel.InputEventTrace UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_EventTrace
	InputEventTrace_t905233FE94AEA5F3A748CF627D1766D827D593A9 * ___m_EventTrace_3;
	// UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_Enumerator
	Enumerator_t310442BCF6CF12ADBE1B000FD18F259531EC5861 * ___m_Enumerator_4;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>> UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_DeviceIDMappings
	InlinedArray_1_t0A189C71A0DF3487F6E38C5AE3E669AE0A33308F  ___m_DeviceIDMappings_5;
	// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_CreateNewDevices
	bool ___m_CreateNewDevices_6;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_CreatedDevices
	InlinedArray_1_tA44143E57933763DA129108D2BC03FC6CA092C27  ___m_CreatedDevices_7;
	// System.Action UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_OnFinished
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnFinished_8;
	// System.Action`1<UnityEngine.InputSystem.LowLevel.InputEventPtr> UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_OnEvent
	Action_1_t346E92655C4F472313FF8152AFE632BAFF84648D * ___m_OnEvent_9;
	// System.Double UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_StartTimeAsPerFirstEvent
	double ___m_StartTimeAsPerFirstEvent_10;
	// System.Double UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_StartTimeAsPerRuntime
	double ___m_StartTimeAsPerRuntime_11;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_AllEventsByTimeIndex
	int32_t ___m_AllEventsByTimeIndex_12;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.LowLevel.InputEventPtr> UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_AllEventsByTime
	List_1_t73B6079482DF922A0AD324CADBBB3CEAEF5FE4FC * ___m_AllEventsByTime_13;

public:
	inline static int32_t get_offset_of_U3CfinishedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ReplayController_tAB7290396714CE901DDF966A6BC5E2057CDDB468, ___U3CfinishedU3Ek__BackingField_0)); }
	inline bool get_U3CfinishedU3Ek__BackingField_0() const { return ___U3CfinishedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CfinishedU3Ek__BackingField_0() { return &___U3CfinishedU3Ek__BackingField_0; }
	inline void set_U3CfinishedU3Ek__BackingField_0(bool value)
	{
		___U3CfinishedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CpausedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReplayController_tAB7290396714CE901DDF966A6BC5E2057CDDB468, ___U3CpausedU3Ek__BackingField_1)); }
	inline bool get_U3CpausedU3Ek__BackingField_1() const { return ___U3CpausedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CpausedU3Ek__BackingField_1() { return &___U3CpausedU3Ek__BackingField_1; }
	inline void set_U3CpausedU3Ek__BackingField_1(bool value)
	{
		___U3CpausedU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ReplayController_tAB7290396714CE901DDF966A6BC5E2057CDDB468, ___U3CpositionU3Ek__BackingField_2)); }
	inline int32_t get_U3CpositionU3Ek__BackingField_2() const { return ___U3CpositionU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CpositionU3Ek__BackingField_2() { return &___U3CpositionU3Ek__BackingField_2; }
	inline void set_U3CpositionU3Ek__BackingField_2(int32_t value)
	{
		___U3CpositionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_m_EventTrace_3() { return static_cast<int32_t>(offsetof(ReplayController_tAB7290396714CE901DDF966A6BC5E2057CDDB468, ___m_EventTrace_3)); }
	inline InputEventTrace_t905233FE94AEA5F3A748CF627D1766D827D593A9 * get_m_EventTrace_3() const { return ___m_EventTrace_3; }
	inline InputEventTrace_t905233FE94AEA5F3A748CF627D1766D827D593A9 ** get_address_of_m_EventTrace_3() { return &___m_EventTrace_3; }
	inline void set_m_EventTrace_3(InputEventTrace_t905233FE94AEA5F3A748CF627D1766D827D593A9 * value)
	{
		___m_EventTrace_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventTrace_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Enumerator_4() { return static_cast<int32_t>(offsetof(ReplayController_tAB7290396714CE901DDF966A6BC5E2057CDDB468, ___m_Enumerator_4)); }
	inline Enumerator_t310442BCF6CF12ADBE1B000FD18F259531EC5861 * get_m_Enumerator_4() const { return ___m_Enumerator_4; }
	inline Enumerator_t310442BCF6CF12ADBE1B000FD18F259531EC5861 ** get_address_of_m_Enumerator_4() { return &___m_Enumerator_4; }
	inline void set_m_Enumerator_4(Enumerator_t310442BCF6CF12ADBE1B000FD18F259531EC5861 * value)
	{
		___m_Enumerator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Enumerator_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceIDMappings_5() { return static_cast<int32_t>(offsetof(ReplayController_tAB7290396714CE901DDF966A6BC5E2057CDDB468, ___m_DeviceIDMappings_5)); }
	inline InlinedArray_1_t0A189C71A0DF3487F6E38C5AE3E669AE0A33308F  get_m_DeviceIDMappings_5() const { return ___m_DeviceIDMappings_5; }
	inline InlinedArray_1_t0A189C71A0DF3487F6E38C5AE3E669AE0A33308F * get_address_of_m_DeviceIDMappings_5() { return &___m_DeviceIDMappings_5; }
	inline void set_m_DeviceIDMappings_5(InlinedArray_1_t0A189C71A0DF3487F6E38C5AE3E669AE0A33308F  value)
	{
		___m_DeviceIDMappings_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DeviceIDMappings_5))->___additionalValues_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_CreateNewDevices_6() { return static_cast<int32_t>(offsetof(ReplayController_tAB7290396714CE901DDF966A6BC5E2057CDDB468, ___m_CreateNewDevices_6)); }
	inline bool get_m_CreateNewDevices_6() const { return ___m_CreateNewDevices_6; }
	inline bool* get_address_of_m_CreateNewDevices_6() { return &___m_CreateNewDevices_6; }
	inline void set_m_CreateNewDevices_6(bool value)
	{
		___m_CreateNewDevices_6 = value;
	}

	inline static int32_t get_offset_of_m_CreatedDevices_7() { return static_cast<int32_t>(offsetof(ReplayController_tAB7290396714CE901DDF966A6BC5E2057CDDB468, ___m_CreatedDevices_7)); }
	inline InlinedArray_1_tA44143E57933763DA129108D2BC03FC6CA092C27  get_m_CreatedDevices_7() const { return ___m_CreatedDevices_7; }
	inline InlinedArray_1_tA44143E57933763DA129108D2BC03FC6CA092C27 * get_address_of_m_CreatedDevices_7() { return &___m_CreatedDevices_7; }
	inline void set_m_CreatedDevices_7(InlinedArray_1_tA44143E57933763DA129108D2BC03FC6CA092C27  value)
	{
		___m_CreatedDevices_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CreatedDevices_7))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CreatedDevices_7))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnFinished_8() { return static_cast<int32_t>(offsetof(ReplayController_tAB7290396714CE901DDF966A6BC5E2057CDDB468, ___m_OnFinished_8)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnFinished_8() const { return ___m_OnFinished_8; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnFinished_8() { return &___m_OnFinished_8; }
	inline void set_m_OnFinished_8(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnFinished_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFinished_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnEvent_9() { return static_cast<int32_t>(offsetof(ReplayController_tAB7290396714CE901DDF966A6BC5E2057CDDB468, ___m_OnEvent_9)); }
	inline Action_1_t346E92655C4F472313FF8152AFE632BAFF84648D * get_m_OnEvent_9() const { return ___m_OnEvent_9; }
	inline Action_1_t346E92655C4F472313FF8152AFE632BAFF84648D ** get_address_of_m_OnEvent_9() { return &___m_OnEvent_9; }
	inline void set_m_OnEvent_9(Action_1_t346E92655C4F472313FF8152AFE632BAFF84648D * value)
	{
		___m_OnEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEvent_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartTimeAsPerFirstEvent_10() { return static_cast<int32_t>(offsetof(ReplayController_tAB7290396714CE901DDF966A6BC5E2057CDDB468, ___m_StartTimeAsPerFirstEvent_10)); }
	inline double get_m_StartTimeAsPerFirstEvent_10() const { return ___m_StartTimeAsPerFirstEvent_10; }
	inline double* get_address_of_m_StartTimeAsPerFirstEvent_10() { return &___m_StartTimeAsPerFirstEvent_10; }
	inline void set_m_StartTimeAsPerFirstEvent_10(double value)
	{
		___m_StartTimeAsPerFirstEvent_10 = value;
	}

	inline static int32_t get_offset_of_m_StartTimeAsPerRuntime_11() { return static_cast<int32_t>(offsetof(ReplayController_tAB7290396714CE901DDF966A6BC5E2057CDDB468, ___m_StartTimeAsPerRuntime_11)); }
	inline double get_m_StartTimeAsPerRuntime_11() const { return ___m_StartTimeAsPerRuntime_11; }
	inline double* get_address_of_m_StartTimeAsPerRuntime_11() { return &___m_StartTimeAsPerRuntime_11; }
	inline void set_m_StartTimeAsPerRuntime_11(double value)
	{
		___m_StartTimeAsPerRuntime_11 = value;
	}

	inline static int32_t get_offset_of_m_AllEventsByTimeIndex_12() { return static_cast<int32_t>(offsetof(ReplayController_tAB7290396714CE901DDF966A6BC5E2057CDDB468, ___m_AllEventsByTimeIndex_12)); }
	inline int32_t get_m_AllEventsByTimeIndex_12() const { return ___m_AllEventsByTimeIndex_12; }
	inline int32_t* get_address_of_m_AllEventsByTimeIndex_12() { return &___m_AllEventsByTimeIndex_12; }
	inline void set_m_AllEventsByTimeIndex_12(int32_t value)
	{
		___m_AllEventsByTimeIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_AllEventsByTime_13() { return static_cast<int32_t>(offsetof(ReplayController_tAB7290396714CE901DDF966A6BC5E2057CDDB468, ___m_AllEventsByTime_13)); }
	inline List_1_t73B6079482DF922A0AD324CADBBB3CEAEF5FE4FC * get_m_AllEventsByTime_13() const { return ___m_AllEventsByTime_13; }
	inline List_1_t73B6079482DF922A0AD324CADBBB3CEAEF5FE4FC ** get_address_of_m_AllEventsByTime_13() { return &___m_AllEventsByTime_13; }
	inline void set_m_AllEventsByTime_13(List_1_t73B6079482DF922A0AD324CADBBB3CEAEF5FE4FC * value)
	{
		___m_AllEventsByTime_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AllEventsByTime_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16
struct U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>4__this
	MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664 * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>7__wrap1
	Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337  ___U3CU3E7__wrap1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3, ___U3CU3E2__current_1)); }
	inline RuntimeObject* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3, ___U3CU3E4__this_3)); }
	inline MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337 * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_4))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo>
struct Enumerator_t04B917F995CCD0D1A1C7CE68BD4FF181A4190BD3 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t9AA16C93BC2DB750DE514C896B52763AC0C9D0EA * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t04B917F995CCD0D1A1C7CE68BD4FF181A4190BD3, ___list_0)); }
	inline List_1_t9AA16C93BC2DB750DE514C896B52763AC0C9D0EA * get_list_0() const { return ___list_0; }
	inline List_1_t9AA16C93BC2DB750DE514C896B52763AC0C9D0EA ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t9AA16C93BC2DB750DE514C896B52763AC0C9D0EA * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t04B917F995CCD0D1A1C7CE68BD4FF181A4190BD3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t04B917F995CCD0D1A1C7CE68BD4FF181A4190BD3, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t04B917F995CCD0D1A1C7CE68BD4FF181A4190BD3, ___current_3)); }
	inline SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  get_current_3() const { return ___current_3; }
	inline SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Name_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Path_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Tag_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Asset_6), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>
struct InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Indices_1() { return static_cast<int32_t>(offsetof(InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96, ___m_Indices_1)); }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  get_m_Indices_1() const { return ___m_Indices_1; }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B * get_address_of_m_Indices_1() { return &___m_Indices_1; }
	inline void set_m_Indices_1(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  value)
	{
		___m_Indices_1 = value;
	}

	inline static int32_t get_offset_of_m_Allocator_2() { return static_cast<int32_t>(offsetof(InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96, ___m_Allocator_2)); }
	inline int32_t get_m_Allocator_2() const { return ___m_Allocator_2; }
	inline int32_t* get_address_of_m_Allocator_2() { return &___m_Allocator_2; }
	inline void set_m_Allocator_2(int32_t value)
	{
		___m_Allocator_2 = value;
	}
};


// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputDevice>
struct InputControlList_1_tFC847CF52966360602E483824081B85085506801 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(InputControlList_1_tFC847CF52966360602E483824081B85085506801, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Indices_1() { return static_cast<int32_t>(offsetof(InputControlList_1_tFC847CF52966360602E483824081B85085506801, ___m_Indices_1)); }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  get_m_Indices_1() const { return ___m_Indices_1; }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B * get_address_of_m_Indices_1() { return &___m_Indices_1; }
	inline void set_m_Indices_1(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  value)
	{
		___m_Indices_1 = value;
	}

	inline static int32_t get_offset_of_m_Allocator_2() { return static_cast<int32_t>(offsetof(InputControlList_1_tFC847CF52966360602E483824081B85085506801, ___m_Allocator_2)); }
	inline int32_t get_m_Allocator_2() const { return ___m_Allocator_2; }
	inline int32_t* get_address_of_m_Allocator_2() { return &___m_Allocator_2; }
	inline void set_m_Allocator_2(int32_t value)
	{
		___m_Allocator_2 = value;
	}
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 
{
public:
	// T System.Nullable`1::value
	InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104, ___value_0)); }
	inline InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  get_value_0() const { return ___value_0; }
	inline InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_tD92EF2BE9E8955487A46277A7C1C792EEAC43652  : public BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(BaseCoreSystem_tD92EF2BE9E8955487A46277A7C1C792EEAC43652, ___U3CRegistrarU3Ek__BackingField_20)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_20() const { return ___U3CRegistrarU3Ek__BackingField_20; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_20() { return &___U3CRegistrarU3Ek__BackingField_20; }
	inline void set_U3CRegistrarU3Ek__BackingField_20(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_20), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6  : public BaseDataProvider_1_tEC3109DD7330EBFBD10659E4D839217213171929
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::enablePointerCache
	bool ___enablePointerCache_14;
	// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::pointerConfigurations
	PointerConfigU5BU5D_tAB402AEBBC6B3D1142E9E6CB11F242801DC4574C* ___pointerConfigurations_15;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32> Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::activePointersToConfig
	Dictionary_2_t40AD0E25A9C651DF2D10B7C03EE5D87856C2A72D * ___activePointersToConfig_17;

public:
	inline static int32_t get_offset_of_enablePointerCache_14() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6, ___enablePointerCache_14)); }
	inline bool get_enablePointerCache_14() const { return ___enablePointerCache_14; }
	inline bool* get_address_of_enablePointerCache_14() { return &___enablePointerCache_14; }
	inline void set_enablePointerCache_14(bool value)
	{
		___enablePointerCache_14 = value;
	}

	inline static int32_t get_offset_of_pointerConfigurations_15() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6, ___pointerConfigurations_15)); }
	inline PointerConfigU5BU5D_tAB402AEBBC6B3D1142E9E6CB11F242801DC4574C* get_pointerConfigurations_15() const { return ___pointerConfigurations_15; }
	inline PointerConfigU5BU5D_tAB402AEBBC6B3D1142E9E6CB11F242801DC4574C** get_address_of_pointerConfigurations_15() { return &___pointerConfigurations_15; }
	inline void set_pointerConfigurations_15(PointerConfigU5BU5D_tAB402AEBBC6B3D1142E9E6CB11F242801DC4574C* value)
	{
		___pointerConfigurations_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerConfigurations_15), (void*)value);
	}

	inline static int32_t get_offset_of_activePointersToConfig_17() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6, ___activePointersToConfig_17)); }
	inline Dictionary_2_t40AD0E25A9C651DF2D10B7C03EE5D87856C2A72D * get_activePointersToConfig_17() const { return ___activePointersToConfig_17; }
	inline Dictionary_2_t40AD0E25A9C651DF2D10B7C03EE5D87856C2A72D ** get_address_of_activePointersToConfig_17() { return &___activePointersToConfig_17; }
	inline void set_activePointersToConfig_17(Dictionary_2_t40AD0E25A9C651DF2D10B7C03EE5D87856C2A72D * value)
	{
		___activePointersToConfig_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePointersToConfig_17), (void*)value);
	}
};

struct BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestPointersPerfMarker_16;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RecyclePointersPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CreatePointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CreatePointerPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CleanActivePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CleanActivePointersPerfMarker_20;

public:
	inline static int32_t get_offset_of_RequestPointersPerfMarker_16() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_StaticFields, ___RequestPointersPerfMarker_16)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestPointersPerfMarker_16() const { return ___RequestPointersPerfMarker_16; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestPointersPerfMarker_16() { return &___RequestPointersPerfMarker_16; }
	inline void set_RequestPointersPerfMarker_16(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestPointersPerfMarker_16 = value;
	}

	inline static int32_t get_offset_of_RecyclePointersPerfMarker_18() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_StaticFields, ___RecyclePointersPerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RecyclePointersPerfMarker_18() const { return ___RecyclePointersPerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RecyclePointersPerfMarker_18() { return &___RecyclePointersPerfMarker_18; }
	inline void set_RecyclePointersPerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RecyclePointersPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_CreatePointerPerfMarker_19() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_StaticFields, ___CreatePointerPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CreatePointerPerfMarker_19() const { return ___CreatePointerPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CreatePointerPerfMarker_19() { return &___CreatePointerPerfMarker_19; }
	inline void set_CreatePointerPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CreatePointerPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_CleanActivePointersPerfMarker_20() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_StaticFields, ___CleanActivePointersPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CleanActivePointersPerfMarker_20() const { return ___CleanActivePointersPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CleanActivePointersPerfMarker_20() { return &___CleanActivePointersPerfMarker_20; }
	inline void set_CleanActivePointersPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CleanActivePointersPerfMarker_20 = value;
	}
};


// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Connect>d__17
struct U3CConnectU3Ed__17_tE517B4D1550E9E96A0B9DDA1A69DF8BBE7788DB3  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Connect>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Connect>d__17::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Connect>d__17::<>4__this
	AppRemotingPlugin_tD0AE6A2AC36734677F820297A864BF86BA10E3E4 * ___U3CU3E4__this_2;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Connect>d__17::configuration
	RemotingConfiguration_t9E4F4925695DF6E6FC5870C64571A4FB0F03DC82  ___configuration_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CConnectU3Ed__17_tE517B4D1550E9E96A0B9DDA1A69DF8BBE7788DB3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CConnectU3Ed__17_tE517B4D1550E9E96A0B9DDA1A69DF8BBE7788DB3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CConnectU3Ed__17_tE517B4D1550E9E96A0B9DDA1A69DF8BBE7788DB3, ___U3CU3E4__this_2)); }
	inline AppRemotingPlugin_tD0AE6A2AC36734677F820297A864BF86BA10E3E4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AppRemotingPlugin_tD0AE6A2AC36734677F820297A864BF86BA10E3E4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AppRemotingPlugin_tD0AE6A2AC36734677F820297A864BF86BA10E3E4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_configuration_3() { return static_cast<int32_t>(offsetof(U3CConnectU3Ed__17_tE517B4D1550E9E96A0B9DDA1A69DF8BBE7788DB3, ___configuration_3)); }
	inline RemotingConfiguration_t9E4F4925695DF6E6FC5870C64571A4FB0F03DC82  get_configuration_3() const { return ___configuration_3; }
	inline RemotingConfiguration_t9E4F4925695DF6E6FC5870C64571A4FB0F03DC82 * get_address_of_configuration_3() { return &___configuration_3; }
	inline void set_configuration_3(RemotingConfiguration_t9E4F4925695DF6E6FC5870C64571A4FB0F03DC82  value)
	{
		___configuration_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___configuration_3))->___RemoteHostName_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__18
struct U3CListenU3Ed__18_t6F1E89951F9674891D69D717E25011D3B779E2F5  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__18::<>4__this
	AppRemotingPlugin_tD0AE6A2AC36734677F820297A864BF86BA10E3E4 * ___U3CU3E4__this_2;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__18::configuration
	RemotingListenConfiguration_t8BF869B703CDF957D2A45D3A352747C9BB6F91F8  ___configuration_3;
	// Microsoft.MixedReality.OpenXR.Remoting.SecureConnectionServerConfiguration Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__18::secureConnectionServerConfiguration
	SecureConnectionServerConfiguration_t72D4CCCC30A9F0BDDD180DBAC51FBB1674FA7E3B  ___secureConnectionServerConfiguration_4;
	// System.Action Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__18::onRemotingListenCompleted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onRemotingListenCompleted_5;
	// UnityEngine.WaitForSeconds Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__18::<defaultWait>5__2
	WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * ___U3CdefaultWaitU3E5__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CListenU3Ed__18_t6F1E89951F9674891D69D717E25011D3B779E2F5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CListenU3Ed__18_t6F1E89951F9674891D69D717E25011D3B779E2F5, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CListenU3Ed__18_t6F1E89951F9674891D69D717E25011D3B779E2F5, ___U3CU3E4__this_2)); }
	inline AppRemotingPlugin_tD0AE6A2AC36734677F820297A864BF86BA10E3E4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AppRemotingPlugin_tD0AE6A2AC36734677F820297A864BF86BA10E3E4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AppRemotingPlugin_tD0AE6A2AC36734677F820297A864BF86BA10E3E4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_configuration_3() { return static_cast<int32_t>(offsetof(U3CListenU3Ed__18_t6F1E89951F9674891D69D717E25011D3B779E2F5, ___configuration_3)); }
	inline RemotingListenConfiguration_t8BF869B703CDF957D2A45D3A352747C9BB6F91F8  get_configuration_3() const { return ___configuration_3; }
	inline RemotingListenConfiguration_t8BF869B703CDF957D2A45D3A352747C9BB6F91F8 * get_address_of_configuration_3() { return &___configuration_3; }
	inline void set_configuration_3(RemotingListenConfiguration_t8BF869B703CDF957D2A45D3A352747C9BB6F91F8  value)
	{
		___configuration_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___configuration_3))->___ListenInterface_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secureConnectionServerConfiguration_4() { return static_cast<int32_t>(offsetof(U3CListenU3Ed__18_t6F1E89951F9674891D69D717E25011D3B779E2F5, ___secureConnectionServerConfiguration_4)); }
	inline SecureConnectionServerConfiguration_t72D4CCCC30A9F0BDDD180DBAC51FBB1674FA7E3B  get_secureConnectionServerConfiguration_4() const { return ___secureConnectionServerConfiguration_4; }
	inline SecureConnectionServerConfiguration_t72D4CCCC30A9F0BDDD180DBAC51FBB1674FA7E3B * get_address_of_secureConnectionServerConfiguration_4() { return &___secureConnectionServerConfiguration_4; }
	inline void set_secureConnectionServerConfiguration_4(SecureConnectionServerConfiguration_t72D4CCCC30A9F0BDDD180DBAC51FBB1674FA7E3B  value)
	{
		___secureConnectionServerConfiguration_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secureConnectionServerConfiguration_4))->___CertificateStorePath_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___secureConnectionServerConfiguration_4))->___SubjectName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___secureConnectionServerConfiguration_4))->___KeyPassphrase_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___secureConnectionServerConfiguration_4))->___AuthenticationRealm_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___secureConnectionServerConfiguration_4))->___Token_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_onRemotingListenCompleted_5() { return static_cast<int32_t>(offsetof(U3CListenU3Ed__18_t6F1E89951F9674891D69D717E25011D3B779E2F5, ___onRemotingListenCompleted_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onRemotingListenCompleted_5() const { return ___onRemotingListenCompleted_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onRemotingListenCompleted_5() { return &___onRemotingListenCompleted_5; }
	inline void set_onRemotingListenCompleted_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onRemotingListenCompleted_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRemotingListenCompleted_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdefaultWaitU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CListenU3Ed__18_t6F1E89951F9674891D69D717E25011D3B779E2F5, ___U3CdefaultWaitU3E5__2_6)); }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * get_U3CdefaultWaitU3E5__2_6() const { return ___U3CdefaultWaitU3E5__2_6; }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 ** get_address_of_U3CdefaultWaitU3E5__2_6() { return &___U3CdefaultWaitU3E5__2_6; }
	inline void set_U3CdefaultWaitU3E5__2_6(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * value)
	{
		___U3CdefaultWaitU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdefaultWaitU3E5__2_6), (void*)value);
	}
};


// System.Reflection.Assembly/UnmanagedMemoryStreamForModule
struct UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44  : public UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62
{
public:
	// System.Reflection.Module System.Reflection.Assembly/UnmanagedMemoryStreamForModule::module
	Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * ___module_13;

public:
	inline static int32_t get_offset_of_module_13() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44, ___module_13)); }
	inline Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * get_module_13() const { return ___module_13; }
	inline Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 ** get_address_of_module_13() { return &___module_13; }
	inline void set_module_13(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * value)
	{
		___module_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_13), (void*)value);
	}
};


// System.Diagnostics.Tracing.EventSource/OverideEventProvider
struct OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940  : public EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589
{
public:
	// System.Diagnostics.Tracing.EventSource System.Diagnostics.Tracing.EventSource/OverideEventProvider::m_eventSource
	EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A * ___m_eventSource_13;

public:
	inline static int32_t get_offset_of_m_eventSource_13() { return static_cast<int32_t>(offsetof(OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940, ___m_eventSource_13)); }
	inline EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A * get_m_eventSource_13() const { return ___m_eventSource_13; }
	inline EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A ** get_address_of_m_eventSource_13() { return &___m_eventSource_13; }
	inline void set_m_eventSource_13(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A * value)
	{
		___m_eventSource_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventSource_13), (void*)value);
	}
};


// UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__68
struct U3CListControlLayoutsU3Ed__68_t719401DC5A920732C12A351715679BBF19212F37  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__68::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__68::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__68::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__68::basedOn
	String_t* ___basedOn_3;
	// System.String UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__68::<>3__basedOn
	String_t* ___U3CU3E3__basedOn_4;
	// UnityEngine.InputSystem.InputManager UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__68::<>4__this
	InputManager_t5408997539039671BD24A69C8792DDC543F54D04 * ___U3CU3E4__this_5;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__68::<internedBasedOn>5__2
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___U3CinternedBasedOnU3E5__2_6;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__68::<>7__wrap2
	Enumerator_t9291EEDF5E23BC170A30540F18C5FD56168057B5  ___U3CU3E7__wrap2_7;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__68::<>7__wrap3
	Enumerator_t0CFDCC96DB1D93EFCC52A373B2C5BA2CA8DA4170  ___U3CU3E7__wrap3_8;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__68::<>7__wrap4
	Enumerator_t05C8B5D88B954D1C6291A2B3C8658C92B714758C  ___U3CU3E7__wrap4_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__68_t719401DC5A920732C12A351715679BBF19212F37, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__68_t719401DC5A920732C12A351715679BBF19212F37, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__68_t719401DC5A920732C12A351715679BBF19212F37, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_basedOn_3() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__68_t719401DC5A920732C12A351715679BBF19212F37, ___basedOn_3)); }
	inline String_t* get_basedOn_3() const { return ___basedOn_3; }
	inline String_t** get_address_of_basedOn_3() { return &___basedOn_3; }
	inline void set_basedOn_3(String_t* value)
	{
		___basedOn_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___basedOn_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__basedOn_4() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__68_t719401DC5A920732C12A351715679BBF19212F37, ___U3CU3E3__basedOn_4)); }
	inline String_t* get_U3CU3E3__basedOn_4() const { return ___U3CU3E3__basedOn_4; }
	inline String_t** get_address_of_U3CU3E3__basedOn_4() { return &___U3CU3E3__basedOn_4; }
	inline void set_U3CU3E3__basedOn_4(String_t* value)
	{
		___U3CU3E3__basedOn_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__basedOn_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__68_t719401DC5A920732C12A351715679BBF19212F37, ___U3CU3E4__this_5)); }
	inline InputManager_t5408997539039671BD24A69C8792DDC543F54D04 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline InputManager_t5408997539039671BD24A69C8792DDC543F54D04 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(InputManager_t5408997539039671BD24A69C8792DDC543F54D04 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinternedBasedOnU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__68_t719401DC5A920732C12A351715679BBF19212F37, ___U3CinternedBasedOnU3E5__2_6)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_U3CinternedBasedOnU3E5__2_6() const { return ___U3CinternedBasedOnU3E5__2_6; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_U3CinternedBasedOnU3E5__2_6() { return &___U3CinternedBasedOnU3E5__2_6; }
	inline void set_U3CinternedBasedOnU3E5__2_6(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___U3CinternedBasedOnU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CinternedBasedOnU3E5__2_6))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CinternedBasedOnU3E5__2_6))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_7() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__68_t719401DC5A920732C12A351715679BBF19212F37, ___U3CU3E7__wrap2_7)); }
	inline Enumerator_t9291EEDF5E23BC170A30540F18C5FD56168057B5  get_U3CU3E7__wrap2_7() const { return ___U3CU3E7__wrap2_7; }
	inline Enumerator_t9291EEDF5E23BC170A30540F18C5FD56168057B5 * get_address_of_U3CU3E7__wrap2_7() { return &___U3CU3E7__wrap2_7; }
	inline void set_U3CU3E7__wrap2_7(Enumerator_t9291EEDF5E23BC170A30540F18C5FD56168057B5  value)
	{
		___U3CU3E7__wrap2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap2_7))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E7__wrap2_7))->___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E7__wrap2_7))->___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap2_7))->___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_8() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__68_t719401DC5A920732C12A351715679BBF19212F37, ___U3CU3E7__wrap3_8)); }
	inline Enumerator_t0CFDCC96DB1D93EFCC52A373B2C5BA2CA8DA4170  get_U3CU3E7__wrap3_8() const { return ___U3CU3E7__wrap3_8; }
	inline Enumerator_t0CFDCC96DB1D93EFCC52A373B2C5BA2CA8DA4170 * get_address_of_U3CU3E7__wrap3_8() { return &___U3CU3E7__wrap3_8; }
	inline void set_U3CU3E7__wrap3_8(Enumerator_t0CFDCC96DB1D93EFCC52A373B2C5BA2CA8DA4170  value)
	{
		___U3CU3E7__wrap3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap3_8))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E7__wrap3_8))->___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E7__wrap3_8))->___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap3_8))->___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap4_9() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__68_t719401DC5A920732C12A351715679BBF19212F37, ___U3CU3E7__wrap4_9)); }
	inline Enumerator_t05C8B5D88B954D1C6291A2B3C8658C92B714758C  get_U3CU3E7__wrap4_9() const { return ___U3CU3E7__wrap4_9; }
	inline Enumerator_t05C8B5D88B954D1C6291A2B3C8658C92B714758C * get_address_of_U3CU3E7__wrap4_9() { return &___U3CU3E7__wrap4_9; }
	inline void set_U3CU3E7__wrap4_9(Enumerator_t05C8B5D88B954D1C6291A2B3C8658C92B714758C  value)
	{
		___U3CU3E7__wrap4_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap4_9))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E7__wrap4_9))->___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E7__wrap4_9))->___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap4_9))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.IO.NetFxToWinRtStreamAdapter/InputOutputStream
struct InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// System.IO.NetFxToWinRtStreamAdapter/InputStream
struct InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// System.IO.NetFxToWinRtStreamAdapter/OutputStream
struct OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem
struct BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A  : public BaseCoreSystem_tD92EF2BE9E8955487A46277A7C1C792EEAC43652
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<IsXRDevicePresent>k__BackingField
	bool ___U3CIsXRDevicePresentU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<BoundaryProfile>k__BackingField
	MixedRealityBoundaryVisualizationProfile_tE067B54778DDA7D645CAE679F109AE611397A351 * ___U3CBoundaryProfileU3Ek__BackingField_22;
	// Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryEventData
	BoundaryEventData_tF3191826FD556ED99C56A8E197F3A32143415FA4 * ___boundaryEventData_23;
	// System.String Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_24;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_26;
	// System.String Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_27;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryVisualizationParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___boundaryVisualizationParent_30;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::ignoreRaycastLayerValue
	int32_t ___ignoreRaycastLayerValue_31;
	// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryVisualizationProfile
	MixedRealityBoundaryVisualizationProfile_tE067B54778DDA7D645CAE679F109AE611397A351 * ___boundaryVisualizationProfile_32;
	// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<Scale>k__BackingField
	int32_t ___U3CScaleU3Ek__BackingField_33;
	// System.Single Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<BoundaryHeight>k__BackingField
	float ___U3CBoundaryHeightU3Ek__BackingField_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showFloor
	bool ___showFloor_35;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showPlayArea
	bool ___showPlayArea_36;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::floorPhysicsLayer
	int32_t ___floorPhysicsLayer_37;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showTrackedArea
	bool ___showTrackedArea_38;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::playAreaPhysicsLayer
	int32_t ___playAreaPhysicsLayer_39;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showBoundaryWalls
	bool ___showBoundaryWalls_40;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::trackedAreaPhysicsLayer
	int32_t ___trackedAreaPhysicsLayer_41;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showCeiling
	bool ___showCeiling_42;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryWallsPhysicsLayer
	int32_t ___boundaryWallsPhysicsLayer_43;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::ceilingPhysicsLayer
	int32_t ___ceilingPhysicsLayer_44;
	// Microsoft.MixedReality.Toolkit.Boundary.Edge[] Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<Bounds>k__BackingField
	EdgeU5BU5D_t11155979B4B93616C99DE0339151AC8B100D3D5D* ___U3CBoundsU3Ek__BackingField_45;
	// System.Nullable`1<System.Single> Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<FloorHeight>k__BackingField
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CFloorHeightU3Ek__BackingField_46;
	// Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::RectangularBounds
	InscribedRectangle_t2F2669C9A98C3392B287F0A382063A71E017C72C * ___RectangularBounds_47;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentFloorObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentFloorObject_48;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentPlayAreaObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentPlayAreaObject_49;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentTrackedAreaObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentTrackedAreaObject_50;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentBoundaryWallObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentBoundaryWallObject_51;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentCeilingObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentCeilingObject_52;

public:
	inline static int32_t get_offset_of_U3CIsXRDevicePresentU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___U3CIsXRDevicePresentU3Ek__BackingField_21)); }
	inline bool get_U3CIsXRDevicePresentU3Ek__BackingField_21() const { return ___U3CIsXRDevicePresentU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CIsXRDevicePresentU3Ek__BackingField_21() { return &___U3CIsXRDevicePresentU3Ek__BackingField_21; }
	inline void set_U3CIsXRDevicePresentU3Ek__BackingField_21(bool value)
	{
		___U3CIsXRDevicePresentU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CBoundaryProfileU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___U3CBoundaryProfileU3Ek__BackingField_22)); }
	inline MixedRealityBoundaryVisualizationProfile_tE067B54778DDA7D645CAE679F109AE611397A351 * get_U3CBoundaryProfileU3Ek__BackingField_22() const { return ___U3CBoundaryProfileU3Ek__BackingField_22; }
	inline MixedRealityBoundaryVisualizationProfile_tE067B54778DDA7D645CAE679F109AE611397A351 ** get_address_of_U3CBoundaryProfileU3Ek__BackingField_22() { return &___U3CBoundaryProfileU3Ek__BackingField_22; }
	inline void set_U3CBoundaryProfileU3Ek__BackingField_22(MixedRealityBoundaryVisualizationProfile_tE067B54778DDA7D645CAE679F109AE611397A351 * value)
	{
		___U3CBoundaryProfileU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBoundaryProfileU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryEventData_23() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___boundaryEventData_23)); }
	inline BoundaryEventData_tF3191826FD556ED99C56A8E197F3A32143415FA4 * get_boundaryEventData_23() const { return ___boundaryEventData_23; }
	inline BoundaryEventData_tF3191826FD556ED99C56A8E197F3A32143415FA4 ** get_address_of_boundaryEventData_23() { return &___boundaryEventData_23; }
	inline void set_boundaryEventData_23(BoundaryEventData_tF3191826FD556ED99C56A8E197F3A32143415FA4 * value)
	{
		___boundaryEventData_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryEventData_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___U3CNameU3Ek__BackingField_24)); }
	inline String_t* get_U3CNameU3Ek__BackingField_24() const { return ___U3CNameU3Ek__BackingField_24; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_24() { return &___U3CNameU3Ek__BackingField_24; }
	inline void set_U3CNameU3Ek__BackingField_24(String_t* value)
	{
		___U3CNameU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___U3CSourceIdU3Ek__BackingField_26)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_26() const { return ___U3CSourceIdU3Ek__BackingField_26; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_26() { return &___U3CSourceIdU3Ek__BackingField_26; }
	inline void set_U3CSourceIdU3Ek__BackingField_26(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___U3CSourceNameU3Ek__BackingField_27)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_27() const { return ___U3CSourceNameU3Ek__BackingField_27; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_27() { return &___U3CSourceNameU3Ek__BackingField_27; }
	inline void set_U3CSourceNameU3Ek__BackingField_27(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryVisualizationParent_30() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___boundaryVisualizationParent_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_boundaryVisualizationParent_30() const { return ___boundaryVisualizationParent_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_boundaryVisualizationParent_30() { return &___boundaryVisualizationParent_30; }
	inline void set_boundaryVisualizationParent_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___boundaryVisualizationParent_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryVisualizationParent_30), (void*)value);
	}

	inline static int32_t get_offset_of_ignoreRaycastLayerValue_31() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___ignoreRaycastLayerValue_31)); }
	inline int32_t get_ignoreRaycastLayerValue_31() const { return ___ignoreRaycastLayerValue_31; }
	inline int32_t* get_address_of_ignoreRaycastLayerValue_31() { return &___ignoreRaycastLayerValue_31; }
	inline void set_ignoreRaycastLayerValue_31(int32_t value)
	{
		___ignoreRaycastLayerValue_31 = value;
	}

	inline static int32_t get_offset_of_boundaryVisualizationProfile_32() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___boundaryVisualizationProfile_32)); }
	inline MixedRealityBoundaryVisualizationProfile_tE067B54778DDA7D645CAE679F109AE611397A351 * get_boundaryVisualizationProfile_32() const { return ___boundaryVisualizationProfile_32; }
	inline MixedRealityBoundaryVisualizationProfile_tE067B54778DDA7D645CAE679F109AE611397A351 ** get_address_of_boundaryVisualizationProfile_32() { return &___boundaryVisualizationProfile_32; }
	inline void set_boundaryVisualizationProfile_32(MixedRealityBoundaryVisualizationProfile_tE067B54778DDA7D645CAE679F109AE611397A351 * value)
	{
		___boundaryVisualizationProfile_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryVisualizationProfile_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CScaleU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___U3CScaleU3Ek__BackingField_33)); }
	inline int32_t get_U3CScaleU3Ek__BackingField_33() const { return ___U3CScaleU3Ek__BackingField_33; }
	inline int32_t* get_address_of_U3CScaleU3Ek__BackingField_33() { return &___U3CScaleU3Ek__BackingField_33; }
	inline void set_U3CScaleU3Ek__BackingField_33(int32_t value)
	{
		___U3CScaleU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CBoundaryHeightU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___U3CBoundaryHeightU3Ek__BackingField_34)); }
	inline float get_U3CBoundaryHeightU3Ek__BackingField_34() const { return ___U3CBoundaryHeightU3Ek__BackingField_34; }
	inline float* get_address_of_U3CBoundaryHeightU3Ek__BackingField_34() { return &___U3CBoundaryHeightU3Ek__BackingField_34; }
	inline void set_U3CBoundaryHeightU3Ek__BackingField_34(float value)
	{
		___U3CBoundaryHeightU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_showFloor_35() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___showFloor_35)); }
	inline bool get_showFloor_35() const { return ___showFloor_35; }
	inline bool* get_address_of_showFloor_35() { return &___showFloor_35; }
	inline void set_showFloor_35(bool value)
	{
		___showFloor_35 = value;
	}

	inline static int32_t get_offset_of_showPlayArea_36() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___showPlayArea_36)); }
	inline bool get_showPlayArea_36() const { return ___showPlayArea_36; }
	inline bool* get_address_of_showPlayArea_36() { return &___showPlayArea_36; }
	inline void set_showPlayArea_36(bool value)
	{
		___showPlayArea_36 = value;
	}

	inline static int32_t get_offset_of_floorPhysicsLayer_37() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___floorPhysicsLayer_37)); }
	inline int32_t get_floorPhysicsLayer_37() const { return ___floorPhysicsLayer_37; }
	inline int32_t* get_address_of_floorPhysicsLayer_37() { return &___floorPhysicsLayer_37; }
	inline void set_floorPhysicsLayer_37(int32_t value)
	{
		___floorPhysicsLayer_37 = value;
	}

	inline static int32_t get_offset_of_showTrackedArea_38() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___showTrackedArea_38)); }
	inline bool get_showTrackedArea_38() const { return ___showTrackedArea_38; }
	inline bool* get_address_of_showTrackedArea_38() { return &___showTrackedArea_38; }
	inline void set_showTrackedArea_38(bool value)
	{
		___showTrackedArea_38 = value;
	}

	inline static int32_t get_offset_of_playAreaPhysicsLayer_39() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___playAreaPhysicsLayer_39)); }
	inline int32_t get_playAreaPhysicsLayer_39() const { return ___playAreaPhysicsLayer_39; }
	inline int32_t* get_address_of_playAreaPhysicsLayer_39() { return &___playAreaPhysicsLayer_39; }
	inline void set_playAreaPhysicsLayer_39(int32_t value)
	{
		___playAreaPhysicsLayer_39 = value;
	}

	inline static int32_t get_offset_of_showBoundaryWalls_40() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___showBoundaryWalls_40)); }
	inline bool get_showBoundaryWalls_40() const { return ___showBoundaryWalls_40; }
	inline bool* get_address_of_showBoundaryWalls_40() { return &___showBoundaryWalls_40; }
	inline void set_showBoundaryWalls_40(bool value)
	{
		___showBoundaryWalls_40 = value;
	}

	inline static int32_t get_offset_of_trackedAreaPhysicsLayer_41() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___trackedAreaPhysicsLayer_41)); }
	inline int32_t get_trackedAreaPhysicsLayer_41() const { return ___trackedAreaPhysicsLayer_41; }
	inline int32_t* get_address_of_trackedAreaPhysicsLayer_41() { return &___trackedAreaPhysicsLayer_41; }
	inline void set_trackedAreaPhysicsLayer_41(int32_t value)
	{
		___trackedAreaPhysicsLayer_41 = value;
	}

	inline static int32_t get_offset_of_showCeiling_42() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___showCeiling_42)); }
	inline bool get_showCeiling_42() const { return ___showCeiling_42; }
	inline bool* get_address_of_showCeiling_42() { return &___showCeiling_42; }
	inline void set_showCeiling_42(bool value)
	{
		___showCeiling_42 = value;
	}

	inline static int32_t get_offset_of_boundaryWallsPhysicsLayer_43() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___boundaryWallsPhysicsLayer_43)); }
	inline int32_t get_boundaryWallsPhysicsLayer_43() const { return ___boundaryWallsPhysicsLayer_43; }
	inline int32_t* get_address_of_boundaryWallsPhysicsLayer_43() { return &___boundaryWallsPhysicsLayer_43; }
	inline void set_boundaryWallsPhysicsLayer_43(int32_t value)
	{
		___boundaryWallsPhysicsLayer_43 = value;
	}

	inline static int32_t get_offset_of_ceilingPhysicsLayer_44() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___ceilingPhysicsLayer_44)); }
	inline int32_t get_ceilingPhysicsLayer_44() const { return ___ceilingPhysicsLayer_44; }
	inline int32_t* get_address_of_ceilingPhysicsLayer_44() { return &___ceilingPhysicsLayer_44; }
	inline void set_ceilingPhysicsLayer_44(int32_t value)
	{
		___ceilingPhysicsLayer_44 = value;
	}

	inline static int32_t get_offset_of_U3CBoundsU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___U3CBoundsU3Ek__BackingField_45)); }
	inline EdgeU5BU5D_t11155979B4B93616C99DE0339151AC8B100D3D5D* get_U3CBoundsU3Ek__BackingField_45() const { return ___U3CBoundsU3Ek__BackingField_45; }
	inline EdgeU5BU5D_t11155979B4B93616C99DE0339151AC8B100D3D5D** get_address_of_U3CBoundsU3Ek__BackingField_45() { return &___U3CBoundsU3Ek__BackingField_45; }
	inline void set_U3CBoundsU3Ek__BackingField_45(EdgeU5BU5D_t11155979B4B93616C99DE0339151AC8B100D3D5D* value)
	{
		___U3CBoundsU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBoundsU3Ek__BackingField_45), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFloorHeightU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___U3CFloorHeightU3Ek__BackingField_46)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_U3CFloorHeightU3Ek__BackingField_46() const { return ___U3CFloorHeightU3Ek__BackingField_46; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_U3CFloorHeightU3Ek__BackingField_46() { return &___U3CFloorHeightU3Ek__BackingField_46; }
	inline void set_U3CFloorHeightU3Ek__BackingField_46(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___U3CFloorHeightU3Ek__BackingField_46 = value;
	}

	inline static int32_t get_offset_of_RectangularBounds_47() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___RectangularBounds_47)); }
	inline InscribedRectangle_t2F2669C9A98C3392B287F0A382063A71E017C72C * get_RectangularBounds_47() const { return ___RectangularBounds_47; }
	inline InscribedRectangle_t2F2669C9A98C3392B287F0A382063A71E017C72C ** get_address_of_RectangularBounds_47() { return &___RectangularBounds_47; }
	inline void set_RectangularBounds_47(InscribedRectangle_t2F2669C9A98C3392B287F0A382063A71E017C72C * value)
	{
		___RectangularBounds_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RectangularBounds_47), (void*)value);
	}

	inline static int32_t get_offset_of_currentFloorObject_48() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___currentFloorObject_48)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentFloorObject_48() const { return ___currentFloorObject_48; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentFloorObject_48() { return &___currentFloorObject_48; }
	inline void set_currentFloorObject_48(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentFloorObject_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFloorObject_48), (void*)value);
	}

	inline static int32_t get_offset_of_currentPlayAreaObject_49() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___currentPlayAreaObject_49)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentPlayAreaObject_49() const { return ___currentPlayAreaObject_49; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentPlayAreaObject_49() { return &___currentPlayAreaObject_49; }
	inline void set_currentPlayAreaObject_49(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentPlayAreaObject_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentPlayAreaObject_49), (void*)value);
	}

	inline static int32_t get_offset_of_currentTrackedAreaObject_50() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___currentTrackedAreaObject_50)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentTrackedAreaObject_50() const { return ___currentTrackedAreaObject_50; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentTrackedAreaObject_50() { return &___currentTrackedAreaObject_50; }
	inline void set_currentTrackedAreaObject_50(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentTrackedAreaObject_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentTrackedAreaObject_50), (void*)value);
	}

	inline static int32_t get_offset_of_currentBoundaryWallObject_51() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___currentBoundaryWallObject_51)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentBoundaryWallObject_51() const { return ___currentBoundaryWallObject_51; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentBoundaryWallObject_51() { return &___currentBoundaryWallObject_51; }
	inline void set_currentBoundaryWallObject_51(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentBoundaryWallObject_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentBoundaryWallObject_51), (void*)value);
	}

	inline static int32_t get_offset_of_currentCeilingObject_52() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A, ___currentCeilingObject_52)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentCeilingObject_52() const { return ___currentCeilingObject_52; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentCeilingObject_52() { return &___currentCeilingObject_52; }
	inline void set_currentCeilingObject_52(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentCeilingObject_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentCeilingObject_52), (void*)value);
	}
};

struct BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundaryHandler> Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::OnVisualizationChanged
	EventFunction_1_t355F223C9D21277D911E4B55A91C27A9FDAE61AF * ___OnVisualizationChanged_25;

public:
	inline static int32_t get_offset_of_OnVisualizationChanged_25() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A_StaticFields, ___OnVisualizationChanged_25)); }
	inline EventFunction_1_t355F223C9D21277D911E4B55A91C27A9FDAE61AF * get_OnVisualizationChanged_25() const { return ___OnVisualizationChanged_25; }
	inline EventFunction_1_t355F223C9D21277D911E4B55A91C27A9FDAE61AF ** get_address_of_OnVisualizationChanged_25() { return &___OnVisualizationChanged_25; }
	inline void set_OnVisualizationChanged_25(EventFunction_1_t355F223C9D21277D911E4B55A91C27A9FDAE61AF * value)
	{
		___OnVisualizationChanged_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVisualizationChanged_25), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD  : public BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevices_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevicesSubset
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevicesSubset_23;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::lastInputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___lastInputDevices_24;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::<DesiredInputCharacteristics>k__BackingField
	List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_inputDevices_22() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD, ___inputDevices_22)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_inputDevices_22() const { return ___inputDevices_22; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_inputDevices_22() { return &___inputDevices_22; }
	inline void set_inputDevices_22(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___inputDevices_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevices_22), (void*)value);
	}

	inline static int32_t get_offset_of_inputDevicesSubset_23() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD, ___inputDevicesSubset_23)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_inputDevicesSubset_23() const { return ___inputDevicesSubset_23; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_inputDevicesSubset_23() { return &___inputDevicesSubset_23; }
	inline void set_inputDevicesSubset_23(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___inputDevicesSubset_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevicesSubset_23), (void*)value);
	}

	inline static int32_t get_offset_of_lastInputDevices_24() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD, ___lastInputDevices_24)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_lastInputDevices_24() const { return ___lastInputDevices_24; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_lastInputDevices_24() { return &___lastInputDevices_24; }
	inline void set_lastInputDevices_24(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___lastInputDevices_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastInputDevices_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD, ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25)); }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * get_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() const { return ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25; }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C ** get_address_of_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() { return &___U3CDesiredInputCharacteristicsU3Ek__BackingField_25; }
	inline void set_U3CDesiredInputCharacteristicsU3Ek__BackingField_25(List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * value)
	{
		___U3CDesiredInputCharacteristicsU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDesiredInputCharacteristicsU3Ek__BackingField_25), (void*)value);
	}
};

struct XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::ActiveControllers
	Dictionary_2_tA0FD2AFAAFE4AEDFD84AEE2B7DA1E4180E174DBF * ___ActiveControllers_21;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetOrAddControllerPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveControllerPerfMarker_28;

public:
	inline static int32_t get_offset_of_ActiveControllers_21() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_StaticFields, ___ActiveControllers_21)); }
	inline Dictionary_2_tA0FD2AFAAFE4AEDFD84AEE2B7DA1E4180E174DBF * get_ActiveControllers_21() const { return ___ActiveControllers_21; }
	inline Dictionary_2_tA0FD2AFAAFE4AEDFD84AEE2B7DA1E4180E174DBF ** get_address_of_ActiveControllers_21() { return &___ActiveControllers_21; }
	inline void set_ActiveControllers_21(Dictionary_2_tA0FD2AFAAFE4AEDFD84AEE2B7DA1E4180E174DBF * value)
	{
		___ActiveControllers_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveControllers_21), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_26() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_StaticFields, ___UpdatePerfMarker_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_26() const { return ___UpdatePerfMarker_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_26() { return &___UpdatePerfMarker_26; }
	inline void set_UpdatePerfMarker_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_GetOrAddControllerPerfMarker_27() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_StaticFields, ___GetOrAddControllerPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetOrAddControllerPerfMarker_27() const { return ___GetOrAddControllerPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetOrAddControllerPerfMarker_27() { return &___GetOrAddControllerPerfMarker_27; }
	inline void set_GetOrAddControllerPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetOrAddControllerPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_RemoveControllerPerfMarker_28() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_StaticFields, ___RemoveControllerPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveControllerPerfMarker_28() const { return ___RemoveControllerPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveControllerPerfMarker_28() { return &___RemoveControllerPerfMarker_28; }
	inline void set_RemoveControllerPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveControllerPerfMarker_28 = value;
	}
};


// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ActionToRebind
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_ActionToRebind_1;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingMask
	Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___m_BindingMask_2;
	// System.Type UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ControlType
	Type_t * ___m_ControlType_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExpectedLayout
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_ExpectedLayout_4;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePathCount
	int32_t ___m_IncludePathCount_5;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePaths
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_IncludePaths_6;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePathCount
	int32_t ___m_ExcludePathCount_7;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePaths
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_ExcludePaths_8;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_TargetBindingIndex
	int32_t ___m_TargetBindingIndex_9;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingGroupForNewBinding
	String_t* ___m_BindingGroupForNewBinding_10;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_CancelBinding
	String_t* ___m_CancelBinding_11;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_MagnitudeThreshold
	float ___m_MagnitudeThreshold_12;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Scores
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Scores_13;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Magnitudes
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Magnitudes_14;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LastMatchTime
	double ___m_LastMatchTime_15;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartTime
	double ___m_StartTime_16;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Timeout
	float ___m_Timeout_17;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_WaitSecondsAfterMatch
	float ___m_WaitSecondsAfterMatch_18;
	// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Candidates
	InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96  ___m_Candidates_19;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComplete
	Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * ___m_OnComplete_20;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnCancel
	Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * ___m_OnCancel_21;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnPotentialMatch
	Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * ___m_OnPotentialMatch_22;
	// System.Func`2<UnityEngine.InputSystem.InputControl,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnGeneratePath
	Func_2_t256D379297E9972A2E59B56A5D0276E9ED789181 * ___m_OnGeneratePath_23;
	// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComputeScore
	Func_3_tB2180AFDCB89ECEDE3ED8A30CA81B8E923416ADC * ___m_OnComputeScore_24;
	// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnApplyBinding
	Action_2_t1C13FAA0BE04A7EFAC5DDD87B23307535BE59B56 * ___m_OnApplyBinding_25;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnEventDelegate
	Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199 * ___m_OnEventDelegate_26;
	// System.Action UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnAfterUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnAfterUpdateDelegate_27;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LayoutCache
	Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67  ___m_LayoutCache_28;
	// System.Text.StringBuilder UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_PathBuilder
	StringBuilder_t * ___m_PathBuilder_29;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Flags
	int32_t ___m_Flags_30;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartingActuationsCount
	int32_t ___m_StartingActuationsCount_31;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StaringActuationMagnitudes
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_StaringActuationMagnitudes_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartingActuationControls
	InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* ___m_StartingActuationControls_33;

public:
	inline static int32_t get_offset_of_m_ActionToRebind_1() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_ActionToRebind_1)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_ActionToRebind_1() const { return ___m_ActionToRebind_1; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_ActionToRebind_1() { return &___m_ActionToRebind_1; }
	inline void set_m_ActionToRebind_1(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_ActionToRebind_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionToRebind_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_2() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_BindingMask_2)); }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  get_m_BindingMask_2() const { return ___m_BindingMask_2; }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 * get_address_of_m_BindingMask_2() { return &___m_BindingMask_2; }
	inline void set_m_BindingMask_2(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  value)
	{
		___m_BindingMask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ControlType_3() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_ControlType_3)); }
	inline Type_t * get_m_ControlType_3() const { return ___m_ControlType_3; }
	inline Type_t ** get_address_of_m_ControlType_3() { return &___m_ControlType_3; }
	inline void set_m_ControlType_3(Type_t * value)
	{
		___m_ControlType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlType_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExpectedLayout_4() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_ExpectedLayout_4)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_ExpectedLayout_4() const { return ___m_ExpectedLayout_4; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_ExpectedLayout_4() { return &___m_ExpectedLayout_4; }
	inline void set_m_ExpectedLayout_4(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_ExpectedLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ExpectedLayout_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ExpectedLayout_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_IncludePathCount_5() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_IncludePathCount_5)); }
	inline int32_t get_m_IncludePathCount_5() const { return ___m_IncludePathCount_5; }
	inline int32_t* get_address_of_m_IncludePathCount_5() { return &___m_IncludePathCount_5; }
	inline void set_m_IncludePathCount_5(int32_t value)
	{
		___m_IncludePathCount_5 = value;
	}

	inline static int32_t get_offset_of_m_IncludePaths_6() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_IncludePaths_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_IncludePaths_6() const { return ___m_IncludePaths_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_IncludePaths_6() { return &___m_IncludePaths_6; }
	inline void set_m_IncludePaths_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_IncludePaths_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_IncludePaths_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExcludePathCount_7() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_ExcludePathCount_7)); }
	inline int32_t get_m_ExcludePathCount_7() const { return ___m_ExcludePathCount_7; }
	inline int32_t* get_address_of_m_ExcludePathCount_7() { return &___m_ExcludePathCount_7; }
	inline void set_m_ExcludePathCount_7(int32_t value)
	{
		___m_ExcludePathCount_7 = value;
	}

	inline static int32_t get_offset_of_m_ExcludePaths_8() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_ExcludePaths_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_ExcludePaths_8() const { return ___m_ExcludePaths_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_ExcludePaths_8() { return &___m_ExcludePaths_8; }
	inline void set_m_ExcludePaths_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_ExcludePaths_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExcludePaths_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_TargetBindingIndex_9() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_TargetBindingIndex_9)); }
	inline int32_t get_m_TargetBindingIndex_9() const { return ___m_TargetBindingIndex_9; }
	inline int32_t* get_address_of_m_TargetBindingIndex_9() { return &___m_TargetBindingIndex_9; }
	inline void set_m_TargetBindingIndex_9(int32_t value)
	{
		___m_TargetBindingIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_BindingGroupForNewBinding_10() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_BindingGroupForNewBinding_10)); }
	inline String_t* get_m_BindingGroupForNewBinding_10() const { return ___m_BindingGroupForNewBinding_10; }
	inline String_t** get_address_of_m_BindingGroupForNewBinding_10() { return &___m_BindingGroupForNewBinding_10; }
	inline void set_m_BindingGroupForNewBinding_10(String_t* value)
	{
		___m_BindingGroupForNewBinding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingGroupForNewBinding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_CancelBinding_11() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_CancelBinding_11)); }
	inline String_t* get_m_CancelBinding_11() const { return ___m_CancelBinding_11; }
	inline String_t** get_address_of_m_CancelBinding_11() { return &___m_CancelBinding_11; }
	inline void set_m_CancelBinding_11(String_t* value)
	{
		___m_CancelBinding_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CancelBinding_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_MagnitudeThreshold_12() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_MagnitudeThreshold_12)); }
	inline float get_m_MagnitudeThreshold_12() const { return ___m_MagnitudeThreshold_12; }
	inline float* get_address_of_m_MagnitudeThreshold_12() { return &___m_MagnitudeThreshold_12; }
	inline void set_m_MagnitudeThreshold_12(float value)
	{
		___m_MagnitudeThreshold_12 = value;
	}

	inline static int32_t get_offset_of_m_Scores_13() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_Scores_13)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Scores_13() const { return ___m_Scores_13; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Scores_13() { return &___m_Scores_13; }
	inline void set_m_Scores_13(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Scores_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scores_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Magnitudes_14() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_Magnitudes_14)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Magnitudes_14() const { return ___m_Magnitudes_14; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Magnitudes_14() { return &___m_Magnitudes_14; }
	inline void set_m_Magnitudes_14(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Magnitudes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Magnitudes_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastMatchTime_15() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_LastMatchTime_15)); }
	inline double get_m_LastMatchTime_15() const { return ___m_LastMatchTime_15; }
	inline double* get_address_of_m_LastMatchTime_15() { return &___m_LastMatchTime_15; }
	inline void set_m_LastMatchTime_15(double value)
	{
		___m_LastMatchTime_15 = value;
	}

	inline static int32_t get_offset_of_m_StartTime_16() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_StartTime_16)); }
	inline double get_m_StartTime_16() const { return ___m_StartTime_16; }
	inline double* get_address_of_m_StartTime_16() { return &___m_StartTime_16; }
	inline void set_m_StartTime_16(double value)
	{
		___m_StartTime_16 = value;
	}

	inline static int32_t get_offset_of_m_Timeout_17() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_Timeout_17)); }
	inline float get_m_Timeout_17() const { return ___m_Timeout_17; }
	inline float* get_address_of_m_Timeout_17() { return &___m_Timeout_17; }
	inline void set_m_Timeout_17(float value)
	{
		___m_Timeout_17 = value;
	}

	inline static int32_t get_offset_of_m_WaitSecondsAfterMatch_18() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_WaitSecondsAfterMatch_18)); }
	inline float get_m_WaitSecondsAfterMatch_18() const { return ___m_WaitSecondsAfterMatch_18; }
	inline float* get_address_of_m_WaitSecondsAfterMatch_18() { return &___m_WaitSecondsAfterMatch_18; }
	inline void set_m_WaitSecondsAfterMatch_18(float value)
	{
		___m_WaitSecondsAfterMatch_18 = value;
	}

	inline static int32_t get_offset_of_m_Candidates_19() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_Candidates_19)); }
	inline InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96  get_m_Candidates_19() const { return ___m_Candidates_19; }
	inline InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96 * get_address_of_m_Candidates_19() { return &___m_Candidates_19; }
	inline void set_m_Candidates_19(InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96  value)
	{
		___m_Candidates_19 = value;
	}

	inline static int32_t get_offset_of_m_OnComplete_20() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnComplete_20)); }
	inline Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * get_m_OnComplete_20() const { return ___m_OnComplete_20; }
	inline Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 ** get_address_of_m_OnComplete_20() { return &___m_OnComplete_20; }
	inline void set_m_OnComplete_20(Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * value)
	{
		___m_OnComplete_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnComplete_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnCancel_21() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnCancel_21)); }
	inline Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * get_m_OnCancel_21() const { return ___m_OnCancel_21; }
	inline Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 ** get_address_of_m_OnCancel_21() { return &___m_OnCancel_21; }
	inline void set_m_OnCancel_21(Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * value)
	{
		___m_OnCancel_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCancel_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnPotentialMatch_22() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnPotentialMatch_22)); }
	inline Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * get_m_OnPotentialMatch_22() const { return ___m_OnPotentialMatch_22; }
	inline Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 ** get_address_of_m_OnPotentialMatch_22() { return &___m_OnPotentialMatch_22; }
	inline void set_m_OnPotentialMatch_22(Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * value)
	{
		___m_OnPotentialMatch_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnPotentialMatch_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnGeneratePath_23() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnGeneratePath_23)); }
	inline Func_2_t256D379297E9972A2E59B56A5D0276E9ED789181 * get_m_OnGeneratePath_23() const { return ___m_OnGeneratePath_23; }
	inline Func_2_t256D379297E9972A2E59B56A5D0276E9ED789181 ** get_address_of_m_OnGeneratePath_23() { return &___m_OnGeneratePath_23; }
	inline void set_m_OnGeneratePath_23(Func_2_t256D379297E9972A2E59B56A5D0276E9ED789181 * value)
	{
		___m_OnGeneratePath_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnGeneratePath_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnComputeScore_24() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnComputeScore_24)); }
	inline Func_3_tB2180AFDCB89ECEDE3ED8A30CA81B8E923416ADC * get_m_OnComputeScore_24() const { return ___m_OnComputeScore_24; }
	inline Func_3_tB2180AFDCB89ECEDE3ED8A30CA81B8E923416ADC ** get_address_of_m_OnComputeScore_24() { return &___m_OnComputeScore_24; }
	inline void set_m_OnComputeScore_24(Func_3_tB2180AFDCB89ECEDE3ED8A30CA81B8E923416ADC * value)
	{
		___m_OnComputeScore_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnComputeScore_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnApplyBinding_25() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnApplyBinding_25)); }
	inline Action_2_t1C13FAA0BE04A7EFAC5DDD87B23307535BE59B56 * get_m_OnApplyBinding_25() const { return ___m_OnApplyBinding_25; }
	inline Action_2_t1C13FAA0BE04A7EFAC5DDD87B23307535BE59B56 ** get_address_of_m_OnApplyBinding_25() { return &___m_OnApplyBinding_25; }
	inline void set_m_OnApplyBinding_25(Action_2_t1C13FAA0BE04A7EFAC5DDD87B23307535BE59B56 * value)
	{
		___m_OnApplyBinding_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnApplyBinding_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnEventDelegate_26() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnEventDelegate_26)); }
	inline Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199 * get_m_OnEventDelegate_26() const { return ___m_OnEventDelegate_26; }
	inline Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199 ** get_address_of_m_OnEventDelegate_26() { return &___m_OnEventDelegate_26; }
	inline void set_m_OnEventDelegate_26(Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199 * value)
	{
		___m_OnEventDelegate_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEventDelegate_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateDelegate_27() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnAfterUpdateDelegate_27)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnAfterUpdateDelegate_27() const { return ___m_OnAfterUpdateDelegate_27; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnAfterUpdateDelegate_27() { return &___m_OnAfterUpdateDelegate_27; }
	inline void set_m_OnAfterUpdateDelegate_27(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnAfterUpdateDelegate_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnAfterUpdateDelegate_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_LayoutCache_28() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_LayoutCache_28)); }
	inline Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67  get_m_LayoutCache_28() const { return ___m_LayoutCache_28; }
	inline Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67 * get_address_of_m_LayoutCache_28() { return &___m_LayoutCache_28; }
	inline void set_m_LayoutCache_28(Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67  value)
	{
		___m_LayoutCache_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_LayoutCache_28))->___table_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_PathBuilder_29() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_PathBuilder_29)); }
	inline StringBuilder_t * get_m_PathBuilder_29() const { return ___m_PathBuilder_29; }
	inline StringBuilder_t ** get_address_of_m_PathBuilder_29() { return &___m_PathBuilder_29; }
	inline void set_m_PathBuilder_29(StringBuilder_t * value)
	{
		___m_PathBuilder_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PathBuilder_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_30() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_Flags_30)); }
	inline int32_t get_m_Flags_30() const { return ___m_Flags_30; }
	inline int32_t* get_address_of_m_Flags_30() { return &___m_Flags_30; }
	inline void set_m_Flags_30(int32_t value)
	{
		___m_Flags_30 = value;
	}

	inline static int32_t get_offset_of_m_StartingActuationsCount_31() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_StartingActuationsCount_31)); }
	inline int32_t get_m_StartingActuationsCount_31() const { return ___m_StartingActuationsCount_31; }
	inline int32_t* get_address_of_m_StartingActuationsCount_31() { return &___m_StartingActuationsCount_31; }
	inline void set_m_StartingActuationsCount_31(int32_t value)
	{
		___m_StartingActuationsCount_31 = value;
	}

	inline static int32_t get_offset_of_m_StaringActuationMagnitudes_32() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_StaringActuationMagnitudes_32)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_StaringActuationMagnitudes_32() const { return ___m_StaringActuationMagnitudes_32; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_StaringActuationMagnitudes_32() { return &___m_StaringActuationMagnitudes_32; }
	inline void set_m_StaringActuationMagnitudes_32(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_StaringActuationMagnitudes_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StaringActuationMagnitudes_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartingActuationControls_33() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_StartingActuationControls_33)); }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* get_m_StartingActuationControls_33() const { return ___m_StartingActuationControls_33; }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67** get_address_of_m_StartingActuationControls_33() { return &___m_StartingActuationControls_33; }
	inline void set_m_StartingActuationControls_33(InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* value)
	{
		___m_StartingActuationControls_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingActuationControls_33), (void*)value);
	}
};


// UnityEngine.InputSystem.InputControlScheme/MatchResult
struct MatchResult_tBBF7876502D38E35313F6AED6D9ADC1BD7C15D10 
{
public:
	// UnityEngine.InputSystem.InputControlScheme/MatchResult/Result UnityEngine.InputSystem.InputControlScheme/MatchResult::m_Result
	int32_t ___m_Result_0;
	// System.Single UnityEngine.InputSystem.InputControlScheme/MatchResult::m_Score
	float ___m_Score_1;
	// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.InputControlScheme/MatchResult::m_Devices
	InputControlList_1_tFC847CF52966360602E483824081B85085506801  ___m_Devices_2;
	// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputControlScheme/MatchResult::m_Controls
	InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96  ___m_Controls_3;
	// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[] UnityEngine.InputSystem.InputControlScheme/MatchResult::m_Requirements
	DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045* ___m_Requirements_4;

public:
	inline static int32_t get_offset_of_m_Result_0() { return static_cast<int32_t>(offsetof(MatchResult_tBBF7876502D38E35313F6AED6D9ADC1BD7C15D10, ___m_Result_0)); }
	inline int32_t get_m_Result_0() const { return ___m_Result_0; }
	inline int32_t* get_address_of_m_Result_0() { return &___m_Result_0; }
	inline void set_m_Result_0(int32_t value)
	{
		___m_Result_0 = value;
	}

	inline static int32_t get_offset_of_m_Score_1() { return static_cast<int32_t>(offsetof(MatchResult_tBBF7876502D38E35313F6AED6D9ADC1BD7C15D10, ___m_Score_1)); }
	inline float get_m_Score_1() const { return ___m_Score_1; }
	inline float* get_address_of_m_Score_1() { return &___m_Score_1; }
	inline void set_m_Score_1(float value)
	{
		___m_Score_1 = value;
	}

	inline static int32_t get_offset_of_m_Devices_2() { return static_cast<int32_t>(offsetof(MatchResult_tBBF7876502D38E35313F6AED6D9ADC1BD7C15D10, ___m_Devices_2)); }
	inline InputControlList_1_tFC847CF52966360602E483824081B85085506801  get_m_Devices_2() const { return ___m_Devices_2; }
	inline InputControlList_1_tFC847CF52966360602E483824081B85085506801 * get_address_of_m_Devices_2() { return &___m_Devices_2; }
	inline void set_m_Devices_2(InputControlList_1_tFC847CF52966360602E483824081B85085506801  value)
	{
		___m_Devices_2 = value;
	}

	inline static int32_t get_offset_of_m_Controls_3() { return static_cast<int32_t>(offsetof(MatchResult_tBBF7876502D38E35313F6AED6D9ADC1BD7C15D10, ___m_Controls_3)); }
	inline InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96  get_m_Controls_3() const { return ___m_Controls_3; }
	inline InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96 * get_address_of_m_Controls_3() { return &___m_Controls_3; }
	inline void set_m_Controls_3(InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96  value)
	{
		___m_Controls_3 = value;
	}

	inline static int32_t get_offset_of_m_Requirements_4() { return static_cast<int32_t>(offsetof(MatchResult_tBBF7876502D38E35313F6AED6D9ADC1BD7C15D10, ___m_Requirements_4)); }
	inline DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045* get_m_Requirements_4() const { return ___m_Requirements_4; }
	inline DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045** get_address_of_m_Requirements_4() { return &___m_Requirements_4; }
	inline void set_m_Requirements_4(DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045* value)
	{
		___m_Requirements_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Requirements_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlScheme/MatchResult
struct MatchResult_tBBF7876502D38E35313F6AED6D9ADC1BD7C15D10_marshaled_pinvoke
{
	int32_t ___m_Result_0;
	float ___m_Score_1;
	InputControlList_1_tFC847CF52966360602E483824081B85085506801  ___m_Devices_2;
	InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96  ___m_Controls_3;
	DeviceRequirement_t81B74F0AB5D81F4F19AB7A30E422908B6EF74ED3_marshaled_pinvoke* ___m_Requirements_4;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlScheme/MatchResult
struct MatchResult_tBBF7876502D38E35313F6AED6D9ADC1BD7C15D10_marshaled_com
{
	int32_t ___m_Result_0;
	float ___m_Score_1;
	InputControlList_1_tFC847CF52966360602E483824081B85085506801  ___m_Devices_2;
	InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96  ___m_Controls_3;
	DeviceRequirement_t81B74F0AB5D81F4F19AB7A30E422908B6EF74ED3_marshaled_com* ___m_Requirements_4;
};

// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36
struct U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>4__this
	MixedRealitySceneSystemProfile_t752F05A9C0EB7B344CDD30160E3DAFD7389B4360 * ___U3CU3E4__this_3;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::tag
	String_t* ___tag_4;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>3__tag
	String_t* ___U3CU3E3__tag_5;
	// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>7__wrap1
	Enumerator_t04B917F995CCD0D1A1C7CE68BD4FF181A4190BD3  ___U3CU3E7__wrap1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933, ___U3CU3E4__this_3)); }
	inline MixedRealitySceneSystemProfile_t752F05A9C0EB7B344CDD30160E3DAFD7389B4360 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MixedRealitySceneSystemProfile_t752F05A9C0EB7B344CDD30160E3DAFD7389B4360 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MixedRealitySceneSystemProfile_t752F05A9C0EB7B344CDD30160E3DAFD7389B4360 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_tag_4() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933, ___tag_4)); }
	inline String_t* get_tag_4() const { return ___tag_4; }
	inline String_t** get_address_of_tag_4() { return &___tag_4; }
	inline void set_tag_4(String_t* value)
	{
		___tag_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tag_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__tag_5() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933, ___U3CU3E3__tag_5)); }
	inline String_t* get_U3CU3E3__tag_5() const { return ___U3CU3E3__tag_5; }
	inline String_t** get_address_of_U3CU3E3__tag_5() { return &___U3CU3E3__tag_5; }
	inline void set_U3CU3E3__tag_5(String_t* value)
	{
		___U3CU3E3__tag_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__tag_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_6() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933, ___U3CU3E7__wrap1_6)); }
	inline Enumerator_t04B917F995CCD0D1A1C7CE68BD4FF181A4190BD3  get_U3CU3E7__wrap1_6() const { return ___U3CU3E7__wrap1_6; }
	inline Enumerator_t04B917F995CCD0D1A1C7CE68BD4FF181A4190BD3 * get_address_of_U3CU3E7__wrap1_6() { return &___U3CU3E7__wrap1_6; }
	inline void set_U3CU3E7__wrap1_6(Enumerator_t04B917F995CCD0D1A1C7CE68BD4FF181A4190BD3  value)
	{
		___U3CU3E7__wrap1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_6))->___current_3))->___Name_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_6))->___current_3))->___Path_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_6))->___current_3))->___Tag_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_6))->___current_3))->___Asset_6), (void*)NULL);
		#endif
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem
struct XRSDKBoundarySystem_t50314CE186E887F0010B2B9954DEB0B6169EF16D  : public BaseBoundarySystem_tB6D6CCB121D338F6DD9F5D12C401D1F347DBC85A
{
public:
	// System.String Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_54;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(XRSDKBoundarySystem_t50314CE186E887F0010B2B9954DEB0B6169EF16D, ___U3CNameU3Ek__BackingField_54)); }
	inline String_t* get_U3CNameU3Ek__BackingField_54() const { return ___U3CNameU3Ek__BackingField_54; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_54() { return &___U3CNameU3Ek__BackingField_54; }
	inline void set_U3CNameU3Ek__BackingField_54(String_t* value)
	{
		___U3CNameU3Ek__BackingField_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_54), (void*)value);
	}
};

struct XRSDKBoundarySystem_t50314CE186E887F0010B2B9954DEB0B6169EF16D_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::XRInputSubsystems
	List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___XRInputSubsystems_53;

public:
	inline static int32_t get_offset_of_XRInputSubsystems_53() { return static_cast<int32_t>(offsetof(XRSDKBoundarySystem_t50314CE186E887F0010B2B9954DEB0B6169EF16D_StaticFields, ___XRInputSubsystems_53)); }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * get_XRInputSubsystems_53() const { return ___XRInputSubsystems_53; }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 ** get_address_of_XRInputSubsystems_53() { return &___XRInputSubsystems_53; }
	inline void set_XRInputSubsystems_53(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * value)
	{
		___XRInputSubsystems_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XRInputSubsystems_53), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue);
il2cpp_hresult_t IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0);
il2cpp_hresult_t IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mD436D926611E89172F9CCDB96214C201E7E6AE67_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t2CFACF402D9A2D616023D5DA34FDF5739B123E32** comReturnValue);


// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.NetFxToWinRtStreamAdapter::ReadAsync(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, RuntimeObject* ___buffer0, uint32_t ___count1, uint32_t ___options2, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> System.IO.NetFxToWinRtStreamAdapter::WriteAsync(Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, RuntimeObject* ___buffer0, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<System.Boolean> System.IO.NetFxToWinRtStreamAdapter::FlushAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_FlushAsync_m8C82E080CD97CAE110704BD8ACA926FA4E0BCE58 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.UInt64 System.IO.NetFxToWinRtStreamAdapter::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetFxToWinRtStreamAdapter_get_Size_mFD8C8AF2B59C9B158F4FD5EC91CFAE7F33947EE3 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.Void System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream::Windows.Storage.Streams.IRandomAccessStream.put_Size(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomAccessStream_Windows_Storage_Streams_IRandomAccessStream_put_Size_m9D2CE9CC6523D0D74FD43684002D590A4B9096BE (RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75 * __this, uint64_t ___value0, const RuntimeMethod* method);
// Windows.Storage.Streams.IInputStream System.IO.NetFxToWinRtStreamAdapter::GetInputStreamAt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_GetInputStreamAt_m570BCD8F5293AC6BD7206B8F13641E09831A6BFC (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, uint64_t ___position0, const RuntimeMethod* method);
// Windows.Storage.Streams.IOutputStream System.IO.NetFxToWinRtStreamAdapter::GetOutputStreamAt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_GetOutputStreamAt_m6FD92CC3130BFC5290A86CFDAA1450B59FA3AB93 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, uint64_t ___position0, const RuntimeMethod* method);
// System.UInt64 System.IO.NetFxToWinRtStreamAdapter::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetFxToWinRtStreamAdapter_get_Position_m26FD8C0876A65ABDFF37AB9A53993EABC0EBECD1 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.Void System.IO.NetFxToWinRtStreamAdapter::Seek(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_Seek_mBC49312F09CDA8AECF50B9D7F761F4ADF42C5B7C (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, uint64_t ___position0, const RuntimeMethod* method);
// Windows.Storage.Streams.IRandomAccessStream System.IO.NetFxToWinRtStreamAdapter::CloneStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_CloneStream_m880CA0AA9596D6A1122DBCC52F331185D25674C4 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_get_CanRead_m511B6ED32D3ED2745BE81C0B0670A3B5696045A9 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_get_CanWrite_m96164AE9C8728C35995BB7E2E74B44314C7FC9C4 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);

// COM Callable Wrapper for Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007_ComCallableWrapper>, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t00707746ADE20907FAB93F8A404F4AAA01FDFDE3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509CertificateCollection_t00707746ADE20907FAB93F8A404F4AAA01FDFDE3_ComCallableWrapper>, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline X509CertificateCollection_t00707746ADE20907FAB93F8A404F4AAA01FDFDE3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509CertificateCollection_t00707746ADE20907FAB93F8A404F4AAA01FDFDE3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509CertificateCollection_t00707746ADE20907FAB93F8A404F4AAA01FDFDE3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509CertificateCollection_t00707746ADE20907FAB93F8A404F4AAA01FDFDE3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509CertificateCollection_t00707746ADE20907FAB93F8A404F4AAA01FDFDE3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B_ComCallableWrapper>, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509CertificateImplCollection
struct X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509CertificateImplCollection_t593BEACCBEF8152D23C9013272C8BD3592DDB372_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509CertificateImplMono
struct X509CertificateImplMono_t0714C4060B1C3DCDA7CAF9308E53CC327C347CB5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509CertificateImplMono_t0714C4060B1C3DCDA7CAF9308E53CC327C347CB5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline X509CertificateImplMono_t0714C4060B1C3DCDA7CAF9308E53CC327C347CB5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509CertificateImplMono_t0714C4060B1C3DCDA7CAF9308E53CC327C347CB5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509CertificateImplMono_t0714C4060B1C3DCDA7CAF9308E53CC327C347CB5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509CertificateImplMono_t0714C4060B1C3DCDA7CAF9308E53CC327C347CB5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509CertificateImplMono_t0714C4060B1C3DCDA7CAF9308E53CC327C347CB5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509ChainElementCollection_tD6E39B1F1D74D68A94482CD962A8D5C316CF2AF1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509ChainImplMono
struct X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509ChainImplMono_tC58007D88C7B8FA636C6F8761F992764F5DD2174_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Unity.X509ChainImplUnityTls
struct X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509ChainImplUnityTls_tC85C612CC6FA2FD60E478BBD173F071F66E46456_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487_ComCallableWrapper>, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_tA7898A1845FB4B820B5F88C41159420CC0135B3A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509ExtensionCollection_tA7898A1845FB4B820B5F88C41159420CC0135B3A_ComCallableWrapper>, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline X509ExtensionCollection_tA7898A1845FB4B820B5F88C41159420CC0135B3A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509ExtensionCollection_tA7898A1845FB4B820B5F88C41159420CC0135B3A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509ExtensionCollection_tA7898A1845FB4B820B5F88C41159420CC0135B3A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509ExtensionCollection_tA7898A1845FB4B820B5F88C41159420CC0135B3A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509ExtensionCollection_tA7898A1845FB4B820B5F88C41159420CC0135B3A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem
struct XRSDKBoundarySystem_t50314CE186E887F0010B2B9954DEB0B6169EF16D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XRSDKBoundarySystem_t50314CE186E887F0010B2B9954DEB0B6169EF16D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline XRSDKBoundarySystem_t50314CE186E887F0010B2B9954DEB0B6169EF16D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XRSDKBoundarySystem_t50314CE186E887F0010B2B9954DEB0B6169EF16D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XRSDKBoundarySystem_t50314CE186E887F0010B2B9954DEB0B6169EF16D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XRSDKBoundarySystem_t50314CE186E887F0010B2B9954DEB0B6169EF16D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XRSDKBoundarySystem_t50314CE186E887F0010B2B9954DEB0B6169EF16D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7
struct U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Connect>d__17
struct U3CConnectU3Ed__17_tE517B4D1550E9E96A0B9DDA1A69DF8BBE7788DB3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CConnectU3Ed__17_tE517B4D1550E9E96A0B9DDA1A69DF8BBE7788DB3_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CConnectU3Ed__17_tE517B4D1550E9E96A0B9DDA1A69DF8BBE7788DB3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CConnectU3Ed__17_tE517B4D1550E9E96A0B9DDA1A69DF8BBE7788DB3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CConnectU3Ed__17_tE517B4D1550E9E96A0B9DDA1A69DF8BBE7788DB3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CConnectU3Ed__17_tE517B4D1550E9E96A0B9DDA1A69DF8BBE7788DB3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CConnectU3Ed__17_tE517B4D1550E9E96A0B9DDA1A69DF8BBE7788DB3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__18
struct U3CListenU3Ed__18_t6F1E89951F9674891D69D717E25011D3B779E2F5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CListenU3Ed__18_t6F1E89951F9674891D69D717E25011D3B779E2F5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CListenU3Ed__18_t6F1E89951F9674891D69D717E25011D3B779E2F5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CListenU3Ed__18_t6F1E89951F9674891D69D717E25011D3B779E2F5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CListenU3Ed__18_t6F1E89951F9674891D69D717E25011D3B779E2F5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CListenU3Ed__18_t6F1E89951F9674891D69D717E25011D3B779E2F5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CListenU3Ed__18_t6F1E89951F9674891D69D717E25011D3B779E2F5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ArrayList/ReadOnlyArrayList
struct ReadOnlyArrayList_t04F7885A1EAD601A3BC41F116B32946F692E592C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ReadOnlyArrayList_t04F7885A1EAD601A3BC41F116B32946F692E592C_ComCallableWrapper>, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ReadOnlyArrayList_t04F7885A1EAD601A3BC41F116B32946F692E592C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ReadOnlyArrayList_t04F7885A1EAD601A3BC41F116B32946F692E592C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ReadOnlyArrayList_t04F7885A1EAD601A3BC41F116B32946F692E592C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ReadOnlyArrayList_t04F7885A1EAD601A3BC41F116B32946F692E592C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ReadOnlyArrayList_t04F7885A1EAD601A3BC41F116B32946F692E592C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Reflection.Assembly/UnmanagedMemoryStreamForModule
struct UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.Button/<OnFinishSubmit>d__9
struct U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Net.CFNetwork/GetProxyData
struct GetProxyData_t822056EF522ED32E6FD4D36581FAAC8E03460E16_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GetProxyData_t822056EF522ED32E6FD4D36581FAAC8E03460E16_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GetProxyData_t822056EF522ED32E6FD4D36581FAAC8E03460E16_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GetProxyData_t822056EF522ED32E6FD4D36581FAAC8E03460E16_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GetProxyData_t822056EF522ED32E6FD4D36581FAAC8E03460E16(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GetProxyData_t822056EF522ED32E6FD4D36581FAAC8E03460E16_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GetProxyData_t822056EF522ED32E6FD4D36581FAAC8E03460E16_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/BlankCertificateHandler
struct BlankCertificateHandler_tC591ABFC7DAC04DD3B308C6F8B68E71E7D0DC0C2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BlankCertificateHandler_tC591ABFC7DAC04DD3B308C6F8B68E71E7D0DC0C2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline BlankCertificateHandler_tC591ABFC7DAC04DD3B308C6F8B68E71E7D0DC0C2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BlankCertificateHandler_tC591ABFC7DAC04DD3B308C6F8B68E71E7D0DC0C2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BlankCertificateHandler_tC591ABFC7DAC04DD3B308C6F8B68E71E7D0DC0C2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BlankCertificateHandler_tC591ABFC7DAC04DD3B308C6F8B68E71E7D0DC0C2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BlankCertificateHandler_tC591ABFC7DAC04DD3B308C6F8B68E71E7D0DC0C2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.Dialog/<CloseDialog>d__11
struct U3CCloseDialogU3Ed__11_t6F5B43B22D86D0763F741F6CAA3E9A6C5EB283DD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCloseDialogU3Ed__11_t6F5B43B22D86D0763F741F6CAA3E9A6C5EB283DD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCloseDialogU3Ed__11_t6F5B43B22D86D0763F741F6CAA3E9A6C5EB283DD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCloseDialogU3Ed__11_t6F5B43B22D86D0763F741F6CAA3E9A6C5EB283DD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCloseDialogU3Ed__11_t6F5B43B22D86D0763F741F6CAA3E9A6C5EB283DD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCloseDialogU3Ed__11_t6F5B43B22D86D0763F741F6CAA3E9A6C5EB283DD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCloseDialogU3Ed__11_t6F5B43B22D86D0763F741F6CAA3E9A6C5EB283DD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.Dialog/<OpenDialog>d__10
struct U3COpenDialogU3Ed__10_t9EA4959F0F3EA799A5D2D237223C6395FA109981_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3COpenDialogU3Ed__10_t9EA4959F0F3EA799A5D2D237223C6395FA109981_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3COpenDialogU3Ed__10_t9EA4959F0F3EA799A5D2D237223C6395FA109981_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3COpenDialogU3Ed__10_t9EA4959F0F3EA799A5D2D237223C6395FA109981_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3COpenDialogU3Ed__10_t9EA4959F0F3EA799A5D2D237223C6395FA109981(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3COpenDialogU3Ed__10_t9EA4959F0F3EA799A5D2D237223C6395FA109981_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3COpenDialogU3Ed__10_t9EA4959F0F3EA799A5D2D237223C6395FA109981_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.Dialog/<RunDialogOverTime>d__9
struct U3CRunDialogOverTimeU3Ed__9_tECD0325DD5E932C64CECA7612BD734F979C2C7AC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CRunDialogOverTimeU3Ed__9_tECD0325DD5E932C64CECA7612BD734F979C2C7AC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CRunDialogOverTimeU3Ed__9_tECD0325DD5E932C64CECA7612BD734F979C2C7AC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CRunDialogOverTimeU3Ed__9_tECD0325DD5E932C64CECA7612BD734F979C2C7AC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CRunDialogOverTimeU3Ed__9_tECD0325DD5E932C64CECA7612BD734F979C2C7AC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CRunDialogOverTimeU3Ed__9_tECD0325DD5E932C64CECA7612BD734F979C2C7AC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CRunDialogOverTimeU3Ed__9_tECD0325DD5E932C64CECA7612BD734F979C2C7AC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75
struct U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Diagnostics.Tracing.EventPayload/<GetEnumerator>d__17
struct U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Diagnostics.Tracing.EventSource/OverideEventProvider
struct OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.FollowMeToggle/<AutoFollowDistanceCheck>d__31
struct U3CAutoFollowDistanceCheckU3Ed__31_tB64DDFAB78B833C31B480A97E12D4A3D7BE8B0A5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CAutoFollowDistanceCheckU3Ed__31_tB64DDFAB78B833C31B480A97E12D4A3D7BE8B0A5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CAutoFollowDistanceCheckU3Ed__31_tB64DDFAB78B833C31B480A97E12D4A3D7BE8B0A5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CAutoFollowDistanceCheckU3Ed__31_tB64DDFAB78B833C31B480A97E12D4A3D7BE8B0A5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CAutoFollowDistanceCheckU3Ed__31_tB64DDFAB78B833C31B480A97E12D4A3D7BE8B0A5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CAutoFollowDistanceCheckU3Ed__31_tB64DDFAB78B833C31B480A97E12D4A3D7BE8B0A5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CAutoFollowDistanceCheckU3Ed__31_tB64DDFAB78B833C31B480A97E12D4A3D7BE8B0A5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.GazeHandHelper/<GetAllHandPositions>d__11
struct U3CGetAllHandPositionsU3Ed__11_t9393B0B3FDBED61FEB2E30EBB13D0ECACCF1CEB1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetAllHandPositionsU3Ed__11_t9393B0B3FDBED61FEB2E30EBB13D0ECACCF1CEB1_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetAllHandPositionsU3Ed__11_t9393B0B3FDBED61FEB2E30EBB13D0ECACCF1CEB1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetAllHandPositionsU3Ed__11_t9393B0B3FDBED61FEB2E30EBB13D0ECACCF1CEB1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetAllHandPositionsU3Ed__11_t9393B0B3FDBED61FEB2E30EBB13D0ECACCF1CEB1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetAllHandPositionsU3Ed__11_t9393B0B3FDBED61FEB2E30EBB13D0ECACCF1CEB1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetAllHandPositionsU3Ed__11_t9393B0B3FDBED61FEB2E30EBB13D0ECACCF1CEB1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62
struct U3CToggleCursorsU3Ed__62_tBACA4042E2629D929CAEDCDEC6E7CCFA9E166FE4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CToggleCursorsU3Ed__62_tBACA4042E2629D929CAEDCDEC6E7CCFA9E166FE4_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CToggleCursorsU3Ed__62_tBACA4042E2629D929CAEDCDEC6E7CCFA9E166FE4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CToggleCursorsU3Ed__62_tBACA4042E2629D929CAEDCDEC6E7CCFA9E166FE4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CToggleCursorsU3Ed__62_tBACA4042E2629D929CAEDCDEC6E7CCFA9E166FE4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CToggleCursorsU3Ed__62_tBACA4042E2629D929CAEDCDEC6E7CCFA9E166FE4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CToggleCursorsU3Ed__62_tBACA4042E2629D929CAEDCDEC6E7CCFA9E166FE4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp/<WorldLockedReattachCheck>d__42
struct U3CWorldLockedReattachCheckU3Ed__42_t87B098623223996539C9A908028FDF603EA1FE81_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CWorldLockedReattachCheckU3Ed__42_t87B098623223996539C9A908028FDF603EA1FE81_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CWorldLockedReattachCheckU3Ed__42_t87B098623223996539C9A908028FDF603EA1FE81_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CWorldLockedReattachCheckU3Ed__42_t87B098623223996539C9A908028FDF603EA1FE81_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CWorldLockedReattachCheckU3Ed__42_t87B098623223996539C9A908028FDF603EA1FE81(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CWorldLockedReattachCheckU3Ed__42_t87B098623223996539C9A908028FDF603EA1FE81_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CWorldLockedReattachCheckU3Ed__42_t87B098623223996539C9A908028FDF603EA1FE81_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<FadeOutHint>d__45
struct U3CFadeOutHintU3Ed__45_t9903A15CEDCE37A63E412F929722F495B7CC7898_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CFadeOutHintU3Ed__45_t9903A15CEDCE37A63E412F929722F495B7CC7898_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CFadeOutHintU3Ed__45_t9903A15CEDCE37A63E412F929722F495B7CC7898_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CFadeOutHintU3Ed__45_t9903A15CEDCE37A63E412F929722F495B7CC7898_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CFadeOutHintU3Ed__45_t9903A15CEDCE37A63E412F929722F495B7CC7898(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CFadeOutHintU3Ed__45_t9903A15CEDCE37A63E412F929722F495B7CC7898_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CFadeOutHintU3Ed__45_t9903A15CEDCE37A63E412F929722F495B7CC7898_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46
struct U3CHintLoopSequenceU3Ed__46_t2D9A95B8C85DB47496C7417A2D75A16CA608FA4E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CHintLoopSequenceU3Ed__46_t2D9A95B8C85DB47496C7417A2D75A16CA608FA4E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CHintLoopSequenceU3Ed__46_t2D9A95B8C85DB47496C7417A2D75A16CA608FA4E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CHintLoopSequenceU3Ed__46_t2D9A95B8C85DB47496C7417A2D75A16CA608FA4E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CHintLoopSequenceU3Ed__46_t2D9A95B8C85DB47496C7417A2D75A16CA608FA4E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CHintLoopSequenceU3Ed__46_t2D9A95B8C85DB47496C7417A2D75A16CA608FA4E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CHintLoopSequenceU3Ed__46_t2D9A95B8C85DB47496C7417A2D75A16CA608FA4E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Hashtable/KeyCollection
struct KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Hashtable/SyncHashtable
struct SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Hashtable/ValueCollection
struct ValueCollection_t98381E5F7D4ABDE56C63D8A68737C5041DD5BE15_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t98381E5F7D4ABDE56C63D8A68737C5041DD5BE15_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t98381E5F7D4ABDE56C63D8A68737C5041DD5BE15_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t98381E5F7D4ABDE56C63D8A68737C5041DD5BE15_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t98381E5F7D4ABDE56C63D8A68737C5041DD5BE15(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t98381E5F7D4ABDE56C63D8A68737C5041DD5BE15_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t98381E5F7D4ABDE56C63D8A68737C5041DD5BE15_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.Http.HttpContent/FixedMemoryStream
struct FixedMemoryStream_t5C7647C6F3503F1EADC966C8D2F50E6BF1A69E3A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FixedMemoryStream_t5C7647C6F3503F1EADC966C8D2F50E6BF1A69E3A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline FixedMemoryStream_t5C7647C6F3503F1EADC966C8D2F50E6BF1A69E3A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FixedMemoryStream_t5C7647C6F3503F1EADC966C8D2F50E6BF1A69E3A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FixedMemoryStream_t5C7647C6F3503F1EADC966C8D2F50E6BF1A69E3A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FixedMemoryStream_t5C7647C6F3503F1EADC966C8D2F50E6BF1A69E3A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FixedMemoryStream_t5C7647C6F3503F1EADC966C8D2F50E6BF1A69E3A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.Http.Headers.HttpHeaders/<GetEnumerator>d__19
struct U3CGetEnumeratorU3Ed__19_tD20D6BD26C391A4DCD06D871F3CF6007F1D5A9FF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__19_tD20D6BD26C391A4DCD06D871F3CF6007F1D5A9FF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__19_tD20D6BD26C391A4DCD06D871F3CF6007F1D5A9FF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__19_tD20D6BD26C391A4DCD06D871F3CF6007F1D5A9FF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__19_tD20D6BD26C391A4DCD06D871F3CF6007F1D5A9FF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__19_tD20D6BD26C391A4DCD06D871F3CF6007F1D5A9FF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__19_tD20D6BD26C391A4DCD06D871F3CF6007F1D5A9FF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator
struct Enumerator_t80867B0F3B9C3CAB09CB2D19E5F471B3137CA923_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_t80867B0F3B9C3CAB09CB2D19E5F471B3137CA923_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_t80867B0F3B9C3CAB09CB2D19E5F471B3137CA923_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_t80867B0F3B9C3CAB09CB2D19E5F471B3137CA923_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_t80867B0F3B9C3CAB09CB2D19E5F471B3137CA923(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_t80867B0F3B9C3CAB09CB2D19E5F471B3137CA923_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_t80867B0F3B9C3CAB09CB2D19E5F471B3137CA923_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__27
struct U3CGetEnumeratorU3Ed__27_tA5C6BBBE3DC17E76BE2F2C525775112CED54E715_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__27_tA5C6BBBE3DC17E76BE2F2C525775112CED54E715_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__27_tA5C6BBBE3DC17E76BE2F2C525775112CED54E715_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__27_tA5C6BBBE3DC17E76BE2F2C525775112CED54E715_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__27_tA5C6BBBE3DC17E76BE2F2C525775112CED54E715(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__27_tA5C6BBBE3DC17E76BE2F2C525775112CED54E715_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__27_tA5C6BBBE3DC17E76BE2F2C525775112CED54E715_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionRebindingExtensions/DeferBindingResolutionWrapper
struct DeferBindingResolutionWrapper_tB0C1ED8677CBDF823116F21696E384E04494247F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DeferBindingResolutionWrapper_tB0C1ED8677CBDF823116F21696E384E04494247F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline DeferBindingResolutionWrapper_tB0C1ED8677CBDF823116F21696E384E04494247F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DeferBindingResolutionWrapper_tB0C1ED8677CBDF823116F21696E384E04494247F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DeferBindingResolutionWrapper_tB0C1ED8677CBDF823116F21696E384E04494247F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DeferBindingResolutionWrapper_tB0C1ED8677CBDF823116F21696E384E04494247F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DeferBindingResolutionWrapper_tB0C1ED8677CBDF823116F21696E384E04494247F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator
struct Enumerator_tB5DF0C3FEDACC5148DDF4E9564867E27252852BA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_tB5DF0C3FEDACC5148DDF4E9564867E27252852BA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_tB5DF0C3FEDACC5148DDF4E9564867E27252852BA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_tB5DF0C3FEDACC5148DDF4E9564867E27252852BA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_tB5DF0C3FEDACC5148DDF4E9564867E27252852BA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_tB5DF0C3FEDACC5148DDF4E9564867E27252852BA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_tB5DF0C3FEDACC5148DDF4E9564867E27252852BA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59
struct U3CGetAllAnimationCurvesU3Ed__59_tBD3886F266FDA8CBAAC3339DBA3B43D6CE35DAFB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetAllAnimationCurvesU3Ed__59_tBD3886F266FDA8CBAAC3339DBA3B43D6CE35DAFB_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetAllAnimationCurvesU3Ed__59_tBD3886F266FDA8CBAAC3339DBA3B43D6CE35DAFB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetAllAnimationCurvesU3Ed__59_tBD3886F266FDA8CBAAC3339DBA3B43D6CE35DAFB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetAllAnimationCurvesU3Ed__59_tBD3886F266FDA8CBAAC3339DBA3B43D6CE35DAFB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetAllAnimationCurvesU3Ed__59_tBD3886F266FDA8CBAAC3339DBA3B43D6CE35DAFB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetAllAnimationCurvesU3Ed__59_tBD3886F266FDA8CBAAC3339DBA3B43D6CE35DAFB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__10
struct U3CGetPartNamesU3Ed__10_t7D0B01596EA6C5CA1E277906522ED0A959A57E1A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetPartNamesU3Ed__10_t7D0B01596EA6C5CA1E277906522ED0A959A57E1A_ComCallableWrapper>, IIterable_1_t94592E586C395F026290ACC676E74C560595CC26, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetPartNamesU3Ed__10_t7D0B01596EA6C5CA1E277906522ED0A959A57E1A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetPartNamesU3Ed__10_t7D0B01596EA6C5CA1E277906522ED0A959A57E1A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t94592E586C395F026290ACC676E74C560595CC26*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[3] = IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[5] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 6;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetPartNamesU3Ed__10_t7D0B01596EA6C5CA1E277906522ED0A959A57E1A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetPartNamesU3Ed__10_t7D0B01596EA6C5CA1E277906522ED0A959A57E1A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetPartNamesU3Ed__10_t7D0B01596EA6C5CA1E277906522ED0A959A57E1A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Layouts.InputControlLayout/CacheRefInstance
struct CacheRefInstance_t788CDF364A5E502E9DDC497D6CF98F54BC657AC2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CacheRefInstance_t788CDF364A5E502E9DDC497D6CF98F54BC657AC2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline CacheRefInstance_t788CDF364A5E502E9DDC497D6CF98F54BC657AC2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CacheRefInstance_t788CDF364A5E502E9DDC497D6CF98F54BC657AC2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CacheRefInstance_t788CDF364A5E502E9DDC497D6CF98F54BC657AC2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CacheRefInstance_t788CDF364A5E502E9DDC497D6CF98F54BC657AC2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CacheRefInstance_t788CDF364A5E502E9DDC497D6CF98F54BC657AC2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputControlScheme/MatchResult
struct MatchResult_tBBF7876502D38E35313F6AED6D9ADC1BD7C15D10_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatchResult_tBBF7876502D38E35313F6AED6D9ADC1BD7C15D10_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MatchResult_tBBF7876502D38E35313F6AED6D9ADC1BD7C15D10_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatchResult_tBBF7876502D38E35313F6AED6D9ADC1BD7C15D10_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatchResult_tBBF7876502D38E35313F6AED6D9ADC1BD7C15D10(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatchResult_tBBF7876502D38E35313F6AED6D9ADC1BD7C15D10_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatchResult_tBBF7876502D38E35313F6AED6D9ADC1BD7C15D10_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Layouts.InputDeviceBuilder/RefInstance
struct RefInstance_t6F7C0B4DB262CBC9D540A21D6A88D34F57880B31_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RefInstance_t6F7C0B4DB262CBC9D540A21D6A88D34F57880B31_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RefInstance_t6F7C0B4DB262CBC9D540A21D6A88D34F57880B31_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RefInstance_t6F7C0B4DB262CBC9D540A21D6A88D34F57880B31_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RefInstance_t6F7C0B4DB262CBC9D540A21D6A88D34F57880B31(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RefInstance_t6F7C0B4DB262CBC9D540A21D6A88D34F57880B31_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RefInstance_t6F7C0B4DB262CBC9D540A21D6A88D34F57880B31_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4
struct U3Cget_patternsU3Ed__4_t5060CB226BE05D6F741FA9DD0137346F9946734B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3Cget_patternsU3Ed__4_t5060CB226BE05D6F741FA9DD0137346F9946734B_ComCallableWrapper>, IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3Cget_patternsU3Ed__4_t5060CB226BE05D6F741FA9DD0137346F9946734B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3Cget_patternsU3Ed__4_t5060CB226BE05D6F741FA9DD0137346F9946734B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D(IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3Cget_patternsU3Ed__4_t5060CB226BE05D6F741FA9DD0137346F9946734B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3Cget_patternsU3Ed__4_t5060CB226BE05D6F741FA9DD0137346F9946734B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3Cget_patternsU3Ed__4_t5060CB226BE05D6F741FA9DD0137346F9946734B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator
struct Enumerator_t29C1328DF03C4FA5E88DD759F187863F5AB238FB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_t29C1328DF03C4FA5E88DD759F187863F5AB238FB_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_t29C1328DF03C4FA5E88DD759F187863F5AB238FB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_t29C1328DF03C4FA5E88DD759F187863F5AB238FB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_t29C1328DF03C4FA5E88DD759F187863F5AB238FB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_t29C1328DF03C4FA5E88DD759F187863F5AB238FB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_t29C1328DF03C4FA5E88DD759F187863F5AB238FB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator
struct Enumerator_t310442BCF6CF12ADBE1B000FD18F259531EC5861_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_t310442BCF6CF12ADBE1B000FD18F259531EC5861_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_t310442BCF6CF12ADBE1B000FD18F259531EC5861_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_t310442BCF6CF12ADBE1B000FD18F259531EC5861_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_t310442BCF6CF12ADBE1B000FD18F259531EC5861(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_t310442BCF6CF12ADBE1B000FD18F259531EC5861_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_t310442BCF6CF12ADBE1B000FD18F259531EC5861_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController
struct ReplayController_tAB7290396714CE901DDF966A6BC5E2057CDDB468_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ReplayController_tAB7290396714CE901DDF966A6BC5E2057CDDB468_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ReplayController_tAB7290396714CE901DDF966A6BC5E2057CDDB468_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ReplayController_tAB7290396714CE901DDF966A6BC5E2057CDDB468_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ReplayController_tAB7290396714CE901DDF966A6BC5E2057CDDB468(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ReplayController_tAB7290396714CE901DDF966A6BC5E2057CDDB468_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ReplayController_tAB7290396714CE901DDF966A6BC5E2057CDDB468_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.InputField/<CaretBlink>d__163
struct U3CCaretBlinkU3Ed__163_t2F146BD27CA8F3766940DC200B985EDEE3BB6DC6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCaretBlinkU3Ed__163_t2F146BD27CA8F3766940DC200B985EDEE3BB6DC6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCaretBlinkU3Ed__163_t2F146BD27CA8F3766940DC200B985EDEE3BB6DC6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCaretBlinkU3Ed__163_t2F146BD27CA8F3766940DC200B985EDEE3BB6DC6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCaretBlinkU3Ed__163_t2F146BD27CA8F3766940DC200B985EDEE3BB6DC6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCaretBlinkU3Ed__163_t2F146BD27CA8F3766940DC200B985EDEE3BB6DC6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCaretBlinkU3Ed__163_t2F146BD27CA8F3766940DC200B985EDEE3BB6DC6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.InputField/<MouseDragOutsideRect>d__185
struct U3CMouseDragOutsideRectU3Ed__185_tAA56E098B65282AEAEDFB0679950CBB2A9270F0D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CMouseDragOutsideRectU3Ed__185_tAA56E098B65282AEAEDFB0679950CBB2A9270F0D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CMouseDragOutsideRectU3Ed__185_tAA56E098B65282AEAEDFB0679950CBB2A9270F0D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CMouseDragOutsideRectU3Ed__185_tAA56E098B65282AEAEDFB0679950CBB2A9270F0D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CMouseDragOutsideRectU3Ed__185_tAA56E098B65282AEAEDFB0679950CBB2A9270F0D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CMouseDragOutsideRectU3Ed__185_tAA56E098B65282AEAEDFB0679950CBB2A9270F0D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CMouseDragOutsideRectU3Ed__185_tAA56E098B65282AEAEDFB0679950CBB2A9270F0D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__68
struct U3CListControlLayoutsU3Ed__68_t719401DC5A920732C12A351715679BBF19212F37_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CListControlLayoutsU3Ed__68_t719401DC5A920732C12A351715679BBF19212F37_ComCallableWrapper>, IIterable_1_t94592E586C395F026290ACC676E74C560595CC26, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CListControlLayoutsU3Ed__68_t719401DC5A920732C12A351715679BBF19212F37_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CListControlLayoutsU3Ed__68_t719401DC5A920732C12A351715679BBF19212F37_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t94592E586C395F026290ACC676E74C560595CC26*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[3] = IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[5] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 6;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CListControlLayoutsU3Ed__68_t719401DC5A920732C12A351715679BBF19212F37(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CListControlLayoutsU3Ed__68_t719401DC5A920732C12A351715679BBF19212F37_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CListControlLayoutsU3Ed__68_t719401DC5A920732C12A351715679BBF19212F37_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputRemoting/Subscriber
struct Subscriber_t636EF31EA31D71121DBA85EDB7E5DBB62C6AECEB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscriber_t636EF31EA31D71121DBA85EDB7E5DBB62C6AECEB_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscriber_t636EF31EA31D71121DBA85EDB7E5DBB62C6AECEB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscriber_t636EF31EA31D71121DBA85EDB7E5DBB62C6AECEB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscriber_t636EF31EA31D71121DBA85EDB7E5DBB62C6AECEB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscriber_t636EF31EA31D71121DBA85EDB7E5DBB62C6AECEB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscriber_t636EF31EA31D71121DBA85EDB7E5DBB62C6AECEB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
struct Enumerator_t4A90DEAAE5B627E6637C5C57A5BF2C1CDCD59DD2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_t4A90DEAAE5B627E6637C5C57A5BF2C1CDCD59DD2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_t4A90DEAAE5B627E6637C5C57A5BF2C1CDCD59DD2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_t4A90DEAAE5B627E6637C5C57A5BF2C1CDCD59DD2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_t4A90DEAAE5B627E6637C5C57A5BF2C1CDCD59DD2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_t4A90DEAAE5B627E6637C5C57A5BF2C1CDCD59DD2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_t4A90DEAAE5B627E6637C5C57A5BF2C1CDCD59DD2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.Interactable/<GlobalVisualReset>d__170
struct U3CGlobalVisualResetU3Ed__170_tFB51286B1DBF329BC6ED5F410CF3FDA9609B9204_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGlobalVisualResetU3Ed__170_tFB51286B1DBF329BC6ED5F410CF3FDA9609B9204_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGlobalVisualResetU3Ed__170_tFB51286B1DBF329BC6ED5F410CF3FDA9609B9204_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGlobalVisualResetU3Ed__170_tFB51286B1DBF329BC6ED5F410CF3FDA9609B9204_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGlobalVisualResetU3Ed__170_tFB51286B1DBF329BC6ED5F410CF3FDA9609B9204(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGlobalVisualResetU3Ed__170_tFB51286B1DBF329BC6ED5F410CF3FDA9609B9204_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGlobalVisualResetU3Ed__170_tFB51286B1DBF329BC6ED5F410CF3FDA9609B9204_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.Interactable/<InputDownTimer>d__160
struct U3CInputDownTimerU3Ed__160_tE5F243179F3526644D9A8639723CC7615755EB88_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CInputDownTimerU3Ed__160_tE5F243179F3526644D9A8639723CC7615755EB88_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CInputDownTimerU3Ed__160_tE5F243179F3526644D9A8639723CC7615755EB88_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CInputDownTimerU3Ed__160_tE5F243179F3526644D9A8639723CC7615755EB88_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CInputDownTimerU3Ed__160_tE5F243179F3526644D9A8639723CC7615755EB88(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CInputDownTimerU3Ed__160_tE5F243179F3526644D9A8639723CC7615755EB88_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CInputDownTimerU3Ed__160_tE5F243179F3526644D9A8639723CC7615755EB88_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56
struct U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Specialized.ListDictionary/NodeKeyValueCollection
struct NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16
struct U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/<UpdateState>d__35
struct U3CUpdateStateU3Ed__35_t41BA04FF4ACAADCDC1CCE4E62F4D048ECA3EBFA1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CUpdateStateU3Ed__35_t41BA04FF4ACAADCDC1CCE4E62F4D048ECA3EBFA1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CUpdateStateU3Ed__35_t41BA04FF4ACAADCDC1CCE4E62F4D048ECA3EBFA1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CUpdateStateU3Ed__35_t41BA04FF4ACAADCDC1CCE4E62F4D048ECA3EBFA1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CUpdateStateU3Ed__35_t41BA04FF4ACAADCDC1CCE4E62F4D048ECA3EBFA1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CUpdateStateU3Ed__35_t41BA04FF4ACAADCDC1CCE4E62F4D048ECA3EBFA1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CUpdateStateU3Ed__35_t41BA04FF4ACAADCDC1CCE4E62F4D048ECA3EBFA1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview/<BlinkCaret>d__20
struct U3CBlinkCaretU3Ed__20_t74CACBD2571641B441AEF55D3E7708F6DFED023C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CBlinkCaretU3Ed__20_t74CACBD2571641B441AEF55D3E7708F6DFED023C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CBlinkCaretU3Ed__20_t74CACBD2571641B441AEF55D3E7708F6DFED023C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CBlinkCaretU3Ed__20_t74CACBD2571641B441AEF55D3E7708F6DFED023C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CBlinkCaretU3Ed__20_t74CACBD2571641B441AEF55D3E7708F6DFED023C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CBlinkCaretU3Ed__20_t74CACBD2571641B441AEF55D3E7708F6DFED023C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CBlinkCaretU3Ed__20_t74CACBD2571641B441AEF55D3E7708F6DFED023C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37
struct U3CFadeLineU3Ed__37_t3D023DC6FA2939EEC4B3ECB2934E6931E4D1DABD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CFadeLineU3Ed__37_t3D023DC6FA2939EEC4B3ECB2934E6931E4D1DABD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CFadeLineU3Ed__37_t3D023DC6FA2939EEC4B3ECB2934E6931E4D1DABD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CFadeLineU3Ed__37_t3D023DC6FA2939EEC4B3ECB2934E6931E4D1DABD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CFadeLineU3Ed__37_t3D023DC6FA2939EEC4B3ECB2934E6931E4D1DABD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CFadeLineU3Ed__37_t3D023DC6FA2939EEC4B3ECB2934E6931E4D1DABD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CFadeLineU3Ed__37_t3D023DC6FA2939EEC4B3ECB2934E6931E4D1DABD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__8
struct U3CInitializeSceneContentWithDelayU3Ed__8_tF69C025E42C3E142C00B0AD1806F69F4918E3033_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CInitializeSceneContentWithDelayU3Ed__8_tF69C025E42C3E142C00B0AD1806F69F4918E3033_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CInitializeSceneContentWithDelayU3Ed__8_tF69C025E42C3E142C00B0AD1806F69F4918E3033_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CInitializeSceneContentWithDelayU3Ed__8_tF69C025E42C3E142C00B0AD1806F69F4918E3033_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CInitializeSceneContentWithDelayU3Ed__8_tF69C025E42C3E142C00B0AD1806F69F4918E3033(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CInitializeSceneContentWithDelayU3Ed__8_tF69C025E42C3E142C00B0AD1806F69F4918E3033_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CInitializeSceneContentWithDelayU3Ed__8_tF69C025E42C3E142C00B0AD1806F69F4918E3033_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138
struct U3CGetScenesU3Ed__138_t676C355C17BAA41F1D25C8423BD8AA38CB9B2B86_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetScenesU3Ed__138_t676C355C17BAA41F1D25C8423BD8AA38CB9B2B86_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetScenesU3Ed__138_t676C355C17BAA41F1D25C8423BD8AA38CB9B2B86_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetScenesU3Ed__138_t676C355C17BAA41F1D25C8423BD8AA38CB9B2B86_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetScenesU3Ed__138_t676C355C17BAA41F1D25C8423BD8AA38CB9B2B86(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetScenesU3Ed__138_t676C355C17BAA41F1D25C8423BD8AA38CB9B2B86_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetScenesU3Ed__138_t676C355C17BAA41F1D25C8423BD8AA38CB9B2B86_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36
struct U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933_ComCallableWrapper>, IIterable_1_t94592E586C395F026290ACC676E74C560595CC26, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t94592E586C395F026290ACC676E74C560595CC26*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[3] = IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[5] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 6;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20
struct U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD_ComCallableWrapper>, IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD436D926611E89172F9CCDB96214C201E7E6AE67(IIterator_1_t2CFACF402D9A2D616023D5DA34FDF5739B123E32** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD436D926611E89172F9CCDB96214C201E7E6AE67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31
struct U3CFollowSequenceU3Ed__31_tF39A60B26D29AA7BC7C858DA7C47D11B24FFE75B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CFollowSequenceU3Ed__31_tF39A60B26D29AA7BC7C858DA7C47D11B24FFE75B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CFollowSequenceU3Ed__31_tF39A60B26D29AA7BC7C858DA7C47D11B24FFE75B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CFollowSequenceU3Ed__31_tF39A60B26D29AA7BC7C858DA7C47D11B24FFE75B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CFollowSequenceU3Ed__31_tF39A60B26D29AA7BC7C858DA7C47D11B24FFE75B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CFollowSequenceU3Ed__31_tF39A60B26D29AA7BC7C858DA7C47D11B24FFE75B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CFollowSequenceU3Ed__31_tF39A60B26D29AA7BC7C858DA7C47D11B24FFE75B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29
struct U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/InputOutputStream
struct InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD
{
	inline InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID;
		interfaceIds[2] = IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC(__thisValue, ____buffer0_unmarshaled, ___count1, ___options2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4(__thisValue, ____buffer0_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_FlushAsync_m8C82E080CD97CAE110704BD8ACA926FA4E0BCE58(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/InputStream
struct InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2
{
	inline InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC(__thisValue, ____buffer0_unmarshaled, ___count1, ___options2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/OutputStream
struct OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD
{
	inline OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4(__thisValue, ____buffer0_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_FlushAsync_m8C82E080CD97CAE110704BD8ACA926FA4E0BCE58(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD
{
	inline RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A::IID;
		interfaceIds[2] = IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID;
		interfaceIds[3] = IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_mF9E844A817D64D4E78CD248CCBF6E07B77BCC3E6(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_Size_mFD8C8AF2B59C9B158F4FD5EC91CFAE7F33947EE3(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_put_Size_m891818528BF8D69955CF27BC4D777FE8998159A7(uint64_t ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75 * __thisValue = (RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75 *)GetManagedObjectInline();
			RandomAccessStream_Windows_Storage_Streams_IRandomAccessStream_put_Size_m9D2CE9CC6523D0D74FD43684002D590A4B9096BE(__thisValue, ___value0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetInputStreamAt_m9CC820A0D61D6396A06770F777B93F17F48195CB(uint64_t ___position0, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_GetInputStreamAt_m570BCD8F5293AC6BD7206B8F13641E09831A6BFC(__thisValue, ___position0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetOutputStreamAt_m49D528CD63934AD30783BB759B104C80228DD023(uint64_t ___position0, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_GetOutputStreamAt_m6FD92CC3130BFC5290A86CFDAA1450B59FA3AB93(__thisValue, ___position0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_mEBCDA9CD0B45E8C1F7A99E7B40277F0B73E772B3(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_Position_m26FD8C0876A65ABDFF37AB9A53993EABC0EBECD1(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m22E6D99C652709BF6A0BC31C53FCC63B528E998A(uint64_t ___position0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			NetFxToWinRtStreamAdapter_Seek_mBC49312F09CDA8AECF50B9D7F761F4ADF42C5B7C(__thisValue, ___position0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_CloneStream_mB8E84904911B293CCA5CB6420565DD027133866A(IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_CloneStream_m880CA0AA9596D6A1122DBCC52F331185D25674C4(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_mAD979BED8B107A5A477E184F0A56C1C7880CF071(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_CanRead_m511B6ED32D3ED2745BE81C0B0670A3B5696045A9(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m3E677DD40D63CBE50AB0B17CEB72B8AFEC8D2146(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_CanWrite_m96164AE9C8728C35995BB7E2E74B44314C7FC9C4(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC(__thisValue, ____buffer0_unmarshaled, ___count1, ___options2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4(__thisValue, ____buffer0_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_FlushAsync_m8C82E080CD97CAE110704BD8ACA926FA4E0BCE58(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1
struct U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__13
struct U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7
struct U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7
struct U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23
struct U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4
struct U3CResetViewMatricesOnFrameEndU3Ed__4_t569CF35E153EC5D48A50D394579FF8B6BA3F2926_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CResetViewMatricesOnFrameEndU3Ed__4_t569CF35E153EC5D48A50D394579FF8B6BA3F2926_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CResetViewMatricesOnFrameEndU3Ed__4_t569CF35E153EC5D48A50D394579FF8B6BA3F2926_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CResetViewMatricesOnFrameEndU3Ed__4_t569CF35E153EC5D48A50D394579FF8B6BA3F2926_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CResetViewMatricesOnFrameEndU3Ed__4_t569CF35E153EC5D48A50D394579FF8B6BA3F2926(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CResetViewMatricesOnFrameEndU3Ed__4_t569CF35E153EC5D48A50D394579FF8B6BA3F2926_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CResetViewMatricesOnFrameEndU3Ed__4_t569CF35E153EC5D48A50D394579FF8B6BA3F2926_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22
struct U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A_ComCallableWrapper(obj));
}
