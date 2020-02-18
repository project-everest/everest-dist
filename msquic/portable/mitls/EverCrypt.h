/* 
  This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
  KreMLin invocation: D:\everest\kremlin\_build\src\Kremlin.native -minimal -add-include "kremlib.h" -fnoanonymous-unions -warn-error -9-7-6@4-14-15 -fsopts --debug,yes -verbose -library EverCrypt,EverCrypt.*,Hacl.*,Interop_assumptions,Check_sha_stdcall,Sha_update_bytes_stdcall,Check_aesni_stdcall -drop MonotoneMap -drop MonotoneMapNonDep -drop FStar.Tactics.\* -drop FStar.Tactics -drop Crypto.AEAD.\* -drop Crypto.HKDF -drop Crypto.HMAC -add-include "hacks.h" -add-include "kremlin/internal/compat.h" -bundle LowParse.\*,LowParseWrappers[rename=LowParse] -bundle Format.\* -bundle EverCrypt=EverCrypt,EverCrypt.\* -bundle FStar.\*,LowStar.\*,C,C.\*[rename=Mitls_Kremlib] -bundle Parsers.\* -bundle Spec.\* -bundle Meta.\* -bundle Lib.*[rename=Hacl_Lib] -bundle Hacl.\* -bundle KDF.\*,KDF,Idx,IV,Pkg,Pkg.\*[rename=Pkg] -bundle TLSConstants=TLSConstants,QD.TLS_protocolVersion,List.Helpers -bundle Hashing=Hashing.Spec,Hashing,Hashing.CRF,HMAC,HKDF,HMAC.UFCMA -bundle Old.Handshake=Old.HMAC.UFCMA,Old.Epochs,Old.KeySchedule,Old.Handshake -bundle StatefulLHAE=AEAD_GCM,LHAEPlain,StatefulPlain,StatefulLHAE -bundle StreamAE=StreamPlain,StreamAE -bundle CommonDH=TLS.Curve25519,DHGroup,ECGroup,CommonDH -bundle Content=Content,DataStream -bundle Record=Record,StAE,Transport,StreamDeltas -bundle PMS=PMS,RSAKey,TLSPRF -bundle Crypto.Plain=Buffer.Utils,Crypto.Indexing,Crypto.Plain,Crypto.Symmetric.Bytes -bundle Flags=DebugFlags,Flags,Flag,TLSInfoFlags -bundle Vale.Stdcalls.*,Vale.Interop,Vale.Interop.*,Vale.Wrapper.X64.*[rename=Vale] -bundle Vale.Inline.X64.*[rename=Vale_Inline] -bundle Vale.*[rename=Unused2] -ldopts -L,D:/everest/MLCrypto/openssl,-lcrypto,-lssl extract/Kremlin/FStar_Pervasives_Native.krml extract/Kremlin/FStar_Pervasives.krml extract/Kremlin/FStar_Squash.krml extract/Kremlin/FStar_Classical.krml extract/Kremlin/FStar_Preorder.krml extract/Kremlin/FStar_Calc.krml extract/Kremlin/FStar_Mul.krml extract/Kremlin/FStar_Math_Lib.krml extract/Kremlin/FStar_Math_Lemmas.krml extract/Kremlin/FStar_StrongExcludedMiddle.krml extract/Kremlin/FStar_FunctionalExtensionality.krml extract/Kremlin/FStar_List_Tot_Base.krml extract/Kremlin/FStar_List_Tot_Properties.krml extract/Kremlin/FStar_List_Tot.krml extract/Kremlin/FStar_Seq_Base.krml extract/Kremlin/FStar_Seq_Properties.krml extract/Kremlin/FStar_Seq.krml extract/Kremlin/FStar_BitVector.krml extract/Kremlin/FStar_UInt.krml extract/Kremlin/FStar_UInt32.krml extract/Kremlin/FStar_UInt8.krml extract/Kremlin/FStar_Exn.krml extract/Kremlin/FStar_Set.krml extract/Kremlin/FStar_Monotonic_Witnessed.krml extract/Kremlin/FStar_Ghost.krml extract/Kremlin/FStar_ErasedLogic.krml extract/Kremlin/FStar_PropositionalExtensionality.krml extract/Kremlin/FStar_PredicateExtensionality.krml extract/Kremlin/FStar_TSet.krml extract/Kremlin/FStar_Monotonic_Heap.krml extract/Kremlin/FStar_Heap.krml extract/Kremlin/FStar_ST.krml extract/Kremlin/FStar_All.krml extract/Kremlin/Lib_LoopCombinators.krml extract/Kremlin/FStar_Int.krml extract/Kremlin/FStar_Int64.krml extract/Kremlin/FStar_Int63.krml extract/Kremlin/FStar_Int32.krml extract/Kremlin/FStar_Int16.krml extract/Kremlin/FStar_Int8.krml extract/Kremlin/FStar_UInt64.krml extract/Kremlin/FStar_UInt63.krml extract/Kremlin/FStar_UInt16.krml extract/Kremlin/FStar_Int_Cast.krml extract/Kremlin/FStar_UInt128.krml extract/Kremlin/FStar_Int_Cast_Full.krml extract/Kremlin/FStar_Int128.krml extract/Kremlin/Lib_IntTypes.krml extract/Kremlin/Lib_RawIntTypes.krml extract/Kremlin/Lib_Sequence.krml extract/Kremlin/Lib_ByteSequence.krml extract/Kremlin/Spec_Chacha20.krml extract/Kremlin/Meta_Attribute.krml extract/Kremlin/FStar_Map.krml extract/Kremlin/FStar_Monotonic_HyperHeap.krml extract/Kremlin/FStar_Monotonic_HyperStack.krml extract/Kremlin/FStar_HyperStack.krml extract/Kremlin/FStar_HyperStack_ST.krml extract/Kremlin/FStar_Universe.krml extract/Kremlin/FStar_GSet.krml extract/Kremlin/FStar_ModifiesGen.krml extract/Kremlin/FStar_Range.krml extract/Kremlin/FStar_Reflection_Types.krml extract/Kremlin/FStar_Tactics_Types.krml extract/Kremlin/FStar_Tactics_Result.krml extract/Kremlin/FStar_Tactics_Effect.krml extract/Kremlin/FStar_Reflection_Data.krml extract/Kremlin/FStar_Tactics_Builtins.krml extract/Kremlin/FStar_Reflection_Const.krml extract/Kremlin/FStar_Char.krml extract/Kremlin/FStar_List.krml extract/Kremlin/FStar_String.krml extract/Kremlin/FStar_Order.krml extract/Kremlin/FStar_Reflection_Basic.krml extract/Kremlin/FStar_Reflection_Derived.krml extract/Kremlin/FStar_Reflection_Derived_Lemmas.krml extract/Kremlin/FStar_Reflection.krml extract/Kremlin/FStar_Tactics_SyntaxHelpers.krml extract/Kremlin/FStar_Tactics_Util.krml extract/Kremlin/FStar_Reflection_Formula.krml extract/Kremlin/FStar_Tactics_Derived.krml extract/Kremlin/FStar_Tactics_Logic.krml extract/Kremlin/FStar_Tactics.krml extract/Kremlin/FStar_BigOps.krml extract/Kremlin/LowStar_Monotonic_Buffer.krml extract/Kremlin/LowStar_Buffer.krml extract/Kremlin/LowStar_BufferOps.krml extract/Kremlin/Spec_Loops.krml extract/Kremlin/C_Loops.krml extract/Kremlin/Lib_Loops.krml extract/Kremlin/FStar_Endianness.krml extract/Kremlin/LowStar_Endianness.krml extract/Kremlin/LowStar_ImmutableBuffer.krml extract/Kremlin/Lib_Buffer.krml extract/Kremlin/Lib_ByteBuffer.krml extract/Kremlin/FStar_HyperStack_All.krml extract/Kremlin/Lib_IntVector_Intrinsics.krml extract/Kremlin/Spec_GaloisField.krml extract/Kremlin/Spec_AES.krml extract/Kremlin/Lib_IntVector.krml extract/Kremlin/Hacl_Spec_Chacha20_Vec.krml extract/Kremlin/Hacl_Spec_Chacha20_Lemmas.krml extract/Kremlin/Lib_Sequence_Lemmas.krml extract/Kremlin/Hacl_Spec_Chacha20_Equiv.krml extract/Kremlin/Hacl_Impl_Chacha20_Core32xN.krml extract/Kremlin/Hacl_Impl_Chacha20_Vec.krml extract/Kremlin/Vale_Lib_Seqs_s.krml extract/Kremlin/Vale_Def_Words_s.krml extract/Kremlin/Vale_Def_Words_Four_s.krml extract/Kremlin/Vale_Def_Words_Two_s.krml extract/Kremlin/Vale_Def_Words_Seq_s.krml extract/Kremlin/Vale_Def_Opaque_s.krml extract/Kremlin/Vale_Def_Types_s.krml extract/Kremlin/Vale_X64_Machine_s.krml extract/Kremlin/Vale_Lib_Map16.krml extract/Kremlin/Vale_Def_Prop_s.krml extract/Kremlin/Vale_X64_Flags.krml extract/Kremlin/Vale_X64_CPU_Features_s.krml extract/Kremlin/Vale_Curve25519_Fast_lemmas_internal.krml extract/Kremlin/Vale_Lib_Meta.krml extract/Kremlin/Vale_Def_Words_Two.krml extract/Kremlin/Vale_Lib_Seqs.krml extract/Kremlin/Vale_Def_TypesNative_s.krml extract/Kremlin/Vale_Arch_TypesNative.krml extract/Kremlin/Vale_Def_Words_Seq.krml extract/Kremlin/Vale_Arch_Types.krml extract/Kremlin/Vale_Curve25519_Fast_defs.krml extract/Kremlin/FStar_Algebra_CommMonoid.krml extract/Kremlin/FStar_Tactics_CanonCommSemiring.krml extract/Kremlin/Vale_Curve25519_FastUtil_helpers.krml extract/Kremlin/Vale_Curve25519_FastHybrid_helpers.krml extract/Kremlin/Vale_Curve25519_Fast_lemmas_external.krml extract/Kremlin/Vale_X64_Regs.krml extract/Kremlin/FStar_Float.krml extract/Kremlin/FStar_IO.krml extract/Kremlin/Vale_Def_PossiblyMonad.krml extract/Kremlin/LowStar_BufferView_Down.krml extract/Kremlin/LowStar_BufferView_Up.krml extract/Kremlin/Vale_Interop_Views.krml extract/Kremlin/FStar_Option.krml extract/Kremlin/Vale_Lib_Set.krml extract/Kremlin/Vale_X64_Instruction_s.krml extract/Kremlin/Vale_X64_Bytes_Code_s.krml extract/Kremlin/Vale_AES_AES_s.krml extract/Kremlin/Vale_Math_Poly2_Defs_s.krml extract/Kremlin/Vale_Math_Poly2_s.krml extract/Kremlin/Vale_Math_Poly2_Bits_s.krml extract/Kremlin/Spec_Hash_Definitions.krml extract/Kremlin/Spec_Hash_Lemmas0.krml extract/Kremlin/Spec_Hash_PadFinish.krml extract/Kremlin/Spec_SHA2_Constants.krml extract/Kremlin/Spec_SHA2.krml extract/Kremlin/Vale_X64_CryptoInstructions_s.krml extract/Kremlin/Vale_X64_Instructions_s.krml extract/Kremlin/Vale_Arch_HeapTypes_s.krml extract/Kremlin/Vale_Interop_Types.krml extract/Kremlin/Vale_Arch_MachineHeap_s.krml extract/Kremlin/Vale_Interop_Heap_s.krml extract/Kremlin/LowStar_Modifies.krml extract/Kremlin/LowStar_ModifiesPat.krml extract/Kremlin/LowStar_BufferView.krml extract/Kremlin/Vale_Lib_BufferViewHelpers.krml extract/Kremlin/Vale_Interop.krml extract/Kremlin/Vale_Arch_HeapImpl.krml extract/Kremlin/Vale_Arch_Heap.krml extract/Kremlin/Vale_X64_Machine_Semantics_s.krml extract/Kremlin/Vale_Interop_Base.krml extract/Kremlin/Vale_X64_Memory.krml extract/Kremlin/Vale_Arch_MachineHeap.krml extract/Kremlin/Vale_X64_Stack_i.krml extract/Kremlin/Vale_X64_Stack_Sems.krml extract/Kremlin/Vale_X64_BufferViewStore.krml extract/Kremlin/Vale_X64_Memory_Sems.krml extract/Kremlin/Vale_X64_State.krml extract/Kremlin/Vale_X64_StateLemmas.krml extract/Kremlin/Vale_X64_Lemmas.krml extract/Kremlin/Vale_X64_Print_s.krml extract/Kremlin/Vale_X64_Decls.krml extract/Kremlin/Vale_X64_QuickCode.krml extract/Kremlin/Vale_X64_QuickCodes.krml extract/Kremlin/Vale_X64_Taint_Semantics.krml extract/Kremlin/Vale_X64_InsLemmas.krml extract/Kremlin/Vale_X64_InsBasic.krml extract/Kremlin/Vale_X64_InsMem.krml extract/Kremlin/Vale_X64_InsVector.krml extract/Kremlin/Vale_X64_InsStack.krml extract/Kremlin/Vale_Curve25519_X64_FastHybrid.krml extract/Kremlin/Vale_Bignum_Defs.krml extract/Kremlin/Vale_Bignum_X64.krml extract/Kremlin/Vale_Curve25519_FastSqr_helpers.krml extract/Kremlin/Vale_Curve25519_X64_FastSqr.krml extract/Kremlin/Vale_Curve25519_FastMul_helpers.krml extract/Kremlin/Vale_Curve25519_X64_FastMul.krml extract/Kremlin/Vale_Curve25519_X64_FastWide.krml extract/Kremlin/Vale_Curve25519_X64_FastUtil.krml extract/Kremlin/Vale_X64_MemoryAdapters.krml extract/Kremlin/Vale_Interop_Assumptions.krml extract/Kremlin/Vale_Interop_X64.krml extract/Kremlin/Vale_AsLowStar_ValeSig.krml extract/Kremlin/Vale_AsLowStar_LowStarSig.krml extract/Kremlin/Vale_AsLowStar_MemoryHelpers.krml extract/Kremlin/Vale_AsLowStar_Wrapper.krml extract/Kremlin/Vale_Stdcalls_X64_Fadd.krml extract/Kremlin/Vale_Wrapper_X64_Fadd.krml extract/Kremlin/Spec_SHA1.krml extract/Kremlin/Spec_MD5.krml extract/Kremlin/Spec_Agile_Hash.krml extract/Kremlin/Spec_Hash_Incremental.krml extract/Kremlin/Spec_Hash_Lemmas.krml extract/Kremlin/FStar_Kremlin_Endianness.krml extract/Kremlin/Hacl_Hash_Lemmas.krml extract/Kremlin/Hacl_Hash_Definitions.krml extract/Kremlin/Hacl_Hash_PadFinish.krml extract/Kremlin/Hacl_Hash_MD.krml extract/Kremlin/Spec_SHA2_Lemmas.krml extract/Kremlin/Vale_X64_Stack.krml extract/Kremlin/Vale_SHA_SHA_helpers.krml extract/Kremlin/Vale_X64_InsSha.krml extract/Kremlin/Vale_SHA_X64.krml extract/Kremlin/Vale_Stdcalls_X64_Sha.krml extract/Kremlin/FStar_BV.krml extract/Kremlin/FStar_Reflection_Arith.krml extract/Kremlin/FStar_Tactics_BV.krml extract/Kremlin/Vale_Lib_Bv_s.krml extract/Kremlin/Vale_Math_Bits.krml extract/Kremlin/Vale_Lib_Tactics.krml extract/Kremlin/Vale_Poly1305_Bitvectors.krml extract/Kremlin/Vale_Math_Lemmas_Int.krml extract/Kremlin/FStar_Tactics_Canon.krml extract/Kremlin/Vale_Poly1305_Spec_s.krml extract/Kremlin/Vale_Poly1305_Math.krml extract/Kremlin/Vale_Poly1305_Util.krml extract/Kremlin/Vale_Poly1305_X64.krml extract/Kremlin/Vale_Stdcalls_X64_Poly.krml extract/Kremlin/Vale_Wrapper_X64_Poly.krml extract/Kremlin/Vale_Arch_BufferFriend.krml extract/Kremlin/Vale_SHA_Simplify_Sha.krml extract/Kremlin/Vale_Wrapper_X64_Sha.krml extract/Kremlin/Hacl_Hash_Core_SHA2_Constants.krml extract/Kremlin/Hacl_Hash_Core_SHA2.krml extract/Kremlin/Hacl_Hash_SHA2.krml extract/Kremlin/Hacl_Hash_Core_SHA1.krml extract/Kremlin/Hacl_Hash_SHA1.krml extract/Kremlin/Hacl_Hash_Core_MD5.krml extract/Kremlin/Hacl_Hash_MD5.krml extract/Kremlin/C.krml extract/Kremlin/C_String.krml extract/Kremlin/C_Failure.krml extract/Kremlin/FStar_Int31.krml extract/Kremlin/FStar_UInt31.krml extract/Kremlin/FStar_Integers.krml extract/Kremlin/EverCrypt_StaticConfig.krml extract/Kremlin/EverCrypt_TargetConfig.krml extract/Kremlin/Vale_Lib_Basic.krml extract/Kremlin/Vale_Lib_X64_Cpuid.krml extract/Kremlin/Vale_Lib_X64_Cpuidstdcall.krml extract/Kremlin/Vale_Stdcalls_X64_Cpuid.krml extract/Kremlin/Vale_Wrapper_X64_Cpuid.krml extract/Kremlin/EverCrypt_AutoConfig2.krml extract/Kremlin/EverCrypt_Helpers.krml extract/Kremlin/EverCrypt_Hash.krml extract/Kremlin/Spec_Agile_HMAC.krml extract/Kremlin/Hacl_HMAC.krml extract/Kremlin/EverCrypt_HMAC.krml extract/Kremlin/Declassify.krml extract/Kremlin/FStar_Bytes.krml extract/Kremlin/Hashing_Spec.krml extract/Kremlin/LowParse_Bytes32.krml extract/Kremlin/LowParse_Bytes.krml extract/Kremlin/LowParse_Spec_Base.krml extract/Kremlin/LowParse_SLow_Base.krml extract/Kremlin/LowParse_Spec_Option.krml extract/Kremlin/LowParse_SLow_Option.krml extract/Kremlin/LowParse_Spec_Combinators.krml extract/Kremlin/LowParse_Spec_IfThenElse.krml extract/Kremlin/LowParse_SLow_Combinators.krml extract/Kremlin/LowParse_Spec_List.krml extract/Kremlin/LowParse_SLow_List.krml extract/Kremlin/Spec_Curve25519_Lemmas.krml extract/Kremlin/Spec_Curve25519.krml extract/Kremlin/Hacl_Spec_Curve25519_AddAndDouble.krml extract/Kremlin/Hacl_Impl_Curve25519_Lemmas.krml extract/Kremlin/Hacl_Spec_Curve25519_Field64_Definition.krml extract/Kremlin/Hacl_Spec_Curve25519_Field64_Lemmas.krml extract/Kremlin/Hacl_Spec_Curve25519_Field64_Core.krml extract/Kremlin/Hacl_Spec_Curve25519_Field64.krml extract/Kremlin/Hacl_Spec_Curve25519_Field51_Definition.krml extract/Kremlin/Hacl_Spec_Curve25519_Field51_Lemmas.krml extract/Kremlin/Hacl_Spec_Curve25519_Field51.krml extract/Kremlin/Hacl_Impl_Curve25519_Fields_Core.krml extract/Kremlin/Hacl_Impl_Curve25519_Field64.krml extract/Kremlin/Hacl_Impl_Curve25519_Field51.krml extract/Kremlin/Hacl_Impl_Curve25519_Fields.krml extract/Kremlin/Hacl_Impl_Curve25519_AddAndDouble.krml extract/Kremlin/Spec_Poly1305.krml extract/Kremlin/Hacl_Spec_Poly1305_Vec.krml extract/Kremlin/Hacl_Spec_Poly1305_Field32xN.krml extract/Kremlin/Hacl_Poly1305_Field32xN_Lemmas.krml extract/Kremlin/Hacl_Impl_Poly1305_Lemmas.krml extract/Kremlin/Hacl_Spec_Poly1305_Field32xN_Lemmas.krml extract/Kremlin/Hacl_Impl_Poly1305_Field32xN.krml extract/Kremlin/Hacl_Spec_Poly1305_Lemmas.krml extract/Kremlin/Hacl_Spec_Poly1305_Equiv.krml extract/Kremlin/Hacl_Impl_Poly1305_Field32xN_256.krml extract/Kremlin/Hacl_Impl_Poly1305_Field32xN_128.krml extract/Kremlin/Hacl_Impl_Poly1305_Field32xN_32.krml extract/Kremlin/Hacl_Impl_Poly1305_Fields.krml extract/Kremlin/Hacl_Impl_Poly1305.krml extract/Kremlin/Spec_Chacha20Poly1305.krml extract/Kremlin/Hacl_Impl_Chacha20Poly1305_PolyCore.krml extract/Kremlin/Hacl_Impl_Chacha20Poly1305.krml extract/Kremlin/FStar_List_Pure_Base.krml extract/Kremlin/FStar_List_Pure_Properties.krml extract/Kremlin/FStar_List_Pure.krml extract/Kremlin/Meta_Interface.krml extract/Kremlin/Hacl_Meta_Chacha20Poly1305.krml extract/Kremlin/Hacl_Impl_Chacha20_Core32.krml extract/Kremlin/Hacl_Impl_Chacha20.krml extract/Kremlin/Hacl_Chacha20.krml extract/Kremlin/Hacl_Meta_Poly1305.krml extract/Kremlin/Hacl_Poly1305_32.krml extract/Kremlin/Hacl_Chacha20Poly1305_32.krml extract/Kremlin/FStar_Dyn.krml extract/Kremlin/LowStar_Failure.krml extract/Kremlin/EverCrypt_Vale.krml extract/Kremlin/EverCrypt_Specs.krml extract/Kremlin/EverCrypt_OpenSSL.krml extract/Kremlin/EverCrypt_Hacl.krml extract/Kremlin/EverCrypt_BCrypt.krml extract/Kremlin/EverCrypt_Cipher.krml extract/Kremlin/Hacl_Spec_Curve25519_Finv.krml extract/Kremlin/Hacl_Impl_Curve25519_Finv.krml extract/Kremlin/Hacl_Impl_Curve25519_Generic.krml extract/Kremlin/Hacl_Meta_Curve25519.krml extract/Kremlin/Hacl_Curve25519_51.krml extract/Kremlin/Vale_Stdcalls_X64_Fswap.krml extract/Kremlin/Vale_Wrapper_X64_Fswap.krml extract/Kremlin/Vale_X64_Print_Inline_s.krml extract/Kremlin/Vale_Inline_X64_Fswap_inline.krml extract/Kremlin/Vale_Stdcalls_X64_Fsqr.krml extract/Kremlin/Vale_Wrapper_X64_Fsqr.krml extract/Kremlin/Vale_Inline_X64_Fsqr_inline.krml extract/Kremlin/Vale_Stdcalls_X64_Fmul.krml extract/Kremlin/Vale_Wrapper_X64_Fmul.krml extract/Kremlin/Vale_Inline_X64_Fmul_inline.krml extract/Kremlin/Vale_Stdcalls_X64_Fsub.krml extract/Kremlin/Vale_Wrapper_X64_Fsub.krml extract/Kremlin/Vale_Inline_X64_Fadd_inline.krml extract/Kremlin/Hacl_Impl_Curve25519_Field64_Vale.krml extract/Kremlin/Hacl_Curve25519_64.krml extract/Kremlin/EverCrypt_Curve25519.krml extract/Kremlin/Hacl_Poly1305_128.krml extract/Kremlin/Hacl_Poly1305_256.krml extract/Kremlin/Vale_Poly1305_Equiv.krml extract/Kremlin/Vale_Poly1305_CallingFromLowStar.krml extract/Kremlin/EverCrypt_Poly1305.krml extract/Kremlin/Lib_Memzero.krml extract/Kremlin/Spec_HMAC_DRBG.krml extract/Kremlin/Hacl_HMAC_DRBG.krml extract/Kremlin/Lib_RandomBuffer_System.krml extract/Kremlin/EverCrypt_DRBG.krml extract/Kremlin/Spec_Agile_HKDF.krml extract/Kremlin/Hacl_HKDF.krml extract/Kremlin/EverCrypt_HKDF.krml extract/Kremlin/EverCrypt.krml extract/Kremlin/FStar_Printf.krml extract/Kremlin/FStar_Error.krml extract/Kremlin/FStar_Tcp.krml extract/Kremlin/LowParse_Spec_FLData.krml extract/Kremlin/LowParse_Math.krml extract/Kremlin/LowParse_Slice.krml extract/Kremlin/LowParse_Low_Base.krml extract/Kremlin/LowParse_Low_Combinators.krml extract/Kremlin/LowParse_Low_FLData.krml extract/Kremlin/LowParse_Spec_Seq.krml extract/Kremlin/LowParse_Spec_Int.krml extract/Kremlin/LowParse_Spec_BoundedInt.krml extract/Kremlin/LowParse_Low_Endianness.krml extract/Kremlin/LowParse_BitFields.krml extract/Kremlin/LowParse_Endianness.krml extract/Kremlin/LowParse_Endianness_BitFields.krml extract/Kremlin/LowParse_Low_BoundedInt.krml extract/Kremlin/LowParse_Spec_SeqBytes_Base.krml extract/Kremlin/LowParse_Spec_DER.krml extract/Kremlin/LowParse_Spec_BCVLI.krml extract/Kremlin/LowParse_Spec_AllIntegers.krml extract/Kremlin/LowParse_Spec_VLData.krml extract/Kremlin/LowParse_Low_VLData.krml extract/Kremlin/LowParse_Spec_VLGen.krml extract/Kremlin/LowParse_Low_VLGen.krml extract/Kremlin/LowParse_Low_Int.krml extract/Kremlin/LowParse_Low_DER.krml extract/Kremlin/LowParse_Low_BCVLI.krml extract/Kremlin/LowParse_Low_List.krml extract/Kremlin/LowParse_Spec_Array.krml extract/Kremlin/LowParse_Spec_VCList.krml extract/Kremlin/LowParse_Low_VCList.krml extract/Kremlin/LowParse_Low_IfThenElse.krml extract/Kremlin/LowParse_TacLib.krml extract/Kremlin/LowParse_Spec_Enum.krml extract/Kremlin/LowParse_Spec_Sum.krml extract/Kremlin/LowParse_Low_Enum.krml extract/Kremlin/LowParse_Low_Sum.krml extract/Kremlin/LowParse_Low_Tac_Sum.krml extract/Kremlin/LowParse_Low_Option.krml extract/Kremlin/LowParse_Spec_Bytes.krml extract/Kremlin/LowParse_Low_Bytes.krml extract/Kremlin/LowParse_Low_Array.krml extract/Kremlin/LowParse_Low.krml extract/Kremlin/LowParse_SLow_FLData.krml extract/Kremlin/LowParse_SLow_VLGen.krml extract/Kremlin/LowParse_Spec_Endianness.krml extract/Kremlin/LowParse_Spec_Endianness_Instances.krml extract/Kremlin/LowParse_SLow_Endianness.krml extract/Kremlin/LowParse_SLow_BoundedInt.krml extract/Kremlin/LowParse_SLow_Int.krml extract/Kremlin/LowParse_SLow_DER.krml extract/Kremlin/LowParse_SLow_BCVLI.krml extract/Kremlin/LowParse_SLow_VCList.krml extract/Kremlin/LowParse_SLow_IfThenElse.krml extract/Kremlin/LowParse_SLow_Enum.krml extract/Kremlin/LowParse_SLow_Sum.krml extract/Kremlin/LowParse_SLow_Tac_Enum.krml extract/Kremlin/LowParse_SLow_Tac_Sum.krml extract/Kremlin/LowParse_SLow_VLData.krml extract/Kremlin/LowParse_SLow_Bytes.krml extract/Kremlin/LowParse_SLow_Array.krml extract/Kremlin/LowParse_Spec_Tac_Combinators.krml extract/Kremlin/LowParse_SLow.krml extract/Kremlin/Parsers_AlertDescription.krml extract/Kremlin/Parsers_AlertLevel.krml extract/Kremlin/Parsers_Alert.krml extract/Kremlin/TLSError.krml extract/Kremlin/Parsers_NamedGroup.krml extract/Kremlin/Format_Constants.krml extract/Kremlin/Format_UncompressedPointRepresentation.krml extract/Kremlin/Format_KeyShareEntry.krml extract/Kremlin/Flags.krml extract/Kremlin/Parsers_ECCurveType.krml extract/Kremlin/DebugFlags.krml extract/Kremlin/FStar_DependentMap.krml extract/Kremlin/FStar_Monotonic_DependentMap.krml extract/Kremlin/Mem.krml extract/Kremlin/Random.krml extract/Kremlin/TLS_Curve25519.krml extract/Kremlin/Parse.krml extract/Kremlin/ECGroup.krml extract/Kremlin/DHGroup.krml extract/Kremlin/Parsers_NamedGroupList.krml extract/Kremlin/CommonDH.krml extract/Kremlin/FFICallbacks.krml extract/Kremlin/Parsers_CompressionMethod.krml extract/Kremlin/Parsers_SignatureScheme.krml extract/Kremlin/Parsers_SignatureSchemeList.krml extract/Kremlin/LowParseWrappers.krml extract/Kremlin/Parsers_CipherSuite.krml extract/Kremlin/CipherSuite.krml extract/Kremlin/Parsers_ProtocolVersion.krml extract/Kremlin/TLSConstants.krml extract/Kremlin/HMAC.krml extract/Kremlin/RSAKey.krml extract/Kremlin/PMS.krml extract/Kremlin/List_Helpers.krml extract/Kremlin/PSK.krml extract/Kremlin/Extensions.krml extract/Kremlin/Cert.krml extract/Kremlin/TLSInfoFlags.krml extract/Kremlin/FStar_Date.krml extract/Kremlin/Nonce.krml extract/Kremlin/TLSInfo.krml extract/Kremlin/Crypto_Indexing.krml extract/Kremlin/Flag.krml extract/Kremlin/FStar_Old_Endianness.krml extract/Kremlin/FStar_Buffer.krml extract/Kremlin/C_Compat_Loops.krml extract/Kremlin/Buffer_Utils.krml extract/Kremlin/Crypto_Symmetric_Bytes.krml extract/Kremlin/Crypto_Plain.krml extract/Kremlin/AEADProvider.krml extract/Kremlin/Range.krml extract/Kremlin/DataStream.krml extract/Kremlin/Alert.krml extract/Kremlin/Content.krml extract/Kremlin/StreamPlain.krml extract/Kremlin/Hashing.krml extract/Kremlin/TLSPRF.krml extract/Kremlin/Hashing_CRF.krml extract/Kremlin/HandshakeMessages.krml extract/Kremlin/HandshakeLog.krml extract/Kremlin/Parsers_Boolean.krml extract/Kremlin/Parsers_TicketContents13_custom_data.krml extract/Kremlin/Parsers_TicketContents13_nonce.krml extract/Kremlin/Parsers_TicketContents13_rms.krml extract/Kremlin/Parsers_TicketContents13.krml extract/Kremlin/Parsers_TicketContents12_master_secret.krml extract/Kremlin/Parsers_TicketContents12.krml extract/Kremlin/Parsers_TicketVersion.krml extract/Kremlin/Parsers_TicketContents.krml extract/Kremlin/Parsers_TicketContents12_master_secret_Low.krml extract/Kremlin/Parsers_Ticket_Low.krml extract/Kremlin/Ticket.krml extract/Kremlin/Negotiation.krml extract/Kremlin/FStar_Monotonic_Seq.krml extract/Kremlin/StreamAE.krml extract/Kremlin/StatefulPlain.krml extract/Kremlin/LHAEPlain.krml extract/Kremlin/AEAD_GCM.krml extract/Kremlin/StatefulLHAE.krml extract/Kremlin/StAE.krml extract/Kremlin/Old_HMAC_UFCMA.krml extract/Kremlin/Parsers_HKDF_HkdfLabel_context.krml extract/Kremlin/Parsers_HKDF_HkdfLabel_label.krml extract/Kremlin/Parsers_HKDF_HkdfLabel.krml extract/Kremlin/HKDF.krml extract/Kremlin/Old_KeySchedule.krml extract/Kremlin/Old_Epochs.krml extract/Kremlin/FStar_HyperStack_IO.krml extract/Kremlin/StreamDeltas.krml extract/Kremlin/Old_Handshake.krml extract/Kremlin/Transport.krml extract/Kremlin/BufferBytes.krml extract/Kremlin/Record.krml extract/Kremlin/Connection.krml extract/Kremlin/TLS.krml extract/Kremlin/FFI.krml extract/Kremlin/Pkg.krml extract/Kremlin/Idx.krml extract/Kremlin/Model.krml extract/Kremlin/FStar_Test.krml extract/Kremlin/Pkg_Tree.krml extract/Kremlin/KDF.krml extract/Kremlin/QUIC.krml extract/Kremlin/IV.krml extract/Kremlin/KDF_Rekey.krml -tmpdir extract/Kremlin-Library -skip-compilation
  F* version: 1f9505d5
  KreMLin version: 44acff92
 */
#include "kremlib.h"
#include "hacks.h"
#include "kremlin/internal/compat.h"

#ifndef __EverCrypt_H
#define __EverCrypt_H

#include "Spec.h"


extern void EverCrypt_AutoConfig2_init();

extern void
EverCrypt_Hash_hash(
  Spec_Hash_Definitions_hash_alg a,
  uint8_t *dst,
  uint8_t *input,
  uint32_t len
);

extern void
EverCrypt_HMAC_compute(
  Spec_Hash_Definitions_hash_alg a,
  uint8_t *mac,
  uint8_t *key,
  uint32_t keylen,
  uint8_t *data,
  uint32_t datalen
);

extern bool EverCrypt_Curve25519_ecdh(void **shared, void **my_priv, void **their_pub);

KRML_DEPRECATED("expand")

extern void
EverCrypt_HKDF_hkdf_expand(
  Spec_Hash_Definitions_hash_alg a,
  uint8_t *okm,
  uint8_t *prk,
  uint32_t prklen,
  uint8_t *info,
  uint32_t infolen,
  uint32_t len
);

extern uint32_t EverCrypt_random_init();

extern void EverCrypt_random_sample(uint32_t len, uint8_t *out);

extern void EverCrypt_random_cleanup();

#define EverCrypt_AES128_OPENSSL 0
#define EverCrypt_AES128_BCRYPT 1
#define EverCrypt_AES128_VALE 2
#define EverCrypt_AES128_HACL 3

typedef uint8_t EverCrypt_aes128_key_s_tags;

typedef struct EverCrypt_aes128_key_s_s EverCrypt_aes128_key_s;

extern bool EverCrypt_uu___is_AES128_OPENSSL(EverCrypt_aes128_key_s projectee);

extern FStar_Dyn_dyn
EverCrypt___proj__AES128_OPENSSL__item__st(EverCrypt_aes128_key_s projectee);

extern bool EverCrypt_uu___is_AES128_BCRYPT(EverCrypt_aes128_key_s projectee);

extern FStar_Dyn_dyn
EverCrypt___proj__AES128_BCRYPT__item__st(EverCrypt_aes128_key_s projectee);

extern bool EverCrypt_uu___is_AES128_VALE(EverCrypt_aes128_key_s projectee);

extern uint8_t *EverCrypt___proj__AES128_VALE__item__w(EverCrypt_aes128_key_s projectee);

extern uint8_t *EverCrypt___proj__AES128_VALE__item__sbox(EverCrypt_aes128_key_s projectee);

extern bool EverCrypt_uu___is_AES128_HACL(EverCrypt_aes128_key_s projectee);

extern uint8_t *EverCrypt___proj__AES128_HACL__item__w(EverCrypt_aes128_key_s projectee);

extern uint8_t *EverCrypt___proj__AES128_HACL__item__sbox(EverCrypt_aes128_key_s projectee);

typedef EverCrypt_aes128_key_s *EverCrypt_aes128_key;

KRML_DEPRECATED("Please use EverCrypt_CTR.h (from C) or EverCrypt.CTR.fsti (from F*) ")

extern EverCrypt_aes128_key_s *EverCrypt_aes128_create(uint8_t *k1);

KRML_DEPRECATED("Please use EverCrypt_CTR.h (from C) or EverCrypt.CTR.fsti (from F*) ")

extern void
EverCrypt_aes128_compute(EverCrypt_aes128_key_s *k1, uint8_t *plain, uint8_t *cipher);

KRML_DEPRECATED("Please use EverCrypt_CTR.h (from C) or EverCrypt.CTR.fsti (from F*) ")

extern void EverCrypt_aes128_free(EverCrypt_aes128_key_s *pk);

#define EverCrypt_AES256_OPENSSL 0
#define EverCrypt_AES256_BCRYPT 1
#define EverCrypt_AES256_HACL 2

typedef uint8_t EverCrypt_aes256_key_s_tags;

typedef struct EverCrypt_aes256_key_s_s EverCrypt_aes256_key_s;

extern bool EverCrypt_uu___is_AES256_OPENSSL(EverCrypt_aes256_key_s projectee);

extern FStar_Dyn_dyn
EverCrypt___proj__AES256_OPENSSL__item__st(EverCrypt_aes256_key_s projectee);

extern bool EverCrypt_uu___is_AES256_BCRYPT(EverCrypt_aes256_key_s projectee);

extern FStar_Dyn_dyn
EverCrypt___proj__AES256_BCRYPT__item__st(EverCrypt_aes256_key_s projectee);

extern bool EverCrypt_uu___is_AES256_HACL(EverCrypt_aes256_key_s projectee);

extern uint8_t *EverCrypt___proj__AES256_HACL__item__w(EverCrypt_aes256_key_s projectee);

extern uint8_t *EverCrypt___proj__AES256_HACL__item__sbox(EverCrypt_aes256_key_s projectee);

typedef EverCrypt_aes256_key_s *EverCrypt_aes256_key;

KRML_DEPRECATED("Please use EverCrypt_CTR.h (from C) or EverCrypt.CTR.fsti (from F*) ")

extern EverCrypt_aes256_key_s *EverCrypt_aes256_create(uint8_t *k1);

KRML_DEPRECATED("Please use EverCrypt_CTR.h (from C) or EverCrypt.CTR.fsti (from F*) ")

extern void
EverCrypt_aes256_compute(EverCrypt_aes256_key_s *k1, uint8_t *plain, uint8_t *cipher);

KRML_DEPRECATED("Please use EverCrypt_CTR.h (from C) or EverCrypt.CTR.fsti (from F*) ")

extern void EverCrypt_aes256_free(EverCrypt_aes256_key_s *pk);

KRML_DEPRECATED("Please use EverCrypt_AEAD.h (from C) or EverCrypt.AEAD.fsti (from F*) ")

extern void
EverCrypt_aes128_gcm_encrypt(
  uint8_t *key,
  uint8_t *iv,
  uint8_t *ad,
  uint32_t adlen,
  uint8_t *plaintext,
  uint32_t len,
  uint8_t *cipher,
  uint8_t *tag
);

KRML_DEPRECATED("Please use EverCrypt_AEAD.h (from C) or EverCrypt.AEAD.fsti (from F*) ")

extern uint32_t
EverCrypt_aes128_gcm_decrypt(
  uint8_t *key,
  uint8_t *iv,
  uint8_t *ad,
  uint32_t adlen,
  uint8_t *plaintext,
  uint32_t len,
  uint8_t *cipher,
  uint8_t *tag
);

KRML_DEPRECATED("Please use EverCrypt_AEAD.h (from C) or EverCrypt.AEAD.fsti (from F*) ")

extern void
EverCrypt_aes256_gcm_encrypt(
  uint8_t *key,
  uint8_t *iv,
  uint8_t *ad,
  uint32_t adlen,
  uint8_t *plaintext,
  uint32_t len,
  uint8_t *cipher,
  uint8_t *tag
);

KRML_DEPRECATED("Please use EverCrypt_AEAD.h (from C) or EverCrypt.AEAD.fsti (from F*) ")

extern uint32_t
EverCrypt_aes256_gcm_decrypt(
  uint8_t *key,
  uint8_t *iv,
  uint8_t *ad,
  uint32_t adlen,
  uint8_t *plaintext,
  uint32_t len,
  uint8_t *cipher,
  uint8_t *tag
);

#define EverCrypt_AES128_CBC 0
#define EverCrypt_AES256_CBC 1
#define EverCrypt_TDES_EDE_CBC 2

typedef uint8_t EverCrypt_block_cipher_alg;

extern bool EverCrypt_uu___is_AES128_CBC(EverCrypt_block_cipher_alg projectee);

extern bool EverCrypt_uu___is_AES256_CBC(EverCrypt_block_cipher_alg projectee);

extern bool EverCrypt_uu___is_TDES_EDE_CBC(EverCrypt_block_cipher_alg projectee);

extern uint32_t EverCrypt_block_cipher_keyLen(EverCrypt_block_cipher_alg uu___0_9628);

extern uint32_t EverCrypt_block_cipher_blockLen(EverCrypt_block_cipher_alg uu___1_9638);

#define EverCrypt_RC4_128 0

typedef uint8_t EverCrypt_stream_cipher_alg;

extern bool EverCrypt_uu___is_RC4_128(EverCrypt_stream_cipher_alg projectee);

#define EverCrypt_AES128_GCM 0
#define EverCrypt_AES256_GCM 1
#define EverCrypt_CHACHA20_POLY1305 2
#define EverCrypt_AES128_CCM 3
#define EverCrypt_AES256_CCM 4
#define EverCrypt_AES128_CCM8 5
#define EverCrypt_AES256_CCM8 6

typedef uint8_t EverCrypt_aead_alg;

extern bool EverCrypt_uu___is_AES128_GCM(EverCrypt_aead_alg projectee);

extern bool EverCrypt_uu___is_AES256_GCM(EverCrypt_aead_alg projectee);

extern bool EverCrypt_uu___is_CHACHA20_POLY1305(EverCrypt_aead_alg projectee);

extern bool EverCrypt_uu___is_AES128_CCM(EverCrypt_aead_alg projectee);

extern bool EverCrypt_uu___is_AES256_CCM(EverCrypt_aead_alg projectee);

extern bool EverCrypt_uu___is_AES128_CCM8(EverCrypt_aead_alg projectee);

extern bool EverCrypt_uu___is_AES256_CCM8(EverCrypt_aead_alg projectee);

KRML_DEPRECATED("Please use EverCrypt_AEAD.h (from C) or EverCrypt.AEAD.fsti (from F*) ")

extern uint32_t EverCrypt_aead_keyLen(EverCrypt_aead_alg uu___2_9745);

KRML_DEPRECATED("Please use EverCrypt_AEAD.h (from C) or EverCrypt.AEAD.fsti (from F*) ")

extern uint32_t EverCrypt_aead_tagLen(EverCrypt_aead_alg uu___3_9759);

KRML_DEPRECATED("Please use EverCrypt_AEAD.h (from C) or EverCrypt.AEAD.fsti (from F*) ")

extern uint32_t EverCrypt_aead_ivLen(EverCrypt_aead_alg a);

#define EverCrypt_AEAD_OPENSSL 0
#define EverCrypt_AEAD_BCRYPT 1
#define EverCrypt_AEAD_AES128_GCM_VALE 2
#define EverCrypt_AEAD_AES256_GCM_VALE 3
#define EverCrypt_AEAD_CHACHA20_POLY1305_HACL 4

typedef uint8_t EverCrypt__aead_state_tags;

typedef struct EverCrypt__aead_state_s EverCrypt__aead_state;

typedef EverCrypt__aead_state EverCrypt_aead_state_s;

typedef EverCrypt__aead_state *EverCrypt_aead_state;

KRML_DEPRECATED("Please use EverCrypt_AEAD.h (from C) or EverCrypt.AEAD.fsti (from F*) ")

extern EverCrypt__aead_state *EverCrypt_aead_create(EverCrypt_aead_alg alg, uint8_t *k1);

KRML_DEPRECATED("Please use EverCrypt_AEAD.h (from C) or EverCrypt.AEAD.fsti (from F*) ")

extern void
EverCrypt_aead_encrypt(
  EverCrypt__aead_state *pkey,
  uint8_t *iv,
  uint8_t *ad,
  uint32_t adlen,
  uint8_t *plaintext,
  uint32_t len,
  uint8_t *cipher,
  uint8_t *tag
);

KRML_DEPRECATED("Please use EverCrypt_AEAD.h (from C) or EverCrypt.AEAD.fsti (from F*) ")

extern uint32_t
EverCrypt_aead_decrypt(
  EverCrypt__aead_state *pkey,
  uint8_t *iv,
  uint8_t *ad,
  uint32_t adlen,
  uint8_t *plaintext,
  uint32_t len,
  uint8_t *cipher,
  uint8_t *tag
);

KRML_DEPRECATED("Please use EverCrypt_AEAD.h (from C) or EverCrypt.AEAD.fsti (from F*) ")

extern void EverCrypt_aead_free(EverCrypt__aead_state *pk);

#define EverCrypt_DH_OPENSSL 0
#define EverCrypt_DH_DUMMY 1

typedef uint8_t EverCrypt__dh_state_tags;

typedef struct EverCrypt__dh_state_s EverCrypt__dh_state;

typedef EverCrypt__dh_state EverCrypt_dh_state_s;

typedef EverCrypt__dh_state *EverCrypt_dh_state;

extern EverCrypt__dh_state
*EverCrypt_dh_load_group(
  uint8_t *dh_p,
  uint32_t dh_p_len,
  uint8_t *dh_g,
  uint32_t dh_g_len,
  uint8_t *dh_q,
  uint32_t dh_q_len
);

extern void EverCrypt_dh_free_group(EverCrypt__dh_state *st);

extern uint32_t EverCrypt_dh_keygen(EverCrypt__dh_state *st, uint8_t *public);

extern uint32_t
EverCrypt_dh_compute(
  EverCrypt__dh_state *st,
  uint8_t *public,
  uint32_t public_len,
  uint8_t *out
);

#define EverCrypt_ECC_P256 0
#define EverCrypt_ECC_P384 1
#define EverCrypt_ECC_P521 2
#define EverCrypt_ECC_X25519 3
#define EverCrypt_ECC_X448 4

typedef uint8_t EverCrypt_ec_curve;

extern bool EverCrypt_uu___is_ECC_P256(EverCrypt_ec_curve projectee);

extern bool EverCrypt_uu___is_ECC_P384(EverCrypt_ec_curve projectee);

extern bool EverCrypt_uu___is_ECC_P521(EverCrypt_ec_curve projectee);

extern bool EverCrypt_uu___is_ECC_X25519(EverCrypt_ec_curve projectee);

extern bool EverCrypt_uu___is_ECC_X448(EverCrypt_ec_curve projectee);

#define EverCrypt_ECDH_OPENSSL 0
#define EverCrypt_ECDH_DUMMY 1

typedef uint8_t EverCrypt__ecdh_state_tags;

typedef struct EverCrypt__ecdh_state_s EverCrypt__ecdh_state;

typedef EverCrypt__ecdh_state EverCrypt_ecdh_state_s;

typedef EverCrypt__ecdh_state *EverCrypt_ecdh_state;

extern EverCrypt__ecdh_state *EverCrypt_ecdh_load_curve(EverCrypt_ec_curve g1);

extern void EverCrypt_ecdh_free_curve(EverCrypt__ecdh_state *st);

extern void EverCrypt_ecdh_keygen(EverCrypt__ecdh_state *st, uint8_t *outx, uint8_t *outy);

extern uint32_t
EverCrypt_ecdh_compute(EverCrypt__ecdh_state *st, uint8_t *inx, uint8_t *iny, uint8_t *out);

#define __EverCrypt_H_DEFINED
#endif
