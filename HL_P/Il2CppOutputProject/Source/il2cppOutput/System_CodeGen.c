﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* UnityTlsContext_CertificateCallback_m793CC2EDD82935F29A3DEBD1F208DC56EA822E9C_RuntimeMethod_var;
extern const RuntimeMethod* UnityTlsContext_ReadCallback_mA0BF382397D912B79B6064B58B6C7C5D97853245_RuntimeMethod_var;
extern const RuntimeMethod* UnityTlsContext_VerifyCallback_m8C61EF3A0037483AD56A083CA47D8E4C0404961E_RuntimeMethod_var;
extern const RuntimeMethod* UnityTlsContext_WriteCallback_m466D11090AF989AD1F14E6FE049320297C12A86C_RuntimeMethod_var;



// 0x00000001 System.String SR::GetString(System.String,System.Object[])
extern void SR_GetString_m4FFAF18248A54C5B67E4760C5ED4869A87BCAD7F (void);
// 0x00000002 System.String SR::GetString(System.Globalization.CultureInfo,System.String,System.Object[])
extern void SR_GetString_m410D5693D8F75264B62B781794F559446EC84B3B (void);
// 0x00000003 System.String SR::GetString(System.String)
extern void SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462 (void);
// 0x00000004 System.String SR::Format(System.String,System.Object)
extern void SR_Format_m9FB0DE0E3CE685F3CC51CC7558F42F10931B8645 (void);
// 0x00000005 System.Void Mono.Util.MonoPInvokeCallbackAttribute::.ctor(System.Type)
extern void MonoPInvokeCallbackAttribute__ctor_m38A1F94D97EA55DC3B5AEC44EB89A0F266BAFE92 (void);
// 0x00000006 System.Void Mono.Unity.CertHelper::AddCertificatesToNativeChain(Mono.Unity.UnityTls/unitytls_x509list*,System.Security.Cryptography.X509Certificates.X509CertificateCollection,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void CertHelper_AddCertificatesToNativeChain_m821130EC2637BAFE16F607F366A82EF24E067BE3 (void);
// 0x00000007 System.Void Mono.Unity.CertHelper::AddCertificateToNativeChain(Mono.Unity.UnityTls/unitytls_x509list*,System.Security.Cryptography.X509Certificates.X509Certificate,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void CertHelper_AddCertificateToNativeChain_mE1F8AD3A6448C38C2E75A0AFD77BD0F175109CD3 (void);
// 0x00000008 System.Void Mono.Unity.Debug::CheckAndThrow(Mono.Unity.UnityTls/unitytls_errorstate,System.String,Mono.Security.Interface.AlertDescription)
extern void Debug_CheckAndThrow_m435D60C930287782DE6E6B75A7BF7749BCA5FCF0 (void);
// 0x00000009 System.Void Mono.Unity.Debug::CheckAndThrow(Mono.Unity.UnityTls/unitytls_errorstate,Mono.Unity.UnityTls/unitytls_x509verify_result,System.String,Mono.Security.Interface.AlertDescription)
extern void Debug_CheckAndThrow_mF1F5231EFB280A3B60200791E077F0B9416CC272 (void);
// 0x0000000A System.IntPtr Mono.Unity.UnityTls::GetUnityTlsInterface()
extern void UnityTls_GetUnityTlsInterface_m19A40C86C9C542E4CDF9A01113E8B8B163387036 (void);
// 0x0000000B System.Boolean Mono.Unity.UnityTls::get_IsSupported()
extern void UnityTls_get_IsSupported_mCBB21E730F0F22A25CB1E55731809D6EA899A780 (void);
// 0x0000000C Mono.Unity.UnityTls/unitytls_interface_struct Mono.Unity.UnityTls::get_NativeInterface()
extern void UnityTls_get_NativeInterface_mB7773702CFA41B1DF3C6868DDCF45E814F130D58 (void);
// 0x0000000D System.Void Mono.Unity.UnityTls/unitytls_x509verify_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509verify_callback__ctor_mCD4AE44980D156BAF7B292E03B17CEE73CBFA77A (void);
// 0x0000000E Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509verify_callback_Invoke_mE05631A7F1E2B1C94DE9D05468D1A399449BE3DB (void);
// 0x0000000F System.IAsyncResult Mono.Unity.UnityTls/unitytls_x509verify_callback::BeginInvoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509verify_callback_BeginInvoke_m80B588AC361E881F6B9A6A4CB1249527B5EE2D82 (void);
// 0x00000010 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_x509verify_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_x509verify_callback_EndInvoke_m4B9E4F34C79F1DB7EEBD8CD901402D21D9897DA5 (void);
// 0x00000011 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_write_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_write_callback__ctor_m4A3B6C97ADCDE640A6D51BEBF956FE89CE7FE06E (void);
// 0x00000012 System.IntPtr Mono.Unity.UnityTls/unitytls_tlsctx_write_callback::Invoke(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_write_callback_Invoke_mE4D37080BCB02702B715781D34FD5EB30816E87E (void);
// 0x00000013 System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_write_callback::BeginInvoke(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_write_callback_BeginInvoke_m56D8E3602D68CCF6F84B1241B4046230ECE9EB17 (void);
// 0x00000014 System.IntPtr Mono.Unity.UnityTls/unitytls_tlsctx_write_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_write_callback_EndInvoke_mF45640F3BD3B119F178FDDEAC7202B0084762C13 (void);
// 0x00000015 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_read_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_read_callback__ctor_m42EC0545CBCEE38C403A2AD81C2A951A18536317 (void);
// 0x00000016 System.IntPtr Mono.Unity.UnityTls/unitytls_tlsctx_read_callback::Invoke(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_read_callback_Invoke_m10194359ED6B21DAC2865817902E27D036864332 (void);
// 0x00000017 System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_read_callback::BeginInvoke(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_read_callback_BeginInvoke_m500B1F505ACCCE25672F6C4112379D824CA20B21 (void);
// 0x00000018 System.IntPtr Mono.Unity.UnityTls/unitytls_tlsctx_read_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_read_callback_EndInvoke_m5F3AE9D02E36D788A768006CF41CE166C3B1029A (void);
// 0x00000019 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_trace_callback__ctor_m5AAAAE3312A549267BC7A177CE9298C31B9FE6CD (void);
// 0x0000001A System.Void Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr)
extern void unitytls_tlsctx_trace_callback_Invoke_m9A667101357751D33683A21B461FA7EF0C8A9B9C (void);
// 0x0000001B System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback::BeginInvoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_trace_callback_BeginInvoke_mEA1F9A679A167E7758686CE4B73A60E8D316010F (void);
// 0x0000001C System.Void Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_trace_callback_EndInvoke_m7B34BE12F355DE949608742051B4F0E047D02487 (void);
// 0x0000001D System.Void Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_certificate_callback__ctor_mE30600E8B0DC15C286BEBDE36DB7CF0A5DC806A3 (void);
// 0x0000001E System.Void Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_certificate_callback_Invoke_m536C2AF2B9CF109A6014DFF45D3691EF04A56919 (void);
// 0x0000001F System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::BeginInvoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_certificate_callback_BeginInvoke_m7A678B70786434002434B2C15E17F0E642FC9606 (void);
// 0x00000020 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_certificate_callback_EndInvoke_m55CDFC75FB80F60044FFE4FA6939252C2A01FD7B (void);
// 0x00000021 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_x509verify_callback__ctor_mD102129FAC6B05E4B4454B322E0DE2E7BFB16B9F (void);
// 0x00000022 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_x509verify_callback_Invoke_mE24F745E1914200CEB53E4489DA7CD2072B46AEC (void);
// 0x00000023 System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::BeginInvoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_x509verify_callback_BeginInvoke_m96C1493D382DB98D0FDF62000704BA32B7C51F4B (void);
// 0x00000024 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_x509verify_callback_EndInvoke_mC445AA50EA5722909B9D24D543DB945654233729 (void);
// 0x00000025 System.Void Mono.Unity.UnityTls/unitytls_interface_struct::.ctor()
extern void unitytls_interface_struct__ctor_m55B3993F42779B4442042D897FAFEC6C978012AD (void);
// 0x00000026 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_errorstate_create_t__ctor_m502A58FB6B55E6F5A7C23A6D0BA9A57AD5C2FC8E (void);
// 0x00000027 Mono.Unity.UnityTls/unitytls_errorstate Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::Invoke()
extern void unitytls_errorstate_create_t_Invoke_m6DF09A1CC8C5C38D78CC2E510F318571202E7087 (void);
// 0x00000028 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::BeginInvoke(System.AsyncCallback,System.Object)
extern void unitytls_errorstate_create_t_BeginInvoke_m103F02317D04043A6F17DBA039AC7DE10720F2B4 (void);
// 0x00000029 Mono.Unity.UnityTls/unitytls_errorstate Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::EndInvoke(System.IAsyncResult)
extern void unitytls_errorstate_create_t_EndInvoke_m1129F7E0667ABDE028F644D2F6AE39659501283F (void);
// 0x0000002A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_errorstate_raise_error_t__ctor_mBDF3F1DBB55EBC328D0EE9A14A544A20CD076EBA (void);
// 0x0000002B System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::Invoke(Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_error_code)
extern void unitytls_errorstate_raise_error_t_Invoke_mB92B8CF1876FF0C9467C82918E427EBD324D8D8A (void);
// 0x0000002C System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_error_code,System.AsyncCallback,System.Object)
extern void unitytls_errorstate_raise_error_t_BeginInvoke_mABE9FA2B499289353E0B756509458BB432BFED51 (void);
// 0x0000002D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::EndInvoke(System.IAsyncResult)
extern void unitytls_errorstate_raise_error_t_EndInvoke_mDEBE29AF3E514929895AB7971B159BAB19E4BD5D (void);
// 0x0000002E System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_key_get_ref_t__ctor_mE569EA0229BC956FD332E398F4A6ED32902EFBE3 (void);
// 0x0000002F Mono.Unity.UnityTls/unitytls_key_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::Invoke(Mono.Unity.UnityTls/unitytls_key*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_key_get_ref_t_Invoke_mE487DAB011D7F5966E09A2245399B312C2EF9111 (void);
// 0x00000030 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_key*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_key_get_ref_t_BeginInvoke_m6E656A4FA9FC8D6BC473D707DAFC17DF861E8A95 (void);
// 0x00000031 Mono.Unity.UnityTls/unitytls_key_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::EndInvoke(System.IAsyncResult)
extern void unitytls_key_get_ref_t_EndInvoke_mBE91A77CA27DE41245B333EA0C8B93EAF0325DE2 (void);
// 0x00000032 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_key_parse_der_t__ctor_m6E905C011D2077EE54DA350886C16B2BD1EE7681 (void);
// 0x00000033 Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::Invoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_key_parse_der_t_Invoke_m108AFDBB38B2C1AD429E957CD5BEA93D23C152E6 (void);
// 0x00000034 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::BeginInvoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_key_parse_der_t_BeginInvoke_mD0BF42B3B39E50702EC624F2A8596D3017D0F93B (void);
// 0x00000035 Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::EndInvoke(System.IAsyncResult)
extern void unitytls_key_parse_der_t_EndInvoke_mEF249023FA9DD82850CB35FBF5691B44F8023A25 (void);
// 0x00000036 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_key_parse_pem_t__ctor_m47E001D14C6F8F11E914B1126DE9516411A2AC06 (void);
// 0x00000037 Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::Invoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_key_parse_pem_t_Invoke_mD4D86D5A1C3E8E9BF2BB9CC8774EB3499ED598F4 (void);
// 0x00000038 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::BeginInvoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_key_parse_pem_t_BeginInvoke_m0AA005FBD3649ACA89E06C9664AC4B7BE062FD7B (void);
// 0x00000039 Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::EndInvoke(System.IAsyncResult)
extern void unitytls_key_parse_pem_t_EndInvoke_m564A47C1A42623E189B4792E82B007B65D1BBEF7 (void);
// 0x0000003A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_key_free_t__ctor_m0233235C55B3ECFECA16F0A8346E97D6ADDEC040 (void);
// 0x0000003B System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::Invoke(Mono.Unity.UnityTls/unitytls_key*)
extern void unitytls_key_free_t_Invoke_m4DD025ECA7C3B5020EBF702BC4BAAE8D9B3C807B (void);
// 0x0000003C System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_key*,System.AsyncCallback,System.Object)
extern void unitytls_key_free_t_BeginInvoke_m972ED483F0CC8F99724B66019E736094D326EE29 (void);
// 0x0000003D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::EndInvoke(System.IAsyncResult)
extern void unitytls_key_free_t_EndInvoke_m47D280EFAE1EA7E16E6400B2F47A83C408410A24 (void);
// 0x0000003E System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509_export_der_t__ctor_m4514C241AC221F91BBB088FF1DC31B342DCA7397 (void);
// 0x0000003F System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509_export_der_t_Invoke_mFA1224BE85A73019C32C3CB0E8ABD7E5BFEFFA82 (void);
// 0x00000040 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509_export_der_t_BeginInvoke_m315A20FF03D9FD6B82A9A3997267A4E4B72B8D05 (void);
// 0x00000041 System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509_export_der_t_EndInvoke_m660B809820CF47708B4DB7EBDF618AB34B70242E (void);
// 0x00000042 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_get_ref_t__ctor_m672FA9C9A5170D460A7D9839E786559819DB8459 (void);
// 0x00000043 Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_get_ref_t_Invoke_mFADB5F4BCB29A18DD0BD689EA8180D74CD9E4E63 (void);
// 0x00000044 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_get_ref_t_BeginInvoke_m282E11FB630DFD9FAA07EE42FA460C10AD6A7915 (void);
// 0x00000045 Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_get_ref_t_EndInvoke_mF4CA76D68207C44E63DA55C4C4208576998D5AE0 (void);
// 0x00000046 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_get_x509_t__ctor_mE5676A42AAAE07337AB42C51E139736482AD3FCC (void);
// 0x00000047 Mono.Unity.UnityTls/unitytls_x509_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_get_x509_t_Invoke_m58A02DBC5C5C9A0C693DFDE3BEBCE8518C5BEDFE (void);
// 0x00000048 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_get_x509_t_BeginInvoke_m5B76F36D52C182CFB7B62AA43C3E159E7E7DB468 (void);
// 0x00000049 Mono.Unity.UnityTls/unitytls_x509_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_get_x509_t_EndInvoke_m6AFA7951802ED216C9EB13AAA7A5C707F7289F41 (void);
// 0x0000004A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_create_t__ctor_m396CBCF6F413041E9FB829BCF12DBB71160E0CC5 (void);
// 0x0000004B Mono.Unity.UnityTls/unitytls_x509list* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::Invoke(Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_create_t_Invoke_m3A52B8B8AC08AA77CEDD34817D2C15209130A1F1 (void);
// 0x0000004C System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_create_t_BeginInvoke_m85BD25215C3E215460E132F10110223FED5C7CA2 (void);
// 0x0000004D Mono.Unity.UnityTls/unitytls_x509list* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_create_t_EndInvoke_m4D70BD363D9EA21E21E73C6705E62955477CB3B0 (void);
// 0x0000004E System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_append_t__ctor_m264F31493E6C24EF19C6560237F1DFB0522195C2 (void);
// 0x0000004F System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_append_t_Invoke_m85E010BA75CBBCC9B32C8A6C685E4F2CCFB69300 (void);
// 0x00000050 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_append_t_BeginInvoke_m3A87AAC9A120A76CEC99B52A91B43739A74D097F (void);
// 0x00000051 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_append_t_EndInvoke_m06BB61716750C77C7D19DF3A10628680899382C9 (void);
// 0x00000052 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_append_der_t__ctor_m814A959A92E1D413C2AB5BE0E8920318D52C8F3F (void);
// 0x00000053 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_append_der_t_Invoke_mA432486D4A73BB7FC4DFE3DD02205FE4C0AB9066 (void);
// 0x00000054 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_append_der_t_BeginInvoke_mFC163657F9DBE3408CE9FBD94C0E0D672099618D (void);
// 0x00000055 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_append_der_t_EndInvoke_m6002A55859F4C9DCF95DEBADC867E85E33DEF36E (void);
// 0x00000056 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_free_t__ctor_m360A7960A558BFF26B537EE2717CE4FF60612EBE (void);
// 0x00000057 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*)
extern void unitytls_x509list_free_t_Invoke_m5F920A1A43E549E297391F2033A04AF8C05A3C4C (void);
// 0x00000058 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_free_t_BeginInvoke_m43DF55CE129363751C545897CF317FAD1D7BFA1A (void);
// 0x00000059 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_free_t_EndInvoke_m2EAAE00B58B3922A632D13E4DFA3DD737D971916 (void);
// 0x0000005A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509verify_default_ca_t__ctor_m87E8CBD1080B32E3E9B2085435089120EE8E7B51 (void);
// 0x0000005B Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509verify_default_ca_t_Invoke_m22C2DE021D3D750655FFEF54BE2B030596F1A82E (void);
// 0x0000005C System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509verify_default_ca_t_BeginInvoke_mDD34421A5A03B034EAD940EA3E667E2ACEFF5829 (void);
// 0x0000005D Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509verify_default_ca_t_EndInvoke_m4D26A5425526F6A205596F7AE025620E74173282 (void);
// 0x0000005E System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509verify_explicit_ca_t__ctor_m27337465175BADAB82BFF9333ADA82DCF2DFD2A3 (void);
// 0x0000005F Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509verify_explicit_ca_t_Invoke_m56F009ABDD7ED613CB6AC27AF8CAD6E6FB34555B (void);
// 0x00000060 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509verify_explicit_ca_t_BeginInvoke_m83F9DF37B6DCF058C496C26892257C5FE3CAB8F1 (void);
// 0x00000061 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509verify_explicit_ca_t_EndInvoke_mC69D3C3E3F677940005907387BF6A51758A67968 (void);
// 0x00000062 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_create_server_t__ctor_m444E3E5CA424BD6649C48AA2724ECABE25A6ACA7 (void);
// 0x00000063 Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_create_server_t_Invoke_m9BAA6CD5D7D6646AFC00AFAF4128DF92428F0F44 (void);
// 0x00000064 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_create_server_t_BeginInvoke_mB600A87E8909E5FBCA2FC92239A783E345BCB5D7 (void);
// 0x00000065 Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_create_server_t_EndInvoke_mE0ED7A6AE53A54CF3479E70917D0BB2F8EC2DE3A (void);
// 0x00000066 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_create_client_t__ctor_mBEAE100CA3144364E49C2468343428FE9E19F9B6 (void);
// 0x00000067 Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_create_client_t_Invoke_m3BABCEA6ED54FD59886B7E8685BD7BDB6145079A (void);
// 0x00000068 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_create_client_t_BeginInvoke_mAF50983B4C1D6DC77B6E7A644872A95E88769D95 (void);
// 0x00000069 Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_create_client_t_EndInvoke_mFFC92B25698A95310EB56B6C8B82661E75D348C4 (void);
// 0x0000006A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_server_require_client_authentication_t__ctor_mA41774A651C25857A72D3694EBDE91E70A408D81 (void);
// 0x0000006B System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_server_require_client_authentication_t_Invoke_mC8E06902662956294CEC4AFCF8697671E7BA3639 (void);
// 0x0000006C System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_server_require_client_authentication_t_BeginInvoke_mF93542F5F7DC74FC5042D346C0956E694F4B2479 (void);
// 0x0000006D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_server_require_client_authentication_t_EndInvoke_m8F406760E0CA52C53B0C91D7A7862119F10E3B7C (void);
// 0x0000006E System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_set_certificate_callback_t__ctor_mDC0A66278594A9B37EFA6FA3010AFD64DC3E81BE (void);
// 0x0000006F System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_set_certificate_callback_t_Invoke_m3F334D5FFB2B3C104C1E65A04B044138CE51DFAD (void);
// 0x00000070 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_set_certificate_callback_t_BeginInvoke_m69D89510CE1C44BF29C88E2025C42F1ACD29605C (void);
// 0x00000071 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_set_certificate_callback_t_EndInvoke_mC3508D12AB7792789623E2CFAA028D214200C244 (void);
// 0x00000072 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_set_trace_callback_t__ctor_mAA8F0A3B039F2A5DA4EA77F6DDA2573BB5FDA80B (void);
// 0x00000073 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_set_trace_callback_t_Invoke_mFC61F57B75911E4A1B08221AB854D91F5F03D476 (void);
// 0x00000074 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_set_trace_callback_t_BeginInvoke_m03FCD2BF1AA2571CC4F2CFF59251EFA20421F156 (void);
// 0x00000075 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_set_trace_callback_t_EndInvoke_m07BE3163185F6B3B1D299589E648F7C571D324FE (void);
// 0x00000076 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_set_x509verify_callback_t__ctor_m78790E0190264955C6B51F3ACCAAA2C02FC1CB52 (void);
// 0x00000077 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_set_x509verify_callback_t_Invoke_m81E1B51C444B1074314AD55C22EC20E6AD8FA476 (void);
// 0x00000078 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_set_x509verify_callback_t_BeginInvoke_mA488C207261DAA26D3D5A81F3549B9B058382DD2 (void);
// 0x00000079 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_set_x509verify_callback_t_EndInvoke_m8BDF1F043AA55E4FAA727E67B544440ED316ED18 (void);
// 0x0000007A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_set_supported_ciphersuites_t__ctor_m46A364914173C343267CFDC8B61D7DF4197C6448 (void);
// 0x0000007B System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_ciphersuite*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_set_supported_ciphersuites_t_Invoke_mE7E379E36B2B4719ECF97F375682CD0DBF407F1B (void);
// 0x0000007C System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_ciphersuite*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_set_supported_ciphersuites_t_BeginInvoke_m03D9AE30DA07EB020A31669DC158422A593329E9 (void);
// 0x0000007D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_set_supported_ciphersuites_t_EndInvoke_mAB41900E507484AD23583DE18E853B9B6145EF4C (void);
// 0x0000007E System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_get_ciphersuite_t__ctor_mE7AEF274ACD666FBA2C02F14DA38014EAD75F8E0 (void);
// 0x0000007F Mono.Unity.UnityTls/unitytls_ciphersuite Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_get_ciphersuite_t_Invoke_mDA134EC5BFA53F4985D9D10A8D4ACB971AE6D0A1 (void);
// 0x00000080 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_get_ciphersuite_t_BeginInvoke_mA110391B7158B9BDC4F0597317AD70CDF0DF017F (void);
// 0x00000081 Mono.Unity.UnityTls/unitytls_ciphersuite Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_get_ciphersuite_t_EndInvoke_m9A477430340005FD37AFC45C377F3FBB8F60FF7D (void);
// 0x00000082 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_get_protocol_t__ctor_m42F49F551071AB0F91AB7810C8DC47A2A33F1384 (void);
// 0x00000083 Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_get_protocol_t_Invoke_m756BD8E367A9BF2872A3A2183366B5C5098A634C (void);
// 0x00000084 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_get_protocol_t_BeginInvoke_mEEAFA0B27A4655BA9729136FBB2A5383151E3169 (void);
// 0x00000085 Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_get_protocol_t_EndInvoke_mAB8A83B00C32C256F56E255EB9A683AE7924CE94 (void);
// 0x00000086 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_process_handshake_t__ctor_m5FCC62940BECF2001364EA925FF543E1F59EBC61 (void);
// 0x00000087 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_process_handshake_t_Invoke_mB249F948100B2752B2A6BF79C7F9038523C1C89B (void);
// 0x00000088 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_process_handshake_t_BeginInvoke_m8E4E264B100447C3590366B75F7C79E75D99EAA4 (void);
// 0x00000089 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_process_handshake_t_EndInvoke_m3144D076D4C10224C8BFF05671EBDB5F0EFA6FBB (void);
// 0x0000008A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_read_t__ctor_m292F01CA56EC409E7CDA69BE0AA10B19B3E20F4E (void);
// 0x0000008B System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_read_t_Invoke_m142B61FBEE88603BE95202B62762E92008324935 (void);
// 0x0000008C System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_read_t_BeginInvoke_mDE6D1E5ED970FB74D58A7C9D849D5CEF0A80066F (void);
// 0x0000008D System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_read_t_EndInvoke_m3BCF50CAB32A1EFADEB497D3A50694C018E285C5 (void);
// 0x0000008E System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_write_t__ctor_m300C5AEFDFE22C96322EABE38FD2CA962350D96B (void);
// 0x0000008F System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_write_t_Invoke_m4365C50B81B1904232514233B8252D15E3059416 (void);
// 0x00000090 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_write_t_BeginInvoke_m7DEACE7853FE244D613A77ABEC04AC821B31F503 (void);
// 0x00000091 System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_write_t_EndInvoke_mE16B80B19C507E3EDF89DA7971AB267BACDC5E86 (void);
// 0x00000092 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_notify_close_t__ctor_m9FBFA390FFA5F0E59EF1652BD1F8EC4BB579D787 (void);
// 0x00000093 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_notify_close_t_Invoke_m1DF2F894CC7D1DAC1ED86AB643EF4D9482DBDBDD (void);
// 0x00000094 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_notify_close_t_BeginInvoke_m73742B8B1BC173EC206ADC3CA492E3BEED2A67A1 (void);
// 0x00000095 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_notify_close_t_EndInvoke_mD5B659727C0CAD54F05D14BD3C1A554907695F1D (void);
// 0x00000096 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_free_t__ctor_mE457D4E43F47148D44E137E6C767DCD036DB34E9 (void);
// 0x00000097 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*)
extern void unitytls_tlsctx_free_t_Invoke_m54B2D3A510B87650E7AF041CC60A9FF44ECA9437 (void);
// 0x00000098 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_free_t_BeginInvoke_m4709DCB59DEDE7C1500CA164F5E304318ACB9025 (void);
// 0x00000099 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_free_t_EndInvoke_m016FC930E1F5CD52FF74DD4FB462C9613813F39E (void);
// 0x0000009A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_random_generate_bytes_t__ctor_m55CC9979ADA003BEFF41370469BB0A82DFAC67E8 (void);
// 0x0000009B System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::Invoke(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_random_generate_bytes_t_Invoke_mA5EFE8A5F4D068BEC771CE12BD5BD26F9A86BB84 (void);
// 0x0000009C System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::BeginInvoke(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_random_generate_bytes_t_BeginInvoke_m27BF16ECBD2C66644B2626E3CFC61600491E7194 (void);
// 0x0000009D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::EndInvoke(System.IAsyncResult)
extern void unitytls_random_generate_bytes_t_EndInvoke_m74F081B09F91875EF4AC852F58AAD04BCAC1D205 (void);
// 0x0000009E System.Void Mono.Unity.UnityTlsContext::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
extern void UnityTlsContext__ctor_mC0C9DB6F5662F4076B3C4B21445826FFEB1C72D0 (void);
// 0x0000009F System.Void Mono.Unity.UnityTlsContext::ExtractNativeKeyAndChainFromManagedCertificate(System.Security.Cryptography.X509Certificates.X509Certificate,Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_x509list*&,Mono.Unity.UnityTls/unitytls_key*&)
extern void UnityTlsContext_ExtractNativeKeyAndChainFromManagedCertificate_m70256B35652930E4D9B1D6151B6839DEE667DD30 (void);
// 0x000000A0 System.Boolean Mono.Unity.UnityTlsContext::get_IsAuthenticated()
extern void UnityTlsContext_get_IsAuthenticated_m43044D90BF11D30EE6EEB2F4F5FFE470FE7B7231 (void);
// 0x000000A1 System.Security.Cryptography.X509Certificates.X509Certificate Mono.Unity.UnityTlsContext::get_LocalClientCertificate()
extern void UnityTlsContext_get_LocalClientCertificate_m93F6CE29BBC552756C95C6F5533DF1936A0142ED (void);
// 0x000000A2 System.ValueTuple`2<System.Int32,System.Boolean> Mono.Unity.UnityTlsContext::Read(System.Byte[],System.Int32,System.Int32)
extern void UnityTlsContext_Read_m4B2AC92721AEDAA58680B52E3E6D4EAA5E05FE13 (void);
// 0x000000A3 System.ValueTuple`2<System.Int32,System.Boolean> Mono.Unity.UnityTlsContext::Write(System.Byte[],System.Int32,System.Int32)
extern void UnityTlsContext_Write_mB34B278D4ECAD5F44AF4E9B3BA9CEC68AED19D34 (void);
// 0x000000A4 System.Void Mono.Unity.UnityTlsContext::Shutdown()
extern void UnityTlsContext_Shutdown_m24BD0E633C03B67F07165229426415BE206782B0 (void);
// 0x000000A5 System.Void Mono.Unity.UnityTlsContext::Dispose(System.Boolean)
extern void UnityTlsContext_Dispose_mCD3E2E28B0A68F82020472033B246DA57444FD06 (void);
// 0x000000A6 System.Void Mono.Unity.UnityTlsContext::StartHandshake()
extern void UnityTlsContext_StartHandshake_m94C4C84918F93A3107DF9875206181C560C8550F (void);
// 0x000000A7 System.Boolean Mono.Unity.UnityTlsContext::ProcessHandshake()
extern void UnityTlsContext_ProcessHandshake_m0B483DA2D4468555E8B7F8FB7EF9DF1A926CC69A (void);
// 0x000000A8 System.Void Mono.Unity.UnityTlsContext::FinishHandshake()
extern void UnityTlsContext_FinishHandshake_mB88A2326E0464370EB0938B3204A566816CE1D69 (void);
// 0x000000A9 System.IntPtr Mono.Unity.UnityTlsContext::WriteCallback(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_WriteCallback_m466D11090AF989AD1F14E6FE049320297C12A86C (void);
// 0x000000AA System.IntPtr Mono.Unity.UnityTlsContext::WriteCallback(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_WriteCallback_mB052756E2D187C3FCC59F9C90DC574444D88AAE1 (void);
// 0x000000AB System.IntPtr Mono.Unity.UnityTlsContext::ReadCallback(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_ReadCallback_mA0BF382397D912B79B6064B58B6C7C5D97853245 (void);
// 0x000000AC System.IntPtr Mono.Unity.UnityTlsContext::ReadCallback(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_ReadCallback_mE959A9C94E3AB908FD5AE20C21B4CB6FA46DE6FD (void);
// 0x000000AD Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTlsContext::VerifyCallback(System.Void*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_VerifyCallback_m8C61EF3A0037483AD56A083CA47D8E4C0404961E (void);
// 0x000000AE Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTlsContext::VerifyCallback(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_VerifyCallback_m7A39B7F3311262CCC65B615F0B1841AEC3EBD6A2 (void);
// 0x000000AF System.Void Mono.Unity.UnityTlsContext::CertificateCallback(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_CertificateCallback_m793CC2EDD82935F29A3DEBD1F208DC56EA822E9C (void);
// 0x000000B0 System.Void Mono.Unity.UnityTlsContext::CertificateCallback(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_CertificateCallback_m7E54408ABCE341F31E4470746F9BFE2799B86297 (void);
// 0x000000B1 Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTlsConversions::GetMinProtocol(System.Security.Authentication.SslProtocols)
extern void UnityTlsConversions_GetMinProtocol_mC098F43CCD8DF9A77BFD69D3D9D5F569204B04F3 (void);
// 0x000000B2 Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTlsConversions::GetMaxProtocol(System.Security.Authentication.SslProtocols)
extern void UnityTlsConversions_GetMaxProtocol_mAC1B84A7E2515C284F4D3C2AE0C2702557F40CA3 (void);
// 0x000000B3 Mono.Security.Interface.TlsProtocols Mono.Unity.UnityTlsConversions::ConvertProtocolVersion(Mono.Unity.UnityTls/unitytls_protocol)
extern void UnityTlsConversions_ConvertProtocolVersion_m555EF21FA846A96FE52C5E3FBA3AD10D202A9448 (void);
// 0x000000B4 Mono.Security.Interface.AlertDescription Mono.Unity.UnityTlsConversions::VerifyResultToAlertDescription(Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Security.Interface.AlertDescription)
extern void UnityTlsConversions_VerifyResultToAlertDescription_m78E79C1E3C062E64EB36CFC6280AB67A7EF12089 (void);
// 0x000000B5 Mono.Security.Interface.MonoSslPolicyErrors Mono.Unity.UnityTlsConversions::VerifyResultToPolicyErrror(Mono.Unity.UnityTls/unitytls_x509verify_result)
extern void UnityTlsConversions_VerifyResultToPolicyErrror_m60E61EFD192DCDA65BBE1A1356A102B7E8BCE655 (void);
// 0x000000B6 System.Security.Cryptography.X509Certificates.X509ChainStatusFlags Mono.Unity.UnityTlsConversions::VerifyResultToChainStatus(Mono.Unity.UnityTls/unitytls_x509verify_result)
extern void UnityTlsConversions_VerifyResultToChainStatus_mFDA2FD248854061D2C8009E4A46294C9810D90FD (void);
// 0x000000B7 System.String Mono.Unity.UnityTlsProvider::get_Name()
extern void UnityTlsProvider_get_Name_mDDA55EE63A0B76B6E0E60A8BB24B2796A619C330 (void);
// 0x000000B8 System.Guid Mono.Unity.UnityTlsProvider::get_ID()
extern void UnityTlsProvider_get_ID_mB7896E12045D7FF2430DC7F9EAF15D706CB7744F (void);
// 0x000000B9 System.Boolean Mono.Unity.UnityTlsProvider::get_SupportsSslStream()
extern void UnityTlsProvider_get_SupportsSslStream_mE4CB1384EF4F9EF0C96410AD2CB8C902F231B3F6 (void);
// 0x000000BA System.Boolean Mono.Unity.UnityTlsProvider::get_SupportsMonoExtensions()
extern void UnityTlsProvider_get_SupportsMonoExtensions_m8CA16CD7D8BFEB7520C3FC8AE4991D907E2844EF (void);
// 0x000000BB System.Boolean Mono.Unity.UnityTlsProvider::get_SupportsConnectionInfo()
extern void UnityTlsProvider_get_SupportsConnectionInfo_m9332B1DE0BD3C876B3AE3C6AD0057BC613564CE1 (void);
// 0x000000BC System.Boolean Mono.Unity.UnityTlsProvider::get_SupportsCleanShutdown()
extern void UnityTlsProvider_get_SupportsCleanShutdown_mE9DF84BAD50C6616D0263C17CEE3A8145ADEBC8E (void);
// 0x000000BD System.Security.Authentication.SslProtocols Mono.Unity.UnityTlsProvider::get_SupportedProtocols()
extern void UnityTlsProvider_get_SupportedProtocols_mF4F9DC4EDA1444E22899C9A97A1DCCDC34C81EF2 (void);
// 0x000000BE Mono.Security.Interface.IMonoSslStream Mono.Unity.UnityTlsProvider::CreateSslStream(System.IO.Stream,System.Boolean,Mono.Security.Interface.MonoTlsSettings)
extern void UnityTlsProvider_CreateSslStream_mDC86FCB0F22309601707CF35B246839919298648 (void);
// 0x000000BF Mono.Security.Interface.IMonoSslStream Mono.Unity.UnityTlsProvider::CreateSslStreamInternal(System.Net.Security.SslStream,System.IO.Stream,System.Boolean,Mono.Security.Interface.MonoTlsSettings)
extern void UnityTlsProvider_CreateSslStreamInternal_mF1D7EA59B6FD86A48A26BB32EDC4FFE6E3E6E348 (void);
// 0x000000C0 System.Boolean Mono.Unity.UnityTlsProvider::ValidateCertificate(Mono.Security.Interface.ICertificateValidator2,System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean,System.Security.Cryptography.X509Certificates.X509Chain&,Mono.Security.Interface.MonoSslPolicyErrors&,System.Int32&)
extern void UnityTlsProvider_ValidateCertificate_mA8A956114D6DA3186D05C8C19CB7032612199332 (void);
// 0x000000C1 System.Void Mono.Unity.UnityTlsProvider::.ctor()
extern void UnityTlsProvider__ctor_m59FD632B779113F9605538F8F598A53D1AC6985B (void);
// 0x000000C2 System.Void Mono.Unity.UnityTlsStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.SslStream,Mono.Security.Interface.MonoTlsSettings,Mono.Security.Interface.MonoTlsProvider)
extern void UnityTlsStream__ctor_m729A992C4510BCCEA67907859E15ADD36EFF6A27 (void);
// 0x000000C3 Mono.Net.Security.MobileTlsContext Mono.Unity.UnityTlsStream::CreateContext(System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
extern void UnityTlsStream_CreateContext_mA65D6D4D86EA24719CC88E657512544B22F97B75 (void);
// 0x000000C4 System.Void Mono.Unity.X509ChainImplUnityTls::.ctor(Mono.Unity.UnityTls/unitytls_x509list_ref)
extern void X509ChainImplUnityTls__ctor_mCB15EEDD1B74D120351A35284065CA25A7416BA2 (void);
// 0x000000C5 System.Boolean Mono.Unity.X509ChainImplUnityTls::get_IsValid()
extern void X509ChainImplUnityTls_get_IsValid_mA6540F1719A911C99CCEDADECDFAE0024D7AAB1D (void);
// 0x000000C6 Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.X509ChainImplUnityTls::get_NativeCertificateChain()
extern void X509ChainImplUnityTls_get_NativeCertificateChain_mCF317E093A598896E07D14E5F3818BD5AE1D59AB (void);
// 0x000000C7 System.Security.Cryptography.X509Certificates.X509ChainElementCollection Mono.Unity.X509ChainImplUnityTls::get_ChainElements()
extern void X509ChainImplUnityTls_get_ChainElements_m0D5D46E3941F2DE26FEFAFE94EFC8D83203185D3 (void);
// 0x000000C8 System.Void Mono.Unity.X509ChainImplUnityTls::set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy)
extern void X509ChainImplUnityTls_set_ChainPolicy_m5F859F385256EDE337043A984EB7A85DDC3A3CBF (void);
// 0x000000C9 System.Void Mono.Unity.X509ChainImplUnityTls::AddStatus(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern void X509ChainImplUnityTls_AddStatus_m9B56480F6C492FED2C59E8A5AAAA30B74F061E10 (void);
// 0x000000CA System.Void Mono.Unity.X509ChainImplUnityTls::Reset()
extern void X509ChainImplUnityTls_Reset_m888604968EB148EA0CB8D6205575BBC5F58F9B63 (void);
// 0x000000CB System.Void Mono.Unity.X509ChainImplUnityTls::Dispose(System.Boolean)
extern void X509ChainImplUnityTls_Dispose_m35AB9FAEC54B7B74DB7C0BFCDEDCD3D7694CF77F (void);
// 0x000000CC System.IntPtr Mono.Net.CFObject::dlopen(System.String,System.Int32)
extern void CFObject_dlopen_m29EB69AF02B241D923032648A7963DEF4D8E4CC5 (void);
// 0x000000CD System.IntPtr Mono.Net.CFObject::dlsym(System.IntPtr,System.String)
extern void CFObject_dlsym_m5EC2EC3D7641B183C77B8242FDD8DDE0E8F44BD6 (void);
// 0x000000CE System.Void Mono.Net.CFObject::dlclose(System.IntPtr)
extern void CFObject_dlclose_mBE0671E0D3F7AEA620BADFD6488143977569FE61 (void);
// 0x000000CF System.IntPtr Mono.Net.CFObject::GetIndirect(System.IntPtr,System.String)
extern void CFObject_GetIndirect_m9DB824A82AFC5912132B005B866C357C3AA89244 (void);
// 0x000000D0 System.IntPtr Mono.Net.CFObject::GetCFObjectHandle(System.IntPtr,System.String)
extern void CFObject_GetCFObjectHandle_m1D3B736481788AD65F9EF54BF8223C21B7405673 (void);
// 0x000000D1 System.Void Mono.Net.CFObject::.ctor(System.IntPtr,System.Boolean)
extern void CFObject__ctor_m07A15746456C8DD8E6E52905DFE5289178F079FD (void);
// 0x000000D2 System.Void Mono.Net.CFObject::Finalize()
extern void CFObject_Finalize_m643133D3B8DFAD68EF8A086BE25B3652563FA7C3 (void);
// 0x000000D3 System.IntPtr Mono.Net.CFObject::get_Handle()
extern void CFObject_get_Handle_mFE029493BB597D83A2BAC50BC506C8F7819336F7 (void);
// 0x000000D4 System.Void Mono.Net.CFObject::set_Handle(System.IntPtr)
extern void CFObject_set_Handle_m88C2472F18456CC638B63034B489EE76923098C4 (void);
// 0x000000D5 System.IntPtr Mono.Net.CFObject::CFRetain(System.IntPtr)
extern void CFObject_CFRetain_mC8AEFDAACF6AA6F897D9FEBCD7D2612052A9A279 (void);
// 0x000000D6 System.Void Mono.Net.CFObject::Retain()
extern void CFObject_Retain_m0F3DFD2CDD800D9BBF5543F954FD32FB3D71F989 (void);
// 0x000000D7 System.Void Mono.Net.CFObject::CFRelease(System.IntPtr)
extern void CFObject_CFRelease_m028686C5FAD2396EA634AA2F9BD3ADD689CD7632 (void);
// 0x000000D8 System.Void Mono.Net.CFObject::Release()
extern void CFObject_Release_m6B6128DF1AED8B5F9D3B483696C1C49D0BFA7C76 (void);
// 0x000000D9 System.Void Mono.Net.CFObject::Dispose(System.Boolean)
extern void CFObject_Dispose_mF350A1FD7D3BA6BE7F0511B5EF9EB9F383940EBC (void);
// 0x000000DA System.Void Mono.Net.CFObject::Dispose()
extern void CFObject_Dispose_m87063A0C278026A8E9B40F0FFE8E453A270CF73A (void);
// 0x000000DB System.Void Mono.Net.CFArray::.ctor(System.IntPtr,System.Boolean)
extern void CFArray__ctor_mC4C9002848DD6098638622BFDA52BB77E8A021FB (void);
// 0x000000DC System.Void Mono.Net.CFArray::.cctor()
extern void CFArray__cctor_m44C24E5900506C7778F9E6F6E674A644388178CE (void);
// 0x000000DD System.IntPtr Mono.Net.CFArray::CFArrayGetCount(System.IntPtr)
extern void CFArray_CFArrayGetCount_m320E2F1C9FFF2159AD31A8C13A6A4FBC1C30280D (void);
// 0x000000DE System.Int32 Mono.Net.CFArray::get_Count()
extern void CFArray_get_Count_m200F3F3339CF874AE95DE987CB2AC3CFF6D40DE5 (void);
// 0x000000DF System.IntPtr Mono.Net.CFArray::CFArrayGetValueAtIndex(System.IntPtr,System.IntPtr)
extern void CFArray_CFArrayGetValueAtIndex_m99879F463DD339CC249B87EC9962A4D2E08DED7D (void);
// 0x000000E0 System.IntPtr Mono.Net.CFArray::get_Item(System.Int32)
extern void CFArray_get_Item_m18A8672B778744594ADDB29DFFB96224A686FE7C (void);
// 0x000000E1 System.Boolean Mono.Net.CFNumber::CFNumberGetValue(System.IntPtr,System.IntPtr,System.Int32&)
extern void CFNumber_CFNumberGetValue_m47D6E984DEBFEE051D237F510D70F7F3DF5DEBE8 (void);
// 0x000000E2 System.Int32 Mono.Net.CFNumber::AsInt32(System.IntPtr)
extern void CFNumber_AsInt32_m7CB0106AD5D5E1EDD8B1B36BA272BC7356B001B6 (void);
// 0x000000E3 System.Void Mono.Net.CFRange::.ctor(System.Int32,System.Int32)
extern void CFRange__ctor_m47A3FC3DC70D9A9685171D0A666C21E9522EDC49 (void);
// 0x000000E4 System.Void Mono.Net.CFString::.ctor(System.IntPtr,System.Boolean)
extern void CFString__ctor_m6FC1151D49252BA6F14027DF6FC09D9ABBEC5140 (void);
// 0x000000E5 System.IntPtr Mono.Net.CFString::CFStringCreateWithCharacters(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFString_CFStringCreateWithCharacters_mCA349EA6BFA81A58404451E5C57F75717F6F7DCE (void);
// 0x000000E6 Mono.Net.CFString Mono.Net.CFString::Create(System.String)
extern void CFString_Create_m8F699B4DDDEE345AEC650353CB5755B6EADC12D6 (void);
// 0x000000E7 System.IntPtr Mono.Net.CFString::CFStringGetLength(System.IntPtr)
extern void CFString_CFStringGetLength_m33A40318266E7D609FB66FABF060B357CB86C0EA (void);
// 0x000000E8 System.IntPtr Mono.Net.CFString::CFStringGetCharactersPtr(System.IntPtr)
extern void CFString_CFStringGetCharactersPtr_m360E6706B2B077F051E51BCA7E554433E96B7A65 (void);
// 0x000000E9 System.IntPtr Mono.Net.CFString::CFStringGetCharacters(System.IntPtr,Mono.Net.CFRange,System.IntPtr)
extern void CFString_CFStringGetCharacters_m5139571D799842372F293519BA7EF1F2776FF883 (void);
// 0x000000EA System.String Mono.Net.CFString::AsString(System.IntPtr)
extern void CFString_AsString_m8209C956CA533F61D4B5F274640C03739BD1463A (void);
// 0x000000EB System.String Mono.Net.CFString::ToString()
extern void CFString_ToString_mC3C3C20058C738903A5A783ED91E0D8A6694D876 (void);
// 0x000000EC System.Void Mono.Net.CFDictionary::.cctor()
extern void CFDictionary__cctor_m7646C880CEFBCA5694B34C74F8294A8D526D0669 (void);
// 0x000000ED System.Void Mono.Net.CFDictionary::.ctor(System.IntPtr,System.Boolean)
extern void CFDictionary__ctor_mE147DDB550455913714118F199EA136AB5FE2F92 (void);
// 0x000000EE System.IntPtr Mono.Net.CFDictionary::CFDictionaryGetValue(System.IntPtr,System.IntPtr)
extern void CFDictionary_CFDictionaryGetValue_m3D6FA09CC32FA06C4408ABF645810A92184A83B7 (void);
// 0x000000EF System.IntPtr Mono.Net.CFDictionary::GetValue(System.IntPtr)
extern void CFDictionary_GetValue_m947C063E75C13525FD1214A89F23C5B05469891B (void);
// 0x000000F0 System.IntPtr Mono.Net.CFDictionary::get_Item(System.IntPtr)
extern void CFDictionary_get_Item_m53003799E29C3F41B9C51927762F1D5921A5517F (void);
// 0x000000F1 System.Void Mono.Net.CFUrl::.ctor(System.IntPtr,System.Boolean)
extern void CFUrl__ctor_m623159BA6C864641A77B1F59C8F09D4AE364163E (void);
// 0x000000F2 System.IntPtr Mono.Net.CFUrl::CFURLCreateWithString(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFUrl_CFURLCreateWithString_mC1C1F16C817B6E31F452CA63C38E9D6E8949678D (void);
// 0x000000F3 Mono.Net.CFUrl Mono.Net.CFUrl::Create(System.String)
extern void CFUrl_Create_m4D63DAD21AD9658FD227D0E0385AA0745D8DFE0D (void);
// 0x000000F4 System.Void Mono.Net.CFRunLoop::CFRunLoopAddSource(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFRunLoop_CFRunLoopAddSource_m9110DBBA1333686B2460B32716C113F1FC84D502 (void);
// 0x000000F5 System.Void Mono.Net.CFRunLoop::CFRunLoopRemoveSource(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFRunLoop_CFRunLoopRemoveSource_m98631D2406E345952E25EFDD22740D563516FC64 (void);
// 0x000000F6 System.Int32 Mono.Net.CFRunLoop::CFRunLoopRunInMode(System.IntPtr,System.Double,System.Boolean)
extern void CFRunLoop_CFRunLoopRunInMode_mAA29D2730697A20E634E7064EE08A4504475CA80 (void);
// 0x000000F7 System.IntPtr Mono.Net.CFRunLoop::CFRunLoopGetCurrent()
extern void CFRunLoop_CFRunLoopGetCurrent_mD98BA5C15429671A8C8957A6FDFA33497ABAD0A1 (void);
// 0x000000F8 System.Void Mono.Net.CFRunLoop::CFRunLoopStop(System.IntPtr)
extern void CFRunLoop_CFRunLoopStop_m1E9A301D3BE1DBFB3B3457656EA1053A37D637A0 (void);
// 0x000000F9 System.Void Mono.Net.CFRunLoop::.ctor(System.IntPtr,System.Boolean)
extern void CFRunLoop__ctor_m9DCFB09DC63118A1A8F61BF6ECACFE71C4B26974 (void);
// 0x000000FA Mono.Net.CFRunLoop Mono.Net.CFRunLoop::get_CurrentRunLoop()
extern void CFRunLoop_get_CurrentRunLoop_m74A218C71BAB62C4747A1C08FC363AFE7B0FA45E (void);
// 0x000000FB System.Void Mono.Net.CFRunLoop::AddSource(System.IntPtr,Mono.Net.CFString)
extern void CFRunLoop_AddSource_m15D6017176B691ABD72806F93C6D5D39FBC42245 (void);
// 0x000000FC System.Void Mono.Net.CFRunLoop::RemoveSource(System.IntPtr,Mono.Net.CFString)
extern void CFRunLoop_RemoveSource_m9F692D2493BC9B1F1E148C2CDA0C81A68D7D5CFE (void);
// 0x000000FD System.Int32 Mono.Net.CFRunLoop::RunInMode(Mono.Net.CFString,System.Double,System.Boolean)
extern void CFRunLoop_RunInMode_mC4178D0FA7C7CD3F5E89CF17C172811C732FAE8E (void);
// 0x000000FE System.Void Mono.Net.CFRunLoop::Stop()
extern void CFRunLoop_Stop_mA22B6E86795862E3BDE3A80D20C147EA6693076F (void);
// 0x000000FF System.Void Mono.Net.CFProxy::.cctor()
extern void CFProxy__cctor_m736522ABB3F0DEA804B54E911190E43B00A03746 (void);
// 0x00000100 System.Void Mono.Net.CFProxy::.ctor(Mono.Net.CFDictionary)
extern void CFProxy__ctor_m72AC01D0D722DB785752D822053E30566CC7F9F5 (void);
// 0x00000101 Mono.Net.CFProxyType Mono.Net.CFProxy::CFProxyTypeToEnum(System.IntPtr)
extern void CFProxy_CFProxyTypeToEnum_m7A6FB42853315DD9AFB5D1600E8B8E90EB1B34A1 (void);
// 0x00000102 System.IntPtr Mono.Net.CFProxy::get_AutoConfigurationJavaScript()
extern void CFProxy_get_AutoConfigurationJavaScript_mE3D0B231DDF768976265EEFDF0CA5DDB124B8061 (void);
// 0x00000103 System.IntPtr Mono.Net.CFProxy::get_AutoConfigurationUrl()
extern void CFProxy_get_AutoConfigurationUrl_mCF8BA92EEDA1D578966BDC3750FFAD7E003F71C9 (void);
// 0x00000104 System.String Mono.Net.CFProxy::get_HostName()
extern void CFProxy_get_HostName_m2859802624D48ADB7150F996DFBF892D008883FC (void);
// 0x00000105 System.String Mono.Net.CFProxy::get_Password()
extern void CFProxy_get_Password_m496180D624F5A07E9452D3A784E071BE9A751006 (void);
// 0x00000106 System.Int32 Mono.Net.CFProxy::get_Port()
extern void CFProxy_get_Port_m63731A205673D95F61F15328B80A453E84189360 (void);
// 0x00000107 Mono.Net.CFProxyType Mono.Net.CFProxy::get_ProxyType()
extern void CFProxy_get_ProxyType_m9E4D8613B5A395CC0A8BDDD35EB01BFEF0EBB85A (void);
// 0x00000108 System.String Mono.Net.CFProxy::get_Username()
extern void CFProxy_get_Username_mDFD89DCA9925521628A2DF06656BF15AD4BD487E (void);
// 0x00000109 System.Void Mono.Net.CFProxySettings::.cctor()
extern void CFProxySettings__cctor_m6E4B0654C5E24D20A536ED4A707D0111B276E2E9 (void);
// 0x0000010A System.Void Mono.Net.CFProxySettings::.ctor(Mono.Net.CFDictionary)
extern void CFProxySettings__ctor_m5D794E284FA54939D08F650AB1F72E773E7E6069 (void);
// 0x0000010B Mono.Net.CFDictionary Mono.Net.CFProxySettings::get_Dictionary()
extern void CFProxySettings_get_Dictionary_m9D0C3AF7134C56AE377B8403594E5EEDE80B873D (void);
// 0x0000010C System.IntPtr Mono.Net.CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScriptSequential(System.IntPtr,System.IntPtr,System.IntPtr&)
extern void CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScriptSequential_mF5E0C26C1FB958681172AF27BF556EAF09AC5108 (void);
// 0x0000010D System.IntPtr Mono.Net.CFNetwork::CFNetworkExecuteProxyAutoConfigurationURL(System.IntPtr,System.IntPtr,Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback,Mono.Net.CFStreamClientContext&)
extern void CFNetwork_CFNetworkExecuteProxyAutoConfigurationURL_m28FF1C6817B460A7A8015CC3D79A5274C2FC4640 (void);
// 0x0000010E System.Void Mono.Net.CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScriptThread()
extern void CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScriptThread_m4177739109AA2E77BBE4B66CFF44EC6181221F6A (void);
// 0x0000010F System.IntPtr Mono.Net.CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScript(System.IntPtr,System.IntPtr,System.IntPtr&)
extern void CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScript_m9314BA7D062428E5CE8C477FBC7821BB6A6E7F1E (void);
// 0x00000110 Mono.Net.CFArray Mono.Net.CFNetwork::CopyProxiesForAutoConfigurationScript(System.IntPtr,Mono.Net.CFUrl)
extern void CFNetwork_CopyProxiesForAutoConfigurationScript_m93CE8361E63E9736DE24E93725455F0B062F371C (void);
// 0x00000111 Mono.Net.CFProxy[] Mono.Net.CFNetwork::GetProxiesForAutoConfigurationScript(System.IntPtr,Mono.Net.CFUrl)
extern void CFNetwork_GetProxiesForAutoConfigurationScript_mDBFDE88606946A7922CF3A4862B7DF061AC6C327 (void);
// 0x00000112 Mono.Net.CFProxy[] Mono.Net.CFNetwork::GetProxiesForAutoConfigurationScript(System.IntPtr,System.Uri)
extern void CFNetwork_GetProxiesForAutoConfigurationScript_m037C5BEDCF1AF085AA65B014AA5A607A44863890 (void);
// 0x00000113 Mono.Net.CFProxy[] Mono.Net.CFNetwork::ExecuteProxyAutoConfigurationURL(System.IntPtr,System.Uri)
extern void CFNetwork_ExecuteProxyAutoConfigurationURL_m92BD3E7511F6CDE7C2B1A99D09F3815742C449B3 (void);
// 0x00000114 System.IntPtr Mono.Net.CFNetwork::CFNetworkCopyProxiesForURL(System.IntPtr,System.IntPtr)
extern void CFNetwork_CFNetworkCopyProxiesForURL_mC84B9BC0607B0BA6A78253B8CC339C31C06E1C92 (void);
// 0x00000115 Mono.Net.CFArray Mono.Net.CFNetwork::CopyProxiesForURL(Mono.Net.CFUrl,Mono.Net.CFDictionary)
extern void CFNetwork_CopyProxiesForURL_m7840FF9D3C2C78638C36233FF4BF15BDB7C601EF (void);
// 0x00000116 Mono.Net.CFProxy[] Mono.Net.CFNetwork::GetProxiesForURL(Mono.Net.CFUrl,Mono.Net.CFProxySettings)
extern void CFNetwork_GetProxiesForURL_mB440990304B1E584DD411A447E60309860246D72 (void);
// 0x00000117 Mono.Net.CFProxy[] Mono.Net.CFNetwork::GetProxiesForUri(System.Uri,Mono.Net.CFProxySettings)
extern void CFNetwork_GetProxiesForUri_mEBE40342DA8B590C0BC306ADAB65DBC3A11D16CF (void);
// 0x00000118 System.IntPtr Mono.Net.CFNetwork::CFNetworkCopySystemProxySettings()
extern void CFNetwork_CFNetworkCopySystemProxySettings_m25B90339270E861C02F0CA5EB5DBADA9DA1D9106 (void);
// 0x00000119 Mono.Net.CFProxySettings Mono.Net.CFNetwork::GetSystemProxySettings()
extern void CFNetwork_GetSystemProxySettings_mB550E25184FC94D96FD5247AFB3398232C177EA9 (void);
// 0x0000011A System.Net.IWebProxy Mono.Net.CFNetwork::GetDefaultProxy()
extern void CFNetwork_GetDefaultProxy_mFF7890FE61056CC8FBA25505A40D7B8FBE7D4AE4 (void);
// 0x0000011B System.Void Mono.Net.CFNetwork::.cctor()
extern void CFNetwork__cctor_mFE21CC2A0DC13CB075483F1DF1A164CA691A6A8F (void);
// 0x0000011C System.Void Mono.Net.CFNetwork/GetProxyData::Dispose()
extern void GetProxyData_Dispose_m213CC717483A7B2D24AE3844DC54623E3F491078 (void);
// 0x0000011D System.Void Mono.Net.CFNetwork/GetProxyData::.ctor()
extern void GetProxyData__ctor_m4EF170D9F1F5318953CE2A71DC027ECE787F8DB5 (void);
// 0x0000011E System.Void Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback::.ctor(System.Object,System.IntPtr)
extern void CFProxyAutoConfigurationResultCallback__ctor_mDFCC8D01E93178E2BA5E5CF392FBC96E4DD6CDC7 (void);
// 0x0000011F System.Void Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFProxyAutoConfigurationResultCallback_Invoke_m5DBA4F6E9D115DB335A5833A65B6D8E6C7556B71 (void);
// 0x00000120 System.IAsyncResult Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void CFProxyAutoConfigurationResultCallback_BeginInvoke_mDE3B00B8EA39CE1E5DA0DA857DBCDB0F25FE8FDE (void);
// 0x00000121 System.Void Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback::EndInvoke(System.IAsyncResult)
extern void CFProxyAutoConfigurationResultCallback_EndInvoke_m6DA3B409822D725A5C5E07B9888DDB3BBCFF23F9 (void);
// 0x00000122 System.Void Mono.Net.CFNetwork/CFWebProxy::.ctor()
extern void CFWebProxy__ctor_m4F5F4B6DA0F19F1C071E62625D54C20951EFFCEC (void);
// 0x00000123 System.Net.ICredentials Mono.Net.CFNetwork/CFWebProxy::get_Credentials()
extern void CFWebProxy_get_Credentials_m506A8318934A19D762A74C086BE630E70A8AFBC7 (void);
// 0x00000124 System.Uri Mono.Net.CFNetwork/CFWebProxy::GetProxyUri(Mono.Net.CFProxy,System.Net.NetworkCredential&)
extern void CFWebProxy_GetProxyUri_m086EC6016BF8F1879EB256AB3162A7B9BD2AF6B5 (void);
// 0x00000125 System.Uri Mono.Net.CFNetwork/CFWebProxy::GetProxyUriFromScript(System.IntPtr,System.Uri,System.Net.NetworkCredential&)
extern void CFWebProxy_GetProxyUriFromScript_m35F1F96303991ADF16BAB4D95110914E6C6A680C (void);
// 0x00000126 System.Uri Mono.Net.CFNetwork/CFWebProxy::ExecuteProxyAutoConfigurationURL(System.IntPtr,System.Uri,System.Net.NetworkCredential&)
extern void CFWebProxy_ExecuteProxyAutoConfigurationURL_m76A8EE34869DE53FA48A0560AC61C09468A13CCE (void);
// 0x00000127 System.Uri Mono.Net.CFNetwork/CFWebProxy::SelectProxy(Mono.Net.CFProxy[],System.Uri,System.Net.NetworkCredential&)
extern void CFWebProxy_SelectProxy_mDD2FB92CAFC965BBF3B3D5DDBEAB66C3B9B26771 (void);
// 0x00000128 System.Uri Mono.Net.CFNetwork/CFWebProxy::GetProxy(System.Uri)
extern void CFWebProxy_GetProxy_m6EC2C1590383170DD9387CF85FB5328C780789C4 (void);
// 0x00000129 System.Boolean Mono.Net.CFNetwork/CFWebProxy::IsBypassed(System.Uri)
extern void CFWebProxy_IsBypassed_m5F05D7C9302426EF280309DC04EFD106181A6B21 (void);
// 0x0000012A System.Void Mono.Net.CFNetwork/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_m0CC4FFF2BBFF2126104AAFAC94D0F6266AA40867 (void);
// 0x0000012B System.Void Mono.Net.CFNetwork/<>c__DisplayClass13_0::<ExecuteProxyAutoConfigurationURL>b__0(System.IntPtr,System.IntPtr,System.IntPtr)
extern void U3CU3Ec__DisplayClass13_0_U3CExecuteProxyAutoConfigurationURLU3Eb__0_m760B8D058BD2000E464142609711A90FAA7D71F7 (void);
// 0x0000012C System.Int32 Mono.Net.Security.BufferOffsetSize::get_EndOffset()
extern void BufferOffsetSize_get_EndOffset_m9EED7B6B6EF1F2518A735AF875F88A5E03F0881F (void);
// 0x0000012D System.Int32 Mono.Net.Security.BufferOffsetSize::get_Remaining()
extern void BufferOffsetSize_get_Remaining_m2DE18A3119D97C30B3EE54B9C6260030413B089D (void);
// 0x0000012E System.Void Mono.Net.Security.BufferOffsetSize::.ctor(System.Byte[],System.Int32,System.Int32)
extern void BufferOffsetSize__ctor_mB7C0B812CB8178BA614001251D5C5905C08029BE (void);
// 0x0000012F System.String Mono.Net.Security.BufferOffsetSize::ToString()
extern void BufferOffsetSize_ToString_mFB8CD5C4E6108A0C5B4717CFE1DF3A8E59138771 (void);
// 0x00000130 System.Void Mono.Net.Security.BufferOffsetSize2::.ctor(System.Int32)
extern void BufferOffsetSize2__ctor_mE4644CFB0D6AC7297E01282C7B898D119E18E8D2 (void);
// 0x00000131 System.Void Mono.Net.Security.BufferOffsetSize2::Reset()
extern void BufferOffsetSize2_Reset_mE4DE740467F990ED792FB4966B367091B27BBAB4 (void);
// 0x00000132 System.Void Mono.Net.Security.BufferOffsetSize2::MakeRoom(System.Int32)
extern void BufferOffsetSize2_MakeRoom_mBFDBCE08404ECEECBDDB499ED991000ED3A1F35B (void);
// 0x00000133 System.Void Mono.Net.Security.BufferOffsetSize2::AppendData(System.Byte[],System.Int32,System.Int32)
extern void BufferOffsetSize2_AppendData_m5AFEF21E75273C3BF7FCD4B4433A49D088587F29 (void);
// 0x00000134 System.Int32 Mono.Net.Security.AsyncProtocolResult::get_UserResult()
extern void AsyncProtocolResult_get_UserResult_m1CD0222DFEFC2B0738DF69529AE2C70E21AE54CC (void);
// 0x00000135 System.Runtime.ExceptionServices.ExceptionDispatchInfo Mono.Net.Security.AsyncProtocolResult::get_Error()
extern void AsyncProtocolResult_get_Error_mB3036D4EFA6404019E91C7500B2F52EBBCBB9315 (void);
// 0x00000136 System.Void Mono.Net.Security.AsyncProtocolResult::.ctor(System.Int32)
extern void AsyncProtocolResult__ctor_mC6F604D2F6820EC29A697EDB00315B5B8D6BF2F5 (void);
// 0x00000137 System.Void Mono.Net.Security.AsyncProtocolResult::.ctor(System.Runtime.ExceptionServices.ExceptionDispatchInfo)
extern void AsyncProtocolResult__ctor_mB7F0640C90963ABD9CC43C118AAB34DD13D5BBA0 (void);
// 0x00000138 Mono.Net.Security.MobileAuthenticatedStream Mono.Net.Security.AsyncProtocolRequest::get_Parent()
extern void AsyncProtocolRequest_get_Parent_mA503BE9C5CE0D06A001902DD63B892B8B86275CC (void);
// 0x00000139 System.Boolean Mono.Net.Security.AsyncProtocolRequest::get_RunSynchronously()
extern void AsyncProtocolRequest_get_RunSynchronously_m7733AC14F1950CD534E7CC150E42561B1C839638 (void);
// 0x0000013A System.String Mono.Net.Security.AsyncProtocolRequest::get_Name()
extern void AsyncProtocolRequest_get_Name_m07178E170DEB686F0F161446E8629B520E1DC168 (void);
// 0x0000013B System.Int32 Mono.Net.Security.AsyncProtocolRequest::get_UserResult()
extern void AsyncProtocolRequest_get_UserResult_mC442C9E965AE3D70B0DFECF862583217C20031FF (void);
// 0x0000013C System.Void Mono.Net.Security.AsyncProtocolRequest::set_UserResult(System.Int32)
extern void AsyncProtocolRequest_set_UserResult_mD03A2987E4DF573A2BB3425B9474BA6B341F5F01 (void);
// 0x0000013D System.Void Mono.Net.Security.AsyncProtocolRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean)
extern void AsyncProtocolRequest__ctor_m5ABB63E835263B21871583924C03A4568EBB67CF (void);
// 0x0000013E System.Void Mono.Net.Security.AsyncProtocolRequest::RequestRead(System.Int32)
extern void AsyncProtocolRequest_RequestRead_mD0C4C34F3D1602E8F138D93D6CF39A1CF89CB25A (void);
// 0x0000013F System.Void Mono.Net.Security.AsyncProtocolRequest::RequestWrite()
extern void AsyncProtocolRequest_RequestWrite_m75F0A9A2A611CC2BB267ADE4FF36E98148F413E7 (void);
// 0x00000140 System.Threading.Tasks.Task`1<Mono.Net.Security.AsyncProtocolResult> Mono.Net.Security.AsyncProtocolRequest::StartOperation(System.Threading.CancellationToken)
extern void AsyncProtocolRequest_StartOperation_m76C636186DB12B80876BF0E860C509E92D8289CC (void);
// 0x00000141 System.Threading.Tasks.Task Mono.Net.Security.AsyncProtocolRequest::ProcessOperation(System.Threading.CancellationToken)
extern void AsyncProtocolRequest_ProcessOperation_m5B89FD2B927FFAB28DCA26EFB4A4AA3922289E6B (void);
// 0x00000142 System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>> Mono.Net.Security.AsyncProtocolRequest::InnerRead(System.Threading.CancellationToken)
extern void AsyncProtocolRequest_InnerRead_m965447D1F8015D839DB325E48C1968E88612143B (void);
// 0x00000143 Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.AsyncProtocolRequest::Run(Mono.Net.Security.AsyncOperationStatus)
// 0x00000144 System.String Mono.Net.Security.AsyncProtocolRequest::ToString()
extern void AsyncProtocolRequest_ToString_m69F3FEBD3DE453E4CEC99DB49D1AD99B7AAC4260 (void);
// 0x00000145 System.Void Mono.Net.Security.AsyncProtocolRequest/<StartOperation>d__23::MoveNext()
extern void U3CStartOperationU3Ed__23_MoveNext_m63ACDC7CCB0E43A57BCC0D7BF6D14AADEA88150E (void);
// 0x00000146 System.Void Mono.Net.Security.AsyncProtocolRequest/<StartOperation>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CStartOperationU3Ed__23_SetStateMachine_m8A586353421C2670E8208AE140ED5DBEDD4122B8 (void);
// 0x00000147 System.Void Mono.Net.Security.AsyncProtocolRequest/<ProcessOperation>d__24::MoveNext()
extern void U3CProcessOperationU3Ed__24_MoveNext_mB0D2D020C1DE94FFD5D78109BC37802780D26A0D (void);
// 0x00000148 System.Void Mono.Net.Security.AsyncProtocolRequest/<ProcessOperation>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CProcessOperationU3Ed__24_SetStateMachine_m19FCCEBF66308F920EF00C2C17E74BC4DE02094D (void);
// 0x00000149 System.Void Mono.Net.Security.AsyncProtocolRequest/<InnerRead>d__25::MoveNext()
extern void U3CInnerReadU3Ed__25_MoveNext_mE28E22197DC1A6A515E61B7EB9F17F9B41835B6F (void);
// 0x0000014A System.Void Mono.Net.Security.AsyncProtocolRequest/<InnerRead>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInnerReadU3Ed__25_SetStateMachine_mFF80981E4C6AB1765979F5A653446A0A081E9BAD (void);
// 0x0000014B System.Void Mono.Net.Security.AsyncHandshakeRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean)
extern void AsyncHandshakeRequest__ctor_m884A72725004810175F9D352326910C4EF6C73F6 (void);
// 0x0000014C Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.AsyncHandshakeRequest::Run(Mono.Net.Security.AsyncOperationStatus)
extern void AsyncHandshakeRequest_Run_m8FD00688379160E2E4FAB61C83A5023DC623F7A1 (void);
// 0x0000014D Mono.Net.Security.BufferOffsetSize Mono.Net.Security.AsyncReadOrWriteRequest::get_UserBuffer()
extern void AsyncReadOrWriteRequest_get_UserBuffer_m89C0D2E505281A6E13D354DD4310E0E7F940F5EF (void);
// 0x0000014E System.Int32 Mono.Net.Security.AsyncReadOrWriteRequest::get_CurrentSize()
extern void AsyncReadOrWriteRequest_get_CurrentSize_m35EC8070F5BFAA6BFE94C5D33F3A484F4AA59416 (void);
// 0x0000014F System.Void Mono.Net.Security.AsyncReadOrWriteRequest::set_CurrentSize(System.Int32)
extern void AsyncReadOrWriteRequest_set_CurrentSize_m03CB5D968A7AA61350B2C1F8F17319AD6C0E9B89 (void);
// 0x00000150 System.Void Mono.Net.Security.AsyncReadOrWriteRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.Byte[],System.Int32,System.Int32)
extern void AsyncReadOrWriteRequest__ctor_mB8BE7F0A1951FA42FE17EE113C7BA54D71EFEAFB (void);
// 0x00000151 System.String Mono.Net.Security.AsyncReadOrWriteRequest::ToString()
extern void AsyncReadOrWriteRequest_ToString_mD23C1D8B20669DBBA820AD426B0CB745E96D694B (void);
// 0x00000152 System.Void Mono.Net.Security.AsyncReadRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.Byte[],System.Int32,System.Int32)
extern void AsyncReadRequest__ctor_m97269914BB6F589C30C0B3580114757CD9BB6D0A (void);
// 0x00000153 Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.AsyncReadRequest::Run(Mono.Net.Security.AsyncOperationStatus)
extern void AsyncReadRequest_Run_m4C8492D18242E1B7B2D27E61E3E7747F81118632 (void);
// 0x00000154 System.Void Mono.Net.Security.AsyncWriteRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.Byte[],System.Int32,System.Int32)
extern void AsyncWriteRequest__ctor_m23D8ED46901F944741CD1EA551CF171421D16416 (void);
// 0x00000155 Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.AsyncWriteRequest::Run(Mono.Net.Security.AsyncOperationStatus)
extern void AsyncWriteRequest_Run_mACE37924F3AD1DC8D721789F1A59EF5894B8D3F5 (void);
// 0x00000156 System.Void Mono.Net.Security.ServerCertValidationCallbackWrapper::.ctor(System.Object,System.IntPtr)
extern void ServerCertValidationCallbackWrapper__ctor_mF25EEA31EB05C9C7C7745F9E4B4DB500A5EB7B34 (void);
// 0x00000157 System.Boolean Mono.Net.Security.ServerCertValidationCallbackWrapper::Invoke(System.Net.ServerCertValidationCallback,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,Mono.Security.Interface.MonoSslPolicyErrors)
extern void ServerCertValidationCallbackWrapper_Invoke_mBDF485AED0434BAE86AF712D014292266AA71C0C (void);
// 0x00000158 System.IAsyncResult Mono.Net.Security.ServerCertValidationCallbackWrapper::BeginInvoke(System.Net.ServerCertValidationCallback,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,Mono.Security.Interface.MonoSslPolicyErrors,System.AsyncCallback,System.Object)
extern void ServerCertValidationCallbackWrapper_BeginInvoke_m1C615BE2C9AB52861BF069787D0ECD4C7879913B (void);
// 0x00000159 System.Boolean Mono.Net.Security.ServerCertValidationCallbackWrapper::EndInvoke(System.IAsyncResult)
extern void ServerCertValidationCallbackWrapper_EndInvoke_mB61CE88402A67EA8F3ACDB5EF71355C868BB0813 (void);
// 0x0000015A Mono.Security.Interface.ICertificateValidator Mono.Net.Security.ChainValidationHelper::GetInternalValidator(Mono.Security.Interface.MonoTlsProvider,Mono.Security.Interface.MonoTlsSettings)
extern void ChainValidationHelper_GetInternalValidator_m8DC69A5241DDF15BB501760A626D94014DD0B394 (void);
// 0x0000015B Mono.Net.Security.ChainValidationHelper Mono.Net.Security.ChainValidationHelper::Create(Mono.Security.Interface.MonoTlsProvider,Mono.Security.Interface.MonoTlsSettings&,Mono.Net.Security.MonoTlsStream)
extern void ChainValidationHelper_Create_m133301B36D2C7B41D9E4571C9605E9368E977960 (void);
// 0x0000015C System.Void Mono.Net.Security.ChainValidationHelper::.ctor(Mono.Security.Interface.MonoTlsProvider,Mono.Security.Interface.MonoTlsSettings,System.Boolean,Mono.Net.Security.MonoTlsStream,Mono.Net.Security.ServerCertValidationCallbackWrapper)
extern void ChainValidationHelper__ctor_m28263F9E95F112572E406F1ECC7FBBE7300A6CB8 (void);
// 0x0000015D System.Security.Cryptography.X509Certificates.X509Certificate Mono.Net.Security.ChainValidationHelper::DefaultSelectionCallback(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern void ChainValidationHelper_DefaultSelectionCallback_mE44C11E42543653003B1739AC2DEBF84E54266CF (void);
// 0x0000015E Mono.Security.Interface.MonoTlsSettings Mono.Net.Security.ChainValidationHelper::get_Settings()
extern void ChainValidationHelper_get_Settings_m3531570824A98D25FD20B667975B42D72B07CE18 (void);
// 0x0000015F System.Boolean Mono.Net.Security.ChainValidationHelper::SelectClientCertificate(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.Security.Cryptography.X509Certificates.X509Certificate&)
extern void ChainValidationHelper_SelectClientCertificate_mF386AA0C4CF842650473CCD90B1BA0D34695130E (void);
// 0x00000160 Mono.Security.Interface.ValidationResult Mono.Net.Security.ChainValidationHelper::ValidateCertificate(System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain)
extern void ChainValidationHelper_ValidateCertificate_mAB6BCD3C37B1ED5CA44B0DA7E3C7FE961D1F7A0C (void);
// 0x00000161 Mono.Security.Interface.ValidationResult Mono.Net.Security.ChainValidationHelper::ValidateChain(System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.Security.SslPolicyErrors)
extern void ChainValidationHelper_ValidateChain_mF930C960C8EA0CFEE7AE893486A11AB96CC5A958 (void);
// 0x00000162 Mono.Security.Interface.ValidationResult Mono.Net.Security.ChainValidationHelper::ValidateChain(System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain&,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.Security.SslPolicyErrors)
extern void ChainValidationHelper_ValidateChain_mFB4BC1CD513099E2156178A0F94663FAD1849EB2 (void);
// 0x00000163 System.Void Mono.Net.Security.MobileAuthenticatedStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.SslStream,Mono.Security.Interface.MonoTlsSettings,Mono.Security.Interface.MonoTlsProvider)
extern void MobileAuthenticatedStream__ctor_m0D8FB103726E0824BEFD3033D067F7F4EA13EF3B (void);
// 0x00000164 Mono.Security.Interface.MonoTlsSettings Mono.Net.Security.MobileAuthenticatedStream::get_Settings()
extern void MobileAuthenticatedStream_get_Settings_m12C7E669BE45126A55BADAB2B707BC0F722EB610 (void);
// 0x00000165 Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MobileAuthenticatedStream::get_Provider()
extern void MobileAuthenticatedStream_get_Provider_mBAD82128219CDFBF15FB864B10C7B0028B3B5293 (void);
// 0x00000166 System.Void Mono.Net.Security.MobileAuthenticatedStream::CheckThrow(System.Boolean,System.Boolean)
extern void MobileAuthenticatedStream_CheckThrow_mC8397F4398D9B5675EC3DE5612E31C2CECE89080 (void);
// 0x00000167 System.Exception Mono.Net.Security.MobileAuthenticatedStream::GetSSPIException(System.Exception)
extern void MobileAuthenticatedStream_GetSSPIException_mE68EE4F3915B1D350E340962DE053D2DAA8D05C8 (void);
// 0x00000168 System.Exception Mono.Net.Security.MobileAuthenticatedStream::GetIOException(System.Exception,System.String)
extern void MobileAuthenticatedStream_GetIOException_m3FA680F8E914AC496E6F439F6FDCE0A766C35C5C (void);
// 0x00000169 System.Runtime.ExceptionServices.ExceptionDispatchInfo Mono.Net.Security.MobileAuthenticatedStream::SetException(System.Exception)
extern void MobileAuthenticatedStream_SetException_m5B0A18C66D1431C6EF3A43BFA7964BD376F57896 (void);
// 0x0000016A System.Threading.Tasks.Task Mono.Net.Security.MobileAuthenticatedStream::AuthenticateAsClientAsync(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean)
extern void MobileAuthenticatedStream_AuthenticateAsClientAsync_mAEB1458E00859473D7182F54F316E8D62CE28BC0 (void);
// 0x0000016B System.Net.Security.AuthenticatedStream Mono.Net.Security.MobileAuthenticatedStream::get_AuthenticatedStream()
extern void MobileAuthenticatedStream_get_AuthenticatedStream_m5DF2DEFCE6B26E196FCA94F3E53DF6F0DEF6C622 (void);
// 0x0000016C System.Threading.Tasks.Task Mono.Net.Security.MobileAuthenticatedStream::ProcessAuthentication(System.Boolean,System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
extern void MobileAuthenticatedStream_ProcessAuthentication_m178A7A98E02403F5CD941B3C49B580686643E373 (void);
// 0x0000016D Mono.Net.Security.MobileTlsContext Mono.Net.Security.MobileAuthenticatedStream::CreateContext(System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
// 0x0000016E System.IAsyncResult Mono.Net.Security.MobileAuthenticatedStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void MobileAuthenticatedStream_BeginRead_m2299EDE0D418F86FF6D7CA812B2DF4F3B07D82DA (void);
// 0x0000016F System.Int32 Mono.Net.Security.MobileAuthenticatedStream::EndRead(System.IAsyncResult)
extern void MobileAuthenticatedStream_EndRead_mF64C5AE2022C2E6E32FBD7DE9CAF6204488F42A8 (void);
// 0x00000170 System.IAsyncResult Mono.Net.Security.MobileAuthenticatedStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void MobileAuthenticatedStream_BeginWrite_m444A84556523CD3607B0C3811B07BF7AD4B6E466 (void);
// 0x00000171 System.Void Mono.Net.Security.MobileAuthenticatedStream::EndWrite(System.IAsyncResult)
extern void MobileAuthenticatedStream_EndWrite_mF32510E6ACF5029C4FFA0084687DBA67780935AD (void);
// 0x00000172 System.Int32 Mono.Net.Security.MobileAuthenticatedStream::Read(System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_Read_m91B1888817700E4B4D059CDE6FCD78A3DCAE6C19 (void);
// 0x00000173 System.Void Mono.Net.Security.MobileAuthenticatedStream::Write(System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_Write_m6E0F97F71B3E8EE7F188C2E75AFBFFE3C33C69FB (void);
// 0x00000174 System.Threading.Tasks.Task`1<System.Int32> Mono.Net.Security.MobileAuthenticatedStream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_ReadAsync_m518A7BCD987093B19EB9CAAE57631CB0BAFE0C8F (void);
// 0x00000175 System.Threading.Tasks.Task Mono.Net.Security.MobileAuthenticatedStream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_WriteAsync_m4F9F9B8C926E8B5AACBA1B7DF15638A4055E7AA8 (void);
// 0x00000176 System.Threading.Tasks.Task`1<System.Int32> Mono.Net.Security.MobileAuthenticatedStream::StartOperation(Mono.Net.Security.MobileAuthenticatedStream/OperationType,Mono.Net.Security.AsyncProtocolRequest,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_StartOperation_mA2F6EF91539E13CC9FED2888148C9708ED563883 (void);
// 0x00000177 System.Int32 Mono.Net.Security.MobileAuthenticatedStream::InternalRead(System.Byte[],System.Int32,System.Int32,System.Boolean&)
extern void MobileAuthenticatedStream_InternalRead_mC430180F8FD5AA589FD7AE5044A89F9B6F1427D8 (void);
// 0x00000178 System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileAuthenticatedStream::InternalRead(Mono.Net.Security.AsyncProtocolRequest,Mono.Net.Security.BufferOffsetSize,System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_InternalRead_m86C071DC37153DC3E055BCCD6E932CEB5AA65ED3 (void);
// 0x00000179 System.Boolean Mono.Net.Security.MobileAuthenticatedStream::InternalWrite(System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_InternalWrite_m272A619B00CBE6704AAD300536D176AF4BF4F76F (void);
// 0x0000017A System.Boolean Mono.Net.Security.MobileAuthenticatedStream::InternalWrite(Mono.Net.Security.AsyncProtocolRequest,Mono.Net.Security.BufferOffsetSize2,System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_InternalWrite_mAC3D67F3F2A6BE41320B01433AC26BFAD2063A74 (void);
// 0x0000017B System.Threading.Tasks.Task`1<System.Int32> Mono.Net.Security.MobileAuthenticatedStream::InnerRead(System.Boolean,System.Int32,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_InnerRead_m791585462E4A887702A9BF3650FCBE0BAC98FABF (void);
// 0x0000017C System.Threading.Tasks.Task Mono.Net.Security.MobileAuthenticatedStream::InnerWrite(System.Boolean,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_InnerWrite_m9B4A4FCF793834DCBF434ADFFBC43B4D215EB52F (void);
// 0x0000017D Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.MobileAuthenticatedStream::ProcessHandshake(Mono.Net.Security.AsyncOperationStatus)
extern void MobileAuthenticatedStream_ProcessHandshake_m49D890591613A8EBE1B80CBDB5056FAF501D1BF5 (void);
// 0x0000017E System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileAuthenticatedStream::ProcessRead(Mono.Net.Security.BufferOffsetSize)
extern void MobileAuthenticatedStream_ProcessRead_m2DA627144AF178A8F0F54F58E6630C2F68202D12 (void);
// 0x0000017F System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileAuthenticatedStream::ProcessWrite(Mono.Net.Security.BufferOffsetSize)
extern void MobileAuthenticatedStream_ProcessWrite_m26B164259C3550E33F5CDF2C4CB491CFF3F4C9B9 (void);
// 0x00000180 System.Boolean Mono.Net.Security.MobileAuthenticatedStream::get_IsAuthenticated()
extern void MobileAuthenticatedStream_get_IsAuthenticated_mC3633B71C753DA01E8DBD81BF5298500662ECDDA (void);
// 0x00000181 System.Void Mono.Net.Security.MobileAuthenticatedStream::Dispose(System.Boolean)
extern void MobileAuthenticatedStream_Dispose_m26864896490F078C981103A7927BDF91A39B33B7 (void);
// 0x00000182 System.Void Mono.Net.Security.MobileAuthenticatedStream::Flush()
extern void MobileAuthenticatedStream_Flush_m199FE316A80E60239A917644253970986B9E7583 (void);
// 0x00000183 System.Security.Cryptography.X509Certificates.X509Certificate Mono.Net.Security.MobileAuthenticatedStream::get_InternalLocalCertificate()
extern void MobileAuthenticatedStream_get_InternalLocalCertificate_m92ADFDBB94D1A2173175C92FC3CCCE6A71FDB199 (void);
// 0x00000184 System.Int64 Mono.Net.Security.MobileAuthenticatedStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void MobileAuthenticatedStream_Seek_mE638919C187C89E8EEB4415565A1608C01100265 (void);
// 0x00000185 System.Void Mono.Net.Security.MobileAuthenticatedStream::SetLength(System.Int64)
extern void MobileAuthenticatedStream_SetLength_m50ED54093260F90E226AC7964C6A380F6C5C0955 (void);
// 0x00000186 System.Boolean Mono.Net.Security.MobileAuthenticatedStream::get_CanRead()
extern void MobileAuthenticatedStream_get_CanRead_mD5EE416A9C812C7A5BA93A3F3AC3F4CD3CD7D5E7 (void);
// 0x00000187 System.Boolean Mono.Net.Security.MobileAuthenticatedStream::get_CanWrite()
extern void MobileAuthenticatedStream_get_CanWrite_m6892AB7DA9B4EC279CFC64BABA5BC2F81E26E37F (void);
// 0x00000188 System.Boolean Mono.Net.Security.MobileAuthenticatedStream::get_CanSeek()
extern void MobileAuthenticatedStream_get_CanSeek_mF4B1F3F83D9B6EE8AF5984CA6911D42AE9181805 (void);
// 0x00000189 System.Int64 Mono.Net.Security.MobileAuthenticatedStream::get_Length()
extern void MobileAuthenticatedStream_get_Length_m26B4552100F40FE8CEF547787BDBACC469528599 (void);
// 0x0000018A System.Int64 Mono.Net.Security.MobileAuthenticatedStream::get_Position()
extern void MobileAuthenticatedStream_get_Position_mBADC7270050681E68FFDABCBB5EEC6D6C0B4171D (void);
// 0x0000018B System.Void Mono.Net.Security.MobileAuthenticatedStream::set_Position(System.Int64)
extern void MobileAuthenticatedStream_set_Position_m34CF317339FC45361ED4CFB074E5F1ADA4EE1FA5 (void);
// 0x0000018C System.Int32 Mono.Net.Security.MobileAuthenticatedStream::get_ReadTimeout()
extern void MobileAuthenticatedStream_get_ReadTimeout_m08E7A1C46ACA653B8624E3CD0357FFB2F61D9249 (void);
// 0x0000018D System.Void Mono.Net.Security.MobileAuthenticatedStream::set_ReadTimeout(System.Int32)
extern void MobileAuthenticatedStream_set_ReadTimeout_mBE551C47A9E8F41C80F07E1191EEFE08341ABE04 (void);
// 0x0000018E System.Int32 Mono.Net.Security.MobileAuthenticatedStream::get_WriteTimeout()
extern void MobileAuthenticatedStream_get_WriteTimeout_m89405014AAA907C0AAF95E0E6A27F13BA9484D25 (void);
// 0x0000018F System.Void Mono.Net.Security.MobileAuthenticatedStream::.cctor()
extern void MobileAuthenticatedStream__cctor_m6F1D2C909E67A0CA814D65E336039BB2B22348EB (void);
// 0x00000190 System.Void Mono.Net.Security.MobileAuthenticatedStream::<InnerWrite>b__67_0()
extern void MobileAuthenticatedStream_U3CInnerWriteU3Eb__67_0_m63D62194859ED8623C24783D737CA11D06501E97 (void);
// 0x00000191 System.Void Mono.Net.Security.MobileAuthenticatedStream/<ProcessAuthentication>d__47::MoveNext()
extern void U3CProcessAuthenticationU3Ed__47_MoveNext_mF3762B503551276E4B49F05F7413012DF8D1CC84 (void);
// 0x00000192 System.Void Mono.Net.Security.MobileAuthenticatedStream/<ProcessAuthentication>d__47::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CProcessAuthenticationU3Ed__47_SetStateMachine_mDCBB12DB45E075AC256E54A1DFC35AD4C81912EC (void);
// 0x00000193 System.Void Mono.Net.Security.MobileAuthenticatedStream/<StartOperation>d__58::MoveNext()
extern void U3CStartOperationU3Ed__58_MoveNext_mA92EABD1F8F3CE91103E228A56D16BE2E7C3FA35 (void);
// 0x00000194 System.Void Mono.Net.Security.MobileAuthenticatedStream/<StartOperation>d__58::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CStartOperationU3Ed__58_SetStateMachine_m6896AA6F76C2DD0A407ADDFB40A574290873FFC8 (void);
// 0x00000195 System.Void Mono.Net.Security.MobileAuthenticatedStream/<>c__DisplayClass66_0::.ctor()
extern void U3CU3Ec__DisplayClass66_0__ctor_mCD2E2BE10E3708147749F093D9757B9B60DB4A85 (void);
// 0x00000196 System.Int32 Mono.Net.Security.MobileAuthenticatedStream/<>c__DisplayClass66_0::<InnerRead>b__0()
extern void U3CU3Ec__DisplayClass66_0_U3CInnerReadU3Eb__0_mF0041D575CFBB13F3CD792CDAB78B6E018B192BA (void);
// 0x00000197 System.Void Mono.Net.Security.MobileAuthenticatedStream/<InnerRead>d__66::MoveNext()
extern void U3CInnerReadU3Ed__66_MoveNext_m36DB7FB663A6047DA5B34FE62490F230C48DD070 (void);
// 0x00000198 System.Void Mono.Net.Security.MobileAuthenticatedStream/<InnerRead>d__66::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInnerReadU3Ed__66_SetStateMachine_m56B57971A776743CEADDCF710EA5777B89642D4D (void);
// 0x00000199 System.Void Mono.Net.Security.MobileAuthenticatedStream/<InnerWrite>d__67::MoveNext()
extern void U3CInnerWriteU3Ed__67_MoveNext_m39FA739B0AE2BDF2EF4122C92A31BE2D016CEEF0 (void);
// 0x0000019A System.Void Mono.Net.Security.MobileAuthenticatedStream/<InnerWrite>d__67::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInnerWriteU3Ed__67_SetStateMachine_m614328656FD99E8FC4FCEE4337F2043634F18D6B (void);
// 0x0000019B System.Void Mono.Net.Security.MobileTlsContext::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
extern void MobileTlsContext__ctor_m656F47DCC938252723AFFDAE365DA1CA56A5C95B (void);
// 0x0000019C Mono.Net.Security.MobileAuthenticatedStream Mono.Net.Security.MobileTlsContext::get_Parent()
extern void MobileTlsContext_get_Parent_mA247FA590751030497F9B039ED3543748981EDC3 (void);
// 0x0000019D Mono.Security.Interface.MonoTlsSettings Mono.Net.Security.MobileTlsContext::get_Settings()
extern void MobileTlsContext_get_Settings_m960574D1AA3C5F8FA078E05662093E419195FF6E (void);
// 0x0000019E System.Boolean Mono.Net.Security.MobileTlsContext::get_IsAuthenticated()
// 0x0000019F System.Boolean Mono.Net.Security.MobileTlsContext::get_IsServer()
extern void MobileTlsContext_get_IsServer_m6BA80FEC5C2FF9BEA15AB24562DAB28E2082361B (void);
// 0x000001A0 System.String Mono.Net.Security.MobileTlsContext::get_TargetHost()
extern void MobileTlsContext_get_TargetHost_m6054EE6F51F62C51B2479225DF80673B5FA47C42 (void);
// 0x000001A1 System.String Mono.Net.Security.MobileTlsContext::get_ServerName()
extern void MobileTlsContext_get_ServerName_mDB9D97589ED6FF43DC54F753C4338691DA302B07 (void);
// 0x000001A2 System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Net.Security.MobileTlsContext::get_ClientCertificates()
extern void MobileTlsContext_get_ClientCertificates_mC93FBAF7928EC1E3E1E4A47E99E6863FA8FAFBC6 (void);
// 0x000001A3 System.Void Mono.Net.Security.MobileTlsContext::StartHandshake()
// 0x000001A4 System.Boolean Mono.Net.Security.MobileTlsContext::ProcessHandshake()
// 0x000001A5 System.Void Mono.Net.Security.MobileTlsContext::FinishHandshake()
// 0x000001A6 System.Security.Cryptography.X509Certificates.X509Certificate Mono.Net.Security.MobileTlsContext::get_LocalServerCertificate()
extern void MobileTlsContext_get_LocalServerCertificate_m4320272E1E2E02C77CB7521158C3E45565AB2A3E (void);
// 0x000001A7 System.Security.Cryptography.X509Certificates.X509Certificate Mono.Net.Security.MobileTlsContext::get_LocalClientCertificate()
// 0x000001A8 System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileTlsContext::Read(System.Byte[],System.Int32,System.Int32)
// 0x000001A9 System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileTlsContext::Write(System.Byte[],System.Int32,System.Int32)
// 0x000001AA System.Void Mono.Net.Security.MobileTlsContext::Shutdown()
// 0x000001AB System.Boolean Mono.Net.Security.MobileTlsContext::ValidateCertificate(System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain)
extern void MobileTlsContext_ValidateCertificate_m54BB8BC9C5C0703F52BD92F73F32C9E29D7754BC (void);
// 0x000001AC System.Security.Cryptography.X509Certificates.X509Certificate Mono.Net.Security.MobileTlsContext::SelectClientCertificate(System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern void MobileTlsContext_SelectClientCertificate_m0BD84B3C86150115C8141884B98D78C95FA7ABBC (void);
// 0x000001AD System.Void Mono.Net.Security.MobileTlsContext::Dispose()
extern void MobileTlsContext_Dispose_mDD54934F58E124A19D89712EA3524008E5CAC050 (void);
// 0x000001AE System.Void Mono.Net.Security.MobileTlsContext::Dispose(System.Boolean)
extern void MobileTlsContext_Dispose_m8689020FD9EAEF86AA65046E9A8DF23239B9BADD (void);
// 0x000001AF System.Void Mono.Net.Security.MobileTlsContext::Finalize()
extern void MobileTlsContext_Finalize_m530A5F255410FD4FE9D22182B9F26376C1FB5D55 (void);
// 0x000001B0 Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MonoTlsProviderFactory::GetProviderInternal()
extern void MonoTlsProviderFactory_GetProviderInternal_m7D960EA29363DFCCFF13D821CFB91F0BAC2A7587 (void);
// 0x000001B1 System.Void Mono.Net.Security.MonoTlsProviderFactory::InitializeInternal()
extern void MonoTlsProviderFactory_InitializeInternal_m238CDC0CF80A8124AC0B4CDED7336081D0A8F20B (void);
// 0x000001B2 Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MonoTlsProviderFactory::LookupProvider(System.String,System.Boolean)
extern void MonoTlsProviderFactory_LookupProvider_mCF31D55B729ACF21C9D70A1390FE665DDE76A628 (void);
// 0x000001B3 System.Void Mono.Net.Security.MonoTlsProviderFactory::InitializeProviderRegistration()
extern void MonoTlsProviderFactory_InitializeProviderRegistration_m1B832D92E9E3086AD854E25847DF13BD598BD53A (void);
// 0x000001B4 Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MonoTlsProviderFactory::CreateDefaultProviderImpl()
extern void MonoTlsProviderFactory_CreateDefaultProviderImpl_mD3884B54DC7A03ECADE264FFFFE03A107347944A (void);
// 0x000001B5 Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MonoTlsProviderFactory::GetProvider()
extern void MonoTlsProviderFactory_GetProvider_mFD7B472C08E54CF8D28B4EE0E4CF402F18A99E20 (void);
// 0x000001B6 System.Void Mono.Net.Security.MonoTlsProviderFactory::.cctor()
extern void MonoTlsProviderFactory__cctor_mD47FFE4B6FD8AB8C6EC15E4D977A2765D22A1BF9 (void);
// 0x000001B7 System.Net.HttpWebRequest Mono.Net.Security.MonoTlsStream::get_Request()
extern void MonoTlsStream_get_Request_m5CE0E7D32A482AFFEA41907117E3519B23C92F83 (void);
// 0x000001B8 System.Net.WebExceptionStatus Mono.Net.Security.MonoTlsStream::get_ExceptionStatus()
extern void MonoTlsStream_get_ExceptionStatus_m790CC2AAD7D1BE95C884D0BB91D6EF4B1A8856FF (void);
// 0x000001B9 System.Boolean Mono.Net.Security.MonoTlsStream::get_CertificateValidationFailed()
extern void MonoTlsStream_get_CertificateValidationFailed_mF9670263A9DF5CFD0E8C0FD5D38153A24694A8AE (void);
// 0x000001BA System.Void Mono.Net.Security.MonoTlsStream::set_CertificateValidationFailed(System.Boolean)
extern void MonoTlsStream_set_CertificateValidationFailed_m0CB02DA5133C5B1D5E8CB9794A3BAEC3BDC5E0B9 (void);
// 0x000001BB System.Void Mono.Net.Security.MonoTlsStream::.ctor(System.Net.HttpWebRequest,System.Net.Sockets.NetworkStream)
extern void MonoTlsStream__ctor_mCD79785E4129D92AEC28A2241616A44981F6BEE1 (void);
// 0x000001BC System.Threading.Tasks.Task`1<System.IO.Stream> Mono.Net.Security.MonoTlsStream::CreateStream(System.Net.WebConnectionTunnel,System.Threading.CancellationToken)
extern void MonoTlsStream_CreateStream_mBD75F08F189BB5EE0F2CCB765217BCEF99F78BE2 (void);
// 0x000001BD System.Void Mono.Net.Security.MonoTlsStream/<CreateStream>d__17::MoveNext()
extern void U3CCreateStreamU3Ed__17_MoveNext_m5E7CB22F92B4B0C39AB680404D40ACF8C44416EB (void);
// 0x000001BE System.Void Mono.Net.Security.MonoTlsStream/<CreateStream>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCreateStreamU3Ed__17_SetStateMachine_mF83DEBD81E6106CE1BF4F1970B3459E73D6B51D3 (void);
// 0x000001BF System.Object Mono.Net.Security.NoReflectionHelper::GetInternalValidator(System.Object,System.Object)
extern void NoReflectionHelper_GetInternalValidator_m2AB3CD42938623B7E574540B348646074B14204E (void);
// 0x000001C0 System.Void Mono.Net.Security.SystemCertificateValidator::.cctor()
extern void SystemCertificateValidator__cctor_mD3C42893671C7F629E2F5659E8DC6C9B3B37E222 (void);
// 0x000001C1 System.Security.Cryptography.X509Certificates.X509Chain Mono.Net.Security.SystemCertificateValidator::CreateX509Chain(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void SystemCertificateValidator_CreateX509Chain_mB6B7EE7F5FFEAE0575BDEAA5482D81633BE553AB (void);
// 0x000001C2 System.Boolean Mono.Net.Security.SystemCertificateValidator::NeedsChain(Mono.Security.Interface.MonoTlsSettings)
extern void SystemCertificateValidator_NeedsChain_m8BAD2594BF43C9150CD00581977B4F537C277FE3 (void);
// 0x000001C3 System.Net.Security.RemoteCertificateValidationCallback Mono.Net.Security.Private.CallbackHelpers::MonoToPublic(Mono.Security.Interface.MonoRemoteCertificateValidationCallback)
extern void CallbackHelpers_MonoToPublic_m425EA806EFED0B283EC06B4FB0EA471E8ACA92D4 (void);
// 0x000001C4 System.Net.Security.LocalCertSelectionCallback Mono.Net.Security.Private.CallbackHelpers::MonoToInternal(Mono.Security.Interface.MonoLocalCertificateSelectionCallback)
extern void CallbackHelpers_MonoToInternal_mDDCA94EA8ECB94A1308AE1C8199F5A0B8DEAC1B0 (void);
// 0x000001C5 System.Void Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m7807CD991EC4D16395E1278477E3317868E18200 (void);
// 0x000001C6 System.Boolean Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass5_0::<MonoToPublic>b__0(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void U3CU3Ec__DisplayClass5_0_U3CMonoToPublicU3Eb__0_m4103265ECFA6558EE594E7BC847723EB97443018 (void);
// 0x000001C7 System.Void Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_mB77347EF574C2C51BBD1A7B1AF673B3D92B056E2 (void);
// 0x000001C8 System.Security.Cryptography.X509Certificates.X509Certificate Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass8_0::<MonoToInternal>b__0(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern void U3CU3Ec__DisplayClass8_0_U3CMonoToInternalU3Eb__0_m3AE731A20AB6B949B0584AB838DF089C80602F4C (void);
// 0x000001C9 System.Void Mono.Http.NtlmSession::.ctor()
extern void NtlmSession__ctor_mA97C8FC8E8DE96DE3F32909B142F4AB4DF8164A0 (void);
// 0x000001CA System.Net.Authorization Mono.Http.NtlmSession::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern void NtlmSession_Authenticate_mB6D8793AD526536CCF6125081AAB225AC16CE2FA (void);
// 0x000001CB System.Net.Authorization Mono.Http.NtlmClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern void NtlmClient_Authenticate_m93E135571DBA7CD774FF632109C22D0285A75049 (void);
// 0x000001CC System.Net.Authorization Mono.Http.NtlmClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern void NtlmClient_PreAuthenticate_m086D1325279E3D203B3ECFFDCF718930D2A31B9E (void);
// 0x000001CD System.String Mono.Http.NtlmClient::get_AuthenticationType()
extern void NtlmClient_get_AuthenticationType_mA0E7AF714054C75AD6151729DC08011D2BEE4510 (void);
// 0x000001CE System.Void Mono.Http.NtlmClient::.ctor()
extern void NtlmClient__ctor_m3D9978034518F3C84749A7F8315BAD280BDF2C81 (void);
// 0x000001CF System.Void Mono.Http.NtlmClient::.cctor()
extern void NtlmClient__cctor_mF37C107318D8D9977B31B28860FF42C20B45DD30 (void);
// 0x000001D0 System.Void Mono.Http.NtlmClient/<>c::.cctor()
extern void U3CU3Ec__cctor_mDB4D626C1B3434A421DDF9A83A669939B433EB87 (void);
// 0x000001D1 System.Void Mono.Http.NtlmClient/<>c::.ctor()
extern void U3CU3Ec__ctor_m763ADB48F8381F44946398EE4CD3F62DA76913C2 (void);
// 0x000001D2 Mono.Http.NtlmSession Mono.Http.NtlmClient/<>c::<Authenticate>b__1_0(System.Net.HttpWebRequest)
extern void U3CU3Ec_U3CAuthenticateU3Eb__1_0_mDA687B87E74F0D58938A2C7821FD6EADB6649AE5 (void);
// 0x000001D3 System.Boolean System.IriHelper::CheckIriUnicodeRange(System.Char,System.Boolean)
extern void IriHelper_CheckIriUnicodeRange_m5E205B2F096045DE5259E0E98A062DD0813206F6 (void);
// 0x000001D4 System.Boolean System.IriHelper::CheckIriUnicodeRange(System.Char,System.Char,System.Boolean&,System.Boolean)
extern void IriHelper_CheckIriUnicodeRange_m03144D55C396E2870F76F85B29852F8314346A1A (void);
// 0x000001D5 System.Boolean System.IriHelper::CheckIsReserved(System.Char,System.UriComponents)
extern void IriHelper_CheckIsReserved_m9EFA3BDFD606F7EDB5DBF0549B20BFF2E4775C7F (void);
// 0x000001D6 System.String System.IriHelper::EscapeUnescapeIri(System.Char*,System.Int32,System.Int32,System.UriComponents)
extern void IriHelper_EscapeUnescapeIri_m6CABB7FC44037C0B5C18132AF5D8C55DB5C64444 (void);
// 0x000001D7 System.Boolean System.Uri::get_IsImplicitFile()
extern void Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA (void);
// 0x000001D8 System.Boolean System.Uri::get_IsUncOrDosPath()
extern void Uri_get_IsUncOrDosPath_mF197920D1C1DBDE10A3478855D89D36210D8CE94 (void);
// 0x000001D9 System.Boolean System.Uri::get_IsDosPath()
extern void Uri_get_IsDosPath_m3374B9D26D6B547862ACB2E617AB6F96CA31A5AF (void);
// 0x000001DA System.Boolean System.Uri::get_IsUncPath()
extern void Uri_get_IsUncPath_m1004A84C83F38F40A4AD1334F22BDDE658EF8E99 (void);
// 0x000001DB System.Uri/Flags System.Uri::get_HostType()
extern void Uri_get_HostType_m6C142BC37D44CF1F53D80627455BC6B1CB747820 (void);
// 0x000001DC System.UriParser System.Uri::get_Syntax()
extern void Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9 (void);
// 0x000001DD System.Boolean System.Uri::get_IsNotAbsoluteUri()
extern void Uri_get_IsNotAbsoluteUri_m7394FF83375B299BA634518D3104903AFEAE3177 (void);
// 0x000001DE System.Boolean System.Uri::IriParsingStatic(System.UriParser)
extern void Uri_IriParsingStatic_m0F2797FEA328A2B1A72EE03F9BD88C577A7A0471 (void);
// 0x000001DF System.Boolean System.Uri::get_AllowIdn()
extern void Uri_get_AllowIdn_m4031E81D7D0E44FC81C6951D78B2C836EC8270D7 (void);
// 0x000001E0 System.Boolean System.Uri::AllowIdnStatic(System.UriParser,System.Uri/Flags)
extern void Uri_AllowIdnStatic_mF38FDCA5248AA93F8823A192D61E2180FEC9C41C (void);
// 0x000001E1 System.Boolean System.Uri::IsIntranet(System.String)
extern void Uri_IsIntranet_m89BF3C395C8D960B103DF056976B7C369231270C (void);
// 0x000001E2 System.Boolean System.Uri::get_UserDrivenParsing()
extern void Uri_get_UserDrivenParsing_mF09087D4DE9A0823EBF1FC0C14101335D01393F2 (void);
// 0x000001E3 System.Void System.Uri::SetUserDrivenParsing()
extern void Uri_SetUserDrivenParsing_mDF0BFAFE946EAD9122ED2A542132902D7E47FD9C (void);
// 0x000001E4 System.UInt16 System.Uri::get_SecuredPathIndex()
extern void Uri_get_SecuredPathIndex_m0BE7920E94AA002B4CD2D568BD6E0FD91F0D7F0B (void);
// 0x000001E5 System.Boolean System.Uri::NotAny(System.Uri/Flags)
extern void Uri_NotAny_m2C222924AE10957D835ECBC887D456FB30DCF969 (void);
// 0x000001E6 System.Boolean System.Uri::InFact(System.Uri/Flags)
extern void Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4 (void);
// 0x000001E7 System.Boolean System.Uri::StaticNotAny(System.Uri/Flags,System.Uri/Flags)
extern void Uri_StaticNotAny_mA7DA612608D1C43837E3DC3E31C02F994746736C (void);
// 0x000001E8 System.Boolean System.Uri::StaticInFact(System.Uri/Flags,System.Uri/Flags)
extern void Uri_StaticInFact_m6B17A3B95B81DABD390B643ABD9ADAA316D5EF98 (void);
// 0x000001E9 System.Uri/UriInfo System.Uri::EnsureUriInfo()
extern void Uri_EnsureUriInfo_m5FA3DF1CD26867815CE1F247A47530E1D7E35F7E (void);
// 0x000001EA System.Void System.Uri::EnsureParseRemaining()
extern void Uri_EnsureParseRemaining_m7BC86BEFE07F56D480C9ACBCE64983806F6789BB (void);
// 0x000001EB System.Void System.Uri::EnsureHostString(System.Boolean)
extern void Uri_EnsureHostString_m47897EC94F83DFE1CA16CE71167DDD3CC986C22A (void);
// 0x000001EC System.Void System.Uri::.ctor(System.String)
extern void Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C (void);
// 0x000001ED System.Void System.Uri::.ctor(System.String,System.UriKind)
extern void Uri__ctor_m2D669E1153A700F9ED8BA31473565827AF8E39EF (void);
// 0x000001EE System.Void System.Uri::.ctor(System.Uri,System.String)
extern void Uri__ctor_m0B44AFB01F3FEDE9319BA4556288340D16101F9D (void);
// 0x000001EF System.Void System.Uri::CreateUri(System.Uri,System.String,System.Boolean)
extern void Uri_CreateUri_mCAE7D6A4588E2FF4507FF9198B856FD7354DBE0D (void);
// 0x000001F0 System.Void System.Uri::.ctor(System.Uri,System.Uri)
extern void Uri__ctor_m77D32DF0ABC88A040214913D87A07F2C522CCD18 (void);
// 0x000001F1 System.ParsingError System.Uri::GetCombinedString(System.Uri,System.String,System.Boolean,System.String&)
extern void Uri_GetCombinedString_mC6530D23E30E379E8991E52862B9B38489430743 (void);
// 0x000001F2 System.UriFormatException System.Uri::GetException(System.ParsingError)
extern void Uri_GetException_m6A158C16E69136DF56BCF19CC4C7DCCC2601CF84 (void);
// 0x000001F3 System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Uri__ctor_m8AEBDC795304F6C78A02BC41BB4C6BF93C4DE53B (void);
// 0x000001F4 System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m42AA79366787600D266604222086BD6BDD28A36A (void);
// 0x000001F5 System.Void System.Uri::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Uri_GetObjectData_mB720AACE3C54C5B104A7DF0658369C7F7914E895 (void);
// 0x000001F6 System.String System.Uri::get_AbsolutePath()
extern void Uri_get_AbsolutePath_mB845A99D0CEB442AAF90B24A95EE7509C34C6306 (void);
// 0x000001F7 System.String System.Uri::get_PrivateAbsolutePath()
extern void Uri_get_PrivateAbsolutePath_mB480D22E4DBE280587D24BCF9A57D3C096C4A833 (void);
// 0x000001F8 System.String System.Uri::get_AbsoluteUri()
extern void Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA (void);
// 0x000001F9 System.String System.Uri::get_LocalPath()
extern void Uri_get_LocalPath_mED5287A7F9ADF1CCBAFD77221135A37C133F067E (void);
// 0x000001FA System.String System.Uri::get_Authority()
extern void Uri_get_Authority_m453C817B1681F5FD99431A7FDF6F11CDB9FAC093 (void);
// 0x000001FB System.UriHostNameType System.Uri::get_HostNameType()
extern void Uri_get_HostNameType_mEBBF38E3DA9410F5D1CA0C8877D7188B8822D97B (void);
// 0x000001FC System.Boolean System.Uri::get_IsDefaultPort()
extern void Uri_get_IsDefaultPort_mFDB9DC42A42C2D8C5ADFE5D590DEEE27D2918271 (void);
// 0x000001FD System.Boolean System.Uri::get_IsFile()
extern void Uri_get_IsFile_mCFA022C6E4641EBD7285A01056B7E201CEFD2C73 (void);
// 0x000001FE System.Boolean System.Uri::get_IsLoopback()
extern void Uri_get_IsLoopback_m6988313CE348064A6A068347D878DDC51594B710 (void);
// 0x000001FF System.String System.Uri::get_PathAndQuery()
extern void Uri_get_PathAndQuery_m0FFF28F15DF953C5866C2A0DEEA2034ECE6A0F35 (void);
// 0x00000200 System.Boolean System.Uri::get_IsUnc()
extern void Uri_get_IsUnc_m74CE69038E37D7F868EF3EFD9DCCD08AA11877CC (void);
// 0x00000201 System.String System.Uri::get_Host()
extern void Uri_get_Host_m05E1D82C4E6B14A2369AEDED218F9089DE336E64 (void);
// 0x00000202 System.Boolean System.Uri::StaticIsFile(System.UriParser)
extern void Uri_StaticIsFile_m3E03FC49813EF629A488CF3093AE0A5675210CED (void);
// 0x00000203 System.Object System.Uri::get_InitializeLock()
extern void Uri_get_InitializeLock_mAE613B41FE88D4D6BC8D943F2A75B6BC00861B0E (void);
// 0x00000204 System.Void System.Uri::InitializeUriConfig()
extern void Uri_InitializeUriConfig_m0DB8F34B6FAF361C0FE002FA800548608A03F8E5 (void);
// 0x00000205 System.String System.Uri::GetLocalPath()
extern void Uri_GetLocalPath_mCEB791B43D5872D4D6230A21E2DFC93166CEDA1B (void);
// 0x00000206 System.Int32 System.Uri::get_Port()
extern void Uri_get_Port_m23A08BF55EC1DC7421B99E6E77544DDF5900099C (void);
// 0x00000207 System.String System.Uri::get_Fragment()
extern void Uri_get_Fragment_m1734B2D3F27F38AA342CB65885DE732160501E72 (void);
// 0x00000208 System.String System.Uri::get_Scheme()
extern void Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29 (void);
// 0x00000209 System.Boolean System.Uri::get_OriginalStringSwitched()
extern void Uri_get_OriginalStringSwitched_m405404D361D84E268AED978DCE114F5E43583987 (void);
// 0x0000020A System.String System.Uri::get_OriginalString()
extern void Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC (void);
// 0x0000020B System.String System.Uri::get_DnsSafeHost()
extern void Uri_get_DnsSafeHost_m3A22E10619987FC8FED6CEDDCA5D9647AC5B6AC5 (void);
// 0x0000020C System.Boolean System.Uri::get_IsAbsoluteUri()
extern void Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25 (void);
// 0x0000020D System.Boolean System.Uri::get_UserEscaped()
extern void Uri_get_UserEscaped_m36B234B7081DFE3B3B6D7FCA2F9768C10DDD2807 (void);
// 0x0000020E System.Boolean System.Uri::IsGenDelim(System.Char)
extern void Uri_IsGenDelim_m93EB89B013A4AE8B5C5D792EB8BEAD2BF8EC5997 (void);
// 0x0000020F System.Boolean System.Uri::IsHexDigit(System.Char)
extern void Uri_IsHexDigit_m87121EC1F62716CC681A4458BF2E6A6B844BD95F (void);
// 0x00000210 System.Int32 System.Uri::FromHex(System.Char)
extern void Uri_FromHex_m16E5FED0B58BA0A603C6BDDE6AA90F3C3FC78977 (void);
// 0x00000211 System.Int32 System.Uri::GetHashCode()
extern void Uri_GetHashCode_mC0D119822A7E802B29C060B809048C5A1413E818 (void);
// 0x00000212 System.String System.Uri::ToString()
extern void Uri_ToString_m477A204846385EC6FF1DA9043B81B11512C3962E (void);
// 0x00000213 System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern void Uri_op_Equality_mB322C9CBB45846441BDCA7357E7D28123824ED83 (void);
// 0x00000214 System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
extern void Uri_op_Inequality_m3B3733CAA19866A20EF76A772B368EFB5FC89A4F (void);
// 0x00000215 System.Boolean System.Uri::Equals(System.Object)
extern void Uri_Equals_mB02B478FE0FB77C8D853B051F798C8D978531C1C (void);
// 0x00000216 System.ParsingError System.Uri::ParseScheme(System.String,System.Uri/Flags&,System.UriParser&)
extern void Uri_ParseScheme_m65694E4DA17BF0A8447ACE12EF444FE4D1E1AB16 (void);
// 0x00000217 System.UriFormatException System.Uri::ParseMinimal()
extern void Uri_ParseMinimal_m47FF7ACAEB543DE87332F9DEA79F92ADC575107F (void);
// 0x00000218 System.ParsingError System.Uri::PrivateParseMinimal()
extern void Uri_PrivateParseMinimal_m154A67FFA2FA8E2D9215163B56DF1BB88576A369 (void);
// 0x00000219 System.Void System.Uri::PrivateParseMinimalIri(System.String,System.UInt16)
extern void Uri_PrivateParseMinimalIri_m1A23B409BC4FE17A66599BFE0E0CD62C06D45E2B (void);
// 0x0000021A System.Void System.Uri::CreateUriInfo(System.Uri/Flags)
extern void Uri_CreateUriInfo_mD8864BD45B6397D4C3AED68BA2D3EAEB520DB9E6 (void);
// 0x0000021B System.Void System.Uri::CreateHostString()
extern void Uri_CreateHostString_m2C549411869B57ADE6595800B6493BDB0A52F124 (void);
// 0x0000021C System.String System.Uri::CreateHostStringHelper(System.String,System.UInt16,System.UInt16,System.Uri/Flags&,System.String&)
extern void Uri_CreateHostStringHelper_m53D695F65E776AB98FD3359894C2C34109E08D00 (void);
// 0x0000021D System.Void System.Uri::GetHostViaCustomSyntax()
extern void Uri_GetHostViaCustomSyntax_mF2DABFE767AB49B8F8E0C9E19937AF900A1E4BC7 (void);
// 0x0000021E System.String System.Uri::GetParts(System.UriComponents,System.UriFormat)
extern void Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA (void);
// 0x0000021F System.String System.Uri::GetEscapedParts(System.UriComponents)
extern void Uri_GetEscapedParts_m61C2B2B898F8AA8B75AAEC38EF78C340BC1F5A20 (void);
// 0x00000220 System.String System.Uri::GetUnescapedParts(System.UriComponents,System.UriFormat)
extern void Uri_GetUnescapedParts_m6F106ECABBBAFA95C3F3CA86F540B9EE0B9D01D4 (void);
// 0x00000221 System.String System.Uri::ReCreateParts(System.UriComponents,System.UInt16,System.UriFormat)
extern void Uri_ReCreateParts_m3D0CD53477FBAB5E8988373B8D749E286399278E (void);
// 0x00000222 System.String System.Uri::GetUriPartsFromUserString(System.UriComponents)
extern void Uri_GetUriPartsFromUserString_m81B60C6E31AB8EA51438E391F7990334B96ACD29 (void);
// 0x00000223 System.Void System.Uri::ParseRemaining()
extern void Uri_ParseRemaining_m8C4350479C64906DDE464595F8BE5F8C14F2038D (void);
// 0x00000224 System.UInt16 System.Uri::ParseSchemeCheckImplicitFile(System.Char*,System.UInt16,System.ParsingError&,System.Uri/Flags&,System.UriParser&)
extern void Uri_ParseSchemeCheckImplicitFile_m5F6B3C184CF455ED80D78937F208EB8C10265395 (void);
// 0x00000225 System.Boolean System.Uri::CheckKnownSchemes(System.Int64*,System.UInt16,System.UriParser&)
extern void Uri_CheckKnownSchemes_mDA8F5B5A8A82B234F1212931F2E0F19146BAEAA6 (void);
// 0x00000226 System.ParsingError System.Uri::CheckSchemeSyntax(System.Char*,System.UInt16,System.UriParser&)
extern void Uri_CheckSchemeSyntax_m2D8AE16F4A6A55E89603F7E9D675227302B53761 (void);
// 0x00000227 System.UInt16 System.Uri::CheckAuthorityHelper(System.Char*,System.UInt16,System.UInt16,System.ParsingError&,System.Uri/Flags&,System.UriParser,System.String&)
extern void Uri_CheckAuthorityHelper_mC5010AEC19EED1968EDE7CB52C92AC0AC0869503 (void);
// 0x00000228 System.Void System.Uri::CheckAuthorityHelperHandleDnsIri(System.Char*,System.UInt16,System.Int32,System.Int32,System.Boolean,System.Boolean,System.UriParser,System.String,System.Uri/Flags&,System.Boolean&,System.String&,System.ParsingError&)
extern void Uri_CheckAuthorityHelperHandleDnsIri_m495861D9EEE706767F37270F316951E292C60B7A (void);
// 0x00000229 System.Void System.Uri::CheckAuthorityHelperHandleAnyHostIri(System.Char*,System.Int32,System.Int32,System.Boolean,System.Boolean,System.UriParser,System.Uri/Flags&,System.String&,System.ParsingError&)
extern void Uri_CheckAuthorityHelperHandleAnyHostIri_m25D24DA750D1E2D025C22CF6D2BAD269AB3FA21B (void);
// 0x0000022A System.Void System.Uri::FindEndOfComponent(System.String,System.UInt16&,System.UInt16,System.Char)
extern void Uri_FindEndOfComponent_m82D6E67E45114D23F403807E6D711C2A4E574567 (void);
// 0x0000022B System.Void System.Uri::FindEndOfComponent(System.Char*,System.UInt16&,System.UInt16,System.Char)
extern void Uri_FindEndOfComponent_mFFFB2266B9FDDB757E145586461BF46D26C509C9 (void);
// 0x0000022C System.Uri/Check System.Uri::CheckCanonical(System.Char*,System.UInt16&,System.UInt16,System.Char)
extern void Uri_CheckCanonical_mFD937A06DC3885481C374ACDD190A3B3E40152F3 (void);
// 0x0000022D System.Char[] System.Uri::GetCanonicalPath(System.Char[],System.Int32&,System.UriFormat)
extern void Uri_GetCanonicalPath_mA187EAD590C890FE0623CF7B1EFF4364B57FAF10 (void);
// 0x0000022E System.Void System.Uri::UnescapeOnly(System.Char*,System.Int32,System.Int32&,System.Char,System.Char,System.Char)
extern void Uri_UnescapeOnly_m18532EEE1EFF1E8A802527ECC577BA815CC33B1B (void);
// 0x0000022F System.Char[] System.Uri::Compress(System.Char[],System.UInt16,System.Int32&,System.UriParser)
extern void Uri_Compress_mDF5924D464EB2CDA24C14D7448878C2DA46A9B8F (void);
// 0x00000230 System.Int32 System.Uri::CalculateCaseInsensitiveHashCode(System.String)
extern void Uri_CalculateCaseInsensitiveHashCode_m3C1409D3BEC3AEDC2880109BF1755CF68263DD7A (void);
// 0x00000231 System.String System.Uri::CombineUri(System.Uri,System.String,System.UriFormat)
extern void Uri_CombineUri_m25D4A53B7535EA10C7DA7835E16961BBD5895EB0 (void);
// 0x00000232 System.Boolean System.Uri::IsLWS(System.Char)
extern void Uri_IsLWS_m4A41E0157130C65E6768C4F5CFEE2219DAE773B4 (void);
// 0x00000233 System.Boolean System.Uri::IsAsciiLetter(System.Char)
extern void Uri_IsAsciiLetter_mBEE6BD837C66CBB199E8A9FAB14A85744368F0FC (void);
// 0x00000234 System.Boolean System.Uri::IsAsciiLetterOrDigit(System.Char)
extern void Uri_IsAsciiLetterOrDigit_m1DDFA9F464FD15F8482F0C669E7E22B20DE07DCA (void);
// 0x00000235 System.Boolean System.Uri::IsBidiControlCharacter(System.Char)
extern void Uri_IsBidiControlCharacter_m36A30E0708EE0209208B23136C2BEC9C802C697B (void);
// 0x00000236 System.String System.Uri::StripBidiControlCharacter(System.Char*,System.Int32,System.Int32)
extern void Uri_StripBidiControlCharacter_m17F47758CA4DA1A5D21B3D39D00E8364DC2CAF50 (void);
// 0x00000237 System.Void System.Uri::CreateThis(System.String,System.Boolean,System.UriKind)
extern void Uri_CreateThis_m86E72577BCB9A6FDF5A0EC8EDFDD5F41AD3256FC (void);
// 0x00000238 System.Void System.Uri::InitializeUri(System.ParsingError,System.UriKind,System.UriFormatException&)
extern void Uri_InitializeUri_m952665E18BE60CFAC5A6025FCD2A0BB9CCB5C567 (void);
// 0x00000239 System.Boolean System.Uri::CheckForConfigLoad(System.String)
extern void Uri_CheckForConfigLoad_m4AF9D27B5F62A0D4269B23FB3BEF4846E8D0983D (void);
// 0x0000023A System.Boolean System.Uri::CheckForUnicode(System.String)
extern void Uri_CheckForUnicode_m2A9DB97F3B384DADC1A274C8982404DDE17F6688 (void);
// 0x0000023B System.Boolean System.Uri::CheckForEscapedUnreserved(System.String)
extern void Uri_CheckForEscapedUnreserved_m5EC5EFE77E30B08708B49086DF72A659454B1A2F (void);
// 0x0000023C System.Boolean System.Uri::TryCreate(System.String,System.UriKind,System.Uri&)
extern void Uri_TryCreate_m44277635BB8291BC0AADD85B9C9A015C1C21EF92 (void);
// 0x0000023D System.String System.Uri::GetComponents(System.UriComponents,System.UriFormat)
extern void Uri_GetComponents_mA614A98C35F2E5D924A10A8018A46606AFB6133E (void);
// 0x0000023E System.String System.Uri::UnescapeDataString(System.String)
extern void Uri_UnescapeDataString_m52E242703F2842594B2B37D673CDD5465ABCC836 (void);
// 0x0000023F System.String System.Uri::EscapeUnescapeIri(System.String,System.Int32,System.Int32,System.UriComponents)
extern void Uri_EscapeUnescapeIri_m606A69B7A76A131D0CA6F562E5DC0721C626E071 (void);
// 0x00000240 System.Void System.Uri::.ctor(System.Uri/Flags,System.UriParser,System.String)
extern void Uri__ctor_m899122920EF2C3DE3E7A620B823D43BDB54D3406 (void);
// 0x00000241 System.Uri System.Uri::CreateHelper(System.String,System.Boolean,System.UriKind,System.UriFormatException&)
extern void Uri_CreateHelper_m95C8DB174EFC0CB21C3A74160A1001C14D3EF6DD (void);
// 0x00000242 System.Uri System.Uri::ResolveHelper(System.Uri,System.Uri,System.String&,System.Boolean&,System.UriFormatException&)
extern void Uri_ResolveHelper_m2C5CDF42841B464E75B3AA102A24BABA8B51698E (void);
// 0x00000243 System.String System.Uri::GetRelativeSerializationString(System.UriFormat)
extern void Uri_GetRelativeSerializationString_mBCE8CC99C746B18A9DE0B2C6084C5B90A192130D (void);
// 0x00000244 System.String System.Uri::GetComponentsHelper(System.UriComponents,System.UriFormat)
extern void Uri_GetComponentsHelper_mAA39E421157735AAD7D93A187CCCAED5A122C8E8 (void);
// 0x00000245 System.Void System.Uri::CreateThisFromUri(System.Uri)
extern void Uri_CreateThisFromUri_mCD4CFC7C223ADB909C634DA7EAE279DCD9BF5C14 (void);
// 0x00000246 System.Void System.Uri::.cctor()
extern void Uri__cctor_mA68C4B77F99F4519E579073E32CB924DB4467457 (void);
// 0x00000247 System.Void System.Uri/UriInfo::.ctor()
extern void UriInfo__ctor_m990C9CA368096AFE12B92F3605FAA70EC0C69BB8 (void);
// 0x00000248 System.Void System.Uri/MoreInfo::.ctor()
extern void MoreInfo__ctor_mF8515B2BCCB5E7DC008164794946ADE7ADBCD2BD (void);
// 0x00000249 System.Void System.UriFormatException::.ctor()
extern void UriFormatException__ctor_m2B9D2DCA45C6A4C42CAC0DF830E3448E1F67D9DD (void);
// 0x0000024A System.Void System.UriFormatException::.ctor(System.String)
extern void UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F (void);
// 0x0000024B System.Void System.UriFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void UriFormatException__ctor_mE91E0D915423F0506A5C6AB2885ECA712669A02D (void);
// 0x0000024C System.Void System.UriFormatException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m064FAD00616310EEE1CBA5BE4B438F73C9EF489B (void);
// 0x0000024D System.Char[] System.UriHelper::EscapeString(System.String,System.Int32,System.Int32,System.Char[],System.Int32&,System.Boolean,System.Char,System.Char,System.Char)
extern void UriHelper_EscapeString_m322E8737F58BBAF891A75032EC1800BE548F84D7 (void);
// 0x0000024E System.Char[] System.UriHelper::EnsureDestinationSize(System.Char*,System.Char[],System.Int32,System.Int16,System.Int16,System.Int32&,System.Int32)
extern void UriHelper_EnsureDestinationSize_mE185843AD5B8A829F920147F03FB252CF06129B4 (void);
// 0x0000024F System.Char[] System.UriHelper::UnescapeString(System.String,System.Int32,System.Int32,System.Char[],System.Int32&,System.Char,System.Char,System.Char,System.UnescapeMode,System.UriParser,System.Boolean)
extern void UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300 (void);
// 0x00000250 System.Char[] System.UriHelper::UnescapeString(System.Char*,System.Int32,System.Int32,System.Char[],System.Int32&,System.Char,System.Char,System.Char,System.UnescapeMode,System.UriParser,System.Boolean)
extern void UriHelper_UnescapeString_m92E5C90E7DAE8DA5C7C1E6FB72B0F58321B6484C (void);
// 0x00000251 System.Void System.UriHelper::MatchUTF8Sequence(System.Char*,System.Char[],System.Int32&,System.Char[],System.Int32,System.Byte[],System.Int32,System.Boolean,System.Boolean)
extern void UriHelper_MatchUTF8Sequence_m4A148931E07097731DC7EA68EAA933E9330BE81B (void);
// 0x00000252 System.Void System.UriHelper::EscapeAsciiChar(System.Char,System.Char[],System.Int32&)
extern void UriHelper_EscapeAsciiChar_m7590A6410A9F1AE1207006EF9B46578E1A3DFD33 (void);
// 0x00000253 System.Char System.UriHelper::EscapedAscii(System.Char,System.Char)
extern void UriHelper_EscapedAscii_m80D926F5C8B177B5D041BBFEADEAB2363A324461 (void);
// 0x00000254 System.Boolean System.UriHelper::IsNotSafeForUnescape(System.Char)
extern void UriHelper_IsNotSafeForUnescape_m5504A36A2CC19ABC23255896A98D9912D390107F (void);
// 0x00000255 System.Boolean System.UriHelper::IsReservedUnreservedOrHash(System.Char)
extern void UriHelper_IsReservedUnreservedOrHash_m155B0658622E15DED0A384A2E6A6013CE23016D6 (void);
// 0x00000256 System.Boolean System.UriHelper::IsUnreserved(System.Char)
extern void UriHelper_IsUnreserved_m6B1C0AA7DEC462F62400ACFC7EFC5807730CD5B1 (void);
// 0x00000257 System.Boolean System.UriHelper::Is3986Unreserved(System.Char)
extern void UriHelper_Is3986Unreserved_m0532DF2A1577C475D0D83F10C6C5D91F125AC028 (void);
// 0x00000258 System.Void System.UriHelper::.cctor()
extern void UriHelper__cctor_m3C84C4F90301AB1F9B4979FA9B0C8926D4A7B96D (void);
// 0x00000259 System.String System.UriParser::get_SchemeName()
extern void UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80 (void);
// 0x0000025A System.Int32 System.UriParser::get_DefaultPort()
extern void UriParser_get_DefaultPort_m7ECA5BE839D36C7FF854FEA0795D8DE701487D33 (void);
// 0x0000025B System.UriParser System.UriParser::OnNewUri()
extern void UriParser_OnNewUri_m44FB81344517268B51B276DF7A9E236C04134ED5 (void);
// 0x0000025C System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern void UriParser_InitializeAndValidate_mE7C239F559C834F7C156FC21F175023D98E11A45 (void);
// 0x0000025D System.String System.UriParser::Resolve(System.Uri,System.Uri,System.UriFormatException&)
extern void UriParser_Resolve_m031E03AD4141D77F023345D8FB087FA06CEA41C0 (void);
// 0x0000025E System.String System.UriParser::GetComponents(System.Uri,System.UriComponents,System.UriFormat)
extern void UriParser_GetComponents_mEF92B7D8CD59B1C8502D195D775D02D2C844FC1B (void);
// 0x0000025F System.Boolean System.UriParser::get_ShouldUseLegacyV2Quirks()
extern void UriParser_get_ShouldUseLegacyV2Quirks_mB8917CAC10CD13E44F2EB21D4033044BEAF132B2 (void);
// 0x00000260 System.Void System.UriParser::.cctor()
extern void UriParser__cctor_mE4EC170DEC3DCA59D51181F240BABD3404816DA2 (void);
// 0x00000261 System.UriSyntaxFlags System.UriParser::get_Flags()
extern void UriParser_get_Flags_mDAA0D828057CA2CA4493FD152D3760E975BAE7F0 (void);
// 0x00000262 System.Boolean System.UriParser::NotAny(System.UriSyntaxFlags)
extern void UriParser_NotAny_m6A42FAC623F0EBDE441782DAC3E3B2ED34756D91 (void);
// 0x00000263 System.Boolean System.UriParser::InFact(System.UriSyntaxFlags)
extern void UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D (void);
// 0x00000264 System.Boolean System.UriParser::IsAllSet(System.UriSyntaxFlags)
extern void UriParser_IsAllSet_m356BD044D8A53560B6A7AA9B81A20A364E015C18 (void);
// 0x00000265 System.Boolean System.UriParser::IsFullMatch(System.UriSyntaxFlags,System.UriSyntaxFlags)
extern void UriParser_IsFullMatch_m3967BB43AFB5C11B75DA3BD1CE18B8DAE8F0C32E (void);
// 0x00000266 System.Void System.UriParser::.ctor(System.UriSyntaxFlags)
extern void UriParser__ctor_m9A2C47C1F30EF65ADFBAEB0A569FB972F383825C (void);
// 0x00000267 System.UriParser System.UriParser::FindOrFetchAsUnknownV1Syntax(System.String)
extern void UriParser_FindOrFetchAsUnknownV1Syntax_m7844992E6D0B5FD676AEE47EBD4806305418D6CC (void);
// 0x00000268 System.Boolean System.UriParser::get_IsSimple()
extern void UriParser_get_IsSimple_m09BA6505FDD1AE0BF6C711AE9C2C3F9379B868F8 (void);
// 0x00000269 System.UriParser System.UriParser::InternalOnNewUri()
extern void UriParser_InternalOnNewUri_m0AC629BCCA398E9A193AC16A5E91D445B9B70D79 (void);
// 0x0000026A System.Void System.UriParser::InternalValidate(System.Uri,System.UriFormatException&)
extern void UriParser_InternalValidate_mB845C482B4B01EDFE012DD4C4CEF62C8F4FFE94F (void);
// 0x0000026B System.String System.UriParser::InternalResolve(System.Uri,System.Uri,System.UriFormatException&)
extern void UriParser_InternalResolve_m7EF249EAEFB9DDE866F9830E91CC61E09F1548E9 (void);
// 0x0000026C System.String System.UriParser::InternalGetComponents(System.Uri,System.UriComponents,System.UriFormat)
extern void UriParser_InternalGetComponents_mAB0A54E462724FA417D0EF3A2AD0BD24BC66DFF8 (void);
// 0x0000026D System.Void System.UriParser/BuiltInUriParser::.ctor(System.String,System.Int32,System.UriSyntaxFlags)
extern void BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA (void);
// 0x0000026E System.String System.DomainNameHelper::ParseCanonicalName(System.String,System.Int32,System.Int32,System.Boolean&)
extern void DomainNameHelper_ParseCanonicalName_m1C6E554993599045E72E090518D75FF532D2543E (void);
// 0x0000026F System.Boolean System.DomainNameHelper::IsValid(System.Char*,System.UInt16,System.Int32&,System.Boolean&,System.Boolean)
extern void DomainNameHelper_IsValid_m023973F3D85C0B74F55D6B7576911D4813685052 (void);
// 0x00000270 System.Boolean System.DomainNameHelper::IsValidByIri(System.Char*,System.UInt16,System.Int32&,System.Boolean&,System.Boolean)
extern void DomainNameHelper_IsValidByIri_m97F02F9CC9EEE94308F903936E1E5D4322364869 (void);
// 0x00000271 System.String System.DomainNameHelper::IdnEquivalent(System.Char*,System.Int32,System.Int32,System.Boolean&,System.Boolean&)
extern void DomainNameHelper_IdnEquivalent_mBA80E13A0C970D723F1A05F175F6B96E0DE3C974 (void);
// 0x00000272 System.String System.DomainNameHelper::IdnEquivalent(System.Char*,System.Int32,System.Int32,System.Boolean&,System.String&)
extern void DomainNameHelper_IdnEquivalent_mEF2BE28789962238A2B054639C82F8F711903CDC (void);
// 0x00000273 System.Boolean System.DomainNameHelper::IsIdnAce(System.String,System.Int32)
extern void DomainNameHelper_IsIdnAce_m485D0A1D49F957AE91C55D7B9FBFFFBDAAAA5D2C (void);
// 0x00000274 System.Boolean System.DomainNameHelper::IsIdnAce(System.Char*,System.Int32)
extern void DomainNameHelper_IsIdnAce_m23563D1578752DE903E530A0FEA2B58574D870EE (void);
// 0x00000275 System.String System.DomainNameHelper::UnicodeEquivalent(System.String,System.Char*,System.Int32,System.Int32)
extern void DomainNameHelper_UnicodeEquivalent_m862F489809AFF128883F7E52A9B56D0169AE5168 (void);
// 0x00000276 System.String System.DomainNameHelper::UnicodeEquivalent(System.Char*,System.Int32,System.Int32,System.Boolean&,System.Boolean&)
extern void DomainNameHelper_UnicodeEquivalent_m3F187B69AA5313A516F863666C0A29292C8F07A3 (void);
// 0x00000277 System.Boolean System.DomainNameHelper::IsASCIILetterOrDigit(System.Char,System.Boolean&)
extern void DomainNameHelper_IsASCIILetterOrDigit_mD6FFEFCECBEDF217C5A8D809F4AA253E1DB660D3 (void);
// 0x00000278 System.Boolean System.DomainNameHelper::IsValidDomainLabelCharacter(System.Char,System.Boolean&)
extern void DomainNameHelper_IsValidDomainLabelCharacter_mF7475044482589FC28EA15C6573810309C85FC82 (void);
// 0x00000279 System.String System.IPv4AddressHelper::ParseCanonicalName(System.String,System.Int32,System.Int32,System.Boolean&)
extern void IPv4AddressHelper_ParseCanonicalName_m4237845A3AFA554557BEC618AB11D5EF7A18C2BB (void);
// 0x0000027A System.Int32 System.IPv4AddressHelper::ParseHostNumber(System.String,System.Int32,System.Int32)
extern void IPv4AddressHelper_ParseHostNumber_mA0B8E60CD5047E9A4276CB424C028F070240D29E (void);
// 0x0000027B System.Boolean System.IPv4AddressHelper::IsValid(System.Char*,System.Int32,System.Int32&,System.Boolean,System.Boolean,System.Boolean)
extern void IPv4AddressHelper_IsValid_m6CAD01230EC033CB8F4ABB645327065A56E2ED7D (void);
// 0x0000027C System.Boolean System.IPv4AddressHelper::IsValidCanonical(System.Char*,System.Int32,System.Int32&,System.Boolean,System.Boolean)
extern void IPv4AddressHelper_IsValidCanonical_mCB1804B552E1977E9F89B1A912B2969A73DEB0C7 (void);
// 0x0000027D System.Int64 System.IPv4AddressHelper::ParseNonCanonical(System.Char*,System.Int32,System.Int32&,System.Boolean)
extern void IPv4AddressHelper_ParseNonCanonical_mE2C4832ED252F3CE61B73DBE25B4959568E2FE31 (void);
// 0x0000027E System.Boolean System.IPv4AddressHelper::Parse(System.String,System.Byte*,System.Int32,System.Int32)
extern void IPv4AddressHelper_Parse_m9B4CB7935241AA6DC67171684E19AF8190364768 (void);
// 0x0000027F System.Boolean System.IPv4AddressHelper::ParseCanonical(System.String,System.Byte*,System.Int32,System.Int32)
extern void IPv4AddressHelper_ParseCanonical_mEDA5683F6AC98D0C403C60B16C2F859590A653AA (void);
// 0x00000280 System.String System.IPv6AddressHelper::ParseCanonicalName(System.String,System.Int32,System.Boolean&,System.String&)
extern void IPv6AddressHelper_ParseCanonicalName_mAC7315CCA0517C9B95D33C4114E90A8B94EC1E2C (void);
// 0x00000281 System.String System.IPv6AddressHelper::CreateCanonicalName(System.UInt16*)
extern void IPv6AddressHelper_CreateCanonicalName_m0A4D273AB7676EBF0E66E7CBE15100D4614163C2 (void);
// 0x00000282 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> System.IPv6AddressHelper::FindCompressionRange(System.UInt16*)
extern void IPv6AddressHelper_FindCompressionRange_m5D45C7CDE351D8B073A56656BA062453CD5124A5 (void);
// 0x00000283 System.Boolean System.IPv6AddressHelper::ShouldHaveIpv4Embedded(System.UInt16*)
extern void IPv6AddressHelper_ShouldHaveIpv4Embedded_m7EDC33D2523FB9961D20EB54A136369E6548E19C (void);
// 0x00000284 System.Boolean System.IPv6AddressHelper::InternalIsValid(System.Char*,System.Int32,System.Int32&,System.Boolean)
extern void IPv6AddressHelper_InternalIsValid_mE50A940EF05F93B144F0BCFFB9AA5F7E4E23F160 (void);
// 0x00000285 System.Boolean System.IPv6AddressHelper::IsValid(System.Char*,System.Int32,System.Int32&)
extern void IPv6AddressHelper_IsValid_m8090A11221F415591268CBE22105DEFB03CA0FFF (void);
// 0x00000286 System.Boolean System.IPv6AddressHelper::IsValidStrict(System.Char*,System.Int32,System.Int32&)
extern void IPv6AddressHelper_IsValidStrict_m3BD3CD0DCD4FD29996CFC9369F2C2904BE80604E (void);
// 0x00000287 System.Boolean System.IPv6AddressHelper::Parse(System.String,System.UInt16*,System.Int32,System.String&)
extern void IPv6AddressHelper_Parse_m40C11CFE4C02F7BDE4A8A9B5AD65B5481576E91B (void);
// 0x00000288 System.String System.UncNameHelper::ParseCanonicalName(System.String,System.Int32,System.Int32,System.Boolean&)
extern void UncNameHelper_ParseCanonicalName_mAA1CF481E9789909F458A6C31A10DF991166F060 (void);
// 0x00000289 System.Boolean System.UncNameHelper::IsValid(System.Char*,System.UInt16,System.Int32&,System.Boolean)
extern void UncNameHelper_IsValid_m7179761E2E8A1F136418B2E4FA00277A192CD38E (void);
// 0x0000028A System.Void System.IOAsyncCallback::.ctor(System.Object,System.IntPtr)
extern void IOAsyncCallback__ctor_mDB00FA0892C32A7922EA6D83F9B99B8BA89B9DD3 (void);
// 0x0000028B System.Void System.IOAsyncCallback::Invoke(System.IOAsyncResult)
extern void IOAsyncCallback_Invoke_mA74FD3E451CC9609430B5FBF1B2D25EEBE2F32BC (void);
// 0x0000028C System.IAsyncResult System.IOAsyncCallback::BeginInvoke(System.IOAsyncResult,System.AsyncCallback,System.Object)
extern void IOAsyncCallback_BeginInvoke_m8143A1DCA75368D887F3FD709BE437367EEF47CF (void);
// 0x0000028D System.Void System.IOAsyncCallback::EndInvoke(System.IAsyncResult)
extern void IOAsyncCallback_EndInvoke_m74C12B3991995B2357E2B709F77BF6A40CF16008 (void);
// 0x0000028E System.Void System.IOAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern void IOAsyncResult__ctor_m15A5D72B261B81BE2F8F7DA53FC0E476A3F18591 (void);
// 0x0000028F System.AsyncCallback System.IOAsyncResult::get_AsyncCallback()
extern void IOAsyncResult_get_AsyncCallback_m28F2ACED98F5AA2F05882EAD17000A26FA3DD5BD (void);
// 0x00000290 System.Object System.IOAsyncResult::get_AsyncState()
extern void IOAsyncResult_get_AsyncState_m4BA9096036268EB3E29A69E75C3E80D995C7E9A4 (void);
// 0x00000291 System.Threading.WaitHandle System.IOAsyncResult::get_AsyncWaitHandle()
extern void IOAsyncResult_get_AsyncWaitHandle_m8BBC83F5F781EE26F35A122B25331DACEB4E558C (void);
// 0x00000292 System.Boolean System.IOAsyncResult::get_CompletedSynchronously()
extern void IOAsyncResult_get_CompletedSynchronously_m5E49A06643ED2276D2443D4732349973DEFA25B3 (void);
// 0x00000293 System.Void System.IOAsyncResult::set_CompletedSynchronously(System.Boolean)
extern void IOAsyncResult_set_CompletedSynchronously_m4A31A9B8FEFC22E25A8DA81A338A05287487D1D9 (void);
// 0x00000294 System.Boolean System.IOAsyncResult::get_IsCompleted()
extern void IOAsyncResult_get_IsCompleted_m22B40C642B779F95E0D4997A336040E89C492291 (void);
// 0x00000295 System.Void System.IOAsyncResult::set_IsCompleted(System.Boolean)
extern void IOAsyncResult_set_IsCompleted_m66D2E977BD61DC754E0AE7C7B9CB630345905183 (void);
// 0x00000296 System.Void System.IOAsyncResult::CompleteDisposed()
// 0x00000297 System.Void System.IOSelectorJob::.ctor(System.IOOperation,System.IOAsyncCallback,System.IOAsyncResult)
extern void IOSelectorJob__ctor_m8047B29992961582F968FFB25D95662807C44B59 (void);
// 0x00000298 System.Void System.IOSelectorJob::System.Threading.IThreadPoolWorkItem.ExecuteWorkItem()
extern void IOSelectorJob_System_Threading_IThreadPoolWorkItem_ExecuteWorkItem_m3CF49929004EB3B060E4ED5DB237C109145C9459 (void);
// 0x00000299 System.Void System.IOSelectorJob::System.Threading.IThreadPoolWorkItem.MarkAborted(System.Threading.ThreadAbortException)
extern void IOSelectorJob_System_Threading_IThreadPoolWorkItem_MarkAborted_m14D2CEA6CC4C9E471B27035A45F73D3040AF3044 (void);
// 0x0000029A System.Void System.IOSelectorJob::MarkDisposed()
extern void IOSelectorJob_MarkDisposed_m59C7B222B7A2C93E838F2515F89A9BFD16CB6435 (void);
// 0x0000029B System.Void System.IOSelector::Add(System.IntPtr,System.IOSelectorJob)
extern void IOSelector_Add_m5CD0B1BF6A9DBA5B42F6D6CE9F86568A2ADBFF02 (void);
// 0x0000029C System.Int32 System.Platform::uname(System.IntPtr)
extern void Platform_uname_m5E4EF5E0C9060E01783301E28C8A58F45D8E4959 (void);
// 0x0000029D System.Void System.Platform::CheckOS()
extern void Platform_CheckOS_m2F2AD83106D4EE97E646C36AB222745F6A79439B (void);
// 0x0000029E System.Boolean System.Platform::get_IsMacOS()
extern void Platform_get_IsMacOS_m842F8283BD3653F87D1EAC7F17DD2B2B0DD8A6D2 (void);
// 0x0000029F System.Void System.UriTypeConverter::.ctor()
extern void UriTypeConverter__ctor_mA17261C142F48B539C7255CC50CA95F730854EAB (void);
// 0x000002A0 System.Boolean System.UriTypeConverter::CanConvert(System.Type)
extern void UriTypeConverter_CanConvert_mA0211689C50AF82982D1A12135FA0CFB8548A392 (void);
// 0x000002A1 System.Void System.Timers.ElapsedEventHandler::.ctor(System.Object,System.IntPtr)
extern void ElapsedEventHandler__ctor_m2B99031158D1FA06EBE73A025249B5C1955441F5 (void);
// 0x000002A2 System.Void System.Timers.ElapsedEventHandler::Invoke(System.Object,System.Timers.ElapsedEventArgs)
extern void ElapsedEventHandler_Invoke_m4D269892FBC3DE224ACE0FAFE97F2304BE8B6502 (void);
// 0x000002A3 System.IAsyncResult System.Timers.ElapsedEventHandler::BeginInvoke(System.Object,System.Timers.ElapsedEventArgs,System.AsyncCallback,System.Object)
extern void ElapsedEventHandler_BeginInvoke_m49B03DB77CEF0033A832F756E40473AF6B8DFF66 (void);
// 0x000002A4 System.Void System.Timers.ElapsedEventHandler::EndInvoke(System.IAsyncResult)
extern void ElapsedEventHandler_EndInvoke_m2B52C86D96354EB2F5321672A862EA081ED5F176 (void);
// 0x000002A5 System.Void System.Timers.Timer::.ctor()
extern void Timer__ctor_m8CD6E716B068F1BC15FE81D56671AB0A6D347EBD (void);
// 0x000002A6 System.Void System.Timers.Timer::set_AutoReset(System.Boolean)
extern void Timer_set_AutoReset_mE39B03D4F8032BB39B5D09CBF4A13CE660A16619 (void);
// 0x000002A7 System.Void System.Timers.Timer::set_Enabled(System.Boolean)
extern void Timer_set_Enabled_m03648A71FC47FCE77C7382AED892E09ABE6C034C (void);
// 0x000002A8 System.Int32 System.Timers.Timer::CalculateRoundedInterval(System.Double,System.Boolean)
extern void Timer_CalculateRoundedInterval_m323DEBC750CFD4F2DC6F78F280E930D6E37E32F5 (void);
// 0x000002A9 System.Void System.Timers.Timer::UpdateTimer()
extern void Timer_UpdateTimer_m708B8F81518FA1BF0B047046F102A5B67F92719D (void);
// 0x000002AA System.Void System.Timers.Timer::set_Interval(System.Double)
extern void Timer_set_Interval_mA437AE87EFE7BDF2BD2314158D3729B210474C23 (void);
// 0x000002AB System.Void System.Timers.Timer::add_Elapsed(System.Timers.ElapsedEventHandler)
extern void Timer_add_Elapsed_m3FDC03401E31156441DE48618493181329C31A1F (void);
// 0x000002AC System.Void System.Timers.Timer::remove_Elapsed(System.Timers.ElapsedEventHandler)
extern void Timer_remove_Elapsed_m788B169776E02C6BF94629B970115CA4AE6D8569 (void);
// 0x000002AD System.ComponentModel.ISynchronizeInvoke System.Timers.Timer::get_SynchronizingObject()
extern void Timer_get_SynchronizingObject_m1E077BDCAC9C362AD952DD7D966D9F8DAD347BC7 (void);
// 0x000002AE System.Void System.Timers.Timer::Close()
extern void Timer_Close_m11E3B3DB0ED2E09E67EC10C07FA9646938552392 (void);
// 0x000002AF System.Void System.Timers.Timer::Dispose(System.Boolean)
extern void Timer_Dispose_mA3F3E99853D4604113DD2289E1B7C98120E6ABB2 (void);
// 0x000002B0 System.Void System.Timers.Timer::Start()
extern void Timer_Start_mF5E17482246B10FB111BA69520B84E5FD9F244EF (void);
// 0x000002B1 System.Void System.Timers.Timer::MyTimerCallback(System.Object)
extern void Timer_MyTimerCallback_m439027CED7BB35E94A00D2E07D58999FBFB0DC78 (void);
// 0x000002B2 System.Void System.Timers.TimersDescriptionAttribute::.ctor(System.String)
extern void TimersDescriptionAttribute__ctor_m79C886D1E15294CD0ECA0CA84FD0760EC37995DE (void);
// 0x000002B3 System.String System.Timers.TimersDescriptionAttribute::get_Description()
extern void TimersDescriptionAttribute_get_Description_mB079536EE7888C80B599361A92823A1A4C81977B (void);
// 0x000002B4 System.Void System.Timers.ElapsedEventArgs::.ctor(System.DateTime)
extern void ElapsedEventArgs__ctor_m011632FEB3E0DD777827925EBD080DF47FD28087 (void);
// 0x000002B5 System.Void System.Text.RegularExpressions.Regex::.ctor()
extern void Regex__ctor_mEF92EBB8A321ACF8E6D952D4211D447970641A82 (void);
// 0x000002B6 System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern void Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E (void);
// 0x000002B7 System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
extern void Regex__ctor_m5BA9C047FEB3C93AD388668FA855CB1A63FB62A4 (void);
// 0x000002B8 System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions,System.TimeSpan,System.Boolean)
extern void Regex__ctor_m554F01ECFC788141B8015EDE403CFC57DCF65F36 (void);
// 0x000002B9 System.Void System.Text.RegularExpressions.Regex::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Regex__ctor_m6B76356476FAEC104F6088C71C9659B5023AC010 (void);
// 0x000002BA System.Void System.Text.RegularExpressions.Regex::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Regex_System_Runtime_Serialization_ISerializable_GetObjectData_m2ADC8012FEA27096E98EB9126BBE2553EFBEADDD (void);
// 0x000002BB System.Void System.Text.RegularExpressions.Regex::ValidateMatchTimeout(System.TimeSpan)
extern void Regex_ValidateMatchTimeout_m4C1557E40D27540F8F9E8CDA35473D94F7B1B2F2 (void);
// 0x000002BC System.TimeSpan System.Text.RegularExpressions.Regex::InitDefaultMatchTimeout()
extern void Regex_InitDefaultMatchTimeout_mB8E2FD4834968D6E775632A6D55FCA39D65F402F (void);
// 0x000002BD System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::get_Options()
extern void Regex_get_Options_m96441AFDEDDDDC9AD8A21C54C1C05B63581154E2 (void);
// 0x000002BE System.TimeSpan System.Text.RegularExpressions.Regex::get_MatchTimeout()
extern void Regex_get_MatchTimeout_mA525D5C25A1DADC3AF1913D6E5FA6D8F0208309A (void);
// 0x000002BF System.Boolean System.Text.RegularExpressions.Regex::get_RightToLeft()
extern void Regex_get_RightToLeft_m14807D1228A43D322B2F7E4D82613ADE0C2DCA77 (void);
// 0x000002C0 System.String System.Text.RegularExpressions.Regex::ToString()
extern void Regex_ToString_m7D4EE035485F8A09613A6A7D171CAB7FE3FA68A1 (void);
// 0x000002C1 System.String System.Text.RegularExpressions.Regex::GroupNameFromNumber(System.Int32)
extern void Regex_GroupNameFromNumber_mEC9EA505C734A60A6D10397D5ABB37EED1C244B9 (void);
// 0x000002C2 System.Int32 System.Text.RegularExpressions.Regex::GroupNumberFromName(System.String)
extern void Regex_GroupNumberFromName_mC7A0648278EF384E09A1A1731A0703981D0ED14B (void);
// 0x000002C3 System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String)
extern void Regex_IsMatch_m4E87C3158FE78A31C412357F7DB6692639B2BA57 (void);
// 0x000002C4 System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String,System.Text.RegularExpressions.RegexOptions,System.TimeSpan)
extern void Regex_IsMatch_m826F4E3E65102210A1FF2FC27EEC9DD6695F3E50 (void);
// 0x000002C5 System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
extern void Regex_IsMatch_m872C1D85AC5BF891AC3C3FC789BBC4E2393FB859 (void);
// 0x000002C6 System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.Int32)
extern void Regex_IsMatch_mDDCAABF0AAA48842BD96EE728A7A6732D579DB6D (void);
// 0x000002C7 System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.String,System.Text.RegularExpressions.RegexOptions)
extern void Regex_Matches_m52B8A7E346FBCD0F7283230251CF1F62F378A8F6 (void);
// 0x000002C8 System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.String,System.Text.RegularExpressions.RegexOptions,System.TimeSpan)
extern void Regex_Matches_m19C6D1642E26BE6175479F6BD1D92C3760B6BB47 (void);
// 0x000002C9 System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String)
extern void Regex_Matches_mA3CAFBD1A581E7409F82E96AB033F62A5F305465 (void);
// 0x000002CA System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.Int32)
extern void Regex_Matches_mE1B9FFC45683E3446029B8449C3361CDA2BD1B15 (void);
// 0x000002CB System.Void System.Text.RegularExpressions.Regex::InitializeReferences()
extern void Regex_InitializeReferences_mE235C9E46D78418A5D0C2D20AD885CA08A7963CC (void);
// 0x000002CC System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Run(System.Boolean,System.Int32,System.String,System.Int32,System.Int32,System.Int32)
extern void Regex_Run_m021AFCB24F51C103A7E8D1D59805B47FD582E3FB (void);
// 0x000002CD System.Text.RegularExpressions.CachedCodeEntry System.Text.RegularExpressions.Regex::LookupCachedAndUpdate(System.String)
extern void Regex_LookupCachedAndUpdate_m622DA7C090B63CE5ECC87F5F20607ACAC8594522 (void);
// 0x000002CE System.Text.RegularExpressions.CachedCodeEntry System.Text.RegularExpressions.Regex::CacheCode(System.String)
extern void Regex_CacheCode_m32FF18EDE0B858DB864C27480A11C5A1F752D419 (void);
// 0x000002CF System.Boolean System.Text.RegularExpressions.Regex::UseOptionR()
extern void Regex_UseOptionR_m17558F506D3A7513656679A8F3DEEA0C50AAE90A (void);
// 0x000002D0 System.Boolean System.Text.RegularExpressions.Regex::UseOptionInvariant()
extern void Regex_UseOptionInvariant_m82E216D16CB2DA12B8B8DAA67CC2BE6BF4DF2470 (void);
// 0x000002D1 System.Void System.Text.RegularExpressions.Regex::.cctor()
extern void Regex__cctor_m31D6C59D0C59DC5CD2ED72B1B595211F27611F39 (void);
// 0x000002D2 System.Void System.Text.RegularExpressions.CachedCodeEntry::.ctor(System.String,System.Collections.Hashtable,System.String[],System.Text.RegularExpressions.RegexCode,System.Collections.Hashtable,System.Int32,System.Text.RegularExpressions.ExclusiveReference,System.Text.RegularExpressions.SharedReference)
extern void CachedCodeEntry__ctor_mFBEEE67EEFD35764488134D428A6BCABE54E52FC (void);
// 0x000002D3 System.Object System.Text.RegularExpressions.ExclusiveReference::Get()
extern void ExclusiveReference_Get_mA02D838F3B8772B83AD45D47E8C8275F8EA2A48A (void);
// 0x000002D4 System.Void System.Text.RegularExpressions.ExclusiveReference::Release(System.Object)
extern void ExclusiveReference_Release_m3D5A9BB7FFB13DBB21386F811936EFC6A358C1FC (void);
// 0x000002D5 System.Void System.Text.RegularExpressions.ExclusiveReference::.ctor()
extern void ExclusiveReference__ctor_m67E39E008F143F07C22A8424E051F6798B917089 (void);
// 0x000002D6 System.Void System.Text.RegularExpressions.SharedReference::.ctor()
extern void SharedReference__ctor_mCD9987FD08CB61180CE190A8DEF05E5AAF5C1087 (void);
// 0x000002D7 System.Void System.Text.RegularExpressions.RegexBoyerMoore::.ctor(System.String,System.Boolean,System.Boolean,System.Globalization.CultureInfo)
extern void RegexBoyerMoore__ctor_m7CFF1BFAA30CB9EC30B0E48B3321366E2C6EBE92 (void);
// 0x000002D8 System.Boolean System.Text.RegularExpressions.RegexBoyerMoore::MatchPattern(System.String,System.Int32)
extern void RegexBoyerMoore_MatchPattern_m244689CC527B9B9EFB200E94FCC3C9A8B9210543 (void);
// 0x000002D9 System.Boolean System.Text.RegularExpressions.RegexBoyerMoore::IsMatch(System.String,System.Int32,System.Int32,System.Int32)
extern void RegexBoyerMoore_IsMatch_m37FDC206D86DD3C91A745BE15731677FE01F624B (void);
// 0x000002DA System.Int32 System.Text.RegularExpressions.RegexBoyerMoore::Scan(System.String,System.Int32,System.Int32,System.Int32)
extern void RegexBoyerMoore_Scan_m8C2A8FE0B6CFE8C7844AF8F2FEA79532935BAE43 (void);
// 0x000002DB System.String System.Text.RegularExpressions.RegexBoyerMoore::ToString()
extern void RegexBoyerMoore_ToString_m3D7727E2CB60CF2BED7C907CDD2B1584BDF95A5A (void);
// 0x000002DC System.Void System.Text.RegularExpressions.Capture::.ctor(System.String,System.Int32,System.Int32)
extern void Capture__ctor_m5FB71B7ADA66B2D3AD6B681BEE846F0FD62F11C3 (void);
// 0x000002DD System.String System.Text.RegularExpressions.Capture::get_Value()
extern void Capture_get_Value_mC5CAABA66AC24C90CE1A6FE7EE93AD4A926E4D5A (void);
// 0x000002DE System.String System.Text.RegularExpressions.Capture::ToString()
extern void Capture_ToString_mA44E5E7488551081E648C851ABFFB796430EE5C1 (void);
// 0x000002DF System.Void System.Text.RegularExpressions.Capture::.ctor()
extern void Capture__ctor_m72C4D0A93638E338515B280A289285A064F064C1 (void);
// 0x000002E0 System.Void System.Text.RegularExpressions.CaptureCollection::.ctor(System.Text.RegularExpressions.Group)
extern void CaptureCollection__ctor_m51AA3D1F3F645DB9A6B9002B7A971F46D0DA0089 (void);
// 0x000002E1 System.Object System.Text.RegularExpressions.CaptureCollection::get_SyncRoot()
extern void CaptureCollection_get_SyncRoot_m6E9AD5A5F870020F1F278897056D3FC8B13582FF (void);
// 0x000002E2 System.Boolean System.Text.RegularExpressions.CaptureCollection::get_IsSynchronized()
extern void CaptureCollection_get_IsSynchronized_mC977AFC32D3D3CC4F11F61AD477AB2061705904A (void);
// 0x000002E3 System.Int32 System.Text.RegularExpressions.CaptureCollection::get_Count()
extern void CaptureCollection_get_Count_mC83C2AE60F245A995ED192450BB0660E4BFC73DF (void);
// 0x000002E4 System.Text.RegularExpressions.Capture System.Text.RegularExpressions.CaptureCollection::get_Item(System.Int32)
extern void CaptureCollection_get_Item_m38FB912D78566BF8D926F85ABF06770E70B87E7C (void);
// 0x000002E5 System.Void System.Text.RegularExpressions.CaptureCollection::CopyTo(System.Array,System.Int32)
extern void CaptureCollection_CopyTo_m9066DD9E35382427D284FF3F9E35BD2C99160108 (void);
// 0x000002E6 System.Collections.IEnumerator System.Text.RegularExpressions.CaptureCollection::GetEnumerator()
extern void CaptureCollection_GetEnumerator_mE3F6547C20D9A0EEA8C201DE903E1828F2CC6F8C (void);
// 0x000002E7 System.Text.RegularExpressions.Capture System.Text.RegularExpressions.CaptureCollection::GetCapture(System.Int32)
extern void CaptureCollection_GetCapture_m52D3C11680567CEE2196B35A76D75A7FFEBF617A (void);
// 0x000002E8 System.Void System.Text.RegularExpressions.CaptureCollection::.ctor()
extern void CaptureCollection__ctor_m99E1DDC528A7C23B30B7BD3557C3044CBC7E6043 (void);
// 0x000002E9 System.Void System.Text.RegularExpressions.CaptureEnumerator::.ctor(System.Text.RegularExpressions.CaptureCollection)
extern void CaptureEnumerator__ctor_mA4C64A5B5D69EA1E38B87E0DCF6CC3B18670A03E (void);
// 0x000002EA System.Boolean System.Text.RegularExpressions.CaptureEnumerator::MoveNext()
extern void CaptureEnumerator_MoveNext_m24B6099142A5DC82DCF5711D2F6FE9252C9603E6 (void);
// 0x000002EB System.Object System.Text.RegularExpressions.CaptureEnumerator::get_Current()
extern void CaptureEnumerator_get_Current_m9C74AA50A043E53A02EF56778A97BD3498D312E8 (void);
// 0x000002EC System.Text.RegularExpressions.Capture System.Text.RegularExpressions.CaptureEnumerator::get_Capture()
extern void CaptureEnumerator_get_Capture_m02F94CD692952EC04026014A1879FB058E9CB0F1 (void);
// 0x000002ED System.Void System.Text.RegularExpressions.CaptureEnumerator::Reset()
extern void CaptureEnumerator_Reset_m8513DDF2EFB58C87469D6159F825DD162A60AA14 (void);
// 0x000002EE System.Void System.Text.RegularExpressions.RegexCharClass::.cctor()
extern void RegexCharClass__cctor_mE2E6B03346A8A9C65323338DF3025E881096AE2B (void);
// 0x000002EF System.Void System.Text.RegularExpressions.RegexCharClass::.ctor()
extern void RegexCharClass__ctor_m70685392EB3C5808958E20C99E045F33E21C8192 (void);
// 0x000002F0 System.Void System.Text.RegularExpressions.RegexCharClass::.ctor(System.Boolean,System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexCharClass/SingleRange>,System.Text.StringBuilder,System.Text.RegularExpressions.RegexCharClass)
extern void RegexCharClass__ctor_m1751FAC691E10689BB486E5525B3D19F9523C5DB (void);
// 0x000002F1 System.Boolean System.Text.RegularExpressions.RegexCharClass::get_CanMerge()
extern void RegexCharClass_get_CanMerge_mE5B4778068AA81EB1B7D426C48EF0C5CFEA0021B (void);
// 0x000002F2 System.Void System.Text.RegularExpressions.RegexCharClass::set_Negate(System.Boolean)
extern void RegexCharClass_set_Negate_mC3CA41B098CF6B47BBF9101619F1AC4EAA3FD131 (void);
// 0x000002F3 System.Void System.Text.RegularExpressions.RegexCharClass::AddChar(System.Char)
extern void RegexCharClass_AddChar_mDDCFF2A0510737DEAE68DEE7E1359AA7F07D0609 (void);
// 0x000002F4 System.Void System.Text.RegularExpressions.RegexCharClass::AddCharClass(System.Text.RegularExpressions.RegexCharClass)
extern void RegexCharClass_AddCharClass_m1E139F8FDC0E1A33E143A3A413255F6D521F7EB8 (void);
// 0x000002F5 System.Void System.Text.RegularExpressions.RegexCharClass::AddSet(System.String)
extern void RegexCharClass_AddSet_mEE9EBABD3A66153DE53095A2ADD9AAE04F908DC6 (void);
// 0x000002F6 System.Void System.Text.RegularExpressions.RegexCharClass::AddSubtraction(System.Text.RegularExpressions.RegexCharClass)
extern void RegexCharClass_AddSubtraction_m1FEE4A4FA29196BF22FBDD7EF3A263010E7661D9 (void);
// 0x000002F7 System.Void System.Text.RegularExpressions.RegexCharClass::AddRange(System.Char,System.Char)
extern void RegexCharClass_AddRange_mD9FB543DC3B128104DBCFEA0B2E672E8A8669C5A (void);
// 0x000002F8 System.Void System.Text.RegularExpressions.RegexCharClass::AddCategoryFromName(System.String,System.Boolean,System.Boolean,System.String)
extern void RegexCharClass_AddCategoryFromName_m53A239A7DACD3D5A676505E6E296C4AB999BBA4C (void);
// 0x000002F9 System.Void System.Text.RegularExpressions.RegexCharClass::AddCategory(System.String)
extern void RegexCharClass_AddCategory_m75BF8C842C362F4D910FCB2BA59678BB71153C24 (void);
// 0x000002FA System.Void System.Text.RegularExpressions.RegexCharClass::AddLowercase(System.Globalization.CultureInfo)
extern void RegexCharClass_AddLowercase_m4FAE0AB13B3DB076F711B6B06C2E61F40A115B40 (void);
// 0x000002FB System.Void System.Text.RegularExpressions.RegexCharClass::AddLowercaseRange(System.Char,System.Char,System.Globalization.CultureInfo)
extern void RegexCharClass_AddLowercaseRange_m0715BCBBB26E5000E2F87CC555DFFD1EF97414B1 (void);
// 0x000002FC System.Void System.Text.RegularExpressions.RegexCharClass::AddWord(System.Boolean,System.Boolean)
extern void RegexCharClass_AddWord_m977499503E6B5EB99106DF69247EBE65DDE301D9 (void);
// 0x000002FD System.Void System.Text.RegularExpressions.RegexCharClass::AddSpace(System.Boolean,System.Boolean)
extern void RegexCharClass_AddSpace_mA542E2916FEB49051A7AA0490704466DA85326BD (void);
// 0x000002FE System.Void System.Text.RegularExpressions.RegexCharClass::AddDigit(System.Boolean,System.Boolean,System.String)
extern void RegexCharClass_AddDigit_m7B6D6AA1D10B8D29D004D94FC26F9CA53B3306D7 (void);
// 0x000002FF System.Char System.Text.RegularExpressions.RegexCharClass::SingletonChar(System.String)
extern void RegexCharClass_SingletonChar_m8D1E6205BE062B72C10A417C0BBE130888FAF3FF (void);
// 0x00000300 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsMergeable(System.String)
extern void RegexCharClass_IsMergeable_m5731790CFE2293CB05120782908AC550C58C63BC (void);
// 0x00000301 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsEmpty(System.String)
extern void RegexCharClass_IsEmpty_m75C168B21BE2E4C4BDC15ABC666A755F0064F7CF (void);
// 0x00000302 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsSingleton(System.String)
extern void RegexCharClass_IsSingleton_mF6500F4A47D3E44CDE29C0BA21AC111282C50737 (void);
// 0x00000303 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsSingletonInverse(System.String)
extern void RegexCharClass_IsSingletonInverse_mBD2991532F9310EC5E5F30AE4C20998DA39F69BE (void);
// 0x00000304 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsSubtraction(System.String)
extern void RegexCharClass_IsSubtraction_m5E9C607DA50B374AAA071E88F2005796767101AC (void);
// 0x00000305 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsNegated(System.String)
extern void RegexCharClass_IsNegated_mED1CDB81577538910205D00DAF9127AA9F902DF8 (void);
// 0x00000306 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsECMAWordChar(System.Char)
extern void RegexCharClass_IsECMAWordChar_mA7325BA81D0699C24F5123956BD4927F1E3DE846 (void);
// 0x00000307 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsWordChar(System.Char)
extern void RegexCharClass_IsWordChar_mE33E6C5569AA1B920849CD5555DF3CE9A9C10440 (void);
// 0x00000308 System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInClass(System.Char,System.String)
extern void RegexCharClass_CharInClass_m255B7683478670C002F04238394193EEFA126AE8 (void);
// 0x00000309 System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInClassRecursive(System.Char,System.String,System.Int32)
extern void RegexCharClass_CharInClassRecursive_m08F8B6BE653368E78DDC6D1B279F226B0DD470C8 (void);
// 0x0000030A System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInClassInternal(System.Char,System.String,System.Int32,System.Int32,System.Int32)
extern void RegexCharClass_CharInClassInternal_m752D8B14E233A7E88EB844D3DCC94F0415C59BCF (void);
// 0x0000030B System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInCategory(System.Char,System.String,System.Int32,System.Int32,System.Int32)
extern void RegexCharClass_CharInCategory_mD2F03CCA8C95F3D238E7F3F191FDF12E728199A6 (void);
// 0x0000030C System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInCategoryGroup(System.Char,System.Globalization.UnicodeCategory,System.String,System.Int32&)
extern void RegexCharClass_CharInCategoryGroup_m2578711ED00EC75ECE3C9F797959E3C24004BA0F (void);
// 0x0000030D System.String System.Text.RegularExpressions.RegexCharClass::NegateCategory(System.String)
extern void RegexCharClass_NegateCategory_m6F4A4DA1466E59581F16BFD29A0F978027B06BDC (void);
// 0x0000030E System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexCharClass::Parse(System.String)
extern void RegexCharClass_Parse_m1A4671A8A47BA3DAC47386D01D5995C6100E87AC (void);
// 0x0000030F System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexCharClass::ParseRecursive(System.String,System.Int32)
extern void RegexCharClass_ParseRecursive_m16DE8B45D1F6AD4AE03EB9BDE49DC4BEDFC095BB (void);
// 0x00000310 System.Int32 System.Text.RegularExpressions.RegexCharClass::RangeCount()
extern void RegexCharClass_RangeCount_mDA7393449D38496B2598E7EF912AADF9A14842DF (void);
// 0x00000311 System.String System.Text.RegularExpressions.RegexCharClass::ToStringClass()
extern void RegexCharClass_ToStringClass_mFC6754E97F014AFE4B5138AD5386E9C76D1D3CD7 (void);
// 0x00000312 System.Text.RegularExpressions.RegexCharClass/SingleRange System.Text.RegularExpressions.RegexCharClass::GetRangeAt(System.Int32)
extern void RegexCharClass_GetRangeAt_m92D3897D77D2AD15415BA0DE4E8FB4FBBFFD092C (void);
// 0x00000313 System.Void System.Text.RegularExpressions.RegexCharClass::Canonicalize()
extern void RegexCharClass_Canonicalize_mFD09C33130AD6323D1AFA7944B02DD68A5731A66 (void);
// 0x00000314 System.String System.Text.RegularExpressions.RegexCharClass::SetFromProperty(System.String,System.Boolean,System.String)
extern void RegexCharClass_SetFromProperty_m5938519AC2682F7F0E6491A0D71C11FCA825B827 (void);
// 0x00000315 System.Void System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::.ctor(System.Char,System.Char,System.Int32,System.Int32)
extern void LowerCaseMapping__ctor_m0236442CB5098331DEAE7CACFCAC42741945D3E8 (void);
// 0x00000316 System.Int32 System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::Compare(System.Text.RegularExpressions.RegexCharClass/SingleRange,System.Text.RegularExpressions.RegexCharClass/SingleRange)
extern void SingleRangeComparer_Compare_m54BB5AFA11BF2F18A0C2F9491CE48E409D64AD3E (void);
// 0x00000317 System.Void System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::.ctor()
extern void SingleRangeComparer__ctor_mCEFF5ECE77E53783E5B8EAC98A5E194B6C743E73 (void);
// 0x00000318 System.Void System.Text.RegularExpressions.RegexCharClass/SingleRange::.ctor(System.Char,System.Char)
extern void SingleRange__ctor_m886247FFB10501E4CDDC575B221D8CD1BC85E3B6 (void);
// 0x00000319 System.Void System.Text.RegularExpressions.RegexCode::.ctor(System.Int32[],System.Collections.Generic.List`1<System.String>,System.Int32,System.Collections.Hashtable,System.Int32,System.Text.RegularExpressions.RegexBoyerMoore,System.Text.RegularExpressions.RegexPrefix,System.Int32,System.Boolean)
extern void RegexCode__ctor_mEFC64ECB52D0D2735F99AC16BD6355D3A59499CE (void);
// 0x0000031A System.Boolean System.Text.RegularExpressions.RegexCode::OpcodeBacktracks(System.Int32)
extern void RegexCode_OpcodeBacktracks_m2A8CE4121EF7827E575F17B2D0DB7C009B6DD9FB (void);
// 0x0000031B System.Text.RegularExpressions.RegexPrefix System.Text.RegularExpressions.RegexFCD::FirstChars(System.Text.RegularExpressions.RegexTree)
extern void RegexFCD_FirstChars_m705EA84111ABE92AFC2ACD490AC26BC6400D75EA (void);
// 0x0000031C System.Text.RegularExpressions.RegexPrefix System.Text.RegularExpressions.RegexFCD::Prefix(System.Text.RegularExpressions.RegexTree)
extern void RegexFCD_Prefix_m2D11D5E62E9F31984C40FDD6C0ED9860DF56DCF8 (void);
// 0x0000031D System.Int32 System.Text.RegularExpressions.RegexFCD::Anchors(System.Text.RegularExpressions.RegexTree)
extern void RegexFCD_Anchors_m4F3A11C644EC9B7B16CCCBD792A5E2FED2C22EA7 (void);
// 0x0000031E System.Int32 System.Text.RegularExpressions.RegexFCD::AnchorFromType(System.Int32)
extern void RegexFCD_AnchorFromType_mF78B2ABC2D01B01663B7ABC885B3067F199A40C7 (void);
// 0x0000031F System.Void System.Text.RegularExpressions.RegexFCD::.ctor()
extern void RegexFCD__ctor_m81A680DE9EE0A7D9CB3F0245E4B584033ED7C299 (void);
// 0x00000320 System.Void System.Text.RegularExpressions.RegexFCD::PushInt(System.Int32)
extern void RegexFCD_PushInt_m2C075ABCE35D8B5F3AE842D0A79BEBBDF53E79E6 (void);
// 0x00000321 System.Boolean System.Text.RegularExpressions.RegexFCD::IntIsEmpty()
extern void RegexFCD_IntIsEmpty_m4CFF914DAAAF04747FD11B2740D47CD4A41F7321 (void);
// 0x00000322 System.Int32 System.Text.RegularExpressions.RegexFCD::PopInt()
extern void RegexFCD_PopInt_m15845F98455FA8320FCC484AD15CE5A55B43EA14 (void);
// 0x00000323 System.Void System.Text.RegularExpressions.RegexFCD::PushFC(System.Text.RegularExpressions.RegexFC)
extern void RegexFCD_PushFC_mC4174F9014750978ADB35B3E45DE43D740070B92 (void);
// 0x00000324 System.Boolean System.Text.RegularExpressions.RegexFCD::FCIsEmpty()
extern void RegexFCD_FCIsEmpty_m3FFF61F7B0567B2B1ABA23377742A6D0AC9DF016 (void);
// 0x00000325 System.Text.RegularExpressions.RegexFC System.Text.RegularExpressions.RegexFCD::PopFC()
extern void RegexFCD_PopFC_mE67FE0664971894C6935632FD634207784EAE43F (void);
// 0x00000326 System.Text.RegularExpressions.RegexFC System.Text.RegularExpressions.RegexFCD::TopFC()
extern void RegexFCD_TopFC_mC9A10E7061B6283532AF800971B26A7660036AF6 (void);
// 0x00000327 System.Text.RegularExpressions.RegexFC System.Text.RegularExpressions.RegexFCD::RegexFCFromRegexTree(System.Text.RegularExpressions.RegexTree)
extern void RegexFCD_RegexFCFromRegexTree_m280F32208540ABB3B88FBA4BC3F7FE6A7E02DA40 (void);
// 0x00000328 System.Void System.Text.RegularExpressions.RegexFCD::SkipChild()
extern void RegexFCD_SkipChild_mE3F09E85EC04B345584A4268DDE28029B1493ABD (void);
// 0x00000329 System.Void System.Text.RegularExpressions.RegexFCD::CalculateFC(System.Int32,System.Text.RegularExpressions.RegexNode,System.Int32)
extern void RegexFCD_CalculateFC_m11BAAB103351C64BA06B41B999C2BAD670E3579F (void);
// 0x0000032A System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.Boolean)
extern void RegexFC__ctor_mA39AF7098BC1D63C19E316121CC854AACBE4CB59 (void);
// 0x0000032B System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.Char,System.Boolean,System.Boolean,System.Boolean)
extern void RegexFC__ctor_mA9779C6F7E4B0B76041B34DF40F2B6DBA82761E2 (void);
// 0x0000032C System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.String,System.Boolean,System.Boolean)
extern void RegexFC__ctor_m8693359483B2128560FC374872CFC1382A0605B2 (void);
// 0x0000032D System.Boolean System.Text.RegularExpressions.RegexFC::AddFC(System.Text.RegularExpressions.RegexFC,System.Boolean)
extern void RegexFC_AddFC_m515C7808755FE89185D85B3C39184C2425B44629 (void);
// 0x0000032E System.String System.Text.RegularExpressions.RegexFC::GetFirstChars(System.Globalization.CultureInfo)
extern void RegexFC_GetFirstChars_mA929BEEE9D6186588C518891EB8CB416C31060FC (void);
// 0x0000032F System.Boolean System.Text.RegularExpressions.RegexFC::IsCaseInsensitive()
extern void RegexFC_IsCaseInsensitive_m522494DC3CF0587D7B65D57B4C14E1428A2E34CA (void);
// 0x00000330 System.Void System.Text.RegularExpressions.RegexPrefix::.ctor(System.String,System.Boolean)
extern void RegexPrefix__ctor_mC34F48A63A8A04942930B9FE236636E2AA745B24 (void);
// 0x00000331 System.String System.Text.RegularExpressions.RegexPrefix::get_Prefix()
extern void RegexPrefix_get_Prefix_m6806C1EEE5B8973606B320A9C4CD5A9E91466F34 (void);
// 0x00000332 System.Boolean System.Text.RegularExpressions.RegexPrefix::get_CaseInsensitive()
extern void RegexPrefix_get_CaseInsensitive_mB4CF8FBFABE26F206AF6324A0C87DFB34C051A95 (void);
// 0x00000333 System.Text.RegularExpressions.RegexPrefix System.Text.RegularExpressions.RegexPrefix::get_Empty()
extern void RegexPrefix_get_Empty_m65C2AD019C414B97A57D5AA5B4B0DC331E011A8C (void);
// 0x00000334 System.Void System.Text.RegularExpressions.RegexPrefix::.cctor()
extern void RegexPrefix__cctor_mF047A4BFAFE90562128AD10E6D2F382079965F68 (void);
// 0x00000335 System.Void System.Text.RegularExpressions.Group::.ctor(System.String,System.Int32[],System.Int32,System.String)
extern void Group__ctor_m5FE82FDB5B4EE244EB46909ACC099806555EB32F (void);
// 0x00000336 System.Boolean System.Text.RegularExpressions.Group::get_Success()
extern void Group_get_Success_m917CA7077102642C3C24106F13B9F5F5D5130C1B (void);
// 0x00000337 System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::get_Captures()
extern void Group_get_Captures_mA6B7E2F62B90C44E74CC65F37A78FD1CFA1C06EF (void);
// 0x00000338 System.Void System.Text.RegularExpressions.Group::.cctor()
extern void Group__cctor_mC2C601CAA7A29E2CF56AE1A25B7C0683B05C8BE1 (void);
// 0x00000339 System.Void System.Text.RegularExpressions.Group::.ctor()
extern void Group__ctor_m2EEFD01EAA4B135ED614049B00261D0736EF8107 (void);
// 0x0000033A System.Void System.Text.RegularExpressions.GroupCollection::.ctor(System.Text.RegularExpressions.Match,System.Collections.Hashtable)
extern void GroupCollection__ctor_m7DC940E706407EAE4AC45F297F021CD11F26CF6A (void);
// 0x0000033B System.Object System.Text.RegularExpressions.GroupCollection::get_SyncRoot()
extern void GroupCollection_get_SyncRoot_m9D32B2F5AE2C8968E660B524D678B806C79763E0 (void);
// 0x0000033C System.Boolean System.Text.RegularExpressions.GroupCollection::get_IsSynchronized()
extern void GroupCollection_get_IsSynchronized_m05B4F9773FBA0A24E9F851FC590ACF60F9DA0FAB (void);
// 0x0000033D System.Int32 System.Text.RegularExpressions.GroupCollection::get_Count()
extern void GroupCollection_get_Count_mAECC6108C576E7C3F0F6B8E0F9F0D5B742467A43 (void);
// 0x0000033E System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.Int32)
extern void GroupCollection_get_Item_mC96099D0350BD4846B66097F31D6B4DDDFE1CA97 (void);
// 0x0000033F System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.String)
extern void GroupCollection_get_Item_m58F451BF6490EB64CA9C1A05844A790967166A6D (void);
// 0x00000340 System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::GetGroup(System.Int32)
extern void GroupCollection_GetGroup_m8824F1E25823F06F2B060E64152E8AC3B8300236 (void);
// 0x00000341 System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::GetGroupImpl(System.Int32)
extern void GroupCollection_GetGroupImpl_mA161F33BBD5BC291025BAAD97458E02422B76348 (void);
// 0x00000342 System.Void System.Text.RegularExpressions.GroupCollection::CopyTo(System.Array,System.Int32)
extern void GroupCollection_CopyTo_mEBB026E2CE653D4797B1F3441D3CA1AF2FE4A06E (void);
// 0x00000343 System.Collections.IEnumerator System.Text.RegularExpressions.GroupCollection::GetEnumerator()
extern void GroupCollection_GetEnumerator_m2FA24AD194C005DEE73F1D16874A479728813DA9 (void);
// 0x00000344 System.Void System.Text.RegularExpressions.GroupCollection::.ctor()
extern void GroupCollection__ctor_m0E2105EC5E4078F03D98853239AC10219BFAE78B (void);
// 0x00000345 System.Void System.Text.RegularExpressions.GroupEnumerator::.ctor(System.Text.RegularExpressions.GroupCollection)
extern void GroupEnumerator__ctor_mFE577B10768A029DBC40A368D8A48B8F1D5479B2 (void);
// 0x00000346 System.Boolean System.Text.RegularExpressions.GroupEnumerator::MoveNext()
extern void GroupEnumerator_MoveNext_m1A95E15B99089341CC06EC0335B4444B43074D82 (void);
// 0x00000347 System.Object System.Text.RegularExpressions.GroupEnumerator::get_Current()
extern void GroupEnumerator_get_Current_m3DBEB28D71BCD80F013B392B8FB3FEC88A372206 (void);
// 0x00000348 System.Text.RegularExpressions.Capture System.Text.RegularExpressions.GroupEnumerator::get_Capture()
extern void GroupEnumerator_get_Capture_mA37A878E91115550F8F08147CE2CB6A30EBF602D (void);
// 0x00000349 System.Void System.Text.RegularExpressions.GroupEnumerator::Reset()
extern void GroupEnumerator_Reset_mCC8BAEE9E46DB67F36E1F4A49A38E87A8FEE8C22 (void);
// 0x0000034A System.Void System.Text.RegularExpressions.RegexInterpreter::.ctor(System.Text.RegularExpressions.RegexCode,System.Globalization.CultureInfo)
extern void RegexInterpreter__ctor_m58E5C9B14F78D108FC9277924C4A5DCC73AE832A (void);
// 0x0000034B System.Void System.Text.RegularExpressions.RegexInterpreter::InitTrackCount()
extern void RegexInterpreter_InitTrackCount_mF85CD3AACD0F8EFFF2D54ECE67DFA073503D978E (void);
// 0x0000034C System.Void System.Text.RegularExpressions.RegexInterpreter::Advance()
extern void RegexInterpreter_Advance_mC3549A945557AD11D80890E0DCBC6D53860A97FE (void);
// 0x0000034D System.Void System.Text.RegularExpressions.RegexInterpreter::Advance(System.Int32)
extern void RegexInterpreter_Advance_m47537FC4AB2CB92D2D9100C755D936DED76B03EE (void);
// 0x0000034E System.Void System.Text.RegularExpressions.RegexInterpreter::Goto(System.Int32)
extern void RegexInterpreter_Goto_mAB873EAF14CC58B684C91137D6E8817EB47FAB48 (void);
// 0x0000034F System.Void System.Text.RegularExpressions.RegexInterpreter::Textto(System.Int32)
extern void RegexInterpreter_Textto_m874B113DFF6381DFC1BF8A8F7E6D79B819CF06AE (void);
// 0x00000350 System.Void System.Text.RegularExpressions.RegexInterpreter::Trackto(System.Int32)
extern void RegexInterpreter_Trackto_m00A652840F4C1B3FE74527A910FB6BDE144F4CD2 (void);
// 0x00000351 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Textstart()
extern void RegexInterpreter_Textstart_m635CAE9587982E8C88F98F7374460E742A7F5953 (void);
// 0x00000352 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Textpos()
extern void RegexInterpreter_Textpos_mCCC8ABAE83D37BA6F060242E1ECAC7D91D8910F5 (void);
// 0x00000353 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Trackpos()
extern void RegexInterpreter_Trackpos_mDA7F7A3B4A02FC45B46AF1FD47778E0C0C9A5F64 (void);
// 0x00000354 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush()
extern void RegexInterpreter_TrackPush_mBE985076C7632B82D188C6484BD6C7980C392379 (void);
// 0x00000355 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush(System.Int32)
extern void RegexInterpreter_TrackPush_m2DA2DB51ACD26004F4FB8B8D80EEC20D4AA14C49 (void);
// 0x00000356 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush(System.Int32,System.Int32)
extern void RegexInterpreter_TrackPush_m874CB8F853DD4EB0FAD4A2DEF9CC2EAC3DD5BA5E (void);
// 0x00000357 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush(System.Int32,System.Int32,System.Int32)
extern void RegexInterpreter_TrackPush_mEF674B57E2A8FC7E555803DE53EEE076EC0E5E75 (void);
// 0x00000358 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush2(System.Int32)
extern void RegexInterpreter_TrackPush2_m490912B4D5B2E19FA2739EA0211FA91DA6423634 (void);
// 0x00000359 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush2(System.Int32,System.Int32)
extern void RegexInterpreter_TrackPush2_m5B36C2B678F621B4BCF26D038E5AE40A55BC5884 (void);
// 0x0000035A System.Void System.Text.RegularExpressions.RegexInterpreter::Backtrack()
extern void RegexInterpreter_Backtrack_m30590074E633FAA50401BC2EFA74F6D6FF5371DA (void);
// 0x0000035B System.Void System.Text.RegularExpressions.RegexInterpreter::SetOperator(System.Int32)
extern void RegexInterpreter_SetOperator_m6F39391186CA54646ABAF1A8D3584533261E6A3F (void);
// 0x0000035C System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPop()
extern void RegexInterpreter_TrackPop_m8E31A4201CD48C0888BE0DB6EB317036E7E7C4D8 (void);
// 0x0000035D System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPop(System.Int32)
extern void RegexInterpreter_TrackPop_mBE47D7E983B6BD0C45F7F376AA0272B0827AB4E4 (void);
// 0x0000035E System.Int32 System.Text.RegularExpressions.RegexInterpreter::TrackPeek()
extern void RegexInterpreter_TrackPeek_mFB63C0E3D25EEEEC1DBD5FF5601E59C6F0414396 (void);
// 0x0000035F System.Int32 System.Text.RegularExpressions.RegexInterpreter::TrackPeek(System.Int32)
extern void RegexInterpreter_TrackPeek_m946313A941F42F58C555593B8CD2C00E702400AB (void);
// 0x00000360 System.Void System.Text.RegularExpressions.RegexInterpreter::StackPush(System.Int32)
extern void RegexInterpreter_StackPush_m488F7B4FABE6E66EF8D28F070303C7B344A9217F (void);
// 0x00000361 System.Void System.Text.RegularExpressions.RegexInterpreter::StackPush(System.Int32,System.Int32)
extern void RegexInterpreter_StackPush_m46ADD790ADB62A6FFFC56ACC93A5BFB11578A45B (void);
// 0x00000362 System.Void System.Text.RegularExpressions.RegexInterpreter::StackPop()
extern void RegexInterpreter_StackPop_m28CD98B18B8010F9398FAB5A1C0CB3E220FB0A13 (void);
// 0x00000363 System.Void System.Text.RegularExpressions.RegexInterpreter::StackPop(System.Int32)
extern void RegexInterpreter_StackPop_m1DBCCF39146C4C13FEBABCF7139CDAF89AB339ED (void);
// 0x00000364 System.Int32 System.Text.RegularExpressions.RegexInterpreter::StackPeek()
extern void RegexInterpreter_StackPeek_mE0B2D861B2A747936538EC83EDEBDC8C6424E3D0 (void);
// 0x00000365 System.Int32 System.Text.RegularExpressions.RegexInterpreter::StackPeek(System.Int32)
extern void RegexInterpreter_StackPeek_mFA8013A28365F539B9083C906BEB80008AE281A0 (void);
// 0x00000366 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Operator()
extern void RegexInterpreter_Operator_m9C06EB53FFBB6722B2ACB95057BC30E0A9F05DFF (void);
// 0x00000367 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Operand(System.Int32)
extern void RegexInterpreter_Operand_mB8AED0E2B8222A584A61D313DE9AB475724F50A0 (void);
// 0x00000368 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Leftchars()
extern void RegexInterpreter_Leftchars_mB50E0C06B5C05F48BBA69D21BFB6382705C696C4 (void);
// 0x00000369 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Rightchars()
extern void RegexInterpreter_Rightchars_m2DEB5D856E0BEC8CFE39B2546B504CB2FCC1DC2C (void);
// 0x0000036A System.Int32 System.Text.RegularExpressions.RegexInterpreter::Bump()
extern void RegexInterpreter_Bump_m45DF8CEBA6E19FE27E10A87C89E5B2001FB37E85 (void);
// 0x0000036B System.Int32 System.Text.RegularExpressions.RegexInterpreter::Forwardchars()
extern void RegexInterpreter_Forwardchars_mFD54A946FE00B2613D92F1CCAE7B53CDB4312420 (void);
// 0x0000036C System.Char System.Text.RegularExpressions.RegexInterpreter::Forwardcharnext()
extern void RegexInterpreter_Forwardcharnext_m39C5E9B8B3EDC556CE6A61C1957ACFD5F8ED025E (void);
// 0x0000036D System.Boolean System.Text.RegularExpressions.RegexInterpreter::Stringmatch(System.String)
extern void RegexInterpreter_Stringmatch_m81EA1913981000A8D944B5DA757813058F0F4ABD (void);
// 0x0000036E System.Boolean System.Text.RegularExpressions.RegexInterpreter::Refmatch(System.Int32,System.Int32)
extern void RegexInterpreter_Refmatch_m5F44A3C001E919895A5A2988F16187069E45D75B (void);
// 0x0000036F System.Void System.Text.RegularExpressions.RegexInterpreter::Backwardnext()
extern void RegexInterpreter_Backwardnext_m68F8015F83EA7DEBBDB6405A6EF9092E814D88EC (void);
// 0x00000370 System.Char System.Text.RegularExpressions.RegexInterpreter::CharAt(System.Int32)
extern void RegexInterpreter_CharAt_mBC8ABA0BE4AC926938A4A4F6DEFB89437AEC3F6E (void);
// 0x00000371 System.Boolean System.Text.RegularExpressions.RegexInterpreter::FindFirstChar()
extern void RegexInterpreter_FindFirstChar_m3112B4D64BF317FBEC9CD8DAE429A4199A3F6A93 (void);
// 0x00000372 System.Void System.Text.RegularExpressions.RegexInterpreter::Go()
extern void RegexInterpreter_Go_m32838D966B426A327995246847A272491F3359F2 (void);
// 0x00000373 System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::get_Empty()
extern void Match_get_Empty_mE05C90C7D155060839CC7D0C2EA04F8302EDFFC9 (void);
// 0x00000374 System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Int32,System.String,System.Int32,System.Int32,System.Int32)
extern void Match__ctor_mB01F9576125C09E5DFAD425523FF0C0FF16000A5 (void);
// 0x00000375 System.Void System.Text.RegularExpressions.Match::Reset(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32,System.Int32)
extern void Match_Reset_m6C8293B576685831F43AACF255D2DAC5898662DB (void);
// 0x00000376 System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups()
extern void Match_get_Groups_m4FB7AAC1E08BF8710992FA9C07A8357115EFE6D2 (void);
// 0x00000377 System.Void System.Text.RegularExpressions.Match::AddMatch(System.Int32,System.Int32,System.Int32)
extern void Match_AddMatch_m5B128123CBA71A35E471CFF1AAE1013A7722DFA2 (void);
// 0x00000378 System.Void System.Text.RegularExpressions.Match::BalanceMatch(System.Int32)
extern void Match_BalanceMatch_mF04DF97CE9E41B8A85C54212B43B5DF381218BE5 (void);
// 0x00000379 System.Void System.Text.RegularExpressions.Match::RemoveMatch(System.Int32)
extern void Match_RemoveMatch_mF21E3166D8D461D44952E96C9CD7CFA8E776EA5F (void);
// 0x0000037A System.Boolean System.Text.RegularExpressions.Match::IsMatched(System.Int32)
extern void Match_IsMatched_m1491C04ADB99BCB81D84BC5D85C31B4F45965C3C (void);
// 0x0000037B System.Int32 System.Text.RegularExpressions.Match::MatchIndex(System.Int32)
extern void Match_MatchIndex_mFDD766CF18E4F508DEE3E2E24F6046DE66D1B808 (void);
// 0x0000037C System.Int32 System.Text.RegularExpressions.Match::MatchLength(System.Int32)
extern void Match_MatchLength_m9D6E7D98CC4B2EBE26070D3A8D88428B515D417A (void);
// 0x0000037D System.Void System.Text.RegularExpressions.Match::Tidy(System.Int32)
extern void Match_Tidy_mA9C76513AF185747A5F9E73790701ABD3D2B09A4 (void);
// 0x0000037E System.Void System.Text.RegularExpressions.Match::.cctor()
extern void Match__cctor_m0AAA94CFEFA7DB6F9B7286DD0134B3E7AE0D7FF1 (void);
// 0x0000037F System.Void System.Text.RegularExpressions.Match::.ctor()
extern void Match__ctor_mC2AE5A1EBC553A0E6BBA59603674183FF5E80CCC (void);
// 0x00000380 System.Void System.Text.RegularExpressions.MatchSparse::.ctor(System.Text.RegularExpressions.Regex,System.Collections.Hashtable,System.Int32,System.String,System.Int32,System.Int32,System.Int32)
extern void MatchSparse__ctor_mA6CA132A5DA7D9ADED1D0FF1D7AD786109D33624 (void);
// 0x00000381 System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.MatchSparse::get_Groups()
extern void MatchSparse_get_Groups_mAF4486FB3D52F65427B855B5F410192543B99DB3 (void);
// 0x00000382 System.Void System.Text.RegularExpressions.MatchCollection::.ctor(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32,System.Int32)
extern void MatchCollection__ctor_mB2FA3F30789018215F0D4C5FFF00379F5415AC37 (void);
// 0x00000383 System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::GetMatch(System.Int32)
extern void MatchCollection_GetMatch_m7C693363C6B2100ED58BD5B85C3CCCE1D858E342 (void);
// 0x00000384 System.Int32 System.Text.RegularExpressions.MatchCollection::get_Count()
extern void MatchCollection_get_Count_m1476DA408DBD9D6EAD231F2AF1320E0990CF287D (void);
// 0x00000385 System.Object System.Text.RegularExpressions.MatchCollection::get_SyncRoot()
extern void MatchCollection_get_SyncRoot_m5E339388E782280CC9BBED40986AA360CA5BCDCC (void);
// 0x00000386 System.Boolean System.Text.RegularExpressions.MatchCollection::get_IsSynchronized()
extern void MatchCollection_get_IsSynchronized_m7A91B1D2CA86E9CF46615BAEE642BD04637BE5DB (void);
// 0x00000387 System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32)
extern void MatchCollection_get_Item_mF9C9E9247F1F04D8CEC0E14AC4BA3CEEAC1A2A8A (void);
// 0x00000388 System.Void System.Text.RegularExpressions.MatchCollection::CopyTo(System.Array,System.Int32)
extern void MatchCollection_CopyTo_mD72903F019CA31813B8A842A18CA4761484CFB21 (void);
// 0x00000389 System.Collections.IEnumerator System.Text.RegularExpressions.MatchCollection::GetEnumerator()
extern void MatchCollection_GetEnumerator_mB4DEC015B69A67D38E6F7E14D63C64047BDCF76F (void);
// 0x0000038A System.Void System.Text.RegularExpressions.MatchCollection::.cctor()
extern void MatchCollection__cctor_m41194DB8AD661F28A4F6FCB077EE8276DD1BC7CF (void);
// 0x0000038B System.Void System.Text.RegularExpressions.MatchCollection::.ctor()
extern void MatchCollection__ctor_mA95FE66298AA5AE593EE40B3A7ED76F1011829C1 (void);
// 0x0000038C System.Void System.Text.RegularExpressions.MatchEnumerator::.ctor(System.Text.RegularExpressions.MatchCollection)
extern void MatchEnumerator__ctor_mAC068C23A5E2366435764453E8E80C8B5803AD31 (void);
// 0x0000038D System.Boolean System.Text.RegularExpressions.MatchEnumerator::MoveNext()
extern void MatchEnumerator_MoveNext_m1088424FEAD89A2693A0CF9200041A5C5B9DC052 (void);
// 0x0000038E System.Object System.Text.RegularExpressions.MatchEnumerator::get_Current()
extern void MatchEnumerator_get_Current_m2FB7B386869A6C4F5EC5327603EF79E8135BDEC1 (void);
// 0x0000038F System.Void System.Text.RegularExpressions.MatchEnumerator::Reset()
extern void MatchEnumerator_Reset_m70B97522C32C01A38648D591B8BA3A8990186311 (void);
// 0x00000390 System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::.ctor(System.String,System.String,System.TimeSpan)
extern void RegexMatchTimeoutException__ctor_m157F8CEF5FDAC71E58B04773B3169BA093423866 (void);
// 0x00000391 System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::.ctor()
extern void RegexMatchTimeoutException__ctor_mC0DB6ADBF5008FD1DF623CE94E68C9F1BB875DF9 (void);
// 0x00000392 System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void RegexMatchTimeoutException__ctor_mA31059F9B50F01A0C9BEF9081CC22B0C0C332F6E (void);
// 0x00000393 System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void RegexMatchTimeoutException_System_Runtime_Serialization_ISerializable_GetObjectData_m32865670AB86CF7F44CBA24B649C5FC3035B6609 (void);
// 0x00000394 System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::Init()
extern void RegexMatchTimeoutException_Init_m6D59100CBBC91F436D6878CDF3AC18BD86DC2787 (void);
// 0x00000395 System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::Init(System.String,System.String,System.TimeSpan)
extern void RegexMatchTimeoutException_Init_mA320EBB663A318B596D95349F5F0DE92623D5C1C (void);
// 0x00000396 System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions)
extern void RegexNode__ctor_mD8966EDCD7AA48AC8AAD5B156C513671843F6D49 (void);
// 0x00000397 System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Char)
extern void RegexNode__ctor_m2E85CE2AB0812A86EE61448DEACBA68E329D3325 (void);
// 0x00000398 System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.String)
extern void RegexNode__ctor_m5A3AA31155A359CC8462AF0AB55DE0D5B7C435B4 (void);
// 0x00000399 System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Int32)
extern void RegexNode__ctor_mD4B2FB6044880AC4DDF035FFE6254A13807A34BC (void);
// 0x0000039A System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Int32,System.Int32)
extern void RegexNode__ctor_m0E000C0421213F15341C9B74C3ADA8F4963CA511 (void);
// 0x0000039B System.Boolean System.Text.RegularExpressions.RegexNode::UseOptionR()
extern void RegexNode_UseOptionR_mBD8EBE8396F51A7DA491FFFAFDB09A148F62E484 (void);
// 0x0000039C System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReverseLeft()
extern void RegexNode_ReverseLeft_m8507E98BFA6C9F78200B8297811C3EE815724A19 (void);
// 0x0000039D System.Void System.Text.RegularExpressions.RegexNode::MakeRep(System.Int32,System.Int32,System.Int32)
extern void RegexNode_MakeRep_m23A10A13942B83BDF596DE595718B9BD701E8A60 (void);
// 0x0000039E System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::Reduce()
extern void RegexNode_Reduce_m2EAE287E7E9FE547B38FEC40BE3E316920B53471 (void);
// 0x0000039F System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::StripEnation(System.Int32)
extern void RegexNode_StripEnation_m1DF9C3A86A4B73CCE7F86C2D121DCACED3DCC4C7 (void);
// 0x000003A0 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceGroup()
extern void RegexNode_ReduceGroup_m3067AEB5BDEF6951832CB84B2F4857848E898236 (void);
// 0x000003A1 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceRep()
extern void RegexNode_ReduceRep_mA3BDCA09CFB2DFB083CF9BEA7E9A64DB27F6B94E (void);
// 0x000003A2 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceSet()
extern void RegexNode_ReduceSet_m0B5361189FC2E71384DA9A107969CB401FD6ED01 (void);
// 0x000003A3 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceAlternation()
extern void RegexNode_ReduceAlternation_m08295B9D7A82E1D1CB97B716C068F7D740C2E18F (void);
// 0x000003A4 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceConcatenation()
extern void RegexNode_ReduceConcatenation_mFE1E6366025CB9A114C275B74193CF62BC0AF903 (void);
// 0x000003A5 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::MakeQuantifier(System.Boolean,System.Int32,System.Int32)
extern void RegexNode_MakeQuantifier_mB84818E8D93FEB4AE45E224C09EE46BE238ECD20 (void);
// 0x000003A6 System.Void System.Text.RegularExpressions.RegexNode::AddChild(System.Text.RegularExpressions.RegexNode)
extern void RegexNode_AddChild_mD5F9848916D55A0DF36CE5460D149E1024005C85 (void);
// 0x000003A7 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::Child(System.Int32)
extern void RegexNode_Child_mAE38F2EF7289FE455686B7BEEF81C39A9D25E960 (void);
// 0x000003A8 System.Int32 System.Text.RegularExpressions.RegexNode::ChildCount()
extern void RegexNode_ChildCount_m15D92C9740BA92B2E78B392F7215B8D7D0242172 (void);
// 0x000003A9 System.Int32 System.Text.RegularExpressions.RegexNode::Type()
extern void RegexNode_Type_m3C72321B307C77AF12F294F366D57D2C77832F27 (void);
// 0x000003AA System.Text.RegularExpressions.RegexTree System.Text.RegularExpressions.RegexParser::Parse(System.String,System.Text.RegularExpressions.RegexOptions)
extern void RegexParser_Parse_mF17A30D14FACA37DB6DE172C5F0C34B4EB1EA719 (void);
// 0x000003AB System.Void System.Text.RegularExpressions.RegexParser::.ctor(System.Globalization.CultureInfo)
extern void RegexParser__ctor_m9058798A864D0200A16F15E995B6B9AA8A189E58 (void);
// 0x000003AC System.Void System.Text.RegularExpressions.RegexParser::SetPattern(System.String)
extern void RegexParser_SetPattern_mA620864CAC4211AE79F80DF9F19B2A40863E9DBE (void);
// 0x000003AD System.Void System.Text.RegularExpressions.RegexParser::Reset(System.Text.RegularExpressions.RegexOptions)
extern void RegexParser_Reset_m1D0DAF8942A2A980D3944600893CEF969053F2EE (void);
// 0x000003AE System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanRegex()
extern void RegexParser_ScanRegex_mE0EF23CF2A462063119E2D5046512A1960A11718 (void);
// 0x000003AF System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexParser::ScanCharClass(System.Boolean)
extern void RegexParser_ScanCharClass_mD4A465FEDA75BF5820D5B0C9A95EAEA3D99DB831 (void);
// 0x000003B0 System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexParser::ScanCharClass(System.Boolean,System.Boolean)
extern void RegexParser_ScanCharClass_mADFDEFF75B3C880E692ED8411B7154CF3130401E (void);
// 0x000003B1 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanGroupOpen()
extern void RegexParser_ScanGroupOpen_m1DE2AA1EFA786C58869EF4025705449871F33D59 (void);
// 0x000003B2 System.Void System.Text.RegularExpressions.RegexParser::ScanBlank()
extern void RegexParser_ScanBlank_m2ACFA5BAF5FA14554D74C5DE4FE3893483D6F33D (void);
// 0x000003B3 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanBackslash()
extern void RegexParser_ScanBackslash_m2598C224286A4826DEB2D1189CCB73C9A363DFBD (void);
// 0x000003B4 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanBasicBackslash()
extern void RegexParser_ScanBasicBackslash_m3DAD88630B04CE794414919D65F325197CB15C3D (void);
// 0x000003B5 System.String System.Text.RegularExpressions.RegexParser::ScanCapname()
extern void RegexParser_ScanCapname_mC34B52A5BDE9DB0AB0A9691F52D45D0B7D4AD377 (void);
// 0x000003B6 System.Char System.Text.RegularExpressions.RegexParser::ScanOctal()
extern void RegexParser_ScanOctal_m7767731DCDBED3AFE2CF6A24D4A6E7FB448062F6 (void);
// 0x000003B7 System.Int32 System.Text.RegularExpressions.RegexParser::ScanDecimal()
extern void RegexParser_ScanDecimal_mC7374D132F506C5D7EEB868C32C4959B1C672017 (void);
// 0x000003B8 System.Char System.Text.RegularExpressions.RegexParser::ScanHex(System.Int32)
extern void RegexParser_ScanHex_m273E9DA24C7455F701730E65B90DAA5C0D0210C2 (void);
// 0x000003B9 System.Int32 System.Text.RegularExpressions.RegexParser::HexDigit(System.Char)
extern void RegexParser_HexDigit_m8026F1C18D04CF0CFC87405EE1449F029B977A50 (void);
// 0x000003BA System.Char System.Text.RegularExpressions.RegexParser::ScanControl()
extern void RegexParser_ScanControl_m9EC29A03B8B1C8323D3E67F0D43F7A5960FFD816 (void);
// 0x000003BB System.Boolean System.Text.RegularExpressions.RegexParser::IsOnlyTopOption(System.Text.RegularExpressions.RegexOptions)
extern void RegexParser_IsOnlyTopOption_m7C4B2E37C797EEB8C5878365C25EDE72E2EBE404 (void);
// 0x000003BC System.Void System.Text.RegularExpressions.RegexParser::ScanOptions()
extern void RegexParser_ScanOptions_mE9C5126433FD0A2576B402A07941114AB468D79F (void);
// 0x000003BD System.Char System.Text.RegularExpressions.RegexParser::ScanCharEscape()
extern void RegexParser_ScanCharEscape_m7A3FDDAF73AB029CB6EA7BB8058E3FD2AEDD63D6 (void);
// 0x000003BE System.String System.Text.RegularExpressions.RegexParser::ParseProperty()
extern void RegexParser_ParseProperty_m32F8C5F94C55BFF814FBAD3189A25F3CAB76B3C3 (void);
// 0x000003BF System.Int32 System.Text.RegularExpressions.RegexParser::TypeFromCode(System.Char)
extern void RegexParser_TypeFromCode_m9B5F0CD85CECC83F17C2A37B5A0A396478A668B8 (void);
// 0x000003C0 System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.RegexParser::OptionFromCode(System.Char)
extern void RegexParser_OptionFromCode_m3D0AF05036648041D641C37E24919D3D6CA7B7CE (void);
// 0x000003C1 System.Void System.Text.RegularExpressions.RegexParser::CountCaptures()
extern void RegexParser_CountCaptures_mE1F7E2BFAE6D599A2F71D217A078B385A9408700 (void);
// 0x000003C2 System.Void System.Text.RegularExpressions.RegexParser::NoteCaptureSlot(System.Int32,System.Int32)
extern void RegexParser_NoteCaptureSlot_m0A4A75BC5BB740A63EE0D41BDBB25A1FADFBF53C (void);
// 0x000003C3 System.Void System.Text.RegularExpressions.RegexParser::NoteCaptureName(System.String,System.Int32)
extern void RegexParser_NoteCaptureName_m8673E32280A278603401C24BFCD7C65F42881FA8 (void);
// 0x000003C4 System.Void System.Text.RegularExpressions.RegexParser::AssignNameSlots()
extern void RegexParser_AssignNameSlots_m7478C18338D1440B8422BD849CCF1E3C33169EDB (void);
// 0x000003C5 System.Int32 System.Text.RegularExpressions.RegexParser::CaptureSlotFromName(System.String)
extern void RegexParser_CaptureSlotFromName_mF8279E16DB2733EE3712214CFC57DA3D48BD717B (void);
// 0x000003C6 System.Boolean System.Text.RegularExpressions.RegexParser::IsCaptureSlot(System.Int32)
extern void RegexParser_IsCaptureSlot_mE462763928C28561B761AFCE14D30C6A31CD1C15 (void);
// 0x000003C7 System.Boolean System.Text.RegularExpressions.RegexParser::IsCaptureName(System.String)
extern void RegexParser_IsCaptureName_mF09CBBD2AEAD4D1BAAE4E4E803C3F4916DBA479D (void);
// 0x000003C8 System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionN()
extern void RegexParser_UseOptionN_m9B82FA2012348674AC4E62205FE205CF2DB0ED35 (void);
// 0x000003C9 System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionI()
extern void RegexParser_UseOptionI_m46AAF2DBCC08EE8F3E8ECA1A5E37160C4E5C7B04 (void);
// 0x000003CA System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionM()
extern void RegexParser_UseOptionM_mBCB459C99D9BD541A68ADF86C1FD437169A8352E (void);
// 0x000003CB System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionS()
extern void RegexParser_UseOptionS_m079D720F7300CEEBB4800B8CB5F7DE450E00FC6D (void);
// 0x000003CC System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionX()
extern void RegexParser_UseOptionX_m7944C5C44AEAA4D69ABA991320A6B960F8EEC284 (void);
// 0x000003CD System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionE()
extern void RegexParser_UseOptionE_m442360F28425CC127273FA1B10737E2AB3A70762 (void);
// 0x000003CE System.Boolean System.Text.RegularExpressions.RegexParser::IsSpecial(System.Char)
extern void RegexParser_IsSpecial_m3EA52FD6E89284E878A510816990AD45656A9CF0 (void);
// 0x000003CF System.Boolean System.Text.RegularExpressions.RegexParser::IsStopperX(System.Char)
extern void RegexParser_IsStopperX_m14B244DAE546E9EAAEF746C7722F21FFAF6DA8D9 (void);
// 0x000003D0 System.Boolean System.Text.RegularExpressions.RegexParser::IsQuantifier(System.Char)
extern void RegexParser_IsQuantifier_mFF0B74F0F48136C4CA3E6D614D819C67FC8EEE07 (void);
// 0x000003D1 System.Boolean System.Text.RegularExpressions.RegexParser::IsTrueQuantifier()
extern void RegexParser_IsTrueQuantifier_m190312723B9D3A48FA41FED5A4DC5D9C055EB627 (void);
// 0x000003D2 System.Boolean System.Text.RegularExpressions.RegexParser::IsSpace(System.Char)
extern void RegexParser_IsSpace_mF6BB83CAF2202A271697570EEC5E636847B8EA35 (void);
// 0x000003D3 System.Void System.Text.RegularExpressions.RegexParser::AddConcatenate(System.Int32,System.Int32,System.Boolean)
extern void RegexParser_AddConcatenate_m308E5EB5C42CF795225A0FDBACCF647B57BE425B (void);
// 0x000003D4 System.Void System.Text.RegularExpressions.RegexParser::PushGroup()
extern void RegexParser_PushGroup_m30EE1A2FFE88FBA12DB8B4D929F6122D8001EAF9 (void);
// 0x000003D5 System.Void System.Text.RegularExpressions.RegexParser::PopGroup()
extern void RegexParser_PopGroup_m461057BFDD1D1CFD70CF3DFE70693E429FCF0FA9 (void);
// 0x000003D6 System.Boolean System.Text.RegularExpressions.RegexParser::EmptyStack()
extern void RegexParser_EmptyStack_mCDC440C4B29CD14F4A0D9D6E3BE105869F246E2E (void);
// 0x000003D7 System.Void System.Text.RegularExpressions.RegexParser::StartGroup(System.Text.RegularExpressions.RegexNode)
extern void RegexParser_StartGroup_m715D16765A3808F41A0DDFB46AE99F7982BA9E87 (void);
// 0x000003D8 System.Void System.Text.RegularExpressions.RegexParser::AddAlternate()
extern void RegexParser_AddAlternate_m2C8BA28D8A58FB9CA6FE75F9D5875BF748305AB0 (void);
// 0x000003D9 System.Void System.Text.RegularExpressions.RegexParser::AddConcatenate()
extern void RegexParser_AddConcatenate_m1B223D215058DA19724BD379C2BC0557EA24B48A (void);
// 0x000003DA System.Void System.Text.RegularExpressions.RegexParser::AddConcatenate(System.Boolean,System.Int32,System.Int32)
extern void RegexParser_AddConcatenate_m47774C08F0EF3E4B83BD52C777019D63BE718AE6 (void);
// 0x000003DB System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::Unit()
extern void RegexParser_Unit_m88B751E79E4DE41D295805439EE6D1D5B7170D7F (void);
// 0x000003DC System.Void System.Text.RegularExpressions.RegexParser::AddUnitOne(System.Char)
extern void RegexParser_AddUnitOne_mDEC722E078B3E61126F56718AF7FED159C616CDC (void);
// 0x000003DD System.Void System.Text.RegularExpressions.RegexParser::AddUnitNotone(System.Char)
extern void RegexParser_AddUnitNotone_m14CA5BBABCE627507923A6BE373BEC032167801F (void);
// 0x000003DE System.Void System.Text.RegularExpressions.RegexParser::AddUnitSet(System.String)
extern void RegexParser_AddUnitSet_mF7CEA4892737145E04E8ECD6DCD3B2A8F809C58B (void);
// 0x000003DF System.Void System.Text.RegularExpressions.RegexParser::AddUnitNode(System.Text.RegularExpressions.RegexNode)
extern void RegexParser_AddUnitNode_m84299A7BCF95B87B5B4672759DE2D8D863FA80E2 (void);
// 0x000003E0 System.Void System.Text.RegularExpressions.RegexParser::AddUnitType(System.Int32)
extern void RegexParser_AddUnitType_m39738056CFFB37E7036AF626829033D6052E6FD8 (void);
// 0x000003E1 System.Void System.Text.RegularExpressions.RegexParser::AddGroup()
extern void RegexParser_AddGroup_m3771097F1B4F1F6AA10104D28B663026F7B7326F (void);
// 0x000003E2 System.Void System.Text.RegularExpressions.RegexParser::PushOptions()
extern void RegexParser_PushOptions_mC0047ADAB396BC1643AA63B2C395F09FCBE726BC (void);
// 0x000003E3 System.Void System.Text.RegularExpressions.RegexParser::PopOptions()
extern void RegexParser_PopOptions_m186A6537DA0481481E59C5BED015B577508271C7 (void);
// 0x000003E4 System.Boolean System.Text.RegularExpressions.RegexParser::EmptyOptionsStack()
extern void RegexParser_EmptyOptionsStack_m9B5B4501C296662175648E458F9EAAADEE3A2B44 (void);
// 0x000003E5 System.Void System.Text.RegularExpressions.RegexParser::PopKeepOptions()
extern void RegexParser_PopKeepOptions_mBCC70CBFDC2A6DD07FE090D4E546B6AEA5644500 (void);
// 0x000003E6 System.ArgumentException System.Text.RegularExpressions.RegexParser::MakeException(System.String)
extern void RegexParser_MakeException_mA573DC3F94B98F328A9B87673A2CF8A15120DEB1 (void);
// 0x000003E7 System.Int32 System.Text.RegularExpressions.RegexParser::Textpos()
extern void RegexParser_Textpos_m5A18C75CE7F3A5AE17373DA09A20070D988308C5 (void);
// 0x000003E8 System.Void System.Text.RegularExpressions.RegexParser::Textto(System.Int32)
extern void RegexParser_Textto_mE4BCC8608BF006D283A32F9C5811264467EEB806 (void);
// 0x000003E9 System.Char System.Text.RegularExpressions.RegexParser::MoveRightGetChar()
extern void RegexParser_MoveRightGetChar_mE98852DD0B33AE818B01A7CC7A9C301C2226F81C (void);
// 0x000003EA System.Void System.Text.RegularExpressions.RegexParser::MoveRight()
extern void RegexParser_MoveRight_mE4C6D41AFE3F585C0B8E7CD0AF3CF4DBA8791AB4 (void);
// 0x000003EB System.Void System.Text.RegularExpressions.RegexParser::MoveRight(System.Int32)
extern void RegexParser_MoveRight_m905DCF65EF6BA6736100751DE932753BC99B8D68 (void);
// 0x000003EC System.Void System.Text.RegularExpressions.RegexParser::MoveLeft()
extern void RegexParser_MoveLeft_mBE0128B08B61C1306954528C799F2F1F1B803391 (void);
// 0x000003ED System.Char System.Text.RegularExpressions.RegexParser::CharAt(System.Int32)
extern void RegexParser_CharAt_mEA865F2B6DC4EF1B81F8D80ABF989F395BEC0B84 (void);
// 0x000003EE System.Char System.Text.RegularExpressions.RegexParser::RightChar()
extern void RegexParser_RightChar_mA977C61B98B8BB88C2A66AEBBFDA6826C58ED66A (void);
// 0x000003EF System.Char System.Text.RegularExpressions.RegexParser::RightChar(System.Int32)
extern void RegexParser_RightChar_mE6728D67C4F9FE227ECD6BED46FFC94518EAD9B4 (void);
// 0x000003F0 System.Int32 System.Text.RegularExpressions.RegexParser::CharsRight()
extern void RegexParser_CharsRight_m808A213FCB975D42C6E6270E7A0FAEB1E496B07A (void);
// 0x000003F1 System.Void System.Text.RegularExpressions.RegexParser::.cctor()
extern void RegexParser__cctor_mD780E57BC0A6084DDDF020CB0AEADFCF1552B20F (void);
// 0x000003F2 System.Void System.Text.RegularExpressions.RegexRunner::.ctor()
extern void RegexRunner__ctor_m6925516B4C16AC95CFAAFCCDB5CFEAD505B7920B (void);
// 0x000003F3 System.Text.RegularExpressions.Match System.Text.RegularExpressions.RegexRunner::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.TimeSpan)
extern void RegexRunner_Scan_m2ADEF871B8873041D1224B4FE362BD4A943AC536 (void);
// 0x000003F4 System.Void System.Text.RegularExpressions.RegexRunner::StartTimeoutWatch()
extern void RegexRunner_StartTimeoutWatch_m22AE778FF5C52047138151B3A61B118DC6E9B685 (void);
// 0x000003F5 System.Void System.Text.RegularExpressions.RegexRunner::CheckTimeout()
extern void RegexRunner_CheckTimeout_mBE5718B5085C46A4B1B9498DE83B7C4D22E4C27C (void);
// 0x000003F6 System.Void System.Text.RegularExpressions.RegexRunner::DoCheckTimeout()
extern void RegexRunner_DoCheckTimeout_mFA5F588F7FA54123CFDFF4C26562E05DADFB675F (void);
// 0x000003F7 System.Void System.Text.RegularExpressions.RegexRunner::Go()
// 0x000003F8 System.Boolean System.Text.RegularExpressions.RegexRunner::FindFirstChar()
// 0x000003F9 System.Void System.Text.RegularExpressions.RegexRunner::InitTrackCount()
// 0x000003FA System.Void System.Text.RegularExpressions.RegexRunner::InitMatch()
extern void RegexRunner_InitMatch_mAB83B2D2F56A1E5438AA6AF68F175F4E0DFE6346 (void);
// 0x000003FB System.Text.RegularExpressions.Match System.Text.RegularExpressions.RegexRunner::TidyMatch(System.Boolean)
extern void RegexRunner_TidyMatch_mC554804E829E5C96600A9FF3C0855FD1A48FE4FA (void);
// 0x000003FC System.Void System.Text.RegularExpressions.RegexRunner::EnsureStorage()
extern void RegexRunner_EnsureStorage_mA28C2C957E9C94A1EB89424D837A87114E38325E (void);
// 0x000003FD System.Boolean System.Text.RegularExpressions.RegexRunner::IsBoundary(System.Int32,System.Int32,System.Int32)
extern void RegexRunner_IsBoundary_mBC555EC9574974908A1B0CEA3D1853D54BD10D62 (void);
// 0x000003FE System.Boolean System.Text.RegularExpressions.RegexRunner::IsECMABoundary(System.Int32,System.Int32,System.Int32)
extern void RegexRunner_IsECMABoundary_m151787CEE018DB6D42182AF4464485CDC4CEAFAB (void);
// 0x000003FF System.Void System.Text.RegularExpressions.RegexRunner::DoubleTrack()
extern void RegexRunner_DoubleTrack_m4C316CA544695119D1DC025CD7C7E2E754F23A62 (void);
// 0x00000400 System.Void System.Text.RegularExpressions.RegexRunner::DoubleStack()
extern void RegexRunner_DoubleStack_m6D5CD187C3C40D33AD36764202D810D3C354CB4B (void);
// 0x00000401 System.Void System.Text.RegularExpressions.RegexRunner::DoubleCrawl()
extern void RegexRunner_DoubleCrawl_m562BC4766311883EF65FC3BC69C7555EF5C6A3D0 (void);
// 0x00000402 System.Void System.Text.RegularExpressions.RegexRunner::Crawl(System.Int32)
extern void RegexRunner_Crawl_mC989F917E324EBE03B0DBECC42531C9ADBF0C742 (void);
// 0x00000403 System.Int32 System.Text.RegularExpressions.RegexRunner::Popcrawl()
extern void RegexRunner_Popcrawl_mE325EFA925EE9D80AF98FD04ACE7050A9D4F8C21 (void);
// 0x00000404 System.Int32 System.Text.RegularExpressions.RegexRunner::Crawlpos()
extern void RegexRunner_Crawlpos_mBFE7A9D83990B8CF829D66CD088414F96A03B49F (void);
// 0x00000405 System.Void System.Text.RegularExpressions.RegexRunner::Capture(System.Int32,System.Int32,System.Int32)
extern void RegexRunner_Capture_mAC8B534A534941D5003730CA28B41F4082CF45C0 (void);
// 0x00000406 System.Void System.Text.RegularExpressions.RegexRunner::TransferCapture(System.Int32,System.Int32,System.Int32,System.Int32)
extern void RegexRunner_TransferCapture_mBD3BA00B949753D1C0A142776C4EF3796DBC627B (void);
// 0x00000407 System.Void System.Text.RegularExpressions.RegexRunner::Uncapture()
extern void RegexRunner_Uncapture_mAEA536C22A1DD0BCE123A04A4BCFD1A8BE8D1F7B (void);
// 0x00000408 System.Boolean System.Text.RegularExpressions.RegexRunner::IsMatched(System.Int32)
extern void RegexRunner_IsMatched_mCC5330346DACE22EAA86DD072CD36752023C66E9 (void);
// 0x00000409 System.Int32 System.Text.RegularExpressions.RegexRunner::MatchIndex(System.Int32)
extern void RegexRunner_MatchIndex_m9FBD010C648C8BBD087FFF4C470FE82494A72ACB (void);
// 0x0000040A System.Int32 System.Text.RegularExpressions.RegexRunner::MatchLength(System.Int32)
extern void RegexRunner_MatchLength_mE1EFA365EAA84B7CDC515A4DEC99CF6D8581A1E8 (void);
// 0x0000040B System.Text.RegularExpressions.RegexRunner System.Text.RegularExpressions.RegexRunnerFactory::CreateInstance()
// 0x0000040C System.Void System.Text.RegularExpressions.RegexTree::.ctor(System.Text.RegularExpressions.RegexNode,System.Collections.Hashtable,System.Int32[],System.Int32,System.Collections.Hashtable,System.String[],System.Text.RegularExpressions.RegexOptions)
extern void RegexTree__ctor_m71E8231B91BF289104B933268B2CEF0AA02CF092 (void);
// 0x0000040D System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.RegexWriter::Write(System.Text.RegularExpressions.RegexTree)
extern void RegexWriter_Write_mDA5FFD555A690E124077AE4141C24C13EF9105DF (void);
// 0x0000040E System.Void System.Text.RegularExpressions.RegexWriter::.ctor()
extern void RegexWriter__ctor_mC1384070ECBCB1A54E56F5460388E7C4CDC5856A (void);
// 0x0000040F System.Void System.Text.RegularExpressions.RegexWriter::PushInt(System.Int32)
extern void RegexWriter_PushInt_m82B0216AFF641DE9547BE17FA115C2CED44A840C (void);
// 0x00000410 System.Boolean System.Text.RegularExpressions.RegexWriter::EmptyStack()
extern void RegexWriter_EmptyStack_mE95F9FABB37AB87D28C240E3A9306BD6F188B00B (void);
// 0x00000411 System.Int32 System.Text.RegularExpressions.RegexWriter::PopInt()
extern void RegexWriter_PopInt_mB767C9611DB654060F684D5E09231CAEFFDF7551 (void);
// 0x00000412 System.Int32 System.Text.RegularExpressions.RegexWriter::CurPos()
extern void RegexWriter_CurPos_m771D864668683B9DCF98150DBAEEBE17703C2E5D (void);
// 0x00000413 System.Void System.Text.RegularExpressions.RegexWriter::PatchJump(System.Int32,System.Int32)
extern void RegexWriter_PatchJump_m99AEA835C283697F20D7F9CC16E6371BF681B70B (void);
// 0x00000414 System.Void System.Text.RegularExpressions.RegexWriter::Emit(System.Int32)
extern void RegexWriter_Emit_m0F2DFD7C6ED8AB199B3E8845A02A09F295A00E54 (void);
// 0x00000415 System.Void System.Text.RegularExpressions.RegexWriter::Emit(System.Int32,System.Int32)
extern void RegexWriter_Emit_mDCE0A2DF541B5FC6554C965A1C799ADCF6B4C55F (void);
// 0x00000416 System.Void System.Text.RegularExpressions.RegexWriter::Emit(System.Int32,System.Int32,System.Int32)
extern void RegexWriter_Emit_m9360B7E84BA94A432C3C9AB5427A30D81E0B2739 (void);
// 0x00000417 System.Int32 System.Text.RegularExpressions.RegexWriter::StringCode(System.String)
extern void RegexWriter_StringCode_m10DB52A16488268DF01C52E8163E899FA568FBC9 (void);
// 0x00000418 System.ArgumentException System.Text.RegularExpressions.RegexWriter::MakeException(System.String)
extern void RegexWriter_MakeException_mD2A13E8F5A67D36CAEE67D74C35A5D2B35111C26 (void);
// 0x00000419 System.Int32 System.Text.RegularExpressions.RegexWriter::MapCapnum(System.Int32)
extern void RegexWriter_MapCapnum_mEF8C8E6F9916122D0FAE18A7B560F65738D004E6 (void);
// 0x0000041A System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.RegexWriter::RegexCodeFromRegexTree(System.Text.RegularExpressions.RegexTree)
extern void RegexWriter_RegexCodeFromRegexTree_mB8946AD1D077152C85D0D32CDABC5FBE37C80A80 (void);
// 0x0000041B System.Void System.Text.RegularExpressions.RegexWriter::EmitFragment(System.Int32,System.Text.RegularExpressions.RegexNode,System.Int32)
extern void RegexWriter_EmitFragment_m7692CDAFDAC6BE7D8BB2DD1EC225B6456047DE0B (void);
// 0x0000041C System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
extern void Stopwatch_GetTimestamp_m8CAF46C3B4D7460B70C325D666B7F6470D2208DB (void);
// 0x0000041D System.Diagnostics.Stopwatch System.Diagnostics.Stopwatch::StartNew()
extern void Stopwatch_StartNew_m526152085BB22CB969AF40B2775939C5C7F7F2F6 (void);
// 0x0000041E System.Void System.Diagnostics.Stopwatch::.ctor()
extern void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (void);
// 0x0000041F System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
extern void Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6 (void);
// 0x00000420 System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
extern void Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5 (void);
// 0x00000421 System.Int64 System.Diagnostics.Stopwatch::get_ElapsedTicks()
extern void Stopwatch_get_ElapsedTicks_mEA2271BCCE37E6615EFC0B377D33C9DB63CA09E8 (void);
// 0x00000422 System.Void System.Diagnostics.Stopwatch::Reset()
extern void Stopwatch_Reset_m79B1D65568465AE5B1A68EF3A2A65218590ABD14 (void);
// 0x00000423 System.Void System.Diagnostics.Stopwatch::Start()
extern void Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE (void);
// 0x00000424 System.Void System.Diagnostics.Stopwatch::.cctor()
extern void Stopwatch__cctor_mC828CB8602A28CFD9436192D5A47475B31D34766 (void);
// 0x00000425 System.Void System.ComponentModel.ArrayConverter::.ctor()
extern void ArrayConverter__ctor_m3B1E6D184D835FE896DE2E83F2F5C9410E745F93 (void);
// 0x00000426 System.Void System.ComponentModel.BooleanConverter::.ctor()
extern void BooleanConverter__ctor_m9F0A8757BAD0E551843A5A6FCC3366842A6C6D2C (void);
// 0x00000427 System.Void System.ComponentModel.BrowsableAttribute::.ctor(System.Boolean)
extern void BrowsableAttribute__ctor_m67F6E4C4B28C23E90D4C0527D1BA41555D1B0DDE (void);
// 0x00000428 System.Boolean System.ComponentModel.BrowsableAttribute::get_Browsable()
extern void BrowsableAttribute_get_Browsable_mEAD0188E3748DDB36677CC3F523B001145FE1288 (void);
// 0x00000429 System.Boolean System.ComponentModel.BrowsableAttribute::Equals(System.Object)
extern void BrowsableAttribute_Equals_mC10C854D4D59E13FDF9DB3CF45FC08F213BABF05 (void);
// 0x0000042A System.Int32 System.ComponentModel.BrowsableAttribute::GetHashCode()
extern void BrowsableAttribute_GetHashCode_mBDD907C2D06C6BD998999FE77F6A621DE620F308 (void);
// 0x0000042B System.Void System.ComponentModel.BrowsableAttribute::.cctor()
extern void BrowsableAttribute__cctor_mA1B6BC963AE85B374EE6FDB96CAFC555319FD89B (void);
// 0x0000042C System.Void System.ComponentModel.CategoryAttribute::.ctor(System.String)
extern void CategoryAttribute__ctor_m0E9177ECFA96BBB3A2716039CB4A9F2E2149E706 (void);
// 0x0000042D System.String System.ComponentModel.CategoryAttribute::get_Category()
extern void CategoryAttribute_get_Category_m02F82210B41F101E8745B7994C1169802D8D0E39 (void);
// 0x0000042E System.Boolean System.ComponentModel.CategoryAttribute::Equals(System.Object)
extern void CategoryAttribute_Equals_m044A2C25BA905793AC32FF56B71ACC3D9E5919E3 (void);
// 0x0000042F System.Int32 System.ComponentModel.CategoryAttribute::GetHashCode()
extern void CategoryAttribute_GetHashCode_m97FE93C13D77F55B642C14CF200206655EC445CF (void);
// 0x00000430 System.String System.ComponentModel.CategoryAttribute::GetLocalizedString(System.String)
extern void CategoryAttribute_GetLocalizedString_m05A2661BFCDD8951D57FA3A2B4C76B482893FC02 (void);
// 0x00000431 System.Void System.ComponentModel.CollectionConverter::.ctor()
extern void CollectionConverter__ctor_mA6E78367ED2C94B1B80B6E3314AB4854D275613F (void);
// 0x00000432 System.Void System.ComponentModel.Component::Finalize()
extern void Component_Finalize_mDBE707310C79EAC9D78A1A6B8CBC58B1D85FFD6C (void);
// 0x00000433 System.Boolean System.ComponentModel.Component::get_CanRaiseEvents()
extern void Component_get_CanRaiseEvents_m5C347D156A4E54A1DB24C045FDD43E74B66E4295 (void);
// 0x00000434 System.Boolean System.ComponentModel.Component::get_CanRaiseEventsInternal()
extern void Component_get_CanRaiseEventsInternal_mF1CE3CBC6ECADC117635E96EA0A7316AC8361C12 (void);
// 0x00000435 System.Void System.ComponentModel.Component::Dispose()
extern void Component_Dispose_mC05DA7EBB2CA50E4854BED0FC992770E81771593 (void);
// 0x00000436 System.Void System.ComponentModel.Component::Dispose(System.Boolean)
extern void Component_Dispose_m41A6868E474C0937E68618E171C8169ECE2A9347 (void);
// 0x00000437 System.Object System.ComponentModel.Component::GetService(System.Type)
extern void Component_GetService_mD7AC529C9E9E316E058150D360F2EF94644614F8 (void);
// 0x00000438 System.Boolean System.ComponentModel.Component::get_DesignMode()
extern void Component_get_DesignMode_m734BA2B9442EB0294B051D6DECC56272135EA36C (void);
// 0x00000439 System.String System.ComponentModel.Component::ToString()
extern void Component_ToString_m281811936682E090CB59313B17FDD92D21C6A0DF (void);
// 0x0000043A System.Void System.ComponentModel.Component::.ctor()
extern void Component__ctor_m840837E8F38EF7547938BF0E23F7D5847B8C4F48 (void);
// 0x0000043B System.Void System.ComponentModel.Component::.cctor()
extern void Component__cctor_m360744B949B028CF834E6AC1B41379460EB80FC3 (void);
// 0x0000043C System.Void System.ComponentModel.ComponentConverter::.ctor(System.Type)
extern void ComponentConverter__ctor_mDD36736AF6F3957D4E50C9F87959838DEE128D9D (void);
// 0x0000043D System.Void System.ComponentModel.DecimalConverter::.ctor()
extern void DecimalConverter__ctor_m4E225E243DED7F45B5176296A297D668FBA7FC4C (void);
// 0x0000043E System.Void System.ComponentModel.DefaultEventAttribute::.ctor(System.String)
extern void DefaultEventAttribute__ctor_mA045F88D2A5062B94A1EC75281D843826FEA26CD (void);
// 0x0000043F System.String System.ComponentModel.DefaultEventAttribute::get_Name()
extern void DefaultEventAttribute_get_Name_m11E61BAB620E1340BDD23F2098AD8A2B212C788F (void);
// 0x00000440 System.Boolean System.ComponentModel.DefaultEventAttribute::Equals(System.Object)
extern void DefaultEventAttribute_Equals_m077B138A0812DE6905B5EA81B102738D26271BFA (void);
// 0x00000441 System.Int32 System.ComponentModel.DefaultEventAttribute::GetHashCode()
extern void DefaultEventAttribute_GetHashCode_mC64256EB07720846B232CC270F2683D244730037 (void);
// 0x00000442 System.Void System.ComponentModel.DefaultEventAttribute::.cctor()
extern void DefaultEventAttribute__cctor_m72DD52108A6E2B5DAA21E12E6C2A694435006551 (void);
// 0x00000443 System.Void System.ComponentModel.DefaultPropertyAttribute::.ctor(System.String)
extern void DefaultPropertyAttribute__ctor_mEBD1AB6A6D4DEC77344B2FBF0DD8AD68BDE605E7 (void);
// 0x00000444 System.String System.ComponentModel.DefaultPropertyAttribute::get_Name()
extern void DefaultPropertyAttribute_get_Name_mDF5CFECE56F9957F683545D2B8C9DE560EF4EA7E (void);
// 0x00000445 System.Boolean System.ComponentModel.DefaultPropertyAttribute::Equals(System.Object)
extern void DefaultPropertyAttribute_Equals_m777E989ED27C0AF576BA026C482C74DD9467F295 (void);
// 0x00000446 System.Int32 System.ComponentModel.DefaultPropertyAttribute::GetHashCode()
extern void DefaultPropertyAttribute_GetHashCode_m8FC07D3C6C6B3DD78CBEF22A1AFB8F909F6B76EC (void);
// 0x00000447 System.Void System.ComponentModel.DefaultPropertyAttribute::.cctor()
extern void DefaultPropertyAttribute__cctor_m6776A03C097A8727A7D5EEE2A811CC7B11228243 (void);
// 0x00000448 System.Void System.ComponentModel.DefaultValueAttribute::.ctor(System.Double)
extern void DefaultValueAttribute__ctor_mCDE6C20FE692B4650C72960F98F08D4700934168 (void);
// 0x00000449 System.Void System.ComponentModel.DefaultValueAttribute::.ctor(System.Boolean)
extern void DefaultValueAttribute__ctor_m78FFD0C313E546C33C761F79E544E6FA5ADCB4D0 (void);
// 0x0000044A System.Void System.ComponentModel.DefaultValueAttribute::.ctor(System.String)
extern void DefaultValueAttribute__ctor_m65DBADCDC3A7BBD4AA6871023D36B91FC1772ADF (void);
// 0x0000044B System.Object System.ComponentModel.DefaultValueAttribute::get_Value()
extern void DefaultValueAttribute_get_Value_m5430873D9E44294065E1F6FCDC3B425A0011CCBA (void);
// 0x0000044C System.Boolean System.ComponentModel.DefaultValueAttribute::Equals(System.Object)
extern void DefaultValueAttribute_Equals_mD25A5203F3679D9D6B2216769E933FEA95972B13 (void);
// 0x0000044D System.Int32 System.ComponentModel.DefaultValueAttribute::GetHashCode()
extern void DefaultValueAttribute_GetHashCode_mC5D187012FD8EA385F0A5D3946B20C9A8CEEA5D9 (void);
// 0x0000044E System.Void System.ComponentModel.DescriptionAttribute::.ctor()
extern void DescriptionAttribute__ctor_m0E146E17D89AF14C7390CA02D1725CA5114E2A40 (void);
// 0x0000044F System.Void System.ComponentModel.DescriptionAttribute::.ctor(System.String)
extern void DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E (void);
// 0x00000450 System.String System.ComponentModel.DescriptionAttribute::get_Description()
extern void DescriptionAttribute_get_Description_m0FA1D4D963B0CC6430641650EAFC0A28EF5D7567 (void);
// 0x00000451 System.String System.ComponentModel.DescriptionAttribute::get_DescriptionValue()
extern void DescriptionAttribute_get_DescriptionValue_mC1DBBA2D084E17E4062C81318C1D5D5295E4C97C (void);
// 0x00000452 System.Void System.ComponentModel.DescriptionAttribute::set_DescriptionValue(System.String)
extern void DescriptionAttribute_set_DescriptionValue_m7690BF55F40A7C26BBDF62BEBC2728EC9A16A91B (void);
// 0x00000453 System.Boolean System.ComponentModel.DescriptionAttribute::Equals(System.Object)
extern void DescriptionAttribute_Equals_m07C0B8787F3D42DDB8E726E4658705AAF19D0E0F (void);
// 0x00000454 System.Int32 System.ComponentModel.DescriptionAttribute::GetHashCode()
extern void DescriptionAttribute_GetHashCode_m6C0A71F2ED2EBE6A2846DC87E3FD8CEBBABD4CE9 (void);
// 0x00000455 System.Void System.ComponentModel.DescriptionAttribute::.cctor()
extern void DescriptionAttribute__cctor_m97E688AF3C1662458B630141FF170BBDAFF5F3E4 (void);
// 0x00000456 System.Void System.ComponentModel.DesignTimeVisibleAttribute::.ctor(System.Boolean)
extern void DesignTimeVisibleAttribute__ctor_m5FEE8039EADC36835B17FC69C6F9302D98D17B3F (void);
// 0x00000457 System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::get_Visible()
extern void DesignTimeVisibleAttribute_get_Visible_mEDEAE4216F7BBE283BAB2F714D23691E909766B5 (void);
// 0x00000458 System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::Equals(System.Object)
extern void DesignTimeVisibleAttribute_Equals_m5EE5DF6FF3122FD7415C18192AB0F72E173FC334 (void);
// 0x00000459 System.Int32 System.ComponentModel.DesignTimeVisibleAttribute::GetHashCode()
extern void DesignTimeVisibleAttribute_GetHashCode_m517CECA16068CA5B18C14D3FADCCB0F594243E56 (void);
// 0x0000045A System.Void System.ComponentModel.DesignTimeVisibleAttribute::.cctor()
extern void DesignTimeVisibleAttribute__cctor_mA9E4CF3E6D44E514AC81FCCC651778BF6806F9A5 (void);
// 0x0000045B System.Void System.ComponentModel.DesignerAttribute::.ctor(System.String,System.Type)
extern void DesignerAttribute__ctor_mB3667C64A5316ADF52C89FD6C11896A74D3F12FC (void);
// 0x0000045C System.Boolean System.ComponentModel.DesignerAttribute::Equals(System.Object)
extern void DesignerAttribute_Equals_m0A794D27ACBFF6C7D4E99F0A8A9F22B9DB10E0CA (void);
// 0x0000045D System.Int32 System.ComponentModel.DesignerAttribute::GetHashCode()
extern void DesignerAttribute_GetHashCode_m17B9DAB29926C21682434E9A77E31651B9BDD80D (void);
// 0x0000045E System.Void System.ComponentModel.DesignerCategoryAttribute::.ctor()
extern void DesignerCategoryAttribute__ctor_m56E7C4D9708E648D47D4A9EA65AFF2A597039FF4 (void);
// 0x0000045F System.Void System.ComponentModel.DesignerCategoryAttribute::.ctor(System.String)
extern void DesignerCategoryAttribute__ctor_m60F54A81AA457206EA8336100BF1CB0FC2817EF3 (void);
// 0x00000460 System.Boolean System.ComponentModel.DesignerCategoryAttribute::Equals(System.Object)
extern void DesignerCategoryAttribute_Equals_m8032A91A1B7406D5D3497BDCBA94341706A0A113 (void);
// 0x00000461 System.Int32 System.ComponentModel.DesignerCategoryAttribute::GetHashCode()
extern void DesignerCategoryAttribute_GetHashCode_m97577A9BBB14BCF5045EF0ED1A7DCD19BE591DEF (void);
// 0x00000462 System.Void System.ComponentModel.DesignerCategoryAttribute::.cctor()
extern void DesignerCategoryAttribute__cctor_mFFF2E014AFA0C3958CA85DD0D496DAF09DDC122D (void);
// 0x00000463 System.Void System.ComponentModel.DesignerSerializationVisibilityAttribute::.ctor(System.ComponentModel.DesignerSerializationVisibility)
extern void DesignerSerializationVisibilityAttribute__ctor_mAEEE7613ABFC1F58770FA563450E24976E4CEB49 (void);
// 0x00000464 System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::get_Visibility()
extern void DesignerSerializationVisibilityAttribute_get_Visibility_m8BF8E684ABAB85A14343D269EF8EFC493D17F49E (void);
// 0x00000465 System.Boolean System.ComponentModel.DesignerSerializationVisibilityAttribute::Equals(System.Object)
extern void DesignerSerializationVisibilityAttribute_Equals_m4604EDC514EE6CB9C907A9556BA93B8374CBCF8E (void);
// 0x00000466 System.Int32 System.ComponentModel.DesignerSerializationVisibilityAttribute::GetHashCode()
extern void DesignerSerializationVisibilityAttribute_GetHashCode_m50CE561D387EC4F63493C70FD9D57C58AF29737A (void);
// 0x00000467 System.Void System.ComponentModel.DesignerSerializationVisibilityAttribute::.cctor()
extern void DesignerSerializationVisibilityAttribute__cctor_m4898EC9EE60DEDB8189A1D09E221A6B7CCEA9691 (void);
// 0x00000468 System.Void System.ComponentModel.DisplayNameAttribute::.ctor()
extern void DisplayNameAttribute__ctor_m7704A0296C35314F464640AD079794A8D2D5CFA3 (void);
// 0x00000469 System.Void System.ComponentModel.DisplayNameAttribute::.ctor(System.String)
extern void DisplayNameAttribute__ctor_m44CB3F48C86138F3E381AF9FE560B959DD73E845 (void);
// 0x0000046A System.String System.ComponentModel.DisplayNameAttribute::get_DisplayName()
extern void DisplayNameAttribute_get_DisplayName_mDF5FA07C8671BE6969CB4F1BF212CD7A03359F4F (void);
// 0x0000046B System.String System.ComponentModel.DisplayNameAttribute::get_DisplayNameValue()
extern void DisplayNameAttribute_get_DisplayNameValue_m8A787A996D7C752C9F79E3724A5A39EAF94A9F48 (void);
// 0x0000046C System.Boolean System.ComponentModel.DisplayNameAttribute::Equals(System.Object)
extern void DisplayNameAttribute_Equals_m11D68B64FB208336B9F91FDC4FFA93B51290539B (void);
// 0x0000046D System.Int32 System.ComponentModel.DisplayNameAttribute::GetHashCode()
extern void DisplayNameAttribute_GetHashCode_mF0C77356C5E1C5B6836A9E15BE9009CB6397B25A (void);
// 0x0000046E System.Void System.ComponentModel.DisplayNameAttribute::.cctor()
extern void DisplayNameAttribute__cctor_m464DA9C1BD37919F48B673C050B86E5EB6ADFD2C (void);
// 0x0000046F System.Void System.ComponentModel.DoubleConverter::.ctor()
extern void DoubleConverter__ctor_mBACD8291617A72E36D9E161918D86D1714F68E85 (void);
// 0x00000470 System.Void System.ComponentModel.EditorBrowsableAttribute::.ctor(System.ComponentModel.EditorBrowsableState)
extern void EditorBrowsableAttribute__ctor_mC77290C5157BDA154F1D03BD1551223B07A851D4 (void);
// 0x00000471 System.Boolean System.ComponentModel.EditorBrowsableAttribute::Equals(System.Object)
extern void EditorBrowsableAttribute_Equals_m79C775014595BC1A2B15301D3F5A27AE17EF8230 (void);
// 0x00000472 System.Int32 System.ComponentModel.EditorBrowsableAttribute::GetHashCode()
extern void EditorBrowsableAttribute_GetHashCode_mFC4240C87EB67E54729CA999187AE8AA0041B0EC (void);
// 0x00000473 System.Void System.ComponentModel.EnumConverter::.ctor(System.Type)
extern void EnumConverter__ctor_m2A61E754D52D9A89E479DD3F23AE49B839F6E613 (void);
// 0x00000474 System.Delegate System.ComponentModel.EventHandlerList::get_Item(System.Object)
extern void EventHandlerList_get_Item_mC9E8B2F3D48DB323CA19FB87B2DBB7240AE03334 (void);
// 0x00000475 System.ComponentModel.EventHandlerList/ListEntry System.ComponentModel.EventHandlerList::Find(System.Object)
extern void EventHandlerList_Find_m0D055017D24E6BE23466BFC8392A49CE1695499E (void);
// 0x00000476 System.Void System.ComponentModel.IContainer::Remove(System.ComponentModel.IComponent)
// 0x00000477 System.ComponentModel.IContainer System.ComponentModel.ISite::get_Container()
// 0x00000478 System.Boolean System.ComponentModel.ISite::get_DesignMode()
// 0x00000479 System.String System.ComponentModel.ISite::get_Name()
// 0x0000047A System.Boolean System.ComponentModel.ISynchronizeInvoke::get_InvokeRequired()
// 0x0000047B System.IAsyncResult System.ComponentModel.ISynchronizeInvoke::BeginInvoke(System.Delegate,System.Object[])
// 0x0000047C System.Void System.ComponentModel.Int16Converter::.ctor()
extern void Int16Converter__ctor_m4F4E6E68FBDBC778F893D30D9A63F3086D0C87FD (void);
// 0x0000047D System.Void System.ComponentModel.Int32Converter::.ctor()
extern void Int32Converter__ctor_m3A8A43E94E6267B6978193DA829E2F84189F03B1 (void);
// 0x0000047E System.Void System.ComponentModel.Int64Converter::.ctor()
extern void Int64Converter__ctor_m50555C51D87CC6D5E48252B0356968B0F457C3B7 (void);
// 0x0000047F System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor()
extern void InvalidEnumArgumentException__ctor_m2F90ECAD9B02CAA483C6D5CE2951210DF2960942 (void);
// 0x00000480 System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.String)
extern void InvalidEnumArgumentException__ctor_m9F82770D492E88AD5D679EE8A52400E5993CD2C9 (void);
// 0x00000481 System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.String,System.Int32,System.Type)
extern void InvalidEnumArgumentException__ctor_mAE5068B990F9D8AD596FE95B591CA6441048D25E (void);
// 0x00000482 System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void InvalidEnumArgumentException__ctor_mD66B8D9407ABD1314AAC88CDDD9F73CC4FAED3A1 (void);
// 0x00000483 System.Void System.ComponentModel.ReferenceConverter::.ctor(System.Type)
extern void ReferenceConverter__ctor_m2BF20339AD66B73F51C54F05BCD4C6229CECA08B (void);
// 0x00000484 System.Void System.ComponentModel.ReferenceConverter::.cctor()
extern void ReferenceConverter__cctor_m45E0DC0C46388A1333095572684A3A60E9FFB985 (void);
// 0x00000485 System.Void System.ComponentModel.SettingsBindableAttribute::.ctor(System.Boolean)
extern void SettingsBindableAttribute__ctor_m4F5FE0964747B636D97EED9C6B13D62FBBEA3684 (void);
// 0x00000486 System.Boolean System.ComponentModel.SettingsBindableAttribute::get_Bindable()
extern void SettingsBindableAttribute_get_Bindable_mB64EAF5229EA9C4B0B9D0D1F769CAA50609CA83A (void);
// 0x00000487 System.Boolean System.ComponentModel.SettingsBindableAttribute::Equals(System.Object)
extern void SettingsBindableAttribute_Equals_mF7BC58C8F680D5BCE8C87F7997F7FFC01A59B2E6 (void);
// 0x00000488 System.Int32 System.ComponentModel.SettingsBindableAttribute::GetHashCode()
extern void SettingsBindableAttribute_GetHashCode_mF7117CA82F3599687FFCDC1B2A43A7D177B6874B (void);
// 0x00000489 System.Void System.ComponentModel.SettingsBindableAttribute::.cctor()
extern void SettingsBindableAttribute__cctor_m53A3674048E11F01AD677255FE817C50A650E4C6 (void);
// 0x0000048A System.Void System.ComponentModel.SingleConverter::.ctor()
extern void SingleConverter__ctor_m497283A0BDBBBE713A71C8A2E4A89D2B58627365 (void);
// 0x0000048B System.Void System.ComponentModel.StringConverter::.ctor()
extern void StringConverter__ctor_m078D8E99B4F9B0F2EF7A2D3857A6F044B7A16118 (void);
// 0x0000048C System.Void System.ComponentModel.TimeSpanConverter::.ctor()
extern void TimeSpanConverter__ctor_m8CCA5F7E15DAB96C97CF600394E637A9876AFB83 (void);
// 0x0000048D System.Void System.ComponentModel.TypeConverter::.ctor()
extern void TypeConverter__ctor_mCD87E569A2C4CB1331A069396FFA98E65726A16C (void);
// 0x0000048E System.Void System.ComponentModel.TypeConverterAttribute::.ctor()
extern void TypeConverterAttribute__ctor_m23863863F742A02AA8914FB5527AFBC15DCAFA8A (void);
// 0x0000048F System.Void System.ComponentModel.TypeConverterAttribute::.ctor(System.Type)
extern void TypeConverterAttribute__ctor_mE0B270E39E657178B253AB6F56FCA24E644868F4 (void);
// 0x00000490 System.String System.ComponentModel.TypeConverterAttribute::get_ConverterTypeName()
extern void TypeConverterAttribute_get_ConverterTypeName_m699652BD16C42823BE283EA769647F676122EB6B (void);
// 0x00000491 System.Boolean System.ComponentModel.TypeConverterAttribute::Equals(System.Object)
extern void TypeConverterAttribute_Equals_mED3025C0A24E6809AA6E31FE5F498D18558584FB (void);
// 0x00000492 System.Int32 System.ComponentModel.TypeConverterAttribute::GetHashCode()
extern void TypeConverterAttribute_GetHashCode_mFBABA9E1D19DC64BAAF3C9D0F1B82E42B5F66769 (void);
// 0x00000493 System.Void System.ComponentModel.TypeConverterAttribute::.cctor()
extern void TypeConverterAttribute__cctor_mE6F51C034AACA4A5318CE3704E898113C49BA507 (void);
// 0x00000494 System.Void System.ComponentModel.Win32Exception::.ctor()
extern void Win32Exception__ctor_m0DCDDC4BEF1DCC24190F7AAE8BB309FB5A8A9474 (void);
// 0x00000495 System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32)
extern void Win32Exception__ctor_mF8FAD9681BA8B2EFBD1EDA7C690764FF60E85A6F (void);
// 0x00000496 System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32,System.String)
extern void Win32Exception__ctor_mC836B11093135ABE3B7F402DCD0564E58B8CDA02 (void);
// 0x00000497 System.Void System.ComponentModel.Win32Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Win32Exception__ctor_m712FC6079EE6F92FAB0B3DDAFD652B24FF163CC6 (void);
// 0x00000498 System.Int32 System.ComponentModel.Win32Exception::get_NativeErrorCode()
extern void Win32Exception_get_NativeErrorCode_m15E3962B1D49FBA685728CB83758C6A3AF6F93E9 (void);
// 0x00000499 System.Void System.ComponentModel.Win32Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Win32Exception_GetObjectData_mFB1F75CC318DB1FA595ECA5466F331AEC686BB07 (void);
// 0x0000049A System.String System.ComponentModel.Win32Exception::GetErrorMessage(System.Int32)
extern void Win32Exception_GetErrorMessage_m97F829AC1253FC3BAD24E9F484ECA9F227360C9A (void);
// 0x0000049B System.Void System.ComponentModel.Win32Exception::InitializeErrorMessages()
extern void Win32Exception_InitializeErrorMessages_mDC8118C693BE2CA20C9E9D5822BEFAC621F3C535 (void);
// 0x0000049C System.Void System.ComponentModel.Win32Exception::InitializeErrorMessages1()
extern void Win32Exception_InitializeErrorMessages1_mDB6558EB5202E7110C6702CC1837399830906C89 (void);
// 0x0000049D System.Void System.ComponentModel.Win32Exception::.cctor()
extern void Win32Exception__cctor_mE3B207777037932E599ED5F10568FD108903A5F0 (void);
// 0x0000049E System.Void System.ComponentModel.BaseNumberConverter::.ctor()
extern void BaseNumberConverter__ctor_m18967D5B511402093936893A249438FB94D5BDA3 (void);
// 0x0000049F System.ComponentModel.IComponent System.ComponentModel.Design.IDesignerHost::get_RootComponent()
// 0x000004A0 System.Void System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::.ctor(System.String,System.String,System.Boolean)
extern void RootDesignerSerializerAttribute__ctor_m2EA1453B85C10A3D2CFDB7F9802EB5525350B211 (void);
// 0x000004A1 System.Void System.Security.Authentication.AuthenticationException::.ctor()
extern void AuthenticationException__ctor_mCD04EFFAE657FB7E895429E7EA6DCBDF76947E6C (void);
// 0x000004A2 System.Void System.Security.Authentication.AuthenticationException::.ctor(System.String,System.Exception)
extern void AuthenticationException__ctor_mA0752219534B87AA44CA1F8F65920A91F2D5E513 (void);
// 0x000004A3 System.Void System.Security.Authentication.AuthenticationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void AuthenticationException__ctor_m3AC884A3C280888AA0385F2B9CF77A4F095616EB (void);
// 0x000004A4 System.Void System.Security.Cryptography.Oid::.ctor(System.String)
extern void Oid__ctor_mDB319C52BC09ED73F02F5BEC5950F728059405C2 (void);
// 0x000004A5 System.Void System.Security.Cryptography.Oid::.ctor(System.String,System.Security.Cryptography.OidGroup,System.Boolean)
extern void Oid__ctor_m74A51E6D07E4EF2AEC66B6CAC03CFF60D072D3FF (void);
// 0x000004A6 System.Void System.Security.Cryptography.Oid::.ctor(System.String,System.String)
extern void Oid__ctor_m90964DEF8B3A9EEFAB59023627E2008E4A34983E (void);
// 0x000004A7 System.Void System.Security.Cryptography.Oid::.ctor(System.Security.Cryptography.Oid)
extern void Oid__ctor_m8C4B7AE0D9207BCF03960553182B43B8D1536ED0 (void);
// 0x000004A8 System.String System.Security.Cryptography.Oid::get_Value()
extern void Oid_get_Value_mD6F4D8AC1A3821D5DA263728C2DC0C208D084A78 (void);
// 0x000004A9 System.Void System.Security.Cryptography.Oid::set_Value(System.String)
extern void Oid_set_Value_mE13751778D2AC00F1CC962E42B35339BAEE45825 (void);
// 0x000004AA System.String System.Security.Cryptography.Oid::get_FriendlyName()
extern void Oid_get_FriendlyName_mF93E7A679CA55F2D2E694814BF3B38532FF44B41 (void);
// 0x000004AB System.Void System.Security.Cryptography.OidCollection::.ctor()
extern void OidCollection__ctor_m99E1CCEB955F4BB57DEAE0BF8E7326380F93E111 (void);
// 0x000004AC System.Int32 System.Security.Cryptography.OidCollection::Add(System.Security.Cryptography.Oid)
extern void OidCollection_Add_m13C7466BB24E047C88F27AC6AB5E9439AA491EF1 (void);
// 0x000004AD System.Security.Cryptography.Oid System.Security.Cryptography.OidCollection::get_Item(System.Int32)
extern void OidCollection_get_Item_mB8F51EB0825BDE39504BC7090B8AEEE13D0A9967 (void);
// 0x000004AE System.Int32 System.Security.Cryptography.OidCollection::get_Count()
extern void OidCollection_get_Count_m35D85FFEC009FD8195DA9E0EE0CD5B66290FA3C6 (void);
// 0x000004AF System.Collections.IEnumerator System.Security.Cryptography.OidCollection::System.Collections.IEnumerable.GetEnumerator()
extern void OidCollection_System_Collections_IEnumerable_GetEnumerator_m550967A294FF63F004D855F019235DE15A046B3E (void);
// 0x000004B0 System.Void System.Security.Cryptography.OidCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void OidCollection_System_Collections_ICollection_CopyTo_mC02E6211EC33878C50BEA5914193F038EE2E9CB7 (void);
// 0x000004B1 System.Boolean System.Security.Cryptography.OidCollection::get_IsSynchronized()
extern void OidCollection_get_IsSynchronized_m36C9F73515DA6834B85F9C8F9446E080CFA4C291 (void);
// 0x000004B2 System.Object System.Security.Cryptography.OidCollection::get_SyncRoot()
extern void OidCollection_get_SyncRoot_mB10B680D12CB8AC9C0F32C3C1217FA4345552174 (void);
// 0x000004B3 System.Void System.Security.Cryptography.OidEnumerator::.ctor(System.Security.Cryptography.OidCollection)
extern void OidEnumerator__ctor_m3BA079690E9B01B02B76FB694DCF279DAEC8E9D6 (void);
// 0x000004B4 System.Object System.Security.Cryptography.OidEnumerator::System.Collections.IEnumerator.get_Current()
extern void OidEnumerator_System_Collections_IEnumerator_get_Current_m21F1C975D9A97369DA0D3CEAADFA69D64214CEB3 (void);
// 0x000004B5 System.Boolean System.Security.Cryptography.OidEnumerator::MoveNext()
extern void OidEnumerator_MoveNext_m8CA45F7B39B4FEF9399379DAA1A6AAF4FFB8DCD8 (void);
// 0x000004B6 System.Void System.Security.Cryptography.OidEnumerator::Reset()
extern void OidEnumerator_Reset_mBCBE7C78E389E7D9794F44111832013583FB1F4C (void);
// 0x000004B7 System.String System.Security.Cryptography.CAPI::CryptFindOIDInfoNameFromKey(System.String,System.Security.Cryptography.OidGroup)
extern void CAPI_CryptFindOIDInfoNameFromKey_m283438D1BC7309F1642EBCE405CC9BFAEED43544 (void);
// 0x000004B8 System.String System.Security.Cryptography.CAPI::CryptFindOIDInfoKeyFromName(System.String,System.Security.Cryptography.OidGroup)
extern void CAPI_CryptFindOIDInfoKeyFromName_m4ED4943191307DF7392E82CE3E04C5A5777EA3AB (void);
// 0x000004B9 System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
extern void AsnEncodedData__ctor_m0CF86C874705C96B224222BEBB6BF5703EAB29E2 (void);
// 0x000004BA System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.Security.Cryptography.Oid,System.Byte[])
extern void AsnEncodedData__ctor_m0F04E7F12ED0BD74616EF4451F1EDDE6622E01EA (void);
// 0x000004BB System.Void System.Security.Cryptography.AsnEncodedData::set_Oid(System.Security.Cryptography.Oid)
extern void AsnEncodedData_set_Oid_mA72203D23B0F93CD9ECD507EB878502EEBA99322 (void);
// 0x000004BC System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
extern void AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278 (void);
// 0x000004BD System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
extern void AsnEncodedData_set_RawData_m867F92C32F87E4D8932D17EDF21785CA0FDA3BEA (void);
// 0x000004BE System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void AsnEncodedData_CopyFrom_mA350785B8AF676AB7856E705FA2F2D20FD54CC46 (void);
// 0x000004BF System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean)
extern void AsnEncodedData_ToString_mD65B64466F8AC07960AE0AA01466D9D80F8A105E (void);
// 0x000004C0 System.String System.Security.Cryptography.AsnEncodedData::Default(System.Boolean)
extern void AsnEncodedData_Default_m4A9014D9B85AB114168577AD5DEE7FA2AFAB4EB6 (void);
// 0x000004C1 System.String System.Security.Cryptography.AsnEncodedData::BasicConstraintsExtension(System.Boolean)
extern void AsnEncodedData_BasicConstraintsExtension_mC9DE1C0199EA0714150CAD960FD88361763DE03A (void);
// 0x000004C2 System.String System.Security.Cryptography.AsnEncodedData::EnhancedKeyUsageExtension(System.Boolean)
extern void AsnEncodedData_EnhancedKeyUsageExtension_m2ED1895CE72319E5E3B06F8BD76963BD6FF6263D (void);
// 0x000004C3 System.String System.Security.Cryptography.AsnEncodedData::KeyUsageExtension(System.Boolean)
extern void AsnEncodedData_KeyUsageExtension_m8F8D43DECE8B70E86FAF2B498204D3FC9E866ACD (void);
// 0x000004C4 System.String System.Security.Cryptography.AsnEncodedData::SubjectKeyIdentifierExtension(System.Boolean)
extern void AsnEncodedData_SubjectKeyIdentifierExtension_mE8BF30141FD478244F98363669282B9C26F74B9A (void);
// 0x000004C5 System.String System.Security.Cryptography.AsnEncodedData::SubjectAltName(System.Boolean)
extern void AsnEncodedData_SubjectAltName_m33180412765B9BC62F17B87F63964F89937C0467 (void);
// 0x000004C6 System.String System.Security.Cryptography.AsnEncodedData::NetscapeCertType(System.Boolean)
extern void AsnEncodedData_NetscapeCertType_mBF9894A8993D137AEEC8919FEF582DF17EE5F652 (void);
// 0x000004C7 System.String System.Security.Cryptography.X509Certificates.X509Utils::FindOidInfo(System.UInt32,System.String,System.Security.Cryptography.OidGroup)
extern void X509Utils_FindOidInfo_m7CC1462A6CC9DA7C40CA09FA5EACEE9B9117EC8C (void);
// 0x000004C8 System.String System.Security.Cryptography.X509Certificates.X509Utils::FindOidInfoWithFallback(System.UInt32,System.String,System.Security.Cryptography.OidGroup)
extern void X509Utils_FindOidInfoWithFallback_m863F372B324E59321550DCCBF4E23ABCE0A1ABB1 (void);
// 0x000004C9 System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern void PublicKey__ctor_mB96189563F51185F4D44F2E9B570481CE7F63BE7 (void);
// 0x000004CA System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern void PublicKey_get_EncodedKeyValue_m0294AF8C29C7329BEB243543D8FDA98B60FDB291 (void);
// 0x000004CB System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern void PublicKey_get_EncodedParameters_mFF4F9A39D91C0A00D1B36C93944816154C7255B3 (void);
// 0x000004CC System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern void PublicKey_get_Key_mF430DCB9952B3B936420D1F3CAE486DBF7570ECF (void);
// 0x000004CD System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern void PublicKey_get_Oid_mE3207B84A9090EC5404F6CD4AEABB1F37EC1F988 (void);
// 0x000004CE System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern void PublicKey_GetUnsignedBigInteger_m432F75CC14BA7A5B7992999EA4C8DFCE4E6C6692 (void);
// 0x000004CF System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern void PublicKey_DecodeDSA_mE287558C57A529CD95CF1198679DC1EB6D8D026D (void);
// 0x000004D0 System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern void PublicKey_DecodeRSA_m0DC1D6C55C4FE7663351264681DD318DD58DAF30 (void);
// 0x000004D1 System.Void System.Security.Cryptography.X509Certificates.PublicKey::.cctor()
extern void PublicKey__cctor_m36509A197C8D921E8A147E08BA65EFC8DD80BBB4 (void);
// 0x000004D2 System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor()
extern void X509BasicConstraintsExtension__ctor_mBFE792A93883E704745E589380F1DD7F12ECB36E (void);
// 0x000004D3 System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern void X509BasicConstraintsExtension__ctor_m67462D9110118C82677CE42C2685C05C0767EB00 (void);
// 0x000004D4 System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Boolean,System.Boolean,System.Int32,System.Boolean)
extern void X509BasicConstraintsExtension__ctor_m27365A2183995553C17661A9C5E6CFF474AEB33D (void);
// 0x000004D5 System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_CertificateAuthority()
extern void X509BasicConstraintsExtension_get_CertificateAuthority_mF7C866A45B3DE24A06EA3256B8FC0BA1989D038D (void);
// 0x000004D6 System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_HasPathLengthConstraint()
extern void X509BasicConstraintsExtension_get_HasPathLengthConstraint_m04C1B45C4FF2FF902B45A5B1AE309D3816A3457A (void);
// 0x000004D7 System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_PathLengthConstraint()
extern void X509BasicConstraintsExtension_get_PathLengthConstraint_m9401525125A220F1D51F130E3CC6E4C938E45566 (void);
// 0x000004D8 System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509BasicConstraintsExtension_CopyFrom_mB87E2C5337CEE107018289CF81AD4ED7956A6ECD (void);
// 0x000004D9 System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Decode(System.Byte[])
extern void X509BasicConstraintsExtension_Decode_m02EECEF97728108FE014735EDAD8C74B8461B384 (void);
// 0x000004DA System.Byte[] System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Encode()
extern void X509BasicConstraintsExtension_Encode_mC5E34F1B66DE0BCBD7C524C968C2C010B566843C (void);
// 0x000004DB System.String System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::ToString(System.Boolean)
extern void X509BasicConstraintsExtension_ToString_m4ABD6F1E1B7271403EA6250EFDCF400D68B8256D (void);
// 0x000004DC System.Security.Cryptography.X509Certificates.X509Certificate2Impl System.Security.Cryptography.X509Certificates.X509Certificate2::get_Impl()
extern void X509Certificate2_get_Impl_mAD55B5116FFD751B1963259C04E8F5F81517C465 (void);
// 0x000004DD System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor()
extern void X509Certificate2__ctor_m95D16A7EB76393C591CA0E93FA331B931504C9BA (void);
// 0x000004DE System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[])
extern void X509Certificate2__ctor_mBFFAA9446A805AF8E5B5A76F4D2375815A854ABA (void);
// 0x000004DF System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void X509Certificate2__ctor_m9BED4BE32997E4EF930C8D66CCF7C429265A6D42 (void);
// 0x000004E0 System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotAfter()
extern void X509Certificate2_get_NotAfter_m6A8FF55FBA82F3B04C23E30E21BF8F64693C8565 (void);
// 0x000004E1 System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotBefore()
extern void X509Certificate2_get_NotBefore_mDC4BB64A4D8A295BD1021C43D58DD43EBA4883B0 (void);
// 0x000004E2 System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2::get_PrivateKey()
extern void X509Certificate2_get_PrivateKey_m49B88B09C59D2453F8BFC96CDAFC290948A8E581 (void);
// 0x000004E3 System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::get_PublicKey()
extern void X509Certificate2_get_PublicKey_m8AC9C95FA651768945AFF1EF0FEBE2F22F8AA889 (void);
// 0x000004E4 System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_SerialNumber()
extern void X509Certificate2_get_SerialNumber_mBAE78C9FC3C5080CB782B1734497E83D4282D12A (void);
// 0x000004E5 System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::get_SignatureAlgorithm()
extern void X509Certificate2_get_SignatureAlgorithm_mF10C8153EED8633549FDB22006CFAABAC1B26931 (void);
// 0x000004E6 System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_Thumbprint()
extern void X509Certificate2_get_Thumbprint_m974E38E6838673D52D4672218325E45AE8636383 (void);
// 0x000004E7 System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2::get_Version()
extern void X509Certificate2_get_Version_mAA8C8DCAA6E046FAFD7C3DE665665C8FEC28EF9C (void);
// 0x000004E8 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern void X509Certificate2_Import_mB8CE3F497DC540159206373283627C58C95D200F (void);
// 0x000004E9 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Reset()
extern void X509Certificate2_Reset_mC64732F1FEE53D8C0478B164AD5B9A7C99C50AC0 (void);
// 0x000004EA System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString()
extern void X509Certificate2_ToString_mA04C0490966DDB6242954B9C556E7AB650DF80F5 (void);
// 0x000004EB System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString(System.Boolean)
extern void X509Certificate2_ToString_m8E889E21183273EE06D65DF4DC32AD8953505639 (void);
// 0x000004EC System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::AppendBuffer(System.Text.StringBuilder,System.Byte[])
extern void X509Certificate2_AppendBuffer_m3329578EDE4C215851A61F33A034CBD8C6972DDC (void);
// 0x000004ED System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.cctor()
extern void X509Certificate2__cctor_mCB3F3C33240CEB0623563FAE6610D7D0BF08B924 (void);
// 0x000004EE System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.cctor()
extern void X509Certificate2Collection__cctor_m443569146660ED5EA3660237263F0DA059D8BA50 (void);
// 0x000004EF System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_PrivateKey()
// 0x000004F0 System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_PublicKey()
// 0x000004F1 System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_SignatureAlgorithm()
// 0x000004F2 System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_Version()
// 0x000004F3 System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_IntermediateCertificates()
// 0x000004F4 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Impl::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
// 0x000004F5 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Impl::Reset()
// 0x000004F6 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Impl::.ctor()
extern void X509Certificate2Impl__ctor_mB6CCF2EA294D53A594FFB7CAB55962E920D1BB28 (void);
// 0x000004F7 System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_IsValid()
extern void X509Certificate2ImplMono_get_IsValid_m8EA0498434746DCD902D85379F00A21245E4F11C (void);
// 0x000004F8 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.ctor(Mono.Security.X509.X509Certificate)
extern void X509Certificate2ImplMono__ctor_mBDF5F03F3BC955CCFD3AFB740B60D5869431702E (void);
// 0x000004F9 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono)
extern void X509Certificate2ImplMono__ctor_mBCD25943158CBDCBD55E24A19AACDC47B4F6C46A (void);
// 0x000004FA System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::Clone()
extern void X509Certificate2ImplMono_Clone_mC55211F100A5F0F9B5B8B609D65FC0B3F0BAEB9B (void);
// 0x000004FB System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetIssuerName(System.Boolean)
extern void X509Certificate2ImplMono_GetIssuerName_m4BD00FBE8A745B2DB2704AF7AAA5F48099354511 (void);
// 0x000004FC System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetSubjectName(System.Boolean)
extern void X509Certificate2ImplMono_GetSubjectName_m7058BA456600F52DC12B20A3E426F3CBEFC22891 (void);
// 0x000004FD System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetRawCertData()
extern void X509Certificate2ImplMono_GetRawCertData_m8E5EE16FD23AA6F170CC78DD63AE1C25AE3A7C0F (void);
// 0x000004FE System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetCertHash(System.Boolean)
extern void X509Certificate2ImplMono_GetCertHash_m1D19FAD20F230EC3AB882804775F5111A93C3EFB (void);
// 0x000004FF System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetValidFrom()
extern void X509Certificate2ImplMono_GetValidFrom_mF14444E8277382677378B2E3FDDEE929BC080539 (void);
// 0x00000500 System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetValidUntil()
extern void X509Certificate2ImplMono_GetValidUntil_m33AA78A101D5C6FDCB83A45D77DD0E2F5ABA5E9E (void);
// 0x00000501 System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::Equals(System.Security.Cryptography.X509Certificates.X509CertificateImpl,System.Boolean&)
extern void X509Certificate2ImplMono_Equals_m5B0557C1274E4ACE12917539CEB51B88F0A8855C (void);
// 0x00000502 System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetSerialNumber()
extern void X509Certificate2ImplMono_GetSerialNumber_m1A6C4BC02159AED090856870E30309A41F620B39 (void);
// 0x00000503 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.ctor()
extern void X509Certificate2ImplMono__ctor_m6A63CE786DD033AAF667CE9E928B2470425E1010 (void);
// 0x00000504 System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_PrivateKey()
extern void X509Certificate2ImplMono_get_PrivateKey_m4F96338A12FDEDCCC6B6B8C3F263C5E0E0329327 (void);
// 0x00000505 System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_PublicKey()
extern void X509Certificate2ImplMono_get_PublicKey_m266BB633193C454E99BDE12F087ADDD931F0E1A9 (void);
// 0x00000506 System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_SignatureAlgorithm()
extern void X509Certificate2ImplMono_get_SignatureAlgorithm_m98B9DD7FEFE52F865DEE68E4FDDA592747DE5A19 (void);
// 0x00000507 System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_Version()
extern void X509Certificate2ImplMono_get_Version_m1E24884D49422A8DD3152FF62B2F9588D8CC4B2B (void);
// 0x00000508 Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::ImportPkcs12(System.Byte[],System.String)
extern void X509Certificate2ImplMono_ImportPkcs12_mB87D6BE13939DCD628BC979FFF63671CA23E0A86 (void);
// 0x00000509 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern void X509Certificate2ImplMono_Import_m49505FDD390700DF03D6C298C7870C5269255F24 (void);
// 0x0000050A System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::Reset()
extern void X509Certificate2ImplMono_Reset_m64DEBBA05762E41390F084DD9BF35C617C64C3E4 (void);
// 0x0000050B System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::ToString()
extern void X509Certificate2ImplMono_ToString_m243DD8D5CD86BA7F1F5FD047AECFA90A30C28E66 (void);
// 0x0000050C System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::ToString(System.Boolean)
extern void X509Certificate2ImplMono_ToString_m255BB5C223E59F719FD598D427C3BB11F474E8EC (void);
// 0x0000050D System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::AppendBuffer(System.Text.StringBuilder,System.Byte[])
extern void X509Certificate2ImplMono_AppendBuffer_m636AB73A7A5238F96FF219904600DB7DD76B228E (void);
// 0x0000050E System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_IntermediateCertificates()
extern void X509Certificate2ImplMono_get_IntermediateCertificates_m86F36AF08247DCBB2C4919BB3E3607C6EA88E6CF (void);
// 0x0000050F System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.cctor()
extern void X509Certificate2ImplMono__cctor_mBC941D3963B38F5DEB96DA25F4C8D430433B7115 (void);
// 0x00000510 System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor()
extern void X509CertificateCollection__ctor_m038CE3FFE670E8DC426728EE334DF915BC3F1644 (void);
// 0x00000511 System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void X509CertificateCollection__ctor_mA8D824BD5C4CFF13989F01F182F9D09CDE3A92C2 (void);
// 0x00000512 System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection::get_Item(System.Int32)
extern void X509CertificateCollection_get_Item_mF0F62ACA6DB4482B2F055563F3A88CFDB92377FA (void);
// 0x00000513 System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::AddRange(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void X509CertificateCollection_AddRange_m7856434D39CA3D6AB751C25CEB509A04E252722B (void);
// 0x00000514 System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetEnumerator()
extern void X509CertificateCollection_GetEnumerator_mB2D27CFCAA973ED96A90743270506B721358A29F (void);
// 0x00000515 System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetHashCode()
extern void X509CertificateCollection_GetHashCode_mF20BA3BA9E01B2533463FF2F26173FE0DBBC04BE (void);
// 0x00000516 System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void X509CertificateEnumerator__ctor_m52095CF67A4A192364C30FF8B0E17FC89BB58640 (void);
// 0x00000517 System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::get_Current()
extern void X509CertificateEnumerator_get_Current_m073AF75A4FCD3173200FF90AB6539B9D82C9EA90 (void);
// 0x00000518 System.Object System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
extern void X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_mBE4F1A9CE8C97F506D8F7FDA6F9C18135BA9AE15 (void);
// 0x00000519 System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
extern void X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m2B17A1E25AB322A73AFA8E8A368A5B1968F48F71 (void);
// 0x0000051A System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.Reset()
extern void X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m5A185825A08CCA0ED7D6419FA6F6E180061B9555 (void);
// 0x0000051B System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
extern void X509CertificateEnumerator_MoveNext_mD24E317796AFDCEE1C381C30AEC85B5B3A486F8C (void);
// 0x0000051C System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::.ctor()
extern void X509CertificateImplCollection__ctor_m186BDD732AB7A82E47606E244A0B2A82860A8F5B (void);
// 0x0000051D System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateImplCollection)
extern void X509CertificateImplCollection__ctor_m670BE04FD8D99C60BC8A862CACC2DF15744B70AC (void);
// 0x0000051E System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::get_Count()
extern void X509CertificateImplCollection_get_Count_m6C92C5AA558F2ECBD17BB5E743443FF353F1C29E (void);
// 0x0000051F System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::get_Item(System.Int32)
extern void X509CertificateImplCollection_get_Item_m8BC2DE13F2E914AC2290C5F015A00DA0562EC628 (void);
// 0x00000520 System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Add(System.Security.Cryptography.X509Certificates.X509CertificateImpl,System.Boolean)
extern void X509CertificateImplCollection_Add_mB07BB408F414BD2A54BAE33C467C6211A0F565FF (void);
// 0x00000521 System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Clone()
extern void X509CertificateImplCollection_Clone_m574D3070FCFCD00BA41E3517111BB55158E85590 (void);
// 0x00000522 System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Dispose()
extern void X509CertificateImplCollection_Dispose_m921A22D3FBCF1551AD058E4A69EF5DE82F217662 (void);
// 0x00000523 System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Dispose(System.Boolean)
extern void X509CertificateImplCollection_Dispose_m0AFF1F469149E71D985C307B9C779E08088AAFEE (void);
// 0x00000524 System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Finalize()
extern void X509CertificateImplCollection_Finalize_m36BECC904589560DD13C165E380A25A7052C22F2 (void);
// 0x00000525 System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Chain::get_Impl()
extern void X509Chain_get_Impl_mDFDF83101E18C675FBA93E833DDBC458D8427E7E (void);
// 0x00000526 System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor()
extern void X509Chain__ctor_m55DBE2D3727F0AAD25C34A7DCA654AA6218145E4 (void);
// 0x00000527 System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Boolean)
extern void X509Chain__ctor_m246DB394D17776D7769D04FF0EE0B4B9F8518DE0 (void);
// 0x00000528 System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Security.Cryptography.X509Certificates.X509ChainImpl)
extern void X509Chain__ctor_m3406D90977BB9160C7275CF5EA0FA629CEE4F386 (void);
// 0x00000529 System.Security.Cryptography.X509Certificates.X509ChainElementCollection System.Security.Cryptography.X509Certificates.X509Chain::get_ChainElements()
extern void X509Chain_get_ChainElements_mEA079D18934C900F8AE7E24CC8B143C27A7365DD (void);
// 0x0000052A System.Void System.Security.Cryptography.X509Certificates.X509Chain::set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy)
extern void X509Chain_set_ChainPolicy_mBCA34300EEA4783253A7B8DC281F9B858B207C92 (void);
// 0x0000052B System.Void System.Security.Cryptography.X509Certificates.X509Chain::Dispose()
extern void X509Chain_Dispose_mCFA2A24CDD151F681BA0A24B2CE814696217A1E3 (void);
// 0x0000052C System.Void System.Security.Cryptography.X509Certificates.X509Chain::Dispose(System.Boolean)
extern void X509Chain_Dispose_mBD3D48BC042C872B530302CBA9121D67C6A488C6 (void);
// 0x0000052D System.Void System.Security.Cryptography.X509Certificates.X509Chain::Finalize()
extern void X509Chain_Finalize_m23EF4947D8018EECD79F91B850C65939F42A6BC7 (void);
// 0x0000052E System.Void System.Security.Cryptography.X509Certificates.X509ChainElement::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern void X509ChainElement__ctor_m0345BD8FA64DFC6F1B0B7F3298E7E0A93A29805F (void);
// 0x0000052F System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509ChainElement::get_Certificate()
extern void X509ChainElement_get_Certificate_m586BA432D80368AAE40A0524D4770C39BDC640C9 (void);
// 0x00000530 System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::.ctor()
extern void X509ChainElementCollection__ctor_m63CF4401F3A9F06018F89DE0F5CD0B401AF3F516 (void);
// 0x00000531 System.Int32 System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Count()
extern void X509ChainElementCollection_get_Count_m61A068A8B5783C37B5835E67E157066A1438821C (void);
// 0x00000532 System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_IsSynchronized()
extern void X509ChainElementCollection_get_IsSynchronized_m3EB9623F37326704E9F247D769C7CF090470D3D7 (void);
// 0x00000533 System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Item(System.Int32)
extern void X509ChainElementCollection_get_Item_m87736EDD3B7649BCC883759FA1CEB61705B9BDD6 (void);
// 0x00000534 System.Object System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_SyncRoot()
extern void X509ChainElementCollection_get_SyncRoot_mE954E1ACE08270ED865B7A6686856CFC448358D7 (void);
// 0x00000535 System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void X509ChainElementCollection_System_Collections_ICollection_CopyTo_m54291E0447BC978834408CF6709695723C57F99A (void);
// 0x00000536 System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.IEnumerable.GetEnumerator()
extern void X509ChainElementCollection_System_Collections_IEnumerable_GetEnumerator_m9BAE4B33C287703E64F97D23F8AAEB0E3121EF8D (void);
// 0x00000537 System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern void X509ChainElementCollection_Add_m6089CEC31B6F33B5E7A18C18A6FB92BFDAE4AC70 (void);
// 0x00000538 System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Clear()
extern void X509ChainElementCollection_Clear_m16FFA49F7E1F08419E6BB6D0F348A6ECD21FF06D (void);
// 0x00000539 System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::.ctor(System.Collections.IEnumerable)
extern void X509ChainElementEnumerator__ctor_mDCF28D8FD9D18A200A31294DB23C5697E97954F7 (void);
// 0x0000053A System.Object System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::System.Collections.IEnumerator.get_Current()
extern void X509ChainElementEnumerator_System_Collections_IEnumerator_get_Current_mB1ED81C9DBD230BA46B8BF9C1EE60C0EB02FD72C (void);
// 0x0000053B System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::MoveNext()
extern void X509ChainElementEnumerator_MoveNext_m92880AD08574A13CF5097F800CAB6834A9C01BFE (void);
// 0x0000053C System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::Reset()
extern void X509ChainElementEnumerator_Reset_m88A53B2C249FFB257054D874F189EAFFA256E108 (void);
// 0x0000053D System.Boolean System.Security.Cryptography.X509Certificates.X509ChainImpl::get_IsValid()
// 0x0000053E System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::ThrowIfContextInvalid()
extern void X509ChainImpl_ThrowIfContextInvalid_mB4BB36FE66E507EF9A505F5D8B81F546E822C2F0 (void);
// 0x0000053F System.Security.Cryptography.X509Certificates.X509ChainElementCollection System.Security.Cryptography.X509Certificates.X509ChainImpl::get_ChainElements()
// 0x00000540 System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy)
// 0x00000541 System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Reset()
// 0x00000542 System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Dispose()
extern void X509ChainImpl_Dispose_mBBC758892307733F67FDD74E54A1AA7EF14FC917 (void);
// 0x00000543 System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Dispose(System.Boolean)
extern void X509ChainImpl_Dispose_m826F0D317D9B289A03CE7129D6FB2677ABDD47AC (void);
// 0x00000544 System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Finalize()
extern void X509ChainImpl_Finalize_m18B174F1E86BE1A17C0EAB764F2A65ED1A4CE838 (void);
// 0x00000545 System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::.ctor()
extern void X509ChainImpl__ctor_mC306F06EB416D53AC39137E23FD072E8DC87E8E1 (void);
// 0x00000546 System.Void System.Security.Cryptography.X509Certificates.X509ChainImplMono::.ctor(System.Boolean)
extern void X509ChainImplMono__ctor_m82E3F7D2ED531977F1C07B3DC2E6921408F095D3 (void);
// 0x00000547 System.Boolean System.Security.Cryptography.X509Certificates.X509ChainImplMono::get_IsValid()
extern void X509ChainImplMono_get_IsValid_mB5550DBA70129AC130A14F03AF67AC120196E431 (void);
// 0x00000548 System.Security.Cryptography.X509Certificates.X509ChainElementCollection System.Security.Cryptography.X509Certificates.X509ChainImplMono::get_ChainElements()
extern void X509ChainImplMono_get_ChainElements_m481D94CE76D18173FC1176D5BC464B94B055C7F3 (void);
// 0x00000549 System.Void System.Security.Cryptography.X509Certificates.X509ChainImplMono::set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy)
extern void X509ChainImplMono_set_ChainPolicy_mBBE85DCBD0B487DB7180415F8B96255CA7F4B729 (void);
// 0x0000054A System.Void System.Security.Cryptography.X509Certificates.X509ChainImplMono::Reset()
extern void X509ChainImplMono_Reset_mF4895F7B729040623E341CF56D752F44E3DA05DC (void);
// 0x0000054B System.Void System.Security.Cryptography.X509Certificates.X509ChainImplMono::.cctor()
extern void X509ChainImplMono__cctor_m51B0AAE9E88D74BE36A096A9DD29F86191FBAFC9 (void);
// 0x0000054C System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::.ctor()
extern void X509ChainPolicy__ctor_m3BE053A8A6F6A59E283062E09FABA64AF98EB7D9 (void);
// 0x0000054D System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void X509ChainPolicy__ctor_m17F37BC42389FFA54D34961E22624F615D7A2094 (void);
// 0x0000054E System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::Reset()
extern void X509ChainPolicy_Reset_m523357E1A74D1DD2018768BD3FAC786517AD9EC1 (void);
// 0x0000054F System.Void System.Security.Cryptography.X509Certificates.X509ChainStatus::.ctor(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern void X509ChainStatus__ctor_mA41DF127E7EEF7B59204118C5C48F695F2C6DECC (void);
// 0x00000550 System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::GetInformation(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern void X509ChainStatus_GetInformation_m52F5A8AE943A70FFA25F9D1CA1C8B51AC80C3C77 (void);
// 0x00000551 System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern void X509EnhancedKeyUsageExtension__ctor_m64F507CB1938AA4BC20287D731B74DF5CC99A96C (void);
// 0x00000552 System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509EnhancedKeyUsageExtension_CopyFrom_mDD12A69F6804BA6B137A459CD941B367274C2B25 (void);
// 0x00000553 System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
extern void X509EnhancedKeyUsageExtension_Decode_m610C0C741966205F6DC0492BD17B28E1FED8D648 (void);
// 0x00000554 System.String System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::ToString(System.Boolean)
extern void X509EnhancedKeyUsageExtension_ToString_m12992C4F3BE30FC9662680B8CDAC07F7F7C67134 (void);
// 0x00000555 System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
extern void X509Extension__ctor_m4DF31A0909F64A47F2F8E64E814FE16E022794E7 (void);
// 0x00000556 System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
extern void X509Extension_get_Critical_m56CF11BDF0C2D2917C326013630709C7709DCF12 (void);
// 0x00000557 System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
extern void X509Extension_set_Critical_mF361A9EB776A20CA39923BD48C4A492A734144E0 (void);
// 0x00000558 System.Void System.Security.Cryptography.X509Certificates.X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509Extension_CopyFrom_m1D101C0A8E17FDC25EF1D7645F2A07E5AB7A3D1C (void);
// 0x00000559 System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
extern void X509Extension_FormatUnkownData_mEF1E719F7AD312B099351C581F4A06925AD9F18A (void);
// 0x0000055A System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::.cctor()
extern void X509ExtensionCollection__cctor_m963D61F8A6BB520E7BF88AA87A7200E05F2CFE92 (void);
// 0x0000055B System.Void System.Security.Cryptography.X509Certificates.X509Helper2::Initialize()
extern void X509Helper2_Initialize_m9F2CFE871D3D462E215BE293D3378AE97FF21BB1 (void);
// 0x0000055C System.Void System.Security.Cryptography.X509Certificates.X509Helper2::ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509CertificateImpl)
extern void X509Helper2_ThrowIfContextInvalid_m42CCB016D1155A14B93F6D28559F7C7A54D9F5CF (void);
// 0x0000055D System.Security.Cryptography.X509Certificates.X509Certificate2Impl System.Security.Cryptography.X509Certificates.X509Helper2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags,System.Boolean)
extern void X509Helper2_Import_m3947980AD95573F469332472298A35B803F97773 (void);
// 0x0000055E System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Helper2::CreateChainImpl(System.Boolean)
extern void X509Helper2_CreateChainImpl_mB998518D19A5CA8BD73C5630B29904C1B61D086D (void);
// 0x0000055F System.Boolean System.Security.Cryptography.X509Certificates.X509Helper2::IsValid(System.Security.Cryptography.X509Certificates.X509ChainImpl)
extern void X509Helper2_IsValid_mA44EBFE5C5A9B60EE73AF6040EE1DD9947167901 (void);
// 0x00000560 System.Void System.Security.Cryptography.X509Certificates.X509Helper2::ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509ChainImpl)
extern void X509Helper2_ThrowIfContextInvalid_mF877A9D6F2A4F89FAE5FAA5AEFA7B50679EDCC96 (void);
// 0x00000561 System.Exception System.Security.Cryptography.X509Certificates.X509Helper2::GetInvalidChainContextException()
extern void X509Helper2_GetInvalidChainContextException_m416D8CBBEAEB0F30703FFA2C74D29A46BA128C86 (void);
// 0x00000562 System.Void System.Security.Cryptography.X509Certificates.X509Helper2/MyNativeHelper::.ctor()
extern void MyNativeHelper__ctor_m3C33DA045EB050BE747AD1E3B10DA0C350678EA7 (void);
// 0x00000563 System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor()
extern void X509KeyUsageExtension__ctor_mE735C27BA5C2BBEA264B0FDB229E7DA7A2E3416D (void);
// 0x00000564 System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern void X509KeyUsageExtension__ctor_m6D2F83567A69553296EB7CC93466B20C7884C54E (void);
// 0x00000565 System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags,System.Boolean)
extern void X509KeyUsageExtension__ctor_m0E105A1E8A7ED901E90E53B33EF86DFB3D2F3B9C (void);
// 0x00000566 System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::get_KeyUsages()
extern void X509KeyUsageExtension_get_KeyUsages_mD2ADFD4CC335B85D453BCA75A8541D3DF099A8FB (void);
// 0x00000567 System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509KeyUsageExtension_CopyFrom_m029A26C577528A8DF077CF68AD2787DC1E76FA7F (void);
// 0x00000568 System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::GetValidFlags(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags)
extern void X509KeyUsageExtension_GetValidFlags_m3141215EE841412F2C65E9CD7C90AE26E4D05C9A (void);
// 0x00000569 System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Decode(System.Byte[])
extern void X509KeyUsageExtension_Decode_m8D2236720B86833EAFCB87C19BF616E84A15A385 (void);
// 0x0000056A System.Byte[] System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Encode()
extern void X509KeyUsageExtension_Encode_m14D2F2E0777C7CFA424399E66349940A923764E5 (void);
// 0x0000056B System.String System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::ToString(System.Boolean)
extern void X509KeyUsageExtension_ToString_m16FC486E9C54EBAEF7CA8C62C820DE7F0BE1E084 (void);
// 0x0000056C System.Void System.Security.Cryptography.X509Certificates.X509Store::Close()
extern void X509Store_Close_m2FA715DD72AEE3DD1CA06128AB5D3925EAD8E29A (void);
// 0x0000056D System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor()
extern void X509SubjectKeyIdentifierExtension__ctor_m0A09F64706823AF7D0494B62B041FF11AFA587CF (void);
// 0x0000056E System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_m6D7E57ECBE71290733F6658D8197F034A615DB02 (void);
// 0x0000056F System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Byte[],System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_m178F0928E93C151B64754E82C9613687D80671A0 (void);
// 0x00000570 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.String,System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_mDEF8BD36D2A43B1BDC54760AC6E57458E5ECBFE6 (void);
// 0x00000571 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_m50305847B96BE3F6CB0816EB143AB89108DA493A (void);
// 0x00000572 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_m7CE599E8BEFBF176243E07100E2B9D1AD40E109E (void);
// 0x00000573 System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier()
extern void X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_mD90F985708EE4E69C37AA8B09AEBBE64A4002601 (void);
// 0x00000574 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509SubjectKeyIdentifierExtension_CopyFrom_mA94CE978304FA27C3CD9719F34D85CD34FC3695D (void);
// 0x00000575 System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
extern void X509SubjectKeyIdentifierExtension_FromHexChar_m7E53F7E025E6DD03B6BC137CA6F9C43808BFAB92 (void);
// 0x00000576 System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
extern void X509SubjectKeyIdentifierExtension_FromHexChars_mB25E5A16CF6637BF846D2B22898E552E092AADFA (void);
// 0x00000577 System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
extern void X509SubjectKeyIdentifierExtension_FromHex_m8CAB896F210E058270EB9492F05D2776FEB6A1EA (void);
// 0x00000578 System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
extern void X509SubjectKeyIdentifierExtension_Decode_m6ED45FB642F2A5EDAD51EE357CAB8EB95BC8EBA9 (void);
// 0x00000579 System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
extern void X509SubjectKeyIdentifierExtension_Encode_m6BEC26EF891B31FF98EF4FDF96CC0E9CEDF0B208 (void);
// 0x0000057A System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::ToString(System.Boolean)
extern void X509SubjectKeyIdentifierExtension_ToString_mBD5BE20274B5B56104E6ECD3137DE0718DE50537 (void);
// 0x0000057B System.Void System.Collections.Specialized.HybridDictionary::.ctor()
extern void HybridDictionary__ctor_m9FC8D443AABAEC8D67ADF072437D2B364B08B7F1 (void);
// 0x0000057C System.Object System.Collections.Specialized.HybridDictionary::get_Item(System.Object)
extern void HybridDictionary_get_Item_m7185EEEAFC226096E70344C925C0E878B6BB355C (void);
// 0x0000057D System.Void System.Collections.Specialized.HybridDictionary::set_Item(System.Object,System.Object)
extern void HybridDictionary_set_Item_mE42268AAEEFAC3C809899E1BC62251985E731079 (void);
// 0x0000057E System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::get_List()
extern void HybridDictionary_get_List_m04D20BE02A5E09BE885C0780E74435ACCD56D78C (void);
// 0x0000057F System.Void System.Collections.Specialized.HybridDictionary::ChangeOver()
extern void HybridDictionary_ChangeOver_m720F3CC680ABE10D68E6E5D67EE646435498EC8B (void);
// 0x00000580 System.Int32 System.Collections.Specialized.HybridDictionary::get_Count()
extern void HybridDictionary_get_Count_m9105DDBF52049FDB3664818E8883EDF06646C28A (void);
// 0x00000581 System.Boolean System.Collections.Specialized.HybridDictionary::get_IsSynchronized()
extern void HybridDictionary_get_IsSynchronized_mEDB978DB4DD87B56D2111BFD618E9B93563C8020 (void);
// 0x00000582 System.Object System.Collections.Specialized.HybridDictionary::get_SyncRoot()
extern void HybridDictionary_get_SyncRoot_m6E4080330F28495CDEB87CB61DAE35C24028AA88 (void);
// 0x00000583 System.Collections.ICollection System.Collections.Specialized.HybridDictionary::get_Values()
extern void HybridDictionary_get_Values_mF40FEB4551FA8941CAF0AA8EA636A09AB3E0C3C2 (void);
// 0x00000584 System.Void System.Collections.Specialized.HybridDictionary::Add(System.Object,System.Object)
extern void HybridDictionary_Add_mAD439BE2C4F44AF8A43EC7491E26478EDDF7DFBC (void);
// 0x00000585 System.Boolean System.Collections.Specialized.HybridDictionary::Contains(System.Object)
extern void HybridDictionary_Contains_m4D83965011E01C6992097DD64AC0F5C3C0E2C765 (void);
// 0x00000586 System.Void System.Collections.Specialized.HybridDictionary::CopyTo(System.Array,System.Int32)
extern void HybridDictionary_CopyTo_m14080EC1FA3FC4736A5EBA8B4B9CC49DD4E673D3 (void);
// 0x00000587 System.Collections.IDictionaryEnumerator System.Collections.Specialized.HybridDictionary::GetEnumerator()
extern void HybridDictionary_GetEnumerator_m6A951136F415F6AA36DD93755EDE5873D6D66117 (void);
// 0x00000588 System.Collections.IEnumerator System.Collections.Specialized.HybridDictionary::System.Collections.IEnumerable.GetEnumerator()
extern void HybridDictionary_System_Collections_IEnumerable_GetEnumerator_m51EE25513E0F719E34095133BD0C11379464A6EA (void);
// 0x00000589 System.Void System.Collections.Specialized.ListDictionary::.ctor()
extern void ListDictionary__ctor_m9B69C39CDA7C506487D47DFE0AD7CF59B0C4C82F (void);
// 0x0000058A System.Void System.Collections.Specialized.ListDictionary::.ctor(System.Collections.IComparer)
extern void ListDictionary__ctor_mEF3028294A42FC5771EBED7DC1DCB104E284A79A (void);
// 0x0000058B System.Object System.Collections.Specialized.ListDictionary::get_Item(System.Object)
extern void ListDictionary_get_Item_m234AF1C6B763954DA1EC8BD5C74BA2D16E8D74DC (void);
// 0x0000058C System.Void System.Collections.Specialized.ListDictionary::set_Item(System.Object,System.Object)
extern void ListDictionary_set_Item_m68050184A6FE6BB7B33891F19FE8D87D458499AD (void);
// 0x0000058D System.Int32 System.Collections.Specialized.ListDictionary::get_Count()
extern void ListDictionary_get_Count_m63B5332C669C858EBC423472A502528612C890F1 (void);
// 0x0000058E System.Boolean System.Collections.Specialized.ListDictionary::get_IsSynchronized()
extern void ListDictionary_get_IsSynchronized_m98323278519FFC7DF7206C42568B3C0E1724F5B9 (void);
// 0x0000058F System.Object System.Collections.Specialized.ListDictionary::get_SyncRoot()
extern void ListDictionary_get_SyncRoot_m44040160ADB660B10684A95305CB08F56AF029E8 (void);
// 0x00000590 System.Collections.ICollection System.Collections.Specialized.ListDictionary::get_Values()
extern void ListDictionary_get_Values_m144BEBB77FDEC181980793D89DC54DC2077A10AE (void);
// 0x00000591 System.Void System.Collections.Specialized.ListDictionary::Add(System.Object,System.Object)
extern void ListDictionary_Add_mD622807A74E5FF8AF27DFF445307D81DFCFADB28 (void);
// 0x00000592 System.Boolean System.Collections.Specialized.ListDictionary::Contains(System.Object)
extern void ListDictionary_Contains_m06D47395FA7A1B7379C8BBFD38D7A8CFEB721D08 (void);
// 0x00000593 System.Void System.Collections.Specialized.ListDictionary::CopyTo(System.Array,System.Int32)
extern void ListDictionary_CopyTo_mBF4FD9B59407ABF719E2565E788A2DC9A4769564 (void);
// 0x00000594 System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary::GetEnumerator()
extern void ListDictionary_GetEnumerator_m6B44040F7259D5F7F1E15F4A4FA0FAE38BFEE236 (void);
// 0x00000595 System.Collections.IEnumerator System.Collections.Specialized.ListDictionary::System.Collections.IEnumerable.GetEnumerator()
extern void ListDictionary_System_Collections_IEnumerable_GetEnumerator_m6412355259E0F0D8959F9785D34F0748511F3783 (void);
// 0x00000596 System.Void System.Collections.Specialized.ListDictionary/NodeEnumerator::.ctor(System.Collections.Specialized.ListDictionary)
extern void NodeEnumerator__ctor_m96E6D528E4C4D03DF5FE2C904501B77246EE5B17 (void);
// 0x00000597 System.Object System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Current()
extern void NodeEnumerator_get_Current_m19DF983FA469D5832AC53B7841D278980859DE59 (void);
// 0x00000598 System.Collections.DictionaryEntry System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Entry()
extern void NodeEnumerator_get_Entry_m58F1425F47017D32E7F781CBA78E37C355F596AA (void);
// 0x00000599 System.Object System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Key()
extern void NodeEnumerator_get_Key_mFB4422BD5607790768C310AA7715CDC47799E5AD (void);
// 0x0000059A System.Object System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Value()
extern void NodeEnumerator_get_Value_m01AD97761452577C6F66680DE74BBDDE898B8F72 (void);
// 0x0000059B System.Boolean System.Collections.Specialized.ListDictionary/NodeEnumerator::MoveNext()
extern void NodeEnumerator_MoveNext_m8615D4B81CA7F5D17919BE7BFF0A688B192A67DD (void);
// 0x0000059C System.Void System.Collections.Specialized.ListDictionary/NodeEnumerator::Reset()
extern void NodeEnumerator_Reset_m9992FAC9825E8D6692B6FCEDF8E47E941C1875FC (void);
// 0x0000059D System.Void System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::.ctor(System.Collections.Specialized.ListDictionary,System.Boolean)
extern void NodeKeyValueCollection__ctor_mBB36F9963382776073923DB97C6C0DFC220E3BCC (void);
// 0x0000059E System.Void System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void NodeKeyValueCollection_System_Collections_ICollection_CopyTo_mD842A41E01397DF6504443F21E8687AAF12E3DFE (void);
// 0x0000059F System.Int32 System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::System.Collections.ICollection.get_Count()
extern void NodeKeyValueCollection_System_Collections_ICollection_get_Count_m4A3B27B46A158424075685D2BFD0E7DFD24CCEFB (void);
// 0x000005A0 System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::System.Collections.ICollection.get_IsSynchronized()
extern void NodeKeyValueCollection_System_Collections_ICollection_get_IsSynchronized_m178C7CF8DD7C9753FCAB3CEA39EEC748A9D124D6 (void);
// 0x000005A1 System.Object System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::System.Collections.ICollection.get_SyncRoot()
extern void NodeKeyValueCollection_System_Collections_ICollection_get_SyncRoot_m626EFA245B02BFEA3210F65CEAEA2630E9FCD803 (void);
// 0x000005A2 System.Collections.IEnumerator System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::System.Collections.IEnumerable.GetEnumerator()
extern void NodeKeyValueCollection_System_Collections_IEnumerable_GetEnumerator_mA9963017BFDFE4A840CD514144D7DF80C24317EE (void);
// 0x000005A3 System.Void System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::.ctor(System.Collections.Specialized.ListDictionary,System.Boolean)
extern void NodeKeyValueEnumerator__ctor_mC6052F8CA984A3A8A8801F237EF2E9583126663E (void);
// 0x000005A4 System.Object System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::get_Current()
extern void NodeKeyValueEnumerator_get_Current_mC74C6C7153BB3D7D120EED9865B48336894308DC (void);
// 0x000005A5 System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::MoveNext()
extern void NodeKeyValueEnumerator_MoveNext_m670FC6BEB14D91A8D94A8D6B2B92C7A42CC65ADC (void);
// 0x000005A6 System.Void System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::Reset()
extern void NodeKeyValueEnumerator_Reset_m4D8DEA9EB735DA10B1F7EC74B18C51B8C60BA610 (void);
// 0x000005A7 System.Void System.Collections.Specialized.ListDictionary/DictionaryNode::.ctor()
extern void DictionaryNode__ctor_m38EC4C8C8EF2A5ABDD91B178DDB0CF0E0D7D15E2 (void);
// 0x000005A8 System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
extern void NameObjectCollectionBase__ctor_mA74DFF0CE0FB59430A786082F414813F276F130D (void);
// 0x000005A9 System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IEqualityComparer)
extern void NameObjectCollectionBase__ctor_m684256D394079487B0AA79F96D82FC1EF34A2123 (void);
// 0x000005AA System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern void NameObjectCollectionBase__ctor_m9100CD7C0C24135A887EC01FCAA69EC0DBF0D463 (void);
// 0x000005AB System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.DBNull)
extern void NameObjectCollectionBase__ctor_m4BF6C086BA110F79E817D1F307D0B912E32BCA55 (void);
// 0x000005AC System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void NameObjectCollectionBase__ctor_mAF5575543B8D937C34D00E9D7B6642BFAD74F37C (void);
// 0x000005AD System.Void System.Collections.Specialized.NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void NameObjectCollectionBase_GetObjectData_mF4EA432DCE051F52DD8CA3C091F606D8C216D9DA (void);
// 0x000005AE System.Void System.Collections.Specialized.NameObjectCollectionBase::OnDeserialization(System.Object)
extern void NameObjectCollectionBase_OnDeserialization_m8C86FE5E896571CDA1C4335CFC799F20ACFBC3B5 (void);
// 0x000005AF System.Void System.Collections.Specialized.NameObjectCollectionBase::Reset()
extern void NameObjectCollectionBase_Reset_m7D346054B961190F3799970BC8C4F8EBD3689986 (void);
// 0x000005B0 System.Void System.Collections.Specialized.NameObjectCollectionBase::Reset(System.Int32)
extern void NameObjectCollectionBase_Reset_m1A5701DA2CE23C171A59DDCE5EE8166528C1081E (void);
// 0x000005B1 System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry System.Collections.Specialized.NameObjectCollectionBase::FindEntry(System.String)
extern void NameObjectCollectionBase_FindEntry_m5D2C7207AF84D9CFAE79399387115E44C5348C8F (void);
// 0x000005B2 System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
extern void NameObjectCollectionBase_get_IsReadOnly_mFCB376BE86332546D47A4B983FD91FFF23558709 (void);
// 0x000005B3 System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
extern void NameObjectCollectionBase_BaseAdd_m1A0CA51397D274B23B10ECE78D2EE923C4FDC07F (void);
// 0x000005B4 System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseRemove(System.String)
extern void NameObjectCollectionBase_BaseRemove_m301318FB3627302D115078FA8250D07A4B851A99 (void);
// 0x000005B5 System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
extern void NameObjectCollectionBase_BaseGet_m9ADF3F54E9A5D8151837C6E4652ED27CD1C06CFF (void);
// 0x000005B6 System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseSet(System.String,System.Object)
extern void NameObjectCollectionBase_BaseSet_mDAD4979940B3ACC47B77A64AECCD0C69C2F9A015 (void);
// 0x000005B7 System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
extern void NameObjectCollectionBase_BaseGet_mDEFD71E2644E7080FBE6E79B9221673D02F64202 (void);
// 0x000005B8 System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
extern void NameObjectCollectionBase_BaseGetKey_m0ED9A3D47A2808BF98BCBEAFB51D175127B9CFB1 (void);
// 0x000005B9 System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator()
extern void NameObjectCollectionBase_GetEnumerator_m02D0640D271E51652CC9E1B50C6795CA19761E88 (void);
// 0x000005BA System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count()
extern void NameObjectCollectionBase_get_Count_mA6E8285C71420239BF891DF0FFCC60E68E660D25 (void);
// 0x000005BB System.Void System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void NameObjectCollectionBase_System_Collections_ICollection_CopyTo_mE984B0745168F2F0FCAD2F9CC36E525592EDFC20 (void);
// 0x000005BC System.Object System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_SyncRoot()
extern void NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_m5BA819A3EBE9BDD6B7ECB55E9C4D767D85EAF641 (void);
// 0x000005BD System.Boolean System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_IsSynchronized()
extern void NameObjectCollectionBase_System_Collections_ICollection_get_IsSynchronized_mC079154D099C5C60910FF6B003AC60D196B65309 (void);
// 0x000005BE System.Void System.Collections.Specialized.NameObjectCollectionBase::.cctor()
extern void NameObjectCollectionBase__cctor_m75D92824CC99BD5686855E00C115ADD337FD46D8 (void);
// 0x000005BF System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::.ctor(System.String,System.Object)
extern void NameObjectEntry__ctor_mB4018B4F844A8F7F3308B10CB017D6008DB0736B (void);
// 0x000005C0 System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::.ctor(System.Collections.Specialized.NameObjectCollectionBase)
extern void NameObjectKeysEnumerator__ctor_m684F9F2CC2934708B3F198D7F750D5030AD9CC80 (void);
// 0x000005C1 System.Boolean System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::MoveNext()
extern void NameObjectKeysEnumerator_MoveNext_m602677D8FC9EE3BC87755FB0EAC1BACA518CA240 (void);
// 0x000005C2 System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::Reset()
extern void NameObjectKeysEnumerator_Reset_m291D728258A95AEB8BE6697D0E1DADC24AE1A977 (void);
// 0x000005C3 System.Object System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::get_Current()
extern void NameObjectKeysEnumerator_get_Current_mEA737C3649050A481FEE567F163E4D5C7A328B2A (void);
// 0x000005C4 System.Void System.Collections.Specialized.CompatibleComparer::.ctor(System.Collections.IComparer,System.Collections.IHashCodeProvider)
extern void CompatibleComparer__ctor_mFAA5DFD1F5D8A144CBE12E74E8557CF5653A2DB0 (void);
// 0x000005C5 System.Boolean System.Collections.Specialized.CompatibleComparer::Equals(System.Object,System.Object)
extern void CompatibleComparer_Equals_m08DCF183451A42F14345B5F615F4BE790565EB38 (void);
// 0x000005C6 System.Int32 System.Collections.Specialized.CompatibleComparer::GetHashCode(System.Object)
extern void CompatibleComparer_GetHashCode_mEFB12FFF3B0A76548DF481D6922F2F21D31B30FA (void);
// 0x000005C7 System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::get_Comparer()
extern void CompatibleComparer_get_Comparer_m556DC9797B932664AA69CDC71F0C7EF8E669AF79 (void);
// 0x000005C8 System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::get_HashCodeProvider()
extern void CompatibleComparer_get_HashCodeProvider_mE92F98439CCB3AFCFFA472631B45AC8CA8686F0D (void);
// 0x000005C9 System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::get_DefaultComparer()
extern void CompatibleComparer_get_DefaultComparer_m3CE447550711937CB1B4012A0886F99E0719C8E4 (void);
// 0x000005CA System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::get_DefaultHashCodeProvider()
extern void CompatibleComparer_get_DefaultHashCodeProvider_m97193A6E0AB462BB662CA24C0F3491CE2B950698 (void);
// 0x000005CB System.Void System.Collections.Specialized.NameValueCollection::.ctor()
extern void NameValueCollection__ctor_m78B698FEF3EFEE917D0EBAA0DEDCFD1BD9AA6323 (void);
// 0x000005CC System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern void NameValueCollection__ctor_m3FB82F83A2B13FC647CECDF8610D53B52F52170F (void);
// 0x000005CD System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.DBNull)
extern void NameValueCollection__ctor_mA7D338E7E6795829EE4E64D8834A41C2CE898FBB (void);
// 0x000005CE System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void NameValueCollection__ctor_m69DC8832F5EC7DD21DE701866B84A639570AC8D5 (void);
// 0x000005CF System.Void System.Collections.Specialized.NameValueCollection::InvalidateCachedArrays()
extern void NameValueCollection_InvalidateCachedArrays_mA7CA9F8B09DDFA9163FB77563C6FCB07762D23C8 (void);
// 0x000005D0 System.String System.Collections.Specialized.NameValueCollection::GetAsOneString(System.Collections.ArrayList)
extern void NameValueCollection_GetAsOneString_m17F731980F76CFE607BD54F6A965BD6930927669 (void);
// 0x000005D1 System.String[] System.Collections.Specialized.NameValueCollection::GetAsStringArray(System.Collections.ArrayList)
extern void NameValueCollection_GetAsStringArray_m1EDCB363B9C6F60755628FE8A8AB366CB451405C (void);
// 0x000005D2 System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String)
extern void NameValueCollection_Add_m2058D4136F9DC4A11836DF6B1AB4853387898B2C (void);
// 0x000005D3 System.String System.Collections.Specialized.NameValueCollection::Get(System.String)
extern void NameValueCollection_Get_mDEC8EB5C5FAA1B34B99C6AAA50F0F575296DB1F1 (void);
// 0x000005D4 System.String[] System.Collections.Specialized.NameValueCollection::GetValues(System.String)
extern void NameValueCollection_GetValues_mF6E7959EDDA51B0E1F86D31AC90E949ADAF4A0DD (void);
// 0x000005D5 System.Void System.Collections.Specialized.NameValueCollection::Set(System.String,System.String)
extern void NameValueCollection_Set_mE479F82E6045A7447D4CFA7040FF63CC5CCD1329 (void);
// 0x000005D6 System.Void System.Collections.Specialized.NameValueCollection::Remove(System.String)
extern void NameValueCollection_Remove_mFA1B8B38078E7B158E18CF9B6D1A211F071082D0 (void);
// 0x000005D7 System.String System.Collections.Specialized.NameValueCollection::get_Item(System.String)
extern void NameValueCollection_get_Item_mCA21B55D4454D35073475B2966BA0F9207D16FED (void);
// 0x000005D8 System.Void System.Collections.Specialized.NameValueCollection::set_Item(System.String,System.String)
extern void NameValueCollection_set_Item_m068F8AB7B8D0EDFD8A9DA582E80A20ACF9E8D692 (void);
// 0x000005D9 System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32)
extern void NameValueCollection_Get_m0CF4D7CB8B22A2B269CFD472A17494F592E470E7 (void);
// 0x000005DA System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32)
extern void NameValueCollection_GetKey_m56EE50398F41A0A52AA2E7759B511BFAC068125D (void);
// 0x000005DB System.String System.Collections.Specialized.StringCollection::get_Item(System.Int32)
extern void StringCollection_get_Item_m1C00F274B95C72B7802386E253AEFD63BBF0ABC6 (void);
// 0x000005DC System.Void System.Collections.Specialized.StringCollection::set_Item(System.Int32,System.String)
extern void StringCollection_set_Item_m9C39150B3F7E7707087939A667608314F7B7396A (void);
// 0x000005DD System.Int32 System.Collections.Specialized.StringCollection::get_Count()
extern void StringCollection_get_Count_mC75C516535FA84F1F00EA0B8080DA833F2668B6E (void);
// 0x000005DE System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsReadOnly()
extern void StringCollection_System_Collections_IList_get_IsReadOnly_m5F7F83F7BE95960C9214087A57F2BDE25D623D2E (void);
// 0x000005DF System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsFixedSize()
extern void StringCollection_System_Collections_IList_get_IsFixedSize_m0DF42F48B682BCFAD27BDE97B54789A7AF31CB65 (void);
// 0x000005E0 System.Int32 System.Collections.Specialized.StringCollection::Add(System.String)
extern void StringCollection_Add_m74C07154AC7259B8219DF6A79B76EF5B7E12A6EE (void);
// 0x000005E1 System.Void System.Collections.Specialized.StringCollection::Clear()
extern void StringCollection_Clear_mF6342AADBD52C49020E567138B9E0F479B38A357 (void);
// 0x000005E2 System.Boolean System.Collections.Specialized.StringCollection::Contains(System.String)
extern void StringCollection_Contains_mFA733702D3C6B9BFA95AD34B74C5A0AD9DB3B30C (void);
// 0x000005E3 System.Void System.Collections.Specialized.StringCollection::CopyTo(System.String[],System.Int32)
extern void StringCollection_CopyTo_m4AEACC92E456EE1A0CA6AE045E1CF3739216A5E4 (void);
// 0x000005E4 System.Int32 System.Collections.Specialized.StringCollection::IndexOf(System.String)
extern void StringCollection_IndexOf_m0CCDCB4898AEF6BD74168E2FE480CEA739AB926F (void);
// 0x000005E5 System.Void System.Collections.Specialized.StringCollection::Insert(System.Int32,System.String)
extern void StringCollection_Insert_m899372FA6CD26D46C1773350C67A5B7DD390F455 (void);
// 0x000005E6 System.Boolean System.Collections.Specialized.StringCollection::get_IsSynchronized()
extern void StringCollection_get_IsSynchronized_m050BFCB6A4192E924D209B7CFAFC4F6EB6621CF0 (void);
// 0x000005E7 System.Void System.Collections.Specialized.StringCollection::Remove(System.String)
extern void StringCollection_Remove_mC6A3DD305A3DFD39CB2EB0B150633F774FE93E78 (void);
// 0x000005E8 System.Void System.Collections.Specialized.StringCollection::RemoveAt(System.Int32)
extern void StringCollection_RemoveAt_m2774DD6AD7D2A1D26B119D06E5E6210CDD1DBA07 (void);
// 0x000005E9 System.Object System.Collections.Specialized.StringCollection::get_SyncRoot()
extern void StringCollection_get_SyncRoot_m8EB8D6F913B12F3B9FBEC7056B85520F63107C9F (void);
// 0x000005EA System.Object System.Collections.Specialized.StringCollection::System.Collections.IList.get_Item(System.Int32)
extern void StringCollection_System_Collections_IList_get_Item_mC52C13B373A2121AC1643931A253135DE68AA72E (void);
// 0x000005EB System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern void StringCollection_System_Collections_IList_set_Item_m854335ED059049299A185117DED7BBB255E18EAD (void);
// 0x000005EC System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.Add(System.Object)
extern void StringCollection_System_Collections_IList_Add_mB44F92FE4734B08FECBC698551D3C8494BC9B472 (void);
// 0x000005ED System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.Contains(System.Object)
extern void StringCollection_System_Collections_IList_Contains_mE745AC2B0A9AF7F1A1A2508446F62DA61ACDB419 (void);
// 0x000005EE System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.IndexOf(System.Object)
extern void StringCollection_System_Collections_IList_IndexOf_m22D689D7E4AD87F7BF760176137F81D454AD394A (void);
// 0x000005EF System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern void StringCollection_System_Collections_IList_Insert_m6DE39B04ADDE5A0309BC68E3350A2D6E7031D984 (void);
// 0x000005F0 System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Remove(System.Object)
extern void StringCollection_System_Collections_IList_Remove_mF7FFE6D6A2B875139AF595D5BCC5894D521D500D (void);
// 0x000005F1 System.Void System.Collections.Specialized.StringCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void StringCollection_System_Collections_ICollection_CopyTo_m1C3B0352FAA40B2BC8C570B6B67A63D6293258A0 (void);
// 0x000005F2 System.Collections.IEnumerator System.Collections.Specialized.StringCollection::System.Collections.IEnumerable.GetEnumerator()
extern void StringCollection_System_Collections_IEnumerable_GetEnumerator_m3D00F20127AEB0490F6F594D72E077B2B37AE182 (void);
// 0x000005F3 System.Void System.Collections.Specialized.StringCollection::.ctor()
extern void StringCollection__ctor_m9E4F5359AEFDC2281D4E651A948F6EAE1B812488 (void);
// 0x000005F4 System.Void System.Collections.Generic.LinkedList`1::.ctor()
// 0x000005F5 System.Void System.Collections.Generic.LinkedList`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000005F6 System.Int32 System.Collections.Generic.LinkedList`1::get_Count()
// 0x000005F7 System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::get_First()
// 0x000005F8 System.Boolean System.Collections.Generic.LinkedList`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000005F9 System.Void System.Collections.Generic.LinkedList`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000005FA System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::AddFirst(T)
// 0x000005FB System.Void System.Collections.Generic.LinkedList`1::AddFirst(System.Collections.Generic.LinkedListNode`1<T>)
// 0x000005FC System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::AddLast(T)
// 0x000005FD System.Void System.Collections.Generic.LinkedList`1::Clear()
// 0x000005FE System.Boolean System.Collections.Generic.LinkedList`1::Contains(T)
// 0x000005FF System.Void System.Collections.Generic.LinkedList`1::CopyTo(T[],System.Int32)
// 0x00000600 System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::Find(T)
// 0x00000601 System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1::GetEnumerator()
// 0x00000602 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000603 System.Boolean System.Collections.Generic.LinkedList`1::Remove(T)
// 0x00000604 System.Void System.Collections.Generic.LinkedList`1::Remove(System.Collections.Generic.LinkedListNode`1<T>)
// 0x00000605 System.Void System.Collections.Generic.LinkedList`1::RemoveLast()
// 0x00000606 System.Void System.Collections.Generic.LinkedList`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000607 System.Void System.Collections.Generic.LinkedList`1::OnDeserialization(System.Object)
// 0x00000608 System.Void System.Collections.Generic.LinkedList`1::InternalInsertNodeBefore(System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
// 0x00000609 System.Void System.Collections.Generic.LinkedList`1::InternalInsertNodeToEmptyList(System.Collections.Generic.LinkedListNode`1<T>)
// 0x0000060A System.Void System.Collections.Generic.LinkedList`1::InternalRemoveNode(System.Collections.Generic.LinkedListNode`1<T>)
// 0x0000060B System.Void System.Collections.Generic.LinkedList`1::ValidateNewNode(System.Collections.Generic.LinkedListNode`1<T>)
// 0x0000060C System.Void System.Collections.Generic.LinkedList`1::ValidateNode(System.Collections.Generic.LinkedListNode`1<T>)
// 0x0000060D System.Boolean System.Collections.Generic.LinkedList`1::System.Collections.ICollection.get_IsSynchronized()
// 0x0000060E System.Object System.Collections.Generic.LinkedList`1::System.Collections.ICollection.get_SyncRoot()
// 0x0000060F System.Void System.Collections.Generic.LinkedList`1::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// 0x00000610 System.Collections.IEnumerator System.Collections.Generic.LinkedList`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000611 System.Void System.Collections.Generic.LinkedList`1/Enumerator::.ctor(System.Collections.Generic.LinkedList`1<T>)
// 0x00000612 System.Void System.Collections.Generic.LinkedList`1/Enumerator::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000613 T System.Collections.Generic.LinkedList`1/Enumerator::get_Current()
// 0x00000614 System.Object System.Collections.Generic.LinkedList`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000615 System.Boolean System.Collections.Generic.LinkedList`1/Enumerator::MoveNext()
// 0x00000616 System.Void System.Collections.Generic.LinkedList`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x00000617 System.Void System.Collections.Generic.LinkedList`1/Enumerator::Dispose()
// 0x00000618 System.Void System.Collections.Generic.LinkedList`1/Enumerator::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000619 System.Void System.Collections.Generic.LinkedList`1/Enumerator::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
// 0x0000061A System.Void System.Collections.Generic.LinkedListNode`1::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
// 0x0000061B System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::get_Next()
// 0x0000061C T System.Collections.Generic.LinkedListNode`1::get_Value()
// 0x0000061D System.Void System.Collections.Generic.LinkedListNode`1::Invalidate()
// 0x0000061E System.Void System.Collections.Generic.Queue`1::.ctor()
// 0x0000061F System.Int32 System.Collections.Generic.Queue`1::get_Count()
// 0x00000620 System.Boolean System.Collections.Generic.Queue`1::System.Collections.ICollection.get_IsSynchronized()
// 0x00000621 System.Object System.Collections.Generic.Queue`1::System.Collections.ICollection.get_SyncRoot()
// 0x00000622 System.Void System.Collections.Generic.Queue`1::Clear()
// 0x00000623 System.Void System.Collections.Generic.Queue`1::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// 0x00000624 System.Void System.Collections.Generic.Queue`1::Enqueue(T)
// 0x00000625 System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1::GetEnumerator()
// 0x00000626 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000627 System.Collections.IEnumerator System.Collections.Generic.Queue`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000628 T System.Collections.Generic.Queue`1::Dequeue()
// 0x00000629 T System.Collections.Generic.Queue`1::Peek()
// 0x0000062A System.Void System.Collections.Generic.Queue`1::SetCapacity(System.Int32)
// 0x0000062B System.Void System.Collections.Generic.Queue`1::MoveNext(System.Int32&)
// 0x0000062C System.Void System.Collections.Generic.Queue`1::ThrowForEmptyQueue()
// 0x0000062D System.Void System.Collections.Generic.Queue`1/Enumerator::.ctor(System.Collections.Generic.Queue`1<T>)
// 0x0000062E System.Void System.Collections.Generic.Queue`1/Enumerator::Dispose()
// 0x0000062F System.Boolean System.Collections.Generic.Queue`1/Enumerator::MoveNext()
// 0x00000630 T System.Collections.Generic.Queue`1/Enumerator::get_Current()
// 0x00000631 System.Void System.Collections.Generic.Queue`1/Enumerator::ThrowEnumerationNotStartedOrEnded()
// 0x00000632 System.Object System.Collections.Generic.Queue`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000633 System.Void System.Collections.Generic.Queue`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x00000634 System.Void System.Collections.Generic.Stack`1::.ctor()
// 0x00000635 System.Int32 System.Collections.Generic.Stack`1::get_Count()
// 0x00000636 System.Boolean System.Collections.Generic.Stack`1::System.Collections.ICollection.get_IsSynchronized()
// 0x00000637 System.Object System.Collections.Generic.Stack`1::System.Collections.ICollection.get_SyncRoot()
// 0x00000638 System.Void System.Collections.Generic.Stack`1::Clear()
// 0x00000639 System.Void System.Collections.Generic.Stack`1::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// 0x0000063A System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000063B System.Collections.IEnumerator System.Collections.Generic.Stack`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000063C T System.Collections.Generic.Stack`1::Peek()
// 0x0000063D T System.Collections.Generic.Stack`1::Pop()
// 0x0000063E System.Void System.Collections.Generic.Stack`1::Push(T)
// 0x0000063F System.Void System.Collections.Generic.Stack`1::ThrowForEmptyStack()
// 0x00000640 System.Void System.Collections.Generic.Stack`1/Enumerator::.ctor(System.Collections.Generic.Stack`1<T>)
// 0x00000641 System.Void System.Collections.Generic.Stack`1/Enumerator::Dispose()
// 0x00000642 System.Boolean System.Collections.Generic.Stack`1/Enumerator::MoveNext()
// 0x00000643 T System.Collections.Generic.Stack`1/Enumerator::get_Current()
// 0x00000644 System.Void System.Collections.Generic.Stack`1/Enumerator::ThrowEnumerationNotStartedOrEnded()
// 0x00000645 System.Object System.Collections.Generic.Stack`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000646 System.Void System.Collections.Generic.Stack`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x00000647 System.String System.Net.HttpStatusDescription::Get(System.Net.HttpStatusCode)
extern void HttpStatusDescription_Get_mBCAF1CF569C7D10C4FCDA614E2265B4F4789799D (void);
// 0x00000648 System.String System.Net.HttpStatusDescription::Get(System.Int32)
extern void HttpStatusDescription_Get_mA25D6763223B9F856548976E4E7D8CA5B7468B0C (void);
// 0x00000649 System.Void System.Net.Authorization::.ctor(System.String)
extern void Authorization__ctor_m09795C30F4FE3B67923A303F198A8DE21E9E43A1 (void);
// 0x0000064A System.Void System.Net.Authorization::.ctor(System.String,System.Boolean)
extern void Authorization__ctor_m17BCE19AB822863CDBA3CE2AECAC97FF2F53426A (void);
// 0x0000064B System.String System.Net.Authorization::get_Message()
extern void Authorization_get_Message_mA648F467F28DCD3ECBE3C8505B719519BD803C2A (void);
// 0x0000064C System.Net.ICredentials System.Net.CredentialCache::get_DefaultCredentials()
extern void CredentialCache_get_DefaultCredentials_m04BE43C08715BE89006B3E298A7706E7C05D05AA (void);
// 0x0000064D System.Void System.Net.SystemNetworkCredential::.ctor()
extern void SystemNetworkCredential__ctor_m1578DB215E2E9C785748EA49BA5E6FF9F145EAE5 (void);
// 0x0000064E System.Void System.Net.SystemNetworkCredential::.cctor()
extern void SystemNetworkCredential__cctor_mD1039438C68D62097C1BB865B15E4A1745167F00 (void);
// 0x0000064F System.Net.Sockets.AddressFamily System.Net.EndPoint::get_AddressFamily()
extern void EndPoint_get_AddressFamily_m62AEE9F373979E52C77ED321CCDE62B724BE94A3 (void);
// 0x00000650 System.Net.SocketAddress System.Net.EndPoint::Serialize()
extern void EndPoint_Serialize_m10480668BCAFD0C28C1AA1A1DCC7F4CE4506969F (void);
// 0x00000651 System.Net.EndPoint System.Net.EndPoint::Create(System.Net.SocketAddress)
extern void EndPoint_Create_m3E7712702ADC0C6CCAC317C4613B67FC3A870AE5 (void);
// 0x00000652 System.Void System.Net.EndPoint::.ctor()
extern void EndPoint__ctor_m128E616435E17A62A3DD7D0BC759FB0CF7F87C29 (void);
// 0x00000653 System.Net.IWebProxy System.Net.GlobalProxySelection::get_Select()
extern void GlobalProxySelection_get_Select_mB426350582C09C6940AA328D851F719BBAA5494B (void);
// 0x00000654 System.Net.IWebProxy System.Net.GlobalProxySelection::GetEmptyWebProxy()
extern void GlobalProxySelection_GetEmptyWebProxy_m709E1782A9353D2C99AFCFA6F13FC308108367A5 (void);
// 0x00000655 System.Void System.Net.HttpVersion::.cctor()
extern void HttpVersion__cctor_m28C73AF80CBE88253CE08E87C2C76AAFE33B4DED (void);
// 0x00000656 System.Net.Authorization System.Net.IAuthenticationModule::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
// 0x00000657 System.Net.Authorization System.Net.IAuthenticationModule::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
// 0x00000658 System.String System.Net.IAuthenticationModule::get_AuthenticationType()
// 0x00000659 System.Boolean System.Net.ICertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
// 0x0000065A System.Net.NetworkCredential System.Net.ICredentials::GetCredential(System.Uri,System.String)
// 0x0000065B System.Void System.Net.IPAddress::.ctor(System.Int64)
extern void IPAddress__ctor_mA672DA31F082CC6E8B10BEC436D94450E630E16F (void);
// 0x0000065C System.Void System.Net.IPAddress::.ctor(System.Byte[],System.Int64)
extern void IPAddress__ctor_m1E185EFDA876C940958AF536535E2E4C16C0D1D2 (void);
// 0x0000065D System.Void System.Net.IPAddress::.ctor(System.UInt16[],System.UInt32)
extern void IPAddress__ctor_mEE088A7E8AE4F63C519837672A2EA0650E6A9B1C (void);
// 0x0000065E System.Void System.Net.IPAddress::.ctor(System.Int32)
extern void IPAddress__ctor_m75238FEA3E8B108639752167DBE53DDD799CD7B8 (void);
// 0x0000065F System.Boolean System.Net.IPAddress::TryParse(System.String,System.Net.IPAddress&)
extern void IPAddress_TryParse_m43158BF9D76398954BE04773A6A15898EFE27F3E (void);
// 0x00000660 System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
extern void IPAddress_Parse_m49C413225AC75DA34D1663559818861CA34C3CB0 (void);
// 0x00000661 System.Net.IPAddress System.Net.IPAddress::InternalParse(System.String,System.Boolean)
extern void IPAddress_InternalParse_mA345622709EB5B07BB8D50F3E28CB519BB419E26 (void);
// 0x00000662 System.Byte[] System.Net.IPAddress::GetAddressBytes()
extern void IPAddress_GetAddressBytes_m7ED0924E8259B6D2426B3B570B25EE7CE9B789C7 (void);
// 0x00000663 System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
extern void IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D (void);
// 0x00000664 System.Int64 System.Net.IPAddress::get_ScopeId()
extern void IPAddress_get_ScopeId_mEDF9FA0FCEFAC4109AEDAD316DC18C5EE841CE5B (void);
// 0x00000665 System.String System.Net.IPAddress::ToString()
extern void IPAddress_ToString_m4CFA8A08819BEDF5293C486AF623F5A4014AF8AC (void);
// 0x00000666 System.Boolean System.Net.IPAddress::IsLoopback(System.Net.IPAddress)
extern void IPAddress_IsLoopback_m3B8891E48F9F68CFF239B71C29E536BE1F5CFA14 (void);
// 0x00000667 System.Boolean System.Net.IPAddress::Equals(System.Object,System.Boolean)
extern void IPAddress_Equals_m4B1CA27458D8182146569D0BC82A2D3A23346516 (void);
// 0x00000668 System.Boolean System.Net.IPAddress::Equals(System.Object)
extern void IPAddress_Equals_mA898722519C090D557CA585C2FDB496D92D3CEB3 (void);
// 0x00000669 System.Int32 System.Net.IPAddress::GetHashCode()
extern void IPAddress_GetHashCode_m3A6682B1FAA8754BB7AF27913FFE319ABFED9D50 (void);
// 0x0000066A System.Net.IPAddress System.Net.IPAddress::MapToIPv6()
extern void IPAddress_MapToIPv6_mA99938E0BDF716543A4C890FB694C54FBDE70B4F (void);
// 0x0000066B System.Void System.Net.IPAddress::.cctor()
extern void IPAddress__cctor_mA3EA3A0F0F5B03634732C2DF4780B8438F8AAB57 (void);
// 0x0000066C System.Net.Sockets.AddressFamily System.Net.IPEndPoint::get_AddressFamily()
extern void IPEndPoint_get_AddressFamily_m3D6AC423AA5E8BEBEA8E3324D9BAC3A89A279127 (void);
// 0x0000066D System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
extern void IPEndPoint__ctor_m22783A215BA0B38674F6A6CB6803804268561321 (void);
// 0x0000066E System.Net.IPAddress System.Net.IPEndPoint::get_Address()
extern void IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95 (void);
// 0x0000066F System.Int32 System.Net.IPEndPoint::get_Port()
extern void IPEndPoint_get_Port_m442D84417A9E8942514FFBB9714FEE6BD094C6C3 (void);
// 0x00000670 System.String System.Net.IPEndPoint::ToString()
extern void IPEndPoint_ToString_mBFC4822326C1A86698C64FF3992CB295911866C5 (void);
// 0x00000671 System.Net.SocketAddress System.Net.IPEndPoint::Serialize()
extern void IPEndPoint_Serialize_m6DCCD4B0D381396E0E7638C240167A2A8B0EC585 (void);
// 0x00000672 System.Net.EndPoint System.Net.IPEndPoint::Create(System.Net.SocketAddress)
extern void IPEndPoint_Create_m807F89A5752C1E5F09D1AB32F6E60D243F06398A (void);
// 0x00000673 System.Boolean System.Net.IPEndPoint::Equals(System.Object)
extern void IPEndPoint_Equals_m2F4B8B1F77EBFAA516EE1B6AB75836C928682EBE (void);
// 0x00000674 System.Int32 System.Net.IPEndPoint::GetHashCode()
extern void IPEndPoint_GetHashCode_m02C37BD0E617B964B02EB2F19F0F7CA1A337C3A0 (void);
// 0x00000675 System.Void System.Net.IPEndPoint::.cctor()
extern void IPEndPoint__cctor_mE4AD7BE573E78C661DED5F5E32A2D8AE18A487D2 (void);
// 0x00000676 System.String System.Net.IPHostEntry::get_HostName()
extern void IPHostEntry_get_HostName_m93399E3B7017D91869B47746BD9EDF74BF347FD1 (void);
// 0x00000677 System.Void System.Net.IPHostEntry::set_HostName(System.String)
extern void IPHostEntry_set_HostName_mDAF37AF72EB14AC6C63DE863DAF1C71E7DA2AA21 (void);
// 0x00000678 System.Void System.Net.IPHostEntry::set_Aliases(System.String[])
extern void IPHostEntry_set_Aliases_mBEA9E40249BEC29743421885964A0A76A9D34BB4 (void);
// 0x00000679 System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
extern void IPHostEntry_get_AddressList_m466AC33C136531F42A5EDCD3A75E5B392075186F (void);
// 0x0000067A System.Void System.Net.IPHostEntry::set_AddressList(System.Net.IPAddress[])
extern void IPHostEntry_set_AddressList_m5D661027187141E20D78AE4795EA8DABA42BEF38 (void);
// 0x0000067B System.Void System.Net.IPHostEntry::.ctor()
extern void IPHostEntry__ctor_mE110DE1F81AC6E1174418A6EE3C266E60BD06B9A (void);
// 0x0000067C System.Net.WebRequest System.Net.IWebRequestCreate::Create(System.Uri)
// 0x0000067D System.Void System.Net.InternalException::.ctor()
extern void InternalException__ctor_mD1CD1128C58BBD0C276E4218668A3840DB16E2BE (void);
// 0x0000067E System.Boolean System.Net.NclUtilities::IsAddressLocal(System.Net.IPAddress)
extern void NclUtilities_IsAddressLocal_mA242E6ABE428178E61CD874861C9FC403B7A8E6D (void);
// 0x0000067F System.Net.IPHostEntry System.Net.NclUtilities::GetLocalHost()
extern void NclUtilities_GetLocalHost_mE12F4302AAB81FEADA5297FCFA19D3489AF307D5 (void);
// 0x00000680 System.Net.IPAddress[] System.Net.NclUtilities::get_LocalAddresses()
extern void NclUtilities_get_LocalAddresses_m02FAA6B8E057FF963114C8B6081D240E1650C682 (void);
// 0x00000681 System.Object System.Net.NclUtilities::get_LocalAddressesLock()
extern void NclUtilities_get_LocalAddressesLock_m0947ED2032CDB835110A441EEB4F8749B460ED88 (void);
// 0x00000682 System.String System.Net.ValidationHelper::MakeStringNull(System.String)
extern void ValidationHelper_MakeStringNull_m1B543969D0680F39DA26ED8ED30A8C9BD477E172 (void);
// 0x00000683 System.Boolean System.Net.ValidationHelper::IsBlankString(System.String)
extern void ValidationHelper_IsBlankString_m36C36F665203B4C29D68521575BA043C79AE6997 (void);
// 0x00000684 System.Boolean System.Net.ValidationHelper::ValidateTcpPort(System.Int32)
extern void ValidationHelper_ValidateTcpPort_mC3E43EB25CB11FD1E24201705A66E50903A1893E (void);
// 0x00000685 System.Void System.Net.ValidationHelper::.cctor()
extern void ValidationHelper__cctor_m22F571D2AFF05BBF2FF195273C2F35EDE1E80644 (void);
// 0x00000686 System.NotImplementedException System.Net.ExceptionHelper::get_MethodNotImplementedException()
extern void ExceptionHelper_get_MethodNotImplementedException_mFF544B7A15FFA43328707249BA0CC6E980DC662C (void);
// 0x00000687 System.NotImplementedException System.Net.ExceptionHelper::get_PropertyNotImplementedException()
extern void ExceptionHelper_get_PropertyNotImplementedException_mF07BE7024B108DBC45C374F81D0E5875B9D3A516 (void);
// 0x00000688 System.Net.IWebRequestCreate System.Net.WebRequestPrefixElement::get_Creator()
extern void WebRequestPrefixElement_get_Creator_m13145D2174C42C9B67EA559E658306C9B9DAA59D (void);
// 0x00000689 System.Void System.Net.WebRequestPrefixElement::set_Creator(System.Net.IWebRequestCreate)
extern void WebRequestPrefixElement_set_Creator_m1E41CA82D539FA5B7FFFF02B303DCD9305190C66 (void);
// 0x0000068A System.Void System.Net.WebRequestPrefixElement::.ctor(System.String,System.Net.IWebRequestCreate)
extern void WebRequestPrefixElement__ctor_m846CE8E7CBD75F62E6CC970CCD75D16BDEE3A42F (void);
// 0x0000068B System.Void System.Net.HttpContinueDelegate::.ctor(System.Object,System.IntPtr)
extern void HttpContinueDelegate__ctor_mFA137B57734EE9D5C75A3333EB7CF4C9BBDE28B4 (void);
// 0x0000068C System.Void System.Net.HttpContinueDelegate::Invoke(System.Int32,System.Net.WebHeaderCollection)
extern void HttpContinueDelegate_Invoke_mBB31F6155FA0BCFF94576BA0F43C19568592BD5F (void);
// 0x0000068D System.IAsyncResult System.Net.HttpContinueDelegate::BeginInvoke(System.Int32,System.Net.WebHeaderCollection,System.AsyncCallback,System.Object)
extern void HttpContinueDelegate_BeginInvoke_m247E5694A2CF6D28773CB8DFC9E919AA1D497C3C (void);
// 0x0000068E System.Void System.Net.HttpContinueDelegate::EndInvoke(System.IAsyncResult)
extern void HttpContinueDelegate_EndInvoke_m94F8280E186B7FDD7CE8197AFEECA875305D18D0 (void);
// 0x0000068F System.Void System.Net.NetworkCredential::.ctor(System.String,System.String)
extern void NetworkCredential__ctor_mBB62CCEBA2D6C5AE946F2D3F4A26FD3B718E312E (void);
// 0x00000690 System.Void System.Net.NetworkCredential::.ctor(System.String,System.String,System.String)
extern void NetworkCredential__ctor_mFBBBBCA94F91EA965A2B3DD6DD52554245B6B41B (void);
// 0x00000691 System.String System.Net.NetworkCredential::get_UserName()
extern void NetworkCredential_get_UserName_mFC41ED3D14796CA2B5C08EB0DE537A2F3EF02473 (void);
// 0x00000692 System.Void System.Net.NetworkCredential::set_UserName(System.String)
extern void NetworkCredential_set_UserName_m0906CE0D5CFA7972CD2DA08D9D2DD5ABEEEE55C8 (void);
// 0x00000693 System.String System.Net.NetworkCredential::get_Password()
extern void NetworkCredential_get_Password_m5EFE385E59C57168F8B8B43BE10196C4346AAFBB (void);
// 0x00000694 System.Void System.Net.NetworkCredential::set_Password(System.String)
extern void NetworkCredential_set_Password_mD3D1EF31B8A2C9011A2439B249E3B2D55D1144F4 (void);
// 0x00000695 System.String System.Net.NetworkCredential::get_Domain()
extern void NetworkCredential_get_Domain_mE4AA75C44CA2189FC66B95235C17CCE6ACFEDCBC (void);
// 0x00000696 System.Void System.Net.NetworkCredential::set_Domain(System.String)
extern void NetworkCredential_set_Domain_m122C82F6B1E78A1F0A86B9B314F479EB336DC354 (void);
// 0x00000697 System.String System.Net.NetworkCredential::InternalGetUserName()
extern void NetworkCredential_InternalGetUserName_m978EFE7B8858AFE08B5281B187357934B75BF2E9 (void);
// 0x00000698 System.String System.Net.NetworkCredential::InternalGetPassword()
extern void NetworkCredential_InternalGetPassword_m3A81BC2DFB8F5EE58FB8E4AFC25DE6B4D65176D6 (void);
// 0x00000699 System.String System.Net.NetworkCredential::InternalGetDomain()
extern void NetworkCredential_InternalGetDomain_m675D988E1EA47F5EA6111A318FA02A9F951924C2 (void);
// 0x0000069A System.Net.NetworkCredential System.Net.NetworkCredential::GetCredential(System.Uri,System.String)
extern void NetworkCredential_GetCredential_m695587170B9003FAFA139B3F6EF82CB5F6CF20D1 (void);
// 0x0000069B System.Void System.Net.ProtocolViolationException::.ctor()
extern void ProtocolViolationException__ctor_mBFDA5DBCACD716BB63ED4055B66E6AD41240889E (void);
// 0x0000069C System.Void System.Net.ProtocolViolationException::.ctor(System.String)
extern void ProtocolViolationException__ctor_mDD18BFEE8140195ECBAD99A4E8079FE063A92D79 (void);
// 0x0000069D System.Void System.Net.ProtocolViolationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void ProtocolViolationException__ctor_m1E566889EEC9659072DB826E7E6BBECD8747ECBD (void);
// 0x0000069E System.Void System.Net.ProtocolViolationException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void ProtocolViolationException_System_Runtime_Serialization_ISerializable_GetObjectData_m29C4C22EFB8EDB208F01C9477A72F1CD1C442245 (void);
// 0x0000069F System.Void System.Net.ProtocolViolationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void ProtocolViolationException_GetObjectData_m85FE8C0B309D2870767DE4AEDEDAC089A0E5F4E6 (void);
// 0x000006A0 System.Net.Sockets.AddressFamily System.Net.SocketAddress::get_Family()
extern void SocketAddress_get_Family_m415D59360C9C2E480D2D98775983A573CCD9D7E0 (void);
// 0x000006A1 System.Int32 System.Net.SocketAddress::get_Size()
extern void SocketAddress_get_Size_m6383C5C4F9200464ACB6D583020F81019602CFA4 (void);
// 0x000006A2 System.Byte System.Net.SocketAddress::get_Item(System.Int32)
extern void SocketAddress_get_Item_m4ED599B209C73DFB72212B7B3621B1703A26C5FD (void);
// 0x000006A3 System.Void System.Net.SocketAddress::.ctor(System.Net.Sockets.AddressFamily,System.Int32)
extern void SocketAddress__ctor_m6684EAD0CA7CDDE9DB6E406FE1F32E6DC6B92A4E (void);
// 0x000006A4 System.Void System.Net.SocketAddress::.ctor(System.Net.IPAddress)
extern void SocketAddress__ctor_mBE5E81FAB07F2E45BCACF1D97E1DBAAFB5E50511 (void);
// 0x000006A5 System.Void System.Net.SocketAddress::.ctor(System.Net.IPAddress,System.Int32)
extern void SocketAddress__ctor_m9738A4ADE5808D768AE732070C89F7ABA6BED994 (void);
// 0x000006A6 System.Net.IPAddress System.Net.SocketAddress::GetIPAddress()
extern void SocketAddress_GetIPAddress_mB16652A595F005C45F9F8F085C995659E33D1B07 (void);
// 0x000006A7 System.Net.IPEndPoint System.Net.SocketAddress::GetIPEndPoint()
extern void SocketAddress_GetIPEndPoint_m251711A31597B8B2702F9212292CB699B84771AE (void);
// 0x000006A8 System.Boolean System.Net.SocketAddress::Equals(System.Object)
extern void SocketAddress_Equals_m4E7AA4FFB7FF19A0323168642F3E4F1631726FFC (void);
// 0x000006A9 System.Int32 System.Net.SocketAddress::GetHashCode()
extern void SocketAddress_GetHashCode_mA54234C51687C63132D9C9D326433FBB001C5B33 (void);
// 0x000006AA System.String System.Net.SocketAddress::ToString()
extern void SocketAddress_ToString_m8326F21A4A05F551EAF40323D4AFBDFA84E74C45 (void);
// 0x000006AB System.Void System.Net.WebException::.ctor()
extern void WebException__ctor_m98277D0386F066DFF058573C69663D488749DB17 (void);
// 0x000006AC System.Void System.Net.WebException::.ctor(System.String,System.Exception)
extern void WebException__ctor_mE0703A9CEA00C199E48C0FAC3174771E9614CEC7 (void);
// 0x000006AD System.Void System.Net.WebException::.ctor(System.String,System.Net.WebExceptionStatus)
extern void WebException__ctor_m4D8BF7D61087F7AA4018215A6DCF7578AEA4DB08 (void);
// 0x000006AE System.Void System.Net.WebException::.ctor(System.String,System.Net.WebExceptionStatus,System.Net.WebExceptionInternalStatus,System.Exception)
extern void WebException__ctor_m45CDD6F2A9FC70FAC4031D6D3DA645BAF76221C2 (void);
// 0x000006AF System.Void System.Net.WebException::.ctor(System.String,System.Exception,System.Net.WebExceptionStatus,System.Net.WebResponse)
extern void WebException__ctor_m7C17EA99B1FE182295AF99B968D67080AD4E2CCE (void);
// 0x000006B0 System.Void System.Net.WebException::.ctor(System.String,System.String,System.Exception,System.Net.WebExceptionStatus,System.Net.WebResponse)
extern void WebException__ctor_m56E04F240E37B9AA72D7A6ACB611807E1EFD2A99 (void);
// 0x000006B1 System.Void System.Net.WebException::.ctor(System.String,System.Exception,System.Net.WebExceptionStatus,System.Net.WebResponse,System.Net.WebExceptionInternalStatus)
extern void WebException__ctor_mC6DDD7E27B66A40A1D3CBB0EDF7B2C65017964F5 (void);
// 0x000006B2 System.Void System.Net.WebException::.ctor(System.String,System.String,System.Exception,System.Net.WebExceptionStatus,System.Net.WebResponse,System.Net.WebExceptionInternalStatus)
extern void WebException__ctor_m53B6D10B4E58AEAFD51D4283CF4D739EFC912068 (void);
// 0x000006B3 System.Void System.Net.WebException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebException__ctor_m7EE3F748EF90DC6004CD094BC4CC203369FFE1F7 (void);
// 0x000006B4 System.Void System.Net.WebException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebException_System_Runtime_Serialization_ISerializable_GetObjectData_mCF19A0A1F0BE4A6B87369ADC32B4811F63BA8639 (void);
// 0x000006B5 System.Void System.Net.WebException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebException_GetObjectData_mB7123EB9D9EEA2C93A8C2F47E785E7A3437FF78E (void);
// 0x000006B6 System.String System.Net.WebExceptionMapping::GetWebStatusString(System.Net.WebExceptionStatus)
extern void WebExceptionMapping_GetWebStatusString_m30EC249DEE18FC7F31A7AE05399C6D7E8CEF6554 (void);
// 0x000006B7 System.Void System.Net.WebExceptionMapping::.cctor()
extern void WebExceptionMapping__cctor_mD501856055A625E9CF2525D3BAB2F831470F3DE1 (void);
// 0x000006B8 System.Void System.Net.WebHeaderCollection::NormalizeCommonHeaders()
extern void WebHeaderCollection_NormalizeCommonHeaders_m7CF89E01004789D42D5BCB5CF60DD065F489F5BF (void);
// 0x000006B9 System.Collections.Specialized.NameValueCollection System.Net.WebHeaderCollection::get_InnerCollection()
extern void WebHeaderCollection_get_InnerCollection_m6600DA73765180C37B0B0F802D3B7E4728B1A970 (void);
// 0x000006BA System.Boolean System.Net.WebHeaderCollection::AllowMultiValues(System.String)
extern void WebHeaderCollection_AllowMultiValues_m1CF94807B88DF2D1801D1B5F6322304D1912F3BF (void);
// 0x000006BB System.Void System.Net.WebHeaderCollection::AddInternal(System.String,System.String)
extern void WebHeaderCollection_AddInternal_m6B83E38C739FBD15C7F70C6304C786A1C3BA0B04 (void);
// 0x000006BC System.Void System.Net.WebHeaderCollection::ChangeInternal(System.String,System.String)
extern void WebHeaderCollection_ChangeInternal_m2C0BFAF67320629676F805D70D8A97D50BA03EF0 (void);
// 0x000006BD System.Void System.Net.WebHeaderCollection::RemoveInternal(System.String)
extern void WebHeaderCollection_RemoveInternal_m89528036293926837E8EA5703C1306C1E351B117 (void);
// 0x000006BE System.String System.Net.WebHeaderCollection::CheckBadChars(System.String,System.Boolean)
extern void WebHeaderCollection_CheckBadChars_m5362EEC82635C2EE076C81543FD65130C9EBD1CF (void);
// 0x000006BF System.Boolean System.Net.WebHeaderCollection::ContainsNonAsciiChars(System.String)
extern void WebHeaderCollection_ContainsNonAsciiChars_m6D4E84AB2228EA6CC1AEB89E735832E1E632098D (void);
// 0x000006C0 System.Void System.Net.WebHeaderCollection::ThrowOnRestrictedHeader(System.String)
extern void WebHeaderCollection_ThrowOnRestrictedHeader_mCF5ED2B63250571375A2697DAC28F07EC847256E (void);
// 0x000006C1 System.Void System.Net.WebHeaderCollection::Add(System.String,System.String)
extern void WebHeaderCollection_Add_m55E340EE0B48470ECF8E265973CA7597C72AB98B (void);
// 0x000006C2 System.Void System.Net.WebHeaderCollection::Add(System.String)
extern void WebHeaderCollection_Add_m2001A99A04978C4DE11DAC26540C04C5EF5CC776 (void);
// 0x000006C3 System.Void System.Net.WebHeaderCollection::Set(System.String,System.String)
extern void WebHeaderCollection_Set_m4D27314894A7B6FF691EE3283565BE259530E4AF (void);
// 0x000006C4 System.Void System.Net.WebHeaderCollection::SetInternal(System.String,System.String)
extern void WebHeaderCollection_SetInternal_mD14173DCCD03148462674B04D44BCD60E32BAEB8 (void);
// 0x000006C5 System.Void System.Net.WebHeaderCollection::Remove(System.String)
extern void WebHeaderCollection_Remove_m83029F49FE7334B485240184FDD82A3BD50040E0 (void);
// 0x000006C6 System.String[] System.Net.WebHeaderCollection::GetValues(System.String)
extern void WebHeaderCollection_GetValues_mA3EF69E80A7C913D4B90D4DD7544B77A89B770D9 (void);
// 0x000006C7 System.String System.Net.WebHeaderCollection::ToString()
extern void WebHeaderCollection_ToString_m247DD774337889E2CA464E8CED9854095342DC43 (void);
// 0x000006C8 System.String System.Net.WebHeaderCollection::GetAsString(System.Collections.Specialized.NameValueCollection,System.Boolean,System.Boolean)
extern void WebHeaderCollection_GetAsString_m880B9E3C60B09BA64F7932C0747F904B96F9E655 (void);
// 0x000006C9 System.Void System.Net.WebHeaderCollection::.ctor()
extern void WebHeaderCollection__ctor_mA79C59CAE93CD777F7B475AE4C74FFAF48892263 (void);
// 0x000006CA System.Void System.Net.WebHeaderCollection::.ctor(System.Net.WebHeaderCollectionType)
extern void WebHeaderCollection__ctor_m6D0F9AAA2847C2E88504774B186D7187253FA463 (void);
// 0x000006CB System.Void System.Net.WebHeaderCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebHeaderCollection__ctor_mFADC65A9D6FFCA2888E38168C8B567F52D9062E2 (void);
// 0x000006CC System.Void System.Net.WebHeaderCollection::OnDeserialization(System.Object)
extern void WebHeaderCollection_OnDeserialization_m51FBDB1DFDC1D0F1F8A1C00F7950AAFF0F9CE278 (void);
// 0x000006CD System.Void System.Net.WebHeaderCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebHeaderCollection_GetObjectData_m4D4C3DA409886C6BD1166CEB9D92A8E45FBF349D (void);
// 0x000006CE System.Void System.Net.WebHeaderCollection::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_mDE59C6575C21AF468D3F2DCC38108B7F03CE2AA6 (void);
// 0x000006CF System.String System.Net.WebHeaderCollection::Get(System.String)
extern void WebHeaderCollection_Get_mEA01975EBD0236751F846A75C3C5F2B303BD1BB7 (void);
// 0x000006D0 System.Collections.IEnumerator System.Net.WebHeaderCollection::GetEnumerator()
extern void WebHeaderCollection_GetEnumerator_mFFE41B272347B4A4555E2D70BF5F70149638A33E (void);
// 0x000006D1 System.Int32 System.Net.WebHeaderCollection::get_Count()
extern void WebHeaderCollection_get_Count_m70B69DE18877ED7AE912CC9E938F7764128A78E4 (void);
// 0x000006D2 System.String System.Net.WebHeaderCollection::Get(System.Int32)
extern void WebHeaderCollection_Get_m32C6BBFEBE1281E17259CDCAD3727139FDF68C83 (void);
// 0x000006D3 System.String System.Net.WebHeaderCollection::GetKey(System.Int32)
extern void WebHeaderCollection_GetKey_m09DC31BEBDCE41D15F8EC7CBF4086E004AA9880A (void);
// 0x000006D4 System.Void System.Net.WebHeaderCollection::.cctor()
extern void WebHeaderCollection__cctor_m2290D17C9F2707674F8A61F126FF082C370E47A4 (void);
// 0x000006D5 System.Int32 System.Net.CaseInsensitiveAscii::GetHashCode(System.Object)
extern void CaseInsensitiveAscii_GetHashCode_m2EE81D1BD0AC3190BAA74A8D4868F92462ABB003 (void);
// 0x000006D6 System.Int32 System.Net.CaseInsensitiveAscii::Compare(System.Object,System.Object)
extern void CaseInsensitiveAscii_Compare_mB139A59D797F341DD9ADFF052699317DE534431B (void);
// 0x000006D7 System.Int32 System.Net.CaseInsensitiveAscii::FastGetHashCode(System.String)
extern void CaseInsensitiveAscii_FastGetHashCode_m306A0F307E96AA75691B6E4EC161157798931F2D (void);
// 0x000006D8 System.Boolean System.Net.CaseInsensitiveAscii::Equals(System.Object,System.Object)
extern void CaseInsensitiveAscii_Equals_m23F3B8CBE2DD24C2240CDB8523A21D63129BAE3E (void);
// 0x000006D9 System.Void System.Net.CaseInsensitiveAscii::.ctor()
extern void CaseInsensitiveAscii__ctor_m5AD65BBE763EC356D1DC91FBFE3B546650978C3B (void);
// 0x000006DA System.Void System.Net.CaseInsensitiveAscii::.cctor()
extern void CaseInsensitiveAscii__cctor_m340B757F0D6162CEB972A564BC2585722C5B5824 (void);
// 0x000006DB System.Object System.Net.WebRequest::get_InternalSyncObject()
extern void WebRequest_get_InternalSyncObject_m055B62E0F040A70A77693A150119F8E69D2A8B4A (void);
// 0x000006DC System.Net.WebRequest System.Net.WebRequest::Create(System.Uri,System.Boolean)
extern void WebRequest_Create_m2129DA94ABDA04A82819FAA8333DBF06CC649C69 (void);
// 0x000006DD System.Net.WebRequest System.Net.WebRequest::Create(System.String)
extern void WebRequest_Create_mE5C98DA6F421133D33D07FDF1858213D5A03DE46 (void);
// 0x000006DE System.Net.WebRequest System.Net.WebRequest::Create(System.Uri)
extern void WebRequest_Create_mCBC2128DC3480F06381E2A4BC49A790BE33E6627 (void);
// 0x000006DF System.Collections.ArrayList System.Net.WebRequest::get_PrefixList()
extern void WebRequest_get_PrefixList_m18B7220898831405D4EC29AB87584BAE6D5B4594 (void);
// 0x000006E0 System.Collections.ArrayList System.Net.WebRequest::PopulatePrefixList()
extern void WebRequest_PopulatePrefixList_m91ABF579F90CEBCBE7A66688E48F06BED84BA725 (void);
// 0x000006E1 System.Void System.Net.WebRequest::.ctor()
extern void WebRequest__ctor_m3ACCFDB5F433B9BC39C8A0E7A6629AB4DFF67B9A (void);
// 0x000006E2 System.Void System.Net.WebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebRequest__ctor_m2F0B777F71CBFCF400006179866A234A1335B0E0 (void);
// 0x000006E3 System.Void System.Net.WebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m590FC06E76B37C3F6D7A6451B41747936064B430 (void);
// 0x000006E4 System.Void System.Net.WebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebRequest_GetObjectData_m544C55A909B7230FB2C133C9C5D3F6A17FB55777 (void);
// 0x000006E5 System.String System.Net.WebRequest::get_Method()
extern void WebRequest_get_Method_m3D66197AFAB65A1A064D264D8DA51774CB6F9579 (void);
// 0x000006E6 System.Void System.Net.WebRequest::set_Method(System.String)
extern void WebRequest_set_Method_m1ABAB5981F530ED5197280E63687909A52CD3162 (void);
// 0x000006E7 System.Uri System.Net.WebRequest::get_RequestUri()
extern void WebRequest_get_RequestUri_mAB1E20F0DEE5B1F22BE3A2CE6682B6FA4E9E5A84 (void);
// 0x000006E8 System.Net.WebHeaderCollection System.Net.WebRequest::get_Headers()
extern void WebRequest_get_Headers_mC47B6F8D64026543A75C48D0850CCC672A34D761 (void);
// 0x000006E9 System.Int64 System.Net.WebRequest::get_ContentLength()
extern void WebRequest_get_ContentLength_m01D8C2A5DCE061CA497F8CD64481467909CB7DF6 (void);
// 0x000006EA System.Net.ICredentials System.Net.WebRequest::get_Credentials()
extern void WebRequest_get_Credentials_m56B8C17ACD3F463C78F8E3FC722CC186212D5454 (void);
// 0x000006EB System.Void System.Net.WebRequest::set_Credentials(System.Net.ICredentials)
extern void WebRequest_set_Credentials_m81896AE75AD64488CEDC292E56D907B1F23CE378 (void);
// 0x000006EC System.Net.IWebProxy System.Net.WebRequest::get_Proxy()
extern void WebRequest_get_Proxy_m3AB9B28EA945A2B8160B2FC44319AE192224A7C8 (void);
// 0x000006ED System.Net.IWebProxy System.Net.WebRequest::get_InternalDefaultWebProxy()
extern void WebRequest_get_InternalDefaultWebProxy_m89CE4F19D2478740536BA55770E5B8311A6B5E92 (void);
// 0x000006EE System.Net.IWebProxy System.Net.WebRequest::get_DefaultWebProxy()
extern void WebRequest_get_DefaultWebProxy_m147C9E334AE2191485F998833473F567AC3EEDCB (void);
// 0x000006EF System.Void System.Net.WebRequest::.cctor()
extern void WebRequest__cctor_m5CCECF10928984BAAE419F70A700495291CA2D5E (void);
// 0x000006F0 System.Net.WebRequest System.Net.WebRequest/DesignerWebRequestCreate::Create(System.Uri)
extern void DesignerWebRequestCreate_Create_m1E2ABC33806741A89F5B85CFC8E512C7C64B0CEE (void);
// 0x000006F1 System.Void System.Net.WebRequest/DesignerWebRequestCreate::.ctor()
extern void DesignerWebRequestCreate__ctor_mFDCC5B7F2462FAC2DB6E7C412FE894F1B00F65AA (void);
// 0x000006F2 System.Uri System.Net.WebRequest/WebProxyWrapperOpaque::GetProxy(System.Uri)
extern void WebProxyWrapperOpaque_GetProxy_mF87834EC1C4105EC385C9A489FD2107777F206E5 (void);
// 0x000006F3 System.Boolean System.Net.WebRequest/WebProxyWrapperOpaque::IsBypassed(System.Uri)
extern void WebProxyWrapperOpaque_IsBypassed_m8AFC7BB3B774D3C5E8E17A88AD09EC00BFE61E2D (void);
// 0x000006F4 System.Net.ICredentials System.Net.WebRequest/WebProxyWrapperOpaque::get_Credentials()
extern void WebProxyWrapperOpaque_get_Credentials_mA88118C20458E1BAD06301FEB527377D15910402 (void);
// 0x000006F5 System.Net.WebProxy System.Net.WebRequest/WebProxyWrapper::get_WebProxy()
extern void WebProxyWrapper_get_WebProxy_m64E0A52B9081B75ACED10724A2805F6ECE3C89AB (void);
// 0x000006F6 System.Void System.Net.WebResponse::.ctor()
extern void WebResponse__ctor_mDD72EDEB98B8AFA20480EE261E74EAAE10CB63E0 (void);
// 0x000006F7 System.Void System.Net.WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebResponse__ctor_m601D6CE25BA0FAA154142B9AA7A5E188409B0D1C (void);
// 0x000006F8 System.Void System.Net.WebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m3B1AF8144A5E9368310A362667CC0870C77BA547 (void);
// 0x000006F9 System.Void System.Net.WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebResponse_GetObjectData_mD4CAAA6BABDE03797E98E93985D3096630CDEC10 (void);
// 0x000006FA System.Void System.Net.WebResponse::Close()
extern void WebResponse_Close_mB7B37D2ED64992C6D94AE2547420DFE340C4BC08 (void);
// 0x000006FB System.Void System.Net.WebResponse::Dispose()
extern void WebResponse_Dispose_m4C4678024B930AD077E47EAD64B426D4F03F029A (void);
// 0x000006FC System.Void System.Net.WebResponse::Dispose(System.Boolean)
extern void WebResponse_Dispose_mD8EDE43B78CFB8B192059E92EFBE98E459A96E40 (void);
// 0x000006FD System.Void System.Net.BufferOffsetSize::.ctor(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern void BufferOffsetSize__ctor_m34DF650AB658A85943BBEDBB22887D2C3209D9E3 (void);
// 0x000006FE System.Void System.Net.BufferOffsetSize::.ctor(System.Byte[],System.Boolean)
extern void BufferOffsetSize__ctor_m57DD63EDCC7C4DD3350B00DF86B3F69C8850D996 (void);
// 0x000006FF System.Void System.Net.HeaderParser::.ctor(System.Object,System.IntPtr)
extern void HeaderParser__ctor_m472893312CE6499CF0B133E43208D60D8F045642 (void);
// 0x00000700 System.String[] System.Net.HeaderParser::Invoke(System.String)
extern void HeaderParser_Invoke_m3A5FC4D267C12585E1869DFB57D913613380D813 (void);
// 0x00000701 System.IAsyncResult System.Net.HeaderParser::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern void HeaderParser_BeginInvoke_mF6C5E5287D994844EC4A01DBAA7B579334A1B157 (void);
// 0x00000702 System.String[] System.Net.HeaderParser::EndInvoke(System.IAsyncResult)
extern void HeaderParser_EndInvoke_mD28C9565D9B34BF5E04ED602DFA2F0ED3794820B (void);
// 0x00000703 System.Void System.Net.HeaderInfo::.ctor(System.String,System.Boolean,System.Boolean,System.Boolean,System.Net.HeaderParser)
extern void HeaderInfo__ctor_m9B515C741E98093173780BC724C0AD044B395393 (void);
// 0x00000704 System.String[] System.Net.HeaderInfoTable::ParseSingleValue(System.String)
extern void HeaderInfoTable_ParseSingleValue_m66383EA99A42C133C63A6568D5BAB52D7A3043DF (void);
// 0x00000705 System.String[] System.Net.HeaderInfoTable::ParseMultiValue(System.String)
extern void HeaderInfoTable_ParseMultiValue_mE007CE0399B5999CFA8C530CA8AB5B9C17C6564C (void);
// 0x00000706 System.Void System.Net.HeaderInfoTable::.cctor()
extern void HeaderInfoTable__cctor_m69E892F08E1F5EE2FE205017FC6D0C72B5384F82 (void);
// 0x00000707 System.Net.HeaderInfo System.Net.HeaderInfoTable::get_Item(System.String)
extern void HeaderInfoTable_get_Item_m13EB127C357A9276F74C65C0EEDEA3A1EF5E8D5F (void);
// 0x00000708 System.Void System.Net.HeaderInfoTable::.ctor()
extern void HeaderInfoTable__ctor_mA44867F178E91B5FB9540ECB02A129F2868FC82E (void);
// 0x00000709 System.Void System.Net.ICloseEx::CloseEx(System.Net.CloseExState)
// 0x0000070A System.Net.LazyAsyncResult/ThreadContext System.Net.LazyAsyncResult::get_CurrentThreadContext()
extern void LazyAsyncResult_get_CurrentThreadContext_m612DA3FE475024D1FD9FA7DF7AF92CAEE96AE3EC (void);
// 0x0000070B System.Object System.Net.LazyAsyncResult::get_AsyncObject()
extern void LazyAsyncResult_get_AsyncObject_m8ACB19F0E9711613E0984A2605A7CD3B7ACEE37C (void);
// 0x0000070C System.Void System.Net.LazyAsyncResult::ProtectedInvokeCallback(System.Object,System.IntPtr)
extern void LazyAsyncResult_ProtectedInvokeCallback_mB9317AC9B30205D1D84B82F8F4C0674928EFC19E (void);
// 0x0000070D System.Void System.Net.LazyAsyncResult::InvokeCallback(System.Object)
extern void LazyAsyncResult_InvokeCallback_m3AD664A494F2821C00A7E07BCE9B4FD63A2BC369 (void);
// 0x0000070E System.Void System.Net.LazyAsyncResult::Complete(System.IntPtr)
extern void LazyAsyncResult_Complete_m65AC5DCDD0B1EAF8702194A03D24B415F99A6E49 (void);
// 0x0000070F System.Void System.Net.LazyAsyncResult::WorkerThreadComplete(System.Object)
extern void LazyAsyncResult_WorkerThreadComplete_m5F2BECD93B121A2BDFBE3AD9C8E60460FA1C7ACC (void);
// 0x00000710 System.Void System.Net.LazyAsyncResult::Cleanup()
extern void LazyAsyncResult_Cleanup_m5382F96236C1F0ED05304E68A0136C19AC870AB5 (void);
// 0x00000711 System.Void System.Net.LazyAsyncResult/ThreadContext::.ctor()
extern void ThreadContext__ctor_mE89CF3AF57457840698C5046CD32EF8B02CDC40A (void);
// 0x00000712 System.String System.Net.NetRes::GetWebStatusString(System.String,System.Net.WebExceptionStatus)
extern void NetRes_GetWebStatusString_m0D5F79A08AD2C1F946FB394B0BDAAABF86DFDF50 (void);
// 0x00000713 System.Void System.Net.TimerThread::.cctor()
extern void TimerThread__cctor_m936A5AAF1CC2EE5BD954925D7AFEFAC76721DA5E (void);
// 0x00000714 System.Net.TimerThread/Queue System.Net.TimerThread::CreateQueue(System.Int32)
extern void TimerThread_CreateQueue_mAC5BC0D2F866894633C32F3561A0668452893D09 (void);
// 0x00000715 System.Void System.Net.TimerThread::StopTimerThread()
extern void TimerThread_StopTimerThread_m91D143975E5942416F277D6910DFCCAD80632A43 (void);
// 0x00000716 System.Void System.Net.TimerThread::OnDomainUnload(System.Object,System.EventArgs)
extern void TimerThread_OnDomainUnload_m2B48321A87ADB0751E57C2608AA3ADFE4188CA9C (void);
// 0x00000717 System.Void System.Net.TimerThread/Queue::.ctor(System.Int32)
extern void Queue__ctor_mC89D29D512FC164F6B5A4C9FD5DE574328FC99CC (void);
// 0x00000718 System.Void System.Net.TimerThread/Timer::.ctor(System.Int32)
extern void Timer__ctor_m4540393393A01B07D912FFFD47EE37BAD97D8DD0 (void);
// 0x00000719 System.Boolean System.Net.TimerThread/Timer::Cancel()
// 0x0000071A System.Void System.Net.TimerThread/Timer::Dispose()
extern void Timer_Dispose_m14AC12E37E52871D2FEC402F8D2F78BF8101C32B (void);
// 0x0000071B System.Void System.Net.TimerThread/Callback::.ctor(System.Object,System.IntPtr)
extern void Callback__ctor_m6DECF0EA1ECE944021384E1D04CF4931C89353FC (void);
// 0x0000071C System.Void System.Net.TimerThread/Callback::Invoke(System.Net.TimerThread/Timer,System.Int32,System.Object)
extern void Callback_Invoke_m5CF1B13973F36016D5A95A11766B53018849FC0B (void);
// 0x0000071D System.IAsyncResult System.Net.TimerThread/Callback::BeginInvoke(System.Net.TimerThread/Timer,System.Int32,System.Object,System.AsyncCallback,System.Object)
extern void Callback_BeginInvoke_mAE44EE87C3A42CE9EE94B437D3FCB03C743CF2F9 (void);
// 0x0000071E System.Void System.Net.TimerThread/Callback::EndInvoke(System.IAsyncResult)
extern void Callback_EndInvoke_mD9EB2BA9D74B86A5A84275D63BAFD884CA639C7E (void);
// 0x0000071F System.Void System.Net.TimerThread/TimerQueue::.ctor(System.Int32)
extern void TimerQueue__ctor_m43203205D39CB2175B0E5832A359AFB952AEA9D6 (void);
// 0x00000720 System.Void System.Net.TimerThread/InfiniteTimerQueue::.ctor()
extern void InfiniteTimerQueue__ctor_m0615ECE53786982AB9CE17517821090EAA4875FE (void);
// 0x00000721 System.Void System.Net.TimerThread/TimerNode::.ctor()
extern void TimerNode__ctor_mD6B740263A99B51737831DE7F0400AF236C5A39E (void);
// 0x00000722 System.Net.TimerThread/TimerNode System.Net.TimerThread/TimerNode::get_Next()
extern void TimerNode_get_Next_m3960D4407C100E026C6F7EF316B07F8BB2C26517 (void);
// 0x00000723 System.Void System.Net.TimerThread/TimerNode::set_Next(System.Net.TimerThread/TimerNode)
extern void TimerNode_set_Next_m0C74401BC133D94AEDB40E1CB0A24F2C1F52FC68 (void);
// 0x00000724 System.Net.TimerThread/TimerNode System.Net.TimerThread/TimerNode::get_Prev()
extern void TimerNode_get_Prev_m6A2D3FA9F1ED71F25B05D72A81DB7A8B368AAA62 (void);
// 0x00000725 System.Void System.Net.TimerThread/TimerNode::set_Prev(System.Net.TimerThread/TimerNode)
extern void TimerNode_set_Prev_m3D69D7AED0406834FFFFBE21804DF522B8FB14B6 (void);
// 0x00000726 System.Boolean System.Net.TimerThread/TimerNode::Cancel()
extern void TimerNode_Cancel_m6EB166DFE1E2E01BBBAA1FA4C35457DB111D951B (void);
// 0x00000727 System.Void System.Net.EmptyWebProxy::.ctor()
extern void EmptyWebProxy__ctor_m5EC0BA8242BECE3F0E67CC143135CBE8670BFFFD (void);
// 0x00000728 System.Uri System.Net.EmptyWebProxy::GetProxy(System.Uri)
extern void EmptyWebProxy_GetProxy_mB0FAC789C4DD283E803F72B38F22ED5EA25535AC (void);
// 0x00000729 System.Boolean System.Net.EmptyWebProxy::IsBypassed(System.Uri)
extern void EmptyWebProxy_IsBypassed_m9A64B556EC9A174EBF75652A1C274A437E1CC99B (void);
// 0x0000072A System.Net.ICredentials System.Net.EmptyWebProxy::get_Credentials()
extern void EmptyWebProxy_get_Credentials_mFBF67D584C61BB83BC39D8CFD6B5AA473E255692 (void);
// 0x0000072B System.Void System.Net.Cookie::.ctor()
extern void Cookie__ctor_m4C7C1E7E0DCE68AC143F44630AEE2D385480DE48 (void);
// 0x0000072C System.String System.Net.Cookie::get_Domain()
extern void Cookie_get_Domain_m278E7B0428D3194F5C38175134F7C3D5788A69FE (void);
// 0x0000072D System.String System.Net.Cookie::get__Domain()
extern void Cookie_get__Domain_m3B7DDACA37D03838CA3C94460AA300D4E2D81C7C (void);
// 0x0000072E System.Boolean System.Net.Cookie::get_Expired()
extern void Cookie_get_Expired_mB77802DB1DD4FD43D23A582009833238D50C23A5 (void);
// 0x0000072F System.String System.Net.Cookie::get_Name()
extern void Cookie_get_Name_mC233F7C69F3A7FE643C75F4289BE2F7A8E84D8FD (void);
// 0x00000730 System.String System.Net.Cookie::get_Path()
extern void Cookie_get_Path_m8B56312681A7D76C09C012AE84004D2FE15AFE2A (void);
// 0x00000731 System.String System.Net.Cookie::get__Path()
extern void Cookie_get__Path_m78788CA8B87C93C7C22828F97BA8F1AF022908B1 (void);
// 0x00000732 System.Boolean System.Net.Cookie::get_Plain()
extern void Cookie_get_Plain_m640F05F7E1F4600F56769459C1FE15548512E2E2 (void);
// 0x00000733 System.Int32[] System.Net.Cookie::get_PortList()
extern void Cookie_get_PortList_m4BD9A535C0DCB224F6093FA89FF336C83A0836CA (void);
// 0x00000734 System.String System.Net.Cookie::get__Port()
extern void Cookie_get__Port_m867588A59661398C9AC64EB223387B42048D280A (void);
// 0x00000735 System.Boolean System.Net.Cookie::get_Secure()
extern void Cookie_get_Secure_m5ED475362972AF2648E51D7796C17D82C70B523A (void);
// 0x00000736 System.String System.Net.Cookie::get_Value()
extern void Cookie_get_Value_mEFF804AC5A0D1252E626903FE0B45706D4F3A453 (void);
// 0x00000737 System.Net.CookieVariant System.Net.Cookie::get_Variant()
extern void Cookie_get_Variant_m5453D977C7AAF6B634E5B31CB2DE7D66BD323551 (void);
// 0x00000738 System.Int32 System.Net.Cookie::get_Version()
extern void Cookie_get_Version_m061640FE8C0F64A0FA003BF8D3391CC1FCD153A4 (void);
// 0x00000739 System.String System.Net.Cookie::get__Version()
extern void Cookie_get__Version_mE3C0E366E86DFAAB2EEA66561B74C4E8B284B854 (void);
// 0x0000073A System.Collections.IComparer System.Net.Cookie::GetComparer()
extern void Cookie_GetComparer_mF29897F68052CEE3A4277AD0DC675B6E1D4368E6 (void);
// 0x0000073B System.Boolean System.Net.Cookie::Equals(System.Object)
extern void Cookie_Equals_mB07B0CC36C9FA37BD7F8DE25DD5BF11BEF65B7D4 (void);
// 0x0000073C System.Int32 System.Net.Cookie::GetHashCode()
extern void Cookie_GetHashCode_mC355FA3D045BA3A216583AEA99C8D448A45215BE (void);
// 0x0000073D System.String System.Net.Cookie::ToString()
extern void Cookie_ToString_m50C477C29C14B822B6867B4B6F877BC0120EFC4E (void);
// 0x0000073E System.Void System.Net.Cookie::.cctor()
extern void Cookie__cctor_m5D1DAACFDA2803E0ADE92204CBE5A1AA5F9C038B (void);
// 0x0000073F System.String System.Net.CookieParser::CheckQuoted(System.String)
extern void CookieParser_CheckQuoted_mF37A111F2850B5D5C111ED2A5676B260E1DBD1C3 (void);
// 0x00000740 System.Int32 System.Net.Comparer::System.Collections.IComparer.Compare(System.Object,System.Object)
extern void Comparer_System_Collections_IComparer_Compare_m83E8F9A164E78CC74ADA62FF0EB4F7AEBE08B902 (void);
// 0x00000741 System.Void System.Net.Comparer::.ctor()
extern void Comparer__ctor_mB9048FB4377C7FE872A4ACD9A0173FEDA37554F3 (void);
// 0x00000742 System.Void System.Net.CookieCollection::.ctor()
extern void CookieCollection__ctor_m6F7AC5879C514DAD6EE967A7FC18C3F28DAC4B11 (void);
// 0x00000743 System.Net.Cookie System.Net.CookieCollection::get_Item(System.Int32)
extern void CookieCollection_get_Item_m811D5D88284ADADB6200D9B6CE5BE74B7324A597 (void);
// 0x00000744 System.Int32 System.Net.CookieCollection::get_Count()
extern void CookieCollection_get_Count_m329458A1D5426014346F371D1B86AB4678FF34AE (void);
// 0x00000745 System.Boolean System.Net.CookieCollection::get_IsSynchronized()
extern void CookieCollection_get_IsSynchronized_mF0FA5ADB5DDFC0DA4FAE1D06BE5F0A28A35309DD (void);
// 0x00000746 System.Object System.Net.CookieCollection::get_SyncRoot()
extern void CookieCollection_get_SyncRoot_m4761E1233AAB107D61A409A106A117751A42A6FF (void);
// 0x00000747 System.Void System.Net.CookieCollection::CopyTo(System.Array,System.Int32)
extern void CookieCollection_CopyTo_m1C053D1F041D227716D6D7D472A31B9E65A1C871 (void);
// 0x00000748 System.DateTime System.Net.CookieCollection::TimeStamp(System.Net.CookieCollection/Stamp)
extern void CookieCollection_TimeStamp_m453133C0783D40B58F511208B428765420DD6A9A (void);
// 0x00000749 System.Boolean System.Net.CookieCollection::get_IsOtherVersionSeen()
extern void CookieCollection_get_IsOtherVersionSeen_m1C659BBDF60CA447C3B5576BC4FCCAEBCCCBECF4 (void);
// 0x0000074A System.Int32 System.Net.CookieCollection::InternalAdd(System.Net.Cookie,System.Boolean)
extern void CookieCollection_InternalAdd_m0BB034B31D41891EA47F068A6E50CDE3DF510AA2 (void);
// 0x0000074B System.Void System.Net.CookieCollection::RemoveAt(System.Int32)
extern void CookieCollection_RemoveAt_mE2CB87607732DF13B534A0808EFF9726F3213824 (void);
// 0x0000074C System.Collections.IEnumerator System.Net.CookieCollection::GetEnumerator()
extern void CookieCollection_GetEnumerator_m98DE8A53502E0AA6C428F564D6EDE38A007D22C9 (void);
// 0x0000074D System.Void System.Net.CookieCollection/CookieCollectionEnumerator::.ctor(System.Net.CookieCollection)
extern void CookieCollectionEnumerator__ctor_m1171DDC5103451BF97CD71F062D1D46F73A82E24 (void);
// 0x0000074E System.Object System.Net.CookieCollection/CookieCollectionEnumerator::System.Collections.IEnumerator.get_Current()
extern void CookieCollectionEnumerator_System_Collections_IEnumerator_get_Current_mAA94D3E326A7361A173810EF7FEF6ED5C5050E18 (void);
// 0x0000074F System.Boolean System.Net.CookieCollection/CookieCollectionEnumerator::System.Collections.IEnumerator.MoveNext()
extern void CookieCollectionEnumerator_System_Collections_IEnumerator_MoveNext_m654F79FEDDFEE6946815223DF2EFFF20B25F5871 (void);
// 0x00000750 System.Void System.Net.CookieCollection/CookieCollectionEnumerator::System.Collections.IEnumerator.Reset()
extern void CookieCollectionEnumerator_System_Collections_IEnumerator_Reset_m303622E6840FA17ADFF40CC74DDAC1EB5480C3CC (void);
// 0x00000751 System.Void System.Net.HeaderVariantInfo::.ctor(System.String,System.Net.CookieVariant)
extern void HeaderVariantInfo__ctor_mB0775C718895238F3289605480ECD66D13DE19C0 (void);
// 0x00000752 System.Void System.Net.CookieContainer::.ctor()
extern void CookieContainer__ctor_m50F677B7149D3D40B4D6ADB3DA9F27CF8434ECC2 (void);
// 0x00000753 System.Void System.Net.CookieContainer::AddRemoveDomain(System.String,System.Net.PathList)
extern void CookieContainer_AddRemoveDomain_m86DA545D737B59A516754DFCFCA164C5F4F728E0 (void);
// 0x00000754 System.Net.CookieCollection System.Net.CookieContainer::InternalGetCookies(System.Uri)
extern void CookieContainer_InternalGetCookies_mEADD88B29299A160CA2AD96B5E2C6A712DE0DFF4 (void);
// 0x00000755 System.Void System.Net.CookieContainer::BuildCookieCollectionFromDomainMatches(System.Uri,System.Boolean,System.Int32,System.Net.CookieCollection,System.Collections.Generic.List`1<System.String>,System.Boolean)
extern void CookieContainer_BuildCookieCollectionFromDomainMatches_mA12B074CC288FE102BEB328B853F71267E3B3A08 (void);
// 0x00000756 System.Void System.Net.CookieContainer::MergeUpdateCollections(System.Net.CookieCollection,System.Net.CookieCollection,System.Int32,System.Boolean,System.Boolean)
extern void CookieContainer_MergeUpdateCollections_m2DF45A2DA702AB04EFA265075198378B217A1E76 (void);
// 0x00000757 System.String System.Net.CookieContainer::GetCookieHeader(System.Uri)
extern void CookieContainer_GetCookieHeader_m56FF8245FC28A3C8583AE0EEE8CF43A081D5CAB3 (void);
// 0x00000758 System.String System.Net.CookieContainer::GetCookieHeader(System.Uri,System.String&)
extern void CookieContainer_GetCookieHeader_m45B138BEAA391F95017893AF9F91241492EB2D74 (void);
// 0x00000759 System.Void System.Net.CookieContainer::.cctor()
extern void CookieContainer__cctor_mEA85B5B5FBA76FD2AC91B1503B16B14E16A7477D (void);
// 0x0000075A System.Void System.Net.PathList::.ctor()
extern void PathList__ctor_mE7C40201BD66EA2737CFC92FF7B94CF442444778 (void);
// 0x0000075B System.Int32 System.Net.PathList::get_Count()
extern void PathList_get_Count_mF95C0C66B73A66E8EDA9CFFB18CBE115712A37FF (void);
// 0x0000075C System.Object System.Net.PathList::get_Item(System.String)
extern void PathList_get_Item_mB2E15B70CA415EF1497A3AF13486AF346D25CC27 (void);
// 0x0000075D System.Collections.IEnumerator System.Net.PathList::GetEnumerator()
extern void PathList_GetEnumerator_mEB480CB2359B7EA7639EE292658F7AC5B17AE998 (void);
// 0x0000075E System.Object System.Net.PathList::get_SyncRoot()
extern void PathList_get_SyncRoot_m28F8BCEC0CDF4514A9E43BD1E57F1809732377E0 (void);
// 0x0000075F System.Int32 System.Net.PathList/PathListComparer::System.Collections.IComparer.Compare(System.Object,System.Object)
extern void PathListComparer_System_Collections_IComparer_Compare_mBDBC7284F34175B446FBEC8FB6CB2BF19440300E (void);
// 0x00000760 System.Void System.Net.PathList/PathListComparer::.ctor()
extern void PathListComparer__ctor_mB454528A2D15B340AC86950FEEFF3A459DEC9ED7 (void);
// 0x00000761 System.Void System.Net.PathList/PathListComparer::.cctor()
extern void PathListComparer__cctor_m5835CA5438E4F095C6C5179F7E6958D909417C47 (void);
// 0x00000762 System.Void System.Net.FileWebRequest::.ctor(System.Uri)
extern void FileWebRequest__ctor_m3BD0B632AAAA9A6314A48EAEA261D6C49A29CC87 (void);
// 0x00000763 System.Void System.Net.FileWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebRequest__ctor_m4D6FACD86407B7910DCB5708F13796534DE54DFD (void);
// 0x00000764 System.Void System.Net.FileWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m1DC998628B76190A2F606178371548237516B256 (void);
// 0x00000765 System.Void System.Net.FileWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebRequest_GetObjectData_mCCC968CB9501E785DDF897B35DCD0848931D1582 (void);
// 0x00000766 System.Boolean System.Net.FileWebRequest::get_Aborted()
extern void FileWebRequest_get_Aborted_m687CEE80919037332B61F2C449D9EBA8A4E7C587 (void);
// 0x00000767 System.Int64 System.Net.FileWebRequest::get_ContentLength()
extern void FileWebRequest_get_ContentLength_mA585FBC6AA89C75AE2CA31B7772B6B79FF947BFB (void);
// 0x00000768 System.Net.ICredentials System.Net.FileWebRequest::get_Credentials()
extern void FileWebRequest_get_Credentials_m8A2EDDBA7E744CA6BA1EC57FF9DA28334580E053 (void);
// 0x00000769 System.Void System.Net.FileWebRequest::set_Credentials(System.Net.ICredentials)
extern void FileWebRequest_set_Credentials_m7B6AD7ACB7F546E44A457635B7D73DF60D250E95 (void);
// 0x0000076A System.Net.WebHeaderCollection System.Net.FileWebRequest::get_Headers()
extern void FileWebRequest_get_Headers_mFB491D17A71A758854D553EDD83A64365E548AA9 (void);
// 0x0000076B System.String System.Net.FileWebRequest::get_Method()
extern void FileWebRequest_get_Method_mEB2029DBA3586E382F337C61523373012C260946 (void);
// 0x0000076C System.Void System.Net.FileWebRequest::set_Method(System.String)
extern void FileWebRequest_set_Method_mE9043FE40042A93E8D14A467CE5A1ECB9C096D08 (void);
// 0x0000076D System.Net.IWebProxy System.Net.FileWebRequest::get_Proxy()
extern void FileWebRequest_get_Proxy_mB26B794EEDD436C68591238269545CEE81676911 (void);
// 0x0000076E System.Uri System.Net.FileWebRequest::get_RequestUri()
extern void FileWebRequest_get_RequestUri_m14BCBE2D50BA7E262394DC971D84B3FD30E3D7D2 (void);
// 0x0000076F System.Void System.Net.FileWebRequest::GetRequestStreamCallback(System.Object)
extern void FileWebRequest_GetRequestStreamCallback_mDCB6B61A94DA789EFBFD85D837FE811FC4B839F8 (void);
// 0x00000770 System.Void System.Net.FileWebRequest::GetResponseCallback(System.Object)
extern void FileWebRequest_GetResponseCallback_m08D402EDE533C5A0ED64A8CD469F3647C00D8BED (void);
// 0x00000771 System.Void System.Net.FileWebRequest::UnblockReader()
extern void FileWebRequest_UnblockReader_m71733AFB64CCAE0043F76194EE532B48ADB3E955 (void);
// 0x00000772 System.Void System.Net.FileWebRequest::.cctor()
extern void FileWebRequest__cctor_m2FF4B6192F42060BFE9B6D793000967A2CE95DA7 (void);
// 0x00000773 System.Void System.Net.FileWebRequestCreator::.ctor()
extern void FileWebRequestCreator__ctor_mC9309A7E8AEF2B32E4596F499FA2C1AFF26FCC8B (void);
// 0x00000774 System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern void FileWebRequestCreator_Create_m4A009337FA6E4113EB05A0D9B8A68DC562F6CD11 (void);
// 0x00000775 System.Void System.Net.FileWebStream::.ctor(System.Net.FileWebRequest,System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern void FileWebStream__ctor_mAC5E31F61865C55A0BCB1EAB7CA5D6EB1E4E9536 (void);
// 0x00000776 System.Void System.Net.FileWebStream::.ctor(System.Net.FileWebRequest,System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean)
extern void FileWebStream__ctor_m5E2038F8FB3B8C052A66B461A4AEAD763EC72523 (void);
// 0x00000777 System.Void System.Net.FileWebStream::Dispose(System.Boolean)
extern void FileWebStream_Dispose_m3761A400830205DF54493ED2E0B5479ACE5E09D3 (void);
// 0x00000778 System.Void System.Net.FileWebStream::System.Net.ICloseEx.CloseEx(System.Net.CloseExState)
extern void FileWebStream_System_Net_ICloseEx_CloseEx_mD34DB9FF876566D364B3AC2720DAA67BEFB5494F (void);
// 0x00000779 System.Int32 System.Net.FileWebStream::Read(System.Byte[],System.Int32,System.Int32)
extern void FileWebStream_Read_m99E1D1597138ADD46D0546BD9C963F8EF4345D62 (void);
// 0x0000077A System.Void System.Net.FileWebStream::Write(System.Byte[],System.Int32,System.Int32)
extern void FileWebStream_Write_mAB0472EB14D00B4BA51EA364A99E051D2FA8F2E6 (void);
// 0x0000077B System.IAsyncResult System.Net.FileWebStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void FileWebStream_BeginRead_mFF1D75843A5A82C1034547CC48968C8C05145ED7 (void);
// 0x0000077C System.Int32 System.Net.FileWebStream::EndRead(System.IAsyncResult)
extern void FileWebStream_EndRead_m6C8AC6E7D6FB618390B27853BF32C70C0E6258E1 (void);
// 0x0000077D System.IAsyncResult System.Net.FileWebStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void FileWebStream_BeginWrite_m5CDA5FF4DC3E9DBFD6FD4E091860247D3921A088 (void);
// 0x0000077E System.Void System.Net.FileWebStream::EndWrite(System.IAsyncResult)
extern void FileWebStream_EndWrite_m2A4EBAF99FA675BA834D20C7D23F1925A37510AF (void);
// 0x0000077F System.Void System.Net.FileWebStream::CheckError()
extern void FileWebStream_CheckError_m5373399E1C7A5036852A3495F5B3C04640BB0F51 (void);
// 0x00000780 System.Void System.Net.FileWebResponse::.ctor(System.Net.FileWebRequest,System.Uri,System.IO.FileAccess,System.Boolean)
extern void FileWebResponse__ctor_m937A38D5CC20434EEC6F27DE580B8F7418FD6B46 (void);
// 0x00000781 System.Void System.Net.FileWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebResponse__ctor_m31F0F51C0F5CDCF773499E41FD29C002C230B483 (void);
// 0x00000782 System.Void System.Net.FileWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m50547639BE9A06AF71C19D4F6E2B7C9DF3897DAC (void);
// 0x00000783 System.Void System.Net.FileWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebResponse_GetObjectData_m62702AE7EAE842946B45BE26D5E492D9598FC920 (void);
// 0x00000784 System.Void System.Net.FileWebResponse::Close()
extern void FileWebResponse_Close_mA4570F39B91740DFF95E0050E9C13BC5C527FC84 (void);
// 0x00000785 System.Void System.Net.FileWebResponse::System.Net.ICloseEx.CloseEx(System.Net.CloseExState)
extern void FileWebResponse_System_Net_ICloseEx_CloseEx_mF5CE52E9F3E81C407E93786BAC6018B597C7DA00 (void);
// 0x00000786 System.Uri System.Net.IWebProxy::GetProxy(System.Uri)
// 0x00000787 System.Boolean System.Net.IWebProxy::IsBypassed(System.Uri)
// 0x00000788 System.Net.ICredentials System.Net.IWebProxy::get_Credentials()
// 0x00000789 System.Void System.Net.WebProxy::.ctor()
extern void WebProxy__ctor_m9DAD546F80ACD9479C786D5C66CF841B7D2F31E8 (void);
// 0x0000078A System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern void WebProxy__ctor_m88D1B551CA157B4190F7082F3496388DB41B892C (void);
// 0x0000078B System.Net.ICredentials System.Net.WebProxy::get_Credentials()
extern void WebProxy_get_Credentials_m457E5BD941E4AEA6DB65859123F33B3C1614C68A (void);
// 0x0000078C System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern void WebProxy_get_UseDefaultCredentials_m03D6385937D10D5E2B971852E81196FC1281CDC6 (void);
// 0x0000078D System.Void System.Net.WebProxy::set_UseDefaultCredentials(System.Boolean)
extern void WebProxy_set_UseDefaultCredentials_mBD6A789873DFF09C584F1E1F78F2D286D6FA990C (void);
// 0x0000078E System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern void WebProxy_GetProxy_m8FDE265E6B9973E022EA8970C9B1DAD0B2CCC25F (void);
// 0x0000078F System.Void System.Net.WebProxy::UpdateRegExList(System.Boolean)
extern void WebProxy_UpdateRegExList_mB499E94B5CB70B08BBFD2D9DA9EFC2B128CC26DD (void);
// 0x00000790 System.Boolean System.Net.WebProxy::IsMatchInBypassList(System.Uri)
extern void WebProxy_IsMatchInBypassList_m065FB89DE3BC59171195D70D96B4D36733189226 (void);
// 0x00000791 System.Boolean System.Net.WebProxy::IsLocal(System.Uri)
extern void WebProxy_IsLocal_m502074ED102B252CF88AF725230AA3FA2D97A21F (void);
// 0x00000792 System.Boolean System.Net.WebProxy::IsLocalInProxyHash(System.Uri)
extern void WebProxy_IsLocalInProxyHash_m7F46FAA47C841E1E0CD0127973C45EDD72DCFD7E (void);
// 0x00000793 System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern void WebProxy_IsBypassed_m8F90EF89CB55CAE69CA92B25A737849F0C2B6449 (void);
// 0x00000794 System.Boolean System.Net.WebProxy::IsBypassedManual(System.Uri)
extern void WebProxy_IsBypassedManual_mB2A24F5F65C1D5E4C7F9312D09C6A6DB4A7B6F1E (void);
// 0x00000795 System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebProxy__ctor_m1C58101578A4CE7D939641C97BFD8E0203AD3F14 (void);
// 0x00000796 System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m55E9EC6188F26F2762C669DEB2BAFF297BB98787 (void);
// 0x00000797 System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebProxy_GetObjectData_m6F158918E51572F668D8E13E4271E8A3D8C6E70E (void);
// 0x00000798 System.Net.AutoWebProxyScriptEngine System.Net.WebProxy::get_ScriptEngine()
extern void WebProxy_get_ScriptEngine_mF28F919839AC16984BAF19EF7884DDADEC1186E4 (void);
// 0x00000799 System.Net.IWebProxy System.Net.WebProxy::CreateDefaultProxy()
extern void WebProxy_CreateDefaultProxy_m2CE3F99857BF09FB68723652CAF3C1FC7BE3EAAC (void);
// 0x0000079A System.Void System.Net.WebProxy::.ctor(System.Boolean)
extern void WebProxy__ctor_m8A57A31FD52C935A1C493001DC32FC2F17166DD2 (void);
// 0x0000079B System.Void System.Net.WebProxy::UnsafeUpdateFromRegistry()
extern void WebProxy_UnsafeUpdateFromRegistry_m520E026082667505E562985E6101A550DD59D0A0 (void);
// 0x0000079C System.Boolean System.Net.WebProxy::GetProxyAuto(System.Uri,System.Uri&)
extern void WebProxy_GetProxyAuto_mF31E6F0E78FABA247E2FC4E69BF9EFD68F2ABF61 (void);
// 0x0000079D System.Boolean System.Net.WebProxy::IsBypassedAuto(System.Uri,System.Boolean&)
extern void WebProxy_IsBypassedAuto_mE488794EEDC4F991CA1DE691217CD89F66C6BEF0 (void);
// 0x0000079E System.Boolean System.Net.WebProxy::AreAllBypassed(System.Collections.Generic.IEnumerable`1<System.String>,System.Boolean)
extern void WebProxy_AreAllBypassed_m3C8E04934E4F6E328C3FE839EBD86BFDA2AB0245 (void);
// 0x0000079F System.Uri System.Net.WebProxy::ProxyUri(System.String)
extern void WebProxy_ProxyUri_m145614BBA0FF5B539412FA91C9F8215E98DF0542 (void);
// 0x000007A0 System.Boolean System.Net.AutoWebProxyScriptEngine::GetProxies(System.Uri,System.Collections.Generic.IList`1<System.String>&)
extern void AutoWebProxyScriptEngine_GetProxies_m37C7A2CAEB8CD280B45518559965B518519D007F (void);
// 0x000007A1 System.Boolean System.Net.AutoWebProxyScriptEngine::GetProxies(System.Uri,System.Collections.Generic.IList`1<System.String>&,System.Int32&)
extern void AutoWebProxyScriptEngine_GetProxies_mE4E0E75E060B5347A17D354889CF1613F3A7FD19 (void);
// 0x000007A2 System.String System.Net.UnsafeNclNativeMethods/SecureStringHelper::CreateString(System.Security.SecureString)
extern void SecureStringHelper_CreateString_m3FB0D27762C3424DD3C9DCC1BB647C8F2F786528 (void);
// 0x000007A3 System.Security.SecureString System.Net.UnsafeNclNativeMethods/SecureStringHelper::CreateSecureString(System.String)
extern void SecureStringHelper_CreateSecureString_mC09D746C7B8EB41AEE8C9AB8525FBCA7C3E63D1F (void);
// 0x000007A4 System.Void System.Net.ServerCertValidationCallback::.ctor(System.Net.Security.RemoteCertificateValidationCallback)
extern void ServerCertValidationCallback__ctor_m74FA8CDC1C3AD2BAE782BFD55EC0AA62A18E7DE0 (void);
// 0x000007A5 System.Void System.Net.ServerCertValidationCallback::Callback(System.Object)
extern void ServerCertValidationCallback_Callback_m70F2E0E1A3C556EFADA5F1AFC56B43A65E0E7FBD (void);
// 0x000007A6 System.Boolean System.Net.ServerCertValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void ServerCertValidationCallback_Invoke_m88F7CC8E8BAE6F501FB49ECE5DC9026120DA3857 (void);
// 0x000007A7 System.Void System.Net.ServerCertValidationCallback/CallbackContext::.ctor(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void CallbackContext__ctor_mC3F2B967B65649E6A2FC12CC30EFDAA5631E1BAC (void);
// 0x000007A8 System.Void System.Net.AuthenticationManager::EnsureModules()
extern void AuthenticationManager_EnsureModules_mC239A7262317E37634854CF88A801D8276961299 (void);
// 0x000007A9 System.Net.Authorization System.Net.AuthenticationManager::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern void AuthenticationManager_Authenticate_m792A86EEA6DF3516B8538EA3DCF2D740735EEF79 (void);
// 0x000007AA System.Net.Authorization System.Net.AuthenticationManager::DoAuthenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern void AuthenticationManager_DoAuthenticate_m47085E3232A36C8A83BB2EB61E5075F2E3ACB69C (void);
// 0x000007AB System.Net.Authorization System.Net.AuthenticationManager::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern void AuthenticationManager_PreAuthenticate_m5C036738DC30669FB5CC79CEFBA53AFC7411BA88 (void);
// 0x000007AC System.Void System.Net.AuthenticationManager::.cctor()
extern void AuthenticationManager__cctor_m7F97917F51C5588A1BE7C13CCACAF7686A013A30 (void);
// 0x000007AD System.Net.Authorization System.Net.BasicClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern void BasicClient_Authenticate_m37A62495D4778CACB7219A67BF608F918EEB86DF (void);
// 0x000007AE System.Byte[] System.Net.BasicClient::GetBytes(System.String)
extern void BasicClient_GetBytes_m07771D492E2A4D3BBF58D7A9BB69E33BC5856D96 (void);
// 0x000007AF System.Net.Authorization System.Net.BasicClient::InternalAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern void BasicClient_InternalAuthenticate_m5D6A6E1F6A34E5475140829CA1771CF96D19A0C8 (void);
// 0x000007B0 System.Net.Authorization System.Net.BasicClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern void BasicClient_PreAuthenticate_m7B6366BC72437E8FD1CC7CFEC6467923D47E7095 (void);
// 0x000007B1 System.String System.Net.BasicClient::get_AuthenticationType()
extern void BasicClient_get_AuthenticationType_m69022B7CF8143DCE86B33E4AD445B87FBC35A5CF (void);
// 0x000007B2 System.Void System.Net.BasicClient::.ctor()
extern void BasicClient__ctor_mF4468AD89FE190EC24CB05F677D56F6F5CF845A6 (void);
// 0x000007B3 System.Void System.Net.BindIPEndPoint::.ctor(System.Object,System.IntPtr)
extern void BindIPEndPoint__ctor_m08EDDE8CB0B988B134F5F90C48D9216FCF2B63EF (void);
// 0x000007B4 System.Net.IPEndPoint System.Net.BindIPEndPoint::Invoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32)
extern void BindIPEndPoint_Invoke_m8462120A7C738076E374FB6ADE447C611DBFD00C (void);
// 0x000007B5 System.IAsyncResult System.Net.BindIPEndPoint::BeginInvoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32,System.AsyncCallback,System.Object)
extern void BindIPEndPoint_BeginInvoke_m929603B81D5FA980FC3535AF6B976BFD1616D4CF (void);
// 0x000007B6 System.Net.IPEndPoint System.Net.BindIPEndPoint::EndInvoke(System.IAsyncResult)
extern void BindIPEndPoint_EndInvoke_m1042D77948C1BB2B26330419F43196C04BA65804 (void);
// 0x000007B7 System.Void System.Net.DigestHeaderParser::.ctor(System.String)
extern void DigestHeaderParser__ctor_m2BB85BC3118799109DB82BC9936678FB70EB4645 (void);
// 0x000007B8 System.String System.Net.DigestHeaderParser::get_Realm()
extern void DigestHeaderParser_get_Realm_m7A6C5539FEEBC93A89DCC2C70B08A690EB8DE78A (void);
// 0x000007B9 System.String System.Net.DigestHeaderParser::get_Opaque()
extern void DigestHeaderParser_get_Opaque_mA478D6BB71ED1C541A8538B776E40BFD5E5F303A (void);
// 0x000007BA System.String System.Net.DigestHeaderParser::get_Nonce()
extern void DigestHeaderParser_get_Nonce_m0B098048A69B904101B59CF9BBFB7917830050F7 (void);
// 0x000007BB System.String System.Net.DigestHeaderParser::get_Algorithm()
extern void DigestHeaderParser_get_Algorithm_mAF999E60ED2FC710180152356C821E73C020E638 (void);
// 0x000007BC System.String System.Net.DigestHeaderParser::get_QOP()
extern void DigestHeaderParser_get_QOP_m84DDAC9875B39CCFD50358EB5F5DEB2E984FDCA1 (void);
// 0x000007BD System.Boolean System.Net.DigestHeaderParser::Parse()
extern void DigestHeaderParser_Parse_m83B7E847A270531897CDB5C36F11C6651F81CEC2 (void);
// 0x000007BE System.Void System.Net.DigestHeaderParser::SkipWhitespace()
extern void DigestHeaderParser_SkipWhitespace_m3E8571723F22D5753DA67A15105049E73E0A691D (void);
// 0x000007BF System.String System.Net.DigestHeaderParser::GetKey()
extern void DigestHeaderParser_GetKey_m811A3CFB648DC4E9B189925DABC9FA23B9AE600F (void);
// 0x000007C0 System.Boolean System.Net.DigestHeaderParser::GetKeywordAndValue(System.String&,System.String&)
extern void DigestHeaderParser_GetKeywordAndValue_mFBE6BBF832C7C3FFF946F9E42BEE3967B870CE84 (void);
// 0x000007C1 System.Void System.Net.DigestHeaderParser::.cctor()
extern void DigestHeaderParser__cctor_m630DB8E20C1EF4AAA4F7450DC40DDA017BC9D7B2 (void);
// 0x000007C2 System.Void System.Net.DigestSession::.cctor()
extern void DigestSession__cctor_mBBB27D612FD5D3DD2C643FF2443A4CACF4A709FD (void);
// 0x000007C3 System.Void System.Net.DigestSession::.ctor()
extern void DigestSession__ctor_m86705710E06B01D8AB4E67E8678020B8F6D836F6 (void);
// 0x000007C4 System.String System.Net.DigestSession::get_Algorithm()
extern void DigestSession_get_Algorithm_mB056CE436F92945C17599BACEB82CD26D764F9D2 (void);
// 0x000007C5 System.String System.Net.DigestSession::get_Realm()
extern void DigestSession_get_Realm_mAEE41831F8979DD3A1A726F97996AD33AB9CB9BA (void);
// 0x000007C6 System.String System.Net.DigestSession::get_Nonce()
extern void DigestSession_get_Nonce_mE32260516AF99A417D41D0901F7633D63238BF87 (void);
// 0x000007C7 System.String System.Net.DigestSession::get_Opaque()
extern void DigestSession_get_Opaque_m2733095B7E5AA77AE4FF0A8A6CB29CFC00D27A98 (void);
// 0x000007C8 System.String System.Net.DigestSession::get_QOP()
extern void DigestSession_get_QOP_mCF3DEC57ED1ACF4A3CC232E5A833ECEB9CA1DD90 (void);
// 0x000007C9 System.String System.Net.DigestSession::get_CNonce()
extern void DigestSession_get_CNonce_mD1E4C92810555F46DEB48EF812F37BB838A4EB82 (void);
// 0x000007CA System.Boolean System.Net.DigestSession::Parse(System.String)
extern void DigestSession_Parse_mA13096948231A1185C90302996A3C38583CF3191 (void);
// 0x000007CB System.String System.Net.DigestSession::HashToHexString(System.String)
extern void DigestSession_HashToHexString_m3856DA5F4C2D59C1C5A9D2C57B53F52FAC75B51E (void);
// 0x000007CC System.String System.Net.DigestSession::HA1(System.String,System.String)
extern void DigestSession_HA1_m81ACDD59D7D2F05C766EA0D6D7CD8AC79C7DAF70 (void);
// 0x000007CD System.String System.Net.DigestSession::HA2(System.Net.HttpWebRequest)
extern void DigestSession_HA2_mBA5886DE2F02B68737F8527DCFB4512C72D4F798 (void);
// 0x000007CE System.String System.Net.DigestSession::Response(System.String,System.String,System.Net.HttpWebRequest)
extern void DigestSession_Response_mFE30BE7E7C54A8631861FEAA5A88BF672D6D7DD5 (void);
// 0x000007CF System.Net.Authorization System.Net.DigestSession::Authenticate(System.Net.WebRequest,System.Net.ICredentials)
extern void DigestSession_Authenticate_m642CC2119FACF39B82D56274E4756CD30030C72B (void);
// 0x000007D0 System.DateTime System.Net.DigestSession::get_LastUse()
extern void DigestSession_get_LastUse_mD8434D7BC1017CED5A88F3F08041B9D20F2C0C83 (void);
// 0x000007D1 System.Collections.Hashtable System.Net.DigestClient::get_Cache()
extern void DigestClient_get_Cache_mE6DCE129979BA8F483D0398FD531C629C90E91D0 (void);
// 0x000007D2 System.Void System.Net.DigestClient::CheckExpired(System.Int32)
extern void DigestClient_CheckExpired_m60DB3E4BB6456E9CAFC1B2DC284D2AB3E6B30A93 (void);
// 0x000007D3 System.Net.Authorization System.Net.DigestClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern void DigestClient_Authenticate_m20471A30D6015DACD842E48A8B2825CC74CE5FE7 (void);
// 0x000007D4 System.Net.Authorization System.Net.DigestClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern void DigestClient_PreAuthenticate_m04217A63BB9AFB52F6D531CBEE9527162A565E59 (void);
// 0x000007D5 System.String System.Net.DigestClient::get_AuthenticationType()
extern void DigestClient_get_AuthenticationType_m8705CB83CDBE79516A939748C02A7BBA287035E3 (void);
// 0x000007D6 System.Void System.Net.DigestClient::.ctor()
extern void DigestClient__ctor_m6EBFE2A034C1CDF5AB71D23C5A1FDFD10D5866D9 (void);
// 0x000007D7 System.Void System.Net.DigestClient::.cctor()
extern void DigestClient__cctor_m876A8081D21A9F62614B6F41F3B20EEED3A75394 (void);
// 0x000007D8 System.Boolean System.Net.Dns::GetHostByName_internal(System.String,System.String&,System.String[]&,System.String[]&,System.Int32)
extern void Dns_GetHostByName_internal_m2FB9C7ECE2D63FCA60EE2271AD0F6B6C171BFD93 (void);
// 0x000007D9 System.Boolean System.Net.Dns::GetHostByAddr_internal(System.String,System.String&,System.String[]&,System.String[]&,System.Int32)
extern void Dns_GetHostByAddr_internal_m1C5730B561811F4E044F0A91AFEBA7EBC5EB914E (void);
// 0x000007DA System.Boolean System.Net.Dns::GetHostName_internal(System.String&)
extern void Dns_GetHostName_internal_mFE7E55E9069ED7F9ECEE9D8A89942FEE229451CC (void);
// 0x000007DB System.Void System.Net.Dns::Error_11001(System.String)
extern void Dns_Error_11001_m4413EE9D94F69A0B12302C4D021F15103A4C0D4A (void);
// 0x000007DC System.Net.IPHostEntry System.Net.Dns::hostent_to_IPHostEntry(System.String,System.String,System.String[],System.String[])
extern void Dns_hostent_to_IPHostEntry_m1D42E0B954F083D77C761D1D514F7AB1AA3258FC (void);
// 0x000007DD System.Net.IPHostEntry System.Net.Dns::GetHostByAddressFromString(System.String,System.Boolean)
extern void Dns_GetHostByAddressFromString_mF14387E76D6C863F94F032677DC5EBE249E6ACCA (void);
// 0x000007DE System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
extern void Dns_GetHostEntry_m251BB12504C0277A9CCD2B33C5C9979CFAB4F6AD (void);
// 0x000007DF System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.Net.IPAddress)
extern void Dns_GetHostEntry_m4C094DDA3A6181386C24046D38B614E303919B5A (void);
// 0x000007E0 System.Net.IPHostEntry System.Net.Dns::GetHostByName(System.String)
extern void Dns_GetHostByName_m56DD7C1149C9931F93FFA8F2AC502B27ADACF6CE (void);
// 0x000007E1 System.String System.Net.Dns::GetHostName()
extern void Dns_GetHostName_m8BF02B75F8EF9723179339212805C5BAF5C4B706 (void);
// 0x000007E2 System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern void FtpRequestCreator_Create_m5CA2D4FFF5B62CB6FCBBCB62603714EB3661160D (void);
// 0x000007E3 System.Void System.Net.FtpRequestCreator::.ctor()
extern void FtpRequestCreator__ctor_m67E38F5A154B50C28349321A03CA0A0A8BA1FC5A (void);
// 0x000007E4 System.Void System.Net.FtpWebRequest::.ctor(System.Uri)
extern void FtpWebRequest__ctor_m1C444C1A347BC343DFA3743C7091F6C15DB57388 (void);
// 0x000007E5 System.Exception System.Net.FtpWebRequest::GetMustImplement()
extern void FtpWebRequest_GetMustImplement_m80DCA4097BA11ADC9A146EDB6D276535E5D34731 (void);
// 0x000007E6 System.Int64 System.Net.FtpWebRequest::get_ContentLength()
extern void FtpWebRequest_get_ContentLength_mC0864B24B266291A0DC7CB0179E7A216FB2F8E77 (void);
// 0x000007E7 System.Net.ICredentials System.Net.FtpWebRequest::get_Credentials()
extern void FtpWebRequest_get_Credentials_m4562A764D967DA73F11711833F06B4BFB32DFCF8 (void);
// 0x000007E8 System.Void System.Net.FtpWebRequest::set_Credentials(System.Net.ICredentials)
extern void FtpWebRequest_set_Credentials_mD60889B866FAD82DAFF21F11AB30142DAACF91BF (void);
// 0x000007E9 System.Net.WebHeaderCollection System.Net.FtpWebRequest::get_Headers()
extern void FtpWebRequest_get_Headers_mD4CCE8D9AD6D7A15F516E1D3FC471C6EEBF5F1A9 (void);
// 0x000007EA System.String System.Net.FtpWebRequest::get_Method()
extern void FtpWebRequest_get_Method_m596EDFD05C78F95770BE2B5496DD5056850B6580 (void);
// 0x000007EB System.Void System.Net.FtpWebRequest::set_Method(System.String)
extern void FtpWebRequest_set_Method_mB762BC2E64BF39D2B978AC50866DC0AE4B92D054 (void);
// 0x000007EC System.Net.IWebProxy System.Net.FtpWebRequest::get_Proxy()
extern void FtpWebRequest_get_Proxy_mD80014A0EE0F6029C4BD8C2F2864C8891D409693 (void);
// 0x000007ED System.Uri System.Net.FtpWebRequest::get_RequestUri()
extern void FtpWebRequest_get_RequestUri_mB45728128F16A8037A923B5353E8B6855B9CC265 (void);
// 0x000007EE System.Net.FtpWebRequest/RequestState System.Net.FtpWebRequest::get_State()
extern void FtpWebRequest_get_State_m34CC17F0FC097BC81296D0C7B58CFF5ED713FDB2 (void);
// 0x000007EF System.Void System.Net.FtpWebRequest::CheckRequestStarted()
extern void FtpWebRequest_CheckRequestStarted_mCE9B6182FC2F9813667EF4BFC4A23BCA56AF1297 (void);
// 0x000007F0 System.Void System.Net.FtpWebRequest::.cctor()
extern void FtpWebRequest__cctor_m61115DB699C0D49B03AD48FF1CC0ECA86C74F9EC (void);
// 0x000007F1 System.Void System.Net.HttpRequestCreator::.ctor()
extern void HttpRequestCreator__ctor_m06C2AEB34BE1C386F12AFEA48D7F330E429653BE (void);
// 0x000007F2 System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern void HttpRequestCreator_Create_m8B42C3EE0D53119899DDEF28D227EF203932AFCD (void);
// 0x000007F3 System.Void System.Net.HttpWebRequest::.cctor()
extern void HttpWebRequest__cctor_m5A396A851E86B56F55849BFFE08528A1483D59C8 (void);
// 0x000007F4 System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern void HttpWebRequest__ctor_m34F4D99DEAEB2ABDA7B321DE9D934E2AFFE7ED87 (void);
// 0x000007F5 System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpWebRequest__ctor_m37FE79885E818FA7A4BB502CC00F216A40C759CF (void);
// 0x000007F6 System.Void System.Net.HttpWebRequest::ResetAuthorization()
extern void HttpWebRequest_ResetAuthorization_mB46C878D3130CF8EF4BB6547E17554A0DB49A56C (void);
// 0x000007F7 System.Uri System.Net.HttpWebRequest::get_Address()
extern void HttpWebRequest_get_Address_m8B4240A8AD46F12716B28F8549750BA30D2E368B (void);
// 0x000007F8 System.Boolean System.Net.HttpWebRequest::get_InternalAllowBuffering()
extern void HttpWebRequest_get_InternalAllowBuffering_m6447C59856EA745F81D89B8BF10443D6DA1C5396 (void);
// 0x000007F9 System.Boolean System.Net.HttpWebRequest::get_MethodWithBuffer()
extern void HttpWebRequest_get_MethodWithBuffer_mDFB58A016AEF0EA84BA2EF5F07F582B23D9FC035 (void);
// 0x000007FA Mono.Security.Interface.MonoTlsProvider System.Net.HttpWebRequest::get_TlsProvider()
extern void HttpWebRequest_get_TlsProvider_m522A745ADDE50C0F25D25A366E35A9DB0D4DE281 (void);
// 0x000007FB Mono.Security.Interface.MonoTlsSettings System.Net.HttpWebRequest::get_TlsSettings()
extern void HttpWebRequest_get_TlsSettings_mD57C8AFBCF00FD71E557AE9F87A1765BC4AF720A (void);
// 0x000007FC System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::get_ClientCertificates()
extern void HttpWebRequest_get_ClientCertificates_m500DFD3C22558CD2AE72FD46DBCB100897182AD5 (void);
// 0x000007FD System.Int64 System.Net.HttpWebRequest::get_ContentLength()
extern void HttpWebRequest_get_ContentLength_m153682CF433EEA898201F39005C0C49E2EFC011D (void);
// 0x000007FE System.Void System.Net.HttpWebRequest::set_InternalContentLength(System.Int64)
extern void HttpWebRequest_set_InternalContentLength_m83D835628EA18F9C6C453F108BAA772E0AF19C13 (void);
// 0x000007FF System.Void System.Net.HttpWebRequest::set_ThrowOnError(System.Boolean)
extern void HttpWebRequest_set_ThrowOnError_mAAE39F767EF8CE4BA64472DD870F8116C0F306AA (void);
// 0x00000800 System.Net.ICredentials System.Net.HttpWebRequest::get_Credentials()
extern void HttpWebRequest_get_Credentials_mAD678DD9458AE9AD92B40C52C488C1FCC0FF1083 (void);
// 0x00000801 System.Void System.Net.HttpWebRequest::set_Credentials(System.Net.ICredentials)
extern void HttpWebRequest_set_Credentials_mBF9584583D3341B305161654AD79D9B16CE5894D (void);
// 0x00000802 System.Net.WebHeaderCollection System.Net.HttpWebRequest::get_Headers()
extern void HttpWebRequest_get_Headers_m2BFF4F7AD7602BFD3F0A3A8981B8BE743558220E (void);
// 0x00000803 System.String System.Net.HttpWebRequest::get_Host()
extern void HttpWebRequest_get_Host_m4BE36083497FB8F5B7F317A1C097C0BCBE993533 (void);
// 0x00000804 System.Boolean System.Net.HttpWebRequest::get_KeepAlive()
extern void HttpWebRequest_get_KeepAlive_mFCE6EAEB969B0519309095AF291907CA714D85E9 (void);
// 0x00000805 System.Int32 System.Net.HttpWebRequest::get_ReadWriteTimeout()
extern void HttpWebRequest_get_ReadWriteTimeout_mFEC5FFC4F714670AD8CBF7D7191AB38C1C1465F1 (void);
// 0x00000806 System.String System.Net.HttpWebRequest::get_Method()
extern void HttpWebRequest_get_Method_m959D0808BFBE779B78B94445AD825689FAF2C12A (void);
// 0x00000807 System.Void System.Net.HttpWebRequest::set_Method(System.String)
extern void HttpWebRequest_set_Method_m5A27BF0559BFF8E1D1E25133E7138FC41B3D6CE4 (void);
// 0x00000808 System.Version System.Net.HttpWebRequest::get_ProtocolVersion()
extern void HttpWebRequest_get_ProtocolVersion_m782143F502A32DD7BCA0F1C1810BBE181986F6CD (void);
// 0x00000809 System.Net.IWebProxy System.Net.HttpWebRequest::get_Proxy()
extern void HttpWebRequest_get_Proxy_mE1831C8332A00D2D8FBDB8103EBAA114D6C66936 (void);
// 0x0000080A System.Uri System.Net.HttpWebRequest::get_RequestUri()
extern void HttpWebRequest_get_RequestUri_m26CBEF035713103C4B27E32C0B0A08B4F43AC4C9 (void);
// 0x0000080B System.Boolean System.Net.HttpWebRequest::get_SendChunked()
extern void HttpWebRequest_get_SendChunked_m8E640766CDE7A99AA19F42DD4F1A0A4A19074776 (void);
// 0x0000080C System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern void HttpWebRequest_get_ServicePoint_m87CA558F0C7B4A6D585F42616771173F75DE2567 (void);
// 0x0000080D System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePointNoLock()
extern void HttpWebRequest_get_ServicePointNoLock_mAB6BB5851482B6EA1FFB3943897D7B9399795B13 (void);
// 0x0000080E System.Boolean System.Net.HttpWebRequest::get_UnsafeAuthenticatedConnectionSharing()
extern void HttpWebRequest_get_UnsafeAuthenticatedConnectionSharing_m1AB8D793FB4FC146D1656CFAC2EF24EF26BC48F6 (void);
// 0x0000080F System.Boolean System.Net.HttpWebRequest::get_ExpectContinue()
extern void HttpWebRequest_get_ExpectContinue_m86E7F74975F7E4B1CD45F78C054B21B7B8B65966 (void);
// 0x00000810 System.Void System.Net.HttpWebRequest::set_ExpectContinue(System.Boolean)
extern void HttpWebRequest_set_ExpectContinue_mE358227A4289083DD0E5E40E836D060C3B9B87A8 (void);
// 0x00000811 System.Uri System.Net.HttpWebRequest::get_AuthUri()
extern void HttpWebRequest_get_AuthUri_m73CE601DCC9A4F368AEA6186CDC4FFBA20D3A11A (void);
// 0x00000812 System.Boolean System.Net.HttpWebRequest::get_ProxyQuery()
extern void HttpWebRequest_get_ProxyQuery_m5AC4ED79E30E2253BE5508B87805592B4FD2F1F5 (void);
// 0x00000813 System.Net.ServerCertValidationCallback System.Net.HttpWebRequest::get_ServerCertValidationCallback()
extern void HttpWebRequest_get_ServerCertValidationCallback_mC40F344BFA88D34DBD794CDB8BD0B8A5F5D78AA6 (void);
// 0x00000814 System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern void HttpWebRequest_GetServicePoint_m380927C1AF6310F83D8BD1B578B9B7B06AB32A3A (void);
// 0x00000815 System.Threading.Tasks.Task`1<T> System.Net.HttpWebRequest::RunWithTimeout(System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<T>>,System.Int32,System.Action)
// 0x00000816 System.Exception System.Net.HttpWebRequest::FlattenException(System.Exception)
extern void HttpWebRequest_FlattenException_mF89FAFEB483D313C297FF23D4F30445BE126BE8D (void);
// 0x00000817 System.Net.WebException System.Net.HttpWebRequest::CreateRequestAbortedException()
extern void HttpWebRequest_CreateRequestAbortedException_m5ADF0586581A200AB3F80DC50A107A39167B4E4A (void);
// 0x00000818 System.Void System.Net.HttpWebRequest::set_FinishedReading(System.Boolean)
extern void HttpWebRequest_set_FinishedReading_m3135DD65D0B7A8C656EC84F0ED2CFFEF611E79F4 (void);
// 0x00000819 System.Boolean System.Net.HttpWebRequest::get_Aborted()
extern void HttpWebRequest_get_Aborted_m3818067645E7BF5CC50320409AD3E0946F580257 (void);
// 0x0000081A System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m3B43B7FA26F335B661343C4686CBAC6D4B00727B (void);
// 0x0000081B System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpWebRequest_GetObjectData_mA0387A42ACDA0C1DCA5B0BBC62C17D57E5D19222 (void);
// 0x0000081C System.Void System.Net.HttpWebRequest::DoContinueDelegate(System.Int32,System.Net.WebHeaderCollection)
extern void HttpWebRequest_DoContinueDelegate_m7F1D38124E3281C3054D6F8D864DFC624A322A1B (void);
// 0x0000081D System.String System.Net.HttpWebRequest::GetHeaders()
extern void HttpWebRequest_GetHeaders_m3D09D15A7A2D66D84942B9601893C60F6A9EF332 (void);
// 0x0000081E System.Void System.Net.HttpWebRequest::DoPreAuthenticate()
extern void HttpWebRequest_DoPreAuthenticate_mA75D8713BEB89C84A5FEF0A7740B3499F508A7AA (void);
// 0x0000081F System.Byte[] System.Net.HttpWebRequest::GetRequestHeaders()
extern void HttpWebRequest_GetRequestHeaders_m3B6049DA9BBF3C0010212922C6E7082EEBE13214 (void);
// 0x00000820 System.Void System.Net.HttpWebRequest::.ctor()
extern void HttpWebRequest__ctor_mA8D0231158E0A31839FDBCF3A4058E12233CC0CA (void);
// 0x00000821 System.Net.HttpWebRequest/NtlmAuthState System.Net.HttpWebRequest/AuthorizationState::get_NtlmAuthState()
extern void AuthorizationState_get_NtlmAuthState_mFEDD4ECDE8761AD54175DBBD0EA53C45CD545998 (void);
// 0x00000822 System.Void System.Net.HttpWebRequest/AuthorizationState::.ctor(System.Net.HttpWebRequest,System.Boolean)
extern void AuthorizationState__ctor_m33AFDC1A78F1C2709F58ADE60766E6DB40B23108 (void);
// 0x00000823 System.String System.Net.HttpWebRequest/AuthorizationState::ToString()
extern void AuthorizationState_ToString_m7A5CA8DDE1302D55B5F3B1F75A5D79387EFF0531 (void);
// 0x00000824 System.Void System.Net.HttpWebRequest/<>c__234`1::.cctor()
// 0x00000825 System.Void System.Net.HttpWebRequest/<>c__234`1::.ctor()
// 0x00000826 System.Nullable`1<System.Int32> System.Net.HttpWebRequest/<>c__234`1::<RunWithTimeout>b__234_0(System.Threading.Tasks.Task`1<T>)
// 0x00000827 System.Void System.Net.HttpWebRequest/<RunWithTimeout>d__234`1::MoveNext()
// 0x00000828 System.Void System.Net.HttpWebRequest/<RunWithTimeout>d__234`1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x00000829 System.Void System.Net.HttpWebResponse::.ctor(System.Uri,System.String,System.Net.HttpStatusCode,System.Net.WebHeaderCollection)
extern void HttpWebResponse__ctor_m3F9E2DF361A0722B9F30B117E62E3E33791BB234 (void);
// 0x0000082A System.Void System.Net.HttpWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpWebResponse__ctor_m78E52EFA7B83C71D4A05D35788FD495A8B3DD365 (void);
// 0x0000082B System.Void System.Net.HttpWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m4C33A83D045A76BC62389EF98F11890DFC8F6518 (void);
// 0x0000082C System.Void System.Net.HttpWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpWebResponse_GetObjectData_mB2AEB91E14CBF3166D437CA1200A3A720F577EF7 (void);
// 0x0000082D System.Void System.Net.HttpWebResponse::Close()
extern void HttpWebResponse_Close_mFB0945D078A0A64605BD0F5BAB6620105EF416F2 (void);
// 0x0000082E System.Void System.Net.HttpWebResponse::System.IDisposable.Dispose()
extern void HttpWebResponse_System_IDisposable_Dispose_mEAD8612F73D2CAD6D24A996F52B908876B17D09D (void);
// 0x0000082F System.Void System.Net.HttpWebResponse::Dispose(System.Boolean)
extern void HttpWebResponse_Dispose_m9115A5C7DF7C2A1C916FCBC2A4E9DAF3DF29E86F (void);
// 0x00000830 System.Void System.Net.HttpWebResponse::.ctor()
extern void HttpWebResponse__ctor_mD26DA915B4BE34BFB9112EBA6E8725B31480BC2A (void);
// 0x00000831 System.Void System.Net.IPv6AddressFormatter::.ctor(System.UInt16[],System.Int64)
extern void IPv6AddressFormatter__ctor_mEEFF87906A194838D6E4A31AB724A28808E539E5 (void);
// 0x00000832 System.UInt16 System.Net.IPv6AddressFormatter::SwapUShort(System.UInt16)
extern void IPv6AddressFormatter_SwapUShort_m422438633F4CADBE0EAB77D23AD3334FD01ACEC6 (void);
// 0x00000833 System.UInt32 System.Net.IPv6AddressFormatter::AsIPv4Int()
extern void IPv6AddressFormatter_AsIPv4Int_m875CCBC60A506A331C9D591D5A88D49EBB6730E7 (void);
// 0x00000834 System.Boolean System.Net.IPv6AddressFormatter::IsIPv4Compatible()
extern void IPv6AddressFormatter_IsIPv4Compatible_m769BBFB4FBB844EC8AB61A635495A7F2925FDD99 (void);
// 0x00000835 System.Boolean System.Net.IPv6AddressFormatter::IsIPv4Mapped()
extern void IPv6AddressFormatter_IsIPv4Mapped_m46AE9AECC6E77E6A53ACBF60BEF336D45FF236DB (void);
// 0x00000836 System.String System.Net.IPv6AddressFormatter::ToString()
extern void IPv6AddressFormatter_ToString_m5FB0F927F3B0BAA521BC92562A7F5A78460023DC (void);
// 0x00000837 System.Void System.Net.MonoChunkStream::.ctor(System.Byte[],System.Int32,System.Int32,System.Net.WebHeaderCollection)
extern void MonoChunkStream__ctor_m0983391DA1D85F1C99A7156057AC9B4391C80D5A (void);
// 0x00000838 System.Void System.Net.MonoChunkStream::.ctor(System.Net.WebHeaderCollection)
extern void MonoChunkStream__ctor_mD2D5FA0ACB85A6CC731CB9C793339E507A6C8AE0 (void);
// 0x00000839 System.Void System.Net.MonoChunkStream::ResetBuffer()
extern void MonoChunkStream_ResetBuffer_m1378860F1775891DFFD8783EA7D51D9D1EB757AF (void);
// 0x0000083A System.Void System.Net.MonoChunkStream::WriteAndReadBack(System.Byte[],System.Int32,System.Int32,System.Int32&)
extern void MonoChunkStream_WriteAndReadBack_mE6CB867432CBBB655C866E139C16A7FFBD53E45A (void);
// 0x0000083B System.Int32 System.Net.MonoChunkStream::Read(System.Byte[],System.Int32,System.Int32)
extern void MonoChunkStream_Read_m43A4085433F66530A42EF59AAB3A0D51E6E5891A (void);
// 0x0000083C System.Int32 System.Net.MonoChunkStream::ReadFromChunks(System.Byte[],System.Int32,System.Int32)
extern void MonoChunkStream_ReadFromChunks_m37D5FAEAFECA57D507F64766999D57A95EEA0D2A (void);
// 0x0000083D System.Void System.Net.MonoChunkStream::Write(System.Byte[],System.Int32,System.Int32)
extern void MonoChunkStream_Write_m137C8C8D13524480B95A13C03AD732BAA179ACDF (void);
// 0x0000083E System.Void System.Net.MonoChunkStream::InternalWrite(System.Byte[],System.Int32&,System.Int32)
extern void MonoChunkStream_InternalWrite_m5470C15DE29BA1C8DB49A76C55CDF15F964FE34F (void);
// 0x0000083F System.Boolean System.Net.MonoChunkStream::get_WantMore()
extern void MonoChunkStream_get_WantMore_m83CC3A4E18F848C35EF9853D7E2FB49A329B8127 (void);
// 0x00000840 System.Boolean System.Net.MonoChunkStream::get_DataAvailable()
extern void MonoChunkStream_get_DataAvailable_mA4A5DF49C69DA98965B564B7EF510D8B17E4D6DE (void);
// 0x00000841 System.Int32 System.Net.MonoChunkStream::get_ChunkLeft()
extern void MonoChunkStream_get_ChunkLeft_m5E5FD7651D4CD801F84B2C5FE6DC0953AA332E45 (void);
// 0x00000842 System.Net.MonoChunkStream/State System.Net.MonoChunkStream::ReadBody(System.Byte[],System.Int32&,System.Int32)
extern void MonoChunkStream_ReadBody_mA94E7D8EB2AA23BDF0C5C23175BC98B2CBE2DCCB (void);
// 0x00000843 System.Net.MonoChunkStream/State System.Net.MonoChunkStream::GetChunkSize(System.Byte[],System.Int32&,System.Int32)
extern void MonoChunkStream_GetChunkSize_m6C80D3EEFADE084F993AAAFF2CA0F2DC494446C4 (void);
// 0x00000844 System.String System.Net.MonoChunkStream::RemoveChunkExtension(System.String)
extern void MonoChunkStream_RemoveChunkExtension_m5EE5C7814ED62003E69A3116DAA16785BC282D88 (void);
// 0x00000845 System.Net.MonoChunkStream/State System.Net.MonoChunkStream::ReadCRLF(System.Byte[],System.Int32&,System.Int32)
extern void MonoChunkStream_ReadCRLF_m0A00BE1B5479D26A93C6FC1ED5250C30A194C708 (void);
// 0x00000846 System.Net.MonoChunkStream/State System.Net.MonoChunkStream::ReadTrailer(System.Byte[],System.Int32&,System.Int32)
extern void MonoChunkStream_ReadTrailer_m5F9E21734592996F66F8BDDBF66D7AC9F4A90C1E (void);
// 0x00000847 System.Void System.Net.MonoChunkStream::ThrowProtocolViolation(System.String)
extern void MonoChunkStream_ThrowProtocolViolation_m086C92CCA578AC0C769B91A7554E23C595A49B8C (void);
// 0x00000848 System.Void System.Net.MonoChunkStream/Chunk::.ctor(System.Byte[])
extern void Chunk__ctor_m85D8BE6C05ACCD31D613F2EC44FC12000795C95D (void);
// 0x00000849 System.Int32 System.Net.MonoChunkStream/Chunk::Read(System.Byte[],System.Int32,System.Int32)
extern void Chunk_Read_mD196D23B6CCE13436E9654D5690B120A27D767F9 (void);
// 0x0000084A System.Void System.Net.NtlmClient::.ctor()
extern void NtlmClient__ctor_m42061F6AD56B23AB8052A7B2536ADDD16C65ACFC (void);
// 0x0000084B System.Net.Authorization System.Net.NtlmClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern void NtlmClient_Authenticate_m8818860DA0F138939D885CAA1D32ACECE1325A18 (void);
// 0x0000084C System.Net.Authorization System.Net.NtlmClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern void NtlmClient_PreAuthenticate_mF922EE3871ECE8A42FF525F839E257132E101735 (void);
// 0x0000084D System.String System.Net.NtlmClient::get_AuthenticationType()
extern void NtlmClient_get_AuthenticationType_m7245279ADF0745AAE487D87553B6CAFAC4F3F84E (void);
// 0x0000084E System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
extern void ServicePoint__ctor_m68B4C7FBD836706798BA6882BC351F539A430C6C (void);
// 0x0000084F System.Net.ServicePointScheduler System.Net.ServicePoint::get_Scheduler()
extern void ServicePoint_get_Scheduler_mFDC8AD0EE145AD1BE39037D2BA8DA21F2280A3C8 (void);
// 0x00000850 System.Uri System.Net.ServicePoint::get_Address()
extern void ServicePoint_get_Address_mBBF6879649652FA3923191FF1A01421D289971A6 (void);
// 0x00000851 System.Int32 System.Net.ServicePoint::get_ConnectionLimit()
extern void ServicePoint_get_ConnectionLimit_mDF34A9CA341979EF0E5A547DC0E3281BBBEE72FF (void);
// 0x00000852 System.Version System.Net.ServicePoint::get_ProtocolVersion()
extern void ServicePoint_get_ProtocolVersion_mDF830FA6C47525790E2FE8E4733F4903AE13C018 (void);
// 0x00000853 System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
extern void ServicePoint_set_Expect100Continue_m53E393E64BE40AC205CF5458DCC98E806D0432B2 (void);
// 0x00000854 System.Boolean System.Net.ServicePoint::get_UseNagleAlgorithm()
extern void ServicePoint_get_UseNagleAlgorithm_m241DCE7C589DD8B22FD614C5C43ADF409C2B79A1 (void);
// 0x00000855 System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
extern void ServicePoint_set_UseNagleAlgorithm_m93F74ADD6C2BE19F9342BE092EF8723F56503913 (void);
// 0x00000856 System.Boolean System.Net.ServicePoint::get_SendContinue()
extern void ServicePoint_get_SendContinue_m0708B1804863BCECDFE5FB7A5120B15530087704 (void);
// 0x00000857 System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
extern void ServicePoint_set_SendContinue_m084B169EDBF37E2B2CC592DF68EB9BB17D3B844E (void);
// 0x00000858 System.Void System.Net.ServicePoint::SetTcpKeepAlive(System.Boolean,System.Int32,System.Int32)
extern void ServicePoint_SetTcpKeepAlive_m4B4392E54144159027C38EC7FCC12F2C09E7A3CF (void);
// 0x00000859 System.Void System.Net.ServicePoint::KeepAliveSetup(System.Net.Sockets.Socket)
extern void ServicePoint_KeepAliveSetup_m2C79E00554F3F7705FF0F8A65FA48467CAFF982E (void);
// 0x0000085A System.Void System.Net.ServicePoint::PutBytes(System.Byte[],System.UInt32,System.Int32)
extern void ServicePoint_PutBytes_m39B4ACFA04B973B0D7F0D583C113927D11AD56D2 (void);
// 0x0000085B System.Boolean System.Net.ServicePoint::get_UsesProxy()
extern void ServicePoint_get_UsesProxy_mE6CE550E4DFEB85A673160DE35CD67AFA87F35BD (void);
// 0x0000085C System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
extern void ServicePoint_set_UsesProxy_m25BFB4CE73283597C98A748B231D1A544469F618 (void);
// 0x0000085D System.Boolean System.Net.ServicePoint::get_UseConnect()
extern void ServicePoint_get_UseConnect_m33B1EC23452734FFED85B21F9439A546BFBD3CC7 (void);
// 0x0000085E System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
extern void ServicePoint_set_UseConnect_mCFAF7E07504140EEE0E81D5805CFF727575FF5F5 (void);
// 0x0000085F System.Boolean System.Net.ServicePoint::get_HasTimedOut()
extern void ServicePoint_get_HasTimedOut_m98E74D21739FAE910D22C4E883EC10F6E5A7AECD (void);
// 0x00000860 System.Net.IPHostEntry System.Net.ServicePoint::get_HostEntry()
extern void ServicePoint_get_HostEntry_mC952C74930BB4A989F0214DF0FA34104D9D9C975 (void);
// 0x00000861 System.Void System.Net.ServicePoint::SetVersion(System.Version)
extern void ServicePoint_SetVersion_m576E03D8F45F8F971C6833C19733A02F8738A85D (void);
// 0x00000862 System.Boolean System.Net.ServicePoint::CloseConnectionGroup(System.String)
extern void ServicePoint_CloseConnectionGroup_m7F719EB61DB4231C9880F748A80CE29F333866B7 (void);
// 0x00000863 System.Void System.Net.ServicePoint::UpdateServerCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern void ServicePoint_UpdateServerCertificate_m8F8352188BACC259F5D00F3D9044E3E7F2707E29 (void);
// 0x00000864 System.Void System.Net.ServicePoint::UpdateClientCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern void ServicePoint_UpdateClientCertificate_m27EB596CD61A50592B853BC653D613E71B0DBFC2 (void);
// 0x00000865 System.Boolean System.Net.ServicePoint::CallEndPointDelegate(System.Net.Sockets.Socket,System.Net.IPEndPoint)
extern void ServicePoint_CallEndPointDelegate_mD2D6A04E2C8D485E4BE66BE8376123108FE76C98 (void);
// 0x00000866 System.Void System.Net.ServicePointManager::.cctor()
extern void ServicePointManager__cctor_m50BC6D64E46BCE67FD6065634A0DA67B2C11CF4B (void);
// 0x00000867 System.Net.ICertificatePolicy System.Net.ServicePointManager::GetLegacyCertificatePolicy()
extern void ServicePointManager_GetLegacyCertificatePolicy_m256D5E7267BA12980E8FD08B6BE2FCBC24FDEA0A (void);
// 0x00000868 System.Boolean System.Net.ServicePointManager::get_CheckCertificateRevocationList()
extern void ServicePointManager_get_CheckCertificateRevocationList_m203838432389534693B3A26FA5599FC8B11C553F (void);
// 0x00000869 System.Int32 System.Net.ServicePointManager::get_DnsRefreshTimeout()
extern void ServicePointManager_get_DnsRefreshTimeout_m569D92DE295D0A02310C9D9D3FC69D2DB923411C (void);
// 0x0000086A System.Net.SecurityProtocolType System.Net.ServicePointManager::get_SecurityProtocol()
extern void ServicePointManager_get_SecurityProtocol_mA87F568AD38F44B15CC49A3BFB8CE6F7296F6B73 (void);
// 0x0000086B System.Net.ServerCertValidationCallback System.Net.ServicePointManager::get_ServerCertValidationCallback()
extern void ServicePointManager_get_ServerCertValidationCallback_mB359AF486C997D8390BE6B660058A87AA177A922 (void);
// 0x0000086C System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.Uri,System.Net.IWebProxy)
extern void ServicePointManager_FindServicePoint_m109F6EB5F2E4E9C818FC341CABC1716C2A460586 (void);
// 0x0000086D System.Void System.Net.ServicePointManager::CloseConnectionGroup(System.String)
extern void ServicePointManager_CloseConnectionGroup_m3C3C0E78CF3612E0C5B5276019C083160423C9AC (void);
// 0x0000086E System.Void System.Net.ServicePointManager/SPKey::.ctor(System.Uri,System.Uri,System.Boolean)
extern void SPKey__ctor_m7AF193EB533D8A77BE1BDD2643F966AC74232A29 (void);
// 0x0000086F System.Boolean System.Net.ServicePointManager/SPKey::get_UsesProxy()
extern void SPKey_get_UsesProxy_mA0DD3C141991BEB3D229681C0565265A535A3420 (void);
// 0x00000870 System.Int32 System.Net.ServicePointManager/SPKey::GetHashCode()
extern void SPKey_GetHashCode_mBD2D23E92D57E75D4598BD7B8D0322115CA34A79 (void);
// 0x00000871 System.Boolean System.Net.ServicePointManager/SPKey::Equals(System.Object)
extern void SPKey_Equals_m3977A8EB90832AADC4305E87083CAE9E167D60FF (void);
// 0x00000872 System.Net.ServicePoint System.Net.ServicePointScheduler::get_ServicePoint()
extern void ServicePointScheduler_get_ServicePoint_mF440822AB131B3EEC0ED34FAF58A173F47774455 (void);
// 0x00000873 System.Int32 System.Net.ServicePointScheduler::get_MaxIdleTime()
extern void ServicePointScheduler_get_MaxIdleTime_m1D0BA49F4201E52CDB01C5A64A75A6453FB88015 (void);
// 0x00000874 System.Int32 System.Net.ServicePointScheduler::get_ConnectionLimit()
extern void ServicePointScheduler_get_ConnectionLimit_mFA140DF59CD0283939163B2380C59D4BE3872754 (void);
// 0x00000875 System.Void System.Net.ServicePointScheduler::.ctor(System.Net.ServicePoint,System.Int32,System.Int32)
extern void ServicePointScheduler__ctor_m5246987112698FC9A296CC7E8DAA276B57FD6F4A (void);
// 0x00000876 System.Void System.Net.ServicePointScheduler::Run()
extern void ServicePointScheduler_Run_m6993E53C1386472568740C6EF61B9CA3BAB9F5B2 (void);
// 0x00000877 System.Void System.Net.ServicePointScheduler::StartScheduler()
extern void ServicePointScheduler_StartScheduler_mB84355F0B426E7485884B22D8489086CBD5BEC4D (void);
// 0x00000878 System.Void System.Net.ServicePointScheduler::Cleanup()
extern void ServicePointScheduler_Cleanup_mDEBD36E43A6B6EF3D2E02DE12C4F9F2BD6069DD7 (void);
// 0x00000879 System.Void System.Net.ServicePointScheduler::RunSchedulerIteration()
extern void ServicePointScheduler_RunSchedulerIteration_mF8FF1C803F8C31BBD95C016F7862B95C229262FA (void);
// 0x0000087A System.Boolean System.Net.ServicePointScheduler::OperationCompleted(System.Net.ServicePointScheduler/ConnectionGroup,System.Net.WebOperation,System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Boolean,System.Net.WebOperation>>)
extern void ServicePointScheduler_OperationCompleted_m07EA04EA89B065DBC78166FCE78C41A9A822FD89 (void);
// 0x0000087B System.Void System.Net.ServicePointScheduler::CloseIdleConnection(System.Net.ServicePointScheduler/ConnectionGroup,System.Net.WebConnection)
extern void ServicePointScheduler_CloseIdleConnection_m3F00DC3AB2FDE618B4E6D7C452A8B6920975C402 (void);
// 0x0000087C System.Boolean System.Net.ServicePointScheduler::SchedulerIteration(System.Net.ServicePointScheduler/ConnectionGroup)
extern void ServicePointScheduler_SchedulerIteration_m09BB05B64AAF878CD1E22F5A5107762804C1AE72 (void);
// 0x0000087D System.Void System.Net.ServicePointScheduler::RemoveOperation(System.Net.WebOperation)
extern void ServicePointScheduler_RemoveOperation_mBFF45695A7E59C36658B11EC8AF0661B8D753E9B (void);
// 0x0000087E System.Void System.Net.ServicePointScheduler::RemoveIdleConnection(System.Net.WebConnection)
extern void ServicePointScheduler_RemoveIdleConnection_mBB6ED958ED6E7AB69373E7A44BAFC251E5771A3C (void);
// 0x0000087F System.Boolean System.Net.ServicePointScheduler::CloseConnectionGroup(System.String)
extern void ServicePointScheduler_CloseConnectionGroup_m064DFEAC40E3720EDE620A9421607FDCCD43D9C8 (void);
// 0x00000880 System.Void System.Net.ServicePointScheduler::OnConnectionCreated(System.Net.WebConnection)
extern void ServicePointScheduler_OnConnectionCreated_mD0A50FB19C9750E9DD7FAB7F981668C22C574E0C (void);
// 0x00000881 System.Void System.Net.ServicePointScheduler::OnConnectionClosed(System.Net.WebConnection)
extern void ServicePointScheduler_OnConnectionClosed_mA6BB8634BACB62DB319925D2185F41B714D61E2B (void);
// 0x00000882 System.Net.ServicePointScheduler System.Net.ServicePointScheduler/ConnectionGroup::get_Scheduler()
extern void ConnectionGroup_get_Scheduler_m8012DB808E35E47F35126B04A242D0D8229B39CE (void);
// 0x00000883 System.Void System.Net.ServicePointScheduler/ConnectionGroup::.ctor(System.Net.ServicePointScheduler,System.String)
extern void ConnectionGroup__ctor_m5FA4DC16552C8ADBBADA4FEEB54C620EC1175D80 (void);
// 0x00000884 System.Boolean System.Net.ServicePointScheduler/ConnectionGroup::IsEmpty()
extern void ConnectionGroup_IsEmpty_m8D7C9EAB72B30685EDBE422B33A2DDBED318D33A (void);
// 0x00000885 System.Void System.Net.ServicePointScheduler/ConnectionGroup::RemoveConnection(System.Net.WebConnection)
extern void ConnectionGroup_RemoveConnection_m2DB1E959C60D52E10266593CD01E4E280933A52B (void);
// 0x00000886 System.Void System.Net.ServicePointScheduler/ConnectionGroup::Cleanup()
extern void ConnectionGroup_Cleanup_m3C54610DE85C7272D7FED7718775A57A114BB0B4 (void);
// 0x00000887 System.Void System.Net.ServicePointScheduler/ConnectionGroup::Close()
extern void ConnectionGroup_Close_mBACBE8457184B2116837AC9B17647CE96B77BB3E (void);
// 0x00000888 System.Net.WebOperation System.Net.ServicePointScheduler/ConnectionGroup::GetNextOperation()
extern void ConnectionGroup_GetNextOperation_m79D857F3FF78911472BA5E51C900E3D8F605F0F5 (void);
// 0x00000889 System.Net.WebConnection System.Net.ServicePointScheduler/ConnectionGroup::FindIdleConnection(System.Net.WebOperation)
extern void ConnectionGroup_FindIdleConnection_m2C56016D1A7E50870583722A662B9265CD789408 (void);
// 0x0000088A System.ValueTuple`2<System.Net.WebConnection,System.Boolean> System.Net.ServicePointScheduler/ConnectionGroup::CreateOrReuseConnection(System.Net.WebOperation,System.Boolean)
extern void ConnectionGroup_CreateOrReuseConnection_m8DFC2633DB095A0A4ABD21E116F22A3538C0BAB0 (void);
// 0x0000088B System.Threading.Tasks.Task`1<System.Boolean> System.Net.ServicePointScheduler/AsyncManualResetEvent::WaitAsync(System.Int32)
extern void AsyncManualResetEvent_WaitAsync_m4EDD2148C5267ED376B280B6F4DFF4BF69FA22C6 (void);
// 0x0000088C System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent::Set()
extern void AsyncManualResetEvent_Set_m4AEDC2FB8A878F5A11EAE3FC7C5B079747FA784C (void);
// 0x0000088D System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent::Reset()
extern void AsyncManualResetEvent_Reset_mBFDA18F6778C6FF3C063C7A654B455AE56E5E700 (void);
// 0x0000088E System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent::.ctor(System.Boolean)
extern void AsyncManualResetEvent__ctor_mED23C9E7D9E4B6862CF7CA2D9A8A6DD0F1346D5C (void);
// 0x0000088F System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::MoveNext()
extern void U3CWaitAsyncU3Ed__3_MoveNext_m428DB5C25D7D3C5A49B633CC57DAE67364954991 (void);
// 0x00000890 System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<WaitAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWaitAsyncU3Ed__3_SetStateMachine_mEE49EA25DC1D5E3CB662895B6AB0B9F46B69407D (void);
// 0x00000891 System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::.cctor()
extern void U3CU3Ec__cctor_mDF074FAF7DCA143BFC6A7650BE9BE6BBC4F05BE7 (void);
// 0x00000892 System.Void System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::.ctor()
extern void U3CU3Ec__ctor_m33CB0ED421096418F623E21D1843F088ECAE8907 (void);
// 0x00000893 System.Boolean System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c::<Set>b__4_0(System.Object)
extern void U3CU3Ec_U3CSetU3Eb__4_0_m51E1DA417A30BA042DE7A4DA249E0C13FB7E32BD (void);
// 0x00000894 System.Void System.Net.ServicePointScheduler/<StartScheduler>d__32::MoveNext()
extern void U3CStartSchedulerU3Ed__32_MoveNext_mC6A5B9A6CEC241C35FE884E5BC146E0A70F842F9 (void);
// 0x00000895 System.Void System.Net.ServicePointScheduler/<StartScheduler>d__32::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CStartSchedulerU3Ed__32_SetStateMachine_m6E6AD3B8F6F9C698E2DBDABE9509B996912776EA (void);
// 0x00000896 System.Void System.Net.WebCompletionSource::.ctor()
extern void WebCompletionSource__ctor_m2A71326ABA55C07D5EA8267C2746590294275593 (void);
// 0x00000897 System.Boolean System.Net.WebCompletionSource::TrySetCompleted()
extern void WebCompletionSource_TrySetCompleted_m3309212E1375436FC131FE3A308EF6ADDD7C6D9C (void);
// 0x00000898 System.Boolean System.Net.WebCompletionSource::TrySetException(System.Exception)
extern void WebCompletionSource_TrySetException_m66055FAA927F564063E03FB9042E9CA12572EF7F (void);
// 0x00000899 System.Threading.Tasks.Task`1<System.Boolean> System.Net.WebCompletionSource::WaitForCompletion(System.Boolean)
extern void WebCompletionSource_WaitForCompletion_mE44E2AFE7DF56A09C9D208E2A9168E76A946A04F (void);
// 0x0000089A System.Net.WebCompletionSource/State System.Net.WebCompletionSource/Result::get_State()
extern void Result_get_State_m80C22BC38574CD9EEF1472407DB2B4A161D394BF (void);
// 0x0000089B System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Net.WebCompletionSource/Result::get_Error()
extern void Result_get_Error_mDEE233A641B3E25CF17DF07D1D7B0422CD7596F6 (void);
// 0x0000089C System.Void System.Net.WebCompletionSource/Result::.ctor(System.Net.WebCompletionSource/State,System.Runtime.ExceptionServices.ExceptionDispatchInfo)
extern void Result__ctor_m5EBD4EC3AF04E1D9B8040B7843A3E437EC65750B (void);
// 0x0000089D System.Void System.Net.WebCompletionSource/<WaitForCompletion>d__8::MoveNext()
extern void U3CWaitForCompletionU3Ed__8_MoveNext_mA0F027CBAA61B6802847BB9D325430EEA11C8E60 (void);
// 0x0000089E System.Void System.Net.WebCompletionSource/<WaitForCompletion>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWaitForCompletionU3Ed__8_SetStateMachine_m5D0F913DDCA50C9B1B83F88935AC73979DF0E2A2 (void);
// 0x0000089F System.Net.ServicePoint System.Net.WebConnection::get_ServicePoint()
extern void WebConnection_get_ServicePoint_mCE5198DBA6F6B5CBBBDBC69F92603F13808718AA (void);
// 0x000008A0 System.Void System.Net.WebConnection::.ctor(System.Net.ServicePoint)
extern void WebConnection__ctor_mFFAA483E69218E65200C643A2095A595D9968CE8 (void);
// 0x000008A1 System.Boolean System.Net.WebConnection::CanReuse()
extern void WebConnection_CanReuse_m203E69E5B17211F763E7F595DAF62E9D46DC0115 (void);
// 0x000008A2 System.Boolean System.Net.WebConnection::CheckReusable()
extern void WebConnection_CheckReusable_mCC8C152746B12DC585ADB1776738A1A86E9ED61A (void);
// 0x000008A3 System.Threading.Tasks.Task System.Net.WebConnection::Connect(System.Net.WebOperation,System.Threading.CancellationToken)
extern void WebConnection_Connect_mCE66B423A5AFE83348B84FEFA910042A846E716E (void);
// 0x000008A4 System.Threading.Tasks.Task`1<System.Boolean> System.Net.WebConnection::CreateStream(System.Net.WebOperation,System.Boolean,System.Threading.CancellationToken)
extern void WebConnection_CreateStream_m20D2534A6E340FBA00F51B1750F1CC1BF6E380B7 (void);
// 0x000008A5 System.Threading.Tasks.Task`1<System.Net.WebRequestStream> System.Net.WebConnection::InitConnection(System.Net.WebOperation,System.Threading.CancellationToken)
extern void WebConnection_InitConnection_m0E4F499BD31EC5857B4969A37C4F974836BAAC66 (void);
// 0x000008A6 System.Net.WebException System.Net.WebConnection::GetException(System.Net.WebExceptionStatus,System.Exception)
extern void WebConnection_GetException_m3E4BAC5752566D577DE2F9F8DF97EA2A8AA58BCC (void);
// 0x000008A7 System.Boolean System.Net.WebConnection::ReadLine(System.Byte[],System.Int32&,System.Int32,System.String&)
extern void WebConnection_ReadLine_m88B3E3DF9C79D2139637C3F66B98BDD074336EB4 (void);
// 0x000008A8 System.Boolean System.Net.WebConnection::CanReuseConnection(System.Net.WebOperation)
extern void WebConnection_CanReuseConnection_mD6794DC4EC2B49BE9132C04428D612A4AB273585 (void);
// 0x000008A9 System.Boolean System.Net.WebConnection::PrepareSharingNtlm(System.Net.WebOperation)
extern void WebConnection_PrepareSharingNtlm_mDFC0D4AF832F37C18489DC39523EEBB79DFA9CE9 (void);
// 0x000008AA System.Void System.Net.WebConnection::Reset()
extern void WebConnection_Reset_m6E4DE2B11C92A3D9E0E39334FCA592210FC5B365 (void);
// 0x000008AB System.Void System.Net.WebConnection::Close(System.Boolean)
extern void WebConnection_Close_m933CA0D7F0035240D065F46E1AE785FD63B0B39B (void);
// 0x000008AC System.Void System.Net.WebConnection::CloseSocket()
extern void WebConnection_CloseSocket_m44529A19D180D276A0E8CCC37214EFDA79531066 (void);
// 0x000008AD System.Boolean System.Net.WebConnection::get_Closed()
extern void WebConnection_get_Closed_m57695E3E21A470771ACC4BB51F7D458A3AF11C38 (void);
// 0x000008AE System.DateTime System.Net.WebConnection::get_IdleSince()
extern void WebConnection_get_IdleSince_m438D8EDBBCBED80A50DBA68157524071A8821996 (void);
// 0x000008AF System.Boolean System.Net.WebConnection::StartOperation(System.Net.WebOperation,System.Boolean)
extern void WebConnection_StartOperation_m46E0625E6DEC4774038C14E26E6A01D27B3795A0 (void);
// 0x000008B0 System.Boolean System.Net.WebConnection::Continue(System.Net.WebOperation)
extern void WebConnection_Continue_m536451B677626949F6EFB3DAFF0ADC7435A398AE (void);
// 0x000008B1 System.Void System.Net.WebConnection::Dispose(System.Boolean)
extern void WebConnection_Dispose_m2963FD55969DF8CD444BF8F474BDDB47CC3F9131 (void);
// 0x000008B2 System.Void System.Net.WebConnection::Dispose()
extern void WebConnection_Dispose_mBEE3F492227683C724016592F03F4C7F596EE2D9 (void);
// 0x000008B3 System.Void System.Net.WebConnection::ResetNtlm()
extern void WebConnection_ResetNtlm_mA795AAB8FC79C964C57037A2B4B6FDDBEA528F86 (void);
// 0x000008B4 System.Boolean System.Net.WebConnection::get_NtlmAuthenticated()
extern void WebConnection_get_NtlmAuthenticated_mAB6DD673F61C1EF4D987F5E96012F692DB74B4EF (void);
// 0x000008B5 System.Net.NetworkCredential System.Net.WebConnection::get_NtlmCredential()
extern void WebConnection_get_NtlmCredential_m7B7C31595CB77DF9BD65A61E37EBDDF0CF2F4157 (void);
// 0x000008B6 System.Boolean System.Net.WebConnection::get_UnsafeAuthenticatedConnectionSharing()
extern void WebConnection_get_UnsafeAuthenticatedConnectionSharing_mB5EED9A1BDADE240F089B75E4C0324DBC76443ED (void);
// 0x000008B7 System.Void System.Net.WebConnection/<Connect>d__16::MoveNext()
extern void U3CConnectU3Ed__16_MoveNext_mEB63217D6C098F196308214C489160EADCE4B41E (void);
// 0x000008B8 System.Void System.Net.WebConnection/<Connect>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CConnectU3Ed__16_SetStateMachine_mB2CCC51319916425CFB8E8A932D947461DBB10A7 (void);
// 0x000008B9 System.Void System.Net.WebConnection/<CreateStream>d__18::MoveNext()
extern void U3CCreateStreamU3Ed__18_MoveNext_m3FB7E2688C0A60D5555D4413F840ED7199FC9354 (void);
// 0x000008BA System.Void System.Net.WebConnection/<CreateStream>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCreateStreamU3Ed__18_SetStateMachine_m4EFABF7CC601609A1FE4622F7E7CA5324E70EE79 (void);
// 0x000008BB System.Void System.Net.WebConnection/<InitConnection>d__19::MoveNext()
extern void U3CInitConnectionU3Ed__19_MoveNext_m396689491D2B75E51FFE763D6D3E7A69DE744EFA (void);
// 0x000008BC System.Void System.Net.WebConnection/<InitConnection>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitConnectionU3Ed__19_SetStateMachine_m8D2B4707FC7E89FAA0C45018CD7C681D36430EFF (void);
// 0x000008BD System.Void System.Net.WebConnectionStream::.ctor(System.Net.WebConnection,System.Net.WebOperation,System.IO.Stream)
extern void WebConnectionStream__ctor_mF872041D2E74EF24E21E3E972B333D6AFCD7DE45 (void);
// 0x000008BE System.Net.HttpWebRequest System.Net.WebConnectionStream::get_Request()
extern void WebConnectionStream_get_Request_m31D1A8BD789373DC74A6ACED727E3A46A972BA0B (void);
// 0x000008BF System.Net.WebConnection System.Net.WebConnectionStream::get_Connection()
extern void WebConnectionStream_get_Connection_m24DACC6F27A46E8201E23C10F3A4CB322136F546 (void);
// 0x000008C0 System.Net.WebOperation System.Net.WebConnectionStream::get_Operation()
extern void WebConnectionStream_get_Operation_mD926B0BCCEBE04C640DE920C22736C109E95FF27 (void);
// 0x000008C1 System.Net.ServicePoint System.Net.WebConnectionStream::get_ServicePoint()
extern void WebConnectionStream_get_ServicePoint_m45B010E6F46DD10EC0085D2A755192F7953AF7FE (void);
// 0x000008C2 System.IO.Stream System.Net.WebConnectionStream::get_InnerStream()
extern void WebConnectionStream_get_InnerStream_mBDB28CD345C11AF699A2FC0BB23A8BE5344C2392 (void);
// 0x000008C3 System.Int32 System.Net.WebConnectionStream::get_ReadTimeout()
extern void WebConnectionStream_get_ReadTimeout_m2F9FBB43610D9D1CCB3845AAA3D1C8173C585E98 (void);
// 0x000008C4 System.Void System.Net.WebConnectionStream::set_ReadTimeout(System.Int32)
extern void WebConnectionStream_set_ReadTimeout_m3FFA3C522E4D32F6A95DBB25DE8D5A7AF157BF81 (void);
// 0x000008C5 System.Int32 System.Net.WebConnectionStream::get_WriteTimeout()
extern void WebConnectionStream_get_WriteTimeout_mA9C97020355F23605DB65D3B4DA00580293A9E08 (void);
// 0x000008C6 System.Exception System.Net.WebConnectionStream::GetException(System.Exception)
extern void WebConnectionStream_GetException_m6DBCD22930C9FA85C7AA7657B14C7EEB2AFF7C4E (void);
// 0x000008C7 System.Int32 System.Net.WebConnectionStream::Read(System.Byte[],System.Int32,System.Int32)
extern void WebConnectionStream_Read_mABF6F6F51B242007D4E222D759E21D29E5D34211 (void);
// 0x000008C8 System.IAsyncResult System.Net.WebConnectionStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void WebConnectionStream_BeginRead_m314763D5FB54B42A4053EAFC9B2370EBDA260A34 (void);
// 0x000008C9 System.Int32 System.Net.WebConnectionStream::EndRead(System.IAsyncResult)
extern void WebConnectionStream_EndRead_m18BF8FEE05E2E535C6575E534788EE7EE3209A8C (void);
// 0x000008CA System.IAsyncResult System.Net.WebConnectionStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void WebConnectionStream_BeginWrite_m3DD2EEE593B2B833A38C558767A3B079DA5D1266 (void);
// 0x000008CB System.Void System.Net.WebConnectionStream::EndWrite(System.IAsyncResult)
extern void WebConnectionStream_EndWrite_m3DC8BB5F128078BEB717DBD95DB226359553F7E0 (void);
// 0x000008CC System.Void System.Net.WebConnectionStream::Write(System.Byte[],System.Int32,System.Int32)
extern void WebConnectionStream_Write_mF986800AF0DCF76B493AE2DF5C42A6A74EB0CE22 (void);
// 0x000008CD System.Void System.Net.WebConnectionStream::Flush()
extern void WebConnectionStream_Flush_m950DB4413290E81E173DCBEC9AB1068C4A30A1BC (void);
// 0x000008CE System.Void System.Net.WebConnectionStream::Close_internal(System.Boolean&)
// 0x000008CF System.Void System.Net.WebConnectionStream::Close()
extern void WebConnectionStream_Close_m0E9E2A45F334F3FE35BC1AC3863C4B920E8CB19F (void);
// 0x000008D0 System.Int64 System.Net.WebConnectionStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void WebConnectionStream_Seek_mF86E40521CE458F7161B44E7F331B300074628B4 (void);
// 0x000008D1 System.Void System.Net.WebConnectionStream::SetLength(System.Int64)
extern void WebConnectionStream_SetLength_m119DE8046585F7A57C8BEA6FE89B7168193AC9D3 (void);
// 0x000008D2 System.Boolean System.Net.WebConnectionStream::get_CanSeek()
extern void WebConnectionStream_get_CanSeek_mD13C72C871EAC22402CB5B230C2CB9D99CE61F2C (void);
// 0x000008D3 System.Int64 System.Net.WebConnectionStream::get_Position()
extern void WebConnectionStream_get_Position_m6D7E6A53CF48C45093266ADE7FC889D681705F57 (void);
// 0x000008D4 System.Void System.Net.WebConnectionStream::set_Position(System.Int64)
extern void WebConnectionStream_set_Position_m6F7F1305688B252546E7E0A141F22A30C1BB7F70 (void);
// 0x000008D5 System.Net.HttpWebRequest System.Net.WebConnectionTunnel::get_Request()
extern void WebConnectionTunnel_get_Request_m854755E223BC5C5FEC995DD70CA49A5E2E70A81D (void);
// 0x000008D6 System.Uri System.Net.WebConnectionTunnel::get_ConnectUri()
extern void WebConnectionTunnel_get_ConnectUri_mC562A52AB02C3E2A7CDF1F574E64F23C945FF65E (void);
// 0x000008D7 System.Void System.Net.WebConnectionTunnel::.ctor(System.Net.HttpWebRequest,System.Uri)
extern void WebConnectionTunnel__ctor_mC4DA6196816E67A27BB9E0D05B92960E1CC914BE (void);
// 0x000008D8 System.Boolean System.Net.WebConnectionTunnel::get_Success()
extern void WebConnectionTunnel_get_Success_m7D4CBF6B2B89A355C4650F4533BAE0EB9A40A028 (void);
// 0x000008D9 System.Void System.Net.WebConnectionTunnel::set_Success(System.Boolean)
extern void WebConnectionTunnel_set_Success_m4DBAE18418878E7BAE23417DF199871597CF6DA0 (void);
// 0x000008DA System.Boolean System.Net.WebConnectionTunnel::get_CloseConnection()
extern void WebConnectionTunnel_get_CloseConnection_m818F371F6680BC85D1193700D8D97D1D753D09EF (void);
// 0x000008DB System.Void System.Net.WebConnectionTunnel::set_CloseConnection(System.Boolean)
extern void WebConnectionTunnel_set_CloseConnection_m1CA93DB72BCD1912FECC83507EC7EFAF0E4D5AAE (void);
// 0x000008DC System.Int32 System.Net.WebConnectionTunnel::get_StatusCode()
extern void WebConnectionTunnel_get_StatusCode_mFEBBA957B2EEEAA041D1C3BF9363FC2F72F2C465 (void);
// 0x000008DD System.Void System.Net.WebConnectionTunnel::set_StatusCode(System.Int32)
extern void WebConnectionTunnel_set_StatusCode_m9773B3003125B64DA4122CEE4EB4B43FC2514D44 (void);
// 0x000008DE System.Void System.Net.WebConnectionTunnel::set_StatusDescription(System.String)
extern void WebConnectionTunnel_set_StatusDescription_m61A753CB6A4A4AB1A283B76DA66C578C007967AB (void);
// 0x000008DF System.String[] System.Net.WebConnectionTunnel::get_Challenge()
extern void WebConnectionTunnel_get_Challenge_m3B90F15016F2390A72371CA10CCCEC6FA5B8891A (void);
// 0x000008E0 System.Void System.Net.WebConnectionTunnel::set_Challenge(System.String[])
extern void WebConnectionTunnel_set_Challenge_mD2DDCD2B2E315CCBE10BFEA2AC0BC8D8BE38068B (void);
// 0x000008E1 System.Net.WebHeaderCollection System.Net.WebConnectionTunnel::get_Headers()
extern void WebConnectionTunnel_get_Headers_m2685D5B1926DE9771F73F46BDC0FB7FEBA1A97B7 (void);
// 0x000008E2 System.Void System.Net.WebConnectionTunnel::set_Headers(System.Net.WebHeaderCollection)
extern void WebConnectionTunnel_set_Headers_m296EDB675AA79A87230997F6F5B4B02815B8683B (void);
// 0x000008E3 System.Version System.Net.WebConnectionTunnel::get_ProxyVersion()
extern void WebConnectionTunnel_get_ProxyVersion_m4417818E7B7FF62884A20FA98177532E4AF16585 (void);
// 0x000008E4 System.Void System.Net.WebConnectionTunnel::set_ProxyVersion(System.Version)
extern void WebConnectionTunnel_set_ProxyVersion_m3ED06ACF064AEAE2C7870F017EE940A1F5DEE4EE (void);
// 0x000008E5 System.Byte[] System.Net.WebConnectionTunnel::get_Data()
extern void WebConnectionTunnel_get_Data_mFD592CF9B58AD5FF3CB7255DE5270ABD5DA32AF9 (void);
// 0x000008E6 System.Void System.Net.WebConnectionTunnel::set_Data(System.Byte[])
extern void WebConnectionTunnel_set_Data_mFEB1673B3C2B406186148507DE986203E5716912 (void);
// 0x000008E7 System.Threading.Tasks.Task System.Net.WebConnectionTunnel::Initialize(System.IO.Stream,System.Threading.CancellationToken)
extern void WebConnectionTunnel_Initialize_m4E47AAC422AE06CF9A9F9D602047CBD9F8C545DC (void);
// 0x000008E8 System.Threading.Tasks.Task`1<System.ValueTuple`3<System.Net.WebHeaderCollection,System.Byte[],System.Int32>> System.Net.WebConnectionTunnel::ReadHeaders(System.IO.Stream,System.Threading.CancellationToken)
extern void WebConnectionTunnel_ReadHeaders_mBA6E3DC30DD1C20E3504DA642E595709E85B5472 (void);
// 0x000008E9 System.Void System.Net.WebConnectionTunnel::FlushContents(System.IO.Stream,System.Int32)
extern void WebConnectionTunnel_FlushContents_m7CB35C06C7F996D39D36453BBC07311A06C51453 (void);
// 0x000008EA System.Void System.Net.WebConnectionTunnel/<Initialize>d__42::MoveNext()
extern void U3CInitializeU3Ed__42_MoveNext_mA878653739B7D35EC6FA983C454ADB1E2EDE7198 (void);
// 0x000008EB System.Void System.Net.WebConnectionTunnel/<Initialize>d__42::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitializeU3Ed__42_SetStateMachine_mC32D06832DAC6E6C66B575E7F3731A07522F7E7B (void);
// 0x000008EC System.Void System.Net.WebConnectionTunnel/<ReadHeaders>d__43::MoveNext()
extern void U3CReadHeadersU3Ed__43_MoveNext_m66807FF7B720D84756A57A9E1D93E4F451028F0A (void);
// 0x000008ED System.Void System.Net.WebConnectionTunnel/<ReadHeaders>d__43::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReadHeadersU3Ed__43_SetStateMachine_mD5271A894FEAB056FF0A3A0CA031CCF07D2783FE (void);
// 0x000008EE System.Net.HttpWebRequest System.Net.WebOperation::get_Request()
extern void WebOperation_get_Request_mB1091077143B80719FE649110A15F70911582271 (void);
// 0x000008EF System.Net.WebConnection System.Net.WebOperation::get_Connection()
extern void WebOperation_get_Connection_m5BA0B37AA90173084BA428974AB4AABE79E19909 (void);
// 0x000008F0 System.Void System.Net.WebOperation::set_Connection(System.Net.WebConnection)
extern void WebOperation_set_Connection_m09AC5A801D5ABABB7AF0B1E83B7FB2951D5E9973 (void);
// 0x000008F1 System.Void System.Net.WebOperation::set_ServicePoint(System.Net.ServicePoint)
extern void WebOperation_set_ServicePoint_mB572C9555AAA1AB3C15CAE4438FB39960B46373F (void);
// 0x000008F2 System.Net.BufferOffsetSize System.Net.WebOperation::get_WriteBuffer()
extern void WebOperation_get_WriteBuffer_m2EED632D91930EABBF02755727B684A045C7C338 (void);
// 0x000008F3 System.Boolean System.Net.WebOperation::get_IsNtlmChallenge()
extern void WebOperation_get_IsNtlmChallenge_m1B1673DE65412A409E3EEBFC4060CAEC20B21AA0 (void);
// 0x000008F4 System.Boolean System.Net.WebOperation::get_Aborted()
extern void WebOperation_get_Aborted_mE8B5B917AA2928AD1D2927847AF43DB001BA5FA1 (void);
// 0x000008F5 System.Boolean System.Net.WebOperation::get_Closed()
extern void WebOperation_get_Closed_m75D88AC99B9DAC041F17209FFFDFD32271E5D7F5 (void);
// 0x000008F6 System.Void System.Net.WebOperation::Abort()
extern void WebOperation_Abort_mE41B80D197393221CB1360218916ACF5AA549241 (void);
// 0x000008F7 System.Void System.Net.WebOperation::Close()
extern void WebOperation_Close_m84A73B14EB08BC1E6B9BD9568224DC0E8658B3B4 (void);
// 0x000008F8 System.Void System.Net.WebOperation::SetCanceled()
extern void WebOperation_SetCanceled_mE8C97926BDA6F197FDB5CE6558346FC3E880586F (void);
// 0x000008F9 System.Void System.Net.WebOperation::SetError(System.Exception)
extern void WebOperation_SetError_m91725330B5ECC9C50B5FE0A7B0182E7E336D7543 (void);
// 0x000008FA System.ValueTuple`2<System.Runtime.ExceptionServices.ExceptionDispatchInfo,System.Boolean> System.Net.WebOperation::SetDisposed(System.Runtime.ExceptionServices.ExceptionDispatchInfo&)
extern void WebOperation_SetDisposed_m9323D7A6B873E04DF0DB866B4090933E9CBC6DC5 (void);
// 0x000008FB System.Void System.Net.WebOperation::ThrowIfDisposed(System.Threading.CancellationToken)
extern void WebOperation_ThrowIfDisposed_m8D3588C44D204F9F74E2CCCE68154895773012A8 (void);
// 0x000008FC System.Void System.Net.WebOperation::ThrowIfClosedOrDisposed()
extern void WebOperation_ThrowIfClosedOrDisposed_m6673240688C90C5AECCBDB0B25F32630B9BA6484 (void);
// 0x000008FD System.Void System.Net.WebOperation::ThrowIfClosedOrDisposed(System.Threading.CancellationToken)
extern void WebOperation_ThrowIfClosedOrDisposed_m60B0575848144EA9E85C4DD21C06C003C6808658 (void);
// 0x000008FE System.Void System.Net.WebOperation::ThrowDisposed(System.Runtime.ExceptionServices.ExceptionDispatchInfo&)
extern void WebOperation_ThrowDisposed_mD4E027DAB28AF12E62B81C1C28AF385C0AED9BD5 (void);
// 0x000008FF System.Void System.Net.WebOperation::RegisterRequest(System.Net.ServicePoint,System.Net.WebConnection)
extern void WebOperation_RegisterRequest_mAC10611260AAF14B2D6D59693AAFE49F5D215C81 (void);
// 0x00000900 System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Boolean,System.Net.WebOperation>> System.Net.WebOperation::WaitForCompletion(System.Boolean)
extern void WebOperation_WaitForCompletion_mEEA70E037226C713250AD0B867C013E9DC57E0CE (void);
// 0x00000901 System.Void System.Net.WebOperation::Run()
extern void WebOperation_Run_m3046F6EBFDEB99E5365E5B993942FD55D4326B9F (void);
// 0x00000902 System.Void System.Net.WebOperation::FinishReading()
extern void WebOperation_FinishReading_m1A0419E854997271164EBF7A87FA60AC4C77630C (void);
// 0x00000903 System.Void System.Net.WebOperation::CompleteRequestWritten(System.Net.WebRequestStream,System.Exception)
extern void WebOperation_CompleteRequestWritten_m9E77048701E7E20C0966C26557EC65C498DBBF4D (void);
// 0x00000904 System.Void System.Net.WebOperation::CompleteResponseRead(System.Boolean,System.Exception)
extern void WebOperation_CompleteResponseRead_m2B7B659DD2152E9743269047312830E3A3A99CE3 (void);
// 0x00000905 System.Void System.Net.WebOperation::<RegisterRequest>b__46_0()
extern void WebOperation_U3CRegisterRequestU3Eb__46_0_mFB2A01901574B5B53353630C9A9F2098A2CC85A6 (void);
// 0x00000906 System.Void System.Net.WebOperation/<WaitForCompletion>d__53::MoveNext()
extern void U3CWaitForCompletionU3Ed__53_MoveNext_mC81A3A0933F623954DB9275F08521DE6994C84D7 (void);
// 0x00000907 System.Void System.Net.WebOperation/<WaitForCompletion>d__53::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWaitForCompletionU3Ed__53_SetStateMachine_m040F93A7A42E248867F85E97AA7E2C4320545B2F (void);
// 0x00000908 System.Void System.Net.WebOperation/<Run>d__54::MoveNext()
extern void U3CRunU3Ed__54_MoveNext_m210E7A06384CC4F743FCE9492711BC6117A10B8D (void);
// 0x00000909 System.Void System.Net.WebOperation/<Run>d__54::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CRunU3Ed__54_SetStateMachine_m971F8C7DD243CCCBDF6C26AF71D0EF7CBBC9E43F (void);
// 0x0000090A System.Void System.Net.WebOperation/<FinishReading>d__55::MoveNext()
extern void U3CFinishReadingU3Ed__55_MoveNext_m8B454DF74AA31F352E4D71E14461AC683CCE5E6C (void);
// 0x0000090B System.Void System.Net.WebOperation/<FinishReading>d__55::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CFinishReadingU3Ed__55_SetStateMachine_m927A312EBE065922167728DA0930608F1A2E009D (void);
// 0x0000090C System.Void System.Net.WebRequestStream::.ctor(System.Net.WebConnection,System.Net.WebOperation,System.IO.Stream,System.Net.WebConnectionTunnel)
extern void WebRequestStream__ctor_m1E4762CA320DE5AAA3072859DDE4638FF9D6D256 (void);
// 0x0000090D System.Boolean System.Net.WebRequestStream::get_KeepAlive()
extern void WebRequestStream_get_KeepAlive_m768D5DBEF1F75A8A4FD093C67756806817E461BC (void);
// 0x0000090E System.Int64 System.Net.WebRequestStream::get_Length()
extern void WebRequestStream_get_Length_mE0BE891F37B7A01051A476DEB02410E25269CAC1 (void);
// 0x0000090F System.Boolean System.Net.WebRequestStream::get_CanRead()
extern void WebRequestStream_get_CanRead_mDEE66AEEED304703B9B6E3D82E4B012301FA0258 (void);
// 0x00000910 System.Boolean System.Net.WebRequestStream::get_CanWrite()
extern void WebRequestStream_get_CanWrite_m2464E693E4527D40C9739DB641705A64C3B845C5 (void);
// 0x00000911 System.Boolean System.Net.WebRequestStream::get_HasWriteBuffer()
extern void WebRequestStream_get_HasWriteBuffer_mA3E4AC0B0D72FDA2D8302ABEC5537AECAE9E3FE2 (void);
// 0x00000912 System.Int32 System.Net.WebRequestStream::get_WriteBufferLength()
extern void WebRequestStream_get_WriteBufferLength_m7273B48C66EA74818498EA8B0A27BFC9E6DA81D8 (void);
// 0x00000913 System.Net.BufferOffsetSize System.Net.WebRequestStream::GetWriteBuffer()
extern void WebRequestStream_GetWriteBuffer_m1DFC67A5EA52C446730DAEF5594B2EB729E52B73 (void);
// 0x00000914 System.Threading.Tasks.Task System.Net.WebRequestStream::FinishWriting(System.Threading.CancellationToken)
extern void WebRequestStream_FinishWriting_mFF7BB10C3B179C0B8469F65AF536261A8873FB0B (void);
// 0x00000915 System.Threading.Tasks.Task System.Net.WebRequestStream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void WebRequestStream_WriteAsync_mD21F06BE5B33576334C72814E7E0515136AA6E40 (void);
// 0x00000916 System.Threading.Tasks.Task System.Net.WebRequestStream::ProcessWrite(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void WebRequestStream_ProcessWrite_mCEACCFB38FB8F3C26A2718F8F0C74D6E6D05D450 (void);
// 0x00000917 System.Void System.Net.WebRequestStream::CheckWriteOverflow(System.Int64,System.Int64,System.Int64)
extern void WebRequestStream_CheckWriteOverflow_m889FAFB4E76D3F3DD7A6E1C660DAA9E1A64BA92C (void);
// 0x00000918 System.Threading.Tasks.Task System.Net.WebRequestStream::Initialize(System.Threading.CancellationToken)
extern void WebRequestStream_Initialize_m9AB5AF89B32E4A734277F14CFB22D528B2A4C693 (void);
// 0x00000919 System.Threading.Tasks.Task System.Net.WebRequestStream::SetHeadersAsync(System.Boolean,System.Threading.CancellationToken)
extern void WebRequestStream_SetHeadersAsync_m6E054C44427066ECB892E300ADCCF77FA0B65576 (void);
// 0x0000091A System.Threading.Tasks.Task System.Net.WebRequestStream::WriteRequestAsync(System.Threading.CancellationToken)
extern void WebRequestStream_WriteRequestAsync_mD55858804426CFBBBD287C4321DEFBC04381D955 (void);
// 0x0000091B System.Threading.Tasks.Task System.Net.WebRequestStream::WriteChunkTrailer_inner(System.Threading.CancellationToken)
extern void WebRequestStream_WriteChunkTrailer_inner_mB9ACA2F04A6C7024581EEEF25FAA2CC9F1593466 (void);
// 0x0000091C System.Threading.Tasks.Task System.Net.WebRequestStream::WriteChunkTrailer()
extern void WebRequestStream_WriteChunkTrailer_mF59A176F276BB50EE987FFE8BAE5B128CA77DE1C (void);
// 0x0000091D System.Void System.Net.WebRequestStream::KillBuffer()
extern void WebRequestStream_KillBuffer_m7C1E8F89D4C6325E8AD36F3C6B009318E6C20980 (void);
// 0x0000091E System.Threading.Tasks.Task`1<System.Int32> System.Net.WebRequestStream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void WebRequestStream_ReadAsync_mC17F1F32C533E01DFE1946C80193348386FDD2C3 (void);
// 0x0000091F System.Void System.Net.WebRequestStream::Close_internal(System.Boolean&)
extern void WebRequestStream_Close_internal_mDF8B37843D6CA69182DC02F7C001AC763D119435 (void);
// 0x00000920 System.Void System.Net.WebRequestStream::.cctor()
extern void WebRequestStream__cctor_mB544F0E5CDFA1B2317464C4DA79F09E5681B36ED (void);
// 0x00000921 System.Void System.Net.WebRequestStream/<FinishWriting>d__30::MoveNext()
extern void U3CFinishWritingU3Ed__30_MoveNext_m522142884C6AFC833AD0853853C82CC9CD9E7640 (void);
// 0x00000922 System.Void System.Net.WebRequestStream/<FinishWriting>d__30::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CFinishWritingU3Ed__30_SetStateMachine_m6E9B7917343EB1C33D6093342284C03110F9F40C (void);
// 0x00000923 System.Void System.Net.WebRequestStream/<WriteAsync>d__31::MoveNext()
extern void U3CWriteAsyncU3Ed__31_MoveNext_mE07D8D1AD16CBA6048010B85CDF041D8216D37D1 (void);
// 0x00000924 System.Void System.Net.WebRequestStream/<WriteAsync>d__31::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWriteAsyncU3Ed__31_SetStateMachine_m8E588C911260D17ABD0AF8CF57BD5DE4E9951C92 (void);
// 0x00000925 System.Void System.Net.WebRequestStream/<ProcessWrite>d__32::MoveNext()
extern void U3CProcessWriteU3Ed__32_MoveNext_mE7F133DD2645BB01545545074EF827412948B662 (void);
// 0x00000926 System.Void System.Net.WebRequestStream/<ProcessWrite>d__32::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CProcessWriteU3Ed__32_SetStateMachine_mCF8F144818C8E2F3E7F6F138805708B5704329C6 (void);
// 0x00000927 System.Void System.Net.WebRequestStream/<Initialize>d__34::MoveNext()
extern void U3CInitializeU3Ed__34_MoveNext_m87CFB94091EE7D19C8BBD9ED129BC52E8A142C0E (void);
// 0x00000928 System.Void System.Net.WebRequestStream/<Initialize>d__34::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitializeU3Ed__34_SetStateMachine_m6F9997F624BCE5FB0A3C19C7ECBD2DAE6F567157 (void);
// 0x00000929 System.Void System.Net.WebRequestStream/<SetHeadersAsync>d__35::MoveNext()
extern void U3CSetHeadersAsyncU3Ed__35_MoveNext_m5AAA8EE190A8C526FCE9C2136A475CBD005647FB (void);
// 0x0000092A System.Void System.Net.WebRequestStream/<SetHeadersAsync>d__35::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSetHeadersAsyncU3Ed__35_SetStateMachine_m91F3E2057AC4865493B9D0A6D2DC56C1F99FE4D7 (void);
// 0x0000092B System.Void System.Net.WebRequestStream/<WriteRequestAsync>d__36::MoveNext()
extern void U3CWriteRequestAsyncU3Ed__36_MoveNext_m3477695B7BE13EE4A72D517FC57275B93304FEDB (void);
// 0x0000092C System.Void System.Net.WebRequestStream/<WriteRequestAsync>d__36::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWriteRequestAsyncU3Ed__36_SetStateMachine_m2507D0217F5B2222BC4E3C5A6D2A7006A8B4915B (void);
// 0x0000092D System.Void System.Net.WebRequestStream/<WriteChunkTrailer_inner>d__37::MoveNext()
extern void U3CWriteChunkTrailer_innerU3Ed__37_MoveNext_m787FA052DBF18A7F46C2F28EE08ED905C63FDCDD (void);
// 0x0000092E System.Void System.Net.WebRequestStream/<WriteChunkTrailer_inner>d__37::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWriteChunkTrailer_innerU3Ed__37_SetStateMachine_m9E290ADA4A330860919E42BDC86A7E4815B869B6 (void);
// 0x0000092F System.Void System.Net.WebRequestStream/<WriteChunkTrailer>d__38::MoveNext()
extern void U3CWriteChunkTrailerU3Ed__38_MoveNext_m417D51A5680BA19B0AD0C200F93DAE44DE1B6D82 (void);
// 0x00000930 System.Void System.Net.WebRequestStream/<WriteChunkTrailer>d__38::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWriteChunkTrailerU3Ed__38_SetStateMachine_mD188F0271511AEEE15639673CF2EE7D0B77A68FF (void);
// 0x00000931 System.Net.WebRequestStream System.Net.WebResponseStream::get_RequestStream()
extern void WebResponseStream_get_RequestStream_mEAC92D301B0FCC7519397FD5B4122E130BFE4413 (void);
// 0x00000932 System.Net.WebHeaderCollection System.Net.WebResponseStream::get_Headers()
extern void WebResponseStream_get_Headers_mA7D647A682410D694CC962C67D38EEA488C4A9A3 (void);
// 0x00000933 System.Void System.Net.WebResponseStream::set_Headers(System.Net.WebHeaderCollection)
extern void WebResponseStream_set_Headers_m6951809BC68459A5E93590F6CA8831C8364C6D35 (void);
// 0x00000934 System.Net.HttpStatusCode System.Net.WebResponseStream::get_StatusCode()
extern void WebResponseStream_get_StatusCode_m837CED65B650A68F08F672C9B4FF3A074CE06B94 (void);
// 0x00000935 System.Void System.Net.WebResponseStream::set_StatusCode(System.Net.HttpStatusCode)
extern void WebResponseStream_set_StatusCode_m344C2490038B83A09DF02292150286B5F79D25B7 (void);
// 0x00000936 System.Void System.Net.WebResponseStream::set_StatusDescription(System.String)
extern void WebResponseStream_set_StatusDescription_m34658F195C1956277CF260E42F90281D1635C2CC (void);
// 0x00000937 System.Version System.Net.WebResponseStream::get_Version()
extern void WebResponseStream_get_Version_m4BBC5EA52F6A9B3FF1EA288ED90E97F17E593356 (void);
// 0x00000938 System.Void System.Net.WebResponseStream::set_Version(System.Version)
extern void WebResponseStream_set_Version_m72EEE603839655709B1631CCBF4B4A611F20A7C8 (void);
// 0x00000939 System.Boolean System.Net.WebResponseStream::get_KeepAlive()
extern void WebResponseStream_get_KeepAlive_mA5D60A2B11B32695537D0B117F6A88780F2F3129 (void);
// 0x0000093A System.Void System.Net.WebResponseStream::set_KeepAlive(System.Boolean)
extern void WebResponseStream_set_KeepAlive_m99646E88AC62918196EF76051F276DB871168FEF (void);
// 0x0000093B System.Void System.Net.WebResponseStream::.ctor(System.Net.WebRequestStream)
extern void WebResponseStream__ctor_m0BAC3E13A246CBB0A36B7DC53941C6C270DF1C3B (void);
// 0x0000093C System.Int64 System.Net.WebResponseStream::get_Length()
extern void WebResponseStream_get_Length_mA1D47A5FF33341965CBA2545BCA38E409B43B6BE (void);
// 0x0000093D System.Boolean System.Net.WebResponseStream::get_CanRead()
extern void WebResponseStream_get_CanRead_m005D1440411CC48616DB1AA75240CAFBC5EFD4DF (void);
// 0x0000093E System.Boolean System.Net.WebResponseStream::get_CanWrite()
extern void WebResponseStream_get_CanWrite_m58281836D5DAFC46ED4F5FFF338E1806603B8ABC (void);
// 0x0000093F System.Boolean System.Net.WebResponseStream::get_ChunkedRead()
extern void WebResponseStream_get_ChunkedRead_mA8BA2D5C7ABA1ED2FC2582CC1C0245AFB2B53A1D (void);
// 0x00000940 System.Void System.Net.WebResponseStream::set_ChunkedRead(System.Boolean)
extern void WebResponseStream_set_ChunkedRead_m0C07657582071F1DB3548C0C573F817E177C12E2 (void);
// 0x00000941 System.Net.MonoChunkStream System.Net.WebResponseStream::get_ChunkStream()
extern void WebResponseStream_get_ChunkStream_m41121A312D404D2755C053AE10EEA75D0322E230 (void);
// 0x00000942 System.Void System.Net.WebResponseStream::set_ChunkStream(System.Net.MonoChunkStream)
extern void WebResponseStream_set_ChunkStream_m476BC1EF1184C69DA6017EE6768B3E5205A8EDC4 (void);
// 0x00000943 System.Threading.Tasks.Task`1<System.Int32> System.Net.WebResponseStream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void WebResponseStream_ReadAsync_m0CF4AC206B44FF9ECB6968BBEBD4BA2A6237BCEB (void);
// 0x00000944 System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>> System.Net.WebResponseStream::ProcessRead(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void WebResponseStream_ProcessRead_m5F1E63E38495BF39090517B074D93D2A498A0CD9 (void);
// 0x00000945 System.Threading.Tasks.Task`1<System.Int32> System.Net.WebResponseStream::InnerReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void WebResponseStream_InnerReadAsync_mF9E73DCB18B268A205C95B53C9D416F5E35D4884 (void);
// 0x00000946 System.Threading.Tasks.Task`1<System.Int32> System.Net.WebResponseStream::EnsureReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void WebResponseStream_EnsureReadAsync_mABC1178EEDDD6B79EB2A462CE9B54F85BB9275BD (void);
// 0x00000947 System.Boolean System.Net.WebResponseStream::CheckAuthHeader(System.String)
extern void WebResponseStream_CheckAuthHeader_m48837BB7D4DCD8ADC557451298F3C86AA32CF719 (void);
// 0x00000948 System.Boolean System.Net.WebResponseStream::IsNtlmAuth()
extern void WebResponseStream_IsNtlmAuth_mB82855DE15357323D65EF46E80A6F350B4F09FD9 (void);
// 0x00000949 System.Boolean System.Net.WebResponseStream::get_ExpectContent()
extern void WebResponseStream_get_ExpectContent_m38071D64A4DF19D2F486F695FF9ED77EDA8343A8 (void);
// 0x0000094A System.Threading.Tasks.Task System.Net.WebResponseStream::Initialize(System.Net.BufferOffsetSize,System.Threading.CancellationToken)
extern void WebResponseStream_Initialize_m17AB32A6806B128F1B3BEAFBF139E78F79971899 (void);
// 0x0000094B System.Threading.Tasks.Task System.Net.WebResponseStream::ReadAllAsync(System.Boolean,System.Threading.CancellationToken)
extern void WebResponseStream_ReadAllAsync_m9FE18AD758116A3DF8BFF50772D4A22AC0055B1A (void);
// 0x0000094C System.Threading.Tasks.Task System.Net.WebResponseStream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void WebResponseStream_WriteAsync_mD43FBFA125976AC71302A501385A459EC30B306A (void);
// 0x0000094D System.Void System.Net.WebResponseStream::Close_internal(System.Boolean&)
extern void WebResponseStream_Close_internal_m7FBA54B660C2D07A7598E088B2748984996B3C71 (void);
// 0x0000094E System.Net.WebException System.Net.WebResponseStream::GetReadException(System.Net.WebExceptionStatus,System.Exception,System.String)
extern void WebResponseStream_GetReadException_m80701579A74C568DAA903BDCACC10B429140CE7A (void);
// 0x0000094F System.Threading.Tasks.Task System.Net.WebResponseStream::InitReadAsync(System.Threading.CancellationToken)
extern void WebResponseStream_InitReadAsync_mF1CBB4A0729C6BF3DD6C02F088CC5E2A11838750 (void);
// 0x00000950 System.Boolean System.Net.WebResponseStream::GetResponse(System.Net.BufferOffsetSize,System.Int32&,System.Net.ReadState&)
extern void WebResponseStream_GetResponse_m49683B937EF4A90B2E8C43CEC439260809C2DDB9 (void);
// 0x00000951 System.Void System.Net.WebResponseStream/<>c__DisplayClass48_0::.ctor()
extern void U3CU3Ec__DisplayClass48_0__ctor_m3447721E2745A5C9BE3D784D864C74C452360039 (void);
// 0x00000952 System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>> System.Net.WebResponseStream/<>c__DisplayClass48_0::<ReadAsync>b__0(System.Threading.CancellationToken)
extern void U3CU3Ec__DisplayClass48_0_U3CReadAsyncU3Eb__0_mB934112FF09A00740DDB288784335322994E1A2A (void);
// 0x00000953 System.Void System.Net.WebResponseStream/<>c__DisplayClass48_0::<ReadAsync>b__1()
extern void U3CU3Ec__DisplayClass48_0_U3CReadAsyncU3Eb__1_m658C4F1F07AD671D65CFB20E7814E8AB63585340 (void);
// 0x00000954 System.Void System.Net.WebResponseStream/<ReadAsync>d__48::MoveNext()
extern void U3CReadAsyncU3Ed__48_MoveNext_mB4A60C8C7BB4AF56B780F85926C561C5807DCE06 (void);
// 0x00000955 System.Void System.Net.WebResponseStream/<ReadAsync>d__48::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReadAsyncU3Ed__48_SetStateMachine_m58B2F63A13E7EFC239A32B6AB9A60D491513B4DE (void);
// 0x00000956 System.Void System.Net.WebResponseStream/<ProcessRead>d__49::MoveNext()
extern void U3CProcessReadU3Ed__49_MoveNext_mB72FF90C92F35FF051CB9E9EC8F64C38321C976B (void);
// 0x00000957 System.Void System.Net.WebResponseStream/<ProcessRead>d__49::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CProcessReadU3Ed__49_SetStateMachine_mD3CC965225487D75406604D438790F01E548C658 (void);
// 0x00000958 System.Void System.Net.WebResponseStream/<InnerReadAsync>d__50::MoveNext()
extern void U3CInnerReadAsyncU3Ed__50_MoveNext_m45CB1C220854EAC0B9B299F3DEDDC2AD57EC4E20 (void);
// 0x00000959 System.Void System.Net.WebResponseStream/<InnerReadAsync>d__50::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInnerReadAsyncU3Ed__50_SetStateMachine_m7782CBEBA56C7B21E57E24C75B712ADE8B5F5888 (void);
// 0x0000095A System.Void System.Net.WebResponseStream/<EnsureReadAsync>d__51::MoveNext()
extern void U3CEnsureReadAsyncU3Ed__51_MoveNext_m5F5FD3A07EB45D9EFEE6715981EE954B69AC2E4B (void);
// 0x0000095B System.Void System.Net.WebResponseStream/<EnsureReadAsync>d__51::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CEnsureReadAsyncU3Ed__51_SetStateMachine_mA8F68B170D9187F7430AA7EB9E5A3BFB9481A3C6 (void);
// 0x0000095C System.Void System.Net.WebResponseStream/<Initialize>d__56::MoveNext()
extern void U3CInitializeU3Ed__56_MoveNext_mB6A59995320329B5D86E8F4BDE2E77A2817FE667 (void);
// 0x0000095D System.Void System.Net.WebResponseStream/<Initialize>d__56::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitializeU3Ed__56_SetStateMachine_mD354F897FFD078B3C872B614172812143496A96F (void);
// 0x0000095E System.Void System.Net.WebResponseStream/<ReadAllAsync>d__57::MoveNext()
extern void U3CReadAllAsyncU3Ed__57_MoveNext_m4622AA6E5B32E06EF6A03EE34C0D3DF5D1BCA077 (void);
// 0x0000095F System.Void System.Net.WebResponseStream/<ReadAllAsync>d__57::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReadAllAsyncU3Ed__57_SetStateMachine_mFD1C3562CD2C91EE95511C7737CCFF4140FD30AF (void);
// 0x00000960 System.Void System.Net.WebResponseStream/<InitReadAsync>d__61::MoveNext()
extern void U3CInitReadAsyncU3Ed__61_MoveNext_mE77187E2C77E27D5FB47377BFDA7019F5E8DC774 (void);
// 0x00000961 System.Void System.Net.WebResponseStream/<InitReadAsync>d__61::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitReadAsyncU3Ed__61_SetStateMachine_m872F40B1403B745442B5E0A385B40FF2A1E79A6D (void);
// 0x00000962 System.Void System.Net.Mail.MailAddress::.ctor(System.String)
extern void MailAddress__ctor_m2F793AE87F1B3142BB2D02BD2BC31CEBE620654F (void);
// 0x00000963 System.Void System.Net.Mail.MailAddress::.ctor(System.String,System.String)
extern void MailAddress__ctor_mE9CD11F14E82D6CCA68EC5C4C7D94C5C133AFE76 (void);
// 0x00000964 System.Void System.Net.Mail.MailAddress::.ctor(System.String,System.String,System.Text.Encoding)
extern void MailAddress__ctor_m64FD6665EF2FF7818254C6834DF073B989963674 (void);
// 0x00000965 System.Void System.Net.Mail.MailAddress::ParseAddress(System.String)
extern void MailAddress_ParseAddress_m8DD55F68D58730E11DD1A1C2ADA858B9DEBAEA88 (void);
// 0x00000966 System.String System.Net.Mail.MailAddress::get_Address()
extern void MailAddress_get_Address_m174B765275209BFCFF3FE803274AABDB21B3EA04 (void);
// 0x00000967 System.String System.Net.Mail.MailAddress::get_DisplayName()
extern void MailAddress_get_DisplayName_mECD9F743E0CB217CAD7172595C5C8C5560C42875 (void);
// 0x00000968 System.Boolean System.Net.Mail.MailAddress::Equals(System.Object)
extern void MailAddress_Equals_mB9B7A535A362A831D4CB4AEB5B09F93830869CF6 (void);
// 0x00000969 System.Int32 System.Net.Mail.MailAddress::GetHashCode()
extern void MailAddress_GetHashCode_m7801DF2557684DB80A1BCB5D1C5971F3049F3D05 (void);
// 0x0000096A System.String System.Net.Mail.MailAddress::ToString()
extern void MailAddress_ToString_m7A44E2C336D030456012610B4D3F6BF23F5CF6BD (void);
// 0x0000096B System.FormatException System.Net.Mail.MailAddress::CreateFormatException()
extern void MailAddress_CreateFormatException_mE1564D9FEF16A3CD15B6D77732AE3F869705F67D (void);
// 0x0000096C System.Int32 System.Net.Sockets.SocketException::WSAGetLastError_internal()
extern void SocketException_WSAGetLastError_internal_m99F586D3C14E2051DBB53BEF3716A740EA9223E2 (void);
// 0x0000096D System.Void System.Net.Sockets.SocketException::.ctor()
extern void SocketException__ctor_mA4FA4C30962B1DD852904297C47EB05A9C97B7F9 (void);
// 0x0000096E System.Void System.Net.Sockets.SocketException::.ctor(System.Int32,System.String)
extern void SocketException__ctor_m2C4A0F01041E34F5CD85223333FDC23158250E4D (void);
// 0x0000096F System.Void System.Net.Sockets.SocketException::.ctor(System.Int32)
extern void SocketException__ctor_m4AA74DE46D28204456EFCCBBC5ACC841DA2941EF (void);
// 0x00000970 System.Void System.Net.Sockets.SocketException::.ctor(System.Net.Sockets.SocketError)
extern void SocketException__ctor_m8625815C7AFB0F3BF9287520D8F64A69199D6DCA (void);
// 0x00000971 System.Void System.Net.Sockets.SocketException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void SocketException__ctor_m59175465D17AE63C1E18A1B25D80AD41708A51B5 (void);
// 0x00000972 System.String System.Net.Sockets.SocketException::get_Message()
extern void SocketException_get_Message_mAC33600C2CC211D3C5C6363DAE3A843FD3E366EE (void);
// 0x00000973 System.Net.Sockets.SocketError System.Net.Sockets.SocketException::get_SocketErrorCode()
extern void SocketException_get_SocketErrorCode_m05A48632F6CC75FBD904E8E1AC56FC6B2577A131 (void);
// 0x00000974 System.Void System.Net.Sockets.LingerOption::.ctor(System.Boolean,System.Int32)
extern void LingerOption__ctor_m939C73C595D32F9A58592AC9FD8D66924C48E51A (void);
// 0x00000975 System.Void System.Net.Sockets.LingerOption::set_Enabled(System.Boolean)
extern void LingerOption_set_Enabled_m3F544534413C4239E4A0A6D39AE8FF28EEF04207 (void);
// 0x00000976 System.Void System.Net.Sockets.LingerOption::set_LingerTime(System.Int32)
extern void LingerOption_set_LingerTime_m4BF89E47E5A4D261B800DD00A8B73DA7EE719C37 (void);
// 0x00000977 System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket,System.Boolean)
extern void NetworkStream__ctor_mA1CC20301CE577D0D971E02452956141D21E2F48 (void);
// 0x00000978 System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::get_InternalSocket()
extern void NetworkStream_get_InternalSocket_m0F71D9478B11DF5AE9ADC8BD7F56B315B53F6F4B (void);
// 0x00000979 System.Boolean System.Net.Sockets.NetworkStream::get_CanRead()
extern void NetworkStream_get_CanRead_m18372499A3E8644ED054E324BBA2EDE1F2C0CA82 (void);
// 0x0000097A System.Boolean System.Net.Sockets.NetworkStream::get_CanSeek()
extern void NetworkStream_get_CanSeek_mF793B58986D542FC7310AC8933A3C26309919BCE (void);
// 0x0000097B System.Boolean System.Net.Sockets.NetworkStream::get_CanWrite()
extern void NetworkStream_get_CanWrite_mDAE8A9686A2B56E688133B8DC2E94976B16AA2CD (void);
// 0x0000097C System.Int32 System.Net.Sockets.NetworkStream::get_ReadTimeout()
extern void NetworkStream_get_ReadTimeout_m3601F6C548B89001D44C0D87C0A2701D5DD63433 (void);
// 0x0000097D System.Void System.Net.Sockets.NetworkStream::set_ReadTimeout(System.Int32)
extern void NetworkStream_set_ReadTimeout_m4CA42D36C1A6081EB6CDD305AF47C5987D84951C (void);
// 0x0000097E System.Int32 System.Net.Sockets.NetworkStream::get_WriteTimeout()
extern void NetworkStream_get_WriteTimeout_m9EA5F1B0F6654F3522ED9A90092F73B4AADD7BC4 (void);
// 0x0000097F System.Int64 System.Net.Sockets.NetworkStream::get_Length()
extern void NetworkStream_get_Length_mBC8427DF08F60DECB0627E20F5A561102A33F089 (void);
// 0x00000980 System.Int64 System.Net.Sockets.NetworkStream::get_Position()
extern void NetworkStream_get_Position_mEA82AACE1AD0E58FEC0AE134A56D64FF7A071F9A (void);
// 0x00000981 System.Void System.Net.Sockets.NetworkStream::set_Position(System.Int64)
extern void NetworkStream_set_Position_m80106F320BDA2FB13B11A93D302CE72A95859999 (void);
// 0x00000982 System.Int64 System.Net.Sockets.NetworkStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void NetworkStream_Seek_m7933D6E7EE305143454CDABFD5F512BCDE204CE0 (void);
// 0x00000983 System.Void System.Net.Sockets.NetworkStream::InitNetworkStream(System.Net.Sockets.Socket,System.IO.FileAccess)
extern void NetworkStream_InitNetworkStream_m2DB75A504D6CD4BE407683A11E2A37F93B1DFF52 (void);
// 0x00000984 System.Int32 System.Net.Sockets.NetworkStream::Read(System.Byte[],System.Int32,System.Int32)
extern void NetworkStream_Read_m519A834DAB398C347321493E82E7AB823EABEF36 (void);
// 0x00000985 System.Void System.Net.Sockets.NetworkStream::Write(System.Byte[],System.Int32,System.Int32)
extern void NetworkStream_Write_mA36470E3CEDC327EC179649541ABBBE1DB294F4C (void);
// 0x00000986 System.Void System.Net.Sockets.NetworkStream::Dispose(System.Boolean)
extern void NetworkStream_Dispose_mB2BCF75273D7AE5D5417E9B02E6630B5CCBCBD97 (void);
// 0x00000987 System.Void System.Net.Sockets.NetworkStream::Finalize()
extern void NetworkStream_Finalize_m67A14B9689E9E9775841BFA59A272347FAC5D40E (void);
// 0x00000988 System.IAsyncResult System.Net.Sockets.NetworkStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void NetworkStream_BeginRead_m237864822EAB5EA9D8221CA37B141C38E035A896 (void);
// 0x00000989 System.Int32 System.Net.Sockets.NetworkStream::EndRead(System.IAsyncResult)
extern void NetworkStream_EndRead_mDCD08C532B8346555DD2D31850D15C8A900ECEF5 (void);
// 0x0000098A System.IAsyncResult System.Net.Sockets.NetworkStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void NetworkStream_BeginWrite_m260304D17C2BAFBCF1601F8479DF20E3618AA9DE (void);
// 0x0000098B System.Void System.Net.Sockets.NetworkStream::EndWrite(System.IAsyncResult)
extern void NetworkStream_EndWrite_mE66E13187FAEFE8DBB41C5A8F5BE7D7BC3686E73 (void);
// 0x0000098C System.Void System.Net.Sockets.NetworkStream::Flush()
extern void NetworkStream_Flush_m29FFA75A5BE746CF8BA1381B48D4963ED38E0288 (void);
// 0x0000098D System.Threading.Tasks.Task System.Net.Sockets.NetworkStream::FlushAsync(System.Threading.CancellationToken)
extern void NetworkStream_FlushAsync_m6DFDF1F76CD42E35082C1FE71012B3F9363A55D7 (void);
// 0x0000098E System.Void System.Net.Sockets.NetworkStream::SetLength(System.Int64)
extern void NetworkStream_SetLength_mAB9261955C29DC6346EDDC2351B793C7F797D8CD (void);
// 0x0000098F System.Void System.Net.Sockets.NetworkStream::SetSocketTimeoutOption(System.Net.Sockets.SocketShutdown,System.Int32,System.Boolean)
extern void NetworkStream_SetSocketTimeoutOption_m9E73C579315BEB79DB9870FF3297E088D2897230 (void);
// 0x00000990 System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
extern void Socket__ctor_m5A4B335AEC1450ABE31CF1151F3F5A93D9D0280C (void);
// 0x00000991 System.Boolean System.Net.Sockets.Socket::get_SupportsIPv4()
extern void Socket_get_SupportsIPv4_m67DD850142E442FBE3FF1546CBF469BBF369209F (void);
// 0x00000992 System.Boolean System.Net.Sockets.Socket::get_OSSupportsIPv4()
extern void Socket_get_OSSupportsIPv4_mD2DA5FDCC675E30E930FC063C7DE0FD52D05C133 (void);
// 0x00000993 System.Boolean System.Net.Sockets.Socket::get_SupportsIPv6()
extern void Socket_get_SupportsIPv6_m26553C4F27984C90CFDD3307C799B5EB2CD7F737 (void);
// 0x00000994 System.Boolean System.Net.Sockets.Socket::get_OSSupportsIPv6()
extern void Socket_get_OSSupportsIPv6_mA6770B91BF46256850B2F2E09058B86538051728 (void);
// 0x00000995 System.IntPtr System.Net.Sockets.Socket::get_Handle()
extern void Socket_get_Handle_m90AE88992BB1B1BF82E680402CEB56A0EB10FFD4 (void);
// 0x00000996 System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::get_AddressFamily()
extern void Socket_get_AddressFamily_m390B53FAAF0DFF8E8BE844F83AFB06D9E53D891B (void);
// 0x00000997 System.Net.Sockets.SocketType System.Net.Sockets.Socket::get_SocketType()
extern void Socket_get_SocketType_m59C57C96B6DBA839FAFBB649491A059082D5D6F5 (void);
// 0x00000998 System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::get_ProtocolType()
extern void Socket_get_ProtocolType_m01D6FD7559F27913038834E519A4A54B81039644 (void);
// 0x00000999 System.Void System.Net.Sockets.Socket::set_DontFragment(System.Boolean)
extern void Socket_set_DontFragment_m12EFF1A7E7239447C5D8EBF54D7A43508CD8FC24 (void);
// 0x0000099A System.Boolean System.Net.Sockets.Socket::get_DualMode()
extern void Socket_get_DualMode_mD01944E72CD2FA47B9AA7DC1748BD9C4AE22835E (void);
// 0x0000099B System.Void System.Net.Sockets.Socket::set_DualMode(System.Boolean)
extern void Socket_set_DualMode_mAFC0E6235283469EF1DB58C56262202A9009CFFD (void);
// 0x0000099C System.Boolean System.Net.Sockets.Socket::get_IsDualMode()
extern void Socket_get_IsDualMode_m79CF98B9280D1A062087666B96A4D81C349EF9A1 (void);
// 0x0000099D System.Int32 System.Net.Sockets.Socket::Send(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags)
extern void Socket_Send_mB925DA11E47BB9772EDFC0DDFEE238EB3A1F98B5 (void);
// 0x0000099E System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern void Socket_Send_mF70EF17396CEA161F628B1923DA32463720D9A1E (void);
// 0x0000099F System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern void Socket_Receive_mA08EE1F9A870791CECAAC2FA2D4144ACBA6B4962 (void);
// 0x000009A0 System.Int32 System.Net.Sockets.Socket::Receive(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags)
extern void Socket_Receive_m6D95774528C89ED4777791E8EFC84ADFCD255A48 (void);
// 0x000009A1 System.Int32 System.Net.Sockets.Socket::IOControl(System.Net.Sockets.IOControlCode,System.Byte[],System.Byte[])
extern void Socket_IOControl_m2EF49352CCC97BBE1CA1E5577DE03A7A56CF5962 (void);
// 0x000009A2 System.Void System.Net.Sockets.Socket::SetIPProtectionLevel(System.Net.Sockets.IPProtectionLevel)
extern void Socket_SetIPProtectionLevel_m4E9FDB46A681CF2DA3FE641B417479815F9BBA0C (void);
// 0x000009A3 System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern void Socket_BeginSend_mFB97AF214E7F82B0B38434F844DA755AF18E612C (void);
// 0x000009A4 System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult)
extern void Socket_EndSend_mE56C2A95C12655CA7C3C6690382FC48B7E9AA45C (void);
// 0x000009A5 System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern void Socket_BeginReceive_mE0B06265B8AFC35DADCA4184D6C8B8A062BCDE73 (void);
// 0x000009A6 System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult)
extern void Socket_EndReceive_m46B15199B81401BF6B7B76242C6E3A7E8156749C (void);
// 0x000009A7 System.Object System.Net.Sockets.Socket::get_InternalSyncObject()
extern void Socket_get_InternalSyncObject_mA1850942FB6DD6B737EB52AE8A455F9EB25028C6 (void);
// 0x000009A8 System.Boolean System.Net.Sockets.Socket::get_CleanedUp()
extern void Socket_get_CleanedUp_m74D2A5015FB338E942B827B5AD89A618C51EFA35 (void);
// 0x000009A9 System.Void System.Net.Sockets.Socket::InitializeSockets()
extern void Socket_InitializeSockets_mE96516F52998F0D40A0BF13CB75A0051024C6330 (void);
// 0x000009AA System.Void System.Net.Sockets.Socket::Dispose()
extern void Socket_Dispose_mF84769B30DECB4A1F3AFE68C2A82D2787D8695C1 (void);
// 0x000009AB System.Void System.Net.Sockets.Socket::Finalize()
extern void Socket_Finalize_m2458A278B8DCA5B016DD41B50272FC85D8A332E4 (void);
// 0x000009AC System.Void System.Net.Sockets.Socket::InternalShutdown(System.Net.Sockets.SocketShutdown)
extern void Socket_InternalShutdown_mDA3F1ED617847E781AA826C43A833E7C978FD850 (void);
// 0x000009AD System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Int32,System.Boolean)
extern void Socket_SetSocketOption_m82AF3404BDE49D13BE5860C622D484AA52F1DD3B (void);
// 0x000009AE System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Net.Sockets.SafeSocketHandle)
extern void Socket__ctor_m8F2A88DD5CDD8D8B6715A4F74E3C29092245B091 (void);
// 0x000009AF System.Void System.Net.Sockets.Socket::SocketDefaults()
extern void Socket_SocketDefaults_m39FA910B28B5CF8833C6D363E343A43D45540F4F (void);
// 0x000009B0 System.IntPtr System.Net.Sockets.Socket::Socket_internal(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Int32&)
extern void Socket_Socket_internal_m686934059A2E5662CAB726E58C13EE6EB9283B00 (void);
// 0x000009B1 System.Boolean System.Net.Sockets.Socket::get_Blocking()
extern void Socket_get_Blocking_m808720CD768833CF2EB6F7F8AA462115AA3A1F8B (void);
// 0x000009B2 System.Void System.Net.Sockets.Socket::set_Blocking(System.Boolean)
extern void Socket_set_Blocking_m5DCBD637AD0FE63E9A67C1763C91A58799A314E2 (void);
// 0x000009B3 System.Void System.Net.Sockets.Socket::Blocking_internal(System.Net.Sockets.SafeSocketHandle,System.Boolean,System.Int32&)
extern void Socket_Blocking_internal_m651020D7329C77EDE7E34B92478FE29417DE7F85 (void);
// 0x000009B4 System.Void System.Net.Sockets.Socket::Blocking_internal(System.IntPtr,System.Boolean,System.Int32&)
extern void Socket_Blocking_internal_m4923453CF6D97A5B481B675E8048713908DF201F (void);
// 0x000009B5 System.Boolean System.Net.Sockets.Socket::get_Connected()
extern void Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0 (void);
// 0x000009B6 System.Void System.Net.Sockets.Socket::set_NoDelay(System.Boolean)
extern void Socket_set_NoDelay_m34DCB8BF5275A85E1687308D0D016E860F229732 (void);
// 0x000009B7 System.Boolean System.Net.Sockets.Socket::Poll(System.Int32,System.Net.Sockets.SelectMode)
extern void Socket_Poll_m82012C326974DCA0B8C57A98E68C3E099D52BF7C (void);
// 0x000009B8 System.Boolean System.Net.Sockets.Socket::Poll_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.SelectMode,System.Int32,System.Int32&)
extern void Socket_Poll_internal_m78737EA3ADB65C574765F0907534A1457B36D5AD (void);
// 0x000009B9 System.Boolean System.Net.Sockets.Socket::Poll_internal(System.IntPtr,System.Net.Sockets.SelectMode,System.Int32,System.Int32&)
extern void Socket_Poll_internal_m4C3040D41623EAF0C67D3A3B8306308A5BBFB090 (void);
// 0x000009BA System.Net.Sockets.Socket System.Net.Sockets.Socket::Accept()
extern void Socket_Accept_m376D8FD43D18B427EBED5419F80E79D1ADDF9BE2 (void);
// 0x000009BB System.Void System.Net.Sockets.Socket::Accept(System.Net.Sockets.Socket)
extern void Socket_Accept_mA2B3B144CB4E2F28C4A3F5CE449C0069FE6FF88B (void);
// 0x000009BC System.Net.Sockets.Socket System.Net.Sockets.Socket::EndAccept(System.IAsyncResult)
extern void Socket_EndAccept_mA0518AD160E86C2728B2E4C8E1D2A7BC69E2595A (void);
// 0x000009BD System.Net.Sockets.Socket System.Net.Sockets.Socket::EndAccept(System.Byte[]&,System.Int32&,System.IAsyncResult)
extern void Socket_EndAccept_mCED29DC1DB5BC10309535B190B35DDF704668ABC (void);
// 0x000009BE System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::Accept_internal(System.Net.Sockets.SafeSocketHandle,System.Int32&,System.Boolean)
extern void Socket_Accept_internal_m5150EA5D5E87751768538CA412FEEC8832164CF2 (void);
// 0x000009BF System.IntPtr System.Net.Sockets.Socket::Accept_internal(System.IntPtr,System.Int32&,System.Boolean)
extern void Socket_Accept_internal_mCF896B6CC0448D86DC4C2A90669C14366F520AAA (void);
// 0x000009C0 System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
extern void Socket_Bind_m4DFEFA3F8C6E95586D02BCF311D8A1D5A449B217 (void);
// 0x000009C1 System.Void System.Net.Sockets.Socket::Bind_internal(System.Net.Sockets.SafeSocketHandle,System.Net.SocketAddress,System.Int32&)
extern void Socket_Bind_internal_mDDA24FCED45C4C2CE9198F9E5D7635DAB14FED0E (void);
// 0x000009C2 System.Void System.Net.Sockets.Socket::Bind_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&)
extern void Socket_Bind_internal_m2E1D2983E359325F577799A715E4EAD60FCD9A1E (void);
// 0x000009C3 System.IAsyncResult System.Net.Sockets.Socket::BeginConnect(System.Net.EndPoint,System.AsyncCallback,System.Object)
extern void Socket_BeginConnect_m6B71DEA09A833155BBF391D25DC81C404FE5B3EF (void);
// 0x000009C4 System.Void System.Net.Sockets.Socket::BeginMConnect(System.Net.Sockets.SocketAsyncResult)
extern void Socket_BeginMConnect_m3570016DCEEB2EF4E34F873633B9149B368E103B (void);
// 0x000009C5 System.Void System.Net.Sockets.Socket::BeginSConnect(System.Net.Sockets.SocketAsyncResult)
extern void Socket_BeginSConnect_mFD5889EA6A3ACA8423741598F766C920067AE899 (void);
// 0x000009C6 System.Void System.Net.Sockets.Socket::EndConnect(System.IAsyncResult)
extern void Socket_EndConnect_mC014DB766DCF93646536008F55692BE9143797E6 (void);
// 0x000009C7 System.Void System.Net.Sockets.Socket::Connect_internal(System.Net.Sockets.SafeSocketHandle,System.Net.SocketAddress,System.Int32&,System.Boolean)
extern void Socket_Connect_internal_mDF5F0AC13C860A8B1B7D430E9747DD075D3E098F (void);
// 0x000009C8 System.Void System.Net.Sockets.Socket::Connect_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&,System.Boolean)
extern void Socket_Connect_internal_m4947904CE00106D5D008099EF27809BF504B9CE3 (void);
// 0x000009C9 System.Void System.Net.Sockets.Socket::Disconnect(System.Boolean)
extern void Socket_Disconnect_m088E558DFF8B6640DE5D3F041504F15D0C1DB957 (void);
// 0x000009CA System.Void System.Net.Sockets.Socket::EndDisconnect(System.IAsyncResult)
extern void Socket_EndDisconnect_mE208E9EFF47D1921E6BAD57B94FC5F8BCE53D058 (void);
// 0x000009CB System.Void System.Net.Sockets.Socket::Disconnect_internal(System.Net.Sockets.SafeSocketHandle,System.Boolean,System.Int32&)
extern void Socket_Disconnect_internal_m5BFD115DED7ED6735C6ADDD6A6944B96089152EF (void);
// 0x000009CC System.Void System.Net.Sockets.Socket::Disconnect_internal(System.IntPtr,System.Boolean,System.Int32&)
extern void Socket_Disconnect_internal_m4F0F16E5E30A61DCE40BE255EAB656CEAD4E2D75 (void);
// 0x000009CD System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern void Socket_Receive_mD8C41C5E04F7A9AEAA8E9D7534970F50918427BF (void);
// 0x000009CE System.Int32 System.Net.Sockets.Socket::Receive(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern void Socket_Receive_m7D07ECE91DA04210066EB6E373376817E0A024F1 (void);
// 0x000009CF System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&,System.AsyncCallback,System.Object)
extern void Socket_BeginReceive_m7AFA3F22DAD771579F060D344EA1B44C3F55C912 (void);
// 0x000009D0 System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult,System.Net.Sockets.SocketError&)
extern void Socket_EndReceive_mBD6A39DBD9C6D68BB28A2F6A9364BF2BC48CFEBA (void);
// 0x000009D1 System.Int32 System.Net.Sockets.Socket::Receive_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.Socket/WSABUF*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Receive_internal_mE9F36174DA5F7B4CEE0E682EDD9ECA4A92827479 (void);
// 0x000009D2 System.Int32 System.Net.Sockets.Socket::Receive_internal(System.IntPtr,System.Net.Sockets.Socket/WSABUF*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Receive_internal_mACBB4D49BA2AA03BABFB64D4EAF6ADD4F9B99116 (void);
// 0x000009D3 System.Int32 System.Net.Sockets.Socket::Receive_internal(System.Net.Sockets.SafeSocketHandle,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Receive_internal_m32C732F35B8F7E49A511F750F37CA2A488FDC7EB (void);
// 0x000009D4 System.Int32 System.Net.Sockets.Socket::Receive_internal(System.IntPtr,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Receive_internal_mA045268E2A2A8548562FB4D652262B2AF242CA8E (void);
// 0x000009D5 System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&,System.Net.Sockets.SocketError&)
extern void Socket_ReceiveFrom_mAFA99FB7487A2216312D4510E530BB9F5A4CD54B (void);
// 0x000009D6 System.Int32 System.Net.Sockets.Socket::EndReceiveFrom(System.IAsyncResult,System.Net.EndPoint&)
extern void Socket_EndReceiveFrom_mBEAC67D399907A222678833B24E20FFFDF0DDC17 (void);
// 0x000009D7 System.Int32 System.Net.Sockets.Socket::ReceiveFrom_internal(System.Net.Sockets.SafeSocketHandle,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress&,System.Int32&,System.Boolean)
extern void Socket_ReceiveFrom_internal_mB857796A233063A7771FCB31AAB68A689409E670 (void);
// 0x000009D8 System.Int32 System.Net.Sockets.Socket::ReceiveFrom_internal(System.IntPtr,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress&,System.Int32&,System.Boolean)
extern void Socket_ReceiveFrom_internal_m689AA7188B819800D065F7F82BC8DD525BD19776 (void);
// 0x000009D9 System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern void Socket_Send_mF1AF06B447E1671097A0515BD6170DB92368E8D5 (void);
// 0x000009DA System.Int32 System.Net.Sockets.Socket::Send(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern void Socket_Send_m77328B1F3378D0C5B40B15C01FA2226257B706AE (void);
// 0x000009DB System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&,System.AsyncCallback,System.Object)
extern void Socket_BeginSend_mE51B200464A077562C33CBEE5421A7F18CA198D8 (void);
// 0x000009DC System.Void System.Net.Sockets.Socket::BeginSendCallback(System.Net.Sockets.SocketAsyncResult,System.Int32)
extern void Socket_BeginSendCallback_mCC42F20496AC0BB4DD9178C0C26D23ACC36DF864 (void);
// 0x000009DD System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult,System.Net.Sockets.SocketError&)
extern void Socket_EndSend_m1D4BCE94C7D318281B9A4D24A99B14B0E66AC160 (void);
// 0x000009DE System.Int32 System.Net.Sockets.Socket::Send_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.Socket/WSABUF*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Send_internal_m0B94FEA48E7CA8BD01699DBD4A624C7A1AA7005F (void);
// 0x000009DF System.Int32 System.Net.Sockets.Socket::Send_internal(System.IntPtr,System.Net.Sockets.Socket/WSABUF*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Send_internal_mE78CA6C457332ABC047C04BAE46BAE149E19EC84 (void);
// 0x000009E0 System.Int32 System.Net.Sockets.Socket::Send_internal(System.Net.Sockets.SafeSocketHandle,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Send_internal_m0A9A6ADE648F99CB7C43F2C97ECF75143B1932EA (void);
// 0x000009E1 System.Int32 System.Net.Sockets.Socket::Send_internal(System.IntPtr,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Send_internal_m1BEC7CBA4A4284807DD126A07B02265B6190FAF2 (void);
// 0x000009E2 System.Int32 System.Net.Sockets.Socket::EndSendTo(System.IAsyncResult)
extern void Socket_EndSendTo_m63F470B7483CED77F2DA2FD46FE93A460743CB08 (void);
// 0x000009E3 System.Object System.Net.Sockets.Socket::GetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName)
extern void Socket_GetSocketOption_m58A866C87F4B09F2A8C3DA71635C8DA17836520D (void);
// 0x000009E4 System.Void System.Net.Sockets.Socket::GetSocketOption_obj_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object&,System.Int32&)
extern void Socket_GetSocketOption_obj_internal_mC30B3F69E41421FAF4D97C59DC965A753DFADD76 (void);
// 0x000009E5 System.Void System.Net.Sockets.Socket::GetSocketOption_obj_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object&,System.Int32&)
extern void Socket_GetSocketOption_obj_internal_mA2DDFEEDA1CFF19D37FC035C64988F0DBB96713B (void);
// 0x000009E6 System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Int32)
extern void Socket_SetSocketOption_m6034478D182424029DA43CB526EC578E22C4A467 (void);
// 0x000009E7 System.Void System.Net.Sockets.Socket::SetSocketOption_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object,System.Byte[],System.Int32,System.Int32&)
extern void Socket_SetSocketOption_internal_mCB596BAD15C14A0371CF076DA6EF32E8EC1CCF82 (void);
// 0x000009E8 System.Void System.Net.Sockets.Socket::SetSocketOption_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object,System.Byte[],System.Int32,System.Int32&)
extern void Socket_SetSocketOption_internal_mED7F49F19689979DC57B9AAAF4F19BB2B834909B (void);
// 0x000009E9 System.Int32 System.Net.Sockets.Socket::IOControl(System.Int32,System.Byte[],System.Byte[])
extern void Socket_IOControl_mEF60AD4FE7242DEF5BC2A1E05E7DCFF2F3F4B7FE (void);
// 0x000009EA System.Int32 System.Net.Sockets.Socket::IOControl_internal(System.Net.Sockets.SafeSocketHandle,System.Int32,System.Byte[],System.Byte[],System.Int32&)
extern void Socket_IOControl_internal_m4A3062113A417D02E0B2B19CAE9F57704DE6B138 (void);
// 0x000009EB System.Int32 System.Net.Sockets.Socket::IOControl_internal(System.IntPtr,System.Int32,System.Byte[],System.Byte[],System.Int32&)
extern void Socket_IOControl_internal_mA914CFD7D33C32B7ADCF876AF13FB2AF534A88D9 (void);
// 0x000009EC System.Void System.Net.Sockets.Socket::Close()
extern void Socket_Close_m24AB78F5DAC1C39BB7FFB30A9620B2B07E01DEEB (void);
// 0x000009ED System.Void System.Net.Sockets.Socket::Close(System.Int32)
extern void Socket_Close_mEC9B67F2F0E51F7FBB9D6BC9F630AD52DF7D0E65 (void);
// 0x000009EE System.Void System.Net.Sockets.Socket::Close_internal(System.IntPtr,System.Int32&)
extern void Socket_Close_internal_mCE4CEF71FFC367E0EB7C8F3A04DCDC9C3BF2F7FB (void);
// 0x000009EF System.Void System.Net.Sockets.Socket::Shutdown_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.SocketShutdown,System.Int32&)
extern void Socket_Shutdown_internal_mC7E8605C1D943E24EE2C36B9DF12885FB32ED104 (void);
// 0x000009F0 System.Void System.Net.Sockets.Socket::Shutdown_internal(System.IntPtr,System.Net.Sockets.SocketShutdown,System.Int32&)
extern void Socket_Shutdown_internal_m406B2CD6BA7AF7BC444D381AB24568EFB3DB4DD3 (void);
// 0x000009F1 System.Void System.Net.Sockets.Socket::Dispose(System.Boolean)
extern void Socket_Dispose_m361195497638D3D2C1E22B9D6EE4A6E45F1CF0C3 (void);
// 0x000009F2 System.Void System.Net.Sockets.Socket::Linger(System.IntPtr)
extern void Socket_Linger_m635016CAB436DE0FA43CAA80AA5C8EE90225F06A (void);
// 0x000009F3 System.Void System.Net.Sockets.Socket::ThrowIfDisposedAndClosed()
extern void Socket_ThrowIfDisposedAndClosed_m5EC422888FC9986F6994A0C0180BCB39407F7894 (void);
// 0x000009F4 System.Void System.Net.Sockets.Socket::ThrowIfBufferNull(System.Byte[])
extern void Socket_ThrowIfBufferNull_mCE5DE853E71FD065E5D5415BAFEDB84CA261DAD3 (void);
// 0x000009F5 System.Void System.Net.Sockets.Socket::ThrowIfBufferOutOfRange(System.Byte[],System.Int32,System.Int32)
extern void Socket_ThrowIfBufferOutOfRange_m571DD069DDC7952B1EB907941F3C202054BBE6FF (void);
// 0x000009F6 System.Void System.Net.Sockets.Socket::ThrowIfUdp()
extern void Socket_ThrowIfUdp_m7F28AFD15A102E911AEE9B08125794162C2A26F8 (void);
// 0x000009F7 System.Net.Sockets.SocketAsyncResult System.Net.Sockets.Socket::ValidateEndIAsyncResult(System.IAsyncResult,System.String,System.String)
extern void Socket_ValidateEndIAsyncResult_m8463696F3CAF01ED5982FF8200C6A53D60C33628 (void);
// 0x000009F8 System.Void System.Net.Sockets.Socket::QueueIOSelectorJob(System.Threading.SemaphoreSlim,System.IntPtr,System.IOSelectorJob)
extern void Socket_QueueIOSelectorJob_mED926AA0CA86E558C83A306AFC0FC5F918E36327 (void);
// 0x000009F9 System.Net.IPEndPoint System.Net.Sockets.Socket::RemapIPEndPoint(System.Net.IPEndPoint)
extern void Socket_RemapIPEndPoint_m940DF8512A590EE50576782DFCAAAC9DF8F3E06C (void);
// 0x000009FA System.Void System.Net.Sockets.Socket::cancel_blocking_socket_operation(System.Threading.Thread)
extern void Socket_cancel_blocking_socket_operation_mA08ED08AF219F3D8FE676F352C1E4D5522AD004B (void);
// 0x000009FB System.Int32 System.Net.Sockets.Socket::get_FamilyHint()
extern void Socket_get_FamilyHint_m69658ED9A2D589A6C3083ADD822FBFFC7308B7D3 (void);
// 0x000009FC System.Boolean System.Net.Sockets.Socket::IsProtocolSupported_internal(System.Net.NetworkInformation.NetworkInterfaceComponent)
extern void Socket_IsProtocolSupported_internal_mF7C406BEB9464C29CF1C02FD64E21F99A8A5DC08 (void);
// 0x000009FD System.Boolean System.Net.Sockets.Socket::IsProtocolSupported(System.Net.NetworkInformation.NetworkInterfaceComponent)
extern void Socket_IsProtocolSupported_m00854C9BD8BCFA6D116271C9F7476B838503640E (void);
// 0x000009FE System.Void System.Net.Sockets.Socket::.cctor()
extern void Socket__cctor_m8A2CFCF4EA9CBF355A63C2C6033F4D4614DB255F (void);
// 0x000009FF System.Void System.Net.Sockets.Socket/<>c::.cctor()
extern void U3CU3Ec__cctor_mDF6E201F47D1C23C5B29B1275A14FA45690B4EDC (void);
// 0x00000A00 System.Void System.Net.Sockets.Socket/<>c::.ctor()
extern void U3CU3Ec__ctor_m43A057DFDD32EA28F00A12E2C2173145A13BDAF4 (void);
// 0x00000A01 System.Void System.Net.Sockets.Socket/<>c::<BeginSend>b__242_0(System.IOAsyncResult)
extern void U3CU3Ec_U3CBeginSendU3Eb__242_0_m0011A7F1D6DCE1CC6714C2C4C67C905DA9159F5C (void);
// 0x00000A02 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_0(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_0_mC396B5BE2E142AD692FF33127270DA83F37E0FE7 (void);
// 0x00000A03 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_1(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_1_m7141ABFB7A612D6C3FF7E1A08A388E9EF6686545 (void);
// 0x00000A04 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_2(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_2_m110EFFDCB2927C59A7775F44598CF7213F8954D8 (void);
// 0x00000A05 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_3(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_3_m53FD854140025D3A18E08649002588BD32120704 (void);
// 0x00000A06 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_4(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_4_mF00A4741487F488E2C391D880F02CE350654AF03 (void);
// 0x00000A07 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_5(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_5_mC153E4B02FC0BFDB1DD45C6A2B449C2191B14418 (void);
// 0x00000A08 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_6(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_6_m87420A4E7F247C0C96EDABEB5E832CB1C27FA543 (void);
// 0x00000A09 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_7(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_7_mF1815DC25AFF7063E376A6C012D899081EF669F8 (void);
// 0x00000A0A System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_8(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_8_m84E0BF807680AEBCD2B8EB613649E1A09F40BBE9 (void);
// 0x00000A0B System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_9(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_9_m80BDF0261BB58674DFD34CD5CE86DC044A6D3D0D (void);
// 0x00000A0C System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_10(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_10_mA283D32575140AE2DC68609AFF4D9271235EA443 (void);
// 0x00000A0D System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_11(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_11_m800E1188E230A39EEF26795BFCD3D1452CD57D66 (void);
// 0x00000A0E System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_12(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_12_mC3F90036D059B2B8698420B56F024B1635A88F8B (void);
// 0x00000A0F System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_13(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_13_m2FD5CE753231103645670195A724C97E3E10F06E (void);
// 0x00000A10 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__310_14(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__310_14_m53E1DB314E0C51DAE16463286BD922CB0A207D90 (void);
// 0x00000A11 System.Void System.Net.Sockets.Socket/<>c__DisplayClass243_0::.ctor()
extern void U3CU3Ec__DisplayClass243_0__ctor_m5F03E623DD7362E05C09E3ABB8C803F171217FCB (void);
// 0x00000A12 System.Void System.Net.Sockets.Socket/<>c__DisplayClass243_0::<BeginSendCallback>b__0(System.IOAsyncResult)
extern void U3CU3Ec__DisplayClass243_0_U3CBeginSendCallbackU3Eb__0_mCE9408390F94237D14C6BA83630E34F2DCA56860 (void);
// 0x00000A13 System.Void System.Net.Sockets.Socket/<>c__DisplayClass299_0::.ctor()
extern void U3CU3Ec__DisplayClass299_0__ctor_mA2004E88EE9AC6E49EE6A5701BA464ED976A0ED4 (void);
// 0x00000A14 System.Void System.Net.Sockets.Socket/<>c__DisplayClass299_0::<QueueIOSelectorJob>b__0(System.Threading.Tasks.Task)
extern void U3CU3Ec__DisplayClass299_0_U3CQueueIOSelectorJobU3Eb__0_mD066C2DF490C722A0CD2B048F1B7031BA5E502D9 (void);
// 0x00000A15 System.Void System.Net.Sockets.SafeSocketHandle::.ctor(System.IntPtr,System.Boolean)
extern void SafeSocketHandle__ctor_m98BFBB207C9D8D7750DEA3598051D21FFE784967 (void);
// 0x00000A16 System.Boolean System.Net.Sockets.SafeSocketHandle::ReleaseHandle()
extern void SafeSocketHandle_ReleaseHandle_m93408D5088C512A7BFF7C6CA7D5857645C17BDFF (void);
// 0x00000A17 System.Void System.Net.Sockets.SafeSocketHandle::RegisterForBlockingSyscall()
extern void SafeSocketHandle_RegisterForBlockingSyscall_m7033111DA7B1012B9C4155D892EED598876C2AB3 (void);
// 0x00000A18 System.Void System.Net.Sockets.SafeSocketHandle::UnRegisterForBlockingSyscall()
extern void SafeSocketHandle_UnRegisterForBlockingSyscall_m283CE3E82686E5FC7999EDD609DF74A48652D4B3 (void);
// 0x00000A19 System.Void System.Net.Sockets.SafeSocketHandle::.cctor()
extern void SafeSocketHandle__cctor_m6B3628F406C5D3BE77C23BBC29E5AE25FA0E0EF8 (void);
// 0x00000A1A System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::get_AcceptSocket()
extern void SocketAsyncEventArgs_get_AcceptSocket_m6119FCE739596BD55C2847460DC69ADB285070A7 (void);
// 0x00000A1B System.Void System.Net.Sockets.SocketAsyncEventArgs::set_AcceptSocket(System.Net.Sockets.Socket)
extern void SocketAsyncEventArgs_set_AcceptSocket_mA34A6E97F2B00232A1F453219EA6C03487D529A5 (void);
// 0x00000A1C System.Void System.Net.Sockets.SocketAsyncEventArgs::set_BytesTransferred(System.Int32)
extern void SocketAsyncEventArgs_set_BytesTransferred_m99F956EB9B4A7FAD4632FA07BBF4451DFD0F764C (void);
// 0x00000A1D System.Void System.Net.Sockets.SocketAsyncEventArgs::set_SocketError(System.Net.Sockets.SocketError)
extern void SocketAsyncEventArgs_set_SocketError_mE909DB5DBC90065720B35ACB8B382DA175976533 (void);
// 0x00000A1E System.Void System.Net.Sockets.SocketAsyncEventArgs::Dispose(System.Boolean)
extern void SocketAsyncEventArgs_Dispose_m75C974426B784853880FD3146091228ABBD0CE06 (void);
// 0x00000A1F System.Void System.Net.Sockets.SocketAsyncEventArgs::Dispose()
extern void SocketAsyncEventArgs_Dispose_m3DBF8461B4A792A6DEDF567964587CCEA75AFA63 (void);
// 0x00000A20 System.Void System.Net.Sockets.SocketAsyncEventArgs::Complete()
extern void SocketAsyncEventArgs_Complete_m94BBD1E035C5474D203D0E8CEDDE6A32BA61E061 (void);
// 0x00000A21 System.Void System.Net.Sockets.SocketAsyncEventArgs::OnCompleted(System.Net.Sockets.SocketAsyncEventArgs)
extern void SocketAsyncEventArgs_OnCompleted_mF7B3732D2A22625740B14BFCE38F8D6A6E5B66AF (void);
// 0x00000A22 System.IntPtr System.Net.Sockets.SocketAsyncResult::get_Handle()
extern void SocketAsyncResult_get_Handle_m0A9F83AD4D06B5E31F63012A1A4557FB48940C44 (void);
// 0x00000A23 System.Void System.Net.Sockets.SocketAsyncResult::.ctor(System.Net.Sockets.Socket,System.AsyncCallback,System.Object,System.Net.Sockets.SocketOperation)
extern void SocketAsyncResult__ctor_mF4024A1E5EAD56E00839672EED0126EC34FD9917 (void);
// 0x00000A24 System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncResult::get_ErrorCode()
extern void SocketAsyncResult_get_ErrorCode_m56F156B7C525AF9947C56C76A8B2D0B4E545AD69 (void);
// 0x00000A25 System.Void System.Net.Sockets.SocketAsyncResult::CheckIfThrowDelayedException()
extern void SocketAsyncResult_CheckIfThrowDelayedException_m5ED469CF2CCFD1E9B2A5621769B8CB27AB89DE45 (void);
// 0x00000A26 System.Void System.Net.Sockets.SocketAsyncResult::CompleteDisposed()
extern void SocketAsyncResult_CompleteDisposed_m0E0A213265679C08CF3B5230F54E6F8801BD91E6 (void);
// 0x00000A27 System.Void System.Net.Sockets.SocketAsyncResult::Complete()
extern void SocketAsyncResult_Complete_m236141DBFB1E4B892296B548DDBCB2C04829D194 (void);
// 0x00000A28 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Boolean)
extern void SocketAsyncResult_Complete_m7A55E54CBF74652E5784D34402B88CAB8A18601A (void);
// 0x00000A29 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Int32)
extern void SocketAsyncResult_Complete_m266C10BA9EEF57EC12B411F13B207C638F8762A9 (void);
// 0x00000A2A System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Exception,System.Boolean)
extern void SocketAsyncResult_Complete_m44E31D06CAA7D0EFE0A7BB6EA24ADDB14EA625AC (void);
// 0x00000A2B System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Exception)
extern void SocketAsyncResult_Complete_mF68A29EEF8843248D56B583C4CCD9C1549F99DAA (void);
// 0x00000A2C System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Net.Sockets.Socket)
extern void SocketAsyncResult_Complete_mBFBFEECE8C3B6D2D456B607A9D7AB9889ECA8F27 (void);
// 0x00000A2D System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Net.Sockets.Socket,System.Int32)
extern void SocketAsyncResult_Complete_m1D85BF6ED9479FB410132CD3C93F57AB507D4745 (void);
// 0x00000A2E System.Void System.Net.Sockets.SocketAsyncResult/<>c::.cctor()
extern void U3CU3Ec__cctor_m0BA2FADDF44F04C0C4DECA6414D64974F0C407AB (void);
// 0x00000A2F System.Void System.Net.Sockets.SocketAsyncResult/<>c::.ctor()
extern void U3CU3Ec__ctor_m087776B9BEE00F1A315C08CB888C7F2875461366 (void);
// 0x00000A30 System.Void System.Net.Sockets.SocketAsyncResult/<>c::<Complete>b__27_0(System.Object)
extern void U3CU3Ec_U3CCompleteU3Eb__27_0_m5C293AC939107CF4960BBA8DFBA174438C2BD359 (void);
// 0x00000A31 System.Threading.Tasks.Task System.Net.Sockets.SocketTaskExtensions::ConnectAsync(System.Net.Sockets.Socket,System.Net.EndPoint)
extern void SocketTaskExtensions_ConnectAsync_mDAE40065605C3E87DC988D068950BC6A1369F7AE (void);
// 0x00000A32 System.Void System.Net.Sockets.SocketTaskExtensions/<>c::.cctor()
extern void U3CU3Ec__cctor_mB303933D81099AD771B3F1E8558D25F174CF8DA2 (void);
// 0x00000A33 System.Void System.Net.Sockets.SocketTaskExtensions/<>c::.ctor()
extern void U3CU3Ec__ctor_m558DBFC7DE97B807FC4E9BCE033319019BC0011A (void);
// 0x00000A34 System.IAsyncResult System.Net.Sockets.SocketTaskExtensions/<>c::<ConnectAsync>b__2_0(System.Net.EndPoint,System.AsyncCallback,System.Object)
extern void U3CU3Ec_U3CConnectAsyncU3Eb__2_0_m890E38E6D21BFD282C9EFE2C438C3A03430CE73A (void);
// 0x00000A35 System.Void System.Net.Sockets.SocketTaskExtensions/<>c::<ConnectAsync>b__2_1(System.IAsyncResult)
extern void U3CU3Ec_U3CConnectAsyncU3Eb__2_1_m948646F5555AA4227728846C1F004F54B2372CDB (void);
// 0x00000A36 System.Void System.Net.Security.AuthenticatedStream::.ctor(System.IO.Stream,System.Boolean)
extern void AuthenticatedStream__ctor_mDE77A28CCC056362108DCDE9345EE3F6D73AF509 (void);
// 0x00000A37 System.IO.Stream System.Net.Security.AuthenticatedStream::get_InnerStream()
extern void AuthenticatedStream_get_InnerStream_m11C037DEE34B2DD870301D499BEE69ECED787D7A (void);
// 0x00000A38 System.Void System.Net.Security.AuthenticatedStream::Dispose(System.Boolean)
extern void AuthenticatedStream_Dispose_m922381D0775D8A14FF01E106A47EAEF318EA982E (void);
// 0x00000A39 System.Boolean System.Net.Security.AuthenticatedStream::get_IsAuthenticated()
// 0x00000A3A System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern void RemoteCertificateValidationCallback__ctor_mDBCF893D0A540CB506F5547807525625F5CBA4C4 (void);
// 0x00000A3B System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void RemoteCertificateValidationCallback_Invoke_m30A34C33A46909FAA60703A2EFF0C41F6E7B6C14 (void);
// 0x00000A3C System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
extern void RemoteCertificateValidationCallback_BeginInvoke_m8A150C819EE51BD2913E80CFD149D3A8B9DD9930 (void);
// 0x00000A3D System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern void RemoteCertificateValidationCallback_EndInvoke_mD94E71A429600B4EAC95128CBAEBB19C97C054F5 (void);
// 0x00000A3E System.Void System.Net.Security.LocalCertSelectionCallback::.ctor(System.Object,System.IntPtr)
extern void LocalCertSelectionCallback__ctor_mE564871B196549FDEA64C011A4AA00339FA0281F (void);
// 0x00000A3F System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertSelectionCallback::Invoke(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern void LocalCertSelectionCallback_Invoke_m2869B1DB69FB6390DB8035B41C0594762111D484 (void);
// 0x00000A40 System.IAsyncResult System.Net.Security.LocalCertSelectionCallback::BeginInvoke(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.AsyncCallback,System.Object)
extern void LocalCertSelectionCallback_BeginInvoke_m860EA4273F9EFFF06603F25C69326ABE2DA8CD96 (void);
// 0x00000A41 System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertSelectionCallback::EndInvoke(System.IAsyncResult)
extern void LocalCertSelectionCallback_EndInvoke_m79DC5879439F10FC1D1C00A060C455733D7F321A (void);
// 0x00000A42 Mono.Security.Interface.IMonoSslStream System.Net.Security.SslStream::get_Impl()
extern void SslStream_get_Impl_m64EA7C2820C426A13C1693A9E66770A3F986CF86 (void);
// 0x00000A43 System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,Mono.Security.Interface.MonoTlsProvider,Mono.Security.Interface.MonoTlsSettings)
extern void SslStream__ctor_m56CC1EA5A22E27B0197C181B2DB6EC6A14755DED (void);
// 0x00000A44 Mono.Security.Interface.IMonoSslStream System.Net.Security.SslStream::CreateMonoSslStream(System.IO.Stream,System.Boolean,Mono.Security.Interface.MonoTlsProvider,Mono.Security.Interface.MonoTlsSettings)
extern void SslStream_CreateMonoSslStream_mC44C66BC4FD97898823C5E961D3D1E4714B1FE5D (void);
// 0x00000A45 System.Boolean System.Net.Security.SslStream::get_IsAuthenticated()
extern void SslStream_get_IsAuthenticated_mAD584FEC93A19120F7B58BDE60B2F2EC5080AECC (void);
// 0x00000A46 System.Boolean System.Net.Security.SslStream::get_CanSeek()
extern void SslStream_get_CanSeek_m79ABDB979F4BD2DA6960377372915E4A6671ECFF (void);
// 0x00000A47 System.Boolean System.Net.Security.SslStream::get_CanRead()
extern void SslStream_get_CanRead_mDD4E9CE7362511A86D9EE1841B1CD01D4E8B2110 (void);
// 0x00000A48 System.Boolean System.Net.Security.SslStream::get_CanWrite()
extern void SslStream_get_CanWrite_m54CDDD4975C00A8958FB5F964455BC2D80491E6B (void);
// 0x00000A49 System.Int32 System.Net.Security.SslStream::get_ReadTimeout()
extern void SslStream_get_ReadTimeout_m80D9E2BC61ED8F7FD09ADD72F6230832F8278EBE (void);
// 0x00000A4A System.Void System.Net.Security.SslStream::set_ReadTimeout(System.Int32)
extern void SslStream_set_ReadTimeout_m8257041DC22D4EF54E40C0B5340FF73BBE626FC3 (void);
// 0x00000A4B System.Int32 System.Net.Security.SslStream::get_WriteTimeout()
extern void SslStream_get_WriteTimeout_m4193223FDCD4829DB30CFB0AA8B25ECEC677EBB3 (void);
// 0x00000A4C System.Int64 System.Net.Security.SslStream::get_Length()
extern void SslStream_get_Length_mC22DDE456AF82253D85AACBF718ABBF12EBE13A3 (void);
// 0x00000A4D System.Int64 System.Net.Security.SslStream::get_Position()
extern void SslStream_get_Position_mF09FAC98E3C9691EE539B99217F003D1471E2898 (void);
// 0x00000A4E System.Void System.Net.Security.SslStream::set_Position(System.Int64)
extern void SslStream_set_Position_m558CCA3D97D354DFBE766CBECED122A7B81CCA41 (void);
// 0x00000A4F System.Void System.Net.Security.SslStream::SetLength(System.Int64)
extern void SslStream_SetLength_m8392E5F9F4229EC24BF0EE8CDAEEBDC76F486994 (void);
// 0x00000A50 System.Int64 System.Net.Security.SslStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void SslStream_Seek_m826A9CA3B804E1AEBA6758228B02E01CA99B5579 (void);
// 0x00000A51 System.Threading.Tasks.Task System.Net.Security.SslStream::FlushAsync(System.Threading.CancellationToken)
extern void SslStream_FlushAsync_m0664E67F609D253559B69242C9DFF9D697151325 (void);
// 0x00000A52 System.Void System.Net.Security.SslStream::Flush()
extern void SslStream_Flush_m28F1C2BA3489D896FCBF3057A81AFD06CE232BBB (void);
// 0x00000A53 System.Void System.Net.Security.SslStream::CheckDisposed()
extern void SslStream_CheckDisposed_mCDA5D6100C3F568C250F904B6936DEB91E5250C3 (void);
// 0x00000A54 System.Void System.Net.Security.SslStream::Dispose(System.Boolean)
extern void SslStream_Dispose_m789C2C9F9B5B3B48112E28F053926C9145CEDAE4 (void);
// 0x00000A55 System.Int32 System.Net.Security.SslStream::Read(System.Byte[],System.Int32,System.Int32)
extern void SslStream_Read_m8418B257262567DD7684F2EEB334DE25C884088C (void);
// 0x00000A56 System.Void System.Net.Security.SslStream::Write(System.Byte[],System.Int32,System.Int32)
extern void SslStream_Write_mE0B830147A53EEF0E64C3DE127612048A30D0180 (void);
// 0x00000A57 System.IAsyncResult System.Net.Security.SslStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void SslStream_BeginRead_mA6DFC30593CDEDED30C6E6A1F84EFF21726C5F25 (void);
// 0x00000A58 System.Int32 System.Net.Security.SslStream::EndRead(System.IAsyncResult)
extern void SslStream_EndRead_mB340F9EE92BB425D4D169D0E7FA5CEFC208627FD (void);
// 0x00000A59 System.IAsyncResult System.Net.Security.SslStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void SslStream_BeginWrite_m78AAF68A712CC60F2F29FF7D478FEE2CA99CF028 (void);
// 0x00000A5A System.Void System.Net.Security.SslStream::EndWrite(System.IAsyncResult)
extern void SslStream_EndWrite_mECFCAE6C39E3807D418226A712B2600A6F96011A (void);
// 0x00000A5B System.Boolean System.Net.NetworkInformation.IPGlobalProperties::get_PlatformNeedsLibCWorkaround()
extern void IPGlobalProperties_get_PlatformNeedsLibCWorkaround_mD92D7B020F50C61F32749C6FA712E9678777A56C (void);
// 0x00000A5C System.Net.NetworkInformation.IPGlobalProperties System.Net.NetworkInformation.IPGlobalProperties::GetIPGlobalProperties()
extern void IPGlobalProperties_GetIPGlobalProperties_m0A1551F6E8ED8083D6561AF637B4EC238D98A295 (void);
// 0x00000A5D System.Net.NetworkInformation.IPGlobalProperties System.Net.NetworkInformation.IPGlobalProperties::InternalGetIPGlobalProperties()
extern void IPGlobalProperties_InternalGetIPGlobalProperties_mBA1CDC09A6DED024BEC95072550E7205C0504545 (void);
// 0x00000A5E System.String System.Net.NetworkInformation.IPGlobalProperties::get_DomainName()
// 0x00000A5F System.Void System.Net.NetworkInformation.IPGlobalProperties::.ctor()
extern void IPGlobalProperties__ctor_mEEE47DACD96438BCDF67877A3E2F0D3A592C2977 (void);
// 0x00000A60 System.Void System.Net.NetworkInformation.NetworkInformationException::.ctor()
extern void NetworkInformationException__ctor_m5CDA318CAFE57C54FA19136D9CC86F34DF5F8F1C (void);
// 0x00000A61 System.Void System.Net.NetworkInformation.NetworkInformationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void NetworkInformationException__ctor_m0132BE482A5DEDFAA8E675B7E8F1BB59BDB2E23F (void);
// 0x00000A62 System.Int32 System.Net.NetworkInformation.CommonUnixIPGlobalProperties::getdomainname(System.Byte[],System.Int32)
extern void CommonUnixIPGlobalProperties_getdomainname_m986C881DC228C76FEDFE01DDA4375990B9F312F7 (void);
// 0x00000A63 System.String System.Net.NetworkInformation.CommonUnixIPGlobalProperties::get_DomainName()
extern void CommonUnixIPGlobalProperties_get_DomainName_m413AC21C8FCF33C473D3360DD83E0F9CFB7662D7 (void);
// 0x00000A64 System.Void System.Net.NetworkInformation.CommonUnixIPGlobalProperties::.ctor()
extern void CommonUnixIPGlobalProperties__ctor_m60C46E122AF76BCED16DD7F3FD5EFF74C093F83C (void);
// 0x00000A65 System.Void System.Net.NetworkInformation.UnixIPGlobalProperties::.ctor()
extern void UnixIPGlobalProperties__ctor_mF2ADB564F94ABCB20CB71DDE34FAB070BA12A868 (void);
// 0x00000A66 System.String System.Net.NetworkInformation.UnixNoLibCIPGlobalProperties::get_DomainName()
extern void UnixNoLibCIPGlobalProperties_get_DomainName_mD5C1D38C6A8C4BFBBAF251F829A64A9D80363371 (void);
// 0x00000A67 System.Void System.Net.NetworkInformation.UnixNoLibCIPGlobalProperties::.ctor()
extern void UnixNoLibCIPGlobalProperties__ctor_mB8161FF612E1613FC30AFA5CAA97C5E368C66291 (void);
// 0x00000A68 System.Void System.Net.NetworkInformation.MibIPGlobalProperties::.ctor(System.String)
extern void MibIPGlobalProperties__ctor_m64009FA9C2EDC7E97A8BFDADD97F30699037CAA6 (void);
// 0x00000A69 System.Void System.Net.NetworkInformation.MibIPGlobalProperties::.cctor()
extern void MibIPGlobalProperties__cctor_m9229AC18053CFF56E254C8AEE1A3513FC4EF4B4D (void);
// 0x00000A6A System.String System.Net.NetworkInformation.Win32IPGlobalProperties::get_DomainName()
extern void Win32IPGlobalProperties_get_DomainName_m5FF24C6CC09FE64C60955D9C4C1BEBF96636A5D3 (void);
// 0x00000A6B System.Void System.Net.NetworkInformation.Win32IPGlobalProperties::.ctor()
extern void Win32IPGlobalProperties__ctor_m7D031774BB16D9BF7096D7CC6B44AED107B31484 (void);
// 0x00000A6C System.Int32 System.Net.NetworkInformation.Win32NetworkInterface::GetNetworkParams(System.IntPtr,System.Int32&)
extern void Win32NetworkInterface_GetNetworkParams_m650FF9CD92584BDE5F2445F5E04D560976304EF2 (void);
// 0x00000A6D System.Net.NetworkInformation.Win32_FIXED_INFO System.Net.NetworkInformation.Win32NetworkInterface::get_FixedInfo()
extern void Win32NetworkInterface_get_FixedInfo_mAC576395B7D25CFD7B15920803E11BB629587709 (void);
// 0x00000A6E System.Net.IWebProxy System.Net.Configuration.DefaultProxySectionInternal::GetDefaultProxy_UsingOldMonoCode()
extern void DefaultProxySectionInternal_GetDefaultProxy_UsingOldMonoCode_mD2418B87B349589F5FB54B04FB9624DA982E0506 (void);
// 0x00000A6F System.Net.IWebProxy System.Net.Configuration.DefaultProxySectionInternal::GetSystemWebProxy()
extern void DefaultProxySectionInternal_GetSystemWebProxy_m6652DBF2B79156C7CA67D67FDD2DED92885D5446 (void);
// 0x00000A70 System.Object System.Net.Configuration.DefaultProxySectionInternal::get_ClassSyncObject()
extern void DefaultProxySectionInternal_get_ClassSyncObject_m815EA08EFDE5A23BAC0F0A6CC8009F3FD14C9512 (void);
// 0x00000A71 System.Net.Configuration.DefaultProxySectionInternal System.Net.Configuration.DefaultProxySectionInternal::GetSection()
extern void DefaultProxySectionInternal_GetSection_m052D4D21625EB1EE09DDEBC2BAC157E0E0406414 (void);
// 0x00000A72 System.Net.IWebProxy System.Net.Configuration.DefaultProxySectionInternal::get_WebProxy()
extern void DefaultProxySectionInternal_get_WebProxy_m6FEA6EA17D500A3FA8DF7A36EF6A9B5AD142A439 (void);
// 0x00000A73 System.Void System.Net.Configuration.DefaultProxySectionInternal::.ctor()
extern void DefaultProxySectionInternal__ctor_m77BAE40248B233823172ECA9811985D4410B2684 (void);
// 0x00000A74 System.Net.Configuration.SettingsSectionInternal System.Net.Configuration.SettingsSectionInternal::get_Section()
extern void SettingsSectionInternal_get_Section_mE0694DB22ADB571D842C04FE8DE06D3087AD45E6 (void);
// 0x00000A75 System.Boolean System.Net.Configuration.SettingsSectionInternal::get_Ipv6Enabled()
extern void SettingsSectionInternal_get_Ipv6Enabled_m0105C8B95D00D8D79A809E41A85127B0C9A66701 (void);
// 0x00000A76 System.Void System.Net.Configuration.SettingsSectionInternal::.ctor()
extern void SettingsSectionInternal__ctor_mF3B556F63066A164D09E0890B93FEFA74005743E (void);
// 0x00000A77 System.Void System.Net.Configuration.SettingsSectionInternal::.cctor()
extern void SettingsSectionInternal__cctor_m5551DBD25A2FDADEA2D5407031D2A9436524AA07 (void);
// 0x00000A78 System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
extern void U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF68FD3031E09D93558520520C63240F3EA7D6AC6 (void);
// 0x00000A79 System.Void System.Net.Configuration.BypassElementCollection::.ctor()
extern void BypassElementCollection__ctor_m2047F6046437B6101F59D781474BF71CF5650979 (void);
// 0x00000A7A System.Void System.Net.Configuration.ConnectionManagementElementCollection::.ctor()
extern void ConnectionManagementElementCollection__ctor_mFFAEA4E88F5C33B6DA8531C079C852A77FD04A19 (void);
// 0x00000A7B System.Void System.Net.Configuration.ConnectionManagementSection::.ctor()
extern void ConnectionManagementSection__ctor_mE885788862A7E2BC030547954BE04682B5685B0F (void);
// 0x00000A7C System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementSection::get_Properties()
extern void ConnectionManagementSection_get_Properties_m5F5D4D565489088905ADC68D61267773F96F9419 (void);
// 0x00000A7D System.Void System.Net.Configuration.DefaultProxySection::.ctor()
extern void DefaultProxySection__ctor_m63DB700CA7C5B525DEB7B8B524E5836705310AAD (void);
// 0x00000A7E System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::get_Properties()
extern void DefaultProxySection_get_Properties_mFA1686FF919D5732D59AACA13AE5D5249D1701DE (void);
// 0x00000A7F System.Void System.Net.Configuration.DefaultProxySection::Reset(System.Configuration.ConfigurationElement)
extern void DefaultProxySection_Reset_mF0EA313119B553545063DFE5AF317D83D738D6C2 (void);
// 0x00000A80 System.Void System.Net.Configuration.ProxyElement::.ctor()
extern void ProxyElement__ctor_m6D9B4D4118C0EC9F069E83A6C3DCAA36209DEB75 (void);
// 0x00000A81 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ProxyElement::get_Properties()
extern void ProxyElement_get_Properties_mB7790E9D638EC711E4783ACC846BE1568332E9B2 (void);
// 0x00000A82 System.Void System.Net.Configuration.HttpWebRequestElement::.ctor()
extern void HttpWebRequestElement__ctor_m79DE0820C634F3A5744A12F7C8AF81BF6472A803 (void);
// 0x00000A83 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpWebRequestElement::get_Properties()
extern void HttpWebRequestElement_get_Properties_m62B55D3B6F5898FC3E0FC3F79AA51B4D64AA7F2A (void);
// 0x00000A84 System.Void System.Net.Configuration.Ipv6Element::.ctor()
extern void Ipv6Element__ctor_m028AE74FB04F381B2B9D34FEB50093224820B173 (void);
// 0x00000A85 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.Ipv6Element::get_Properties()
extern void Ipv6Element_get_Properties_mD8016B80F04EF4AE6501BD889313DE91D5E00253 (void);
// 0x00000A86 System.Void System.Net.Configuration.NetSectionGroup::.ctor()
extern void NetSectionGroup__ctor_m7AB7B5CA35F2D7C06B047BD0B480AD6F2C067570 (void);
// 0x00000A87 System.Void System.Net.Configuration.SettingsSection::.ctor()
extern void SettingsSection__ctor_m09A6DF12BD56D2C0E0ABA8152004C486B1DE97E3 (void);
// 0x00000A88 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SettingsSection::get_Properties()
extern void SettingsSection_get_Properties_mE5337C4AF39EA0A1B2AEB842CDBB16B8C0C1C4A0 (void);
// 0x00000A89 System.Void System.Net.Configuration.PerformanceCountersElement::.ctor()
extern void PerformanceCountersElement__ctor_mEB598DFD70066C845995EAC5D1BF82698130D2D5 (void);
// 0x00000A8A System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.PerformanceCountersElement::get_Properties()
extern void PerformanceCountersElement_get_Properties_m8519C030829398320F0A1AA087B41E71884FC168 (void);
// 0x00000A8B System.Void System.Net.Configuration.ServicePointManagerElement::.ctor()
extern void ServicePointManagerElement__ctor_mA04F31D124B40258FE6673A2B7B0F7B2CE787615 (void);
// 0x00000A8C System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ServicePointManagerElement::get_Properties()
extern void ServicePointManagerElement_get_Properties_mCB80284E347910A59F7B5A495D5862533E41907A (void);
// 0x00000A8D System.Void System.Net.Configuration.SocketElement::.ctor()
extern void SocketElement__ctor_m5D5BA302FD35A1D25BB3A596954F92AB26C3DEF6 (void);
// 0x00000A8E System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SocketElement::get_Properties()
extern void SocketElement_get_Properties_m9A46DB832A9DA2A3E8F3B74D83DD96EC8A180984 (void);
// 0x00000A8F System.Void System.Net.Configuration.WebProxyScriptElement::.ctor()
extern void WebProxyScriptElement__ctor_m943D653C6A20D602A9ED7F0D13E0ED41691CC2C2 (void);
// 0x00000A90 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebProxyScriptElement::get_Properties()
extern void WebProxyScriptElement_get_Properties_mD29E00ECE9AAA868495BECD6D88C48BBFE74F26E (void);
// 0x00000A91 System.Void System.Net.Configuration.WebRequestModulesSection::.ctor()
extern void WebRequestModulesSection__ctor_mE9CD09355B8B10829D4B6D2681811DC7F199B8D2 (void);
// 0x00000A92 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModulesSection::get_Properties()
extern void WebRequestModulesSection_get_Properties_mF7B71DE46486B2AF3D42FB3B877CDBC35B5FFC2E (void);
// 0x00000A93 System.Void System.Net.Configuration.WebRequestModuleElementCollection::.ctor()
extern void WebRequestModuleElementCollection__ctor_mE32DEB8FF2F3E3582D6E9C291B6496BAFD182D3B (void);
// 0x00000A94 System.Void System.Diagnostics.DiagnosticsConfigurationHandler::.ctor()
extern void DiagnosticsConfigurationHandler__ctor_mCD2A35E58C3715292B4CAC69DCA4DB9FDBCAF8A2 (void);
// 0x00000A95 System.Object System.Diagnostics.DiagnosticsConfigurationHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
extern void DiagnosticsConfigurationHandler_Create_m7C5E9A16FBA52442C7C79E67B2C7991FB51D2740 (void);
// 0x00000A96 System.Void Unity.ThrowStub::ThrowNotSupportedException()
extern void ThrowStub_ThrowNotSupportedException_mA667A039AC2AB853687594A68EFA90A799028D4F (void);
static Il2CppMethodPointer s_methodPointers[2710] = 
{
	SR_GetString_m4FFAF18248A54C5B67E4760C5ED4869A87BCAD7F,
	SR_GetString_m410D5693D8F75264B62B781794F559446EC84B3B,
	SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462,
	SR_Format_m9FB0DE0E3CE685F3CC51CC7558F42F10931B8645,
	MonoPInvokeCallbackAttribute__ctor_m38A1F94D97EA55DC3B5AEC44EB89A0F266BAFE92,
	CertHelper_AddCertificatesToNativeChain_m821130EC2637BAFE16F607F366A82EF24E067BE3,
	CertHelper_AddCertificateToNativeChain_mE1F8AD3A6448C38C2E75A0AFD77BD0F175109CD3,
	Debug_CheckAndThrow_m435D60C930287782DE6E6B75A7BF7749BCA5FCF0,
	Debug_CheckAndThrow_mF1F5231EFB280A3B60200791E077F0B9416CC272,
	UnityTls_GetUnityTlsInterface_m19A40C86C9C542E4CDF9A01113E8B8B163387036,
	UnityTls_get_IsSupported_mCBB21E730F0F22A25CB1E55731809D6EA899A780,
	UnityTls_get_NativeInterface_mB7773702CFA41B1DF3C6868DDCF45E814F130D58,
	unitytls_x509verify_callback__ctor_mCD4AE44980D156BAF7B292E03B17CEE73CBFA77A,
	unitytls_x509verify_callback_Invoke_mE05631A7F1E2B1C94DE9D05468D1A399449BE3DB,
	unitytls_x509verify_callback_BeginInvoke_m80B588AC361E881F6B9A6A4CB1249527B5EE2D82,
	unitytls_x509verify_callback_EndInvoke_m4B9E4F34C79F1DB7EEBD8CD901402D21D9897DA5,
	unitytls_tlsctx_write_callback__ctor_m4A3B6C97ADCDE640A6D51BEBF956FE89CE7FE06E,
	unitytls_tlsctx_write_callback_Invoke_mE4D37080BCB02702B715781D34FD5EB30816E87E,
	unitytls_tlsctx_write_callback_BeginInvoke_m56D8E3602D68CCF6F84B1241B4046230ECE9EB17,
	unitytls_tlsctx_write_callback_EndInvoke_mF45640F3BD3B119F178FDDEAC7202B0084762C13,
	unitytls_tlsctx_read_callback__ctor_m42EC0545CBCEE38C403A2AD81C2A951A18536317,
	unitytls_tlsctx_read_callback_Invoke_m10194359ED6B21DAC2865817902E27D036864332,
	unitytls_tlsctx_read_callback_BeginInvoke_m500B1F505ACCCE25672F6C4112379D824CA20B21,
	unitytls_tlsctx_read_callback_EndInvoke_m5F3AE9D02E36D788A768006CF41CE166C3B1029A,
	unitytls_tlsctx_trace_callback__ctor_m5AAAAE3312A549267BC7A177CE9298C31B9FE6CD,
	unitytls_tlsctx_trace_callback_Invoke_m9A667101357751D33683A21B461FA7EF0C8A9B9C,
	unitytls_tlsctx_trace_callback_BeginInvoke_mEA1F9A679A167E7758686CE4B73A60E8D316010F,
	unitytls_tlsctx_trace_callback_EndInvoke_m7B34BE12F355DE949608742051B4F0E047D02487,
	unitytls_tlsctx_certificate_callback__ctor_mE30600E8B0DC15C286BEBDE36DB7CF0A5DC806A3,
	unitytls_tlsctx_certificate_callback_Invoke_m536C2AF2B9CF109A6014DFF45D3691EF04A56919,
	unitytls_tlsctx_certificate_callback_BeginInvoke_m7A678B70786434002434B2C15E17F0E642FC9606,
	unitytls_tlsctx_certificate_callback_EndInvoke_m55CDFC75FB80F60044FFE4FA6939252C2A01FD7B,
	unitytls_tlsctx_x509verify_callback__ctor_mD102129FAC6B05E4B4454B322E0DE2E7BFB16B9F,
	unitytls_tlsctx_x509verify_callback_Invoke_mE24F745E1914200CEB53E4489DA7CD2072B46AEC,
	unitytls_tlsctx_x509verify_callback_BeginInvoke_m96C1493D382DB98D0FDF62000704BA32B7C51F4B,
	unitytls_tlsctx_x509verify_callback_EndInvoke_mC445AA50EA5722909B9D24D543DB945654233729,
	unitytls_interface_struct__ctor_m55B3993F42779B4442042D897FAFEC6C978012AD,
	unitytls_errorstate_create_t__ctor_m502A58FB6B55E6F5A7C23A6D0BA9A57AD5C2FC8E,
	unitytls_errorstate_create_t_Invoke_m6DF09A1CC8C5C38D78CC2E510F318571202E7087,
	unitytls_errorstate_create_t_BeginInvoke_m103F02317D04043A6F17DBA039AC7DE10720F2B4,
	unitytls_errorstate_create_t_EndInvoke_m1129F7E0667ABDE028F644D2F6AE39659501283F,
	unitytls_errorstate_raise_error_t__ctor_mBDF3F1DBB55EBC328D0EE9A14A544A20CD076EBA,
	unitytls_errorstate_raise_error_t_Invoke_mB92B8CF1876FF0C9467C82918E427EBD324D8D8A,
	unitytls_errorstate_raise_error_t_BeginInvoke_mABE9FA2B499289353E0B756509458BB432BFED51,
	unitytls_errorstate_raise_error_t_EndInvoke_mDEBE29AF3E514929895AB7971B159BAB19E4BD5D,
	unitytls_key_get_ref_t__ctor_mE569EA0229BC956FD332E398F4A6ED32902EFBE3,
	unitytls_key_get_ref_t_Invoke_mE487DAB011D7F5966E09A2245399B312C2EF9111,
	unitytls_key_get_ref_t_BeginInvoke_m6E656A4FA9FC8D6BC473D707DAFC17DF861E8A95,
	unitytls_key_get_ref_t_EndInvoke_mBE91A77CA27DE41245B333EA0C8B93EAF0325DE2,
	unitytls_key_parse_der_t__ctor_m6E905C011D2077EE54DA350886C16B2BD1EE7681,
	unitytls_key_parse_der_t_Invoke_m108AFDBB38B2C1AD429E957CD5BEA93D23C152E6,
	unitytls_key_parse_der_t_BeginInvoke_mD0BF42B3B39E50702EC624F2A8596D3017D0F93B,
	unitytls_key_parse_der_t_EndInvoke_mEF249023FA9DD82850CB35FBF5691B44F8023A25,
	unitytls_key_parse_pem_t__ctor_m47E001D14C6F8F11E914B1126DE9516411A2AC06,
	unitytls_key_parse_pem_t_Invoke_mD4D86D5A1C3E8E9BF2BB9CC8774EB3499ED598F4,
	unitytls_key_parse_pem_t_BeginInvoke_m0AA005FBD3649ACA89E06C9664AC4B7BE062FD7B,
	unitytls_key_parse_pem_t_EndInvoke_m564A47C1A42623E189B4792E82B007B65D1BBEF7,
	unitytls_key_free_t__ctor_m0233235C55B3ECFECA16F0A8346E97D6ADDEC040,
	unitytls_key_free_t_Invoke_m4DD025ECA7C3B5020EBF702BC4BAAE8D9B3C807B,
	unitytls_key_free_t_BeginInvoke_m972ED483F0CC8F99724B66019E736094D326EE29,
	unitytls_key_free_t_EndInvoke_m47D280EFAE1EA7E16E6400B2F47A83C408410A24,
	unitytls_x509_export_der_t__ctor_m4514C241AC221F91BBB088FF1DC31B342DCA7397,
	unitytls_x509_export_der_t_Invoke_mFA1224BE85A73019C32C3CB0E8ABD7E5BFEFFA82,
	unitytls_x509_export_der_t_BeginInvoke_m315A20FF03D9FD6B82A9A3997267A4E4B72B8D05,
	unitytls_x509_export_der_t_EndInvoke_m660B809820CF47708B4DB7EBDF618AB34B70242E,
	unitytls_x509list_get_ref_t__ctor_m672FA9C9A5170D460A7D9839E786559819DB8459,
	unitytls_x509list_get_ref_t_Invoke_mFADB5F4BCB29A18DD0BD689EA8180D74CD9E4E63,
	unitytls_x509list_get_ref_t_BeginInvoke_m282E11FB630DFD9FAA07EE42FA460C10AD6A7915,
	unitytls_x509list_get_ref_t_EndInvoke_mF4CA76D68207C44E63DA55C4C4208576998D5AE0,
	unitytls_x509list_get_x509_t__ctor_mE5676A42AAAE07337AB42C51E139736482AD3FCC,
	unitytls_x509list_get_x509_t_Invoke_m58A02DBC5C5C9A0C693DFDE3BEBCE8518C5BEDFE,
	unitytls_x509list_get_x509_t_BeginInvoke_m5B76F36D52C182CFB7B62AA43C3E159E7E7DB468,
	unitytls_x509list_get_x509_t_EndInvoke_m6AFA7951802ED216C9EB13AAA7A5C707F7289F41,
	unitytls_x509list_create_t__ctor_m396CBCF6F413041E9FB829BCF12DBB71160E0CC5,
	unitytls_x509list_create_t_Invoke_m3A52B8B8AC08AA77CEDD34817D2C15209130A1F1,
	unitytls_x509list_create_t_BeginInvoke_m85BD25215C3E215460E132F10110223FED5C7CA2,
	unitytls_x509list_create_t_EndInvoke_m4D70BD363D9EA21E21E73C6705E62955477CB3B0,
	unitytls_x509list_append_t__ctor_m264F31493E6C24EF19C6560237F1DFB0522195C2,
	unitytls_x509list_append_t_Invoke_m85E010BA75CBBCC9B32C8A6C685E4F2CCFB69300,
	unitytls_x509list_append_t_BeginInvoke_m3A87AAC9A120A76CEC99B52A91B43739A74D097F,
	unitytls_x509list_append_t_EndInvoke_m06BB61716750C77C7D19DF3A10628680899382C9,
	unitytls_x509list_append_der_t__ctor_m814A959A92E1D413C2AB5BE0E8920318D52C8F3F,
	unitytls_x509list_append_der_t_Invoke_mA432486D4A73BB7FC4DFE3DD02205FE4C0AB9066,
	unitytls_x509list_append_der_t_BeginInvoke_mFC163657F9DBE3408CE9FBD94C0E0D672099618D,
	unitytls_x509list_append_der_t_EndInvoke_m6002A55859F4C9DCF95DEBADC867E85E33DEF36E,
	unitytls_x509list_free_t__ctor_m360A7960A558BFF26B537EE2717CE4FF60612EBE,
	unitytls_x509list_free_t_Invoke_m5F920A1A43E549E297391F2033A04AF8C05A3C4C,
	unitytls_x509list_free_t_BeginInvoke_m43DF55CE129363751C545897CF317FAD1D7BFA1A,
	unitytls_x509list_free_t_EndInvoke_m2EAAE00B58B3922A632D13E4DFA3DD737D971916,
	unitytls_x509verify_default_ca_t__ctor_m87E8CBD1080B32E3E9B2085435089120EE8E7B51,
	unitytls_x509verify_default_ca_t_Invoke_m22C2DE021D3D750655FFEF54BE2B030596F1A82E,
	unitytls_x509verify_default_ca_t_BeginInvoke_mDD34421A5A03B034EAD940EA3E667E2ACEFF5829,
	unitytls_x509verify_default_ca_t_EndInvoke_m4D26A5425526F6A205596F7AE025620E74173282,
	unitytls_x509verify_explicit_ca_t__ctor_m27337465175BADAB82BFF9333ADA82DCF2DFD2A3,
	unitytls_x509verify_explicit_ca_t_Invoke_m56F009ABDD7ED613CB6AC27AF8CAD6E6FB34555B,
	unitytls_x509verify_explicit_ca_t_BeginInvoke_m83F9DF37B6DCF058C496C26892257C5FE3CAB8F1,
	unitytls_x509verify_explicit_ca_t_EndInvoke_mC69D3C3E3F677940005907387BF6A51758A67968,
	unitytls_tlsctx_create_server_t__ctor_m444E3E5CA424BD6649C48AA2724ECABE25A6ACA7,
	unitytls_tlsctx_create_server_t_Invoke_m9BAA6CD5D7D6646AFC00AFAF4128DF92428F0F44,
	unitytls_tlsctx_create_server_t_BeginInvoke_mB600A87E8909E5FBCA2FC92239A783E345BCB5D7,
	unitytls_tlsctx_create_server_t_EndInvoke_mE0ED7A6AE53A54CF3479E70917D0BB2F8EC2DE3A,
	unitytls_tlsctx_create_client_t__ctor_mBEAE100CA3144364E49C2468343428FE9E19F9B6,
	unitytls_tlsctx_create_client_t_Invoke_m3BABCEA6ED54FD59886B7E8685BD7BDB6145079A,
	unitytls_tlsctx_create_client_t_BeginInvoke_mAF50983B4C1D6DC77B6E7A644872A95E88769D95,
	unitytls_tlsctx_create_client_t_EndInvoke_mFFC92B25698A95310EB56B6C8B82661E75D348C4,
	unitytls_tlsctx_server_require_client_authentication_t__ctor_mA41774A651C25857A72D3694EBDE91E70A408D81,
	unitytls_tlsctx_server_require_client_authentication_t_Invoke_mC8E06902662956294CEC4AFCF8697671E7BA3639,
	unitytls_tlsctx_server_require_client_authentication_t_BeginInvoke_mF93542F5F7DC74FC5042D346C0956E694F4B2479,
	unitytls_tlsctx_server_require_client_authentication_t_EndInvoke_m8F406760E0CA52C53B0C91D7A7862119F10E3B7C,
	unitytls_tlsctx_set_certificate_callback_t__ctor_mDC0A66278594A9B37EFA6FA3010AFD64DC3E81BE,
	unitytls_tlsctx_set_certificate_callback_t_Invoke_m3F334D5FFB2B3C104C1E65A04B044138CE51DFAD,
	unitytls_tlsctx_set_certificate_callback_t_BeginInvoke_m69D89510CE1C44BF29C88E2025C42F1ACD29605C,
	unitytls_tlsctx_set_certificate_callback_t_EndInvoke_mC3508D12AB7792789623E2CFAA028D214200C244,
	unitytls_tlsctx_set_trace_callback_t__ctor_mAA8F0A3B039F2A5DA4EA77F6DDA2573BB5FDA80B,
	unitytls_tlsctx_set_trace_callback_t_Invoke_mFC61F57B75911E4A1B08221AB854D91F5F03D476,
	unitytls_tlsctx_set_trace_callback_t_BeginInvoke_m03FCD2BF1AA2571CC4F2CFF59251EFA20421F156,
	unitytls_tlsctx_set_trace_callback_t_EndInvoke_m07BE3163185F6B3B1D299589E648F7C571D324FE,
	unitytls_tlsctx_set_x509verify_callback_t__ctor_m78790E0190264955C6B51F3ACCAAA2C02FC1CB52,
	unitytls_tlsctx_set_x509verify_callback_t_Invoke_m81E1B51C444B1074314AD55C22EC20E6AD8FA476,
	unitytls_tlsctx_set_x509verify_callback_t_BeginInvoke_mA488C207261DAA26D3D5A81F3549B9B058382DD2,
	unitytls_tlsctx_set_x509verify_callback_t_EndInvoke_m8BDF1F043AA55E4FAA727E67B544440ED316ED18,
	unitytls_tlsctx_set_supported_ciphersuites_t__ctor_m46A364914173C343267CFDC8B61D7DF4197C6448,
	unitytls_tlsctx_set_supported_ciphersuites_t_Invoke_mE7E379E36B2B4719ECF97F375682CD0DBF407F1B,
	unitytls_tlsctx_set_supported_ciphersuites_t_BeginInvoke_m03D9AE30DA07EB020A31669DC158422A593329E9,
	unitytls_tlsctx_set_supported_ciphersuites_t_EndInvoke_mAB41900E507484AD23583DE18E853B9B6145EF4C,
	unitytls_tlsctx_get_ciphersuite_t__ctor_mE7AEF274ACD666FBA2C02F14DA38014EAD75F8E0,
	unitytls_tlsctx_get_ciphersuite_t_Invoke_mDA134EC5BFA53F4985D9D10A8D4ACB971AE6D0A1,
	unitytls_tlsctx_get_ciphersuite_t_BeginInvoke_mA110391B7158B9BDC4F0597317AD70CDF0DF017F,
	unitytls_tlsctx_get_ciphersuite_t_EndInvoke_m9A477430340005FD37AFC45C377F3FBB8F60FF7D,
	unitytls_tlsctx_get_protocol_t__ctor_m42F49F551071AB0F91AB7810C8DC47A2A33F1384,
	unitytls_tlsctx_get_protocol_t_Invoke_m756BD8E367A9BF2872A3A2183366B5C5098A634C,
	unitytls_tlsctx_get_protocol_t_BeginInvoke_mEEAFA0B27A4655BA9729136FBB2A5383151E3169,
	unitytls_tlsctx_get_protocol_t_EndInvoke_mAB8A83B00C32C256F56E255EB9A683AE7924CE94,
	unitytls_tlsctx_process_handshake_t__ctor_m5FCC62940BECF2001364EA925FF543E1F59EBC61,
	unitytls_tlsctx_process_handshake_t_Invoke_mB249F948100B2752B2A6BF79C7F9038523C1C89B,
	unitytls_tlsctx_process_handshake_t_BeginInvoke_m8E4E264B100447C3590366B75F7C79E75D99EAA4,
	unitytls_tlsctx_process_handshake_t_EndInvoke_m3144D076D4C10224C8BFF05671EBDB5F0EFA6FBB,
	unitytls_tlsctx_read_t__ctor_m292F01CA56EC409E7CDA69BE0AA10B19B3E20F4E,
	unitytls_tlsctx_read_t_Invoke_m142B61FBEE88603BE95202B62762E92008324935,
	unitytls_tlsctx_read_t_BeginInvoke_mDE6D1E5ED970FB74D58A7C9D849D5CEF0A80066F,
	unitytls_tlsctx_read_t_EndInvoke_m3BCF50CAB32A1EFADEB497D3A50694C018E285C5,
	unitytls_tlsctx_write_t__ctor_m300C5AEFDFE22C96322EABE38FD2CA962350D96B,
	unitytls_tlsctx_write_t_Invoke_m4365C50B81B1904232514233B8252D15E3059416,
	unitytls_tlsctx_write_t_BeginInvoke_m7DEACE7853FE244D613A77ABEC04AC821B31F503,
	unitytls_tlsctx_write_t_EndInvoke_mE16B80B19C507E3EDF89DA7971AB267BACDC5E86,
	unitytls_tlsctx_notify_close_t__ctor_m9FBFA390FFA5F0E59EF1652BD1F8EC4BB579D787,
	unitytls_tlsctx_notify_close_t_Invoke_m1DF2F894CC7D1DAC1ED86AB643EF4D9482DBDBDD,
	unitytls_tlsctx_notify_close_t_BeginInvoke_m73742B8B1BC173EC206ADC3CA492E3BEED2A67A1,
	unitytls_tlsctx_notify_close_t_EndInvoke_mD5B659727C0CAD54F05D14BD3C1A554907695F1D,
	unitytls_tlsctx_free_t__ctor_mE457D4E43F47148D44E137E6C767DCD036DB34E9,
	unitytls_tlsctx_free_t_Invoke_m54B2D3A510B87650E7AF041CC60A9FF44ECA9437,
	unitytls_tlsctx_free_t_BeginInvoke_m4709DCB59DEDE7C1500CA164F5E304318ACB9025,
	unitytls_tlsctx_free_t_EndInvoke_m016FC930E1F5CD52FF74DD4FB462C9613813F39E,
	unitytls_random_generate_bytes_t__ctor_m55CC9979ADA003BEFF41370469BB0A82DFAC67E8,
	unitytls_random_generate_bytes_t_Invoke_mA5EFE8A5F4D068BEC771CE12BD5BD26F9A86BB84,
	unitytls_random_generate_bytes_t_BeginInvoke_m27BF16ECBD2C66644B2626E3CFC61600491E7194,
	unitytls_random_generate_bytes_t_EndInvoke_m74F081B09F91875EF4AC852F58AAD04BCAC1D205,
	UnityTlsContext__ctor_mC0C9DB6F5662F4076B3C4B21445826FFEB1C72D0,
	UnityTlsContext_ExtractNativeKeyAndChainFromManagedCertificate_m70256B35652930E4D9B1D6151B6839DEE667DD30,
	UnityTlsContext_get_IsAuthenticated_m43044D90BF11D30EE6EEB2F4F5FFE470FE7B7231,
	UnityTlsContext_get_LocalClientCertificate_m93F6CE29BBC552756C95C6F5533DF1936A0142ED,
	UnityTlsContext_Read_m4B2AC92721AEDAA58680B52E3E6D4EAA5E05FE13,
	UnityTlsContext_Write_mB34B278D4ECAD5F44AF4E9B3BA9CEC68AED19D34,
	UnityTlsContext_Shutdown_m24BD0E633C03B67F07165229426415BE206782B0,
	UnityTlsContext_Dispose_mCD3E2E28B0A68F82020472033B246DA57444FD06,
	UnityTlsContext_StartHandshake_m94C4C84918F93A3107DF9875206181C560C8550F,
	UnityTlsContext_ProcessHandshake_m0B483DA2D4468555E8B7F8FB7EF9DF1A926CC69A,
	UnityTlsContext_FinishHandshake_mB88A2326E0464370EB0938B3204A566816CE1D69,
	UnityTlsContext_WriteCallback_m466D11090AF989AD1F14E6FE049320297C12A86C,
	UnityTlsContext_WriteCallback_mB052756E2D187C3FCC59F9C90DC574444D88AAE1,
	UnityTlsContext_ReadCallback_mA0BF382397D912B79B6064B58B6C7C5D97853245,
	UnityTlsContext_ReadCallback_mE959A9C94E3AB908FD5AE20C21B4CB6FA46DE6FD,
	UnityTlsContext_VerifyCallback_m8C61EF3A0037483AD56A083CA47D8E4C0404961E,
	UnityTlsContext_VerifyCallback_m7A39B7F3311262CCC65B615F0B1841AEC3EBD6A2,
	UnityTlsContext_CertificateCallback_m793CC2EDD82935F29A3DEBD1F208DC56EA822E9C,
	UnityTlsContext_CertificateCallback_m7E54408ABCE341F31E4470746F9BFE2799B86297,
	UnityTlsConversions_GetMinProtocol_mC098F43CCD8DF9A77BFD69D3D9D5F569204B04F3,
	UnityTlsConversions_GetMaxProtocol_mAC1B84A7E2515C284F4D3C2AE0C2702557F40CA3,
	UnityTlsConversions_ConvertProtocolVersion_m555EF21FA846A96FE52C5E3FBA3AD10D202A9448,
	UnityTlsConversions_VerifyResultToAlertDescription_m78E79C1E3C062E64EB36CFC6280AB67A7EF12089,
	UnityTlsConversions_VerifyResultToPolicyErrror_m60E61EFD192DCDA65BBE1A1356A102B7E8BCE655,
	UnityTlsConversions_VerifyResultToChainStatus_mFDA2FD248854061D2C8009E4A46294C9810D90FD,
	UnityTlsProvider_get_Name_mDDA55EE63A0B76B6E0E60A8BB24B2796A619C330,
	UnityTlsProvider_get_ID_mB7896E12045D7FF2430DC7F9EAF15D706CB7744F,
	UnityTlsProvider_get_SupportsSslStream_mE4CB1384EF4F9EF0C96410AD2CB8C902F231B3F6,
	UnityTlsProvider_get_SupportsMonoExtensions_m8CA16CD7D8BFEB7520C3FC8AE4991D907E2844EF,
	UnityTlsProvider_get_SupportsConnectionInfo_m9332B1DE0BD3C876B3AE3C6AD0057BC613564CE1,
	UnityTlsProvider_get_SupportsCleanShutdown_mE9DF84BAD50C6616D0263C17CEE3A8145ADEBC8E,
	UnityTlsProvider_get_SupportedProtocols_mF4F9DC4EDA1444E22899C9A97A1DCCDC34C81EF2,
	UnityTlsProvider_CreateSslStream_mDC86FCB0F22309601707CF35B246839919298648,
	UnityTlsProvider_CreateSslStreamInternal_mF1D7EA59B6FD86A48A26BB32EDC4FFE6E3E6E348,
	UnityTlsProvider_ValidateCertificate_mA8A956114D6DA3186D05C8C19CB7032612199332,
	UnityTlsProvider__ctor_m59FD632B779113F9605538F8F598A53D1AC6985B,
	UnityTlsStream__ctor_m729A992C4510BCCEA67907859E15ADD36EFF6A27,
	UnityTlsStream_CreateContext_mA65D6D4D86EA24719CC88E657512544B22F97B75,
	X509ChainImplUnityTls__ctor_mCB15EEDD1B74D120351A35284065CA25A7416BA2,
	X509ChainImplUnityTls_get_IsValid_mA6540F1719A911C99CCEDADECDFAE0024D7AAB1D,
	X509ChainImplUnityTls_get_NativeCertificateChain_mCF317E093A598896E07D14E5F3818BD5AE1D59AB,
	X509ChainImplUnityTls_get_ChainElements_m0D5D46E3941F2DE26FEFAFE94EFC8D83203185D3,
	X509ChainImplUnityTls_set_ChainPolicy_m5F859F385256EDE337043A984EB7A85DDC3A3CBF,
	X509ChainImplUnityTls_AddStatus_m9B56480F6C492FED2C59E8A5AAAA30B74F061E10,
	X509ChainImplUnityTls_Reset_m888604968EB148EA0CB8D6205575BBC5F58F9B63,
	X509ChainImplUnityTls_Dispose_m35AB9FAEC54B7B74DB7C0BFCDEDCD3D7694CF77F,
	CFObject_dlopen_m29EB69AF02B241D923032648A7963DEF4D8E4CC5,
	CFObject_dlsym_m5EC2EC3D7641B183C77B8242FDD8DDE0E8F44BD6,
	CFObject_dlclose_mBE0671E0D3F7AEA620BADFD6488143977569FE61,
	CFObject_GetIndirect_m9DB824A82AFC5912132B005B866C357C3AA89244,
	CFObject_GetCFObjectHandle_m1D3B736481788AD65F9EF54BF8223C21B7405673,
	CFObject__ctor_m07A15746456C8DD8E6E52905DFE5289178F079FD,
	CFObject_Finalize_m643133D3B8DFAD68EF8A086BE25B3652563FA7C3,
	CFObject_get_Handle_mFE029493BB597D83A2BAC50BC506C8F7819336F7,
	CFObject_set_Handle_m88C2472F18456CC638B63034B489EE76923098C4,
	CFObject_CFRetain_mC8AEFDAACF6AA6F897D9FEBCD7D2612052A9A279,
	CFObject_Retain_m0F3DFD2CDD800D9BBF5543F954FD32FB3D71F989,
	CFObject_CFRelease_m028686C5FAD2396EA634AA2F9BD3ADD689CD7632,
	CFObject_Release_m6B6128DF1AED8B5F9D3B483696C1C49D0BFA7C76,
	CFObject_Dispose_mF350A1FD7D3BA6BE7F0511B5EF9EB9F383940EBC,
	CFObject_Dispose_m87063A0C278026A8E9B40F0FFE8E453A270CF73A,
	CFArray__ctor_mC4C9002848DD6098638622BFDA52BB77E8A021FB,
	CFArray__cctor_m44C24E5900506C7778F9E6F6E674A644388178CE,
	CFArray_CFArrayGetCount_m320E2F1C9FFF2159AD31A8C13A6A4FBC1C30280D,
	CFArray_get_Count_m200F3F3339CF874AE95DE987CB2AC3CFF6D40DE5,
	CFArray_CFArrayGetValueAtIndex_m99879F463DD339CC249B87EC9962A4D2E08DED7D,
	CFArray_get_Item_m18A8672B778744594ADDB29DFFB96224A686FE7C,
	CFNumber_CFNumberGetValue_m47D6E984DEBFEE051D237F510D70F7F3DF5DEBE8,
	CFNumber_AsInt32_m7CB0106AD5D5E1EDD8B1B36BA272BC7356B001B6,
	CFRange__ctor_m47A3FC3DC70D9A9685171D0A666C21E9522EDC49,
	CFString__ctor_m6FC1151D49252BA6F14027DF6FC09D9ABBEC5140,
	CFString_CFStringCreateWithCharacters_mCA349EA6BFA81A58404451E5C57F75717F6F7DCE,
	CFString_Create_m8F699B4DDDEE345AEC650353CB5755B6EADC12D6,
	CFString_CFStringGetLength_m33A40318266E7D609FB66FABF060B357CB86C0EA,
	CFString_CFStringGetCharactersPtr_m360E6706B2B077F051E51BCA7E554433E96B7A65,
	CFString_CFStringGetCharacters_m5139571D799842372F293519BA7EF1F2776FF883,
	CFString_AsString_m8209C956CA533F61D4B5F274640C03739BD1463A,
	CFString_ToString_mC3C3C20058C738903A5A783ED91E0D8A6694D876,
	CFDictionary__cctor_m7646C880CEFBCA5694B34C74F8294A8D526D0669,
	CFDictionary__ctor_mE147DDB550455913714118F199EA136AB5FE2F92,
	CFDictionary_CFDictionaryGetValue_m3D6FA09CC32FA06C4408ABF645810A92184A83B7,
	CFDictionary_GetValue_m947C063E75C13525FD1214A89F23C5B05469891B,
	CFDictionary_get_Item_m53003799E29C3F41B9C51927762F1D5921A5517F,
	CFUrl__ctor_m623159BA6C864641A77B1F59C8F09D4AE364163E,
	CFUrl_CFURLCreateWithString_mC1C1F16C817B6E31F452CA63C38E9D6E8949678D,
	CFUrl_Create_m4D63DAD21AD9658FD227D0E0385AA0745D8DFE0D,
	CFRunLoop_CFRunLoopAddSource_m9110DBBA1333686B2460B32716C113F1FC84D502,
	CFRunLoop_CFRunLoopRemoveSource_m98631D2406E345952E25EFDD22740D563516FC64,
	CFRunLoop_CFRunLoopRunInMode_mAA29D2730697A20E634E7064EE08A4504475CA80,
	CFRunLoop_CFRunLoopGetCurrent_mD98BA5C15429671A8C8957A6FDFA33497ABAD0A1,
	CFRunLoop_CFRunLoopStop_m1E9A301D3BE1DBFB3B3457656EA1053A37D637A0,
	CFRunLoop__ctor_m9DCFB09DC63118A1A8F61BF6ECACFE71C4B26974,
	CFRunLoop_get_CurrentRunLoop_m74A218C71BAB62C4747A1C08FC363AFE7B0FA45E,
	CFRunLoop_AddSource_m15D6017176B691ABD72806F93C6D5D39FBC42245,
	CFRunLoop_RemoveSource_m9F692D2493BC9B1F1E148C2CDA0C81A68D7D5CFE,
	CFRunLoop_RunInMode_mC4178D0FA7C7CD3F5E89CF17C172811C732FAE8E,
	CFRunLoop_Stop_mA22B6E86795862E3BDE3A80D20C147EA6693076F,
	CFProxy__cctor_m736522ABB3F0DEA804B54E911190E43B00A03746,
	CFProxy__ctor_m72AC01D0D722DB785752D822053E30566CC7F9F5,
	CFProxy_CFProxyTypeToEnum_m7A6FB42853315DD9AFB5D1600E8B8E90EB1B34A1,
	CFProxy_get_AutoConfigurationJavaScript_mE3D0B231DDF768976265EEFDF0CA5DDB124B8061,
	CFProxy_get_AutoConfigurationUrl_mCF8BA92EEDA1D578966BDC3750FFAD7E003F71C9,
	CFProxy_get_HostName_m2859802624D48ADB7150F996DFBF892D008883FC,
	CFProxy_get_Password_m496180D624F5A07E9452D3A784E071BE9A751006,
	CFProxy_get_Port_m63731A205673D95F61F15328B80A453E84189360,
	CFProxy_get_ProxyType_m9E4D8613B5A395CC0A8BDDD35EB01BFEF0EBB85A,
	CFProxy_get_Username_mDFD89DCA9925521628A2DF06656BF15AD4BD487E,
	CFProxySettings__cctor_m6E4B0654C5E24D20A536ED4A707D0111B276E2E9,
	CFProxySettings__ctor_m5D794E284FA54939D08F650AB1F72E773E7E6069,
	CFProxySettings_get_Dictionary_m9D0C3AF7134C56AE377B8403594E5EEDE80B873D,
	CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScriptSequential_mF5E0C26C1FB958681172AF27BF556EAF09AC5108,
	CFNetwork_CFNetworkExecuteProxyAutoConfigurationURL_m28FF1C6817B460A7A8015CC3D79A5274C2FC4640,
	CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScriptThread_m4177739109AA2E77BBE4B66CFF44EC6181221F6A,
	CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScript_m9314BA7D062428E5CE8C477FBC7821BB6A6E7F1E,
	CFNetwork_CopyProxiesForAutoConfigurationScript_m93CE8361E63E9736DE24E93725455F0B062F371C,
	CFNetwork_GetProxiesForAutoConfigurationScript_mDBFDE88606946A7922CF3A4862B7DF061AC6C327,
	CFNetwork_GetProxiesForAutoConfigurationScript_m037C5BEDCF1AF085AA65B014AA5A607A44863890,
	CFNetwork_ExecuteProxyAutoConfigurationURL_m92BD3E7511F6CDE7C2B1A99D09F3815742C449B3,
	CFNetwork_CFNetworkCopyProxiesForURL_mC84B9BC0607B0BA6A78253B8CC339C31C06E1C92,
	CFNetwork_CopyProxiesForURL_m7840FF9D3C2C78638C36233FF4BF15BDB7C601EF,
	CFNetwork_GetProxiesForURL_mB440990304B1E584DD411A447E60309860246D72,
	CFNetwork_GetProxiesForUri_mEBE40342DA8B590C0BC306ADAB65DBC3A11D16CF,
	CFNetwork_CFNetworkCopySystemProxySettings_m25B90339270E861C02F0CA5EB5DBADA9DA1D9106,
	CFNetwork_GetSystemProxySettings_mB550E25184FC94D96FD5247AFB3398232C177EA9,
	CFNetwork_GetDefaultProxy_mFF7890FE61056CC8FBA25505A40D7B8FBE7D4AE4,
	CFNetwork__cctor_mFE21CC2A0DC13CB075483F1DF1A164CA691A6A8F,
	GetProxyData_Dispose_m213CC717483A7B2D24AE3844DC54623E3F491078,
	GetProxyData__ctor_m4EF170D9F1F5318953CE2A71DC027ECE787F8DB5,
	CFProxyAutoConfigurationResultCallback__ctor_mDFCC8D01E93178E2BA5E5CF392FBC96E4DD6CDC7,
	CFProxyAutoConfigurationResultCallback_Invoke_m5DBA4F6E9D115DB335A5833A65B6D8E6C7556B71,
	CFProxyAutoConfigurationResultCallback_BeginInvoke_mDE3B00B8EA39CE1E5DA0DA857DBCDB0F25FE8FDE,
	CFProxyAutoConfigurationResultCallback_EndInvoke_m6DA3B409822D725A5C5E07B9888DDB3BBCFF23F9,
	CFWebProxy__ctor_m4F5F4B6DA0F19F1C071E62625D54C20951EFFCEC,
	CFWebProxy_get_Credentials_m506A8318934A19D762A74C086BE630E70A8AFBC7,
	CFWebProxy_GetProxyUri_m086EC6016BF8F1879EB256AB3162A7B9BD2AF6B5,
	CFWebProxy_GetProxyUriFromScript_m35F1F96303991ADF16BAB4D95110914E6C6A680C,
	CFWebProxy_ExecuteProxyAutoConfigurationURL_m76A8EE34869DE53FA48A0560AC61C09468A13CCE,
	CFWebProxy_SelectProxy_mDD2FB92CAFC965BBF3B3D5DDBEAB66C3B9B26771,
	CFWebProxy_GetProxy_m6EC2C1590383170DD9387CF85FB5328C780789C4,
	CFWebProxy_IsBypassed_m5F05D7C9302426EF280309DC04EFD106181A6B21,
	U3CU3Ec__DisplayClass13_0__ctor_m0CC4FFF2BBFF2126104AAFAC94D0F6266AA40867,
	U3CU3Ec__DisplayClass13_0_U3CExecuteProxyAutoConfigurationURLU3Eb__0_m760B8D058BD2000E464142609711A90FAA7D71F7,
	BufferOffsetSize_get_EndOffset_m9EED7B6B6EF1F2518A735AF875F88A5E03F0881F,
	BufferOffsetSize_get_Remaining_m2DE18A3119D97C30B3EE54B9C6260030413B089D,
	BufferOffsetSize__ctor_mB7C0B812CB8178BA614001251D5C5905C08029BE,
	BufferOffsetSize_ToString_mFB8CD5C4E6108A0C5B4717CFE1DF3A8E59138771,
	BufferOffsetSize2__ctor_mE4644CFB0D6AC7297E01282C7B898D119E18E8D2,
	BufferOffsetSize2_Reset_mE4DE740467F990ED792FB4966B367091B27BBAB4,
	BufferOffsetSize2_MakeRoom_mBFDBCE08404ECEECBDDB499ED991000ED3A1F35B,
	BufferOffsetSize2_AppendData_m5AFEF21E75273C3BF7FCD4B4433A49D088587F29,
	AsyncProtocolResult_get_UserResult_m1CD0222DFEFC2B0738DF69529AE2C70E21AE54CC,
	AsyncProtocolResult_get_Error_mB3036D4EFA6404019E91C7500B2F52EBBCBB9315,
	AsyncProtocolResult__ctor_mC6F604D2F6820EC29A697EDB00315B5B8D6BF2F5,
	AsyncProtocolResult__ctor_mB7F0640C90963ABD9CC43C118AAB34DD13D5BBA0,
	AsyncProtocolRequest_get_Parent_mA503BE9C5CE0D06A001902DD63B892B8B86275CC,
	AsyncProtocolRequest_get_RunSynchronously_m7733AC14F1950CD534E7CC150E42561B1C839638,
	AsyncProtocolRequest_get_Name_m07178E170DEB686F0F161446E8629B520E1DC168,
	AsyncProtocolRequest_get_UserResult_mC442C9E965AE3D70B0DFECF862583217C20031FF,
	AsyncProtocolRequest_set_UserResult_mD03A2987E4DF573A2BB3425B9474BA6B341F5F01,
	AsyncProtocolRequest__ctor_m5ABB63E835263B21871583924C03A4568EBB67CF,
	AsyncProtocolRequest_RequestRead_mD0C4C34F3D1602E8F138D93D6CF39A1CF89CB25A,
	AsyncProtocolRequest_RequestWrite_m75F0A9A2A611CC2BB267ADE4FF36E98148F413E7,
	AsyncProtocolRequest_StartOperation_m76C636186DB12B80876BF0E860C509E92D8289CC,
	AsyncProtocolRequest_ProcessOperation_m5B89FD2B927FFAB28DCA26EFB4A4AA3922289E6B,
	AsyncProtocolRequest_InnerRead_m965447D1F8015D839DB325E48C1968E88612143B,
	NULL,
	AsyncProtocolRequest_ToString_m69F3FEBD3DE453E4CEC99DB49D1AD99B7AAC4260,
	U3CStartOperationU3Ed__23_MoveNext_m63ACDC7CCB0E43A57BCC0D7BF6D14AADEA88150E,
	U3CStartOperationU3Ed__23_SetStateMachine_m8A586353421C2670E8208AE140ED5DBEDD4122B8,
	U3CProcessOperationU3Ed__24_MoveNext_mB0D2D020C1DE94FFD5D78109BC37802780D26A0D,
	U3CProcessOperationU3Ed__24_SetStateMachine_m19FCCEBF66308F920EF00C2C17E74BC4DE02094D,
	U3CInnerReadU3Ed__25_MoveNext_mE28E22197DC1A6A515E61B7EB9F17F9B41835B6F,
	U3CInnerReadU3Ed__25_SetStateMachine_mFF80981E4C6AB1765979F5A653446A0A081E9BAD,
	AsyncHandshakeRequest__ctor_m884A72725004810175F9D352326910C4EF6C73F6,
	AsyncHandshakeRequest_Run_m8FD00688379160E2E4FAB61C83A5023DC623F7A1,
	AsyncReadOrWriteRequest_get_UserBuffer_m89C0D2E505281A6E13D354DD4310E0E7F940F5EF,
	AsyncReadOrWriteRequest_get_CurrentSize_m35EC8070F5BFAA6BFE94C5D33F3A484F4AA59416,
	AsyncReadOrWriteRequest_set_CurrentSize_m03CB5D968A7AA61350B2C1F8F17319AD6C0E9B89,
	AsyncReadOrWriteRequest__ctor_mB8BE7F0A1951FA42FE17EE113C7BA54D71EFEAFB,
	AsyncReadOrWriteRequest_ToString_mD23C1D8B20669DBBA820AD426B0CB745E96D694B,
	AsyncReadRequest__ctor_m97269914BB6F589C30C0B3580114757CD9BB6D0A,
	AsyncReadRequest_Run_m4C8492D18242E1B7B2D27E61E3E7747F81118632,
	AsyncWriteRequest__ctor_m23D8ED46901F944741CD1EA551CF171421D16416,
	AsyncWriteRequest_Run_mACE37924F3AD1DC8D721789F1A59EF5894B8D3F5,
	ServerCertValidationCallbackWrapper__ctor_mF25EEA31EB05C9C7C7745F9E4B4DB500A5EB7B34,
	ServerCertValidationCallbackWrapper_Invoke_mBDF485AED0434BAE86AF712D014292266AA71C0C,
	ServerCertValidationCallbackWrapper_BeginInvoke_m1C615BE2C9AB52861BF069787D0ECD4C7879913B,
	ServerCertValidationCallbackWrapper_EndInvoke_mB61CE88402A67EA8F3ACDB5EF71355C868BB0813,
	ChainValidationHelper_GetInternalValidator_m8DC69A5241DDF15BB501760A626D94014DD0B394,
	ChainValidationHelper_Create_m133301B36D2C7B41D9E4571C9605E9368E977960,
	ChainValidationHelper__ctor_m28263F9E95F112572E406F1ECC7FBBE7300A6CB8,
	ChainValidationHelper_DefaultSelectionCallback_mE44C11E42543653003B1739AC2DEBF84E54266CF,
	ChainValidationHelper_get_Settings_m3531570824A98D25FD20B667975B42D72B07CE18,
	ChainValidationHelper_SelectClientCertificate_mF386AA0C4CF842650473CCD90B1BA0D34695130E,
	ChainValidationHelper_ValidateCertificate_mAB6BCD3C37B1ED5CA44B0DA7E3C7FE961D1F7A0C,
	ChainValidationHelper_ValidateChain_mF930C960C8EA0CFEE7AE893486A11AB96CC5A958,
	ChainValidationHelper_ValidateChain_mFB4BC1CD513099E2156178A0F94663FAD1849EB2,
	MobileAuthenticatedStream__ctor_m0D8FB103726E0824BEFD3033D067F7F4EA13EF3B,
	MobileAuthenticatedStream_get_Settings_m12C7E669BE45126A55BADAB2B707BC0F722EB610,
	MobileAuthenticatedStream_get_Provider_mBAD82128219CDFBF15FB864B10C7B0028B3B5293,
	MobileAuthenticatedStream_CheckThrow_mC8397F4398D9B5675EC3DE5612E31C2CECE89080,
	MobileAuthenticatedStream_GetSSPIException_mE68EE4F3915B1D350E340962DE053D2DAA8D05C8,
	MobileAuthenticatedStream_GetIOException_m3FA680F8E914AC496E6F439F6FDCE0A766C35C5C,
	MobileAuthenticatedStream_SetException_m5B0A18C66D1431C6EF3A43BFA7964BD376F57896,
	MobileAuthenticatedStream_AuthenticateAsClientAsync_mAEB1458E00859473D7182F54F316E8D62CE28BC0,
	MobileAuthenticatedStream_get_AuthenticatedStream_m5DF2DEFCE6B26E196FCA94F3E53DF6F0DEF6C622,
	MobileAuthenticatedStream_ProcessAuthentication_m178A7A98E02403F5CD941B3C49B580686643E373,
	NULL,
	MobileAuthenticatedStream_BeginRead_m2299EDE0D418F86FF6D7CA812B2DF4F3B07D82DA,
	MobileAuthenticatedStream_EndRead_mF64C5AE2022C2E6E32FBD7DE9CAF6204488F42A8,
	MobileAuthenticatedStream_BeginWrite_m444A84556523CD3607B0C3811B07BF7AD4B6E466,
	MobileAuthenticatedStream_EndWrite_mF32510E6ACF5029C4FFA0084687DBA67780935AD,
	MobileAuthenticatedStream_Read_m91B1888817700E4B4D059CDE6FCD78A3DCAE6C19,
	MobileAuthenticatedStream_Write_m6E0F97F71B3E8EE7F188C2E75AFBFFE3C33C69FB,
	MobileAuthenticatedStream_ReadAsync_m518A7BCD987093B19EB9CAAE57631CB0BAFE0C8F,
	MobileAuthenticatedStream_WriteAsync_m4F9F9B8C926E8B5AACBA1B7DF15638A4055E7AA8,
	MobileAuthenticatedStream_StartOperation_mA2F6EF91539E13CC9FED2888148C9708ED563883,
	MobileAuthenticatedStream_InternalRead_mC430180F8FD5AA589FD7AE5044A89F9B6F1427D8,
	MobileAuthenticatedStream_InternalRead_m86C071DC37153DC3E055BCCD6E932CEB5AA65ED3,
	MobileAuthenticatedStream_InternalWrite_m272A619B00CBE6704AAD300536D176AF4BF4F76F,
	MobileAuthenticatedStream_InternalWrite_mAC3D67F3F2A6BE41320B01433AC26BFAD2063A74,
	MobileAuthenticatedStream_InnerRead_m791585462E4A887702A9BF3650FCBE0BAC98FABF,
	MobileAuthenticatedStream_InnerWrite_m9B4A4FCF793834DCBF434ADFFBC43B4D215EB52F,
	MobileAuthenticatedStream_ProcessHandshake_m49D890591613A8EBE1B80CBDB5056FAF501D1BF5,
	MobileAuthenticatedStream_ProcessRead_m2DA627144AF178A8F0F54F58E6630C2F68202D12,
	MobileAuthenticatedStream_ProcessWrite_m26B164259C3550E33F5CDF2C4CB491CFF3F4C9B9,
	MobileAuthenticatedStream_get_IsAuthenticated_mC3633B71C753DA01E8DBD81BF5298500662ECDDA,
	MobileAuthenticatedStream_Dispose_m26864896490F078C981103A7927BDF91A39B33B7,
	MobileAuthenticatedStream_Flush_m199FE316A80E60239A917644253970986B9E7583,
	MobileAuthenticatedStream_get_InternalLocalCertificate_m92ADFDBB94D1A2173175C92FC3CCCE6A71FDB199,
	MobileAuthenticatedStream_Seek_mE638919C187C89E8EEB4415565A1608C01100265,
	MobileAuthenticatedStream_SetLength_m50ED54093260F90E226AC7964C6A380F6C5C0955,
	MobileAuthenticatedStream_get_CanRead_mD5EE416A9C812C7A5BA93A3F3AC3F4CD3CD7D5E7,
	MobileAuthenticatedStream_get_CanWrite_m6892AB7DA9B4EC279CFC64BABA5BC2F81E26E37F,
	MobileAuthenticatedStream_get_CanSeek_mF4B1F3F83D9B6EE8AF5984CA6911D42AE9181805,
	MobileAuthenticatedStream_get_Length_m26B4552100F40FE8CEF547787BDBACC469528599,
	MobileAuthenticatedStream_get_Position_mBADC7270050681E68FFDABCBB5EEC6D6C0B4171D,
	MobileAuthenticatedStream_set_Position_m34CF317339FC45361ED4CFB074E5F1ADA4EE1FA5,
	MobileAuthenticatedStream_get_ReadTimeout_m08E7A1C46ACA653B8624E3CD0357FFB2F61D9249,
	MobileAuthenticatedStream_set_ReadTimeout_mBE551C47A9E8F41C80F07E1191EEFE08341ABE04,
	MobileAuthenticatedStream_get_WriteTimeout_m89405014AAA907C0AAF95E0E6A27F13BA9484D25,
	MobileAuthenticatedStream__cctor_m6F1D2C909E67A0CA814D65E336039BB2B22348EB,
	MobileAuthenticatedStream_U3CInnerWriteU3Eb__67_0_m63D62194859ED8623C24783D737CA11D06501E97,
	U3CProcessAuthenticationU3Ed__47_MoveNext_mF3762B503551276E4B49F05F7413012DF8D1CC84,
	U3CProcessAuthenticationU3Ed__47_SetStateMachine_mDCBB12DB45E075AC256E54A1DFC35AD4C81912EC,
	U3CStartOperationU3Ed__58_MoveNext_mA92EABD1F8F3CE91103E228A56D16BE2E7C3FA35,
	U3CStartOperationU3Ed__58_SetStateMachine_m6896AA6F76C2DD0A407ADDFB40A574290873FFC8,
	U3CU3Ec__DisplayClass66_0__ctor_mCD2E2BE10E3708147749F093D9757B9B60DB4A85,
	U3CU3Ec__DisplayClass66_0_U3CInnerReadU3Eb__0_mF0041D575CFBB13F3CD792CDAB78B6E018B192BA,
	U3CInnerReadU3Ed__66_MoveNext_m36DB7FB663A6047DA5B34FE62490F230C48DD070,
	U3CInnerReadU3Ed__66_SetStateMachine_m56B57971A776743CEADDCF710EA5777B89642D4D,
	U3CInnerWriteU3Ed__67_MoveNext_m39FA739B0AE2BDF2EF4122C92A31BE2D016CEEF0,
	U3CInnerWriteU3Ed__67_SetStateMachine_m614328656FD99E8FC4FCEE4337F2043634F18D6B,
	MobileTlsContext__ctor_m656F47DCC938252723AFFDAE365DA1CA56A5C95B,
	MobileTlsContext_get_Parent_mA247FA590751030497F9B039ED3543748981EDC3,
	MobileTlsContext_get_Settings_m960574D1AA3C5F8FA078E05662093E419195FF6E,
	NULL,
	MobileTlsContext_get_IsServer_m6BA80FEC5C2FF9BEA15AB24562DAB28E2082361B,
	MobileTlsContext_get_TargetHost_m6054EE6F51F62C51B2479225DF80673B5FA47C42,
	MobileTlsContext_get_ServerName_mDB9D97589ED6FF43DC54F753C4338691DA302B07,
	MobileTlsContext_get_ClientCertificates_mC93FBAF7928EC1E3E1E4A47E99E6863FA8FAFBC6,
	NULL,
	NULL,
	NULL,
	MobileTlsContext_get_LocalServerCertificate_m4320272E1E2E02C77CB7521158C3E45565AB2A3E,
	NULL,
	NULL,
	NULL,
	NULL,
	MobileTlsContext_ValidateCertificate_m54BB8BC9C5C0703F52BD92F73F32C9E29D7754BC,
	MobileTlsContext_SelectClientCertificate_m0BD84B3C86150115C8141884B98D78C95FA7ABBC,
	MobileTlsContext_Dispose_mDD54934F58E124A19D89712EA3524008E5CAC050,
	MobileTlsContext_Dispose_m8689020FD9EAEF86AA65046E9A8DF23239B9BADD,
	MobileTlsContext_Finalize_m530A5F255410FD4FE9D22182B9F26376C1FB5D55,
	MonoTlsProviderFactory_GetProviderInternal_m7D960EA29363DFCCFF13D821CFB91F0BAC2A7587,
	MonoTlsProviderFactory_InitializeInternal_m238CDC0CF80A8124AC0B4CDED7336081D0A8F20B,
	MonoTlsProviderFactory_LookupProvider_mCF31D55B729ACF21C9D70A1390FE665DDE76A628,
	MonoTlsProviderFactory_InitializeProviderRegistration_m1B832D92E9E3086AD854E25847DF13BD598BD53A,
	MonoTlsProviderFactory_CreateDefaultProviderImpl_mD3884B54DC7A03ECADE264FFFFE03A107347944A,
	MonoTlsProviderFactory_GetProvider_mFD7B472C08E54CF8D28B4EE0E4CF402F18A99E20,
	MonoTlsProviderFactory__cctor_mD47FFE4B6FD8AB8C6EC15E4D977A2765D22A1BF9,
	MonoTlsStream_get_Request_m5CE0E7D32A482AFFEA41907117E3519B23C92F83,
	MonoTlsStream_get_ExceptionStatus_m790CC2AAD7D1BE95C884D0BB91D6EF4B1A8856FF,
	MonoTlsStream_get_CertificateValidationFailed_mF9670263A9DF5CFD0E8C0FD5D38153A24694A8AE,
	MonoTlsStream_set_CertificateValidationFailed_m0CB02DA5133C5B1D5E8CB9794A3BAEC3BDC5E0B9,
	MonoTlsStream__ctor_mCD79785E4129D92AEC28A2241616A44981F6BEE1,
	MonoTlsStream_CreateStream_mBD75F08F189BB5EE0F2CCB765217BCEF99F78BE2,
	U3CCreateStreamU3Ed__17_MoveNext_m5E7CB22F92B4B0C39AB680404D40ACF8C44416EB,
	U3CCreateStreamU3Ed__17_SetStateMachine_mF83DEBD81E6106CE1BF4F1970B3459E73D6B51D3,
	NoReflectionHelper_GetInternalValidator_m2AB3CD42938623B7E574540B348646074B14204E,
	SystemCertificateValidator__cctor_mD3C42893671C7F629E2F5659E8DC6C9B3B37E222,
	SystemCertificateValidator_CreateX509Chain_mB6B7EE7F5FFEAE0575BDEAA5482D81633BE553AB,
	SystemCertificateValidator_NeedsChain_m8BAD2594BF43C9150CD00581977B4F537C277FE3,
	CallbackHelpers_MonoToPublic_m425EA806EFED0B283EC06B4FB0EA471E8ACA92D4,
	CallbackHelpers_MonoToInternal_mDDCA94EA8ECB94A1308AE1C8199F5A0B8DEAC1B0,
	U3CU3Ec__DisplayClass5_0__ctor_m7807CD991EC4D16395E1278477E3317868E18200,
	U3CU3Ec__DisplayClass5_0_U3CMonoToPublicU3Eb__0_m4103265ECFA6558EE594E7BC847723EB97443018,
	U3CU3Ec__DisplayClass8_0__ctor_mB77347EF574C2C51BBD1A7B1AF673B3D92B056E2,
	U3CU3Ec__DisplayClass8_0_U3CMonoToInternalU3Eb__0_m3AE731A20AB6B949B0584AB838DF089C80602F4C,
	NtlmSession__ctor_mA97C8FC8E8DE96DE3F32909B142F4AB4DF8164A0,
	NtlmSession_Authenticate_mB6D8793AD526536CCF6125081AAB225AC16CE2FA,
	NtlmClient_Authenticate_m93E135571DBA7CD774FF632109C22D0285A75049,
	NtlmClient_PreAuthenticate_m086D1325279E3D203B3ECFFDCF718930D2A31B9E,
	NtlmClient_get_AuthenticationType_mA0E7AF714054C75AD6151729DC08011D2BEE4510,
	NtlmClient__ctor_m3D9978034518F3C84749A7F8315BAD280BDF2C81,
	NtlmClient__cctor_mF37C107318D8D9977B31B28860FF42C20B45DD30,
	U3CU3Ec__cctor_mDB4D626C1B3434A421DDF9A83A669939B433EB87,
	U3CU3Ec__ctor_m763ADB48F8381F44946398EE4CD3F62DA76913C2,
	U3CU3Ec_U3CAuthenticateU3Eb__1_0_mDA687B87E74F0D58938A2C7821FD6EADB6649AE5,
	IriHelper_CheckIriUnicodeRange_m5E205B2F096045DE5259E0E98A062DD0813206F6,
	IriHelper_CheckIriUnicodeRange_m03144D55C396E2870F76F85B29852F8314346A1A,
	IriHelper_CheckIsReserved_m9EFA3BDFD606F7EDB5DBF0549B20BFF2E4775C7F,
	IriHelper_EscapeUnescapeIri_m6CABB7FC44037C0B5C18132AF5D8C55DB5C64444,
	Uri_get_IsImplicitFile_m58AC900A18C84E93F4611F97639112F801629DAA,
	Uri_get_IsUncOrDosPath_mF197920D1C1DBDE10A3478855D89D36210D8CE94,
	Uri_get_IsDosPath_m3374B9D26D6B547862ACB2E617AB6F96CA31A5AF,
	Uri_get_IsUncPath_m1004A84C83F38F40A4AD1334F22BDDE658EF8E99,
	Uri_get_HostType_m6C142BC37D44CF1F53D80627455BC6B1CB747820,
	Uri_get_Syntax_mF7002491E720A700F68312C49337C6F5D91ABCC9,
	Uri_get_IsNotAbsoluteUri_m7394FF83375B299BA634518D3104903AFEAE3177,
	Uri_IriParsingStatic_m0F2797FEA328A2B1A72EE03F9BD88C577A7A0471,
	Uri_get_AllowIdn_m4031E81D7D0E44FC81C6951D78B2C836EC8270D7,
	Uri_AllowIdnStatic_mF38FDCA5248AA93F8823A192D61E2180FEC9C41C,
	Uri_IsIntranet_m89BF3C395C8D960B103DF056976B7C369231270C,
	Uri_get_UserDrivenParsing_mF09087D4DE9A0823EBF1FC0C14101335D01393F2,
	Uri_SetUserDrivenParsing_mDF0BFAFE946EAD9122ED2A542132902D7E47FD9C,
	Uri_get_SecuredPathIndex_m0BE7920E94AA002B4CD2D568BD6E0FD91F0D7F0B,
	Uri_NotAny_m2C222924AE10957D835ECBC887D456FB30DCF969,
	Uri_InFact_mF6A06FA7246740D26093421D41D18000AC2CC0C4,
	Uri_StaticNotAny_mA7DA612608D1C43837E3DC3E31C02F994746736C,
	Uri_StaticInFact_m6B17A3B95B81DABD390B643ABD9ADAA316D5EF98,
	Uri_EnsureUriInfo_m5FA3DF1CD26867815CE1F247A47530E1D7E35F7E,
	Uri_EnsureParseRemaining_m7BC86BEFE07F56D480C9ACBCE64983806F6789BB,
	Uri_EnsureHostString_m47897EC94F83DFE1CA16CE71167DDD3CC986C22A,
	Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C,
	Uri__ctor_m2D669E1153A700F9ED8BA31473565827AF8E39EF,
	Uri__ctor_m0B44AFB01F3FEDE9319BA4556288340D16101F9D,
	Uri_CreateUri_mCAE7D6A4588E2FF4507FF9198B856FD7354DBE0D,
	Uri__ctor_m77D32DF0ABC88A040214913D87A07F2C522CCD18,
	Uri_GetCombinedString_mC6530D23E30E379E8991E52862B9B38489430743,
	Uri_GetException_m6A158C16E69136DF56BCF19CC4C7DCCC2601CF84,
	Uri__ctor_m8AEBDC795304F6C78A02BC41BB4C6BF93C4DE53B,
	Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m42AA79366787600D266604222086BD6BDD28A36A,
	Uri_GetObjectData_mB720AACE3C54C5B104A7DF0658369C7F7914E895,
	Uri_get_AbsolutePath_mB845A99D0CEB442AAF90B24A95EE7509C34C6306,
	Uri_get_PrivateAbsolutePath_mB480D22E4DBE280587D24BCF9A57D3C096C4A833,
	Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA,
	Uri_get_LocalPath_mED5287A7F9ADF1CCBAFD77221135A37C133F067E,
	Uri_get_Authority_m453C817B1681F5FD99431A7FDF6F11CDB9FAC093,
	Uri_get_HostNameType_mEBBF38E3DA9410F5D1CA0C8877D7188B8822D97B,
	Uri_get_IsDefaultPort_mFDB9DC42A42C2D8C5ADFE5D590DEEE27D2918271,
	Uri_get_IsFile_mCFA022C6E4641EBD7285A01056B7E201CEFD2C73,
	Uri_get_IsLoopback_m6988313CE348064A6A068347D878DDC51594B710,
	Uri_get_PathAndQuery_m0FFF28F15DF953C5866C2A0DEEA2034ECE6A0F35,
	Uri_get_IsUnc_m74CE69038E37D7F868EF3EFD9DCCD08AA11877CC,
	Uri_get_Host_m05E1D82C4E6B14A2369AEDED218F9089DE336E64,
	Uri_StaticIsFile_m3E03FC49813EF629A488CF3093AE0A5675210CED,
	Uri_get_InitializeLock_mAE613B41FE88D4D6BC8D943F2A75B6BC00861B0E,
	Uri_InitializeUriConfig_m0DB8F34B6FAF361C0FE002FA800548608A03F8E5,
	Uri_GetLocalPath_mCEB791B43D5872D4D6230A21E2DFC93166CEDA1B,
	Uri_get_Port_m23A08BF55EC1DC7421B99E6E77544DDF5900099C,
	Uri_get_Fragment_m1734B2D3F27F38AA342CB65885DE732160501E72,
	Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29,
	Uri_get_OriginalStringSwitched_m405404D361D84E268AED978DCE114F5E43583987,
	Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC,
	Uri_get_DnsSafeHost_m3A22E10619987FC8FED6CEDDCA5D9647AC5B6AC5,
	Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25,
	Uri_get_UserEscaped_m36B234B7081DFE3B3B6D7FCA2F9768C10DDD2807,
	Uri_IsGenDelim_m93EB89B013A4AE8B5C5D792EB8BEAD2BF8EC5997,
	Uri_IsHexDigit_m87121EC1F62716CC681A4458BF2E6A6B844BD95F,
	Uri_FromHex_m16E5FED0B58BA0A603C6BDDE6AA90F3C3FC78977,
	Uri_GetHashCode_mC0D119822A7E802B29C060B809048C5A1413E818,
	Uri_ToString_m477A204846385EC6FF1DA9043B81B11512C3962E,
	Uri_op_Equality_mB322C9CBB45846441BDCA7357E7D28123824ED83,
	Uri_op_Inequality_m3B3733CAA19866A20EF76A772B368EFB5FC89A4F,
	Uri_Equals_mB02B478FE0FB77C8D853B051F798C8D978531C1C,
	Uri_ParseScheme_m65694E4DA17BF0A8447ACE12EF444FE4D1E1AB16,
	Uri_ParseMinimal_m47FF7ACAEB543DE87332F9DEA79F92ADC575107F,
	Uri_PrivateParseMinimal_m154A67FFA2FA8E2D9215163B56DF1BB88576A369,
	Uri_PrivateParseMinimalIri_m1A23B409BC4FE17A66599BFE0E0CD62C06D45E2B,
	Uri_CreateUriInfo_mD8864BD45B6397D4C3AED68BA2D3EAEB520DB9E6,
	Uri_CreateHostString_m2C549411869B57ADE6595800B6493BDB0A52F124,
	Uri_CreateHostStringHelper_m53D695F65E776AB98FD3359894C2C34109E08D00,
	Uri_GetHostViaCustomSyntax_mF2DABFE767AB49B8F8E0C9E19937AF900A1E4BC7,
	Uri_GetParts_m78996C042B20360F92CDB6FD71F74A242705DFDA,
	Uri_GetEscapedParts_m61C2B2B898F8AA8B75AAEC38EF78C340BC1F5A20,
	Uri_GetUnescapedParts_m6F106ECABBBAFA95C3F3CA86F540B9EE0B9D01D4,
	Uri_ReCreateParts_m3D0CD53477FBAB5E8988373B8D749E286399278E,
	Uri_GetUriPartsFromUserString_m81B60C6E31AB8EA51438E391F7990334B96ACD29,
	Uri_ParseRemaining_m8C4350479C64906DDE464595F8BE5F8C14F2038D,
	Uri_ParseSchemeCheckImplicitFile_m5F6B3C184CF455ED80D78937F208EB8C10265395,
	Uri_CheckKnownSchemes_mDA8F5B5A8A82B234F1212931F2E0F19146BAEAA6,
	Uri_CheckSchemeSyntax_m2D8AE16F4A6A55E89603F7E9D675227302B53761,
	Uri_CheckAuthorityHelper_mC5010AEC19EED1968EDE7CB52C92AC0AC0869503,
	Uri_CheckAuthorityHelperHandleDnsIri_m495861D9EEE706767F37270F316951E292C60B7A,
	Uri_CheckAuthorityHelperHandleAnyHostIri_m25D24DA750D1E2D025C22CF6D2BAD269AB3FA21B,
	Uri_FindEndOfComponent_m82D6E67E45114D23F403807E6D711C2A4E574567,
	Uri_FindEndOfComponent_mFFFB2266B9FDDB757E145586461BF46D26C509C9,
	Uri_CheckCanonical_mFD937A06DC3885481C374ACDD190A3B3E40152F3,
	Uri_GetCanonicalPath_mA187EAD590C890FE0623CF7B1EFF4364B57FAF10,
	Uri_UnescapeOnly_m18532EEE1EFF1E8A802527ECC577BA815CC33B1B,
	Uri_Compress_mDF5924D464EB2CDA24C14D7448878C2DA46A9B8F,
	Uri_CalculateCaseInsensitiveHashCode_m3C1409D3BEC3AEDC2880109BF1755CF68263DD7A,
	Uri_CombineUri_m25D4A53B7535EA10C7DA7835E16961BBD5895EB0,
	Uri_IsLWS_m4A41E0157130C65E6768C4F5CFEE2219DAE773B4,
	Uri_IsAsciiLetter_mBEE6BD837C66CBB199E8A9FAB14A85744368F0FC,
	Uri_IsAsciiLetterOrDigit_m1DDFA9F464FD15F8482F0C669E7E22B20DE07DCA,
	Uri_IsBidiControlCharacter_m36A30E0708EE0209208B23136C2BEC9C802C697B,
	Uri_StripBidiControlCharacter_m17F47758CA4DA1A5D21B3D39D00E8364DC2CAF50,
	Uri_CreateThis_m86E72577BCB9A6FDF5A0EC8EDFDD5F41AD3256FC,
	Uri_InitializeUri_m952665E18BE60CFAC5A6025FCD2A0BB9CCB5C567,
	Uri_CheckForConfigLoad_m4AF9D27B5F62A0D4269B23FB3BEF4846E8D0983D,
	Uri_CheckForUnicode_m2A9DB97F3B384DADC1A274C8982404DDE17F6688,
	Uri_CheckForEscapedUnreserved_m5EC5EFE77E30B08708B49086DF72A659454B1A2F,
	Uri_TryCreate_m44277635BB8291BC0AADD85B9C9A015C1C21EF92,
	Uri_GetComponents_mA614A98C35F2E5D924A10A8018A46606AFB6133E,
	Uri_UnescapeDataString_m52E242703F2842594B2B37D673CDD5465ABCC836,
	Uri_EscapeUnescapeIri_m606A69B7A76A131D0CA6F562E5DC0721C626E071,
	Uri__ctor_m899122920EF2C3DE3E7A620B823D43BDB54D3406,
	Uri_CreateHelper_m95C8DB174EFC0CB21C3A74160A1001C14D3EF6DD,
	Uri_ResolveHelper_m2C5CDF42841B464E75B3AA102A24BABA8B51698E,
	Uri_GetRelativeSerializationString_mBCE8CC99C746B18A9DE0B2C6084C5B90A192130D,
	Uri_GetComponentsHelper_mAA39E421157735AAD7D93A187CCCAED5A122C8E8,
	Uri_CreateThisFromUri_mCD4CFC7C223ADB909C634DA7EAE279DCD9BF5C14,
	Uri__cctor_mA68C4B77F99F4519E579073E32CB924DB4467457,
	UriInfo__ctor_m990C9CA368096AFE12B92F3605FAA70EC0C69BB8,
	MoreInfo__ctor_mF8515B2BCCB5E7DC008164794946ADE7ADBCD2BD,
	UriFormatException__ctor_m2B9D2DCA45C6A4C42CAC0DF830E3448E1F67D9DD,
	UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F,
	UriFormatException__ctor_mE91E0D915423F0506A5C6AB2885ECA712669A02D,
	UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m064FAD00616310EEE1CBA5BE4B438F73C9EF489B,
	UriHelper_EscapeString_m322E8737F58BBAF891A75032EC1800BE548F84D7,
	UriHelper_EnsureDestinationSize_mE185843AD5B8A829F920147F03FB252CF06129B4,
	UriHelper_UnescapeString_mA17D82F433C1E293A09957A12BBA31A2617BB300,
	UriHelper_UnescapeString_m92E5C90E7DAE8DA5C7C1E6FB72B0F58321B6484C,
	UriHelper_MatchUTF8Sequence_m4A148931E07097731DC7EA68EAA933E9330BE81B,
	UriHelper_EscapeAsciiChar_m7590A6410A9F1AE1207006EF9B46578E1A3DFD33,
	UriHelper_EscapedAscii_m80D926F5C8B177B5D041BBFEADEAB2363A324461,
	UriHelper_IsNotSafeForUnescape_m5504A36A2CC19ABC23255896A98D9912D390107F,
	UriHelper_IsReservedUnreservedOrHash_m155B0658622E15DED0A384A2E6A6013CE23016D6,
	UriHelper_IsUnreserved_m6B1C0AA7DEC462F62400ACFC7EFC5807730CD5B1,
	UriHelper_Is3986Unreserved_m0532DF2A1577C475D0D83F10C6C5D91F125AC028,
	UriHelper__cctor_m3C84C4F90301AB1F9B4979FA9B0C8926D4A7B96D,
	UriParser_get_SchemeName_mFCD123235673631E05FE9BAF6955A0B43EEEBD80,
	UriParser_get_DefaultPort_m7ECA5BE839D36C7FF854FEA0795D8DE701487D33,
	UriParser_OnNewUri_m44FB81344517268B51B276DF7A9E236C04134ED5,
	UriParser_InitializeAndValidate_mE7C239F559C834F7C156FC21F175023D98E11A45,
	UriParser_Resolve_m031E03AD4141D77F023345D8FB087FA06CEA41C0,
	UriParser_GetComponents_mEF92B7D8CD59B1C8502D195D775D02D2C844FC1B,
	UriParser_get_ShouldUseLegacyV2Quirks_mB8917CAC10CD13E44F2EB21D4033044BEAF132B2,
	UriParser__cctor_mE4EC170DEC3DCA59D51181F240BABD3404816DA2,
	UriParser_get_Flags_mDAA0D828057CA2CA4493FD152D3760E975BAE7F0,
	UriParser_NotAny_m6A42FAC623F0EBDE441782DAC3E3B2ED34756D91,
	UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D,
	UriParser_IsAllSet_m356BD044D8A53560B6A7AA9B81A20A364E015C18,
	UriParser_IsFullMatch_m3967BB43AFB5C11B75DA3BD1CE18B8DAE8F0C32E,
	UriParser__ctor_m9A2C47C1F30EF65ADFBAEB0A569FB972F383825C,
	UriParser_FindOrFetchAsUnknownV1Syntax_m7844992E6D0B5FD676AEE47EBD4806305418D6CC,
	UriParser_get_IsSimple_m09BA6505FDD1AE0BF6C711AE9C2C3F9379B868F8,
	UriParser_InternalOnNewUri_m0AC629BCCA398E9A193AC16A5E91D445B9B70D79,
	UriParser_InternalValidate_mB845C482B4B01EDFE012DD4C4CEF62C8F4FFE94F,
	UriParser_InternalResolve_m7EF249EAEFB9DDE866F9830E91CC61E09F1548E9,
	UriParser_InternalGetComponents_mAB0A54E462724FA417D0EF3A2AD0BD24BC66DFF8,
	BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA,
	DomainNameHelper_ParseCanonicalName_m1C6E554993599045E72E090518D75FF532D2543E,
	DomainNameHelper_IsValid_m023973F3D85C0B74F55D6B7576911D4813685052,
	DomainNameHelper_IsValidByIri_m97F02F9CC9EEE94308F903936E1E5D4322364869,
	DomainNameHelper_IdnEquivalent_mBA80E13A0C970D723F1A05F175F6B96E0DE3C974,
	DomainNameHelper_IdnEquivalent_mEF2BE28789962238A2B054639C82F8F711903CDC,
	DomainNameHelper_IsIdnAce_m485D0A1D49F957AE91C55D7B9FBFFFBDAAAA5D2C,
	DomainNameHelper_IsIdnAce_m23563D1578752DE903E530A0FEA2B58574D870EE,
	DomainNameHelper_UnicodeEquivalent_m862F489809AFF128883F7E52A9B56D0169AE5168,
	DomainNameHelper_UnicodeEquivalent_m3F187B69AA5313A516F863666C0A29292C8F07A3,
	DomainNameHelper_IsASCIILetterOrDigit_mD6FFEFCECBEDF217C5A8D809F4AA253E1DB660D3,
	DomainNameHelper_IsValidDomainLabelCharacter_mF7475044482589FC28EA15C6573810309C85FC82,
	IPv4AddressHelper_ParseCanonicalName_m4237845A3AFA554557BEC618AB11D5EF7A18C2BB,
	IPv4AddressHelper_ParseHostNumber_mA0B8E60CD5047E9A4276CB424C028F070240D29E,
	IPv4AddressHelper_IsValid_m6CAD01230EC033CB8F4ABB645327065A56E2ED7D,
	IPv4AddressHelper_IsValidCanonical_mCB1804B552E1977E9F89B1A912B2969A73DEB0C7,
	IPv4AddressHelper_ParseNonCanonical_mE2C4832ED252F3CE61B73DBE25B4959568E2FE31,
	IPv4AddressHelper_Parse_m9B4CB7935241AA6DC67171684E19AF8190364768,
	IPv4AddressHelper_ParseCanonical_mEDA5683F6AC98D0C403C60B16C2F859590A653AA,
	IPv6AddressHelper_ParseCanonicalName_mAC7315CCA0517C9B95D33C4114E90A8B94EC1E2C,
	IPv6AddressHelper_CreateCanonicalName_m0A4D273AB7676EBF0E66E7CBE15100D4614163C2,
	IPv6AddressHelper_FindCompressionRange_m5D45C7CDE351D8B073A56656BA062453CD5124A5,
	IPv6AddressHelper_ShouldHaveIpv4Embedded_m7EDC33D2523FB9961D20EB54A136369E6548E19C,
	IPv6AddressHelper_InternalIsValid_mE50A940EF05F93B144F0BCFFB9AA5F7E4E23F160,
	IPv6AddressHelper_IsValid_m8090A11221F415591268CBE22105DEFB03CA0FFF,
	IPv6AddressHelper_IsValidStrict_m3BD3CD0DCD4FD29996CFC9369F2C2904BE80604E,
	IPv6AddressHelper_Parse_m40C11CFE4C02F7BDE4A8A9B5AD65B5481576E91B,
	UncNameHelper_ParseCanonicalName_mAA1CF481E9789909F458A6C31A10DF991166F060,
	UncNameHelper_IsValid_m7179761E2E8A1F136418B2E4FA00277A192CD38E,
	IOAsyncCallback__ctor_mDB00FA0892C32A7922EA6D83F9B99B8BA89B9DD3,
	IOAsyncCallback_Invoke_mA74FD3E451CC9609430B5FBF1B2D25EEBE2F32BC,
	IOAsyncCallback_BeginInvoke_m8143A1DCA75368D887F3FD709BE437367EEF47CF,
	IOAsyncCallback_EndInvoke_m74C12B3991995B2357E2B709F77BF6A40CF16008,
	IOAsyncResult__ctor_m15A5D72B261B81BE2F8F7DA53FC0E476A3F18591,
	IOAsyncResult_get_AsyncCallback_m28F2ACED98F5AA2F05882EAD17000A26FA3DD5BD,
	IOAsyncResult_get_AsyncState_m4BA9096036268EB3E29A69E75C3E80D995C7E9A4,
	IOAsyncResult_get_AsyncWaitHandle_m8BBC83F5F781EE26F35A122B25331DACEB4E558C,
	IOAsyncResult_get_CompletedSynchronously_m5E49A06643ED2276D2443D4732349973DEFA25B3,
	IOAsyncResult_set_CompletedSynchronously_m4A31A9B8FEFC22E25A8DA81A338A05287487D1D9,
	IOAsyncResult_get_IsCompleted_m22B40C642B779F95E0D4997A336040E89C492291,
	IOAsyncResult_set_IsCompleted_m66D2E977BD61DC754E0AE7C7B9CB630345905183,
	NULL,
	IOSelectorJob__ctor_m8047B29992961582F968FFB25D95662807C44B59,
	IOSelectorJob_System_Threading_IThreadPoolWorkItem_ExecuteWorkItem_m3CF49929004EB3B060E4ED5DB237C109145C9459,
	IOSelectorJob_System_Threading_IThreadPoolWorkItem_MarkAborted_m14D2CEA6CC4C9E471B27035A45F73D3040AF3044,
	IOSelectorJob_MarkDisposed_m59C7B222B7A2C93E838F2515F89A9BFD16CB6435,
	IOSelector_Add_m5CD0B1BF6A9DBA5B42F6D6CE9F86568A2ADBFF02,
	Platform_uname_m5E4EF5E0C9060E01783301E28C8A58F45D8E4959,
	Platform_CheckOS_m2F2AD83106D4EE97E646C36AB222745F6A79439B,
	Platform_get_IsMacOS_m842F8283BD3653F87D1EAC7F17DD2B2B0DD8A6D2,
	UriTypeConverter__ctor_mA17261C142F48B539C7255CC50CA95F730854EAB,
	UriTypeConverter_CanConvert_mA0211689C50AF82982D1A12135FA0CFB8548A392,
	ElapsedEventHandler__ctor_m2B99031158D1FA06EBE73A025249B5C1955441F5,
	ElapsedEventHandler_Invoke_m4D269892FBC3DE224ACE0FAFE97F2304BE8B6502,
	ElapsedEventHandler_BeginInvoke_m49B03DB77CEF0033A832F756E40473AF6B8DFF66,
	ElapsedEventHandler_EndInvoke_m2B52C86D96354EB2F5321672A862EA081ED5F176,
	Timer__ctor_m8CD6E716B068F1BC15FE81D56671AB0A6D347EBD,
	Timer_set_AutoReset_mE39B03D4F8032BB39B5D09CBF4A13CE660A16619,
	Timer_set_Enabled_m03648A71FC47FCE77C7382AED892E09ABE6C034C,
	Timer_CalculateRoundedInterval_m323DEBC750CFD4F2DC6F78F280E930D6E37E32F5,
	Timer_UpdateTimer_m708B8F81518FA1BF0B047046F102A5B67F92719D,
	Timer_set_Interval_mA437AE87EFE7BDF2BD2314158D3729B210474C23,
	Timer_add_Elapsed_m3FDC03401E31156441DE48618493181329C31A1F,
	Timer_remove_Elapsed_m788B169776E02C6BF94629B970115CA4AE6D8569,
	Timer_get_SynchronizingObject_m1E077BDCAC9C362AD952DD7D966D9F8DAD347BC7,
	Timer_Close_m11E3B3DB0ED2E09E67EC10C07FA9646938552392,
	Timer_Dispose_mA3F3E99853D4604113DD2289E1B7C98120E6ABB2,
	Timer_Start_mF5E17482246B10FB111BA69520B84E5FD9F244EF,
	Timer_MyTimerCallback_m439027CED7BB35E94A00D2E07D58999FBFB0DC78,
	TimersDescriptionAttribute__ctor_m79C886D1E15294CD0ECA0CA84FD0760EC37995DE,
	TimersDescriptionAttribute_get_Description_mB079536EE7888C80B599361A92823A1A4C81977B,
	ElapsedEventArgs__ctor_m011632FEB3E0DD777827925EBD080DF47FD28087,
	Regex__ctor_mEF92EBB8A321ACF8E6D952D4211D447970641A82,
	Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E,
	Regex__ctor_m5BA9C047FEB3C93AD388668FA855CB1A63FB62A4,
	Regex__ctor_m554F01ECFC788141B8015EDE403CFC57DCF65F36,
	Regex__ctor_m6B76356476FAEC104F6088C71C9659B5023AC010,
	Regex_System_Runtime_Serialization_ISerializable_GetObjectData_m2ADC8012FEA27096E98EB9126BBE2553EFBEADDD,
	Regex_ValidateMatchTimeout_m4C1557E40D27540F8F9E8CDA35473D94F7B1B2F2,
	Regex_InitDefaultMatchTimeout_mB8E2FD4834968D6E775632A6D55FCA39D65F402F,
	Regex_get_Options_m96441AFDEDDDDC9AD8A21C54C1C05B63581154E2,
	Regex_get_MatchTimeout_mA525D5C25A1DADC3AF1913D6E5FA6D8F0208309A,
	Regex_get_RightToLeft_m14807D1228A43D322B2F7E4D82613ADE0C2DCA77,
	Regex_ToString_m7D4EE035485F8A09613A6A7D171CAB7FE3FA68A1,
	Regex_GroupNameFromNumber_mEC9EA505C734A60A6D10397D5ABB37EED1C244B9,
	Regex_GroupNumberFromName_mC7A0648278EF384E09A1A1731A0703981D0ED14B,
	Regex_IsMatch_m4E87C3158FE78A31C412357F7DB6692639B2BA57,
	Regex_IsMatch_m826F4E3E65102210A1FF2FC27EEC9DD6695F3E50,
	Regex_IsMatch_m872C1D85AC5BF891AC3C3FC789BBC4E2393FB859,
	Regex_IsMatch_mDDCAABF0AAA48842BD96EE728A7A6732D579DB6D,
	Regex_Matches_m52B8A7E346FBCD0F7283230251CF1F62F378A8F6,
	Regex_Matches_m19C6D1642E26BE6175479F6BD1D92C3760B6BB47,
	Regex_Matches_mA3CAFBD1A581E7409F82E96AB033F62A5F305465,
	Regex_Matches_mE1B9FFC45683E3446029B8449C3361CDA2BD1B15,
	Regex_InitializeReferences_mE235C9E46D78418A5D0C2D20AD885CA08A7963CC,
	Regex_Run_m021AFCB24F51C103A7E8D1D59805B47FD582E3FB,
	Regex_LookupCachedAndUpdate_m622DA7C090B63CE5ECC87F5F20607ACAC8594522,
	Regex_CacheCode_m32FF18EDE0B858DB864C27480A11C5A1F752D419,
	Regex_UseOptionR_m17558F506D3A7513656679A8F3DEEA0C50AAE90A,
	Regex_UseOptionInvariant_m82E216D16CB2DA12B8B8DAA67CC2BE6BF4DF2470,
	Regex__cctor_m31D6C59D0C59DC5CD2ED72B1B595211F27611F39,
	CachedCodeEntry__ctor_mFBEEE67EEFD35764488134D428A6BCABE54E52FC,
	ExclusiveReference_Get_mA02D838F3B8772B83AD45D47E8C8275F8EA2A48A,
	ExclusiveReference_Release_m3D5A9BB7FFB13DBB21386F811936EFC6A358C1FC,
	ExclusiveReference__ctor_m67E39E008F143F07C22A8424E051F6798B917089,
	SharedReference__ctor_mCD9987FD08CB61180CE190A8DEF05E5AAF5C1087,
	RegexBoyerMoore__ctor_m7CFF1BFAA30CB9EC30B0E48B3321366E2C6EBE92,
	RegexBoyerMoore_MatchPattern_m244689CC527B9B9EFB200E94FCC3C9A8B9210543,
	RegexBoyerMoore_IsMatch_m37FDC206D86DD3C91A745BE15731677FE01F624B,
	RegexBoyerMoore_Scan_m8C2A8FE0B6CFE8C7844AF8F2FEA79532935BAE43,
	RegexBoyerMoore_ToString_m3D7727E2CB60CF2BED7C907CDD2B1584BDF95A5A,
	Capture__ctor_m5FB71B7ADA66B2D3AD6B681BEE846F0FD62F11C3,
	Capture_get_Value_mC5CAABA66AC24C90CE1A6FE7EE93AD4A926E4D5A,
	Capture_ToString_mA44E5E7488551081E648C851ABFFB796430EE5C1,
	Capture__ctor_m72C4D0A93638E338515B280A289285A064F064C1,
	CaptureCollection__ctor_m51AA3D1F3F645DB9A6B9002B7A971F46D0DA0089,
	CaptureCollection_get_SyncRoot_m6E9AD5A5F870020F1F278897056D3FC8B13582FF,
	CaptureCollection_get_IsSynchronized_mC977AFC32D3D3CC4F11F61AD477AB2061705904A,
	CaptureCollection_get_Count_mC83C2AE60F245A995ED192450BB0660E4BFC73DF,
	CaptureCollection_get_Item_m38FB912D78566BF8D926F85ABF06770E70B87E7C,
	CaptureCollection_CopyTo_m9066DD9E35382427D284FF3F9E35BD2C99160108,
	CaptureCollection_GetEnumerator_mE3F6547C20D9A0EEA8C201DE903E1828F2CC6F8C,
	CaptureCollection_GetCapture_m52D3C11680567CEE2196B35A76D75A7FFEBF617A,
	CaptureCollection__ctor_m99E1DDC528A7C23B30B7BD3557C3044CBC7E6043,
	CaptureEnumerator__ctor_mA4C64A5B5D69EA1E38B87E0DCF6CC3B18670A03E,
	CaptureEnumerator_MoveNext_m24B6099142A5DC82DCF5711D2F6FE9252C9603E6,
	CaptureEnumerator_get_Current_m9C74AA50A043E53A02EF56778A97BD3498D312E8,
	CaptureEnumerator_get_Capture_m02F94CD692952EC04026014A1879FB058E9CB0F1,
	CaptureEnumerator_Reset_m8513DDF2EFB58C87469D6159F825DD162A60AA14,
	RegexCharClass__cctor_mE2E6B03346A8A9C65323338DF3025E881096AE2B,
	RegexCharClass__ctor_m70685392EB3C5808958E20C99E045F33E21C8192,
	RegexCharClass__ctor_m1751FAC691E10689BB486E5525B3D19F9523C5DB,
	RegexCharClass_get_CanMerge_mE5B4778068AA81EB1B7D426C48EF0C5CFEA0021B,
	RegexCharClass_set_Negate_mC3CA41B098CF6B47BBF9101619F1AC4EAA3FD131,
	RegexCharClass_AddChar_mDDCFF2A0510737DEAE68DEE7E1359AA7F07D0609,
	RegexCharClass_AddCharClass_m1E139F8FDC0E1A33E143A3A413255F6D521F7EB8,
	RegexCharClass_AddSet_mEE9EBABD3A66153DE53095A2ADD9AAE04F908DC6,
	RegexCharClass_AddSubtraction_m1FEE4A4FA29196BF22FBDD7EF3A263010E7661D9,
	RegexCharClass_AddRange_mD9FB543DC3B128104DBCFEA0B2E672E8A8669C5A,
	RegexCharClass_AddCategoryFromName_m53A239A7DACD3D5A676505E6E296C4AB999BBA4C,
	RegexCharClass_AddCategory_m75BF8C842C362F4D910FCB2BA59678BB71153C24,
	RegexCharClass_AddLowercase_m4FAE0AB13B3DB076F711B6B06C2E61F40A115B40,
	RegexCharClass_AddLowercaseRange_m0715BCBBB26E5000E2F87CC555DFFD1EF97414B1,
	RegexCharClass_AddWord_m977499503E6B5EB99106DF69247EBE65DDE301D9,
	RegexCharClass_AddSpace_mA542E2916FEB49051A7AA0490704466DA85326BD,
	RegexCharClass_AddDigit_m7B6D6AA1D10B8D29D004D94FC26F9CA53B3306D7,
	RegexCharClass_SingletonChar_m8D1E6205BE062B72C10A417C0BBE130888FAF3FF,
	RegexCharClass_IsMergeable_m5731790CFE2293CB05120782908AC550C58C63BC,
	RegexCharClass_IsEmpty_m75C168B21BE2E4C4BDC15ABC666A755F0064F7CF,
	RegexCharClass_IsSingleton_mF6500F4A47D3E44CDE29C0BA21AC111282C50737,
	RegexCharClass_IsSingletonInverse_mBD2991532F9310EC5E5F30AE4C20998DA39F69BE,
	RegexCharClass_IsSubtraction_m5E9C607DA50B374AAA071E88F2005796767101AC,
	RegexCharClass_IsNegated_mED1CDB81577538910205D00DAF9127AA9F902DF8,
	RegexCharClass_IsECMAWordChar_mA7325BA81D0699C24F5123956BD4927F1E3DE846,
	RegexCharClass_IsWordChar_mE33E6C5569AA1B920849CD5555DF3CE9A9C10440,
	RegexCharClass_CharInClass_m255B7683478670C002F04238394193EEFA126AE8,
	RegexCharClass_CharInClassRecursive_m08F8B6BE653368E78DDC6D1B279F226B0DD470C8,
	RegexCharClass_CharInClassInternal_m752D8B14E233A7E88EB844D3DCC94F0415C59BCF,
	RegexCharClass_CharInCategory_mD2F03CCA8C95F3D238E7F3F191FDF12E728199A6,
	RegexCharClass_CharInCategoryGroup_m2578711ED00EC75ECE3C9F797959E3C24004BA0F,
	RegexCharClass_NegateCategory_m6F4A4DA1466E59581F16BFD29A0F978027B06BDC,
	RegexCharClass_Parse_m1A4671A8A47BA3DAC47386D01D5995C6100E87AC,
	RegexCharClass_ParseRecursive_m16DE8B45D1F6AD4AE03EB9BDE49DC4BEDFC095BB,
	RegexCharClass_RangeCount_mDA7393449D38496B2598E7EF912AADF9A14842DF,
	RegexCharClass_ToStringClass_mFC6754E97F014AFE4B5138AD5386E9C76D1D3CD7,
	RegexCharClass_GetRangeAt_m92D3897D77D2AD15415BA0DE4E8FB4FBBFFD092C,
	RegexCharClass_Canonicalize_mFD09C33130AD6323D1AFA7944B02DD68A5731A66,
	RegexCharClass_SetFromProperty_m5938519AC2682F7F0E6491A0D71C11FCA825B827,
	LowerCaseMapping__ctor_m0236442CB5098331DEAE7CACFCAC42741945D3E8,
	SingleRangeComparer_Compare_m54BB5AFA11BF2F18A0C2F9491CE48E409D64AD3E,
	SingleRangeComparer__ctor_mCEFF5ECE77E53783E5B8EAC98A5E194B6C743E73,
	SingleRange__ctor_m886247FFB10501E4CDDC575B221D8CD1BC85E3B6,
	RegexCode__ctor_mEFC64ECB52D0D2735F99AC16BD6355D3A59499CE,
	RegexCode_OpcodeBacktracks_m2A8CE4121EF7827E575F17B2D0DB7C009B6DD9FB,
	RegexFCD_FirstChars_m705EA84111ABE92AFC2ACD490AC26BC6400D75EA,
	RegexFCD_Prefix_m2D11D5E62E9F31984C40FDD6C0ED9860DF56DCF8,
	RegexFCD_Anchors_m4F3A11C644EC9B7B16CCCBD792A5E2FED2C22EA7,
	RegexFCD_AnchorFromType_mF78B2ABC2D01B01663B7ABC885B3067F199A40C7,
	RegexFCD__ctor_m81A680DE9EE0A7D9CB3F0245E4B584033ED7C299,
	RegexFCD_PushInt_m2C075ABCE35D8B5F3AE842D0A79BEBBDF53E79E6,
	RegexFCD_IntIsEmpty_m4CFF914DAAAF04747FD11B2740D47CD4A41F7321,
	RegexFCD_PopInt_m15845F98455FA8320FCC484AD15CE5A55B43EA14,
	RegexFCD_PushFC_mC4174F9014750978ADB35B3E45DE43D740070B92,
	RegexFCD_FCIsEmpty_m3FFF61F7B0567B2B1ABA23377742A6D0AC9DF016,
	RegexFCD_PopFC_mE67FE0664971894C6935632FD634207784EAE43F,
	RegexFCD_TopFC_mC9A10E7061B6283532AF800971B26A7660036AF6,
	RegexFCD_RegexFCFromRegexTree_m280F32208540ABB3B88FBA4BC3F7FE6A7E02DA40,
	RegexFCD_SkipChild_mE3F09E85EC04B345584A4268DDE28029B1493ABD,
	RegexFCD_CalculateFC_m11BAAB103351C64BA06B41B999C2BAD670E3579F,
	RegexFC__ctor_mA39AF7098BC1D63C19E316121CC854AACBE4CB59,
	RegexFC__ctor_mA9779C6F7E4B0B76041B34DF40F2B6DBA82761E2,
	RegexFC__ctor_m8693359483B2128560FC374872CFC1382A0605B2,
	RegexFC_AddFC_m515C7808755FE89185D85B3C39184C2425B44629,
	RegexFC_GetFirstChars_mA929BEEE9D6186588C518891EB8CB416C31060FC,
	RegexFC_IsCaseInsensitive_m522494DC3CF0587D7B65D57B4C14E1428A2E34CA,
	RegexPrefix__ctor_mC34F48A63A8A04942930B9FE236636E2AA745B24,
	RegexPrefix_get_Prefix_m6806C1EEE5B8973606B320A9C4CD5A9E91466F34,
	RegexPrefix_get_CaseInsensitive_mB4CF8FBFABE26F206AF6324A0C87DFB34C051A95,
	RegexPrefix_get_Empty_m65C2AD019C414B97A57D5AA5B4B0DC331E011A8C,
	RegexPrefix__cctor_mF047A4BFAFE90562128AD10E6D2F382079965F68,
	Group__ctor_m5FE82FDB5B4EE244EB46909ACC099806555EB32F,
	Group_get_Success_m917CA7077102642C3C24106F13B9F5F5D5130C1B,
	Group_get_Captures_mA6B7E2F62B90C44E74CC65F37A78FD1CFA1C06EF,
	Group__cctor_mC2C601CAA7A29E2CF56AE1A25B7C0683B05C8BE1,
	Group__ctor_m2EEFD01EAA4B135ED614049B00261D0736EF8107,
	GroupCollection__ctor_m7DC940E706407EAE4AC45F297F021CD11F26CF6A,
	GroupCollection_get_SyncRoot_m9D32B2F5AE2C8968E660B524D678B806C79763E0,
	GroupCollection_get_IsSynchronized_m05B4F9773FBA0A24E9F851FC590ACF60F9DA0FAB,
	GroupCollection_get_Count_mAECC6108C576E7C3F0F6B8E0F9F0D5B742467A43,
	GroupCollection_get_Item_mC96099D0350BD4846B66097F31D6B4DDDFE1CA97,
	GroupCollection_get_Item_m58F451BF6490EB64CA9C1A05844A790967166A6D,
	GroupCollection_GetGroup_m8824F1E25823F06F2B060E64152E8AC3B8300236,
	GroupCollection_GetGroupImpl_mA161F33BBD5BC291025BAAD97458E02422B76348,
	GroupCollection_CopyTo_mEBB026E2CE653D4797B1F3441D3CA1AF2FE4A06E,
	GroupCollection_GetEnumerator_m2FA24AD194C005DEE73F1D16874A479728813DA9,
	GroupCollection__ctor_m0E2105EC5E4078F03D98853239AC10219BFAE78B,
	GroupEnumerator__ctor_mFE577B10768A029DBC40A368D8A48B8F1D5479B2,
	GroupEnumerator_MoveNext_m1A95E15B99089341CC06EC0335B4444B43074D82,
	GroupEnumerator_get_Current_m3DBEB28D71BCD80F013B392B8FB3FEC88A372206,
	GroupEnumerator_get_Capture_mA37A878E91115550F8F08147CE2CB6A30EBF602D,
	GroupEnumerator_Reset_mCC8BAEE9E46DB67F36E1F4A49A38E87A8FEE8C22,
	RegexInterpreter__ctor_m58E5C9B14F78D108FC9277924C4A5DCC73AE832A,
	RegexInterpreter_InitTrackCount_mF85CD3AACD0F8EFFF2D54ECE67DFA073503D978E,
	RegexInterpreter_Advance_mC3549A945557AD11D80890E0DCBC6D53860A97FE,
	RegexInterpreter_Advance_m47537FC4AB2CB92D2D9100C755D936DED76B03EE,
	RegexInterpreter_Goto_mAB873EAF14CC58B684C91137D6E8817EB47FAB48,
	RegexInterpreter_Textto_m874B113DFF6381DFC1BF8A8F7E6D79B819CF06AE,
	RegexInterpreter_Trackto_m00A652840F4C1B3FE74527A910FB6BDE144F4CD2,
	RegexInterpreter_Textstart_m635CAE9587982E8C88F98F7374460E742A7F5953,
	RegexInterpreter_Textpos_mCCC8ABAE83D37BA6F060242E1ECAC7D91D8910F5,
	RegexInterpreter_Trackpos_mDA7F7A3B4A02FC45B46AF1FD47778E0C0C9A5F64,
	RegexInterpreter_TrackPush_mBE985076C7632B82D188C6484BD6C7980C392379,
	RegexInterpreter_TrackPush_m2DA2DB51ACD26004F4FB8B8D80EEC20D4AA14C49,
	RegexInterpreter_TrackPush_m874CB8F853DD4EB0FAD4A2DEF9CC2EAC3DD5BA5E,
	RegexInterpreter_TrackPush_mEF674B57E2A8FC7E555803DE53EEE076EC0E5E75,
	RegexInterpreter_TrackPush2_m490912B4D5B2E19FA2739EA0211FA91DA6423634,
	RegexInterpreter_TrackPush2_m5B36C2B678F621B4BCF26D038E5AE40A55BC5884,
	RegexInterpreter_Backtrack_m30590074E633FAA50401BC2EFA74F6D6FF5371DA,
	RegexInterpreter_SetOperator_m6F39391186CA54646ABAF1A8D3584533261E6A3F,
	RegexInterpreter_TrackPop_m8E31A4201CD48C0888BE0DB6EB317036E7E7C4D8,
	RegexInterpreter_TrackPop_mBE47D7E983B6BD0C45F7F376AA0272B0827AB4E4,
	RegexInterpreter_TrackPeek_mFB63C0E3D25EEEEC1DBD5FF5601E59C6F0414396,
	RegexInterpreter_TrackPeek_m946313A941F42F58C555593B8CD2C00E702400AB,
	RegexInterpreter_StackPush_m488F7B4FABE6E66EF8D28F070303C7B344A9217F,
	RegexInterpreter_StackPush_m46ADD790ADB62A6FFFC56ACC93A5BFB11578A45B,
	RegexInterpreter_StackPop_m28CD98B18B8010F9398FAB5A1C0CB3E220FB0A13,
	RegexInterpreter_StackPop_m1DBCCF39146C4C13FEBABCF7139CDAF89AB339ED,
	RegexInterpreter_StackPeek_mE0B2D861B2A747936538EC83EDEBDC8C6424E3D0,
	RegexInterpreter_StackPeek_mFA8013A28365F539B9083C906BEB80008AE281A0,
	RegexInterpreter_Operator_m9C06EB53FFBB6722B2ACB95057BC30E0A9F05DFF,
	RegexInterpreter_Operand_mB8AED0E2B8222A584A61D313DE9AB475724F50A0,
	RegexInterpreter_Leftchars_mB50E0C06B5C05F48BBA69D21BFB6382705C696C4,
	RegexInterpreter_Rightchars_m2DEB5D856E0BEC8CFE39B2546B504CB2FCC1DC2C,
	RegexInterpreter_Bump_m45DF8CEBA6E19FE27E10A87C89E5B2001FB37E85,
	RegexInterpreter_Forwardchars_mFD54A946FE00B2613D92F1CCAE7B53CDB4312420,
	RegexInterpreter_Forwardcharnext_m39C5E9B8B3EDC556CE6A61C1957ACFD5F8ED025E,
	RegexInterpreter_Stringmatch_m81EA1913981000A8D944B5DA757813058F0F4ABD,
	RegexInterpreter_Refmatch_m5F44A3C001E919895A5A2988F16187069E45D75B,
	RegexInterpreter_Backwardnext_m68F8015F83EA7DEBBDB6405A6EF9092E814D88EC,
	RegexInterpreter_CharAt_mBC8ABA0BE4AC926938A4A4F6DEFB89437AEC3F6E,
	RegexInterpreter_FindFirstChar_m3112B4D64BF317FBEC9CD8DAE429A4199A3F6A93,
	RegexInterpreter_Go_m32838D966B426A327995246847A272491F3359F2,
	Match_get_Empty_mE05C90C7D155060839CC7D0C2EA04F8302EDFFC9,
	Match__ctor_mB01F9576125C09E5DFAD425523FF0C0FF16000A5,
	Match_Reset_m6C8293B576685831F43AACF255D2DAC5898662DB,
	Match_get_Groups_m4FB7AAC1E08BF8710992FA9C07A8357115EFE6D2,
	Match_AddMatch_m5B128123CBA71A35E471CFF1AAE1013A7722DFA2,
	Match_BalanceMatch_mF04DF97CE9E41B8A85C54212B43B5DF381218BE5,
	Match_RemoveMatch_mF21E3166D8D461D44952E96C9CD7CFA8E776EA5F,
	Match_IsMatched_m1491C04ADB99BCB81D84BC5D85C31B4F45965C3C,
	Match_MatchIndex_mFDD766CF18E4F508DEE3E2E24F6046DE66D1B808,
	Match_MatchLength_m9D6E7D98CC4B2EBE26070D3A8D88428B515D417A,
	Match_Tidy_mA9C76513AF185747A5F9E73790701ABD3D2B09A4,
	Match__cctor_m0AAA94CFEFA7DB6F9B7286DD0134B3E7AE0D7FF1,
	Match__ctor_mC2AE5A1EBC553A0E6BBA59603674183FF5E80CCC,
	MatchSparse__ctor_mA6CA132A5DA7D9ADED1D0FF1D7AD786109D33624,
	MatchSparse_get_Groups_mAF4486FB3D52F65427B855B5F410192543B99DB3,
	MatchCollection__ctor_mB2FA3F30789018215F0D4C5FFF00379F5415AC37,
	MatchCollection_GetMatch_m7C693363C6B2100ED58BD5B85C3CCCE1D858E342,
	MatchCollection_get_Count_m1476DA408DBD9D6EAD231F2AF1320E0990CF287D,
	MatchCollection_get_SyncRoot_m5E339388E782280CC9BBED40986AA360CA5BCDCC,
	MatchCollection_get_IsSynchronized_m7A91B1D2CA86E9CF46615BAEE642BD04637BE5DB,
	MatchCollection_get_Item_mF9C9E9247F1F04D8CEC0E14AC4BA3CEEAC1A2A8A,
	MatchCollection_CopyTo_mD72903F019CA31813B8A842A18CA4761484CFB21,
	MatchCollection_GetEnumerator_mB4DEC015B69A67D38E6F7E14D63C64047BDCF76F,
	MatchCollection__cctor_m41194DB8AD661F28A4F6FCB077EE8276DD1BC7CF,
	MatchCollection__ctor_mA95FE66298AA5AE593EE40B3A7ED76F1011829C1,
	MatchEnumerator__ctor_mAC068C23A5E2366435764453E8E80C8B5803AD31,
	MatchEnumerator_MoveNext_m1088424FEAD89A2693A0CF9200041A5C5B9DC052,
	MatchEnumerator_get_Current_m2FB7B386869A6C4F5EC5327603EF79E8135BDEC1,
	MatchEnumerator_Reset_m70B97522C32C01A38648D591B8BA3A8990186311,
	RegexMatchTimeoutException__ctor_m157F8CEF5FDAC71E58B04773B3169BA093423866,
	RegexMatchTimeoutException__ctor_mC0DB6ADBF5008FD1DF623CE94E68C9F1BB875DF9,
	RegexMatchTimeoutException__ctor_mA31059F9B50F01A0C9BEF9081CC22B0C0C332F6E,
	RegexMatchTimeoutException_System_Runtime_Serialization_ISerializable_GetObjectData_m32865670AB86CF7F44CBA24B649C5FC3035B6609,
	RegexMatchTimeoutException_Init_m6D59100CBBC91F436D6878CDF3AC18BD86DC2787,
	RegexMatchTimeoutException_Init_mA320EBB663A318B596D95349F5F0DE92623D5C1C,
	RegexNode__ctor_mD8966EDCD7AA48AC8AAD5B156C513671843F6D49,
	RegexNode__ctor_m2E85CE2AB0812A86EE61448DEACBA68E329D3325,
	RegexNode__ctor_m5A3AA31155A359CC8462AF0AB55DE0D5B7C435B4,
	RegexNode__ctor_mD4B2FB6044880AC4DDF035FFE6254A13807A34BC,
	RegexNode__ctor_m0E000C0421213F15341C9B74C3ADA8F4963CA511,
	RegexNode_UseOptionR_mBD8EBE8396F51A7DA491FFFAFDB09A148F62E484,
	RegexNode_ReverseLeft_m8507E98BFA6C9F78200B8297811C3EE815724A19,
	RegexNode_MakeRep_m23A10A13942B83BDF596DE595718B9BD701E8A60,
	RegexNode_Reduce_m2EAE287E7E9FE547B38FEC40BE3E316920B53471,
	RegexNode_StripEnation_m1DF9C3A86A4B73CCE7F86C2D121DCACED3DCC4C7,
	RegexNode_ReduceGroup_m3067AEB5BDEF6951832CB84B2F4857848E898236,
	RegexNode_ReduceRep_mA3BDCA09CFB2DFB083CF9BEA7E9A64DB27F6B94E,
	RegexNode_ReduceSet_m0B5361189FC2E71384DA9A107969CB401FD6ED01,
	RegexNode_ReduceAlternation_m08295B9D7A82E1D1CB97B716C068F7D740C2E18F,
	RegexNode_ReduceConcatenation_mFE1E6366025CB9A114C275B74193CF62BC0AF903,
	RegexNode_MakeQuantifier_mB84818E8D93FEB4AE45E224C09EE46BE238ECD20,
	RegexNode_AddChild_mD5F9848916D55A0DF36CE5460D149E1024005C85,
	RegexNode_Child_mAE38F2EF7289FE455686B7BEEF81C39A9D25E960,
	RegexNode_ChildCount_m15D92C9740BA92B2E78B392F7215B8D7D0242172,
	RegexNode_Type_m3C72321B307C77AF12F294F366D57D2C77832F27,
	RegexParser_Parse_mF17A30D14FACA37DB6DE172C5F0C34B4EB1EA719,
	RegexParser__ctor_m9058798A864D0200A16F15E995B6B9AA8A189E58,
	RegexParser_SetPattern_mA620864CAC4211AE79F80DF9F19B2A40863E9DBE,
	RegexParser_Reset_m1D0DAF8942A2A980D3944600893CEF969053F2EE,
	RegexParser_ScanRegex_mE0EF23CF2A462063119E2D5046512A1960A11718,
	RegexParser_ScanCharClass_mD4A465FEDA75BF5820D5B0C9A95EAEA3D99DB831,
	RegexParser_ScanCharClass_mADFDEFF75B3C880E692ED8411B7154CF3130401E,
	RegexParser_ScanGroupOpen_m1DE2AA1EFA786C58869EF4025705449871F33D59,
	RegexParser_ScanBlank_m2ACFA5BAF5FA14554D74C5DE4FE3893483D6F33D,
	RegexParser_ScanBackslash_m2598C224286A4826DEB2D1189CCB73C9A363DFBD,
	RegexParser_ScanBasicBackslash_m3DAD88630B04CE794414919D65F325197CB15C3D,
	RegexParser_ScanCapname_mC34B52A5BDE9DB0AB0A9691F52D45D0B7D4AD377,
	RegexParser_ScanOctal_m7767731DCDBED3AFE2CF6A24D4A6E7FB448062F6,
	RegexParser_ScanDecimal_mC7374D132F506C5D7EEB868C32C4959B1C672017,
	RegexParser_ScanHex_m273E9DA24C7455F701730E65B90DAA5C0D0210C2,
	RegexParser_HexDigit_m8026F1C18D04CF0CFC87405EE1449F029B977A50,
	RegexParser_ScanControl_m9EC29A03B8B1C8323D3E67F0D43F7A5960FFD816,
	RegexParser_IsOnlyTopOption_m7C4B2E37C797EEB8C5878365C25EDE72E2EBE404,
	RegexParser_ScanOptions_mE9C5126433FD0A2576B402A07941114AB468D79F,
	RegexParser_ScanCharEscape_m7A3FDDAF73AB029CB6EA7BB8058E3FD2AEDD63D6,
	RegexParser_ParseProperty_m32F8C5F94C55BFF814FBAD3189A25F3CAB76B3C3,
	RegexParser_TypeFromCode_m9B5F0CD85CECC83F17C2A37B5A0A396478A668B8,
	RegexParser_OptionFromCode_m3D0AF05036648041D641C37E24919D3D6CA7B7CE,
	RegexParser_CountCaptures_mE1F7E2BFAE6D599A2F71D217A078B385A9408700,
	RegexParser_NoteCaptureSlot_m0A4A75BC5BB740A63EE0D41BDBB25A1FADFBF53C,
	RegexParser_NoteCaptureName_m8673E32280A278603401C24BFCD7C65F42881FA8,
	RegexParser_AssignNameSlots_m7478C18338D1440B8422BD849CCF1E3C33169EDB,
	RegexParser_CaptureSlotFromName_mF8279E16DB2733EE3712214CFC57DA3D48BD717B,
	RegexParser_IsCaptureSlot_mE462763928C28561B761AFCE14D30C6A31CD1C15,
	RegexParser_IsCaptureName_mF09CBBD2AEAD4D1BAAE4E4E803C3F4916DBA479D,
	RegexParser_UseOptionN_m9B82FA2012348674AC4E62205FE205CF2DB0ED35,
	RegexParser_UseOptionI_m46AAF2DBCC08EE8F3E8ECA1A5E37160C4E5C7B04,
	RegexParser_UseOptionM_mBCB459C99D9BD541A68ADF86C1FD437169A8352E,
	RegexParser_UseOptionS_m079D720F7300CEEBB4800B8CB5F7DE450E00FC6D,
	RegexParser_UseOptionX_m7944C5C44AEAA4D69ABA991320A6B960F8EEC284,
	RegexParser_UseOptionE_m442360F28425CC127273FA1B10737E2AB3A70762,
	RegexParser_IsSpecial_m3EA52FD6E89284E878A510816990AD45656A9CF0,
	RegexParser_IsStopperX_m14B244DAE546E9EAAEF746C7722F21FFAF6DA8D9,
	RegexParser_IsQuantifier_mFF0B74F0F48136C4CA3E6D614D819C67FC8EEE07,
	RegexParser_IsTrueQuantifier_m190312723B9D3A48FA41FED5A4DC5D9C055EB627,
	RegexParser_IsSpace_mF6BB83CAF2202A271697570EEC5E636847B8EA35,
	RegexParser_AddConcatenate_m308E5EB5C42CF795225A0FDBACCF647B57BE425B,
	RegexParser_PushGroup_m30EE1A2FFE88FBA12DB8B4D929F6122D8001EAF9,
	RegexParser_PopGroup_m461057BFDD1D1CFD70CF3DFE70693E429FCF0FA9,
	RegexParser_EmptyStack_mCDC440C4B29CD14F4A0D9D6E3BE105869F246E2E,
	RegexParser_StartGroup_m715D16765A3808F41A0DDFB46AE99F7982BA9E87,
	RegexParser_AddAlternate_m2C8BA28D8A58FB9CA6FE75F9D5875BF748305AB0,
	RegexParser_AddConcatenate_m1B223D215058DA19724BD379C2BC0557EA24B48A,
	RegexParser_AddConcatenate_m47774C08F0EF3E4B83BD52C777019D63BE718AE6,
	RegexParser_Unit_m88B751E79E4DE41D295805439EE6D1D5B7170D7F,
	RegexParser_AddUnitOne_mDEC722E078B3E61126F56718AF7FED159C616CDC,
	RegexParser_AddUnitNotone_m14CA5BBABCE627507923A6BE373BEC032167801F,
	RegexParser_AddUnitSet_mF7CEA4892737145E04E8ECD6DCD3B2A8F809C58B,
	RegexParser_AddUnitNode_m84299A7BCF95B87B5B4672759DE2D8D863FA80E2,
	RegexParser_AddUnitType_m39738056CFFB37E7036AF626829033D6052E6FD8,
	RegexParser_AddGroup_m3771097F1B4F1F6AA10104D28B663026F7B7326F,
	RegexParser_PushOptions_mC0047ADAB396BC1643AA63B2C395F09FCBE726BC,
	RegexParser_PopOptions_m186A6537DA0481481E59C5BED015B577508271C7,
	RegexParser_EmptyOptionsStack_m9B5B4501C296662175648E458F9EAAADEE3A2B44,
	RegexParser_PopKeepOptions_mBCC70CBFDC2A6DD07FE090D4E546B6AEA5644500,
	RegexParser_MakeException_mA573DC3F94B98F328A9B87673A2CF8A15120DEB1,
	RegexParser_Textpos_m5A18C75CE7F3A5AE17373DA09A20070D988308C5,
	RegexParser_Textto_mE4BCC8608BF006D283A32F9C5811264467EEB806,
	RegexParser_MoveRightGetChar_mE98852DD0B33AE818B01A7CC7A9C301C2226F81C,
	RegexParser_MoveRight_mE4C6D41AFE3F585C0B8E7CD0AF3CF4DBA8791AB4,
	RegexParser_MoveRight_m905DCF65EF6BA6736100751DE932753BC99B8D68,
	RegexParser_MoveLeft_mBE0128B08B61C1306954528C799F2F1F1B803391,
	RegexParser_CharAt_mEA865F2B6DC4EF1B81F8D80ABF989F395BEC0B84,
	RegexParser_RightChar_mA977C61B98B8BB88C2A66AEBBFDA6826C58ED66A,
	RegexParser_RightChar_mE6728D67C4F9FE227ECD6BED46FFC94518EAD9B4,
	RegexParser_CharsRight_m808A213FCB975D42C6E6270E7A0FAEB1E496B07A,
	RegexParser__cctor_mD780E57BC0A6084DDDF020CB0AEADFCF1552B20F,
	RegexRunner__ctor_m6925516B4C16AC95CFAAFCCDB5CFEAD505B7920B,
	RegexRunner_Scan_m2ADEF871B8873041D1224B4FE362BD4A943AC536,
	RegexRunner_StartTimeoutWatch_m22AE778FF5C52047138151B3A61B118DC6E9B685,
	RegexRunner_CheckTimeout_mBE5718B5085C46A4B1B9498DE83B7C4D22E4C27C,
	RegexRunner_DoCheckTimeout_mFA5F588F7FA54123CFDFF4C26562E05DADFB675F,
	NULL,
	NULL,
	NULL,
	RegexRunner_InitMatch_mAB83B2D2F56A1E5438AA6AF68F175F4E0DFE6346,
	RegexRunner_TidyMatch_mC554804E829E5C96600A9FF3C0855FD1A48FE4FA,
	RegexRunner_EnsureStorage_mA28C2C957E9C94A1EB89424D837A87114E38325E,
	RegexRunner_IsBoundary_mBC555EC9574974908A1B0CEA3D1853D54BD10D62,
	RegexRunner_IsECMABoundary_m151787CEE018DB6D42182AF4464485CDC4CEAFAB,
	RegexRunner_DoubleTrack_m4C316CA544695119D1DC025CD7C7E2E754F23A62,
	RegexRunner_DoubleStack_m6D5CD187C3C40D33AD36764202D810D3C354CB4B,
	RegexRunner_DoubleCrawl_m562BC4766311883EF65FC3BC69C7555EF5C6A3D0,
	RegexRunner_Crawl_mC989F917E324EBE03B0DBECC42531C9ADBF0C742,
	RegexRunner_Popcrawl_mE325EFA925EE9D80AF98FD04ACE7050A9D4F8C21,
	RegexRunner_Crawlpos_mBFE7A9D83990B8CF829D66CD088414F96A03B49F,
	RegexRunner_Capture_mAC8B534A534941D5003730CA28B41F4082CF45C0,
	RegexRunner_TransferCapture_mBD3BA00B949753D1C0A142776C4EF3796DBC627B,
	RegexRunner_Uncapture_mAEA536C22A1DD0BCE123A04A4BCFD1A8BE8D1F7B,
	RegexRunner_IsMatched_mCC5330346DACE22EAA86DD072CD36752023C66E9,
	RegexRunner_MatchIndex_m9FBD010C648C8BBD087FFF4C470FE82494A72ACB,
	RegexRunner_MatchLength_mE1EFA365EAA84B7CDC515A4DEC99CF6D8581A1E8,
	NULL,
	RegexTree__ctor_m71E8231B91BF289104B933268B2CEF0AA02CF092,
	RegexWriter_Write_mDA5FFD555A690E124077AE4141C24C13EF9105DF,
	RegexWriter__ctor_mC1384070ECBCB1A54E56F5460388E7C4CDC5856A,
	RegexWriter_PushInt_m82B0216AFF641DE9547BE17FA115C2CED44A840C,
	RegexWriter_EmptyStack_mE95F9FABB37AB87D28C240E3A9306BD6F188B00B,
	RegexWriter_PopInt_mB767C9611DB654060F684D5E09231CAEFFDF7551,
	RegexWriter_CurPos_m771D864668683B9DCF98150DBAEEBE17703C2E5D,
	RegexWriter_PatchJump_m99AEA835C283697F20D7F9CC16E6371BF681B70B,
	RegexWriter_Emit_m0F2DFD7C6ED8AB199B3E8845A02A09F295A00E54,
	RegexWriter_Emit_mDCE0A2DF541B5FC6554C965A1C799ADCF6B4C55F,
	RegexWriter_Emit_m9360B7E84BA94A432C3C9AB5427A30D81E0B2739,
	RegexWriter_StringCode_m10DB52A16488268DF01C52E8163E899FA568FBC9,
	RegexWriter_MakeException_mD2A13E8F5A67D36CAEE67D74C35A5D2B35111C26,
	RegexWriter_MapCapnum_mEF8C8E6F9916122D0FAE18A7B560F65738D004E6,
	RegexWriter_RegexCodeFromRegexTree_mB8946AD1D077152C85D0D32CDABC5FBE37C80A80,
	RegexWriter_EmitFragment_m7692CDAFDAC6BE7D8BB2DD1EC225B6456047DE0B,
	Stopwatch_GetTimestamp_m8CAF46C3B4D7460B70C325D666B7F6470D2208DB,
	Stopwatch_StartNew_m526152085BB22CB969AF40B2775939C5C7F7F2F6,
	Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7,
	Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6,
	Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5,
	Stopwatch_get_ElapsedTicks_mEA2271BCCE37E6615EFC0B377D33C9DB63CA09E8,
	Stopwatch_Reset_m79B1D65568465AE5B1A68EF3A2A65218590ABD14,
	Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE,
	Stopwatch__cctor_mC828CB8602A28CFD9436192D5A47475B31D34766,
	ArrayConverter__ctor_m3B1E6D184D835FE896DE2E83F2F5C9410E745F93,
	BooleanConverter__ctor_m9F0A8757BAD0E551843A5A6FCC3366842A6C6D2C,
	BrowsableAttribute__ctor_m67F6E4C4B28C23E90D4C0527D1BA41555D1B0DDE,
	BrowsableAttribute_get_Browsable_mEAD0188E3748DDB36677CC3F523B001145FE1288,
	BrowsableAttribute_Equals_mC10C854D4D59E13FDF9DB3CF45FC08F213BABF05,
	BrowsableAttribute_GetHashCode_mBDD907C2D06C6BD998999FE77F6A621DE620F308,
	BrowsableAttribute__cctor_mA1B6BC963AE85B374EE6FDB96CAFC555319FD89B,
	CategoryAttribute__ctor_m0E9177ECFA96BBB3A2716039CB4A9F2E2149E706,
	CategoryAttribute_get_Category_m02F82210B41F101E8745B7994C1169802D8D0E39,
	CategoryAttribute_Equals_m044A2C25BA905793AC32FF56B71ACC3D9E5919E3,
	CategoryAttribute_GetHashCode_m97FE93C13D77F55B642C14CF200206655EC445CF,
	CategoryAttribute_GetLocalizedString_m05A2661BFCDD8951D57FA3A2B4C76B482893FC02,
	CollectionConverter__ctor_mA6E78367ED2C94B1B80B6E3314AB4854D275613F,
	Component_Finalize_mDBE707310C79EAC9D78A1A6B8CBC58B1D85FFD6C,
	Component_get_CanRaiseEvents_m5C347D156A4E54A1DB24C045FDD43E74B66E4295,
	Component_get_CanRaiseEventsInternal_mF1CE3CBC6ECADC117635E96EA0A7316AC8361C12,
	Component_Dispose_mC05DA7EBB2CA50E4854BED0FC992770E81771593,
	Component_Dispose_m41A6868E474C0937E68618E171C8169ECE2A9347,
	Component_GetService_mD7AC529C9E9E316E058150D360F2EF94644614F8,
	Component_get_DesignMode_m734BA2B9442EB0294B051D6DECC56272135EA36C,
	Component_ToString_m281811936682E090CB59313B17FDD92D21C6A0DF,
	Component__ctor_m840837E8F38EF7547938BF0E23F7D5847B8C4F48,
	Component__cctor_m360744B949B028CF834E6AC1B41379460EB80FC3,
	ComponentConverter__ctor_mDD36736AF6F3957D4E50C9F87959838DEE128D9D,
	DecimalConverter__ctor_m4E225E243DED7F45B5176296A297D668FBA7FC4C,
	DefaultEventAttribute__ctor_mA045F88D2A5062B94A1EC75281D843826FEA26CD,
	DefaultEventAttribute_get_Name_m11E61BAB620E1340BDD23F2098AD8A2B212C788F,
	DefaultEventAttribute_Equals_m077B138A0812DE6905B5EA81B102738D26271BFA,
	DefaultEventAttribute_GetHashCode_mC64256EB07720846B232CC270F2683D244730037,
	DefaultEventAttribute__cctor_m72DD52108A6E2B5DAA21E12E6C2A694435006551,
	DefaultPropertyAttribute__ctor_mEBD1AB6A6D4DEC77344B2FBF0DD8AD68BDE605E7,
	DefaultPropertyAttribute_get_Name_mDF5CFECE56F9957F683545D2B8C9DE560EF4EA7E,
	DefaultPropertyAttribute_Equals_m777E989ED27C0AF576BA026C482C74DD9467F295,
	DefaultPropertyAttribute_GetHashCode_m8FC07D3C6C6B3DD78CBEF22A1AFB8F909F6B76EC,
	DefaultPropertyAttribute__cctor_m6776A03C097A8727A7D5EEE2A811CC7B11228243,
	DefaultValueAttribute__ctor_mCDE6C20FE692B4650C72960F98F08D4700934168,
	DefaultValueAttribute__ctor_m78FFD0C313E546C33C761F79E544E6FA5ADCB4D0,
	DefaultValueAttribute__ctor_m65DBADCDC3A7BBD4AA6871023D36B91FC1772ADF,
	DefaultValueAttribute_get_Value_m5430873D9E44294065E1F6FCDC3B425A0011CCBA,
	DefaultValueAttribute_Equals_mD25A5203F3679D9D6B2216769E933FEA95972B13,
	DefaultValueAttribute_GetHashCode_mC5D187012FD8EA385F0A5D3946B20C9A8CEEA5D9,
	DescriptionAttribute__ctor_m0E146E17D89AF14C7390CA02D1725CA5114E2A40,
	DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E,
	DescriptionAttribute_get_Description_m0FA1D4D963B0CC6430641650EAFC0A28EF5D7567,
	DescriptionAttribute_get_DescriptionValue_mC1DBBA2D084E17E4062C81318C1D5D5295E4C97C,
	DescriptionAttribute_set_DescriptionValue_m7690BF55F40A7C26BBDF62BEBC2728EC9A16A91B,
	DescriptionAttribute_Equals_m07C0B8787F3D42DDB8E726E4658705AAF19D0E0F,
	DescriptionAttribute_GetHashCode_m6C0A71F2ED2EBE6A2846DC87E3FD8CEBBABD4CE9,
	DescriptionAttribute__cctor_m97E688AF3C1662458B630141FF170BBDAFF5F3E4,
	DesignTimeVisibleAttribute__ctor_m5FEE8039EADC36835B17FC69C6F9302D98D17B3F,
	DesignTimeVisibleAttribute_get_Visible_mEDEAE4216F7BBE283BAB2F714D23691E909766B5,
	DesignTimeVisibleAttribute_Equals_m5EE5DF6FF3122FD7415C18192AB0F72E173FC334,
	DesignTimeVisibleAttribute_GetHashCode_m517CECA16068CA5B18C14D3FADCCB0F594243E56,
	DesignTimeVisibleAttribute__cctor_mA9E4CF3E6D44E514AC81FCCC651778BF6806F9A5,
	DesignerAttribute__ctor_mB3667C64A5316ADF52C89FD6C11896A74D3F12FC,
	DesignerAttribute_Equals_m0A794D27ACBFF6C7D4E99F0A8A9F22B9DB10E0CA,
	DesignerAttribute_GetHashCode_m17B9DAB29926C21682434E9A77E31651B9BDD80D,
	DesignerCategoryAttribute__ctor_m56E7C4D9708E648D47D4A9EA65AFF2A597039FF4,
	DesignerCategoryAttribute__ctor_m60F54A81AA457206EA8336100BF1CB0FC2817EF3,
	DesignerCategoryAttribute_Equals_m8032A91A1B7406D5D3497BDCBA94341706A0A113,
	DesignerCategoryAttribute_GetHashCode_m97577A9BBB14BCF5045EF0ED1A7DCD19BE591DEF,
	DesignerCategoryAttribute__cctor_mFFF2E014AFA0C3958CA85DD0D496DAF09DDC122D,
	DesignerSerializationVisibilityAttribute__ctor_mAEEE7613ABFC1F58770FA563450E24976E4CEB49,
	DesignerSerializationVisibilityAttribute_get_Visibility_m8BF8E684ABAB85A14343D269EF8EFC493D17F49E,
	DesignerSerializationVisibilityAttribute_Equals_m4604EDC514EE6CB9C907A9556BA93B8374CBCF8E,
	DesignerSerializationVisibilityAttribute_GetHashCode_m50CE561D387EC4F63493C70FD9D57C58AF29737A,
	DesignerSerializationVisibilityAttribute__cctor_m4898EC9EE60DEDB8189A1D09E221A6B7CCEA9691,
	DisplayNameAttribute__ctor_m7704A0296C35314F464640AD079794A8D2D5CFA3,
	DisplayNameAttribute__ctor_m44CB3F48C86138F3E381AF9FE560B959DD73E845,
	DisplayNameAttribute_get_DisplayName_mDF5FA07C8671BE6969CB4F1BF212CD7A03359F4F,
	DisplayNameAttribute_get_DisplayNameValue_m8A787A996D7C752C9F79E3724A5A39EAF94A9F48,
	DisplayNameAttribute_Equals_m11D68B64FB208336B9F91FDC4FFA93B51290539B,
	DisplayNameAttribute_GetHashCode_mF0C77356C5E1C5B6836A9E15BE9009CB6397B25A,
	DisplayNameAttribute__cctor_m464DA9C1BD37919F48B673C050B86E5EB6ADFD2C,
	DoubleConverter__ctor_mBACD8291617A72E36D9E161918D86D1714F68E85,
	EditorBrowsableAttribute__ctor_mC77290C5157BDA154F1D03BD1551223B07A851D4,
	EditorBrowsableAttribute_Equals_m79C775014595BC1A2B15301D3F5A27AE17EF8230,
	EditorBrowsableAttribute_GetHashCode_mFC4240C87EB67E54729CA999187AE8AA0041B0EC,
	EnumConverter__ctor_m2A61E754D52D9A89E479DD3F23AE49B839F6E613,
	EventHandlerList_get_Item_mC9E8B2F3D48DB323CA19FB87B2DBB7240AE03334,
	EventHandlerList_Find_m0D055017D24E6BE23466BFC8392A49CE1695499E,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Int16Converter__ctor_m4F4E6E68FBDBC778F893D30D9A63F3086D0C87FD,
	Int32Converter__ctor_m3A8A43E94E6267B6978193DA829E2F84189F03B1,
	Int64Converter__ctor_m50555C51D87CC6D5E48252B0356968B0F457C3B7,
	InvalidEnumArgumentException__ctor_m2F90ECAD9B02CAA483C6D5CE2951210DF2960942,
	InvalidEnumArgumentException__ctor_m9F82770D492E88AD5D679EE8A52400E5993CD2C9,
	InvalidEnumArgumentException__ctor_mAE5068B990F9D8AD596FE95B591CA6441048D25E,
	InvalidEnumArgumentException__ctor_mD66B8D9407ABD1314AAC88CDDD9F73CC4FAED3A1,
	ReferenceConverter__ctor_m2BF20339AD66B73F51C54F05BCD4C6229CECA08B,
	ReferenceConverter__cctor_m45E0DC0C46388A1333095572684A3A60E9FFB985,
	SettingsBindableAttribute__ctor_m4F5FE0964747B636D97EED9C6B13D62FBBEA3684,
	SettingsBindableAttribute_get_Bindable_mB64EAF5229EA9C4B0B9D0D1F769CAA50609CA83A,
	SettingsBindableAttribute_Equals_mF7BC58C8F680D5BCE8C87F7997F7FFC01A59B2E6,
	SettingsBindableAttribute_GetHashCode_mF7117CA82F3599687FFCDC1B2A43A7D177B6874B,
	SettingsBindableAttribute__cctor_m53A3674048E11F01AD677255FE817C50A650E4C6,
	SingleConverter__ctor_m497283A0BDBBBE713A71C8A2E4A89D2B58627365,
	StringConverter__ctor_m078D8E99B4F9B0F2EF7A2D3857A6F044B7A16118,
	TimeSpanConverter__ctor_m8CCA5F7E15DAB96C97CF600394E637A9876AFB83,
	TypeConverter__ctor_mCD87E569A2C4CB1331A069396FFA98E65726A16C,
	TypeConverterAttribute__ctor_m23863863F742A02AA8914FB5527AFBC15DCAFA8A,
	TypeConverterAttribute__ctor_mE0B270E39E657178B253AB6F56FCA24E644868F4,
	TypeConverterAttribute_get_ConverterTypeName_m699652BD16C42823BE283EA769647F676122EB6B,
	TypeConverterAttribute_Equals_mED3025C0A24E6809AA6E31FE5F498D18558584FB,
	TypeConverterAttribute_GetHashCode_mFBABA9E1D19DC64BAAF3C9D0F1B82E42B5F66769,
	TypeConverterAttribute__cctor_mE6F51C034AACA4A5318CE3704E898113C49BA507,
	Win32Exception__ctor_m0DCDDC4BEF1DCC24190F7AAE8BB309FB5A8A9474,
	Win32Exception__ctor_mF8FAD9681BA8B2EFBD1EDA7C690764FF60E85A6F,
	Win32Exception__ctor_mC836B11093135ABE3B7F402DCD0564E58B8CDA02,
	Win32Exception__ctor_m712FC6079EE6F92FAB0B3DDAFD652B24FF163CC6,
	Win32Exception_get_NativeErrorCode_m15E3962B1D49FBA685728CB83758C6A3AF6F93E9,
	Win32Exception_GetObjectData_mFB1F75CC318DB1FA595ECA5466F331AEC686BB07,
	Win32Exception_GetErrorMessage_m97F829AC1253FC3BAD24E9F484ECA9F227360C9A,
	Win32Exception_InitializeErrorMessages_mDC8118C693BE2CA20C9E9D5822BEFAC621F3C535,
	Win32Exception_InitializeErrorMessages1_mDB6558EB5202E7110C6702CC1837399830906C89,
	Win32Exception__cctor_mE3B207777037932E599ED5F10568FD108903A5F0,
	BaseNumberConverter__ctor_m18967D5B511402093936893A249438FB94D5BDA3,
	NULL,
	RootDesignerSerializerAttribute__ctor_m2EA1453B85C10A3D2CFDB7F9802EB5525350B211,
	AuthenticationException__ctor_mCD04EFFAE657FB7E895429E7EA6DCBDF76947E6C,
	AuthenticationException__ctor_mA0752219534B87AA44CA1F8F65920A91F2D5E513,
	AuthenticationException__ctor_m3AC884A3C280888AA0385F2B9CF77A4F095616EB,
	Oid__ctor_mDB319C52BC09ED73F02F5BEC5950F728059405C2,
	Oid__ctor_m74A51E6D07E4EF2AEC66B6CAC03CFF60D072D3FF,
	Oid__ctor_m90964DEF8B3A9EEFAB59023627E2008E4A34983E,
	Oid__ctor_m8C4B7AE0D9207BCF03960553182B43B8D1536ED0,
	Oid_get_Value_mD6F4D8AC1A3821D5DA263728C2DC0C208D084A78,
	Oid_set_Value_mE13751778D2AC00F1CC962E42B35339BAEE45825,
	Oid_get_FriendlyName_mF93E7A679CA55F2D2E694814BF3B38532FF44B41,
	OidCollection__ctor_m99E1CCEB955F4BB57DEAE0BF8E7326380F93E111,
	OidCollection_Add_m13C7466BB24E047C88F27AC6AB5E9439AA491EF1,
	OidCollection_get_Item_mB8F51EB0825BDE39504BC7090B8AEEE13D0A9967,
	OidCollection_get_Count_m35D85FFEC009FD8195DA9E0EE0CD5B66290FA3C6,
	OidCollection_System_Collections_IEnumerable_GetEnumerator_m550967A294FF63F004D855F019235DE15A046B3E,
	OidCollection_System_Collections_ICollection_CopyTo_mC02E6211EC33878C50BEA5914193F038EE2E9CB7,
	OidCollection_get_IsSynchronized_m36C9F73515DA6834B85F9C8F9446E080CFA4C291,
	OidCollection_get_SyncRoot_mB10B680D12CB8AC9C0F32C3C1217FA4345552174,
	OidEnumerator__ctor_m3BA079690E9B01B02B76FB694DCF279DAEC8E9D6,
	OidEnumerator_System_Collections_IEnumerator_get_Current_m21F1C975D9A97369DA0D3CEAADFA69D64214CEB3,
	OidEnumerator_MoveNext_m8CA45F7B39B4FEF9399379DAA1A6AAF4FFB8DCD8,
	OidEnumerator_Reset_mBCBE7C78E389E7D9794F44111832013583FB1F4C,
	CAPI_CryptFindOIDInfoNameFromKey_m283438D1BC7309F1642EBCE405CC9BFAEED43544,
	CAPI_CryptFindOIDInfoKeyFromName_m4ED4943191307DF7392E82CE3E04C5A5777EA3AB,
	AsnEncodedData__ctor_m0CF86C874705C96B224222BEBB6BF5703EAB29E2,
	AsnEncodedData__ctor_m0F04E7F12ED0BD74616EF4451F1EDDE6622E01EA,
	AsnEncodedData_set_Oid_mA72203D23B0F93CD9ECD507EB878502EEBA99322,
	AsnEncodedData_get_RawData_mDCA2B393570BA050D3840B2449447A2C10639278,
	AsnEncodedData_set_RawData_m867F92C32F87E4D8932D17EDF21785CA0FDA3BEA,
	AsnEncodedData_CopyFrom_mA350785B8AF676AB7856E705FA2F2D20FD54CC46,
	AsnEncodedData_ToString_mD65B64466F8AC07960AE0AA01466D9D80F8A105E,
	AsnEncodedData_Default_m4A9014D9B85AB114168577AD5DEE7FA2AFAB4EB6,
	AsnEncodedData_BasicConstraintsExtension_mC9DE1C0199EA0714150CAD960FD88361763DE03A,
	AsnEncodedData_EnhancedKeyUsageExtension_m2ED1895CE72319E5E3B06F8BD76963BD6FF6263D,
	AsnEncodedData_KeyUsageExtension_m8F8D43DECE8B70E86FAF2B498204D3FC9E866ACD,
	AsnEncodedData_SubjectKeyIdentifierExtension_mE8BF30141FD478244F98363669282B9C26F74B9A,
	AsnEncodedData_SubjectAltName_m33180412765B9BC62F17B87F63964F89937C0467,
	AsnEncodedData_NetscapeCertType_mBF9894A8993D137AEEC8919FEF582DF17EE5F652,
	X509Utils_FindOidInfo_m7CC1462A6CC9DA7C40CA09FA5EACEE9B9117EC8C,
	X509Utils_FindOidInfoWithFallback_m863F372B324E59321550DCCBF4E23ABCE0A1ABB1,
	PublicKey__ctor_mB96189563F51185F4D44F2E9B570481CE7F63BE7,
	PublicKey_get_EncodedKeyValue_m0294AF8C29C7329BEB243543D8FDA98B60FDB291,
	PublicKey_get_EncodedParameters_mFF4F9A39D91C0A00D1B36C93944816154C7255B3,
	PublicKey_get_Key_mF430DCB9952B3B936420D1F3CAE486DBF7570ECF,
	PublicKey_get_Oid_mE3207B84A9090EC5404F6CD4AEABB1F37EC1F988,
	PublicKey_GetUnsignedBigInteger_m432F75CC14BA7A5B7992999EA4C8DFCE4E6C6692,
	PublicKey_DecodeDSA_mE287558C57A529CD95CF1198679DC1EB6D8D026D,
	PublicKey_DecodeRSA_m0DC1D6C55C4FE7663351264681DD318DD58DAF30,
	PublicKey__cctor_m36509A197C8D921E8A147E08BA65EFC8DD80BBB4,
	X509BasicConstraintsExtension__ctor_mBFE792A93883E704745E589380F1DD7F12ECB36E,
	X509BasicConstraintsExtension__ctor_m67462D9110118C82677CE42C2685C05C0767EB00,
	X509BasicConstraintsExtension__ctor_m27365A2183995553C17661A9C5E6CFF474AEB33D,
	X509BasicConstraintsExtension_get_CertificateAuthority_mF7C866A45B3DE24A06EA3256B8FC0BA1989D038D,
	X509BasicConstraintsExtension_get_HasPathLengthConstraint_m04C1B45C4FF2FF902B45A5B1AE309D3816A3457A,
	X509BasicConstraintsExtension_get_PathLengthConstraint_m9401525125A220F1D51F130E3CC6E4C938E45566,
	X509BasicConstraintsExtension_CopyFrom_mB87E2C5337CEE107018289CF81AD4ED7956A6ECD,
	X509BasicConstraintsExtension_Decode_m02EECEF97728108FE014735EDAD8C74B8461B384,
	X509BasicConstraintsExtension_Encode_mC5E34F1B66DE0BCBD7C524C968C2C010B566843C,
	X509BasicConstraintsExtension_ToString_m4ABD6F1E1B7271403EA6250EFDCF400D68B8256D,
	X509Certificate2_get_Impl_mAD55B5116FFD751B1963259C04E8F5F81517C465,
	X509Certificate2__ctor_m95D16A7EB76393C591CA0E93FA331B931504C9BA,
	X509Certificate2__ctor_mBFFAA9446A805AF8E5B5A76F4D2375815A854ABA,
	X509Certificate2__ctor_m9BED4BE32997E4EF930C8D66CCF7C429265A6D42,
	X509Certificate2_get_NotAfter_m6A8FF55FBA82F3B04C23E30E21BF8F64693C8565,
	X509Certificate2_get_NotBefore_mDC4BB64A4D8A295BD1021C43D58DD43EBA4883B0,
	X509Certificate2_get_PrivateKey_m49B88B09C59D2453F8BFC96CDAFC290948A8E581,
	X509Certificate2_get_PublicKey_m8AC9C95FA651768945AFF1EF0FEBE2F22F8AA889,
	X509Certificate2_get_SerialNumber_mBAE78C9FC3C5080CB782B1734497E83D4282D12A,
	X509Certificate2_get_SignatureAlgorithm_mF10C8153EED8633549FDB22006CFAABAC1B26931,
	X509Certificate2_get_Thumbprint_m974E38E6838673D52D4672218325E45AE8636383,
	X509Certificate2_get_Version_mAA8C8DCAA6E046FAFD7C3DE665665C8FEC28EF9C,
	X509Certificate2_Import_mB8CE3F497DC540159206373283627C58C95D200F,
	X509Certificate2_Reset_mC64732F1FEE53D8C0478B164AD5B9A7C99C50AC0,
	X509Certificate2_ToString_mA04C0490966DDB6242954B9C556E7AB650DF80F5,
	X509Certificate2_ToString_m8E889E21183273EE06D65DF4DC32AD8953505639,
	X509Certificate2_AppendBuffer_m3329578EDE4C215851A61F33A034CBD8C6972DDC,
	X509Certificate2__cctor_mCB3F3C33240CEB0623563FAE6610D7D0BF08B924,
	X509Certificate2Collection__cctor_m443569146660ED5EA3660237263F0DA059D8BA50,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	X509Certificate2Impl__ctor_mB6CCF2EA294D53A594FFB7CAB55962E920D1BB28,
	X509Certificate2ImplMono_get_IsValid_m8EA0498434746DCD902D85379F00A21245E4F11C,
	X509Certificate2ImplMono__ctor_mBDF5F03F3BC955CCFD3AFB740B60D5869431702E,
	X509Certificate2ImplMono__ctor_mBCD25943158CBDCBD55E24A19AACDC47B4F6C46A,
	X509Certificate2ImplMono_Clone_mC55211F100A5F0F9B5B8B609D65FC0B3F0BAEB9B,
	X509Certificate2ImplMono_GetIssuerName_m4BD00FBE8A745B2DB2704AF7AAA5F48099354511,
	X509Certificate2ImplMono_GetSubjectName_m7058BA456600F52DC12B20A3E426F3CBEFC22891,
	X509Certificate2ImplMono_GetRawCertData_m8E5EE16FD23AA6F170CC78DD63AE1C25AE3A7C0F,
	X509Certificate2ImplMono_GetCertHash_m1D19FAD20F230EC3AB882804775F5111A93C3EFB,
	X509Certificate2ImplMono_GetValidFrom_mF14444E8277382677378B2E3FDDEE929BC080539,
	X509Certificate2ImplMono_GetValidUntil_m33AA78A101D5C6FDCB83A45D77DD0E2F5ABA5E9E,
	X509Certificate2ImplMono_Equals_m5B0557C1274E4ACE12917539CEB51B88F0A8855C,
	X509Certificate2ImplMono_GetSerialNumber_m1A6C4BC02159AED090856870E30309A41F620B39,
	X509Certificate2ImplMono__ctor_m6A63CE786DD033AAF667CE9E928B2470425E1010,
	X509Certificate2ImplMono_get_PrivateKey_m4F96338A12FDEDCCC6B6B8C3F263C5E0E0329327,
	X509Certificate2ImplMono_get_PublicKey_m266BB633193C454E99BDE12F087ADDD931F0E1A9,
	X509Certificate2ImplMono_get_SignatureAlgorithm_m98B9DD7FEFE52F865DEE68E4FDDA592747DE5A19,
	X509Certificate2ImplMono_get_Version_m1E24884D49422A8DD3152FF62B2F9588D8CC4B2B,
	X509Certificate2ImplMono_ImportPkcs12_mB87D6BE13939DCD628BC979FFF63671CA23E0A86,
	X509Certificate2ImplMono_Import_m49505FDD390700DF03D6C298C7870C5269255F24,
	X509Certificate2ImplMono_Reset_m64DEBBA05762E41390F084DD9BF35C617C64C3E4,
	X509Certificate2ImplMono_ToString_m243DD8D5CD86BA7F1F5FD047AECFA90A30C28E66,
	X509Certificate2ImplMono_ToString_m255BB5C223E59F719FD598D427C3BB11F474E8EC,
	X509Certificate2ImplMono_AppendBuffer_m636AB73A7A5238F96FF219904600DB7DD76B228E,
	X509Certificate2ImplMono_get_IntermediateCertificates_m86F36AF08247DCBB2C4919BB3E3607C6EA88E6CF,
	X509Certificate2ImplMono__cctor_mBC941D3963B38F5DEB96DA25F4C8D430433B7115,
	X509CertificateCollection__ctor_m038CE3FFE670E8DC426728EE334DF915BC3F1644,
	X509CertificateCollection__ctor_mA8D824BD5C4CFF13989F01F182F9D09CDE3A92C2,
	X509CertificateCollection_get_Item_mF0F62ACA6DB4482B2F055563F3A88CFDB92377FA,
	X509CertificateCollection_AddRange_m7856434D39CA3D6AB751C25CEB509A04E252722B,
	X509CertificateCollection_GetEnumerator_mB2D27CFCAA973ED96A90743270506B721358A29F,
	X509CertificateCollection_GetHashCode_mF20BA3BA9E01B2533463FF2F26173FE0DBBC04BE,
	X509CertificateEnumerator__ctor_m52095CF67A4A192364C30FF8B0E17FC89BB58640,
	X509CertificateEnumerator_get_Current_m073AF75A4FCD3173200FF90AB6539B9D82C9EA90,
	X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_mBE4F1A9CE8C97F506D8F7FDA6F9C18135BA9AE15,
	X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m2B17A1E25AB322A73AFA8E8A368A5B1968F48F71,
	X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m5A185825A08CCA0ED7D6419FA6F6E180061B9555,
	X509CertificateEnumerator_MoveNext_mD24E317796AFDCEE1C381C30AEC85B5B3A486F8C,
	X509CertificateImplCollection__ctor_m186BDD732AB7A82E47606E244A0B2A82860A8F5B,
	X509CertificateImplCollection__ctor_m670BE04FD8D99C60BC8A862CACC2DF15744B70AC,
	X509CertificateImplCollection_get_Count_m6C92C5AA558F2ECBD17BB5E743443FF353F1C29E,
	X509CertificateImplCollection_get_Item_m8BC2DE13F2E914AC2290C5F015A00DA0562EC628,
	X509CertificateImplCollection_Add_mB07BB408F414BD2A54BAE33C467C6211A0F565FF,
	X509CertificateImplCollection_Clone_m574D3070FCFCD00BA41E3517111BB55158E85590,
	X509CertificateImplCollection_Dispose_m921A22D3FBCF1551AD058E4A69EF5DE82F217662,
	X509CertificateImplCollection_Dispose_m0AFF1F469149E71D985C307B9C779E08088AAFEE,
	X509CertificateImplCollection_Finalize_m36BECC904589560DD13C165E380A25A7052C22F2,
	X509Chain_get_Impl_mDFDF83101E18C675FBA93E833DDBC458D8427E7E,
	X509Chain__ctor_m55DBE2D3727F0AAD25C34A7DCA654AA6218145E4,
	X509Chain__ctor_m246DB394D17776D7769D04FF0EE0B4B9F8518DE0,
	X509Chain__ctor_m3406D90977BB9160C7275CF5EA0FA629CEE4F386,
	X509Chain_get_ChainElements_mEA079D18934C900F8AE7E24CC8B143C27A7365DD,
	X509Chain_set_ChainPolicy_mBCA34300EEA4783253A7B8DC281F9B858B207C92,
	X509Chain_Dispose_mCFA2A24CDD151F681BA0A24B2CE814696217A1E3,
	X509Chain_Dispose_mBD3D48BC042C872B530302CBA9121D67C6A488C6,
	X509Chain_Finalize_m23EF4947D8018EECD79F91B850C65939F42A6BC7,
	X509ChainElement__ctor_m0345BD8FA64DFC6F1B0B7F3298E7E0A93A29805F,
	X509ChainElement_get_Certificate_m586BA432D80368AAE40A0524D4770C39BDC640C9,
	X509ChainElementCollection__ctor_m63CF4401F3A9F06018F89DE0F5CD0B401AF3F516,
	X509ChainElementCollection_get_Count_m61A068A8B5783C37B5835E67E157066A1438821C,
	X509ChainElementCollection_get_IsSynchronized_m3EB9623F37326704E9F247D769C7CF090470D3D7,
	X509ChainElementCollection_get_Item_m87736EDD3B7649BCC883759FA1CEB61705B9BDD6,
	X509ChainElementCollection_get_SyncRoot_mE954E1ACE08270ED865B7A6686856CFC448358D7,
	X509ChainElementCollection_System_Collections_ICollection_CopyTo_m54291E0447BC978834408CF6709695723C57F99A,
	X509ChainElementCollection_System_Collections_IEnumerable_GetEnumerator_m9BAE4B33C287703E64F97D23F8AAEB0E3121EF8D,
	X509ChainElementCollection_Add_m6089CEC31B6F33B5E7A18C18A6FB92BFDAE4AC70,
	X509ChainElementCollection_Clear_m16FFA49F7E1F08419E6BB6D0F348A6ECD21FF06D,
	X509ChainElementEnumerator__ctor_mDCF28D8FD9D18A200A31294DB23C5697E97954F7,
	X509ChainElementEnumerator_System_Collections_IEnumerator_get_Current_mB1ED81C9DBD230BA46B8BF9C1EE60C0EB02FD72C,
	X509ChainElementEnumerator_MoveNext_m92880AD08574A13CF5097F800CAB6834A9C01BFE,
	X509ChainElementEnumerator_Reset_m88A53B2C249FFB257054D874F189EAFFA256E108,
	NULL,
	X509ChainImpl_ThrowIfContextInvalid_mB4BB36FE66E507EF9A505F5D8B81F546E822C2F0,
	NULL,
	NULL,
	NULL,
	X509ChainImpl_Dispose_mBBC758892307733F67FDD74E54A1AA7EF14FC917,
	X509ChainImpl_Dispose_m826F0D317D9B289A03CE7129D6FB2677ABDD47AC,
	X509ChainImpl_Finalize_m18B174F1E86BE1A17C0EAB764F2A65ED1A4CE838,
	X509ChainImpl__ctor_mC306F06EB416D53AC39137E23FD072E8DC87E8E1,
	X509ChainImplMono__ctor_m82E3F7D2ED531977F1C07B3DC2E6921408F095D3,
	X509ChainImplMono_get_IsValid_mB5550DBA70129AC130A14F03AF67AC120196E431,
	X509ChainImplMono_get_ChainElements_m481D94CE76D18173FC1176D5BC464B94B055C7F3,
	X509ChainImplMono_set_ChainPolicy_mBBE85DCBD0B487DB7180415F8B96255CA7F4B729,
	X509ChainImplMono_Reset_mF4895F7B729040623E341CF56D752F44E3DA05DC,
	X509ChainImplMono__cctor_m51B0AAE9E88D74BE36A096A9DD29F86191FBAFC9,
	X509ChainPolicy__ctor_m3BE053A8A6F6A59E283062E09FABA64AF98EB7D9,
	X509ChainPolicy__ctor_m17F37BC42389FFA54D34961E22624F615D7A2094,
	X509ChainPolicy_Reset_m523357E1A74D1DD2018768BD3FAC786517AD9EC1,
	X509ChainStatus__ctor_mA41DF127E7EEF7B59204118C5C48F695F2C6DECC,
	X509ChainStatus_GetInformation_m52F5A8AE943A70FFA25F9D1CA1C8B51AC80C3C77,
	X509EnhancedKeyUsageExtension__ctor_m64F507CB1938AA4BC20287D731B74DF5CC99A96C,
	X509EnhancedKeyUsageExtension_CopyFrom_mDD12A69F6804BA6B137A459CD941B367274C2B25,
	X509EnhancedKeyUsageExtension_Decode_m610C0C741966205F6DC0492BD17B28E1FED8D648,
	X509EnhancedKeyUsageExtension_ToString_m12992C4F3BE30FC9662680B8CDAC07F7F7C67134,
	X509Extension__ctor_m4DF31A0909F64A47F2F8E64E814FE16E022794E7,
	X509Extension_get_Critical_m56CF11BDF0C2D2917C326013630709C7709DCF12,
	X509Extension_set_Critical_mF361A9EB776A20CA39923BD48C4A492A734144E0,
	X509Extension_CopyFrom_m1D101C0A8E17FDC25EF1D7645F2A07E5AB7A3D1C,
	X509Extension_FormatUnkownData_mEF1E719F7AD312B099351C581F4A06925AD9F18A,
	X509ExtensionCollection__cctor_m963D61F8A6BB520E7BF88AA87A7200E05F2CFE92,
	X509Helper2_Initialize_m9F2CFE871D3D462E215BE293D3378AE97FF21BB1,
	X509Helper2_ThrowIfContextInvalid_m42CCB016D1155A14B93F6D28559F7C7A54D9F5CF,
	X509Helper2_Import_m3947980AD95573F469332472298A35B803F97773,
	X509Helper2_CreateChainImpl_mB998518D19A5CA8BD73C5630B29904C1B61D086D,
	X509Helper2_IsValid_mA44EBFE5C5A9B60EE73AF6040EE1DD9947167901,
	X509Helper2_ThrowIfContextInvalid_mF877A9D6F2A4F89FAE5FAA5AEFA7B50679EDCC96,
	X509Helper2_GetInvalidChainContextException_m416D8CBBEAEB0F30703FFA2C74D29A46BA128C86,
	MyNativeHelper__ctor_m3C33DA045EB050BE747AD1E3B10DA0C350678EA7,
	X509KeyUsageExtension__ctor_mE735C27BA5C2BBEA264B0FDB229E7DA7A2E3416D,
	X509KeyUsageExtension__ctor_m6D2F83567A69553296EB7CC93466B20C7884C54E,
	X509KeyUsageExtension__ctor_m0E105A1E8A7ED901E90E53B33EF86DFB3D2F3B9C,
	X509KeyUsageExtension_get_KeyUsages_mD2ADFD4CC335B85D453BCA75A8541D3DF099A8FB,
	X509KeyUsageExtension_CopyFrom_m029A26C577528A8DF077CF68AD2787DC1E76FA7F,
	X509KeyUsageExtension_GetValidFlags_m3141215EE841412F2C65E9CD7C90AE26E4D05C9A,
	X509KeyUsageExtension_Decode_m8D2236720B86833EAFCB87C19BF616E84A15A385,
	X509KeyUsageExtension_Encode_m14D2F2E0777C7CFA424399E66349940A923764E5,
	X509KeyUsageExtension_ToString_m16FC486E9C54EBAEF7CA8C62C820DE7F0BE1E084,
	X509Store_Close_m2FA715DD72AEE3DD1CA06128AB5D3925EAD8E29A,
	X509SubjectKeyIdentifierExtension__ctor_m0A09F64706823AF7D0494B62B041FF11AFA587CF,
	X509SubjectKeyIdentifierExtension__ctor_m6D7E57ECBE71290733F6658D8197F034A615DB02,
	X509SubjectKeyIdentifierExtension__ctor_m178F0928E93C151B64754E82C9613687D80671A0,
	X509SubjectKeyIdentifierExtension__ctor_mDEF8BD36D2A43B1BDC54760AC6E57458E5ECBFE6,
	X509SubjectKeyIdentifierExtension__ctor_m50305847B96BE3F6CB0816EB143AB89108DA493A,
	X509SubjectKeyIdentifierExtension__ctor_m7CE599E8BEFBF176243E07100E2B9D1AD40E109E,
	X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_mD90F985708EE4E69C37AA8B09AEBBE64A4002601,
	X509SubjectKeyIdentifierExtension_CopyFrom_mA94CE978304FA27C3CD9719F34D85CD34FC3695D,
	X509SubjectKeyIdentifierExtension_FromHexChar_m7E53F7E025E6DD03B6BC137CA6F9C43808BFAB92,
	X509SubjectKeyIdentifierExtension_FromHexChars_mB25E5A16CF6637BF846D2B22898E552E092AADFA,
	X509SubjectKeyIdentifierExtension_FromHex_m8CAB896F210E058270EB9492F05D2776FEB6A1EA,
	X509SubjectKeyIdentifierExtension_Decode_m6ED45FB642F2A5EDAD51EE357CAB8EB95BC8EBA9,
	X509SubjectKeyIdentifierExtension_Encode_m6BEC26EF891B31FF98EF4FDF96CC0E9CEDF0B208,
	X509SubjectKeyIdentifierExtension_ToString_mBD5BE20274B5B56104E6ECD3137DE0718DE50537,
	HybridDictionary__ctor_m9FC8D443AABAEC8D67ADF072437D2B364B08B7F1,
	HybridDictionary_get_Item_m7185EEEAFC226096E70344C925C0E878B6BB355C,
	HybridDictionary_set_Item_mE42268AAEEFAC3C809899E1BC62251985E731079,
	HybridDictionary_get_List_m04D20BE02A5E09BE885C0780E74435ACCD56D78C,
	HybridDictionary_ChangeOver_m720F3CC680ABE10D68E6E5D67EE646435498EC8B,
	HybridDictionary_get_Count_m9105DDBF52049FDB3664818E8883EDF06646C28A,
	HybridDictionary_get_IsSynchronized_mEDB978DB4DD87B56D2111BFD618E9B93563C8020,
	HybridDictionary_get_SyncRoot_m6E4080330F28495CDEB87CB61DAE35C24028AA88,
	HybridDictionary_get_Values_mF40FEB4551FA8941CAF0AA8EA636A09AB3E0C3C2,
	HybridDictionary_Add_mAD439BE2C4F44AF8A43EC7491E26478EDDF7DFBC,
	HybridDictionary_Contains_m4D83965011E01C6992097DD64AC0F5C3C0E2C765,
	HybridDictionary_CopyTo_m14080EC1FA3FC4736A5EBA8B4B9CC49DD4E673D3,
	HybridDictionary_GetEnumerator_m6A951136F415F6AA36DD93755EDE5873D6D66117,
	HybridDictionary_System_Collections_IEnumerable_GetEnumerator_m51EE25513E0F719E34095133BD0C11379464A6EA,
	ListDictionary__ctor_m9B69C39CDA7C506487D47DFE0AD7CF59B0C4C82F,
	ListDictionary__ctor_mEF3028294A42FC5771EBED7DC1DCB104E284A79A,
	ListDictionary_get_Item_m234AF1C6B763954DA1EC8BD5C74BA2D16E8D74DC,
	ListDictionary_set_Item_m68050184A6FE6BB7B33891F19FE8D87D458499AD,
	ListDictionary_get_Count_m63B5332C669C858EBC423472A502528612C890F1,
	ListDictionary_get_IsSynchronized_m98323278519FFC7DF7206C42568B3C0E1724F5B9,
	ListDictionary_get_SyncRoot_m44040160ADB660B10684A95305CB08F56AF029E8,
	ListDictionary_get_Values_m144BEBB77FDEC181980793D89DC54DC2077A10AE,
	ListDictionary_Add_mD622807A74E5FF8AF27DFF445307D81DFCFADB28,
	ListDictionary_Contains_m06D47395FA7A1B7379C8BBFD38D7A8CFEB721D08,
	ListDictionary_CopyTo_mBF4FD9B59407ABF719E2565E788A2DC9A4769564,
	ListDictionary_GetEnumerator_m6B44040F7259D5F7F1E15F4A4FA0FAE38BFEE236,
	ListDictionary_System_Collections_IEnumerable_GetEnumerator_m6412355259E0F0D8959F9785D34F0748511F3783,
	NodeEnumerator__ctor_m96E6D528E4C4D03DF5FE2C904501B77246EE5B17,
	NodeEnumerator_get_Current_m19DF983FA469D5832AC53B7841D278980859DE59,
	NodeEnumerator_get_Entry_m58F1425F47017D32E7F781CBA78E37C355F596AA,
	NodeEnumerator_get_Key_mFB4422BD5607790768C310AA7715CDC47799E5AD,
	NodeEnumerator_get_Value_m01AD97761452577C6F66680DE74BBDDE898B8F72,
	NodeEnumerator_MoveNext_m8615D4B81CA7F5D17919BE7BFF0A688B192A67DD,
	NodeEnumerator_Reset_m9992FAC9825E8D6692B6FCEDF8E47E941C1875FC,
	NodeKeyValueCollection__ctor_mBB36F9963382776073923DB97C6C0DFC220E3BCC,
	NodeKeyValueCollection_System_Collections_ICollection_CopyTo_mD842A41E01397DF6504443F21E8687AAF12E3DFE,
	NodeKeyValueCollection_System_Collections_ICollection_get_Count_m4A3B27B46A158424075685D2BFD0E7DFD24CCEFB,
	NodeKeyValueCollection_System_Collections_ICollection_get_IsSynchronized_m178C7CF8DD7C9753FCAB3CEA39EEC748A9D124D6,
	NodeKeyValueCollection_System_Collections_ICollection_get_SyncRoot_m626EFA245B02BFEA3210F65CEAEA2630E9FCD803,
	NodeKeyValueCollection_System_Collections_IEnumerable_GetEnumerator_mA9963017BFDFE4A840CD514144D7DF80C24317EE,
	NodeKeyValueEnumerator__ctor_mC6052F8CA984A3A8A8801F237EF2E9583126663E,
	NodeKeyValueEnumerator_get_Current_mC74C6C7153BB3D7D120EED9865B48336894308DC,
	NodeKeyValueEnumerator_MoveNext_m670FC6BEB14D91A8D94A8D6B2B92C7A42CC65ADC,
	NodeKeyValueEnumerator_Reset_m4D8DEA9EB735DA10B1F7EC74B18C51B8C60BA610,
	DictionaryNode__ctor_m38EC4C8C8EF2A5ABDD91B178DDB0CF0E0D7D15E2,
	NameObjectCollectionBase__ctor_mA74DFF0CE0FB59430A786082F414813F276F130D,
	NameObjectCollectionBase__ctor_m684256D394079487B0AA79F96D82FC1EF34A2123,
	NameObjectCollectionBase__ctor_m9100CD7C0C24135A887EC01FCAA69EC0DBF0D463,
	NameObjectCollectionBase__ctor_m4BF6C086BA110F79E817D1F307D0B912E32BCA55,
	NameObjectCollectionBase__ctor_mAF5575543B8D937C34D00E9D7B6642BFAD74F37C,
	NameObjectCollectionBase_GetObjectData_mF4EA432DCE051F52DD8CA3C091F606D8C216D9DA,
	NameObjectCollectionBase_OnDeserialization_m8C86FE5E896571CDA1C4335CFC799F20ACFBC3B5,
	NameObjectCollectionBase_Reset_m7D346054B961190F3799970BC8C4F8EBD3689986,
	NameObjectCollectionBase_Reset_m1A5701DA2CE23C171A59DDCE5EE8166528C1081E,
	NameObjectCollectionBase_FindEntry_m5D2C7207AF84D9CFAE79399387115E44C5348C8F,
	NameObjectCollectionBase_get_IsReadOnly_mFCB376BE86332546D47A4B983FD91FFF23558709,
	NameObjectCollectionBase_BaseAdd_m1A0CA51397D274B23B10ECE78D2EE923C4FDC07F,
	NameObjectCollectionBase_BaseRemove_m301318FB3627302D115078FA8250D07A4B851A99,
	NameObjectCollectionBase_BaseGet_m9ADF3F54E9A5D8151837C6E4652ED27CD1C06CFF,
	NameObjectCollectionBase_BaseSet_mDAD4979940B3ACC47B77A64AECCD0C69C2F9A015,
	NameObjectCollectionBase_BaseGet_mDEFD71E2644E7080FBE6E79B9221673D02F64202,
	NameObjectCollectionBase_BaseGetKey_m0ED9A3D47A2808BF98BCBEAFB51D175127B9CFB1,
	NameObjectCollectionBase_GetEnumerator_m02D0640D271E51652CC9E1B50C6795CA19761E88,
	NameObjectCollectionBase_get_Count_mA6E8285C71420239BF891DF0FFCC60E68E660D25,
	NameObjectCollectionBase_System_Collections_ICollection_CopyTo_mE984B0745168F2F0FCAD2F9CC36E525592EDFC20,
	NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_m5BA819A3EBE9BDD6B7ECB55E9C4D767D85EAF641,
	NameObjectCollectionBase_System_Collections_ICollection_get_IsSynchronized_mC079154D099C5C60910FF6B003AC60D196B65309,
	NameObjectCollectionBase__cctor_m75D92824CC99BD5686855E00C115ADD337FD46D8,
	NameObjectEntry__ctor_mB4018B4F844A8F7F3308B10CB017D6008DB0736B,
	NameObjectKeysEnumerator__ctor_m684F9F2CC2934708B3F198D7F750D5030AD9CC80,
	NameObjectKeysEnumerator_MoveNext_m602677D8FC9EE3BC87755FB0EAC1BACA518CA240,
	NameObjectKeysEnumerator_Reset_m291D728258A95AEB8BE6697D0E1DADC24AE1A977,
	NameObjectKeysEnumerator_get_Current_mEA737C3649050A481FEE567F163E4D5C7A328B2A,
	CompatibleComparer__ctor_mFAA5DFD1F5D8A144CBE12E74E8557CF5653A2DB0,
	CompatibleComparer_Equals_m08DCF183451A42F14345B5F615F4BE790565EB38,
	CompatibleComparer_GetHashCode_mEFB12FFF3B0A76548DF481D6922F2F21D31B30FA,
	CompatibleComparer_get_Comparer_m556DC9797B932664AA69CDC71F0C7EF8E669AF79,
	CompatibleComparer_get_HashCodeProvider_mE92F98439CCB3AFCFFA472631B45AC8CA8686F0D,
	CompatibleComparer_get_DefaultComparer_m3CE447550711937CB1B4012A0886F99E0719C8E4,
	CompatibleComparer_get_DefaultHashCodeProvider_m97193A6E0AB462BB662CA24C0F3491CE2B950698,
	NameValueCollection__ctor_m78B698FEF3EFEE917D0EBAA0DEDCFD1BD9AA6323,
	NameValueCollection__ctor_m3FB82F83A2B13FC647CECDF8610D53B52F52170F,
	NameValueCollection__ctor_mA7D338E7E6795829EE4E64D8834A41C2CE898FBB,
	NameValueCollection__ctor_m69DC8832F5EC7DD21DE701866B84A639570AC8D5,
	NameValueCollection_InvalidateCachedArrays_mA7CA9F8B09DDFA9163FB77563C6FCB07762D23C8,
	NameValueCollection_GetAsOneString_m17F731980F76CFE607BD54F6A965BD6930927669,
	NameValueCollection_GetAsStringArray_m1EDCB363B9C6F60755628FE8A8AB366CB451405C,
	NameValueCollection_Add_m2058D4136F9DC4A11836DF6B1AB4853387898B2C,
	NameValueCollection_Get_mDEC8EB5C5FAA1B34B99C6AAA50F0F575296DB1F1,
	NameValueCollection_GetValues_mF6E7959EDDA51B0E1F86D31AC90E949ADAF4A0DD,
	NameValueCollection_Set_mE479F82E6045A7447D4CFA7040FF63CC5CCD1329,
	NameValueCollection_Remove_mFA1B8B38078E7B158E18CF9B6D1A211F071082D0,
	NameValueCollection_get_Item_mCA21B55D4454D35073475B2966BA0F9207D16FED,
	NameValueCollection_set_Item_m068F8AB7B8D0EDFD8A9DA582E80A20ACF9E8D692,
	NameValueCollection_Get_m0CF4D7CB8B22A2B269CFD472A17494F592E470E7,
	NameValueCollection_GetKey_m56EE50398F41A0A52AA2E7759B511BFAC068125D,
	StringCollection_get_Item_m1C00F274B95C72B7802386E253AEFD63BBF0ABC6,
	StringCollection_set_Item_m9C39150B3F7E7707087939A667608314F7B7396A,
	StringCollection_get_Count_mC75C516535FA84F1F00EA0B8080DA833F2668B6E,
	StringCollection_System_Collections_IList_get_IsReadOnly_m5F7F83F7BE95960C9214087A57F2BDE25D623D2E,
	StringCollection_System_Collections_IList_get_IsFixedSize_m0DF42F48B682BCFAD27BDE97B54789A7AF31CB65,
	StringCollection_Add_m74C07154AC7259B8219DF6A79B76EF5B7E12A6EE,
	StringCollection_Clear_mF6342AADBD52C49020E567138B9E0F479B38A357,
	StringCollection_Contains_mFA733702D3C6B9BFA95AD34B74C5A0AD9DB3B30C,
	StringCollection_CopyTo_m4AEACC92E456EE1A0CA6AE045E1CF3739216A5E4,
	StringCollection_IndexOf_m0CCDCB4898AEF6BD74168E2FE480CEA739AB926F,
	StringCollection_Insert_m899372FA6CD26D46C1773350C67A5B7DD390F455,
	StringCollection_get_IsSynchronized_m050BFCB6A4192E924D209B7CFAFC4F6EB6621CF0,
	StringCollection_Remove_mC6A3DD305A3DFD39CB2EB0B150633F774FE93E78,
	StringCollection_RemoveAt_m2774DD6AD7D2A1D26B119D06E5E6210CDD1DBA07,
	StringCollection_get_SyncRoot_m8EB8D6F913B12F3B9FBEC7056B85520F63107C9F,
	StringCollection_System_Collections_IList_get_Item_mC52C13B373A2121AC1643931A253135DE68AA72E,
	StringCollection_System_Collections_IList_set_Item_m854335ED059049299A185117DED7BBB255E18EAD,
	StringCollection_System_Collections_IList_Add_mB44F92FE4734B08FECBC698551D3C8494BC9B472,
	StringCollection_System_Collections_IList_Contains_mE745AC2B0A9AF7F1A1A2508446F62DA61ACDB419,
	StringCollection_System_Collections_IList_IndexOf_m22D689D7E4AD87F7BF760176137F81D454AD394A,
	StringCollection_System_Collections_IList_Insert_m6DE39B04ADDE5A0309BC68E3350A2D6E7031D984,
	StringCollection_System_Collections_IList_Remove_mF7FFE6D6A2B875139AF595D5BCC5894D521D500D,
	StringCollection_System_Collections_ICollection_CopyTo_m1C3B0352FAA40B2BC8C570B6B67A63D6293258A0,
	StringCollection_System_Collections_IEnumerable_GetEnumerator_m3D00F20127AEB0490F6F594D72E077B2B37AE182,
	StringCollection__ctor_m9E4F5359AEFDC2281D4E651A948F6EAE1B812488,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	HttpStatusDescription_Get_mBCAF1CF569C7D10C4FCDA614E2265B4F4789799D,
	HttpStatusDescription_Get_mA25D6763223B9F856548976E4E7D8CA5B7468B0C,
	Authorization__ctor_m09795C30F4FE3B67923A303F198A8DE21E9E43A1,
	Authorization__ctor_m17BCE19AB822863CDBA3CE2AECAC97FF2F53426A,
	Authorization_get_Message_mA648F467F28DCD3ECBE3C8505B719519BD803C2A,
	CredentialCache_get_DefaultCredentials_m04BE43C08715BE89006B3E298A7706E7C05D05AA,
	SystemNetworkCredential__ctor_m1578DB215E2E9C785748EA49BA5E6FF9F145EAE5,
	SystemNetworkCredential__cctor_mD1039438C68D62097C1BB865B15E4A1745167F00,
	EndPoint_get_AddressFamily_m62AEE9F373979E52C77ED321CCDE62B724BE94A3,
	EndPoint_Serialize_m10480668BCAFD0C28C1AA1A1DCC7F4CE4506969F,
	EndPoint_Create_m3E7712702ADC0C6CCAC317C4613B67FC3A870AE5,
	EndPoint__ctor_m128E616435E17A62A3DD7D0BC759FB0CF7F87C29,
	GlobalProxySelection_get_Select_mB426350582C09C6940AA328D851F719BBAA5494B,
	GlobalProxySelection_GetEmptyWebProxy_m709E1782A9353D2C99AFCFA6F13FC308108367A5,
	HttpVersion__cctor_m28C73AF80CBE88253CE08E87C2C76AAFE33B4DED,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	IPAddress__ctor_mA672DA31F082CC6E8B10BEC436D94450E630E16F,
	IPAddress__ctor_m1E185EFDA876C940958AF536535E2E4C16C0D1D2,
	IPAddress__ctor_mEE088A7E8AE4F63C519837672A2EA0650E6A9B1C,
	IPAddress__ctor_m75238FEA3E8B108639752167DBE53DDD799CD7B8,
	IPAddress_TryParse_m43158BF9D76398954BE04773A6A15898EFE27F3E,
	IPAddress_Parse_m49C413225AC75DA34D1663559818861CA34C3CB0,
	IPAddress_InternalParse_mA345622709EB5B07BB8D50F3E28CB519BB419E26,
	IPAddress_GetAddressBytes_m7ED0924E8259B6D2426B3B570B25EE7CE9B789C7,
	IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D,
	IPAddress_get_ScopeId_mEDF9FA0FCEFAC4109AEDAD316DC18C5EE841CE5B,
	IPAddress_ToString_m4CFA8A08819BEDF5293C486AF623F5A4014AF8AC,
	IPAddress_IsLoopback_m3B8891E48F9F68CFF239B71C29E536BE1F5CFA14,
	IPAddress_Equals_m4B1CA27458D8182146569D0BC82A2D3A23346516,
	IPAddress_Equals_mA898722519C090D557CA585C2FDB496D92D3CEB3,
	IPAddress_GetHashCode_m3A6682B1FAA8754BB7AF27913FFE319ABFED9D50,
	IPAddress_MapToIPv6_mA99938E0BDF716543A4C890FB694C54FBDE70B4F,
	IPAddress__cctor_mA3EA3A0F0F5B03634732C2DF4780B8438F8AAB57,
	IPEndPoint_get_AddressFamily_m3D6AC423AA5E8BEBEA8E3324D9BAC3A89A279127,
	IPEndPoint__ctor_m22783A215BA0B38674F6A6CB6803804268561321,
	IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95,
	IPEndPoint_get_Port_m442D84417A9E8942514FFBB9714FEE6BD094C6C3,
	IPEndPoint_ToString_mBFC4822326C1A86698C64FF3992CB295911866C5,
	IPEndPoint_Serialize_m6DCCD4B0D381396E0E7638C240167A2A8B0EC585,
	IPEndPoint_Create_m807F89A5752C1E5F09D1AB32F6E60D243F06398A,
	IPEndPoint_Equals_m2F4B8B1F77EBFAA516EE1B6AB75836C928682EBE,
	IPEndPoint_GetHashCode_m02C37BD0E617B964B02EB2F19F0F7CA1A337C3A0,
	IPEndPoint__cctor_mE4AD7BE573E78C661DED5F5E32A2D8AE18A487D2,
	IPHostEntry_get_HostName_m93399E3B7017D91869B47746BD9EDF74BF347FD1,
	IPHostEntry_set_HostName_mDAF37AF72EB14AC6C63DE863DAF1C71E7DA2AA21,
	IPHostEntry_set_Aliases_mBEA9E40249BEC29743421885964A0A76A9D34BB4,
	IPHostEntry_get_AddressList_m466AC33C136531F42A5EDCD3A75E5B392075186F,
	IPHostEntry_set_AddressList_m5D661027187141E20D78AE4795EA8DABA42BEF38,
	IPHostEntry__ctor_mE110DE1F81AC6E1174418A6EE3C266E60BD06B9A,
	NULL,
	InternalException__ctor_mD1CD1128C58BBD0C276E4218668A3840DB16E2BE,
	NclUtilities_IsAddressLocal_mA242E6ABE428178E61CD874861C9FC403B7A8E6D,
	NclUtilities_GetLocalHost_mE12F4302AAB81FEADA5297FCFA19D3489AF307D5,
	NclUtilities_get_LocalAddresses_m02FAA6B8E057FF963114C8B6081D240E1650C682,
	NclUtilities_get_LocalAddressesLock_m0947ED2032CDB835110A441EEB4F8749B460ED88,
	ValidationHelper_MakeStringNull_m1B543969D0680F39DA26ED8ED30A8C9BD477E172,
	ValidationHelper_IsBlankString_m36C36F665203B4C29D68521575BA043C79AE6997,
	ValidationHelper_ValidateTcpPort_mC3E43EB25CB11FD1E24201705A66E50903A1893E,
	ValidationHelper__cctor_m22F571D2AFF05BBF2FF195273C2F35EDE1E80644,
	ExceptionHelper_get_MethodNotImplementedException_mFF544B7A15FFA43328707249BA0CC6E980DC662C,
	ExceptionHelper_get_PropertyNotImplementedException_mF07BE7024B108DBC45C374F81D0E5875B9D3A516,
	WebRequestPrefixElement_get_Creator_m13145D2174C42C9B67EA559E658306C9B9DAA59D,
	WebRequestPrefixElement_set_Creator_m1E41CA82D539FA5B7FFFF02B303DCD9305190C66,
	WebRequestPrefixElement__ctor_m846CE8E7CBD75F62E6CC970CCD75D16BDEE3A42F,
	HttpContinueDelegate__ctor_mFA137B57734EE9D5C75A3333EB7CF4C9BBDE28B4,
	HttpContinueDelegate_Invoke_mBB31F6155FA0BCFF94576BA0F43C19568592BD5F,
	HttpContinueDelegate_BeginInvoke_m247E5694A2CF6D28773CB8DFC9E919AA1D497C3C,
	HttpContinueDelegate_EndInvoke_m94F8280E186B7FDD7CE8197AFEECA875305D18D0,
	NetworkCredential__ctor_mBB62CCEBA2D6C5AE946F2D3F4A26FD3B718E312E,
	NetworkCredential__ctor_mFBBBBCA94F91EA965A2B3DD6DD52554245B6B41B,
	NetworkCredential_get_UserName_mFC41ED3D14796CA2B5C08EB0DE537A2F3EF02473,
	NetworkCredential_set_UserName_m0906CE0D5CFA7972CD2DA08D9D2DD5ABEEEE55C8,
	NetworkCredential_get_Password_m5EFE385E59C57168F8B8B43BE10196C4346AAFBB,
	NetworkCredential_set_Password_mD3D1EF31B8A2C9011A2439B249E3B2D55D1144F4,
	NetworkCredential_get_Domain_mE4AA75C44CA2189FC66B95235C17CCE6ACFEDCBC,
	NetworkCredential_set_Domain_m122C82F6B1E78A1F0A86B9B314F479EB336DC354,
	NetworkCredential_InternalGetUserName_m978EFE7B8858AFE08B5281B187357934B75BF2E9,
	NetworkCredential_InternalGetPassword_m3A81BC2DFB8F5EE58FB8E4AFC25DE6B4D65176D6,
	NetworkCredential_InternalGetDomain_m675D988E1EA47F5EA6111A318FA02A9F951924C2,
	NetworkCredential_GetCredential_m695587170B9003FAFA139B3F6EF82CB5F6CF20D1,
	ProtocolViolationException__ctor_mBFDA5DBCACD716BB63ED4055B66E6AD41240889E,
	ProtocolViolationException__ctor_mDD18BFEE8140195ECBAD99A4E8079FE063A92D79,
	ProtocolViolationException__ctor_m1E566889EEC9659072DB826E7E6BBECD8747ECBD,
	ProtocolViolationException_System_Runtime_Serialization_ISerializable_GetObjectData_m29C4C22EFB8EDB208F01C9477A72F1CD1C442245,
	ProtocolViolationException_GetObjectData_m85FE8C0B309D2870767DE4AEDEDAC089A0E5F4E6,
	SocketAddress_get_Family_m415D59360C9C2E480D2D98775983A573CCD9D7E0,
	SocketAddress_get_Size_m6383C5C4F9200464ACB6D583020F81019602CFA4,
	SocketAddress_get_Item_m4ED599B209C73DFB72212B7B3621B1703A26C5FD,
	SocketAddress__ctor_m6684EAD0CA7CDDE9DB6E406FE1F32E6DC6B92A4E,
	SocketAddress__ctor_mBE5E81FAB07F2E45BCACF1D97E1DBAAFB5E50511,
	SocketAddress__ctor_m9738A4ADE5808D768AE732070C89F7ABA6BED994,
	SocketAddress_GetIPAddress_mB16652A595F005C45F9F8F085C995659E33D1B07,
	SocketAddress_GetIPEndPoint_m251711A31597B8B2702F9212292CB699B84771AE,
	SocketAddress_Equals_m4E7AA4FFB7FF19A0323168642F3E4F1631726FFC,
	SocketAddress_GetHashCode_mA54234C51687C63132D9C9D326433FBB001C5B33,
	SocketAddress_ToString_m8326F21A4A05F551EAF40323D4AFBDFA84E74C45,
	WebException__ctor_m98277D0386F066DFF058573C69663D488749DB17,
	WebException__ctor_mE0703A9CEA00C199E48C0FAC3174771E9614CEC7,
	WebException__ctor_m4D8BF7D61087F7AA4018215A6DCF7578AEA4DB08,
	WebException__ctor_m45CDD6F2A9FC70FAC4031D6D3DA645BAF76221C2,
	WebException__ctor_m7C17EA99B1FE182295AF99B968D67080AD4E2CCE,
	WebException__ctor_m56E04F240E37B9AA72D7A6ACB611807E1EFD2A99,
	WebException__ctor_mC6DDD7E27B66A40A1D3CBB0EDF7B2C65017964F5,
	WebException__ctor_m53B6D10B4E58AEAFD51D4283CF4D739EFC912068,
	WebException__ctor_m7EE3F748EF90DC6004CD094BC4CC203369FFE1F7,
	WebException_System_Runtime_Serialization_ISerializable_GetObjectData_mCF19A0A1F0BE4A6B87369ADC32B4811F63BA8639,
	WebException_GetObjectData_mB7123EB9D9EEA2C93A8C2F47E785E7A3437FF78E,
	WebExceptionMapping_GetWebStatusString_m30EC249DEE18FC7F31A7AE05399C6D7E8CEF6554,
	WebExceptionMapping__cctor_mD501856055A625E9CF2525D3BAB2F831470F3DE1,
	WebHeaderCollection_NormalizeCommonHeaders_m7CF89E01004789D42D5BCB5CF60DD065F489F5BF,
	WebHeaderCollection_get_InnerCollection_m6600DA73765180C37B0B0F802D3B7E4728B1A970,
	WebHeaderCollection_AllowMultiValues_m1CF94807B88DF2D1801D1B5F6322304D1912F3BF,
	WebHeaderCollection_AddInternal_m6B83E38C739FBD15C7F70C6304C786A1C3BA0B04,
	WebHeaderCollection_ChangeInternal_m2C0BFAF67320629676F805D70D8A97D50BA03EF0,
	WebHeaderCollection_RemoveInternal_m89528036293926837E8EA5703C1306C1E351B117,
	WebHeaderCollection_CheckBadChars_m5362EEC82635C2EE076C81543FD65130C9EBD1CF,
	WebHeaderCollection_ContainsNonAsciiChars_m6D4E84AB2228EA6CC1AEB89E735832E1E632098D,
	WebHeaderCollection_ThrowOnRestrictedHeader_mCF5ED2B63250571375A2697DAC28F07EC847256E,
	WebHeaderCollection_Add_m55E340EE0B48470ECF8E265973CA7597C72AB98B,
	WebHeaderCollection_Add_m2001A99A04978C4DE11DAC26540C04C5EF5CC776,
	WebHeaderCollection_Set_m4D27314894A7B6FF691EE3283565BE259530E4AF,
	WebHeaderCollection_SetInternal_mD14173DCCD03148462674B04D44BCD60E32BAEB8,
	WebHeaderCollection_Remove_m83029F49FE7334B485240184FDD82A3BD50040E0,
	WebHeaderCollection_GetValues_mA3EF69E80A7C913D4B90D4DD7544B77A89B770D9,
	WebHeaderCollection_ToString_m247DD774337889E2CA464E8CED9854095342DC43,
	WebHeaderCollection_GetAsString_m880B9E3C60B09BA64F7932C0747F904B96F9E655,
	WebHeaderCollection__ctor_mA79C59CAE93CD777F7B475AE4C74FFAF48892263,
	WebHeaderCollection__ctor_m6D0F9AAA2847C2E88504774B186D7187253FA463,
	WebHeaderCollection__ctor_mFADC65A9D6FFCA2888E38168C8B567F52D9062E2,
	WebHeaderCollection_OnDeserialization_m51FBDB1DFDC1D0F1F8A1C00F7950AAFF0F9CE278,
	WebHeaderCollection_GetObjectData_m4D4C3DA409886C6BD1166CEB9D92A8E45FBF349D,
	WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_mDE59C6575C21AF468D3F2DCC38108B7F03CE2AA6,
	WebHeaderCollection_Get_mEA01975EBD0236751F846A75C3C5F2B303BD1BB7,
	WebHeaderCollection_GetEnumerator_mFFE41B272347B4A4555E2D70BF5F70149638A33E,
	WebHeaderCollection_get_Count_m70B69DE18877ED7AE912CC9E938F7764128A78E4,
	WebHeaderCollection_Get_m32C6BBFEBE1281E17259CDCAD3727139FDF68C83,
	WebHeaderCollection_GetKey_m09DC31BEBDCE41D15F8EC7CBF4086E004AA9880A,
	WebHeaderCollection__cctor_m2290D17C9F2707674F8A61F126FF082C370E47A4,
	CaseInsensitiveAscii_GetHashCode_m2EE81D1BD0AC3190BAA74A8D4868F92462ABB003,
	CaseInsensitiveAscii_Compare_mB139A59D797F341DD9ADFF052699317DE534431B,
	CaseInsensitiveAscii_FastGetHashCode_m306A0F307E96AA75691B6E4EC161157798931F2D,
	CaseInsensitiveAscii_Equals_m23F3B8CBE2DD24C2240CDB8523A21D63129BAE3E,
	CaseInsensitiveAscii__ctor_m5AD65BBE763EC356D1DC91FBFE3B546650978C3B,
	CaseInsensitiveAscii__cctor_m340B757F0D6162CEB972A564BC2585722C5B5824,
	WebRequest_get_InternalSyncObject_m055B62E0F040A70A77693A150119F8E69D2A8B4A,
	WebRequest_Create_m2129DA94ABDA04A82819FAA8333DBF06CC649C69,
	WebRequest_Create_mE5C98DA6F421133D33D07FDF1858213D5A03DE46,
	WebRequest_Create_mCBC2128DC3480F06381E2A4BC49A790BE33E6627,
	WebRequest_get_PrefixList_m18B7220898831405D4EC29AB87584BAE6D5B4594,
	WebRequest_PopulatePrefixList_m91ABF579F90CEBCBE7A66688E48F06BED84BA725,
	WebRequest__ctor_m3ACCFDB5F433B9BC39C8A0E7A6629AB4DFF67B9A,
	WebRequest__ctor_m2F0B777F71CBFCF400006179866A234A1335B0E0,
	WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m590FC06E76B37C3F6D7A6451B41747936064B430,
	WebRequest_GetObjectData_m544C55A909B7230FB2C133C9C5D3F6A17FB55777,
	WebRequest_get_Method_m3D66197AFAB65A1A064D264D8DA51774CB6F9579,
	WebRequest_set_Method_m1ABAB5981F530ED5197280E63687909A52CD3162,
	WebRequest_get_RequestUri_mAB1E20F0DEE5B1F22BE3A2CE6682B6FA4E9E5A84,
	WebRequest_get_Headers_mC47B6F8D64026543A75C48D0850CCC672A34D761,
	WebRequest_get_ContentLength_m01D8C2A5DCE061CA497F8CD64481467909CB7DF6,
	WebRequest_get_Credentials_m56B8C17ACD3F463C78F8E3FC722CC186212D5454,
	WebRequest_set_Credentials_m81896AE75AD64488CEDC292E56D907B1F23CE378,
	WebRequest_get_Proxy_m3AB9B28EA945A2B8160B2FC44319AE192224A7C8,
	WebRequest_get_InternalDefaultWebProxy_m89CE4F19D2478740536BA55770E5B8311A6B5E92,
	WebRequest_get_DefaultWebProxy_m147C9E334AE2191485F998833473F567AC3EEDCB,
	WebRequest__cctor_m5CCECF10928984BAAE419F70A700495291CA2D5E,
	DesignerWebRequestCreate_Create_m1E2ABC33806741A89F5B85CFC8E512C7C64B0CEE,
	DesignerWebRequestCreate__ctor_mFDCC5B7F2462FAC2DB6E7C412FE894F1B00F65AA,
	WebProxyWrapperOpaque_GetProxy_mF87834EC1C4105EC385C9A489FD2107777F206E5,
	WebProxyWrapperOpaque_IsBypassed_m8AFC7BB3B774D3C5E8E17A88AD09EC00BFE61E2D,
	WebProxyWrapperOpaque_get_Credentials_mA88118C20458E1BAD06301FEB527377D15910402,
	WebProxyWrapper_get_WebProxy_m64E0A52B9081B75ACED10724A2805F6ECE3C89AB,
	WebResponse__ctor_mDD72EDEB98B8AFA20480EE261E74EAAE10CB63E0,
	WebResponse__ctor_m601D6CE25BA0FAA154142B9AA7A5E188409B0D1C,
	WebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m3B1AF8144A5E9368310A362667CC0870C77BA547,
	WebResponse_GetObjectData_mD4CAAA6BABDE03797E98E93985D3096630CDEC10,
	WebResponse_Close_mB7B37D2ED64992C6D94AE2547420DFE340C4BC08,
	WebResponse_Dispose_m4C4678024B930AD077E47EAD64B426D4F03F029A,
	WebResponse_Dispose_mD8EDE43B78CFB8B192059E92EFBE98E459A96E40,
	BufferOffsetSize__ctor_m34DF650AB658A85943BBEDBB22887D2C3209D9E3,
	BufferOffsetSize__ctor_m57DD63EDCC7C4DD3350B00DF86B3F69C8850D996,
	HeaderParser__ctor_m472893312CE6499CF0B133E43208D60D8F045642,
	HeaderParser_Invoke_m3A5FC4D267C12585E1869DFB57D913613380D813,
	HeaderParser_BeginInvoke_mF6C5E5287D994844EC4A01DBAA7B579334A1B157,
	HeaderParser_EndInvoke_mD28C9565D9B34BF5E04ED602DFA2F0ED3794820B,
	HeaderInfo__ctor_m9B515C741E98093173780BC724C0AD044B395393,
	HeaderInfoTable_ParseSingleValue_m66383EA99A42C133C63A6568D5BAB52D7A3043DF,
	HeaderInfoTable_ParseMultiValue_mE007CE0399B5999CFA8C530CA8AB5B9C17C6564C,
	HeaderInfoTable__cctor_m69E892F08E1F5EE2FE205017FC6D0C72B5384F82,
	HeaderInfoTable_get_Item_m13EB127C357A9276F74C65C0EEDEA3A1EF5E8D5F,
	HeaderInfoTable__ctor_mA44867F178E91B5FB9540ECB02A129F2868FC82E,
	NULL,
	LazyAsyncResult_get_CurrentThreadContext_m612DA3FE475024D1FD9FA7DF7AF92CAEE96AE3EC,
	LazyAsyncResult_get_AsyncObject_m8ACB19F0E9711613E0984A2605A7CD3B7ACEE37C,
	LazyAsyncResult_ProtectedInvokeCallback_mB9317AC9B30205D1D84B82F8F4C0674928EFC19E,
	LazyAsyncResult_InvokeCallback_m3AD664A494F2821C00A7E07BCE9B4FD63A2BC369,
	LazyAsyncResult_Complete_m65AC5DCDD0B1EAF8702194A03D24B415F99A6E49,
	LazyAsyncResult_WorkerThreadComplete_m5F2BECD93B121A2BDFBE3AD9C8E60460FA1C7ACC,
	LazyAsyncResult_Cleanup_m5382F96236C1F0ED05304E68A0136C19AC870AB5,
	ThreadContext__ctor_mE89CF3AF57457840698C5046CD32EF8B02CDC40A,
	NetRes_GetWebStatusString_m0D5F79A08AD2C1F946FB394B0BDAAABF86DFDF50,
	TimerThread__cctor_m936A5AAF1CC2EE5BD954925D7AFEFAC76721DA5E,
	TimerThread_CreateQueue_mAC5BC0D2F866894633C32F3561A0668452893D09,
	TimerThread_StopTimerThread_m91D143975E5942416F277D6910DFCCAD80632A43,
	TimerThread_OnDomainUnload_m2B48321A87ADB0751E57C2608AA3ADFE4188CA9C,
	Queue__ctor_mC89D29D512FC164F6B5A4C9FD5DE574328FC99CC,
	Timer__ctor_m4540393393A01B07D912FFFD47EE37BAD97D8DD0,
	NULL,
	Timer_Dispose_m14AC12E37E52871D2FEC402F8D2F78BF8101C32B,
	Callback__ctor_m6DECF0EA1ECE944021384E1D04CF4931C89353FC,
	Callback_Invoke_m5CF1B13973F36016D5A95A11766B53018849FC0B,
	Callback_BeginInvoke_mAE44EE87C3A42CE9EE94B437D3FCB03C743CF2F9,
	Callback_EndInvoke_mD9EB2BA9D74B86A5A84275D63BAFD884CA639C7E,
	TimerQueue__ctor_m43203205D39CB2175B0E5832A359AFB952AEA9D6,
	InfiniteTimerQueue__ctor_m0615ECE53786982AB9CE17517821090EAA4875FE,
	TimerNode__ctor_mD6B740263A99B51737831DE7F0400AF236C5A39E,
	TimerNode_get_Next_m3960D4407C100E026C6F7EF316B07F8BB2C26517,
	TimerNode_set_Next_m0C74401BC133D94AEDB40E1CB0A24F2C1F52FC68,
	TimerNode_get_Prev_m6A2D3FA9F1ED71F25B05D72A81DB7A8B368AAA62,
	TimerNode_set_Prev_m3D69D7AED0406834FFFFBE21804DF522B8FB14B6,
	TimerNode_Cancel_m6EB166DFE1E2E01BBBAA1FA4C35457DB111D951B,
	EmptyWebProxy__ctor_m5EC0BA8242BECE3F0E67CC143135CBE8670BFFFD,
	EmptyWebProxy_GetProxy_mB0FAC789C4DD283E803F72B38F22ED5EA25535AC,
	EmptyWebProxy_IsBypassed_m9A64B556EC9A174EBF75652A1C274A437E1CC99B,
	EmptyWebProxy_get_Credentials_mFBF67D584C61BB83BC39D8CFD6B5AA473E255692,
	Cookie__ctor_m4C7C1E7E0DCE68AC143F44630AEE2D385480DE48,
	Cookie_get_Domain_m278E7B0428D3194F5C38175134F7C3D5788A69FE,
	Cookie_get__Domain_m3B7DDACA37D03838CA3C94460AA300D4E2D81C7C,
	Cookie_get_Expired_mB77802DB1DD4FD43D23A582009833238D50C23A5,
	Cookie_get_Name_mC233F7C69F3A7FE643C75F4289BE2F7A8E84D8FD,
	Cookie_get_Path_m8B56312681A7D76C09C012AE84004D2FE15AFE2A,
	Cookie_get__Path_m78788CA8B87C93C7C22828F97BA8F1AF022908B1,
	Cookie_get_Plain_m640F05F7E1F4600F56769459C1FE15548512E2E2,
	Cookie_get_PortList_m4BD9A535C0DCB224F6093FA89FF336C83A0836CA,
	Cookie_get__Port_m867588A59661398C9AC64EB223387B42048D280A,
	Cookie_get_Secure_m5ED475362972AF2648E51D7796C17D82C70B523A,
	Cookie_get_Value_mEFF804AC5A0D1252E626903FE0B45706D4F3A453,
	Cookie_get_Variant_m5453D977C7AAF6B634E5B31CB2DE7D66BD323551,
	Cookie_get_Version_m061640FE8C0F64A0FA003BF8D3391CC1FCD153A4,
	Cookie_get__Version_mE3C0E366E86DFAAB2EEA66561B74C4E8B284B854,
	Cookie_GetComparer_mF29897F68052CEE3A4277AD0DC675B6E1D4368E6,
	Cookie_Equals_mB07B0CC36C9FA37BD7F8DE25DD5BF11BEF65B7D4,
	Cookie_GetHashCode_mC355FA3D045BA3A216583AEA99C8D448A45215BE,
	Cookie_ToString_m50C477C29C14B822B6867B4B6F877BC0120EFC4E,
	Cookie__cctor_m5D1DAACFDA2803E0ADE92204CBE5A1AA5F9C038B,
	CookieParser_CheckQuoted_mF37A111F2850B5D5C111ED2A5676B260E1DBD1C3,
	Comparer_System_Collections_IComparer_Compare_m83E8F9A164E78CC74ADA62FF0EB4F7AEBE08B902,
	Comparer__ctor_mB9048FB4377C7FE872A4ACD9A0173FEDA37554F3,
	CookieCollection__ctor_m6F7AC5879C514DAD6EE967A7FC18C3F28DAC4B11,
	CookieCollection_get_Item_m811D5D88284ADADB6200D9B6CE5BE74B7324A597,
	CookieCollection_get_Count_m329458A1D5426014346F371D1B86AB4678FF34AE,
	CookieCollection_get_IsSynchronized_mF0FA5ADB5DDFC0DA4FAE1D06BE5F0A28A35309DD,
	CookieCollection_get_SyncRoot_m4761E1233AAB107D61A409A106A117751A42A6FF,
	CookieCollection_CopyTo_m1C053D1F041D227716D6D7D472A31B9E65A1C871,
	CookieCollection_TimeStamp_m453133C0783D40B58F511208B428765420DD6A9A,
	CookieCollection_get_IsOtherVersionSeen_m1C659BBDF60CA447C3B5576BC4FCCAEBCCCBECF4,
	CookieCollection_InternalAdd_m0BB034B31D41891EA47F068A6E50CDE3DF510AA2,
	CookieCollection_RemoveAt_mE2CB87607732DF13B534A0808EFF9726F3213824,
	CookieCollection_GetEnumerator_m98DE8A53502E0AA6C428F564D6EDE38A007D22C9,
	CookieCollectionEnumerator__ctor_m1171DDC5103451BF97CD71F062D1D46F73A82E24,
	CookieCollectionEnumerator_System_Collections_IEnumerator_get_Current_mAA94D3E326A7361A173810EF7FEF6ED5C5050E18,
	CookieCollectionEnumerator_System_Collections_IEnumerator_MoveNext_m654F79FEDDFEE6946815223DF2EFFF20B25F5871,
	CookieCollectionEnumerator_System_Collections_IEnumerator_Reset_m303622E6840FA17ADFF40CC74DDAC1EB5480C3CC,
	HeaderVariantInfo__ctor_mB0775C718895238F3289605480ECD66D13DE19C0,
	CookieContainer__ctor_m50F677B7149D3D40B4D6ADB3DA9F27CF8434ECC2,
	CookieContainer_AddRemoveDomain_m86DA545D737B59A516754DFCFCA164C5F4F728E0,
	CookieContainer_InternalGetCookies_mEADD88B29299A160CA2AD96B5E2C6A712DE0DFF4,
	CookieContainer_BuildCookieCollectionFromDomainMatches_mA12B074CC288FE102BEB328B853F71267E3B3A08,
	CookieContainer_MergeUpdateCollections_m2DF45A2DA702AB04EFA265075198378B217A1E76,
	CookieContainer_GetCookieHeader_m56FF8245FC28A3C8583AE0EEE8CF43A081D5CAB3,
	CookieContainer_GetCookieHeader_m45B138BEAA391F95017893AF9F91241492EB2D74,
	CookieContainer__cctor_mEA85B5B5FBA76FD2AC91B1503B16B14E16A7477D,
	PathList__ctor_mE7C40201BD66EA2737CFC92FF7B94CF442444778,
	PathList_get_Count_mF95C0C66B73A66E8EDA9CFFB18CBE115712A37FF,
	PathList_get_Item_mB2E15B70CA415EF1497A3AF13486AF346D25CC27,
	PathList_GetEnumerator_mEB480CB2359B7EA7639EE292658F7AC5B17AE998,
	PathList_get_SyncRoot_m28F8BCEC0CDF4514A9E43BD1E57F1809732377E0,
	PathListComparer_System_Collections_IComparer_Compare_mBDBC7284F34175B446FBEC8FB6CB2BF19440300E,
	PathListComparer__ctor_mB454528A2D15B340AC86950FEEFF3A459DEC9ED7,
	PathListComparer__cctor_m5835CA5438E4F095C6C5179F7E6958D909417C47,
	FileWebRequest__ctor_m3BD0B632AAAA9A6314A48EAEA261D6C49A29CC87,
	FileWebRequest__ctor_m4D6FACD86407B7910DCB5708F13796534DE54DFD,
	FileWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m1DC998628B76190A2F606178371548237516B256,
	FileWebRequest_GetObjectData_mCCC968CB9501E785DDF897B35DCD0848931D1582,
	FileWebRequest_get_Aborted_m687CEE80919037332B61F2C449D9EBA8A4E7C587,
	FileWebRequest_get_ContentLength_mA585FBC6AA89C75AE2CA31B7772B6B79FF947BFB,
	FileWebRequest_get_Credentials_m8A2EDDBA7E744CA6BA1EC57FF9DA28334580E053,
	FileWebRequest_set_Credentials_m7B6AD7ACB7F546E44A457635B7D73DF60D250E95,
	FileWebRequest_get_Headers_mFB491D17A71A758854D553EDD83A64365E548AA9,
	FileWebRequest_get_Method_mEB2029DBA3586E382F337C61523373012C260946,
	FileWebRequest_set_Method_mE9043FE40042A93E8D14A467CE5A1ECB9C096D08,
	FileWebRequest_get_Proxy_mB26B794EEDD436C68591238269545CEE81676911,
	FileWebRequest_get_RequestUri_m14BCBE2D50BA7E262394DC971D84B3FD30E3D7D2,
	FileWebRequest_GetRequestStreamCallback_mDCB6B61A94DA789EFBFD85D837FE811FC4B839F8,
	FileWebRequest_GetResponseCallback_m08D402EDE533C5A0ED64A8CD469F3647C00D8BED,
	FileWebRequest_UnblockReader_m71733AFB64CCAE0043F76194EE532B48ADB3E955,
	FileWebRequest__cctor_m2FF4B6192F42060BFE9B6D793000967A2CE95DA7,
	FileWebRequestCreator__ctor_mC9309A7E8AEF2B32E4596F499FA2C1AFF26FCC8B,
	FileWebRequestCreator_Create_m4A009337FA6E4113EB05A0D9B8A68DC562F6CD11,
	FileWebStream__ctor_mAC5E31F61865C55A0BCB1EAB7CA5D6EB1E4E9536,
	FileWebStream__ctor_m5E2038F8FB3B8C052A66B461A4AEAD763EC72523,
	FileWebStream_Dispose_m3761A400830205DF54493ED2E0B5479ACE5E09D3,
	FileWebStream_System_Net_ICloseEx_CloseEx_mD34DB9FF876566D364B3AC2720DAA67BEFB5494F,
	FileWebStream_Read_m99E1D1597138ADD46D0546BD9C963F8EF4345D62,
	FileWebStream_Write_mAB0472EB14D00B4BA51EA364A99E051D2FA8F2E6,
	FileWebStream_BeginRead_mFF1D75843A5A82C1034547CC48968C8C05145ED7,
	FileWebStream_EndRead_m6C8AC6E7D6FB618390B27853BF32C70C0E6258E1,
	FileWebStream_BeginWrite_m5CDA5FF4DC3E9DBFD6FD4E091860247D3921A088,
	FileWebStream_EndWrite_m2A4EBAF99FA675BA834D20C7D23F1925A37510AF,
	FileWebStream_CheckError_m5373399E1C7A5036852A3495F5B3C04640BB0F51,
	FileWebResponse__ctor_m937A38D5CC20434EEC6F27DE580B8F7418FD6B46,
	FileWebResponse__ctor_m31F0F51C0F5CDCF773499E41FD29C002C230B483,
	FileWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m50547639BE9A06AF71C19D4F6E2B7C9DF3897DAC,
	FileWebResponse_GetObjectData_m62702AE7EAE842946B45BE26D5E492D9598FC920,
	FileWebResponse_Close_mA4570F39B91740DFF95E0050E9C13BC5C527FC84,
	FileWebResponse_System_Net_ICloseEx_CloseEx_mF5CE52E9F3E81C407E93786BAC6018B597C7DA00,
	NULL,
	NULL,
	NULL,
	WebProxy__ctor_m9DAD546F80ACD9479C786D5C66CF841B7D2F31E8,
	WebProxy__ctor_m88D1B551CA157B4190F7082F3496388DB41B892C,
	WebProxy_get_Credentials_m457E5BD941E4AEA6DB65859123F33B3C1614C68A,
	WebProxy_get_UseDefaultCredentials_m03D6385937D10D5E2B971852E81196FC1281CDC6,
	WebProxy_set_UseDefaultCredentials_mBD6A789873DFF09C584F1E1F78F2D286D6FA990C,
	WebProxy_GetProxy_m8FDE265E6B9973E022EA8970C9B1DAD0B2CCC25F,
	WebProxy_UpdateRegExList_mB499E94B5CB70B08BBFD2D9DA9EFC2B128CC26DD,
	WebProxy_IsMatchInBypassList_m065FB89DE3BC59171195D70D96B4D36733189226,
	WebProxy_IsLocal_m502074ED102B252CF88AF725230AA3FA2D97A21F,
	WebProxy_IsLocalInProxyHash_m7F46FAA47C841E1E0CD0127973C45EDD72DCFD7E,
	WebProxy_IsBypassed_m8F90EF89CB55CAE69CA92B25A737849F0C2B6449,
	WebProxy_IsBypassedManual_mB2A24F5F65C1D5E4C7F9312D09C6A6DB4A7B6F1E,
	WebProxy__ctor_m1C58101578A4CE7D939641C97BFD8E0203AD3F14,
	WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m55E9EC6188F26F2762C669DEB2BAFF297BB98787,
	WebProxy_GetObjectData_m6F158918E51572F668D8E13E4271E8A3D8C6E70E,
	WebProxy_get_ScriptEngine_mF28F919839AC16984BAF19EF7884DDADEC1186E4,
	WebProxy_CreateDefaultProxy_m2CE3F99857BF09FB68723652CAF3C1FC7BE3EAAC,
	WebProxy__ctor_m8A57A31FD52C935A1C493001DC32FC2F17166DD2,
	WebProxy_UnsafeUpdateFromRegistry_m520E026082667505E562985E6101A550DD59D0A0,
	WebProxy_GetProxyAuto_mF31E6F0E78FABA247E2FC4E69BF9EFD68F2ABF61,
	WebProxy_IsBypassedAuto_mE488794EEDC4F991CA1DE691217CD89F66C6BEF0,
	WebProxy_AreAllBypassed_m3C8E04934E4F6E328C3FE839EBD86BFDA2AB0245,
	WebProxy_ProxyUri_m145614BBA0FF5B539412FA91C9F8215E98DF0542,
	AutoWebProxyScriptEngine_GetProxies_m37C7A2CAEB8CD280B45518559965B518519D007F,
	AutoWebProxyScriptEngine_GetProxies_mE4E0E75E060B5347A17D354889CF1613F3A7FD19,
	SecureStringHelper_CreateString_m3FB0D27762C3424DD3C9DCC1BB647C8F2F786528,
	SecureStringHelper_CreateSecureString_mC09D746C7B8EB41AEE8C9AB8525FBCA7C3E63D1F,
	ServerCertValidationCallback__ctor_m74FA8CDC1C3AD2BAE782BFD55EC0AA62A18E7DE0,
	ServerCertValidationCallback_Callback_m70F2E0E1A3C556EFADA5F1AFC56B43A65E0E7FBD,
	ServerCertValidationCallback_Invoke_m88F7CC8E8BAE6F501FB49ECE5DC9026120DA3857,
	CallbackContext__ctor_mC3F2B967B65649E6A2FC12CC30EFDAA5631E1BAC,
	AuthenticationManager_EnsureModules_mC239A7262317E37634854CF88A801D8276961299,
	AuthenticationManager_Authenticate_m792A86EEA6DF3516B8538EA3DCF2D740735EEF79,
	AuthenticationManager_DoAuthenticate_m47085E3232A36C8A83BB2EB61E5075F2E3ACB69C,
	AuthenticationManager_PreAuthenticate_m5C036738DC30669FB5CC79CEFBA53AFC7411BA88,
	AuthenticationManager__cctor_m7F97917F51C5588A1BE7C13CCACAF7686A013A30,
	BasicClient_Authenticate_m37A62495D4778CACB7219A67BF608F918EEB86DF,
	BasicClient_GetBytes_m07771D492E2A4D3BBF58D7A9BB69E33BC5856D96,
	BasicClient_InternalAuthenticate_m5D6A6E1F6A34E5475140829CA1771CF96D19A0C8,
	BasicClient_PreAuthenticate_m7B6366BC72437E8FD1CC7CFEC6467923D47E7095,
	BasicClient_get_AuthenticationType_m69022B7CF8143DCE86B33E4AD445B87FBC35A5CF,
	BasicClient__ctor_mF4468AD89FE190EC24CB05F677D56F6F5CF845A6,
	BindIPEndPoint__ctor_m08EDDE8CB0B988B134F5F90C48D9216FCF2B63EF,
	BindIPEndPoint_Invoke_m8462120A7C738076E374FB6ADE447C611DBFD00C,
	BindIPEndPoint_BeginInvoke_m929603B81D5FA980FC3535AF6B976BFD1616D4CF,
	BindIPEndPoint_EndInvoke_m1042D77948C1BB2B26330419F43196C04BA65804,
	DigestHeaderParser__ctor_m2BB85BC3118799109DB82BC9936678FB70EB4645,
	DigestHeaderParser_get_Realm_m7A6C5539FEEBC93A89DCC2C70B08A690EB8DE78A,
	DigestHeaderParser_get_Opaque_mA478D6BB71ED1C541A8538B776E40BFD5E5F303A,
	DigestHeaderParser_get_Nonce_m0B098048A69B904101B59CF9BBFB7917830050F7,
	DigestHeaderParser_get_Algorithm_mAF999E60ED2FC710180152356C821E73C020E638,
	DigestHeaderParser_get_QOP_m84DDAC9875B39CCFD50358EB5F5DEB2E984FDCA1,
	DigestHeaderParser_Parse_m83B7E847A270531897CDB5C36F11C6651F81CEC2,
	DigestHeaderParser_SkipWhitespace_m3E8571723F22D5753DA67A15105049E73E0A691D,
	DigestHeaderParser_GetKey_m811A3CFB648DC4E9B189925DABC9FA23B9AE600F,
	DigestHeaderParser_GetKeywordAndValue_mFBE6BBF832C7C3FFF946F9E42BEE3967B870CE84,
	DigestHeaderParser__cctor_m630DB8E20C1EF4AAA4F7450DC40DDA017BC9D7B2,
	DigestSession__cctor_mBBB27D612FD5D3DD2C643FF2443A4CACF4A709FD,
	DigestSession__ctor_m86705710E06B01D8AB4E67E8678020B8F6D836F6,
	DigestSession_get_Algorithm_mB056CE436F92945C17599BACEB82CD26D764F9D2,
	DigestSession_get_Realm_mAEE41831F8979DD3A1A726F97996AD33AB9CB9BA,
	DigestSession_get_Nonce_mE32260516AF99A417D41D0901F7633D63238BF87,
	DigestSession_get_Opaque_m2733095B7E5AA77AE4FF0A8A6CB29CFC00D27A98,
	DigestSession_get_QOP_mCF3DEC57ED1ACF4A3CC232E5A833ECEB9CA1DD90,
	DigestSession_get_CNonce_mD1E4C92810555F46DEB48EF812F37BB838A4EB82,
	DigestSession_Parse_mA13096948231A1185C90302996A3C38583CF3191,
	DigestSession_HashToHexString_m3856DA5F4C2D59C1C5A9D2C57B53F52FAC75B51E,
	DigestSession_HA1_m81ACDD59D7D2F05C766EA0D6D7CD8AC79C7DAF70,
	DigestSession_HA2_mBA5886DE2F02B68737F8527DCFB4512C72D4F798,
	DigestSession_Response_mFE30BE7E7C54A8631861FEAA5A88BF672D6D7DD5,
	DigestSession_Authenticate_m642CC2119FACF39B82D56274E4756CD30030C72B,
	DigestSession_get_LastUse_mD8434D7BC1017CED5A88F3F08041B9D20F2C0C83,
	DigestClient_get_Cache_mE6DCE129979BA8F483D0398FD531C629C90E91D0,
	DigestClient_CheckExpired_m60DB3E4BB6456E9CAFC1B2DC284D2AB3E6B30A93,
	DigestClient_Authenticate_m20471A30D6015DACD842E48A8B2825CC74CE5FE7,
	DigestClient_PreAuthenticate_m04217A63BB9AFB52F6D531CBEE9527162A565E59,
	DigestClient_get_AuthenticationType_m8705CB83CDBE79516A939748C02A7BBA287035E3,
	DigestClient__ctor_m6EBFE2A034C1CDF5AB71D23C5A1FDFD10D5866D9,
	DigestClient__cctor_m876A8081D21A9F62614B6F41F3B20EEED3A75394,
	Dns_GetHostByName_internal_m2FB9C7ECE2D63FCA60EE2271AD0F6B6C171BFD93,
	Dns_GetHostByAddr_internal_m1C5730B561811F4E044F0A91AFEBA7EBC5EB914E,
	Dns_GetHostName_internal_mFE7E55E9069ED7F9ECEE9D8A89942FEE229451CC,
	Dns_Error_11001_m4413EE9D94F69A0B12302C4D021F15103A4C0D4A,
	Dns_hostent_to_IPHostEntry_m1D42E0B954F083D77C761D1D514F7AB1AA3258FC,
	Dns_GetHostByAddressFromString_mF14387E76D6C863F94F032677DC5EBE249E6ACCA,
	Dns_GetHostEntry_m251BB12504C0277A9CCD2B33C5C9979CFAB4F6AD,
	Dns_GetHostEntry_m4C094DDA3A6181386C24046D38B614E303919B5A,
	Dns_GetHostByName_m56DD7C1149C9931F93FFA8F2AC502B27ADACF6CE,
	Dns_GetHostName_m8BF02B75F8EF9723179339212805C5BAF5C4B706,
	FtpRequestCreator_Create_m5CA2D4FFF5B62CB6FCBBCB62603714EB3661160D,
	FtpRequestCreator__ctor_m67E38F5A154B50C28349321A03CA0A0A8BA1FC5A,
	FtpWebRequest__ctor_m1C444C1A347BC343DFA3743C7091F6C15DB57388,
	FtpWebRequest_GetMustImplement_m80DCA4097BA11ADC9A146EDB6D276535E5D34731,
	FtpWebRequest_get_ContentLength_mC0864B24B266291A0DC7CB0179E7A216FB2F8E77,
	FtpWebRequest_get_Credentials_m4562A764D967DA73F11711833F06B4BFB32DFCF8,
	FtpWebRequest_set_Credentials_mD60889B866FAD82DAFF21F11AB30142DAACF91BF,
	FtpWebRequest_get_Headers_mD4CCE8D9AD6D7A15F516E1D3FC471C6EEBF5F1A9,
	FtpWebRequest_get_Method_m596EDFD05C78F95770BE2B5496DD5056850B6580,
	FtpWebRequest_set_Method_mB762BC2E64BF39D2B978AC50866DC0AE4B92D054,
	FtpWebRequest_get_Proxy_mD80014A0EE0F6029C4BD8C2F2864C8891D409693,
	FtpWebRequest_get_RequestUri_mB45728128F16A8037A923B5353E8B6855B9CC265,
	FtpWebRequest_get_State_m34CC17F0FC097BC81296D0C7B58CFF5ED713FDB2,
	FtpWebRequest_CheckRequestStarted_mCE9B6182FC2F9813667EF4BFC4A23BCA56AF1297,
	FtpWebRequest__cctor_m61115DB699C0D49B03AD48FF1CC0ECA86C74F9EC,
	HttpRequestCreator__ctor_m06C2AEB34BE1C386F12AFEA48D7F330E429653BE,
	HttpRequestCreator_Create_m8B42C3EE0D53119899DDEF28D227EF203932AFCD,
	HttpWebRequest__cctor_m5A396A851E86B56F55849BFFE08528A1483D59C8,
	HttpWebRequest__ctor_m34F4D99DEAEB2ABDA7B321DE9D934E2AFFE7ED87,
	HttpWebRequest__ctor_m37FE79885E818FA7A4BB502CC00F216A40C759CF,
	HttpWebRequest_ResetAuthorization_mB46C878D3130CF8EF4BB6547E17554A0DB49A56C,
	HttpWebRequest_get_Address_m8B4240A8AD46F12716B28F8549750BA30D2E368B,
	HttpWebRequest_get_InternalAllowBuffering_m6447C59856EA745F81D89B8BF10443D6DA1C5396,
	HttpWebRequest_get_MethodWithBuffer_mDFB58A016AEF0EA84BA2EF5F07F582B23D9FC035,
	HttpWebRequest_get_TlsProvider_m522A745ADDE50C0F25D25A366E35A9DB0D4DE281,
	HttpWebRequest_get_TlsSettings_mD57C8AFBCF00FD71E557AE9F87A1765BC4AF720A,
	HttpWebRequest_get_ClientCertificates_m500DFD3C22558CD2AE72FD46DBCB100897182AD5,
	HttpWebRequest_get_ContentLength_m153682CF433EEA898201F39005C0C49E2EFC011D,
	HttpWebRequest_set_InternalContentLength_m83D835628EA18F9C6C453F108BAA772E0AF19C13,
	HttpWebRequest_set_ThrowOnError_mAAE39F767EF8CE4BA64472DD870F8116C0F306AA,
	HttpWebRequest_get_Credentials_mAD678DD9458AE9AD92B40C52C488C1FCC0FF1083,
	HttpWebRequest_set_Credentials_mBF9584583D3341B305161654AD79D9B16CE5894D,
	HttpWebRequest_get_Headers_m2BFF4F7AD7602BFD3F0A3A8981B8BE743558220E,
	HttpWebRequest_get_Host_m4BE36083497FB8F5B7F317A1C097C0BCBE993533,
	HttpWebRequest_get_KeepAlive_mFCE6EAEB969B0519309095AF291907CA714D85E9,
	HttpWebRequest_get_ReadWriteTimeout_mFEC5FFC4F714670AD8CBF7D7191AB38C1C1465F1,
	HttpWebRequest_get_Method_m959D0808BFBE779B78B94445AD825689FAF2C12A,
	HttpWebRequest_set_Method_m5A27BF0559BFF8E1D1E25133E7138FC41B3D6CE4,
	HttpWebRequest_get_ProtocolVersion_m782143F502A32DD7BCA0F1C1810BBE181986F6CD,
	HttpWebRequest_get_Proxy_mE1831C8332A00D2D8FBDB8103EBAA114D6C66936,
	HttpWebRequest_get_RequestUri_m26CBEF035713103C4B27E32C0B0A08B4F43AC4C9,
	HttpWebRequest_get_SendChunked_m8E640766CDE7A99AA19F42DD4F1A0A4A19074776,
	HttpWebRequest_get_ServicePoint_m87CA558F0C7B4A6D585F42616771173F75DE2567,
	HttpWebRequest_get_ServicePointNoLock_mAB6BB5851482B6EA1FFB3943897D7B9399795B13,
	HttpWebRequest_get_UnsafeAuthenticatedConnectionSharing_m1AB8D793FB4FC146D1656CFAC2EF24EF26BC48F6,
	HttpWebRequest_get_ExpectContinue_m86E7F74975F7E4B1CD45F78C054B21B7B8B65966,
	HttpWebRequest_set_ExpectContinue_mE358227A4289083DD0E5E40E836D060C3B9B87A8,
	HttpWebRequest_get_AuthUri_m73CE601DCC9A4F368AEA6186CDC4FFBA20D3A11A,
	HttpWebRequest_get_ProxyQuery_m5AC4ED79E30E2253BE5508B87805592B4FD2F1F5,
	HttpWebRequest_get_ServerCertValidationCallback_mC40F344BFA88D34DBD794CDB8BD0B8A5F5D78AA6,
	HttpWebRequest_GetServicePoint_m380927C1AF6310F83D8BD1B578B9B7B06AB32A3A,
	NULL,
	HttpWebRequest_FlattenException_mF89FAFEB483D313C297FF23D4F30445BE126BE8D,
	HttpWebRequest_CreateRequestAbortedException_m5ADF0586581A200AB3F80DC50A107A39167B4E4A,
	HttpWebRequest_set_FinishedReading_m3135DD65D0B7A8C656EC84F0ED2CFFEF611E79F4,
	HttpWebRequest_get_Aborted_m3818067645E7BF5CC50320409AD3E0946F580257,
	HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m3B43B7FA26F335B661343C4686CBAC6D4B00727B,
	HttpWebRequest_GetObjectData_mA0387A42ACDA0C1DCA5B0BBC62C17D57E5D19222,
	HttpWebRequest_DoContinueDelegate_m7F1D38124E3281C3054D6F8D864DFC624A322A1B,
	HttpWebRequest_GetHeaders_m3D09D15A7A2D66D84942B9601893C60F6A9EF332,
	HttpWebRequest_DoPreAuthenticate_mA75D8713BEB89C84A5FEF0A7740B3499F508A7AA,
	HttpWebRequest_GetRequestHeaders_m3B6049DA9BBF3C0010212922C6E7082EEBE13214,
	HttpWebRequest__ctor_mA8D0231158E0A31839FDBCF3A4058E12233CC0CA,
	AuthorizationState_get_NtlmAuthState_mFEDD4ECDE8761AD54175DBBD0EA53C45CD545998,
	AuthorizationState__ctor_m33AFDC1A78F1C2709F58ADE60766E6DB40B23108,
	AuthorizationState_ToString_m7A5CA8DDE1302D55B5F3B1F75A5D79387EFF0531,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	HttpWebResponse__ctor_m3F9E2DF361A0722B9F30B117E62E3E33791BB234,
	HttpWebResponse__ctor_m78E52EFA7B83C71D4A05D35788FD495A8B3DD365,
	HttpWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m4C33A83D045A76BC62389EF98F11890DFC8F6518,
	HttpWebResponse_GetObjectData_mB2AEB91E14CBF3166D437CA1200A3A720F577EF7,
	HttpWebResponse_Close_mFB0945D078A0A64605BD0F5BAB6620105EF416F2,
	HttpWebResponse_System_IDisposable_Dispose_mEAD8612F73D2CAD6D24A996F52B908876B17D09D,
	HttpWebResponse_Dispose_m9115A5C7DF7C2A1C916FCBC2A4E9DAF3DF29E86F,
	HttpWebResponse__ctor_mD26DA915B4BE34BFB9112EBA6E8725B31480BC2A,
	IPv6AddressFormatter__ctor_mEEFF87906A194838D6E4A31AB724A28808E539E5,
	IPv6AddressFormatter_SwapUShort_m422438633F4CADBE0EAB77D23AD3334FD01ACEC6,
	IPv6AddressFormatter_AsIPv4Int_m875CCBC60A506A331C9D591D5A88D49EBB6730E7,
	IPv6AddressFormatter_IsIPv4Compatible_m769BBFB4FBB844EC8AB61A635495A7F2925FDD99,
	IPv6AddressFormatter_IsIPv4Mapped_m46AE9AECC6E77E6A53ACBF60BEF336D45FF236DB,
	IPv6AddressFormatter_ToString_m5FB0F927F3B0BAA521BC92562A7F5A78460023DC,
	MonoChunkStream__ctor_m0983391DA1D85F1C99A7156057AC9B4391C80D5A,
	MonoChunkStream__ctor_mD2D5FA0ACB85A6CC731CB9C793339E507A6C8AE0,
	MonoChunkStream_ResetBuffer_m1378860F1775891DFFD8783EA7D51D9D1EB757AF,
	MonoChunkStream_WriteAndReadBack_mE6CB867432CBBB655C866E139C16A7FFBD53E45A,
	MonoChunkStream_Read_m43A4085433F66530A42EF59AAB3A0D51E6E5891A,
	MonoChunkStream_ReadFromChunks_m37D5FAEAFECA57D507F64766999D57A95EEA0D2A,
	MonoChunkStream_Write_m137C8C8D13524480B95A13C03AD732BAA179ACDF,
	MonoChunkStream_InternalWrite_m5470C15DE29BA1C8DB49A76C55CDF15F964FE34F,
	MonoChunkStream_get_WantMore_m83CC3A4E18F848C35EF9853D7E2FB49A329B8127,
	MonoChunkStream_get_DataAvailable_mA4A5DF49C69DA98965B564B7EF510D8B17E4D6DE,
	MonoChunkStream_get_ChunkLeft_m5E5FD7651D4CD801F84B2C5FE6DC0953AA332E45,
	MonoChunkStream_ReadBody_mA94E7D8EB2AA23BDF0C5C23175BC98B2CBE2DCCB,
	MonoChunkStream_GetChunkSize_m6C80D3EEFADE084F993AAAFF2CA0F2DC494446C4,
	MonoChunkStream_RemoveChunkExtension_m5EE5C7814ED62003E69A3116DAA16785BC282D88,
	MonoChunkStream_ReadCRLF_m0A00BE1B5479D26A93C6FC1ED5250C30A194C708,
	MonoChunkStream_ReadTrailer_m5F9E21734592996F66F8BDDBF66D7AC9F4A90C1E,
	MonoChunkStream_ThrowProtocolViolation_m086C92CCA578AC0C769B91A7554E23C595A49B8C,
	Chunk__ctor_m85D8BE6C05ACCD31D613F2EC44FC12000795C95D,
	Chunk_Read_mD196D23B6CCE13436E9654D5690B120A27D767F9,
	NtlmClient__ctor_m42061F6AD56B23AB8052A7B2536ADDD16C65ACFC,
	NtlmClient_Authenticate_m8818860DA0F138939D885CAA1D32ACECE1325A18,
	NtlmClient_PreAuthenticate_mF922EE3871ECE8A42FF525F839E257132E101735,
	NtlmClient_get_AuthenticationType_m7245279ADF0745AAE487D87553B6CAFAC4F3F84E,
	ServicePoint__ctor_m68B4C7FBD836706798BA6882BC351F539A430C6C,
	ServicePoint_get_Scheduler_mFDC8AD0EE145AD1BE39037D2BA8DA21F2280A3C8,
	ServicePoint_get_Address_mBBF6879649652FA3923191FF1A01421D289971A6,
	ServicePoint_get_ConnectionLimit_mDF34A9CA341979EF0E5A547DC0E3281BBBEE72FF,
	ServicePoint_get_ProtocolVersion_mDF830FA6C47525790E2FE8E4733F4903AE13C018,
	ServicePoint_set_Expect100Continue_m53E393E64BE40AC205CF5458DCC98E806D0432B2,
	ServicePoint_get_UseNagleAlgorithm_m241DCE7C589DD8B22FD614C5C43ADF409C2B79A1,
	ServicePoint_set_UseNagleAlgorithm_m93F74ADD6C2BE19F9342BE092EF8723F56503913,
	ServicePoint_get_SendContinue_m0708B1804863BCECDFE5FB7A5120B15530087704,
	ServicePoint_set_SendContinue_m084B169EDBF37E2B2CC592DF68EB9BB17D3B844E,
	ServicePoint_SetTcpKeepAlive_m4B4392E54144159027C38EC7FCC12F2C09E7A3CF,
	ServicePoint_KeepAliveSetup_m2C79E00554F3F7705FF0F8A65FA48467CAFF982E,
	ServicePoint_PutBytes_m39B4ACFA04B973B0D7F0D583C113927D11AD56D2,
	ServicePoint_get_UsesProxy_mE6CE550E4DFEB85A673160DE35CD67AFA87F35BD,
	ServicePoint_set_UsesProxy_m25BFB4CE73283597C98A748B231D1A544469F618,
	ServicePoint_get_UseConnect_m33B1EC23452734FFED85B21F9439A546BFBD3CC7,
	ServicePoint_set_UseConnect_mCFAF7E07504140EEE0E81D5805CFF727575FF5F5,
	ServicePoint_get_HasTimedOut_m98E74D21739FAE910D22C4E883EC10F6E5A7AECD,
	ServicePoint_get_HostEntry_mC952C74930BB4A989F0214DF0FA34104D9D9C975,
	ServicePoint_SetVersion_m576E03D8F45F8F971C6833C19733A02F8738A85D,
	ServicePoint_CloseConnectionGroup_m7F719EB61DB4231C9880F748A80CE29F333866B7,
	ServicePoint_UpdateServerCertificate_m8F8352188BACC259F5D00F3D9044E3E7F2707E29,
	ServicePoint_UpdateClientCertificate_m27EB596CD61A50592B853BC653D613E71B0DBFC2,
	ServicePoint_CallEndPointDelegate_mD2D6A04E2C8D485E4BE66BE8376123108FE76C98,
	ServicePointManager__cctor_m50BC6D64E46BCE67FD6065634A0DA67B2C11CF4B,
	ServicePointManager_GetLegacyCertificatePolicy_m256D5E7267BA12980E8FD08B6BE2FCBC24FDEA0A,
	ServicePointManager_get_CheckCertificateRevocationList_m203838432389534693B3A26FA5599FC8B11C553F,
	ServicePointManager_get_DnsRefreshTimeout_m569D92DE295D0A02310C9D9D3FC69D2DB923411C,
	ServicePointManager_get_SecurityProtocol_mA87F568AD38F44B15CC49A3BFB8CE6F7296F6B73,
	ServicePointManager_get_ServerCertValidationCallback_mB359AF486C997D8390BE6B660058A87AA177A922,
	ServicePointManager_FindServicePoint_m109F6EB5F2E4E9C818FC341CABC1716C2A460586,
	ServicePointManager_CloseConnectionGroup_m3C3C0E78CF3612E0C5B5276019C083160423C9AC,
	SPKey__ctor_m7AF193EB533D8A77BE1BDD2643F966AC74232A29,
	SPKey_get_UsesProxy_mA0DD3C141991BEB3D229681C0565265A535A3420,
	SPKey_GetHashCode_mBD2D23E92D57E75D4598BD7B8D0322115CA34A79,
	SPKey_Equals_m3977A8EB90832AADC4305E87083CAE9E167D60FF,
	ServicePointScheduler_get_ServicePoint_mF440822AB131B3EEC0ED34FAF58A173F47774455,
	ServicePointScheduler_get_MaxIdleTime_m1D0BA49F4201E52CDB01C5A64A75A6453FB88015,
	ServicePointScheduler_get_ConnectionLimit_mFA140DF59CD0283939163B2380C59D4BE3872754,
	ServicePointScheduler__ctor_m5246987112698FC9A296CC7E8DAA276B57FD6F4A,
	ServicePointScheduler_Run_m6993E53C1386472568740C6EF61B9CA3BAB9F5B2,
	ServicePointScheduler_StartScheduler_mB84355F0B426E7485884B22D8489086CBD5BEC4D,
	ServicePointScheduler_Cleanup_mDEBD36E43A6B6EF3D2E02DE12C4F9F2BD6069DD7,
	ServicePointScheduler_RunSchedulerIteration_mF8FF1C803F8C31BBD95C016F7862B95C229262FA,
	ServicePointScheduler_OperationCompleted_m07EA04EA89B065DBC78166FCE78C41A9A822FD89,
	ServicePointScheduler_CloseIdleConnection_m3F00DC3AB2FDE618B4E6D7C452A8B6920975C402,
	ServicePointScheduler_SchedulerIteration_m09BB05B64AAF878CD1E22F5A5107762804C1AE72,
	ServicePointScheduler_RemoveOperation_mBFF45695A7E59C36658B11EC8AF0661B8D753E9B,
	ServicePointScheduler_RemoveIdleConnection_mBB6ED958ED6E7AB69373E7A44BAFC251E5771A3C,
	ServicePointScheduler_CloseConnectionGroup_m064DFEAC40E3720EDE620A9421607FDCCD43D9C8,
	ServicePointScheduler_OnConnectionCreated_mD0A50FB19C9750E9DD7FAB7F981668C22C574E0C,
	ServicePointScheduler_OnConnectionClosed_mA6BB8634BACB62DB319925D2185F41B714D61E2B,
	ConnectionGroup_get_Scheduler_m8012DB808E35E47F35126B04A242D0D8229B39CE,
	ConnectionGroup__ctor_m5FA4DC16552C8ADBBADA4FEEB54C620EC1175D80,
	ConnectionGroup_IsEmpty_m8D7C9EAB72B30685EDBE422B33A2DDBED318D33A,
	ConnectionGroup_RemoveConnection_m2DB1E959C60D52E10266593CD01E4E280933A52B,
	ConnectionGroup_Cleanup_m3C54610DE85C7272D7FED7718775A57A114BB0B4,
	ConnectionGroup_Close_mBACBE8457184B2116837AC9B17647CE96B77BB3E,
	ConnectionGroup_GetNextOperation_m79D857F3FF78911472BA5E51C900E3D8F605F0F5,
	ConnectionGroup_FindIdleConnection_m2C56016D1A7E50870583722A662B9265CD789408,
	ConnectionGroup_CreateOrReuseConnection_m8DFC2633DB095A0A4ABD21E116F22A3538C0BAB0,
	AsyncManualResetEvent_WaitAsync_m4EDD2148C5267ED376B280B6F4DFF4BF69FA22C6,
	AsyncManualResetEvent_Set_m4AEDC2FB8A878F5A11EAE3FC7C5B079747FA784C,
	AsyncManualResetEvent_Reset_mBFDA18F6778C6FF3C063C7A654B455AE56E5E700,
	AsyncManualResetEvent__ctor_mED23C9E7D9E4B6862CF7CA2D9A8A6DD0F1346D5C,
	U3CWaitAsyncU3Ed__3_MoveNext_m428DB5C25D7D3C5A49B633CC57DAE67364954991,
	U3CWaitAsyncU3Ed__3_SetStateMachine_mEE49EA25DC1D5E3CB662895B6AB0B9F46B69407D,
	U3CU3Ec__cctor_mDF074FAF7DCA143BFC6A7650BE9BE6BBC4F05BE7,
	U3CU3Ec__ctor_m33CB0ED421096418F623E21D1843F088ECAE8907,
	U3CU3Ec_U3CSetU3Eb__4_0_m51E1DA417A30BA042DE7A4DA249E0C13FB7E32BD,
	U3CStartSchedulerU3Ed__32_MoveNext_mC6A5B9A6CEC241C35FE884E5BC146E0A70F842F9,
	U3CStartSchedulerU3Ed__32_SetStateMachine_m6E6AD3B8F6F9C698E2DBDABE9509B996912776EA,
	WebCompletionSource__ctor_m2A71326ABA55C07D5EA8267C2746590294275593,
	WebCompletionSource_TrySetCompleted_m3309212E1375436FC131FE3A308EF6ADDD7C6D9C,
	WebCompletionSource_TrySetException_m66055FAA927F564063E03FB9042E9CA12572EF7F,
	WebCompletionSource_WaitForCompletion_mE44E2AFE7DF56A09C9D208E2A9168E76A946A04F,
	Result_get_State_m80C22BC38574CD9EEF1472407DB2B4A161D394BF,
	Result_get_Error_mDEE233A641B3E25CF17DF07D1D7B0422CD7596F6,
	Result__ctor_m5EBD4EC3AF04E1D9B8040B7843A3E437EC65750B,
	U3CWaitForCompletionU3Ed__8_MoveNext_mA0F027CBAA61B6802847BB9D325430EEA11C8E60,
	U3CWaitForCompletionU3Ed__8_SetStateMachine_m5D0F913DDCA50C9B1B83F88935AC73979DF0E2A2,
	WebConnection_get_ServicePoint_mCE5198DBA6F6B5CBBBDBC69F92603F13808718AA,
	WebConnection__ctor_mFFAA483E69218E65200C643A2095A595D9968CE8,
	WebConnection_CanReuse_m203E69E5B17211F763E7F595DAF62E9D46DC0115,
	WebConnection_CheckReusable_mCC8C152746B12DC585ADB1776738A1A86E9ED61A,
	WebConnection_Connect_mCE66B423A5AFE83348B84FEFA910042A846E716E,
	WebConnection_CreateStream_m20D2534A6E340FBA00F51B1750F1CC1BF6E380B7,
	WebConnection_InitConnection_m0E4F499BD31EC5857B4969A37C4F974836BAAC66,
	WebConnection_GetException_m3E4BAC5752566D577DE2F9F8DF97EA2A8AA58BCC,
	WebConnection_ReadLine_m88B3E3DF9C79D2139637C3F66B98BDD074336EB4,
	WebConnection_CanReuseConnection_mD6794DC4EC2B49BE9132C04428D612A4AB273585,
	WebConnection_PrepareSharingNtlm_mDFC0D4AF832F37C18489DC39523EEBB79DFA9CE9,
	WebConnection_Reset_m6E4DE2B11C92A3D9E0E39334FCA592210FC5B365,
	WebConnection_Close_m933CA0D7F0035240D065F46E1AE785FD63B0B39B,
	WebConnection_CloseSocket_m44529A19D180D276A0E8CCC37214EFDA79531066,
	WebConnection_get_Closed_m57695E3E21A470771ACC4BB51F7D458A3AF11C38,
	WebConnection_get_IdleSince_m438D8EDBBCBED80A50DBA68157524071A8821996,
	WebConnection_StartOperation_m46E0625E6DEC4774038C14E26E6A01D27B3795A0,
	WebConnection_Continue_m536451B677626949F6EFB3DAFF0ADC7435A398AE,
	WebConnection_Dispose_m2963FD55969DF8CD444BF8F474BDDB47CC3F9131,
	WebConnection_Dispose_mBEE3F492227683C724016592F03F4C7F596EE2D9,
	WebConnection_ResetNtlm_mA795AAB8FC79C964C57037A2B4B6FDDBEA528F86,
	WebConnection_get_NtlmAuthenticated_mAB6DD673F61C1EF4D987F5E96012F692DB74B4EF,
	WebConnection_get_NtlmCredential_m7B7C31595CB77DF9BD65A61E37EBDDF0CF2F4157,
	WebConnection_get_UnsafeAuthenticatedConnectionSharing_mB5EED9A1BDADE240F089B75E4C0324DBC76443ED,
	U3CConnectU3Ed__16_MoveNext_mEB63217D6C098F196308214C489160EADCE4B41E,
	U3CConnectU3Ed__16_SetStateMachine_mB2CCC51319916425CFB8E8A932D947461DBB10A7,
	U3CCreateStreamU3Ed__18_MoveNext_m3FB7E2688C0A60D5555D4413F840ED7199FC9354,
	U3CCreateStreamU3Ed__18_SetStateMachine_m4EFABF7CC601609A1FE4622F7E7CA5324E70EE79,
	U3CInitConnectionU3Ed__19_MoveNext_m396689491D2B75E51FFE763D6D3E7A69DE744EFA,
	U3CInitConnectionU3Ed__19_SetStateMachine_m8D2B4707FC7E89FAA0C45018CD7C681D36430EFF,
	WebConnectionStream__ctor_mF872041D2E74EF24E21E3E972B333D6AFCD7DE45,
	WebConnectionStream_get_Request_m31D1A8BD789373DC74A6ACED727E3A46A972BA0B,
	WebConnectionStream_get_Connection_m24DACC6F27A46E8201E23C10F3A4CB322136F546,
	WebConnectionStream_get_Operation_mD926B0BCCEBE04C640DE920C22736C109E95FF27,
	WebConnectionStream_get_ServicePoint_m45B010E6F46DD10EC0085D2A755192F7953AF7FE,
	WebConnectionStream_get_InnerStream_mBDB28CD345C11AF699A2FC0BB23A8BE5344C2392,
	WebConnectionStream_get_ReadTimeout_m2F9FBB43610D9D1CCB3845AAA3D1C8173C585E98,
	WebConnectionStream_set_ReadTimeout_m3FFA3C522E4D32F6A95DBB25DE8D5A7AF157BF81,
	WebConnectionStream_get_WriteTimeout_mA9C97020355F23605DB65D3B4DA00580293A9E08,
	WebConnectionStream_GetException_m6DBCD22930C9FA85C7AA7657B14C7EEB2AFF7C4E,
	WebConnectionStream_Read_mABF6F6F51B242007D4E222D759E21D29E5D34211,
	WebConnectionStream_BeginRead_m314763D5FB54B42A4053EAFC9B2370EBDA260A34,
	WebConnectionStream_EndRead_m18BF8FEE05E2E535C6575E534788EE7EE3209A8C,
	WebConnectionStream_BeginWrite_m3DD2EEE593B2B833A38C558767A3B079DA5D1266,
	WebConnectionStream_EndWrite_m3DC8BB5F128078BEB717DBD95DB226359553F7E0,
	WebConnectionStream_Write_mF986800AF0DCF76B493AE2DF5C42A6A74EB0CE22,
	WebConnectionStream_Flush_m950DB4413290E81E173DCBEC9AB1068C4A30A1BC,
	NULL,
	WebConnectionStream_Close_m0E9E2A45F334F3FE35BC1AC3863C4B920E8CB19F,
	WebConnectionStream_Seek_mF86E40521CE458F7161B44E7F331B300074628B4,
	WebConnectionStream_SetLength_m119DE8046585F7A57C8BEA6FE89B7168193AC9D3,
	WebConnectionStream_get_CanSeek_mD13C72C871EAC22402CB5B230C2CB9D99CE61F2C,
	WebConnectionStream_get_Position_m6D7E6A53CF48C45093266ADE7FC889D681705F57,
	WebConnectionStream_set_Position_m6F7F1305688B252546E7E0A141F22A30C1BB7F70,
	WebConnectionTunnel_get_Request_m854755E223BC5C5FEC995DD70CA49A5E2E70A81D,
	WebConnectionTunnel_get_ConnectUri_mC562A52AB02C3E2A7CDF1F574E64F23C945FF65E,
	WebConnectionTunnel__ctor_mC4DA6196816E67A27BB9E0D05B92960E1CC914BE,
	WebConnectionTunnel_get_Success_m7D4CBF6B2B89A355C4650F4533BAE0EB9A40A028,
	WebConnectionTunnel_set_Success_m4DBAE18418878E7BAE23417DF199871597CF6DA0,
	WebConnectionTunnel_get_CloseConnection_m818F371F6680BC85D1193700D8D97D1D753D09EF,
	WebConnectionTunnel_set_CloseConnection_m1CA93DB72BCD1912FECC83507EC7EFAF0E4D5AAE,
	WebConnectionTunnel_get_StatusCode_mFEBBA957B2EEEAA041D1C3BF9363FC2F72F2C465,
	WebConnectionTunnel_set_StatusCode_m9773B3003125B64DA4122CEE4EB4B43FC2514D44,
	WebConnectionTunnel_set_StatusDescription_m61A753CB6A4A4AB1A283B76DA66C578C007967AB,
	WebConnectionTunnel_get_Challenge_m3B90F15016F2390A72371CA10CCCEC6FA5B8891A,
	WebConnectionTunnel_set_Challenge_mD2DDCD2B2E315CCBE10BFEA2AC0BC8D8BE38068B,
	WebConnectionTunnel_get_Headers_m2685D5B1926DE9771F73F46BDC0FB7FEBA1A97B7,
	WebConnectionTunnel_set_Headers_m296EDB675AA79A87230997F6F5B4B02815B8683B,
	WebConnectionTunnel_get_ProxyVersion_m4417818E7B7FF62884A20FA98177532E4AF16585,
	WebConnectionTunnel_set_ProxyVersion_m3ED06ACF064AEAE2C7870F017EE940A1F5DEE4EE,
	WebConnectionTunnel_get_Data_mFD592CF9B58AD5FF3CB7255DE5270ABD5DA32AF9,
	WebConnectionTunnel_set_Data_mFEB1673B3C2B406186148507DE986203E5716912,
	WebConnectionTunnel_Initialize_m4E47AAC422AE06CF9A9F9D602047CBD9F8C545DC,
	WebConnectionTunnel_ReadHeaders_mBA6E3DC30DD1C20E3504DA642E595709E85B5472,
	WebConnectionTunnel_FlushContents_m7CB35C06C7F996D39D36453BBC07311A06C51453,
	U3CInitializeU3Ed__42_MoveNext_mA878653739B7D35EC6FA983C454ADB1E2EDE7198,
	U3CInitializeU3Ed__42_SetStateMachine_mC32D06832DAC6E6C66B575E7F3731A07522F7E7B,
	U3CReadHeadersU3Ed__43_MoveNext_m66807FF7B720D84756A57A9E1D93E4F451028F0A,
	U3CReadHeadersU3Ed__43_SetStateMachine_mD5271A894FEAB056FF0A3A0CA031CCF07D2783FE,
	WebOperation_get_Request_mB1091077143B80719FE649110A15F70911582271,
	WebOperation_get_Connection_m5BA0B37AA90173084BA428974AB4AABE79E19909,
	WebOperation_set_Connection_m09AC5A801D5ABABB7AF0B1E83B7FB2951D5E9973,
	WebOperation_set_ServicePoint_mB572C9555AAA1AB3C15CAE4438FB39960B46373F,
	WebOperation_get_WriteBuffer_m2EED632D91930EABBF02755727B684A045C7C338,
	WebOperation_get_IsNtlmChallenge_m1B1673DE65412A409E3EEBFC4060CAEC20B21AA0,
	WebOperation_get_Aborted_mE8B5B917AA2928AD1D2927847AF43DB001BA5FA1,
	WebOperation_get_Closed_m75D88AC99B9DAC041F17209FFFDFD32271E5D7F5,
	WebOperation_Abort_mE41B80D197393221CB1360218916ACF5AA549241,
	WebOperation_Close_m84A73B14EB08BC1E6B9BD9568224DC0E8658B3B4,
	WebOperation_SetCanceled_mE8C97926BDA6F197FDB5CE6558346FC3E880586F,
	WebOperation_SetError_m91725330B5ECC9C50B5FE0A7B0182E7E336D7543,
	WebOperation_SetDisposed_m9323D7A6B873E04DF0DB866B4090933E9CBC6DC5,
	WebOperation_ThrowIfDisposed_m8D3588C44D204F9F74E2CCCE68154895773012A8,
	WebOperation_ThrowIfClosedOrDisposed_m6673240688C90C5AECCBDB0B25F32630B9BA6484,
	WebOperation_ThrowIfClosedOrDisposed_m60B0575848144EA9E85C4DD21C06C003C6808658,
	WebOperation_ThrowDisposed_mD4E027DAB28AF12E62B81C1C28AF385C0AED9BD5,
	WebOperation_RegisterRequest_mAC10611260AAF14B2D6D59693AAFE49F5D215C81,
	WebOperation_WaitForCompletion_mEEA70E037226C713250AD0B867C013E9DC57E0CE,
	WebOperation_Run_m3046F6EBFDEB99E5365E5B993942FD55D4326B9F,
	WebOperation_FinishReading_m1A0419E854997271164EBF7A87FA60AC4C77630C,
	WebOperation_CompleteRequestWritten_m9E77048701E7E20C0966C26557EC65C498DBBF4D,
	WebOperation_CompleteResponseRead_m2B7B659DD2152E9743269047312830E3A3A99CE3,
	WebOperation_U3CRegisterRequestU3Eb__46_0_mFB2A01901574B5B53353630C9A9F2098A2CC85A6,
	U3CWaitForCompletionU3Ed__53_MoveNext_mC81A3A0933F623954DB9275F08521DE6994C84D7,
	U3CWaitForCompletionU3Ed__53_SetStateMachine_m040F93A7A42E248867F85E97AA7E2C4320545B2F,
	U3CRunU3Ed__54_MoveNext_m210E7A06384CC4F743FCE9492711BC6117A10B8D,
	U3CRunU3Ed__54_SetStateMachine_m971F8C7DD243CCCBDF6C26AF71D0EF7CBBC9E43F,
	U3CFinishReadingU3Ed__55_MoveNext_m8B454DF74AA31F352E4D71E14461AC683CCE5E6C,
	U3CFinishReadingU3Ed__55_SetStateMachine_m927A312EBE065922167728DA0930608F1A2E009D,
	WebRequestStream__ctor_m1E4762CA320DE5AAA3072859DDE4638FF9D6D256,
	WebRequestStream_get_KeepAlive_m768D5DBEF1F75A8A4FD093C67756806817E461BC,
	WebRequestStream_get_Length_mE0BE891F37B7A01051A476DEB02410E25269CAC1,
	WebRequestStream_get_CanRead_mDEE66AEEED304703B9B6E3D82E4B012301FA0258,
	WebRequestStream_get_CanWrite_m2464E693E4527D40C9739DB641705A64C3B845C5,
	WebRequestStream_get_HasWriteBuffer_mA3E4AC0B0D72FDA2D8302ABEC5537AECAE9E3FE2,
	WebRequestStream_get_WriteBufferLength_m7273B48C66EA74818498EA8B0A27BFC9E6DA81D8,
	WebRequestStream_GetWriteBuffer_m1DFC67A5EA52C446730DAEF5594B2EB729E52B73,
	WebRequestStream_FinishWriting_mFF7BB10C3B179C0B8469F65AF536261A8873FB0B,
	WebRequestStream_WriteAsync_mD21F06BE5B33576334C72814E7E0515136AA6E40,
	WebRequestStream_ProcessWrite_mCEACCFB38FB8F3C26A2718F8F0C74D6E6D05D450,
	WebRequestStream_CheckWriteOverflow_m889FAFB4E76D3F3DD7A6E1C660DAA9E1A64BA92C,
	WebRequestStream_Initialize_m9AB5AF89B32E4A734277F14CFB22D528B2A4C693,
	WebRequestStream_SetHeadersAsync_m6E054C44427066ECB892E300ADCCF77FA0B65576,
	WebRequestStream_WriteRequestAsync_mD55858804426CFBBBD287C4321DEFBC04381D955,
	WebRequestStream_WriteChunkTrailer_inner_mB9ACA2F04A6C7024581EEEF25FAA2CC9F1593466,
	WebRequestStream_WriteChunkTrailer_mF59A176F276BB50EE987FFE8BAE5B128CA77DE1C,
	WebRequestStream_KillBuffer_m7C1E8F89D4C6325E8AD36F3C6B009318E6C20980,
	WebRequestStream_ReadAsync_mC17F1F32C533E01DFE1946C80193348386FDD2C3,
	WebRequestStream_Close_internal_mDF8B37843D6CA69182DC02F7C001AC763D119435,
	WebRequestStream__cctor_mB544F0E5CDFA1B2317464C4DA79F09E5681B36ED,
	U3CFinishWritingU3Ed__30_MoveNext_m522142884C6AFC833AD0853853C82CC9CD9E7640,
	U3CFinishWritingU3Ed__30_SetStateMachine_m6E9B7917343EB1C33D6093342284C03110F9F40C,
	U3CWriteAsyncU3Ed__31_MoveNext_mE07D8D1AD16CBA6048010B85CDF041D8216D37D1,
	U3CWriteAsyncU3Ed__31_SetStateMachine_m8E588C911260D17ABD0AF8CF57BD5DE4E9951C92,
	U3CProcessWriteU3Ed__32_MoveNext_mE7F133DD2645BB01545545074EF827412948B662,
	U3CProcessWriteU3Ed__32_SetStateMachine_mCF8F144818C8E2F3E7F6F138805708B5704329C6,
	U3CInitializeU3Ed__34_MoveNext_m87CFB94091EE7D19C8BBD9ED129BC52E8A142C0E,
	U3CInitializeU3Ed__34_SetStateMachine_m6F9997F624BCE5FB0A3C19C7ECBD2DAE6F567157,
	U3CSetHeadersAsyncU3Ed__35_MoveNext_m5AAA8EE190A8C526FCE9C2136A475CBD005647FB,
	U3CSetHeadersAsyncU3Ed__35_SetStateMachine_m91F3E2057AC4865493B9D0A6D2DC56C1F99FE4D7,
	U3CWriteRequestAsyncU3Ed__36_MoveNext_m3477695B7BE13EE4A72D517FC57275B93304FEDB,
	U3CWriteRequestAsyncU3Ed__36_SetStateMachine_m2507D0217F5B2222BC4E3C5A6D2A7006A8B4915B,
	U3CWriteChunkTrailer_innerU3Ed__37_MoveNext_m787FA052DBF18A7F46C2F28EE08ED905C63FDCDD,
	U3CWriteChunkTrailer_innerU3Ed__37_SetStateMachine_m9E290ADA4A330860919E42BDC86A7E4815B869B6,
	U3CWriteChunkTrailerU3Ed__38_MoveNext_m417D51A5680BA19B0AD0C200F93DAE44DE1B6D82,
	U3CWriteChunkTrailerU3Ed__38_SetStateMachine_mD188F0271511AEEE15639673CF2EE7D0B77A68FF,
	WebResponseStream_get_RequestStream_mEAC92D301B0FCC7519397FD5B4122E130BFE4413,
	WebResponseStream_get_Headers_mA7D647A682410D694CC962C67D38EEA488C4A9A3,
	WebResponseStream_set_Headers_m6951809BC68459A5E93590F6CA8831C8364C6D35,
	WebResponseStream_get_StatusCode_m837CED65B650A68F08F672C9B4FF3A074CE06B94,
	WebResponseStream_set_StatusCode_m344C2490038B83A09DF02292150286B5F79D25B7,
	WebResponseStream_set_StatusDescription_m34658F195C1956277CF260E42F90281D1635C2CC,
	WebResponseStream_get_Version_m4BBC5EA52F6A9B3FF1EA288ED90E97F17E593356,
	WebResponseStream_set_Version_m72EEE603839655709B1631CCBF4B4A611F20A7C8,
	WebResponseStream_get_KeepAlive_mA5D60A2B11B32695537D0B117F6A88780F2F3129,
	WebResponseStream_set_KeepAlive_m99646E88AC62918196EF76051F276DB871168FEF,
	WebResponseStream__ctor_m0BAC3E13A246CBB0A36B7DC53941C6C270DF1C3B,
	WebResponseStream_get_Length_mA1D47A5FF33341965CBA2545BCA38E409B43B6BE,
	WebResponseStream_get_CanRead_m005D1440411CC48616DB1AA75240CAFBC5EFD4DF,
	WebResponseStream_get_CanWrite_m58281836D5DAFC46ED4F5FFF338E1806603B8ABC,
	WebResponseStream_get_ChunkedRead_mA8BA2D5C7ABA1ED2FC2582CC1C0245AFB2B53A1D,
	WebResponseStream_set_ChunkedRead_m0C07657582071F1DB3548C0C573F817E177C12E2,
	WebResponseStream_get_ChunkStream_m41121A312D404D2755C053AE10EEA75D0322E230,
	WebResponseStream_set_ChunkStream_m476BC1EF1184C69DA6017EE6768B3E5205A8EDC4,
	WebResponseStream_ReadAsync_m0CF4AC206B44FF9ECB6968BBEBD4BA2A6237BCEB,
	WebResponseStream_ProcessRead_m5F1E63E38495BF39090517B074D93D2A498A0CD9,
	WebResponseStream_InnerReadAsync_mF9E73DCB18B268A205C95B53C9D416F5E35D4884,
	WebResponseStream_EnsureReadAsync_mABC1178EEDDD6B79EB2A462CE9B54F85BB9275BD,
	WebResponseStream_CheckAuthHeader_m48837BB7D4DCD8ADC557451298F3C86AA32CF719,
	WebResponseStream_IsNtlmAuth_mB82855DE15357323D65EF46E80A6F350B4F09FD9,
	WebResponseStream_get_ExpectContent_m38071D64A4DF19D2F486F695FF9ED77EDA8343A8,
	WebResponseStream_Initialize_m17AB32A6806B128F1B3BEAFBF139E78F79971899,
	WebResponseStream_ReadAllAsync_m9FE18AD758116A3DF8BFF50772D4A22AC0055B1A,
	WebResponseStream_WriteAsync_mD43FBFA125976AC71302A501385A459EC30B306A,
	WebResponseStream_Close_internal_m7FBA54B660C2D07A7598E088B2748984996B3C71,
	WebResponseStream_GetReadException_m80701579A74C568DAA903BDCACC10B429140CE7A,
	WebResponseStream_InitReadAsync_mF1CBB4A0729C6BF3DD6C02F088CC5E2A11838750,
	WebResponseStream_GetResponse_m49683B937EF4A90B2E8C43CEC439260809C2DDB9,
	U3CU3Ec__DisplayClass48_0__ctor_m3447721E2745A5C9BE3D784D864C74C452360039,
	U3CU3Ec__DisplayClass48_0_U3CReadAsyncU3Eb__0_mB934112FF09A00740DDB288784335322994E1A2A,
	U3CU3Ec__DisplayClass48_0_U3CReadAsyncU3Eb__1_m658C4F1F07AD671D65CFB20E7814E8AB63585340,
	U3CReadAsyncU3Ed__48_MoveNext_mB4A60C8C7BB4AF56B780F85926C561C5807DCE06,
	U3CReadAsyncU3Ed__48_SetStateMachine_m58B2F63A13E7EFC239A32B6AB9A60D491513B4DE,
	U3CProcessReadU3Ed__49_MoveNext_mB72FF90C92F35FF051CB9E9EC8F64C38321C976B,
	U3CProcessReadU3Ed__49_SetStateMachine_mD3CC965225487D75406604D438790F01E548C658,
	U3CInnerReadAsyncU3Ed__50_MoveNext_m45CB1C220854EAC0B9B299F3DEDDC2AD57EC4E20,
	U3CInnerReadAsyncU3Ed__50_SetStateMachine_m7782CBEBA56C7B21E57E24C75B712ADE8B5F5888,
	U3CEnsureReadAsyncU3Ed__51_MoveNext_m5F5FD3A07EB45D9EFEE6715981EE954B69AC2E4B,
	U3CEnsureReadAsyncU3Ed__51_SetStateMachine_mA8F68B170D9187F7430AA7EB9E5A3BFB9481A3C6,
	U3CInitializeU3Ed__56_MoveNext_mB6A59995320329B5D86E8F4BDE2E77A2817FE667,
	U3CInitializeU3Ed__56_SetStateMachine_mD354F897FFD078B3C872B614172812143496A96F,
	U3CReadAllAsyncU3Ed__57_MoveNext_m4622AA6E5B32E06EF6A03EE34C0D3DF5D1BCA077,
	U3CReadAllAsyncU3Ed__57_SetStateMachine_mFD1C3562CD2C91EE95511C7737CCFF4140FD30AF,
	U3CInitReadAsyncU3Ed__61_MoveNext_mE77187E2C77E27D5FB47377BFDA7019F5E8DC774,
	U3CInitReadAsyncU3Ed__61_SetStateMachine_m872F40B1403B745442B5E0A385B40FF2A1E79A6D,
	MailAddress__ctor_m2F793AE87F1B3142BB2D02BD2BC31CEBE620654F,
	MailAddress__ctor_mE9CD11F14E82D6CCA68EC5C4C7D94C5C133AFE76,
	MailAddress__ctor_m64FD6665EF2FF7818254C6834DF073B989963674,
	MailAddress_ParseAddress_m8DD55F68D58730E11DD1A1C2ADA858B9DEBAEA88,
	MailAddress_get_Address_m174B765275209BFCFF3FE803274AABDB21B3EA04,
	MailAddress_get_DisplayName_mECD9F743E0CB217CAD7172595C5C8C5560C42875,
	MailAddress_Equals_mB9B7A535A362A831D4CB4AEB5B09F93830869CF6,
	MailAddress_GetHashCode_m7801DF2557684DB80A1BCB5D1C5971F3049F3D05,
	MailAddress_ToString_m7A44E2C336D030456012610B4D3F6BF23F5CF6BD,
	MailAddress_CreateFormatException_mE1564D9FEF16A3CD15B6D77732AE3F869705F67D,
	SocketException_WSAGetLastError_internal_m99F586D3C14E2051DBB53BEF3716A740EA9223E2,
	SocketException__ctor_mA4FA4C30962B1DD852904297C47EB05A9C97B7F9,
	SocketException__ctor_m2C4A0F01041E34F5CD85223333FDC23158250E4D,
	SocketException__ctor_m4AA74DE46D28204456EFCCBBC5ACC841DA2941EF,
	SocketException__ctor_m8625815C7AFB0F3BF9287520D8F64A69199D6DCA,
	SocketException__ctor_m59175465D17AE63C1E18A1B25D80AD41708A51B5,
	SocketException_get_Message_mAC33600C2CC211D3C5C6363DAE3A843FD3E366EE,
	SocketException_get_SocketErrorCode_m05A48632F6CC75FBD904E8E1AC56FC6B2577A131,
	LingerOption__ctor_m939C73C595D32F9A58592AC9FD8D66924C48E51A,
	LingerOption_set_Enabled_m3F544534413C4239E4A0A6D39AE8FF28EEF04207,
	LingerOption_set_LingerTime_m4BF89E47E5A4D261B800DD00A8B73DA7EE719C37,
	NetworkStream__ctor_mA1CC20301CE577D0D971E02452956141D21E2F48,
	NetworkStream_get_InternalSocket_m0F71D9478B11DF5AE9ADC8BD7F56B315B53F6F4B,
	NetworkStream_get_CanRead_m18372499A3E8644ED054E324BBA2EDE1F2C0CA82,
	NetworkStream_get_CanSeek_mF793B58986D542FC7310AC8933A3C26309919BCE,
	NetworkStream_get_CanWrite_mDAE8A9686A2B56E688133B8DC2E94976B16AA2CD,
	NetworkStream_get_ReadTimeout_m3601F6C548B89001D44C0D87C0A2701D5DD63433,
	NetworkStream_set_ReadTimeout_m4CA42D36C1A6081EB6CDD305AF47C5987D84951C,
	NetworkStream_get_WriteTimeout_m9EA5F1B0F6654F3522ED9A90092F73B4AADD7BC4,
	NetworkStream_get_Length_mBC8427DF08F60DECB0627E20F5A561102A33F089,
	NetworkStream_get_Position_mEA82AACE1AD0E58FEC0AE134A56D64FF7A071F9A,
	NetworkStream_set_Position_m80106F320BDA2FB13B11A93D302CE72A95859999,
	NetworkStream_Seek_m7933D6E7EE305143454CDABFD5F512BCDE204CE0,
	NetworkStream_InitNetworkStream_m2DB75A504D6CD4BE407683A11E2A37F93B1DFF52,
	NetworkStream_Read_m519A834DAB398C347321493E82E7AB823EABEF36,
	NetworkStream_Write_mA36470E3CEDC327EC179649541ABBBE1DB294F4C,
	NetworkStream_Dispose_mB2BCF75273D7AE5D5417E9B02E6630B5CCBCBD97,
	NetworkStream_Finalize_m67A14B9689E9E9775841BFA59A272347FAC5D40E,
	NetworkStream_BeginRead_m237864822EAB5EA9D8221CA37B141C38E035A896,
	NetworkStream_EndRead_mDCD08C532B8346555DD2D31850D15C8A900ECEF5,
	NetworkStream_BeginWrite_m260304D17C2BAFBCF1601F8479DF20E3618AA9DE,
	NetworkStream_EndWrite_mE66E13187FAEFE8DBB41C5A8F5BE7D7BC3686E73,
	NetworkStream_Flush_m29FFA75A5BE746CF8BA1381B48D4963ED38E0288,
	NetworkStream_FlushAsync_m6DFDF1F76CD42E35082C1FE71012B3F9363A55D7,
	NetworkStream_SetLength_mAB9261955C29DC6346EDDC2351B793C7F797D8CD,
	NetworkStream_SetSocketTimeoutOption_m9E73C579315BEB79DB9870FF3297E088D2897230,
	Socket__ctor_m5A4B335AEC1450ABE31CF1151F3F5A93D9D0280C,
	Socket_get_SupportsIPv4_m67DD850142E442FBE3FF1546CBF469BBF369209F,
	Socket_get_OSSupportsIPv4_mD2DA5FDCC675E30E930FC063C7DE0FD52D05C133,
	Socket_get_SupportsIPv6_m26553C4F27984C90CFDD3307C799B5EB2CD7F737,
	Socket_get_OSSupportsIPv6_mA6770B91BF46256850B2F2E09058B86538051728,
	Socket_get_Handle_m90AE88992BB1B1BF82E680402CEB56A0EB10FFD4,
	Socket_get_AddressFamily_m390B53FAAF0DFF8E8BE844F83AFB06D9E53D891B,
	Socket_get_SocketType_m59C57C96B6DBA839FAFBB649491A059082D5D6F5,
	Socket_get_ProtocolType_m01D6FD7559F27913038834E519A4A54B81039644,
	Socket_set_DontFragment_m12EFF1A7E7239447C5D8EBF54D7A43508CD8FC24,
	Socket_get_DualMode_mD01944E72CD2FA47B9AA7DC1748BD9C4AE22835E,
	Socket_set_DualMode_mAFC0E6235283469EF1DB58C56262202A9009CFFD,
	Socket_get_IsDualMode_m79CF98B9280D1A062087666B96A4D81C349EF9A1,
	Socket_Send_mB925DA11E47BB9772EDFC0DDFEE238EB3A1F98B5,
	Socket_Send_mF70EF17396CEA161F628B1923DA32463720D9A1E,
	Socket_Receive_mA08EE1F9A870791CECAAC2FA2D4144ACBA6B4962,
	Socket_Receive_m6D95774528C89ED4777791E8EFC84ADFCD255A48,
	Socket_IOControl_m2EF49352CCC97BBE1CA1E5577DE03A7A56CF5962,
	Socket_SetIPProtectionLevel_m4E9FDB46A681CF2DA3FE641B417479815F9BBA0C,
	Socket_BeginSend_mFB97AF214E7F82B0B38434F844DA755AF18E612C,
	Socket_EndSend_mE56C2A95C12655CA7C3C6690382FC48B7E9AA45C,
	Socket_BeginReceive_mE0B06265B8AFC35DADCA4184D6C8B8A062BCDE73,
	Socket_EndReceive_m46B15199B81401BF6B7B76242C6E3A7E8156749C,
	Socket_get_InternalSyncObject_mA1850942FB6DD6B737EB52AE8A455F9EB25028C6,
	Socket_get_CleanedUp_m74D2A5015FB338E942B827B5AD89A618C51EFA35,
	Socket_InitializeSockets_mE96516F52998F0D40A0BF13CB75A0051024C6330,
	Socket_Dispose_mF84769B30DECB4A1F3AFE68C2A82D2787D8695C1,
	Socket_Finalize_m2458A278B8DCA5B016DD41B50272FC85D8A332E4,
	Socket_InternalShutdown_mDA3F1ED617847E781AA826C43A833E7C978FD850,
	Socket_SetSocketOption_m82AF3404BDE49D13BE5860C622D484AA52F1DD3B,
	Socket__ctor_m8F2A88DD5CDD8D8B6715A4F74E3C29092245B091,
	Socket_SocketDefaults_m39FA910B28B5CF8833C6D363E343A43D45540F4F,
	Socket_Socket_internal_m686934059A2E5662CAB726E58C13EE6EB9283B00,
	Socket_get_Blocking_m808720CD768833CF2EB6F7F8AA462115AA3A1F8B,
	Socket_set_Blocking_m5DCBD637AD0FE63E9A67C1763C91A58799A314E2,
	Socket_Blocking_internal_m651020D7329C77EDE7E34B92478FE29417DE7F85,
	Socket_Blocking_internal_m4923453CF6D97A5B481B675E8048713908DF201F,
	Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0,
	Socket_set_NoDelay_m34DCB8BF5275A85E1687308D0D016E860F229732,
	Socket_Poll_m82012C326974DCA0B8C57A98E68C3E099D52BF7C,
	Socket_Poll_internal_m78737EA3ADB65C574765F0907534A1457B36D5AD,
	Socket_Poll_internal_m4C3040D41623EAF0C67D3A3B8306308A5BBFB090,
	Socket_Accept_m376D8FD43D18B427EBED5419F80E79D1ADDF9BE2,
	Socket_Accept_mA2B3B144CB4E2F28C4A3F5CE449C0069FE6FF88B,
	Socket_EndAccept_mA0518AD160E86C2728B2E4C8E1D2A7BC69E2595A,
	Socket_EndAccept_mCED29DC1DB5BC10309535B190B35DDF704668ABC,
	Socket_Accept_internal_m5150EA5D5E87751768538CA412FEEC8832164CF2,
	Socket_Accept_internal_mCF896B6CC0448D86DC4C2A90669C14366F520AAA,
	Socket_Bind_m4DFEFA3F8C6E95586D02BCF311D8A1D5A449B217,
	Socket_Bind_internal_mDDA24FCED45C4C2CE9198F9E5D7635DAB14FED0E,
	Socket_Bind_internal_m2E1D2983E359325F577799A715E4EAD60FCD9A1E,
	Socket_BeginConnect_m6B71DEA09A833155BBF391D25DC81C404FE5B3EF,
	Socket_BeginMConnect_m3570016DCEEB2EF4E34F873633B9149B368E103B,
	Socket_BeginSConnect_mFD5889EA6A3ACA8423741598F766C920067AE899,
	Socket_EndConnect_mC014DB766DCF93646536008F55692BE9143797E6,
	Socket_Connect_internal_mDF5F0AC13C860A8B1B7D430E9747DD075D3E098F,
	Socket_Connect_internal_m4947904CE00106D5D008099EF27809BF504B9CE3,
	Socket_Disconnect_m088E558DFF8B6640DE5D3F041504F15D0C1DB957,
	Socket_EndDisconnect_mE208E9EFF47D1921E6BAD57B94FC5F8BCE53D058,
	Socket_Disconnect_internal_m5BFD115DED7ED6735C6ADDD6A6944B96089152EF,
	Socket_Disconnect_internal_m4F0F16E5E30A61DCE40BE255EAB656CEAD4E2D75,
	Socket_Receive_mD8C41C5E04F7A9AEAA8E9D7534970F50918427BF,
	Socket_Receive_m7D07ECE91DA04210066EB6E373376817E0A024F1,
	Socket_BeginReceive_m7AFA3F22DAD771579F060D344EA1B44C3F55C912,
	Socket_EndReceive_mBD6A39DBD9C6D68BB28A2F6A9364BF2BC48CFEBA,
	Socket_Receive_internal_mE9F36174DA5F7B4CEE0E682EDD9ECA4A92827479,
	Socket_Receive_internal_mACBB4D49BA2AA03BABFB64D4EAF6ADD4F9B99116,
	Socket_Receive_internal_m32C732F35B8F7E49A511F750F37CA2A488FDC7EB,
	Socket_Receive_internal_mA045268E2A2A8548562FB4D652262B2AF242CA8E,
	Socket_ReceiveFrom_mAFA99FB7487A2216312D4510E530BB9F5A4CD54B,
	Socket_EndReceiveFrom_mBEAC67D399907A222678833B24E20FFFDF0DDC17,
	Socket_ReceiveFrom_internal_mB857796A233063A7771FCB31AAB68A689409E670,
	Socket_ReceiveFrom_internal_m689AA7188B819800D065F7F82BC8DD525BD19776,
	Socket_Send_mF1AF06B447E1671097A0515BD6170DB92368E8D5,
	Socket_Send_m77328B1F3378D0C5B40B15C01FA2226257B706AE,
	Socket_BeginSend_mE51B200464A077562C33CBEE5421A7F18CA198D8,
	Socket_BeginSendCallback_mCC42F20496AC0BB4DD9178C0C26D23ACC36DF864,
	Socket_EndSend_m1D4BCE94C7D318281B9A4D24A99B14B0E66AC160,
	Socket_Send_internal_m0B94FEA48E7CA8BD01699DBD4A624C7A1AA7005F,
	Socket_Send_internal_mE78CA6C457332ABC047C04BAE46BAE149E19EC84,
	Socket_Send_internal_m0A9A6ADE648F99CB7C43F2C97ECF75143B1932EA,
	Socket_Send_internal_m1BEC7CBA4A4284807DD126A07B02265B6190FAF2,
	Socket_EndSendTo_m63F470B7483CED77F2DA2FD46FE93A460743CB08,
	Socket_GetSocketOption_m58A866C87F4B09F2A8C3DA71635C8DA17836520D,
	Socket_GetSocketOption_obj_internal_mC30B3F69E41421FAF4D97C59DC965A753DFADD76,
	Socket_GetSocketOption_obj_internal_mA2DDFEEDA1CFF19D37FC035C64988F0DBB96713B,
	Socket_SetSocketOption_m6034478D182424029DA43CB526EC578E22C4A467,
	Socket_SetSocketOption_internal_mCB596BAD15C14A0371CF076DA6EF32E8EC1CCF82,
	Socket_SetSocketOption_internal_mED7F49F19689979DC57B9AAAF4F19BB2B834909B,
	Socket_IOControl_mEF60AD4FE7242DEF5BC2A1E05E7DCFF2F3F4B7FE,
	Socket_IOControl_internal_m4A3062113A417D02E0B2B19CAE9F57704DE6B138,
	Socket_IOControl_internal_mA914CFD7D33C32B7ADCF876AF13FB2AF534A88D9,
	Socket_Close_m24AB78F5DAC1C39BB7FFB30A9620B2B07E01DEEB,
	Socket_Close_mEC9B67F2F0E51F7FBB9D6BC9F630AD52DF7D0E65,
	Socket_Close_internal_mCE4CEF71FFC367E0EB7C8F3A04DCDC9C3BF2F7FB,
	Socket_Shutdown_internal_mC7E8605C1D943E24EE2C36B9DF12885FB32ED104,
	Socket_Shutdown_internal_m406B2CD6BA7AF7BC444D381AB24568EFB3DB4DD3,
	Socket_Dispose_m361195497638D3D2C1E22B9D6EE4A6E45F1CF0C3,
	Socket_Linger_m635016CAB436DE0FA43CAA80AA5C8EE90225F06A,
	Socket_ThrowIfDisposedAndClosed_m5EC422888FC9986F6994A0C0180BCB39407F7894,
	Socket_ThrowIfBufferNull_mCE5DE853E71FD065E5D5415BAFEDB84CA261DAD3,
	Socket_ThrowIfBufferOutOfRange_m571DD069DDC7952B1EB907941F3C202054BBE6FF,
	Socket_ThrowIfUdp_m7F28AFD15A102E911AEE9B08125794162C2A26F8,
	Socket_ValidateEndIAsyncResult_m8463696F3CAF01ED5982FF8200C6A53D60C33628,
	Socket_QueueIOSelectorJob_mED926AA0CA86E558C83A306AFC0FC5F918E36327,
	Socket_RemapIPEndPoint_m940DF8512A590EE50576782DFCAAAC9DF8F3E06C,
	Socket_cancel_blocking_socket_operation_mA08ED08AF219F3D8FE676F352C1E4D5522AD004B,
	Socket_get_FamilyHint_m69658ED9A2D589A6C3083ADD822FBFFC7308B7D3,
	Socket_IsProtocolSupported_internal_mF7C406BEB9464C29CF1C02FD64E21F99A8A5DC08,
	Socket_IsProtocolSupported_m00854C9BD8BCFA6D116271C9F7476B838503640E,
	Socket__cctor_m8A2CFCF4EA9CBF355A63C2C6033F4D4614DB255F,
	U3CU3Ec__cctor_mDF6E201F47D1C23C5B29B1275A14FA45690B4EDC,
	U3CU3Ec__ctor_m43A057DFDD32EA28F00A12E2C2173145A13BDAF4,
	U3CU3Ec_U3CBeginSendU3Eb__242_0_m0011A7F1D6DCE1CC6714C2C4C67C905DA9159F5C,
	U3CU3Ec_U3C_cctorU3Eb__310_0_mC396B5BE2E142AD692FF33127270DA83F37E0FE7,
	U3CU3Ec_U3C_cctorU3Eb__310_1_m7141ABFB7A612D6C3FF7E1A08A388E9EF6686545,
	U3CU3Ec_U3C_cctorU3Eb__310_2_m110EFFDCB2927C59A7775F44598CF7213F8954D8,
	U3CU3Ec_U3C_cctorU3Eb__310_3_m53FD854140025D3A18E08649002588BD32120704,
	U3CU3Ec_U3C_cctorU3Eb__310_4_mF00A4741487F488E2C391D880F02CE350654AF03,
	U3CU3Ec_U3C_cctorU3Eb__310_5_mC153E4B02FC0BFDB1DD45C6A2B449C2191B14418,
	U3CU3Ec_U3C_cctorU3Eb__310_6_m87420A4E7F247C0C96EDABEB5E832CB1C27FA543,
	U3CU3Ec_U3C_cctorU3Eb__310_7_mF1815DC25AFF7063E376A6C012D899081EF669F8,
	U3CU3Ec_U3C_cctorU3Eb__310_8_m84E0BF807680AEBCD2B8EB613649E1A09F40BBE9,
	U3CU3Ec_U3C_cctorU3Eb__310_9_m80BDF0261BB58674DFD34CD5CE86DC044A6D3D0D,
	U3CU3Ec_U3C_cctorU3Eb__310_10_mA283D32575140AE2DC68609AFF4D9271235EA443,
	U3CU3Ec_U3C_cctorU3Eb__310_11_m800E1188E230A39EEF26795BFCD3D1452CD57D66,
	U3CU3Ec_U3C_cctorU3Eb__310_12_mC3F90036D059B2B8698420B56F024B1635A88F8B,
	U3CU3Ec_U3C_cctorU3Eb__310_13_m2FD5CE753231103645670195A724C97E3E10F06E,
	U3CU3Ec_U3C_cctorU3Eb__310_14_m53E1DB314E0C51DAE16463286BD922CB0A207D90,
	U3CU3Ec__DisplayClass243_0__ctor_m5F03E623DD7362E05C09E3ABB8C803F171217FCB,
	U3CU3Ec__DisplayClass243_0_U3CBeginSendCallbackU3Eb__0_mCE9408390F94237D14C6BA83630E34F2DCA56860,
	U3CU3Ec__DisplayClass299_0__ctor_mA2004E88EE9AC6E49EE6A5701BA464ED976A0ED4,
	U3CU3Ec__DisplayClass299_0_U3CQueueIOSelectorJobU3Eb__0_mD066C2DF490C722A0CD2B048F1B7031BA5E502D9,
	SafeSocketHandle__ctor_m98BFBB207C9D8D7750DEA3598051D21FFE784967,
	SafeSocketHandle_ReleaseHandle_m93408D5088C512A7BFF7C6CA7D5857645C17BDFF,
	SafeSocketHandle_RegisterForBlockingSyscall_m7033111DA7B1012B9C4155D892EED598876C2AB3,
	SafeSocketHandle_UnRegisterForBlockingSyscall_m283CE3E82686E5FC7999EDD609DF74A48652D4B3,
	SafeSocketHandle__cctor_m6B3628F406C5D3BE77C23BBC29E5AE25FA0E0EF8,
	SocketAsyncEventArgs_get_AcceptSocket_m6119FCE739596BD55C2847460DC69ADB285070A7,
	SocketAsyncEventArgs_set_AcceptSocket_mA34A6E97F2B00232A1F453219EA6C03487D529A5,
	SocketAsyncEventArgs_set_BytesTransferred_m99F956EB9B4A7FAD4632FA07BBF4451DFD0F764C,
	SocketAsyncEventArgs_set_SocketError_mE909DB5DBC90065720B35ACB8B382DA175976533,
	SocketAsyncEventArgs_Dispose_m75C974426B784853880FD3146091228ABBD0CE06,
	SocketAsyncEventArgs_Dispose_m3DBF8461B4A792A6DEDF567964587CCEA75AFA63,
	SocketAsyncEventArgs_Complete_m94BBD1E035C5474D203D0E8CEDDE6A32BA61E061,
	SocketAsyncEventArgs_OnCompleted_mF7B3732D2A22625740B14BFCE38F8D6A6E5B66AF,
	SocketAsyncResult_get_Handle_m0A9F83AD4D06B5E31F63012A1A4557FB48940C44,
	SocketAsyncResult__ctor_mF4024A1E5EAD56E00839672EED0126EC34FD9917,
	SocketAsyncResult_get_ErrorCode_m56F156B7C525AF9947C56C76A8B2D0B4E545AD69,
	SocketAsyncResult_CheckIfThrowDelayedException_m5ED469CF2CCFD1E9B2A5621769B8CB27AB89DE45,
	SocketAsyncResult_CompleteDisposed_m0E0A213265679C08CF3B5230F54E6F8801BD91E6,
	SocketAsyncResult_Complete_m236141DBFB1E4B892296B548DDBCB2C04829D194,
	SocketAsyncResult_Complete_m7A55E54CBF74652E5784D34402B88CAB8A18601A,
	SocketAsyncResult_Complete_m266C10BA9EEF57EC12B411F13B207C638F8762A9,
	SocketAsyncResult_Complete_m44E31D06CAA7D0EFE0A7BB6EA24ADDB14EA625AC,
	SocketAsyncResult_Complete_mF68A29EEF8843248D56B583C4CCD9C1549F99DAA,
	SocketAsyncResult_Complete_mBFBFEECE8C3B6D2D456B607A9D7AB9889ECA8F27,
	SocketAsyncResult_Complete_m1D85BF6ED9479FB410132CD3C93F57AB507D4745,
	U3CU3Ec__cctor_m0BA2FADDF44F04C0C4DECA6414D64974F0C407AB,
	U3CU3Ec__ctor_m087776B9BEE00F1A315C08CB888C7F2875461366,
	U3CU3Ec_U3CCompleteU3Eb__27_0_m5C293AC939107CF4960BBA8DFBA174438C2BD359,
	SocketTaskExtensions_ConnectAsync_mDAE40065605C3E87DC988D068950BC6A1369F7AE,
	U3CU3Ec__cctor_mB303933D81099AD771B3F1E8558D25F174CF8DA2,
	U3CU3Ec__ctor_m558DBFC7DE97B807FC4E9BCE033319019BC0011A,
	U3CU3Ec_U3CConnectAsyncU3Eb__2_0_m890E38E6D21BFD282C9EFE2C438C3A03430CE73A,
	U3CU3Ec_U3CConnectAsyncU3Eb__2_1_m948646F5555AA4227728846C1F004F54B2372CDB,
	AuthenticatedStream__ctor_mDE77A28CCC056362108DCDE9345EE3F6D73AF509,
	AuthenticatedStream_get_InnerStream_m11C037DEE34B2DD870301D499BEE69ECED787D7A,
	AuthenticatedStream_Dispose_m922381D0775D8A14FF01E106A47EAEF318EA982E,
	NULL,
	RemoteCertificateValidationCallback__ctor_mDBCF893D0A540CB506F5547807525625F5CBA4C4,
	RemoteCertificateValidationCallback_Invoke_m30A34C33A46909FAA60703A2EFF0C41F6E7B6C14,
	RemoteCertificateValidationCallback_BeginInvoke_m8A150C819EE51BD2913E80CFD149D3A8B9DD9930,
	RemoteCertificateValidationCallback_EndInvoke_mD94E71A429600B4EAC95128CBAEBB19C97C054F5,
	LocalCertSelectionCallback__ctor_mE564871B196549FDEA64C011A4AA00339FA0281F,
	LocalCertSelectionCallback_Invoke_m2869B1DB69FB6390DB8035B41C0594762111D484,
	LocalCertSelectionCallback_BeginInvoke_m860EA4273F9EFFF06603F25C69326ABE2DA8CD96,
	LocalCertSelectionCallback_EndInvoke_m79DC5879439F10FC1D1C00A060C455733D7F321A,
	SslStream_get_Impl_m64EA7C2820C426A13C1693A9E66770A3F986CF86,
	SslStream__ctor_m56CC1EA5A22E27B0197C181B2DB6EC6A14755DED,
	SslStream_CreateMonoSslStream_mC44C66BC4FD97898823C5E961D3D1E4714B1FE5D,
	SslStream_get_IsAuthenticated_mAD584FEC93A19120F7B58BDE60B2F2EC5080AECC,
	SslStream_get_CanSeek_m79ABDB979F4BD2DA6960377372915E4A6671ECFF,
	SslStream_get_CanRead_mDD4E9CE7362511A86D9EE1841B1CD01D4E8B2110,
	SslStream_get_CanWrite_m54CDDD4975C00A8958FB5F964455BC2D80491E6B,
	SslStream_get_ReadTimeout_m80D9E2BC61ED8F7FD09ADD72F6230832F8278EBE,
	SslStream_set_ReadTimeout_m8257041DC22D4EF54E40C0B5340FF73BBE626FC3,
	SslStream_get_WriteTimeout_m4193223FDCD4829DB30CFB0AA8B25ECEC677EBB3,
	SslStream_get_Length_mC22DDE456AF82253D85AACBF718ABBF12EBE13A3,
	SslStream_get_Position_mF09FAC98E3C9691EE539B99217F003D1471E2898,
	SslStream_set_Position_m558CCA3D97D354DFBE766CBECED122A7B81CCA41,
	SslStream_SetLength_m8392E5F9F4229EC24BF0EE8CDAEEBDC76F486994,
	SslStream_Seek_m826A9CA3B804E1AEBA6758228B02E01CA99B5579,
	SslStream_FlushAsync_m0664E67F609D253559B69242C9DFF9D697151325,
	SslStream_Flush_m28F1C2BA3489D896FCBF3057A81AFD06CE232BBB,
	SslStream_CheckDisposed_mCDA5D6100C3F568C250F904B6936DEB91E5250C3,
	SslStream_Dispose_m789C2C9F9B5B3B48112E28F053926C9145CEDAE4,
	SslStream_Read_m8418B257262567DD7684F2EEB334DE25C884088C,
	SslStream_Write_mE0B830147A53EEF0E64C3DE127612048A30D0180,
	SslStream_BeginRead_mA6DFC30593CDEDED30C6E6A1F84EFF21726C5F25,
	SslStream_EndRead_mB340F9EE92BB425D4D169D0E7FA5CEFC208627FD,
	SslStream_BeginWrite_m78AAF68A712CC60F2F29FF7D478FEE2CA99CF028,
	SslStream_EndWrite_mECFCAE6C39E3807D418226A712B2600A6F96011A,
	IPGlobalProperties_get_PlatformNeedsLibCWorkaround_mD92D7B020F50C61F32749C6FA712E9678777A56C,
	IPGlobalProperties_GetIPGlobalProperties_m0A1551F6E8ED8083D6561AF637B4EC238D98A295,
	IPGlobalProperties_InternalGetIPGlobalProperties_mBA1CDC09A6DED024BEC95072550E7205C0504545,
	NULL,
	IPGlobalProperties__ctor_mEEE47DACD96438BCDF67877A3E2F0D3A592C2977,
	NetworkInformationException__ctor_m5CDA318CAFE57C54FA19136D9CC86F34DF5F8F1C,
	NetworkInformationException__ctor_m0132BE482A5DEDFAA8E675B7E8F1BB59BDB2E23F,
	CommonUnixIPGlobalProperties_getdomainname_m986C881DC228C76FEDFE01DDA4375990B9F312F7,
	CommonUnixIPGlobalProperties_get_DomainName_m413AC21C8FCF33C473D3360DD83E0F9CFB7662D7,
	CommonUnixIPGlobalProperties__ctor_m60C46E122AF76BCED16DD7F3FD5EFF74C093F83C,
	UnixIPGlobalProperties__ctor_mF2ADB564F94ABCB20CB71DDE34FAB070BA12A868,
	UnixNoLibCIPGlobalProperties_get_DomainName_mD5C1D38C6A8C4BFBBAF251F829A64A9D80363371,
	UnixNoLibCIPGlobalProperties__ctor_mB8161FF612E1613FC30AFA5CAA97C5E368C66291,
	MibIPGlobalProperties__ctor_m64009FA9C2EDC7E97A8BFDADD97F30699037CAA6,
	MibIPGlobalProperties__cctor_m9229AC18053CFF56E254C8AEE1A3513FC4EF4B4D,
	Win32IPGlobalProperties_get_DomainName_m5FF24C6CC09FE64C60955D9C4C1BEBF96636A5D3,
	Win32IPGlobalProperties__ctor_m7D031774BB16D9BF7096D7CC6B44AED107B31484,
	Win32NetworkInterface_GetNetworkParams_m650FF9CD92584BDE5F2445F5E04D560976304EF2,
	Win32NetworkInterface_get_FixedInfo_mAC576395B7D25CFD7B15920803E11BB629587709,
	DefaultProxySectionInternal_GetDefaultProxy_UsingOldMonoCode_mD2418B87B349589F5FB54B04FB9624DA982E0506,
	DefaultProxySectionInternal_GetSystemWebProxy_m6652DBF2B79156C7CA67D67FDD2DED92885D5446,
	DefaultProxySectionInternal_get_ClassSyncObject_m815EA08EFDE5A23BAC0F0A6CC8009F3FD14C9512,
	DefaultProxySectionInternal_GetSection_m052D4D21625EB1EE09DDEBC2BAC157E0E0406414,
	DefaultProxySectionInternal_get_WebProxy_m6FEA6EA17D500A3FA8DF7A36EF6A9B5AD142A439,
	DefaultProxySectionInternal__ctor_m77BAE40248B233823172ECA9811985D4410B2684,
	SettingsSectionInternal_get_Section_mE0694DB22ADB571D842C04FE8DE06D3087AD45E6,
	SettingsSectionInternal_get_Ipv6Enabled_m0105C8B95D00D8D79A809E41A85127B0C9A66701,
	SettingsSectionInternal__ctor_mF3B556F63066A164D09E0890B93FEFA74005743E,
	SettingsSectionInternal__cctor_m5551DBD25A2FDADEA2D5407031D2A9436524AA07,
	U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF68FD3031E09D93558520520C63240F3EA7D6AC6,
	BypassElementCollection__ctor_m2047F6046437B6101F59D781474BF71CF5650979,
	ConnectionManagementElementCollection__ctor_mFFAEA4E88F5C33B6DA8531C079C852A77FD04A19,
	ConnectionManagementSection__ctor_mE885788862A7E2BC030547954BE04682B5685B0F,
	ConnectionManagementSection_get_Properties_m5F5D4D565489088905ADC68D61267773F96F9419,
	DefaultProxySection__ctor_m63DB700CA7C5B525DEB7B8B524E5836705310AAD,
	DefaultProxySection_get_Properties_mFA1686FF919D5732D59AACA13AE5D5249D1701DE,
	DefaultProxySection_Reset_mF0EA313119B553545063DFE5AF317D83D738D6C2,
	ProxyElement__ctor_m6D9B4D4118C0EC9F069E83A6C3DCAA36209DEB75,
	ProxyElement_get_Properties_mB7790E9D638EC711E4783ACC846BE1568332E9B2,
	HttpWebRequestElement__ctor_m79DE0820C634F3A5744A12F7C8AF81BF6472A803,
	HttpWebRequestElement_get_Properties_m62B55D3B6F5898FC3E0FC3F79AA51B4D64AA7F2A,
	Ipv6Element__ctor_m028AE74FB04F381B2B9D34FEB50093224820B173,
	Ipv6Element_get_Properties_mD8016B80F04EF4AE6501BD889313DE91D5E00253,
	NetSectionGroup__ctor_m7AB7B5CA35F2D7C06B047BD0B480AD6F2C067570,
	SettingsSection__ctor_m09A6DF12BD56D2C0E0ABA8152004C486B1DE97E3,
	SettingsSection_get_Properties_mE5337C4AF39EA0A1B2AEB842CDBB16B8C0C1C4A0,
	PerformanceCountersElement__ctor_mEB598DFD70066C845995EAC5D1BF82698130D2D5,
	PerformanceCountersElement_get_Properties_m8519C030829398320F0A1AA087B41E71884FC168,
	ServicePointManagerElement__ctor_mA04F31D124B40258FE6673A2B7B0F7B2CE787615,
	ServicePointManagerElement_get_Properties_mCB80284E347910A59F7B5A495D5862533E41907A,
	SocketElement__ctor_m5D5BA302FD35A1D25BB3A596954F92AB26C3DEF6,
	SocketElement_get_Properties_m9A46DB832A9DA2A3E8F3B74D83DD96EC8A180984,
	WebProxyScriptElement__ctor_m943D653C6A20D602A9ED7F0D13E0ED41691CC2C2,
	WebProxyScriptElement_get_Properties_mD29E00ECE9AAA868495BECD6D88C48BBFE74F26E,
	WebRequestModulesSection__ctor_mE9CD09355B8B10829D4B6D2681811DC7F199B8D2,
	WebRequestModulesSection_get_Properties_mF7B71DE46486B2AF3D42FB3B877CDBC35B5FFC2E,
	WebRequestModuleElementCollection__ctor_mE32DEB8FF2F3E3582D6E9C291B6496BAFD182D3B,
	DiagnosticsConfigurationHandler__ctor_mCD2A35E58C3715292B4CAC69DCA4DB9FDBCAF8A2,
	DiagnosticsConfigurationHandler_Create_m7C5E9A16FBA52442C7C79E67B2C7991FB51D2740,
	ThrowStub_ThrowNotSupportedException_mA667A039AC2AB853687594A68EFA90A799028D4F,
};
extern void CFRange__ctor_m47A3FC3DC70D9A9685171D0A666C21E9522EDC49_AdjustorThunk (void);
extern void U3CStartOperationU3Ed__23_MoveNext_m63ACDC7CCB0E43A57BCC0D7BF6D14AADEA88150E_AdjustorThunk (void);
extern void U3CStartOperationU3Ed__23_SetStateMachine_m8A586353421C2670E8208AE140ED5DBEDD4122B8_AdjustorThunk (void);
extern void U3CProcessOperationU3Ed__24_MoveNext_mB0D2D020C1DE94FFD5D78109BC37802780D26A0D_AdjustorThunk (void);
extern void U3CProcessOperationU3Ed__24_SetStateMachine_m19FCCEBF66308F920EF00C2C17E74BC4DE02094D_AdjustorThunk (void);
extern void U3CInnerReadU3Ed__25_MoveNext_mE28E22197DC1A6A515E61B7EB9F17F9B41835B6F_AdjustorThunk (void);
extern void U3CInnerReadU3Ed__25_SetStateMachine_mFF80981E4C6AB1765979F5A653446A0A081E9BAD_AdjustorThunk (void);
extern void U3CProcessAuthenticationU3Ed__47_MoveNext_mF3762B503551276E4B49F05F7413012DF8D1CC84_AdjustorThunk (void);
extern void U3CProcessAuthenticationU3Ed__47_SetStateMachine_mDCBB12DB45E075AC256E54A1DFC35AD4C81912EC_AdjustorThunk (void);
extern void U3CStartOperationU3Ed__58_MoveNext_mA92EABD1F8F3CE91103E228A56D16BE2E7C3FA35_AdjustorThunk (void);
extern void U3CStartOperationU3Ed__58_SetStateMachine_m6896AA6F76C2DD0A407ADDFB40A574290873FFC8_AdjustorThunk (void);
extern void U3CInnerReadU3Ed__66_MoveNext_m36DB7FB663A6047DA5B34FE62490F230C48DD070_AdjustorThunk (void);
extern void U3CInnerReadU3Ed__66_SetStateMachine_m56B57971A776743CEADDCF710EA5777B89642D4D_AdjustorThunk (void);
extern void U3CInnerWriteU3Ed__67_MoveNext_m39FA739B0AE2BDF2EF4122C92A31BE2D016CEEF0_AdjustorThunk (void);
extern void U3CInnerWriteU3Ed__67_SetStateMachine_m614328656FD99E8FC4FCEE4337F2043634F18D6B_AdjustorThunk (void);
extern void U3CCreateStreamU3Ed__17_MoveNext_m5E7CB22F92B4B0C39AB680404D40ACF8C44416EB_AdjustorThunk (void);
extern void U3CCreateStreamU3Ed__17_SetStateMachine_mF83DEBD81E6106CE1BF4F1970B3459E73D6B51D3_AdjustorThunk (void);
extern void LowerCaseMapping__ctor_m0236442CB5098331DEAE7CACFCAC42741945D3E8_AdjustorThunk (void);
extern void X509ChainStatus__ctor_mA41DF127E7EEF7B59204118C5C48F695F2C6DECC_AdjustorThunk (void);
extern void HeaderVariantInfo__ctor_mB0775C718895238F3289605480ECD66D13DE19C0_AdjustorThunk (void);
extern void AuthorizationState_get_NtlmAuthState_mFEDD4ECDE8761AD54175DBBD0EA53C45CD545998_AdjustorThunk (void);
extern void AuthorizationState__ctor_m33AFDC1A78F1C2709F58ADE60766E6DB40B23108_AdjustorThunk (void);
extern void AuthorizationState_ToString_m7A5CA8DDE1302D55B5F3B1F75A5D79387EFF0531_AdjustorThunk (void);
extern void IPv6AddressFormatter__ctor_mEEFF87906A194838D6E4A31AB724A28808E539E5_AdjustorThunk (void);
extern void IPv6AddressFormatter_AsIPv4Int_m875CCBC60A506A331C9D591D5A88D49EBB6730E7_AdjustorThunk (void);
extern void IPv6AddressFormatter_IsIPv4Compatible_m769BBFB4FBB844EC8AB61A635495A7F2925FDD99_AdjustorThunk (void);
extern void IPv6AddressFormatter_IsIPv4Mapped_m46AE9AECC6E77E6A53ACBF60BEF336D45FF236DB_AdjustorThunk (void);
extern void IPv6AddressFormatter_ToString_m5FB0F927F3B0BAA521BC92562A7F5A78460023DC_AdjustorThunk (void);
extern void U3CWaitAsyncU3Ed__3_MoveNext_m428DB5C25D7D3C5A49B633CC57DAE67364954991_AdjustorThunk (void);
extern void U3CWaitAsyncU3Ed__3_SetStateMachine_mEE49EA25DC1D5E3CB662895B6AB0B9F46B69407D_AdjustorThunk (void);
extern void U3CStartSchedulerU3Ed__32_MoveNext_mC6A5B9A6CEC241C35FE884E5BC146E0A70F842F9_AdjustorThunk (void);
extern void U3CStartSchedulerU3Ed__32_SetStateMachine_m6E6AD3B8F6F9C698E2DBDABE9509B996912776EA_AdjustorThunk (void);
extern void U3CWaitForCompletionU3Ed__8_MoveNext_mA0F027CBAA61B6802847BB9D325430EEA11C8E60_AdjustorThunk (void);
extern void U3CWaitForCompletionU3Ed__8_SetStateMachine_m5D0F913DDCA50C9B1B83F88935AC73979DF0E2A2_AdjustorThunk (void);
extern void U3CConnectU3Ed__16_MoveNext_mEB63217D6C098F196308214C489160EADCE4B41E_AdjustorThunk (void);
extern void U3CConnectU3Ed__16_SetStateMachine_mB2CCC51319916425CFB8E8A932D947461DBB10A7_AdjustorThunk (void);
extern void U3CCreateStreamU3Ed__18_MoveNext_m3FB7E2688C0A60D5555D4413F840ED7199FC9354_AdjustorThunk (void);
extern void U3CCreateStreamU3Ed__18_SetStateMachine_m4EFABF7CC601609A1FE4622F7E7CA5324E70EE79_AdjustorThunk (void);
extern void U3CInitConnectionU3Ed__19_MoveNext_m396689491D2B75E51FFE763D6D3E7A69DE744EFA_AdjustorThunk (void);
extern void U3CInitConnectionU3Ed__19_SetStateMachine_m8D2B4707FC7E89FAA0C45018CD7C681D36430EFF_AdjustorThunk (void);
extern void U3CInitializeU3Ed__42_MoveNext_mA878653739B7D35EC6FA983C454ADB1E2EDE7198_AdjustorThunk (void);
extern void U3CInitializeU3Ed__42_SetStateMachine_mC32D06832DAC6E6C66B575E7F3731A07522F7E7B_AdjustorThunk (void);
extern void U3CReadHeadersU3Ed__43_MoveNext_m66807FF7B720D84756A57A9E1D93E4F451028F0A_AdjustorThunk (void);
extern void U3CReadHeadersU3Ed__43_SetStateMachine_mD5271A894FEAB056FF0A3A0CA031CCF07D2783FE_AdjustorThunk (void);
extern void U3CWaitForCompletionU3Ed__53_MoveNext_mC81A3A0933F623954DB9275F08521DE6994C84D7_AdjustorThunk (void);
extern void U3CWaitForCompletionU3Ed__53_SetStateMachine_m040F93A7A42E248867F85E97AA7E2C4320545B2F_AdjustorThunk (void);
extern void U3CRunU3Ed__54_MoveNext_m210E7A06384CC4F743FCE9492711BC6117A10B8D_AdjustorThunk (void);
extern void U3CRunU3Ed__54_SetStateMachine_m971F8C7DD243CCCBDF6C26AF71D0EF7CBBC9E43F_AdjustorThunk (void);
extern void U3CFinishReadingU3Ed__55_MoveNext_m8B454DF74AA31F352E4D71E14461AC683CCE5E6C_AdjustorThunk (void);
extern void U3CFinishReadingU3Ed__55_SetStateMachine_m927A312EBE065922167728DA0930608F1A2E009D_AdjustorThunk (void);
extern void U3CFinishWritingU3Ed__30_MoveNext_m522142884C6AFC833AD0853853C82CC9CD9E7640_AdjustorThunk (void);
extern void U3CFinishWritingU3Ed__30_SetStateMachine_m6E9B7917343EB1C33D6093342284C03110F9F40C_AdjustorThunk (void);
extern void U3CWriteAsyncU3Ed__31_MoveNext_mE07D8D1AD16CBA6048010B85CDF041D8216D37D1_AdjustorThunk (void);
extern void U3CWriteAsyncU3Ed__31_SetStateMachine_m8E588C911260D17ABD0AF8CF57BD5DE4E9951C92_AdjustorThunk (void);
extern void U3CProcessWriteU3Ed__32_MoveNext_mE7F133DD2645BB01545545074EF827412948B662_AdjustorThunk (void);
extern void U3CProcessWriteU3Ed__32_SetStateMachine_mCF8F144818C8E2F3E7F6F138805708B5704329C6_AdjustorThunk (void);
extern void U3CInitializeU3Ed__34_MoveNext_m87CFB94091EE7D19C8BBD9ED129BC52E8A142C0E_AdjustorThunk (void);
extern void U3CInitializeU3Ed__34_SetStateMachine_m6F9997F624BCE5FB0A3C19C7ECBD2DAE6F567157_AdjustorThunk (void);
extern void U3CSetHeadersAsyncU3Ed__35_MoveNext_m5AAA8EE190A8C526FCE9C2136A475CBD005647FB_AdjustorThunk (void);
extern void U3CSetHeadersAsyncU3Ed__35_SetStateMachine_m91F3E2057AC4865493B9D0A6D2DC56C1F99FE4D7_AdjustorThunk (void);
extern void U3CWriteRequestAsyncU3Ed__36_MoveNext_m3477695B7BE13EE4A72D517FC57275B93304FEDB_AdjustorThunk (void);
extern void U3CWriteRequestAsyncU3Ed__36_SetStateMachine_m2507D0217F5B2222BC4E3C5A6D2A7006A8B4915B_AdjustorThunk (void);
extern void U3CWriteChunkTrailer_innerU3Ed__37_MoveNext_m787FA052DBF18A7F46C2F28EE08ED905C63FDCDD_AdjustorThunk (void);
extern void U3CWriteChunkTrailer_innerU3Ed__37_SetStateMachine_m9E290ADA4A330860919E42BDC86A7E4815B869B6_AdjustorThunk (void);
extern void U3CWriteChunkTrailerU3Ed__38_MoveNext_m417D51A5680BA19B0AD0C200F93DAE44DE1B6D82_AdjustorThunk (void);
extern void U3CWriteChunkTrailerU3Ed__38_SetStateMachine_mD188F0271511AEEE15639673CF2EE7D0B77A68FF_AdjustorThunk (void);
extern void U3CReadAsyncU3Ed__48_MoveNext_mB4A60C8C7BB4AF56B780F85926C561C5807DCE06_AdjustorThunk (void);
extern void U3CReadAsyncU3Ed__48_SetStateMachine_m58B2F63A13E7EFC239A32B6AB9A60D491513B4DE_AdjustorThunk (void);
extern void U3CProcessReadU3Ed__49_MoveNext_mB72FF90C92F35FF051CB9E9EC8F64C38321C976B_AdjustorThunk (void);
extern void U3CProcessReadU3Ed__49_SetStateMachine_mD3CC965225487D75406604D438790F01E548C658_AdjustorThunk (void);
extern void U3CInnerReadAsyncU3Ed__50_MoveNext_m45CB1C220854EAC0B9B299F3DEDDC2AD57EC4E20_AdjustorThunk (void);
extern void U3CInnerReadAsyncU3Ed__50_SetStateMachine_m7782CBEBA56C7B21E57E24C75B712ADE8B5F5888_AdjustorThunk (void);
extern void U3CEnsureReadAsyncU3Ed__51_MoveNext_m5F5FD3A07EB45D9EFEE6715981EE954B69AC2E4B_AdjustorThunk (void);
extern void U3CEnsureReadAsyncU3Ed__51_SetStateMachine_mA8F68B170D9187F7430AA7EB9E5A3BFB9481A3C6_AdjustorThunk (void);
extern void U3CInitializeU3Ed__56_MoveNext_mB6A59995320329B5D86E8F4BDE2E77A2817FE667_AdjustorThunk (void);
extern void U3CInitializeU3Ed__56_SetStateMachine_mD354F897FFD078B3C872B614172812143496A96F_AdjustorThunk (void);
extern void U3CReadAllAsyncU3Ed__57_MoveNext_m4622AA6E5B32E06EF6A03EE34C0D3DF5D1BCA077_AdjustorThunk (void);
extern void U3CReadAllAsyncU3Ed__57_SetStateMachine_mFD1C3562CD2C91EE95511C7737CCFF4140FD30AF_AdjustorThunk (void);
extern void U3CInitReadAsyncU3Ed__61_MoveNext_mE77187E2C77E27D5FB47377BFDA7019F5E8DC774_AdjustorThunk (void);
extern void U3CInitReadAsyncU3Ed__61_SetStateMachine_m872F40B1403B745442B5E0A385B40FF2A1E79A6D_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[80] = 
{
	{ 0x060000E3, CFRange__ctor_m47A3FC3DC70D9A9685171D0A666C21E9522EDC49_AdjustorThunk },
	{ 0x06000145, U3CStartOperationU3Ed__23_MoveNext_m63ACDC7CCB0E43A57BCC0D7BF6D14AADEA88150E_AdjustorThunk },
	{ 0x06000146, U3CStartOperationU3Ed__23_SetStateMachine_m8A586353421C2670E8208AE140ED5DBEDD4122B8_AdjustorThunk },
	{ 0x06000147, U3CProcessOperationU3Ed__24_MoveNext_mB0D2D020C1DE94FFD5D78109BC37802780D26A0D_AdjustorThunk },
	{ 0x06000148, U3CProcessOperationU3Ed__24_SetStateMachine_m19FCCEBF66308F920EF00C2C17E74BC4DE02094D_AdjustorThunk },
	{ 0x06000149, U3CInnerReadU3Ed__25_MoveNext_mE28E22197DC1A6A515E61B7EB9F17F9B41835B6F_AdjustorThunk },
	{ 0x0600014A, U3CInnerReadU3Ed__25_SetStateMachine_mFF80981E4C6AB1765979F5A653446A0A081E9BAD_AdjustorThunk },
	{ 0x06000191, U3CProcessAuthenticationU3Ed__47_MoveNext_mF3762B503551276E4B49F05F7413012DF8D1CC84_AdjustorThunk },
	{ 0x06000192, U3CProcessAuthenticationU3Ed__47_SetStateMachine_mDCBB12DB45E075AC256E54A1DFC35AD4C81912EC_AdjustorThunk },
	{ 0x06000193, U3CStartOperationU3Ed__58_MoveNext_mA92EABD1F8F3CE91103E228A56D16BE2E7C3FA35_AdjustorThunk },
	{ 0x06000194, U3CStartOperationU3Ed__58_SetStateMachine_m6896AA6F76C2DD0A407ADDFB40A574290873FFC8_AdjustorThunk },
	{ 0x06000197, U3CInnerReadU3Ed__66_MoveNext_m36DB7FB663A6047DA5B34FE62490F230C48DD070_AdjustorThunk },
	{ 0x06000198, U3CInnerReadU3Ed__66_SetStateMachine_m56B57971A776743CEADDCF710EA5777B89642D4D_AdjustorThunk },
	{ 0x06000199, U3CInnerWriteU3Ed__67_MoveNext_m39FA739B0AE2BDF2EF4122C92A31BE2D016CEEF0_AdjustorThunk },
	{ 0x0600019A, U3CInnerWriteU3Ed__67_SetStateMachine_m614328656FD99E8FC4FCEE4337F2043634F18D6B_AdjustorThunk },
	{ 0x060001BD, U3CCreateStreamU3Ed__17_MoveNext_m5E7CB22F92B4B0C39AB680404D40ACF8C44416EB_AdjustorThunk },
	{ 0x060001BE, U3CCreateStreamU3Ed__17_SetStateMachine_mF83DEBD81E6106CE1BF4F1970B3459E73D6B51D3_AdjustorThunk },
	{ 0x06000315, LowerCaseMapping__ctor_m0236442CB5098331DEAE7CACFCAC42741945D3E8_AdjustorThunk },
	{ 0x0600054F, X509ChainStatus__ctor_mA41DF127E7EEF7B59204118C5C48F695F2C6DECC_AdjustorThunk },
	{ 0x06000751, HeaderVariantInfo__ctor_mB0775C718895238F3289605480ECD66D13DE19C0_AdjustorThunk },
	{ 0x06000821, AuthorizationState_get_NtlmAuthState_mFEDD4ECDE8761AD54175DBBD0EA53C45CD545998_AdjustorThunk },
	{ 0x06000822, AuthorizationState__ctor_m33AFDC1A78F1C2709F58ADE60766E6DB40B23108_AdjustorThunk },
	{ 0x06000823, AuthorizationState_ToString_m7A5CA8DDE1302D55B5F3B1F75A5D79387EFF0531_AdjustorThunk },
	{ 0x06000831, IPv6AddressFormatter__ctor_mEEFF87906A194838D6E4A31AB724A28808E539E5_AdjustorThunk },
	{ 0x06000833, IPv6AddressFormatter_AsIPv4Int_m875CCBC60A506A331C9D591D5A88D49EBB6730E7_AdjustorThunk },
	{ 0x06000834, IPv6AddressFormatter_IsIPv4Compatible_m769BBFB4FBB844EC8AB61A635495A7F2925FDD99_AdjustorThunk },
	{ 0x06000835, IPv6AddressFormatter_IsIPv4Mapped_m46AE9AECC6E77E6A53ACBF60BEF336D45FF236DB_AdjustorThunk },
	{ 0x06000836, IPv6AddressFormatter_ToString_m5FB0F927F3B0BAA521BC92562A7F5A78460023DC_AdjustorThunk },
	{ 0x0600088F, U3CWaitAsyncU3Ed__3_MoveNext_m428DB5C25D7D3C5A49B633CC57DAE67364954991_AdjustorThunk },
	{ 0x06000890, U3CWaitAsyncU3Ed__3_SetStateMachine_mEE49EA25DC1D5E3CB662895B6AB0B9F46B69407D_AdjustorThunk },
	{ 0x06000894, U3CStartSchedulerU3Ed__32_MoveNext_mC6A5B9A6CEC241C35FE884E5BC146E0A70F842F9_AdjustorThunk },
	{ 0x06000895, U3CStartSchedulerU3Ed__32_SetStateMachine_m6E6AD3B8F6F9C698E2DBDABE9509B996912776EA_AdjustorThunk },
	{ 0x0600089D, U3CWaitForCompletionU3Ed__8_MoveNext_mA0F027CBAA61B6802847BB9D325430EEA11C8E60_AdjustorThunk },
	{ 0x0600089E, U3CWaitForCompletionU3Ed__8_SetStateMachine_m5D0F913DDCA50C9B1B83F88935AC73979DF0E2A2_AdjustorThunk },
	{ 0x060008B7, U3CConnectU3Ed__16_MoveNext_mEB63217D6C098F196308214C489160EADCE4B41E_AdjustorThunk },
	{ 0x060008B8, U3CConnectU3Ed__16_SetStateMachine_mB2CCC51319916425CFB8E8A932D947461DBB10A7_AdjustorThunk },
	{ 0x060008B9, U3CCreateStreamU3Ed__18_MoveNext_m3FB7E2688C0A60D5555D4413F840ED7199FC9354_AdjustorThunk },
	{ 0x060008BA, U3CCreateStreamU3Ed__18_SetStateMachine_m4EFABF7CC601609A1FE4622F7E7CA5324E70EE79_AdjustorThunk },
	{ 0x060008BB, U3CInitConnectionU3Ed__19_MoveNext_m396689491D2B75E51FFE763D6D3E7A69DE744EFA_AdjustorThunk },
	{ 0x060008BC, U3CInitConnectionU3Ed__19_SetStateMachine_m8D2B4707FC7E89FAA0C45018CD7C681D36430EFF_AdjustorThunk },
	{ 0x060008EA, U3CInitializeU3Ed__42_MoveNext_mA878653739B7D35EC6FA983C454ADB1E2EDE7198_AdjustorThunk },
	{ 0x060008EB, U3CInitializeU3Ed__42_SetStateMachine_mC32D06832DAC6E6C66B575E7F3731A07522F7E7B_AdjustorThunk },
	{ 0x060008EC, U3CReadHeadersU3Ed__43_MoveNext_m66807FF7B720D84756A57A9E1D93E4F451028F0A_AdjustorThunk },
	{ 0x060008ED, U3CReadHeadersU3Ed__43_SetStateMachine_mD5271A894FEAB056FF0A3A0CA031CCF07D2783FE_AdjustorThunk },
	{ 0x06000906, U3CWaitForCompletionU3Ed__53_MoveNext_mC81A3A0933F623954DB9275F08521DE6994C84D7_AdjustorThunk },
	{ 0x06000907, U3CWaitForCompletionU3Ed__53_SetStateMachine_m040F93A7A42E248867F85E97AA7E2C4320545B2F_AdjustorThunk },
	{ 0x06000908, U3CRunU3Ed__54_MoveNext_m210E7A06384CC4F743FCE9492711BC6117A10B8D_AdjustorThunk },
	{ 0x06000909, U3CRunU3Ed__54_SetStateMachine_m971F8C7DD243CCCBDF6C26AF71D0EF7CBBC9E43F_AdjustorThunk },
	{ 0x0600090A, U3CFinishReadingU3Ed__55_MoveNext_m8B454DF74AA31F352E4D71E14461AC683CCE5E6C_AdjustorThunk },
	{ 0x0600090B, U3CFinishReadingU3Ed__55_SetStateMachine_m927A312EBE065922167728DA0930608F1A2E009D_AdjustorThunk },
	{ 0x06000921, U3CFinishWritingU3Ed__30_MoveNext_m522142884C6AFC833AD0853853C82CC9CD9E7640_AdjustorThunk },
	{ 0x06000922, U3CFinishWritingU3Ed__30_SetStateMachine_m6E9B7917343EB1C33D6093342284C03110F9F40C_AdjustorThunk },
	{ 0x06000923, U3CWriteAsyncU3Ed__31_MoveNext_mE07D8D1AD16CBA6048010B85CDF041D8216D37D1_AdjustorThunk },
	{ 0x06000924, U3CWriteAsyncU3Ed__31_SetStateMachine_m8E588C911260D17ABD0AF8CF57BD5DE4E9951C92_AdjustorThunk },
	{ 0x06000925, U3CProcessWriteU3Ed__32_MoveNext_mE7F133DD2645BB01545545074EF827412948B662_AdjustorThunk },
	{ 0x06000926, U3CProcessWriteU3Ed__32_SetStateMachine_mCF8F144818C8E2F3E7F6F138805708B5704329C6_AdjustorThunk },
	{ 0x06000927, U3CInitializeU3Ed__34_MoveNext_m87CFB94091EE7D19C8BBD9ED129BC52E8A142C0E_AdjustorThunk },
	{ 0x06000928, U3CInitializeU3Ed__34_SetStateMachine_m6F9997F624BCE5FB0A3C19C7ECBD2DAE6F567157_AdjustorThunk },
	{ 0x06000929, U3CSetHeadersAsyncU3Ed__35_MoveNext_m5AAA8EE190A8C526FCE9C2136A475CBD005647FB_AdjustorThunk },
	{ 0x0600092A, U3CSetHeadersAsyncU3Ed__35_SetStateMachine_m91F3E2057AC4865493B9D0A6D2DC56C1F99FE4D7_AdjustorThunk },
	{ 0x0600092B, U3CWriteRequestAsyncU3Ed__36_MoveNext_m3477695B7BE13EE4A72D517FC57275B93304FEDB_AdjustorThunk },
	{ 0x0600092C, U3CWriteRequestAsyncU3Ed__36_SetStateMachine_m2507D0217F5B2222BC4E3C5A6D2A7006A8B4915B_AdjustorThunk },
	{ 0x0600092D, U3CWriteChunkTrailer_innerU3Ed__37_MoveNext_m787FA052DBF18A7F46C2F28EE08ED905C63FDCDD_AdjustorThunk },
	{ 0x0600092E, U3CWriteChunkTrailer_innerU3Ed__37_SetStateMachine_m9E290ADA4A330860919E42BDC86A7E4815B869B6_AdjustorThunk },
	{ 0x0600092F, U3CWriteChunkTrailerU3Ed__38_MoveNext_m417D51A5680BA19B0AD0C200F93DAE44DE1B6D82_AdjustorThunk },
	{ 0x06000930, U3CWriteChunkTrailerU3Ed__38_SetStateMachine_mD188F0271511AEEE15639673CF2EE7D0B77A68FF_AdjustorThunk },
	{ 0x06000954, U3CReadAsyncU3Ed__48_MoveNext_mB4A60C8C7BB4AF56B780F85926C561C5807DCE06_AdjustorThunk },
	{ 0x06000955, U3CReadAsyncU3Ed__48_SetStateMachine_m58B2F63A13E7EFC239A32B6AB9A60D491513B4DE_AdjustorThunk },
	{ 0x06000956, U3CProcessReadU3Ed__49_MoveNext_mB72FF90C92F35FF051CB9E9EC8F64C38321C976B_AdjustorThunk },
	{ 0x06000957, U3CProcessReadU3Ed__49_SetStateMachine_mD3CC965225487D75406604D438790F01E548C658_AdjustorThunk },
	{ 0x06000958, U3CInnerReadAsyncU3Ed__50_MoveNext_m45CB1C220854EAC0B9B299F3DEDDC2AD57EC4E20_AdjustorThunk },
	{ 0x06000959, U3CInnerReadAsyncU3Ed__50_SetStateMachine_m7782CBEBA56C7B21E57E24C75B712ADE8B5F5888_AdjustorThunk },
	{ 0x0600095A, U3CEnsureReadAsyncU3Ed__51_MoveNext_m5F5FD3A07EB45D9EFEE6715981EE954B69AC2E4B_AdjustorThunk },
	{ 0x0600095B, U3CEnsureReadAsyncU3Ed__51_SetStateMachine_mA8F68B170D9187F7430AA7EB9E5A3BFB9481A3C6_AdjustorThunk },
	{ 0x0600095C, U3CInitializeU3Ed__56_MoveNext_mB6A59995320329B5D86E8F4BDE2E77A2817FE667_AdjustorThunk },
	{ 0x0600095D, U3CInitializeU3Ed__56_SetStateMachine_mD354F897FFD078B3C872B614172812143496A96F_AdjustorThunk },
	{ 0x0600095E, U3CReadAllAsyncU3Ed__57_MoveNext_m4622AA6E5B32E06EF6A03EE34C0D3DF5D1BCA077_AdjustorThunk },
	{ 0x0600095F, U3CReadAllAsyncU3Ed__57_SetStateMachine_mFD1C3562CD2C91EE95511C7737CCFF4140FD30AF_AdjustorThunk },
	{ 0x06000960, U3CInitReadAsyncU3Ed__61_MoveNext_mE77187E2C77E27D5FB47377BFDA7019F5E8DC774_AdjustorThunk },
	{ 0x06000961, U3CInitReadAsyncU3Ed__61_SetStateMachine_m872F40B1403B745442B5E0A385B40FF2A1E79A6D_AdjustorThunk },
};
static const int32_t s_InvokerIndices[2710] = 
{
	6690,
	6242,
	7246,
	6690,
	4233,
	6330,
	6330,
	6412,
	6054,
	7547,
	7526,
	7558,
	2377,
	805,
	129,
	3893,
	2377,
	631,
	127,
	3633,
	2377,
	631,
	127,
	3633,
	2377,
	814,
	126,
	4233,
	2377,
	23,
	7,
	4233,
	2377,
	1233,
	250,
	3893,
	5165,
	2377,
	5254,
	1916,
	4521,
	2377,
	1987,
	679,
	4233,
	2377,
	2500,
	677,
	4522,
	2377,
	219,
	71,
	2674,
	2377,
	219,
	71,
	2674,
	2377,
	4110,
	1096,
	4233,
	2377,
	633,
	159,
	3633,
	2377,
	2501,
	677,
	4524,
	2377,
	1405,
	290,
	4523,
	2377,
	2672,
	1096,
	2674,
	2377,
	1260,
	249,
	4233,
	2377,
	815,
	127,
	4233,
	2377,
	4110,
	1096,
	4233,
	2377,
	160,
	40,
	3893,
	2377,
	82,
	22,
	3893,
	2377,
	221,
	79,
	2674,
	2377,
	220,
	78,
	2674,
	2377,
	1261,
	250,
	4233,
	2377,
	825,
	128,
	4233,
	2377,
	825,
	128,
	4233,
	2377,
	825,
	128,
	4233,
	2377,
	815,
	127,
	4233,
	2377,
	1961,
	677,
	3893,
	2377,
	1961,
	677,
	3893,
	2377,
	1961,
	677,
	3893,
	2377,
	631,
	127,
	3633,
	2377,
	631,
	127,
	3633,
	2377,
	1979,
	677,
	4233,
	2377,
	4110,
	1096,
	4233,
	2377,
	1256,
	247,
	4233,
	92,
	6016,
	4962,
	5072,
	964,
	964,
	5165,
	4121,
	5165,
	4962,
	5165,
	5912,
	1084,
	5912,
	1084,
	6287,
	1966,
	5288,
	42,
	7374,
	7374,
	7140,
	6523,
	7140,
	7140,
	5072,
	5003,
	4962,
	4962,
	4962,
	4962,
	5035,
	1150,
	742,
	33,
	5165,
	327,
	131,
	4398,
	4962,
	5255,
	5072,
	4233,
	4197,
	5165,
	4121,
	6634,
	6633,
	7439,
	6633,
	6633,
	2348,
	5165,
	5037,
	4199,
	7170,
	5165,
	7439,
	5165,
	4121,
	5165,
	2348,
	7593,
	7170,
	5035,
	6632,
	3631,
	6087,
	7132,
	2175,
	2348,
	6195,
	7246,
	7170,
	7170,
	6193,
	7244,
	5072,
	7593,
	2348,
	6632,
	3632,
	3632,
	2348,
	6195,
	7246,
	6357,
	6357,
	6162,
	7547,
	7439,
	2348,
	7558,
	2349,
	2349,
	1074,
	5165,
	7593,
	4233,
	7132,
	5037,
	5037,
	5072,
	5072,
	5035,
	5035,
	5072,
	7593,
	4233,
	5072,
	6194,
	5914,
	7593,
	6194,
	6677,
	6677,
	6677,
	6677,
	6632,
	6690,
	6690,
	6690,
	7547,
	7558,
	7558,
	7593,
	5165,
	5165,
	2377,
	1304,
	261,
	4233,
	5165,
	5072,
	6681,
	6225,
	6225,
	6238,
	3716,
	2984,
	5165,
	1304,
	5035,
	5035,
	1334,
	5072,
	4197,
	5165,
	4197,
	1334,
	5035,
	5072,
	4197,
	4233,
	5072,
	4962,
	5072,
	5035,
	4197,
	2364,
	4197,
	5165,
	3699,
	3699,
	3699,
	3439,
	5072,
	5165,
	4233,
	5165,
	4233,
	5165,
	4233,
	2364,
	3439,
	5072,
	5035,
	4197,
	326,
	5072,
	326,
	3439,
	326,
	3439,
	2377,
	403,
	151,
	2984,
	6690,
	6228,
	350,
	5955,
	5072,
	231,
	725,
	141,
	140,
	327,
	5072,
	5072,
	1993,
	7246,
	6690,
	3716,
	743,
	5072,
	72,
	131,
	268,
	3470,
	268,
	4233,
	1077,
	1334,
	731,
	731,
	1131,
	555,
	218,
	1016,
	230,
	1101,
	1894,
	3439,
	2665,
	2665,
	4962,
	4121,
	5165,
	5072,
	1874,
	4198,
	4962,
	4962,
	4962,
	5036,
	5036,
	4198,
	5035,
	4197,
	5035,
	7593,
	5165,
	5165,
	4233,
	5165,
	4233,
	5165,
	5035,
	5165,
	4233,
	5165,
	4233,
	92,
	5072,
	5072,
	4962,
	4962,
	5072,
	5072,
	5072,
	5165,
	4962,
	5165,
	5072,
	5072,
	964,
	964,
	5165,
	1564,
	1916,
	5165,
	4121,
	5165,
	7558,
	7593,
	6682,
	7593,
	7558,
	7558,
	7593,
	5072,
	5035,
	4962,
	4121,
	2381,
	1914,
	5165,
	4233,
	6690,
	7593,
	7246,
	7028,
	7246,
	7246,
	5165,
	403,
	5165,
	748,
	5165,
	1158,
	1158,
	1916,
	5072,
	5165,
	7593,
	7593,
	5165,
	3716,
	6518,
	5763,
	6519,
	5922,
	4962,
	4962,
	4962,
	4962,
	5150,
	5072,
	4962,
	7028,
	4962,
	1569,
	2984,
	4962,
	5165,
	5148,
	3055,
	3055,
	6529,
	6529,
	5072,
	5165,
	4121,
	4233,
	2375,
	2381,
	1347,
	2381,
	5848,
	7242,
	2386,
	2386,
	2386,
	5072,
	5072,
	5072,
	5072,
	5072,
	5035,
	4962,
	4962,
	4962,
	5072,
	4962,
	5072,
	7028,
	7558,
	7593,
	5072,
	5035,
	5072,
	5072,
	4962,
	5072,
	5072,
	4962,
	4962,
	7035,
	7035,
	7139,
	5035,
	5072,
	6492,
	6492,
	2984,
	6165,
	5072,
	5035,
	2388,
	4306,
	5165,
	5626,
	5165,
	1904,
	3710,
	1904,
	1135,
	3710,
	5165,
	5633,
	6077,
	6156,
	81,
	4,
	24,
	881,
	817,
	415,
	1147,
	5429,
	5959,
	7134,
	6241,
	7035,
	7035,
	7035,
	7035,
	6210,
	1325,
	1284,
	2984,
	2984,
	2984,
	6095,
	1904,
	7246,
	732,
	1390,
	5934,
	5620,
	3710,
	1904,
	4233,
	7593,
	5165,
	5165,
	5165,
	4233,
	2386,
	2386,
	5283,
	5332,
	5277,
	5276,
	5289,
	6403,
	6765,
	7035,
	7035,
	7035,
	7035,
	7593,
	5072,
	5035,
	5072,
	2362,
	1154,
	1152,
	7526,
	7593,
	5035,
	2949,
	2949,
	2949,
	1538,
	4197,
	7246,
	4962,
	5072,
	2362,
	1154,
	1152,
	1334,
	5941,
	5452,
	5452,
	5608,
	5608,
	6488,
	6440,
	5931,
	5608,
	6517,
	6517,
	5941,
	6169,
	5366,
	5450,
	5903,
	5739,
	5739,
	5938,
	7228,
	6941,
	7011,
	5723,
	6073,
	6073,
	5738,
	5941,
	5728,
	2377,
	4233,
	1158,
	4233,
	2381,
	5072,
	5072,
	5072,
	4962,
	4121,
	4962,
	4121,
	5165,
	1294,
	5165,
	4233,
	5165,
	6849,
	7132,
	7593,
	7526,
	5165,
	2984,
	2377,
	2381,
	748,
	4233,
	5165,
	4121,
	4121,
	6600,
	5165,
	4144,
	4233,
	4233,
	5072,
	5165,
	4121,
	5165,
	4233,
	4233,
	5072,
	4139,
	5165,
	4233,
	2375,
	909,
	2386,
	2386,
	7448,
	7584,
	5035,
	5135,
	4962,
	5072,
	3710,
	3470,
	6492,
	5753,
	2984,
	1562,
	6241,
	5951,
	3716,
	1915,
	5165,
	130,
	7246,
	3716,
	4962,
	4962,
	7593,
	55,
	5072,
	4233,
	5165,
	5165,
	885,
	1562,
	399,
	557,
	5072,
	1334,
	5072,
	5072,
	5165,
	4233,
	5072,
	4962,
	5035,
	3710,
	2375,
	5072,
	3710,
	5165,
	4233,
	4962,
	5072,
	5072,
	5165,
	7593,
	5165,
	840,
	4962,
	4121,
	4304,
	4233,
	4233,
	4233,
	2423,
	885,
	4233,
	4233,
	1382,
	1993,
	1993,
	1265,
	7356,
	7028,
	7028,
	7028,
	7028,
	7028,
	7028,
	7035,
	7035,
	6520,
	6120,
	5473,
	5473,
	5762,
	7246,
	7246,
	6686,
	5035,
	5072,
	3710,
	5165,
	6230,
	953,
	1779,
	5165,
	2423,
	27,
	7022,
	7246,
	7246,
	7134,
	7130,
	5165,
	4197,
	4962,
	5035,
	4233,
	4962,
	5072,
	5072,
	3716,
	5165,
	1293,
	4121,
	952,
	1323,
	1559,
	3716,
	4962,
	2364,
	5072,
	4962,
	7558,
	7593,
	923,
	4962,
	5072,
	7593,
	5165,
	2381,
	5072,
	4962,
	5035,
	3710,
	3716,
	3710,
	3710,
	2375,
	5072,
	5165,
	4233,
	4962,
	5072,
	5072,
	5165,
	2381,
	5165,
	5165,
	4197,
	4197,
	4197,
	4197,
	5035,
	5035,
	5035,
	5165,
	4197,
	2175,
	1286,
	4197,
	2175,
	5165,
	4197,
	5165,
	4197,
	5035,
	3439,
	4197,
	2175,
	5165,
	4197,
	5035,
	3439,
	5035,
	3439,
	5035,
	5035,
	5035,
	5035,
	5148,
	2984,
	1538,
	5165,
	3868,
	4962,
	5165,
	7558,
	191,
	353,
	5072,
	1286,
	4197,
	4197,
	2949,
	3439,
	3439,
	4197,
	7593,
	5165,
	101,
	5072,
	353,
	3710,
	5035,
	5072,
	4962,
	3710,
	2375,
	5072,
	7593,
	5165,
	4233,
	4962,
	5072,
	5165,
	1356,
	5165,
	2386,
	2386,
	5165,
	1356,
	2175,
	1289,
	1287,
	1286,
	862,
	4962,
	5072,
	1286,
	5072,
	3710,
	5072,
	5072,
	5072,
	5072,
	5072,
	1102,
	4233,
	3710,
	5035,
	5035,
	6686,
	4233,
	4233,
	4197,
	5072,
	3698,
	1893,
	5072,
	5165,
	5072,
	5072,
	5072,
	5148,
	5035,
	3868,
	7139,
	5148,
	2949,
	5165,
	5148,
	5072,
	3519,
	7139,
	5165,
	2175,
	2375,
	5165,
	3470,
	2949,
	2984,
	4962,
	4962,
	4962,
	4962,
	4962,
	4962,
	7035,
	7035,
	7035,
	4962,
	7035,
	1285,
	5165,
	5165,
	4962,
	4233,
	5165,
	5165,
	1268,
	5072,
	4304,
	4304,
	4233,
	4233,
	4197,
	5165,
	5165,
	5165,
	4962,
	5165,
	3716,
	5035,
	4197,
	5148,
	5165,
	4197,
	5165,
	3868,
	5148,
	3868,
	5035,
	7593,
	5165,
	39,
	5165,
	5165,
	5165,
	5165,
	4962,
	5165,
	5165,
	3698,
	5165,
	988,
	988,
	5165,
	5165,
	5165,
	4197,
	5035,
	5035,
	1286,
	862,
	5165,
	2949,
	3439,
	3439,
	5072,
	103,
	7246,
	5165,
	4197,
	4962,
	5035,
	5035,
	2175,
	4197,
	2175,
	1286,
	3470,
	3716,
	3439,
	3716,
	1293,
	7546,
	7558,
	5165,
	5135,
	5036,
	5036,
	5165,
	5165,
	7593,
	5165,
	5165,
	4121,
	4962,
	2984,
	5035,
	7593,
	4233,
	5072,
	2984,
	5035,
	3716,
	5165,
	5165,
	4962,
	4962,
	5165,
	4121,
	3716,
	4962,
	5072,
	5165,
	7593,
	4233,
	5165,
	4233,
	5072,
	2984,
	5035,
	7593,
	4233,
	5072,
	2984,
	5035,
	7593,
	4144,
	4121,
	4233,
	5072,
	2984,
	5035,
	5165,
	4233,
	5072,
	5072,
	4233,
	2984,
	5035,
	7593,
	4121,
	4962,
	2984,
	5035,
	7593,
	2381,
	2984,
	5035,
	5165,
	4233,
	2984,
	5035,
	7593,
	4197,
	5035,
	2984,
	5035,
	7593,
	5165,
	4233,
	5072,
	5072,
	2984,
	5035,
	7593,
	5165,
	4197,
	2984,
	5035,
	4233,
	3716,
	3716,
	4233,
	5072,
	4962,
	5072,
	4962,
	1916,
	5165,
	5165,
	5165,
	5165,
	4233,
	1337,
	2386,
	4233,
	7593,
	4121,
	4962,
	2984,
	5035,
	7593,
	5165,
	5165,
	5165,
	5165,
	5165,
	4233,
	5072,
	2984,
	5035,
	7593,
	5165,
	4197,
	2206,
	2386,
	5035,
	2386,
	7242,
	7593,
	7593,
	7593,
	5165,
	5072,
	1347,
	5165,
	2381,
	2386,
	4233,
	1332,
	2381,
	4233,
	5072,
	4233,
	5072,
	5165,
	3470,
	3710,
	5035,
	5072,
	2375,
	4962,
	5072,
	4233,
	5072,
	4962,
	5165,
	6686,
	6686,
	5165,
	2381,
	4233,
	5072,
	4233,
	4233,
	3698,
	3698,
	3698,
	3698,
	3698,
	3698,
	3698,
	3698,
	6258,
	6258,
	4233,
	5072,
	5072,
	5072,
	5072,
	7246,
	6690,
	7246,
	7593,
	5165,
	2364,
	833,
	4962,
	4962,
	5035,
	4233,
	3470,
	5072,
	3698,
	5072,
	5165,
	4233,
	2386,
	4975,
	4975,
	5072,
	5072,
	5072,
	5072,
	5072,
	5035,
	1348,
	5165,
	5072,
	3698,
	6885,
	7593,
	7593,
	5072,
	5072,
	5072,
	5035,
	5072,
	1348,
	5165,
	5165,
	4962,
	4233,
	4233,
	5072,
	3698,
	3698,
	5072,
	3698,
	4975,
	4975,
	1558,
	5072,
	5165,
	5072,
	5072,
	5072,
	5035,
	1916,
	1348,
	5165,
	5072,
	3698,
	6885,
	5072,
	7593,
	5165,
	4233,
	3710,
	4233,
	5072,
	5035,
	4233,
	5072,
	5072,
	4962,
	5165,
	4962,
	5165,
	4233,
	5035,
	3710,
	2364,
	5072,
	5165,
	4121,
	5165,
	5072,
	5165,
	4121,
	4233,
	5072,
	4233,
	5165,
	4121,
	5165,
	4233,
	5072,
	5165,
	5035,
	4962,
	3710,
	5072,
	2375,
	5072,
	4233,
	5165,
	4233,
	5072,
	4962,
	5165,
	4962,
	5165,
	5072,
	4233,
	5165,
	5165,
	4121,
	5165,
	5165,
	4121,
	4962,
	5072,
	4233,
	5165,
	7593,
	5165,
	4233,
	5165,
	4197,
	7242,
	2364,
	4233,
	3470,
	3698,
	5165,
	4962,
	4121,
	4233,
	3716,
	7593,
	7593,
	7442,
	5947,
	7229,
	7028,
	7442,
	7558,
	5165,
	5165,
	2364,
	2124,
	5035,
	4233,
	3439,
	3470,
	5072,
	3698,
	5165,
	5165,
	2364,
	2364,
	2364,
	2364,
	1332,
	5072,
	4233,
	7035,
	6521,
	7246,
	3470,
	5072,
	3698,
	5165,
	3716,
	2381,
	5072,
	5165,
	5035,
	4962,
	5072,
	5072,
	2381,
	2984,
	2375,
	5072,
	5072,
	5165,
	4233,
	3716,
	2381,
	5035,
	4962,
	5072,
	5072,
	2381,
	2984,
	2375,
	5072,
	5072,
	4233,
	5072,
	4979,
	5072,
	5072,
	4962,
	5165,
	2364,
	2375,
	5035,
	4962,
	5072,
	5072,
	2364,
	5072,
	4962,
	5165,
	5165,
	5165,
	4233,
	2206,
	4233,
	2386,
	2386,
	4233,
	5165,
	4197,
	3716,
	4962,
	2381,
	4233,
	3716,
	2381,
	3710,
	3710,
	5072,
	5035,
	2375,
	5072,
	4962,
	7593,
	2381,
	4233,
	4962,
	5165,
	5072,
	2381,
	1564,
	3470,
	5072,
	5072,
	7558,
	7558,
	5165,
	2206,
	4233,
	2386,
	5165,
	7246,
	7246,
	2381,
	3716,
	3716,
	2381,
	4233,
	3716,
	2381,
	3710,
	3710,
	3710,
	2206,
	5035,
	4962,
	4962,
	3470,
	5165,
	2984,
	2375,
	3470,
	2206,
	4962,
	4233,
	4197,
	5072,
	3710,
	2206,
	3470,
	2984,
	3470,
	2206,
	4233,
	2375,
	5072,
	5165,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	7242,
	7242,
	4233,
	2364,
	5072,
	7558,
	5165,
	7593,
	5035,
	5072,
	3716,
	5165,
	7558,
	7558,
	7593,
	1158,
	1916,
	5072,
	403,
	1916,
	4198,
	2376,
	2389,
	4197,
	6485,
	7246,
	6682,
	5072,
	5035,
	5036,
	5072,
	7028,
	1559,
	2984,
	5035,
	5072,
	7593,
	5035,
	2375,
	5072,
	5035,
	5072,
	5072,
	3716,
	2984,
	5035,
	7593,
	5072,
	4233,
	4233,
	5072,
	4233,
	5165,
	3716,
	5165,
	7028,
	7558,
	7558,
	7558,
	7246,
	7028,
	7022,
	7593,
	7558,
	7558,
	5072,
	4233,
	2381,
	2377,
	2206,
	705,
	4233,
	2381,
	1351,
	5072,
	4233,
	5072,
	4233,
	5072,
	4233,
	5072,
	5072,
	5072,
	1916,
	5165,
	4233,
	2386,
	2386,
	2386,
	5035,
	5035,
	2949,
	2175,
	4233,
	2375,
	5072,
	5072,
	2984,
	5035,
	5072,
	5165,
	2381,
	2375,
	904,
	923,
	358,
	355,
	201,
	2386,
	2386,
	2386,
	7242,
	7593,
	5165,
	5072,
	7028,
	2381,
	2381,
	4233,
	6682,
	7028,
	4233,
	2381,
	4233,
	2381,
	2381,
	4233,
	3716,
	5072,
	6229,
	5165,
	4304,
	2386,
	4233,
	2386,
	2386,
	3716,
	5072,
	5035,
	3710,
	3710,
	7593,
	3470,
	1779,
	3470,
	1564,
	5165,
	7593,
	7558,
	6682,
	7246,
	7246,
	7558,
	7558,
	5165,
	2386,
	2386,
	2386,
	5072,
	4233,
	5072,
	5072,
	5036,
	5072,
	4233,
	5072,
	7558,
	7558,
	7593,
	3716,
	5165,
	3716,
	2984,
	5072,
	5072,
	5165,
	2386,
	2386,
	2386,
	5165,
	5165,
	4121,
	901,
	2364,
	2377,
	3716,
	1158,
	3716,
	324,
	7246,
	7246,
	7593,
	3716,
	5165,
	4197,
	7558,
	5072,
	2377,
	4233,
	4199,
	4233,
	5165,
	5165,
	6686,
	7593,
	7242,
	7593,
	6885,
	4197,
	4197,
	4962,
	5165,
	2377,
	1337,
	270,
	4233,
	4197,
	5165,
	5165,
	5072,
	4233,
	5072,
	4233,
	4962,
	5165,
	3716,
	2984,
	5072,
	5165,
	5072,
	5072,
	4962,
	5072,
	5072,
	5072,
	4962,
	5072,
	5072,
	4962,
	5072,
	5035,
	5035,
	5072,
	7558,
	2984,
	5035,
	5072,
	7593,
	7246,
	1779,
	5165,
	5165,
	3710,
	5035,
	4962,
	5072,
	2375,
	3178,
	4962,
	1777,
	4197,
	5072,
	4233,
	5072,
	4962,
	5165,
	2375,
	5165,
	2381,
	3716,
	184,
	352,
	3716,
	1912,
	7593,
	5165,
	5035,
	3716,
	5072,
	5072,
	1779,
	5165,
	7593,
	4233,
	2386,
	2386,
	2386,
	4962,
	5036,
	5072,
	4233,
	5072,
	5072,
	4233,
	5072,
	5072,
	7442,
	7442,
	5165,
	7593,
	5165,
	3716,
	353,
	100,
	4121,
	4197,
	1077,
	1334,
	268,
	3470,
	268,
	4233,
	5165,
	921,
	2386,
	2386,
	2386,
	5165,
	4197,
	3716,
	2984,
	5072,
	5165,
	894,
	5072,
	4962,
	4121,
	3716,
	4121,
	2984,
	2984,
	2984,
	2984,
	2984,
	2386,
	2386,
	2386,
	5072,
	7558,
	4121,
	5165,
	1558,
	1558,
	6486,
	7246,
	1558,
	1006,
	7246,
	7246,
	4233,
	4233,
	403,
	928,
	7593,
	6242,
	6242,
	6690,
	7593,
	1158,
	7246,
	6690,
	1916,
	5072,
	5165,
	2377,
	1156,
	279,
	3716,
	4233,
	5072,
	5072,
	5072,
	5072,
	5072,
	4962,
	5165,
	5072,
	1495,
	7593,
	7593,
	5165,
	5072,
	5072,
	5072,
	5072,
	5072,
	5072,
	2984,
	3716,
	1916,
	3716,
	1158,
	1916,
	4975,
	7558,
	7437,
	1158,
	1916,
	5072,
	5165,
	7593,
	5454,
	5454,
	7011,
	7442,
	5955,
	6682,
	7246,
	7246,
	7246,
	7558,
	3716,
	5165,
	4233,
	7558,
	5036,
	5072,
	4233,
	5072,
	5072,
	4233,
	5072,
	5072,
	5035,
	5165,
	7593,
	5165,
	3716,
	7593,
	4233,
	2386,
	5165,
	5072,
	4962,
	4962,
	5072,
	5072,
	5072,
	5036,
	4198,
	4121,
	5072,
	4233,
	5072,
	5072,
	4962,
	5035,
	5072,
	4233,
	5072,
	5072,
	5072,
	4962,
	5072,
	5072,
	4962,
	4962,
	4121,
	5072,
	4962,
	5072,
	5072,
	-1,
	7246,
	7558,
	4121,
	4962,
	2386,
	2386,
	2206,
	5072,
	5165,
	5072,
	5165,
	5035,
	2364,
	5072,
	-1,
	-1,
	-1,
	-1,
	-1,
	923,
	2386,
	2386,
	2386,
	5165,
	5165,
	4121,
	5165,
	2376,
	7360,
	5149,
	4962,
	4962,
	5072,
	904,
	4233,
	5165,
	900,
	1077,
	1077,
	1334,
	1319,
	4962,
	4962,
	5035,
	1071,
	1071,
	7246,
	1071,
	1071,
	7442,
	4233,
	1077,
	5165,
	1158,
	1916,
	5072,
	1334,
	5072,
	5072,
	5035,
	5072,
	4121,
	4962,
	4121,
	4962,
	4121,
	1268,
	4233,
	6399,
	4962,
	4121,
	4962,
	4121,
	4962,
	5072,
	4233,
	2984,
	4233,
	4233,
	1564,
	7593,
	7558,
	7526,
	7545,
	7545,
	7558,
	6690,
	7442,
	1347,
	4962,
	5035,
	2984,
	5072,
	5035,
	5035,
	1334,
	5165,
	5165,
	5165,
	5165,
	1021,
	2381,
	2984,
	4233,
	4233,
	2984,
	4233,
	4233,
	5072,
	2381,
	4962,
	4233,
	5165,
	5165,
	5072,
	3716,
	1413,
	3710,
	5165,
	5165,
	4121,
	5165,
	4233,
	7593,
	5165,
	2984,
	5165,
	4233,
	5165,
	4962,
	2984,
	3698,
	5035,
	5072,
	2206,
	5165,
	4233,
	5072,
	4233,
	4962,
	4962,
	1914,
	1149,
	1914,
	6674,
	5738,
	2984,
	2984,
	5165,
	4121,
	5165,
	4962,
	4975,
	1559,
	2984,
	4121,
	5165,
	5165,
	4962,
	5072,
	4962,
	5165,
	4233,
	5165,
	4233,
	5165,
	4233,
	1351,
	5072,
	5072,
	5072,
	5072,
	5072,
	5035,
	4197,
	5035,
	3716,
	1077,
	268,
	3470,
	268,
	4233,
	1334,
	5165,
	4110,
	5165,
	1874,
	4198,
	4962,
	5036,
	4198,
	5072,
	5072,
	2381,
	4962,
	4121,
	4962,
	4121,
	5035,
	4197,
	4233,
	5072,
	4233,
	5072,
	4233,
	5072,
	4233,
	5072,
	4233,
	1914,
	1914,
	2375,
	5165,
	4233,
	5165,
	4233,
	5072,
	5072,
	4233,
	4233,
	5072,
	4962,
	4962,
	4962,
	5165,
	5165,
	5165,
	4233,
	2662,
	4123,
	5165,
	4123,
	4110,
	2381,
	3698,
	5165,
	5165,
	2381,
	1996,
	5165,
	5165,
	4233,
	5165,
	4233,
	5165,
	4233,
	929,
	4962,
	5036,
	4962,
	4962,
	4962,
	5035,
	5072,
	3699,
	731,
	731,
	1298,
	3699,
	1894,
	3699,
	3699,
	5072,
	5165,
	731,
	4110,
	7593,
	5165,
	4233,
	5165,
	4233,
	5165,
	4233,
	5165,
	4233,
	5165,
	4233,
	5165,
	4233,
	5165,
	4233,
	5165,
	4233,
	5072,
	5072,
	4233,
	5035,
	4197,
	4233,
	5072,
	4233,
	4962,
	4121,
	4233,
	5036,
	4962,
	4962,
	4962,
	4121,
	5072,
	4233,
	731,
	731,
	731,
	731,
	2984,
	4962,
	4962,
	1914,
	1894,
	731,
	4110,
	1133,
	3699,
	1006,
	5165,
	3699,
	5165,
	5165,
	4233,
	5165,
	4233,
	5165,
	4233,
	5165,
	4233,
	5165,
	4233,
	5165,
	4233,
	5165,
	4233,
	4233,
	2381,
	1351,
	4233,
	5072,
	5072,
	2984,
	5035,
	5072,
	7558,
	7545,
	5165,
	2206,
	4197,
	4197,
	2386,
	5072,
	5035,
	1994,
	4121,
	4197,
	2364,
	5072,
	4962,
	4962,
	4962,
	5035,
	4197,
	5035,
	5036,
	5036,
	4198,
	1874,
	2375,
	1077,
	1334,
	4121,
	5165,
	268,
	3470,
	268,
	4233,
	5165,
	3699,
	4198,
	1285,
	1286,
	7526,
	7526,
	7526,
	7526,
	5037,
	5035,
	5035,
	5035,
	4121,
	4962,
	4121,
	4962,
	1778,
	557,
	557,
	1778,
	1066,
	4197,
	144,
	3470,
	144,
	3470,
	7558,
	4962,
	7593,
	5165,
	5165,
	4197,
	861,
	864,
	5165,
	632,
	4962,
	4121,
	6367,
	6353,
	4962,
	4121,
	1538,
	5741,
	5734,
	5072,
	4233,
	3716,
	1094,
	6227,
	6192,
	4233,
	6383,
	6360,
	1158,
	7442,
	7442,
	4233,
	6027,
	6012,
	4121,
	4233,
	6367,
	6353,
	239,
	1075,
	75,
	1776,
	5393,
	5389,
	5393,
	5389,
	122,
	1776,
	5328,
	5327,
	239,
	1075,
	75,
	6880,
	1776,
	5393,
	5389,
	5393,
	5389,
	3470,
	1904,
	5687,
	5667,
	1286,
	5353,
	5348,
	1065,
	5597,
	5486,
	5165,
	4197,
	6847,
	6371,
	6354,
	4121,
	4199,
	5165,
	4233,
	1334,
	5165,
	1158,
	1341,
	3716,
	7442,
	7545,
	7022,
	7022,
	7593,
	7593,
	5165,
	4233,
	4233,
	4233,
	4233,
	4233,
	4233,
	4233,
	4233,
	4233,
	4233,
	4233,
	4233,
	4233,
	4233,
	4233,
	4233,
	5165,
	4233,
	5165,
	4233,
	2348,
	4962,
	5165,
	5165,
	7593,
	5072,
	4233,
	4197,
	4197,
	4121,
	5165,
	5165,
	4233,
	5037,
	928,
	5035,
	5165,
	5165,
	5165,
	4121,
	4197,
	2364,
	4233,
	4233,
	2375,
	7593,
	5165,
	4233,
	6690,
	7593,
	5165,
	1158,
	4233,
	2364,
	5072,
	4121,
	4962,
	2377,
	403,
	151,
	2984,
	2377,
	748,
	153,
	3716,
	5072,
	894,
	5937,
	4962,
	4962,
	4962,
	4962,
	5035,
	4197,
	5035,
	5036,
	5036,
	4198,
	4198,
	1874,
	3699,
	5165,
	5165,
	4121,
	1077,
	1334,
	268,
	3470,
	268,
	4233,
	7526,
	7558,
	7558,
	5072,
	5165,
	5165,
	2386,
	6609,
	5072,
	5165,
	5165,
	5072,
	5165,
	4233,
	7593,
	5072,
	5165,
	6605,
	7594,
	7558,
	7558,
	7558,
	7558,
	5072,
	5165,
	7558,
	4962,
	5165,
	7593,
	7377,
	5165,
	5165,
	5165,
	5072,
	5165,
	5072,
	4233,
	5165,
	5072,
	5165,
	5072,
	5165,
	5072,
	5165,
	5165,
	5072,
	5165,
	5072,
	5165,
	5072,
	5165,
	5072,
	5165,
	5072,
	5165,
	5072,
	5165,
	5165,
	1158,
	7593,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[4] = 
{
	{ 0x060000A9, 9,  (void**)&UnityTlsContext_WriteCallback_m466D11090AF989AD1F14E6FE049320297C12A86C_RuntimeMethod_var, 0 },
	{ 0x060000AB, 7,  (void**)&UnityTlsContext_ReadCallback_mA0BF382397D912B79B6064B58B6C7C5D97853245_RuntimeMethod_var, 0 },
	{ 0x060000AD, 8,  (void**)&UnityTlsContext_VerifyCallback_m8C61EF3A0037483AD56A083CA47D8E4C0404961E_RuntimeMethod_var, 0 },
	{ 0x060000AF, 6,  (void**)&UnityTlsContext_CertificateCallback_m793CC2EDD82935F29A3DEBD1F208DC56EA822E9C_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[9] = 
{
	{ 0x0200011B, { 0, 23 } },
	{ 0x0200011C, { 23, 2 } },
	{ 0x0200011E, { 25, 8 } },
	{ 0x0200011F, { 33, 3 } },
	{ 0x02000121, { 36, 6 } },
	{ 0x02000122, { 42, 3 } },
	{ 0x02000183, { 49, 3 } },
	{ 0x02000184, { 52, 11 } },
	{ 0x06000815, { 45, 4 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[63] = 
{
	{ (Il2CppRGCTXDataType)3, 28774 },
	{ (Il2CppRGCTXDataType)2, 7751 },
	{ (Il2CppRGCTXDataType)3, 28741 },
	{ (Il2CppRGCTXDataType)3, 28779 },
	{ (Il2CppRGCTXDataType)3, 28778 },
	{ (Il2CppRGCTXDataType)3, 28781 },
	{ (Il2CppRGCTXDataType)3, 28743 },
	{ (Il2CppRGCTXDataType)3, 28742 },
	{ (Il2CppRGCTXDataType)3, 28776 },
	{ (Il2CppRGCTXDataType)3, 28783 },
	{ (Il2CppRGCTXDataType)3, 15548 },
	{ (Il2CppRGCTXDataType)2, 3859 },
	{ (Il2CppRGCTXDataType)2, 743 },
	{ (Il2CppRGCTXDataType)3, 15547 },
	{ (Il2CppRGCTXDataType)2, 3047 },
	{ (Il2CppRGCTXDataType)3, 13476 },
	{ (Il2CppRGCTXDataType)3, 28777 },
	{ (Il2CppRGCTXDataType)3, 28780 },
	{ (Il2CppRGCTXDataType)3, 28782 },
	{ (Il2CppRGCTXDataType)2, 11404 },
	{ (Il2CppRGCTXDataType)3, 28775 },
	{ (Il2CppRGCTXDataType)1, 11404 },
	{ (Il2CppRGCTXDataType)2, 11404 },
	{ (Il2CppRGCTXDataType)3, 28784 },
	{ (Il2CppRGCTXDataType)2, 916 },
	{ (Il2CppRGCTXDataType)3, 46939 },
	{ (Il2CppRGCTXDataType)3, 53023 },
	{ (Il2CppRGCTXDataType)3, 36915 },
	{ (Il2CppRGCTXDataType)3, 36914 },
	{ (Il2CppRGCTXDataType)2, 3050 },
	{ (Il2CppRGCTXDataType)3, 13479 },
	{ (Il2CppRGCTXDataType)3, 36916 },
	{ (Il2CppRGCTXDataType)2, 11410 },
	{ (Il2CppRGCTXDataType)3, 13493 },
	{ (Il2CppRGCTXDataType)3, 13494 },
	{ (Il2CppRGCTXDataType)2, 940 },
	{ (Il2CppRGCTXDataType)3, 46940 },
	{ (Il2CppRGCTXDataType)3, 53024 },
	{ (Il2CppRGCTXDataType)2, 3051 },
	{ (Il2CppRGCTXDataType)3, 13480 },
	{ (Il2CppRGCTXDataType)3, 42240 },
	{ (Il2CppRGCTXDataType)3, 50517 },
	{ (Il2CppRGCTXDataType)3, 13495 },
	{ (Il2CppRGCTXDataType)3, 13496 },
	{ (Il2CppRGCTXDataType)2, 948 },
	{ (Il2CppRGCTXDataType)3, 2602 },
	{ (Il2CppRGCTXDataType)2, 1556 },
	{ (Il2CppRGCTXDataType)3, 2601 },
	{ (Il2CppRGCTXDataType)3, 2603 },
	{ (Il2CppRGCTXDataType)2, 1215 },
	{ (Il2CppRGCTXDataType)3, 131 },
	{ (Il2CppRGCTXDataType)2, 1215 },
	{ (Il2CppRGCTXDataType)3, 16843 },
	{ (Il2CppRGCTXDataType)3, 2607 },
	{ (Il2CppRGCTXDataType)2, 1217 },
	{ (Il2CppRGCTXDataType)3, 132 },
	{ (Il2CppRGCTXDataType)2, 4130 },
	{ (Il2CppRGCTXDataType)3, 16835 },
	{ (Il2CppRGCTXDataType)3, 43291 },
	{ (Il2CppRGCTXDataType)3, 43292 },
	{ (Il2CppRGCTXDataType)3, 2608 },
	{ (Il2CppRGCTXDataType)3, 2609 },
	{ (Il2CppRGCTXDataType)3, 2610 },
};
extern const CustomAttributesCacheGenerator g_System_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_CodeGenModule;
const Il2CppCodeGenModule g_System_CodeGenModule = 
{
	"System.dll",
	2710,
	s_methodPointers,
	80,
	s_adjustorThunks,
	s_InvokerIndices,
	4,
	s_reversePInvokeIndices,
	9,
	s_rgctxIndices,
	63,
	s_rgctxValues,
	NULL,
	g_System_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
